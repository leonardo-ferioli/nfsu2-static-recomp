#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_72f(u8* __restrict R,Cpu& c);
u32 body_731(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x730,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x730,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_730(u8* __restrict R,Cpu& c);
u32 page_730(Cpu& c){return body_730(c.regs.data(),c);}
__attribute__((noinline)) u32 body_730(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x730002:goto L730002;
case 0x730004:c.instructions+=80;goto B730004;
case 0x730007:c.instructions+=79;goto B730007;
case 0x73000a:c.instructions+=78;goto B73000a;
case 0x73000e:c.instructions+=77;goto B73000e;
case 0x730012:c.instructions+=76;goto B730012;
case 0x730015:c.instructions+=75;goto B730015;
case 0x730018:c.instructions+=74;goto B730018;
case 0x73001c:c.instructions+=73;goto B73001c;
case 0x730020:c.instructions+=72;goto B730020;
case 0x730023:c.instructions+=71;goto B730023;
case 0x730026:c.instructions+=70;goto B730026;
case 0x73002a:c.instructions+=69;goto B73002a;
case 0x73002e:c.instructions+=68;goto B73002e;
case 0x730031:c.instructions+=67;goto B730031;
case 0x730034:c.instructions+=66;goto B730034;
case 0x73003a:c.instructions+=65;goto B73003a;
case 0x73003e:c.instructions+=64;goto B73003e;
case 0x730042:c.instructions+=63;goto B730042;
case 0x730048:c.instructions+=62;goto B730048;
case 0x73004a:c.instructions+=61;goto B73004a;
case 0x73004d:c.instructions+=60;goto B73004d;
case 0x730053:c.instructions+=59;goto B730053;
case 0x730055:c.instructions+=58;goto B730055;
case 0x730058:c.instructions+=57;goto B730058;
case 0x73005e:c.instructions+=56;goto B73005e;
case 0x730060:c.instructions+=55;goto B730060;
case 0x730063:c.instructions+=54;goto B730063;
case 0x730069:c.instructions+=53;goto B730069;
case 0x73006b:c.instructions+=52;goto B73006b;
case 0x73006e:c.instructions+=51;goto B73006e;
case 0x730070:c.instructions+=50;goto B730070;
case 0x730073:c.instructions+=49;goto B730073;
case 0x730076:c.instructions+=48;goto B730076;
case 0x73007a:c.instructions+=47;goto B73007a;
case 0x73007e:c.instructions+=46;goto B73007e;
case 0x730081:c.instructions+=45;goto B730081;
case 0x730084:c.instructions+=44;goto B730084;
case 0x730088:c.instructions+=43;goto B730088;
case 0x73008c:c.instructions+=42;goto B73008c;
case 0x73008f:c.instructions+=41;goto B73008f;
case 0x730092:c.instructions+=40;goto B730092;
case 0x730096:c.instructions+=39;goto B730096;
case 0x73009a:c.instructions+=38;goto B73009a;
case 0x73009d:c.instructions+=37;goto B73009d;
case 0x7300a0:c.instructions+=36;goto B7300a0;
case 0x7300a6:c.instructions+=35;goto B7300a6;
case 0x7300aa:c.instructions+=34;goto B7300aa;
case 0x7300ae:c.instructions+=33;goto B7300ae;
case 0x7300b4:c.instructions+=32;goto B7300b4;
case 0x7300b6:c.instructions+=31;goto B7300b6;
case 0x7300b9:c.instructions+=30;goto B7300b9;
case 0x7300bf:c.instructions+=29;goto B7300bf;
case 0x7300c1:c.instructions+=28;goto B7300c1;
case 0x7300c4:c.instructions+=27;goto B7300c4;
case 0x7300ca:c.instructions+=26;goto B7300ca;
case 0x7300cc:c.instructions+=25;goto B7300cc;
case 0x7300cf:c.instructions+=24;goto B7300cf;
case 0x7300d5:c.instructions+=23;goto B7300d5;
case 0x7300d7:c.instructions+=22;goto B7300d7;
case 0x7300da:c.instructions+=21;goto B7300da;
case 0x7300dc:c.instructions+=20;goto B7300dc;
case 0x7300df:c.instructions+=19;goto B7300df;
case 0x7300e2:c.instructions+=18;goto B7300e2;
case 0x7300e6:c.instructions+=17;goto B7300e6;
case 0x7300ea:c.instructions+=16;goto B7300ea;
case 0x7300ed:c.instructions+=15;goto B7300ed;
case 0x7300f0:c.instructions+=14;goto B7300f0;
case 0x7300f4:c.instructions+=13;goto B7300f4;
case 0x7300f8:c.instructions+=12;goto B7300f8;
case 0x7300fb:c.instructions+=11;goto B7300fb;
case 0x7300fe:c.instructions+=10;goto B7300fe;
case 0x730102:c.instructions+=9;goto B730102;
case 0x730106:c.instructions+=8;goto B730106;
case 0x730109:c.instructions+=7;goto B730109;
case 0x73010c:c.instructions+=6;goto B73010c;
case 0x730110:c.instructions+=5;goto B730110;
case 0x730114:c.instructions+=4;goto B730114;
case 0x730117:c.instructions+=3;goto B730117;
case 0x73011a:c.instructions+=2;goto B73011a;
case 0x73011b:c.instructions+=1;goto B73011b;
case 0x730121:goto L730121;
case 0x730122:c.instructions+=3;goto B730122;
case 0x730125:c.instructions+=2;goto B730125;
case 0x730126:c.instructions+=1;goto B730126;
case 0x730127:goto L730127;
case 0x730128:c.instructions+=6;goto B730128;
case 0x73012a:c.instructions+=5;goto B73012a;
case 0x73012b:c.instructions+=4;goto B73012b;
case 0x73012e:c.instructions+=3;goto B73012e;
case 0x730134:c.instructions+=2;goto B730134;
case 0x730136:c.instructions+=1;goto B730136;
case 0x73013c:goto L73013c;
case 0x73013f:c.instructions+=6;goto B73013f;
case 0x730141:c.instructions+=5;goto B730141;
case 0x730144:c.instructions+=4;goto B730144;
case 0x730145:c.instructions+=3;goto B730145;
case 0x730148:c.instructions+=2;goto B730148;
case 0x73014b:c.instructions+=1;goto B73014b;
case 0x73014c:goto L73014c;
case 0x73014f:c.instructions+=99;goto B73014f;
case 0x730152:c.instructions+=98;goto B730152;
case 0x730154:c.instructions+=97;goto B730154;
case 0x730157:c.instructions+=96;goto B730157;
case 0x73015a:c.instructions+=95;goto B73015a;
case 0x73015c:c.instructions+=94;goto B73015c;
case 0x73015f:c.instructions+=93;goto B73015f;
case 0x730162:c.instructions+=92;goto B730162;
case 0x730165:c.instructions+=91;goto B730165;
case 0x730167:c.instructions+=90;goto B730167;
case 0x73016a:c.instructions+=89;goto B73016a;
case 0x730170:c.instructions+=88;goto B730170;
case 0x730172:c.instructions+=87;goto B730172;
case 0x730175:c.instructions+=86;goto B730175;
case 0x73017b:c.instructions+=85;goto B73017b;
case 0x730181:c.instructions+=84;goto B730181;
case 0x730187:c.instructions+=83;goto B730187;
case 0x73018a:c.instructions+=82;goto B73018a;
case 0x73018d:c.instructions+=81;goto B73018d;
case 0x73018f:c.instructions+=80;goto B73018f;
case 0x730192:c.instructions+=79;goto B730192;
case 0x730195:c.instructions+=78;goto B730195;
case 0x730198:c.instructions+=77;goto B730198;
case 0x73019e:c.instructions+=76;goto B73019e;
case 0x7301a1:c.instructions+=75;goto B7301a1;
case 0x7301a7:c.instructions+=74;goto B7301a7;
case 0x7301a9:c.instructions+=73;goto B7301a9;
case 0x7301af:c.instructions+=72;goto B7301af;
case 0x7301b5:c.instructions+=71;goto B7301b5;
case 0x7301b8:c.instructions+=70;goto B7301b8;
case 0x7301bb:c.instructions+=69;goto B7301bb;
case 0x7301bd:c.instructions+=68;goto B7301bd;
case 0x7301c0:c.instructions+=67;goto B7301c0;
case 0x7301c3:c.instructions+=66;goto B7301c3;
case 0x7301c6:c.instructions+=65;goto B7301c6;
case 0x7301cc:c.instructions+=64;goto B7301cc;
case 0x7301cf:c.instructions+=63;goto B7301cf;
case 0x7301d5:c.instructions+=62;goto B7301d5;
case 0x7301d7:c.instructions+=61;goto B7301d7;
case 0x7301dd:c.instructions+=60;goto B7301dd;
case 0x7301e3:c.instructions+=59;goto B7301e3;
case 0x7301e6:c.instructions+=58;goto B7301e6;
case 0x7301e9:c.instructions+=57;goto B7301e9;
case 0x7301eb:c.instructions+=56;goto B7301eb;
case 0x7301ee:c.instructions+=55;goto B7301ee;
case 0x7301f1:c.instructions+=54;goto B7301f1;
case 0x7301f4:c.instructions+=53;goto B7301f4;
case 0x7301fa:c.instructions+=52;goto B7301fa;
case 0x7301fd:c.instructions+=51;goto B7301fd;
case 0x730203:c.instructions+=50;goto B730203;
case 0x730205:c.instructions+=49;goto B730205;
case 0x73020b:c.instructions+=48;goto B73020b;
case 0x730211:c.instructions+=47;goto B730211;
case 0x730214:c.instructions+=46;goto B730214;
case 0x730217:c.instructions+=45;goto B730217;
case 0x730219:c.instructions+=44;goto B730219;
case 0x73021c:c.instructions+=43;goto B73021c;
case 0x73021f:c.instructions+=42;goto B73021f;
case 0x730222:c.instructions+=41;goto B730222;
case 0x730228:c.instructions+=40;goto B730228;
case 0x73022b:c.instructions+=39;goto B73022b;
case 0x730231:c.instructions+=38;goto B730231;
case 0x730233:c.instructions+=37;goto B730233;
case 0x730239:c.instructions+=36;goto B730239;
case 0x73023f:c.instructions+=35;goto B73023f;
case 0x730242:c.instructions+=34;goto B730242;
case 0x730245:c.instructions+=33;goto B730245;
case 0x730247:c.instructions+=32;goto B730247;
case 0x73024a:c.instructions+=31;goto B73024a;
case 0x73024d:c.instructions+=30;goto B73024d;
case 0x730250:c.instructions+=29;goto B730250;
case 0x730256:c.instructions+=28;goto B730256;
case 0x730259:c.instructions+=27;goto B730259;
case 0x73025f:c.instructions+=26;goto B73025f;
case 0x730261:c.instructions+=25;goto B730261;
case 0x730267:c.instructions+=24;goto B730267;
case 0x73026d:c.instructions+=23;goto B73026d;
case 0x730270:c.instructions+=22;goto B730270;
case 0x730272:c.instructions+=21;goto B730272;
case 0x730275:c.instructions+=20;goto B730275;
case 0x730278:c.instructions+=19;goto B730278;
case 0x73027b:c.instructions+=18;goto B73027b;
case 0x73027d:c.instructions+=17;goto B73027d;
case 0x730280:c.instructions+=16;goto B730280;
case 0x730286:c.instructions+=15;goto B730286;
case 0x73028c:c.instructions+=14;goto B73028c;
case 0x730292:c.instructions+=13;goto B730292;
case 0x730295:c.instructions+=12;goto B730295;
case 0x730297:c.instructions+=11;goto B730297;
case 0x73029d:c.instructions+=10;goto B73029d;
case 0x7302a0:c.instructions+=9;goto B7302a0;
case 0x7302a3:c.instructions+=8;goto B7302a3;
case 0x7302a6:c.instructions+=7;goto B7302a6;
case 0x7302a9:c.instructions+=6;goto B7302a9;
case 0x7302ac:c.instructions+=5;goto B7302ac;
case 0x7302af:c.instructions+=4;goto B7302af;
case 0x7302b1:c.instructions+=3;goto B7302b1;
case 0x7302b7:c.instructions+=2;goto B7302b7;
case 0x7302b8:c.instructions+=1;goto B7302b8;
case 0x7302be:goto L7302be;
case 0x7302bf:c.instructions+=2;goto B7302bf;
case 0x7302c0:c.instructions+=1;goto B7302c0;
case 0x7302c1:goto L7302c1;
case 0x7302c2:c.instructions+=2;goto B7302c2;
case 0x7302c4:c.instructions+=1;goto B7302c4;
case 0x7302c9:goto L7302c9;
case 0x7302ce:c.instructions+=1;goto B7302ce;
case 0x7302d0:goto L7302d0;
case 0x7302d1:c.instructions+=1;goto B7302d1;
case 0x7302d6:goto L7302d6;
case 0x7302d7:goto L7302d7;
case 0x7302d9:c.instructions+=2;goto B7302d9;
case 0x7302da:c.instructions+=1;goto B7302da;
case 0x7302dd:goto L7302dd;
case 0x7302de:c.instructions+=609;goto B7302de;
case 0x7302e0:c.instructions+=608;goto B7302e0;
case 0x7302e1:c.instructions+=607;goto B7302e1;
case 0x7302e4:c.instructions+=606;goto B7302e4;
case 0x7302ea:c.instructions+=605;goto B7302ea;
case 0x7302ed:c.instructions+=604;goto B7302ed;
case 0x7302f0:c.instructions+=603;goto B7302f0;
case 0x7302f3:c.instructions+=602;goto B7302f3;
case 0x7302f7:c.instructions+=601;goto B7302f7;
case 0x7302fb:c.instructions+=600;goto B7302fb;
case 0x7302fe:c.instructions+=599;goto B7302fe;
case 0x730302:c.instructions+=598;goto B730302;
case 0x730305:c.instructions+=597;goto B730305;
case 0x730309:c.instructions+=596;goto B730309;
case 0x73030c:c.instructions+=595;goto B73030c;
case 0x73030f:c.instructions+=594;goto B73030f;
case 0x730312:c.instructions+=593;goto B730312;
case 0x730315:c.instructions+=592;goto B730315;
case 0x730318:c.instructions+=591;goto B730318;
case 0x73031b:c.instructions+=590;goto B73031b;
case 0x73031f:c.instructions+=589;goto B73031f;
case 0x730322:c.instructions+=588;goto B730322;
case 0x730326:c.instructions+=587;goto B730326;
case 0x730329:c.instructions+=586;goto B730329;
case 0x73032d:c.instructions+=585;goto B73032d;
case 0x730330:c.instructions+=584;goto B730330;
case 0x730334:c.instructions+=583;goto B730334;
case 0x730337:c.instructions+=582;goto B730337;
case 0x73033b:c.instructions+=581;goto B73033b;
case 0x73033e:c.instructions+=580;goto B73033e;
case 0x730342:c.instructions+=579;goto B730342;
case 0x730345:c.instructions+=578;goto B730345;
case 0x730348:c.instructions+=577;goto B730348;
case 0x73034c:c.instructions+=576;goto B73034c;
case 0x730350:c.instructions+=575;goto B730350;
case 0x730353:c.instructions+=574;goto B730353;
case 0x730357:c.instructions+=573;goto B730357;
case 0x73035b:c.instructions+=572;goto B73035b;
case 0x73035e:c.instructions+=571;goto B73035e;
case 0x730362:c.instructions+=570;goto B730362;
case 0x730365:c.instructions+=569;goto B730365;
case 0x730369:c.instructions+=568;goto B730369;
case 0x73036c:c.instructions+=567;goto B73036c;
case 0x730371:c.instructions+=566;goto B730371;
case 0x730374:c.instructions+=565;goto B730374;
case 0x730379:c.instructions+=564;goto B730379;
case 0x73037c:c.instructions+=563;goto B73037c;
case 0x730381:c.instructions+=562;goto B730381;
case 0x730384:c.instructions+=561;goto B730384;
case 0x730388:c.instructions+=560;goto B730388;
case 0x73038b:c.instructions+=559;goto B73038b;
case 0x73038f:c.instructions+=558;goto B73038f;
case 0x730392:c.instructions+=557;goto B730392;
case 0x730396:c.instructions+=556;goto B730396;
case 0x730399:c.instructions+=555;goto B730399;
case 0x73039c:c.instructions+=554;goto B73039c;
case 0x73039f:c.instructions+=553;goto B73039f;
case 0x7303a3:c.instructions+=552;goto B7303a3;
case 0x7303a6:c.instructions+=551;goto B7303a6;
case 0x7303aa:c.instructions+=550;goto B7303aa;
case 0x7303ad:c.instructions+=549;goto B7303ad;
case 0x7303b1:c.instructions+=548;goto B7303b1;
case 0x7303b4:c.instructions+=547;goto B7303b4;
case 0x7303b7:c.instructions+=546;goto B7303b7;
case 0x7303ba:c.instructions+=545;goto B7303ba;
case 0x7303be:c.instructions+=544;goto B7303be;
case 0x7303c1:c.instructions+=543;goto B7303c1;
case 0x7303c5:c.instructions+=542;goto B7303c5;
case 0x7303c8:c.instructions+=541;goto B7303c8;
case 0x7303cb:c.instructions+=540;goto B7303cb;
case 0x7303cf:c.instructions+=539;goto B7303cf;
case 0x7303d2:c.instructions+=538;goto B7303d2;
case 0x7303d6:c.instructions+=537;goto B7303d6;
case 0x7303d9:c.instructions+=536;goto B7303d9;
case 0x7303e0:c.instructions+=535;goto B7303e0;
case 0x7303e3:c.instructions+=534;goto B7303e3;
case 0x7303e7:c.instructions+=533;goto B7303e7;
case 0x7303ea:c.instructions+=532;goto B7303ea;
case 0x7303ee:c.instructions+=531;goto B7303ee;
case 0x7303f1:c.instructions+=530;goto B7303f1;
case 0x7303f4:c.instructions+=529;goto B7303f4;
case 0x7303f7:c.instructions+=528;goto B7303f7;
case 0x7303fb:c.instructions+=527;goto B7303fb;
case 0x7303fe:c.instructions+=526;goto B7303fe;
case 0x730402:c.instructions+=525;goto B730402;
case 0x730405:c.instructions+=524;goto B730405;
case 0x730408:c.instructions+=523;goto B730408;
case 0x73040c:c.instructions+=522;goto B73040c;
case 0x73040f:c.instructions+=521;goto B73040f;
case 0x730413:c.instructions+=520;goto B730413;
case 0x730416:c.instructions+=519;goto B730416;
case 0x730419:c.instructions+=518;goto B730419;
case 0x73041d:c.instructions+=517;goto B73041d;
case 0x730420:c.instructions+=516;goto B730420;
case 0x730424:c.instructions+=515;goto B730424;
case 0x730427:c.instructions+=514;goto B730427;
case 0x73042e:c.instructions+=513;goto B73042e;
case 0x730431:c.instructions+=512;goto B730431;
case 0x730434:c.instructions+=511;goto B730434;
case 0x730438:c.instructions+=510;goto B730438;
case 0x73043b:c.instructions+=509;goto B73043b;
case 0x73043f:c.instructions+=508;goto B73043f;
case 0x730442:c.instructions+=507;goto B730442;
case 0x730445:c.instructions+=506;goto B730445;
case 0x730449:c.instructions+=505;goto B730449;
case 0x73044c:c.instructions+=504;goto B73044c;
case 0x730450:c.instructions+=503;goto B730450;
case 0x730453:c.instructions+=502;goto B730453;
case 0x730456:c.instructions+=501;goto B730456;
case 0x73045a:c.instructions+=500;goto B73045a;
case 0x73045d:c.instructions+=499;goto B73045d;
case 0x730461:c.instructions+=498;goto B730461;
case 0x730464:c.instructions+=497;goto B730464;
case 0x73046b:c.instructions+=496;goto B73046b;
case 0x73046e:c.instructions+=495;goto B73046e;
case 0x730471:c.instructions+=494;goto B730471;
case 0x730478:c.instructions+=493;goto B730478;
case 0x73047b:c.instructions+=492;goto B73047b;
case 0x730482:c.instructions+=491;goto B730482;
case 0x730485:c.instructions+=490;goto B730485;
case 0x730488:c.instructions+=489;goto B730488;
case 0x73048c:c.instructions+=488;goto B73048c;
case 0x73048f:c.instructions+=487;goto B73048f;
case 0x730493:c.instructions+=486;goto B730493;
case 0x730496:c.instructions+=485;goto B730496;
case 0x730499:c.instructions+=484;goto B730499;
case 0x7304a0:c.instructions+=483;goto B7304a0;
case 0x7304a3:c.instructions+=482;goto B7304a3;
case 0x7304aa:c.instructions+=481;goto B7304aa;
case 0x7304ad:c.instructions+=480;goto B7304ad;
case 0x7304b4:c.instructions+=479;goto B7304b4;
case 0x7304b7:c.instructions+=478;goto B7304b7;
case 0x7304ba:c.instructions+=477;goto B7304ba;
case 0x7304c1:c.instructions+=476;goto B7304c1;
case 0x7304c4:c.instructions+=475;goto B7304c4;
case 0x7304cb:c.instructions+=474;goto B7304cb;
case 0x7304ce:c.instructions+=473;goto B7304ce;
case 0x7304d1:c.instructions+=472;goto B7304d1;
case 0x7304d5:c.instructions+=471;goto B7304d5;
case 0x7304d8:c.instructions+=470;goto B7304d8;
case 0x7304dc:c.instructions+=469;goto B7304dc;
case 0x7304df:c.instructions+=468;goto B7304df;
case 0x7304e2:c.instructions+=467;goto B7304e2;
case 0x7304e9:c.instructions+=466;goto B7304e9;
case 0x7304ec:c.instructions+=465;goto B7304ec;
case 0x7304f3:c.instructions+=464;goto B7304f3;
case 0x7304f6:c.instructions+=463;goto B7304f6;
case 0x7304fd:c.instructions+=462;goto B7304fd;
case 0x730500:c.instructions+=461;goto B730500;
case 0x730503:c.instructions+=460;goto B730503;
case 0x73050a:c.instructions+=459;goto B73050a;
case 0x73050d:c.instructions+=458;goto B73050d;
case 0x730514:c.instructions+=457;goto B730514;
case 0x730517:c.instructions+=456;goto B730517;
case 0x73051a:c.instructions+=455;goto B73051a;
case 0x73051e:c.instructions+=454;goto B73051e;
case 0x730521:c.instructions+=453;goto B730521;
case 0x730525:c.instructions+=452;goto B730525;
case 0x730528:c.instructions+=451;goto B730528;
case 0x73052b:c.instructions+=450;goto B73052b;
case 0x730532:c.instructions+=449;goto B730532;
case 0x730535:c.instructions+=448;goto B730535;
case 0x73053c:c.instructions+=447;goto B73053c;
case 0x73053f:c.instructions+=446;goto B73053f;
case 0x730546:c.instructions+=445;goto B730546;
case 0x730549:c.instructions+=444;goto B730549;
case 0x73054c:c.instructions+=443;goto B73054c;
case 0x730553:c.instructions+=442;goto B730553;
case 0x730556:c.instructions+=441;goto B730556;
case 0x73055d:c.instructions+=440;goto B73055d;
case 0x730560:c.instructions+=439;goto B730560;
case 0x730563:c.instructions+=438;goto B730563;
case 0x730567:c.instructions+=437;goto B730567;
case 0x73056a:c.instructions+=436;goto B73056a;
case 0x73056e:c.instructions+=435;goto B73056e;
case 0x730571:c.instructions+=434;goto B730571;
case 0x730574:c.instructions+=433;goto B730574;
case 0x73057b:c.instructions+=432;goto B73057b;
case 0x73057e:c.instructions+=431;goto B73057e;
case 0x730585:c.instructions+=430;goto B730585;
case 0x730588:c.instructions+=429;goto B730588;
case 0x73058f:c.instructions+=428;goto B73058f;
case 0x730592:c.instructions+=427;goto B730592;
case 0x730595:c.instructions+=426;goto B730595;
case 0x73059c:c.instructions+=425;goto B73059c;
case 0x73059f:c.instructions+=424;goto B73059f;
case 0x7305a6:c.instructions+=423;goto B7305a6;
case 0x7305a9:c.instructions+=422;goto B7305a9;
case 0x7305ac:c.instructions+=421;goto B7305ac;
case 0x7305b0:c.instructions+=420;goto B7305b0;
case 0x7305b3:c.instructions+=419;goto B7305b3;
case 0x7305b7:c.instructions+=418;goto B7305b7;
case 0x7305ba:c.instructions+=417;goto B7305ba;
case 0x7305bd:c.instructions+=416;goto B7305bd;
case 0x7305c4:c.instructions+=415;goto B7305c4;
case 0x7305c7:c.instructions+=414;goto B7305c7;
case 0x7305ce:c.instructions+=413;goto B7305ce;
case 0x7305d1:c.instructions+=412;goto B7305d1;
case 0x7305d5:c.instructions+=411;goto B7305d5;
case 0x7305d8:c.instructions+=410;goto B7305d8;
case 0x7305db:c.instructions+=409;goto B7305db;
case 0x7305e2:c.instructions+=408;goto B7305e2;
case 0x7305e5:c.instructions+=407;goto B7305e5;
case 0x7305ec:c.instructions+=406;goto B7305ec;
case 0x7305ef:c.instructions+=405;goto B7305ef;
case 0x7305f2:c.instructions+=404;goto B7305f2;
case 0x7305f6:c.instructions+=403;goto B7305f6;
case 0x7305f9:c.instructions+=402;goto B7305f9;
case 0x7305fd:c.instructions+=401;goto B7305fd;
case 0x730600:c.instructions+=400;goto B730600;
case 0x730603:c.instructions+=399;goto B730603;
case 0x73060a:c.instructions+=398;goto B73060a;
case 0x73060d:c.instructions+=397;goto B73060d;
case 0x730614:c.instructions+=396;goto B730614;
case 0x730617:c.instructions+=395;goto B730617;
case 0x73061a:c.instructions+=394;goto B73061a;
case 0x73061d:c.instructions+=393;goto B73061d;
case 0x730620:c.instructions+=392;goto B730620;
case 0x730623:c.instructions+=391;goto B730623;
case 0x73062a:c.instructions+=390;goto B73062a;
case 0x73062d:c.instructions+=389;goto B73062d;
case 0x730634:c.instructions+=388;goto B730634;
case 0x730637:c.instructions+=387;goto B730637;
case 0x73063a:c.instructions+=386;goto B73063a;
case 0x73063e:c.instructions+=385;goto B73063e;
case 0x730641:c.instructions+=384;goto B730641;
case 0x730645:c.instructions+=383;goto B730645;
case 0x730648:c.instructions+=382;goto B730648;
case 0x73064b:c.instructions+=381;goto B73064b;
case 0x730652:c.instructions+=380;goto B730652;
case 0x730655:c.instructions+=379;goto B730655;
case 0x73065c:c.instructions+=378;goto B73065c;
case 0x73065f:c.instructions+=377;goto B73065f;
case 0x730663:c.instructions+=376;goto B730663;
case 0x730666:c.instructions+=375;goto B730666;
case 0x730669:c.instructions+=374;goto B730669;
case 0x730670:c.instructions+=373;goto B730670;
case 0x730673:c.instructions+=372;goto B730673;
case 0x73067a:c.instructions+=371;goto B73067a;
case 0x73067d:c.instructions+=370;goto B73067d;
case 0x730680:c.instructions+=369;goto B730680;
case 0x730684:c.instructions+=368;goto B730684;
case 0x730687:c.instructions+=367;goto B730687;
case 0x73068b:c.instructions+=366;goto B73068b;
case 0x73068e:c.instructions+=365;goto B73068e;
case 0x730691:c.instructions+=364;goto B730691;
case 0x730698:c.instructions+=363;goto B730698;
case 0x73069b:c.instructions+=362;goto B73069b;
case 0x7306a2:c.instructions+=361;goto B7306a2;
case 0x7306a5:c.instructions+=360;goto B7306a5;
case 0x7306ac:c.instructions+=359;goto B7306ac;
case 0x7306af:c.instructions+=358;goto B7306af;
case 0x7306b2:c.instructions+=357;goto B7306b2;
case 0x7306b9:c.instructions+=356;goto B7306b9;
case 0x7306bc:c.instructions+=355;goto B7306bc;
case 0x7306c3:c.instructions+=354;goto B7306c3;
case 0x7306c6:c.instructions+=353;goto B7306c6;
case 0x7306c9:c.instructions+=352;goto B7306c9;
case 0x7306cd:c.instructions+=351;goto B7306cd;
case 0x7306d0:c.instructions+=350;goto B7306d0;
case 0x7306d4:c.instructions+=349;goto B7306d4;
case 0x7306d7:c.instructions+=348;goto B7306d7;
case 0x7306da:c.instructions+=347;goto B7306da;
case 0x7306e1:c.instructions+=346;goto B7306e1;
case 0x7306e4:c.instructions+=345;goto B7306e4;
case 0x7306eb:c.instructions+=344;goto B7306eb;
case 0x7306ee:c.instructions+=343;goto B7306ee;
case 0x7306f5:c.instructions+=342;goto B7306f5;
case 0x7306f8:c.instructions+=341;goto B7306f8;
case 0x7306fb:c.instructions+=340;goto B7306fb;
case 0x730702:c.instructions+=339;goto B730702;
case 0x730705:c.instructions+=338;goto B730705;
case 0x73070c:c.instructions+=337;goto B73070c;
case 0x73070f:c.instructions+=336;goto B73070f;
case 0x730712:c.instructions+=335;goto B730712;
case 0x730716:c.instructions+=334;goto B730716;
case 0x730719:c.instructions+=333;goto B730719;
case 0x73071d:c.instructions+=332;goto B73071d;
case 0x730720:c.instructions+=331;goto B730720;
case 0x730723:c.instructions+=330;goto B730723;
case 0x73072a:c.instructions+=329;goto B73072a;
case 0x73072d:c.instructions+=328;goto B73072d;
case 0x730734:c.instructions+=327;goto B730734;
case 0x730737:c.instructions+=326;goto B730737;
case 0x73073e:c.instructions+=325;goto B73073e;
case 0x730741:c.instructions+=324;goto B730741;
case 0x730744:c.instructions+=323;goto B730744;
case 0x73074b:c.instructions+=322;goto B73074b;
case 0x73074e:c.instructions+=321;goto B73074e;
case 0x730755:c.instructions+=320;goto B730755;
case 0x730758:c.instructions+=319;goto B730758;
case 0x73075b:c.instructions+=318;goto B73075b;
case 0x73075f:c.instructions+=317;goto B73075f;
case 0x730762:c.instructions+=316;goto B730762;
case 0x730766:c.instructions+=315;goto B730766;
case 0x730769:c.instructions+=314;goto B730769;
case 0x73076c:c.instructions+=313;goto B73076c;
case 0x730773:c.instructions+=312;goto B730773;
case 0x730776:c.instructions+=311;goto B730776;
case 0x73077d:c.instructions+=310;goto B73077d;
case 0x730780:c.instructions+=309;goto B730780;
case 0x730787:c.instructions+=308;goto B730787;
case 0x73078a:c.instructions+=307;goto B73078a;
case 0x73078d:c.instructions+=306;goto B73078d;
case 0x730794:c.instructions+=305;goto B730794;
case 0x730797:c.instructions+=304;goto B730797;
case 0x73079e:c.instructions+=303;goto B73079e;
case 0x7307a1:c.instructions+=302;goto B7307a1;
case 0x7307a4:c.instructions+=301;goto B7307a4;
case 0x7307a8:c.instructions+=300;goto B7307a8;
case 0x7307ab:c.instructions+=299;goto B7307ab;
case 0x7307af:c.instructions+=298;goto B7307af;
case 0x7307b2:c.instructions+=297;goto B7307b2;
case 0x7307b5:c.instructions+=296;goto B7307b5;
case 0x7307bc:c.instructions+=295;goto B7307bc;
case 0x7307bf:c.instructions+=294;goto B7307bf;
case 0x7307c6:c.instructions+=293;goto B7307c6;
case 0x7307c9:c.instructions+=292;goto B7307c9;
case 0x7307d0:c.instructions+=291;goto B7307d0;
case 0x7307d3:c.instructions+=290;goto B7307d3;
case 0x7307d6:c.instructions+=289;goto B7307d6;
case 0x7307d9:c.instructions+=288;goto B7307d9;
case 0x7307dc:c.instructions+=287;goto B7307dc;
case 0x7307df:c.instructions+=286;goto B7307df;
case 0x7307e3:c.instructions+=285;goto B7307e3;
case 0x7307e6:c.instructions+=284;goto B7307e6;
case 0x7307ea:c.instructions+=283;goto B7307ea;
case 0x7307ed:c.instructions+=282;goto B7307ed;
case 0x7307f3:c.instructions+=281;goto B7307f3;
case 0x7307f7:c.instructions+=280;goto B7307f7;
case 0x7307fc:c.instructions+=279;goto B7307fc;
case 0x730801:c.instructions+=278;goto B730801;
case 0x730806:c.instructions+=277;goto B730806;
case 0x730809:c.instructions+=276;goto B730809;
case 0x73080d:c.instructions+=275;goto B73080d;
case 0x730810:c.instructions+=274;goto B730810;
case 0x730814:c.instructions+=273;goto B730814;
case 0x730817:c.instructions+=272;goto B730817;
case 0x73081b:c.instructions+=271;goto B73081b;
case 0x73081e:c.instructions+=270;goto B73081e;
case 0x730825:c.instructions+=269;goto B730825;
case 0x730828:c.instructions+=268;goto B730828;
case 0x73082b:c.instructions+=267;goto B73082b;
case 0x73082f:c.instructions+=266;goto B73082f;
case 0x730832:c.instructions+=265;goto B730832;
case 0x730836:c.instructions+=264;goto B730836;
case 0x730839:c.instructions+=263;goto B730839;
case 0x73083c:c.instructions+=262;goto B73083c;
case 0x730840:c.instructions+=261;goto B730840;
case 0x730843:c.instructions+=260;goto B730843;
case 0x730847:c.instructions+=259;goto B730847;
case 0x73084a:c.instructions+=258;goto B73084a;
case 0x73084d:c.instructions+=257;goto B73084d;
case 0x730851:c.instructions+=256;goto B730851;
case 0x730854:c.instructions+=255;goto B730854;
case 0x730858:c.instructions+=254;goto B730858;
case 0x73085b:c.instructions+=253;goto B73085b;
case 0x730862:c.instructions+=252;goto B730862;
case 0x730865:c.instructions+=251;goto B730865;
case 0x730868:c.instructions+=250;goto B730868;
case 0x73086c:c.instructions+=249;goto B73086c;
case 0x73086f:c.instructions+=248;goto B73086f;
case 0x730873:c.instructions+=247;goto B730873;
case 0x730876:c.instructions+=246;goto B730876;
case 0x730879:c.instructions+=245;goto B730879;
case 0x73087d:c.instructions+=244;goto B73087d;
case 0x730880:c.instructions+=243;goto B730880;
case 0x730884:c.instructions+=242;goto B730884;
case 0x730887:c.instructions+=241;goto B730887;
case 0x73088a:c.instructions+=240;goto B73088a;
case 0x73088e:c.instructions+=239;goto B73088e;
case 0x730891:c.instructions+=238;goto B730891;
case 0x730895:c.instructions+=237;goto B730895;
case 0x730898:c.instructions+=236;goto B730898;
case 0x73089f:c.instructions+=235;goto B73089f;
case 0x7308a2:c.instructions+=234;goto B7308a2;
case 0x7308a5:c.instructions+=233;goto B7308a5;
case 0x7308a9:c.instructions+=232;goto B7308a9;
case 0x7308ac:c.instructions+=231;goto B7308ac;
case 0x7308b0:c.instructions+=230;goto B7308b0;
case 0x7308b3:c.instructions+=229;goto B7308b3;
case 0x7308b6:c.instructions+=228;goto B7308b6;
case 0x7308ba:c.instructions+=227;goto B7308ba;
case 0x7308bd:c.instructions+=226;goto B7308bd;
case 0x7308c1:c.instructions+=225;goto B7308c1;
case 0x7308c4:c.instructions+=224;goto B7308c4;
case 0x7308c7:c.instructions+=223;goto B7308c7;
case 0x7308cb:c.instructions+=222;goto B7308cb;
case 0x7308ce:c.instructions+=221;goto B7308ce;
case 0x7308d2:c.instructions+=220;goto B7308d2;
case 0x7308d5:c.instructions+=219;goto B7308d5;
case 0x7308dc:c.instructions+=218;goto B7308dc;
case 0x7308df:c.instructions+=217;goto B7308df;
case 0x7308e2:c.instructions+=216;goto B7308e2;
case 0x7308e9:c.instructions+=215;goto B7308e9;
case 0x7308ec:c.instructions+=214;goto B7308ec;
case 0x7308f3:c.instructions+=213;goto B7308f3;
case 0x7308f6:c.instructions+=212;goto B7308f6;
case 0x7308f9:c.instructions+=211;goto B7308f9;
case 0x7308fd:c.instructions+=210;goto B7308fd;
case 0x730900:c.instructions+=209;goto B730900;
case 0x730904:c.instructions+=208;goto B730904;
case 0x730907:c.instructions+=207;goto B730907;
case 0x73090a:c.instructions+=206;goto B73090a;
case 0x730911:c.instructions+=205;goto B730911;
case 0x730914:c.instructions+=204;goto B730914;
case 0x73091b:c.instructions+=203;goto B73091b;
case 0x73091e:c.instructions+=202;goto B73091e;
case 0x730925:c.instructions+=201;goto B730925;
case 0x730928:c.instructions+=200;goto B730928;
case 0x73092b:c.instructions+=199;goto B73092b;
case 0x730932:c.instructions+=198;goto B730932;
case 0x730935:c.instructions+=197;goto B730935;
case 0x73093c:c.instructions+=196;goto B73093c;
case 0x73093f:c.instructions+=195;goto B73093f;
case 0x730942:c.instructions+=194;goto B730942;
case 0x730946:c.instructions+=193;goto B730946;
case 0x730949:c.instructions+=192;goto B730949;
case 0x73094d:c.instructions+=191;goto B73094d;
case 0x730950:c.instructions+=190;goto B730950;
case 0x730953:c.instructions+=189;goto B730953;
case 0x73095a:c.instructions+=188;goto B73095a;
case 0x73095d:c.instructions+=187;goto B73095d;
case 0x730964:c.instructions+=186;goto B730964;
case 0x730967:c.instructions+=185;goto B730967;
case 0x73096e:c.instructions+=184;goto B73096e;
case 0x730971:c.instructions+=183;goto B730971;
case 0x730974:c.instructions+=182;goto B730974;
case 0x73097b:c.instructions+=181;goto B73097b;
case 0x73097e:c.instructions+=180;goto B73097e;
case 0x730985:c.instructions+=179;goto B730985;
case 0x730988:c.instructions+=178;goto B730988;
case 0x73098b:c.instructions+=177;goto B73098b;
case 0x73098f:c.instructions+=176;goto B73098f;
case 0x730992:c.instructions+=175;goto B730992;
case 0x730996:c.instructions+=174;goto B730996;
case 0x730999:c.instructions+=173;goto B730999;
case 0x73099c:c.instructions+=172;goto B73099c;
case 0x7309a3:c.instructions+=171;goto B7309a3;
case 0x7309a6:c.instructions+=170;goto B7309a6;
case 0x7309ad:c.instructions+=169;goto B7309ad;
case 0x7309b0:c.instructions+=168;goto B7309b0;
case 0x7309b7:c.instructions+=167;goto B7309b7;
case 0x7309ba:c.instructions+=166;goto B7309ba;
case 0x7309bd:c.instructions+=165;goto B7309bd;
case 0x7309c4:c.instructions+=164;goto B7309c4;
case 0x7309c7:c.instructions+=163;goto B7309c7;
case 0x7309ce:c.instructions+=162;goto B7309ce;
case 0x7309d1:c.instructions+=161;goto B7309d1;
case 0x7309d4:c.instructions+=160;goto B7309d4;
case 0x7309d8:c.instructions+=159;goto B7309d8;
case 0x7309db:c.instructions+=158;goto B7309db;
case 0x7309df:c.instructions+=157;goto B7309df;
case 0x7309e2:c.instructions+=156;goto B7309e2;
case 0x7309e5:c.instructions+=155;goto B7309e5;
case 0x7309ec:c.instructions+=154;goto B7309ec;
case 0x7309ef:c.instructions+=153;goto B7309ef;
case 0x7309f6:c.instructions+=152;goto B7309f6;
case 0x7309f9:c.instructions+=151;goto B7309f9;
case 0x7309fd:c.instructions+=150;goto B7309fd;
case 0x730a00:c.instructions+=149;goto B730a00;
case 0x730a03:c.instructions+=148;goto B730a03;
case 0x730a0a:c.instructions+=147;goto B730a0a;
case 0x730a0d:c.instructions+=146;goto B730a0d;
case 0x730a14:c.instructions+=145;goto B730a14;
case 0x730a17:c.instructions+=144;goto B730a17;
case 0x730a1a:c.instructions+=143;goto B730a1a;
case 0x730a1e:c.instructions+=142;goto B730a1e;
case 0x730a21:c.instructions+=141;goto B730a21;
case 0x730a25:c.instructions+=140;goto B730a25;
case 0x730a28:c.instructions+=139;goto B730a28;
case 0x730a2b:c.instructions+=138;goto B730a2b;
case 0x730a32:c.instructions+=137;goto B730a32;
case 0x730a35:c.instructions+=136;goto B730a35;
case 0x730a3c:c.instructions+=135;goto B730a3c;
case 0x730a3f:c.instructions+=134;goto B730a3f;
case 0x730a43:c.instructions+=133;goto B730a43;
case 0x730a46:c.instructions+=132;goto B730a46;
case 0x730a49:c.instructions+=131;goto B730a49;
case 0x730a50:c.instructions+=130;goto B730a50;
case 0x730a53:c.instructions+=129;goto B730a53;
case 0x730a5a:c.instructions+=128;goto B730a5a;
case 0x730a5d:c.instructions+=127;goto B730a5d;
case 0x730a60:c.instructions+=126;goto B730a60;
case 0x730a64:c.instructions+=125;goto B730a64;
case 0x730a67:c.instructions+=124;goto B730a67;
case 0x730a6b:c.instructions+=123;goto B730a6b;
case 0x730a6e:c.instructions+=122;goto B730a6e;
case 0x730a71:c.instructions+=121;goto B730a71;
case 0x730a78:c.instructions+=120;goto B730a78;
case 0x730a7b:c.instructions+=119;goto B730a7b;
case 0x730a82:c.instructions+=118;goto B730a82;
case 0x730a85:c.instructions+=117;goto B730a85;
case 0x730a89:c.instructions+=116;goto B730a89;
case 0x730a8c:c.instructions+=115;goto B730a8c;
case 0x730a8f:c.instructions+=114;goto B730a8f;
case 0x730a96:c.instructions+=113;goto B730a96;
case 0x730a99:c.instructions+=112;goto B730a99;
case 0x730aa0:c.instructions+=111;goto B730aa0;
case 0x730aa3:c.instructions+=110;goto B730aa3;
case 0x730aa6:c.instructions+=109;goto B730aa6;
case 0x730aaa:c.instructions+=108;goto B730aaa;
case 0x730aad:c.instructions+=107;goto B730aad;
case 0x730ab1:c.instructions+=106;goto B730ab1;
case 0x730ab4:c.instructions+=105;goto B730ab4;
case 0x730ab7:c.instructions+=104;goto B730ab7;
case 0x730abe:c.instructions+=103;goto B730abe;
case 0x730ac1:c.instructions+=102;goto B730ac1;
case 0x730ac8:c.instructions+=101;goto B730ac8;
case 0x730acb:c.instructions+=100;goto B730acb;
case 0x730acf:c.instructions+=99;goto B730acf;
case 0x730ad2:c.instructions+=98;goto B730ad2;
case 0x730ad5:c.instructions+=97;goto B730ad5;
case 0x730adc:c.instructions+=96;goto B730adc;
case 0x730adf:c.instructions+=95;goto B730adf;
case 0x730ae6:c.instructions+=94;goto B730ae6;
case 0x730ae9:c.instructions+=93;goto B730ae9;
case 0x730aec:c.instructions+=92;goto B730aec;
case 0x730af0:c.instructions+=91;goto B730af0;
case 0x730af3:c.instructions+=90;goto B730af3;
case 0x730af7:c.instructions+=89;goto B730af7;
case 0x730afa:c.instructions+=88;goto B730afa;
case 0x730afd:c.instructions+=87;goto B730afd;
case 0x730b04:c.instructions+=86;goto B730b04;
case 0x730b07:c.instructions+=85;goto B730b07;
case 0x730b0e:c.instructions+=84;goto B730b0e;
case 0x730b11:c.instructions+=83;goto B730b11;
case 0x730b18:c.instructions+=82;goto B730b18;
case 0x730b1b:c.instructions+=81;goto B730b1b;
case 0x730b1e:c.instructions+=80;goto B730b1e;
case 0x730b25:c.instructions+=79;goto B730b25;
case 0x730b28:c.instructions+=78;goto B730b28;
case 0x730b2f:c.instructions+=77;goto B730b2f;
case 0x730b32:c.instructions+=76;goto B730b32;
case 0x730b35:c.instructions+=75;goto B730b35;
case 0x730b39:c.instructions+=74;goto B730b39;
case 0x730b3c:c.instructions+=73;goto B730b3c;
case 0x730b40:c.instructions+=72;goto B730b40;
case 0x730b43:c.instructions+=71;goto B730b43;
case 0x730b46:c.instructions+=70;goto B730b46;
case 0x730b4d:c.instructions+=69;goto B730b4d;
case 0x730b50:c.instructions+=68;goto B730b50;
case 0x730b57:c.instructions+=67;goto B730b57;
case 0x730b5a:c.instructions+=66;goto B730b5a;
case 0x730b61:c.instructions+=65;goto B730b61;
case 0x730b64:c.instructions+=64;goto B730b64;
case 0x730b67:c.instructions+=63;goto B730b67;
case 0x730b6e:c.instructions+=62;goto B730b6e;
case 0x730b71:c.instructions+=61;goto B730b71;
case 0x730b78:c.instructions+=60;goto B730b78;
case 0x730b7b:c.instructions+=59;goto B730b7b;
case 0x730b7e:c.instructions+=58;goto B730b7e;
case 0x730b82:c.instructions+=57;goto B730b82;
case 0x730b85:c.instructions+=56;goto B730b85;
case 0x730b89:c.instructions+=55;goto B730b89;
case 0x730b8c:c.instructions+=54;goto B730b8c;
case 0x730b8f:c.instructions+=53;goto B730b8f;
case 0x730b96:c.instructions+=52;goto B730b96;
case 0x730b99:c.instructions+=51;goto B730b99;
case 0x730ba0:c.instructions+=50;goto B730ba0;
case 0x730ba3:c.instructions+=49;goto B730ba3;
case 0x730baa:c.instructions+=48;goto B730baa;
case 0x730bad:c.instructions+=47;goto B730bad;
case 0x730bb0:c.instructions+=46;goto B730bb0;
case 0x730bb7:c.instructions+=45;goto B730bb7;
case 0x730bba:c.instructions+=44;goto B730bba;
case 0x730bc1:c.instructions+=43;goto B730bc1;
case 0x730bc4:c.instructions+=42;goto B730bc4;
case 0x730bc7:c.instructions+=41;goto B730bc7;
case 0x730bcb:c.instructions+=40;goto B730bcb;
case 0x730bce:c.instructions+=39;goto B730bce;
case 0x730bd2:c.instructions+=38;goto B730bd2;
case 0x730bd5:c.instructions+=37;goto B730bd5;
case 0x730bd8:c.instructions+=36;goto B730bd8;
case 0x730bdf:c.instructions+=35;goto B730bdf;
case 0x730be2:c.instructions+=34;goto B730be2;
case 0x730be9:c.instructions+=33;goto B730be9;
case 0x730bec:c.instructions+=32;goto B730bec;
case 0x730bf3:c.instructions+=31;goto B730bf3;
case 0x730bf6:c.instructions+=30;goto B730bf6;
case 0x730bf9:c.instructions+=29;goto B730bf9;
case 0x730c00:c.instructions+=28;goto B730c00;
case 0x730c03:c.instructions+=27;goto B730c03;
case 0x730c0a:c.instructions+=26;goto B730c0a;
case 0x730c0d:c.instructions+=25;goto B730c0d;
case 0x730c10:c.instructions+=24;goto B730c10;
case 0x730c14:c.instructions+=23;goto B730c14;
case 0x730c17:c.instructions+=22;goto B730c17;
case 0x730c1b:c.instructions+=21;goto B730c1b;
case 0x730c1e:c.instructions+=20;goto B730c1e;
case 0x730c21:c.instructions+=19;goto B730c21;
case 0x730c28:c.instructions+=18;goto B730c28;
case 0x730c2b:c.instructions+=17;goto B730c2b;
case 0x730c32:c.instructions+=16;goto B730c32;
case 0x730c35:c.instructions+=15;goto B730c35;
case 0x730c3c:c.instructions+=14;goto B730c3c;
case 0x730c3f:c.instructions+=13;goto B730c3f;
case 0x730c42:c.instructions+=12;goto B730c42;
case 0x730c45:c.instructions+=11;goto B730c45;
case 0x730c48:c.instructions+=10;goto B730c48;
case 0x730c4b:c.instructions+=9;goto B730c4b;
case 0x730c4f:c.instructions+=8;goto B730c4f;
case 0x730c52:c.instructions+=7;goto B730c52;
case 0x730c56:c.instructions+=6;goto B730c56;
case 0x730c59:c.instructions+=5;goto B730c59;
case 0x730c60:c.instructions+=4;goto B730c60;
case 0x730c63:c.instructions+=3;goto B730c63;
case 0x730c64:c.instructions+=2;goto B730c64;
case 0x730c65:c.instructions+=1;goto B730c65;
case 0x730c66:goto L730c66;
case 0x730c67:c.instructions+=35;goto B730c67;
case 0x730c69:c.instructions+=34;goto B730c69;
case 0x730c6c:c.instructions+=33;goto B730c6c;
case 0x730c6d:c.instructions+=32;goto B730c6d;
case 0x730c6e:c.instructions+=31;goto B730c6e;
case 0x730c71:c.instructions+=30;goto B730c71;
case 0x730c75:c.instructions+=29;goto B730c75;
case 0x730c77:c.instructions+=28;goto B730c77;
case 0x730c79:c.instructions+=27;goto B730c79;
case 0x730c7d:c.instructions+=26;goto B730c7d;
case 0x730c7e:c.instructions+=25;goto B730c7e;
case 0x730c81:c.instructions+=24;goto B730c81;
case 0x730c84:c.instructions+=23;goto B730c84;
case 0x730c86:c.instructions+=22;goto B730c86;
case 0x730c89:c.instructions+=21;goto B730c89;
case 0x730c8b:c.instructions+=20;goto B730c8b;
case 0x730c8e:c.instructions+=19;goto B730c8e;
case 0x730c91:c.instructions+=18;goto B730c91;
case 0x730c94:c.instructions+=17;goto B730c94;
case 0x730c97:c.instructions+=16;goto B730c97;
case 0x730c9a:c.instructions+=15;goto B730c9a;
case 0x730c9c:c.instructions+=14;goto B730c9c;
case 0x730c9f:c.instructions+=13;goto B730c9f;
case 0x730ca2:c.instructions+=12;goto B730ca2;
case 0x730ca5:c.instructions+=11;goto B730ca5;
case 0x730ca7:c.instructions+=10;goto B730ca7;
case 0x730caa:c.instructions+=9;goto B730caa;
case 0x730cad:c.instructions+=8;goto B730cad;
case 0x730cb0:c.instructions+=7;goto B730cb0;
case 0x730cb3:c.instructions+=6;goto B730cb3;
case 0x730cb5:c.instructions+=5;goto B730cb5;
case 0x730cb6:c.instructions+=4;goto B730cb6;
case 0x730cb9:c.instructions+=3;goto B730cb9;
case 0x730cba:c.instructions+=2;goto B730cba;
case 0x730cbd:c.instructions+=1;goto B730cbd;
case 0x730cc2:goto L730cc2;
case 0x730cc5:c.instructions+=182;goto B730cc5;
case 0x730cc8:c.instructions+=181;goto B730cc8;
case 0x730ccb:c.instructions+=180;goto B730ccb;
case 0x730cce:c.instructions+=179;goto B730cce;
case 0x730cd4:c.instructions+=178;goto B730cd4;
case 0x730cd6:c.instructions+=177;goto B730cd6;
case 0x730cd9:c.instructions+=176;goto B730cd9;
case 0x730cdb:c.instructions+=175;goto B730cdb;
case 0x730cde:c.instructions+=174;goto B730cde;
case 0x730ce1:c.instructions+=173;goto B730ce1;
case 0x730ce4:c.instructions+=172;goto B730ce4;
case 0x730ce8:c.instructions+=171;goto B730ce8;
case 0x730cec:c.instructions+=170;goto B730cec;
case 0x730cf0:c.instructions+=169;goto B730cf0;
case 0x730cf4:c.instructions+=168;goto B730cf4;
case 0x730cf8:c.instructions+=167;goto B730cf8;
case 0x730cfc:c.instructions+=166;goto B730cfc;
case 0x730cff:c.instructions+=165;goto B730cff;
case 0x730d03:c.instructions+=164;goto B730d03;
case 0x730d06:c.instructions+=163;goto B730d06;
case 0x730d0a:c.instructions+=162;goto B730d0a;
case 0x730d0d:c.instructions+=161;goto B730d0d;
case 0x730d11:c.instructions+=160;goto B730d11;
case 0x730d14:c.instructions+=159;goto B730d14;
case 0x730d18:c.instructions+=158;goto B730d18;
case 0x730d1c:c.instructions+=157;goto B730d1c;
case 0x730d20:c.instructions+=156;goto B730d20;
case 0x730d23:c.instructions+=155;goto B730d23;
case 0x730d27:c.instructions+=154;goto B730d27;
case 0x730d2b:c.instructions+=153;goto B730d2b;
case 0x730d2f:c.instructions+=152;goto B730d2f;
case 0x730d32:c.instructions+=151;goto B730d32;
case 0x730d36:c.instructions+=150;goto B730d36;
case 0x730d39:c.instructions+=149;goto B730d39;
case 0x730d3c:c.instructions+=148;goto B730d3c;
case 0x730d3f:c.instructions+=147;goto B730d3f;
case 0x730d46:c.instructions+=146;goto B730d46;
case 0x730d49:c.instructions+=145;goto B730d49;
case 0x730d50:c.instructions+=144;goto B730d50;
case 0x730d53:c.instructions+=143;goto B730d53;
case 0x730d5a:c.instructions+=142;goto B730d5a;
case 0x730d5d:c.instructions+=141;goto B730d5d;
case 0x730d64:c.instructions+=140;goto B730d64;
case 0x730d68:c.instructions+=139;goto B730d68;
case 0x730d6c:c.instructions+=138;goto B730d6c;
case 0x730d6f:c.instructions+=137;goto B730d6f;
case 0x730d73:c.instructions+=136;goto B730d73;
case 0x730d77:c.instructions+=135;goto B730d77;
case 0x730d7b:c.instructions+=134;goto B730d7b;
case 0x730d7e:c.instructions+=133;goto B730d7e;
case 0x730d82:c.instructions+=132;goto B730d82;
case 0x730d85:c.instructions+=131;goto B730d85;
case 0x730d89:c.instructions+=130;goto B730d89;
case 0x730d8c:c.instructions+=129;goto B730d8c;
case 0x730d93:c.instructions+=128;goto B730d93;
case 0x730d96:c.instructions+=127;goto B730d96;
case 0x730d9d:c.instructions+=126;goto B730d9d;
case 0x730da0:c.instructions+=125;goto B730da0;
case 0x730da7:c.instructions+=124;goto B730da7;
case 0x730daa:c.instructions+=123;goto B730daa;
case 0x730db1:c.instructions+=122;goto B730db1;
case 0x730db5:c.instructions+=121;goto B730db5;
case 0x730db9:c.instructions+=120;goto B730db9;
case 0x730dbc:c.instructions+=119;goto B730dbc;
case 0x730dc0:c.instructions+=118;goto B730dc0;
case 0x730dc4:c.instructions+=117;goto B730dc4;
case 0x730dc8:c.instructions+=116;goto B730dc8;
case 0x730dcb:c.instructions+=115;goto B730dcb;
case 0x730dcf:c.instructions+=114;goto B730dcf;
case 0x730dd2:c.instructions+=113;goto B730dd2;
case 0x730dd6:c.instructions+=112;goto B730dd6;
case 0x730dd9:c.instructions+=111;goto B730dd9;
case 0x730de0:c.instructions+=110;goto B730de0;
case 0x730de3:c.instructions+=109;goto B730de3;
case 0x730dea:c.instructions+=108;goto B730dea;
case 0x730ded:c.instructions+=107;goto B730ded;
case 0x730df4:c.instructions+=106;goto B730df4;
case 0x730df7:c.instructions+=105;goto B730df7;
case 0x730dfe:c.instructions+=104;goto B730dfe;
case 0x730e02:c.instructions+=103;goto B730e02;
case 0x730e09:c.instructions+=102;goto B730e09;
case 0x730e0c:c.instructions+=101;goto B730e0c;
case 0x730e13:c.instructions+=100;goto B730e13;
case 0x730e17:c.instructions+=99;goto B730e17;
case 0x730e1e:c.instructions+=98;goto B730e1e;
case 0x730e21:c.instructions+=97;goto B730e21;
case 0x730e28:c.instructions+=96;goto B730e28;
case 0x730e2b:c.instructions+=95;goto B730e2b;
case 0x730e2f:c.instructions+=94;goto B730e2f;
case 0x730e32:c.instructions+=93;goto B730e32;
case 0x730e39:c.instructions+=92;goto B730e39;
case 0x730e3c:c.instructions+=91;goto B730e3c;
case 0x730e43:c.instructions+=90;goto B730e43;
case 0x730e46:c.instructions+=89;goto B730e46;
case 0x730e4d:c.instructions+=88;goto B730e4d;
case 0x730e50:c.instructions+=87;goto B730e50;
case 0x730e57:c.instructions+=86;goto B730e57;
case 0x730e5b:c.instructions+=85;goto B730e5b;
case 0x730e62:c.instructions+=84;goto B730e62;
case 0x730e65:c.instructions+=83;goto B730e65;
case 0x730e6c:c.instructions+=82;goto B730e6c;
case 0x730e70:c.instructions+=81;goto B730e70;
case 0x730e77:c.instructions+=80;goto B730e77;
case 0x730e7a:c.instructions+=79;goto B730e7a;
case 0x730e81:c.instructions+=78;goto B730e81;
case 0x730e84:c.instructions+=77;goto B730e84;
case 0x730e88:c.instructions+=76;goto B730e88;
case 0x730e8b:c.instructions+=75;goto B730e8b;
case 0x730e92:c.instructions+=74;goto B730e92;
case 0x730e95:c.instructions+=73;goto B730e95;
case 0x730e9c:c.instructions+=72;goto B730e9c;
case 0x730e9f:c.instructions+=71;goto B730e9f;
case 0x730ea6:c.instructions+=70;goto B730ea6;
case 0x730ea9:c.instructions+=69;goto B730ea9;
case 0x730eb0:c.instructions+=68;goto B730eb0;
case 0x730eb4:c.instructions+=67;goto B730eb4;
case 0x730ebb:c.instructions+=66;goto B730ebb;
case 0x730ebe:c.instructions+=65;goto B730ebe;
case 0x730ec5:c.instructions+=64;goto B730ec5;
case 0x730ec9:c.instructions+=63;goto B730ec9;
case 0x730ed0:c.instructions+=62;goto B730ed0;
case 0x730ed3:c.instructions+=61;goto B730ed3;
case 0x730eda:c.instructions+=60;goto B730eda;
case 0x730edd:c.instructions+=59;goto B730edd;
case 0x730ee1:c.instructions+=58;goto B730ee1;
case 0x730ee4:c.instructions+=57;goto B730ee4;
case 0x730eeb:c.instructions+=56;goto B730eeb;
case 0x730eee:c.instructions+=55;goto B730eee;
case 0x730ef5:c.instructions+=54;goto B730ef5;
case 0x730ef8:c.instructions+=53;goto B730ef8;
case 0x730eff:c.instructions+=52;goto B730eff;
case 0x730f02:c.instructions+=51;goto B730f02;
case 0x730f09:c.instructions+=50;goto B730f09;
case 0x730f0d:c.instructions+=49;goto B730f0d;
case 0x730f14:c.instructions+=48;goto B730f14;
case 0x730f17:c.instructions+=47;goto B730f17;
case 0x730f1e:c.instructions+=46;goto B730f1e;
case 0x730f22:c.instructions+=45;goto B730f22;
case 0x730f29:c.instructions+=44;goto B730f29;
case 0x730f2c:c.instructions+=43;goto B730f2c;
case 0x730f33:c.instructions+=42;goto B730f33;
case 0x730f36:c.instructions+=41;goto B730f36;
case 0x730f3a:c.instructions+=40;goto B730f3a;
case 0x730f3d:c.instructions+=39;goto B730f3d;
case 0x730f44:c.instructions+=38;goto B730f44;
case 0x730f47:c.instructions+=37;goto B730f47;
case 0x730f4e:c.instructions+=36;goto B730f4e;
case 0x730f51:c.instructions+=35;goto B730f51;
case 0x730f58:c.instructions+=34;goto B730f58;
case 0x730f5b:c.instructions+=33;goto B730f5b;
case 0x730f62:c.instructions+=32;goto B730f62;
case 0x730f66:c.instructions+=31;goto B730f66;
case 0x730f6d:c.instructions+=30;goto B730f6d;
case 0x730f70:c.instructions+=29;goto B730f70;
case 0x730f77:c.instructions+=28;goto B730f77;
case 0x730f7b:c.instructions+=27;goto B730f7b;
case 0x730f82:c.instructions+=26;goto B730f82;
case 0x730f85:c.instructions+=25;goto B730f85;
case 0x730f8c:c.instructions+=24;goto B730f8c;
case 0x730f8f:c.instructions+=23;goto B730f8f;
case 0x730f93:c.instructions+=22;goto B730f93;
case 0x730f96:c.instructions+=21;goto B730f96;
case 0x730f9d:c.instructions+=20;goto B730f9d;
case 0x730fa0:c.instructions+=19;goto B730fa0;
case 0x730fa7:c.instructions+=18;goto B730fa7;
case 0x730faa:c.instructions+=17;goto B730faa;
case 0x730fb1:c.instructions+=16;goto B730fb1;
case 0x730fb4:c.instructions+=15;goto B730fb4;
case 0x730fbb:c.instructions+=14;goto B730fbb;
case 0x730fbf:c.instructions+=13;goto B730fbf;
case 0x730fc6:c.instructions+=12;goto B730fc6;
case 0x730fc9:c.instructions+=11;goto B730fc9;
case 0x730fd0:c.instructions+=10;goto B730fd0;
case 0x730fd4:c.instructions+=9;goto B730fd4;
case 0x730fdb:c.instructions+=8;goto B730fdb;
case 0x730fde:c.instructions+=7;goto B730fde;
case 0x730fe5:c.instructions+=6;goto B730fe5;
case 0x730fe8:c.instructions+=5;goto B730fe8;
case 0x730fec:c.instructions+=4;goto B730fec;
case 0x730fef:c.instructions+=3;goto B730fef;
case 0x730ff6:c.instructions+=2;goto B730ff6;
case 0x730ff9:c.instructions+=1;goto B730ff9;
default:missing_instruction(c.pc);}
B730002:L730002:{c.instructions+=81;NFSU2_TR(0x730002);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730004:{NFSU2_TR(0x730004);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730007:{NFSU2_TR(0x730007);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B73000a:{NFSU2_TR(0x73000a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73000e:{NFSU2_TR(0x73000e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730012:{NFSU2_TR(0x730012);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730015:{NFSU2_TR(0x730015);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730018:{NFSU2_TR(0x730018);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73001c:{NFSU2_TR(0x73001c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730020:{NFSU2_TR(0x730020);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730023:{NFSU2_TR(0x730023);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730026:{NFSU2_TR(0x730026);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73002a:{NFSU2_TR(0x73002a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73002e:{NFSU2_TR(0x73002e);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730031:{NFSU2_TR(0x730031);
{u32 ea_=u32(r4(R+20)+u32(40u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730034:{NFSU2_TR(0x730034);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73003a:{NFSU2_TR(0x73003a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73003e:{NFSU2_TR(0x73003e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730042:{NFSU2_TR(0x730042);
{u32 ea_=u32(r4(R+0)+u32(1720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730048:{NFSU2_TR(0x730048);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73004a:{NFSU2_TR(0x73004a);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73004d:{NFSU2_TR(0x73004d);
{u32 ea_=u32(r4(R+0)+u32(1724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730053:{NFSU2_TR(0x730053);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B730055:{NFSU2_TR(0x730055);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730058:{NFSU2_TR(0x730058);
{u32 ea_=u32(r4(R+0)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73005e:{NFSU2_TR(0x73005e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B730060:{NFSU2_TR(0x730060);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730063:{NFSU2_TR(0x730063);
{u32 ea_=u32(r4(R+0)+u32(1732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730069:{NFSU2_TR(0x730069);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73006b:{NFSU2_TR(0x73006b);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73006e:{NFSU2_TR(0x73006e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730070:{NFSU2_TR(0x730070);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730073:{NFSU2_TR(0x730073);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730076:{NFSU2_TR(0x730076);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73007a:{NFSU2_TR(0x73007a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73007e:{NFSU2_TR(0x73007e);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730081:{NFSU2_TR(0x730081);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730084:{NFSU2_TR(0x730084);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730088:{NFSU2_TR(0x730088);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73008c:{NFSU2_TR(0x73008c);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73008f:{NFSU2_TR(0x73008f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B730092:{NFSU2_TR(0x730092);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730096:{NFSU2_TR(0x730096);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73009a:{NFSU2_TR(0x73009a);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73009d:{NFSU2_TR(0x73009d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7300a0:{NFSU2_TR(0x7300a0);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300a6:{NFSU2_TR(0x7300a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7300aa:{NFSU2_TR(0x7300aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7300ae:{NFSU2_TR(0x7300ae);
{u32 ea_=u32(r4(R+0)+u32(2008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300b4:{NFSU2_TR(0x7300b4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7300b6:{NFSU2_TR(0x7300b6);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7300b9:{NFSU2_TR(0x7300b9);
{u32 ea_=u32(r4(R+0)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300bf:{NFSU2_TR(0x7300bf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7300c1:{NFSU2_TR(0x7300c1);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7300c4:{NFSU2_TR(0x7300c4);
{u32 ea_=u32(r4(R+0)+u32(2016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300ca:{NFSU2_TR(0x7300ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7300cc:{NFSU2_TR(0x7300cc);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7300cf:{NFSU2_TR(0x7300cf);
{u32 ea_=u32(r4(R+0)+u32(2020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300d5:{NFSU2_TR(0x7300d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7300d7:{NFSU2_TR(0x7300d7);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7300da:{NFSU2_TR(0x7300da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7300dc:{NFSU2_TR(0x7300dc);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300df:{NFSU2_TR(0x7300df);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7300e2:{NFSU2_TR(0x7300e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+24),(U+0),2);
}
B7300e6:{NFSU2_TR(0x7300e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7300ea:{NFSU2_TR(0x7300ea);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300ed:{NFSU2_TR(0x7300ed);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7300f0:{NFSU2_TR(0x7300f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7300f4:{NFSU2_TR(0x7300f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7300f8:{NFSU2_TR(0x7300f8);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7300fb:{NFSU2_TR(0x7300fb);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B7300fe:{NFSU2_TR(0x7300fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730102:{NFSU2_TR(0x730102);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730106:{NFSU2_TR(0x730106);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730109:{NFSU2_TR(0x730109);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B73010c:{NFSU2_TR(0x73010c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730110:{NFSU2_TR(0x730110);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730114:{NFSU2_TR(0x730114);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B730117:{NFSU2_TR(0x730117);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B73011a:{NFSU2_TR(0x73011a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B73011b:{NFSU2_TR(0x73011b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x72fdc2u,72f);}
}
B730121:L730121:{c.instructions+=4;NFSU2_TR(0x730121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B730122:{NFSU2_TR(0x730122);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B730125:{NFSU2_TR(0x730125);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B730126:{NFSU2_TR(0x730126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B730127:L730127:{c.instructions+=7;NFSU2_TR(0x730127);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730128:{NFSU2_TR(0x730128);
__builtin_memmove((R+20),(R+16),4);
}
B73012a:{NFSU2_TR(0x73012a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73012b:{NFSU2_TR(0x73012b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73012e:{NFSU2_TR(0x73012e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+8),(U+0),4);
}
B730134:{NFSU2_TR(0x730134);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B730136:{NFSU2_TR(0x730136);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7302be;}}
}
B73013c:L73013c:{c.instructions+=7;NFSU2_TR(0x73013c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73013f:{NFSU2_TR(0x73013f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B730141:{NFSU2_TR(0x730141);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B730144:{NFSU2_TR(0x730144);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B730145:{NFSU2_TR(0x730145);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B730148:{NFSU2_TR(0x730148);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73014b:{NFSU2_TR(0x73014b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73014c:L73014c:{c.instructions+=100;NFSU2_TR(0x73014c);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73014f:{NFSU2_TR(0x73014f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730152:{NFSU2_TR(0x730152);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730154:{NFSU2_TR(0x730154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730157:{NFSU2_TR(0x730157);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73015a:{NFSU2_TR(0x73015a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73015c:{NFSU2_TR(0x73015c);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73015f:{NFSU2_TR(0x73015f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730162:{NFSU2_TR(0x730162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730165:{NFSU2_TR(0x730165);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730167:{NFSU2_TR(0x730167);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73016a:{NFSU2_TR(0x73016a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730170:{NFSU2_TR(0x730170);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730172:{NFSU2_TR(0x730172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730175:{NFSU2_TR(0x730175);
{u32 ea_=u32(r4(R+0)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73017b:{NFSU2_TR(0x73017b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730181:{NFSU2_TR(0x730181);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730187:{NFSU2_TR(0x730187);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73018a:{NFSU2_TR(0x73018a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73018d:{NFSU2_TR(0x73018d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73018f:{NFSU2_TR(0x73018f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730192:{NFSU2_TR(0x730192);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730195:{NFSU2_TR(0x730195);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730198:{NFSU2_TR(0x730198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73019e:{NFSU2_TR(0x73019e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301a1:{NFSU2_TR(0x7301a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301a7:{NFSU2_TR(0x7301a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7301a9:{NFSU2_TR(0x7301a9);
{u32 ea_=u32(r4(R+0)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7301af:{NFSU2_TR(0x7301af);
{u32 ea_=u32(r4(R+0)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7301b5:{NFSU2_TR(0x7301b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301b8:{NFSU2_TR(0x7301b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301bb:{NFSU2_TR(0x7301bb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7301bd:{NFSU2_TR(0x7301bd);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7301c0:{NFSU2_TR(0x7301c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301c3:{NFSU2_TR(0x7301c3);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7301c6:{NFSU2_TR(0x7301c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301cc:{NFSU2_TR(0x7301cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301cf:{NFSU2_TR(0x7301cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301d5:{NFSU2_TR(0x7301d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7301d7:{NFSU2_TR(0x7301d7);
{u32 ea_=u32(r4(R+0)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7301dd:{NFSU2_TR(0x7301dd);
{u32 ea_=u32(r4(R+0)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7301e3:{NFSU2_TR(0x7301e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301e6:{NFSU2_TR(0x7301e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301e9:{NFSU2_TR(0x7301e9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7301eb:{NFSU2_TR(0x7301eb);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7301ee:{NFSU2_TR(0x7301ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301f1:{NFSU2_TR(0x7301f1);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7301f4:{NFSU2_TR(0x7301f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301fa:{NFSU2_TR(0x7301fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301fd:{NFSU2_TR(0x7301fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x478ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730203:{NFSU2_TR(0x730203);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730205:{NFSU2_TR(0x730205);
{u32 ea_=u32(r4(R+0)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73020b:{NFSU2_TR(0x73020b);
{u32 ea_=u32(r4(R+0)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730211:{NFSU2_TR(0x730211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730214:{NFSU2_TR(0x730214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730217:{NFSU2_TR(0x730217);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B730219:{NFSU2_TR(0x730219);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73021c:{NFSU2_TR(0x73021c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73021f:{NFSU2_TR(0x73021f);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730222:{NFSU2_TR(0x730222);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730228:{NFSU2_TR(0x730228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73022b:{NFSU2_TR(0x73022b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730231:{NFSU2_TR(0x730231);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730233:{NFSU2_TR(0x730233);
{u32 ea_=u32(r4(R+0)+u32(1436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730239:{NFSU2_TR(0x730239);
{u32 ea_=u32(r4(R+0)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73023f:{NFSU2_TR(0x73023f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730242:{NFSU2_TR(0x730242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730245:{NFSU2_TR(0x730245);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B730247:{NFSU2_TR(0x730247);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73024a:{NFSU2_TR(0x73024a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73024d:{NFSU2_TR(0x73024d);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730250:{NFSU2_TR(0x730250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730256:{NFSU2_TR(0x730256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730259:{NFSU2_TR(0x730259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73025f:{NFSU2_TR(0x73025f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B730261:{NFSU2_TR(0x730261);
{u32 ea_=u32(r4(R+0)+u32(1724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730267:{NFSU2_TR(0x730267);
{u32 ea_=u32(r4(R+0)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73026d:{NFSU2_TR(0x73026d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730270:{NFSU2_TR(0x730270);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B730272:{NFSU2_TR(0x730272);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730275:{NFSU2_TR(0x730275);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B730278:{NFSU2_TR(0x730278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73027b:{NFSU2_TR(0x73027b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73027d:{NFSU2_TR(0x73027d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730280:{NFSU2_TR(0x730280);
{u32 ea_=u32(r4(R+0)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730286:{NFSU2_TR(0x730286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73028c:{NFSU2_TR(0x73028c);
{u32 ea_=u32(r4(R+0)+u32(2016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B730292:{NFSU2_TR(0x730292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730295:{NFSU2_TR(0x730295);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B730297:{NFSU2_TR(0x730297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73029d:{NFSU2_TR(0x73029d);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7302a0:{NFSU2_TR(0x7302a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7302a3:{NFSU2_TR(0x7302a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7302a6:{NFSU2_TR(0x7302a6);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7302a9:{NFSU2_TR(0x7302a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7302ac:{NFSU2_TR(0x7302ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B7302af:{NFSU2_TR(0x7302af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7302b1:{NFSU2_TR(0x7302b1);
w1(R+512,carry<u32>(r4(R+4),u32(0x80ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B7302b7:{NFSU2_TR(0x7302b7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7302b8:{NFSU2_TR(0x7302b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73014cu);}goto L73014c;}}
}
B7302be:L7302be:{c.instructions+=3;NFSU2_TR(0x7302be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7302bf:{NFSU2_TR(0x7302bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7302c0:{NFSU2_TR(0x7302c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7302c1:L7302c1:{c.instructions+=3;NFSU2_TR(0x7302c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7302c2:{NFSU2_TR(0x7302c2);
__builtin_memmove((R+24),(R+4),4);
}
B7302c4:{NFSU2_TR(0x7302c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7302c9ull));
TAIL_STATIC(0x72dcd5u,72d);
}
B7302c9:L7302c9:{c.instructions+=2;NFSU2_TR(0x7302c9);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B7302ce:{NFSU2_TR(0x7302ce);
if(r1(R+518)){{goto L7302d7;}}
}
B7302d0:L7302d0:{c.instructions+=2;NFSU2_TR(0x7302d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7302d1:{NFSU2_TR(0x7302d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7302d6ull));
TAIL_STATIC(0x575630u,575);
}
B7302d6:L7302d6:{c.instructions+=1;NFSU2_TR(0x7302d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7302d7:L7302d7:{c.instructions+=3;NFSU2_TR(0x7302d7);
__builtin_memmove((R+0),(R+24),4);
}
B7302d9:{NFSU2_TR(0x7302d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7302da:{NFSU2_TR(0x7302da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7302dd:L7302dd:{c.instructions+=610;NFSU2_TR(0x7302dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7302de:{NFSU2_TR(0x7302de);
__builtin_memmove((R+20),(R+16),4);
}
B7302e0:{NFSU2_TR(0x7302e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7302e1:{NFSU2_TR(0x7302e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7302e4:{NFSU2_TR(0x7302e4);
w4(R+0,u32(0x818eb8ull));
}
B7302ea:{NFSU2_TR(0x7302ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7302ed:{NFSU2_TR(0x7302ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7302f0:{NFSU2_TR(0x7302f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B7302f3:{NFSU2_TR(0x7302f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7302f7:{NFSU2_TR(0x7302f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7302fb:{NFSU2_TR(0x7302fb);
__builtin_memmove((R+4352),(R+4416),8);
}
B7302fe:{NFSU2_TR(0x7302fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730302:{NFSU2_TR(0x730302);
__builtin_memmove((R+4368),(R+4432),8);
}
B730305:{NFSU2_TR(0x730305);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730309:{NFSU2_TR(0x730309);
__builtin_memmove((R+4384),(R+4448),8);
}
B73030c:{NFSU2_TR(0x73030c);
__builtin_memmove((R+4400),(R+4464),8);
}
B73030f:{NFSU2_TR(0x73030f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B730312:{NFSU2_TR(0x730312);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B730315:{NFSU2_TR(0x730315);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B730318:{NFSU2_TR(0x730318);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B73031b:{NFSU2_TR(0x73031b);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B73031f:{NFSU2_TR(0x73031f);
__builtin_memmove((R+4356),(R+4352),4);
}
B730322:{NFSU2_TR(0x730322);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x10ull))));
}
B730326:{NFSU2_TR(0x730326);
__builtin_memmove((R+4372),(R+4368),4);
}
B730329:{NFSU2_TR(0x730329);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x10ull))));
}
B73032d:{NFSU2_TR(0x73032d);
__builtin_memmove((R+4388),(R+4384),4);
}
B730330:{NFSU2_TR(0x730330);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x10ull))));
}
B730334:{NFSU2_TR(0x730334);
__builtin_memmove((R+4404),(R+4400),4);
}
B730337:{NFSU2_TR(0x730337);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B73033b:{NFSU2_TR(0x73033b);
__builtin_memmove((R+4420),(R+4352),4);
}
B73033e:{NFSU2_TR(0x73033e);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x10ull))));
}
B730342:{NFSU2_TR(0x730342);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730345:{NFSU2_TR(0x730345);
__builtin_memmove((R+4436),(R+4368),4);
}
B730348:{NFSU2_TR(0x730348);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73034c:{NFSU2_TR(0x73034c);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x10ull))));
}
B730350:{NFSU2_TR(0x730350);
__builtin_memmove((R+4452),(R+4384),4);
}
B730353:{NFSU2_TR(0x730353);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x10ull))));
}
B730357:{NFSU2_TR(0x730357);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73035b:{NFSU2_TR(0x73035b);
__builtin_memmove((R+4468),(R+4400),4);
}
B73035e:{NFSU2_TR(0x73035e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730362:{NFSU2_TR(0x730362);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4422))));
}
B730365:{NFSU2_TR(0x730365);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B730369:{NFSU2_TR(0x730369);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4438))));
}
B73036c:{NFSU2_TR(0x73036c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730371:{NFSU2_TR(0x730371);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4454))));
}
B730374:{NFSU2_TR(0x730374);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730379:{NFSU2_TR(0x730379);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B73037c:{NFSU2_TR(0x73037c);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730381:{NFSU2_TR(0x730381);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730384:{NFSU2_TR(0x730384);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730388:{NFSU2_TR(0x730388);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B73038b:{NFSU2_TR(0x73038b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73038f:{NFSU2_TR(0x73038f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4438))));
}
B730392:{NFSU2_TR(0x730392);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730396:{NFSU2_TR(0x730396);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B730399:{NFSU2_TR(0x730399);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B73039c:{NFSU2_TR(0x73039c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B73039f:{NFSU2_TR(0x73039f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7303a3:{NFSU2_TR(0x7303a3);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7303a6:{NFSU2_TR(0x7303a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7303aa:{NFSU2_TR(0x7303aa);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7303ad:{NFSU2_TR(0x7303ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7303b1:{NFSU2_TR(0x7303b1);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7303b4:{NFSU2_TR(0x7303b4);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7303b7:{NFSU2_TR(0x7303b7);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7303ba:{NFSU2_TR(0x7303ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7303be:{NFSU2_TR(0x7303be);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7303c1:{NFSU2_TR(0x7303c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7303c5:{NFSU2_TR(0x7303c5);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7303c8:{NFSU2_TR(0x7303c8);
__builtin_memmove((R+4464),(R+4448),8);
}
B7303cb:{NFSU2_TR(0x7303cb);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7303cf:{NFSU2_TR(0x7303cf);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7303d2:{NFSU2_TR(0x7303d2);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7303d6:{NFSU2_TR(0x7303d6);
w4(R+8,u32(r8(R+4448)));
}
B7303d9:{NFSU2_TR(0x7303d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7303e0:{NFSU2_TR(0x7303e0);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7303e3:{NFSU2_TR(0x7303e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7303e7:{NFSU2_TR(0x7303e7);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7303ea:{NFSU2_TR(0x7303ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7303ee:{NFSU2_TR(0x7303ee);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7303f1:{NFSU2_TR(0x7303f1);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7303f4:{NFSU2_TR(0x7303f4);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7303f7:{NFSU2_TR(0x7303f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7303fb:{NFSU2_TR(0x7303fb);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7303fe:{NFSU2_TR(0x7303fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730402:{NFSU2_TR(0x730402);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730405:{NFSU2_TR(0x730405);
__builtin_memmove((R+4464),(R+4448),8);
}
B730408:{NFSU2_TR(0x730408);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73040c:{NFSU2_TR(0x73040c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73040f:{NFSU2_TR(0x73040f);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730413:{NFSU2_TR(0x730413);
w4(R+8,u32(r8(R+4448)));
}
B730416:{NFSU2_TR(0x730416);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730419:{NFSU2_TR(0x730419);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73041d:{NFSU2_TR(0x73041d);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730420:{NFSU2_TR(0x730420);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730424:{NFSU2_TR(0x730424);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730427:{NFSU2_TR(0x730427);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73042e:{NFSU2_TR(0x73042e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730431:{NFSU2_TR(0x730431);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730434:{NFSU2_TR(0x730434);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730438:{NFSU2_TR(0x730438);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73043b:{NFSU2_TR(0x73043b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73043f:{NFSU2_TR(0x73043f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730442:{NFSU2_TR(0x730442);
__builtin_memmove((R+4464),(R+4448),8);
}
B730445:{NFSU2_TR(0x730445);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730449:{NFSU2_TR(0x730449);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73044c:{NFSU2_TR(0x73044c);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730450:{NFSU2_TR(0x730450);
w4(R+8,u32(r8(R+4448)));
}
B730453:{NFSU2_TR(0x730453);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730456:{NFSU2_TR(0x730456);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73045a:{NFSU2_TR(0x73045a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73045d:{NFSU2_TR(0x73045d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730461:{NFSU2_TR(0x730461);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730464:{NFSU2_TR(0x730464);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73046b:{NFSU2_TR(0x73046b);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73046e:{NFSU2_TR(0x73046e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730471:{NFSU2_TR(0x730471);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730478:{NFSU2_TR(0x730478);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73047b:{NFSU2_TR(0x73047b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730482:{NFSU2_TR(0x730482);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730485:{NFSU2_TR(0x730485);
__builtin_memmove((R+4464),(R+4448),8);
}
B730488:{NFSU2_TR(0x730488);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73048c:{NFSU2_TR(0x73048c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73048f:{NFSU2_TR(0x73048f);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730493:{NFSU2_TR(0x730493);
w4(R+8,u32(r8(R+4448)));
}
B730496:{NFSU2_TR(0x730496);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730499:{NFSU2_TR(0x730499);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7304a0:{NFSU2_TR(0x7304a0);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7304a3:{NFSU2_TR(0x7304a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7304aa:{NFSU2_TR(0x7304aa);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7304ad:{NFSU2_TR(0x7304ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7304b4:{NFSU2_TR(0x7304b4);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7304b7:{NFSU2_TR(0x7304b7);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7304ba:{NFSU2_TR(0x7304ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7304c1:{NFSU2_TR(0x7304c1);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7304c4:{NFSU2_TR(0x7304c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7304cb:{NFSU2_TR(0x7304cb);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7304ce:{NFSU2_TR(0x7304ce);
__builtin_memmove((R+4464),(R+4448),8);
}
B7304d1:{NFSU2_TR(0x7304d1);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7304d5:{NFSU2_TR(0x7304d5);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7304d8:{NFSU2_TR(0x7304d8);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7304dc:{NFSU2_TR(0x7304dc);
w4(R+8,u32(r8(R+4448)));
}
B7304df:{NFSU2_TR(0x7304df);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7304e2:{NFSU2_TR(0x7304e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7304e9:{NFSU2_TR(0x7304e9);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7304ec:{NFSU2_TR(0x7304ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7304f3:{NFSU2_TR(0x7304f3);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7304f6:{NFSU2_TR(0x7304f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7304fd:{NFSU2_TR(0x7304fd);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730500:{NFSU2_TR(0x730500);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730503:{NFSU2_TR(0x730503);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73050a:{NFSU2_TR(0x73050a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73050d:{NFSU2_TR(0x73050d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730514:{NFSU2_TR(0x730514);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730517:{NFSU2_TR(0x730517);
__builtin_memmove((R+4464),(R+4448),8);
}
B73051a:{NFSU2_TR(0x73051a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73051e:{NFSU2_TR(0x73051e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730521:{NFSU2_TR(0x730521);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730525:{NFSU2_TR(0x730525);
w4(R+8,u32(r8(R+4448)));
}
B730528:{NFSU2_TR(0x730528);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73052b:{NFSU2_TR(0x73052b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730532:{NFSU2_TR(0x730532);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730535:{NFSU2_TR(0x730535);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73053c:{NFSU2_TR(0x73053c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73053f:{NFSU2_TR(0x73053f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730546:{NFSU2_TR(0x730546);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730549:{NFSU2_TR(0x730549);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73054c:{NFSU2_TR(0x73054c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730553:{NFSU2_TR(0x730553);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730556:{NFSU2_TR(0x730556);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73055d:{NFSU2_TR(0x73055d);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730560:{NFSU2_TR(0x730560);
__builtin_memmove((R+4464),(R+4448),8);
}
B730563:{NFSU2_TR(0x730563);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730567:{NFSU2_TR(0x730567);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73056a:{NFSU2_TR(0x73056a);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73056e:{NFSU2_TR(0x73056e);
w4(R+8,u32(r8(R+4448)));
}
B730571:{NFSU2_TR(0x730571);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730574:{NFSU2_TR(0x730574);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73057b:{NFSU2_TR(0x73057b);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73057e:{NFSU2_TR(0x73057e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730585:{NFSU2_TR(0x730585);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730588:{NFSU2_TR(0x730588);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73058f:{NFSU2_TR(0x73058f);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730592:{NFSU2_TR(0x730592);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730595:{NFSU2_TR(0x730595);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73059c:{NFSU2_TR(0x73059c);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73059f:{NFSU2_TR(0x73059f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7305a6:{NFSU2_TR(0x7305a6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305a9:{NFSU2_TR(0x7305a9);
__builtin_memmove((R+4464),(R+4448),8);
}
B7305ac:{NFSU2_TR(0x7305ac);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7305b0:{NFSU2_TR(0x7305b0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305b3:{NFSU2_TR(0x7305b3);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7305b7:{NFSU2_TR(0x7305b7);
w4(R+8,u32(r8(R+4448)));
}
B7305ba:{NFSU2_TR(0x7305ba);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7305bd:{NFSU2_TR(0x7305bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7305c4:{NFSU2_TR(0x7305c4);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7305c7:{NFSU2_TR(0x7305c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7305ce:{NFSU2_TR(0x7305ce);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7305d1:{NFSU2_TR(0x7305d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7305d5:{NFSU2_TR(0x7305d5);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7305d8:{NFSU2_TR(0x7305d8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7305db:{NFSU2_TR(0x7305db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7305e2:{NFSU2_TR(0x7305e2);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7305e5:{NFSU2_TR(0x7305e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7305ec:{NFSU2_TR(0x7305ec);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305ef:{NFSU2_TR(0x7305ef);
__builtin_memmove((R+4464),(R+4448),8);
}
B7305f2:{NFSU2_TR(0x7305f2);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7305f6:{NFSU2_TR(0x7305f6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305f9:{NFSU2_TR(0x7305f9);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7305fd:{NFSU2_TR(0x7305fd);
w4(R+8,u32(r8(R+4448)));
}
B730600:{NFSU2_TR(0x730600);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730603:{NFSU2_TR(0x730603);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73060a:{NFSU2_TR(0x73060a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73060d:{NFSU2_TR(0x73060d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730614:{NFSU2_TR(0x730614);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730617:{NFSU2_TR(0x730617);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+12)),r2(U+0));
}
B73061a:{NFSU2_TR(0x73061a);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73061d:{NFSU2_TR(0x73061d);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B730620:{NFSU2_TR(0x730620);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730623:{NFSU2_TR(0x730623);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73062a:{NFSU2_TR(0x73062a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73062d:{NFSU2_TR(0x73062d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730634:{NFSU2_TR(0x730634);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730637:{NFSU2_TR(0x730637);
__builtin_memmove((R+4464),(R+4448),8);
}
B73063a:{NFSU2_TR(0x73063a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73063e:{NFSU2_TR(0x73063e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730641:{NFSU2_TR(0x730641);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730645:{NFSU2_TR(0x730645);
w4(R+8,u32(r8(R+4448)));
}
B730648:{NFSU2_TR(0x730648);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73064b:{NFSU2_TR(0x73064b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730652:{NFSU2_TR(0x730652);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730655:{NFSU2_TR(0x730655);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73065c:{NFSU2_TR(0x73065c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73065f:{NFSU2_TR(0x73065f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730663:{NFSU2_TR(0x730663);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730666:{NFSU2_TR(0x730666);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730669:{NFSU2_TR(0x730669);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730670:{NFSU2_TR(0x730670);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730673:{NFSU2_TR(0x730673);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73067a:{NFSU2_TR(0x73067a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73067d:{NFSU2_TR(0x73067d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730680:{NFSU2_TR(0x730680);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730684:{NFSU2_TR(0x730684);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730687:{NFSU2_TR(0x730687);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73068b:{NFSU2_TR(0x73068b);
w4(R+8,u32(r8(R+4448)));
}
B73068e:{NFSU2_TR(0x73068e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730691:{NFSU2_TR(0x730691);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730698:{NFSU2_TR(0x730698);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73069b:{NFSU2_TR(0x73069b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7306a2:{NFSU2_TR(0x7306a2);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7306a5:{NFSU2_TR(0x7306a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7306ac:{NFSU2_TR(0x7306ac);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7306af:{NFSU2_TR(0x7306af);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7306b2:{NFSU2_TR(0x7306b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7306b9:{NFSU2_TR(0x7306b9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7306bc:{NFSU2_TR(0x7306bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7306c3:{NFSU2_TR(0x7306c3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7306c6:{NFSU2_TR(0x7306c6);
__builtin_memmove((R+4464),(R+4448),8);
}
B7306c9:{NFSU2_TR(0x7306c9);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7306cd:{NFSU2_TR(0x7306cd);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7306d0:{NFSU2_TR(0x7306d0);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7306d4:{NFSU2_TR(0x7306d4);
w4(R+8,u32(r8(R+4448)));
}
B7306d7:{NFSU2_TR(0x7306d7);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7306da:{NFSU2_TR(0x7306da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7306e1:{NFSU2_TR(0x7306e1);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7306e4:{NFSU2_TR(0x7306e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7306eb:{NFSU2_TR(0x7306eb);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7306ee:{NFSU2_TR(0x7306ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7306f5:{NFSU2_TR(0x7306f5);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7306f8:{NFSU2_TR(0x7306f8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7306fb:{NFSU2_TR(0x7306fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730702:{NFSU2_TR(0x730702);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730705:{NFSU2_TR(0x730705);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73070c:{NFSU2_TR(0x73070c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73070f:{NFSU2_TR(0x73070f);
__builtin_memmove((R+4464),(R+4448),8);
}
B730712:{NFSU2_TR(0x730712);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730716:{NFSU2_TR(0x730716);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730719:{NFSU2_TR(0x730719);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73071d:{NFSU2_TR(0x73071d);
w4(R+8,u32(r8(R+4448)));
}
B730720:{NFSU2_TR(0x730720);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730723:{NFSU2_TR(0x730723);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73072a:{NFSU2_TR(0x73072a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73072d:{NFSU2_TR(0x73072d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730734:{NFSU2_TR(0x730734);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730737:{NFSU2_TR(0x730737);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73073e:{NFSU2_TR(0x73073e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730741:{NFSU2_TR(0x730741);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730744:{NFSU2_TR(0x730744);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73074b:{NFSU2_TR(0x73074b);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73074e:{NFSU2_TR(0x73074e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730755:{NFSU2_TR(0x730755);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730758:{NFSU2_TR(0x730758);
__builtin_memmove((R+4464),(R+4448),8);
}
B73075b:{NFSU2_TR(0x73075b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73075f:{NFSU2_TR(0x73075f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730762:{NFSU2_TR(0x730762);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730766:{NFSU2_TR(0x730766);
w4(R+8,u32(r8(R+4448)));
}
B730769:{NFSU2_TR(0x730769);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73076c:{NFSU2_TR(0x73076c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730773:{NFSU2_TR(0x730773);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730776:{NFSU2_TR(0x730776);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73077d:{NFSU2_TR(0x73077d);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730780:{NFSU2_TR(0x730780);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730787:{NFSU2_TR(0x730787);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73078a:{NFSU2_TR(0x73078a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73078d:{NFSU2_TR(0x73078d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730794:{NFSU2_TR(0x730794);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730797:{NFSU2_TR(0x730797);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73079e:{NFSU2_TR(0x73079e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307a1:{NFSU2_TR(0x7307a1);
__builtin_memmove((R+4464),(R+4448),8);
}
B7307a4:{NFSU2_TR(0x7307a4);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7307a8:{NFSU2_TR(0x7307a8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307ab:{NFSU2_TR(0x7307ab);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7307af:{NFSU2_TR(0x7307af);
w4(R+8,u32(r8(R+4448)));
}
B7307b2:{NFSU2_TR(0x7307b2);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7307b5:{NFSU2_TR(0x7307b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7307bc:{NFSU2_TR(0x7307bc);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7307bf:{NFSU2_TR(0x7307bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7307c6:{NFSU2_TR(0x7307c6);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7307c9:{NFSU2_TR(0x7307c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7307d0:{NFSU2_TR(0x7307d0);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7307d3:{NFSU2_TR(0x7307d3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7307d6:{NFSU2_TR(0x7307d6);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7307d9:{NFSU2_TR(0x7307d9);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307dc:{NFSU2_TR(0x7307dc);
__builtin_memmove((R+4464),(R+4448),8);
}
B7307df:{NFSU2_TR(0x7307df);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7307e3:{NFSU2_TR(0x7307e3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307e6:{NFSU2_TR(0x7307e6);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7307ea:{NFSU2_TR(0x7307ea);
w4(R+8,u32(r8(R+4448)));
}
B7307ed:{NFSU2_TR(0x7307ed);
w4(R+0,u32(0x818cb8ull));
}
B7307f3:{NFSU2_TR(0x7307f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7307f7:{NFSU2_TR(0x7307f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7307fc:{NFSU2_TR(0x7307fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730801:{NFSU2_TR(0x730801);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730806:{NFSU2_TR(0x730806);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B730809:{NFSU2_TR(0x730809);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73080d:{NFSU2_TR(0x73080d);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730810:{NFSU2_TR(0x730810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730814:{NFSU2_TR(0x730814);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730817:{NFSU2_TR(0x730817);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73081b:{NFSU2_TR(0x73081b);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73081e:{NFSU2_TR(0x73081e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730825:{NFSU2_TR(0x730825);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730828:{NFSU2_TR(0x730828);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73082b:{NFSU2_TR(0x73082b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73082f:{NFSU2_TR(0x73082f);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730832:{NFSU2_TR(0x730832);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730836:{NFSU2_TR(0x730836);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730839:{NFSU2_TR(0x730839);
__builtin_memmove((R+4464),(R+4448),8);
}
B73083c:{NFSU2_TR(0x73083c);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730840:{NFSU2_TR(0x730840);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730843:{NFSU2_TR(0x730843);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730847:{NFSU2_TR(0x730847);
w4(R+8,u32(r8(R+4448)));
}
B73084a:{NFSU2_TR(0x73084a);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73084d:{NFSU2_TR(0x73084d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730851:{NFSU2_TR(0x730851);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730854:{NFSU2_TR(0x730854);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730858:{NFSU2_TR(0x730858);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73085b:{NFSU2_TR(0x73085b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730862:{NFSU2_TR(0x730862);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730865:{NFSU2_TR(0x730865);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730868:{NFSU2_TR(0x730868);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73086c:{NFSU2_TR(0x73086c);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73086f:{NFSU2_TR(0x73086f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730873:{NFSU2_TR(0x730873);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730876:{NFSU2_TR(0x730876);
__builtin_memmove((R+4464),(R+4448),8);
}
B730879:{NFSU2_TR(0x730879);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73087d:{NFSU2_TR(0x73087d);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730880:{NFSU2_TR(0x730880);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730884:{NFSU2_TR(0x730884);
w4(R+8,u32(r8(R+4448)));
}
B730887:{NFSU2_TR(0x730887);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73088a:{NFSU2_TR(0x73088a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73088e:{NFSU2_TR(0x73088e);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730891:{NFSU2_TR(0x730891);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730895:{NFSU2_TR(0x730895);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730898:{NFSU2_TR(0x730898);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73089f:{NFSU2_TR(0x73089f);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7308a2:{NFSU2_TR(0x7308a2);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7308a5:{NFSU2_TR(0x7308a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7308a9:{NFSU2_TR(0x7308a9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7308ac:{NFSU2_TR(0x7308ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7308b0:{NFSU2_TR(0x7308b0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308b3:{NFSU2_TR(0x7308b3);
__builtin_memmove((R+4464),(R+4448),8);
}
B7308b6:{NFSU2_TR(0x7308b6);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7308ba:{NFSU2_TR(0x7308ba);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308bd:{NFSU2_TR(0x7308bd);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7308c1:{NFSU2_TR(0x7308c1);
w4(R+8,u32(r8(R+4448)));
}
B7308c4:{NFSU2_TR(0x7308c4);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7308c7:{NFSU2_TR(0x7308c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7308cb:{NFSU2_TR(0x7308cb);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7308ce:{NFSU2_TR(0x7308ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7308d2:{NFSU2_TR(0x7308d2);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7308d5:{NFSU2_TR(0x7308d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7308dc:{NFSU2_TR(0x7308dc);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7308df:{NFSU2_TR(0x7308df);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7308e2:{NFSU2_TR(0x7308e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7308e9:{NFSU2_TR(0x7308e9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7308ec:{NFSU2_TR(0x7308ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7308f3:{NFSU2_TR(0x7308f3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308f6:{NFSU2_TR(0x7308f6);
__builtin_memmove((R+4464),(R+4448),8);
}
B7308f9:{NFSU2_TR(0x7308f9);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7308fd:{NFSU2_TR(0x7308fd);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730900:{NFSU2_TR(0x730900);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730904:{NFSU2_TR(0x730904);
w4(R+8,u32(r8(R+4448)));
}
B730907:{NFSU2_TR(0x730907);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73090a:{NFSU2_TR(0x73090a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730911:{NFSU2_TR(0x730911);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730914:{NFSU2_TR(0x730914);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73091b:{NFSU2_TR(0x73091b);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73091e:{NFSU2_TR(0x73091e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730925:{NFSU2_TR(0x730925);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730928:{NFSU2_TR(0x730928);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73092b:{NFSU2_TR(0x73092b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730932:{NFSU2_TR(0x730932);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730935:{NFSU2_TR(0x730935);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73093c:{NFSU2_TR(0x73093c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73093f:{NFSU2_TR(0x73093f);
__builtin_memmove((R+4464),(R+4448),8);
}
B730942:{NFSU2_TR(0x730942);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730946:{NFSU2_TR(0x730946);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730949:{NFSU2_TR(0x730949);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73094d:{NFSU2_TR(0x73094d);
w4(R+8,u32(r8(R+4448)));
}
B730950:{NFSU2_TR(0x730950);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730953:{NFSU2_TR(0x730953);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73095a:{NFSU2_TR(0x73095a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73095d:{NFSU2_TR(0x73095d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730964:{NFSU2_TR(0x730964);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730967:{NFSU2_TR(0x730967);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73096e:{NFSU2_TR(0x73096e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730971:{NFSU2_TR(0x730971);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730974:{NFSU2_TR(0x730974);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73097b:{NFSU2_TR(0x73097b);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73097e:{NFSU2_TR(0x73097e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730985:{NFSU2_TR(0x730985);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730988:{NFSU2_TR(0x730988);
__builtin_memmove((R+4464),(R+4448),8);
}
B73098b:{NFSU2_TR(0x73098b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73098f:{NFSU2_TR(0x73098f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730992:{NFSU2_TR(0x730992);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730996:{NFSU2_TR(0x730996);
w4(R+8,u32(r8(R+4448)));
}
B730999:{NFSU2_TR(0x730999);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73099c:{NFSU2_TR(0x73099c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7309a3:{NFSU2_TR(0x7309a3);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7309a6:{NFSU2_TR(0x7309a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7309ad:{NFSU2_TR(0x7309ad);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7309b0:{NFSU2_TR(0x7309b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7309b7:{NFSU2_TR(0x7309b7);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7309ba:{NFSU2_TR(0x7309ba);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7309bd:{NFSU2_TR(0x7309bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7309c4:{NFSU2_TR(0x7309c4);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7309c7:{NFSU2_TR(0x7309c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7309ce:{NFSU2_TR(0x7309ce);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7309d1:{NFSU2_TR(0x7309d1);
__builtin_memmove((R+4464),(R+4448),8);
}
B7309d4:{NFSU2_TR(0x7309d4);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7309d8:{NFSU2_TR(0x7309d8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7309db:{NFSU2_TR(0x7309db);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7309df:{NFSU2_TR(0x7309df);
w4(R+8,u32(r8(R+4448)));
}
B7309e2:{NFSU2_TR(0x7309e2);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7309e5:{NFSU2_TR(0x7309e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7309ec:{NFSU2_TR(0x7309ec);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7309ef:{NFSU2_TR(0x7309ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7309f6:{NFSU2_TR(0x7309f6);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7309f9:{NFSU2_TR(0x7309f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7309fd:{NFSU2_TR(0x7309fd);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a00:{NFSU2_TR(0x730a00);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a03:{NFSU2_TR(0x730a03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a0a:{NFSU2_TR(0x730a0a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a0d:{NFSU2_TR(0x730a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730a14:{NFSU2_TR(0x730a14);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a17:{NFSU2_TR(0x730a17);
__builtin_memmove((R+4464),(R+4448),8);
}
B730a1a:{NFSU2_TR(0x730a1a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730a1e:{NFSU2_TR(0x730a1e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a21:{NFSU2_TR(0x730a21);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730a25:{NFSU2_TR(0x730a25);
w4(R+8,u32(r8(R+4448)));
}
B730a28:{NFSU2_TR(0x730a28);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730a2b:{NFSU2_TR(0x730a2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730a32:{NFSU2_TR(0x730a32);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730a35:{NFSU2_TR(0x730a35);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730a3c:{NFSU2_TR(0x730a3c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730a3f:{NFSU2_TR(0x730a3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730a43:{NFSU2_TR(0x730a43);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a46:{NFSU2_TR(0x730a46);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a49:{NFSU2_TR(0x730a49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a50:{NFSU2_TR(0x730a50);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a53:{NFSU2_TR(0x730a53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730a5a:{NFSU2_TR(0x730a5a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a5d:{NFSU2_TR(0x730a5d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730a60:{NFSU2_TR(0x730a60);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730a64:{NFSU2_TR(0x730a64);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a67:{NFSU2_TR(0x730a67);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730a6b:{NFSU2_TR(0x730a6b);
w4(R+8,u32(r8(R+4448)));
}
B730a6e:{NFSU2_TR(0x730a6e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730a71:{NFSU2_TR(0x730a71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730a78:{NFSU2_TR(0x730a78);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730a7b:{NFSU2_TR(0x730a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730a82:{NFSU2_TR(0x730a82);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730a85:{NFSU2_TR(0x730a85);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730a89:{NFSU2_TR(0x730a89);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a8c:{NFSU2_TR(0x730a8c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a8f:{NFSU2_TR(0x730a8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a96:{NFSU2_TR(0x730a96);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a99:{NFSU2_TR(0x730a99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730aa0:{NFSU2_TR(0x730aa0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730aa3:{NFSU2_TR(0x730aa3);
__builtin_memmove((R+4464),(R+4448),8);
}
B730aa6:{NFSU2_TR(0x730aa6);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730aaa:{NFSU2_TR(0x730aaa);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730aad:{NFSU2_TR(0x730aad);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730ab1:{NFSU2_TR(0x730ab1);
w4(R+8,u32(r8(R+4448)));
}
B730ab4:{NFSU2_TR(0x730ab4);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730ab7:{NFSU2_TR(0x730ab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730abe:{NFSU2_TR(0x730abe);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730ac1:{NFSU2_TR(0x730ac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730ac8:{NFSU2_TR(0x730ac8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730acb:{NFSU2_TR(0x730acb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730acf:{NFSU2_TR(0x730acf);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730ad2:{NFSU2_TR(0x730ad2);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730ad5:{NFSU2_TR(0x730ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730adc:{NFSU2_TR(0x730adc);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730adf:{NFSU2_TR(0x730adf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730ae6:{NFSU2_TR(0x730ae6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730ae9:{NFSU2_TR(0x730ae9);
__builtin_memmove((R+4464),(R+4448),8);
}
B730aec:{NFSU2_TR(0x730aec);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730af0:{NFSU2_TR(0x730af0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730af3:{NFSU2_TR(0x730af3);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730af7:{NFSU2_TR(0x730af7);
w4(R+8,u32(r8(R+4448)));
}
B730afa:{NFSU2_TR(0x730afa);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730afd:{NFSU2_TR(0x730afd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b04:{NFSU2_TR(0x730b04);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b07:{NFSU2_TR(0x730b07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730b0e:{NFSU2_TR(0x730b0e);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730b11:{NFSU2_TR(0x730b11);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730b18:{NFSU2_TR(0x730b18);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730b1b:{NFSU2_TR(0x730b1b);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730b1e:{NFSU2_TR(0x730b1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730b25:{NFSU2_TR(0x730b25);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730b28:{NFSU2_TR(0x730b28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730b2f:{NFSU2_TR(0x730b2f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b32:{NFSU2_TR(0x730b32);
__builtin_memmove((R+4464),(R+4448),8);
}
B730b35:{NFSU2_TR(0x730b35);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730b39:{NFSU2_TR(0x730b39);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b3c:{NFSU2_TR(0x730b3c);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730b40:{NFSU2_TR(0x730b40);
w4(R+8,u32(r8(R+4448)));
}
B730b43:{NFSU2_TR(0x730b43);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730b46:{NFSU2_TR(0x730b46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b4d:{NFSU2_TR(0x730b4d);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b50:{NFSU2_TR(0x730b50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730b57:{NFSU2_TR(0x730b57);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730b5a:{NFSU2_TR(0x730b5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730b61:{NFSU2_TR(0x730b61);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730b64:{NFSU2_TR(0x730b64);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730b67:{NFSU2_TR(0x730b67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730b6e:{NFSU2_TR(0x730b6e);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730b71:{NFSU2_TR(0x730b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730b78:{NFSU2_TR(0x730b78);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b7b:{NFSU2_TR(0x730b7b);
__builtin_memmove((R+4464),(R+4448),8);
}
B730b7e:{NFSU2_TR(0x730b7e);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730b82:{NFSU2_TR(0x730b82);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b85:{NFSU2_TR(0x730b85);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730b89:{NFSU2_TR(0x730b89);
w4(R+8,u32(r8(R+4448)));
}
B730b8c:{NFSU2_TR(0x730b8c);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730b8f:{NFSU2_TR(0x730b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b96:{NFSU2_TR(0x730b96);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b99:{NFSU2_TR(0x730b99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730ba0:{NFSU2_TR(0x730ba0);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730ba3:{NFSU2_TR(0x730ba3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730baa:{NFSU2_TR(0x730baa);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730bad:{NFSU2_TR(0x730bad);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730bb0:{NFSU2_TR(0x730bb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730bb7:{NFSU2_TR(0x730bb7);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730bba:{NFSU2_TR(0x730bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730bc1:{NFSU2_TR(0x730bc1);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730bc4:{NFSU2_TR(0x730bc4);
__builtin_memmove((R+4464),(R+4448),8);
}
B730bc7:{NFSU2_TR(0x730bc7);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730bcb:{NFSU2_TR(0x730bcb);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730bce:{NFSU2_TR(0x730bce);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730bd2:{NFSU2_TR(0x730bd2);
w4(R+8,u32(r8(R+4448)));
}
B730bd5:{NFSU2_TR(0x730bd5);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730bd8:{NFSU2_TR(0x730bd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730bdf:{NFSU2_TR(0x730bdf);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730be2:{NFSU2_TR(0x730be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730be9:{NFSU2_TR(0x730be9);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730bec:{NFSU2_TR(0x730bec);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730bf3:{NFSU2_TR(0x730bf3);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730bf6:{NFSU2_TR(0x730bf6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730bf9:{NFSU2_TR(0x730bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730c00:{NFSU2_TR(0x730c00);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730c03:{NFSU2_TR(0x730c03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730c0a:{NFSU2_TR(0x730c0a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c0d:{NFSU2_TR(0x730c0d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730c10:{NFSU2_TR(0x730c10);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730c14:{NFSU2_TR(0x730c14);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c17:{NFSU2_TR(0x730c17);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730c1b:{NFSU2_TR(0x730c1b);
w4(R+8,u32(r8(R+4448)));
}
B730c1e:{NFSU2_TR(0x730c1e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730c21:{NFSU2_TR(0x730c21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730c28:{NFSU2_TR(0x730c28);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730c2b:{NFSU2_TR(0x730c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730c32:{NFSU2_TR(0x730c32);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730c35:{NFSU2_TR(0x730c35);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730c3c:{NFSU2_TR(0x730c3c);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730c3f:{NFSU2_TR(0x730c3f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730c42:{NFSU2_TR(0x730c42);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730c45:{NFSU2_TR(0x730c45);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c48:{NFSU2_TR(0x730c48);
__builtin_memmove((R+4464),(R+4448),8);
}
B730c4b:{NFSU2_TR(0x730c4b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730c4f:{NFSU2_TR(0x730c4f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c52:{NFSU2_TR(0x730c52);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730c56:{NFSU2_TR(0x730c56);
w4(R+8,u32(r8(R+4448)));
}
B730c59:{NFSU2_TR(0x730c59);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730c60:{NFSU2_TR(0x730c60);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B730c63:{NFSU2_TR(0x730c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B730c64:{NFSU2_TR(0x730c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B730c65:{NFSU2_TR(0x730c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B730c66:L730c66:{c.instructions+=36;NFSU2_TR(0x730c66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730c67:{NFSU2_TR(0x730c67);
__builtin_memmove((R+20),(R+16),4);
}
B730c69:{NFSU2_TR(0x730c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B730c6c:{NFSU2_TR(0x730c6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730c6d:{NFSU2_TR(0x730c6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730c6e:{NFSU2_TR(0x730c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730c71:{NFSU2_TR(0x730c71);
u8 U[13];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B730c75:{NFSU2_TR(0x730c75);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B730c77:{NFSU2_TR(0x730c77);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B730c79:{NFSU2_TR(0x730c79);
u8 U[13];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B730c7d:{NFSU2_TR(0x730c7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730c7e:{NFSU2_TR(0x730c7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B730c81:{NFSU2_TR(0x730c81);
w4(R+28,u32(r1(R+0)));
}
B730c84:{NFSU2_TR(0x730c84);
__builtin_memmove((R+0),(R+28),4);
}
B730c86:{NFSU2_TR(0x730c86);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B730c89:{NFSU2_TR(0x730c89);
__builtin_memmove((R+8),(R+0),4);
}
B730c8b:{NFSU2_TR(0x730c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B730c8e:{NFSU2_TR(0x730c8e);
w4(R+8,u32(u32(r4(R+8))^u32(u32(0x1ull))));
}
B730c91:{NFSU2_TR(0x730c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B730c94:{NFSU2_TR(0x730c94);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B730c97:{NFSU2_TR(0x730c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B730c9a:{NFSU2_TR(0x730c9a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B730c9c:{NFSU2_TR(0x730c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B730c9f:{NFSU2_TR(0x730c9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B730ca2:{NFSU2_TR(0x730ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B730ca5:{NFSU2_TR(0x730ca5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B730ca7:{NFSU2_TR(0x730ca7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B730caa:{NFSU2_TR(0x730caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730cad:{NFSU2_TR(0x730cad);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B730cb0:{NFSU2_TR(0x730cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B730cb3:{NFSU2_TR(0x730cb3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B730cb5:{NFSU2_TR(0x730cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730cb6:{NFSU2_TR(0x730cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B730cb9:{NFSU2_TR(0x730cb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B730cba:{NFSU2_TR(0x730cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730cbd:{NFSU2_TR(0x730cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x730cc2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7302ddu);}goto L7302dd;}
}
B730cc2:L730cc2:{c.instructions+=183;NFSU2_TR(0x730cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B730cc5:{NFSU2_TR(0x730cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B730cc8:{NFSU2_TR(0x730cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730ccb:{NFSU2_TR(0x730ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B730cce:{NFSU2_TR(0x730cce);
w4(R+12,u32(0x7d11e0ull));
}
B730cd4:{NFSU2_TR(0x730cd4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B730cd6:{NFSU2_TR(0x730cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B730cd9:{NFSU2_TR(0x730cd9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B730cdb:{NFSU2_TR(0x730cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B730cde:{NFSU2_TR(0x730cde);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730ce1:{NFSU2_TR(0x730ce1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B730ce4:{NFSU2_TR(0x730ce4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730ce8:{NFSU2_TR(0x730ce8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730cec:{NFSU2_TR(0x730cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730cf0:{NFSU2_TR(0x730cf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730cf4:{NFSU2_TR(0x730cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730cf8:{NFSU2_TR(0x730cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730cfc:{NFSU2_TR(0x730cfc);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730cff:{NFSU2_TR(0x730cff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730d03:{NFSU2_TR(0x730d03);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730d06:{NFSU2_TR(0x730d06);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730d0a:{NFSU2_TR(0x730d0a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730d0d:{NFSU2_TR(0x730d0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730d11:{NFSU2_TR(0x730d11);
__builtin_memmove((R+4384),(R+4352),8);
}
B730d14:{NFSU2_TR(0x730d14);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730d18:{NFSU2_TR(0x730d18);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730d1c:{NFSU2_TR(0x730d1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730d20:{NFSU2_TR(0x730d20);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730d23:{NFSU2_TR(0x730d23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730d27:{NFSU2_TR(0x730d27);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730d2b:{NFSU2_TR(0x730d2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730d2f:{NFSU2_TR(0x730d2f);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730d32:{NFSU2_TR(0x730d32);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730d36:{NFSU2_TR(0x730d36);
w4(R+0,u32(r8(R+4384)));
}
B730d39:{NFSU2_TR(0x730d39);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+8)),r2(U+0));
}
B730d3c:{NFSU2_TR(0x730d3c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730d3f:{NFSU2_TR(0x730d3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730d46:{NFSU2_TR(0x730d46);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730d49:{NFSU2_TR(0x730d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730d50:{NFSU2_TR(0x730d50);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730d53:{NFSU2_TR(0x730d53);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730d5a:{NFSU2_TR(0x730d5a);
__builtin_memmove((R+4400),(R+4368),8);
}
B730d5d:{NFSU2_TR(0x730d5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730d64:{NFSU2_TR(0x730d64);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730d68:{NFSU2_TR(0x730d68);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730d6c:{NFSU2_TR(0x730d6c);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730d6f:{NFSU2_TR(0x730d6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730d73:{NFSU2_TR(0x730d73);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730d77:{NFSU2_TR(0x730d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730d7b:{NFSU2_TR(0x730d7b);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730d7e:{NFSU2_TR(0x730d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730d82:{NFSU2_TR(0x730d82);
w4(R+0,u32(r8(R+4400)));
}
B730d85:{NFSU2_TR(0x730d85);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730d89:{NFSU2_TR(0x730d89);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730d8c:{NFSU2_TR(0x730d8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730d93:{NFSU2_TR(0x730d93);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730d96:{NFSU2_TR(0x730d96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730d9d:{NFSU2_TR(0x730d9d);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730da0:{NFSU2_TR(0x730da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730da7:{NFSU2_TR(0x730da7);
__builtin_memmove((R+4384),(R+4352),8);
}
B730daa:{NFSU2_TR(0x730daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730db1:{NFSU2_TR(0x730db1);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730db5:{NFSU2_TR(0x730db5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730db9:{NFSU2_TR(0x730db9);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730dbc:{NFSU2_TR(0x730dbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730dc0:{NFSU2_TR(0x730dc0);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730dc4:{NFSU2_TR(0x730dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730dc8:{NFSU2_TR(0x730dc8);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730dcb:{NFSU2_TR(0x730dcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730dcf:{NFSU2_TR(0x730dcf);
w4(R+0,u32(r8(R+4384)));
}
B730dd2:{NFSU2_TR(0x730dd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730dd6:{NFSU2_TR(0x730dd6);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730dd9:{NFSU2_TR(0x730dd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730de0:{NFSU2_TR(0x730de0);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730de3:{NFSU2_TR(0x730de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730dea:{NFSU2_TR(0x730dea);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730ded:{NFSU2_TR(0x730ded);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730df4:{NFSU2_TR(0x730df4);
__builtin_memmove((R+4400),(R+4368),8);
}
B730df7:{NFSU2_TR(0x730df7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730dfe:{NFSU2_TR(0x730dfe);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730e02:{NFSU2_TR(0x730e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730e09:{NFSU2_TR(0x730e09);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730e0c:{NFSU2_TR(0x730e0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730e13:{NFSU2_TR(0x730e13);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730e17:{NFSU2_TR(0x730e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730e1e:{NFSU2_TR(0x730e1e);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730e21:{NFSU2_TR(0x730e21);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730e28:{NFSU2_TR(0x730e28);
w4(R+0,u32(r8(R+4400)));
}
B730e2b:{NFSU2_TR(0x730e2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730e2f:{NFSU2_TR(0x730e2f);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730e32:{NFSU2_TR(0x730e32);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730e39:{NFSU2_TR(0x730e39);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730e3c:{NFSU2_TR(0x730e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730e43:{NFSU2_TR(0x730e43);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730e46:{NFSU2_TR(0x730e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730e4d:{NFSU2_TR(0x730e4d);
__builtin_memmove((R+4384),(R+4352),8);
}
B730e50:{NFSU2_TR(0x730e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730e57:{NFSU2_TR(0x730e57);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730e5b:{NFSU2_TR(0x730e5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730e62:{NFSU2_TR(0x730e62);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730e65:{NFSU2_TR(0x730e65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730e6c:{NFSU2_TR(0x730e6c);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730e70:{NFSU2_TR(0x730e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730e77:{NFSU2_TR(0x730e77);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730e7a:{NFSU2_TR(0x730e7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730e81:{NFSU2_TR(0x730e81);
w4(R+0,u32(r8(R+4384)));
}
B730e84:{NFSU2_TR(0x730e84);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730e88:{NFSU2_TR(0x730e88);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730e8b:{NFSU2_TR(0x730e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730e92:{NFSU2_TR(0x730e92);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730e95:{NFSU2_TR(0x730e95);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730e9c:{NFSU2_TR(0x730e9c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730e9f:{NFSU2_TR(0x730e9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730ea6:{NFSU2_TR(0x730ea6);
__builtin_memmove((R+4400),(R+4368),8);
}
B730ea9:{NFSU2_TR(0x730ea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730eb0:{NFSU2_TR(0x730eb0);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730eb4:{NFSU2_TR(0x730eb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730ebb:{NFSU2_TR(0x730ebb);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730ebe:{NFSU2_TR(0x730ebe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730ec5:{NFSU2_TR(0x730ec5);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730ec9:{NFSU2_TR(0x730ec9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730ed0:{NFSU2_TR(0x730ed0);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730ed3:{NFSU2_TR(0x730ed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730eda:{NFSU2_TR(0x730eda);
w4(R+0,u32(r8(R+4400)));
}
B730edd:{NFSU2_TR(0x730edd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730ee1:{NFSU2_TR(0x730ee1);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730ee4:{NFSU2_TR(0x730ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730eeb:{NFSU2_TR(0x730eeb);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730eee:{NFSU2_TR(0x730eee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730ef5:{NFSU2_TR(0x730ef5);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730ef8:{NFSU2_TR(0x730ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730eff:{NFSU2_TR(0x730eff);
__builtin_memmove((R+4384),(R+4352),8);
}
B730f02:{NFSU2_TR(0x730f02);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730f09:{NFSU2_TR(0x730f09);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730f0d:{NFSU2_TR(0x730f0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730f14:{NFSU2_TR(0x730f14);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730f17:{NFSU2_TR(0x730f17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730f1e:{NFSU2_TR(0x730f1e);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730f22:{NFSU2_TR(0x730f22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730f29:{NFSU2_TR(0x730f29);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730f2c:{NFSU2_TR(0x730f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730f33:{NFSU2_TR(0x730f33);
w4(R+0,u32(r8(R+4384)));
}
B730f36:{NFSU2_TR(0x730f36);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730f3a:{NFSU2_TR(0x730f3a);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730f3d:{NFSU2_TR(0x730f3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730f44:{NFSU2_TR(0x730f44);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730f47:{NFSU2_TR(0x730f47);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730f4e:{NFSU2_TR(0x730f4e);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730f51:{NFSU2_TR(0x730f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730f58:{NFSU2_TR(0x730f58);
__builtin_memmove((R+4400),(R+4368),8);
}
B730f5b:{NFSU2_TR(0x730f5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730f62:{NFSU2_TR(0x730f62);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730f66:{NFSU2_TR(0x730f66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730f6d:{NFSU2_TR(0x730f6d);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730f70:{NFSU2_TR(0x730f70);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730f77:{NFSU2_TR(0x730f77);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730f7b:{NFSU2_TR(0x730f7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730f82:{NFSU2_TR(0x730f82);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730f85:{NFSU2_TR(0x730f85);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730f8c:{NFSU2_TR(0x730f8c);
w4(R+0,u32(r8(R+4400)));
}
B730f8f:{NFSU2_TR(0x730f8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730f93:{NFSU2_TR(0x730f93);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730f96:{NFSU2_TR(0x730f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730f9d:{NFSU2_TR(0x730f9d);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730fa0:{NFSU2_TR(0x730fa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730fa7:{NFSU2_TR(0x730fa7);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730faa:{NFSU2_TR(0x730faa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730fb1:{NFSU2_TR(0x730fb1);
__builtin_memmove((R+4384),(R+4352),8);
}
B730fb4:{NFSU2_TR(0x730fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730fbb:{NFSU2_TR(0x730fbb);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730fbf:{NFSU2_TR(0x730fbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730fc6:{NFSU2_TR(0x730fc6);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730fc9:{NFSU2_TR(0x730fc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730fd0:{NFSU2_TR(0x730fd0);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730fd4:{NFSU2_TR(0x730fd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730fdb:{NFSU2_TR(0x730fdb);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730fde:{NFSU2_TR(0x730fde);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730fe5:{NFSU2_TR(0x730fe5);
w4(R+0,u32(r8(R+4384)));
}
B730fe8:{NFSU2_TR(0x730fe8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730fec:{NFSU2_TR(0x730fec);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730fef:{NFSU2_TR(0x730fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730ff6:{NFSU2_TR(0x730ff6);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730ff9:{NFSU2_TR(0x730ff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
TAIL_STATIC(0x731000u,731);
}
XIT:NFSU2_TR_EXIT(0x730,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
