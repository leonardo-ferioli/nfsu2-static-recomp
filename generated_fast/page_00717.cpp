#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_718(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x717,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x717,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_717(u8* __restrict R,Cpu& c);
u32 page_717(Cpu& c){return body_717(c.regs.data(),c);}
__attribute__((noinline)) u32 body_717(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x717000:goto L717000;
case 0x717003:c.instructions+=315;goto B717003;
case 0x717006:c.instructions+=314;goto B717006;
case 0x71700a:c.instructions+=313;goto B71700a;
case 0x71700e:c.instructions+=312;goto B71700e;
case 0x717011:c.instructions+=311;goto B717011;
case 0x717014:c.instructions+=310;goto B717014;
case 0x717016:c.instructions+=309;goto B717016;
case 0x717018:c.instructions+=308;goto B717018;
case 0x71701b:c.instructions+=307;goto B71701b;
case 0x71701e:c.instructions+=306;goto B71701e;
case 0x717022:c.instructions+=305;goto B717022;
case 0x717025:c.instructions+=304;goto B717025;
case 0x717028:c.instructions+=303;goto B717028;
case 0x71702b:c.instructions+=302;goto B71702b;
case 0x71702e:c.instructions+=301;goto B71702e;
case 0x717031:c.instructions+=300;goto B717031;
case 0x717035:c.instructions+=299;goto B717035;
case 0x717038:c.instructions+=298;goto B717038;
case 0x71703c:c.instructions+=297;goto B71703c;
case 0x71703f:c.instructions+=296;goto B71703f;
case 0x717042:c.instructions+=295;goto B717042;
case 0x717045:c.instructions+=294;goto B717045;
case 0x717049:c.instructions+=293;goto B717049;
case 0x71704c:c.instructions+=292;goto B71704c;
case 0x71704f:c.instructions+=291;goto B71704f;
case 0x717052:c.instructions+=290;goto B717052;
case 0x717056:c.instructions+=289;goto B717056;
case 0x717059:c.instructions+=288;goto B717059;
case 0x71705c:c.instructions+=287;goto B71705c;
case 0x71705f:c.instructions+=286;goto B71705f;
case 0x717063:c.instructions+=285;goto B717063;
case 0x717066:c.instructions+=284;goto B717066;
case 0x717069:c.instructions+=283;goto B717069;
case 0x71706c:c.instructions+=282;goto B71706c;
case 0x71706f:c.instructions+=281;goto B71706f;
case 0x717072:c.instructions+=280;goto B717072;
case 0x717075:c.instructions+=279;goto B717075;
case 0x717078:c.instructions+=278;goto B717078;
case 0x71707c:c.instructions+=277;goto B71707c;
case 0x71707f:c.instructions+=276;goto B71707f;
case 0x717082:c.instructions+=275;goto B717082;
case 0x717085:c.instructions+=274;goto B717085;
case 0x717089:c.instructions+=273;goto B717089;
case 0x71708c:c.instructions+=272;goto B71708c;
case 0x71708f:c.instructions+=271;goto B71708f;
case 0x717092:c.instructions+=270;goto B717092;
case 0x717099:c.instructions+=269;goto B717099;
case 0x71709c:c.instructions+=268;goto B71709c;
case 0x71709f:c.instructions+=267;goto B71709f;
case 0x7170a2:c.instructions+=266;goto B7170a2;
case 0x7170a9:c.instructions+=265;goto B7170a9;
case 0x7170ac:c.instructions+=264;goto B7170ac;
case 0x7170af:c.instructions+=263;goto B7170af;
case 0x7170b2:c.instructions+=262;goto B7170b2;
case 0x7170b5:c.instructions+=261;goto B7170b5;
case 0x7170b8:c.instructions+=260;goto B7170b8;
case 0x7170bb:c.instructions+=259;goto B7170bb;
case 0x7170be:c.instructions+=258;goto B7170be;
case 0x7170c5:c.instructions+=257;goto B7170c5;
case 0x7170c8:c.instructions+=256;goto B7170c8;
case 0x7170cb:c.instructions+=255;goto B7170cb;
case 0x7170ce:c.instructions+=254;goto B7170ce;
case 0x7170d5:c.instructions+=253;goto B7170d5;
case 0x7170d8:c.instructions+=252;goto B7170d8;
case 0x7170db:c.instructions+=251;goto B7170db;
case 0x7170de:c.instructions+=250;goto B7170de;
case 0x7170e5:c.instructions+=249;goto B7170e5;
case 0x7170e8:c.instructions+=248;goto B7170e8;
case 0x7170eb:c.instructions+=247;goto B7170eb;
case 0x7170ee:c.instructions+=246;goto B7170ee;
case 0x7170f2:c.instructions+=245;goto B7170f2;
case 0x7170f5:c.instructions+=244;goto B7170f5;
case 0x7170f8:c.instructions+=243;goto B7170f8;
case 0x7170fb:c.instructions+=242;goto B7170fb;
case 0x7170fe:c.instructions+=241;goto B7170fe;
case 0x717101:c.instructions+=240;goto B717101;
case 0x717105:c.instructions+=239;goto B717105;
case 0x717109:c.instructions+=238;goto B717109;
case 0x71710c:c.instructions+=237;goto B71710c;
case 0x71710f:c.instructions+=236;goto B71710f;
case 0x717111:c.instructions+=235;goto B717111;
case 0x717113:c.instructions+=234;goto B717113;
case 0x717116:c.instructions+=233;goto B717116;
case 0x717119:c.instructions+=232;goto B717119;
case 0x71711d:c.instructions+=231;goto B71711d;
case 0x717120:c.instructions+=230;goto B717120;
case 0x717123:c.instructions+=229;goto B717123;
case 0x717126:c.instructions+=228;goto B717126;
case 0x717129:c.instructions+=227;goto B717129;
case 0x71712c:c.instructions+=226;goto B71712c;
case 0x717130:c.instructions+=225;goto B717130;
case 0x717133:c.instructions+=224;goto B717133;
case 0x717137:c.instructions+=223;goto B717137;
case 0x71713a:c.instructions+=222;goto B71713a;
case 0x71713d:c.instructions+=221;goto B71713d;
case 0x717140:c.instructions+=220;goto B717140;
case 0x717144:c.instructions+=219;goto B717144;
case 0x717147:c.instructions+=218;goto B717147;
case 0x71714a:c.instructions+=217;goto B71714a;
case 0x71714d:c.instructions+=216;goto B71714d;
case 0x717151:c.instructions+=215;goto B717151;
case 0x717154:c.instructions+=214;goto B717154;
case 0x717157:c.instructions+=213;goto B717157;
case 0x71715a:c.instructions+=212;goto B71715a;
case 0x71715e:c.instructions+=211;goto B71715e;
case 0x717161:c.instructions+=210;goto B717161;
case 0x717164:c.instructions+=209;goto B717164;
case 0x717167:c.instructions+=208;goto B717167;
case 0x71716a:c.instructions+=207;goto B71716a;
case 0x71716d:c.instructions+=206;goto B71716d;
case 0x717170:c.instructions+=205;goto B717170;
case 0x717173:c.instructions+=204;goto B717173;
case 0x717177:c.instructions+=203;goto B717177;
case 0x71717a:c.instructions+=202;goto B71717a;
case 0x71717d:c.instructions+=201;goto B71717d;
case 0x717180:c.instructions+=200;goto B717180;
case 0x717184:c.instructions+=199;goto B717184;
case 0x717187:c.instructions+=198;goto B717187;
case 0x71718a:c.instructions+=197;goto B71718a;
case 0x71718d:c.instructions+=196;goto B71718d;
case 0x717194:c.instructions+=195;goto B717194;
case 0x717197:c.instructions+=194;goto B717197;
case 0x71719a:c.instructions+=193;goto B71719a;
case 0x71719d:c.instructions+=192;goto B71719d;
case 0x7171a4:c.instructions+=191;goto B7171a4;
case 0x7171a7:c.instructions+=190;goto B7171a7;
case 0x7171aa:c.instructions+=189;goto B7171aa;
case 0x7171ad:c.instructions+=188;goto B7171ad;
case 0x7171b0:c.instructions+=187;goto B7171b0;
case 0x7171b3:c.instructions+=186;goto B7171b3;
case 0x7171b6:c.instructions+=185;goto B7171b6;
case 0x7171b9:c.instructions+=184;goto B7171b9;
case 0x7171c0:c.instructions+=183;goto B7171c0;
case 0x7171c3:c.instructions+=182;goto B7171c3;
case 0x7171c6:c.instructions+=181;goto B7171c6;
case 0x7171c9:c.instructions+=180;goto B7171c9;
case 0x7171d0:c.instructions+=179;goto B7171d0;
case 0x7171d3:c.instructions+=178;goto B7171d3;
case 0x7171d6:c.instructions+=177;goto B7171d6;
case 0x7171d9:c.instructions+=176;goto B7171d9;
case 0x7171e0:c.instructions+=175;goto B7171e0;
case 0x7171e3:c.instructions+=174;goto B7171e3;
case 0x7171e6:c.instructions+=173;goto B7171e6;
case 0x7171e9:c.instructions+=172;goto B7171e9;
case 0x7171ed:c.instructions+=171;goto B7171ed;
case 0x7171f0:c.instructions+=170;goto B7171f0;
case 0x7171f3:c.instructions+=169;goto B7171f3;
case 0x7171f6:c.instructions+=168;goto B7171f6;
case 0x7171f9:c.instructions+=167;goto B7171f9;
case 0x7171fc:c.instructions+=166;goto B7171fc;
case 0x717200:c.instructions+=165;goto B717200;
case 0x717204:c.instructions+=164;goto B717204;
case 0x717207:c.instructions+=163;goto B717207;
case 0x71720a:c.instructions+=162;goto B71720a;
case 0x71720c:c.instructions+=161;goto B71720c;
case 0x71720e:c.instructions+=160;goto B71720e;
case 0x717211:c.instructions+=159;goto B717211;
case 0x717214:c.instructions+=158;goto B717214;
case 0x717218:c.instructions+=157;goto B717218;
case 0x71721b:c.instructions+=156;goto B71721b;
case 0x71721e:c.instructions+=155;goto B71721e;
case 0x717221:c.instructions+=154;goto B717221;
case 0x717224:c.instructions+=153;goto B717224;
case 0x717227:c.instructions+=152;goto B717227;
case 0x71722b:c.instructions+=151;goto B71722b;
case 0x71722e:c.instructions+=150;goto B71722e;
case 0x717232:c.instructions+=149;goto B717232;
case 0x717235:c.instructions+=148;goto B717235;
case 0x717238:c.instructions+=147;goto B717238;
case 0x71723b:c.instructions+=146;goto B71723b;
case 0x71723f:c.instructions+=145;goto B71723f;
case 0x717242:c.instructions+=144;goto B717242;
case 0x717245:c.instructions+=143;goto B717245;
case 0x717248:c.instructions+=142;goto B717248;
case 0x71724c:c.instructions+=141;goto B71724c;
case 0x71724f:c.instructions+=140;goto B71724f;
case 0x717252:c.instructions+=139;goto B717252;
case 0x717255:c.instructions+=138;goto B717255;
case 0x717259:c.instructions+=137;goto B717259;
case 0x71725c:c.instructions+=136;goto B71725c;
case 0x71725f:c.instructions+=135;goto B71725f;
case 0x717262:c.instructions+=134;goto B717262;
case 0x717265:c.instructions+=133;goto B717265;
case 0x717268:c.instructions+=132;goto B717268;
case 0x71726b:c.instructions+=131;goto B71726b;
case 0x71726e:c.instructions+=130;goto B71726e;
case 0x717272:c.instructions+=129;goto B717272;
case 0x717275:c.instructions+=128;goto B717275;
case 0x717278:c.instructions+=127;goto B717278;
case 0x71727b:c.instructions+=126;goto B71727b;
case 0x71727f:c.instructions+=125;goto B71727f;
case 0x717282:c.instructions+=124;goto B717282;
case 0x717285:c.instructions+=123;goto B717285;
case 0x717288:c.instructions+=122;goto B717288;
case 0x71728f:c.instructions+=121;goto B71728f;
case 0x717292:c.instructions+=120;goto B717292;
case 0x717295:c.instructions+=119;goto B717295;
case 0x717298:c.instructions+=118;goto B717298;
case 0x71729f:c.instructions+=117;goto B71729f;
case 0x7172a2:c.instructions+=116;goto B7172a2;
case 0x7172a5:c.instructions+=115;goto B7172a5;
case 0x7172a8:c.instructions+=114;goto B7172a8;
case 0x7172ab:c.instructions+=113;goto B7172ab;
case 0x7172ae:c.instructions+=112;goto B7172ae;
case 0x7172b1:c.instructions+=111;goto B7172b1;
case 0x7172b4:c.instructions+=110;goto B7172b4;
case 0x7172bb:c.instructions+=109;goto B7172bb;
case 0x7172be:c.instructions+=108;goto B7172be;
case 0x7172c1:c.instructions+=107;goto B7172c1;
case 0x7172c4:c.instructions+=106;goto B7172c4;
case 0x7172cb:c.instructions+=105;goto B7172cb;
case 0x7172ce:c.instructions+=104;goto B7172ce;
case 0x7172d1:c.instructions+=103;goto B7172d1;
case 0x7172d4:c.instructions+=102;goto B7172d4;
case 0x7172db:c.instructions+=101;goto B7172db;
case 0x7172de:c.instructions+=100;goto B7172de;
case 0x7172e1:c.instructions+=99;goto B7172e1;
case 0x7172e4:c.instructions+=98;goto B7172e4;
case 0x7172e8:c.instructions+=97;goto B7172e8;
case 0x7172eb:c.instructions+=96;goto B7172eb;
case 0x7172ee:c.instructions+=95;goto B7172ee;
case 0x7172f1:c.instructions+=94;goto B7172f1;
case 0x7172f4:c.instructions+=93;goto B7172f4;
case 0x7172f7:c.instructions+=92;goto B7172f7;
case 0x7172fb:c.instructions+=91;goto B7172fb;
case 0x7172ff:c.instructions+=90;goto B7172ff;
case 0x717302:c.instructions+=89;goto B717302;
case 0x717305:c.instructions+=88;goto B717305;
case 0x717307:c.instructions+=87;goto B717307;
case 0x717309:c.instructions+=86;goto B717309;
case 0x71730c:c.instructions+=85;goto B71730c;
case 0x71730f:c.instructions+=84;goto B71730f;
case 0x717313:c.instructions+=83;goto B717313;
case 0x717316:c.instructions+=82;goto B717316;
case 0x717319:c.instructions+=81;goto B717319;
case 0x71731c:c.instructions+=80;goto B71731c;
case 0x71731f:c.instructions+=79;goto B71731f;
case 0x717322:c.instructions+=78;goto B717322;
case 0x717326:c.instructions+=77;goto B717326;
case 0x717329:c.instructions+=76;goto B717329;
case 0x71732d:c.instructions+=75;goto B71732d;
case 0x717330:c.instructions+=74;goto B717330;
case 0x717333:c.instructions+=73;goto B717333;
case 0x717336:c.instructions+=72;goto B717336;
case 0x71733a:c.instructions+=71;goto B71733a;
case 0x71733d:c.instructions+=70;goto B71733d;
case 0x717340:c.instructions+=69;goto B717340;
case 0x717343:c.instructions+=68;goto B717343;
case 0x717347:c.instructions+=67;goto B717347;
case 0x71734a:c.instructions+=66;goto B71734a;
case 0x71734d:c.instructions+=65;goto B71734d;
case 0x717350:c.instructions+=64;goto B717350;
case 0x717354:c.instructions+=63;goto B717354;
case 0x717357:c.instructions+=62;goto B717357;
case 0x71735a:c.instructions+=61;goto B71735a;
case 0x71735d:c.instructions+=60;goto B71735d;
case 0x717360:c.instructions+=59;goto B717360;
case 0x717363:c.instructions+=58;goto B717363;
case 0x717366:c.instructions+=57;goto B717366;
case 0x717369:c.instructions+=56;goto B717369;
case 0x71736d:c.instructions+=55;goto B71736d;
case 0x717370:c.instructions+=54;goto B717370;
case 0x717373:c.instructions+=53;goto B717373;
case 0x717376:c.instructions+=52;goto B717376;
case 0x71737a:c.instructions+=51;goto B71737a;
case 0x71737d:c.instructions+=50;goto B71737d;
case 0x717380:c.instructions+=49;goto B717380;
case 0x717383:c.instructions+=48;goto B717383;
case 0x71738a:c.instructions+=47;goto B71738a;
case 0x71738d:c.instructions+=46;goto B71738d;
case 0x717390:c.instructions+=45;goto B717390;
case 0x717393:c.instructions+=44;goto B717393;
case 0x71739a:c.instructions+=43;goto B71739a;
case 0x71739d:c.instructions+=42;goto B71739d;
case 0x7173a0:c.instructions+=41;goto B7173a0;
case 0x7173a3:c.instructions+=40;goto B7173a3;
case 0x7173a6:c.instructions+=39;goto B7173a6;
case 0x7173a9:c.instructions+=38;goto B7173a9;
case 0x7173ac:c.instructions+=37;goto B7173ac;
case 0x7173af:c.instructions+=36;goto B7173af;
case 0x7173b6:c.instructions+=35;goto B7173b6;
case 0x7173b9:c.instructions+=34;goto B7173b9;
case 0x7173bc:c.instructions+=33;goto B7173bc;
case 0x7173bf:c.instructions+=32;goto B7173bf;
case 0x7173c6:c.instructions+=31;goto B7173c6;
case 0x7173c9:c.instructions+=30;goto B7173c9;
case 0x7173cc:c.instructions+=29;goto B7173cc;
case 0x7173cf:c.instructions+=28;goto B7173cf;
case 0x7173d6:c.instructions+=27;goto B7173d6;
case 0x7173d9:c.instructions+=26;goto B7173d9;
case 0x7173dc:c.instructions+=25;goto B7173dc;
case 0x7173df:c.instructions+=24;goto B7173df;
case 0x7173e3:c.instructions+=23;goto B7173e3;
case 0x7173e6:c.instructions+=22;goto B7173e6;
case 0x7173e9:c.instructions+=21;goto B7173e9;
case 0x7173ec:c.instructions+=20;goto B7173ec;
case 0x7173ef:c.instructions+=19;goto B7173ef;
case 0x7173f2:c.instructions+=18;goto B7173f2;
case 0x7173f6:c.instructions+=17;goto B7173f6;
case 0x7173fa:c.instructions+=16;goto B7173fa;
case 0x7173fd:c.instructions+=15;goto B7173fd;
case 0x717400:c.instructions+=14;goto B717400;
case 0x717401:c.instructions+=13;goto B717401;
case 0x717402:c.instructions+=12;goto B717402;
case 0x717403:c.instructions+=11;goto B717403;
case 0x717404:c.instructions+=10;goto B717404;
case 0x717405:c.instructions+=9;goto B717405;
case 0x717406:c.instructions+=8;goto B717406;
case 0x717407:c.instructions+=7;goto B717407;
case 0x717408:c.instructions+=6;goto B717408;
case 0x717409:c.instructions+=5;goto B717409;
case 0x71740b:c.instructions+=4;goto B71740b;
case 0x71740c:c.instructions+=3;goto B71740c;
case 0x71740e:c.instructions+=2;goto B71740e;
case 0x71740f:c.instructions+=1;goto B71740f;
case 0x717410:goto L717410;
case 0x717411:c.instructions+=23;goto B717411;
case 0x717413:c.instructions+=22;goto B717413;
case 0x717414:c.instructions+=21;goto B717414;
case 0x717415:c.instructions+=20;goto B717415;
case 0x717418:c.instructions+=19;goto B717418;
case 0x71741b:c.instructions+=18;goto B71741b;
case 0x71741c:c.instructions+=17;goto B71741c;
case 0x71741f:c.instructions+=16;goto B71741f;
case 0x717423:c.instructions+=15;goto B717423;
case 0x717425:c.instructions+=14;goto B717425;
case 0x71742b:c.instructions+=13;goto B71742b;
case 0x71742e:c.instructions+=12;goto B71742e;
case 0x717431:c.instructions+=11;goto B717431;
case 0x717434:c.instructions+=10;goto B717434;
case 0x717437:c.instructions+=9;goto B717437;
case 0x71743a:c.instructions+=8;goto B71743a;
case 0x71743d:c.instructions+=7;goto B71743d;
case 0x71743f:c.instructions+=6;goto B71743f;
case 0x717441:c.instructions+=5;goto B717441;
case 0x717442:c.instructions+=4;goto B717442;
case 0x717443:c.instructions+=3;goto B717443;
case 0x717446:c.instructions+=2;goto B717446;
case 0x717449:c.instructions+=1;goto B717449;
case 0x71744f:goto L71744f;
case 0x717451:c.instructions+=2;goto B717451;
case 0x717454:c.instructions+=1;goto B717454;
case 0x717457:goto L717457;
case 0x71745a:c.instructions+=7;goto B71745a;
case 0x71745d:c.instructions+=6;goto B71745d;
case 0x717460:c.instructions+=5;goto B717460;
case 0x717463:c.instructions+=4;goto B717463;
case 0x717466:c.instructions+=3;goto B717466;
case 0x717469:c.instructions+=2;goto B717469;
case 0x71746c:c.instructions+=1;goto B71746c;
case 0x717472:goto L717472;
case 0x717476:c.instructions+=336;goto B717476;
case 0x71747a:c.instructions+=335;goto B71747a;
case 0x71747e:c.instructions+=334;goto B71747e;
case 0x717482:c.instructions+=333;goto B717482;
case 0x717486:c.instructions+=332;goto B717486;
case 0x71748a:c.instructions+=331;goto B71748a;
case 0x71748e:c.instructions+=330;goto B71748e;
case 0x717492:c.instructions+=329;goto B717492;
case 0x717493:c.instructions+=328;goto B717493;
case 0x717494:c.instructions+=327;goto B717494;
case 0x717495:c.instructions+=326;goto B717495;
case 0x717496:c.instructions+=325;goto B717496;
case 0x717497:c.instructions+=324;goto B717497;
case 0x71749c:c.instructions+=323;goto B71749c;
case 0x7174a4:c.instructions+=322;goto B7174a4;
case 0x7174a8:c.instructions+=321;goto B7174a8;
case 0x7174ac:c.instructions+=320;goto B7174ac;
case 0x7174b1:c.instructions+=319;goto B7174b1;
case 0x7174b6:c.instructions+=318;goto B7174b6;
case 0x7174b9:c.instructions+=317;goto B7174b9;
case 0x7174bb:c.instructions+=316;goto B7174bb;
case 0x7174be:c.instructions+=315;goto B7174be;
case 0x7174c4:c.instructions+=314;goto B7174c4;
case 0x7174c7:c.instructions+=313;goto B7174c7;
case 0x7174cb:c.instructions+=312;goto B7174cb;
case 0x7174cd:c.instructions+=311;goto B7174cd;
case 0x7174d0:c.instructions+=310;goto B7174d0;
case 0x7174d3:c.instructions+=309;goto B7174d3;
case 0x7174d8:c.instructions+=308;goto B7174d8;
case 0x7174dc:c.instructions+=307;goto B7174dc;
case 0x7174e0:c.instructions+=306;goto B7174e0;
case 0x7174e4:c.instructions+=305;goto B7174e4;
case 0x7174e8:c.instructions+=304;goto B7174e8;
case 0x7174ed:c.instructions+=303;goto B7174ed;
case 0x7174f2:c.instructions+=302;goto B7174f2;
case 0x7174f7:c.instructions+=301;goto B7174f7;
case 0x7174fb:c.instructions+=300;goto B7174fb;
case 0x7174ff:c.instructions+=299;goto B7174ff;
case 0x717504:c.instructions+=298;goto B717504;
case 0x717509:c.instructions+=297;goto B717509;
case 0x71750c:c.instructions+=296;goto B71750c;
case 0x717511:c.instructions+=295;goto B717511;
case 0x717515:c.instructions+=294;goto B717515;
case 0x717519:c.instructions+=293;goto B717519;
case 0x71751d:c.instructions+=292;goto B71751d;
case 0x717522:c.instructions+=291;goto B717522;
case 0x717527:c.instructions+=290;goto B717527;
case 0x71752c:c.instructions+=289;goto B71752c;
case 0x717531:c.instructions+=288;goto B717531;
case 0x717535:c.instructions+=287;goto B717535;
case 0x717539:c.instructions+=286;goto B717539;
case 0x71753e:c.instructions+=285;goto B71753e;
case 0x717543:c.instructions+=284;goto B717543;
case 0x717546:c.instructions+=283;goto B717546;
case 0x71754b:c.instructions+=282;goto B71754b;
case 0x71754f:c.instructions+=281;goto B71754f;
case 0x717553:c.instructions+=280;goto B717553;
case 0x717557:c.instructions+=279;goto B717557;
case 0x71755f:c.instructions+=278;goto B71755f;
case 0x717567:c.instructions+=277;goto B717567;
case 0x71756b:c.instructions+=276;goto B71756b;
case 0x717570:c.instructions+=275;goto B717570;
case 0x717575:c.instructions+=274;goto B717575;
case 0x71757a:c.instructions+=273;goto B71757a;
case 0x71757f:c.instructions+=272;goto B71757f;
case 0x717583:c.instructions+=271;goto B717583;
case 0x717587:c.instructions+=270;goto B717587;
case 0x71758b:c.instructions+=269;goto B71758b;
case 0x71758f:c.instructions+=268;goto B71758f;
case 0x717593:c.instructions+=267;goto B717593;
case 0x717597:c.instructions+=266;goto B717597;
case 0x71759b:c.instructions+=265;goto B71759b;
case 0x71759f:c.instructions+=264;goto B71759f;
case 0x7175a4:c.instructions+=263;goto B7175a4;
case 0x7175a9:c.instructions+=262;goto B7175a9;
case 0x7175ad:c.instructions+=261;goto B7175ad;
case 0x7175b1:c.instructions+=260;goto B7175b1;
case 0x7175b5:c.instructions+=259;goto B7175b5;
case 0x7175b9:c.instructions+=258;goto B7175b9;
case 0x7175bd:c.instructions+=257;goto B7175bd;
case 0x7175c1:c.instructions+=256;goto B7175c1;
case 0x7175c5:c.instructions+=255;goto B7175c5;
case 0x7175c9:c.instructions+=254;goto B7175c9;
case 0x7175ce:c.instructions+=253;goto B7175ce;
case 0x7175d3:c.instructions+=252;goto B7175d3;
case 0x7175d7:c.instructions+=251;goto B7175d7;
case 0x7175db:c.instructions+=250;goto B7175db;
case 0x7175df:c.instructions+=249;goto B7175df;
case 0x7175e3:c.instructions+=248;goto B7175e3;
case 0x7175e7:c.instructions+=247;goto B7175e7;
case 0x7175eb:c.instructions+=246;goto B7175eb;
case 0x7175ef:c.instructions+=245;goto B7175ef;
case 0x7175f3:c.instructions+=244;goto B7175f3;
case 0x7175f8:c.instructions+=243;goto B7175f8;
case 0x717600:c.instructions+=242;goto B717600;
case 0x717604:c.instructions+=241;goto B717604;
case 0x717608:c.instructions+=240;goto B717608;
case 0x71760c:c.instructions+=239;goto B71760c;
case 0x717610:c.instructions+=238;goto B717610;
case 0x717614:c.instructions+=237;goto B717614;
case 0x717618:c.instructions+=236;goto B717618;
case 0x71761c:c.instructions+=235;goto B71761c;
case 0x717620:c.instructions+=234;goto B717620;
case 0x717624:c.instructions+=233;goto B717624;
case 0x717629:c.instructions+=232;goto B717629;
case 0x71762d:c.instructions+=231;goto B71762d;
case 0x717631:c.instructions+=230;goto B717631;
case 0x717635:c.instructions+=229;goto B717635;
case 0x717639:c.instructions+=228;goto B717639;
case 0x71763e:c.instructions+=227;goto B71763e;
case 0x717643:c.instructions+=226;goto B717643;
case 0x717648:c.instructions+=225;goto B717648;
case 0x71764d:c.instructions+=224;goto B71764d;
case 0x717651:c.instructions+=223;goto B717651;
case 0x717655:c.instructions+=222;goto B717655;
case 0x717659:c.instructions+=221;goto B717659;
case 0x71765d:c.instructions+=220;goto B71765d;
case 0x717662:c.instructions+=219;goto B717662;
case 0x717666:c.instructions+=218;goto B717666;
case 0x71766b:c.instructions+=217;goto B71766b;
case 0x717670:c.instructions+=216;goto B717670;
case 0x717674:c.instructions+=215;goto B717674;
case 0x717678:c.instructions+=214;goto B717678;
case 0x71767c:c.instructions+=213;goto B71767c;
case 0x717681:c.instructions+=212;goto B717681;
case 0x717686:c.instructions+=211;goto B717686;
case 0x71768b:c.instructions+=210;goto B71768b;
case 0x717690:c.instructions+=209;goto B717690;
case 0x717695:c.instructions+=208;goto B717695;
case 0x717699:c.instructions+=207;goto B717699;
case 0x71769d:c.instructions+=206;goto B71769d;
case 0x7176a2:c.instructions+=205;goto B7176a2;
case 0x7176a6:c.instructions+=204;goto B7176a6;
case 0x7176aa:c.instructions+=203;goto B7176aa;
case 0x7176ae:c.instructions+=202;goto B7176ae;
case 0x7176b2:c.instructions+=201;goto B7176b2;
case 0x7176b6:c.instructions+=200;goto B7176b6;
case 0x7176bb:c.instructions+=199;goto B7176bb;
case 0x7176c0:c.instructions+=198;goto B7176c0;
case 0x7176c4:c.instructions+=197;goto B7176c4;
case 0x7176c8:c.instructions+=196;goto B7176c8;
case 0x7176cd:c.instructions+=195;goto B7176cd;
case 0x7176d1:c.instructions+=194;goto B7176d1;
case 0x7176d5:c.instructions+=193;goto B7176d5;
case 0x7176d9:c.instructions+=192;goto B7176d9;
case 0x7176dd:c.instructions+=191;goto B7176dd;
case 0x7176e1:c.instructions+=190;goto B7176e1;
case 0x7176e6:c.instructions+=189;goto B7176e6;
case 0x7176eb:c.instructions+=188;goto B7176eb;
case 0x7176ef:c.instructions+=187;goto B7176ef;
case 0x7176f3:c.instructions+=186;goto B7176f3;
case 0x7176f7:c.instructions+=185;goto B7176f7;
case 0x7176fb:c.instructions+=184;goto B7176fb;
case 0x717703:c.instructions+=183;goto B717703;
case 0x71770b:c.instructions+=182;goto B71770b;
case 0x71770f:c.instructions+=181;goto B71770f;
case 0x717713:c.instructions+=180;goto B717713;
case 0x717717:c.instructions+=179;goto B717717;
case 0x71771b:c.instructions+=178;goto B71771b;
case 0x71771f:c.instructions+=177;goto B71771f;
case 0x717724:c.instructions+=176;goto B717724;
case 0x717729:c.instructions+=175;goto B717729;
case 0x71772d:c.instructions+=174;goto B71772d;
case 0x717731:c.instructions+=173;goto B717731;
case 0x717735:c.instructions+=172;goto B717735;
case 0x717739:c.instructions+=171;goto B717739;
case 0x71773d:c.instructions+=170;goto B71773d;
case 0x717741:c.instructions+=169;goto B717741;
case 0x717745:c.instructions+=168;goto B717745;
case 0x717749:c.instructions+=167;goto B717749;
case 0x71774e:c.instructions+=166;goto B71774e;
case 0x717753:c.instructions+=165;goto B717753;
case 0x717758:c.instructions+=164;goto B717758;
case 0x71775d:c.instructions+=163;goto B71775d;
case 0x717765:c.instructions+=162;goto B717765;
case 0x717769:c.instructions+=161;goto B717769;
case 0x71776d:c.instructions+=160;goto B71776d;
case 0x717772:c.instructions+=159;goto B717772;
case 0x717776:c.instructions+=158;goto B717776;
case 0x71777b:c.instructions+=157;goto B71777b;
case 0x717780:c.instructions+=156;goto B717780;
case 0x717785:c.instructions+=155;goto B717785;
case 0x71778a:c.instructions+=154;goto B71778a;
case 0x71778e:c.instructions+=153;goto B71778e;
case 0x717792:c.instructions+=152;goto B717792;
case 0x717796:c.instructions+=151;goto B717796;
case 0x71779a:c.instructions+=150;goto B71779a;
case 0x71779f:c.instructions+=149;goto B71779f;
case 0x7177a4:c.instructions+=148;goto B7177a4;
case 0x7177a8:c.instructions+=147;goto B7177a8;
case 0x7177ad:c.instructions+=146;goto B7177ad;
case 0x7177b1:c.instructions+=145;goto B7177b1;
case 0x7177b5:c.instructions+=144;goto B7177b5;
case 0x7177b9:c.instructions+=143;goto B7177b9;
case 0x7177be:c.instructions+=142;goto B7177be;
case 0x7177c3:c.instructions+=141;goto B7177c3;
case 0x7177c8:c.instructions+=140;goto B7177c8;
case 0x7177cc:c.instructions+=139;goto B7177cc;
case 0x7177d0:c.instructions+=138;goto B7177d0;
case 0x7177d4:c.instructions+=137;goto B7177d4;
case 0x7177d8:c.instructions+=136;goto B7177d8;
case 0x7177dd:c.instructions+=135;goto B7177dd;
case 0x7177e2:c.instructions+=134;goto B7177e2;
case 0x7177e6:c.instructions+=133;goto B7177e6;
case 0x7177eb:c.instructions+=132;goto B7177eb;
case 0x7177ef:c.instructions+=131;goto B7177ef;
case 0x7177f3:c.instructions+=130;goto B7177f3;
case 0x7177f7:c.instructions+=129;goto B7177f7;
case 0x7177fc:c.instructions+=128;goto B7177fc;
case 0x717801:c.instructions+=127;goto B717801;
case 0x717806:c.instructions+=126;goto B717806;
case 0x71780a:c.instructions+=125;goto B71780a;
case 0x71780e:c.instructions+=124;goto B71780e;
case 0x717812:c.instructions+=123;goto B717812;
case 0x717816:c.instructions+=122;goto B717816;
case 0x71781a:c.instructions+=121;goto B71781a;
case 0x71781f:c.instructions+=120;goto B71781f;
case 0x717823:c.instructions+=119;goto B717823;
case 0x717828:c.instructions+=118;goto B717828;
case 0x71782c:c.instructions+=117;goto B71782c;
case 0x717830:c.instructions+=116;goto B717830;
case 0x717834:c.instructions+=115;goto B717834;
case 0x717838:c.instructions+=114;goto B717838;
case 0x71783d:c.instructions+=113;goto B71783d;
case 0x717842:c.instructions+=112;goto B717842;
case 0x71784a:c.instructions+=111;goto B71784a;
case 0x71784f:c.instructions+=110;goto B71784f;
case 0x717853:c.instructions+=109;goto B717853;
case 0x717857:c.instructions+=108;goto B717857;
case 0x71785b:c.instructions+=107;goto B71785b;
case 0x71785f:c.instructions+=106;goto B71785f;
case 0x717864:c.instructions+=105;goto B717864;
case 0x717869:c.instructions+=104;goto B717869;
case 0x71786e:c.instructions+=103;goto B71786e;
case 0x717876:c.instructions+=102;goto B717876;
case 0x71787a:c.instructions+=101;goto B71787a;
case 0x71787e:c.instructions+=100;goto B71787e;
case 0x717882:c.instructions+=99;goto B717882;
case 0x717887:c.instructions+=98;goto B717887;
case 0x71788c:c.instructions+=97;goto B71788c;
case 0x717894:c.instructions+=96;goto B717894;
case 0x717898:c.instructions+=95;goto B717898;
case 0x71789d:c.instructions+=94;goto B71789d;
case 0x7178a1:c.instructions+=93;goto B7178a1;
case 0x7178a5:c.instructions+=92;goto B7178a5;
case 0x7178a9:c.instructions+=91;goto B7178a9;
case 0x7178ac:c.instructions+=90;goto B7178ac;
case 0x7178b0:c.instructions+=89;goto B7178b0;
case 0x7178b5:c.instructions+=88;goto B7178b5;
case 0x7178ba:c.instructions+=87;goto B7178ba;
case 0x7178bf:c.instructions+=86;goto B7178bf;
case 0x7178c3:c.instructions+=85;goto B7178c3;
case 0x7178c7:c.instructions+=84;goto B7178c7;
case 0x7178cb:c.instructions+=83;goto B7178cb;
case 0x7178cf:c.instructions+=82;goto B7178cf;
case 0x7178d4:c.instructions+=81;goto B7178d4;
case 0x7178d9:c.instructions+=80;goto B7178d9;
case 0x7178de:c.instructions+=79;goto B7178de;
case 0x7178e2:c.instructions+=78;goto B7178e2;
case 0x7178e6:c.instructions+=77;goto B7178e6;
case 0x7178ea:c.instructions+=76;goto B7178ea;
case 0x7178ee:c.instructions+=75;goto B7178ee;
case 0x7178f3:c.instructions+=74;goto B7178f3;
case 0x7178f8:c.instructions+=73;goto B7178f8;
case 0x7178fd:c.instructions+=72;goto B7178fd;
case 0x717901:c.instructions+=71;goto B717901;
case 0x717905:c.instructions+=70;goto B717905;
case 0x717909:c.instructions+=69;goto B717909;
case 0x71790d:c.instructions+=68;goto B71790d;
case 0x717912:c.instructions+=67;goto B717912;
case 0x717917:c.instructions+=66;goto B717917;
case 0x71791c:c.instructions+=65;goto B71791c;
case 0x717920:c.instructions+=64;goto B717920;
case 0x717924:c.instructions+=63;goto B717924;
case 0x717928:c.instructions+=62;goto B717928;
case 0x71792c:c.instructions+=61;goto B71792c;
case 0x717930:c.instructions+=60;goto B717930;
case 0x717938:c.instructions+=59;goto B717938;
case 0x71793d:c.instructions+=58;goto B71793d;
case 0x717941:c.instructions+=57;goto B717941;
case 0x717945:c.instructions+=56;goto B717945;
case 0x717949:c.instructions+=55;goto B717949;
case 0x71794d:c.instructions+=54;goto B71794d;
case 0x717952:c.instructions+=53;goto B717952;
case 0x717957:c.instructions+=52;goto B717957;
case 0x71795c:c.instructions+=51;goto B71795c;
case 0x717960:c.instructions+=50;goto B717960;
case 0x717964:c.instructions+=49;goto B717964;
case 0x717968:c.instructions+=48;goto B717968;
case 0x71796c:c.instructions+=47;goto B71796c;
case 0x717971:c.instructions+=46;goto B717971;
case 0x717972:c.instructions+=45;goto B717972;
case 0x717973:c.instructions+=44;goto B717973;
case 0x717974:c.instructions+=43;goto B717974;
case 0x717975:c.instructions+=42;goto B717975;
case 0x717976:c.instructions+=41;goto B717976;
case 0x717979:c.instructions+=40;goto B717979;
case 0x71797c:c.instructions+=39;goto B71797c;
case 0x71797f:c.instructions+=38;goto B71797f;
case 0x717983:c.instructions+=37;goto B717983;
case 0x717986:c.instructions+=36;goto B717986;
case 0x71798a:c.instructions+=35;goto B71798a;
case 0x71798c:c.instructions+=34;goto B71798c;
case 0x717990:c.instructions+=33;goto B717990;
case 0x717992:c.instructions+=32;goto B717992;
case 0x717996:c.instructions+=31;goto B717996;
case 0x717998:c.instructions+=30;goto B717998;
case 0x71799c:c.instructions+=29;goto B71799c;
case 0x71799e:c.instructions+=28;goto B71799e;
case 0x7179a2:c.instructions+=27;goto B7179a2;
case 0x7179a4:c.instructions+=26;goto B7179a4;
case 0x7179a8:c.instructions+=25;goto B7179a8;
case 0x7179aa:c.instructions+=24;goto B7179aa;
case 0x7179ae:c.instructions+=23;goto B7179ae;
case 0x7179b0:c.instructions+=22;goto B7179b0;
case 0x7179b2:c.instructions+=21;goto B7179b2;
case 0x7179b5:c.instructions+=20;goto B7179b5;
case 0x7179b8:c.instructions+=19;goto B7179b8;
case 0x7179bc:c.instructions+=18;goto B7179bc;
case 0x7179be:c.instructions+=17;goto B7179be;
case 0x7179c2:c.instructions+=16;goto B7179c2;
case 0x7179c4:c.instructions+=15;goto B7179c4;
case 0x7179c8:c.instructions+=14;goto B7179c8;
case 0x7179ca:c.instructions+=13;goto B7179ca;
case 0x7179ce:c.instructions+=12;goto B7179ce;
case 0x7179d0:c.instructions+=11;goto B7179d0;
case 0x7179d4:c.instructions+=10;goto B7179d4;
case 0x7179d6:c.instructions+=9;goto B7179d6;
case 0x7179da:c.instructions+=8;goto B7179da;
case 0x7179dc:c.instructions+=7;goto B7179dc;
case 0x7179e0:c.instructions+=6;goto B7179e0;
case 0x7179e2:c.instructions+=5;goto B7179e2;
case 0x7179e6:c.instructions+=4;goto B7179e6;
case 0x7179e8:c.instructions+=3;goto B7179e8;
case 0x7179ea:c.instructions+=2;goto B7179ea;
case 0x7179ed:c.instructions+=1;goto B7179ed;
case 0x7179ef:goto L7179ef;
case 0x7179f0:c.instructions+=34;goto B7179f0;
case 0x7179f1:c.instructions+=33;goto B7179f1;
case 0x7179f2:c.instructions+=32;goto B7179f2;
case 0x7179f5:c.instructions+=31;goto B7179f5;
case 0x7179f8:c.instructions+=30;goto B7179f8;
case 0x7179f9:c.instructions+=29;goto B7179f9;
case 0x7179fc:c.instructions+=28;goto B7179fc;
case 0x7179fe:c.instructions+=27;goto B7179fe;
case 0x717a00:c.instructions+=26;goto B717a00;
case 0x717a03:c.instructions+=25;goto B717a03;
case 0x717a06:c.instructions+=24;goto B717a06;
case 0x717a0a:c.instructions+=23;goto B717a0a;
case 0x717a0d:c.instructions+=22;goto B717a0d;
case 0x717a11:c.instructions+=21;goto B717a11;
case 0x717a15:c.instructions+=20;goto B717a15;
case 0x717a19:c.instructions+=19;goto B717a19;
case 0x717a1c:c.instructions+=18;goto B717a1c;
case 0x717a20:c.instructions+=17;goto B717a20;
case 0x717a23:c.instructions+=16;goto B717a23;
case 0x717a27:c.instructions+=15;goto B717a27;
case 0x717a2b:c.instructions+=14;goto B717a2b;
case 0x717a2e:c.instructions+=13;goto B717a2e;
case 0x717a32:c.instructions+=12;goto B717a32;
case 0x717a35:c.instructions+=11;goto B717a35;
case 0x717a39:c.instructions+=10;goto B717a39;
case 0x717a3c:c.instructions+=9;goto B717a3c;
case 0x717a40:c.instructions+=8;goto B717a40;
case 0x717a44:c.instructions+=7;goto B717a44;
case 0x717a48:c.instructions+=6;goto B717a48;
case 0x717a4b:c.instructions+=5;goto B717a4b;
case 0x717a4f:c.instructions+=4;goto B717a4f;
case 0x717a50:c.instructions+=3;goto B717a50;
case 0x717a51:c.instructions+=2;goto B717a51;
case 0x717a52:c.instructions+=1;goto B717a52;
case 0x717a53:goto L717a53;
case 0x717a57:c.instructions+=5;goto B717a57;
case 0x717a5b:c.instructions+=4;goto B717a5b;
case 0x717a5e:c.instructions+=3;goto B717a5e;
case 0x717a62:c.instructions+=2;goto B717a62;
case 0x717a65:c.instructions+=1;goto B717a65;
case 0x717a6b:goto L717a6b;
case 0x717a6e:goto L717a6e;
case 0x717a71:c.instructions+=15;goto B717a71;
case 0x717a74:c.instructions+=14;goto B717a74;
case 0x717a76:c.instructions+=13;goto B717a76;
case 0x717a77:c.instructions+=12;goto B717a77;
case 0x717a79:c.instructions+=11;goto B717a79;
case 0x717a7c:c.instructions+=10;goto B717a7c;
case 0x717a7f:c.instructions+=9;goto B717a7f;
case 0x717a81:c.instructions+=8;goto B717a81;
case 0x717a84:c.instructions+=7;goto B717a84;
case 0x717a87:c.instructions+=6;goto B717a87;
case 0x717a88:c.instructions+=5;goto B717a88;
case 0x717a8b:c.instructions+=4;goto B717a8b;
case 0x717a8d:c.instructions+=3;goto B717a8d;
case 0x717a90:c.instructions+=2;goto B717a90;
case 0x717a92:c.instructions+=1;goto B717a92;
case 0x717a97:goto L717a97;
case 0x717a9a:c.instructions+=9;goto B717a9a;
case 0x717a9d:c.instructions+=8;goto B717a9d;
case 0x717a9f:c.instructions+=7;goto B717a9f;
case 0x717aa2:c.instructions+=6;goto B717aa2;
case 0x717aa5:c.instructions+=5;goto B717aa5;
case 0x717aa9:c.instructions+=4;goto B717aa9;
case 0x717aac:c.instructions+=3;goto B717aac;
case 0x717aaf:c.instructions+=2;goto B717aaf;
case 0x717ab2:c.instructions+=1;goto B717ab2;
case 0x717ab8:goto L717ab8;
case 0x717abc:c.instructions+=10;goto B717abc;
case 0x717ac0:c.instructions+=9;goto B717ac0;
case 0x717ac4:c.instructions+=8;goto B717ac4;
case 0x717ac8:c.instructions+=7;goto B717ac8;
case 0x717acc:c.instructions+=6;goto B717acc;
case 0x717ad0:c.instructions+=5;goto B717ad0;
case 0x717ad4:c.instructions+=4;goto B717ad4;
case 0x717ad8:c.instructions+=3;goto B717ad8;
case 0x717adb:c.instructions+=2;goto B717adb;
case 0x717add:c.instructions+=1;goto B717add;
case 0x717ae0:goto L717ae0;
case 0x717ae5:c.instructions+=7;goto B717ae5;
case 0x717aed:c.instructions+=6;goto B717aed;
case 0x717af1:c.instructions+=5;goto B717af1;
case 0x717af4:c.instructions+=4;goto B717af4;
case 0x717af9:c.instructions+=3;goto B717af9;
case 0x717afa:c.instructions+=2;goto B717afa;
case 0x717afd:c.instructions+=1;goto B717afd;
case 0x717aff:goto L717aff;
case 0x717b00:c.instructions+=311;goto B717b00;
case 0x717b01:c.instructions+=310;goto B717b01;
case 0x717b02:c.instructions+=309;goto B717b02;
case 0x717b03:c.instructions+=308;goto B717b03;
case 0x717b04:c.instructions+=307;goto B717b04;
case 0x717b09:c.instructions+=306;goto B717b09;
case 0x717b11:c.instructions+=305;goto B717b11;
case 0x717b15:c.instructions+=304;goto B717b15;
case 0x717b19:c.instructions+=303;goto B717b19;
case 0x717b1e:c.instructions+=302;goto B717b1e;
case 0x717b23:c.instructions+=301;goto B717b23;
case 0x717b26:c.instructions+=300;goto B717b26;
case 0x717b28:c.instructions+=299;goto B717b28;
case 0x717b2b:c.instructions+=298;goto B717b2b;
case 0x717b2e:c.instructions+=297;goto B717b2e;
case 0x717b31:c.instructions+=296;goto B717b31;
case 0x717b37:c.instructions+=295;goto B717b37;
case 0x717b3a:c.instructions+=294;goto B717b3a;
case 0x717b3c:c.instructions+=293;goto B717b3c;
case 0x717b3f:c.instructions+=292;goto B717b3f;
case 0x717b42:c.instructions+=291;goto B717b42;
case 0x717b46:c.instructions+=290;goto B717b46;
case 0x717b4a:c.instructions+=289;goto B717b4a;
case 0x717b4d:c.instructions+=288;goto B717b4d;
case 0x717b51:c.instructions+=287;goto B717b51;
case 0x717b54:c.instructions+=286;goto B717b54;
case 0x717b57:c.instructions+=285;goto B717b57;
case 0x717b5a:c.instructions+=284;goto B717b5a;
case 0x717b5d:c.instructions+=283;goto B717b5d;
case 0x717b60:c.instructions+=282;goto B717b60;
case 0x717b63:c.instructions+=281;goto B717b63;
case 0x717b66:c.instructions+=280;goto B717b66;
case 0x717b69:c.instructions+=279;goto B717b69;
case 0x717b6c:c.instructions+=278;goto B717b6c;
case 0x717b6f:c.instructions+=277;goto B717b6f;
case 0x717b72:c.instructions+=276;goto B717b72;
case 0x717b75:c.instructions+=275;goto B717b75;
case 0x717b78:c.instructions+=274;goto B717b78;
case 0x717b7b:c.instructions+=273;goto B717b7b;
case 0x717b7e:c.instructions+=272;goto B717b7e;
case 0x717b82:c.instructions+=271;goto B717b82;
case 0x717b85:c.instructions+=270;goto B717b85;
case 0x717b88:c.instructions+=269;goto B717b88;
case 0x717b8c:c.instructions+=268;goto B717b8c;
case 0x717b8f:c.instructions+=267;goto B717b8f;
case 0x717b92:c.instructions+=266;goto B717b92;
case 0x717b96:c.instructions+=265;goto B717b96;
case 0x717b99:c.instructions+=264;goto B717b99;
case 0x717b9c:c.instructions+=263;goto B717b9c;
case 0x717ba0:c.instructions+=262;goto B717ba0;
case 0x717ba3:c.instructions+=261;goto B717ba3;
case 0x717ba6:c.instructions+=260;goto B717ba6;
case 0x717baa:c.instructions+=259;goto B717baa;
case 0x717bad:c.instructions+=258;goto B717bad;
case 0x717bb0:c.instructions+=257;goto B717bb0;
case 0x717bb4:c.instructions+=256;goto B717bb4;
case 0x717bb7:c.instructions+=255;goto B717bb7;
case 0x717bbb:c.instructions+=254;goto B717bbb;
case 0x717bbf:c.instructions+=253;goto B717bbf;
case 0x717bc3:c.instructions+=252;goto B717bc3;
case 0x717bc6:c.instructions+=251;goto B717bc6;
case 0x717bcd:c.instructions+=250;goto B717bcd;
case 0x717bd0:c.instructions+=249;goto B717bd0;
case 0x717bd4:c.instructions+=248;goto B717bd4;
case 0x717bd7:c.instructions+=247;goto B717bd7;
case 0x717bda:c.instructions+=246;goto B717bda;
case 0x717bdd:c.instructions+=245;goto B717bdd;
case 0x717be0:c.instructions+=244;goto B717be0;
case 0x717be3:c.instructions+=243;goto B717be3;
case 0x717be6:c.instructions+=242;goto B717be6;
case 0x717be9:c.instructions+=241;goto B717be9;
case 0x717bec:c.instructions+=240;goto B717bec;
case 0x717bef:c.instructions+=239;goto B717bef;
case 0x717bf2:c.instructions+=238;goto B717bf2;
case 0x717bf5:c.instructions+=237;goto B717bf5;
case 0x717bf8:c.instructions+=236;goto B717bf8;
case 0x717bfb:c.instructions+=235;goto B717bfb;
case 0x717bff:c.instructions+=234;goto B717bff;
case 0x717c02:c.instructions+=233;goto B717c02;
case 0x717c05:c.instructions+=232;goto B717c05;
case 0x717c09:c.instructions+=231;goto B717c09;
case 0x717c0c:c.instructions+=230;goto B717c0c;
case 0x717c0f:c.instructions+=229;goto B717c0f;
case 0x717c13:c.instructions+=228;goto B717c13;
case 0x717c16:c.instructions+=227;goto B717c16;
case 0x717c19:c.instructions+=226;goto B717c19;
case 0x717c1d:c.instructions+=225;goto B717c1d;
case 0x717c20:c.instructions+=224;goto B717c20;
case 0x717c23:c.instructions+=223;goto B717c23;
case 0x717c27:c.instructions+=222;goto B717c27;
case 0x717c2a:c.instructions+=221;goto B717c2a;
case 0x717c2d:c.instructions+=220;goto B717c2d;
case 0x717c31:c.instructions+=219;goto B717c31;
case 0x717c35:c.instructions+=218;goto B717c35;
case 0x717c3c:c.instructions+=217;goto B717c3c;
case 0x717c40:c.instructions+=216;goto B717c40;
case 0x717c45:c.instructions+=215;goto B717c45;
case 0x717c4a:c.instructions+=214;goto B717c4a;
case 0x717c4f:c.instructions+=213;goto B717c4f;
case 0x717c54:c.instructions+=212;goto B717c54;
case 0x717c58:c.instructions+=211;goto B717c58;
case 0x717c5c:c.instructions+=210;goto B717c5c;
case 0x717c60:c.instructions+=209;goto B717c60;
case 0x717c64:c.instructions+=208;goto B717c64;
case 0x717c68:c.instructions+=207;goto B717c68;
case 0x717c6c:c.instructions+=206;goto B717c6c;
case 0x717c70:c.instructions+=205;goto B717c70;
case 0x717c74:c.instructions+=204;goto B717c74;
case 0x717c79:c.instructions+=203;goto B717c79;
case 0x717c7e:c.instructions+=202;goto B717c7e;
case 0x717c82:c.instructions+=201;goto B717c82;
case 0x717c86:c.instructions+=200;goto B717c86;
case 0x717c8a:c.instructions+=199;goto B717c8a;
case 0x717c8e:c.instructions+=198;goto B717c8e;
case 0x717c92:c.instructions+=197;goto B717c92;
case 0x717c96:c.instructions+=196;goto B717c96;
case 0x717c9a:c.instructions+=195;goto B717c9a;
case 0x717c9e:c.instructions+=194;goto B717c9e;
case 0x717ca3:c.instructions+=193;goto B717ca3;
case 0x717ca8:c.instructions+=192;goto B717ca8;
case 0x717cac:c.instructions+=191;goto B717cac;
case 0x717cb0:c.instructions+=190;goto B717cb0;
case 0x717cb4:c.instructions+=189;goto B717cb4;
case 0x717cb8:c.instructions+=188;goto B717cb8;
case 0x717cbc:c.instructions+=187;goto B717cbc;
case 0x717cc0:c.instructions+=186;goto B717cc0;
case 0x717cc4:c.instructions+=185;goto B717cc4;
case 0x717cc8:c.instructions+=184;goto B717cc8;
case 0x717ccd:c.instructions+=183;goto B717ccd;
case 0x717cd5:c.instructions+=182;goto B717cd5;
case 0x717cd9:c.instructions+=181;goto B717cd9;
case 0x717cdd:c.instructions+=180;goto B717cdd;
case 0x717ce1:c.instructions+=179;goto B717ce1;
case 0x717ce5:c.instructions+=178;goto B717ce5;
case 0x717ce9:c.instructions+=177;goto B717ce9;
case 0x717ced:c.instructions+=176;goto B717ced;
case 0x717cf1:c.instructions+=175;goto B717cf1;
case 0x717cf5:c.instructions+=174;goto B717cf5;
case 0x717cf9:c.instructions+=173;goto B717cf9;
case 0x717cfe:c.instructions+=172;goto B717cfe;
case 0x717d02:c.instructions+=171;goto B717d02;
case 0x717d06:c.instructions+=170;goto B717d06;
case 0x717d0a:c.instructions+=169;goto B717d0a;
case 0x717d0e:c.instructions+=168;goto B717d0e;
case 0x717d13:c.instructions+=167;goto B717d13;
case 0x717d18:c.instructions+=166;goto B717d18;
case 0x717d1d:c.instructions+=165;goto B717d1d;
case 0x717d22:c.instructions+=164;goto B717d22;
case 0x717d26:c.instructions+=163;goto B717d26;
case 0x717d2a:c.instructions+=162;goto B717d2a;
case 0x717d2e:c.instructions+=161;goto B717d2e;
case 0x717d32:c.instructions+=160;goto B717d32;
case 0x717d37:c.instructions+=159;goto B717d37;
case 0x717d3b:c.instructions+=158;goto B717d3b;
case 0x717d40:c.instructions+=157;goto B717d40;
case 0x717d45:c.instructions+=156;goto B717d45;
case 0x717d49:c.instructions+=155;goto B717d49;
case 0x717d4d:c.instructions+=154;goto B717d4d;
case 0x717d51:c.instructions+=153;goto B717d51;
case 0x717d56:c.instructions+=152;goto B717d56;
case 0x717d5b:c.instructions+=151;goto B717d5b;
case 0x717d60:c.instructions+=150;goto B717d60;
case 0x717d65:c.instructions+=149;goto B717d65;
case 0x717d6a:c.instructions+=148;goto B717d6a;
case 0x717d6e:c.instructions+=147;goto B717d6e;
case 0x717d72:c.instructions+=146;goto B717d72;
case 0x717d77:c.instructions+=145;goto B717d77;
case 0x717d7b:c.instructions+=144;goto B717d7b;
case 0x717d7f:c.instructions+=143;goto B717d7f;
case 0x717d83:c.instructions+=142;goto B717d83;
case 0x717d87:c.instructions+=141;goto B717d87;
case 0x717d8b:c.instructions+=140;goto B717d8b;
case 0x717d90:c.instructions+=139;goto B717d90;
case 0x717d95:c.instructions+=138;goto B717d95;
case 0x717d99:c.instructions+=137;goto B717d99;
case 0x717d9d:c.instructions+=136;goto B717d9d;
case 0x717da2:c.instructions+=135;goto B717da2;
case 0x717da6:c.instructions+=134;goto B717da6;
case 0x717daa:c.instructions+=133;goto B717daa;
case 0x717dae:c.instructions+=132;goto B717dae;
case 0x717db2:c.instructions+=131;goto B717db2;
case 0x717db6:c.instructions+=130;goto B717db6;
case 0x717dbb:c.instructions+=129;goto B717dbb;
case 0x717dc0:c.instructions+=128;goto B717dc0;
case 0x717dc4:c.instructions+=127;goto B717dc4;
case 0x717dc8:c.instructions+=126;goto B717dc8;
case 0x717dcc:c.instructions+=125;goto B717dcc;
case 0x717dd0:c.instructions+=124;goto B717dd0;
case 0x717dd8:c.instructions+=123;goto B717dd8;
case 0x717de0:c.instructions+=122;goto B717de0;
case 0x717de4:c.instructions+=121;goto B717de4;
case 0x717de8:c.instructions+=120;goto B717de8;
case 0x717dec:c.instructions+=119;goto B717dec;
case 0x717df0:c.instructions+=118;goto B717df0;
case 0x717df4:c.instructions+=117;goto B717df4;
case 0x717df9:c.instructions+=116;goto B717df9;
case 0x717dfe:c.instructions+=115;goto B717dfe;
case 0x717e02:c.instructions+=114;goto B717e02;
case 0x717e06:c.instructions+=113;goto B717e06;
case 0x717e0a:c.instructions+=112;goto B717e0a;
case 0x717e0e:c.instructions+=111;goto B717e0e;
case 0x717e12:c.instructions+=110;goto B717e12;
case 0x717e16:c.instructions+=109;goto B717e16;
case 0x717e1a:c.instructions+=108;goto B717e1a;
case 0x717e1e:c.instructions+=107;goto B717e1e;
case 0x717e23:c.instructions+=106;goto B717e23;
case 0x717e28:c.instructions+=105;goto B717e28;
case 0x717e2d:c.instructions+=104;goto B717e2d;
case 0x717e32:c.instructions+=103;goto B717e32;
case 0x717e3a:c.instructions+=102;goto B717e3a;
case 0x717e3e:c.instructions+=101;goto B717e3e;
case 0x717e42:c.instructions+=100;goto B717e42;
case 0x717e47:c.instructions+=99;goto B717e47;
case 0x717e4b:c.instructions+=98;goto B717e4b;
case 0x717e50:c.instructions+=97;goto B717e50;
case 0x717e55:c.instructions+=96;goto B717e55;
case 0x717e5a:c.instructions+=95;goto B717e5a;
case 0x717e5f:c.instructions+=94;goto B717e5f;
case 0x717e63:c.instructions+=93;goto B717e63;
case 0x717e67:c.instructions+=92;goto B717e67;
case 0x717e6b:c.instructions+=91;goto B717e6b;
case 0x717e6f:c.instructions+=90;goto B717e6f;
case 0x717e73:c.instructions+=89;goto B717e73;
case 0x717e78:c.instructions+=88;goto B717e78;
case 0x717e7c:c.instructions+=87;goto B717e7c;
case 0x717e81:c.instructions+=86;goto B717e81;
case 0x717e85:c.instructions+=85;goto B717e85;
case 0x717e89:c.instructions+=84;goto B717e89;
case 0x717e8d:c.instructions+=83;goto B717e8d;
case 0x717e92:c.instructions+=82;goto B717e92;
case 0x717e97:c.instructions+=81;goto B717e97;
case 0x717e9c:c.instructions+=80;goto B717e9c;
case 0x717ea0:c.instructions+=79;goto B717ea0;
case 0x717ea4:c.instructions+=78;goto B717ea4;
case 0x717ea8:c.instructions+=77;goto B717ea8;
case 0x717eac:c.instructions+=76;goto B717eac;
case 0x717eb0:c.instructions+=75;goto B717eb0;
case 0x717eb5:c.instructions+=74;goto B717eb5;
case 0x717eb9:c.instructions+=73;goto B717eb9;
case 0x717ebe:c.instructions+=72;goto B717ebe;
case 0x717ec2:c.instructions+=71;goto B717ec2;
case 0x717ec6:c.instructions+=70;goto B717ec6;
case 0x717eca:c.instructions+=69;goto B717eca;
case 0x717ecf:c.instructions+=68;goto B717ecf;
case 0x717ed4:c.instructions+=67;goto B717ed4;
case 0x717ed9:c.instructions+=66;goto B717ed9;
case 0x717edd:c.instructions+=65;goto B717edd;
case 0x717ee1:c.instructions+=64;goto B717ee1;
case 0x717ee5:c.instructions+=63;goto B717ee5;
case 0x717ee9:c.instructions+=62;goto B717ee9;
case 0x717eed:c.instructions+=61;goto B717eed;
case 0x717ef2:c.instructions+=60;goto B717ef2;
case 0x717ef6:c.instructions+=59;goto B717ef6;
case 0x717efb:c.instructions+=58;goto B717efb;
case 0x717eff:c.instructions+=57;goto B717eff;
case 0x717f03:c.instructions+=56;goto B717f03;
case 0x717f07:c.instructions+=55;goto B717f07;
case 0x717f0b:c.instructions+=54;goto B717f0b;
case 0x717f10:c.instructions+=53;goto B717f10;
case 0x717f15:c.instructions+=52;goto B717f15;
case 0x717f1d:c.instructions+=51;goto B717f1d;
case 0x717f22:c.instructions+=50;goto B717f22;
case 0x717f26:c.instructions+=49;goto B717f26;
case 0x717f2a:c.instructions+=48;goto B717f2a;
case 0x717f2e:c.instructions+=47;goto B717f2e;
case 0x717f32:c.instructions+=46;goto B717f32;
case 0x717f36:c.instructions+=45;goto B717f36;
case 0x717f3b:c.instructions+=44;goto B717f3b;
case 0x717f40:c.instructions+=43;goto B717f40;
case 0x717f48:c.instructions+=42;goto B717f48;
case 0x717f4c:c.instructions+=41;goto B717f4c;
case 0x717f50:c.instructions+=40;goto B717f50;
case 0x717f54:c.instructions+=39;goto B717f54;
case 0x717f59:c.instructions+=38;goto B717f59;
case 0x717f5e:c.instructions+=37;goto B717f5e;
case 0x717f66:c.instructions+=36;goto B717f66;
case 0x717f6a:c.instructions+=35;goto B717f6a;
case 0x717f6f:c.instructions+=34;goto B717f6f;
case 0x717f73:c.instructions+=33;goto B717f73;
case 0x717f77:c.instructions+=32;goto B717f77;
case 0x717f7b:c.instructions+=31;goto B717f7b;
case 0x717f7f:c.instructions+=30;goto B717f7f;
case 0x717f83:c.instructions+=29;goto B717f83;
case 0x717f88:c.instructions+=28;goto B717f88;
case 0x717f8d:c.instructions+=27;goto B717f8d;
case 0x717f91:c.instructions+=26;goto B717f91;
case 0x717f95:c.instructions+=25;goto B717f95;
case 0x717f99:c.instructions+=24;goto B717f99;
case 0x717f9d:c.instructions+=23;goto B717f9d;
case 0x717fa2:c.instructions+=22;goto B717fa2;
case 0x717fa7:c.instructions+=21;goto B717fa7;
case 0x717fac:c.instructions+=20;goto B717fac;
case 0x717fb0:c.instructions+=19;goto B717fb0;
case 0x717fb4:c.instructions+=18;goto B717fb4;
case 0x717fb8:c.instructions+=17;goto B717fb8;
case 0x717fbc:c.instructions+=16;goto B717fbc;
case 0x717fc0:c.instructions+=15;goto B717fc0;
case 0x717fc5:c.instructions+=14;goto B717fc5;
case 0x717fca:c.instructions+=13;goto B717fca;
case 0x717fce:c.instructions+=12;goto B717fce;
case 0x717fd2:c.instructions+=11;goto B717fd2;
case 0x717fd6:c.instructions+=10;goto B717fd6;
case 0x717fda:c.instructions+=9;goto B717fda;
case 0x717fdf:c.instructions+=8;goto B717fdf;
case 0x717fe4:c.instructions+=7;goto B717fe4;
case 0x717fe9:c.instructions+=6;goto B717fe9;
case 0x717fed:c.instructions+=5;goto B717fed;
case 0x717ff1:c.instructions+=4;goto B717ff1;
case 0x717ff5:c.instructions+=3;goto B717ff5;
case 0x717ff9:c.instructions+=2;goto B717ff9;
case 0x717ffd:c.instructions+=1;goto B717ffd;
default:missing_instruction(c.pc);}
B717000:L717000:{c.instructions+=316;NFSU2_TR(0x717000);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B717003:{NFSU2_TR(0x717003);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B717006:{NFSU2_TR(0x717006);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B71700a:{NFSU2_TR(0x71700a);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B71700e:{NFSU2_TR(0x71700e);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
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
B717011:{NFSU2_TR(0x717011);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B717014:{NFSU2_TR(0x717014);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B717016:{NFSU2_TR(0x717016);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B717018:{NFSU2_TR(0x717018);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71701b:{NFSU2_TR(0x71701b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B71701e:{NFSU2_TR(0x71701e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B717022:{NFSU2_TR(0x717022);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B717025:{NFSU2_TR(0x717025);
__builtin_memmove((R+4368),(R+4352),8);
}
B717028:{NFSU2_TR(0x717028);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71702b:{NFSU2_TR(0x71702b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71702e:{NFSU2_TR(0x71702e);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B717031:{NFSU2_TR(0x717031);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B717035:{NFSU2_TR(0x717035);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B717038:{NFSU2_TR(0x717038);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71703c:{NFSU2_TR(0x71703c);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B71703f:{NFSU2_TR(0x71703f);
__builtin_memmove((R+4400),(R+4384),8);
}
B717042:{NFSU2_TR(0x717042);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717045:{NFSU2_TR(0x717045);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717049:{NFSU2_TR(0x717049);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71704c:{NFSU2_TR(0x71704c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71704f:{NFSU2_TR(0x71704f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717052:{NFSU2_TR(0x717052);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717056:{NFSU2_TR(0x717056);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B717059:{NFSU2_TR(0x717059);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71705c:{NFSU2_TR(0x71705c);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71705f:{NFSU2_TR(0x71705f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B717063:{NFSU2_TR(0x717063);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B717066:{NFSU2_TR(0x717066);
__builtin_memmove((R+4400),(R+4384),8);
}
B717069:{NFSU2_TR(0x717069);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71706c:{NFSU2_TR(0x71706c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71706f:{NFSU2_TR(0x71706f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717072:{NFSU2_TR(0x717072);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717075:{NFSU2_TR(0x717075);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717078:{NFSU2_TR(0x717078);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71707c:{NFSU2_TR(0x71707c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71707f:{NFSU2_TR(0x71707f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B717082:{NFSU2_TR(0x717082);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B717085:{NFSU2_TR(0x717085);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B717089:{NFSU2_TR(0x717089);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71708c:{NFSU2_TR(0x71708c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71708f:{NFSU2_TR(0x71708f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717092:{NFSU2_TR(0x717092);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717099:{NFSU2_TR(0x717099);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71709c:{NFSU2_TR(0x71709c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71709f:{NFSU2_TR(0x71709f);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7170a2:{NFSU2_TR(0x7170a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7170a9:{NFSU2_TR(0x7170a9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7170ac:{NFSU2_TR(0x7170ac);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7170af:{NFSU2_TR(0x7170af);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7170b2:{NFSU2_TR(0x7170b2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7170b5:{NFSU2_TR(0x7170b5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7170b8:{NFSU2_TR(0x7170b8);
__builtin_memmove((R+4400),(R+4384),8);
}
B7170bb:{NFSU2_TR(0x7170bb);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7170be:{NFSU2_TR(0x7170be);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7170c5:{NFSU2_TR(0x7170c5);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7170c8:{NFSU2_TR(0x7170c8);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7170cb:{NFSU2_TR(0x7170cb);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7170ce:{NFSU2_TR(0x7170ce);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7170d5:{NFSU2_TR(0x7170d5);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7170d8:{NFSU2_TR(0x7170d8);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7170db:{NFSU2_TR(0x7170db);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7170de:{NFSU2_TR(0x7170de);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7170e5:{NFSU2_TR(0x7170e5);
__builtin_memmove((R+4464),(R+4448),8);
}
B7170e8:{NFSU2_TR(0x7170e8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7170eb:{NFSU2_TR(0x7170eb);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7170ee:{NFSU2_TR(0x7170ee);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7170f2:{NFSU2_TR(0x7170f2);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7170f5:{NFSU2_TR(0x7170f5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7170f8:{NFSU2_TR(0x7170f8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7170fb:{NFSU2_TR(0x7170fb);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7170fe:{NFSU2_TR(0x7170fe);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B717101:{NFSU2_TR(0x717101);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B717105:{NFSU2_TR(0x717105);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B717109:{NFSU2_TR(0x717109);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
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
B71710c:{NFSU2_TR(0x71710c);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71710f:{NFSU2_TR(0x71710f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B717111:{NFSU2_TR(0x717111);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B717113:{NFSU2_TR(0x717113);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B717116:{NFSU2_TR(0x717116);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B717119:{NFSU2_TR(0x717119);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71711d:{NFSU2_TR(0x71711d);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B717120:{NFSU2_TR(0x717120);
__builtin_memmove((R+4368),(R+4352),8);
}
B717123:{NFSU2_TR(0x717123);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B717126:{NFSU2_TR(0x717126);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B717129:{NFSU2_TR(0x717129);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B71712c:{NFSU2_TR(0x71712c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B717130:{NFSU2_TR(0x717130);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B717133:{NFSU2_TR(0x717133);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B717137:{NFSU2_TR(0x717137);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B71713a:{NFSU2_TR(0x71713a);
__builtin_memmove((R+4400),(R+4384),8);
}
B71713d:{NFSU2_TR(0x71713d);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717140:{NFSU2_TR(0x717140);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717144:{NFSU2_TR(0x717144);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717147:{NFSU2_TR(0x717147);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71714a:{NFSU2_TR(0x71714a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71714d:{NFSU2_TR(0x71714d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717151:{NFSU2_TR(0x717151);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B717154:{NFSU2_TR(0x717154);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B717157:{NFSU2_TR(0x717157);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71715a:{NFSU2_TR(0x71715a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71715e:{NFSU2_TR(0x71715e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B717161:{NFSU2_TR(0x717161);
__builtin_memmove((R+4400),(R+4384),8);
}
B717164:{NFSU2_TR(0x717164);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717167:{NFSU2_TR(0x717167);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71716a:{NFSU2_TR(0x71716a);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71716d:{NFSU2_TR(0x71716d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717170:{NFSU2_TR(0x717170);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717173:{NFSU2_TR(0x717173);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717177:{NFSU2_TR(0x717177);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71717a:{NFSU2_TR(0x71717a);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71717d:{NFSU2_TR(0x71717d);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B717180:{NFSU2_TR(0x717180);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B717184:{NFSU2_TR(0x717184);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B717187:{NFSU2_TR(0x717187);
__builtin_memmove((R+4400),(R+4384),8);
}
B71718a:{NFSU2_TR(0x71718a);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71718d:{NFSU2_TR(0x71718d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717194:{NFSU2_TR(0x717194);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717197:{NFSU2_TR(0x717197);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71719a:{NFSU2_TR(0x71719a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71719d:{NFSU2_TR(0x71719d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7171a4:{NFSU2_TR(0x7171a4);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7171a7:{NFSU2_TR(0x7171a7);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7171aa:{NFSU2_TR(0x7171aa);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7171ad:{NFSU2_TR(0x7171ad);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7171b0:{NFSU2_TR(0x7171b0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7171b3:{NFSU2_TR(0x7171b3);
__builtin_memmove((R+4400),(R+4384),8);
}
B7171b6:{NFSU2_TR(0x7171b6);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7171b9:{NFSU2_TR(0x7171b9);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7171c0:{NFSU2_TR(0x7171c0);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7171c3:{NFSU2_TR(0x7171c3);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7171c6:{NFSU2_TR(0x7171c6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7171c9:{NFSU2_TR(0x7171c9);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7171d0:{NFSU2_TR(0x7171d0);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7171d3:{NFSU2_TR(0x7171d3);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7171d6:{NFSU2_TR(0x7171d6);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7171d9:{NFSU2_TR(0x7171d9);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7171e0:{NFSU2_TR(0x7171e0);
__builtin_memmove((R+4464),(R+4448),8);
}
B7171e3:{NFSU2_TR(0x7171e3);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7171e6:{NFSU2_TR(0x7171e6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7171e9:{NFSU2_TR(0x7171e9);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7171ed:{NFSU2_TR(0x7171ed);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7171f0:{NFSU2_TR(0x7171f0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7171f3:{NFSU2_TR(0x7171f3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7171f6:{NFSU2_TR(0x7171f6);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7171f9:{NFSU2_TR(0x7171f9);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7171fc:{NFSU2_TR(0x7171fc);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B717200:{NFSU2_TR(0x717200);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B717204:{NFSU2_TR(0x717204);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
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
B717207:{NFSU2_TR(0x717207);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71720a:{NFSU2_TR(0x71720a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71720c:{NFSU2_TR(0x71720c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71720e:{NFSU2_TR(0x71720e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B717211:{NFSU2_TR(0x717211);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B717214:{NFSU2_TR(0x717214);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B717218:{NFSU2_TR(0x717218);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71721b:{NFSU2_TR(0x71721b);
__builtin_memmove((R+4368),(R+4352),8);
}
B71721e:{NFSU2_TR(0x71721e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B717221:{NFSU2_TR(0x717221);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B717224:{NFSU2_TR(0x717224);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B717227:{NFSU2_TR(0x717227);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71722b:{NFSU2_TR(0x71722b);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B71722e:{NFSU2_TR(0x71722e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B717232:{NFSU2_TR(0x717232);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B717235:{NFSU2_TR(0x717235);
__builtin_memmove((R+4400),(R+4384),8);
}
B717238:{NFSU2_TR(0x717238);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71723b:{NFSU2_TR(0x71723b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71723f:{NFSU2_TR(0x71723f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717242:{NFSU2_TR(0x717242);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717245:{NFSU2_TR(0x717245);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717248:{NFSU2_TR(0x717248);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71724c:{NFSU2_TR(0x71724c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71724f:{NFSU2_TR(0x71724f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B717252:{NFSU2_TR(0x717252);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B717255:{NFSU2_TR(0x717255);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B717259:{NFSU2_TR(0x717259);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71725c:{NFSU2_TR(0x71725c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71725f:{NFSU2_TR(0x71725f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717262:{NFSU2_TR(0x717262);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B717265:{NFSU2_TR(0x717265);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717268:{NFSU2_TR(0x717268);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71726b:{NFSU2_TR(0x71726b);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71726e:{NFSU2_TR(0x71726e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717272:{NFSU2_TR(0x717272);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B717275:{NFSU2_TR(0x717275);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B717278:{NFSU2_TR(0x717278);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71727b:{NFSU2_TR(0x71727b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71727f:{NFSU2_TR(0x71727f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B717282:{NFSU2_TR(0x717282);
__builtin_memmove((R+4400),(R+4384),8);
}
B717285:{NFSU2_TR(0x717285);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717288:{NFSU2_TR(0x717288);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71728f:{NFSU2_TR(0x71728f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717292:{NFSU2_TR(0x717292);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717295:{NFSU2_TR(0x717295);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717298:{NFSU2_TR(0x717298);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71729f:{NFSU2_TR(0x71729f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7172a2:{NFSU2_TR(0x7172a2);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7172a5:{NFSU2_TR(0x7172a5);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7172a8:{NFSU2_TR(0x7172a8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7172ab:{NFSU2_TR(0x7172ab);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7172ae:{NFSU2_TR(0x7172ae);
__builtin_memmove((R+4400),(R+4384),8);
}
B7172b1:{NFSU2_TR(0x7172b1);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7172b4:{NFSU2_TR(0x7172b4);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7172bb:{NFSU2_TR(0x7172bb);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7172be:{NFSU2_TR(0x7172be);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7172c1:{NFSU2_TR(0x7172c1);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7172c4:{NFSU2_TR(0x7172c4);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7172cb:{NFSU2_TR(0x7172cb);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7172ce:{NFSU2_TR(0x7172ce);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7172d1:{NFSU2_TR(0x7172d1);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7172d4:{NFSU2_TR(0x7172d4);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7172db:{NFSU2_TR(0x7172db);
__builtin_memmove((R+4464),(R+4448),8);
}
B7172de:{NFSU2_TR(0x7172de);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7172e1:{NFSU2_TR(0x7172e1);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7172e4:{NFSU2_TR(0x7172e4);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7172e8:{NFSU2_TR(0x7172e8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7172eb:{NFSU2_TR(0x7172eb);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7172ee:{NFSU2_TR(0x7172ee);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7172f1:{NFSU2_TR(0x7172f1);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7172f4:{NFSU2_TR(0x7172f4);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7172f7:{NFSU2_TR(0x7172f7);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7172fb:{NFSU2_TR(0x7172fb);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7172ff:{NFSU2_TR(0x7172ff);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
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
B717302:{NFSU2_TR(0x717302);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B717305:{NFSU2_TR(0x717305);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B717307:{NFSU2_TR(0x717307);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B717309:{NFSU2_TR(0x717309);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71730c:{NFSU2_TR(0x71730c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71730f:{NFSU2_TR(0x71730f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B717313:{NFSU2_TR(0x717313);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B717316:{NFSU2_TR(0x717316);
__builtin_memmove((R+4368),(R+4352),8);
}
B717319:{NFSU2_TR(0x717319);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71731c:{NFSU2_TR(0x71731c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71731f:{NFSU2_TR(0x71731f);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B717322:{NFSU2_TR(0x717322);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B717326:{NFSU2_TR(0x717326);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4422))));
}
B717329:{NFSU2_TR(0x717329);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71732d:{NFSU2_TR(0x71732d);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B717330:{NFSU2_TR(0x717330);
__builtin_memmove((R+4400),(R+4384),8);
}
B717333:{NFSU2_TR(0x717333);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717336:{NFSU2_TR(0x717336);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71733a:{NFSU2_TR(0x71733a);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71733d:{NFSU2_TR(0x71733d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717340:{NFSU2_TR(0x717340);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717343:{NFSU2_TR(0x717343);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B717347:{NFSU2_TR(0x717347);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71734a:{NFSU2_TR(0x71734a);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71734d:{NFSU2_TR(0x71734d);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B717350:{NFSU2_TR(0x717350);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B717354:{NFSU2_TR(0x717354);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B717357:{NFSU2_TR(0x717357);
__builtin_memmove((R+4400),(R+4384),8);
}
B71735a:{NFSU2_TR(0x71735a);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71735d:{NFSU2_TR(0x71735d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B717360:{NFSU2_TR(0x717360);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717363:{NFSU2_TR(0x717363);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717366:{NFSU2_TR(0x717366);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717369:{NFSU2_TR(0x717369);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71736d:{NFSU2_TR(0x71736d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B717370:{NFSU2_TR(0x717370);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B717373:{NFSU2_TR(0x717373);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B717376:{NFSU2_TR(0x717376);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71737a:{NFSU2_TR(0x71737a);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71737d:{NFSU2_TR(0x71737d);
__builtin_memmove((R+4400),(R+4384),8);
}
B717380:{NFSU2_TR(0x717380);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717383:{NFSU2_TR(0x717383);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71738a:{NFSU2_TR(0x71738a);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71738d:{NFSU2_TR(0x71738d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B717390:{NFSU2_TR(0x717390);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B717393:{NFSU2_TR(0x717393);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71739a:{NFSU2_TR(0x71739a);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71739d:{NFSU2_TR(0x71739d);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7173a0:{NFSU2_TR(0x7173a0);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7173a3:{NFSU2_TR(0x7173a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7173a6:{NFSU2_TR(0x7173a6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7173a9:{NFSU2_TR(0x7173a9);
__builtin_memmove((R+4400),(R+4384),8);
}
B7173ac:{NFSU2_TR(0x7173ac);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7173af:{NFSU2_TR(0x7173af);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7173b6:{NFSU2_TR(0x7173b6);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7173b9:{NFSU2_TR(0x7173b9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4422))));
}
B7173bc:{NFSU2_TR(0x7173bc);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7173bf:{NFSU2_TR(0x7173bf);
__builtin_memmove((R+4448),gp(0x817610),8);
}
B7173c6:{NFSU2_TR(0x7173c6);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7173c9:{NFSU2_TR(0x7173c9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B7173cc:{NFSU2_TR(0x7173cc);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B7173cf:{NFSU2_TR(0x7173cf);
__builtin_memmove((R+4448),gp(0x817620),8);
}
B7173d6:{NFSU2_TR(0x7173d6);
__builtin_memmove((R+4464),(R+4448),8);
}
B7173d9:{NFSU2_TR(0x7173d9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B7173dc:{NFSU2_TR(0x7173dc);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7173df:{NFSU2_TR(0x7173df);
{wv<8>((R+4464),uo::psllw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B7173e3:{NFSU2_TR(0x7173e3);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B7173e6:{NFSU2_TR(0x7173e6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B7173e9:{NFSU2_TR(0x7173e9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4470))));
}
B7173ec:{NFSU2_TR(0x7173ec);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B7173ef:{NFSU2_TR(0x7173ef);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B7173f2:{NFSU2_TR(0x7173f2);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x7ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x7ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x7ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x7ull))));
}
B7173f6:{NFSU2_TR(0x7173f6);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x7ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x7ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x7ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x7ull))));
}
B7173fa:{NFSU2_TR(0x7173fa);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
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
B7173fd:{NFSU2_TR(0x7173fd);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B717400:{NFSU2_TR(0x717400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B717401:{NFSU2_TR(0x717401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B717402:{NFSU2_TR(0x717402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B717403:{NFSU2_TR(0x717403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B717404:{NFSU2_TR(0x717404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B717405:{NFSU2_TR(0x717405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B717406:{NFSU2_TR(0x717406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B717407:{NFSU2_TR(0x717407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B717408:{NFSU2_TR(0x717408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B717409:{NFSU2_TR(0x717409);
__builtin_memmove((R+16),(R+20),4);
}
B71740b:{NFSU2_TR(0x71740b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71740c:{NFSU2_TR(0x71740c);
__builtin_memmove((R+16),(R+12),4);
}
B71740e:{NFSU2_TR(0x71740e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71740f:{NFSU2_TR(0x71740f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B717410:L717410:{c.instructions+=24;NFSU2_TR(0x717410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717411:{NFSU2_TR(0x717411);
__builtin_memmove((R+12),(R+16),4);
}
B717413:{NFSU2_TR(0x717413);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717414:{NFSU2_TR(0x717414);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717415:{NFSU2_TR(0x717415);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B717418:{NFSU2_TR(0x717418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71741b:{NFSU2_TR(0x71741b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71741c:{NFSU2_TR(0x71741c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71741f:{NFSU2_TR(0x71741f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717423:{NFSU2_TR(0x717423);
__builtin_memmove((R+20),(R+16),4);
}
B717425:{NFSU2_TR(0x717425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B71742b:{NFSU2_TR(0x71742b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71742e:{NFSU2_TR(0x71742e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717431:{NFSU2_TR(0x717431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717434:{NFSU2_TR(0x717434);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B717437:{NFSU2_TR(0x717437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71743a:{NFSU2_TR(0x71743a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71743d:{NFSU2_TR(0x71743d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B71743f:{NFSU2_TR(0x71743f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B717441:{NFSU2_TR(0x717441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717442:{NFSU2_TR(0x717442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717443:{NFSU2_TR(0x717443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717446:{NFSU2_TR(0x717446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717449:{NFSU2_TR(0x717449);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L717a6e;}}
}
B71744f:L71744f:{c.instructions+=3;NFSU2_TR(0x71744f);
__builtin_memmove((R+4),(R+0),4);
}
B717451:{NFSU2_TR(0x717451);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B717454:{NFSU2_TR(0x717454);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717457:L717457:{c.instructions+=8;NFSU2_TR(0x717457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71745a:{NFSU2_TR(0x71745a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71745d:{NFSU2_TR(0x71745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B717460:{NFSU2_TR(0x717460);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B717463:{NFSU2_TR(0x717463);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B717466:{NFSU2_TR(0x717466);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B717469:{NFSU2_TR(0x717469);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71746c:{NFSU2_TR(0x71746c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7179ef;}}
}
B717472:L717472:{c.instructions+=337;NFSU2_TR(0x717472);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717476:{NFSU2_TR(0x717476);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71747a:{NFSU2_TR(0x71747a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71747e:{NFSU2_TR(0x71747e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717482:{NFSU2_TR(0x717482);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717486:{NFSU2_TR(0x717486);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71748a:{NFSU2_TR(0x71748a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71748e:{NFSU2_TR(0x71748e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717492:{NFSU2_TR(0x717492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717493:{NFSU2_TR(0x717493);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717494:{NFSU2_TR(0x717494);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717495:{NFSU2_TR(0x717495);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717496:{NFSU2_TR(0x717496);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717497:{NFSU2_TR(0x717497);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71749c:{NFSU2_TR(0x71749c);
__builtin_memmove((R+4672),gp(0x8176b0),16);
}
B7174a4:{NFSU2_TR(0x7174a4);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B7174a8:{NFSU2_TR(0x7174a8);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B7174ac:{NFSU2_TR(0x7174ac);
w2(R+4672,shr<u16>(r2(R+4672),u64(u32(0x5ull))));
w2(R+4674,shr<u16>(r2(R+4674),u64(u32(0x5ull))));
w2(R+4676,shr<u16>(r2(R+4676),u64(u32(0x5ull))));
w2(R+4678,shr<u16>(r2(R+4678),u64(u32(0x5ull))));
w2(R+4680,shr<u16>(r2(R+4680),u64(u32(0x5ull))));
w2(R+4682,shr<u16>(r2(R+4682),u64(u32(0x5ull))));
w2(R+4684,shr<u16>(r2(R+4684),u64(u32(0x5ull))));
w2(R+4686,shr<u16>(r2(R+4686),u64(u32(0x5ull))));
}
B7174b1:{NFSU2_TR(0x7174b1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7174b6:{NFSU2_TR(0x7174b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7174b9:{NFSU2_TR(0x7174b9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7174bb:{NFSU2_TR(0x7174bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7174be:{NFSU2_TR(0x7174be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7174c4:{NFSU2_TR(0x7174c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7174c7:{NFSU2_TR(0x7174c7);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B7174cb:{NFSU2_TR(0x7174cb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7174cd:{NFSU2_TR(0x7174cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7174d0:{NFSU2_TR(0x7174d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7174d3:{NFSU2_TR(0x7174d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7174d8:{NFSU2_TR(0x7174d8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B7174dc:{NFSU2_TR(0x7174dc);
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
B7174e0:{NFSU2_TR(0x7174e0);
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
B7174e4:{NFSU2_TR(0x7174e4);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B7174e8:{NFSU2_TR(0x7174e8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7174ed:{NFSU2_TR(0x7174ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7174f2:{NFSU2_TR(0x7174f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7174f7:{NFSU2_TR(0x7174f7);
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
B7174fb:{NFSU2_TR(0x7174fb);
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
B7174ff:{NFSU2_TR(0x7174ff);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717504:{NFSU2_TR(0x717504);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717509:{NFSU2_TR(0x717509);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71750c:{NFSU2_TR(0x71750c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B717511:{NFSU2_TR(0x717511);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B717515:{NFSU2_TR(0x717515);
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
B717519:{NFSU2_TR(0x717519);
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
B71751d:{NFSU2_TR(0x71751d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717522:{NFSU2_TR(0x717522);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717527:{NFSU2_TR(0x717527);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71752c:{NFSU2_TR(0x71752c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B717531:{NFSU2_TR(0x717531);
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
B717535:{NFSU2_TR(0x717535);
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
B717539:{NFSU2_TR(0x717539);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71753e:{NFSU2_TR(0x71753e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717543:{NFSU2_TR(0x717543);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B717546:{NFSU2_TR(0x717546);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71754b:{NFSU2_TR(0x71754b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71754f:{NFSU2_TR(0x71754f);
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
B717553:{NFSU2_TR(0x717553);
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
B717557:{NFSU2_TR(0x717557);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71755f:{NFSU2_TR(0x71755f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717567:{NFSU2_TR(0x717567);
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
B71756b:{NFSU2_TR(0x71756b);
{wv<16>((R+4800),uo::psllw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B717570:{NFSU2_TR(0x717570);
w2(R+4800,shr<u16>(r2(R+4800),u64(u32(0x8ull))));
w2(R+4802,shr<u16>(r2(R+4802),u64(u32(0x8ull))));
w2(R+4804,shr<u16>(r2(R+4804),u64(u32(0x8ull))));
w2(R+4806,shr<u16>(r2(R+4806),u64(u32(0x8ull))));
w2(R+4808,shr<u16>(r2(R+4808),u64(u32(0x8ull))));
w2(R+4810,shr<u16>(r2(R+4810),u64(u32(0x8ull))));
w2(R+4812,shr<u16>(r2(R+4812),u64(u32(0x8ull))));
w2(R+4814,shr<u16>(r2(R+4814),u64(u32(0x8ull))));
}
B717575:{NFSU2_TR(0x717575);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71757a:{NFSU2_TR(0x71757a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71757f:{NFSU2_TR(0x71757f);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717583:{NFSU2_TR(0x717583);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717587:{NFSU2_TR(0x717587);
__builtin_memmove((R+4608),(R+4736),16);
}
B71758b:{NFSU2_TR(0x71758b);
__builtin_memmove((R+4864),(R+4992),16);
}
B71758f:{NFSU2_TR(0x71758f);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717593:{NFSU2_TR(0x717593);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717597:{NFSU2_TR(0x717597);
__builtin_memmove((R+4672),(R+4736),16);
}
B71759b:{NFSU2_TR(0x71759b);
__builtin_memmove((R+4928),(R+4992),16);
}
B71759f:{NFSU2_TR(0x71759f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B7175a4:{NFSU2_TR(0x7175a4);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B7175a9:{NFSU2_TR(0x7175a9);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B7175ad:{NFSU2_TR(0x7175ad);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B7175b1:{NFSU2_TR(0x7175b1);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B7175b5:{NFSU2_TR(0x7175b5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B7175b9:{NFSU2_TR(0x7175b9);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B7175bd:{NFSU2_TR(0x7175bd);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B7175c1:{NFSU2_TR(0x7175c1);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B7175c5:{NFSU2_TR(0x7175c5);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B7175c9:{NFSU2_TR(0x7175c9);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B7175ce:{NFSU2_TR(0x7175ce);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B7175d3:{NFSU2_TR(0x7175d3);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B7175d7:{NFSU2_TR(0x7175d7);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B7175db:{NFSU2_TR(0x7175db);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B7175df:{NFSU2_TR(0x7175df);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B7175e3:{NFSU2_TR(0x7175e3);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B7175e7:{NFSU2_TR(0x7175e7);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B7175eb:{NFSU2_TR(0x7175eb);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B7175ef:{NFSU2_TR(0x7175ef);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B7175f3:{NFSU2_TR(0x7175f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B7175f8:{NFSU2_TR(0x7175f8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B717600:{NFSU2_TR(0x717600);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717604:{NFSU2_TR(0x717604);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717608:{NFSU2_TR(0x717608);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71760c:{NFSU2_TR(0x71760c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B717610:{NFSU2_TR(0x717610);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717614:{NFSU2_TR(0x717614);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717618:{NFSU2_TR(0x717618);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B71761c:{NFSU2_TR(0x71761c);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B717620:{NFSU2_TR(0x717620);
__builtin_memmove((R+5056),(R+4800),16);
}
B717624:{NFSU2_TR(0x717624);
w2(R+5056,shr<u16>(r2(R+5056),u64(u32(0x7ull))));
w2(R+5058,shr<u16>(r2(R+5058),u64(u32(0x7ull))));
w2(R+5060,shr<u16>(r2(R+5060),u64(u32(0x7ull))));
w2(R+5062,shr<u16>(r2(R+5062),u64(u32(0x7ull))));
w2(R+5064,shr<u16>(r2(R+5064),u64(u32(0x7ull))));
w2(R+5066,shr<u16>(r2(R+5066),u64(u32(0x7ull))));
w2(R+5068,shr<u16>(r2(R+5068),u64(u32(0x7ull))));
w2(R+5070,shr<u16>(r2(R+5070),u64(u32(0x7ull))));
}
B717629:{NFSU2_TR(0x717629);
__builtin_memmove((R+4736),(R+4608),16);
}
B71762d:{NFSU2_TR(0x71762d);
__builtin_memmove((R+4992),(R+4864),16);
}
B717631:{NFSU2_TR(0x717631);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B717635:{NFSU2_TR(0x717635);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+5056))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+5058))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+5060))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+5062))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5064))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5066))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5068))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5070))));
}
B717639:{NFSU2_TR(0x717639);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x1ull)));}
}
B71763e:{NFSU2_TR(0x71763e);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x1ull)));}
}
B717643:{NFSU2_TR(0x717643);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x1ull)));}
}
B717648:{NFSU2_TR(0x717648);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B71764d:{NFSU2_TR(0x71764d);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4622))));
}
B717651:{NFSU2_TR(0x717651);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4864))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4866))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4868))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4870))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4872))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4874))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4876))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4878))));
}
B717655:{NFSU2_TR(0x717655);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B717659:{NFSU2_TR(0x717659);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5006))));
}
B71765d:{NFSU2_TR(0x71765d);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B717662:{NFSU2_TR(0x717662);
__builtin_memmove((R+4736),(R+4672),16);
}
B717666:{NFSU2_TR(0x717666);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71766b:{NFSU2_TR(0x71766b);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717670:{NFSU2_TR(0x717670);
__builtin_memmove((R+4992),(R+4928),16);
}
B717674:{NFSU2_TR(0x717674);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+5056))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+5058))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+5060))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+5062))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+5064))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+5066))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+5068))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+5070))));
}
B717678:{NFSU2_TR(0x717678);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5070))));
}
B71767c:{NFSU2_TR(0x71767c);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0xfull)));}
}
B717681:{NFSU2_TR(0x717681);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0xfull)));}
}
B717686:{NFSU2_TR(0x717686);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B71768b:{NFSU2_TR(0x71768b);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0xfull)));}
}
B717690:{NFSU2_TR(0x717690);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B717695:{NFSU2_TR(0x717695);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4672))));
}
B717699:{NFSU2_TR(0x717699);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4992))));
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4928))));
}
B71769d:{NFSU2_TR(0x71769d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B7176a2:{NFSU2_TR(0x7176a2);
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((R+4992)),rv<16>((R+4736))));
}
B7176a6:{NFSU2_TR(0x7176a6);
__builtin_memmove((R+4736),(R+5056),16);
}
B7176aa:{NFSU2_TR(0x7176aa);
{wv<16>((R+5056),uo::psubusw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B7176ae:{NFSU2_TR(0x7176ae);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B7176b2:{NFSU2_TR(0x7176b2);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4864))));
}
B7176b6:{NFSU2_TR(0x7176b6);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B7176bb:{NFSU2_TR(0x7176bb);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0xfull)));}
}
B7176c0:{NFSU2_TR(0x7176c0);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>((R+4992))));
}
B7176c4:{NFSU2_TR(0x7176c4);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4928),(U+0),16);
}
B7176c8:{NFSU2_TR(0x7176c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B7176cd:{NFSU2_TR(0x7176cd);
__builtin_memmove((R+4800),(R+4864),16);
}
B7176d1:{NFSU2_TR(0x7176d1);
__builtin_memmove((R+4992),(R+4928),16);
}
B7176d5:{NFSU2_TR(0x7176d5);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B7176d9:{NFSU2_TR(0x7176d9);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B7176dd:{NFSU2_TR(0x7176dd);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B7176e1:{NFSU2_TR(0x7176e1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B7176e6:{NFSU2_TR(0x7176e6);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B7176eb:{NFSU2_TR(0x7176eb);
__builtin_memmove((R+4672),(R+4864),16);
}
B7176ef:{NFSU2_TR(0x7176ef);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B7176f3:{NFSU2_TR(0x7176f3);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4672))));
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B7176f7:{NFSU2_TR(0x7176f7);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4864))));
}
B7176fb:{NFSU2_TR(0x7176fb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B717703:{NFSU2_TR(0x717703);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71770b:{NFSU2_TR(0x71770b);
__builtin_memmove((R+4800),(R+4864),16);
}
B71770f:{NFSU2_TR(0x71770f);
__builtin_memmove((R+4992),(R+4928),16);
}
B717713:{NFSU2_TR(0x717713);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B717717:{NFSU2_TR(0x717717);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B71771b:{NFSU2_TR(0x71771b);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B71771f:{NFSU2_TR(0x71771f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B717724:{NFSU2_TR(0x717724);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B717729:{NFSU2_TR(0x717729);
__builtin_memmove((R+4736),(R+4864),16);
}
B71772d:{NFSU2_TR(0x71772d);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B717731:{NFSU2_TR(0x717731);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B717735:{NFSU2_TR(0x717735);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4864))));
}
B717739:{NFSU2_TR(0x717739);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71773d:{NFSU2_TR(0x71773d);
__builtin_memmove((R+4800),(R+4672),16);
}
B717741:{NFSU2_TR(0x717741);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4800))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4802))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4804))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4806))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4808))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4810))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4812))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4814))));
}
B717745:{NFSU2_TR(0x717745);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4686))));
}
B717749:{NFSU2_TR(0x717749);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71774e:{NFSU2_TR(0x71774e);
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
B717753:{NFSU2_TR(0x717753);
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
B717758:{NFSU2_TR(0x717758);
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
B71775d:{NFSU2_TR(0x71775d);
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
B717765:{NFSU2_TR(0x717765);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B717769:{NFSU2_TR(0x717769);
__builtin_memmove((R+4864),(R+4800),16);
}
B71776d:{NFSU2_TR(0x71776d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717772:{NFSU2_TR(0x717772);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717776:{NFSU2_TR(0x717776);
{wv<16>((R+4864),uo::psllw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B71777b:{NFSU2_TR(0x71777b);
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
B717780:{NFSU2_TR(0x717780);
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
B717785:{NFSU2_TR(0x717785);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71778a:{NFSU2_TR(0x71778a);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B71778e:{NFSU2_TR(0x71778e);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717792:{NFSU2_TR(0x717792);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717796:{NFSU2_TR(0x717796);
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
B71779a:{NFSU2_TR(0x71779a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71779f:{NFSU2_TR(0x71779f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7177a4:{NFSU2_TR(0x7177a4);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B7177a8:{NFSU2_TR(0x7177a8);
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
B7177ad:{NFSU2_TR(0x7177ad);
__builtin_memmove((R+4864),(R+4928),16);
}
B7177b1:{NFSU2_TR(0x7177b1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B7177b5:{NFSU2_TR(0x7177b5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B7177b9:{NFSU2_TR(0x7177b9);
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
B7177be:{NFSU2_TR(0x7177be);
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
B7177c3:{NFSU2_TR(0x7177c3);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7177c8:{NFSU2_TR(0x7177c8);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7177cc:{NFSU2_TR(0x7177cc);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7177d0:{NFSU2_TR(0x7177d0);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7177d4:{NFSU2_TR(0x7177d4);
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
B7177d8:{NFSU2_TR(0x7177d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7177dd:{NFSU2_TR(0x7177dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7177e2:{NFSU2_TR(0x7177e2);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B7177e6:{NFSU2_TR(0x7177e6);
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
B7177eb:{NFSU2_TR(0x7177eb);
__builtin_memmove((R+4864),(R+4928),16);
}
B7177ef:{NFSU2_TR(0x7177ef);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B7177f3:{NFSU2_TR(0x7177f3);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B7177f7:{NFSU2_TR(0x7177f7);
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
B7177fc:{NFSU2_TR(0x7177fc);
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
B717801:{NFSU2_TR(0x717801);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717806:{NFSU2_TR(0x717806);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B71780a:{NFSU2_TR(0x71780a);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B71780e:{NFSU2_TR(0x71780e);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717812:{NFSU2_TR(0x717812);
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
B717816:{NFSU2_TR(0x717816);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B71781a:{NFSU2_TR(0x71781a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71781f:{NFSU2_TR(0x71781f);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B717823:{NFSU2_TR(0x717823);
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
B717828:{NFSU2_TR(0x717828);
__builtin_memmove((R+4864),(R+4928),16);
}
B71782c:{NFSU2_TR(0x71782c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717830:{NFSU2_TR(0x717830);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717834:{NFSU2_TR(0x717834);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4672))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4674))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4676))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4678))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4680))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4682))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4684))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4686))));
}
B717838:{NFSU2_TR(0x717838);
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
B71783d:{NFSU2_TR(0x71783d);
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
B717842:{NFSU2_TR(0x717842);
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
B71784a:{NFSU2_TR(0x71784a);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71784f:{NFSU2_TR(0x71784f);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717853:{NFSU2_TR(0x717853);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717857:{NFSU2_TR(0x717857);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B71785b:{NFSU2_TR(0x71785b);
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
B71785f:{NFSU2_TR(0x71785f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717864:{NFSU2_TR(0x717864);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717869:{NFSU2_TR(0x717869);
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
B71786e:{NFSU2_TR(0x71786e);
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
B717876:{NFSU2_TR(0x717876);
__builtin_memmove((R+4864),(R+4928),16);
}
B71787a:{NFSU2_TR(0x71787a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71787e:{NFSU2_TR(0x71787e);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717882:{NFSU2_TR(0x717882);
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
B717887:{NFSU2_TR(0x717887);
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
B71788c:{NFSU2_TR(0x71788c);
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
B717894:{NFSU2_TR(0x717894);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B717898:{NFSU2_TR(0x717898);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71789d:{NFSU2_TR(0x71789d);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7178a1:{NFSU2_TR(0x7178a1);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7178a5:{NFSU2_TR(0x7178a5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7178a9:{NFSU2_TR(0x7178a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7178ac:{NFSU2_TR(0x7178ac);
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
B7178b0:{NFSU2_TR(0x7178b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7178b5:{NFSU2_TR(0x7178b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7178ba:{NFSU2_TR(0x7178ba);
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
B7178bf:{NFSU2_TR(0x7178bf);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B7178c3:{NFSU2_TR(0x7178c3);
__builtin_memmove((R+4864),(R+4928),16);
}
B7178c7:{NFSU2_TR(0x7178c7);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B7178cb:{NFSU2_TR(0x7178cb);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B7178cf:{NFSU2_TR(0x7178cf);
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
B7178d4:{NFSU2_TR(0x7178d4);
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
B7178d9:{NFSU2_TR(0x7178d9);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7178de:{NFSU2_TR(0x7178de);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7178e2:{NFSU2_TR(0x7178e2);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7178e6:{NFSU2_TR(0x7178e6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7178ea:{NFSU2_TR(0x7178ea);
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
B7178ee:{NFSU2_TR(0x7178ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7178f3:{NFSU2_TR(0x7178f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7178f8:{NFSU2_TR(0x7178f8);
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
B7178fd:{NFSU2_TR(0x7178fd);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B717901:{NFSU2_TR(0x717901);
__builtin_memmove((R+4864),(R+4928),16);
}
B717905:{NFSU2_TR(0x717905);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717909:{NFSU2_TR(0x717909);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B71790d:{NFSU2_TR(0x71790d);
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
B717912:{NFSU2_TR(0x717912);
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
B717917:{NFSU2_TR(0x717917);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71791c:{NFSU2_TR(0x71791c);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717920:{NFSU2_TR(0x717920);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717924:{NFSU2_TR(0x717924);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717928:{NFSU2_TR(0x717928);
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
B71792c:{NFSU2_TR(0x71792c);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B717930:{NFSU2_TR(0x717930);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717938:{NFSU2_TR(0x717938);
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
B71793d:{NFSU2_TR(0x71793d);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B717941:{NFSU2_TR(0x717941);
__builtin_memmove((R+4864),(R+4928),16);
}
B717945:{NFSU2_TR(0x717945);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717949:{NFSU2_TR(0x717949);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B71794d:{NFSU2_TR(0x71794d);
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
B717952:{NFSU2_TR(0x717952);
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
B717957:{NFSU2_TR(0x717957);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71795c:{NFSU2_TR(0x71795c);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717960:{NFSU2_TR(0x717960);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717964:{NFSU2_TR(0x717964);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717968:{NFSU2_TR(0x717968);
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
B71796c:{NFSU2_TR(0x71796c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717971:{NFSU2_TR(0x717971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B717972:{NFSU2_TR(0x717972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B717973:{NFSU2_TR(0x717973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B717974:{NFSU2_TR(0x717974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B717975:{NFSU2_TR(0x717975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B717976:{NFSU2_TR(0x717976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B717979:{NFSU2_TR(0x717979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71797c:{NFSU2_TR(0x71797c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71797f:{NFSU2_TR(0x71797f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B717983:{NFSU2_TR(0x717983);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B717986:{NFSU2_TR(0x717986);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71798a:{NFSU2_TR(0x71798a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B71798c:{NFSU2_TR(0x71798c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B717990:{NFSU2_TR(0x717990);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B717992:{NFSU2_TR(0x717992);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B717996:{NFSU2_TR(0x717996);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B717998:{NFSU2_TR(0x717998);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B71799c:{NFSU2_TR(0x71799c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B71799e:{NFSU2_TR(0x71799e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7179a2:{NFSU2_TR(0x7179a2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7179a4:{NFSU2_TR(0x7179a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7179a8:{NFSU2_TR(0x7179a8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7179aa:{NFSU2_TR(0x7179aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7179ae:{NFSU2_TR(0x7179ae);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7179b0:{NFSU2_TR(0x7179b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B7179b2:{NFSU2_TR(0x7179b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7179b5:{NFSU2_TR(0x7179b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7179b8:{NFSU2_TR(0x7179b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179bc:{NFSU2_TR(0x7179bc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7179be:{NFSU2_TR(0x7179be);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B7179c2:{NFSU2_TR(0x7179c2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179c4:{NFSU2_TR(0x7179c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179c8:{NFSU2_TR(0x7179c8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179ca:{NFSU2_TR(0x7179ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179ce:{NFSU2_TR(0x7179ce);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179d0:{NFSU2_TR(0x7179d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179d4:{NFSU2_TR(0x7179d4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179d6:{NFSU2_TR(0x7179d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179da:{NFSU2_TR(0x7179da);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179dc:{NFSU2_TR(0x7179dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179e0:{NFSU2_TR(0x7179e0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179e2:{NFSU2_TR(0x7179e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7179e6:{NFSU2_TR(0x7179e6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7179e8:{NFSU2_TR(0x7179e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B7179ea:{NFSU2_TR(0x7179ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7179ed:{NFSU2_TR(0x7179ed);
{goto L717a53;}
}
B7179ef:L7179ef:{c.instructions+=35;NFSU2_TR(0x7179ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7179f0:{NFSU2_TR(0x7179f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7179f1:{NFSU2_TR(0x7179f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7179f2:{NFSU2_TR(0x7179f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7179f5:{NFSU2_TR(0x7179f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7179f8:{NFSU2_TR(0x7179f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7179f9:{NFSU2_TR(0x7179f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7179fc:{NFSU2_TR(0x7179fc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7179fe:{NFSU2_TR(0x7179fe);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B717a00:{NFSU2_TR(0x717a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B717a03:{NFSU2_TR(0x717a03);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B717a06:{NFSU2_TR(0x717a06);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a0a:{NFSU2_TR(0x717a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B717a0d:{NFSU2_TR(0x717a0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B717a11:{NFSU2_TR(0x717a11);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a15:{NFSU2_TR(0x717a15);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B717a19:{NFSU2_TR(0x717a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B717a1c:{NFSU2_TR(0x717a1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a20:{NFSU2_TR(0x717a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B717a23:{NFSU2_TR(0x717a23);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B717a27:{NFSU2_TR(0x717a27);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a2b:{NFSU2_TR(0x717a2b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B717a2e:{NFSU2_TR(0x717a2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B717a32:{NFSU2_TR(0x717a32);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B717a35:{NFSU2_TR(0x717a35);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4448),(U+8),8);
}
B717a39:{NFSU2_TR(0x717a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B717a3c:{NFSU2_TR(0x717a3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4432),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a40:{NFSU2_TR(0x717a40);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4448),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a44:{NFSU2_TR(0x717a44);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4464),(U+8),8);
}
B717a48:{NFSU2_TR(0x717a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B717a4b:{NFSU2_TR(0x717a4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B717a4f:{NFSU2_TR(0x717a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B717a50:{NFSU2_TR(0x717a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B717a51:{NFSU2_TR(0x717a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B717a52:{NFSU2_TR(0x717a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B717a53:L717a53:{c.instructions+=6;NFSU2_TR(0x717a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B717a57:{NFSU2_TR(0x717a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B717a5b:{NFSU2_TR(0x717a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B717a5e:{NFSU2_TR(0x717a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B717a62:{NFSU2_TR(0x717a62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B717a65:{NFSU2_TR(0x717a65);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x717457u);}goto L717457;}}
}
B717a6b:L717a6b:{c.instructions+=1;NFSU2_TR(0x717a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717a6e:L717a6e:{c.instructions+=16;NFSU2_TR(0x717a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B717a71:{NFSU2_TR(0x717a71);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B717a74:{NFSU2_TR(0x717a74);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717a76:{NFSU2_TR(0x717a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B717a77:{NFSU2_TR(0x717a77);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B717a79:{NFSU2_TR(0x717a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B717a7c:{NFSU2_TR(0x717a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B717a7f:{NFSU2_TR(0x717a7f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B717a81:{NFSU2_TR(0x717a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B717a84:{NFSU2_TR(0x717a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B717a87:{NFSU2_TR(0x717a87);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B717a88:{NFSU2_TR(0x717a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717a8b:{NFSU2_TR(0x717a8b);
__builtin_memmove((R+8),(R+4),4);
}
B717a8d:{NFSU2_TR(0x717a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717a90:{NFSU2_TR(0x717a90);
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
B717a92:{NFSU2_TR(0x717a92);
TAIL_STATIC(0x718160u,718);
}
B717a97:L717a97:{c.instructions+=10;NFSU2_TR(0x717a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717a9a:{NFSU2_TR(0x717a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717a9d:{NFSU2_TR(0x717a9d);
__builtin_memmove((R+0),(R+8),4);
}
B717a9f:{NFSU2_TR(0x717a9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B717aa2:{NFSU2_TR(0x717aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B717aa5:{NFSU2_TR(0x717aa5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B717aa9:{NFSU2_TR(0x717aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717aac:{NFSU2_TR(0x717aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B717aaf:{NFSU2_TR(0x717aaf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B717ab2:{NFSU2_TR(0x717ab2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x718151u,718);}
}
B717ab8:L717ab8:{c.instructions+=11;NFSU2_TR(0x717ab8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717abc:{NFSU2_TR(0x717abc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ac0:{NFSU2_TR(0x717ac0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ac4:{NFSU2_TR(0x717ac4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ac8:{NFSU2_TR(0x717ac8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717acc:{NFSU2_TR(0x717acc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ad0:{NFSU2_TR(0x717ad0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ad4:{NFSU2_TR(0x717ad4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B717ad8:{NFSU2_TR(0x717ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B717adb:{NFSU2_TR(0x717adb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B717add:{NFSU2_TR(0x717add);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B717ae0:L717ae0:{c.instructions+=8;NFSU2_TR(0x717ae0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B717ae5:{NFSU2_TR(0x717ae5);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B717aed:{NFSU2_TR(0x717aed);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B717af1:{NFSU2_TR(0x717af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B717af4:{NFSU2_TR(0x717af4);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B717af9:{NFSU2_TR(0x717af9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B717afa:{NFSU2_TR(0x717afa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B717afd:{NFSU2_TR(0x717afd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x717ae0u);}goto L717ae0;}}
}
B717aff:L717aff:{c.instructions+=312;NFSU2_TR(0x717aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717b00:{NFSU2_TR(0x717b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717b01:{NFSU2_TR(0x717b01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717b02:{NFSU2_TR(0x717b02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717b03:{NFSU2_TR(0x717b03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B717b04:{NFSU2_TR(0x717b04);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B717b09:{NFSU2_TR(0x717b09);
__builtin_memmove((R+4672),gp(0x8176b0),16);
}
B717b11:{NFSU2_TR(0x717b11);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B717b15:{NFSU2_TR(0x717b15);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B717b19:{NFSU2_TR(0x717b19);
w2(R+4672,shr<u16>(r2(R+4672),u64(u32(0x5ull))));
w2(R+4674,shr<u16>(r2(R+4674),u64(u32(0x5ull))));
w2(R+4676,shr<u16>(r2(R+4676),u64(u32(0x5ull))));
w2(R+4678,shr<u16>(r2(R+4678),u64(u32(0x5ull))));
w2(R+4680,shr<u16>(r2(R+4680),u64(u32(0x5ull))));
w2(R+4682,shr<u16>(r2(R+4682),u64(u32(0x5ull))));
w2(R+4684,shr<u16>(r2(R+4684),u64(u32(0x5ull))));
w2(R+4686,shr<u16>(r2(R+4686),u64(u32(0x5ull))));
}
B717b1e:{NFSU2_TR(0x717b1e);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717b23:{NFSU2_TR(0x717b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B717b26:{NFSU2_TR(0x717b26);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B717b28:{NFSU2_TR(0x717b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B717b2b:{NFSU2_TR(0x717b2b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B717b2e:{NFSU2_TR(0x717b2e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B717b31:{NFSU2_TR(0x717b31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+28),(U+0),4);
}
B717b37:{NFSU2_TR(0x717b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B717b3a:{NFSU2_TR(0x717b3a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B717b3c:{NFSU2_TR(0x717b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B717b3f:{NFSU2_TR(0x717b3f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B717b42:{NFSU2_TR(0x717b42);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B717b46:{NFSU2_TR(0x717b46);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B717b4a:{NFSU2_TR(0x717b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B717b4d:{NFSU2_TR(0x717b4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B717b51:{NFSU2_TR(0x717b51);
__builtin_memmove((R+4416),(R+4352),8);
}
B717b54:{NFSU2_TR(0x717b54);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B717b57:{NFSU2_TR(0x717b57);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B717b5a:{NFSU2_TR(0x717b5a);
__builtin_memmove((R+4432),(R+4384),8);
}
B717b5d:{NFSU2_TR(0x717b5d);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B717b60:{NFSU2_TR(0x717b60);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B717b63:{NFSU2_TR(0x717b63);
__builtin_memmove((R+4368),(R+4352),8);
}
B717b66:{NFSU2_TR(0x717b66);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B717b69:{NFSU2_TR(0x717b69);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B717b6c:{NFSU2_TR(0x717b6c);
__builtin_memmove((R+4384),(R+4416),8);
}
B717b6f:{NFSU2_TR(0x717b6f);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B717b72:{NFSU2_TR(0x717b72);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B717b75:{NFSU2_TR(0x717b75);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B717b78:{NFSU2_TR(0x717b78);
__builtin_memmove((R+4432),(R+4352),8);
}
B717b7b:{NFSU2_TR(0x717b7b);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B717b7e:{NFSU2_TR(0x717b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717b82:{NFSU2_TR(0x717b82);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B717b85:{NFSU2_TR(0x717b85);
__builtin_memmove((R+4352),(R+4368),8);
}
B717b88:{NFSU2_TR(0x717b88);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717b8c:{NFSU2_TR(0x717b8c);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B717b8f:{NFSU2_TR(0x717b8f);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B717b92:{NFSU2_TR(0x717b92);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717b96:{NFSU2_TR(0x717b96);
__builtin_memmove((R+4400),(R+4384),8);
}
B717b99:{NFSU2_TR(0x717b99);
__builtin_memmove((R+4432),(R+4416),8);
}
B717b9c:{NFSU2_TR(0x717b9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717ba0:{NFSU2_TR(0x717ba0);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717ba3:{NFSU2_TR(0x717ba3);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717ba6:{NFSU2_TR(0x717ba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717baa:{NFSU2_TR(0x717baa);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B717bad:{NFSU2_TR(0x717bad);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B717bb0:{NFSU2_TR(0x717bb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717bb4:{NFSU2_TR(0x717bb4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B717bb7:{NFSU2_TR(0x717bb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B717bbb:{NFSU2_TR(0x717bbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717bbf:{NFSU2_TR(0x717bbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B717bc3:{NFSU2_TR(0x717bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B717bc6:{NFSU2_TR(0x717bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717bcd:{NFSU2_TR(0x717bcd);
__builtin_memmove((R+4416),(R+4352),8);
}
B717bd0:{NFSU2_TR(0x717bd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B717bd4:{NFSU2_TR(0x717bd4);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B717bd7:{NFSU2_TR(0x717bd7);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B717bda:{NFSU2_TR(0x717bda);
__builtin_memmove((R+4432),(R+4384),8);
}
B717bdd:{NFSU2_TR(0x717bdd);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B717be0:{NFSU2_TR(0x717be0);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B717be3:{NFSU2_TR(0x717be3);
__builtin_memmove((R+4368),(R+4352),8);
}
B717be6:{NFSU2_TR(0x717be6);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B717be9:{NFSU2_TR(0x717be9);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B717bec:{NFSU2_TR(0x717bec);
__builtin_memmove((R+4384),(R+4416),8);
}
B717bef:{NFSU2_TR(0x717bef);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B717bf2:{NFSU2_TR(0x717bf2);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B717bf5:{NFSU2_TR(0x717bf5);
__builtin_memmove((R+4432),(R+4352),8);
}
B717bf8:{NFSU2_TR(0x717bf8);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B717bfb:{NFSU2_TR(0x717bfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717bff:{NFSU2_TR(0x717bff);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B717c02:{NFSU2_TR(0x717c02);
__builtin_memmove((R+4352),(R+4368),8);
}
B717c05:{NFSU2_TR(0x717c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c09:{NFSU2_TR(0x717c09);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B717c0c:{NFSU2_TR(0x717c0c);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B717c0f:{NFSU2_TR(0x717c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c13:{NFSU2_TR(0x717c13);
__builtin_memmove((R+4400),(R+4384),8);
}
B717c16:{NFSU2_TR(0x717c16);
__builtin_memmove((R+4432),(R+4416),8);
}
B717c19:{NFSU2_TR(0x717c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c1d:{NFSU2_TR(0x717c1d);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B717c20:{NFSU2_TR(0x717c20);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B717c23:{NFSU2_TR(0x717c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c27:{NFSU2_TR(0x717c27);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B717c2a:{NFSU2_TR(0x717c2a);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B717c2d:{NFSU2_TR(0x717c2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c31:{NFSU2_TR(0x717c31);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c35:{NFSU2_TR(0x717c35);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B717c3c:{NFSU2_TR(0x717c3c);
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
B717c40:{NFSU2_TR(0x717c40);
{wv<16>((R+4800),uo::psllw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B717c45:{NFSU2_TR(0x717c45);
w2(R+4800,shr<u16>(r2(R+4800),u64(u32(0x8ull))));
w2(R+4802,shr<u16>(r2(R+4802),u64(u32(0x8ull))));
w2(R+4804,shr<u16>(r2(R+4804),u64(u32(0x8ull))));
w2(R+4806,shr<u16>(r2(R+4806),u64(u32(0x8ull))));
w2(R+4808,shr<u16>(r2(R+4808),u64(u32(0x8ull))));
w2(R+4810,shr<u16>(r2(R+4810),u64(u32(0x8ull))));
w2(R+4812,shr<u16>(r2(R+4812),u64(u32(0x8ull))));
w2(R+4814,shr<u16>(r2(R+4814),u64(u32(0x8ull))));
}
B717c4a:{NFSU2_TR(0x717c4a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B717c4f:{NFSU2_TR(0x717c4f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B717c54:{NFSU2_TR(0x717c54);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717c58:{NFSU2_TR(0x717c58);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717c5c:{NFSU2_TR(0x717c5c);
__builtin_memmove((R+4608),(R+4736),16);
}
B717c60:{NFSU2_TR(0x717c60);
__builtin_memmove((R+4864),(R+4992),16);
}
B717c64:{NFSU2_TR(0x717c64);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717c68:{NFSU2_TR(0x717c68);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717c6c:{NFSU2_TR(0x717c6c);
__builtin_memmove((R+4672),(R+4736),16);
}
B717c70:{NFSU2_TR(0x717c70);
__builtin_memmove((R+4928),(R+4992),16);
}
B717c74:{NFSU2_TR(0x717c74);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B717c79:{NFSU2_TR(0x717c79);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B717c7e:{NFSU2_TR(0x717c7e);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717c82:{NFSU2_TR(0x717c82);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717c86:{NFSU2_TR(0x717c86);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B717c8a:{NFSU2_TR(0x717c8a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B717c8e:{NFSU2_TR(0x717c8e);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717c92:{NFSU2_TR(0x717c92);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717c96:{NFSU2_TR(0x717c96);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B717c9a:{NFSU2_TR(0x717c9a);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B717c9e:{NFSU2_TR(0x717c9e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B717ca3:{NFSU2_TR(0x717ca3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B717ca8:{NFSU2_TR(0x717ca8);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717cac:{NFSU2_TR(0x717cac);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717cb0:{NFSU2_TR(0x717cb0);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B717cb4:{NFSU2_TR(0x717cb4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B717cb8:{NFSU2_TR(0x717cb8);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717cbc:{NFSU2_TR(0x717cbc);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717cc0:{NFSU2_TR(0x717cc0);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B717cc4:{NFSU2_TR(0x717cc4);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B717cc8:{NFSU2_TR(0x717cc8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B717ccd:{NFSU2_TR(0x717ccd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B717cd5:{NFSU2_TR(0x717cd5);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B717cd9:{NFSU2_TR(0x717cd9);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B717cdd:{NFSU2_TR(0x717cdd);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B717ce1:{NFSU2_TR(0x717ce1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B717ce5:{NFSU2_TR(0x717ce5);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B717ce9:{NFSU2_TR(0x717ce9);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B717ced:{NFSU2_TR(0x717ced);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B717cf1:{NFSU2_TR(0x717cf1);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B717cf5:{NFSU2_TR(0x717cf5);
__builtin_memmove((R+5056),(R+4800),16);
}
B717cf9:{NFSU2_TR(0x717cf9);
w2(R+5056,shr<u16>(r2(R+5056),u64(u32(0x7ull))));
w2(R+5058,shr<u16>(r2(R+5058),u64(u32(0x7ull))));
w2(R+5060,shr<u16>(r2(R+5060),u64(u32(0x7ull))));
w2(R+5062,shr<u16>(r2(R+5062),u64(u32(0x7ull))));
w2(R+5064,shr<u16>(r2(R+5064),u64(u32(0x7ull))));
w2(R+5066,shr<u16>(r2(R+5066),u64(u32(0x7ull))));
w2(R+5068,shr<u16>(r2(R+5068),u64(u32(0x7ull))));
w2(R+5070,shr<u16>(r2(R+5070),u64(u32(0x7ull))));
}
B717cfe:{NFSU2_TR(0x717cfe);
__builtin_memmove((R+4736),(R+4608),16);
}
B717d02:{NFSU2_TR(0x717d02);
__builtin_memmove((R+4992),(R+4864),16);
}
B717d06:{NFSU2_TR(0x717d06);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B717d0a:{NFSU2_TR(0x717d0a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+5056))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+5058))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+5060))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+5062))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5064))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5066))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5068))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5070))));
}
B717d0e:{NFSU2_TR(0x717d0e);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x1ull)));}
}
B717d13:{NFSU2_TR(0x717d13);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x1ull)));}
}
B717d18:{NFSU2_TR(0x717d18);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x1ull)));}
}
B717d1d:{NFSU2_TR(0x717d1d);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B717d22:{NFSU2_TR(0x717d22);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4622))));
}
B717d26:{NFSU2_TR(0x717d26);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4864))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4866))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4868))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4870))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4872))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4874))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4876))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4878))));
}
B717d2a:{NFSU2_TR(0x717d2a);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B717d2e:{NFSU2_TR(0x717d2e);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5006))));
}
B717d32:{NFSU2_TR(0x717d32);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B717d37:{NFSU2_TR(0x717d37);
__builtin_memmove((R+4736),(R+4672),16);
}
B717d3b:{NFSU2_TR(0x717d3b);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717d40:{NFSU2_TR(0x717d40);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B717d45:{NFSU2_TR(0x717d45);
__builtin_memmove((R+4992),(R+4928),16);
}
B717d49:{NFSU2_TR(0x717d49);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+5056))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+5058))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+5060))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+5062))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+5064))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+5066))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+5068))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+5070))));
}
B717d4d:{NFSU2_TR(0x717d4d);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5070))));
}
B717d51:{NFSU2_TR(0x717d51);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0xfull)));}
}
B717d56:{NFSU2_TR(0x717d56);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0xfull)));}
}
B717d5b:{NFSU2_TR(0x717d5b);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B717d60:{NFSU2_TR(0x717d60);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0xfull)));}
}
B717d65:{NFSU2_TR(0x717d65);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B717d6a:{NFSU2_TR(0x717d6a);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4672))));
}
B717d6e:{NFSU2_TR(0x717d6e);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4992))));
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4928))));
}
B717d72:{NFSU2_TR(0x717d72);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B717d77:{NFSU2_TR(0x717d77);
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((R+4992)),rv<16>((R+4736))));
}
B717d7b:{NFSU2_TR(0x717d7b);
__builtin_memmove((R+4736),(R+5056),16);
}
B717d7f:{NFSU2_TR(0x717d7f);
{wv<16>((R+5056),uo::psubusw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B717d83:{NFSU2_TR(0x717d83);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B717d87:{NFSU2_TR(0x717d87);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4864))));
}
B717d8b:{NFSU2_TR(0x717d8b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B717d90:{NFSU2_TR(0x717d90);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0xfull)));}
}
B717d95:{NFSU2_TR(0x717d95);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>((R+4992))));
}
B717d99:{NFSU2_TR(0x717d99);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4928),(U+0),16);
}
B717d9d:{NFSU2_TR(0x717d9d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B717da2:{NFSU2_TR(0x717da2);
__builtin_memmove((R+4800),(R+4864),16);
}
B717da6:{NFSU2_TR(0x717da6);
__builtin_memmove((R+4992),(R+4928),16);
}
B717daa:{NFSU2_TR(0x717daa);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B717dae:{NFSU2_TR(0x717dae);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B717db2:{NFSU2_TR(0x717db2);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B717db6:{NFSU2_TR(0x717db6);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B717dbb:{NFSU2_TR(0x717dbb);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B717dc0:{NFSU2_TR(0x717dc0);
__builtin_memmove((R+4672),(R+4864),16);
}
B717dc4:{NFSU2_TR(0x717dc4);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B717dc8:{NFSU2_TR(0x717dc8);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4672))));
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B717dcc:{NFSU2_TR(0x717dcc);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4864))));
}
B717dd0:{NFSU2_TR(0x717dd0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B717dd8:{NFSU2_TR(0x717dd8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717de0:{NFSU2_TR(0x717de0);
__builtin_memmove((R+4800),(R+4864),16);
}
B717de4:{NFSU2_TR(0x717de4);
__builtin_memmove((R+4992),(R+4928),16);
}
B717de8:{NFSU2_TR(0x717de8);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B717dec:{NFSU2_TR(0x717dec);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B717df0:{NFSU2_TR(0x717df0);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B717df4:{NFSU2_TR(0x717df4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B717df9:{NFSU2_TR(0x717df9);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B717dfe:{NFSU2_TR(0x717dfe);
__builtin_memmove((R+4736),(R+4864),16);
}
B717e02:{NFSU2_TR(0x717e02);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B717e06:{NFSU2_TR(0x717e06);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B717e0a:{NFSU2_TR(0x717e0a);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4864))));
}
B717e0e:{NFSU2_TR(0x717e0e);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B717e12:{NFSU2_TR(0x717e12);
__builtin_memmove((R+4800),(R+4672),16);
}
B717e16:{NFSU2_TR(0x717e16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4800))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4802))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4804))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4806))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4808))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4810))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4812))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4814))));
}
B717e1a:{NFSU2_TR(0x717e1a);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4686))));
}
B717e1e:{NFSU2_TR(0x717e1e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B717e23:{NFSU2_TR(0x717e23);
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
B717e28:{NFSU2_TR(0x717e28);
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
B717e2d:{NFSU2_TR(0x717e2d);
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
B717e32:{NFSU2_TR(0x717e32);
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
B717e3a:{NFSU2_TR(0x717e3a);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B717e3e:{NFSU2_TR(0x717e3e);
__builtin_memmove((R+4864),(R+4800),16);
}
B717e42:{NFSU2_TR(0x717e42);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717e47:{NFSU2_TR(0x717e47);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717e4b:{NFSU2_TR(0x717e4b);
{wv<16>((R+4864),uo::psllw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B717e50:{NFSU2_TR(0x717e50);
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
B717e55:{NFSU2_TR(0x717e55);
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
B717e5a:{NFSU2_TR(0x717e5a);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717e5f:{NFSU2_TR(0x717e5f);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717e63:{NFSU2_TR(0x717e63);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717e67:{NFSU2_TR(0x717e67);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717e6b:{NFSU2_TR(0x717e6b);
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
B717e6f:{NFSU2_TR(0x717e6f);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4608))));}
}
B717e73:{NFSU2_TR(0x717e73);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717e78:{NFSU2_TR(0x717e78);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B717e7c:{NFSU2_TR(0x717e7c);
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
B717e81:{NFSU2_TR(0x717e81);
__builtin_memmove((R+4864),(R+4928),16);
}
B717e85:{NFSU2_TR(0x717e85);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717e89:{NFSU2_TR(0x717e89);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717e8d:{NFSU2_TR(0x717e8d);
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
B717e92:{NFSU2_TR(0x717e92);
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
B717e97:{NFSU2_TR(0x717e97);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717e9c:{NFSU2_TR(0x717e9c);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717ea0:{NFSU2_TR(0x717ea0);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717ea4:{NFSU2_TR(0x717ea4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717ea8:{NFSU2_TR(0x717ea8);
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
B717eac:{NFSU2_TR(0x717eac);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4672))));}
}
B717eb0:{NFSU2_TR(0x717eb0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717eb5:{NFSU2_TR(0x717eb5);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B717eb9:{NFSU2_TR(0x717eb9);
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
B717ebe:{NFSU2_TR(0x717ebe);
__builtin_memmove((R+4864),(R+4928),16);
}
B717ec2:{NFSU2_TR(0x717ec2);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717ec6:{NFSU2_TR(0x717ec6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717eca:{NFSU2_TR(0x717eca);
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
B717ecf:{NFSU2_TR(0x717ecf);
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
B717ed4:{NFSU2_TR(0x717ed4);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717ed9:{NFSU2_TR(0x717ed9);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717edd:{NFSU2_TR(0x717edd);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717ee1:{NFSU2_TR(0x717ee1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717ee5:{NFSU2_TR(0x717ee5);
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
B717ee9:{NFSU2_TR(0x717ee9);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4736))));}
}
B717eed:{NFSU2_TR(0x717eed);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717ef2:{NFSU2_TR(0x717ef2);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B717ef6:{NFSU2_TR(0x717ef6);
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
B717efb:{NFSU2_TR(0x717efb);
__builtin_memmove((R+4864),(R+4928),16);
}
B717eff:{NFSU2_TR(0x717eff);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717f03:{NFSU2_TR(0x717f03);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717f07:{NFSU2_TR(0x717f07);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4672))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4674))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4676))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4678))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4680))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4682))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4684))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4686))));
}
B717f0b:{NFSU2_TR(0x717f0b);
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
B717f10:{NFSU2_TR(0x717f10);
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
B717f15:{NFSU2_TR(0x717f15);
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
B717f1d:{NFSU2_TR(0x717f1d);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717f22:{NFSU2_TR(0x717f22);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717f26:{NFSU2_TR(0x717f26);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717f2a:{NFSU2_TR(0x717f2a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717f2e:{NFSU2_TR(0x717f2e);
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
B717f32:{NFSU2_TR(0x717f32);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4800))));}
}
B717f36:{NFSU2_TR(0x717f36);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717f3b:{NFSU2_TR(0x717f3b);
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
B717f40:{NFSU2_TR(0x717f40);
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
B717f48:{NFSU2_TR(0x717f48);
__builtin_memmove((R+4864),(R+4928),16);
}
B717f4c:{NFSU2_TR(0x717f4c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717f50:{NFSU2_TR(0x717f50);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717f54:{NFSU2_TR(0x717f54);
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
B717f59:{NFSU2_TR(0x717f59);
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
B717f5e:{NFSU2_TR(0x717f5e);
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
B717f66:{NFSU2_TR(0x717f66);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B717f6a:{NFSU2_TR(0x717f6a);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717f6f:{NFSU2_TR(0x717f6f);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717f73:{NFSU2_TR(0x717f73);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717f77:{NFSU2_TR(0x717f77);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717f7b:{NFSU2_TR(0x717f7b);
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
B717f7f:{NFSU2_TR(0x717f7f);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4864))));}
}
B717f83:{NFSU2_TR(0x717f83);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717f88:{NFSU2_TR(0x717f88);
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
B717f8d:{NFSU2_TR(0x717f8d);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B717f91:{NFSU2_TR(0x717f91);
__builtin_memmove((R+4864),(R+4928),16);
}
B717f95:{NFSU2_TR(0x717f95);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717f99:{NFSU2_TR(0x717f99);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717f9d:{NFSU2_TR(0x717f9d);
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
B717fa2:{NFSU2_TR(0x717fa2);
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
B717fa7:{NFSU2_TR(0x717fa7);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717fac:{NFSU2_TR(0x717fac);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717fb0:{NFSU2_TR(0x717fb0);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717fb4:{NFSU2_TR(0x717fb4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717fb8:{NFSU2_TR(0x717fb8);
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
B717fbc:{NFSU2_TR(0x717fbc);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4928))));}
}
B717fc0:{NFSU2_TR(0x717fc0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B717fc5:{NFSU2_TR(0x717fc5);
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
B717fca:{NFSU2_TR(0x717fca);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B717fce:{NFSU2_TR(0x717fce);
__builtin_memmove((R+4864),(R+4928),16);
}
B717fd2:{NFSU2_TR(0x717fd2);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B717fd6:{NFSU2_TR(0x717fd6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B717fda:{NFSU2_TR(0x717fda);
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
B717fdf:{NFSU2_TR(0x717fdf);
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
B717fe4:{NFSU2_TR(0x717fe4);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B717fe9:{NFSU2_TR(0x717fe9);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B717fed:{NFSU2_TR(0x717fed);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B717ff1:{NFSU2_TR(0x717ff1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B717ff5:{NFSU2_TR(0x717ff5);
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
B717ff9:{NFSU2_TR(0x717ff9);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4992))));}
}
B717ffd:{NFSU2_TR(0x717ffd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
TAIL_STATIC(0x718005u,718);
}
XIT:NFSU2_TR_EXIT(0x717,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
