#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_72e(u8* __restrict R,Cpu& c);
u32 body_730(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72f(u8* __restrict R,Cpu& c);
u32 page_72f(Cpu& c){return body_72f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72f001:goto L72f001;
case 0x72f007:c.instructions+=12;goto B72f007;
case 0x72f009:c.instructions+=11;goto B72f009;
case 0x72f00c:c.instructions+=10;goto B72f00c;
case 0x72f012:c.instructions+=9;goto B72f012;
case 0x72f015:c.instructions+=8;goto B72f015;
case 0x72f01b:c.instructions+=7;goto B72f01b;
case 0x72f01d:c.instructions+=6;goto B72f01d;
case 0x72f020:c.instructions+=5;goto B72f020;
case 0x72f026:c.instructions+=4;goto B72f026;
case 0x72f029:c.instructions+=3;goto B72f029;
case 0x72f02c:c.instructions+=2;goto B72f02c;
case 0x72f032:c.instructions+=1;goto B72f032;
case 0x72f038:goto L72f038;
case 0x72f03b:c.instructions+=41;goto B72f03b;
case 0x72f041:c.instructions+=40;goto B72f041;
case 0x72f044:c.instructions+=39;goto B72f044;
case 0x72f047:c.instructions+=38;goto B72f047;
case 0x72f04a:c.instructions+=37;goto B72f04a;
case 0x72f04d:c.instructions+=36;goto B72f04d;
case 0x72f050:c.instructions+=35;goto B72f050;
case 0x72f052:c.instructions+=34;goto B72f052;
case 0x72f054:c.instructions+=33;goto B72f054;
case 0x72f05a:c.instructions+=32;goto B72f05a;
case 0x72f05d:c.instructions+=31;goto B72f05d;
case 0x72f05f:c.instructions+=30;goto B72f05f;
case 0x72f061:c.instructions+=29;goto B72f061;
case 0x72f067:c.instructions+=28;goto B72f067;
case 0x72f069:c.instructions+=27;goto B72f069;
case 0x72f06b:c.instructions+=26;goto B72f06b;
case 0x72f071:c.instructions+=25;goto B72f071;
case 0x72f074:c.instructions+=24;goto B72f074;
case 0x72f076:c.instructions+=23;goto B72f076;
case 0x72f078:c.instructions+=22;goto B72f078;
case 0x72f07e:c.instructions+=21;goto B72f07e;
case 0x72f081:c.instructions+=20;goto B72f081;
case 0x72f083:c.instructions+=19;goto B72f083;
case 0x72f085:c.instructions+=18;goto B72f085;
case 0x72f08b:c.instructions+=17;goto B72f08b;
case 0x72f08e:c.instructions+=16;goto B72f08e;
case 0x72f090:c.instructions+=15;goto B72f090;
case 0x72f092:c.instructions+=14;goto B72f092;
case 0x72f098:c.instructions+=13;goto B72f098;
case 0x72f09b:c.instructions+=12;goto B72f09b;
case 0x72f09d:c.instructions+=11;goto B72f09d;
case 0x72f09f:c.instructions+=10;goto B72f09f;
case 0x72f0a5:c.instructions+=9;goto B72f0a5;
case 0x72f0a8:c.instructions+=8;goto B72f0a8;
case 0x72f0aa:c.instructions+=7;goto B72f0aa;
case 0x72f0ac:c.instructions+=6;goto B72f0ac;
case 0x72f0b2:c.instructions+=5;goto B72f0b2;
case 0x72f0b5:c.instructions+=4;goto B72f0b5;
case 0x72f0b7:c.instructions+=3;goto B72f0b7;
case 0x72f0b9:c.instructions+=2;goto B72f0b9;
case 0x72f0bf:c.instructions+=1;goto B72f0bf;
case 0x72f0c4:goto L72f0c4;
case 0x72f0c7:c.instructions+=1;goto B72f0c7;
case 0x72f0cd:goto L72f0cd;
case 0x72f0d3:c.instructions+=43;goto B72f0d3;
case 0x72f0d5:c.instructions+=42;goto B72f0d5;
case 0x72f0d7:c.instructions+=41;goto B72f0d7;
case 0x72f0dd:c.instructions+=40;goto B72f0dd;
case 0x72f0e0:c.instructions+=39;goto B72f0e0;
case 0x72f0e2:c.instructions+=38;goto B72f0e2;
case 0x72f0e4:c.instructions+=37;goto B72f0e4;
case 0x72f0ea:c.instructions+=36;goto B72f0ea;
case 0x72f0ed:c.instructions+=35;goto B72f0ed;
case 0x72f0ef:c.instructions+=34;goto B72f0ef;
case 0x72f0f1:c.instructions+=33;goto B72f0f1;
case 0x72f0f7:c.instructions+=32;goto B72f0f7;
case 0x72f0fa:c.instructions+=31;goto B72f0fa;
case 0x72f0fc:c.instructions+=30;goto B72f0fc;
case 0x72f0fe:c.instructions+=29;goto B72f0fe;
case 0x72f104:c.instructions+=28;goto B72f104;
case 0x72f106:c.instructions+=27;goto B72f106;
case 0x72f108:c.instructions+=26;goto B72f108;
case 0x72f10e:c.instructions+=25;goto B72f10e;
case 0x72f111:c.instructions+=24;goto B72f111;
case 0x72f113:c.instructions+=23;goto B72f113;
case 0x72f115:c.instructions+=22;goto B72f115;
case 0x72f11b:c.instructions+=21;goto B72f11b;
case 0x72f11e:c.instructions+=20;goto B72f11e;
case 0x72f120:c.instructions+=19;goto B72f120;
case 0x72f122:c.instructions+=18;goto B72f122;
case 0x72f128:c.instructions+=17;goto B72f128;
case 0x72f12b:c.instructions+=16;goto B72f12b;
case 0x72f12d:c.instructions+=15;goto B72f12d;
case 0x72f12f:c.instructions+=14;goto B72f12f;
case 0x72f135:c.instructions+=13;goto B72f135;
case 0x72f138:c.instructions+=12;goto B72f138;
case 0x72f13a:c.instructions+=11;goto B72f13a;
case 0x72f13c:c.instructions+=10;goto B72f13c;
case 0x72f142:c.instructions+=9;goto B72f142;
case 0x72f145:c.instructions+=8;goto B72f145;
case 0x72f147:c.instructions+=7;goto B72f147;
case 0x72f149:c.instructions+=6;goto B72f149;
case 0x72f14f:c.instructions+=5;goto B72f14f;
case 0x72f152:c.instructions+=4;goto B72f152;
case 0x72f154:c.instructions+=3;goto B72f154;
case 0x72f156:c.instructions+=2;goto B72f156;
case 0x72f15c:c.instructions+=1;goto B72f15c;
case 0x72f161:goto L72f161;
case 0x72f167:c.instructions+=42;goto B72f167;
case 0x72f169:c.instructions+=41;goto B72f169;
case 0x72f16b:c.instructions+=40;goto B72f16b;
case 0x72f171:c.instructions+=39;goto B72f171;
case 0x72f174:c.instructions+=38;goto B72f174;
case 0x72f176:c.instructions+=37;goto B72f176;
case 0x72f178:c.instructions+=36;goto B72f178;
case 0x72f17e:c.instructions+=35;goto B72f17e;
case 0x72f181:c.instructions+=34;goto B72f181;
case 0x72f183:c.instructions+=33;goto B72f183;
case 0x72f185:c.instructions+=32;goto B72f185;
case 0x72f18b:c.instructions+=31;goto B72f18b;
case 0x72f18e:c.instructions+=30;goto B72f18e;
case 0x72f190:c.instructions+=29;goto B72f190;
case 0x72f192:c.instructions+=28;goto B72f192;
case 0x72f198:c.instructions+=27;goto B72f198;
case 0x72f19a:c.instructions+=26;goto B72f19a;
case 0x72f19c:c.instructions+=25;goto B72f19c;
case 0x72f1a2:c.instructions+=24;goto B72f1a2;
case 0x72f1a5:c.instructions+=23;goto B72f1a5;
case 0x72f1a7:c.instructions+=22;goto B72f1a7;
case 0x72f1a9:c.instructions+=21;goto B72f1a9;
case 0x72f1af:c.instructions+=20;goto B72f1af;
case 0x72f1b2:c.instructions+=19;goto B72f1b2;
case 0x72f1b4:c.instructions+=18;goto B72f1b4;
case 0x72f1b6:c.instructions+=17;goto B72f1b6;
case 0x72f1bc:c.instructions+=16;goto B72f1bc;
case 0x72f1bf:c.instructions+=15;goto B72f1bf;
case 0x72f1c1:c.instructions+=14;goto B72f1c1;
case 0x72f1c3:c.instructions+=13;goto B72f1c3;
case 0x72f1c9:c.instructions+=12;goto B72f1c9;
case 0x72f1cc:c.instructions+=11;goto B72f1cc;
case 0x72f1ce:c.instructions+=10;goto B72f1ce;
case 0x72f1d0:c.instructions+=9;goto B72f1d0;
case 0x72f1d6:c.instructions+=8;goto B72f1d6;
case 0x72f1d9:c.instructions+=7;goto B72f1d9;
case 0x72f1db:c.instructions+=6;goto B72f1db;
case 0x72f1dd:c.instructions+=5;goto B72f1dd;
case 0x72f1e3:c.instructions+=4;goto B72f1e3;
case 0x72f1e6:c.instructions+=3;goto B72f1e6;
case 0x72f1e8:c.instructions+=2;goto B72f1e8;
case 0x72f1ea:c.instructions+=1;goto B72f1ea;
case 0x72f1f0:goto L72f1f0;
case 0x72f1f3:c.instructions+=6;goto B72f1f3;
case 0x72f1f6:c.instructions+=5;goto B72f1f6;
case 0x72f1f8:c.instructions+=4;goto B72f1f8;
case 0x72f1fb:c.instructions+=3;goto B72f1fb;
case 0x72f1fc:c.instructions+=2;goto B72f1fc;
case 0x72f1fe:c.instructions+=1;goto B72f1fe;
case 0x72f204:goto L72f204;
case 0x72f206:c.instructions+=5;goto B72f206;
case 0x72f207:c.instructions+=4;goto B72f207;
case 0x72f209:c.instructions+=3;goto B72f209;
case 0x72f20a:c.instructions+=2;goto B72f20a;
case 0x72f20b:c.instructions+=1;goto B72f20b;
case 0x72f20c:goto L72f20c;
case 0x72f20d:c.instructions+=484;goto B72f20d;
case 0x72f211:c.instructions+=483;goto B72f211;
case 0x72f217:c.instructions+=482;goto B72f217;
case 0x72f21d:c.instructions+=481;goto B72f21d;
case 0x72f223:c.instructions+=480;goto B72f223;
case 0x72f229:c.instructions+=479;goto B72f229;
case 0x72f22f:c.instructions+=478;goto B72f22f;
case 0x72f235:c.instructions+=477;goto B72f235;
case 0x72f23b:c.instructions+=476;goto B72f23b;
case 0x72f241:c.instructions+=475;goto B72f241;
case 0x72f247:c.instructions+=474;goto B72f247;
case 0x72f24d:c.instructions+=473;goto B72f24d;
case 0x72f253:c.instructions+=472;goto B72f253;
case 0x72f259:c.instructions+=471;goto B72f259;
case 0x72f25f:c.instructions+=470;goto B72f25f;
case 0x72f265:c.instructions+=469;goto B72f265;
case 0x72f26b:c.instructions+=468;goto B72f26b;
case 0x72f271:c.instructions+=467;goto B72f271;
case 0x72f277:c.instructions+=466;goto B72f277;
case 0x72f27d:c.instructions+=465;goto B72f27d;
case 0x72f283:c.instructions+=464;goto B72f283;
case 0x72f289:c.instructions+=463;goto B72f289;
case 0x72f28f:c.instructions+=462;goto B72f28f;
case 0x72f295:c.instructions+=461;goto B72f295;
case 0x72f29b:c.instructions+=460;goto B72f29b;
case 0x72f2a1:c.instructions+=459;goto B72f2a1;
case 0x72f2a7:c.instructions+=458;goto B72f2a7;
case 0x72f2ad:c.instructions+=457;goto B72f2ad;
case 0x72f2b3:c.instructions+=456;goto B72f2b3;
case 0x72f2b9:c.instructions+=455;goto B72f2b9;
case 0x72f2bf:c.instructions+=454;goto B72f2bf;
case 0x72f2c2:c.instructions+=453;goto B72f2c2;
case 0x72f2c8:c.instructions+=452;goto B72f2c8;
case 0x72f2cb:c.instructions+=451;goto B72f2cb;
case 0x72f2ce:c.instructions+=450;goto B72f2ce;
case 0x72f2d1:c.instructions+=449;goto B72f2d1;
case 0x72f2d4:c.instructions+=448;goto B72f2d4;
case 0x72f2d7:c.instructions+=447;goto B72f2d7;
case 0x72f2da:c.instructions+=446;goto B72f2da;
case 0x72f2dd:c.instructions+=445;goto B72f2dd;
case 0x72f2e0:c.instructions+=444;goto B72f2e0;
case 0x72f2e3:c.instructions+=443;goto B72f2e3;
case 0x72f2e6:c.instructions+=442;goto B72f2e6;
case 0x72f2e9:c.instructions+=441;goto B72f2e9;
case 0x72f2ec:c.instructions+=440;goto B72f2ec;
case 0x72f2ef:c.instructions+=439;goto B72f2ef;
case 0x72f2f2:c.instructions+=438;goto B72f2f2;
case 0x72f2f5:c.instructions+=437;goto B72f2f5;
case 0x72f2f8:c.instructions+=436;goto B72f2f8;
case 0x72f2fb:c.instructions+=435;goto B72f2fb;
case 0x72f2fe:c.instructions+=434;goto B72f2fe;
case 0x72f301:c.instructions+=433;goto B72f301;
case 0x72f303:c.instructions+=432;goto B72f303;
case 0x72f306:c.instructions+=431;goto B72f306;
case 0x72f309:c.instructions+=430;goto B72f309;
case 0x72f30f:c.instructions+=429;goto B72f30f;
case 0x72f315:c.instructions+=428;goto B72f315;
case 0x72f31b:c.instructions+=427;goto B72f31b;
case 0x72f321:c.instructions+=426;goto B72f321;
case 0x72f327:c.instructions+=425;goto B72f327;
case 0x72f32d:c.instructions+=424;goto B72f32d;
case 0x72f333:c.instructions+=423;goto B72f333;
case 0x72f339:c.instructions+=422;goto B72f339;
case 0x72f33f:c.instructions+=421;goto B72f33f;
case 0x72f345:c.instructions+=420;goto B72f345;
case 0x72f34b:c.instructions+=419;goto B72f34b;
case 0x72f351:c.instructions+=418;goto B72f351;
case 0x72f357:c.instructions+=417;goto B72f357;
case 0x72f35a:c.instructions+=416;goto B72f35a;
case 0x72f360:c.instructions+=415;goto B72f360;
case 0x72f363:c.instructions+=414;goto B72f363;
case 0x72f366:c.instructions+=413;goto B72f366;
case 0x72f369:c.instructions+=412;goto B72f369;
case 0x72f36c:c.instructions+=411;goto B72f36c;
case 0x72f36f:c.instructions+=410;goto B72f36f;
case 0x72f372:c.instructions+=409;goto B72f372;
case 0x72f375:c.instructions+=408;goto B72f375;
case 0x72f378:c.instructions+=407;goto B72f378;
case 0x72f37a:c.instructions+=406;goto B72f37a;
case 0x72f37c:c.instructions+=405;goto B72f37c;
case 0x72f37f:c.instructions+=404;goto B72f37f;
case 0x72f385:c.instructions+=403;goto B72f385;
case 0x72f388:c.instructions+=402;goto B72f388;
case 0x72f38e:c.instructions+=401;goto B72f38e;
case 0x72f394:c.instructions+=400;goto B72f394;
case 0x72f39a:c.instructions+=399;goto B72f39a;
case 0x72f39d:c.instructions+=398;goto B72f39d;
case 0x72f39f:c.instructions+=397;goto B72f39f;
case 0x72f3a5:c.instructions+=396;goto B72f3a5;
case 0x72f3a7:c.instructions+=395;goto B72f3a7;
case 0x72f3a9:c.instructions+=394;goto B72f3a9;
case 0x72f3af:c.instructions+=393;goto B72f3af;
case 0x72f3b1:c.instructions+=392;goto B72f3b1;
case 0x72f3b3:c.instructions+=391;goto B72f3b3;
case 0x72f3b6:c.instructions+=390;goto B72f3b6;
case 0x72f3b9:c.instructions+=389;goto B72f3b9;
case 0x72f3bc:c.instructions+=388;goto B72f3bc;
case 0x72f3bf:c.instructions+=387;goto B72f3bf;
case 0x72f3c5:c.instructions+=386;goto B72f3c5;
case 0x72f3cb:c.instructions+=385;goto B72f3cb;
case 0x72f3d1:c.instructions+=384;goto B72f3d1;
case 0x72f3d7:c.instructions+=383;goto B72f3d7;
case 0x72f3da:c.instructions+=382;goto B72f3da;
case 0x72f3dd:c.instructions+=381;goto B72f3dd;
case 0x72f3df:c.instructions+=380;goto B72f3df;
case 0x72f3e2:c.instructions+=379;goto B72f3e2;
case 0x72f3e8:c.instructions+=378;goto B72f3e8;
case 0x72f3ea:c.instructions+=377;goto B72f3ea;
case 0x72f3ec:c.instructions+=376;goto B72f3ec;
case 0x72f3f2:c.instructions+=375;goto B72f3f2;
case 0x72f3f4:c.instructions+=374;goto B72f3f4;
case 0x72f3f6:c.instructions+=373;goto B72f3f6;
case 0x72f3f9:c.instructions+=372;goto B72f3f9;
case 0x72f3fc:c.instructions+=371;goto B72f3fc;
case 0x72f3fe:c.instructions+=370;goto B72f3fe;
case 0x72f401:c.instructions+=369;goto B72f401;
case 0x72f407:c.instructions+=368;goto B72f407;
case 0x72f409:c.instructions+=367;goto B72f409;
case 0x72f40b:c.instructions+=366;goto B72f40b;
case 0x72f411:c.instructions+=365;goto B72f411;
case 0x72f413:c.instructions+=364;goto B72f413;
case 0x72f415:c.instructions+=363;goto B72f415;
case 0x72f418:c.instructions+=362;goto B72f418;
case 0x72f41a:c.instructions+=361;goto B72f41a;
case 0x72f41d:c.instructions+=360;goto B72f41d;
case 0x72f423:c.instructions+=359;goto B72f423;
case 0x72f429:c.instructions+=358;goto B72f429;
case 0x72f42f:c.instructions+=357;goto B72f42f;
case 0x72f432:c.instructions+=356;goto B72f432;
case 0x72f438:c.instructions+=355;goto B72f438;
case 0x72f43b:c.instructions+=354;goto B72f43b;
case 0x72f43d:c.instructions+=353;goto B72f43d;
case 0x72f440:c.instructions+=352;goto B72f440;
case 0x72f446:c.instructions+=351;goto B72f446;
case 0x72f448:c.instructions+=350;goto B72f448;
case 0x72f44e:c.instructions+=349;goto B72f44e;
case 0x72f454:c.instructions+=348;goto B72f454;
case 0x72f456:c.instructions+=347;goto B72f456;
case 0x72f45c:c.instructions+=346;goto B72f45c;
case 0x72f462:c.instructions+=345;goto B72f462;
case 0x72f464:c.instructions+=344;goto B72f464;
case 0x72f467:c.instructions+=343;goto B72f467;
case 0x72f46a:c.instructions+=342;goto B72f46a;
case 0x72f470:c.instructions+=341;goto B72f470;
case 0x72f476:c.instructions+=340;goto B72f476;
case 0x72f478:c.instructions+=339;goto B72f478;
case 0x72f47b:c.instructions+=338;goto B72f47b;
case 0x72f47e:c.instructions+=337;goto B72f47e;
case 0x72f484:c.instructions+=336;goto B72f484;
case 0x72f486:c.instructions+=335;goto B72f486;
case 0x72f48c:c.instructions+=334;goto B72f48c;
case 0x72f492:c.instructions+=333;goto B72f492;
case 0x72f494:c.instructions+=332;goto B72f494;
case 0x72f49a:c.instructions+=331;goto B72f49a;
case 0x72f4a0:c.instructions+=330;goto B72f4a0;
case 0x72f4a2:c.instructions+=329;goto B72f4a2;
case 0x72f4a5:c.instructions+=328;goto B72f4a5;
case 0x72f4a8:c.instructions+=327;goto B72f4a8;
case 0x72f4ae:c.instructions+=326;goto B72f4ae;
case 0x72f4b0:c.instructions+=325;goto B72f4b0;
case 0x72f4b6:c.instructions+=324;goto B72f4b6;
case 0x72f4bc:c.instructions+=323;goto B72f4bc;
case 0x72f4be:c.instructions+=322;goto B72f4be;
case 0x72f4c4:c.instructions+=321;goto B72f4c4;
case 0x72f4ca:c.instructions+=320;goto B72f4ca;
case 0x72f4cc:c.instructions+=319;goto B72f4cc;
case 0x72f4cf:c.instructions+=318;goto B72f4cf;
case 0x72f4d1:c.instructions+=317;goto B72f4d1;
case 0x72f4d3:c.instructions+=316;goto B72f4d3;
case 0x72f4d6:c.instructions+=315;goto B72f4d6;
case 0x72f4d8:c.instructions+=314;goto B72f4d8;
case 0x72f4db:c.instructions+=313;goto B72f4db;
case 0x72f4e1:c.instructions+=312;goto B72f4e1;
case 0x72f4e4:c.instructions+=311;goto B72f4e4;
case 0x72f4e6:c.instructions+=310;goto B72f4e6;
case 0x72f4ec:c.instructions+=309;goto B72f4ec;
case 0x72f4ee:c.instructions+=308;goto B72f4ee;
case 0x72f4f0:c.instructions+=307;goto B72f4f0;
case 0x72f4f6:c.instructions+=306;goto B72f4f6;
case 0x72f4f8:c.instructions+=305;goto B72f4f8;
case 0x72f4fa:c.instructions+=304;goto B72f4fa;
case 0x72f4fc:c.instructions+=303;goto B72f4fc;
case 0x72f4ff:c.instructions+=302;goto B72f4ff;
case 0x72f502:c.instructions+=301;goto B72f502;
case 0x72f505:c.instructions+=300;goto B72f505;
case 0x72f50b:c.instructions+=299;goto B72f50b;
case 0x72f511:c.instructions+=298;goto B72f511;
case 0x72f517:c.instructions+=297;goto B72f517;
case 0x72f51d:c.instructions+=296;goto B72f51d;
case 0x72f520:c.instructions+=295;goto B72f520;
case 0x72f523:c.instructions+=294;goto B72f523;
case 0x72f525:c.instructions+=293;goto B72f525;
case 0x72f527:c.instructions+=292;goto B72f527;
case 0x72f52d:c.instructions+=291;goto B72f52d;
case 0x72f52f:c.instructions+=290;goto B72f52f;
case 0x72f531:c.instructions+=289;goto B72f531;
case 0x72f537:c.instructions+=288;goto B72f537;
case 0x72f539:c.instructions+=287;goto B72f539;
case 0x72f53b:c.instructions+=286;goto B72f53b;
case 0x72f53e:c.instructions+=285;goto B72f53e;
case 0x72f541:c.instructions+=284;goto B72f541;
case 0x72f543:c.instructions+=283;goto B72f543;
case 0x72f545:c.instructions+=282;goto B72f545;
case 0x72f54b:c.instructions+=281;goto B72f54b;
case 0x72f54d:c.instructions+=280;goto B72f54d;
case 0x72f54f:c.instructions+=279;goto B72f54f;
case 0x72f555:c.instructions+=278;goto B72f555;
case 0x72f557:c.instructions+=277;goto B72f557;
case 0x72f559:c.instructions+=276;goto B72f559;
case 0x72f55c:c.instructions+=275;goto B72f55c;
case 0x72f55e:c.instructions+=274;goto B72f55e;
case 0x72f560:c.instructions+=273;goto B72f560;
case 0x72f562:c.instructions+=272;goto B72f562;
case 0x72f564:c.instructions+=271;goto B72f564;
case 0x72f567:c.instructions+=270;goto B72f567;
case 0x72f56a:c.instructions+=269;goto B72f56a;
case 0x72f570:c.instructions+=268;goto B72f570;
case 0x72f576:c.instructions+=267;goto B72f576;
case 0x72f57c:c.instructions+=266;goto B72f57c;
case 0x72f582:c.instructions+=265;goto B72f582;
case 0x72f588:c.instructions+=264;goto B72f588;
case 0x72f58b:c.instructions+=263;goto B72f58b;
case 0x72f58d:c.instructions+=262;goto B72f58d;
case 0x72f593:c.instructions+=261;goto B72f593;
case 0x72f599:c.instructions+=260;goto B72f599;
case 0x72f59b:c.instructions+=259;goto B72f59b;
case 0x72f59d:c.instructions+=258;goto B72f59d;
case 0x72f59f:c.instructions+=257;goto B72f59f;
case 0x72f5a5:c.instructions+=256;goto B72f5a5;
case 0x72f5a7:c.instructions+=255;goto B72f5a7;
case 0x72f5a9:c.instructions+=254;goto B72f5a9;
case 0x72f5af:c.instructions+=253;goto B72f5af;
case 0x72f5b5:c.instructions+=252;goto B72f5b5;
case 0x72f5b7:c.instructions+=251;goto B72f5b7;
case 0x72f5ba:c.instructions+=250;goto B72f5ba;
case 0x72f5bc:c.instructions+=249;goto B72f5bc;
case 0x72f5c2:c.instructions+=248;goto B72f5c2;
case 0x72f5c8:c.instructions+=247;goto B72f5c8;
case 0x72f5ca:c.instructions+=246;goto B72f5ca;
case 0x72f5cd:c.instructions+=245;goto B72f5cd;
case 0x72f5cf:c.instructions+=244;goto B72f5cf;
case 0x72f5d1:c.instructions+=243;goto B72f5d1;
case 0x72f5d3:c.instructions+=242;goto B72f5d3;
case 0x72f5d9:c.instructions+=241;goto B72f5d9;
case 0x72f5df:c.instructions+=240;goto B72f5df;
case 0x72f5e1:c.instructions+=239;goto B72f5e1;
case 0x72f5e7:c.instructions+=238;goto B72f5e7;
case 0x72f5e9:c.instructions+=237;goto B72f5e9;
case 0x72f5eb:c.instructions+=236;goto B72f5eb;
case 0x72f5ee:c.instructions+=235;goto B72f5ee;
case 0x72f5f0:c.instructions+=234;goto B72f5f0;
case 0x72f5f6:c.instructions+=233;goto B72f5f6;
case 0x72f5f8:c.instructions+=232;goto B72f5f8;
case 0x72f5fe:c.instructions+=231;goto B72f5fe;
case 0x72f600:c.instructions+=230;goto B72f600;
case 0x72f602:c.instructions+=229;goto B72f602;
case 0x72f608:c.instructions+=228;goto B72f608;
case 0x72f60a:c.instructions+=227;goto B72f60a;
case 0x72f60c:c.instructions+=226;goto B72f60c;
case 0x72f60f:c.instructions+=225;goto B72f60f;
case 0x72f611:c.instructions+=224;goto B72f611;
case 0x72f613:c.instructions+=223;goto B72f613;
case 0x72f615:c.instructions+=222;goto B72f615;
case 0x72f617:c.instructions+=221;goto B72f617;
case 0x72f61a:c.instructions+=220;goto B72f61a;
case 0x72f61d:c.instructions+=219;goto B72f61d;
case 0x72f620:c.instructions+=218;goto B72f620;
case 0x72f623:c.instructions+=217;goto B72f623;
case 0x72f629:c.instructions+=216;goto B72f629;
case 0x72f62b:c.instructions+=215;goto B72f62b;
case 0x72f62d:c.instructions+=214;goto B72f62d;
case 0x72f630:c.instructions+=213;goto B72f630;
case 0x72f632:c.instructions+=212;goto B72f632;
case 0x72f634:c.instructions+=211;goto B72f634;
case 0x72f637:c.instructions+=210;goto B72f637;
case 0x72f639:c.instructions+=209;goto B72f639;
case 0x72f63b:c.instructions+=208;goto B72f63b;
case 0x72f63e:c.instructions+=207;goto B72f63e;
case 0x72f641:c.instructions+=206;goto B72f641;
case 0x72f644:c.instructions+=205;goto B72f644;
case 0x72f647:c.instructions+=204;goto B72f647;
case 0x72f64d:c.instructions+=203;goto B72f64d;
case 0x72f64f:c.instructions+=202;goto B72f64f;
case 0x72f651:c.instructions+=201;goto B72f651;
case 0x72f654:c.instructions+=200;goto B72f654;
case 0x72f656:c.instructions+=199;goto B72f656;
case 0x72f658:c.instructions+=198;goto B72f658;
case 0x72f65b:c.instructions+=197;goto B72f65b;
case 0x72f65d:c.instructions+=196;goto B72f65d;
case 0x72f65f:c.instructions+=195;goto B72f65f;
case 0x72f662:c.instructions+=194;goto B72f662;
case 0x72f665:c.instructions+=193;goto B72f665;
case 0x72f668:c.instructions+=192;goto B72f668;
case 0x72f66b:c.instructions+=191;goto B72f66b;
case 0x72f671:c.instructions+=190;goto B72f671;
case 0x72f673:c.instructions+=189;goto B72f673;
case 0x72f675:c.instructions+=188;goto B72f675;
case 0x72f678:c.instructions+=187;goto B72f678;
case 0x72f67a:c.instructions+=186;goto B72f67a;
case 0x72f67c:c.instructions+=185;goto B72f67c;
case 0x72f67f:c.instructions+=184;goto B72f67f;
case 0x72f681:c.instructions+=183;goto B72f681;
case 0x72f683:c.instructions+=182;goto B72f683;
case 0x72f686:c.instructions+=181;goto B72f686;
case 0x72f689:c.instructions+=180;goto B72f689;
case 0x72f68c:c.instructions+=179;goto B72f68c;
case 0x72f68f:c.instructions+=178;goto B72f68f;
case 0x72f695:c.instructions+=177;goto B72f695;
case 0x72f697:c.instructions+=176;goto B72f697;
case 0x72f699:c.instructions+=175;goto B72f699;
case 0x72f69c:c.instructions+=174;goto B72f69c;
case 0x72f69e:c.instructions+=173;goto B72f69e;
case 0x72f6a0:c.instructions+=172;goto B72f6a0;
case 0x72f6a3:c.instructions+=171;goto B72f6a3;
case 0x72f6a5:c.instructions+=170;goto B72f6a5;
case 0x72f6a7:c.instructions+=169;goto B72f6a7;
case 0x72f6aa:c.instructions+=168;goto B72f6aa;
case 0x72f6ac:c.instructions+=167;goto B72f6ac;
case 0x72f6af:c.instructions+=166;goto B72f6af;
case 0x72f6b2:c.instructions+=165;goto B72f6b2;
case 0x72f6b4:c.instructions+=164;goto B72f6b4;
case 0x72f6b6:c.instructions+=163;goto B72f6b6;
case 0x72f6b8:c.instructions+=162;goto B72f6b8;
case 0x72f6bb:c.instructions+=161;goto B72f6bb;
case 0x72f6be:c.instructions+=160;goto B72f6be;
case 0x72f6c1:c.instructions+=159;goto B72f6c1;
case 0x72f6c4:c.instructions+=158;goto B72f6c4;
case 0x72f6ca:c.instructions+=157;goto B72f6ca;
case 0x72f6cc:c.instructions+=156;goto B72f6cc;
case 0x72f6ce:c.instructions+=155;goto B72f6ce;
case 0x72f6d1:c.instructions+=154;goto B72f6d1;
case 0x72f6d3:c.instructions+=153;goto B72f6d3;
case 0x72f6d5:c.instructions+=152;goto B72f6d5;
case 0x72f6d7:c.instructions+=151;goto B72f6d7;
case 0x72f6d9:c.instructions+=150;goto B72f6d9;
case 0x72f6dc:c.instructions+=149;goto B72f6dc;
case 0x72f6df:c.instructions+=148;goto B72f6df;
case 0x72f6e2:c.instructions+=147;goto B72f6e2;
case 0x72f6e5:c.instructions+=146;goto B72f6e5;
case 0x72f6eb:c.instructions+=145;goto B72f6eb;
case 0x72f6ed:c.instructions+=144;goto B72f6ed;
case 0x72f6ef:c.instructions+=143;goto B72f6ef;
case 0x72f6f2:c.instructions+=142;goto B72f6f2;
case 0x72f6f4:c.instructions+=141;goto B72f6f4;
case 0x72f6f6:c.instructions+=140;goto B72f6f6;
case 0x72f6f9:c.instructions+=139;goto B72f6f9;
case 0x72f6fb:c.instructions+=138;goto B72f6fb;
case 0x72f6fd:c.instructions+=137;goto B72f6fd;
case 0x72f700:c.instructions+=136;goto B72f700;
case 0x72f703:c.instructions+=135;goto B72f703;
case 0x72f706:c.instructions+=134;goto B72f706;
case 0x72f709:c.instructions+=133;goto B72f709;
case 0x72f70f:c.instructions+=132;goto B72f70f;
case 0x72f711:c.instructions+=131;goto B72f711;
case 0x72f713:c.instructions+=130;goto B72f713;
case 0x72f716:c.instructions+=129;goto B72f716;
case 0x72f718:c.instructions+=128;goto B72f718;
case 0x72f71a:c.instructions+=127;goto B72f71a;
case 0x72f71d:c.instructions+=126;goto B72f71d;
case 0x72f71f:c.instructions+=125;goto B72f71f;
case 0x72f721:c.instructions+=124;goto B72f721;
case 0x72f724:c.instructions+=123;goto B72f724;
case 0x72f727:c.instructions+=122;goto B72f727;
case 0x72f72a:c.instructions+=121;goto B72f72a;
case 0x72f72d:c.instructions+=120;goto B72f72d;
case 0x72f733:c.instructions+=119;goto B72f733;
case 0x72f735:c.instructions+=118;goto B72f735;
case 0x72f737:c.instructions+=117;goto B72f737;
case 0x72f73a:c.instructions+=116;goto B72f73a;
case 0x72f73c:c.instructions+=115;goto B72f73c;
case 0x72f73e:c.instructions+=114;goto B72f73e;
case 0x72f741:c.instructions+=113;goto B72f741;
case 0x72f743:c.instructions+=112;goto B72f743;
case 0x72f745:c.instructions+=111;goto B72f745;
case 0x72f748:c.instructions+=110;goto B72f748;
case 0x72f74a:c.instructions+=109;goto B72f74a;
case 0x72f74c:c.instructions+=108;goto B72f74c;
case 0x72f74f:c.instructions+=107;goto B72f74f;
case 0x72f752:c.instructions+=106;goto B72f752;
case 0x72f755:c.instructions+=105;goto B72f755;
case 0x72f758:c.instructions+=104;goto B72f758;
case 0x72f75b:c.instructions+=103;goto B72f75b;
case 0x72f75e:c.instructions+=102;goto B72f75e;
case 0x72f760:c.instructions+=101;goto B72f760;
case 0x72f763:c.instructions+=100;goto B72f763;
case 0x72f766:c.instructions+=99;goto B72f766;
case 0x72f768:c.instructions+=98;goto B72f768;
case 0x72f76b:c.instructions+=97;goto B72f76b;
case 0x72f76e:c.instructions+=96;goto B72f76e;
case 0x72f771:c.instructions+=95;goto B72f771;
case 0x72f774:c.instructions+=94;goto B72f774;
case 0x72f777:c.instructions+=93;goto B72f777;
case 0x72f77a:c.instructions+=92;goto B72f77a;
case 0x72f77d:c.instructions+=91;goto B72f77d;
case 0x72f780:c.instructions+=90;goto B72f780;
case 0x72f783:c.instructions+=89;goto B72f783;
case 0x72f786:c.instructions+=88;goto B72f786;
case 0x72f789:c.instructions+=87;goto B72f789;
case 0x72f78c:c.instructions+=86;goto B72f78c;
case 0x72f78f:c.instructions+=85;goto B72f78f;
case 0x72f795:c.instructions+=84;goto B72f795;
case 0x72f798:c.instructions+=83;goto B72f798;
case 0x72f79b:c.instructions+=82;goto B72f79b;
case 0x72f7a1:c.instructions+=81;goto B72f7a1;
case 0x72f7a4:c.instructions+=80;goto B72f7a4;
case 0x72f7a7:c.instructions+=79;goto B72f7a7;
case 0x72f7ad:c.instructions+=78;goto B72f7ad;
case 0x72f7b0:c.instructions+=77;goto B72f7b0;
case 0x72f7b3:c.instructions+=76;goto B72f7b3;
case 0x72f7b9:c.instructions+=75;goto B72f7b9;
case 0x72f7bc:c.instructions+=74;goto B72f7bc;
case 0x72f7bf:c.instructions+=73;goto B72f7bf;
case 0x72f7c5:c.instructions+=72;goto B72f7c5;
case 0x72f7c7:c.instructions+=71;goto B72f7c7;
case 0x72f7ca:c.instructions+=70;goto B72f7ca;
case 0x72f7d0:c.instructions+=69;goto B72f7d0;
case 0x72f7d3:c.instructions+=68;goto B72f7d3;
case 0x72f7d9:c.instructions+=67;goto B72f7d9;
case 0x72f7db:c.instructions+=66;goto B72f7db;
case 0x72f7de:c.instructions+=65;goto B72f7de;
case 0x72f7e1:c.instructions+=64;goto B72f7e1;
case 0x72f7e7:c.instructions+=63;goto B72f7e7;
case 0x72f7ea:c.instructions+=62;goto B72f7ea;
case 0x72f7ed:c.instructions+=61;goto B72f7ed;
case 0x72f7f3:c.instructions+=60;goto B72f7f3;
case 0x72f7f6:c.instructions+=59;goto B72f7f6;
case 0x72f7f9:c.instructions+=58;goto B72f7f9;
case 0x72f7ff:c.instructions+=57;goto B72f7ff;
case 0x72f802:c.instructions+=56;goto B72f802;
case 0x72f805:c.instructions+=55;goto B72f805;
case 0x72f80b:c.instructions+=54;goto B72f80b;
case 0x72f80e:c.instructions+=53;goto B72f80e;
case 0x72f811:c.instructions+=52;goto B72f811;
case 0x72f817:c.instructions+=51;goto B72f817;
case 0x72f81a:c.instructions+=50;goto B72f81a;
case 0x72f81d:c.instructions+=49;goto B72f81d;
case 0x72f823:c.instructions+=48;goto B72f823;
case 0x72f826:c.instructions+=47;goto B72f826;
case 0x72f829:c.instructions+=46;goto B72f829;
case 0x72f82f:c.instructions+=45;goto B72f82f;
case 0x72f832:c.instructions+=44;goto B72f832;
case 0x72f835:c.instructions+=43;goto B72f835;
case 0x72f83b:c.instructions+=42;goto B72f83b;
case 0x72f83e:c.instructions+=41;goto B72f83e;
case 0x72f841:c.instructions+=40;goto B72f841;
case 0x72f847:c.instructions+=39;goto B72f847;
case 0x72f84a:c.instructions+=38;goto B72f84a;
case 0x72f84d:c.instructions+=37;goto B72f84d;
case 0x72f853:c.instructions+=36;goto B72f853;
case 0x72f856:c.instructions+=35;goto B72f856;
case 0x72f859:c.instructions+=34;goto B72f859;
case 0x72f85f:c.instructions+=33;goto B72f85f;
case 0x72f862:c.instructions+=32;goto B72f862;
case 0x72f865:c.instructions+=31;goto B72f865;
case 0x72f86b:c.instructions+=30;goto B72f86b;
case 0x72f86e:c.instructions+=29;goto B72f86e;
case 0x72f871:c.instructions+=28;goto B72f871;
case 0x72f877:c.instructions+=27;goto B72f877;
case 0x72f87a:c.instructions+=26;goto B72f87a;
case 0x72f87d:c.instructions+=25;goto B72f87d;
case 0x72f883:c.instructions+=24;goto B72f883;
case 0x72f886:c.instructions+=23;goto B72f886;
case 0x72f889:c.instructions+=22;goto B72f889;
case 0x72f88f:c.instructions+=21;goto B72f88f;
case 0x72f892:c.instructions+=20;goto B72f892;
case 0x72f895:c.instructions+=19;goto B72f895;
case 0x72f89b:c.instructions+=18;goto B72f89b;
case 0x72f89e:c.instructions+=17;goto B72f89e;
case 0x72f8a1:c.instructions+=16;goto B72f8a1;
case 0x72f8a7:c.instructions+=15;goto B72f8a7;
case 0x72f8aa:c.instructions+=14;goto B72f8aa;
case 0x72f8b0:c.instructions+=13;goto B72f8b0;
case 0x72f8b6:c.instructions+=12;goto B72f8b6;
case 0x72f8b9:c.instructions+=11;goto B72f8b9;
case 0x72f8bf:c.instructions+=10;goto B72f8bf;
case 0x72f8c5:c.instructions+=9;goto B72f8c5;
case 0x72f8c8:c.instructions+=8;goto B72f8c8;
case 0x72f8ce:c.instructions+=7;goto B72f8ce;
case 0x72f8d4:c.instructions+=6;goto B72f8d4;
case 0x72f8d7:c.instructions+=5;goto B72f8d7;
case 0x72f8dd:c.instructions+=4;goto B72f8dd;
case 0x72f8e3:c.instructions+=3;goto B72f8e3;
case 0x72f8e6:c.instructions+=2;goto B72f8e6;
case 0x72f8e7:c.instructions+=1;goto B72f8e7;
case 0x72f8e8:goto L72f8e8;
case 0x72f8e9:c.instructions+=19;goto B72f8e9;
case 0x72f8eb:c.instructions+=18;goto B72f8eb;
case 0x72f8ee:c.instructions+=17;goto B72f8ee;
case 0x72f8ef:c.instructions+=16;goto B72f8ef;
case 0x72f8f2:c.instructions+=15;goto B72f8f2;
case 0x72f8f3:c.instructions+=14;goto B72f8f3;
case 0x72f8f5:c.instructions+=13;goto B72f8f5;
case 0x72f8f8:c.instructions+=12;goto B72f8f8;
case 0x72f8fb:c.instructions+=11;goto B72f8fb;
case 0x72f8fc:c.instructions+=10;goto B72f8fc;
case 0x72f8fe:c.instructions+=9;goto B72f8fe;
case 0x72f901:c.instructions+=8;goto B72f901;
case 0x72f903:c.instructions+=7;goto B72f903;
case 0x72f906:c.instructions+=6;goto B72f906;
case 0x72f908:c.instructions+=5;goto B72f908;
case 0x72f90b:c.instructions+=4;goto B72f90b;
case 0x72f90e:c.instructions+=3;goto B72f90e;
case 0x72f911:c.instructions+=2;goto B72f911;
case 0x72f918:c.instructions+=1;goto B72f918;
case 0x72f91a:goto L72f91a;
case 0x72f91d:goto L72f91d;
case 0x72f920:c.instructions+=96;goto B72f920;
case 0x72f923:c.instructions+=95;goto B72f923;
case 0x72f926:c.instructions+=94;goto B72f926;
case 0x72f929:c.instructions+=93;goto B72f929;
case 0x72f92c:c.instructions+=92;goto B72f92c;
case 0x72f92f:c.instructions+=91;goto B72f92f;
case 0x72f932:c.instructions+=90;goto B72f932;
case 0x72f934:c.instructions+=89;goto B72f934;
case 0x72f937:c.instructions+=88;goto B72f937;
case 0x72f93a:c.instructions+=87;goto B72f93a;
case 0x72f93d:c.instructions+=86;goto B72f93d;
case 0x72f93f:c.instructions+=85;goto B72f93f;
case 0x72f942:c.instructions+=84;goto B72f942;
case 0x72f945:c.instructions+=83;goto B72f945;
case 0x72f948:c.instructions+=82;goto B72f948;
case 0x72f94a:c.instructions+=81;goto B72f94a;
case 0x72f94d:c.instructions+=80;goto B72f94d;
case 0x72f950:c.instructions+=79;goto B72f950;
case 0x72f953:c.instructions+=78;goto B72f953;
case 0x72f956:c.instructions+=77;goto B72f956;
case 0x72f959:c.instructions+=76;goto B72f959;
case 0x72f95c:c.instructions+=75;goto B72f95c;
case 0x72f95f:c.instructions+=74;goto B72f95f;
case 0x72f962:c.instructions+=73;goto B72f962;
case 0x72f965:c.instructions+=72;goto B72f965;
case 0x72f968:c.instructions+=71;goto B72f968;
case 0x72f96b:c.instructions+=70;goto B72f96b;
case 0x72f96e:c.instructions+=69;goto B72f96e;
case 0x72f971:c.instructions+=68;goto B72f971;
case 0x72f974:c.instructions+=67;goto B72f974;
case 0x72f977:c.instructions+=66;goto B72f977;
case 0x72f97d:c.instructions+=65;goto B72f97d;
case 0x72f980:c.instructions+=64;goto B72f980;
case 0x72f983:c.instructions+=63;goto B72f983;
case 0x72f989:c.instructions+=62;goto B72f989;
case 0x72f98f:c.instructions+=61;goto B72f98f;
case 0x72f992:c.instructions+=60;goto B72f992;
case 0x72f998:c.instructions+=59;goto B72f998;
case 0x72f99e:c.instructions+=58;goto B72f99e;
case 0x72f9a4:c.instructions+=57;goto B72f9a4;
case 0x72f9aa:c.instructions+=56;goto B72f9aa;
case 0x72f9b0:c.instructions+=55;goto B72f9b0;
case 0x72f9b6:c.instructions+=54;goto B72f9b6;
case 0x72f9bc:c.instructions+=53;goto B72f9bc;
case 0x72f9c2:c.instructions+=52;goto B72f9c2;
case 0x72f9c8:c.instructions+=51;goto B72f9c8;
case 0x72f9ce:c.instructions+=50;goto B72f9ce;
case 0x72f9d4:c.instructions+=49;goto B72f9d4;
case 0x72f9da:c.instructions+=48;goto B72f9da;
case 0x72f9e0:c.instructions+=47;goto B72f9e0;
case 0x72f9e6:c.instructions+=46;goto B72f9e6;
case 0x72f9ec:c.instructions+=45;goto B72f9ec;
case 0x72f9f2:c.instructions+=44;goto B72f9f2;
case 0x72f9f8:c.instructions+=43;goto B72f9f8;
case 0x72f9fe:c.instructions+=42;goto B72f9fe;
case 0x72fa04:c.instructions+=41;goto B72fa04;
case 0x72fa0a:c.instructions+=40;goto B72fa0a;
case 0x72fa0d:c.instructions+=39;goto B72fa0d;
case 0x72fa13:c.instructions+=38;goto B72fa13;
case 0x72fa16:c.instructions+=37;goto B72fa16;
case 0x72fa1c:c.instructions+=36;goto B72fa1c;
case 0x72fa1f:c.instructions+=35;goto B72fa1f;
case 0x72fa25:c.instructions+=34;goto B72fa25;
case 0x72fa28:c.instructions+=33;goto B72fa28;
case 0x72fa2e:c.instructions+=32;goto B72fa2e;
case 0x72fa30:c.instructions+=31;goto B72fa30;
case 0x72fa36:c.instructions+=30;goto B72fa36;
case 0x72fa39:c.instructions+=29;goto B72fa39;
case 0x72fa3f:c.instructions+=28;goto B72fa3f;
case 0x72fa42:c.instructions+=27;goto B72fa42;
case 0x72fa48:c.instructions+=26;goto B72fa48;
case 0x72fa4b:c.instructions+=25;goto B72fa4b;
case 0x72fa51:c.instructions+=24;goto B72fa51;
case 0x72fa54:c.instructions+=23;goto B72fa54;
case 0x72fa5a:c.instructions+=22;goto B72fa5a;
case 0x72fa5d:c.instructions+=21;goto B72fa5d;
case 0x72fa63:c.instructions+=20;goto B72fa63;
case 0x72fa66:c.instructions+=19;goto B72fa66;
case 0x72fa6c:c.instructions+=18;goto B72fa6c;
case 0x72fa6f:c.instructions+=17;goto B72fa6f;
case 0x72fa75:c.instructions+=16;goto B72fa75;
case 0x72fa7b:c.instructions+=15;goto B72fa7b;
case 0x72fa81:c.instructions+=14;goto B72fa81;
case 0x72fa87:c.instructions+=13;goto B72fa87;
case 0x72fa8d:c.instructions+=12;goto B72fa8d;
case 0x72fa93:c.instructions+=11;goto B72fa93;
case 0x72fa99:c.instructions+=10;goto B72fa99;
case 0x72fa9f:c.instructions+=9;goto B72fa9f;
case 0x72faa5:c.instructions+=8;goto B72faa5;
case 0x72faab:c.instructions+=7;goto B72faab;
case 0x72fab1:c.instructions+=6;goto B72fab1;
case 0x72fab7:c.instructions+=5;goto B72fab7;
case 0x72faba:c.instructions+=4;goto B72faba;
case 0x72fabd:c.instructions+=3;goto B72fabd;
case 0x72fac0:c.instructions+=2;goto B72fac0;
case 0x72fac3:c.instructions+=1;goto B72fac3;
case 0x72fac9:goto L72fac9;
case 0x72faca:c.instructions+=4;goto B72faca;
case 0x72facb:c.instructions+=3;goto B72facb;
case 0x72facc:c.instructions+=2;goto B72facc;
case 0x72facd:c.instructions+=1;goto B72facd;
case 0x72face:goto L72face;
case 0x72facf:c.instructions+=8;goto B72facf;
case 0x72fad1:c.instructions+=7;goto B72fad1;
case 0x72fad7:c.instructions+=6;goto B72fad7;
case 0x72fad8:c.instructions+=5;goto B72fad8;
case 0x72fada:c.instructions+=4;goto B72fada;
case 0x72fae1:c.instructions+=3;goto B72fae1;
case 0x72fae2:c.instructions+=2;goto B72fae2;
case 0x72fae3:c.instructions+=1;goto B72fae3;
case 0x72fae5:goto L72fae5;
case 0x72fae9:c.instructions+=4;goto B72fae9;
case 0x72faec:c.instructions+=3;goto B72faec;
case 0x72faef:c.instructions+=2;goto B72faef;
case 0x72faf0:c.instructions+=1;goto B72faf0;
case 0x72faf6:goto L72faf6;
case 0x72faf8:c.instructions+=4;goto B72faf8;
case 0x72fafa:c.instructions+=3;goto B72fafa;
case 0x72fafb:c.instructions+=2;goto B72fafb;
case 0x72fb01:c.instructions+=1;goto B72fb01;
case 0x72fb03:goto L72fb03;
case 0x72fb07:c.instructions+=5;goto B72fb07;
case 0x72fb0a:c.instructions+=4;goto B72fb0a;
case 0x72fb0d:c.instructions+=3;goto B72fb0d;
case 0x72fb0f:c.instructions+=2;goto B72fb0f;
case 0x72fb12:c.instructions+=1;goto B72fb12;
case 0x72fb14:goto L72fb14;
case 0x72fb16:goto L72fb16;
case 0x72fb18:c.instructions+=1;goto B72fb18;
case 0x72fb1b:goto L72fb1b;
case 0x72fb1d:goto L72fb1d;
case 0x72fb1f:goto L72fb1f;
case 0x72fb22:c.instructions+=2;goto B72fb22;
case 0x72fb24:c.instructions+=1;goto B72fb24;
case 0x72fb25:goto L72fb25;
case 0x72fb28:c.instructions+=10;goto B72fb28;
case 0x72fb2b:c.instructions+=9;goto B72fb2b;
case 0x72fb2e:c.instructions+=8;goto B72fb2e;
case 0x72fb31:c.instructions+=7;goto B72fb31;
case 0x72fb34:c.instructions+=6;goto B72fb34;
case 0x72fb37:c.instructions+=5;goto B72fb37;
case 0x72fb3d:c.instructions+=4;goto B72fb3d;
case 0x72fb41:c.instructions+=3;goto B72fb41;
case 0x72fb45:c.instructions+=2;goto B72fb45;
case 0x72fb48:c.instructions+=1;goto B72fb48;
case 0x72fb4a:goto L72fb4a;
case 0x72fb4e:c.instructions+=1;goto B72fb4e;
case 0x72fb50:goto L72fb50;
case 0x72fb53:c.instructions+=4;goto B72fb53;
case 0x72fb58:c.instructions+=3;goto B72fb58;
case 0x72fb5e:c.instructions+=2;goto B72fb5e;
case 0x72fb60:c.instructions+=1;goto B72fb60;
case 0x72fb65:goto L72fb65;
case 0x72fb68:c.instructions+=2;goto B72fb68;
case 0x72fb6e:c.instructions+=1;goto B72fb6e;
case 0x72fb73:goto L72fb73;
case 0x72fb76:c.instructions+=3;goto B72fb76;
case 0x72fb77:c.instructions+=2;goto B72fb77;
case 0x72fb7d:c.instructions+=1;goto B72fb7d;
case 0x72fb82:goto L72fb82;
case 0x72fb85:c.instructions+=3;goto B72fb85;
case 0x72fb86:c.instructions+=2;goto B72fb86;
case 0x72fb8c:c.instructions+=1;goto B72fb8c;
case 0x72fb91:goto L72fb91;
case 0x72fb97:c.instructions+=4;goto B72fb97;
case 0x72fb98:c.instructions+=3;goto B72fb98;
case 0x72fb9a:c.instructions+=2;goto B72fb9a;
case 0x72fb9c:c.instructions+=1;goto B72fb9c;
case 0x72fba1:goto L72fba1;
case 0x72fba4:c.instructions+=4;goto B72fba4;
case 0x72fba6:c.instructions+=3;goto B72fba6;
case 0x72fba9:c.instructions+=2;goto B72fba9;
case 0x72fbaa:c.instructions+=1;goto B72fbaa;
case 0x72fbac:goto L72fbac;
case 0x72fbae:goto L72fbae;
case 0x72fbb2:c.instructions+=3;goto B72fbb2;
case 0x72fbb4:c.instructions+=2;goto B72fbb4;
case 0x72fbb5:c.instructions+=1;goto B72fbb5;
case 0x72fbb7:goto L72fbb7;
case 0x72fbb9:c.instructions+=1;goto B72fbb9;
case 0x72fbbf:goto L72fbbf;
case 0x72fbc2:c.instructions+=7;goto B72fbc2;
case 0x72fbc5:c.instructions+=6;goto B72fbc5;
case 0x72fbc8:c.instructions+=5;goto B72fbc8;
case 0x72fbcb:c.instructions+=4;goto B72fbcb;
case 0x72fbce:c.instructions+=3;goto B72fbce;
case 0x72fbd2:c.instructions+=2;goto B72fbd2;
case 0x72fbd4:c.instructions+=1;goto B72fbd4;
case 0x72fbd9:goto L72fbd9;
case 0x72fbdc:c.instructions+=3;goto B72fbdc;
case 0x72fbdd:c.instructions+=2;goto B72fbdd;
case 0x72fbe3:c.instructions+=1;goto B72fbe3;
case 0x72fbe8:goto L72fbe8;
case 0x72fbeb:c.instructions+=3;goto B72fbeb;
case 0x72fbec:c.instructions+=2;goto B72fbec;
case 0x72fbf2:c.instructions+=1;goto B72fbf2;
case 0x72fbf7:goto L72fbf7;
case 0x72fbf8:c.instructions+=2;goto B72fbf8;
case 0x72fbfe:c.instructions+=1;goto B72fbfe;
case 0x72fc03:goto L72fc03;
case 0x72fc06:c.instructions+=3;goto B72fc06;
case 0x72fc07:c.instructions+=2;goto B72fc07;
case 0x72fc0d:c.instructions+=1;goto B72fc0d;
case 0x72fc12:goto L72fc12;
case 0x72fc18:c.instructions+=4;goto B72fc18;
case 0x72fc19:c.instructions+=3;goto B72fc19;
case 0x72fc1c:c.instructions+=2;goto B72fc1c;
case 0x72fc1f:c.instructions+=1;goto B72fc1f;
case 0x72fc24:goto L72fc24;
case 0x72fc27:c.instructions+=4;goto B72fc27;
case 0x72fc2a:c.instructions+=3;goto B72fc2a;
case 0x72fc2c:c.instructions+=2;goto B72fc2c;
case 0x72fc2d:c.instructions+=1;goto B72fc2d;
case 0x72fc2f:goto L72fc2f;
case 0x72fc31:goto L72fc31;
case 0x72fc33:c.instructions+=1;goto B72fc33;
case 0x72fc35:goto L72fc35;
case 0x72fc38:c.instructions+=6;goto B72fc38;
case 0x72fc3b:c.instructions+=5;goto B72fc3b;
case 0x72fc3e:c.instructions+=4;goto B72fc3e;
case 0x72fc41:c.instructions+=3;goto B72fc41;
case 0x72fc44:c.instructions+=2;goto B72fc44;
case 0x72fc46:c.instructions+=1;goto B72fc46;
case 0x72fc4b:goto L72fc4b;
case 0x72fc4e:c.instructions+=8;goto B72fc4e;
case 0x72fc52:c.instructions+=7;goto B72fc52;
case 0x72fc55:c.instructions+=6;goto B72fc55;
case 0x72fc58:c.instructions+=5;goto B72fc58;
case 0x72fc5e:c.instructions+=4;goto B72fc5e;
case 0x72fc64:c.instructions+=3;goto B72fc64;
case 0x72fc67:c.instructions+=2;goto B72fc67;
case 0x72fc6a:c.instructions+=1;goto B72fc6a;
case 0x72fc71:goto L72fc71;
case 0x72fc74:c.instructions+=2;goto B72fc74;
case 0x72fc77:c.instructions+=1;goto B72fc77;
case 0x72fc7c:goto L72fc7c;
case 0x72fc80:c.instructions+=3;goto B72fc80;
case 0x72fc84:c.instructions+=2;goto B72fc84;
case 0x72fc87:c.instructions+=1;goto B72fc87;
case 0x72fc89:goto L72fc89;
case 0x72fc8c:c.instructions+=5;goto B72fc8c;
case 0x72fc92:c.instructions+=4;goto B72fc92;
case 0x72fc93:c.instructions+=3;goto B72fc93;
case 0x72fc95:c.instructions+=2;goto B72fc95;
case 0x72fc97:c.instructions+=1;goto B72fc97;
case 0x72fc9c:goto L72fc9c;
case 0x72fc9e:c.instructions+=3;goto B72fc9e;
case 0x72fc9f:c.instructions+=2;goto B72fc9f;
case 0x72fca0:c.instructions+=1;goto B72fca0;
case 0x72fca2:goto L72fca2;
case 0x72fca3:c.instructions+=4;goto B72fca3;
case 0x72fca4:c.instructions+=3;goto B72fca4;
case 0x72fca5:c.instructions+=2;goto B72fca5;
case 0x72fca6:c.instructions+=1;goto B72fca6;
case 0x72fca9:goto L72fca9;
case 0x72fcad:c.instructions+=3;goto B72fcad;
case 0x72fcb3:c.instructions+=2;goto B72fcb3;
case 0x72fcb5:c.instructions+=1;goto B72fcb5;
case 0x72fcbb:goto L72fcbb;
case 0x72fcbd:c.instructions+=9;goto B72fcbd;
case 0x72fcc3:c.instructions+=8;goto B72fcc3;
case 0x72fcc4:c.instructions+=7;goto B72fcc4;
case 0x72fcc7:c.instructions+=6;goto B72fcc7;
case 0x72fcc8:c.instructions+=5;goto B72fcc8;
case 0x72fcca:c.instructions+=4;goto B72fcca;
case 0x72fccf:c.instructions+=3;goto B72fccf;
case 0x72fcd1:c.instructions+=2;goto B72fcd1;
case 0x72fcd2:c.instructions+=1;goto B72fcd2;
case 0x72fcd3:goto L72fcd3;
case 0x72fcd6:c.instructions+=65;goto B72fcd6;
case 0x72fcdc:c.instructions+=64;goto B72fcdc;
case 0x72fcde:c.instructions+=63;goto B72fcde;
case 0x72fce1:c.instructions+=62;goto B72fce1;
case 0x72fce3:c.instructions+=61;goto B72fce3;
case 0x72fce5:c.instructions+=60;goto B72fce5;
case 0x72fce7:c.instructions+=59;goto B72fce7;
case 0x72fcea:c.instructions+=58;goto B72fcea;
case 0x72fcec:c.instructions+=57;goto B72fcec;
case 0x72fcef:c.instructions+=56;goto B72fcef;
case 0x72fcf2:c.instructions+=55;goto B72fcf2;
case 0x72fcf4:c.instructions+=54;goto B72fcf4;
case 0x72fcf7:c.instructions+=53;goto B72fcf7;
case 0x72fcfa:c.instructions+=52;goto B72fcfa;
case 0x72fcfc:c.instructions+=51;goto B72fcfc;
case 0x72fcff:c.instructions+=50;goto B72fcff;
case 0x72fd02:c.instructions+=49;goto B72fd02;
case 0x72fd04:c.instructions+=48;goto B72fd04;
case 0x72fd07:c.instructions+=47;goto B72fd07;
case 0x72fd0a:c.instructions+=46;goto B72fd0a;
case 0x72fd0c:c.instructions+=45;goto B72fd0c;
case 0x72fd0f:c.instructions+=44;goto B72fd0f;
case 0x72fd12:c.instructions+=43;goto B72fd12;
case 0x72fd14:c.instructions+=42;goto B72fd14;
case 0x72fd17:c.instructions+=41;goto B72fd17;
case 0x72fd1a:c.instructions+=40;goto B72fd1a;
case 0x72fd1c:c.instructions+=39;goto B72fd1c;
case 0x72fd1f:c.instructions+=38;goto B72fd1f;
case 0x72fd21:c.instructions+=37;goto B72fd21;
case 0x72fd23:c.instructions+=36;goto B72fd23;
case 0x72fd25:c.instructions+=35;goto B72fd25;
case 0x72fd2b:c.instructions+=34;goto B72fd2b;
case 0x72fd2d:c.instructions+=33;goto B72fd2d;
case 0x72fd2f:c.instructions+=32;goto B72fd2f;
case 0x72fd31:c.instructions+=31;goto B72fd31;
case 0x72fd37:c.instructions+=30;goto B72fd37;
case 0x72fd39:c.instructions+=29;goto B72fd39;
case 0x72fd3b:c.instructions+=28;goto B72fd3b;
case 0x72fd3d:c.instructions+=27;goto B72fd3d;
case 0x72fd43:c.instructions+=26;goto B72fd43;
case 0x72fd45:c.instructions+=25;goto B72fd45;
case 0x72fd47:c.instructions+=24;goto B72fd47;
case 0x72fd49:c.instructions+=23;goto B72fd49;
case 0x72fd4f:c.instructions+=22;goto B72fd4f;
case 0x72fd51:c.instructions+=21;goto B72fd51;
case 0x72fd53:c.instructions+=20;goto B72fd53;
case 0x72fd55:c.instructions+=19;goto B72fd55;
case 0x72fd5b:c.instructions+=18;goto B72fd5b;
case 0x72fd5d:c.instructions+=17;goto B72fd5d;
case 0x72fd5f:c.instructions+=16;goto B72fd5f;
case 0x72fd61:c.instructions+=15;goto B72fd61;
case 0x72fd67:c.instructions+=14;goto B72fd67;
case 0x72fd69:c.instructions+=13;goto B72fd69;
case 0x72fd6b:c.instructions+=12;goto B72fd6b;
case 0x72fd6d:c.instructions+=11;goto B72fd6d;
case 0x72fd73:c.instructions+=10;goto B72fd73;
case 0x72fd75:c.instructions+=9;goto B72fd75;
case 0x72fd77:c.instructions+=8;goto B72fd77;
case 0x72fd79:c.instructions+=7;goto B72fd79;
case 0x72fd7f:c.instructions+=6;goto B72fd7f;
case 0x72fd81:c.instructions+=5;goto B72fd81;
case 0x72fd87:c.instructions+=4;goto B72fd87;
case 0x72fd88:c.instructions+=3;goto B72fd88;
case 0x72fd8a:c.instructions+=2;goto B72fd8a;
case 0x72fd8c:c.instructions+=1;goto B72fd8c;
case 0x72fd92:goto L72fd92;
case 0x72fd94:goto L72fd94;
case 0x72fd95:goto L72fd95;
case 0x72fd96:c.instructions+=7;goto B72fd96;
case 0x72fd9a:c.instructions+=6;goto B72fd9a;
case 0x72fda0:c.instructions+=5;goto B72fda0;
case 0x72fda1:c.instructions+=4;goto B72fda1;
case 0x72fda4:c.instructions+=3;goto B72fda4;
case 0x72fdaa:c.instructions+=2;goto B72fdaa;
case 0x72fdac:c.instructions+=1;goto B72fdac;
case 0x72fdb2:goto L72fdb2;
case 0x72fdb5:c.instructions+=169;goto B72fdb5;
case 0x72fdb7:c.instructions+=168;goto B72fdb7;
case 0x72fdba:c.instructions+=167;goto B72fdba;
case 0x72fdbb:c.instructions+=166;goto B72fdbb;
case 0x72fdbe:c.instructions+=165;goto B72fdbe;
case 0x72fdc1:c.instructions+=164;goto B72fdc1;
case 0x72fdc2:c.instructions+=163;goto B72fdc2;
case 0x72fdc8:c.instructions+=162;goto B72fdc8;
case 0x72fdcb:c.instructions+=161;goto B72fdcb;
case 0x72fdcd:c.instructions+=160;goto B72fdcd;
case 0x72fdd0:c.instructions+=159;goto B72fdd0;
case 0x72fdd3:c.instructions+=158;goto B72fdd3;
case 0x72fdd5:c.instructions+=157;goto B72fdd5;
case 0x72fdd8:c.instructions+=156;goto B72fdd8;
case 0x72fdda:c.instructions+=155;goto B72fdda;
case 0x72fddc:c.instructions+=154;goto B72fddc;
case 0x72fddf:c.instructions+=153;goto B72fddf;
case 0x72fde2:c.instructions+=152;goto B72fde2;
case 0x72fde4:c.instructions+=151;goto B72fde4;
case 0x72fde7:c.instructions+=150;goto B72fde7;
case 0x72fde9:c.instructions+=149;goto B72fde9;
case 0x72fdec:c.instructions+=148;goto B72fdec;
case 0x72fdef:c.instructions+=147;goto B72fdef;
case 0x72fdf3:c.instructions+=146;goto B72fdf3;
case 0x72fdf7:c.instructions+=145;goto B72fdf7;
case 0x72fdfa:c.instructions+=144;goto B72fdfa;
case 0x72fdfd:c.instructions+=143;goto B72fdfd;
case 0x72fe01:c.instructions+=142;goto B72fe01;
case 0x72fe05:c.instructions+=141;goto B72fe05;
case 0x72fe08:c.instructions+=140;goto B72fe08;
case 0x72fe0b:c.instructions+=139;goto B72fe0b;
case 0x72fe0f:c.instructions+=138;goto B72fe0f;
case 0x72fe12:c.instructions+=137;goto B72fe12;
case 0x72fe15:c.instructions+=136;goto B72fe15;
case 0x72fe18:c.instructions+=135;goto B72fe18;
case 0x72fe1e:c.instructions+=134;goto B72fe1e;
case 0x72fe22:c.instructions+=133;goto B72fe22;
case 0x72fe26:c.instructions+=132;goto B72fe26;
case 0x72fe2c:c.instructions+=131;goto B72fe2c;
case 0x72fe2e:c.instructions+=130;goto B72fe2e;
case 0x72fe31:c.instructions+=129;goto B72fe31;
case 0x72fe37:c.instructions+=128;goto B72fe37;
case 0x72fe39:c.instructions+=127;goto B72fe39;
case 0x72fe3c:c.instructions+=126;goto B72fe3c;
case 0x72fe42:c.instructions+=125;goto B72fe42;
case 0x72fe44:c.instructions+=124;goto B72fe44;
case 0x72fe47:c.instructions+=123;goto B72fe47;
case 0x72fe4d:c.instructions+=122;goto B72fe4d;
case 0x72fe4f:c.instructions+=121;goto B72fe4f;
case 0x72fe52:c.instructions+=120;goto B72fe52;
case 0x72fe54:c.instructions+=119;goto B72fe54;
case 0x72fe57:c.instructions+=118;goto B72fe57;
case 0x72fe5a:c.instructions+=117;goto B72fe5a;
case 0x72fe5e:c.instructions+=116;goto B72fe5e;
case 0x72fe62:c.instructions+=115;goto B72fe62;
case 0x72fe65:c.instructions+=114;goto B72fe65;
case 0x72fe68:c.instructions+=113;goto B72fe68;
case 0x72fe6c:c.instructions+=112;goto B72fe6c;
case 0x72fe70:c.instructions+=111;goto B72fe70;
case 0x72fe73:c.instructions+=110;goto B72fe73;
case 0x72fe76:c.instructions+=109;goto B72fe76;
case 0x72fe7a:c.instructions+=108;goto B72fe7a;
case 0x72fe7e:c.instructions+=107;goto B72fe7e;
case 0x72fe81:c.instructions+=106;goto B72fe81;
case 0x72fe84:c.instructions+=105;goto B72fe84;
case 0x72fe8a:c.instructions+=104;goto B72fe8a;
case 0x72fe8e:c.instructions+=103;goto B72fe8e;
case 0x72fe92:c.instructions+=102;goto B72fe92;
case 0x72fe98:c.instructions+=101;goto B72fe98;
case 0x72fe9a:c.instructions+=100;goto B72fe9a;
case 0x72fe9d:c.instructions+=99;goto B72fe9d;
case 0x72fea3:c.instructions+=98;goto B72fea3;
case 0x72fea5:c.instructions+=97;goto B72fea5;
case 0x72fea8:c.instructions+=96;goto B72fea8;
case 0x72feae:c.instructions+=95;goto B72feae;
case 0x72feb0:c.instructions+=94;goto B72feb0;
case 0x72feb3:c.instructions+=93;goto B72feb3;
case 0x72feb9:c.instructions+=92;goto B72feb9;
case 0x72febb:c.instructions+=91;goto B72febb;
case 0x72febe:c.instructions+=90;goto B72febe;
case 0x72fec0:c.instructions+=89;goto B72fec0;
case 0x72fec3:c.instructions+=88;goto B72fec3;
case 0x72fec6:c.instructions+=87;goto B72fec6;
case 0x72feca:c.instructions+=86;goto B72feca;
case 0x72fece:c.instructions+=85;goto B72fece;
case 0x72fed1:c.instructions+=84;goto B72fed1;
case 0x72fed4:c.instructions+=83;goto B72fed4;
case 0x72fed8:c.instructions+=82;goto B72fed8;
case 0x72fedc:c.instructions+=81;goto B72fedc;
case 0x72fedf:c.instructions+=80;goto B72fedf;
case 0x72fee2:c.instructions+=79;goto B72fee2;
case 0x72fee6:c.instructions+=78;goto B72fee6;
case 0x72feea:c.instructions+=77;goto B72feea;
case 0x72feed:c.instructions+=76;goto B72feed;
case 0x72fef0:c.instructions+=75;goto B72fef0;
case 0x72fef6:c.instructions+=74;goto B72fef6;
case 0x72fefa:c.instructions+=73;goto B72fefa;
case 0x72fefe:c.instructions+=72;goto B72fefe;
case 0x72ff04:c.instructions+=71;goto B72ff04;
case 0x72ff06:c.instructions+=70;goto B72ff06;
case 0x72ff09:c.instructions+=69;goto B72ff09;
case 0x72ff0f:c.instructions+=68;goto B72ff0f;
case 0x72ff11:c.instructions+=67;goto B72ff11;
case 0x72ff14:c.instructions+=66;goto B72ff14;
case 0x72ff1a:c.instructions+=65;goto B72ff1a;
case 0x72ff1c:c.instructions+=64;goto B72ff1c;
case 0x72ff1f:c.instructions+=63;goto B72ff1f;
case 0x72ff25:c.instructions+=62;goto B72ff25;
case 0x72ff27:c.instructions+=61;goto B72ff27;
case 0x72ff2a:c.instructions+=60;goto B72ff2a;
case 0x72ff2c:c.instructions+=59;goto B72ff2c;
case 0x72ff2f:c.instructions+=58;goto B72ff2f;
case 0x72ff32:c.instructions+=57;goto B72ff32;
case 0x72ff36:c.instructions+=56;goto B72ff36;
case 0x72ff3a:c.instructions+=55;goto B72ff3a;
case 0x72ff3d:c.instructions+=54;goto B72ff3d;
case 0x72ff40:c.instructions+=53;goto B72ff40;
case 0x72ff44:c.instructions+=52;goto B72ff44;
case 0x72ff48:c.instructions+=51;goto B72ff48;
case 0x72ff4b:c.instructions+=50;goto B72ff4b;
case 0x72ff4e:c.instructions+=49;goto B72ff4e;
case 0x72ff52:c.instructions+=48;goto B72ff52;
case 0x72ff56:c.instructions+=47;goto B72ff56;
case 0x72ff59:c.instructions+=46;goto B72ff59;
case 0x72ff5c:c.instructions+=45;goto B72ff5c;
case 0x72ff62:c.instructions+=44;goto B72ff62;
case 0x72ff66:c.instructions+=43;goto B72ff66;
case 0x72ff6a:c.instructions+=42;goto B72ff6a;
case 0x72ff70:c.instructions+=41;goto B72ff70;
case 0x72ff72:c.instructions+=40;goto B72ff72;
case 0x72ff75:c.instructions+=39;goto B72ff75;
case 0x72ff7b:c.instructions+=38;goto B72ff7b;
case 0x72ff7d:c.instructions+=37;goto B72ff7d;
case 0x72ff80:c.instructions+=36;goto B72ff80;
case 0x72ff86:c.instructions+=35;goto B72ff86;
case 0x72ff88:c.instructions+=34;goto B72ff88;
case 0x72ff8b:c.instructions+=33;goto B72ff8b;
case 0x72ff91:c.instructions+=32;goto B72ff91;
case 0x72ff93:c.instructions+=31;goto B72ff93;
case 0x72ff96:c.instructions+=30;goto B72ff96;
case 0x72ff98:c.instructions+=29;goto B72ff98;
case 0x72ff9b:c.instructions+=28;goto B72ff9b;
case 0x72ff9e:c.instructions+=27;goto B72ff9e;
case 0x72ffa2:c.instructions+=26;goto B72ffa2;
case 0x72ffa6:c.instructions+=25;goto B72ffa6;
case 0x72ffa9:c.instructions+=24;goto B72ffa9;
case 0x72ffac:c.instructions+=23;goto B72ffac;
case 0x72ffb0:c.instructions+=22;goto B72ffb0;
case 0x72ffb4:c.instructions+=21;goto B72ffb4;
case 0x72ffb7:c.instructions+=20;goto B72ffb7;
case 0x72ffba:c.instructions+=19;goto B72ffba;
case 0x72ffbe:c.instructions+=18;goto B72ffbe;
case 0x72ffc2:c.instructions+=17;goto B72ffc2;
case 0x72ffc5:c.instructions+=16;goto B72ffc5;
case 0x72ffc8:c.instructions+=15;goto B72ffc8;
case 0x72ffce:c.instructions+=14;goto B72ffce;
case 0x72ffd2:c.instructions+=13;goto B72ffd2;
case 0x72ffd6:c.instructions+=12;goto B72ffd6;
case 0x72ffdc:c.instructions+=11;goto B72ffdc;
case 0x72ffde:c.instructions+=10;goto B72ffde;
case 0x72ffe1:c.instructions+=9;goto B72ffe1;
case 0x72ffe7:c.instructions+=8;goto B72ffe7;
case 0x72ffe9:c.instructions+=7;goto B72ffe9;
case 0x72ffec:c.instructions+=6;goto B72ffec;
case 0x72fff2:c.instructions+=5;goto B72fff2;
case 0x72fff4:c.instructions+=4;goto B72fff4;
case 0x72fff7:c.instructions+=3;goto B72fff7;
case 0x72fffd:c.instructions+=2;goto B72fffd;
case 0x72ffff:c.instructions+=1;goto B72ffff;
default:missing_instruction(c.pc);}
B72f001:L72f001:{c.instructions+=13;NFSU2_TR(0x72f001);
{u32 ea_=u32(u32(8189484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f007:{NFSU2_TR(0x72f007);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72f009:{NFSU2_TR(0x72f009);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f00c:{NFSU2_TR(0x72f00c);
{u32 ea_=u32(u32(8189512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f012:{NFSU2_TR(0x72f012);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f015:{NFSU2_TR(0x72f015);
{u32 ea_=u32(u32(8189504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f01b:{NFSU2_TR(0x72f01b);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B72f01d:{NFSU2_TR(0x72f01d);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f020:{NFSU2_TR(0x72f020);
{u32 ea_=u32(u32(8189496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f026:{NFSU2_TR(0x72f026);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f029:{NFSU2_TR(0x72f029);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f02c:{NFSU2_TR(0x72f02c);
{u32 ea_=u32(u32(8189480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f032:{NFSU2_TR(0x72f032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72f0c4;}}
}
B72f038:L72f038:{c.instructions+=42;NFSU2_TR(0x72f038);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f03b:{NFSU2_TR(0x72f03b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f041:{NFSU2_TR(0x72f041);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f044:{NFSU2_TR(0x72f044);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f047:{NFSU2_TR(0x72f047);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f04a:{NFSU2_TR(0x72f04a);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f04d:{NFSU2_TR(0x72f04d);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f050:{NFSU2_TR(0x72f050);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f052:{NFSU2_TR(0x72f052);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f054:{NFSU2_TR(0x72f054);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f05a:{NFSU2_TR(0x72f05a);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f05d:{NFSU2_TR(0x72f05d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f05f:{NFSU2_TR(0x72f05f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f061:{NFSU2_TR(0x72f061);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f067:{NFSU2_TR(0x72f067);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f069:{NFSU2_TR(0x72f069);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f06b:{NFSU2_TR(0x72f06b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f071:{NFSU2_TR(0x72f071);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f074:{NFSU2_TR(0x72f074);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f076:{NFSU2_TR(0x72f076);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f078:{NFSU2_TR(0x72f078);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f07e:{NFSU2_TR(0x72f07e);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f081:{NFSU2_TR(0x72f081);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f083:{NFSU2_TR(0x72f083);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f085:{NFSU2_TR(0x72f085);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f08b:{NFSU2_TR(0x72f08b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f08e:{NFSU2_TR(0x72f08e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f090:{NFSU2_TR(0x72f090);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f092:{NFSU2_TR(0x72f092);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f098:{NFSU2_TR(0x72f098);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f09b:{NFSU2_TR(0x72f09b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f09d:{NFSU2_TR(0x72f09d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f09f:{NFSU2_TR(0x72f09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0a5:{NFSU2_TR(0x72f0a5);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f0a8:{NFSU2_TR(0x72f0a8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0aa:{NFSU2_TR(0x72f0aa);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0ac:{NFSU2_TR(0x72f0ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0b2:{NFSU2_TR(0x72f0b2);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f0b5:{NFSU2_TR(0x72f0b5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0b7:{NFSU2_TR(0x72f0b7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0b9:{NFSU2_TR(0x72f0b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0bf:{NFSU2_TR(0x72f0bf);
{goto L72f1f0;}
}
B72f0c4:L72f0c4:{c.instructions+=2;NFSU2_TR(0x72f0c4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72f0c7:{NFSU2_TR(0x72f0c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72f161;}}
}
B72f0cd:L72f0cd:{c.instructions+=44;NFSU2_TR(0x72f0cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0d3:{NFSU2_TR(0x72f0d3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0d5:{NFSU2_TR(0x72f0d5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0d7:{NFSU2_TR(0x72f0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0dd:{NFSU2_TR(0x72f0dd);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f0e0:{NFSU2_TR(0x72f0e0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0e2:{NFSU2_TR(0x72f0e2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0e4:{NFSU2_TR(0x72f0e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0ea:{NFSU2_TR(0x72f0ea);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f0ed:{NFSU2_TR(0x72f0ed);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0ef:{NFSU2_TR(0x72f0ef);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0f1:{NFSU2_TR(0x72f0f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f0f7:{NFSU2_TR(0x72f0f7);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f0fa:{NFSU2_TR(0x72f0fa);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f0fc:{NFSU2_TR(0x72f0fc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f0fe:{NFSU2_TR(0x72f0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f104:{NFSU2_TR(0x72f104);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f106:{NFSU2_TR(0x72f106);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f108:{NFSU2_TR(0x72f108);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f10e:{NFSU2_TR(0x72f10e);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f111:{NFSU2_TR(0x72f111);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f113:{NFSU2_TR(0x72f113);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f115:{NFSU2_TR(0x72f115);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f11b:{NFSU2_TR(0x72f11b);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f11e:{NFSU2_TR(0x72f11e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f120:{NFSU2_TR(0x72f120);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f122:{NFSU2_TR(0x72f122);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f128:{NFSU2_TR(0x72f128);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f12b:{NFSU2_TR(0x72f12b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f12d:{NFSU2_TR(0x72f12d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f12f:{NFSU2_TR(0x72f12f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f135:{NFSU2_TR(0x72f135);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f138:{NFSU2_TR(0x72f138);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f13a:{NFSU2_TR(0x72f13a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f13c:{NFSU2_TR(0x72f13c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f142:{NFSU2_TR(0x72f142);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f145:{NFSU2_TR(0x72f145);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f147:{NFSU2_TR(0x72f147);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f149:{NFSU2_TR(0x72f149);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f14f:{NFSU2_TR(0x72f14f);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f152:{NFSU2_TR(0x72f152);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f154:{NFSU2_TR(0x72f154);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f156:{NFSU2_TR(0x72f156);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f15c:{NFSU2_TR(0x72f15c);
{goto L72f1f0;}
}
B72f161:L72f161:{c.instructions+=43;NFSU2_TR(0x72f161);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f167:{NFSU2_TR(0x72f167);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f169:{NFSU2_TR(0x72f169);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f16b:{NFSU2_TR(0x72f16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f171:{NFSU2_TR(0x72f171);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f174:{NFSU2_TR(0x72f174);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f176:{NFSU2_TR(0x72f176);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f178:{NFSU2_TR(0x72f178);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f17e:{NFSU2_TR(0x72f17e);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f181:{NFSU2_TR(0x72f181);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f183:{NFSU2_TR(0x72f183);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f185:{NFSU2_TR(0x72f185);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f18b:{NFSU2_TR(0x72f18b);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f18e:{NFSU2_TR(0x72f18e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f190:{NFSU2_TR(0x72f190);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f192:{NFSU2_TR(0x72f192);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f198:{NFSU2_TR(0x72f198);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f19a:{NFSU2_TR(0x72f19a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f19c:{NFSU2_TR(0x72f19c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1a2:{NFSU2_TR(0x72f1a2);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1a5:{NFSU2_TR(0x72f1a5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1a7:{NFSU2_TR(0x72f1a7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1a9:{NFSU2_TR(0x72f1a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1af:{NFSU2_TR(0x72f1af);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1b2:{NFSU2_TR(0x72f1b2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1b4:{NFSU2_TR(0x72f1b4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1b6:{NFSU2_TR(0x72f1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1bc:{NFSU2_TR(0x72f1bc);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1bf:{NFSU2_TR(0x72f1bf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1c1:{NFSU2_TR(0x72f1c1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1c3:{NFSU2_TR(0x72f1c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1c9:{NFSU2_TR(0x72f1c9);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1cc:{NFSU2_TR(0x72f1cc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1ce:{NFSU2_TR(0x72f1ce);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1d0:{NFSU2_TR(0x72f1d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1d6:{NFSU2_TR(0x72f1d6);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1d9:{NFSU2_TR(0x72f1d9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1db:{NFSU2_TR(0x72f1db);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1dd:{NFSU2_TR(0x72f1dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1e3:{NFSU2_TR(0x72f1e3);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1e6:{NFSU2_TR(0x72f1e6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1e8:{NFSU2_TR(0x72f1e8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1ea:{NFSU2_TR(0x72f1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f1f0:L72f1f0:{c.instructions+=7;NFSU2_TR(0x72f1f0);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f1f3:{NFSU2_TR(0x72f1f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B72f1f6:{NFSU2_TR(0x72f1f6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f1f8:{NFSU2_TR(0x72f1f8);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B72f1fb:{NFSU2_TR(0x72f1fb);
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
B72f1fc:{NFSU2_TR(0x72f1fc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f1fe:{NFSU2_TR(0x72f1fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x72ee93u,72e);}
}
B72f204:L72f204:{c.instructions+=6;NFSU2_TR(0x72f204);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f206:{NFSU2_TR(0x72f206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72f207:{NFSU2_TR(0x72f207);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f209:{NFSU2_TR(0x72f209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72f20a:{NFSU2_TR(0x72f20a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72f20b:{NFSU2_TR(0x72f20b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72f20c:L72f20c:{c.instructions+=485;NFSU2_TR(0x72f20c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72f20d:{NFSU2_TR(0x72f20d);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B72f211:{NFSU2_TR(0x72f211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B72f217:{NFSU2_TR(0x72f217);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f21d:{NFSU2_TR(0x72f21d);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f223:{NFSU2_TR(0x72f223);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f229:{NFSU2_TR(0x72f229);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f22f:{NFSU2_TR(0x72f22f);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f235:{NFSU2_TR(0x72f235);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f23b:{NFSU2_TR(0x72f23b);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f241:{NFSU2_TR(0x72f241);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f247:{NFSU2_TR(0x72f247);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f24d:{NFSU2_TR(0x72f24d);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f253:{NFSU2_TR(0x72f253);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f259:{NFSU2_TR(0x72f259);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f25f:{NFSU2_TR(0x72f25f);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f265:{NFSU2_TR(0x72f265);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f26b:{NFSU2_TR(0x72f26b);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f271:{NFSU2_TR(0x72f271);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f277:{NFSU2_TR(0x72f277);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f27d:{NFSU2_TR(0x72f27d);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f283:{NFSU2_TR(0x72f283);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f289:{NFSU2_TR(0x72f289);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f28f:{NFSU2_TR(0x72f28f);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f295:{NFSU2_TR(0x72f295);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f29b:{NFSU2_TR(0x72f29b);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2a1:{NFSU2_TR(0x72f2a1);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2a7:{NFSU2_TR(0x72f2a7);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2ad:{NFSU2_TR(0x72f2ad);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2b3:{NFSU2_TR(0x72f2b3);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2b9:{NFSU2_TR(0x72f2b9);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2bf:{NFSU2_TR(0x72f2bf);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2c2:{NFSU2_TR(0x72f2c2);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2c8:{NFSU2_TR(0x72f2c8);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2cb:{NFSU2_TR(0x72f2cb);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2ce:{NFSU2_TR(0x72f2ce);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2d1:{NFSU2_TR(0x72f2d1);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2d4:{NFSU2_TR(0x72f2d4);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2d7:{NFSU2_TR(0x72f2d7);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2da:{NFSU2_TR(0x72f2da);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2dd:{NFSU2_TR(0x72f2dd);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2e0:{NFSU2_TR(0x72f2e0);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2e3:{NFSU2_TR(0x72f2e3);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2e6:{NFSU2_TR(0x72f2e6);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2e9:{NFSU2_TR(0x72f2e9);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2ec:{NFSU2_TR(0x72f2ec);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2ef:{NFSU2_TR(0x72f2ef);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2f2:{NFSU2_TR(0x72f2f2);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2f5:{NFSU2_TR(0x72f2f5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f2f8:{NFSU2_TR(0x72f2f8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f2fb:{NFSU2_TR(0x72f2fb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f2fe:{NFSU2_TR(0x72f2fe);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f301:{NFSU2_TR(0x72f301);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f303:{NFSU2_TR(0x72f303);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72f306:{NFSU2_TR(0x72f306);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72f309:{NFSU2_TR(0x72f309);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f30f:{NFSU2_TR(0x72f30f);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f315:{NFSU2_TR(0x72f315);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f31b:{NFSU2_TR(0x72f31b);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f321:{NFSU2_TR(0x72f321);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f327:{NFSU2_TR(0x72f327);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f32d:{NFSU2_TR(0x72f32d);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f333:{NFSU2_TR(0x72f333);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f339:{NFSU2_TR(0x72f339);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f33f:{NFSU2_TR(0x72f33f);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f345:{NFSU2_TR(0x72f345);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f34b:{NFSU2_TR(0x72f34b);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f351:{NFSU2_TR(0x72f351);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f357:{NFSU2_TR(0x72f357);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f35a:{NFSU2_TR(0x72f35a);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f360:{NFSU2_TR(0x72f360);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f363:{NFSU2_TR(0x72f363);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f366:{NFSU2_TR(0x72f366);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f369:{NFSU2_TR(0x72f369);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f36c:{NFSU2_TR(0x72f36c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f36f:{NFSU2_TR(0x72f36f);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f372:{NFSU2_TR(0x72f372);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f375:{NFSU2_TR(0x72f375);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72f378:{NFSU2_TR(0x72f378);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f37a:{NFSU2_TR(0x72f37a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72f37c:{NFSU2_TR(0x72f37c);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72f37f:{NFSU2_TR(0x72f37f);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f385:{NFSU2_TR(0x72f385);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f388:{NFSU2_TR(0x72f388);
{u32 ea_=u32(u32(8189600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f38e:{NFSU2_TR(0x72f38e);
{u32 ea_=u32(u32(8189596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f394:{NFSU2_TR(0x72f394);
{u32 ea_=u32(u32(8189592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f39a:{NFSU2_TR(0x72f39a);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f39d:{NFSU2_TR(0x72f39d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72f39f:{NFSU2_TR(0x72f39f);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3a5:{NFSU2_TR(0x72f3a5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f3a7:{NFSU2_TR(0x72f3a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f3a9:{NFSU2_TR(0x72f3a9);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3af:{NFSU2_TR(0x72f3af);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f3b1:{NFSU2_TR(0x72f3b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f3b3:{NFSU2_TR(0x72f3b3);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f3b6:{NFSU2_TR(0x72f3b6);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f3b9:{NFSU2_TR(0x72f3b9);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3bc:{NFSU2_TR(0x72f3bc);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f3bf:{NFSU2_TR(0x72f3bf);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f3c5:{NFSU2_TR(0x72f3c5);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f3cb:{NFSU2_TR(0x72f3cb);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f3d1:{NFSU2_TR(0x72f3d1);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f3d7:{NFSU2_TR(0x72f3d7);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f3da:{NFSU2_TR(0x72f3da);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3dd:{NFSU2_TR(0x72f3dd);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f3df:{NFSU2_TR(0x72f3df);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72f3e2:{NFSU2_TR(0x72f3e2);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3e8:{NFSU2_TR(0x72f3e8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f3ea:{NFSU2_TR(0x72f3ea);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f3ec:{NFSU2_TR(0x72f3ec);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3f2:{NFSU2_TR(0x72f3f2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f3f4:{NFSU2_TR(0x72f3f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f3f6:{NFSU2_TR(0x72f3f6);
{u32 ea_=u32(r4(R+20)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f3f9:{NFSU2_TR(0x72f3f9);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f3fc:{NFSU2_TR(0x72f3fc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f3fe:{NFSU2_TR(0x72f3fe);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B72f401:{NFSU2_TR(0x72f401);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f407:{NFSU2_TR(0x72f407);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f409:{NFSU2_TR(0x72f409);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f40b:{NFSU2_TR(0x72f40b);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f411:{NFSU2_TR(0x72f411);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f413:{NFSU2_TR(0x72f413);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f415:{NFSU2_TR(0x72f415);
{u32 ea_=u32(r4(R+20)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f418:{NFSU2_TR(0x72f418);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f41a:{NFSU2_TR(0x72f41a);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f41d:{NFSU2_TR(0x72f41d);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f423:{NFSU2_TR(0x72f423);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f429:{NFSU2_TR(0x72f429);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f42f:{NFSU2_TR(0x72f42f);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f432:{NFSU2_TR(0x72f432);
{u32 ea_=u32(u32(8189588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f438:{NFSU2_TR(0x72f438);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f43b:{NFSU2_TR(0x72f43b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72f43d:{NFSU2_TR(0x72f43d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f440:{NFSU2_TR(0x72f440);
{u32 ea_=u32(u32(8189584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f446:{NFSU2_TR(0x72f446);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72f448:{NFSU2_TR(0x72f448);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f44e:{NFSU2_TR(0x72f44e);
{u32 ea_=u32(u32(8189580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f454:{NFSU2_TR(0x72f454);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f456:{NFSU2_TR(0x72f456);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f45c:{NFSU2_TR(0x72f45c);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f462:{NFSU2_TR(0x72f462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f464:{NFSU2_TR(0x72f464);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f467:{NFSU2_TR(0x72f467);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f46a:{NFSU2_TR(0x72f46a);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f470:{NFSU2_TR(0x72f470);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f476:{NFSU2_TR(0x72f476);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f478:{NFSU2_TR(0x72f478);
{u32 ea_=u32(r4(R+20)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f47b:{NFSU2_TR(0x72f47b);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f47e:{NFSU2_TR(0x72f47e);
{u32 ea_=u32(u32(8189580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f484:{NFSU2_TR(0x72f484);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f486:{NFSU2_TR(0x72f486);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f48c:{NFSU2_TR(0x72f48c);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f492:{NFSU2_TR(0x72f492);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f494:{NFSU2_TR(0x72f494);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f49a:{NFSU2_TR(0x72f49a);
{u32 ea_=u32(u32(8189584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f4a0:{NFSU2_TR(0x72f4a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f4a2:{NFSU2_TR(0x72f4a2);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f4a5:{NFSU2_TR(0x72f4a5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4a8:{NFSU2_TR(0x72f4a8);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f4ae:{NFSU2_TR(0x72f4ae);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f4b0:{NFSU2_TR(0x72f4b0);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4b6:{NFSU2_TR(0x72f4b6);
{u32 ea_=u32(u32(8189584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f4bc:{NFSU2_TR(0x72f4bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f4be:{NFSU2_TR(0x72f4be);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4c4:{NFSU2_TR(0x72f4c4);
{u32 ea_=u32(u32(8189580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f4ca:{NFSU2_TR(0x72f4ca);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f4cc:{NFSU2_TR(0x72f4cc);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f4cf:{NFSU2_TR(0x72f4cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f4d1:{NFSU2_TR(0x72f4d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f4d3:{NFSU2_TR(0x72f4d3);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4d6:{NFSU2_TR(0x72f4d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72f4d8:{NFSU2_TR(0x72f4d8);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72f4db:{NFSU2_TR(0x72f4db);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f4e1:{NFSU2_TR(0x72f4e1);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4e4:{NFSU2_TR(0x72f4e4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f4e6:{NFSU2_TR(0x72f4e6);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4ec:{NFSU2_TR(0x72f4ec);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f4ee:{NFSU2_TR(0x72f4ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f4f0:{NFSU2_TR(0x72f4f0);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f4f6:{NFSU2_TR(0x72f4f6);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72f4f8:{NFSU2_TR(0x72f4f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f4fa:{NFSU2_TR(0x72f4fa);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72f4fc:{NFSU2_TR(0x72f4fc);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f4ff:{NFSU2_TR(0x72f4ff);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f502:{NFSU2_TR(0x72f502);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f505:{NFSU2_TR(0x72f505);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f50b:{NFSU2_TR(0x72f50b);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f511:{NFSU2_TR(0x72f511);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f517:{NFSU2_TR(0x72f517);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f51d:{NFSU2_TR(0x72f51d);
{u32 ea_=u32(r4(R+20)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f520:{NFSU2_TR(0x72f520);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f523:{NFSU2_TR(0x72f523);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f525:{NFSU2_TR(0x72f525);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B72f527:{NFSU2_TR(0x72f527);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f52d:{NFSU2_TR(0x72f52d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f52f:{NFSU2_TR(0x72f52f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f531:{NFSU2_TR(0x72f531);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f537:{NFSU2_TR(0x72f537);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f539:{NFSU2_TR(0x72f539);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f53b:{NFSU2_TR(0x72f53b);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f53e:{NFSU2_TR(0x72f53e);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f541:{NFSU2_TR(0x72f541);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f543:{NFSU2_TR(0x72f543);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B72f545:{NFSU2_TR(0x72f545);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f54b:{NFSU2_TR(0x72f54b);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B72f54d:{NFSU2_TR(0x72f54d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f54f:{NFSU2_TR(0x72f54f);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f555:{NFSU2_TR(0x72f555);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f557:{NFSU2_TR(0x72f557);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f559:{NFSU2_TR(0x72f559);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f55c:{NFSU2_TR(0x72f55c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f55e:{NFSU2_TR(0x72f55e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f560:{NFSU2_TR(0x72f560);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f562:{NFSU2_TR(0x72f562);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f564:{NFSU2_TR(0x72f564);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f567:{NFSU2_TR(0x72f567);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f56a:{NFSU2_TR(0x72f56a);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f570:{NFSU2_TR(0x72f570);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f576:{NFSU2_TR(0x72f576);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f57c:{NFSU2_TR(0x72f57c);
{u32 ea_=u32(u32(8189320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f582:{NFSU2_TR(0x72f582);
{u32 ea_=u32(u32(8189588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f588:{NFSU2_TR(0x72f588);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f58b:{NFSU2_TR(0x72f58b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72f58d:{NFSU2_TR(0x72f58d);
{u32 ea_=u32(u32(8189580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f593:{NFSU2_TR(0x72f593);
{u32 ea_=u32(u32(8189584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f599:{NFSU2_TR(0x72f599);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B72f59b:{NFSU2_TR(0x72f59b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72f59d:{NFSU2_TR(0x72f59d);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B72f59f:{NFSU2_TR(0x72f59f);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f5a5:{NFSU2_TR(0x72f5a5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f5a7:{NFSU2_TR(0x72f5a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f5a9:{NFSU2_TR(0x72f5a9);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f5af:{NFSU2_TR(0x72f5af);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f5b5:{NFSU2_TR(0x72f5b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f5b7:{NFSU2_TR(0x72f5b7);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f5ba:{NFSU2_TR(0x72f5ba);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B72f5bc:{NFSU2_TR(0x72f5bc);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f5c2:{NFSU2_TR(0x72f5c2);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f5c8:{NFSU2_TR(0x72f5c8);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72f5ca:{NFSU2_TR(0x72f5ca);
{u32 ea_=u32(r4(R+20)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f5cd:{NFSU2_TR(0x72f5cd);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B72f5cf:{NFSU2_TR(0x72f5cf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f5d1:{NFSU2_TR(0x72f5d1);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B72f5d3:{NFSU2_TR(0x72f5d3);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f5d9:{NFSU2_TR(0x72f5d9);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f5df:{NFSU2_TR(0x72f5df);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f5e1:{NFSU2_TR(0x72f5e1);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f5e7:{NFSU2_TR(0x72f5e7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f5e9:{NFSU2_TR(0x72f5e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f5eb:{NFSU2_TR(0x72f5eb);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f5ee:{NFSU2_TR(0x72f5ee);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B72f5f0:{NFSU2_TR(0x72f5f0);
{u32 ea_=u32(u32(8189576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f5f6:{NFSU2_TR(0x72f5f6);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B72f5f8:{NFSU2_TR(0x72f5f8);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f5fe:{NFSU2_TR(0x72f5fe);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72f600:{NFSU2_TR(0x72f600);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72f602:{NFSU2_TR(0x72f602);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f608:{NFSU2_TR(0x72f608);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72f60a:{NFSU2_TR(0x72f60a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72f60c:{NFSU2_TR(0x72f60c);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f60f:{NFSU2_TR(0x72f60f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f611:{NFSU2_TR(0x72f611);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f613:{NFSU2_TR(0x72f613);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f615:{NFSU2_TR(0x72f615);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f617:{NFSU2_TR(0x72f617);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f61a:{NFSU2_TR(0x72f61a);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f61d:{NFSU2_TR(0x72f61d);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f620:{NFSU2_TR(0x72f620);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f623:{NFSU2_TR(0x72f623);
{u32 ea_=u32(u32(8189572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f629:{NFSU2_TR(0x72f629);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f62b:{NFSU2_TR(0x72f62b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f62d:{NFSU2_TR(0x72f62d);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f630:{NFSU2_TR(0x72f630);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f632:{NFSU2_TR(0x72f632);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f634:{NFSU2_TR(0x72f634);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f637:{NFSU2_TR(0x72f637);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f639:{NFSU2_TR(0x72f639);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f63b:{NFSU2_TR(0x72f63b);
{u32 ea_=u32(r4(R+20)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f63e:{NFSU2_TR(0x72f63e);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f641:{NFSU2_TR(0x72f641);
{u32 ea_=u32(r4(R+20)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f644:{NFSU2_TR(0x72f644);
{u32 ea_=u32(r4(R+20)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f647:{NFSU2_TR(0x72f647);
{u32 ea_=u32(u32(8189540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f64d:{NFSU2_TR(0x72f64d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f64f:{NFSU2_TR(0x72f64f);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f651:{NFSU2_TR(0x72f651);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f654:{NFSU2_TR(0x72f654);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f656:{NFSU2_TR(0x72f656);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f658:{NFSU2_TR(0x72f658);
{u32 ea_=u32(r4(R+20)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f65b:{NFSU2_TR(0x72f65b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f65d:{NFSU2_TR(0x72f65d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f65f:{NFSU2_TR(0x72f65f);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f662:{NFSU2_TR(0x72f662);
{u32 ea_=u32(r4(R+20)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f665:{NFSU2_TR(0x72f665);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f668:{NFSU2_TR(0x72f668);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f66b:{NFSU2_TR(0x72f66b);
{u32 ea_=u32(u32(8189568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f671:{NFSU2_TR(0x72f671);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f673:{NFSU2_TR(0x72f673);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f675:{NFSU2_TR(0x72f675);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f678:{NFSU2_TR(0x72f678);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f67a:{NFSU2_TR(0x72f67a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f67c:{NFSU2_TR(0x72f67c);
{u32 ea_=u32(r4(R+20)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f67f:{NFSU2_TR(0x72f67f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f681:{NFSU2_TR(0x72f681);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f683:{NFSU2_TR(0x72f683);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f686:{NFSU2_TR(0x72f686);
{u32 ea_=u32(r4(R+20)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f689:{NFSU2_TR(0x72f689);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f68c:{NFSU2_TR(0x72f68c);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f68f:{NFSU2_TR(0x72f68f);
{u32 ea_=u32(u32(8189564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f695:{NFSU2_TR(0x72f695);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f697:{NFSU2_TR(0x72f697);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f699:{NFSU2_TR(0x72f699);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f69c:{NFSU2_TR(0x72f69c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f69e:{NFSU2_TR(0x72f69e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f6a0:{NFSU2_TR(0x72f6a0);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f6a3:{NFSU2_TR(0x72f6a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6a5:{NFSU2_TR(0x72f6a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6a7:{NFSU2_TR(0x72f6a7);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6aa:{NFSU2_TR(0x72f6aa);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B72f6ac:{NFSU2_TR(0x72f6ac);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f6af:{NFSU2_TR(0x72f6af);
{u32 ea_=u32(r4(R+20)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6b2:{NFSU2_TR(0x72f6b2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f6b4:{NFSU2_TR(0x72f6b4);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B72f6b6:{NFSU2_TR(0x72f6b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6b8:{NFSU2_TR(0x72f6b8);
{u32 ea_=u32(r4(R+20)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6bb:{NFSU2_TR(0x72f6bb);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f6be:{NFSU2_TR(0x72f6be);
{u32 ea_=u32(r4(R+20)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6c1:{NFSU2_TR(0x72f6c1);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f6c4:{NFSU2_TR(0x72f6c4);
{u32 ea_=u32(u32(8189560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f6ca:{NFSU2_TR(0x72f6ca);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f6cc:{NFSU2_TR(0x72f6cc);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f6ce:{NFSU2_TR(0x72f6ce);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f6d1:{NFSU2_TR(0x72f6d1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f6d3:{NFSU2_TR(0x72f6d3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f6d5:{NFSU2_TR(0x72f6d5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B72f6d7:{NFSU2_TR(0x72f6d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6d9:{NFSU2_TR(0x72f6d9);
{u32 ea_=u32(r4(R+20)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6dc:{NFSU2_TR(0x72f6dc);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f6df:{NFSU2_TR(0x72f6df);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f6e2:{NFSU2_TR(0x72f6e2);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f6e5:{NFSU2_TR(0x72f6e5);
{u32 ea_=u32(u32(8189556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f6eb:{NFSU2_TR(0x72f6eb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f6ed:{NFSU2_TR(0x72f6ed);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f6ef:{NFSU2_TR(0x72f6ef);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f6f2:{NFSU2_TR(0x72f6f2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f6f4:{NFSU2_TR(0x72f6f4);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f6f6:{NFSU2_TR(0x72f6f6);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f6f9:{NFSU2_TR(0x72f6f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6fb:{NFSU2_TR(0x72f6fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f6fd:{NFSU2_TR(0x72f6fd);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f700:{NFSU2_TR(0x72f700);
{u32 ea_=u32(r4(R+20)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f703:{NFSU2_TR(0x72f703);
{u32 ea_=u32(r4(R+20)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f706:{NFSU2_TR(0x72f706);
{u32 ea_=u32(r4(R+20)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f709:{NFSU2_TR(0x72f709);
{u32 ea_=u32(u32(8189544u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f70f:{NFSU2_TR(0x72f70f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f711:{NFSU2_TR(0x72f711);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f713:{NFSU2_TR(0x72f713);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f716:{NFSU2_TR(0x72f716);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f718:{NFSU2_TR(0x72f718);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f71a:{NFSU2_TR(0x72f71a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f71d:{NFSU2_TR(0x72f71d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f71f:{NFSU2_TR(0x72f71f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f721:{NFSU2_TR(0x72f721);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f724:{NFSU2_TR(0x72f724);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f727:{NFSU2_TR(0x72f727);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f72a:{NFSU2_TR(0x72f72a);
{u32 ea_=u32(r4(R+20)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72f72d:{NFSU2_TR(0x72f72d);
{u32 ea_=u32(u32(8189552u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f733:{NFSU2_TR(0x72f733);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f735:{NFSU2_TR(0x72f735);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B72f737:{NFSU2_TR(0x72f737);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f73a:{NFSU2_TR(0x72f73a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f73c:{NFSU2_TR(0x72f73c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72f73e:{NFSU2_TR(0x72f73e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f741:{NFSU2_TR(0x72f741);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f743:{NFSU2_TR(0x72f743);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f745:{NFSU2_TR(0x72f745);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f748:{NFSU2_TR(0x72f748);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f74a:{NFSU2_TR(0x72f74a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f74c:{NFSU2_TR(0x72f74c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f74f:{NFSU2_TR(0x72f74f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f752:{NFSU2_TR(0x72f752);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f755:{NFSU2_TR(0x72f755);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f758:{NFSU2_TR(0x72f758);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f75b:{NFSU2_TR(0x72f75b);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f75e:{NFSU2_TR(0x72f75e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72f760:{NFSU2_TR(0x72f760);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f763:{NFSU2_TR(0x72f763);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f766:{NFSU2_TR(0x72f766);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f768:{NFSU2_TR(0x72f768);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f76b:{NFSU2_TR(0x72f76b);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f76e:{NFSU2_TR(0x72f76e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f771:{NFSU2_TR(0x72f771);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f774:{NFSU2_TR(0x72f774);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f777:{NFSU2_TR(0x72f777);
{u32 ea_=u32(r4(R+20)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f77a:{NFSU2_TR(0x72f77a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f77d:{NFSU2_TR(0x72f77d);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f780:{NFSU2_TR(0x72f780);
{u32 ea_=u32(r4(R+20)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f783:{NFSU2_TR(0x72f783);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f786:{NFSU2_TR(0x72f786);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f789:{NFSU2_TR(0x72f789);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f78c:{NFSU2_TR(0x72f78c);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f78f:{NFSU2_TR(0x72f78f);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f795:{NFSU2_TR(0x72f795);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f798:{NFSU2_TR(0x72f798);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f79b:{NFSU2_TR(0x72f79b);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7a1:{NFSU2_TR(0x72f7a1);
{u32 ea_=u32(r4(R+20)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7a4:{NFSU2_TR(0x72f7a4);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7a7:{NFSU2_TR(0x72f7a7);
{u32 ea_=u32(r4(R+8)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7ad:{NFSU2_TR(0x72f7ad);
{u32 ea_=u32(r4(R+20)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7b0:{NFSU2_TR(0x72f7b0);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7b3:{NFSU2_TR(0x72f7b3);
{u32 ea_=u32(r4(R+8)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7b9:{NFSU2_TR(0x72f7b9);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7bc:{NFSU2_TR(0x72f7bc);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7bf:{NFSU2_TR(0x72f7bf);
{u32 ea_=u32(r4(R+8)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7c5:{NFSU2_TR(0x72f7c5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72f7c7:{NFSU2_TR(0x72f7c7);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7ca:{NFSU2_TR(0x72f7ca);
{u32 ea_=u32(r4(R+8)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7d0:{NFSU2_TR(0x72f7d0);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7d3:{NFSU2_TR(0x72f7d3);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7d9:{NFSU2_TR(0x72f7d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72f7db:{NFSU2_TR(0x72f7db);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7de:{NFSU2_TR(0x72f7de);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7e1:{NFSU2_TR(0x72f7e1);
{u32 ea_=u32(r4(R+8)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7e7:{NFSU2_TR(0x72f7e7);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7ea:{NFSU2_TR(0x72f7ea);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7ed:{NFSU2_TR(0x72f7ed);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7f3:{NFSU2_TR(0x72f7f3);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f7f6:{NFSU2_TR(0x72f7f6);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f7f9:{NFSU2_TR(0x72f7f9);
{u32 ea_=u32(r4(R+8)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f7ff:{NFSU2_TR(0x72f7ff);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f802:{NFSU2_TR(0x72f802);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f805:{NFSU2_TR(0x72f805);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f80b:{NFSU2_TR(0x72f80b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f80e:{NFSU2_TR(0x72f80e);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f811:{NFSU2_TR(0x72f811);
{u32 ea_=u32(r4(R+8)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f817:{NFSU2_TR(0x72f817);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f81a:{NFSU2_TR(0x72f81a);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f81d:{NFSU2_TR(0x72f81d);
{u32 ea_=u32(r4(R+8)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f823:{NFSU2_TR(0x72f823);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f826:{NFSU2_TR(0x72f826);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f829:{NFSU2_TR(0x72f829);
{u32 ea_=u32(r4(R+8)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f82f:{NFSU2_TR(0x72f82f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f832:{NFSU2_TR(0x72f832);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f835:{NFSU2_TR(0x72f835);
{u32 ea_=u32(r4(R+8)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f83b:{NFSU2_TR(0x72f83b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f83e:{NFSU2_TR(0x72f83e);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f841:{NFSU2_TR(0x72f841);
{u32 ea_=u32(r4(R+8)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f847:{NFSU2_TR(0x72f847);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f84a:{NFSU2_TR(0x72f84a);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f84d:{NFSU2_TR(0x72f84d);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f853:{NFSU2_TR(0x72f853);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f856:{NFSU2_TR(0x72f856);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f859:{NFSU2_TR(0x72f859);
{u32 ea_=u32(r4(R+8)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f85f:{NFSU2_TR(0x72f85f);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f862:{NFSU2_TR(0x72f862);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f865:{NFSU2_TR(0x72f865);
{u32 ea_=u32(r4(R+8)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f86b:{NFSU2_TR(0x72f86b);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f86e:{NFSU2_TR(0x72f86e);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f871:{NFSU2_TR(0x72f871);
{u32 ea_=u32(r4(R+8)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f877:{NFSU2_TR(0x72f877);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f87a:{NFSU2_TR(0x72f87a);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f87d:{NFSU2_TR(0x72f87d);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f883:{NFSU2_TR(0x72f883);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f886:{NFSU2_TR(0x72f886);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f889:{NFSU2_TR(0x72f889);
{u32 ea_=u32(r4(R+8)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f88f:{NFSU2_TR(0x72f88f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f892:{NFSU2_TR(0x72f892);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f895:{NFSU2_TR(0x72f895);
{u32 ea_=u32(r4(R+8)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f89b:{NFSU2_TR(0x72f89b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f89e:{NFSU2_TR(0x72f89e);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f8a1:{NFSU2_TR(0x72f8a1);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f8a7:{NFSU2_TR(0x72f8a7);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f8aa:{NFSU2_TR(0x72f8aa);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f8b0:{NFSU2_TR(0x72f8b0);
{u32 ea_=u32(r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f8b6:{NFSU2_TR(0x72f8b6);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f8b9:{NFSU2_TR(0x72f8b9);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f8bf:{NFSU2_TR(0x72f8bf);
{u32 ea_=u32(r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f8c5:{NFSU2_TR(0x72f8c5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f8c8:{NFSU2_TR(0x72f8c8);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f8ce:{NFSU2_TR(0x72f8ce);
{u32 ea_=u32(r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f8d4:{NFSU2_TR(0x72f8d4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f8d7:{NFSU2_TR(0x72f8d7);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72f8dd:{NFSU2_TR(0x72f8dd);
{u32 ea_=u32(r4(R+8)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f8e3:{NFSU2_TR(0x72f8e3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x78ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72f8e6:{NFSU2_TR(0x72f8e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72f8e7:{NFSU2_TR(0x72f8e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72f8e8:L72f8e8:{c.instructions+=20;NFSU2_TR(0x72f8e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72f8e9:{NFSU2_TR(0x72f8e9);
__builtin_memmove((R+20),(R+16),4);
}
B72f8eb:{NFSU2_TR(0x72f8eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72f8ee:{NFSU2_TR(0x72f8ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72f8ef:{NFSU2_TR(0x72f8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72f8f2:{NFSU2_TR(0x72f8f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72f8f3:{NFSU2_TR(0x72f8f3);
__builtin_memmove((R+24),(R+0),4);
}
B72f8f5:{NFSU2_TR(0x72f8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72f8f8:{NFSU2_TR(0x72f8f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72f8fb:{NFSU2_TR(0x72f8fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72f8fc:{NFSU2_TR(0x72f8fc);
__builtin_memmove((R+28),(R+4),4);
}
B72f8fe:{NFSU2_TR(0x72f8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72f901:{NFSU2_TR(0x72f901);
__builtin_memmove((R+12),(R+24),4);
}
B72f903:{NFSU2_TR(0x72f903);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72f906:{NFSU2_TR(0x72f906);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72f908:{NFSU2_TR(0x72f908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B72f90b:{NFSU2_TR(0x72f90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72f90e:{NFSU2_TR(0x72f90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72f911:{NFSU2_TR(0x72f911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72f918:{NFSU2_TR(0x72f918);
{goto L72f91d;}
}
B72f91a:L72f91a:{c.instructions+=1;NFSU2_TR(0x72f91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72f91d:L72f91d:{c.instructions+=97;NFSU2_TR(0x72f91d);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f920:{NFSU2_TR(0x72f920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72f923:{NFSU2_TR(0x72f923);
{u32 ea_=u32(r4(R+4)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f926:{NFSU2_TR(0x72f926);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f929:{NFSU2_TR(0x72f929);
{u32 ea_=u32(r4(R+8)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f92c:{NFSU2_TR(0x72f92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72f92f:{NFSU2_TR(0x72f92f);
{u32 ea_=u32(r4(R+8)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f932:{NFSU2_TR(0x72f932);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f934:{NFSU2_TR(0x72f934);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f937:{NFSU2_TR(0x72f937);
{u32 ea_=u32(r4(R+4)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f93a:{NFSU2_TR(0x72f93a);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f93d:{NFSU2_TR(0x72f93d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f93f:{NFSU2_TR(0x72f93f);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f942:{NFSU2_TR(0x72f942);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f945:{NFSU2_TR(0x72f945);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f948:{NFSU2_TR(0x72f948);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f94a:{NFSU2_TR(0x72f94a);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f94d:{NFSU2_TR(0x72f94d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f950:{NFSU2_TR(0x72f950);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f953:{NFSU2_TR(0x72f953);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f956:{NFSU2_TR(0x72f956);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f959:{NFSU2_TR(0x72f959);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f95c:{NFSU2_TR(0x72f95c);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f95f:{NFSU2_TR(0x72f95f);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f962:{NFSU2_TR(0x72f962);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f965:{NFSU2_TR(0x72f965);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f968:{NFSU2_TR(0x72f968);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f96b:{NFSU2_TR(0x72f96b);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f96e:{NFSU2_TR(0x72f96e);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f971:{NFSU2_TR(0x72f971);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f974:{NFSU2_TR(0x72f974);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f977:{NFSU2_TR(0x72f977);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f97d:{NFSU2_TR(0x72f97d);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f980:{NFSU2_TR(0x72f980);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f983:{NFSU2_TR(0x72f983);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f989:{NFSU2_TR(0x72f989);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f98f:{NFSU2_TR(0x72f98f);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f992:{NFSU2_TR(0x72f992);
{u32 ea_=u32(r4(R+8)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f998:{NFSU2_TR(0x72f998);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f99e:{NFSU2_TR(0x72f99e);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9a4:{NFSU2_TR(0x72f9a4);
{u32 ea_=u32(r4(R+8)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f9aa:{NFSU2_TR(0x72f9aa);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f9b0:{NFSU2_TR(0x72f9b0);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9b6:{NFSU2_TR(0x72f9b6);
{u32 ea_=u32(r4(R+8)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f9bc:{NFSU2_TR(0x72f9bc);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f9c2:{NFSU2_TR(0x72f9c2);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9c8:{NFSU2_TR(0x72f9c8);
{u32 ea_=u32(r4(R+8)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f9ce:{NFSU2_TR(0x72f9ce);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f9d4:{NFSU2_TR(0x72f9d4);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9da:{NFSU2_TR(0x72f9da);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f9e0:{NFSU2_TR(0x72f9e0);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f9e6:{NFSU2_TR(0x72f9e6);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9ec:{NFSU2_TR(0x72f9ec);
{u32 ea_=u32(r4(R+8)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72f9f2:{NFSU2_TR(0x72f9f2);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72f9f8:{NFSU2_TR(0x72f9f8);
{u32 ea_=u32(r4(R+4)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72f9fe:{NFSU2_TR(0x72f9fe);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fa04:{NFSU2_TR(0x72fa04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa0a:{NFSU2_TR(0x72fa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa0d:{NFSU2_TR(0x72fa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa13:{NFSU2_TR(0x72fa13);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B72fa16:{NFSU2_TR(0x72fa16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa1c:{NFSU2_TR(0x72fa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa1f:{NFSU2_TR(0x72fa1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa25:{NFSU2_TR(0x72fa25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B72fa28:{NFSU2_TR(0x72fa28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa2e:{NFSU2_TR(0x72fa2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72fa30:{NFSU2_TR(0x72fa30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa36:{NFSU2_TR(0x72fa36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa39:{NFSU2_TR(0x72fa39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa3f:{NFSU2_TR(0x72fa3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa42:{NFSU2_TR(0x72fa42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa48:{NFSU2_TR(0x72fa48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa4b:{NFSU2_TR(0x72fa4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa51:{NFSU2_TR(0x72fa51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa54:{NFSU2_TR(0x72fa54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa5a:{NFSU2_TR(0x72fa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa5d:{NFSU2_TR(0x72fa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa63:{NFSU2_TR(0x72fa63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa66:{NFSU2_TR(0x72fa66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa6c:{NFSU2_TR(0x72fa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa6f:{NFSU2_TR(0x72fa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa75:{NFSU2_TR(0x72fa75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa7b:{NFSU2_TR(0x72fa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa81:{NFSU2_TR(0x72fa81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa87:{NFSU2_TR(0x72fa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa8d:{NFSU2_TR(0x72fa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa93:{NFSU2_TR(0x72fa93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fa99:{NFSU2_TR(0x72fa99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fa9f:{NFSU2_TR(0x72fa9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72faa5:{NFSU2_TR(0x72faa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72faab:{NFSU2_TR(0x72faab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fab1:{NFSU2_TR(0x72fab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fab7:{NFSU2_TR(0x72fab7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72faba:{NFSU2_TR(0x72faba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72fabd:{NFSU2_TR(0x72fabd);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72fac0:{NFSU2_TR(0x72fac0);
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
B72fac3:{NFSU2_TR(0x72fac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f91au);}goto L72f91a;}}
}
B72fac9:L72fac9:{c.instructions+=5;NFSU2_TR(0x72fac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72faca:{NFSU2_TR(0x72faca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72facb:{NFSU2_TR(0x72facb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72facc:{NFSU2_TR(0x72facc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72facd:{NFSU2_TR(0x72facd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72face:L72face:{c.instructions+=9;NFSU2_TR(0x72face);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72facf:{NFSU2_TR(0x72facf);
__builtin_memmove((R+20),(R+16),4);
}
B72fad1:{NFSU2_TR(0x72fad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x248ull))));
}
B72fad7:{NFSU2_TR(0x72fad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fad8:{NFSU2_TR(0x72fad8);
__builtin_memmove((R+12),(R+4),4);
}
B72fada:{NFSU2_TR(0x72fada);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
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
B72fae1:{NFSU2_TR(0x72fae1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fae2:{NFSU2_TR(0x72fae2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fae3:{NFSU2_TR(0x72fae3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72fb25;}}
}
B72fae5:L72fae5:{c.instructions+=5;NFSU2_TR(0x72fae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72fae9:{NFSU2_TR(0x72fae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72faec:{NFSU2_TR(0x72faec);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B72faef:{NFSU2_TR(0x72faef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72faf0:{NFSU2_TR(0x72faf0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72faf6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72faf6:L72faf6:{c.instructions+=5;NFSU2_TR(0x72faf6);
__builtin_memmove((R+28),(R+0),4);
}
B72faf8:{NFSU2_TR(0x72faf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72fafa:{NFSU2_TR(0x72fafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fafb:{NFSU2_TR(0x72fafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fb01:{NFSU2_TR(0x72fb01);
if(r1(R+518)){{goto L72fb1f;}}
}
B72fb03:L72fb03:{c.instructions+=6;NFSU2_TR(0x72fb03);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72fb07:{NFSU2_TR(0x72fb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72fb0a:{NFSU2_TR(0x72fb0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72fb0d:{NFSU2_TR(0x72fb0d);
__builtin_memmove((R+8),(R+4),4);
}
B72fb0f:{NFSU2_TR(0x72fb0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72fb12:{NFSU2_TR(0x72fb12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72fb14:L72fb14:{c.instructions+=1;NFSU2_TR(0x72fb14);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72fb16;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fb14u);}goto L72fb14;}
}
B72fb16:L72fb16:{c.instructions+=2;NFSU2_TR(0x72fb16);
__builtin_memmove((R+4),(R+8),4);
}
B72fb18:{NFSU2_TR(0x72fb18);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B72fb1b:L72fb1b:{c.instructions+=1;NFSU2_TR(0x72fb1b);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L72fb1d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fb1bu);}goto L72fb1b;}
}
B72fb1d:L72fb1d:{c.instructions+=1;NFSU2_TR(0x72fb1d);
{goto L72fb25;}
}
B72fb1f:L72fb1f:{c.instructions+=3;NFSU2_TR(0x72fb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72fb22:{NFSU2_TR(0x72fb22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72fb24:{NFSU2_TR(0x72fb24);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B72fb25:L72fb25:{c.instructions+=11;NFSU2_TR(0x72fb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fb28:{NFSU2_TR(0x72fb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fb2b:{NFSU2_TR(0x72fb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72fb2e:{NFSU2_TR(0x72fb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72fb31:{NFSU2_TR(0x72fb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72fb34:{NFSU2_TR(0x72fb34);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B72fb37:{NFSU2_TR(0x72fb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B72fb3d:{NFSU2_TR(0x72fb3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72fb41:{NFSU2_TR(0x72fb41);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72fb45:{NFSU2_TR(0x72fb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fb48:{NFSU2_TR(0x72fb48);
if(r1(R+518)){{goto L72fbac;}}
}
B72fb4a:L72fb4a:{c.instructions+=2;NFSU2_TR(0x72fb4a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72fb4e:{NFSU2_TR(0x72fb4e);
if(r1(R+518)){{goto L72fbac;}}
}
B72fb50:L72fb50:{c.instructions+=5;NFSU2_TR(0x72fb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72fb53:{NFSU2_TR(0x72fb53);
w4(R+4,u32(0x7cf330ull));
}
B72fb58:{NFSU2_TR(0x72fb58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fb5e:{NFSU2_TR(0x72fb5e);
__builtin_memmove((R+0),(R+12),4);
}
B72fb60:{NFSU2_TR(0x72fb60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fb65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f20cu);}goto L72f20c;}
}
B72fb65:L72fb65:{c.instructions+=3;NFSU2_TR(0x72fb65);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb68:{NFSU2_TR(0x72fb68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fb6e:{NFSU2_TR(0x72fb6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fb73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f20cu);}goto L72f20c;}
}
B72fb73:L72fb73:{c.instructions+=4;NFSU2_TR(0x72fb73);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb76:{NFSU2_TR(0x72fb76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fb77:{NFSU2_TR(0x72fb77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb7d:{NFSU2_TR(0x72fb7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fb82ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fb82:L72fb82:{c.instructions+=4;NFSU2_TR(0x72fb82);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb85:{NFSU2_TR(0x72fb85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fb86:{NFSU2_TR(0x72fb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb8c:{NFSU2_TR(0x72fb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fb91ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fb91:L72fb91:{c.instructions+=5;NFSU2_TR(0x72fb91);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fb97:{NFSU2_TR(0x72fb97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fb98:{NFSU2_TR(0x72fb98);
__builtin_memmove((R+0),(R+24),4);
}
B72fb9a:{NFSU2_TR(0x72fb9a);
__builtin_memmove((R+4),(R+12),4);
}
B72fb9c:{NFSU2_TR(0x72fb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fba1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f8e8u);}goto L72f8e8;}
}
B72fba1:L72fba1:{c.instructions+=5;NFSU2_TR(0x72fba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fba4:{NFSU2_TR(0x72fba4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72fba6:{NFSU2_TR(0x72fba6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72fba9:{NFSU2_TR(0x72fba9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72fbaa:{NFSU2_TR(0x72fbaa);
{goto L72fbae;}
}
B72fbac:L72fbac:{c.instructions+=1;NFSU2_TR(0x72fbac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72fbae:L72fbae:{c.instructions+=4;NFSU2_TR(0x72fbae);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72fbb2:{NFSU2_TR(0x72fbb2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fbb4:{NFSU2_TR(0x72fbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72fbb5:{NFSU2_TR(0x72fbb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72fc31;}}
}
B72fbb7:L72fbb7:{c.instructions+=2;NFSU2_TR(0x72fbb7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B72fbb9:{NFSU2_TR(0x72fbb9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72fca2;}}
}
B72fbbf:L72fbbf:{c.instructions+=8;NFSU2_TR(0x72fbbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72fbc2:{NFSU2_TR(0x72fbc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72fbc5:{NFSU2_TR(0x72fbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72fbc8:{NFSU2_TR(0x72fbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fbcb:{NFSU2_TR(0x72fbcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72fbce:{NFSU2_TR(0x72fbce);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72fbd2:{NFSU2_TR(0x72fbd2);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B72fbd4:{NFSU2_TR(0x72fbd4);
w4(R+24,u32(0x120ull));
}
B72fbd9:L72fbd9:{c.instructions+=4;NFSU2_TR(0x72fbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fbdc:{NFSU2_TR(0x72fbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fbdd:{NFSU2_TR(0x72fbdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fbe3:{NFSU2_TR(0x72fbe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fbe8ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fbe8:L72fbe8:{c.instructions+=4;NFSU2_TR(0x72fbe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fbeb:{NFSU2_TR(0x72fbeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fbec:{NFSU2_TR(0x72fbec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fbf2:{NFSU2_TR(0x72fbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fbf7ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fbf7:L72fbf7:{c.instructions+=3;NFSU2_TR(0x72fbf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fbf8:{NFSU2_TR(0x72fbf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fbfe:{NFSU2_TR(0x72fbfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fc03ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fc03:L72fc03:{c.instructions+=4;NFSU2_TR(0x72fc03);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fc06:{NFSU2_TR(0x72fc06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fc07:{NFSU2_TR(0x72fc07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fc0d:{NFSU2_TR(0x72fc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fc12ull));
TAIL_STATIC(0x72ee52u,72e);
}
B72fc12:L72fc12:{c.instructions+=5;NFSU2_TR(0x72fc12);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fc18:{NFSU2_TR(0x72fc18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fc19:{NFSU2_TR(0x72fc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fc1c:{NFSU2_TR(0x72fc1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fc1f:{NFSU2_TR(0x72fc1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fc24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f8e8u);}goto L72f8e8;}
}
B72fc24:L72fc24:{c.instructions+=5;NFSU2_TR(0x72fc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B72fc27:{NFSU2_TR(0x72fc27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72fc2a:{NFSU2_TR(0x72fc2a);
w1(R+512,carry<u32>(r4(R+28),r4(R+24)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B72fc2c:{NFSU2_TR(0x72fc2c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72fc2d:{NFSU2_TR(0x72fc2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fbd9u);}goto L72fbd9;}}
}
B72fc2f:L72fc2f:{c.instructions+=1;NFSU2_TR(0x72fc2f);
{goto L72fca2;}
}
B72fc31:L72fc31:{c.instructions+=2;NFSU2_TR(0x72fc31);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B72fc33:{NFSU2_TR(0x72fc33);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72fca2;}}
}
B72fc35:L72fc35:{c.instructions+=7;NFSU2_TR(0x72fc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B72fc38:{NFSU2_TR(0x72fc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72fc3b:{NFSU2_TR(0x72fc3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B72fc3e:{NFSU2_TR(0x72fc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B72fc41:{NFSU2_TR(0x72fc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fc44:{NFSU2_TR(0x72fc44);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B72fc46:{NFSU2_TR(0x72fc46);
w4(R+24,u32(0x120ull));
}
B72fc4b:L72fc4b:{c.instructions+=9;NFSU2_TR(0x72fc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fc4e:{NFSU2_TR(0x72fc4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72fc52:{NFSU2_TR(0x72fc52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72fc55:{NFSU2_TR(0x72fc55);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72fc58:{NFSU2_TR(0x72fc58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fc5e:{NFSU2_TR(0x72fc5e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7cf330ull))));
}
B72fc64:{NFSU2_TR(0x72fc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fc67:{NFSU2_TR(0x72fc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72fc6a:{NFSU2_TR(0x72fc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72fc71:L72fc71:{c.instructions+=3;NFSU2_TR(0x72fc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72fc74:{NFSU2_TR(0x72fc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fc77:{NFSU2_TR(0x72fc77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fc7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f20cu);}goto L72f20c;}
}
B72fc7c:L72fc7c:{c.instructions+=4;NFSU2_TR(0x72fc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72fc80:{NFSU2_TR(0x72fc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72fc84:{NFSU2_TR(0x72fc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72fc87:{NFSU2_TR(0x72fc87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fc71u);}goto L72fc71;}}
}
B72fc89:L72fc89:{c.instructions+=6;NFSU2_TR(0x72fc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fc8c:{NFSU2_TR(0x72fc8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fc92:{NFSU2_TR(0x72fc92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fc93:{NFSU2_TR(0x72fc93);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72fc95:{NFSU2_TR(0x72fc95);
__builtin_memmove((R+4),(R+28),4);
}
B72fc97:{NFSU2_TR(0x72fc97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72fc9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72f8e8u);}goto L72f8e8;}
}
B72fc9c:L72fc9c:{c.instructions+=4;NFSU2_TR(0x72fc9c);
w1(R+512,carry<u32>(r4(R+28),r4(R+24)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B72fc9e:{NFSU2_TR(0x72fc9e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72fc9f:{NFSU2_TR(0x72fc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fca0:{NFSU2_TR(0x72fca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fc4bu);}goto L72fc4b;}}
}
B72fca2:L72fca2:{c.instructions+=5;NFSU2_TR(0x72fca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72fca3:{NFSU2_TR(0x72fca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72fca4:{NFSU2_TR(0x72fca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72fca5:{NFSU2_TR(0x72fca5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72fca6:{NFSU2_TR(0x72fca6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72fca9:L72fca9:{c.instructions+=4;NFSU2_TR(0x72fca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72fcad:{NFSU2_TR(0x72fcad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72fcb3:{NFSU2_TR(0x72fcb3);
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
B72fcb5:{NFSU2_TR(0x72fcb5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72fd94;}}
}
B72fcbb:L72fcbb:{c.instructions+=10;NFSU2_TR(0x72fcbb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72fcbd:{NFSU2_TR(0x72fcbd);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fcc3:{NFSU2_TR(0x72fcc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fcc4:{NFSU2_TR(0x72fcc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fcc7:{NFSU2_TR(0x72fcc7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B72fcc8:{NFSU2_TR(0x72fcc8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72fcca:{NFSU2_TR(0x72fcca);
w4(R+28,u32(0x120ull));
}
B72fccf:{NFSU2_TR(0x72fccf);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72fccf);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72fccf);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72fcd1:{NFSU2_TR(0x72fcd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72fcd2:{NFSU2_TR(0x72fcd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72fcd3:L72fcd3:{c.instructions+=66;NFSU2_TR(0x72fcd3);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fcd6:{NFSU2_TR(0x72fcd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fcdc:{NFSU2_TR(0x72fcdc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fcde:{NFSU2_TR(0x72fcde);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fce1:{NFSU2_TR(0x72fce1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fce3:{NFSU2_TR(0x72fce3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fce5:{NFSU2_TR(0x72fce5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fce7:{NFSU2_TR(0x72fce7);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fcea:{NFSU2_TR(0x72fcea);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fcec:{NFSU2_TR(0x72fcec);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fcef:{NFSU2_TR(0x72fcef);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fcf2:{NFSU2_TR(0x72fcf2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fcf4:{NFSU2_TR(0x72fcf4);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fcf7:{NFSU2_TR(0x72fcf7);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fcfa:{NFSU2_TR(0x72fcfa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fcfc:{NFSU2_TR(0x72fcfc);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fcff:{NFSU2_TR(0x72fcff);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd02:{NFSU2_TR(0x72fd02);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd04:{NFSU2_TR(0x72fd04);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd07:{NFSU2_TR(0x72fd07);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd0a:{NFSU2_TR(0x72fd0a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd0c:{NFSU2_TR(0x72fd0c);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd0f:{NFSU2_TR(0x72fd0f);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd12:{NFSU2_TR(0x72fd12);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd14:{NFSU2_TR(0x72fd14);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd17:{NFSU2_TR(0x72fd17);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd1a:{NFSU2_TR(0x72fd1a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd1c:{NFSU2_TR(0x72fd1c);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd1f:{NFSU2_TR(0x72fd1f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd21:{NFSU2_TR(0x72fd21);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd23:{NFSU2_TR(0x72fd23);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd25:{NFSU2_TR(0x72fd25);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd2b:{NFSU2_TR(0x72fd2b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd2d:{NFSU2_TR(0x72fd2d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd2f:{NFSU2_TR(0x72fd2f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd31:{NFSU2_TR(0x72fd31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd37:{NFSU2_TR(0x72fd37);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd39:{NFSU2_TR(0x72fd39);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd3b:{NFSU2_TR(0x72fd3b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd3d:{NFSU2_TR(0x72fd3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd43:{NFSU2_TR(0x72fd43);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd45:{NFSU2_TR(0x72fd45);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd47:{NFSU2_TR(0x72fd47);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd49:{NFSU2_TR(0x72fd49);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd4f:{NFSU2_TR(0x72fd4f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd51:{NFSU2_TR(0x72fd51);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd53:{NFSU2_TR(0x72fd53);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd55:{NFSU2_TR(0x72fd55);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd5b:{NFSU2_TR(0x72fd5b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd5d:{NFSU2_TR(0x72fd5d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd5f:{NFSU2_TR(0x72fd5f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd61:{NFSU2_TR(0x72fd61);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd67:{NFSU2_TR(0x72fd67);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd69:{NFSU2_TR(0x72fd69);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd6b:{NFSU2_TR(0x72fd6b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd6d:{NFSU2_TR(0x72fd6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd73:{NFSU2_TR(0x72fd73);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd75:{NFSU2_TR(0x72fd75);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd77:{NFSU2_TR(0x72fd77);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd79:{NFSU2_TR(0x72fd79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fd7f:{NFSU2_TR(0x72fd7f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fd81:{NFSU2_TR(0x72fd81);
w1(R+512,carry<u32>(r4(R+4),u32(0x120ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x120ull))));
}
B72fd87:{NFSU2_TR(0x72fd87);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72fd88:{NFSU2_TR(0x72fd88);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fd8a:{NFSU2_TR(0x72fd8a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fd8c:{NFSU2_TR(0x72fd8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72fcd3u);}goto L72fcd3;}}
}
B72fd92:L72fd92:{c.instructions+=1;NFSU2_TR(0x72fd92);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72fd94:L72fd94:{c.instructions+=1;NFSU2_TR(0x72fd94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72fd95:L72fd95:{c.instructions+=8;NFSU2_TR(0x72fd95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fd96:{NFSU2_TR(0x72fd96);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B72fd9a:{NFSU2_TR(0x72fd9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B72fda0:{NFSU2_TR(0x72fda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72fda1:{NFSU2_TR(0x72fda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72fda4:{NFSU2_TR(0x72fda4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72fdaa:{NFSU2_TR(0x72fdaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B72fdac:{NFSU2_TR(0x72fdac);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x730121u,730);}
}
B72fdb2:L72fdb2:{c.instructions+=170;NFSU2_TR(0x72fdb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72fdb5:{NFSU2_TR(0x72fdb5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B72fdb7:{NFSU2_TR(0x72fdb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72fdba:{NFSU2_TR(0x72fdba);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B72fdbb:{NFSU2_TR(0x72fdbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72fdbe:{NFSU2_TR(0x72fdbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72fdc1:{NFSU2_TR(0x72fdc1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72fdc2:{NFSU2_TR(0x72fdc2);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdc8:{NFSU2_TR(0x72fdc8);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdcb:{NFSU2_TR(0x72fdcb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fdcd:{NFSU2_TR(0x72fdcd);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fdd0:{NFSU2_TR(0x72fdd0);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdd3:{NFSU2_TR(0x72fdd3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fdd5:{NFSU2_TR(0x72fdd5);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fdd8:{NFSU2_TR(0x72fdd8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdda:{NFSU2_TR(0x72fdda);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fddc:{NFSU2_TR(0x72fddc);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fddf:{NFSU2_TR(0x72fddf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fde2:{NFSU2_TR(0x72fde2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fde4:{NFSU2_TR(0x72fde4);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fde7:{NFSU2_TR(0x72fde7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72fde9:{NFSU2_TR(0x72fde9);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdec:{NFSU2_TR(0x72fdec);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fdef:{NFSU2_TR(0x72fdef);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fdf3:{NFSU2_TR(0x72fdf3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fdf7:{NFSU2_TR(0x72fdf7);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fdfa:{NFSU2_TR(0x72fdfa);
{u32 ea_=u32(r4(R+20)+u32(92u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fdfd:{NFSU2_TR(0x72fdfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe01:{NFSU2_TR(0x72fe01);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe05:{NFSU2_TR(0x72fe05);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe08:{NFSU2_TR(0x72fe08);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe0b:{NFSU2_TR(0x72fe0b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe0f:{NFSU2_TR(0x72fe0f);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B72fe12:{NFSU2_TR(0x72fe12);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe15:{NFSU2_TR(0x72fe15);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe18:{NFSU2_TR(0x72fe18);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe1e:{NFSU2_TR(0x72fe1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe22:{NFSU2_TR(0x72fe22);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe26:{NFSU2_TR(0x72fe26);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe2c:{NFSU2_TR(0x72fe2c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fe2e:{NFSU2_TR(0x72fe2e);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fe31:{NFSU2_TR(0x72fe31);
{u32 ea_=u32(r4(R+0)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe37:{NFSU2_TR(0x72fe37);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fe39:{NFSU2_TR(0x72fe39);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fe3c:{NFSU2_TR(0x72fe3c);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe42:{NFSU2_TR(0x72fe42);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fe44:{NFSU2_TR(0x72fe44);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fe47:{NFSU2_TR(0x72fe47);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe4d:{NFSU2_TR(0x72fe4d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fe4f:{NFSU2_TR(0x72fe4f);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fe52:{NFSU2_TR(0x72fe52);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72fe54:{NFSU2_TR(0x72fe54);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe57:{NFSU2_TR(0x72fe57);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe5a:{NFSU2_TR(0x72fe5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe5e:{NFSU2_TR(0x72fe5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe62:{NFSU2_TR(0x72fe62);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe65:{NFSU2_TR(0x72fe65);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe68:{NFSU2_TR(0x72fe68);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe6c:{NFSU2_TR(0x72fe6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe70:{NFSU2_TR(0x72fe70);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe73:{NFSU2_TR(0x72fe73);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe76:{NFSU2_TR(0x72fe76);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe7a:{NFSU2_TR(0x72fe7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe7e:{NFSU2_TR(0x72fe7e);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe81:{NFSU2_TR(0x72fe81);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fe84:{NFSU2_TR(0x72fe84);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe8a:{NFSU2_TR(0x72fe8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fe8e:{NFSU2_TR(0x72fe8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fe92:{NFSU2_TR(0x72fe92);
{u32 ea_=u32(r4(R+0)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fe98:{NFSU2_TR(0x72fe98);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fe9a:{NFSU2_TR(0x72fe9a);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fe9d:{NFSU2_TR(0x72fe9d);
{u32 ea_=u32(r4(R+0)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fea3:{NFSU2_TR(0x72fea3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fea5:{NFSU2_TR(0x72fea5);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fea8:{NFSU2_TR(0x72fea8);
{u32 ea_=u32(r4(R+0)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72feae:{NFSU2_TR(0x72feae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72feb0:{NFSU2_TR(0x72feb0);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72feb3:{NFSU2_TR(0x72feb3);
{u32 ea_=u32(r4(R+0)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72feb9:{NFSU2_TR(0x72feb9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72febb:{NFSU2_TR(0x72febb);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72febe:{NFSU2_TR(0x72febe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72fec0:{NFSU2_TR(0x72fec0);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fec3:{NFSU2_TR(0x72fec3);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fec6:{NFSU2_TR(0x72fec6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72feca:{NFSU2_TR(0x72feca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fece:{NFSU2_TR(0x72fece);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fed1:{NFSU2_TR(0x72fed1);
{u32 ea_=u32(r4(R+20)+u32(60u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fed4:{NFSU2_TR(0x72fed4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fed8:{NFSU2_TR(0x72fed8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fedc:{NFSU2_TR(0x72fedc);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fedf:{NFSU2_TR(0x72fedf);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fee2:{NFSU2_TR(0x72fee2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fee6:{NFSU2_TR(0x72fee6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72feea:{NFSU2_TR(0x72feea);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72feed:{NFSU2_TR(0x72feed);
{u32 ea_=u32(r4(R+20)+u32(52u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72fef0:{NFSU2_TR(0x72fef0);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fef6:{NFSU2_TR(0x72fef6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72fefa:{NFSU2_TR(0x72fefa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72fefe:{NFSU2_TR(0x72fefe);
{u32 ea_=u32(r4(R+0)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff04:{NFSU2_TR(0x72ff04);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff06:{NFSU2_TR(0x72ff06);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff09:{NFSU2_TR(0x72ff09);
{u32 ea_=u32(r4(R+0)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff0f:{NFSU2_TR(0x72ff0f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff11:{NFSU2_TR(0x72ff11);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff14:{NFSU2_TR(0x72ff14);
{u32 ea_=u32(r4(R+0)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff1a:{NFSU2_TR(0x72ff1a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff1c:{NFSU2_TR(0x72ff1c);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff1f:{NFSU2_TR(0x72ff1f);
{u32 ea_=u32(r4(R+0)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff25:{NFSU2_TR(0x72ff25);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff27:{NFSU2_TR(0x72ff27);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff2a:{NFSU2_TR(0x72ff2a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ff2c:{NFSU2_TR(0x72ff2c);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff2f:{NFSU2_TR(0x72ff2f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ff32:{NFSU2_TR(0x72ff32);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ff36:{NFSU2_TR(0x72ff36);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ff3a:{NFSU2_TR(0x72ff3a);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff3d:{NFSU2_TR(0x72ff3d);
{u32 ea_=u32(r4(R+20)+u32(44u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ff40:{NFSU2_TR(0x72ff40);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ff44:{NFSU2_TR(0x72ff44);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ff48:{NFSU2_TR(0x72ff48);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff4b:{NFSU2_TR(0x72ff4b);
{u32 ea_=u32(r4(R+20)+u32(100u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ff4e:{NFSU2_TR(0x72ff4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ff52:{NFSU2_TR(0x72ff52);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ff56:{NFSU2_TR(0x72ff56);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff59:{NFSU2_TR(0x72ff59);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ff5c:{NFSU2_TR(0x72ff5c);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff62:{NFSU2_TR(0x72ff62);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ff66:{NFSU2_TR(0x72ff66);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ff6a:{NFSU2_TR(0x72ff6a);
{u32 ea_=u32(r4(R+0)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff70:{NFSU2_TR(0x72ff70);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff72:{NFSU2_TR(0x72ff72);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff75:{NFSU2_TR(0x72ff75);
{u32 ea_=u32(r4(R+0)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff7b:{NFSU2_TR(0x72ff7b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff7d:{NFSU2_TR(0x72ff7d);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff80:{NFSU2_TR(0x72ff80);
{u32 ea_=u32(r4(R+0)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff86:{NFSU2_TR(0x72ff86);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff88:{NFSU2_TR(0x72ff88);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff8b:{NFSU2_TR(0x72ff8b);
{u32 ea_=u32(r4(R+0)+u32(1156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff91:{NFSU2_TR(0x72ff91);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ff93:{NFSU2_TR(0x72ff93);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ff96:{NFSU2_TR(0x72ff96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72ff98:{NFSU2_TR(0x72ff98);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ff9b:{NFSU2_TR(0x72ff9b);
{u32 ea_=u32(r4(R+20)+u32(96u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ff9e:{NFSU2_TR(0x72ff9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ffa2:{NFSU2_TR(0x72ffa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ffa6:{NFSU2_TR(0x72ffa6);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffa9:{NFSU2_TR(0x72ffa9);
{u32 ea_=u32(r4(R+20)+u32(88u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ffac:{NFSU2_TR(0x72ffac);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ffb0:{NFSU2_TR(0x72ffb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ffb4:{NFSU2_TR(0x72ffb4);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffb7:{NFSU2_TR(0x72ffb7);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ffba:{NFSU2_TR(0x72ffba);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ffbe:{NFSU2_TR(0x72ffbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ffc2:{NFSU2_TR(0x72ffc2);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffc5:{NFSU2_TR(0x72ffc5);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B72ffc8:{NFSU2_TR(0x72ffc8);
{u32 ea_=u32(u32(7997468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffce:{NFSU2_TR(0x72ffce);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B72ffd2:{NFSU2_TR(0x72ffd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ffd6:{NFSU2_TR(0x72ffd6);
{u32 ea_=u32(r4(R+0)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffdc:{NFSU2_TR(0x72ffdc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ffde:{NFSU2_TR(0x72ffde);
{u32 ea_=u32(r4(R+20)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ffe1:{NFSU2_TR(0x72ffe1);
{u32 ea_=u32(r4(R+0)+u32(1436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72ffe7:{NFSU2_TR(0x72ffe7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ffe9:{NFSU2_TR(0x72ffe9);
{u32 ea_=u32(r4(R+20)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ffec:{NFSU2_TR(0x72ffec);
{u32 ea_=u32(r4(R+0)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fff2:{NFSU2_TR(0x72fff2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72fff4:{NFSU2_TR(0x72fff4);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72fff7:{NFSU2_TR(0x72fff7);
{u32 ea_=u32(r4(R+0)+u32(1444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72fffd:{NFSU2_TR(0x72fffd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72ffff:{NFSU2_TR(0x72ffff);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x730002u,730);
}
XIT:NFSU2_TR_EXIT(0x72f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
