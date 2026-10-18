#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_472(u8* __restrict R,Cpu& c);
u32 body_478(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_484(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x485,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x485,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_485(u8* __restrict R,Cpu& c);
u32 page_485(Cpu& c){return body_485(c.regs.data(),c);}
__attribute__((noinline)) u32 body_485(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x485005:goto L485005;
case 0x48500f:c.instructions+=1;goto B48500f;
case 0x485014:goto L485014;
case 0x485017:c.instructions+=3;goto B485017;
case 0x48501a:c.instructions+=2;goto B48501a;
case 0x48501d:c.instructions+=1;goto B48501d;
case 0x485022:goto L485022;
case 0x485024:c.instructions+=1;goto B485024;
case 0x48502a:goto L48502a;
case 0x48502d:c.instructions+=2;goto B48502d;
case 0x485030:c.instructions+=1;goto B485030;
case 0x485035:goto L485035;
case 0x485037:c.instructions+=1;goto B485037;
case 0x48503d:goto L48503d;
case 0x485040:c.instructions+=3;goto B485040;
case 0x485043:c.instructions+=2;goto B485043;
case 0x485046:c.instructions+=1;goto B485046;
case 0x48504b:goto L48504b;
case 0x485051:c.instructions+=3;goto B485051;
case 0x485053:c.instructions+=2;goto B485053;
case 0x485056:c.instructions+=1;goto B485056;
case 0x485058:goto L485058;
case 0x48505b:c.instructions+=2;goto B48505b;
case 0x48505e:c.instructions+=1;goto B48505e;
case 0x485063:goto L485063;
case 0x485065:c.instructions+=1;goto B485065;
case 0x485067:goto L485067;
case 0x48506c:c.instructions+=2;goto B48506c;
case 0x48506f:c.instructions+=1;goto B48506f;
case 0x485071:goto L485071;
case 0x485076:c.instructions+=2;goto B485076;
case 0x485078:c.instructions+=1;goto B485078;
case 0x48507a:goto L48507a;
case 0x48507f:c.instructions+=2;goto B48507f;
case 0x485081:c.instructions+=1;goto B485081;
case 0x485083:goto L485083;
case 0x485088:c.instructions+=4;goto B485088;
case 0x48508b:c.instructions+=3;goto B48508b;
case 0x48508e:c.instructions+=2;goto B48508e;
case 0x485090:c.instructions+=1;goto B485090;
case 0x485092:goto L485092;
case 0x485095:c.instructions+=6;goto B485095;
case 0x485097:c.instructions+=5;goto B485097;
case 0x48509c:c.instructions+=4;goto B48509c;
case 0x48509e:c.instructions+=3;goto B48509e;
case 0x48509f:c.instructions+=2;goto B48509f;
case 0x4850a1:c.instructions+=1;goto B4850a1;
case 0x4850a6:goto L4850a6;
case 0x4850ac:c.instructions+=7;goto B4850ac;
case 0x4850b6:c.instructions+=6;goto B4850b6;
case 0x4850bc:c.instructions+=5;goto B4850bc;
case 0x4850bd:c.instructions+=4;goto B4850bd;
case 0x4850bf:c.instructions+=3;goto B4850bf;
case 0x4850c1:c.instructions+=2;goto B4850c1;
case 0x4850c3:c.instructions+=1;goto B4850c3;
case 0x4850c8:goto L4850c8;
case 0x4850ca:c.instructions+=5;goto B4850ca;
case 0x4850cf:c.instructions+=4;goto B4850cf;
case 0x4850d4:c.instructions+=3;goto B4850d4;
case 0x4850d6:c.instructions+=2;goto B4850d6;
case 0x4850dc:c.instructions+=1;goto B4850dc;
case 0x4850e1:goto L4850e1;
case 0x4850e4:c.instructions+=2;goto B4850e4;
case 0x4850e7:c.instructions+=1;goto B4850e7;
case 0x4850ec:goto L4850ec;
case 0x4850ee:c.instructions+=2;goto B4850ee;
case 0x4850ef:c.instructions+=1;goto B4850ef;
case 0x4850f1:goto L4850f1;
case 0x4850f7:c.instructions+=2;goto B4850f7;
case 0x4850f9:c.instructions+=1;goto B4850f9;
case 0x4850fb:goto L4850fb;
case 0x4850fd:c.instructions+=1;goto B4850fd;
case 0x485102:goto L485102;
case 0x485103:c.instructions+=1;goto B485103;
case 0x485106:goto L485106;
case 0x485109:c.instructions+=2;goto B485109;
case 0x48510c:c.instructions+=1;goto B48510c;
case 0x485111:goto L485111;
case 0x485113:c.instructions+=1;goto B485113;
case 0x485115:goto L485115;
case 0x48511b:c.instructions+=2;goto B48511b;
case 0x48511d:c.instructions+=1;goto B48511d;
case 0x48511f:goto L48511f;
case 0x485123:c.instructions+=1;goto B485123;
case 0x485125:goto L485125;
case 0x485127:c.instructions+=1;goto B485127;
case 0x48512c:goto L48512c;
case 0x48512d:c.instructions+=1;goto B48512d;
case 0x485130:goto L485130;
case 0x485136:c.instructions+=13;goto B485136;
case 0x485138:c.instructions+=12;goto B485138;
case 0x48513d:c.instructions+=11;goto B48513d;
case 0x48513e:c.instructions+=10;goto B48513e;
case 0x485145:c.instructions+=9;goto B485145;
case 0x485148:c.instructions+=8;goto B485148;
case 0x485149:c.instructions+=7;goto B485149;
case 0x48514a:c.instructions+=6;goto B48514a;
case 0x48514c:c.instructions+=5;goto B48514c;
case 0x485152:c.instructions+=4;goto B485152;
case 0x485154:c.instructions+=3;goto B485154;
case 0x485156:c.instructions+=2;goto B485156;
case 0x485157:c.instructions+=1;goto B485157;
case 0x485159:goto L485159;
case 0x48515f:c.instructions+=5;goto B48515f;
case 0x485160:c.instructions+=4;goto B485160;
case 0x485165:c.instructions+=3;goto B485165;
case 0x48516c:c.instructions+=2;goto B48516c;
case 0x485176:c.instructions+=1;goto B485176;
case 0x48517b:goto L48517b;
case 0x48517e:goto L48517e;
case 0x485182:c.instructions+=2;goto B485182;
case 0x485183:c.instructions+=1;goto B485183;
case 0x485188:goto L485188;
case 0x48518b:c.instructions+=1;goto B48518b;
case 0x485190:goto L485190;
case 0x485194:c.instructions+=8;goto B485194;
case 0x485198:c.instructions+=7;goto B485198;
case 0x485199:c.instructions+=6;goto B485199;
case 0x48519d:c.instructions+=5;goto B48519d;
case 0x4851a1:c.instructions+=4;goto B4851a1;
case 0x4851a5:c.instructions+=3;goto B4851a5;
case 0x4851a7:c.instructions+=2;goto B4851a7;
case 0x4851a9:c.instructions+=1;goto B4851a9;
case 0x4851ab:goto L4851ab;
case 0x4851ad:c.instructions+=1;goto B4851ad;
case 0x4851b2:goto L4851b2;
case 0x4851b6:c.instructions+=3;goto B4851b6;
case 0x4851b8:c.instructions+=2;goto B4851b8;
case 0x4851bc:c.instructions+=1;goto B4851bc;
case 0x4851be:goto L4851be;
case 0x4851c4:c.instructions+=4;goto B4851c4;
case 0x4851ca:c.instructions+=3;goto B4851ca;
case 0x4851cd:c.instructions+=2;goto B4851cd;
case 0x4851cf:c.instructions+=1;goto B4851cf;
case 0x4851d1:goto L4851d1;
case 0x4851d3:c.instructions+=1;goto B4851d3;
case 0x4851d5:goto L4851d5;
case 0x4851d8:c.instructions+=1;goto B4851d8;
case 0x4851da:goto L4851da;
case 0x4851df:goto L4851df;
case 0x4851e0:c.instructions+=16;goto B4851e0;
case 0x4851e3:c.instructions+=15;goto B4851e3;
case 0x4851e4:c.instructions+=14;goto B4851e4;
case 0x4851e5:c.instructions+=13;goto B4851e5;
case 0x4851ea:c.instructions+=12;goto B4851ea;
case 0x4851ec:c.instructions+=11;goto B4851ec;
case 0x4851ef:c.instructions+=10;goto B4851ef;
case 0x4851f2:c.instructions+=9;goto B4851f2;
case 0x4851f5:c.instructions+=8;goto B4851f5;
case 0x4851f8:c.instructions+=7;goto B4851f8;
case 0x4851fb:c.instructions+=6;goto B4851fb;
case 0x4851fe:c.instructions+=5;goto B4851fe;
case 0x485201:c.instructions+=4;goto B485201;
case 0x485204:c.instructions+=3;goto B485204;
case 0x485207:c.instructions+=2;goto B485207;
case 0x48520a:c.instructions+=1;goto B48520a;
case 0x48520f:goto L48520f;
case 0x485212:c.instructions+=2;goto B485212;
case 0x485214:c.instructions+=1;goto B485214;
case 0x485216:goto L485216;
case 0x48521b:c.instructions+=2;goto B48521b;
case 0x485220:c.instructions+=1;goto B485220;
case 0x485225:goto L485225;
case 0x485226:c.instructions+=3;goto B485226;
case 0x485227:c.instructions+=2;goto B485227;
case 0x48522c:c.instructions+=1;goto B48522c;
case 0x485231:goto L485231;
case 0x485234:goto L485234;
case 0x485235:c.instructions+=1;goto B485235;
case 0x485237:goto L485237;
case 0x485239:goto L485239;
case 0x485240:c.instructions+=3;goto B485240;
case 0x485248:c.instructions+=2;goto B485248;
case 0x48524e:c.instructions+=1;goto B48524e;
case 0x485250:goto L485250;
case 0x485256:c.instructions+=8;goto B485256;
case 0x48525b:c.instructions+=7;goto B48525b;
case 0x48525d:c.instructions+=6;goto B48525d;
case 0x485263:c.instructions+=5;goto B485263;
case 0x485265:c.instructions+=4;goto B485265;
case 0x485267:c.instructions+=3;goto B485267;
case 0x48526b:c.instructions+=2;goto B48526b;
case 0x48526f:c.instructions+=1;goto B48526f;
case 0x485271:goto L485271;
case 0x485275:c.instructions+=2;goto B485275;
case 0x485276:c.instructions+=1;goto B485276;
case 0x48527b:goto L48527b;
case 0x48527f:c.instructions+=1;goto B48527f;
case 0x485284:goto L485284;
case 0x485288:c.instructions+=6;goto B485288;
case 0x485289:c.instructions+=5;goto B485289;
case 0x48528a:c.instructions+=4;goto B48528a;
case 0x48528b:c.instructions+=3;goto B48528b;
case 0x485292:c.instructions+=2;goto B485292;
case 0x485295:c.instructions+=1;goto B485295;
case 0x4852a0:goto L4852a0;
case 0x4852a1:c.instructions+=3;goto B4852a1;
case 0x4852a3:c.instructions+=2;goto B4852a3;
case 0x4852aa:c.instructions+=1;goto B4852aa;
case 0x4852b0:goto L4852b0;
case 0x4852b5:c.instructions+=3;goto B4852b5;
case 0x4852b7:c.instructions+=2;goto B4852b7;
case 0x4852ba:c.instructions+=1;goto B4852ba;
case 0x4852bc:goto L4852bc;
case 0x4852bf:c.instructions+=1;goto B4852bf;
case 0x4852c1:goto L4852c1;
case 0x4852c4:c.instructions+=1;goto B4852c4;
case 0x4852c6:goto L4852c6;
case 0x4852cd:c.instructions+=1;goto B4852cd;
case 0x4852cf:goto L4852cf;
case 0x4852d5:c.instructions+=7;goto B4852d5;
case 0x4852d6:c.instructions+=6;goto B4852d6;
case 0x4852dc:c.instructions+=5;goto B4852dc;
case 0x4852dd:c.instructions+=4;goto B4852dd;
case 0x4852e2:c.instructions+=3;goto B4852e2;
case 0x4852e4:c.instructions+=2;goto B4852e4;
case 0x4852e7:c.instructions+=1;goto B4852e7;
case 0x4852e9:goto L4852e9;
case 0x4852ee:goto L4852ee;
case 0x4852f3:c.instructions+=1;goto B4852f3;
case 0x4852f8:goto L4852f8;
case 0x4852fa:c.instructions+=4;goto B4852fa;
case 0x4852ff:c.instructions+=3;goto B4852ff;
case 0x485302:c.instructions+=2;goto B485302;
case 0x485304:c.instructions+=1;goto B485304;
case 0x485306:goto L485306;
case 0x485309:c.instructions+=3;goto B485309;
case 0x48530c:c.instructions+=2;goto B48530c;
case 0x48530f:c.instructions+=1;goto B48530f;
case 0x485314:goto L485314;
case 0x485316:c.instructions+=1;goto B485316;
case 0x485318:goto L485318;
case 0x48531e:c.instructions+=7;goto B48531e;
case 0x485321:c.instructions+=6;goto B485321;
case 0x485323:c.instructions+=5;goto B485323;
case 0x485328:c.instructions+=4;goto B485328;
case 0x485329:c.instructions+=3;goto B485329;
case 0x48532a:c.instructions+=2;goto B48532a;
case 0x48532c:c.instructions+=1;goto B48532c;
case 0x485331:goto L485331;
case 0x485338:goto L485338;
case 0x485339:c.instructions+=1;goto B485339;
case 0x48533a:goto L48533a;
case 0x48533b:c.instructions+=1;goto B48533b;
case 0x485340:goto L485340;
case 0x485341:c.instructions+=10;goto B485341;
case 0x485344:c.instructions+=9;goto B485344;
case 0x485345:c.instructions+=8;goto B485345;
case 0x485349:c.instructions+=7;goto B485349;
case 0x48534d:c.instructions+=6;goto B48534d;
case 0x48534e:c.instructions+=5;goto B48534e;
case 0x485351:c.instructions+=4;goto B485351;
case 0x485354:c.instructions+=3;goto B485354;
case 0x485356:c.instructions+=2;goto B485356;
case 0x485358:c.instructions+=1;goto B485358;
case 0x48535a:goto L48535a;
case 0x48535b:c.instructions+=2;goto B48535b;
case 0x48535c:c.instructions+=1;goto B48535c;
case 0x485360:goto L485360;
case 0x485363:c.instructions+=4;goto B485363;
case 0x485366:c.instructions+=3;goto B485366;
case 0x485368:c.instructions+=2;goto B485368;
case 0x48536a:c.instructions+=1;goto B48536a;
case 0x48536d:goto L48536d;
case 0x48536f:c.instructions+=3;goto B48536f;
case 0x485370:c.instructions+=2;goto B485370;
case 0x485372:c.instructions+=1;goto B485372;
case 0x485377:goto L485377;
case 0x485378:c.instructions+=2;goto B485378;
case 0x48537a:c.instructions+=1;goto B48537a;
case 0x48537d:goto L48537d;
case 0x48537f:c.instructions+=2;goto B48537f;
case 0x485381:c.instructions+=1;goto B485381;
case 0x485384:goto L485384;
case 0x485386:c.instructions+=3;goto B485386;
case 0x485387:c.instructions+=2;goto B485387;
case 0x485389:c.instructions+=1;goto B485389;
case 0x48538e:goto L48538e;
case 0x48538f:c.instructions+=2;goto B48538f;
case 0x485391:c.instructions+=1;goto B485391;
case 0x485394:goto L485394;
case 0x485398:c.instructions+=7;goto B485398;
case 0x48539b:c.instructions+=6;goto B48539b;
case 0x48539f:c.instructions+=5;goto B48539f;
case 0x4853a2:c.instructions+=4;goto B4853a2;
case 0x4853a5:c.instructions+=3;goto B4853a5;
case 0x4853a6:c.instructions+=2;goto B4853a6;
case 0x4853a8:c.instructions+=1;goto B4853a8;
case 0x4853aa:goto L4853aa;
case 0x4853ab:c.instructions+=1;goto B4853ab;
case 0x4853ac:goto L4853ac;
case 0x4853ad:c.instructions+=3;goto B4853ad;
case 0x4853ae:c.instructions+=2;goto B4853ae;
case 0x4853af:c.instructions+=1;goto B4853af;
case 0x4853c0:goto L4853c0;
case 0x4853c1:c.instructions+=8;goto B4853c1;
case 0x4853c6:c.instructions+=7;goto B4853c6;
case 0x4853c7:c.instructions+=6;goto B4853c7;
case 0x4853c8:c.instructions+=5;goto B4853c8;
case 0x4853ca:c.instructions+=4;goto B4853ca;
case 0x4853cc:c.instructions+=3;goto B4853cc;
case 0x4853ce:c.instructions+=2;goto B4853ce;
case 0x4853d2:c.instructions+=1;goto B4853d2;
case 0x4853d8:goto L4853d8;
case 0x4853dd:c.instructions+=2;goto B4853dd;
case 0x4853de:c.instructions+=1;goto B4853de;
case 0x4853e3:goto L4853e3;
case 0x4853e6:c.instructions+=2;goto B4853e6;
case 0x4853eb:c.instructions+=1;goto B4853eb;
case 0x4853ed:goto L4853ed;
case 0x4853f3:c.instructions+=5;goto B4853f3;
case 0x4853f6:c.instructions+=4;goto B4853f6;
case 0x4853fc:c.instructions+=3;goto B4853fc;
case 0x4853fd:c.instructions+=2;goto B4853fd;
case 0x4853ff:c.instructions+=1;goto B4853ff;
case 0x485404:goto L485404;
case 0x485407:c.instructions+=2;goto B485407;
case 0x485409:c.instructions+=1;goto B485409;
case 0x48540b:goto L48540b;
case 0x485411:c.instructions+=5;goto B485411;
case 0x485414:c.instructions+=4;goto B485414;
case 0x485417:c.instructions+=3;goto B485417;
case 0x48541d:c.instructions+=2;goto B48541d;
case 0x485427:c.instructions+=1;goto B485427;
case 0x485429:goto L485429;
case 0x48542b:goto L48542b;
case 0x48542d:c.instructions+=2;goto B48542d;
case 0x485433:c.instructions+=1;goto B485433;
case 0x485438:goto L485438;
case 0x48543a:c.instructions+=1;goto B48543a;
case 0x48543c:goto L48543c;
case 0x48543d:c.instructions+=4;goto B48543d;
case 0x485443:c.instructions+=3;goto B485443;
case 0x485444:c.instructions+=2;goto B485444;
case 0x485445:c.instructions+=1;goto B485445;
case 0x485446:goto L485446;
case 0x48544c:c.instructions+=4;goto B48544c;
case 0x48544d:c.instructions+=3;goto B48544d;
case 0x48544e:c.instructions+=2;goto B48544e;
case 0x48544f:c.instructions+=1;goto B48544f;
case 0x485454:goto L485454;
case 0x485457:c.instructions+=2;goto B485457;
case 0x48545c:c.instructions+=1;goto B48545c;
case 0x48545e:goto L48545e;
case 0x485463:c.instructions+=5;goto B485463;
case 0x485466:c.instructions+=4;goto B485466;
case 0x48546b:c.instructions+=3;goto B48546b;
case 0x48546c:c.instructions+=2;goto B48546c;
case 0x48546e:c.instructions+=1;goto B48546e;
case 0x485473:goto L485473;
case 0x485475:c.instructions+=3;goto B485475;
case 0x485478:c.instructions+=2;goto B485478;
case 0x48547a:c.instructions+=1;goto B48547a;
case 0x48547c:goto L48547c;
case 0x48547f:c.instructions+=11;goto B48547f;
case 0x485484:c.instructions+=10;goto B485484;
case 0x485486:c.instructions+=9;goto B485486;
case 0x48548c:c.instructions+=8;goto B48548c;
case 0x48548f:c.instructions+=7;goto B48548f;
case 0x485492:c.instructions+=6;goto B485492;
case 0x485495:c.instructions+=5;goto B485495;
case 0x485498:c.instructions+=4;goto B485498;
case 0x48549b:c.instructions+=3;goto B48549b;
case 0x48549e:c.instructions+=2;goto B48549e;
case 0x4854a1:c.instructions+=1;goto B4854a1;
case 0x4854a4:goto L4854a4;
case 0x4854a6:goto L4854a6;
case 0x4854a8:goto L4854a8;
case 0x4854aa:goto L4854aa;
case 0x4854ac:c.instructions+=2;goto B4854ac;
case 0x4854b2:c.instructions+=1;goto B4854b2;
case 0x4854b7:goto L4854b7;
case 0x4854ba:c.instructions+=2;goto B4854ba;
case 0x4854bc:c.instructions+=1;goto B4854bc;
case 0x4854be:goto L4854be;
case 0x4854c4:c.instructions+=3;goto B4854c4;
case 0x4854ca:c.instructions+=2;goto B4854ca;
case 0x4854d0:c.instructions+=1;goto B4854d0;
case 0x4854d2:goto L4854d2;
case 0x4854d4:goto L4854d4;
case 0x4854da:c.instructions+=4;goto B4854da;
case 0x4854e0:c.instructions+=3;goto B4854e0;
case 0x4854e1:c.instructions+=2;goto B4854e1;
case 0x4854e6:c.instructions+=1;goto B4854e6;
case 0x4854eb:goto L4854eb;
case 0x4854ee:c.instructions+=2;goto B4854ee;
case 0x4854f3:c.instructions+=1;goto B4854f3;
case 0x4854f5:goto L4854f5;
case 0x4854fb:c.instructions+=5;goto B4854fb;
case 0x4854fe:c.instructions+=4;goto B4854fe;
case 0x485504:c.instructions+=3;goto B485504;
case 0x485505:c.instructions+=2;goto B485505;
case 0x485507:c.instructions+=1;goto B485507;
case 0x48550c:goto L48550c;
case 0x48550f:c.instructions+=2;goto B48550f;
case 0x485511:c.instructions+=1;goto B485511;
case 0x485513:goto L485513;
case 0x485515:c.instructions+=1;goto B485515;
case 0x48551a:goto L48551a;
case 0x48551c:goto L48551c;
case 0x48551e:goto L48551e;
case 0x485524:c.instructions+=3;goto B485524;
case 0x485529:c.instructions+=2;goto B485529;
case 0x48552a:c.instructions+=1;goto B48552a;
case 0x48552f:goto L48552f;
case 0x485532:c.instructions+=2;goto B485532;
case 0x485537:c.instructions+=1;goto B485537;
case 0x485539:goto L485539;
case 0x48553f:c.instructions+=5;goto B48553f;
case 0x485542:c.instructions+=4;goto B485542;
case 0x485548:c.instructions+=3;goto B485548;
case 0x485549:c.instructions+=2;goto B485549;
case 0x48554b:c.instructions+=1;goto B48554b;
case 0x485550:goto L485550;
case 0x485553:c.instructions+=2;goto B485553;
case 0x485555:c.instructions+=1;goto B485555;
case 0x485557:goto L485557;
case 0x48555d:c.instructions+=11;goto B48555d;
case 0x485560:c.instructions+=10;goto B485560;
case 0x485563:c.instructions+=9;goto B485563;
case 0x485566:c.instructions+=8;goto B485566;
case 0x485569:c.instructions+=7;goto B485569;
case 0x48556c:c.instructions+=6;goto B48556c;
case 0x48556f:c.instructions+=5;goto B48556f;
case 0x485572:c.instructions+=4;goto B485572;
case 0x485575:c.instructions+=3;goto B485575;
case 0x485578:c.instructions+=2;goto B485578;
case 0x48557d:c.instructions+=1;goto B48557d;
case 0x48557f:goto L48557f;
case 0x485585:goto L485585;
case 0x48558b:c.instructions+=2;goto B48558b;
case 0x48558c:c.instructions+=1;goto B48558c;
case 0x485591:goto L485591;
case 0x485594:c.instructions+=3;goto B485594;
case 0x485599:c.instructions+=2;goto B485599;
case 0x48559e:c.instructions+=1;goto B48559e;
case 0x4855a0:goto L4855a0;
case 0x4855a5:c.instructions+=5;goto B4855a5;
case 0x4855a8:c.instructions+=4;goto B4855a8;
case 0x4855ad:c.instructions+=3;goto B4855ad;
case 0x4855ae:c.instructions+=2;goto B4855ae;
case 0x4855af:c.instructions+=1;goto B4855af;
case 0x4855b4:goto L4855b4;
case 0x4855b7:c.instructions+=2;goto B4855b7;
case 0x4855b9:c.instructions+=1;goto B4855b9;
case 0x4855bb:goto L4855bb;
case 0x4855c1:c.instructions+=10;goto B4855c1;
case 0x4855c4:c.instructions+=9;goto B4855c4;
case 0x4855c7:c.instructions+=8;goto B4855c7;
case 0x4855ca:c.instructions+=7;goto B4855ca;
case 0x4855cd:c.instructions+=6;goto B4855cd;
case 0x4855d0:c.instructions+=5;goto B4855d0;
case 0x4855d2:c.instructions+=4;goto B4855d2;
case 0x4855d5:c.instructions+=3;goto B4855d5;
case 0x4855d8:c.instructions+=2;goto B4855d8;
case 0x4855db:c.instructions+=1;goto B4855db;
case 0x4855dd:goto L4855dd;
case 0x4855df:goto L4855df;
case 0x4855e1:c.instructions+=2;goto B4855e1;
case 0x4855e7:c.instructions+=1;goto B4855e7;
case 0x4855ec:goto L4855ec;
case 0x4855ef:c.instructions+=2;goto B4855ef;
case 0x4855f1:c.instructions+=1;goto B4855f1;
case 0x4855f3:goto L4855f3;
case 0x4855f8:c.instructions+=2;goto B4855f8;
case 0x4855fe:c.instructions+=1;goto B4855fe;
case 0x485600:goto L485600;
case 0x485602:goto L485602;
case 0x485605:c.instructions+=4;goto B485605;
case 0x48560b:c.instructions+=3;goto B48560b;
case 0x48560d:c.instructions+=2;goto B48560d;
case 0x485612:c.instructions+=1;goto B485612;
case 0x485614:goto L485614;
case 0x485616:goto L485616;
case 0x48561c:c.instructions+=2;goto B48561c;
case 0x48561d:c.instructions+=1;goto B48561d;
case 0x485622:goto L485622;
case 0x485625:c.instructions+=2;goto B485625;
case 0x48562a:c.instructions+=1;goto B48562a;
case 0x48562c:goto L48562c;
case 0x485631:c.instructions+=5;goto B485631;
case 0x485634:c.instructions+=4;goto B485634;
case 0x485639:c.instructions+=3;goto B485639;
case 0x48563a:c.instructions+=2;goto B48563a;
case 0x48563b:c.instructions+=1;goto B48563b;
case 0x485640:goto L485640;
case 0x485643:c.instructions+=2;goto B485643;
case 0x485645:c.instructions+=1;goto B485645;
case 0x485647:goto L485647;
case 0x48564a:c.instructions+=8;goto B48564a;
case 0x48564d:c.instructions+=7;goto B48564d;
case 0x485650:c.instructions+=6;goto B485650;
case 0x485653:c.instructions+=5;goto B485653;
case 0x485656:c.instructions+=4;goto B485656;
case 0x485659:c.instructions+=3;goto B485659;
case 0x48565c:c.instructions+=2;goto B48565c;
case 0x485662:c.instructions+=1;goto B485662;
case 0x485664:goto L485664;
case 0x485666:goto L485666;
case 0x485668:c.instructions+=5;goto B485668;
case 0x48566a:c.instructions+=4;goto B48566a;
case 0x48566c:c.instructions+=3;goto B48566c;
case 0x48566d:c.instructions+=2;goto B48566d;
case 0x48566f:c.instructions+=1;goto B48566f;
case 0x485672:goto L485672;
case 0x485677:c.instructions+=2;goto B485677;
case 0x485678:c.instructions+=1;goto B485678;
case 0x48567d:goto L48567d;
case 0x485680:c.instructions+=2;goto B485680;
case 0x485685:c.instructions+=1;goto B485685;
case 0x485687:goto L485687;
case 0x48568d:c.instructions+=5;goto B48568d;
case 0x485690:c.instructions+=4;goto B485690;
case 0x485696:c.instructions+=3;goto B485696;
case 0x485697:c.instructions+=2;goto B485697;
case 0x485698:c.instructions+=1;goto B485698;
case 0x48569d:goto L48569d;
case 0x4856a0:c.instructions+=2;goto B4856a0;
case 0x4856a2:c.instructions+=1;goto B4856a2;
case 0x4856a4:goto L4856a4;
case 0x4856a7:c.instructions+=8;goto B4856a7;
case 0x4856aa:c.instructions+=7;goto B4856aa;
case 0x4856ad:c.instructions+=6;goto B4856ad;
case 0x4856b0:c.instructions+=5;goto B4856b0;
case 0x4856b3:c.instructions+=4;goto B4856b3;
case 0x4856b6:c.instructions+=3;goto B4856b6;
case 0x4856b9:c.instructions+=2;goto B4856b9;
case 0x4856bf:c.instructions+=1;goto B4856bf;
case 0x4856c1:goto L4856c1;
case 0x4856c3:goto L4856c3;
case 0x4856c7:c.instructions+=6;goto B4856c7;
case 0x4856c9:c.instructions+=5;goto B4856c9;
case 0x4856cf:c.instructions+=4;goto B4856cf;
case 0x4856d1:c.instructions+=3;goto B4856d1;
case 0x4856d3:c.instructions+=2;goto B4856d3;
case 0x4856d5:c.instructions+=1;goto B4856d5;
case 0x4856d8:goto L4856d8;
case 0x4856dd:c.instructions+=2;goto B4856dd;
case 0x4856de:c.instructions+=1;goto B4856de;
case 0x4856e3:goto L4856e3;
case 0x4856e6:c.instructions+=2;goto B4856e6;
case 0x4856eb:c.instructions+=1;goto B4856eb;
case 0x4856ed:goto L4856ed;
case 0x4856f3:c.instructions+=5;goto B4856f3;
case 0x4856f6:c.instructions+=4;goto B4856f6;
case 0x4856fc:c.instructions+=3;goto B4856fc;
case 0x4856fd:c.instructions+=2;goto B4856fd;
case 0x4856fe:c.instructions+=1;goto B4856fe;
case 0x485703:goto L485703;
case 0x485706:c.instructions+=2;goto B485706;
case 0x485708:c.instructions+=1;goto B485708;
case 0x48570a:goto L48570a;
case 0x48570d:c.instructions+=8;goto B48570d;
case 0x485710:c.instructions+=7;goto B485710;
case 0x485713:c.instructions+=6;goto B485713;
case 0x485716:c.instructions+=5;goto B485716;
case 0x485719:c.instructions+=4;goto B485719;
case 0x48571c:c.instructions+=3;goto B48571c;
case 0x48571f:c.instructions+=2;goto B48571f;
case 0x485725:c.instructions+=1;goto B485725;
case 0x485727:goto L485727;
case 0x485729:goto L485729;
case 0x48572b:c.instructions+=5;goto B48572b;
case 0x485731:c.instructions+=4;goto B485731;
case 0x485733:c.instructions+=3;goto B485733;
case 0x485735:c.instructions+=2;goto B485735;
case 0x485737:c.instructions+=1;goto B485737;
case 0x48573a:goto L48573a;
case 0x48573f:c.instructions+=2;goto B48573f;
case 0x485740:c.instructions+=1;goto B485740;
case 0x485745:goto L485745;
case 0x485748:c.instructions+=2;goto B485748;
case 0x48574d:c.instructions+=1;goto B48574d;
case 0x48574f:goto L48574f;
case 0x485755:c.instructions+=5;goto B485755;
case 0x485758:c.instructions+=4;goto B485758;
case 0x48575e:c.instructions+=3;goto B48575e;
case 0x48575f:c.instructions+=2;goto B48575f;
case 0x485761:c.instructions+=1;goto B485761;
case 0x485766:goto L485766;
case 0x485768:c.instructions+=3;goto B485768;
case 0x48576b:c.instructions+=2;goto B48576b;
case 0x48576d:c.instructions+=1;goto B48576d;
case 0x48576f:goto L48576f;
case 0x485772:c.instructions+=10;goto B485772;
case 0x485777:c.instructions+=9;goto B485777;
case 0x485779:c.instructions+=8;goto B485779;
case 0x48577c:c.instructions+=7;goto B48577c;
case 0x48577f:c.instructions+=6;goto B48577f;
case 0x485782:c.instructions+=5;goto B485782;
case 0x485785:c.instructions+=4;goto B485785;
case 0x485788:c.instructions+=3;goto B485788;
case 0x48578b:c.instructions+=2;goto B48578b;
case 0x48578e:c.instructions+=1;goto B48578e;
case 0x485794:goto L485794;
case 0x485796:goto L485796;
case 0x485799:c.instructions+=2;goto B485799;
case 0x48579b:c.instructions+=1;goto B48579b;
case 0x48579d:goto L48579d;
case 0x48579f:goto L48579f;
case 0x4857a1:c.instructions+=4;goto B4857a1;
case 0x4857a7:c.instructions+=3;goto B4857a7;
case 0x4857a9:c.instructions+=2;goto B4857a9;
case 0x4857ab:c.instructions+=1;goto B4857ab;
case 0x4857ae:goto L4857ae;
case 0x4857b3:c.instructions+=2;goto B4857b3;
case 0x4857b4:c.instructions+=1;goto B4857b4;
case 0x4857b9:goto L4857b9;
case 0x4857bc:c.instructions+=2;goto B4857bc;
case 0x4857c1:c.instructions+=1;goto B4857c1;
case 0x4857c3:goto L4857c3;
case 0x4857c9:c.instructions+=5;goto B4857c9;
case 0x4857cc:c.instructions+=4;goto B4857cc;
case 0x4857d2:c.instructions+=3;goto B4857d2;
case 0x4857d3:c.instructions+=2;goto B4857d3;
case 0x4857d4:c.instructions+=1;goto B4857d4;
case 0x4857d9:goto L4857d9;
case 0x4857dc:c.instructions+=2;goto B4857dc;
case 0x4857de:c.instructions+=1;goto B4857de;
case 0x4857e0:goto L4857e0;
case 0x4857e3:c.instructions+=8;goto B4857e3;
case 0x4857e6:c.instructions+=7;goto B4857e6;
case 0x4857e9:c.instructions+=6;goto B4857e9;
case 0x4857ec:c.instructions+=5;goto B4857ec;
case 0x4857ef:c.instructions+=4;goto B4857ef;
case 0x4857f2:c.instructions+=3;goto B4857f2;
case 0x4857f5:c.instructions+=2;goto B4857f5;
case 0x4857fb:c.instructions+=1;goto B4857fb;
case 0x4857fd:goto L4857fd;
case 0x4857ff:goto L4857ff;
case 0x485801:c.instructions+=5;goto B485801;
case 0x485807:c.instructions+=4;goto B485807;
case 0x485809:c.instructions+=3;goto B485809;
case 0x48580b:c.instructions+=2;goto B48580b;
case 0x48580d:c.instructions+=1;goto B48580d;
case 0x485810:goto L485810;
case 0x485815:c.instructions+=2;goto B485815;
case 0x485816:c.instructions+=1;goto B485816;
case 0x48581b:goto L48581b;
case 0x48581e:c.instructions+=2;goto B48581e;
case 0x485823:c.instructions+=1;goto B485823;
case 0x485825:goto L485825;
case 0x48582b:c.instructions+=5;goto B48582b;
case 0x48582e:c.instructions+=4;goto B48582e;
case 0x485834:c.instructions+=3;goto B485834;
case 0x485835:c.instructions+=2;goto B485835;
case 0x485836:c.instructions+=1;goto B485836;
case 0x48583b:goto L48583b;
case 0x48583e:c.instructions+=2;goto B48583e;
case 0x485840:c.instructions+=1;goto B485840;
case 0x485842:goto L485842;
case 0x485845:c.instructions+=8;goto B485845;
case 0x485848:c.instructions+=7;goto B485848;
case 0x48584b:c.instructions+=6;goto B48584b;
case 0x48584e:c.instructions+=5;goto B48584e;
case 0x485851:c.instructions+=4;goto B485851;
case 0x485854:c.instructions+=3;goto B485854;
case 0x485857:c.instructions+=2;goto B485857;
case 0x48585d:c.instructions+=1;goto B48585d;
case 0x48585f:goto L48585f;
case 0x485861:goto L485861;
case 0x485863:c.instructions+=5;goto B485863;
case 0x485869:c.instructions+=4;goto B485869;
case 0x48586b:c.instructions+=3;goto B48586b;
case 0x48586d:c.instructions+=2;goto B48586d;
case 0x48586f:c.instructions+=1;goto B48586f;
case 0x485872:goto L485872;
case 0x485877:c.instructions+=2;goto B485877;
case 0x485878:c.instructions+=1;goto B485878;
case 0x48587d:goto L48587d;
case 0x485880:c.instructions+=2;goto B485880;
case 0x485885:c.instructions+=1;goto B485885;
case 0x485887:goto L485887;
case 0x48588d:c.instructions+=5;goto B48588d;
case 0x485890:c.instructions+=4;goto B485890;
case 0x485896:c.instructions+=3;goto B485896;
case 0x485897:c.instructions+=2;goto B485897;
case 0x485898:c.instructions+=1;goto B485898;
case 0x48589d:goto L48589d;
case 0x4858a0:c.instructions+=2;goto B4858a0;
case 0x4858a2:c.instructions+=1;goto B4858a2;
case 0x4858a4:goto L4858a4;
case 0x4858a7:c.instructions+=8;goto B4858a7;
case 0x4858aa:c.instructions+=7;goto B4858aa;
case 0x4858ad:c.instructions+=6;goto B4858ad;
case 0x4858b0:c.instructions+=5;goto B4858b0;
case 0x4858b3:c.instructions+=4;goto B4858b3;
case 0x4858b6:c.instructions+=3;goto B4858b6;
case 0x4858b9:c.instructions+=2;goto B4858b9;
case 0x4858bf:c.instructions+=1;goto B4858bf;
case 0x4858c1:goto L4858c1;
case 0x4858c3:goto L4858c3;
case 0x4858c5:c.instructions+=5;goto B4858c5;
case 0x4858cb:c.instructions+=4;goto B4858cb;
case 0x4858cd:c.instructions+=3;goto B4858cd;
case 0x4858cf:c.instructions+=2;goto B4858cf;
case 0x4858d1:c.instructions+=1;goto B4858d1;
case 0x4858d4:goto L4858d4;
case 0x4858d9:c.instructions+=2;goto B4858d9;
case 0x4858da:c.instructions+=1;goto B4858da;
case 0x4858df:goto L4858df;
case 0x4858e2:c.instructions+=2;goto B4858e2;
case 0x4858e7:c.instructions+=1;goto B4858e7;
case 0x4858e9:goto L4858e9;
case 0x4858ef:c.instructions+=5;goto B4858ef;
case 0x4858f2:c.instructions+=4;goto B4858f2;
case 0x4858f8:c.instructions+=3;goto B4858f8;
case 0x4858f9:c.instructions+=2;goto B4858f9;
case 0x4858fb:c.instructions+=1;goto B4858fb;
case 0x485900:goto L485900;
case 0x485903:c.instructions+=2;goto B485903;
case 0x485905:c.instructions+=1;goto B485905;
case 0x485907:goto L485907;
case 0x48590a:c.instructions+=10;goto B48590a;
case 0x48590d:c.instructions+=9;goto B48590d;
case 0x485910:c.instructions+=8;goto B485910;
case 0x485913:c.instructions+=7;goto B485913;
case 0x485916:c.instructions+=6;goto B485916;
case 0x485919:c.instructions+=5;goto B485919;
case 0x48591c:c.instructions+=4;goto B48591c;
case 0x485922:c.instructions+=3;goto B485922;
case 0x485926:c.instructions+=2;goto B485926;
case 0x485929:c.instructions+=1;goto B485929;
case 0x48592b:goto L48592b;
case 0x48592d:goto L48592d;
case 0x48592f:c.instructions+=5;goto B48592f;
case 0x485935:c.instructions+=4;goto B485935;
case 0x485937:c.instructions+=3;goto B485937;
case 0x485939:c.instructions+=2;goto B485939;
case 0x48593b:c.instructions+=1;goto B48593b;
case 0x48593e:goto L48593e;
case 0x485943:c.instructions+=2;goto B485943;
case 0x485944:c.instructions+=1;goto B485944;
case 0x485949:goto L485949;
case 0x48594c:c.instructions+=2;goto B48594c;
case 0x485951:c.instructions+=1;goto B485951;
case 0x485953:goto L485953;
case 0x485959:c.instructions+=5;goto B485959;
case 0x48595c:c.instructions+=4;goto B48595c;
case 0x485962:c.instructions+=3;goto B485962;
case 0x485963:c.instructions+=2;goto B485963;
case 0x485964:c.instructions+=1;goto B485964;
case 0x485969:goto L485969;
case 0x48596c:c.instructions+=2;goto B48596c;
case 0x48596e:c.instructions+=1;goto B48596e;
case 0x485970:goto L485970;
case 0x485973:c.instructions+=8;goto B485973;
case 0x485976:c.instructions+=7;goto B485976;
case 0x485979:c.instructions+=6;goto B485979;
case 0x48597c:c.instructions+=5;goto B48597c;
case 0x48597f:c.instructions+=4;goto B48597f;
case 0x485982:c.instructions+=3;goto B485982;
case 0x485985:c.instructions+=2;goto B485985;
case 0x48598b:c.instructions+=1;goto B48598b;
case 0x48598d:goto L48598d;
case 0x48598f:goto L48598f;
case 0x485991:c.instructions+=5;goto B485991;
case 0x485997:c.instructions+=4;goto B485997;
case 0x485999:c.instructions+=3;goto B485999;
case 0x48599b:c.instructions+=2;goto B48599b;
case 0x48599d:c.instructions+=1;goto B48599d;
case 0x4859a0:goto L4859a0;
case 0x4859a1:c.instructions+=1;goto B4859a1;
case 0x4859a2:goto L4859a2;
case 0x4859a3:c.instructions+=3;goto B4859a3;
case 0x4859a4:c.instructions+=2;goto B4859a4;
case 0x4859a5:c.instructions+=1;goto B4859a5;
case 0x4859b0:goto L4859b0;
case 0x4859b5:c.instructions+=8;goto B4859b5;
case 0x4859b7:c.instructions+=7;goto B4859b7;
case 0x4859b9:c.instructions+=6;goto B4859b9;
case 0x4859be:c.instructions+=5;goto B4859be;
case 0x4859c3:c.instructions+=4;goto B4859c3;
case 0x4859c8:c.instructions+=3;goto B4859c8;
case 0x4859c9:c.instructions+=2;goto B4859c9;
case 0x4859ce:c.instructions+=1;goto B4859ce;
case 0x4859d3:goto L4859d3;
case 0x4859d9:c.instructions+=7;goto B4859d9;
case 0x4859df:c.instructions+=6;goto B4859df;
case 0x4859e4:c.instructions+=5;goto B4859e4;
case 0x4859e5:c.instructions+=4;goto B4859e5;
case 0x4859e6:c.instructions+=3;goto B4859e6;
case 0x4859e7:c.instructions+=2;goto B4859e7;
case 0x4859ec:c.instructions+=1;goto B4859ec;
case 0x4859f1:goto L4859f1;
case 0x4859f6:c.instructions+=2;goto B4859f6;
case 0x4859f7:c.instructions+=1;goto B4859f7;
case 0x4859fc:goto L4859fc;
case 0x4859ff:c.instructions+=2;goto B4859ff;
case 0x485a04:c.instructions+=1;goto B485a04;
case 0x485a06:goto L485a06;
case 0x485a0c:c.instructions+=5;goto B485a0c;
case 0x485a0f:c.instructions+=4;goto B485a0f;
case 0x485a15:c.instructions+=3;goto B485a15;
case 0x485a16:c.instructions+=2;goto B485a16;
case 0x485a1b:c.instructions+=1;goto B485a1b;
case 0x485a20:goto L485a20;
case 0x485a23:c.instructions+=2;goto B485a23;
case 0x485a25:c.instructions+=1;goto B485a25;
case 0x485a27:goto L485a27;
case 0x485a29:c.instructions+=1;goto B485a29;
case 0x485a2e:goto L485a2e;
case 0x485a33:c.instructions+=2;goto B485a33;
case 0x485a35:c.instructions+=1;goto B485a35;
case 0x485a3a:goto L485a3a;
case 0x485a3c:c.instructions+=3;goto B485a3c;
case 0x485a41:c.instructions+=2;goto B485a41;
case 0x485a43:c.instructions+=1;goto B485a43;
case 0x485a50:goto L485a50;
case 0x485a51:c.instructions+=8;goto B485a51;
case 0x485a55:c.instructions+=7;goto B485a55;
case 0x485a56:c.instructions+=6;goto B485a56;
case 0x485a57:c.instructions+=5;goto B485a57;
case 0x485a5a:c.instructions+=4;goto B485a5a;
case 0x485a61:c.instructions+=3;goto B485a61;
case 0x485a62:c.instructions+=2;goto B485a62;
case 0x485a63:c.instructions+=1;goto B485a63;
case 0x485a68:goto L485a68;
case 0x485a6e:c.instructions+=4;goto B485a6e;
case 0x485a6f:c.instructions+=3;goto B485a6f;
case 0x485a71:c.instructions+=2;goto B485a71;
case 0x485a73:c.instructions+=1;goto B485a73;
case 0x485a78:goto L485a78;
case 0x485a7e:c.instructions+=3;goto B485a7e;
case 0x485a81:c.instructions+=2;goto B485a81;
case 0x485a83:c.instructions+=1;goto B485a83;
case 0x485a85:goto L485a85;
case 0x485a8a:c.instructions+=5;goto B485a8a;
case 0x485a8d:c.instructions+=4;goto B485a8d;
case 0x485a92:c.instructions+=3;goto B485a92;
case 0x485a93:c.instructions+=2;goto B485a93;
case 0x485a94:c.instructions+=1;goto B485a94;
case 0x485a99:goto L485a99;
case 0x485a9c:c.instructions+=1;goto B485a9c;
case 0x485a9e:goto L485a9e;
case 0x485aa5:c.instructions+=9;goto B485aa5;
case 0x485aa6:c.instructions+=8;goto B485aa6;
case 0x485aab:c.instructions+=7;goto B485aab;
case 0x485aac:c.instructions+=6;goto B485aac;
case 0x485aae:c.instructions+=5;goto B485aae;
case 0x485aaf:c.instructions+=4;goto B485aaf;
case 0x485ab0:c.instructions+=3;goto B485ab0;
case 0x485ab1:c.instructions+=2;goto B485ab1;
case 0x485ab8:c.instructions+=1;goto B485ab8;
case 0x485abd:goto L485abd;
case 0x485ac2:c.instructions+=1;goto B485ac2;
case 0x485ac7:goto L485ac7;
case 0x485aca:c.instructions+=2;goto B485aca;
case 0x485acc:c.instructions+=1;goto B485acc;
case 0x485ace:goto L485ace;
case 0x485ad5:c.instructions+=5;goto B485ad5;
case 0x485ad8:c.instructions+=4;goto B485ad8;
case 0x485ade:c.instructions+=3;goto B485ade;
case 0x485ae4:c.instructions+=2;goto B485ae4;
case 0x485aea:c.instructions+=1;goto B485aea;
case 0x485aec:goto L485aec;
case 0x485aee:goto L485aee;
case 0x485af5:c.instructions+=8;goto B485af5;
case 0x485af8:c.instructions+=7;goto B485af8;
case 0x485afe:c.instructions+=6;goto B485afe;
case 0x485aff:c.instructions+=5;goto B485aff;
case 0x485b05:c.instructions+=4;goto B485b05;
case 0x485b06:c.instructions+=3;goto B485b06;
case 0x485b07:c.instructions+=2;goto B485b07;
case 0x485b08:c.instructions+=1;goto B485b08;
case 0x485b10:goto L485b10;
case 0x485b16:c.instructions+=3;goto B485b16;
case 0x485b19:c.instructions+=2;goto B485b19;
case 0x485b1b:c.instructions+=1;goto B485b1b;
case 0x485b1d:goto L485b1d;
case 0x485b21:c.instructions+=3;goto B485b21;
case 0x485b24:c.instructions+=2;goto B485b24;
case 0x485b27:c.instructions+=1;goto B485b27;
case 0x485b29:goto L485b29;
case 0x485b2a:c.instructions+=1;goto B485b2a;
case 0x485b2c:goto L485b2c;
case 0x485b2f:c.instructions+=1;goto B485b2f;
case 0x485b31:goto L485b31;
case 0x485b34:goto L485b34;
case 0x485b36:c.instructions+=1;goto B485b36;
case 0x485b38:goto L485b38;
case 0x485b39:c.instructions+=1;goto B485b39;
case 0x485b3e:goto L485b3e;
case 0x485b3f:goto L485b3f;
case 0x485b41:c.instructions+=1;goto B485b41;
case 0x485b50:goto L485b50;
case 0x485b52:c.instructions+=15;goto B485b52;
case 0x485b57:c.instructions+=14;goto B485b57;
case 0x485b5d:c.instructions+=13;goto B485b5d;
case 0x485b5e:c.instructions+=12;goto B485b5e;
case 0x485b65:c.instructions+=11;goto B485b65;
case 0x485b66:c.instructions+=10;goto B485b66;
case 0x485b67:c.instructions+=9;goto B485b67;
case 0x485b68:c.instructions+=8;goto B485b68;
case 0x485b6a:c.instructions+=7;goto B485b6a;
case 0x485b6e:c.instructions+=6;goto B485b6e;
case 0x485b74:c.instructions+=5;goto B485b74;
case 0x485b77:c.instructions+=4;goto B485b77;
case 0x485b79:c.instructions+=3;goto B485b79;
case 0x485b7b:c.instructions+=2;goto B485b7b;
case 0x485b7f:c.instructions+=1;goto B485b7f;
case 0x485b81:goto L485b81;
case 0x485b83:c.instructions+=2;goto B485b83;
case 0x485b85:c.instructions+=1;goto B485b85;
case 0x485b87:goto L485b87;
case 0x485b88:c.instructions+=4;goto B485b88;
case 0x485b8a:c.instructions+=3;goto B485b8a;
case 0x485b8c:c.instructions+=2;goto B485b8c;
case 0x485b8f:c.instructions+=1;goto B485b8f;
case 0x485b94:goto L485b94;
case 0x485b97:c.instructions+=3;goto B485b97;
case 0x485b99:c.instructions+=2;goto B485b99;
case 0x485b9b:c.instructions+=1;goto B485b9b;
case 0x485b9d:goto L485b9d;
case 0x485b9f:c.instructions+=1;goto B485b9f;
case 0x485ba1:goto L485ba1;
case 0x485ba3:c.instructions+=1;goto B485ba3;
case 0x485ba5:goto L485ba5;
case 0x485ba7:c.instructions+=5;goto B485ba7;
case 0x485baa:c.instructions+=4;goto B485baa;
case 0x485bac:c.instructions+=3;goto B485bac;
case 0x485bad:c.instructions+=2;goto B485bad;
case 0x485bb0:c.instructions+=1;goto B485bb0;
case 0x485bb5:goto L485bb5;
case 0x485bb7:c.instructions+=3;goto B485bb7;
case 0x485bba:c.instructions+=2;goto B485bba;
case 0x485bbc:c.instructions+=1;goto B485bbc;
case 0x485bbe:goto L485bbe;
case 0x485bbf:c.instructions+=1;goto B485bbf;
case 0x485bc4:goto L485bc4;
case 0x485bc7:goto L485bc7;
case 0x485bca:goto L485bca;
case 0x485bcd:c.instructions+=3;goto B485bcd;
case 0x485bcf:c.instructions+=2;goto B485bcf;
case 0x485bd0:c.instructions+=1;goto B485bd0;
case 0x485bd2:goto L485bd2;
case 0x485bd3:c.instructions+=1;goto B485bd3;
case 0x485bd8:goto L485bd8;
case 0x485bdb:c.instructions+=1;goto B485bdb;
case 0x485bde:goto L485bde;
case 0x485be2:c.instructions+=9;goto B485be2;
case 0x485be5:c.instructions+=8;goto B485be5;
case 0x485be8:c.instructions+=7;goto B485be8;
case 0x485beb:c.instructions+=6;goto B485beb;
case 0x485bf1:c.instructions+=5;goto B485bf1;
case 0x485bf2:c.instructions+=4;goto B485bf2;
case 0x485bf3:c.instructions+=3;goto B485bf3;
case 0x485bfa:c.instructions+=2;goto B485bfa;
case 0x485bfd:c.instructions+=1;goto B485bfd;
case 0x485c00:goto L485c00;
case 0x485c02:c.instructions+=20;goto B485c02;
case 0x485c04:c.instructions+=19;goto B485c04;
case 0x485c07:c.instructions+=18;goto B485c07;
case 0x485c0a:c.instructions+=17;goto B485c0a;
case 0x485c0d:c.instructions+=16;goto B485c0d;
case 0x485c10:c.instructions+=15;goto B485c10;
case 0x485c13:c.instructions+=14;goto B485c13;
case 0x485c16:c.instructions+=13;goto B485c16;
case 0x485c19:c.instructions+=12;goto B485c19;
case 0x485c1c:c.instructions+=11;goto B485c1c;
case 0x485c1f:c.instructions+=10;goto B485c1f;
case 0x485c22:c.instructions+=9;goto B485c22;
case 0x485c25:c.instructions+=8;goto B485c25;
case 0x485c28:c.instructions+=7;goto B485c28;
case 0x485c2b:c.instructions+=6;goto B485c2b;
case 0x485c31:c.instructions+=5;goto B485c31;
case 0x485c34:c.instructions+=4;goto B485c34;
case 0x485c37:c.instructions+=3;goto B485c37;
case 0x485c3a:c.instructions+=2;goto B485c3a;
case 0x485c3d:c.instructions+=1;goto B485c3d;
case 0x485c40:goto L485c40;
case 0x485c45:c.instructions+=1;goto B485c45;
case 0x485c50:goto L485c50;
case 0x485c55:c.instructions+=1;goto B485c55;
case 0x485c60:goto L485c60;
case 0x485c65:c.instructions+=1;goto B485c65;
case 0x485c70:goto L485c70;
case 0x485c75:c.instructions+=1;goto B485c75;
case 0x485c80:goto L485c80;
case 0x485c82:c.instructions+=15;goto B485c82;
case 0x485c87:c.instructions+=14;goto B485c87;
case 0x485c8d:c.instructions+=13;goto B485c8d;
case 0x485c8e:c.instructions+=12;goto B485c8e;
case 0x485c95:c.instructions+=11;goto B485c95;
case 0x485c96:c.instructions+=10;goto B485c96;
case 0x485c97:c.instructions+=9;goto B485c97;
case 0x485c98:c.instructions+=8;goto B485c98;
case 0x485c9a:c.instructions+=7;goto B485c9a;
case 0x485c9e:c.instructions+=6;goto B485c9e;
case 0x485ca4:c.instructions+=5;goto B485ca4;
case 0x485ca7:c.instructions+=4;goto B485ca7;
case 0x485ca9:c.instructions+=3;goto B485ca9;
case 0x485cab:c.instructions+=2;goto B485cab;
case 0x485caf:c.instructions+=1;goto B485caf;
case 0x485cb1:goto L485cb1;
case 0x485cb3:c.instructions+=2;goto B485cb3;
case 0x485cb5:c.instructions+=1;goto B485cb5;
case 0x485cb7:goto L485cb7;
case 0x485cba:c.instructions+=2;goto B485cba;
case 0x485cbc:c.instructions+=1;goto B485cbc;
case 0x485cbe:goto L485cbe;
case 0x485cbf:c.instructions+=1;goto B485cbf;
case 0x485cc4:goto L485cc4;
case 0x485cc7:c.instructions+=1;goto B485cc7;
case 0x485cca:goto L485cca;
case 0x485ccf:c.instructions+=2;goto B485ccf;
case 0x485cd1:c.instructions+=1;goto B485cd1;
case 0x485cd3:goto L485cd3;
case 0x485cd4:c.instructions+=1;goto B485cd4;
case 0x485cd9:goto L485cd9;
case 0x485cdc:c.instructions+=1;goto B485cdc;
case 0x485ce2:goto L485ce2;
case 0x485ce5:c.instructions+=2;goto B485ce5;
case 0x485ce7:c.instructions+=1;goto B485ce7;
case 0x485ce9:goto L485ce9;
case 0x485cea:c.instructions+=1;goto B485cea;
case 0x485cef:goto L485cef;
case 0x485cf2:c.instructions+=2;goto B485cf2;
case 0x485cf5:c.instructions+=1;goto B485cf5;
case 0x485cfb:goto L485cfb;
case 0x485d00:c.instructions+=2;goto B485d00;
case 0x485d02:c.instructions+=1;goto B485d02;
case 0x485d04:goto L485d04;
case 0x485d05:c.instructions+=1;goto B485d05;
case 0x485d0a:goto L485d0a;
case 0x485d10:c.instructions+=2;goto B485d10;
case 0x485d11:c.instructions+=1;goto B485d11;
case 0x485d16:goto L485d16;
case 0x485d19:c.instructions+=1;goto B485d19;
case 0x485d1f:goto L485d1f;
case 0x485d21:c.instructions+=3;goto B485d21;
case 0x485d27:c.instructions+=2;goto B485d27;
case 0x485d2f:c.instructions+=1;goto B485d2f;
case 0x485d34:goto L485d34;
case 0x485d38:c.instructions+=5;goto B485d38;
case 0x485d39:c.instructions+=4;goto B485d39;
case 0x485d3a:c.instructions+=3;goto B485d3a;
case 0x485d41:c.instructions+=2;goto B485d41;
case 0x485d44:c.instructions+=1;goto B485d44;
case 0x485d50:goto L485d50;
case 0x485d52:c.instructions+=19;goto B485d52;
case 0x485d54:c.instructions+=18;goto B485d54;
case 0x485d57:c.instructions+=17;goto B485d57;
case 0x485d5a:c.instructions+=16;goto B485d5a;
case 0x485d5d:c.instructions+=15;goto B485d5d;
case 0x485d60:c.instructions+=14;goto B485d60;
case 0x485d63:c.instructions+=13;goto B485d63;
case 0x485d66:c.instructions+=12;goto B485d66;
case 0x485d69:c.instructions+=11;goto B485d69;
case 0x485d6c:c.instructions+=10;goto B485d6c;
case 0x485d6f:c.instructions+=9;goto B485d6f;
case 0x485d72:c.instructions+=8;goto B485d72;
case 0x485d75:c.instructions+=7;goto B485d75;
case 0x485d78:c.instructions+=6;goto B485d78;
case 0x485d7b:c.instructions+=5;goto B485d7b;
case 0x485d81:c.instructions+=4;goto B485d81;
case 0x485d84:c.instructions+=3;goto B485d84;
case 0x485d87:c.instructions+=2;goto B485d87;
case 0x485d8a:c.instructions+=1;goto B485d8a;
case 0x485d90:goto L485d90;
case 0x485d95:c.instructions+=1;goto B485d95;
case 0x485da0:goto L485da0;
case 0x485da5:c.instructions+=1;goto B485da5;
case 0x485db0:goto L485db0;
case 0x485db5:c.instructions+=1;goto B485db5;
case 0x485dc0:goto L485dc0;
case 0x485dc5:c.instructions+=1;goto B485dc5;
case 0x485dd0:goto L485dd0;
case 0x485dd2:c.instructions+=15;goto B485dd2;
case 0x485dd7:c.instructions+=14;goto B485dd7;
case 0x485ddd:c.instructions+=13;goto B485ddd;
case 0x485dde:c.instructions+=12;goto B485dde;
case 0x485de5:c.instructions+=11;goto B485de5;
case 0x485de6:c.instructions+=10;goto B485de6;
case 0x485de7:c.instructions+=9;goto B485de7;
case 0x485de8:c.instructions+=8;goto B485de8;
case 0x485dea:c.instructions+=7;goto B485dea;
case 0x485dee:c.instructions+=6;goto B485dee;
case 0x485df4:c.instructions+=5;goto B485df4;
case 0x485df7:c.instructions+=4;goto B485df7;
case 0x485df9:c.instructions+=3;goto B485df9;
case 0x485dfb:c.instructions+=2;goto B485dfb;
case 0x485dff:c.instructions+=1;goto B485dff;
case 0x485e01:goto L485e01;
case 0x485e02:c.instructions+=1;goto B485e02;
case 0x485e07:goto L485e07;
case 0x485e0a:c.instructions+=1;goto B485e0a;
case 0x485e0d:goto L485e0d;
case 0x485e12:c.instructions+=2;goto B485e12;
case 0x485e14:c.instructions+=1;goto B485e14;
case 0x485e16:goto L485e16;
case 0x485e17:c.instructions+=1;goto B485e17;
case 0x485e1c:goto L485e1c;
case 0x485e1f:c.instructions+=1;goto B485e1f;
case 0x485e25:goto L485e25;
case 0x485e28:c.instructions+=2;goto B485e28;
case 0x485e2a:c.instructions+=1;goto B485e2a;
case 0x485e2c:goto L485e2c;
case 0x485e2d:c.instructions+=1;goto B485e2d;
case 0x485e32:goto L485e32;
case 0x485e35:c.instructions+=2;goto B485e35;
case 0x485e38:c.instructions+=1;goto B485e38;
case 0x485e3e:goto L485e3e;
case 0x485e43:c.instructions+=2;goto B485e43;
case 0x485e45:c.instructions+=1;goto B485e45;
case 0x485e47:goto L485e47;
case 0x485e48:c.instructions+=1;goto B485e48;
case 0x485e4d:goto L485e4d;
case 0x485e52:c.instructions+=2;goto B485e52;
case 0x485e53:c.instructions+=1;goto B485e53;
case 0x485e58:goto L485e58;
case 0x485e5b:c.instructions+=1;goto B485e5b;
case 0x485e61:goto L485e61;
case 0x485e63:c.instructions+=3;goto B485e63;
case 0x485e69:c.instructions+=2;goto B485e69;
case 0x485e71:c.instructions+=1;goto B485e71;
case 0x485e76:goto L485e76;
case 0x485e7a:c.instructions+=5;goto B485e7a;
case 0x485e7b:c.instructions+=4;goto B485e7b;
case 0x485e7c:c.instructions+=3;goto B485e7c;
case 0x485e83:c.instructions+=2;goto B485e83;
case 0x485e86:c.instructions+=1;goto B485e86;
case 0x485e90:goto L485e90;
case 0x485e93:c.instructions+=9;goto B485e93;
case 0x485e94:c.instructions+=8;goto B485e94;
case 0x485e95:c.instructions+=7;goto B485e95;
case 0x485e97:c.instructions+=6;goto B485e97;
case 0x485e9a:c.instructions+=5;goto B485e9a;
case 0x485e9d:c.instructions+=4;goto B485e9d;
case 0x485e9f:c.instructions+=3;goto B485e9f;
case 0x485ea1:c.instructions+=2;goto B485ea1;
case 0x485ea5:c.instructions+=1;goto B485ea5;
case 0x485eab:goto L485eab;
case 0x485eac:c.instructions+=2;goto B485eac;
case 0x485ead:c.instructions+=1;goto B485ead;
case 0x485eb0:goto L485eb0;
case 0x485eb3:c.instructions+=5;goto B485eb3;
case 0x485eb6:c.instructions+=4;goto B485eb6;
case 0x485eb8:c.instructions+=3;goto B485eb8;
case 0x485eba:c.instructions+=2;goto B485eba;
case 0x485ebc:c.instructions+=1;goto B485ebc;
case 0x485ec2:goto L485ec2;
case 0x485ec5:c.instructions+=2;goto B485ec5;
case 0x485ec9:c.instructions+=1;goto B485ec9;
case 0x485ecf:goto L485ecf;
case 0x485ed0:goto L485ed0;
case 0x485ed2:c.instructions+=7;goto B485ed2;
case 0x485ed5:c.instructions+=6;goto B485ed5;
case 0x485ed8:c.instructions+=5;goto B485ed8;
case 0x485edc:c.instructions+=4;goto B485edc;
case 0x485edf:c.instructions+=3;goto B485edf;
case 0x485ee1:c.instructions+=2;goto B485ee1;
case 0x485ee3:c.instructions+=1;goto B485ee3;
case 0x485ee5:goto L485ee5;
case 0x485ee8:c.instructions+=3;goto B485ee8;
case 0x485eeb:c.instructions+=2;goto B485eeb;
case 0x485eec:c.instructions+=1;goto B485eec;
case 0x485ef1:goto L485ef1;
case 0x485ef5:c.instructions+=6;goto B485ef5;
case 0x485ef8:c.instructions+=5;goto B485ef8;
case 0x485efb:c.instructions+=4;goto B485efb;
case 0x485efe:c.instructions+=3;goto B485efe;
case 0x485eff:c.instructions+=2;goto B485eff;
case 0x485f01:c.instructions+=1;goto B485f01;
case 0x485f03:goto L485f03;
case 0x485f07:c.instructions+=4;goto B485f07;
case 0x485f0a:c.instructions+=3;goto B485f0a;
case 0x485f0d:c.instructions+=2;goto B485f0d;
case 0x485f0e:c.instructions+=1;goto B485f0e;
case 0x485f13:goto L485f13;
case 0x485f16:c.instructions+=4;goto B485f16;
case 0x485f1a:c.instructions+=3;goto B485f1a;
case 0x485f1d:c.instructions+=2;goto B485f1d;
case 0x485f1e:c.instructions+=1;goto B485f1e;
case 0x485f23:goto L485f23;
case 0x485f26:c.instructions+=3;goto B485f26;
case 0x485f29:c.instructions+=2;goto B485f29;
case 0x485f2a:c.instructions+=1;goto B485f2a;
case 0x485f2f:goto L485f2f;
case 0x485f32:c.instructions+=5;goto B485f32;
case 0x485f35:c.instructions+=4;goto B485f35;
case 0x485f38:c.instructions+=3;goto B485f38;
case 0x485f3a:c.instructions+=2;goto B485f3a;
case 0x485f3c:c.instructions+=1;goto B485f3c;
case 0x485f3e:goto L485f3e;
case 0x485f40:goto L485f40;
case 0x485f43:c.instructions+=6;goto B485f43;
case 0x485f46:c.instructions+=5;goto B485f46;
case 0x485f49:c.instructions+=4;goto B485f49;
case 0x485f4c:c.instructions+=3;goto B485f4c;
case 0x485f4e:c.instructions+=2;goto B485f4e;
case 0x485f4f:c.instructions+=1;goto B485f4f;
case 0x485f54:goto L485f54;
case 0x485f57:c.instructions+=3;goto B485f57;
case 0x485f58:c.instructions+=2;goto B485f58;
case 0x485f5a:c.instructions+=1;goto B485f5a;
case 0x485f5c:goto L485f5c;
case 0x485f60:c.instructions+=11;goto B485f60;
case 0x485f63:c.instructions+=10;goto B485f63;
case 0x485f67:c.instructions+=9;goto B485f67;
case 0x485f6a:c.instructions+=8;goto B485f6a;
case 0x485f6d:c.instructions+=7;goto B485f6d;
case 0x485f71:c.instructions+=6;goto B485f71;
case 0x485f74:c.instructions+=5;goto B485f74;
case 0x485f75:c.instructions+=4;goto B485f75;
case 0x485f78:c.instructions+=3;goto B485f78;
case 0x485f7a:c.instructions+=2;goto B485f7a;
case 0x485f7e:c.instructions+=1;goto B485f7e;
case 0x485f84:goto L485f84;
case 0x485f87:c.instructions+=4;goto B485f87;
case 0x485f8a:c.instructions+=3;goto B485f8a;
case 0x485f8b:c.instructions+=2;goto B485f8b;
case 0x485f8d:c.instructions+=1;goto B485f8d;
case 0x485f93:goto L485f93;
case 0x485f94:c.instructions+=1;goto B485f94;
case 0x485f95:goto L485f95;
case 0x485f96:c.instructions+=3;goto B485f96;
case 0x485f97:c.instructions+=2;goto B485f97;
case 0x485f9a:c.instructions+=1;goto B485f9a;
case 0x485fa0:goto L485fa0;
case 0x485fa1:c.instructions+=11;goto B485fa1;
case 0x485fa2:c.instructions+=10;goto B485fa2;
case 0x485fa3:c.instructions+=9;goto B485fa3;
case 0x485fa4:c.instructions+=8;goto B485fa4;
case 0x485fa6:c.instructions+=7;goto B485fa6;
case 0x485fa9:c.instructions+=6;goto B485fa9;
case 0x485fac:c.instructions+=5;goto B485fac;
case 0x485fae:c.instructions+=4;goto B485fae;
case 0x485fb0:c.instructions+=3;goto B485fb0;
case 0x485fb1:c.instructions+=2;goto B485fb1;
case 0x485fb2:c.instructions+=1;goto B485fb2;
case 0x485fb5:goto L485fb5;
case 0x485fb8:c.instructions+=2;goto B485fb8;
case 0x485fba:c.instructions+=1;goto B485fba;
case 0x485fbd:goto L485fbd;
case 0x485fc0:c.instructions+=3;goto B485fc0;
case 0x485fc3:c.instructions+=2;goto B485fc3;
case 0x485fc6:c.instructions+=1;goto B485fc6;
case 0x485fc8:goto L485fc8;
case 0x485fcb:c.instructions+=1;goto B485fcb;
case 0x485fcd:goto L485fcd;
case 0x485fcf:goto L485fcf;
case 0x485fd2:c.instructions+=7;goto B485fd2;
case 0x485fd5:c.instructions+=6;goto B485fd5;
case 0x485fd8:c.instructions+=5;goto B485fd8;
case 0x485fdb:c.instructions+=4;goto B485fdb;
case 0x485fde:c.instructions+=3;goto B485fde;
case 0x485fe1:c.instructions+=2;goto B485fe1;
case 0x485fe5:c.instructions+=1;goto B485fe5;
case 0x485fe7:goto L485fe7;
case 0x485fea:c.instructions+=1;goto B485fea;
case 0x485fec:goto L485fec;
case 0x485fee:goto L485fee;
case 0x485ff1:c.instructions+=5;goto B485ff1;
case 0x485ff4:c.instructions+=4;goto B485ff4;
case 0x485ff7:c.instructions+=3;goto B485ff7;
case 0x485ffa:c.instructions+=2;goto B485ffa;
case 0x485ffd:c.instructions+=1;goto B485ffd;
default:missing_instruction(c.pc);}
B485005:L485005:{c.instructions+=2;NFSU2_TR(0x485005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48500f:{NFSU2_TR(0x48500f);
{goto L4850e1;}
}
B485014:L485014:{c.instructions+=4;NFSU2_TR(0x485014);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485017:{NFSU2_TR(0x485017);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48501a:{NFSU2_TR(0x48501a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48501d:{NFSU2_TR(0x48501d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485022ull));
TAIL_STATIC(0x59fa30u,59f);
}
B485022:L485022:{c.instructions+=2;NFSU2_TR(0x485022);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485024:{NFSU2_TR(0x485024);
if(r1(R+518)){{goto L4850e1;}}
}
B48502a:L48502a:{c.instructions+=3;NFSU2_TR(0x48502a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48502d:{NFSU2_TR(0x48502d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485030:{NFSU2_TR(0x485030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485035ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B485035:L485035:{c.instructions+=2;NFSU2_TR(0x485035);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485037:{NFSU2_TR(0x485037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850e1;}}
}
B48503d:L48503d:{c.instructions+=4;NFSU2_TR(0x48503d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485040:{NFSU2_TR(0x485040);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485043:{NFSU2_TR(0x485043);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B485046:{NFSU2_TR(0x485046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48504bull));
TAIL_STATIC(0x5925b0u,592);
}
B48504b:L48504b:{c.instructions+=4;NFSU2_TR(0x48504b);
{u32 ea_=u32(u32(7885072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B485051:{NFSU2_TR(0x485051);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B485053:{NFSU2_TR(0x485053);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B485056:{NFSU2_TR(0x485056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850a6;}}
}
B485058:L485058:{c.instructions+=3;NFSU2_TR(0x485058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48505b:{NFSU2_TR(0x48505b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48505e:{NFSU2_TR(0x48505e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485063ull));
TAIL_STATIC(0x431dd0u,431);
}
B485063:L485063:{c.instructions+=2;NFSU2_TR(0x485063);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485065:{NFSU2_TR(0x485065);
if(r1(R+518)){{goto L4850a6;}}
}
B485067:L485067:{c.instructions+=3;NFSU2_TR(0x485067);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B48506c:{NFSU2_TR(0x48506c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48506f:{NFSU2_TR(0x48506f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850a6;}}
}
B485071:L485071:{c.instructions+=3;NFSU2_TR(0x485071);
__builtin_memmove((R+0),gp(0x8a329c),4);
}
B485076:{NFSU2_TR(0x485076);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485078:{NFSU2_TR(0x485078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850a6;}}
}
B48507a:L48507a:{c.instructions+=3;NFSU2_TR(0x48507a);
__builtin_memmove((R+0),gp(0x88ec68),4);
}
B48507f:{NFSU2_TR(0x48507f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485081:{NFSU2_TR(0x485081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850a6;}}
}
B485083:L485083:{c.instructions+=5;NFSU2_TR(0x485083);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B485088:{NFSU2_TR(0x485088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48508b:{NFSU2_TR(0x48508b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48508e:{NFSU2_TR(0x48508e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485090:{NFSU2_TR(0x485090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4850a6;}}
}
B485092:L485092:{c.instructions+=7;NFSU2_TR(0x485092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485095:{NFSU2_TR(0x485095);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485097:{NFSU2_TR(0x485097);
u8 U[4];
w4(U+0,u32(0x45f4a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48509c:{NFSU2_TR(0x48509c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48509e:{NFSU2_TR(0x48509e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48509f:{NFSU2_TR(0x48509f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850a1:{NFSU2_TR(0x4850a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4850a6ull));
TAIL_STATIC(0x484510u,484);
}
B4850a6:L4850a6:{c.instructions+=8;NFSU2_TR(0x4850a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4850ac:{NFSU2_TR(0x4850ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4850b6:{NFSU2_TR(0x4850b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4850bc:{NFSU2_TR(0x4850bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850bd:{NFSU2_TR(0x4850bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850bf:{NFSU2_TR(0x4850bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850c1:{NFSU2_TR(0x4850c1);
__builtin_memmove((R+4),(R+24),4);
}
B4850c3:{NFSU2_TR(0x4850c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4850c8ull));
TAIL_STATIC(0x472af0u,472);
}
B4850c8:L4850c8:{c.instructions+=6;NFSU2_TR(0x4850c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850ca:{NFSU2_TR(0x4850ca);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850cf:{NFSU2_TR(0x4850cf);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850d4:{NFSU2_TR(0x4850d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4850d6:{NFSU2_TR(0x4850d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+4),(U+0),4);
}
B4850dc:{NFSU2_TR(0x4850dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4850e1ull));
TAIL_STATIC(0x459990u,459);
}
B4850e1:L4850e1:{c.instructions+=3;NFSU2_TR(0x4850e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4850e4:{NFSU2_TR(0x4850e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4850e7:{NFSU2_TR(0x4850e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4850ecull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B4850ec:L4850ec:{c.instructions+=3;NFSU2_TR(0x4850ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4850ee:{NFSU2_TR(0x4850ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4850ef:{NFSU2_TR(0x4850ef);
if(r1(R+518)){{goto L485106;}}
}
B4850f1:L4850f1:{c.instructions+=3;NFSU2_TR(0x4850f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4850f7:{NFSU2_TR(0x4850f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4850f9:{NFSU2_TR(0x4850f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485106;}}
}
B4850fb:L4850fb:{c.instructions+=2;NFSU2_TR(0x4850fb);
__builtin_memmove((R+4),(R+24),4);
}
B4850fd:{NFSU2_TR(0x4850fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485102ull));
TAIL_STATIC(0x45f2d0u,45f);
}
B485102:L485102:{c.instructions+=2;NFSU2_TR(0x485102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485103:{NFSU2_TR(0x485103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485106:L485106:{c.instructions+=3;NFSU2_TR(0x485106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485109:{NFSU2_TR(0x485109);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48510c:{NFSU2_TR(0x48510c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485111ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B485111:L485111:{c.instructions+=2;NFSU2_TR(0x485111);
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
B485113:{NFSU2_TR(0x485113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48512c;}}
}
B485115:L485115:{c.instructions+=3;NFSU2_TR(0x485115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48511b:{NFSU2_TR(0x48511b);
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
B48511d:{NFSU2_TR(0x48511d);
if(r1(R+518)){{goto L48512c;}}
}
B48511f:L48511f:{c.instructions+=2;NFSU2_TR(0x48511f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B485123:{NFSU2_TR(0x485123);
if(r1(R+518)){{goto L48512c;}}
}
B485125:L485125:{c.instructions+=2;NFSU2_TR(0x485125);
__builtin_memmove((R+4),(R+24),4);
}
B485127:{NFSU2_TR(0x485127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48512cull));
TAIL_STATIC(0x45f3e0u,45f);
}
B48512c:L48512c:{c.instructions+=2;NFSU2_TR(0x48512c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48512d:{NFSU2_TR(0x48512d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485130:L485130:{c.instructions+=14;NFSU2_TR(0x485130);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485136:{NFSU2_TR(0x485136);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485138:{NFSU2_TR(0x485138);
u8 U[4];
w4(U+0,u32(0x772749ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48513d:{NFSU2_TR(0x48513d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48513e:{NFSU2_TR(0x48513e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485145:{NFSU2_TR(0x485145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B485148:{NFSU2_TR(0x485148);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485149:{NFSU2_TR(0x485149);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48514a:{NFSU2_TR(0x48514a);
__builtin_memmove((R+20),(R+4),4);
}
B48514c:{NFSU2_TR(0x48514c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B485152:{NFSU2_TR(0x485152);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485154:{NFSU2_TR(0x485154);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B485156:{NFSU2_TR(0x485156);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485157:{NFSU2_TR(0x485157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48517e;}}
}
B485159:L485159:{c.instructions+=6;NFSU2_TR(0x485159);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48515f:{NFSU2_TR(0x48515f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485160:{NFSU2_TR(0x485160);
u8 U[4];
w4(U+0,u32(0x82c648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485165:{NFSU2_TR(0x485165);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48516c:{NFSU2_TR(0x48516c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
w4(U+4,u32(0x47ccd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B485176:{NFSU2_TR(0x485176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48517bull));
TAIL_STATIC(0x735900u,735);
}
B48517b:L48517b:{c.instructions+=1;NFSU2_TR(0x48517b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48517e:L48517e:{c.instructions+=3;NFSU2_TR(0x48517e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B485182:{NFSU2_TR(0x485182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485183:{NFSU2_TR(0x485183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485188ull));
TAIL_STATIC(0x734df0u,734);
}
B485188:L485188:{c.instructions+=2;NFSU2_TR(0x485188);
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
B48518b:{NFSU2_TR(0x48518b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485190ull));
TAIL_STATIC(0x734e40u,734);
}
B485190:L485190:{c.instructions+=9;NFSU2_TR(0x485190);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485194:{NFSU2_TR(0x485194);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B485198:{NFSU2_TR(0x485198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485199:{NFSU2_TR(0x485199);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48519d:{NFSU2_TR(0x48519d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851a1:{NFSU2_TR(0x4851a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851a5:{NFSU2_TR(0x4851a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4851a7:{NFSU2_TR(0x4851a7);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4851a9:{NFSU2_TR(0x4851a9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4851abull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4851ab:L4851ab:{c.instructions+=2;NFSU2_TR(0x4851ab);
__builtin_memmove((R+24),(R+0),4);
}
B4851ad:{NFSU2_TR(0x4851ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4851b2ull));
TAIL_STATIC(0x734e60u,734);
}
B4851b2:L4851b2:{c.instructions+=4;NFSU2_TR(0x4851b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851b6:{NFSU2_TR(0x4851b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4851b8:{NFSU2_TR(0x4851b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851bc:{NFSU2_TR(0x4851bc);
if(r1(R+518)){{goto L485237;}}
}
B4851be:L4851be:{c.instructions+=5;NFSU2_TR(0x4851be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4851c4:{NFSU2_TR(0x4851c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4851ca:{NFSU2_TR(0x4851ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4851cd:{NFSU2_TR(0x4851cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4851cf:{NFSU2_TR(0x4851cf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4851d5;}}
}
B4851d1:L4851d1:{c.instructions+=2;NFSU2_TR(0x4851d1);
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
B4851d3:{NFSU2_TR(0x4851d3);
{goto L4851df;}
}
B4851d5:L4851d5:{c.instructions+=2;NFSU2_TR(0x4851d5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4851d8:{NFSU2_TR(0x4851d8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4851df;}}
}
B4851da:L4851da:{c.instructions+=1;NFSU2_TR(0x4851da);
w4(R+0,u32(0x3cull));
}
B4851df:L4851df:{c.instructions+=17;NFSU2_TR(0x4851df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4851e0:{NFSU2_TR(0x4851e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4851e3:{NFSU2_TR(0x4851e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4851e4:{NFSU2_TR(0x4851e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4851e5:{NFSU2_TR(0x4851e5);
u8 U[4];
w4(U+0,u32(0x82c568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4851ea:{NFSU2_TR(0x4851ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4851ec:{NFSU2_TR(0x4851ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851ef:{NFSU2_TR(0x4851ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851f2:{NFSU2_TR(0x4851f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851f5:{NFSU2_TR(0x4851f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851f8:{NFSU2_TR(0x4851f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851fb:{NFSU2_TR(0x4851fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4851fe:{NFSU2_TR(0x4851fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485201:{NFSU2_TR(0x485201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485204:{NFSU2_TR(0x485204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485207:{NFSU2_TR(0x485207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48520a:{NFSU2_TR(0x48520a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48520full));
TAIL_STATIC(0x7358c0u,735);
}
B48520f:L48520f:{c.instructions+=3;NFSU2_TR(0x48520f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B485212:{NFSU2_TR(0x485212);
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
B485214:{NFSU2_TR(0x485214);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L485234;}}
}
B485216:L485216:{c.instructions+=3;NFSU2_TR(0x485216);
u8 U[4];
w4(U+0,u32(0x7ede28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48521b:{NFSU2_TR(0x48521b);
w4(R+4,u32(0x82c568ull));
}
B485220:{NFSU2_TR(0x485220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485225ull));
TAIL_STATIC(0x735840u,735);
}
B485225:L485225:{c.instructions+=4;NFSU2_TR(0x485225);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485226:{NFSU2_TR(0x485226);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485227:{NFSU2_TR(0x485227);
u8 U[4];
w4(U+0,u32(0x82c568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48522c:{NFSU2_TR(0x48522c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485231ull));
TAIL_STATIC(0x7358c0u,735);
}
B485231:L485231:{c.instructions+=1;NFSU2_TR(0x485231);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B485234:L485234:{c.instructions+=2;NFSU2_TR(0x485234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485235:{NFSU2_TR(0x485235);
{goto L485239;}
}
B485237:L485237:{c.instructions+=1;NFSU2_TR(0x485237);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B485239:L485239:{c.instructions+=4;NFSU2_TR(0x485239);
u8 U[1];
w1(U+0,u8(u32(m1(0x82cc04))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B485240:{NFSU2_TR(0x485240);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B485248:{NFSU2_TR(0x485248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48524e:{NFSU2_TR(0x48524e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485284;}}
}
B485250:L485250:{c.instructions+=9;NFSU2_TR(0x485250);
__builtin_memmove((R+4),gp(0x82cc04),4);
}
B485256:{NFSU2_TR(0x485256);
w4(R+0,u32(0x1ull));
}
B48525b:{NFSU2_TR(0x48525b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B48525d:{NFSU2_TR(0x48525d);
__builtin_memmove(gp(0x82cc04),(R+4),4);
}
B485263:{NFSU2_TR(0x485263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B485265:{NFSU2_TR(0x485265);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485267:{NFSU2_TR(0x485267);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48526b:{NFSU2_TR(0x48526b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48526f:{NFSU2_TR(0x48526f);
if(r1(R+518)){{goto L48527b;}}
}
B485271:L485271:{c.instructions+=3;NFSU2_TR(0x485271);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B485275:{NFSU2_TR(0x485275);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485276:{NFSU2_TR(0x485276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48527bull));
TAIL_STATIC(0x735070u,735);
}
B48527b:L48527b:{c.instructions+=2;NFSU2_TR(0x48527b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48527f:{NFSU2_TR(0x48527f);
__builtin_memmove(gp(0x82cc00),(R+0),4);
}
B485284:L485284:{c.instructions+=7;NFSU2_TR(0x485284);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485288:{NFSU2_TR(0x485288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485289:{NFSU2_TR(0x485289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48528a:{NFSU2_TR(0x48528a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48528b:{NFSU2_TR(0x48528b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485292:{NFSU2_TR(0x485292);
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
B485295:{NFSU2_TR(0x485295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4852a0:L4852a0:{c.instructions+=4;NFSU2_TR(0x4852a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4852a1:{NFSU2_TR(0x4852a1);
__builtin_memmove((R+20),(R+4),4);
}
B4852a3:{NFSU2_TR(0x4852a3);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4852aa:{NFSU2_TR(0x4852aa);
if(r1(R+518)){{goto L48533a;}}
}
B4852b0:L4852b0:{c.instructions+=4;NFSU2_TR(0x4852b0);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4852b5:{NFSU2_TR(0x4852b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4852b7:{NFSU2_TR(0x4852b7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4852ba:{NFSU2_TR(0x4852ba);
if(r1(R+518)){{goto L48533a;}}
}
B4852bc:L4852bc:{c.instructions+=2;NFSU2_TR(0x4852bc);
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
B4852bf:{NFSU2_TR(0x4852bf);
if(r1(R+518)){{goto L48533a;}}
}
B4852c1:L4852c1:{c.instructions+=2;NFSU2_TR(0x4852c1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4852c4:{NFSU2_TR(0x4852c4);
if(r1(R+518)){{goto L48533a;}}
}
B4852c6:L4852c6:{c.instructions+=2;NFSU2_TR(0x4852c6);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4852cd:{NFSU2_TR(0x4852cd);
if(r1(R+518)){{goto L48533a;}}
}
B4852cf:L4852cf:{c.instructions+=8;NFSU2_TR(0x4852cf);
{u32 ea_=u32(r4(R+20)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4852d5:{NFSU2_TR(0x4852d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4852d6:{NFSU2_TR(0x4852d6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4852dc:{NFSU2_TR(0x4852dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4852dd:{NFSU2_TR(0x4852dd);
w4(R+28,u32(0x1ull));
}
B4852e2:{NFSU2_TR(0x4852e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4852e4:{NFSU2_TR(0x4852e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4852e7:{NFSU2_TR(0x4852e7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4852ee;}}
}
B4852e9:L4852e9:{c.instructions+=1;NFSU2_TR(0x4852e9);
w4(R+28,u32(0x2ull));
}
B4852ee:L4852ee:{c.instructions+=2;NFSU2_TR(0x4852ee);
u8 U[4];
w4(U+0,u32(0x78c148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4852f3:{NFSU2_TR(0x4852f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4852f8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4852f8:L4852f8:{c.instructions+=5;NFSU2_TR(0x4852f8);
__builtin_memmove((R+24),(R+0),4);
}
B4852fa:{NFSU2_TR(0x4852fa);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B4852ff:{NFSU2_TR(0x4852ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485302:{NFSU2_TR(0x485302);
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
B485304:{NFSU2_TR(0x485304);
if(r1(R+518)){{goto L485338;}}
}
B485306:L485306:{c.instructions+=4;NFSU2_TR(0x485306);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485309:{NFSU2_TR(0x485309);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48530c:{NFSU2_TR(0x48530c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B48530f:{NFSU2_TR(0x48530f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485314ull));
TAIL_STATIC(0x46c790u,46c);
}
B485314:L485314:{c.instructions+=2;NFSU2_TR(0x485314);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B485316:{NFSU2_TR(0x485316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485338;}}
}
B485318:L485318:{c.instructions+=8;NFSU2_TR(0x485318);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B48531e:{NFSU2_TR(0x48531e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485321:{NFSU2_TR(0x485321);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485323:{NFSU2_TR(0x485323);
u8 U[4];
w4(U+0,u32(0x461880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485328:{NFSU2_TR(0x485328);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485329:{NFSU2_TR(0x485329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48532a:{NFSU2_TR(0x48532a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48532c:{NFSU2_TR(0x48532c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485331ull));
TAIL_STATIC(0x484510u,484);
}
B485331:L485331:{c.instructions+=1;NFSU2_TR(0x485331);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B485338:L485338:{c.instructions+=2;NFSU2_TR(0x485338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485339:{NFSU2_TR(0x485339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48533a:L48533a:{c.instructions+=2;NFSU2_TR(0x48533a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48533b:{NFSU2_TR(0x48533b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485340:L485340:{c.instructions+=11;NFSU2_TR(0x485340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485341:{NFSU2_TR(0x485341);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485344:{NFSU2_TR(0x485344);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485345:{NFSU2_TR(0x485345);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485349:{NFSU2_TR(0x485349);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48534d:{NFSU2_TR(0x48534d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48534e:{NFSU2_TR(0x48534e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B485351:{NFSU2_TR(0x485351);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485354:{NFSU2_TR(0x485354);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485356:{NFSU2_TR(0x485356);
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
B485358:{NFSU2_TR(0x485358);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4853ac;}}
}
B48535a:L48535a:{c.instructions+=3;NFSU2_TR(0x48535a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48535b:{NFSU2_TR(0x48535b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48535c:{NFSU2_TR(0x48535c);
__builtin_memmove((R+16),(R+16),4);
}
B485360:L485360:{c.instructions+=5;NFSU2_TR(0x485360);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485363:{NFSU2_TR(0x485363);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B485366:{NFSU2_TR(0x485366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485368:{NFSU2_TR(0x485368);
__builtin_memmove((R+4),(R+24),4);
}
B48536a:{NFSU2_TR(0x48536a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48536dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48536d:L48536d:{c.instructions+=4;NFSU2_TR(0x48536d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B48536f:{NFSU2_TR(0x48536f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485370:{NFSU2_TR(0x485370);
__builtin_memmove((R+4),(R+28),4);
}
B485372:{NFSU2_TR(0x485372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485377ull));
TAIL_STATIC(0x480910u,480);
}
B485377:L485377:{c.instructions+=3;NFSU2_TR(0x485377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485378:{NFSU2_TR(0x485378);
__builtin_memmove((R+4),(R+24),4);
}
B48537a:{NFSU2_TR(0x48537a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48537dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48537d:L48537d:{c.instructions+=3;NFSU2_TR(0x48537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48537f:{NFSU2_TR(0x48537f);
__builtin_memmove((R+4),(R+24),4);
}
B485381:{NFSU2_TR(0x485381);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485384ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485384:L485384:{c.instructions+=4;NFSU2_TR(0x485384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B485386:{NFSU2_TR(0x485386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485387:{NFSU2_TR(0x485387);
__builtin_memmove((R+4),(R+28),4);
}
B485389:{NFSU2_TR(0x485389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48538eull));
TAIL_STATIC(0x480910u,480);
}
B48538e:L48538e:{c.instructions+=3;NFSU2_TR(0x48538e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48538f:{NFSU2_TR(0x48538f);
__builtin_memmove((R+4),(R+24),4);
}
B485391:{NFSU2_TR(0x485391);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485394ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485394:L485394:{c.instructions+=8;NFSU2_TR(0x485394);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485398:{NFSU2_TR(0x485398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48539b:{NFSU2_TR(0x48539b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48539f:{NFSU2_TR(0x48539f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4853a2:{NFSU2_TR(0x4853a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4853a5:{NFSU2_TR(0x4853a5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4853a6:{NFSU2_TR(0x4853a6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4853a8:{NFSU2_TR(0x4853a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485360u);}goto L485360;}}
}
B4853aa:L4853aa:{c.instructions+=2;NFSU2_TR(0x4853aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4853ab:{NFSU2_TR(0x4853ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4853ac:L4853ac:{c.instructions+=4;NFSU2_TR(0x4853ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4853ad:{NFSU2_TR(0x4853ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4853ae:{NFSU2_TR(0x4853ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4853af:{NFSU2_TR(0x4853af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4853c0:L4853c0:{c.instructions+=9;NFSU2_TR(0x4853c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853c1:{NFSU2_TR(0x4853c1);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4853c6:{NFSU2_TR(0x4853c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853c7:{NFSU2_TR(0x4853c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853c8:{NFSU2_TR(0x4853c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4853ca:{NFSU2_TR(0x4853ca);
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
B4853cc:{NFSU2_TR(0x4853cc);
__builtin_memmove((R+24),(R+4),4);
}
B4853ce:{NFSU2_TR(0x4853ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4853d2:{NFSU2_TR(0x4853d2);
if(r1(R+518)){{goto L4859a2;}}
}
B4853d8:L4853d8:{c.instructions+=3;NFSU2_TR(0x4853d8);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4853dd:{NFSU2_TR(0x4853dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853de:{NFSU2_TR(0x4853de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4853e3ull));
TAIL_STATIC(0x43e910u,43e);
}
B4853e3:L4853e3:{c.instructions+=3;NFSU2_TR(0x4853e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4853e6:{NFSU2_TR(0x4853e6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x41cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4853eb:{NFSU2_TR(0x4853eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L485429;}}
}
B4853ed:L4853ed:{c.instructions+=6;NFSU2_TR(0x4853ed);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4853f3:{NFSU2_TR(0x4853f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4853f6:{NFSU2_TR(0x4853f6);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4853fc:{NFSU2_TR(0x4853fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853fd:{NFSU2_TR(0x4853fd);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4853ff:{NFSU2_TR(0x4853ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485404ull));
TAIL_STATIC(0x440820u,440);
}
B485404:L485404:{c.instructions+=3;NFSU2_TR(0x485404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485407:{NFSU2_TR(0x485407);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485409:{NFSU2_TR(0x485409);
if(r1(R+518)){{goto L485429;}}
}
B48540b:L48540b:{c.instructions+=6;NFSU2_TR(0x48540b);
u8 U[4];
w4(U+0,u32(0x789db0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B485411:{NFSU2_TR(0x485411);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485414:{NFSU2_TR(0x485414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485417:{NFSU2_TR(0x485417);
__builtin_memmove(gp(0x82afa8),(R+12),4);
}
B48541d:{NFSU2_TR(0x48541d);
s4(0x82b06c,u32(0x80ull));
}
B485427:{NFSU2_TR(0x485427);
{goto L48542b;}
}
B485429:L485429:{c.instructions+=1;NFSU2_TR(0x485429);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48542b:L48542b:{c.instructions+=3;NFSU2_TR(0x48542b);
__builtin_memmove((R+4),(R+0),4);
}
B48542d:{NFSU2_TR(0x48542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485433:{NFSU2_TR(0x485433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485438ull));
TAIL_STATIC(0x47aad0u,47a);
}
B485438:L485438:{c.instructions+=2;NFSU2_TR(0x485438);
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
B48543a:{NFSU2_TR(0x48543a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485446;}}
}
B48543c:L48543c:{c.instructions+=5;NFSU2_TR(0x48543c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48543d:{NFSU2_TR(0x48543d);
__builtin_memmove(gp(0x7faaa8),(R+12),4);
}
B485443:{NFSU2_TR(0x485443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485444:{NFSU2_TR(0x485444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B485445:{NFSU2_TR(0x485445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485446:L485446:{c.instructions+=5;NFSU2_TR(0x485446);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48544c:{NFSU2_TR(0x48544c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48544d:{NFSU2_TR(0x48544d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48544e:{NFSU2_TR(0x48544e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48544f:{NFSU2_TR(0x48544f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485454ull));
TAIL_STATIC(0x43e910u,43e);
}
B485454:L485454:{c.instructions+=3;NFSU2_TR(0x485454);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485457:{NFSU2_TR(0x485457);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x460ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x460ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48545c:{NFSU2_TR(0x48545c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4854a8;}}
}
B48545e:L48545e:{c.instructions+=6;NFSU2_TR(0x48545e);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485463:{NFSU2_TR(0x485463);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B485466:{NFSU2_TR(0x485466);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B48546b:{NFSU2_TR(0x48546b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48546c:{NFSU2_TR(0x48546c);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48546e:{NFSU2_TR(0x48546e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485473ull));
TAIL_STATIC(0x440820u,440);
}
B485473:L485473:{c.instructions+=4;NFSU2_TR(0x485473);
__builtin_memmove((R+8),(R+0),4);
}
B485475:{NFSU2_TR(0x485475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485478:{NFSU2_TR(0x485478);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48547a:{NFSU2_TR(0x48547a);
if(r1(R+518)){{goto L4854a8;}}
}
B48547c:L48547c:{c.instructions+=12;NFSU2_TR(0x48547c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48547f:{NFSU2_TR(0x48547f);
w4(R+4,u32(0x9ull));
}
B485484:{NFSU2_TR(0x485484);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485486:{NFSU2_TR(0x485486);
u8 U[4];
w4(U+0,u32(0x78a6c4ull));
s4(u32(r4(R+8)),r4(U+0));
}
B48548c:{NFSU2_TR(0x48548c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48548f:{NFSU2_TR(0x48548f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485492:{NFSU2_TR(0x485492);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485495:{NFSU2_TR(0x485495);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485498:{NFSU2_TR(0x485498);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48549b:{NFSU2_TR(0x48549b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48549e:{NFSU2_TR(0x48549e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4854a1:{NFSU2_TR(0x4854a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4854a4:L4854a4:{c.instructions+=1;NFSU2_TR(0x4854a4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4854a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4854a4u);}goto L4854a4;}
}
B4854a6:L4854a6:{c.instructions+=1;NFSU2_TR(0x4854a6);
{goto L4854aa;}
}
B4854a8:L4854a8:{c.instructions+=1;NFSU2_TR(0x4854a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4854aa:L4854aa:{c.instructions+=3;NFSU2_TR(0x4854aa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4854ac:{NFSU2_TR(0x4854ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4854b2:{NFSU2_TR(0x4854b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4854b7ull));
TAIL_STATIC(0x575620u,575);
}
B4854b7:L4854b7:{c.instructions+=3;NFSU2_TR(0x4854b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4854ba:{NFSU2_TR(0x4854ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4854bc:{NFSU2_TR(0x4854bc);
if(r1(R+518)){{goto L4854d2;}}
}
B4854be:L4854be:{c.instructions+=4;NFSU2_TR(0x4854be);
u8 U[4];
w4(U+0,u32(0x789ed0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4854c4:{NFSU2_TR(0x4854c4);
__builtin_memmove(gp(0x82bb40),(R+12),4);
}
B4854ca:{NFSU2_TR(0x4854ca);
__builtin_memmove(gp(0x82bb44),(R+12),4);
}
B4854d0:{NFSU2_TR(0x4854d0);
{goto L4854d4;}
}
B4854d2:L4854d2:{c.instructions+=1;NFSU2_TR(0x4854d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4854d4:L4854d4:{c.instructions+=5;NFSU2_TR(0x4854d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4854da:{NFSU2_TR(0x4854da);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4854e0:{NFSU2_TR(0x4854e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4854e1:{NFSU2_TR(0x4854e1);
__builtin_memmove(gp(0x82bb3c),(R+0),4);
}
B4854e6:{NFSU2_TR(0x4854e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4854ebull));
TAIL_STATIC(0x43e910u,43e);
}
B4854eb:L4854eb:{c.instructions+=3;NFSU2_TR(0x4854eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4854ee:{NFSU2_TR(0x4854ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x414ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4854f3:{NFSU2_TR(0x4854f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48551c;}}
}
B4854f5:L4854f5:{c.instructions+=6;NFSU2_TR(0x4854f5);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4854fb:{NFSU2_TR(0x4854fb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B4854fe:{NFSU2_TR(0x4854fe);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B485504:{NFSU2_TR(0x485504);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485505:{NFSU2_TR(0x485505);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485507:{NFSU2_TR(0x485507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48550cull));
TAIL_STATIC(0x440820u,440);
}
B48550c:L48550c:{c.instructions+=3;NFSU2_TR(0x48550c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48550f:{NFSU2_TR(0x48550f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485511:{NFSU2_TR(0x485511);
if(r1(R+518)){{goto L48551c;}}
}
B485513:L485513:{c.instructions+=2;NFSU2_TR(0x485513);
__builtin_memmove((R+4),(R+0),4);
}
B485515:{NFSU2_TR(0x485515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48551aull));
TAIL_STATIC(0x484bd0u,484);
}
B48551a:L48551a:{c.instructions+=1;NFSU2_TR(0x48551a);
{goto L48551e;}
}
B48551c:L48551c:{c.instructions+=1;NFSU2_TR(0x48551c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48551e:L48551e:{c.instructions+=4;NFSU2_TR(0x48551e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485524:{NFSU2_TR(0x485524);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485529:{NFSU2_TR(0x485529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48552a:{NFSU2_TR(0x48552a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48552full));
TAIL_STATIC(0x43e910u,43e);
}
B48552f:L48552f:{c.instructions+=3;NFSU2_TR(0x48552f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485532:{NFSU2_TR(0x485532);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x430ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x430ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485537:{NFSU2_TR(0x485537);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48557f;}}
}
B485539:L485539:{c.instructions+=6;NFSU2_TR(0x485539);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48553f:{NFSU2_TR(0x48553f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B485542:{NFSU2_TR(0x485542);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485548:{NFSU2_TR(0x485548);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485549:{NFSU2_TR(0x485549);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48554b:{NFSU2_TR(0x48554b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485550ull));
TAIL_STATIC(0x440820u,440);
}
B485550:L485550:{c.instructions+=3;NFSU2_TR(0x485550);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485553:{NFSU2_TR(0x485553);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485555:{NFSU2_TR(0x485555);
if(r1(R+518)){{goto L48557f;}}
}
B485557:L485557:{c.instructions+=12;NFSU2_TR(0x485557);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48555d:{NFSU2_TR(0x48555d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485560:{NFSU2_TR(0x485560);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485563:{NFSU2_TR(0x485563);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485566:{NFSU2_TR(0x485566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485569:{NFSU2_TR(0x485569);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48556c:{NFSU2_TR(0x48556c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48556f:{NFSU2_TR(0x48556f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485572:{NFSU2_TR(0x485572);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485575:{NFSU2_TR(0x485575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485578:{NFSU2_TR(0x485578);
__builtin_memmove(gp(0x82ba30),(R+0),4);
}
B48557d:{NFSU2_TR(0x48557d);
{goto L485585;}
}
B48557f:L48557f:{c.instructions+=1;NFSU2_TR(0x48557f);
__builtin_memmove(gp(0x82ba30),(R+12),4);
}
B485585:L485585:{c.instructions+=3;NFSU2_TR(0x485585);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48558b:{NFSU2_TR(0x48558b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48558c:{NFSU2_TR(0x48558c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485591ull));
TAIL_STATIC(0x43e910u,43e);
}
B485591:L485591:{c.instructions+=4;NFSU2_TR(0x485591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485594:{NFSU2_TR(0x485594);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485599:{NFSU2_TR(0x485599);
w4(R+20,u32(0x20ull));
}
B48559e:{NFSU2_TR(0x48559e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4855dd;}}
}
B4855a0:L4855a0:{c.instructions+=6;NFSU2_TR(0x4855a0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4855a5:{NFSU2_TR(0x4855a5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4855a8:{NFSU2_TR(0x4855a8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4855ad:{NFSU2_TR(0x4855ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4855ae:{NFSU2_TR(0x4855ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4855af:{NFSU2_TR(0x4855af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4855b4ull));
TAIL_STATIC(0x440820u,440);
}
B4855b4:L4855b4:{c.instructions+=3;NFSU2_TR(0x4855b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4855b7:{NFSU2_TR(0x4855b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4855b9:{NFSU2_TR(0x4855b9);
if(r1(R+518)){{goto L4855dd;}}
}
B4855bb:L4855bb:{c.instructions+=11;NFSU2_TR(0x4855bb);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4855c1:{NFSU2_TR(0x4855c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855c4:{NFSU2_TR(0x4855c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855c7:{NFSU2_TR(0x4855c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4855ca:{NFSU2_TR(0x4855ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4855cd:{NFSU2_TR(0x4855cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855d0:{NFSU2_TR(0x4855d0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4855d2:{NFSU2_TR(0x4855d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855d5:{NFSU2_TR(0x4855d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855d8:{NFSU2_TR(0x4855d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855db:{NFSU2_TR(0x4855db);
{goto L4855df;}
}
B4855dd:L4855dd:{c.instructions+=1;NFSU2_TR(0x4855dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4855df:L4855df:{c.instructions+=3;NFSU2_TR(0x4855df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4855e1:{NFSU2_TR(0x4855e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4855e7:{NFSU2_TR(0x4855e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4855ecull));
TAIL_STATIC(0x575620u,575);
}
B4855ec:L4855ec:{c.instructions+=3;NFSU2_TR(0x4855ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4855ef:{NFSU2_TR(0x4855ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4855f1:{NFSU2_TR(0x4855f1);
if(r1(R+518)){{goto L485600;}}
}
B4855f3:L4855f3:{c.instructions+=3;NFSU2_TR(0x4855f3);
__builtin_memmove(gp(0x82bc78),(R+0),4);
}
B4855f8:{NFSU2_TR(0x4855f8);
__builtin_memmove(gp(0x82b61c),(R+12),4);
}
B4855fe:{NFSU2_TR(0x4855fe);
{goto L485602;}
}
B485600:L485600:{c.instructions+=1;NFSU2_TR(0x485600);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485602:L485602:{c.instructions+=5;NFSU2_TR(0x485602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485605:{NFSU2_TR(0x485605);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
}
B48560b:{NFSU2_TR(0x48560b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48560d:{NFSU2_TR(0x48560d);
w4(R+4,u32(0x9ull));
}
B485612:{NFSU2_TR(0x485612);
__builtin_memmove((R+28),(R+24),4);
}
B485614:L485614:{c.instructions+=1;NFSU2_TR(0x485614);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L485616;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485614u);}goto L485614;}
}
B485616:L485616:{c.instructions+=3;NFSU2_TR(0x485616);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48561c:{NFSU2_TR(0x48561c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48561d:{NFSU2_TR(0x48561d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485622ull));
TAIL_STATIC(0x43e910u,43e);
}
B485622:L485622:{c.instructions+=3;NFSU2_TR(0x485622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485625:{NFSU2_TR(0x485625);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48562a:{NFSU2_TR(0x48562a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L485664;}}
}
B48562c:L48562c:{c.instructions+=6;NFSU2_TR(0x48562c);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485631:{NFSU2_TR(0x485631);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B485634:{NFSU2_TR(0x485634);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B485639:{NFSU2_TR(0x485639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48563a:{NFSU2_TR(0x48563a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48563b:{NFSU2_TR(0x48563b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485640ull));
TAIL_STATIC(0x440820u,440);
}
B485640:L485640:{c.instructions+=3;NFSU2_TR(0x485640);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485643:{NFSU2_TR(0x485643);
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
B485645:{NFSU2_TR(0x485645);
if(r1(R+518)){{goto L485664;}}
}
B485647:L485647:{c.instructions+=9;NFSU2_TR(0x485647);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48564a:{NFSU2_TR(0x48564a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48564d:{NFSU2_TR(0x48564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485650:{NFSU2_TR(0x485650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485653:{NFSU2_TR(0x485653);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485656:{NFSU2_TR(0x485656);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485659:{NFSU2_TR(0x485659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48565c:{NFSU2_TR(0x48565c);
u8 U[4];
w4(U+0,u32(0x78a47cull));
s4(u32(r4(R+0)),r4(U+0));
}
B485662:{NFSU2_TR(0x485662);
{goto L485666;}
}
B485664:L485664:{c.instructions+=1;NFSU2_TR(0x485664);
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
B485666:L485666:{c.instructions+=6;NFSU2_TR(0x485666);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485668:{NFSU2_TR(0x485668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48566a:{NFSU2_TR(0x48566a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48566c:{NFSU2_TR(0x48566c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48566d:{NFSU2_TR(0x48566d);
__builtin_memmove((R+4),(R+0),4);
}
B48566f:{NFSU2_TR(0x48566f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485672ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485672:L485672:{c.instructions+=3;NFSU2_TR(0x485672);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485677:{NFSU2_TR(0x485677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485678:{NFSU2_TR(0x485678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48567dull));
TAIL_STATIC(0x43e910u,43e);
}
B48567d:L48567d:{c.instructions+=3;NFSU2_TR(0x48567d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485680:{NFSU2_TR(0x485680);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485685:{NFSU2_TR(0x485685);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4856c1;}}
}
B485687:L485687:{c.instructions+=6;NFSU2_TR(0x485687);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48568d:{NFSU2_TR(0x48568d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B485690:{NFSU2_TR(0x485690);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485696:{NFSU2_TR(0x485696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485697:{NFSU2_TR(0x485697);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485698:{NFSU2_TR(0x485698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48569dull));
TAIL_STATIC(0x440820u,440);
}
B48569d:L48569d:{c.instructions+=3;NFSU2_TR(0x48569d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4856a0:{NFSU2_TR(0x4856a0);
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
B4856a2:{NFSU2_TR(0x4856a2);
if(r1(R+518)){{goto L4856c1;}}
}
B4856a4:L4856a4:{c.instructions+=9;NFSU2_TR(0x4856a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856a7:{NFSU2_TR(0x4856a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856aa:{NFSU2_TR(0x4856aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856ad:{NFSU2_TR(0x4856ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856b0:{NFSU2_TR(0x4856b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856b3:{NFSU2_TR(0x4856b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4856b6:{NFSU2_TR(0x4856b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856b9:{NFSU2_TR(0x4856b9);
u8 U[4];
w4(U+0,u32(0x78a3b0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4856bf:{NFSU2_TR(0x4856bf);
{goto L4856c3;}
}
B4856c1:L4856c1:{c.instructions+=1;NFSU2_TR(0x4856c1);
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
B4856c3:L4856c3:{c.instructions+=7;NFSU2_TR(0x4856c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4856c7:{NFSU2_TR(0x4856c7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4856c9:{NFSU2_TR(0x4856c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4856cf:{NFSU2_TR(0x4856cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4856d1:{NFSU2_TR(0x4856d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4856d3:{NFSU2_TR(0x4856d3);
__builtin_memmove((R+4),(R+0),4);
}
B4856d5:{NFSU2_TR(0x4856d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4856d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4856d8:L4856d8:{c.instructions+=3;NFSU2_TR(0x4856d8);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4856dd:{NFSU2_TR(0x4856dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4856de:{NFSU2_TR(0x4856de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4856e3ull));
TAIL_STATIC(0x43e910u,43e);
}
B4856e3:L4856e3:{c.instructions+=3;NFSU2_TR(0x4856e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4856e6:{NFSU2_TR(0x4856e6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4856eb:{NFSU2_TR(0x4856eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L485727;}}
}
B4856ed:L4856ed:{c.instructions+=6;NFSU2_TR(0x4856ed);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4856f3:{NFSU2_TR(0x4856f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4856f6:{NFSU2_TR(0x4856f6);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4856fc:{NFSU2_TR(0x4856fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4856fd:{NFSU2_TR(0x4856fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4856fe:{NFSU2_TR(0x4856fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485703ull));
TAIL_STATIC(0x440820u,440);
}
B485703:L485703:{c.instructions+=3;NFSU2_TR(0x485703);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485706:{NFSU2_TR(0x485706);
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
B485708:{NFSU2_TR(0x485708);
if(r1(R+518)){{goto L485727;}}
}
B48570a:L48570a:{c.instructions+=9;NFSU2_TR(0x48570a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48570d:{NFSU2_TR(0x48570d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485710:{NFSU2_TR(0x485710);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485713:{NFSU2_TR(0x485713);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485716:{NFSU2_TR(0x485716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485719:{NFSU2_TR(0x485719);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48571c:{NFSU2_TR(0x48571c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48571f:{NFSU2_TR(0x48571f);
u8 U[4];
w4(U+0,u32(0x78a418ull));
s4(u32(r4(R+0)),r4(U+0));
}
B485725:{NFSU2_TR(0x485725);
{goto L485729;}
}
B485727:L485727:{c.instructions+=1;NFSU2_TR(0x485727);
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
B485729:L485729:{c.instructions+=6;NFSU2_TR(0x485729);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48572b:{NFSU2_TR(0x48572b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485731:{NFSU2_TR(0x485731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B485733:{NFSU2_TR(0x485733);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485735:{NFSU2_TR(0x485735);
__builtin_memmove((R+4),(R+0),4);
}
B485737:{NFSU2_TR(0x485737);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48573aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48573a:L48573a:{c.instructions+=3;NFSU2_TR(0x48573a);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B48573f:{NFSU2_TR(0x48573f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485740:{NFSU2_TR(0x485740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485745ull));
TAIL_STATIC(0x43e910u,43e);
}
B485745:L485745:{c.instructions+=3;NFSU2_TR(0x485745);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485748:{NFSU2_TR(0x485748);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x464ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x464ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48574d:{NFSU2_TR(0x48574d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48579d;}}
}
B48574f:L48574f:{c.instructions+=6;NFSU2_TR(0x48574f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B485755:{NFSU2_TR(0x485755);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B485758:{NFSU2_TR(0x485758);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B48575e:{NFSU2_TR(0x48575e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48575f:{NFSU2_TR(0x48575f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485761:{NFSU2_TR(0x485761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485766ull));
TAIL_STATIC(0x440820u,440);
}
B485766:L485766:{c.instructions+=4;NFSU2_TR(0x485766);
__builtin_memmove((R+8),(R+0),4);
}
B485768:{NFSU2_TR(0x485768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48576b:{NFSU2_TR(0x48576b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48576d:{NFSU2_TR(0x48576d);
if(r1(R+518)){{goto L48579d;}}
}
B48576f:L48576f:{c.instructions+=11;NFSU2_TR(0x48576f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485772:{NFSU2_TR(0x485772);
w4(R+4,u32(0x10ull));
}
B485777:{NFSU2_TR(0x485777);
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
B485779:{NFSU2_TR(0x485779);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48577c:{NFSU2_TR(0x48577c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48577f:{NFSU2_TR(0x48577f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485782:{NFSU2_TR(0x485782);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485785:{NFSU2_TR(0x485785);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485788:{NFSU2_TR(0x485788);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48578b:{NFSU2_TR(0x48578b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48578e:{NFSU2_TR(0x48578e);
u8 U[4];
w4(U+0,u32(0x78a3e0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B485794:L485794:{c.instructions+=1;NFSU2_TR(0x485794);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L485796;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485794u);}goto L485794;}
}
B485796:L485796:{c.instructions+=3;NFSU2_TR(0x485796);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485799:{NFSU2_TR(0x485799);
__builtin_memmove((R+4),(R+8),4);
}
B48579b:{NFSU2_TR(0x48579b);
{goto L48579f;}
}
B48579d:L48579d:{c.instructions+=1;NFSU2_TR(0x48579d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48579f:L48579f:{c.instructions+=5;NFSU2_TR(0x48579f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4857a1:{NFSU2_TR(0x4857a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857a7:{NFSU2_TR(0x4857a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4857a9:{NFSU2_TR(0x4857a9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4857ab:{NFSU2_TR(0x4857ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4857aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4857ae:L4857ae:{c.instructions+=3;NFSU2_TR(0x4857ae);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4857b3:{NFSU2_TR(0x4857b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4857b4:{NFSU2_TR(0x4857b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4857b9ull));
TAIL_STATIC(0x43e910u,43e);
}
B4857b9:L4857b9:{c.instructions+=3;NFSU2_TR(0x4857b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4857bc:{NFSU2_TR(0x4857bc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4857c1:{NFSU2_TR(0x4857c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4857fd;}}
}
B4857c3:L4857c3:{c.instructions+=6;NFSU2_TR(0x4857c3);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4857c9:{NFSU2_TR(0x4857c9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4857cc:{NFSU2_TR(0x4857cc);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4857d2:{NFSU2_TR(0x4857d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4857d3:{NFSU2_TR(0x4857d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4857d4:{NFSU2_TR(0x4857d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4857d9ull));
TAIL_STATIC(0x440820u,440);
}
B4857d9:L4857d9:{c.instructions+=3;NFSU2_TR(0x4857d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4857dc:{NFSU2_TR(0x4857dc);
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
B4857de:{NFSU2_TR(0x4857de);
if(r1(R+518)){{goto L4857fd;}}
}
B4857e0:L4857e0:{c.instructions+=9;NFSU2_TR(0x4857e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857e3:{NFSU2_TR(0x4857e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857e6:{NFSU2_TR(0x4857e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857e9:{NFSU2_TR(0x4857e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857ec:{NFSU2_TR(0x4857ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857ef:{NFSU2_TR(0x4857ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4857f2:{NFSU2_TR(0x4857f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4857f5:{NFSU2_TR(0x4857f5);
u8 U[4];
w4(U+0,u32(0x78a550ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4857fb:{NFSU2_TR(0x4857fb);
{goto L4857ff;}
}
B4857fd:L4857fd:{c.instructions+=1;NFSU2_TR(0x4857fd);
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
B4857ff:L4857ff:{c.instructions+=6;NFSU2_TR(0x4857ff);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485801:{NFSU2_TR(0x485801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485807:{NFSU2_TR(0x485807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B485809:{NFSU2_TR(0x485809);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48580b:{NFSU2_TR(0x48580b);
__builtin_memmove((R+4),(R+0),4);
}
B48580d:{NFSU2_TR(0x48580d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485810ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485810:L485810:{c.instructions+=3;NFSU2_TR(0x485810);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485815:{NFSU2_TR(0x485815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485816:{NFSU2_TR(0x485816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48581bull));
TAIL_STATIC(0x43e910u,43e);
}
B48581b:L48581b:{c.instructions+=3;NFSU2_TR(0x48581b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48581e:{NFSU2_TR(0x48581e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485823:{NFSU2_TR(0x485823);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48585f;}}
}
B485825:L485825:{c.instructions+=6;NFSU2_TR(0x485825);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48582b:{NFSU2_TR(0x48582b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B48582e:{NFSU2_TR(0x48582e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485834:{NFSU2_TR(0x485834);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485835:{NFSU2_TR(0x485835);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485836:{NFSU2_TR(0x485836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48583bull));
TAIL_STATIC(0x440820u,440);
}
B48583b:L48583b:{c.instructions+=3;NFSU2_TR(0x48583b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48583e:{NFSU2_TR(0x48583e);
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
B485840:{NFSU2_TR(0x485840);
if(r1(R+518)){{goto L48585f;}}
}
B485842:L485842:{c.instructions+=9;NFSU2_TR(0x485842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485845:{NFSU2_TR(0x485845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485848:{NFSU2_TR(0x485848);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48584b:{NFSU2_TR(0x48584b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48584e:{NFSU2_TR(0x48584e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485851:{NFSU2_TR(0x485851);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485854:{NFSU2_TR(0x485854);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485857:{NFSU2_TR(0x485857);
u8 U[4];
w4(U+0,u32(0x78a448ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48585d:{NFSU2_TR(0x48585d);
{goto L485861;}
}
B48585f:L48585f:{c.instructions+=1;NFSU2_TR(0x48585f);
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
B485861:L485861:{c.instructions+=6;NFSU2_TR(0x485861);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485863:{NFSU2_TR(0x485863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485869:{NFSU2_TR(0x485869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48586b:{NFSU2_TR(0x48586b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48586d:{NFSU2_TR(0x48586d);
__builtin_memmove((R+4),(R+0),4);
}
B48586f:{NFSU2_TR(0x48586f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485872ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485872:L485872:{c.instructions+=3;NFSU2_TR(0x485872);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485877:{NFSU2_TR(0x485877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485878:{NFSU2_TR(0x485878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48587dull));
TAIL_STATIC(0x43e910u,43e);
}
B48587d:L48587d:{c.instructions+=3;NFSU2_TR(0x48587d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485880:{NFSU2_TR(0x485880);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485885:{NFSU2_TR(0x485885);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4858c1;}}
}
B485887:L485887:{c.instructions+=6;NFSU2_TR(0x485887);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48588d:{NFSU2_TR(0x48588d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B485890:{NFSU2_TR(0x485890);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485896:{NFSU2_TR(0x485896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485897:{NFSU2_TR(0x485897);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485898:{NFSU2_TR(0x485898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48589dull));
TAIL_STATIC(0x440820u,440);
}
B48589d:L48589d:{c.instructions+=3;NFSU2_TR(0x48589d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4858a0:{NFSU2_TR(0x4858a0);
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
B4858a2:{NFSU2_TR(0x4858a2);
if(r1(R+518)){{goto L4858c1;}}
}
B4858a4:L4858a4:{c.instructions+=9;NFSU2_TR(0x4858a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858a7:{NFSU2_TR(0x4858a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858aa:{NFSU2_TR(0x4858aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858ad:{NFSU2_TR(0x4858ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858b0:{NFSU2_TR(0x4858b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858b3:{NFSU2_TR(0x4858b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4858b6:{NFSU2_TR(0x4858b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858b9:{NFSU2_TR(0x4858b9);
u8 U[4];
w4(U+0,u32(0x78a4acull));
s4(u32(r4(R+0)),r4(U+0));
}
B4858bf:{NFSU2_TR(0x4858bf);
{goto L4858c3;}
}
B4858c1:L4858c1:{c.instructions+=1;NFSU2_TR(0x4858c1);
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
B4858c3:L4858c3:{c.instructions+=6;NFSU2_TR(0x4858c3);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4858c5:{NFSU2_TR(0x4858c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4858cb:{NFSU2_TR(0x4858cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4858cd:{NFSU2_TR(0x4858cd);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4858cf:{NFSU2_TR(0x4858cf);
__builtin_memmove((R+4),(R+0),4);
}
B4858d1:{NFSU2_TR(0x4858d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4858d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4858d4:L4858d4:{c.instructions+=3;NFSU2_TR(0x4858d4);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4858d9:{NFSU2_TR(0x4858d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4858da:{NFSU2_TR(0x4858da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4858dfull));
TAIL_STATIC(0x43e910u,43e);
}
B4858df:L4858df:{c.instructions+=3;NFSU2_TR(0x4858df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4858e2:{NFSU2_TR(0x4858e2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x428ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x428ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4858e7:{NFSU2_TR(0x4858e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48592b;}}
}
B4858e9:L4858e9:{c.instructions+=6;NFSU2_TR(0x4858e9);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4858ef:{NFSU2_TR(0x4858ef);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4858f2:{NFSU2_TR(0x4858f2);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4858f8:{NFSU2_TR(0x4858f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4858f9:{NFSU2_TR(0x4858f9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4858fb:{NFSU2_TR(0x4858fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485900ull));
TAIL_STATIC(0x440820u,440);
}
B485900:L485900:{c.instructions+=3;NFSU2_TR(0x485900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485903:{NFSU2_TR(0x485903);
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
B485905:{NFSU2_TR(0x485905);
if(r1(R+518)){{goto L48592b;}}
}
B485907:L485907:{c.instructions+=11;NFSU2_TR(0x485907);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48590a:{NFSU2_TR(0x48590a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48590d:{NFSU2_TR(0x48590d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485910:{NFSU2_TR(0x485910);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485913:{NFSU2_TR(0x485913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485916:{NFSU2_TR(0x485916);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485919:{NFSU2_TR(0x485919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48591c:{NFSU2_TR(0x48591c);
u8 U[4];
w4(U+0,u32(0x78a4e0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B485922:{NFSU2_TR(0x485922);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B485926:{NFSU2_TR(0x485926);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485929:{NFSU2_TR(0x485929);
{goto L48592d;}
}
B48592b:L48592b:{c.instructions+=1;NFSU2_TR(0x48592b);
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
B48592d:L48592d:{c.instructions+=6;NFSU2_TR(0x48592d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48592f:{NFSU2_TR(0x48592f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485935:{NFSU2_TR(0x485935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B485937:{NFSU2_TR(0x485937);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485939:{NFSU2_TR(0x485939);
__builtin_memmove((R+4),(R+0),4);
}
B48593b:{NFSU2_TR(0x48593b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48593eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48593e:L48593e:{c.instructions+=3;NFSU2_TR(0x48593e);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485943:{NFSU2_TR(0x485943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485944:{NFSU2_TR(0x485944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485949ull));
TAIL_STATIC(0x43e910u,43e);
}
B485949:L485949:{c.instructions+=3;NFSU2_TR(0x485949);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48594c:{NFSU2_TR(0x48594c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x420ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x420ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485951:{NFSU2_TR(0x485951);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48598d;}}
}
B485953:L485953:{c.instructions+=6;NFSU2_TR(0x485953);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B485959:{NFSU2_TR(0x485959);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B48595c:{NFSU2_TR(0x48595c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485962:{NFSU2_TR(0x485962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485963:{NFSU2_TR(0x485963);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485964:{NFSU2_TR(0x485964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485969ull));
TAIL_STATIC(0x440820u,440);
}
B485969:L485969:{c.instructions+=3;NFSU2_TR(0x485969);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48596c:{NFSU2_TR(0x48596c);
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
B48596e:{NFSU2_TR(0x48596e);
if(r1(R+518)){{goto L48598d;}}
}
B485970:L485970:{c.instructions+=9;NFSU2_TR(0x485970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485973:{NFSU2_TR(0x485973);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485976:{NFSU2_TR(0x485976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485979:{NFSU2_TR(0x485979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48597c:{NFSU2_TR(0x48597c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48597f:{NFSU2_TR(0x48597f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485982:{NFSU2_TR(0x485982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485985:{NFSU2_TR(0x485985);
u8 U[4];
w4(U+0,u32(0x78a518ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48598b:{NFSU2_TR(0x48598b);
{goto L48598f;}
}
B48598d:L48598d:{c.instructions+=1;NFSU2_TR(0x48598d);
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
B48598f:L48598f:{c.instructions+=6;NFSU2_TR(0x48598f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485991:{NFSU2_TR(0x485991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485997:{NFSU2_TR(0x485997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B485999:{NFSU2_TR(0x485999);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48599b:{NFSU2_TR(0x48599b);
__builtin_memmove((R+4),(R+0),4);
}
B48599d:{NFSU2_TR(0x48599d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4859a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4859a0:L4859a0:{c.instructions+=2;NFSU2_TR(0x4859a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4859a1:{NFSU2_TR(0x4859a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4859a2:L4859a2:{c.instructions+=4;NFSU2_TR(0x4859a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4859a3:{NFSU2_TR(0x4859a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4859a4:{NFSU2_TR(0x4859a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4859a5:{NFSU2_TR(0x4859a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4859b0:L4859b0:{c.instructions+=9;NFSU2_TR(0x4859b0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4859b5:{NFSU2_TR(0x4859b5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4859b7:{NFSU2_TR(0x4859b7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4859b9:{NFSU2_TR(0x4859b9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3fc000ull))));
}
B4859be:{NFSU2_TR(0x4859be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4000ull))));
}
B4859c3:{NFSU2_TR(0x4859c3);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859c8:{NFSU2_TR(0x4859c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859c9:{NFSU2_TR(0x4859c9);
__builtin_memmove(gp(0x82c6d8),(R+0),4);
}
B4859ce:{NFSU2_TR(0x4859ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4859d3ull));
TAIL_STATIC(0x440820u,440);
}
B4859d3:L4859d3:{c.instructions+=8;NFSU2_TR(0x4859d3);
__builtin_memmove((R+4),gp(0x82c6d8),4);
}
B4859d9:{NFSU2_TR(0x4859d9);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4859df:{NFSU2_TR(0x4859df);
u8 U[4];
w4(U+0,u32(0x789cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859e4:{NFSU2_TR(0x4859e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859e5:{NFSU2_TR(0x4859e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859e6:{NFSU2_TR(0x4859e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859e7:{NFSU2_TR(0x4859e7);
__builtin_memmove(gp(0x82c6d4),(R+0),4);
}
B4859ec:{NFSU2_TR(0x4859ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4859f1ull));
TAIL_STATIC(0x440330u,440);
}
B4859f1:L4859f1:{c.instructions+=3;NFSU2_TR(0x4859f1);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4859f6:{NFSU2_TR(0x4859f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4859f7:{NFSU2_TR(0x4859f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4859fcull));
TAIL_STATIC(0x43e910u,43e);
}
B4859fc:L4859fc:{c.instructions+=3;NFSU2_TR(0x4859fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4859ff:{NFSU2_TR(0x4859ff);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ecull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4ecull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B485a04:{NFSU2_TR(0x485a04);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L485a3a;}}
}
B485a06:L485a06:{c.instructions+=6;NFSU2_TR(0x485a06);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B485a0c:{NFSU2_TR(0x485a0c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B485a0f:{NFSU2_TR(0x485a0f);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B485a15:{NFSU2_TR(0x485a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a16:{NFSU2_TR(0x485a16);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a1b:{NFSU2_TR(0x485a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485a20ull));
TAIL_STATIC(0x440820u,440);
}
B485a20:L485a20:{c.instructions+=3;NFSU2_TR(0x485a20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485a23:{NFSU2_TR(0x485a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485a25:{NFSU2_TR(0x485a25);
if(r1(R+518)){{goto L485a3a;}}
}
B485a27:L485a27:{c.instructions+=2;NFSU2_TR(0x485a27);
__builtin_memmove((R+4),(R+0),4);
}
B485a29:{NFSU2_TR(0x485a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485a2eull));
TAIL_STATIC(0x4585a0u,458);
}
B485a2e:L485a2e:{c.instructions+=3;NFSU2_TR(0x485a2e);
__builtin_memmove(gp(0x82b884),(R+0),4);
}
B485a33:{NFSU2_TR(0x485a33);
__builtin_memmove((R+4),(R+0),4);
}
B485a35:{NFSU2_TR(0x485a35);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4853c0u);}goto L4853c0;}
}
B485a3a:L485a3a:{c.instructions+=4;NFSU2_TR(0x485a3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485a3c:{NFSU2_TR(0x485a3c);
__builtin_memmove(gp(0x82b884),(R+0),4);
}
B485a41:{NFSU2_TR(0x485a41);
__builtin_memmove((R+4),(R+0),4);
}
B485a43:{NFSU2_TR(0x485a43);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4853c0u);}goto L4853c0;}
}
B485a50:L485a50:{c.instructions+=9;NFSU2_TR(0x485a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a51:{NFSU2_TR(0x485a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B485a55:{NFSU2_TR(0x485a55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a56:{NFSU2_TR(0x485a56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a57:{NFSU2_TR(0x485a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+24),(U+0),4);
}
B485a5a:{NFSU2_TR(0x485a5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecd10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B485a61:{NFSU2_TR(0x485a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a62:{NFSU2_TR(0x485a62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a63:{NFSU2_TR(0x485a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485a68ull));
TAIL_STATIC(0x57d900u,57d);
}
B485a68:L485a68:{c.instructions+=5;NFSU2_TR(0x485a68);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B485a6e:{NFSU2_TR(0x485a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a6f:{NFSU2_TR(0x485a6f);
__builtin_memmove((R+20),(R+0),4);
}
B485a71:{NFSU2_TR(0x485a71);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B485a73:{NFSU2_TR(0x485a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485a78ull));
TAIL_STATIC(0x43e910u,43e);
}
B485a78:L485a78:{c.instructions+=4;NFSU2_TR(0x485a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B485a7e:{NFSU2_TR(0x485a7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485a81:{NFSU2_TR(0x485a81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485a83:{NFSU2_TR(0x485a83);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L485a9e;}}
}
B485a85:L485a85:{c.instructions+=6;NFSU2_TR(0x485a85);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B485a8a:{NFSU2_TR(0x485a8a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B485a8d:{NFSU2_TR(0x485a8d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B485a92:{NFSU2_TR(0x485a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a93:{NFSU2_TR(0x485a93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485a94:{NFSU2_TR(0x485a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485a99ull));
TAIL_STATIC(0x440820u,440);
}
B485a99:L485a99:{c.instructions+=2;NFSU2_TR(0x485a99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485a9c:{NFSU2_TR(0x485a9c);
__builtin_memmove((R+28),(R+0),4);
}
B485a9e:L485a9e:{c.instructions+=10;NFSU2_TR(0x485a9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecd10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485aa5:{NFSU2_TR(0x485aa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485aa6:{NFSU2_TR(0x485aa6);
u8 U[4];
w4(U+0,u32(0x483f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485aab:{NFSU2_TR(0x485aab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485aac:{NFSU2_TR(0x485aac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485aae:{NFSU2_TR(0x485aae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485aaf:{NFSU2_TR(0x485aaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485ab0:{NFSU2_TR(0x485ab0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485ab1:{NFSU2_TR(0x485ab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b994ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B485ab8:{NFSU2_TR(0x485ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485abdull));
TAIL_STATIC(0x57b4a0u,57b);
}
B485abd:L485abd:{c.instructions+=2;NFSU2_TR(0x485abd);
u8 U[4];
w4(U+0,u32(0x1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485ac2:{NFSU2_TR(0x485ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485ac7ull));
TAIL_STATIC(0x575620u,575);
}
B485ac7:L485ac7:{c.instructions+=3;NFSU2_TR(0x485ac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B485aca:{NFSU2_TR(0x485aca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485acc:{NFSU2_TR(0x485acc);
if(r1(R+518)){{goto L485aec;}}
}
B485ace:L485ace:{c.instructions+=6;NFSU2_TR(0x485ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B485ad5:{NFSU2_TR(0x485ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485ad8:{NFSU2_TR(0x485ad8);
u8 U[4];
w4(U+0,u32(0x78bbacull));
s4(u32(r4(R+0)),r4(U+0));
}
B485ade:{NFSU2_TR(0x485ade);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485ae4:{NFSU2_TR(0x485ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485aea:{NFSU2_TR(0x485aea);
{goto L485aee;}
}
B485aec:L485aec:{c.instructions+=1;NFSU2_TR(0x485aec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485aee:L485aee:{c.instructions+=9;NFSU2_TR(0x485aee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b974ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B485af5:{NFSU2_TR(0x485af5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B485af8:{NFSU2_TR(0x485af8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x82afb0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x82afb0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x82afb0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B485afe:{NFSU2_TR(0x485afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485aff:{NFSU2_TR(0x485aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485b05:{NFSU2_TR(0x485b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485b06:{NFSU2_TR(0x485b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B485b07:{NFSU2_TR(0x485b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485b08:{NFSU2_TR(0x485b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485b10:L485b10:{c.instructions+=4;NFSU2_TR(0x485b10);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B485b16:{NFSU2_TR(0x485b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B485b19:{NFSU2_TR(0x485b19);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B485b1b:{NFSU2_TR(0x485b1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485b3f;}}
}
B485b1d:L485b1d:{c.instructions+=4;NFSU2_TR(0x485b1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485b21:{NFSU2_TR(0x485b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485b24:{NFSU2_TR(0x485b24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B485b27:{NFSU2_TR(0x485b27);
if(r1(R+518)){{goto L485b31;}}
}
B485b29:L485b29:{c.instructions+=2;NFSU2_TR(0x485b29);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B485b2a:{NFSU2_TR(0x485b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485b3f;}}
}
B485b2c:L485b2c:{c.instructions+=2;NFSU2_TR(0x485b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485b2f:{NFSU2_TR(0x485b2f);
{goto L485b34;}
}
B485b31:L485b31:{c.instructions+=1;NFSU2_TR(0x485b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485b34:L485b34:{c.instructions+=2;NFSU2_TR(0x485b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485b36:{NFSU2_TR(0x485b36);
if(r1(R+518)){{goto L485b3f;}}
}
B485b38:L485b38:{c.instructions+=2;NFSU2_TR(0x485b38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b39:{NFSU2_TR(0x485b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485b3eull));
TAIL_STATIC(0x484060u,484);
}
B485b3e:L485b3e:{c.instructions+=1;NFSU2_TR(0x485b3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485b3f:L485b3f:{c.instructions+=2;NFSU2_TR(0x485b3f);
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
B485b41:{NFSU2_TR(0x485b41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485b50:L485b50:{c.instructions+=16;NFSU2_TR(0x485b50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b52:{NFSU2_TR(0x485b52);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b57:{NFSU2_TR(0x485b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485b5d:{NFSU2_TR(0x485b5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b5e:{NFSU2_TR(0x485b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485b65:{NFSU2_TR(0x485b65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b66:{NFSU2_TR(0x485b66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b67:{NFSU2_TR(0x485b67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b68:{NFSU2_TR(0x485b68);
__builtin_memmove((R+28),(R+4),4);
}
B485b6a:{NFSU2_TR(0x485b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485b6e:{NFSU2_TR(0x485b6e);
u8 U[4];
w4(U+0,u32(0x789e74ull));
s4(u32(r4(R+28)),r4(U+0));
}
B485b74:{NFSU2_TR(0x485b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485b77:{NFSU2_TR(0x485b77);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485b79:{NFSU2_TR(0x485b79);
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
B485b7b:{NFSU2_TR(0x485b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485b7f:{NFSU2_TR(0x485b7f);
if(r1(R+518)){{goto L485b87;}}
}
B485b81:L485b81:{c.instructions+=3;NFSU2_TR(0x485b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485b83:{NFSU2_TR(0x485b83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b85:{NFSU2_TR(0x485b85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485b87ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B485b87:L485b87:{c.instructions+=5;NFSU2_TR(0x485b87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b88:{NFSU2_TR(0x485b88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485b8a:{NFSU2_TR(0x485b8a);
__builtin_memmove((R+4),(R+28),4);
}
B485b8c:{NFSU2_TR(0x485b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485b8f:{NFSU2_TR(0x485b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485b94ull));
TAIL_STATIC(0x482970u,482);
}
B485b94:L485b94:{c.instructions+=4;NFSU2_TR(0x485b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B485b97:{NFSU2_TR(0x485b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485b99:{NFSU2_TR(0x485b99);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485b9b:{NFSU2_TR(0x485b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L485bca;}}
}
B485b9d:L485b9d:{c.instructions+=2;NFSU2_TR(0x485b9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485b9f:{NFSU2_TR(0x485b9f);
if(r1(R+518)){{goto L485bc7;}}
}
B485ba1:L485ba1:{c.instructions+=2;NFSU2_TR(0x485ba1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485ba3:{NFSU2_TR(0x485ba3);
if(r1(R+518)){{goto L485bbe;}}
}
B485ba5:L485ba5:{c.instructions+=6;NFSU2_TR(0x485ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B485ba7:{NFSU2_TR(0x485ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485baa:{NFSU2_TR(0x485baa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B485bac:{NFSU2_TR(0x485bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485bad:{NFSU2_TR(0x485bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485bb0:{NFSU2_TR(0x485bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485bb5ull));
TAIL_STATIC(0x440ef0u,440);
}
B485bb5:L485bb5:{c.instructions+=4;NFSU2_TR(0x485bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485bb7:{NFSU2_TR(0x485bb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485bba:{NFSU2_TR(0x485bba);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485bbc:{NFSU2_TR(0x485bbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485ba5u);}goto L485ba5;}}
}
B485bbe:L485bbe:{c.instructions+=2;NFSU2_TR(0x485bbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485bbf:{NFSU2_TR(0x485bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485bc4ull));
TAIL_STATIC(0x575630u,575);
}
B485bc4:L485bc4:{c.instructions+=1;NFSU2_TR(0x485bc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485bc7:L485bc7:{c.instructions+=1;NFSU2_TR(0x485bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485bca:L485bca:{c.instructions+=4;NFSU2_TR(0x485bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485bcd:{NFSU2_TR(0x485bcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485bcf:{NFSU2_TR(0x485bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485bd0:{NFSU2_TR(0x485bd0);
if(r1(R+518)){{goto L485bde;}}
}
B485bd2:L485bd2:{c.instructions+=2;NFSU2_TR(0x485bd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485bd3:{NFSU2_TR(0x485bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485bd8ull));
TAIL_STATIC(0x575630u,575);
}
B485bd8:L485bd8:{c.instructions+=2;NFSU2_TR(0x485bd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485bdb:{NFSU2_TR(0x485bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485bde:L485bde:{c.instructions+=10;NFSU2_TR(0x485bde);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485be2:{NFSU2_TR(0x485be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485be5:{NFSU2_TR(0x485be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485be8:{NFSU2_TR(0x485be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485beb:{NFSU2_TR(0x485beb);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B485bf1:{NFSU2_TR(0x485bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485bf2:{NFSU2_TR(0x485bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485bf3:{NFSU2_TR(0x485bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485bfa:{NFSU2_TR(0x485bfa);
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
B485bfd:{NFSU2_TR(0x485bfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c00:L485c00:{c.instructions+=21;NFSU2_TR(0x485c00);
__builtin_memmove((R+0),(R+4),4);
}
B485c02:{NFSU2_TR(0x485c02);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B485c04:{NFSU2_TR(0x485c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c07:{NFSU2_TR(0x485c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c0a:{NFSU2_TR(0x485c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c0d:{NFSU2_TR(0x485c0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c10:{NFSU2_TR(0x485c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c13:{NFSU2_TR(0x485c13);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c16:{NFSU2_TR(0x485c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c19:{NFSU2_TR(0x485c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c1c:{NFSU2_TR(0x485c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c1f:{NFSU2_TR(0x485c1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c22:{NFSU2_TR(0x485c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c25:{NFSU2_TR(0x485c25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c28:{NFSU2_TR(0x485c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c2b:{NFSU2_TR(0x485c2b);
u8 U[4];
w4(U+0,u32(0x78c198ull));
s4(u32(r4(R+0)),r4(U+0));
}
B485c31:{NFSU2_TR(0x485c31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485c34:{NFSU2_TR(0x485c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c37:{NFSU2_TR(0x485c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c3a:{NFSU2_TR(0x485c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c3d:{NFSU2_TR(0x485c3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c40:L485c40:{c.instructions+=2;NFSU2_TR(0x485c40);
__builtin_memmove((R+0),gp(0x82ba4c),4);
}
B485c45:{NFSU2_TR(0x485c45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c50:L485c50:{c.instructions+=2;NFSU2_TR(0x485c50);
__builtin_memmove((R+0),gp(0x82ba50),4);
}
B485c55:{NFSU2_TR(0x485c55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c60:L485c60:{c.instructions+=2;NFSU2_TR(0x485c60);
__builtin_memmove((R+0),gp(0x82ba54),4);
}
B485c65:{NFSU2_TR(0x485c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c70:L485c70:{c.instructions+=2;NFSU2_TR(0x485c70);
__builtin_memmove((R+0),gp(0x82ba58),1);
}
B485c75:{NFSU2_TR(0x485c75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485c80:L485c80:{c.instructions+=16;NFSU2_TR(0x485c80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c82:{NFSU2_TR(0x485c82);
u8 U[4];
w4(U+0,u32(0x772768ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c87:{NFSU2_TR(0x485c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485c8d:{NFSU2_TR(0x485c8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c8e:{NFSU2_TR(0x485c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c95:{NFSU2_TR(0x485c95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c96:{NFSU2_TR(0x485c96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c97:{NFSU2_TR(0x485c97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485c98:{NFSU2_TR(0x485c98);
__builtin_memmove((R+24),(R+4),4);
}
B485c9a:{NFSU2_TR(0x485c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485c9e:{NFSU2_TR(0x485c9e);
u8 U[4];
w4(U+0,u32(0x78c198ull));
s4(u32(r4(R+24)),r4(U+0));
}
B485ca4:{NFSU2_TR(0x485ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485ca7:{NFSU2_TR(0x485ca7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485ca9:{NFSU2_TR(0x485ca9);
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
B485cab:{NFSU2_TR(0x485cab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485caf:{NFSU2_TR(0x485caf);
if(r1(R+518)){{goto L485cb7;}}
}
B485cb1:L485cb1:{c.instructions+=3;NFSU2_TR(0x485cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485cb3:{NFSU2_TR(0x485cb3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485cb5:{NFSU2_TR(0x485cb5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485cb7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B485cb7:L485cb7:{c.instructions+=3;NFSU2_TR(0x485cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485cba:{NFSU2_TR(0x485cba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485cbc:{NFSU2_TR(0x485cbc);
if(r1(R+518)){{goto L485cca;}}
}
B485cbe:L485cbe:{c.instructions+=2;NFSU2_TR(0x485cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485cbf:{NFSU2_TR(0x485cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485cc4ull));
TAIL_STATIC(0x440540u,440);
}
B485cc4:L485cc4:{c.instructions+=2;NFSU2_TR(0x485cc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485cc7:{NFSU2_TR(0x485cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485cca:L485cca:{c.instructions+=3;NFSU2_TR(0x485cca);
__builtin_memmove((R+0),gp(0x82ba54),4);
}
B485ccf:{NFSU2_TR(0x485ccf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485cd1:{NFSU2_TR(0x485cd1);
if(r1(R+518)){{goto L485ce2;}}
}
B485cd3:L485cd3:{c.instructions+=2;NFSU2_TR(0x485cd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485cd4:{NFSU2_TR(0x485cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485cd9ull));
TAIL_STATIC(0x440540u,440);
}
B485cd9:L485cd9:{c.instructions+=2;NFSU2_TR(0x485cd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485cdc:{NFSU2_TR(0x485cdc);
__builtin_memmove(gp(0x82ba54),(R+12),4);
}
B485ce2:L485ce2:{c.instructions+=3;NFSU2_TR(0x485ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485ce5:{NFSU2_TR(0x485ce5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485ce7:{NFSU2_TR(0x485ce7);
if(r1(R+518)){{goto L485cfb;}}
}
B485ce9:L485ce9:{c.instructions+=2;NFSU2_TR(0x485ce9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485cea:{NFSU2_TR(0x485cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485cefull));
TAIL_STATIC(0x440540u,440);
}
B485cef:L485cef:{c.instructions+=3;NFSU2_TR(0x485cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485cf2:{NFSU2_TR(0x485cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485cf5:{NFSU2_TR(0x485cf5);
__builtin_memmove(gp(0x82ba40),(R+12),4);
}
B485cfb:L485cfb:{c.instructions+=3;NFSU2_TR(0x485cfb);
__builtin_memmove((R+0),gp(0x82ba4c),4);
}
B485d00:{NFSU2_TR(0x485d00);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485d02:{NFSU2_TR(0x485d02);
if(r1(R+518)){{goto L485d1f;}}
}
B485d04:L485d04:{c.instructions+=2;NFSU2_TR(0x485d04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485d05:{NFSU2_TR(0x485d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485d0aull));
TAIL_STATIC(0x734f90u,734);
}
B485d0a:L485d0a:{c.instructions+=3;NFSU2_TR(0x485d0a);
__builtin_memmove((R+4),gp(0x82ba4c),4);
}
B485d10:{NFSU2_TR(0x485d10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485d11:{NFSU2_TR(0x485d11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485d16ull));
TAIL_STATIC(0x440540u,440);
}
B485d16:L485d16:{c.instructions+=2;NFSU2_TR(0x485d16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485d19:{NFSU2_TR(0x485d19);
__builtin_memmove(gp(0x82ba4c),(R+12),4);
}
B485d1f:L485d1f:{c.instructions+=4;NFSU2_TR(0x485d1f);
__builtin_memmove((R+4),(R+24),4);
}
B485d21:{NFSU2_TR(0x485d21);
__builtin_memmove(gp(0x82ba58),(R+12),1);
}
B485d27:{NFSU2_TR(0x485d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B485d2f:{NFSU2_TR(0x485d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485d34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485b50u);}goto L485b50;}
}
B485d34:L485d34:{c.instructions+=6;NFSU2_TR(0x485d34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485d38:{NFSU2_TR(0x485d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485d39:{NFSU2_TR(0x485d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485d3a:{NFSU2_TR(0x485d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d41:{NFSU2_TR(0x485d41);
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
B485d44:{NFSU2_TR(0x485d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485d50:L485d50:{c.instructions+=20;NFSU2_TR(0x485d50);
__builtin_memmove((R+0),(R+4),4);
}
B485d52:{NFSU2_TR(0x485d52);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B485d54:{NFSU2_TR(0x485d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d57:{NFSU2_TR(0x485d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d5a:{NFSU2_TR(0x485d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d5d:{NFSU2_TR(0x485d5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d60:{NFSU2_TR(0x485d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d63:{NFSU2_TR(0x485d63);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d66:{NFSU2_TR(0x485d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d69:{NFSU2_TR(0x485d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d6c:{NFSU2_TR(0x485d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d6f:{NFSU2_TR(0x485d6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d72:{NFSU2_TR(0x485d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d75:{NFSU2_TR(0x485d75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d78:{NFSU2_TR(0x485d78);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d7b:{NFSU2_TR(0x485d7b);
u8 U[4];
w4(U+0,u32(0x78c1c8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B485d81:{NFSU2_TR(0x485d81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B485d84:{NFSU2_TR(0x485d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d87:{NFSU2_TR(0x485d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485d8a:{NFSU2_TR(0x485d8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485d90:L485d90:{c.instructions+=2;NFSU2_TR(0x485d90);
__builtin_memmove((R+0),gp(0x82ba68),4);
}
B485d95:{NFSU2_TR(0x485d95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485da0:L485da0:{c.instructions+=2;NFSU2_TR(0x485da0);
__builtin_memmove((R+0),gp(0x82ba6c),4);
}
B485da5:{NFSU2_TR(0x485da5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485db0:L485db0:{c.instructions+=2;NFSU2_TR(0x485db0);
__builtin_memmove((R+0),gp(0x82ba70),4);
}
B485db5:{NFSU2_TR(0x485db5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485dc0:L485dc0:{c.instructions+=2;NFSU2_TR(0x485dc0);
__builtin_memmove((R+0),gp(0x82ba74),1);
}
B485dc5:{NFSU2_TR(0x485dc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485dd0:L485dd0:{c.instructions+=16;NFSU2_TR(0x485dd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485dd2:{NFSU2_TR(0x485dd2);
u8 U[4];
w4(U+0,u32(0x772768ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485dd7:{NFSU2_TR(0x485dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485ddd:{NFSU2_TR(0x485ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485dde:{NFSU2_TR(0x485dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485de5:{NFSU2_TR(0x485de5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485de6:{NFSU2_TR(0x485de6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485de7:{NFSU2_TR(0x485de7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485de8:{NFSU2_TR(0x485de8);
__builtin_memmove((R+24),(R+4),4);
}
B485dea:{NFSU2_TR(0x485dea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485dee:{NFSU2_TR(0x485dee);
u8 U[4];
w4(U+0,u32(0x78c1c8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B485df4:{NFSU2_TR(0x485df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485df7:{NFSU2_TR(0x485df7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485df9:{NFSU2_TR(0x485df9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485dfb:{NFSU2_TR(0x485dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485dff:{NFSU2_TR(0x485dff);
if(r1(R+518)){{goto L485e0d;}}
}
B485e01:L485e01:{c.instructions+=2;NFSU2_TR(0x485e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e02:{NFSU2_TR(0x485e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e07ull));
TAIL_STATIC(0x440540u,440);
}
B485e07:L485e07:{c.instructions+=2;NFSU2_TR(0x485e07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485e0a:{NFSU2_TR(0x485e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485e0d:L485e0d:{c.instructions+=3;NFSU2_TR(0x485e0d);
__builtin_memmove((R+0),gp(0x82ba70),4);
}
B485e12:{NFSU2_TR(0x485e12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485e14:{NFSU2_TR(0x485e14);
if(r1(R+518)){{goto L485e25;}}
}
B485e16:L485e16:{c.instructions+=2;NFSU2_TR(0x485e16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e17:{NFSU2_TR(0x485e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e1cull));
TAIL_STATIC(0x440540u,440);
}
B485e1c:L485e1c:{c.instructions+=2;NFSU2_TR(0x485e1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485e1f:{NFSU2_TR(0x485e1f);
__builtin_memmove(gp(0x82ba70),(R+12),4);
}
B485e25:L485e25:{c.instructions+=3;NFSU2_TR(0x485e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485e28:{NFSU2_TR(0x485e28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485e2a:{NFSU2_TR(0x485e2a);
if(r1(R+518)){{goto L485e3e;}}
}
B485e2c:L485e2c:{c.instructions+=2;NFSU2_TR(0x485e2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e2d:{NFSU2_TR(0x485e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e32ull));
TAIL_STATIC(0x440540u,440);
}
B485e32:L485e32:{c.instructions+=3;NFSU2_TR(0x485e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485e35:{NFSU2_TR(0x485e35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B485e38:{NFSU2_TR(0x485e38);
__builtin_memmove(gp(0x82ba5c),(R+12),4);
}
B485e3e:L485e3e:{c.instructions+=3;NFSU2_TR(0x485e3e);
__builtin_memmove((R+0),gp(0x82ba68),4);
}
B485e43:{NFSU2_TR(0x485e43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485e45:{NFSU2_TR(0x485e45);
if(r1(R+518)){{goto L485e61;}}
}
B485e47:L485e47:{c.instructions+=2;NFSU2_TR(0x485e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e48:{NFSU2_TR(0x485e48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e4dull));
TAIL_STATIC(0x734f90u,734);
}
B485e4d:L485e4d:{c.instructions+=3;NFSU2_TR(0x485e4d);
__builtin_memmove((R+0),gp(0x82ba68),4);
}
B485e52:{NFSU2_TR(0x485e52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e53:{NFSU2_TR(0x485e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e58ull));
TAIL_STATIC(0x440540u,440);
}
B485e58:L485e58:{c.instructions+=2;NFSU2_TR(0x485e58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B485e5b:{NFSU2_TR(0x485e5b);
__builtin_memmove(gp(0x82ba68),(R+12),4);
}
B485e61:L485e61:{c.instructions+=4;NFSU2_TR(0x485e61);
__builtin_memmove((R+4),(R+24),4);
}
B485e63:{NFSU2_TR(0x485e63);
__builtin_memmove(gp(0x82ba74),(R+12),1);
}
B485e69:{NFSU2_TR(0x485e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B485e71:{NFSU2_TR(0x485e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485e76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485b50u);}goto L485b50;}
}
B485e76:L485e76:{c.instructions+=6;NFSU2_TR(0x485e76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485e7a:{NFSU2_TR(0x485e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485e7b:{NFSU2_TR(0x485e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485e7c:{NFSU2_TR(0x485e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485e83:{NFSU2_TR(0x485e83);
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
B485e86:{NFSU2_TR(0x485e86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485e90:L485e90:{c.instructions+=10;NFSU2_TR(0x485e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B485e93:{NFSU2_TR(0x485e93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e94:{NFSU2_TR(0x485e94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485e95:{NFSU2_TR(0x485e95);
__builtin_memmove((R+28),(R+4),4);
}
B485e97:{NFSU2_TR(0x485e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485e9a:{NFSU2_TR(0x485e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485e9d:{NFSU2_TR(0x485e9d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B485e9f:{NFSU2_TR(0x485e9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485ea1:{NFSU2_TR(0x485ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485ea5:{NFSU2_TR(0x485ea5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485f95;}}
}
B485eab:L485eab:{c.instructions+=3;NFSU2_TR(0x485eab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485eac:{NFSU2_TR(0x485eac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485ead:{NFSU2_TR(0x485ead);
__builtin_memmove((R+4),(R+4),4);
}
B485eb0:L485eb0:{c.instructions+=6;NFSU2_TR(0x485eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485eb3:{NFSU2_TR(0x485eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B485eb6:{NFSU2_TR(0x485eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B485eb8:{NFSU2_TR(0x485eb8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B485eba:{NFSU2_TR(0x485eba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B485ebc:{NFSU2_TR(0x485ebc);
if(r1(R+518)){{goto L485f84;}}
}
B485ec2:L485ec2:{c.instructions+=3;NFSU2_TR(0x485ec2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B485ec5:{NFSU2_TR(0x485ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485ec9:{NFSU2_TR(0x485ec9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485f84;}}
}
B485ecf:L485ecf:{c.instructions+=1;NFSU2_TR(0x485ecf);
}
B485ed0:L485ed0:{c.instructions+=8;NFSU2_TR(0x485ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485ed2:{NFSU2_TR(0x485ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485ed5:{NFSU2_TR(0x485ed5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485ed8:{NFSU2_TR(0x485ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485edc:{NFSU2_TR(0x485edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485edf:{NFSU2_TR(0x485edf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B485ee1:{NFSU2_TR(0x485ee1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485ee3:{NFSU2_TR(0x485ee3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485f03;}}
}
B485ee5:L485ee5:{c.instructions+=4;NFSU2_TR(0x485ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485ee8:{NFSU2_TR(0x485ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B485eeb:{NFSU2_TR(0x485eeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485eec:{NFSU2_TR(0x485eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485ef1ull));
TAIL_STATIC(0x4809e0u,480);
}
B485ef1:L485ef1:{c.instructions+=7;NFSU2_TR(0x485ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485ef5:{NFSU2_TR(0x485ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485ef8:{NFSU2_TR(0x485ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485efb:{NFSU2_TR(0x485efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485efe:{NFSU2_TR(0x485efe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B485eff:{NFSU2_TR(0x485eff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B485f01:{NFSU2_TR(0x485f01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485ee5u);}goto L485ee5;}}
}
B485f03:L485f03:{c.instructions+=5;NFSU2_TR(0x485f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485f07:{NFSU2_TR(0x485f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f0a:{NFSU2_TR(0x485f0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485f0d:{NFSU2_TR(0x485f0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485f0e:{NFSU2_TR(0x485f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485f13ull));
TAIL_STATIC(0x483960u,483);
}
B485f13:L485f13:{c.instructions+=5;NFSU2_TR(0x485f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485f16:{NFSU2_TR(0x485f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B485f1a:{NFSU2_TR(0x485f1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485f1d:{NFSU2_TR(0x485f1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485f1e:{NFSU2_TR(0x485f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485f23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485340u);}goto L485340;}
}
B485f23:L485f23:{c.instructions+=4;NFSU2_TR(0x485f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485f26:{NFSU2_TR(0x485f26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485f29:{NFSU2_TR(0x485f29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485f2a:{NFSU2_TR(0x485f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485f2full));
TAIL_STATIC(0x480860u,480);
}
B485f2f:L485f2f:{c.instructions+=6;NFSU2_TR(0x485f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f32:{NFSU2_TR(0x485f32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B485f35:{NFSU2_TR(0x485f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f38:{NFSU2_TR(0x485f38);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B485f3a:{NFSU2_TR(0x485f3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B485f3c:{NFSU2_TR(0x485f3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485f5c;}}
}
B485f3e:L485f3e:{c.instructions+=1;NFSU2_TR(0x485f3e);
__builtin_memmove((R+28),(R+28),4);
}
B485f40:L485f40:{c.instructions+=7;NFSU2_TR(0x485f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485f43:{NFSU2_TR(0x485f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B485f46:{NFSU2_TR(0x485f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485f49:{NFSU2_TR(0x485f49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B485f4c:{NFSU2_TR(0x485f4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485f4e:{NFSU2_TR(0x485f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485f4f:{NFSU2_TR(0x485f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485f54ull));
TAIL_STATIC(0x478240u,478);
}
B485f54:L485f54:{c.instructions+=4;NFSU2_TR(0x485f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f57:{NFSU2_TR(0x485f57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B485f58:{NFSU2_TR(0x485f58);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B485f5a:{NFSU2_TR(0x485f5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485f40u);}goto L485f40;}}
}
B485f5c:L485f5c:{c.instructions+=12;NFSU2_TR(0x485f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485f60:{NFSU2_TR(0x485f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f63:{NFSU2_TR(0x485f63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485f67:{NFSU2_TR(0x485f67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B485f6a:{NFSU2_TR(0x485f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B485f6d:{NFSU2_TR(0x485f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B485f71:{NFSU2_TR(0x485f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B485f74:{NFSU2_TR(0x485f74);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B485f75:{NFSU2_TR(0x485f75);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B485f78:{NFSU2_TR(0x485f78);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B485f7a:{NFSU2_TR(0x485f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485f7e:{NFSU2_TR(0x485f7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485ed0u);}goto L485ed0;}}
}
B485f84:L485f84:{c.instructions+=5;NFSU2_TR(0x485f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485f87:{NFSU2_TR(0x485f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485f8a:{NFSU2_TR(0x485f8a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B485f8b:{NFSU2_TR(0x485f8b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B485f8d:{NFSU2_TR(0x485f8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x485eb0u);}goto L485eb0;}}
}
B485f93:L485f93:{c.instructions+=2;NFSU2_TR(0x485f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B485f94:{NFSU2_TR(0x485f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485f95:L485f95:{c.instructions+=4;NFSU2_TR(0x485f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B485f96:{NFSU2_TR(0x485f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B485f97:{NFSU2_TR(0x485f97);
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
B485f9a:{NFSU2_TR(0x485f9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B485fa0:L485fa0:{c.instructions+=12;NFSU2_TR(0x485fa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fa1:{NFSU2_TR(0x485fa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fa2:{NFSU2_TR(0x485fa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fa3:{NFSU2_TR(0x485fa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fa4:{NFSU2_TR(0x485fa4);
__builtin_memmove((R+24),(R+4),4);
}
B485fa6:{NFSU2_TR(0x485fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485fa9:{NFSU2_TR(0x485fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485fac:{NFSU2_TR(0x485fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485fae:{NFSU2_TR(0x485fae);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B485fb0:{NFSU2_TR(0x485fb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fb1:{NFSU2_TR(0x485fb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B485fb2:{NFSU2_TR(0x485fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485fb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485fb5:L485fb5:{c.instructions+=3;NFSU2_TR(0x485fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485fb8:{NFSU2_TR(0x485fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B485fba:{NFSU2_TR(0x485fba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x485fbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B485fbd:L485fbd:{c.instructions+=4;NFSU2_TR(0x485fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485fc0:{NFSU2_TR(0x485fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485fc3:{NFSU2_TR(0x485fc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B485fc6:{NFSU2_TR(0x485fc6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485fcd;}}
}
B485fc8:L485fc8:{c.instructions+=2;NFSU2_TR(0x485fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485fcb:{NFSU2_TR(0x485fcb);
{goto L485fcf;}
}
B485fcd:L485fcd:{c.instructions+=1;NFSU2_TR(0x485fcd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485fcf:L485fcf:{c.instructions+=8;NFSU2_TR(0x485fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485fd2:{NFSU2_TR(0x485fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485fd5:{NFSU2_TR(0x485fd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+12),(U+0),4);
}
B485fd8:{NFSU2_TR(0x485fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485fdb:{NFSU2_TR(0x485fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485fde:{NFSU2_TR(0x485fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485fe1:{NFSU2_TR(0x485fe1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B485fe5:{NFSU2_TR(0x485fe5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L485fec;}}
}
B485fe7:L485fe7:{c.instructions+=2;NFSU2_TR(0x485fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485fea:{NFSU2_TR(0x485fea);
{goto L485fee;}
}
B485fec:L485fec:{c.instructions+=1;NFSU2_TR(0x485fec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B485fee:L485fee:{c.instructions+=6;NFSU2_TR(0x485fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485ff1:{NFSU2_TR(0x485ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B485ff4:{NFSU2_TR(0x485ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B485ff7:{NFSU2_TR(0x485ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B485ffa:{NFSU2_TR(0x485ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B485ffd:{NFSU2_TR(0x485ffd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x486001u,486);
}
XIT:NFSU2_TR_EXIT(0x485,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
