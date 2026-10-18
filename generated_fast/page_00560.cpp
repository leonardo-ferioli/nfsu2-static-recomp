#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_546(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_561(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x560,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x560,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_560(u8* __restrict R,Cpu& c);
u32 page_560(Cpu& c){return body_560(c.regs.data(),c);}
__attribute__((noinline)) u32 body_560(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x560020:goto L560020;
case 0x560021:c.instructions+=6;goto B560021;
case 0x560022:c.instructions+=5;goto B560022;
case 0x560024:c.instructions+=4;goto B560024;
case 0x56002a:c.instructions+=3;goto B56002a;
case 0x56002f:c.instructions+=2;goto B56002f;
case 0x560031:c.instructions+=1;goto B560031;
case 0x560037:goto L560037;
case 0x56003d:c.instructions+=2;goto B56003d;
case 0x56003f:c.instructions+=1;goto B56003f;
case 0x560045:goto L560045;
case 0x560049:c.instructions+=2;goto B560049;
case 0x56004b:c.instructions+=1;goto B56004b;
case 0x56004d:goto L56004d;
case 0x560053:c.instructions+=7;goto B560053;
case 0x560055:c.instructions+=6;goto B560055;
case 0x560058:c.instructions+=5;goto B560058;
case 0x56005f:c.instructions+=4;goto B56005f;
case 0x560062:c.instructions+=3;goto B560062;
case 0x560065:c.instructions+=2;goto B560065;
case 0x56006b:c.instructions+=1;goto B56006b;
case 0x56006d:goto L56006d;
case 0x560070:c.instructions+=1;goto B560070;
case 0x560072:goto L560072;
case 0x560078:c.instructions+=5;goto B560078;
case 0x56007e:c.instructions+=4;goto B56007e;
case 0x56007f:c.instructions+=3;goto B56007f;
case 0x560082:c.instructions+=2;goto B560082;
case 0x560089:c.instructions+=1;goto B560089;
case 0x56008f:goto L56008f;
case 0x560095:c.instructions+=2;goto B560095;
case 0x560097:c.instructions+=1;goto B560097;
case 0x560099:goto L560099;
case 0x56009f:c.instructions+=4;goto B56009f;
case 0x5600a0:c.instructions+=3;goto B5600a0;
case 0x5600a5:c.instructions+=2;goto B5600a5;
case 0x5600ab:c.instructions+=1;goto B5600ab;
case 0x5600b0:goto L5600b0;
case 0x5600b3:goto L5600b3;
case 0x5600b6:c.instructions+=3;goto B5600b6;
case 0x5600bc:c.instructions+=2;goto B5600bc;
case 0x5600c3:c.instructions+=1;goto B5600c3;
case 0x5600c8:goto L5600c8;
case 0x5600cb:c.instructions+=5;goto B5600cb;
case 0x5600cc:c.instructions+=4;goto B5600cc;
case 0x5600d1:c.instructions+=3;goto B5600d1;
case 0x5600d6:c.instructions+=2;goto B5600d6;
case 0x5600d7:c.instructions+=1;goto B5600d7;
case 0x5600dc:goto L5600dc;
case 0x5600e2:c.instructions+=2;goto B5600e2;
case 0x5600e5:c.instructions+=1;goto B5600e5;
case 0x5600ef:goto L5600ef;
case 0x5600f0:c.instructions+=2;goto B5600f0;
case 0x5600f1:c.instructions+=1;goto B5600f1;
case 0x560100:goto L560100;
case 0x560101:c.instructions+=9;goto B560101;
case 0x560103:c.instructions+=8;goto B560103;
case 0x560104:c.instructions+=7;goto B560104;
case 0x560105:c.instructions+=6;goto B560105;
case 0x560106:c.instructions+=5;goto B560106;
case 0x560109:c.instructions+=4;goto B560109;
case 0x56010f:c.instructions+=3;goto B56010f;
case 0x560111:c.instructions+=2;goto B560111;
case 0x560114:c.instructions+=1;goto B560114;
case 0x560116:goto L560116;
case 0x560119:c.instructions+=1;goto B560119;
case 0x56011e:goto L56011e;
case 0x560120:goto L560120;
case 0x560126:c.instructions+=1;goto B560126;
case 0x560128:goto L560128;
case 0x56012b:c.instructions+=1;goto B56012b;
case 0x560130:goto L560130;
case 0x560133:c.instructions+=1;goto B560133;
case 0x560139:goto L560139;
case 0x56013f:c.instructions+=1;goto B56013f;
case 0x560141:goto L560141;
case 0x560147:c.instructions+=2;goto B560147;
case 0x560149:c.instructions+=1;goto B560149;
case 0x56014e:goto L56014e;
case 0x560150:c.instructions+=1;goto B560150;
case 0x560155:goto L560155;
case 0x560157:goto L560157;
case 0x56015d:c.instructions+=1;goto B56015d;
case 0x56015f:goto L56015f;
case 0x560165:c.instructions+=2;goto B560165;
case 0x560167:c.instructions+=1;goto B560167;
case 0x56016c:goto L56016c;
case 0x56016e:c.instructions+=1;goto B56016e;
case 0x560173:goto L560173;
case 0x560175:c.instructions+=1;goto B560175;
case 0x56017a:goto L56017a;
case 0x56017f:c.instructions+=2;goto B56017f;
case 0x560184:c.instructions+=1;goto B560184;
case 0x560189:goto L560189;
case 0x56018b:c.instructions+=1;goto B56018b;
case 0x56018d:goto L56018d;
case 0x560190:c.instructions+=2;goto B560190;
case 0x560192:c.instructions+=1;goto B560192;
case 0x560194:goto L560194;
case 0x560197:c.instructions+=3;goto B560197;
case 0x56019a:c.instructions+=2;goto B56019a;
case 0x56019d:c.instructions+=1;goto B56019d;
case 0x5601a0:goto L5601a0;
case 0x5601a3:c.instructions+=6;goto B5601a3;
case 0x5601a6:c.instructions+=5;goto B5601a6;
case 0x5601a9:c.instructions+=4;goto B5601a9;
case 0x5601aa:c.instructions+=3;goto B5601aa;
case 0x5601ab:c.instructions+=2;goto B5601ab;
case 0x5601b0:c.instructions+=1;goto B5601b0;
case 0x5601b5:goto L5601b5;
case 0x5601b7:c.instructions+=3;goto B5601b7;
case 0x5601b9:c.instructions+=2;goto B5601b9;
case 0x5601be:c.instructions+=1;goto B5601be;
case 0x5601c3:goto L5601c3;
case 0x5601c6:c.instructions+=4;goto B5601c6;
case 0x5601cb:c.instructions+=3;goto B5601cb;
case 0x5601d0:c.instructions+=2;goto B5601d0;
case 0x5601d5:c.instructions+=1;goto B5601d5;
case 0x5601da:goto L5601da;
case 0x5601dd:c.instructions+=2;goto B5601dd;
case 0x5601df:c.instructions+=1;goto B5601df;
case 0x5601e1:goto L5601e1;
case 0x5601e4:c.instructions+=1;goto B5601e4;
case 0x5601e6:goto L5601e6;
case 0x5601e8:goto L5601e8;
case 0x5601eb:c.instructions+=1;goto B5601eb;
case 0x5601ed:goto L5601ed;
case 0x5601f3:c.instructions+=2;goto B5601f3;
case 0x5601f4:c.instructions+=1;goto B5601f4;
case 0x5601f9:goto L5601f9;
case 0x5601fc:c.instructions+=5;goto B5601fc;
case 0x5601fd:c.instructions+=4;goto B5601fd;
case 0x5601fe:c.instructions+=3;goto B5601fe;
case 0x5601ff:c.instructions+=2;goto B5601ff;
case 0x560200:c.instructions+=1;goto B560200;
case 0x560203:goto L560203;
case 0x560206:c.instructions+=2;goto B560206;
case 0x560208:c.instructions+=1;goto B560208;
case 0x56020a:goto L56020a;
case 0x56020d:c.instructions+=1;goto B56020d;
case 0x56020f:goto L56020f;
case 0x560211:goto L560211;
case 0x560214:c.instructions+=1;goto B560214;
case 0x560216:goto L560216;
case 0x56021c:c.instructions+=2;goto B56021c;
case 0x56021d:c.instructions+=1;goto B56021d;
case 0x560222:goto L560222;
case 0x560225:c.instructions+=5;goto B560225;
case 0x560226:c.instructions+=4;goto B560226;
case 0x560227:c.instructions+=3;goto B560227;
case 0x560228:c.instructions+=2;goto B560228;
case 0x560229:c.instructions+=1;goto B560229;
case 0x56022c:goto L56022c;
case 0x560232:c.instructions+=2;goto B560232;
case 0x560233:c.instructions+=1;goto B560233;
case 0x560238:goto L560238;
case 0x56023e:c.instructions+=2;goto B56023e;
case 0x56023f:c.instructions+=1;goto B56023f;
case 0x560244:goto L560244;
case 0x560247:goto L560247;
case 0x560248:c.instructions+=4;goto B560248;
case 0x560249:c.instructions+=3;goto B560249;
case 0x56024a:c.instructions+=2;goto B56024a;
case 0x56024b:c.instructions+=1;goto B56024b;
case 0x560250:goto L560250;
case 0x560252:c.instructions+=13;goto B560252;
case 0x560257:c.instructions+=12;goto B560257;
case 0x56025d:c.instructions+=11;goto B56025d;
case 0x56025e:c.instructions+=10;goto B56025e;
case 0x560265:c.instructions+=9;goto B560265;
case 0x560268:c.instructions+=8;goto B560268;
case 0x560269:c.instructions+=7;goto B560269;
case 0x56026a:c.instructions+=6;goto B56026a;
case 0x56026c:c.instructions+=5;goto B56026c;
case 0x56026d:c.instructions+=4;goto B56026d;
case 0x560270:c.instructions+=3;goto B560270;
case 0x560272:c.instructions+=2;goto B560272;
case 0x560276:c.instructions+=1;goto B560276;
case 0x56027b:goto L56027b;
case 0x56027d:c.instructions+=3;goto B56027d;
case 0x56027f:c.instructions+=2;goto B56027f;
case 0x560285:c.instructions+=1;goto B560285;
case 0x56028a:goto L56028a;
case 0x56028d:c.instructions+=2;goto B56028d;
case 0x56028f:c.instructions+=1;goto B56028f;
case 0x560291:goto L560291;
case 0x560294:c.instructions+=10;goto B560294;
case 0x560297:c.instructions+=9;goto B560297;
case 0x56029a:c.instructions+=8;goto B56029a;
case 0x56029d:c.instructions+=7;goto B56029d;
case 0x5602a0:c.instructions+=6;goto B5602a0;
case 0x5602a4:c.instructions+=5;goto B5602a4;
case 0x5602a7:c.instructions+=4;goto B5602a7;
case 0x5602aa:c.instructions+=3;goto B5602aa;
case 0x5602b0:c.instructions+=2;goto B5602b0;
case 0x5602b3:c.instructions+=1;goto B5602b3;
case 0x5602b5:goto L5602b5;
case 0x5602b7:goto L5602b7;
case 0x5602b9:c.instructions+=4;goto B5602b9;
case 0x5602bb:c.instructions+=3;goto B5602bb;
case 0x5602bc:c.instructions+=2;goto B5602bc;
case 0x5602be:c.instructions+=1;goto B5602be;
case 0x5602c3:goto L5602c3;
case 0x5602c5:c.instructions+=1;goto B5602c5;
case 0x5602c7:goto L5602c7;
case 0x5602ca:c.instructions+=3;goto B5602ca;
case 0x5602cf:c.instructions+=2;goto B5602cf;
case 0x5602d1:c.instructions+=1;goto B5602d1;
case 0x5602d3:goto L5602d3;
case 0x5602d6:c.instructions+=1;goto B5602d6;
case 0x5602dd:goto L5602dd;
case 0x5602e3:c.instructions+=3;goto B5602e3;
case 0x5602e6:c.instructions+=2;goto B5602e6;
case 0x5602e8:c.instructions+=1;goto B5602e8;
case 0x5602ea:goto L5602ea;
case 0x5602ed:c.instructions+=1;goto B5602ed;
case 0x5602ef:goto L5602ef;
case 0x5602f1:goto L5602f1;
case 0x5602f2:c.instructions+=2;goto B5602f2;
case 0x5602f4:c.instructions+=1;goto B5602f4;
case 0x5602f9:goto L5602f9;
case 0x5602fd:c.instructions+=13;goto B5602fd;
case 0x560301:c.instructions+=12;goto B560301;
case 0x560305:c.instructions+=11;goto B560305;
case 0x560309:c.instructions+=10;goto B560309;
case 0x56030d:c.instructions+=9;goto B56030d;
case 0x560310:c.instructions+=8;goto B560310;
case 0x560312:c.instructions+=7;goto B560312;
case 0x560318:c.instructions+=6;goto B560318;
case 0x56031c:c.instructions+=5;goto B56031c;
case 0x560320:c.instructions+=4;goto B560320;
case 0x560321:c.instructions+=3;goto B560321;
case 0x560322:c.instructions+=2;goto B560322;
case 0x560323:c.instructions+=1;goto B560323;
case 0x560328:goto L560328;
case 0x56032c:c.instructions+=4;goto B56032c;
case 0x560330:c.instructions+=3;goto B560330;
case 0x560333:c.instructions+=2;goto B560333;
case 0x560335:c.instructions+=1;goto B560335;
case 0x56033b:goto L56033b;
case 0x56033f:c.instructions+=1;goto B56033f;
case 0x560344:goto L560344;
case 0x560346:c.instructions+=2;goto B560346;
case 0x56034a:c.instructions+=1;goto B56034a;
case 0x560350:goto L560350;
case 0x560353:c.instructions+=3;goto B560353;
case 0x560354:c.instructions+=2;goto B560354;
case 0x560359:c.instructions+=1;goto B560359;
case 0x56035e:goto L56035e;
case 0x56035f:c.instructions+=2;goto B56035f;
case 0x560364:c.instructions+=1;goto B560364;
case 0x560369:goto L560369;
case 0x56036b:c.instructions+=1;goto B56036b;
case 0x560371:goto L560371;
case 0x560373:c.instructions+=1;goto B560373;
case 0x560378:goto L560378;
case 0x56037b:c.instructions+=2;goto B56037b;
case 0x56037d:c.instructions+=1;goto B56037d;
case 0x56037f:goto L56037f;
case 0x560382:c.instructions+=11;goto B560382;
case 0x560385:c.instructions+=10;goto B560385;
case 0x560388:c.instructions+=9;goto B560388;
case 0x56038b:c.instructions+=8;goto B56038b;
case 0x56038e:c.instructions+=7;goto B56038e;
case 0x560391:c.instructions+=6;goto B560391;
case 0x560395:c.instructions+=5;goto B560395;
case 0x560398:c.instructions+=4;goto B560398;
case 0x56039b:c.instructions+=3;goto B56039b;
case 0x5603a1:c.instructions+=2;goto B5603a1;
case 0x5603a4:c.instructions+=1;goto B5603a4;
case 0x5603a6:goto L5603a6;
case 0x5603a8:goto L5603a8;
case 0x5603aa:c.instructions+=4;goto B5603aa;
case 0x5603ac:c.instructions+=3;goto B5603ac;
case 0x5603ad:c.instructions+=2;goto B5603ad;
case 0x5603af:c.instructions+=1;goto B5603af;
case 0x5603b4:goto L5603b4;
case 0x5603b6:c.instructions+=1;goto B5603b6;
case 0x5603b8:goto L5603b8;
case 0x5603bb:c.instructions+=3;goto B5603bb;
case 0x5603c0:c.instructions+=2;goto B5603c0;
case 0x5603c2:c.instructions+=1;goto B5603c2;
case 0x5603c4:goto L5603c4;
case 0x5603c7:c.instructions+=1;goto B5603c7;
case 0x5603ce:goto L5603ce;
case 0x5603d2:c.instructions+=5;goto B5603d2;
case 0x5603d8:c.instructions+=4;goto B5603d8;
case 0x5603de:c.instructions+=3;goto B5603de;
case 0x5603e0:c.instructions+=2;goto B5603e0;
case 0x5603e4:c.instructions+=1;goto B5603e4;
case 0x5603e6:goto L5603e6;
case 0x5603e9:c.instructions+=3;goto B5603e9;
case 0x5603ea:c.instructions+=2;goto B5603ea;
case 0x5603ef:c.instructions+=1;goto B5603ef;
case 0x5603f4:goto L5603f4;
case 0x5603f8:c.instructions+=4;goto B5603f8;
case 0x5603f9:c.instructions+=3;goto B5603f9;
case 0x5603fe:c.instructions+=2;goto B5603fe;
case 0x560402:c.instructions+=1;goto B560402;
case 0x560407:goto L560407;
case 0x56040b:c.instructions+=1;goto B56040b;
case 0x56040d:goto L56040d;
case 0x560410:c.instructions+=3;goto B560410;
case 0x560414:c.instructions+=2;goto B560414;
case 0x56041a:c.instructions+=1;goto B56041a;
case 0x56041f:goto L56041f;
case 0x560421:c.instructions+=2;goto B560421;
case 0x560425:c.instructions+=1;goto B560425;
case 0x56042b:goto L56042b;
case 0x560430:c.instructions+=3;goto B560430;
case 0x560435:c.instructions+=2;goto B560435;
case 0x560439:c.instructions+=1;goto B560439;
case 0x56043b:goto L56043b;
case 0x56043e:c.instructions+=1;goto B56043e;
case 0x560440:goto L560440;
case 0x560443:c.instructions+=1;goto B560443;
case 0x560445:goto L560445;
case 0x560447:c.instructions+=2;goto B560447;
case 0x56044c:c.instructions+=1;goto B56044c;
case 0x56044e:goto L56044e;
case 0x560450:goto L560450;
case 0x560453:c.instructions+=2;goto B560453;
case 0x560455:c.instructions+=1;goto B560455;
case 0x560457:goto L560457;
case 0x56045a:c.instructions+=3;goto B56045a;
case 0x56045b:c.instructions+=2;goto B56045b;
case 0x560460:c.instructions+=1;goto B560460;
case 0x560465:goto L560465;
case 0x560469:c.instructions+=1;goto B560469;
case 0x56046b:goto L56046b;
case 0x560471:c.instructions+=1;goto B560471;
case 0x560473:goto L560473;
case 0x560475:goto L560475;
case 0x560476:c.instructions+=2;goto B560476;
case 0x560478:c.instructions+=1;goto B560478;
case 0x56047d:goto L56047d;
case 0x56047e:c.instructions+=2;goto B56047e;
case 0x560481:c.instructions+=1;goto B560481;
case 0x560486:goto L560486;
case 0x560488:goto L560488;
case 0x56048a:c.instructions+=1;goto B56048a;
case 0x56048c:goto L56048c;
case 0x56048d:c.instructions+=2;goto B56048d;
case 0x56048f:c.instructions+=1;goto B56048f;
case 0x560494:goto L560494;
case 0x560496:c.instructions+=1;goto B560496;
case 0x560498:goto L560498;
case 0x56049b:c.instructions+=2;goto B56049b;
case 0x56049d:c.instructions+=1;goto B56049d;
case 0x56049f:goto L56049f;
case 0x5604a2:c.instructions+=1;goto B5604a2;
case 0x5604a4:goto L5604a4;
case 0x5604a7:c.instructions+=2;goto B5604a7;
case 0x5604a9:c.instructions+=1;goto B5604a9;
case 0x5604ab:goto L5604ab;
case 0x5604ae:c.instructions+=1;goto B5604ae;
case 0x5604b0:goto L5604b0;
case 0x5604b2:goto L5604b2;
case 0x5604b3:c.instructions+=2;goto B5604b3;
case 0x5604b5:c.instructions+=1;goto B5604b5;
case 0x5604ba:goto L5604ba;
case 0x5604bc:c.instructions+=3;goto B5604bc;
case 0x5604be:c.instructions+=2;goto B5604be;
case 0x5604c2:c.instructions+=1;goto B5604c2;
case 0x5604c7:goto L5604c7;
case 0x5604ca:c.instructions+=6;goto B5604ca;
case 0x5604cd:c.instructions+=5;goto B5604cd;
case 0x5604d0:c.instructions+=4;goto B5604d0;
case 0x5604d1:c.instructions+=3;goto B5604d1;
case 0x5604d2:c.instructions+=2;goto B5604d2;
case 0x5604d7:c.instructions+=1;goto B5604d7;
case 0x5604dc:goto L5604dc;
case 0x5604dd:c.instructions+=3;goto B5604dd;
case 0x5604df:c.instructions+=2;goto B5604df;
case 0x5604e4:c.instructions+=1;goto B5604e4;
case 0x5604e9:goto L5604e9;
case 0x5604ec:c.instructions+=4;goto B5604ec;
case 0x5604f1:c.instructions+=3;goto B5604f1;
case 0x5604f6:c.instructions+=2;goto B5604f6;
case 0x5604fb:c.instructions+=1;goto B5604fb;
case 0x560500:goto L560500;
case 0x560504:goto L560504;
case 0x560508:c.instructions+=3;goto B560508;
case 0x56050a:c.instructions+=2;goto B56050a;
case 0x560512:c.instructions+=1;goto B560512;
case 0x560514:goto L560514;
case 0x560516:c.instructions+=6;goto B560516;
case 0x560518:c.instructions+=5;goto B560518;
case 0x56051b:c.instructions+=4;goto B56051b;
case 0x56051d:c.instructions+=3;goto B56051d;
case 0x56051e:c.instructions+=2;goto B56051e;
case 0x560521:c.instructions+=1;goto B560521;
case 0x560526:goto L560526;
case 0x56052a:c.instructions+=4;goto B56052a;
case 0x56052e:c.instructions+=3;goto B56052e;
case 0x560531:c.instructions+=2;goto B560531;
case 0x560533:c.instructions+=1;goto B560533;
case 0x560535:goto L560535;
case 0x560539:c.instructions+=6;goto B560539;
case 0x56053a:c.instructions+=5;goto B56053a;
case 0x56053b:c.instructions+=4;goto B56053b;
case 0x56053c:c.instructions+=3;goto B56053c;
case 0x560543:c.instructions+=2;goto B560543;
case 0x560546:c.instructions+=1;goto B560546;
case 0x560550:goto L560550;
case 0x560552:c.instructions+=7;goto B560552;
case 0x560557:c.instructions+=6;goto B560557;
case 0x56055d:c.instructions+=5;goto B56055d;
case 0x56055e:c.instructions+=4;goto B56055e;
case 0x560565:c.instructions+=3;goto B560565;
case 0x560566:c.instructions+=2;goto B560566;
case 0x56056b:c.instructions+=1;goto B56056b;
case 0x560570:goto L560570;
case 0x560573:c.instructions+=4;goto B560573;
case 0x560577:c.instructions+=3;goto B560577;
case 0x560579:c.instructions+=2;goto B560579;
case 0x560581:c.instructions+=1;goto B560581;
case 0x560583:goto L560583;
case 0x560587:c.instructions+=3;goto B560587;
case 0x560588:c.instructions+=2;goto B560588;
case 0x56058a:c.instructions+=1;goto B56058a;
case 0x56058f:goto L56058f;
case 0x560593:c.instructions+=3;goto B560593;
case 0x56059a:c.instructions+=2;goto B56059a;
case 0x56059d:c.instructions+=1;goto B56059d;
case 0x56059e:goto L56059e;
case 0x5605a2:c.instructions+=4;goto B5605a2;
case 0x5605a4:c.instructions+=3;goto B5605a4;
case 0x5605ab:c.instructions+=2;goto B5605ab;
case 0x5605ae:c.instructions+=1;goto B5605ae;
case 0x5605b0:goto L5605b0;
case 0x5605b1:c.instructions+=5;goto B5605b1;
case 0x5605b2:c.instructions+=4;goto B5605b2;
case 0x5605b4:c.instructions+=3;goto B5605b4;
case 0x5605ba:c.instructions+=2;goto B5605ba;
case 0x5605bc:c.instructions+=1;goto B5605bc;
case 0x5605c1:goto L5605c1;
case 0x5605c4:c.instructions+=3;goto B5605c4;
case 0x5605c9:c.instructions+=2;goto B5605c9;
case 0x5605ca:c.instructions+=1;goto B5605ca;
case 0x5605cf:goto L5605cf;
case 0x5605d2:c.instructions+=3;goto B5605d2;
case 0x5605d7:c.instructions+=2;goto B5605d7;
case 0x5605d8:c.instructions+=1;goto B5605d8;
case 0x5605dd:goto L5605dd;
case 0x5605e0:c.instructions+=3;goto B5605e0;
case 0x5605e5:c.instructions+=2;goto B5605e5;
case 0x5605e6:c.instructions+=1;goto B5605e6;
case 0x5605eb:goto L5605eb;
case 0x5605f1:c.instructions+=5;goto B5605f1;
case 0x5605f3:c.instructions+=4;goto B5605f3;
case 0x5605f6:c.instructions+=3;goto B5605f6;
case 0x5605f8:c.instructions+=2;goto B5605f8;
case 0x5605fe:c.instructions+=1;goto B5605fe;
case 0x560600:goto L560600;
case 0x560601:c.instructions+=2;goto B560601;
case 0x560606:c.instructions+=1;goto B560606;
case 0x56060b:goto L56060b;
case 0x56060d:c.instructions+=1;goto B56060d;
case 0x56060f:goto L56060f;
case 0x560612:c.instructions+=2;goto B560612;
case 0x560614:c.instructions+=1;goto B560614;
case 0x560616:goto L560616;
case 0x560619:c.instructions+=2;goto B560619;
case 0x56061b:c.instructions+=1;goto B56061b;
case 0x56061d:goto L56061d;
case 0x56061e:c.instructions+=5;goto B56061e;
case 0x56061f:c.instructions+=4;goto B56061f;
case 0x560620:c.instructions+=3;goto B560620;
case 0x560625:c.instructions+=2;goto B560625;
case 0x560627:c.instructions+=1;goto B560627;
case 0x56062c:goto L56062c;
case 0x560632:goto L560632;
case 0x560638:c.instructions+=4;goto B560638;
case 0x56063e:c.instructions+=3;goto B56063e;
case 0x560644:c.instructions+=2;goto B560644;
case 0x560646:c.instructions+=1;goto B560646;
case 0x560648:goto L560648;
case 0x56064b:c.instructions+=1;goto B56064b;
case 0x560651:goto L560651;
case 0x560656:c.instructions+=3;goto B560656;
case 0x56065b:c.instructions+=2;goto B56065b;
case 0x56065c:c.instructions+=1;goto B56065c;
case 0x560661:goto L560661;
case 0x560667:c.instructions+=3;goto B560667;
case 0x56066c:c.instructions+=2;goto B56066c;
case 0x56066d:c.instructions+=1;goto B56066d;
case 0x560672:goto L560672;
case 0x560675:c.instructions+=4;goto B560675;
case 0x56067a:c.instructions+=3;goto B56067a;
case 0x56067f:c.instructions+=2;goto B56067f;
case 0x560684:c.instructions+=1;goto B560684;
case 0x560689:goto L560689;
case 0x56068e:c.instructions+=1;goto B56068e;
case 0x560693:goto L560693;
case 0x560696:c.instructions+=2;goto B560696;
case 0x560698:c.instructions+=1;goto B560698;
case 0x56069a:goto L56069a;
case 0x5606a0:c.instructions+=2;goto B5606a0;
case 0x5606a2:c.instructions+=1;goto B5606a2;
case 0x5606a4:goto L5606a4;
case 0x5606a9:c.instructions+=1;goto B5606a9;
case 0x5606ae:goto L5606ae;
case 0x5606b0:c.instructions+=2;goto B5606b0;
case 0x5606b1:c.instructions+=1;goto B5606b1;
case 0x5606b6:goto L5606b6;
case 0x5606b9:c.instructions+=5;goto B5606b9;
case 0x5606bf:c.instructions+=4;goto B5606bf;
case 0x5606c2:c.instructions+=3;goto B5606c2;
case 0x5606c7:c.instructions+=2;goto B5606c7;
case 0x5606c8:c.instructions+=1;goto B5606c8;
case 0x5606cd:goto L5606cd;
case 0x5606ce:c.instructions+=3;goto B5606ce;
case 0x5606d5:c.instructions+=2;goto B5606d5;
case 0x5606d6:c.instructions+=1;goto B5606d6;
case 0x5606e0:goto L5606e0;
case 0x5606e2:c.instructions+=14;goto B5606e2;
case 0x5606e7:c.instructions+=13;goto B5606e7;
case 0x5606ed:c.instructions+=12;goto B5606ed;
case 0x5606ee:c.instructions+=11;goto B5606ee;
case 0x5606f5:c.instructions+=10;goto B5606f5;
case 0x5606f8:c.instructions+=9;goto B5606f8;
case 0x5606f9:c.instructions+=8;goto B5606f9;
case 0x5606fa:c.instructions+=7;goto B5606fa;
case 0x5606fb:c.instructions+=6;goto B5606fb;
case 0x5606fd:c.instructions+=5;goto B5606fd;
case 0x560703:c.instructions+=4;goto B560703;
case 0x560706:c.instructions+=3;goto B560706;
case 0x560709:c.instructions+=2;goto B560709;
case 0x56070d:c.instructions+=1;goto B56070d;
case 0x560712:goto L560712;
case 0x560714:c.instructions+=11;goto B560714;
case 0x560718:c.instructions+=10;goto B560718;
case 0x56071c:c.instructions+=9;goto B56071c;
case 0x560722:c.instructions+=8;goto B560722;
case 0x560726:c.instructions+=7;goto B560726;
case 0x56072a:c.instructions+=6;goto B56072a;
case 0x56072b:c.instructions+=5;goto B56072b;
case 0x56072f:c.instructions+=4;goto B56072f;
case 0x560730:c.instructions+=3;goto B560730;
case 0x560731:c.instructions+=2;goto B560731;
case 0x560735:c.instructions+=1;goto B560735;
case 0x56073a:goto L56073a;
case 0x56073e:c.instructions+=5;goto B56073e;
case 0x560742:c.instructions+=4;goto B560742;
case 0x560745:c.instructions+=3;goto B560745;
case 0x560747:c.instructions+=2;goto B560747;
case 0x56074b:c.instructions+=1;goto B56074b;
case 0x56074d:goto L56074d;
case 0x560755:c.instructions+=1;goto B560755;
case 0x56075a:goto L56075a;
case 0x56075b:c.instructions+=6;goto B56075b;
case 0x56075c:c.instructions+=5;goto B56075c;
case 0x56075d:c.instructions+=4;goto B56075d;
case 0x560761:c.instructions+=3;goto B560761;
case 0x560768:c.instructions+=2;goto B560768;
case 0x56076b:c.instructions+=1;goto B56076b;
case 0x56076c:goto L56076c;
case 0x560771:goto L560771;
case 0x560773:c.instructions+=2;goto B560773;
case 0x560777:c.instructions+=1;goto B560777;
case 0x560779:goto L560779;
case 0x560780:goto L560780;
case 0x560782:c.instructions+=1;goto B560782;
case 0x560787:goto L560787;
case 0x56078a:c.instructions+=2;goto B56078a;
case 0x56078c:c.instructions+=1;goto B56078c;
case 0x56078e:goto L56078e;
case 0x560791:c.instructions+=11;goto B560791;
case 0x560794:c.instructions+=10;goto B560794;
case 0x560797:c.instructions+=9;goto B560797;
case 0x56079a:c.instructions+=8;goto B56079a;
case 0x56079d:c.instructions+=7;goto B56079d;
case 0x5607a0:c.instructions+=6;goto B5607a0;
case 0x5607a4:c.instructions+=5;goto B5607a4;
case 0x5607a7:c.instructions+=4;goto B5607a7;
case 0x5607aa:c.instructions+=3;goto B5607aa;
case 0x5607b0:c.instructions+=2;goto B5607b0;
case 0x5607b3:c.instructions+=1;goto B5607b3;
case 0x5607b5:goto L5607b5;
case 0x5607b7:goto L5607b7;
case 0x5607b9:c.instructions+=4;goto B5607b9;
case 0x5607bb:c.instructions+=3;goto B5607bb;
case 0x5607bc:c.instructions+=2;goto B5607bc;
case 0x5607bf:c.instructions+=1;goto B5607bf;
case 0x5607c4:goto L5607c4;
case 0x5607ca:c.instructions+=6;goto B5607ca;
case 0x5607ce:c.instructions+=5;goto B5607ce;
case 0x5607cf:c.instructions+=4;goto B5607cf;
case 0x5607d5:c.instructions+=3;goto B5607d5;
case 0x5607d7:c.instructions+=2;goto B5607d7;
case 0x5607d9:c.instructions+=1;goto B5607d9;
case 0x5607db:goto L5607db;
case 0x5607df:goto L5607df;
case 0x5607e2:c.instructions+=3;goto B5607e2;
case 0x5607e5:c.instructions+=2;goto B5607e5;
case 0x5607e7:c.instructions+=1;goto B5607e7;
case 0x5607e9:goto L5607e9;
case 0x5607ed:c.instructions+=3;goto B5607ed;
case 0x5607ef:c.instructions+=2;goto B5607ef;
case 0x5607f7:c.instructions+=1;goto B5607f7;
case 0x5607fd:goto L5607fd;
case 0x560800:goto L560800;
case 0x560802:c.instructions+=6;goto B560802;
case 0x560804:c.instructions+=5;goto B560804;
case 0x560807:c.instructions+=4;goto B560807;
case 0x560809:c.instructions+=3;goto B560809;
case 0x56080a:c.instructions+=2;goto B56080a;
case 0x56080d:c.instructions+=1;goto B56080d;
case 0x560812:goto L560812;
case 0x560816:c.instructions+=4;goto B560816;
case 0x56081a:c.instructions+=3;goto B56081a;
case 0x56081d:c.instructions+=2;goto B56081d;
case 0x56081f:c.instructions+=1;goto B56081f;
case 0x560821:goto L560821;
case 0x560822:c.instructions+=6;goto B560822;
case 0x560823:c.instructions+=5;goto B560823;
case 0x560824:c.instructions+=4;goto B560824;
case 0x560828:c.instructions+=3;goto B560828;
case 0x56082f:c.instructions+=2;goto B56082f;
case 0x560832:c.instructions+=1;goto B560832;
case 0x560833:goto L560833;
case 0x560837:c.instructions+=3;goto B560837;
case 0x560838:c.instructions+=2;goto B560838;
case 0x56083d:c.instructions+=1;goto B56083d;
case 0x560842:goto L560842;
case 0x560844:c.instructions+=1;goto B560844;
case 0x560846:goto L560846;
case 0x560849:c.instructions+=1;goto B560849;
case 0x56084b:goto L56084b;
case 0x56084e:c.instructions+=3;goto B56084e;
case 0x56084f:c.instructions+=2;goto B56084f;
case 0x560851:c.instructions+=1;goto B560851;
case 0x560856:goto L560856;
case 0x560858:c.instructions+=1;goto B560858;
case 0x56085a:goto L56085a;
case 0x56085d:c.instructions+=2;goto B56085d;
case 0x56085f:c.instructions+=1;goto B56085f;
case 0x560861:goto L560861;
case 0x560864:c.instructions+=1;goto B560864;
case 0x560866:goto L560866;
case 0x560868:goto L560868;
case 0x560869:c.instructions+=2;goto B560869;
case 0x56086b:c.instructions+=1;goto B56086b;
case 0x560870:goto L560870;
case 0x560871:c.instructions+=2;goto B560871;
case 0x560874:c.instructions+=1;goto B560874;
case 0x560879:goto L560879;
case 0x56087b:goto L56087b;
case 0x56087e:c.instructions+=3;goto B56087e;
case 0x560880:c.instructions+=2;goto B560880;
case 0x560883:c.instructions+=1;goto B560883;
case 0x560885:goto L560885;
case 0x560888:c.instructions+=1;goto B560888;
case 0x56088a:goto L56088a;
case 0x56088c:goto L56088c;
case 0x56088d:c.instructions+=1;goto B56088d;
case 0x560892:goto L560892;
case 0x560895:c.instructions+=3;goto B560895;
case 0x560897:c.instructions+=2;goto B560897;
case 0x56089b:c.instructions+=1;goto B56089b;
case 0x5608a0:goto L5608a0;
case 0x5608a3:c.instructions+=3;goto B5608a3;
case 0x5608a6:c.instructions+=2;goto B5608a6;
case 0x5608a8:c.instructions+=1;goto B5608a8;
case 0x5608aa:goto L5608aa;
case 0x5608b0:c.instructions+=5;goto B5608b0;
case 0x5608b3:c.instructions+=4;goto B5608b3;
case 0x5608b4:c.instructions+=3;goto B5608b4;
case 0x5608b5:c.instructions+=2;goto B5608b5;
case 0x5608ba:c.instructions+=1;goto B5608ba;
case 0x5608bf:goto L5608bf;
case 0x5608c5:c.instructions+=6;goto B5608c5;
case 0x5608c8:c.instructions+=5;goto B5608c8;
case 0x5608c9:c.instructions+=4;goto B5608c9;
case 0x5608ca:c.instructions+=3;goto B5608ca;
case 0x5608cb:c.instructions+=2;goto B5608cb;
case 0x5608cc:c.instructions+=1;goto B5608cc;
case 0x5608d1:goto L5608d1;
case 0x5608d4:goto L5608d4;
case 0x5608d8:c.instructions+=4;goto B5608d8;
case 0x5608dc:c.instructions+=3;goto B5608dc;
case 0x5608de:c.instructions+=2;goto B5608de;
case 0x5608e6:c.instructions+=1;goto B5608e6;
case 0x5608e8:goto L5608e8;
case 0x5608ea:c.instructions+=6;goto B5608ea;
case 0x5608ec:c.instructions+=5;goto B5608ec;
case 0x5608ef:c.instructions+=4;goto B5608ef;
case 0x5608f1:c.instructions+=3;goto B5608f1;
case 0x5608f2:c.instructions+=2;goto B5608f2;
case 0x5608f5:c.instructions+=1;goto B5608f5;
case 0x5608fa:goto L5608fa;
case 0x5608fe:c.instructions+=4;goto B5608fe;
case 0x560902:c.instructions+=3;goto B560902;
case 0x560905:c.instructions+=2;goto B560905;
case 0x560907:c.instructions+=1;goto B560907;
case 0x560909:goto L560909;
case 0x56090d:c.instructions+=6;goto B56090d;
case 0x56090e:c.instructions+=5;goto B56090e;
case 0x56090f:c.instructions+=4;goto B56090f;
case 0x560910:c.instructions+=3;goto B560910;
case 0x560917:c.instructions+=2;goto B560917;
case 0x56091a:c.instructions+=1;goto B56091a;
case 0x560920:goto L560920;
case 0x560921:c.instructions+=8;goto B560921;
case 0x560923:c.instructions+=7;goto B560923;
case 0x560924:c.instructions+=6;goto B560924;
case 0x560925:c.instructions+=5;goto B560925;
case 0x560927:c.instructions+=4;goto B560927;
case 0x56092a:c.instructions+=3;goto B56092a;
case 0x56092d:c.instructions+=2;goto B56092d;
case 0x56092f:c.instructions+=1;goto B56092f;
case 0x560935:goto L560935;
case 0x560938:c.instructions+=6;goto B560938;
case 0x560939:c.instructions+=5;goto B560939;
case 0x56093c:c.instructions+=4;goto B56093c;
case 0x56093f:c.instructions+=3;goto B56093f;
case 0x560940:c.instructions+=2;goto B560940;
case 0x560943:c.instructions+=1;goto B560943;
case 0x560945:goto L560945;
case 0x560948:c.instructions+=3;goto B560948;
case 0x56094a:c.instructions+=2;goto B56094a;
case 0x56094d:c.instructions+=1;goto B56094d;
case 0x56094f:goto L56094f;
case 0x560952:c.instructions+=1;goto B560952;
case 0x560954:goto L560954;
case 0x560956:goto L560956;
case 0x560959:c.instructions+=1;goto B560959;
case 0x56095b:goto L56095b;
case 0x56095e:c.instructions+=3;goto B56095e;
case 0x560965:c.instructions+=2;goto B560965;
case 0x560968:c.instructions+=1;goto B560968;
case 0x56096a:goto L56096a;
case 0x560970:c.instructions+=2;goto B560970;
case 0x560971:c.instructions+=1;goto B560971;
case 0x560976:goto L560976;
case 0x560978:c.instructions+=1;goto B560978;
case 0x56097d:goto L56097d;
case 0x56097f:goto L56097f;
case 0x560982:c.instructions+=1;goto B560982;
case 0x560984:goto L560984;
case 0x560987:c.instructions+=2;goto B560987;
case 0x560989:c.instructions+=1;goto B560989;
case 0x56098e:goto L56098e;
case 0x560990:c.instructions+=1;goto B560990;
case 0x560992:goto L560992;
case 0x560995:c.instructions+=5;goto B560995;
case 0x560998:c.instructions+=4;goto B560998;
case 0x560999:c.instructions+=3;goto B560999;
case 0x56099b:c.instructions+=2;goto B56099b;
case 0x56099c:c.instructions+=1;goto B56099c;
case 0x5609a1:goto L5609a1;
case 0x5609a4:goto L5609a4;
case 0x5609a6:c.instructions+=1;goto B5609a6;
case 0x5609ab:goto L5609ab;
case 0x5609ae:c.instructions+=2;goto B5609ae;
case 0x5609b1:c.instructions+=1;goto B5609b1;
case 0x5609b7:goto L5609b7;
case 0x5609bd:c.instructions+=11;goto B5609bd;
case 0x5609c3:c.instructions+=10;goto B5609c3;
case 0x5609c6:c.instructions+=9;goto B5609c6;
case 0x5609c9:c.instructions+=8;goto B5609c9;
case 0x5609cf:c.instructions+=7;goto B5609cf;
case 0x5609d2:c.instructions+=6;goto B5609d2;
case 0x5609d8:c.instructions+=5;goto B5609d8;
case 0x5609d9:c.instructions+=4;goto B5609d9;
case 0x5609dc:c.instructions+=3;goto B5609dc;
case 0x5609dd:c.instructions+=2;goto B5609dd;
case 0x5609e2:c.instructions+=1;goto B5609e2;
case 0x5609e7:goto L5609e7;
case 0x5609ed:c.instructions+=3;goto B5609ed;
case 0x5609f0:c.instructions+=2;goto B5609f0;
case 0x5609f3:c.instructions+=1;goto B5609f3;
case 0x5609f5:goto L5609f5;
case 0x5609f6:c.instructions+=1;goto B5609f6;
case 0x5609fb:goto L5609fb;
case 0x560a01:c.instructions+=4;goto B560a01;
case 0x560a04:c.instructions+=3;goto B560a04;
case 0x560a07:c.instructions+=2;goto B560a07;
case 0x560a0a:c.instructions+=1;goto B560a0a;
case 0x560a0c:goto L560a0c;
case 0x560a11:c.instructions+=1;goto B560a11;
case 0x560a13:goto L560a13;
case 0x560a18:goto L560a18;
case 0x560a1e:c.instructions+=6;goto B560a1e;
case 0x560a21:c.instructions+=5;goto B560a21;
case 0x560a23:c.instructions+=4;goto B560a23;
case 0x560a25:c.instructions+=3;goto B560a25;
case 0x560a27:c.instructions+=2;goto B560a27;
case 0x560a28:c.instructions+=1;goto B560a28;
case 0x560a2d:goto L560a2d;
case 0x560a30:c.instructions+=2;goto B560a30;
case 0x560a32:c.instructions+=1;goto B560a32;
case 0x560a37:goto L560a37;
case 0x560a3a:c.instructions+=1;goto B560a3a;
case 0x560a3c:goto L560a3c;
case 0x560a42:c.instructions+=2;goto B560a42;
case 0x560a44:c.instructions+=1;goto B560a44;
case 0x560a49:goto L560a49;
case 0x560a4b:c.instructions+=1;goto B560a4b;
case 0x560a50:goto L560a50;
case 0x560a52:goto L560a52;
case 0x560a55:c.instructions+=1;goto B560a55;
case 0x560a57:goto L560a57;
case 0x560a5d:c.instructions+=2;goto B560a5d;
case 0x560a5f:c.instructions+=1;goto B560a5f;
case 0x560a64:goto L560a64;
case 0x560a66:c.instructions+=1;goto B560a66;
case 0x560a6b:goto L560a6b;
case 0x560a6e:c.instructions+=3;goto B560a6e;
case 0x560a70:c.instructions+=2;goto B560a70;
case 0x560a73:c.instructions+=1;goto B560a73;
case 0x560a75:goto L560a75;
case 0x560a78:c.instructions+=1;goto B560a78;
case 0x560a7a:goto L560a7a;
case 0x560a7c:goto L560a7c;
case 0x560a7f:c.instructions+=1;goto B560a7f;
case 0x560a81:goto L560a81;
case 0x560a87:c.instructions+=2;goto B560a87;
case 0x560a88:c.instructions+=1;goto B560a88;
case 0x560a8d:goto L560a8d;
case 0x560a90:c.instructions+=6;goto B560a90;
case 0x560a91:c.instructions+=5;goto B560a91;
case 0x560a92:c.instructions+=4;goto B560a92;
case 0x560a93:c.instructions+=3;goto B560a93;
case 0x560a95:c.instructions+=2;goto B560a95;
case 0x560a96:c.instructions+=1;goto B560a96;
case 0x560a99:goto L560a99;
case 0x560a9e:goto L560a9e;
case 0x560aa0:c.instructions+=1;goto B560aa0;
case 0x560aa2:goto L560aa2;
case 0x560aa8:c.instructions+=2;goto B560aa8;
case 0x560aa9:c.instructions+=1;goto B560aa9;
case 0x560aae:goto L560aae;
case 0x560ab1:c.instructions+=6;goto B560ab1;
case 0x560ab2:c.instructions+=5;goto B560ab2;
case 0x560ab3:c.instructions+=4;goto B560ab3;
case 0x560ab4:c.instructions+=3;goto B560ab4;
case 0x560ab6:c.instructions+=2;goto B560ab6;
case 0x560ab7:c.instructions+=1;goto B560ab7;
case 0x560aba:goto L560aba;
case 0x560ac0:c.instructions+=2;goto B560ac0;
case 0x560ac1:c.instructions+=1;goto B560ac1;
case 0x560ac6:goto L560ac6;
case 0x560acc:c.instructions+=2;goto B560acc;
case 0x560acd:c.instructions+=1;goto B560acd;
case 0x560ad2:goto L560ad2;
case 0x560ad5:goto L560ad5;
case 0x560ad6:c.instructions+=1;goto B560ad6;
case 0x560ad7:goto L560ad7;
case 0x560ad8:c.instructions+=3;goto B560ad8;
case 0x560ada:c.instructions+=2;goto B560ada;
case 0x560adb:c.instructions+=1;goto B560adb;
case 0x560ae0:goto L560ae0;
case 0x560ae5:c.instructions+=2;goto B560ae5;
case 0x560ae8:c.instructions+=1;goto B560ae8;
case 0x560aea:goto L560aea;
case 0x560aeb:c.instructions+=1;goto B560aeb;
case 0x560aed:goto L560aed;
case 0x560af2:c.instructions+=3;goto B560af2;
case 0x560af3:c.instructions+=2;goto B560af3;
case 0x560af8:c.instructions+=1;goto B560af8;
case 0x560afd:goto L560afd;
case 0x560aff:c.instructions+=1;goto B560aff;
case 0x560b01:goto L560b01;
case 0x560b04:c.instructions+=2;goto B560b04;
case 0x560b06:c.instructions+=1;goto B560b06;
case 0x560b08:goto L560b08;
case 0x560b0b:c.instructions+=2;goto B560b0b;
case 0x560b0d:c.instructions+=1;goto B560b0d;
case 0x560b0f:goto L560b0f;
case 0x560b10:c.instructions+=5;goto B560b10;
case 0x560b12:c.instructions+=4;goto B560b12;
case 0x560b14:c.instructions+=3;goto B560b14;
case 0x560b19:c.instructions+=2;goto B560b19;
case 0x560b1b:c.instructions+=1;goto B560b1b;
case 0x560b20:goto L560b20;
case 0x560b21:goto L560b21;
case 0x560b27:c.instructions+=3;goto B560b27;
case 0x560b28:c.instructions+=2;goto B560b28;
case 0x560b2d:c.instructions+=1;goto B560b2d;
case 0x560b32:goto L560b32;
case 0x560b34:c.instructions+=1;goto B560b34;
case 0x560b36:goto L560b36;
case 0x560b39:c.instructions+=2;goto B560b39;
case 0x560b3b:c.instructions+=1;goto B560b3b;
case 0x560b3d:goto L560b3d;
case 0x560b40:c.instructions+=2;goto B560b40;
case 0x560b42:c.instructions+=1;goto B560b42;
case 0x560b44:goto L560b44;
case 0x560b45:c.instructions+=5;goto B560b45;
case 0x560b47:c.instructions+=4;goto B560b47;
case 0x560b49:c.instructions+=3;goto B560b49;
case 0x560b4e:c.instructions+=2;goto B560b4e;
case 0x560b50:c.instructions+=1;goto B560b50;
case 0x560b55:goto L560b55;
case 0x560b60:goto L560b60;
case 0x560b61:c.instructions+=6;goto B560b61;
case 0x560b62:c.instructions+=5;goto B560b62;
case 0x560b65:c.instructions+=4;goto B560b65;
case 0x560b67:c.instructions+=3;goto B560b67;
case 0x560b69:c.instructions+=2;goto B560b69;
case 0x560b6a:c.instructions+=1;goto B560b6a;
case 0x560b6c:goto L560b6c;
case 0x560b6d:c.instructions+=1;goto B560b6d;
case 0x560b72:goto L560b72;
case 0x560b75:c.instructions+=2;goto B560b75;
case 0x560b77:c.instructions+=1;goto B560b77;
case 0x560b79:goto L560b79;
case 0x560b7e:c.instructions+=2;goto B560b7e;
case 0x560b80:c.instructions+=1;goto B560b80;
case 0x560b85:goto L560b85;
case 0x560b87:c.instructions+=1;goto B560b87;
case 0x560b89:goto L560b89;
case 0x560b8e:c.instructions+=2;goto B560b8e;
case 0x560b90:c.instructions+=1;goto B560b90;
case 0x560b92:goto L560b92;
case 0x560b95:c.instructions+=3;goto B560b95;
case 0x560b96:c.instructions+=2;goto B560b96;
case 0x560b9b:c.instructions+=1;goto B560b9b;
case 0x560ba0:goto L560ba0;
case 0x560ba2:c.instructions+=2;goto B560ba2;
case 0x560ba4:c.instructions+=1;goto B560ba4;
case 0x560ba6:goto L560ba6;
case 0x560ba9:c.instructions+=2;goto B560ba9;
case 0x560bab:c.instructions+=1;goto B560bab;
case 0x560bad:goto L560bad;
case 0x560bb0:goto L560bb0;
case 0x560bb5:c.instructions+=1;goto B560bb5;
case 0x560bba:goto L560bba;
case 0x560bbd:c.instructions+=3;goto B560bbd;
case 0x560bc0:c.instructions+=2;goto B560bc0;
case 0x560bc2:c.instructions+=1;goto B560bc2;
case 0x560bc4:goto L560bc4;
case 0x560bc7:c.instructions+=2;goto B560bc7;
case 0x560bc9:c.instructions+=1;goto B560bc9;
case 0x560bcb:goto L560bcb;
case 0x560bcd:goto L560bcd;
case 0x560bcf:c.instructions+=1;goto B560bcf;
case 0x560bd1:goto L560bd1;
case 0x560bd4:c.instructions+=1;goto B560bd4;
case 0x560bd6:goto L560bd6;
case 0x560bd8:c.instructions+=2;goto B560bd8;
case 0x560bdb:c.instructions+=1;goto B560bdb;
case 0x560be0:goto L560be0;
case 0x560be3:c.instructions+=1;goto B560be3;
case 0x560be6:goto L560be6;
case 0x560be9:goto L560be9;
case 0x560bef:c.instructions+=3;goto B560bef;
case 0x560bf0:c.instructions+=2;goto B560bf0;
case 0x560bf5:c.instructions+=1;goto B560bf5;
case 0x560bfa:goto L560bfa;
case 0x560bfc:c.instructions+=1;goto B560bfc;
case 0x560bfe:goto L560bfe;
case 0x560c01:c.instructions+=2;goto B560c01;
case 0x560c03:c.instructions+=1;goto B560c03;
case 0x560c05:goto L560c05;
case 0x560c08:c.instructions+=2;goto B560c08;
case 0x560c0a:c.instructions+=1;goto B560c0a;
case 0x560c0c:goto L560c0c;
case 0x560c0d:c.instructions+=5;goto B560c0d;
case 0x560c0e:c.instructions+=4;goto B560c0e;
case 0x560c0f:c.instructions+=3;goto B560c0f;
case 0x560c14:c.instructions+=2;goto B560c14;
case 0x560c16:c.instructions+=1;goto B560c16;
case 0x560c1b:goto L560c1b;
case 0x560c21:c.instructions+=2;goto B560c21;
case 0x560c22:c.instructions+=1;goto B560c22;
case 0x560c27:goto L560c27;
case 0x560c2a:c.instructions+=2;goto B560c2a;
case 0x560c2c:c.instructions+=1;goto B560c2c;
case 0x560c2e:goto L560c2e;
case 0x560c31:c.instructions+=3;goto B560c31;
case 0x560c34:c.instructions+=2;goto B560c34;
case 0x560c37:c.instructions+=1;goto B560c37;
case 0x560c3a:goto L560c3a;
case 0x560c3b:c.instructions+=3;goto B560c3b;
case 0x560c3c:c.instructions+=2;goto B560c3c;
case 0x560c3d:c.instructions+=1;goto B560c3d;
case 0x560c40:goto L560c40;
case 0x560c41:c.instructions+=4;goto B560c41;
case 0x560c44:c.instructions+=3;goto B560c44;
case 0x560c46:c.instructions+=2;goto B560c46;
case 0x560c47:c.instructions+=1;goto B560c47;
case 0x560c49:goto L560c49;
case 0x560c4a:c.instructions+=1;goto B560c4a;
case 0x560c4f:goto L560c4f;
case 0x560c52:c.instructions+=2;goto B560c52;
case 0x560c54:c.instructions+=1;goto B560c54;
case 0x560c56:goto L560c56;
case 0x560c5b:c.instructions+=2;goto B560c5b;
case 0x560c5d:c.instructions+=1;goto B560c5d;
case 0x560c62:goto L560c62;
case 0x560c64:c.instructions+=1;goto B560c64;
case 0x560c66:goto L560c66;
case 0x560c6b:c.instructions+=2;goto B560c6b;
case 0x560c6d:c.instructions+=1;goto B560c6d;
case 0x560c6f:goto L560c6f;
case 0x560c72:c.instructions+=3;goto B560c72;
case 0x560c73:c.instructions+=2;goto B560c73;
case 0x560c78:c.instructions+=1;goto B560c78;
case 0x560c7d:goto L560c7d;
case 0x560c7f:c.instructions+=2;goto B560c7f;
case 0x560c81:c.instructions+=1;goto B560c81;
case 0x560c83:goto L560c83;
case 0x560c86:c.instructions+=2;goto B560c86;
case 0x560c88:c.instructions+=1;goto B560c88;
case 0x560c8a:goto L560c8a;
case 0x560c90:goto L560c90;
case 0x560c95:c.instructions+=1;goto B560c95;
case 0x560c9a:goto L560c9a;
case 0x560c9d:c.instructions+=3;goto B560c9d;
case 0x560ca0:c.instructions+=2;goto B560ca0;
case 0x560ca2:c.instructions+=1;goto B560ca2;
case 0x560ca4:goto L560ca4;
case 0x560ca7:c.instructions+=2;goto B560ca7;
case 0x560ca9:c.instructions+=1;goto B560ca9;
case 0x560cab:goto L560cab;
case 0x560cad:goto L560cad;
case 0x560caf:c.instructions+=1;goto B560caf;
case 0x560cb1:goto L560cb1;
case 0x560cb4:c.instructions+=1;goto B560cb4;
case 0x560cb6:goto L560cb6;
case 0x560cb8:c.instructions+=2;goto B560cb8;
case 0x560cbb:c.instructions+=1;goto B560cbb;
case 0x560cc0:goto L560cc0;
case 0x560cc3:c.instructions+=1;goto B560cc3;
case 0x560cca:goto L560cca;
case 0x560cd1:goto L560cd1;
case 0x560cd7:c.instructions+=3;goto B560cd7;
case 0x560cd8:c.instructions+=2;goto B560cd8;
case 0x560cdd:c.instructions+=1;goto B560cdd;
case 0x560ce2:goto L560ce2;
case 0x560ce4:c.instructions+=3;goto B560ce4;
case 0x560ce5:c.instructions+=2;goto B560ce5;
case 0x560ce6:c.instructions+=1;goto B560ce6;
case 0x560ce8:goto L560ce8;
case 0x560ceb:c.instructions+=2;goto B560ceb;
case 0x560ced:c.instructions+=1;goto B560ced;
case 0x560cef:goto L560cef;
case 0x560cf2:c.instructions+=2;goto B560cf2;
case 0x560cf4:c.instructions+=1;goto B560cf4;
case 0x560cf6:goto L560cf6;
case 0x560cf7:c.instructions+=5;goto B560cf7;
case 0x560cf9:c.instructions+=4;goto B560cf9;
case 0x560cfb:c.instructions+=3;goto B560cfb;
case 0x560d00:c.instructions+=2;goto B560d00;
case 0x560d02:c.instructions+=1;goto B560d02;
case 0x560d07:goto L560d07;
case 0x560d0d:c.instructions+=2;goto B560d0d;
case 0x560d0e:c.instructions+=1;goto B560d0e;
case 0x560d13:goto L560d13;
case 0x560d16:c.instructions+=2;goto B560d16;
case 0x560d18:c.instructions+=1;goto B560d18;
case 0x560d1a:goto L560d1a;
case 0x560d1f:c.instructions+=4;goto B560d1f;
case 0x560d22:c.instructions+=3;goto B560d22;
case 0x560d25:c.instructions+=2;goto B560d25;
case 0x560d28:c.instructions+=1;goto B560d28;
case 0x560d2b:goto L560d2b;
case 0x560d30:goto L560d30;
case 0x560d32:c.instructions+=11;goto B560d32;
case 0x560d37:c.instructions+=10;goto B560d37;
case 0x560d3d:c.instructions+=9;goto B560d3d;
case 0x560d3e:c.instructions+=8;goto B560d3e;
case 0x560d45:c.instructions+=7;goto B560d45;
case 0x560d48:c.instructions+=6;goto B560d48;
case 0x560d49:c.instructions+=5;goto B560d49;
case 0x560d4a:c.instructions+=4;goto B560d4a;
case 0x560d4b:c.instructions+=3;goto B560d4b;
case 0x560d50:c.instructions+=2;goto B560d50;
case 0x560d54:c.instructions+=1;goto B560d54;
case 0x560d59:goto L560d59;
case 0x560d5d:c.instructions+=8;goto B560d5d;
case 0x560d61:c.instructions+=7;goto B560d61;
case 0x560d65:c.instructions+=6;goto B560d65;
case 0x560d6d:c.instructions+=5;goto B560d6d;
case 0x560d71:c.instructions+=4;goto B560d71;
case 0x560d75:c.instructions+=3;goto B560d75;
case 0x560d77:c.instructions+=2;goto B560d77;
case 0x560d7f:c.instructions+=1;goto B560d7f;
case 0x560d84:goto L560d84;
case 0x560d8a:c.instructions+=4;goto B560d8a;
case 0x560d8c:c.instructions+=3;goto B560d8c;
case 0x560d8f:c.instructions+=2;goto B560d8f;
case 0x560d91:c.instructions+=1;goto B560d91;
case 0x560d94:goto L560d94;
case 0x560d96:c.instructions+=6;goto B560d96;
case 0x560d98:c.instructions+=5;goto B560d98;
case 0x560d9a:c.instructions+=4;goto B560d9a;
case 0x560d9c:c.instructions+=3;goto B560d9c;
case 0x560d9d:c.instructions+=2;goto B560d9d;
case 0x560da2:c.instructions+=1;goto B560da2;
case 0x560da7:goto L560da7;
case 0x560da9:c.instructions+=2;goto B560da9;
case 0x560dab:c.instructions+=1;goto B560dab;
case 0x560dad:goto L560dad;
case 0x560db0:goto L560db0;
case 0x560db4:c.instructions+=2;goto B560db4;
case 0x560db6:c.instructions+=1;goto B560db6;
case 0x560db8:goto L560db8;
case 0x560dbc:c.instructions+=4;goto B560dbc;
case 0x560dbd:c.instructions+=3;goto B560dbd;
case 0x560dbe:c.instructions+=2;goto B560dbe;
case 0x560dbf:c.instructions+=1;goto B560dbf;
case 0x560dc4:goto L560dc4;
case 0x560dc7:c.instructions+=2;goto B560dc7;
case 0x560dc9:c.instructions+=1;goto B560dc9;
case 0x560dcb:goto L560dcb;
case 0x560dcd:c.instructions+=1;goto B560dcd;
case 0x560dd2:goto L560dd2;
case 0x560dd5:c.instructions+=2;goto B560dd5;
case 0x560dd7:c.instructions+=1;goto B560dd7;
case 0x560dd9:goto L560dd9;
case 0x560ddc:c.instructions+=2;goto B560ddc;
case 0x560de3:c.instructions+=1;goto B560de3;
case 0x560de5:goto L560de5;
case 0x560de7:goto L560de7;
case 0x560deb:c.instructions+=5;goto B560deb;
case 0x560ded:c.instructions+=4;goto B560ded;
case 0x560df1:c.instructions+=3;goto B560df1;
case 0x560df5:c.instructions+=2;goto B560df5;
case 0x560df8:c.instructions+=1;goto B560df8;
case 0x560dfa:goto L560dfa;
case 0x560dfc:c.instructions+=6;goto B560dfc;
case 0x560dfe:c.instructions+=5;goto B560dfe;
case 0x560e00:c.instructions+=4;goto B560e00;
case 0x560e01:c.instructions+=3;goto B560e01;
case 0x560e02:c.instructions+=2;goto B560e02;
case 0x560e07:c.instructions+=1;goto B560e07;
case 0x560e0c:goto L560e0c;
case 0x560e0e:c.instructions+=2;goto B560e0e;
case 0x560e10:c.instructions+=1;goto B560e10;
case 0x560e12:goto L560e12;
case 0x560e16:c.instructions+=2;goto B560e16;
case 0x560e1a:c.instructions+=1;goto B560e1a;
case 0x560e1f:goto L560e1f;
case 0x560e21:c.instructions+=2;goto B560e21;
case 0x560e25:c.instructions+=1;goto B560e25;
case 0x560e2b:goto L560e2b;
case 0x560e30:goto L560e30;
case 0x560e33:c.instructions+=1;goto B560e33;
case 0x560e38:goto L560e38;
case 0x560e3a:c.instructions+=5;goto B560e3a;
case 0x560e3e:c.instructions+=4;goto B560e3e;
case 0x560e3f:c.instructions+=3;goto B560e3f;
case 0x560e40:c.instructions+=2;goto B560e40;
case 0x560e44:c.instructions+=1;goto B560e44;
case 0x560e49:goto L560e49;
case 0x560e4c:c.instructions+=2;goto B560e4c;
case 0x560e4e:c.instructions+=1;goto B560e4e;
case 0x560e54:goto L560e54;
case 0x560e56:c.instructions+=3;goto B560e56;
case 0x560e5a:c.instructions+=2;goto B560e5a;
case 0x560e5c:c.instructions+=1;goto B560e5c;
case 0x560e61:goto L560e61;
case 0x560e63:c.instructions+=5;goto B560e63;
case 0x560e66:c.instructions+=4;goto B560e66;
case 0x560e6a:c.instructions+=3;goto B560e6a;
case 0x560e6c:c.instructions+=2;goto B560e6c;
case 0x560e71:c.instructions+=1;goto B560e71;
case 0x560e73:goto L560e73;
case 0x560e77:c.instructions+=2;goto B560e77;
case 0x560e78:c.instructions+=1;goto B560e78;
case 0x560e7d:goto L560e7d;
case 0x560e81:c.instructions+=25;goto B560e81;
case 0x560e84:c.instructions+=24;goto B560e84;
case 0x560e87:c.instructions+=23;goto B560e87;
case 0x560e89:c.instructions+=22;goto B560e89;
case 0x560e8c:c.instructions+=21;goto B560e8c;
case 0x560e8f:c.instructions+=20;goto B560e8f;
case 0x560e92:c.instructions+=19;goto B560e92;
case 0x560e95:c.instructions+=18;goto B560e95;
case 0x560e98:c.instructions+=17;goto B560e98;
case 0x560e9b:c.instructions+=16;goto B560e9b;
case 0x560e9e:c.instructions+=15;goto B560e9e;
case 0x560ea1:c.instructions+=14;goto B560ea1;
case 0x560ea6:c.instructions+=13;goto B560ea6;
case 0x560ea9:c.instructions+=12;goto B560ea9;
case 0x560eac:c.instructions+=11;goto B560eac;
case 0x560eaf:c.instructions+=10;goto B560eaf;
case 0x560eb2:c.instructions+=9;goto B560eb2;
case 0x560eb5:c.instructions+=8;goto B560eb5;
case 0x560eb9:c.instructions+=7;goto B560eb9;
case 0x560ebd:c.instructions+=6;goto B560ebd;
case 0x560ec0:c.instructions+=5;goto B560ec0;
case 0x560ec6:c.instructions+=4;goto B560ec6;
case 0x560ec9:c.instructions+=3;goto B560ec9;
case 0x560ecb:c.instructions+=2;goto B560ecb;
case 0x560ece:c.instructions+=1;goto B560ece;
case 0x560ed0:goto L560ed0;
case 0x560ed2:goto L560ed2;
case 0x560ed6:c.instructions+=2;goto B560ed6;
case 0x560edb:c.instructions+=1;goto B560edb;
case 0x560edd:goto L560edd;
case 0x560ee0:goto L560ee0;
case 0x560ee3:c.instructions+=1;goto B560ee3;
case 0x560ee8:goto L560ee8;
case 0x560ee9:c.instructions+=3;goto B560ee9;
case 0x560eed:c.instructions+=2;goto B560eed;
case 0x560eee:c.instructions+=1;goto B560eee;
case 0x560ef3:goto L560ef3;
case 0x560ef6:c.instructions+=2;goto B560ef6;
case 0x560ef8:c.instructions+=1;goto B560ef8;
case 0x560efa:goto L560efa;
case 0x560efc:c.instructions+=15;goto B560efc;
case 0x560efe:c.instructions+=14;goto B560efe;
case 0x560f01:c.instructions+=13;goto B560f01;
case 0x560f03:c.instructions+=12;goto B560f03;
case 0x560f05:c.instructions+=11;goto B560f05;
case 0x560f08:c.instructions+=10;goto B560f08;
case 0x560f0b:c.instructions+=9;goto B560f0b;
case 0x560f0e:c.instructions+=8;goto B560f0e;
case 0x560f10:c.instructions+=7;goto B560f10;
case 0x560f13:c.instructions+=6;goto B560f13;
case 0x560f16:c.instructions+=5;goto B560f16;
case 0x560f18:c.instructions+=4;goto B560f18;
case 0x560f1c:c.instructions+=3;goto B560f1c;
case 0x560f1d:c.instructions+=2;goto B560f1d;
case 0x560f1f:c.instructions+=1;goto B560f1f;
case 0x560f21:goto L560f21;
case 0x560f23:c.instructions+=7;goto B560f23;
case 0x560f26:c.instructions+=6;goto B560f26;
case 0x560f29:c.instructions+=5;goto B560f29;
case 0x560f2d:c.instructions+=4;goto B560f2d;
case 0x560f30:c.instructions+=3;goto B560f30;
case 0x560f33:c.instructions+=2;goto B560f33;
case 0x560f34:c.instructions+=1;goto B560f34;
case 0x560f37:goto L560f37;
case 0x560f39:c.instructions+=1;goto B560f39;
case 0x560f3b:goto L560f3b;
case 0x560f3e:c.instructions+=3;goto B560f3e;
case 0x560f43:c.instructions+=2;goto B560f43;
case 0x560f45:c.instructions+=1;goto B560f45;
case 0x560f47:goto L560f47;
case 0x560f4a:c.instructions+=1;goto B560f4a;
case 0x560f51:goto L560f51;
case 0x560f55:c.instructions+=1;goto B560f55;
case 0x560f5b:goto L560f5b;
case 0x560f5d:c.instructions+=2;goto B560f5d;
case 0x560f62:c.instructions+=1;goto B560f62;
case 0x560f67:goto L560f67;
case 0x560f69:c.instructions+=3;goto B560f69;
case 0x560f6d:c.instructions+=2;goto B560f6d;
case 0x560f73:c.instructions+=1;goto B560f73;
case 0x560f75:goto L560f75;
case 0x560f77:c.instructions+=3;goto B560f77;
case 0x560f7c:c.instructions+=2;goto B560f7c;
case 0x560f7e:c.instructions+=1;goto B560f7e;
case 0x560f83:goto L560f83;
case 0x560f87:c.instructions+=1;goto B560f87;
case 0x560f89:goto L560f89;
case 0x560f8f:c.instructions+=2;goto B560f8f;
case 0x560f92:c.instructions+=1;goto B560f92;
case 0x560f97:goto L560f97;
case 0x560f98:c.instructions+=1;goto B560f98;
case 0x560f9d:goto L560f9d;
case 0x560f9e:c.instructions+=2;goto B560f9e;
case 0x560fa0:c.instructions+=1;goto B560fa0;
case 0x560fa5:goto L560fa5;
case 0x560fa6:c.instructions+=1;goto B560fa6;
case 0x560fab:goto L560fab;
case 0x560fae:c.instructions+=2;goto B560fae;
case 0x560fb0:c.instructions+=1;goto B560fb0;
case 0x560fb2:goto L560fb2;
case 0x560fb5:goto L560fb5;
case 0x560fb8:c.instructions+=2;goto B560fb8;
case 0x560fb9:c.instructions+=1;goto B560fb9;
case 0x560fbe:goto L560fbe;
case 0x560fbf:c.instructions+=1;goto B560fbf;
case 0x560fc4:goto L560fc4;
case 0x560fc7:c.instructions+=2;goto B560fc7;
case 0x560fc9:c.instructions+=1;goto B560fc9;
case 0x560fcf:goto L560fcf;
case 0x560fd2:c.instructions+=2;goto B560fd2;
case 0x560fd4:c.instructions+=1;goto B560fd4;
case 0x560fda:goto L560fda;
case 0x560fdd:c.instructions+=4;goto B560fdd;
case 0x560fe0:c.instructions+=3;goto B560fe0;
case 0x560fe8:c.instructions+=2;goto B560fe8;
case 0x560fea:c.instructions+=1;goto B560fea;
case 0x560fec:goto L560fec;
case 0x560fef:c.instructions+=1;goto B560fef;
case 0x560ff1:goto L560ff1;
case 0x560ff3:goto L560ff3;
case 0x560ff5:c.instructions+=1;goto B560ff5;
case 0x560ff7:goto L560ff7;
case 0x560ffa:c.instructions+=1;goto B560ffa;
case 0x560ffc:goto L560ffc;
case 0x560ffe:goto L560ffe;
default:missing_instruction(c.pc);}
B560020:L560020:{c.instructions+=7;NFSU2_TR(0x560020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560021:{NFSU2_TR(0x560021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560022:{NFSU2_TR(0x560022);
__builtin_memmove((R+24),(R+4),4);
}
B560024:{NFSU2_TR(0x560024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56002a:{NFSU2_TR(0x56002a);
w4(R+12,u32(0x1ull));
}
B56002f:{NFSU2_TR(0x56002f);
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
B560031:{NFSU2_TR(0x560031);
if(r1(R+518)){{goto L5600ef;}}
}
B560037:L560037:{c.instructions+=3;NFSU2_TR(0x560037);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56003d:{NFSU2_TR(0x56003d);
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
B56003f:{NFSU2_TR(0x56003f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5600ef;}}
}
B560045:L560045:{c.instructions+=3;NFSU2_TR(0x560045);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560049:{NFSU2_TR(0x560049);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56004b:{NFSU2_TR(0x56004b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56006d;}}
}
B56004d:L56004d:{c.instructions+=8;NFSU2_TR(0x56004d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560053:{NFSU2_TR(0x560053);
__builtin_memmove((R+4),(R+0),4);
}
B560055:{NFSU2_TR(0x560055);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B560058:{NFSU2_TR(0x560058);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B56005f:{NFSU2_TR(0x56005f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560062:{NFSU2_TR(0x560062);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560065:{NFSU2_TR(0x560065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56006b:{NFSU2_TR(0x56006b);
{goto L56008f;}
}
B56006d:L56006d:{c.instructions+=2;NFSU2_TR(0x56006d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560070:{NFSU2_TR(0x560070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56008f;}}
}
B560072:L560072:{c.instructions+=6;NFSU2_TR(0x560072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560078:{NFSU2_TR(0x560078);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff0000ull))));
}
B56007e:{NFSU2_TR(0x56007e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B56007f:{NFSU2_TR(0x56007f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B560082:{NFSU2_TR(0x560082);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B560089:{NFSU2_TR(0x560089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56008f:L56008f:{c.instructions+=3;NFSU2_TR(0x56008f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560095:{NFSU2_TR(0x560095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560097:{NFSU2_TR(0x560097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5600b3;}}
}
B560099:L560099:{c.instructions+=5;NFSU2_TR(0x560099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56009f:{NFSU2_TR(0x56009f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600a0:{NFSU2_TR(0x5600a0);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600a5:{NFSU2_TR(0x5600a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5600ab:{NFSU2_TR(0x5600ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5600b0ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5600b0:L5600b0:{c.instructions+=1;NFSU2_TR(0x5600b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5600b3:L5600b3:{c.instructions+=4;NFSU2_TR(0x5600b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5600b6:{NFSU2_TR(0x5600b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5600bc:{NFSU2_TR(0x5600bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5600c3:{NFSU2_TR(0x5600c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5600c8ull));
TAIL_STATIC(0x52f390u,52f);
}
B5600c8:L5600c8:{c.instructions+=6;NFSU2_TR(0x5600c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5600cb:{NFSU2_TR(0x5600cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600cc:{NFSU2_TR(0x5600cc);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600d1:{NFSU2_TR(0x5600d1);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600d6:{NFSU2_TR(0x5600d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5600d7:{NFSU2_TR(0x5600d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5600dcull));
TAIL_STATIC(0x537c60u,537);
}
B5600dc:L5600dc:{c.instructions+=3;NFSU2_TR(0x5600dc);
__builtin_memmove(gp(0x7fa1fc),(R+12),1);
}
B5600e2:{NFSU2_TR(0x5600e2);
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
B5600e5:{NFSU2_TR(0x5600e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x799c30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5600ef:L5600ef:{c.instructions+=3;NFSU2_TR(0x5600ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5600f0:{NFSU2_TR(0x5600f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5600f1:{NFSU2_TR(0x5600f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560100:L560100:{c.instructions+=10;NFSU2_TR(0x560100);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560101:{NFSU2_TR(0x560101);
__builtin_memmove((R+20),(R+16),4);
}
B560103:{NFSU2_TR(0x560103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560104:{NFSU2_TR(0x560104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560105:{NFSU2_TR(0x560105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560106:{NFSU2_TR(0x560106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B560109:{NFSU2_TR(0x560109);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56010f:{NFSU2_TR(0x56010f);
__builtin_memmove((R+24),(R+4),4);
}
B560111:{NFSU2_TR(0x560111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B560114:{NFSU2_TR(0x560114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560120;}}
}
B560116:L560116:{c.instructions+=2;NFSU2_TR(0x560116);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560119:{NFSU2_TR(0x560119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56011eull));
TAIL_STATIC(0x495900u,495);
}
B56011e:L56011e:{c.instructions+=1;NFSU2_TR(0x56011e);
{goto L560130;}
}
B560120:L560120:{c.instructions+=2;NFSU2_TR(0x560120);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560126:{NFSU2_TR(0x560126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560130;}}
}
B560128:L560128:{c.instructions+=2;NFSU2_TR(0x560128);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56012b:{NFSU2_TR(0x56012b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560130ull));
TAIL_STATIC(0x4958f0u,495);
}
B560130:L560130:{c.instructions+=2;NFSU2_TR(0x560130);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B560133:{NFSU2_TR(0x560133);
if(r1(R+518)){{goto L560247;}}
}
B560139:L560139:{c.instructions+=2;NFSU2_TR(0x560139);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56013f:{NFSU2_TR(0x56013f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560157;}}
}
B560141:L560141:{c.instructions+=3;NFSU2_TR(0x560141);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560147:{NFSU2_TR(0x560147);
__builtin_memmove((R+4),(R+28),4);
}
B560149:{NFSU2_TR(0x560149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56014eull));
TAIL_STATIC(0x527610u,527);
}
B56014e:L56014e:{c.instructions+=2;NFSU2_TR(0x56014e);
__builtin_memmove((R+4),(R+28),4);
}
B560150:{NFSU2_TR(0x560150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560155ull));
TAIL_STATIC(0x495850u,495);
}
B560155:L560155:{c.instructions+=1;NFSU2_TR(0x560155);
{goto L560173;}
}
B560157:L560157:{c.instructions+=2;NFSU2_TR(0x560157);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56015d:{NFSU2_TR(0x56015d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560173;}}
}
B56015f:L56015f:{c.instructions+=3;NFSU2_TR(0x56015f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560165:{NFSU2_TR(0x560165);
__builtin_memmove((R+4),(R+28),4);
}
B560167:{NFSU2_TR(0x560167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56016cull));
TAIL_STATIC(0x527660u,527);
}
B56016c:L56016c:{c.instructions+=2;NFSU2_TR(0x56016c);
__builtin_memmove((R+4),(R+28),4);
}
B56016e:{NFSU2_TR(0x56016e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560173ull));
TAIL_STATIC(0x495810u,495);
}
B560173:L560173:{c.instructions+=2;NFSU2_TR(0x560173);
__builtin_memmove((R+4),(R+24),4);
}
B560175:{NFSU2_TR(0x560175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56017aull));
TAIL_STATIC(0x546f40u,546);
}
B56017a:L56017a:{c.instructions+=3;NFSU2_TR(0x56017a);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56017f:{NFSU2_TR(0x56017f);
w4(R+4,u32(0x8637b0ull));
}
B560184:{NFSU2_TR(0x560184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560189ull));
TAIL_STATIC(0x51bb70u,51b);
}
B560189:L560189:{c.instructions+=2;NFSU2_TR(0x560189);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56018b:{NFSU2_TR(0x56018b);
if(r1(R+518)){{goto L5601a0;}}
}
B56018d:L56018d:{c.instructions+=3;NFSU2_TR(0x56018d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560190:{NFSU2_TR(0x560190);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560192:{NFSU2_TR(0x560192);
if(r1(R+518)){{goto L5601a0;}}
}
B560194:L560194:{c.instructions+=4;NFSU2_TR(0x560194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560197:{NFSU2_TR(0x560197);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56019a:{NFSU2_TR(0x56019a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56019d:{NFSU2_TR(0x56019d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5601a0:L5601a0:{c.instructions+=7;NFSU2_TR(0x5601a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5601a3:{NFSU2_TR(0x5601a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5601a6:{NFSU2_TR(0x5601a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5601a9:{NFSU2_TR(0x5601a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601aa:{NFSU2_TR(0x5601aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601ab:{NFSU2_TR(0x5601ab);
w4(R+4,u32(0x8389d0ull));
}
B5601b0:{NFSU2_TR(0x5601b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5601b5ull));
TAIL_STATIC(0x631d20u,631);
}
B5601b5:L5601b5:{c.instructions+=4;NFSU2_TR(0x5601b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601b7:{NFSU2_TR(0x5601b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601b9:{NFSU2_TR(0x5601b9);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601be:{NFSU2_TR(0x5601be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5601c3ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5601c3:L5601c3:{c.instructions+=5;NFSU2_TR(0x5601c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5601c6:{NFSU2_TR(0x5601c6);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601cb:{NFSU2_TR(0x5601cb);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601d0:{NFSU2_TR(0x5601d0);
w4(R+4,u32(0x8637d0ull));
}
B5601d5:{NFSU2_TR(0x5601d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5601daull));
TAIL_STATIC(0x55b1a0u,55b);
}
B5601da:L5601da:{c.instructions+=3;NFSU2_TR(0x5601da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5601dd:{NFSU2_TR(0x5601dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5601df:{NFSU2_TR(0x5601df);
if(r1(R+518)){{goto L5601e6;}}
}
B5601e1:L5601e1:{c.instructions+=2;NFSU2_TR(0x5601e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5601e4:{NFSU2_TR(0x5601e4);
{goto L5601e8;}
}
B5601e6:L5601e6:{c.instructions+=1;NFSU2_TR(0x5601e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5601e8:L5601e8:{c.instructions+=2;NFSU2_TR(0x5601e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5601eb:{NFSU2_TR(0x5601eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560203;}}
}
B5601ed:L5601ed:{c.instructions+=3;NFSU2_TR(0x5601ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5601f3:{NFSU2_TR(0x5601f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5601f4:{NFSU2_TR(0x5601f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5601f9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5601f9:L5601f9:{c.instructions+=6;NFSU2_TR(0x5601f9);
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
B5601fc:{NFSU2_TR(0x5601fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5601fd:{NFSU2_TR(0x5601fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5601fe:{NFSU2_TR(0x5601fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5601ff:{NFSU2_TR(0x5601ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B560200:{NFSU2_TR(0x560200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560203:L560203:{c.instructions+=3;NFSU2_TR(0x560203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560206:{NFSU2_TR(0x560206);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560208:{NFSU2_TR(0x560208);
if(r1(R+518)){{goto L56020f;}}
}
B56020a:L56020a:{c.instructions+=2;NFSU2_TR(0x56020a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B56020d:{NFSU2_TR(0x56020d);
{goto L560211;}
}
B56020f:L56020f:{c.instructions+=1;NFSU2_TR(0x56020f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560211:L560211:{c.instructions+=2;NFSU2_TR(0x560211);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560214:{NFSU2_TR(0x560214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56022c;}}
}
B560216:L560216:{c.instructions+=3;NFSU2_TR(0x560216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56021c:{NFSU2_TR(0x56021c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56021d:{NFSU2_TR(0x56021d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560222ull));
TAIL_STATIC(0x50ca00u,50c);
}
B560222:L560222:{c.instructions+=6;NFSU2_TR(0x560222);
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
B560225:{NFSU2_TR(0x560225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560226:{NFSU2_TR(0x560226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560227:{NFSU2_TR(0x560227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560228:{NFSU2_TR(0x560228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B560229:{NFSU2_TR(0x560229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56022c:L56022c:{c.instructions+=3;NFSU2_TR(0x56022c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560232:{NFSU2_TR(0x560232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560233:{NFSU2_TR(0x560233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560238ull));
TAIL_STATIC(0x50ca50u,50c);
}
B560238:L560238:{c.instructions+=3;NFSU2_TR(0x560238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56023e:{NFSU2_TR(0x56023e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56023f:{NFSU2_TR(0x56023f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560244ull));
TAIL_STATIC(0x50ca50u,50c);
}
B560244:L560244:{c.instructions+=1;NFSU2_TR(0x560244);
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
B560247:L560247:{c.instructions+=5;NFSU2_TR(0x560247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560248:{NFSU2_TR(0x560248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560249:{NFSU2_TR(0x560249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56024a:{NFSU2_TR(0x56024a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56024b:{NFSU2_TR(0x56024b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560250:L560250:{c.instructions+=14;NFSU2_TR(0x560250);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560252:{NFSU2_TR(0x560252);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560257:{NFSU2_TR(0x560257);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56025d:{NFSU2_TR(0x56025d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56025e:{NFSU2_TR(0x56025e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560265:{NFSU2_TR(0x560265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B560268:{NFSU2_TR(0x560268);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560269:{NFSU2_TR(0x560269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56026a:{NFSU2_TR(0x56026a);
__builtin_memmove((R+24),(R+4),4);
}
B56026c:{NFSU2_TR(0x56026c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56026d:{NFSU2_TR(0x56026d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560270:{NFSU2_TR(0x560270);
__builtin_memmove((R+4),(R+28),4);
}
B560272:{NFSU2_TR(0x560272);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560276:{NFSU2_TR(0x560276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56027bull));
TAIL_STATIC(0x5385c0u,538);
}
B56027b:L56027b:{c.instructions+=4;NFSU2_TR(0x56027b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56027d:{NFSU2_TR(0x56027d);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56027f:{NFSU2_TR(0x56027f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560285:{NFSU2_TR(0x560285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56028aull));
TAIL_STATIC(0x575620u,575);
}
B56028a:L56028a:{c.instructions+=3;NFSU2_TR(0x56028a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56028d:{NFSU2_TR(0x56028d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56028f:{NFSU2_TR(0x56028f);
if(r1(R+518)){{goto L5602b5;}}
}
B560291:L560291:{c.instructions+=11;NFSU2_TR(0x560291);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560294:{NFSU2_TR(0x560294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560297:{NFSU2_TR(0x560297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56029a:{NFSU2_TR(0x56029a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56029d:{NFSU2_TR(0x56029d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5602a0:{NFSU2_TR(0x5602a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5602a4:{NFSU2_TR(0x5602a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5602a7:{NFSU2_TR(0x5602a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5602aa:{NFSU2_TR(0x5602aa);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B5602b0:{NFSU2_TR(0x5602b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5602b3:{NFSU2_TR(0x5602b3);
{goto L5602b7;}
}
B5602b5:L5602b5:{c.instructions+=1;NFSU2_TR(0x5602b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5602b7:L5602b7:{c.instructions+=5;NFSU2_TR(0x5602b7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5602b9:{NFSU2_TR(0x5602b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5602bb:{NFSU2_TR(0x5602bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5602bc:{NFSU2_TR(0x5602bc);
__builtin_memmove((R+4),(R+28),4);
}
B5602be:{NFSU2_TR(0x5602be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5602c3ull));
TAIL_STATIC(0x52ed80u,52e);
}
B5602c3:L5602c3:{c.instructions+=2;NFSU2_TR(0x5602c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5602c5:{NFSU2_TR(0x5602c5);
if(r1(R+518)){{goto L5602dd;}}
}
B5602c7:L5602c7:{c.instructions+=4;NFSU2_TR(0x5602c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5602ca:{NFSU2_TR(0x5602ca);
w4(R+4,u32(0x73c4ec2dull));
}
B5602cf:{NFSU2_TR(0x5602cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5602d1:{NFSU2_TR(0x5602d1);
if(r1(R+518)){{goto L5602dd;}}
}
B5602d3:L5602d3:{c.instructions+=2;NFSU2_TR(0x5602d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5602d6:{NFSU2_TR(0x5602d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5602dd:L5602dd:{c.instructions+=4;NFSU2_TR(0x5602dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5602e3:{NFSU2_TR(0x5602e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5602e6:{NFSU2_TR(0x5602e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5602e8:{NFSU2_TR(0x5602e8);
if(r1(R+518)){{goto L5602ef;}}
}
B5602ea:L5602ea:{c.instructions+=2;NFSU2_TR(0x5602ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5602ed:{NFSU2_TR(0x5602ed);
{goto L5602f1;}
}
B5602ef:L5602ef:{c.instructions+=1;NFSU2_TR(0x5602ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5602f1:L5602f1:{c.instructions+=3;NFSU2_TR(0x5602f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5602f2:{NFSU2_TR(0x5602f2);
__builtin_memmove((R+4),(R+28),4);
}
B5602f4:{NFSU2_TR(0x5602f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5602f9ull));
TAIL_STATIC(0x5386a0u,538);
}
B5602f9:L5602f9:{c.instructions+=14;NFSU2_TR(0x5602f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5602fd:{NFSU2_TR(0x5602fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560301:{NFSU2_TR(0x560301);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560305:{NFSU2_TR(0x560305);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560309:{NFSU2_TR(0x560309);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56030d:{NFSU2_TR(0x56030d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560310:{NFSU2_TR(0x560310);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B560312:{NFSU2_TR(0x560312);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x112ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B560318:{NFSU2_TR(0x560318);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56031c:{NFSU2_TR(0x56031c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560320:{NFSU2_TR(0x560320);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560321:{NFSU2_TR(0x560321);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560322:{NFSU2_TR(0x560322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560323:{NFSU2_TR(0x560323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560328ull));
TAIL_STATIC(0x5204e0u,520);
}
B560328:L560328:{c.instructions+=5;NFSU2_TR(0x560328);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56032c:{NFSU2_TR(0x56032c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B560330:{NFSU2_TR(0x560330);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B560333:{NFSU2_TR(0x560333);
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
B560335:{NFSU2_TR(0x560335);
if(r1(R+518)){{goto L560504;}}
}
B56033b:L56033b:{c.instructions+=2;NFSU2_TR(0x56033b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56033f:{NFSU2_TR(0x56033f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560344ull));
TAIL_STATIC(0x502fd0u,502);
}
B560344:L560344:{c.instructions+=3;NFSU2_TR(0x560344);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560346:{NFSU2_TR(0x560346);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56034a:{NFSU2_TR(0x56034a);
if(r1(R+518)){{goto L56042b;}}
}
B560350:L560350:{c.instructions+=4;NFSU2_TR(0x560350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560353:{NFSU2_TR(0x560353);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560354:{NFSU2_TR(0x560354);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560359:{NFSU2_TR(0x560359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56035eull));
TAIL_STATIC(0x61b500u,61b);
}
B56035e:L56035e:{c.instructions+=3;NFSU2_TR(0x56035e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56035f:{NFSU2_TR(0x56035f);
w4(R+4,u32(0x838980ull));
}
B560364:{NFSU2_TR(0x560364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560369ull));
TAIL_STATIC(0x53b500u,53b);
}
B560369:L560369:{c.instructions+=2;NFSU2_TR(0x560369);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56036b:{NFSU2_TR(0x56036b);
if(r1(R+518)){{goto L56041f;}}
}
B560371:L560371:{c.instructions+=2;NFSU2_TR(0x560371);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560373:{NFSU2_TR(0x560373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560378ull));
TAIL_STATIC(0x575620u,575);
}
B560378:L560378:{c.instructions+=3;NFSU2_TR(0x560378);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56037b:{NFSU2_TR(0x56037b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56037d:{NFSU2_TR(0x56037d);
if(r1(R+518)){{goto L5603a6;}}
}
B56037f:L56037f:{c.instructions+=12;NFSU2_TR(0x56037f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560382:{NFSU2_TR(0x560382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560385:{NFSU2_TR(0x560385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560388:{NFSU2_TR(0x560388);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56038b:{NFSU2_TR(0x56038b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56038e:{NFSU2_TR(0x56038e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560391:{NFSU2_TR(0x560391);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B560395:{NFSU2_TR(0x560395);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560398:{NFSU2_TR(0x560398);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56039b:{NFSU2_TR(0x56039b);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B5603a1:{NFSU2_TR(0x5603a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5603a4:{NFSU2_TR(0x5603a4);
{goto L5603a8;}
}
B5603a6:L5603a6:{c.instructions+=1;NFSU2_TR(0x5603a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5603a8:L5603a8:{c.instructions+=5;NFSU2_TR(0x5603a8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603aa:{NFSU2_TR(0x5603aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603ac:{NFSU2_TR(0x5603ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603ad:{NFSU2_TR(0x5603ad);
__builtin_memmove((R+4),(R+28),4);
}
B5603af:{NFSU2_TR(0x5603af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5603b4ull));
TAIL_STATIC(0x52ed80u,52e);
}
B5603b4:L5603b4:{c.instructions+=2;NFSU2_TR(0x5603b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5603b6:{NFSU2_TR(0x5603b6);
if(r1(R+518)){{goto L5603ce;}}
}
B5603b8:L5603b8:{c.instructions+=4;NFSU2_TR(0x5603b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5603bb:{NFSU2_TR(0x5603bb);
w4(R+4,u32(0x73c4ec2dull));
}
B5603c0:{NFSU2_TR(0x5603c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5603c2:{NFSU2_TR(0x5603c2);
if(r1(R+518)){{goto L5603ce;}}
}
B5603c4:L5603c4:{c.instructions+=2;NFSU2_TR(0x5603c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5603c7:{NFSU2_TR(0x5603c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5603ce:L5603ce:{c.instructions+=6;NFSU2_TR(0x5603ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5603d2:{NFSU2_TR(0x5603d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5603d8:{NFSU2_TR(0x5603d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5603de:{NFSU2_TR(0x5603de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5603e0:{NFSU2_TR(0x5603e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5603e4:{NFSU2_TR(0x5603e4);
if(r1(R+518)){{goto L56041f;}}
}
B5603e6:L5603e6:{c.instructions+=4;NFSU2_TR(0x5603e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5603e9:{NFSU2_TR(0x5603e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603ea:{NFSU2_TR(0x5603ea);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603ef:{NFSU2_TR(0x5603ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5603f4ull));
TAIL_STATIC(0x61b500u,61b);
}
B5603f4:L5603f4:{c.instructions+=5;NFSU2_TR(0x5603f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5603f8:{NFSU2_TR(0x5603f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603f9:{NFSU2_TR(0x5603f9);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5603fe:{NFSU2_TR(0x5603fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560402:{NFSU2_TR(0x560402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560407ull));
TAIL_STATIC(0x61b500u,61b);
}
B560407:L560407:{c.instructions+=2;NFSU2_TR(0x560407);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56040b:{NFSU2_TR(0x56040b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56041f;}}
}
B56040d:L56040d:{c.instructions+=4;NFSU2_TR(0x56040d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560410:{NFSU2_TR(0x560410);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560414:{NFSU2_TR(0x560414);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56041a:{NFSU2_TR(0x56041a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56041f:L56041f:{c.instructions+=3;NFSU2_TR(0x56041f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B560421:{NFSU2_TR(0x560421);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560425:{NFSU2_TR(0x560425);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560350u);}goto L560350;}}
}
B56042b:L56042b:{c.instructions+=4;NFSU2_TR(0x56042b);
__builtin_memmove((R+0),gp(0x8389c8),4);
}
B560430:{NFSU2_TR(0x560430);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B560435:{NFSU2_TR(0x560435);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560439:{NFSU2_TR(0x560439);
if(r1(R+518)){{goto L560457;}}
}
B56043b:L56043b:{c.instructions+=2;NFSU2_TR(0x56043b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56043e:{NFSU2_TR(0x56043e);
__builtin_memmove((R+28),(R+28),4);
}
B560440:L560440:{c.instructions+=2;NFSU2_TR(0x560440);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560443:{NFSU2_TR(0x560443);
if(r1(R+518)){{goto L560450;}}
}
B560445:L560445:{c.instructions+=3;NFSU2_TR(0x560445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B560447:{NFSU2_TR(0x560447);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56044c:{NFSU2_TR(0x56044c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560440u);}goto L560440;}}
}
B56044e:L56044e:{c.instructions+=1;NFSU2_TR(0x56044e);
{goto L560457;}
}
B560450:L560450:{c.instructions+=3;NFSU2_TR(0x560450);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560453:{NFSU2_TR(0x560453);
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
B560455:{NFSU2_TR(0x560455);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560465;}}
}
B560457:L560457:{c.instructions+=4;NFSU2_TR(0x560457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56045a:{NFSU2_TR(0x56045a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56045b:{NFSU2_TR(0x56045b);
w4(R+4,u32(0x8392c0ull));
}
B560460:{NFSU2_TR(0x560460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560465ull));
TAIL_STATIC(0x6102f0u,610);
}
B560465:L560465:{c.instructions+=2;NFSU2_TR(0x560465);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B560469:{NFSU2_TR(0x560469);
if(r1(R+518)){{goto L560488;}}
}
B56046b:L56046b:{c.instructions+=2;NFSU2_TR(0x56046b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560471:{NFSU2_TR(0x560471);
{goto L56048c;}
}
B560473:L560473:{c.instructions+=1;NFSU2_TR(0x560473);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560475:L560475:{c.instructions+=3;NFSU2_TR(0x560475);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560476:{NFSU2_TR(0x560476);
__builtin_memmove((R+4),(R+28),4);
}
B560478:{NFSU2_TR(0x560478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56047dull));
TAIL_STATIC(0x5386a0u,538);
}
B56047d:L56047d:{c.instructions+=3;NFSU2_TR(0x56047d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56047e:{NFSU2_TR(0x56047e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560481:{NFSU2_TR(0x560481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560486ull));
TAIL_STATIC(0x43be80u,43b);
}
B560486:L560486:{c.instructions+=1;NFSU2_TR(0x560486);
{goto L5604ba;}
}
B560488:L560488:{c.instructions+=2;NFSU2_TR(0x560488);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56048a:{NFSU2_TR(0x56048a);
if(r1(R+518)){{goto L5604a4;}}
}
B56048c:L56048c:{c.instructions+=3;NFSU2_TR(0x56048c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56048d:{NFSU2_TR(0x56048d);
__builtin_memmove((R+4),(R+28),4);
}
B56048f:{NFSU2_TR(0x56048f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560494ull));
TAIL_STATIC(0x51f7a0u,51f);
}
B560494:L560494:{c.instructions+=2;NFSU2_TR(0x560494);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560496:{NFSU2_TR(0x560496);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560475u);}goto L560475;}}
}
B560498:L560498:{c.instructions+=3;NFSU2_TR(0x560498);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56049b:{NFSU2_TR(0x56049b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56049d:{NFSU2_TR(0x56049d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560473u);}goto L560473;}}
}
B56049f:L56049f:{c.instructions+=2;NFSU2_TR(0x56049f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5604a2:{NFSU2_TR(0x5604a2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560475u);}goto L560475;}
}
B5604a4:L5604a4:{c.instructions+=3;NFSU2_TR(0x5604a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5604a7:{NFSU2_TR(0x5604a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5604a9:{NFSU2_TR(0x5604a9);
if(r1(R+518)){{goto L5604b0;}}
}
B5604ab:L5604ab:{c.instructions+=2;NFSU2_TR(0x5604ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5604ae:{NFSU2_TR(0x5604ae);
{goto L5604b2;}
}
B5604b0:L5604b0:{c.instructions+=1;NFSU2_TR(0x5604b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5604b2:L5604b2:{c.instructions+=3;NFSU2_TR(0x5604b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604b3:{NFSU2_TR(0x5604b3);
__builtin_memmove((R+4),(R+28),4);
}
B5604b5:{NFSU2_TR(0x5604b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5604baull));
TAIL_STATIC(0x5386a0u,538);
}
B5604ba:L5604ba:{c.instructions+=4;NFSU2_TR(0x5604ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604bc:{NFSU2_TR(0x5604bc);
__builtin_memmove((R+4),(R+28),4);
}
B5604be:{NFSU2_TR(0x5604be);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5604c2:{NFSU2_TR(0x5604c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5604c7ull));
TAIL_STATIC(0x52eb90u,52e);
}
B5604c7:L5604c7:{c.instructions+=7;NFSU2_TR(0x5604c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5604ca:{NFSU2_TR(0x5604ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5604cd:{NFSU2_TR(0x5604cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5604d0:{NFSU2_TR(0x5604d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604d1:{NFSU2_TR(0x5604d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604d2:{NFSU2_TR(0x5604d2);
w4(R+4,u32(0x8389d0ull));
}
B5604d7:{NFSU2_TR(0x5604d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5604dcull));
TAIL_STATIC(0x631d20u,631);
}
B5604dc:L5604dc:{c.instructions+=4;NFSU2_TR(0x5604dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604dd:{NFSU2_TR(0x5604dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604df:{NFSU2_TR(0x5604df);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604e4:{NFSU2_TR(0x5604e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5604e9ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5604e9:L5604e9:{c.instructions+=5;NFSU2_TR(0x5604e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5604ec:{NFSU2_TR(0x5604ec);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604f1:{NFSU2_TR(0x5604f1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5604f6:{NFSU2_TR(0x5604f6);
w4(R+4,u32(0x8637d0ull));
}
B5604fb:{NFSU2_TR(0x5604fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560500ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B560500:L560500:{c.instructions+=1;NFSU2_TR(0x560500);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560504:L560504:{c.instructions+=4;NFSU2_TR(0x560504);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B560508:{NFSU2_TR(0x560508);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56050a:{NFSU2_TR(0x56050a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B560512:{NFSU2_TR(0x560512);
if(r1(R+518)){{goto L560535;}}
}
B560514:L560514:{c.instructions+=7;NFSU2_TR(0x560514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B560516:{NFSU2_TR(0x560516);
__builtin_memmove((R+4),(R+24),4);
}
B560518:{NFSU2_TR(0x560518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56051b:{NFSU2_TR(0x56051b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B56051d:{NFSU2_TR(0x56051d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56051e:{NFSU2_TR(0x56051e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560521:{NFSU2_TR(0x560521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560526ull));
TAIL_STATIC(0x575630u,575);
}
B560526:L560526:{c.instructions+=5;NFSU2_TR(0x560526);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56052a:{NFSU2_TR(0x56052a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56052e:{NFSU2_TR(0x56052e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560531:{NFSU2_TR(0x560531);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560533:{NFSU2_TR(0x560533);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560514u);}goto L560514;}}
}
B560535:L560535:{c.instructions+=7;NFSU2_TR(0x560535);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560539:{NFSU2_TR(0x560539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56053a:{NFSU2_TR(0x56053a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56053b:{NFSU2_TR(0x56053b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56053c:{NFSU2_TR(0x56053c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560543:{NFSU2_TR(0x560543);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B560546:{NFSU2_TR(0x560546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560550:L560550:{c.instructions+=8;NFSU2_TR(0x560550);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560552:{NFSU2_TR(0x560552);
u8 U[4];
w4(U+0,u32(0x7784b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560557:{NFSU2_TR(0x560557);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56055d:{NFSU2_TR(0x56055d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56055e:{NFSU2_TR(0x56055e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560565:{NFSU2_TR(0x560565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560566:{NFSU2_TR(0x560566);
u8 U[4];
w4(U+0,u32(0x16cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56056b:{NFSU2_TR(0x56056b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560570ull));
TAIL_STATIC(0x575620u,575);
}
B560570:L560570:{c.instructions+=5;NFSU2_TR(0x560570);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560573:{NFSU2_TR(0x560573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B560577:{NFSU2_TR(0x560577);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560579:{NFSU2_TR(0x560579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560581:{NFSU2_TR(0x560581);
if(r1(R+518)){{goto L56059e;}}
}
B560583:L560583:{c.instructions+=4;NFSU2_TR(0x560583);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560587:{NFSU2_TR(0x560587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560588:{NFSU2_TR(0x560588);
__builtin_memmove((R+4),(R+0),4);
}
B56058a:{NFSU2_TR(0x56058a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56058full));
TAIL_STATIC(0x55c010u,55c);
}
B56058f:L56058f:{c.instructions+=4;NFSU2_TR(0x56058f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560593:{NFSU2_TR(0x560593);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56059a:{NFSU2_TR(0x56059a);
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
B56059d:{NFSU2_TR(0x56059d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56059e:L56059e:{c.instructions+=5;NFSU2_TR(0x56059e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5605a2:{NFSU2_TR(0x5605a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5605a4:{NFSU2_TR(0x5605a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5605ab:{NFSU2_TR(0x5605ab);
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
B5605ae:{NFSU2_TR(0x5605ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5605b0:L5605b0:{c.instructions+=6;NFSU2_TR(0x5605b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605b1:{NFSU2_TR(0x5605b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605b2:{NFSU2_TR(0x5605b2);
__builtin_memmove((R+24),(R+4),4);
}
B5605b4:{NFSU2_TR(0x5605b4);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5605ba:{NFSU2_TR(0x5605ba);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605bc:{NFSU2_TR(0x5605bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5605c1ull));
TAIL_STATIC(0x458520u,458);
}
B5605c1:L5605c1:{c.instructions+=4;NFSU2_TR(0x5605c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5605c4:{NFSU2_TR(0x5605c4);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605c9:{NFSU2_TR(0x5605c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605ca:{NFSU2_TR(0x5605ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5605cfull));
TAIL_STATIC(0x495520u,495);
}
B5605cf:L5605cf:{c.instructions+=4;NFSU2_TR(0x5605cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5605d2:{NFSU2_TR(0x5605d2);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605d7:{NFSU2_TR(0x5605d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605d8:{NFSU2_TR(0x5605d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5605ddull));
TAIL_STATIC(0x4954e0u,495);
}
B5605dd:L5605dd:{c.instructions+=4;NFSU2_TR(0x5605dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5605e0:{NFSU2_TR(0x5605e0);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605e5:{NFSU2_TR(0x5605e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5605e6:{NFSU2_TR(0x5605e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5605ebull));
TAIL_STATIC(0x4954e0u,495);
}
B5605eb:L5605eb:{c.instructions+=6;NFSU2_TR(0x5605eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5605f1:{NFSU2_TR(0x5605f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5605f3:{NFSU2_TR(0x5605f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5605f6:{NFSU2_TR(0x5605f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5605f8:{NFSU2_TR(0x5605f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5605fe:{NFSU2_TR(0x5605fe);
if(r1(R+518)){{goto L560632;}}
}
B560600:L560600:{c.instructions+=3;NFSU2_TR(0x560600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560601:{NFSU2_TR(0x560601);
w4(R+4,u32(0x8637b0ull));
}
B560606:{NFSU2_TR(0x560606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56060bull));
TAIL_STATIC(0x51bb70u,51b);
}
B56060b:L56060b:{c.instructions+=2;NFSU2_TR(0x56060b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56060d:{NFSU2_TR(0x56060d);
if(r1(R+518)){{goto L56062c;}}
}
B56060f:L56060f:{c.instructions+=3;NFSU2_TR(0x56060f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560612:{NFSU2_TR(0x560612);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560614:{NFSU2_TR(0x560614);
if(r1(R+518)){{goto L56062c;}}
}
B560616:L560616:{c.instructions+=3;NFSU2_TR(0x560616);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560619:{NFSU2_TR(0x560619);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56061b:{NFSU2_TR(0x56061b);
if(r1(R+518)){{goto L56062c;}}
}
B56061d:L56061d:{c.instructions+=6;NFSU2_TR(0x56061d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56061e:{NFSU2_TR(0x56061e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56061f:{NFSU2_TR(0x56061f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560620:{NFSU2_TR(0x560620);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560625:{NFSU2_TR(0x560625);
__builtin_memmove((R+4),(R+0),4);
}
B560627:{NFSU2_TR(0x560627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56062cull));
TAIL_STATIC(0x55b5c0u,55b);
}
B56062c:L56062c:{c.instructions+=1;NFSU2_TR(0x56062c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560632:L560632:{c.instructions+=5;NFSU2_TR(0x560632);
__builtin_memmove(gp(0x8a1c68),(R+12),4);
}
B560638:{NFSU2_TR(0x560638);
__builtin_memmove(gp(0x8363f8),(R+12),4);
}
B56063e:{NFSU2_TR(0x56063e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560644:{NFSU2_TR(0x560644);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560646:{NFSU2_TR(0x560646);
if(r1(R+518)){{goto L560651;}}
}
B560648:L560648:{c.instructions+=2;NFSU2_TR(0x560648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56064b:{NFSU2_TR(0x56064b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560651:L560651:{c.instructions+=4;NFSU2_TR(0x560651);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B560656:{NFSU2_TR(0x560656);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56065b:{NFSU2_TR(0x56065b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56065c:{NFSU2_TR(0x56065c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560661ull));
TAIL_STATIC(0x4954e0u,495);
}
B560661:L560661:{c.instructions+=4;NFSU2_TR(0x560661);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B560667:{NFSU2_TR(0x560667);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56066c:{NFSU2_TR(0x56066c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56066d:{NFSU2_TR(0x56066d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560672ull));
TAIL_STATIC(0x4954e0u,495);
}
B560672:L560672:{c.instructions+=5;NFSU2_TR(0x560672);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B560675:{NFSU2_TR(0x560675);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56067a:{NFSU2_TR(0x56067a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56067f:{NFSU2_TR(0x56067f);
w4(R+4,u32(0x8637d0ull));
}
B560684:{NFSU2_TR(0x560684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560689ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B560689:L560689:{c.instructions+=2;NFSU2_TR(0x560689);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56068e:{NFSU2_TR(0x56068e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560693ull));
TAIL_STATIC(0x52cf60u,52c);
}
B560693:L560693:{c.instructions+=3;NFSU2_TR(0x560693);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560696:{NFSU2_TR(0x560696);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B560698:{NFSU2_TR(0x560698);
if(r1(R+518)){{goto L5606ae;}}
}
B56069a:L56069a:{c.instructions+=3;NFSU2_TR(0x56069a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5606a0:{NFSU2_TR(0x5606a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5606a2:{NFSU2_TR(0x5606a2);
if(r1(R+518)){{goto L5606ae;}}
}
B5606a4:L5606a4:{c.instructions+=2;NFSU2_TR(0x5606a4);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606a9:{NFSU2_TR(0x5606a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5606aeull));
TAIL_STATIC(0x5376f0u,537);
}
B5606ae:L5606ae:{c.instructions+=3;NFSU2_TR(0x5606ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606b0:{NFSU2_TR(0x5606b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606b1:{NFSU2_TR(0x5606b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5606b6ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B5606b6:L5606b6:{c.instructions+=6;NFSU2_TR(0x5606b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5606b9:{NFSU2_TR(0x5606b9);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5606bf:{NFSU2_TR(0x5606bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5606c2:{NFSU2_TR(0x5606c2);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606c7:{NFSU2_TR(0x5606c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606c8:{NFSU2_TR(0x5606c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5606cdull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5606cd:L5606cd:{c.instructions+=4;NFSU2_TR(0x5606cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5606ce:{NFSU2_TR(0x5606ce);
s1(0x83854c,u8(0x1ull));
}
B5606d5:{NFSU2_TR(0x5606d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5606d6:{NFSU2_TR(0x5606d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5606e0:L5606e0:{c.instructions+=15;NFSU2_TR(0x5606e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606e2:{NFSU2_TR(0x5606e2);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606e7:{NFSU2_TR(0x5606e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5606ed:{NFSU2_TR(0x5606ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606ee:{NFSU2_TR(0x5606ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5606f5:{NFSU2_TR(0x5606f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5606f8:{NFSU2_TR(0x5606f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606f9:{NFSU2_TR(0x5606f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606fa:{NFSU2_TR(0x5606fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5606fb:{NFSU2_TR(0x5606fb);
__builtin_memmove((R+28),(R+4),4);
}
B5606fd:{NFSU2_TR(0x5606fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560703:{NFSU2_TR(0x560703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560706:{NFSU2_TR(0x560706);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560709:{NFSU2_TR(0x560709);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56070d:{NFSU2_TR(0x56070d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560712ull));
TAIL_STATIC(0x5385c0u,538);
}
B560712:L560712:{c.instructions+=12;NFSU2_TR(0x560712);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B560714:{NFSU2_TR(0x560714);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560718:{NFSU2_TR(0x560718);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56071c:{NFSU2_TR(0x56071c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560722:{NFSU2_TR(0x560722);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560726:{NFSU2_TR(0x560726);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56072a:{NFSU2_TR(0x56072a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56072b:{NFSU2_TR(0x56072b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56072f:{NFSU2_TR(0x56072f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560730:{NFSU2_TR(0x560730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560731:{NFSU2_TR(0x560731);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560735:{NFSU2_TR(0x560735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56073aull));
TAIL_STATIC(0x539960u,539);
}
B56073a:L56073a:{c.instructions+=6;NFSU2_TR(0x56073a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56073e:{NFSU2_TR(0x56073e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560742:{NFSU2_TR(0x560742);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B560745:{NFSU2_TR(0x560745);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B560747:{NFSU2_TR(0x560747);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56074b:{NFSU2_TR(0x56074b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56076c;}}
}
B56074d:L56074d:{c.instructions+=2;NFSU2_TR(0x56074d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B560755:{NFSU2_TR(0x560755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56075aull));
TAIL_STATIC(0x4def30u,4de);
}
B56075a:L56075a:{c.instructions+=7;NFSU2_TR(0x56075a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56075b:{NFSU2_TR(0x56075b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56075c:{NFSU2_TR(0x56075c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56075d:{NFSU2_TR(0x56075d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560761:{NFSU2_TR(0x560761);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560768:{NFSU2_TR(0x560768);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56076b:{NFSU2_TR(0x56076b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56076c:L56076c:{c.instructions+=1;NFSU2_TR(0x56076c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560771ull));
TAIL_STATIC(0x502fd0u,502);
}
B560771:L560771:{c.instructions+=3;NFSU2_TR(0x560771);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560773:{NFSU2_TR(0x560773);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560777:{NFSU2_TR(0x560777);
if(r1(R+518)){{goto L5607df;}}
}
B560779:L560779:{c.instructions+=1;NFSU2_TR(0x560779);
__builtin_memmove((R+16),(R+16),4);
}
B560780:L560780:{c.instructions+=2;NFSU2_TR(0x560780);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560782:{NFSU2_TR(0x560782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560787ull));
TAIL_STATIC(0x575620u,575);
}
B560787:L560787:{c.instructions+=3;NFSU2_TR(0x560787);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56078a:{NFSU2_TR(0x56078a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56078c:{NFSU2_TR(0x56078c);
if(r1(R+518)){{goto L5607b5;}}
}
B56078e:L56078e:{c.instructions+=12;NFSU2_TR(0x56078e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560791:{NFSU2_TR(0x560791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560794:{NFSU2_TR(0x560794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560797:{NFSU2_TR(0x560797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56079a:{NFSU2_TR(0x56079a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56079d:{NFSU2_TR(0x56079d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5607a0:{NFSU2_TR(0x5607a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5607a4:{NFSU2_TR(0x5607a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5607a7:{NFSU2_TR(0x5607a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5607aa:{NFSU2_TR(0x5607aa);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B5607b0:{NFSU2_TR(0x5607b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5607b3:{NFSU2_TR(0x5607b3);
{goto L5607b7;}
}
B5607b5:L5607b5:{c.instructions+=1;NFSU2_TR(0x5607b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5607b7:L5607b7:{c.instructions+=5;NFSU2_TR(0x5607b7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5607b9:{NFSU2_TR(0x5607b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5607bb:{NFSU2_TR(0x5607bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5607bc:{NFSU2_TR(0x5607bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5607bf:{NFSU2_TR(0x5607bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5607c4ull));
TAIL_STATIC(0x52ed80u,52e);
}
B5607c4:L5607c4:{c.instructions+=7;NFSU2_TR(0x5607c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5607ca:{NFSU2_TR(0x5607ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5607ce:{NFSU2_TR(0x5607ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5607cf:{NFSU2_TR(0x5607cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5607d5:{NFSU2_TR(0x5607d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5607d7:{NFSU2_TR(0x5607d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5607d9:{NFSU2_TR(0x5607d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560780u);}goto L560780;}}
}
B5607db:L5607db:{c.instructions+=1;NFSU2_TR(0x5607db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5607df:L5607df:{c.instructions+=4;NFSU2_TR(0x5607df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5607e2:{NFSU2_TR(0x5607e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5607e5:{NFSU2_TR(0x5607e5);
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
B5607e7:{NFSU2_TR(0x5607e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560833;}}
}
B5607e9:L5607e9:{c.instructions+=4;NFSU2_TR(0x5607e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5607ed:{NFSU2_TR(0x5607ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5607ef:{NFSU2_TR(0x5607ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5607f7:{NFSU2_TR(0x5607f7);
if(r1(R+518)){{goto L560909;}}
}
B5607fd:L5607fd:{c.instructions+=1;NFSU2_TR(0x5607fd);
__builtin_memmove((R+4),(R+4),4);
}
B560800:L560800:{c.instructions+=7;NFSU2_TR(0x560800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B560802:{NFSU2_TR(0x560802);
__builtin_memmove((R+4),(R+24),4);
}
B560804:{NFSU2_TR(0x560804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560807:{NFSU2_TR(0x560807);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B560809:{NFSU2_TR(0x560809);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56080a:{NFSU2_TR(0x56080a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56080d:{NFSU2_TR(0x56080d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560812ull));
TAIL_STATIC(0x575630u,575);
}
B560812:L560812:{c.instructions+=5;NFSU2_TR(0x560812);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560816:{NFSU2_TR(0x560816);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56081a:{NFSU2_TR(0x56081a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56081d:{NFSU2_TR(0x56081d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56081f:{NFSU2_TR(0x56081f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560800u);}goto L560800;}}
}
B560821:L560821:{c.instructions+=7;NFSU2_TR(0x560821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560822:{NFSU2_TR(0x560822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560823:{NFSU2_TR(0x560823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560824:{NFSU2_TR(0x560824);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560828:{NFSU2_TR(0x560828);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56082f:{NFSU2_TR(0x56082f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B560832:{NFSU2_TR(0x560832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560833:L560833:{c.instructions+=4;NFSU2_TR(0x560833);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560837:{NFSU2_TR(0x560837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560838:{NFSU2_TR(0x560838);
w4(R+4,u32(0x8392c0ull));
}
B56083d:{NFSU2_TR(0x56083d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560842ull));
TAIL_STATIC(0x6102f0u,610);
}
B560842:L560842:{c.instructions+=2;NFSU2_TR(0x560842);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560844:{NFSU2_TR(0x560844);
if(r1(R+518)){{goto L56087b;}}
}
B560846:L560846:{c.instructions+=2;NFSU2_TR(0x560846);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560849:{NFSU2_TR(0x560849);
if(r1(R+518)){{goto L56087b;}}
}
B56084b:L56084b:{c.instructions+=4;NFSU2_TR(0x56084b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56084e:{NFSU2_TR(0x56084e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56084f:{NFSU2_TR(0x56084f);
__builtin_memmove((R+4),(R+24),4);
}
B560851:{NFSU2_TR(0x560851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560856ull));
TAIL_STATIC(0x51f7a0u,51f);
}
B560856:L560856:{c.instructions+=2;NFSU2_TR(0x560856);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560858:{NFSU2_TR(0x560858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560868;}}
}
B56085a:L56085a:{c.instructions+=3;NFSU2_TR(0x56085a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56085d:{NFSU2_TR(0x56085d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56085f:{NFSU2_TR(0x56085f);
if(r1(R+518)){{goto L560866;}}
}
B560861:L560861:{c.instructions+=2;NFSU2_TR(0x560861);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B560864:{NFSU2_TR(0x560864);
{goto L560868;}
}
B560866:L560866:{c.instructions+=1;NFSU2_TR(0x560866);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560868:L560868:{c.instructions+=3;NFSU2_TR(0x560868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560869:{NFSU2_TR(0x560869);
__builtin_memmove((R+4),(R+24),4);
}
B56086b:{NFSU2_TR(0x56086b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560870ull));
TAIL_STATIC(0x5386a0u,538);
}
B560870:L560870:{c.instructions+=3;NFSU2_TR(0x560870);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560871:{NFSU2_TR(0x560871);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560874:{NFSU2_TR(0x560874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560879ull));
TAIL_STATIC(0x43be80u,43b);
}
B560879:L560879:{c.instructions+=1;NFSU2_TR(0x560879);
{goto L560892;}
}
B56087b:L56087b:{c.instructions+=4;NFSU2_TR(0x56087b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56087e:{NFSU2_TR(0x56087e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560880:{NFSU2_TR(0x560880);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560883:{NFSU2_TR(0x560883);
if(r1(R+518)){{goto L56088a;}}
}
B560885:L560885:{c.instructions+=2;NFSU2_TR(0x560885);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B560888:{NFSU2_TR(0x560888);
{goto L56088c;}
}
B56088a:L56088a:{c.instructions+=1;NFSU2_TR(0x56088a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56088c:L56088c:{c.instructions+=2;NFSU2_TR(0x56088c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56088d:{NFSU2_TR(0x56088d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560892ull));
TAIL_STATIC(0x5386a0u,538);
}
B560892:L560892:{c.instructions+=4;NFSU2_TR(0x560892);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560895:{NFSU2_TR(0x560895);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560897:{NFSU2_TR(0x560897);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56089b:{NFSU2_TR(0x56089b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5608a0ull));
TAIL_STATIC(0x52eb90u,52e);
}
B5608a0:L5608a0:{c.instructions+=4;NFSU2_TR(0x5608a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608a3:{NFSU2_TR(0x5608a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608a6:{NFSU2_TR(0x5608a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5608a8:{NFSU2_TR(0x5608a8);
if(r1(R+518)){{goto L5608d4;}}
}
B5608aa:L5608aa:{c.instructions+=6;NFSU2_TR(0x5608aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5608b0:{NFSU2_TR(0x5608b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5608b3:{NFSU2_TR(0x5608b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608b4:{NFSU2_TR(0x5608b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608b5:{NFSU2_TR(0x5608b5);
w4(R+4,u32(0x838980ull));
}
B5608ba:{NFSU2_TR(0x5608ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5608bfull));
TAIL_STATIC(0x55c170u,55c);
}
B5608bf:L5608bf:{c.instructions+=7;NFSU2_TR(0x5608bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608c5:{NFSU2_TR(0x5608c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5608c8:{NFSU2_TR(0x5608c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608c9:{NFSU2_TR(0x5608c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608ca:{NFSU2_TR(0x5608ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608cb:{NFSU2_TR(0x5608cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608cc:{NFSU2_TR(0x5608cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5608d1ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B5608d1:L5608d1:{c.instructions+=1;NFSU2_TR(0x5608d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5608d4:L5608d4:{c.instructions+=5;NFSU2_TR(0x5608d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608d8:{NFSU2_TR(0x5608d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5608dc:{NFSU2_TR(0x5608dc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5608de:{NFSU2_TR(0x5608de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5608e6:{NFSU2_TR(0x5608e6);
if(r1(R+518)){{goto L560909;}}
}
B5608e8:L5608e8:{c.instructions+=7;NFSU2_TR(0x5608e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5608ea:{NFSU2_TR(0x5608ea);
__builtin_memmove((R+8),(R+0),4);
}
B5608ec:{NFSU2_TR(0x5608ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608ef:{NFSU2_TR(0x5608ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5608f1:{NFSU2_TR(0x5608f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5608f2:{NFSU2_TR(0x5608f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5608f5:{NFSU2_TR(0x5608f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5608faull));
TAIL_STATIC(0x575630u,575);
}
B5608fa:L5608fa:{c.instructions+=5;NFSU2_TR(0x5608fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5608fe:{NFSU2_TR(0x5608fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560902:{NFSU2_TR(0x560902);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560905:{NFSU2_TR(0x560905);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560907:{NFSU2_TR(0x560907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5608e8u);}goto L5608e8;}}
}
B560909:L560909:{c.instructions+=7;NFSU2_TR(0x560909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56090d:{NFSU2_TR(0x56090d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56090e:{NFSU2_TR(0x56090e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56090f:{NFSU2_TR(0x56090f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560910:{NFSU2_TR(0x560910);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560917:{NFSU2_TR(0x560917);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56091a:{NFSU2_TR(0x56091a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560920:L560920:{c.instructions+=9;NFSU2_TR(0x560920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560921:{NFSU2_TR(0x560921);
__builtin_memmove((R+20),(R+16),4);
}
B560923:{NFSU2_TR(0x560923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560924:{NFSU2_TR(0x560924);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560925:{NFSU2_TR(0x560925);
__builtin_memmove((R+24),(R+4),4);
}
B560927:{NFSU2_TR(0x560927);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56092a:{NFSU2_TR(0x56092a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56092d:{NFSU2_TR(0x56092d);
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
B56092f:{NFSU2_TR(0x56092f);
if(r1(R+518)){{goto L560ad7;}}
}
B560935:L560935:{c.instructions+=7;NFSU2_TR(0x560935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560938:{NFSU2_TR(0x560938);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560939:{NFSU2_TR(0x560939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56093c:{NFSU2_TR(0x56093c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56093f:{NFSU2_TR(0x56093f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560940:{NFSU2_TR(0x560940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560943:{NFSU2_TR(0x560943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56097f;}}
}
B560945:L560945:{c.instructions+=4;NFSU2_TR(0x560945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560948:{NFSU2_TR(0x560948);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56094a:{NFSU2_TR(0x56094a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56094d:{NFSU2_TR(0x56094d);
if(r1(R+518)){{goto L560954;}}
}
B56094f:L56094f:{c.instructions+=2;NFSU2_TR(0x56094f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B560952:{NFSU2_TR(0x560952);
{goto L560956;}
}
B560954:L560954:{c.instructions+=1;NFSU2_TR(0x560954);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560956:L560956:{c.instructions+=2;NFSU2_TR(0x560956);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560959:{NFSU2_TR(0x560959);
if(r1(R+518)){{goto L560976;}}
}
B56095b:L56095b:{c.instructions+=4;NFSU2_TR(0x56095b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56095e:{NFSU2_TR(0x56095e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B560965:{NFSU2_TR(0x560965);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560968:{NFSU2_TR(0x560968);
if(r1(R+518)){{goto L560976;}}
}
B56096a:L56096a:{c.instructions+=3;NFSU2_TR(0x56096a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B560970:{NFSU2_TR(0x560970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560971:{NFSU2_TR(0x560971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560976ull));
TAIL_STATIC(0x458520u,458);
}
B560976:L560976:{c.instructions+=2;NFSU2_TR(0x560976);
__builtin_memmove((R+4),(R+28),4);
}
B560978:{NFSU2_TR(0x560978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56097dull));
TAIL_STATIC(0x495900u,495);
}
B56097d:L56097d:{c.instructions+=1;NFSU2_TR(0x56097d);
{goto L5609ab;}
}
B56097f:L56097f:{c.instructions+=2;NFSU2_TR(0x56097f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560982:{NFSU2_TR(0x560982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5609ab;}}
}
B560984:L560984:{c.instructions+=3;NFSU2_TR(0x560984);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560987:{NFSU2_TR(0x560987);
__builtin_memmove((R+4),(R+28),4);
}
B560989:{NFSU2_TR(0x560989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56098eull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B56098e:L56098e:{c.instructions+=2;NFSU2_TR(0x56098e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B560990:{NFSU2_TR(0x560990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5609a4;}}
}
B560992:L560992:{c.instructions+=6;NFSU2_TR(0x560992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560995:{NFSU2_TR(0x560995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560998:{NFSU2_TR(0x560998);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560999:{NFSU2_TR(0x560999);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56099b:{NFSU2_TR(0x56099b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56099c:{NFSU2_TR(0x56099c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5609a1ull));
TAIL_STATIC(0x50d150u,50d);
}
B5609a1:L5609a1:{c.instructions+=1;NFSU2_TR(0x5609a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5609a4:L5609a4:{c.instructions+=2;NFSU2_TR(0x5609a4);
__builtin_memmove((R+4),(R+28),4);
}
B5609a6:{NFSU2_TR(0x5609a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5609abull));
TAIL_STATIC(0x4958f0u,495);
}
B5609ab:L5609ab:{c.instructions+=3;NFSU2_TR(0x5609ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5609ae:{NFSU2_TR(0x5609ae);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5609b1:{NFSU2_TR(0x5609b1);
if(r1(R+518)){{goto L560ad5;}}
}
B5609b7:L5609b7:{c.instructions+=12;NFSU2_TR(0x5609b7);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5609bd:{NFSU2_TR(0x5609bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5609c3:{NFSU2_TR(0x5609c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5609c6:{NFSU2_TR(0x5609c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5609c9:{NFSU2_TR(0x5609c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5609cf:{NFSU2_TR(0x5609cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5609d2:{NFSU2_TR(0x5609d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5609d8:{NFSU2_TR(0x5609d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5609d9:{NFSU2_TR(0x5609d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5609dc:{NFSU2_TR(0x5609dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5609dd:{NFSU2_TR(0x5609dd);
w4(R+4,u32(0x838980ull));
}
B5609e2:{NFSU2_TR(0x5609e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5609e7ull));
TAIL_STATIC(0x55c170u,55c);
}
B5609e7:L5609e7:{c.instructions+=4;NFSU2_TR(0x5609e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5609ed:{NFSU2_TR(0x5609ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5609f0:{NFSU2_TR(0x5609f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5609f3:{NFSU2_TR(0x5609f3);
if(r1(R+518)){{goto L560a18;}}
}
B5609f5:L5609f5:{c.instructions+=2;NFSU2_TR(0x5609f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5609f6:{NFSU2_TR(0x5609f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5609fbull));
TAIL_STATIC(0x4c18b0u,4c1);
}
B5609fb:L5609fb:{c.instructions+=5;NFSU2_TR(0x5609fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560a01:{NFSU2_TR(0x560a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560a04:{NFSU2_TR(0x560a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560a07:{NFSU2_TR(0x560a07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560a0a:{NFSU2_TR(0x560a0a);
if(r1(R+518)){{goto L560a13;}}
}
B560a0c:L560a0c:{c.instructions+=2;NFSU2_TR(0x560a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560a11:{NFSU2_TR(0x560a11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560a18;}}
}
B560a13:L560a13:{c.instructions+=1;NFSU2_TR(0x560a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a18ull));
TAIL_STATIC(0x438030u,438);
}
B560a18:L560a18:{c.instructions+=7;NFSU2_TR(0x560a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560a1e:{NFSU2_TR(0x560a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560a21:{NFSU2_TR(0x560a21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560a23:{NFSU2_TR(0x560a23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560a25:{NFSU2_TR(0x560a25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560a27:{NFSU2_TR(0x560a27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560a28:{NFSU2_TR(0x560a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a2dull));
TAIL_STATIC(0x4c2100u,4c2);
}
B560a2d:L560a2d:{c.instructions+=3;NFSU2_TR(0x560a2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B560a30:{NFSU2_TR(0x560a30);
__builtin_memmove((R+4),(R+24),4);
}
B560a32:{NFSU2_TR(0x560a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a37ull));
TAIL_STATIC(0x547250u,547);
}
B560a37:L560a37:{c.instructions+=2;NFSU2_TR(0x560a37);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560a3a:{NFSU2_TR(0x560a3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560a52;}}
}
B560a3c:L560a3c:{c.instructions+=3;NFSU2_TR(0x560a3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560a42:{NFSU2_TR(0x560a42);
__builtin_memmove((R+4),(R+28),4);
}
B560a44:{NFSU2_TR(0x560a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a49ull));
TAIL_STATIC(0x527610u,527);
}
B560a49:L560a49:{c.instructions+=2;NFSU2_TR(0x560a49);
__builtin_memmove((R+4),(R+28),4);
}
B560a4b:{NFSU2_TR(0x560a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a50ull));
TAIL_STATIC(0x495850u,495);
}
B560a50:L560a50:{c.instructions+=1;NFSU2_TR(0x560a50);
{goto L560a6b;}
}
B560a52:L560a52:{c.instructions+=2;NFSU2_TR(0x560a52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560a55:{NFSU2_TR(0x560a55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560a6b;}}
}
B560a57:L560a57:{c.instructions+=3;NFSU2_TR(0x560a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560a5d:{NFSU2_TR(0x560a5d);
__builtin_memmove((R+4),(R+28),4);
}
B560a5f:{NFSU2_TR(0x560a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a64ull));
TAIL_STATIC(0x527660u,527);
}
B560a64:L560a64:{c.instructions+=2;NFSU2_TR(0x560a64);
__builtin_memmove((R+4),(R+28),4);
}
B560a66:{NFSU2_TR(0x560a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a6bull));
TAIL_STATIC(0x495810u,495);
}
B560a6b:L560a6b:{c.instructions+=4;NFSU2_TR(0x560a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560a6e:{NFSU2_TR(0x560a6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560a70:{NFSU2_TR(0x560a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B560a73:{NFSU2_TR(0x560a73);
if(r1(R+518)){{goto L560a7a;}}
}
B560a75:L560a75:{c.instructions+=2;NFSU2_TR(0x560a75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B560a78:{NFSU2_TR(0x560a78);
{goto L560a7c;}
}
B560a7a:L560a7a:{c.instructions+=1;NFSU2_TR(0x560a7a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560a7c:L560a7c:{c.instructions+=2;NFSU2_TR(0x560a7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560a7f:{NFSU2_TR(0x560a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560a99;}}
}
B560a81:L560a81:{c.instructions+=3;NFSU2_TR(0x560a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560a87:{NFSU2_TR(0x560a87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560a88:{NFSU2_TR(0x560a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a8dull));
TAIL_STATIC(0x50ca00u,50c);
}
B560a8d:L560a8d:{c.instructions+=7;NFSU2_TR(0x560a8d);
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
B560a90:{NFSU2_TR(0x560a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560a91:{NFSU2_TR(0x560a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560a92:{NFSU2_TR(0x560a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560a93:{NFSU2_TR(0x560a93);
__builtin_memmove((R+16),(R+20),4);
}
B560a95:{NFSU2_TR(0x560a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B560a96:{NFSU2_TR(0x560a96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560a99:L560a99:{c.instructions+=1;NFSU2_TR(0x560a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560a9eull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B560a9e:L560a9e:{c.instructions+=2;NFSU2_TR(0x560a9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B560aa0:{NFSU2_TR(0x560aa0);
if(r1(R+518)){{goto L560aba;}}
}
B560aa2:L560aa2:{c.instructions+=3;NFSU2_TR(0x560aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560aa8:{NFSU2_TR(0x560aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560aa9:{NFSU2_TR(0x560aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560aaeull));
TAIL_STATIC(0x50ca00u,50c);
}
B560aae:L560aae:{c.instructions+=7;NFSU2_TR(0x560aae);
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
B560ab1:{NFSU2_TR(0x560ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560ab2:{NFSU2_TR(0x560ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560ab3:{NFSU2_TR(0x560ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560ab4:{NFSU2_TR(0x560ab4);
__builtin_memmove((R+16),(R+20),4);
}
B560ab6:{NFSU2_TR(0x560ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B560ab7:{NFSU2_TR(0x560ab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560aba:L560aba:{c.instructions+=3;NFSU2_TR(0x560aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560ac0:{NFSU2_TR(0x560ac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560ac1:{NFSU2_TR(0x560ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ac6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B560ac6:L560ac6:{c.instructions+=3;NFSU2_TR(0x560ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560acc:{NFSU2_TR(0x560acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560acd:{NFSU2_TR(0x560acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ad2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B560ad2:L560ad2:{c.instructions+=1;NFSU2_TR(0x560ad2);
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
B560ad5:L560ad5:{c.instructions+=2;NFSU2_TR(0x560ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560ad6:{NFSU2_TR(0x560ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560ad7:L560ad7:{c.instructions+=4;NFSU2_TR(0x560ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560ad8:{NFSU2_TR(0x560ad8);
__builtin_memmove((R+16),(R+20),4);
}
B560ada:{NFSU2_TR(0x560ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B560adb:{NFSU2_TR(0x560adb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560ae0:L560ae0:{c.instructions+=3;NFSU2_TR(0x560ae0);
__builtin_memmove((R+0),gp(0x838998),4);
}
B560ae5:{NFSU2_TR(0x560ae5);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B560ae8:{NFSU2_TR(0x560ae8);
if(r1(R+518)){{goto L560b21;}}
}
B560aea:L560aea:{c.instructions+=2;NFSU2_TR(0x560aea);
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
B560aeb:{NFSU2_TR(0x560aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560b55;}}
}
B560aed:L560aed:{c.instructions+=4;NFSU2_TR(0x560aed);
__builtin_memmove((R+0),gp(0x7fa200),4);
}
B560af2:{NFSU2_TR(0x560af2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560af3:{NFSU2_TR(0x560af3);
w4(R+4,u32(0x8637b0ull));
}
B560af8:{NFSU2_TR(0x560af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560afdull));
TAIL_STATIC(0x51bb70u,51b);
}
B560afd:L560afd:{c.instructions+=2;NFSU2_TR(0x560afd);
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
B560aff:{NFSU2_TR(0x560aff);
if(r1(R+518)){{goto L560b55;}}
}
B560b01:L560b01:{c.instructions+=3;NFSU2_TR(0x560b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560b04:{NFSU2_TR(0x560b04);
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
B560b06:{NFSU2_TR(0x560b06);
if(r1(R+518)){{goto L560b55;}}
}
B560b08:L560b08:{c.instructions+=3;NFSU2_TR(0x560b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560b0b:{NFSU2_TR(0x560b0b);
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
B560b0d:{NFSU2_TR(0x560b0d);
if(r1(R+518)){{goto L560b55;}}
}
B560b0f:L560b0f:{c.instructions+=6;NFSU2_TR(0x560b0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b10:{NFSU2_TR(0x560b10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b12:{NFSU2_TR(0x560b12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b14:{NFSU2_TR(0x560b14);
u8 U[4];
w4(U+0,u32(0x7fd238feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b19:{NFSU2_TR(0x560b19);
__builtin_memmove((R+4),(R+0),4);
}
B560b1b:{NFSU2_TR(0x560b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560b20ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B560b20:L560b20:{c.instructions+=1;NFSU2_TR(0x560b20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560b21:L560b21:{c.instructions+=4;NFSU2_TR(0x560b21);
__builtin_memmove((R+4),gp(0x7fa200),4);
}
B560b27:{NFSU2_TR(0x560b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b28:{NFSU2_TR(0x560b28);
w4(R+4,u32(0x8637b0ull));
}
B560b2d:{NFSU2_TR(0x560b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560b32ull));
TAIL_STATIC(0x51bb70u,51b);
}
B560b32:L560b32:{c.instructions+=2;NFSU2_TR(0x560b32);
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
B560b34:{NFSU2_TR(0x560b34);
if(r1(R+518)){{goto L560b55;}}
}
B560b36:L560b36:{c.instructions+=3;NFSU2_TR(0x560b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560b39:{NFSU2_TR(0x560b39);
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
B560b3b:{NFSU2_TR(0x560b3b);
if(r1(R+518)){{goto L560b55;}}
}
B560b3d:L560b3d:{c.instructions+=3;NFSU2_TR(0x560b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560b40:{NFSU2_TR(0x560b40);
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
B560b42:{NFSU2_TR(0x560b42);
if(r1(R+518)){{goto L560b55;}}
}
B560b44:L560b44:{c.instructions+=6;NFSU2_TR(0x560b44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b45:{NFSU2_TR(0x560b45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b47:{NFSU2_TR(0x560b47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b49:{NFSU2_TR(0x560b49);
u8 U[4];
w4(U+0,u32(0x495dc3f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b4e:{NFSU2_TR(0x560b4e);
__builtin_memmove((R+4),(R+0),4);
}
B560b50:{NFSU2_TR(0x560b50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560b55ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B560b55:L560b55:{c.instructions+=1;NFSU2_TR(0x560b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560b60:L560b60:{c.instructions+=7;NFSU2_TR(0x560b60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b61:{NFSU2_TR(0x560b61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b62:{NFSU2_TR(0x560b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560b65:{NFSU2_TR(0x560b65);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B560b67:{NFSU2_TR(0x560b67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560b69:{NFSU2_TR(0x560b69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b6a:{NFSU2_TR(0x560b6a);
if(r1(R+518)){{goto L560b89;}}
}
B560b6c:L560b6c:{c.instructions+=2;NFSU2_TR(0x560b6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b6d:{NFSU2_TR(0x560b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560b72ull));
TAIL_STATIC(0x52cef0u,52c);
}
B560b72:L560b72:{c.instructions+=3;NFSU2_TR(0x560b72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560b75:{NFSU2_TR(0x560b75);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560b77:{NFSU2_TR(0x560b77);
if(r1(R+518)){{goto L560b89;}}
}
B560b79:L560b79:{c.instructions+=3;NFSU2_TR(0x560b79);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b7e:{NFSU2_TR(0x560b7e);
__builtin_memmove((R+4),(R+0),4);
}
B560b80:{NFSU2_TR(0x560b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560b85ull));
TAIL_STATIC(0x517f80u,517);
}
B560b85:L560b85:{c.instructions+=2;NFSU2_TR(0x560b85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560b87:{NFSU2_TR(0x560b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560ba0;}}
}
B560b89:L560b89:{c.instructions+=3;NFSU2_TR(0x560b89);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B560b8e:{NFSU2_TR(0x560b8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560b90:{NFSU2_TR(0x560b90);
if(r1(R+518)){{goto L560be9;}}
}
B560b92:L560b92:{c.instructions+=4;NFSU2_TR(0x560b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560b95:{NFSU2_TR(0x560b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b96:{NFSU2_TR(0x560b96);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560b9b:{NFSU2_TR(0x560b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ba0ull));
TAIL_STATIC(0x52c570u,52c);
}
B560ba0:L560ba0:{c.instructions+=3;NFSU2_TR(0x560ba0);
__builtin_memmove((R+28),(R+0),4);
}
B560ba2:{NFSU2_TR(0x560ba2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560ba4:{NFSU2_TR(0x560ba4);
if(r1(R+518)){{goto L560be9;}}
}
B560ba6:L560ba6:{c.instructions+=3;NFSU2_TR(0x560ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560ba9:{NFSU2_TR(0x560ba9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560bab:{NFSU2_TR(0x560bab);
if(r1(R+518)){{goto L560be9;}}
}
B560bad:L560bad:{c.instructions+=1;NFSU2_TR(0x560bad);
__builtin_memmove((R+4),(R+4),4);
}
B560bb0:L560bb0:{c.instructions+=2;NFSU2_TR(0x560bb0);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560bb5:{NFSU2_TR(0x560bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560bbaull));
TAIL_STATIC(0x505450u,505);
}
B560bba:L560bba:{c.instructions+=4;NFSU2_TR(0x560bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560bbd:{NFSU2_TR(0x560bbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560bc0:{NFSU2_TR(0x560bc0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560bc2:{NFSU2_TR(0x560bc2);
if(r1(R+518)){{goto L560bcd;}}
}
B560bc4:L560bc4:{c.instructions+=3;NFSU2_TR(0x560bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560bc7:{NFSU2_TR(0x560bc7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560bc9:{NFSU2_TR(0x560bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560bb0u);}goto L560bb0;}}
}
B560bcb:L560bcb:{c.instructions+=1;NFSU2_TR(0x560bcb);
{goto L560be9;}
}
B560bcd:L560bcd:{c.instructions+=2;NFSU2_TR(0x560bcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560bcf:{NFSU2_TR(0x560bcf);
if(r1(R+518)){{goto L560be9;}}
}
B560bd1:L560bd1:{c.instructions+=2;NFSU2_TR(0x560bd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560bd4:{NFSU2_TR(0x560bd4);
if(r1(R+518)){{goto L560be6;}}
}
B560bd6:L560bd6:{c.instructions+=3;NFSU2_TR(0x560bd6);
__builtin_memmove((R+4),(R+28),4);
}
B560bd8:{NFSU2_TR(0x560bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560bdb:{NFSU2_TR(0x560bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560be0ull));
TAIL_STATIC(0x517720u,517);
}
B560be0:L560be0:{c.instructions+=2;NFSU2_TR(0x560be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560be3:{NFSU2_TR(0x560be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560be6:L560be6:{c.instructions+=1;NFSU2_TR(0x560be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560be9:L560be9:{c.instructions+=4;NFSU2_TR(0x560be9);
__builtin_memmove((R+4),gp(0x7fa200),4);
}
B560bef:{NFSU2_TR(0x560bef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560bf0:{NFSU2_TR(0x560bf0);
w4(R+4,u32(0x8637b0ull));
}
B560bf5:{NFSU2_TR(0x560bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560bfaull));
TAIL_STATIC(0x51bb70u,51b);
}
B560bfa:L560bfa:{c.instructions+=2;NFSU2_TR(0x560bfa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560bfc:{NFSU2_TR(0x560bfc);
if(r1(R+518)){{goto L560c1b;}}
}
B560bfe:L560bfe:{c.instructions+=3;NFSU2_TR(0x560bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560c01:{NFSU2_TR(0x560c01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560c03:{NFSU2_TR(0x560c03);
if(r1(R+518)){{goto L560c1b;}}
}
B560c05:L560c05:{c.instructions+=3;NFSU2_TR(0x560c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560c08:{NFSU2_TR(0x560c08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560c0a:{NFSU2_TR(0x560c0a);
if(r1(R+518)){{goto L560c1b;}}
}
B560c0c:L560c0c:{c.instructions+=6;NFSU2_TR(0x560c0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c0d:{NFSU2_TR(0x560c0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c0e:{NFSU2_TR(0x560c0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c0f:{NFSU2_TR(0x560c0f);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c14:{NFSU2_TR(0x560c14);
__builtin_memmove((R+4),(R+0),4);
}
B560c16:{NFSU2_TR(0x560c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c1bull));
TAIL_STATIC(0x55b5c0u,55b);
}
B560c1b:L560c1b:{c.instructions+=3;NFSU2_TR(0x560c1b);
__builtin_memmove((R+8),gp(0x7fa200),4);
}
B560c21:{NFSU2_TR(0x560c21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c22:{NFSU2_TR(0x560c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c27ull));
TAIL_STATIC(0x52cef0u,52c);
}
B560c27:L560c27:{c.instructions+=3;NFSU2_TR(0x560c27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560c2a:{NFSU2_TR(0x560c2a);
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
B560c2c:{NFSU2_TR(0x560c2c);
if(r1(R+518)){{goto L560c3a;}}
}
B560c2e:L560c2e:{c.instructions+=4;NFSU2_TR(0x560c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560c31:{NFSU2_TR(0x560c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560c34:{NFSU2_TR(0x560c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560c37:{NFSU2_TR(0x560c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560c3a:L560c3a:{c.instructions+=4;NFSU2_TR(0x560c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560c3b:{NFSU2_TR(0x560c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560c3c:{NFSU2_TR(0x560c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B560c3d:{NFSU2_TR(0x560c3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560c40:L560c40:{c.instructions+=5;NFSU2_TR(0x560c40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c41:{NFSU2_TR(0x560c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560c44:{NFSU2_TR(0x560c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c46:{NFSU2_TR(0x560c46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c47:{NFSU2_TR(0x560c47);
if(r1(R+518)){{goto L560c66;}}
}
B560c49:L560c49:{c.instructions+=2;NFSU2_TR(0x560c49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c4a:{NFSU2_TR(0x560c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c4full));
TAIL_STATIC(0x52cef0u,52c);
}
B560c4f:L560c4f:{c.instructions+=3;NFSU2_TR(0x560c4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560c52:{NFSU2_TR(0x560c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c54:{NFSU2_TR(0x560c54);
if(r1(R+518)){{goto L560c66;}}
}
B560c56:L560c56:{c.instructions+=3;NFSU2_TR(0x560c56);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c5b:{NFSU2_TR(0x560c5b);
__builtin_memmove((R+4),(R+0),4);
}
B560c5d:{NFSU2_TR(0x560c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c62ull));
TAIL_STATIC(0x517f80u,517);
}
B560c62:L560c62:{c.instructions+=2;NFSU2_TR(0x560c62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c64:{NFSU2_TR(0x560c64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560c7d;}}
}
B560c66:L560c66:{c.instructions+=3;NFSU2_TR(0x560c66);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B560c6b:{NFSU2_TR(0x560c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c6d:{NFSU2_TR(0x560c6d);
if(r1(R+518)){{goto L560cd1;}}
}
B560c6f:L560c6f:{c.instructions+=4;NFSU2_TR(0x560c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560c72:{NFSU2_TR(0x560c72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c73:{NFSU2_TR(0x560c73);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c78:{NFSU2_TR(0x560c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c7dull));
TAIL_STATIC(0x52c570u,52c);
}
B560c7d:L560c7d:{c.instructions+=3;NFSU2_TR(0x560c7d);
__builtin_memmove((R+28),(R+0),4);
}
B560c7f:{NFSU2_TR(0x560c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c81:{NFSU2_TR(0x560c81);
if(r1(R+518)){{goto L560cd1;}}
}
B560c83:L560c83:{c.instructions+=3;NFSU2_TR(0x560c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560c86:{NFSU2_TR(0x560c86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560c88:{NFSU2_TR(0x560c88);
if(r1(R+518)){{goto L560cd1;}}
}
B560c8a:L560c8a:{c.instructions+=1;NFSU2_TR(0x560c8a);
__builtin_memmove((R+12),(R+12),4);
}
B560c90:L560c90:{c.instructions+=2;NFSU2_TR(0x560c90);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560c95:{NFSU2_TR(0x560c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560c9aull));
TAIL_STATIC(0x505450u,505);
}
B560c9a:L560c9a:{c.instructions+=4;NFSU2_TR(0x560c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560c9d:{NFSU2_TR(0x560c9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560ca0:{NFSU2_TR(0x560ca0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560ca2:{NFSU2_TR(0x560ca2);
if(r1(R+518)){{goto L560cad;}}
}
B560ca4:L560ca4:{c.instructions+=3;NFSU2_TR(0x560ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560ca7:{NFSU2_TR(0x560ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560ca9:{NFSU2_TR(0x560ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560c90u);}goto L560c90;}}
}
B560cab:L560cab:{c.instructions+=1;NFSU2_TR(0x560cab);
{goto L560cd1;}
}
B560cad:L560cad:{c.instructions+=2;NFSU2_TR(0x560cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560caf:{NFSU2_TR(0x560caf);
if(r1(R+518)){{goto L560cd1;}}
}
B560cb1:L560cb1:{c.instructions+=2;NFSU2_TR(0x560cb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B560cb4:{NFSU2_TR(0x560cb4);
if(r1(R+518)){{goto L560cca;}}
}
B560cb6:L560cb6:{c.instructions+=3;NFSU2_TR(0x560cb6);
__builtin_memmove((R+4),(R+28),4);
}
B560cb8:{NFSU2_TR(0x560cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560cbb:{NFSU2_TR(0x560cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560cc0ull));
TAIL_STATIC(0x517720u,517);
}
B560cc0:L560cc0:{c.instructions+=2;NFSU2_TR(0x560cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560cc3:{NFSU2_TR(0x560cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560cca:L560cca:{c.instructions+=1;NFSU2_TR(0x560cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560cd1:L560cd1:{c.instructions+=4;NFSU2_TR(0x560cd1);
__builtin_memmove((R+4),gp(0x7fa200),4);
}
B560cd7:{NFSU2_TR(0x560cd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560cd8:{NFSU2_TR(0x560cd8);
w4(R+4,u32(0x8637b0ull));
}
B560cdd:{NFSU2_TR(0x560cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ce2ull));
TAIL_STATIC(0x51bb70u,51b);
}
B560ce2:L560ce2:{c.instructions+=4;NFSU2_TR(0x560ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560ce4:{NFSU2_TR(0x560ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560ce5:{NFSU2_TR(0x560ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B560ce6:{NFSU2_TR(0x560ce6);
if(r1(R+518)){{goto L560d07;}}
}
B560ce8:L560ce8:{c.instructions+=3;NFSU2_TR(0x560ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560ceb:{NFSU2_TR(0x560ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560ced:{NFSU2_TR(0x560ced);
if(r1(R+518)){{goto L560d07;}}
}
B560cef:L560cef:{c.instructions+=3;NFSU2_TR(0x560cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560cf2:{NFSU2_TR(0x560cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560cf4:{NFSU2_TR(0x560cf4);
if(r1(R+518)){{goto L560d07;}}
}
B560cf6:L560cf6:{c.instructions+=6;NFSU2_TR(0x560cf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560cf7:{NFSU2_TR(0x560cf7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560cf9:{NFSU2_TR(0x560cf9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560cfb:{NFSU2_TR(0x560cfb);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d00:{NFSU2_TR(0x560d00);
__builtin_memmove((R+4),(R+0),4);
}
B560d02:{NFSU2_TR(0x560d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560d07ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B560d07:L560d07:{c.instructions+=3;NFSU2_TR(0x560d07);
__builtin_memmove((R+8),gp(0x7fa200),4);
}
B560d0d:{NFSU2_TR(0x560d0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d0e:{NFSU2_TR(0x560d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560d13ull));
TAIL_STATIC(0x52cef0u,52c);
}
B560d13:L560d13:{c.instructions+=3;NFSU2_TR(0x560d13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560d16:{NFSU2_TR(0x560d16);
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
B560d18:{NFSU2_TR(0x560d18);
if(r1(R+518)){{goto L560d2b;}}
}
B560d1a:L560d1a:{c.instructions+=5;NFSU2_TR(0x560d1a);
w4(R+4,u32(0xffull));
}
B560d1f:{NFSU2_TR(0x560d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d22:{NFSU2_TR(0x560d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d25:{NFSU2_TR(0x560d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d28:{NFSU2_TR(0x560d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d2b:L560d2b:{c.instructions+=1;NFSU2_TR(0x560d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B560d30:L560d30:{c.instructions+=12;NFSU2_TR(0x560d30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d32:{NFSU2_TR(0x560d32);
u8 U[4];
w4(U+0,u32(0x7784dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d37:{NFSU2_TR(0x560d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560d3d:{NFSU2_TR(0x560d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d3e:{NFSU2_TR(0x560d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d45:{NFSU2_TR(0x560d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B560d48:{NFSU2_TR(0x560d48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d49:{NFSU2_TR(0x560d49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d4a:{NFSU2_TR(0x560d4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d4b:{NFSU2_TR(0x560d4b);
u8 U[4];
w4(U+0,u32(0x79bde0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d50:{NFSU2_TR(0x560d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d54:{NFSU2_TR(0x560d54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560d59ull));
TAIL_STATIC(0x43db50u,43d);
}
B560d59:L560d59:{c.instructions+=9;NFSU2_TR(0x560d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d5d:{NFSU2_TR(0x560d5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B560d61:{NFSU2_TR(0x560d61);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560d65:{NFSU2_TR(0x560d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79d7b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560d6d:{NFSU2_TR(0x560d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d71:{NFSU2_TR(0x560d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560d75:{NFSU2_TR(0x560d75);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d77:{NFSU2_TR(0x560d77);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560d7f:{NFSU2_TR(0x560d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560d84ull));
TAIL_STATIC(0x60fee0u,60f);
}
B560d84:L560d84:{c.instructions+=5;NFSU2_TR(0x560d84);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B560d8a:{NFSU2_TR(0x560d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B560d8c:{NFSU2_TR(0x560d8c);
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
B560d8f:{NFSU2_TR(0x560d8f);
__builtin_memmove((R+12),(R+0),4);
}
B560d91:{NFSU2_TR(0x560d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560d94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B560d94:L560d94:{c.instructions+=7;NFSU2_TR(0x560d94);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d96:{NFSU2_TR(0x560d96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d98:{NFSU2_TR(0x560d98);
__builtin_memmove((R+28),(R+0),4);
}
B560d9a:{NFSU2_TR(0x560d9a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d9c:{NFSU2_TR(0x560d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560d9d:{NFSU2_TR(0x560d9d);
w4(R+4,u32(0x8a2b68ull));
}
B560da2:{NFSU2_TR(0x560da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560da7ull));
TAIL_STATIC(0x61ba30u,61b);
}
B560da7:L560da7:{c.instructions+=3;NFSU2_TR(0x560da7);
__builtin_memmove((R+24),(R+0),4);
}
B560da9:{NFSU2_TR(0x560da9);
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
B560dab:{NFSU2_TR(0x560dab);
if(r1(R+518)){{goto L560e12;}}
}
B560dad:L560dad:{c.instructions+=1;NFSU2_TR(0x560dad);
__builtin_memmove((R+4),(R+4),4);
}
B560db0:L560db0:{c.instructions+=3;NFSU2_TR(0x560db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B560db4:{NFSU2_TR(0x560db4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560db6:{NFSU2_TR(0x560db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560dfa;}}
}
B560db8:L560db8:{c.instructions+=5;NFSU2_TR(0x560db8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560dbc:{NFSU2_TR(0x560dbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dbd:{NFSU2_TR(0x560dbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dbe:{NFSU2_TR(0x560dbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dbf:{NFSU2_TR(0x560dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560dc4ull));
TAIL_STATIC(0x539b70u,539);
}
B560dc4:L560dc4:{c.instructions+=3;NFSU2_TR(0x560dc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B560dc7:{NFSU2_TR(0x560dc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B560dc9:{NFSU2_TR(0x560dc9);
if(r1(R+518)){{goto L560dfa;}}
}
B560dcb:L560dcb:{c.instructions+=2;NFSU2_TR(0x560dcb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dcd:{NFSU2_TR(0x560dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560dd2ull));
TAIL_STATIC(0x575620u,575);
}
B560dd2:L560dd2:{c.instructions+=3;NFSU2_TR(0x560dd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560dd5:{NFSU2_TR(0x560dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560dd7:{NFSU2_TR(0x560dd7);
if(r1(R+518)){{goto L560de5;}}
}
B560dd9:L560dd9:{c.instructions+=3;NFSU2_TR(0x560dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560ddc:{NFSU2_TR(0x560ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560de3:{NFSU2_TR(0x560de3);
{goto L560de7;}
}
B560de5:L560de5:{c.instructions+=1;NFSU2_TR(0x560de5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560de7:L560de7:{c.instructions+=6;NFSU2_TR(0x560de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560deb:{NFSU2_TR(0x560deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B560ded:{NFSU2_TR(0x560ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560df1:{NFSU2_TR(0x560df1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B560df5:{NFSU2_TR(0x560df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560df8:{NFSU2_TR(0x560df8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B560dfa:L560dfa:{c.instructions+=7;NFSU2_TR(0x560dfa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dfc:{NFSU2_TR(0x560dfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560dfe:{NFSU2_TR(0x560dfe);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e00:{NFSU2_TR(0x560e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e01:{NFSU2_TR(0x560e01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e02:{NFSU2_TR(0x560e02);
w4(R+4,u32(0x8a2b68ull));
}
B560e07:{NFSU2_TR(0x560e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e0cull));
TAIL_STATIC(0x61ba50u,61b);
}
B560e0c:L560e0c:{c.instructions+=3;NFSU2_TR(0x560e0c);
__builtin_memmove((R+24),(R+0),4);
}
B560e0e:{NFSU2_TR(0x560e0e);
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
B560e10:{NFSU2_TR(0x560e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560db0u);}goto L560db0;}}
}
B560e12:L560e12:{c.instructions+=3;NFSU2_TR(0x560e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B560e16:{NFSU2_TR(0x560e16);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B560e1a:{NFSU2_TR(0x560e1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e1full));
TAIL_STATIC(0x502fd0u,502);
}
B560e1f:L560e1f:{c.instructions+=3;NFSU2_TR(0x560e1f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B560e21:{NFSU2_TR(0x560e21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e25:{NFSU2_TR(0x560e25);
if(r1(R+518)){{goto L560f5b;}}
}
B560e2b:L560e2b:{c.instructions+=1;NFSU2_TR(0x560e2b);
{goto L560e30;}
}
B560e30:L560e30:{c.instructions+=2;NFSU2_TR(0x560e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560e33:{NFSU2_TR(0x560e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e38ull));
TAIL_STATIC(0x610000u,610);
}
B560e38:L560e38:{c.instructions+=6;NFSU2_TR(0x560e38);
__builtin_memmove((R+24),(R+0),4);
}
B560e3a:{NFSU2_TR(0x560e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560e3e:{NFSU2_TR(0x560e3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e3f:{NFSU2_TR(0x560e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e40:{NFSU2_TR(0x560e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e44:{NFSU2_TR(0x560e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e49ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B560e49:L560e49:{c.instructions+=3;NFSU2_TR(0x560e49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B560e4c:{NFSU2_TR(0x560e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560e4e:{NFSU2_TR(0x560e4e);
if(r1(R+518)){{goto L560f51;}}
}
B560e54:L560e54:{c.instructions+=4;NFSU2_TR(0x560e54);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e56:{NFSU2_TR(0x560e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e5a:{NFSU2_TR(0x560e5a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B560e5c:{NFSU2_TR(0x560e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e61ull));
TAIL_STATIC(0x575620u,575);
}
B560e61:L560e61:{c.instructions+=6;NFSU2_TR(0x560e61);
__builtin_memmove((R+24),(R+0),4);
}
B560e63:{NFSU2_TR(0x560e63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560e66:{NFSU2_TR(0x560e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e6a:{NFSU2_TR(0x560e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560e6c:{NFSU2_TR(0x560e6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B560e71:{NFSU2_TR(0x560e71);
if(r1(R+518)){{goto L560ed0;}}
}
B560e73:L560e73:{c.instructions+=3;NFSU2_TR(0x560e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560e77:{NFSU2_TR(0x560e77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560e78:{NFSU2_TR(0x560e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560e7dull));
TAIL_STATIC(0x43db50u,43d);
}
B560e7d:L560e7d:{c.instructions+=26;NFSU2_TR(0x560e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560e81:{NFSU2_TR(0x560e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e84:{NFSU2_TR(0x560e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B560e87:{NFSU2_TR(0x560e87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560e89:{NFSU2_TR(0x560e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e8c:{NFSU2_TR(0x560e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e8f:{NFSU2_TR(0x560e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e92:{NFSU2_TR(0x560e92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560e95:{NFSU2_TR(0x560e95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560e98:{NFSU2_TR(0x560e98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560e9b:{NFSU2_TR(0x560e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560e9e:{NFSU2_TR(0x560e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560ea1:{NFSU2_TR(0x560ea1);
w4(R+0,u32(0x3f800000ull));
}
B560ea6:{NFSU2_TR(0x560ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560ea9:{NFSU2_TR(0x560ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560eac:{NFSU2_TR(0x560eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560eaf:{NFSU2_TR(0x560eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560eb2:{NFSU2_TR(0x560eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B560eb5:{NFSU2_TR(0x560eb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B560eb9:{NFSU2_TR(0x560eb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B560ebd:{NFSU2_TR(0x560ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560ec0:{NFSU2_TR(0x560ec0);
u8 U[4];
w4(U+0,u32(0x79be44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B560ec6:{NFSU2_TR(0x560ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560ec9:{NFSU2_TR(0x560ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B560ecb:{NFSU2_TR(0x560ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560ece:{NFSU2_TR(0x560ece);
{goto L560ed2;}
}
B560ed0:L560ed0:{c.instructions+=1;NFSU2_TR(0x560ed0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B560ed2:L560ed2:{c.instructions+=3;NFSU2_TR(0x560ed2);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B560ed6:{NFSU2_TR(0x560ed6);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B560edb:{NFSU2_TR(0x560edb);
if(r1(R+518)){{goto L560f21;}}
}
B560edd:L560edd:{c.instructions+=1;NFSU2_TR(0x560edd);
__builtin_memmove((R+4),(R+4),4);
}
B560ee0:L560ee0:{c.instructions+=2;NFSU2_TR(0x560ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560ee3:{NFSU2_TR(0x560ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ee8ull));
TAIL_STATIC(0x610000u,610);
}
B560ee8:L560ee8:{c.instructions+=4;NFSU2_TR(0x560ee8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560ee9:{NFSU2_TR(0x560ee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560eed:{NFSU2_TR(0x560eed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560eee:{NFSU2_TR(0x560eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560ef3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B560ef3:L560ef3:{c.instructions+=3;NFSU2_TR(0x560ef3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B560ef6:{NFSU2_TR(0x560ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560ef8:{NFSU2_TR(0x560ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560f21;}}
}
B560efa:L560efa:{c.instructions+=16;NFSU2_TR(0x560efa);
__builtin_memmove((R+0),(R+28),4);
}
B560efc:{NFSU2_TR(0x560efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B560efe:{NFSU2_TR(0x560efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560f01:{NFSU2_TR(0x560f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B560f03:{NFSU2_TR(0x560f03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B560f05:{NFSU2_TR(0x560f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560f08:{NFSU2_TR(0x560f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560f0b:{NFSU2_TR(0x560f0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B560f0e:{NFSU2_TR(0x560f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B560f10:{NFSU2_TR(0x560f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560f13:{NFSU2_TR(0x560f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560f16:{NFSU2_TR(0x560f16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B560f18:{NFSU2_TR(0x560f18);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560f1c:{NFSU2_TR(0x560f1c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B560f1d:{NFSU2_TR(0x560f1d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B560f1f:{NFSU2_TR(0x560f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560ee0u);}goto L560ee0;}}
}
B560f21:L560f21:{c.instructions+=8;NFSU2_TR(0x560f21);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560f23:{NFSU2_TR(0x560f23);
__builtin_memmove((R+4),(R+518),1);
}
B560f26:{NFSU2_TR(0x560f26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B560f29:{NFSU2_TR(0x560f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560f2d:{NFSU2_TR(0x560f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560f30:{NFSU2_TR(0x560f30);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B560f33:{NFSU2_TR(0x560f33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f34:{NFSU2_TR(0x560f34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560f37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B560f37:L560f37:{c.instructions+=2;NFSU2_TR(0x560f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560f39:{NFSU2_TR(0x560f39);
if(r1(R+518)){{goto L560f51;}}
}
B560f3b:L560f3b:{c.instructions+=4;NFSU2_TR(0x560f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B560f3e:{NFSU2_TR(0x560f3e);
w4(R+4,u32(0x294d2a3ull));
}
B560f43:{NFSU2_TR(0x560f43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B560f45:{NFSU2_TR(0x560f45);
if(r1(R+518)){{goto L560f51;}}
}
B560f47:L560f47:{c.instructions+=2;NFSU2_TR(0x560f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560f4a:{NFSU2_TR(0x560f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B560f51:L560f51:{c.instructions+=2;NFSU2_TR(0x560f51);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B560f55:{NFSU2_TR(0x560f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x560e30u);}goto L560e30;}}
}
B560f5b:L560f5b:{c.instructions+=3;NFSU2_TR(0x560f5b);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f5d:{NFSU2_TR(0x560f5d);
w4(R+4,u32(0x8392c0ull));
}
B560f62:{NFSU2_TR(0x560f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560f67ull));
TAIL_STATIC(0x6102f0u,610);
}
B560f67:L560f67:{c.instructions+=4;NFSU2_TR(0x560f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560f69:{NFSU2_TR(0x560f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B560f6d:{NFSU2_TR(0x560f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560f73:{NFSU2_TR(0x560f73);
if(r1(R+518)){{goto L560fb5;}}
}
B560f75:L560f75:{c.instructions+=4;NFSU2_TR(0x560f75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f77:{NFSU2_TR(0x560f77);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f7c:{NFSU2_TR(0x560f7c);
__builtin_memmove((R+4),(R+0),4);
}
B560f7e:{NFSU2_TR(0x560f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560f83ull));
TAIL_STATIC(0x61b500u,61b);
}
B560f83:L560f83:{c.instructions+=2;NFSU2_TR(0x560f83);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B560f87:{NFSU2_TR(0x560f87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L560fb5;}}
}
B560f89:L560f89:{c.instructions+=3;NFSU2_TR(0x560f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560f8f:{NFSU2_TR(0x560f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B560f92:{NFSU2_TR(0x560f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560f97ull));
TAIL_STATIC(0x610000u,610);
}
B560f97:L560f97:{c.instructions+=2;NFSU2_TR(0x560f97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f98:{NFSU2_TR(0x560f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560f9dull));
TAIL_STATIC(0x43db50u,43d);
}
B560f9d:L560f9d:{c.instructions+=3;NFSU2_TR(0x560f9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560f9e:{NFSU2_TR(0x560f9e);
__builtin_memmove((R+28),(R+0),4);
}
B560fa0:{NFSU2_TR(0x560fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560fa5ull));
TAIL_STATIC(0x505450u,505);
}
B560fa5:L560fa5:{c.instructions+=2;NFSU2_TR(0x560fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560fa6:{NFSU2_TR(0x560fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560fabull));
TAIL_STATIC(0x50b840u,50b);
}
B560fab:L560fab:{c.instructions+=3;NFSU2_TR(0x560fab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B560fae:{NFSU2_TR(0x560fae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560fb0:{NFSU2_TR(0x560fb0);
if(r1(R+518)){{goto L560fb5;}}
}
B560fb2:L560fb2:{c.instructions+=1;NFSU2_TR(0x560fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B560fb5:L560fb5:{c.instructions+=3;NFSU2_TR(0x560fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560fb8:{NFSU2_TR(0x560fb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560fb9:{NFSU2_TR(0x560fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560fbeull));
TAIL_STATIC(0x505450u,505);
}
B560fbe:L560fbe:{c.instructions+=2;NFSU2_TR(0x560fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B560fbf:{NFSU2_TR(0x560fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x560fc4ull));
TAIL_STATIC(0x50b840u,50b);
}
B560fc4:L560fc4:{c.instructions+=3;NFSU2_TR(0x560fc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B560fc7:{NFSU2_TR(0x560fc7);
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
B560fc9:{NFSU2_TR(0x560fc9);
if(r1(R+518)){TAIL_STATIC(0x56105au,561);}
}
B560fcf:L560fcf:{c.instructions+=3;NFSU2_TR(0x560fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B560fd2:{NFSU2_TR(0x560fd2);
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
B560fd4:{NFSU2_TR(0x560fd4);
if(r1(R+518)){TAIL_STATIC(0x56105au,561);}
}
B560fda:L560fda:{c.instructions+=5;NFSU2_TR(0x560fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B560fdd:{NFSU2_TR(0x560fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B560fe0:{NFSU2_TR(0x560fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B560fe8:{NFSU2_TR(0x560fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560fea:{NFSU2_TR(0x560fea);
if(r1(R+518)){{goto L560ff1;}}
}
B560fec:L560fec:{c.instructions+=2;NFSU2_TR(0x560fec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B560fef:{NFSU2_TR(0x560fef);
{goto L560ff3;}
}
B560ff1:L560ff1:{c.instructions+=1;NFSU2_TR(0x560ff1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B560ff3:L560ff3:{c.instructions+=2;NFSU2_TR(0x560ff3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B560ff5:{NFSU2_TR(0x560ff5);
if(r1(R+518)){{goto L560ffc;}}
}
B560ff7:L560ff7:{c.instructions+=2;NFSU2_TR(0x560ff7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B560ffa:{NFSU2_TR(0x560ffa);
{goto L560ffe;}
}
B560ffc:L560ffc:{c.instructions+=1;NFSU2_TR(0x560ffc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B560ffe:L560ffe:{c.instructions+=1;NFSU2_TR(0x560ffe);
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
TAIL_STATIC(0x561000u,561);
}
XIT:NFSU2_TR_EXIT(0x560,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
