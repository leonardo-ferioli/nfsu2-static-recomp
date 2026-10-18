#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_731(u8* __restrict R,Cpu& c);
u32 body_733(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x732,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x732,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_732(u8* __restrict R,Cpu& c);
u32 page_732(Cpu& c){return body_732(c.regs.data(),c);}
__attribute__((noinline)) u32 body_732(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x732004:goto L732004;
case 0x73200a:c.instructions+=338;goto B73200a;
case 0x73200c:c.instructions+=337;goto B73200c;
case 0x732012:c.instructions+=336;goto B732012;
case 0x732018:c.instructions+=335;goto B732018;
case 0x73201e:c.instructions+=334;goto B73201e;
case 0x732024:c.instructions+=333;goto B732024;
case 0x73202a:c.instructions+=332;goto B73202a;
case 0x732030:c.instructions+=331;goto B732030;
case 0x732032:c.instructions+=330;goto B732032;
case 0x732038:c.instructions+=329;goto B732038;
case 0x73203e:c.instructions+=328;goto B73203e;
case 0x732044:c.instructions+=327;goto B732044;
case 0x73204a:c.instructions+=326;goto B73204a;
case 0x732050:c.instructions+=325;goto B732050;
case 0x732056:c.instructions+=324;goto B732056;
case 0x732058:c.instructions+=323;goto B732058;
case 0x73205e:c.instructions+=322;goto B73205e;
case 0x732064:c.instructions+=321;goto B732064;
case 0x73206a:c.instructions+=320;goto B73206a;
case 0x732070:c.instructions+=319;goto B732070;
case 0x732076:c.instructions+=318;goto B732076;
case 0x73207c:c.instructions+=317;goto B73207c;
case 0x73207e:c.instructions+=316;goto B73207e;
case 0x732084:c.instructions+=315;goto B732084;
case 0x73208a:c.instructions+=314;goto B73208a;
case 0x732090:c.instructions+=313;goto B732090;
case 0x732096:c.instructions+=312;goto B732096;
case 0x73209c:c.instructions+=311;goto B73209c;
case 0x7320a2:c.instructions+=310;goto B7320a2;
case 0x7320a4:c.instructions+=309;goto B7320a4;
case 0x7320aa:c.instructions+=308;goto B7320aa;
case 0x7320b0:c.instructions+=307;goto B7320b0;
case 0x7320b6:c.instructions+=306;goto B7320b6;
case 0x7320bc:c.instructions+=305;goto B7320bc;
case 0x7320c2:c.instructions+=304;goto B7320c2;
case 0x7320c8:c.instructions+=303;goto B7320c8;
case 0x7320ca:c.instructions+=302;goto B7320ca;
case 0x7320d0:c.instructions+=301;goto B7320d0;
case 0x7320d2:c.instructions+=300;goto B7320d2;
case 0x7320d8:c.instructions+=299;goto B7320d8;
case 0x7320de:c.instructions+=298;goto B7320de;
case 0x7320e4:c.instructions+=297;goto B7320e4;
case 0x7320e6:c.instructions+=296;goto B7320e6;
case 0x7320e8:c.instructions+=295;goto B7320e8;
case 0x7320ee:c.instructions+=294;goto B7320ee;
case 0x7320f0:c.instructions+=293;goto B7320f0;
case 0x7320f2:c.instructions+=292;goto B7320f2;
case 0x7320f4:c.instructions+=291;goto B7320f4;
case 0x7320fa:c.instructions+=290;goto B7320fa;
case 0x732100:c.instructions+=289;goto B732100;
case 0x732106:c.instructions+=288;goto B732106;
case 0x73210c:c.instructions+=287;goto B73210c;
case 0x732112:c.instructions+=286;goto B732112;
case 0x732118:c.instructions+=285;goto B732118;
case 0x73211a:c.instructions+=284;goto B73211a;
case 0x732120:c.instructions+=283;goto B732120;
case 0x732126:c.instructions+=282;goto B732126;
case 0x73212c:c.instructions+=281;goto B73212c;
case 0x732132:c.instructions+=280;goto B732132;
case 0x732138:c.instructions+=279;goto B732138;
case 0x73213a:c.instructions+=278;goto B73213a;
case 0x732140:c.instructions+=277;goto B732140;
case 0x732142:c.instructions+=276;goto B732142;
case 0x732148:c.instructions+=275;goto B732148;
case 0x73214a:c.instructions+=274;goto B73214a;
case 0x732150:c.instructions+=273;goto B732150;
case 0x732156:c.instructions+=272;goto B732156;
case 0x73215c:c.instructions+=271;goto B73215c;
case 0x732162:c.instructions+=270;goto B732162;
case 0x732164:c.instructions+=269;goto B732164;
case 0x73216a:c.instructions+=268;goto B73216a;
case 0x732170:c.instructions+=267;goto B732170;
case 0x732176:c.instructions+=266;goto B732176;
case 0x73217c:c.instructions+=265;goto B73217c;
case 0x73217e:c.instructions+=264;goto B73217e;
case 0x732184:c.instructions+=263;goto B732184;
case 0x732186:c.instructions+=262;goto B732186;
case 0x732188:c.instructions+=261;goto B732188;
case 0x73218a:c.instructions+=260;goto B73218a;
case 0x732190:c.instructions+=259;goto B732190;
case 0x732192:c.instructions+=258;goto B732192;
case 0x732198:c.instructions+=257;goto B732198;
case 0x73219e:c.instructions+=256;goto B73219e;
case 0x7321a0:c.instructions+=255;goto B7321a0;
case 0x7321a6:c.instructions+=254;goto B7321a6;
case 0x7321a8:c.instructions+=253;goto B7321a8;
case 0x7321aa:c.instructions+=252;goto B7321aa;
case 0x7321b0:c.instructions+=251;goto B7321b0;
case 0x7321b6:c.instructions+=250;goto B7321b6;
case 0x7321bc:c.instructions+=249;goto B7321bc;
case 0x7321c2:c.instructions+=248;goto B7321c2;
case 0x7321c8:c.instructions+=247;goto B7321c8;
case 0x7321ca:c.instructions+=246;goto B7321ca;
case 0x7321d0:c.instructions+=245;goto B7321d0;
case 0x7321d6:c.instructions+=244;goto B7321d6;
case 0x7321dc:c.instructions+=243;goto B7321dc;
case 0x7321e2:c.instructions+=242;goto B7321e2;
case 0x7321e8:c.instructions+=241;goto B7321e8;
case 0x7321ea:c.instructions+=240;goto B7321ea;
case 0x7321f0:c.instructions+=239;goto B7321f0;
case 0x7321f2:c.instructions+=238;goto B7321f2;
case 0x7321f8:c.instructions+=237;goto B7321f8;
case 0x7321fa:c.instructions+=236;goto B7321fa;
case 0x732200:c.instructions+=235;goto B732200;
case 0x732206:c.instructions+=234;goto B732206;
case 0x73220c:c.instructions+=233;goto B73220c;
case 0x732212:c.instructions+=232;goto B732212;
case 0x732214:c.instructions+=231;goto B732214;
case 0x73221a:c.instructions+=230;goto B73221a;
case 0x732220:c.instructions+=229;goto B732220;
case 0x732226:c.instructions+=228;goto B732226;
case 0x73222c:c.instructions+=227;goto B73222c;
case 0x73222e:c.instructions+=226;goto B73222e;
case 0x732234:c.instructions+=225;goto B732234;
case 0x732236:c.instructions+=224;goto B732236;
case 0x732238:c.instructions+=223;goto B732238;
case 0x73223a:c.instructions+=222;goto B73223a;
case 0x732240:c.instructions+=221;goto B732240;
case 0x732242:c.instructions+=220;goto B732242;
case 0x732248:c.instructions+=219;goto B732248;
case 0x73224e:c.instructions+=218;goto B73224e;
case 0x732250:c.instructions+=217;goto B732250;
case 0x732256:c.instructions+=216;goto B732256;
case 0x732258:c.instructions+=215;goto B732258;
case 0x73225a:c.instructions+=214;goto B73225a;
case 0x732260:c.instructions+=213;goto B732260;
case 0x732266:c.instructions+=212;goto B732266;
case 0x73226c:c.instructions+=211;goto B73226c;
case 0x732272:c.instructions+=210;goto B732272;
case 0x732278:c.instructions+=209;goto B732278;
case 0x73227a:c.instructions+=208;goto B73227a;
case 0x732280:c.instructions+=207;goto B732280;
case 0x732286:c.instructions+=206;goto B732286;
case 0x73228c:c.instructions+=205;goto B73228c;
case 0x732292:c.instructions+=204;goto B732292;
case 0x732298:c.instructions+=203;goto B732298;
case 0x73229a:c.instructions+=202;goto B73229a;
case 0x7322a0:c.instructions+=201;goto B7322a0;
case 0x7322a2:c.instructions+=200;goto B7322a2;
case 0x7322a4:c.instructions+=199;goto B7322a4;
case 0x7322aa:c.instructions+=198;goto B7322aa;
case 0x7322ac:c.instructions+=197;goto B7322ac;
case 0x7322ae:c.instructions+=196;goto B7322ae;
case 0x7322b4:c.instructions+=195;goto B7322b4;
case 0x7322ba:c.instructions+=194;goto B7322ba;
case 0x7322c0:c.instructions+=193;goto B7322c0;
case 0x7322c6:c.instructions+=192;goto B7322c6;
case 0x7322cc:c.instructions+=191;goto B7322cc;
case 0x7322ce:c.instructions+=190;goto B7322ce;
case 0x7322d4:c.instructions+=189;goto B7322d4;
case 0x7322da:c.instructions+=188;goto B7322da;
case 0x7322e0:c.instructions+=187;goto B7322e0;
case 0x7322e6:c.instructions+=186;goto B7322e6;
case 0x7322ec:c.instructions+=185;goto B7322ec;
case 0x7322ee:c.instructions+=184;goto B7322ee;
case 0x7322f4:c.instructions+=183;goto B7322f4;
case 0x7322fa:c.instructions+=182;goto B7322fa;
case 0x7322fc:c.instructions+=181;goto B7322fc;
case 0x732302:c.instructions+=180;goto B732302;
case 0x732304:c.instructions+=179;goto B732304;
case 0x73230a:c.instructions+=178;goto B73230a;
case 0x73230c:c.instructions+=177;goto B73230c;
case 0x73230e:c.instructions+=176;goto B73230e;
case 0x732314:c.instructions+=175;goto B732314;
case 0x732316:c.instructions+=174;goto B732316;
case 0x732318:c.instructions+=173;goto B732318;
case 0x73231a:c.instructions+=172;goto B73231a;
case 0x732320:c.instructions+=171;goto B732320;
case 0x732322:c.instructions+=170;goto B732322;
case 0x732324:c.instructions+=169;goto B732324;
case 0x73232a:c.instructions+=168;goto B73232a;
case 0x732330:c.instructions+=167;goto B732330;
case 0x732336:c.instructions+=166;goto B732336;
case 0x73233c:c.instructions+=165;goto B73233c;
case 0x732342:c.instructions+=164;goto B732342;
case 0x732344:c.instructions+=163;goto B732344;
case 0x73234a:c.instructions+=162;goto B73234a;
case 0x732350:c.instructions+=161;goto B732350;
case 0x732356:c.instructions+=160;goto B732356;
case 0x73235c:c.instructions+=159;goto B73235c;
case 0x732362:c.instructions+=158;goto B732362;
case 0x732364:c.instructions+=157;goto B732364;
case 0x73236a:c.instructions+=156;goto B73236a;
case 0x73236c:c.instructions+=155;goto B73236c;
case 0x73236e:c.instructions+=154;goto B73236e;
case 0x732374:c.instructions+=153;goto B732374;
case 0x732376:c.instructions+=152;goto B732376;
case 0x732378:c.instructions+=151;goto B732378;
case 0x73237e:c.instructions+=150;goto B73237e;
case 0x732384:c.instructions+=149;goto B732384;
case 0x73238a:c.instructions+=148;goto B73238a;
case 0x732390:c.instructions+=147;goto B732390;
case 0x732396:c.instructions+=146;goto B732396;
case 0x732398:c.instructions+=145;goto B732398;
case 0x73239e:c.instructions+=144;goto B73239e;
case 0x7323a4:c.instructions+=143;goto B7323a4;
case 0x7323aa:c.instructions+=142;goto B7323aa;
case 0x7323b0:c.instructions+=141;goto B7323b0;
case 0x7323b6:c.instructions+=140;goto B7323b6;
case 0x7323bc:c.instructions+=139;goto B7323bc;
case 0x7323be:c.instructions+=138;goto B7323be;
case 0x7323c4:c.instructions+=137;goto B7323c4;
case 0x7323c6:c.instructions+=136;goto B7323c6;
case 0x7323cc:c.instructions+=135;goto B7323cc;
case 0x7323ce:c.instructions+=134;goto B7323ce;
case 0x7323d4:c.instructions+=133;goto B7323d4;
case 0x7323d6:c.instructions+=132;goto B7323d6;
case 0x7323dc:c.instructions+=131;goto B7323dc;
case 0x7323e2:c.instructions+=130;goto B7323e2;
case 0x7323e4:c.instructions+=129;goto B7323e4;
case 0x7323ea:c.instructions+=128;goto B7323ea;
case 0x7323ec:c.instructions+=127;goto B7323ec;
case 0x7323f2:c.instructions+=126;goto B7323f2;
case 0x7323f4:c.instructions+=125;goto B7323f4;
case 0x7323fa:c.instructions+=124;goto B7323fa;
case 0x7323fc:c.instructions+=123;goto B7323fc;
case 0x732402:c.instructions+=122;goto B732402;
case 0x732407:c.instructions+=121;goto B732407;
case 0x73240d:c.instructions+=120;goto B73240d;
case 0x732412:c.instructions+=119;goto B732412;
case 0x732418:c.instructions+=118;goto B732418;
case 0x73241d:c.instructions+=117;goto B73241d;
case 0x732423:c.instructions+=116;goto B732423;
case 0x732428:c.instructions+=115;goto B732428;
case 0x73242a:c.instructions+=114;goto B73242a;
case 0x73242f:c.instructions+=113;goto B73242f;
case 0x732431:c.instructions+=112;goto B732431;
case 0x732436:c.instructions+=111;goto B732436;
case 0x73243c:c.instructions+=110;goto B73243c;
case 0x732441:c.instructions+=109;goto B732441;
case 0x732447:c.instructions+=108;goto B732447;
case 0x73244c:c.instructions+=107;goto B73244c;
case 0x732452:c.instructions+=106;goto B732452;
case 0x732458:c.instructions+=105;goto B732458;
case 0x73245e:c.instructions+=104;goto B73245e;
case 0x732464:c.instructions+=103;goto B732464;
case 0x73246a:c.instructions+=102;goto B73246a;
case 0x732470:c.instructions+=101;goto B732470;
case 0x732476:c.instructions+=100;goto B732476;
case 0x73247c:c.instructions+=99;goto B73247c;
case 0x732482:c.instructions+=98;goto B732482;
case 0x732488:c.instructions+=97;goto B732488;
case 0x73248e:c.instructions+=96;goto B73248e;
case 0x732494:c.instructions+=95;goto B732494;
case 0x73249a:c.instructions+=94;goto B73249a;
case 0x7324a0:c.instructions+=93;goto B7324a0;
case 0x7324a6:c.instructions+=92;goto B7324a6;
case 0x7324ac:c.instructions+=91;goto B7324ac;
case 0x7324b2:c.instructions+=90;goto B7324b2;
case 0x7324b8:c.instructions+=89;goto B7324b8;
case 0x7324be:c.instructions+=88;goto B7324be;
case 0x7324c4:c.instructions+=87;goto B7324c4;
case 0x7324ca:c.instructions+=86;goto B7324ca;
case 0x7324d0:c.instructions+=85;goto B7324d0;
case 0x7324d6:c.instructions+=84;goto B7324d6;
case 0x7324dc:c.instructions+=83;goto B7324dc;
case 0x7324e2:c.instructions+=82;goto B7324e2;
case 0x7324e8:c.instructions+=81;goto B7324e8;
case 0x7324ee:c.instructions+=80;goto B7324ee;
case 0x7324f4:c.instructions+=79;goto B7324f4;
case 0x7324fa:c.instructions+=78;goto B7324fa;
case 0x7324ff:c.instructions+=77;goto B7324ff;
case 0x732505:c.instructions+=76;goto B732505;
case 0x73250b:c.instructions+=75;goto B73250b;
case 0x732511:c.instructions+=74;goto B732511;
case 0x732517:c.instructions+=73;goto B732517;
case 0x73251d:c.instructions+=72;goto B73251d;
case 0x73251f:c.instructions+=71;goto B73251f;
case 0x732525:c.instructions+=70;goto B732525;
case 0x732527:c.instructions+=69;goto B732527;
case 0x73252d:c.instructions+=68;goto B73252d;
case 0x732533:c.instructions+=67;goto B732533;
case 0x732539:c.instructions+=66;goto B732539;
case 0x73253f:c.instructions+=65;goto B73253f;
case 0x732545:c.instructions+=64;goto B732545;
case 0x73254b:c.instructions+=63;goto B73254b;
case 0x732551:c.instructions+=62;goto B732551;
case 0x732553:c.instructions+=61;goto B732553;
case 0x732559:c.instructions+=60;goto B732559;
case 0x73255b:c.instructions+=59;goto B73255b;
case 0x732561:c.instructions+=58;goto B732561;
case 0x732567:c.instructions+=57;goto B732567;
case 0x73256d:c.instructions+=56;goto B73256d;
case 0x732573:c.instructions+=55;goto B732573;
case 0x732579:c.instructions+=54;goto B732579;
case 0x73257f:c.instructions+=53;goto B73257f;
case 0x732585:c.instructions+=52;goto B732585;
case 0x732587:c.instructions+=51;goto B732587;
case 0x73258d:c.instructions+=50;goto B73258d;
case 0x73258f:c.instructions+=49;goto B73258f;
case 0x732595:c.instructions+=48;goto B732595;
case 0x73259b:c.instructions+=47;goto B73259b;
case 0x7325a1:c.instructions+=46;goto B7325a1;
case 0x7325a7:c.instructions+=45;goto B7325a7;
case 0x7325ad:c.instructions+=44;goto B7325ad;
case 0x7325b3:c.instructions+=43;goto B7325b3;
case 0x7325b9:c.instructions+=42;goto B7325b9;
case 0x7325bb:c.instructions+=41;goto B7325bb;
case 0x7325c1:c.instructions+=40;goto B7325c1;
case 0x7325c3:c.instructions+=39;goto B7325c3;
case 0x7325c9:c.instructions+=38;goto B7325c9;
case 0x7325cf:c.instructions+=37;goto B7325cf;
case 0x7325d2:c.instructions+=36;goto B7325d2;
case 0x7325d8:c.instructions+=35;goto B7325d8;
case 0x7325de:c.instructions+=34;goto B7325de;
case 0x7325e4:c.instructions+=33;goto B7325e4;
case 0x7325ea:c.instructions+=32;goto B7325ea;
case 0x7325ec:c.instructions+=31;goto B7325ec;
case 0x7325ef:c.instructions+=30;goto B7325ef;
case 0x7325f1:c.instructions+=29;goto B7325f1;
case 0x7325f7:c.instructions+=28;goto B7325f7;
case 0x7325fd:c.instructions+=27;goto B7325fd;
case 0x732603:c.instructions+=26;goto B732603;
case 0x732609:c.instructions+=25;goto B732609;
case 0x73260f:c.instructions+=24;goto B73260f;
case 0x732615:c.instructions+=23;goto B732615;
case 0x73261b:c.instructions+=22;goto B73261b;
case 0x73261d:c.instructions+=21;goto B73261d;
case 0x732623:c.instructions+=20;goto B732623;
case 0x732625:c.instructions+=19;goto B732625;
case 0x73262b:c.instructions+=18;goto B73262b;
case 0x732631:c.instructions+=17;goto B732631;
case 0x732637:c.instructions+=16;goto B732637;
case 0x73263d:c.instructions+=15;goto B73263d;
case 0x732643:c.instructions+=14;goto B732643;
case 0x732649:c.instructions+=13;goto B732649;
case 0x73264f:c.instructions+=12;goto B73264f;
case 0x732651:c.instructions+=11;goto B732651;
case 0x732657:c.instructions+=10;goto B732657;
case 0x732659:c.instructions+=9;goto B732659;
case 0x73265f:c.instructions+=8;goto B73265f;
case 0x732665:c.instructions+=7;goto B732665;
case 0x73266b:c.instructions+=6;goto B73266b;
case 0x732671:c.instructions+=5;goto B732671;
case 0x732677:c.instructions+=4;goto B732677;
case 0x73267d:c.instructions+=3;goto B73267d;
case 0x732682:c.instructions+=2;goto B732682;
case 0x732688:c.instructions+=1;goto B732688;
case 0x732689:goto L732689;
case 0x73268a:c.instructions+=34;goto B73268a;
case 0x73268c:c.instructions+=33;goto B73268c;
case 0x73268d:c.instructions+=32;goto B73268d;
case 0x73268e:c.instructions+=31;goto B73268e;
case 0x73268f:c.instructions+=30;goto B73268f;
case 0x732692:c.instructions+=29;goto B732692;
case 0x732695:c.instructions+=28;goto B732695;
case 0x732699:c.instructions+=27;goto B732699;
case 0x73269b:c.instructions+=26;goto B73269b;
case 0x73269d:c.instructions+=25;goto B73269d;
case 0x73269f:c.instructions+=24;goto B73269f;
case 0x7326a1:c.instructions+=23;goto B7326a1;
case 0x7326a4:c.instructions+=22;goto B7326a4;
case 0x7326a6:c.instructions+=21;goto B7326a6;
case 0x7326a9:c.instructions+=20;goto B7326a9;
case 0x7326ab:c.instructions+=19;goto B7326ab;
case 0x7326ac:c.instructions+=18;goto B7326ac;
case 0x7326af:c.instructions+=17;goto B7326af;
case 0x7326b2:c.instructions+=16;goto B7326b2;
case 0x7326b5:c.instructions+=15;goto B7326b5;
case 0x7326b8:c.instructions+=14;goto B7326b8;
case 0x7326ba:c.instructions+=13;goto B7326ba;
case 0x7326bd:c.instructions+=12;goto B7326bd;
case 0x7326c0:c.instructions+=11;goto B7326c0;
case 0x7326c3:c.instructions+=10;goto B7326c3;
case 0x7326c6:c.instructions+=9;goto B7326c6;
case 0x7326c9:c.instructions+=8;goto B7326c9;
case 0x7326cc:c.instructions+=7;goto B7326cc;
case 0x7326cf:c.instructions+=6;goto B7326cf;
case 0x7326d1:c.instructions+=5;goto B7326d1;
case 0x7326d4:c.instructions+=4;goto B7326d4;
case 0x7326d6:c.instructions+=3;goto B7326d6;
case 0x7326d9:c.instructions+=2;goto B7326d9;
case 0x7326dc:c.instructions+=1;goto B7326dc;
case 0x7326e1:goto L7326e1;
case 0x7326e3:c.instructions+=7;goto B7326e3;
case 0x7326e6:c.instructions+=6;goto B7326e6;
case 0x7326eb:c.instructions+=5;goto B7326eb;
case 0x7326ed:c.instructions+=4;goto B7326ed;
case 0x7326ef:c.instructions+=3;goto B7326ef;
case 0x7326f2:c.instructions+=2;goto B7326f2;
case 0x7326f3:c.instructions+=1;goto B7326f3;
case 0x7326f8:goto L7326f8;
case 0x7326fa:c.instructions+=52;goto B7326fa;
case 0x7326fc:c.instructions+=51;goto B7326fc;
case 0x7326ff:c.instructions+=50;goto B7326ff;
case 0x732702:c.instructions+=49;goto B732702;
case 0x732705:c.instructions+=48;goto B732705;
case 0x732707:c.instructions+=47;goto B732707;
case 0x73270a:c.instructions+=46;goto B73270a;
case 0x73270d:c.instructions+=45;goto B73270d;
case 0x73270f:c.instructions+=44;goto B73270f;
case 0x732712:c.instructions+=43;goto B732712;
case 0x732715:c.instructions+=42;goto B732715;
case 0x732717:c.instructions+=41;goto B732717;
case 0x73271a:c.instructions+=40;goto B73271a;
case 0x73271d:c.instructions+=39;goto B73271d;
case 0x73271f:c.instructions+=38;goto B73271f;
case 0x732722:c.instructions+=37;goto B732722;
case 0x732725:c.instructions+=36;goto B732725;
case 0x732727:c.instructions+=35;goto B732727;
case 0x73272a:c.instructions+=34;goto B73272a;
case 0x73272d:c.instructions+=33;goto B73272d;
case 0x73272f:c.instructions+=32;goto B73272f;
case 0x732732:c.instructions+=31;goto B732732;
case 0x732735:c.instructions+=30;goto B732735;
case 0x732737:c.instructions+=29;goto B732737;
case 0x73273a:c.instructions+=28;goto B73273a;
case 0x73273d:c.instructions+=27;goto B73273d;
case 0x73273f:c.instructions+=26;goto B73273f;
case 0x732742:c.instructions+=25;goto B732742;
case 0x732745:c.instructions+=24;goto B732745;
case 0x732747:c.instructions+=23;goto B732747;
case 0x73274a:c.instructions+=22;goto B73274a;
case 0x73274d:c.instructions+=21;goto B73274d;
case 0x73274f:c.instructions+=20;goto B73274f;
case 0x732752:c.instructions+=19;goto B732752;
case 0x732755:c.instructions+=18;goto B732755;
case 0x732757:c.instructions+=17;goto B732757;
case 0x73275a:c.instructions+=16;goto B73275a;
case 0x73275d:c.instructions+=15;goto B73275d;
case 0x73275f:c.instructions+=14;goto B73275f;
case 0x732762:c.instructions+=13;goto B732762;
case 0x732765:c.instructions+=12;goto B732765;
case 0x732767:c.instructions+=11;goto B732767;
case 0x73276a:c.instructions+=10;goto B73276a;
case 0x73276d:c.instructions+=9;goto B73276d;
case 0x73276f:c.instructions+=8;goto B73276f;
case 0x732772:c.instructions+=7;goto B732772;
case 0x732774:c.instructions+=6;goto B732774;
case 0x732777:c.instructions+=5;goto B732777;
case 0x732779:c.instructions+=4;goto B732779;
case 0x73277b:c.instructions+=3;goto B73277b;
case 0x73277e:c.instructions+=2;goto B73277e;
case 0x73277f:c.instructions+=1;goto B73277f;
case 0x732785:goto L732785;
case 0x732788:c.instructions+=28;goto B732788;
case 0x73278a:c.instructions+=27;goto B73278a;
case 0x73278d:c.instructions+=26;goto B73278d;
case 0x73278e:c.instructions+=25;goto B73278e;
case 0x732790:c.instructions+=24;goto B732790;
case 0x732792:c.instructions+=23;goto B732792;
case 0x732795:c.instructions+=22;goto B732795;
case 0x732797:c.instructions+=21;goto B732797;
case 0x73279a:c.instructions+=20;goto B73279a;
case 0x73279d:c.instructions+=19;goto B73279d;
case 0x73279f:c.instructions+=18;goto B73279f;
case 0x7327a2:c.instructions+=17;goto B7327a2;
case 0x7327a5:c.instructions+=16;goto B7327a5;
case 0x7327a7:c.instructions+=15;goto B7327a7;
case 0x7327aa:c.instructions+=14;goto B7327aa;
case 0x7327ad:c.instructions+=13;goto B7327ad;
case 0x7327af:c.instructions+=12;goto B7327af;
case 0x7327b2:c.instructions+=11;goto B7327b2;
case 0x7327b5:c.instructions+=10;goto B7327b5;
case 0x7327b7:c.instructions+=9;goto B7327b7;
case 0x7327ba:c.instructions+=8;goto B7327ba;
case 0x7327bd:c.instructions+=7;goto B7327bd;
case 0x7327bf:c.instructions+=6;goto B7327bf;
case 0x7327c2:c.instructions+=5;goto B7327c2;
case 0x7327c6:c.instructions+=4;goto B7327c6;
case 0x7327c9:c.instructions+=3;goto B7327c9;
case 0x7327cb:c.instructions+=2;goto B7327cb;
case 0x7327cd:c.instructions+=1;goto B7327cd;
case 0x7327d0:goto L7327d0;
case 0x7327d3:c.instructions+=53;goto B7327d3;
case 0x7327d5:c.instructions+=52;goto B7327d5;
case 0x7327d8:c.instructions+=51;goto B7327d8;
case 0x7327da:c.instructions+=50;goto B7327da;
case 0x7327dd:c.instructions+=49;goto B7327dd;
case 0x7327e0:c.instructions+=48;goto B7327e0;
case 0x7327e2:c.instructions+=47;goto B7327e2;
case 0x7327e5:c.instructions+=46;goto B7327e5;
case 0x7327e8:c.instructions+=45;goto B7327e8;
case 0x7327ea:c.instructions+=44;goto B7327ea;
case 0x7327ed:c.instructions+=43;goto B7327ed;
case 0x7327f0:c.instructions+=42;goto B7327f0;
case 0x7327f2:c.instructions+=41;goto B7327f2;
case 0x7327f5:c.instructions+=40;goto B7327f5;
case 0x7327f8:c.instructions+=39;goto B7327f8;
case 0x7327fa:c.instructions+=38;goto B7327fa;
case 0x7327fd:c.instructions+=37;goto B7327fd;
case 0x732800:c.instructions+=36;goto B732800;
case 0x732802:c.instructions+=35;goto B732802;
case 0x732805:c.instructions+=34;goto B732805;
case 0x732808:c.instructions+=33;goto B732808;
case 0x73280a:c.instructions+=32;goto B73280a;
case 0x73280d:c.instructions+=31;goto B73280d;
case 0x732810:c.instructions+=30;goto B732810;
case 0x732812:c.instructions+=29;goto B732812;
case 0x732815:c.instructions+=28;goto B732815;
case 0x732818:c.instructions+=27;goto B732818;
case 0x73281a:c.instructions+=26;goto B73281a;
case 0x73281d:c.instructions+=25;goto B73281d;
case 0x732820:c.instructions+=24;goto B732820;
case 0x732822:c.instructions+=23;goto B732822;
case 0x732825:c.instructions+=22;goto B732825;
case 0x732828:c.instructions+=21;goto B732828;
case 0x73282a:c.instructions+=20;goto B73282a;
case 0x73282d:c.instructions+=19;goto B73282d;
case 0x732830:c.instructions+=18;goto B732830;
case 0x732832:c.instructions+=17;goto B732832;
case 0x732835:c.instructions+=16;goto B732835;
case 0x732838:c.instructions+=15;goto B732838;
case 0x73283a:c.instructions+=14;goto B73283a;
case 0x73283d:c.instructions+=13;goto B73283d;
case 0x732840:c.instructions+=12;goto B732840;
case 0x732842:c.instructions+=11;goto B732842;
case 0x732845:c.instructions+=10;goto B732845;
case 0x732848:c.instructions+=9;goto B732848;
case 0x73284a:c.instructions+=8;goto B73284a;
case 0x73284d:c.instructions+=7;goto B73284d;
case 0x73284f:c.instructions+=6;goto B73284f;
case 0x732851:c.instructions+=5;goto B732851;
case 0x732853:c.instructions+=4;goto B732853;
case 0x732855:c.instructions+=3;goto B732855;
case 0x732858:c.instructions+=2;goto B732858;
case 0x732859:c.instructions+=1;goto B732859;
case 0x73285f:goto L73285f;
case 0x732860:c.instructions+=4;goto B732860;
case 0x732861:c.instructions+=3;goto B732861;
case 0x732862:c.instructions+=2;goto B732862;
case 0x732863:c.instructions+=1;goto B732863;
case 0x732866:goto L732866;
case 0x732867:c.instructions+=8;goto B732867;
case 0x732869:c.instructions+=7;goto B732869;
case 0x73286c:c.instructions+=6;goto B73286c;
case 0x73286f:c.instructions+=5;goto B73286f;
case 0x732870:c.instructions+=4;goto B732870;
case 0x732873:c.instructions+=3;goto B732873;
case 0x732875:c.instructions+=2;goto B732875;
case 0x732878:c.instructions+=1;goto B732878;
case 0x73287a:goto L73287a;
case 0x73287b:c.instructions+=1;goto B73287b;
case 0x73287e:goto L73287e;
case 0x732881:c.instructions+=4;goto B732881;
case 0x732882:c.instructions+=3;goto B732882;
case 0x732885:c.instructions+=2;goto B732885;
case 0x732886:c.instructions+=1;goto B732886;
case 0x73288b:goto L73288b;
case 0x73288e:c.instructions+=6;goto B73288e;
case 0x732891:c.instructions+=5;goto B732891;
case 0x732893:c.instructions+=4;goto B732893;
case 0x732895:c.instructions+=3;goto B732895;
case 0x732898:c.instructions+=2;goto B732898;
case 0x73289b:c.instructions+=1;goto B73289b;
case 0x73289d:goto L73289d;
case 0x7328a0:c.instructions+=9;goto B7328a0;
case 0x7328a3:c.instructions+=8;goto B7328a3;
case 0x7328a7:c.instructions+=7;goto B7328a7;
case 0x7328ab:c.instructions+=6;goto B7328ab;
case 0x7328ae:c.instructions+=5;goto B7328ae;
case 0x7328b0:c.instructions+=4;goto B7328b0;
case 0x7328b3:c.instructions+=3;goto B7328b3;
case 0x7328b4:c.instructions+=2;goto B7328b4;
case 0x7328bb:c.instructions+=1;goto B7328bb;
case 0x7328c0:goto L7328c0;
case 0x7328c3:c.instructions+=8;goto B7328c3;
case 0x7328c6:c.instructions+=7;goto B7328c6;
case 0x7328c9:c.instructions+=6;goto B7328c9;
case 0x7328ca:c.instructions+=5;goto B7328ca;
case 0x7328cd:c.instructions+=4;goto B7328cd;
case 0x7328d4:c.instructions+=3;goto B7328d4;
case 0x7328d5:c.instructions+=2;goto B7328d5;
case 0x7328d8:c.instructions+=1;goto B7328d8;
case 0x7328dd:goto L7328dd;
case 0x7328df:c.instructions+=1;goto B7328df;
case 0x7328e1:goto L7328e1;
case 0x7328e2:goto L7328e2;
case 0x7328e4:c.instructions+=4;goto B7328e4;
case 0x7328e5:c.instructions+=3;goto B7328e5;
case 0x7328e6:c.instructions+=2;goto B7328e6;
case 0x7328e7:c.instructions+=1;goto B7328e7;
case 0x7328e8:goto L7328e8;
case 0x7328e9:c.instructions+=18;goto B7328e9;
case 0x7328eb:c.instructions+=17;goto B7328eb;
case 0x7328ee:c.instructions+=16;goto B7328ee;
case 0x7328f1:c.instructions+=15;goto B7328f1;
case 0x7328f2:c.instructions+=14;goto B7328f2;
case 0x7328f5:c.instructions+=13;goto B7328f5;
case 0x7328fb:c.instructions+=12;goto B7328fb;
case 0x732902:c.instructions+=11;goto B732902;
case 0x732905:c.instructions+=10;goto B732905;
case 0x732909:c.instructions+=9;goto B732909;
case 0x73290c:c.instructions+=8;goto B73290c;
case 0x73290f:c.instructions+=7;goto B73290f;
case 0x732910:c.instructions+=6;goto B732910;
case 0x732913:c.instructions+=5;goto B732913;
case 0x732916:c.instructions+=4;goto B732916;
case 0x732917:c.instructions+=3;goto B732917;
case 0x73291c:c.instructions+=2;goto B73291c;
case 0x73291f:c.instructions+=1;goto B73291f;
case 0x732924:goto L732924;
case 0x732926:c.instructions+=2;goto B732926;
case 0x732927:c.instructions+=1;goto B732927;
case 0x732929:goto L732929;
case 0x73292b:c.instructions+=1;goto B73292b;
case 0x732930:goto L732930;
case 0x732932:goto L732932;
case 0x732934:goto L732934;
case 0x732937:c.instructions+=4;goto B732937;
case 0x732938:c.instructions+=3;goto B732938;
case 0x73293a:c.instructions+=2;goto B73293a;
case 0x73293d:c.instructions+=1;goto B73293d;
case 0x732942:goto L732942;
case 0x732945:c.instructions+=10;goto B732945;
case 0x732947:c.instructions+=9;goto B732947;
case 0x73294a:c.instructions+=8;goto B73294a;
case 0x73294b:c.instructions+=7;goto B73294b;
case 0x73294c:c.instructions+=6;goto B73294c;
case 0x73294e:c.instructions+=5;goto B73294e;
case 0x732951:c.instructions+=4;goto B732951;
case 0x732952:c.instructions+=3;goto B732952;
case 0x732953:c.instructions+=2;goto B732953;
case 0x73295a:c.instructions+=1;goto B73295a;
case 0x73295f:goto L73295f;
case 0x732962:c.instructions+=7;goto B732962;
case 0x732965:c.instructions+=6;goto B732965;
case 0x732968:c.instructions+=5;goto B732968;
case 0x732969:c.instructions+=4;goto B732969;
case 0x73296c:c.instructions+=3;goto B73296c;
case 0x73296d:c.instructions+=2;goto B73296d;
case 0x73296f:c.instructions+=1;goto B73296f;
case 0x732974:goto L732974;
case 0x732975:c.instructions+=5;goto B732975;
case 0x73297c:c.instructions+=4;goto B73297c;
case 0x73297d:c.instructions+=3;goto B73297d;
case 0x73297e:c.instructions+=2;goto B73297e;
case 0x73297f:c.instructions+=1;goto B73297f;
case 0x732980:goto L732980;
case 0x732981:c.instructions+=12;goto B732981;
case 0x732983:c.instructions+=11;goto B732983;
case 0x732986:c.instructions+=10;goto B732986;
case 0x732989:c.instructions+=9;goto B732989;
case 0x73298a:c.instructions+=8;goto B73298a;
case 0x73298d:c.instructions+=7;goto B73298d;
case 0x73298e:c.instructions+=6;goto B73298e;
case 0x732990:c.instructions+=5;goto B732990;
case 0x732993:c.instructions+=4;goto B732993;
case 0x732996:c.instructions+=3;goto B732996;
case 0x732998:c.instructions+=2;goto B732998;
case 0x73299b:c.instructions+=1;goto B73299b;
case 0x73299d:goto L73299d;
case 0x73299e:c.instructions+=4;goto B73299e;
case 0x7329a2:c.instructions+=3;goto B7329a2;
case 0x7329a3:c.instructions+=2;goto B7329a3;
case 0x7329a6:c.instructions+=1;goto B7329a6;
case 0x7329ab:goto L7329ab;
case 0x7329ae:c.instructions+=1;goto B7329ae;
case 0x7329b1:goto L7329b1;
case 0x7329b4:c.instructions+=1;goto B7329b4;
case 0x7329ba:goto L7329ba;
case 0x7329bb:goto L7329bb;
case 0x7329be:c.instructions+=4;goto B7329be;
case 0x7329c1:c.instructions+=3;goto B7329c1;
case 0x7329c4:c.instructions+=2;goto B7329c4;
case 0x7329c5:c.instructions+=1;goto B7329c5;
case 0x7329ca:goto L7329ca;
case 0x7329cd:c.instructions+=7;goto B7329cd;
case 0x7329d1:c.instructions+=6;goto B7329d1;
case 0x7329d4:c.instructions+=5;goto B7329d4;
case 0x7329d7:c.instructions+=4;goto B7329d7;
case 0x7329da:c.instructions+=3;goto B7329da;
case 0x7329dd:c.instructions+=2;goto B7329dd;
case 0x7329e0:c.instructions+=1;goto B7329e0;
case 0x7329e6:goto L7329e6;
case 0x7329e9:c.instructions+=8;goto B7329e9;
case 0x7329ec:c.instructions+=7;goto B7329ec;
case 0x7329ed:c.instructions+=6;goto B7329ed;
case 0x7329f1:c.instructions+=5;goto B7329f1;
case 0x7329f4:c.instructions+=4;goto B7329f4;
case 0x7329f5:c.instructions+=3;goto B7329f5;
case 0x7329f6:c.instructions+=2;goto B7329f6;
case 0x7329f9:c.instructions+=1;goto B7329f9;
case 0x7329fe:goto L7329fe;
case 0x732a01:c.instructions+=3;goto B732a01;
case 0x732a03:c.instructions+=2;goto B732a03;
case 0x732a06:c.instructions+=1;goto B732a06;
case 0x732a0c:goto L732a0c;
case 0x732a10:c.instructions+=3;goto B732a10;
case 0x732a13:c.instructions+=2;goto B732a13;
case 0x732a17:c.instructions+=1;goto B732a17;
case 0x732a19:goto L732a19;
case 0x732a1c:c.instructions+=1;goto B732a1c;
case 0x732a1e:goto L732a1e;
case 0x732a21:c.instructions+=2;goto B732a21;
case 0x732a22:c.instructions+=1;goto B732a22;
case 0x732a27:goto L732a27;
case 0x732a29:c.instructions+=6;goto B732a29;
case 0x732a2c:c.instructions+=5;goto B732a2c;
case 0x732a2d:c.instructions+=4;goto B732a2d;
case 0x732a2e:c.instructions+=3;goto B732a2e;
case 0x732a2f:c.instructions+=2;goto B732a2f;
case 0x732a36:c.instructions+=1;goto B732a36;
case 0x732a38:goto L732a38;
case 0x732a3b:c.instructions+=2;goto B732a3b;
case 0x732a3c:c.instructions+=1;goto B732a3c;
case 0x732a41:goto L732a41;
case 0x732a43:c.instructions+=5;goto B732a43;
case 0x732a46:c.instructions+=4;goto B732a46;
case 0x732a47:c.instructions+=3;goto B732a47;
case 0x732a48:c.instructions+=2;goto B732a48;
case 0x732a49:c.instructions+=1;goto B732a49;
case 0x732a4d:goto L732a4d;
case 0x732a50:c.instructions+=4;goto B732a50;
case 0x732a53:c.instructions+=3;goto B732a53;
case 0x732a55:c.instructions+=2;goto B732a55;
case 0x732a56:c.instructions+=1;goto B732a56;
case 0x732a5b:goto L732a5b;
case 0x732a5d:c.instructions+=1;goto B732a5d;
case 0x732a5f:goto L732a5f;
case 0x732a62:c.instructions+=1;goto B732a62;
case 0x732a64:goto L732a64;
case 0x732a67:c.instructions+=2;goto B732a67;
case 0x732a68:c.instructions+=1;goto B732a68;
case 0x732a6d:goto L732a6d;
case 0x732a6f:c.instructions+=7;goto B732a6f;
case 0x732a72:c.instructions+=6;goto B732a72;
case 0x732a73:c.instructions+=5;goto B732a73;
case 0x732a74:c.instructions+=4;goto B732a74;
case 0x732a75:c.instructions+=3;goto B732a75;
case 0x732a79:c.instructions+=2;goto B732a79;
case 0x732a80:c.instructions+=1;goto B732a80;
case 0x732a82:goto L732a82;
case 0x732a85:c.instructions+=2;goto B732a85;
case 0x732a86:c.instructions+=1;goto B732a86;
case 0x732a8b:goto L732a8b;
case 0x732a8d:c.instructions+=5;goto B732a8d;
case 0x732a90:c.instructions+=4;goto B732a90;
case 0x732a91:c.instructions+=3;goto B732a91;
case 0x732a92:c.instructions+=2;goto B732a92;
case 0x732a93:c.instructions+=1;goto B732a93;
case 0x732a97:goto L732a97;
case 0x732a9a:c.instructions+=4;goto B732a9a;
case 0x732a9c:c.instructions+=3;goto B732a9c;
case 0x732a9f:c.instructions+=2;goto B732a9f;
case 0x732aa0:c.instructions+=1;goto B732aa0;
case 0x732aa5:goto L732aa5;
case 0x732aa7:goto L732aa7;
case 0x732aaa:c.instructions+=1;goto B732aaa;
case 0x732aaf:goto L732aaf;
case 0x732ab2:c.instructions+=8;goto B732ab2;
case 0x732ab5:c.instructions+=7;goto B732ab5;
case 0x732ab6:c.instructions+=6;goto B732ab6;
case 0x732ab9:c.instructions+=5;goto B732ab9;
case 0x732aba:c.instructions+=4;goto B732aba;
case 0x732abd:c.instructions+=3;goto B732abd;
case 0x732abe:c.instructions+=2;goto B732abe;
case 0x732abf:c.instructions+=1;goto B732abf;
case 0x732ac4:goto L732ac4;
case 0x732ac6:c.instructions+=1;goto B732ac6;
case 0x732ac8:goto L732ac8;
case 0x732acb:c.instructions+=2;goto B732acb;
case 0x732acd:c.instructions+=1;goto B732acd;
case 0x732acf:goto L732acf;
case 0x732ad2:c.instructions+=1;goto B732ad2;
case 0x732ad4:goto L732ad4;
case 0x732ad7:c.instructions+=3;goto B732ad7;
case 0x732ad8:c.instructions+=2;goto B732ad8;
case 0x732adb:c.instructions+=1;goto B732adb;
case 0x732ae0:goto L732ae0;
case 0x732ae1:c.instructions+=1;goto B732ae1;
case 0x732ae2:goto L732ae2;
case 0x732ae4:c.instructions+=2;goto B732ae4;
case 0x732ae7:c.instructions+=1;goto B732ae7;
case 0x732ae9:goto L732ae9;
case 0x732aec:goto L732aec;
case 0x732aef:c.instructions+=1;goto B732aef;
case 0x732af5:goto L732af5;
case 0x732af6:goto L732af6;
case 0x732af9:c.instructions+=4;goto B732af9;
case 0x732afa:c.instructions+=3;goto B732afa;
case 0x732afb:c.instructions+=2;goto B732afb;
case 0x732afc:c.instructions+=1;goto B732afc;
case 0x732afd:goto L732afd;
case 0x732b01:c.instructions+=3;goto B732b01;
case 0x732b04:c.instructions+=2;goto B732b04;
case 0x732b06:c.instructions+=1;goto B732b06;
case 0x732b08:goto L732b08;
case 0x732b09:c.instructions+=1;goto B732b09;
case 0x732b0e:goto L732b0e;
case 0x732b0f:goto L732b0f;
case 0x732b10:goto L732b10;
case 0x732b11:c.instructions+=6;goto B732b11;
case 0x732b15:c.instructions+=5;goto B732b15;
case 0x732b16:c.instructions+=4;goto B732b16;
case 0x732b1a:c.instructions+=3;goto B732b1a;
case 0x732b20:c.instructions+=2;goto B732b20;
case 0x732b23:c.instructions+=1;goto B732b23;
case 0x732b28:goto L732b28;
case 0x732b29:c.instructions+=1;goto B732b29;
case 0x732b2e:goto L732b2e;
case 0x732b31:c.instructions+=2;goto B732b31;
case 0x732b34:c.instructions+=1;goto B732b34;
case 0x732b39:goto L732b39;
case 0x732b3d:c.instructions+=9;goto B732b3d;
case 0x732b42:c.instructions+=8;goto B732b42;
case 0x732b45:c.instructions+=7;goto B732b45;
case 0x732b48:c.instructions+=6;goto B732b48;
case 0x732b4b:c.instructions+=5;goto B732b4b;
case 0x732b4e:c.instructions+=4;goto B732b4e;
case 0x732b53:c.instructions+=3;goto B732b53;
case 0x732b56:c.instructions+=2;goto B732b56;
case 0x732b5d:c.instructions+=1;goto B732b5d;
case 0x732b62:goto L732b62;
case 0x732b65:c.instructions+=2;goto B732b65;
case 0x732b67:c.instructions+=1;goto B732b67;
case 0x732b69:goto L732b69;
case 0x732b6b:c.instructions+=1;goto B732b6b;
case 0x732b70:goto L732b70;
case 0x732b72:goto L732b72;
case 0x732b74:goto L732b74;
case 0x732b78:c.instructions+=4;goto B732b78;
case 0x732b79:c.instructions+=3;goto B732b79;
case 0x732b7c:c.instructions+=2;goto B732b7c;
case 0x732b7d:c.instructions+=1;goto B732b7d;
case 0x732b7e:goto L732b7e;
case 0x732b7f:c.instructions+=8;goto B732b7f;
case 0x732b81:c.instructions+=7;goto B732b81;
case 0x732b84:c.instructions+=6;goto B732b84;
case 0x732b85:c.instructions+=5;goto B732b85;
case 0x732b88:c.instructions+=4;goto B732b88;
case 0x732b8b:c.instructions+=3;goto B732b8b;
case 0x732b8e:c.instructions+=2;goto B732b8e;
case 0x732b91:c.instructions+=1;goto B732b91;
case 0x732b93:goto L732b93;
case 0x732b96:c.instructions+=1;goto B732b96;
case 0x732b98:goto L732b98;
case 0x732b9b:c.instructions+=6;goto B732b9b;
case 0x732b9c:c.instructions+=5;goto B732b9c;
case 0x732b9f:c.instructions+=4;goto B732b9f;
case 0x732ba0:c.instructions+=3;goto B732ba0;
case 0x732ba3:c.instructions+=2;goto B732ba3;
case 0x732ba4:c.instructions+=1;goto B732ba4;
case 0x732ba9:goto L732ba9;
case 0x732bac:c.instructions+=5;goto B732bac;
case 0x732baf:c.instructions+=4;goto B732baf;
case 0x732bb1:c.instructions+=3;goto B732bb1;
case 0x732bb4:c.instructions+=2;goto B732bb4;
case 0x732bb7:c.instructions+=1;goto B732bb7;
case 0x732bb9:goto L732bb9;
case 0x732bbb:c.instructions+=4;goto B732bbb;
case 0x732bbe:c.instructions+=3;goto B732bbe;
case 0x732bbf:c.instructions+=2;goto B732bbf;
case 0x732bc0:c.instructions+=1;goto B732bc0;
case 0x732bc5:goto L732bc5;
case 0x732bc6:c.instructions+=1;goto B732bc6;
case 0x732bc7:goto L732bc7;
case 0x732bc9:c.instructions+=2;goto B732bc9;
case 0x732bca:c.instructions+=1;goto B732bca;
case 0x732bcb:goto L732bcb;
case 0x732bcc:c.instructions+=2;goto B732bcc;
case 0x732bcd:c.instructions+=1;goto B732bcd;
case 0x732bce:goto L732bce;
case 0x732bd2:c.instructions+=3;goto B732bd2;
case 0x732bd5:c.instructions+=2;goto B732bd5;
case 0x732bd7:c.instructions+=1;goto B732bd7;
case 0x732bd9:goto L732bd9;
case 0x732bda:c.instructions+=1;goto B732bda;
case 0x732bdf:goto L732bdf;
case 0x732be0:goto L732be0;
case 0x732be1:goto L732be1;
case 0x732be2:c.instructions+=16;goto B732be2;
case 0x732be4:c.instructions+=15;goto B732be4;
case 0x732be7:c.instructions+=14;goto B732be7;
case 0x732bea:c.instructions+=13;goto B732bea;
case 0x732beb:c.instructions+=12;goto B732beb;
case 0x732bee:c.instructions+=11;goto B732bee;
case 0x732bf4:c.instructions+=10;goto B732bf4;
case 0x732bf7:c.instructions+=9;goto B732bf7;
case 0x732bfb:c.instructions+=8;goto B732bfb;
case 0x732bfe:c.instructions+=7;goto B732bfe;
case 0x732c01:c.instructions+=6;goto B732c01;
case 0x732c02:c.instructions+=5;goto B732c02;
case 0x732c05:c.instructions+=4;goto B732c05;
case 0x732c0c:c.instructions+=3;goto B732c0c;
case 0x732c11:c.instructions+=2;goto B732c11;
case 0x732c18:c.instructions+=1;goto B732c18;
case 0x732c1d:goto L732c1d;
case 0x732c1f:c.instructions+=2;goto B732c1f;
case 0x732c20:c.instructions+=1;goto B732c20;
case 0x732c22:goto L732c22;
case 0x732c24:c.instructions+=1;goto B732c24;
case 0x732c29:goto L732c29;
case 0x732c2b:goto L732c2b;
case 0x732c2d:goto L732c2d;
case 0x732c2e:c.instructions+=5;goto B732c2e;
case 0x732c31:c.instructions+=4;goto B732c31;
case 0x732c32:c.instructions+=3;goto B732c32;
case 0x732c34:c.instructions+=2;goto B732c34;
case 0x732c37:c.instructions+=1;goto B732c37;
case 0x732c3c:goto L732c3c;
case 0x732c3f:c.instructions+=12;goto B732c3f;
case 0x732c41:c.instructions+=11;goto B732c41;
case 0x732c44:c.instructions+=10;goto B732c44;
case 0x732c45:c.instructions+=9;goto B732c45;
case 0x732c46:c.instructions+=8;goto B732c46;
case 0x732c47:c.instructions+=7;goto B732c47;
case 0x732c49:c.instructions+=6;goto B732c49;
case 0x732c4b:c.instructions+=5;goto B732c4b;
case 0x732c4e:c.instructions+=4;goto B732c4e;
case 0x732c4f:c.instructions+=3;goto B732c4f;
case 0x732c50:c.instructions+=2;goto B732c50;
case 0x732c53:c.instructions+=1;goto B732c53;
case 0x732c58:goto L732c58;
case 0x732c5b:c.instructions+=3;goto B732c5b;
case 0x732c5e:c.instructions+=2;goto B732c5e;
case 0x732c5f:c.instructions+=1;goto B732c5f;
case 0x732c61:goto L732c61;
case 0x732c63:c.instructions+=1;goto B732c63;
case 0x732c65:goto L732c65;
case 0x732c66:goto L732c66;
case 0x732c6b:goto L732c6b;
case 0x732c6e:c.instructions+=7;goto B732c6e;
case 0x732c71:c.instructions+=6;goto B732c71;
case 0x732c72:c.instructions+=5;goto B732c72;
case 0x732c75:c.instructions+=4;goto B732c75;
case 0x732c76:c.instructions+=3;goto B732c76;
case 0x732c79:c.instructions+=2;goto B732c79;
case 0x732c7b:c.instructions+=1;goto B732c7b;
case 0x732c80:goto L732c80;
case 0x732c81:c.instructions+=3;goto B732c81;
case 0x732c82:c.instructions+=2;goto B732c82;
case 0x732c83:c.instructions+=1;goto B732c83;
case 0x732c84:goto L732c84;
case 0x732c85:c.instructions+=14;goto B732c85;
case 0x732c87:c.instructions+=13;goto B732c87;
case 0x732c8a:c.instructions+=12;goto B732c8a;
case 0x732c8d:c.instructions+=11;goto B732c8d;
case 0x732c8e:c.instructions+=10;goto B732c8e;
case 0x732c8f:c.instructions+=9;goto B732c8f;
case 0x732c92:c.instructions+=8;goto B732c92;
case 0x732c93:c.instructions+=7;goto B732c93;
case 0x732c95:c.instructions+=6;goto B732c95;
case 0x732c98:c.instructions+=5;goto B732c98;
case 0x732c9b:c.instructions+=4;goto B732c9b;
case 0x732c9d:c.instructions+=3;goto B732c9d;
case 0x732ca0:c.instructions+=2;goto B732ca0;
case 0x732ca3:c.instructions+=1;goto B732ca3;
case 0x732ca5:goto L732ca5;
case 0x732ca6:c.instructions+=4;goto B732ca6;
case 0x732caa:c.instructions+=3;goto B732caa;
case 0x732cab:c.instructions+=2;goto B732cab;
case 0x732cae:c.instructions+=1;goto B732cae;
case 0x732cb3:goto L732cb3;
case 0x732cb6:c.instructions+=1;goto B732cb6;
case 0x732cb9:goto L732cb9;
case 0x732cbc:c.instructions+=2;goto B732cbc;
case 0x732cbe:c.instructions+=1;goto B732cbe;
case 0x732cc4:goto L732cc4;
case 0x732cc7:c.instructions+=4;goto B732cc7;
case 0x732cc8:c.instructions+=3;goto B732cc8;
case 0x732ccb:c.instructions+=2;goto B732ccb;
case 0x732ccc:c.instructions+=1;goto B732ccc;
case 0x732cd1:goto L732cd1;
case 0x732cd4:c.instructions+=7;goto B732cd4;
case 0x732cd7:c.instructions+=6;goto B732cd7;
case 0x732cda:c.instructions+=5;goto B732cda;
case 0x732cdd:c.instructions+=4;goto B732cdd;
case 0x732cdf:c.instructions+=3;goto B732cdf;
case 0x732ce2:c.instructions+=2;goto B732ce2;
case 0x732ce5:c.instructions+=1;goto B732ce5;
case 0x732ceb:goto L732ceb;
case 0x732ced:c.instructions+=8;goto B732ced;
case 0x732cf0:c.instructions+=7;goto B732cf0;
case 0x732cf1:c.instructions+=6;goto B732cf1;
case 0x732cf5:c.instructions+=5;goto B732cf5;
case 0x732cf8:c.instructions+=4;goto B732cf8;
case 0x732cf9:c.instructions+=3;goto B732cf9;
case 0x732cfa:c.instructions+=2;goto B732cfa;
case 0x732cfd:c.instructions+=1;goto B732cfd;
case 0x732d02:goto L732d02;
case 0x732d05:c.instructions+=3;goto B732d05;
case 0x732d07:c.instructions+=2;goto B732d07;
case 0x732d0a:c.instructions+=1;goto B732d0a;
case 0x732d0c:goto L732d0c;
case 0x732d0e:c.instructions+=3;goto B732d0e;
case 0x732d0f:c.instructions+=2;goto B732d0f;
case 0x732d12:c.instructions+=1;goto B732d12;
case 0x732d14:goto L732d14;
case 0x732d17:goto L732d17;
case 0x732d1b:c.instructions+=1;goto B732d1b;
case 0x732d1d:goto L732d1d;
case 0x732d20:c.instructions+=11;goto B732d20;
case 0x732d23:c.instructions+=10;goto B732d23;
case 0x732d26:c.instructions+=9;goto B732d26;
case 0x732d29:c.instructions+=8;goto B732d29;
case 0x732d2c:c.instructions+=7;goto B732d2c;
case 0x732d30:c.instructions+=6;goto B732d30;
case 0x732d33:c.instructions+=5;goto B732d33;
case 0x732d36:c.instructions+=4;goto B732d36;
case 0x732d37:c.instructions+=3;goto B732d37;
case 0x732d3a:c.instructions+=2;goto B732d3a;
case 0x732d3d:c.instructions+=1;goto B732d3d;
case 0x732d42:goto L732d42;
case 0x732d46:goto L732d46;
case 0x732d48:c.instructions+=7;goto B732d48;
case 0x732d4b:c.instructions+=6;goto B732d4b;
case 0x732d4f:c.instructions+=5;goto B732d4f;
case 0x732d50:c.instructions+=4;goto B732d50;
case 0x732d53:c.instructions+=3;goto B732d53;
case 0x732d54:c.instructions+=2;goto B732d54;
case 0x732d57:c.instructions+=1;goto B732d57;
case 0x732d5c:goto L732d5c;
case 0x732d5e:goto L732d5e;
case 0x732d60:c.instructions+=1;goto B732d60;
case 0x732d62:goto L732d62;
case 0x732d66:c.instructions+=1;goto B732d66;
case 0x732d68:goto L732d68;
case 0x732d6a:c.instructions+=4;goto B732d6a;
case 0x732d6d:c.instructions+=3;goto B732d6d;
case 0x732d6e:c.instructions+=2;goto B732d6e;
case 0x732d71:c.instructions+=1;goto B732d71;
case 0x732d76:goto L732d76;
case 0x732d77:c.instructions+=1;goto B732d77;
case 0x732d78:goto L732d78;
case 0x732d7a:c.instructions+=1;goto B732d7a;
case 0x732d7c:goto L732d7c;
case 0x732d7e:goto L732d7e;
case 0x732d80:c.instructions+=1;goto B732d80;
case 0x732d86:goto L732d86;
case 0x732d89:c.instructions+=5;goto B732d89;
case 0x732d8a:c.instructions+=4;goto B732d8a;
case 0x732d8b:c.instructions+=3;goto B732d8b;
case 0x732d8c:c.instructions+=2;goto B732d8c;
case 0x732d8d:c.instructions+=1;goto B732d8d;
case 0x732d8e:goto L732d8e;
case 0x732d8f:c.instructions+=7;goto B732d8f;
case 0x732d93:c.instructions+=6;goto B732d93;
case 0x732d94:c.instructions+=5;goto B732d94;
case 0x732d98:c.instructions+=4;goto B732d98;
case 0x732d9e:c.instructions+=3;goto B732d9e;
case 0x732da5:c.instructions+=2;goto B732da5;
case 0x732da8:c.instructions+=1;goto B732da8;
case 0x732dad:goto L732dad;
case 0x732dae:c.instructions+=1;goto B732dae;
case 0x732db3:goto L732db3;
case 0x732db6:c.instructions+=2;goto B732db6;
case 0x732db9:c.instructions+=1;goto B732db9;
case 0x732dbe:goto L732dbe;
case 0x732dc1:c.instructions+=9;goto B732dc1;
case 0x732dc4:c.instructions+=8;goto B732dc4;
case 0x732dc8:c.instructions+=7;goto B732dc8;
case 0x732dcb:c.instructions+=6;goto B732dcb;
case 0x732dce:c.instructions+=5;goto B732dce;
case 0x732dd2:c.instructions+=4;goto B732dd2;
case 0x732dd6:c.instructions+=3;goto B732dd6;
case 0x732ddb:c.instructions+=2;goto B732ddb;
case 0x732dde:c.instructions+=1;goto B732dde;
case 0x732de3:goto L732de3;
case 0x732de6:c.instructions+=2;goto B732de6;
case 0x732de8:c.instructions+=1;goto B732de8;
case 0x732dea:goto L732dea;
case 0x732dec:c.instructions+=1;goto B732dec;
case 0x732df1:goto L732df1;
case 0x732df3:goto L732df3;
case 0x732df5:goto L732df5;
case 0x732df6:c.instructions+=3;goto B732df6;
case 0x732df9:c.instructions+=2;goto B732df9;
case 0x732dfa:c.instructions+=1;goto B732dfa;
case 0x732dfb:goto L732dfb;
case 0x732dfc:c.instructions+=14;goto B732dfc;
case 0x732dfe:c.instructions+=13;goto B732dfe;
case 0x732e04:c.instructions+=12;goto B732e04;
case 0x732e07:c.instructions+=11;goto B732e07;
case 0x732e08:c.instructions+=10;goto B732e08;
case 0x732e09:c.instructions+=9;goto B732e09;
case 0x732e0c:c.instructions+=8;goto B732e0c;
case 0x732e0d:c.instructions+=7;goto B732e0d;
case 0x732e0f:c.instructions+=6;goto B732e0f;
case 0x732e11:c.instructions+=5;goto B732e11;
case 0x732e12:c.instructions+=4;goto B732e12;
case 0x732e15:c.instructions+=3;goto B732e15;
case 0x732e18:c.instructions+=2;goto B732e18;
case 0x732e1b:c.instructions+=1;goto B732e1b;
case 0x732e21:goto L732e21;
case 0x732e24:c.instructions+=1;goto B732e24;
case 0x732e26:goto L732e26;
case 0x732e29:c.instructions+=11;goto B732e29;
case 0x732e2b:c.instructions+=10;goto B732e2b;
case 0x732e2c:c.instructions+=9;goto B732e2c;
case 0x732e2d:c.instructions+=8;goto B732e2d;
case 0x732e2f:c.instructions+=7;goto B732e2f;
case 0x732e32:c.instructions+=6;goto B732e32;
case 0x732e35:c.instructions+=5;goto B732e35;
case 0x732e36:c.instructions+=4;goto B732e36;
case 0x732e39:c.instructions+=3;goto B732e39;
case 0x732e3a:c.instructions+=2;goto B732e3a;
case 0x732e3d:c.instructions+=1;goto B732e3d;
case 0x732e42:goto L732e42;
case 0x732e45:goto L732e45;
case 0x732e48:c.instructions+=1;goto B732e48;
case 0x732e4e:goto L732e4e;
case 0x732e51:c.instructions+=4;goto B732e51;
case 0x732e54:c.instructions+=3;goto B732e54;
case 0x732e57:c.instructions+=2;goto B732e57;
case 0x732e58:c.instructions+=1;goto B732e58;
case 0x732e5d:goto L732e5d;
case 0x732e60:c.instructions+=6;goto B732e60;
case 0x732e63:c.instructions+=5;goto B732e63;
case 0x732e66:c.instructions+=4;goto B732e66;
case 0x732e69:c.instructions+=3;goto B732e69;
case 0x732e6c:c.instructions+=2;goto B732e6c;
case 0x732e6f:c.instructions+=1;goto B732e6f;
case 0x732e75:goto L732e75;
case 0x732e78:c.instructions+=25;goto B732e78;
case 0x732e7b:c.instructions+=24;goto B732e7b;
case 0x732e7d:c.instructions+=23;goto B732e7d;
case 0x732e7e:c.instructions+=22;goto B732e7e;
case 0x732e80:c.instructions+=21;goto B732e80;
case 0x732e81:c.instructions+=20;goto B732e81;
case 0x732e83:c.instructions+=19;goto B732e83;
case 0x732e86:c.instructions+=18;goto B732e86;
case 0x732e88:c.instructions+=17;goto B732e88;
case 0x732e8a:c.instructions+=16;goto B732e8a;
case 0x732e8e:c.instructions+=15;goto B732e8e;
case 0x732e8f:c.instructions+=14;goto B732e8f;
case 0x732e92:c.instructions+=13;goto B732e92;
case 0x732e93:c.instructions+=12;goto B732e93;
case 0x732e95:c.instructions+=11;goto B732e95;
case 0x732e97:c.instructions+=10;goto B732e97;
case 0x732e9a:c.instructions+=9;goto B732e9a;
case 0x732e9b:c.instructions+=8;goto B732e9b;
case 0x732e9d:c.instructions+=7;goto B732e9d;
case 0x732e9e:c.instructions+=6;goto B732e9e;
case 0x732ea0:c.instructions+=5;goto B732ea0;
case 0x732ea3:c.instructions+=4;goto B732ea3;
case 0x732ea6:c.instructions+=3;goto B732ea6;
case 0x732ea9:c.instructions+=2;goto B732ea9;
case 0x732eaa:c.instructions+=1;goto B732eaa;
case 0x732eaf:goto L732eaf;
case 0x732eb3:c.instructions+=2;goto B732eb3;
case 0x732eb6:c.instructions+=1;goto B732eb6;
case 0x732eb8:goto L732eb8;
case 0x732ebb:c.instructions+=2;goto B732ebb;
case 0x732ebc:c.instructions+=1;goto B732ebc;
case 0x732ec1:goto L732ec1;
case 0x732ec3:c.instructions+=12;goto B732ec3;
case 0x732ec6:c.instructions+=11;goto B732ec6;
case 0x732ec9:c.instructions+=10;goto B732ec9;
case 0x732ecc:c.instructions+=9;goto B732ecc;
case 0x732ecf:c.instructions+=8;goto B732ecf;
case 0x732ed1:c.instructions+=7;goto B732ed1;
case 0x732ed4:c.instructions+=6;goto B732ed4;
case 0x732ed7:c.instructions+=5;goto B732ed7;
case 0x732eda:c.instructions+=4;goto B732eda;
case 0x732edd:c.instructions+=3;goto B732edd;
case 0x732ee0:c.instructions+=2;goto B732ee0;
case 0x732ee1:c.instructions+=1;goto B732ee1;
case 0x732ee6:goto L732ee6;
case 0x732ee9:c.instructions+=5;goto B732ee9;
case 0x732eec:c.instructions+=4;goto B732eec;
case 0x732eef:c.instructions+=3;goto B732eef;
case 0x732ef2:c.instructions+=2;goto B732ef2;
case 0x732ef5:c.instructions+=1;goto B732ef5;
case 0x732efc:goto L732efc;
case 0x732eff:goto L732eff;
case 0x732f03:c.instructions+=1;goto B732f03;
case 0x732f09:goto L732f09;
case 0x732f0b:goto L732f0b;
case 0x732f0e:c.instructions+=6;goto B732f0e;
case 0x732f11:c.instructions+=5;goto B732f11;
case 0x732f14:c.instructions+=4;goto B732f14;
case 0x732f17:c.instructions+=3;goto B732f17;
case 0x732f1a:c.instructions+=2;goto B732f1a;
case 0x732f1b:c.instructions+=1;goto B732f1b;
case 0x732f20:goto L732f20;
case 0x732f23:c.instructions+=6;goto B732f23;
case 0x732f29:c.instructions+=5;goto B732f29;
case 0x732f2c:c.instructions+=4;goto B732f2c;
case 0x732f2d:c.instructions+=3;goto B732f2d;
case 0x732f30:c.instructions+=2;goto B732f30;
case 0x732f31:c.instructions+=1;goto B732f31;
case 0x732f36:goto L732f36;
case 0x732f39:c.instructions+=1;goto B732f39;
case 0x732f3b:goto L732f3b;
case 0x732f3e:c.instructions+=1;goto B732f3e;
case 0x732f40:goto L732f40;
case 0x732f43:c.instructions+=4;goto B732f43;
case 0x732f44:c.instructions+=3;goto B732f44;
case 0x732f47:c.instructions+=2;goto B732f47;
case 0x732f48:c.instructions+=1;goto B732f48;
case 0x732f4d:goto L732f4d;
case 0x732f50:c.instructions+=7;goto B732f50;
case 0x732f53:c.instructions+=6;goto B732f53;
case 0x732f56:c.instructions+=5;goto B732f56;
case 0x732f58:c.instructions+=4;goto B732f58;
case 0x732f5a:c.instructions+=3;goto B732f5a;
case 0x732f5d:c.instructions+=2;goto B732f5d;
case 0x732f60:c.instructions+=1;goto B732f60;
case 0x732f62:goto L732f62;
case 0x732f65:c.instructions+=10;goto B732f65;
case 0x732f68:c.instructions+=9;goto B732f68;
case 0x732f6a:c.instructions+=8;goto B732f6a;
case 0x732f6d:c.instructions+=7;goto B732f6d;
case 0x732f70:c.instructions+=6;goto B732f70;
case 0x732f71:c.instructions+=5;goto B732f71;
case 0x732f74:c.instructions+=4;goto B732f74;
case 0x732f7b:c.instructions+=3;goto B732f7b;
case 0x732f7c:c.instructions+=2;goto B732f7c;
case 0x732f7f:c.instructions+=1;goto B732f7f;
case 0x732f84:goto L732f84;
case 0x732f86:c.instructions+=1;goto B732f86;
case 0x732f88:goto L732f88;
case 0x732f8b:c.instructions+=5;goto B732f8b;
case 0x732f8c:c.instructions+=4;goto B732f8c;
case 0x732f8d:c.instructions+=3;goto B732f8d;
case 0x732f8e:c.instructions+=2;goto B732f8e;
case 0x732f8f:c.instructions+=1;goto B732f8f;
case 0x732f90:goto L732f90;
case 0x732f91:c.instructions+=16;goto B732f91;
case 0x732f95:c.instructions+=15;goto B732f95;
case 0x732f9b:c.instructions+=14;goto B732f9b;
case 0x732fa2:c.instructions+=13;goto B732fa2;
case 0x732fa3:c.instructions+=12;goto B732fa3;
case 0x732fa7:c.instructions+=11;goto B732fa7;
case 0x732faa:c.instructions+=10;goto B732faa;
case 0x732fae:c.instructions+=9;goto B732fae;
case 0x732fb1:c.instructions+=8;goto B732fb1;
case 0x732fb4:c.instructions+=7;goto B732fb4;
case 0x732fb7:c.instructions+=6;goto B732fb7;
case 0x732fba:c.instructions+=5;goto B732fba;
case 0x732fbd:c.instructions+=4;goto B732fbd;
case 0x732fc0:c.instructions+=3;goto B732fc0;
case 0x732fc5:c.instructions+=2;goto B732fc5;
case 0x732fc8:c.instructions+=1;goto B732fc8;
case 0x732fcd:goto L732fcd;
case 0x732fcf:c.instructions+=2;goto B732fcf;
case 0x732fd0:c.instructions+=1;goto B732fd0;
case 0x732fd2:goto L732fd2;
case 0x732fd4:c.instructions+=1;goto B732fd4;
case 0x732fd9:goto L732fd9;
case 0x732fdb:goto L732fdb;
case 0x732fdd:goto L732fdd;
case 0x732fe0:c.instructions+=3;goto B732fe0;
case 0x732fe7:c.instructions+=2;goto B732fe7;
case 0x732feb:c.instructions+=1;goto B732feb;
case 0x732fed:goto L732fed;
case 0x732fef:c.instructions+=5;goto B732fef;
case 0x732ff2:c.instructions+=4;goto B732ff2;
case 0x732ff5:c.instructions+=3;goto B732ff5;
case 0x732ff9:c.instructions+=2;goto B732ff9;
case 0x732ffd:c.instructions+=1;goto B732ffd;
default:missing_instruction(c.pc);}
B732004:L732004:{c.instructions+=339;NFSU2_TR(0x732004);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73200a:{NFSU2_TR(0x73200a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73200c:{NFSU2_TR(0x73200c);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732012:{NFSU2_TR(0x732012);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732018:{NFSU2_TR(0x732018);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73201e:{NFSU2_TR(0x73201e);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732024:{NFSU2_TR(0x732024);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73202a:{NFSU2_TR(0x73202a);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732030:{NFSU2_TR(0x732030);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B732032:{NFSU2_TR(0x732032);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732038:{NFSU2_TR(0x732038);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73203e:{NFSU2_TR(0x73203e);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732044:{NFSU2_TR(0x732044);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73204a:{NFSU2_TR(0x73204a);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732050:{NFSU2_TR(0x732050);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732056:{NFSU2_TR(0x732056);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B732058:{NFSU2_TR(0x732058);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73205e:{NFSU2_TR(0x73205e);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732064:{NFSU2_TR(0x732064);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73206a:{NFSU2_TR(0x73206a);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732070:{NFSU2_TR(0x732070);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732076:{NFSU2_TR(0x732076);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73207c:{NFSU2_TR(0x73207c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73207e:{NFSU2_TR(0x73207e);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732084:{NFSU2_TR(0x732084);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73208a:{NFSU2_TR(0x73208a);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732090:{NFSU2_TR(0x732090);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732096:{NFSU2_TR(0x732096);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73209c:{NFSU2_TR(0x73209c);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7320a2:{NFSU2_TR(0x7320a2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7320a4:{NFSU2_TR(0x7320a4);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7320aa:{NFSU2_TR(0x7320aa);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7320b0:{NFSU2_TR(0x7320b0);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7320b6:{NFSU2_TR(0x7320b6);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7320bc:{NFSU2_TR(0x7320bc);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7320c2:{NFSU2_TR(0x7320c2);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7320c8:{NFSU2_TR(0x7320c8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B7320ca:{NFSU2_TR(0x7320ca);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7320d0:{NFSU2_TR(0x7320d0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B7320d2:{NFSU2_TR(0x7320d2);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7320d8:{NFSU2_TR(0x7320d8);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7320de:{NFSU2_TR(0x7320de);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7320e4:{NFSU2_TR(0x7320e4);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B7320e6:{NFSU2_TR(0x7320e6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7320e8:{NFSU2_TR(0x7320e8);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7320ee:{NFSU2_TR(0x7320ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7320f0:{NFSU2_TR(0x7320f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7320f2:{NFSU2_TR(0x7320f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7320f4:{NFSU2_TR(0x7320f4);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7320fa:{NFSU2_TR(0x7320fa);
{u32 ea_=u32(u32(9128632u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732100:{NFSU2_TR(0x732100);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732106:{NFSU2_TR(0x732106);
{u32 ea_=u32(u32(8199928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73210c:{NFSU2_TR(0x73210c);
{u32 ea_=u32(u32(9128632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732112:{NFSU2_TR(0x732112);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732118:{NFSU2_TR(0x732118);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73211a:{NFSU2_TR(0x73211a);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732120:{NFSU2_TR(0x732120);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732126:{NFSU2_TR(0x732126);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73212c:{NFSU2_TR(0x73212c);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732132:{NFSU2_TR(0x732132);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732138:{NFSU2_TR(0x732138);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73213a:{NFSU2_TR(0x73213a);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732140:{NFSU2_TR(0x732140);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732142:{NFSU2_TR(0x732142);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732148:{NFSU2_TR(0x732148);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73214a:{NFSU2_TR(0x73214a);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732150:{NFSU2_TR(0x732150);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732156:{NFSU2_TR(0x732156);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73215c:{NFSU2_TR(0x73215c);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732162:{NFSU2_TR(0x732162);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B732164:{NFSU2_TR(0x732164);
{u32 ea_=u32(u32(9128660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73216a:{NFSU2_TR(0x73216a);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732170:{NFSU2_TR(0x732170);
{u32 ea_=u32(u32(9128660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732176:{NFSU2_TR(0x732176);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73217c:{NFSU2_TR(0x73217c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B73217e:{NFSU2_TR(0x73217e);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732184:{NFSU2_TR(0x732184);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B732186:{NFSU2_TR(0x732186);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B732188:{NFSU2_TR(0x732188);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B73218a:{NFSU2_TR(0x73218a);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732190:{NFSU2_TR(0x732190);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732192:{NFSU2_TR(0x732192);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732198:{NFSU2_TR(0x732198);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73219e:{NFSU2_TR(0x73219e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7321a0:{NFSU2_TR(0x7321a0);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7321a6:{NFSU2_TR(0x7321a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7321a8:{NFSU2_TR(0x7321a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7321aa:{NFSU2_TR(0x7321aa);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7321b0:{NFSU2_TR(0x7321b0);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7321b6:{NFSU2_TR(0x7321b6);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7321bc:{NFSU2_TR(0x7321bc);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7321c2:{NFSU2_TR(0x7321c2);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7321c8:{NFSU2_TR(0x7321c8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7321ca:{NFSU2_TR(0x7321ca);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7321d0:{NFSU2_TR(0x7321d0);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7321d6:{NFSU2_TR(0x7321d6);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7321dc:{NFSU2_TR(0x7321dc);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7321e2:{NFSU2_TR(0x7321e2);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7321e8:{NFSU2_TR(0x7321e8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B7321ea:{NFSU2_TR(0x7321ea);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7321f0:{NFSU2_TR(0x7321f0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7321f2:{NFSU2_TR(0x7321f2);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7321f8:{NFSU2_TR(0x7321f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7321fa:{NFSU2_TR(0x7321fa);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732200:{NFSU2_TR(0x732200);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732206:{NFSU2_TR(0x732206);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73220c:{NFSU2_TR(0x73220c);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732212:{NFSU2_TR(0x732212);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B732214:{NFSU2_TR(0x732214);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73221a:{NFSU2_TR(0x73221a);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732220:{NFSU2_TR(0x732220);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732226:{NFSU2_TR(0x732226);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73222c:{NFSU2_TR(0x73222c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B73222e:{NFSU2_TR(0x73222e);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732234:{NFSU2_TR(0x732234);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B732236:{NFSU2_TR(0x732236);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B732238:{NFSU2_TR(0x732238);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B73223a:{NFSU2_TR(0x73223a);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732240:{NFSU2_TR(0x732240);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732242:{NFSU2_TR(0x732242);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732248:{NFSU2_TR(0x732248);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73224e:{NFSU2_TR(0x73224e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732250:{NFSU2_TR(0x732250);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732256:{NFSU2_TR(0x732256);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732258:{NFSU2_TR(0x732258);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73225a:{NFSU2_TR(0x73225a);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732260:{NFSU2_TR(0x732260);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732266:{NFSU2_TR(0x732266);
{u32 ea_=u32(u32(9128568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73226c:{NFSU2_TR(0x73226c);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732272:{NFSU2_TR(0x732272);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732278:{NFSU2_TR(0x732278);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73227a:{NFSU2_TR(0x73227a);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732280:{NFSU2_TR(0x732280);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732286:{NFSU2_TR(0x732286);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73228c:{NFSU2_TR(0x73228c);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732292:{NFSU2_TR(0x732292);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732298:{NFSU2_TR(0x732298);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B73229a:{NFSU2_TR(0x73229a);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7322a0:{NFSU2_TR(0x7322a0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7322a2:{NFSU2_TR(0x7322a2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7322a4:{NFSU2_TR(0x7322a4);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7322aa:{NFSU2_TR(0x7322aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7322ac:{NFSU2_TR(0x7322ac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7322ae:{NFSU2_TR(0x7322ae);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7322b4:{NFSU2_TR(0x7322b4);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7322ba:{NFSU2_TR(0x7322ba);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7322c0:{NFSU2_TR(0x7322c0);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7322c6:{NFSU2_TR(0x7322c6);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7322cc:{NFSU2_TR(0x7322cc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7322ce:{NFSU2_TR(0x7322ce);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7322d4:{NFSU2_TR(0x7322d4);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7322da:{NFSU2_TR(0x7322da);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7322e0:{NFSU2_TR(0x7322e0);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7322e6:{NFSU2_TR(0x7322e6);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7322ec:{NFSU2_TR(0x7322ec);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B7322ee:{NFSU2_TR(0x7322ee);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7322f4:{NFSU2_TR(0x7322f4);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7322fa:{NFSU2_TR(0x7322fa);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7322fc:{NFSU2_TR(0x7322fc);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732302:{NFSU2_TR(0x732302);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732304:{NFSU2_TR(0x732304);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73230a:{NFSU2_TR(0x73230a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B73230c:{NFSU2_TR(0x73230c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73230e:{NFSU2_TR(0x73230e);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732314:{NFSU2_TR(0x732314);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732316:{NFSU2_TR(0x732316);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B732318:{NFSU2_TR(0x732318);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73231a:{NFSU2_TR(0x73231a);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732320:{NFSU2_TR(0x732320);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732322:{NFSU2_TR(0x732322);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732324:{NFSU2_TR(0x732324);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73232a:{NFSU2_TR(0x73232a);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732330:{NFSU2_TR(0x732330);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732336:{NFSU2_TR(0x732336);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73233c:{NFSU2_TR(0x73233c);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732342:{NFSU2_TR(0x732342);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B732344:{NFSU2_TR(0x732344);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73234a:{NFSU2_TR(0x73234a);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732350:{NFSU2_TR(0x732350);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732356:{NFSU2_TR(0x732356);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73235c:{NFSU2_TR(0x73235c);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732362:{NFSU2_TR(0x732362);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B732364:{NFSU2_TR(0x732364);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73236a:{NFSU2_TR(0x73236a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73236c:{NFSU2_TR(0x73236c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73236e:{NFSU2_TR(0x73236e);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732374:{NFSU2_TR(0x732374);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732376:{NFSU2_TR(0x732376);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732378:{NFSU2_TR(0x732378);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73237e:{NFSU2_TR(0x73237e);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732384:{NFSU2_TR(0x732384);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73238a:{NFSU2_TR(0x73238a);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732390:{NFSU2_TR(0x732390);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B732396:{NFSU2_TR(0x732396);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B732398:{NFSU2_TR(0x732398);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73239e:{NFSU2_TR(0x73239e);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323a4:{NFSU2_TR(0x7323a4);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7323aa:{NFSU2_TR(0x7323aa);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7323b0:{NFSU2_TR(0x7323b0);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323b6:{NFSU2_TR(0x7323b6);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7323bc:{NFSU2_TR(0x7323bc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7323be:{NFSU2_TR(0x7323be);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7323c4:{NFSU2_TR(0x7323c4);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B7323c6:{NFSU2_TR(0x7323c6);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323cc:{NFSU2_TR(0x7323cc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7323ce:{NFSU2_TR(0x7323ce);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323d4:{NFSU2_TR(0x7323d4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7323d6:{NFSU2_TR(0x7323d6);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7323dc:{NFSU2_TR(0x7323dc);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323e2:{NFSU2_TR(0x7323e2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7323e4:{NFSU2_TR(0x7323e4);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7323ea:{NFSU2_TR(0x7323ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7323ec:{NFSU2_TR(0x7323ec);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7323f2:{NFSU2_TR(0x7323f2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7323f4:{NFSU2_TR(0x7323f4);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7323fa:{NFSU2_TR(0x7323fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7323fc:{NFSU2_TR(0x7323fc);
{u32 ea_=u32(r4(R+4)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732402:{NFSU2_TR(0x732402);
__builtin_memmove((R+0),gp(0x8b4a48),4);
}
B732407:{NFSU2_TR(0x732407);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73240d:{NFSU2_TR(0x73240d);
__builtin_memmove((R+0),gp(0x8b4a40),4);
}
B732412:{NFSU2_TR(0x732412);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732418:{NFSU2_TR(0x732418);
__builtin_memmove((R+0),gp(0x8b4a50),4);
}
B73241d:{NFSU2_TR(0x73241d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732423:{NFSU2_TR(0x732423);
__builtin_memmove((R+0),gp(0x8b4a3c),4);
}
B732428:{NFSU2_TR(0x732428);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73242a:{NFSU2_TR(0x73242a);
__builtin_memmove((R+0),gp(0x8b4a3c),4);
}
B73242f:{NFSU2_TR(0x73242f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B732431:{NFSU2_TR(0x732431);
__builtin_memmove((R+0),gp(0x8b4a4c),4);
}
B732436:{NFSU2_TR(0x732436);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73243c:{NFSU2_TR(0x73243c);
__builtin_memmove((R+0),gp(0x8b4a44),4);
}
B732441:{NFSU2_TR(0x732441);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732447:{NFSU2_TR(0x732447);
__builtin_memmove((R+0),gp(0x8b4a54),4);
}
B73244c:{NFSU2_TR(0x73244c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732452:{NFSU2_TR(0x732452);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732458:{NFSU2_TR(0x732458);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73245e:{NFSU2_TR(0x73245e);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732464:{NFSU2_TR(0x732464);
{u32 ea_=u32(r4(R+4)+u32(896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73246a:{NFSU2_TR(0x73246a);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732470:{NFSU2_TR(0x732470);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732476:{NFSU2_TR(0x732476);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73247c:{NFSU2_TR(0x73247c);
{u32 ea_=u32(r4(R+4)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732482:{NFSU2_TR(0x732482);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732488:{NFSU2_TR(0x732488);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73248e:{NFSU2_TR(0x73248e);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732494:{NFSU2_TR(0x732494);
{u32 ea_=u32(r4(R+4)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73249a:{NFSU2_TR(0x73249a);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7324a0:{NFSU2_TR(0x7324a0);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7324a6:{NFSU2_TR(0x7324a6);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7324ac:{NFSU2_TR(0x7324ac);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7324b2:{NFSU2_TR(0x7324b2);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7324b8:{NFSU2_TR(0x7324b8);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7324be:{NFSU2_TR(0x7324be);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7324c4:{NFSU2_TR(0x7324c4);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7324ca:{NFSU2_TR(0x7324ca);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7324d0:{NFSU2_TR(0x7324d0);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7324d6:{NFSU2_TR(0x7324d6);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7324dc:{NFSU2_TR(0x7324dc);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7324e2:{NFSU2_TR(0x7324e2);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7324e8:{NFSU2_TR(0x7324e8);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7324ee:{NFSU2_TR(0x7324ee);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7324f4:{NFSU2_TR(0x7324f4);
{u32 ea_=u32(r4(R+8)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7324fa:{NFSU2_TR(0x7324fa);
__builtin_memmove((R+0),gp(0x8b4a74),4);
}
B7324ff:{NFSU2_TR(0x7324ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x380ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732505:{NFSU2_TR(0x732505);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73250b:{NFSU2_TR(0x73250b);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732511:{NFSU2_TR(0x732511);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732517:{NFSU2_TR(0x732517);
{u32 ea_=u32(u32(9128568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73251d:{NFSU2_TR(0x73251d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73251f:{NFSU2_TR(0x73251f);
{u32 ea_=u32(r4(R+4)+u32(960u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732525:{NFSU2_TR(0x732525);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732527:{NFSU2_TR(0x732527);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73252d:{NFSU2_TR(0x73252d);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732533:{NFSU2_TR(0x732533);
{u32 ea_=u32(r4(R+4)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732539:{NFSU2_TR(0x732539);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73253f:{NFSU2_TR(0x73253f);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732545:{NFSU2_TR(0x732545);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73254b:{NFSU2_TR(0x73254b);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732551:{NFSU2_TR(0x732551);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732553:{NFSU2_TR(0x732553);
{u32 ea_=u32(r4(R+4)+u32(704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732559:{NFSU2_TR(0x732559);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73255b:{NFSU2_TR(0x73255b);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732561:{NFSU2_TR(0x732561);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732567:{NFSU2_TR(0x732567);
{u32 ea_=u32(r4(R+4)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73256d:{NFSU2_TR(0x73256d);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732573:{NFSU2_TR(0x732573);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732579:{NFSU2_TR(0x732579);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73257f:{NFSU2_TR(0x73257f);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732585:{NFSU2_TR(0x732585);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732587:{NFSU2_TR(0x732587);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73258d:{NFSU2_TR(0x73258d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73258f:{NFSU2_TR(0x73258f);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732595:{NFSU2_TR(0x732595);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73259b:{NFSU2_TR(0x73259b);
{u32 ea_=u32(r4(R+4)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7325a1:{NFSU2_TR(0x7325a1);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325a7:{NFSU2_TR(0x7325a7);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7325ad:{NFSU2_TR(0x7325ad);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7325b3:{NFSU2_TR(0x7325b3);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325b9:{NFSU2_TR(0x7325b9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7325bb:{NFSU2_TR(0x7325bb);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7325c1:{NFSU2_TR(0x7325c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7325c3:{NFSU2_TR(0x7325c3);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325c9:{NFSU2_TR(0x7325c9);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7325cf:{NFSU2_TR(0x7325cf);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7325d2:{NFSU2_TR(0x7325d2);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325d8:{NFSU2_TR(0x7325d8);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7325de:{NFSU2_TR(0x7325de);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7325e4:{NFSU2_TR(0x7325e4);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325ea:{NFSU2_TR(0x7325ea);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B7325ec:{NFSU2_TR(0x7325ec);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7325ef:{NFSU2_TR(0x7325ef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7325f1:{NFSU2_TR(0x7325f1);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7325f7:{NFSU2_TR(0x7325f7);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7325fd:{NFSU2_TR(0x7325fd);
{u32 ea_=u32(r4(R+8)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732603:{NFSU2_TR(0x732603);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732609:{NFSU2_TR(0x732609);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73260f:{NFSU2_TR(0x73260f);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732615:{NFSU2_TR(0x732615);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73261b:{NFSU2_TR(0x73261b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B73261d:{NFSU2_TR(0x73261d);
{u32 ea_=u32(r4(R+8)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732623:{NFSU2_TR(0x732623);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732625:{NFSU2_TR(0x732625);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73262b:{NFSU2_TR(0x73262b);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732631:{NFSU2_TR(0x732631);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732637:{NFSU2_TR(0x732637);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73263d:{NFSU2_TR(0x73263d);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732643:{NFSU2_TR(0x732643);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B732649:{NFSU2_TR(0x732649);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73264f:{NFSU2_TR(0x73264f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B732651:{NFSU2_TR(0x732651);
{u32 ea_=u32(r4(R+8)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732657:{NFSU2_TR(0x732657);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B732659:{NFSU2_TR(0x732659);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73265f:{NFSU2_TR(0x73265f);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732665:{NFSU2_TR(0x732665);
{u32 ea_=u32(r4(R+8)+u32(704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73266b:{NFSU2_TR(0x73266b);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732671:{NFSU2_TR(0x732671);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B732677:{NFSU2_TR(0x732677);
{u32 ea_=u32(r4(R+8)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73267d:{NFSU2_TR(0x73267d);
__builtin_memmove((R+0),gp(0x8b4ab4),4);
}
B732682:{NFSU2_TR(0x732682);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732688:{NFSU2_TR(0x732688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732689:L732689:{c.instructions+=35;NFSU2_TR(0x732689);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73268a:{NFSU2_TR(0x73268a);
__builtin_memmove((R+20),(R+16),4);
}
B73268c:{NFSU2_TR(0x73268c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73268d:{NFSU2_TR(0x73268d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73268e:{NFSU2_TR(0x73268e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73268f:{NFSU2_TR(0x73268f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732692:{NFSU2_TR(0x732692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732695:{NFSU2_TR(0x732695);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B732699:{NFSU2_TR(0x732699);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B73269b:{NFSU2_TR(0x73269b);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B73269d:{NFSU2_TR(0x73269d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B73269f:{NFSU2_TR(0x73269f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7326a1:{NFSU2_TR(0x7326a1);
w4(R+4,u32(r1(R+0)));
}
B7326a4:{NFSU2_TR(0x7326a4);
__builtin_memmove((R+0),(R+4),4);
}
B7326a6:{NFSU2_TR(0x7326a6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B7326a9:{NFSU2_TR(0x7326a9);
__builtin_memmove((R+8),(R+0),4);
}
B7326ab:{NFSU2_TR(0x7326ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7326ac:{NFSU2_TR(0x7326ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7326af:{NFSU2_TR(0x7326af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7326b2:{NFSU2_TR(0x7326b2);
w4(R+8,u32(u32(r4(R+8))^u32(u32(0x1ull))));
}
B7326b5:{NFSU2_TR(0x7326b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7326b8:{NFSU2_TR(0x7326b8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7326ba:{NFSU2_TR(0x7326ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7326bd:{NFSU2_TR(0x7326bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7326c0:{NFSU2_TR(0x7326c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7326c3:{NFSU2_TR(0x7326c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7326c6:{NFSU2_TR(0x7326c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7326c9:{NFSU2_TR(0x7326c9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7326cc:{NFSU2_TR(0x7326cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7326cf:{NFSU2_TR(0x7326cf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7326d1:{NFSU2_TR(0x7326d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7326d4:{NFSU2_TR(0x7326d4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7326d6:{NFSU2_TR(0x7326d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7326d9:{NFSU2_TR(0x7326d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7326dc:{NFSU2_TR(0x7326dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7326e1ull));
TAIL_STATIC(0x7317b4u,731);
}
B7326e1:L7326e1:{c.instructions+=8;NFSU2_TR(0x7326e1);
__builtin_memmove((R+4),(R+12),4);
}
B7326e3:{NFSU2_TR(0x7326e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7326e6:{NFSU2_TR(0x7326e6);
w4(R+0,u32(0x7d1640ull));
}
B7326eb:{NFSU2_TR(0x7326eb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7326ed:{NFSU2_TR(0x7326ed);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7326ef:{NFSU2_TR(0x7326ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7326f2:{NFSU2_TR(0x7326f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7326f3:{NFSU2_TR(0x7326f3);
w4(R+8,u32(0x80ull));
}
B7326f8:L7326f8:{c.instructions+=53;NFSU2_TR(0x7326f8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7326fa:{NFSU2_TR(0x7326fa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7326fc:{NFSU2_TR(0x7326fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B7326ff:{NFSU2_TR(0x7326ff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732702:{NFSU2_TR(0x732702);
{u32 ea_=u32(r4(R+24)+u32(4294967236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732705:{NFSU2_TR(0x732705);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732707:{NFSU2_TR(0x732707);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73270a:{NFSU2_TR(0x73270a);
{u32 ea_=u32(r4(R+24)+u32(4294967240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73270d:{NFSU2_TR(0x73270d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73270f:{NFSU2_TR(0x73270f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732712:{NFSU2_TR(0x732712);
{u32 ea_=u32(r4(R+24)+u32(4294967244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732715:{NFSU2_TR(0x732715);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732717:{NFSU2_TR(0x732717);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73271a:{NFSU2_TR(0x73271a);
{u32 ea_=u32(r4(R+24)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73271d:{NFSU2_TR(0x73271d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73271f:{NFSU2_TR(0x73271f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732722:{NFSU2_TR(0x732722);
{u32 ea_=u32(r4(R+24)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732725:{NFSU2_TR(0x732725);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732727:{NFSU2_TR(0x732727);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73272a:{NFSU2_TR(0x73272a);
{u32 ea_=u32(r4(R+24)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73272d:{NFSU2_TR(0x73272d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73272f:{NFSU2_TR(0x73272f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732732:{NFSU2_TR(0x732732);
{u32 ea_=u32(r4(R+24)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732735:{NFSU2_TR(0x732735);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732737:{NFSU2_TR(0x732737);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73273a:{NFSU2_TR(0x73273a);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73273d:{NFSU2_TR(0x73273d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73273f:{NFSU2_TR(0x73273f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732742:{NFSU2_TR(0x732742);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732745:{NFSU2_TR(0x732745);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732747:{NFSU2_TR(0x732747);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73274a:{NFSU2_TR(0x73274a);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73274d:{NFSU2_TR(0x73274d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73274f:{NFSU2_TR(0x73274f);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732752:{NFSU2_TR(0x732752);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732755:{NFSU2_TR(0x732755);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732757:{NFSU2_TR(0x732757);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73275a:{NFSU2_TR(0x73275a);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73275d:{NFSU2_TR(0x73275d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73275f:{NFSU2_TR(0x73275f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732762:{NFSU2_TR(0x732762);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732765:{NFSU2_TR(0x732765);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732767:{NFSU2_TR(0x732767);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73276a:{NFSU2_TR(0x73276a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73276d:{NFSU2_TR(0x73276d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73276f:{NFSU2_TR(0x73276f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732772:{NFSU2_TR(0x732772);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B732774:{NFSU2_TR(0x732774);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732777:{NFSU2_TR(0x732777);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732779:{NFSU2_TR(0x732779);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73277b:{NFSU2_TR(0x73277b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B73277e:{NFSU2_TR(0x73277e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B73277f:{NFSU2_TR(0x73277f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7326f8u);}goto L7326f8;}}
}
B732785:L732785:{c.instructions+=29;NFSU2_TR(0x732785);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732788:{NFSU2_TR(0x732788);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73278a:{NFSU2_TR(0x73278a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73278d:{NFSU2_TR(0x73278d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73278e:{NFSU2_TR(0x73278e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732790:{NFSU2_TR(0x732790);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732792:{NFSU2_TR(0x732792);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x40ull))));
}
B732795:{NFSU2_TR(0x732795);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B732797:{NFSU2_TR(0x732797);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73279a:{NFSU2_TR(0x73279a);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73279d:{NFSU2_TR(0x73279d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73279f:{NFSU2_TR(0x73279f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327a2:{NFSU2_TR(0x7327a2);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327a5:{NFSU2_TR(0x7327a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7327a7:{NFSU2_TR(0x7327a7);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327aa:{NFSU2_TR(0x7327aa);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327ad:{NFSU2_TR(0x7327ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7327af:{NFSU2_TR(0x7327af);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327b2:{NFSU2_TR(0x7327b2);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327b5:{NFSU2_TR(0x7327b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7327b7:{NFSU2_TR(0x7327b7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327ba:{NFSU2_TR(0x7327ba);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327bd:{NFSU2_TR(0x7327bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7327bf:{NFSU2_TR(0x7327bf);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327c2:{NFSU2_TR(0x7327c2);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7327c6:{NFSU2_TR(0x7327c6);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327c9:{NFSU2_TR(0x7327c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7327cb:{NFSU2_TR(0x7327cb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7327cd:{NFSU2_TR(0x7327cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7327d0:L7327d0:{c.instructions+=54;NFSU2_TR(0x7327d0);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327d3:{NFSU2_TR(0x7327d3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327d5:{NFSU2_TR(0x7327d5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x40ull))));
}
B7327d8:{NFSU2_TR(0x7327d8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B7327da:{NFSU2_TR(0x7327da);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327dd:{NFSU2_TR(0x7327dd);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327e0:{NFSU2_TR(0x7327e0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B7327e2:{NFSU2_TR(0x7327e2);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327e5:{NFSU2_TR(0x7327e5);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327e8:{NFSU2_TR(0x7327e8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B7327ea:{NFSU2_TR(0x7327ea);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327ed:{NFSU2_TR(0x7327ed);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327f0:{NFSU2_TR(0x7327f0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B7327f2:{NFSU2_TR(0x7327f2);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327f5:{NFSU2_TR(0x7327f5);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7327f8:{NFSU2_TR(0x7327f8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B7327fa:{NFSU2_TR(0x7327fa);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7327fd:{NFSU2_TR(0x7327fd);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732800:{NFSU2_TR(0x732800);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732802:{NFSU2_TR(0x732802);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732805:{NFSU2_TR(0x732805);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732808:{NFSU2_TR(0x732808);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B73280a:{NFSU2_TR(0x73280a);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73280d:{NFSU2_TR(0x73280d);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732810:{NFSU2_TR(0x732810);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732812:{NFSU2_TR(0x732812);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732815:{NFSU2_TR(0x732815);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732818:{NFSU2_TR(0x732818);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B73281a:{NFSU2_TR(0x73281a);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73281d:{NFSU2_TR(0x73281d);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732820:{NFSU2_TR(0x732820);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732822:{NFSU2_TR(0x732822);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732825:{NFSU2_TR(0x732825);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732828:{NFSU2_TR(0x732828);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B73282a:{NFSU2_TR(0x73282a);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73282d:{NFSU2_TR(0x73282d);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732830:{NFSU2_TR(0x732830);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732832:{NFSU2_TR(0x732832);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732835:{NFSU2_TR(0x732835);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732838:{NFSU2_TR(0x732838);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B73283a:{NFSU2_TR(0x73283a);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73283d:{NFSU2_TR(0x73283d);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732840:{NFSU2_TR(0x732840);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732842:{NFSU2_TR(0x732842);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B732845:{NFSU2_TR(0x732845);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B732848:{NFSU2_TR(0x732848);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B73284a:{NFSU2_TR(0x73284a);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73284d:{NFSU2_TR(0x73284d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73284f:{NFSU2_TR(0x73284f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B732851:{NFSU2_TR(0x732851);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B732853:{NFSU2_TR(0x732853);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732855:{NFSU2_TR(0x732855);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B732858:{NFSU2_TR(0x732858);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732859:{NFSU2_TR(0x732859);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7327d0u);}goto L7327d0;}}
}
B73285f:L73285f:{c.instructions+=5;NFSU2_TR(0x73285f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732860:{NFSU2_TR(0x732860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732861:{NFSU2_TR(0x732861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B732862:{NFSU2_TR(0x732862);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B732863:{NFSU2_TR(0x732863);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732866:L732866:{c.instructions+=9;NFSU2_TR(0x732866);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732867:{NFSU2_TR(0x732867);
__builtin_memmove((R+20),(R+16),4);
}
B732869:{NFSU2_TR(0x732869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B73286c:{NFSU2_TR(0x73286c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73286f:{NFSU2_TR(0x73286f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732870:{NFSU2_TR(0x732870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732873:{NFSU2_TR(0x732873);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732875:{NFSU2_TR(0x732875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732878:{NFSU2_TR(0x732878);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7328e2;}}
}
B73287a:L73287a:{c.instructions+=2;NFSU2_TR(0x73287a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73287b:{NFSU2_TR(0x73287b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73287e:L73287e:{c.instructions+=5;NFSU2_TR(0x73287e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732881:{NFSU2_TR(0x732881);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732882:{NFSU2_TR(0x732882);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732885:{NFSU2_TR(0x732885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732886:{NFSU2_TR(0x732886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73288bull));
TAIL_STATIC(0x734798u,734);
}
B73288b:L73288b:{c.instructions+=7;NFSU2_TR(0x73288b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73288e:{NFSU2_TR(0x73288e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732891:{NFSU2_TR(0x732891);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B732893:{NFSU2_TR(0x732893);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B732895:{NFSU2_TR(0x732895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732898:{NFSU2_TR(0x732898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73289b:{NFSU2_TR(0x73289b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7328dd;}}
}
B73289d:L73289d:{c.instructions+=10;NFSU2_TR(0x73289d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7328a0:{NFSU2_TR(0x7328a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7328a3:{NFSU2_TR(0x7328a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7328a7:{NFSU2_TR(0x7328a7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B7328ab:{NFSU2_TR(0x7328ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7328ae:{NFSU2_TR(0x7328ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328b0:{NFSU2_TR(0x7328b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7328b3:{NFSU2_TR(0x7328b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328b4:{NFSU2_TR(0x7328b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7328bb:{NFSU2_TR(0x7328bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7328c0ull));
TAIL_STATIC(0x73476du,734);
}
B7328c0:L7328c0:{c.instructions+=9;NFSU2_TR(0x7328c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7328c3:{NFSU2_TR(0x7328c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7328c6:{NFSU2_TR(0x7328c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7328c9:{NFSU2_TR(0x7328c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328ca:{NFSU2_TR(0x7328ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7328cd:{NFSU2_TR(0x7328cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7328d4:{NFSU2_TR(0x7328d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328d5:{NFSU2_TR(0x7328d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7328d8:{NFSU2_TR(0x7328d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7328ddull));
TAIL_STATIC(0x7346dbu,734);
}
B7328dd:L7328dd:{c.instructions+=2;NFSU2_TR(0x7328dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7328df:{NFSU2_TR(0x7328df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73287eu);}goto L73287e;}}
}
B7328e1:L7328e1:{c.instructions+=1;NFSU2_TR(0x7328e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7328e2:L7328e2:{c.instructions+=5;NFSU2_TR(0x7328e2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7328e4:{NFSU2_TR(0x7328e4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7328e5:{NFSU2_TR(0x7328e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7328e6:{NFSU2_TR(0x7328e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7328e7:{NFSU2_TR(0x7328e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7328e8:L7328e8:{c.instructions+=19;NFSU2_TR(0x7328e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328e9:{NFSU2_TR(0x7328e9);
__builtin_memmove((R+20),(R+16),4);
}
B7328eb:{NFSU2_TR(0x7328eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B7328ee:{NFSU2_TR(0x7328ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7328f1:{NFSU2_TR(0x7328f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7328f2:{NFSU2_TR(0x7328f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7328f5:{NFSU2_TR(0x7328f5);
u8 U[4];
w4(U+0,u32(0x732866ull));
s4(u32(r4(R+12)),r4(U+0));
}
B7328fb:{NFSU2_TR(0x7328fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x733082ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732902:{NFSU2_TR(0x732902);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732905:{NFSU2_TR(0x732905);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732909:{NFSU2_TR(0x732909);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73290c:{NFSU2_TR(0x73290c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73290f:{NFSU2_TR(0x73290f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732910:{NFSU2_TR(0x732910);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732913:{NFSU2_TR(0x732913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732916:{NFSU2_TR(0x732916);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732917:{NFSU2_TR(0x732917);
u8 U[4];
w4(U+0,u32(0xd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73291c:{NFSU2_TR(0x73291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73291f:{NFSU2_TR(0x73291f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732924ull));
TAIL_STATIC(0x72ace4u,72a);
}
B732924:L732924:{c.instructions+=3;NFSU2_TR(0x732924);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732926:{NFSU2_TR(0x732926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732927:{NFSU2_TR(0x732927);
if(r1(R+518)){{goto L732932;}}
}
B732929:L732929:{c.instructions+=2;NFSU2_TR(0x732929);
__builtin_memmove((R+4),(R+0),4);
}
B73292b:{NFSU2_TR(0x73292b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732930ull));
TAIL_STATIC(0x7346a0u,734);
}
B732930:L732930:{c.instructions+=1;NFSU2_TR(0x732930);
{goto L732934;}
}
B732932:L732932:{c.instructions+=1;NFSU2_TR(0x732932);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B732934:L732934:{c.instructions+=5;NFSU2_TR(0x732934);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732937:{NFSU2_TR(0x732937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732938:{NFSU2_TR(0x732938);
__builtin_memmove((R+4),(R+0),4);
}
B73293a:{NFSU2_TR(0x73293a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73293d:{NFSU2_TR(0x73293d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732942ull));
TAIL_STATIC(0x73473cu,734);
}
B732942:L732942:{c.instructions+=11;NFSU2_TR(0x732942);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732945:{NFSU2_TR(0x732945);
__builtin_memmove((R+24),(R+0),4);
}
B732947:{NFSU2_TR(0x732947);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73294a:{NFSU2_TR(0x73294a);
u8 U[40];
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
}
B73294b:{NFSU2_TR(0x73294b);
u8 U[40];
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
}
B73294c:{NFSU2_TR(0x73294c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73294e:{NFSU2_TR(0x73294e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732951:{NFSU2_TR(0x732951);
u8 U[40];
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
}
B732952:{NFSU2_TR(0x732952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732953:{NFSU2_TR(0x732953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73295a:{NFSU2_TR(0x73295a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73295full));
TAIL_STATIC(0x73476du,734);
}
B73295f:L73295f:{c.instructions+=8;NFSU2_TR(0x73295f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732962:{NFSU2_TR(0x732962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732965:{NFSU2_TR(0x732965);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732968:{NFSU2_TR(0x732968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732969:{NFSU2_TR(0x732969);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73296c:{NFSU2_TR(0x73296c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73296d:{NFSU2_TR(0x73296d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B73296f:{NFSU2_TR(0x73296f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732974ull));
TAIL_STATIC(0x7346dbu,734);
}
B732974:L732974:{c.instructions+=6;NFSU2_TR(0x732974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732975:{NFSU2_TR(0x732975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B73297c:{NFSU2_TR(0x73297c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73297d:{NFSU2_TR(0x73297d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73297e:{NFSU2_TR(0x73297e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73297f:{NFSU2_TR(0x73297f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732980:L732980:{c.instructions+=13;NFSU2_TR(0x732980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732981:{NFSU2_TR(0x732981);
__builtin_memmove((R+20),(R+16),4);
}
B732983:{NFSU2_TR(0x732983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B732986:{NFSU2_TR(0x732986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732989:{NFSU2_TR(0x732989);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73298a:{NFSU2_TR(0x73298a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73298d:{NFSU2_TR(0x73298d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73298e:{NFSU2_TR(0x73298e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B732990:{NFSU2_TR(0x732990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732993:{NFSU2_TR(0x732993);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732996:{NFSU2_TR(0x732996);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B732998:{NFSU2_TR(0x732998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73299b:{NFSU2_TR(0x73299b);
if(r1(R+518)){{goto L7329b1;}}
}
B73299d:L73299d:{c.instructions+=5;NFSU2_TR(0x73299d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73299e:{NFSU2_TR(0x73299e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7329a2:{NFSU2_TR(0x7329a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329a3:{NFSU2_TR(0x7329a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7329a6:{NFSU2_TR(0x7329a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7329abull));
TAIL_STATIC(0x7237efu,723);
}
B7329ab:L7329ab:{c.instructions+=2;NFSU2_TR(0x7329ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7329ae:{NFSU2_TR(0x7329ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7329b1:L7329b1:{c.instructions+=2;NFSU2_TR(0x7329b1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7329b4:{NFSU2_TR(0x7329b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L732af6;}}
}
B7329ba:L7329ba:{c.instructions+=1;NFSU2_TR(0x7329ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329bb:L7329bb:{c.instructions+=5;NFSU2_TR(0x7329bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7329be:{NFSU2_TR(0x7329be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7329c1:{NFSU2_TR(0x7329c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7329c4:{NFSU2_TR(0x7329c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329c5:{NFSU2_TR(0x7329c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7329caull));
TAIL_STATIC(0x734798u,734);
}
B7329ca:L7329ca:{c.instructions+=8;NFSU2_TR(0x7329ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7329cd:{NFSU2_TR(0x7329cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B7329d1:{NFSU2_TR(0x7329d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7329d4:{NFSU2_TR(0x7329d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7329d7:{NFSU2_TR(0x7329d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7329da:{NFSU2_TR(0x7329da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7329dd:{NFSU2_TR(0x7329dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7329e0:{NFSU2_TR(0x7329e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L732ae9;}}
}
B7329e6:L7329e6:{c.instructions+=9;NFSU2_TR(0x7329e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7329e9:{NFSU2_TR(0x7329e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7329ec:{NFSU2_TR(0x7329ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329ed:{NFSU2_TR(0x7329ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7329f1:{NFSU2_TR(0x7329f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7329f4:{NFSU2_TR(0x7329f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329f5:{NFSU2_TR(0x7329f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7329f6:{NFSU2_TR(0x7329f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7329f9:{NFSU2_TR(0x7329f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7329feull));
TAIL_STATIC(0x723699u,723);
}
B7329fe:L7329fe:{c.instructions+=4;NFSU2_TR(0x7329fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B732a01:{NFSU2_TR(0x732a01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B732a03:{NFSU2_TR(0x732a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732a06:{NFSU2_TR(0x732a06);
if(r1(R+518)){{goto L732ac8;}}
}
B732a0c:L732a0c:{c.instructions+=4;NFSU2_TR(0x732a0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732a10:{NFSU2_TR(0x732a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732a13:{NFSU2_TR(0x732a13);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B732a17:{NFSU2_TR(0x732a17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L732a5f;}}
}
B732a19:L732a19:{c.instructions+=2;NFSU2_TR(0x732a19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732a1c:{NFSU2_TR(0x732a1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L732a38;}}
}
B732a1e:L732a1e:{c.instructions+=3;NFSU2_TR(0x732a1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a21:{NFSU2_TR(0x732a21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a22:{NFSU2_TR(0x732a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732a27ull));
TAIL_STATIC(0x73473cu,734);
}
B732a27:L732a27:{c.instructions+=7;NFSU2_TR(0x732a27);
__builtin_memmove((R+24),(R+0),4);
}
B732a29:{NFSU2_TR(0x732a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732a2c:{NFSU2_TR(0x732a2c);
u8 U[40];
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
}
B732a2d:{NFSU2_TR(0x732a2d);
u8 U[40];
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
}
B732a2e:{NFSU2_TR(0x732a2e);
u8 U[40];
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
}
B732a2f:{NFSU2_TR(0x732a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732a36:{NFSU2_TR(0x732a36);
{goto L732a4d;}
}
B732a38:L732a38:{c.instructions+=3;NFSU2_TR(0x732a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a3b:{NFSU2_TR(0x732a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a3c:{NFSU2_TR(0x732a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732a41ull));
TAIL_STATIC(0x73473cu,734);
}
B732a41:L732a41:{c.instructions+=6;NFSU2_TR(0x732a41);
__builtin_memmove((R+24),(R+0),4);
}
B732a43:{NFSU2_TR(0x732a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732a46:{NFSU2_TR(0x732a46);
u8 U[40];
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
}
B732a47:{NFSU2_TR(0x732a47);
u8 U[40];
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
}
B732a48:{NFSU2_TR(0x732a48);
u8 U[40];
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
}
B732a49:{NFSU2_TR(0x732a49);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732a4d:L732a4d:{c.instructions+=5;NFSU2_TR(0x732a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732a50:{NFSU2_TR(0x732a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a53:{NFSU2_TR(0x732a53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a55:{NFSU2_TR(0x732a55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a56:{NFSU2_TR(0x732a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732a5bull));
TAIL_STATIC(0x73476du,734);
}
B732a5b:L732a5b:{c.instructions+=2;NFSU2_TR(0x732a5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a5d:{NFSU2_TR(0x732a5d);
{goto L732aa7;}
}
B732a5f:L732a5f:{c.instructions+=2;NFSU2_TR(0x732a5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732a62:{NFSU2_TR(0x732a62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L732a82;}}
}
B732a64:L732a64:{c.instructions+=3;NFSU2_TR(0x732a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a67:{NFSU2_TR(0x732a67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a68:{NFSU2_TR(0x732a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732a6dull));
TAIL_STATIC(0x73473cu,734);
}
B732a6d:L732a6d:{c.instructions+=8;NFSU2_TR(0x732a6d);
__builtin_memmove((R+24),(R+0),4);
}
B732a6f:{NFSU2_TR(0x732a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732a72:{NFSU2_TR(0x732a72);
u8 U[40];
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
}
B732a73:{NFSU2_TR(0x732a73);
u8 U[40];
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
}
B732a74:{NFSU2_TR(0x732a74);
u8 U[40];
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
}
B732a75:{NFSU2_TR(0x732a75);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732a79:{NFSU2_TR(0x732a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732a80:{NFSU2_TR(0x732a80);
{goto L732a97;}
}
B732a82:L732a82:{c.instructions+=3;NFSU2_TR(0x732a82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a85:{NFSU2_TR(0x732a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a86:{NFSU2_TR(0x732a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732a8bull));
TAIL_STATIC(0x73473cu,734);
}
B732a8b:L732a8b:{c.instructions+=6;NFSU2_TR(0x732a8b);
__builtin_memmove((R+24),(R+0),4);
}
B732a8d:{NFSU2_TR(0x732a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732a90:{NFSU2_TR(0x732a90);
u8 U[40];
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
}
B732a91:{NFSU2_TR(0x732a91);
u8 U[40];
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
}
B732a92:{NFSU2_TR(0x732a92);
u8 U[40];
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
}
B732a93:{NFSU2_TR(0x732a93);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732a97:L732a97:{c.instructions+=5;NFSU2_TR(0x732a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732a9a:{NFSU2_TR(0x732a9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732a9c:{NFSU2_TR(0x732a9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732a9f:{NFSU2_TR(0x732a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732aa0:{NFSU2_TR(0x732aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732aa5ull));
TAIL_STATIC(0x73476du,734);
}
B732aa5:L732aa5:{c.instructions+=1;NFSU2_TR(0x732aa5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732aa7:L732aa7:{c.instructions+=2;NFSU2_TR(0x732aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732aaa:{NFSU2_TR(0x732aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732aafull));
TAIL_STATIC(0x73478bu,734);
}
B732aaf:L732aaf:{c.instructions+=9;NFSU2_TR(0x732aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732ab2:{NFSU2_TR(0x732ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732ab5:{NFSU2_TR(0x732ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ab6:{NFSU2_TR(0x732ab6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732ab9:{NFSU2_TR(0x732ab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732aba:{NFSU2_TR(0x732aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732abd:{NFSU2_TR(0x732abd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B732abe:{NFSU2_TR(0x732abe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732abf:{NFSU2_TR(0x732abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732ac4ull));
TAIL_STATIC(0x7346dbu,734);
}
B732ac4:L732ac4:{c.instructions+=2;NFSU2_TR(0x732ac4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B732ac6:{NFSU2_TR(0x732ac6);
{goto L732aec;}
}
B732ac8:L732ac8:{c.instructions+=3;NFSU2_TR(0x732ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732acb:{NFSU2_TR(0x732acb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B732acd:{NFSU2_TR(0x732acd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L732ae2;}}
}
B732acf:L732acf:{c.instructions+=2;NFSU2_TR(0x732acf);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732ad2:{NFSU2_TR(0x732ad2);
if(r1(R+518)){{goto L732ae2;}}
}
B732ad4:L732ad4:{c.instructions+=4;NFSU2_TR(0x732ad4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732ad7:{NFSU2_TR(0x732ad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ad8:{NFSU2_TR(0x732ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732adb:{NFSU2_TR(0x732adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732ae0ull));
TAIL_STATIC(0x727030u,727);
}
B732ae0:L732ae0:{c.instructions+=2;NFSU2_TR(0x732ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732ae1:{NFSU2_TR(0x732ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732ae2:L732ae2:{c.instructions+=3;NFSU2_TR(0x732ae2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B732ae4:{NFSU2_TR(0x732ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ae7:{NFSU2_TR(0x732ae7);
{goto L732aec;}
}
B732ae9:L732ae9:{c.instructions+=1;NFSU2_TR(0x732ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732aec:L732aec:{c.instructions+=2;NFSU2_TR(0x732aec);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732aef:{NFSU2_TR(0x732aef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7329bbu);}goto L7329bb;}}
}
B732af5:L732af5:{c.instructions+=1;NFSU2_TR(0x732af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732af6:L732af6:{c.instructions+=5;NFSU2_TR(0x732af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732af9:{NFSU2_TR(0x732af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732afa:{NFSU2_TR(0x732afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B732afb:{NFSU2_TR(0x732afb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B732afc:{NFSU2_TR(0x732afc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732afd:L732afd:{c.instructions+=4;NFSU2_TR(0x732afd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b01:{NFSU2_TR(0x732b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b04:{NFSU2_TR(0x732b04);
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
B732b06:{NFSU2_TR(0x732b06);
if(r1(R+518)){{goto L732b0f;}}
}
B732b08:L732b08:{c.instructions+=2;NFSU2_TR(0x732b08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b09:{NFSU2_TR(0x732b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b0eull));
TAIL_STATIC(0x72aceau,72a);
}
B732b0e:L732b0e:{c.instructions+=1;NFSU2_TR(0x732b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732b0f:L732b0f:{c.instructions+=1;NFSU2_TR(0x732b0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732b10:L732b10:{c.instructions+=7;NFSU2_TR(0x732b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b11:{NFSU2_TR(0x732b11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732b15:{NFSU2_TR(0x732b15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b16:{NFSU2_TR(0x732b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732b1a:{NFSU2_TR(0x732b1a);
u8 U[4];
w4(U+0,u32(0x732980ull));
s4(u32(r4(R+24)),r4(U+0));
}
B732b20:{NFSU2_TR(0x732b20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732b23:{NFSU2_TR(0x732b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b28ull));
TAIL_STATIC(0x727e0cu,727);
}
B732b28:L732b28:{c.instructions+=2;NFSU2_TR(0x732b28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b29:{NFSU2_TR(0x732b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b2eull));
TAIL_STATIC(0x72c31eu,72c);
}
B732b2e:L732b2e:{c.instructions+=3;NFSU2_TR(0x732b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732b31:{NFSU2_TR(0x732b31);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732b34:{NFSU2_TR(0x732b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b39ull));
TAIL_STATIC(0x727e2au,727);
}
B732b39:L732b39:{c.instructions+=10;NFSU2_TR(0x732b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732b3d:{NFSU2_TR(0x732b3d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B732b42:{NFSU2_TR(0x732b42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B732b45:{NFSU2_TR(0x732b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b48:{NFSU2_TR(0x732b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732b4b:{NFSU2_TR(0x732b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b4e:{NFSU2_TR(0x732b4e);
u8 U[4];
w4(U+0,u32(0xd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b53:{NFSU2_TR(0x732b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732b56:{NFSU2_TR(0x732b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x732afdull));
s4(u32(r4(U+0)),r4(U+4));
}
B732b5d:{NFSU2_TR(0x732b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b62ull));
TAIL_STATIC(0x72ace4u,72a);
}
B732b62:L732b62:{c.instructions+=3;NFSU2_TR(0x732b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B732b65:{NFSU2_TR(0x732b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732b67:{NFSU2_TR(0x732b67);
if(r1(R+518)){{goto L732b72;}}
}
B732b69:L732b69:{c.instructions+=2;NFSU2_TR(0x732b69);
__builtin_memmove((R+4),(R+0),4);
}
B732b6b:{NFSU2_TR(0x732b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732b70ull));
TAIL_STATIC(0x7346a0u,734);
}
B732b70:L732b70:{c.instructions+=1;NFSU2_TR(0x732b70);
{goto L732b74;}
}
B732b72:L732b72:{c.instructions+=1;NFSU2_TR(0x732b72);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B732b74:L732b74:{c.instructions+=5;NFSU2_TR(0x732b74);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732b78:{NFSU2_TR(0x732b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732b79:{NFSU2_TR(0x732b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732b7c:{NFSU2_TR(0x732b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732b7d:{NFSU2_TR(0x732b7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732b7e:L732b7e:{c.instructions+=9;NFSU2_TR(0x732b7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b7f:{NFSU2_TR(0x732b7f);
__builtin_memmove((R+20),(R+16),4);
}
B732b81:{NFSU2_TR(0x732b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b84:{NFSU2_TR(0x732b84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b85:{NFSU2_TR(0x732b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732b88:{NFSU2_TR(0x732b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732b8b:{NFSU2_TR(0x732b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732b8e:{NFSU2_TR(0x732b8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B732b91:{NFSU2_TR(0x732b91);
if(r1(R+512)){{goto L732b98;}}
}
B732b93:L732b93:{c.instructions+=2;NFSU2_TR(0x732b93);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732b96:{NFSU2_TR(0x732b96);
{goto L732bcb;}
}
B732b98:L732b98:{c.instructions+=7;NFSU2_TR(0x732b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732b9b:{NFSU2_TR(0x732b9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732b9c:{NFSU2_TR(0x732b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732b9f:{NFSU2_TR(0x732b9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ba0:{NFSU2_TR(0x732ba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732ba3:{NFSU2_TR(0x732ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ba4:{NFSU2_TR(0x732ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732ba9ull));
TAIL_STATIC(0x734798u,734);
}
B732ba9:L732ba9:{c.instructions+=6;NFSU2_TR(0x732ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732bac:{NFSU2_TR(0x732bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732baf:{NFSU2_TR(0x732baf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B732bb1:{NFSU2_TR(0x732bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732bb4:{NFSU2_TR(0x732bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732bb7:{NFSU2_TR(0x732bb7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L732bc7;}}
}
B732bb9:L732bb9:{c.instructions+=5;NFSU2_TR(0x732bb9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B732bbb:{NFSU2_TR(0x732bbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B732bbe:{NFSU2_TR(0x732bbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732bbf:{NFSU2_TR(0x732bbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732bc0:{NFSU2_TR(0x732bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732bc5ull));
TAIL_STATIC(0x727030u,727);
}
B732bc5:L732bc5:{c.instructions+=2;NFSU2_TR(0x732bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732bc6:{NFSU2_TR(0x732bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732bc7:L732bc7:{c.instructions+=3;NFSU2_TR(0x732bc7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B732bc9:{NFSU2_TR(0x732bc9);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732bca:{NFSU2_TR(0x732bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732bcb:L732bcb:{c.instructions+=3;NFSU2_TR(0x732bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732bcc:{NFSU2_TR(0x732bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B732bcd:{NFSU2_TR(0x732bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732bce:L732bce:{c.instructions+=4;NFSU2_TR(0x732bce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732bd2:{NFSU2_TR(0x732bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732bd5:{NFSU2_TR(0x732bd5);
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
B732bd7:{NFSU2_TR(0x732bd7);
if(r1(R+518)){{goto L732be0;}}
}
B732bd9:L732bd9:{c.instructions+=2;NFSU2_TR(0x732bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732bda:{NFSU2_TR(0x732bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732bdfull));
TAIL_STATIC(0x72aceau,72a);
}
B732bdf:L732bdf:{c.instructions+=1;NFSU2_TR(0x732bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732be0:L732be0:{c.instructions+=1;NFSU2_TR(0x732be0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732be1:L732be1:{c.instructions+=17;NFSU2_TR(0x732be1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732be2:{NFSU2_TR(0x732be2);
__builtin_memmove((R+20),(R+16),4);
}
B732be4:{NFSU2_TR(0x732be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B732be7:{NFSU2_TR(0x732be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732bea:{NFSU2_TR(0x732bea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732beb:{NFSU2_TR(0x732beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B732bee:{NFSU2_TR(0x732bee);
u8 U[4];
w4(U+0,u32(0x732b7eull));
s4(u32(r4(R+12)),r4(U+0));
}
B732bf4:{NFSU2_TR(0x732bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732bf7:{NFSU2_TR(0x732bf7);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732bfb:{NFSU2_TR(0x732bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732bfe:{NFSU2_TR(0x732bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732c01:{NFSU2_TR(0x732c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c02:{NFSU2_TR(0x732c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732c05:{NFSU2_TR(0x732c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B732c0c:{NFSU2_TR(0x732c0c);
u8 U[4];
w4(U+0,u32(0xd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c11:{NFSU2_TR(0x732c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x732bceull));
s4(u32(r4(U+0)),r4(U+4));
}
B732c18:{NFSU2_TR(0x732c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c1dull));
TAIL_STATIC(0x72ace4u,72a);
}
B732c1d:L732c1d:{c.instructions+=3;NFSU2_TR(0x732c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732c1f:{NFSU2_TR(0x732c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732c20:{NFSU2_TR(0x732c20);
if(r1(R+518)){{goto L732c2b;}}
}
B732c22:L732c22:{c.instructions+=2;NFSU2_TR(0x732c22);
__builtin_memmove((R+4),(R+0),4);
}
B732c24:{NFSU2_TR(0x732c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c29ull));
TAIL_STATIC(0x7346a0u,734);
}
B732c29:L732c29:{c.instructions+=1;NFSU2_TR(0x732c29);
{goto L732c2d;}
}
B732c2b:L732c2b:{c.instructions+=1;NFSU2_TR(0x732c2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B732c2d:L732c2d:{c.instructions+=6;NFSU2_TR(0x732c2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c2e:{NFSU2_TR(0x732c2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732c31:{NFSU2_TR(0x732c31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c32:{NFSU2_TR(0x732c32);
__builtin_memmove((R+4),(R+0),4);
}
B732c34:{NFSU2_TR(0x732c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732c37:{NFSU2_TR(0x732c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c3cull));
TAIL_STATIC(0x73473cu,734);
}
B732c3c:L732c3c:{c.instructions+=13;NFSU2_TR(0x732c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732c3f:{NFSU2_TR(0x732c3f);
__builtin_memmove((R+24),(R+0),4);
}
B732c41:{NFSU2_TR(0x732c41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732c44:{NFSU2_TR(0x732c44);
u8 U[40];
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
}
B732c45:{NFSU2_TR(0x732c45);
u8 U[40];
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
}
B732c46:{NFSU2_TR(0x732c46);
u8 U[40];
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
}
B732c47:{NFSU2_TR(0x732c47);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B732c49:{NFSU2_TR(0x732c49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c4b:{NFSU2_TR(0x732c4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732c4e:{NFSU2_TR(0x732c4e);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732c4f:{NFSU2_TR(0x732c4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c50:{NFSU2_TR(0x732c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732c53:{NFSU2_TR(0x732c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c58ull));
TAIL_STATIC(0x73476du,734);
}
B732c58:L732c58:{c.instructions+=4;NFSU2_TR(0x732c58);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732c5b:{NFSU2_TR(0x732c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732c5e:{NFSU2_TR(0x732c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732c5f:{NFSU2_TR(0x732c5f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L732c65;}}
}
B732c61:L732c61:{c.instructions+=2;NFSU2_TR(0x732c61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c63:{NFSU2_TR(0x732c63);
{goto L732c66;}
}
B732c65:L732c65:{c.instructions+=1;NFSU2_TR(0x732c65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c66:L732c66:{c.instructions+=1;NFSU2_TR(0x732c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c6bull));
TAIL_STATIC(0x73478bu,734);
}
B732c6b:L732c6b:{c.instructions+=8;NFSU2_TR(0x732c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732c6e:{NFSU2_TR(0x732c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732c71:{NFSU2_TR(0x732c71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c72:{NFSU2_TR(0x732c72);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732c75:{NFSU2_TR(0x732c75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c76:{NFSU2_TR(0x732c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732c79:{NFSU2_TR(0x732c79);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B732c7b:{NFSU2_TR(0x732c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732c80ull));
TAIL_STATIC(0x7346dbu,734);
}
B732c80:L732c80:{c.instructions+=4;NFSU2_TR(0x732c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732c81:{NFSU2_TR(0x732c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B732c82:{NFSU2_TR(0x732c82);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B732c83:{NFSU2_TR(0x732c83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732c84:L732c84:{c.instructions+=15;NFSU2_TR(0x732c84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c85:{NFSU2_TR(0x732c85);
__builtin_memmove((R+20),(R+16),4);
}
B732c87:{NFSU2_TR(0x732c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B732c8a:{NFSU2_TR(0x732c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732c8d:{NFSU2_TR(0x732c8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c8e:{NFSU2_TR(0x732c8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c8f:{NFSU2_TR(0x732c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732c92:{NFSU2_TR(0x732c92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732c93:{NFSU2_TR(0x732c93);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B732c95:{NFSU2_TR(0x732c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732c98:{NFSU2_TR(0x732c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732c9b:{NFSU2_TR(0x732c9b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B732c9d:{NFSU2_TR(0x732c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ca0:{NFSU2_TR(0x732ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ca3:{NFSU2_TR(0x732ca3);
if(r1(R+518)){{goto L732cb9;}}
}
B732ca5:L732ca5:{c.instructions+=5;NFSU2_TR(0x732ca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ca6:{NFSU2_TR(0x732ca6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B732caa:{NFSU2_TR(0x732caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732cab:{NFSU2_TR(0x732cab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732cae:{NFSU2_TR(0x732cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732cb3ull));
TAIL_STATIC(0x7237efu,723);
}
B732cb3:L732cb3:{c.instructions+=2;NFSU2_TR(0x732cb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B732cb6:{NFSU2_TR(0x732cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732cb9:L732cb9:{c.instructions+=3;NFSU2_TR(0x732cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B732cbc:{NFSU2_TR(0x732cbc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732cbe:{NFSU2_TR(0x732cbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L732d86;}}
}
B732cc4:L732cc4:{c.instructions+=5;NFSU2_TR(0x732cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732cc7:{NFSU2_TR(0x732cc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732cc8:{NFSU2_TR(0x732cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732ccb:{NFSU2_TR(0x732ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ccc:{NFSU2_TR(0x732ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732cd1ull));
TAIL_STATIC(0x734945u,734);
}
B732cd1:L732cd1:{c.instructions+=8;NFSU2_TR(0x732cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732cd4:{NFSU2_TR(0x732cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732cd7:{NFSU2_TR(0x732cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732cda:{NFSU2_TR(0x732cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732cdd:{NFSU2_TR(0x732cdd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B732cdf:{NFSU2_TR(0x732cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732ce2:{NFSU2_TR(0x732ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ce5:{NFSU2_TR(0x732ce5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L732d7c;}}
}
B732ceb:L732ceb:{c.instructions+=9;NFSU2_TR(0x732ceb);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B732ced:{NFSU2_TR(0x732ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732cf0:{NFSU2_TR(0x732cf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732cf1:{NFSU2_TR(0x732cf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B732cf5:{NFSU2_TR(0x732cf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732cf8:{NFSU2_TR(0x732cf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732cf9:{NFSU2_TR(0x732cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732cfa:{NFSU2_TR(0x732cfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732cfd:{NFSU2_TR(0x732cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732d02ull));
TAIL_STATIC(0x723699u,723);
}
B732d02:L732d02:{c.instructions+=4;NFSU2_TR(0x732d02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B732d05:{NFSU2_TR(0x732d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732d07:{NFSU2_TR(0x732d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732d0a:{NFSU2_TR(0x732d0a);
if(r1(R+518)){{goto L732d5e;}}
}
B732d0c:L732d0c:{c.instructions+=4;NFSU2_TR(0x732d0c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B732d0e:{NFSU2_TR(0x732d0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B732d0f:{NFSU2_TR(0x732d0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732d12:{NFSU2_TR(0x732d12);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L732d17;}}
}
B732d14:L732d14:{c.instructions+=1;NFSU2_TR(0x732d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732d17:L732d17:{c.instructions+=2;NFSU2_TR(0x732d17);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732d1b:{NFSU2_TR(0x732d1b);
if(r1(R+518)){{goto L732d46;}}
}
B732d1d:L732d1d:{c.instructions+=12;NFSU2_TR(0x732d1d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B732d20:{NFSU2_TR(0x732d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732d23:{NFSU2_TR(0x732d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732d26:{NFSU2_TR(0x732d26);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B732d29:{NFSU2_TR(0x732d29);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732d2c:{NFSU2_TR(0x732d2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B732d30:{NFSU2_TR(0x732d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732d33:{NFSU2_TR(0x732d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B732d36:{NFSU2_TR(0x732d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d37:{NFSU2_TR(0x732d37);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B732d3a:{NFSU2_TR(0x732d3a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B732d3d:{NFSU2_TR(0x732d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732d42ull));
TAIL_STATIC(0x734a69u,734);
}
B732d42:L732d42:{c.instructions+=1;NFSU2_TR(0x732d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732d46:L732d46:{c.instructions+=8;NFSU2_TR(0x732d46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B732d48:{NFSU2_TR(0x732d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732d4b:{NFSU2_TR(0x732d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732d4f:{NFSU2_TR(0x732d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d50:{NFSU2_TR(0x732d50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732d53:{NFSU2_TR(0x732d53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d54:{NFSU2_TR(0x732d54);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732d57:{NFSU2_TR(0x732d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732d5cull));
TAIL_STATIC(0x734919u,734);
}
B732d5c:L732d5c:{c.instructions+=1;NFSU2_TR(0x732d5c);
{goto L732d7e;}
}
B732d5e:L732d5e:{c.instructions+=2;NFSU2_TR(0x732d5e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732d60:{NFSU2_TR(0x732d60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L732d78;}}
}
B732d62:L732d62:{c.instructions+=2;NFSU2_TR(0x732d62);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732d66:{NFSU2_TR(0x732d66);
if(r1(R+518)){{goto L732d78;}}
}
B732d68:L732d68:{c.instructions+=5;NFSU2_TR(0x732d68);
__builtin_memmove((R+0),(R+12),4);
}
B732d6a:{NFSU2_TR(0x732d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732d6d:{NFSU2_TR(0x732d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d6e:{NFSU2_TR(0x732d6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732d71:{NFSU2_TR(0x732d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732d76ull));
TAIL_STATIC(0x727030u,727);
}
B732d76:L732d76:{c.instructions+=2;NFSU2_TR(0x732d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732d77:{NFSU2_TR(0x732d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732d78:L732d78:{c.instructions+=2;NFSU2_TR(0x732d78);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B732d7a:{NFSU2_TR(0x732d7a);
{goto L732d7e;}
}
B732d7c:L732d7c:{c.instructions+=1;NFSU2_TR(0x732d7c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B732d7e:L732d7e:{c.instructions+=2;NFSU2_TR(0x732d7e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732d80:{NFSU2_TR(0x732d80);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x732cc4u);}goto L732cc4;}}
}
B732d86:L732d86:{c.instructions+=6;NFSU2_TR(0x732d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732d89:{NFSU2_TR(0x732d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732d8a:{NFSU2_TR(0x732d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732d8b:{NFSU2_TR(0x732d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B732d8c:{NFSU2_TR(0x732d8c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B732d8d:{NFSU2_TR(0x732d8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732d8e:L732d8e:{c.instructions+=8;NFSU2_TR(0x732d8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d8f:{NFSU2_TR(0x732d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732d93:{NFSU2_TR(0x732d93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732d94:{NFSU2_TR(0x732d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732d98:{NFSU2_TR(0x732d98);
u8 U[4];
w4(U+0,u32(0x732c84ull));
s4(u32(r4(R+24)),r4(U+0));
}
B732d9e:{NFSU2_TR(0x732d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x733082ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732da5:{NFSU2_TR(0x732da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732da8:{NFSU2_TR(0x732da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732dadull));
TAIL_STATIC(0x727e0cu,727);
}
B732dad:L732dad:{c.instructions+=2;NFSU2_TR(0x732dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732dae:{NFSU2_TR(0x732dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732db3ull));
TAIL_STATIC(0x72c31eu,72c);
}
B732db3:L732db3:{c.instructions+=3;NFSU2_TR(0x732db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732db6:{NFSU2_TR(0x732db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732db9:{NFSU2_TR(0x732db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732dbeull));
TAIL_STATIC(0x727e2au,727);
}
B732dbe:L732dbe:{c.instructions+=10;NFSU2_TR(0x732dbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B732dc1:{NFSU2_TR(0x732dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732dc4:{NFSU2_TR(0x732dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732dc8:{NFSU2_TR(0x732dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732dcb:{NFSU2_TR(0x732dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732dce:{NFSU2_TR(0x732dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732dd2:{NFSU2_TR(0x732dd2);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732dd6:{NFSU2_TR(0x732dd6);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ddb:{NFSU2_TR(0x732ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732dde:{NFSU2_TR(0x732dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732de3ull));
TAIL_STATIC(0x72ace4u,72a);
}
B732de3:L732de3:{c.instructions+=3;NFSU2_TR(0x732de3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B732de6:{NFSU2_TR(0x732de6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732de8:{NFSU2_TR(0x732de8);
if(r1(R+518)){{goto L732df3;}}
}
B732dea:L732dea:{c.instructions+=2;NFSU2_TR(0x732dea);
__builtin_memmove((R+4),(R+0),4);
}
B732dec:{NFSU2_TR(0x732dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732df1ull));
TAIL_STATIC(0x734ce9u,734);
}
B732df1:L732df1:{c.instructions+=1;NFSU2_TR(0x732df1);
{goto L732df5;}
}
B732df3:L732df3:{c.instructions+=1;NFSU2_TR(0x732df3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732df5:L732df5:{c.instructions+=4;NFSU2_TR(0x732df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732df6:{NFSU2_TR(0x732df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732df9:{NFSU2_TR(0x732df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732dfa:{NFSU2_TR(0x732dfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732dfb:L732dfb:{c.instructions+=15;NFSU2_TR(0x732dfb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732dfc:{NFSU2_TR(0x732dfc);
__builtin_memmove((R+20),(R+16),4);
}
B732dfe:{NFSU2_TR(0x732dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B732e04:{NFSU2_TR(0x732e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732e07:{NFSU2_TR(0x732e07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e08:{NFSU2_TR(0x732e08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e09:{NFSU2_TR(0x732e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732e0c:{NFSU2_TR(0x732e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e0d:{NFSU2_TR(0x732e0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B732e0f:{NFSU2_TR(0x732e0f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B732e11:{NFSU2_TR(0x732e11);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B732e12:{NFSU2_TR(0x732e12);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732e15:{NFSU2_TR(0x732e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732e18:{NFSU2_TR(0x732e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732e1b:{NFSU2_TR(0x732e1b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L732f3b;}}
}
B732e21:L732e21:{c.instructions+=2;NFSU2_TR(0x732e21);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732e24:{NFSU2_TR(0x732e24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L732e45;}}
}
B732e26:L732e26:{c.instructions+=12;NFSU2_TR(0x732e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732e29:{NFSU2_TR(0x732e29);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e2b:{NFSU2_TR(0x732e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732e2c:{NFSU2_TR(0x732e2c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B732e2d:{NFSU2_TR(0x732e2d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e2d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e2d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B732e2f:{NFSU2_TR(0x732e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732e32:{NFSU2_TR(0x732e32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B732e35:{NFSU2_TR(0x732e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e36:{NFSU2_TR(0x732e36);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B732e39:{NFSU2_TR(0x732e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e3a:{NFSU2_TR(0x732e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732e3d:{NFSU2_TR(0x732e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732e42ull));
TAIL_STATIC(0x734919u,734);
}
B732e42:L732e42:{c.instructions+=1;NFSU2_TR(0x732e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732e45:L732e45:{c.instructions+=2;NFSU2_TR(0x732e45);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732e48:{NFSU2_TR(0x732e48);
if(r1(R+518)){{goto L732f88;}}
}
B732e4e:L732e4e:{c.instructions+=5;NFSU2_TR(0x732e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732e51:{NFSU2_TR(0x732e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732e54:{NFSU2_TR(0x732e54);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732e57:{NFSU2_TR(0x732e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e58:{NFSU2_TR(0x732e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732e5dull));
TAIL_STATIC(0x734945u,734);
}
B732e5d:L732e5d:{c.instructions+=7;NFSU2_TR(0x732e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732e60:{NFSU2_TR(0x732e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732e63:{NFSU2_TR(0x732e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732e66:{NFSU2_TR(0x732e66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B732e69:{NFSU2_TR(0x732e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732e6c:{NFSU2_TR(0x732e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732e6f:{NFSU2_TR(0x732e6f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L732efc;}}
}
B732e75:L732e75:{c.instructions+=26;NFSU2_TR(0x732e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732e78:{NFSU2_TR(0x732e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732e7b:{NFSU2_TR(0x732e7b);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e7d:{NFSU2_TR(0x732e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732e7e:{NFSU2_TR(0x732e7e);
__builtin_memmove((R+0),(R+28),4);
}
B732e80:{NFSU2_TR(0x732e80);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B732e81:{NFSU2_TR(0x732e81);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e81);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e81);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B732e83:{NFSU2_TR(0x732e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732e86:{NFSU2_TR(0x732e86);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B732e88:{NFSU2_TR(0x732e88);
__builtin_memmove((R+12),(R+8),4);
}
B732e8a:{NFSU2_TR(0x732e8a);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B732e8e:{NFSU2_TR(0x732e8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e8f:{NFSU2_TR(0x732e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B732e92:{NFSU2_TR(0x732e92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e93:{NFSU2_TR(0x732e93);
__builtin_memmove((R+0),(R+28),4);
}
B732e95:{NFSU2_TR(0x732e95);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B732e97:{NFSU2_TR(0x732e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732e9a:{NFSU2_TR(0x732e9a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B732e9b:{NFSU2_TR(0x732e9b);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732e9d:{NFSU2_TR(0x732e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732e9e:{NFSU2_TR(0x732e9e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e9e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x732e9e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B732ea0:{NFSU2_TR(0x732ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732ea3:{NFSU2_TR(0x732ea3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xfull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B732ea6:{NFSU2_TR(0x732ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B732ea9:{NFSU2_TR(0x732ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732eaa:{NFSU2_TR(0x732eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732eafull));
TAIL_STATIC(0x734919u,734);
}
B732eaf:L732eaf:{c.instructions+=3;NFSU2_TR(0x732eaf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732eb3:{NFSU2_TR(0x732eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732eb6:{NFSU2_TR(0x732eb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L732f0b;}}
}
B732eb8:L732eb8:{c.instructions+=3;NFSU2_TR(0x732eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B732ebb:{NFSU2_TR(0x732ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ebc:{NFSU2_TR(0x732ebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732ec1ull));
TAIL_STATIC(0x734a40u,734);
}
B732ec1:L732ec1:{c.instructions+=13;NFSU2_TR(0x732ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B732ec3:{NFSU2_TR(0x732ec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732ec6:{NFSU2_TR(0x732ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ec9:{NFSU2_TR(0x732ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732ecc:{NFSU2_TR(0x732ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ecf:{NFSU2_TR(0x732ecf);
__builtin_memmove((R+0),(R+4),4);
}
B732ed1:{NFSU2_TR(0x732ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732ed4:{NFSU2_TR(0x732ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ed7:{NFSU2_TR(0x732ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732eda:{NFSU2_TR(0x732eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732edd:{NFSU2_TR(0x732edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732ee0:{NFSU2_TR(0x732ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732ee1:{NFSU2_TR(0x732ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732ee6ull));
TAIL_STATIC(0x734945u,734);
}
B732ee6:L732ee6:{c.instructions+=6;NFSU2_TR(0x732ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732ee9:{NFSU2_TR(0x732ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732eec:{NFSU2_TR(0x732eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732eef:{NFSU2_TR(0x732eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732ef2:{NFSU2_TR(0x732ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ef5:{NFSU2_TR(0x732ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732efc:L732efc:{c.instructions+=1;NFSU2_TR(0x732efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732eff:L732eff:{c.instructions+=2;NFSU2_TR(0x732eff);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B732f03:{NFSU2_TR(0x732f03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x732e4eu);}goto L732e4e;}}
}
B732f09:L732f09:{c.instructions+=1;NFSU2_TR(0x732f09);
{goto L732f88;}
}
B732f0b:L732f0b:{c.instructions+=7;NFSU2_TR(0x732f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732f0e:{NFSU2_TR(0x732f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732f11:{NFSU2_TR(0x732f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732f14:{NFSU2_TR(0x732f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732f17:{NFSU2_TR(0x732f17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732f1a:{NFSU2_TR(0x732f1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f1b:{NFSU2_TR(0x732f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732f20ull));
TAIL_STATIC(0x734a69u,734);
}
B732f20:L732f20:{c.instructions+=7;NFSU2_TR(0x732f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732f23:{NFSU2_TR(0x732f23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B732f29:{NFSU2_TR(0x732f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732f2c:{NFSU2_TR(0x732f2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f2d:{NFSU2_TR(0x732f2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732f30:{NFSU2_TR(0x732f30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f31:{NFSU2_TR(0x732f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732f36ull));
TAIL_STATIC(0x734945u,734);
}
B732f36:L732f36:{c.instructions+=2;NFSU2_TR(0x732f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732f39:{NFSU2_TR(0x732f39);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x732effu);}goto L732eff;}
}
B732f3b:L732f3b:{c.instructions+=2;NFSU2_TR(0x732f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732f3e:{NFSU2_TR(0x732f3e);
{goto L732f84;}
}
B732f40:L732f40:{c.instructions+=5;NFSU2_TR(0x732f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732f43:{NFSU2_TR(0x732f43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f44:{NFSU2_TR(0x732f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B732f47:{NFSU2_TR(0x732f47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f48:{NFSU2_TR(0x732f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732f4dull));
TAIL_STATIC(0x734945u,734);
}
B732f4d:L732f4d:{c.instructions+=8;NFSU2_TR(0x732f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732f50:{NFSU2_TR(0x732f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732f53:{NFSU2_TR(0x732f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B732f56:{NFSU2_TR(0x732f56);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B732f58:{NFSU2_TR(0x732f58);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B732f5a:{NFSU2_TR(0x732f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B732f5d:{NFSU2_TR(0x732f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732f60:{NFSU2_TR(0x732f60);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L732f84;}}
}
B732f62:L732f62:{c.instructions+=11;NFSU2_TR(0x732f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732f65:{NFSU2_TR(0x732f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732f68:{NFSU2_TR(0x732f68);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B732f6a:{NFSU2_TR(0x732f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732f6d:{NFSU2_TR(0x732f6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732f70:{NFSU2_TR(0x732f70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f71:{NFSU2_TR(0x732f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B732f74:{NFSU2_TR(0x732f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B732f7b:{NFSU2_TR(0x732f7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f7c:{NFSU2_TR(0x732f7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B732f7f:{NFSU2_TR(0x732f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732f84ull));
TAIL_STATIC(0x734919u,734);
}
B732f84:L732f84:{c.instructions+=2;NFSU2_TR(0x732f84);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B732f86:{NFSU2_TR(0x732f86);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x732f40u);}goto L732f40;}}
}
B732f88:L732f88:{c.instructions+=6;NFSU2_TR(0x732f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732f8b:{NFSU2_TR(0x732f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B732f8c:{NFSU2_TR(0x732f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B732f8d:{NFSU2_TR(0x732f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B732f8e:{NFSU2_TR(0x732f8e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B732f8f:{NFSU2_TR(0x732f8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B732f90:L732f90:{c.instructions+=17;NFSU2_TR(0x732f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732f91:{NFSU2_TR(0x732f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B732f95:{NFSU2_TR(0x732f95);
u8 U[4];
w4(U+0,u32(0x732dfbull));
s4(u32(r4(R+24)),r4(U+0));
}
B732f9b:{NFSU2_TR(0x732f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x733082ull));
s4(u32(r4(U+0)),r4(U+4));
}
B732fa2:{NFSU2_TR(0x732fa2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732fa3:{NFSU2_TR(0x732fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B732fa7:{NFSU2_TR(0x732fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732faa:{NFSU2_TR(0x732faa);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732fae:{NFSU2_TR(0x732fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732fb1:{NFSU2_TR(0x732fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732fb4:{NFSU2_TR(0x732fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732fb7:{NFSU2_TR(0x732fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732fba:{NFSU2_TR(0x732fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732fbd:{NFSU2_TR(0x732fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732fc0:{NFSU2_TR(0x732fc0);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B732fc5:{NFSU2_TR(0x732fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732fc8:{NFSU2_TR(0x732fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732fcdull));
TAIL_STATIC(0x72ace4u,72a);
}
B732fcd:L732fcd:{c.instructions+=3;NFSU2_TR(0x732fcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B732fcf:{NFSU2_TR(0x732fcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B732fd0:{NFSU2_TR(0x732fd0);
if(r1(R+518)){{goto L732fdb;}}
}
B732fd2:L732fd2:{c.instructions+=2;NFSU2_TR(0x732fd2);
__builtin_memmove((R+4),(R+0),4);
}
B732fd4:{NFSU2_TR(0x732fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x732fd9ull));
TAIL_STATIC(0x734ce9u,734);
}
B732fd9:L732fd9:{c.instructions+=1;NFSU2_TR(0x732fd9);
{goto L732fdd;}
}
B732fdb:L732fdb:{c.instructions+=1;NFSU2_TR(0x732fdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B732fdd:L732fdd:{c.instructions+=4;NFSU2_TR(0x732fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732fe0:{NFSU2_TR(0x732fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B732fe7:{NFSU2_TR(0x732fe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B732feb:{NFSU2_TR(0x732feb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x73300eu,733);}
}
B732fed:L732fed:{c.instructions+=6;NFSU2_TR(0x732fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B732fef:{NFSU2_TR(0x732fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B732ff2:{NFSU2_TR(0x732ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B732ff5:{NFSU2_TR(0x732ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B732ff9:{NFSU2_TR(0x732ff9);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B732ffd:{NFSU2_TR(0x732ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x733000u,733);
}
XIT:NFSU2_TR_EXIT(0x732,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
