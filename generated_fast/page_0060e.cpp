#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60e(u8* __restrict R,Cpu& c);
u32 page_60e(Cpu& c){return body_60e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60e002:goto L60e002;
case 0x60e004:c.instructions+=8;goto B60e004;
case 0x60e00b:c.instructions+=7;goto B60e00b;
case 0x60e012:c.instructions+=6;goto B60e012;
case 0x60e014:c.instructions+=5;goto B60e014;
case 0x60e01b:c.instructions+=4;goto B60e01b;
case 0x60e01d:c.instructions+=3;goto B60e01d;
case 0x60e024:c.instructions+=2;goto B60e024;
case 0x60e02b:c.instructions+=1;goto B60e02b;
case 0x60e030:goto L60e030;
case 0x60e033:c.instructions+=10;goto B60e033;
case 0x60e03a:c.instructions+=9;goto B60e03a;
case 0x60e041:c.instructions+=8;goto B60e041;
case 0x60e048:c.instructions+=7;goto B60e048;
case 0x60e04f:c.instructions+=6;goto B60e04f;
case 0x60e056:c.instructions+=5;goto B60e056;
case 0x60e05d:c.instructions+=4;goto B60e05d;
case 0x60e064:c.instructions+=3;goto B60e064;
case 0x60e065:c.instructions+=2;goto B60e065;
case 0x60e068:c.instructions+=1;goto B60e068;
case 0x60e06a:goto L60e06a;
case 0x60e071:c.instructions+=9;goto B60e071;
case 0x60e078:c.instructions+=8;goto B60e078;
case 0x60e07a:c.instructions+=7;goto B60e07a;
case 0x60e07c:c.instructions+=6;goto B60e07c;
case 0x60e07d:c.instructions+=5;goto B60e07d;
case 0x60e07e:c.instructions+=4;goto B60e07e;
case 0x60e082:c.instructions+=3;goto B60e082;
case 0x60e083:c.instructions+=2;goto B60e083;
case 0x60e085:c.instructions+=1;goto B60e085;
case 0x60e08a:goto L60e08a;
case 0x60e08e:c.instructions+=181;goto B60e08e;
case 0x60e092:c.instructions+=180;goto B60e092;
case 0x60e096:c.instructions+=179;goto B60e096;
case 0x60e098:c.instructions+=178;goto B60e098;
case 0x60e09a:c.instructions+=177;goto B60e09a;
case 0x60e0a1:c.instructions+=176;goto B60e0a1;
case 0x60e0a8:c.instructions+=175;goto B60e0a8;
case 0x60e0ac:c.instructions+=174;goto B60e0ac;
case 0x60e0b3:c.instructions+=173;goto B60e0b3;
case 0x60e0ba:c.instructions+=172;goto B60e0ba;
case 0x60e0c1:c.instructions+=171;goto B60e0c1;
case 0x60e0c5:c.instructions+=170;goto B60e0c5;
case 0x60e0c9:c.instructions+=169;goto B60e0c9;
case 0x60e0d0:c.instructions+=168;goto B60e0d0;
case 0x60e0d7:c.instructions+=167;goto B60e0d7;
case 0x60e0de:c.instructions+=166;goto B60e0de;
case 0x60e0e2:c.instructions+=165;goto B60e0e2;
case 0x60e0e9:c.instructions+=164;goto B60e0e9;
case 0x60e0ed:c.instructions+=163;goto B60e0ed;
case 0x60e0f4:c.instructions+=162;goto B60e0f4;
case 0x60e0fb:c.instructions+=161;goto B60e0fb;
case 0x60e0fd:c.instructions+=160;goto B60e0fd;
case 0x60e104:c.instructions+=159;goto B60e104;
case 0x60e10b:c.instructions+=158;goto B60e10b;
case 0x60e112:c.instructions+=157;goto B60e112;
case 0x60e119:c.instructions+=156;goto B60e119;
case 0x60e11b:c.instructions+=155;goto B60e11b;
case 0x60e122:c.instructions+=154;goto B60e122;
case 0x60e124:c.instructions+=153;goto B60e124;
case 0x60e12b:c.instructions+=152;goto B60e12b;
case 0x60e12d:c.instructions+=151;goto B60e12d;
case 0x60e134:c.instructions+=150;goto B60e134;
case 0x60e136:c.instructions+=149;goto B60e136;
case 0x60e13d:c.instructions+=148;goto B60e13d;
case 0x60e144:c.instructions+=147;goto B60e144;
case 0x60e14b:c.instructions+=146;goto B60e14b;
case 0x60e152:c.instructions+=145;goto B60e152;
case 0x60e159:c.instructions+=144;goto B60e159;
case 0x60e15b:c.instructions+=143;goto B60e15b;
case 0x60e162:c.instructions+=142;goto B60e162;
case 0x60e169:c.instructions+=141;goto B60e169;
case 0x60e170:c.instructions+=140;goto B60e170;
case 0x60e174:c.instructions+=139;goto B60e174;
case 0x60e178:c.instructions+=138;goto B60e178;
case 0x60e17f:c.instructions+=137;goto B60e17f;
case 0x60e183:c.instructions+=136;goto B60e183;
case 0x60e18a:c.instructions+=135;goto B60e18a;
case 0x60e18e:c.instructions+=134;goto B60e18e;
case 0x60e195:c.instructions+=133;goto B60e195;
case 0x60e19c:c.instructions+=132;goto B60e19c;
case 0x60e19e:c.instructions+=131;goto B60e19e;
case 0x60e1a5:c.instructions+=130;goto B60e1a5;
case 0x60e1ac:c.instructions+=129;goto B60e1ac;
case 0x60e1b3:c.instructions+=128;goto B60e1b3;
case 0x60e1ba:c.instructions+=127;goto B60e1ba;
case 0x60e1be:c.instructions+=126;goto B60e1be;
case 0x60e1c5:c.instructions+=125;goto B60e1c5;
case 0x60e1c9:c.instructions+=124;goto B60e1c9;
case 0x60e1d0:c.instructions+=123;goto B60e1d0;
case 0x60e1d4:c.instructions+=122;goto B60e1d4;
case 0x60e1db:c.instructions+=121;goto B60e1db;
case 0x60e1e2:c.instructions+=120;goto B60e1e2;
case 0x60e1e4:c.instructions+=119;goto B60e1e4;
case 0x60e1eb:c.instructions+=118;goto B60e1eb;
case 0x60e1f2:c.instructions+=117;goto B60e1f2;
case 0x60e1f9:c.instructions+=116;goto B60e1f9;
case 0x60e200:c.instructions+=115;goto B60e200;
case 0x60e202:c.instructions+=114;goto B60e202;
case 0x60e209:c.instructions+=113;goto B60e209;
case 0x60e20b:c.instructions+=112;goto B60e20b;
case 0x60e212:c.instructions+=111;goto B60e212;
case 0x60e214:c.instructions+=110;goto B60e214;
case 0x60e218:c.instructions+=109;goto B60e218;
case 0x60e21a:c.instructions+=108;goto B60e21a;
case 0x60e221:c.instructions+=107;goto B60e221;
case 0x60e228:c.instructions+=106;goto B60e228;
case 0x60e22f:c.instructions+=105;goto B60e22f;
case 0x60e231:c.instructions+=104;goto B60e231;
case 0x60e238:c.instructions+=103;goto B60e238;
case 0x60e23f:c.instructions+=102;goto B60e23f;
case 0x60e243:c.instructions+=101;goto B60e243;
case 0x60e24a:c.instructions+=100;goto B60e24a;
case 0x60e251:c.instructions+=99;goto B60e251;
case 0x60e258:c.instructions+=98;goto B60e258;
case 0x60e25c:c.instructions+=97;goto B60e25c;
case 0x60e263:c.instructions+=96;goto B60e263;
case 0x60e26a:c.instructions+=95;goto B60e26a;
case 0x60e271:c.instructions+=94;goto B60e271;
case 0x60e278:c.instructions+=93;goto B60e278;
case 0x60e27f:c.instructions+=92;goto B60e27f;
case 0x60e286:c.instructions+=91;goto B60e286;
case 0x60e288:c.instructions+=90;goto B60e288;
case 0x60e28f:c.instructions+=89;goto B60e28f;
case 0x60e291:c.instructions+=88;goto B60e291;
case 0x60e295:c.instructions+=87;goto B60e295;
case 0x60e299:c.instructions+=86;goto B60e299;
case 0x60e29b:c.instructions+=85;goto B60e29b;
case 0x60e2a2:c.instructions+=84;goto B60e2a2;
case 0x60e2a9:c.instructions+=83;goto B60e2a9;
case 0x60e2b0:c.instructions+=82;goto B60e2b0;
case 0x60e2b4:c.instructions+=81;goto B60e2b4;
case 0x60e2bb:c.instructions+=80;goto B60e2bb;
case 0x60e2bf:c.instructions+=79;goto B60e2bf;
case 0x60e2c6:c.instructions+=78;goto B60e2c6;
case 0x60e2ca:c.instructions+=77;goto B60e2ca;
case 0x60e2d1:c.instructions+=76;goto B60e2d1;
case 0x60e2d8:c.instructions+=75;goto B60e2d8;
case 0x60e2da:c.instructions+=74;goto B60e2da;
case 0x60e2e1:c.instructions+=73;goto B60e2e1;
case 0x60e2e8:c.instructions+=72;goto B60e2e8;
case 0x60e2ef:c.instructions+=71;goto B60e2ef;
case 0x60e2f6:c.instructions+=70;goto B60e2f6;
case 0x60e2f8:c.instructions+=69;goto B60e2f8;
case 0x60e2ff:c.instructions+=68;goto B60e2ff;
case 0x60e301:c.instructions+=67;goto B60e301;
case 0x60e308:c.instructions+=66;goto B60e308;
case 0x60e30a:c.instructions+=65;goto B60e30a;
case 0x60e311:c.instructions+=64;goto B60e311;
case 0x60e313:c.instructions+=63;goto B60e313;
case 0x60e31a:c.instructions+=62;goto B60e31a;
case 0x60e321:c.instructions+=61;goto B60e321;
case 0x60e328:c.instructions+=60;goto B60e328;
case 0x60e32f:c.instructions+=59;goto B60e32f;
case 0x60e336:c.instructions+=58;goto B60e336;
case 0x60e338:c.instructions+=57;goto B60e338;
case 0x60e33f:c.instructions+=56;goto B60e33f;
case 0x60e346:c.instructions+=55;goto B60e346;
case 0x60e34d:c.instructions+=54;goto B60e34d;
case 0x60e351:c.instructions+=53;goto B60e351;
case 0x60e355:c.instructions+=52;goto B60e355;
case 0x60e35c:c.instructions+=51;goto B60e35c;
case 0x60e360:c.instructions+=50;goto B60e360;
case 0x60e367:c.instructions+=49;goto B60e367;
case 0x60e36b:c.instructions+=48;goto B60e36b;
case 0x60e372:c.instructions+=47;goto B60e372;
case 0x60e379:c.instructions+=46;goto B60e379;
case 0x60e37b:c.instructions+=45;goto B60e37b;
case 0x60e382:c.instructions+=44;goto B60e382;
case 0x60e389:c.instructions+=43;goto B60e389;
case 0x60e390:c.instructions+=42;goto B60e390;
case 0x60e397:c.instructions+=41;goto B60e397;
case 0x60e39b:c.instructions+=40;goto B60e39b;
case 0x60e3a2:c.instructions+=39;goto B60e3a2;
case 0x60e3a6:c.instructions+=38;goto B60e3a6;
case 0x60e3ad:c.instructions+=37;goto B60e3ad;
case 0x60e3b1:c.instructions+=36;goto B60e3b1;
case 0x60e3b8:c.instructions+=35;goto B60e3b8;
case 0x60e3bf:c.instructions+=34;goto B60e3bf;
case 0x60e3c1:c.instructions+=33;goto B60e3c1;
case 0x60e3c8:c.instructions+=32;goto B60e3c8;
case 0x60e3cf:c.instructions+=31;goto B60e3cf;
case 0x60e3d6:c.instructions+=30;goto B60e3d6;
case 0x60e3dd:c.instructions+=29;goto B60e3dd;
case 0x60e3e4:c.instructions+=28;goto B60e3e4;
case 0x60e3e6:c.instructions+=27;goto B60e3e6;
case 0x60e3ed:c.instructions+=26;goto B60e3ed;
case 0x60e3f4:c.instructions+=25;goto B60e3f4;
case 0x60e3f6:c.instructions+=24;goto B60e3f6;
case 0x60e3f8:c.instructions+=23;goto B60e3f8;
case 0x60e3fa:c.instructions+=22;goto B60e3fa;
case 0x60e401:c.instructions+=21;goto B60e401;
case 0x60e402:c.instructions+=20;goto B60e402;
case 0x60e404:c.instructions+=19;goto B60e404;
case 0x60e405:c.instructions+=18;goto B60e405;
case 0x60e407:c.instructions+=17;goto B60e407;
case 0x60e40e:c.instructions+=16;goto B60e40e;
case 0x60e415:c.instructions+=15;goto B60e415;
case 0x60e417:c.instructions+=14;goto B60e417;
case 0x60e41e:c.instructions+=13;goto B60e41e;
case 0x60e425:c.instructions+=12;goto B60e425;
case 0x60e429:c.instructions+=11;goto B60e429;
case 0x60e430:c.instructions+=10;goto B60e430;
case 0x60e431:c.instructions+=9;goto B60e431;
case 0x60e438:c.instructions+=8;goto B60e438;
case 0x60e43f:c.instructions+=7;goto B60e43f;
case 0x60e446:c.instructions+=6;goto B60e446;
case 0x60e44d:c.instructions+=5;goto B60e44d;
case 0x60e454:c.instructions+=4;goto B60e454;
case 0x60e456:c.instructions+=3;goto B60e456;
case 0x60e45d:c.instructions+=2;goto B60e45d;
case 0x60e45f:c.instructions+=1;goto B60e45f;
case 0x60e464:goto L60e464;
case 0x60e468:c.instructions+=392;goto B60e468;
case 0x60e46c:c.instructions+=391;goto B60e46c;
case 0x60e470:c.instructions+=390;goto B60e470;
case 0x60e474:c.instructions+=389;goto B60e474;
case 0x60e478:c.instructions+=388;goto B60e478;
case 0x60e47c:c.instructions+=387;goto B60e47c;
case 0x60e47e:c.instructions+=386;goto B60e47e;
case 0x60e482:c.instructions+=385;goto B60e482;
case 0x60e489:c.instructions+=384;goto B60e489;
case 0x60e490:c.instructions+=383;goto B60e490;
case 0x60e497:c.instructions+=382;goto B60e497;
case 0x60e49b:c.instructions+=381;goto B60e49b;
case 0x60e4a2:c.instructions+=380;goto B60e4a2;
case 0x60e4a9:c.instructions+=379;goto B60e4a9;
case 0x60e4ad:c.instructions+=378;goto B60e4ad;
case 0x60e4b1:c.instructions+=377;goto B60e4b1;
case 0x60e4b8:c.instructions+=376;goto B60e4b8;
case 0x60e4bf:c.instructions+=375;goto B60e4bf;
case 0x60e4c6:c.instructions+=374;goto B60e4c6;
case 0x60e4ca:c.instructions+=373;goto B60e4ca;
case 0x60e4cc:c.instructions+=372;goto B60e4cc;
case 0x60e4d3:c.instructions+=371;goto B60e4d3;
case 0x60e4da:c.instructions+=370;goto B60e4da;
case 0x60e4de:c.instructions+=369;goto B60e4de;
case 0x60e4e2:c.instructions+=368;goto B60e4e2;
case 0x60e4e6:c.instructions+=367;goto B60e4e6;
case 0x60e4ea:c.instructions+=366;goto B60e4ea;
case 0x60e4f1:c.instructions+=365;goto B60e4f1;
case 0x60e4f8:c.instructions+=364;goto B60e4f8;
case 0x60e4fa:c.instructions+=363;goto B60e4fa;
case 0x60e501:c.instructions+=362;goto B60e501;
case 0x60e508:c.instructions+=361;goto B60e508;
case 0x60e50f:c.instructions+=360;goto B60e50f;
case 0x60e511:c.instructions+=359;goto B60e511;
case 0x60e518:c.instructions+=358;goto B60e518;
case 0x60e51f:c.instructions+=357;goto B60e51f;
case 0x60e526:c.instructions+=356;goto B60e526;
case 0x60e52a:c.instructions+=355;goto B60e52a;
case 0x60e531:c.instructions+=354;goto B60e531;
case 0x60e535:c.instructions+=353;goto B60e535;
case 0x60e53c:c.instructions+=352;goto B60e53c;
case 0x60e540:c.instructions+=351;goto B60e540;
case 0x60e544:c.instructions+=350;goto B60e544;
case 0x60e54b:c.instructions+=349;goto B60e54b;
case 0x60e54f:c.instructions+=348;goto B60e54f;
case 0x60e553:c.instructions+=347;goto B60e553;
case 0x60e55a:c.instructions+=346;goto B60e55a;
case 0x60e55e:c.instructions+=345;goto B60e55e;
case 0x60e565:c.instructions+=344;goto B60e565;
case 0x60e569:c.instructions+=343;goto B60e569;
case 0x60e570:c.instructions+=342;goto B60e570;
case 0x60e577:c.instructions+=341;goto B60e577;
case 0x60e579:c.instructions+=340;goto B60e579;
case 0x60e580:c.instructions+=339;goto B60e580;
case 0x60e587:c.instructions+=338;goto B60e587;
case 0x60e58b:c.instructions+=337;goto B60e58b;
case 0x60e592:c.instructions+=336;goto B60e592;
case 0x60e594:c.instructions+=335;goto B60e594;
case 0x60e59b:c.instructions+=334;goto B60e59b;
case 0x60e5a2:c.instructions+=333;goto B60e5a2;
case 0x60e5a6:c.instructions+=332;goto B60e5a6;
case 0x60e5ad:c.instructions+=331;goto B60e5ad;
case 0x60e5b4:c.instructions+=330;goto B60e5b4;
case 0x60e5b8:c.instructions+=329;goto B60e5b8;
case 0x60e5bc:c.instructions+=328;goto B60e5bc;
case 0x60e5c3:c.instructions+=327;goto B60e5c3;
case 0x60e5ca:c.instructions+=326;goto B60e5ca;
case 0x60e5ce:c.instructions+=325;goto B60e5ce;
case 0x60e5d5:c.instructions+=324;goto B60e5d5;
case 0x60e5dc:c.instructions+=323;goto B60e5dc;
case 0x60e5de:c.instructions+=322;goto B60e5de;
case 0x60e5e5:c.instructions+=321;goto B60e5e5;
case 0x60e5ec:c.instructions+=320;goto B60e5ec;
case 0x60e5f0:c.instructions+=319;goto B60e5f0;
case 0x60e5f4:c.instructions+=318;goto B60e5f4;
case 0x60e5fb:c.instructions+=317;goto B60e5fb;
case 0x60e602:c.instructions+=316;goto B60e602;
case 0x60e606:c.instructions+=315;goto B60e606;
case 0x60e608:c.instructions+=314;goto B60e608;
case 0x60e60a:c.instructions+=313;goto B60e60a;
case 0x60e60e:c.instructions+=312;goto B60e60e;
case 0x60e610:c.instructions+=311;goto B60e610;
case 0x60e617:c.instructions+=310;goto B60e617;
case 0x60e61b:c.instructions+=309;goto B60e61b;
case 0x60e61f:c.instructions+=308;goto B60e61f;
case 0x60e623:c.instructions+=307;goto B60e623;
case 0x60e625:c.instructions+=306;goto B60e625;
case 0x60e62c:c.instructions+=305;goto B60e62c;
case 0x60e633:c.instructions+=304;goto B60e633;
case 0x60e63a:c.instructions+=303;goto B60e63a;
case 0x60e63e:c.instructions+=302;goto B60e63e;
case 0x60e645:c.instructions+=301;goto B60e645;
case 0x60e649:c.instructions+=300;goto B60e649;
case 0x60e650:c.instructions+=299;goto B60e650;
case 0x60e654:c.instructions+=298;goto B60e654;
case 0x60e65b:c.instructions+=297;goto B60e65b;
case 0x60e65d:c.instructions+=296;goto B60e65d;
case 0x60e664:c.instructions+=295;goto B60e664;
case 0x60e66b:c.instructions+=294;goto B60e66b;
case 0x60e66f:c.instructions+=293;goto B60e66f;
case 0x60e676:c.instructions+=292;goto B60e676;
case 0x60e67a:c.instructions+=291;goto B60e67a;
case 0x60e67e:c.instructions+=290;goto B60e67e;
case 0x60e680:c.instructions+=289;goto B60e680;
case 0x60e684:c.instructions+=288;goto B60e684;
case 0x60e688:c.instructions+=287;goto B60e688;
case 0x60e68a:c.instructions+=286;goto B60e68a;
case 0x60e68c:c.instructions+=285;goto B60e68c;
case 0x60e68e:c.instructions+=284;goto B60e68e;
case 0x60e692:c.instructions+=283;goto B60e692;
case 0x60e696:c.instructions+=282;goto B60e696;
case 0x60e69d:c.instructions+=281;goto B60e69d;
case 0x60e6a1:c.instructions+=280;goto B60e6a1;
case 0x60e6a8:c.instructions+=279;goto B60e6a8;
case 0x60e6ac:c.instructions+=278;goto B60e6ac;
case 0x60e6b3:c.instructions+=277;goto B60e6b3;
case 0x60e6ba:c.instructions+=276;goto B60e6ba;
case 0x60e6bc:c.instructions+=275;goto B60e6bc;
case 0x60e6c3:c.instructions+=274;goto B60e6c3;
case 0x60e6ca:c.instructions+=273;goto B60e6ca;
case 0x60e6d1:c.instructions+=272;goto B60e6d1;
case 0x60e6d8:c.instructions+=271;goto B60e6d8;
case 0x60e6dc:c.instructions+=270;goto B60e6dc;
case 0x60e6e3:c.instructions+=269;goto B60e6e3;
case 0x60e6e7:c.instructions+=268;goto B60e6e7;
case 0x60e6ee:c.instructions+=267;goto B60e6ee;
case 0x60e6f2:c.instructions+=266;goto B60e6f2;
case 0x60e6f9:c.instructions+=265;goto B60e6f9;
case 0x60e700:c.instructions+=264;goto B60e700;
case 0x60e702:c.instructions+=263;goto B60e702;
case 0x60e709:c.instructions+=262;goto B60e709;
case 0x60e710:c.instructions+=261;goto B60e710;
case 0x60e714:c.instructions+=260;goto B60e714;
case 0x60e718:c.instructions+=259;goto B60e718;
case 0x60e71f:c.instructions+=258;goto B60e71f;
case 0x60e721:c.instructions+=257;goto B60e721;
case 0x60e728:c.instructions+=256;goto B60e728;
case 0x60e72f:c.instructions+=255;goto B60e72f;
case 0x60e733:c.instructions+=254;goto B60e733;
case 0x60e737:c.instructions+=253;goto B60e737;
case 0x60e73b:c.instructions+=252;goto B60e73b;
case 0x60e73d:c.instructions+=251;goto B60e73d;
case 0x60e73f:c.instructions+=250;goto B60e73f;
case 0x60e746:c.instructions+=249;goto B60e746;
case 0x60e74d:c.instructions+=248;goto B60e74d;
case 0x60e751:c.instructions+=247;goto B60e751;
case 0x60e755:c.instructions+=246;goto B60e755;
case 0x60e757:c.instructions+=245;goto B60e757;
case 0x60e75e:c.instructions+=244;goto B60e75e;
case 0x60e760:c.instructions+=243;goto B60e760;
case 0x60e767:c.instructions+=242;goto B60e767;
case 0x60e76e:c.instructions+=241;goto B60e76e;
case 0x60e772:c.instructions+=240;goto B60e772;
case 0x60e776:c.instructions+=239;goto B60e776;
case 0x60e778:c.instructions+=238;goto B60e778;
case 0x60e77f:c.instructions+=237;goto B60e77f;
case 0x60e786:c.instructions+=236;goto B60e786;
case 0x60e78d:c.instructions+=235;goto B60e78d;
case 0x60e791:c.instructions+=234;goto B60e791;
case 0x60e798:c.instructions+=233;goto B60e798;
case 0x60e79c:c.instructions+=232;goto B60e79c;
case 0x60e7a3:c.instructions+=231;goto B60e7a3;
case 0x60e7a7:c.instructions+=230;goto B60e7a7;
case 0x60e7ae:c.instructions+=229;goto B60e7ae;
case 0x60e7b5:c.instructions+=228;goto B60e7b5;
case 0x60e7b7:c.instructions+=227;goto B60e7b7;
case 0x60e7be:c.instructions+=226;goto B60e7be;
case 0x60e7c5:c.instructions+=225;goto B60e7c5;
case 0x60e7c9:c.instructions+=224;goto B60e7c9;
case 0x60e7d0:c.instructions+=223;goto B60e7d0;
case 0x60e7d4:c.instructions+=222;goto B60e7d4;
case 0x60e7d8:c.instructions+=221;goto B60e7d8;
case 0x60e7da:c.instructions+=220;goto B60e7da;
case 0x60e7de:c.instructions+=219;goto B60e7de;
case 0x60e7e0:c.instructions+=218;goto B60e7e0;
case 0x60e7e7:c.instructions+=217;goto B60e7e7;
case 0x60e7ee:c.instructions+=216;goto B60e7ee;
case 0x60e7f2:c.instructions+=215;goto B60e7f2;
case 0x60e7f4:c.instructions+=214;goto B60e7f4;
case 0x60e7fb:c.instructions+=213;goto B60e7fb;
case 0x60e802:c.instructions+=212;goto B60e802;
case 0x60e809:c.instructions+=211;goto B60e809;
case 0x60e80d:c.instructions+=210;goto B60e80d;
case 0x60e814:c.instructions+=209;goto B60e814;
case 0x60e818:c.instructions+=208;goto B60e818;
case 0x60e81f:c.instructions+=207;goto B60e81f;
case 0x60e823:c.instructions+=206;goto B60e823;
case 0x60e82a:c.instructions+=205;goto B60e82a;
case 0x60e831:c.instructions+=204;goto B60e831;
case 0x60e833:c.instructions+=203;goto B60e833;
case 0x60e83a:c.instructions+=202;goto B60e83a;
case 0x60e841:c.instructions+=201;goto B60e841;
case 0x60e845:c.instructions+=200;goto B60e845;
case 0x60e84c:c.instructions+=199;goto B60e84c;
case 0x60e850:c.instructions+=198;goto B60e850;
case 0x60e854:c.instructions+=197;goto B60e854;
case 0x60e856:c.instructions+=196;goto B60e856;
case 0x60e85a:c.instructions+=195;goto B60e85a;
case 0x60e85c:c.instructions+=194;goto B60e85c;
case 0x60e863:c.instructions+=193;goto B60e863;
case 0x60e867:c.instructions+=192;goto B60e867;
case 0x60e86b:c.instructions+=191;goto B60e86b;
case 0x60e86f:c.instructions+=190;goto B60e86f;
case 0x60e871:c.instructions+=189;goto B60e871;
case 0x60e878:c.instructions+=188;goto B60e878;
case 0x60e87f:c.instructions+=187;goto B60e87f;
case 0x60e886:c.instructions+=186;goto B60e886;
case 0x60e88a:c.instructions+=185;goto B60e88a;
case 0x60e891:c.instructions+=184;goto B60e891;
case 0x60e895:c.instructions+=183;goto B60e895;
case 0x60e89c:c.instructions+=182;goto B60e89c;
case 0x60e8a0:c.instructions+=181;goto B60e8a0;
case 0x60e8a7:c.instructions+=180;goto B60e8a7;
case 0x60e8ab:c.instructions+=179;goto B60e8ab;
case 0x60e8ad:c.instructions+=178;goto B60e8ad;
case 0x60e8b4:c.instructions+=177;goto B60e8b4;
case 0x60e8b8:c.instructions+=176;goto B60e8b8;
case 0x60e8bf:c.instructions+=175;goto B60e8bf;
case 0x60e8c6:c.instructions+=174;goto B60e8c6;
case 0x60e8cd:c.instructions+=173;goto B60e8cd;
case 0x60e8d4:c.instructions+=172;goto B60e8d4;
case 0x60e8db:c.instructions+=171;goto B60e8db;
case 0x60e8df:c.instructions+=170;goto B60e8df;
case 0x60e8e6:c.instructions+=169;goto B60e8e6;
case 0x60e8ed:c.instructions+=168;goto B60e8ed;
case 0x60e8ef:c.instructions+=167;goto B60e8ef;
case 0x60e8f6:c.instructions+=166;goto B60e8f6;
case 0x60e8fd:c.instructions+=165;goto B60e8fd;
case 0x60e904:c.instructions+=164;goto B60e904;
case 0x60e908:c.instructions+=163;goto B60e908;
case 0x60e90c:c.instructions+=162;goto B60e90c;
case 0x60e913:c.instructions+=161;goto B60e913;
case 0x60e917:c.instructions+=160;goto B60e917;
case 0x60e91e:c.instructions+=159;goto B60e91e;
case 0x60e922:c.instructions+=158;goto B60e922;
case 0x60e929:c.instructions+=157;goto B60e929;
case 0x60e930:c.instructions+=156;goto B60e930;
case 0x60e932:c.instructions+=155;goto B60e932;
case 0x60e939:c.instructions+=154;goto B60e939;
case 0x60e940:c.instructions+=153;goto B60e940;
case 0x60e942:c.instructions+=152;goto B60e942;
case 0x60e949:c.instructions+=151;goto B60e949;
case 0x60e950:c.instructions+=150;goto B60e950;
case 0x60e954:c.instructions+=149;goto B60e954;
case 0x60e958:c.instructions+=148;goto B60e958;
case 0x60e95a:c.instructions+=147;goto B60e95a;
case 0x60e961:c.instructions+=146;goto B60e961;
case 0x60e968:c.instructions+=145;goto B60e968;
case 0x60e96f:c.instructions+=144;goto B60e96f;
case 0x60e976:c.instructions+=143;goto B60e976;
case 0x60e97a:c.instructions+=142;goto B60e97a;
case 0x60e981:c.instructions+=141;goto B60e981;
case 0x60e985:c.instructions+=140;goto B60e985;
case 0x60e98c:c.instructions+=139;goto B60e98c;
case 0x60e993:c.instructions+=138;goto B60e993;
case 0x60e995:c.instructions+=137;goto B60e995;
case 0x60e99c:c.instructions+=136;goto B60e99c;
case 0x60e9a3:c.instructions+=135;goto B60e9a3;
case 0x60e9aa:c.instructions+=134;goto B60e9aa;
case 0x60e9b1:c.instructions+=133;goto B60e9b1;
case 0x60e9b8:c.instructions+=132;goto B60e9b8;
case 0x60e9bf:c.instructions+=131;goto B60e9bf;
case 0x60e9c6:c.instructions+=130;goto B60e9c6;
case 0x60e9cd:c.instructions+=129;goto B60e9cd;
case 0x60e9d1:c.instructions+=128;goto B60e9d1;
case 0x60e9d5:c.instructions+=127;goto B60e9d5;
case 0x60e9d7:c.instructions+=126;goto B60e9d7;
case 0x60e9de:c.instructions+=125;goto B60e9de;
case 0x60e9e5:c.instructions+=124;goto B60e9e5;
case 0x60e9e9:c.instructions+=123;goto B60e9e9;
case 0x60e9f0:c.instructions+=122;goto B60e9f0;
case 0x60e9f7:c.instructions+=121;goto B60e9f7;
case 0x60e9fb:c.instructions+=120;goto B60e9fb;
case 0x60ea02:c.instructions+=119;goto B60ea02;
case 0x60ea06:c.instructions+=118;goto B60ea06;
case 0x60ea0d:c.instructions+=117;goto B60ea0d;
case 0x60ea14:c.instructions+=116;goto B60ea14;
case 0x60ea16:c.instructions+=115;goto B60ea16;
case 0x60ea1d:c.instructions+=114;goto B60ea1d;
case 0x60ea24:c.instructions+=113;goto B60ea24;
case 0x60ea2b:c.instructions+=112;goto B60ea2b;
case 0x60ea32:c.instructions+=111;goto B60ea32;
case 0x60ea39:c.instructions+=110;goto B60ea39;
case 0x60ea40:c.instructions+=109;goto B60ea40;
case 0x60ea42:c.instructions+=108;goto B60ea42;
case 0x60ea49:c.instructions+=107;goto B60ea49;
case 0x60ea4b:c.instructions+=106;goto B60ea4b;
case 0x60ea52:c.instructions+=105;goto B60ea52;
case 0x60ea59:c.instructions+=104;goto B60ea59;
case 0x60ea5d:c.instructions+=103;goto B60ea5d;
case 0x60ea5f:c.instructions+=102;goto B60ea5f;
case 0x60ea66:c.instructions+=101;goto B60ea66;
case 0x60ea6d:c.instructions+=100;goto B60ea6d;
case 0x60ea71:c.instructions+=99;goto B60ea71;
case 0x60ea78:c.instructions+=98;goto B60ea78;
case 0x60ea7c:c.instructions+=97;goto B60ea7c;
case 0x60ea83:c.instructions+=96;goto B60ea83;
case 0x60ea85:c.instructions+=95;goto B60ea85;
case 0x60ea89:c.instructions+=94;goto B60ea89;
case 0x60ea90:c.instructions+=93;goto B60ea90;
case 0x60ea97:c.instructions+=92;goto B60ea97;
case 0x60ea9e:c.instructions+=91;goto B60ea9e;
case 0x60eaa2:c.instructions+=90;goto B60eaa2;
case 0x60eaa6:c.instructions+=89;goto B60eaa6;
case 0x60eaad:c.instructions+=88;goto B60eaad;
case 0x60eab4:c.instructions+=87;goto B60eab4;
case 0x60eabb:c.instructions+=86;goto B60eabb;
case 0x60eabd:c.instructions+=85;goto B60eabd;
case 0x60eac4:c.instructions+=84;goto B60eac4;
case 0x60eacb:c.instructions+=83;goto B60eacb;
case 0x60eacf:c.instructions+=82;goto B60eacf;
case 0x60ead6:c.instructions+=81;goto B60ead6;
case 0x60eadd:c.instructions+=80;goto B60eadd;
case 0x60eae4:c.instructions+=79;goto B60eae4;
case 0x60eaeb:c.instructions+=78;goto B60eaeb;
case 0x60eaf2:c.instructions+=77;goto B60eaf2;
case 0x60eaf4:c.instructions+=76;goto B60eaf4;
case 0x60eafb:c.instructions+=75;goto B60eafb;
case 0x60eafd:c.instructions+=74;goto B60eafd;
case 0x60eb04:c.instructions+=73;goto B60eb04;
case 0x60eb0b:c.instructions+=72;goto B60eb0b;
case 0x60eb0f:c.instructions+=71;goto B60eb0f;
case 0x60eb13:c.instructions+=70;goto B60eb13;
case 0x60eb15:c.instructions+=69;goto B60eb15;
case 0x60eb1c:c.instructions+=68;goto B60eb1c;
case 0x60eb23:c.instructions+=67;goto B60eb23;
case 0x60eb27:c.instructions+=66;goto B60eb27;
case 0x60eb2e:c.instructions+=65;goto B60eb2e;
case 0x60eb35:c.instructions+=64;goto B60eb35;
case 0x60eb39:c.instructions+=63;goto B60eb39;
case 0x60eb40:c.instructions+=62;goto B60eb40;
case 0x60eb44:c.instructions+=61;goto B60eb44;
case 0x60eb4b:c.instructions+=60;goto B60eb4b;
case 0x60eb4d:c.instructions+=59;goto B60eb4d;
case 0x60eb54:c.instructions+=58;goto B60eb54;
case 0x60eb5b:c.instructions+=57;goto B60eb5b;
case 0x60eb62:c.instructions+=56;goto B60eb62;
case 0x60eb69:c.instructions+=55;goto B60eb69;
case 0x60eb70:c.instructions+=54;goto B60eb70;
case 0x60eb72:c.instructions+=53;goto B60eb72;
case 0x60eb79:c.instructions+=52;goto B60eb79;
case 0x60eb80:c.instructions+=51;goto B60eb80;
case 0x60eb87:c.instructions+=50;goto B60eb87;
case 0x60eb8b:c.instructions+=49;goto B60eb8b;
case 0x60eb8f:c.instructions+=48;goto B60eb8f;
case 0x60eb96:c.instructions+=47;goto B60eb96;
case 0x60eb9a:c.instructions+=46;goto B60eb9a;
case 0x60eba1:c.instructions+=45;goto B60eba1;
case 0x60eba5:c.instructions+=44;goto B60eba5;
case 0x60ebac:c.instructions+=43;goto B60ebac;
case 0x60ebb3:c.instructions+=42;goto B60ebb3;
case 0x60ebb5:c.instructions+=41;goto B60ebb5;
case 0x60ebbc:c.instructions+=40;goto B60ebbc;
case 0x60ebc3:c.instructions+=39;goto B60ebc3;
case 0x60ebca:c.instructions+=38;goto B60ebca;
case 0x60ebce:c.instructions+=37;goto B60ebce;
case 0x60ebd5:c.instructions+=36;goto B60ebd5;
case 0x60ebdc:c.instructions+=35;goto B60ebdc;
case 0x60ebe0:c.instructions+=34;goto B60ebe0;
case 0x60ebe7:c.instructions+=33;goto B60ebe7;
case 0x60ebeb:c.instructions+=32;goto B60ebeb;
case 0x60ebf2:c.instructions+=31;goto B60ebf2;
case 0x60ebf9:c.instructions+=30;goto B60ebf9;
case 0x60ebfb:c.instructions+=29;goto B60ebfb;
case 0x60ec02:c.instructions+=28;goto B60ec02;
case 0x60ec09:c.instructions+=27;goto B60ec09;
case 0x60ec10:c.instructions+=26;goto B60ec10;
case 0x60ec17:c.instructions+=25;goto B60ec17;
case 0x60ec1e:c.instructions+=24;goto B60ec1e;
case 0x60ec25:c.instructions+=23;goto B60ec25;
case 0x60ec2c:c.instructions+=22;goto B60ec2c;
case 0x60ec33:c.instructions+=21;goto B60ec33;
case 0x60ec35:c.instructions+=20;goto B60ec35;
case 0x60ec3c:c.instructions+=19;goto B60ec3c;
case 0x60ec3e:c.instructions+=18;goto B60ec3e;
case 0x60ec45:c.instructions+=17;goto B60ec45;
case 0x60ec4c:c.instructions+=16;goto B60ec4c;
case 0x60ec4e:c.instructions+=15;goto B60ec4e;
case 0x60ec50:c.instructions+=14;goto B60ec50;
case 0x60ec51:c.instructions+=13;goto B60ec51;
case 0x60ec52:c.instructions+=12;goto B60ec52;
case 0x60ec56:c.instructions+=11;goto B60ec56;
case 0x60ec57:c.instructions+=10;goto B60ec57;
case 0x60ec59:c.instructions+=9;goto B60ec59;
case 0x60ec64:c.instructions+=8;goto B60ec64;
case 0x60ec6f:c.instructions+=7;goto B60ec6f;
case 0x60ec7a:c.instructions+=6;goto B60ec7a;
case 0x60ec85:c.instructions+=5;goto B60ec85;
case 0x60ec90:c.instructions+=4;goto B60ec90;
case 0x60ec9b:c.instructions+=3;goto B60ec9b;
case 0x60eca6:c.instructions+=2;goto B60eca6;
case 0x60ecb1:c.instructions+=1;goto B60ecb1;
case 0x60ecb6:goto L60ecb6;
case 0x60ecba:c.instructions+=164;goto B60ecba;
case 0x60ecbe:c.instructions+=163;goto B60ecbe;
case 0x60ecc2:c.instructions+=162;goto B60ecc2;
case 0x60ecc6:c.instructions+=161;goto B60ecc6;
case 0x60ecca:c.instructions+=160;goto B60ecca;
case 0x60ecce:c.instructions+=159;goto B60ecce;
case 0x60ecd0:c.instructions+=158;goto B60ecd0;
case 0x60ecd7:c.instructions+=157;goto B60ecd7;
case 0x60ecdb:c.instructions+=156;goto B60ecdb;
case 0x60ece2:c.instructions+=155;goto B60ece2;
case 0x60ece9:c.instructions+=154;goto B60ece9;
case 0x60ecf0:c.instructions+=153;goto B60ecf0;
case 0x60ecf4:c.instructions+=152;goto B60ecf4;
case 0x60ecfb:c.instructions+=151;goto B60ecfb;
case 0x60ecff:c.instructions+=150;goto B60ecff;
case 0x60ed03:c.instructions+=149;goto B60ed03;
case 0x60ed0a:c.instructions+=148;goto B60ed0a;
case 0x60ed11:c.instructions+=147;goto B60ed11;
case 0x60ed15:c.instructions+=146;goto B60ed15;
case 0x60ed1c:c.instructions+=145;goto B60ed1c;
case 0x60ed1e:c.instructions+=144;goto B60ed1e;
case 0x60ed25:c.instructions+=143;goto B60ed25;
case 0x60ed2c:c.instructions+=142;goto B60ed2c;
case 0x60ed30:c.instructions+=141;goto B60ed30;
case 0x60ed34:c.instructions+=140;goto B60ed34;
case 0x60ed38:c.instructions+=139;goto B60ed38;
case 0x60ed3c:c.instructions+=138;goto B60ed3c;
case 0x60ed43:c.instructions+=137;goto B60ed43;
case 0x60ed4a:c.instructions+=136;goto B60ed4a;
case 0x60ed4c:c.instructions+=135;goto B60ed4c;
case 0x60ed53:c.instructions+=134;goto B60ed53;
case 0x60ed5a:c.instructions+=133;goto B60ed5a;
case 0x60ed61:c.instructions+=132;goto B60ed61;
case 0x60ed63:c.instructions+=131;goto B60ed63;
case 0x60ed6a:c.instructions+=130;goto B60ed6a;
case 0x60ed71:c.instructions+=129;goto B60ed71;
case 0x60ed78:c.instructions+=128;goto B60ed78;
case 0x60ed7c:c.instructions+=127;goto B60ed7c;
case 0x60ed83:c.instructions+=126;goto B60ed83;
case 0x60ed87:c.instructions+=125;goto B60ed87;
case 0x60ed8e:c.instructions+=124;goto B60ed8e;
case 0x60ed92:c.instructions+=123;goto B60ed92;
case 0x60ed96:c.instructions+=122;goto B60ed96;
case 0x60ed9d:c.instructions+=121;goto B60ed9d;
case 0x60eda1:c.instructions+=120;goto B60eda1;
case 0x60eda5:c.instructions+=119;goto B60eda5;
case 0x60edac:c.instructions+=118;goto B60edac;
case 0x60edb0:c.instructions+=117;goto B60edb0;
case 0x60edb7:c.instructions+=116;goto B60edb7;
case 0x60edbb:c.instructions+=115;goto B60edbb;
case 0x60edc2:c.instructions+=114;goto B60edc2;
case 0x60edc9:c.instructions+=113;goto B60edc9;
case 0x60edcb:c.instructions+=112;goto B60edcb;
case 0x60edd2:c.instructions+=111;goto B60edd2;
case 0x60edd9:c.instructions+=110;goto B60edd9;
case 0x60ede0:c.instructions+=109;goto B60ede0;
case 0x60ede7:c.instructions+=108;goto B60ede7;
case 0x60edeb:c.instructions+=107;goto B60edeb;
case 0x60edf2:c.instructions+=106;goto B60edf2;
case 0x60edf6:c.instructions+=105;goto B60edf6;
case 0x60edfd:c.instructions+=104;goto B60edfd;
case 0x60ee01:c.instructions+=103;goto B60ee01;
case 0x60ee08:c.instructions+=102;goto B60ee08;
case 0x60ee0f:c.instructions+=101;goto B60ee0f;
case 0x60ee11:c.instructions+=100;goto B60ee11;
case 0x60ee18:c.instructions+=99;goto B60ee18;
case 0x60ee1c:c.instructions+=98;goto B60ee1c;
case 0x60ee20:c.instructions+=97;goto B60ee20;
case 0x60ee27:c.instructions+=96;goto B60ee27;
case 0x60ee2e:c.instructions+=95;goto B60ee2e;
case 0x60ee30:c.instructions+=94;goto B60ee30;
case 0x60ee37:c.instructions+=93;goto B60ee37;
case 0x60ee3b:c.instructions+=92;goto B60ee3b;
case 0x60ee3f:c.instructions+=91;goto B60ee3f;
case 0x60ee46:c.instructions+=90;goto B60ee46;
case 0x60ee48:c.instructions+=89;goto B60ee48;
case 0x60ee4c:c.instructions+=88;goto B60ee4c;
case 0x60ee4e:c.instructions+=87;goto B60ee4e;
case 0x60ee55:c.instructions+=86;goto B60ee55;
case 0x60ee5c:c.instructions+=85;goto B60ee5c;
case 0x60ee60:c.instructions+=84;goto B60ee60;
case 0x60ee64:c.instructions+=83;goto B60ee64;
case 0x60ee6b:c.instructions+=82;goto B60ee6b;
case 0x60ee6d:c.instructions+=81;goto B60ee6d;
case 0x60ee74:c.instructions+=80;goto B60ee74;
case 0x60ee78:c.instructions+=79;goto B60ee78;
case 0x60ee7c:c.instructions+=78;goto B60ee7c;
case 0x60ee80:c.instructions+=77;goto B60ee80;
case 0x60ee82:c.instructions+=76;goto B60ee82;
case 0x60ee89:c.instructions+=75;goto B60ee89;
case 0x60ee90:c.instructions+=74;goto B60ee90;
case 0x60ee97:c.instructions+=73;goto B60ee97;
case 0x60ee9b:c.instructions+=72;goto B60ee9b;
case 0x60eea2:c.instructions+=71;goto B60eea2;
case 0x60eea6:c.instructions+=70;goto B60eea6;
case 0x60eead:c.instructions+=69;goto B60eead;
case 0x60eeb1:c.instructions+=68;goto B60eeb1;
case 0x60eeb8:c.instructions+=67;goto B60eeb8;
case 0x60eeba:c.instructions+=66;goto B60eeba;
case 0x60eec1:c.instructions+=65;goto B60eec1;
case 0x60eec8:c.instructions+=64;goto B60eec8;
case 0x60eecc:c.instructions+=63;goto B60eecc;
case 0x60eed3:c.instructions+=62;goto B60eed3;
case 0x60eed7:c.instructions+=61;goto B60eed7;
case 0x60eedb:c.instructions+=60;goto B60eedb;
case 0x60eedd:c.instructions+=59;goto B60eedd;
case 0x60eee1:c.instructions+=58;goto B60eee1;
case 0x60eee5:c.instructions+=57;goto B60eee5;
case 0x60eee7:c.instructions+=56;goto B60eee7;
case 0x60eee9:c.instructions+=55;goto B60eee9;
case 0x60eeeb:c.instructions+=54;goto B60eeeb;
case 0x60eeef:c.instructions+=53;goto B60eeef;
case 0x60eef3:c.instructions+=52;goto B60eef3;
case 0x60eefa:c.instructions+=51;goto B60eefa;
case 0x60eefe:c.instructions+=50;goto B60eefe;
case 0x60ef05:c.instructions+=49;goto B60ef05;
case 0x60ef09:c.instructions+=48;goto B60ef09;
case 0x60ef10:c.instructions+=47;goto B60ef10;
case 0x60ef17:c.instructions+=46;goto B60ef17;
case 0x60ef19:c.instructions+=45;goto B60ef19;
case 0x60ef20:c.instructions+=44;goto B60ef20;
case 0x60ef27:c.instructions+=43;goto B60ef27;
case 0x60ef2e:c.instructions+=42;goto B60ef2e;
case 0x60ef35:c.instructions+=41;goto B60ef35;
case 0x60ef39:c.instructions+=40;goto B60ef39;
case 0x60ef40:c.instructions+=39;goto B60ef40;
case 0x60ef44:c.instructions+=38;goto B60ef44;
case 0x60ef4b:c.instructions+=37;goto B60ef4b;
case 0x60ef4f:c.instructions+=36;goto B60ef4f;
case 0x60ef56:c.instructions+=35;goto B60ef56;
case 0x60ef5d:c.instructions+=34;goto B60ef5d;
case 0x60ef5f:c.instructions+=33;goto B60ef5f;
case 0x60ef66:c.instructions+=32;goto B60ef66;
case 0x60ef6d:c.instructions+=31;goto B60ef6d;
case 0x60ef71:c.instructions+=30;goto B60ef71;
case 0x60ef78:c.instructions+=29;goto B60ef78;
case 0x60ef7c:c.instructions+=28;goto B60ef7c;
case 0x60ef80:c.instructions+=27;goto B60ef80;
case 0x60ef82:c.instructions+=26;goto B60ef82;
case 0x60ef86:c.instructions+=25;goto B60ef86;
case 0x60ef88:c.instructions+=24;goto B60ef88;
case 0x60ef8f:c.instructions+=23;goto B60ef8f;
case 0x60ef93:c.instructions+=22;goto B60ef93;
case 0x60ef97:c.instructions+=21;goto B60ef97;
case 0x60ef99:c.instructions+=20;goto B60ef99;
case 0x60ef9b:c.instructions+=19;goto B60ef9b;
case 0x60efa2:c.instructions+=18;goto B60efa2;
case 0x60efa9:c.instructions+=17;goto B60efa9;
case 0x60efad:c.instructions+=16;goto B60efad;
case 0x60efb4:c.instructions+=15;goto B60efb4;
case 0x60efb6:c.instructions+=14;goto B60efb6;
case 0x60efbd:c.instructions+=13;goto B60efbd;
case 0x60efc4:c.instructions+=12;goto B60efc4;
case 0x60efc8:c.instructions+=11;goto B60efc8;
case 0x60efcf:c.instructions+=10;goto B60efcf;
case 0x60efd6:c.instructions+=9;goto B60efd6;
case 0x60efda:c.instructions+=8;goto B60efda;
case 0x60efde:c.instructions+=7;goto B60efde;
case 0x60efe0:c.instructions+=6;goto B60efe0;
case 0x60efe7:c.instructions+=5;goto B60efe7;
case 0x60efee:c.instructions+=4;goto B60efee;
case 0x60eff2:c.instructions+=3;goto B60eff2;
case 0x60eff9:c.instructions+=2;goto B60eff9;
case 0x60effd:c.instructions+=1;goto B60effd;
default:missing_instruction(c.pc);}
B60e002:L60e002:{c.instructions+=9;NFSU2_TR(0x60e002);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60e004:{NFSU2_TR(0x60e004);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e00b:{NFSU2_TR(0x60e00b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e012:{NFSU2_TR(0x60e012);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e014:{NFSU2_TR(0x60e014);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e01b:{NFSU2_TR(0x60e01b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e01d:{NFSU2_TR(0x60e01d);
{u32 ea_=u32(r4(R+16)+u32(1400u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e024:{NFSU2_TR(0x60e024);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e02b:{NFSU2_TR(0x60e02b);
{goto L60e030;}
}
B60e030:L60e030:{c.instructions+=11;NFSU2_TR(0x60e030);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60e033:{NFSU2_TR(0x60e033);
u8 U[5];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B60e03a:{NFSU2_TR(0x60e03a);
u8 U[13];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e041:{NFSU2_TR(0x60e041);
u8 U[5];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60e048:{NFSU2_TR(0x60e048);
u8 U[13];
w4(U+0,u32(u32(u32(0xc1ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e04f:{NFSU2_TR(0x60e04f);
u8 U[5];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B60e056:{NFSU2_TR(0x60e056);
u8 U[13];
w4(U+0,u32(u32(u32(0xc2ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e05d:{NFSU2_TR(0x60e05d);
u8 U[13];
w4(U+0,u32(u32(u32(0xc3ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e064:{NFSU2_TR(0x60e064);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60e065:{NFSU2_TR(0x60e065);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60e068:{NFSU2_TR(0x60e068);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60e030u);}goto L60e030;}}
}
B60e06a:L60e06a:{c.instructions+=10;NFSU2_TR(0x60e06a);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e071:{NFSU2_TR(0x60e071);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e078:{NFSU2_TR(0x60e078);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e07a:{NFSU2_TR(0x60e07a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e07c:{NFSU2_TR(0x60e07c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e07d:{NFSU2_TR(0x60e07d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e07e:{NFSU2_TR(0x60e07e);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60e082:{NFSU2_TR(0x60e082);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e083:{NFSU2_TR(0x60e083);
__builtin_memmove((R+4),(R+12),4);
}
B60e085:{NFSU2_TR(0x60e085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60e08aull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B60e08a:L60e08a:{c.instructions+=182;NFSU2_TR(0x60e08a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e08e:{NFSU2_TR(0x60e08e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e092:{NFSU2_TR(0x60e092);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e096:{NFSU2_TR(0x60e096);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e098:{NFSU2_TR(0x60e098);
__builtin_memmove((R+4),(R+0),4);
}
B60e09a:{NFSU2_TR(0x60e09a);
{u32 ea_=u32(r4(R+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0a1:{NFSU2_TR(0x60e0a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0a8:{NFSU2_TR(0x60e0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e0ac:{NFSU2_TR(0x60e0ac);
{u32 ea_=u32(r4(R+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0b3:{NFSU2_TR(0x60e0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0ba:{NFSU2_TR(0x60e0ba);
{u32 ea_=u32(r4(R+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0c1:{NFSU2_TR(0x60e0c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e0c5:{NFSU2_TR(0x60e0c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0c9:{NFSU2_TR(0x60e0c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0d0:{NFSU2_TR(0x60e0d0);
{u32 ea_=u32(r4(R+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0d7:{NFSU2_TR(0x60e0d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0de:{NFSU2_TR(0x60e0de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0e2:{NFSU2_TR(0x60e0e2);
{u32 ea_=u32(r4(R+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0e9:{NFSU2_TR(0x60e0e9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0ed:{NFSU2_TR(0x60e0ed);
{u32 ea_=u32(r4(R+16)+u32(1704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0f4:{NFSU2_TR(0x60e0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e0fb:{NFSU2_TR(0x60e0fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e0fd:{NFSU2_TR(0x60e0fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e104:{NFSU2_TR(0x60e104);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e10b:{NFSU2_TR(0x60e10b);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e112:{NFSU2_TR(0x60e112);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e119:{NFSU2_TR(0x60e119);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e11b:{NFSU2_TR(0x60e11b);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e122:{NFSU2_TR(0x60e122);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e124:{NFSU2_TR(0x60e124);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e12b:{NFSU2_TR(0x60e12b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e12d:{NFSU2_TR(0x60e12d);
{u32 ea_=u32(r4(R+16)+u32(2728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e134:{NFSU2_TR(0x60e134);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e136:{NFSU2_TR(0x60e136);
{u32 ea_=u32(r4(R+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e13d:{NFSU2_TR(0x60e13d);
{u32 ea_=u32(r4(R+16)+u32(2728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e144:{NFSU2_TR(0x60e144);
{u32 ea_=u32(r4(R+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e14b:{NFSU2_TR(0x60e14b);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e152:{NFSU2_TR(0x60e152);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e159:{NFSU2_TR(0x60e159);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e15b:{NFSU2_TR(0x60e15b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e162:{NFSU2_TR(0x60e162);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e169:{NFSU2_TR(0x60e169);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e170:{NFSU2_TR(0x60e170);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e174:{NFSU2_TR(0x60e174);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e178:{NFSU2_TR(0x60e178);
{u32 ea_=u32(r4(R+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e17f:{NFSU2_TR(0x60e17f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e183:{NFSU2_TR(0x60e183);
{u32 ea_=u32(r4(R+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e18a:{NFSU2_TR(0x60e18a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e18e:{NFSU2_TR(0x60e18e);
{u32 ea_=u32(r4(R+16)+u32(2248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e195:{NFSU2_TR(0x60e195);
u8 U[8];
w4(U+0,u32(u32(u32(0x8c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e19c:{NFSU2_TR(0x60e19c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e19e:{NFSU2_TR(0x60e19e);
u8 U[8];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e1a5:{NFSU2_TR(0x60e1a5);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1ac:{NFSU2_TR(0x60e1ac);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1b3:{NFSU2_TR(0x60e1b3);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1ba:{NFSU2_TR(0x60e1ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1be:{NFSU2_TR(0x60e1be);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1c5:{NFSU2_TR(0x60e1c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1c9:{NFSU2_TR(0x60e1c9);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1d0:{NFSU2_TR(0x60e1d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1d4:{NFSU2_TR(0x60e1d4);
{u32 ea_=u32(r4(R+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1db:{NFSU2_TR(0x60e1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x6e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e1e2:{NFSU2_TR(0x60e1e2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e1e4:{NFSU2_TR(0x60e1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e1eb:{NFSU2_TR(0x60e1eb);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1f2:{NFSU2_TR(0x60e1f2);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1f9:{NFSU2_TR(0x60e1f9);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e200:{NFSU2_TR(0x60e200);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e202:{NFSU2_TR(0x60e202);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e209:{NFSU2_TR(0x60e209);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e20b:{NFSU2_TR(0x60e20b);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e212:{NFSU2_TR(0x60e212);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e214:{NFSU2_TR(0x60e214);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e218:{NFSU2_TR(0x60e218);
__builtin_memmove((R+0),(R+8),4);
}
B60e21a:{NFSU2_TR(0x60e21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e221:{NFSU2_TR(0x60e221);
{u32 ea_=u32(r4(R+16)+u32(2504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e228:{NFSU2_TR(0x60e228);
u8 U[8];
w4(U+0,u32(u32(u32(0x9c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e22f:{NFSU2_TR(0x60e22f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e231:{NFSU2_TR(0x60e231);
u8 U[8];
w4(U+0,u32(u32(u32(0x4c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e238:{NFSU2_TR(0x60e238);
{u32 ea_=u32(r4(R+16)+u32(1216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e23f:{NFSU2_TR(0x60e23f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e243:{NFSU2_TR(0x60e243);
{u32 ea_=u32(r4(R+16)+u32(1216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e24a:{NFSU2_TR(0x60e24a);
u8 U[8];
w4(U+0,u32(u32(u32(0x708ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e251:{NFSU2_TR(0x60e251);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e258:{NFSU2_TR(0x60e258);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e25c:{NFSU2_TR(0x60e25c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e263:{NFSU2_TR(0x60e263);
u8 U[8];
w4(U+0,u32(u32(u32(0x3e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e26a:{NFSU2_TR(0x60e26a);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e271:{NFSU2_TR(0x60e271);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e278:{NFSU2_TR(0x60e278);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e27f:{NFSU2_TR(0x60e27f);
{u32 ea_=u32(r4(R+16)+u32(1224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e286:{NFSU2_TR(0x60e286);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60e288:{NFSU2_TR(0x60e288);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e28f:{NFSU2_TR(0x60e28f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e291:{NFSU2_TR(0x60e291);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e295:{NFSU2_TR(0x60e295);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e299:{NFSU2_TR(0x60e299);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e29b:{NFSU2_TR(0x60e29b);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2a2:{NFSU2_TR(0x60e2a2);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2a9:{NFSU2_TR(0x60e2a9);
{u32 ea_=u32(r4(R+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2b0:{NFSU2_TR(0x60e2b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2b4:{NFSU2_TR(0x60e2b4);
{u32 ea_=u32(r4(R+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2bb:{NFSU2_TR(0x60e2bb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2bf:{NFSU2_TR(0x60e2bf);
{u32 ea_=u32(r4(R+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2c6:{NFSU2_TR(0x60e2c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2ca:{NFSU2_TR(0x60e2ca);
{u32 ea_=u32(r4(R+16)+u32(2280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2d1:{NFSU2_TR(0x60e2d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e2d8:{NFSU2_TR(0x60e2d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e2da:{NFSU2_TR(0x60e2da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e2e1:{NFSU2_TR(0x60e2e1);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2e8:{NFSU2_TR(0x60e2e8);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2ef:{NFSU2_TR(0x60e2ef);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2f6:{NFSU2_TR(0x60e2f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e2f8:{NFSU2_TR(0x60e2f8);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2ff:{NFSU2_TR(0x60e2ff);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e301:{NFSU2_TR(0x60e301);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e308:{NFSU2_TR(0x60e308);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e30a:{NFSU2_TR(0x60e30a);
{u32 ea_=u32(r4(R+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e311:{NFSU2_TR(0x60e311);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e313:{NFSU2_TR(0x60e313);
{u32 ea_=u32(r4(R+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e31a:{NFSU2_TR(0x60e31a);
{u32 ea_=u32(r4(R+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e321:{NFSU2_TR(0x60e321);
{u32 ea_=u32(r4(R+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e328:{NFSU2_TR(0x60e328);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e32f:{NFSU2_TR(0x60e32f);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e336:{NFSU2_TR(0x60e336);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e338:{NFSU2_TR(0x60e338);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e33f:{NFSU2_TR(0x60e33f);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e346:{NFSU2_TR(0x60e346);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e34d:{NFSU2_TR(0x60e34d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e351:{NFSU2_TR(0x60e351);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e355:{NFSU2_TR(0x60e355);
{u32 ea_=u32(r4(R+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e35c:{NFSU2_TR(0x60e35c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e360:{NFSU2_TR(0x60e360);
{u32 ea_=u32(r4(R+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e367:{NFSU2_TR(0x60e367);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e36b:{NFSU2_TR(0x60e36b);
{u32 ea_=u32(r4(R+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e372:{NFSU2_TR(0x60e372);
u8 U[8];
w4(U+0,u32(u32(u32(0x748ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e379:{NFSU2_TR(0x60e379);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e37b:{NFSU2_TR(0x60e37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e382:{NFSU2_TR(0x60e382);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e389:{NFSU2_TR(0x60e389);
{u32 ea_=u32(r4(R+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e390:{NFSU2_TR(0x60e390);
{u32 ea_=u32(r4(R+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e397:{NFSU2_TR(0x60e397);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e39b:{NFSU2_TR(0x60e39b);
{u32 ea_=u32(r4(R+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3a2:{NFSU2_TR(0x60e3a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e3a6:{NFSU2_TR(0x60e3a6);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3ad:{NFSU2_TR(0x60e3ad);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e3b1:{NFSU2_TR(0x60e3b1);
{u32 ea_=u32(r4(R+16)+u32(2312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3b8:{NFSU2_TR(0x60e3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e3bf:{NFSU2_TR(0x60e3bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e3c1:{NFSU2_TR(0x60e3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e3c8:{NFSU2_TR(0x60e3c8);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3cf:{NFSU2_TR(0x60e3cf);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3d6:{NFSU2_TR(0x60e3d6);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3dd:{NFSU2_TR(0x60e3dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e3e4:{NFSU2_TR(0x60e3e4);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e3e6:{NFSU2_TR(0x60e3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e3ed:{NFSU2_TR(0x60e3ed);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3f4:{NFSU2_TR(0x60e3f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e3f6:{NFSU2_TR(0x60e3f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e3f8:{NFSU2_TR(0x60e3f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e3fa:{NFSU2_TR(0x60e3fa);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e401:{NFSU2_TR(0x60e401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e402:{NFSU2_TR(0x60e402);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e404:{NFSU2_TR(0x60e404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e405:{NFSU2_TR(0x60e405);
__builtin_memmove((R+4),(R+12),4);
}
B60e407:{NFSU2_TR(0x60e407);
{u32 ea_=u32(r4(R+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e40e:{NFSU2_TR(0x60e40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x778ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e415:{NFSU2_TR(0x60e415);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e417:{NFSU2_TR(0x60e417);
u8 U[8];
w4(U+0,u32(u32(u32(0x558ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e41e:{NFSU2_TR(0x60e41e);
{u32 ea_=u32(r4(R+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e425:{NFSU2_TR(0x60e425);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60e429:{NFSU2_TR(0x60e429);
{u32 ea_=u32(r4(R+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e430:{NFSU2_TR(0x60e430);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60e431:{NFSU2_TR(0x60e431);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e438:{NFSU2_TR(0x60e438);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e43f:{NFSU2_TR(0x60e43f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e446:{NFSU2_TR(0x60e446);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e44d:{NFSU2_TR(0x60e44d);
{u32 ea_=u32(r4(R+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e454:{NFSU2_TR(0x60e454);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60e456:{NFSU2_TR(0x60e456);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e45d:{NFSU2_TR(0x60e45d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e45f:{NFSU2_TR(0x60e45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60e464ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B60e464:L60e464:{c.instructions+=393;NFSU2_TR(0x60e464);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e468:{NFSU2_TR(0x60e468);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e46c:{NFSU2_TR(0x60e46c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e470:{NFSU2_TR(0x60e470);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e474:{NFSU2_TR(0x60e474);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e478:{NFSU2_TR(0x60e478);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e47c:{NFSU2_TR(0x60e47c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e47e:{NFSU2_TR(0x60e47e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e482:{NFSU2_TR(0x60e482);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e489:{NFSU2_TR(0x60e489);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e490:{NFSU2_TR(0x60e490);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e497:{NFSU2_TR(0x60e497);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e49b:{NFSU2_TR(0x60e49b);
{u32 ea_=u32(r4(R+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e4a2:{NFSU2_TR(0x60e4a2);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4a9:{NFSU2_TR(0x60e4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4ad:{NFSU2_TR(0x60e4ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4b1:{NFSU2_TR(0x60e4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4b8:{NFSU2_TR(0x60e4b8);
{u32 ea_=u32(r4(R+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4bf:{NFSU2_TR(0x60e4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4c6:{NFSU2_TR(0x60e4c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4ca:{NFSU2_TR(0x60e4ca);
__builtin_memmove((R+0),(R+8),4);
}
B60e4cc:{NFSU2_TR(0x60e4cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4d3:{NFSU2_TR(0x60e4d3);
{u32 ea_=u32(r4(R+16)+u32(840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4da:{NFSU2_TR(0x60e4da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4de:{NFSU2_TR(0x60e4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e4e2:{NFSU2_TR(0x60e4e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4e6:{NFSU2_TR(0x60e4e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4ea:{NFSU2_TR(0x60e4ea);
{u32 ea_=u32(r4(R+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e4f1:{NFSU2_TR(0x60e4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4f8:{NFSU2_TR(0x60e4f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e4fa:{NFSU2_TR(0x60e4fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e501:{NFSU2_TR(0x60e501);
u8 U[8];
w4(U+0,u32(u32(u32(0x788ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e508:{NFSU2_TR(0x60e508);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e50f:{NFSU2_TR(0x60e50f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e511:{NFSU2_TR(0x60e511);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e518:{NFSU2_TR(0x60e518);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e51f:{NFSU2_TR(0x60e51f);
u8 U[8];
w4(U+0,u32(u32(u32(0x9e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e526:{NFSU2_TR(0x60e526);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e52a:{NFSU2_TR(0x60e52a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e531:{NFSU2_TR(0x60e531);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e535:{NFSU2_TR(0x60e535);
u8 U[8];
w4(U+0,u32(u32(u32(0x4e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e53c:{NFSU2_TR(0x60e53c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60e540:{NFSU2_TR(0x60e540);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e544:{NFSU2_TR(0x60e544);
{u32 ea_=u32(r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e54b:{NFSU2_TR(0x60e54b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e54f:{NFSU2_TR(0x60e54f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e553:{NFSU2_TR(0x60e553);
{u32 ea_=u32(r4(R+16)+u32(1252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e55a:{NFSU2_TR(0x60e55a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e55e:{NFSU2_TR(0x60e55e);
{u32 ea_=u32(r4(R+16)+u32(1256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e565:{NFSU2_TR(0x60e565);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e569:{NFSU2_TR(0x60e569);
{u32 ea_=u32(r4(R+16)+u32(2344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e570:{NFSU2_TR(0x60e570);
u8 U[8];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e577:{NFSU2_TR(0x60e577);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e579:{NFSU2_TR(0x60e579);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e580:{NFSU2_TR(0x60e580);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e587:{NFSU2_TR(0x60e587);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e58b:{NFSU2_TR(0x60e58b);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e592:{NFSU2_TR(0x60e592);
__builtin_memmove((R+4),(R+0),4);
}
B60e594:{NFSU2_TR(0x60e594);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e59b:{NFSU2_TR(0x60e59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5a2:{NFSU2_TR(0x60e5a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5a6:{NFSU2_TR(0x60e5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xa88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5ad:{NFSU2_TR(0x60e5ad);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5b4:{NFSU2_TR(0x60e5b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e5b8:{NFSU2_TR(0x60e5b8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5bc:{NFSU2_TR(0x60e5bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x588ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5c3:{NFSU2_TR(0x60e5c3);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5ca:{NFSU2_TR(0x60e5ca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5ce:{NFSU2_TR(0x60e5ce);
{u32 ea_=u32(r4(R+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e5d5:{NFSU2_TR(0x60e5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x7a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e5dc:{NFSU2_TR(0x60e5dc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e5de:{NFSU2_TR(0x60e5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5e5:{NFSU2_TR(0x60e5e5);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e5ec:{NFSU2_TR(0x60e5ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e5f0:{NFSU2_TR(0x60e5f0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5f4:{NFSU2_TR(0x60e5f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x584ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5fb:{NFSU2_TR(0x60e5fb);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e602:{NFSU2_TR(0x60e602);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e606:{NFSU2_TR(0x60e606);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60e608:{NFSU2_TR(0x60e608);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60e60a:{NFSU2_TR(0x60e60a);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e60e:{NFSU2_TR(0x60e60e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B60e610:{NFSU2_TR(0x60e610);
{u32 ea_=u32(r4(R+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e617:{NFSU2_TR(0x60e617);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e61b:{NFSU2_TR(0x60e61b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e61f:{NFSU2_TR(0x60e61f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e623:{NFSU2_TR(0x60e623);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e625:{NFSU2_TR(0x60e625);
{u32 ea_=u32(r4(R+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e62c:{NFSU2_TR(0x60e62c);
{u32 ea_=u32(r4(R+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e633:{NFSU2_TR(0x60e633);
{u32 ea_=u32(r4(R+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e63a:{NFSU2_TR(0x60e63a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e63e:{NFSU2_TR(0x60e63e);
{u32 ea_=u32(r4(R+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e645:{NFSU2_TR(0x60e645);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e649:{NFSU2_TR(0x60e649);
{u32 ea_=u32(r4(R+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e650:{NFSU2_TR(0x60e650);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e654:{NFSU2_TR(0x60e654);
{u32 ea_=u32(r4(R+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e65b:{NFSU2_TR(0x60e65b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e65d:{NFSU2_TR(0x60e65d);
{u32 ea_=u32(r4(R+16)+u32(2368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e664:{NFSU2_TR(0x60e664);
{u32 ea_=u32(r4(R+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e66b:{NFSU2_TR(0x60e66b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e66f:{NFSU2_TR(0x60e66f);
{u32 ea_=u32(r4(R+16)+u32(2368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e676:{NFSU2_TR(0x60e676);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e67a:{NFSU2_TR(0x60e67a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e67e:{NFSU2_TR(0x60e67e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60e680:{NFSU2_TR(0x60e680);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e684:{NFSU2_TR(0x60e684);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e688:{NFSU2_TR(0x60e688);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e68a:{NFSU2_TR(0x60e68a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B60e68c:{NFSU2_TR(0x60e68c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e68e:{NFSU2_TR(0x60e68e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e692:{NFSU2_TR(0x60e692);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e696:{NFSU2_TR(0x60e696);
{u32 ea_=u32(r4(R+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e69d:{NFSU2_TR(0x60e69d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6a1:{NFSU2_TR(0x60e6a1);
{u32 ea_=u32(r4(R+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6a8:{NFSU2_TR(0x60e6a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6ac:{NFSU2_TR(0x60e6ac);
{u32 ea_=u32(r4(R+16)+u32(2024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6b3:{NFSU2_TR(0x60e6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x7e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e6ba:{NFSU2_TR(0x60e6ba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e6bc:{NFSU2_TR(0x60e6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e6c3:{NFSU2_TR(0x60e6c3);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6ca:{NFSU2_TR(0x60e6ca);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6d1:{NFSU2_TR(0x60e6d1);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6d8:{NFSU2_TR(0x60e6d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6dc:{NFSU2_TR(0x60e6dc);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6e3:{NFSU2_TR(0x60e6e3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6e7:{NFSU2_TR(0x60e6e7);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6ee:{NFSU2_TR(0x60e6ee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6f2:{NFSU2_TR(0x60e6f2);
{u32 ea_=u32(r4(R+16)+u32(2568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6f9:{NFSU2_TR(0x60e6f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xa08ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e700:{NFSU2_TR(0x60e700);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e702:{NFSU2_TR(0x60e702);
u8 U[8];
w4(U+0,u32(u32(u32(0x448ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e709:{NFSU2_TR(0x60e709);
{u32 ea_=u32(r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e710:{NFSU2_TR(0x60e710);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e714:{NFSU2_TR(0x60e714);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e718:{NFSU2_TR(0x60e718);
{u32 ea_=u32(r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e71f:{NFSU2_TR(0x60e71f);
__builtin_memmove((R+4),(R+0),4);
}
B60e721:{NFSU2_TR(0x60e721);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e728:{NFSU2_TR(0x60e728);
u8 U[8];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e72f:{NFSU2_TR(0x60e72f);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e733:{NFSU2_TR(0x60e733);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e737:{NFSU2_TR(0x60e737);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e73b:{NFSU2_TR(0x60e73b);
__builtin_memmove((R+4),(R+0),4);
}
B60e73d:{NFSU2_TR(0x60e73d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e73f:{NFSU2_TR(0x60e73f);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e746:{NFSU2_TR(0x60e746);
u8 U[8];
w4(U+0,u32(u32(u32(0x828ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e74d:{NFSU2_TR(0x60e74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e751:{NFSU2_TR(0x60e751);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e755:{NFSU2_TR(0x60e755);
__builtin_memmove((R+4),(R+0),4);
}
B60e757:{NFSU2_TR(0x60e757);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e75e:{NFSU2_TR(0x60e75e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e760:{NFSU2_TR(0x60e760);
u8 U[8];
w4(U+0,u32(u32(u32(0x848ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e767:{NFSU2_TR(0x60e767);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e76e:{NFSU2_TR(0x60e76e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e772:{NFSU2_TR(0x60e772);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e776:{NFSU2_TR(0x60e776);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e778:{NFSU2_TR(0x60e778);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e77f:{NFSU2_TR(0x60e77f);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e786:{NFSU2_TR(0x60e786);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e78d:{NFSU2_TR(0x60e78d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e791:{NFSU2_TR(0x60e791);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e798:{NFSU2_TR(0x60e798);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e79c:{NFSU2_TR(0x60e79c);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7a3:{NFSU2_TR(0x60e7a3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e7a7:{NFSU2_TR(0x60e7a7);
{u32 ea_=u32(r4(R+16)+u32(2408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7ae:{NFSU2_TR(0x60e7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x968ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e7b5:{NFSU2_TR(0x60e7b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e7b7:{NFSU2_TR(0x60e7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x508ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e7be:{NFSU2_TR(0x60e7be);
{u32 ea_=u32(r4(R+16)+u32(1280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7c5:{NFSU2_TR(0x60e7c5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7c9:{NFSU2_TR(0x60e7c9);
{u32 ea_=u32(r4(R+16)+u32(1280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e7d0:{NFSU2_TR(0x60e7d0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7d4:{NFSU2_TR(0x60e7d4);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7d8:{NFSU2_TR(0x60e7d8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e7da:{NFSU2_TR(0x60e7da);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7de:{NFSU2_TR(0x60e7de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e7e0:{NFSU2_TR(0x60e7e0);
{u32 ea_=u32(r4(R+16)+u32(1288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e7e7:{NFSU2_TR(0x60e7e7);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7ee:{NFSU2_TR(0x60e7ee);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7f2:{NFSU2_TR(0x60e7f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e7f4:{NFSU2_TR(0x60e7f4);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7fb:{NFSU2_TR(0x60e7fb);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e802:{NFSU2_TR(0x60e802);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e809:{NFSU2_TR(0x60e809);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e80d:{NFSU2_TR(0x60e80d);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e814:{NFSU2_TR(0x60e814);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e818:{NFSU2_TR(0x60e818);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e81f:{NFSU2_TR(0x60e81f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e823:{NFSU2_TR(0x60e823);
{u32 ea_=u32(r4(R+16)+u32(2664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e82a:{NFSU2_TR(0x60e82a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e831:{NFSU2_TR(0x60e831);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e833:{NFSU2_TR(0x60e833);
u8 U[8];
w4(U+0,u32(u32(u32(0x468ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e83a:{NFSU2_TR(0x60e83a);
{u32 ea_=u32(r4(R+16)+u32(1120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e841:{NFSU2_TR(0x60e841);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e845:{NFSU2_TR(0x60e845);
{u32 ea_=u32(r4(R+16)+u32(1120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e84c:{NFSU2_TR(0x60e84c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e850:{NFSU2_TR(0x60e850);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e854:{NFSU2_TR(0x60e854);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e856:{NFSU2_TR(0x60e856);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e85a:{NFSU2_TR(0x60e85a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e85c:{NFSU2_TR(0x60e85c);
{u32 ea_=u32(r4(R+16)+u32(1128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e863:{NFSU2_TR(0x60e863);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e867:{NFSU2_TR(0x60e867);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e86b:{NFSU2_TR(0x60e86b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e86f:{NFSU2_TR(0x60e86f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e871:{NFSU2_TR(0x60e871);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e878:{NFSU2_TR(0x60e878);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e87f:{NFSU2_TR(0x60e87f);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e886:{NFSU2_TR(0x60e886);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e88a:{NFSU2_TR(0x60e88a);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e891:{NFSU2_TR(0x60e891);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e895:{NFSU2_TR(0x60e895);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e89c:{NFSU2_TR(0x60e89c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e8a0:{NFSU2_TR(0x60e8a0);
{u32 ea_=u32(r4(R+16)+u32(1496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8a7:{NFSU2_TR(0x60e8a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e8ab:{NFSU2_TR(0x60e8ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e8ad:{NFSU2_TR(0x60e8ad);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8b4:{NFSU2_TR(0x60e8b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e8b8:{NFSU2_TR(0x60e8b8);
{u32 ea_=u32(r4(R+16)+u32(1496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e8bf:{NFSU2_TR(0x60e8bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x564ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8c6:{NFSU2_TR(0x60e8c6);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e8cd:{NFSU2_TR(0x60e8cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x568ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8d4:{NFSU2_TR(0x60e8d4);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e8db:{NFSU2_TR(0x60e8db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e8df:{NFSU2_TR(0x60e8df);
u8 U[8];
w4(U+0,u32(u32(u32(0x658ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8e6:{NFSU2_TR(0x60e8e6);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8ed:{NFSU2_TR(0x60e8ed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e8ef:{NFSU2_TR(0x60e8ef);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e8f6:{NFSU2_TR(0x60e8f6);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8fd:{NFSU2_TR(0x60e8fd);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e904:{NFSU2_TR(0x60e904);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e908:{NFSU2_TR(0x60e908);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e90c:{NFSU2_TR(0x60e90c);
{u32 ea_=u32(r4(R+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e913:{NFSU2_TR(0x60e913);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e917:{NFSU2_TR(0x60e917);
{u32 ea_=u32(r4(R+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e91e:{NFSU2_TR(0x60e91e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e922:{NFSU2_TR(0x60e922);
{u32 ea_=u32(r4(R+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e929:{NFSU2_TR(0x60e929);
u8 U[8];
w4(U+0,u32(u32(u32(0x618ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60e930:{NFSU2_TR(0x60e930);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e932:{NFSU2_TR(0x60e932);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e939:{NFSU2_TR(0x60e939);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e940:{NFSU2_TR(0x60e940);
__builtin_memmove((R+4),(R+0),4);
}
B60e942:{NFSU2_TR(0x60e942);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e949:{NFSU2_TR(0x60e949);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e950:{NFSU2_TR(0x60e950);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60e954:{NFSU2_TR(0x60e954);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e958:{NFSU2_TR(0x60e958);
__builtin_memmove((R+4),(R+0),4);
}
B60e95a:{NFSU2_TR(0x60e95a);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e961:{NFSU2_TR(0x60e961);
u8 U[8];
w4(U+0,u32(u32(u32(0x698ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e968:{NFSU2_TR(0x60e968);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e96f:{NFSU2_TR(0x60e96f);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e976:{NFSU2_TR(0x60e976);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e97a:{NFSU2_TR(0x60e97a);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e981:{NFSU2_TR(0x60e981);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e985:{NFSU2_TR(0x60e985);
{u32 ea_=u32(r4(R+16)+u32(1592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e98c:{NFSU2_TR(0x60e98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x638ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e993:{NFSU2_TR(0x60e993);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e995:{NFSU2_TR(0x60e995);
u8 U[8];
w4(U+0,u32(u32(u32(0x488ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e99c:{NFSU2_TR(0x60e99c);
{u32 ea_=u32(r4(R+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9a3:{NFSU2_TR(0x60e9a3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9aa:{NFSU2_TR(0x60e9aa);
{u32 ea_=u32(r4(R+16)+u32(1152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9b1:{NFSU2_TR(0x60e9b1);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9b8:{NFSU2_TR(0x60e9b8);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9bf:{NFSU2_TR(0x60e9bf);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9c6:{NFSU2_TR(0x60e9c6);
{u32 ea_=u32(r4(R+16)+u32(1160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9cd:{NFSU2_TR(0x60e9cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9d1:{NFSU2_TR(0x60e9d1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9d5:{NFSU2_TR(0x60e9d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e9d7:{NFSU2_TR(0x60e9d7);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9de:{NFSU2_TR(0x60e9de);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9e5:{NFSU2_TR(0x60e9e5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9e9:{NFSU2_TR(0x60e9e9);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e9f0:{NFSU2_TR(0x60e9f0);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9f7:{NFSU2_TR(0x60e9f7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e9fb:{NFSU2_TR(0x60e9fb);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea02:{NFSU2_TR(0x60ea02);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea06:{NFSU2_TR(0x60ea06);
{u32 ea_=u32(r4(R+16)+u32(1656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea0d:{NFSU2_TR(0x60ea0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x678ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ea14:{NFSU2_TR(0x60ea14);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ea16:{NFSU2_TR(0x60ea16);
u8 U[8];
w4(U+0,u32(u32(u32(0x528ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea1d:{NFSU2_TR(0x60ea1d);
{u32 ea_=u32(r4(R+16)+u32(1312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea24:{NFSU2_TR(0x60ea24);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea2b:{NFSU2_TR(0x60ea2b);
{u32 ea_=u32(r4(R+16)+u32(1312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ea32:{NFSU2_TR(0x60ea32);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea39:{NFSU2_TR(0x60ea39);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea40:{NFSU2_TR(0x60ea40);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60ea42:{NFSU2_TR(0x60ea42);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea49:{NFSU2_TR(0x60ea49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ea4b:{NFSU2_TR(0x60ea4b);
{u32 ea_=u32(r4(R+16)+u32(1320u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ea52:{NFSU2_TR(0x60ea52);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea59:{NFSU2_TR(0x60ea59);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea5d:{NFSU2_TR(0x60ea5d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ea5f:{NFSU2_TR(0x60ea5f);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea66:{NFSU2_TR(0x60ea66);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea6d:{NFSU2_TR(0x60ea6d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea71:{NFSU2_TR(0x60ea71);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea78:{NFSU2_TR(0x60ea78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ea7c:{NFSU2_TR(0x60ea7c);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea83:{NFSU2_TR(0x60ea83);
__builtin_memmove((R+4),(R+0),4);
}
B60ea85:{NFSU2_TR(0x60ea85);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea89:{NFSU2_TR(0x60ea89);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea90:{NFSU2_TR(0x60ea90);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea97:{NFSU2_TR(0x60ea97);
u8 U[8];
w4(U+0,u32(u32(u32(0x6d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea9e:{NFSU2_TR(0x60ea9e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eaa2:{NFSU2_TR(0x60eaa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60eaa6:{NFSU2_TR(0x60eaa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x398ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eaad:{NFSU2_TR(0x60eaad);
{u32 ea_=u32(r4(R+16)+u32(1720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eab4:{NFSU2_TR(0x60eab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60eabb:{NFSU2_TR(0x60eabb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eabd:{NFSU2_TR(0x60eabd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eac4:{NFSU2_TR(0x60eac4);
{u32 ea_=u32(r4(R+16)+u32(1184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eacb:{NFSU2_TR(0x60eacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60eacf:{NFSU2_TR(0x60eacf);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ead6:{NFSU2_TR(0x60ead6);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eadd:{NFSU2_TR(0x60eadd);
{u32 ea_=u32(r4(R+16)+u32(1184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eae4:{NFSU2_TR(0x60eae4);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eaeb:{NFSU2_TR(0x60eaeb);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eaf2:{NFSU2_TR(0x60eaf2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60eaf4:{NFSU2_TR(0x60eaf4);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eafb:{NFSU2_TR(0x60eafb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60eafd:{NFSU2_TR(0x60eafd);
{u32 ea_=u32(r4(R+16)+u32(1192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eb04:{NFSU2_TR(0x60eb04);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb0b:{NFSU2_TR(0x60eb0b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb0f:{NFSU2_TR(0x60eb0f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb13:{NFSU2_TR(0x60eb13);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb15:{NFSU2_TR(0x60eb15);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb1c:{NFSU2_TR(0x60eb1c);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb23:{NFSU2_TR(0x60eb23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb27:{NFSU2_TR(0x60eb27);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb2e:{NFSU2_TR(0x60eb2e);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb35:{NFSU2_TR(0x60eb35);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb39:{NFSU2_TR(0x60eb39);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb40:{NFSU2_TR(0x60eb40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb44:{NFSU2_TR(0x60eb44);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb4b:{NFSU2_TR(0x60eb4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb4d:{NFSU2_TR(0x60eb4d);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb54:{NFSU2_TR(0x60eb54);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb5b:{NFSU2_TR(0x60eb5b);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb62:{NFSU2_TR(0x60eb62);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb69:{NFSU2_TR(0x60eb69);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb70:{NFSU2_TR(0x60eb70);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb72:{NFSU2_TR(0x60eb72);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb79:{NFSU2_TR(0x60eb79);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb80:{NFSU2_TR(0x60eb80);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb87:{NFSU2_TR(0x60eb87);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb8b:{NFSU2_TR(0x60eb8b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb8f:{NFSU2_TR(0x60eb8f);
{u32 ea_=u32(r4(R+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb96:{NFSU2_TR(0x60eb96);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb9a:{NFSU2_TR(0x60eb9a);
{u32 ea_=u32(r4(R+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eba1:{NFSU2_TR(0x60eba1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eba5:{NFSU2_TR(0x60eba5);
{u32 ea_=u32(r4(R+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebac:{NFSU2_TR(0x60ebac);
u8 U[8];
w4(U+0,u32(u32(u32(0x738ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ebb3:{NFSU2_TR(0x60ebb3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ebb5:{NFSU2_TR(0x60ebb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ebbc:{NFSU2_TR(0x60ebbc);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebc3:{NFSU2_TR(0x60ebc3);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebca:{NFSU2_TR(0x60ebca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebce:{NFSU2_TR(0x60ebce);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebd5:{NFSU2_TR(0x60ebd5);
{u32 ea_=u32(r4(R+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebdc:{NFSU2_TR(0x60ebdc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebe0:{NFSU2_TR(0x60ebe0);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebe7:{NFSU2_TR(0x60ebe7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebeb:{NFSU2_TR(0x60ebeb);
{u32 ea_=u32(r4(R+16)+u32(1880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebf2:{NFSU2_TR(0x60ebf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x758ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ebf9:{NFSU2_TR(0x60ebf9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ebfb:{NFSU2_TR(0x60ebfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ec02:{NFSU2_TR(0x60ec02);
{u32 ea_=u32(r4(R+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec09:{NFSU2_TR(0x60ec09);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ec10:{NFSU2_TR(0x60ec10);
{u32 ea_=u32(r4(R+16)+u32(944u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60ec17:{NFSU2_TR(0x60ec17);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec1e:{NFSU2_TR(0x60ec1e);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60ec25:{NFSU2_TR(0x60ec25);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec2c:{NFSU2_TR(0x60ec2c);
{u32 ea_=u32(r4(R+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ec33:{NFSU2_TR(0x60ec33);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60ec35:{NFSU2_TR(0x60ec35);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec3c:{NFSU2_TR(0x60ec3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ec3e:{NFSU2_TR(0x60ec3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ec45:{NFSU2_TR(0x60ec45);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ec4c:{NFSU2_TR(0x60ec4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ec4e:{NFSU2_TR(0x60ec4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ec50:{NFSU2_TR(0x60ec50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ec51:{NFSU2_TR(0x60ec51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ec52:{NFSU2_TR(0x60ec52);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60ec56:{NFSU2_TR(0x60ec56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ec57:{NFSU2_TR(0x60ec57);
__builtin_memmove((R+4),(R+12),4);
}
B60ec59:{NFSU2_TR(0x60ec59);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec64:{NFSU2_TR(0x60ec64);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec6f:{NFSU2_TR(0x60ec6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec7a:{NFSU2_TR(0x60ec7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec85:{NFSU2_TR(0x60ec85);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec90:{NFSU2_TR(0x60ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec9b:{NFSU2_TR(0x60ec9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60eca6:{NFSU2_TR(0x60eca6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ecb1:{NFSU2_TR(0x60ecb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ecb6ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B60ecb6:L60ecb6:{c.instructions+=165;NFSU2_TR(0x60ecb6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecba:{NFSU2_TR(0x60ecba);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecbe:{NFSU2_TR(0x60ecbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ecc2:{NFSU2_TR(0x60ecc2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecc6:{NFSU2_TR(0x60ecc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ecca:{NFSU2_TR(0x60ecca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ecce:{NFSU2_TR(0x60ecce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ecd0:{NFSU2_TR(0x60ecd0);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ecd7:{NFSU2_TR(0x60ecd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ecdb:{NFSU2_TR(0x60ecdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ece2:{NFSU2_TR(0x60ece2);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ece9:{NFSU2_TR(0x60ece9);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ecf0:{NFSU2_TR(0x60ecf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ecf4:{NFSU2_TR(0x60ecf4);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecfb:{NFSU2_TR(0x60ecfb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ecff:{NFSU2_TR(0x60ecff);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed03:{NFSU2_TR(0x60ed03);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed0a:{NFSU2_TR(0x60ed0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed11:{NFSU2_TR(0x60ed11);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ed15:{NFSU2_TR(0x60ed15);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed1c:{NFSU2_TR(0x60ed1c);
__builtin_memmove((R+8),(R+4),4);
}
B60ed1e:{NFSU2_TR(0x60ed1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed25:{NFSU2_TR(0x60ed25);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed2c:{NFSU2_TR(0x60ed2c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ed30:{NFSU2_TR(0x60ed30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ed34:{NFSU2_TR(0x60ed34);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed38:{NFSU2_TR(0x60ed38);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed3c:{NFSU2_TR(0x60ed3c);
{u32 ea_=u32(r4(R+16)+u32(1944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed43:{NFSU2_TR(0x60ed43);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed4a:{NFSU2_TR(0x60ed4a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ed4c:{NFSU2_TR(0x60ed4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed53:{NFSU2_TR(0x60ed53);
u8 U[8];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ed5a:{NFSU2_TR(0x60ed5a);
{u32 ea_=u32(r4(R+16)+u32(976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed61:{NFSU2_TR(0x60ed61);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ed63:{NFSU2_TR(0x60ed63);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed6a:{NFSU2_TR(0x60ed6a);
{u32 ea_=u32(r4(R+16)+u32(976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ed71:{NFSU2_TR(0x60ed71);
u8 U[8];
w4(U+0,u32(u32(u32(0x778ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed78:{NFSU2_TR(0x60ed78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ed7c:{NFSU2_TR(0x60ed7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed83:{NFSU2_TR(0x60ed83);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed87:{NFSU2_TR(0x60ed87);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed8e:{NFSU2_TR(0x60ed8e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60ed92:{NFSU2_TR(0x60ed92);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed96:{NFSU2_TR(0x60ed96);
{u32 ea_=u32(r4(R+16)+u32(984u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ed9d:{NFSU2_TR(0x60ed9d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eda1:{NFSU2_TR(0x60eda1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eda5:{NFSU2_TR(0x60eda5);
{u32 ea_=u32(r4(R+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edac:{NFSU2_TR(0x60edac);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edb0:{NFSU2_TR(0x60edb0);
{u32 ea_=u32(r4(R+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edb7:{NFSU2_TR(0x60edb7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edbb:{NFSU2_TR(0x60edbb);
{u32 ea_=u32(r4(R+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60edc2:{NFSU2_TR(0x60edc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60edc9:{NFSU2_TR(0x60edc9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60edcb:{NFSU2_TR(0x60edcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60edd2:{NFSU2_TR(0x60edd2);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60edd9:{NFSU2_TR(0x60edd9);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ede0:{NFSU2_TR(0x60ede0);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ede7:{NFSU2_TR(0x60ede7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edeb:{NFSU2_TR(0x60edeb);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edf2:{NFSU2_TR(0x60edf2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edf6:{NFSU2_TR(0x60edf6);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edfd:{NFSU2_TR(0x60edfd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ee01:{NFSU2_TR(0x60ee01);
{u32 ea_=u32(r4(R+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee08:{NFSU2_TR(0x60ee08);
u8 U[8];
w4(U+0,u32(u32(u32(0x7d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ee0f:{NFSU2_TR(0x60ee0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ee11:{NFSU2_TR(0x60ee11);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee18:{NFSU2_TR(0x60ee18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee1c:{NFSU2_TR(0x60ee1c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee20:{NFSU2_TR(0x60ee20);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee27:{NFSU2_TR(0x60ee27);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ee2e:{NFSU2_TR(0x60ee2e);
__builtin_memmove((R+0),(R+8),4);
}
B60ee30:{NFSU2_TR(0x60ee30);
u8 U[8];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee37:{NFSU2_TR(0x60ee37);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ee3b:{NFSU2_TR(0x60ee3b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee3f:{NFSU2_TR(0x60ee3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee46:{NFSU2_TR(0x60ee46);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60ee48:{NFSU2_TR(0x60ee48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee4c:{NFSU2_TR(0x60ee4c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60ee4e:{NFSU2_TR(0x60ee4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee55:{NFSU2_TR(0x60ee55);
u8 U[8];
w4(U+0,u32(u32(u32(0x438ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee5c:{NFSU2_TR(0x60ee5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee60:{NFSU2_TR(0x60ee60);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee64:{NFSU2_TR(0x60ee64);
u8 U[8];
w4(U+0,u32(u32(u32(0x898ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee6b:{NFSU2_TR(0x60ee6b);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B60ee6d:{NFSU2_TR(0x60ee6d);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ee74:{NFSU2_TR(0x60ee74);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee78:{NFSU2_TR(0x60ee78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee7c:{NFSU2_TR(0x60ee7c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee80:{NFSU2_TR(0x60ee80);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ee82:{NFSU2_TR(0x60ee82);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee89:{NFSU2_TR(0x60ee89);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee90:{NFSU2_TR(0x60ee90);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee97:{NFSU2_TR(0x60ee97);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ee9b:{NFSU2_TR(0x60ee9b);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eea2:{NFSU2_TR(0x60eea2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eea6:{NFSU2_TR(0x60eea6);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eead:{NFSU2_TR(0x60eead);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eeb1:{NFSU2_TR(0x60eeb1);
{u32 ea_=u32(r4(R+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eeb8:{NFSU2_TR(0x60eeb8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eeba:{NFSU2_TR(0x60eeba);
{u32 ea_=u32(r4(R+16)+u32(2096u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eec1:{NFSU2_TR(0x60eec1);
{u32 ea_=u32(r4(R+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eec8:{NFSU2_TR(0x60eec8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eecc:{NFSU2_TR(0x60eecc);
{u32 ea_=u32(r4(R+16)+u32(2096u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eed3:{NFSU2_TR(0x60eed3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eed7:{NFSU2_TR(0x60eed7);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eedb:{NFSU2_TR(0x60eedb);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60eedd:{NFSU2_TR(0x60eedd);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eee1:{NFSU2_TR(0x60eee1);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eee5:{NFSU2_TR(0x60eee5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60eee7:{NFSU2_TR(0x60eee7);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B60eee9:{NFSU2_TR(0x60eee9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60eeeb:{NFSU2_TR(0x60eeeb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eeef:{NFSU2_TR(0x60eeef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eef3:{NFSU2_TR(0x60eef3);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eefa:{NFSU2_TR(0x60eefa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eefe:{NFSU2_TR(0x60eefe);
{u32 ea_=u32(r4(R+16)+u32(1080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef05:{NFSU2_TR(0x60ef05);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef09:{NFSU2_TR(0x60ef09);
{u32 ea_=u32(r4(R+16)+u32(2136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef10:{NFSU2_TR(0x60ef10);
u8 U[8];
w4(U+0,u32(u32(u32(0x858ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ef17:{NFSU2_TR(0x60ef17);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef19:{NFSU2_TR(0x60ef19);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ef20:{NFSU2_TR(0x60ef20);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef27:{NFSU2_TR(0x60ef27);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef2e:{NFSU2_TR(0x60ef2e);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef35:{NFSU2_TR(0x60ef35);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef39:{NFSU2_TR(0x60ef39);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef40:{NFSU2_TR(0x60ef40);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef44:{NFSU2_TR(0x60ef44);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef4b:{NFSU2_TR(0x60ef4b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef4f:{NFSU2_TR(0x60ef4f);
{u32 ea_=u32(r4(R+16)+u32(2168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef56:{NFSU2_TR(0x60ef56);
u8 U[8];
w4(U+0,u32(u32(u32(0x878ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ef5d:{NFSU2_TR(0x60ef5d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef5f:{NFSU2_TR(0x60ef5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x458ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ef66:{NFSU2_TR(0x60ef66);
{u32 ea_=u32(r4(R+16)+u32(1104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef6d:{NFSU2_TR(0x60ef6d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef71:{NFSU2_TR(0x60ef71);
{u32 ea_=u32(r4(R+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ef78:{NFSU2_TR(0x60ef78);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef7c:{NFSU2_TR(0x60ef7c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef80:{NFSU2_TR(0x60ef80);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60ef82:{NFSU2_TR(0x60ef82);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef86:{NFSU2_TR(0x60ef86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ef88:{NFSU2_TR(0x60ef88);
{u32 ea_=u32(r4(R+16)+u32(1112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ef8f:{NFSU2_TR(0x60ef8f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef93:{NFSU2_TR(0x60ef93);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef97:{NFSU2_TR(0x60ef97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef99:{NFSU2_TR(0x60ef99);
__builtin_memmove((R+0),(R+8),4);
}
B60ef9b:{NFSU2_TR(0x60ef9b);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60efa2:{NFSU2_TR(0x60efa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efa9:{NFSU2_TR(0x60efa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60efad:{NFSU2_TR(0x60efad);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60efb4:{NFSU2_TR(0x60efb4);
__builtin_memmove((R+0),(R+8),4);
}
B60efb6:{NFSU2_TR(0x60efb6);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efbd:{NFSU2_TR(0x60efbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efc4:{NFSU2_TR(0x60efc4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60efc8:{NFSU2_TR(0x60efc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efcf:{NFSU2_TR(0x60efcf);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efd6:{NFSU2_TR(0x60efd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60efda:{NFSU2_TR(0x60efda);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60efde:{NFSU2_TR(0x60efde);
__builtin_memmove((R+0),(R+8),4);
}
B60efe0:{NFSU2_TR(0x60efe0);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efe7:{NFSU2_TR(0x60efe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efee:{NFSU2_TR(0x60efee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eff2:{NFSU2_TR(0x60eff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eff9:{NFSU2_TR(0x60eff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60effd:{NFSU2_TR(0x60effd);
{u32 ea_=u32(r4(R+16)+u32(2232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x60f004u,60f);
}
XIT:NFSU2_TR_EXIT(0x60e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
