#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a3(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5a5(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ab,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ab,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 page_5ab(Cpu& c){return body_5ab(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ab(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ab001:goto L5ab001;
case 0x5ab002:c.instructions+=3;goto B5ab002;
case 0x5ab005:c.instructions+=2;goto B5ab005;
case 0x5ab007:c.instructions+=1;goto B5ab007;
case 0x5ab00c:goto L5ab00c;
case 0x5ab00f:c.instructions+=1;goto B5ab00f;
case 0x5ab014:goto L5ab014;
case 0x5ab01a:c.instructions+=9;goto B5ab01a;
case 0x5ab020:c.instructions+=8;goto B5ab020;
case 0x5ab023:c.instructions+=7;goto B5ab023;
case 0x5ab025:c.instructions+=6;goto B5ab025;
case 0x5ab02b:c.instructions+=5;goto B5ab02b;
case 0x5ab031:c.instructions+=4;goto B5ab031;
case 0x5ab037:c.instructions+=3;goto B5ab037;
case 0x5ab03b:c.instructions+=2;goto B5ab03b;
case 0x5ab041:c.instructions+=1;goto B5ab041;
case 0x5ab046:goto L5ab046;
case 0x5ab047:c.instructions+=6;goto B5ab047;
case 0x5ab049:c.instructions+=5;goto B5ab049;
case 0x5ab04d:c.instructions+=4;goto B5ab04d;
case 0x5ab051:c.instructions+=3;goto B5ab051;
case 0x5ab055:c.instructions+=2;goto B5ab055;
case 0x5ab059:c.instructions+=1;goto B5ab059;
case 0x5ab05b:goto L5ab05b;
case 0x5ab05c:c.instructions+=5;goto B5ab05c;
case 0x5ab060:c.instructions+=4;goto B5ab060;
case 0x5ab061:c.instructions+=3;goto B5ab061;
case 0x5ab064:c.instructions+=2;goto B5ab064;
case 0x5ab066:c.instructions+=1;goto B5ab066;
case 0x5ab070:goto L5ab070;
case 0x5ab074:c.instructions+=2;goto B5ab074;
case 0x5ab079:c.instructions+=1;goto B5ab079;
case 0x5ab07e:goto L5ab07e;
case 0x5ab07f:c.instructions+=2;goto B5ab07f;
case 0x5ab081:c.instructions+=1;goto B5ab081;
case 0x5ab086:goto L5ab086;
case 0x5ab089:c.instructions+=4;goto B5ab089;
case 0x5ab08c:c.instructions+=3;goto B5ab08c;
case 0x5ab08d:c.instructions+=2;goto B5ab08d;
case 0x5ab08e:c.instructions+=1;goto B5ab08e;
case 0x5ab093:goto L5ab093;
case 0x5ab096:c.instructions+=2;goto B5ab096;
case 0x5ab097:c.instructions+=1;goto B5ab097;
case 0x5ab099:goto L5ab099;
case 0x5ab09a:c.instructions+=1;goto B5ab09a;
case 0x5ab09b:goto L5ab09b;
case 0x5ab09f:c.instructions+=3;goto B5ab09f;
case 0x5ab0a0:c.instructions+=2;goto B5ab0a0;
case 0x5ab0a2:c.instructions+=1;goto B5ab0a2;
case 0x5ab0a7:goto L5ab0a7;
case 0x5ab0ab:c.instructions+=4;goto B5ab0ab;
case 0x5ab0ac:c.instructions+=3;goto B5ab0ac;
case 0x5ab0ad:c.instructions+=2;goto B5ab0ad;
case 0x5ab0ae:c.instructions+=1;goto B5ab0ae;
case 0x5ab0c0:goto L5ab0c0;
case 0x5ab0c1:c.instructions+=4;goto B5ab0c1;
case 0x5ab0c2:c.instructions+=3;goto B5ab0c2;
case 0x5ab0c3:c.instructions+=2;goto B5ab0c3;
case 0x5ab0c5:c.instructions+=1;goto B5ab0c5;
case 0x5ab0ca:goto L5ab0ca;
case 0x5ab0cd:c.instructions+=9;goto B5ab0cd;
case 0x5ab0d0:c.instructions+=8;goto B5ab0d0;
case 0x5ab0d2:c.instructions+=7;goto B5ab0d2;
case 0x5ab0d5:c.instructions+=6;goto B5ab0d5;
case 0x5ab0d6:c.instructions+=5;goto B5ab0d6;
case 0x5ab0d9:c.instructions+=4;goto B5ab0d9;
case 0x5ab0da:c.instructions+=3;goto B5ab0da;
case 0x5ab0db:c.instructions+=2;goto B5ab0db;
case 0x5ab0dc:c.instructions+=1;goto B5ab0dc;
case 0x5ab0e1:goto L5ab0e1;
case 0x5ab0e4:c.instructions+=5;goto B5ab0e4;
case 0x5ab0e6:c.instructions+=4;goto B5ab0e6;
case 0x5ab0e9:c.instructions+=3;goto B5ab0e9;
case 0x5ab0ec:c.instructions+=2;goto B5ab0ec;
case 0x5ab0ed:c.instructions+=1;goto B5ab0ed;
case 0x5ab0f2:goto L5ab0f2;
case 0x5ab0f4:c.instructions+=1;goto B5ab0f4;
case 0x5ab0f6:goto L5ab0f6;
case 0x5ab0fc:c.instructions+=3;goto B5ab0fc;
case 0x5ab0fe:c.instructions+=2;goto B5ab0fe;
case 0x5ab101:c.instructions+=1;goto B5ab101;
case 0x5ab103:goto L5ab103;
case 0x5ab105:goto L5ab105;
case 0x5ab107:goto L5ab107;
case 0x5ab109:c.instructions+=1;goto B5ab109;
case 0x5ab10e:goto L5ab10e;
case 0x5ab111:c.instructions+=1;goto B5ab111;
case 0x5ab113:goto L5ab113;
case 0x5ab116:c.instructions+=1;goto B5ab116;
case 0x5ab120:goto L5ab120;
case 0x5ab122:c.instructions+=5;goto B5ab122;
case 0x5ab123:c.instructions+=4;goto B5ab123;
case 0x5ab125:c.instructions+=3;goto B5ab125;
case 0x5ab126:c.instructions+=2;goto B5ab126;
case 0x5ab127:c.instructions+=1;goto B5ab127;
case 0x5ab130:goto L5ab130;
case 0x5ab131:c.instructions+=5;goto B5ab131;
case 0x5ab133:c.instructions+=4;goto B5ab133;
case 0x5ab136:c.instructions+=3;goto B5ab136;
case 0x5ab138:c.instructions+=2;goto B5ab138;
case 0x5ab139:c.instructions+=1;goto B5ab139;
case 0x5ab13c:goto L5ab13c;
case 0x5ab13f:c.instructions+=2;goto B5ab13f;
case 0x5ab141:c.instructions+=1;goto B5ab141;
case 0x5ab146:goto L5ab146;
case 0x5ab149:c.instructions+=2;goto B5ab149;
case 0x5ab14b:c.instructions+=1;goto B5ab14b;
case 0x5ab150:goto L5ab150;
case 0x5ab153:c.instructions+=2;goto B5ab153;
case 0x5ab155:c.instructions+=1;goto B5ab155;
case 0x5ab157:goto L5ab157;
case 0x5ab15c:goto L5ab15c;
case 0x5ab15e:c.instructions+=1;goto B5ab15e;
case 0x5ab160:goto L5ab160;
case 0x5ab163:c.instructions+=1;goto B5ab163;
case 0x5ab168:goto L5ab168;
case 0x5ab16a:c.instructions+=1;goto B5ab16a;
case 0x5ab16c:goto L5ab16c;
case 0x5ab16e:c.instructions+=1;goto B5ab16e;
case 0x5ab173:goto L5ab173;
case 0x5ab176:c.instructions+=4;goto B5ab176;
case 0x5ab178:c.instructions+=3;goto B5ab178;
case 0x5ab179:c.instructions+=2;goto B5ab179;
case 0x5ab17a:c.instructions+=1;goto B5ab17a;
case 0x5ab17c:goto L5ab17c;
case 0x5ab181:goto L5ab181;
case 0x5ab190:goto L5ab190;
case 0x5ab191:c.instructions+=3;goto B5ab191;
case 0x5ab192:c.instructions+=2;goto B5ab192;
case 0x5ab194:c.instructions+=1;goto B5ab194;
case 0x5ab199:goto L5ab199;
case 0x5ab19f:c.instructions+=2;goto B5ab19f;
case 0x5ab1a4:c.instructions+=1;goto B5ab1a4;
case 0x5ab1b0:goto L5ab1b0;
case 0x5ab1b6:c.instructions+=4;goto B5ab1b6;
case 0x5ab1bc:c.instructions+=3;goto B5ab1bc;
case 0x5ab1be:c.instructions+=2;goto B5ab1be;
case 0x5ab1c1:c.instructions+=1;goto B5ab1c1;
case 0x5ab1c3:goto L5ab1c3;
case 0x5ab1c9:c.instructions+=5;goto B5ab1c9;
case 0x5ab1cb:c.instructions+=4;goto B5ab1cb;
case 0x5ab1d1:c.instructions+=3;goto B5ab1d1;
case 0x5ab1d3:c.instructions+=2;goto B5ab1d3;
case 0x5ab1d6:c.instructions+=1;goto B5ab1d6;
case 0x5ab1d8:goto L5ab1d8;
case 0x5ab1de:c.instructions+=1;goto B5ab1de;
case 0x5ab1e8:goto L5ab1e8;
case 0x5ab1ee:c.instructions+=4;goto B5ab1ee;
case 0x5ab1f4:c.instructions+=3;goto B5ab1f4;
case 0x5ab1f6:c.instructions+=2;goto B5ab1f6;
case 0x5ab1f9:c.instructions+=1;goto B5ab1f9;
case 0x5ab1fb:goto L5ab1fb;
case 0x5ab201:goto L5ab201;
case 0x5ab204:c.instructions+=2;goto B5ab204;
case 0x5ab205:c.instructions+=1;goto B5ab205;
case 0x5ab207:goto L5ab207;
case 0x5ab20a:c.instructions+=5;goto B5ab20a;
case 0x5ab210:c.instructions+=4;goto B5ab210;
case 0x5ab216:c.instructions+=3;goto B5ab216;
case 0x5ab218:c.instructions+=2;goto B5ab218;
case 0x5ab21b:c.instructions+=1;goto B5ab21b;
case 0x5ab21d:goto L5ab21d;
case 0x5ab220:c.instructions+=5;goto B5ab220;
case 0x5ab223:c.instructions+=4;goto B5ab223;
case 0x5ab229:c.instructions+=3;goto B5ab229;
case 0x5ab22f:c.instructions+=2;goto B5ab22f;
case 0x5ab235:c.instructions+=1;goto B5ab235;
case 0x5ab237:goto L5ab237;
case 0x5ab23d:c.instructions+=4;goto B5ab23d;
case 0x5ab243:c.instructions+=3;goto B5ab243;
case 0x5ab245:c.instructions+=2;goto B5ab245;
case 0x5ab248:c.instructions+=1;goto B5ab248;
case 0x5ab24a:goto L5ab24a;
case 0x5ab24d:c.instructions+=5;goto B5ab24d;
case 0x5ab250:c.instructions+=4;goto B5ab250;
case 0x5ab256:c.instructions+=3;goto B5ab256;
case 0x5ab25c:c.instructions+=2;goto B5ab25c;
case 0x5ab262:c.instructions+=1;goto B5ab262;
case 0x5ab264:goto L5ab264;
case 0x5ab267:c.instructions+=11;goto B5ab267;
case 0x5ab26a:c.instructions+=10;goto B5ab26a;
case 0x5ab270:c.instructions+=9;goto B5ab270;
case 0x5ab276:c.instructions+=8;goto B5ab276;
case 0x5ab27c:c.instructions+=7;goto B5ab27c;
case 0x5ab27f:c.instructions+=6;goto B5ab27f;
case 0x5ab282:c.instructions+=5;goto B5ab282;
case 0x5ab288:c.instructions+=4;goto B5ab288;
case 0x5ab28e:c.instructions+=3;goto B5ab28e;
case 0x5ab294:c.instructions+=2;goto B5ab294;
case 0x5ab296:c.instructions+=1;goto B5ab296;
case 0x5ab29c:goto L5ab29c;
case 0x5ab2a2:c.instructions+=6;goto B5ab2a2;
case 0x5ab2a6:c.instructions+=5;goto B5ab2a6;
case 0x5ab2a9:c.instructions+=4;goto B5ab2a9;
case 0x5ab2ad:c.instructions+=3;goto B5ab2ad;
case 0x5ab2b3:c.instructions+=2;goto B5ab2b3;
case 0x5ab2ba:c.instructions+=1;goto B5ab2ba;
case 0x5ab2c0:goto L5ab2c0;
case 0x5ab2c3:c.instructions+=1;goto B5ab2c3;
case 0x5ab2c5:goto L5ab2c5;
case 0x5ab2cf:goto L5ab2cf;
case 0x5ab2d5:c.instructions+=4;goto B5ab2d5;
case 0x5ab2db:c.instructions+=3;goto B5ab2db;
case 0x5ab2dc:c.instructions+=2;goto B5ab2dc;
case 0x5ab2de:c.instructions+=1;goto B5ab2de;
case 0x5ab2e0:goto L5ab2e0;
case 0x5ab2e6:c.instructions+=4;goto B5ab2e6;
case 0x5ab2ed:c.instructions+=3;goto B5ab2ed;
case 0x5ab2ef:c.instructions+=2;goto B5ab2ef;
case 0x5ab2f2:c.instructions+=1;goto B5ab2f2;
case 0x5ab2f4:goto L5ab2f4;
case 0x5ab2f7:c.instructions+=9;goto B5ab2f7;
case 0x5ab2f9:c.instructions+=8;goto B5ab2f9;
case 0x5ab2fd:c.instructions+=7;goto B5ab2fd;
case 0x5ab303:c.instructions+=6;goto B5ab303;
case 0x5ab30a:c.instructions+=5;goto B5ab30a;
case 0x5ab30c:c.instructions+=4;goto B5ab30c;
case 0x5ab312:c.instructions+=3;goto B5ab312;
case 0x5ab313:c.instructions+=2;goto B5ab313;
case 0x5ab315:c.instructions+=1;goto B5ab315;
case 0x5ab317:goto L5ab317;
case 0x5ab31d:c.instructions+=3;goto B5ab31d;
case 0x5ab31e:c.instructions+=2;goto B5ab31e;
case 0x5ab321:c.instructions+=1;goto B5ab321;
case 0x5ab323:goto L5ab323;
case 0x5ab330:goto L5ab330;
case 0x5ab336:c.instructions+=4;goto B5ab336;
case 0x5ab33d:c.instructions+=3;goto B5ab33d;
case 0x5ab33f:c.instructions+=2;goto B5ab33f;
case 0x5ab342:c.instructions+=1;goto B5ab342;
case 0x5ab344:goto L5ab344;
case 0x5ab347:c.instructions+=8;goto B5ab347;
case 0x5ab349:c.instructions+=7;goto B5ab349;
case 0x5ab34d:c.instructions+=6;goto B5ab34d;
case 0x5ab34f:c.instructions+=5;goto B5ab34f;
case 0x5ab350:c.instructions+=4;goto B5ab350;
case 0x5ab353:c.instructions+=3;goto B5ab353;
case 0x5ab359:c.instructions+=2;goto B5ab359;
case 0x5ab360:c.instructions+=1;goto B5ab360;
case 0x5ab362:goto L5ab362;
case 0x5ab364:goto L5ab364;
case 0x5ab366:c.instructions+=1;goto B5ab366;
case 0x5ab368:goto L5ab368;
case 0x5ab36a:c.instructions+=3;goto B5ab36a;
case 0x5ab370:c.instructions+=2;goto B5ab370;
case 0x5ab374:c.instructions+=1;goto B5ab374;
case 0x5ab37a:goto L5ab37a;
case 0x5ab380:c.instructions+=3;goto B5ab380;
case 0x5ab382:c.instructions+=2;goto B5ab382;
case 0x5ab385:c.instructions+=1;goto B5ab385;
case 0x5ab387:goto L5ab387;
case 0x5ab38d:c.instructions+=5;goto B5ab38d;
case 0x5ab38f:c.instructions+=4;goto B5ab38f;
case 0x5ab395:c.instructions+=3;goto B5ab395;
case 0x5ab396:c.instructions+=2;goto B5ab396;
case 0x5ab397:c.instructions+=1;goto B5ab397;
case 0x5ab398:goto L5ab398;
case 0x5ab39e:c.instructions+=3;goto B5ab39e;
case 0x5ab3a0:c.instructions+=2;goto B5ab3a0;
case 0x5ab3a3:c.instructions+=1;goto B5ab3a3;
case 0x5ab3a5:goto L5ab3a5;
case 0x5ab3ab:c.instructions+=5;goto B5ab3ab;
case 0x5ab3ad:c.instructions+=4;goto B5ab3ad;
case 0x5ab3b3:c.instructions+=3;goto B5ab3b3;
case 0x5ab3b4:c.instructions+=2;goto B5ab3b4;
case 0x5ab3b5:c.instructions+=1;goto B5ab3b5;
case 0x5ab3b6:goto L5ab3b6;
case 0x5ab3bc:c.instructions+=3;goto B5ab3bc;
case 0x5ab3bd:c.instructions+=2;goto B5ab3bd;
case 0x5ab3be:c.instructions+=1;goto B5ab3be;
case 0x5ab3c0:goto L5ab3c0;
case 0x5ab3c1:c.instructions+=14;goto B5ab3c1;
case 0x5ab3c2:c.instructions+=13;goto B5ab3c2;
case 0x5ab3c3:c.instructions+=12;goto B5ab3c3;
case 0x5ab3c4:c.instructions+=11;goto B5ab3c4;
case 0x5ab3c6:c.instructions+=10;goto B5ab3c6;
case 0x5ab3c9:c.instructions+=9;goto B5ab3c9;
case 0x5ab3ce:c.instructions+=8;goto B5ab3ce;
case 0x5ab3d4:c.instructions+=7;goto B5ab3d4;
case 0x5ab3d7:c.instructions+=6;goto B5ab3d7;
case 0x5ab3dd:c.instructions+=5;goto B5ab3dd;
case 0x5ab3e0:c.instructions+=4;goto B5ab3e0;
case 0x5ab3e6:c.instructions+=3;goto B5ab3e6;
case 0x5ab3e8:c.instructions+=2;goto B5ab3e8;
case 0x5ab3ea:c.instructions+=1;goto B5ab3ea;
case 0x5ab3ec:goto L5ab3ec;
case 0x5ab3f2:c.instructions+=4;goto B5ab3f2;
case 0x5ab3f5:c.instructions+=3;goto B5ab3f5;
case 0x5ab3f8:c.instructions+=2;goto B5ab3f8;
case 0x5ab3fe:c.instructions+=1;goto B5ab3fe;
case 0x5ab404:goto L5ab404;
case 0x5ab407:c.instructions+=5;goto B5ab407;
case 0x5ab40a:c.instructions+=4;goto B5ab40a;
case 0x5ab40d:c.instructions+=3;goto B5ab40d;
case 0x5ab40f:c.instructions+=2;goto B5ab40f;
case 0x5ab419:c.instructions+=1;goto B5ab419;
case 0x5ab41e:goto L5ab41e;
case 0x5ab421:c.instructions+=6;goto B5ab421;
case 0x5ab427:c.instructions+=5;goto B5ab427;
case 0x5ab42a:c.instructions+=4;goto B5ab42a;
case 0x5ab430:c.instructions+=3;goto B5ab430;
case 0x5ab433:c.instructions+=2;goto B5ab433;
case 0x5ab435:c.instructions+=1;goto B5ab435;
case 0x5ab438:goto L5ab438;
case 0x5ab43b:c.instructions+=10;goto B5ab43b;
case 0x5ab441:c.instructions+=9;goto B5ab441;
case 0x5ab444:c.instructions+=8;goto B5ab444;
case 0x5ab44a:c.instructions+=7;goto B5ab44a;
case 0x5ab450:c.instructions+=6;goto B5ab450;
case 0x5ab456:c.instructions+=5;goto B5ab456;
case 0x5ab45a:c.instructions+=4;goto B5ab45a;
case 0x5ab45e:c.instructions+=3;goto B5ab45e;
case 0x5ab460:c.instructions+=2;goto B5ab460;
case 0x5ab463:c.instructions+=1;goto B5ab463;
case 0x5ab465:goto L5ab465;
case 0x5ab467:c.instructions+=1;goto B5ab467;
case 0x5ab46b:goto L5ab46b;
case 0x5ab46e:c.instructions+=29;goto B5ab46e;
case 0x5ab474:c.instructions+=28;goto B5ab474;
case 0x5ab477:c.instructions+=27;goto B5ab477;
case 0x5ab47d:c.instructions+=26;goto B5ab47d;
case 0x5ab480:c.instructions+=25;goto B5ab480;
case 0x5ab483:c.instructions+=24;goto B5ab483;
case 0x5ab486:c.instructions+=23;goto B5ab486;
case 0x5ab48c:c.instructions+=22;goto B5ab48c;
case 0x5ab48f:c.instructions+=21;goto B5ab48f;
case 0x5ab491:c.instructions+=20;goto B5ab491;
case 0x5ab497:c.instructions+=19;goto B5ab497;
case 0x5ab49a:c.instructions+=18;goto B5ab49a;
case 0x5ab49d:c.instructions+=17;goto B5ab49d;
case 0x5ab4a2:c.instructions+=16;goto B5ab4a2;
case 0x5ab4a4:c.instructions+=15;goto B5ab4a4;
case 0x5ab4a7:c.instructions+=14;goto B5ab4a7;
case 0x5ab4aa:c.instructions+=13;goto B5ab4aa;
case 0x5ab4ad:c.instructions+=12;goto B5ab4ad;
case 0x5ab4b0:c.instructions+=11;goto B5ab4b0;
case 0x5ab4b6:c.instructions+=10;goto B5ab4b6;
case 0x5ab4b9:c.instructions+=9;goto B5ab4b9;
case 0x5ab4bc:c.instructions+=8;goto B5ab4bc;
case 0x5ab4bf:c.instructions+=7;goto B5ab4bf;
case 0x5ab4c0:c.instructions+=6;goto B5ab4c0;
case 0x5ab4c4:c.instructions+=5;goto B5ab4c4;
case 0x5ab4c5:c.instructions+=4;goto B5ab4c5;
case 0x5ab4c6:c.instructions+=3;goto B5ab4c6;
case 0x5ab4c9:c.instructions+=2;goto B5ab4c9;
case 0x5ab4ca:c.instructions+=1;goto B5ab4ca;
case 0x5ab4cf:goto L5ab4cf;
case 0x5ab4d3:c.instructions+=3;goto B5ab4d3;
case 0x5ab4d9:c.instructions+=2;goto B5ab4d9;
case 0x5ab4df:c.instructions+=1;goto B5ab4df;
case 0x5ab4e4:goto L5ab4e4;
case 0x5ab4e5:c.instructions+=6;goto B5ab4e5;
case 0x5ab4e7:c.instructions+=5;goto B5ab4e7;
case 0x5ab4eb:c.instructions+=4;goto B5ab4eb;
case 0x5ab4ef:c.instructions+=3;goto B5ab4ef;
case 0x5ab4f3:c.instructions+=2;goto B5ab4f3;
case 0x5ab4f7:c.instructions+=1;goto B5ab4f7;
case 0x5ab4f9:goto L5ab4f9;
case 0x5ab4fd:c.instructions+=3;goto B5ab4fd;
case 0x5ab4fe:c.instructions+=2;goto B5ab4fe;
case 0x5ab501:c.instructions+=1;goto B5ab501;
case 0x5ab503:goto L5ab503;
case 0x5ab507:c.instructions+=4;goto B5ab507;
case 0x5ab508:c.instructions+=3;goto B5ab508;
case 0x5ab50a:c.instructions+=2;goto B5ab50a;
case 0x5ab50f:c.instructions+=1;goto B5ab50f;
case 0x5ab514:goto L5ab514;
case 0x5ab517:c.instructions+=4;goto B5ab517;
case 0x5ab51a:c.instructions+=3;goto B5ab51a;
case 0x5ab51b:c.instructions+=2;goto B5ab51b;
case 0x5ab51c:c.instructions+=1;goto B5ab51c;
case 0x5ab521:goto L5ab521;
case 0x5ab524:c.instructions+=2;goto B5ab524;
case 0x5ab525:c.instructions+=1;goto B5ab525;
case 0x5ab527:goto L5ab527;
case 0x5ab528:goto L5ab528;
case 0x5ab52c:c.instructions+=3;goto B5ab52c;
case 0x5ab52d:c.instructions+=2;goto B5ab52d;
case 0x5ab52f:c.instructions+=1;goto B5ab52f;
case 0x5ab534:goto L5ab534;
case 0x5ab538:c.instructions+=5;goto B5ab538;
case 0x5ab539:c.instructions+=4;goto B5ab539;
case 0x5ab53a:c.instructions+=3;goto B5ab53a;
case 0x5ab53b:c.instructions+=2;goto B5ab53b;
case 0x5ab53c:c.instructions+=1;goto B5ab53c;
case 0x5ab540:goto L5ab540;
case 0x5ab541:c.instructions+=18;goto B5ab541;
case 0x5ab543:c.instructions+=17;goto B5ab543;
case 0x5ab546:c.instructions+=16;goto B5ab546;
case 0x5ab54c:c.instructions+=15;goto B5ab54c;
case 0x5ab54d:c.instructions+=14;goto B5ab54d;
case 0x5ab54e:c.instructions+=13;goto B5ab54e;
case 0x5ab550:c.instructions+=12;goto B5ab550;
case 0x5ab556:c.instructions+=11;goto B5ab556;
case 0x5ab55a:c.instructions+=10;goto B5ab55a;
case 0x5ab55d:c.instructions+=9;goto B5ab55d;
case 0x5ab563:c.instructions+=8;goto B5ab563;
case 0x5ab569:c.instructions+=7;goto B5ab569;
case 0x5ab56a:c.instructions+=6;goto B5ab56a;
case 0x5ab56c:c.instructions+=5;goto B5ab56c;
case 0x5ab573:c.instructions+=4;goto B5ab573;
case 0x5ab577:c.instructions+=3;goto B5ab577;
case 0x5ab57b:c.instructions+=2;goto B5ab57b;
case 0x5ab57f:c.instructions+=1;goto B5ab57f;
case 0x5ab580:goto L5ab580;
case 0x5ab583:c.instructions+=28;goto B5ab583;
case 0x5ab589:c.instructions+=27;goto B5ab589;
case 0x5ab58c:c.instructions+=26;goto B5ab58c;
case 0x5ab58e:c.instructions+=25;goto B5ab58e;
case 0x5ab592:c.instructions+=24;goto B5ab592;
case 0x5ab598:c.instructions+=23;goto B5ab598;
case 0x5ab59b:c.instructions+=22;goto B5ab59b;
case 0x5ab59d:c.instructions+=21;goto B5ab59d;
case 0x5ab5a1:c.instructions+=20;goto B5ab5a1;
case 0x5ab5a7:c.instructions+=19;goto B5ab5a7;
case 0x5ab5a9:c.instructions+=18;goto B5ab5a9;
case 0x5ab5ad:c.instructions+=17;goto B5ab5ad;
case 0x5ab5af:c.instructions+=16;goto B5ab5af;
case 0x5ab5b2:c.instructions+=15;goto B5ab5b2;
case 0x5ab5b6:c.instructions+=14;goto B5ab5b6;
case 0x5ab5b9:c.instructions+=13;goto B5ab5b9;
case 0x5ab5bd:c.instructions+=12;goto B5ab5bd;
case 0x5ab5c1:c.instructions+=11;goto B5ab5c1;
case 0x5ab5c2:c.instructions+=10;goto B5ab5c2;
case 0x5ab5c3:c.instructions+=9;goto B5ab5c3;
case 0x5ab5ca:c.instructions+=8;goto B5ab5ca;
case 0x5ab5d1:c.instructions+=7;goto B5ab5d1;
case 0x5ab5d3:c.instructions+=6;goto B5ab5d3;
case 0x5ab5d7:c.instructions+=5;goto B5ab5d7;
case 0x5ab5db:c.instructions+=4;goto B5ab5db;
case 0x5ab5df:c.instructions+=3;goto B5ab5df;
case 0x5ab5e0:c.instructions+=2;goto B5ab5e0;
case 0x5ab5e4:c.instructions+=1;goto B5ab5e4;
case 0x5ab5e9:goto L5ab5e9;
case 0x5ab5ed:c.instructions+=7;goto B5ab5ed;
case 0x5ab5f1:c.instructions+=6;goto B5ab5f1;
case 0x5ab5f4:c.instructions+=5;goto B5ab5f4;
case 0x5ab5f7:c.instructions+=4;goto B5ab5f7;
case 0x5ab5f9:c.instructions+=3;goto B5ab5f9;
case 0x5ab5fc:c.instructions+=2;goto B5ab5fc;
case 0x5ab5fe:c.instructions+=1;goto B5ab5fe;
case 0x5ab604:goto L5ab604;
case 0x5ab607:c.instructions+=13;goto B5ab607;
case 0x5ab60b:c.instructions+=12;goto B5ab60b;
case 0x5ab611:c.instructions+=11;goto B5ab611;
case 0x5ab614:c.instructions+=10;goto B5ab614;
case 0x5ab617:c.instructions+=9;goto B5ab617;
case 0x5ab618:c.instructions+=8;goto B5ab618;
case 0x5ab61e:c.instructions+=7;goto B5ab61e;
case 0x5ab61f:c.instructions+=6;goto B5ab61f;
case 0x5ab623:c.instructions+=5;goto B5ab623;
case 0x5ab627:c.instructions+=4;goto B5ab627;
case 0x5ab62d:c.instructions+=3;goto B5ab62d;
case 0x5ab633:c.instructions+=2;goto B5ab633;
case 0x5ab637:c.instructions+=1;goto B5ab637;
case 0x5ab63c:goto L5ab63c;
case 0x5ab63f:c.instructions+=7;goto B5ab63f;
case 0x5ab643:c.instructions+=6;goto B5ab643;
case 0x5ab646:c.instructions+=5;goto B5ab646;
case 0x5ab649:c.instructions+=4;goto B5ab649;
case 0x5ab64d:c.instructions+=3;goto B5ab64d;
case 0x5ab653:c.instructions+=2;goto B5ab653;
case 0x5ab657:c.instructions+=1;goto B5ab657;
case 0x5ab659:goto L5ab659;
case 0x5ab660:c.instructions+=5;goto B5ab660;
case 0x5ab664:c.instructions+=4;goto B5ab664;
case 0x5ab668:c.instructions+=3;goto B5ab668;
case 0x5ab66e:c.instructions+=2;goto B5ab66e;
case 0x5ab672:c.instructions+=1;goto B5ab672;
case 0x5ab676:goto L5ab676;
case 0x5ab67a:c.instructions+=4;goto B5ab67a;
case 0x5ab67b:c.instructions+=3;goto B5ab67b;
case 0x5ab681:c.instructions+=2;goto B5ab681;
case 0x5ab684:c.instructions+=1;goto B5ab684;
case 0x5ab689:goto L5ab689;
case 0x5ab68d:c.instructions+=3;goto B5ab68d;
case 0x5ab691:c.instructions+=2;goto B5ab691;
case 0x5ab692:c.instructions+=1;goto B5ab692;
case 0x5ab697:goto L5ab697;
case 0x5ab69b:c.instructions+=34;goto B5ab69b;
case 0x5ab69f:c.instructions+=33;goto B5ab69f;
case 0x5ab6a2:c.instructions+=32;goto B5ab6a2;
case 0x5ab6a6:c.instructions+=31;goto B5ab6a6;
case 0x5ab6a8:c.instructions+=30;goto B5ab6a8;
case 0x5ab6ac:c.instructions+=29;goto B5ab6ac;
case 0x5ab6af:c.instructions+=28;goto B5ab6af;
case 0x5ab6b1:c.instructions+=27;goto B5ab6b1;
case 0x5ab6b5:c.instructions+=26;goto B5ab6b5;
case 0x5ab6b9:c.instructions+=25;goto B5ab6b9;
case 0x5ab6bd:c.instructions+=24;goto B5ab6bd;
case 0x5ab6c1:c.instructions+=23;goto B5ab6c1;
case 0x5ab6c5:c.instructions+=22;goto B5ab6c5;
case 0x5ab6c7:c.instructions+=21;goto B5ab6c7;
case 0x5ab6cb:c.instructions+=20;goto B5ab6cb;
case 0x5ab6cf:c.instructions+=19;goto B5ab6cf;
case 0x5ab6d2:c.instructions+=18;goto B5ab6d2;
case 0x5ab6d5:c.instructions+=17;goto B5ab6d5;
case 0x5ab6d7:c.instructions+=16;goto B5ab6d7;
case 0x5ab6d9:c.instructions+=15;goto B5ab6d9;
case 0x5ab6db:c.instructions+=14;goto B5ab6db;
case 0x5ab6e1:c.instructions+=13;goto B5ab6e1;
case 0x5ab6e3:c.instructions+=12;goto B5ab6e3;
case 0x5ab6e5:c.instructions+=11;goto B5ab6e5;
case 0x5ab6e9:c.instructions+=10;goto B5ab6e9;
case 0x5ab6ed:c.instructions+=9;goto B5ab6ed;
case 0x5ab6ef:c.instructions+=8;goto B5ab6ef;
case 0x5ab6f1:c.instructions+=7;goto B5ab6f1;
case 0x5ab6f5:c.instructions+=6;goto B5ab6f5;
case 0x5ab6fb:c.instructions+=5;goto B5ab6fb;
case 0x5ab701:c.instructions+=4;goto B5ab701;
case 0x5ab705:c.instructions+=3;goto B5ab705;
case 0x5ab707:c.instructions+=2;goto B5ab707;
case 0x5ab70a:c.instructions+=1;goto B5ab70a;
case 0x5ab70c:goto L5ab70c;
case 0x5ab70e:c.instructions+=2;goto B5ab70e;
case 0x5ab714:c.instructions+=1;goto B5ab714;
case 0x5ab71a:goto L5ab71a;
case 0x5ab71e:c.instructions+=5;goto B5ab71e;
case 0x5ab720:c.instructions+=4;goto B5ab720;
case 0x5ab726:c.instructions+=3;goto B5ab726;
case 0x5ab728:c.instructions+=2;goto B5ab728;
case 0x5ab72b:c.instructions+=1;goto B5ab72b;
case 0x5ab72d:goto L5ab72d;
case 0x5ab733:goto L5ab733;
case 0x5ab737:c.instructions+=4;goto B5ab737;
case 0x5ab73d:c.instructions+=3;goto B5ab73d;
case 0x5ab73f:c.instructions+=2;goto B5ab73f;
case 0x5ab742:c.instructions+=1;goto B5ab742;
case 0x5ab744:goto L5ab744;
case 0x5ab748:c.instructions+=1;goto B5ab748;
case 0x5ab74b:goto L5ab74b;
case 0x5ab74e:c.instructions+=13;goto B5ab74e;
case 0x5ab750:c.instructions+=12;goto B5ab750;
case 0x5ab756:c.instructions+=11;goto B5ab756;
case 0x5ab75e:c.instructions+=10;goto B5ab75e;
case 0x5ab760:c.instructions+=9;goto B5ab760;
case 0x5ab762:c.instructions+=8;goto B5ab762;
case 0x5ab764:c.instructions+=7;goto B5ab764;
case 0x5ab768:c.instructions+=6;goto B5ab768;
case 0x5ab76e:c.instructions+=5;goto B5ab76e;
case 0x5ab772:c.instructions+=4;goto B5ab772;
case 0x5ab774:c.instructions+=3;goto B5ab774;
case 0x5ab778:c.instructions+=2;goto B5ab778;
case 0x5ab77a:c.instructions+=1;goto B5ab77a;
case 0x5ab77c:goto L5ab77c;
case 0x5ab783:c.instructions+=4;goto B5ab783;
case 0x5ab787:c.instructions+=3;goto B5ab787;
case 0x5ab78b:c.instructions+=2;goto B5ab78b;
case 0x5ab791:c.instructions+=1;goto B5ab791;
case 0x5ab795:goto L5ab795;
case 0x5ab799:c.instructions+=4;goto B5ab799;
case 0x5ab79a:c.instructions+=3;goto B5ab79a;
case 0x5ab7a0:c.instructions+=2;goto B5ab7a0;
case 0x5ab7a3:c.instructions+=1;goto B5ab7a3;
case 0x5ab7a8:goto L5ab7a8;
case 0x5ab7ac:c.instructions+=3;goto B5ab7ac;
case 0x5ab7b0:c.instructions+=2;goto B5ab7b0;
case 0x5ab7b1:c.instructions+=1;goto B5ab7b1;
case 0x5ab7b6:goto L5ab7b6;
case 0x5ab7ba:c.instructions+=15;goto B5ab7ba;
case 0x5ab7be:c.instructions+=14;goto B5ab7be;
case 0x5ab7c1:c.instructions+=13;goto B5ab7c1;
case 0x5ab7c5:c.instructions+=12;goto B5ab7c5;
case 0x5ab7c7:c.instructions+=11;goto B5ab7c7;
case 0x5ab7c9:c.instructions+=10;goto B5ab7c9;
case 0x5ab7cb:c.instructions+=9;goto B5ab7cb;
case 0x5ab7cd:c.instructions+=8;goto B5ab7cd;
case 0x5ab7d1:c.instructions+=7;goto B5ab7d1;
case 0x5ab7d3:c.instructions+=6;goto B5ab7d3;
case 0x5ab7d7:c.instructions+=5;goto B5ab7d7;
case 0x5ab7db:c.instructions+=4;goto B5ab7db;
case 0x5ab7dd:c.instructions+=3;goto B5ab7dd;
case 0x5ab7e0:c.instructions+=2;goto B5ab7e0;
case 0x5ab7e2:c.instructions+=1;goto B5ab7e2;
case 0x5ab7e4:goto L5ab7e4;
case 0x5ab7e6:c.instructions+=1;goto B5ab7e6;
case 0x5ab7e9:goto L5ab7e9;
case 0x5ab7ed:c.instructions+=14;goto B5ab7ed;
case 0x5ab7ef:c.instructions+=13;goto B5ab7ef;
case 0x5ab7f2:c.instructions+=12;goto B5ab7f2;
case 0x5ab7f6:c.instructions+=11;goto B5ab7f6;
case 0x5ab7f9:c.instructions+=10;goto B5ab7f9;
case 0x5ab7fb:c.instructions+=9;goto B5ab7fb;
case 0x5ab7fe:c.instructions+=8;goto B5ab7fe;
case 0x5ab801:c.instructions+=7;goto B5ab801;
case 0x5ab804:c.instructions+=6;goto B5ab804;
case 0x5ab805:c.instructions+=5;goto B5ab805;
case 0x5ab808:c.instructions+=4;goto B5ab808;
case 0x5ab809:c.instructions+=3;goto B5ab809;
case 0x5ab810:c.instructions+=2;goto B5ab810;
case 0x5ab811:c.instructions+=1;goto B5ab811;
case 0x5ab816:goto L5ab816;
case 0x5ab819:c.instructions+=6;goto B5ab819;
case 0x5ab81d:c.instructions+=5;goto B5ab81d;
case 0x5ab81e:c.instructions+=4;goto B5ab81e;
case 0x5ab825:c.instructions+=3;goto B5ab825;
case 0x5ab826:c.instructions+=2;goto B5ab826;
case 0x5ab829:c.instructions+=1;goto B5ab829;
case 0x5ab82e:goto L5ab82e;
case 0x5ab832:c.instructions+=15;goto B5ab832;
case 0x5ab836:c.instructions+=14;goto B5ab836;
case 0x5ab83a:c.instructions+=13;goto B5ab83a;
case 0x5ab83d:c.instructions+=12;goto B5ab83d;
case 0x5ab841:c.instructions+=11;goto B5ab841;
case 0x5ab845:c.instructions+=10;goto B5ab845;
case 0x5ab848:c.instructions+=9;goto B5ab848;
case 0x5ab849:c.instructions+=8;goto B5ab849;
case 0x5ab84c:c.instructions+=7;goto B5ab84c;
case 0x5ab84f:c.instructions+=6;goto B5ab84f;
case 0x5ab852:c.instructions+=5;goto B5ab852;
case 0x5ab858:c.instructions+=4;goto B5ab858;
case 0x5ab85c:c.instructions+=3;goto B5ab85c;
case 0x5ab860:c.instructions+=2;goto B5ab860;
case 0x5ab864:c.instructions+=1;goto B5ab864;
case 0x5ab86a:goto L5ab86a;
case 0x5ab86c:c.instructions+=1;goto B5ab86c;
case 0x5ab871:goto L5ab871;
case 0x5ab872:c.instructions+=5;goto B5ab872;
case 0x5ab873:c.instructions+=4;goto B5ab873;
case 0x5ab874:c.instructions+=3;goto B5ab874;
case 0x5ab876:c.instructions+=2;goto B5ab876;
case 0x5ab877:c.instructions+=1;goto B5ab877;
case 0x5ab880:goto L5ab880;
case 0x5ab881:c.instructions+=4;goto B5ab881;
case 0x5ab882:c.instructions+=3;goto B5ab882;
case 0x5ab883:c.instructions+=2;goto B5ab883;
case 0x5ab885:c.instructions+=1;goto B5ab885;
case 0x5ab88a:goto L5ab88a;
case 0x5ab890:c.instructions+=15;goto B5ab890;
case 0x5ab893:c.instructions+=14;goto B5ab893;
case 0x5ab899:c.instructions+=13;goto B5ab899;
case 0x5ab89c:c.instructions+=12;goto B5ab89c;
case 0x5ab8a2:c.instructions+=11;goto B5ab8a2;
case 0x5ab8a5:c.instructions+=10;goto B5ab8a5;
case 0x5ab8a7:c.instructions+=9;goto B5ab8a7;
case 0x5ab8ad:c.instructions+=8;goto B5ab8ad;
case 0x5ab8b0:c.instructions+=7;goto B5ab8b0;
case 0x5ab8b2:c.instructions+=6;goto B5ab8b2;
case 0x5ab8b4:c.instructions+=5;goto B5ab8b4;
case 0x5ab8b6:c.instructions+=4;goto B5ab8b6;
case 0x5ab8bc:c.instructions+=3;goto B5ab8bc;
case 0x5ab8be:c.instructions+=2;goto B5ab8be;
case 0x5ab8c1:c.instructions+=1;goto B5ab8c1;
case 0x5ab8c3:goto L5ab8c3;
case 0x5ab8c5:c.instructions+=1;goto B5ab8c5;
case 0x5ab8cb:goto L5ab8cb;
case 0x5ab8cd:c.instructions+=1;goto B5ab8cd;
case 0x5ab8d0:goto L5ab8d0;
case 0x5ab8d3:c.instructions+=10;goto B5ab8d3;
case 0x5ab8d5:c.instructions+=9;goto B5ab8d5;
case 0x5ab8d9:c.instructions+=8;goto B5ab8d9;
case 0x5ab8dd:c.instructions+=7;goto B5ab8dd;
case 0x5ab8df:c.instructions+=6;goto B5ab8df;
case 0x5ab8e2:c.instructions+=5;goto B5ab8e2;
case 0x5ab8e8:c.instructions+=4;goto B5ab8e8;
case 0x5ab8ee:c.instructions+=3;goto B5ab8ee;
case 0x5ab8f0:c.instructions+=2;goto B5ab8f0;
case 0x5ab8f3:c.instructions+=1;goto B5ab8f3;
case 0x5ab8f5:goto L5ab8f5;
case 0x5ab8f8:c.instructions+=1;goto B5ab8f8;
case 0x5ab8fa:goto L5ab8fa;
case 0x5ab8fc:c.instructions+=1;goto B5ab8fc;
case 0x5ab8fe:goto L5ab8fe;
case 0x5ab904:c.instructions+=4;goto B5ab904;
case 0x5ab90a:c.instructions+=3;goto B5ab90a;
case 0x5ab90c:c.instructions+=2;goto B5ab90c;
case 0x5ab90f:c.instructions+=1;goto B5ab90f;
case 0x5ab911:goto L5ab911;
case 0x5ab914:c.instructions+=1;goto B5ab914;
case 0x5ab916:goto L5ab916;
case 0x5ab91c:goto L5ab91c;
case 0x5ab91e:goto L5ab91e;
case 0x5ab924:c.instructions+=3;goto B5ab924;
case 0x5ab926:c.instructions+=2;goto B5ab926;
case 0x5ab929:c.instructions+=1;goto B5ab929;
case 0x5ab92b:goto L5ab92b;
case 0x5ab931:c.instructions+=4;goto B5ab931;
case 0x5ab937:c.instructions+=3;goto B5ab937;
case 0x5ab939:c.instructions+=2;goto B5ab939;
case 0x5ab93c:c.instructions+=1;goto B5ab93c;
case 0x5ab93e:goto L5ab93e;
case 0x5ab944:c.instructions+=4;goto B5ab944;
case 0x5ab94a:c.instructions+=3;goto B5ab94a;
case 0x5ab94c:c.instructions+=2;goto B5ab94c;
case 0x5ab94f:c.instructions+=1;goto B5ab94f;
case 0x5ab951:goto L5ab951;
case 0x5ab957:c.instructions+=4;goto B5ab957;
case 0x5ab95d:c.instructions+=3;goto B5ab95d;
case 0x5ab963:c.instructions+=2;goto B5ab963;
case 0x5ab967:c.instructions+=1;goto B5ab967;
case 0x5ab969:goto L5ab969;
case 0x5ab96c:c.instructions+=1;goto B5ab96c;
case 0x5ab96e:goto L5ab96e;
case 0x5ab970:c.instructions+=2;goto B5ab970;
case 0x5ab972:c.instructions+=1;goto B5ab972;
case 0x5ab974:goto L5ab974;
case 0x5ab977:c.instructions+=3;goto B5ab977;
case 0x5ab97a:c.instructions+=2;goto B5ab97a;
case 0x5ab980:c.instructions+=1;goto B5ab980;
case 0x5ab986:goto L5ab986;
case 0x5ab988:c.instructions+=5;goto B5ab988;
case 0x5ab989:c.instructions+=4;goto B5ab989;
case 0x5ab98b:c.instructions+=3;goto B5ab98b;
case 0x5ab98c:c.instructions+=2;goto B5ab98c;
case 0x5ab98d:c.instructions+=1;goto B5ab98d;
case 0x5ab990:goto L5ab990;
case 0x5ab993:c.instructions+=10;goto B5ab993;
case 0x5ab994:c.instructions+=9;goto B5ab994;
case 0x5ab996:c.instructions+=8;goto B5ab996;
case 0x5ab999:c.instructions+=7;goto B5ab999;
case 0x5ab99c:c.instructions+=6;goto B5ab99c;
case 0x5ab99d:c.instructions+=5;goto B5ab99d;
case 0x5ab9a0:c.instructions+=4;goto B5ab9a0;
case 0x5ab9a1:c.instructions+=3;goto B5ab9a1;
case 0x5ab9a2:c.instructions+=2;goto B5ab9a2;
case 0x5ab9a3:c.instructions+=1;goto B5ab9a3;
case 0x5ab9a8:goto L5ab9a8;
case 0x5ab9ab:c.instructions+=2;goto B5ab9ab;
case 0x5ab9ae:c.instructions+=1;goto B5ab9ae;
case 0x5ab9b3:goto L5ab9b3;
case 0x5ab9b9:c.instructions+=4;goto B5ab9b9;
case 0x5ab9bb:c.instructions+=3;goto B5ab9bb;
case 0x5ab9be:c.instructions+=2;goto B5ab9be;
case 0x5ab9c4:c.instructions+=1;goto B5ab9c4;
case 0x5ab9c6:goto L5ab9c6;
case 0x5ab9c8:c.instructions+=1;goto B5ab9c8;
case 0x5ab9ce:goto L5ab9ce;
case 0x5ab9d1:c.instructions+=22;goto B5ab9d1;
case 0x5ab9d4:c.instructions+=21;goto B5ab9d4;
case 0x5ab9d7:c.instructions+=20;goto B5ab9d7;
case 0x5ab9d9:c.instructions+=19;goto B5ab9d9;
case 0x5ab9df:c.instructions+=18;goto B5ab9df;
case 0x5ab9e1:c.instructions+=17;goto B5ab9e1;
case 0x5ab9e3:c.instructions+=16;goto B5ab9e3;
case 0x5ab9e5:c.instructions+=15;goto B5ab9e5;
case 0x5ab9eb:c.instructions+=14;goto B5ab9eb;
case 0x5ab9ef:c.instructions+=13;goto B5ab9ef;
case 0x5ab9f1:c.instructions+=12;goto B5ab9f1;
case 0x5ab9f3:c.instructions+=11;goto B5ab9f3;
case 0x5ab9f9:c.instructions+=10;goto B5ab9f9;
case 0x5ab9fd:c.instructions+=9;goto B5ab9fd;
case 0x5aba03:c.instructions+=8;goto B5aba03;
case 0x5aba06:c.instructions+=7;goto B5aba06;
case 0x5aba0c:c.instructions+=6;goto B5aba0c;
case 0x5aba12:c.instructions+=5;goto B5aba12;
case 0x5aba18:c.instructions+=4;goto B5aba18;
case 0x5aba1a:c.instructions+=3;goto B5aba1a;
case 0x5aba1c:c.instructions+=2;goto B5aba1c;
case 0x5aba1f:c.instructions+=1;goto B5aba1f;
case 0x5aba21:goto L5aba21;
case 0x5aba23:c.instructions+=1;goto B5aba23;
case 0x5aba29:goto L5aba29;
case 0x5aba2b:c.instructions+=21;goto B5aba2b;
case 0x5aba2e:c.instructions+=20;goto B5aba2e;
case 0x5aba31:c.instructions+=19;goto B5aba31;
case 0x5aba34:c.instructions+=18;goto B5aba34;
case 0x5aba36:c.instructions+=17;goto B5aba36;
case 0x5aba3c:c.instructions+=16;goto B5aba3c;
case 0x5aba3f:c.instructions+=15;goto B5aba3f;
case 0x5aba40:c.instructions+=14;goto B5aba40;
case 0x5aba42:c.instructions+=13;goto B5aba42;
case 0x5aba46:c.instructions+=12;goto B5aba46;
case 0x5aba48:c.instructions+=11;goto B5aba48;
case 0x5aba4a:c.instructions+=10;goto B5aba4a;
case 0x5aba4e:c.instructions+=9;goto B5aba4e;
case 0x5aba50:c.instructions+=8;goto B5aba50;
case 0x5aba54:c.instructions+=7;goto B5aba54;
case 0x5aba58:c.instructions+=6;goto B5aba58;
case 0x5aba5a:c.instructions+=5;goto B5aba5a;
case 0x5aba60:c.instructions+=4;goto B5aba60;
case 0x5aba63:c.instructions+=3;goto B5aba63;
case 0x5aba66:c.instructions+=2;goto B5aba66;
case 0x5aba67:c.instructions+=1;goto B5aba67;
case 0x5aba6c:goto L5aba6c;
case 0x5aba6f:c.instructions+=6;goto B5aba6f;
case 0x5aba75:c.instructions+=5;goto B5aba75;
case 0x5aba76:c.instructions+=4;goto B5aba76;
case 0x5aba79:c.instructions+=3;goto B5aba79;
case 0x5aba7c:c.instructions+=2;goto B5aba7c;
case 0x5aba7d:c.instructions+=1;goto B5aba7d;
case 0x5aba82:goto L5aba82;
case 0x5aba86:c.instructions+=10;goto B5aba86;
case 0x5aba8a:c.instructions+=9;goto B5aba8a;
case 0x5aba8d:c.instructions+=8;goto B5aba8d;
case 0x5aba8e:c.instructions+=7;goto B5aba8e;
case 0x5aba91:c.instructions+=6;goto B5aba91;
case 0x5aba95:c.instructions+=5;goto B5aba95;
case 0x5aba9b:c.instructions+=4;goto B5aba9b;
case 0x5aba9f:c.instructions+=3;goto B5aba9f;
case 0x5abaa2:c.instructions+=2;goto B5abaa2;
case 0x5abaa3:c.instructions+=1;goto B5abaa3;
case 0x5abaa8:goto L5abaa8;
case 0x5abaab:c.instructions+=6;goto B5abaab;
case 0x5abab1:c.instructions+=5;goto B5abab1;
case 0x5abab2:c.instructions+=4;goto B5abab2;
case 0x5abab5:c.instructions+=3;goto B5abab5;
case 0x5abab8:c.instructions+=2;goto B5abab8;
case 0x5abab9:c.instructions+=1;goto B5abab9;
case 0x5ababe:goto L5ababe;
case 0x5abac1:c.instructions+=15;goto B5abac1;
case 0x5abac6:c.instructions+=14;goto B5abac6;
case 0x5abac9:c.instructions+=13;goto B5abac9;
case 0x5abacc:c.instructions+=12;goto B5abacc;
case 0x5abad2:c.instructions+=11;goto B5abad2;
case 0x5abad5:c.instructions+=10;goto B5abad5;
case 0x5abad8:c.instructions+=9;goto B5abad8;
case 0x5abade:c.instructions+=8;goto B5abade;
case 0x5abae1:c.instructions+=7;goto B5abae1;
case 0x5abae4:c.instructions+=6;goto B5abae4;
case 0x5abae9:c.instructions+=5;goto B5abae9;
case 0x5abaea:c.instructions+=4;goto B5abaea;
case 0x5abaed:c.instructions+=3;goto B5abaed;
case 0x5abaee:c.instructions+=2;goto B5abaee;
case 0x5abaf1:c.instructions+=1;goto B5abaf1;
case 0x5abb00:goto L5abb00;
case 0x5abb01:c.instructions+=16;goto B5abb01;
case 0x5abb03:c.instructions+=15;goto B5abb03;
case 0x5abb06:c.instructions+=14;goto B5abb06;
case 0x5abb09:c.instructions+=13;goto B5abb09;
case 0x5abb0a:c.instructions+=12;goto B5abb0a;
case 0x5abb0b:c.instructions+=11;goto B5abb0b;
case 0x5abb0d:c.instructions+=10;goto B5abb0d;
case 0x5abb10:c.instructions+=9;goto B5abb10;
case 0x5abb11:c.instructions+=8;goto B5abb11;
case 0x5abb14:c.instructions+=7;goto B5abb14;
case 0x5abb15:c.instructions+=6;goto B5abb15;
case 0x5abb18:c.instructions+=5;goto B5abb18;
case 0x5abb1b:c.instructions+=4;goto B5abb1b;
case 0x5abb1c:c.instructions+=3;goto B5abb1c;
case 0x5abb1d:c.instructions+=2;goto B5abb1d;
case 0x5abb1e:c.instructions+=1;goto B5abb1e;
case 0x5abb23:goto L5abb23;
case 0x5abb25:c.instructions+=3;goto B5abb25;
case 0x5abb28:c.instructions+=2;goto B5abb28;
case 0x5abb2a:c.instructions+=1;goto B5abb2a;
case 0x5abb2c:goto L5abb2c;
case 0x5abb31:goto L5abb31;
case 0x5abb38:c.instructions+=6;goto B5abb38;
case 0x5abb3b:c.instructions+=5;goto B5abb3b;
case 0x5abb3e:c.instructions+=4;goto B5abb3e;
case 0x5abb41:c.instructions+=3;goto B5abb41;
case 0x5abb43:c.instructions+=2;goto B5abb43;
case 0x5abb46:c.instructions+=1;goto B5abb46;
case 0x5abb48:goto L5abb48;
case 0x5abb4d:goto L5abb4d;
case 0x5abb50:c.instructions+=3;goto B5abb50;
case 0x5abb53:c.instructions+=2;goto B5abb53;
case 0x5abb58:c.instructions+=1;goto B5abb58;
case 0x5abb5b:goto L5abb5b;
case 0x5abb5e:c.instructions+=2;goto B5abb5e;
case 0x5abb64:c.instructions+=1;goto B5abb64;
case 0x5abb66:goto L5abb66;
case 0x5abb6b:c.instructions+=2;goto B5abb6b;
case 0x5abb6d:c.instructions+=1;goto B5abb6d;
case 0x5abb6f:goto L5abb6f;
case 0x5abb72:c.instructions+=2;goto B5abb72;
case 0x5abb76:c.instructions+=1;goto B5abb76;
case 0x5abb78:goto L5abb78;
case 0x5abb7e:c.instructions+=13;goto B5abb7e;
case 0x5abb82:c.instructions+=12;goto B5abb82;
case 0x5abb83:c.instructions+=11;goto B5abb83;
case 0x5abb87:c.instructions+=10;goto B5abb87;
case 0x5abb91:c.instructions+=9;goto B5abb91;
case 0x5abb92:c.instructions+=8;goto B5abb92;
case 0x5abb95:c.instructions+=7;goto B5abb95;
case 0x5abb9d:c.instructions+=6;goto B5abb9d;
case 0x5abba5:c.instructions+=5;goto B5abba5;
case 0x5abbad:c.instructions+=4;goto B5abbad;
case 0x5abbb5:c.instructions+=3;goto B5abbb5;
case 0x5abbbd:c.instructions+=2;goto B5abbbd;
case 0x5abbc1:c.instructions+=1;goto B5abbc1;
case 0x5abbc6:goto L5abbc6;
case 0x5abbc8:goto L5abbc8;
case 0x5abbca:c.instructions+=1;goto B5abbca;
case 0x5abbcc:goto L5abbcc;
case 0x5abbcf:c.instructions+=2;goto B5abbcf;
case 0x5abbd9:c.instructions+=1;goto B5abbd9;
case 0x5abbde:goto L5abbde;
case 0x5abbdf:c.instructions+=4;goto B5abbdf;
case 0x5abbe0:c.instructions+=3;goto B5abbe0;
case 0x5abbe2:c.instructions+=2;goto B5abbe2;
case 0x5abbe3:c.instructions+=1;goto B5abbe3;
case 0x5abbf0:goto L5abbf0;
case 0x5abbf3:c.instructions+=8;goto B5abbf3;
case 0x5abbf4:c.instructions+=7;goto B5abbf4;
case 0x5abbf6:c.instructions+=6;goto B5abbf6;
case 0x5abbf9:c.instructions+=5;goto B5abbf9;
case 0x5abbff:c.instructions+=4;goto B5abbff;
case 0x5abc00:c.instructions+=3;goto B5abc00;
case 0x5abc05:c.instructions+=2;goto B5abc05;
case 0x5abc07:c.instructions+=1;goto B5abc07;
case 0x5abc0d:goto L5abc0d;
case 0x5abc12:c.instructions+=2;goto B5abc12;
case 0x5abc14:c.instructions+=1;goto B5abc14;
case 0x5abc1a:goto L5abc1a;
case 0x5abc1f:c.instructions+=2;goto B5abc1f;
case 0x5abc21:c.instructions+=1;goto B5abc21;
case 0x5abc27:goto L5abc27;
case 0x5abc2c:c.instructions+=2;goto B5abc2c;
case 0x5abc2e:c.instructions+=1;goto B5abc2e;
case 0x5abc30:goto L5abc30;
case 0x5abc33:c.instructions+=5;goto B5abc33;
case 0x5abc39:c.instructions+=4;goto B5abc39;
case 0x5abc3f:c.instructions+=3;goto B5abc3f;
case 0x5abc41:c.instructions+=2;goto B5abc41;
case 0x5abc44:c.instructions+=1;goto B5abc44;
case 0x5abc46:goto L5abc46;
case 0x5abc4c:c.instructions+=4;goto B5abc4c;
case 0x5abc52:c.instructions+=3;goto B5abc52;
case 0x5abc54:c.instructions+=2;goto B5abc54;
case 0x5abc57:c.instructions+=1;goto B5abc57;
case 0x5abc59:goto L5abc59;
case 0x5abc5f:c.instructions+=4;goto B5abc5f;
case 0x5abc65:c.instructions+=3;goto B5abc65;
case 0x5abc67:c.instructions+=2;goto B5abc67;
case 0x5abc6a:c.instructions+=1;goto B5abc6a;
case 0x5abc6c:goto L5abc6c;
case 0x5abc6e:c.instructions+=1;goto B5abc6e;
case 0x5abc73:goto L5abc73;
case 0x5abc76:c.instructions+=5;goto B5abc76;
case 0x5abc7c:c.instructions+=4;goto B5abc7c;
case 0x5abc82:c.instructions+=3;goto B5abc82;
case 0x5abc84:c.instructions+=2;goto B5abc84;
case 0x5abc87:c.instructions+=1;goto B5abc87;
case 0x5abc89:goto L5abc89;
case 0x5abc8b:c.instructions+=1;goto B5abc8b;
case 0x5abc90:goto L5abc90;
case 0x5abc92:goto L5abc92;
case 0x5abc98:c.instructions+=4;goto B5abc98;
case 0x5abc9e:c.instructions+=3;goto B5abc9e;
case 0x5abca0:c.instructions+=2;goto B5abca0;
case 0x5abca3:c.instructions+=1;goto B5abca3;
case 0x5abca5:goto L5abca5;
case 0x5abca7:c.instructions+=1;goto B5abca7;
case 0x5abcac:goto L5abcac;
case 0x5abcaf:c.instructions+=7;goto B5abcaf;
case 0x5abcb5:c.instructions+=6;goto B5abcb5;
case 0x5abcb9:c.instructions+=5;goto B5abcb9;
case 0x5abcbd:c.instructions+=4;goto B5abcbd;
case 0x5abcc3:c.instructions+=3;goto B5abcc3;
case 0x5abcc5:c.instructions+=2;goto B5abcc5;
case 0x5abcc8:c.instructions+=1;goto B5abcc8;
case 0x5abcca:goto L5abcca;
case 0x5abcd2:c.instructions+=1;goto B5abcd2;
case 0x5abcd4:goto L5abcd4;
case 0x5abcd8:c.instructions+=4;goto B5abcd8;
case 0x5abcde:c.instructions+=3;goto B5abcde;
case 0x5abce0:c.instructions+=2;goto B5abce0;
case 0x5abce3:c.instructions+=1;goto B5abce3;
case 0x5abce5:goto L5abce5;
case 0x5abce8:c.instructions+=2;goto B5abce8;
case 0x5abceb:c.instructions+=1;goto B5abceb;
case 0x5abced:goto L5abced;
case 0x5abcf0:c.instructions+=6;goto B5abcf0;
case 0x5abcf3:c.instructions+=5;goto B5abcf3;
case 0x5abcf9:c.instructions+=4;goto B5abcf9;
case 0x5abcff:c.instructions+=3;goto B5abcff;
case 0x5abd01:c.instructions+=2;goto B5abd01;
case 0x5abd04:c.instructions+=1;goto B5abd04;
case 0x5abd06:goto L5abd06;
case 0x5abd0c:c.instructions+=4;goto B5abd0c;
case 0x5abd10:c.instructions+=3;goto B5abd10;
case 0x5abd12:c.instructions+=2;goto B5abd12;
case 0x5abd15:c.instructions+=1;goto B5abd15;
case 0x5abd17:goto L5abd17;
case 0x5abd1f:goto L5abd1f;
case 0x5abd26:c.instructions+=4;goto B5abd26;
case 0x5abd29:c.instructions+=3;goto B5abd29;
case 0x5abd2b:c.instructions+=2;goto B5abd2b;
case 0x5abd2c:c.instructions+=1;goto B5abd2c;
case 0x5abd2f:goto L5abd2f;
case 0x5abd32:c.instructions+=5;goto B5abd32;
case 0x5abd36:c.instructions+=4;goto B5abd36;
case 0x5abd39:c.instructions+=3;goto B5abd39;
case 0x5abd3c:c.instructions+=2;goto B5abd3c;
case 0x5abd3e:c.instructions+=1;goto B5abd3e;
case 0x5abd41:goto L5abd41;
case 0x5abd43:c.instructions+=2;goto B5abd43;
case 0x5abd46:c.instructions+=1;goto B5abd46;
case 0x5abd48:goto L5abd48;
case 0x5abd4b:c.instructions+=4;goto B5abd4b;
case 0x5abd4e:c.instructions+=3;goto B5abd4e;
case 0x5abd4f:c.instructions+=2;goto B5abd4f;
case 0x5abd51:c.instructions+=1;goto B5abd51;
case 0x5abd53:goto L5abd53;
case 0x5abd56:c.instructions+=1;goto B5abd56;
case 0x5abd58:goto L5abd58;
case 0x5abd5f:goto L5abd5f;
case 0x5abd62:goto L5abd62;
case 0x5abd65:c.instructions+=1;goto B5abd65;
case 0x5abd6a:goto L5abd6a;
case 0x5abd6d:c.instructions+=6;goto B5abd6d;
case 0x5abd73:c.instructions+=5;goto B5abd73;
case 0x5abd79:c.instructions+=4;goto B5abd79;
case 0x5abd7f:c.instructions+=3;goto B5abd7f;
case 0x5abd81:c.instructions+=2;goto B5abd81;
case 0x5abd84:c.instructions+=1;goto B5abd84;
case 0x5abd86:goto L5abd86;
case 0x5abd8c:c.instructions+=2;goto B5abd8c;
case 0x5abd90:c.instructions+=1;goto B5abd90;
case 0x5abd92:goto L5abd92;
case 0x5abd95:c.instructions+=2;goto B5abd95;
case 0x5abd9b:c.instructions+=1;goto B5abd9b;
case 0x5abd9f:goto L5abd9f;
case 0x5abda2:c.instructions+=4;goto B5abda2;
case 0x5abda6:c.instructions+=3;goto B5abda6;
case 0x5abda8:c.instructions+=2;goto B5abda8;
case 0x5abda9:c.instructions+=1;goto B5abda9;
case 0x5abdac:goto L5abdac;
case 0x5abdaf:c.instructions+=2;goto B5abdaf;
case 0x5abdb0:c.instructions+=1;goto B5abdb0;
case 0x5abdb5:goto L5abdb5;
case 0x5abdb8:c.instructions+=2;goto B5abdb8;
case 0x5abdb9:c.instructions+=1;goto B5abdb9;
case 0x5abdbc:goto L5abdbc;
case 0x5abdbf:c.instructions+=5;goto B5abdbf;
case 0x5abdc2:c.instructions+=4;goto B5abdc2;
case 0x5abdc5:c.instructions+=3;goto B5abdc5;
case 0x5abdc7:c.instructions+=2;goto B5abdc7;
case 0x5abdc8:c.instructions+=1;goto B5abdc8;
case 0x5abdcb:goto L5abdcb;
case 0x5abdce:c.instructions+=11;goto B5abdce;
case 0x5abdd2:c.instructions+=10;goto B5abdd2;
case 0x5abdd5:c.instructions+=9;goto B5abdd5;
case 0x5abdd8:c.instructions+=8;goto B5abdd8;
case 0x5abdde:c.instructions+=7;goto B5abdde;
case 0x5abde1:c.instructions+=6;goto B5abde1;
case 0x5abde2:c.instructions+=5;goto B5abde2;
case 0x5abde3:c.instructions+=4;goto B5abde3;
case 0x5abde9:c.instructions+=3;goto B5abde9;
case 0x5abdec:c.instructions+=2;goto B5abdec;
case 0x5abdef:c.instructions+=1;goto B5abdef;
case 0x5abdf0:goto L5abdf0;
case 0x5abdf1:c.instructions+=9;goto B5abdf1;
case 0x5abdf3:c.instructions+=8;goto B5abdf3;
case 0x5abdf6:c.instructions+=7;goto B5abdf6;
case 0x5abdfc:c.instructions+=6;goto B5abdfc;
case 0x5abdfd:c.instructions+=5;goto B5abdfd;
case 0x5abdfe:c.instructions+=4;goto B5abdfe;
case 0x5abe00:c.instructions+=3;goto B5abe00;
case 0x5abe03:c.instructions+=2;goto B5abe03;
case 0x5abe04:c.instructions+=1;goto B5abe04;
case 0x5abe09:goto L5abe09;
case 0x5abe0c:c.instructions+=6;goto B5abe0c;
case 0x5abe0f:c.instructions+=5;goto B5abe0f;
case 0x5abe13:c.instructions+=4;goto B5abe13;
case 0x5abe17:c.instructions+=3;goto B5abe17;
case 0x5abe1a:c.instructions+=2;goto B5abe1a;
case 0x5abe1f:c.instructions+=1;goto B5abe1f;
case 0x5abe20:goto L5abe20;
case 0x5abe24:c.instructions+=4;goto B5abe24;
case 0x5abe26:c.instructions+=3;goto B5abe26;
case 0x5abe27:c.instructions+=2;goto B5abe27;
case 0x5abe29:c.instructions+=1;goto B5abe29;
case 0x5abe2e:goto L5abe2e;
case 0x5abe31:c.instructions+=2;goto B5abe31;
case 0x5abe32:c.instructions+=1;goto B5abe32;
case 0x5abe34:goto L5abe34;
case 0x5abe37:c.instructions+=5;goto B5abe37;
case 0x5abe3a:c.instructions+=4;goto B5abe3a;
case 0x5abe3b:c.instructions+=3;goto B5abe3b;
case 0x5abe3f:c.instructions+=2;goto B5abe3f;
case 0x5abe40:c.instructions+=1;goto B5abe40;
case 0x5abe45:goto L5abe45;
case 0x5abe48:c.instructions+=7;goto B5abe48;
case 0x5abe4d:c.instructions+=6;goto B5abe4d;
case 0x5abe4e:c.instructions+=5;goto B5abe4e;
case 0x5abe52:c.instructions+=4;goto B5abe52;
case 0x5abe53:c.instructions+=3;goto B5abe53;
case 0x5abe57:c.instructions+=2;goto B5abe57;
case 0x5abe58:c.instructions+=1;goto B5abe58;
case 0x5abe5d:goto L5abe5d;
case 0x5abe60:c.instructions+=2;goto B5abe60;
case 0x5abe65:c.instructions+=1;goto B5abe65;
case 0x5abe70:goto L5abe70;
case 0x5abe74:c.instructions+=93;goto B5abe74;
case 0x5abe78:c.instructions+=92;goto B5abe78;
case 0x5abe7c:c.instructions+=91;goto B5abe7c;
case 0x5abe7f:c.instructions+=90;goto B5abe7f;
case 0x5abe85:c.instructions+=89;goto B5abe85;
case 0x5abe88:c.instructions+=88;goto B5abe88;
case 0x5abe8e:c.instructions+=87;goto B5abe8e;
case 0x5abe91:c.instructions+=86;goto B5abe91;
case 0x5abe97:c.instructions+=85;goto B5abe97;
case 0x5abe9d:c.instructions+=84;goto B5abe9d;
case 0x5abe9f:c.instructions+=83;goto B5abe9f;
case 0x5abea3:c.instructions+=82;goto B5abea3;
case 0x5abea9:c.instructions+=81;goto B5abea9;
case 0x5abeaf:c.instructions+=80;goto B5abeaf;
case 0x5abeb5:c.instructions+=79;goto B5abeb5;
case 0x5abebb:c.instructions+=78;goto B5abebb;
case 0x5abebd:c.instructions+=77;goto B5abebd;
case 0x5abec1:c.instructions+=76;goto B5abec1;
case 0x5abec5:c.instructions+=75;goto B5abec5;
case 0x5abec9:c.instructions+=74;goto B5abec9;
case 0x5abecd:c.instructions+=73;goto B5abecd;
case 0x5abecf:c.instructions+=72;goto B5abecf;
case 0x5abed3:c.instructions+=71;goto B5abed3;
case 0x5abed7:c.instructions+=70;goto B5abed7;
case 0x5abedb:c.instructions+=69;goto B5abedb;
case 0x5abee1:c.instructions+=68;goto B5abee1;
case 0x5abee5:c.instructions+=67;goto B5abee5;
case 0x5abeeb:c.instructions+=66;goto B5abeeb;
case 0x5abeed:c.instructions+=65;goto B5abeed;
case 0x5abef3:c.instructions+=64;goto B5abef3;
case 0x5abef9:c.instructions+=63;goto B5abef9;
case 0x5abeff:c.instructions+=62;goto B5abeff;
case 0x5abf05:c.instructions+=61;goto B5abf05;
case 0x5abf07:c.instructions+=60;goto B5abf07;
case 0x5abf0d:c.instructions+=59;goto B5abf0d;
case 0x5abf13:c.instructions+=58;goto B5abf13;
case 0x5abf19:c.instructions+=57;goto B5abf19;
case 0x5abf1f:c.instructions+=56;goto B5abf1f;
case 0x5abf22:c.instructions+=55;goto B5abf22;
case 0x5abf24:c.instructions+=54;goto B5abf24;
case 0x5abf28:c.instructions+=53;goto B5abf28;
case 0x5abf2a:c.instructions+=52;goto B5abf2a;
case 0x5abf2e:c.instructions+=51;goto B5abf2e;
case 0x5abf30:c.instructions+=50;goto B5abf30;
case 0x5abf32:c.instructions+=49;goto B5abf32;
case 0x5abf36:c.instructions+=48;goto B5abf36;
case 0x5abf3a:c.instructions+=47;goto B5abf3a;
case 0x5abf40:c.instructions+=46;goto B5abf40;
case 0x5abf42:c.instructions+=45;goto B5abf42;
case 0x5abf48:c.instructions+=44;goto B5abf48;
case 0x5abf4b:c.instructions+=43;goto B5abf4b;
case 0x5abf4d:c.instructions+=42;goto B5abf4d;
case 0x5abf53:c.instructions+=41;goto B5abf53;
case 0x5abf59:c.instructions+=40;goto B5abf59;
case 0x5abf5f:c.instructions+=39;goto B5abf5f;
case 0x5abf65:c.instructions+=38;goto B5abf65;
case 0x5abf67:c.instructions+=37;goto B5abf67;
case 0x5abf6d:c.instructions+=36;goto B5abf6d;
case 0x5abf73:c.instructions+=35;goto B5abf73;
case 0x5abf79:c.instructions+=34;goto B5abf79;
case 0x5abf7f:c.instructions+=33;goto B5abf7f;
case 0x5abf81:c.instructions+=32;goto B5abf81;
case 0x5abf85:c.instructions+=31;goto B5abf85;
case 0x5abf87:c.instructions+=30;goto B5abf87;
case 0x5abf8b:c.instructions+=29;goto B5abf8b;
case 0x5abf8d:c.instructions+=28;goto B5abf8d;
case 0x5abf8f:c.instructions+=27;goto B5abf8f;
case 0x5abf93:c.instructions+=26;goto B5abf93;
case 0x5abf96:c.instructions+=25;goto B5abf96;
case 0x5abf9a:c.instructions+=24;goto B5abf9a;
case 0x5abfa0:c.instructions+=23;goto B5abfa0;
case 0x5abfa2:c.instructions+=22;goto B5abfa2;
case 0x5abfa8:c.instructions+=21;goto B5abfa8;
case 0x5abfab:c.instructions+=20;goto B5abfab;
case 0x5abfad:c.instructions+=19;goto B5abfad;
case 0x5abfb3:c.instructions+=18;goto B5abfb3;
case 0x5abfb9:c.instructions+=17;goto B5abfb9;
case 0x5abfbf:c.instructions+=16;goto B5abfbf;
case 0x5abfc5:c.instructions+=15;goto B5abfc5;
case 0x5abfc7:c.instructions+=14;goto B5abfc7;
case 0x5abfcd:c.instructions+=13;goto B5abfcd;
case 0x5abfd3:c.instructions+=12;goto B5abfd3;
case 0x5abfd9:c.instructions+=11;goto B5abfd9;
case 0x5abfdf:c.instructions+=10;goto B5abfdf;
case 0x5abfe2:c.instructions+=9;goto B5abfe2;
case 0x5abfe4:c.instructions+=8;goto B5abfe4;
case 0x5abfe8:c.instructions+=7;goto B5abfe8;
case 0x5abfea:c.instructions+=6;goto B5abfea;
case 0x5abfee:c.instructions+=5;goto B5abfee;
case 0x5abff0:c.instructions+=4;goto B5abff0;
case 0x5abff2:c.instructions+=3;goto B5abff2;
case 0x5abff6:c.instructions+=2;goto B5abff6;
case 0x5abffa:c.instructions+=1;goto B5abffa;
default:missing_instruction(c.pc);}
B5ab001:L5ab001:{c.instructions+=4;NFSU2_TR(0x5ab001);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab002:{NFSU2_TR(0x5ab002);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab005:{NFSU2_TR(0x5ab005);
__builtin_memmove((R+4),(R+24),4);
}
B5ab007:{NFSU2_TR(0x5ab007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab00cull));
TAIL_STATIC(0x5a3380u,5a3);
}
B5ab00c:L5ab00c:{c.instructions+=2;NFSU2_TR(0x5ab00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab00f:{NFSU2_TR(0x5ab00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab014ull));
TAIL_STATIC(0x5ed5d0u,5ed);
}
B5ab014:L5ab014:{c.instructions+=10;NFSU2_TR(0x5ab014);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab01a:{NFSU2_TR(0x5ab01a);
{u32 ea_=u32(u32(8001924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ab020:{NFSU2_TR(0x5ab020);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab023:{NFSU2_TR(0x5ab023);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ab025:{NFSU2_TR(0x5ab025);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ab02b:{NFSU2_TR(0x5ab02b);
{u32 ea_=u32(r4(R+0)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab031:{NFSU2_TR(0x5ab031);
{u32 ea_=u32(r4(R+0)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab037:{NFSU2_TR(0x5ab037);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab03b:{NFSU2_TR(0x5ab03b);
{u32 ea_=u32(u32(8372288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ab041:{NFSU2_TR(0x5ab041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab046ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ab046:L5ab046:{c.instructions+=7;NFSU2_TR(0x5ab046);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ab047:{NFSU2_TR(0x5ab047);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab049:{NFSU2_TR(0x5ab049);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab04d:{NFSU2_TR(0x5ab04d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab051:{NFSU2_TR(0x5ab051);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ab055:{NFSU2_TR(0x5ab055);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab059:{NFSU2_TR(0x5ab059);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ab09b;}}
}
B5ab05b:L5ab05b:{c.instructions+=6;NFSU2_TR(0x5ab05b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab05c:{NFSU2_TR(0x5ab05c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ab060:{NFSU2_TR(0x5ab060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab061:{NFSU2_TR(0x5ab061);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab064:{NFSU2_TR(0x5ab064);
__builtin_memmove((R+28),(R+0),4);
}
B5ab066:{NFSU2_TR(0x5ab066);
{goto L5ab070;}
}
B5ab070:L5ab070:{c.instructions+=3;NFSU2_TR(0x5ab070);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab074:{NFSU2_TR(0x5ab074);
__builtin_memmove(gp(0x7fc800),(R+0),4);
}
B5ab079:{NFSU2_TR(0x5ab079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab07eull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5ab07e:L5ab07e:{c.instructions+=3;NFSU2_TR(0x5ab07e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab07f:{NFSU2_TR(0x5ab07f);
__builtin_memmove((R+4),(R+12),4);
}
B5ab081:{NFSU2_TR(0x5ab081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab086ull));
TAIL_STATIC(0x5aa480u,5aa);
}
B5ab086:L5ab086:{c.instructions+=5;NFSU2_TR(0x5ab086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab089:{NFSU2_TR(0x5ab089);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5ab08c:{NFSU2_TR(0x5ab08c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab08d:{NFSU2_TR(0x5ab08d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab08e:{NFSU2_TR(0x5ab08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab093ull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B5ab093:L5ab093:{c.instructions+=3;NFSU2_TR(0x5ab093);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ab096:{NFSU2_TR(0x5ab096);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ab097:{NFSU2_TR(0x5ab097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab070u);}goto L5ab070;}}
}
B5ab099:L5ab099:{c.instructions+=2;NFSU2_TR(0x5ab099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab09a:{NFSU2_TR(0x5ab09a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ab09b:L5ab09b:{c.instructions+=4;NFSU2_TR(0x5ab09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab09f:{NFSU2_TR(0x5ab09f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0a0:{NFSU2_TR(0x5ab0a0);
__builtin_memmove((R+4),(R+24),4);
}
B5ab0a2:{NFSU2_TR(0x5ab0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab0a7ull));
TAIL_STATIC(0x5a2b60u,5a2);
}
B5ab0a7:L5ab0a7:{c.instructions+=5;NFSU2_TR(0x5ab0a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab0ab:{NFSU2_TR(0x5ab0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab0ac:{NFSU2_TR(0x5ab0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab0ad:{NFSU2_TR(0x5ab0ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab0ae:{NFSU2_TR(0x5ab0ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab0c0:L5ab0c0:{c.instructions+=5;NFSU2_TR(0x5ab0c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0c1:{NFSU2_TR(0x5ab0c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0c2:{NFSU2_TR(0x5ab0c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0c3:{NFSU2_TR(0x5ab0c3);
__builtin_memmove((R+24),(R+4),4);
}
B5ab0c5:{NFSU2_TR(0x5ab0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab0caull));
TAIL_STATIC(0x5a0d80u,5a0);
}
B5ab0ca:L5ab0ca:{c.instructions+=10;NFSU2_TR(0x5ab0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab0cd:{NFSU2_TR(0x5ab0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab0d0:{NFSU2_TR(0x5ab0d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0d2:{NFSU2_TR(0x5ab0d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab0d5:{NFSU2_TR(0x5ab0d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0d6:{NFSU2_TR(0x5ab0d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab0d9:{NFSU2_TR(0x5ab0d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0da:{NFSU2_TR(0x5ab0da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0db:{NFSU2_TR(0x5ab0db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0dc:{NFSU2_TR(0x5ab0dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab0e1ull));
TAIL_STATIC(0x5a5e20u,5a5);
}
B5ab0e1:L5ab0e1:{c.instructions+=6;NFSU2_TR(0x5ab0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab0e4:{NFSU2_TR(0x5ab0e4);
__builtin_memmove((R+12),(R+0),4);
}
B5ab0e6:{NFSU2_TR(0x5ab0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab0e9:{NFSU2_TR(0x5ab0e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5ab0ec:{NFSU2_TR(0x5ab0ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab0ed:{NFSU2_TR(0x5ab0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab0f2ull));
TAIL_STATIC(0x5a3e80u,5a3);
}
B5ab0f2:L5ab0f2:{c.instructions+=2;NFSU2_TR(0x5ab0f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ab0f4:{NFSU2_TR(0x5ab0f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab105;}}
}
B5ab0f6:L5ab0f6:{c.instructions+=4;NFSU2_TR(0x5ab0f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab0fc:{NFSU2_TR(0x5ab0fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab0fe:{NFSU2_TR(0x5ab0fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab101:{NFSU2_TR(0x5ab101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab10e;}}
}
B5ab103:L5ab103:{c.instructions+=1;NFSU2_TR(0x5ab103);
{goto L5ab107;}
}
B5ab105:L5ab105:{c.instructions+=1;NFSU2_TR(0x5ab105);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab107:L5ab107:{c.instructions+=2;NFSU2_TR(0x5ab107);
__builtin_memmove((R+4),(R+24),4);
}
B5ab109:{NFSU2_TR(0x5ab109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab10eull));
TAIL_STATIC(0x5a0d80u,5a0);
}
B5ab10e:L5ab10e:{c.instructions+=2;NFSU2_TR(0x5ab10e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5ab111:{NFSU2_TR(0x5ab111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab120;}}
}
B5ab113:L5ab113:{c.instructions+=2;NFSU2_TR(0x5ab113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab116:{NFSU2_TR(0x5ab116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ab120:L5ab120:{c.instructions+=6;NFSU2_TR(0x5ab120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ab122:{NFSU2_TR(0x5ab122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab123:{NFSU2_TR(0x5ab123);
__builtin_memmove((R+4),(R+24),4);
}
B5ab125:{NFSU2_TR(0x5ab125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab126:{NFSU2_TR(0x5ab126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab127:{NFSU2_TR(0x5ab127);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ab130:L5ab130:{c.instructions+=6;NFSU2_TR(0x5ab130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab131:{NFSU2_TR(0x5ab131);
__builtin_memmove((R+24),(R+4),4);
}
B5ab133:{NFSU2_TR(0x5ab133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab136:{NFSU2_TR(0x5ab136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ab138:{NFSU2_TR(0x5ab138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab139:{NFSU2_TR(0x5ab139);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab13cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ab13c:L5ab13c:{c.instructions+=3;NFSU2_TR(0x5ab13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab13f:{NFSU2_TR(0x5ab13f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab141:{NFSU2_TR(0x5ab141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab146ull));
TAIL_STATIC(0x59e620u,59e);
}
B5ab146:L5ab146:{c.instructions+=3;NFSU2_TR(0x5ab146);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab149:{NFSU2_TR(0x5ab149);
__builtin_memmove((R+4),(R+28),4);
}
B5ab14b:{NFSU2_TR(0x5ab14b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab150ull));
TAIL_STATIC(0x5a2fd0u,5a2);
}
B5ab150:L5ab150:{c.instructions+=3;NFSU2_TR(0x5ab150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab153:{NFSU2_TR(0x5ab153);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ab155:{NFSU2_TR(0x5ab155);
if(r1(R+518)){{goto L5ab16c;}}
}
B5ab157:L5ab157:{c.instructions+=1;NFSU2_TR(0x5ab157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab15cull));
TAIL_STATIC(0x5ed290u,5ed);
}
B5ab15c:L5ab15c:{c.instructions+=2;NFSU2_TR(0x5ab15c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab15e:{NFSU2_TR(0x5ab15e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab173;}}
}
B5ab160:L5ab160:{c.instructions+=2;NFSU2_TR(0x5ab160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab163:{NFSU2_TR(0x5ab163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab168ull));
TAIL_STATIC(0x5ed300u,5ed);
}
B5ab168:L5ab168:{c.instructions+=2;NFSU2_TR(0x5ab168);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab16a:{NFSU2_TR(0x5ab16a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab173;}}
}
B5ab16c:L5ab16c:{c.instructions+=2;NFSU2_TR(0x5ab16c);
__builtin_memmove((R+4),(R+28),4);
}
B5ab16e:{NFSU2_TR(0x5ab16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab173ull));
TAIL_STATIC(0x5a3410u,5a3);
}
B5ab173:L5ab173:{c.instructions+=5;NFSU2_TR(0x5ab173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab176:{NFSU2_TR(0x5ab176);
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
B5ab178:{NFSU2_TR(0x5ab178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab179:{NFSU2_TR(0x5ab179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab17a:{NFSU2_TR(0x5ab17a);
if(r1(R+518)){{goto L5ab181;}}
}
B5ab17c:L5ab17c:{c.instructions+=1;NFSU2_TR(0x5ab17c);
TAIL_STATIC(0x5ecf70u,5ec);
}
B5ab181:L5ab181:{c.instructions+=1;NFSU2_TR(0x5ab181);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab190:L5ab190:{c.instructions+=4;NFSU2_TR(0x5ab190);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab191:{NFSU2_TR(0x5ab191);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab192:{NFSU2_TR(0x5ab192);
__builtin_memmove((R+24),(R+4),4);
}
B5ab194:{NFSU2_TR(0x5ab194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab199ull));
TAIL_STATIC(0x5a3700u,5a3);
}
B5ab199:L5ab199:{c.instructions+=3;NFSU2_TR(0x5ab199);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab19f:{NFSU2_TR(0x5ab19f);
w4(R+8,u32(0x4ull));
}
B5ab1a4:{NFSU2_TR(0x5ab1a4);
{goto L5ab1b0;}
}
B5ab1b0:L5ab1b0:{c.instructions+=5;NFSU2_TR(0x5ab1b0);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab1b6:{NFSU2_TR(0x5ab1b6);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab1bc:{NFSU2_TR(0x5ab1bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab1be:{NFSU2_TR(0x5ab1be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab1c1:{NFSU2_TR(0x5ab1c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab1e8;}}
}
B5ab1c3:L5ab1c3:{c.instructions+=6;NFSU2_TR(0x5ab1c3);
{u32 ea_=u32(r4(R+4)+u32(4294967148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab1c9:{NFSU2_TR(0x5ab1c9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ab1cb:{NFSU2_TR(0x5ab1cb);
{u32 ea_=u32(u32(8001880u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab1d1:{NFSU2_TR(0x5ab1d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab1d3:{NFSU2_TR(0x5ab1d3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab1d6:{NFSU2_TR(0x5ab1d6);
if(r1(R+514)){{goto L5ab1e8;}}
}
B5ab1d8:L5ab1d8:{c.instructions+=2;NFSU2_TR(0x5ab1d8);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5ab1de:{NFSU2_TR(0x5ab1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff6cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ab1e8:L5ab1e8:{c.instructions+=5;NFSU2_TR(0x5ab1e8);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab1ee:{NFSU2_TR(0x5ab1ee);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab1f4:{NFSU2_TR(0x5ab1f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab1f6:{NFSU2_TR(0x5ab1f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab1f9:{NFSU2_TR(0x5ab1f9);
if(r1(R+514)){{goto L5ab201;}}
}
B5ab1fb:L5ab1fb:{c.instructions+=1;NFSU2_TR(0x5ab1fb);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5ab201:L5ab201:{c.instructions+=3;NFSU2_TR(0x5ab201);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5ab204:{NFSU2_TR(0x5ab204);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5ab205:{NFSU2_TR(0x5ab205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab1b0u);}goto L5ab1b0;}}
}
B5ab207:L5ab207:{c.instructions+=6;NFSU2_TR(0x5ab207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab20a:{NFSU2_TR(0x5ab20a);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab210:{NFSU2_TR(0x5ab210);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab216:{NFSU2_TR(0x5ab216);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab218:{NFSU2_TR(0x5ab218);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab21b:{NFSU2_TR(0x5ab21b);
if(r1(R+514)){{goto L5ab237;}}
}
B5ab21d:L5ab21d:{c.instructions+=6;NFSU2_TR(0x5ab21d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab220:{NFSU2_TR(0x5ab220);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab223:{NFSU2_TR(0x5ab223);
{u32 ea_=u32(r4(R+4)+u32(440u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab229:{NFSU2_TR(0x5ab229);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab22f:{NFSU2_TR(0x5ab22f);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab235:{NFSU2_TR(0x5ab235);
{goto L5ab29c;}
}
B5ab237:L5ab237:{c.instructions+=5;NFSU2_TR(0x5ab237);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab23d:{NFSU2_TR(0x5ab23d);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab243:{NFSU2_TR(0x5ab243);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab245:{NFSU2_TR(0x5ab245);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab248:{NFSU2_TR(0x5ab248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab264;}}
}
B5ab24a:L5ab24a:{c.instructions+=6;NFSU2_TR(0x5ab24a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab24d:{NFSU2_TR(0x5ab24d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab250:{NFSU2_TR(0x5ab250);
{u32 ea_=u32(r4(R+4)+u32(444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab256:{NFSU2_TR(0x5ab256);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab25c:{NFSU2_TR(0x5ab25c);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab262:{NFSU2_TR(0x5ab262);
{goto L5ab29c;}
}
B5ab264:L5ab264:{c.instructions+=12;NFSU2_TR(0x5ab264);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab267:{NFSU2_TR(0x5ab267);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab26a:{NFSU2_TR(0x5ab26a);
{u32 ea_=u32(r4(R+4)+u32(440u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab270:{NFSU2_TR(0x5ab270);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab276:{NFSU2_TR(0x5ab276);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab27c:{NFSU2_TR(0x5ab27c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab27f:{NFSU2_TR(0x5ab27f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab282:{NFSU2_TR(0x5ab282);
{u32 ea_=u32(r4(R+4)+u32(444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab288:{NFSU2_TR(0x5ab288);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab28e:{NFSU2_TR(0x5ab28e);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab294:{NFSU2_TR(0x5ab294);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab296:{NFSU2_TR(0x5ab296);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab29c:L5ab29c:{c.instructions+=7;NFSU2_TR(0x5ab29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab2a2:{NFSU2_TR(0x5ab2a2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab2a6:{NFSU2_TR(0x5ab2a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab2a9:{NFSU2_TR(0x5ab2a9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab2ad:{NFSU2_TR(0x5ab2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab2b3:{NFSU2_TR(0x5ab2b3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab2ba:{NFSU2_TR(0x5ab2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab364;}}
}
B5ab2c0:L5ab2c0:{c.instructions+=2;NFSU2_TR(0x5ab2c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab2c3:{NFSU2_TR(0x5ab2c3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ab2cf;}}
}
B5ab2c5:L5ab2c5:{c.instructions+=1;NFSU2_TR(0x5ab2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ab2cf:L5ab2cf:{c.instructions+=5;NFSU2_TR(0x5ab2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab2d5:{NFSU2_TR(0x5ab2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab2db:{NFSU2_TR(0x5ab2db);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ab2dc:{NFSU2_TR(0x5ab2dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab2de:{NFSU2_TR(0x5ab2de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ab317;}}
}
B5ab2e0:L5ab2e0:{c.instructions+=5;NFSU2_TR(0x5ab2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab2e6:{NFSU2_TR(0x5ab2e6);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24)+u32(412u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab2ed:{NFSU2_TR(0x5ab2ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab2ef:{NFSU2_TR(0x5ab2ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab2f2:{NFSU2_TR(0x5ab2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab317;}}
}
B5ab2f4:L5ab2f4:{c.instructions+=10;NFSU2_TR(0x5ab2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab2f7:{NFSU2_TR(0x5ab2f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab2f9:{NFSU2_TR(0x5ab2f9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab2fd:{NFSU2_TR(0x5ab2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab303:{NFSU2_TR(0x5ab303);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab30a:{NFSU2_TR(0x5ab30a);
__builtin_memmove((R+8),(R+0),4);
}
B5ab30c:{NFSU2_TR(0x5ab30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab312:{NFSU2_TR(0x5ab312);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5ab313:{NFSU2_TR(0x5ab313);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab315:{NFSU2_TR(0x5ab315);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab2e0u);}goto L5ab2e0;}}
}
B5ab317:L5ab317:{c.instructions+=4;NFSU2_TR(0x5ab317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab31d:{NFSU2_TR(0x5ab31d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ab31e:{NFSU2_TR(0x5ab31e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab321:{NFSU2_TR(0x5ab321);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ab37a;}}
}
B5ab323:L5ab323:{c.instructions+=1;NFSU2_TR(0x5ab323);
{goto L5ab330;}
}
B5ab330:L5ab330:{c.instructions+=5;NFSU2_TR(0x5ab330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab336:{NFSU2_TR(0x5ab336);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab33d:{NFSU2_TR(0x5ab33d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab33f:{NFSU2_TR(0x5ab33f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab342:{NFSU2_TR(0x5ab342);
if(r1(R+514)){{goto L5ab37a;}}
}
B5ab344:L5ab344:{c.instructions+=9;NFSU2_TR(0x5ab344);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab347:{NFSU2_TR(0x5ab347);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab349:{NFSU2_TR(0x5ab349);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab34d:{NFSU2_TR(0x5ab34d);
__builtin_memmove((R+8),(R+0),4);
}
B5ab34f:{NFSU2_TR(0x5ab34f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5ab350:{NFSU2_TR(0x5ab350);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab353:{NFSU2_TR(0x5ab353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab359:{NFSU2_TR(0x5ab359);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab360:{NFSU2_TR(0x5ab360);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab330u);}goto L5ab330;}}
}
B5ab362:L5ab362:{c.instructions+=1;NFSU2_TR(0x5ab362);
{goto L5ab37a;}
}
B5ab364:L5ab364:{c.instructions+=2;NFSU2_TR(0x5ab364);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ab366:{NFSU2_TR(0x5ab366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab37a;}}
}
B5ab368:L5ab368:{c.instructions+=4;NFSU2_TR(0x5ab368);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab36a:{NFSU2_TR(0x5ab36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab370:{NFSU2_TR(0x5ab370);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab374:{NFSU2_TR(0x5ab374);
{u32 ea_=u32(r4(R+4)+u32(464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab37a:L5ab37a:{c.instructions+=4;NFSU2_TR(0x5ab37a);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab380:{NFSU2_TR(0x5ab380);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab382:{NFSU2_TR(0x5ab382);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab385:{NFSU2_TR(0x5ab385);
if(r1(R+514)){{goto L5ab398;}}
}
B5ab387:L5ab387:{c.instructions+=6;NFSU2_TR(0x5ab387);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab38d:{NFSU2_TR(0x5ab38d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab38f:{NFSU2_TR(0x5ab38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab395:{NFSU2_TR(0x5ab395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab396:{NFSU2_TR(0x5ab396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab397:{NFSU2_TR(0x5ab397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab398:L5ab398:{c.instructions+=4;NFSU2_TR(0x5ab398);
{u32 ea_=u32(r4(R+4)+u32(504u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab39e:{NFSU2_TR(0x5ab39e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab3a0:{NFSU2_TR(0x5ab3a0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab3a3:{NFSU2_TR(0x5ab3a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab3b6;}}
}
B5ab3a5:L5ab3a5:{c.instructions+=6;NFSU2_TR(0x5ab3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab3ab:{NFSU2_TR(0x5ab3ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab3ad:{NFSU2_TR(0x5ab3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab3b3:{NFSU2_TR(0x5ab3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab3b4:{NFSU2_TR(0x5ab3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab3b5:{NFSU2_TR(0x5ab3b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab3b6:L5ab3b6:{c.instructions+=4;NFSU2_TR(0x5ab3b6);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab3bc:{NFSU2_TR(0x5ab3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab3bd:{NFSU2_TR(0x5ab3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab3be:{NFSU2_TR(0x5ab3be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab3c0:L5ab3c0:{c.instructions+=15;NFSU2_TR(0x5ab3c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab3c1:{NFSU2_TR(0x5ab3c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab3c2:{NFSU2_TR(0x5ab3c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab3c3:{NFSU2_TR(0x5ab3c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab3c4:{NFSU2_TR(0x5ab3c4);
__builtin_memmove((R+24),(R+4),4);
}
B5ab3c6:{NFSU2_TR(0x5ab3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab3c9:{NFSU2_TR(0x5ab3c9);
w4(R+0,u32(0x1ull));
}
B5ab3ce:{NFSU2_TR(0x5ab3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab3d4:{NFSU2_TR(0x5ab3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab3d7:{NFSU2_TR(0x5ab3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab3dd:{NFSU2_TR(0x5ab3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab3e0:{NFSU2_TR(0x5ab3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab3e6:{NFSU2_TR(0x5ab3e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ab3e8:{NFSU2_TR(0x5ab3e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab3ea:{NFSU2_TR(0x5ab3ea);
if(r1(R+518)){{goto L5ab404;}}
}
B5ab3ec:L5ab3ec:{c.instructions+=5;NFSU2_TR(0x5ab3ec);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab3f2:{NFSU2_TR(0x5ab3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab3f5:{NFSU2_TR(0x5ab3f5);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ab3f8:{NFSU2_TR(0x5ab3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab3fe:{NFSU2_TR(0x5ab3fe);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab404:L5ab404:{c.instructions+=6;NFSU2_TR(0x5ab404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab407:{NFSU2_TR(0x5ab407);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab40a:{NFSU2_TR(0x5ab40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab40d:{NFSU2_TR(0x5ab40d);
__builtin_memmove((R+4),(R+24),4);
}
B5ab40f:{NFSU2_TR(0x5ab40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x194ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ab419:{NFSU2_TR(0x5ab419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab41eull));
TAIL_STATIC(0x5a29a0u,5a2);
}
B5ab41e:L5ab41e:{c.instructions+=7;NFSU2_TR(0x5ab41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab421:{NFSU2_TR(0x5ab421);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab427:{NFSU2_TR(0x5ab427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab42a:{NFSU2_TR(0x5ab42a);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab430:{NFSU2_TR(0x5ab430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab433:{NFSU2_TR(0x5ab433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ab435:{NFSU2_TR(0x5ab435);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab438ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ab438:L5ab438:{c.instructions+=11;NFSU2_TR(0x5ab438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab43b:{NFSU2_TR(0x5ab43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab441:{NFSU2_TR(0x5ab441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab444:{NFSU2_TR(0x5ab444);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab44a:{NFSU2_TR(0x5ab44a);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab450:{NFSU2_TR(0x5ab450);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab456:{NFSU2_TR(0x5ab456);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab45a:{NFSU2_TR(0x5ab45a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab45e:{NFSU2_TR(0x5ab45e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab460:{NFSU2_TR(0x5ab460);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab463:{NFSU2_TR(0x5ab463);
if(r1(R+518)){{goto L5ab46b;}}
}
B5ab465:L5ab465:{c.instructions+=2;NFSU2_TR(0x5ab465);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab467:{NFSU2_TR(0x5ab467);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab46b:L5ab46b:{c.instructions+=30;NFSU2_TR(0x5ab46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab46e:{NFSU2_TR(0x5ab46e);
{u32 ea_=u32(r4(R+8)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab474:{NFSU2_TR(0x5ab474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab477:{NFSU2_TR(0x5ab477);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab47d:{NFSU2_TR(0x5ab47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab480:{NFSU2_TR(0x5ab480);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab483:{NFSU2_TR(0x5ab483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab486:{NFSU2_TR(0x5ab486);
{u32 ea_=u32(r4(R+8)+u32(996u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab48c:{NFSU2_TR(0x5ab48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab48f:{NFSU2_TR(0x5ab48f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ab491:{NFSU2_TR(0x5ab491);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab497:{NFSU2_TR(0x5ab497);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab49a:{NFSU2_TR(0x5ab49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab49d:{NFSU2_TR(0x5ab49d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B5ab4a2:{NFSU2_TR(0x5ab4a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ab4a4:{NFSU2_TR(0x5ab4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab4a7:{NFSU2_TR(0x5ab4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab4aa:{NFSU2_TR(0x5ab4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab4ad:{NFSU2_TR(0x5ab4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ab4b0:{NFSU2_TR(0x5ab4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab4b6:{NFSU2_TR(0x5ab4b6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab4b9:{NFSU2_TR(0x5ab4b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B5ab4bc:{NFSU2_TR(0x5ab4bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab4bf:{NFSU2_TR(0x5ab4bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab4c0:{NFSU2_TR(0x5ab4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab4c4:{NFSU2_TR(0x5ab4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab4c5:{NFSU2_TR(0x5ab4c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab4c6:{NFSU2_TR(0x5ab4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab4c9:{NFSU2_TR(0x5ab4c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab4ca:{NFSU2_TR(0x5ab4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab4cfull));
TAIL_STATIC(0x5a44a0u,5a4);
}
B5ab4cf:L5ab4cf:{c.instructions+=4;NFSU2_TR(0x5ab4cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab4d3:{NFSU2_TR(0x5ab4d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ab4d9:{NFSU2_TR(0x5ab4d9);
{u32 ea_=u32(u32(8372288u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ab4df:{NFSU2_TR(0x5ab4df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab4e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ab4e4:L5ab4e4:{c.instructions+=7;NFSU2_TR(0x5ab4e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ab4e5:{NFSU2_TR(0x5ab4e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab4e7:{NFSU2_TR(0x5ab4e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab4eb:{NFSU2_TR(0x5ab4eb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab4ef:{NFSU2_TR(0x5ab4ef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ab4f3:{NFSU2_TR(0x5ab4f3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab4f7:{NFSU2_TR(0x5ab4f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ab528;}}
}
B5ab4f9:L5ab4f9:{c.instructions+=4;NFSU2_TR(0x5ab4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ab4fd:{NFSU2_TR(0x5ab4fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab4fe:{NFSU2_TR(0x5ab4fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab501:{NFSU2_TR(0x5ab501);
__builtin_memmove((R+28),(R+0),4);
}
B5ab503:L5ab503:{c.instructions+=5;NFSU2_TR(0x5ab503);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab507:{NFSU2_TR(0x5ab507);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab508:{NFSU2_TR(0x5ab508);
__builtin_memmove((R+4),(R+12),4);
}
B5ab50a:{NFSU2_TR(0x5ab50a);
__builtin_memmove(gp(0x7fc800),(R+0),4);
}
B5ab50f:{NFSU2_TR(0x5ab50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab514ull));
TAIL_STATIC(0x5aa480u,5aa);
}
B5ab514:L5ab514:{c.instructions+=5;NFSU2_TR(0x5ab514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab517:{NFSU2_TR(0x5ab517);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5ab51a:{NFSU2_TR(0x5ab51a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab51b:{NFSU2_TR(0x5ab51b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab51c:{NFSU2_TR(0x5ab51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab521ull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B5ab521:L5ab521:{c.instructions+=3;NFSU2_TR(0x5ab521);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ab524:{NFSU2_TR(0x5ab524);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ab525:{NFSU2_TR(0x5ab525);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab503u);}goto L5ab503;}}
}
B5ab527:L5ab527:{c.instructions+=1;NFSU2_TR(0x5ab527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab528:L5ab528:{c.instructions+=4;NFSU2_TR(0x5ab528);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab52c:{NFSU2_TR(0x5ab52c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab52d:{NFSU2_TR(0x5ab52d);
__builtin_memmove((R+4),(R+24),4);
}
B5ab52f:{NFSU2_TR(0x5ab52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab534ull));
TAIL_STATIC(0x5a2b60u,5a2);
}
B5ab534:L5ab534:{c.instructions+=6;NFSU2_TR(0x5ab534);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab538:{NFSU2_TR(0x5ab538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab539:{NFSU2_TR(0x5ab539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ab53a:{NFSU2_TR(0x5ab53a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab53b:{NFSU2_TR(0x5ab53b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab53c:{NFSU2_TR(0x5ab53c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab540:L5ab540:{c.instructions+=19;NFSU2_TR(0x5ab540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab541:{NFSU2_TR(0x5ab541);
__builtin_memmove((R+20),(R+16),4);
}
B5ab543:{NFSU2_TR(0x5ab543);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ab546:{NFSU2_TR(0x5ab546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B5ab54c:{NFSU2_TR(0x5ab54c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab54d:{NFSU2_TR(0x5ab54d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab54e:{NFSU2_TR(0x5ab54e);
__builtin_memmove((R+24),(R+4),4);
}
B5ab550:{NFSU2_TR(0x5ab550);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab556:{NFSU2_TR(0x5ab556);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab55a:{NFSU2_TR(0x5ab55a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab55d:{NFSU2_TR(0x5ab55d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ab563:{NFSU2_TR(0x5ab563);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab569:{NFSU2_TR(0x5ab569);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab56a:{NFSU2_TR(0x5ab56a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ab56c:{NFSU2_TR(0x5ab56c);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab573:{NFSU2_TR(0x5ab573);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab577:{NFSU2_TR(0x5ab577);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab57b:{NFSU2_TR(0x5ab57b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab57f:{NFSU2_TR(0x5ab57f);
}
B5ab580:L5ab580:{c.instructions+=29;NFSU2_TR(0x5ab580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab583:{NFSU2_TR(0x5ab583);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab589:{NFSU2_TR(0x5ab589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab58c:{NFSU2_TR(0x5ab58c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ab58e:{NFSU2_TR(0x5ab58e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ab592:{NFSU2_TR(0x5ab592);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab598:{NFSU2_TR(0x5ab598);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5ab59b:{NFSU2_TR(0x5ab59b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ab59d:{NFSU2_TR(0x5ab59d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab5a1:{NFSU2_TR(0x5ab5a1);
{u32 ea_=u32(r4(R+0)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab5a7:{NFSU2_TR(0x5ab5a7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ab5a9:{NFSU2_TR(0x5ab5a9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab5ad:{NFSU2_TR(0x5ab5ad);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab5af:{NFSU2_TR(0x5ab5af);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab5b2:{NFSU2_TR(0x5ab5b2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab5b6:{NFSU2_TR(0x5ab5b6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab5b9:{NFSU2_TR(0x5ab5b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab5bd:{NFSU2_TR(0x5ab5bd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab5c1:{NFSU2_TR(0x5ab5c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab5c2:{NFSU2_TR(0x5ab5c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab5c3:{NFSU2_TR(0x5ab5c3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab5ca:{NFSU2_TR(0x5ab5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab5d1:{NFSU2_TR(0x5ab5d1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ab5d3:{NFSU2_TR(0x5ab5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab5d7:{NFSU2_TR(0x5ab5d7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab5db:{NFSU2_TR(0x5ab5db);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ab5df:{NFSU2_TR(0x5ab5df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab5e0:{NFSU2_TR(0x5ab5e0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab5e4:{NFSU2_TR(0x5ab5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab5e9ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5ab5e9:L5ab5e9:{c.instructions+=8;NFSU2_TR(0x5ab5e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab5ed:{NFSU2_TR(0x5ab5ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab5f1:{NFSU2_TR(0x5ab5f1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5ab5f4:{NFSU2_TR(0x5ab5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab5f7:{NFSU2_TR(0x5ab5f7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ab5f9:{NFSU2_TR(0x5ab5f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ab5fc:{NFSU2_TR(0x5ab5fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab5fe:{NFSU2_TR(0x5ab5fe);
if(r1(R+518)){{goto L5ab7e4;}}
}
B5ab604:L5ab604:{c.instructions+=14;NFSU2_TR(0x5ab604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab607:{NFSU2_TR(0x5ab607);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab60b:{NFSU2_TR(0x5ab60b);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab611:{NFSU2_TR(0x5ab611);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab614:{NFSU2_TR(0x5ab614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab617:{NFSU2_TR(0x5ab617);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab618:{NFSU2_TR(0x5ab618);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ab61e:{NFSU2_TR(0x5ab61e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab61f:{NFSU2_TR(0x5ab61f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab623:{NFSU2_TR(0x5ab623);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab627:{NFSU2_TR(0x5ab627);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab62d:{NFSU2_TR(0x5ab62d);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab633:{NFSU2_TR(0x5ab633);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab637:{NFSU2_TR(0x5ab637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab63cull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5ab63c:L5ab63c:{c.instructions+=8;NFSU2_TR(0x5ab63c);
w4(R+0,u32(r2(R+0)));
}
B5ab63f:{NFSU2_TR(0x5ab63f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab643:{NFSU2_TR(0x5ab643);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ab646:{NFSU2_TR(0x5ab646);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab649:{NFSU2_TR(0x5ab649);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab64d:{NFSU2_TR(0x5ab64d);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab653:{NFSU2_TR(0x5ab653);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab657:{NFSU2_TR(0x5ab657);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ab676;}}
}
B5ab659:L5ab659:{c.instructions+=6;NFSU2_TR(0x5ab659);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5ab660:{NFSU2_TR(0x5ab660);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab664:{NFSU2_TR(0x5ab664);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab668:{NFSU2_TR(0x5ab668);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab66e:{NFSU2_TR(0x5ab66e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab672:{NFSU2_TR(0x5ab672);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab676:L5ab676:{c.instructions+=5;NFSU2_TR(0x5ab676);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab67a:{NFSU2_TR(0x5ab67a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab67b:{NFSU2_TR(0x5ab67b);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab681:{NFSU2_TR(0x5ab681);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab684:{NFSU2_TR(0x5ab684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab689ull));
TAIL_STATIC(0x43c350u,43c);
}
B5ab689:L5ab689:{c.instructions+=4;NFSU2_TR(0x5ab689);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab68d:{NFSU2_TR(0x5ab68d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab691:{NFSU2_TR(0x5ab691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab692:{NFSU2_TR(0x5ab692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab697ull));
TAIL_STATIC(0x43c350u,43c);
}
B5ab697:L5ab697:{c.instructions+=35;NFSU2_TR(0x5ab697);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab69b:{NFSU2_TR(0x5ab69b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab69f:{NFSU2_TR(0x5ab69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab6a2:{NFSU2_TR(0x5ab6a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab6a6:{NFSU2_TR(0x5ab6a6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ab6a8:{NFSU2_TR(0x5ab6a8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab6ac:{NFSU2_TR(0x5ab6ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ab6af:{NFSU2_TR(0x5ab6af);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ab6b1:{NFSU2_TR(0x5ab6b1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab6b5:{NFSU2_TR(0x5ab6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab6b9:{NFSU2_TR(0x5ab6b9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab6bd:{NFSU2_TR(0x5ab6bd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab6c1:{NFSU2_TR(0x5ab6c1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab6c5:{NFSU2_TR(0x5ab6c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab6c7:{NFSU2_TR(0x5ab6c7);
{u32 ea_=u32(r4(R+0)+r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab6cb:{NFSU2_TR(0x5ab6cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab6cf:{NFSU2_TR(0x5ab6cf);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab6d2:{NFSU2_TR(0x5ab6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab6d5:{NFSU2_TR(0x5ab6d5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ab6d7:{NFSU2_TR(0x5ab6d7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ab6d9:{NFSU2_TR(0x5ab6d9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab6db:{NFSU2_TR(0x5ab6db);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab6e1:{NFSU2_TR(0x5ab6e1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ab6e3:{NFSU2_TR(0x5ab6e3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ab6e5:{NFSU2_TR(0x5ab6e5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab6e9:{NFSU2_TR(0x5ab6e9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab6ed:{NFSU2_TR(0x5ab6ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab6ef:{NFSU2_TR(0x5ab6ef);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ab6f1:{NFSU2_TR(0x5ab6f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab6f5:{NFSU2_TR(0x5ab6f5);
{u32 ea_=u32(u32(8001900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab6fb:{NFSU2_TR(0x5ab6fb);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab701:{NFSU2_TR(0x5ab701);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab705:{NFSU2_TR(0x5ab705);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab707:{NFSU2_TR(0x5ab707);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab70a:{NFSU2_TR(0x5ab70a);
if(r1(R+514)){{goto L5ab71a;}}
}
B5ab70c:L5ab70c:{c.instructions+=3;NFSU2_TR(0x5ab70c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab70e:{NFSU2_TR(0x5ab70e);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab714:{NFSU2_TR(0x5ab714);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab71a:L5ab71a:{c.instructions+=6;NFSU2_TR(0x5ab71a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab71e:{NFSU2_TR(0x5ab71e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab720:{NFSU2_TR(0x5ab720);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab726:{NFSU2_TR(0x5ab726);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab728:{NFSU2_TR(0x5ab728);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab72b:{NFSU2_TR(0x5ab72b);
if(r1(R+514)){{goto L5ab733;}}
}
B5ab72d:L5ab72d:{c.instructions+=1;NFSU2_TR(0x5ab72d);
{u32 ea_=u32(u32(8001976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab733:L5ab733:{c.instructions+=5;NFSU2_TR(0x5ab733);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab737:{NFSU2_TR(0x5ab737);
{u32 ea_=u32(u32(8001940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab73d:{NFSU2_TR(0x5ab73d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab73f:{NFSU2_TR(0x5ab73f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab742:{NFSU2_TR(0x5ab742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab74b;}}
}
B5ab744:L5ab744:{c.instructions+=2;NFSU2_TR(0x5ab744);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab748:{NFSU2_TR(0x5ab748);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+8)),r1(U+0));
}
B5ab74b:L5ab74b:{c.instructions+=14;NFSU2_TR(0x5ab74b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab74e:{NFSU2_TR(0x5ab74e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab750:{NFSU2_TR(0x5ab750);
{u32 ea_=u32(u32(8001884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab756:{NFSU2_TR(0x5ab756);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ab75e:{NFSU2_TR(0x5ab75e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ab760:{NFSU2_TR(0x5ab760);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ab762:{NFSU2_TR(0x5ab762);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ab764:{NFSU2_TR(0x5ab764);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab768:{NFSU2_TR(0x5ab768);
{u32 ea_=u32(u32(8001888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab76e:{NFSU2_TR(0x5ab76e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab772:{NFSU2_TR(0x5ab772);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ab774:{NFSU2_TR(0x5ab774);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab778:{NFSU2_TR(0x5ab778);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab77a:{NFSU2_TR(0x5ab77a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ab795;}}
}
B5ab77c:L5ab77c:{c.instructions+=5;NFSU2_TR(0x5ab77c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ab783:{NFSU2_TR(0x5ab783);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab787:{NFSU2_TR(0x5ab787);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ab78b:{NFSU2_TR(0x5ab78b);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab791:{NFSU2_TR(0x5ab791);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab795:L5ab795:{c.instructions+=5;NFSU2_TR(0x5ab795);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab799:{NFSU2_TR(0x5ab799);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab79a:{NFSU2_TR(0x5ab79a);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab7a0:{NFSU2_TR(0x5ab7a0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab7a3:{NFSU2_TR(0x5ab7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab7a8ull));
TAIL_STATIC(0x43c350u,43c);
}
B5ab7a8:L5ab7a8:{c.instructions+=4;NFSU2_TR(0x5ab7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab7ac:{NFSU2_TR(0x5ab7ac);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab7b0:{NFSU2_TR(0x5ab7b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab7b1:{NFSU2_TR(0x5ab7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab7b6ull));
TAIL_STATIC(0x43c350u,43c);
}
B5ab7b6:L5ab7b6:{c.instructions+=16;NFSU2_TR(0x5ab7b6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab7ba:{NFSU2_TR(0x5ab7ba);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab7be:{NFSU2_TR(0x5ab7be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ab7c1:{NFSU2_TR(0x5ab7c1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab7c5:{NFSU2_TR(0x5ab7c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ab7c7:{NFSU2_TR(0x5ab7c7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ab7c9:{NFSU2_TR(0x5ab7c9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ab7cb:{NFSU2_TR(0x5ab7cb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab7cd:{NFSU2_TR(0x5ab7cd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab7d1:{NFSU2_TR(0x5ab7d1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ab7d3:{NFSU2_TR(0x5ab7d3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab7d7:{NFSU2_TR(0x5ab7d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab7db:{NFSU2_TR(0x5ab7db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab7dd:{NFSU2_TR(0x5ab7dd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab7e0:{NFSU2_TR(0x5ab7e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab7e2:{NFSU2_TR(0x5ab7e2);
{goto L5ab7e9;}
}
B5ab7e4:L5ab7e4:{c.instructions+=2;NFSU2_TR(0x5ab7e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5ab7e6:{NFSU2_TR(0x5ab7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab7e9:L5ab7e9:{c.instructions+=15;NFSU2_TR(0x5ab7e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab7ed:{NFSU2_TR(0x5ab7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ab7ef:{NFSU2_TR(0x5ab7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab7f2:{NFSU2_TR(0x5ab7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab7f6:{NFSU2_TR(0x5ab7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab7f9:{NFSU2_TR(0x5ab7f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5ab7fb:{NFSU2_TR(0x5ab7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab7fe:{NFSU2_TR(0x5ab7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab801:{NFSU2_TR(0x5ab801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab804:{NFSU2_TR(0x5ab804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab805:{NFSU2_TR(0x5ab805);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5ab808:{NFSU2_TR(0x5ab808);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab809:{NFSU2_TR(0x5ab809);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ab810:{NFSU2_TR(0x5ab810);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab811:{NFSU2_TR(0x5ab811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab816ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5ab816:L5ab816:{c.instructions+=7;NFSU2_TR(0x5ab816);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ab819:{NFSU2_TR(0x5ab819);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab81d:{NFSU2_TR(0x5ab81d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab81e:{NFSU2_TR(0x5ab81e);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab825:{NFSU2_TR(0x5ab825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab826:{NFSU2_TR(0x5ab826);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab829:{NFSU2_TR(0x5ab829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab82eull));
TAIL_STATIC(0x59bb00u,59b);
}
B5ab82e:L5ab82e:{c.instructions+=16;NFSU2_TR(0x5ab82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab832:{NFSU2_TR(0x5ab832);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab836:{NFSU2_TR(0x5ab836);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab83a:{NFSU2_TR(0x5ab83a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ab83d:{NFSU2_TR(0x5ab83d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab841:{NFSU2_TR(0x5ab841);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab845:{NFSU2_TR(0x5ab845);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B5ab848:{NFSU2_TR(0x5ab848);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5ab849:{NFSU2_TR(0x5ab849);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5ab84c:{NFSU2_TR(0x5ab84c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5ab84f:{NFSU2_TR(0x5ab84f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5ab852:{NFSU2_TR(0x5ab852);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab858:{NFSU2_TR(0x5ab858);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab85c:{NFSU2_TR(0x5ab85c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab860:{NFSU2_TR(0x5ab860);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ab864:{NFSU2_TR(0x5ab864);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab580u);}goto L5ab580;}}
}
B5ab86a:L5ab86a:{c.instructions+=2;NFSU2_TR(0x5ab86a);
__builtin_memmove((R+4),(R+24),4);
}
B5ab86c:{NFSU2_TR(0x5ab86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab871ull));
TAIL_STATIC(0x5a46a0u,5a4);
}
B5ab871:L5ab871:{c.instructions+=6;NFSU2_TR(0x5ab871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab872:{NFSU2_TR(0x5ab872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab873:{NFSU2_TR(0x5ab873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ab874:{NFSU2_TR(0x5ab874);
__builtin_memmove((R+16),(R+20),4);
}
B5ab876:{NFSU2_TR(0x5ab876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ab877:{NFSU2_TR(0x5ab877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab880:L5ab880:{c.instructions+=5;NFSU2_TR(0x5ab880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab881:{NFSU2_TR(0x5ab881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab882:{NFSU2_TR(0x5ab882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab883:{NFSU2_TR(0x5ab883);
__builtin_memmove((R+28),(R+4),4);
}
B5ab885:{NFSU2_TR(0x5ab885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab88aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab190u);}goto L5ab190;}
}
B5ab88a:L5ab88a:{c.instructions+=16;NFSU2_TR(0x5ab88a);
{u32 ea_=u32(r4(R+28)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab890:{NFSU2_TR(0x5ab890);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab893:{NFSU2_TR(0x5ab893);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab899:{NFSU2_TR(0x5ab899);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab89c:{NFSU2_TR(0x5ab89c);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab8a2:{NFSU2_TR(0x5ab8a2);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab8a5:{NFSU2_TR(0x5ab8a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab8a7:{NFSU2_TR(0x5ab8a7);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab8ad:{NFSU2_TR(0x5ab8ad);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab8b0:{NFSU2_TR(0x5ab8b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ab8b2:{NFSU2_TR(0x5ab8b2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ab8b4:{NFSU2_TR(0x5ab8b4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ab8b6:{NFSU2_TR(0x5ab8b6);
{u32 ea_=u32(u32(8002008u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab8bc:{NFSU2_TR(0x5ab8bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab8be:{NFSU2_TR(0x5ab8be);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab8c1:{NFSU2_TR(0x5ab8c1);
if(r1(R+514)){{goto L5ab8cb;}}
}
B5ab8c3:L5ab8c3:{c.instructions+=2;NFSU2_TR(0x5ab8c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab8c5:{NFSU2_TR(0x5ab8c5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab8cb:L5ab8cb:{c.instructions+=2;NFSU2_TR(0x5ab8cb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ab8cd:{NFSU2_TR(0x5ab8cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ab8d0:L5ab8d0:{c.instructions+=11;NFSU2_TR(0x5ab8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab8d3:{NFSU2_TR(0x5ab8d3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ab8d5:{NFSU2_TR(0x5ab8d5);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ab8d9:{NFSU2_TR(0x5ab8d9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ab8dd:{NFSU2_TR(0x5ab8dd);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab8df:{NFSU2_TR(0x5ab8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ab8e2:{NFSU2_TR(0x5ab8e2);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab8e8:{NFSU2_TR(0x5ab8e8);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab8ee:{NFSU2_TR(0x5ab8ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab8f0:{NFSU2_TR(0x5ab8f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab8f3:{NFSU2_TR(0x5ab8f3);
if(r1(R+514)){{goto L5ab8fe;}}
}
B5ab8f5:L5ab8f5:{c.instructions+=2;NFSU2_TR(0x5ab8f5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab8f8:{NFSU2_TR(0x5ab8f8);
if(r1(R+518)){{goto L5ab91e;}}
}
B5ab8fa:L5ab8fa:{c.instructions+=2;NFSU2_TR(0x5ab8fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ab8fc:{NFSU2_TR(0x5ab8fc);
{goto L5ab91c;}
}
B5ab8fe:L5ab8fe:{c.instructions+=5;NFSU2_TR(0x5ab8fe);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab904:{NFSU2_TR(0x5ab904);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab90a:{NFSU2_TR(0x5ab90a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab90c:{NFSU2_TR(0x5ab90c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab90f:{NFSU2_TR(0x5ab90f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab91e;}}
}
B5ab911:L5ab911:{c.instructions+=2;NFSU2_TR(0x5ab911);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab914:{NFSU2_TR(0x5ab914);
if(r1(R+518)){{goto L5ab91e;}}
}
B5ab916:L5ab916:{c.instructions+=1;NFSU2_TR(0x5ab916);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x90ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ab91c:L5ab91c:{c.instructions+=1;NFSU2_TR(0x5ab91c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab969;}}
}
B5ab91e:L5ab91e:{c.instructions+=4;NFSU2_TR(0x5ab91e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ab924:{NFSU2_TR(0x5ab924);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab926:{NFSU2_TR(0x5ab926);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab929:{NFSU2_TR(0x5ab929);
if(r1(R+518)){{goto L5ab951;}}
}
B5ab92b:L5ab92b:{c.instructions+=5;NFSU2_TR(0x5ab92b);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab931:{NFSU2_TR(0x5ab931);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab937:{NFSU2_TR(0x5ab937);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab939:{NFSU2_TR(0x5ab939);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ab93c:{NFSU2_TR(0x5ab93c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab951;}}
}
B5ab93e:L5ab93e:{c.instructions+=5;NFSU2_TR(0x5ab93e);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab944:{NFSU2_TR(0x5ab944);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ab94a:{NFSU2_TR(0x5ab94a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ab94c:{NFSU2_TR(0x5ab94c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ab94f:{NFSU2_TR(0x5ab94f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ab969;}}
}
B5ab951:L5ab951:{c.instructions+=5;NFSU2_TR(0x5ab951);
{u32 ea_=u32(u32(8002012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab957:{NFSU2_TR(0x5ab957);
{u32 ea_=u32(r4(R+28)+u32(596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab95d:{NFSU2_TR(0x5ab95d);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab963:{NFSU2_TR(0x5ab963);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ab967:{NFSU2_TR(0x5ab967);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab969:L5ab969:{c.instructions+=2;NFSU2_TR(0x5ab969);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ab96c:{NFSU2_TR(0x5ab96c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ab974;}}
}
B5ab96e:L5ab96e:{c.instructions+=3;NFSU2_TR(0x5ab96e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ab970:{NFSU2_TR(0x5ab970);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab972:{NFSU2_TR(0x5ab972);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab974:L5ab974:{c.instructions+=4;NFSU2_TR(0x5ab974);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5ab977:{NFSU2_TR(0x5ab977);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5ab97a:{NFSU2_TR(0x5ab97a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ab980:{NFSU2_TR(0x5ab980);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ab8d0u);}goto L5ab8d0;}}
}
B5ab986:L5ab986:{c.instructions+=6;NFSU2_TR(0x5ab986);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab988:{NFSU2_TR(0x5ab988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ab989:{NFSU2_TR(0x5ab989);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab98b:{NFSU2_TR(0x5ab98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ab98c:{NFSU2_TR(0x5ab98c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ab98d:{NFSU2_TR(0x5ab98d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ab990:L5ab990:{c.instructions+=11;NFSU2_TR(0x5ab990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5ab993:{NFSU2_TR(0x5ab993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab994:{NFSU2_TR(0x5ab994);
__builtin_memmove((R+24),(R+4),4);
}
B5ab996:{NFSU2_TR(0x5ab996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab999:{NFSU2_TR(0x5ab999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab99c:{NFSU2_TR(0x5ab99c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab99d:{NFSU2_TR(0x5ab99d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ab9a0:{NFSU2_TR(0x5ab9a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab9a1:{NFSU2_TR(0x5ab9a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab9a2:{NFSU2_TR(0x5ab9a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ab9a3:{NFSU2_TR(0x5ab9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab9a8ull));
TAIL_STATIC(0x5a60f0u,5a6);
}
B5ab9a8:L5ab9a8:{c.instructions+=3;NFSU2_TR(0x5ab9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab9ab:{NFSU2_TR(0x5ab9ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ab9ae:{NFSU2_TR(0x5ab9ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ab9b3ull));
TAIL_STATIC(0x59b940u,59b);
}
B5ab9b3:L5ab9b3:{c.instructions+=5;NFSU2_TR(0x5ab9b3);
__builtin_memmove((R+4),gp(0x7fc06c),4);
}
B5ab9b9:{NFSU2_TR(0x5ab9b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ab9bb:{NFSU2_TR(0x5ab9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ab9be:{NFSU2_TR(0x5ab9be);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab9c4:{NFSU2_TR(0x5ab9c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ab9ce;}}
}
B5ab9c6:L5ab9c6:{c.instructions+=2;NFSU2_TR(0x5ab9c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab9c8:{NFSU2_TR(0x5ab9c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab9ce:L5ab9ce:{c.instructions+=23;NFSU2_TR(0x5ab9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ab9d1:{NFSU2_TR(0x5ab9d1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab9d4:{NFSU2_TR(0x5ab9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ab9d7:{NFSU2_TR(0x5ab9d7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ab9d9:{NFSU2_TR(0x5ab9d9);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab9df:{NFSU2_TR(0x5ab9df);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5ab9e1:{NFSU2_TR(0x5ab9e1);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5ab9e3:{NFSU2_TR(0x5ab9e3);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5ab9e5:{NFSU2_TR(0x5ab9e5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ab9eb:{NFSU2_TR(0x5ab9eb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ab9ef:{NFSU2_TR(0x5ab9ef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab9f1:{NFSU2_TR(0x5ab9f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ab9f3:{NFSU2_TR(0x5ab9f3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ab9f9:{NFSU2_TR(0x5ab9f9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ab9fd:{NFSU2_TR(0x5ab9fd);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba03:{NFSU2_TR(0x5aba03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aba06:{NFSU2_TR(0x5aba06);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aba0c:{NFSU2_TR(0x5aba0c);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba12:{NFSU2_TR(0x5aba12);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba18:{NFSU2_TR(0x5aba18);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aba1a:{NFSU2_TR(0x5aba1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aba1c:{NFSU2_TR(0x5aba1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aba1f:{NFSU2_TR(0x5aba1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aba29;}}
}
B5aba21:L5aba21:{c.instructions+=2;NFSU2_TR(0x5aba21);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aba23:{NFSU2_TR(0x5aba23);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba29:L5aba29:{c.instructions+=22;NFSU2_TR(0x5aba29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aba2b:{NFSU2_TR(0x5aba2b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba2e:{NFSU2_TR(0x5aba2e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aba31:{NFSU2_TR(0x5aba31);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aba34:{NFSU2_TR(0x5aba34);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5aba36:{NFSU2_TR(0x5aba36);
{u32 ea_=u32(r4(R+4)+u32(620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aba3c:{NFSU2_TR(0x5aba3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aba3f:{NFSU2_TR(0x5aba3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aba40:{NFSU2_TR(0x5aba40);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5aba42:{NFSU2_TR(0x5aba42);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aba46:{NFSU2_TR(0x5aba46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aba48:{NFSU2_TR(0x5aba48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aba4a:{NFSU2_TR(0x5aba4a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba4e:{NFSU2_TR(0x5aba4e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5aba50:{NFSU2_TR(0x5aba50);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aba54:{NFSU2_TR(0x5aba54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aba58:{NFSU2_TR(0x5aba58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aba5a:{NFSU2_TR(0x5aba5a);
{u32 ea_=u32(r4(R+4)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba60:{NFSU2_TR(0x5aba60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aba63:{NFSU2_TR(0x5aba63);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aba66:{NFSU2_TR(0x5aba66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aba67:{NFSU2_TR(0x5aba67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aba6cull));
TAIL_STATIC(0x59e0c0u,59e);
}
B5aba6c:L5aba6c:{c.instructions+=7;NFSU2_TR(0x5aba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aba6f:{NFSU2_TR(0x5aba6f);
{u32 ea_=u32(r4(R+8)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba75:{NFSU2_TR(0x5aba75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aba76:{NFSU2_TR(0x5aba76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aba79:{NFSU2_TR(0x5aba79);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aba7c:{NFSU2_TR(0x5aba7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aba7d:{NFSU2_TR(0x5aba7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aba82ull));
TAIL_STATIC(0x59e0c0u,59e);
}
B5aba82:L5aba82:{c.instructions+=11;NFSU2_TR(0x5aba82);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba86:{NFSU2_TR(0x5aba86);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aba8a:{NFSU2_TR(0x5aba8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aba8d:{NFSU2_TR(0x5aba8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aba8e:{NFSU2_TR(0x5aba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aba91:{NFSU2_TR(0x5aba91);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aba95:{NFSU2_TR(0x5aba95);
{u32 ea_=u32(r4(R+0)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aba9b:{NFSU2_TR(0x5aba9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aba9f:{NFSU2_TR(0x5aba9f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abaa2:{NFSU2_TR(0x5abaa2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abaa3:{NFSU2_TR(0x5abaa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abaa8ull));
TAIL_STATIC(0x59e0c0u,59e);
}
B5abaa8:L5abaa8:{c.instructions+=7;NFSU2_TR(0x5abaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abaab:{NFSU2_TR(0x5abaab);
{u32 ea_=u32(r4(R+4)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abab1:{NFSU2_TR(0x5abab1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abab2:{NFSU2_TR(0x5abab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abab5:{NFSU2_TR(0x5abab5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abab8:{NFSU2_TR(0x5abab8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abab9:{NFSU2_TR(0x5abab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ababeull));
TAIL_STATIC(0x59e0c0u,59e);
}
B5ababe:L5ababe:{c.instructions+=16;NFSU2_TR(0x5ababe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abac1:{NFSU2_TR(0x5abac1);
__builtin_memmove((R+0),gp(0x7fc6f0),4);
}
B5abac6:{NFSU2_TR(0x5abac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abac9:{NFSU2_TR(0x5abac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abacc:{NFSU2_TR(0x5abacc);
__builtin_memmove((R+8),gp(0x7fc6f0),4);
}
B5abad2:{NFSU2_TR(0x5abad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abad5:{NFSU2_TR(0x5abad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abad8:{NFSU2_TR(0x5abad8);
__builtin_memmove((R+4),gp(0x7fc6f0),4);
}
B5abade:{NFSU2_TR(0x5abade);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abae1:{NFSU2_TR(0x5abae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abae4:{NFSU2_TR(0x5abae4);
__builtin_memmove((R+0),gp(0x7fc6f0),4);
}
B5abae9:{NFSU2_TR(0x5abae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5abaea:{NFSU2_TR(0x5abaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abaed:{NFSU2_TR(0x5abaed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5abaee:{NFSU2_TR(0x5abaee);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5abaf1:{NFSU2_TR(0x5abaf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5abb00:L5abb00:{c.instructions+=17;NFSU2_TR(0x5abb00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb01:{NFSU2_TR(0x5abb01);
__builtin_memmove((R+20),(R+16),4);
}
B5abb03:{NFSU2_TR(0x5abb03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5abb06:{NFSU2_TR(0x5abb06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5abb09:{NFSU2_TR(0x5abb09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb0a:{NFSU2_TR(0x5abb0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb0b:{NFSU2_TR(0x5abb0b);
__builtin_memmove((R+28),(R+4),4);
}
B5abb0d:{NFSU2_TR(0x5abb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abb10:{NFSU2_TR(0x5abb10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb11:{NFSU2_TR(0x5abb11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5abb14:{NFSU2_TR(0x5abb14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb15:{NFSU2_TR(0x5abb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abb18:{NFSU2_TR(0x5abb18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5abb1b:{NFSU2_TR(0x5abb1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb1c:{NFSU2_TR(0x5abb1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb1d:{NFSU2_TR(0x5abb1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb1e:{NFSU2_TR(0x5abb1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abb23ull));
TAIL_STATIC(0x5a5e20u,5a5);
}
B5abb23:L5abb23:{c.instructions+=4;NFSU2_TR(0x5abb23);
__builtin_memmove((R+8),(R+0),4);
}
B5abb25:{NFSU2_TR(0x5abb25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5abb28:{NFSU2_TR(0x5abb28);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5abb2a:{NFSU2_TR(0x5abb2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abb66;}}
}
B5abb2c:L5abb2c:{c.instructions+=1;NFSU2_TR(0x5abb2c);
w4(R+24,u32(0x330ull));
}
B5abb31:L5abb31:{c.instructions+=7;NFSU2_TR(0x5abb31);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcf8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5abb38:{NFSU2_TR(0x5abb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abb3b:{NFSU2_TR(0x5abb3b);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abb3e:{NFSU2_TR(0x5abb3e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abb41:{NFSU2_TR(0x5abb41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abb43:{NFSU2_TR(0x5abb43);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abb46:{NFSU2_TR(0x5abb46);
if(r1(R+514)){{goto L5abb5b;}}
}
B5abb48:L5abb48:{c.instructions+=1;NFSU2_TR(0x5abb48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abb4dull));
TAIL_STATIC(0x59e1a0u,59e);
}
B5abb4d:L5abb4d:{c.instructions+=4;NFSU2_TR(0x5abb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abb50:{NFSU2_TR(0x5abb50);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5abb53:{NFSU2_TR(0x5abb53);
w4(R+8,u32(0x1ull));
}
B5abb58:{NFSU2_TR(0x5abb58);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abb5b:L5abb5b:{c.instructions+=3;NFSU2_TR(0x5abb5b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5abb5e:{NFSU2_TR(0x5abb5e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x340ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x340ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5abb64:{NFSU2_TR(0x5abb64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5abb31u);}goto L5abb31;}}
}
B5abb66:L5abb66:{c.instructions+=3;NFSU2_TR(0x5abb66);
__builtin_memmove((R+0),gp(0x86b31c),4);
}
B5abb6b:{NFSU2_TR(0x5abb6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5abb6d:{NFSU2_TR(0x5abb6d);
if(r1(R+518)){{goto L5abbc8;}}
}
B5abb6f:L5abb6f:{c.instructions+=3;NFSU2_TR(0x5abb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abb72:{NFSU2_TR(0x5abb72);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5abb76:{NFSU2_TR(0x5abb76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abbc8;}}
}
B5abb78:L5abb78:{c.instructions+=14;NFSU2_TR(0x5abb78);
__builtin_memmove((R+8),gp(0x7a1a00),4);
}
B5abb7e:{NFSU2_TR(0x5abb7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5abb82:{NFSU2_TR(0x5abb82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb83:{NFSU2_TR(0x5abb83);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5abb87:{NFSU2_TR(0x5abb87);
s4(0x86b31c,u32(0x0ull));
}
B5abb91:{NFSU2_TR(0x5abb91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abb92:{NFSU2_TR(0x5abb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abb95:{NFSU2_TR(0x5abb95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abb9d:{NFSU2_TR(0x5abb9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abba5:{NFSU2_TR(0x5abba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abbad:{NFSU2_TR(0x5abbad);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abbb5:{NFSU2_TR(0x5abbb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abbbd:{NFSU2_TR(0x5abbbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abbc1:{NFSU2_TR(0x5abbc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abbc6ull));
TAIL_STATIC(0x59bc60u,59b);
}
B5abbc6:L5abbc6:{c.instructions+=1;NFSU2_TR(0x5abbc6);
{goto L5abbcc;}
}
B5abbc8:L5abbc8:{c.instructions+=2;NFSU2_TR(0x5abbc8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5abbca:{NFSU2_TR(0x5abbca);
if(r1(R+518)){{goto L5abbde;}}
}
B5abbcc:L5abbcc:{c.instructions+=3;NFSU2_TR(0x5abbcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5abbcf:{NFSU2_TR(0x5abbcf);
s4(0x7fc800,u32(0x0ull));
}
B5abbd9:{NFSU2_TR(0x5abbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abbdeull));
TAIL_STATIC(0x5a0d80u,5a0);
}
B5abbde:L5abbde:{c.instructions+=5;NFSU2_TR(0x5abbde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5abbdf:{NFSU2_TR(0x5abbdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5abbe0:{NFSU2_TR(0x5abbe0);
__builtin_memmove((R+16),(R+20),4);
}
B5abbe2:{NFSU2_TR(0x5abbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5abbe3:{NFSU2_TR(0x5abbe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5abbf0:L5abbf0:{c.instructions+=9;NFSU2_TR(0x5abbf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5abbf3:{NFSU2_TR(0x5abbf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abbf4:{NFSU2_TR(0x5abbf4);
__builtin_memmove((R+24),(R+4),4);
}
B5abbf6:{NFSU2_TR(0x5abbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abbf9:{NFSU2_TR(0x5abbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abbff:{NFSU2_TR(0x5abbff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abc00:{NFSU2_TR(0x5abc00);
w4(R+28,u32(0x1ull));
}
B5abc05:{NFSU2_TR(0x5abc05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5abc07:{NFSU2_TR(0x5abc07);
if(r1(R+518)){{goto L5abcac;}}
}
B5abc0d:L5abc0d:{c.instructions+=3;NFSU2_TR(0x5abc0d);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B5abc12:{NFSU2_TR(0x5abc12);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5abc14:{NFSU2_TR(0x5abc14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abcac;}}
}
B5abc1a:L5abc1a:{c.instructions+=3;NFSU2_TR(0x5abc1a);
__builtin_memmove((R+0),gp(0x890100),4);
}
B5abc1f:{NFSU2_TR(0x5abc1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5abc21:{NFSU2_TR(0x5abc21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abcac;}}
}
B5abc27:L5abc27:{c.instructions+=3;NFSU2_TR(0x5abc27);
__builtin_memmove((R+0),gp(0x890110),4);
}
B5abc2c:{NFSU2_TR(0x5abc2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5abc2e:{NFSU2_TR(0x5abc2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abcac;}}
}
B5abc30:L5abc30:{c.instructions+=6;NFSU2_TR(0x5abc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abc33:{NFSU2_TR(0x5abc33);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abc39:{NFSU2_TR(0x5abc39);
{u32 ea_=u32(r4(R+4)+u32(532u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abc3f:{NFSU2_TR(0x5abc3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abc41:{NFSU2_TR(0x5abc41);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5abc44:{NFSU2_TR(0x5abc44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abc92;}}
}
B5abc46:L5abc46:{c.instructions+=5;NFSU2_TR(0x5abc46);
{u32 ea_=u32(r4(R+4)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abc4c:{NFSU2_TR(0x5abc4c);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abc52:{NFSU2_TR(0x5abc52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abc54:{NFSU2_TR(0x5abc54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abc57:{NFSU2_TR(0x5abc57);
if(r1(R+514)){{goto L5abc92;}}
}
B5abc59:L5abc59:{c.instructions+=5;NFSU2_TR(0x5abc59);
{u32 ea_=u32(r4(R+4)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abc5f:{NFSU2_TR(0x5abc5f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abc65:{NFSU2_TR(0x5abc65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abc67:{NFSU2_TR(0x5abc67);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abc6a:{NFSU2_TR(0x5abc6a);
if(r1(R+514)){{goto L5abc73;}}
}
B5abc6c:L5abc6c:{c.instructions+=2;NFSU2_TR(0x5abc6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abc6e:{NFSU2_TR(0x5abc6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abc73ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B5abc73:L5abc73:{c.instructions+=6;NFSU2_TR(0x5abc73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abc76:{NFSU2_TR(0x5abc76);
{u32 ea_=u32(r4(R+4)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abc7c:{NFSU2_TR(0x5abc7c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abc82:{NFSU2_TR(0x5abc82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abc84:{NFSU2_TR(0x5abc84);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abc87:{NFSU2_TR(0x5abc87);
if(r1(R+514)){{goto L5abcac;}}
}
B5abc89:L5abc89:{c.instructions+=2;NFSU2_TR(0x5abc89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abc8b:{NFSU2_TR(0x5abc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abc90ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B5abc90:L5abc90:{c.instructions+=1;NFSU2_TR(0x5abc90);
{goto L5abcac;}
}
B5abc92:L5abc92:{c.instructions+=5;NFSU2_TR(0x5abc92);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abc98:{NFSU2_TR(0x5abc98);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abc9e:{NFSU2_TR(0x5abc9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abca0:{NFSU2_TR(0x5abca0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abca3:{NFSU2_TR(0x5abca3);
if(r1(R+514)){{goto L5abcac;}}
}
B5abca5:L5abca5:{c.instructions+=2;NFSU2_TR(0x5abca5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abca7:{NFSU2_TR(0x5abca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abcacull));
TAIL_STATIC(0x5eb910u,5eb);
}
B5abcac:L5abcac:{c.instructions+=8;NFSU2_TR(0x5abcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abcaf:{NFSU2_TR(0x5abcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abcb5:{NFSU2_TR(0x5abcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abcb9:{NFSU2_TR(0x5abcb9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abcbd:{NFSU2_TR(0x5abcbd);
{u32 ea_=u32(u32(7881968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abcc3:{NFSU2_TR(0x5abcc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abcc5:{NFSU2_TR(0x5abcc5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abcc8:{NFSU2_TR(0x5abcc8);
if(r1(R+514)){{goto L5abcd4;}}
}
B5abcca:L5abcca:{c.instructions+=2;NFSU2_TR(0x5abcca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abcd2:{NFSU2_TR(0x5abcd2);
{goto L5abd1f;}
}
B5abcd4:L5abcd4:{c.instructions+=5;NFSU2_TR(0x5abcd4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abcd8:{NFSU2_TR(0x5abcd8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abcde:{NFSU2_TR(0x5abcde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abce0:{NFSU2_TR(0x5abce0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abce3:{NFSU2_TR(0x5abce3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abd1f;}}
}
B5abce5:L5abce5:{c.instructions+=3;NFSU2_TR(0x5abce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abce8:{NFSU2_TR(0x5abce8);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
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
B5abceb:{NFSU2_TR(0x5abceb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5abd1f;}}
}
B5abced:L5abced:{c.instructions+=7;NFSU2_TR(0x5abced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abcf0:{NFSU2_TR(0x5abcf0);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abcf3:{NFSU2_TR(0x5abcf3);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abcf9:{NFSU2_TR(0x5abcf9);
{u32 ea_=u32(u32(7894428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abcff:{NFSU2_TR(0x5abcff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abd01:{NFSU2_TR(0x5abd01);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abd04:{NFSU2_TR(0x5abd04);
if(r1(R+514)){{goto L5abd1f;}}
}
B5abd06:L5abd06:{c.instructions+=5;NFSU2_TR(0x5abd06);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abd0c:{NFSU2_TR(0x5abd0c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abd10:{NFSU2_TR(0x5abd10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abd12:{NFSU2_TR(0x5abd12);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abd15:{NFSU2_TR(0x5abd15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abd1f;}}
}
B5abd17:L5abd17:{c.instructions+=1;NFSU2_TR(0x5abd17);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abd1f:L5abd1f:{c.instructions+=5;NFSU2_TR(0x5abd1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5abd26:{NFSU2_TR(0x5abd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd29:{NFSU2_TR(0x5abd29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5abd2b:{NFSU2_TR(0x5abd2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abd2c:{NFSU2_TR(0x5abd2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abd2full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5abd2f:L5abd2f:{c.instructions+=6;NFSU2_TR(0x5abd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abd32:{NFSU2_TR(0x5abd32);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd36:{NFSU2_TR(0x5abd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abd39:{NFSU2_TR(0x5abd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd3c:{NFSU2_TR(0x5abd3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5abd3e:{NFSU2_TR(0x5abd3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abd41ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5abd41:L5abd41:{c.instructions+=3;NFSU2_TR(0x5abd41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5abd43:{NFSU2_TR(0x5abd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd46:{NFSU2_TR(0x5abd46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5abd62;}}
}
B5abd48:L5abd48:{c.instructions+=5;NFSU2_TR(0x5abd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abd4b:{NFSU2_TR(0x5abd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abd4e:{NFSU2_TR(0x5abd4e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5abd4f:{NFSU2_TR(0x5abd4f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5abd51:{NFSU2_TR(0x5abd51);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5abd62;}}
}
B5abd53:L5abd53:{c.instructions+=2;NFSU2_TR(0x5abd53);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5abd56:{NFSU2_TR(0x5abd56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5abd5f;}}
}
B5abd58:L5abd58:{c.instructions+=1;NFSU2_TR(0x5abd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5abd5f:L5abd5f:{c.instructions+=1;NFSU2_TR(0x5abd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abd62:L5abd62:{c.instructions+=2;NFSU2_TR(0x5abd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd65:{NFSU2_TR(0x5abd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abd6aull));
TAIL_STATIC(0x59fa30u,59f);
}
B5abd6a:L5abd6a:{c.instructions+=7;NFSU2_TR(0x5abd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd6d:{NFSU2_TR(0x5abd6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abd73:{NFSU2_TR(0x5abd73);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abd79:{NFSU2_TR(0x5abd79);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5abd7f:{NFSU2_TR(0x5abd7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5abd81:{NFSU2_TR(0x5abd81);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5abd84:{NFSU2_TR(0x5abd84);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5abd92;}}
}
B5abd86:L5abd86:{c.instructions+=3;NFSU2_TR(0x5abd86);
__builtin_memmove((R+8),gp(0x7fbed8),4);
}
B5abd8c:{NFSU2_TR(0x5abd8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abd90:{NFSU2_TR(0x5abd90);
{goto L5abd9f;}
}
B5abd92:L5abd92:{c.instructions+=3;NFSU2_TR(0x5abd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abd95:{NFSU2_TR(0x5abd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abd9b:{NFSU2_TR(0x5abd9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abd9f:L5abd9f:{c.instructions+=5;NFSU2_TR(0x5abd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abda2:{NFSU2_TR(0x5abda2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abda6:{NFSU2_TR(0x5abda6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5abda8:{NFSU2_TR(0x5abda8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abda9:{NFSU2_TR(0x5abda9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abdacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5abdac:L5abdac:{c.instructions+=3;NFSU2_TR(0x5abdac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abdaf:{NFSU2_TR(0x5abdaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdb0:{NFSU2_TR(0x5abdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abdb5ull));
TAIL_STATIC(0x5aa960u,5aa);
}
B5abdb5:L5abdb5:{c.instructions+=3;NFSU2_TR(0x5abdb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abdb8:{NFSU2_TR(0x5abdb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdb9:{NFSU2_TR(0x5abdb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abdbcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5abdbc:L5abdbc:{c.instructions+=6;NFSU2_TR(0x5abdbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abdbf:{NFSU2_TR(0x5abdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abdc2:{NFSU2_TR(0x5abdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abdc5:{NFSU2_TR(0x5abdc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5abdc7:{NFSU2_TR(0x5abdc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdc8:{NFSU2_TR(0x5abdc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abdcbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5abdcb:L5abdcb:{c.instructions+=12;NFSU2_TR(0x5abdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abdce:{NFSU2_TR(0x5abdce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abdd2:{NFSU2_TR(0x5abdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abdd5:{NFSU2_TR(0x5abdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abdd8:{NFSU2_TR(0x5abdd8);
{u32 ea_=u32(r4(R+8)+u32(996u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5abdde:{NFSU2_TR(0x5abdde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abde1:{NFSU2_TR(0x5abde1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5abde2:{NFSU2_TR(0x5abde2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5abde3:{NFSU2_TR(0x5abde3);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abde9:{NFSU2_TR(0x5abde9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abdec:{NFSU2_TR(0x5abdec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5abdef:{NFSU2_TR(0x5abdef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5abdf0:L5abdf0:{c.instructions+=10;NFSU2_TR(0x5abdf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdf1:{NFSU2_TR(0x5abdf1);
__builtin_memmove((R+20),(R+16),4);
}
B5abdf3:{NFSU2_TR(0x5abdf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5abdf6:{NFSU2_TR(0x5abdf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5abdfc:{NFSU2_TR(0x5abdfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdfd:{NFSU2_TR(0x5abdfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abdfe:{NFSU2_TR(0x5abdfe);
__builtin_memmove((R+24),(R+4),4);
}
B5abe00:{NFSU2_TR(0x5abe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abe03:{NFSU2_TR(0x5abe03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe04:{NFSU2_TR(0x5abe04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abe09ull));
TAIL_STATIC(0x594cb0u,594);
}
B5abe09:L5abe09:{c.instructions+=7;NFSU2_TR(0x5abe09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abe0c:{NFSU2_TR(0x5abe0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abe0f:{NFSU2_TR(0x5abe0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5abe13:{NFSU2_TR(0x5abe13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abe17:{NFSU2_TR(0x5abe17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5abe1a:{NFSU2_TR(0x5abe1a);
w4(R+12,u32(0x4ull));
}
B5abe1f:{NFSU2_TR(0x5abe1f);
}
B5abe20:L5abe20:{c.instructions+=5;NFSU2_TR(0x5abe20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abe24:{NFSU2_TR(0x5abe24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5abe26:{NFSU2_TR(0x5abe26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe27:{NFSU2_TR(0x5abe27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe29:{NFSU2_TR(0x5abe29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abe2eull));
TAIL_STATIC(0x5a8280u,5a8);
}
B5abe2e:L5abe2e:{c.instructions+=3;NFSU2_TR(0x5abe2e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5abe31:{NFSU2_TR(0x5abe31);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5abe32:{NFSU2_TR(0x5abe32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5abe20u);}goto L5abe20;}}
}
B5abe34:L5abe34:{c.instructions+=6;NFSU2_TR(0x5abe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abe37:{NFSU2_TR(0x5abe37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5abe3a:{NFSU2_TR(0x5abe3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe3b:{NFSU2_TR(0x5abe3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5abe3f:{NFSU2_TR(0x5abe3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe40:{NFSU2_TR(0x5abe40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abe45ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B5abe45:L5abe45:{c.instructions+=8;NFSU2_TR(0x5abe45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abe48:{NFSU2_TR(0x5abe48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B5abe4d:{NFSU2_TR(0x5abe4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe4e:{NFSU2_TR(0x5abe4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5abe52:{NFSU2_TR(0x5abe52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe53:{NFSU2_TR(0x5abe53);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5abe57:{NFSU2_TR(0x5abe57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5abe58:{NFSU2_TR(0x5abe58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5abe5dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5abe5d:L5abe5d:{c.instructions+=3;NFSU2_TR(0x5abe5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5abe60:{NFSU2_TR(0x5abe60);
w4(R+28,u32(0x5ull));
}
B5abe65:{NFSU2_TR(0x5abe65);
{goto L5abe70;}
}
B5abe70:L5abe70:{c.instructions+=94;NFSU2_TR(0x5abe70);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abe74:{NFSU2_TR(0x5abe74);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abe78:{NFSU2_TR(0x5abe78);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5abe7c:{NFSU2_TR(0x5abe7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5abe7f:{NFSU2_TR(0x5abe7f);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abe85:{NFSU2_TR(0x5abe85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5abe88:{NFSU2_TR(0x5abe88);
{u32 ea_=u32(r4(R+0)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abe8e:{NFSU2_TR(0x5abe8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abe91:{NFSU2_TR(0x5abe91);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abe97:{NFSU2_TR(0x5abe97);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abe9d:{NFSU2_TR(0x5abe9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abe9f:{NFSU2_TR(0x5abe9f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abea3:{NFSU2_TR(0x5abea3);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abea9:{NFSU2_TR(0x5abea9);
{u32 ea_=u32(r4(R+0)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abeaf:{NFSU2_TR(0x5abeaf);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abeb5:{NFSU2_TR(0x5abeb5);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abebb:{NFSU2_TR(0x5abebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abebd:{NFSU2_TR(0x5abebd);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abec1:{NFSU2_TR(0x5abec1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5abec5:{NFSU2_TR(0x5abec5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abec9:{NFSU2_TR(0x5abec9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5abecd:{NFSU2_TR(0x5abecd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5abecf:{NFSU2_TR(0x5abecf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abed3:{NFSU2_TR(0x5abed3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abed7:{NFSU2_TR(0x5abed7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abedb:{NFSU2_TR(0x5abedb);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abee1:{NFSU2_TR(0x5abee1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abee5:{NFSU2_TR(0x5abee5);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abeeb:{NFSU2_TR(0x5abeeb);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5abeed:{NFSU2_TR(0x5abeed);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abef3:{NFSU2_TR(0x5abef3);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abef9:{NFSU2_TR(0x5abef9);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abeff:{NFSU2_TR(0x5abeff);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf05:{NFSU2_TR(0x5abf05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abf07:{NFSU2_TR(0x5abf07);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf0d:{NFSU2_TR(0x5abf0d);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf13:{NFSU2_TR(0x5abf13);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf19:{NFSU2_TR(0x5abf19);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf1f:{NFSU2_TR(0x5abf1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abf22:{NFSU2_TR(0x5abf22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abf24:{NFSU2_TR(0x5abf24);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf28:{NFSU2_TR(0x5abf28);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abf2a:{NFSU2_TR(0x5abf2a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf2e:{NFSU2_TR(0x5abf2e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abf30:{NFSU2_TR(0x5abf30);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5abf32:{NFSU2_TR(0x5abf32);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abf36:{NFSU2_TR(0x5abf36);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abf3a:{NFSU2_TR(0x5abf3a);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf40:{NFSU2_TR(0x5abf40);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5abf42:{NFSU2_TR(0x5abf42);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf48:{NFSU2_TR(0x5abf48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abf4b:{NFSU2_TR(0x5abf4b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5abf4d:{NFSU2_TR(0x5abf4d);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf53:{NFSU2_TR(0x5abf53);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf59:{NFSU2_TR(0x5abf59);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf5f:{NFSU2_TR(0x5abf5f);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf65:{NFSU2_TR(0x5abf65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abf67:{NFSU2_TR(0x5abf67);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf6d:{NFSU2_TR(0x5abf6d);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf73:{NFSU2_TR(0x5abf73);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf79:{NFSU2_TR(0x5abf79);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abf7f:{NFSU2_TR(0x5abf7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abf81:{NFSU2_TR(0x5abf81);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf85:{NFSU2_TR(0x5abf85);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abf87:{NFSU2_TR(0x5abf87);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abf8b:{NFSU2_TR(0x5abf8b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abf8d:{NFSU2_TR(0x5abf8d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5abf8f:{NFSU2_TR(0x5abf8f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abf93:{NFSU2_TR(0x5abf93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abf96:{NFSU2_TR(0x5abf96);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abf9a:{NFSU2_TR(0x5abf9a);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfa0:{NFSU2_TR(0x5abfa0);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5abfa2:{NFSU2_TR(0x5abfa2);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfa8:{NFSU2_TR(0x5abfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abfab:{NFSU2_TR(0x5abfab);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5abfad:{NFSU2_TR(0x5abfad);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfb3:{NFSU2_TR(0x5abfb3);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfb9:{NFSU2_TR(0x5abfb9);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfbf:{NFSU2_TR(0x5abfbf);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfc5:{NFSU2_TR(0x5abfc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abfc7:{NFSU2_TR(0x5abfc7);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfcd:{NFSU2_TR(0x5abfcd);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfd3:{NFSU2_TR(0x5abfd3);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfd9:{NFSU2_TR(0x5abfd9);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5abfdf:{NFSU2_TR(0x5abfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5abfe2:{NFSU2_TR(0x5abfe2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5abfe4:{NFSU2_TR(0x5abfe4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfe8:{NFSU2_TR(0x5abfe8);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abfea:{NFSU2_TR(0x5abfea);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5abfee:{NFSU2_TR(0x5abfee);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5abff0:{NFSU2_TR(0x5abff0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5abff2:{NFSU2_TR(0x5abff2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abff6:{NFSU2_TR(0x5abff6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5abffa:{NFSU2_TR(0x5abffa);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x5ac000u,5ac);
}
XIT:NFSU2_TR_EXIT(0x5ab,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
