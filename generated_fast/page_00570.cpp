#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x570,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x570,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_570(u8* __restrict R,Cpu& c);
u32 page_570(Cpu& c){return body_570(c.regs.data(),c);}
__attribute__((noinline)) u32 body_570(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x570007:goto L570007;
case 0x570011:c.instructions+=40;goto B570011;
case 0x57001b:c.instructions+=39;goto B57001b;
case 0x570025:c.instructions+=38;goto B570025;
case 0x57002f:c.instructions+=37;goto B57002f;
case 0x570039:c.instructions+=36;goto B570039;
case 0x570043:c.instructions+=35;goto B570043;
case 0x57004d:c.instructions+=34;goto B57004d;
case 0x570057:c.instructions+=33;goto B570057;
case 0x570061:c.instructions+=32;goto B570061;
case 0x57006b:c.instructions+=31;goto B57006b;
case 0x570075:c.instructions+=30;goto B570075;
case 0x57007f:c.instructions+=29;goto B57007f;
case 0x570089:c.instructions+=28;goto B570089;
case 0x570093:c.instructions+=27;goto B570093;
case 0x57009d:c.instructions+=26;goto B57009d;
case 0x5700a7:c.instructions+=25;goto B5700a7;
case 0x5700b1:c.instructions+=24;goto B5700b1;
case 0x5700bb:c.instructions+=23;goto B5700bb;
case 0x5700c5:c.instructions+=22;goto B5700c5;
case 0x5700cf:c.instructions+=21;goto B5700cf;
case 0x5700d9:c.instructions+=20;goto B5700d9;
case 0x5700e3:c.instructions+=19;goto B5700e3;
case 0x5700ed:c.instructions+=18;goto B5700ed;
case 0x5700f7:c.instructions+=17;goto B5700f7;
case 0x570101:c.instructions+=16;goto B570101;
case 0x57010b:c.instructions+=15;goto B57010b;
case 0x570115:c.instructions+=14;goto B570115;
case 0x57011f:c.instructions+=13;goto B57011f;
case 0x570129:c.instructions+=12;goto B570129;
case 0x570133:c.instructions+=11;goto B570133;
case 0x57013d:c.instructions+=10;goto B57013d;
case 0x570147:c.instructions+=9;goto B570147;
case 0x570151:c.instructions+=8;goto B570151;
case 0x57015b:c.instructions+=7;goto B57015b;
case 0x570165:c.instructions+=6;goto B570165;
case 0x57016f:c.instructions+=5;goto B57016f;
case 0x570179:c.instructions+=4;goto B570179;
case 0x570183:c.instructions+=3;goto B570183;
case 0x57018d:c.instructions+=2;goto B57018d;
case 0x570197:c.instructions+=1;goto B570197;
case 0x57019c:goto L57019c;
case 0x5701a1:c.instructions+=2;goto B5701a1;
case 0x5701a6:c.instructions+=1;goto B5701a6;
case 0x5701ab:goto L5701ab;
case 0x5701b0:c.instructions+=2;goto B5701b0;
case 0x5701b5:c.instructions+=1;goto B5701b5;
case 0x5701ba:goto L5701ba;
case 0x5701bd:c.instructions+=2;goto B5701bd;
case 0x5701c7:c.instructions+=1;goto B5701c7;
case 0x5701d0:goto L5701d0;
case 0x5701d4:c.instructions+=6;goto B5701d4;
case 0x5701d5:c.instructions+=5;goto B5701d5;
case 0x5701d7:c.instructions+=4;goto B5701d7;
case 0x5701da:c.instructions+=3;goto B5701da;
case 0x5701de:c.instructions+=2;goto B5701de;
case 0x5701e2:c.instructions+=1;goto B5701e2;
case 0x5701e4:goto L5701e4;
case 0x5701e7:c.instructions+=2;goto B5701e7;
case 0x5701e9:c.instructions+=1;goto B5701e9;
case 0x5701eb:goto L5701eb;
case 0x5701ec:c.instructions+=1;goto B5701ec;
case 0x5701ee:goto L5701ee;
case 0x5701ef:c.instructions+=1;goto B5701ef;
case 0x5701f1:goto L5701f1;
case 0x5701f8:c.instructions+=3;goto B5701f8;
case 0x5701ff:c.instructions+=2;goto B5701ff;
case 0x570200:c.instructions+=1;goto B570200;
case 0x570203:goto L570203;
case 0x570206:c.instructions+=7;goto B570206;
case 0x570207:c.instructions+=6;goto B570207;
case 0x57020b:c.instructions+=5;goto B57020b;
case 0x57020e:c.instructions+=4;goto B57020e;
case 0x57020f:c.instructions+=3;goto B57020f;
case 0x570213:c.instructions+=2;goto B570213;
case 0x570216:c.instructions+=1;goto B570216;
case 0x570219:goto L570219;
case 0x57021c:c.instructions+=6;goto B57021c;
case 0x570220:c.instructions+=5;goto B570220;
case 0x570223:c.instructions+=4;goto B570223;
case 0x570224:c.instructions+=3;goto B570224;
case 0x570228:c.instructions+=2;goto B570228;
case 0x57022b:c.instructions+=1;goto B57022b;
case 0x57022e:goto L57022e;
case 0x570231:c.instructions+=1;goto B570231;
case 0x570234:goto L570234;
case 0x570235:c.instructions+=1;goto B570235;
case 0x570240:goto L570240;
case 0x570241:c.instructions+=8;goto B570241;
case 0x570243:c.instructions+=7;goto B570243;
case 0x570246:c.instructions+=6;goto B570246;
case 0x570249:c.instructions+=5;goto B570249;
case 0x57024d:c.instructions+=4;goto B57024d;
case 0x570250:c.instructions+=3;goto B570250;
case 0x570251:c.instructions+=2;goto B570251;
case 0x570252:c.instructions+=1;goto B570252;
case 0x570258:goto L570258;
case 0x57025b:c.instructions+=4;goto B57025b;
case 0x57025e:c.instructions+=3;goto B57025e;
case 0x570261:c.instructions+=2;goto B570261;
case 0x570264:c.instructions+=1;goto B570264;
case 0x57026a:goto L57026a;
case 0x57026b:c.instructions+=1;goto B57026b;
case 0x570271:goto L570271;
case 0x570272:c.instructions+=1;goto B570272;
case 0x570278:goto L570278;
case 0x57027b:c.instructions+=23;goto B57027b;
case 0x570280:c.instructions+=22;goto B570280;
case 0x570282:c.instructions+=21;goto B570282;
case 0x570286:c.instructions+=20;goto B570286;
case 0x570289:c.instructions+=19;goto B570289;
case 0x57028a:c.instructions+=18;goto B57028a;
case 0x57028d:c.instructions+=17;goto B57028d;
case 0x570290:c.instructions+=16;goto B570290;
case 0x570291:c.instructions+=15;goto B570291;
case 0x570294:c.instructions+=14;goto B570294;
case 0x570298:c.instructions+=13;goto B570298;
case 0x57029b:c.instructions+=12;goto B57029b;
case 0x57029f:c.instructions+=11;goto B57029f;
case 0x5702a2:c.instructions+=10;goto B5702a2;
case 0x5702a6:c.instructions+=9;goto B5702a6;
case 0x5702a9:c.instructions+=8;goto B5702a9;
case 0x5702ad:c.instructions+=7;goto B5702ad;
case 0x5702b1:c.instructions+=6;goto B5702b1;
case 0x5702b3:c.instructions+=5;goto B5702b3;
case 0x5702b7:c.instructions+=4;goto B5702b7;
case 0x5702b8:c.instructions+=3;goto B5702b8;
case 0x5702bc:c.instructions+=2;goto B5702bc;
case 0x5702c0:c.instructions+=1;goto B5702c0;
case 0x5702c5:goto L5702c5;
case 0x5702c7:c.instructions+=29;goto B5702c7;
case 0x5702ca:c.instructions+=28;goto B5702ca;
case 0x5702cd:c.instructions+=27;goto B5702cd;
case 0x5702d0:c.instructions+=26;goto B5702d0;
case 0x5702d3:c.instructions+=25;goto B5702d3;
case 0x5702d6:c.instructions+=24;goto B5702d6;
case 0x5702d9:c.instructions+=23;goto B5702d9;
case 0x5702dc:c.instructions+=22;goto B5702dc;
case 0x5702de:c.instructions+=21;goto B5702de;
case 0x5702e1:c.instructions+=20;goto B5702e1;
case 0x5702e6:c.instructions+=19;goto B5702e6;
case 0x5702e9:c.instructions+=18;goto B5702e9;
case 0x5702ec:c.instructions+=17;goto B5702ec;
case 0x5702ef:c.instructions+=16;goto B5702ef;
case 0x5702f3:c.instructions+=15;goto B5702f3;
case 0x5702f6:c.instructions+=14;goto B5702f6;
case 0x5702f9:c.instructions+=13;goto B5702f9;
case 0x5702fd:c.instructions+=12;goto B5702fd;
case 0x570301:c.instructions+=11;goto B570301;
case 0x570305:c.instructions+=10;goto B570305;
case 0x570309:c.instructions+=9;goto B570309;
case 0x57030b:c.instructions+=8;goto B57030b;
case 0x57030f:c.instructions+=7;goto B57030f;
case 0x570313:c.instructions+=6;goto B570313;
case 0x570317:c.instructions+=5;goto B570317;
case 0x570318:c.instructions+=4;goto B570318;
case 0x57031c:c.instructions+=3;goto B57031c;
case 0x57031d:c.instructions+=2;goto B57031d;
case 0x57031e:c.instructions+=1;goto B57031e;
case 0x570323:goto L570323;
case 0x570326:c.instructions+=5;goto B570326;
case 0x570327:c.instructions+=4;goto B570327;
case 0x570328:c.instructions+=3;goto B570328;
case 0x57032a:c.instructions+=2;goto B57032a;
case 0x57032b:c.instructions+=1;goto B57032b;
case 0x57032c:goto L57032c;
case 0x57032f:c.instructions+=27;goto B57032f;
case 0x570332:c.instructions+=26;goto B570332;
case 0x570335:c.instructions+=25;goto B570335;
case 0x570337:c.instructions+=24;goto B570337;
case 0x57033a:c.instructions+=23;goto B57033a;
case 0x57033c:c.instructions+=22;goto B57033c;
case 0x57033f:c.instructions+=21;goto B57033f;
case 0x570342:c.instructions+=20;goto B570342;
case 0x570345:c.instructions+=19;goto B570345;
case 0x570348:c.instructions+=18;goto B570348;
case 0x57034c:c.instructions+=17;goto B57034c;
case 0x570350:c.instructions+=16;goto B570350;
case 0x570354:c.instructions+=15;goto B570354;
case 0x570358:c.instructions+=14;goto B570358;
case 0x57035b:c.instructions+=13;goto B57035b;
case 0x57035f:c.instructions+=12;goto B57035f;
case 0x570361:c.instructions+=11;goto B570361;
case 0x570364:c.instructions+=10;goto B570364;
case 0x570367:c.instructions+=9;goto B570367;
case 0x570369:c.instructions+=8;goto B570369;
case 0x57036d:c.instructions+=7;goto B57036d;
case 0x570370:c.instructions+=6;goto B570370;
case 0x570373:c.instructions+=5;goto B570373;
case 0x570376:c.instructions+=4;goto B570376;
case 0x57037c:c.instructions+=3;goto B57037c;
case 0x57037e:c.instructions+=2;goto B57037e;
case 0x570381:c.instructions+=1;goto B570381;
case 0x570387:goto L570387;
case 0x57038a:c.instructions+=11;goto B57038a;
case 0x57038c:c.instructions+=10;goto B57038c;
case 0x57038f:c.instructions+=9;goto B57038f;
case 0x570392:c.instructions+=8;goto B570392;
case 0x570394:c.instructions+=7;goto B570394;
case 0x570397:c.instructions+=6;goto B570397;
case 0x57039a:c.instructions+=5;goto B57039a;
case 0x57039b:c.instructions+=4;goto B57039b;
case 0x57039c:c.instructions+=3;goto B57039c;
case 0x57039e:c.instructions+=2;goto B57039e;
case 0x57039f:c.instructions+=1;goto B57039f;
case 0x5703a0:goto L5703a0;
case 0x5703a3:c.instructions+=39;goto B5703a3;
case 0x5703a7:c.instructions+=38;goto B5703a7;
case 0x5703ab:c.instructions+=37;goto B5703ab;
case 0x5703af:c.instructions+=36;goto B5703af;
case 0x5703b2:c.instructions+=35;goto B5703b2;
case 0x5703b6:c.instructions+=34;goto B5703b6;
case 0x5703b8:c.instructions+=33;goto B5703b8;
case 0x5703bb:c.instructions+=32;goto B5703bb;
case 0x5703be:c.instructions+=31;goto B5703be;
case 0x5703c1:c.instructions+=30;goto B5703c1;
case 0x5703c5:c.instructions+=29;goto B5703c5;
case 0x5703c8:c.instructions+=28;goto B5703c8;
case 0x5703cb:c.instructions+=27;goto B5703cb;
case 0x5703ce:c.instructions+=26;goto B5703ce;
case 0x5703d1:c.instructions+=25;goto B5703d1;
case 0x5703d4:c.instructions+=24;goto B5703d4;
case 0x5703d8:c.instructions+=23;goto B5703d8;
case 0x5703da:c.instructions+=22;goto B5703da;
case 0x5703dc:c.instructions+=21;goto B5703dc;
case 0x5703df:c.instructions+=20;goto B5703df;
case 0x5703e1:c.instructions+=19;goto B5703e1;
case 0x5703e5:c.instructions+=18;goto B5703e5;
case 0x5703e8:c.instructions+=17;goto B5703e8;
case 0x5703eb:c.instructions+=16;goto B5703eb;
case 0x5703ee:c.instructions+=15;goto B5703ee;
case 0x5703f1:c.instructions+=14;goto B5703f1;
case 0x5703f4:c.instructions+=13;goto B5703f4;
case 0x5703f8:c.instructions+=12;goto B5703f8;
case 0x5703fa:c.instructions+=11;goto B5703fa;
case 0x5703fd:c.instructions+=10;goto B5703fd;
case 0x570400:c.instructions+=9;goto B570400;
case 0x570403:c.instructions+=8;goto B570403;
case 0x570407:c.instructions+=7;goto B570407;
case 0x57040a:c.instructions+=6;goto B57040a;
case 0x57040d:c.instructions+=5;goto B57040d;
case 0x570410:c.instructions+=4;goto B570410;
case 0x570416:c.instructions+=3;goto B570416;
case 0x570418:c.instructions+=2;goto B570418;
case 0x57041b:c.instructions+=1;goto B57041b;
case 0x57041d:goto L57041d;
case 0x570420:c.instructions+=8;goto B570420;
case 0x570423:c.instructions+=7;goto B570423;
case 0x570426:c.instructions+=6;goto B570426;
case 0x570429:c.instructions+=5;goto B570429;
case 0x57042c:c.instructions+=4;goto B57042c;
case 0x57042f:c.instructions+=3;goto B57042f;
case 0x570432:c.instructions+=2;goto B570432;
case 0x570435:c.instructions+=1;goto B570435;
case 0x570438:goto L570438;
case 0x570439:c.instructions+=4;goto B570439;
case 0x57043a:c.instructions+=3;goto B57043a;
case 0x57043c:c.instructions+=2;goto B57043c;
case 0x57043d:c.instructions+=1;goto B57043d;
case 0x570440:goto L570440;
case 0x570441:c.instructions+=21;goto B570441;
case 0x570443:c.instructions+=20;goto B570443;
case 0x570446:c.instructions+=19;goto B570446;
case 0x570449:c.instructions+=18;goto B570449;
case 0x57044c:c.instructions+=17;goto B57044c;
case 0x57044f:c.instructions+=16;goto B57044f;
case 0x570452:c.instructions+=15;goto B570452;
case 0x570456:c.instructions+=14;goto B570456;
case 0x570459:c.instructions+=13;goto B570459;
case 0x57045d:c.instructions+=12;goto B57045d;
case 0x57045e:c.instructions+=11;goto B57045e;
case 0x570462:c.instructions+=10;goto B570462;
case 0x570465:c.instructions+=9;goto B570465;
case 0x570468:c.instructions+=8;goto B570468;
case 0x57046b:c.instructions+=7;goto B57046b;
case 0x57046d:c.instructions+=6;goto B57046d;
case 0x57046e:c.instructions+=5;goto B57046e;
case 0x570472:c.instructions+=4;goto B570472;
case 0x570476:c.instructions+=3;goto B570476;
case 0x570477:c.instructions+=2;goto B570477;
case 0x57047f:c.instructions+=1;goto B57047f;
case 0x570484:goto L570484;
case 0x570487:c.instructions+=6;goto B570487;
case 0x57048a:c.instructions+=5;goto B57048a;
case 0x57048e:c.instructions+=4;goto B57048e;
case 0x57048f:c.instructions+=3;goto B57048f;
case 0x570490:c.instructions+=2;goto B570490;
case 0x570491:c.instructions+=1;goto B570491;
case 0x570496:goto L570496;
case 0x570499:c.instructions+=3;goto B570499;
case 0x57049b:c.instructions+=2;goto B57049b;
case 0x57049c:c.instructions+=1;goto B57049c;
case 0x5704a0:goto L5704a0;
case 0x5704a1:c.instructions+=3;goto B5704a1;
case 0x5704a4:c.instructions+=2;goto B5704a4;
case 0x5704a6:c.instructions+=1;goto B5704a6;
case 0x5704a8:goto L5704a8;
case 0x5704ab:c.instructions+=4;goto B5704ab;
case 0x5704af:c.instructions+=3;goto B5704af;
case 0x5704b0:c.instructions+=2;goto B5704b0;
case 0x5704b1:c.instructions+=1;goto B5704b1;
case 0x5704b6:goto L5704b6;
case 0x5704b9:c.instructions+=2;goto B5704b9;
case 0x5704ba:c.instructions+=1;goto B5704ba;
case 0x5704bd:goto L5704bd;
case 0x5704c0:c.instructions+=1;goto B5704c0;
case 0x5704c2:goto L5704c2;
case 0x5704c5:c.instructions+=8;goto B5704c5;
case 0x5704cb:c.instructions+=7;goto B5704cb;
case 0x5704cf:c.instructions+=6;goto B5704cf;
case 0x5704d2:c.instructions+=5;goto B5704d2;
case 0x5704d6:c.instructions+=4;goto B5704d6;
case 0x5704d8:c.instructions+=3;goto B5704d8;
case 0x5704da:c.instructions+=2;goto B5704da;
case 0x5704dd:c.instructions+=1;goto B5704dd;
case 0x5704df:goto L5704df;
case 0x5704e1:c.instructions+=1;goto B5704e1;
case 0x5704e5:goto L5704e5;
case 0x5704e9:c.instructions+=4;goto B5704e9;
case 0x5704eb:c.instructions+=3;goto B5704eb;
case 0x5704ed:c.instructions+=2;goto B5704ed;
case 0x5704f0:c.instructions+=1;goto B5704f0;
case 0x5704f2:goto L5704f2;
case 0x5704f4:c.instructions+=3;goto B5704f4;
case 0x5704f8:c.instructions+=2;goto B5704f8;
case 0x5704f9:c.instructions+=1;goto B5704f9;
case 0x5704fc:goto L5704fc;
case 0x570500:goto L570500;
case 0x570501:c.instructions+=1;goto B570501;
case 0x570510:goto L570510;
case 0x570511:c.instructions+=22;goto B570511;
case 0x570513:c.instructions+=21;goto B570513;
case 0x570516:c.instructions+=20;goto B570516;
case 0x570519:c.instructions+=19;goto B570519;
case 0x57051d:c.instructions+=18;goto B57051d;
case 0x570520:c.instructions+=17;goto B570520;
case 0x570521:c.instructions+=16;goto B570521;
case 0x570522:c.instructions+=15;goto B570522;
case 0x570525:c.instructions+=14;goto B570525;
case 0x570527:c.instructions+=13;goto B570527;
case 0x570529:c.instructions+=12;goto B570529;
case 0x57052b:c.instructions+=11;goto B57052b;
case 0x57052f:c.instructions+=10;goto B57052f;
case 0x570532:c.instructions+=9;goto B570532;
case 0x570537:c.instructions+=8;goto B570537;
case 0x57053b:c.instructions+=7;goto B57053b;
case 0x57053d:c.instructions+=6;goto B57053d;
case 0x57053e:c.instructions+=5;goto B57053e;
case 0x570541:c.instructions+=4;goto B570541;
case 0x570545:c.instructions+=3;goto B570545;
case 0x570549:c.instructions+=2;goto B570549;
case 0x57054d:c.instructions+=1;goto B57054d;
case 0x570555:goto L570555;
case 0x570558:c.instructions+=1;goto B570558;
case 0x57055a:goto L57055a;
case 0x57055c:c.instructions+=17;goto B57055c;
case 0x57055d:c.instructions+=16;goto B57055d;
case 0x570560:c.instructions+=15;goto B570560;
case 0x570564:c.instructions+=14;goto B570564;
case 0x570568:c.instructions+=13;goto B570568;
case 0x57056b:c.instructions+=12;goto B57056b;
case 0x57056e:c.instructions+=11;goto B57056e;
case 0x570572:c.instructions+=10;goto B570572;
case 0x570575:c.instructions+=9;goto B570575;
case 0x570578:c.instructions+=8;goto B570578;
case 0x57057c:c.instructions+=7;goto B57057c;
case 0x57057f:c.instructions+=6;goto B57057f;
case 0x570582:c.instructions+=5;goto B570582;
case 0x570586:c.instructions+=4;goto B570586;
case 0x57058a:c.instructions+=3;goto B57058a;
case 0x57058d:c.instructions+=2;goto B57058d;
case 0x57058e:c.instructions+=1;goto B57058e;
case 0x57058f:goto L57058f;
case 0x570590:c.instructions+=1;goto B570590;
case 0x570595:goto L570595;
case 0x570599:c.instructions+=3;goto B570599;
case 0x57059d:c.instructions+=2;goto B57059d;
case 0x5705a0:c.instructions+=1;goto B5705a0;
case 0x5705a2:goto L5705a2;
case 0x5705a4:c.instructions+=1;goto B5705a4;
case 0x5705a6:goto L5705a6;
case 0x5705a8:c.instructions+=27;goto B5705a8;
case 0x5705ab:c.instructions+=26;goto B5705ab;
case 0x5705ae:c.instructions+=25;goto B5705ae;
case 0x5705b2:c.instructions+=24;goto B5705b2;
case 0x5705b6:c.instructions+=23;goto B5705b6;
case 0x5705b9:c.instructions+=22;goto B5705b9;
case 0x5705bc:c.instructions+=21;goto B5705bc;
case 0x5705be:c.instructions+=20;goto B5705be;
case 0x5705c2:c.instructions+=19;goto B5705c2;
case 0x5705c4:c.instructions+=18;goto B5705c4;
case 0x5705c8:c.instructions+=17;goto B5705c8;
case 0x5705cb:c.instructions+=16;goto B5705cb;
case 0x5705cf:c.instructions+=15;goto B5705cf;
case 0x5705d2:c.instructions+=14;goto B5705d2;
case 0x5705d3:c.instructions+=13;goto B5705d3;
case 0x5705d7:c.instructions+=12;goto B5705d7;
case 0x5705da:c.instructions+=11;goto B5705da;
case 0x5705dd:c.instructions+=10;goto B5705dd;
case 0x5705e1:c.instructions+=9;goto B5705e1;
case 0x5705e4:c.instructions+=8;goto B5705e4;
case 0x5705e7:c.instructions+=7;goto B5705e7;
case 0x5705eb:c.instructions+=6;goto B5705eb;
case 0x5705ef:c.instructions+=5;goto B5705ef;
case 0x5705f3:c.instructions+=4;goto B5705f3;
case 0x5705f6:c.instructions+=3;goto B5705f6;
case 0x5705f7:c.instructions+=2;goto B5705f7;
case 0x5705f8:c.instructions+=1;goto B5705f8;
case 0x5705fa:goto L5705fa;
case 0x5705fd:c.instructions+=9;goto B5705fd;
case 0x570600:c.instructions+=8;goto B570600;
case 0x570602:c.instructions+=7;goto B570602;
case 0x570606:c.instructions+=6;goto B570606;
case 0x570609:c.instructions+=5;goto B570609;
case 0x57060c:c.instructions+=4;goto B57060c;
case 0x57060e:c.instructions+=3;goto B57060e;
case 0x570610:c.instructions+=2;goto B570610;
case 0x570613:c.instructions+=1;goto B570613;
case 0x570616:goto L570616;
case 0x57061a:c.instructions+=8;goto B57061a;
case 0x57061e:c.instructions+=7;goto B57061e;
case 0x570621:c.instructions+=6;goto B570621;
case 0x570622:c.instructions+=5;goto B570622;
case 0x570625:c.instructions+=4;goto B570625;
case 0x570626:c.instructions+=3;goto B570626;
case 0x57062a:c.instructions+=2;goto B57062a;
case 0x57062e:c.instructions+=1;goto B57062e;
case 0x570634:goto L570634;
case 0x570635:c.instructions+=5;goto B570635;
case 0x570636:c.instructions+=4;goto B570636;
case 0x570637:c.instructions+=3;goto B570637;
case 0x570639:c.instructions+=2;goto B570639;
case 0x57063a:c.instructions+=1;goto B57063a;
case 0x570640:goto L570640;
case 0x570641:c.instructions+=11;goto B570641;
case 0x570643:c.instructions+=10;goto B570643;
case 0x570646:c.instructions+=9;goto B570646;
case 0x570649:c.instructions+=8;goto B570649;
case 0x57064a:c.instructions+=7;goto B57064a;
case 0x57064b:c.instructions+=6;goto B57064b;
case 0x57064d:c.instructions+=5;goto B57064d;
case 0x570650:c.instructions+=4;goto B570650;
case 0x570652:c.instructions+=3;goto B570652;
case 0x570654:c.instructions+=2;goto B570654;
case 0x570655:c.instructions+=1;goto B570655;
case 0x570657:goto L570657;
case 0x57065c:goto L57065c;
case 0x57065f:goto L57065f;
case 0x570663:c.instructions+=1;goto B570663;
case 0x570665:goto L570665;
case 0x570668:c.instructions+=10;goto B570668;
case 0x57066a:c.instructions+=9;goto B57066a;
case 0x57066d:c.instructions+=8;goto B57066d;
case 0x570670:c.instructions+=7;goto B570670;
case 0x570673:c.instructions+=6;goto B570673;
case 0x570674:c.instructions+=5;goto B570674;
case 0x570675:c.instructions+=4;goto B570675;
case 0x570676:c.instructions+=3;goto B570676;
case 0x570678:c.instructions+=2;goto B570678;
case 0x570679:c.instructions+=1;goto B570679;
case 0x57067c:goto L57067c;
case 0x57067f:c.instructions+=3;goto B57067f;
case 0x570680:c.instructions+=2;goto B570680;
case 0x570682:c.instructions+=1;goto B570682;
case 0x570687:goto L570687;
case 0x570689:c.instructions+=1;goto B570689;
case 0x57068e:goto L57068e;
case 0x570692:c.instructions+=5;goto B570692;
case 0x570696:c.instructions+=4;goto B570696;
case 0x570698:c.instructions+=3;goto B570698;
case 0x57069a:c.instructions+=2;goto B57069a;
case 0x57069d:c.instructions+=1;goto B57069d;
case 0x57069f:goto L57069f;
case 0x5706a5:goto L5706a5;
case 0x5706a7:c.instructions+=1;goto B5706a7;
case 0x5706ac:goto L5706ac;
case 0x5706ae:c.instructions+=6;goto B5706ae;
case 0x5706b0:c.instructions+=5;goto B5706b0;
case 0x5706b2:c.instructions+=4;goto B5706b2;
case 0x5706b6:c.instructions+=3;goto B5706b6;
case 0x5706ba:c.instructions+=2;goto B5706ba;
case 0x5706bc:c.instructions+=1;goto B5706bc;
case 0x5706be:goto L5706be;
case 0x5706c0:c.instructions+=1;goto B5706c0;
case 0x5706c2:goto L5706c2;
case 0x5706c6:c.instructions+=3;goto B5706c6;
case 0x5706c7:c.instructions+=2;goto B5706c7;
case 0x5706c9:c.instructions+=1;goto B5706c9;
case 0x5706cb:goto L5706cb;
case 0x5706d0:c.instructions+=5;goto B5706d0;
case 0x5706d2:c.instructions+=4;goto B5706d2;
case 0x5706d4:c.instructions+=3;goto B5706d4;
case 0x5706d8:c.instructions+=2;goto B5706d8;
case 0x5706d9:c.instructions+=1;goto B5706d9;
case 0x5706de:goto L5706de;
case 0x5706df:c.instructions+=5;goto B5706df;
case 0x5706e0:c.instructions+=4;goto B5706e0;
case 0x5706e4:c.instructions+=3;goto B5706e4;
case 0x5706e5:c.instructions+=2;goto B5706e5;
case 0x5706e7:c.instructions+=1;goto B5706e7;
case 0x5706ec:goto L5706ec;
case 0x5706ef:c.instructions+=6;goto B5706ef;
case 0x5706f3:c.instructions+=5;goto B5706f3;
case 0x5706f7:c.instructions+=4;goto B5706f7;
case 0x5706f8:c.instructions+=3;goto B5706f8;
case 0x5706f9:c.instructions+=2;goto B5706f9;
case 0x5706fa:c.instructions+=1;goto B5706fa;
case 0x5706fc:goto L5706fc;
case 0x5706ff:c.instructions+=7;goto B5706ff;
case 0x570702:c.instructions+=6;goto B570702;
case 0x570705:c.instructions+=5;goto B570705;
case 0x570709:c.instructions+=4;goto B570709;
case 0x57070d:c.instructions+=3;goto B57070d;
case 0x57070e:c.instructions+=2;goto B57070e;
case 0x57070f:c.instructions+=1;goto B57070f;
case 0x570710:goto L570710;
case 0x570713:c.instructions+=3;goto B570713;
case 0x570715:c.instructions+=2;goto B570715;
case 0x570716:c.instructions+=1;goto B570716;
case 0x57071b:goto L57071b;
case 0x57071d:c.instructions+=6;goto B57071d;
case 0x57071e:c.instructions+=5;goto B57071e;
case 0x57071f:c.instructions+=4;goto B57071f;
case 0x570720:c.instructions+=3;goto B570720;
case 0x570722:c.instructions+=2;goto B570722;
case 0x570723:c.instructions+=1;goto B570723;
case 0x570730:goto L570730;
case 0x570731:c.instructions+=15;goto B570731;
case 0x570732:c.instructions+=14;goto B570732;
case 0x570736:c.instructions+=13;goto B570736;
case 0x570737:c.instructions+=12;goto B570737;
case 0x570738:c.instructions+=11;goto B570738;
case 0x570739:c.instructions+=10;goto B570739;
case 0x57073b:c.instructions+=9;goto B57073b;
case 0x57073e:c.instructions+=8;goto B57073e;
case 0x570740:c.instructions+=7;goto B570740;
case 0x570743:c.instructions+=6;goto B570743;
case 0x570745:c.instructions+=5;goto B570745;
case 0x570749:c.instructions+=4;goto B570749;
case 0x57074a:c.instructions+=3;goto B57074a;
case 0x57074b:c.instructions+=2;goto B57074b;
case 0x57074d:c.instructions+=1;goto B57074d;
case 0x570752:goto L570752;
case 0x570756:c.instructions+=5;goto B570756;
case 0x57075a:c.instructions+=4;goto B57075a;
case 0x57075d:c.instructions+=3;goto B57075d;
case 0x570760:c.instructions+=2;goto B570760;
case 0x570762:c.instructions+=1;goto B570762;
case 0x570764:goto L570764;
case 0x570766:c.instructions+=2;goto B570766;
case 0x570769:c.instructions+=1;goto B570769;
case 0x570770:goto L570770;
case 0x570773:c.instructions+=5;goto B570773;
case 0x570777:c.instructions+=4;goto B570777;
case 0x570779:c.instructions+=3;goto B570779;
case 0x57077a:c.instructions+=2;goto B57077a;
case 0x57077b:c.instructions+=1;goto B57077b;
case 0x570780:goto L570780;
case 0x570784:c.instructions+=4;goto B570784;
case 0x570787:c.instructions+=3;goto B570787;
case 0x570789:c.instructions+=2;goto B570789;
case 0x57078c:c.instructions+=1;goto B57078c;
case 0x57078e:goto L57078e;
case 0x570792:c.instructions+=6;goto B570792;
case 0x570796:c.instructions+=5;goto B570796;
case 0x570798:c.instructions+=4;goto B570798;
case 0x570799:c.instructions+=3;goto B570799;
case 0x57079c:c.instructions+=2;goto B57079c;
case 0x57079e:c.instructions+=1;goto B57079e;
case 0x5707a0:goto L5707a0;
case 0x5707a2:goto L5707a2;
case 0x5707a4:goto L5707a4;
case 0x5707a8:goto L5707a8;
case 0x5707ab:c.instructions+=2;goto B5707ab;
case 0x5707ad:c.instructions+=1;goto B5707ad;
case 0x5707af:goto L5707af;
case 0x5707b1:c.instructions+=1;goto B5707b1;
case 0x5707b4:goto L5707b4;
case 0x5707b7:c.instructions+=5;goto B5707b7;
case 0x5707bb:c.instructions+=4;goto B5707bb;
case 0x5707bd:c.instructions+=3;goto B5707bd;
case 0x5707be:c.instructions+=2;goto B5707be;
case 0x5707bf:c.instructions+=1;goto B5707bf;
case 0x5707c4:goto L5707c4;
case 0x5707c8:c.instructions+=4;goto B5707c8;
case 0x5707cb:c.instructions+=3;goto B5707cb;
case 0x5707cd:c.instructions+=2;goto B5707cd;
case 0x5707d0:c.instructions+=1;goto B5707d0;
case 0x5707d2:goto L5707d2;
case 0x5707d4:c.instructions+=5;goto B5707d4;
case 0x5707d8:c.instructions+=4;goto B5707d8;
case 0x5707d9:c.instructions+=3;goto B5707d9;
case 0x5707dc:c.instructions+=2;goto B5707dc;
case 0x5707de:c.instructions+=1;goto B5707de;
case 0x5707e0:goto L5707e0;
case 0x5707e1:c.instructions+=6;goto B5707e1;
case 0x5707e2:c.instructions+=5;goto B5707e2;
case 0x5707e4:c.instructions+=4;goto B5707e4;
case 0x5707e5:c.instructions+=3;goto B5707e5;
case 0x5707e6:c.instructions+=2;goto B5707e6;
case 0x5707e7:c.instructions+=1;goto B5707e7;
case 0x5707ea:goto L5707ea;
case 0x5707ec:goto L5707ec;
case 0x5707ed:c.instructions+=6;goto B5707ed;
case 0x5707ee:c.instructions+=5;goto B5707ee;
case 0x5707f0:c.instructions+=4;goto B5707f0;
case 0x5707f1:c.instructions+=3;goto B5707f1;
case 0x5707f2:c.instructions+=2;goto B5707f2;
case 0x5707f3:c.instructions+=1;goto B5707f3;
case 0x570800:goto L570800;
case 0x570801:c.instructions+=11;goto B570801;
case 0x570803:c.instructions+=10;goto B570803;
case 0x570806:c.instructions+=9;goto B570806;
case 0x570809:c.instructions+=8;goto B570809;
case 0x57080a:c.instructions+=7;goto B57080a;
case 0x57080b:c.instructions+=6;goto B57080b;
case 0x57080d:c.instructions+=5;goto B57080d;
case 0x570810:c.instructions+=4;goto B570810;
case 0x570812:c.instructions+=3;goto B570812;
case 0x570814:c.instructions+=2;goto B570814;
case 0x570815:c.instructions+=1;goto B570815;
case 0x570817:goto L570817;
case 0x57081c:goto L57081c;
case 0x57081f:goto L57081f;
case 0x570823:c.instructions+=3;goto B570823;
case 0x570826:c.instructions+=2;goto B570826;
case 0x570829:c.instructions+=1;goto B570829;
case 0x57082b:goto L57082b;
case 0x57082d:c.instructions+=6;goto B57082d;
case 0x57082e:c.instructions+=5;goto B57082e;
case 0x57082f:c.instructions+=4;goto B57082f;
case 0x570830:c.instructions+=3;goto B570830;
case 0x570832:c.instructions+=2;goto B570832;
case 0x570833:c.instructions+=1;goto B570833;
case 0x570834:goto L570834;
case 0x570837:c.instructions+=5;goto B570837;
case 0x57083a:c.instructions+=4;goto B57083a;
case 0x57083d:c.instructions+=3;goto B57083d;
case 0x570841:c.instructions+=2;goto B570841;
case 0x570846:c.instructions+=1;goto B570846;
case 0x57084c:goto L57084c;
case 0x570851:c.instructions+=1;goto B570851;
case 0x570854:goto L570854;
case 0x570857:c.instructions+=31;goto B570857;
case 0x57085a:c.instructions+=30;goto B57085a;
case 0x57085e:c.instructions+=29;goto B57085e;
case 0x570861:c.instructions+=28;goto B570861;
case 0x570863:c.instructions+=27;goto B570863;
case 0x570867:c.instructions+=26;goto B570867;
case 0x57086a:c.instructions+=25;goto B57086a;
case 0x57086d:c.instructions+=24;goto B57086d;
case 0x570871:c.instructions+=23;goto B570871;
case 0x570874:c.instructions+=22;goto B570874;
case 0x570877:c.instructions+=21;goto B570877;
case 0x57087b:c.instructions+=20;goto B57087b;
case 0x57087e:c.instructions+=19;goto B57087e;
case 0x570880:c.instructions+=18;goto B570880;
case 0x570882:c.instructions+=17;goto B570882;
case 0x570885:c.instructions+=16;goto B570885;
case 0x570888:c.instructions+=15;goto B570888;
case 0x57088c:c.instructions+=14;goto B57088c;
case 0x570890:c.instructions+=13;goto B570890;
case 0x570892:c.instructions+=12;goto B570892;
case 0x570894:c.instructions+=11;goto B570894;
case 0x570898:c.instructions+=10;goto B570898;
case 0x57089a:c.instructions+=9;goto B57089a;
case 0x57089e:c.instructions+=8;goto B57089e;
case 0x5708a2:c.instructions+=7;goto B5708a2;
case 0x5708a4:c.instructions+=6;goto B5708a4;
case 0x5708a6:c.instructions+=5;goto B5708a6;
case 0x5708ac:c.instructions+=4;goto B5708ac;
case 0x5708ae:c.instructions+=3;goto B5708ae;
case 0x5708b0:c.instructions+=2;goto B5708b0;
case 0x5708b3:c.instructions+=1;goto B5708b3;
case 0x5708b5:goto L5708b5;
case 0x5708b7:goto L5708b7;
case 0x5708bb:c.instructions+=27;goto B5708bb;
case 0x5708bd:c.instructions+=26;goto B5708bd;
case 0x5708c1:c.instructions+=25;goto B5708c1;
case 0x5708c5:c.instructions+=24;goto B5708c5;
case 0x5708c9:c.instructions+=23;goto B5708c9;
case 0x5708cc:c.instructions+=22;goto B5708cc;
case 0x5708cf:c.instructions+=21;goto B5708cf;
case 0x5708d3:c.instructions+=20;goto B5708d3;
case 0x5708d6:c.instructions+=19;goto B5708d6;
case 0x5708d9:c.instructions+=18;goto B5708d9;
case 0x5708db:c.instructions+=17;goto B5708db;
case 0x5708de:c.instructions+=16;goto B5708de;
case 0x5708e1:c.instructions+=15;goto B5708e1;
case 0x5708e5:c.instructions+=14;goto B5708e5;
case 0x5708e9:c.instructions+=13;goto B5708e9;
case 0x5708eb:c.instructions+=12;goto B5708eb;
case 0x5708ed:c.instructions+=11;goto B5708ed;
case 0x5708f1:c.instructions+=10;goto B5708f1;
case 0x5708f3:c.instructions+=9;goto B5708f3;
case 0x5708f7:c.instructions+=8;goto B5708f7;
case 0x5708fb:c.instructions+=7;goto B5708fb;
case 0x5708fd:c.instructions+=6;goto B5708fd;
case 0x5708ff:c.instructions+=5;goto B5708ff;
case 0x570905:c.instructions+=4;goto B570905;
case 0x570907:c.instructions+=3;goto B570907;
case 0x570909:c.instructions+=2;goto B570909;
case 0x57090c:c.instructions+=1;goto B57090c;
case 0x57090e:goto L57090e;
case 0x570910:goto L570910;
case 0x570914:c.instructions+=27;goto B570914;
case 0x570916:c.instructions+=26;goto B570916;
case 0x57091a:c.instructions+=25;goto B57091a;
case 0x57091e:c.instructions+=24;goto B57091e;
case 0x570922:c.instructions+=23;goto B570922;
case 0x570925:c.instructions+=22;goto B570925;
case 0x570928:c.instructions+=21;goto B570928;
case 0x57092c:c.instructions+=20;goto B57092c;
case 0x57092f:c.instructions+=19;goto B57092f;
case 0x570932:c.instructions+=18;goto B570932;
case 0x570934:c.instructions+=17;goto B570934;
case 0x570937:c.instructions+=16;goto B570937;
case 0x57093a:c.instructions+=15;goto B57093a;
case 0x57093e:c.instructions+=14;goto B57093e;
case 0x570942:c.instructions+=13;goto B570942;
case 0x570944:c.instructions+=12;goto B570944;
case 0x570946:c.instructions+=11;goto B570946;
case 0x57094a:c.instructions+=10;goto B57094a;
case 0x57094c:c.instructions+=9;goto B57094c;
case 0x570950:c.instructions+=8;goto B570950;
case 0x570954:c.instructions+=7;goto B570954;
case 0x570956:c.instructions+=6;goto B570956;
case 0x570958:c.instructions+=5;goto B570958;
case 0x57095e:c.instructions+=4;goto B57095e;
case 0x570960:c.instructions+=3;goto B570960;
case 0x570962:c.instructions+=2;goto B570962;
case 0x570965:c.instructions+=1;goto B570965;
case 0x570967:goto L570967;
case 0x570969:goto L570969;
case 0x57096b:c.instructions+=21;goto B57096b;
case 0x57096f:c.instructions+=20;goto B57096f;
case 0x570973:c.instructions+=19;goto B570973;
case 0x570976:c.instructions+=18;goto B570976;
case 0x570979:c.instructions+=17;goto B570979;
case 0x57097c:c.instructions+=16;goto B57097c;
case 0x57097f:c.instructions+=15;goto B57097f;
case 0x570982:c.instructions+=14;goto B570982;
case 0x570985:c.instructions+=13;goto B570985;
case 0x570987:c.instructions+=12;goto B570987;
case 0x570989:c.instructions+=11;goto B570989;
case 0x57098b:c.instructions+=10;goto B57098b;
case 0x57098d:c.instructions+=9;goto B57098d;
case 0x57098f:c.instructions+=8;goto B57098f;
case 0x570993:c.instructions+=7;goto B570993;
case 0x570995:c.instructions+=6;goto B570995;
case 0x57099b:c.instructions+=5;goto B57099b;
case 0x57099d:c.instructions+=4;goto B57099d;
case 0x57099f:c.instructions+=3;goto B57099f;
case 0x5709a2:c.instructions+=2;goto B5709a2;
case 0x5709a4:c.instructions+=1;goto B5709a4;
case 0x5709a6:goto L5709a6;
case 0x5709a8:goto L5709a8;
case 0x5709ab:c.instructions+=4;goto B5709ab;
case 0x5709ae:c.instructions+=3;goto B5709ae;
case 0x5709b1:c.instructions+=2;goto B5709b1;
case 0x5709b3:c.instructions+=1;goto B5709b3;
case 0x5709b9:goto L5709b9;
case 0x5709bd:goto L5709bd;
case 0x5709bf:c.instructions+=1;goto B5709bf;
case 0x5709c1:goto L5709c1;
case 0x5709c3:c.instructions+=4;goto B5709c3;
case 0x5709c6:c.instructions+=3;goto B5709c6;
case 0x5709ca:c.instructions+=2;goto B5709ca;
case 0x5709cc:c.instructions+=1;goto B5709cc;
case 0x5709d0:goto L5709d0;
case 0x5709d3:c.instructions+=25;goto B5709d3;
case 0x5709d6:c.instructions+=24;goto B5709d6;
case 0x5709d9:c.instructions+=23;goto B5709d9;
case 0x5709db:c.instructions+=22;goto B5709db;
case 0x5709de:c.instructions+=21;goto B5709de;
case 0x5709e1:c.instructions+=20;goto B5709e1;
case 0x5709e4:c.instructions+=19;goto B5709e4;
case 0x5709e7:c.instructions+=18;goto B5709e7;
case 0x5709ea:c.instructions+=17;goto B5709ea;
case 0x5709ec:c.instructions+=16;goto B5709ec;
case 0x5709ef:c.instructions+=15;goto B5709ef;
case 0x5709f2:c.instructions+=14;goto B5709f2;
case 0x5709f4:c.instructions+=13;goto B5709f4;
case 0x5709f6:c.instructions+=12;goto B5709f6;
case 0x5709f8:c.instructions+=11;goto B5709f8;
case 0x5709fa:c.instructions+=10;goto B5709fa;
case 0x5709fc:c.instructions+=9;goto B5709fc;
case 0x5709fe:c.instructions+=8;goto B5709fe;
case 0x570a00:c.instructions+=7;goto B570a00;
case 0x570a06:c.instructions+=6;goto B570a06;
case 0x570a08:c.instructions+=5;goto B570a08;
case 0x570a0a:c.instructions+=4;goto B570a0a;
case 0x570a0c:c.instructions+=3;goto B570a0c;
case 0x570a0f:c.instructions+=2;goto B570a0f;
case 0x570a11:c.instructions+=1;goto B570a11;
case 0x570a13:goto L570a13;
case 0x570a15:goto L570a15;
case 0x570a18:c.instructions+=2;goto B570a18;
case 0x570a19:c.instructions+=1;goto B570a19;
case 0x570a1b:goto L570a1b;
case 0x570a1c:c.instructions+=6;goto B570a1c;
case 0x570a1d:c.instructions+=5;goto B570a1d;
case 0x570a1f:c.instructions+=4;goto B570a1f;
case 0x570a20:c.instructions+=3;goto B570a20;
case 0x570a22:c.instructions+=2;goto B570a22;
case 0x570a23:c.instructions+=1;goto B570a23;
case 0x570a30:goto L570a30;
case 0x570a35:c.instructions+=1;goto B570a35;
case 0x570a40:goto L570a40;
case 0x570a45:c.instructions+=2;goto B570a45;
case 0x570a48:c.instructions+=1;goto B570a48;
case 0x570a4a:goto L570a4a;
case 0x570a4d:c.instructions+=1;goto B570a4d;
case 0x570a4f:goto L570a4f;
case 0x570a52:c.instructions+=1;goto B570a52;
case 0x570a54:goto L570a54;
case 0x570a56:c.instructions+=1;goto B570a56;
case 0x570a57:goto L570a57;
case 0x570a59:c.instructions+=1;goto B570a59;
case 0x570a60:goto L570a60;
case 0x570a62:c.instructions+=1;goto B570a62;
case 0x570a70:goto L570a70;
case 0x570a72:c.instructions+=1;goto B570a72;
case 0x570a80:goto L570a80;
case 0x570a82:c.instructions+=2;goto B570a82;
case 0x570a84:c.instructions+=1;goto B570a84;
case 0x570a90:goto L570a90;
case 0x570a92:c.instructions+=2;goto B570a92;
case 0x570a94:c.instructions+=1;goto B570a94;
case 0x570aa0:goto L570aa0;
case 0x570aa3:c.instructions+=1;goto B570aa3;
case 0x570ab0:goto L570ab0;
case 0x570ab2:c.instructions+=2;goto B570ab2;
case 0x570ab6:c.instructions+=1;goto B570ab6;
case 0x570ac0:goto L570ac0;
case 0x570ac4:c.instructions+=4;goto B570ac4;
case 0x570aca:c.instructions+=3;goto B570aca;
case 0x570acb:c.instructions+=2;goto B570acb;
case 0x570acc:c.instructions+=1;goto B570acc;
case 0x570ad1:goto L570ad1;
case 0x570ad4:c.instructions+=1;goto B570ad4;
case 0x570ae0:goto L570ae0;
case 0x570ae4:c.instructions+=7;goto B570ae4;
case 0x570ae8:c.instructions+=6;goto B570ae8;
case 0x570aeb:c.instructions+=5;goto B570aeb;
case 0x570aed:c.instructions+=4;goto B570aed;
case 0x570af2:c.instructions+=3;goto B570af2;
case 0x570af4:c.instructions+=2;goto B570af4;
case 0x570af7:c.instructions+=1;goto B570af7;
case 0x570af9:goto L570af9;
case 0x570afd:goto L570afd;
case 0x570b01:c.instructions+=6;goto B570b01;
case 0x570b05:c.instructions+=5;goto B570b05;
case 0x570b08:c.instructions+=4;goto B570b08;
case 0x570b0b:c.instructions+=3;goto B570b0b;
case 0x570b0d:c.instructions+=2;goto B570b0d;
case 0x570b10:c.instructions+=1;goto B570b10;
case 0x570b12:goto L570b12;
case 0x570b16:goto L570b16;
case 0x570b1a:c.instructions+=6;goto B570b1a;
case 0x570b1e:c.instructions+=5;goto B570b1e;
case 0x570b21:c.instructions+=4;goto B570b21;
case 0x570b24:c.instructions+=3;goto B570b24;
case 0x570b26:c.instructions+=2;goto B570b26;
case 0x570b29:c.instructions+=1;goto B570b29;
case 0x570b2b:goto L570b2b;
case 0x570b32:goto L570b32;
case 0x570b40:goto L570b40;
case 0x570b44:c.instructions+=7;goto B570b44;
case 0x570b48:c.instructions+=6;goto B570b48;
case 0x570b4b:c.instructions+=5;goto B570b4b;
case 0x570b4e:c.instructions+=4;goto B570b4e;
case 0x570b53:c.instructions+=3;goto B570b53;
case 0x570b55:c.instructions+=2;goto B570b55;
case 0x570b58:c.instructions+=1;goto B570b58;
case 0x570b5a:goto L570b5a;
case 0x570b5e:goto L570b5e;
case 0x570b62:c.instructions+=6;goto B570b62;
case 0x570b66:c.instructions+=5;goto B570b66;
case 0x570b69:c.instructions+=4;goto B570b69;
case 0x570b6c:c.instructions+=3;goto B570b6c;
case 0x570b6e:c.instructions+=2;goto B570b6e;
case 0x570b71:c.instructions+=1;goto B570b71;
case 0x570b73:goto L570b73;
case 0x570b77:goto L570b77;
case 0x570b7b:c.instructions+=6;goto B570b7b;
case 0x570b7f:c.instructions+=5;goto B570b7f;
case 0x570b82:c.instructions+=4;goto B570b82;
case 0x570b85:c.instructions+=3;goto B570b85;
case 0x570b87:c.instructions+=2;goto B570b87;
case 0x570b8a:c.instructions+=1;goto B570b8a;
case 0x570b8c:goto L570b8c;
case 0x570b93:goto L570b93;
case 0x570ba0:goto L570ba0;
case 0x570ba4:c.instructions+=7;goto B570ba4;
case 0x570ba8:c.instructions+=6;goto B570ba8;
case 0x570baa:c.instructions+=5;goto B570baa;
case 0x570bad:c.instructions+=4;goto B570bad;
case 0x570bb2:c.instructions+=3;goto B570bb2;
case 0x570bb4:c.instructions+=2;goto B570bb4;
case 0x570bb7:c.instructions+=1;goto B570bb7;
case 0x570bb9:goto L570bb9;
case 0x570bbd:goto L570bbd;
case 0x570bc1:c.instructions+=6;goto B570bc1;
case 0x570bc5:c.instructions+=5;goto B570bc5;
case 0x570bc8:c.instructions+=4;goto B570bc8;
case 0x570bcb:c.instructions+=3;goto B570bcb;
case 0x570bcd:c.instructions+=2;goto B570bcd;
case 0x570bd0:c.instructions+=1;goto B570bd0;
case 0x570bd2:goto L570bd2;
case 0x570bd6:goto L570bd6;
case 0x570bda:c.instructions+=6;goto B570bda;
case 0x570bde:c.instructions+=5;goto B570bde;
case 0x570be1:c.instructions+=4;goto B570be1;
case 0x570be4:c.instructions+=3;goto B570be4;
case 0x570be6:c.instructions+=2;goto B570be6;
case 0x570be9:c.instructions+=1;goto B570be9;
case 0x570beb:goto L570beb;
case 0x570bf2:goto L570bf2;
case 0x570c00:goto L570c00;
case 0x570c03:c.instructions+=1;goto B570c03;
case 0x570c08:goto L570c08;
case 0x570c0c:c.instructions+=1;goto B570c0c;
case 0x570c11:goto L570c11;
case 0x570c15:c.instructions+=5;goto B570c15;
case 0x570c1a:c.instructions+=4;goto B570c1a;
case 0x570c20:c.instructions+=3;goto B570c20;
case 0x570c21:c.instructions+=2;goto B570c21;
case 0x570c22:c.instructions+=1;goto B570c22;
case 0x570c27:goto L570c27;
case 0x570c2b:c.instructions+=6;goto B570c2b;
case 0x570c2e:c.instructions+=5;goto B570c2e;
case 0x570c32:c.instructions+=4;goto B570c32;
case 0x570c38:c.instructions+=3;goto B570c38;
case 0x570c3a:c.instructions+=2;goto B570c3a;
case 0x570c3d:c.instructions+=1;goto B570c3d;
case 0x570c3f:goto L570c3f;
case 0x570c47:goto L570c47;
case 0x570c4d:c.instructions+=8;goto B570c4d;
case 0x570c51:c.instructions+=7;goto B570c51;
case 0x570c55:c.instructions+=6;goto B570c55;
case 0x570c5b:c.instructions+=5;goto B570c5b;
case 0x570c5f:c.instructions+=4;goto B570c5f;
case 0x570c65:c.instructions+=3;goto B570c65;
case 0x570c67:c.instructions+=2;goto B570c67;
case 0x570c6a:c.instructions+=1;goto B570c6a;
case 0x570c6c:goto L570c6c;
case 0x570c6e:c.instructions+=2;goto B570c6e;
case 0x570c74:c.instructions+=1;goto B570c74;
case 0x570c78:goto L570c78;
case 0x570c7e:c.instructions+=4;goto B570c7e;
case 0x570c83:c.instructions+=3;goto B570c83;
case 0x570c85:c.instructions+=2;goto B570c85;
case 0x570c88:c.instructions+=1;goto B570c88;
case 0x570c8a:goto L570c8a;
case 0x570c8e:c.instructions+=8;goto B570c8e;
case 0x570c94:c.instructions+=7;goto B570c94;
case 0x570c98:c.instructions+=6;goto B570c98;
case 0x570c9d:c.instructions+=5;goto B570c9d;
case 0x570ca1:c.instructions+=4;goto B570ca1;
case 0x570ca6:c.instructions+=3;goto B570ca6;
case 0x570cac:c.instructions+=2;goto B570cac;
case 0x570cb2:c.instructions+=1;goto B570cb2;
case 0x570cb4:goto L570cb4;
case 0x570cb6:goto L570cb6;
case 0x570cbc:c.instructions+=4;goto B570cbc;
case 0x570cc2:c.instructions+=3;goto B570cc2;
case 0x570cc4:c.instructions+=2;goto B570cc4;
case 0x570cc7:c.instructions+=1;goto B570cc7;
case 0x570cc9:goto L570cc9;
case 0x570cce:c.instructions+=2;goto B570cce;
case 0x570cd3:c.instructions+=1;goto B570cd3;
case 0x570cd5:goto L570cd5;
case 0x570cdb:c.instructions+=4;goto B570cdb;
case 0x570ce1:c.instructions+=3;goto B570ce1;
case 0x570ce3:c.instructions+=2;goto B570ce3;
case 0x570ce6:c.instructions+=1;goto B570ce6;
case 0x570ce8:goto L570ce8;
case 0x570cee:c.instructions+=1;goto B570cee;
case 0x570cf0:goto L570cf0;
case 0x570cf6:goto L570cf6;
case 0x570cfc:goto L570cfc;
case 0x570d01:c.instructions+=2;goto B570d01;
case 0x570d03:c.instructions+=1;goto B570d03;
case 0x570d05:goto L570d05;
case 0x570d0b:c.instructions+=2;goto B570d0b;
case 0x570d0d:c.instructions+=1;goto B570d0d;
case 0x570d0f:goto L570d0f;
case 0x570d15:c.instructions+=2;goto B570d15;
case 0x570d17:c.instructions+=1;goto B570d17;
case 0x570d19:goto L570d19;
case 0x570d1c:c.instructions+=4;goto B570d1c;
case 0x570d1d:c.instructions+=3;goto B570d1d;
case 0x570d1f:c.instructions+=2;goto B570d1f;
case 0x570d21:c.instructions+=1;goto B570d21;
case 0x570d23:goto L570d23;
case 0x570d24:c.instructions+=2;goto B570d24;
case 0x570d29:c.instructions+=1;goto B570d29;
case 0x570d30:goto L570d30;
case 0x570d33:c.instructions+=1;goto B570d33;
case 0x570d38:goto L570d38;
case 0x570d3d:c.instructions+=5;goto B570d3d;
case 0x570d40:c.instructions+=4;goto B570d40;
case 0x570d41:c.instructions+=3;goto B570d41;
case 0x570d44:c.instructions+=2;goto B570d44;
case 0x570d46:c.instructions+=1;goto B570d46;
case 0x570d48:goto L570d48;
case 0x570d49:goto L570d49;
case 0x570d4a:goto L570d4a;
case 0x570d4f:c.instructions+=2;goto B570d4f;
case 0x570d51:c.instructions+=1;goto B570d51;
case 0x570d53:goto L570d53;
case 0x570d58:c.instructions+=2;goto B570d58;
case 0x570d5a:c.instructions+=1;goto B570d5a;
case 0x570d5c:goto L570d5c;
case 0x570d5f:c.instructions+=1;goto B570d5f;
case 0x570d64:goto L570d64;
case 0x570d67:c.instructions+=1;goto B570d67;
case 0x570d70:goto L570d70;
case 0x570d71:c.instructions+=4;goto B570d71;
case 0x570d75:c.instructions+=3;goto B570d75;
case 0x570d77:c.instructions+=2;goto B570d77;
case 0x570d79:c.instructions+=1;goto B570d79;
case 0x570d7b:goto L570d7b;
case 0x570d80:c.instructions+=2;goto B570d80;
case 0x570d81:c.instructions+=1;goto B570d81;
case 0x570d82:goto L570d82;
case 0x570d83:c.instructions+=1;goto B570d83;
case 0x570d88:goto L570d88;
case 0x570d8b:c.instructions+=2;goto B570d8b;
case 0x570d8d:c.instructions+=1;goto B570d8d;
case 0x570d8f:goto L570d8f;
case 0x570d92:c.instructions+=2;goto B570d92;
case 0x570d93:c.instructions+=1;goto B570d93;
case 0x570d95:goto L570d95;
case 0x570d98:c.instructions+=2;goto B570d98;
case 0x570d99:c.instructions+=1;goto B570d99;
case 0x570d9a:goto L570d9a;
case 0x570d9b:c.instructions+=1;goto B570d9b;
case 0x570da0:goto L570da0;
case 0x570da2:c.instructions+=2;goto B570da2;
case 0x570da3:c.instructions+=1;goto B570da3;
case 0x570da5:goto L570da5;
case 0x570da8:c.instructions+=2;goto B570da8;
case 0x570daa:c.instructions+=1;goto B570daa;
case 0x570dac:goto L570dac;
case 0x570daf:c.instructions+=2;goto B570daf;
case 0x570db5:c.instructions+=1;goto B570db5;
case 0x570db7:goto L570db7;
case 0x570db8:c.instructions+=2;goto B570db8;
case 0x570db9:c.instructions+=1;goto B570db9;
case 0x570dba:goto L570dba;
case 0x570dbb:c.instructions+=3;goto B570dbb;
case 0x570dc0:c.instructions+=2;goto B570dc0;
case 0x570dc1:c.instructions+=1;goto B570dc1;
case 0x570dd0:goto L570dd0;
case 0x570dd4:c.instructions+=4;goto B570dd4;
case 0x570dd5:c.instructions+=3;goto B570dd5;
case 0x570dd8:c.instructions+=2;goto B570dd8;
case 0x570ddc:c.instructions+=1;goto B570ddc;
case 0x570dde:goto L570dde;
case 0x570de3:goto L570de3;
case 0x570de7:c.instructions+=7;goto B570de7;
case 0x570de8:c.instructions+=6;goto B570de8;
case 0x570dec:c.instructions+=5;goto B570dec;
case 0x570dee:c.instructions+=4;goto B570dee;
case 0x570df0:c.instructions+=3;goto B570df0;
case 0x570df4:c.instructions+=2;goto B570df4;
case 0x570df8:c.instructions+=1;goto B570df8;
case 0x570dfe:goto L570dfe;
case 0x570dff:c.instructions+=5;goto B570dff;
case 0x570e03:c.instructions+=4;goto B570e03;
case 0x570e04:c.instructions+=3;goto B570e04;
case 0x570e08:c.instructions+=2;goto B570e08;
case 0x570e09:c.instructions+=1;goto B570e09;
case 0x570e0b:goto L570e0b;
case 0x570e0f:c.instructions+=1;goto B570e0f;
case 0x570e10:goto L570e10;
case 0x570e14:c.instructions+=2;goto B570e14;
case 0x570e16:c.instructions+=1;goto B570e16;
case 0x570e18:goto L570e18;
case 0x570e1a:c.instructions+=4;goto B570e1a;
case 0x570e1c:c.instructions+=3;goto B570e1c;
case 0x570e1f:c.instructions+=2;goto B570e1f;
case 0x570e23:c.instructions+=1;goto B570e23;
case 0x570e25:goto L570e25;
case 0x570e28:c.instructions+=1;goto B570e28;
case 0x570e2a:goto L570e2a;
case 0x570e2f:c.instructions+=1;goto B570e2f;
case 0x570e33:goto L570e33;
case 0x570e35:c.instructions+=1;goto B570e35;
case 0x570e37:goto L570e37;
case 0x570e39:c.instructions+=1;goto B570e39;
case 0x570e3b:goto L570e3b;
case 0x570e3e:c.instructions+=7;goto B570e3e;
case 0x570e40:c.instructions+=6;goto B570e40;
case 0x570e42:c.instructions+=5;goto B570e42;
case 0x570e46:c.instructions+=4;goto B570e46;
case 0x570e49:c.instructions+=3;goto B570e49;
case 0x570e50:c.instructions+=2;goto B570e50;
case 0x570e55:c.instructions+=1;goto B570e55;
case 0x570e59:goto L570e59;
case 0x570e5b:goto L570e5b;
case 0x570e5d:c.instructions+=1;goto B570e5d;
case 0x570e60:goto L570e60;
case 0x570e62:goto L570e62;
case 0x570e66:c.instructions+=1;goto B570e66;
case 0x570e6a:goto L570e6a;
case 0x570e6c:goto L570e6c;
case 0x570e6f:c.instructions+=1;goto B570e6f;
case 0x570e71:goto L570e71;
case 0x570e75:c.instructions+=10;goto B570e75;
case 0x570e78:c.instructions+=9;goto B570e78;
case 0x570e79:c.instructions+=8;goto B570e79;
case 0x570e7c:c.instructions+=7;goto B570e7c;
case 0x570e7d:c.instructions+=6;goto B570e7d;
case 0x570e7e:c.instructions+=5;goto B570e7e;
case 0x570e7f:c.instructions+=4;goto B570e7f;
case 0x570e82:c.instructions+=3;goto B570e82;
case 0x570e83:c.instructions+=2;goto B570e83;
case 0x570e84:c.instructions+=1;goto B570e84;
case 0x570e89:goto L570e89;
case 0x570e8c:c.instructions+=2;goto B570e8c;
case 0x570e8e:c.instructions+=1;goto B570e8e;
case 0x570e90:goto L570e90;
case 0x570e92:c.instructions+=1;goto B570e92;
case 0x570e94:goto L570e94;
case 0x570e96:c.instructions+=5;goto B570e96;
case 0x570e98:c.instructions+=4;goto B570e98;
case 0x570e9a:c.instructions+=3;goto B570e9a;
case 0x570e9d:c.instructions+=2;goto B570e9d;
case 0x570ea0:c.instructions+=1;goto B570ea0;
case 0x570ea4:goto L570ea4;
case 0x570ea6:c.instructions+=1;goto B570ea6;
case 0x570ea8:goto L570ea8;
case 0x570eaa:c.instructions+=1;goto B570eaa;
case 0x570eac:goto L570eac;
case 0x570eae:c.instructions+=1;goto B570eae;
case 0x570eb0:goto L570eb0;
case 0x570eb3:c.instructions+=4;goto B570eb3;
case 0x570eb6:c.instructions+=3;goto B570eb6;
case 0x570eb8:c.instructions+=2;goto B570eb8;
case 0x570ebb:c.instructions+=1;goto B570ebb;
case 0x570ebe:goto L570ebe;
case 0x570ec0:goto L570ec0;
case 0x570ec2:c.instructions+=1;goto B570ec2;
case 0x570ec5:goto L570ec5;
case 0x570ec7:goto L570ec7;
case 0x570ecb:goto L570ecb;
case 0x570ece:c.instructions+=1;goto B570ece;
case 0x570ed2:goto L570ed2;
case 0x570ed5:c.instructions+=5;goto B570ed5;
case 0x570ed9:c.instructions+=4;goto B570ed9;
case 0x570edd:c.instructions+=3;goto B570edd;
case 0x570edf:c.instructions+=2;goto B570edf;
case 0x570ee3:c.instructions+=1;goto B570ee3;
case 0x570ee9:goto L570ee9;
case 0x570eea:c.instructions+=5;goto B570eea;
case 0x570eec:c.instructions+=4;goto B570eec;
case 0x570eed:c.instructions+=3;goto B570eed;
case 0x570eee:c.instructions+=2;goto B570eee;
case 0x570eef:c.instructions+=1;goto B570eef;
case 0x570ef0:goto L570ef0;
case 0x570ef4:c.instructions+=2;goto B570ef4;
case 0x570ef5:c.instructions+=1;goto B570ef5;
case 0x570f00:goto L570f00;
case 0x570f04:c.instructions+=6;goto B570f04;
case 0x570f05:c.instructions+=5;goto B570f05;
case 0x570f06:c.instructions+=4;goto B570f06;
case 0x570f0a:c.instructions+=3;goto B570f0a;
case 0x570f0d:c.instructions+=2;goto B570f0d;
case 0x570f0f:c.instructions+=1;goto B570f0f;
case 0x570f11:goto L570f11;
case 0x570f12:goto L570f12;
case 0x570f15:c.instructions+=3;goto B570f15;
case 0x570f18:c.instructions+=2;goto B570f18;
case 0x570f1c:c.instructions+=1;goto B570f1c;
case 0x570f1e:goto L570f1e;
case 0x570f1f:c.instructions+=3;goto B570f1f;
case 0x570f22:c.instructions+=2;goto B570f22;
case 0x570f23:c.instructions+=1;goto B570f23;
case 0x570f28:goto L570f28;
case 0x570f2b:c.instructions+=1;goto B570f2b;
case 0x570f32:goto L570f32;
case 0x570f34:c.instructions+=3;goto B570f34;
case 0x570f3a:c.instructions+=2;goto B570f3a;
case 0x570f3c:c.instructions+=1;goto B570f3c;
case 0x570f3e:goto L570f3e;
case 0x570f3f:goto L570f3f;
case 0x570f40:c.instructions+=2;goto B570f40;
case 0x570f41:c.instructions+=1;goto B570f41;
case 0x570f50:goto L570f50;
case 0x570f55:c.instructions+=2;goto B570f55;
case 0x570f57:c.instructions+=1;goto B570f57;
case 0x570f59:goto L570f59;
case 0x570f5e:goto L570f5e;
case 0x570f63:c.instructions+=2;goto B570f63;
case 0x570f65:c.instructions+=1;goto B570f65;
case 0x570f67:goto L570f67;
case 0x570f6c:goto L570f6c;
case 0x570f71:goto L570f71;
case 0x570f76:goto L570f76;
case 0x570f80:goto L570f80;
case 0x570f82:c.instructions+=4;goto B570f82;
case 0x570f87:c.instructions+=3;goto B570f87;
case 0x570f89:c.instructions+=2;goto B570f89;
case 0x570f8e:c.instructions+=1;goto B570f8e;
case 0x570f93:goto L570f93;
case 0x570f96:c.instructions+=2;goto B570f96;
case 0x570f9b:c.instructions+=1;goto B570f9b;
case 0x570fa0:goto L570fa0;
case 0x570fa4:c.instructions+=6;goto B570fa4;
case 0x570faa:c.instructions+=5;goto B570faa;
case 0x570fab:c.instructions+=4;goto B570fab;
case 0x570fb1:c.instructions+=3;goto B570fb1;
case 0x570fb3:c.instructions+=2;goto B570fb3;
case 0x570fb5:c.instructions+=1;goto B570fb5;
case 0x570fba:goto L570fba;
case 0x570fbc:goto L570fbc;
case 0x570fc0:c.instructions+=4;goto B570fc0;
case 0x570fc2:c.instructions+=3;goto B570fc2;
case 0x570fc3:c.instructions+=2;goto B570fc3;
case 0x570fc4:c.instructions+=1;goto B570fc4;
case 0x570fc9:goto L570fc9;
case 0x570fcc:c.instructions+=2;goto B570fcc;
case 0x570fcd:c.instructions+=1;goto B570fcd;
case 0x570fd0:goto L570fd0;
case 0x570fd1:c.instructions+=4;goto B570fd1;
case 0x570fd3:c.instructions+=3;goto B570fd3;
case 0x570fd9:c.instructions+=2;goto B570fd9;
case 0x570fdb:c.instructions+=1;goto B570fdb;
case 0x570fdd:goto L570fdd;
case 0x570fe1:c.instructions+=2;goto B570fe1;
case 0x570fe7:c.instructions+=1;goto B570fe7;
case 0x570fe9:goto L570fe9;
case 0x570fec:goto L570fec;
case 0x570ff0:c.instructions+=2;goto B570ff0;
case 0x570ff2:c.instructions+=1;goto B570ff2;
case 0x570ff4:goto L570ff4;
case 0x570ff7:goto L570ff7;
case 0x570ff8:c.instructions+=2;goto B570ff8;
case 0x570ff9:c.instructions+=1;goto B570ff9;
case 0x570ffe:goto L570ffe;
default:missing_instruction(c.pc);}
B570007:L570007:{c.instructions+=41;NFSU2_TR(0x570007);
s4(0x865250,u32(0x0ull));
}
B570011:{NFSU2_TR(0x570011);
s4(0x865254,u32(0x3f000000ull));
}
B57001b:{NFSU2_TR(0x57001b);
s4(0x865258,u32(0x40000000ull));
}
B570025:{NFSU2_TR(0x570025);
s4(0x86525c,u32(0xbfc00000ull));
}
B57002f:{NFSU2_TR(0x57002f);
s4(0x865260,u32(0x0ull));
}
B570039:{NFSU2_TR(0x570039);
s4(0x865264,u32(0x0ull));
}
B570043:{NFSU2_TR(0x570043);
s4(0x865268,u32(0xbf000000ull));
}
B57004d:{NFSU2_TR(0x57004d);
s4(0x86526c,u32(0x3f000000ull));
}
B570057:{NFSU2_TR(0x570057);
s4(0x865270,u32(0xbf000000ull));
}
B570061:{NFSU2_TR(0x570061);
s4(0x865274,u32(0x40000000ull));
}
B57006b:{NFSU2_TR(0x57006b);
s4(0x865278,u32(0xbfc00000ull));
}
B570075:{NFSU2_TR(0x570075);
s4(0x86527c,u32(0x0ull));
}
B57007f:{NFSU2_TR(0x57007f);
s4(0x865280,u32(0x0ull));
}
B570089:{NFSU2_TR(0x570089);
s4(0x865284,u32(0xc0a00000ull));
}
B570093:{NFSU2_TR(0x570093);
s4(0x865288,u32(0x40900000ull));
}
B57009d:{NFSU2_TR(0x57009d);
s4(0x86528c,u32(0x0ull));
}
B5700a7:{NFSU2_TR(0x5700a7);
s4(0x865290,u32(0x3f000000ull));
}
B5700b1:{NFSU2_TR(0x5700b1);
s4(0x865294,u32(0x40800000ull));
}
B5700bb:{NFSU2_TR(0x5700bb);
s4(0x865298,u32(0xc0900000ull));
}
B5700c5:{NFSU2_TR(0x5700c5);
s4(0x86529c,u32(0x0ull));
}
B5700cf:{NFSU2_TR(0x5700cf);
s4(0x8652a0,u32(0x0ull));
}
B5700d9:{NFSU2_TR(0x5700d9);
s4(0x8652a4,u32(0xbf800000ull));
}
B5700e3:{NFSU2_TR(0x5700e3);
s4(0x8652a8,u32(0x3fc00000ull));
}
B5700ed:{NFSU2_TR(0x5700ed);
s4(0x8652ac,u32(0x0ull));
}
B5700f7:{NFSU2_TR(0x5700f7);
s4(0x8652b0,u32(0x40000000ull));
}
B570101:{NFSU2_TR(0x570101);
s4(0x8652b4,u32(0xc0400000ull));
}
B57010b:{NFSU2_TR(0x57010b);
s4(0x8652b8,u32(0x0ull));
}
B570115:{NFSU2_TR(0x570115);
s4(0x8652bc,u32(0x0ull));
}
B57011f:{NFSU2_TR(0x57011f);
s4(0x8652c0,u32(0xc0a00000ull));
}
B570129:{NFSU2_TR(0x570129);
s4(0x8652c4,u32(0x41100000ull));
}
B570133:{NFSU2_TR(0x570133);
s4(0x8652c8,u32(0x0ull));
}
B57013d:{NFSU2_TR(0x57013d);
s4(0x8652cc,u32(0x0ull));
}
B570147:{NFSU2_TR(0x570147);
s4(0x8652d0,u32(0x40800000ull));
}
B570151:{NFSU2_TR(0x570151);
s4(0x8652d4,u32(0xc1100000ull));
}
B57015b:{NFSU2_TR(0x57015b);
s4(0x8652d8,u32(0x0ull));
}
B570165:{NFSU2_TR(0x570165);
s4(0x8652dc,u32(0x0ull));
}
B57016f:{NFSU2_TR(0x57016f);
s4(0x8652e0,u32(0xbf800000ull));
}
B570179:{NFSU2_TR(0x570179);
s4(0x8652e4,u32(0x40400000ull));
}
B570183:{NFSU2_TR(0x570183);
s4(0x8652e8,u32(0x0ull));
}
B57018d:{NFSU2_TR(0x57018d);
s4(0x8652ec,u32(0x0ull));
}
B570197:{NFSU2_TR(0x570197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57019cull));
TAIL_STATIC(0x43c9d0u,43c);
}
B57019c:L57019c:{c.instructions+=3;NFSU2_TR(0x57019c);
u8 U[4];
w4(U+0,u32(0x865270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5701a1:{NFSU2_TR(0x5701a1);
u8 U[4];
w4(U+0,u32(0x865270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5701a6:{NFSU2_TR(0x5701a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5701abull));
TAIL_STATIC(0x43c9d0u,43c);
}
B5701ab:L5701ab:{c.instructions+=3;NFSU2_TR(0x5701ab);
u8 U[4];
w4(U+0,u32(0x8652b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5701b0:{NFSU2_TR(0x5701b0);
u8 U[4];
w4(U+0,u32(0x8652b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5701b5:{NFSU2_TR(0x5701b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5701baull));
TAIL_STATIC(0x43c9d0u,43c);
}
B5701ba:L5701ba:{c.instructions+=3;NFSU2_TR(0x5701ba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5701bd:{NFSU2_TR(0x5701bd);
s4(0x864f18,u32(0x1ull));
}
B5701c7:{NFSU2_TR(0x5701c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5701d0:L5701d0:{c.instructions+=7;NFSU2_TR(0x5701d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5701d4:{NFSU2_TR(0x5701d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5701d5:{NFSU2_TR(0x5701d5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5701d7:{NFSU2_TR(0x5701d7);
u8 U[8];
__builtin_memmove((U+4),(R+24),2);
w1(R+512,u8((r2(R+0))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+4)));
w2(U+6,u16(u32(r2(R+0))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5701da:{NFSU2_TR(0x5701da);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5701de:{NFSU2_TR(0x5701de);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5701e2:{NFSU2_TR(0x5701e2);
if(r1(R+518)){{goto L57022e;}}
}
B5701e4:L5701e4:{c.instructions+=3;NFSU2_TR(0x5701e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5701e7:{NFSU2_TR(0x5701e7);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5701e9:{NFSU2_TR(0x5701e9);
if(r1(R+518)){{goto L570219;}}
}
B5701eb:L5701eb:{c.instructions+=2;NFSU2_TR(0x5701eb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5701ec:{NFSU2_TR(0x5701ec);
if(r1(R+518)){{goto L570203;}}
}
B5701ee:L5701ee:{c.instructions+=2;NFSU2_TR(0x5701ee);
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
B5701ef:{NFSU2_TR(0x5701ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570234;}}
}
B5701f1:L5701f1:{c.instructions+=4;NFSU2_TR(0x5701f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0xcb18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5701f8:{NFSU2_TR(0x5701f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5701ff:{NFSU2_TR(0x5701ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570200:{NFSU2_TR(0x570200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570203:L570203:{c.instructions+=8;NFSU2_TR(0x570203);
w4(R+0,u32(r2(R+0)));
}
B570206:{NFSU2_TR(0x570206);
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
B570207:{NFSU2_TR(0x570207);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57020b:{NFSU2_TR(0x57020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57020e:{NFSU2_TR(0x57020e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57020f:{NFSU2_TR(0x57020f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B570213:{NFSU2_TR(0x570213);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570216:{NFSU2_TR(0x570216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570219:L570219:{c.instructions+=7;NFSU2_TR(0x570219);
w4(R+8,u32(r2(R+0)));
}
B57021c:{NFSU2_TR(0x57021c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570220:{NFSU2_TR(0x570220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570223:{NFSU2_TR(0x570223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570224:{NFSU2_TR(0x570224);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B570228:{NFSU2_TR(0x570228);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57022b:{NFSU2_TR(0x57022b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57022e:L57022e:{c.instructions+=2;NFSU2_TR(0x57022e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570231:{NFSU2_TR(0x570231);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570234:L570234:{c.instructions+=2;NFSU2_TR(0x570234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570235:{NFSU2_TR(0x570235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570240:L570240:{c.instructions+=9;NFSU2_TR(0x570240);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570241:{NFSU2_TR(0x570241);
__builtin_memmove((R+20),(R+16),4);
}
B570243:{NFSU2_TR(0x570243);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B570246:{NFSU2_TR(0x570246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B570249:{NFSU2_TR(0x570249);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B57024d:{NFSU2_TR(0x57024d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B570250:{NFSU2_TR(0x570250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570251:{NFSU2_TR(0x570251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570252:{NFSU2_TR(0x570252);
if(r1(R+518)){{goto L570438;}}
}
B570258:L570258:{c.instructions+=5;NFSU2_TR(0x570258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57025b:{NFSU2_TR(0x57025b);
w4(R+28,u32(r2(R+0)));
}
B57025e:{NFSU2_TR(0x57025e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570261:{NFSU2_TR(0x570261);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B570264:{NFSU2_TR(0x570264);
if(r1(R+518)){{goto L5703a0;}}
}
B57026a:L57026a:{c.instructions+=2;NFSU2_TR(0x57026a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B57026b:{NFSU2_TR(0x57026b);
if(r1(R+518)){{goto L57032c;}}
}
B570271:L570271:{c.instructions+=2;NFSU2_TR(0x570271);
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
B570272:{NFSU2_TR(0x570272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570438;}}
}
B570278:L570278:{c.instructions+=24;NFSU2_TR(0x570278);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57027b:{NFSU2_TR(0x57027b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570280:{NFSU2_TR(0x570280);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570282:{NFSU2_TR(0x570282);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B570286:{NFSU2_TR(0x570286);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570289:{NFSU2_TR(0x570289);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57028a:{NFSU2_TR(0x57028a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57028d:{NFSU2_TR(0x57028d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570290:{NFSU2_TR(0x570290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570291:{NFSU2_TR(0x570291);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570294:{NFSU2_TR(0x570294);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570298:{NFSU2_TR(0x570298);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57029b:{NFSU2_TR(0x57029b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57029f:{NFSU2_TR(0x57029f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5702a2:{NFSU2_TR(0x5702a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5702a6:{NFSU2_TR(0x5702a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5702a9:{NFSU2_TR(0x5702a9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5702ad:{NFSU2_TR(0x5702ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5702b1:{NFSU2_TR(0x5702b1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5702b3:{NFSU2_TR(0x5702b3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5702b7:{NFSU2_TR(0x5702b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5702b8:{NFSU2_TR(0x5702b8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5702bc:{NFSU2_TR(0x5702bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5702c0:{NFSU2_TR(0x5702c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5702c5ull));
TAIL_STATIC(0x43d100u,43d);
}
B5702c5:L5702c5:{c.instructions+=30;NFSU2_TR(0x5702c5);
__builtin_memmove((R+4),(R+28),4);
}
B5702c7:{NFSU2_TR(0x5702c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5702ca:{NFSU2_TR(0x5702ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5702cd:{NFSU2_TR(0x5702cd);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5702d0:{NFSU2_TR(0x5702d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5702d3:{NFSU2_TR(0x5702d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5702d6:{NFSU2_TR(0x5702d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5702d9:{NFSU2_TR(0x5702d9);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5702dc:{NFSU2_TR(0x5702dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5702de:{NFSU2_TR(0x5702de);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5702e1:{NFSU2_TR(0x5702e1);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5702e6:{NFSU2_TR(0x5702e6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5702e9:{NFSU2_TR(0x5702e9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5702ec:{NFSU2_TR(0x5702ec);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5702ef:{NFSU2_TR(0x5702ef);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5702f3:{NFSU2_TR(0x5702f3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5702f6:{NFSU2_TR(0x5702f6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5702f9:{NFSU2_TR(0x5702f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5702fd:{NFSU2_TR(0x5702fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570301:{NFSU2_TR(0x570301);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570305:{NFSU2_TR(0x570305);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570309:{NFSU2_TR(0x570309);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B57030b:{NFSU2_TR(0x57030b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57030f:{NFSU2_TR(0x57030f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570313:{NFSU2_TR(0x570313);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B570317:{NFSU2_TR(0x570317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570318:{NFSU2_TR(0x570318);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57031c:{NFSU2_TR(0x57031c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57031d:{NFSU2_TR(0x57031d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57031e:{NFSU2_TR(0x57031e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570323ull));
TAIL_STATIC(0x43d100u,43d);
}
B570323:L570323:{c.instructions+=6;NFSU2_TR(0x570323);
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
B570326:{NFSU2_TR(0x570326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570327:{NFSU2_TR(0x570327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570328:{NFSU2_TR(0x570328);
__builtin_memmove((R+16),(R+20),4);
}
B57032a:{NFSU2_TR(0x57032a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57032b:{NFSU2_TR(0x57032b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57032c:L57032c:{c.instructions+=28;NFSU2_TR(0x57032c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57032f:{NFSU2_TR(0x57032f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570332:{NFSU2_TR(0x570332);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570335:{NFSU2_TR(0x570335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B570337:{NFSU2_TR(0x570337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57033a:{NFSU2_TR(0x57033a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B57033c:{NFSU2_TR(0x57033c);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57033f:{NFSU2_TR(0x57033f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570342:{NFSU2_TR(0x570342);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B570345:{NFSU2_TR(0x570345);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570348:{NFSU2_TR(0x570348);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B57034c:{NFSU2_TR(0x57034c);
{u32 ea_=u32(r4(R+24)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570350:{NFSU2_TR(0x570350);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570354:{NFSU2_TR(0x570354);
{u32 ea_=u32(r4(R+24)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570358:{NFSU2_TR(0x570358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B57035b:{NFSU2_TR(0x57035b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57035f:{NFSU2_TR(0x57035f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B570361:{NFSU2_TR(0x570361);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570364:{NFSU2_TR(0x570364);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570367:{NFSU2_TR(0x570367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B570369:{NFSU2_TR(0x570369);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57036d:{NFSU2_TR(0x57036d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570370:{NFSU2_TR(0x570370);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570373:{NFSU2_TR(0x570373);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570376:{NFSU2_TR(0x570376);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57037c:{NFSU2_TR(0x57037c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57037e:{NFSU2_TR(0x57037e);
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
B570381:{NFSU2_TR(0x570381);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570438;}}
}
B570387:L570387:{c.instructions+=12;NFSU2_TR(0x570387);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57038a:{NFSU2_TR(0x57038a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B57038c:{NFSU2_TR(0x57038c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57038f:{NFSU2_TR(0x57038f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570392:{NFSU2_TR(0x570392);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B570394:{NFSU2_TR(0x570394);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570397:{NFSU2_TR(0x570397);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57039a:{NFSU2_TR(0x57039a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57039b:{NFSU2_TR(0x57039b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57039c:{NFSU2_TR(0x57039c);
__builtin_memmove((R+16),(R+20),4);
}
B57039e:{NFSU2_TR(0x57039e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57039f:{NFSU2_TR(0x57039f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5703a0:L5703a0:{c.instructions+=40;NFSU2_TR(0x5703a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5703a3:{NFSU2_TR(0x5703a3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5703a7:{NFSU2_TR(0x5703a7);
{u32 ea_=u32(r4(R+24)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703ab:{NFSU2_TR(0x5703ab);
{u32 ea_=u32(r4(R+24)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703af:{NFSU2_TR(0x5703af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5703b2:{NFSU2_TR(0x5703b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703b6:{NFSU2_TR(0x5703b6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5703b8:{NFSU2_TR(0x5703b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703bb:{NFSU2_TR(0x5703bb);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5703be:{NFSU2_TR(0x5703be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703c1:{NFSU2_TR(0x5703c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703c5:{NFSU2_TR(0x5703c5);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5703c8:{NFSU2_TR(0x5703c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703cb:{NFSU2_TR(0x5703cb);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703ce:{NFSU2_TR(0x5703ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703d1:{NFSU2_TR(0x5703d1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703d4:{NFSU2_TR(0x5703d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703d8:{NFSU2_TR(0x5703d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5703da:{NFSU2_TR(0x5703da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5703dc:{NFSU2_TR(0x5703dc);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5703df:{NFSU2_TR(0x5703df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5703e1:{NFSU2_TR(0x5703e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703e5:{NFSU2_TR(0x5703e5);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5703e8:{NFSU2_TR(0x5703e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703eb:{NFSU2_TR(0x5703eb);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703ee:{NFSU2_TR(0x5703ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703f1:{NFSU2_TR(0x5703f1);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5703f4:{NFSU2_TR(0x5703f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5703f8:{NFSU2_TR(0x5703f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5703fa:{NFSU2_TR(0x5703fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5703fd:{NFSU2_TR(0x5703fd);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570400:{NFSU2_TR(0x570400);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570403:{NFSU2_TR(0x570403);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570407:{NFSU2_TR(0x570407);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57040a:{NFSU2_TR(0x57040a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57040d:{NFSU2_TR(0x57040d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570410:{NFSU2_TR(0x570410);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570416:{NFSU2_TR(0x570416);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570418:{NFSU2_TR(0x570418);
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
B57041b:{NFSU2_TR(0x57041b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570438;}}
}
B57041d:L57041d:{c.instructions+=9;NFSU2_TR(0x57041d);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570420:{NFSU2_TR(0x570420);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570423:{NFSU2_TR(0x570423);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570426:{NFSU2_TR(0x570426);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570429:{NFSU2_TR(0x570429);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57042c:{NFSU2_TR(0x57042c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57042f:{NFSU2_TR(0x57042f);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570432:{NFSU2_TR(0x570432);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B570435:{NFSU2_TR(0x570435);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570438:L570438:{c.instructions+=5;NFSU2_TR(0x570438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570439:{NFSU2_TR(0x570439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57043a:{NFSU2_TR(0x57043a);
__builtin_memmove((R+16),(R+20),4);
}
B57043c:{NFSU2_TR(0x57043c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57043d:{NFSU2_TR(0x57043d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570440:L570440:{c.instructions+=22;NFSU2_TR(0x570440);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570441:{NFSU2_TR(0x570441);
__builtin_memmove((R+20),(R+16),4);
}
B570443:{NFSU2_TR(0x570443);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B570446:{NFSU2_TR(0x570446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B570449:{NFSU2_TR(0x570449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57044c:{NFSU2_TR(0x57044c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57044f:{NFSU2_TR(0x57044f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B570452:{NFSU2_TR(0x570452);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570456:{NFSU2_TR(0x570456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570459:{NFSU2_TR(0x570459);
__builtin_memmove((R+8),(R+16),4);
}
B57045d:{NFSU2_TR(0x57045d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57045e:{NFSU2_TR(0x57045e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B570462:{NFSU2_TR(0x570462);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570465:{NFSU2_TR(0x570465);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B570468:{NFSU2_TR(0x570468);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57046b:{NFSU2_TR(0x57046b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B57046d:{NFSU2_TR(0x57046d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57046e:{NFSU2_TR(0x57046e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B570472:{NFSU2_TR(0x570472);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570476:{NFSU2_TR(0x570476);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570477:{NFSU2_TR(0x570477);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57047f:{NFSU2_TR(0x57047f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570484ull));
TAIL_STATIC(0x43c9b0u,43c);
}
B570484:L570484:{c.instructions+=7;NFSU2_TR(0x570484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570487:{NFSU2_TR(0x570487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57048a:{NFSU2_TR(0x57048a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57048e:{NFSU2_TR(0x57048e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57048f:{NFSU2_TR(0x57048f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570490:{NFSU2_TR(0x570490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570491:{NFSU2_TR(0x570491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570496ull));
TAIL_STATIC(0x43c9b0u,43c);
}
B570496:L570496:{c.instructions+=4;NFSU2_TR(0x570496);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570499:{NFSU2_TR(0x570499);
__builtin_memmove((R+16),(R+20),4);
}
B57049b:{NFSU2_TR(0x57049b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57049c:{NFSU2_TR(0x57049c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5704a0:L5704a0:{c.instructions+=4;NFSU2_TR(0x5704a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5704a1:{NFSU2_TR(0x5704a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5704a4:{NFSU2_TR(0x5704a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5704a6:{NFSU2_TR(0x5704a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5704bd;}}
}
B5704a8:L5704a8:{c.instructions+=5;NFSU2_TR(0x5704a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5704ab:{NFSU2_TR(0x5704ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5704af:{NFSU2_TR(0x5704af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5704b0:{NFSU2_TR(0x5704b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5704b1:{NFSU2_TR(0x5704b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5704b6ull));
TAIL_STATIC(0x43c240u,43c);
}
B5704b6:L5704b6:{c.instructions+=3;NFSU2_TR(0x5704b6);
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
B5704b9:{NFSU2_TR(0x5704b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5704ba:{NFSU2_TR(0x5704ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5704bd:L5704bd:{c.instructions+=2;NFSU2_TR(0x5704bd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5704c0:{NFSU2_TR(0x5704c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5704fc;}}
}
B5704c2:L5704c2:{c.instructions+=9;NFSU2_TR(0x5704c2);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704c5:{NFSU2_TR(0x5704c5);
{u32 ea_=u32(u32(7996244u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5704cb:{NFSU2_TR(0x5704cb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5704cf:{NFSU2_TR(0x5704cf);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704d2:{NFSU2_TR(0x5704d2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704d6:{NFSU2_TR(0x5704d6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5704d8:{NFSU2_TR(0x5704d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5704da:{NFSU2_TR(0x5704da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5704dd:{NFSU2_TR(0x5704dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5704e5;}}
}
B5704df:L5704df:{c.instructions+=2;NFSU2_TR(0x5704df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5704e1:{NFSU2_TR(0x5704e1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704e5:L5704e5:{c.instructions+=5;NFSU2_TR(0x5704e5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704e9:{NFSU2_TR(0x5704e9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5704eb:{NFSU2_TR(0x5704eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5704ed:{NFSU2_TR(0x5704ed);
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
B5704f0:{NFSU2_TR(0x5704f0);
if(r1(R+514)){{goto L570500;}}
}
B5704f2:L5704f2:{c.instructions+=4;NFSU2_TR(0x5704f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5704f4:{NFSU2_TR(0x5704f4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5704f8:{NFSU2_TR(0x5704f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5704f9:{NFSU2_TR(0x5704f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5704fc:L5704fc:{c.instructions+=1;NFSU2_TR(0x5704fc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570500:L570500:{c.instructions+=2;NFSU2_TR(0x570500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B570501:{NFSU2_TR(0x570501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570510:L570510:{c.instructions+=23;NFSU2_TR(0x570510);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570511:{NFSU2_TR(0x570511);
__builtin_memmove((R+20),(R+16),4);
}
B570513:{NFSU2_TR(0x570513);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B570516:{NFSU2_TR(0x570516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B570519:{NFSU2_TR(0x570519);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B57051d:{NFSU2_TR(0x57051d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570520:{NFSU2_TR(0x570520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570521:{NFSU2_TR(0x570521);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570522:{NFSU2_TR(0x570522);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B570525:{NFSU2_TR(0x570525);
__builtin_memmove((R+4),(R+0),4);
}
B570527:{NFSU2_TR(0x570527);
w4(R+4,u32(0-u32(r4(R+4))));
}
B570529:{NFSU2_TR(0x570529);
__builtin_memmove((R+12),(R+0),4);
}
B57052b:{NFSU2_TR(0x57052b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57052f:{NFSU2_TR(0x57052f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B570532:{NFSU2_TR(0x570532);
w4(R+4,u32(0x1ull));
}
B570537:{NFSU2_TR(0x570537);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B57053b:{NFSU2_TR(0x57053b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B57053d:{NFSU2_TR(0x57053d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57053e:{NFSU2_TR(0x57053e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B570541:{NFSU2_TR(0x570541);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570545:{NFSU2_TR(0x570545);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570549:{NFSU2_TR(0x570549);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57054d:{NFSU2_TR(0x57054d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B570555:L570555:{c.instructions+=2;NFSU2_TR(0x570555);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570558:{NFSU2_TR(0x570558);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5705a2;}}
}
B57055a:L57055a:{c.instructions+=18;NFSU2_TR(0x57055a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57055c:{NFSU2_TR(0x57055c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57055d:{NFSU2_TR(0x57055d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570560:{NFSU2_TR(0x570560);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B570564:{NFSU2_TR(0x570564);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570568:{NFSU2_TR(0x570568);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57056b:{NFSU2_TR(0x57056b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57056e:{NFSU2_TR(0x57056e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570572:{NFSU2_TR(0x570572);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570575:{NFSU2_TR(0x570575);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570578:{NFSU2_TR(0x570578);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57057c:{NFSU2_TR(0x57057c);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57057f:{NFSU2_TR(0x57057f);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570582:{NFSU2_TR(0x570582);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570586:{NFSU2_TR(0x570586);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57058a:{NFSU2_TR(0x57058a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57058d:{NFSU2_TR(0x57058d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57058e:{NFSU2_TR(0x57058e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57058f:L57058f:{c.instructions+=2;NFSU2_TR(0x57058f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570590:{NFSU2_TR(0x570590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570595ull));
TAIL_STATIC(0x43d100u,43d);
}
B570595:L570595:{c.instructions+=4;NFSU2_TR(0x570595);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570599:{NFSU2_TR(0x570599);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57059d:{NFSU2_TR(0x57059d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5705a0:{NFSU2_TR(0x5705a0);
{goto L570616;}
}
B5705a2:L5705a2:{c.instructions+=2;NFSU2_TR(0x5705a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5705a4:{NFSU2_TR(0x5705a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5705fa;}}
}
B5705a6:L5705a6:{c.instructions+=28;NFSU2_TR(0x5705a6);
__builtin_memmove((R+4),(R+8),4);
}
B5705a8:{NFSU2_TR(0x5705a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5705ab:{NFSU2_TR(0x5705ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5705ae:{NFSU2_TR(0x5705ae);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5705b2:{NFSU2_TR(0x5705b2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5705b6:{NFSU2_TR(0x5705b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5705b9:{NFSU2_TR(0x5705b9);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5705bc:{NFSU2_TR(0x5705bc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5705be:{NFSU2_TR(0x5705be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5705c2:{NFSU2_TR(0x5705c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+12)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5705c4:{NFSU2_TR(0x5705c4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5705c8:{NFSU2_TR(0x5705c8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5705cb:{NFSU2_TR(0x5705cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5705cf:{NFSU2_TR(0x5705cf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5705d2:{NFSU2_TR(0x5705d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5705d3:{NFSU2_TR(0x5705d3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5705d7:{NFSU2_TR(0x5705d7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5705da:{NFSU2_TR(0x5705da);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5705dd:{NFSU2_TR(0x5705dd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5705e1:{NFSU2_TR(0x5705e1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5705e4:{NFSU2_TR(0x5705e4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5705e7:{NFSU2_TR(0x5705e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5705eb:{NFSU2_TR(0x5705eb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5705ef:{NFSU2_TR(0x5705ef);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5705f3:{NFSU2_TR(0x5705f3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5705f6:{NFSU2_TR(0x5705f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5705f7:{NFSU2_TR(0x5705f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5705f8:{NFSU2_TR(0x5705f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57058fu);}goto L57058f;}
}
B5705fa:L5705fa:{c.instructions+=10;NFSU2_TR(0x5705fa);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5705fd:{NFSU2_TR(0x5705fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570600:{NFSU2_TR(0x570600);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570602:{NFSU2_TR(0x570602);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570606:{NFSU2_TR(0x570606);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570609:{NFSU2_TR(0x570609);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57060c:{NFSU2_TR(0x57060c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57060e:{NFSU2_TR(0x57060e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B570610:{NFSU2_TR(0x570610);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570613:{NFSU2_TR(0x570613);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570616:L570616:{c.instructions+=9;NFSU2_TR(0x570616);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B57061a:{NFSU2_TR(0x57061a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57061e:{NFSU2_TR(0x57061e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B570621:{NFSU2_TR(0x570621);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B570622:{NFSU2_TR(0x570622);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B570625:{NFSU2_TR(0x570625);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570626:{NFSU2_TR(0x570626);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57062a:{NFSU2_TR(0x57062a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57062e:{NFSU2_TR(0x57062e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570555u);}goto L570555;}}
}
B570634:L570634:{c.instructions+=6;NFSU2_TR(0x570634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570635:{NFSU2_TR(0x570635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570636:{NFSU2_TR(0x570636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570637:{NFSU2_TR(0x570637);
__builtin_memmove((R+16),(R+20),4);
}
B570639:{NFSU2_TR(0x570639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57063a:{NFSU2_TR(0x57063a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570640:L570640:{c.instructions+=12;NFSU2_TR(0x570640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570641:{NFSU2_TR(0x570641);
__builtin_memmove((R+20),(R+16),4);
}
B570643:{NFSU2_TR(0x570643);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B570646:{NFSU2_TR(0x570646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B570649:{NFSU2_TR(0x570649);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57064a:{NFSU2_TR(0x57064a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57064b:{NFSU2_TR(0x57064b);
__builtin_memmove((R+24),(R+4),4);
}
B57064d:{NFSU2_TR(0x57064d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B570650:{NFSU2_TR(0x570650);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B570652:{NFSU2_TR(0x570652);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B570654:{NFSU2_TR(0x570654);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570655:{NFSU2_TR(0x570655);
if(r1(R+518)){{goto L57065f;}}
}
B570657:L570657:{c.instructions+=1;NFSU2_TR(0x570657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57065cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570240u);}goto L570240;}
}
B57065c:L57065c:{c.instructions+=1;NFSU2_TR(0x57065c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57065f:L57065f:{c.instructions+=2;NFSU2_TR(0x57065f);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B570663:{NFSU2_TR(0x570663);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57067c;}}
}
B570665:L570665:{c.instructions+=11;NFSU2_TR(0x570665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570668:{NFSU2_TR(0x570668);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57066a:{NFSU2_TR(0x57066a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57066d:{NFSU2_TR(0x57066d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570670:{NFSU2_TR(0x570670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570673:{NFSU2_TR(0x570673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570674:{NFSU2_TR(0x570674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570675:{NFSU2_TR(0x570675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570676:{NFSU2_TR(0x570676);
__builtin_memmove((R+16),(R+20),4);
}
B570678:{NFSU2_TR(0x570678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B570679:{NFSU2_TR(0x570679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57067c:L57067c:{c.instructions+=4;NFSU2_TR(0x57067c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57067f:{NFSU2_TR(0x57067f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570680:{NFSU2_TR(0x570680);
__builtin_memmove((R+4),(R+24),4);
}
B570682:{NFSU2_TR(0x570682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570687ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5704a0u);}goto L5704a0;}
}
B570687:L570687:{c.instructions+=2;NFSU2_TR(0x570687);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B570689:{NFSU2_TR(0x570689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57068eull));
TAIL_STATIC(0x75bed4u,75b);
}
B57068e:L57068e:{c.instructions+=6;NFSU2_TR(0x57068e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570692:{NFSU2_TR(0x570692);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B570696:{NFSU2_TR(0x570696);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B570698:{NFSU2_TR(0x570698);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57069a:{NFSU2_TR(0x57069a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57069d:{NFSU2_TR(0x57069d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5706a5;}}
}
B57069f:L57069f:{c.instructions+=1;NFSU2_TR(0x57069f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5706a5:L5706a5:{c.instructions+=2;NFSU2_TR(0x5706a5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5706a7:{NFSU2_TR(0x5706a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5706acull));
TAIL_STATIC(0x75bed4u,75b);
}
B5706ac:L5706ac:{c.instructions+=7;NFSU2_TR(0x5706ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5706ae:{NFSU2_TR(0x5706ae);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5706b0:{NFSU2_TR(0x5706b0);
__builtin_memmove((R+28),(R+0),4);
}
B5706b2:{NFSU2_TR(0x5706b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5706b6:{NFSU2_TR(0x5706b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5706ba:{NFSU2_TR(0x5706ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5706bc:{NFSU2_TR(0x5706bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5706fc;}}
}
B5706be:L5706be:{c.instructions+=2;NFSU2_TR(0x5706be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5706c0:{NFSU2_TR(0x5706c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5706cb;}}
}
B5706c2:L5706c2:{c.instructions+=4;NFSU2_TR(0x5706c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5706c6:{NFSU2_TR(0x5706c6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5706c7:{NFSU2_TR(0x5706c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5706c9:{NFSU2_TR(0x5706c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5706fc;}}
}
B5706cb:L5706cb:{c.instructions+=6;NFSU2_TR(0x5706cb);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706d0:{NFSU2_TR(0x5706d0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706d2:{NFSU2_TR(0x5706d2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706d4:{NFSU2_TR(0x5706d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5706d8:{NFSU2_TR(0x5706d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706d9:{NFSU2_TR(0x5706d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5706deull));
TAIL_STATIC(0x401650u,401);
}
B5706de:L5706de:{c.instructions+=6;NFSU2_TR(0x5706de);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5706df:{NFSU2_TR(0x5706df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706e0:{NFSU2_TR(0x5706e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5706e4:{NFSU2_TR(0x5706e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706e5:{NFSU2_TR(0x5706e5);
__builtin_memmove((R+4),(R+24),4);
}
B5706e7:{NFSU2_TR(0x5706e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5706ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570510u);}goto L570510;}
}
B5706ec:L5706ec:{c.instructions+=7;NFSU2_TR(0x5706ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5706ef:{NFSU2_TR(0x5706ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5706f3:{NFSU2_TR(0x5706f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5706f7:{NFSU2_TR(0x5706f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706f8:{NFSU2_TR(0x5706f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706f9:{NFSU2_TR(0x5706f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5706fa:{NFSU2_TR(0x5706fa);
{goto L570710;}
}
B5706fc:L5706fc:{c.instructions+=8;NFSU2_TR(0x5706fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5706ff:{NFSU2_TR(0x5706ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570702:{NFSU2_TR(0x570702);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B570705:{NFSU2_TR(0x570705);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B570709:{NFSU2_TR(0x570709);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57070d:{NFSU2_TR(0x57070d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57070e:{NFSU2_TR(0x57070e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57070f:{NFSU2_TR(0x57070f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570710:L570710:{c.instructions+=4;NFSU2_TR(0x570710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B570713:{NFSU2_TR(0x570713);
__builtin_memmove((R+4),(R+24),4);
}
B570715:{NFSU2_TR(0x570715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570716:{NFSU2_TR(0x570716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57071bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570440u);}goto L570440;}
}
B57071b:L57071b:{c.instructions+=7;NFSU2_TR(0x57071b);
__builtin_memmove((R+0),(R+28),4);
}
B57071d:{NFSU2_TR(0x57071d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57071e:{NFSU2_TR(0x57071e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57071f:{NFSU2_TR(0x57071f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570720:{NFSU2_TR(0x570720);
__builtin_memmove((R+16),(R+20),4);
}
B570722:{NFSU2_TR(0x570722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B570723:{NFSU2_TR(0x570723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570730:L570730:{c.instructions+=16;NFSU2_TR(0x570730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570731:{NFSU2_TR(0x570731);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570732:{NFSU2_TR(0x570732);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B570736:{NFSU2_TR(0x570736);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570737:{NFSU2_TR(0x570737);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570738:{NFSU2_TR(0x570738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570739:{NFSU2_TR(0x570739);
__builtin_memmove((R+28),(R+4),4);
}
B57073b:{NFSU2_TR(0x57073b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57073e:{NFSU2_TR(0x57073e);
__builtin_memmove((R+0),(R+12),4);
}
B570740:{NFSU2_TR(0x570740);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B570743:{NFSU2_TR(0x570743);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570745:{NFSU2_TR(0x570745);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570749:{NFSU2_TR(0x570749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57074a:{NFSU2_TR(0x57074a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57074b:{NFSU2_TR(0x57074b);
__builtin_memmove((R+20),(R+12),4);
}
B57074d:{NFSU2_TR(0x57074d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570752ull));
TAIL_STATIC(0x43ce10u,43c);
}
B570752:L570752:{c.instructions+=6;NFSU2_TR(0x570752);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570756:{NFSU2_TR(0x570756);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B57075a:{NFSU2_TR(0x57075a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57075d:{NFSU2_TR(0x57075d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B570760:{NFSU2_TR(0x570760);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B570762:{NFSU2_TR(0x570762);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5707a8;}}
}
B570764:L570764:{c.instructions+=3;NFSU2_TR(0x570764);
__builtin_memmove((R+12),(R+24),4);
}
B570766:{NFSU2_TR(0x570766);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B570769:{NFSU2_TR(0x570769);
__builtin_memmove((R+16),(R+16),4);
}
B570770:L570770:{c.instructions+=6;NFSU2_TR(0x570770);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570773:{NFSU2_TR(0x570773);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570777:{NFSU2_TR(0x570777);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570779:{NFSU2_TR(0x570779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57077a:{NFSU2_TR(0x57077a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57077b:{NFSU2_TR(0x57077b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570780ull));
TAIL_STATIC(0x43ce10u,43c);
}
B570780:L570780:{c.instructions+=5;NFSU2_TR(0x570780);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B570784:{NFSU2_TR(0x570784);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B570787:{NFSU2_TR(0x570787);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570789:{NFSU2_TR(0x570789);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57078c:{NFSU2_TR(0x57078c);
if(r1(R+518)){{goto L5707a2;}}
}
B57078e:L57078e:{c.instructions+=7;NFSU2_TR(0x57078e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B570792:{NFSU2_TR(0x570792);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570796:{NFSU2_TR(0x570796);
__builtin_memmove((R+20),(R+24),4);
}
B570798:{NFSU2_TR(0x570798);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B570799:{NFSU2_TR(0x570799);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B57079c:{NFSU2_TR(0x57079c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57079e:{NFSU2_TR(0x57079e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570770u);}goto L570770;}}
}
B5707a0:L5707a0:{c.instructions+=1;NFSU2_TR(0x5707a0);
{goto L5707a4;}
}
B5707a2:L5707a2:{c.instructions+=1;NFSU2_TR(0x5707a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5707a4:L5707a4:{c.instructions+=1;NFSU2_TR(0x5707a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5707a8:L5707a8:{c.instructions+=3;NFSU2_TR(0x5707a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B5707ab:{NFSU2_TR(0x5707ab);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5707ad:{NFSU2_TR(0x5707ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5707ec;}}
}
B5707af:L5707af:{c.instructions+=2;NFSU2_TR(0x5707af);
__builtin_memmove((R+12),(R+24),4);
}
B5707b1:{NFSU2_TR(0x5707b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5707b4:L5707b4:{c.instructions+=6;NFSU2_TR(0x5707b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5707b7:{NFSU2_TR(0x5707b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5707bb:{NFSU2_TR(0x5707bb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5707bd:{NFSU2_TR(0x5707bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5707be:{NFSU2_TR(0x5707be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5707bf:{NFSU2_TR(0x5707bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5707c4ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5707c4:L5707c4:{c.instructions+=5;NFSU2_TR(0x5707c4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5707c8:{NFSU2_TR(0x5707c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5707cb:{NFSU2_TR(0x5707cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5707cd:{NFSU2_TR(0x5707cd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5707d0:{NFSU2_TR(0x5707d0);
if(r1(R+518)){{goto L5707ea;}}
}
B5707d2:L5707d2:{c.instructions+=6;NFSU2_TR(0x5707d2);
__builtin_memmove((R+20),(R+24),4);
}
B5707d4:{NFSU2_TR(0x5707d4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5707d8:{NFSU2_TR(0x5707d8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5707d9:{NFSU2_TR(0x5707d9);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x10ull))));
}
B5707dc:{NFSU2_TR(0x5707dc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5707de:{NFSU2_TR(0x5707de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5707b4u);}goto L5707b4;}}
}
B5707e0:L5707e0:{c.instructions+=7;NFSU2_TR(0x5707e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5707e1:{NFSU2_TR(0x5707e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5707e2:{NFSU2_TR(0x5707e2);
__builtin_memmove((R+0),(R+20),4);
}
B5707e4:{NFSU2_TR(0x5707e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5707e5:{NFSU2_TR(0x5707e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5707e6:{NFSU2_TR(0x5707e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5707e7:{NFSU2_TR(0x5707e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5707ea:L5707ea:{c.instructions+=1;NFSU2_TR(0x5707ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5707ec:L5707ec:{c.instructions+=7;NFSU2_TR(0x5707ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5707ed:{NFSU2_TR(0x5707ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5707ee:{NFSU2_TR(0x5707ee);
__builtin_memmove((R+0),(R+20),4);
}
B5707f0:{NFSU2_TR(0x5707f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5707f1:{NFSU2_TR(0x5707f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5707f2:{NFSU2_TR(0x5707f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5707f3:{NFSU2_TR(0x5707f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570800:L570800:{c.instructions+=12;NFSU2_TR(0x570800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570801:{NFSU2_TR(0x570801);
__builtin_memmove((R+20),(R+16),4);
}
B570803:{NFSU2_TR(0x570803);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B570806:{NFSU2_TR(0x570806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B570809:{NFSU2_TR(0x570809);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57080a:{NFSU2_TR(0x57080a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57080b:{NFSU2_TR(0x57080b);
__builtin_memmove((R+24),(R+4),4);
}
B57080d:{NFSU2_TR(0x57080d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B570810:{NFSU2_TR(0x570810);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B570812:{NFSU2_TR(0x570812);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B570814:{NFSU2_TR(0x570814);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570815:{NFSU2_TR(0x570815);
if(r1(R+518)){{goto L57081f;}}
}
B570817:L570817:{c.instructions+=1;NFSU2_TR(0x570817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57081cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570240u);}goto L570240;}
}
B57081c:L57081c:{c.instructions+=1;NFSU2_TR(0x57081c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57081f:L57081f:{c.instructions+=4;NFSU2_TR(0x57081f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B570823:{NFSU2_TR(0x570823);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B570826:{NFSU2_TR(0x570826);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B570829:{NFSU2_TR(0x570829);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L570834;}}
}
B57082b:L57082b:{c.instructions+=7;NFSU2_TR(0x57082b);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57082d:{NFSU2_TR(0x57082d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57082e:{NFSU2_TR(0x57082e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57082f:{NFSU2_TR(0x57082f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570830:{NFSU2_TR(0x570830);
__builtin_memmove((R+16),(R+20),4);
}
B570832:{NFSU2_TR(0x570832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B570833:{NFSU2_TR(0x570833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570834:L570834:{c.instructions+=6;NFSU2_TR(0x570834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570837:{NFSU2_TR(0x570837);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B57083a:{NFSU2_TR(0x57083a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57083d:{NFSU2_TR(0x57083d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570841:{NFSU2_TR(0x570841);
w4(R+28,u32(0x2ull));
}
B570846:{NFSU2_TR(0x570846);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5709bd;}}
}
B57084c:L57084c:{c.instructions+=2;NFSU2_TR(0x57084c);
w4(R+24,u32(0x5ull));
}
B570851:{NFSU2_TR(0x570851);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B570854:L570854:{c.instructions+=32;NFSU2_TR(0x570854);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570857:{NFSU2_TR(0x570857);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B57085a:{NFSU2_TR(0x57085a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57085e:{NFSU2_TR(0x57085e);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570861:{NFSU2_TR(0x570861);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B570863:{NFSU2_TR(0x570863);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570867:{NFSU2_TR(0x570867);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57086a:{NFSU2_TR(0x57086a);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57086d:{NFSU2_TR(0x57086d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570871:{NFSU2_TR(0x570871);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570874:{NFSU2_TR(0x570874);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570877:{NFSU2_TR(0x570877);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57087b:{NFSU2_TR(0x57087b);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57087e:{NFSU2_TR(0x57087e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570880:{NFSU2_TR(0x570880);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B570882:{NFSU2_TR(0x570882);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570885:{NFSU2_TR(0x570885);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570888:{NFSU2_TR(0x570888);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57088c:{NFSU2_TR(0x57088c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570890:{NFSU2_TR(0x570890);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B570892:{NFSU2_TR(0x570892);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B570894:{NFSU2_TR(0x570894);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B570898:{NFSU2_TR(0x570898);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B57089a:{NFSU2_TR(0x57089a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57089e:{NFSU2_TR(0x57089e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5708a2:{NFSU2_TR(0x5708a2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5708a4:{NFSU2_TR(0x5708a4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5708a6:{NFSU2_TR(0x5708a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5708ac:{NFSU2_TR(0x5708ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5708ae:{NFSU2_TR(0x5708ae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5708b0:{NFSU2_TR(0x5708b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5708b3:{NFSU2_TR(0x5708b3);
if(r1(R+514)){{goto L5708b7;}}
}
B5708b5:L5708b5:{c.instructions+=1;NFSU2_TR(0x5708b5);
w1(R+12,u8(0x1ull));
}
B5708b7:L5708b7:{c.instructions+=28;NFSU2_TR(0x5708b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5708bb:{NFSU2_TR(0x5708bb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5708bd:{NFSU2_TR(0x5708bd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5708c1:{NFSU2_TR(0x5708c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5708c5:{NFSU2_TR(0x5708c5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5708c9:{NFSU2_TR(0x5708c9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5708cc:{NFSU2_TR(0x5708cc);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5708cf:{NFSU2_TR(0x5708cf);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5708d3:{NFSU2_TR(0x5708d3);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5708d6:{NFSU2_TR(0x5708d6);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5708d9:{NFSU2_TR(0x5708d9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5708db:{NFSU2_TR(0x5708db);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5708de:{NFSU2_TR(0x5708de);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5708e1:{NFSU2_TR(0x5708e1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5708e5:{NFSU2_TR(0x5708e5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5708e9:{NFSU2_TR(0x5708e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5708eb:{NFSU2_TR(0x5708eb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5708ed:{NFSU2_TR(0x5708ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5708f1:{NFSU2_TR(0x5708f1);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5708f3:{NFSU2_TR(0x5708f3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5708f7:{NFSU2_TR(0x5708f7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5708fb:{NFSU2_TR(0x5708fb);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5708fd:{NFSU2_TR(0x5708fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5708ff:{NFSU2_TR(0x5708ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570905:{NFSU2_TR(0x570905);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570907:{NFSU2_TR(0x570907);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570909:{NFSU2_TR(0x570909);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57090c:{NFSU2_TR(0x57090c);
if(r1(R+514)){{goto L570910;}}
}
B57090e:L57090e:{c.instructions+=1;NFSU2_TR(0x57090e);
w1(R+12,u8(0x1ull));
}
B570910:L570910:{c.instructions+=28;NFSU2_TR(0x570910);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570914:{NFSU2_TR(0x570914);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B570916:{NFSU2_TR(0x570916);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57091a:{NFSU2_TR(0x57091a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57091e:{NFSU2_TR(0x57091e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570922:{NFSU2_TR(0x570922);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570925:{NFSU2_TR(0x570925);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570928:{NFSU2_TR(0x570928);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57092c:{NFSU2_TR(0x57092c);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57092f:{NFSU2_TR(0x57092f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570932:{NFSU2_TR(0x570932);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B570934:{NFSU2_TR(0x570934);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570937:{NFSU2_TR(0x570937);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57093a:{NFSU2_TR(0x57093a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B57093e:{NFSU2_TR(0x57093e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570942:{NFSU2_TR(0x570942);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B570944:{NFSU2_TR(0x570944);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B570946:{NFSU2_TR(0x570946);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57094a:{NFSU2_TR(0x57094a);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B57094c:{NFSU2_TR(0x57094c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570950:{NFSU2_TR(0x570950);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B570954:{NFSU2_TR(0x570954);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B570956:{NFSU2_TR(0x570956);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B570958:{NFSU2_TR(0x570958);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57095e:{NFSU2_TR(0x57095e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570960:{NFSU2_TR(0x570960);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570962:{NFSU2_TR(0x570962);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570965:{NFSU2_TR(0x570965);
if(r1(R+514)){{goto L570969;}}
}
B570967:L570967:{c.instructions+=1;NFSU2_TR(0x570967);
w1(R+12,u8(0x1ull));
}
B570969:L570969:{c.instructions+=22;NFSU2_TR(0x570969);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B57096b:{NFSU2_TR(0x57096b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57096f:{NFSU2_TR(0x57096f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570973:{NFSU2_TR(0x570973);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570976:{NFSU2_TR(0x570976);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570979:{NFSU2_TR(0x570979);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57097c:{NFSU2_TR(0x57097c);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57097f:{NFSU2_TR(0x57097f);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570982:{NFSU2_TR(0x570982);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570985:{NFSU2_TR(0x570985);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B570987:{NFSU2_TR(0x570987);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B570989:{NFSU2_TR(0x570989);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B57098b:{NFSU2_TR(0x57098b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B57098d:{NFSU2_TR(0x57098d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B57098f:{NFSU2_TR(0x57098f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B570993:{NFSU2_TR(0x570993);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B570995:{NFSU2_TR(0x570995);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57099b:{NFSU2_TR(0x57099b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57099d:{NFSU2_TR(0x57099d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57099f:{NFSU2_TR(0x57099f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5709a2:{NFSU2_TR(0x5709a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5709a4:{NFSU2_TR(0x5709a4);
if(r1(R+514)){{goto L5709a8;}}
}
B5709a6:L5709a6:{c.instructions+=1;NFSU2_TR(0x5709a6);
w1(R+12,u8(0x1ull));
}
B5709a8:L5709a8:{c.instructions+=5;NFSU2_TR(0x5709a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5709ab:{NFSU2_TR(0x5709ab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5709ae:{NFSU2_TR(0x5709ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5709b1:{NFSU2_TR(0x5709b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5709b3:{NFSU2_TR(0x5709b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570854u);}goto L570854;}}
}
B5709b9:L5709b9:{c.instructions+=1;NFSU2_TR(0x5709b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5709bd:L5709bd:{c.instructions+=2;NFSU2_TR(0x5709bd);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5709bf:{NFSU2_TR(0x5709bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L570a1b;}}
}
B5709c1:L5709c1:{c.instructions+=5;NFSU2_TR(0x5709c1);
__builtin_memmove((R+0),(R+28),4);
}
B5709c3:{NFSU2_TR(0x5709c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5709c6:{NFSU2_TR(0x5709c6);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5709ca:{NFSU2_TR(0x5709ca);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5709cc:{NFSU2_TR(0x5709cc);
__builtin_memmove((R+16),(R+16),4);
}
B5709d0:L5709d0:{c.instructions+=26;NFSU2_TR(0x5709d0);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709d3:{NFSU2_TR(0x5709d3);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5709d6:{NFSU2_TR(0x5709d6);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709d9:{NFSU2_TR(0x5709d9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5709db:{NFSU2_TR(0x5709db);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709de:{NFSU2_TR(0x5709de);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5709e1:{NFSU2_TR(0x5709e1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709e4:{NFSU2_TR(0x5709e4);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5709e7:{NFSU2_TR(0x5709e7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709ea:{NFSU2_TR(0x5709ea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5709ec:{NFSU2_TR(0x5709ec);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5709ef:{NFSU2_TR(0x5709ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5709f2:{NFSU2_TR(0x5709f2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5709f4:{NFSU2_TR(0x5709f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5709f6:{NFSU2_TR(0x5709f6);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5709f8:{NFSU2_TR(0x5709f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5709fa:{NFSU2_TR(0x5709fa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5709fc:{NFSU2_TR(0x5709fc);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5709fe:{NFSU2_TR(0x5709fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B570a00:{NFSU2_TR(0x570a00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570a06:{NFSU2_TR(0x570a06);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570a08:{NFSU2_TR(0x570a08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570a0a:{NFSU2_TR(0x570a0a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570a0c:{NFSU2_TR(0x570a0c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570a0f:{NFSU2_TR(0x570a0f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570a11:{NFSU2_TR(0x570a11);
if(r1(R+514)){{goto L570a15;}}
}
B570a13:L570a13:{c.instructions+=1;NFSU2_TR(0x570a13);
w1(R+12,u8(0x1ull));
}
B570a15:L570a15:{c.instructions+=3;NFSU2_TR(0x570a15);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B570a18:{NFSU2_TR(0x570a18);
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
B570a19:{NFSU2_TR(0x570a19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5709d0u);}goto L5709d0;}}
}
B570a1b:L570a1b:{c.instructions+=7;NFSU2_TR(0x570a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570a1c:{NFSU2_TR(0x570a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570a1d:{NFSU2_TR(0x570a1d);
__builtin_memmove((R+0),(R+12),1);
}
B570a1f:{NFSU2_TR(0x570a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570a20:{NFSU2_TR(0x570a20);
__builtin_memmove((R+16),(R+20),4);
}
B570a22:{NFSU2_TR(0x570a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B570a23:{NFSU2_TR(0x570a23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a30:L570a30:{c.instructions+=2;NFSU2_TR(0x570a30);
__builtin_memmove((R+0),gp(0x864f24),4);
}
B570a35:{NFSU2_TR(0x570a35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a40:L570a40:{c.instructions+=3;NFSU2_TR(0x570a40);
__builtin_memmove((R+0),gp(0x864f24),4);
}
B570a45:{NFSU2_TR(0x570a45);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570a48:{NFSU2_TR(0x570a48);
if(r1(R+518)){{goto L570a57;}}
}
B570a4a:L570a4a:{c.instructions+=2;NFSU2_TR(0x570a4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B570a4d:{NFSU2_TR(0x570a4d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L570a54;}}
}
B570a4f:L570a4f:{c.instructions+=2;NFSU2_TR(0x570a4f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570a52:{NFSU2_TR(0x570a52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L570a57;}}
}
B570a54:L570a54:{c.instructions+=2;NFSU2_TR(0x570a54);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570a56:{NFSU2_TR(0x570a56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a57:L570a57:{c.instructions+=2;NFSU2_TR(0x570a57);
w1(R+0,u8(0x1ull));
}
B570a59:{NFSU2_TR(0x570a59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a60:L570a60:{c.instructions+=2;NFSU2_TR(0x570a60);
w1(R+0,u8(0x1ull));
}
B570a62:{NFSU2_TR(0x570a62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a70:L570a70:{c.instructions+=2;NFSU2_TR(0x570a70);
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
B570a72:{NFSU2_TR(0x570a72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a80:L570a80:{c.instructions+=3;NFSU2_TR(0x570a80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B570a82:{NFSU2_TR(0x570a82);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570a84:{NFSU2_TR(0x570a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570a90:L570a90:{c.instructions+=3;NFSU2_TR(0x570a90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B570a92:{NFSU2_TR(0x570a92);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570a94:{NFSU2_TR(0x570a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570aa0:L570aa0:{c.instructions+=2;NFSU2_TR(0x570aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B570aa3:{NFSU2_TR(0x570aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570ab0:L570ab0:{c.instructions+=3;NFSU2_TR(0x570ab0);
__builtin_memmove((R+0),(R+4),4);
}
B570ab2:{NFSU2_TR(0x570ab2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B570ab6:{NFSU2_TR(0x570ab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570ac0:L570ac0:{c.instructions+=5;NFSU2_TR(0x570ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570ac4:{NFSU2_TR(0x570ac4);
__builtin_memmove((R+4),gp(0x864f78),4);
}
B570aca:{NFSU2_TR(0x570aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570acb:{NFSU2_TR(0x570acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570acc:{NFSU2_TR(0x570acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570ad1ull));
TAIL_STATIC(0x43f920u,43f);
}
B570ad1:L570ad1:{c.instructions+=2;NFSU2_TR(0x570ad1);
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
B570ad4:{NFSU2_TR(0x570ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570ae0:L570ae0:{c.instructions+=8;NFSU2_TR(0x570ae0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570ae4:{NFSU2_TR(0x570ae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570ae8:{NFSU2_TR(0x570ae8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570aeb:{NFSU2_TR(0x570aeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B570aed:{NFSU2_TR(0x570aed);
w4(R+8,u32(0x2ull));
}
B570af2:{NFSU2_TR(0x570af2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570af4:{NFSU2_TR(0x570af4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570af7:{NFSU2_TR(0x570af7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570afd;}}
}
B570af9:L570af9:{c.instructions+=1;NFSU2_TR(0x570af9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570afd:L570afd:{c.instructions+=7;NFSU2_TR(0x570afd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570b01:{NFSU2_TR(0x570b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570b05:{NFSU2_TR(0x570b05);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570b08:{NFSU2_TR(0x570b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570b0b:{NFSU2_TR(0x570b0b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570b0d:{NFSU2_TR(0x570b0d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570b10:{NFSU2_TR(0x570b10);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570b16;}}
}
B570b12:L570b12:{c.instructions+=1;NFSU2_TR(0x570b12);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570b16:L570b16:{c.instructions+=7;NFSU2_TR(0x570b16);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570b1a:{NFSU2_TR(0x570b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570b1e:{NFSU2_TR(0x570b1e);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570b21:{NFSU2_TR(0x570b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570b24:{NFSU2_TR(0x570b24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570b26:{NFSU2_TR(0x570b26);
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
B570b29:{NFSU2_TR(0x570b29);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570b32;}}
}
B570b2b:L570b2b:{c.instructions+=1;NFSU2_TR(0x570b2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570b32:L570b32:{c.instructions+=1;NFSU2_TR(0x570b32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570b40:L570b40:{c.instructions+=8;NFSU2_TR(0x570b40);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570b44:{NFSU2_TR(0x570b44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570b48:{NFSU2_TR(0x570b48);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570b4b:{NFSU2_TR(0x570b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570b4e:{NFSU2_TR(0x570b4e);
w4(R+8,u32(0x2ull));
}
B570b53:{NFSU2_TR(0x570b53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570b55:{NFSU2_TR(0x570b55);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570b58:{NFSU2_TR(0x570b58);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570b5e;}}
}
B570b5a:L570b5a:{c.instructions+=1;NFSU2_TR(0x570b5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570b5e:L570b5e:{c.instructions+=7;NFSU2_TR(0x570b5e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570b62:{NFSU2_TR(0x570b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570b66:{NFSU2_TR(0x570b66);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570b69:{NFSU2_TR(0x570b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570b6c:{NFSU2_TR(0x570b6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570b6e:{NFSU2_TR(0x570b6e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570b71:{NFSU2_TR(0x570b71);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570b77;}}
}
B570b73:L570b73:{c.instructions+=1;NFSU2_TR(0x570b73);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570b77:L570b77:{c.instructions+=7;NFSU2_TR(0x570b77);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570b7b:{NFSU2_TR(0x570b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570b7f:{NFSU2_TR(0x570b7f);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570b82:{NFSU2_TR(0x570b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570b85:{NFSU2_TR(0x570b85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570b87:{NFSU2_TR(0x570b87);
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
B570b8a:{NFSU2_TR(0x570b8a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570b93;}}
}
B570b8c:L570b8c:{c.instructions+=1;NFSU2_TR(0x570b8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570b93:L570b93:{c.instructions+=1;NFSU2_TR(0x570b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570ba0:L570ba0:{c.instructions+=8;NFSU2_TR(0x570ba0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570ba4:{NFSU2_TR(0x570ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570ba8:{NFSU2_TR(0x570ba8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570baa:{NFSU2_TR(0x570baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570bad:{NFSU2_TR(0x570bad);
w4(R+8,u32(0x2ull));
}
B570bb2:{NFSU2_TR(0x570bb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570bb4:{NFSU2_TR(0x570bb4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570bb7:{NFSU2_TR(0x570bb7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570bbd;}}
}
B570bb9:L570bb9:{c.instructions+=1;NFSU2_TR(0x570bb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570bbd:L570bbd:{c.instructions+=7;NFSU2_TR(0x570bbd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570bc1:{NFSU2_TR(0x570bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570bc5:{NFSU2_TR(0x570bc5);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570bc8:{NFSU2_TR(0x570bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570bcb:{NFSU2_TR(0x570bcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570bcd:{NFSU2_TR(0x570bcd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570bd0:{NFSU2_TR(0x570bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570bd6;}}
}
B570bd2:L570bd2:{c.instructions+=1;NFSU2_TR(0x570bd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570bd6:L570bd6:{c.instructions+=7;NFSU2_TR(0x570bd6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570bda:{NFSU2_TR(0x570bda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570bde:{NFSU2_TR(0x570bde);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570be1:{NFSU2_TR(0x570be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570be4:{NFSU2_TR(0x570be4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570be6:{NFSU2_TR(0x570be6);
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
B570be9:{NFSU2_TR(0x570be9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L570bf2;}}
}
B570beb:L570beb:{c.instructions+=1;NFSU2_TR(0x570beb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B570bf2:L570bf2:{c.instructions+=1;NFSU2_TR(0x570bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570c00:L570c00:{c.instructions+=2;NFSU2_TR(0x570c00);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570c03:{NFSU2_TR(0x570c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570c08ull));
TAIL_STATIC(0x5b7680u,5b7);
}
B570c08:L570c08:{c.instructions+=2;NFSU2_TR(0x570c08);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570c0c:{NFSU2_TR(0x570c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570c11ull));
TAIL_STATIC(0x5b7680u,5b7);
}
B570c11:L570c11:{c.instructions+=6;NFSU2_TR(0x570c11);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570c15:{NFSU2_TR(0x570c15);
__builtin_memmove((R+0),gp(0x864f48),4);
}
B570c1a:{NFSU2_TR(0x570c1a);
__builtin_memmove((R+4),gp(0x864f44),4);
}
B570c20:{NFSU2_TR(0x570c20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570c21:{NFSU2_TR(0x570c21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570c22:{NFSU2_TR(0x570c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570c27ull));
TAIL_STATIC(0x43be20u,43b);
}
B570c27:L570c27:{c.instructions+=7;NFSU2_TR(0x570c27);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B570c2b:{NFSU2_TR(0x570c2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B570c2e:{NFSU2_TR(0x570c2e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B570c32:{NFSU2_TR(0x570c32);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570c38:{NFSU2_TR(0x570c38);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570c3a:{NFSU2_TR(0x570c3a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570c3d:{NFSU2_TR(0x570c3d);
if(r1(R+514)){{goto L570c47;}}
}
B570c3f:L570c3f:{c.instructions+=1;NFSU2_TR(0x570c3f);
u8 U[4];
w4(U+0,u32(0x3dcccccdull));
s4(u32(r4(R+16)),r4(U+0));
}
B570c47:L570c47:{c.instructions+=9;NFSU2_TR(0x570c47);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570c4d:{NFSU2_TR(0x570c4d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B570c51:{NFSU2_TR(0x570c51);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570c55:{NFSU2_TR(0x570c55);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570c5b:{NFSU2_TR(0x570c5b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570c5f:{NFSU2_TR(0x570c5f);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570c65:{NFSU2_TR(0x570c65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570c67:{NFSU2_TR(0x570c67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B570c6a:{NFSU2_TR(0x570c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570c78;}}
}
B570c6c:L570c6c:{c.instructions+=3;NFSU2_TR(0x570c6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570c6e:{NFSU2_TR(0x570c6e);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570c74:{NFSU2_TR(0x570c74);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B570c78:L570c78:{c.instructions+=5;NFSU2_TR(0x570c78);
__builtin_memmove((R+8),gp(0x8665b8),4);
}
B570c7e:{NFSU2_TR(0x570c7e);
__builtin_memmove((R+0),gp(0x7fb708),4);
}
B570c83:{NFSU2_TR(0x570c83);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B570c85:{NFSU2_TR(0x570c85);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B570c88:{NFSU2_TR(0x570c88);
if(r1(R+518)){{goto L570cb4;}}
}
B570c8a:L570c8a:{c.instructions+=9;NFSU2_TR(0x570c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570c8e:{NFSU2_TR(0x570c8e);
{u32 ea_=u32(u32(8802112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570c94:{NFSU2_TR(0x570c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570c98:{NFSU2_TR(0x570c98);
__builtin_memmove(gp(0x8665b8),(R+0),4);
}
B570c9d:{NFSU2_TR(0x570c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B570ca1:{NFSU2_TR(0x570ca1);
__builtin_memmove(gp(0x864f34),(R+0),4);
}
B570ca6:{NFSU2_TR(0x570ca6);
__builtin_memmove(gp(0x864f38),(R+4),4);
}
B570cac:{NFSU2_TR(0x570cac);
__builtin_memmove(gp(0x864f3c),(R+8),4);
}
B570cb2:{NFSU2_TR(0x570cb2);
{goto L570cb6;}
}
B570cb4:L570cb4:{c.instructions+=1;NFSU2_TR(0x570cb4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B570cb6:L570cb6:{c.instructions+=5;NFSU2_TR(0x570cb6);
{u32 ea_=u32(u32(8802112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570cbc:{NFSU2_TR(0x570cbc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570cc2:{NFSU2_TR(0x570cc2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570cc4:{NFSU2_TR(0x570cc4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570cc7:{NFSU2_TR(0x570cc7);
if(r1(R+514)){{goto L570cd5;}}
}
B570cc9:L570cc9:{c.instructions+=3;NFSU2_TR(0x570cc9);
__builtin_memmove((R+0),gp(0x864f3c),4);
}
B570cce:{NFSU2_TR(0x570cce);
__builtin_memmove(gp(0x865350),(R+0),4);
}
B570cd3:{NFSU2_TR(0x570cd3);
{goto L570cfc;}
}
B570cd5:L570cd5:{c.instructions+=5;NFSU2_TR(0x570cd5);
{u32 ea_=u32(u32(8802108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570cdb:{NFSU2_TR(0x570cdb);
{u32 ea_=u32(u32(8802112u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B570ce1:{NFSU2_TR(0x570ce1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B570ce3:{NFSU2_TR(0x570ce3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B570ce6:{NFSU2_TR(0x570ce6);
if(r1(R+514)){{goto L570cf0;}}
}
B570ce8:L570ce8:{c.instructions+=2;NFSU2_TR(0x570ce8);
{u32 ea_=u32(u32(8802108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570cee:{NFSU2_TR(0x570cee);
{goto L570cf6;}
}
B570cf0:L570cf0:{c.instructions+=1;NFSU2_TR(0x570cf0);
{u32 ea_=u32(u32(8802112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B570cf6:L570cf6:{c.instructions+=1;NFSU2_TR(0x570cf6);
{u32 ea_=u32(u32(8803152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B570cfc:L570cfc:{c.instructions+=3;NFSU2_TR(0x570cfc);
__builtin_memmove((R+0),gp(0x890080),4);
}
B570d01:{NFSU2_TR(0x570d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d03:{NFSU2_TR(0x570d03);
if(r1(R+518)){{goto L570d4a;}}
}
B570d05:L570d05:{c.instructions+=3;NFSU2_TR(0x570d05);
__builtin_memmove((R+4),gp(0x8650a0),4);
}
B570d0b:{NFSU2_TR(0x570d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d0d:{NFSU2_TR(0x570d0d);
if(r1(R+518)){{goto L570d64;}}
}
B570d0f:L570d0f:{c.instructions+=3;NFSU2_TR(0x570d0f);
__builtin_memmove((R+4),gp(0x82a3a4),4);
}
B570d15:{NFSU2_TR(0x570d15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d17:{NFSU2_TR(0x570d17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L570d4a;}}
}
B570d19:L570d19:{c.instructions+=5;NFSU2_TR(0x570d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570d1c:{NFSU2_TR(0x570d1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d1d:{NFSU2_TR(0x570d1d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B570d1f:{NFSU2_TR(0x570d1f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d21:{NFSU2_TR(0x570d21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L570d49;}}
}
B570d23:L570d23:{c.instructions+=3;NFSU2_TR(0x570d23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d24:{NFSU2_TR(0x570d24);
w4(R+28,u32(0x1cull));
}
B570d29:{NFSU2_TR(0x570d29);
__builtin_memmove((R+16),(R+16),4);
}
B570d30:L570d30:{c.instructions+=2;NFSU2_TR(0x570d30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B570d33:{NFSU2_TR(0x570d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570d38ull));
TAIL_STATIC(0x5f49b0u,5f4);
}
B570d38:L570d38:{c.instructions+=6;NFSU2_TR(0x570d38);
__builtin_memmove((R+0),gp(0x890080),4);
}
B570d3d:{NFSU2_TR(0x570d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570d40:{NFSU2_TR(0x570d40);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B570d41:{NFSU2_TR(0x570d41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B570d44:{NFSU2_TR(0x570d44);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B570d46:{NFSU2_TR(0x570d46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570d30u);}goto L570d30;}}
}
B570d48:L570d48:{c.instructions+=1;NFSU2_TR(0x570d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570d49:L570d49:{c.instructions+=1;NFSU2_TR(0x570d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570d4a:L570d4a:{c.instructions+=3;NFSU2_TR(0x570d4a);
__builtin_memmove((R+0),gp(0x8650a0),4);
}
B570d4f:{NFSU2_TR(0x570d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d51:{NFSU2_TR(0x570d51);
if(r1(R+518)){{goto L570d64;}}
}
B570d53:L570d53:{c.instructions+=3;NFSU2_TR(0x570d53);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B570d58:{NFSU2_TR(0x570d58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570d5a:{NFSU2_TR(0x570d5a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L570d64;}}
}
B570d5c:L570d5c:{c.instructions+=2;NFSU2_TR(0x570d5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B570d5f:{NFSU2_TR(0x570d5f);
TAIL_STATIC(0x57a510u,57a);
}
B570d64:L570d64:{c.instructions+=2;NFSU2_TR(0x570d64);
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
B570d67:{NFSU2_TR(0x570d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570d70:L570d70:{c.instructions+=5;NFSU2_TR(0x570d70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d71:{NFSU2_TR(0x570d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B570d75:{NFSU2_TR(0x570d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B570d77:{NFSU2_TR(0x570d77);
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
B570d79:{NFSU2_TR(0x570d79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570d82;}}
}
B570d7b:L570d7b:{c.instructions+=3;NFSU2_TR(0x570d7b);
w4(R+0,u32(0x1ull));
}
B570d80:{NFSU2_TR(0x570d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570d81:{NFSU2_TR(0x570d81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570d82:L570d82:{c.instructions+=2;NFSU2_TR(0x570d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d83:{NFSU2_TR(0x570d83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570d88ull));
TAIL_STATIC(0x43c100u,43c);
}
B570d88:L570d88:{c.instructions+=3;NFSU2_TR(0x570d88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B570d8b:{NFSU2_TR(0x570d8b);
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
B570d8d:{NFSU2_TR(0x570d8d);
if(r1(R+518)){{goto L570d9a;}}
}
B570d8f:L570d8f:{c.instructions+=3;NFSU2_TR(0x570d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570d92:{NFSU2_TR(0x570d92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d93:{NFSU2_TR(0x570d93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570d95ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B570d95:L570d95:{c.instructions+=3;NFSU2_TR(0x570d95);
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
B570d98:{NFSU2_TR(0x570d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570d99:{NFSU2_TR(0x570d99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570d9a:L570d9a:{c.instructions+=2;NFSU2_TR(0x570d9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570d9b:{NFSU2_TR(0x570d9b);
w4(R+24,u32(0x7fa858ull));
}
B570da0:L570da0:{c.instructions+=3;NFSU2_TR(0x570da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B570da2:{NFSU2_TR(0x570da2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570da3:{NFSU2_TR(0x570da3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570da5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B570da5:L570da5:{c.instructions+=3;NFSU2_TR(0x570da5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B570da8:{NFSU2_TR(0x570da8);
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
B570daa:{NFSU2_TR(0x570daa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570dba;}}
}
B570dac:L570dac:{c.instructions+=3;NFSU2_TR(0x570dac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B570daf:{NFSU2_TR(0x570daf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fa8e8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fa8e8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fa8e8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570db5:{NFSU2_TR(0x570db5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570da0u);}goto L570da0;}}
}
B570db7:L570db7:{c.instructions+=3;NFSU2_TR(0x570db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570db8:{NFSU2_TR(0x570db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570db9:{NFSU2_TR(0x570db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570dba:L570dba:{c.instructions+=4;NFSU2_TR(0x570dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570dbb:{NFSU2_TR(0x570dbb);
w4(R+0,u32(0x1ull));
}
B570dc0:{NFSU2_TR(0x570dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570dc1:{NFSU2_TR(0x570dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570dd0:L570dd0:{c.instructions+=5;NFSU2_TR(0x570dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570dd4:{NFSU2_TR(0x570dd4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B570dd5:{NFSU2_TR(0x570dd5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B570dd8:{NFSU2_TR(0x570dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570ddc:{NFSU2_TR(0x570ddc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L570de3;}}
}
B570dde:L570dde:{c.instructions+=1;NFSU2_TR(0x570dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570de3ull));
TAIL_STATIC(0x43bd50u,43b);
}
B570de3:L570de3:{c.instructions+=8;NFSU2_TR(0x570de3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570de7:{NFSU2_TR(0x570de7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570de8:{NFSU2_TR(0x570de8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B570dec:{NFSU2_TR(0x570dec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B570dee:{NFSU2_TR(0x570dee);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B570df0:{NFSU2_TR(0x570df0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570df4:{NFSU2_TR(0x570df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570df8:{NFSU2_TR(0x570df8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L570ef0;}}
}
B570dfe:L570dfe:{c.instructions+=6;NFSU2_TR(0x570dfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570dff:{NFSU2_TR(0x570dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B570e03:{NFSU2_TR(0x570e03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e04:{NFSU2_TR(0x570e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B570e08:{NFSU2_TR(0x570e08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e09:{NFSU2_TR(0x570e09);
{goto L570e10;}
}
B570e0b:L570e0b:{c.instructions+=2;NFSU2_TR(0x570e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B570e0f:{NFSU2_TR(0x570e0f);
}
B570e10:L570e10:{c.instructions+=3;NFSU2_TR(0x570e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570e14:{NFSU2_TR(0x570e14);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B570e16:{NFSU2_TR(0x570e16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570e6c;}}
}
B570e18:L570e18:{c.instructions+=5;NFSU2_TR(0x570e18);
__builtin_memmove((R+0),(R+24),4);
}
B570e1a:{NFSU2_TR(0x570e1a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B570e1c:{NFSU2_TR(0x570e1c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B570e1f:{NFSU2_TR(0x570e1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570e23:{NFSU2_TR(0x570e23);
if(r1(R+518)){{goto L570e33;}}
}
B570e25:L570e25:{c.instructions+=2;NFSU2_TR(0x570e25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B570e28:{NFSU2_TR(0x570e28);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L570e33;}}
}
B570e2a:L570e2a:{c.instructions+=2;NFSU2_TR(0x570e2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B570e2f:{NFSU2_TR(0x570e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570e33:L570e33:{c.instructions+=2;NFSU2_TR(0x570e33);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570e35:{NFSU2_TR(0x570e35);
if(r1(R+518)){{goto L570e6a;}}
}
B570e37:L570e37:{c.instructions+=2;NFSU2_TR(0x570e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570e39:{NFSU2_TR(0x570e39);
if(r1(R+518)){{goto L570e6a;}}
}
B570e3b:L570e3b:{c.instructions+=8;NFSU2_TR(0x570e3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B570e3e:{NFSU2_TR(0x570e3e);
__builtin_memmove((R+4),(R+0),4);
}
B570e40:{NFSU2_TR(0x570e40);
__builtin_memmove((R+8),(R+4),4);
}
B570e42:{NFSU2_TR(0x570e42);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B570e46:{NFSU2_TR(0x570e46);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B570e49:{NFSU2_TR(0x570e49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B570e50:{NFSU2_TR(0x570e50);
w4(R+0,u32(0x11111111ull));
}
B570e55:{NFSU2_TR(0x570e55);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B570e59:L570e59:{c.instructions+=1;NFSU2_TR(0x570e59);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L570e5b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570e59u);}goto L570e59;}
}
B570e5b:L570e5b:{c.instructions+=2;NFSU2_TR(0x570e5b);
__builtin_memmove((R+4),(R+8),4);
}
B570e5d:{NFSU2_TR(0x570e5d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B570e60:L570e60:{c.instructions+=1;NFSU2_TR(0x570e60);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L570e62;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570e60u);}goto L570e60;}
}
B570e62:L570e62:{c.instructions+=2;NFSU2_TR(0x570e62);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570e66:{NFSU2_TR(0x570e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570e6a:L570e6a:{c.instructions+=1;NFSU2_TR(0x570e6a);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B570e6c:L570e6c:{c.instructions+=2;NFSU2_TR(0x570e6c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B570e6f:{NFSU2_TR(0x570e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L570ea8;}}
}
B570e71:L570e71:{c.instructions+=11;NFSU2_TR(0x570e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570e75:{NFSU2_TR(0x570e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570e78:{NFSU2_TR(0x570e78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e79:{NFSU2_TR(0x570e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570e7c:{NFSU2_TR(0x570e7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e7d:{NFSU2_TR(0x570e7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e7e:{NFSU2_TR(0x570e7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e7f:{NFSU2_TR(0x570e7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B570e82:{NFSU2_TR(0x570e82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e83:{NFSU2_TR(0x570e83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570e84:{NFSU2_TR(0x570e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570e89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570dd0u);}goto L570dd0;}
}
B570e89:L570e89:{c.instructions+=3;NFSU2_TR(0x570e89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B570e8c:{NFSU2_TR(0x570e8c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B570e8e:{NFSU2_TR(0x570e8e);
if(r1(R+518)){{goto L570ed2;}}
}
B570e90:L570e90:{c.instructions+=2;NFSU2_TR(0x570e90);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570e92:{NFSU2_TR(0x570e92);
if(r1(R+518)){{goto L570ea4;}}
}
B570e94:L570e94:{c.instructions+=6;NFSU2_TR(0x570e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B570e96:{NFSU2_TR(0x570e96);
__builtin_memmove((R+8),(R+0),4);
}
B570e98:{NFSU2_TR(0x570e98);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B570e9a:{NFSU2_TR(0x570e9a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B570e9d:{NFSU2_TR(0x570e9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B570ea0:{NFSU2_TR(0x570ea0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B570ea4:L570ea4:{c.instructions+=2;NFSU2_TR(0x570ea4);
__builtin_memmove((R+20),(R+0),4);
}
B570ea6:{NFSU2_TR(0x570ea6);
{goto L570ed2;}
}
B570ea8:L570ea8:{c.instructions+=2;NFSU2_TR(0x570ea8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B570eaa:{NFSU2_TR(0x570eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570ed2;}}
}
B570eac:L570eac:{c.instructions+=2;NFSU2_TR(0x570eac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B570eae:{NFSU2_TR(0x570eae);
if(r1(R+518)){{goto L570ecb;}}
}
B570eb0:L570eb0:{c.instructions+=5;NFSU2_TR(0x570eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570eb3:{NFSU2_TR(0x570eb3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B570eb6:{NFSU2_TR(0x570eb6);
__builtin_memmove((R+0),(R+4),4);
}
B570eb8:{NFSU2_TR(0x570eb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B570ebb:{NFSU2_TR(0x570ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B570ebe:L570ebe:{c.instructions+=1;NFSU2_TR(0x570ebe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L570ec0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570ebeu);}goto L570ebe;}
}
B570ec0:L570ec0:{c.instructions+=2;NFSU2_TR(0x570ec0);
__builtin_memmove((R+4),(R+0),4);
}
B570ec2:{NFSU2_TR(0x570ec2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B570ec5:L570ec5:{c.instructions+=1;NFSU2_TR(0x570ec5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L570ec7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570ec5u);}goto L570ec5;}
}
B570ec7:L570ec7:{c.instructions+=1;NFSU2_TR(0x570ec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B570ecb:L570ecb:{c.instructions+=2;NFSU2_TR(0x570ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570ece:{NFSU2_TR(0x570ece);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B570ed2:L570ed2:{c.instructions+=6;NFSU2_TR(0x570ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B570ed5:{NFSU2_TR(0x570ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570ed9:{NFSU2_TR(0x570ed9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B570edd:{NFSU2_TR(0x570edd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B570edf:{NFSU2_TR(0x570edf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570ee3:{NFSU2_TR(0x570ee3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570e0bu);}goto L570e0b;}}
}
B570ee9:L570ee9:{c.instructions+=6;NFSU2_TR(0x570ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570eea:{NFSU2_TR(0x570eea);
__builtin_memmove((R+0),(R+20),4);
}
B570eec:{NFSU2_TR(0x570eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B570eed:{NFSU2_TR(0x570eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570eee:{NFSU2_TR(0x570eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570eef:{NFSU2_TR(0x570eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570ef0:L570ef0:{c.instructions+=3;NFSU2_TR(0x570ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570ef4:{NFSU2_TR(0x570ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570ef5:{NFSU2_TR(0x570ef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570f00:L570f00:{c.instructions+=7;NFSU2_TR(0x570f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570f04:{NFSU2_TR(0x570f04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f05:{NFSU2_TR(0x570f05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f06:{NFSU2_TR(0x570f06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B570f0a:{NFSU2_TR(0x570f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B570f0d:{NFSU2_TR(0x570f0d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B570f0f:{NFSU2_TR(0x570f0f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L570f3f;}}
}
B570f11:L570f11:{c.instructions+=1;NFSU2_TR(0x570f11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f12:L570f12:{c.instructions+=4;NFSU2_TR(0x570f12);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B570f15:{NFSU2_TR(0x570f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570f18:{NFSU2_TR(0x570f18);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B570f1c:{NFSU2_TR(0x570f1c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L570f32;}}
}
B570f1e:L570f1e:{c.instructions+=4;NFSU2_TR(0x570f1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f1f:{NFSU2_TR(0x570f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B570f22:{NFSU2_TR(0x570f22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f23:{NFSU2_TR(0x570f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570f28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570f00u);}goto L570f00;}
}
B570f28:L570f28:{c.instructions+=2;NFSU2_TR(0x570f28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B570f2b:{NFSU2_TR(0x570f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B570f32:L570f32:{c.instructions+=4;NFSU2_TR(0x570f32);
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
B570f34:{NFSU2_TR(0x570f34);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B570f3a:{NFSU2_TR(0x570f3a);
__builtin_memmove((R+24),(R+28),4);
}
B570f3c:{NFSU2_TR(0x570f3c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570f12u);}goto L570f12;}}
}
B570f3e:L570f3e:{c.instructions+=1;NFSU2_TR(0x570f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570f3f:L570f3f:{c.instructions+=3;NFSU2_TR(0x570f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B570f40:{NFSU2_TR(0x570f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B570f41:{NFSU2_TR(0x570f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570f50:L570f50:{c.instructions+=3;NFSU2_TR(0x570f50);
__builtin_memmove((R+0),gp(0x864f74),1);
}
B570f55:{NFSU2_TR(0x570f55);
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
B570f57:{NFSU2_TR(0x570f57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L570f76;}}
}
B570f59:L570f59:{c.instructions+=1;NFSU2_TR(0x570f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570f5eull));
TAIL_STATIC(0x43bdf0u,43b);
}
B570f5e:L570f5e:{c.instructions+=3;NFSU2_TR(0x570f5e);
__builtin_memmove((R+0),gp(0x82dab4),4);
}
B570f63:{NFSU2_TR(0x570f63);
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
B570f65:{NFSU2_TR(0x570f65);
if(r1(R+518)){{goto L570f71;}}
}
B570f67:L570f67:{c.instructions+=1;NFSU2_TR(0x570f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570f6cull));
TAIL_STATIC(0x4022c0u,402);
}
B570f6c:L570f6c:{c.instructions+=1;NFSU2_TR(0x570f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570f71ull));
TAIL_STATIC(0x4908f0u,490);
}
B570f71:L570f71:{c.instructions+=1;NFSU2_TR(0x570f71);
TAIL_STATIC(0x4887c0u,488);
}
B570f76:L570f76:{c.instructions+=1;NFSU2_TR(0x570f76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570f80:L570f80:{c.instructions+=5;NFSU2_TR(0x570f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f82:{NFSU2_TR(0x570f82);
u8 U[4];
w4(U+0,u32(0x7a0390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f87:{NFSU2_TR(0x570f87);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f89:{NFSU2_TR(0x570f89);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570f8e:{NFSU2_TR(0x570f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570f93ull));
TAIL_STATIC(0x440df0u,440);
}
B570f93:L570f93:{c.instructions+=3;NFSU2_TR(0x570f93);
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
B570f96:{NFSU2_TR(0x570f96);
__builtin_memmove(gp(0x864f78),(R+0),4);
}
B570f9b:{NFSU2_TR(0x570f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570fa0:L570fa0:{c.instructions+=7;NFSU2_TR(0x570fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570fa4:{NFSU2_TR(0x570fa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B570faa:{NFSU2_TR(0x570faa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570fab:{NFSU2_TR(0x570fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B570fb1:{NFSU2_TR(0x570fb1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B570fb3:{NFSU2_TR(0x570fb3);
__builtin_memmove((R+28),(R+8),4);
}
B570fb5:{NFSU2_TR(0x570fb5);
w4(R+4,u32(0xcull));
}
B570fba:L570fba:{c.instructions+=1;NFSU2_TR(0x570fba);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L570fbc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x570fbau);}goto L570fba;}
}
B570fbc:L570fbc:{c.instructions+=5;NFSU2_TR(0x570fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570fc0:{NFSU2_TR(0x570fc0);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570fc2:{NFSU2_TR(0x570fc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570fc3:{NFSU2_TR(0x570fc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570fc4:{NFSU2_TR(0x570fc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570fc9ull));
TAIL_STATIC(0x43dc00u,43d);
}
B570fc9:L570fc9:{c.instructions+=3;NFSU2_TR(0x570fc9);
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
B570fcc:{NFSU2_TR(0x570fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B570fcd:{NFSU2_TR(0x570fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B570fd0:L570fd0:{c.instructions+=5;NFSU2_TR(0x570fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570fd1:{NFSU2_TR(0x570fd1);
__builtin_memmove((R+24),(R+4),4);
}
B570fd3:{NFSU2_TR(0x570fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B570fd9:{NFSU2_TR(0x570fd9);
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
B570fdb:{NFSU2_TR(0x570fdb);
if(r1(R+518)){TAIL_STATIC(0x571007u,571);}
}
B570fdd:L570fdd:{c.instructions+=3;NFSU2_TR(0x570fdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B570fe1:{NFSU2_TR(0x570fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B570fe7:{NFSU2_TR(0x570fe7);
if(r1(R+518)){{goto L570fec;}}
}
B570fe9:L570fe9:{c.instructions+=1;NFSU2_TR(0x570fe9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B570fec:L570fec:{c.instructions+=3;NFSU2_TR(0x570fec);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B570ff0:{NFSU2_TR(0x570ff0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B570ff2:{NFSU2_TR(0x570ff2);
if(r1(R+518)){{goto L570ff7;}}
}
B570ff4:L570ff4:{c.instructions+=1;NFSU2_TR(0x570ff4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B570ff7:L570ff7:{c.instructions+=3;NFSU2_TR(0x570ff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570ff8:{NFSU2_TR(0x570ff8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B570ff9:{NFSU2_TR(0x570ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x570ffeull));
TAIL_STATIC(0x440820u,440);
}
B570ffe:L570ffe:{c.instructions+=1;NFSU2_TR(0x570ffe);
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
TAIL_STATIC(0x571001u,571);
}
XIT:NFSU2_TR_EXIT(0x570,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
