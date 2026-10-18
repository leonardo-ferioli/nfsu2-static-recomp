#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_549(u8* __restrict R,Cpu& c);
u32 body_54a(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x557,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x557,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_557(u8* __restrict R,Cpu& c);
u32 page_557(Cpu& c){return body_557(c.regs.data(),c);}
__attribute__((noinline)) u32 body_557(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x557002:goto L557002;
case 0x557005:c.instructions+=8;goto B557005;
case 0x557007:c.instructions+=7;goto B557007;
case 0x557009:c.instructions+=6;goto B557009;
case 0x55700b:c.instructions+=5;goto B55700b;
case 0x55700e:c.instructions+=4;goto B55700e;
case 0x557012:c.instructions+=3;goto B557012;
case 0x557014:c.instructions+=2;goto B557014;
case 0x557015:c.instructions+=1;goto B557015;
case 0x557018:goto L557018;
case 0x55701c:c.instructions+=2;goto B55701c;
case 0x55701d:c.instructions+=1;goto B55701d;
case 0x557022:goto L557022;
case 0x557027:c.instructions+=2;goto B557027;
case 0x557029:c.instructions+=1;goto B557029;
case 0x55702e:goto L55702e;
case 0x557031:c.instructions+=2;goto B557031;
case 0x557033:c.instructions+=1;goto B557033;
case 0x557035:goto L557035;
case 0x55703c:c.instructions+=18;goto B55703c;
case 0x55703f:c.instructions+=17;goto B55703f;
case 0x557042:c.instructions+=16;goto B557042;
case 0x557045:c.instructions+=15;goto B557045;
case 0x557048:c.instructions+=14;goto B557048;
case 0x55704c:c.instructions+=13;goto B55704c;
case 0x55704f:c.instructions+=12;goto B55704f;
case 0x557052:c.instructions+=11;goto B557052;
case 0x557059:c.instructions+=10;goto B557059;
case 0x55705c:c.instructions+=9;goto B55705c;
case 0x55705f:c.instructions+=8;goto B55705f;
case 0x557062:c.instructions+=7;goto B557062;
case 0x557065:c.instructions+=6;goto B557065;
case 0x557068:c.instructions+=5;goto B557068;
case 0x55706c:c.instructions+=4;goto B55706c;
case 0x557073:c.instructions+=3;goto B557073;
case 0x557079:c.instructions+=2;goto B557079;
case 0x55707d:c.instructions+=1;goto B55707d;
case 0x55707f:goto L55707f;
case 0x557081:goto L557081;
case 0x557083:c.instructions+=3;goto B557083;
case 0x557084:c.instructions+=2;goto B557084;
case 0x557086:c.instructions+=1;goto B557086;
case 0x557089:goto L557089;
case 0x55708c:c.instructions+=5;goto B55708c;
case 0x557093:c.instructions+=4;goto B557093;
case 0x55709a:c.instructions+=3;goto B55709a;
case 0x5570a0:c.instructions+=2;goto B5570a0;
case 0x5570a2:c.instructions+=1;goto B5570a2;
case 0x5570a4:goto L5570a4;
case 0x5570a6:c.instructions+=3;goto B5570a6;
case 0x5570a7:c.instructions+=2;goto B5570a7;
case 0x5570ac:c.instructions+=1;goto B5570ac;
case 0x5570ae:goto L5570ae;
case 0x5570af:c.instructions+=3;goto B5570af;
case 0x5570b4:c.instructions+=2;goto B5570b4;
case 0x5570b6:c.instructions+=1;goto B5570b6;
case 0x5570b8:goto L5570b8;
case 0x5570b9:c.instructions+=2;goto B5570b9;
case 0x5570be:c.instructions+=1;goto B5570be;
case 0x5570bf:goto L5570bf;
case 0x5570c4:goto L5570c4;
case 0x5570c7:c.instructions+=3;goto B5570c7;
case 0x5570ca:c.instructions+=2;goto B5570ca;
case 0x5570cc:c.instructions+=1;goto B5570cc;
case 0x5570cf:goto L5570cf;
case 0x5570d2:c.instructions+=2;goto B5570d2;
case 0x5570d4:c.instructions+=1;goto B5570d4;
case 0x5570d6:goto L5570d6;
case 0x5570d7:c.instructions+=1;goto B5570d7;
case 0x5570dc:goto L5570dc;
case 0x5570df:c.instructions+=2;goto B5570df;
case 0x5570e1:c.instructions+=1;goto B5570e1;
case 0x5570e3:goto L5570e3;
case 0x5570e8:c.instructions+=2;goto B5570e8;
case 0x5570ea:c.instructions+=1;goto B5570ea;
case 0x5570ef:goto L5570ef;
case 0x5570f1:c.instructions+=1;goto B5570f1;
case 0x5570f3:goto L5570f3;
case 0x5570f8:c.instructions+=2;goto B5570f8;
case 0x5570fa:c.instructions+=1;goto B5570fa;
case 0x5570fc:goto L5570fc;
case 0x5570ff:c.instructions+=3;goto B5570ff;
case 0x557100:c.instructions+=2;goto B557100;
case 0x557105:c.instructions+=1;goto B557105;
case 0x55710a:goto L55710a;
case 0x55710c:goto L55710c;
case 0x55710e:goto L55710e;
case 0x55710f:c.instructions+=1;goto B55710f;
case 0x557114:goto L557114;
case 0x557116:c.instructions+=3;goto B557116;
case 0x557119:c.instructions+=2;goto B557119;
case 0x55711b:c.instructions+=1;goto B55711b;
case 0x55711e:goto L55711e;
case 0x55711f:c.instructions+=4;goto B55711f;
case 0x557120:c.instructions+=3;goto B557120;
case 0x557121:c.instructions+=2;goto B557121;
case 0x557124:c.instructions+=1;goto B557124;
case 0x557130:goto L557130;
case 0x557131:c.instructions+=6;goto B557131;
case 0x557132:c.instructions+=5;goto B557132;
case 0x557134:c.instructions+=4;goto B557134;
case 0x557137:c.instructions+=3;goto B557137;
case 0x55713c:c.instructions+=2;goto B55713c;
case 0x55713d:c.instructions+=1;goto B55713d;
case 0x557142:goto L557142;
case 0x557145:c.instructions+=5;goto B557145;
case 0x557148:c.instructions+=4;goto B557148;
case 0x55714a:c.instructions+=3;goto B55714a;
case 0x557151:c.instructions+=2;goto B557151;
case 0x557155:c.instructions+=1;goto B557155;
case 0x557157:goto L557157;
case 0x55715a:c.instructions+=3;goto B55715a;
case 0x55715c:c.instructions+=2;goto B55715c;
case 0x557162:c.instructions+=1;goto B557162;
case 0x557164:goto L557164;
case 0x557165:c.instructions+=1;goto B557165;
case 0x55716a:goto L55716a;
case 0x55716d:c.instructions+=2;goto B55716d;
case 0x55716f:c.instructions+=1;goto B55716f;
case 0x557171:goto L557171;
case 0x557174:c.instructions+=6;goto B557174;
case 0x55717a:c.instructions+=5;goto B55717a;
case 0x55717b:c.instructions+=4;goto B55717b;
case 0x557180:c.instructions+=3;goto B557180;
case 0x557181:c.instructions+=2;goto B557181;
case 0x557182:c.instructions+=1;goto B557182;
case 0x557187:goto L557187;
case 0x55718a:goto L55718a;
case 0x55718d:c.instructions+=4;goto B55718d;
case 0x55718f:c.instructions+=3;goto B55718f;
case 0x557190:c.instructions+=2;goto B557190;
case 0x557192:c.instructions+=1;goto B557192;
case 0x557197:goto L557197;
case 0x557198:c.instructions+=3;goto B557198;
case 0x55719f:c.instructions+=2;goto B55719f;
case 0x5571a0:c.instructions+=1;goto B5571a0;
case 0x5571b0:goto L5571b0;
case 0x5571b1:c.instructions+=15;goto B5571b1;
case 0x5571b3:c.instructions+=14;goto B5571b3;
case 0x5571b6:c.instructions+=13;goto B5571b6;
case 0x5571b8:c.instructions+=12;goto B5571b8;
case 0x5571bd:c.instructions+=11;goto B5571bd;
case 0x5571c3:c.instructions+=10;goto B5571c3;
case 0x5571c4:c.instructions+=9;goto B5571c4;
case 0x5571cb:c.instructions+=8;goto B5571cb;
case 0x5571d1:c.instructions+=7;goto B5571d1;
case 0x5571d4:c.instructions+=6;goto B5571d4;
case 0x5571d5:c.instructions+=5;goto B5571d5;
case 0x5571d6:c.instructions+=4;goto B5571d6;
case 0x5571d8:c.instructions+=3;goto B5571d8;
case 0x5571d9:c.instructions+=2;goto B5571d9;
case 0x5571dd:c.instructions+=1;goto B5571dd;
case 0x5571e2:goto L5571e2;
case 0x5571e8:c.instructions+=4;goto B5571e8;
case 0x5571ed:c.instructions+=3;goto B5571ed;
case 0x5571f8:c.instructions+=2;goto B5571f8;
case 0x5571ff:c.instructions+=1;goto B5571ff;
case 0x557204:goto L557204;
case 0x557209:c.instructions+=1;goto B557209;
case 0x55720e:goto L55720e;
case 0x557210:c.instructions+=1;goto B557210;
case 0x557215:goto L557215;
case 0x55721c:c.instructions+=1;goto B55721c;
case 0x55721e:goto L55721e;
case 0x557228:c.instructions+=1;goto B557228;
case 0x55722a:goto L55722a;
case 0x55722e:c.instructions+=1;goto B55722e;
case 0x557233:goto L557233;
case 0x557239:c.instructions+=4;goto B557239;
case 0x55723a:c.instructions+=3;goto B55723a;
case 0x55723f:c.instructions+=2;goto B55723f;
case 0x557247:c.instructions+=1;goto B557247;
case 0x55724c:goto L55724c;
case 0x55724e:c.instructions+=2;goto B55724e;
case 0x557250:c.instructions+=1;goto B557250;
case 0x557252:goto L557252;
case 0x557254:c.instructions+=2;goto B557254;
case 0x557256:c.instructions+=1;goto B557256;
case 0x557259:goto L557259;
case 0x55725b:c.instructions+=6;goto B55725b;
case 0x55725d:c.instructions+=5;goto B55725d;
case 0x557261:c.instructions+=4;goto B557261;
case 0x557262:c.instructions+=3;goto B557262;
case 0x557264:c.instructions+=2;goto B557264;
case 0x557266:c.instructions+=1;goto B557266;
case 0x557269:goto L557269;
case 0x55726b:c.instructions+=4;goto B55726b;
case 0x55726f:c.instructions+=3;goto B55726f;
case 0x557271:c.instructions+=2;goto B557271;
case 0x557272:c.instructions+=1;goto B557272;
case 0x557277:goto L557277;
case 0x55727a:c.instructions+=1;goto B55727a;
case 0x55727f:goto L55727f;
case 0x557286:c.instructions+=2;goto B557286;
case 0x55728e:c.instructions+=1;goto B55728e;
case 0x557293:goto L557293;
case 0x557298:c.instructions+=1;goto B557298;
case 0x55729d:goto L55729d;
case 0x5572a0:c.instructions+=2;goto B5572a0;
case 0x5572a2:c.instructions+=1;goto B5572a2;
case 0x5572a4:goto L5572a4;
case 0x5572aa:c.instructions+=3;goto B5572aa;
case 0x5572ac:c.instructions+=2;goto B5572ac;
case 0x5572af:c.instructions+=1;goto B5572af;
case 0x5572b1:goto L5572b1;
case 0x5572b3:c.instructions+=3;goto B5572b3;
case 0x5572b5:c.instructions+=2;goto B5572b5;
case 0x5572ba:c.instructions+=1;goto B5572ba;
case 0x5572bc:goto L5572bc;
case 0x5572bd:c.instructions+=3;goto B5572bd;
case 0x5572c2:c.instructions+=2;goto B5572c2;
case 0x5572c4:c.instructions+=1;goto B5572c4;
case 0x5572c6:goto L5572c6;
case 0x5572c8:c.instructions+=2;goto B5572c8;
case 0x5572cd:c.instructions+=1;goto B5572cd;
case 0x5572cf:goto L5572cf;
case 0x5572d4:goto L5572d4;
case 0x5572d9:c.instructions+=4;goto B5572d9;
case 0x5572db:c.instructions+=3;goto B5572db;
case 0x5572dd:c.instructions+=2;goto B5572dd;
case 0x5572e1:c.instructions+=1;goto B5572e1;
case 0x5572e6:goto L5572e6;
case 0x5572e9:c.instructions+=5;goto B5572e9;
case 0x5572ec:c.instructions+=4;goto B5572ec;
case 0x5572ed:c.instructions+=3;goto B5572ed;
case 0x5572ee:c.instructions+=2;goto B5572ee;
case 0x5572f4:c.instructions+=1;goto B5572f4;
case 0x5572f9:goto L5572f9;
case 0x557300:c.instructions+=7;goto B557300;
case 0x557301:c.instructions+=6;goto B557301;
case 0x557303:c.instructions+=5;goto B557303;
case 0x55730a:c.instructions+=4;goto B55730a;
case 0x55730b:c.instructions+=3;goto B55730b;
case 0x55730d:c.instructions+=2;goto B55730d;
case 0x55730e:c.instructions+=1;goto B55730e;
case 0x557320:goto L557320;
case 0x557321:c.instructions+=2;goto B557321;
case 0x557323:c.instructions+=1;goto B557323;
case 0x557328:goto L557328;
case 0x55732d:c.instructions+=1;goto B55732d;
case 0x55732f:goto L55732f;
case 0x557330:c.instructions+=1;goto B557330;
case 0x557335:goto L557335;
case 0x557338:goto L557338;
case 0x55733a:c.instructions+=2;goto B55733a;
case 0x55733b:c.instructions+=1;goto B55733b;
case 0x557340:goto L557340;
case 0x557346:c.instructions+=1;goto B557346;
case 0x557350:goto L557350;
case 0x557355:c.instructions+=4;goto B557355;
case 0x557358:c.instructions+=3;goto B557358;
case 0x557359:c.instructions+=2;goto B557359;
case 0x55735b:c.instructions+=1;goto B55735b;
case 0x55735d:goto L55735d;
case 0x55735e:c.instructions+=1;goto B55735e;
case 0x557360:goto L557360;
case 0x557365:goto L557365;
case 0x557367:goto L557367;
case 0x557369:c.instructions+=1;goto B557369;
case 0x55736e:goto L55736e;
case 0x557371:c.instructions+=2;goto B557371;
case 0x557372:c.instructions+=1;goto B557372;
case 0x557377:goto L557377;
case 0x557378:c.instructions+=1;goto B557378;
case 0x55737d:goto L55737d;
case 0x557380:c.instructions+=2;goto B557380;
case 0x557382:c.instructions+=1;goto B557382;
case 0x557384:goto L557384;
case 0x557387:c.instructions+=1;goto B557387;
case 0x557389:goto L557389;
case 0x55738b:goto L55738b;
case 0x55738e:c.instructions+=3;goto B55738e;
case 0x557391:c.instructions+=2;goto B557391;
case 0x557392:c.instructions+=1;goto B557392;
case 0x557395:goto L557395;
case 0x557397:c.instructions+=2;goto B557397;
case 0x557399:c.instructions+=1;goto B557399;
case 0x55739c:goto L55739c;
case 0x5573a1:c.instructions+=1;goto B5573a1;
case 0x5573a6:goto L5573a6;
case 0x5573a9:c.instructions+=2;goto B5573a9;
case 0x5573ab:c.instructions+=1;goto B5573ab;
case 0x5573ad:goto L5573ad;
case 0x5573b3:c.instructions+=3;goto B5573b3;
case 0x5573b5:c.instructions+=2;goto B5573b5;
case 0x5573b8:c.instructions+=1;goto B5573b8;
case 0x5573ba:goto L5573ba;
case 0x5573bc:c.instructions+=3;goto B5573bc;
case 0x5573be:c.instructions+=2;goto B5573be;
case 0x5573c3:c.instructions+=1;goto B5573c3;
case 0x5573c5:goto L5573c5;
case 0x5573c6:c.instructions+=3;goto B5573c6;
case 0x5573cb:c.instructions+=2;goto B5573cb;
case 0x5573cd:c.instructions+=1;goto B5573cd;
case 0x5573cf:goto L5573cf;
case 0x5573d1:c.instructions+=2;goto B5573d1;
case 0x5573d6:c.instructions+=1;goto B5573d6;
case 0x5573d8:goto L5573d8;
case 0x5573dd:goto L5573dd;
case 0x5573e2:c.instructions+=2;goto B5573e2;
case 0x5573e4:c.instructions+=1;goto B5573e4;
case 0x5573e6:goto L5573e6;
case 0x5573e9:c.instructions+=4;goto B5573e9;
case 0x5573ea:c.instructions+=3;goto B5573ea;
case 0x5573f0:c.instructions+=2;goto B5573f0;
case 0x5573f2:c.instructions+=1;goto B5573f2;
case 0x5573f7:goto L5573f7;
case 0x5573f8:c.instructions+=1;goto B5573f8;
case 0x5573f9:goto L5573f9;
case 0x5573fc:c.instructions+=4;goto B5573fc;
case 0x557402:c.instructions+=3;goto B557402;
case 0x557403:c.instructions+=2;goto B557403;
case 0x557408:c.instructions+=1;goto B557408;
case 0x55740d:goto L55740d;
case 0x55740e:c.instructions+=1;goto B55740e;
case 0x557410:goto L557410;
case 0x557411:c.instructions+=5;goto B557411;
case 0x557412:c.instructions+=4;goto B557412;
case 0x557413:c.instructions+=3;goto B557413;
case 0x557415:c.instructions+=2;goto B557415;
case 0x557417:c.instructions+=1;goto B557417;
case 0x55741c:goto L55741c;
case 0x55741e:c.instructions+=4;goto B55741e;
case 0x557421:c.instructions+=3;goto B557421;
case 0x557423:c.instructions+=2;goto B557423;
case 0x557428:c.instructions+=1;goto B557428;
case 0x55742a:goto L55742a;
case 0x557431:c.instructions+=18;goto B557431;
case 0x557434:c.instructions+=17;goto B557434;
case 0x557437:c.instructions+=16;goto B557437;
case 0x55743a:c.instructions+=15;goto B55743a;
case 0x55743d:c.instructions+=14;goto B55743d;
case 0x557441:c.instructions+=13;goto B557441;
case 0x557444:c.instructions+=12;goto B557444;
case 0x557447:c.instructions+=11;goto B557447;
case 0x55744e:c.instructions+=10;goto B55744e;
case 0x557451:c.instructions+=9;goto B557451;
case 0x557454:c.instructions+=8;goto B557454;
case 0x557457:c.instructions+=7;goto B557457;
case 0x55745a:c.instructions+=6;goto B55745a;
case 0x55745d:c.instructions+=5;goto B55745d;
case 0x557461:c.instructions+=4;goto B557461;
case 0x557467:c.instructions+=3;goto B557467;
case 0x55746a:c.instructions+=2;goto B55746a;
case 0x55746e:c.instructions+=1;goto B55746e;
case 0x557470:goto L557470;
case 0x557472:goto L557472;
case 0x557474:c.instructions+=3;goto B557474;
case 0x557475:c.instructions+=2;goto B557475;
case 0x557477:c.instructions+=1;goto B557477;
case 0x55747a:goto L55747a;
case 0x55747c:c.instructions+=1;goto B55747c;
case 0x557481:goto L557481;
case 0x557484:c.instructions+=2;goto B557484;
case 0x557486:c.instructions+=1;goto B557486;
case 0x557488:goto L557488;
case 0x55748f:c.instructions+=18;goto B55748f;
case 0x557492:c.instructions+=17;goto B557492;
case 0x557495:c.instructions+=16;goto B557495;
case 0x557498:c.instructions+=15;goto B557498;
case 0x55749b:c.instructions+=14;goto B55749b;
case 0x55749f:c.instructions+=13;goto B55749f;
case 0x5574a2:c.instructions+=12;goto B5574a2;
case 0x5574a5:c.instructions+=11;goto B5574a5;
case 0x5574ac:c.instructions+=10;goto B5574ac;
case 0x5574af:c.instructions+=9;goto B5574af;
case 0x5574b2:c.instructions+=8;goto B5574b2;
case 0x5574b5:c.instructions+=7;goto B5574b5;
case 0x5574b8:c.instructions+=6;goto B5574b8;
case 0x5574bb:c.instructions+=5;goto B5574bb;
case 0x5574bf:c.instructions+=4;goto B5574bf;
case 0x5574c5:c.instructions+=3;goto B5574c5;
case 0x5574cc:c.instructions+=2;goto B5574cc;
case 0x5574d0:c.instructions+=1;goto B5574d0;
case 0x5574d2:goto L5574d2;
case 0x5574d4:goto L5574d4;
case 0x5574d6:c.instructions+=3;goto B5574d6;
case 0x5574d7:c.instructions+=2;goto B5574d7;
case 0x5574d9:c.instructions+=1;goto B5574d9;
case 0x5574dc:goto L5574dc;
case 0x5574de:c.instructions+=1;goto B5574de;
case 0x5574e3:goto L5574e3;
case 0x5574e6:c.instructions+=2;goto B5574e6;
case 0x5574e8:c.instructions+=1;goto B5574e8;
case 0x5574ea:goto L5574ea;
case 0x5574f1:c.instructions+=18;goto B5574f1;
case 0x5574f4:c.instructions+=17;goto B5574f4;
case 0x5574f7:c.instructions+=16;goto B5574f7;
case 0x5574fa:c.instructions+=15;goto B5574fa;
case 0x5574fd:c.instructions+=14;goto B5574fd;
case 0x557501:c.instructions+=13;goto B557501;
case 0x557504:c.instructions+=12;goto B557504;
case 0x557507:c.instructions+=11;goto B557507;
case 0x55750e:c.instructions+=10;goto B55750e;
case 0x557511:c.instructions+=9;goto B557511;
case 0x557514:c.instructions+=8;goto B557514;
case 0x557517:c.instructions+=7;goto B557517;
case 0x55751a:c.instructions+=6;goto B55751a;
case 0x55751d:c.instructions+=5;goto B55751d;
case 0x557521:c.instructions+=4;goto B557521;
case 0x557527:c.instructions+=3;goto B557527;
case 0x55752e:c.instructions+=2;goto B55752e;
case 0x557532:c.instructions+=1;goto B557532;
case 0x557534:goto L557534;
case 0x557536:goto L557536;
case 0x557538:c.instructions+=3;goto B557538;
case 0x557539:c.instructions+=2;goto B557539;
case 0x55753b:c.instructions+=1;goto B55753b;
case 0x55753e:goto L55753e;
case 0x557540:c.instructions+=1;goto B557540;
case 0x557545:goto L557545;
case 0x557548:c.instructions+=2;goto B557548;
case 0x55754a:c.instructions+=1;goto B55754a;
case 0x55754c:goto L55754c;
case 0x557553:c.instructions+=18;goto B557553;
case 0x557556:c.instructions+=17;goto B557556;
case 0x557559:c.instructions+=16;goto B557559;
case 0x55755c:c.instructions+=15;goto B55755c;
case 0x55755f:c.instructions+=14;goto B55755f;
case 0x557563:c.instructions+=13;goto B557563;
case 0x557566:c.instructions+=12;goto B557566;
case 0x557569:c.instructions+=11;goto B557569;
case 0x557570:c.instructions+=10;goto B557570;
case 0x557573:c.instructions+=9;goto B557573;
case 0x557576:c.instructions+=8;goto B557576;
case 0x557579:c.instructions+=7;goto B557579;
case 0x55757c:c.instructions+=6;goto B55757c;
case 0x55757f:c.instructions+=5;goto B55757f;
case 0x557583:c.instructions+=4;goto B557583;
case 0x557589:c.instructions+=3;goto B557589;
case 0x557590:c.instructions+=2;goto B557590;
case 0x557594:c.instructions+=1;goto B557594;
case 0x557596:goto L557596;
case 0x557598:goto L557598;
case 0x55759a:c.instructions+=3;goto B55759a;
case 0x55759b:c.instructions+=2;goto B55759b;
case 0x55759d:c.instructions+=1;goto B55759d;
case 0x5575a0:goto L5575a0;
case 0x5575a2:c.instructions+=1;goto B5575a2;
case 0x5575a7:goto L5575a7;
case 0x5575aa:c.instructions+=2;goto B5575aa;
case 0x5575ac:c.instructions+=1;goto B5575ac;
case 0x5575ae:goto L5575ae;
case 0x5575b5:c.instructions+=18;goto B5575b5;
case 0x5575b8:c.instructions+=17;goto B5575b8;
case 0x5575bb:c.instructions+=16;goto B5575bb;
case 0x5575be:c.instructions+=15;goto B5575be;
case 0x5575c1:c.instructions+=14;goto B5575c1;
case 0x5575c5:c.instructions+=13;goto B5575c5;
case 0x5575c8:c.instructions+=12;goto B5575c8;
case 0x5575cb:c.instructions+=11;goto B5575cb;
case 0x5575d2:c.instructions+=10;goto B5575d2;
case 0x5575d5:c.instructions+=9;goto B5575d5;
case 0x5575d8:c.instructions+=8;goto B5575d8;
case 0x5575db:c.instructions+=7;goto B5575db;
case 0x5575de:c.instructions+=6;goto B5575de;
case 0x5575e1:c.instructions+=5;goto B5575e1;
case 0x5575e5:c.instructions+=4;goto B5575e5;
case 0x5575eb:c.instructions+=3;goto B5575eb;
case 0x5575f2:c.instructions+=2;goto B5575f2;
case 0x5575f6:c.instructions+=1;goto B5575f6;
case 0x5575f8:goto L5575f8;
case 0x5575fa:goto L5575fa;
case 0x5575fc:c.instructions+=3;goto B5575fc;
case 0x5575fd:c.instructions+=2;goto B5575fd;
case 0x5575ff:c.instructions+=1;goto B5575ff;
case 0x557602:goto L557602;
case 0x557605:c.instructions+=2;goto B557605;
case 0x557606:c.instructions+=1;goto B557606;
case 0x55760b:goto L55760b;
case 0x55760c:c.instructions+=1;goto B55760c;
case 0x557611:goto L557611;
case 0x557614:c.instructions+=2;goto B557614;
case 0x557616:c.instructions+=1;goto B557616;
case 0x557618:goto L557618;
case 0x55761b:c.instructions+=1;goto B55761b;
case 0x55761d:goto L55761d;
case 0x55761f:goto L55761f;
case 0x557622:c.instructions+=3;goto B557622;
case 0x557625:c.instructions+=2;goto B557625;
case 0x557626:c.instructions+=1;goto B557626;
case 0x557629:goto L557629;
case 0x55762b:c.instructions+=2;goto B55762b;
case 0x55762d:c.instructions+=1;goto B55762d;
case 0x557630:goto L557630;
case 0x557635:c.instructions+=1;goto B557635;
case 0x55763a:goto L55763a;
case 0x55763d:c.instructions+=2;goto B55763d;
case 0x55763f:c.instructions+=1;goto B55763f;
case 0x557641:goto L557641;
case 0x557647:c.instructions+=3;goto B557647;
case 0x557649:c.instructions+=2;goto B557649;
case 0x55764c:c.instructions+=1;goto B55764c;
case 0x55764e:goto L55764e;
case 0x557650:c.instructions+=3;goto B557650;
case 0x557651:c.instructions+=2;goto B557651;
case 0x557656:c.instructions+=1;goto B557656;
case 0x557658:goto L557658;
case 0x557659:c.instructions+=3;goto B557659;
case 0x55765e:c.instructions+=2;goto B55765e;
case 0x557660:c.instructions+=1;goto B557660;
case 0x557665:goto L557665;
case 0x557666:c.instructions+=3;goto B557666;
case 0x557667:c.instructions+=2;goto B557667;
case 0x557668:c.instructions+=1;goto B557668;
case 0x557669:goto L557669;
case 0x55766a:c.instructions+=3;goto B55766a;
case 0x55766f:c.instructions+=2;goto B55766f;
case 0x557670:c.instructions+=1;goto B557670;
case 0x557675:goto L557675;
case 0x557676:c.instructions+=3;goto B557676;
case 0x557677:c.instructions+=2;goto B557677;
case 0x557678:c.instructions+=1;goto B557678;
case 0x557680:goto L557680;
case 0x557681:c.instructions+=5;goto B557681;
case 0x557686:c.instructions+=4;goto B557686;
case 0x55768b:c.instructions+=3;goto B55768b;
case 0x55768d:c.instructions+=2;goto B55768d;
case 0x55768f:c.instructions+=1;goto B55768f;
case 0x557694:goto L557694;
case 0x557699:c.instructions+=4;goto B557699;
case 0x55769e:c.instructions+=3;goto B55769e;
case 0x5576a0:c.instructions+=2;goto B5576a0;
case 0x5576a2:c.instructions+=1;goto B5576a2;
case 0x5576a7:goto L5576a7;
case 0x5576ac:c.instructions+=4;goto B5576ac;
case 0x5576b1:c.instructions+=3;goto B5576b1;
case 0x5576b3:c.instructions+=2;goto B5576b3;
case 0x5576b5:c.instructions+=1;goto B5576b5;
case 0x5576ba:goto L5576ba;
case 0x5576bf:c.instructions+=4;goto B5576bf;
case 0x5576c4:c.instructions+=3;goto B5576c4;
case 0x5576c6:c.instructions+=2;goto B5576c6;
case 0x5576c8:c.instructions+=1;goto B5576c8;
case 0x5576cd:goto L5576cd;
case 0x5576d2:c.instructions+=4;goto B5576d2;
case 0x5576d7:c.instructions+=3;goto B5576d7;
case 0x5576d9:c.instructions+=2;goto B5576d9;
case 0x5576db:c.instructions+=1;goto B5576db;
case 0x5576e0:goto L5576e0;
case 0x5576e5:c.instructions+=4;goto B5576e5;
case 0x5576ea:c.instructions+=3;goto B5576ea;
case 0x5576ec:c.instructions+=2;goto B5576ec;
case 0x5576ee:c.instructions+=1;goto B5576ee;
case 0x5576f3:goto L5576f3;
case 0x5576f8:c.instructions+=4;goto B5576f8;
case 0x5576fd:c.instructions+=3;goto B5576fd;
case 0x5576ff:c.instructions+=2;goto B5576ff;
case 0x557701:c.instructions+=1;goto B557701;
case 0x557706:goto L557706;
case 0x557709:c.instructions+=2;goto B557709;
case 0x55770a:c.instructions+=1;goto B55770a;
case 0x55770f:goto L55770f;
case 0x557710:c.instructions+=1;goto B557710;
case 0x557715:goto L557715;
case 0x557718:c.instructions+=2;goto B557718;
case 0x55771a:c.instructions+=1;goto B55771a;
case 0x55771c:goto L55771c;
case 0x55771f:c.instructions+=1;goto B55771f;
case 0x557721:goto L557721;
case 0x557723:goto L557723;
case 0x557726:c.instructions+=3;goto B557726;
case 0x557729:c.instructions+=2;goto B557729;
case 0x55772a:c.instructions+=1;goto B55772a;
case 0x55772d:goto L55772d;
case 0x55772f:c.instructions+=2;goto B55772f;
case 0x557731:c.instructions+=1;goto B557731;
case 0x557734:goto L557734;
case 0x557739:c.instructions+=1;goto B557739;
case 0x55773e:goto L55773e;
case 0x557741:c.instructions+=2;goto B557741;
case 0x557743:c.instructions+=1;goto B557743;
case 0x557745:goto L557745;
case 0x55774b:c.instructions+=3;goto B55774b;
case 0x55774d:c.instructions+=2;goto B55774d;
case 0x557750:c.instructions+=1;goto B557750;
case 0x557752:goto L557752;
case 0x557754:c.instructions+=3;goto B557754;
case 0x557756:c.instructions+=2;goto B557756;
case 0x55775b:c.instructions+=1;goto B55775b;
case 0x55775d:goto L55775d;
case 0x55775e:c.instructions+=3;goto B55775e;
case 0x557763:c.instructions+=2;goto B557763;
case 0x557765:c.instructions+=1;goto B557765;
case 0x55776a:goto L55776a;
case 0x55776b:c.instructions+=1;goto B55776b;
case 0x55776c:goto L55776c;
case 0x55776e:c.instructions+=3;goto B55776e;
case 0x557773:c.instructions+=2;goto B557773;
case 0x557775:c.instructions+=1;goto B557775;
case 0x55777a:goto L55777a;
case 0x55777b:c.instructions+=1;goto B55777b;
case 0x557780:goto L557780;
case 0x557785:c.instructions+=4;goto B557785;
case 0x557788:c.instructions+=3;goto B557788;
case 0x557789:c.instructions+=2;goto B557789;
case 0x55778b:c.instructions+=1;goto B55778b;
case 0x55778d:goto L55778d;
case 0x557794:goto L557794;
case 0x557796:c.instructions+=1;goto B557796;
case 0x55779b:goto L55779b;
case 0x55779d:goto L55779d;
case 0x55779f:c.instructions+=1;goto B55779f;
case 0x5577a4:goto L5577a4;
case 0x5577a6:goto L5577a6;
case 0x5577a8:c.instructions+=1;goto B5577a8;
case 0x5577ad:goto L5577ad;
case 0x5577af:goto L5577af;
case 0x5577b1:c.instructions+=1;goto B5577b1;
case 0x5577b6:goto L5577b6;
case 0x5577b9:c.instructions+=2;goto B5577b9;
case 0x5577ba:c.instructions+=1;goto B5577ba;
case 0x5577bf:goto L5577bf;
case 0x5577c0:c.instructions+=1;goto B5577c0;
case 0x5577c5:goto L5577c5;
case 0x5577c8:c.instructions+=2;goto B5577c8;
case 0x5577ca:c.instructions+=1;goto B5577ca;
case 0x5577cc:goto L5577cc;
case 0x5577cf:c.instructions+=1;goto B5577cf;
case 0x5577d1:goto L5577d1;
case 0x5577d3:goto L5577d3;
case 0x5577d4:c.instructions+=2;goto B5577d4;
case 0x5577d6:c.instructions+=1;goto B5577d6;
case 0x5577db:goto L5577db;
case 0x5577de:c.instructions+=2;goto B5577de;
case 0x5577e0:c.instructions+=1;goto B5577e0;
case 0x5577e2:goto L5577e2;
case 0x5577e5:c.instructions+=2;goto B5577e5;
case 0x5577e7:c.instructions+=1;goto B5577e7;
case 0x5577e9:goto L5577e9;
case 0x5577ec:c.instructions+=1;goto B5577ec;
case 0x5577ee:goto L5577ee;
case 0x5577f0:goto L5577f0;
case 0x5577f2:c.instructions+=1;goto B5577f2;
case 0x5577f4:goto L5577f4;
case 0x5577f6:c.instructions+=1;goto B5577f6;
case 0x5577f9:goto L5577f9;
case 0x5577fe:c.instructions+=2;goto B5577fe;
case 0x557800:c.instructions+=1;goto B557800;
case 0x557802:goto L557802;
case 0x557807:c.instructions+=3;goto B557807;
case 0x557809:c.instructions+=2;goto B557809;
case 0x55780a:c.instructions+=1;goto B55780a;
case 0x55780c:goto L55780c;
case 0x557811:c.instructions+=1;goto B557811;
case 0x557813:goto L557813;
case 0x557816:c.instructions+=1;goto B557816;
case 0x557818:goto L557818;
case 0x55781d:c.instructions+=1;goto B55781d;
case 0x55781f:goto L55781f;
case 0x557822:c.instructions+=1;goto B557822;
case 0x557824:goto L557824;
case 0x557829:c.instructions+=1;goto B557829;
case 0x55782b:goto L55782b;
case 0x55782d:c.instructions+=5;goto B55782d;
case 0x557830:c.instructions+=4;goto B557830;
case 0x557833:c.instructions+=3;goto B557833;
case 0x557834:c.instructions+=2;goto B557834;
case 0x557837:c.instructions+=1;goto B557837;
case 0x557839:goto L557839;
case 0x55783f:c.instructions+=2;goto B55783f;
case 0x557840:c.instructions+=1;goto B557840;
case 0x557845:goto L557845;
case 0x557848:c.instructions+=2;goto B557848;
case 0x55784a:c.instructions+=1;goto B55784a;
case 0x55784c:goto L55784c;
case 0x55784f:c.instructions+=3;goto B55784f;
case 0x557852:c.instructions+=2;goto B557852;
case 0x557855:c.instructions+=1;goto B557855;
case 0x557858:goto L557858;
case 0x557859:goto L557859;
case 0x55785e:c.instructions+=1;goto B55785e;
case 0x557863:goto L557863;
case 0x557866:c.instructions+=2;goto B557866;
case 0x557868:c.instructions+=1;goto B557868;
case 0x55786a:goto L55786a;
case 0x557870:c.instructions+=3;goto B557870;
case 0x557872:c.instructions+=2;goto B557872;
case 0x557875:c.instructions+=1;goto B557875;
case 0x557877:goto L557877;
case 0x557879:c.instructions+=3;goto B557879;
case 0x55787b:c.instructions+=2;goto B55787b;
case 0x557880:c.instructions+=1;goto B557880;
case 0x557882:goto L557882;
case 0x557883:c.instructions+=3;goto B557883;
case 0x557888:c.instructions+=2;goto B557888;
case 0x55788a:c.instructions+=1;goto B55788a;
case 0x55788f:goto L55788f;
case 0x557890:c.instructions+=1;goto B557890;
case 0x557891:goto L557891;
case 0x557893:c.instructions+=3;goto B557893;
case 0x557898:c.instructions+=2;goto B557898;
case 0x55789a:c.instructions+=1;goto B55789a;
case 0x55789f:goto L55789f;
case 0x5578a0:c.instructions+=1;goto B5578a0;
case 0x5578c0:goto L5578c0;
case 0x5578c1:c.instructions+=7;goto B5578c1;
case 0x5578c3:c.instructions+=6;goto B5578c3;
case 0x5578c7:c.instructions+=5;goto B5578c7;
case 0x5578cc:c.instructions+=4;goto B5578cc;
case 0x5578cf:c.instructions+=3;goto B5578cf;
case 0x5578d0:c.instructions+=2;goto B5578d0;
case 0x5578d5:c.instructions+=1;goto B5578d5;
case 0x5578d7:goto L5578d7;
case 0x5578d8:c.instructions+=1;goto B5578d8;
case 0x5578da:goto L5578da;
case 0x5578db:c.instructions+=1;goto B5578db;
case 0x5578dd:goto L5578dd;
case 0x5578e1:c.instructions+=1;goto B5578e1;
case 0x5578e3:goto L5578e3;
case 0x5578e8:c.instructions+=1;goto B5578e8;
case 0x5578ea:goto L5578ea;
case 0x5578ef:goto L5578ef;
case 0x5578f2:c.instructions+=2;goto B5578f2;
case 0x5578f4:c.instructions+=1;goto B5578f4;
case 0x5578f6:goto L5578f6;
case 0x5578fb:c.instructions+=1;goto B5578fb;
case 0x557900:goto L557900;
case 0x557903:c.instructions+=2;goto B557903;
case 0x557905:c.instructions+=1;goto B557905;
case 0x557907:goto L557907;
case 0x557909:c.instructions+=1;goto B557909;
case 0x55790e:goto L55790e;
case 0x557910:c.instructions+=4;goto B557910;
case 0x557912:c.instructions+=3;goto B557912;
case 0x557914:c.instructions+=2;goto B557914;
case 0x557916:c.instructions+=1;goto B557916;
case 0x557918:goto L557918;
case 0x55791a:c.instructions+=5;goto B55791a;
case 0x55791b:c.instructions+=4;goto B55791b;
case 0x55791c:c.instructions+=3;goto B55791c;
case 0x55791d:c.instructions+=2;goto B55791d;
case 0x55791f:c.instructions+=1;goto B55791f;
case 0x557921:goto L557921;
case 0x557923:c.instructions+=1;goto B557923;
case 0x557928:goto L557928;
case 0x55792b:c.instructions+=2;goto B55792b;
case 0x55792d:c.instructions+=1;goto B55792d;
case 0x55792f:goto L55792f;
case 0x557931:c.instructions+=1;goto B557931;
case 0x557936:goto L557936;
case 0x557938:goto L557938;
case 0x55793a:goto L55793a;
case 0x557940:c.instructions+=5;goto B557940;
case 0x557941:c.instructions+=4;goto B557941;
case 0x557947:c.instructions+=3;goto B557947;
case 0x557948:c.instructions+=2;goto B557948;
case 0x55794a:c.instructions+=1;goto B55794a;
case 0x55794b:goto L55794b;
case 0x55794e:c.instructions+=5;goto B55794e;
case 0x55794f:c.instructions+=4;goto B55794f;
case 0x557952:c.instructions+=3;goto B557952;
case 0x557954:c.instructions+=2;goto B557954;
case 0x557956:c.instructions+=1;goto B557956;
case 0x557959:goto L557959;
case 0x55795c:c.instructions+=2;goto B55795c;
case 0x55795e:c.instructions+=1;goto B55795e;
case 0x557961:goto L557961;
case 0x557966:c.instructions+=2;goto B557966;
case 0x557968:c.instructions+=1;goto B557968;
case 0x55796a:goto L55796a;
case 0x55796f:c.instructions+=2;goto B55796f;
case 0x557971:c.instructions+=1;goto B557971;
case 0x557973:goto L557973;
case 0x557978:c.instructions+=1;goto B557978;
case 0x55797a:goto L55797a;
case 0x55797d:c.instructions+=1;goto B55797d;
case 0x55797f:goto L55797f;
case 0x557984:c.instructions+=1;goto B557984;
case 0x557986:goto L557986;
case 0x557989:c.instructions+=1;goto B557989;
case 0x55798b:goto L55798b;
case 0x557990:c.instructions+=1;goto B557990;
case 0x557992:goto L557992;
case 0x557994:c.instructions+=5;goto B557994;
case 0x557997:c.instructions+=4;goto B557997;
case 0x55799a:c.instructions+=3;goto B55799a;
case 0x55799b:c.instructions+=2;goto B55799b;
case 0x55799e:c.instructions+=1;goto B55799e;
case 0x5579a0:goto L5579a0;
case 0x5579a6:c.instructions+=2;goto B5579a6;
case 0x5579a7:c.instructions+=1;goto B5579a7;
case 0x5579ac:goto L5579ac;
case 0x5579af:c.instructions+=2;goto B5579af;
case 0x5579b1:c.instructions+=1;goto B5579b1;
case 0x5579b3:goto L5579b3;
case 0x5579b6:c.instructions+=3;goto B5579b6;
case 0x5579b9:c.instructions+=2;goto B5579b9;
case 0x5579bc:c.instructions+=1;goto B5579bc;
case 0x5579bf:goto L5579bf;
case 0x5579c4:c.instructions+=1;goto B5579c4;
case 0x5579c9:goto L5579c9;
case 0x5579cc:c.instructions+=2;goto B5579cc;
case 0x5579ce:c.instructions+=1;goto B5579ce;
case 0x5579d0:goto L5579d0;
case 0x5579d6:c.instructions+=3;goto B5579d6;
case 0x5579d8:c.instructions+=2;goto B5579d8;
case 0x5579db:c.instructions+=1;goto B5579db;
case 0x5579dd:goto L5579dd;
case 0x5579df:c.instructions+=3;goto B5579df;
case 0x5579e1:c.instructions+=2;goto B5579e1;
case 0x5579e6:c.instructions+=1;goto B5579e6;
case 0x5579e8:goto L5579e8;
case 0x5579e9:c.instructions+=3;goto B5579e9;
case 0x5579ee:c.instructions+=2;goto B5579ee;
case 0x5579f0:c.instructions+=1;goto B5579f0;
case 0x5579f5:goto L5579f5;
case 0x5579f6:c.instructions+=2;goto B5579f6;
case 0x5579f7:c.instructions+=1;goto B5579f7;
case 0x5579f8:goto L5579f8;
case 0x5579fa:c.instructions+=3;goto B5579fa;
case 0x5579ff:c.instructions+=2;goto B5579ff;
case 0x557a01:c.instructions+=1;goto B557a01;
case 0x557a06:goto L557a06;
case 0x557a07:c.instructions+=2;goto B557a07;
case 0x557a08:c.instructions+=1;goto B557a08;
case 0x557a10:goto L557a10;
case 0x557a11:c.instructions+=15;goto B557a11;
case 0x557a13:c.instructions+=14;goto B557a13;
case 0x557a15:c.instructions+=13;goto B557a15;
case 0x557a1a:c.instructions+=12;goto B557a1a;
case 0x557a20:c.instructions+=11;goto B557a20;
case 0x557a21:c.instructions+=10;goto B557a21;
case 0x557a28:c.instructions+=9;goto B557a28;
case 0x557a29:c.instructions+=8;goto B557a29;
case 0x557a2a:c.instructions+=7;goto B557a2a;
case 0x557a2b:c.instructions+=6;goto B557a2b;
case 0x557a2c:c.instructions+=5;goto B557a2c;
case 0x557a2f:c.instructions+=4;goto B557a2f;
case 0x557a31:c.instructions+=3;goto B557a31;
case 0x557a32:c.instructions+=2;goto B557a32;
case 0x557a35:c.instructions+=1;goto B557a35;
case 0x557a3a:goto L557a3a;
case 0x557a3c:c.instructions+=9;goto B557a3c;
case 0x557a42:c.instructions+=8;goto B557a42;
case 0x557a45:c.instructions+=7;goto B557a45;
case 0x557a48:c.instructions+=6;goto B557a48;
case 0x557a4b:c.instructions+=5;goto B557a4b;
case 0x557a4e:c.instructions+=4;goto B557a4e;
case 0x557a53:c.instructions+=3;goto B557a53;
case 0x557a56:c.instructions+=2;goto B557a56;
case 0x557a5c:c.instructions+=1;goto B557a5c;
case 0x557a61:goto L557a61;
case 0x557a64:c.instructions+=2;goto B557a64;
case 0x557a66:c.instructions+=1;goto B557a66;
case 0x557a68:goto L557a68;
case 0x557a6e:c.instructions+=3;goto B557a6e;
case 0x557a70:c.instructions+=2;goto B557a70;
case 0x557a73:c.instructions+=1;goto B557a73;
case 0x557a75:goto L557a75;
case 0x557a77:c.instructions+=3;goto B557a77;
case 0x557a78:c.instructions+=2;goto B557a78;
case 0x557a7d:c.instructions+=1;goto B557a7d;
case 0x557a7f:goto L557a7f;
case 0x557a80:c.instructions+=3;goto B557a80;
case 0x557a85:c.instructions+=2;goto B557a85;
case 0x557a87:c.instructions+=1;goto B557a87;
case 0x557a89:goto L557a89;
case 0x557a8a:c.instructions+=2;goto B557a8a;
case 0x557a8f:c.instructions+=1;goto B557a8f;
case 0x557a90:goto L557a90;
case 0x557a95:goto L557a95;
case 0x557a9a:c.instructions+=4;goto B557a9a;
case 0x557a9c:c.instructions+=3;goto B557a9c;
case 0x557a9e:c.instructions+=2;goto B557a9e;
case 0x557aa2:c.instructions+=1;goto B557aa2;
case 0x557aa7:goto L557aa7;
case 0x557aaa:c.instructions+=5;goto B557aaa;
case 0x557aad:c.instructions+=4;goto B557aad;
case 0x557aae:c.instructions+=3;goto B557aae;
case 0x557ab4:c.instructions+=2;goto B557ab4;
case 0x557ab5:c.instructions+=1;goto B557ab5;
case 0x557aba:goto L557aba;
case 0x557abf:c.instructions+=5;goto B557abf;
case 0x557ac6:c.instructions+=4;goto B557ac6;
case 0x557ac7:c.instructions+=3;goto B557ac7;
case 0x557ac9:c.instructions+=2;goto B557ac9;
case 0x557acf:c.instructions+=1;goto B557acf;
case 0x557ad4:goto L557ad4;
case 0x557ad7:c.instructions+=2;goto B557ad7;
case 0x557ada:c.instructions+=1;goto B557ada;
case 0x557adc:goto L557adc;
case 0x557adf:c.instructions+=3;goto B557adf;
case 0x557ae1:c.instructions+=2;goto B557ae1;
case 0x557ae3:c.instructions+=1;goto B557ae3;
case 0x557ae8:goto L557ae8;
case 0x557aea:c.instructions+=2;goto B557aea;
case 0x557aee:c.instructions+=1;goto B557aee;
case 0x557af3:goto L557af3;
case 0x557af5:c.instructions+=7;goto B557af5;
case 0x557afa:c.instructions+=6;goto B557afa;
case 0x557b01:c.instructions+=5;goto B557b01;
case 0x557b0b:c.instructions+=4;goto B557b0b;
case 0x557b0e:c.instructions+=3;goto B557b0e;
case 0x557b13:c.instructions+=2;goto B557b13;
case 0x557b14:c.instructions+=1;goto B557b14;
case 0x557b19:goto L557b19;
case 0x557b1f:c.instructions+=3;goto B557b1f;
case 0x557b22:c.instructions+=2;goto B557b22;
case 0x557b24:c.instructions+=1;goto B557b24;
case 0x557b29:goto L557b29;
case 0x557b2c:c.instructions+=2;goto B557b2c;
case 0x557b32:c.instructions+=1;goto B557b32;
case 0x557b37:goto L557b37;
case 0x557b39:goto L557b39;
case 0x557b3c:c.instructions+=4;goto B557b3c;
case 0x557b41:c.instructions+=3;goto B557b41;
case 0x557b42:c.instructions+=2;goto B557b42;
case 0x557b45:c.instructions+=1;goto B557b45;
case 0x557b4a:goto L557b4a;
case 0x557b4d:c.instructions+=3;goto B557b4d;
case 0x557b52:c.instructions+=2;goto B557b52;
case 0x557b53:c.instructions+=1;goto B557b53;
case 0x557b58:goto L557b58;
case 0x557b5b:c.instructions+=5;goto B557b5b;
case 0x557b5d:c.instructions+=4;goto B557b5d;
case 0x557b62:c.instructions+=3;goto B557b62;
case 0x557b67:c.instructions+=2;goto B557b67;
case 0x557b68:c.instructions+=1;goto B557b68;
case 0x557b6d:goto L557b6d;
case 0x557b70:c.instructions+=3;goto B557b70;
case 0x557b71:c.instructions+=2;goto B557b71;
case 0x557b73:c.instructions+=1;goto B557b73;
case 0x557b78:goto L557b78;
case 0x557b7d:c.instructions+=1;goto B557b7d;
case 0x557b82:goto L557b82;
case 0x557b85:c.instructions+=2;goto B557b85;
case 0x557b87:c.instructions+=1;goto B557b87;
case 0x557b89:goto L557b89;
case 0x557b8f:c.instructions+=3;goto B557b8f;
case 0x557b91:c.instructions+=2;goto B557b91;
case 0x557b94:c.instructions+=1;goto B557b94;
case 0x557b96:goto L557b96;
case 0x557b98:c.instructions+=3;goto B557b98;
case 0x557b99:c.instructions+=2;goto B557b99;
case 0x557b9e:c.instructions+=1;goto B557b9e;
case 0x557ba0:goto L557ba0;
case 0x557ba1:c.instructions+=3;goto B557ba1;
case 0x557ba6:c.instructions+=2;goto B557ba6;
case 0x557ba8:c.instructions+=1;goto B557ba8;
case 0x557baa:goto L557baa;
case 0x557bab:c.instructions+=2;goto B557bab;
case 0x557bb0:c.instructions+=1;goto B557bb0;
case 0x557bb1:goto L557bb1;
case 0x557bb6:goto L557bb6;
case 0x557bb9:c.instructions+=8;goto B557bb9;
case 0x557bba:c.instructions+=7;goto B557bba;
case 0x557bbc:c.instructions+=6;goto B557bbc;
case 0x557bbd:c.instructions+=5;goto B557bbd;
case 0x557bbe:c.instructions+=4;goto B557bbe;
case 0x557bc5:c.instructions+=3;goto B557bc5;
case 0x557bc7:c.instructions+=2;goto B557bc7;
case 0x557bc8:c.instructions+=1;goto B557bc8;
case 0x557bd0:goto L557bd0;
case 0x557bd1:c.instructions+=15;goto B557bd1;
case 0x557bd3:c.instructions+=14;goto B557bd3;
case 0x557bd5:c.instructions+=13;goto B557bd5;
case 0x557bda:c.instructions+=12;goto B557bda;
case 0x557be0:c.instructions+=11;goto B557be0;
case 0x557be1:c.instructions+=10;goto B557be1;
case 0x557be8:c.instructions+=9;goto B557be8;
case 0x557be9:c.instructions+=8;goto B557be9;
case 0x557bea:c.instructions+=7;goto B557bea;
case 0x557beb:c.instructions+=6;goto B557beb;
case 0x557bec:c.instructions+=5;goto B557bec;
case 0x557bef:c.instructions+=4;goto B557bef;
case 0x557bf1:c.instructions+=3;goto B557bf1;
case 0x557bf2:c.instructions+=2;goto B557bf2;
case 0x557bf5:c.instructions+=1;goto B557bf5;
case 0x557bfa:goto L557bfa;
case 0x557bfc:c.instructions+=66;goto B557bfc;
case 0x557c02:c.instructions+=65;goto B557c02;
case 0x557c05:c.instructions+=64;goto B557c05;
case 0x557c08:c.instructions+=63;goto B557c08;
case 0x557c0d:c.instructions+=62;goto B557c0d;
case 0x557c12:c.instructions+=61;goto B557c12;
case 0x557c17:c.instructions+=60;goto B557c17;
case 0x557c1a:c.instructions+=59;goto B557c1a;
case 0x557c1d:c.instructions+=58;goto B557c1d;
case 0x557c20:c.instructions+=57;goto B557c20;
case 0x557c23:c.instructions+=56;goto B557c23;
case 0x557c26:c.instructions+=55;goto B557c26;
case 0x557c29:c.instructions+=54;goto B557c29;
case 0x557c2c:c.instructions+=53;goto B557c2c;
case 0x557c2f:c.instructions+=52;goto B557c2f;
case 0x557c32:c.instructions+=51;goto B557c32;
case 0x557c35:c.instructions+=50;goto B557c35;
case 0x557c38:c.instructions+=49;goto B557c38;
case 0x557c3e:c.instructions+=48;goto B557c3e;
case 0x557c44:c.instructions+=47;goto B557c44;
case 0x557c4a:c.instructions+=46;goto B557c4a;
case 0x557c50:c.instructions+=45;goto B557c50;
case 0x557c56:c.instructions+=44;goto B557c56;
case 0x557c5c:c.instructions+=43;goto B557c5c;
case 0x557c5f:c.instructions+=42;goto B557c5f;
case 0x557c65:c.instructions+=41;goto B557c65;
case 0x557c6b:c.instructions+=40;goto B557c6b;
case 0x557c71:c.instructions+=39;goto B557c71;
case 0x557c77:c.instructions+=38;goto B557c77;
case 0x557c7d:c.instructions+=37;goto B557c7d;
case 0x557c83:c.instructions+=36;goto B557c83;
case 0x557c89:c.instructions+=35;goto B557c89;
case 0x557c8f:c.instructions+=34;goto B557c8f;
case 0x557c95:c.instructions+=33;goto B557c95;
case 0x557c9b:c.instructions+=32;goto B557c9b;
case 0x557ca1:c.instructions+=31;goto B557ca1;
case 0x557ca7:c.instructions+=30;goto B557ca7;
case 0x557cad:c.instructions+=29;goto B557cad;
case 0x557cb3:c.instructions+=28;goto B557cb3;
case 0x557cb9:c.instructions+=27;goto B557cb9;
case 0x557cbf:c.instructions+=26;goto B557cbf;
case 0x557cc5:c.instructions+=25;goto B557cc5;
case 0x557ccb:c.instructions+=24;goto B557ccb;
case 0x557cd1:c.instructions+=23;goto B557cd1;
case 0x557cd7:c.instructions+=22;goto B557cd7;
case 0x557cdd:c.instructions+=21;goto B557cdd;
case 0x557ce3:c.instructions+=20;goto B557ce3;
case 0x557ce9:c.instructions+=19;goto B557ce9;
case 0x557cef:c.instructions+=18;goto B557cef;
case 0x557cf5:c.instructions+=17;goto B557cf5;
case 0x557cfb:c.instructions+=16;goto B557cfb;
case 0x557d01:c.instructions+=15;goto B557d01;
case 0x557d07:c.instructions+=14;goto B557d07;
case 0x557d0d:c.instructions+=13;goto B557d0d;
case 0x557d13:c.instructions+=12;goto B557d13;
case 0x557d19:c.instructions+=11;goto B557d19;
case 0x557d1f:c.instructions+=10;goto B557d1f;
case 0x557d25:c.instructions+=9;goto B557d25;
case 0x557d2b:c.instructions+=8;goto B557d2b;
case 0x557d2e:c.instructions+=7;goto B557d2e;
case 0x557d34:c.instructions+=6;goto B557d34;
case 0x557d3a:c.instructions+=5;goto B557d3a;
case 0x557d41:c.instructions+=4;goto B557d41;
case 0x557d43:c.instructions+=3;goto B557d43;
case 0x557d47:c.instructions+=2;goto B557d47;
case 0x557d4d:c.instructions+=1;goto B557d4d;
case 0x557d52:goto L557d52;
case 0x557d53:c.instructions+=2;goto B557d53;
case 0x557d55:c.instructions+=1;goto B557d55;
case 0x557d5a:goto L557d5a;
case 0x557d5f:c.instructions+=1;goto B557d5f;
case 0x557d64:goto L557d64;
case 0x557d67:c.instructions+=2;goto B557d67;
case 0x557d69:c.instructions+=1;goto B557d69;
case 0x557d6b:goto L557d6b;
case 0x557d71:c.instructions+=3;goto B557d71;
case 0x557d73:c.instructions+=2;goto B557d73;
case 0x557d76:c.instructions+=1;goto B557d76;
case 0x557d78:goto L557d78;
case 0x557d7a:c.instructions+=3;goto B557d7a;
case 0x557d7b:c.instructions+=2;goto B557d7b;
case 0x557d80:c.instructions+=1;goto B557d80;
case 0x557d82:goto L557d82;
case 0x557d83:c.instructions+=3;goto B557d83;
case 0x557d88:c.instructions+=2;goto B557d88;
case 0x557d8a:c.instructions+=1;goto B557d8a;
case 0x557d8c:goto L557d8c;
case 0x557d8d:c.instructions+=2;goto B557d8d;
case 0x557d92:c.instructions+=1;goto B557d92;
case 0x557d93:goto L557d93;
case 0x557d98:goto L557d98;
case 0x557d9b:c.instructions+=8;goto B557d9b;
case 0x557d9c:c.instructions+=7;goto B557d9c;
case 0x557d9e:c.instructions+=6;goto B557d9e;
case 0x557d9f:c.instructions+=5;goto B557d9f;
case 0x557da0:c.instructions+=4;goto B557da0;
case 0x557da7:c.instructions+=3;goto B557da7;
case 0x557da9:c.instructions+=2;goto B557da9;
case 0x557daa:c.instructions+=1;goto B557daa;
case 0x557db0:goto L557db0;
case 0x557db1:c.instructions+=2;goto B557db1;
case 0x557db3:c.instructions+=1;goto B557db3;
case 0x557db8:goto L557db8;
case 0x557dbd:c.instructions+=1;goto B557dbd;
case 0x557dbf:goto L557dbf;
case 0x557dc0:c.instructions+=1;goto B557dc0;
case 0x557dc5:goto L557dc5;
case 0x557dc8:goto L557dc8;
case 0x557dca:c.instructions+=2;goto B557dca;
case 0x557dcb:c.instructions+=1;goto B557dcb;
case 0x557dd0:goto L557dd0;
case 0x557dd5:c.instructions+=5;goto B557dd5;
case 0x557ddb:c.instructions+=4;goto B557ddb;
case 0x557de1:c.instructions+=3;goto B557de1;
case 0x557de4:c.instructions+=2;goto B557de4;
case 0x557dea:c.instructions+=1;goto B557dea;
case 0x557df0:goto L557df0;
case 0x557dfa:c.instructions+=2;goto B557dfa;
case 0x557dff:c.instructions+=1;goto B557dff;
case 0x557e00:goto L557e00;
case 0x557e03:c.instructions+=3;goto B557e03;
case 0x557e06:c.instructions+=2;goto B557e06;
case 0x557e0b:c.instructions+=1;goto B557e0b;
case 0x557e0d:goto L557e0d;
case 0x557e17:c.instructions+=3;goto B557e17;
case 0x557e19:c.instructions+=2;goto B557e19;
case 0x557e1e:c.instructions+=1;goto B557e1e;
case 0x557e20:goto L557e20;
case 0x557e23:c.instructions+=1;goto B557e23;
case 0x557e25:goto L557e25;
case 0x557e28:c.instructions+=3;goto B557e28;
case 0x557e29:c.instructions+=2;goto B557e29;
case 0x557e2f:c.instructions+=1;goto B557e2f;
case 0x557e31:goto L557e31;
case 0x557e33:goto L557e33;
case 0x557e37:c.instructions+=7;goto B557e37;
case 0x557e39:c.instructions+=6;goto B557e39;
case 0x557e3c:c.instructions+=5;goto B557e3c;
case 0x557e3f:c.instructions+=4;goto B557e3f;
case 0x557e40:c.instructions+=3;goto B557e40;
case 0x557e45:c.instructions+=2;goto B557e45;
case 0x557e46:c.instructions+=1;goto B557e46;
case 0x557e4b:goto L557e4b;
case 0x557e4e:goto L557e4e;
case 0x557e52:c.instructions+=2;goto B557e52;
case 0x557e54:c.instructions+=1;goto B557e54;
case 0x557e56:goto L557e56;
case 0x557e5b:goto L557e5b;
case 0x557e5d:c.instructions+=1;goto B557e5d;
case 0x557e5f:goto L557e5f;
case 0x557e64:goto L557e64;
case 0x557e6a:c.instructions+=2;goto B557e6a;
case 0x557e6c:c.instructions+=1;goto B557e6c;
case 0x557e6e:goto L557e6e;
case 0x557e70:c.instructions+=3;goto B557e70;
case 0x557e72:c.instructions+=2;goto B557e72;
case 0x557e77:c.instructions+=1;goto B557e77;
case 0x557e79:goto L557e79;
case 0x557e7a:c.instructions+=3;goto B557e7a;
case 0x557e7f:c.instructions+=2;goto B557e7f;
case 0x557e81:c.instructions+=1;goto B557e81;
case 0x557e86:goto L557e86;
case 0x557e87:goto L557e87;
case 0x557e8d:c.instructions+=2;goto B557e8d;
case 0x557e8f:c.instructions+=1;goto B557e8f;
case 0x557e91:goto L557e91;
case 0x557e93:c.instructions+=1;goto B557e93;
case 0x557e98:goto L557e98;
case 0x557e9a:c.instructions+=3;goto B557e9a;
case 0x557e9f:c.instructions+=2;goto B557e9f;
case 0x557ea1:c.instructions+=1;goto B557ea1;
case 0x557ea6:goto L557ea6;
case 0x557ea7:goto L557ea7;
case 0x557ead:c.instructions+=2;goto B557ead;
case 0x557eaf:c.instructions+=1;goto B557eaf;
case 0x557eb1:goto L557eb1;
case 0x557eb3:c.instructions+=3;goto B557eb3;
case 0x557eb8:c.instructions+=2;goto B557eb8;
case 0x557eb9:c.instructions+=1;goto B557eb9;
case 0x557ebe:goto L557ebe;
case 0x557ec0:goto L557ec0;
case 0x557ec1:c.instructions+=3;goto B557ec1;
case 0x557ec6:c.instructions+=2;goto B557ec6;
case 0x557ec8:c.instructions+=1;goto B557ec8;
case 0x557ecd:goto L557ecd;
case 0x557ed0:c.instructions+=2;goto B557ed0;
case 0x557ed2:c.instructions+=1;goto B557ed2;
case 0x557ed4:goto L557ed4;
case 0x557eda:c.instructions+=2;goto B557eda;
case 0x557edc:c.instructions+=1;goto B557edc;
case 0x557ede:goto L557ede;
case 0x557ee0:c.instructions+=5;goto B557ee0;
case 0x557ee2:c.instructions+=4;goto B557ee2;
case 0x557ee4:c.instructions+=3;goto B557ee4;
case 0x557ee9:c.instructions+=2;goto B557ee9;
case 0x557eeb:c.instructions+=1;goto B557eeb;
case 0x557ef0:goto L557ef0;
case 0x557ef6:c.instructions+=4;goto B557ef6;
case 0x557efc:c.instructions+=3;goto B557efc;
case 0x557efe:c.instructions+=2;goto B557efe;
case 0x557f03:c.instructions+=1;goto B557f03;
case 0x557f06:goto L557f06;
case 0x557f0c:c.instructions+=3;goto B557f0c;
case 0x557f10:c.instructions+=2;goto B557f10;
case 0x557f11:c.instructions+=1;goto B557f11;
case 0x557f20:goto L557f20;
case 0x557f22:c.instructions+=11;goto B557f22;
case 0x557f27:c.instructions+=10;goto B557f27;
case 0x557f2d:c.instructions+=9;goto B557f2d;
case 0x557f2e:c.instructions+=8;goto B557f2e;
case 0x557f35:c.instructions+=7;goto B557f35;
case 0x557f36:c.instructions+=6;goto B557f36;
case 0x557f3a:c.instructions+=5;goto B557f3a;
case 0x557f3b:c.instructions+=4;goto B557f3b;
case 0x557f3d:c.instructions+=3;goto B557f3d;
case 0x557f3e:c.instructions+=2;goto B557f3e;
case 0x557f42:c.instructions+=1;goto B557f42;
case 0x557f47:goto L557f47;
case 0x557f4c:c.instructions+=3;goto B557f4c;
case 0x557f54:c.instructions+=2;goto B557f54;
case 0x557f5a:c.instructions+=1;goto B557f5a;
case 0x557f5f:goto L557f5f;
case 0x557f61:c.instructions+=3;goto B557f61;
case 0x557f68:c.instructions+=2;goto B557f68;
case 0x557f6f:c.instructions+=1;goto B557f6f;
case 0x557f74:goto L557f74;
case 0x557f79:c.instructions+=1;goto B557f79;
case 0x557f7e:goto L557f7e;
case 0x557f81:c.instructions+=2;goto B557f81;
case 0x557f83:c.instructions+=1;goto B557f83;
case 0x557f85:goto L557f85;
case 0x557f8b:c.instructions+=3;goto B557f8b;
case 0x557f8d:c.instructions+=2;goto B557f8d;
case 0x557f90:c.instructions+=1;goto B557f90;
case 0x557f92:goto L557f92;
case 0x557f94:c.instructions+=3;goto B557f94;
case 0x557f96:c.instructions+=2;goto B557f96;
case 0x557f9b:c.instructions+=1;goto B557f9b;
case 0x557f9d:goto L557f9d;
case 0x557f9e:c.instructions+=3;goto B557f9e;
case 0x557fa3:c.instructions+=2;goto B557fa3;
case 0x557fa5:c.instructions+=1;goto B557fa5;
case 0x557fa7:goto L557fa7;
case 0x557fa9:c.instructions+=2;goto B557fa9;
case 0x557fae:c.instructions+=1;goto B557fae;
case 0x557fb0:goto L557fb0;
case 0x557fb5:goto L557fb5;
case 0x557fba:c.instructions+=4;goto B557fba;
case 0x557fbc:c.instructions+=3;goto B557fbc;
case 0x557fbe:c.instructions+=2;goto B557fbe;
case 0x557fc2:c.instructions+=1;goto B557fc2;
case 0x557fc7:goto L557fc7;
case 0x557fca:c.instructions+=5;goto B557fca;
case 0x557fcd:c.instructions+=4;goto B557fcd;
case 0x557fce:c.instructions+=3;goto B557fce;
case 0x557fd4:c.instructions+=2;goto B557fd4;
case 0x557fd5:c.instructions+=1;goto B557fd5;
case 0x557fda:goto L557fda;
case 0x557fde:c.instructions+=5;goto B557fde;
case 0x557fe0:c.instructions+=4;goto B557fe0;
case 0x557fe1:c.instructions+=3;goto B557fe1;
case 0x557fe8:c.instructions+=2;goto B557fe8;
case 0x557feb:c.instructions+=1;goto B557feb;
case 0x557ff0:goto L557ff0;
case 0x557ff1:c.instructions+=2;goto B557ff1;
case 0x557ff3:c.instructions+=1;goto B557ff3;
case 0x557ff8:goto L557ff8;
case 0x557ffd:c.instructions+=1;goto B557ffd;
case 0x557fff:goto L557fff;
default:missing_instruction(c.pc);}
B557002:L557002:{c.instructions+=9;NFSU2_TR(0x557002);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B557005:{NFSU2_TR(0x557005);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B557007:{NFSU2_TR(0x557007);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+4))<(r1(R+4))));
w1(U+1,u8(u32(r1(R+4))-u32(r1(R+4))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+4,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B557009:{NFSU2_TR(0x557009);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55700b:{NFSU2_TR(0x55700b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55700e:{NFSU2_TR(0x55700e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557012:{NFSU2_TR(0x557012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557014:{NFSU2_TR(0x557014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557015:{NFSU2_TR(0x557015);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557018ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557018:L557018:{c.instructions+=3;NFSU2_TR(0x557018);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55701c:{NFSU2_TR(0x55701c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55701d:{NFSU2_TR(0x55701d);
TAIL_STATIC(0x556f03u,556);
}
B557022:L557022:{c.instructions+=3;NFSU2_TR(0x557022);
w4(R+24,u32(0x3f800000ull));
}
B557027:{NFSU2_TR(0x557027);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557029:{NFSU2_TR(0x557029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55702eull));
TAIL_STATIC(0x575620u,575);
}
B55702e:L55702e:{c.instructions+=3;NFSU2_TR(0x55702e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557031:{NFSU2_TR(0x557031);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557033:{NFSU2_TR(0x557033);
if(r1(R+518)){{goto L55707f;}}
}
B557035:L557035:{c.instructions+=19;NFSU2_TR(0x557035);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x6a93275full));
s4(u32(r4(U+0)),r4(U+4));
}
B55703c:{NFSU2_TR(0x55703c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55703f:{NFSU2_TR(0x55703f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557042:{NFSU2_TR(0x557042);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557045:{NFSU2_TR(0x557045);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557048:{NFSU2_TR(0x557048);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55704c:{NFSU2_TR(0x55704c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55704f:{NFSU2_TR(0x55704f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557052:{NFSU2_TR(0x557052);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xed55c635ull));
s4(u32(r4(U+0)),r4(U+4));
}
B557059:{NFSU2_TR(0x557059);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55705c:{NFSU2_TR(0x55705c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55705f:{NFSU2_TR(0x55705f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557062:{NFSU2_TR(0x557062);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557065:{NFSU2_TR(0x557065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557068:{NFSU2_TR(0x557068);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55706c:{NFSU2_TR(0x55706c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B557073:{NFSU2_TR(0x557073);
u8 U[4];
w4(U+0,u32(0x79b614ull));
s4(u32(r4(R+0)),r4(U+0));
}
B557079:{NFSU2_TR(0x557079);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55707d:{NFSU2_TR(0x55707d);
{goto L557081;}
}
B55707f:L55707f:{c.instructions+=1;NFSU2_TR(0x55707f);
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
B557081:L557081:{c.instructions+=4;NFSU2_TR(0x557081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557083:{NFSU2_TR(0x557083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557084:{NFSU2_TR(0x557084);
__builtin_memmove((R+4),(R+28),4);
}
B557086:{NFSU2_TR(0x557086);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557089ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557089:L557089:{c.instructions+=6;NFSU2_TR(0x557089);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55708c:{NFSU2_TR(0x55708c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557093:{NFSU2_TR(0x557093);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x161ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55709a:{NFSU2_TR(0x55709a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5570a0:{NFSU2_TR(0x5570a0);
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
B5570a2:{NFSU2_TR(0x5570a2);
if(r1(R+518)){{goto L5570c4;}}
}
B5570a4:L5570a4:{c.instructions+=4;NFSU2_TR(0x5570a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5570a6:{NFSU2_TR(0x5570a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570a7:{NFSU2_TR(0x5570a7);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570ac:{NFSU2_TR(0x5570ac);
if(r1(R+518)){{goto L5570b8;}}
}
B5570ae:L5570ae:{c.instructions+=4;NFSU2_TR(0x5570ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570af:{NFSU2_TR(0x5570af);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570b4:{NFSU2_TR(0x5570b4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570b6:{NFSU2_TR(0x5570b6);
{goto L5570bf;}
}
B5570b8:L5570b8:{c.instructions+=3;NFSU2_TR(0x5570b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570b9:{NFSU2_TR(0x5570b9);
u8 U[4];
w4(U+0,u32(0x799cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570be:{NFSU2_TR(0x5570be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570bf:L5570bf:{c.instructions+=1;NFSU2_TR(0x5570bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5570c4ull));
TAIL_STATIC(0x555d00u,555);
}
B5570c4:L5570c4:{c.instructions+=4;NFSU2_TR(0x5570c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5570c7:{NFSU2_TR(0x5570c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5570ca:{NFSU2_TR(0x5570ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570cc:{NFSU2_TR(0x5570cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5570cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5570cf:L5570cf:{c.instructions+=3;NFSU2_TR(0x5570cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5570d2:{NFSU2_TR(0x5570d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5570d4:{NFSU2_TR(0x5570d4);
if(r1(R+518)){{goto L5570f3;}}
}
B5570d6:L5570d6:{c.instructions+=2;NFSU2_TR(0x5570d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570d7:{NFSU2_TR(0x5570d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5570dcull));
TAIL_STATIC(0x52cef0u,52c);
}
B5570dc:L5570dc:{c.instructions+=3;NFSU2_TR(0x5570dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5570df:{NFSU2_TR(0x5570df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5570e1:{NFSU2_TR(0x5570e1);
if(r1(R+518)){{goto L5570f3;}}
}
B5570e3:L5570e3:{c.instructions+=3;NFSU2_TR(0x5570e3);
u8 U[4];
w4(U+0,u32(0x3d3f9f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5570e8:{NFSU2_TR(0x5570e8);
__builtin_memmove((R+4),(R+0),4);
}
B5570ea:{NFSU2_TR(0x5570ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5570efull));
TAIL_STATIC(0x517f80u,517);
}
B5570ef:L5570ef:{c.instructions+=2;NFSU2_TR(0x5570ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5570f1:{NFSU2_TR(0x5570f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55710e;}}
}
B5570f3:L5570f3:{c.instructions+=3;NFSU2_TR(0x5570f3);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5570f8:{NFSU2_TR(0x5570f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5570fa:{NFSU2_TR(0x5570fa);
if(r1(R+518)){{goto L55710c;}}
}
B5570fc:L5570fc:{c.instructions+=4;NFSU2_TR(0x5570fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5570ff:{NFSU2_TR(0x5570ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557100:{NFSU2_TR(0x557100);
u8 U[4];
w4(U+0,u32(0x3d3f9f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557105:{NFSU2_TR(0x557105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55710aull));
TAIL_STATIC(0x52c570u,52c);
}
B55710a:L55710a:{c.instructions+=1;NFSU2_TR(0x55710a);
{goto L55710e;}
}
B55710c:L55710c:{c.instructions+=1;NFSU2_TR(0x55710c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55710e:L55710e:{c.instructions+=2;NFSU2_TR(0x55710e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55710f:{NFSU2_TR(0x55710f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557114ull));
TAIL_STATIC(0x50ca00u,50c);
}
B557114:L557114:{c.instructions+=4;NFSU2_TR(0x557114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557116:{NFSU2_TR(0x557116);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557119:{NFSU2_TR(0x557119);
__builtin_memmove((R+4),(R+28),4);
}
B55711b:{NFSU2_TR(0x55711b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55711eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55711e:L55711e:{c.instructions+=5;NFSU2_TR(0x55711e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55711f:{NFSU2_TR(0x55711f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557120:{NFSU2_TR(0x557120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B557121:{NFSU2_TR(0x557121);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557124:{NFSU2_TR(0x557124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557130:L557130:{c.instructions+=7;NFSU2_TR(0x557130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557131:{NFSU2_TR(0x557131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557132:{NFSU2_TR(0x557132);
__builtin_memmove((R+24),(R+4),4);
}
B557134:{NFSU2_TR(0x557134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557137:{NFSU2_TR(0x557137);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55713c:{NFSU2_TR(0x55713c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55713d:{NFSU2_TR(0x55713d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557142ull));
TAIL_STATIC(0x4954e0u,495);
}
B557142:L557142:{c.instructions+=6;NFSU2_TR(0x557142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B557145:{NFSU2_TR(0x557145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B557148:{NFSU2_TR(0x557148);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55714a:{NFSU2_TR(0x55714a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557151:{NFSU2_TR(0x557151);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557155:{NFSU2_TR(0x557155);
if(r1(R+518)){{goto L55718a;}}
}
B557157:L557157:{c.instructions+=4;NFSU2_TR(0x557157);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55715a:{NFSU2_TR(0x55715a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55715c:{NFSU2_TR(0x55715c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557162:{NFSU2_TR(0x557162);
if(r1(R+518)){{goto L55718a;}}
}
B557164:L557164:{c.instructions+=2;NFSU2_TR(0x557164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557165:{NFSU2_TR(0x557165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55716aull));
TAIL_STATIC(0x52cf60u,52c);
}
B55716a:L55716a:{c.instructions+=3;NFSU2_TR(0x55716a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55716d:{NFSU2_TR(0x55716d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55716f:{NFSU2_TR(0x55716f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55718a;}}
}
B557171:L557171:{c.instructions+=7;NFSU2_TR(0x557171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557174:{NFSU2_TR(0x557174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55717a:{NFSU2_TR(0x55717a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55717b:{NFSU2_TR(0x55717b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557180:{NFSU2_TR(0x557180);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557181:{NFSU2_TR(0x557181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557182:{NFSU2_TR(0x557182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557187ull));
TAIL_STATIC(0x555f10u,555);
}
B557187:L557187:{c.instructions+=1;NFSU2_TR(0x557187);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55718a:L55718a:{c.instructions+=5;NFSU2_TR(0x55718a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55718d:{NFSU2_TR(0x55718d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55718f:{NFSU2_TR(0x55718f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557190:{NFSU2_TR(0x557190);
__builtin_memmove((R+4),(R+24),4);
}
B557192:{NFSU2_TR(0x557192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557197ull));
TAIL_STATIC(0x50f290u,50f);
}
B557197:L557197:{c.instructions+=4;NFSU2_TR(0x557197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557198:{NFSU2_TR(0x557198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x846ee660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55719f:{NFSU2_TR(0x55719f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5571a0:{NFSU2_TR(0x5571a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5571b0:L5571b0:{c.instructions+=16;NFSU2_TR(0x5571b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571b1:{NFSU2_TR(0x5571b1);
__builtin_memmove((R+20),(R+16),4);
}
B5571b3:{NFSU2_TR(0x5571b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5571b6:{NFSU2_TR(0x5571b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571b8:{NFSU2_TR(0x5571b8);
u8 U[4];
w4(U+0,u32(0x778116ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571bd:{NFSU2_TR(0x5571bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5571c3:{NFSU2_TR(0x5571c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571c4:{NFSU2_TR(0x5571c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5571cb:{NFSU2_TR(0x5571cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B5571d1:{NFSU2_TR(0x5571d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5571d4:{NFSU2_TR(0x5571d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571d5:{NFSU2_TR(0x5571d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571d6:{NFSU2_TR(0x5571d6);
__builtin_memmove((R+24),(R+4),4);
}
B5571d8:{NFSU2_TR(0x5571d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5571d9:{NFSU2_TR(0x5571d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5571dd:{NFSU2_TR(0x5571dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5571e2ull));
TAIL_STATIC(0x552330u,552);
}
B5571e2:L5571e2:{c.instructions+=5;NFSU2_TR(0x5571e2);
u8 U[4];
w4(U+0,u32(0x79cdd0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5571e8:{NFSU2_TR(0x5571e8);
w4(R+4,u32(0x838980ull));
}
B5571ed:{NFSU2_TR(0x5571ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5571f8:{NFSU2_TR(0x5571f8);
s1(0x838528,u8(0x0ull));
}
B5571ff:{NFSU2_TR(0x5571ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557204ull));
TAIL_STATIC(0x53b420u,53b);
}
B557204:L557204:{c.instructions+=2;NFSU2_TR(0x557204);
w4(R+4,u32(0x838980ull));
}
B557209:{NFSU2_TR(0x557209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55720eull));
TAIL_STATIC(0x530160u,530);
}
B55720e:L55720e:{c.instructions+=2;NFSU2_TR(0x55720e);
__builtin_memmove((R+4),(R+24),4);
}
B557210:{NFSU2_TR(0x557210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557215ull));
TAIL_STATIC(0x548200u,548);
}
B557215:L557215:{c.instructions+=2;NFSU2_TR(0x557215);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55721c:{NFSU2_TR(0x55721c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557293;}}
}
B55721e:L55721e:{c.instructions+=2;NFSU2_TR(0x55721e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389c8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557228:{NFSU2_TR(0x557228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557293;}}
}
B55722a:L55722a:{c.instructions+=2;NFSU2_TR(0x55722a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55722e:{NFSU2_TR(0x55722e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557233ull));
TAIL_STATIC(0x40c910u,40c);
}
B557233:L557233:{c.instructions+=5;NFSU2_TR(0x557233);
__builtin_memmove((R+4),gp(0x863480),4);
}
B557239:{NFSU2_TR(0x557239);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55723a:{NFSU2_TR(0x55723a);
w4(R+4,u32(0x83ad90ull));
}
B55723f:{NFSU2_TR(0x55723f);
u8 U[5];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557247:{NFSU2_TR(0x557247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55724cull));
TAIL_STATIC(0x503510u,503);
}
B55724c:L55724c:{c.instructions+=3;NFSU2_TR(0x55724c);
__builtin_memmove((R+28),(R+0),4);
}
B55724e:{NFSU2_TR(0x55724e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557250:{NFSU2_TR(0x557250);
if(r1(R+518)){{goto L557269;}}
}
B557252:L557252:{c.instructions+=3;NFSU2_TR(0x557252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557254:{NFSU2_TR(0x557254);
__builtin_memmove((R+4),(R+28),4);
}
B557256:{NFSU2_TR(0x557256);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557259ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557259:L557259:{c.instructions+=7;NFSU2_TR(0x557259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55725b:{NFSU2_TR(0x55725b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55725d:{NFSU2_TR(0x55725d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B557261:{NFSU2_TR(0x557261);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557262:{NFSU2_TR(0x557262);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557264:{NFSU2_TR(0x557264);
__builtin_memmove((R+4),(R+28),4);
}
B557266:{NFSU2_TR(0x557266);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557269ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557269:L557269:{c.instructions+=5;NFSU2_TR(0x557269);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55726b:{NFSU2_TR(0x55726b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55726f:{NFSU2_TR(0x55726f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557271:{NFSU2_TR(0x557271);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557272:{NFSU2_TR(0x557272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557277ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B557277:L557277:{c.instructions+=2;NFSU2_TR(0x557277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55727a:{NFSU2_TR(0x55727a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55727full));
TAIL_STATIC(0x4a78b0u,4a7);
}
B55727f:L55727f:{c.instructions+=3;NFSU2_TR(0x55727f);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B557286:{NFSU2_TR(0x557286);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55728e:{NFSU2_TR(0x55728e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557293ull));
TAIL_STATIC(0x4022c0u,402);
}
B557293:L557293:{c.instructions+=2;NFSU2_TR(0x557293);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557298:{NFSU2_TR(0x557298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55729dull));
TAIL_STATIC(0x52cf60u,52c);
}
B55729d:L55729d:{c.instructions+=3;NFSU2_TR(0x55729d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5572a0:{NFSU2_TR(0x5572a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5572a2:{NFSU2_TR(0x5572a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5572d4;}}
}
B5572a4:L5572a4:{c.instructions+=4;NFSU2_TR(0x5572a4);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5572aa:{NFSU2_TR(0x5572aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5572ac:{NFSU2_TR(0x5572ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5572af:{NFSU2_TR(0x5572af);
if(r1(R+518)){{goto L5572d4;}}
}
B5572b1:L5572b1:{c.instructions+=4;NFSU2_TR(0x5572b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5572b3:{NFSU2_TR(0x5572b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572b5:{NFSU2_TR(0x5572b5);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572ba:{NFSU2_TR(0x5572ba);
if(r1(R+518)){{goto L5572c6;}}
}
B5572bc:L5572bc:{c.instructions+=4;NFSU2_TR(0x5572bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572bd:{NFSU2_TR(0x5572bd);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572c2:{NFSU2_TR(0x5572c2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572c4:{NFSU2_TR(0x5572c4);
{goto L5572cf;}
}
B5572c6:L5572c6:{c.instructions+=3;NFSU2_TR(0x5572c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572c8:{NFSU2_TR(0x5572c8);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572cd:{NFSU2_TR(0x5572cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572cf:L5572cf:{c.instructions+=1;NFSU2_TR(0x5572cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5572d4ull));
TAIL_STATIC(0x555d00u,555);
}
B5572d4:L5572d4:{c.instructions+=5;NFSU2_TR(0x5572d4);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B5572d9:{NFSU2_TR(0x5572d9);
__builtin_memmove((R+4),(R+0),4);
}
B5572db:{NFSU2_TR(0x5572db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572dd:{NFSU2_TR(0x5572dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5572e1:{NFSU2_TR(0x5572e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5572e6ull));
TAIL_STATIC(0x542990u,542);
}
B5572e6:L5572e6:{c.instructions+=6;NFSU2_TR(0x5572e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5572e9:{NFSU2_TR(0x5572e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5572ec:{NFSU2_TR(0x5572ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572ed:{NFSU2_TR(0x5572ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5572ee:{NFSU2_TR(0x5572ee);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5572f4:{NFSU2_TR(0x5572f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5572f9ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5572f9:L5572f9:{c.instructions+=8;NFSU2_TR(0x5572f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557300:{NFSU2_TR(0x557300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557301:{NFSU2_TR(0x557301);
__builtin_memmove((R+0),(R+24),4);
}
B557303:{NFSU2_TR(0x557303);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55730a:{NFSU2_TR(0x55730a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55730b:{NFSU2_TR(0x55730b);
__builtin_memmove((R+16),(R+20),4);
}
B55730d:{NFSU2_TR(0x55730d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55730e:{NFSU2_TR(0x55730e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557320:L557320:{c.instructions+=3;NFSU2_TR(0x557320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557321:{NFSU2_TR(0x557321);
__builtin_memmove((R+24),(R+4),4);
}
B557323:{NFSU2_TR(0x557323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557328ull));
{goto L557340;}
}
B557328:L557328:{c.instructions+=2;NFSU2_TR(0x557328);
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
B55732d:{NFSU2_TR(0x55732d);
if(r1(R+518)){{goto L557338;}}
}
B55732f:L55732f:{c.instructions+=2;NFSU2_TR(0x55732f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557330:{NFSU2_TR(0x557330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557335ull));
TAIL_STATIC(0x575630u,575);
}
B557335:L557335:{c.instructions+=1;NFSU2_TR(0x557335);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557338:L557338:{c.instructions+=3;NFSU2_TR(0x557338);
__builtin_memmove((R+0),(R+24),4);
}
B55733a:{NFSU2_TR(0x55733a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55733b:{NFSU2_TR(0x55733b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557340:L557340:{c.instructions+=2;NFSU2_TR(0x557340);
u8 U[4];
w4(U+0,u32(0x79cdd0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B557346:{NFSU2_TR(0x557346);
TAIL_STATIC(0x4defb0u,4de);
}
B557350:L557350:{c.instructions+=5;NFSU2_TR(0x557350);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B557355:{NFSU2_TR(0x557355);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B557358:{NFSU2_TR(0x557358);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557359:{NFSU2_TR(0x557359);
__builtin_memmove((R+24),(R+4),4);
}
B55735b:{NFSU2_TR(0x55735b);
if(r1(R+518)){{goto L557367;}}
}
B55735d:L55735d:{c.instructions+=2;NFSU2_TR(0x55735d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55735e:{NFSU2_TR(0x55735e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55736e;}}
}
B557360:L557360:{c.instructions+=1;NFSU2_TR(0x557360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557365ull));
TAIL_STATIC(0x5227e0u,522);
}
B557365:L557365:{c.instructions+=1;NFSU2_TR(0x557365);
{goto L55736e;}
}
B557367:L557367:{c.instructions+=2;NFSU2_TR(0x557367);
__builtin_memmove((R+4),(R+24),4);
}
B557369:{NFSU2_TR(0x557369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55736eull));
TAIL_STATIC(0x53c9e0u,53c);
}
B55736e:L55736e:{c.instructions+=3;NFSU2_TR(0x55736e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557371:{NFSU2_TR(0x557371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557372:{NFSU2_TR(0x557372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557377ull));
TAIL_STATIC(0x505450u,505);
}
B557377:L557377:{c.instructions+=2;NFSU2_TR(0x557377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557378:{NFSU2_TR(0x557378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55737dull));
TAIL_STATIC(0x50b840u,50b);
}
B55737d:L55737d:{c.instructions+=3;NFSU2_TR(0x55737d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B557380:{NFSU2_TR(0x557380);
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
B557382:{NFSU2_TR(0x557382);
if(r1(R+518)){{goto L557389;}}
}
B557384:L557384:{c.instructions+=2;NFSU2_TR(0x557384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557387:{NFSU2_TR(0x557387);
{goto L55738b;}
}
B557389:L557389:{c.instructions+=1;NFSU2_TR(0x557389);
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
B55738b:L55738b:{c.instructions+=4;NFSU2_TR(0x55738b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55738e:{NFSU2_TR(0x55738e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B557391:{NFSU2_TR(0x557391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557392:{NFSU2_TR(0x557392);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557395ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557395:L557395:{c.instructions+=3;NFSU2_TR(0x557395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B557397:{NFSU2_TR(0x557397);
__builtin_memmove((R+4),(R+24),4);
}
B557399:{NFSU2_TR(0x557399);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55739cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55739c:L55739c:{c.instructions+=2;NFSU2_TR(0x55739c);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573a1:{NFSU2_TR(0x5573a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5573a6ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5573a6:L5573a6:{c.instructions+=3;NFSU2_TR(0x5573a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5573a9:{NFSU2_TR(0x5573a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5573ab:{NFSU2_TR(0x5573ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5573dd;}}
}
B5573ad:L5573ad:{c.instructions+=4;NFSU2_TR(0x5573ad);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5573b3:{NFSU2_TR(0x5573b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5573b5:{NFSU2_TR(0x5573b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5573b8:{NFSU2_TR(0x5573b8);
if(r1(R+518)){{goto L5573dd;}}
}
B5573ba:L5573ba:{c.instructions+=4;NFSU2_TR(0x5573ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5573bc:{NFSU2_TR(0x5573bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573be:{NFSU2_TR(0x5573be);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573c3:{NFSU2_TR(0x5573c3);
if(r1(R+518)){{goto L5573cf;}}
}
B5573c5:L5573c5:{c.instructions+=4;NFSU2_TR(0x5573c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573c6:{NFSU2_TR(0x5573c6);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573cb:{NFSU2_TR(0x5573cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573cd:{NFSU2_TR(0x5573cd);
{goto L5573d8;}
}
B5573cf:L5573cf:{c.instructions+=3;NFSU2_TR(0x5573cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573d1:{NFSU2_TR(0x5573d1);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573d6:{NFSU2_TR(0x5573d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573d8:L5573d8:{c.instructions+=1;NFSU2_TR(0x5573d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5573ddull));
TAIL_STATIC(0x555d00u,555);
}
B5573dd:L5573dd:{c.instructions+=3;NFSU2_TR(0x5573dd);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B5573e2:{NFSU2_TR(0x5573e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5573e4:{NFSU2_TR(0x5573e4);
if(r1(R+518)){{goto L5573f9;}}
}
B5573e6:L5573e6:{c.instructions+=5;NFSU2_TR(0x5573e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5573e9:{NFSU2_TR(0x5573e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573ea:{NFSU2_TR(0x5573ea);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5573f0:{NFSU2_TR(0x5573f0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5573f2:{NFSU2_TR(0x5573f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5573f7ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5573f7:L5573f7:{c.instructions+=2;NFSU2_TR(0x5573f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5573f8:{NFSU2_TR(0x5573f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5573f9:L5573f9:{c.instructions+=5;NFSU2_TR(0x5573f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5573fc:{NFSU2_TR(0x5573fc);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B557402:{NFSU2_TR(0x557402);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557403:{NFSU2_TR(0x557403);
u8 U[4];
w4(U+0,u32(0x404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557408:{NFSU2_TR(0x557408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55740dull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55740d:L55740d:{c.instructions+=2;NFSU2_TR(0x55740d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55740e:{NFSU2_TR(0x55740e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557410:L557410:{c.instructions+=6;NFSU2_TR(0x557410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557411:{NFSU2_TR(0x557411);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557412:{NFSU2_TR(0x557412);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557413:{NFSU2_TR(0x557413);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557415:{NFSU2_TR(0x557415);
__builtin_memmove((R+24),(R+4),4);
}
B557417:{NFSU2_TR(0x557417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55741cull));
TAIL_STATIC(0x575620u,575);
}
B55741c:L55741c:{c.instructions+=5;NFSU2_TR(0x55741c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55741e:{NFSU2_TR(0x55741e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557421:{NFSU2_TR(0x557421);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557423:{NFSU2_TR(0x557423);
w4(R+28,u32(0x3f800000ull));
}
B557428:{NFSU2_TR(0x557428);
if(r1(R+518)){{goto L557470;}}
}
B55742a:L55742a:{c.instructions+=19;NFSU2_TR(0x55742a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xe9638d3eull));
s4(u32(r4(U+0)),r4(U+4));
}
B557431:{NFSU2_TR(0x557431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557434:{NFSU2_TR(0x557434);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557437:{NFSU2_TR(0x557437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55743a:{NFSU2_TR(0x55743a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55743d:{NFSU2_TR(0x55743d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557441:{NFSU2_TR(0x557441);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557444:{NFSU2_TR(0x557444);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557447:{NFSU2_TR(0x557447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x93fdee74ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55744e:{NFSU2_TR(0x55744e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557451:{NFSU2_TR(0x557451);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557454:{NFSU2_TR(0x557454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557457:{NFSU2_TR(0x557457);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55745a:{NFSU2_TR(0x55745a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55745d:{NFSU2_TR(0x55745d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557461:{NFSU2_TR(0x557461);
u8 U[4];
w4(U+0,u32(0x79b784ull));
s4(u32(r4(R+0)),r4(U+0));
}
B557467:{NFSU2_TR(0x557467);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55746a:{NFSU2_TR(0x55746a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55746e:{NFSU2_TR(0x55746e);
{goto L557472;}
}
B557470:L557470:{c.instructions+=1;NFSU2_TR(0x557470);
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
B557472:L557472:{c.instructions+=4;NFSU2_TR(0x557472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557474:{NFSU2_TR(0x557474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557475:{NFSU2_TR(0x557475);
__builtin_memmove((R+4),(R+24),4);
}
B557477:{NFSU2_TR(0x557477);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55747aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55747a:L55747a:{c.instructions+=2;NFSU2_TR(0x55747a);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55747c:{NFSU2_TR(0x55747c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557481ull));
TAIL_STATIC(0x575620u,575);
}
B557481:L557481:{c.instructions+=3;NFSU2_TR(0x557481);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557484:{NFSU2_TR(0x557484);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557486:{NFSU2_TR(0x557486);
if(r1(R+518)){{goto L5574d2;}}
}
B557488:L557488:{c.instructions+=19;NFSU2_TR(0x557488);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xaaab31e9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55748f:{NFSU2_TR(0x55748f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557492:{NFSU2_TR(0x557492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557495:{NFSU2_TR(0x557495);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557498:{NFSU2_TR(0x557498);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55749b:{NFSU2_TR(0x55749b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55749f:{NFSU2_TR(0x55749f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5574a2:{NFSU2_TR(0x5574a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5574a5:{NFSU2_TR(0x5574a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x35102edfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5574ac:{NFSU2_TR(0x5574ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574af:{NFSU2_TR(0x5574af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574b2:{NFSU2_TR(0x5574b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574b5:{NFSU2_TR(0x5574b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574b8:{NFSU2_TR(0x5574b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574bb:{NFSU2_TR(0x5574bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5574bf:{NFSU2_TR(0x5574bf);
u8 U[4];
w4(U+0,u32(0x79b784ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5574c5:{NFSU2_TR(0x5574c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5574cc:{NFSU2_TR(0x5574cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5574d0:{NFSU2_TR(0x5574d0);
{goto L5574d4;}
}
B5574d2:L5574d2:{c.instructions+=1;NFSU2_TR(0x5574d2);
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
B5574d4:L5574d4:{c.instructions+=4;NFSU2_TR(0x5574d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5574d6:{NFSU2_TR(0x5574d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5574d7:{NFSU2_TR(0x5574d7);
__builtin_memmove((R+4),(R+24),4);
}
B5574d9:{NFSU2_TR(0x5574d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5574dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5574dc:L5574dc:{c.instructions+=2;NFSU2_TR(0x5574dc);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5574de:{NFSU2_TR(0x5574de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5574e3ull));
TAIL_STATIC(0x575620u,575);
}
B5574e3:L5574e3:{c.instructions+=3;NFSU2_TR(0x5574e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5574e6:{NFSU2_TR(0x5574e6);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5574e8:{NFSU2_TR(0x5574e8);
if(r1(R+518)){{goto L557534;}}
}
B5574ea:L5574ea:{c.instructions+=19;NFSU2_TR(0x5574ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x119144ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5574f1:{NFSU2_TR(0x5574f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574f4:{NFSU2_TR(0x5574f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574f7:{NFSU2_TR(0x5574f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5574fa:{NFSU2_TR(0x5574fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5574fd:{NFSU2_TR(0x5574fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557501:{NFSU2_TR(0x557501);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557504:{NFSU2_TR(0x557504);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557507:{NFSU2_TR(0x557507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xd7162cfaull));
s4(u32(r4(U+0)),r4(U+4));
}
B55750e:{NFSU2_TR(0x55750e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557511:{NFSU2_TR(0x557511);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557514:{NFSU2_TR(0x557514);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557517:{NFSU2_TR(0x557517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55751a:{NFSU2_TR(0x55751a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55751d:{NFSU2_TR(0x55751d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557521:{NFSU2_TR(0x557521);
u8 U[4];
w4(U+0,u32(0x79b784ull));
s4(u32(r4(R+0)),r4(U+0));
}
B557527:{NFSU2_TR(0x557527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55752e:{NFSU2_TR(0x55752e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557532:{NFSU2_TR(0x557532);
{goto L557536;}
}
B557534:L557534:{c.instructions+=1;NFSU2_TR(0x557534);
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
B557536:L557536:{c.instructions+=4;NFSU2_TR(0x557536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557538:{NFSU2_TR(0x557538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557539:{NFSU2_TR(0x557539);
__builtin_memmove((R+4),(R+24),4);
}
B55753b:{NFSU2_TR(0x55753b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55753eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55753e:L55753e:{c.instructions+=2;NFSU2_TR(0x55753e);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557540:{NFSU2_TR(0x557540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557545ull));
TAIL_STATIC(0x575620u,575);
}
B557545:L557545:{c.instructions+=3;NFSU2_TR(0x557545);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557548:{NFSU2_TR(0x557548);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55754a:{NFSU2_TR(0x55754a);
if(r1(R+518)){{goto L557596;}}
}
B55754c:L55754c:{c.instructions+=19;NFSU2_TR(0x55754c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x13a4ceebull));
s4(u32(r4(U+0)),r4(U+4));
}
B557553:{NFSU2_TR(0x557553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557556:{NFSU2_TR(0x557556);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557559:{NFSU2_TR(0x557559);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55755c:{NFSU2_TR(0x55755c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55755f:{NFSU2_TR(0x55755f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557563:{NFSU2_TR(0x557563);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557566:{NFSU2_TR(0x557566);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557569:{NFSU2_TR(0x557569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x30da61e1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B557570:{NFSU2_TR(0x557570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557573:{NFSU2_TR(0x557573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557576:{NFSU2_TR(0x557576);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557579:{NFSU2_TR(0x557579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55757c:{NFSU2_TR(0x55757c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55757f:{NFSU2_TR(0x55757f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557583:{NFSU2_TR(0x557583);
u8 U[4];
w4(U+0,u32(0x79b784ull));
s4(u32(r4(R+0)),r4(U+0));
}
B557589:{NFSU2_TR(0x557589);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B557590:{NFSU2_TR(0x557590);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557594:{NFSU2_TR(0x557594);
{goto L557598;}
}
B557596:L557596:{c.instructions+=1;NFSU2_TR(0x557596);
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
B557598:L557598:{c.instructions+=4;NFSU2_TR(0x557598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55759a:{NFSU2_TR(0x55759a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55759b:{NFSU2_TR(0x55759b);
__builtin_memmove((R+4),(R+24),4);
}
B55759d:{NFSU2_TR(0x55759d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5575a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5575a0:L5575a0:{c.instructions+=2;NFSU2_TR(0x5575a0);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5575a2:{NFSU2_TR(0x5575a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5575a7ull));
TAIL_STATIC(0x575620u,575);
}
B5575a7:L5575a7:{c.instructions+=3;NFSU2_TR(0x5575a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5575aa:{NFSU2_TR(0x5575aa);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5575ac:{NFSU2_TR(0x5575ac);
if(r1(R+518)){{goto L5575f8;}}
}
B5575ae:L5575ae:{c.instructions+=19;NFSU2_TR(0x5575ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3f6495c5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5575b5:{NFSU2_TR(0x5575b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575b8:{NFSU2_TR(0x5575b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575bb:{NFSU2_TR(0x5575bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575be:{NFSU2_TR(0x5575be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5575c1:{NFSU2_TR(0x5575c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5575c5:{NFSU2_TR(0x5575c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5575c8:{NFSU2_TR(0x5575c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5575cb:{NFSU2_TR(0x5575cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x75f903f4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5575d2:{NFSU2_TR(0x5575d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575d5:{NFSU2_TR(0x5575d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575d8:{NFSU2_TR(0x5575d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575db:{NFSU2_TR(0x5575db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575de:{NFSU2_TR(0x5575de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5575e1:{NFSU2_TR(0x5575e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5575e5:{NFSU2_TR(0x5575e5);
u8 U[4];
w4(U+0,u32(0x79b784ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5575eb:{NFSU2_TR(0x5575eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5575f2:{NFSU2_TR(0x5575f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5575f6:{NFSU2_TR(0x5575f6);
{goto L5575fa;}
}
B5575f8:L5575f8:{c.instructions+=1;NFSU2_TR(0x5575f8);
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
B5575fa:L5575fa:{c.instructions+=4;NFSU2_TR(0x5575fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5575fc:{NFSU2_TR(0x5575fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5575fd:{NFSU2_TR(0x5575fd);
__builtin_memmove((R+4),(R+24),4);
}
B5575ff:{NFSU2_TR(0x5575ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557602ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557602:L557602:{c.instructions+=3;NFSU2_TR(0x557602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557605:{NFSU2_TR(0x557605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557606:{NFSU2_TR(0x557606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55760bull));
TAIL_STATIC(0x505450u,505);
}
B55760b:L55760b:{c.instructions+=2;NFSU2_TR(0x55760b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55760c:{NFSU2_TR(0x55760c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557611ull));
TAIL_STATIC(0x50b840u,50b);
}
B557611:L557611:{c.instructions+=3;NFSU2_TR(0x557611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B557614:{NFSU2_TR(0x557614);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557616:{NFSU2_TR(0x557616);
if(r1(R+518)){{goto L55761d;}}
}
B557618:L557618:{c.instructions+=2;NFSU2_TR(0x557618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55761b:{NFSU2_TR(0x55761b);
{goto L55761f;}
}
B55761d:L55761d:{c.instructions+=1;NFSU2_TR(0x55761d);
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
B55761f:L55761f:{c.instructions+=4;NFSU2_TR(0x55761f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557622:{NFSU2_TR(0x557622);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B557625:{NFSU2_TR(0x557625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557626:{NFSU2_TR(0x557626);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557629ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557629:L557629:{c.instructions+=3;NFSU2_TR(0x557629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55762b:{NFSU2_TR(0x55762b);
__builtin_memmove((R+4),(R+24),4);
}
B55762d:{NFSU2_TR(0x55762d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557630ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557630:L557630:{c.instructions+=2;NFSU2_TR(0x557630);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557635:{NFSU2_TR(0x557635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55763aull));
TAIL_STATIC(0x52cf60u,52c);
}
B55763a:L55763a:{c.instructions+=3;NFSU2_TR(0x55763a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55763d:{NFSU2_TR(0x55763d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55763f:{NFSU2_TR(0x55763f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557675;}}
}
B557641:L557641:{c.instructions+=4;NFSU2_TR(0x557641);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557647:{NFSU2_TR(0x557647);
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
B557649:{NFSU2_TR(0x557649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55764c:{NFSU2_TR(0x55764c);
if(r1(R+518)){{goto L557675;}}
}
B55764e:L55764e:{c.instructions+=4;NFSU2_TR(0x55764e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557650:{NFSU2_TR(0x557650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557651:{NFSU2_TR(0x557651);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557656:{NFSU2_TR(0x557656);
if(r1(R+518)){{goto L557669;}}
}
B557658:L557658:{c.instructions+=4;NFSU2_TR(0x557658);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557659:{NFSU2_TR(0x557659);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55765e:{NFSU2_TR(0x55765e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557660:{NFSU2_TR(0x557660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557665ull));
TAIL_STATIC(0x555d00u,555);
}
B557665:L557665:{c.instructions+=4;NFSU2_TR(0x557665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557666:{NFSU2_TR(0x557666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557667:{NFSU2_TR(0x557667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B557668:{NFSU2_TR(0x557668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557669:L557669:{c.instructions+=4;NFSU2_TR(0x557669);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55766a:{NFSU2_TR(0x55766a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55766f:{NFSU2_TR(0x55766f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557670:{NFSU2_TR(0x557670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557675ull));
TAIL_STATIC(0x555d00u,555);
}
B557675:L557675:{c.instructions+=4;NFSU2_TR(0x557675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557676:{NFSU2_TR(0x557676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557677:{NFSU2_TR(0x557677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B557678:{NFSU2_TR(0x557678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557680:L557680:{c.instructions+=6;NFSU2_TR(0x557680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557681:{NFSU2_TR(0x557681);
u8 U[4];
w4(U+0,u32(0xef3772c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557686:{NFSU2_TR(0x557686);
u8 U[4];
w4(U+0,u32(0x178475e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55768b:{NFSU2_TR(0x55768b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55768d:{NFSU2_TR(0x55768d);
__builtin_memmove((R+24),(R+4),4);
}
B55768f:{NFSU2_TR(0x55768f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557694ull));
TAIL_STATIC(0x522a70u,522);
}
B557694:L557694:{c.instructions+=5;NFSU2_TR(0x557694);
u8 U[4];
w4(U+0,u32(0xe8da9e62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557699:{NFSU2_TR(0x557699);
u8 U[4];
w4(U+0,u32(0x1a29ffaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55769e:{NFSU2_TR(0x55769e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576a0:{NFSU2_TR(0x5576a0);
__builtin_memmove((R+4),(R+24),4);
}
B5576a2:{NFSU2_TR(0x5576a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5576a7ull));
TAIL_STATIC(0x522a70u,522);
}
B5576a7:L5576a7:{c.instructions+=5;NFSU2_TR(0x5576a7);
u8 U[4];
w4(U+0,u32(0x7ed554d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576ac:{NFSU2_TR(0x5576ac);
u8 U[4];
w4(U+0,u32(0x214db7cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576b1:{NFSU2_TR(0x5576b1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576b3:{NFSU2_TR(0x5576b3);
__builtin_memmove((R+4),(R+24),4);
}
B5576b5:{NFSU2_TR(0x5576b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5576baull));
TAIL_STATIC(0x522a70u,522);
}
B5576ba:L5576ba:{c.instructions+=5;NFSU2_TR(0x5576ba);
u8 U[4];
w4(U+0,u32(0x6741bf48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576bf:{NFSU2_TR(0x5576bf);
u8 U[4];
w4(U+0,u32(0xd6dc23eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576c4:{NFSU2_TR(0x5576c4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576c6:{NFSU2_TR(0x5576c6);
__builtin_memmove((R+4),(R+24),4);
}
B5576c8:{NFSU2_TR(0x5576c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5576cdull));
TAIL_STATIC(0x522a70u,522);
}
B5576cd:L5576cd:{c.instructions+=5;NFSU2_TR(0x5576cd);
u8 U[4];
w4(U+0,u32(0x135bdd07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576d2:{NFSU2_TR(0x5576d2);
u8 U[4];
w4(U+0,u32(0x502abeedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576d7:{NFSU2_TR(0x5576d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576d9:{NFSU2_TR(0x5576d9);
__builtin_memmove((R+4),(R+24),4);
}
B5576db:{NFSU2_TR(0x5576db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5576e0ull));
TAIL_STATIC(0x522a70u,522);
}
B5576e0:L5576e0:{c.instructions+=5;NFSU2_TR(0x5576e0);
u8 U[4];
w4(U+0,u32(0x5ae08536ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576e5:{NFSU2_TR(0x5576e5);
u8 U[4];
w4(U+0,u32(0x6ef789cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576ea:{NFSU2_TR(0x5576ea);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576ec:{NFSU2_TR(0x5576ec);
__builtin_memmove((R+4),(R+24),4);
}
B5576ee:{NFSU2_TR(0x5576ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5576f3ull));
TAIL_STATIC(0x522a70u,522);
}
B5576f3:L5576f3:{c.instructions+=5;NFSU2_TR(0x5576f3);
u8 U[4];
w4(U+0,u32(0x135c04daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576f8:{NFSU2_TR(0x5576f8);
u8 U[4];
w4(U+0,u32(0x9701bde4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576fd:{NFSU2_TR(0x5576fd);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5576ff:{NFSU2_TR(0x5576ff);
__builtin_memmove((R+4),(R+24),4);
}
B557701:{NFSU2_TR(0x557701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557706ull));
TAIL_STATIC(0x522a70u,522);
}
B557706:L557706:{c.instructions+=3;NFSU2_TR(0x557706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557709:{NFSU2_TR(0x557709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55770a:{NFSU2_TR(0x55770a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55770full));
TAIL_STATIC(0x505450u,505);
}
B55770f:L55770f:{c.instructions+=2;NFSU2_TR(0x55770f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557710:{NFSU2_TR(0x557710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557715ull));
TAIL_STATIC(0x50b840u,50b);
}
B557715:L557715:{c.instructions+=3;NFSU2_TR(0x557715);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B557718:{NFSU2_TR(0x557718);
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
B55771a:{NFSU2_TR(0x55771a);
if(r1(R+518)){{goto L557721;}}
}
B55771c:L55771c:{c.instructions+=2;NFSU2_TR(0x55771c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55771f:{NFSU2_TR(0x55771f);
{goto L557723;}
}
B557721:L557721:{c.instructions+=1;NFSU2_TR(0x557721);
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
B557723:L557723:{c.instructions+=4;NFSU2_TR(0x557723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557726:{NFSU2_TR(0x557726);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B557729:{NFSU2_TR(0x557729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55772a:{NFSU2_TR(0x55772a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55772dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55772d:L55772d:{c.instructions+=3;NFSU2_TR(0x55772d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55772f:{NFSU2_TR(0x55772f);
__builtin_memmove((R+4),(R+24),4);
}
B557731:{NFSU2_TR(0x557731);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557734ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557734:L557734:{c.instructions+=2;NFSU2_TR(0x557734);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557739:{NFSU2_TR(0x557739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55773eull));
TAIL_STATIC(0x52cf60u,52c);
}
B55773e:L55773e:{c.instructions+=3;NFSU2_TR(0x55773e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557741:{NFSU2_TR(0x557741);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B557743:{NFSU2_TR(0x557743);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55777a;}}
}
B557745:L557745:{c.instructions+=4;NFSU2_TR(0x557745);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55774b:{NFSU2_TR(0x55774b);
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
B55774d:{NFSU2_TR(0x55774d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B557750:{NFSU2_TR(0x557750);
if(r1(R+518)){{goto L55777a;}}
}
B557752:L557752:{c.instructions+=4;NFSU2_TR(0x557752);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557754:{NFSU2_TR(0x557754);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557756:{NFSU2_TR(0x557756);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55775b:{NFSU2_TR(0x55775b);
if(r1(R+518)){{goto L55776c;}}
}
B55775d:L55775d:{c.instructions+=4;NFSU2_TR(0x55775d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55775e:{NFSU2_TR(0x55775e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557763:{NFSU2_TR(0x557763);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557765:{NFSU2_TR(0x557765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55776aull));
TAIL_STATIC(0x555d00u,555);
}
B55776a:L55776a:{c.instructions+=2;NFSU2_TR(0x55776a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55776b:{NFSU2_TR(0x55776b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55776c:L55776c:{c.instructions+=4;NFSU2_TR(0x55776c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55776e:{NFSU2_TR(0x55776e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557773:{NFSU2_TR(0x557773);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557775:{NFSU2_TR(0x557775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55777aull));
TAIL_STATIC(0x555d00u,555);
}
B55777a:L55777a:{c.instructions+=2;NFSU2_TR(0x55777a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55777b:{NFSU2_TR(0x55777b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557780:L557780:{c.instructions+=5;NFSU2_TR(0x557780);
__builtin_memmove((R+0),gp(0x83a648),4);
}
B557785:{NFSU2_TR(0x557785);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557788:{NFSU2_TR(0x557788);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557789:{NFSU2_TR(0x557789);
__builtin_memmove((R+28),(R+4),4);
}
B55778b:{NFSU2_TR(0x55778b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5577b6;}}
}
B55778d:L55778d:{c.instructions+=1;NFSU2_TR(0x55778d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5578a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557794:L557794:{c.instructions+=2;NFSU2_TR(0x557794);
__builtin_memmove((R+4),(R+28),4);
}
B557796:{NFSU2_TR(0x557796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55779bull));
TAIL_STATIC(0x549b40u,549);
}
B55779b:L55779b:{c.instructions+=1;NFSU2_TR(0x55779b);
{goto L5577b6;}
}
B55779d:L55779d:{c.instructions+=2;NFSU2_TR(0x55779d);
__builtin_memmove((R+4),(R+28),4);
}
B55779f:{NFSU2_TR(0x55779f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577a4ull));
TAIL_STATIC(0x549c20u,549);
}
B5577a4:L5577a4:{c.instructions+=1;NFSU2_TR(0x5577a4);
{goto L5577b6;}
}
B5577a6:L5577a6:{c.instructions+=2;NFSU2_TR(0x5577a6);
__builtin_memmove((R+4),(R+28),4);
}
B5577a8:{NFSU2_TR(0x5577a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577adull));
TAIL_STATIC(0x549dc0u,549);
}
B5577ad:L5577ad:{c.instructions+=1;NFSU2_TR(0x5577ad);
{goto L5577b6;}
}
B5577af:L5577af:{c.instructions+=2;NFSU2_TR(0x5577af);
__builtin_memmove((R+4),(R+28),4);
}
B5577b1:{NFSU2_TR(0x5577b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577b6ull));
TAIL_STATIC(0x549e00u,549);
}
B5577b6:L5577b6:{c.instructions+=3;NFSU2_TR(0x5577b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5577b9:{NFSU2_TR(0x5577b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5577ba:{NFSU2_TR(0x5577ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577bfull));
TAIL_STATIC(0x505450u,505);
}
B5577bf:L5577bf:{c.instructions+=2;NFSU2_TR(0x5577bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5577c0:{NFSU2_TR(0x5577c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577c5ull));
TAIL_STATIC(0x50b840u,50b);
}
B5577c5:L5577c5:{c.instructions+=3;NFSU2_TR(0x5577c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5577c8:{NFSU2_TR(0x5577c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5577ca:{NFSU2_TR(0x5577ca);
if(r1(R+518)){{goto L5577d1;}}
}
B5577cc:L5577cc:{c.instructions+=2;NFSU2_TR(0x5577cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5577cf:{NFSU2_TR(0x5577cf);
{goto L5577d3;}
}
B5577d1:L5577d1:{c.instructions+=1;NFSU2_TR(0x5577d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5577d3:L5577d3:{c.instructions+=3;NFSU2_TR(0x5577d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5577d4:{NFSU2_TR(0x5577d4);
__builtin_memmove((R+4),(R+28),4);
}
B5577d6:{NFSU2_TR(0x5577d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577dbull));
TAIL_STATIC(0x539650u,539);
}
B5577db:L5577db:{c.instructions+=3;NFSU2_TR(0x5577db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5577de:{NFSU2_TR(0x5577de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5577e0:{NFSU2_TR(0x5577e0);
if(r1(R+518)){{goto L5577f9;}}
}
B5577e2:L5577e2:{c.instructions+=3;NFSU2_TR(0x5577e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5577e5:{NFSU2_TR(0x5577e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5577e7:{NFSU2_TR(0x5577e7);
if(r1(R+518)){{goto L5577ee;}}
}
B5577e9:L5577e9:{c.instructions+=2;NFSU2_TR(0x5577e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5577ec:{NFSU2_TR(0x5577ec);
{goto L5577f0;}
}
B5577ee:L5577ee:{c.instructions+=1;NFSU2_TR(0x5577ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5577f0:L5577f0:{c.instructions+=2;NFSU2_TR(0x5577f0);
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
B5577f2:{NFSU2_TR(0x5577f2);
if(r1(R+518)){{goto L5577f9;}}
}
B5577f4:L5577f4:{c.instructions+=2;NFSU2_TR(0x5577f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5577f6:{NFSU2_TR(0x5577f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5577f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5577f9:L5577f9:{c.instructions+=3;NFSU2_TR(0x5577f9);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B5577fe:{NFSU2_TR(0x5577fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557800:{NFSU2_TR(0x557800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557859;}}
}
B557802:L557802:{c.instructions+=4;NFSU2_TR(0x557802);
__builtin_memmove((R+0),gp(0x83a7a0),4);
}
B557807:{NFSU2_TR(0x557807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557809:{NFSU2_TR(0x557809);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55780a:{NFSU2_TR(0x55780a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557813;}}
}
B55780c:L55780c:{c.instructions+=2;NFSU2_TR(0x55780c);
w4(R+24,u32(0x1ull));
}
B557811:{NFSU2_TR(0x557811);
{goto L557839;}
}
B557813:L557813:{c.instructions+=2;NFSU2_TR(0x557813);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557816:{NFSU2_TR(0x557816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55781f;}}
}
B557818:L557818:{c.instructions+=2;NFSU2_TR(0x557818);
w4(R+24,u32(0x2ull));
}
B55781d:{NFSU2_TR(0x55781d);
{goto L557839;}
}
B55781f:L55781f:{c.instructions+=2;NFSU2_TR(0x55781f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557822:{NFSU2_TR(0x557822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55782b;}}
}
B557824:L557824:{c.instructions+=2;NFSU2_TR(0x557824);
w4(R+24,u32(0x4ull));
}
B557829:{NFSU2_TR(0x557829);
{goto L557839;}
}
B55782b:L55782b:{c.instructions+=6;NFSU2_TR(0x55782b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55782d:{NFSU2_TR(0x55782d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557830:{NFSU2_TR(0x557830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B557833:{NFSU2_TR(0x557833);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B557834:{NFSU2_TR(0x557834);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B557837:{NFSU2_TR(0x557837);
__builtin_memmove((R+24),(R+4),4);
}
B557839:L557839:{c.instructions+=3;NFSU2_TR(0x557839);
__builtin_memmove((R+8),gp(0x7fa220),4);
}
B55783f:{NFSU2_TR(0x55783f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557840:{NFSU2_TR(0x557840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557845ull));
TAIL_STATIC(0x52cef0u,52c);
}
B557845:L557845:{c.instructions+=3;NFSU2_TR(0x557845);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557848:{NFSU2_TR(0x557848);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55784a:{NFSU2_TR(0x55784a);
if(r1(R+518)){{goto L557858;}}
}
B55784c:L55784c:{c.instructions+=4;NFSU2_TR(0x55784c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55784f:{NFSU2_TR(0x55784f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557852:{NFSU2_TR(0x557852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557855:{NFSU2_TR(0x557855);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557858:L557858:{c.instructions+=1;NFSU2_TR(0x557858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557859:L557859:{c.instructions+=2;NFSU2_TR(0x557859);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55785e:{NFSU2_TR(0x55785e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557863ull));
TAIL_STATIC(0x52cf60u,52c);
}
B557863:L557863:{c.instructions+=3;NFSU2_TR(0x557863);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557866:{NFSU2_TR(0x557866);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B557868:{NFSU2_TR(0x557868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55789f;}}
}
B55786a:L55786a:{c.instructions+=4;NFSU2_TR(0x55786a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557870:{NFSU2_TR(0x557870);
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
B557872:{NFSU2_TR(0x557872);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557875:{NFSU2_TR(0x557875);
if(r1(R+518)){{goto L55789f;}}
}
B557877:L557877:{c.instructions+=4;NFSU2_TR(0x557877);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557879:{NFSU2_TR(0x557879);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55787b:{NFSU2_TR(0x55787b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557880:{NFSU2_TR(0x557880);
if(r1(R+518)){{goto L557891;}}
}
B557882:L557882:{c.instructions+=4;NFSU2_TR(0x557882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557883:{NFSU2_TR(0x557883);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557888:{NFSU2_TR(0x557888);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55788a:{NFSU2_TR(0x55788a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55788full));
TAIL_STATIC(0x555d00u,555);
}
B55788f:L55788f:{c.instructions+=2;NFSU2_TR(0x55788f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557890:{NFSU2_TR(0x557890);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557891:L557891:{c.instructions+=4;NFSU2_TR(0x557891);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557893:{NFSU2_TR(0x557893);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557898:{NFSU2_TR(0x557898);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55789a:{NFSU2_TR(0x55789a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55789full));
TAIL_STATIC(0x555d00u,555);
}
B55789f:L55789f:{c.instructions+=2;NFSU2_TR(0x55789f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5578a0:{NFSU2_TR(0x5578a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5578c0:L5578c0:{c.instructions+=8;NFSU2_TR(0x5578c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5578c1:{NFSU2_TR(0x5578c1);
__builtin_memmove((R+24),(R+4),4);
}
B5578c3:{NFSU2_TR(0x5578c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5578c7:{NFSU2_TR(0x5578c7);
__builtin_memmove((R+0),gp(0x83a648),4);
}
B5578cc:{NFSU2_TR(0x5578cc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5578cf:{NFSU2_TR(0x5578cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5578d0:{NFSU2_TR(0x5578d0);
w4(R+28,u32(0x17ull));
}
B5578d5:{NFSU2_TR(0x5578d5);
if(r1(R+518)){{goto L5578ea;}}
}
B5578d7:L5578d7:{c.instructions+=2;NFSU2_TR(0x5578d7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5578d8:{NFSU2_TR(0x5578d8);
if(r1(R+518)){{goto L5578e3;}}
}
B5578da:L5578da:{c.instructions+=2;NFSU2_TR(0x5578da);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5578db:{NFSU2_TR(0x5578db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5578ef;}}
}
B5578dd:L5578dd:{c.instructions+=2;NFSU2_TR(0x5578dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5578e1:{NFSU2_TR(0x5578e1);
{goto L5578ef;}
}
B5578e3:L5578e3:{c.instructions+=2;NFSU2_TR(0x5578e3);
w4(R+28,u32(0x18ull));
}
B5578e8:{NFSU2_TR(0x5578e8);
{goto L5578ef;}
}
B5578ea:L5578ea:{c.instructions+=1;NFSU2_TR(0x5578ea);
w4(R+28,u32(0x17ull));
}
B5578ef:L5578ef:{c.instructions+=3;NFSU2_TR(0x5578ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5578f2:{NFSU2_TR(0x5578f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5578f4:{NFSU2_TR(0x5578f4);
if(r1(R+518)){{goto L557921;}}
}
B5578f6:L5578f6:{c.instructions+=2;NFSU2_TR(0x5578f6);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5578fb:{NFSU2_TR(0x5578fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557900ull));
TAIL_STATIC(0x575620u,575);
}
B557900:L557900:{c.instructions+=3;NFSU2_TR(0x557900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557903:{NFSU2_TR(0x557903);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557905:{NFSU2_TR(0x557905);
if(r1(R+518)){{goto L557918;}}
}
B557907:L557907:{c.instructions+=2;NFSU2_TR(0x557907);
__builtin_memmove((R+4),(R+0),4);
}
B557909:{NFSU2_TR(0x557909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55790eull));
TAIL_STATIC(0x523050u,523);
}
B55790e:L55790e:{c.instructions+=5;NFSU2_TR(0x55790e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557910:{NFSU2_TR(0x557910);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557912:{NFSU2_TR(0x557912);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557914:{NFSU2_TR(0x557914);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557916:{NFSU2_TR(0x557916);
{goto L55794b;}
}
B557918:L557918:{c.instructions+=6;NFSU2_TR(0x557918);
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
B55791a:{NFSU2_TR(0x55791a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55791b:{NFSU2_TR(0x55791b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55791c:{NFSU2_TR(0x55791c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55791d:{NFSU2_TR(0x55791d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55791f:{NFSU2_TR(0x55791f);
{goto L55794b;}
}
B557921:L557921:{c.instructions+=2;NFSU2_TR(0x557921);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557923:{NFSU2_TR(0x557923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557928ull));
TAIL_STATIC(0x575620u,575);
}
B557928:L557928:{c.instructions+=3;NFSU2_TR(0x557928);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55792b:{NFSU2_TR(0x55792b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55792d:{NFSU2_TR(0x55792d);
if(r1(R+518)){{goto L557938;}}
}
B55792f:L55792f:{c.instructions+=2;NFSU2_TR(0x55792f);
__builtin_memmove((R+4),(R+0),4);
}
B557931:{NFSU2_TR(0x557931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557936ull));
TAIL_STATIC(0x53cfc0u,53c);
}
B557936:L557936:{c.instructions+=1;NFSU2_TR(0x557936);
{goto L55793a;}
}
B557938:L557938:{c.instructions+=1;NFSU2_TR(0x557938);
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
B55793a:L55793a:{c.instructions+=6;NFSU2_TR(0x55793a);
__builtin_memmove((R+4),gp(0x799398),4);
}
B557940:{NFSU2_TR(0x557940);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557941:{NFSU2_TR(0x557941);
__builtin_memmove((R+4),gp(0x799394),4);
}
B557947:{NFSU2_TR(0x557947);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557948:{NFSU2_TR(0x557948);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55794a:{NFSU2_TR(0x55794a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55794b:L55794b:{c.instructions+=6;NFSU2_TR(0x55794b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55794e:{NFSU2_TR(0x55794e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55794f:{NFSU2_TR(0x55794f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557952:{NFSU2_TR(0x557952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B557954:{NFSU2_TR(0x557954);
__builtin_memmove((R+4),(R+0),4);
}
B557956:{NFSU2_TR(0x557956);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557959ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557959:L557959:{c.instructions+=3;NFSU2_TR(0x557959);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55795c:{NFSU2_TR(0x55795c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55795e:{NFSU2_TR(0x55795e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557961ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557961:L557961:{c.instructions+=3;NFSU2_TR(0x557961);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B557966:{NFSU2_TR(0x557966);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557968:{NFSU2_TR(0x557968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5579bf;}}
}
B55796a:L55796a:{c.instructions+=3;NFSU2_TR(0x55796a);
__builtin_memmove((R+0),gp(0x83a7a0),4);
}
B55796f:{NFSU2_TR(0x55796f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557971:{NFSU2_TR(0x557971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55797a;}}
}
B557973:L557973:{c.instructions+=2;NFSU2_TR(0x557973);
w4(R+28,u32(0x1ull));
}
B557978:{NFSU2_TR(0x557978);
{goto L5579a0;}
}
B55797a:L55797a:{c.instructions+=2;NFSU2_TR(0x55797a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55797d:{NFSU2_TR(0x55797d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557986;}}
}
B55797f:L55797f:{c.instructions+=2;NFSU2_TR(0x55797f);
w4(R+28,u32(0x2ull));
}
B557984:{NFSU2_TR(0x557984);
{goto L5579a0;}
}
B557986:L557986:{c.instructions+=2;NFSU2_TR(0x557986);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557989:{NFSU2_TR(0x557989);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557992;}}
}
B55798b:L55798b:{c.instructions+=2;NFSU2_TR(0x55798b);
w4(R+28,u32(0x4ull));
}
B557990:{NFSU2_TR(0x557990);
{goto L5579a0;}
}
B557992:L557992:{c.instructions+=6;NFSU2_TR(0x557992);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B557994:{NFSU2_TR(0x557994);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557997:{NFSU2_TR(0x557997);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B55799a:{NFSU2_TR(0x55799a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B55799b:{NFSU2_TR(0x55799b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B55799e:{NFSU2_TR(0x55799e);
__builtin_memmove((R+28),(R+4),4);
}
B5579a0:L5579a0:{c.instructions+=3;NFSU2_TR(0x5579a0);
__builtin_memmove((R+8),gp(0x7fa228),4);
}
B5579a6:{NFSU2_TR(0x5579a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579a7:{NFSU2_TR(0x5579a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5579acull));
TAIL_STATIC(0x52cef0u,52c);
}
B5579ac:L5579ac:{c.instructions+=3;NFSU2_TR(0x5579ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5579af:{NFSU2_TR(0x5579af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5579b1:{NFSU2_TR(0x5579b1);
if(r1(R+518)){{goto L5579bf;}}
}
B5579b3:L5579b3:{c.instructions+=4;NFSU2_TR(0x5579b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5579b6:{NFSU2_TR(0x5579b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5579b9:{NFSU2_TR(0x5579b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5579bc:{NFSU2_TR(0x5579bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5579bf:L5579bf:{c.instructions+=2;NFSU2_TR(0x5579bf);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579c4:{NFSU2_TR(0x5579c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5579c9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5579c9:L5579c9:{c.instructions+=3;NFSU2_TR(0x5579c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5579cc:{NFSU2_TR(0x5579cc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5579ce:{NFSU2_TR(0x5579ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557a06;}}
}
B5579d0:L5579d0:{c.instructions+=4;NFSU2_TR(0x5579d0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5579d6:{NFSU2_TR(0x5579d6);
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
B5579d8:{NFSU2_TR(0x5579d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5579db:{NFSU2_TR(0x5579db);
if(r1(R+518)){{goto L557a06;}}
}
B5579dd:L5579dd:{c.instructions+=4;NFSU2_TR(0x5579dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5579df:{NFSU2_TR(0x5579df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579e1:{NFSU2_TR(0x5579e1);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579e6:{NFSU2_TR(0x5579e6);
if(r1(R+518)){{goto L5579f8;}}
}
B5579e8:L5579e8:{c.instructions+=4;NFSU2_TR(0x5579e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579e9:{NFSU2_TR(0x5579e9);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579ee:{NFSU2_TR(0x5579ee);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579f0:{NFSU2_TR(0x5579f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5579f5ull));
TAIL_STATIC(0x555d00u,555);
}
B5579f5:L5579f5:{c.instructions+=3;NFSU2_TR(0x5579f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5579f6:{NFSU2_TR(0x5579f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5579f7:{NFSU2_TR(0x5579f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5579f8:L5579f8:{c.instructions+=4;NFSU2_TR(0x5579f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579fa:{NFSU2_TR(0x5579fa);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5579ff:{NFSU2_TR(0x5579ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a01:{NFSU2_TR(0x557a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557a06ull));
TAIL_STATIC(0x555d00u,555);
}
B557a06:L557a06:{c.instructions+=3;NFSU2_TR(0x557a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557a07:{NFSU2_TR(0x557a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557a08:{NFSU2_TR(0x557a08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557a10:L557a10:{c.instructions+=16;NFSU2_TR(0x557a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a11:{NFSU2_TR(0x557a11);
__builtin_memmove((R+20),(R+16),4);
}
B557a13:{NFSU2_TR(0x557a13);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a15:{NFSU2_TR(0x557a15);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a1a:{NFSU2_TR(0x557a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557a20:{NFSU2_TR(0x557a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a21:{NFSU2_TR(0x557a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557a28:{NFSU2_TR(0x557a28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a29:{NFSU2_TR(0x557a29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a2a:{NFSU2_TR(0x557a2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a2b:{NFSU2_TR(0x557a2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a2c:{NFSU2_TR(0x557a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B557a2f:{NFSU2_TR(0x557a2f);
__builtin_memmove((R+24),(R+4),4);
}
B557a31:{NFSU2_TR(0x557a31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a32:{NFSU2_TR(0x557a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557a35:{NFSU2_TR(0x557a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557a3aull));
TAIL_STATIC(0x551de0u,551);
}
B557a3a:L557a3a:{c.instructions+=10;NFSU2_TR(0x557a3a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B557a3c:{NFSU2_TR(0x557a3c);
u8 U[4];
w4(U+0,u32(0x79ac60ull));
s4(u32(r4(R+24)),r4(U+0));
}
B557a42:{NFSU2_TR(0x557a42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557a45:{NFSU2_TR(0x557a45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557a48:{NFSU2_TR(0x557a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557a4b:{NFSU2_TR(0x557a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557a4e:{NFSU2_TR(0x557a4e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a53:{NFSU2_TR(0x557a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557a56:{NFSU2_TR(0x557a56);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557a5c:{NFSU2_TR(0x557a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557a61ull));
TAIL_STATIC(0x52cf60u,52c);
}
B557a61:L557a61:{c.instructions+=3;NFSU2_TR(0x557a61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557a64:{NFSU2_TR(0x557a64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B557a66:{NFSU2_TR(0x557a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557a95;}}
}
B557a68:L557a68:{c.instructions+=4;NFSU2_TR(0x557a68);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557a6e:{NFSU2_TR(0x557a6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557a70:{NFSU2_TR(0x557a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557a73:{NFSU2_TR(0x557a73);
if(r1(R+518)){{goto L557a95;}}
}
B557a75:L557a75:{c.instructions+=4;NFSU2_TR(0x557a75);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557a77:{NFSU2_TR(0x557a77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a78:{NFSU2_TR(0x557a78);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a7d:{NFSU2_TR(0x557a7d);
if(r1(R+518)){{goto L557a89;}}
}
B557a7f:L557a7f:{c.instructions+=4;NFSU2_TR(0x557a7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a80:{NFSU2_TR(0x557a80);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a85:{NFSU2_TR(0x557a85);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a87:{NFSU2_TR(0x557a87);
{goto L557a90;}
}
B557a89:L557a89:{c.instructions+=3;NFSU2_TR(0x557a89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a8a:{NFSU2_TR(0x557a8a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a8f:{NFSU2_TR(0x557a8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a90:L557a90:{c.instructions+=1;NFSU2_TR(0x557a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557a95ull));
TAIL_STATIC(0x555d00u,555);
}
B557a95:L557a95:{c.instructions+=5;NFSU2_TR(0x557a95);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B557a9a:{NFSU2_TR(0x557a9a);
__builtin_memmove((R+4),(R+0),4);
}
B557a9c:{NFSU2_TR(0x557a9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557a9e:{NFSU2_TR(0x557a9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557aa2:{NFSU2_TR(0x557aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557aa7ull));
TAIL_STATIC(0x542990u,542);
}
B557aa7:L557aa7:{c.instructions+=6;NFSU2_TR(0x557aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557aaa:{NFSU2_TR(0x557aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557aad:{NFSU2_TR(0x557aad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557aae:{NFSU2_TR(0x557aae);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B557ab4:{NFSU2_TR(0x557ab4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ab5:{NFSU2_TR(0x557ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557abaull));
TAIL_STATIC(0x54e6e0u,54e);
}
B557aba:L557aba:{c.instructions+=6;NFSU2_TR(0x557aba);
__builtin_memmove((R+0),gp(0x83a64c),4);
}
B557abf:{NFSU2_TR(0x557abf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B557ac6:{NFSU2_TR(0x557ac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ac7:{NFSU2_TR(0x557ac7);
__builtin_memmove((R+4),(R+24),4);
}
B557ac9:{NFSU2_TR(0x557ac9);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B557acf:{NFSU2_TR(0x557acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ad4ull));
TAIL_STATIC(0x53d0a0u,53d);
}
B557ad4:L557ad4:{c.instructions+=3;NFSU2_TR(0x557ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557ad7:{NFSU2_TR(0x557ad7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B557ada:{NFSU2_TR(0x557ada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557b39;}}
}
B557adc:L557adc:{c.instructions+=4;NFSU2_TR(0x557adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B557adf:{NFSU2_TR(0x557adf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ae1:{NFSU2_TR(0x557ae1);
__builtin_memmove((R+4),(R+28),4);
}
B557ae3:{NFSU2_TR(0x557ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ae8ull));
TAIL_STATIC(0x5f6c20u,5f6);
}
B557ae8:L557ae8:{c.instructions+=3;NFSU2_TR(0x557ae8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557aea:{NFSU2_TR(0x557aea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557aee:{NFSU2_TR(0x557aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557af3ull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B557af3:L557af3:{c.instructions+=8;NFSU2_TR(0x557af3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557af5:{NFSU2_TR(0x557af5);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557afa:{NFSU2_TR(0x557afa);
s1(0x83a7a4,u8(0x1ull));
}
B557b01:{NFSU2_TR(0x557b01);
s4(0x83a644,u32(0x1ull));
}
B557b0b:{NFSU2_TR(0x557b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557b0e:{NFSU2_TR(0x557b0e);
u8 U[4];
w4(U+0,u32(0x11bf9934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b13:{NFSU2_TR(0x557b13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b14:{NFSU2_TR(0x557b14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b19ull));
TAIL_STATIC(0x537c00u,537);
}
B557b19:L557b19:{c.instructions+=4;NFSU2_TR(0x557b19);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B557b1f:{NFSU2_TR(0x557b1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B557b22:{NFSU2_TR(0x557b22);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b24:{NFSU2_TR(0x557b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b29ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B557b29:L557b29:{c.instructions+=3;NFSU2_TR(0x557b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557b2c:{NFSU2_TR(0x557b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557b32:{NFSU2_TR(0x557b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b37ull));
TAIL_STATIC(0x56d340u,56d);
}
B557b37:L557b37:{c.instructions+=1;NFSU2_TR(0x557b37);
{goto L557b78;}
}
B557b39:L557b39:{c.instructions+=5;NFSU2_TR(0x557b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557b3c:{NFSU2_TR(0x557b3c);
u8 U[4];
w4(U+0,u32(0x797ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b41:{NFSU2_TR(0x557b41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b42:{NFSU2_TR(0x557b42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557b45:{NFSU2_TR(0x557b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b4aull));
TAIL_STATIC(0x495500u,495);
}
B557b4a:L557b4a:{c.instructions+=4;NFSU2_TR(0x557b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557b4d:{NFSU2_TR(0x557b4d);
u8 U[4];
w4(U+0,u32(0x797580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b52:{NFSU2_TR(0x557b52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b53:{NFSU2_TR(0x557b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b58ull));
TAIL_STATIC(0x495500u,495);
}
B557b58:L557b58:{c.instructions+=6;NFSU2_TR(0x557b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557b5b:{NFSU2_TR(0x557b5b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b5d:{NFSU2_TR(0x557b5d);
u8 U[4];
w4(U+0,u32(0x79cdecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b62:{NFSU2_TR(0x557b62);
u8 U[4];
w4(U+0,u32(0x11bf9934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b67:{NFSU2_TR(0x557b67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b68:{NFSU2_TR(0x557b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b6dull));
TAIL_STATIC(0x537c00u,537);
}
B557b6d:L557b6d:{c.instructions+=4;NFSU2_TR(0x557b6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B557b70:{NFSU2_TR(0x557b70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b71:{NFSU2_TR(0x557b71);
__builtin_memmove((R+4),(R+24),4);
}
B557b73:{NFSU2_TR(0x557b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b78ull));
TAIL_STATIC(0x54a620u,54a);
}
B557b78:L557b78:{c.instructions+=2;NFSU2_TR(0x557b78);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b7d:{NFSU2_TR(0x557b7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557b82ull));
TAIL_STATIC(0x52cf60u,52c);
}
B557b82:L557b82:{c.instructions+=3;NFSU2_TR(0x557b82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557b85:{NFSU2_TR(0x557b85);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B557b87:{NFSU2_TR(0x557b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557bb6;}}
}
B557b89:L557b89:{c.instructions+=4;NFSU2_TR(0x557b89);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557b8f:{NFSU2_TR(0x557b8f);
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
B557b91:{NFSU2_TR(0x557b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557b94:{NFSU2_TR(0x557b94);
if(r1(R+518)){{goto L557bb6;}}
}
B557b96:L557b96:{c.instructions+=4;NFSU2_TR(0x557b96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557b98:{NFSU2_TR(0x557b98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b99:{NFSU2_TR(0x557b99);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557b9e:{NFSU2_TR(0x557b9e);
if(r1(R+518)){{goto L557baa;}}
}
B557ba0:L557ba0:{c.instructions+=4;NFSU2_TR(0x557ba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ba1:{NFSU2_TR(0x557ba1);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ba6:{NFSU2_TR(0x557ba6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ba8:{NFSU2_TR(0x557ba8);
{goto L557bb1;}
}
B557baa:L557baa:{c.instructions+=3;NFSU2_TR(0x557baa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bab:{NFSU2_TR(0x557bab);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bb0:{NFSU2_TR(0x557bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bb1:L557bb1:{c.instructions+=1;NFSU2_TR(0x557bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557bb6ull));
TAIL_STATIC(0x555d00u,555);
}
B557bb6:L557bb6:{c.instructions+=9;NFSU2_TR(0x557bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557bb9:{NFSU2_TR(0x557bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557bba:{NFSU2_TR(0x557bba);
__builtin_memmove((R+0),(R+24),4);
}
B557bbc:{NFSU2_TR(0x557bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557bbd:{NFSU2_TR(0x557bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B557bbe:{NFSU2_TR(0x557bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557bc5:{NFSU2_TR(0x557bc5);
__builtin_memmove((R+16),(R+20),4);
}
B557bc7:{NFSU2_TR(0x557bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B557bc8:{NFSU2_TR(0x557bc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557bd0:L557bd0:{c.instructions+=16;NFSU2_TR(0x557bd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bd1:{NFSU2_TR(0x557bd1);
__builtin_memmove((R+20),(R+16),4);
}
B557bd3:{NFSU2_TR(0x557bd3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bd5:{NFSU2_TR(0x557bd5);
u8 U[4];
w4(U+0,u32(0x77814full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bda:{NFSU2_TR(0x557bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557be0:{NFSU2_TR(0x557be0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557be1:{NFSU2_TR(0x557be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557be8:{NFSU2_TR(0x557be8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557be9:{NFSU2_TR(0x557be9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bea:{NFSU2_TR(0x557bea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557beb:{NFSU2_TR(0x557beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bec:{NFSU2_TR(0x557bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B557bef:{NFSU2_TR(0x557bef);
__builtin_memmove((R+24),(R+4),4);
}
B557bf1:{NFSU2_TR(0x557bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557bf2:{NFSU2_TR(0x557bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557bf5:{NFSU2_TR(0x557bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557bfaull));
TAIL_STATIC(0x551de0u,551);
}
B557bfa:L557bfa:{c.instructions+=67;NFSU2_TR(0x557bfa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B557bfc:{NFSU2_TR(0x557bfc);
u8 U[4];
w4(U+0,u32(0x79cdf4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B557c02:{NFSU2_TR(0x557c02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557c05:{NFSU2_TR(0x557c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c08:{NFSU2_TR(0x557c08);
w4(R+8,u32(0x78f544ull));
}
B557c0d:{NFSU2_TR(0x557c0d);
w4(R+4,u32(0x783fe5ull));
}
B557c12:{NFSU2_TR(0x557c12);
w4(R+0,u32(0x42380000ull));
}
B557c17:{NFSU2_TR(0x557c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c1a:{NFSU2_TR(0x557c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c1d:{NFSU2_TR(0x557c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c20:{NFSU2_TR(0x557c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c23:{NFSU2_TR(0x557c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c26:{NFSU2_TR(0x557c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c29:{NFSU2_TR(0x557c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c2c:{NFSU2_TR(0x557c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c2f:{NFSU2_TR(0x557c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c32:{NFSU2_TR(0x557c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c35:{NFSU2_TR(0x557c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c38:{NFSU2_TR(0x557c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c3e:{NFSU2_TR(0x557c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c44:{NFSU2_TR(0x557c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c4a:{NFSU2_TR(0x557c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c50:{NFSU2_TR(0x557c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c56:{NFSU2_TR(0x557c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c5c:{NFSU2_TR(0x557c5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557c5f:{NFSU2_TR(0x557c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c65:{NFSU2_TR(0x557c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c6b:{NFSU2_TR(0x557c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c71:{NFSU2_TR(0x557c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c77:{NFSU2_TR(0x557c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c7d:{NFSU2_TR(0x557c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c83:{NFSU2_TR(0x557c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c89:{NFSU2_TR(0x557c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c8f:{NFSU2_TR(0x557c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c95:{NFSU2_TR(0x557c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557c9b:{NFSU2_TR(0x557c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ca1:{NFSU2_TR(0x557ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ca7:{NFSU2_TR(0x557ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cad:{NFSU2_TR(0x557cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cb3:{NFSU2_TR(0x557cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cb9:{NFSU2_TR(0x557cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cbf:{NFSU2_TR(0x557cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557cc5:{NFSU2_TR(0x557cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ccb:{NFSU2_TR(0x557ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cd1:{NFSU2_TR(0x557cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cd7:{NFSU2_TR(0x557cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cdd:{NFSU2_TR(0x557cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ce3:{NFSU2_TR(0x557ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ce9:{NFSU2_TR(0x557ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cef:{NFSU2_TR(0x557cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cf5:{NFSU2_TR(0x557cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557cfb:{NFSU2_TR(0x557cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d01:{NFSU2_TR(0x557d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d07:{NFSU2_TR(0x557d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d0d:{NFSU2_TR(0x557d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d13:{NFSU2_TR(0x557d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d19:{NFSU2_TR(0x557d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d1f:{NFSU2_TR(0x557d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557d25:{NFSU2_TR(0x557d25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557d2b:{NFSU2_TR(0x557d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557d2e:{NFSU2_TR(0x557d2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B557d34:{NFSU2_TR(0x557d34);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B557d3a:{NFSU2_TR(0x557d3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B557d41:{NFSU2_TR(0x557d41);
__builtin_memmove((R+4),(R+24),4);
}
B557d43:{NFSU2_TR(0x557d43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557d47:{NFSU2_TR(0x557d47);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B557d4d:{NFSU2_TR(0x557d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557d52ull));
TAIL_STATIC(0x4a22a0u,4a2);
}
B557d52:L557d52:{c.instructions+=3;NFSU2_TR(0x557d52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d53:{NFSU2_TR(0x557d53);
__builtin_memmove((R+4),(R+24),4);
}
B557d55:{NFSU2_TR(0x557d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557d5aull));
TAIL_STATIC(0x54a970u,54a);
}
B557d5a:L557d5a:{c.instructions+=2;NFSU2_TR(0x557d5a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d5f:{NFSU2_TR(0x557d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557d64ull));
TAIL_STATIC(0x52cf60u,52c);
}
B557d64:L557d64:{c.instructions+=3;NFSU2_TR(0x557d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557d67:{NFSU2_TR(0x557d67);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B557d69:{NFSU2_TR(0x557d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557d98;}}
}
B557d6b:L557d6b:{c.instructions+=4;NFSU2_TR(0x557d6b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557d71:{NFSU2_TR(0x557d71);
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
B557d73:{NFSU2_TR(0x557d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557d76:{NFSU2_TR(0x557d76);
if(r1(R+518)){{goto L557d98;}}
}
B557d78:L557d78:{c.instructions+=4;NFSU2_TR(0x557d78);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B557d7a:{NFSU2_TR(0x557d7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d7b:{NFSU2_TR(0x557d7b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d80:{NFSU2_TR(0x557d80);
if(r1(R+518)){{goto L557d8c;}}
}
B557d82:L557d82:{c.instructions+=4;NFSU2_TR(0x557d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d83:{NFSU2_TR(0x557d83);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d88:{NFSU2_TR(0x557d88);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d8a:{NFSU2_TR(0x557d8a);
{goto L557d93;}
}
B557d8c:L557d8c:{c.instructions+=3;NFSU2_TR(0x557d8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d8d:{NFSU2_TR(0x557d8d);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d92:{NFSU2_TR(0x557d92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557d93:L557d93:{c.instructions+=1;NFSU2_TR(0x557d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557d98ull));
TAIL_STATIC(0x555d00u,555);
}
B557d98:L557d98:{c.instructions+=9;NFSU2_TR(0x557d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557d9b:{NFSU2_TR(0x557d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B557d9c:{NFSU2_TR(0x557d9c);
__builtin_memmove((R+0),(R+24),4);
}
B557d9e:{NFSU2_TR(0x557d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557d9f:{NFSU2_TR(0x557d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B557da0:{NFSU2_TR(0x557da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557da7:{NFSU2_TR(0x557da7);
__builtin_memmove((R+16),(R+20),4);
}
B557da9:{NFSU2_TR(0x557da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B557daa:{NFSU2_TR(0x557daa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557db0:L557db0:{c.instructions+=3;NFSU2_TR(0x557db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557db1:{NFSU2_TR(0x557db1);
__builtin_memmove((R+24),(R+4),4);
}
B557db3:{NFSU2_TR(0x557db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557db8ull));
{goto L557dd0;}
}
B557db8:L557db8:{c.instructions+=2;NFSU2_TR(0x557db8);
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
B557dbd:{NFSU2_TR(0x557dbd);
if(r1(R+518)){{goto L557dc8;}}
}
B557dbf:L557dbf:{c.instructions+=2;NFSU2_TR(0x557dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557dc0:{NFSU2_TR(0x557dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557dc5ull));
TAIL_STATIC(0x575630u,575);
}
B557dc5:L557dc5:{c.instructions+=1;NFSU2_TR(0x557dc5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557dc8:L557dc8:{c.instructions+=3;NFSU2_TR(0x557dc8);
__builtin_memmove((R+0),(R+24),4);
}
B557dca:{NFSU2_TR(0x557dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557dcb:{NFSU2_TR(0x557dcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557dd0:L557dd0:{c.instructions+=6;NFSU2_TR(0x557dd0);
w4(R+0,u32(0x78f544ull));
}
B557dd5:{NFSU2_TR(0x557dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557ddb:{NFSU2_TR(0x557ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557de1:{NFSU2_TR(0x557de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557de4:{NFSU2_TR(0x557de4);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B557dea:{NFSU2_TR(0x557dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557df0:L557df0:{c.instructions+=3;NFSU2_TR(0x557df0);
s4(0x838568,u32(0x2ull));
}
B557dfa:{NFSU2_TR(0x557dfa);
w4(R+0,u32(0x8382a0ull));
}
B557dff:{NFSU2_TR(0x557dff);
}
B557e00:L557e00:{c.instructions+=4;NFSU2_TR(0x557e00);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B557e03:{NFSU2_TR(0x557e03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B557e06:{NFSU2_TR(0x557e06);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B557e0b:{NFSU2_TR(0x557e0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x557e00u);}goto L557e00;}}
}
B557e0d:L557e0d:{c.instructions+=4;NFSU2_TR(0x557e0d);
s4(0x83856c,u32(0x0ull));
}
B557e17:{NFSU2_TR(0x557e17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B557e19:{NFSU2_TR(0x557e19);
w4(R+4,u32(0x8382a0ull));
}
B557e1e:{NFSU2_TR(0x557e1e);
__builtin_memmove((R+28),(R+28),4);
}
B557e20:L557e20:{c.instructions+=2;NFSU2_TR(0x557e20);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B557e23:{NFSU2_TR(0x557e23);
if(r1(R+518)){{goto L557e33;}}
}
B557e25:L557e25:{c.instructions+=4;NFSU2_TR(0x557e25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B557e28:{NFSU2_TR(0x557e28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B557e29:{NFSU2_TR(0x557e29);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8383a0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B557e2f:{NFSU2_TR(0x557e2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x557e20u);}goto L557e20;}}
}
B557e31:L557e31:{c.instructions+=1;NFSU2_TR(0x557e31);
{goto L557e4e;}
}
B557e33:L557e33:{c.instructions+=8;NFSU2_TR(0x557e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557e37:{NFSU2_TR(0x557e37);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e39:{NFSU2_TR(0x557e39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B557e3c:{NFSU2_TR(0x557e3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B557e3f:{NFSU2_TR(0x557e3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e40:{NFSU2_TR(0x557e40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8382a0ull))));
}
B557e45:{NFSU2_TR(0x557e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e46:{NFSU2_TR(0x557e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557e4bull));
TAIL_STATIC(0x43dc00u,43d);
}
B557e4b:L557e4b:{c.instructions+=1;NFSU2_TR(0x557e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B557e4e:L557e4e:{c.instructions+=3;NFSU2_TR(0x557e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557e52:{NFSU2_TR(0x557e52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557e54:{NFSU2_TR(0x557e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557ea7;}}
}
B557e56:L557e56:{c.instructions+=1;NFSU2_TR(0x557e56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557e5bull));
TAIL_STATIC(0x4a9330u,4a9);
}
B557e5b:L557e5b:{c.instructions+=2;NFSU2_TR(0x557e5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B557e5d:{NFSU2_TR(0x557e5d);
if(r1(R+518)){{goto L557e87;}}
}
B557e5f:L557e5f:{c.instructions+=1;NFSU2_TR(0x557e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557e64ull));
TAIL_STATIC(0x4a9340u,4a9);
}
B557e64:L557e64:{c.instructions+=3;NFSU2_TR(0x557e64);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557e6a:{NFSU2_TR(0x557e6a);
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
B557e6c:{NFSU2_TR(0x557e6c);
if(r1(R+518)){{goto L557ebe;}}
}
B557e6e:L557e6e:{c.instructions+=4;NFSU2_TR(0x557e6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557e70:{NFSU2_TR(0x557e70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e72:{NFSU2_TR(0x557e72);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e77:{NFSU2_TR(0x557e77);
if(r1(R+518)){{goto L557e98;}}
}
B557e79:L557e79:{c.instructions+=4;NFSU2_TR(0x557e79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e7a:{NFSU2_TR(0x557e7a);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e7f:{NFSU2_TR(0x557e7f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e81:{NFSU2_TR(0x557e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557e86ull));
TAIL_STATIC(0x555d00u,555);
}
B557e86:L557e86:{c.instructions+=1;NFSU2_TR(0x557e86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557e87:L557e87:{c.instructions+=3;NFSU2_TR(0x557e87);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557e8d:{NFSU2_TR(0x557e8d);
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
B557e8f:{NFSU2_TR(0x557e8f);
if(r1(R+518)){{goto L557ebe;}}
}
B557e91:L557e91:{c.instructions+=2;NFSU2_TR(0x557e91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e93:{NFSU2_TR(0x557e93);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e98:L557e98:{c.instructions+=4;NFSU2_TR(0x557e98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e9a:{NFSU2_TR(0x557e9a);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557e9f:{NFSU2_TR(0x557e9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ea1:{NFSU2_TR(0x557ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ea6ull));
TAIL_STATIC(0x555d00u,555);
}
B557ea6:L557ea6:{c.instructions+=1;NFSU2_TR(0x557ea6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557ea7:L557ea7:{c.instructions+=3;NFSU2_TR(0x557ea7);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557ead:{NFSU2_TR(0x557ead);
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
B557eaf:{NFSU2_TR(0x557eaf);
if(r1(R+518)){{goto L557ebe;}}
}
B557eb1:L557eb1:{c.instructions+=4;NFSU2_TR(0x557eb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557eb3:{NFSU2_TR(0x557eb3);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557eb8:{NFSU2_TR(0x557eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557eb9:{NFSU2_TR(0x557eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ebeull));
TAIL_STATIC(0x5377a0u,537);
}
B557ebe:L557ebe:{c.instructions+=1;NFSU2_TR(0x557ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557ec0:L557ec0:{c.instructions+=4;NFSU2_TR(0x557ec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ec1:{NFSU2_TR(0x557ec1);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ec6:{NFSU2_TR(0x557ec6);
__builtin_memmove((R+24),(R+4),4);
}
B557ec8:{NFSU2_TR(0x557ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ecdull));
TAIL_STATIC(0x52cf60u,52c);
}
B557ecd:L557ecd:{c.instructions+=3;NFSU2_TR(0x557ecd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557ed0:{NFSU2_TR(0x557ed0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B557ed2:{NFSU2_TR(0x557ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557ef0;}}
}
B557ed4:L557ed4:{c.instructions+=3;NFSU2_TR(0x557ed4);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557eda:{NFSU2_TR(0x557eda);
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
B557edc:{NFSU2_TR(0x557edc);
if(r1(R+518)){{goto L557ef0;}}
}
B557ede:L557ede:{c.instructions+=6;NFSU2_TR(0x557ede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ee0:{NFSU2_TR(0x557ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ee2:{NFSU2_TR(0x557ee2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ee4:{NFSU2_TR(0x557ee4);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ee9:{NFSU2_TR(0x557ee9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557eeb:{NFSU2_TR(0x557eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ef0ull));
TAIL_STATIC(0x555d00u,555);
}
B557ef0:L557ef0:{c.instructions+=5;NFSU2_TR(0x557ef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B557ef6:{NFSU2_TR(0x557ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557efc:{NFSU2_TR(0x557efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B557efe:{NFSU2_TR(0x557efe);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f03:{NFSU2_TR(0x557f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557f06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B557f06:L557f06:{c.instructions+=4;NFSU2_TR(0x557f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557f0c:{NFSU2_TR(0x557f0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557f10:{NFSU2_TR(0x557f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557f11:{NFSU2_TR(0x557f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557f20:L557f20:{c.instructions+=12;NFSU2_TR(0x557f20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f22:{NFSU2_TR(0x557f22);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f27:{NFSU2_TR(0x557f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557f2d:{NFSU2_TR(0x557f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f2e:{NFSU2_TR(0x557f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557f35:{NFSU2_TR(0x557f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f36:{NFSU2_TR(0x557f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557f3a:{NFSU2_TR(0x557f3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f3b:{NFSU2_TR(0x557f3b);
__builtin_memmove((R+24),(R+4),4);
}
B557f3d:{NFSU2_TR(0x557f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f3e:{NFSU2_TR(0x557f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557f42:{NFSU2_TR(0x557f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557f47ull));
TAIL_STATIC(0x552330u,552);
}
B557f47:L557f47:{c.instructions+=4;NFSU2_TR(0x557f47);
w4(R+4,u32(0x832dacull));
}
B557f4c:{NFSU2_TR(0x557f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B557f54:{NFSU2_TR(0x557f54);
u8 U[4];
w4(U+0,u32(0x79ce04ull));
s4(u32(r4(R+24)),r4(U+0));
}
B557f5a:{NFSU2_TR(0x557f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557f5full));
TAIL_STATIC(0x488ae0u,488);
}
B557f5f:L557f5f:{c.instructions+=4;NFSU2_TR(0x557f5f);
__builtin_memmove((R+4),(R+24),4);
}
B557f61:{NFSU2_TR(0x557f61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557f68:{NFSU2_TR(0x557f68);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x155ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557f6f:{NFSU2_TR(0x557f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557f74ull));
TAIL_STATIC(0x550dd0u,550);
}
B557f74:L557f74:{c.instructions+=2;NFSU2_TR(0x557f74);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f79:{NFSU2_TR(0x557f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557f7eull));
TAIL_STATIC(0x52cf60u,52c);
}
B557f7e:L557f7e:{c.instructions+=3;NFSU2_TR(0x557f7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B557f81:{NFSU2_TR(0x557f81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B557f83:{NFSU2_TR(0x557f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L557fb5;}}
}
B557f85:L557f85:{c.instructions+=4;NFSU2_TR(0x557f85);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B557f8b:{NFSU2_TR(0x557f8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557f8d:{NFSU2_TR(0x557f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B557f90:{NFSU2_TR(0x557f90);
if(r1(R+518)){{goto L557fb5;}}
}
B557f92:L557f92:{c.instructions+=4;NFSU2_TR(0x557f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B557f94:{NFSU2_TR(0x557f94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f96:{NFSU2_TR(0x557f96);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f9b:{NFSU2_TR(0x557f9b);
if(r1(R+518)){{goto L557fa7;}}
}
B557f9d:L557f9d:{c.instructions+=4;NFSU2_TR(0x557f9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557f9e:{NFSU2_TR(0x557f9e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fa3:{NFSU2_TR(0x557fa3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fa5:{NFSU2_TR(0x557fa5);
{goto L557fb0;}
}
B557fa7:L557fa7:{c.instructions+=3;NFSU2_TR(0x557fa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fa9:{NFSU2_TR(0x557fa9);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fae:{NFSU2_TR(0x557fae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fb0:L557fb0:{c.instructions+=1;NFSU2_TR(0x557fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557fb5ull));
TAIL_STATIC(0x555d00u,555);
}
B557fb5:L557fb5:{c.instructions+=5;NFSU2_TR(0x557fb5);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B557fba:{NFSU2_TR(0x557fba);
__builtin_memmove((R+4),(R+0),4);
}
B557fbc:{NFSU2_TR(0x557fbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fbe:{NFSU2_TR(0x557fbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B557fc2:{NFSU2_TR(0x557fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557fc7ull));
TAIL_STATIC(0x542990u,542);
}
B557fc7:L557fc7:{c.instructions+=6;NFSU2_TR(0x557fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557fca:{NFSU2_TR(0x557fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B557fcd:{NFSU2_TR(0x557fcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fce:{NFSU2_TR(0x557fce);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B557fd4:{NFSU2_TR(0x557fd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557fd5:{NFSU2_TR(0x557fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557fdaull));
TAIL_STATIC(0x54e6e0u,54e);
}
B557fda:L557fda:{c.instructions+=6;NFSU2_TR(0x557fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B557fde:{NFSU2_TR(0x557fde);
__builtin_memmove((R+0),(R+24),4);
}
B557fe0:{NFSU2_TR(0x557fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B557fe1:{NFSU2_TR(0x557fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B557fe8:{NFSU2_TR(0x557fe8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B557feb:{NFSU2_TR(0x557feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B557ff0:L557ff0:{c.instructions+=3;NFSU2_TR(0x557ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B557ff1:{NFSU2_TR(0x557ff1);
__builtin_memmove((R+24),(R+4),4);
}
B557ff3:{NFSU2_TR(0x557ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x557ff8ull));
TAIL_STATIC(0x558010u,558);
}
B557ff8:L557ff8:{c.instructions+=2;NFSU2_TR(0x557ff8);
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
B557ffd:{NFSU2_TR(0x557ffd);
if(r1(R+518)){TAIL_STATIC(0x558008u,558);}
}
B557fff:L557fff:{c.instructions+=1;NFSU2_TR(0x557fff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x558000u,558);
}
XIT:NFSU2_TR_EXIT(0x557,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
