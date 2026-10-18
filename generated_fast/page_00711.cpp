#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_710(u8* __restrict R,Cpu& c);
u32 body_712(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x711,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x711,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_711(u8* __restrict R,Cpu& c);
u32 page_711(Cpu& c){return body_711(c.regs.data(),c);}
__attribute__((noinline)) u32 body_711(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x711001:goto L711001;
case 0x711005:c.instructions+=345;goto B711005;
case 0x711008:c.instructions+=344;goto B711008;
case 0x71100c:c.instructions+=343;goto B71100c;
case 0x71100f:c.instructions+=342;goto B71100f;
case 0x711012:c.instructions+=341;goto B711012;
case 0x711015:c.instructions+=340;goto B711015;
case 0x711019:c.instructions+=339;goto B711019;
case 0x71101d:c.instructions+=338;goto B71101d;
case 0x711021:c.instructions+=337;goto B711021;
case 0x711024:c.instructions+=336;goto B711024;
case 0x711027:c.instructions+=335;goto B711027;
case 0x71102a:c.instructions+=334;goto B71102a;
case 0x71102e:c.instructions+=333;goto B71102e;
case 0x711032:c.instructions+=332;goto B711032;
case 0x711035:c.instructions+=331;goto B711035;
case 0x711039:c.instructions+=330;goto B711039;
case 0x71103c:c.instructions+=329;goto B71103c;
case 0x71103f:c.instructions+=328;goto B71103f;
case 0x711042:c.instructions+=327;goto B711042;
case 0x711045:c.instructions+=326;goto B711045;
case 0x711049:c.instructions+=325;goto B711049;
case 0x71104d:c.instructions+=324;goto B71104d;
case 0x711054:c.instructions+=323;goto B711054;
case 0x71105b:c.instructions+=322;goto B71105b;
case 0x71105f:c.instructions+=321;goto B71105f;
case 0x711062:c.instructions+=320;goto B711062;
case 0x711065:c.instructions+=319;goto B711065;
case 0x711068:c.instructions+=318;goto B711068;
case 0x71106c:c.instructions+=317;goto B71106c;
case 0x711070:c.instructions+=316;goto B711070;
case 0x711074:c.instructions+=315;goto B711074;
case 0x71107b:c.instructions+=314;goto B71107b;
case 0x71107e:c.instructions+=313;goto B71107e;
case 0x711081:c.instructions+=312;goto B711081;
case 0x711084:c.instructions+=311;goto B711084;
case 0x711088:c.instructions+=310;goto B711088;
case 0x71108c:c.instructions+=309;goto B71108c;
case 0x711093:c.instructions+=308;goto B711093;
case 0x711096:c.instructions+=307;goto B711096;
case 0x71109d:c.instructions+=306;goto B71109d;
case 0x7110a1:c.instructions+=305;goto B7110a1;
case 0x7110a4:c.instructions+=304;goto B7110a4;
case 0x7110a7:c.instructions+=303;goto B7110a7;
case 0x7110aa:c.instructions+=302;goto B7110aa;
case 0x7110ae:c.instructions+=301;goto B7110ae;
case 0x7110b2:c.instructions+=300;goto B7110b2;
case 0x7110b6:c.instructions+=299;goto B7110b6;
case 0x7110b9:c.instructions+=298;goto B7110b9;
case 0x7110bc:c.instructions+=297;goto B7110bc;
case 0x7110bf:c.instructions+=296;goto B7110bf;
case 0x7110c2:c.instructions+=295;goto B7110c2;
case 0x7110c6:c.instructions+=294;goto B7110c6;
case 0x7110ca:c.instructions+=293;goto B7110ca;
case 0x7110ce:c.instructions+=292;goto B7110ce;
case 0x7110d1:c.instructions+=291;goto B7110d1;
case 0x7110d4:c.instructions+=290;goto B7110d4;
case 0x7110d7:c.instructions+=289;goto B7110d7;
case 0x7110db:c.instructions+=288;goto B7110db;
case 0x7110df:c.instructions+=287;goto B7110df;
case 0x7110e3:c.instructions+=286;goto B7110e3;
case 0x7110e6:c.instructions+=285;goto B7110e6;
case 0x7110e9:c.instructions+=284;goto B7110e9;
case 0x7110ec:c.instructions+=283;goto B7110ec;
case 0x7110ef:c.instructions+=282;goto B7110ef;
case 0x7110f3:c.instructions+=281;goto B7110f3;
case 0x7110f7:c.instructions+=280;goto B7110f7;
case 0x7110fb:c.instructions+=279;goto B7110fb;
case 0x7110fe:c.instructions+=278;goto B7110fe;
case 0x711101:c.instructions+=277;goto B711101;
case 0x711104:c.instructions+=276;goto B711104;
case 0x711108:c.instructions+=275;goto B711108;
case 0x71110f:c.instructions+=274;goto B71110f;
case 0x711113:c.instructions+=273;goto B711113;
case 0x711116:c.instructions+=272;goto B711116;
case 0x711119:c.instructions+=271;goto B711119;
case 0x71111c:c.instructions+=270;goto B71111c;
case 0x71111f:c.instructions+=269;goto B71111f;
case 0x711123:c.instructions+=268;goto B711123;
case 0x711127:c.instructions+=267;goto B711127;
case 0x71112b:c.instructions+=266;goto B71112b;
case 0x71112e:c.instructions+=265;goto B71112e;
case 0x711131:c.instructions+=264;goto B711131;
case 0x711134:c.instructions+=263;goto B711134;
case 0x711138:c.instructions+=262;goto B711138;
case 0x71113b:c.instructions+=261;goto B71113b;
case 0x71113e:c.instructions+=260;goto B71113e;
case 0x711142:c.instructions+=259;goto B711142;
case 0x711146:c.instructions+=258;goto B711146;
case 0x71114a:c.instructions+=257;goto B71114a;
case 0x71114e:c.instructions+=256;goto B71114e;
case 0x711152:c.instructions+=255;goto B711152;
case 0x711155:c.instructions+=254;goto B711155;
case 0x711158:c.instructions+=253;goto B711158;
case 0x71115b:c.instructions+=252;goto B71115b;
case 0x711162:c.instructions+=251;goto B711162;
case 0x711165:c.instructions+=250;goto B711165;
case 0x711168:c.instructions+=249;goto B711168;
case 0x71116b:c.instructions+=248;goto B71116b;
case 0x71116f:c.instructions+=247;goto B71116f;
case 0x711172:c.instructions+=246;goto B711172;
case 0x711176:c.instructions+=245;goto B711176;
case 0x711179:c.instructions+=244;goto B711179;
case 0x71117c:c.instructions+=243;goto B71117c;
case 0x711183:c.instructions+=242;goto B711183;
case 0x711186:c.instructions+=241;goto B711186;
case 0x711189:c.instructions+=240;goto B711189;
case 0x71118c:c.instructions+=239;goto B71118c;
case 0x711190:c.instructions+=238;goto B711190;
case 0x711193:c.instructions+=237;goto B711193;
case 0x711196:c.instructions+=236;goto B711196;
case 0x711199:c.instructions+=235;goto B711199;
case 0x71119c:c.instructions+=234;goto B71119c;
case 0x7111a0:c.instructions+=233;goto B7111a0;
case 0x7111a4:c.instructions+=232;goto B7111a4;
case 0x7111a7:c.instructions+=231;goto B7111a7;
case 0x7111aa:c.instructions+=230;goto B7111aa;
case 0x7111ad:c.instructions+=229;goto B7111ad;
case 0x7111b0:c.instructions+=228;goto B7111b0;
case 0x7111b3:c.instructions+=227;goto B7111b3;
case 0x7111b6:c.instructions+=226;goto B7111b6;
case 0x7111bd:c.instructions+=225;goto B7111bd;
case 0x7111c0:c.instructions+=224;goto B7111c0;
case 0x7111c7:c.instructions+=223;goto B7111c7;
case 0x7111ca:c.instructions+=222;goto B7111ca;
case 0x7111ce:c.instructions+=221;goto B7111ce;
case 0x7111d1:c.instructions+=220;goto B7111d1;
case 0x7111d4:c.instructions+=219;goto B7111d4;
case 0x7111d7:c.instructions+=218;goto B7111d7;
case 0x7111da:c.instructions+=217;goto B7111da;
case 0x7111dd:c.instructions+=216;goto B7111dd;
case 0x7111e4:c.instructions+=215;goto B7111e4;
case 0x7111e8:c.instructions+=214;goto B7111e8;
case 0x7111eb:c.instructions+=213;goto B7111eb;
case 0x7111ee:c.instructions+=212;goto B7111ee;
case 0x7111f1:c.instructions+=211;goto B7111f1;
case 0x7111f4:c.instructions+=210;goto B7111f4;
case 0x7111fb:c.instructions+=209;goto B7111fb;
case 0x711202:c.instructions+=208;goto B711202;
case 0x711205:c.instructions+=207;goto B711205;
case 0x711208:c.instructions+=206;goto B711208;
case 0x71120b:c.instructions+=205;goto B71120b;
case 0x71120e:c.instructions+=204;goto B71120e;
case 0x711211:c.instructions+=203;goto B711211;
case 0x711218:c.instructions+=202;goto B711218;
case 0x71121c:c.instructions+=201;goto B71121c;
case 0x71121f:c.instructions+=200;goto B71121f;
case 0x711222:c.instructions+=199;goto B711222;
case 0x711225:c.instructions+=198;goto B711225;
case 0x711228:c.instructions+=197;goto B711228;
case 0x71122b:c.instructions+=196;goto B71122b;
case 0x71122e:c.instructions+=195;goto B71122e;
case 0x711231:c.instructions+=194;goto B711231;
case 0x711235:c.instructions+=193;goto B711235;
case 0x711239:c.instructions+=192;goto B711239;
case 0x71123d:c.instructions+=191;goto B71123d;
case 0x711241:c.instructions+=190;goto B711241;
case 0x711248:c.instructions+=189;goto B711248;
case 0x71124b:c.instructions+=188;goto B71124b;
case 0x71124e:c.instructions+=187;goto B71124e;
case 0x711252:c.instructions+=186;goto B711252;
case 0x711255:c.instructions+=185;goto B711255;
case 0x711259:c.instructions+=184;goto B711259;
case 0x71125d:c.instructions+=183;goto B71125d;
case 0x711261:c.instructions+=182;goto B711261;
case 0x711265:c.instructions+=181;goto B711265;
case 0x711268:c.instructions+=180;goto B711268;
case 0x71126b:c.instructions+=179;goto B71126b;
case 0x71126e:c.instructions+=178;goto B71126e;
case 0x711271:c.instructions+=177;goto B711271;
case 0x711275:c.instructions+=176;goto B711275;
case 0x711278:c.instructions+=175;goto B711278;
case 0x71127c:c.instructions+=174;goto B71127c;
case 0x71127f:c.instructions+=173;goto B71127f;
case 0x711282:c.instructions+=172;goto B711282;
case 0x711285:c.instructions+=171;goto B711285;
case 0x711289:c.instructions+=170;goto B711289;
case 0x71128d:c.instructions+=169;goto B71128d;
case 0x711291:c.instructions+=168;goto B711291;
case 0x711294:c.instructions+=167;goto B711294;
case 0x711297:c.instructions+=166;goto B711297;
case 0x71129a:c.instructions+=165;goto B71129a;
case 0x71129e:c.instructions+=164;goto B71129e;
case 0x7112a2:c.instructions+=163;goto B7112a2;
case 0x7112a5:c.instructions+=162;goto B7112a5;
case 0x7112a9:c.instructions+=161;goto B7112a9;
case 0x7112ac:c.instructions+=160;goto B7112ac;
case 0x7112af:c.instructions+=159;goto B7112af;
case 0x7112b2:c.instructions+=158;goto B7112b2;
case 0x7112b6:c.instructions+=157;goto B7112b6;
case 0x7112ba:c.instructions+=156;goto B7112ba;
case 0x7112be:c.instructions+=155;goto B7112be;
case 0x7112c1:c.instructions+=154;goto B7112c1;
case 0x7112c4:c.instructions+=153;goto B7112c4;
case 0x7112c7:c.instructions+=152;goto B7112c7;
case 0x7112cb:c.instructions+=151;goto B7112cb;
case 0x7112cf:c.instructions+=150;goto B7112cf;
case 0x7112d2:c.instructions+=149;goto B7112d2;
case 0x7112d6:c.instructions+=148;goto B7112d6;
case 0x7112d9:c.instructions+=147;goto B7112d9;
case 0x7112dc:c.instructions+=146;goto B7112dc;
case 0x7112df:c.instructions+=145;goto B7112df;
case 0x7112e2:c.instructions+=144;goto B7112e2;
case 0x7112e6:c.instructions+=143;goto B7112e6;
case 0x7112ea:c.instructions+=142;goto B7112ea;
case 0x7112f1:c.instructions+=141;goto B7112f1;
case 0x7112f8:c.instructions+=140;goto B7112f8;
case 0x7112fc:c.instructions+=139;goto B7112fc;
case 0x7112ff:c.instructions+=138;goto B7112ff;
case 0x711302:c.instructions+=137;goto B711302;
case 0x711305:c.instructions+=136;goto B711305;
case 0x711309:c.instructions+=135;goto B711309;
case 0x71130d:c.instructions+=134;goto B71130d;
case 0x711311:c.instructions+=133;goto B711311;
case 0x711318:c.instructions+=132;goto B711318;
case 0x71131b:c.instructions+=131;goto B71131b;
case 0x71131e:c.instructions+=130;goto B71131e;
case 0x711321:c.instructions+=129;goto B711321;
case 0x711325:c.instructions+=128;goto B711325;
case 0x711329:c.instructions+=127;goto B711329;
case 0x711330:c.instructions+=126;goto B711330;
case 0x711333:c.instructions+=125;goto B711333;
case 0x71133a:c.instructions+=124;goto B71133a;
case 0x71133e:c.instructions+=123;goto B71133e;
case 0x711341:c.instructions+=122;goto B711341;
case 0x711344:c.instructions+=121;goto B711344;
case 0x711347:c.instructions+=120;goto B711347;
case 0x71134b:c.instructions+=119;goto B71134b;
case 0x71134f:c.instructions+=118;goto B71134f;
case 0x711353:c.instructions+=117;goto B711353;
case 0x711356:c.instructions+=116;goto B711356;
case 0x711359:c.instructions+=115;goto B711359;
case 0x71135c:c.instructions+=114;goto B71135c;
case 0x71135f:c.instructions+=113;goto B71135f;
case 0x711363:c.instructions+=112;goto B711363;
case 0x711367:c.instructions+=111;goto B711367;
case 0x71136b:c.instructions+=110;goto B71136b;
case 0x71136e:c.instructions+=109;goto B71136e;
case 0x711371:c.instructions+=108;goto B711371;
case 0x711374:c.instructions+=107;goto B711374;
case 0x711378:c.instructions+=106;goto B711378;
case 0x71137c:c.instructions+=105;goto B71137c;
case 0x711380:c.instructions+=104;goto B711380;
case 0x711383:c.instructions+=103;goto B711383;
case 0x711386:c.instructions+=102;goto B711386;
case 0x711389:c.instructions+=101;goto B711389;
case 0x71138c:c.instructions+=100;goto B71138c;
case 0x711390:c.instructions+=99;goto B711390;
case 0x711394:c.instructions+=98;goto B711394;
case 0x711398:c.instructions+=97;goto B711398;
case 0x71139b:c.instructions+=96;goto B71139b;
case 0x71139e:c.instructions+=95;goto B71139e;
case 0x7113a1:c.instructions+=94;goto B7113a1;
case 0x7113a5:c.instructions+=93;goto B7113a5;
case 0x7113ac:c.instructions+=92;goto B7113ac;
case 0x7113b0:c.instructions+=91;goto B7113b0;
case 0x7113b3:c.instructions+=90;goto B7113b3;
case 0x7113b6:c.instructions+=89;goto B7113b6;
case 0x7113b9:c.instructions+=88;goto B7113b9;
case 0x7113bc:c.instructions+=87;goto B7113bc;
case 0x7113c0:c.instructions+=86;goto B7113c0;
case 0x7113c4:c.instructions+=85;goto B7113c4;
case 0x7113c8:c.instructions+=84;goto B7113c8;
case 0x7113cb:c.instructions+=83;goto B7113cb;
case 0x7113ce:c.instructions+=82;goto B7113ce;
case 0x7113d1:c.instructions+=81;goto B7113d1;
case 0x7113d5:c.instructions+=80;goto B7113d5;
case 0x7113d8:c.instructions+=79;goto B7113d8;
case 0x7113db:c.instructions+=78;goto B7113db;
case 0x7113de:c.instructions+=77;goto B7113de;
case 0x7113e2:c.instructions+=76;goto B7113e2;
case 0x7113e5:c.instructions+=75;goto B7113e5;
case 0x7113e9:c.instructions+=74;goto B7113e9;
case 0x7113ed:c.instructions+=73;goto B7113ed;
case 0x7113f1:c.instructions+=72;goto B7113f1;
case 0x7113f5:c.instructions+=71;goto B7113f5;
case 0x7113fa:c.instructions+=70;goto B7113fa;
case 0x7113fe:c.instructions+=69;goto B7113fe;
case 0x711402:c.instructions+=68;goto B711402;
case 0x711407:c.instructions+=67;goto B711407;
case 0x71140b:c.instructions+=66;goto B71140b;
case 0x71140f:c.instructions+=65;goto B71140f;
case 0x711413:c.instructions+=64;goto B711413;
case 0x711418:c.instructions+=63;goto B711418;
case 0x71141c:c.instructions+=62;goto B71141c;
case 0x711420:c.instructions+=61;goto B711420;
case 0x711424:c.instructions+=60;goto B711424;
case 0x711428:c.instructions+=59;goto B711428;
case 0x71142c:c.instructions+=58;goto B71142c;
case 0x711431:c.instructions+=57;goto B711431;
case 0x711435:c.instructions+=56;goto B711435;
case 0x711439:c.instructions+=55;goto B711439;
case 0x71143e:c.instructions+=54;goto B71143e;
case 0x711442:c.instructions+=53;goto B711442;
case 0x711446:c.instructions+=52;goto B711446;
case 0x71144a:c.instructions+=51;goto B71144a;
case 0x71144f:c.instructions+=50;goto B71144f;
case 0x711450:c.instructions+=49;goto B711450;
case 0x711451:c.instructions+=48;goto B711451;
case 0x711452:c.instructions+=47;goto B711452;
case 0x711453:c.instructions+=46;goto B711453;
case 0x711454:c.instructions+=45;goto B711454;
case 0x711455:c.instructions+=44;goto B711455;
case 0x711459:c.instructions+=43;goto B711459;
case 0x71145d:c.instructions+=42;goto B71145d;
case 0x71145f:c.instructions+=41;goto B71145f;
case 0x711463:c.instructions+=40;goto B711463;
case 0x711465:c.instructions+=39;goto B711465;
case 0x711469:c.instructions+=38;goto B711469;
case 0x71146b:c.instructions+=37;goto B71146b;
case 0x71146f:c.instructions+=36;goto B71146f;
case 0x711472:c.instructions+=35;goto B711472;
case 0x711474:c.instructions+=34;goto B711474;
case 0x711478:c.instructions+=33;goto B711478;
case 0x71147b:c.instructions+=32;goto B71147b;
case 0x71147e:c.instructions+=31;goto B71147e;
case 0x711480:c.instructions+=30;goto B711480;
case 0x711484:c.instructions+=29;goto B711484;
case 0x711486:c.instructions+=28;goto B711486;
case 0x71148a:c.instructions+=27;goto B71148a;
case 0x71148c:c.instructions+=26;goto B71148c;
case 0x711490:c.instructions+=25;goto B711490;
case 0x711493:c.instructions+=24;goto B711493;
case 0x711495:c.instructions+=23;goto B711495;
case 0x711497:c.instructions+=22;goto B711497;
case 0x71149a:c.instructions+=21;goto B71149a;
case 0x71149d:c.instructions+=20;goto B71149d;
case 0x71149f:c.instructions+=19;goto B71149f;
case 0x7114a3:c.instructions+=18;goto B7114a3;
case 0x7114a5:c.instructions+=17;goto B7114a5;
case 0x7114a9:c.instructions+=16;goto B7114a9;
case 0x7114ab:c.instructions+=15;goto B7114ab;
case 0x7114af:c.instructions+=14;goto B7114af;
case 0x7114b1:c.instructions+=13;goto B7114b1;
case 0x7114b5:c.instructions+=12;goto B7114b5;
case 0x7114b7:c.instructions+=11;goto B7114b7;
case 0x7114bb:c.instructions+=10;goto B7114bb;
case 0x7114bd:c.instructions+=9;goto B7114bd;
case 0x7114c1:c.instructions+=8;goto B7114c1;
case 0x7114c3:c.instructions+=7;goto B7114c3;
case 0x7114c7:c.instructions+=6;goto B7114c7;
case 0x7114c9:c.instructions+=5;goto B7114c9;
case 0x7114cb:c.instructions+=4;goto B7114cb;
case 0x7114ce:c.instructions+=3;goto B7114ce;
case 0x7114d1:c.instructions+=2;goto B7114d1;
case 0x7114d7:c.instructions+=1;goto B7114d7;
case 0x7114dd:goto L7114dd;
case 0x7114e0:c.instructions+=9;goto B7114e0;
case 0x7114e3:c.instructions+=8;goto B7114e3;
case 0x7114e6:c.instructions+=7;goto B7114e6;
case 0x7114e9:c.instructions+=6;goto B7114e9;
case 0x7114ec:c.instructions+=5;goto B7114ec;
case 0x7114ef:c.instructions+=4;goto B7114ef;
case 0x7114f2:c.instructions+=3;goto B7114f2;
case 0x7114f5:c.instructions+=2;goto B7114f5;
case 0x7114f8:c.instructions+=1;goto B7114f8;
case 0x7114fa:goto L7114fa;
case 0x7114ff:c.instructions+=7;goto B7114ff;
case 0x711507:c.instructions+=6;goto B711507;
case 0x71150b:c.instructions+=5;goto B71150b;
case 0x71150e:c.instructions+=4;goto B71150e;
case 0x711516:c.instructions+=3;goto B711516;
case 0x711517:c.instructions+=2;goto B711517;
case 0x71151a:c.instructions+=1;goto B71151a;
case 0x71151c:goto L71151c;
case 0x71151d:c.instructions+=757;goto B71151d;
case 0x71151e:c.instructions+=756;goto B71151e;
case 0x711521:c.instructions+=755;goto B711521;
case 0x711524:c.instructions+=754;goto B711524;
case 0x711525:c.instructions+=753;goto B711525;
case 0x711528:c.instructions+=752;goto B711528;
case 0x71152f:c.instructions+=751;goto B71152f;
case 0x711530:c.instructions+=750;goto B711530;
case 0x711533:c.instructions+=749;goto B711533;
case 0x71153a:c.instructions+=748;goto B71153a;
case 0x71153b:c.instructions+=747;goto B71153b;
case 0x71153e:c.instructions+=746;goto B71153e;
case 0x711541:c.instructions+=745;goto B711541;
case 0x711542:c.instructions+=744;goto B711542;
case 0x711546:c.instructions+=743;goto B711546;
case 0x71154d:c.instructions+=742;goto B71154d;
case 0x711550:c.instructions+=741;goto B711550;
case 0x711552:c.instructions+=740;goto B711552;
case 0x711555:c.instructions+=739;goto B711555;
case 0x71155b:c.instructions+=738;goto B71155b;
case 0x711561:c.instructions+=737;goto B711561;
case 0x711564:c.instructions+=736;goto B711564;
case 0x711566:c.instructions+=735;goto B711566;
case 0x711569:c.instructions+=734;goto B711569;
case 0x71156d:c.instructions+=733;goto B71156d;
case 0x711571:c.instructions+=732;goto B711571;
case 0x711574:c.instructions+=731;goto B711574;
case 0x711578:c.instructions+=730;goto B711578;
case 0x71157b:c.instructions+=729;goto B71157b;
case 0x71157e:c.instructions+=728;goto B71157e;
case 0x711581:c.instructions+=727;goto B711581;
case 0x711584:c.instructions+=726;goto B711584;
case 0x711587:c.instructions+=725;goto B711587;
case 0x71158a:c.instructions+=724;goto B71158a;
case 0x71158d:c.instructions+=723;goto B71158d;
case 0x711590:c.instructions+=722;goto B711590;
case 0x711593:c.instructions+=721;goto B711593;
case 0x711596:c.instructions+=720;goto B711596;
case 0x711599:c.instructions+=719;goto B711599;
case 0x71159c:c.instructions+=718;goto B71159c;
case 0x71159f:c.instructions+=717;goto B71159f;
case 0x7115a2:c.instructions+=716;goto B7115a2;
case 0x7115a5:c.instructions+=715;goto B7115a5;
case 0x7115a9:c.instructions+=714;goto B7115a9;
case 0x7115ac:c.instructions+=713;goto B7115ac;
case 0x7115af:c.instructions+=712;goto B7115af;
case 0x7115b3:c.instructions+=711;goto B7115b3;
case 0x7115b6:c.instructions+=710;goto B7115b6;
case 0x7115b9:c.instructions+=709;goto B7115b9;
case 0x7115bd:c.instructions+=708;goto B7115bd;
case 0x7115c0:c.instructions+=707;goto B7115c0;
case 0x7115c3:c.instructions+=706;goto B7115c3;
case 0x7115c7:c.instructions+=705;goto B7115c7;
case 0x7115ca:c.instructions+=704;goto B7115ca;
case 0x7115cd:c.instructions+=703;goto B7115cd;
case 0x7115d1:c.instructions+=702;goto B7115d1;
case 0x7115d4:c.instructions+=701;goto B7115d4;
case 0x7115d7:c.instructions+=700;goto B7115d7;
case 0x7115db:c.instructions+=699;goto B7115db;
case 0x7115de:c.instructions+=698;goto B7115de;
case 0x7115e2:c.instructions+=697;goto B7115e2;
case 0x7115e6:c.instructions+=696;goto B7115e6;
case 0x7115ea:c.instructions+=695;goto B7115ea;
case 0x7115ed:c.instructions+=694;goto B7115ed;
case 0x7115f4:c.instructions+=693;goto B7115f4;
case 0x7115f7:c.instructions+=692;goto B7115f7;
case 0x7115fb:c.instructions+=691;goto B7115fb;
case 0x7115fe:c.instructions+=690;goto B7115fe;
case 0x711601:c.instructions+=689;goto B711601;
case 0x711604:c.instructions+=688;goto B711604;
case 0x711607:c.instructions+=687;goto B711607;
case 0x71160a:c.instructions+=686;goto B71160a;
case 0x71160d:c.instructions+=685;goto B71160d;
case 0x711610:c.instructions+=684;goto B711610;
case 0x711613:c.instructions+=683;goto B711613;
case 0x711616:c.instructions+=682;goto B711616;
case 0x711619:c.instructions+=681;goto B711619;
case 0x71161c:c.instructions+=680;goto B71161c;
case 0x71161f:c.instructions+=679;goto B71161f;
case 0x711622:c.instructions+=678;goto B711622;
case 0x711626:c.instructions+=677;goto B711626;
case 0x711629:c.instructions+=676;goto B711629;
case 0x71162c:c.instructions+=675;goto B71162c;
case 0x711630:c.instructions+=674;goto B711630;
case 0x711633:c.instructions+=673;goto B711633;
case 0x711636:c.instructions+=672;goto B711636;
case 0x71163a:c.instructions+=671;goto B71163a;
case 0x71163d:c.instructions+=670;goto B71163d;
case 0x711640:c.instructions+=669;goto B711640;
case 0x711644:c.instructions+=668;goto B711644;
case 0x711647:c.instructions+=667;goto B711647;
case 0x71164a:c.instructions+=666;goto B71164a;
case 0x71164e:c.instructions+=665;goto B71164e;
case 0x711651:c.instructions+=664;goto B711651;
case 0x711654:c.instructions+=663;goto B711654;
case 0x711658:c.instructions+=662;goto B711658;
case 0x71165c:c.instructions+=661;goto B71165c;
case 0x711663:c.instructions+=660;goto B711663;
case 0x711666:c.instructions+=659;goto B711666;
case 0x71166a:c.instructions+=658;goto B71166a;
case 0x71166e:c.instructions+=657;goto B71166e;
case 0x711672:c.instructions+=656;goto B711672;
case 0x711676:c.instructions+=655;goto B711676;
case 0x711679:c.instructions+=654;goto B711679;
case 0x71167c:c.instructions+=653;goto B71167c;
case 0x71167f:c.instructions+=652;goto B71167f;
case 0x711682:c.instructions+=651;goto B711682;
case 0x711685:c.instructions+=650;goto B711685;
case 0x711688:c.instructions+=649;goto B711688;
case 0x71168b:c.instructions+=648;goto B71168b;
case 0x71168e:c.instructions+=647;goto B71168e;
case 0x711692:c.instructions+=646;goto B711692;
case 0x711696:c.instructions+=645;goto B711696;
case 0x711699:c.instructions+=644;goto B711699;
case 0x71169c:c.instructions+=643;goto B71169c;
case 0x71169f:c.instructions+=642;goto B71169f;
case 0x7116a2:c.instructions+=641;goto B7116a2;
case 0x7116a5:c.instructions+=640;goto B7116a5;
case 0x7116a8:c.instructions+=639;goto B7116a8;
case 0x7116ab:c.instructions+=638;goto B7116ab;
case 0x7116ae:c.instructions+=637;goto B7116ae;
case 0x7116b2:c.instructions+=636;goto B7116b2;
case 0x7116b6:c.instructions+=635;goto B7116b6;
case 0x7116b9:c.instructions+=634;goto B7116b9;
case 0x7116bc:c.instructions+=633;goto B7116bc;
case 0x7116bf:c.instructions+=632;goto B7116bf;
case 0x7116c2:c.instructions+=631;goto B7116c2;
case 0x7116c5:c.instructions+=630;goto B7116c5;
case 0x7116c8:c.instructions+=629;goto B7116c8;
case 0x7116cb:c.instructions+=628;goto B7116cb;
case 0x7116ce:c.instructions+=627;goto B7116ce;
case 0x7116d2:c.instructions+=626;goto B7116d2;
case 0x7116d9:c.instructions+=625;goto B7116d9;
case 0x7116dc:c.instructions+=624;goto B7116dc;
case 0x7116df:c.instructions+=623;goto B7116df;
case 0x7116e2:c.instructions+=622;goto B7116e2;
case 0x7116e5:c.instructions+=621;goto B7116e5;
case 0x7116e8:c.instructions+=620;goto B7116e8;
case 0x7116eb:c.instructions+=619;goto B7116eb;
case 0x7116ee:c.instructions+=618;goto B7116ee;
case 0x7116f1:c.instructions+=617;goto B7116f1;
case 0x7116f4:c.instructions+=616;goto B7116f4;
case 0x7116f8:c.instructions+=615;goto B7116f8;
case 0x7116fb:c.instructions+=614;goto B7116fb;
case 0x7116fe:c.instructions+=613;goto B7116fe;
case 0x711701:c.instructions+=612;goto B711701;
case 0x711704:c.instructions+=611;goto B711704;
case 0x711708:c.instructions+=610;goto B711708;
case 0x71170c:c.instructions+=609;goto B71170c;
case 0x711710:c.instructions+=608;goto B711710;
case 0x711714:c.instructions+=607;goto B711714;
case 0x711717:c.instructions+=606;goto B711717;
case 0x71171a:c.instructions+=605;goto B71171a;
case 0x71171d:c.instructions+=604;goto B71171d;
case 0x711720:c.instructions+=603;goto B711720;
case 0x711724:c.instructions+=602;goto B711724;
case 0x711728:c.instructions+=601;goto B711728;
case 0x71172f:c.instructions+=600;goto B71172f;
case 0x711732:c.instructions+=599;goto B711732;
case 0x711735:c.instructions+=598;goto B711735;
case 0x711738:c.instructions+=597;goto B711738;
case 0x71173b:c.instructions+=596;goto B71173b;
case 0x71173f:c.instructions+=595;goto B71173f;
case 0x711743:c.instructions+=594;goto B711743;
case 0x711747:c.instructions+=593;goto B711747;
case 0x71174b:c.instructions+=592;goto B71174b;
case 0x71174f:c.instructions+=591;goto B71174f;
case 0x711752:c.instructions+=590;goto B711752;
case 0x711755:c.instructions+=589;goto B711755;
case 0x711759:c.instructions+=588;goto B711759;
case 0x71175c:c.instructions+=587;goto B71175c;
case 0x71175f:c.instructions+=586;goto B71175f;
case 0x711762:c.instructions+=585;goto B711762;
case 0x711765:c.instructions+=584;goto B711765;
case 0x711768:c.instructions+=583;goto B711768;
case 0x71176f:c.instructions+=582;goto B71176f;
case 0x711773:c.instructions+=581;goto B711773;
case 0x711776:c.instructions+=580;goto B711776;
case 0x711779:c.instructions+=579;goto B711779;
case 0x71177d:c.instructions+=578;goto B71177d;
case 0x711781:c.instructions+=577;goto B711781;
case 0x711784:c.instructions+=576;goto B711784;
case 0x711787:c.instructions+=575;goto B711787;
case 0x71178a:c.instructions+=574;goto B71178a;
case 0x71178d:c.instructions+=573;goto B71178d;
case 0x711790:c.instructions+=572;goto B711790;
case 0x711793:c.instructions+=571;goto B711793;
case 0x711796:c.instructions+=570;goto B711796;
case 0x711799:c.instructions+=569;goto B711799;
case 0x71179d:c.instructions+=568;goto B71179d;
case 0x7117a1:c.instructions+=567;goto B7117a1;
case 0x7117a4:c.instructions+=566;goto B7117a4;
case 0x7117a7:c.instructions+=565;goto B7117a7;
case 0x7117aa:c.instructions+=564;goto B7117aa;
case 0x7117ad:c.instructions+=563;goto B7117ad;
case 0x7117b0:c.instructions+=562;goto B7117b0;
case 0x7117b3:c.instructions+=561;goto B7117b3;
case 0x7117b6:c.instructions+=560;goto B7117b6;
case 0x7117b9:c.instructions+=559;goto B7117b9;
case 0x7117bd:c.instructions+=558;goto B7117bd;
case 0x7117c1:c.instructions+=557;goto B7117c1;
case 0x7117c4:c.instructions+=556;goto B7117c4;
case 0x7117c7:c.instructions+=555;goto B7117c7;
case 0x7117ca:c.instructions+=554;goto B7117ca;
case 0x7117cd:c.instructions+=553;goto B7117cd;
case 0x7117d0:c.instructions+=552;goto B7117d0;
case 0x7117d3:c.instructions+=551;goto B7117d3;
case 0x7117d6:c.instructions+=550;goto B7117d6;
case 0x7117d9:c.instructions+=549;goto B7117d9;
case 0x7117dd:c.instructions+=548;goto B7117dd;
case 0x7117e4:c.instructions+=547;goto B7117e4;
case 0x7117e7:c.instructions+=546;goto B7117e7;
case 0x7117ea:c.instructions+=545;goto B7117ea;
case 0x7117ed:c.instructions+=544;goto B7117ed;
case 0x7117f0:c.instructions+=543;goto B7117f0;
case 0x7117f3:c.instructions+=542;goto B7117f3;
case 0x7117f6:c.instructions+=541;goto B7117f6;
case 0x7117f9:c.instructions+=540;goto B7117f9;
case 0x7117fc:c.instructions+=539;goto B7117fc;
case 0x711800:c.instructions+=538;goto B711800;
case 0x711803:c.instructions+=537;goto B711803;
case 0x711806:c.instructions+=536;goto B711806;
case 0x711809:c.instructions+=535;goto B711809;
case 0x71180c:c.instructions+=534;goto B71180c;
case 0x711810:c.instructions+=533;goto B711810;
case 0x711814:c.instructions+=532;goto B711814;
case 0x711818:c.instructions+=531;goto B711818;
case 0x71181c:c.instructions+=530;goto B71181c;
case 0x71181f:c.instructions+=529;goto B71181f;
case 0x711822:c.instructions+=528;goto B711822;
case 0x711825:c.instructions+=527;goto B711825;
case 0x711828:c.instructions+=526;goto B711828;
case 0x71182c:c.instructions+=525;goto B71182c;
case 0x711830:c.instructions+=524;goto B711830;
case 0x711837:c.instructions+=523;goto B711837;
case 0x71183a:c.instructions+=522;goto B71183a;
case 0x71183d:c.instructions+=521;goto B71183d;
case 0x711840:c.instructions+=520;goto B711840;
case 0x711843:c.instructions+=519;goto B711843;
case 0x711847:c.instructions+=518;goto B711847;
case 0x71184b:c.instructions+=517;goto B71184b;
case 0x71184f:c.instructions+=516;goto B71184f;
case 0x711853:c.instructions+=515;goto B711853;
case 0x711857:c.instructions+=514;goto B711857;
case 0x71185a:c.instructions+=513;goto B71185a;
case 0x71185d:c.instructions+=512;goto B71185d;
case 0x711861:c.instructions+=511;goto B711861;
case 0x711864:c.instructions+=510;goto B711864;
case 0x711867:c.instructions+=509;goto B711867;
case 0x71186a:c.instructions+=508;goto B71186a;
case 0x71186d:c.instructions+=507;goto B71186d;
case 0x711870:c.instructions+=506;goto B711870;
case 0x711877:c.instructions+=505;goto B711877;
case 0x71187b:c.instructions+=504;goto B71187b;
case 0x71187e:c.instructions+=503;goto B71187e;
case 0x711881:c.instructions+=502;goto B711881;
case 0x711885:c.instructions+=501;goto B711885;
case 0x711889:c.instructions+=500;goto B711889;
case 0x71188d:c.instructions+=499;goto B71188d;
case 0x711891:c.instructions+=498;goto B711891;
case 0x711895:c.instructions+=497;goto B711895;
case 0x711898:c.instructions+=496;goto B711898;
case 0x71189b:c.instructions+=495;goto B71189b;
case 0x71189e:c.instructions+=494;goto B71189e;
case 0x7118a1:c.instructions+=493;goto B7118a1;
case 0x7118a8:c.instructions+=492;goto B7118a8;
case 0x7118ab:c.instructions+=491;goto B7118ab;
case 0x7118ae:c.instructions+=490;goto B7118ae;
case 0x7118b2:c.instructions+=489;goto B7118b2;
case 0x7118b5:c.instructions+=488;goto B7118b5;
case 0x7118b9:c.instructions+=487;goto B7118b9;
case 0x7118bc:c.instructions+=486;goto B7118bc;
case 0x7118bf:c.instructions+=485;goto B7118bf;
case 0x7118c6:c.instructions+=484;goto B7118c6;
case 0x7118c9:c.instructions+=483;goto B7118c9;
case 0x7118cc:c.instructions+=482;goto B7118cc;
case 0x7118cf:c.instructions+=481;goto B7118cf;
case 0x7118d3:c.instructions+=480;goto B7118d3;
case 0x7118d6:c.instructions+=479;goto B7118d6;
case 0x7118d9:c.instructions+=478;goto B7118d9;
case 0x7118dc:c.instructions+=477;goto B7118dc;
case 0x7118df:c.instructions+=476;goto B7118df;
case 0x7118e3:c.instructions+=475;goto B7118e3;
case 0x7118e7:c.instructions+=474;goto B7118e7;
case 0x7118ea:c.instructions+=473;goto B7118ea;
case 0x7118ed:c.instructions+=472;goto B7118ed;
case 0x7118f0:c.instructions+=471;goto B7118f0;
case 0x7118f3:c.instructions+=470;goto B7118f3;
case 0x7118f6:c.instructions+=469;goto B7118f6;
case 0x7118f9:c.instructions+=468;goto B7118f9;
case 0x711900:c.instructions+=467;goto B711900;
case 0x711903:c.instructions+=466;goto B711903;
case 0x71190a:c.instructions+=465;goto B71190a;
case 0x71190d:c.instructions+=464;goto B71190d;
case 0x711911:c.instructions+=463;goto B711911;
case 0x711914:c.instructions+=462;goto B711914;
case 0x711917:c.instructions+=461;goto B711917;
case 0x71191a:c.instructions+=460;goto B71191a;
case 0x71191d:c.instructions+=459;goto B71191d;
case 0x711920:c.instructions+=458;goto B711920;
case 0x711927:c.instructions+=457;goto B711927;
case 0x71192b:c.instructions+=456;goto B71192b;
case 0x71192e:c.instructions+=455;goto B71192e;
case 0x711931:c.instructions+=454;goto B711931;
case 0x711934:c.instructions+=453;goto B711934;
case 0x711937:c.instructions+=452;goto B711937;
case 0x71193e:c.instructions+=451;goto B71193e;
case 0x711945:c.instructions+=450;goto B711945;
case 0x711948:c.instructions+=449;goto B711948;
case 0x71194b:c.instructions+=448;goto B71194b;
case 0x71194e:c.instructions+=447;goto B71194e;
case 0x711951:c.instructions+=446;goto B711951;
case 0x711954:c.instructions+=445;goto B711954;
case 0x71195b:c.instructions+=444;goto B71195b;
case 0x71195f:c.instructions+=443;goto B71195f;
case 0x711962:c.instructions+=442;goto B711962;
case 0x711965:c.instructions+=441;goto B711965;
case 0x711968:c.instructions+=440;goto B711968;
case 0x71196b:c.instructions+=439;goto B71196b;
case 0x71196e:c.instructions+=438;goto B71196e;
case 0x711971:c.instructions+=437;goto B711971;
case 0x711974:c.instructions+=436;goto B711974;
case 0x711978:c.instructions+=435;goto B711978;
case 0x71197c:c.instructions+=434;goto B71197c;
case 0x711980:c.instructions+=433;goto B711980;
case 0x711984:c.instructions+=432;goto B711984;
case 0x71198b:c.instructions+=431;goto B71198b;
case 0x71198e:c.instructions+=430;goto B71198e;
case 0x711991:c.instructions+=429;goto B711991;
case 0x711995:c.instructions+=428;goto B711995;
case 0x711998:c.instructions+=427;goto B711998;
case 0x71199c:c.instructions+=426;goto B71199c;
case 0x7119a0:c.instructions+=425;goto B7119a0;
case 0x7119a4:c.instructions+=424;goto B7119a4;
case 0x7119a8:c.instructions+=423;goto B7119a8;
case 0x7119ab:c.instructions+=422;goto B7119ab;
case 0x7119ae:c.instructions+=421;goto B7119ae;
case 0x7119b1:c.instructions+=420;goto B7119b1;
case 0x7119b4:c.instructions+=419;goto B7119b4;
case 0x7119b8:c.instructions+=418;goto B7119b8;
case 0x7119bb:c.instructions+=417;goto B7119bb;
case 0x7119bf:c.instructions+=416;goto B7119bf;
case 0x7119c2:c.instructions+=415;goto B7119c2;
case 0x7119c5:c.instructions+=414;goto B7119c5;
case 0x7119c8:c.instructions+=413;goto B7119c8;
case 0x7119cc:c.instructions+=412;goto B7119cc;
case 0x7119d0:c.instructions+=411;goto B7119d0;
case 0x7119d4:c.instructions+=410;goto B7119d4;
case 0x7119d7:c.instructions+=409;goto B7119d7;
case 0x7119da:c.instructions+=408;goto B7119da;
case 0x7119dd:c.instructions+=407;goto B7119dd;
case 0x7119e1:c.instructions+=406;goto B7119e1;
case 0x7119e5:c.instructions+=405;goto B7119e5;
case 0x7119e8:c.instructions+=404;goto B7119e8;
case 0x7119ec:c.instructions+=403;goto B7119ec;
case 0x7119ef:c.instructions+=402;goto B7119ef;
case 0x7119f2:c.instructions+=401;goto B7119f2;
case 0x7119f5:c.instructions+=400;goto B7119f5;
case 0x7119f9:c.instructions+=399;goto B7119f9;
case 0x7119fd:c.instructions+=398;goto B7119fd;
case 0x711a01:c.instructions+=397;goto B711a01;
case 0x711a04:c.instructions+=396;goto B711a04;
case 0x711a07:c.instructions+=395;goto B711a07;
case 0x711a0a:c.instructions+=394;goto B711a0a;
case 0x711a0e:c.instructions+=393;goto B711a0e;
case 0x711a12:c.instructions+=392;goto B711a12;
case 0x711a15:c.instructions+=391;goto B711a15;
case 0x711a19:c.instructions+=390;goto B711a19;
case 0x711a1c:c.instructions+=389;goto B711a1c;
case 0x711a1f:c.instructions+=388;goto B711a1f;
case 0x711a22:c.instructions+=387;goto B711a22;
case 0x711a25:c.instructions+=386;goto B711a25;
case 0x711a29:c.instructions+=385;goto B711a29;
case 0x711a2d:c.instructions+=384;goto B711a2d;
case 0x711a34:c.instructions+=383;goto B711a34;
case 0x711a3b:c.instructions+=382;goto B711a3b;
case 0x711a3f:c.instructions+=381;goto B711a3f;
case 0x711a42:c.instructions+=380;goto B711a42;
case 0x711a45:c.instructions+=379;goto B711a45;
case 0x711a48:c.instructions+=378;goto B711a48;
case 0x711a4c:c.instructions+=377;goto B711a4c;
case 0x711a50:c.instructions+=376;goto B711a50;
case 0x711a54:c.instructions+=375;goto B711a54;
case 0x711a5b:c.instructions+=374;goto B711a5b;
case 0x711a5e:c.instructions+=373;goto B711a5e;
case 0x711a61:c.instructions+=372;goto B711a61;
case 0x711a64:c.instructions+=371;goto B711a64;
case 0x711a68:c.instructions+=370;goto B711a68;
case 0x711a6c:c.instructions+=369;goto B711a6c;
case 0x711a73:c.instructions+=368;goto B711a73;
case 0x711a76:c.instructions+=367;goto B711a76;
case 0x711a7d:c.instructions+=366;goto B711a7d;
case 0x711a81:c.instructions+=365;goto B711a81;
case 0x711a84:c.instructions+=364;goto B711a84;
case 0x711a87:c.instructions+=363;goto B711a87;
case 0x711a8a:c.instructions+=362;goto B711a8a;
case 0x711a8e:c.instructions+=361;goto B711a8e;
case 0x711a92:c.instructions+=360;goto B711a92;
case 0x711a96:c.instructions+=359;goto B711a96;
case 0x711a99:c.instructions+=358;goto B711a99;
case 0x711a9c:c.instructions+=357;goto B711a9c;
case 0x711a9f:c.instructions+=356;goto B711a9f;
case 0x711aa2:c.instructions+=355;goto B711aa2;
case 0x711aa6:c.instructions+=354;goto B711aa6;
case 0x711aaa:c.instructions+=353;goto B711aaa;
case 0x711aae:c.instructions+=352;goto B711aae;
case 0x711ab1:c.instructions+=351;goto B711ab1;
case 0x711ab4:c.instructions+=350;goto B711ab4;
case 0x711ab7:c.instructions+=349;goto B711ab7;
case 0x711abb:c.instructions+=348;goto B711abb;
case 0x711abf:c.instructions+=347;goto B711abf;
case 0x711ac3:c.instructions+=346;goto B711ac3;
case 0x711ac6:c.instructions+=345;goto B711ac6;
case 0x711ac9:c.instructions+=344;goto B711ac9;
case 0x711acc:c.instructions+=343;goto B711acc;
case 0x711acf:c.instructions+=342;goto B711acf;
case 0x711ad3:c.instructions+=341;goto B711ad3;
case 0x711ad7:c.instructions+=340;goto B711ad7;
case 0x711adb:c.instructions+=339;goto B711adb;
case 0x711ade:c.instructions+=338;goto B711ade;
case 0x711ae1:c.instructions+=337;goto B711ae1;
case 0x711ae4:c.instructions+=336;goto B711ae4;
case 0x711ae8:c.instructions+=335;goto B711ae8;
case 0x711aef:c.instructions+=334;goto B711aef;
case 0x711af3:c.instructions+=333;goto B711af3;
case 0x711af6:c.instructions+=332;goto B711af6;
case 0x711af9:c.instructions+=331;goto B711af9;
case 0x711afc:c.instructions+=330;goto B711afc;
case 0x711aff:c.instructions+=329;goto B711aff;
case 0x711b03:c.instructions+=328;goto B711b03;
case 0x711b07:c.instructions+=327;goto B711b07;
case 0x711b0b:c.instructions+=326;goto B711b0b;
case 0x711b0e:c.instructions+=325;goto B711b0e;
case 0x711b11:c.instructions+=324;goto B711b11;
case 0x711b14:c.instructions+=323;goto B711b14;
case 0x711b18:c.instructions+=322;goto B711b18;
case 0x711b1b:c.instructions+=321;goto B711b1b;
case 0x711b1e:c.instructions+=320;goto B711b1e;
case 0x711b22:c.instructions+=319;goto B711b22;
case 0x711b26:c.instructions+=318;goto B711b26;
case 0x711b2a:c.instructions+=317;goto B711b2a;
case 0x711b2e:c.instructions+=316;goto B711b2e;
case 0x711b32:c.instructions+=315;goto B711b32;
case 0x711b35:c.instructions+=314;goto B711b35;
case 0x711b38:c.instructions+=313;goto B711b38;
case 0x711b3b:c.instructions+=312;goto B711b3b;
case 0x711b3e:c.instructions+=311;goto B711b3e;
case 0x711b45:c.instructions+=310;goto B711b45;
case 0x711b48:c.instructions+=309;goto B711b48;
case 0x711b4b:c.instructions+=308;goto B711b4b;
case 0x711b4f:c.instructions+=307;goto B711b4f;
case 0x711b52:c.instructions+=306;goto B711b52;
case 0x711b56:c.instructions+=305;goto B711b56;
case 0x711b59:c.instructions+=304;goto B711b59;
case 0x711b5c:c.instructions+=303;goto B711b5c;
case 0x711b63:c.instructions+=302;goto B711b63;
case 0x711b66:c.instructions+=301;goto B711b66;
case 0x711b69:c.instructions+=300;goto B711b69;
case 0x711b6c:c.instructions+=299;goto B711b6c;
case 0x711b70:c.instructions+=298;goto B711b70;
case 0x711b73:c.instructions+=297;goto B711b73;
case 0x711b76:c.instructions+=296;goto B711b76;
case 0x711b79:c.instructions+=295;goto B711b79;
case 0x711b7c:c.instructions+=294;goto B711b7c;
case 0x711b80:c.instructions+=293;goto B711b80;
case 0x711b84:c.instructions+=292;goto B711b84;
case 0x711b87:c.instructions+=291;goto B711b87;
case 0x711b8a:c.instructions+=290;goto B711b8a;
case 0x711b8d:c.instructions+=289;goto B711b8d;
case 0x711b90:c.instructions+=288;goto B711b90;
case 0x711b93:c.instructions+=287;goto B711b93;
case 0x711b96:c.instructions+=286;goto B711b96;
case 0x711b9d:c.instructions+=285;goto B711b9d;
case 0x711ba0:c.instructions+=284;goto B711ba0;
case 0x711ba7:c.instructions+=283;goto B711ba7;
case 0x711baa:c.instructions+=282;goto B711baa;
case 0x711bae:c.instructions+=281;goto B711bae;
case 0x711bb1:c.instructions+=280;goto B711bb1;
case 0x711bb4:c.instructions+=279;goto B711bb4;
case 0x711bb7:c.instructions+=278;goto B711bb7;
case 0x711bba:c.instructions+=277;goto B711bba;
case 0x711bbd:c.instructions+=276;goto B711bbd;
case 0x711bc4:c.instructions+=275;goto B711bc4;
case 0x711bc8:c.instructions+=274;goto B711bc8;
case 0x711bcb:c.instructions+=273;goto B711bcb;
case 0x711bce:c.instructions+=272;goto B711bce;
case 0x711bd1:c.instructions+=271;goto B711bd1;
case 0x711bd4:c.instructions+=270;goto B711bd4;
case 0x711bdb:c.instructions+=269;goto B711bdb;
case 0x711be2:c.instructions+=268;goto B711be2;
case 0x711be5:c.instructions+=267;goto B711be5;
case 0x711be8:c.instructions+=266;goto B711be8;
case 0x711beb:c.instructions+=265;goto B711beb;
case 0x711bee:c.instructions+=264;goto B711bee;
case 0x711bf1:c.instructions+=263;goto B711bf1;
case 0x711bf8:c.instructions+=262;goto B711bf8;
case 0x711bfc:c.instructions+=261;goto B711bfc;
case 0x711bff:c.instructions+=260;goto B711bff;
case 0x711c02:c.instructions+=259;goto B711c02;
case 0x711c05:c.instructions+=258;goto B711c05;
case 0x711c08:c.instructions+=257;goto B711c08;
case 0x711c0b:c.instructions+=256;goto B711c0b;
case 0x711c0e:c.instructions+=255;goto B711c0e;
case 0x711c11:c.instructions+=254;goto B711c11;
case 0x711c15:c.instructions+=253;goto B711c15;
case 0x711c19:c.instructions+=252;goto B711c19;
case 0x711c1d:c.instructions+=251;goto B711c1d;
case 0x711c21:c.instructions+=250;goto B711c21;
case 0x711c28:c.instructions+=249;goto B711c28;
case 0x711c2b:c.instructions+=248;goto B711c2b;
case 0x711c2e:c.instructions+=247;goto B711c2e;
case 0x711c32:c.instructions+=246;goto B711c32;
case 0x711c35:c.instructions+=245;goto B711c35;
case 0x711c39:c.instructions+=244;goto B711c39;
case 0x711c3d:c.instructions+=243;goto B711c3d;
case 0x711c41:c.instructions+=242;goto B711c41;
case 0x711c45:c.instructions+=241;goto B711c45;
case 0x711c48:c.instructions+=240;goto B711c48;
case 0x711c4b:c.instructions+=239;goto B711c4b;
case 0x711c4e:c.instructions+=238;goto B711c4e;
case 0x711c51:c.instructions+=237;goto B711c51;
case 0x711c55:c.instructions+=236;goto B711c55;
case 0x711c58:c.instructions+=235;goto B711c58;
case 0x711c5c:c.instructions+=234;goto B711c5c;
case 0x711c5f:c.instructions+=233;goto B711c5f;
case 0x711c62:c.instructions+=232;goto B711c62;
case 0x711c65:c.instructions+=231;goto B711c65;
case 0x711c69:c.instructions+=230;goto B711c69;
case 0x711c6d:c.instructions+=229;goto B711c6d;
case 0x711c71:c.instructions+=228;goto B711c71;
case 0x711c74:c.instructions+=227;goto B711c74;
case 0x711c77:c.instructions+=226;goto B711c77;
case 0x711c7a:c.instructions+=225;goto B711c7a;
case 0x711c7e:c.instructions+=224;goto B711c7e;
case 0x711c82:c.instructions+=223;goto B711c82;
case 0x711c85:c.instructions+=222;goto B711c85;
case 0x711c89:c.instructions+=221;goto B711c89;
case 0x711c8c:c.instructions+=220;goto B711c8c;
case 0x711c8f:c.instructions+=219;goto B711c8f;
case 0x711c92:c.instructions+=218;goto B711c92;
case 0x711c96:c.instructions+=217;goto B711c96;
case 0x711c9a:c.instructions+=216;goto B711c9a;
case 0x711c9e:c.instructions+=215;goto B711c9e;
case 0x711ca1:c.instructions+=214;goto B711ca1;
case 0x711ca4:c.instructions+=213;goto B711ca4;
case 0x711ca7:c.instructions+=212;goto B711ca7;
case 0x711cab:c.instructions+=211;goto B711cab;
case 0x711caf:c.instructions+=210;goto B711caf;
case 0x711cb2:c.instructions+=209;goto B711cb2;
case 0x711cb6:c.instructions+=208;goto B711cb6;
case 0x711cb9:c.instructions+=207;goto B711cb9;
case 0x711cbc:c.instructions+=206;goto B711cbc;
case 0x711cbf:c.instructions+=205;goto B711cbf;
case 0x711cc2:c.instructions+=204;goto B711cc2;
case 0x711cc6:c.instructions+=203;goto B711cc6;
case 0x711cca:c.instructions+=202;goto B711cca;
case 0x711cd1:c.instructions+=201;goto B711cd1;
case 0x711cd8:c.instructions+=200;goto B711cd8;
case 0x711cdc:c.instructions+=199;goto B711cdc;
case 0x711cdf:c.instructions+=198;goto B711cdf;
case 0x711ce2:c.instructions+=197;goto B711ce2;
case 0x711ce5:c.instructions+=196;goto B711ce5;
case 0x711ce9:c.instructions+=195;goto B711ce9;
case 0x711ced:c.instructions+=194;goto B711ced;
case 0x711cf1:c.instructions+=193;goto B711cf1;
case 0x711cf8:c.instructions+=192;goto B711cf8;
case 0x711cfb:c.instructions+=191;goto B711cfb;
case 0x711cfe:c.instructions+=190;goto B711cfe;
case 0x711d01:c.instructions+=189;goto B711d01;
case 0x711d05:c.instructions+=188;goto B711d05;
case 0x711d09:c.instructions+=187;goto B711d09;
case 0x711d10:c.instructions+=186;goto B711d10;
case 0x711d13:c.instructions+=185;goto B711d13;
case 0x711d1a:c.instructions+=184;goto B711d1a;
case 0x711d1e:c.instructions+=183;goto B711d1e;
case 0x711d21:c.instructions+=182;goto B711d21;
case 0x711d24:c.instructions+=181;goto B711d24;
case 0x711d27:c.instructions+=180;goto B711d27;
case 0x711d2b:c.instructions+=179;goto B711d2b;
case 0x711d2f:c.instructions+=178;goto B711d2f;
case 0x711d33:c.instructions+=177;goto B711d33;
case 0x711d36:c.instructions+=176;goto B711d36;
case 0x711d39:c.instructions+=175;goto B711d39;
case 0x711d3c:c.instructions+=174;goto B711d3c;
case 0x711d3f:c.instructions+=173;goto B711d3f;
case 0x711d43:c.instructions+=172;goto B711d43;
case 0x711d47:c.instructions+=171;goto B711d47;
case 0x711d4b:c.instructions+=170;goto B711d4b;
case 0x711d4e:c.instructions+=169;goto B711d4e;
case 0x711d51:c.instructions+=168;goto B711d51;
case 0x711d54:c.instructions+=167;goto B711d54;
case 0x711d58:c.instructions+=166;goto B711d58;
case 0x711d5c:c.instructions+=165;goto B711d5c;
case 0x711d60:c.instructions+=164;goto B711d60;
case 0x711d63:c.instructions+=163;goto B711d63;
case 0x711d66:c.instructions+=162;goto B711d66;
case 0x711d69:c.instructions+=161;goto B711d69;
case 0x711d6c:c.instructions+=160;goto B711d6c;
case 0x711d70:c.instructions+=159;goto B711d70;
case 0x711d74:c.instructions+=158;goto B711d74;
case 0x711d78:c.instructions+=157;goto B711d78;
case 0x711d7b:c.instructions+=156;goto B711d7b;
case 0x711d7e:c.instructions+=155;goto B711d7e;
case 0x711d81:c.instructions+=154;goto B711d81;
case 0x711d85:c.instructions+=153;goto B711d85;
case 0x711d8c:c.instructions+=152;goto B711d8c;
case 0x711d90:c.instructions+=151;goto B711d90;
case 0x711d93:c.instructions+=150;goto B711d93;
case 0x711d96:c.instructions+=149;goto B711d96;
case 0x711d99:c.instructions+=148;goto B711d99;
case 0x711d9c:c.instructions+=147;goto B711d9c;
case 0x711da0:c.instructions+=146;goto B711da0;
case 0x711da4:c.instructions+=145;goto B711da4;
case 0x711da8:c.instructions+=144;goto B711da8;
case 0x711dab:c.instructions+=143;goto B711dab;
case 0x711dae:c.instructions+=142;goto B711dae;
case 0x711db1:c.instructions+=141;goto B711db1;
case 0x711db5:c.instructions+=140;goto B711db5;
case 0x711db8:c.instructions+=139;goto B711db8;
case 0x711dbb:c.instructions+=138;goto B711dbb;
case 0x711dbe:c.instructions+=137;goto B711dbe;
case 0x711dc1:c.instructions+=136;goto B711dc1;
case 0x711dc4:c.instructions+=135;goto B711dc4;
case 0x711dc8:c.instructions+=134;goto B711dc8;
case 0x711dcb:c.instructions+=133;goto B711dcb;
case 0x711dce:c.instructions+=132;goto B711dce;
case 0x711dd1:c.instructions+=131;goto B711dd1;
case 0x711dd5:c.instructions+=130;goto B711dd5;
case 0x711dd9:c.instructions+=129;goto B711dd9;
case 0x711ddc:c.instructions+=128;goto B711ddc;
case 0x711ddf:c.instructions+=127;goto B711ddf;
case 0x711de2:c.instructions+=126;goto B711de2;
case 0x711de5:c.instructions+=125;goto B711de5;
case 0x711de8:c.instructions+=124;goto B711de8;
case 0x711deb:c.instructions+=123;goto B711deb;
case 0x711dee:c.instructions+=122;goto B711dee;
case 0x711df1:c.instructions+=121;goto B711df1;
case 0x711df5:c.instructions+=120;goto B711df5;
case 0x711df8:c.instructions+=119;goto B711df8;
case 0x711dfb:c.instructions+=118;goto B711dfb;
case 0x711dff:c.instructions+=117;goto B711dff;
case 0x711e03:c.instructions+=116;goto B711e03;
case 0x711e07:c.instructions+=115;goto B711e07;
case 0x711e0b:c.instructions+=114;goto B711e0b;
case 0x711e0e:c.instructions+=113;goto B711e0e;
case 0x711e11:c.instructions+=112;goto B711e11;
case 0x711e14:c.instructions+=111;goto B711e14;
case 0x711e17:c.instructions+=110;goto B711e17;
case 0x711e1a:c.instructions+=109;goto B711e1a;
case 0x711e1d:c.instructions+=108;goto B711e1d;
case 0x711e20:c.instructions+=107;goto B711e20;
case 0x711e23:c.instructions+=106;goto B711e23;
case 0x711e26:c.instructions+=105;goto B711e26;
case 0x711e29:c.instructions+=104;goto B711e29;
case 0x711e2c:c.instructions+=103;goto B711e2c;
case 0x711e2f:c.instructions+=102;goto B711e2f;
case 0x711e32:c.instructions+=101;goto B711e32;
case 0x711e35:c.instructions+=100;goto B711e35;
case 0x711e38:c.instructions+=99;goto B711e38;
case 0x711e3c:c.instructions+=98;goto B711e3c;
case 0x711e3f:c.instructions+=97;goto B711e3f;
case 0x711e43:c.instructions+=96;goto B711e43;
case 0x711e46:c.instructions+=95;goto B711e46;
case 0x711e49:c.instructions+=94;goto B711e49;
case 0x711e4d:c.instructions+=93;goto B711e4d;
case 0x711e50:c.instructions+=92;goto B711e50;
case 0x711e54:c.instructions+=91;goto B711e54;
case 0x711e57:c.instructions+=90;goto B711e57;
case 0x711e5a:c.instructions+=89;goto B711e5a;
case 0x711e5d:c.instructions+=88;goto B711e5d;
case 0x711e61:c.instructions+=87;goto B711e61;
case 0x711e64:c.instructions+=86;goto B711e64;
case 0x711e67:c.instructions+=85;goto B711e67;
case 0x711e6a:c.instructions+=84;goto B711e6a;
case 0x711e6e:c.instructions+=83;goto B711e6e;
case 0x711e72:c.instructions+=82;goto B711e72;
case 0x711e75:c.instructions+=81;goto B711e75;
case 0x711e78:c.instructions+=80;goto B711e78;
case 0x711e7b:c.instructions+=79;goto B711e7b;
case 0x711e7e:c.instructions+=78;goto B711e7e;
case 0x711e81:c.instructions+=77;goto B711e81;
case 0x711e84:c.instructions+=76;goto B711e84;
case 0x711e87:c.instructions+=75;goto B711e87;
case 0x711e8a:c.instructions+=74;goto B711e8a;
case 0x711e8e:c.instructions+=73;goto B711e8e;
case 0x711e91:c.instructions+=72;goto B711e91;
case 0x711e94:c.instructions+=71;goto B711e94;
case 0x711e98:c.instructions+=70;goto B711e98;
case 0x711e9c:c.instructions+=69;goto B711e9c;
case 0x711ea0:c.instructions+=68;goto B711ea0;
case 0x711ea4:c.instructions+=67;goto B711ea4;
case 0x711ea7:c.instructions+=66;goto B711ea7;
case 0x711eaa:c.instructions+=65;goto B711eaa;
case 0x711ead:c.instructions+=64;goto B711ead;
case 0x711eb0:c.instructions+=63;goto B711eb0;
case 0x711eb3:c.instructions+=62;goto B711eb3;
case 0x711eb6:c.instructions+=61;goto B711eb6;
case 0x711eb9:c.instructions+=60;goto B711eb9;
case 0x711ebc:c.instructions+=59;goto B711ebc;
case 0x711ebf:c.instructions+=58;goto B711ebf;
case 0x711ec2:c.instructions+=57;goto B711ec2;
case 0x711ec5:c.instructions+=56;goto B711ec5;
case 0x711ec8:c.instructions+=55;goto B711ec8;
case 0x711ecb:c.instructions+=54;goto B711ecb;
case 0x711ece:c.instructions+=53;goto B711ece;
case 0x711ed1:c.instructions+=52;goto B711ed1;
case 0x711ed5:c.instructions+=51;goto B711ed5;
case 0x711ed8:c.instructions+=50;goto B711ed8;
case 0x711edc:c.instructions+=49;goto B711edc;
case 0x711edf:c.instructions+=48;goto B711edf;
case 0x711ee2:c.instructions+=47;goto B711ee2;
case 0x711ee6:c.instructions+=46;goto B711ee6;
case 0x711ee9:c.instructions+=45;goto B711ee9;
case 0x711eed:c.instructions+=44;goto B711eed;
case 0x711eee:c.instructions+=43;goto B711eee;
case 0x711eef:c.instructions+=42;goto B711eef;
case 0x711ef0:c.instructions+=41;goto B711ef0;
case 0x711ef1:c.instructions+=40;goto B711ef1;
case 0x711ef2:c.instructions+=39;goto B711ef2;
case 0x711ef3:c.instructions+=38;goto B711ef3;
case 0x711ef7:c.instructions+=37;goto B711ef7;
case 0x711efb:c.instructions+=36;goto B711efb;
case 0x711efd:c.instructions+=35;goto B711efd;
case 0x711f01:c.instructions+=34;goto B711f01;
case 0x711f04:c.instructions+=33;goto B711f04;
case 0x711f07:c.instructions+=32;goto B711f07;
case 0x711f0d:c.instructions+=31;goto B711f0d;
case 0x711f0f:c.instructions+=30;goto B711f0f;
case 0x711f13:c.instructions+=29;goto B711f13;
case 0x711f15:c.instructions+=28;goto B711f15;
case 0x711f19:c.instructions+=27;goto B711f19;
case 0x711f1b:c.instructions+=26;goto B711f1b;
case 0x711f1f:c.instructions+=25;goto B711f1f;
case 0x711f21:c.instructions+=24;goto B711f21;
case 0x711f25:c.instructions+=23;goto B711f25;
case 0x711f29:c.instructions+=22;goto B711f29;
case 0x711f2b:c.instructions+=21;goto B711f2b;
case 0x711f2f:c.instructions+=20;goto B711f2f;
case 0x711f31:c.instructions+=19;goto B711f31;
case 0x711f33:c.instructions+=18;goto B711f33;
case 0x711f36:c.instructions+=17;goto B711f36;
case 0x711f3a:c.instructions+=16;goto B711f3a;
case 0x711f3c:c.instructions+=15;goto B711f3c;
case 0x711f40:c.instructions+=14;goto B711f40;
case 0x711f42:c.instructions+=13;goto B711f42;
case 0x711f46:c.instructions+=12;goto B711f46;
case 0x711f48:c.instructions+=11;goto B711f48;
case 0x711f4c:c.instructions+=10;goto B711f4c;
case 0x711f4e:c.instructions+=9;goto B711f4e;
case 0x711f52:c.instructions+=8;goto B711f52;
case 0x711f54:c.instructions+=7;goto B711f54;
case 0x711f58:c.instructions+=6;goto B711f58;
case 0x711f5a:c.instructions+=5;goto B711f5a;
case 0x711f5e:c.instructions+=4;goto B711f5e;
case 0x711f60:c.instructions+=3;goto B711f60;
case 0x711f64:c.instructions+=2;goto B711f64;
case 0x711f66:c.instructions+=1;goto B711f66;
case 0x711f68:goto L711f68;
case 0x711f6c:c.instructions+=10;goto B711f6c;
case 0x711f6e:c.instructions+=9;goto B711f6e;
case 0x711f6f:c.instructions+=8;goto B711f6f;
case 0x711f72:c.instructions+=7;goto B711f72;
case 0x711f75:c.instructions+=6;goto B711f75;
case 0x711f78:c.instructions+=5;goto B711f78;
case 0x711f7b:c.instructions+=4;goto B711f7b;
case 0x711f7e:c.instructions+=3;goto B711f7e;
case 0x711f81:c.instructions+=2;goto B711f81;
case 0x711f87:c.instructions+=1;goto B711f87;
case 0x711f8d:goto L711f8d;
case 0x711f8e:c.instructions+=6;goto B711f8e;
case 0x711f8f:c.instructions+=5;goto B711f8f;
case 0x711f91:c.instructions+=4;goto B711f91;
case 0x711f92:c.instructions+=3;goto B711f92;
case 0x711f94:c.instructions+=2;goto B711f94;
case 0x711f95:c.instructions+=1;goto B711f95;
case 0x711f96:goto L711f96;
case 0x711f97:c.instructions+=34;goto B711f97;
case 0x711f99:c.instructions+=33;goto B711f99;
case 0x711f9a:c.instructions+=32;goto B711f9a;
case 0x711f9b:c.instructions+=31;goto B711f9b;
case 0x711f9e:c.instructions+=30;goto B711f9e;
case 0x711fa1:c.instructions+=29;goto B711fa1;
case 0x711fa2:c.instructions+=28;goto B711fa2;
case 0x711fa5:c.instructions+=27;goto B711fa5;
case 0x711fa9:c.instructions+=26;goto B711fa9;
case 0x711fab:c.instructions+=25;goto B711fab;
case 0x711fb1:c.instructions+=24;goto B711fb1;
case 0x711fb2:c.instructions+=23;goto B711fb2;
case 0x711fb3:c.instructions+=22;goto B711fb3;
case 0x711fb6:c.instructions+=21;goto B711fb6;
case 0x711fb9:c.instructions+=20;goto B711fb9;
case 0x711fbc:c.instructions+=19;goto B711fbc;
case 0x711fbf:c.instructions+=18;goto B711fbf;
case 0x711fc2:c.instructions+=17;goto B711fc2;
case 0x711fc5:c.instructions+=16;goto B711fc5;
case 0x711fc8:c.instructions+=15;goto B711fc8;
case 0x711fcc:c.instructions+=14;goto B711fcc;
case 0x711fd0:c.instructions+=13;goto B711fd0;
case 0x711fd4:c.instructions+=12;goto B711fd4;
case 0x711fd8:c.instructions+=11;goto B711fd8;
case 0x711fde:c.instructions+=10;goto B711fde;
case 0x711fe1:c.instructions+=9;goto B711fe1;
case 0x711fe5:c.instructions+=8;goto B711fe5;
case 0x711fe9:c.instructions+=7;goto B711fe9;
case 0x711fed:c.instructions+=6;goto B711fed;
case 0x711ff1:c.instructions+=5;goto B711ff1;
case 0x711ff4:c.instructions+=4;goto B711ff4;
case 0x711ff6:c.instructions+=3;goto B711ff6;
case 0x711ff8:c.instructions+=2;goto B711ff8;
case 0x711ffb:c.instructions+=1;goto B711ffb;
default:missing_instruction(c.pc);}
B711001:L711001:{c.instructions+=346;NFSU2_TR(0x711001);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711005:{NFSU2_TR(0x711005);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711008:{NFSU2_TR(0x711008);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71100c:{NFSU2_TR(0x71100c);
__builtin_memmove((R+4416),(R+4432),8);
}
B71100f:{NFSU2_TR(0x71100f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711012:{NFSU2_TR(0x711012);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711015:{NFSU2_TR(0x711015);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711019:{NFSU2_TR(0x711019);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B71101d:{NFSU2_TR(0x71101d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711021:{NFSU2_TR(0x711021);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711024:{NFSU2_TR(0x711024);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711027:{NFSU2_TR(0x711027);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71102a:{NFSU2_TR(0x71102a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71102e:{NFSU2_TR(0x71102e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711032:{NFSU2_TR(0x711032);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711035:{NFSU2_TR(0x711035);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711039:{NFSU2_TR(0x711039);
__builtin_memmove((R+4416),(R+4432),8);
}
B71103c:{NFSU2_TR(0x71103c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71103f:{NFSU2_TR(0x71103f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711042:{NFSU2_TR(0x711042);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B711045:{NFSU2_TR(0x711045);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711049:{NFSU2_TR(0x711049);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71104d:{NFSU2_TR(0x71104d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711054:{NFSU2_TR(0x711054);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71105b:{NFSU2_TR(0x71105b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71105f:{NFSU2_TR(0x71105f);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711062:{NFSU2_TR(0x711062);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711065:{NFSU2_TR(0x711065);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711068:{NFSU2_TR(0x711068);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71106c:{NFSU2_TR(0x71106c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711070:{NFSU2_TR(0x711070);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711074:{NFSU2_TR(0x711074);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71107b:{NFSU2_TR(0x71107b);
__builtin_memmove((R+4416),(R+4432),8);
}
B71107e:{NFSU2_TR(0x71107e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711081:{NFSU2_TR(0x711081);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711084:{NFSU2_TR(0x711084);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711088:{NFSU2_TR(0x711088);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71108c:{NFSU2_TR(0x71108c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711093:{NFSU2_TR(0x711093);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B711096:{NFSU2_TR(0x711096);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71109d:{NFSU2_TR(0x71109d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7110a1:{NFSU2_TR(0x7110a1);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7110a4:{NFSU2_TR(0x7110a4);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7110a7:{NFSU2_TR(0x7110a7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7110aa:{NFSU2_TR(0x7110aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7110ae:{NFSU2_TR(0x7110ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7110b2:{NFSU2_TR(0x7110b2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7110b6:{NFSU2_TR(0x7110b6);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7110b9:{NFSU2_TR(0x7110b9);
__builtin_memmove((R+4416),(R+4432),8);
}
B7110bc:{NFSU2_TR(0x7110bc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7110bf:{NFSU2_TR(0x7110bf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7110c2:{NFSU2_TR(0x7110c2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7110c6:{NFSU2_TR(0x7110c6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7110ca:{NFSU2_TR(0x7110ca);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7110ce:{NFSU2_TR(0x7110ce);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7110d1:{NFSU2_TR(0x7110d1);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7110d4:{NFSU2_TR(0x7110d4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7110d7:{NFSU2_TR(0x7110d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7110db:{NFSU2_TR(0x7110db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7110df:{NFSU2_TR(0x7110df);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7110e3:{NFSU2_TR(0x7110e3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7110e6:{NFSU2_TR(0x7110e6);
__builtin_memmove((R+4416),(R+4432),8);
}
B7110e9:{NFSU2_TR(0x7110e9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7110ec:{NFSU2_TR(0x7110ec);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7110ef:{NFSU2_TR(0x7110ef);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7110f3:{NFSU2_TR(0x7110f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7110f7:{NFSU2_TR(0x7110f7);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7110fb:{NFSU2_TR(0x7110fb);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7110fe:{NFSU2_TR(0x7110fe);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711101:{NFSU2_TR(0x711101);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711104:{NFSU2_TR(0x711104);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711108:{NFSU2_TR(0x711108);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71110f:{NFSU2_TR(0x71110f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711113:{NFSU2_TR(0x711113);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711116:{NFSU2_TR(0x711116);
__builtin_memmove((R+4416),(R+4432),8);
}
B711119:{NFSU2_TR(0x711119);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71111c:{NFSU2_TR(0x71111c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B71111f:{NFSU2_TR(0x71111f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711123:{NFSU2_TR(0x711123);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711127:{NFSU2_TR(0x711127);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71112b:{NFSU2_TR(0x71112b);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71112e:{NFSU2_TR(0x71112e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711131:{NFSU2_TR(0x711131);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711134:{NFSU2_TR(0x711134);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711138:{NFSU2_TR(0x711138);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71113b:{NFSU2_TR(0x71113b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71113e:{NFSU2_TR(0x71113e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711142:{NFSU2_TR(0x711142);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711146:{NFSU2_TR(0x711146);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71114a:{NFSU2_TR(0x71114a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71114e:{NFSU2_TR(0x71114e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711152:{NFSU2_TR(0x711152);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B711155:{NFSU2_TR(0x711155);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B711158:{NFSU2_TR(0x711158);
__builtin_memmove((R+4416),(R+4432),8);
}
B71115b:{NFSU2_TR(0x71115b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B711162:{NFSU2_TR(0x711162);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711165:{NFSU2_TR(0x711165);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B711168:{NFSU2_TR(0x711168);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71116b:{NFSU2_TR(0x71116b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B71116f:{NFSU2_TR(0x71116f);
__builtin_memmove((R+4384),(R+4400),8);
}
B711172:{NFSU2_TR(0x711172);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B711176:{NFSU2_TR(0x711176);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B711179:{NFSU2_TR(0x711179);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B71117c:{NFSU2_TR(0x71117c);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B711183:{NFSU2_TR(0x711183);
__builtin_memmove((R+4416),(R+4368),8);
}
B711186:{NFSU2_TR(0x711186);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B711189:{NFSU2_TR(0x711189);
__builtin_memmove((R+4432),(R+4368),8);
}
B71118c:{NFSU2_TR(0x71118c);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B711190:{NFSU2_TR(0x711190);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B711193:{NFSU2_TR(0x711193);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B711196:{NFSU2_TR(0x711196);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B711199:{NFSU2_TR(0x711199);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71119c:{NFSU2_TR(0x71119c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7111a0:{NFSU2_TR(0x7111a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7111a4:{NFSU2_TR(0x7111a4);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B7111a7:{NFSU2_TR(0x7111a7);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B7111aa:{NFSU2_TR(0x7111aa);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7111ad:{NFSU2_TR(0x7111ad);
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
B7111b0:{NFSU2_TR(0x7111b0);
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
B7111b3:{NFSU2_TR(0x7111b3);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B7111b6:{NFSU2_TR(0x7111b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7111bd:{NFSU2_TR(0x7111bd);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B7111c0:{NFSU2_TR(0x7111c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7111c7:{NFSU2_TR(0x7111c7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B7111ca:{NFSU2_TR(0x7111ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7111ce:{NFSU2_TR(0x7111ce);
__builtin_memmove((R+4400),(R+4416),8);
}
B7111d1:{NFSU2_TR(0x7111d1);
__builtin_memmove((R+4448),(R+4432),8);
}
B7111d4:{NFSU2_TR(0x7111d4);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B7111d7:{NFSU2_TR(0x7111d7);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B7111da:{NFSU2_TR(0x7111da);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B7111dd:{NFSU2_TR(0x7111dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7111e4:{NFSU2_TR(0x7111e4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B7111e8:{NFSU2_TR(0x7111e8);
__builtin_memmove((R+4368),(R+4416),8);
}
B7111eb:{NFSU2_TR(0x7111eb);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B7111ee:{NFSU2_TR(0x7111ee);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B7111f1:{NFSU2_TR(0x7111f1);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B7111f4:{NFSU2_TR(0x7111f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7111fb:{NFSU2_TR(0x7111fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711202:{NFSU2_TR(0x711202);
__builtin_memmove((R+4400),(R+4416),8);
}
B711205:{NFSU2_TR(0x711205);
__builtin_memmove((R+4448),(R+4432),8);
}
B711208:{NFSU2_TR(0x711208);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71120b:{NFSU2_TR(0x71120b);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B71120e:{NFSU2_TR(0x71120e);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B711211:{NFSU2_TR(0x711211);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711218:{NFSU2_TR(0x711218);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71121c:{NFSU2_TR(0x71121c);
__builtin_memmove((R+4384),(R+4416),8);
}
B71121f:{NFSU2_TR(0x71121f);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B711222:{NFSU2_TR(0x711222);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B711225:{NFSU2_TR(0x711225);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B711228:{NFSU2_TR(0x711228);
__builtin_memmove((R+4400),(R+4368),8);
}
B71122b:{NFSU2_TR(0x71122b);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B71122e:{NFSU2_TR(0x71122e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B711231:{NFSU2_TR(0x711231);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711235:{NFSU2_TR(0x711235);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711239:{NFSU2_TR(0x711239);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B71123d:{NFSU2_TR(0x71123d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711241:{NFSU2_TR(0x711241);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B711248:{NFSU2_TR(0x711248);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71124b:{NFSU2_TR(0x71124b);
__builtin_memmove((R+4416),(R+4400),8);
}
B71124e:{NFSU2_TR(0x71124e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711252:{NFSU2_TR(0x711252);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711255:{NFSU2_TR(0x711255);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B711259:{NFSU2_TR(0x711259);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71125d:{NFSU2_TR(0x71125d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711261:{NFSU2_TR(0x711261);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711265:{NFSU2_TR(0x711265);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711268:{NFSU2_TR(0x711268);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B71126b:{NFSU2_TR(0x71126b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71126e:{NFSU2_TR(0x71126e);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B711271:{NFSU2_TR(0x711271);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711275:{NFSU2_TR(0x711275);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711278:{NFSU2_TR(0x711278);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71127c:{NFSU2_TR(0x71127c);
__builtin_memmove((R+4416),(R+4432),8);
}
B71127f:{NFSU2_TR(0x71127f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711282:{NFSU2_TR(0x711282);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711285:{NFSU2_TR(0x711285);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711289:{NFSU2_TR(0x711289);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B71128d:{NFSU2_TR(0x71128d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711291:{NFSU2_TR(0x711291);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711294:{NFSU2_TR(0x711294);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711297:{NFSU2_TR(0x711297);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71129a:{NFSU2_TR(0x71129a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71129e:{NFSU2_TR(0x71129e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7112a2:{NFSU2_TR(0x7112a2);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7112a5:{NFSU2_TR(0x7112a5);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7112a9:{NFSU2_TR(0x7112a9);
__builtin_memmove((R+4416),(R+4432),8);
}
B7112ac:{NFSU2_TR(0x7112ac);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7112af:{NFSU2_TR(0x7112af);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7112b2:{NFSU2_TR(0x7112b2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7112b6:{NFSU2_TR(0x7112b6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7112ba:{NFSU2_TR(0x7112ba);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7112be:{NFSU2_TR(0x7112be);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7112c1:{NFSU2_TR(0x7112c1);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7112c4:{NFSU2_TR(0x7112c4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7112c7:{NFSU2_TR(0x7112c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7112cb:{NFSU2_TR(0x7112cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7112cf:{NFSU2_TR(0x7112cf);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7112d2:{NFSU2_TR(0x7112d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7112d6:{NFSU2_TR(0x7112d6);
__builtin_memmove((R+4416),(R+4432),8);
}
B7112d9:{NFSU2_TR(0x7112d9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7112dc:{NFSU2_TR(0x7112dc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7112df:{NFSU2_TR(0x7112df);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B7112e2:{NFSU2_TR(0x7112e2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7112e6:{NFSU2_TR(0x7112e6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7112ea:{NFSU2_TR(0x7112ea);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7112f1:{NFSU2_TR(0x7112f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7112f8:{NFSU2_TR(0x7112f8);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7112fc:{NFSU2_TR(0x7112fc);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7112ff:{NFSU2_TR(0x7112ff);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711302:{NFSU2_TR(0x711302);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711305:{NFSU2_TR(0x711305);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711309:{NFSU2_TR(0x711309);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71130d:{NFSU2_TR(0x71130d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711311:{NFSU2_TR(0x711311);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711318:{NFSU2_TR(0x711318);
__builtin_memmove((R+4416),(R+4432),8);
}
B71131b:{NFSU2_TR(0x71131b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71131e:{NFSU2_TR(0x71131e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711321:{NFSU2_TR(0x711321);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711325:{NFSU2_TR(0x711325);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711329:{NFSU2_TR(0x711329);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711330:{NFSU2_TR(0x711330);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B711333:{NFSU2_TR(0x711333);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71133a:{NFSU2_TR(0x71133a);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71133e:{NFSU2_TR(0x71133e);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711341:{NFSU2_TR(0x711341);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711344:{NFSU2_TR(0x711344);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711347:{NFSU2_TR(0x711347);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71134b:{NFSU2_TR(0x71134b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71134f:{NFSU2_TR(0x71134f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711353:{NFSU2_TR(0x711353);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711356:{NFSU2_TR(0x711356);
__builtin_memmove((R+4416),(R+4432),8);
}
B711359:{NFSU2_TR(0x711359);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71135c:{NFSU2_TR(0x71135c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B71135f:{NFSU2_TR(0x71135f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711363:{NFSU2_TR(0x711363);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711367:{NFSU2_TR(0x711367);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71136b:{NFSU2_TR(0x71136b);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71136e:{NFSU2_TR(0x71136e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711371:{NFSU2_TR(0x711371);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711374:{NFSU2_TR(0x711374);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711378:{NFSU2_TR(0x711378);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71137c:{NFSU2_TR(0x71137c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711380:{NFSU2_TR(0x711380);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711383:{NFSU2_TR(0x711383);
__builtin_memmove((R+4416),(R+4432),8);
}
B711386:{NFSU2_TR(0x711386);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711389:{NFSU2_TR(0x711389);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B71138c:{NFSU2_TR(0x71138c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711390:{NFSU2_TR(0x711390);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711394:{NFSU2_TR(0x711394);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711398:{NFSU2_TR(0x711398);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71139b:{NFSU2_TR(0x71139b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B71139e:{NFSU2_TR(0x71139e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7113a1:{NFSU2_TR(0x7113a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7113a5:{NFSU2_TR(0x7113a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7113ac:{NFSU2_TR(0x7113ac);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7113b0:{NFSU2_TR(0x7113b0);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7113b3:{NFSU2_TR(0x7113b3);
__builtin_memmove((R+4416),(R+4432),8);
}
B7113b6:{NFSU2_TR(0x7113b6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7113b9:{NFSU2_TR(0x7113b9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7113bc:{NFSU2_TR(0x7113bc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7113c0:{NFSU2_TR(0x7113c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7113c4:{NFSU2_TR(0x7113c4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7113c8:{NFSU2_TR(0x7113c8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7113cb:{NFSU2_TR(0x7113cb);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7113ce:{NFSU2_TR(0x7113ce);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7113d1:{NFSU2_TR(0x7113d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7113d5:{NFSU2_TR(0x7113d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B7113d8:{NFSU2_TR(0x7113d8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B7113db:{NFSU2_TR(0x7113db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7113de:{NFSU2_TR(0x7113de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B7113e2:{NFSU2_TR(0x7113e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7113e5:{NFSU2_TR(0x7113e5);
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
B7113e9:{NFSU2_TR(0x7113e9);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B7113ed:{NFSU2_TR(0x7113ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7113f1:{NFSU2_TR(0x7113f1);
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
B7113f5:{NFSU2_TR(0x7113f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7113fa:{NFSU2_TR(0x7113fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7113fe:{NFSU2_TR(0x7113fe);
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
B711402:{NFSU2_TR(0x711402);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711407:{NFSU2_TR(0x711407);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71140b:{NFSU2_TR(0x71140b);
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
B71140f:{NFSU2_TR(0x71140f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B711413:{NFSU2_TR(0x711413);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711418:{NFSU2_TR(0x711418);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71141c:{NFSU2_TR(0x71141c);
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
B711420:{NFSU2_TR(0x711420);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B711424:{NFSU2_TR(0x711424);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711428:{NFSU2_TR(0x711428);
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
B71142c:{NFSU2_TR(0x71142c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711431:{NFSU2_TR(0x711431);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711435:{NFSU2_TR(0x711435);
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
B711439:{NFSU2_TR(0x711439);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71143e:{NFSU2_TR(0x71143e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711442:{NFSU2_TR(0x711442);
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
B711446:{NFSU2_TR(0x711446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B71144a:{NFSU2_TR(0x71144a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71144f:{NFSU2_TR(0x71144f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B711450:{NFSU2_TR(0x711450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B711451:{NFSU2_TR(0x711451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B711452:{NFSU2_TR(0x711452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B711453:{NFSU2_TR(0x711453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B711454:{NFSU2_TR(0x711454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B711455:{NFSU2_TR(0x711455);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711459:{NFSU2_TR(0x711459);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B71145d:{NFSU2_TR(0x71145d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71145f:{NFSU2_TR(0x71145f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711463:{NFSU2_TR(0x711463);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711465:{NFSU2_TR(0x711465);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711469:{NFSU2_TR(0x711469);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71146b:{NFSU2_TR(0x71146b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71146f:{NFSU2_TR(0x71146f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B711472:{NFSU2_TR(0x711472);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711474:{NFSU2_TR(0x711474);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711478:{NFSU2_TR(0x711478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71147b:{NFSU2_TR(0x71147b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71147e:{NFSU2_TR(0x71147e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711480:{NFSU2_TR(0x711480);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711484:{NFSU2_TR(0x711484);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711486:{NFSU2_TR(0x711486);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71148a:{NFSU2_TR(0x71148a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71148c:{NFSU2_TR(0x71148c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711490:{NFSU2_TR(0x711490);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B711493:{NFSU2_TR(0x711493);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B711495:{NFSU2_TR(0x711495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B711497:{NFSU2_TR(0x711497);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71149a:{NFSU2_TR(0x71149a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71149d:{NFSU2_TR(0x71149d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B71149f:{NFSU2_TR(0x71149f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7114a3:{NFSU2_TR(0x7114a3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114a5:{NFSU2_TR(0x7114a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114a9:{NFSU2_TR(0x7114a9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114ab:{NFSU2_TR(0x7114ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114af:{NFSU2_TR(0x7114af);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114b1:{NFSU2_TR(0x7114b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114b5:{NFSU2_TR(0x7114b5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114b7:{NFSU2_TR(0x7114b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114bb:{NFSU2_TR(0x7114bb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114bd:{NFSU2_TR(0x7114bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114c1:{NFSU2_TR(0x7114c1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114c3:{NFSU2_TR(0x7114c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7114c7:{NFSU2_TR(0x7114c7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7114c9:{NFSU2_TR(0x7114c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B7114cb:{NFSU2_TR(0x7114cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7114ce:{NFSU2_TR(0x7114ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7114d1:{NFSU2_TR(0x7114d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7114d7:{NFSU2_TR(0x7114d7);
if(r1(R+518)){{goto L711f68;}}
}
B7114dd:L7114dd:{c.instructions+=10;NFSU2_TR(0x7114dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7114e0:{NFSU2_TR(0x7114e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7114e3:{NFSU2_TR(0x7114e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7114e6:{NFSU2_TR(0x7114e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7114e9:{NFSU2_TR(0x7114e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7114ec:{NFSU2_TR(0x7114ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7114ef:{NFSU2_TR(0x7114ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7114f2:{NFSU2_TR(0x7114f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7114f5:{NFSU2_TR(0x7114f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7114f8:{NFSU2_TR(0x7114f8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7114fa:L7114fa:{c.instructions+=8;NFSU2_TR(0x7114fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B7114ff:{NFSU2_TR(0x7114ff);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B711507:{NFSU2_TR(0x711507);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B71150b:{NFSU2_TR(0x71150b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71150e:{NFSU2_TR(0x71150e);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff10ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B711516:{NFSU2_TR(0x711516);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B711517:{NFSU2_TR(0x711517);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B71151a:{NFSU2_TR(0x71151a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7114fau);}goto L7114fa;}}
}
B71151c:L71151c:{c.instructions+=758;NFSU2_TR(0x71151c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71151d:{NFSU2_TR(0x71151d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71151e:{NFSU2_TR(0x71151e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711521:{NFSU2_TR(0x711521);
w8(R+4352,u64(r4(R+0)));
}
B711524:{NFSU2_TR(0x711524);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711525:{NFSU2_TR(0x711525);
__builtin_memmove((R+4358),(R+4354),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4352),2);
}
B711528:{NFSU2_TR(0x711528);
__builtin_memmove((R+4368),gp(0x8175b0),8);
}
B71152f:{NFSU2_TR(0x71152f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711530:{NFSU2_TR(0x711530);
__builtin_memmove((R+4356),(R+4352),4);
}
B711533:{NFSU2_TR(0x711533);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71153a:{NFSU2_TR(0x71153a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71153b:{NFSU2_TR(0x71153b);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B71153e:{NFSU2_TR(0x71153e);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B711541:{NFSU2_TR(0x711541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711542:{NFSU2_TR(0x711542);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x5ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x5ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x5ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x5ull))));
}
B711546:{NFSU2_TR(0x711546);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71154d:{NFSU2_TR(0x71154d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711550:{NFSU2_TR(0x711550);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B711552:{NFSU2_TR(0x711552);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B711555:{NFSU2_TR(0x711555);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71155b:{NFSU2_TR(0x71155b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B711561:{NFSU2_TR(0x711561);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B711564:{NFSU2_TR(0x711564);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B711566:{NFSU2_TR(0x711566);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B711569:{NFSU2_TR(0x711569);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71156d:{NFSU2_TR(0x71156d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B711571:{NFSU2_TR(0x711571);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B711574:{NFSU2_TR(0x711574);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B711578:{NFSU2_TR(0x711578);
__builtin_memmove((R+4416),(R+4352),8);
}
B71157b:{NFSU2_TR(0x71157b);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71157e:{NFSU2_TR(0x71157e);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B711581:{NFSU2_TR(0x711581);
__builtin_memmove((R+4432),(R+4384),8);
}
B711584:{NFSU2_TR(0x711584);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B711587:{NFSU2_TR(0x711587);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B71158a:{NFSU2_TR(0x71158a);
__builtin_memmove((R+4368),(R+4352),8);
}
B71158d:{NFSU2_TR(0x71158d);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B711590:{NFSU2_TR(0x711590);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B711593:{NFSU2_TR(0x711593);
__builtin_memmove((R+4384),(R+4416),8);
}
B711596:{NFSU2_TR(0x711596);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B711599:{NFSU2_TR(0x711599);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B71159c:{NFSU2_TR(0x71159c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71159f:{NFSU2_TR(0x71159f);
__builtin_memmove((R+4432),(R+4352),8);
}
B7115a2:{NFSU2_TR(0x7115a2);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7115a5:{NFSU2_TR(0x7115a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115a9:{NFSU2_TR(0x7115a9);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7115ac:{NFSU2_TR(0x7115ac);
__builtin_memmove((R+4352),(R+4368),8);
}
B7115af:{NFSU2_TR(0x7115af);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115b3:{NFSU2_TR(0x7115b3);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7115b6:{NFSU2_TR(0x7115b6);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B7115b9:{NFSU2_TR(0x7115b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115bd:{NFSU2_TR(0x7115bd);
__builtin_memmove((R+4400),(R+4384),8);
}
B7115c0:{NFSU2_TR(0x7115c0);
__builtin_memmove((R+4432),(R+4416),8);
}
B7115c3:{NFSU2_TR(0x7115c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115c7:{NFSU2_TR(0x7115c7);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7115ca:{NFSU2_TR(0x7115ca);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7115cd:{NFSU2_TR(0x7115cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115d1:{NFSU2_TR(0x7115d1);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B7115d4:{NFSU2_TR(0x7115d4);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7115d7:{NFSU2_TR(0x7115d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115db:{NFSU2_TR(0x7115db);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7115de:{NFSU2_TR(0x7115de);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B7115e2:{NFSU2_TR(0x7115e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115e6:{NFSU2_TR(0x7115e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7115ea:{NFSU2_TR(0x7115ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7115ed:{NFSU2_TR(0x7115ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7115f4:{NFSU2_TR(0x7115f4);
__builtin_memmove((R+4416),(R+4352),8);
}
B7115f7:{NFSU2_TR(0x7115f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B7115fb:{NFSU2_TR(0x7115fb);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B7115fe:{NFSU2_TR(0x7115fe);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B711601:{NFSU2_TR(0x711601);
__builtin_memmove((R+4432),(R+4384),8);
}
B711604:{NFSU2_TR(0x711604);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B711607:{NFSU2_TR(0x711607);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B71160a:{NFSU2_TR(0x71160a);
__builtin_memmove((R+4368),(R+4352),8);
}
B71160d:{NFSU2_TR(0x71160d);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B711610:{NFSU2_TR(0x711610);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B711613:{NFSU2_TR(0x711613);
__builtin_memmove((R+4384),(R+4416),8);
}
B711616:{NFSU2_TR(0x711616);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B711619:{NFSU2_TR(0x711619);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B71161c:{NFSU2_TR(0x71161c);
__builtin_memmove((R+4432),(R+4352),8);
}
B71161f:{NFSU2_TR(0x71161f);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B711622:{NFSU2_TR(0x711622);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711626:{NFSU2_TR(0x711626);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B711629:{NFSU2_TR(0x711629);
__builtin_memmove((R+4352),(R+4368),8);
}
B71162c:{NFSU2_TR(0x71162c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711630:{NFSU2_TR(0x711630);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B711633:{NFSU2_TR(0x711633);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B711636:{NFSU2_TR(0x711636);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71163a:{NFSU2_TR(0x71163a);
__builtin_memmove((R+4400),(R+4384),8);
}
B71163d:{NFSU2_TR(0x71163d);
__builtin_memmove((R+4432),(R+4416),8);
}
B711640:{NFSU2_TR(0x711640);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711644:{NFSU2_TR(0x711644);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B711647:{NFSU2_TR(0x711647);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71164a:{NFSU2_TR(0x71164a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71164e:{NFSU2_TR(0x71164e);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B711651:{NFSU2_TR(0x711651);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B711654:{NFSU2_TR(0x711654);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711658:{NFSU2_TR(0x711658);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71165c:{NFSU2_TR(0x71165c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711663:{NFSU2_TR(0x711663);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4400))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4402))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4404))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4406))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B711666:{NFSU2_TR(0x711666);
{wv<8>((R+4400),uo::psllw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71166a:{NFSU2_TR(0x71166a);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B71166e:{NFSU2_TR(0x71166e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711672:{NFSU2_TR(0x711672);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711676:{NFSU2_TR(0x711676);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B711679:{NFSU2_TR(0x711679);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B71167c:{NFSU2_TR(0x71167c);
__builtin_memmove((R+4352),(R+4384),8);
}
B71167f:{NFSU2_TR(0x71167f);
__builtin_memmove((R+4416),(R+4448),8);
}
B711682:{NFSU2_TR(0x711682);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B711685:{NFSU2_TR(0x711685);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B711688:{NFSU2_TR(0x711688);
__builtin_memmove((R+4368),(R+4384),8);
}
B71168b:{NFSU2_TR(0x71168b);
__builtin_memmove((R+4432),(R+4448),8);
}
B71168e:{NFSU2_TR(0x71168e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711692:{NFSU2_TR(0x711692);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711696:{NFSU2_TR(0x711696);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B711699:{NFSU2_TR(0x711699);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B71169c:{NFSU2_TR(0x71169c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B71169f:{NFSU2_TR(0x71169f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7116a2:{NFSU2_TR(0x7116a2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7116a5:{NFSU2_TR(0x7116a5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7116a8:{NFSU2_TR(0x7116a8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7116ab:{NFSU2_TR(0x7116ab);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7116ae:{NFSU2_TR(0x7116ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7116b2:{NFSU2_TR(0x7116b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7116b6:{NFSU2_TR(0x7116b6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7116b9:{NFSU2_TR(0x7116b9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7116bc:{NFSU2_TR(0x7116bc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7116bf:{NFSU2_TR(0x7116bf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7116c2:{NFSU2_TR(0x7116c2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7116c5:{NFSU2_TR(0x7116c5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7116c8:{NFSU2_TR(0x7116c8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7116cb:{NFSU2_TR(0x7116cb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7116ce:{NFSU2_TR(0x7116ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7116d2:{NFSU2_TR(0x7116d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7116d9:{NFSU2_TR(0x7116d9);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7116dc:{NFSU2_TR(0x7116dc);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7116df:{NFSU2_TR(0x7116df);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7116e2:{NFSU2_TR(0x7116e2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7116e5:{NFSU2_TR(0x7116e5);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7116e8:{NFSU2_TR(0x7116e8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7116eb:{NFSU2_TR(0x7116eb);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7116ee:{NFSU2_TR(0x7116ee);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7116f1:{NFSU2_TR(0x7116f1);
__builtin_memmove((R+4464),(R+4400),8);
}
B7116f4:{NFSU2_TR(0x7116f4);
w2(R+4464,shr<u16>(r2(R+4464),u64(u32(0x7ull))));
w2(R+4466,shr<u16>(r2(R+4466),u64(u32(0x7ull))));
w2(R+4468,shr<u16>(r2(R+4468),u64(u32(0x7ull))));
w2(R+4470,shr<u16>(r2(R+4470),u64(u32(0x7ull))));
}
B7116f8:{NFSU2_TR(0x7116f8);
__builtin_memmove((R+4384),(R+4352),8);
}
B7116fb:{NFSU2_TR(0x7116fb);
__builtin_memmove((R+4448),(R+4416),8);
}
B7116fe:{NFSU2_TR(0x7116fe);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B711701:{NFSU2_TR(0x711701);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4470))));
}
B711704:{NFSU2_TR(0x711704);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B711708:{NFSU2_TR(0x711708);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B71170c:{NFSU2_TR(0x71170c);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B711710:{NFSU2_TR(0x711710);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B711714:{NFSU2_TR(0x711714);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B711717:{NFSU2_TR(0x711717);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B71171a:{NFSU2_TR(0x71171a);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B71171d:{NFSU2_TR(0x71171d);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B711720:{NFSU2_TR(0x711720);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711724:{NFSU2_TR(0x711724);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711728:{NFSU2_TR(0x711728);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71172f:{NFSU2_TR(0x71172f);
__builtin_memmove((R+4384),(R+4368),8);
}
B711732:{NFSU2_TR(0x711732);
__builtin_memmove((R+4448),(R+4432),8);
}
B711735:{NFSU2_TR(0x711735);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4470))));
}
B711738:{NFSU2_TR(0x711738);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B71173b:{NFSU2_TR(0x71173b);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B71173f:{NFSU2_TR(0x71173f);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B711743:{NFSU2_TR(0x711743);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B711747:{NFSU2_TR(0x711747);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71174b:{NFSU2_TR(0x71174b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71174f:{NFSU2_TR(0x71174f);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B711752:{NFSU2_TR(0x711752);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B711755:{NFSU2_TR(0x711755);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711759:{NFSU2_TR(0x711759);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B71175c:{NFSU2_TR(0x71175c);
__builtin_memmove((R+4384),(R+4464),8);
}
B71175f:{NFSU2_TR(0x71175f);
{wv<8>((R+4464),uo::psubusw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B711762:{NFSU2_TR(0x711762);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B711765:{NFSU2_TR(0x711765);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B711768:{NFSU2_TR(0x711768);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(U+18))));
}
B71176f:{NFSU2_TR(0x71176f);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0xfull)));}
}
B711773:{NFSU2_TR(0x711773);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B711776:{NFSU2_TR(0x711776);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B711779:{NFSU2_TR(0x711779);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71177d:{NFSU2_TR(0x71177d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711781:{NFSU2_TR(0x711781);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B711784:{NFSU2_TR(0x711784);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B711787:{NFSU2_TR(0x711787);
__builtin_memmove((R+4352),(R+4384),8);
}
B71178a:{NFSU2_TR(0x71178a);
__builtin_memmove((R+4416),(R+4448),8);
}
B71178d:{NFSU2_TR(0x71178d);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B711790:{NFSU2_TR(0x711790);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B711793:{NFSU2_TR(0x711793);
__builtin_memmove((R+4368),(R+4384),8);
}
B711796:{NFSU2_TR(0x711796);
__builtin_memmove((R+4432),(R+4448),8);
}
B711799:{NFSU2_TR(0x711799);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71179d:{NFSU2_TR(0x71179d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7117a1:{NFSU2_TR(0x7117a1);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7117a4:{NFSU2_TR(0x7117a4);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7117a7:{NFSU2_TR(0x7117a7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7117aa:{NFSU2_TR(0x7117aa);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7117ad:{NFSU2_TR(0x7117ad);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7117b0:{NFSU2_TR(0x7117b0);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7117b3:{NFSU2_TR(0x7117b3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7117b6:{NFSU2_TR(0x7117b6);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7117b9:{NFSU2_TR(0x7117b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7117bd:{NFSU2_TR(0x7117bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7117c1:{NFSU2_TR(0x7117c1);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7117c4:{NFSU2_TR(0x7117c4);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7117c7:{NFSU2_TR(0x7117c7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7117ca:{NFSU2_TR(0x7117ca);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7117cd:{NFSU2_TR(0x7117cd);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7117d0:{NFSU2_TR(0x7117d0);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7117d3:{NFSU2_TR(0x7117d3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7117d6:{NFSU2_TR(0x7117d6);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7117d9:{NFSU2_TR(0x7117d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7117dd:{NFSU2_TR(0x7117dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7117e4:{NFSU2_TR(0x7117e4);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B7117e7:{NFSU2_TR(0x7117e7);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B7117ea:{NFSU2_TR(0x7117ea);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B7117ed:{NFSU2_TR(0x7117ed);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B7117f0:{NFSU2_TR(0x7117f0);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B7117f3:{NFSU2_TR(0x7117f3);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B7117f6:{NFSU2_TR(0x7117f6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B7117f9:{NFSU2_TR(0x7117f9);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B7117fc:{NFSU2_TR(0x7117fc);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x7ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x7ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x7ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x7ull))));
}
B711800:{NFSU2_TR(0x711800);
__builtin_memmove((R+4384),(R+4352),8);
}
B711803:{NFSU2_TR(0x711803);
__builtin_memmove((R+4448),(R+4416),8);
}
B711806:{NFSU2_TR(0x711806);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B711809:{NFSU2_TR(0x711809);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71180c:{NFSU2_TR(0x71180c);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B711810:{NFSU2_TR(0x711810);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B711814:{NFSU2_TR(0x711814);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B711818:{NFSU2_TR(0x711818);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71181c:{NFSU2_TR(0x71181c);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B71181f:{NFSU2_TR(0x71181f);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B711822:{NFSU2_TR(0x711822);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B711825:{NFSU2_TR(0x711825);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B711828:{NFSU2_TR(0x711828);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71182c:{NFSU2_TR(0x71182c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711830:{NFSU2_TR(0x711830);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711837:{NFSU2_TR(0x711837);
__builtin_memmove((R+4384),(R+4368),8);
}
B71183a:{NFSU2_TR(0x71183a);
__builtin_memmove((R+4448),(R+4432),8);
}
B71183d:{NFSU2_TR(0x71183d);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4406))));
}
B711840:{NFSU2_TR(0x711840);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4406))));
}
B711843:{NFSU2_TR(0x711843);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B711847:{NFSU2_TR(0x711847);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B71184b:{NFSU2_TR(0x71184b);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B71184f:{NFSU2_TR(0x71184f);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B711853:{NFSU2_TR(0x711853);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B711857:{NFSU2_TR(0x711857);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B71185a:{NFSU2_TR(0x71185a);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B71185d:{NFSU2_TR(0x71185d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711861:{NFSU2_TR(0x711861);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B711864:{NFSU2_TR(0x711864);
__builtin_memmove((R+4384),(R+4352),8);
}
B711867:{NFSU2_TR(0x711867);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71186a:{NFSU2_TR(0x71186a);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B71186d:{NFSU2_TR(0x71186d);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B711870:{NFSU2_TR(0x711870);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(U+18))));
}
B711877:{NFSU2_TR(0x711877);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71187b:{NFSU2_TR(0x71187b);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4448))));
}
B71187e:{NFSU2_TR(0x71187e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B711881:{NFSU2_TR(0x711881);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711885:{NFSU2_TR(0x711885);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711889:{NFSU2_TR(0x711889);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71188d:{NFSU2_TR(0x71188d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711891:{NFSU2_TR(0x711891);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711895:{NFSU2_TR(0x711895);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B711898:{NFSU2_TR(0x711898);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B71189b:{NFSU2_TR(0x71189b);
__builtin_memmove((R+4416),(R+4432),8);
}
B71189e:{NFSU2_TR(0x71189e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7118a1:{NFSU2_TR(0x7118a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B7118a8:{NFSU2_TR(0x7118a8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B7118ab:{NFSU2_TR(0x7118ab);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B7118ae:{NFSU2_TR(0x7118ae);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B7118b2:{NFSU2_TR(0x7118b2);
__builtin_memmove((R+4384),(R+4400),8);
}
B7118b5:{NFSU2_TR(0x7118b5);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7118b9:{NFSU2_TR(0x7118b9);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B7118bc:{NFSU2_TR(0x7118bc);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B7118bf:{NFSU2_TR(0x7118bf);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B7118c6:{NFSU2_TR(0x7118c6);
__builtin_memmove((R+4416),(R+4368),8);
}
B7118c9:{NFSU2_TR(0x7118c9);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B7118cc:{NFSU2_TR(0x7118cc);
__builtin_memmove((R+4432),(R+4368),8);
}
B7118cf:{NFSU2_TR(0x7118cf);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B7118d3:{NFSU2_TR(0x7118d3);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B7118d6:{NFSU2_TR(0x7118d6);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7118d9:{NFSU2_TR(0x7118d9);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7118dc:{NFSU2_TR(0x7118dc);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B7118df:{NFSU2_TR(0x7118df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7118e3:{NFSU2_TR(0x7118e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7118e7:{NFSU2_TR(0x7118e7);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B7118ea:{NFSU2_TR(0x7118ea);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B7118ed:{NFSU2_TR(0x7118ed);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7118f0:{NFSU2_TR(0x7118f0);
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
B7118f3:{NFSU2_TR(0x7118f3);
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
B7118f6:{NFSU2_TR(0x7118f6);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B7118f9:{NFSU2_TR(0x7118f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711900:{NFSU2_TR(0x711900);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B711903:{NFSU2_TR(0x711903);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71190a:{NFSU2_TR(0x71190a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B71190d:{NFSU2_TR(0x71190d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711911:{NFSU2_TR(0x711911);
__builtin_memmove((R+4400),(R+4416),8);
}
B711914:{NFSU2_TR(0x711914);
__builtin_memmove((R+4448),(R+4432),8);
}
B711917:{NFSU2_TR(0x711917);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71191a:{NFSU2_TR(0x71191a);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B71191d:{NFSU2_TR(0x71191d);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B711920:{NFSU2_TR(0x711920);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711927:{NFSU2_TR(0x711927);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71192b:{NFSU2_TR(0x71192b);
__builtin_memmove((R+4368),(R+4416),8);
}
B71192e:{NFSU2_TR(0x71192e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B711931:{NFSU2_TR(0x711931);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B711934:{NFSU2_TR(0x711934);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B711937:{NFSU2_TR(0x711937);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71193e:{NFSU2_TR(0x71193e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711945:{NFSU2_TR(0x711945);
__builtin_memmove((R+4400),(R+4416),8);
}
B711948:{NFSU2_TR(0x711948);
__builtin_memmove((R+4448),(R+4432),8);
}
B71194b:{NFSU2_TR(0x71194b);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71194e:{NFSU2_TR(0x71194e);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B711951:{NFSU2_TR(0x711951);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B711954:{NFSU2_TR(0x711954);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B71195b:{NFSU2_TR(0x71195b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71195f:{NFSU2_TR(0x71195f);
__builtin_memmove((R+4384),(R+4416),8);
}
B711962:{NFSU2_TR(0x711962);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B711965:{NFSU2_TR(0x711965);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B711968:{NFSU2_TR(0x711968);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B71196b:{NFSU2_TR(0x71196b);
__builtin_memmove((R+4400),(R+4368),8);
}
B71196e:{NFSU2_TR(0x71196e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B711971:{NFSU2_TR(0x711971);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B711974:{NFSU2_TR(0x711974);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711978:{NFSU2_TR(0x711978);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71197c:{NFSU2_TR(0x71197c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711980:{NFSU2_TR(0x711980);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711984:{NFSU2_TR(0x711984);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71198b:{NFSU2_TR(0x71198b);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71198e:{NFSU2_TR(0x71198e);
__builtin_memmove((R+4416),(R+4400),8);
}
B711991:{NFSU2_TR(0x711991);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711995:{NFSU2_TR(0x711995);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711998:{NFSU2_TR(0x711998);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71199c:{NFSU2_TR(0x71199c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7119a0:{NFSU2_TR(0x7119a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7119a4:{NFSU2_TR(0x7119a4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7119a8:{NFSU2_TR(0x7119a8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7119ab:{NFSU2_TR(0x7119ab);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7119ae:{NFSU2_TR(0x7119ae);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7119b1:{NFSU2_TR(0x7119b1);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B7119b4:{NFSU2_TR(0x7119b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7119b8:{NFSU2_TR(0x7119b8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7119bb:{NFSU2_TR(0x7119bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7119bf:{NFSU2_TR(0x7119bf);
__builtin_memmove((R+4416),(R+4432),8);
}
B7119c2:{NFSU2_TR(0x7119c2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7119c5:{NFSU2_TR(0x7119c5);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7119c8:{NFSU2_TR(0x7119c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7119cc:{NFSU2_TR(0x7119cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7119d0:{NFSU2_TR(0x7119d0);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B7119d4:{NFSU2_TR(0x7119d4);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7119d7:{NFSU2_TR(0x7119d7);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7119da:{NFSU2_TR(0x7119da);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7119dd:{NFSU2_TR(0x7119dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7119e1:{NFSU2_TR(0x7119e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7119e5:{NFSU2_TR(0x7119e5);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7119e8:{NFSU2_TR(0x7119e8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7119ec:{NFSU2_TR(0x7119ec);
__builtin_memmove((R+4416),(R+4432),8);
}
B7119ef:{NFSU2_TR(0x7119ef);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7119f2:{NFSU2_TR(0x7119f2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B7119f5:{NFSU2_TR(0x7119f5);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B7119f9:{NFSU2_TR(0x7119f9);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7119fd:{NFSU2_TR(0x7119fd);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711a01:{NFSU2_TR(0x711a01);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711a04:{NFSU2_TR(0x711a04);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711a07:{NFSU2_TR(0x711a07);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711a0a:{NFSU2_TR(0x711a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711a0e:{NFSU2_TR(0x711a0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711a12:{NFSU2_TR(0x711a12);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711a15:{NFSU2_TR(0x711a15);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711a19:{NFSU2_TR(0x711a19);
__builtin_memmove((R+4416),(R+4432),8);
}
B711a1c:{NFSU2_TR(0x711a1c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711a1f:{NFSU2_TR(0x711a1f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711a22:{NFSU2_TR(0x711a22);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B711a25:{NFSU2_TR(0x711a25);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711a29:{NFSU2_TR(0x711a29);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711a2d:{NFSU2_TR(0x711a2d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711a34:{NFSU2_TR(0x711a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711a3b:{NFSU2_TR(0x711a3b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711a3f:{NFSU2_TR(0x711a3f);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711a42:{NFSU2_TR(0x711a42);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711a45:{NFSU2_TR(0x711a45);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711a48:{NFSU2_TR(0x711a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711a4c:{NFSU2_TR(0x711a4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711a50:{NFSU2_TR(0x711a50);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711a54:{NFSU2_TR(0x711a54);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711a5b:{NFSU2_TR(0x711a5b);
__builtin_memmove((R+4416),(R+4432),8);
}
B711a5e:{NFSU2_TR(0x711a5e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711a61:{NFSU2_TR(0x711a61);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711a64:{NFSU2_TR(0x711a64);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711a68:{NFSU2_TR(0x711a68);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711a6c:{NFSU2_TR(0x711a6c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711a73:{NFSU2_TR(0x711a73);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B711a76:{NFSU2_TR(0x711a76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711a7d:{NFSU2_TR(0x711a7d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711a81:{NFSU2_TR(0x711a81);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711a84:{NFSU2_TR(0x711a84);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711a87:{NFSU2_TR(0x711a87);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711a8a:{NFSU2_TR(0x711a8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711a8e:{NFSU2_TR(0x711a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711a92:{NFSU2_TR(0x711a92);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711a96:{NFSU2_TR(0x711a96);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711a99:{NFSU2_TR(0x711a99);
__builtin_memmove((R+4416),(R+4432),8);
}
B711a9c:{NFSU2_TR(0x711a9c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711a9f:{NFSU2_TR(0x711a9f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711aa2:{NFSU2_TR(0x711aa2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711aa6:{NFSU2_TR(0x711aa6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711aaa:{NFSU2_TR(0x711aaa);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711aae:{NFSU2_TR(0x711aae);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711ab1:{NFSU2_TR(0x711ab1);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711ab4:{NFSU2_TR(0x711ab4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711ab7:{NFSU2_TR(0x711ab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711abb:{NFSU2_TR(0x711abb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711abf:{NFSU2_TR(0x711abf);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711ac3:{NFSU2_TR(0x711ac3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711ac6:{NFSU2_TR(0x711ac6);
__builtin_memmove((R+4416),(R+4432),8);
}
B711ac9:{NFSU2_TR(0x711ac9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711acc:{NFSU2_TR(0x711acc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711acf:{NFSU2_TR(0x711acf);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711ad3:{NFSU2_TR(0x711ad3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711ad7:{NFSU2_TR(0x711ad7);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711adb:{NFSU2_TR(0x711adb);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711ade:{NFSU2_TR(0x711ade);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711ae1:{NFSU2_TR(0x711ae1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711ae4:{NFSU2_TR(0x711ae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711ae8:{NFSU2_TR(0x711ae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711aef:{NFSU2_TR(0x711aef);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711af3:{NFSU2_TR(0x711af3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711af6:{NFSU2_TR(0x711af6);
__builtin_memmove((R+4416),(R+4432),8);
}
B711af9:{NFSU2_TR(0x711af9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711afc:{NFSU2_TR(0x711afc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711aff:{NFSU2_TR(0x711aff);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711b03:{NFSU2_TR(0x711b03);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711b07:{NFSU2_TR(0x711b07);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711b0b:{NFSU2_TR(0x711b0b);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711b0e:{NFSU2_TR(0x711b0e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B711b11:{NFSU2_TR(0x711b11);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711b14:{NFSU2_TR(0x711b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711b18:{NFSU2_TR(0x711b18);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B711b1b:{NFSU2_TR(0x711b1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B711b1e:{NFSU2_TR(0x711b1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711b22:{NFSU2_TR(0x711b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711b26:{NFSU2_TR(0x711b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711b2a:{NFSU2_TR(0x711b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711b2e:{NFSU2_TR(0x711b2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711b32:{NFSU2_TR(0x711b32);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B711b35:{NFSU2_TR(0x711b35);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B711b38:{NFSU2_TR(0x711b38);
__builtin_memmove((R+4416),(R+4432),8);
}
B711b3b:{NFSU2_TR(0x711b3b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711b3e:{NFSU2_TR(0x711b3e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B711b45:{NFSU2_TR(0x711b45);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B711b48:{NFSU2_TR(0x711b48);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B711b4b:{NFSU2_TR(0x711b4b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B711b4f:{NFSU2_TR(0x711b4f);
__builtin_memmove((R+4384),(R+4400),8);
}
B711b52:{NFSU2_TR(0x711b52);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B711b56:{NFSU2_TR(0x711b56);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B711b59:{NFSU2_TR(0x711b59);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B711b5c:{NFSU2_TR(0x711b5c);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B711b63:{NFSU2_TR(0x711b63);
__builtin_memmove((R+4416),(R+4368),8);
}
B711b66:{NFSU2_TR(0x711b66);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B711b69:{NFSU2_TR(0x711b69);
__builtin_memmove((R+4432),(R+4368),8);
}
B711b6c:{NFSU2_TR(0x711b6c);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B711b70:{NFSU2_TR(0x711b70);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B711b73:{NFSU2_TR(0x711b73);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B711b76:{NFSU2_TR(0x711b76);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B711b79:{NFSU2_TR(0x711b79);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B711b7c:{NFSU2_TR(0x711b7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711b80:{NFSU2_TR(0x711b80);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711b84:{NFSU2_TR(0x711b84);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B711b87:{NFSU2_TR(0x711b87);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B711b8a:{NFSU2_TR(0x711b8a);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B711b8d:{NFSU2_TR(0x711b8d);
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
B711b90:{NFSU2_TR(0x711b90);
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
B711b93:{NFSU2_TR(0x711b93);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B711b96:{NFSU2_TR(0x711b96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711b9d:{NFSU2_TR(0x711b9d);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B711ba0:{NFSU2_TR(0x711ba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711ba7:{NFSU2_TR(0x711ba7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B711baa:{NFSU2_TR(0x711baa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711bae:{NFSU2_TR(0x711bae);
__builtin_memmove((R+4400),(R+4416),8);
}
B711bb1:{NFSU2_TR(0x711bb1);
__builtin_memmove((R+4448),(R+4432),8);
}
B711bb4:{NFSU2_TR(0x711bb4);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B711bb7:{NFSU2_TR(0x711bb7);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B711bba:{NFSU2_TR(0x711bba);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B711bbd:{NFSU2_TR(0x711bbd);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711bc4:{NFSU2_TR(0x711bc4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B711bc8:{NFSU2_TR(0x711bc8);
__builtin_memmove((R+4368),(R+4416),8);
}
B711bcb:{NFSU2_TR(0x711bcb);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B711bce:{NFSU2_TR(0x711bce);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B711bd1:{NFSU2_TR(0x711bd1);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B711bd4:{NFSU2_TR(0x711bd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711bdb:{NFSU2_TR(0x711bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711be2:{NFSU2_TR(0x711be2);
__builtin_memmove((R+4400),(R+4416),8);
}
B711be5:{NFSU2_TR(0x711be5);
__builtin_memmove((R+4448),(R+4432),8);
}
B711be8:{NFSU2_TR(0x711be8);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B711beb:{NFSU2_TR(0x711beb);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B711bee:{NFSU2_TR(0x711bee);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B711bf1:{NFSU2_TR(0x711bf1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711bf8:{NFSU2_TR(0x711bf8);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B711bfc:{NFSU2_TR(0x711bfc);
__builtin_memmove((R+4384),(R+4416),8);
}
B711bff:{NFSU2_TR(0x711bff);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B711c02:{NFSU2_TR(0x711c02);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B711c05:{NFSU2_TR(0x711c05);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B711c08:{NFSU2_TR(0x711c08);
__builtin_memmove((R+4400),(R+4368),8);
}
B711c0b:{NFSU2_TR(0x711c0b);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B711c0e:{NFSU2_TR(0x711c0e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B711c11:{NFSU2_TR(0x711c11);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B711c15:{NFSU2_TR(0x711c15);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711c19:{NFSU2_TR(0x711c19);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711c1d:{NFSU2_TR(0x711c1d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711c21:{NFSU2_TR(0x711c21);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B711c28:{NFSU2_TR(0x711c28);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B711c2b:{NFSU2_TR(0x711c2b);
__builtin_memmove((R+4416),(R+4400),8);
}
B711c2e:{NFSU2_TR(0x711c2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711c32:{NFSU2_TR(0x711c32);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711c35:{NFSU2_TR(0x711c35);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B711c39:{NFSU2_TR(0x711c39);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711c3d:{NFSU2_TR(0x711c3d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711c41:{NFSU2_TR(0x711c41);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711c45:{NFSU2_TR(0x711c45);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711c48:{NFSU2_TR(0x711c48);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711c4b:{NFSU2_TR(0x711c4b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711c4e:{NFSU2_TR(0x711c4e);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B711c51:{NFSU2_TR(0x711c51);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711c55:{NFSU2_TR(0x711c55);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711c58:{NFSU2_TR(0x711c58);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711c5c:{NFSU2_TR(0x711c5c);
__builtin_memmove((R+4416),(R+4432),8);
}
B711c5f:{NFSU2_TR(0x711c5f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711c62:{NFSU2_TR(0x711c62);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711c65:{NFSU2_TR(0x711c65);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711c69:{NFSU2_TR(0x711c69);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711c6d:{NFSU2_TR(0x711c6d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711c71:{NFSU2_TR(0x711c71);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711c74:{NFSU2_TR(0x711c74);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711c77:{NFSU2_TR(0x711c77);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711c7a:{NFSU2_TR(0x711c7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711c7e:{NFSU2_TR(0x711c7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711c82:{NFSU2_TR(0x711c82);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711c85:{NFSU2_TR(0x711c85);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711c89:{NFSU2_TR(0x711c89);
__builtin_memmove((R+4416),(R+4432),8);
}
B711c8c:{NFSU2_TR(0x711c8c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711c8f:{NFSU2_TR(0x711c8f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711c92:{NFSU2_TR(0x711c92);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711c96:{NFSU2_TR(0x711c96);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711c9a:{NFSU2_TR(0x711c9a);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711c9e:{NFSU2_TR(0x711c9e);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711ca1:{NFSU2_TR(0x711ca1);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711ca4:{NFSU2_TR(0x711ca4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711ca7:{NFSU2_TR(0x711ca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711cab:{NFSU2_TR(0x711cab);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711caf:{NFSU2_TR(0x711caf);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B711cb2:{NFSU2_TR(0x711cb2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711cb6:{NFSU2_TR(0x711cb6);
__builtin_memmove((R+4416),(R+4432),8);
}
B711cb9:{NFSU2_TR(0x711cb9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711cbc:{NFSU2_TR(0x711cbc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711cbf:{NFSU2_TR(0x711cbf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B711cc2:{NFSU2_TR(0x711cc2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711cc6:{NFSU2_TR(0x711cc6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711cca:{NFSU2_TR(0x711cca);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711cd1:{NFSU2_TR(0x711cd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711cd8:{NFSU2_TR(0x711cd8);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711cdc:{NFSU2_TR(0x711cdc);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711cdf:{NFSU2_TR(0x711cdf);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711ce2:{NFSU2_TR(0x711ce2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711ce5:{NFSU2_TR(0x711ce5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711ce9:{NFSU2_TR(0x711ce9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711ced:{NFSU2_TR(0x711ced);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711cf1:{NFSU2_TR(0x711cf1);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B711cf8:{NFSU2_TR(0x711cf8);
__builtin_memmove((R+4416),(R+4432),8);
}
B711cfb:{NFSU2_TR(0x711cfb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711cfe:{NFSU2_TR(0x711cfe);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711d01:{NFSU2_TR(0x711d01);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711d05:{NFSU2_TR(0x711d05);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711d09:{NFSU2_TR(0x711d09);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711d10:{NFSU2_TR(0x711d10);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B711d13:{NFSU2_TR(0x711d13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711d1a:{NFSU2_TR(0x711d1a);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711d1e:{NFSU2_TR(0x711d1e);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711d21:{NFSU2_TR(0x711d21);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711d24:{NFSU2_TR(0x711d24);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711d27:{NFSU2_TR(0x711d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711d2b:{NFSU2_TR(0x711d2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711d2f:{NFSU2_TR(0x711d2f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711d33:{NFSU2_TR(0x711d33);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711d36:{NFSU2_TR(0x711d36);
__builtin_memmove((R+4416),(R+4432),8);
}
B711d39:{NFSU2_TR(0x711d39);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711d3c:{NFSU2_TR(0x711d3c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711d3f:{NFSU2_TR(0x711d3f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711d43:{NFSU2_TR(0x711d43);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711d47:{NFSU2_TR(0x711d47);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711d4b:{NFSU2_TR(0x711d4b);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711d4e:{NFSU2_TR(0x711d4e);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711d51:{NFSU2_TR(0x711d51);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711d54:{NFSU2_TR(0x711d54);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711d58:{NFSU2_TR(0x711d58);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711d5c:{NFSU2_TR(0x711d5c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711d60:{NFSU2_TR(0x711d60);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711d63:{NFSU2_TR(0x711d63);
__builtin_memmove((R+4416),(R+4432),8);
}
B711d66:{NFSU2_TR(0x711d66);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711d69:{NFSU2_TR(0x711d69);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711d6c:{NFSU2_TR(0x711d6c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711d70:{NFSU2_TR(0x711d70);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711d74:{NFSU2_TR(0x711d74);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711d78:{NFSU2_TR(0x711d78);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711d7b:{NFSU2_TR(0x711d7b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711d7e:{NFSU2_TR(0x711d7e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711d81:{NFSU2_TR(0x711d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711d85:{NFSU2_TR(0x711d85);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711d8c:{NFSU2_TR(0x711d8c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B711d90:{NFSU2_TR(0x711d90);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B711d93:{NFSU2_TR(0x711d93);
__builtin_memmove((R+4416),(R+4432),8);
}
B711d96:{NFSU2_TR(0x711d96);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B711d99:{NFSU2_TR(0x711d99);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B711d9c:{NFSU2_TR(0x711d9c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B711da0:{NFSU2_TR(0x711da0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B711da4:{NFSU2_TR(0x711da4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B711da8:{NFSU2_TR(0x711da8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B711dab:{NFSU2_TR(0x711dab);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B711dae:{NFSU2_TR(0x711dae);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B711db1:{NFSU2_TR(0x711db1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711db5:{NFSU2_TR(0x711db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711db8:{NFSU2_TR(0x711db8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B711dbb:{NFSU2_TR(0x711dbb);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B711dbe:{NFSU2_TR(0x711dbe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B711dc1:{NFSU2_TR(0x711dc1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B711dc4:{NFSU2_TR(0x711dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711dc8:{NFSU2_TR(0x711dc8);
__builtin_memmove((R+4416),(R+4352),8);
}
B711dcb:{NFSU2_TR(0x711dcb);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B711dce:{NFSU2_TR(0x711dce);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B711dd1:{NFSU2_TR(0x711dd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711dd5:{NFSU2_TR(0x711dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711dd9:{NFSU2_TR(0x711dd9);
__builtin_memmove((R+4432),(R+4384),8);
}
B711ddc:{NFSU2_TR(0x711ddc);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B711ddf:{NFSU2_TR(0x711ddf);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B711de2:{NFSU2_TR(0x711de2);
__builtin_memmove((R+4368),(R+4352),8);
}
B711de5:{NFSU2_TR(0x711de5);
__builtin_memmove((R+4356),(R+4384),4);
}
B711de8:{NFSU2_TR(0x711de8);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B711deb:{NFSU2_TR(0x711deb);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B711dee:{NFSU2_TR(0x711dee);
__builtin_memmove((R+4352),(R+4416),8);
}
B711df1:{NFSU2_TR(0x711df1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711df5:{NFSU2_TR(0x711df5);
__builtin_memmove((R+4356),(R+4432),4);
}
B711df8:{NFSU2_TR(0x711df8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B711dfb:{NFSU2_TR(0x711dfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711dff:{NFSU2_TR(0x711dff);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711e03:{NFSU2_TR(0x711e03);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711e07:{NFSU2_TR(0x711e07);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711e0b:{NFSU2_TR(0x711e0b);
__builtin_memmove((R+4400),(R+4368),8);
}
B711e0e:{NFSU2_TR(0x711e0e);
__builtin_memmove((R+4464),(R+4432),8);
}
B711e11:{NFSU2_TR(0x711e11);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B711e14:{NFSU2_TR(0x711e14);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B711e17:{NFSU2_TR(0x711e17);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B711e1a:{NFSU2_TR(0x711e1a);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B711e1d:{NFSU2_TR(0x711e1d);
__builtin_memmove((R+4384),(R+4368),8);
}
B711e20:{NFSU2_TR(0x711e20);
__builtin_memmove((R+4448),(R+4400),8);
}
B711e23:{NFSU2_TR(0x711e23);
__builtin_memmove((R+4372),(R+4432),4);
}
B711e26:{NFSU2_TR(0x711e26);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B711e29:{NFSU2_TR(0x711e29);
__builtin_memmove((R+4404),(R+4464),4);
}
B711e2c:{NFSU2_TR(0x711e2c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B711e2f:{NFSU2_TR(0x711e2f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B711e32:{NFSU2_TR(0x711e32);
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
B711e35:{NFSU2_TR(0x711e35);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B711e38:{NFSU2_TR(0x711e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B711e3c:{NFSU2_TR(0x711e3c);
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
B711e3f:{NFSU2_TR(0x711e3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711e43:{NFSU2_TR(0x711e43);
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
B711e46:{NFSU2_TR(0x711e46);
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
B711e49:{NFSU2_TR(0x711e49);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711e4d:{NFSU2_TR(0x711e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B711e50:{NFSU2_TR(0x711e50);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711e54:{NFSU2_TR(0x711e54);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B711e57:{NFSU2_TR(0x711e57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B711e5a:{NFSU2_TR(0x711e5a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B711e5d:{NFSU2_TR(0x711e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711e61:{NFSU2_TR(0x711e61);
__builtin_memmove((R+4416),(R+4352),8);
}
B711e64:{NFSU2_TR(0x711e64);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B711e67:{NFSU2_TR(0x711e67);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B711e6a:{NFSU2_TR(0x711e6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711e6e:{NFSU2_TR(0x711e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B711e72:{NFSU2_TR(0x711e72);
__builtin_memmove((R+4432),(R+4384),8);
}
B711e75:{NFSU2_TR(0x711e75);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B711e78:{NFSU2_TR(0x711e78);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B711e7b:{NFSU2_TR(0x711e7b);
__builtin_memmove((R+4368),(R+4352),8);
}
B711e7e:{NFSU2_TR(0x711e7e);
__builtin_memmove((R+4356),(R+4384),4);
}
B711e81:{NFSU2_TR(0x711e81);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B711e84:{NFSU2_TR(0x711e84);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B711e87:{NFSU2_TR(0x711e87);
__builtin_memmove((R+4352),(R+4416),8);
}
B711e8a:{NFSU2_TR(0x711e8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B711e8e:{NFSU2_TR(0x711e8e);
__builtin_memmove((R+4356),(R+4432),4);
}
B711e91:{NFSU2_TR(0x711e91);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B711e94:{NFSU2_TR(0x711e94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B711e98:{NFSU2_TR(0x711e98);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B711e9c:{NFSU2_TR(0x711e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B711ea0:{NFSU2_TR(0x711ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B711ea4:{NFSU2_TR(0x711ea4);
__builtin_memmove((R+4400),(R+4368),8);
}
B711ea7:{NFSU2_TR(0x711ea7);
__builtin_memmove((R+4464),(R+4432),8);
}
B711eaa:{NFSU2_TR(0x711eaa);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B711ead:{NFSU2_TR(0x711ead);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B711eb0:{NFSU2_TR(0x711eb0);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B711eb3:{NFSU2_TR(0x711eb3);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B711eb6:{NFSU2_TR(0x711eb6);
__builtin_memmove((R+4384),(R+4368),8);
}
B711eb9:{NFSU2_TR(0x711eb9);
__builtin_memmove((R+4448),(R+4400),8);
}
B711ebc:{NFSU2_TR(0x711ebc);
__builtin_memmove((R+4372),(R+4432),4);
}
B711ebf:{NFSU2_TR(0x711ebf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B711ec2:{NFSU2_TR(0x711ec2);
__builtin_memmove((R+4404),(R+4464),4);
}
B711ec5:{NFSU2_TR(0x711ec5);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B711ec8:{NFSU2_TR(0x711ec8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B711ecb:{NFSU2_TR(0x711ecb);
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
B711ece:{NFSU2_TR(0x711ece);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B711ed1:{NFSU2_TR(0x711ed1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B711ed5:{NFSU2_TR(0x711ed5);
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
B711ed8:{NFSU2_TR(0x711ed8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711edc:{NFSU2_TR(0x711edc);
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
B711edf:{NFSU2_TR(0x711edf);
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
B711ee2:{NFSU2_TR(0x711ee2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711ee6:{NFSU2_TR(0x711ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B711ee9:{NFSU2_TR(0x711ee9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B711eed:{NFSU2_TR(0x711eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B711eee:{NFSU2_TR(0x711eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B711eef:{NFSU2_TR(0x711eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B711ef0:{NFSU2_TR(0x711ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B711ef1:{NFSU2_TR(0x711ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B711ef2:{NFSU2_TR(0x711ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B711ef3:{NFSU2_TR(0x711ef3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711ef7:{NFSU2_TR(0x711ef7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B711efb:{NFSU2_TR(0x711efb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711efd:{NFSU2_TR(0x711efd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f01:{NFSU2_TR(0x711f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B711f04:{NFSU2_TR(0x711f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711f07:{NFSU2_TR(0x711f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B711f0d:{NFSU2_TR(0x711f0d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f0f:{NFSU2_TR(0x711f0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f13:{NFSU2_TR(0x711f13);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f15:{NFSU2_TR(0x711f15);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f19:{NFSU2_TR(0x711f19);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f1b:{NFSU2_TR(0x711f1b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f1f:{NFSU2_TR(0x711f1f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f21:{NFSU2_TR(0x711f21);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f25:{NFSU2_TR(0x711f25);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B711f29:{NFSU2_TR(0x711f29);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f2b:{NFSU2_TR(0x711f2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B711f2f:{NFSU2_TR(0x711f2f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B711f31:{NFSU2_TR(0x711f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B711f33:{NFSU2_TR(0x711f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711f36:{NFSU2_TR(0x711f36);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f3a:{NFSU2_TR(0x711f3a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B711f3c:{NFSU2_TR(0x711f3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B711f40:{NFSU2_TR(0x711f40);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f42:{NFSU2_TR(0x711f42);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f46:{NFSU2_TR(0x711f46);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f48:{NFSU2_TR(0x711f48);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f4c:{NFSU2_TR(0x711f4c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f4e:{NFSU2_TR(0x711f4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f52:{NFSU2_TR(0x711f52);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f54:{NFSU2_TR(0x711f54);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f58:{NFSU2_TR(0x711f58);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f5a:{NFSU2_TR(0x711f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f5e:{NFSU2_TR(0x711f5e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f60:{NFSU2_TR(0x711f60);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B711f64:{NFSU2_TR(0x711f64);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B711f66:{NFSU2_TR(0x711f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B711f68:L711f68:{c.instructions+=11;NFSU2_TR(0x711f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f6c:{NFSU2_TR(0x711f6c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711f6e:{NFSU2_TR(0x711f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B711f6f:{NFSU2_TR(0x711f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f72:{NFSU2_TR(0x711f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f75:{NFSU2_TR(0x711f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f78:{NFSU2_TR(0x711f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f7b:{NFSU2_TR(0x711f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B711f7e:{NFSU2_TR(0x711f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711f81:{NFSU2_TR(0x711f81);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
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
B711f87:{NFSU2_TR(0x711f87);
if(r1(R+512)){TAIL_STATIC(0x710b35u,710);}
}
B711f8d:L711f8d:{c.instructions+=7;NFSU2_TR(0x711f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B711f8e:{NFSU2_TR(0x711f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B711f8f:{NFSU2_TR(0x711f8f);
__builtin_memmove((R+16),(R+20),4);
}
B711f91:{NFSU2_TR(0x711f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B711f92:{NFSU2_TR(0x711f92);
__builtin_memmove((R+16),(R+12),4);
}
B711f94:{NFSU2_TR(0x711f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B711f95:{NFSU2_TR(0x711f95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B711f96:L711f96:{c.instructions+=35;NFSU2_TR(0x711f96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711f97:{NFSU2_TR(0x711f97);
__builtin_memmove((R+12),(R+16),4);
}
B711f99:{NFSU2_TR(0x711f99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711f9a:{NFSU2_TR(0x711f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711f9b:{NFSU2_TR(0x711f9b);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B711f9e:{NFSU2_TR(0x711f9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B711fa1:{NFSU2_TR(0x711fa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711fa2:{NFSU2_TR(0x711fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B711fa5:{NFSU2_TR(0x711fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B711fa9:{NFSU2_TR(0x711fa9);
__builtin_memmove((R+20),(R+16),4);
}
B711fab:{NFSU2_TR(0x711fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e8ull))));
}
B711fb1:{NFSU2_TR(0x711fb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711fb2:{NFSU2_TR(0x711fb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B711fb3:{NFSU2_TR(0x711fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711fb6:{NFSU2_TR(0x711fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711fb9:{NFSU2_TR(0x711fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B711fbc:{NFSU2_TR(0x711fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B711fbf:{NFSU2_TR(0x711fbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B711fc2:{NFSU2_TR(0x711fc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B711fc5:{NFSU2_TR(0x711fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B711fc8:{NFSU2_TR(0x711fc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fcc:{NFSU2_TR(0x711fcc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fd0:{NFSU2_TR(0x711fd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fd4:{NFSU2_TR(0x711fd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fd8:{NFSU2_TR(0x711fd8);
__builtin_memmove((R+4),gp(0x8b9c4c),4);
}
B711fde:{NFSU2_TR(0x711fde);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B711fe1:{NFSU2_TR(0x711fe1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fe5:{NFSU2_TR(0x711fe5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff92ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fe9:{NFSU2_TR(0x711fe9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711fed:{NFSU2_TR(0x711fed);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff96ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B711ff1:{NFSU2_TR(0x711ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B711ff4:{NFSU2_TR(0x711ff4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B711ff6:{NFSU2_TR(0x711ff6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B711ff8:{NFSU2_TR(0x711ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B711ffb:{NFSU2_TR(0x711ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x712001u,712);
}
XIT:NFSU2_TR_EXIT(0x711,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
