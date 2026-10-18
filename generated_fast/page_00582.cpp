#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_747(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x582,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x582,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_582(u8* __restrict R,Cpu& c);
u32 page_582(Cpu& c){return body_582(c.regs.data(),c);}
__attribute__((noinline)) u32 body_582(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x582001:goto L582001;
case 0x582004:c.instructions+=1;goto B582004;
case 0x582006:goto L582006;
case 0x582008:c.instructions+=1;goto B582008;
case 0x58200e:goto L58200e;
case 0x582014:c.instructions+=3;goto B582014;
case 0x58201a:c.instructions+=2;goto B58201a;
case 0x582020:c.instructions+=1;goto B582020;
case 0x582025:goto L582025;
case 0x582030:goto L582030;
case 0x582034:c.instructions+=3;goto B582034;
case 0x582038:c.instructions+=2;goto B582038;
case 0x58203a:c.instructions+=1;goto B58203a;
case 0x58203c:goto L58203c;
case 0x582042:goto L582042;
case 0x582048:c.instructions+=5;goto B582048;
case 0x58204e:c.instructions+=4;goto B58204e;
case 0x582054:c.instructions+=3;goto B582054;
case 0x582056:c.instructions+=2;goto B582056;
case 0x582059:c.instructions+=1;goto B582059;
case 0x58205b:goto L58205b;
case 0x58205d:c.instructions+=1;goto B58205d;
case 0x582063:goto L582063;
case 0x582069:c.instructions+=3;goto B582069;
case 0x58206b:c.instructions+=2;goto B58206b;
case 0x58206e:c.instructions+=1;goto B58206e;
case 0x582070:goto L582070;
case 0x582072:c.instructions+=1;goto B582072;
case 0x582078:goto L582078;
case 0x582080:goto L582080;
case 0x582082:c.instructions+=11;goto B582082;
case 0x582083:c.instructions+=10;goto B582083;
case 0x582085:c.instructions+=9;goto B582085;
case 0x58208a:c.instructions+=8;goto B58208a;
case 0x58208b:c.instructions+=7;goto B58208b;
case 0x582091:c.instructions+=6;goto B582091;
case 0x582097:c.instructions+=5;goto B582097;
case 0x58209d:c.instructions+=4;goto B58209d;
case 0x5820a3:c.instructions+=3;goto B5820a3;
case 0x5820a9:c.instructions+=2;goto B5820a9;
case 0x5820af:c.instructions+=1;goto B5820af;
case 0x5820b4:goto L5820b4;
case 0x5820b7:c.instructions+=3;goto B5820b7;
case 0x5820b9:c.instructions+=2;goto B5820b9;
case 0x5820ba:c.instructions+=1;goto B5820ba;
case 0x5820c0:goto L5820c0;
case 0x5820c4:c.instructions+=6;goto B5820c4;
case 0x5820c5:c.instructions+=5;goto B5820c5;
case 0x5820c6:c.instructions+=4;goto B5820c6;
case 0x5820c8:c.instructions+=3;goto B5820c8;
case 0x5820c9:c.instructions+=2;goto B5820c9;
case 0x5820ca:c.instructions+=1;goto B5820ca;
case 0x5820cf:goto L5820cf;
case 0x5820d3:c.instructions+=10;goto B5820d3;
case 0x5820d7:c.instructions+=9;goto B5820d7;
case 0x5820d9:c.instructions+=8;goto B5820d9;
case 0x5820db:c.instructions+=7;goto B5820db;
case 0x5820de:c.instructions+=6;goto B5820de;
case 0x5820df:c.instructions+=5;goto B5820df;
case 0x5820e4:c.instructions+=4;goto B5820e4;
case 0x5820ea:c.instructions+=3;goto B5820ea;
case 0x5820f0:c.instructions+=2;goto B5820f0;
case 0x5820f6:c.instructions+=1;goto B5820f6;
case 0x5820f8:goto L5820f8;
case 0x5820f9:c.instructions+=1;goto B5820f9;
case 0x582100:goto L582100;
case 0x582101:c.instructions+=4;goto B582101;
case 0x582106:c.instructions+=3;goto B582106;
case 0x582108:c.instructions+=2;goto B582108;
case 0x58210a:c.instructions+=1;goto B58210a;
case 0x58210c:goto L58210c;
case 0x582112:c.instructions+=1;goto B582112;
case 0x582113:goto L582113;
case 0x582114:c.instructions+=7;goto B582114;
case 0x58211a:c.instructions+=6;goto B58211a;
case 0x58211b:c.instructions+=5;goto B58211b;
case 0x58211c:c.instructions+=4;goto B58211c;
case 0x582122:c.instructions+=3;goto B582122;
case 0x582129:c.instructions+=2;goto B582129;
case 0x58212a:c.instructions+=1;goto B58212a;
case 0x582130:goto L582130;
case 0x582136:c.instructions+=3;goto B582136;
case 0x58213a:c.instructions+=2;goto B58213a;
case 0x58213c:c.instructions+=1;goto B58213c;
case 0x58213e:goto L58213e;
case 0x582140:goto L582140;
case 0x582146:c.instructions+=2;goto B582146;
case 0x582148:c.instructions+=1;goto B582148;
case 0x58214a:goto L58214a;
case 0x58214c:goto L58214c;
case 0x58214e:c.instructions+=1;goto B58214e;
case 0x582160:goto L582160;
case 0x582166:c.instructions+=2;goto B582166;
case 0x58216a:c.instructions+=1;goto B58216a;
case 0x582170:goto L582170;
case 0x582175:c.instructions+=1;goto B582175;
case 0x582180:goto L582180;
case 0x582185:c.instructions+=1;goto B582185;
case 0x582190:goto L582190;
case 0x582195:goto L582195;
case 0x582198:c.instructions+=1;goto B582198;
case 0x58219e:goto L58219e;
case 0x5821a5:goto L5821a5;
case 0x5821aa:c.instructions+=1;goto B5821aa;
case 0x5821ab:goto L5821ab;
case 0x5821b0:c.instructions+=1;goto B5821b0;
case 0x5821b1:goto L5821b1;
case 0x5821b6:c.instructions+=1;goto B5821b6;
case 0x5821b7:goto L5821b7;
case 0x5821bc:c.instructions+=1;goto B5821bc;
case 0x5821bd:goto L5821bd;
case 0x5821c2:c.instructions+=1;goto B5821c2;
case 0x5821c3:goto L5821c3;
case 0x5821c8:c.instructions+=1;goto B5821c8;
case 0x5821c9:goto L5821c9;
case 0x5821ce:c.instructions+=1;goto B5821ce;
case 0x5821cf:goto L5821cf;
case 0x5821d4:c.instructions+=1;goto B5821d4;
case 0x5821d5:goto L5821d5;
case 0x5821da:c.instructions+=1;goto B5821da;
case 0x5821db:goto L5821db;
case 0x5821e0:c.instructions+=1;goto B5821e0;
case 0x5821e1:goto L5821e1;
case 0x5821e6:c.instructions+=1;goto B5821e6;
case 0x5821e7:goto L5821e7;
case 0x5821ec:c.instructions+=1;goto B5821ec;
case 0x5821ed:goto L5821ed;
case 0x5821f2:goto L5821f2;
case 0x5821f5:c.instructions+=1;goto B5821f5;
case 0x5821f7:goto L5821f7;
case 0x5821fe:goto L5821fe;
case 0x582203:c.instructions+=1;goto B582203;
case 0x582204:goto L582204;
case 0x582209:c.instructions+=1;goto B582209;
case 0x58220a:goto L58220a;
case 0x58220f:c.instructions+=1;goto B58220f;
case 0x582210:goto L582210;
case 0x582215:c.instructions+=1;goto B582215;
case 0x582216:goto L582216;
case 0x58221b:c.instructions+=1;goto B58221b;
case 0x58221c:goto L58221c;
case 0x582221:c.instructions+=1;goto B582221;
case 0x582222:goto L582222;
case 0x582227:c.instructions+=1;goto B582227;
case 0x582228:goto L582228;
case 0x58222a:c.instructions+=1;goto B58222a;
case 0x582280:goto L582280;
case 0x582285:goto L582285;
case 0x582286:c.instructions+=1;goto B582286;
case 0x58228b:goto L58228b;
case 0x58228e:c.instructions+=1;goto B58228e;
case 0x582290:goto L582290;
case 0x582294:c.instructions+=2;goto B582294;
case 0x582296:c.instructions+=1;goto B582296;
case 0x582298:goto L582298;
case 0x582299:goto L582299;
case 0x58229c:c.instructions+=1;goto B58229c;
case 0x58229e:goto L58229e;
case 0x58229f:goto L58229f;
case 0x5822a2:c.instructions+=1;goto B5822a2;
case 0x5822a4:goto L5822a4;
case 0x5822a5:goto L5822a5;
case 0x5822a8:c.instructions+=1;goto B5822a8;
case 0x5822aa:goto L5822aa;
case 0x5822ab:goto L5822ab;
case 0x5822ae:c.instructions+=1;goto B5822ae;
case 0x5822b0:goto L5822b0;
case 0x5822b5:c.instructions+=1;goto B5822b5;
case 0x5822b6:goto L5822b6;
case 0x5822b9:c.instructions+=1;goto B5822b9;
case 0x5822bb:goto L5822bb;
case 0x5822c0:c.instructions+=1;goto B5822c0;
case 0x5822c1:goto L5822c1;
case 0x5822c3:c.instructions+=7;goto B5822c3;
case 0x5822c6:c.instructions+=6;goto B5822c6;
case 0x5822c9:c.instructions+=5;goto B5822c9;
case 0x5822ca:c.instructions+=4;goto B5822ca;
case 0x5822cd:c.instructions+=3;goto B5822cd;
case 0x5822d0:c.instructions+=2;goto B5822d0;
case 0x5822d2:c.instructions+=1;goto B5822d2;
case 0x5822e0:goto L5822e0;
case 0x5822e4:c.instructions+=2;goto B5822e4;
case 0x5822e6:c.instructions+=1;goto B5822e6;
case 0x5822e8:goto L5822e8;
case 0x5822eb:c.instructions+=1;goto B5822eb;
case 0x5822ed:goto L5822ed;
case 0x5822f0:c.instructions+=2;goto B5822f0;
case 0x5822f2:c.instructions+=1;goto B5822f2;
case 0x5822f4:goto L5822f4;
case 0x5822f7:c.instructions+=3;goto B5822f7;
case 0x5822fa:c.instructions+=2;goto B5822fa;
case 0x5822fc:c.instructions+=1;goto B5822fc;
case 0x5822ff:goto L5822ff;
case 0x582301:c.instructions+=1;goto B582301;
case 0x582310:goto L582310;
case 0x582314:c.instructions+=2;goto B582314;
case 0x582316:c.instructions+=1;goto B582316;
case 0x582318:goto L582318;
case 0x58231e:c.instructions+=2;goto B58231e;
case 0x582320:c.instructions+=1;goto B582320;
case 0x582322:goto L582322;
case 0x582327:c.instructions+=3;goto B582327;
case 0x582328:c.instructions+=2;goto B582328;
case 0x58232d:c.instructions+=1;goto B58232d;
case 0x582332:goto L582332;
case 0x582335:goto L582335;
case 0x582340:goto L582340;
case 0x582343:c.instructions+=2;goto B582343;
case 0x582345:c.instructions+=1;goto B582345;
case 0x582347:goto L582347;
case 0x582349:c.instructions+=1;goto B582349;
case 0x58234a:goto L58234a;
case 0x58234d:c.instructions+=3;goto B58234d;
case 0x582352:c.instructions+=2;goto B582352;
case 0x582353:c.instructions+=1;goto B582353;
case 0x582358:goto L582358;
case 0x58235b:c.instructions+=1;goto B58235b;
case 0x582360:goto L582360;
case 0x582364:c.instructions+=4;goto B582364;
case 0x582368:c.instructions+=3;goto B582368;
case 0x58236e:c.instructions+=2;goto B58236e;
case 0x582374:c.instructions+=1;goto B582374;
case 0x582380:goto L582380;
case 0x582383:c.instructions+=2;goto B582383;
case 0x582385:c.instructions+=1;goto B582385;
case 0x582387:goto L582387;
case 0x582388:goto L582388;
case 0x58238d:c.instructions+=2;goto B58238d;
case 0x58238e:c.instructions+=1;goto B58238e;
case 0x582393:goto L582393;
case 0x582396:c.instructions+=1;goto B582396;
case 0x5823a0:goto L5823a0;
case 0x5823a4:c.instructions+=2;goto B5823a4;
case 0x5823a6:c.instructions+=1;goto B5823a6;
case 0x5823a8:goto L5823a8;
case 0x5823a9:c.instructions+=1;goto B5823a9;
case 0x5823ae:goto L5823ae;
case 0x5823af:goto L5823af;
case 0x5823b0:goto L5823b0;
case 0x5823b2:c.instructions+=5;goto B5823b2;
case 0x5823b8:c.instructions+=4;goto B5823b8;
case 0x5823be:c.instructions+=3;goto B5823be;
case 0x5823c4:c.instructions+=2;goto B5823c4;
case 0x5823c9:c.instructions+=1;goto B5823c9;
case 0x5823d0:goto L5823d0;
case 0x5823d2:c.instructions+=3;goto B5823d2;
case 0x5823d5:c.instructions+=2;goto B5823d5;
case 0x5823da:c.instructions+=1;goto B5823da;
case 0x5823dc:goto L5823dc;
case 0x5823e2:c.instructions+=1;goto B5823e2;
case 0x5823f0:goto L5823f0;
case 0x5823f3:c.instructions+=6;goto B5823f3;
case 0x5823f4:c.instructions+=5;goto B5823f4;
case 0x5823f5:c.instructions+=4;goto B5823f5;
case 0x5823f9:c.instructions+=3;goto B5823f9;
case 0x5823fc:c.instructions+=2;goto B5823fc;
case 0x5823fd:c.instructions+=1;goto B5823fd;
case 0x582402:goto L582402;
case 0x582405:c.instructions+=3;goto B582405;
case 0x58240a:c.instructions+=2;goto B58240a;
case 0x58240b:c.instructions+=1;goto B58240b;
case 0x582410:goto L582410;
case 0x582412:c.instructions+=3;goto B582412;
case 0x582415:c.instructions+=2;goto B582415;
case 0x582417:c.instructions+=1;goto B582417;
case 0x58241d:goto L58241d;
case 0x582420:c.instructions+=4;goto B582420;
case 0x582421:c.instructions+=3;goto B582421;
case 0x582426:c.instructions+=2;goto B582426;
case 0x582427:c.instructions+=1;goto B582427;
case 0x58242c:goto L58242c;
case 0x58242e:c.instructions+=8;goto B58242e;
case 0x582431:c.instructions+=7;goto B582431;
case 0x582433:c.instructions+=6;goto B582433;
case 0x582437:c.instructions+=5;goto B582437;
case 0x58243b:c.instructions+=4;goto B58243b;
case 0x58243f:c.instructions+=3;goto B58243f;
case 0x582447:c.instructions+=2;goto B582447;
case 0x58244b:c.instructions+=1;goto B58244b;
case 0x58244d:goto L58244d;
case 0x582450:c.instructions+=2;goto B582450;
case 0x582452:c.instructions+=1;goto B582452;
case 0x582454:goto L582454;
case 0x582455:c.instructions+=1;goto B582455;
case 0x58245a:goto L58245a;
case 0x58245d:goto L58245d;
case 0x582460:c.instructions+=3;goto B582460;
case 0x582462:c.instructions+=2;goto B582462;
case 0x582463:c.instructions+=1;goto B582463;
case 0x582468:goto L582468;
case 0x58246b:c.instructions+=3;goto B58246b;
case 0x58246d:c.instructions+=2;goto B58246d;
case 0x582470:c.instructions+=1;goto B582470;
case 0x582472:goto L582472;
case 0x582475:c.instructions+=5;goto B582475;
case 0x582476:c.instructions+=4;goto B582476;
case 0x582478:c.instructions+=3;goto B582478;
case 0x582479:c.instructions+=2;goto B582479;
case 0x58247a:c.instructions+=1;goto B58247a;
case 0x58247f:goto L58247f;
case 0x582482:c.instructions+=4;goto B582482;
case 0x582485:c.instructions+=3;goto B582485;
case 0x582488:c.instructions+=2;goto B582488;
case 0x58248b:c.instructions+=1;goto B58248b;
case 0x58248f:goto L58248f;
case 0x582492:c.instructions+=3;goto B582492;
case 0x582494:c.instructions+=2;goto B582494;
case 0x582495:c.instructions+=1;goto B582495;
case 0x582497:goto L582497;
case 0x58249a:c.instructions+=4;goto B58249a;
case 0x58249b:c.instructions+=3;goto B58249b;
case 0x58249f:c.instructions+=2;goto B58249f;
case 0x5824a0:c.instructions+=1;goto B5824a0;
case 0x5824a2:goto L5824a2;
case 0x5824a4:goto L5824a4;
case 0x5824a7:c.instructions+=2;goto B5824a7;
case 0x5824ad:c.instructions+=1;goto B5824ad;
case 0x5824af:goto L5824af;
case 0x5824b0:c.instructions+=4;goto B5824b0;
case 0x5824b2:c.instructions+=3;goto B5824b2;
case 0x5824b3:c.instructions+=2;goto B5824b3;
case 0x5824b6:c.instructions+=1;goto B5824b6;
case 0x5824b7:goto L5824b7;
case 0x5824ba:c.instructions+=8;goto B5824ba;
case 0x5824bc:c.instructions+=7;goto B5824bc;
case 0x5824c2:c.instructions+=6;goto B5824c2;
case 0x5824c6:c.instructions+=5;goto B5824c6;
case 0x5824ca:c.instructions+=4;goto B5824ca;
case 0x5824ce:c.instructions+=3;goto B5824ce;
case 0x5824d6:c.instructions+=2;goto B5824d6;
case 0x5824da:c.instructions+=1;goto B5824da;
case 0x5824dc:goto L5824dc;
case 0x5824df:c.instructions+=3;goto B5824df;
case 0x5824e0:c.instructions+=2;goto B5824e0;
case 0x5824e4:c.instructions+=1;goto B5824e4;
case 0x5824e5:goto L5824e5;
case 0x5824e7:goto L5824e7;
case 0x5824ea:goto L5824ea;
case 0x5824ed:c.instructions+=2;goto B5824ed;
case 0x5824ee:c.instructions+=1;goto B5824ee;
case 0x5824f3:goto L5824f3;
case 0x5824f6:c.instructions+=10;goto B5824f6;
case 0x5824f9:c.instructions+=9;goto B5824f9;
case 0x5824fc:c.instructions+=8;goto B5824fc;
case 0x5824ff:c.instructions+=7;goto B5824ff;
case 0x582502:c.instructions+=6;goto B582502;
case 0x582505:c.instructions+=5;goto B582505;
case 0x582508:c.instructions+=4;goto B582508;
case 0x582509:c.instructions+=3;goto B582509;
case 0x58250a:c.instructions+=2;goto B58250a;
case 0x58250d:c.instructions+=1;goto B58250d;
case 0x582510:goto L582510;
case 0x582512:c.instructions+=4;goto B582512;
case 0x582513:c.instructions+=3;goto B582513;
case 0x582518:c.instructions+=2;goto B582518;
case 0x58251a:c.instructions+=1;goto B58251a;
case 0x58251d:goto L58251d;
case 0x58251f:goto L58251f;
case 0x582520:c.instructions+=1;goto B582520;
case 0x582530:goto L582530;
case 0x582534:c.instructions+=2;goto B582534;
case 0x582537:c.instructions+=1;goto B582537;
case 0x582539:goto L582539;
case 0x58253c:c.instructions+=1;goto B58253c;
case 0x582542:goto L582542;
case 0x582545:c.instructions+=1;goto B582545;
case 0x582547:goto L582547;
case 0x58254a:c.instructions+=1;goto B58254a;
case 0x58254c:goto L58254c;
case 0x582551:c.instructions+=1;goto B582551;
case 0x582552:goto L582552;
case 0x582555:c.instructions+=1;goto B582555;
case 0x582557:goto L582557;
case 0x58255a:c.instructions+=1;goto B58255a;
case 0x58255c:goto L58255c;
case 0x582561:c.instructions+=1;goto B582561;
case 0x582562:goto L582562;
case 0x582565:c.instructions+=1;goto B582565;
case 0x582567:goto L582567;
case 0x58256a:c.instructions+=1;goto B58256a;
case 0x58256c:goto L58256c;
case 0x582571:c.instructions+=1;goto B582571;
case 0x582572:goto L582572;
case 0x582575:c.instructions+=1;goto B582575;
case 0x582577:goto L582577;
case 0x58257a:c.instructions+=1;goto B58257a;
case 0x58257c:goto L58257c;
case 0x582581:c.instructions+=1;goto B582581;
case 0x582582:goto L582582;
case 0x582585:c.instructions+=1;goto B582585;
case 0x582587:goto L582587;
case 0x58258a:c.instructions+=1;goto B58258a;
case 0x58258c:goto L58258c;
case 0x58258f:c.instructions+=1;goto B58258f;
case 0x582591:goto L582591;
case 0x582594:c.instructions+=1;goto B582594;
case 0x582596:goto L582596;
case 0x582599:c.instructions+=1;goto B582599;
case 0x58259b:goto L58259b;
case 0x58259e:c.instructions+=1;goto B58259e;
case 0x5825a0:goto L5825a0;
case 0x5825a3:c.instructions+=1;goto B5825a3;
case 0x5825a5:goto L5825a5;
case 0x5825a8:c.instructions+=1;goto B5825a8;
case 0x5825aa:goto L5825aa;
case 0x5825ad:c.instructions+=1;goto B5825ad;
case 0x5825af:goto L5825af;
case 0x5825b2:c.instructions+=1;goto B5825b2;
case 0x5825b4:goto L5825b4;
case 0x5825b7:c.instructions+=1;goto B5825b7;
case 0x5825b9:goto L5825b9;
case 0x5825bc:c.instructions+=1;goto B5825bc;
case 0x5825be:goto L5825be;
case 0x5825c1:c.instructions+=1;goto B5825c1;
case 0x5825c3:goto L5825c3;
case 0x5825c6:c.instructions+=1;goto B5825c6;
case 0x5825c8:goto L5825c8;
case 0x5825cb:c.instructions+=1;goto B5825cb;
case 0x5825cc:goto L5825cc;
case 0x5825d1:c.instructions+=1;goto B5825d1;
case 0x5825d2:goto L5825d2;
case 0x5825d4:c.instructions+=1;goto B5825d4;
case 0x5825e0:goto L5825e0;
case 0x5825e4:c.instructions+=2;goto B5825e4;
case 0x5825e7:c.instructions+=1;goto B5825e7;
case 0x5825ed:goto L5825ed;
case 0x5825ee:c.instructions+=6;goto B5825ee;
case 0x5825ef:c.instructions+=5;goto B5825ef;
case 0x5825f4:c.instructions+=4;goto B5825f4;
case 0x5825f6:c.instructions+=3;goto B5825f6;
case 0x5825f7:c.instructions+=2;goto B5825f7;
case 0x5825fa:c.instructions+=1;goto B5825fa;
case 0x5825fc:goto L5825fc;
case 0x582604:c.instructions+=1;goto B582604;
case 0x582609:goto L582609;
case 0x58260c:c.instructions+=1;goto B58260c;
case 0x58260e:goto L58260e;
case 0x582616:c.instructions+=1;goto B582616;
case 0x58261b:goto L58261b;
case 0x58261e:c.instructions+=1;goto B58261e;
case 0x582620:goto L582620;
case 0x582628:c.instructions+=1;goto B582628;
case 0x58262d:goto L58262d;
case 0x582630:c.instructions+=1;goto B582630;
case 0x582632:goto L582632;
case 0x58263a:c.instructions+=1;goto B58263a;
case 0x58263f:goto L58263f;
case 0x582642:c.instructions+=1;goto B582642;
case 0x582644:goto L582644;
case 0x58264c:c.instructions+=1;goto B58264c;
case 0x582651:goto L582651;
case 0x582654:c.instructions+=1;goto B582654;
case 0x582656:goto L582656;
case 0x58265e:c.instructions+=1;goto B58265e;
case 0x582663:goto L582663;
case 0x582666:c.instructions+=1;goto B582666;
case 0x582668:goto L582668;
case 0x582670:c.instructions+=1;goto B582670;
case 0x582675:goto L582675;
case 0x582678:c.instructions+=1;goto B582678;
case 0x58267a:goto L58267a;
case 0x582682:c.instructions+=1;goto B582682;
case 0x582687:goto L582687;
case 0x58268a:c.instructions+=1;goto B58268a;
case 0x58268c:goto L58268c;
case 0x582694:c.instructions+=1;goto B582694;
case 0x582699:goto L582699;
case 0x58269c:c.instructions+=1;goto B58269c;
case 0x58269e:goto L58269e;
case 0x5826a6:c.instructions+=1;goto B5826a6;
case 0x5826ab:goto L5826ab;
case 0x5826ad:c.instructions+=1;goto B5826ad;
case 0x5826b0:goto L5826b0;
case 0x5826b4:c.instructions+=2;goto B5826b4;
case 0x5826b7:c.instructions+=1;goto B5826b7;
case 0x5826b9:goto L5826b9;
case 0x5826bc:c.instructions+=1;goto B5826bc;
case 0x5826be:goto L5826be;
case 0x5826bf:c.instructions+=5;goto B5826bf;
case 0x5826c0:c.instructions+=4;goto B5826c0;
case 0x5826c5:c.instructions+=3;goto B5826c5;
case 0x5826c7:c.instructions+=2;goto B5826c7;
case 0x5826c9:c.instructions+=1;goto B5826c9;
case 0x5826ca:goto L5826ca;
case 0x5826cc:c.instructions+=1;goto B5826cc;
case 0x5826d0:goto L5826d0;
case 0x5826d4:c.instructions+=4;goto B5826d4;
case 0x5826d8:c.instructions+=3;goto B5826d8;
case 0x5826da:c.instructions+=2;goto B5826da;
case 0x5826dc:c.instructions+=1;goto B5826dc;
case 0x5826e0:goto L5826e0;
case 0x5826e4:c.instructions+=3;goto B5826e4;
case 0x5826e7:c.instructions+=2;goto B5826e7;
case 0x5826e9:c.instructions+=1;goto B5826e9;
case 0x5826eb:goto L5826eb;
case 0x5826ef:c.instructions+=2;goto B5826ef;
case 0x5826f2:c.instructions+=1;goto B5826f2;
case 0x5826f4:goto L5826f4;
case 0x5826f7:c.instructions+=1;goto B5826f7;
case 0x5826f9:goto L5826f9;
case 0x5826fe:c.instructions+=1;goto B5826fe;
case 0x5826ff:goto L5826ff;
case 0x582702:c.instructions+=1;goto B582702;
case 0x582704:goto L582704;
case 0x582707:c.instructions+=1;goto B582707;
case 0x582709:goto L582709;
case 0x58270e:c.instructions+=1;goto B58270e;
case 0x58270f:goto L58270f;
case 0x582712:c.instructions+=1;goto B582712;
case 0x582714:goto L582714;
case 0x582717:c.instructions+=1;goto B582717;
case 0x582719:goto L582719;
case 0x58271e:c.instructions+=1;goto B58271e;
case 0x58271f:goto L58271f;
case 0x582722:c.instructions+=1;goto B582722;
case 0x582724:goto L582724;
case 0x582727:c.instructions+=1;goto B582727;
case 0x582729:goto L582729;
case 0x58272e:c.instructions+=1;goto B58272e;
case 0x58272f:goto L58272f;
case 0x582732:c.instructions+=1;goto B582732;
case 0x582734:goto L582734;
case 0x582737:c.instructions+=1;goto B582737;
case 0x582739:goto L582739;
case 0x58273e:c.instructions+=1;goto B58273e;
case 0x58273f:goto L58273f;
case 0x582742:c.instructions+=1;goto B582742;
case 0x582748:goto L582748;
case 0x58274b:c.instructions+=1;goto B58274b;
case 0x582751:goto L582751;
case 0x582756:c.instructions+=1;goto B582756;
case 0x582757:goto L582757;
case 0x58275a:c.instructions+=1;goto B58275a;
case 0x58275c:goto L58275c;
case 0x582760:c.instructions+=2;goto B582760;
case 0x582763:c.instructions+=1;goto B582763;
case 0x582765:goto L582765;
case 0x582768:c.instructions+=1;goto B582768;
case 0x58276a:goto L58276a;
case 0x58276f:c.instructions+=1;goto B58276f;
case 0x582770:goto L582770;
case 0x582773:c.instructions+=1;goto B582773;
case 0x582775:goto L582775;
case 0x582778:c.instructions+=1;goto B582778;
case 0x58277a:goto L58277a;
case 0x58277f:c.instructions+=1;goto B58277f;
case 0x582780:goto L582780;
case 0x582783:c.instructions+=1;goto B582783;
case 0x582785:goto L582785;
case 0x582788:c.instructions+=1;goto B582788;
case 0x58278a:goto L58278a;
case 0x58278f:c.instructions+=1;goto B58278f;
case 0x582790:goto L582790;
case 0x582793:c.instructions+=1;goto B582793;
case 0x582795:goto L582795;
case 0x582798:c.instructions+=1;goto B582798;
case 0x58279a:goto L58279a;
case 0x58279f:c.instructions+=1;goto B58279f;
case 0x5827a0:goto L5827a0;
case 0x5827a3:c.instructions+=1;goto B5827a3;
case 0x5827a5:goto L5827a5;
case 0x5827a8:c.instructions+=1;goto B5827a8;
case 0x5827aa:goto L5827aa;
case 0x5827af:c.instructions+=1;goto B5827af;
case 0x5827b0:goto L5827b0;
case 0x5827b3:c.instructions+=1;goto B5827b3;
case 0x5827b9:goto L5827b9;
case 0x5827bc:c.instructions+=1;goto B5827bc;
case 0x5827c2:goto L5827c2;
case 0x5827c7:c.instructions+=1;goto B5827c7;
case 0x5827c8:goto L5827c8;
case 0x5827cb:c.instructions+=1;goto B5827cb;
case 0x5827cd:goto L5827cd;
case 0x5827d1:c.instructions+=2;goto B5827d1;
case 0x5827d4:c.instructions+=1;goto B5827d4;
case 0x5827d6:goto L5827d6;
case 0x5827db:c.instructions+=1;goto B5827db;
case 0x5827dc:goto L5827dc;
case 0x5827df:c.instructions+=1;goto B5827df;
case 0x5827e1:goto L5827e1;
case 0x5827e6:c.instructions+=1;goto B5827e6;
case 0x5827e7:goto L5827e7;
case 0x5827ea:c.instructions+=1;goto B5827ea;
case 0x5827ec:goto L5827ec;
case 0x5827f1:c.instructions+=1;goto B5827f1;
case 0x5827f2:goto L5827f2;
case 0x5827f5:c.instructions+=1;goto B5827f5;
case 0x5827f7:goto L5827f7;
case 0x5827fc:c.instructions+=1;goto B5827fc;
case 0x5827fd:goto L5827fd;
case 0x582800:c.instructions+=1;goto B582800;
case 0x582802:goto L582802;
case 0x582807:c.instructions+=1;goto B582807;
case 0x582808:goto L582808;
case 0x58280b:c.instructions+=1;goto B58280b;
case 0x58280d:goto L58280d;
case 0x582812:c.instructions+=1;goto B582812;
case 0x582813:goto L582813;
case 0x582816:c.instructions+=1;goto B582816;
case 0x582818:goto L582818;
case 0x58281c:c.instructions+=2;goto B58281c;
case 0x58281f:c.instructions+=1;goto B58281f;
case 0x582821:goto L582821;
case 0x582826:c.instructions+=1;goto B582826;
case 0x582827:goto L582827;
case 0x58282a:c.instructions+=1;goto B58282a;
case 0x58282c:goto L58282c;
case 0x582831:c.instructions+=1;goto B582831;
case 0x582832:goto L582832;
case 0x582835:c.instructions+=1;goto B582835;
case 0x582837:goto L582837;
case 0x58283c:c.instructions+=1;goto B58283c;
case 0x58283d:goto L58283d;
case 0x582840:c.instructions+=1;goto B582840;
case 0x582842:goto L582842;
case 0x582847:c.instructions+=1;goto B582847;
case 0x582848:goto L582848;
case 0x58284b:c.instructions+=1;goto B58284b;
case 0x58284d:goto L58284d;
case 0x582852:c.instructions+=1;goto B582852;
case 0x582853:goto L582853;
case 0x582856:c.instructions+=1;goto B582856;
case 0x582858:goto L582858;
case 0x58285d:goto L58285d;
case 0x582860:goto L582860;
case 0x582864:c.instructions+=4;goto B582864;
case 0x582868:c.instructions+=3;goto B582868;
case 0x58286b:c.instructions+=2;goto B58286b;
case 0x58286d:c.instructions+=1;goto B58286d;
case 0x582870:goto L582870;
case 0x582871:c.instructions+=4;goto B582871;
case 0x582875:c.instructions+=3;goto B582875;
case 0x582876:c.instructions+=2;goto B582876;
case 0x58287b:c.instructions+=1;goto B58287b;
case 0x582880:goto L582880;
case 0x582882:c.instructions+=3;goto B582882;
case 0x582883:c.instructions+=2;goto B582883;
case 0x582884:c.instructions+=1;goto B582884;
case 0x582889:goto L582889;
case 0x58288c:c.instructions+=2;goto B58288c;
case 0x58288e:c.instructions+=1;goto B58288e;
case 0x582890:goto L582890;
case 0x582893:c.instructions+=2;goto B582893;
case 0x582899:c.instructions+=1;goto B582899;
case 0x58289b:goto L58289b;
case 0x58289c:c.instructions+=2;goto B58289c;
case 0x58289d:c.instructions+=1;goto B58289d;
case 0x5828a2:goto L5828a2;
case 0x5828a4:c.instructions+=2;goto B5828a4;
case 0x5828a5:c.instructions+=1;goto B5828a5;
case 0x5828aa:goto L5828aa;
case 0x5828ac:c.instructions+=4;goto B5828ac;
case 0x5828ad:c.instructions+=3;goto B5828ad;
case 0x5828ae:c.instructions+=2;goto B5828ae;
case 0x5828af:c.instructions+=1;goto B5828af;
case 0x5828b4:goto L5828b4;
case 0x5828b7:c.instructions+=2;goto B5828b7;
case 0x5828b9:c.instructions+=1;goto B5828b9;
case 0x5828bb:goto L5828bb;
case 0x5828bd:c.instructions+=3;goto B5828bd;
case 0x5828bf:c.instructions+=2;goto B5828bf;
case 0x5828c0:c.instructions+=1;goto B5828c0;
case 0x5828c5:goto L5828c5;
case 0x5828c8:c.instructions+=2;goto B5828c8;
case 0x5828ca:c.instructions+=1;goto B5828ca;
case 0x5828cc:goto L5828cc;
case 0x5828cf:c.instructions+=2;goto B5828cf;
case 0x5828d5:c.instructions+=1;goto B5828d5;
case 0x5828d7:goto L5828d7;
case 0x5828db:c.instructions+=2;goto B5828db;
case 0x5828dd:c.instructions+=1;goto B5828dd;
case 0x5828df:goto L5828df;
case 0x5828e4:c.instructions+=2;goto B5828e4;
case 0x5828e5:c.instructions+=1;goto B5828e5;
case 0x5828ea:goto L5828ea;
case 0x5828ed:c.instructions+=2;goto B5828ed;
case 0x5828ef:c.instructions+=1;goto B5828ef;
case 0x5828f1:goto L5828f1;
case 0x5828f2:c.instructions+=5;goto B5828f2;
case 0x5828f3:c.instructions+=4;goto B5828f3;
case 0x5828f4:c.instructions+=3;goto B5828f4;
case 0x5828f6:c.instructions+=2;goto B5828f6;
case 0x5828f7:c.instructions+=1;goto B5828f7;
case 0x5828fa:goto L5828fa;
case 0x5828fb:c.instructions+=3;goto B5828fb;
case 0x5828fd:c.instructions+=2;goto B5828fd;
case 0x5828fe:c.instructions+=1;goto B5828fe;
case 0x582901:goto L582901;
case 0x582902:c.instructions+=5;goto B582902;
case 0x582903:c.instructions+=4;goto B582903;
case 0x582904:c.instructions+=3;goto B582904;
case 0x582906:c.instructions+=2;goto B582906;
case 0x582907:c.instructions+=1;goto B582907;
case 0x582910:goto L582910;
case 0x582914:c.instructions+=4;goto B582914;
case 0x582918:c.instructions+=3;goto B582918;
case 0x58291b:c.instructions+=2;goto B58291b;
case 0x58291e:c.instructions+=1;goto B58291e;
case 0x582930:goto L582930;
case 0x582933:c.instructions+=7;goto B582933;
case 0x582936:c.instructions+=6;goto B582936;
case 0x582938:c.instructions+=5;goto B582938;
case 0x58293b:c.instructions+=4;goto B58293b;
case 0x58293e:c.instructions+=3;goto B58293e;
case 0x58293f:c.instructions+=2;goto B58293f;
case 0x582941:c.instructions+=1;goto B582941;
case 0x582950:goto L582950;
case 0x582954:c.instructions+=4;goto B582954;
case 0x582957:c.instructions+=3;goto B582957;
case 0x582959:c.instructions+=2;goto B582959;
case 0x58295a:c.instructions+=1;goto B58295a;
case 0x58295f:goto L58295f;
case 0x582962:c.instructions+=2;goto B582962;
case 0x582964:c.instructions+=1;goto B582964;
case 0x582966:goto L582966;
case 0x582967:goto L582967;
case 0x582969:c.instructions+=4;goto B582969;
case 0x58296a:c.instructions+=3;goto B58296a;
case 0x58296b:c.instructions+=2;goto B58296b;
case 0x582970:c.instructions+=1;goto B582970;
case 0x582975:goto L582975;
case 0x582978:c.instructions+=2;goto B582978;
case 0x58297d:c.instructions+=1;goto B58297d;
case 0x582980:goto L582980;
case 0x582983:c.instructions+=2;goto B582983;
case 0x582985:c.instructions+=1;goto B582985;
case 0x582987:goto L582987;
case 0x58298a:c.instructions+=1;goto B58298a;
case 0x58298b:goto L58298b;
case 0x582991:c.instructions+=5;goto B582991;
case 0x582996:c.instructions+=4;goto B582996;
case 0x582998:c.instructions+=3;goto B582998;
case 0x582999:c.instructions+=2;goto B582999;
case 0x58299b:c.instructions+=1;goto B58299b;
case 0x58299d:goto L58299d;
case 0x5829a3:goto L5829a3;
case 0x5829a9:c.instructions+=1;goto B5829a9;
case 0x5829ab:goto L5829ab;
case 0x5829ac:c.instructions+=3;goto B5829ac;
case 0x5829af:c.instructions+=2;goto B5829af;
case 0x5829b1:c.instructions+=1;goto B5829b1;
case 0x5829b3:goto L5829b3;
case 0x5829b6:c.instructions+=2;goto B5829b6;
case 0x5829b7:c.instructions+=1;goto B5829b7;
case 0x5829b8:goto L5829b8;
case 0x5829ba:goto L5829ba;
case 0x5829bd:c.instructions+=2;goto B5829bd;
case 0x5829be:c.instructions+=1;goto B5829be;
case 0x5829c0:goto L5829c0;
case 0x5829c3:c.instructions+=3;goto B5829c3;
case 0x5829c6:c.instructions+=2;goto B5829c6;
case 0x5829ca:c.instructions+=1;goto B5829ca;
case 0x5829cc:goto L5829cc;
case 0x5829ce:c.instructions+=1;goto B5829ce;
case 0x5829d0:goto L5829d0;
case 0x5829d3:c.instructions+=1;goto B5829d3;
case 0x5829d6:goto L5829d6;
case 0x5829d8:c.instructions+=1;goto B5829d8;
case 0x5829da:goto L5829da;
case 0x5829dc:goto L5829dc;
case 0x5829e2:c.instructions+=2;goto B5829e2;
case 0x5829e7:c.instructions+=1;goto B5829e7;
case 0x5829e9:goto L5829e9;
case 0x5829ee:c.instructions+=1;goto B5829ee;
case 0x5829f1:goto L5829f1;
case 0x5829f6:c.instructions+=1;goto B5829f6;
case 0x5829f8:goto L5829f8;
case 0x5829fa:c.instructions+=1;goto B5829fa;
case 0x5829fd:goto L5829fd;
case 0x582a02:c.instructions+=1;goto B582a02;
case 0x582a04:goto L582a04;
case 0x582a09:c.instructions+=1;goto B582a09;
case 0x582a0c:goto L582a0c;
case 0x582a11:c.instructions+=1;goto B582a11;
case 0x582a13:goto L582a13;
case 0x582a18:c.instructions+=1;goto B582a18;
case 0x582a1b:goto L582a1b;
case 0x582a20:c.instructions+=1;goto B582a20;
case 0x582a22:goto L582a22;
case 0x582a27:c.instructions+=1;goto B582a27;
case 0x582a2a:goto L582a2a;
case 0x582a2f:c.instructions+=1;goto B582a2f;
case 0x582a31:goto L582a31;
case 0x582a36:c.instructions+=1;goto B582a36;
case 0x582a39:goto L582a39;
case 0x582a3e:c.instructions+=5;goto B582a3e;
case 0x582a40:c.instructions+=4;goto B582a40;
case 0x582a42:c.instructions+=3;goto B582a42;
case 0x582a45:c.instructions+=2;goto B582a45;
case 0x582a46:c.instructions+=1;goto B582a46;
case 0x582a50:goto L582a50;
case 0x582a51:c.instructions+=6;goto B582a51;
case 0x582a53:c.instructions+=5;goto B582a53;
case 0x582a54:c.instructions+=4;goto B582a54;
case 0x582a56:c.instructions+=3;goto B582a56;
case 0x582a5b:c.instructions+=2;goto B582a5b;
case 0x582a5d:c.instructions+=1;goto B582a5d;
case 0x582a60:goto L582a60;
case 0x582a62:c.instructions+=3;goto B582a62;
case 0x582a65:c.instructions+=2;goto B582a65;
case 0x582a66:c.instructions+=1;goto B582a66;
case 0x582a68:goto L582a68;
case 0x582a6e:c.instructions+=6;goto B582a6e;
case 0x582a74:c.instructions+=5;goto B582a74;
case 0x582a7a:c.instructions+=4;goto B582a7a;
case 0x582a80:c.instructions+=3;goto B582a80;
case 0x582a8a:c.instructions+=2;goto B582a8a;
case 0x582a90:c.instructions+=1;goto B582a90;
case 0x582a95:goto L582a95;
case 0x582a97:c.instructions+=3;goto B582a97;
case 0x582a9c:c.instructions+=2;goto B582a9c;
case 0x582a9d:c.instructions+=1;goto B582a9d;
case 0x582a9f:goto L582a9f;
case 0x582aa5:c.instructions+=7;goto B582aa5;
case 0x582aab:c.instructions+=6;goto B582aab;
case 0x582ab1:c.instructions+=5;goto B582ab1;
case 0x582ab7:c.instructions+=4;goto B582ab7;
case 0x582abd:c.instructions+=3;goto B582abd;
case 0x582abf:c.instructions+=2;goto B582abf;
case 0x582ac4:c.instructions+=1;goto B582ac4;
case 0x582ac7:goto L582ac7;
case 0x582ac9:goto L582ac9;
case 0x582aca:c.instructions+=3;goto B582aca;
case 0x582acc:c.instructions+=2;goto B582acc;
case 0x582acd:c.instructions+=1;goto B582acd;
case 0x582ad0:goto L582ad0;
case 0x582ad6:c.instructions+=2;goto B582ad6;
case 0x582ad8:c.instructions+=1;goto B582ad8;
case 0x582ada:goto L582ada;
case 0x582adb:c.instructions+=2;goto B582adb;
case 0x582ae5:c.instructions+=1;goto B582ae5;
case 0x582aea:goto L582aea;
case 0x582aeb:goto L582aeb;
case 0x582af0:goto L582af0;
case 0x582af1:c.instructions+=7;goto B582af1;
case 0x582af2:c.instructions+=6;goto B582af2;
case 0x582af4:c.instructions+=5;goto B582af4;
case 0x582afa:c.instructions+=4;goto B582afa;
case 0x582afc:c.instructions+=3;goto B582afc;
case 0x582afd:c.instructions+=2;goto B582afd;
case 0x582b01:c.instructions+=1;goto B582b01;
case 0x582b03:goto L582b03;
case 0x582b09:c.instructions+=3;goto B582b09;
case 0x582b0a:c.instructions+=2;goto B582b0a;
case 0x582b0b:c.instructions+=1;goto B582b0b;
case 0x582b0d:goto L582b0d;
case 0x582b10:c.instructions+=2;goto B582b10;
case 0x582b13:c.instructions+=1;goto B582b13;
case 0x582b15:goto L582b15;
case 0x582b1f:goto L582b1f;
case 0x582b23:c.instructions+=3;goto B582b23;
case 0x582b28:c.instructions+=2;goto B582b28;
case 0x582b2a:c.instructions+=1;goto B582b2a;
case 0x582b2c:goto L582b2c;
case 0x582b2e:c.instructions+=1;goto B582b2e;
case 0x582b30:goto L582b30;
case 0x582b36:c.instructions+=2;goto B582b36;
case 0x582b38:c.instructions+=1;goto B582b38;
case 0x582b3a:goto L582b3a;
case 0x582b3b:c.instructions+=2;goto B582b3b;
case 0x582b41:c.instructions+=1;goto B582b41;
case 0x582b46:goto L582b46;
case 0x582b49:goto L582b49;
case 0x582b4a:c.instructions+=4;goto B582b4a;
case 0x582b4b:c.instructions+=3;goto B582b4b;
case 0x582b51:c.instructions+=2;goto B582b51;
case 0x582b52:c.instructions+=1;goto B582b52;
case 0x582b60:goto L582b60;
case 0x582b66:c.instructions+=3;goto B582b66;
case 0x582b6b:c.instructions+=2;goto B582b6b;
case 0x582b6d:c.instructions+=1;goto B582b6d;
case 0x582b6f:goto L582b6f;
case 0x582b75:c.instructions+=2;goto B582b75;
case 0x582b7a:c.instructions+=1;goto B582b7a;
case 0x582b7f:goto L582b7f;
case 0x582b84:c.instructions+=1;goto B582b84;
case 0x582b90:goto L582b90;
case 0x582b94:c.instructions+=4;goto B582b94;
case 0x582b9a:c.instructions+=3;goto B582b9a;
case 0x582b9b:c.instructions+=2;goto B582b9b;
case 0x582b9c:c.instructions+=1;goto B582b9c;
case 0x582ba1:goto L582ba1;
case 0x582ba4:c.instructions+=1;goto B582ba4;
case 0x582bb0:goto L582bb0;
case 0x582bb4:c.instructions+=4;goto B582bb4;
case 0x582bba:c.instructions+=3;goto B582bba;
case 0x582bbb:c.instructions+=2;goto B582bbb;
case 0x582bbc:c.instructions+=1;goto B582bbc;
case 0x582bc1:goto L582bc1;
case 0x582bc4:c.instructions+=1;goto B582bc4;
case 0x582bd0:goto L582bd0;
case 0x582bd3:c.instructions+=7;goto B582bd3;
case 0x582bd4:c.instructions+=6;goto B582bd4;
case 0x582bd5:c.instructions+=5;goto B582bd5;
case 0x582bd6:c.instructions+=4;goto B582bd6;
case 0x582bd7:c.instructions+=3;goto B582bd7;
case 0x582bdc:c.instructions+=2;goto B582bdc;
case 0x582bde:c.instructions+=1;goto B582bde;
case 0x582be3:goto L582be3;
case 0x582be7:c.instructions+=7;goto B582be7;
case 0x582be9:c.instructions+=6;goto B582be9;
case 0x582beb:c.instructions+=5;goto B582beb;
case 0x582bee:c.instructions+=4;goto B582bee;
case 0x582bf0:c.instructions+=3;goto B582bf0;
case 0x582bf5:c.instructions+=2;goto B582bf5;
case 0x582bf9:c.instructions+=1;goto B582bf9;
case 0x582bfb:goto L582bfb;
case 0x582c00:c.instructions+=1;goto B582c00;
case 0x582c02:goto L582c02;
case 0x582c07:c.instructions+=1;goto B582c07;
case 0x582c09:goto L582c09;
case 0x582c0b:goto L582c0b;
case 0x582c0d:c.instructions+=1;goto B582c0d;
case 0x582c11:goto L582c11;
case 0x582c13:c.instructions+=3;goto B582c13;
case 0x582c18:c.instructions+=2;goto B582c18;
case 0x582c1d:c.instructions+=1;goto B582c1d;
case 0x582c21:goto L582c21;
case 0x582c23:goto L582c23;
case 0x582c26:c.instructions+=9;goto B582c26;
case 0x582c28:c.instructions+=8;goto B582c28;
case 0x582c2d:c.instructions+=7;goto B582c2d;
case 0x582c2e:c.instructions+=6;goto B582c2e;
case 0x582c30:c.instructions+=5;goto B582c30;
case 0x582c34:c.instructions+=4;goto B582c34;
case 0x582c35:c.instructions+=3;goto B582c35;
case 0x582c3a:c.instructions+=2;goto B582c3a;
case 0x582c3b:c.instructions+=1;goto B582c3b;
case 0x582c40:goto L582c40;
case 0x582c43:c.instructions+=2;goto B582c43;
case 0x582c44:c.instructions+=1;goto B582c44;
case 0x582c49:goto L582c49;
case 0x582c4f:c.instructions+=4;goto B582c4f;
case 0x582c53:c.instructions+=3;goto B582c53;
case 0x582c54:c.instructions+=2;goto B582c54;
case 0x582c55:c.instructions+=1;goto B582c55;
case 0x582c5a:goto L582c5a;
case 0x582c5c:c.instructions+=3;goto B582c5c;
case 0x582c5f:c.instructions+=2;goto B582c5f;
case 0x582c61:c.instructions+=1;goto B582c61;
case 0x582c63:goto L582c63;
case 0x582c64:c.instructions+=1;goto B582c64;
case 0x582c69:goto L582c69;
case 0x582c6c:c.instructions+=2;goto B582c6c;
case 0x582c6e:c.instructions+=1;goto B582c6e;
case 0x582c70:goto L582c70;
case 0x582c72:c.instructions+=2;goto B582c72;
case 0x582c73:c.instructions+=1;goto B582c73;
case 0x582c78:goto L582c78;
case 0x582c7b:c.instructions+=6;goto B582c7b;
case 0x582c7c:c.instructions+=5;goto B582c7c;
case 0x582c7d:c.instructions+=4;goto B582c7d;
case 0x582c7e:c.instructions+=3;goto B582c7e;
case 0x582c7f:c.instructions+=2;goto B582c7f;
case 0x582c82:c.instructions+=1;goto B582c82;
case 0x582c85:goto L582c85;
case 0x582c87:c.instructions+=1;goto B582c87;
case 0x582c89:goto L582c89;
case 0x582c8e:c.instructions+=1;goto B582c8e;
case 0x582c93:goto L582c93;
case 0x582c96:c.instructions+=2;goto B582c96;
case 0x582c98:c.instructions+=1;goto B582c98;
case 0x582c9a:goto L582c9a;
case 0x582c9c:c.instructions+=1;goto B582c9c;
case 0x582ca1:goto L582ca1;
case 0x582ca4:goto L582ca4;
case 0x582ca8:c.instructions+=3;goto B582ca8;
case 0x582ca9:c.instructions+=2;goto B582ca9;
case 0x582caa:c.instructions+=1;goto B582caa;
case 0x582caf:goto L582caf;
case 0x582cb1:c.instructions+=2;goto B582cb1;
case 0x582cb6:c.instructions+=1;goto B582cb6;
case 0x582cbb:goto L582cbb;
case 0x582cbe:c.instructions+=7;goto B582cbe;
case 0x582cbf:c.instructions+=6;goto B582cbf;
case 0x582cc0:c.instructions+=5;goto B582cc0;
case 0x582cc1:c.instructions+=4;goto B582cc1;
case 0x582ccb:c.instructions+=3;goto B582ccb;
case 0x582ccc:c.instructions+=2;goto B582ccc;
case 0x582ccf:c.instructions+=1;goto B582ccf;
case 0x582ce0:goto L582ce0;
case 0x582ce2:c.instructions+=1;goto B582ce2;
case 0x582ce8:goto L582ce8;
case 0x582ceb:c.instructions+=1;goto B582ceb;
case 0x582ced:goto L582ced;
case 0x582cee:c.instructions+=3;goto B582cee;
case 0x582cf4:c.instructions+=2;goto B582cf4;
case 0x582cf7:c.instructions+=1;goto B582cf7;
case 0x582cf9:goto L582cf9;
case 0x582cfc:goto L582cfc;
case 0x582d00:goto L582d00;
case 0x582d01:c.instructions+=7;goto B582d01;
case 0x582d02:c.instructions+=6;goto B582d02;
case 0x582d06:c.instructions+=5;goto B582d06;
case 0x582d07:c.instructions+=4;goto B582d07;
case 0x582d08:c.instructions+=3;goto B582d08;
case 0x582d0a:c.instructions+=2;goto B582d0a;
case 0x582d10:c.instructions+=1;goto B582d10;
case 0x582d15:goto L582d15;
case 0x582d16:c.instructions+=2;goto B582d16;
case 0x582d17:c.instructions+=1;goto B582d17;
case 0x582d1c:goto L582d1c;
case 0x582d1f:c.instructions+=2;goto B582d1f;
case 0x582d21:c.instructions+=1;goto B582d21;
case 0x582d23:goto L582d23;
case 0x582d25:goto L582d25;
case 0x582d2b:c.instructions+=2;goto B582d2b;
case 0x582d2c:c.instructions+=1;goto B582d2c;
case 0x582d2e:goto L582d2e;
case 0x582d2f:c.instructions+=5;goto B582d2f;
case 0x582d30:c.instructions+=4;goto B582d30;
case 0x582d31:c.instructions+=3;goto B582d31;
case 0x582d33:c.instructions+=2;goto B582d33;
case 0x582d34:c.instructions+=1;goto B582d34;
case 0x582d40:goto L582d40;
case 0x582d41:c.instructions+=6;goto B582d41;
case 0x582d42:c.instructions+=5;goto B582d42;
case 0x582d46:c.instructions+=4;goto B582d46;
case 0x582d47:c.instructions+=3;goto B582d47;
case 0x582d48:c.instructions+=2;goto B582d48;
case 0x582d4e:c.instructions+=1;goto B582d4e;
case 0x582d53:goto L582d53;
case 0x582d56:c.instructions+=3;goto B582d56;
case 0x582d57:c.instructions+=2;goto B582d57;
case 0x582d58:c.instructions+=1;goto B582d58;
case 0x582d5d:goto L582d5d;
case 0x582d60:c.instructions+=2;goto B582d60;
case 0x582d62:c.instructions+=1;goto B582d62;
case 0x582d64:goto L582d64;
case 0x582d69:c.instructions+=1;goto B582d69;
case 0x582d6b:goto L582d6b;
case 0x582d6d:goto L582d6d;
case 0x582d6e:goto L582d6e;
case 0x582d74:c.instructions+=2;goto B582d74;
case 0x582d75:c.instructions+=1;goto B582d75;
case 0x582d77:goto L582d77;
case 0x582d78:c.instructions+=4;goto B582d78;
case 0x582d79:c.instructions+=3;goto B582d79;
case 0x582d7a:c.instructions+=2;goto B582d7a;
case 0x582d7b:c.instructions+=1;goto B582d7b;
case 0x582d80:goto L582d80;
case 0x582d81:c.instructions+=9;goto B582d81;
case 0x582d82:c.instructions+=8;goto B582d82;
case 0x582d84:c.instructions+=7;goto B582d84;
case 0x582d8a:c.instructions+=6;goto B582d8a;
case 0x582d8c:c.instructions+=5;goto B582d8c;
case 0x582d8d:c.instructions+=4;goto B582d8d;
case 0x582d93:c.instructions+=3;goto B582d93;
case 0x582d99:c.instructions+=2;goto B582d99;
case 0x582d9f:c.instructions+=1;goto B582d9f;
case 0x582da4:goto L582da4;
case 0x582da7:c.instructions+=2;goto B582da7;
case 0x582da9:c.instructions+=1;goto B582da9;
case 0x582dab:goto L582dab;
case 0x582dac:c.instructions+=1;goto B582dac;
case 0x582db0:goto L582db0;
case 0x582db6:c.instructions+=3;goto B582db6;
case 0x582db7:c.instructions+=2;goto B582db7;
case 0x582db8:c.instructions+=1;goto B582db8;
case 0x582dbd:goto L582dbd;
case 0x582dbf:c.instructions+=2;goto B582dbf;
case 0x582dc0:c.instructions+=1;goto B582dc0;
case 0x582dc5:goto L582dc5;
case 0x582dc8:c.instructions+=2;goto B582dc8;
case 0x582dca:c.instructions+=1;goto B582dca;
case 0x582dcc:goto L582dcc;
case 0x582dd2:goto L582dd2;
case 0x582dd3:c.instructions+=1;goto B582dd3;
case 0x582dd8:goto L582dd8;
case 0x582ddb:c.instructions+=2;goto B582ddb;
case 0x582ddd:c.instructions+=1;goto B582ddd;
case 0x582ddf:goto L582ddf;
case 0x582de5:goto L582de5;
case 0x582de6:c.instructions+=1;goto B582de6;
case 0x582deb:goto L582deb;
case 0x582dee:c.instructions+=2;goto B582dee;
case 0x582df0:c.instructions+=1;goto B582df0;
case 0x582df2:goto L582df2;
case 0x582df8:goto L582df8;
case 0x582dfe:c.instructions+=3;goto B582dfe;
case 0x582dff:c.instructions+=2;goto B582dff;
case 0x582e00:c.instructions+=1;goto B582e00;
case 0x582e05:goto L582e05;
case 0x582e08:c.instructions+=2;goto B582e08;
case 0x582e0a:c.instructions+=1;goto B582e0a;
case 0x582e0c:goto L582e0c;
case 0x582e0d:goto L582e0d;
case 0x582e0e:c.instructions+=2;goto B582e0e;
case 0x582e0f:c.instructions+=1;goto B582e0f;
case 0x582e10:goto L582e10;
case 0x582e11:c.instructions+=2;goto B582e11;
case 0x582e13:c.instructions+=1;goto B582e13;
case 0x582e18:goto L582e18;
case 0x582e1e:c.instructions+=2;goto B582e1e;
case 0x582e1f:c.instructions+=1;goto B582e1f;
case 0x582e20:goto L582e20;
case 0x582e21:c.instructions+=9;goto B582e21;
case 0x582e23:c.instructions+=8;goto B582e23;
case 0x582e26:c.instructions+=7;goto B582e26;
case 0x582e2c:c.instructions+=6;goto B582e2c;
case 0x582e2d:c.instructions+=5;goto B582e2d;
case 0x582e2f:c.instructions+=4;goto B582e2f;
case 0x582e35:c.instructions+=3;goto B582e35;
case 0x582e37:c.instructions+=2;goto B582e37;
case 0x582e38:c.instructions+=1;goto B582e38;
case 0x582e3a:goto L582e3a;
case 0x582e3f:c.instructions+=3;goto B582e3f;
case 0x582e44:c.instructions+=2;goto B582e44;
case 0x582e45:c.instructions+=1;goto B582e45;
case 0x582e4a:goto L582e4a;
case 0x582e4f:c.instructions+=3;goto B582e4f;
case 0x582e51:c.instructions+=2;goto B582e51;
case 0x582e56:c.instructions+=1;goto B582e56;
case 0x582e5a:goto L582e5a;
case 0x582e5c:goto L582e5c;
case 0x582e5f:c.instructions+=5;goto B582e5f;
case 0x582e61:c.instructions+=4;goto B582e61;
case 0x582e66:c.instructions+=3;goto B582e66;
case 0x582e6b:c.instructions+=2;goto B582e6b;
case 0x582e6c:c.instructions+=1;goto B582e6c;
case 0x582e71:goto L582e71;
case 0x582e74:c.instructions+=5;goto B582e74;
case 0x582e75:c.instructions+=4;goto B582e75;
case 0x582e79:c.instructions+=3;goto B582e79;
case 0x582e7e:c.instructions+=2;goto B582e7e;
case 0x582e7f:c.instructions+=1;goto B582e7f;
case 0x582e84:goto L582e84;
case 0x582e8a:c.instructions+=7;goto B582e8a;
case 0x582e8c:c.instructions+=6;goto B582e8c;
case 0x582e90:c.instructions+=5;goto B582e90;
case 0x582e91:c.instructions+=4;goto B582e91;
case 0x582e93:c.instructions+=3;goto B582e93;
case 0x582e95:c.instructions+=2;goto B582e95;
case 0x582e96:c.instructions+=1;goto B582e96;
case 0x582e9b:goto L582e9b;
case 0x582e9e:goto L582e9e;
case 0x582e9f:c.instructions+=4;goto B582e9f;
case 0x582ea0:c.instructions+=3;goto B582ea0;
case 0x582ea2:c.instructions+=2;goto B582ea2;
case 0x582ea3:c.instructions+=1;goto B582ea3;
case 0x582eb0:goto L582eb0;
case 0x582eb1:c.instructions+=8;goto B582eb1;
case 0x582eb2:c.instructions+=7;goto B582eb2;
case 0x582eb3:c.instructions+=6;goto B582eb3;
case 0x582eb7:c.instructions+=5;goto B582eb7;
case 0x582eb9:c.instructions+=4;goto B582eb9;
case 0x582ebf:c.instructions+=3;goto B582ebf;
case 0x582ec0:c.instructions+=2;goto B582ec0;
case 0x582ec1:c.instructions+=1;goto B582ec1;
case 0x582ec6:goto L582ec6;
case 0x582eca:c.instructions+=3;goto B582eca;
case 0x582ecd:c.instructions+=2;goto B582ecd;
case 0x582ecf:c.instructions+=1;goto B582ecf;
case 0x582ed1:goto L582ed1;
case 0x582ed2:c.instructions+=2;goto B582ed2;
case 0x582ed3:c.instructions+=1;goto B582ed3;
case 0x582ed8:goto L582ed8;
case 0x582edb:c.instructions+=2;goto B582edb;
case 0x582edd:c.instructions+=1;goto B582edd;
case 0x582edf:goto L582edf;
case 0x582ee1:c.instructions+=1;goto B582ee1;
case 0x582ee6:goto L582ee6;
case 0x582eeb:goto L582eeb;
case 0x582ef1:c.instructions+=4;goto B582ef1;
case 0x582ef2:c.instructions+=3;goto B582ef2;
case 0x582ef3:c.instructions+=2;goto B582ef3;
case 0x582ef4:c.instructions+=1;goto B582ef4;
case 0x582ef9:goto L582ef9;
case 0x582efc:goto L582efc;
case 0x582efd:c.instructions+=3;goto B582efd;
case 0x582efe:c.instructions+=2;goto B582efe;
case 0x582eff:c.instructions+=1;goto B582eff;
case 0x582f10:goto L582f10;
case 0x582f11:c.instructions+=8;goto B582f11;
case 0x582f13:c.instructions+=7;goto B582f13;
case 0x582f16:c.instructions+=6;goto B582f16;
case 0x582f1c:c.instructions+=5;goto B582f1c;
case 0x582f1d:c.instructions+=4;goto B582f1d;
case 0x582f1f:c.instructions+=3;goto B582f1f;
case 0x582f24:c.instructions+=2;goto B582f24;
case 0x582f29:c.instructions+=1;goto B582f29;
case 0x582f2d:goto L582f2d;
case 0x582f2f:goto L582f2f;
case 0x582f31:c.instructions+=5;goto B582f31;
case 0x582f32:c.instructions+=4;goto B582f32;
case 0x582f35:c.instructions+=3;goto B582f35;
case 0x582f36:c.instructions+=2;goto B582f36;
case 0x582f3b:c.instructions+=1;goto B582f3b;
case 0x582f40:goto L582f40;
case 0x582f43:c.instructions+=5;goto B582f43;
case 0x582f44:c.instructions+=4;goto B582f44;
case 0x582f48:c.instructions+=3;goto B582f48;
case 0x582f4d:c.instructions+=2;goto B582f4d;
case 0x582f4e:c.instructions+=1;goto B582f4e;
case 0x582f53:goto L582f53;
case 0x582f56:c.instructions+=7;goto B582f56;
case 0x582f5a:c.instructions+=6;goto B582f5a;
case 0x582f5b:c.instructions+=5;goto B582f5b;
case 0x582f5d:c.instructions+=4;goto B582f5d;
case 0x582f5f:c.instructions+=3;goto B582f5f;
case 0x582f64:c.instructions+=2;goto B582f64;
case 0x582f69:c.instructions+=1;goto B582f69;
case 0x582f6e:goto L582f6e;
case 0x582f6f:c.instructions+=1;goto B582f6f;
case 0x582f74:goto L582f74;
case 0x582f77:c.instructions+=4;goto B582f77;
case 0x582f78:c.instructions+=3;goto B582f78;
case 0x582f7a:c.instructions+=2;goto B582f7a;
case 0x582f7b:c.instructions+=1;goto B582f7b;
case 0x582f80:goto L582f80;
case 0x582f81:c.instructions+=8;goto B582f81;
case 0x582f83:c.instructions+=7;goto B582f83;
case 0x582f86:c.instructions+=6;goto B582f86;
case 0x582f8c:c.instructions+=5;goto B582f8c;
case 0x582f8d:c.instructions+=4;goto B582f8d;
case 0x582f8f:c.instructions+=3;goto B582f8f;
case 0x582f94:c.instructions+=2;goto B582f94;
case 0x582f99:c.instructions+=1;goto B582f99;
case 0x582f9d:goto L582f9d;
case 0x582f9f:goto L582f9f;
case 0x582fa1:c.instructions+=5;goto B582fa1;
case 0x582fa2:c.instructions+=4;goto B582fa2;
case 0x582fa5:c.instructions+=3;goto B582fa5;
case 0x582fa6:c.instructions+=2;goto B582fa6;
case 0x582fab:c.instructions+=1;goto B582fab;
case 0x582fb0:goto L582fb0;
case 0x582fb3:c.instructions+=5;goto B582fb3;
case 0x582fb4:c.instructions+=4;goto B582fb4;
case 0x582fb8:c.instructions+=3;goto B582fb8;
case 0x582fbd:c.instructions+=2;goto B582fbd;
case 0x582fbe:c.instructions+=1;goto B582fbe;
case 0x582fc3:goto L582fc3;
case 0x582fc6:c.instructions+=7;goto B582fc6;
case 0x582fca:c.instructions+=6;goto B582fca;
case 0x582fcb:c.instructions+=5;goto B582fcb;
case 0x582fcd:c.instructions+=4;goto B582fcd;
case 0x582fcf:c.instructions+=3;goto B582fcf;
case 0x582fd4:c.instructions+=2;goto B582fd4;
case 0x582fd9:c.instructions+=1;goto B582fd9;
case 0x582fde:goto L582fde;
case 0x582fdf:c.instructions+=1;goto B582fdf;
case 0x582fe4:goto L582fe4;
case 0x582fe7:c.instructions+=4;goto B582fe7;
case 0x582fe8:c.instructions+=3;goto B582fe8;
case 0x582fea:c.instructions+=2;goto B582fea;
case 0x582feb:c.instructions+=1;goto B582feb;
case 0x582ff0:goto L582ff0;
case 0x582ff4:c.instructions+=3;goto B582ff4;
case 0x582ffa:c.instructions+=2;goto B582ffa;
case 0x582ffb:c.instructions+=1;goto B582ffb;
default:missing_instruction(c.pc);}
B582001:L582001:{c.instructions+=2;NFSU2_TR(0x582001);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B582004:{NFSU2_TR(0x582004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58200e;}}
}
B582006:L582006:{c.instructions+=2;NFSU2_TR(0x582006);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B582008:{NFSU2_TR(0x582008);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58200e:L58200e:{c.instructions+=4;NFSU2_TR(0x58200e);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B582014:{NFSU2_TR(0x582014);
{u32 ea_=u32(r4(R+4)+u32(316u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B58201a:{NFSU2_TR(0x58201a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B582020:{NFSU2_TR(0x582020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582025ull));
TAIL_STATIC(0x75bed4u,75b);
}
B582025:L582025:{c.instructions+=1;NFSU2_TR(0x582025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582030:L582030:{c.instructions+=4;NFSU2_TR(0x582030);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582034:{NFSU2_TR(0x582034);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B582038:{NFSU2_TR(0x582038);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58203a:{NFSU2_TR(0x58203a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L582042;}}
}
B58203c:L58203c:{c.instructions+=1;NFSU2_TR(0x58203c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B582042:L582042:{c.instructions+=6;NFSU2_TR(0x582042);
{u32 ea_=u32(r4(R+4)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B582048:{NFSU2_TR(0x582048);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58204e:{NFSU2_TR(0x58204e);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B582054:{NFSU2_TR(0x582054);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B582056:{NFSU2_TR(0x582056);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B582059:{NFSU2_TR(0x582059);
if(r1(R+514)){{goto L582063;}}
}
B58205b:L58205b:{c.instructions+=2;NFSU2_TR(0x58205b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58205d:{NFSU2_TR(0x58205d);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B582063:L582063:{c.instructions+=4;NFSU2_TR(0x582063);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B582069:{NFSU2_TR(0x582069);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58206b:{NFSU2_TR(0x58206b);
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
B58206e:{NFSU2_TR(0x58206e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582078;}}
}
B582070:L582070:{c.instructions+=2;NFSU2_TR(0x582070);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B582072:{NFSU2_TR(0x582072);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B582078:L582078:{c.instructions+=1;NFSU2_TR(0x582078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582080:L582080:{c.instructions+=12;NFSU2_TR(0x582080);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582082:{NFSU2_TR(0x582082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582083:{NFSU2_TR(0x582083);
__builtin_memmove((R+24),(R+4),4);
}
B582085:{NFSU2_TR(0x582085);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58208a:{NFSU2_TR(0x58208a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58208b:{NFSU2_TR(0x58208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582091:{NFSU2_TR(0x582091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582097:{NFSU2_TR(0x582097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58209d:{NFSU2_TR(0x58209d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5820a3:{NFSU2_TR(0x5820a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5820a9:{NFSU2_TR(0x5820a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5820af:{NFSU2_TR(0x5820af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5820b4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5820b4:L5820b4:{c.instructions+=4;NFSU2_TR(0x5820b4);
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
B5820b7:{NFSU2_TR(0x5820b7);
__builtin_memmove((R+0),(R+24),4);
}
B5820b9:{NFSU2_TR(0x5820b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5820ba:{NFSU2_TR(0x5820ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5820c0:L5820c0:{c.instructions+=7;NFSU2_TR(0x5820c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5820c4:{NFSU2_TR(0x5820c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5820c5:{NFSU2_TR(0x5820c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5820c6:{NFSU2_TR(0x5820c6);
__builtin_memmove((R+24),(R+4),4);
}
B5820c8:{NFSU2_TR(0x5820c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5820c9:{NFSU2_TR(0x5820c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5820ca:{NFSU2_TR(0x5820ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5820cfull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5820cf:L5820cf:{c.instructions+=11;NFSU2_TR(0x5820cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5820d3:{NFSU2_TR(0x5820d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5820d7:{NFSU2_TR(0x5820d7);
__builtin_memmove((R+0),(R+28),4);
}
B5820d9:{NFSU2_TR(0x5820d9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5820db:{NFSU2_TR(0x5820db);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5820de:{NFSU2_TR(0x5820de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5820df:{NFSU2_TR(0x5820df);
w4(R+4,u32(0x0ull));
}
B5820e4:{NFSU2_TR(0x5820e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5820ea:{NFSU2_TR(0x5820ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5820f0:{NFSU2_TR(0x5820f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5820f6:{NFSU2_TR(0x5820f6);
if(r1(R+518)){{goto L582113;}}
}
B5820f8:L5820f8:{c.instructions+=2;NFSU2_TR(0x5820f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5820f9:{NFSU2_TR(0x5820f9);
__builtin_memmove((R+16),(R+16),4);
}
B582100:L582100:{c.instructions+=5;NFSU2_TR(0x582100);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B582101:{NFSU2_TR(0x582101);
w4(R+12,u32(0x1ull));
}
B582106:{NFSU2_TR(0x582106);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B582108:{NFSU2_TR(0x582108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B58210a:{NFSU2_TR(0x58210a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582100u);}goto L582100;}}
}
B58210c:L58210c:{c.instructions+=2;NFSU2_TR(0x58210c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582112:{NFSU2_TR(0x582112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582113:L582113:{c.instructions+=8;NFSU2_TR(0x582113);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B582114:{NFSU2_TR(0x582114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58211a:{NFSU2_TR(0x58211a);
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
B58211b:{NFSU2_TR(0x58211b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58211c:{NFSU2_TR(0x58211c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582122:{NFSU2_TR(0x582122);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B582129:{NFSU2_TR(0x582129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58212a:{NFSU2_TR(0x58212a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582130:L582130:{c.instructions+=4;NFSU2_TR(0x582130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582136:{NFSU2_TR(0x582136);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58213a:{NFSU2_TR(0x58213a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58213c:{NFSU2_TR(0x58213c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L582140;}}
}
B58213e:L58213e:{c.instructions+=1;NFSU2_TR(0x58213e);
__builtin_memmove((R+0),(R+8),4);
}
B582140:L582140:{c.instructions+=3;NFSU2_TR(0x582140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582146:{NFSU2_TR(0x582146);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582148:{NFSU2_TR(0x582148);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58214c;}}
}
B58214a:L58214a:{c.instructions+=1;NFSU2_TR(0x58214a);
__builtin_memmove((R+0),(R+4),4);
}
B58214c:L58214c:{c.instructions+=2;NFSU2_TR(0x58214c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58214e:{NFSU2_TR(0x58214e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582160:L582160:{c.instructions+=3;NFSU2_TR(0x582160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582166:{NFSU2_TR(0x582166);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B58216a:{NFSU2_TR(0x58216a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582170:L582170:{c.instructions+=2;NFSU2_TR(0x582170);
w4(R+0,u32(0x7a0fe0ull));
}
B582175:{NFSU2_TR(0x582175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582180:L582180:{c.instructions+=2;NFSU2_TR(0x582180);
w4(R+0,u32(0x7a0fecull));
}
B582185:{NFSU2_TR(0x582185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582190:L582190:{c.instructions+=1;NFSU2_TR(0x582190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582195ull));
TAIL_STATIC(0x570a30u,570);
}
B582195:L582195:{c.instructions+=2;NFSU2_TR(0x582195);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582198:{NFSU2_TR(0x582198);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L582228;}}
}
B58219e:L58219e:{c.instructions+=1;NFSU2_TR(0x58219e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x58222cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5821a5:L5821a5:{c.instructions+=2;NFSU2_TR(0x5821a5);
w4(R+0,u32(0x7a10c4ull));
}
B5821aa:{NFSU2_TR(0x5821aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821ab:L5821ab:{c.instructions+=2;NFSU2_TR(0x5821ab);
w4(R+0,u32(0x7a10b8ull));
}
B5821b0:{NFSU2_TR(0x5821b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821b1:L5821b1:{c.instructions+=2;NFSU2_TR(0x5821b1);
w4(R+0,u32(0x7a10acull));
}
B5821b6:{NFSU2_TR(0x5821b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821b7:L5821b7:{c.instructions+=2;NFSU2_TR(0x5821b7);
w4(R+0,u32(0x7a10a0ull));
}
B5821bc:{NFSU2_TR(0x5821bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821bd:L5821bd:{c.instructions+=2;NFSU2_TR(0x5821bd);
w4(R+0,u32(0x7a1098ull));
}
B5821c2:{NFSU2_TR(0x5821c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821c3:L5821c3:{c.instructions+=2;NFSU2_TR(0x5821c3);
w4(R+0,u32(0x7a108cull));
}
B5821c8:{NFSU2_TR(0x5821c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821c9:L5821c9:{c.instructions+=2;NFSU2_TR(0x5821c9);
w4(R+0,u32(0x7a1080ull));
}
B5821ce:{NFSU2_TR(0x5821ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821cf:L5821cf:{c.instructions+=2;NFSU2_TR(0x5821cf);
w4(R+0,u32(0x7a1074ull));
}
B5821d4:{NFSU2_TR(0x5821d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821d5:L5821d5:{c.instructions+=2;NFSU2_TR(0x5821d5);
w4(R+0,u32(0x7a1068ull));
}
B5821da:{NFSU2_TR(0x5821da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821db:L5821db:{c.instructions+=2;NFSU2_TR(0x5821db);
w4(R+0,u32(0x7a1060ull));
}
B5821e0:{NFSU2_TR(0x5821e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821e1:L5821e1:{c.instructions+=2;NFSU2_TR(0x5821e1);
w4(R+0,u32(0x7a1054ull));
}
B5821e6:{NFSU2_TR(0x5821e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821e7:L5821e7:{c.instructions+=2;NFSU2_TR(0x5821e7);
w4(R+0,u32(0x7a1044ull));
}
B5821ec:{NFSU2_TR(0x5821ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5821ed:L5821ed:{c.instructions+=1;NFSU2_TR(0x5821ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5821f2ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B5821f2:L5821f2:{c.instructions+=2;NFSU2_TR(0x5821f2);
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
B5821f5:{NFSU2_TR(0x5821f5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L582228;}}
}
B5821f7:L5821f7:{c.instructions+=1;NFSU2_TR(0x5821f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x582260ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5821fe:L5821fe:{c.instructions+=2;NFSU2_TR(0x5821fe);
w4(R+0,u32(0x7a1038ull));
}
B582203:{NFSU2_TR(0x582203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582204:L582204:{c.instructions+=2;NFSU2_TR(0x582204);
w4(R+0,u32(0x7a102cull));
}
B582209:{NFSU2_TR(0x582209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58220a:L58220a:{c.instructions+=2;NFSU2_TR(0x58220a);
w4(R+0,u32(0x7a1020ull));
}
B58220f:{NFSU2_TR(0x58220f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582210:L582210:{c.instructions+=2;NFSU2_TR(0x582210);
w4(R+0,u32(0x7a1014ull));
}
B582215:{NFSU2_TR(0x582215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582216:L582216:{c.instructions+=2;NFSU2_TR(0x582216);
w4(R+0,u32(0x7a1008ull));
}
B58221b:{NFSU2_TR(0x58221b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58221c:L58221c:{c.instructions+=2;NFSU2_TR(0x58221c);
w4(R+0,u32(0x7a0ffcull));
}
B582221:{NFSU2_TR(0x582221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582222:L582222:{c.instructions+=2;NFSU2_TR(0x582222);
w4(R+0,u32(0x7a0ff0ull));
}
B582227:{NFSU2_TR(0x582227);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582228:L582228:{c.instructions+=2;NFSU2_TR(0x582228);
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
B58222a:{NFSU2_TR(0x58222a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582280:L582280:{c.instructions+=1;NFSU2_TR(0x582280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582285ull));
TAIL_STATIC(0x570a30u,570);
}
B582285:L582285:{c.instructions+=2;NFSU2_TR(0x582285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582286:{NFSU2_TR(0x582286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58228bull));
TAIL_STATIC(0x57dbd0u,57d);
}
B58228b:L58228b:{c.instructions+=2;NFSU2_TR(0x58228b);
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
B58228e:{NFSU2_TR(0x58228e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582290:L582290:{c.instructions+=3;NFSU2_TR(0x582290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582294:{NFSU2_TR(0x582294);
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
B582296:{NFSU2_TR(0x582296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582299;}}
}
B582298:L582298:{c.instructions+=1;NFSU2_TR(0x582298);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582299:L582299:{c.instructions+=2;NFSU2_TR(0x582299);
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
B58229c:{NFSU2_TR(0x58229c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58229f;}}
}
B58229e:L58229e:{c.instructions+=1;NFSU2_TR(0x58229e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58229f:L58229f:{c.instructions+=2;NFSU2_TR(0x58229f);
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
B5822a2:{NFSU2_TR(0x5822a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5822a5;}}
}
B5822a4:L5822a4:{c.instructions+=1;NFSU2_TR(0x5822a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822a5:L5822a5:{c.instructions+=2;NFSU2_TR(0x5822a5);
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
B5822a8:{NFSU2_TR(0x5822a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5822ab;}}
}
B5822aa:L5822aa:{c.instructions+=1;NFSU2_TR(0x5822aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822ab:L5822ab:{c.instructions+=2;NFSU2_TR(0x5822ab);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5822ae:{NFSU2_TR(0x5822ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5822b6;}}
}
B5822b0:L5822b0:{c.instructions+=2;NFSU2_TR(0x5822b0);
w4(R+0,u32(0xaull));
}
B5822b5:{NFSU2_TR(0x5822b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822b6:L5822b6:{c.instructions+=2;NFSU2_TR(0x5822b6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5822b9:{NFSU2_TR(0x5822b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5822c1;}}
}
B5822bb:L5822bb:{c.instructions+=2;NFSU2_TR(0x5822bb);
w4(R+0,u32(0x4ull));
}
B5822c0:{NFSU2_TR(0x5822c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822c1:L5822c1:{c.instructions+=8;NFSU2_TR(0x5822c1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5822c3:{NFSU2_TR(0x5822c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5822c6:{NFSU2_TR(0x5822c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5822c9:{NFSU2_TR(0x5822c9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5822ca:{NFSU2_TR(0x5822ca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffbull))));
}
B5822cd:{NFSU2_TR(0x5822cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xdull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xdull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5822d0:{NFSU2_TR(0x5822d0);
__builtin_memmove((R+0),(R+4),4);
}
B5822d2:{NFSU2_TR(0x5822d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822e0:L5822e0:{c.instructions+=3;NFSU2_TR(0x5822e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5822e4:{NFSU2_TR(0x5822e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5822e6:{NFSU2_TR(0x5822e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5822ff;}}
}
B5822e8:L5822e8:{c.instructions+=2;NFSU2_TR(0x5822e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5822eb:{NFSU2_TR(0x5822eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5822ff;}}
}
B5822ed:L5822ed:{c.instructions+=3;NFSU2_TR(0x5822ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5822f0:{NFSU2_TR(0x5822f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5822f2:{NFSU2_TR(0x5822f2);
if(r1(R+518)){{goto L5822ff;}}
}
B5822f4:L5822f4:{c.instructions+=4;NFSU2_TR(0x5822f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B5822f7:{NFSU2_TR(0x5822f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5822fa:{NFSU2_TR(0x5822fa);
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
B5822fc:{NFSU2_TR(0x5822fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5822ff:L5822ff:{c.instructions+=2;NFSU2_TR(0x5822ff);
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
B582301:{NFSU2_TR(0x582301);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582310:L582310:{c.instructions+=3;NFSU2_TR(0x582310);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582314:{NFSU2_TR(0x582314);
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
B582316:{NFSU2_TR(0x582316);
if(r1(R+518)){{goto L582335;}}
}
B582318:L582318:{c.instructions+=3;NFSU2_TR(0x582318);
__builtin_memmove((R+4),gp(0x869888),1);
}
B58231e:{NFSU2_TR(0x58231e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B582320:{NFSU2_TR(0x582320);
if(r1(R+518)){{goto L582335;}}
}
B582322:L582322:{c.instructions+=4;NFSU2_TR(0x582322);
u8 U[4];
w4(U+0,u32(0x3ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582327:{NFSU2_TR(0x582327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582328:{NFSU2_TR(0x582328);
u8 U[4];
w4(U+0,u32(0x86993cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58232d:{NFSU2_TR(0x58232d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582332ull));
TAIL_STATIC(0x43dc00u,43d);
}
B582332:L582332:{c.instructions+=1;NFSU2_TR(0x582332);
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
B582335:L582335:{c.instructions+=1;NFSU2_TR(0x582335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582340:L582340:{c.instructions+=3;NFSU2_TR(0x582340);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B582343:{NFSU2_TR(0x582343);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B582345:{NFSU2_TR(0x582345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58234a;}}
}
B582347:L582347:{c.instructions+=2;NFSU2_TR(0x582347);
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
B582349:{NFSU2_TR(0x582349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58234a:L58234a:{c.instructions+=4;NFSU2_TR(0x58234a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58234d:{NFSU2_TR(0x58234d);
u8 U[4];
w4(U+0,u32(0x73657276ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582352:{NFSU2_TR(0x582352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582353:{NFSU2_TR(0x582353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582358ull));
TAIL_STATIC(0x744620u,744);
}
B582358:L582358:{c.instructions+=2;NFSU2_TR(0x582358);
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
B58235b:{NFSU2_TR(0x58235b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582360:L582360:{c.instructions+=5;NFSU2_TR(0x582360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582364:{NFSU2_TR(0x582364);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582368:{NFSU2_TR(0x582368);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58236e:{NFSU2_TR(0x58236e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582374:{NFSU2_TR(0x582374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582380:L582380:{c.instructions+=3;NFSU2_TR(0x582380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582383:{NFSU2_TR(0x582383);
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
B582385:{NFSU2_TR(0x582385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582388;}}
}
B582387:L582387:{c.instructions+=1;NFSU2_TR(0x582387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582388:L582388:{c.instructions+=3;NFSU2_TR(0x582388);
u8 U[4];
w4(U+0,u32(0x636f6e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58238d:{NFSU2_TR(0x58238d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58238e:{NFSU2_TR(0x58238e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582393ull));
TAIL_STATIC(0x744620u,744);
}
B582393:L582393:{c.instructions+=2;NFSU2_TR(0x582393);
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
B582396:{NFSU2_TR(0x582396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5823a0:L5823a0:{c.instructions+=3;NFSU2_TR(0x5823a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5823a4:{NFSU2_TR(0x5823a4);
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
B5823a6:{NFSU2_TR(0x5823a6);
if(r1(R+518)){{goto L5823af;}}
}
B5823a8:L5823a8:{c.instructions+=2;NFSU2_TR(0x5823a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5823a9:{NFSU2_TR(0x5823a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5823aeull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5823ae:L5823ae:{c.instructions+=1;NFSU2_TR(0x5823ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5823af:L5823af:{c.instructions+=1;NFSU2_TR(0x5823af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5823b0:L5823b0:{c.instructions+=6;NFSU2_TR(0x5823b0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5823b2:{NFSU2_TR(0x5823b2);
__builtin_memmove(gp(0x869888),(R+4),1);
}
B5823b8:{NFSU2_TR(0x5823b8);
__builtin_memmove(gp(0x8698c8),(R+4),4);
}
B5823be:{NFSU2_TR(0x5823be);
__builtin_memmove(gp(0x8698cc),(R+4),1);
}
B5823c4:{NFSU2_TR(0x5823c4);
w4(R+0,u32(0x8698dcull));
}
B5823c9:{NFSU2_TR(0x5823c9);
__builtin_memmove((R+16),(R+16),4);
}
B5823d0:L5823d0:{c.instructions+=4;NFSU2_TR(0x5823d0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5823d2:{NFSU2_TR(0x5823d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5823d5:{NFSU2_TR(0x5823d5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x86993cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x86993cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x86993cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5823da:{NFSU2_TR(0x5823da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5823d0u);}goto L5823d0;}}
}
B5823dc:L5823dc:{c.instructions+=2;NFSU2_TR(0x5823dc);
__builtin_memmove(gp(0x86993c),(R+4),1);
}
B5823e2:{NFSU2_TR(0x5823e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5823f0:L5823f0:{c.instructions+=7;NFSU2_TR(0x5823f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5823f3:{NFSU2_TR(0x5823f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5823f4:{NFSU2_TR(0x5823f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5823f5:{NFSU2_TR(0x5823f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5823f9:{NFSU2_TR(0x5823f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5823fc:{NFSU2_TR(0x5823fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5823fd:{NFSU2_TR(0x5823fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582402ull));
TAIL_STATIC(0x747670u,747);
}
B582402:L582402:{c.instructions+=4;NFSU2_TR(0x582402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582405:{NFSU2_TR(0x582405);
u8 U[4];
w4(U+0,u32(0x646f6e65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58240a:{NFSU2_TR(0x58240a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58240b:{NFSU2_TR(0x58240b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582410ull));
TAIL_STATIC(0x747d30u,747);
}
B582410:L582410:{c.instructions+=4;NFSU2_TR(0x582410);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B582412:{NFSU2_TR(0x582412);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B582415:{NFSU2_TR(0x582415);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582417:{NFSU2_TR(0x582417);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5824a2;}}
}
B58241d:L58241d:{c.instructions+=5;NFSU2_TR(0x58241d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582420:{NFSU2_TR(0x582420);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582421:{NFSU2_TR(0x582421);
u8 U[4];
w4(U+0,u32(0x626f6479ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582426:{NFSU2_TR(0x582426);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582427:{NFSU2_TR(0x582427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58242cull));
TAIL_STATIC(0x747d30u,747);
}
B58242c:L58242c:{c.instructions+=9;NFSU2_TR(0x58242c);
__builtin_memmove((R+28),(R+0),4);
}
B58242e:{NFSU2_TR(0x58242e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582431:{NFSU2_TR(0x582431);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582433:{NFSU2_TR(0x582433);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582437:{NFSU2_TR(0x582437);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58243b:{NFSU2_TR(0x58243b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58243f:{NFSU2_TR(0x58243f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6e657730ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582447:{NFSU2_TR(0x582447);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58244b:{NFSU2_TR(0x58244b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58248f;}}
}
B58244d:L58244d:{c.instructions+=3;NFSU2_TR(0x58244d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582450:{NFSU2_TR(0x582450);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582452:{NFSU2_TR(0x582452);
if(r1(R+518)){{goto L58245d;}}
}
B582454:L582454:{c.instructions+=2;NFSU2_TR(0x582454);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582455:{NFSU2_TR(0x582455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58245aull));
TAIL_STATIC(0x575630u,575);
}
B58245a:L58245a:{c.instructions+=1;NFSU2_TR(0x58245a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58245d:L58245d:{c.instructions+=4;NFSU2_TR(0x58245d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B582460:{NFSU2_TR(0x582460);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582462:{NFSU2_TR(0x582462);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582463:{NFSU2_TR(0x582463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582468ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B582468:L582468:{c.instructions+=4;NFSU2_TR(0x582468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58246b:{NFSU2_TR(0x58246b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58246d:{NFSU2_TR(0x58246d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582470:{NFSU2_TR(0x582470);
if(r1(R+518)){{goto L58248f;}}
}
B582472:L582472:{c.instructions+=6;NFSU2_TR(0x582472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582475:{NFSU2_TR(0x582475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582476:{NFSU2_TR(0x582476);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582478:{NFSU2_TR(0x582478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582479:{NFSU2_TR(0x582479);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58247a:{NFSU2_TR(0x58247a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58247full));
TAIL_STATIC(0x747e00u,747);
}
B58247f:L58247f:{c.instructions+=5;NFSU2_TR(0x58247f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582482:{NFSU2_TR(0x582482);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B582485:{NFSU2_TR(0x582485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582488:{NFSU2_TR(0x582488);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58248b:{NFSU2_TR(0x58248b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58248f:L58248f:{c.instructions+=4;NFSU2_TR(0x58248f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582492:{NFSU2_TR(0x582492);
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
B582494:{NFSU2_TR(0x582494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582495:{NFSU2_TR(0x582495);
if(r1(R+518)){{goto L5824ea;}}
}
B582497:L582497:{c.instructions+=5;NFSU2_TR(0x582497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58249a:{NFSU2_TR(0x58249a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58249b:{NFSU2_TR(0x58249b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58249f:{NFSU2_TR(0x58249f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5824a0:{NFSU2_TR(0x5824a0);
{goto L5824e5;}
}
B5824a2:L5824a2:{c.instructions+=1;NFSU2_TR(0x5824a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5824b7;}}
}
B5824a4:L5824a4:{c.instructions+=3;NFSU2_TR(0x5824a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5824a7:{NFSU2_TR(0x5824a7);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5824ad:{NFSU2_TR(0x5824ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5824b7;}}
}
B5824af:L5824af:{c.instructions+=5;NFSU2_TR(0x5824af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5824b0:{NFSU2_TR(0x5824b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5824b2:{NFSU2_TR(0x5824b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5824b3:{NFSU2_TR(0x5824b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5824b6:{NFSU2_TR(0x5824b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5824b7:L5824b7:{c.instructions+=9;NFSU2_TR(0x5824b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5824ba:{NFSU2_TR(0x5824ba);
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
B5824bc:{NFSU2_TR(0x5824bc);
__builtin_memmove((R+4),gp(0x7fbe0c),4);
}
B5824c2:{NFSU2_TR(0x5824c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824c6:{NFSU2_TR(0x5824c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824ca:{NFSU2_TR(0x5824ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824ce:{NFSU2_TR(0x5824ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6e657730ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5824d6:{NFSU2_TR(0x5824d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824da:{NFSU2_TR(0x5824da);
if(r1(R+518)){{goto L5824ea;}}
}
B5824dc:L5824dc:{c.instructions+=4;NFSU2_TR(0x5824dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5824df:{NFSU2_TR(0x5824df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5824e0:{NFSU2_TR(0x5824e0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5824e4:{NFSU2_TR(0x5824e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5824e5:L5824e5:{c.instructions+=1;NFSU2_TR(0x5824e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5824e7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5824e7:L5824e7:{c.instructions+=1;NFSU2_TR(0x5824e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5824ea:L5824ea:{c.instructions+=3;NFSU2_TR(0x5824ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5824ed:{NFSU2_TR(0x5824ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5824ee:{NFSU2_TR(0x5824ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5824f3ull));
TAIL_STATIC(0x747630u,747);
}
B5824f3:L5824f3:{c.instructions+=11;NFSU2_TR(0x5824f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5824f6:{NFSU2_TR(0x5824f6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5824f9:{NFSU2_TR(0x5824f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824fc:{NFSU2_TR(0x5824fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5824ff:{NFSU2_TR(0x5824ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582502:{NFSU2_TR(0x582502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582505:{NFSU2_TR(0x582505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582508:{NFSU2_TR(0x582508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582509:{NFSU2_TR(0x582509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58250a:{NFSU2_TR(0x58250a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58250d:{NFSU2_TR(0x58250d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582510:L582510:{c.instructions+=5;NFSU2_TR(0x582510);
__builtin_memmove((R+8),(R+4),4);
}
B582512:{NFSU2_TR(0x582512);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582513:{NFSU2_TR(0x582513);
w4(R+4,u32(0x6ull));
}
B582518:{NFSU2_TR(0x582518);
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
B58251a:{NFSU2_TR(0x58251a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58251d:L58251d:{c.instructions+=1;NFSU2_TR(0x58251d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58251f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58251du);}goto L58251d;}
}
B58251f:L58251f:{c.instructions+=2;NFSU2_TR(0x58251f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582520:{NFSU2_TR(0x582520);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582530:L582530:{c.instructions+=3;NFSU2_TR(0x582530);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582534:{NFSU2_TR(0x582534);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582537:{NFSU2_TR(0x582537);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582542;}}
}
B582539:L582539:{c.instructions+=2;NFSU2_TR(0x582539);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58253c:{NFSU2_TR(0x58253c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5825d2;}}
}
B582542:L582542:{c.instructions+=2;NFSU2_TR(0x582542);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582545:{NFSU2_TR(0x582545);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582552;}}
}
B582547:L582547:{c.instructions+=2;NFSU2_TR(0x582547);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58254a:{NFSU2_TR(0x58254a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582552;}}
}
B58254c:L58254c:{c.instructions+=2;NFSU2_TR(0x58254c);
w4(R+0,u32(0x1ull));
}
B582551:{NFSU2_TR(0x582551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582552:L582552:{c.instructions+=2;NFSU2_TR(0x582552);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582555:{NFSU2_TR(0x582555);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582562;}}
}
B582557:L582557:{c.instructions+=2;NFSU2_TR(0x582557);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58255a:{NFSU2_TR(0x58255a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582562;}}
}
B58255c:L58255c:{c.instructions+=2;NFSU2_TR(0x58255c);
w4(R+0,u32(0x3ull));
}
B582561:{NFSU2_TR(0x582561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582562:L582562:{c.instructions+=2;NFSU2_TR(0x582562);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582565:{NFSU2_TR(0x582565);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582572;}}
}
B582567:L582567:{c.instructions+=2;NFSU2_TR(0x582567);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58256a:{NFSU2_TR(0x58256a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582572;}}
}
B58256c:L58256c:{c.instructions+=2;NFSU2_TR(0x58256c);
w4(R+0,u32(0x2ull));
}
B582571:{NFSU2_TR(0x582571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582572:L582572:{c.instructions+=2;NFSU2_TR(0x582572);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x29ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582575:{NFSU2_TR(0x582575);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582582;}}
}
B582577:L582577:{c.instructions+=2;NFSU2_TR(0x582577);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58257a:{NFSU2_TR(0x58257a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582582;}}
}
B58257c:L58257c:{c.instructions+=2;NFSU2_TR(0x58257c);
w4(R+0,u32(0x4ull));
}
B582581:{NFSU2_TR(0x582581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582582:L582582:{c.instructions+=2;NFSU2_TR(0x582582);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x33ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582585:{NFSU2_TR(0x582585);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58258c;}}
}
B582587:L582587:{c.instructions+=2;NFSU2_TR(0x582587);
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
B58258a:{NFSU2_TR(0x58258a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58254cu);}goto L58254c;}}
}
B58258c:L58258c:{c.instructions+=2;NFSU2_TR(0x58258c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58258f:{NFSU2_TR(0x58258f);
if(r1(R+518)){{goto L5825d2;}}
}
B582591:L582591:{c.instructions+=2;NFSU2_TR(0x582591);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582594:{NFSU2_TR(0x582594);
if(r1(R+518)){{goto L5825d2;}}
}
B582596:L582596:{c.instructions+=2;NFSU2_TR(0x582596);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582599:{NFSU2_TR(0x582599);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58254cu);}goto L58254c;}}
}
B58259b:L58259b:{c.instructions+=2;NFSU2_TR(0x58259b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58259e:{NFSU2_TR(0x58259e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58254cu);}goto L58254c;}}
}
B5825a0:L5825a0:{c.instructions+=2;NFSU2_TR(0x5825a0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825a3:{NFSU2_TR(0x5825a3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58255cu);}goto L58255c;}}
}
B5825a5:L5825a5:{c.instructions+=2;NFSU2_TR(0x5825a5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x45ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x45ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825a8:{NFSU2_TR(0x5825a8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58255cu);}goto L58255c;}}
}
B5825aa:L5825aa:{c.instructions+=2;NFSU2_TR(0x5825aa);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825ad:{NFSU2_TR(0x5825ad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58256cu);}goto L58256c;}}
}
B5825af:L5825af:{c.instructions+=2;NFSU2_TR(0x5825af);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x46ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x46ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x46ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825b2:{NFSU2_TR(0x5825b2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58256cu);}goto L58256c;}}
}
B5825b4:L5825b4:{c.instructions+=2;NFSU2_TR(0x5825b4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x41ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x41ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825b7:{NFSU2_TR(0x5825b7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58257cu);}goto L58257c;}}
}
B5825b9:L5825b9:{c.instructions+=2;NFSU2_TR(0x5825b9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x47ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x47ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x47ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825bc:{NFSU2_TR(0x5825bc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58257cu);}goto L58257c;}}
}
B5825be:L5825be:{c.instructions+=2;NFSU2_TR(0x5825be);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x42ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x42ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x42ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825c1:{NFSU2_TR(0x5825c1);
if(r1(R+518)){{goto L5825cc;}}
}
B5825c3:L5825c3:{c.instructions+=2;NFSU2_TR(0x5825c3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x48ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x48ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5825c6:{NFSU2_TR(0x5825c6);
if(r1(R+518)){{goto L5825cc;}}
}
B5825c8:L5825c8:{c.instructions+=2;NFSU2_TR(0x5825c8);
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
B5825cb:{NFSU2_TR(0x5825cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5825cc:L5825cc:{c.instructions+=2;NFSU2_TR(0x5825cc);
w4(R+0,u32(0x5ull));
}
B5825d1:{NFSU2_TR(0x5825d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5825d2:L5825d2:{c.instructions+=2;NFSU2_TR(0x5825d2);
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
B5825d4:{NFSU2_TR(0x5825d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5825e0:L5825e0:{c.instructions+=3;NFSU2_TR(0x5825e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5825e4:{NFSU2_TR(0x5825e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5825e7:{NFSU2_TR(0x5825e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5826ab;}}
}
B5825ed:L5825ed:{c.instructions+=7;NFSU2_TR(0x5825ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5825ee:{NFSU2_TR(0x5825ee);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5825ef:{NFSU2_TR(0x5825ef);
w4(R+4,u32(0xaull));
}
B5825f4:{NFSU2_TR(0x5825f4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5825f4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5825f4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5825f6:{NFSU2_TR(0x5825f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5825f7:{NFSU2_TR(0x5825f7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5825fa:{NFSU2_TR(0x5825fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582609;}}
}
B5825fc:L5825fc:{c.instructions+=2;NFSU2_TR(0x5825fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a547ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582604:{NFSU2_TR(0x582604);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582609:L582609:{c.instructions+=2;NFSU2_TR(0x582609);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58260c:{NFSU2_TR(0x58260c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58261b;}}
}
B58260e:L58260e:{c.instructions+=2;NFSU2_TR(0x58260e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a548ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582616:{NFSU2_TR(0x582616);
TAIL_STATIC(0x4ffa80u,4ff);
}
B58261b:L58261b:{c.instructions+=2;NFSU2_TR(0x58261b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58261e:{NFSU2_TR(0x58261e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58262d;}}
}
B582620:L582620:{c.instructions+=2;NFSU2_TR(0x582620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a549ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582628:{NFSU2_TR(0x582628);
TAIL_STATIC(0x4ffa80u,4ff);
}
B58262d:L58262d:{c.instructions+=2;NFSU2_TR(0x58262d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582630:{NFSU2_TR(0x582630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58263f;}}
}
B582632:L582632:{c.instructions+=2;NFSU2_TR(0x582632);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54aull));
s4(u32(r4(U+0)),r4(U+4));
}
B58263a:{NFSU2_TR(0x58263a);
TAIL_STATIC(0x4ffa80u,4ff);
}
B58263f:L58263f:{c.instructions+=2;NFSU2_TR(0x58263f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582642:{NFSU2_TR(0x582642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582651;}}
}
B582644:L582644:{c.instructions+=2;NFSU2_TR(0x582644);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54bull));
s4(u32(r4(U+0)),r4(U+4));
}
B58264c:{NFSU2_TR(0x58264c);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582651:L582651:{c.instructions+=2;NFSU2_TR(0x582651);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582654:{NFSU2_TR(0x582654);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582663;}}
}
B582656:L582656:{c.instructions+=2;NFSU2_TR(0x582656);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54cull));
s4(u32(r4(U+0)),r4(U+4));
}
B58265e:{NFSU2_TR(0x58265e);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582663:L582663:{c.instructions+=2;NFSU2_TR(0x582663);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582666:{NFSU2_TR(0x582666);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582675;}}
}
B582668:L582668:{c.instructions+=2;NFSU2_TR(0x582668);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54dull));
s4(u32(r4(U+0)),r4(U+4));
}
B582670:{NFSU2_TR(0x582670);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582675:L582675:{c.instructions+=2;NFSU2_TR(0x582675);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582678:{NFSU2_TR(0x582678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582687;}}
}
B58267a:L58267a:{c.instructions+=2;NFSU2_TR(0x58267a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54eull));
s4(u32(r4(U+0)),r4(U+4));
}
B582682:{NFSU2_TR(0x582682);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582687:L582687:{c.instructions+=2;NFSU2_TR(0x582687);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58268a:{NFSU2_TR(0x58268a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582699;}}
}
B58268c:L58268c:{c.instructions+=2;NFSU2_TR(0x58268c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a54full));
s4(u32(r4(U+0)),r4(U+4));
}
B582694:{NFSU2_TR(0x582694);
TAIL_STATIC(0x4ffa80u,4ff);
}
B582699:L582699:{c.instructions+=2;NFSU2_TR(0x582699);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58269c:{NFSU2_TR(0x58269c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5826ab;}}
}
B58269e:L58269e:{c.instructions+=2;NFSU2_TR(0x58269e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dc3a550ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5826a6:{NFSU2_TR(0x5826a6);
TAIL_STATIC(0x4ffa80u,4ff);
}
B5826ab:L5826ab:{c.instructions+=2;NFSU2_TR(0x5826ab);
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
B5826ad:{NFSU2_TR(0x5826ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5826b0:L5826b0:{c.instructions+=3;NFSU2_TR(0x5826b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5826b4:{NFSU2_TR(0x5826b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5826b7:{NFSU2_TR(0x5826b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5826ca;}}
}
B5826b9:L5826b9:{c.instructions+=2;NFSU2_TR(0x5826b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5826bc:{NFSU2_TR(0x5826bc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5826ca;}}
}
B5826be:L5826be:{c.instructions+=6;NFSU2_TR(0x5826be);
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
B5826bf:{NFSU2_TR(0x5826bf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5826c0:{NFSU2_TR(0x5826c0);
w4(R+4,u32(0xaull));
}
B5826c5:{NFSU2_TR(0x5826c5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5826c5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5826c5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5826c7:{NFSU2_TR(0x5826c7);
__builtin_memmove((R+0),(R+8),1);
}
B5826c9:{NFSU2_TR(0x5826c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5826ca:L5826ca:{c.instructions+=2;NFSU2_TR(0x5826ca);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5826cc:{NFSU2_TR(0x5826cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5826d0:L5826d0:{c.instructions+=5;NFSU2_TR(0x5826d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5826d4:{NFSU2_TR(0x5826d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5826d8:{NFSU2_TR(0x5826d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5826da:{NFSU2_TR(0x5826da);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5826dc:{NFSU2_TR(0x5826dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5826e0:L5826e0:{c.instructions+=4;NFSU2_TR(0x5826e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5826e4:{NFSU2_TR(0x5826e4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5826e7:{NFSU2_TR(0x5826e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5826e9:{NFSU2_TR(0x5826e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582757;}}
}
B5826eb:L5826eb:{c.instructions+=3;NFSU2_TR(0x5826eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5826ef:{NFSU2_TR(0x5826ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5826f2:{NFSU2_TR(0x5826f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5826ff;}}
}
B5826f4:L5826f4:{c.instructions+=2;NFSU2_TR(0x5826f4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5826f7:{NFSU2_TR(0x5826f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5826ff;}}
}
B5826f9:L5826f9:{c.instructions+=2;NFSU2_TR(0x5826f9);
w4(R+0,u32(0x6ull));
}
B5826fe:{NFSU2_TR(0x5826fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5826ff:L5826ff:{c.instructions+=2;NFSU2_TR(0x5826ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582702:{NFSU2_TR(0x582702);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58270f;}}
}
B582704:L582704:{c.instructions+=2;NFSU2_TR(0x582704);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582707:{NFSU2_TR(0x582707);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58270f;}}
}
B582709:L582709:{c.instructions+=2;NFSU2_TR(0x582709);
w4(R+0,u32(0x7ull));
}
B58270e:{NFSU2_TR(0x58270e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58270f:L58270f:{c.instructions+=2;NFSU2_TR(0x58270f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582712:{NFSU2_TR(0x582712);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58271f;}}
}
B582714:L582714:{c.instructions+=2;NFSU2_TR(0x582714);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582717:{NFSU2_TR(0x582717);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58271f;}}
}
B582719:L582719:{c.instructions+=2;NFSU2_TR(0x582719);
w4(R+0,u32(0x8ull));
}
B58271e:{NFSU2_TR(0x58271e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58271f:L58271f:{c.instructions+=2;NFSU2_TR(0x58271f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582722:{NFSU2_TR(0x582722);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58272f;}}
}
B582724:L582724:{c.instructions+=2;NFSU2_TR(0x582724);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582727:{NFSU2_TR(0x582727);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58272f;}}
}
B582729:L582729:{c.instructions+=2;NFSU2_TR(0x582729);
w4(R+0,u32(0x9ull));
}
B58272e:{NFSU2_TR(0x58272e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58272f:L58272f:{c.instructions+=2;NFSU2_TR(0x58272f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x29ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582732:{NFSU2_TR(0x582732);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58273f;}}
}
B582734:L582734:{c.instructions+=2;NFSU2_TR(0x582734);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582737:{NFSU2_TR(0x582737);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58273f;}}
}
B582739:L582739:{c.instructions+=2;NFSU2_TR(0x582739);
w4(R+0,u32(0xaull));
}
B58273e:{NFSU2_TR(0x58273e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58273f:L58273f:{c.instructions+=2;NFSU2_TR(0x58273f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x33ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x33ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582742:{NFSU2_TR(0x582742);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58285d;}}
}
B582748:L582748:{c.instructions+=2;NFSU2_TR(0x582748);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B58274b:{NFSU2_TR(0x58274b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58285d;}}
}
B582751:L582751:{c.instructions+=2;NFSU2_TR(0x582751);
w4(R+0,u32(0xbull));
}
B582756:{NFSU2_TR(0x582756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582757:L582757:{c.instructions+=2;NFSU2_TR(0x582757);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58275a:{NFSU2_TR(0x58275a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5827c8;}}
}
B58275c:L58275c:{c.instructions+=3;NFSU2_TR(0x58275c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582760:{NFSU2_TR(0x582760);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582763:{NFSU2_TR(0x582763);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582770;}}
}
B582765:L582765:{c.instructions+=2;NFSU2_TR(0x582765);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B582768:{NFSU2_TR(0x582768);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582770;}}
}
B58276a:L58276a:{c.instructions+=2;NFSU2_TR(0x58276a);
w4(R+0,u32(0xcull));
}
B58276f:{NFSU2_TR(0x58276f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582770:L582770:{c.instructions+=2;NFSU2_TR(0x582770);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582773:{NFSU2_TR(0x582773);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582780;}}
}
B582775:L582775:{c.instructions+=2;NFSU2_TR(0x582775);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582778:{NFSU2_TR(0x582778);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582780;}}
}
B58277a:L58277a:{c.instructions+=2;NFSU2_TR(0x58277a);
w4(R+0,u32(0xdull));
}
B58277f:{NFSU2_TR(0x58277f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582780:L582780:{c.instructions+=2;NFSU2_TR(0x582780);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582783:{NFSU2_TR(0x582783);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L582790;}}
}
B582785:L582785:{c.instructions+=2;NFSU2_TR(0x582785);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582788:{NFSU2_TR(0x582788);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L582790;}}
}
B58278a:L58278a:{c.instructions+=2;NFSU2_TR(0x58278a);
w4(R+0,u32(0xeull));
}
B58278f:{NFSU2_TR(0x58278f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582790:L582790:{c.instructions+=2;NFSU2_TR(0x582790);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582793:{NFSU2_TR(0x582793);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5827a0;}}
}
B582795:L582795:{c.instructions+=2;NFSU2_TR(0x582795);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582798:{NFSU2_TR(0x582798);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5827a0;}}
}
B58279a:L58279a:{c.instructions+=2;NFSU2_TR(0x58279a);
w4(R+0,u32(0xfull));
}
B58279f:{NFSU2_TR(0x58279f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827a0:L5827a0:{c.instructions+=2;NFSU2_TR(0x5827a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x29ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5827a3:{NFSU2_TR(0x5827a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5827b0;}}
}
B5827a5:L5827a5:{c.instructions+=2;NFSU2_TR(0x5827a5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827a8:{NFSU2_TR(0x5827a8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5827b0;}}
}
B5827aa:L5827aa:{c.instructions+=2;NFSU2_TR(0x5827aa);
w4(R+0,u32(0x10ull));
}
B5827af:{NFSU2_TR(0x5827af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827b0:L5827b0:{c.instructions+=2;NFSU2_TR(0x5827b0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x33ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x33ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827b3:{NFSU2_TR(0x5827b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58285d;}}
}
B5827b9:L5827b9:{c.instructions+=2;NFSU2_TR(0x5827b9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5827bc:{NFSU2_TR(0x5827bc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58285d;}}
}
B5827c2:L5827c2:{c.instructions+=2;NFSU2_TR(0x5827c2);
w4(R+0,u32(0x11ull));
}
B5827c7:{NFSU2_TR(0x5827c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827c8:L5827c8:{c.instructions+=2;NFSU2_TR(0x5827c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5827cb:{NFSU2_TR(0x5827cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582813;}}
}
B5827cd:L5827cd:{c.instructions+=3;NFSU2_TR(0x5827cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5827d1:{NFSU2_TR(0x5827d1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827d4:{NFSU2_TR(0x5827d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5827dc;}}
}
B5827d6:L5827d6:{c.instructions+=2;NFSU2_TR(0x5827d6);
w4(R+0,u32(0x12ull));
}
B5827db:{NFSU2_TR(0x5827db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827dc:L5827dc:{c.instructions+=2;NFSU2_TR(0x5827dc);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827df:{NFSU2_TR(0x5827df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5827e7;}}
}
B5827e1:L5827e1:{c.instructions+=2;NFSU2_TR(0x5827e1);
w4(R+0,u32(0x13ull));
}
B5827e6:{NFSU2_TR(0x5827e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827e7:L5827e7:{c.instructions+=2;NFSU2_TR(0x5827e7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827ea:{NFSU2_TR(0x5827ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5827f2;}}
}
B5827ec:L5827ec:{c.instructions+=2;NFSU2_TR(0x5827ec);
w4(R+0,u32(0x14ull));
}
B5827f1:{NFSU2_TR(0x5827f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827f2:L5827f2:{c.instructions+=2;NFSU2_TR(0x5827f2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5827f5:{NFSU2_TR(0x5827f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5827fd;}}
}
B5827f7:L5827f7:{c.instructions+=2;NFSU2_TR(0x5827f7);
w4(R+0,u32(0x15ull));
}
B5827fc:{NFSU2_TR(0x5827fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5827fd:L5827fd:{c.instructions+=2;NFSU2_TR(0x5827fd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x41ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x41ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582800:{NFSU2_TR(0x582800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582808;}}
}
B582802:L582802:{c.instructions+=2;NFSU2_TR(0x582802);
w4(R+0,u32(0x16ull));
}
B582807:{NFSU2_TR(0x582807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582808:L582808:{c.instructions+=2;NFSU2_TR(0x582808);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x42ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x42ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x42ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58280b:{NFSU2_TR(0x58280b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58285d;}}
}
B58280d:L58280d:{c.instructions+=2;NFSU2_TR(0x58280d);
w4(R+0,u32(0x17ull));
}
B582812:{NFSU2_TR(0x582812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582813:L582813:{c.instructions+=2;NFSU2_TR(0x582813);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B582816:{NFSU2_TR(0x582816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58285d;}}
}
B582818:L582818:{c.instructions+=3;NFSU2_TR(0x582818);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58281c:{NFSU2_TR(0x58281c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58281f:{NFSU2_TR(0x58281f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582827;}}
}
B582821:L582821:{c.instructions+=2;NFSU2_TR(0x582821);
w4(R+0,u32(0x18ull));
}
B582826:{NFSU2_TR(0x582826);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582827:L582827:{c.instructions+=2;NFSU2_TR(0x582827);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58282a:{NFSU2_TR(0x58282a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582832;}}
}
B58282c:L58282c:{c.instructions+=2;NFSU2_TR(0x58282c);
w4(R+0,u32(0x19ull));
}
B582831:{NFSU2_TR(0x582831);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582832:L582832:{c.instructions+=2;NFSU2_TR(0x582832);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x45ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x45ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582835:{NFSU2_TR(0x582835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58283d;}}
}
B582837:L582837:{c.instructions+=2;NFSU2_TR(0x582837);
w4(R+0,u32(0x1aull));
}
B58283c:{NFSU2_TR(0x58283c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58283d:L58283d:{c.instructions+=2;NFSU2_TR(0x58283d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x46ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x46ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x46ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582840:{NFSU2_TR(0x582840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582848;}}
}
B582842:L582842:{c.instructions+=2;NFSU2_TR(0x582842);
w4(R+0,u32(0x1bull));
}
B582847:{NFSU2_TR(0x582847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582848:L582848:{c.instructions+=2;NFSU2_TR(0x582848);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x47ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x47ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x47ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58284b:{NFSU2_TR(0x58284b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582853;}}
}
B58284d:L58284d:{c.instructions+=2;NFSU2_TR(0x58284d);
w4(R+0,u32(0x1cull));
}
B582852:{NFSU2_TR(0x582852);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582853:L582853:{c.instructions+=2;NFSU2_TR(0x582853);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x48ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x48ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582856:{NFSU2_TR(0x582856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58285d;}}
}
B582858:L582858:{c.instructions+=1;NFSU2_TR(0x582858);
w4(R+0,u32(0x1dull));
}
B58285d:L58285d:{c.instructions+=1;NFSU2_TR(0x58285d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582860:L582860:{c.instructions+=5;NFSU2_TR(0x582860);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582864:{NFSU2_TR(0x582864);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582868:{NFSU2_TR(0x582868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58286b:{NFSU2_TR(0x58286b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58286d:{NFSU2_TR(0x58286d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582870:L582870:{c.instructions+=5;NFSU2_TR(0x582870);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582871:{NFSU2_TR(0x582871);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B582875:{NFSU2_TR(0x582875);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582876:{NFSU2_TR(0x582876);
w4(R+24,u32(0x7fbe10ull));
}
B58287b:{NFSU2_TR(0x58287b);
{goto L582880;}
}
B582880:L582880:{c.instructions+=4;NFSU2_TR(0x582880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B582882:{NFSU2_TR(0x582882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582883:{NFSU2_TR(0x582883);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582884:{NFSU2_TR(0x582884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582889ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B582889:L582889:{c.instructions+=3;NFSU2_TR(0x582889);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58288c:{NFSU2_TR(0x58288c);
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
B58288e:{NFSU2_TR(0x58288e);
if(r1(R+518)){{goto L5828fa;}}
}
B582890:L582890:{c.instructions+=3;NFSU2_TR(0x582890);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B582893:{NFSU2_TR(0x582893);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fbe30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fbe30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582899:{NFSU2_TR(0x582899);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582880u);}goto L582880;}}
}
B58289b:L58289b:{c.instructions+=3;NFSU2_TR(0x58289b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58289c:{NFSU2_TR(0x58289c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58289d:{NFSU2_TR(0x58289d);
w4(R+12,u32(0x7fbe30ull));
}
B5828a2:L5828a2:{c.instructions+=3;NFSU2_TR(0x5828a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5828a4:{NFSU2_TR(0x5828a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828a5:{NFSU2_TR(0x5828a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5828aaull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5828aa:L5828aa:{c.instructions+=5;NFSU2_TR(0x5828aa);
__builtin_memmove((R+28),(R+0),4);
}
B5828ac:{NFSU2_TR(0x5828ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828ad:{NFSU2_TR(0x5828ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828ae:{NFSU2_TR(0x5828ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828af:{NFSU2_TR(0x5828af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5828b4ull));
TAIL_STATIC(0x43dd10u,43d);
}
B5828b4:L5828b4:{c.instructions+=3;NFSU2_TR(0x5828b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5828b7:{NFSU2_TR(0x5828b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5828b9:{NFSU2_TR(0x5828b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5828cc;}}
}
B5828bb:L5828bb:{c.instructions+=4;NFSU2_TR(0x5828bb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828bd:{NFSU2_TR(0x5828bd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5828bf:{NFSU2_TR(0x5828bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828c0:{NFSU2_TR(0x5828c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5828c5ull));
TAIL_STATIC(0x43ddf0u,43d);
}
B5828c5:L5828c5:{c.instructions+=3;NFSU2_TR(0x5828c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5828c8:{NFSU2_TR(0x5828c8);
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
B5828ca:{NFSU2_TR(0x5828ca);
if(r1(R+518)){{goto L582901;}}
}
B5828cc:L5828cc:{c.instructions+=3;NFSU2_TR(0x5828cc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5828cf:{NFSU2_TR(0x5828cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fbe38ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fbe38ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5828d5:{NFSU2_TR(0x5828d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5828a2u);}goto L5828a2;}}
}
B5828d7:L5828d7:{c.instructions+=3;NFSU2_TR(0x5828d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5828db:{NFSU2_TR(0x5828db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5828dd:{NFSU2_TR(0x5828dd);
if(r1(R+518)){{goto L5828f1;}}
}
B5828df:L5828df:{c.instructions+=3;NFSU2_TR(0x5828df);
u8 U[4];
w4(U+0,u32(0x7a10ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828e4:{NFSU2_TR(0x5828e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5828e5:{NFSU2_TR(0x5828e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5828eaull));
TAIL_STATIC(0x43dc30u,43d);
}
B5828ea:L5828ea:{c.instructions+=3;NFSU2_TR(0x5828ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5828ed:{NFSU2_TR(0x5828ed);
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
B5828ef:{NFSU2_TR(0x5828ef);
if(r1(R+518)){{goto L582901;}}
}
B5828f1:L5828f1:{c.instructions+=6;NFSU2_TR(0x5828f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5828f2:{NFSU2_TR(0x5828f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5828f3:{NFSU2_TR(0x5828f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5828f4:{NFSU2_TR(0x5828f4);
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
B5828f6:{NFSU2_TR(0x5828f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5828f7:{NFSU2_TR(0x5828f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5828fa:L5828fa:{c.instructions+=4;NFSU2_TR(0x5828fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5828fb:{NFSU2_TR(0x5828fb);
w1(R+0,u8(0x1ull));
}
B5828fd:{NFSU2_TR(0x5828fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5828fe:{NFSU2_TR(0x5828fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582901:L582901:{c.instructions+=6;NFSU2_TR(0x582901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582902:{NFSU2_TR(0x582902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582903:{NFSU2_TR(0x582903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582904:{NFSU2_TR(0x582904);
w1(R+0,u8(0x1ull));
}
B582906:{NFSU2_TR(0x582906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582907:{NFSU2_TR(0x582907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582910:L582910:{c.instructions+=5;NFSU2_TR(0x582910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582914:{NFSU2_TR(0x582914);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582918:{NFSU2_TR(0x582918);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58291b:{NFSU2_TR(0x58291b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58291e:{NFSU2_TR(0x58291e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582930:L582930:{c.instructions+=8;NFSU2_TR(0x582930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582933:{NFSU2_TR(0x582933);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B582936:{NFSU2_TR(0x582936);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B582938:{NFSU2_TR(0x582938);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58293b:{NFSU2_TR(0x58293b);
__builtin_memmove((R+4),(R+518),1);
}
B58293e:{NFSU2_TR(0x58293e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58293f:{NFSU2_TR(0x58293f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582941:{NFSU2_TR(0x582941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582950:L582950:{c.instructions+=5;NFSU2_TR(0x582950);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582954:{NFSU2_TR(0x582954);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B582957:{NFSU2_TR(0x582957);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582959:{NFSU2_TR(0x582959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58295a:{NFSU2_TR(0x58295a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58295full));
TAIL_STATIC(0x43ddf0u,43d);
}
B58295f:L58295f:{c.instructions+=3;NFSU2_TR(0x58295f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582962:{NFSU2_TR(0x582962);
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
B582964:{NFSU2_TR(0x582964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582967;}}
}
B582966:L582966:{c.instructions+=1;NFSU2_TR(0x582966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582967:L582967:{c.instructions+=5;NFSU2_TR(0x582967);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582969:{NFSU2_TR(0x582969);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58296a:{NFSU2_TR(0x58296a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58296b:{NFSU2_TR(0x58296b);
u8 U[4];
w4(U+0,u32(0x869d40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582970:{NFSU2_TR(0x582970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582975ull));
TAIL_STATIC(0x43dc00u,43d);
}
B582975:L582975:{c.instructions+=3;NFSU2_TR(0x582975);
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
B582978:{NFSU2_TR(0x582978);
w4(R+0,u32(0x869d40ull));
}
B58297d:{NFSU2_TR(0x58297d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582980:L582980:{c.instructions+=3;NFSU2_TR(0x582980);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582983:{NFSU2_TR(0x582983);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B582985:{NFSU2_TR(0x582985);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58298b;}}
}
B582987:L582987:{c.instructions+=2;NFSU2_TR(0x582987);
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
B58298a:{NFSU2_TR(0x58298a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58298b:L58298b:{c.instructions+=6;NFSU2_TR(0x58298b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582991:{NFSU2_TR(0x582991);
w4(R+0,u32(0x1ull));
}
B582996:{NFSU2_TR(0x582996);
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
B582998:{NFSU2_TR(0x582998);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582999:{NFSU2_TR(0x582999);
w1(R+12,u8(0x1ull));
}
B58299b:{NFSU2_TR(0x58299b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5829ba;}}
}
B58299d:L58299d:{c.instructions+=1;NFSU2_TR(0x58299d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x27cull))));
}
B5829a3:L5829a3:{c.instructions+=2;NFSU2_TR(0x5829a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5829a9:{NFSU2_TR(0x5829a9);
if(r1(R+518)){{goto L5829b8;}}
}
B5829ab:L5829ab:{c.instructions+=4;NFSU2_TR(0x5829ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5829ac:{NFSU2_TR(0x5829ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B5829af:{NFSU2_TR(0x5829af);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5829b1:{NFSU2_TR(0x5829b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5829a3u);}goto L5829a3;}}
}
B5829b3:L5829b3:{c.instructions+=3;NFSU2_TR(0x5829b3);
w4(R+0,u32(r1(R+12)));
}
B5829b6:{NFSU2_TR(0x5829b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5829b7:{NFSU2_TR(0x5829b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5829b8:L5829b8:{c.instructions+=1;NFSU2_TR(0x5829b8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5829ba:L5829ba:{c.instructions+=3;NFSU2_TR(0x5829ba);
w4(R+0,u32(r1(R+12)));
}
B5829bd:{NFSU2_TR(0x5829bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5829be:{NFSU2_TR(0x5829be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5829c0:L5829c0:{c.instructions+=4;NFSU2_TR(0x5829c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5829c3:{NFSU2_TR(0x5829c3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5829c6:{NFSU2_TR(0x5829c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5829ca:{NFSU2_TR(0x5829ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5829d6;}}
}
B5829cc:L5829cc:{c.instructions+=2;NFSU2_TR(0x5829cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5829ce:{NFSU2_TR(0x5829ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5829da;}}
}
B5829d0:L5829d0:{c.instructions+=2;NFSU2_TR(0x5829d0);
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
B5829d3:{NFSU2_TR(0x5829d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5829d6:L5829d6:{c.instructions+=2;NFSU2_TR(0x5829d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5829d8:{NFSU2_TR(0x5829d8);
if(r1(R+518)){{goto L5829dc;}}
}
B5829da:L5829da:{c.instructions+=1;NFSU2_TR(0x5829da);
__builtin_memmove((R+0),(R+4),4);
}
B5829dc:L5829dc:{c.instructions+=3;NFSU2_TR(0x5829dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5829e2:{NFSU2_TR(0x5829e2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5829e7:{NFSU2_TR(0x5829e7);
if(r1(R+518)){{goto L5829f1;}}
}
B5829e9:L5829e9:{c.instructions+=2;NFSU2_TR(0x5829e9);
w4(R+0,u32(0x6ull));
}
B5829ee:{NFSU2_TR(0x5829ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5829f1:L5829f1:{c.instructions+=2;NFSU2_TR(0x5829f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5829f6:{NFSU2_TR(0x5829f6);
if(r1(R+518)){{goto L5829fd;}}
}
B5829f8:L5829f8:{c.instructions+=2;NFSU2_TR(0x5829f8);
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
B5829fa:{NFSU2_TR(0x5829fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5829fd:L5829fd:{c.instructions+=2;NFSU2_TR(0x5829fd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582a02:{NFSU2_TR(0x582a02);
if(r1(R+518)){{goto L582a0c;}}
}
B582a04:L582a04:{c.instructions+=2;NFSU2_TR(0x582a04);
w4(R+0,u32(0x1ull));
}
B582a09:{NFSU2_TR(0x582a09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582a0c:L582a0c:{c.instructions+=2;NFSU2_TR(0x582a0c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582a11:{NFSU2_TR(0x582a11);
if(r1(R+518)){{goto L582a1b;}}
}
B582a13:L582a13:{c.instructions+=2;NFSU2_TR(0x582a13);
w4(R+0,u32(0x2ull));
}
B582a18:{NFSU2_TR(0x582a18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582a1b:L582a1b:{c.instructions+=2;NFSU2_TR(0x582a1b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582a20:{NFSU2_TR(0x582a20);
if(r1(R+518)){{goto L582a2a;}}
}
B582a22:L582a22:{c.instructions+=2;NFSU2_TR(0x582a22);
w4(R+0,u32(0x3ull));
}
B582a27:{NFSU2_TR(0x582a27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582a2a:L582a2a:{c.instructions+=2;NFSU2_TR(0x582a2a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x40000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582a2f:{NFSU2_TR(0x582a2f);
if(r1(R+518)){{goto L582a39;}}
}
B582a31:L582a31:{c.instructions+=2;NFSU2_TR(0x582a31);
w4(R+0,u32(0x4ull));
}
B582a36:{NFSU2_TR(0x582a36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582a39:L582a39:{c.instructions+=6;NFSU2_TR(0x582a39);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000000ull))));
}
B582a3e:{NFSU2_TR(0x582a3e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B582a40:{NFSU2_TR(0x582a40);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B582a42:{NFSU2_TR(0x582a42);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x6ull))));
}
B582a45:{NFSU2_TR(0x582a45);
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
B582a46:{NFSU2_TR(0x582a46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582a50:L582a50:{c.instructions+=7;NFSU2_TR(0x582a50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582a51:{NFSU2_TR(0x582a51);
__builtin_memmove((R+8),(R+4),4);
}
B582a53:{NFSU2_TR(0x582a53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582a54:{NFSU2_TR(0x582a54);
__builtin_memmove((R+0),(R+8),4);
}
B582a56:{NFSU2_TR(0x582a56);
w4(R+24,u32(0x5ull));
}
B582a5b:{NFSU2_TR(0x582a5b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B582a5d:{NFSU2_TR(0x582a5d);
__builtin_memmove((R+4),(R+4),4);
}
B582a60:L582a60:{c.instructions+=4;NFSU2_TR(0x582a60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B582a62:{NFSU2_TR(0x582a62);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
}
B582a65:{NFSU2_TR(0x582a65);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B582a66:{NFSU2_TR(0x582a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582a60u);}goto L582a60;}}
}
B582a68:L582a68:{c.instructions+=7;NFSU2_TR(0x582a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582a6e:{NFSU2_TR(0x582a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582a74:{NFSU2_TR(0x582a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582a7a:{NFSU2_TR(0x582a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582a80:{NFSU2_TR(0x582a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B582a8a:{NFSU2_TR(0x582a8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B582a90:{NFSU2_TR(0x582a90);
w4(R+24,u32(0x6ull));
}
B582a95:L582a95:{c.instructions+=4;NFSU2_TR(0x582a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B582a97:{NFSU2_TR(0x582a97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc1ull))));
}
B582a9c:{NFSU2_TR(0x582a9c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B582a9d:{NFSU2_TR(0x582a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582a95u);}goto L582a95;}}
}
B582a9f:L582a9f:{c.instructions+=8;NFSU2_TR(0x582a9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B582aa5:{NFSU2_TR(0x582aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582aab:{NFSU2_TR(0x582aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582ab1:{NFSU2_TR(0x582ab1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B582ab7:{NFSU2_TR(0x582ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B582abd:{NFSU2_TR(0x582abd);
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
B582abf:{NFSU2_TR(0x582abf);
w4(R+4,u32(0x28ull));
}
B582ac4:{NFSU2_TR(0x582ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x55ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582ac7:L582ac7:{c.instructions+=1;NFSU2_TR(0x582ac7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582ac9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582ac7u);}goto L582ac7;}
}
B582ac9:L582ac9:{c.instructions+=4;NFSU2_TR(0x582ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582aca:{NFSU2_TR(0x582aca);
__builtin_memmove((R+0),(R+8),4);
}
B582acc:{NFSU2_TR(0x582acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582acd:{NFSU2_TR(0x582acd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582ad0:L582ad0:{c.instructions+=3;NFSU2_TR(0x582ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582ad6:{NFSU2_TR(0x582ad6);
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
B582ad8:{NFSU2_TR(0x582ad8);
if(r1(R+518)){{goto L582aeb;}}
}
B582ada:L582ada:{c.instructions+=3;NFSU2_TR(0x582ada);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582adb:{NFSU2_TR(0x582adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582ae5:{NFSU2_TR(0x582ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582aeaull));
TAIL_STATIC(0x73ea00u,73e);
}
B582aea:L582aea:{c.instructions+=1;NFSU2_TR(0x582aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B582aeb:L582aeb:{c.instructions+=1;NFSU2_TR(0x582aeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582af0:L582af0:{c.instructions+=8;NFSU2_TR(0x582af0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582af1:{NFSU2_TR(0x582af1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582af2:{NFSU2_TR(0x582af2);
__builtin_memmove((R+24),(R+4),4);
}
B582af4:{NFSU2_TR(0x582af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582afa:{NFSU2_TR(0x582afa);
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
B582afc:{NFSU2_TR(0x582afc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582afd:{NFSU2_TR(0x582afd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B582b01:{NFSU2_TR(0x582b01);
if(r1(R+518)){{goto L582b1f;}}
}
B582b03:L582b03:{c.instructions+=4;NFSU2_TR(0x582b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582b09:{NFSU2_TR(0x582b09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582b0a:{NFSU2_TR(0x582b0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582b0b:{NFSU2_TR(0x582b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582b0dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B582b0d:L582b0d:{c.instructions+=3;NFSU2_TR(0x582b0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582b10:{NFSU2_TR(0x582b10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B582b13:{NFSU2_TR(0x582b13);
if(r1(R+518)){{goto L582b1f;}}
}
B582b15:L582b15:{c.instructions+=1;NFSU2_TR(0x582b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B582b1f:L582b1f:{c.instructions+=4;NFSU2_TR(0x582b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582b23:{NFSU2_TR(0x582b23);
w4(R+12,u32(0x1ull));
}
B582b28:{NFSU2_TR(0x582b28);
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
B582b2a:{NFSU2_TR(0x582b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582b49;}}
}
B582b2c:L582b2c:{c.instructions+=2;NFSU2_TR(0x582b2c);
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
B582b2e:{NFSU2_TR(0x582b2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582b49;}}
}
B582b30:L582b30:{c.instructions+=3;NFSU2_TR(0x582b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582b36:{NFSU2_TR(0x582b36);
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
B582b38:{NFSU2_TR(0x582b38);
if(r1(R+518)){{goto L582b49;}}
}
B582b3a:L582b3a:{c.instructions+=3;NFSU2_TR(0x582b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582b3b:{NFSU2_TR(0x582b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582b41:{NFSU2_TR(0x582b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582b46ull));
TAIL_STATIC(0x73ea00u,73e);
}
B582b46:L582b46:{c.instructions+=1;NFSU2_TR(0x582b46);
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
B582b49:L582b49:{c.instructions+=5;NFSU2_TR(0x582b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582b4a:{NFSU2_TR(0x582b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582b4b:{NFSU2_TR(0x582b4b);
__builtin_memmove(gp(0x83637c),(R+12),4);
}
B582b51:{NFSU2_TR(0x582b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582b52:{NFSU2_TR(0x582b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582b60:L582b60:{c.instructions+=4;NFSU2_TR(0x582b60);
__builtin_memmove((R+4),gp(0x86a31c),1);
}
B582b66:{NFSU2_TR(0x582b66);
w4(R+0,u32(0x1ull));
}
B582b6b:{NFSU2_TR(0x582b6b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B582b6d:{NFSU2_TR(0x582b6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582b7f;}}
}
B582b6f:L582b6f:{c.instructions+=3;NFSU2_TR(0x582b6f);
s4(0x86a31c,u32(u32(m4(0x86a31c))|u32(r4(R+0))));
}
B582b75:{NFSU2_TR(0x582b75);
w4(R+4,u32(0x869d68ull));
}
B582b7a:{NFSU2_TR(0x582b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582b7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582a50u);}goto L582a50;}
}
B582b7f:L582b7f:{c.instructions+=2;NFSU2_TR(0x582b7f);
w4(R+0,u32(0x869d68ull));
}
B582b84:{NFSU2_TR(0x582b84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582b90:L582b90:{c.instructions+=5;NFSU2_TR(0x582b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582b94:{NFSU2_TR(0x582b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582b9a:{NFSU2_TR(0x582b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582b9b:{NFSU2_TR(0x582b9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582b9c:{NFSU2_TR(0x582b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ba1ull));
TAIL_STATIC(0x73eee0u,73e);
}
B582ba1:L582ba1:{c.instructions+=2;NFSU2_TR(0x582ba1);
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
B582ba4:{NFSU2_TR(0x582ba4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582bb0:L582bb0:{c.instructions+=5;NFSU2_TR(0x582bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582bb4:{NFSU2_TR(0x582bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582bba:{NFSU2_TR(0x582bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bbb:{NFSU2_TR(0x582bbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bbc:{NFSU2_TR(0x582bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582bc1ull));
TAIL_STATIC(0x73eea0u,73e);
}
B582bc1:L582bc1:{c.instructions+=2;NFSU2_TR(0x582bc1);
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
B582bc4:{NFSU2_TR(0x582bc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582bd0:L582bd0:{c.instructions+=8;NFSU2_TR(0x582bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B582bd3:{NFSU2_TR(0x582bd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bd4:{NFSU2_TR(0x582bd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bd5:{NFSU2_TR(0x582bd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bd6:{NFSU2_TR(0x582bd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bd7:{NFSU2_TR(0x582bd7);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582bdc:{NFSU2_TR(0x582bdc);
__builtin_memmove((R+20),(R+4),4);
}
B582bde:{NFSU2_TR(0x582bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582be3ull));
TAIL_STATIC(0x51bd10u,51b);
}
B582be3:L582be3:{c.instructions+=8;NFSU2_TR(0x582be3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582be7:{NFSU2_TR(0x582be7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B582be9:{NFSU2_TR(0x582be9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B582beb:{NFSU2_TR(0x582beb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582bee:{NFSU2_TR(0x582bee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B582bf0:{NFSU2_TR(0x582bf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x63686174ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582bf5:{NFSU2_TR(0x582bf5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B582bf9:{NFSU2_TR(0x582bf9);
if(r1(R+518)){{goto L582c09;}}
}
B582bfb:L582bfb:{c.instructions+=2;NFSU2_TR(0x582bfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e7674ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582c00:{NFSU2_TR(0x582c00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582c11;}}
}
B582c02:L582c02:{c.instructions+=2;NFSU2_TR(0x582c02);
w4(R+24,u32(0x3ull));
}
B582c07:{NFSU2_TR(0x582c07);
{goto L582c0b;}
}
B582c09:L582c09:{c.instructions+=1;NFSU2_TR(0x582c09);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B582c0b:L582c0b:{c.instructions+=2;NFSU2_TR(0x582c0b);
w1(R+12,u8(0x1ull));
}
B582c0d:{NFSU2_TR(0x582c0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B582c11:L582c11:{c.instructions+=4;NFSU2_TR(0x582c11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582c13:{NFSU2_TR(0x582c13);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B582c18:{NFSU2_TR(0x582c18);
w4(R+4,u32(0x7ull));
}
B582c1d:{NFSU2_TR(0x582c1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B582c21:L582c21:{c.instructions+=1;NFSU2_TR(0x582c21);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582c23;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582c21u);}goto L582c21;}
}
B582c23:L582c23:{c.instructions+=10;NFSU2_TR(0x582c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582c26:{NFSU2_TR(0x582c26);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B582c28:{NFSU2_TR(0x582c28);
u8 U[4];
w4(U+0,u32(0x7a10dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c2d:{NFSU2_TR(0x582c2d);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B582c2e:{NFSU2_TR(0x582c2e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c30:{NFSU2_TR(0x582c30);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B582c34:{NFSU2_TR(0x582c34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c35:{NFSU2_TR(0x582c35);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c3a:{NFSU2_TR(0x582c3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c3b:{NFSU2_TR(0x582c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c40ull));
TAIL_STATIC(0x7414a0u,741);
}
B582c40:L582c40:{c.instructions+=3;NFSU2_TR(0x582c40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582c43:{NFSU2_TR(0x582c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c44:{NFSU2_TR(0x582c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c49ull));
TAIL_STATIC(0x742360u,742);
}
B582c49:L582c49:{c.instructions+=5;NFSU2_TR(0x582c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582c4f:{NFSU2_TR(0x582c4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B582c53:{NFSU2_TR(0x582c53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c54:{NFSU2_TR(0x582c54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c55:{NFSU2_TR(0x582c55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c5aull));
TAIL_STATIC(0x73eea0u,73e);
}
B582c5a:L582c5a:{c.instructions+=4;NFSU2_TR(0x582c5a);
__builtin_memmove((R+28),(R+0),4);
}
B582c5c:{NFSU2_TR(0x582c5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B582c5f:{NFSU2_TR(0x582c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582c61:{NFSU2_TR(0x582c61);
if(r1(R+518)){{goto L582c85;}}
}
B582c63:L582c63:{c.instructions+=2;NFSU2_TR(0x582c63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c64:{NFSU2_TR(0x582c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c69ull));
TAIL_STATIC(0x73eae0u,73e);
}
B582c69:L582c69:{c.instructions+=3;NFSU2_TR(0x582c69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582c6c:{NFSU2_TR(0x582c6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582c6e:{NFSU2_TR(0x582c6e);
if(r1(R+518)){{goto L582c85;}}
}
B582c70:L582c70:{c.instructions+=3;NFSU2_TR(0x582c70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c72:{NFSU2_TR(0x582c72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c73:{NFSU2_TR(0x582c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c78ull));
TAIL_STATIC(0x73ee20u,73e);
}
B582c78:L582c78:{c.instructions+=7;NFSU2_TR(0x582c78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582c7b:{NFSU2_TR(0x582c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582c7c:{NFSU2_TR(0x582c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582c7d:{NFSU2_TR(0x582c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582c7e:{NFSU2_TR(0x582c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582c7f:{NFSU2_TR(0x582c7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582c82:{NFSU2_TR(0x582c82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582c85:L582c85:{c.instructions+=2;NFSU2_TR(0x582c85);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B582c87:{NFSU2_TR(0x582c87);
if(r1(R+518)){{goto L582ca4;}}
}
B582c89:L582c89:{c.instructions+=2;NFSU2_TR(0x582c89);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c8e:{NFSU2_TR(0x582c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582c93ull));
TAIL_STATIC(0x52cef0u,52c);
}
B582c93:L582c93:{c.instructions+=3;NFSU2_TR(0x582c93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582c96:{NFSU2_TR(0x582c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582c98:{NFSU2_TR(0x582c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582ca4;}}
}
B582c9a:L582c9a:{c.instructions+=2;NFSU2_TR(0x582c9a);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582c9c:{NFSU2_TR(0x582c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ca1ull));
TAIL_STATIC(0x50d180u,50d);
}
B582ca1:L582ca1:{c.instructions+=1;NFSU2_TR(0x582ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582ca4:L582ca4:{c.instructions+=4;NFSU2_TR(0x582ca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582ca8:{NFSU2_TR(0x582ca8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ca9:{NFSU2_TR(0x582ca9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582caa:{NFSU2_TR(0x582caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582cafull));
TAIL_STATIC(0x50cee0u,50c);
}
B582caf:L582caf:{c.instructions+=3;NFSU2_TR(0x582caf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582cb1:{NFSU2_TR(0x582cb1);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582cb6:{NFSU2_TR(0x582cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582cbbull));
TAIL_STATIC(0x55dde0u,55d);
}
B582cbb:L582cbb:{c.instructions+=8;NFSU2_TR(0x582cbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B582cbe:{NFSU2_TR(0x582cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582cbf:{NFSU2_TR(0x582cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582cc0:{NFSU2_TR(0x582cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582cc1:{NFSU2_TR(0x582cc1);
s4(0x83637c,u32(0x1ull));
}
B582ccb:{NFSU2_TR(0x582ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582ccc:{NFSU2_TR(0x582ccc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582ccf:{NFSU2_TR(0x582ccf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582ce0:L582ce0:{c.instructions+=2;NFSU2_TR(0x582ce0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582ce2:{NFSU2_TR(0x582ce2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B582ce8:L582ce8:{c.instructions+=2;NFSU2_TR(0x582ce8);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B582ceb:{NFSU2_TR(0x582ceb);
if(r1(R+518)){{goto L582cfc;}}
}
B582ced:L582ced:{c.instructions+=4;NFSU2_TR(0x582ced);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B582cee:{NFSU2_TR(0x582cee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc1ull))));
}
B582cf4:{NFSU2_TR(0x582cf4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B582cf7:{NFSU2_TR(0x582cf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582ce8u);}goto L582ce8;}}
}
B582cf9:L582cf9:{c.instructions+=1;NFSU2_TR(0x582cf9);
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
B582cfc:L582cfc:{c.instructions+=1;NFSU2_TR(0x582cfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582d00:L582d00:{c.instructions+=8;NFSU2_TR(0x582d00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d01:{NFSU2_TR(0x582d01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d02:{NFSU2_TR(0x582d02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B582d06:{NFSU2_TR(0x582d06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d07:{NFSU2_TR(0x582d07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d08:{NFSU2_TR(0x582d08);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B582d0a:{NFSU2_TR(0x582d0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x131ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582d10:{NFSU2_TR(0x582d10);
w4(R+28,u32(0x6ull));
}
B582d15:L582d15:{c.instructions+=3;NFSU2_TR(0x582d15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d16:{NFSU2_TR(0x582d16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d17:{NFSU2_TR(0x582d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582d1cull));
TAIL_STATIC(0x43dc30u,43d);
}
B582d1c:L582d1c:{c.instructions+=3;NFSU2_TR(0x582d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582d1f:{NFSU2_TR(0x582d1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582d21:{NFSU2_TR(0x582d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582d25;}}
}
B582d23:L582d23:{c.instructions+=1;NFSU2_TR(0x582d23);
w1(R+12,u8(0x1ull));
}
B582d25:L582d25:{c.instructions+=3;NFSU2_TR(0x582d25);
w1(R+512,carry<u32>(r4(R+24),u32(0xc1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc1ull))));
}
B582d2b:{NFSU2_TR(0x582d2b);
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
B582d2c:{NFSU2_TR(0x582d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582d15u);}goto L582d15;}}
}
B582d2e:L582d2e:{c.instructions+=6;NFSU2_TR(0x582d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582d2f:{NFSU2_TR(0x582d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582d30:{NFSU2_TR(0x582d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582d31:{NFSU2_TR(0x582d31);
__builtin_memmove((R+0),(R+12),1);
}
B582d33:{NFSU2_TR(0x582d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582d34:{NFSU2_TR(0x582d34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582d40:L582d40:{c.instructions+=7;NFSU2_TR(0x582d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d41:{NFSU2_TR(0x582d41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d42:{NFSU2_TR(0x582d42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B582d46:{NFSU2_TR(0x582d46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d47:{NFSU2_TR(0x582d47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d48:{NFSU2_TR(0x582d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582d4e:{NFSU2_TR(0x582d4e);
w4(R+12,u32(0x6ull));
}
B582d53:L582d53:{c.instructions+=4;NFSU2_TR(0x582d53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((R+0),(U+0),4);
}
B582d56:{NFSU2_TR(0x582d56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d57:{NFSU2_TR(0x582d57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d58:{NFSU2_TR(0x582d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582d5dull));
TAIL_STATIC(0x43dc30u,43d);
}
B582d5d:L582d5d:{c.instructions+=3;NFSU2_TR(0x582d5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582d60:{NFSU2_TR(0x582d60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582d62:{NFSU2_TR(0x582d62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582d6e;}}
}
B582d64:L582d64:{c.instructions+=2;NFSU2_TR(0x582d64);
w4(R+4,u32(0x30ull));
}
B582d69:{NFSU2_TR(0x582d69);
__builtin_memmove((R+28),(R+24),4);
}
B582d6b:L582d6b:{c.instructions+=1;NFSU2_TR(0x582d6b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582d6d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582d6bu);}goto L582d6b;}
}
B582d6d:L582d6d:{c.instructions+=1;NFSU2_TR(0x582d6d);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B582d6e:L582d6e:{c.instructions+=3;NFSU2_TR(0x582d6e);
w1(R+512,carry<u32>(r4(R+24),u32(0xc1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc1ull))));
}
B582d74:{NFSU2_TR(0x582d74);
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
B582d75:{NFSU2_TR(0x582d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582d53u);}goto L582d53;}}
}
B582d77:L582d77:{c.instructions+=5;NFSU2_TR(0x582d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582d78:{NFSU2_TR(0x582d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582d79:{NFSU2_TR(0x582d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582d7a:{NFSU2_TR(0x582d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582d7b:{NFSU2_TR(0x582d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582d80:L582d80:{c.instructions+=10;NFSU2_TR(0x582d80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d81:{NFSU2_TR(0x582d81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d82:{NFSU2_TR(0x582d82);
__builtin_memmove((R+24),(R+4),4);
}
B582d84:{NFSU2_TR(0x582d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582d8a:{NFSU2_TR(0x582d8a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B582d8c:{NFSU2_TR(0x582d8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582d8d:{NFSU2_TR(0x582d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582d93:{NFSU2_TR(0x582d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x59cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582d99:{NFSU2_TR(0x582d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B582d9f:{NFSU2_TR(0x582d9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582da4ull));
TAIL_STATIC(0x73ef30u,73e);
}
B582da4:L582da4:{c.instructions+=3;NFSU2_TR(0x582da4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582da7:{NFSU2_TR(0x582da7);
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
B582da9:{NFSU2_TR(0x582da9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L582e0d;}}
}
B582dab:L582dab:{c.instructions+=2;NFSU2_TR(0x582dab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582dac:{NFSU2_TR(0x582dac);
__builtin_memmove((R+16),(R+16),4);
}
B582db0:L582db0:{c.instructions+=4;NFSU2_TR(0x582db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582db6:{NFSU2_TR(0x582db6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582db7:{NFSU2_TR(0x582db7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582db8:{NFSU2_TR(0x582db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582dbdull));
TAIL_STATIC(0x73eee0u,73e);
}
B582dbd:L582dbd:{c.instructions+=3;NFSU2_TR(0x582dbd);
__builtin_memmove((R+28),(R+0),4);
}
B582dbf:{NFSU2_TR(0x582dbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582dc0:{NFSU2_TR(0x582dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582dc5ull));
TAIL_STATIC(0x73eb70u,73e);
}
B582dc5:L582dc5:{c.instructions+=3;NFSU2_TR(0x582dc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B582dc8:{NFSU2_TR(0x582dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582dca:{NFSU2_TR(0x582dca);
if(r1(R+518)){{goto L582dd2;}}
}
B582dcc:L582dcc:{c.instructions+=1;NFSU2_TR(0x582dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B582dd2:L582dd2:{c.instructions+=2;NFSU2_TR(0x582dd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582dd3:{NFSU2_TR(0x582dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582dd8ull));
TAIL_STATIC(0x73eae0u,73e);
}
B582dd8:L582dd8:{c.instructions+=3;NFSU2_TR(0x582dd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582ddb:{NFSU2_TR(0x582ddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582ddd:{NFSU2_TR(0x582ddd);
if(r1(R+518)){{goto L582de5;}}
}
B582ddf:L582ddf:{c.instructions+=1;NFSU2_TR(0x582ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B582de5:L582de5:{c.instructions+=2;NFSU2_TR(0x582de5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582de6:{NFSU2_TR(0x582de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582debull));
TAIL_STATIC(0x73f940u,73f);
}
B582deb:L582deb:{c.instructions+=3;NFSU2_TR(0x582deb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582dee:{NFSU2_TR(0x582dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582df0:{NFSU2_TR(0x582df0);
if(r1(R+518)){{goto L582df8;}}
}
B582df2:L582df2:{c.instructions+=1;NFSU2_TR(0x582df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x59cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B582df8:L582df8:{c.instructions+=4;NFSU2_TR(0x582df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582dfe:{NFSU2_TR(0x582dfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582dff:{NFSU2_TR(0x582dff);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B582e00:{NFSU2_TR(0x582e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e05ull));
TAIL_STATIC(0x73ef30u,73e);
}
B582e05:L582e05:{c.instructions+=3;NFSU2_TR(0x582e05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582e08:{NFSU2_TR(0x582e08);
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
B582e0a:{NFSU2_TR(0x582e0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582db0u);}goto L582db0;}}
}
B582e0c:L582e0c:{c.instructions+=1;NFSU2_TR(0x582e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582e0d:L582e0d:{c.instructions+=3;NFSU2_TR(0x582e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582e0e:{NFSU2_TR(0x582e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582e0f:{NFSU2_TR(0x582e0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582e10:L582e10:{c.instructions+=3;NFSU2_TR(0x582e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e11:{NFSU2_TR(0x582e11);
__builtin_memmove((R+24),(R+4),4);
}
B582e13:{NFSU2_TR(0x582e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582d80u);}goto L582d80;}
}
B582e18:L582e18:{c.instructions+=3;NFSU2_TR(0x582e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582e1e:{NFSU2_TR(0x582e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582e1f:{NFSU2_TR(0x582e1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582e20:L582e20:{c.instructions+=10;NFSU2_TR(0x582e20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e21:{NFSU2_TR(0x582e21);
__builtin_memmove((R+20),(R+16),4);
}
B582e23:{NFSU2_TR(0x582e23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B582e26:{NFSU2_TR(0x582e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B582e2c:{NFSU2_TR(0x582e2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e2d:{NFSU2_TR(0x582e2d);
__builtin_memmove((R+24),(R+4),4);
}
B582e2f:{NFSU2_TR(0x582e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582e35:{NFSU2_TR(0x582e35);
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
B582e37:{NFSU2_TR(0x582e37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e38:{NFSU2_TR(0x582e38);
if(r1(R+518)){{goto L582e9e;}}
}
B582e3a:L582e3a:{c.instructions+=4;NFSU2_TR(0x582e3a);
u8 U[4];
w4(U+0,u32(0x7a10fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e3f:{NFSU2_TR(0x582e3f);
u8 U[4];
w4(U+0,u32(0x7a10ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e44:{NFSU2_TR(0x582e44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e45:{NFSU2_TR(0x582e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e4aull));
TAIL_STATIC(0x73f170u,73f);
}
B582e4a:L582e4a:{c.instructions+=4;NFSU2_TR(0x582e4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B582e4f:{NFSU2_TR(0x582e4f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582e51:{NFSU2_TR(0x582e51);
w4(R+4,u32(0x1full));
}
B582e56:{NFSU2_TR(0x582e56);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B582e5a:L582e5a:{c.instructions+=1;NFSU2_TR(0x582e5a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582e5c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582e5au);}goto L582e5a;}
}
B582e5c:L582e5c:{c.instructions+=6;NFSU2_TR(0x582e5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B582e5f:{NFSU2_TR(0x582e5f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B582e61:{NFSU2_TR(0x582e61);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e66:{NFSU2_TR(0x582e66);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e6b:{NFSU2_TR(0x582e6b);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B582e6c:{NFSU2_TR(0x582e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e71ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B582e71:L582e71:{c.instructions+=6;NFSU2_TR(0x582e71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582e74:{NFSU2_TR(0x582e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e75:{NFSU2_TR(0x582e75);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B582e79:{NFSU2_TR(0x582e79);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e7e:{NFSU2_TR(0x582e7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e7f:{NFSU2_TR(0x582e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e84ull));
TAIL_STATIC(0x50c960u,50c);
}
B582e84:L582e84:{c.instructions+=8;NFSU2_TR(0x582e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B582e8a:{NFSU2_TR(0x582e8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e8c:{NFSU2_TR(0x582e8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B582e90:{NFSU2_TR(0x582e90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e91:{NFSU2_TR(0x582e91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e93:{NFSU2_TR(0x582e93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e95:{NFSU2_TR(0x582e95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582e96:{NFSU2_TR(0x582e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582e9bull));
TAIL_STATIC(0x73f180u,73f);
}
B582e9b:L582e9b:{c.instructions+=1;NFSU2_TR(0x582e9b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B582e9e:L582e9e:{c.instructions+=5;NFSU2_TR(0x582e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582e9f:{NFSU2_TR(0x582e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582ea0:{NFSU2_TR(0x582ea0);
__builtin_memmove((R+16),(R+20),4);
}
B582ea2:{NFSU2_TR(0x582ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582ea3:{NFSU2_TR(0x582ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582eb0:L582eb0:{c.instructions+=9;NFSU2_TR(0x582eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582eb1:{NFSU2_TR(0x582eb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582eb2:{NFSU2_TR(0x582eb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582eb3:{NFSU2_TR(0x582eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B582eb7:{NFSU2_TR(0x582eb7);
__builtin_memmove((R+24),(R+4),4);
}
B582eb9:{NFSU2_TR(0x582eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582ebf:{NFSU2_TR(0x582ebf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ec0:{NFSU2_TR(0x582ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ec1:{NFSU2_TR(0x582ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ec6ull));
TAIL_STATIC(0x73eea0u,73e);
}
B582ec6:L582ec6:{c.instructions+=4;NFSU2_TR(0x582ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B582eca:{NFSU2_TR(0x582eca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582ecd:{NFSU2_TR(0x582ecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B582ecf:{NFSU2_TR(0x582ecf);
if(r1(R+518)){{goto L582edf;}}
}
B582ed1:L582ed1:{c.instructions+=3;NFSU2_TR(0x582ed1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ed2:{NFSU2_TR(0x582ed2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ed3:{NFSU2_TR(0x582ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ed8ull));
TAIL_STATIC(0x73eb50u,73e);
}
B582ed8:L582ed8:{c.instructions+=3;NFSU2_TR(0x582ed8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B582edb:{NFSU2_TR(0x582edb);
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
B582edd:{NFSU2_TR(0x582edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L582efc;}}
}
B582edf:L582edf:{c.instructions+=2;NFSU2_TR(0x582edf);
__builtin_memmove((R+4),(R+24),4);
}
B582ee1:{NFSU2_TR(0x582ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ee6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582d80u);}goto L582d80;}
}
B582ee6:L582ee6:{c.instructions+=1;NFSU2_TR(0x582ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582eebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582b60u);}goto L582b60;}
}
B582eeb:L582eeb:{c.instructions+=5;NFSU2_TR(0x582eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B582ef1:{NFSU2_TR(0x582ef1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ef2:{NFSU2_TR(0x582ef2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ef3:{NFSU2_TR(0x582ef3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ef4:{NFSU2_TR(0x582ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582ef9ull));
TAIL_STATIC(0x740790u,740);
}
B582ef9:L582ef9:{c.instructions+=1;NFSU2_TR(0x582ef9);
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
B582efc:L582efc:{c.instructions+=4;NFSU2_TR(0x582efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582efd:{NFSU2_TR(0x582efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B582efe:{NFSU2_TR(0x582efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B582eff:{NFSU2_TR(0x582eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582f10:L582f10:{c.instructions+=9;NFSU2_TR(0x582f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f11:{NFSU2_TR(0x582f11);
__builtin_memmove((R+20),(R+16),4);
}
B582f13:{NFSU2_TR(0x582f13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B582f16:{NFSU2_TR(0x582f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B582f1c:{NFSU2_TR(0x582f1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f1d:{NFSU2_TR(0x582f1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582f1f:{NFSU2_TR(0x582f1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B582f24:{NFSU2_TR(0x582f24);
w4(R+4,u32(0x1full));
}
B582f29:{NFSU2_TR(0x582f29);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B582f2d:L582f2d:{c.instructions+=1;NFSU2_TR(0x582f2d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582f2f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582f2du);}goto L582f2d;}
}
B582f2f:L582f2f:{c.instructions+=6;NFSU2_TR(0x582f2f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B582f31:{NFSU2_TR(0x582f31);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B582f32:{NFSU2_TR(0x582f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582f35:{NFSU2_TR(0x582f35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f36:{NFSU2_TR(0x582f36);
u8 U[4];
w4(U+0,u32(0xade22a0eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f3b:{NFSU2_TR(0x582f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582f40ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B582f40:L582f40:{c.instructions+=6;NFSU2_TR(0x582f40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582f43:{NFSU2_TR(0x582f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f44:{NFSU2_TR(0x582f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B582f48:{NFSU2_TR(0x582f48);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f4d:{NFSU2_TR(0x582f4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f4e:{NFSU2_TR(0x582f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582f53ull));
TAIL_STATIC(0x50c960u,50c);
}
B582f53:L582f53:{c.instructions+=8;NFSU2_TR(0x582f53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B582f56:{NFSU2_TR(0x582f56);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B582f5a:{NFSU2_TR(0x582f5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f5b:{NFSU2_TR(0x582f5b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f5d:{NFSU2_TR(0x582f5d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f5f:{NFSU2_TR(0x582f5f);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f64:{NFSU2_TR(0x582f64);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f69:{NFSU2_TR(0x582f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582f6eull));
TAIL_STATIC(0x4a0000u,4a0);
}
B582f6e:L582f6e:{c.instructions+=2;NFSU2_TR(0x582f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f6f:{NFSU2_TR(0x582f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582f74ull));
TAIL_STATIC(0x558540u,558);
}
B582f74:L582f74:{c.instructions+=5;NFSU2_TR(0x582f74);
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
B582f77:{NFSU2_TR(0x582f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582f78:{NFSU2_TR(0x582f78);
__builtin_memmove((R+16),(R+20),4);
}
B582f7a:{NFSU2_TR(0x582f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582f7b:{NFSU2_TR(0x582f7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582f80:L582f80:{c.instructions+=9;NFSU2_TR(0x582f80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f81:{NFSU2_TR(0x582f81);
__builtin_memmove((R+20),(R+16),4);
}
B582f83:{NFSU2_TR(0x582f83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B582f86:{NFSU2_TR(0x582f86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B582f8c:{NFSU2_TR(0x582f8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582f8d:{NFSU2_TR(0x582f8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B582f8f:{NFSU2_TR(0x582f8f);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B582f94:{NFSU2_TR(0x582f94);
w4(R+4,u32(0x1full));
}
B582f99:{NFSU2_TR(0x582f99);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B582f9d:L582f9d:{c.instructions+=1;NFSU2_TR(0x582f9d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L582f9f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x582f9du);}goto L582f9d;}
}
B582f9f:L582f9f:{c.instructions+=6;NFSU2_TR(0x582f9f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B582fa1:{NFSU2_TR(0x582fa1);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B582fa2:{NFSU2_TR(0x582fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582fa5:{NFSU2_TR(0x582fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fa6:{NFSU2_TR(0x582fa6);
u8 U[4];
w4(U+0,u32(0xd0ba5d76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fab:{NFSU2_TR(0x582fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582fb0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B582fb0:L582fb0:{c.instructions+=6;NFSU2_TR(0x582fb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B582fb3:{NFSU2_TR(0x582fb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fb4:{NFSU2_TR(0x582fb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B582fb8:{NFSU2_TR(0x582fb8);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fbd:{NFSU2_TR(0x582fbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fbe:{NFSU2_TR(0x582fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582fc3ull));
TAIL_STATIC(0x50c960u,50c);
}
B582fc3:L582fc3:{c.instructions+=8;NFSU2_TR(0x582fc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B582fc6:{NFSU2_TR(0x582fc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B582fca:{NFSU2_TR(0x582fca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fcb:{NFSU2_TR(0x582fcb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fcd:{NFSU2_TR(0x582fcd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fcf:{NFSU2_TR(0x582fcf);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fd4:{NFSU2_TR(0x582fd4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fd9:{NFSU2_TR(0x582fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582fdeull));
TAIL_STATIC(0x4a0000u,4a0);
}
B582fde:L582fde:{c.instructions+=2;NFSU2_TR(0x582fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582fdf:{NFSU2_TR(0x582fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x582fe4ull));
TAIL_STATIC(0x558540u,558);
}
B582fe4:L582fe4:{c.instructions+=5;NFSU2_TR(0x582fe4);
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
B582fe7:{NFSU2_TR(0x582fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B582fe8:{NFSU2_TR(0x582fe8);
__builtin_memmove((R+16),(R+20),4);
}
B582fea:{NFSU2_TR(0x582fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B582feb:{NFSU2_TR(0x582feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B582ff0:L582ff0:{c.instructions+=4;NFSU2_TR(0x582ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B582ff4:{NFSU2_TR(0x582ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B582ffa:{NFSU2_TR(0x582ffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B582ffb:{NFSU2_TR(0x582ffb);
u8 U[4];
w4(U+0,u32(0x4cd52237ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x583000u,583);
}
XIT:NFSU2_TR_EXIT(0x582,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
