#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_674(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_682(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x683,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x683,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_683(u8* __restrict R,Cpu& c);
u32 page_683(Cpu& c){return body_683(c.regs.data(),c);}
__attribute__((noinline)) u32 body_683(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x683000:goto L683000;
case 0x683003:c.instructions+=2;goto B683003;
case 0x683005:c.instructions+=1;goto B683005;
case 0x68300a:goto L68300a;
case 0x68300c:c.instructions+=2;goto B68300c;
case 0x68300e:c.instructions+=1;goto B68300e;
case 0x683014:goto L683014;
case 0x683019:goto L683019;
case 0x68301b:c.instructions+=1;goto B68301b;
case 0x683021:goto L683021;
case 0x683025:c.instructions+=1;goto B683025;
case 0x68302b:goto L68302b;
case 0x68302c:c.instructions+=3;goto B68302c;
case 0x68302f:c.instructions+=2;goto B68302f;
case 0x683031:c.instructions+=1;goto B683031;
case 0x683036:goto L683036;
case 0x683038:c.instructions+=2;goto B683038;
case 0x68303a:c.instructions+=1;goto B68303a;
case 0x683040:goto L683040;
case 0x683042:c.instructions+=6;goto B683042;
case 0x683044:c.instructions+=5;goto B683044;
case 0x683046:c.instructions+=4;goto B683046;
case 0x683049:c.instructions+=3;goto B683049;
case 0x68304e:c.instructions+=2;goto B68304e;
case 0x683053:c.instructions+=1;goto B683053;
case 0x683055:goto L683055;
case 0x683057:c.instructions+=1;goto B683057;
case 0x68305d:goto L68305d;
case 0x683061:c.instructions+=1;goto B683061;
case 0x683067:goto L683067;
case 0x683068:c.instructions+=3;goto B683068;
case 0x68306b:c.instructions+=2;goto B68306b;
case 0x68306d:c.instructions+=1;goto B68306d;
case 0x683072:goto L683072;
case 0x683074:c.instructions+=2;goto B683074;
case 0x683076:c.instructions+=1;goto B683076;
case 0x68307c:goto L68307c;
case 0x68307e:c.instructions+=3;goto B68307e;
case 0x683080:c.instructions+=2;goto B683080;
case 0x683083:c.instructions+=1;goto B683083;
case 0x683088:goto L683088;
case 0x68308a:c.instructions+=1;goto B68308a;
case 0x683090:goto L683090;
case 0x683092:c.instructions+=1;goto B683092;
case 0x683098:goto L683098;
case 0x68309c:c.instructions+=1;goto B68309c;
case 0x6830a2:goto L6830a2;
case 0x6830a3:c.instructions+=3;goto B6830a3;
case 0x6830a6:c.instructions+=2;goto B6830a6;
case 0x6830a8:c.instructions+=1;goto B6830a8;
case 0x6830ad:goto L6830ad;
case 0x6830af:c.instructions+=2;goto B6830af;
case 0x6830b1:c.instructions+=1;goto B6830b1;
case 0x6830b7:goto L6830b7;
case 0x6830b9:c.instructions+=3;goto B6830b9;
case 0x6830bc:c.instructions+=2;goto B6830bc;
case 0x6830be:c.instructions+=1;goto B6830be;
case 0x6830c3:goto L6830c3;
case 0x6830c6:c.instructions+=2;goto B6830c6;
case 0x6830cb:c.instructions+=1;goto B6830cb;
case 0x6830d0:goto L6830d0;
case 0x6830d2:c.instructions+=1;goto B6830d2;
case 0x6830d8:goto L6830d8;
case 0x6830da:c.instructions+=1;goto B6830da;
case 0x6830e0:goto L6830e0;
case 0x6830e4:c.instructions+=1;goto B6830e4;
case 0x6830ea:goto L6830ea;
case 0x6830eb:c.instructions+=2;goto B6830eb;
case 0x6830ed:c.instructions+=1;goto B6830ed;
case 0x6830f2:goto L6830f2;
case 0x6830f4:c.instructions+=2;goto B6830f4;
case 0x6830f7:c.instructions+=1;goto B6830f7;
case 0x6830fd:goto L6830fd;
case 0x6830fe:c.instructions+=3;goto B6830fe;
case 0x6830ff:c.instructions+=2;goto B6830ff;
case 0x683101:c.instructions+=1;goto B683101;
case 0x683106:goto L683106;
case 0x683108:c.instructions+=2;goto B683108;
case 0x68310a:c.instructions+=1;goto B68310a;
case 0x683110:goto L683110;
case 0x683111:c.instructions+=3;goto B683111;
case 0x683114:c.instructions+=2;goto B683114;
case 0x683116:c.instructions+=1;goto B683116;
case 0x68311b:goto L68311b;
case 0x68311d:c.instructions+=2;goto B68311d;
case 0x68311f:c.instructions+=1;goto B68311f;
case 0x683125:goto L683125;
case 0x683127:c.instructions+=11;goto B683127;
case 0x683129:c.instructions+=10;goto B683129;
case 0x68312c:c.instructions+=9;goto B68312c;
case 0x68312f:c.instructions+=8;goto B68312f;
case 0x683134:c.instructions+=7;goto B683134;
case 0x683137:c.instructions+=6;goto B683137;
case 0x68313a:c.instructions+=5;goto B68313a;
case 0x68313f:c.instructions+=4;goto B68313f;
case 0x683140:c.instructions+=3;goto B683140;
case 0x683143:c.instructions+=2;goto B683143;
case 0x683145:c.instructions+=1;goto B683145;
case 0x68314a:goto L68314a;
case 0x68314c:c.instructions+=2;goto B68314c;
case 0x68314e:c.instructions+=1;goto B68314e;
case 0x683154:goto L683154;
case 0x683157:c.instructions+=3;goto B683157;
case 0x683159:c.instructions+=2;goto B683159;
case 0x68315c:c.instructions+=1;goto B68315c;
case 0x683161:goto L683161;
case 0x683163:c.instructions+=1;goto B683163;
case 0x683169:goto L683169;
case 0x68316b:c.instructions+=1;goto B68316b;
case 0x683171:goto L683171;
case 0x683175:c.instructions+=1;goto B683175;
case 0x68317b:goto L68317b;
case 0x68317c:c.instructions+=3;goto B68317c;
case 0x68317f:c.instructions+=2;goto B68317f;
case 0x683181:c.instructions+=1;goto B683181;
case 0x683186:goto L683186;
case 0x683188:c.instructions+=2;goto B683188;
case 0x68318a:c.instructions+=1;goto B68318a;
case 0x683190:goto L683190;
case 0x683192:c.instructions+=3;goto B683192;
case 0x683195:c.instructions+=2;goto B683195;
case 0x683198:c.instructions+=1;goto B683198;
case 0x68319a:goto L68319a;
case 0x68319c:c.instructions+=1;goto B68319c;
case 0x6831a2:goto L6831a2;
case 0x6831a4:c.instructions+=1;goto B6831a4;
case 0x6831aa:goto L6831aa;
case 0x6831ae:c.instructions+=1;goto B6831ae;
case 0x6831b4:goto L6831b4;
case 0x6831b5:c.instructions+=3;goto B6831b5;
case 0x6831b8:c.instructions+=2;goto B6831b8;
case 0x6831ba:c.instructions+=1;goto B6831ba;
case 0x6831bf:goto L6831bf;
case 0x6831c1:c.instructions+=2;goto B6831c1;
case 0x6831c3:c.instructions+=1;goto B6831c3;
case 0x6831c9:goto L6831c9;
case 0x6831cb:c.instructions+=2;goto B6831cb;
case 0x6831ce:c.instructions+=1;goto B6831ce;
case 0x6831d1:goto L6831d1;
case 0x6831d3:c.instructions+=1;goto B6831d3;
case 0x6831d8:goto L6831d8;
case 0x6831dd:c.instructions+=1;goto B6831dd;
case 0x6831e2:goto L6831e2;
case 0x6831e4:c.instructions+=1;goto B6831e4;
case 0x6831ea:goto L6831ea;
case 0x6831ec:c.instructions+=1;goto B6831ec;
case 0x6831f2:goto L6831f2;
case 0x6831f6:c.instructions+=1;goto B6831f6;
case 0x6831fc:goto L6831fc;
case 0x6831fd:c.instructions+=3;goto B6831fd;
case 0x683200:c.instructions+=2;goto B683200;
case 0x683202:c.instructions+=1;goto B683202;
case 0x683207:goto L683207;
case 0x683209:c.instructions+=2;goto B683209;
case 0x68320b:c.instructions+=1;goto B68320b;
case 0x683211:goto L683211;
case 0x683213:c.instructions+=3;goto B683213;
case 0x683216:c.instructions+=2;goto B683216;
case 0x683219:c.instructions+=1;goto B683219;
case 0x68321e:goto L68321e;
case 0x683220:c.instructions+=1;goto B683220;
case 0x683226:goto L683226;
case 0x683228:c.instructions+=1;goto B683228;
case 0x68322e:goto L68322e;
case 0x683232:c.instructions+=1;goto B683232;
case 0x683238:goto L683238;
case 0x683239:c.instructions+=3;goto B683239;
case 0x68323c:c.instructions+=2;goto B68323c;
case 0x68323e:c.instructions+=1;goto B68323e;
case 0x683243:goto L683243;
case 0x683245:c.instructions+=2;goto B683245;
case 0x683247:c.instructions+=1;goto B683247;
case 0x68324d:goto L68324d;
case 0x68324f:c.instructions+=3;goto B68324f;
case 0x683252:c.instructions+=2;goto B683252;
case 0x683255:c.instructions+=1;goto B683255;
case 0x68325a:goto L68325a;
case 0x68325c:c.instructions+=1;goto B68325c;
case 0x683262:goto L683262;
case 0x683264:c.instructions+=1;goto B683264;
case 0x68326a:goto L68326a;
case 0x68326e:c.instructions+=1;goto B68326e;
case 0x683274:goto L683274;
case 0x683276:c.instructions+=4;goto B683276;
case 0x683279:c.instructions+=3;goto B683279;
case 0x68327a:c.instructions+=2;goto B68327a;
case 0x68327c:c.instructions+=1;goto B68327c;
case 0x683281:goto L683281;
case 0x683283:c.instructions+=1;goto B683283;
case 0x683289:goto L683289;
case 0x68328b:c.instructions+=1;goto B68328b;
case 0x68328d:goto L68328d;
case 0x683291:c.instructions+=4;goto B683291;
case 0x683292:c.instructions+=3;goto B683292;
case 0x683294:c.instructions+=2;goto B683294;
case 0x683297:c.instructions+=1;goto B683297;
case 0x683299:goto L683299;
case 0x68329a:c.instructions+=3;goto B68329a;
case 0x68329b:c.instructions+=2;goto B68329b;
case 0x68329d:c.instructions+=1;goto B68329d;
case 0x6832a2:goto L6832a2;
case 0x6832a4:c.instructions+=2;goto B6832a4;
case 0x6832a6:c.instructions+=1;goto B6832a6;
case 0x6832ac:goto L6832ac;
case 0x6832ad:c.instructions+=3;goto B6832ad;
case 0x6832b0:c.instructions+=2;goto B6832b0;
case 0x6832b2:c.instructions+=1;goto B6832b2;
case 0x6832b7:goto L6832b7;
case 0x6832b9:c.instructions+=2;goto B6832b9;
case 0x6832bb:c.instructions+=1;goto B6832bb;
case 0x6832c1:goto L6832c1;
case 0x6832c3:c.instructions+=11;goto B6832c3;
case 0x6832c5:c.instructions+=10;goto B6832c5;
case 0x6832c8:c.instructions+=9;goto B6832c8;
case 0x6832cb:c.instructions+=8;goto B6832cb;
case 0x6832d0:c.instructions+=7;goto B6832d0;
case 0x6832d3:c.instructions+=6;goto B6832d3;
case 0x6832d6:c.instructions+=5;goto B6832d6;
case 0x6832db:c.instructions+=4;goto B6832db;
case 0x6832dc:c.instructions+=3;goto B6832dc;
case 0x6832df:c.instructions+=2;goto B6832df;
case 0x6832e1:c.instructions+=1;goto B6832e1;
case 0x6832e6:goto L6832e6;
case 0x6832e8:c.instructions+=2;goto B6832e8;
case 0x6832ea:c.instructions+=1;goto B6832ea;
case 0x6832f0:goto L6832f0;
case 0x6832f3:c.instructions+=9;goto B6832f3;
case 0x6832f5:c.instructions+=8;goto B6832f5;
case 0x6832f8:c.instructions+=7;goto B6832f8;
case 0x6832fd:c.instructions+=6;goto B6832fd;
case 0x683300:c.instructions+=5;goto B683300;
case 0x683302:c.instructions+=4;goto B683302;
case 0x683305:c.instructions+=3;goto B683305;
case 0x683306:c.instructions+=2;goto B683306;
case 0x683309:c.instructions+=1;goto B683309;
case 0x68330e:goto L68330e;
case 0x683310:c.instructions+=2;goto B683310;
case 0x683312:c.instructions+=1;goto B683312;
case 0x683318:goto L683318;
case 0x683319:c.instructions+=6;goto B683319;
case 0x68331c:c.instructions+=5;goto B68331c;
case 0x68331e:c.instructions+=4;goto B68331e;
case 0x683321:c.instructions+=3;goto B683321;
case 0x683324:c.instructions+=2;goto B683324;
case 0x683327:c.instructions+=1;goto B683327;
case 0x68332c:goto L68332c;
case 0x68332e:c.instructions+=2;goto B68332e;
case 0x683330:c.instructions+=1;goto B683330;
case 0x683336:goto L683336;
case 0x683339:c.instructions+=4;goto B683339;
case 0x68333b:c.instructions+=3;goto B68333b;
case 0x68333e:c.instructions+=2;goto B68333e;
case 0x683341:c.instructions+=1;goto B683341;
case 0x683346:goto L683346;
case 0x683348:c.instructions+=1;goto B683348;
case 0x68334e:goto L68334e;
case 0x683350:c.instructions+=1;goto B683350;
case 0x683356:goto L683356;
case 0x68335a:c.instructions+=1;goto B68335a;
case 0x683360:goto L683360;
case 0x683362:c.instructions+=4;goto B683362;
case 0x683365:c.instructions+=3;goto B683365;
case 0x683366:c.instructions+=2;goto B683366;
case 0x683368:c.instructions+=1;goto B683368;
case 0x68336d:goto L68336d;
case 0x68336f:c.instructions+=1;goto B68336f;
case 0x683375:goto L683375;
case 0x683377:c.instructions+=1;goto B683377;
case 0x683379:goto L683379;
case 0x68337d:c.instructions+=4;goto B68337d;
case 0x68337e:c.instructions+=3;goto B68337e;
case 0x683380:c.instructions+=2;goto B683380;
case 0x683383:c.instructions+=1;goto B683383;
case 0x683385:goto L683385;
case 0x683386:c.instructions+=3;goto B683386;
case 0x683387:c.instructions+=2;goto B683387;
case 0x683389:c.instructions+=1;goto B683389;
case 0x68338e:goto L68338e;
case 0x683390:c.instructions+=2;goto B683390;
case 0x683392:c.instructions+=1;goto B683392;
case 0x683398:goto L683398;
case 0x683399:c.instructions+=3;goto B683399;
case 0x68339c:c.instructions+=2;goto B68339c;
case 0x68339e:c.instructions+=1;goto B68339e;
case 0x6833a3:goto L6833a3;
case 0x6833a5:c.instructions+=2;goto B6833a5;
case 0x6833a7:c.instructions+=1;goto B6833a7;
case 0x6833ad:goto L6833ad;
case 0x6833af:c.instructions+=11;goto B6833af;
case 0x6833b1:c.instructions+=10;goto B6833b1;
case 0x6833b4:c.instructions+=9;goto B6833b4;
case 0x6833b7:c.instructions+=8;goto B6833b7;
case 0x6833bc:c.instructions+=7;goto B6833bc;
case 0x6833bf:c.instructions+=6;goto B6833bf;
case 0x6833c2:c.instructions+=5;goto B6833c2;
case 0x6833c7:c.instructions+=4;goto B6833c7;
case 0x6833c8:c.instructions+=3;goto B6833c8;
case 0x6833cb:c.instructions+=2;goto B6833cb;
case 0x6833cd:c.instructions+=1;goto B6833cd;
case 0x6833d2:goto L6833d2;
case 0x6833d4:c.instructions+=2;goto B6833d4;
case 0x6833d6:c.instructions+=1;goto B6833d6;
case 0x6833dc:goto L6833dc;
case 0x6833df:c.instructions+=3;goto B6833df;
case 0x6833e1:c.instructions+=2;goto B6833e1;
case 0x6833e4:c.instructions+=1;goto B6833e4;
case 0x6833e9:goto L6833e9;
case 0x6833ec:c.instructions+=5;goto B6833ec;
case 0x6833ee:c.instructions+=4;goto B6833ee;
case 0x6833f1:c.instructions+=3;goto B6833f1;
case 0x6833f2:c.instructions+=2;goto B6833f2;
case 0x6833f5:c.instructions+=1;goto B6833f5;
case 0x6833fa:goto L6833fa;
case 0x6833fc:c.instructions+=2;goto B6833fc;
case 0x6833fe:c.instructions+=1;goto B6833fe;
case 0x683404:goto L683404;
case 0x683405:c.instructions+=6;goto B683405;
case 0x683408:c.instructions+=5;goto B683408;
case 0x68340a:c.instructions+=4;goto B68340a;
case 0x68340d:c.instructions+=3;goto B68340d;
case 0x683410:c.instructions+=2;goto B683410;
case 0x683413:c.instructions+=1;goto B683413;
case 0x683418:goto L683418;
case 0x68341d:goto L68341d;
case 0x68341f:c.instructions+=1;goto B68341f;
case 0x683425:goto L683425;
case 0x683427:c.instructions+=1;goto B683427;
case 0x68342d:goto L68342d;
case 0x683431:c.instructions+=1;goto B683431;
case 0x683437:goto L683437;
case 0x68343b:c.instructions+=2;goto B68343b;
case 0x68343d:c.instructions+=1;goto B68343d;
case 0x68343f:goto L68343f;
case 0x683442:c.instructions+=4;goto B683442;
case 0x683445:c.instructions+=3;goto B683445;
case 0x683448:c.instructions+=2;goto B683448;
case 0x68344b:c.instructions+=1;goto B68344b;
case 0x68344d:goto L68344d;
case 0x683450:c.instructions+=3;goto B683450;
case 0x683453:c.instructions+=2;goto B683453;
case 0x683456:c.instructions+=1;goto B683456;
case 0x683458:goto L683458;
case 0x68345a:c.instructions+=3;goto B68345a;
case 0x68345d:c.instructions+=2;goto B68345d;
case 0x683460:c.instructions+=1;goto B683460;
case 0x683462:goto L683462;
case 0x683465:c.instructions+=3;goto B683465;
case 0x683468:c.instructions+=2;goto B683468;
case 0x68346b:c.instructions+=1;goto B68346b;
case 0x68346d:goto L68346d;
case 0x68346e:c.instructions+=3;goto B68346e;
case 0x683471:c.instructions+=2;goto B683471;
case 0x683473:c.instructions+=1;goto B683473;
case 0x683478:goto L683478;
case 0x68347a:c.instructions+=2;goto B68347a;
case 0x68347c:c.instructions+=1;goto B68347c;
case 0x683482:goto L683482;
case 0x683484:c.instructions+=1;goto B683484;
case 0x683489:goto L683489;
case 0x68348c:c.instructions+=3;goto B68348c;
case 0x68348d:c.instructions+=2;goto B68348d;
case 0x68348f:c.instructions+=1;goto B68348f;
case 0x683494:goto L683494;
case 0x683496:c.instructions+=1;goto B683496;
case 0x68349c:goto L68349c;
case 0x68349e:c.instructions+=2;goto B68349e;
case 0x6834a0:c.instructions+=1;goto B6834a0;
case 0x6834a3:goto L6834a3;
case 0x6834a7:c.instructions+=4;goto B6834a7;
case 0x6834a8:c.instructions+=3;goto B6834a8;
case 0x6834aa:c.instructions+=2;goto B6834aa;
case 0x6834ad:c.instructions+=1;goto B6834ad;
case 0x6834af:goto L6834af;
case 0x6834b0:c.instructions+=3;goto B6834b0;
case 0x6834b3:c.instructions+=2;goto B6834b3;
case 0x6834b5:c.instructions+=1;goto B6834b5;
case 0x6834ba:goto L6834ba;
case 0x6834bc:c.instructions+=2;goto B6834bc;
case 0x6834be:c.instructions+=1;goto B6834be;
case 0x6834c4:goto L6834c4;
case 0x6834c5:c.instructions+=3;goto B6834c5;
case 0x6834c8:c.instructions+=2;goto B6834c8;
case 0x6834ca:c.instructions+=1;goto B6834ca;
case 0x6834cf:goto L6834cf;
case 0x6834d1:c.instructions+=2;goto B6834d1;
case 0x6834d3:c.instructions+=1;goto B6834d3;
case 0x6834d9:goto L6834d9;
case 0x6834da:c.instructions+=3;goto B6834da;
case 0x6834dd:c.instructions+=2;goto B6834dd;
case 0x6834df:c.instructions+=1;goto B6834df;
case 0x6834e4:goto L6834e4;
case 0x6834e6:c.instructions+=2;goto B6834e6;
case 0x6834e8:c.instructions+=1;goto B6834e8;
case 0x6834ee:goto L6834ee;
case 0x6834ef:c.instructions+=3;goto B6834ef;
case 0x6834f2:c.instructions+=2;goto B6834f2;
case 0x6834f4:c.instructions+=1;goto B6834f4;
case 0x6834f9:goto L6834f9;
case 0x6834fb:c.instructions+=2;goto B6834fb;
case 0x6834fd:c.instructions+=1;goto B6834fd;
case 0x683503:goto L683503;
case 0x683506:c.instructions+=6;goto B683506;
case 0x68350b:c.instructions+=5;goto B68350b;
case 0x68350e:c.instructions+=4;goto B68350e;
case 0x683510:c.instructions+=3;goto B683510;
case 0x683513:c.instructions+=2;goto B683513;
case 0x683518:c.instructions+=1;goto B683518;
case 0x68351d:goto L68351d;
case 0x68351f:c.instructions+=1;goto B68351f;
case 0x683525:goto L683525;
case 0x683527:c.instructions+=1;goto B683527;
case 0x68352d:goto L68352d;
case 0x683531:c.instructions+=1;goto B683531;
case 0x683537:goto L683537;
case 0x683539:c.instructions+=4;goto B683539;
case 0x68353c:c.instructions+=3;goto B68353c;
case 0x68353d:c.instructions+=2;goto B68353d;
case 0x68353f:c.instructions+=1;goto B68353f;
case 0x683544:goto L683544;
case 0x683546:c.instructions+=1;goto B683546;
case 0x68354c:goto L68354c;
case 0x68354e:goto L68354e;
case 0x683552:c.instructions+=4;goto B683552;
case 0x683553:c.instructions+=3;goto B683553;
case 0x683555:c.instructions+=2;goto B683555;
case 0x683558:c.instructions+=1;goto B683558;
case 0x68355a:goto L68355a;
case 0x68355b:c.instructions+=3;goto B68355b;
case 0x68355e:c.instructions+=2;goto B68355e;
case 0x683560:c.instructions+=1;goto B683560;
case 0x683565:goto L683565;
case 0x683567:c.instructions+=2;goto B683567;
case 0x683569:c.instructions+=1;goto B683569;
case 0x68356f:goto L68356f;
case 0x683570:c.instructions+=3;goto B683570;
case 0x683573:c.instructions+=2;goto B683573;
case 0x683575:c.instructions+=1;goto B683575;
case 0x68357a:goto L68357a;
case 0x68357c:c.instructions+=2;goto B68357c;
case 0x68357e:c.instructions+=1;goto B68357e;
case 0x683584:goto L683584;
case 0x683585:c.instructions+=3;goto B683585;
case 0x683588:c.instructions+=2;goto B683588;
case 0x68358a:c.instructions+=1;goto B68358a;
case 0x68358f:goto L68358f;
case 0x683591:c.instructions+=2;goto B683591;
case 0x683593:c.instructions+=1;goto B683593;
case 0x683599:goto L683599;
case 0x68359a:c.instructions+=3;goto B68359a;
case 0x68359d:c.instructions+=2;goto B68359d;
case 0x68359f:c.instructions+=1;goto B68359f;
case 0x6835a4:goto L6835a4;
case 0x6835a6:c.instructions+=2;goto B6835a6;
case 0x6835a8:c.instructions+=1;goto B6835a8;
case 0x6835ae:goto L6835ae;
case 0x6835af:c.instructions+=3;goto B6835af;
case 0x6835b2:c.instructions+=2;goto B6835b2;
case 0x6835b4:c.instructions+=1;goto B6835b4;
case 0x6835b9:goto L6835b9;
case 0x6835bb:c.instructions+=2;goto B6835bb;
case 0x6835bd:c.instructions+=1;goto B6835bd;
case 0x6835c3:goto L6835c3;
case 0x6835c4:c.instructions+=6;goto B6835c4;
case 0x6835c7:c.instructions+=5;goto B6835c7;
case 0x6835c9:c.instructions+=4;goto B6835c9;
case 0x6835cb:c.instructions+=3;goto B6835cb;
case 0x6835ce:c.instructions+=2;goto B6835ce;
case 0x6835d1:c.instructions+=1;goto B6835d1;
case 0x6835d6:goto L6835d6;
case 0x6835d8:c.instructions+=2;goto B6835d8;
case 0x6835da:c.instructions+=1;goto B6835da;
case 0x6835e0:goto L6835e0;
case 0x6835e1:c.instructions+=6;goto B6835e1;
case 0x6835e4:c.instructions+=5;goto B6835e4;
case 0x6835e6:c.instructions+=4;goto B6835e6;
case 0x6835e8:c.instructions+=3;goto B6835e8;
case 0x6835eb:c.instructions+=2;goto B6835eb;
case 0x6835ee:c.instructions+=1;goto B6835ee;
case 0x6835f3:goto L6835f3;
case 0x6835f5:c.instructions+=2;goto B6835f5;
case 0x6835f7:c.instructions+=1;goto B6835f7;
case 0x6835fd:goto L6835fd;
case 0x6835ff:c.instructions+=11;goto B6835ff;
case 0x683602:c.instructions+=10;goto B683602;
case 0x683605:c.instructions+=9;goto B683605;
case 0x683608:c.instructions+=8;goto B683608;
case 0x68360d:c.instructions+=7;goto B68360d;
case 0x683610:c.instructions+=6;goto B683610;
case 0x683613:c.instructions+=5;goto B683613;
case 0x683618:c.instructions+=4;goto B683618;
case 0x683619:c.instructions+=3;goto B683619;
case 0x68361c:c.instructions+=2;goto B68361c;
case 0x68361e:c.instructions+=1;goto B68361e;
case 0x683623:goto L683623;
case 0x683625:c.instructions+=2;goto B683625;
case 0x683627:c.instructions+=1;goto B683627;
case 0x68362d:goto L68362d;
case 0x683630:c.instructions+=9;goto B683630;
case 0x683632:c.instructions+=8;goto B683632;
case 0x683634:c.instructions+=7;goto B683634;
case 0x683637:c.instructions+=6;goto B683637;
case 0x68363c:c.instructions+=5;goto B68363c;
case 0x68363f:c.instructions+=4;goto B68363f;
case 0x683641:c.instructions+=3;goto B683641;
case 0x683642:c.instructions+=2;goto B683642;
case 0x683645:c.instructions+=1;goto B683645;
case 0x68364a:goto L68364a;
case 0x68364c:c.instructions+=2;goto B68364c;
case 0x68364e:c.instructions+=1;goto B68364e;
case 0x683654:goto L683654;
case 0x683657:c.instructions+=4;goto B683657;
case 0x683659:c.instructions+=3;goto B683659;
case 0x68365c:c.instructions+=2;goto B68365c;
case 0x68365f:c.instructions+=1;goto B68365f;
case 0x683664:goto L683664;
case 0x683666:c.instructions+=1;goto B683666;
case 0x68366c:goto L68366c;
case 0x68366e:c.instructions+=1;goto B68366e;
case 0x683674:goto L683674;
case 0x683678:c.instructions+=1;goto B683678;
case 0x68367e:goto L68367e;
case 0x68367f:c.instructions+=3;goto B68367f;
case 0x683682:c.instructions+=2;goto B683682;
case 0x683684:c.instructions+=1;goto B683684;
case 0x683689:goto L683689;
case 0x68368b:c.instructions+=2;goto B68368b;
case 0x68368d:c.instructions+=1;goto B68368d;
case 0x683693:goto L683693;
case 0x683695:goto L683695;
case 0x683698:c.instructions+=2;goto B683698;
case 0x68369a:c.instructions+=1;goto B68369a;
case 0x68369f:goto L68369f;
case 0x6836a2:c.instructions+=2;goto B6836a2;
case 0x6836a7:c.instructions+=1;goto B6836a7;
case 0x6836ac:goto L6836ac;
case 0x6836ae:c.instructions+=1;goto B6836ae;
case 0x6836b4:goto L6836b4;
case 0x6836b6:c.instructions+=1;goto B6836b6;
case 0x6836bc:goto L6836bc;
case 0x6836c0:c.instructions+=1;goto B6836c0;
case 0x6836c6:goto L6836c6;
case 0x6836c7:c.instructions+=2;goto B6836c7;
case 0x6836c9:c.instructions+=1;goto B6836c9;
case 0x6836ce:goto L6836ce;
case 0x6836d0:c.instructions+=2;goto B6836d0;
case 0x6836d3:c.instructions+=1;goto B6836d3;
case 0x6836d9:goto L6836d9;
case 0x6836da:c.instructions+=3;goto B6836da;
case 0x6836db:c.instructions+=2;goto B6836db;
case 0x6836dd:c.instructions+=1;goto B6836dd;
case 0x6836e2:goto L6836e2;
case 0x6836e4:c.instructions+=2;goto B6836e4;
case 0x6836e6:c.instructions+=1;goto B6836e6;
case 0x6836ec:goto L6836ec;
case 0x6836ed:c.instructions+=3;goto B6836ed;
case 0x6836f0:c.instructions+=2;goto B6836f0;
case 0x6836f2:c.instructions+=1;goto B6836f2;
case 0x6836f7:goto L6836f7;
case 0x6836f9:c.instructions+=2;goto B6836f9;
case 0x6836fb:c.instructions+=1;goto B6836fb;
case 0x683701:goto L683701;
case 0x683703:c.instructions+=11;goto B683703;
case 0x683705:c.instructions+=10;goto B683705;
case 0x683708:c.instructions+=9;goto B683708;
case 0x68370b:c.instructions+=8;goto B68370b;
case 0x683710:c.instructions+=7;goto B683710;
case 0x683713:c.instructions+=6;goto B683713;
case 0x683716:c.instructions+=5;goto B683716;
case 0x68371b:c.instructions+=4;goto B68371b;
case 0x68371c:c.instructions+=3;goto B68371c;
case 0x68371f:c.instructions+=2;goto B68371f;
case 0x683721:c.instructions+=1;goto B683721;
case 0x683726:goto L683726;
case 0x683728:c.instructions+=2;goto B683728;
case 0x68372a:c.instructions+=1;goto B68372a;
case 0x683730:goto L683730;
case 0x683733:c.instructions+=3;goto B683733;
case 0x683735:c.instructions+=2;goto B683735;
case 0x683738:c.instructions+=1;goto B683738;
case 0x68373d:goto L68373d;
case 0x68373f:c.instructions+=1;goto B68373f;
case 0x683745:goto L683745;
case 0x683747:c.instructions+=1;goto B683747;
case 0x68374d:goto L68374d;
case 0x683751:c.instructions+=1;goto B683751;
case 0x683757:goto L683757;
case 0x683759:c.instructions+=4;goto B683759;
case 0x68375c:c.instructions+=3;goto B68375c;
case 0x68375d:c.instructions+=2;goto B68375d;
case 0x68375f:c.instructions+=1;goto B68375f;
case 0x683764:goto L683764;
case 0x683766:c.instructions+=1;goto B683766;
case 0x68376c:goto L68376c;
case 0x68376e:c.instructions+=2;goto B68376e;
case 0x683770:c.instructions+=1;goto B683770;
case 0x683773:goto L683773;
case 0x683777:c.instructions+=4;goto B683777;
case 0x683778:c.instructions+=3;goto B683778;
case 0x68377a:c.instructions+=2;goto B68377a;
case 0x68377d:c.instructions+=1;goto B68377d;
case 0x68377f:goto L68377f;
case 0x683781:goto L683781;
case 0x683782:c.instructions+=3;goto B683782;
case 0x683786:c.instructions+=2;goto B683786;
case 0x683788:c.instructions+=1;goto B683788;
case 0x68378d:goto L68378d;
case 0x68378f:c.instructions+=2;goto B68378f;
case 0x683791:c.instructions+=1;goto B683791;
case 0x683797:goto L683797;
case 0x683798:c.instructions+=2;goto B683798;
case 0x68379b:c.instructions+=1;goto B68379b;
case 0x68379d:goto L68379d;
case 0x68379e:c.instructions+=3;goto B68379e;
case 0x6837a1:c.instructions+=2;goto B6837a1;
case 0x6837a3:c.instructions+=1;goto B6837a3;
case 0x6837a8:goto L6837a8;
case 0x6837aa:c.instructions+=2;goto B6837aa;
case 0x6837ac:c.instructions+=1;goto B6837ac;
case 0x6837b2:goto L6837b2;
case 0x6837b4:c.instructions+=12;goto B6837b4;
case 0x6837b7:c.instructions+=11;goto B6837b7;
case 0x6837b9:c.instructions+=10;goto B6837b9;
case 0x6837bc:c.instructions+=9;goto B6837bc;
case 0x6837c1:c.instructions+=8;goto B6837c1;
case 0x6837c4:c.instructions+=7;goto B6837c4;
case 0x6837c7:c.instructions+=6;goto B6837c7;
case 0x6837cd:c.instructions+=5;goto B6837cd;
case 0x6837d0:c.instructions+=4;goto B6837d0;
case 0x6837d2:c.instructions+=3;goto B6837d2;
case 0x6837d5:c.instructions+=2;goto B6837d5;
case 0x6837d8:c.instructions+=1;goto B6837d8;
case 0x6837dd:goto L6837dd;
case 0x6837df:c.instructions+=2;goto B6837df;
case 0x6837e1:c.instructions+=1;goto B6837e1;
case 0x6837e7:goto L6837e7;
case 0x6837ea:c.instructions+=10;goto B6837ea;
case 0x6837ec:c.instructions+=9;goto B6837ec;
case 0x6837ee:c.instructions+=8;goto B6837ee;
case 0x6837f1:c.instructions+=7;goto B6837f1;
case 0x6837f6:c.instructions+=6;goto B6837f6;
case 0x6837f9:c.instructions+=5;goto B6837f9;
case 0x6837fb:c.instructions+=4;goto B6837fb;
case 0x6837fc:c.instructions+=3;goto B6837fc;
case 0x6837ff:c.instructions+=2;goto B6837ff;
case 0x683802:c.instructions+=1;goto B683802;
case 0x683807:goto L683807;
case 0x683809:c.instructions+=2;goto B683809;
case 0x68380b:c.instructions+=1;goto B68380b;
case 0x683811:goto L683811;
case 0x683814:c.instructions+=9;goto B683814;
case 0x683816:c.instructions+=8;goto B683816;
case 0x683819:c.instructions+=7;goto B683819;
case 0x68381e:c.instructions+=6;goto B68381e;
case 0x683821:c.instructions+=5;goto B683821;
case 0x683823:c.instructions+=4;goto B683823;
case 0x683826:c.instructions+=3;goto B683826;
case 0x683827:c.instructions+=2;goto B683827;
case 0x68382a:c.instructions+=1;goto B68382a;
case 0x68382f:goto L68382f;
case 0x683831:c.instructions+=2;goto B683831;
case 0x683833:c.instructions+=1;goto B683833;
case 0x683839:goto L683839;
case 0x68383b:c.instructions+=7;goto B68383b;
case 0x68383d:c.instructions+=6;goto B68383d;
case 0x683840:c.instructions+=5;goto B683840;
case 0x683842:c.instructions+=4;goto B683842;
case 0x683845:c.instructions+=3;goto B683845;
case 0x683848:c.instructions+=2;goto B683848;
case 0x68384b:c.instructions+=1;goto B68384b;
case 0x683850:goto L683850;
case 0x683852:c.instructions+=2;goto B683852;
case 0x683854:c.instructions+=1;goto B683854;
case 0x68385a:goto L68385a;
case 0x68385b:c.instructions+=7;goto B68385b;
case 0x68385e:c.instructions+=6;goto B68385e;
case 0x683860:c.instructions+=5;goto B683860;
case 0x683863:c.instructions+=4;goto B683863;
case 0x683866:c.instructions+=3;goto B683866;
case 0x683869:c.instructions+=2;goto B683869;
case 0x68386c:c.instructions+=1;goto B68386c;
case 0x683871:goto L683871;
case 0x683873:c.instructions+=2;goto B683873;
case 0x683875:c.instructions+=1;goto B683875;
case 0x68387b:goto L68387b;
case 0x68387e:c.instructions+=9;goto B68387e;
case 0x683880:c.instructions+=8;goto B683880;
case 0x683882:c.instructions+=7;goto B683882;
case 0x683885:c.instructions+=6;goto B683885;
case 0x68388a:c.instructions+=5;goto B68388a;
case 0x68388d:c.instructions+=4;goto B68388d;
case 0x68388f:c.instructions+=3;goto B68388f;
case 0x683890:c.instructions+=2;goto B683890;
case 0x683893:c.instructions+=1;goto B683893;
case 0x683898:goto L683898;
case 0x68389a:c.instructions+=2;goto B68389a;
case 0x68389c:c.instructions+=1;goto B68389c;
case 0x6838a2:goto L6838a2;
case 0x6838a4:c.instructions+=7;goto B6838a4;
case 0x6838a7:c.instructions+=6;goto B6838a7;
case 0x6838a9:c.instructions+=5;goto B6838a9;
case 0x6838ac:c.instructions+=4;goto B6838ac;
case 0x6838af:c.instructions+=3;goto B6838af;
case 0x6838b2:c.instructions+=2;goto B6838b2;
case 0x6838b5:c.instructions+=1;goto B6838b5;
case 0x6838ba:goto L6838ba;
case 0x6838bc:c.instructions+=2;goto B6838bc;
case 0x6838be:c.instructions+=1;goto B6838be;
case 0x6838c4:goto L6838c4;
case 0x6838c7:c.instructions+=9;goto B6838c7;
case 0x6838c9:c.instructions+=8;goto B6838c9;
case 0x6838cb:c.instructions+=7;goto B6838cb;
case 0x6838ce:c.instructions+=6;goto B6838ce;
case 0x6838d3:c.instructions+=5;goto B6838d3;
case 0x6838d6:c.instructions+=4;goto B6838d6;
case 0x6838d8:c.instructions+=3;goto B6838d8;
case 0x6838d9:c.instructions+=2;goto B6838d9;
case 0x6838dc:c.instructions+=1;goto B6838dc;
case 0x6838e1:goto L6838e1;
case 0x6838e3:c.instructions+=2;goto B6838e3;
case 0x6838e5:c.instructions+=1;goto B6838e5;
case 0x6838eb:goto L6838eb;
case 0x6838ed:c.instructions+=5;goto B6838ed;
case 0x6838f0:c.instructions+=4;goto B6838f0;
case 0x6838f3:c.instructions+=3;goto B6838f3;
case 0x6838f6:c.instructions+=2;goto B6838f6;
case 0x6838f9:c.instructions+=1;goto B6838f9;
case 0x6838fe:goto L6838fe;
case 0x683900:c.instructions+=1;goto B683900;
case 0x683906:goto L683906;
case 0x683909:c.instructions+=10;goto B683909;
case 0x68390c:c.instructions+=9;goto B68390c;
case 0x68390f:c.instructions+=8;goto B68390f;
case 0x683911:c.instructions+=7;goto B683911;
case 0x683914:c.instructions+=6;goto B683914;
case 0x683917:c.instructions+=5;goto B683917;
case 0x68391a:c.instructions+=4;goto B68391a;
case 0x68391b:c.instructions+=3;goto B68391b;
case 0x68391e:c.instructions+=2;goto B68391e;
case 0x683921:c.instructions+=1;goto B683921;
case 0x683926:goto L683926;
case 0x68392b:goto L68392b;
case 0x68392d:c.instructions+=1;goto B68392d;
case 0x683933:goto L683933;
case 0x683936:c.instructions+=2;goto B683936;
case 0x683938:c.instructions+=1;goto B683938;
case 0x68393e:goto L68393e;
case 0x683941:c.instructions+=2;goto B683941;
case 0x683944:c.instructions+=1;goto B683944;
case 0x683946:goto L683946;
case 0x68394a:c.instructions+=1;goto B68394a;
case 0x683950:goto L683950;
case 0x683954:c.instructions+=1;goto B683954;
case 0x68395a:goto L68395a;
case 0x68395d:c.instructions+=4;goto B68395d;
case 0x683960:c.instructions+=3;goto B683960;
case 0x683963:c.instructions+=2;goto B683963;
case 0x683966:c.instructions+=1;goto B683966;
case 0x683969:goto L683969;
case 0x68396b:goto L68396b;
case 0x68396e:c.instructions+=1;goto B68396e;
case 0x683973:goto L683973;
case 0x683976:c.instructions+=1;goto B683976;
case 0x68397c:goto L68397c;
case 0x683980:c.instructions+=1;goto B683980;
case 0x683986:goto L683986;
case 0x683988:c.instructions+=3;goto B683988;
case 0x68398a:c.instructions+=2;goto B68398a;
case 0x68398c:c.instructions+=1;goto B68398c;
case 0x683992:goto L683992;
case 0x683995:c.instructions+=9;goto B683995;
case 0x683998:c.instructions+=8;goto B683998;
case 0x68399b:c.instructions+=7;goto B68399b;
case 0x68399e:c.instructions+=6;goto B68399e;
case 0x6839a1:c.instructions+=5;goto B6839a1;
case 0x6839a4:c.instructions+=4;goto B6839a4;
case 0x6839a7:c.instructions+=3;goto B6839a7;
case 0x6839a8:c.instructions+=2;goto B6839a8;
case 0x6839aa:c.instructions+=1;goto B6839aa;
case 0x6839ac:goto L6839ac;
case 0x6839b1:goto L6839b1;
case 0x6839b3:c.instructions+=1;goto B6839b3;
case 0x6839b9:goto L6839b9;
case 0x6839bb:c.instructions+=1;goto B6839bb;
case 0x6839c1:goto L6839c1;
case 0x6839c5:c.instructions+=1;goto B6839c5;
case 0x6839cb:goto L6839cb;
case 0x6839ce:c.instructions+=3;goto B6839ce;
case 0x6839cf:c.instructions+=2;goto B6839cf;
case 0x6839d1:c.instructions+=1;goto B6839d1;
case 0x6839d6:goto L6839d6;
case 0x6839d8:c.instructions+=1;goto B6839d8;
case 0x6839de:goto L6839de;
case 0x6839e0:c.instructions+=2;goto B6839e0;
case 0x6839e2:c.instructions+=1;goto B6839e2;
case 0x6839e5:goto L6839e5;
case 0x6839e9:c.instructions+=4;goto B6839e9;
case 0x6839ea:c.instructions+=3;goto B6839ea;
case 0x6839ec:c.instructions+=2;goto B6839ec;
case 0x6839ef:c.instructions+=1;goto B6839ef;
case 0x6839f1:goto L6839f1;
case 0x6839f5:c.instructions+=3;goto B6839f5;
case 0x6839f7:c.instructions+=2;goto B6839f7;
case 0x6839fa:c.instructions+=1;goto B6839fa;
case 0x683a00:goto L683a00;
case 0x683a03:c.instructions+=7;goto B683a03;
case 0x683a05:c.instructions+=6;goto B683a05;
case 0x683a08:c.instructions+=5;goto B683a08;
case 0x683a0b:c.instructions+=4;goto B683a0b;
case 0x683a0d:c.instructions+=3;goto B683a0d;
case 0x683a10:c.instructions+=2;goto B683a10;
case 0x683a13:c.instructions+=1;goto B683a13;
case 0x683a16:goto L683a16;
case 0x683a19:c.instructions+=7;goto B683a19;
case 0x683a1c:c.instructions+=6;goto B683a1c;
case 0x683a1d:c.instructions+=5;goto B683a1d;
case 0x683a20:c.instructions+=4;goto B683a20;
case 0x683a22:c.instructions+=3;goto B683a22;
case 0x683a25:c.instructions+=2;goto B683a25;
case 0x683a27:c.instructions+=1;goto B683a27;
case 0x683a2c:goto L683a2c;
case 0x683a2e:c.instructions+=1;goto B683a2e;
case 0x683a30:goto L683a30;
case 0x683a36:c.instructions+=5;goto B683a36;
case 0x683a39:c.instructions+=4;goto B683a39;
case 0x683a3b:c.instructions+=3;goto B683a3b;
case 0x683a3d:c.instructions+=2;goto B683a3d;
case 0x683a40:c.instructions+=1;goto B683a40;
case 0x683a42:goto L683a42;
case 0x683a45:c.instructions+=4;goto B683a45;
case 0x683a47:c.instructions+=3;goto B683a47;
case 0x683a49:c.instructions+=2;goto B683a49;
case 0x683a4c:c.instructions+=1;goto B683a4c;
case 0x683a4e:goto L683a4e;
case 0x683a50:c.instructions+=5;goto B683a50;
case 0x683a53:c.instructions+=4;goto B683a53;
case 0x683a55:c.instructions+=3;goto B683a55;
case 0x683a57:c.instructions+=2;goto B683a57;
case 0x683a5a:c.instructions+=1;goto B683a5a;
case 0x683a5c:goto L683a5c;
case 0x683a5e:c.instructions+=6;goto B683a5e;
case 0x683a61:c.instructions+=5;goto B683a61;
case 0x683a63:c.instructions+=4;goto B683a63;
case 0x683a65:c.instructions+=3;goto B683a65;
case 0x683a67:c.instructions+=2;goto B683a67;
case 0x683a6a:c.instructions+=1;goto B683a6a;
case 0x683a6c:goto L683a6c;
case 0x683a6f:c.instructions+=1;goto B683a6f;
case 0x683a71:goto L683a71;
case 0x683a74:c.instructions+=2;goto B683a74;
case 0x683a76:c.instructions+=1;goto B683a76;
case 0x683a78:goto L683a78;
case 0x683a7a:c.instructions+=6;goto B683a7a;
case 0x683a7d:c.instructions+=5;goto B683a7d;
case 0x683a81:c.instructions+=4;goto B683a81;
case 0x683a83:c.instructions+=3;goto B683a83;
case 0x683a86:c.instructions+=2;goto B683a86;
case 0x683a89:c.instructions+=1;goto B683a89;
case 0x683a8b:goto L683a8b;
case 0x683a8d:goto L683a8d;
case 0x683a8f:goto L683a8f;
case 0x683a92:c.instructions+=3;goto B683a92;
case 0x683a94:c.instructions+=2;goto B683a94;
case 0x683a95:c.instructions+=1;goto B683a95;
case 0x683a97:goto L683a97;
case 0x683a9a:c.instructions+=1;goto B683a9a;
case 0x683a9f:goto L683a9f;
case 0x683aa1:c.instructions+=2;goto B683aa1;
case 0x683aa3:c.instructions+=1;goto B683aa3;
case 0x683aa9:goto L683aa9;
case 0x683aab:c.instructions+=2;goto B683aab;
case 0x683aad:c.instructions+=1;goto B683aad;
case 0x683ab0:goto L683ab0;
case 0x683ab2:c.instructions+=3;goto B683ab2;
case 0x683ab7:c.instructions+=2;goto B683ab7;
case 0x683abc:c.instructions+=1;goto B683abc;
case 0x683ac1:goto L683ac1;
case 0x683ac4:c.instructions+=1;goto B683ac4;
case 0x683ac9:goto L683ac9;
case 0x683acb:c.instructions+=2;goto B683acb;
case 0x683acd:c.instructions+=1;goto B683acd;
case 0x683ad3:goto L683ad3;
case 0x683ad4:c.instructions+=3;goto B683ad4;
case 0x683ad7:c.instructions+=2;goto B683ad7;
case 0x683ad9:c.instructions+=1;goto B683ad9;
case 0x683ade:goto L683ade;
case 0x683ae0:c.instructions+=2;goto B683ae0;
case 0x683ae2:c.instructions+=1;goto B683ae2;
case 0x683ae8:goto L683ae8;
case 0x683ae9:c.instructions+=3;goto B683ae9;
case 0x683aec:c.instructions+=2;goto B683aec;
case 0x683aee:c.instructions+=1;goto B683aee;
case 0x683af3:goto L683af3;
case 0x683af5:c.instructions+=2;goto B683af5;
case 0x683af7:c.instructions+=1;goto B683af7;
case 0x683afd:goto L683afd;
case 0x683afe:c.instructions+=6;goto B683afe;
case 0x683b01:c.instructions+=5;goto B683b01;
case 0x683b03:c.instructions+=4;goto B683b03;
case 0x683b06:c.instructions+=3;goto B683b06;
case 0x683b09:c.instructions+=2;goto B683b09;
case 0x683b0c:c.instructions+=1;goto B683b0c;
case 0x683b11:goto L683b11;
case 0x683b13:c.instructions+=2;goto B683b13;
case 0x683b15:c.instructions+=1;goto B683b15;
case 0x683b1b:goto L683b1b;
case 0x683b1d:c.instructions+=10;goto B683b1d;
case 0x683b20:c.instructions+=9;goto B683b20;
case 0x683b22:c.instructions+=8;goto B683b22;
case 0x683b25:c.instructions+=7;goto B683b25;
case 0x683b2a:c.instructions+=6;goto B683b2a;
case 0x683b2d:c.instructions+=5;goto B683b2d;
case 0x683b32:c.instructions+=4;goto B683b32;
case 0x683b33:c.instructions+=3;goto B683b33;
case 0x683b36:c.instructions+=2;goto B683b36;
case 0x683b38:c.instructions+=1;goto B683b38;
case 0x683b3d:goto L683b3d;
case 0x683b3f:c.instructions+=2;goto B683b3f;
case 0x683b41:c.instructions+=1;goto B683b41;
case 0x683b47:goto L683b47;
case 0x683b4a:c.instructions+=9;goto B683b4a;
case 0x683b4b:c.instructions+=8;goto B683b4b;
case 0x683b4e:c.instructions+=7;goto B683b4e;
case 0x683b50:c.instructions+=6;goto B683b50;
case 0x683b51:c.instructions+=5;goto B683b51;
case 0x683b54:c.instructions+=4;goto B683b54;
case 0x683b55:c.instructions+=3;goto B683b55;
case 0x683b58:c.instructions+=2;goto B683b58;
case 0x683b5b:c.instructions+=1;goto B683b5b;
case 0x683b60:goto L683b60;
case 0x683b65:goto L683b65;
case 0x683b68:c.instructions+=4;goto B683b68;
case 0x683b69:c.instructions+=3;goto B683b69;
case 0x683b6c:c.instructions+=2;goto B683b6c;
case 0x683b6e:c.instructions+=1;goto B683b6e;
case 0x683b73:goto L683b73;
case 0x683b75:c.instructions+=1;goto B683b75;
case 0x683b77:goto L683b77;
case 0x683b7a:c.instructions+=5;goto B683b7a;
case 0x683b7f:c.instructions+=4;goto B683b7f;
case 0x683b84:c.instructions+=3;goto B683b84;
case 0x683b85:c.instructions+=2;goto B683b85;
case 0x683b86:c.instructions+=1;goto B683b86;
case 0x683b8b:goto L683b8b;
case 0x683b8e:c.instructions+=1;goto B683b8e;
case 0x683b93:goto L683b93;
case 0x683b96:c.instructions+=9;goto B683b96;
case 0x683b99:c.instructions+=8;goto B683b99;
case 0x683b9b:c.instructions+=7;goto B683b9b;
case 0x683b9d:c.instructions+=6;goto B683b9d;
case 0x683ba0:c.instructions+=5;goto B683ba0;
case 0x683ba3:c.instructions+=4;goto B683ba3;
case 0x683ba5:c.instructions+=3;goto B683ba5;
case 0x683ba6:c.instructions+=2;goto B683ba6;
case 0x683ba9:c.instructions+=1;goto B683ba9;
case 0x683bae:goto L683bae;
case 0x683bb1:c.instructions+=1;goto B683bb1;
case 0x683bb6:goto L683bb6;
case 0x683bb9:c.instructions+=3;goto B683bb9;
case 0x683bbb:c.instructions+=2;goto B683bbb;
case 0x683bbe:c.instructions+=1;goto B683bbe;
case 0x683bc3:goto L683bc3;
case 0x683bc8:goto L683bc8;
case 0x683bca:c.instructions+=2;goto B683bca;
case 0x683bcb:c.instructions+=1;goto B683bcb;
case 0x683bcd:goto L683bcd;
case 0x683bcf:goto L683bcf;
case 0x683bd1:c.instructions+=1;goto B683bd1;
case 0x683bd3:goto L683bd3;
case 0x683bd5:c.instructions+=3;goto B683bd5;
case 0x683bd8:c.instructions+=2;goto B683bd8;
case 0x683bd9:c.instructions+=1;goto B683bd9;
case 0x683bde:goto L683bde;
case 0x683be0:c.instructions+=3;goto B683be0;
case 0x683be1:c.instructions+=2;goto B683be1;
case 0x683be4:c.instructions+=1;goto B683be4;
case 0x683bea:goto L683bea;
case 0x683bf0:c.instructions+=1;goto B683bf0;
case 0x683bf5:goto L683bf5;
case 0x683bf8:c.instructions+=12;goto B683bf8;
case 0x683bf9:c.instructions+=11;goto B683bf9;
case 0x683bff:c.instructions+=10;goto B683bff;
case 0x683c05:c.instructions+=9;goto B683c05;
case 0x683c0b:c.instructions+=8;goto B683c0b;
case 0x683c0e:c.instructions+=7;goto B683c0e;
case 0x683c11:c.instructions+=6;goto B683c11;
case 0x683c12:c.instructions+=5;goto B683c12;
case 0x683c15:c.instructions+=4;goto B683c15;
case 0x683c18:c.instructions+=3;goto B683c18;
case 0x683c1b:c.instructions+=2;goto B683c1b;
case 0x683c1d:c.instructions+=1;goto B683c1d;
case 0x683c22:goto L683c22;
case 0x683c24:c.instructions+=5;goto B683c24;
case 0x683c26:c.instructions+=4;goto B683c26;
case 0x683c29:c.instructions+=3;goto B683c29;
case 0x683c2c:c.instructions+=2;goto B683c2c;
case 0x683c2f:c.instructions+=1;goto B683c2f;
case 0x683c35:goto L683c35;
case 0x683c38:c.instructions+=8;goto B683c38;
case 0x683c3b:c.instructions+=7;goto B683c3b;
case 0x683c3e:c.instructions+=6;goto B683c3e;
case 0x683c40:c.instructions+=5;goto B683c40;
case 0x683c43:c.instructions+=4;goto B683c43;
case 0x683c46:c.instructions+=3;goto B683c46;
case 0x683c49:c.instructions+=2;goto B683c49;
case 0x683c4c:c.instructions+=1;goto B683c4c;
case 0x683c4e:goto L683c4e;
case 0x683c51:goto L683c51;
case 0x683c54:c.instructions+=6;goto B683c54;
case 0x683c57:c.instructions+=5;goto B683c57;
case 0x683c59:c.instructions+=4;goto B683c59;
case 0x683c5c:c.instructions+=3;goto B683c5c;
case 0x683c5f:c.instructions+=2;goto B683c5f;
case 0x683c62:c.instructions+=1;goto B683c62;
case 0x683c64:goto L683c64;
case 0x683c67:c.instructions+=2;goto B683c67;
case 0x683c6a:c.instructions+=1;goto B683c6a;
case 0x683c6c:goto L683c6c;
case 0x683c6e:goto L683c6e;
case 0x683c70:c.instructions+=1;goto B683c70;
case 0x683c76:goto L683c76;
case 0x683c79:c.instructions+=3;goto B683c79;
case 0x683c7c:c.instructions+=2;goto B683c7c;
case 0x683c7e:c.instructions+=1;goto B683c7e;
case 0x683c80:goto L683c80;
case 0x683c83:c.instructions+=1;goto B683c83;
case 0x683c85:goto L683c85;
case 0x683c88:c.instructions+=1;goto B683c88;
case 0x683c8a:goto L683c8a;
case 0x683c8d:c.instructions+=3;goto B683c8d;
case 0x683c90:c.instructions+=2;goto B683c90;
case 0x683c96:c.instructions+=1;goto B683c96;
case 0x683c98:goto L683c98;
case 0x683c9a:c.instructions+=1;goto B683c9a;
case 0x683c9c:goto L683c9c;
case 0x683c9f:c.instructions+=1;goto B683c9f;
case 0x683ca1:goto L683ca1;
case 0x683ca4:c.instructions+=1;goto B683ca4;
case 0x683ca6:goto L683ca6;
case 0x683ca9:c.instructions+=3;goto B683ca9;
case 0x683cac:c.instructions+=2;goto B683cac;
case 0x683cb2:c.instructions+=1;goto B683cb2;
case 0x683cb4:goto L683cb4;
case 0x683cb7:c.instructions+=1;goto B683cb7;
case 0x683cba:goto L683cba;
case 0x683cbd:c.instructions+=3;goto B683cbd;
case 0x683cc1:c.instructions+=2;goto B683cc1;
case 0x683cc4:c.instructions+=1;goto B683cc4;
case 0x683cc6:goto L683cc6;
case 0x683cca:c.instructions+=1;goto B683cca;
case 0x683cd0:goto L683cd0;
case 0x683cd3:c.instructions+=4;goto B683cd3;
case 0x683cd6:c.instructions+=3;goto B683cd6;
case 0x683cd7:c.instructions+=2;goto B683cd7;
case 0x683cd9:c.instructions+=1;goto B683cd9;
case 0x683cde:goto L683cde;
case 0x683ce0:c.instructions+=1;goto B683ce0;
case 0x683ce6:goto L683ce6;
case 0x683ce8:goto L683ce8;
case 0x683cec:c.instructions+=4;goto B683cec;
case 0x683ced:c.instructions+=3;goto B683ced;
case 0x683cef:c.instructions+=2;goto B683cef;
case 0x683cf2:c.instructions+=1;goto B683cf2;
case 0x683cf4:goto L683cf4;
case 0x683cf7:c.instructions+=3;goto B683cf7;
case 0x683cf9:c.instructions+=2;goto B683cf9;
case 0x683cfc:c.instructions+=1;goto B683cfc;
case 0x683d01:goto L683d01;
case 0x683d03:c.instructions+=2;goto B683d03;
case 0x683d05:c.instructions+=1;goto B683d05;
case 0x683d0b:goto L683d0b;
case 0x683d0e:c.instructions+=3;goto B683d0e;
case 0x683d10:c.instructions+=2;goto B683d10;
case 0x683d13:c.instructions+=1;goto B683d13;
case 0x683d18:goto L683d18;
case 0x683d1a:c.instructions+=2;goto B683d1a;
case 0x683d1c:c.instructions+=1;goto B683d1c;
case 0x683d22:goto L683d22;
case 0x683d25:c.instructions+=8;goto B683d25;
case 0x683d28:c.instructions+=7;goto B683d28;
case 0x683d2b:c.instructions+=6;goto B683d2b;
case 0x683d2e:c.instructions+=5;goto B683d2e;
case 0x683d30:c.instructions+=4;goto B683d30;
case 0x683d32:c.instructions+=3;goto B683d32;
case 0x683d35:c.instructions+=2;goto B683d35;
case 0x683d38:c.instructions+=1;goto B683d38;
case 0x683d3b:goto L683d3b;
case 0x683d3f:c.instructions+=1;goto B683d3f;
case 0x683d41:goto L683d41;
case 0x683d43:c.instructions+=5;goto B683d43;
case 0x683d46:c.instructions+=4;goto B683d46;
case 0x683d49:c.instructions+=3;goto B683d49;
case 0x683d4c:c.instructions+=2;goto B683d4c;
case 0x683d50:c.instructions+=1;goto B683d50;
case 0x683d52:goto L683d52;
case 0x683d54:c.instructions+=1;goto B683d54;
case 0x683d56:goto L683d56;
case 0x683d5b:c.instructions+=1;goto B683d5b;
case 0x683d60:goto L683d60;
case 0x683d63:goto L683d63;
case 0x683d65:c.instructions+=2;goto B683d65;
case 0x683d68:c.instructions+=1;goto B683d68;
case 0x683d6b:goto L683d6b;
case 0x683d6e:c.instructions+=2;goto B683d6e;
case 0x683d71:c.instructions+=1;goto B683d71;
case 0x683d73:goto L683d73;
case 0x683d76:c.instructions+=6;goto B683d76;
case 0x683d78:c.instructions+=5;goto B683d78;
case 0x683d7b:c.instructions+=4;goto B683d7b;
case 0x683d7e:c.instructions+=3;goto B683d7e;
case 0x683d81:c.instructions+=2;goto B683d81;
case 0x683d84:c.instructions+=1;goto B683d84;
case 0x683d89:goto L683d89;
case 0x683d8b:c.instructions+=2;goto B683d8b;
case 0x683d8d:c.instructions+=1;goto B683d8d;
case 0x683d93:goto L683d93;
case 0x683d96:c.instructions+=10;goto B683d96;
case 0x683d98:c.instructions+=9;goto B683d98;
case 0x683d9b:c.instructions+=8;goto B683d9b;
case 0x683da0:c.instructions+=7;goto B683da0;
case 0x683da3:c.instructions+=6;goto B683da3;
case 0x683da8:c.instructions+=5;goto B683da8;
case 0x683dab:c.instructions+=4;goto B683dab;
case 0x683dad:c.instructions+=3;goto B683dad;
case 0x683dae:c.instructions+=2;goto B683dae;
case 0x683db1:c.instructions+=1;goto B683db1;
case 0x683db6:goto L683db6;
case 0x683db8:c.instructions+=2;goto B683db8;
case 0x683dba:c.instructions+=1;goto B683dba;
case 0x683dc0:goto L683dc0;
case 0x683dc3:c.instructions+=2;goto B683dc3;
case 0x683dc6:c.instructions+=1;goto B683dc6;
case 0x683dc8:goto L683dc8;
case 0x683dcb:c.instructions+=2;goto B683dcb;
case 0x683dcf:c.instructions+=1;goto B683dcf;
case 0x683dd1:goto L683dd1;
case 0x683dd3:c.instructions+=2;goto B683dd3;
case 0x683dd5:c.instructions+=1;goto B683dd5;
case 0x683dd8:goto L683dd8;
case 0x683ddb:c.instructions+=2;goto B683ddb;
case 0x683ddc:c.instructions+=1;goto B683ddc;
case 0x683dde:goto L683dde;
case 0x683de2:c.instructions+=1;goto B683de2;
case 0x683de8:goto L683de8;
case 0x683deb:c.instructions+=5;goto B683deb;
case 0x683ded:c.instructions+=4;goto B683ded;
case 0x683df0:c.instructions+=3;goto B683df0;
case 0x683df1:c.instructions+=2;goto B683df1;
case 0x683df3:c.instructions+=1;goto B683df3;
case 0x683df8:goto L683df8;
case 0x683dfa:c.instructions+=1;goto B683dfa;
case 0x683dfc:goto L683dfc;
case 0x683e01:c.instructions+=4;goto B683e01;
case 0x683e03:c.instructions+=3;goto B683e03;
case 0x683e06:c.instructions+=2;goto B683e06;
case 0x683e07:c.instructions+=1;goto B683e07;
case 0x683e0c:goto L683e0c;
case 0x683e0f:c.instructions+=2;goto B683e0f;
case 0x683e14:c.instructions+=1;goto B683e14;
case 0x683e19:goto L683e19;
case 0x683e1b:c.instructions+=2;goto B683e1b;
case 0x683e1d:c.instructions+=1;goto B683e1d;
case 0x683e20:goto L683e20;
case 0x683e24:c.instructions+=4;goto B683e24;
case 0x683e25:c.instructions+=3;goto B683e25;
case 0x683e27:c.instructions+=2;goto B683e27;
case 0x683e2a:c.instructions+=1;goto B683e2a;
case 0x683e2c:goto L683e2c;
case 0x683e2f:c.instructions+=8;goto B683e2f;
case 0x683e32:c.instructions+=7;goto B683e32;
case 0x683e35:c.instructions+=6;goto B683e35;
case 0x683e38:c.instructions+=5;goto B683e38;
case 0x683e3a:c.instructions+=4;goto B683e3a;
case 0x683e3c:c.instructions+=3;goto B683e3c;
case 0x683e3f:c.instructions+=2;goto B683e3f;
case 0x683e42:c.instructions+=1;goto B683e42;
case 0x683e45:goto L683e45;
case 0x683e49:c.instructions+=1;goto B683e49;
case 0x683e4b:goto L683e4b;
case 0x683e4d:c.instructions+=5;goto B683e4d;
case 0x683e50:c.instructions+=4;goto B683e50;
case 0x683e53:c.instructions+=3;goto B683e53;
case 0x683e56:c.instructions+=2;goto B683e56;
case 0x683e5a:c.instructions+=1;goto B683e5a;
case 0x683e5c:goto L683e5c;
case 0x683e5e:c.instructions+=1;goto B683e5e;
case 0x683e60:goto L683e60;
case 0x683e63:goto L683e63;
case 0x683e65:c.instructions+=2;goto B683e65;
case 0x683e68:c.instructions+=1;goto B683e68;
case 0x683e6b:goto L683e6b;
case 0x683e6e:c.instructions+=2;goto B683e6e;
case 0x683e71:c.instructions+=1;goto B683e71;
case 0x683e73:goto L683e73;
case 0x683e75:c.instructions+=1;goto B683e75;
case 0x683e76:goto L683e76;
case 0x683e79:c.instructions+=3;goto B683e79;
case 0x683e7b:c.instructions+=2;goto B683e7b;
case 0x683e7f:c.instructions+=1;goto B683e7f;
case 0x683e84:goto L683e84;
case 0x683e86:c.instructions+=2;goto B683e86;
case 0x683e88:c.instructions+=1;goto B683e88;
case 0x683e8e:goto L683e8e;
case 0x683e8f:c.instructions+=2;goto B683e8f;
case 0x683e92:c.instructions+=1;goto B683e92;
case 0x683e94:goto L683e94;
case 0x683e97:c.instructions+=11;goto B683e97;
case 0x683e99:c.instructions+=10;goto B683e99;
case 0x683e9b:c.instructions+=9;goto B683e9b;
case 0x683e9e:c.instructions+=8;goto B683e9e;
case 0x683ea3:c.instructions+=7;goto B683ea3;
case 0x683ea6:c.instructions+=6;goto B683ea6;
case 0x683ea9:c.instructions+=5;goto B683ea9;
case 0x683eae:c.instructions+=4;goto B683eae;
case 0x683eaf:c.instructions+=3;goto B683eaf;
case 0x683eb2:c.instructions+=2;goto B683eb2;
case 0x683eb4:c.instructions+=1;goto B683eb4;
case 0x683eb9:goto L683eb9;
case 0x683ebb:c.instructions+=2;goto B683ebb;
case 0x683ebd:c.instructions+=1;goto B683ebd;
case 0x683ec3:goto L683ec3;
case 0x683ec6:c.instructions+=9;goto B683ec6;
case 0x683ec8:c.instructions+=8;goto B683ec8;
case 0x683eca:c.instructions+=7;goto B683eca;
case 0x683ecd:c.instructions+=6;goto B683ecd;
case 0x683ed2:c.instructions+=5;goto B683ed2;
case 0x683ed5:c.instructions+=4;goto B683ed5;
case 0x683ed7:c.instructions+=3;goto B683ed7;
case 0x683ed8:c.instructions+=2;goto B683ed8;
case 0x683edb:c.instructions+=1;goto B683edb;
case 0x683ee0:goto L683ee0;
case 0x683ee2:c.instructions+=2;goto B683ee2;
case 0x683ee4:c.instructions+=1;goto B683ee4;
case 0x683eea:goto L683eea;
case 0x683eed:c.instructions+=10;goto B683eed;
case 0x683eef:c.instructions+=9;goto B683eef;
case 0x683ef1:c.instructions+=8;goto B683ef1;
case 0x683ef4:c.instructions+=7;goto B683ef4;
case 0x683ef9:c.instructions+=6;goto B683ef9;
case 0x683efc:c.instructions+=5;goto B683efc;
case 0x683efe:c.instructions+=4;goto B683efe;
case 0x683eff:c.instructions+=3;goto B683eff;
case 0x683f02:c.instructions+=2;goto B683f02;
case 0x683f05:c.instructions+=1;goto B683f05;
case 0x683f0a:goto L683f0a;
case 0x683f0c:c.instructions+=2;goto B683f0c;
case 0x683f0e:c.instructions+=1;goto B683f0e;
case 0x683f14:goto L683f14;
case 0x683f17:c.instructions+=10;goto B683f17;
case 0x683f19:c.instructions+=9;goto B683f19;
case 0x683f1c:c.instructions+=8;goto B683f1c;
case 0x683f21:c.instructions+=7;goto B683f21;
case 0x683f24:c.instructions+=6;goto B683f24;
case 0x683f26:c.instructions+=5;goto B683f26;
case 0x683f29:c.instructions+=4;goto B683f29;
case 0x683f2c:c.instructions+=3;goto B683f2c;
case 0x683f2d:c.instructions+=2;goto B683f2d;
case 0x683f30:c.instructions+=1;goto B683f30;
case 0x683f35:goto L683f35;
case 0x683f37:c.instructions+=2;goto B683f37;
case 0x683f39:c.instructions+=1;goto B683f39;
case 0x683f3f:goto L683f3f;
case 0x683f41:c.instructions+=7;goto B683f41;
case 0x683f43:c.instructions+=6;goto B683f43;
case 0x683f46:c.instructions+=5;goto B683f46;
case 0x683f48:c.instructions+=4;goto B683f48;
case 0x683f4b:c.instructions+=3;goto B683f4b;
case 0x683f4e:c.instructions+=2;goto B683f4e;
case 0x683f51:c.instructions+=1;goto B683f51;
case 0x683f56:goto L683f56;
case 0x683f58:c.instructions+=2;goto B683f58;
case 0x683f5a:c.instructions+=1;goto B683f5a;
case 0x683f60:goto L683f60;
case 0x683f63:c.instructions+=10;goto B683f63;
case 0x683f65:c.instructions+=9;goto B683f65;
case 0x683f68:c.instructions+=8;goto B683f68;
case 0x683f6d:c.instructions+=7;goto B683f6d;
case 0x683f70:c.instructions+=6;goto B683f70;
case 0x683f72:c.instructions+=5;goto B683f72;
case 0x683f75:c.instructions+=4;goto B683f75;
case 0x683f78:c.instructions+=3;goto B683f78;
case 0x683f79:c.instructions+=2;goto B683f79;
case 0x683f7c:c.instructions+=1;goto B683f7c;
case 0x683f81:goto L683f81;
case 0x683f83:c.instructions+=2;goto B683f83;
case 0x683f85:c.instructions+=1;goto B683f85;
case 0x683f8b:goto L683f8b;
case 0x683f8d:c.instructions+=7;goto B683f8d;
case 0x683f8f:c.instructions+=6;goto B683f8f;
case 0x683f92:c.instructions+=5;goto B683f92;
case 0x683f94:c.instructions+=4;goto B683f94;
case 0x683f97:c.instructions+=3;goto B683f97;
case 0x683f9a:c.instructions+=2;goto B683f9a;
case 0x683f9d:c.instructions+=1;goto B683f9d;
case 0x683fa2:goto L683fa2;
case 0x683fa4:c.instructions+=2;goto B683fa4;
case 0x683fa6:c.instructions+=1;goto B683fa6;
case 0x683fac:goto L683fac;
case 0x683fae:c.instructions+=7;goto B683fae;
case 0x683fb1:c.instructions+=6;goto B683fb1;
case 0x683fb3:c.instructions+=5;goto B683fb3;
case 0x683fb6:c.instructions+=4;goto B683fb6;
case 0x683fb9:c.instructions+=3;goto B683fb9;
case 0x683fbc:c.instructions+=2;goto B683fbc;
case 0x683fbf:c.instructions+=1;goto B683fbf;
case 0x683fc4:goto L683fc4;
case 0x683fc6:c.instructions+=2;goto B683fc6;
case 0x683fc8:c.instructions+=1;goto B683fc8;
case 0x683fce:goto L683fce;
case 0x683fd1:c.instructions+=9;goto B683fd1;
case 0x683fd3:c.instructions+=8;goto B683fd3;
case 0x683fd6:c.instructions+=7;goto B683fd6;
case 0x683fdb:c.instructions+=6;goto B683fdb;
case 0x683fde:c.instructions+=5;goto B683fde;
case 0x683fe0:c.instructions+=4;goto B683fe0;
case 0x683fe3:c.instructions+=3;goto B683fe3;
case 0x683fe4:c.instructions+=2;goto B683fe4;
case 0x683fe7:c.instructions+=1;goto B683fe7;
case 0x683fec:goto L683fec;
case 0x683fee:c.instructions+=2;goto B683fee;
case 0x683ff0:c.instructions+=1;goto B683ff0;
case 0x683ff6:goto L683ff6;
case 0x683ff8:c.instructions+=3;goto B683ff8;
case 0x683ffb:c.instructions+=2;goto B683ffb;
case 0x683ffd:c.instructions+=1;goto B683ffd;
default:missing_instruction(c.pc);}
B683000:L683000:{c.instructions+=3;NFSU2_TR(0x683000);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683003:{NFSU2_TR(0x683003);
__builtin_memmove((R+4),(R+12),4);
}
B683005:{NFSU2_TR(0x683005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68300aull));
TAIL_STATIC(0x6758ceu,675);
}
B68300a:L68300a:{c.instructions+=3;NFSU2_TR(0x68300a);
__builtin_memmove((R+24),(R+0),4);
}
B68300c:{NFSU2_TR(0x68300c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68300e:{NFSU2_TR(0x68300e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x682d5cu,682);}
}
B683014:L683014:{c.instructions+=1;NFSU2_TR(0x683014);
TAIL_STATIC(0x6841d2u,684);
}
B683019:L683019:{c.instructions+=2;NFSU2_TR(0x683019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68301b:{NFSU2_TR(0x68301b);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683021:L683021:{c.instructions+=2;NFSU2_TR(0x683021);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683025:{NFSU2_TR(0x683025);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B68302b:L68302b:{c.instructions+=4;NFSU2_TR(0x68302b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68302c:{NFSU2_TR(0x68302c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68302f:{NFSU2_TR(0x68302f);
__builtin_memmove((R+4),(R+12),4);
}
B683031:{NFSU2_TR(0x683031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683036ull));
TAIL_STATIC(0x673b2cu,673);
}
B683036:L683036:{c.instructions+=3;NFSU2_TR(0x683036);
__builtin_memmove((R+24),(R+0),4);
}
B683038:{NFSU2_TR(0x683038);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68303a:{NFSU2_TR(0x68303a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683040:L683040:{c.instructions+=7;NFSU2_TR(0x683040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683042:{NFSU2_TR(0x683042);
__builtin_memmove((R+0),(R+28),4);
}
B683044:{NFSU2_TR(0x683044);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683046:{NFSU2_TR(0x683046);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683049:{NFSU2_TR(0x683049);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B68304e:{NFSU2_TR(0x68304e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B683053:{NFSU2_TR(0x683053);
TAIL_STATIC(0x682ffcu,682);
}
B683055:L683055:{c.instructions+=2;NFSU2_TR(0x683055);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683057:{NFSU2_TR(0x683057);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68305d:L68305d:{c.instructions+=2;NFSU2_TR(0x68305d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683061:{NFSU2_TR(0x683061);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683067:L683067:{c.instructions+=4;NFSU2_TR(0x683067);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683068:{NFSU2_TR(0x683068);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68306b:{NFSU2_TR(0x68306b);
__builtin_memmove((R+4),(R+12),4);
}
B68306d:{NFSU2_TR(0x68306d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683072ull));
TAIL_STATIC(0x673b2cu,673);
}
B683072:L683072:{c.instructions+=3;NFSU2_TR(0x683072);
__builtin_memmove((R+24),(R+0),4);
}
B683074:{NFSU2_TR(0x683074);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683076:{NFSU2_TR(0x683076);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68307c:L68307c:{c.instructions+=4;NFSU2_TR(0x68307c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68307e:{NFSU2_TR(0x68307e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683080:{NFSU2_TR(0x683080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683083:{NFSU2_TR(0x683083);
{goto L683ab0;}
}
B683088:L683088:{c.instructions+=2;NFSU2_TR(0x683088);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68308a:{NFSU2_TR(0x68308a);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683090:L683090:{c.instructions+=2;NFSU2_TR(0x683090);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683092:{NFSU2_TR(0x683092);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683098:L683098:{c.instructions+=2;NFSU2_TR(0x683098);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68309c:{NFSU2_TR(0x68309c);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6830a2:L6830a2:{c.instructions+=4;NFSU2_TR(0x6830a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6830a3:{NFSU2_TR(0x6830a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6830a6:{NFSU2_TR(0x6830a6);
__builtin_memmove((R+4),(R+12),4);
}
B6830a8:{NFSU2_TR(0x6830a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6830adull));
TAIL_STATIC(0x673b2cu,673);
}
B6830ad:L6830ad:{c.instructions+=3;NFSU2_TR(0x6830ad);
__builtin_memmove((R+24),(R+0),4);
}
B6830af:{NFSU2_TR(0x6830af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6830b1:{NFSU2_TR(0x6830b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6830b7:L6830b7:{c.instructions+=4;NFSU2_TR(0x6830b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6830b9:{NFSU2_TR(0x6830b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6830bc:{NFSU2_TR(0x6830bc);
__builtin_memmove((R+0),(R+28),4);
}
B6830be:{NFSU2_TR(0x6830be);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6830c3:L6830c3:{c.instructions+=3;NFSU2_TR(0x6830c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6830c6:{NFSU2_TR(0x6830c6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6830cb:{NFSU2_TR(0x6830cb);
TAIL_STATIC(0x682ffcu,682);
}
B6830d0:L6830d0:{c.instructions+=2;NFSU2_TR(0x6830d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6830d2:{NFSU2_TR(0x6830d2);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6830d8:L6830d8:{c.instructions+=2;NFSU2_TR(0x6830d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6830da:{NFSU2_TR(0x6830da);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6830e0:L6830e0:{c.instructions+=2;NFSU2_TR(0x6830e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6830e4:{NFSU2_TR(0x6830e4);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6830ea:L6830ea:{c.instructions+=3;NFSU2_TR(0x6830ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6830eb:{NFSU2_TR(0x6830eb);
__builtin_memmove((R+4),(R+12),4);
}
B6830ed:{NFSU2_TR(0x6830ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6830f2ull));
TAIL_STATIC(0x673a0fu,673);
}
B6830f2:L6830f2:{c.instructions+=3;NFSU2_TR(0x6830f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6830f4:{NFSU2_TR(0x6830f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6830f7:{NFSU2_TR(0x6830f7);
if(r1(R+518)){{goto L683dfc;}}
}
B6830fd:L6830fd:{c.instructions+=4;NFSU2_TR(0x6830fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6830fe:{NFSU2_TR(0x6830fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6830ff:{NFSU2_TR(0x6830ff);
__builtin_memmove((R+4),(R+12),4);
}
B683101:{NFSU2_TR(0x683101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683106ull));
TAIL_STATIC(0x673b2cu,673);
}
B683106:L683106:{c.instructions+=3;NFSU2_TR(0x683106);
__builtin_memmove((R+24),(R+0),4);
}
B683108:{NFSU2_TR(0x683108);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68310a:{NFSU2_TR(0x68310a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683110:L683110:{c.instructions+=4;NFSU2_TR(0x683110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683111:{NFSU2_TR(0x683111);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683114:{NFSU2_TR(0x683114);
__builtin_memmove((R+4),(R+12),4);
}
B683116:{NFSU2_TR(0x683116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68311bull));
TAIL_STATIC(0x673b2cu,673);
}
B68311b:L68311b:{c.instructions+=3;NFSU2_TR(0x68311b);
__builtin_memmove((R+24),(R+0),4);
}
B68311d:{NFSU2_TR(0x68311d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68311f:{NFSU2_TR(0x68311f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683125:L683125:{c.instructions+=12;NFSU2_TR(0x683125);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683127:{NFSU2_TR(0x683127);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683129:{NFSU2_TR(0x683129);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68312c:{NFSU2_TR(0x68312c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68312f:{NFSU2_TR(0x68312f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B683134:{NFSU2_TR(0x683134);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683137:{NFSU2_TR(0x683137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68313a:{NFSU2_TR(0x68313a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B68313f:{NFSU2_TR(0x68313f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683140:{NFSU2_TR(0x683140);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683143:{NFSU2_TR(0x683143);
__builtin_memmove((R+4),(R+12),4);
}
B683145:{NFSU2_TR(0x683145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68314aull));
TAIL_STATIC(0x6758ceu,675);
}
B68314a:L68314a:{c.instructions+=3;NFSU2_TR(0x68314a);
__builtin_memmove((R+24),(R+0),4);
}
B68314c:{NFSU2_TR(0x68314c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68314e:{NFSU2_TR(0x68314e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683154:L683154:{c.instructions+=4;NFSU2_TR(0x683154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683157:{NFSU2_TR(0x683157);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683159:{NFSU2_TR(0x683159);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68315c:{NFSU2_TR(0x68315c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6830c3u);}goto L6830c3;}
}
B683161:L683161:{c.instructions+=2;NFSU2_TR(0x683161);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683163:{NFSU2_TR(0x683163);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683169:L683169:{c.instructions+=2;NFSU2_TR(0x683169);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68316b:{NFSU2_TR(0x68316b);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683171:L683171:{c.instructions+=2;NFSU2_TR(0x683171);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683175:{NFSU2_TR(0x683175);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B68317b:L68317b:{c.instructions+=4;NFSU2_TR(0x68317b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68317c:{NFSU2_TR(0x68317c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68317f:{NFSU2_TR(0x68317f);
__builtin_memmove((R+4),(R+12),4);
}
B683181:{NFSU2_TR(0x683181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683186ull));
TAIL_STATIC(0x673b2cu,673);
}
B683186:L683186:{c.instructions+=3;NFSU2_TR(0x683186);
__builtin_memmove((R+24),(R+0),4);
}
B683188:{NFSU2_TR(0x683188);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68318a:{NFSU2_TR(0x68318a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683190:L683190:{c.instructions+=4;NFSU2_TR(0x683190);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683192:{NFSU2_TR(0x683192);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683195:{NFSU2_TR(0x683195);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683198:{NFSU2_TR(0x683198);
{goto L6831d1;}
}
B68319a:L68319a:{c.instructions+=2;NFSU2_TR(0x68319a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68319c:{NFSU2_TR(0x68319c);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6831a2:L6831a2:{c.instructions+=2;NFSU2_TR(0x6831a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6831a4:{NFSU2_TR(0x6831a4);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6831aa:L6831aa:{c.instructions+=2;NFSU2_TR(0x6831aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6831ae:{NFSU2_TR(0x6831ae);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6831b4:L6831b4:{c.instructions+=4;NFSU2_TR(0x6831b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6831b5:{NFSU2_TR(0x6831b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6831b8:{NFSU2_TR(0x6831b8);
__builtin_memmove((R+4),(R+12),4);
}
B6831ba:{NFSU2_TR(0x6831ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6831bfull));
TAIL_STATIC(0x673b2cu,673);
}
B6831bf:L6831bf:{c.instructions+=3;NFSU2_TR(0x6831bf);
__builtin_memmove((R+24),(R+0),4);
}
B6831c1:{NFSU2_TR(0x6831c1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6831c3:{NFSU2_TR(0x6831c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6831c9:L6831c9:{c.instructions+=3;NFSU2_TR(0x6831c9);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6831cb:{NFSU2_TR(0x6831cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6831ce:{NFSU2_TR(0x6831ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6831d1:L6831d1:{c.instructions+=2;NFSU2_TR(0x6831d1);
__builtin_memmove((R+0),(R+28),4);
}
B6831d3:{NFSU2_TR(0x6831d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6831d8:L6831d8:{c.instructions+=2;NFSU2_TR(0x6831d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B6831dd:{NFSU2_TR(0x6831dd);
TAIL_STATIC(0x682ffcu,682);
}
B6831e2:L6831e2:{c.instructions+=2;NFSU2_TR(0x6831e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6831e4:{NFSU2_TR(0x6831e4);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6831ea:L6831ea:{c.instructions+=2;NFSU2_TR(0x6831ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6831ec:{NFSU2_TR(0x6831ec);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6831f2:L6831f2:{c.instructions+=2;NFSU2_TR(0x6831f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6831f6:{NFSU2_TR(0x6831f6);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6831fc:L6831fc:{c.instructions+=4;NFSU2_TR(0x6831fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6831fd:{NFSU2_TR(0x6831fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683200:{NFSU2_TR(0x683200);
__builtin_memmove((R+4),(R+12),4);
}
B683202:{NFSU2_TR(0x683202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683207ull));
TAIL_STATIC(0x673b2cu,673);
}
B683207:L683207:{c.instructions+=3;NFSU2_TR(0x683207);
__builtin_memmove((R+24),(R+0),4);
}
B683209:{NFSU2_TR(0x683209);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68320b:{NFSU2_TR(0x68320b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683211:L683211:{c.instructions+=4;NFSU2_TR(0x683211);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683213:{NFSU2_TR(0x683213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683216:{NFSU2_TR(0x683216);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683219:{NFSU2_TR(0x683219);
TAIL_STATIC(0x682ff0u,682);
}
B68321e:L68321e:{c.instructions+=2;NFSU2_TR(0x68321e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683220:{NFSU2_TR(0x683220);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683226:L683226:{c.instructions+=2;NFSU2_TR(0x683226);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683228:{NFSU2_TR(0x683228);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68322e:L68322e:{c.instructions+=2;NFSU2_TR(0x68322e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683232:{NFSU2_TR(0x683232);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683238:L683238:{c.instructions+=4;NFSU2_TR(0x683238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683239:{NFSU2_TR(0x683239);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68323c:{NFSU2_TR(0x68323c);
__builtin_memmove((R+4),(R+12),4);
}
B68323e:{NFSU2_TR(0x68323e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683243ull));
TAIL_STATIC(0x673b2cu,673);
}
B683243:L683243:{c.instructions+=3;NFSU2_TR(0x683243);
__builtin_memmove((R+24),(R+0),4);
}
B683245:{NFSU2_TR(0x683245);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683247:{NFSU2_TR(0x683247);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68324d:L68324d:{c.instructions+=4;NFSU2_TR(0x68324d);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68324f:{NFSU2_TR(0x68324f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683252:{NFSU2_TR(0x683252);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683255:{NFSU2_TR(0x683255);
TAIL_STATIC(0x682ff0u,682);
}
B68325a:L68325a:{c.instructions+=2;NFSU2_TR(0x68325a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68325c:{NFSU2_TR(0x68325c);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683262:L683262:{c.instructions+=2;NFSU2_TR(0x683262);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683264:{NFSU2_TR(0x683264);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68326a:L68326a:{c.instructions+=2;NFSU2_TR(0x68326a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68326e:{NFSU2_TR(0x68326e);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683274:L683274:{c.instructions+=5;NFSU2_TR(0x683274);
__builtin_memmove((R+24),(R+28),4);
}
B683276:{NFSU2_TR(0x683276);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B683279:{NFSU2_TR(0x683279);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68327a:{NFSU2_TR(0x68327a);
__builtin_memmove((R+4),(R+12),4);
}
B68327c:{NFSU2_TR(0x68327c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683281ull));
TAIL_STATIC(0x673a0fu,673);
}
B683281:L683281:{c.instructions+=2;NFSU2_TR(0x683281);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683283:{NFSU2_TR(0x683283);
if(r1(R+518)){{goto L683dfc;}}
}
B683289:L683289:{c.instructions+=2;NFSU2_TR(0x683289);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68328b:{NFSU2_TR(0x68328b);
__builtin_memmove((R+8),(R+0),4);
}
B68328d:L68328d:{c.instructions+=5;NFSU2_TR(0x68328d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B683291:{NFSU2_TR(0x683291);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B683292:{NFSU2_TR(0x683292);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B683294:{NFSU2_TR(0x683294);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B683297:{NFSU2_TR(0x683297);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68328du);}goto L68328d;}}
}
B683299:L683299:{c.instructions+=4;NFSU2_TR(0x683299);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68329a:{NFSU2_TR(0x68329a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68329b:{NFSU2_TR(0x68329b);
__builtin_memmove((R+4),(R+12),4);
}
B68329d:{NFSU2_TR(0x68329d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6832a2ull));
TAIL_STATIC(0x673b2cu,673);
}
B6832a2:L6832a2:{c.instructions+=3;NFSU2_TR(0x6832a2);
__builtin_memmove((R+24),(R+0),4);
}
B6832a4:{NFSU2_TR(0x6832a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6832a6:{NFSU2_TR(0x6832a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6832ac:L6832ac:{c.instructions+=4;NFSU2_TR(0x6832ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6832ad:{NFSU2_TR(0x6832ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6832b0:{NFSU2_TR(0x6832b0);
__builtin_memmove((R+4),(R+12),4);
}
B6832b2:{NFSU2_TR(0x6832b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6832b7ull));
TAIL_STATIC(0x673b2cu,673);
}
B6832b7:L6832b7:{c.instructions+=3;NFSU2_TR(0x6832b7);
__builtin_memmove((R+24),(R+0),4);
}
B6832b9:{NFSU2_TR(0x6832b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6832bb:{NFSU2_TR(0x6832bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6832c1:L6832c1:{c.instructions+=12;NFSU2_TR(0x6832c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6832c3:{NFSU2_TR(0x6832c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6832c5:{NFSU2_TR(0x6832c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6832c8:{NFSU2_TR(0x6832c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6832cb:{NFSU2_TR(0x6832cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6832d0:{NFSU2_TR(0x6832d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6832d3:{NFSU2_TR(0x6832d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6832d6:{NFSU2_TR(0x6832d6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6832db:{NFSU2_TR(0x6832db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6832dc:{NFSU2_TR(0x6832dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6832df:{NFSU2_TR(0x6832df);
__builtin_memmove((R+4),(R+12),4);
}
B6832e1:{NFSU2_TR(0x6832e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6832e6ull));
TAIL_STATIC(0x6758ceu,675);
}
B6832e6:L6832e6:{c.instructions+=3;NFSU2_TR(0x6832e6);
__builtin_memmove((R+24),(R+0),4);
}
B6832e8:{NFSU2_TR(0x6832e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6832ea:{NFSU2_TR(0x6832ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6832f0:L6832f0:{c.instructions+=10;NFSU2_TR(0x6832f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6832f3:{NFSU2_TR(0x6832f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6832f5:{NFSU2_TR(0x6832f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6832f8:{NFSU2_TR(0x6832f8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6832fd:{NFSU2_TR(0x6832fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683300:{NFSU2_TR(0x683300);
__builtin_memmove((R+4),(R+12),4);
}
B683302:{NFSU2_TR(0x683302);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683305:{NFSU2_TR(0x683305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683306:{NFSU2_TR(0x683306);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683309:{NFSU2_TR(0x683309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68330eull));
TAIL_STATIC(0x6758ceu,675);
}
B68330e:L68330e:{c.instructions+=3;NFSU2_TR(0x68330e);
__builtin_memmove((R+24),(R+0),4);
}
B683310:{NFSU2_TR(0x683310);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683312:{NFSU2_TR(0x683312);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683318:L683318:{c.instructions+=7;NFSU2_TR(0x683318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683319:{NFSU2_TR(0x683319);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68331c:{NFSU2_TR(0x68331c);
__builtin_memmove((R+4),(R+12),4);
}
B68331e:{NFSU2_TR(0x68331e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683321:{NFSU2_TR(0x683321);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683324:{NFSU2_TR(0x683324);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683327:{NFSU2_TR(0x683327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68332cull));
TAIL_STATIC(0x6782eau,678);
}
B68332c:L68332c:{c.instructions+=3;NFSU2_TR(0x68332c);
__builtin_memmove((R+24),(R+0),4);
}
B68332e:{NFSU2_TR(0x68332e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683330:{NFSU2_TR(0x683330);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683336:L683336:{c.instructions+=5;NFSU2_TR(0x683336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683339:{NFSU2_TR(0x683339);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68333b:{NFSU2_TR(0x68333b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68333e:{NFSU2_TR(0x68333e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683341:{NFSU2_TR(0x683341);
TAIL_STATIC(0x682ff7u,682);
}
B683346:L683346:{c.instructions+=2;NFSU2_TR(0x683346);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683348:{NFSU2_TR(0x683348);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68334e:L68334e:{c.instructions+=2;NFSU2_TR(0x68334e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683350:{NFSU2_TR(0x683350);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683356:L683356:{c.instructions+=2;NFSU2_TR(0x683356);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68335a:{NFSU2_TR(0x68335a);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683360:L683360:{c.instructions+=5;NFSU2_TR(0x683360);
__builtin_memmove((R+24),(R+28),4);
}
B683362:{NFSU2_TR(0x683362);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B683365:{NFSU2_TR(0x683365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683366:{NFSU2_TR(0x683366);
__builtin_memmove((R+4),(R+12),4);
}
B683368:{NFSU2_TR(0x683368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68336dull));
TAIL_STATIC(0x673a0fu,673);
}
B68336d:L68336d:{c.instructions+=2;NFSU2_TR(0x68336d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68336f:{NFSU2_TR(0x68336f);
if(r1(R+518)){{goto L683dfc;}}
}
B683375:L683375:{c.instructions+=2;NFSU2_TR(0x683375);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683377:{NFSU2_TR(0x683377);
__builtin_memmove((R+8),(R+0),4);
}
B683379:L683379:{c.instructions+=5;NFSU2_TR(0x683379);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68337d:{NFSU2_TR(0x68337d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B68337e:{NFSU2_TR(0x68337e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B683380:{NFSU2_TR(0x683380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B683383:{NFSU2_TR(0x683383);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683379u);}goto L683379;}}
}
B683385:L683385:{c.instructions+=4;NFSU2_TR(0x683385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683386:{NFSU2_TR(0x683386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683387:{NFSU2_TR(0x683387);
__builtin_memmove((R+4),(R+12),4);
}
B683389:{NFSU2_TR(0x683389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68338eull));
TAIL_STATIC(0x673b2cu,673);
}
B68338e:L68338e:{c.instructions+=3;NFSU2_TR(0x68338e);
__builtin_memmove((R+24),(R+0),4);
}
B683390:{NFSU2_TR(0x683390);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683392:{NFSU2_TR(0x683392);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683398:L683398:{c.instructions+=4;NFSU2_TR(0x683398);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683399:{NFSU2_TR(0x683399);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68339c:{NFSU2_TR(0x68339c);
__builtin_memmove((R+4),(R+12),4);
}
B68339e:{NFSU2_TR(0x68339e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6833a3ull));
TAIL_STATIC(0x673b2cu,673);
}
B6833a3:L6833a3:{c.instructions+=3;NFSU2_TR(0x6833a3);
__builtin_memmove((R+24),(R+0),4);
}
B6833a5:{NFSU2_TR(0x6833a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6833a7:{NFSU2_TR(0x6833a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6833ad:L6833ad:{c.instructions+=12;NFSU2_TR(0x6833ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6833af:{NFSU2_TR(0x6833af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6833b1:{NFSU2_TR(0x6833b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833b4:{NFSU2_TR(0x6833b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6833b7:{NFSU2_TR(0x6833b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6833bc:{NFSU2_TR(0x6833bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833bf:{NFSU2_TR(0x6833bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6833c2:{NFSU2_TR(0x6833c2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6833c7:{NFSU2_TR(0x6833c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6833c8:{NFSU2_TR(0x6833c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833cb:{NFSU2_TR(0x6833cb);
__builtin_memmove((R+4),(R+12),4);
}
B6833cd:{NFSU2_TR(0x6833cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6833d2ull));
TAIL_STATIC(0x6758ceu,675);
}
B6833d2:L6833d2:{c.instructions+=3;NFSU2_TR(0x6833d2);
__builtin_memmove((R+24),(R+0),4);
}
B6833d4:{NFSU2_TR(0x6833d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6833d6:{NFSU2_TR(0x6833d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6833dc:L6833dc:{c.instructions+=4;NFSU2_TR(0x6833dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6833df:{NFSU2_TR(0x6833df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6833e1:{NFSU2_TR(0x6833e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833e4:{NFSU2_TR(0x6833e4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6833e9:L6833e9:{c.instructions+=6;NFSU2_TR(0x6833e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833ec:{NFSU2_TR(0x6833ec);
__builtin_memmove((R+4),(R+12),4);
}
B6833ee:{NFSU2_TR(0x6833ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833f1:{NFSU2_TR(0x6833f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6833f2:{NFSU2_TR(0x6833f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6833f5:{NFSU2_TR(0x6833f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6833faull));
TAIL_STATIC(0x6758ceu,675);
}
B6833fa:L6833fa:{c.instructions+=3;NFSU2_TR(0x6833fa);
__builtin_memmove((R+24),(R+0),4);
}
B6833fc:{NFSU2_TR(0x6833fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6833fe:{NFSU2_TR(0x6833fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683404:L683404:{c.instructions+=7;NFSU2_TR(0x683404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683405:{NFSU2_TR(0x683405);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683408:{NFSU2_TR(0x683408);
__builtin_memmove((R+4),(R+12),4);
}
B68340a:{NFSU2_TR(0x68340a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68340d:{NFSU2_TR(0x68340d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683410:{NFSU2_TR(0x683410);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683413:{NFSU2_TR(0x683413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683418ull));
TAIL_STATIC(0x6782eau,678);
}
B683418:L683418:{c.instructions+=1;NFSU2_TR(0x683418);
{goto L68364a;}
}
B68341d:L68341d:{c.instructions+=2;NFSU2_TR(0x68341d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68341f:{NFSU2_TR(0x68341f);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683425:L683425:{c.instructions+=2;NFSU2_TR(0x683425);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683427:{NFSU2_TR(0x683427);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68342d:L68342d:{c.instructions+=2;NFSU2_TR(0x68342d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683431:{NFSU2_TR(0x683431);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683437:L683437:{c.instructions+=3;NFSU2_TR(0x683437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68343b:{NFSU2_TR(0x68343b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68343d:{NFSU2_TR(0x68343d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68346d;}}
}
B68343f:L68343f:{c.instructions+=5;NFSU2_TR(0x68343f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683442:{NFSU2_TR(0x683442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683445:{NFSU2_TR(0x683445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683448:{NFSU2_TR(0x683448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68344b:{NFSU2_TR(0x68344b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68344d:L68344d:{c.instructions+=4;NFSU2_TR(0x68344d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B683450:{NFSU2_TR(0x683450);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B683453:{NFSU2_TR(0x683453);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683456:{NFSU2_TR(0x683456);
if(r1(R+518)){{goto L683489;}}
}
B683458:L683458:{c.instructions+=4;NFSU2_TR(0x683458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B68345a:{NFSU2_TR(0x68345a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B68345d:{NFSU2_TR(0x68345d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683460:{NFSU2_TR(0x683460);
if(r1(R+518)){{goto L683489;}}
}
B683462:L683462:{c.instructions+=4;NFSU2_TR(0x683462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683465:{NFSU2_TR(0x683465);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B683468:{NFSU2_TR(0x683468);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B68346b:{NFSU2_TR(0x68346b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68344du);}goto L68344d;}}
}
B68346d:L68346d:{c.instructions+=4;NFSU2_TR(0x68346d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68346e:{NFSU2_TR(0x68346e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683471:{NFSU2_TR(0x683471);
__builtin_memmove((R+4),(R+12),4);
}
B683473:{NFSU2_TR(0x683473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683478ull));
TAIL_STATIC(0x673b2cu,673);
}
B683478:L683478:{c.instructions+=3;NFSU2_TR(0x683478);
__builtin_memmove((R+24),(R+0),4);
}
B68347a:{NFSU2_TR(0x68347a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68347c:{NFSU2_TR(0x68347c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683482:L683482:{c.instructions+=2;NFSU2_TR(0x683482);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683484:{NFSU2_TR(0x683484);
{goto L683695;}
}
B683489:L683489:{c.instructions+=4;NFSU2_TR(0x683489);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68348c:{NFSU2_TR(0x68348c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68348d:{NFSU2_TR(0x68348d);
__builtin_memmove((R+4),(R+12),4);
}
B68348f:{NFSU2_TR(0x68348f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683494ull));
TAIL_STATIC(0x673a0fu,673);
}
B683494:L683494:{c.instructions+=2;NFSU2_TR(0x683494);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683496:{NFSU2_TR(0x683496);
if(r1(R+518)){{goto L683dfc;}}
}
B68349c:L68349c:{c.instructions+=3;NFSU2_TR(0x68349c);
__builtin_memmove((R+8),(R+28),4);
}
B68349e:{NFSU2_TR(0x68349e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6834a0:{NFSU2_TR(0x6834a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6834a3:L6834a3:{c.instructions+=5;NFSU2_TR(0x6834a3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6834a7:{NFSU2_TR(0x6834a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6834a8:{NFSU2_TR(0x6834a8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6834aa:{NFSU2_TR(0x6834aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6834ad:{NFSU2_TR(0x6834ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6834a3u);}goto L6834a3;}}
}
B6834af:L6834af:{c.instructions+=4;NFSU2_TR(0x6834af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6834b0:{NFSU2_TR(0x6834b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6834b3:{NFSU2_TR(0x6834b3);
__builtin_memmove((R+4),(R+12),4);
}
B6834b5:{NFSU2_TR(0x6834b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6834baull));
TAIL_STATIC(0x673b2cu,673);
}
B6834ba:L6834ba:{c.instructions+=3;NFSU2_TR(0x6834ba);
__builtin_memmove((R+24),(R+0),4);
}
B6834bc:{NFSU2_TR(0x6834bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6834be:{NFSU2_TR(0x6834be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6834c4:L6834c4:{c.instructions+=4;NFSU2_TR(0x6834c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6834c5:{NFSU2_TR(0x6834c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6834c8:{NFSU2_TR(0x6834c8);
__builtin_memmove((R+4),(R+12),4);
}
B6834ca:{NFSU2_TR(0x6834ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6834cfull));
TAIL_STATIC(0x673b2cu,673);
}
B6834cf:L6834cf:{c.instructions+=3;NFSU2_TR(0x6834cf);
__builtin_memmove((R+24),(R+0),4);
}
B6834d1:{NFSU2_TR(0x6834d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6834d3:{NFSU2_TR(0x6834d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6834d9:L6834d9:{c.instructions+=4;NFSU2_TR(0x6834d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6834da:{NFSU2_TR(0x6834da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6834dd:{NFSU2_TR(0x6834dd);
__builtin_memmove((R+4),(R+12),4);
}
B6834df:{NFSU2_TR(0x6834df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6834e4ull));
TAIL_STATIC(0x673b2cu,673);
}
B6834e4:L6834e4:{c.instructions+=3;NFSU2_TR(0x6834e4);
__builtin_memmove((R+24),(R+0),4);
}
B6834e6:{NFSU2_TR(0x6834e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6834e8:{NFSU2_TR(0x6834e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6834ee:L6834ee:{c.instructions+=4;NFSU2_TR(0x6834ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6834ef:{NFSU2_TR(0x6834ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6834f2:{NFSU2_TR(0x6834f2);
__builtin_memmove((R+4),(R+12),4);
}
B6834f4:{NFSU2_TR(0x6834f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6834f9ull));
TAIL_STATIC(0x673b2cu,673);
}
B6834f9:L6834f9:{c.instructions+=3;NFSU2_TR(0x6834f9);
__builtin_memmove((R+24),(R+0),4);
}
B6834fb:{NFSU2_TR(0x6834fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6834fd:{NFSU2_TR(0x6834fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683503:L683503:{c.instructions+=7;NFSU2_TR(0x683503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683506:{NFSU2_TR(0x683506);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B68350b:{NFSU2_TR(0x68350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68350e:{NFSU2_TR(0x68350e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683510:{NFSU2_TR(0x683510);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683513:{NFSU2_TR(0x683513);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B683518:{NFSU2_TR(0x683518);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6833e9u);}goto L6833e9;}
}
B68351d:L68351d:{c.instructions+=2;NFSU2_TR(0x68351d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68351f:{NFSU2_TR(0x68351f);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683525:L683525:{c.instructions+=2;NFSU2_TR(0x683525);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683527:{NFSU2_TR(0x683527);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68352d:L68352d:{c.instructions+=2;NFSU2_TR(0x68352d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683531:{NFSU2_TR(0x683531);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683537:L683537:{c.instructions+=5;NFSU2_TR(0x683537);
__builtin_memmove((R+24),(R+28),4);
}
B683539:{NFSU2_TR(0x683539);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68353c:{NFSU2_TR(0x68353c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68353d:{NFSU2_TR(0x68353d);
__builtin_memmove((R+4),(R+12),4);
}
B68353f:{NFSU2_TR(0x68353f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683544ull));
TAIL_STATIC(0x673a0fu,673);
}
B683544:L683544:{c.instructions+=2;NFSU2_TR(0x683544);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683546:{NFSU2_TR(0x683546);
if(r1(R+518)){{goto L683dfc;}}
}
B68354c:L68354c:{c.instructions+=1;NFSU2_TR(0x68354c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B68354e:L68354e:{c.instructions+=5;NFSU2_TR(0x68354e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B683552:{NFSU2_TR(0x683552);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B683553:{NFSU2_TR(0x683553);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B683555:{NFSU2_TR(0x683555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B683558:{NFSU2_TR(0x683558);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68354eu);}goto L68354e;}}
}
B68355a:L68355a:{c.instructions+=4;NFSU2_TR(0x68355a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68355b:{NFSU2_TR(0x68355b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68355e:{NFSU2_TR(0x68355e);
__builtin_memmove((R+4),(R+12),4);
}
B683560:{NFSU2_TR(0x683560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683565ull));
TAIL_STATIC(0x673b2cu,673);
}
B683565:L683565:{c.instructions+=3;NFSU2_TR(0x683565);
__builtin_memmove((R+24),(R+0),4);
}
B683567:{NFSU2_TR(0x683567);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683569:{NFSU2_TR(0x683569);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68356f:L68356f:{c.instructions+=4;NFSU2_TR(0x68356f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683570:{NFSU2_TR(0x683570);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683573:{NFSU2_TR(0x683573);
__builtin_memmove((R+4),(R+12),4);
}
B683575:{NFSU2_TR(0x683575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68357aull));
TAIL_STATIC(0x673b2cu,673);
}
B68357a:L68357a:{c.instructions+=3;NFSU2_TR(0x68357a);
__builtin_memmove((R+24),(R+0),4);
}
B68357c:{NFSU2_TR(0x68357c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68357e:{NFSU2_TR(0x68357e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683584:L683584:{c.instructions+=4;NFSU2_TR(0x683584);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683585:{NFSU2_TR(0x683585);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683588:{NFSU2_TR(0x683588);
__builtin_memmove((R+4),(R+12),4);
}
B68358a:{NFSU2_TR(0x68358a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68358full));
TAIL_STATIC(0x673b2cu,673);
}
B68358f:L68358f:{c.instructions+=3;NFSU2_TR(0x68358f);
__builtin_memmove((R+24),(R+0),4);
}
B683591:{NFSU2_TR(0x683591);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683593:{NFSU2_TR(0x683593);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683599:L683599:{c.instructions+=4;NFSU2_TR(0x683599);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68359a:{NFSU2_TR(0x68359a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68359d:{NFSU2_TR(0x68359d);
__builtin_memmove((R+4),(R+12),4);
}
B68359f:{NFSU2_TR(0x68359f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6835a4ull));
TAIL_STATIC(0x673b2cu,673);
}
B6835a4:L6835a4:{c.instructions+=3;NFSU2_TR(0x6835a4);
__builtin_memmove((R+24),(R+0),4);
}
B6835a6:{NFSU2_TR(0x6835a6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6835a8:{NFSU2_TR(0x6835a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6835ae:L6835ae:{c.instructions+=4;NFSU2_TR(0x6835ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835af:{NFSU2_TR(0x6835af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835b2:{NFSU2_TR(0x6835b2);
__builtin_memmove((R+4),(R+12),4);
}
B6835b4:{NFSU2_TR(0x6835b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6835b9ull));
TAIL_STATIC(0x673b2cu,673);
}
B6835b9:L6835b9:{c.instructions+=3;NFSU2_TR(0x6835b9);
__builtin_memmove((R+24),(R+0),4);
}
B6835bb:{NFSU2_TR(0x6835bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6835bd:{NFSU2_TR(0x6835bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6835c3:L6835c3:{c.instructions+=7;NFSU2_TR(0x6835c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835c4:{NFSU2_TR(0x6835c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835c7:{NFSU2_TR(0x6835c7);
__builtin_memmove((R+4),(R+12),4);
}
B6835c9:{NFSU2_TR(0x6835c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835cb:{NFSU2_TR(0x6835cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835ce:{NFSU2_TR(0x6835ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835d1:{NFSU2_TR(0x6835d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6835d6ull));
TAIL_STATIC(0x6782eau,678);
}
B6835d6:L6835d6:{c.instructions+=3;NFSU2_TR(0x6835d6);
__builtin_memmove((R+24),(R+0),4);
}
B6835d8:{NFSU2_TR(0x6835d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6835da:{NFSU2_TR(0x6835da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6835e0:L6835e0:{c.instructions+=7;NFSU2_TR(0x6835e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835e1:{NFSU2_TR(0x6835e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835e4:{NFSU2_TR(0x6835e4);
__builtin_memmove((R+4),(R+12),4);
}
B6835e6:{NFSU2_TR(0x6835e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835e8:{NFSU2_TR(0x6835e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835eb:{NFSU2_TR(0x6835eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6835ee:{NFSU2_TR(0x6835ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6835f3ull));
TAIL_STATIC(0x6782eau,678);
}
B6835f3:L6835f3:{c.instructions+=3;NFSU2_TR(0x6835f3);
__builtin_memmove((R+24),(R+0),4);
}
B6835f5:{NFSU2_TR(0x6835f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6835f7:{NFSU2_TR(0x6835f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6835fd:L6835fd:{c.instructions+=12;NFSU2_TR(0x6835fd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6835ff:{NFSU2_TR(0x6835ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683602:{NFSU2_TR(0x683602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683605:{NFSU2_TR(0x683605);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683608:{NFSU2_TR(0x683608);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B68360d:{NFSU2_TR(0x68360d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683610:{NFSU2_TR(0x683610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683613:{NFSU2_TR(0x683613);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B683618:{NFSU2_TR(0x683618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683619:{NFSU2_TR(0x683619);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68361c:{NFSU2_TR(0x68361c);
__builtin_memmove((R+4),(R+12),4);
}
B68361e:{NFSU2_TR(0x68361e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683623ull));
TAIL_STATIC(0x6758ceu,675);
}
B683623:L683623:{c.instructions+=3;NFSU2_TR(0x683623);
__builtin_memmove((R+24),(R+0),4);
}
B683625:{NFSU2_TR(0x683625);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683627:{NFSU2_TR(0x683627);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68362d:L68362d:{c.instructions+=10;NFSU2_TR(0x68362d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683630:{NFSU2_TR(0x683630);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683632:{NFSU2_TR(0x683632);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683634:{NFSU2_TR(0x683634);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683637:{NFSU2_TR(0x683637);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B68363c:{NFSU2_TR(0x68363c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68363f:{NFSU2_TR(0x68363f);
__builtin_memmove((R+4),(R+12),4);
}
B683641:{NFSU2_TR(0x683641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683642:{NFSU2_TR(0x683642);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683645:{NFSU2_TR(0x683645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68364aull));
TAIL_STATIC(0x6758ceu,675);
}
B68364a:L68364a:{c.instructions+=3;NFSU2_TR(0x68364a);
__builtin_memmove((R+24),(R+0),4);
}
B68364c:{NFSU2_TR(0x68364c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68364e:{NFSU2_TR(0x68364e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683654:L683654:{c.instructions+=5;NFSU2_TR(0x683654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683657:{NFSU2_TR(0x683657);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683659:{NFSU2_TR(0x683659);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68365c:{NFSU2_TR(0x68365c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68365f:{NFSU2_TR(0x68365f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6831d8u);}goto L6831d8;}
}
B683664:L683664:{c.instructions+=2;NFSU2_TR(0x683664);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683666:{NFSU2_TR(0x683666);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68366c:L68366c:{c.instructions+=2;NFSU2_TR(0x68366c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68366e:{NFSU2_TR(0x68366e);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683674:L683674:{c.instructions+=2;NFSU2_TR(0x683674);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683678:{NFSU2_TR(0x683678);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B68367e:L68367e:{c.instructions+=4;NFSU2_TR(0x68367e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68367f:{NFSU2_TR(0x68367f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683682:{NFSU2_TR(0x683682);
__builtin_memmove((R+4),(R+12),4);
}
B683684:{NFSU2_TR(0x683684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683689ull));
TAIL_STATIC(0x673b2cu,673);
}
B683689:L683689:{c.instructions+=3;NFSU2_TR(0x683689);
__builtin_memmove((R+24),(R+0),4);
}
B68368b:{NFSU2_TR(0x68368b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68368d:{NFSU2_TR(0x68368d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683693:L683693:{c.instructions+=1;NFSU2_TR(0x683693);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683695:L683695:{c.instructions+=3;NFSU2_TR(0x683695);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683698:{NFSU2_TR(0x683698);
__builtin_memmove((R+0),(R+28),4);
}
B68369a:{NFSU2_TR(0x68369a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B68369f:L68369f:{c.instructions+=3;NFSU2_TR(0x68369f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6836a2:{NFSU2_TR(0x6836a2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6836a7:{NFSU2_TR(0x6836a7);
TAIL_STATIC(0x682ffcu,682);
}
B6836ac:L6836ac:{c.instructions+=2;NFSU2_TR(0x6836ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6836ae:{NFSU2_TR(0x6836ae);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6836b4:L6836b4:{c.instructions+=2;NFSU2_TR(0x6836b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6836b6:{NFSU2_TR(0x6836b6);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6836bc:L6836bc:{c.instructions+=2;NFSU2_TR(0x6836bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6836c0:{NFSU2_TR(0x6836c0);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6836c6:L6836c6:{c.instructions+=3;NFSU2_TR(0x6836c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6836c7:{NFSU2_TR(0x6836c7);
__builtin_memmove((R+4),(R+12),4);
}
B6836c9:{NFSU2_TR(0x6836c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6836ceull));
TAIL_STATIC(0x673a0fu,673);
}
B6836ce:L6836ce:{c.instructions+=3;NFSU2_TR(0x6836ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6836d0:{NFSU2_TR(0x6836d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6836d3:{NFSU2_TR(0x6836d3);
if(r1(R+518)){{goto L683dfc;}}
}
B6836d9:L6836d9:{c.instructions+=4;NFSU2_TR(0x6836d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6836da:{NFSU2_TR(0x6836da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6836db:{NFSU2_TR(0x6836db);
__builtin_memmove((R+4),(R+12),4);
}
B6836dd:{NFSU2_TR(0x6836dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6836e2ull));
TAIL_STATIC(0x673b2cu,673);
}
B6836e2:L6836e2:{c.instructions+=3;NFSU2_TR(0x6836e2);
__builtin_memmove((R+24),(R+0),4);
}
B6836e4:{NFSU2_TR(0x6836e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6836e6:{NFSU2_TR(0x6836e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6836ec:L6836ec:{c.instructions+=4;NFSU2_TR(0x6836ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6836ed:{NFSU2_TR(0x6836ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6836f0:{NFSU2_TR(0x6836f0);
__builtin_memmove((R+4),(R+12),4);
}
B6836f2:{NFSU2_TR(0x6836f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6836f7ull));
TAIL_STATIC(0x673b2cu,673);
}
B6836f7:L6836f7:{c.instructions+=3;NFSU2_TR(0x6836f7);
__builtin_memmove((R+24),(R+0),4);
}
B6836f9:{NFSU2_TR(0x6836f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6836fb:{NFSU2_TR(0x6836fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683701:L683701:{c.instructions+=12;NFSU2_TR(0x683701);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683703:{NFSU2_TR(0x683703);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683705:{NFSU2_TR(0x683705);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683708:{NFSU2_TR(0x683708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68370b:{NFSU2_TR(0x68370b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B683710:{NFSU2_TR(0x683710);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683713:{NFSU2_TR(0x683713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683716:{NFSU2_TR(0x683716);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B68371b:{NFSU2_TR(0x68371b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68371c:{NFSU2_TR(0x68371c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68371f:{NFSU2_TR(0x68371f);
__builtin_memmove((R+4),(R+12),4);
}
B683721:{NFSU2_TR(0x683721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683726ull));
TAIL_STATIC(0x6758ceu,675);
}
B683726:L683726:{c.instructions+=3;NFSU2_TR(0x683726);
__builtin_memmove((R+24),(R+0),4);
}
B683728:{NFSU2_TR(0x683728);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68372a:{NFSU2_TR(0x68372a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683730:L683730:{c.instructions+=4;NFSU2_TR(0x683730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683733:{NFSU2_TR(0x683733);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683735:{NFSU2_TR(0x683735);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683738:{NFSU2_TR(0x683738);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68369fu);}goto L68369f;}
}
B68373d:L68373d:{c.instructions+=2;NFSU2_TR(0x68373d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68373f:{NFSU2_TR(0x68373f);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683745:L683745:{c.instructions+=2;NFSU2_TR(0x683745);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683747:{NFSU2_TR(0x683747);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68374d:L68374d:{c.instructions+=2;NFSU2_TR(0x68374d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683751:{NFSU2_TR(0x683751);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683757:L683757:{c.instructions+=5;NFSU2_TR(0x683757);
__builtin_memmove((R+0),(R+28),4);
}
B683759:{NFSU2_TR(0x683759);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68375c:{NFSU2_TR(0x68375c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68375d:{NFSU2_TR(0x68375d);
__builtin_memmove((R+4),(R+12),4);
}
B68375f:{NFSU2_TR(0x68375f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683764ull));
TAIL_STATIC(0x673a0fu,673);
}
B683764:L683764:{c.instructions+=2;NFSU2_TR(0x683764);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683766:{NFSU2_TR(0x683766);
if(r1(R+518)){{goto L683dfc;}}
}
B68376c:L68376c:{c.instructions+=3;NFSU2_TR(0x68376c);
__builtin_memmove((R+8),(R+28),4);
}
B68376e:{NFSU2_TR(0x68376e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683770:{NFSU2_TR(0x683770);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B683773:L683773:{c.instructions+=5;NFSU2_TR(0x683773);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B683777:{NFSU2_TR(0x683777);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B683778:{NFSU2_TR(0x683778);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B68377a:{NFSU2_TR(0x68377a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B68377d:{NFSU2_TR(0x68377d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683773u);}goto L683773;}}
}
B68377f:L68377f:{c.instructions+=1;NFSU2_TR(0x68377f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B683781:L683781:{c.instructions+=4;NFSU2_TR(0x683781);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683782:{NFSU2_TR(0x683782);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B683786:{NFSU2_TR(0x683786);
__builtin_memmove((R+4),(R+12),4);
}
B683788:{NFSU2_TR(0x683788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68378dull));
TAIL_STATIC(0x673b2cu,673);
}
B68378d:L68378d:{c.instructions+=3;NFSU2_TR(0x68378d);
__builtin_memmove((R+24),(R+0),4);
}
B68378f:{NFSU2_TR(0x68378f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683791:{NFSU2_TR(0x683791);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683797:L683797:{c.instructions+=3;NFSU2_TR(0x683797);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B683798:{NFSU2_TR(0x683798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B68379b:{NFSU2_TR(0x68379b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683781u);}goto L683781;}}
}
B68379d:L68379d:{c.instructions+=4;NFSU2_TR(0x68379d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68379e:{NFSU2_TR(0x68379e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837a1:{NFSU2_TR(0x6837a1);
__builtin_memmove((R+4),(R+12),4);
}
B6837a3:{NFSU2_TR(0x6837a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6837a8ull));
TAIL_STATIC(0x673b2cu,673);
}
B6837a8:L6837a8:{c.instructions+=3;NFSU2_TR(0x6837a8);
__builtin_memmove((R+24),(R+0),4);
}
B6837aa:{NFSU2_TR(0x6837aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6837ac:{NFSU2_TR(0x6837ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6837b2:L6837b2:{c.instructions+=13;NFSU2_TR(0x6837b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6837b4:{NFSU2_TR(0x6837b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837b7:{NFSU2_TR(0x6837b7);
__builtin_memmove((R+0),(R+28),4);
}
B6837b9:{NFSU2_TR(0x6837b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837bc:{NFSU2_TR(0x6837bc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6837c1:{NFSU2_TR(0x6837c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837c4:{NFSU2_TR(0x6837c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6837c7:{NFSU2_TR(0x6837c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x2050ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6837cd:{NFSU2_TR(0x6837cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837d0:{NFSU2_TR(0x6837d0);
__builtin_memmove((R+4),(R+12),4);
}
B6837d2:{NFSU2_TR(0x6837d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837d5:{NFSU2_TR(0x6837d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6837d8:{NFSU2_TR(0x6837d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6837ddull));
TAIL_STATIC(0x6758ceu,675);
}
B6837dd:L6837dd:{c.instructions+=3;NFSU2_TR(0x6837dd);
__builtin_memmove((R+24),(R+0),4);
}
B6837df:{NFSU2_TR(0x6837df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6837e1:{NFSU2_TR(0x6837e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6837e7:L6837e7:{c.instructions+=11;NFSU2_TR(0x6837e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6837ea:{NFSU2_TR(0x6837ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6837ec:{NFSU2_TR(0x6837ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6837ee:{NFSU2_TR(0x6837ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837f1:{NFSU2_TR(0x6837f1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6837f6:{NFSU2_TR(0x6837f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837f9:{NFSU2_TR(0x6837f9);
__builtin_memmove((R+4),(R+12),4);
}
B6837fb:{NFSU2_TR(0x6837fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6837fc:{NFSU2_TR(0x6837fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6837ff:{NFSU2_TR(0x6837ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683802:{NFSU2_TR(0x683802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683807ull));
TAIL_STATIC(0x6758ceu,675);
}
B683807:L683807:{c.instructions+=3;NFSU2_TR(0x683807);
__builtin_memmove((R+24),(R+0),4);
}
B683809:{NFSU2_TR(0x683809);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68380b:{NFSU2_TR(0x68380b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683811:L683811:{c.instructions+=10;NFSU2_TR(0x683811);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683814:{NFSU2_TR(0x683814);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683816:{NFSU2_TR(0x683816);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683819:{NFSU2_TR(0x683819);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B68381e:{NFSU2_TR(0x68381e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683821:{NFSU2_TR(0x683821);
__builtin_memmove((R+4),(R+12),4);
}
B683823:{NFSU2_TR(0x683823);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683826:{NFSU2_TR(0x683826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683827:{NFSU2_TR(0x683827);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68382a:{NFSU2_TR(0x68382a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68382full));
TAIL_STATIC(0x6758ceu,675);
}
B68382f:L68382f:{c.instructions+=3;NFSU2_TR(0x68382f);
__builtin_memmove((R+24),(R+0),4);
}
B683831:{NFSU2_TR(0x683831);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683833:{NFSU2_TR(0x683833);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683839:L683839:{c.instructions+=8;NFSU2_TR(0x683839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68383b:{NFSU2_TR(0x68383b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68383d:{NFSU2_TR(0x68383d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683840:{NFSU2_TR(0x683840);
__builtin_memmove((R+4),(R+12),4);
}
B683842:{NFSU2_TR(0x683842);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683845:{NFSU2_TR(0x683845);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683848:{NFSU2_TR(0x683848);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68384b:{NFSU2_TR(0x68384b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683850ull));
TAIL_STATIC(0x6758ceu,675);
}
B683850:L683850:{c.instructions+=3;NFSU2_TR(0x683850);
__builtin_memmove((R+24),(R+0),4);
}
B683852:{NFSU2_TR(0x683852);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683854:{NFSU2_TR(0x683854);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68385a:L68385a:{c.instructions+=8;NFSU2_TR(0x68385a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68385b:{NFSU2_TR(0x68385b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68385e:{NFSU2_TR(0x68385e);
__builtin_memmove((R+4),(R+12),4);
}
B683860:{NFSU2_TR(0x683860);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683863:{NFSU2_TR(0x683863);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683866:{NFSU2_TR(0x683866);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683869:{NFSU2_TR(0x683869);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68386c:{NFSU2_TR(0x68386c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683871ull));
TAIL_STATIC(0x6779e0u,677);
}
B683871:L683871:{c.instructions+=3;NFSU2_TR(0x683871);
__builtin_memmove((R+24),(R+0),4);
}
B683873:{NFSU2_TR(0x683873);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683875:{NFSU2_TR(0x683875);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B68387b:L68387b:{c.instructions+=10;NFSU2_TR(0x68387b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68387e:{NFSU2_TR(0x68387e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683880:{NFSU2_TR(0x683880);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683882:{NFSU2_TR(0x683882);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683885:{NFSU2_TR(0x683885);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B68388a:{NFSU2_TR(0x68388a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68388d:{NFSU2_TR(0x68388d);
__builtin_memmove((R+4),(R+12),4);
}
B68388f:{NFSU2_TR(0x68388f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683890:{NFSU2_TR(0x683890);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683893:{NFSU2_TR(0x683893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683898ull));
TAIL_STATIC(0x6758ceu,675);
}
B683898:L683898:{c.instructions+=3;NFSU2_TR(0x683898);
__builtin_memmove((R+24),(R+0),4);
}
B68389a:{NFSU2_TR(0x68389a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68389c:{NFSU2_TR(0x68389c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6838a2:L6838a2:{c.instructions+=8;NFSU2_TR(0x6838a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6838a4:{NFSU2_TR(0x6838a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838a7:{NFSU2_TR(0x6838a7);
__builtin_memmove((R+4),(R+12),4);
}
B6838a9:{NFSU2_TR(0x6838a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838ac:{NFSU2_TR(0x6838ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838af:{NFSU2_TR(0x6838af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838b2:{NFSU2_TR(0x6838b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838b5:{NFSU2_TR(0x6838b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6838baull));
TAIL_STATIC(0x6758ceu,675);
}
B6838ba:L6838ba:{c.instructions+=3;NFSU2_TR(0x6838ba);
__builtin_memmove((R+24),(R+0),4);
}
B6838bc:{NFSU2_TR(0x6838bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6838be:{NFSU2_TR(0x6838be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6838c4:L6838c4:{c.instructions+=10;NFSU2_TR(0x6838c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6838c7:{NFSU2_TR(0x6838c7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6838c9:{NFSU2_TR(0x6838c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6838cb:{NFSU2_TR(0x6838cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838ce:{NFSU2_TR(0x6838ce);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B6838d3:{NFSU2_TR(0x6838d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838d6:{NFSU2_TR(0x6838d6);
__builtin_memmove((R+4),(R+12),4);
}
B6838d8:{NFSU2_TR(0x6838d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6838d9:{NFSU2_TR(0x6838d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838dc:{NFSU2_TR(0x6838dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6838e1ull));
TAIL_STATIC(0x6758ceu,675);
}
B6838e1:L6838e1:{c.instructions+=3;NFSU2_TR(0x6838e1);
__builtin_memmove((R+24),(R+0),4);
}
B6838e3:{NFSU2_TR(0x6838e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6838e5:{NFSU2_TR(0x6838e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B6838eb:L6838eb:{c.instructions+=6;NFSU2_TR(0x6838eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6838ed:{NFSU2_TR(0x6838ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838f0:{NFSU2_TR(0x6838f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838f3:{NFSU2_TR(0x6838f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838f6:{NFSU2_TR(0x6838f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6838f9:{NFSU2_TR(0x6838f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683000u);}goto L683000;}
}
B6838fe:L6838fe:{c.instructions+=2;NFSU2_TR(0x6838fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683900:{NFSU2_TR(0x683900);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683906:L683906:{c.instructions+=11;NFSU2_TR(0x683906);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683909:{NFSU2_TR(0x683909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68390c:{NFSU2_TR(0x68390c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68390f:{NFSU2_TR(0x68390f);
__builtin_memmove((R+4),(R+12),4);
}
B683911:{NFSU2_TR(0x683911);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683914:{NFSU2_TR(0x683914);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683917:{NFSU2_TR(0x683917);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68391a:{NFSU2_TR(0x68391a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68391b:{NFSU2_TR(0x68391b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68391e:{NFSU2_TR(0x68391e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683921:{NFSU2_TR(0x683921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683926ull));
TAIL_STATIC(0x680a9cu,680);
}
B683926:L683926:{c.instructions+=1;NFSU2_TR(0x683926);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68300au);}goto L68300a;}
}
B68392b:L68392b:{c.instructions+=2;NFSU2_TR(0x68392b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68392d:{NFSU2_TR(0x68392d);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B683933:L683933:{c.instructions+=3;NFSU2_TR(0x683933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683936:{NFSU2_TR(0x683936);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683938:{NFSU2_TR(0x683938);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B68393e:L68393e:{c.instructions+=3;NFSU2_TR(0x68393e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683941:{NFSU2_TR(0x683941);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683944:{NFSU2_TR(0x683944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683973;}}
}
B683946:L683946:{c.instructions+=2;NFSU2_TR(0x683946);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68394a:{NFSU2_TR(0x68394a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6841cdu,684);}
}
B683950:L683950:{c.instructions+=2;NFSU2_TR(0x683950);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683954:{NFSU2_TR(0x683954);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B68395a:L68395a:{c.instructions+=5;NFSU2_TR(0x68395a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68395d:{NFSU2_TR(0x68395d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683960:{NFSU2_TR(0x683960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B683963:{NFSU2_TR(0x683963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683966:{NFSU2_TR(0x683966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B683969:L683969:{c.instructions+=1;NFSU2_TR(0x683969);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L68396b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683969u);}goto L683969;}
}
B68396b:L68396b:{c.instructions+=2;NFSU2_TR(0x68396b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68396e:{NFSU2_TR(0x68396e);
TAIL_STATIC(0x682d5cu,682);
}
B683973:L683973:{c.instructions+=2;NFSU2_TR(0x683973);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683976:{NFSU2_TR(0x683976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6841cdu,684);}
}
B68397c:L68397c:{c.instructions+=2;NFSU2_TR(0x68397c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683980:{NFSU2_TR(0x683980);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B683986:L683986:{c.instructions+=4;NFSU2_TR(0x683986);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683988:{NFSU2_TR(0x683988);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68398a:{NFSU2_TR(0x68398a);
__builtin_memmove((R+0),(R+24),4);
}
B68398c:{NFSU2_TR(0x68398c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x682d5cu,682);}
}
B683992:L683992:{c.instructions+=10;NFSU2_TR(0x683992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683995:{NFSU2_TR(0x683995);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683998:{NFSU2_TR(0x683998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68399b:{NFSU2_TR(0x68399b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68399e:{NFSU2_TR(0x68399e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6839a1:{NFSU2_TR(0x6839a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6839a4:{NFSU2_TR(0x6839a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6839a7:{NFSU2_TR(0x6839a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6839a8:{NFSU2_TR(0x6839a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6839aa:{NFSU2_TR(0x6839aa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683992u);}goto L683992;}}
}
B6839ac:L6839ac:{c.instructions+=1;NFSU2_TR(0x6839ac);
TAIL_STATIC(0x682d5cu,682);
}
B6839b1:L6839b1:{c.instructions+=2;NFSU2_TR(0x6839b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6839b3:{NFSU2_TR(0x6839b3);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6839b9:L6839b9:{c.instructions+=2;NFSU2_TR(0x6839b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6839bb:{NFSU2_TR(0x6839bb);
if(r1(R+518)){TAIL_STATIC(0x6841cdu,684);}
}
B6839c1:L6839c1:{c.instructions+=2;NFSU2_TR(0x6839c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6839c5:{NFSU2_TR(0x6839c5);
if(r1(R+518)){TAIL_STATIC(0x6841b7u,684);}
}
B6839cb:L6839cb:{c.instructions+=4;NFSU2_TR(0x6839cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6839ce:{NFSU2_TR(0x6839ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6839cf:{NFSU2_TR(0x6839cf);
__builtin_memmove((R+4),(R+12),4);
}
B6839d1:{NFSU2_TR(0x6839d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6839d6ull));
TAIL_STATIC(0x673a0fu,673);
}
B6839d6:L6839d6:{c.instructions+=2;NFSU2_TR(0x6839d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6839d8:{NFSU2_TR(0x6839d8);
if(r1(R+518)){{goto L683dfc;}}
}
B6839de:L6839de:{c.instructions+=3;NFSU2_TR(0x6839de);
__builtin_memmove((R+4),(R+28),4);
}
B6839e0:{NFSU2_TR(0x6839e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6839e2:{NFSU2_TR(0x6839e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6839e5:L6839e5:{c.instructions+=5;NFSU2_TR(0x6839e5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6839e9:{NFSU2_TR(0x6839e9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6839ea:{NFSU2_TR(0x6839ea);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6839ec:{NFSU2_TR(0x6839ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6839ef:{NFSU2_TR(0x6839ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6839e5u);}goto L6839e5;}}
}
B6839f1:L6839f1:{c.instructions+=4;NFSU2_TR(0x6839f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6839f5:{NFSU2_TR(0x6839f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6839f7:{NFSU2_TR(0x6839f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6839fa:{NFSU2_TR(0x6839fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L683a8f;}}
}
B683a00:L683a00:{c.instructions+=8;NFSU2_TR(0x683a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683a03:{NFSU2_TR(0x683a03);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B683a05:{NFSU2_TR(0x683a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683a08:{NFSU2_TR(0x683a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683a0b:{NFSU2_TR(0x683a0b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B683a0d:{NFSU2_TR(0x683a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683a10:{NFSU2_TR(0x683a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B683a13:{NFSU2_TR(0x683a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683a16:L683a16:{c.instructions+=8;NFSU2_TR(0x683a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683a19:{NFSU2_TR(0x683a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B683a1c:{NFSU2_TR(0x683a1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683a1d:{NFSU2_TR(0x683a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683a20:{NFSU2_TR(0x683a20);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B683a22:{NFSU2_TR(0x683a22);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B683a25:{NFSU2_TR(0x683a25);
__builtin_memmove((R+4),(R+12),4);
}
B683a27:{NFSU2_TR(0x683a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683a2cull));
TAIL_STATIC(0x673e90u,673);
}
B683a2c:L683a2c:{c.instructions+=2;NFSU2_TR(0x683a2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683a2e:{NFSU2_TR(0x683a2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L683a8f;}}
}
B683a30:L683a30:{c.instructions+=6;NFSU2_TR(0x683a30);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B683a36:{NFSU2_TR(0x683a36);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B683a39:{NFSU2_TR(0x683a39);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B683a3b:{NFSU2_TR(0x683a3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B683a3d:{NFSU2_TR(0x683a3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B683a40:{NFSU2_TR(0x683a40);
if(r1(R+518)){{goto L683a71;}}
}
B683a42:L683a42:{c.instructions+=5;NFSU2_TR(0x683a42);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B683a45:{NFSU2_TR(0x683a45);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B683a47:{NFSU2_TR(0x683a47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B683a49:{NFSU2_TR(0x683a49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B683a4c:{NFSU2_TR(0x683a4c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L683a71;}}
}
B683a4e:L683a4e:{c.instructions+=6;NFSU2_TR(0x683a4e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B683a50:{NFSU2_TR(0x683a50);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B683a53:{NFSU2_TR(0x683a53);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B683a55:{NFSU2_TR(0x683a55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B683a57:{NFSU2_TR(0x683a57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B683a5a:{NFSU2_TR(0x683a5a);
if(r1(R+514)){{goto L683a8d;}}
}
B683a5c:L683a5c:{c.instructions+=7;NFSU2_TR(0x683a5c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B683a5e:{NFSU2_TR(0x683a5e);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B683a61:{NFSU2_TR(0x683a61);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B683a63:{NFSU2_TR(0x683a63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B683a65:{NFSU2_TR(0x683a65);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B683a67:{NFSU2_TR(0x683a67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B683a6a:{NFSU2_TR(0x683a6a);
if(r1(R+514)){{goto L683a8f;}}
}
B683a6c:L683a6c:{c.instructions+=2;NFSU2_TR(0x683a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683a6f:{NFSU2_TR(0x683a6f);
{goto L683a78;}
}
B683a71:L683a71:{c.instructions+=3;NFSU2_TR(0x683a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683a74:{NFSU2_TR(0x683a74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B683a76:{NFSU2_TR(0x683a76);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B683a78:L683a78:{c.instructions+=7;NFSU2_TR(0x683a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B683a7a:{NFSU2_TR(0x683a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683a7d:{NFSU2_TR(0x683a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683a81:{NFSU2_TR(0x683a81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B683a83:{NFSU2_TR(0x683a83);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B683a86:{NFSU2_TR(0x683a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B683a89:{NFSU2_TR(0x683a89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683a16u);}goto L683a16;}}
}
B683a8b:L683a8b:{c.instructions+=1;NFSU2_TR(0x683a8b);
{goto L683a8f;}
}
B683a8d:L683a8d:{c.instructions+=1;NFSU2_TR(0x683a8d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B683a8f:L683a8f:{c.instructions+=4;NFSU2_TR(0x683a8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683a92:{NFSU2_TR(0x683a92);
__builtin_memmove((R+4),(R+12),4);
}
B683a94:{NFSU2_TR(0x683a94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683a95:{NFSU2_TR(0x683a95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683ac1;}}
}
B683a97:L683a97:{c.instructions+=2;NFSU2_TR(0x683a97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683a9a:{NFSU2_TR(0x683a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683a9full));
TAIL_STATIC(0x673b2cu,673);
}
B683a9f:L683a9f:{c.instructions+=3;NFSU2_TR(0x683a9f);
__builtin_memmove((R+24),(R+0),4);
}
B683aa1:{NFSU2_TR(0x683aa1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683aa3:{NFSU2_TR(0x683aa3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683aa9:L683aa9:{c.instructions+=3;NFSU2_TR(0x683aa9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683aab:{NFSU2_TR(0x683aab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683aad:{NFSU2_TR(0x683aad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ab0:L683ab0:{c.instructions+=4;NFSU2_TR(0x683ab0);
__builtin_memmove((R+0),(R+28),4);
}
B683ab2:{NFSU2_TR(0x683ab2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B683ab7:{NFSU2_TR(0x683ab7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B683abc:{NFSU2_TR(0x683abc);
TAIL_STATIC(0x682ffcu,682);
}
B683ac1:L683ac1:{c.instructions+=2;NFSU2_TR(0x683ac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ac4:{NFSU2_TR(0x683ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683ac9ull));
TAIL_STATIC(0x673b2cu,673);
}
B683ac9:L683ac9:{c.instructions+=3;NFSU2_TR(0x683ac9);
__builtin_memmove((R+24),(R+0),4);
}
B683acb:{NFSU2_TR(0x683acb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683acd:{NFSU2_TR(0x683acd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683ad3:L683ad3:{c.instructions+=4;NFSU2_TR(0x683ad3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ad4:{NFSU2_TR(0x683ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ad7:{NFSU2_TR(0x683ad7);
__builtin_memmove((R+4),(R+12),4);
}
B683ad9:{NFSU2_TR(0x683ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683adeull));
TAIL_STATIC(0x673b2cu,673);
}
B683ade:L683ade:{c.instructions+=3;NFSU2_TR(0x683ade);
__builtin_memmove((R+24),(R+0),4);
}
B683ae0:{NFSU2_TR(0x683ae0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683ae2:{NFSU2_TR(0x683ae2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683ae8:L683ae8:{c.instructions+=4;NFSU2_TR(0x683ae8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ae9:{NFSU2_TR(0x683ae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683aec:{NFSU2_TR(0x683aec);
__builtin_memmove((R+4),(R+12),4);
}
B683aee:{NFSU2_TR(0x683aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683af3ull));
TAIL_STATIC(0x673b2cu,673);
}
B683af3:L683af3:{c.instructions+=3;NFSU2_TR(0x683af3);
__builtin_memmove((R+24),(R+0),4);
}
B683af5:{NFSU2_TR(0x683af5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683af7:{NFSU2_TR(0x683af7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683afd:L683afd:{c.instructions+=7;NFSU2_TR(0x683afd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683afe:{NFSU2_TR(0x683afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b01:{NFSU2_TR(0x683b01);
__builtin_memmove((R+4),(R+12),4);
}
B683b03:{NFSU2_TR(0x683b03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b06:{NFSU2_TR(0x683b06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b09:{NFSU2_TR(0x683b09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b0c:{NFSU2_TR(0x683b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683b11ull));
TAIL_STATIC(0x6782eau,678);
}
B683b11:L683b11:{c.instructions+=3;NFSU2_TR(0x683b11);
__builtin_memmove((R+24),(R+0),4);
}
B683b13:{NFSU2_TR(0x683b13);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683b15:{NFSU2_TR(0x683b15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683b1b:L683b1b:{c.instructions+=11;NFSU2_TR(0x683b1b);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b1d:{NFSU2_TR(0x683b1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b20:{NFSU2_TR(0x683b20);
__builtin_memmove((R+0),(R+28),4);
}
B683b22:{NFSU2_TR(0x683b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b25:{NFSU2_TR(0x683b25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B683b2a:{NFSU2_TR(0x683b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b2d:{NFSU2_TR(0x683b2d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B683b32:{NFSU2_TR(0x683b32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b33:{NFSU2_TR(0x683b33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b36:{NFSU2_TR(0x683b36);
__builtin_memmove((R+4),(R+12),4);
}
B683b38:{NFSU2_TR(0x683b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683b3dull));
TAIL_STATIC(0x6758ceu,675);
}
B683b3d:L683b3d:{c.instructions+=3;NFSU2_TR(0x683b3d);
__builtin_memmove((R+24),(R+0),4);
}
B683b3f:{NFSU2_TR(0x683b3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683b41:{NFSU2_TR(0x683b41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683b47:L683b47:{c.instructions+=10;NFSU2_TR(0x683b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683b4a:{NFSU2_TR(0x683b4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b4b:{NFSU2_TR(0x683b4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b4e:{NFSU2_TR(0x683b4e);
__builtin_memmove((R+4),(R+12),4);
}
B683b50:{NFSU2_TR(0x683b50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b51:{NFSU2_TR(0x683b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B683b54:{NFSU2_TR(0x683b54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b55:{NFSU2_TR(0x683b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b58:{NFSU2_TR(0x683b58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b5b:{NFSU2_TR(0x683b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683b60ull));
TAIL_STATIC(0x6779e0u,677);
}
B683b60:L683b60:{c.instructions+=1;NFSU2_TR(0x683b60);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68300au);}goto L68300a;}
}
B683b65:L683b65:{c.instructions+=5;NFSU2_TR(0x683b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B683b68:{NFSU2_TR(0x683b68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b69:{NFSU2_TR(0x683b69);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b6c:{NFSU2_TR(0x683b6c);
__builtin_memmove((R+4),(R+12),4);
}
B683b6e:{NFSU2_TR(0x683b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683b73ull));
TAIL_STATIC(0x674fdfu,674);
}
B683b73:L683b73:{c.instructions+=2;NFSU2_TR(0x683b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683b75:{NFSU2_TR(0x683b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683b93;}}
}
B683b77:L683b77:{c.instructions+=6;NFSU2_TR(0x683b77);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683b7a:{NFSU2_TR(0x683b7a);
u8 U[4];
w4(U+0,u32(0x7b7c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b7f:{NFSU2_TR(0x683b7f);
u8 U[4];
w4(U+0,u32(0xdb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b84:{NFSU2_TR(0x683b84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b85:{NFSU2_TR(0x683b85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b86:{NFSU2_TR(0x683b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683b8bull));
TAIL_STATIC(0x675267u,675);
}
B683b8b:L683b8b:{c.instructions+=2;NFSU2_TR(0x683b8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B683b8e:{NFSU2_TR(0x683b8e);
TAIL_STATIC(0x6841cdu,684);
}
B683b93:L683b93:{c.instructions+=10;NFSU2_TR(0x683b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683b96:{NFSU2_TR(0x683b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683b99:{NFSU2_TR(0x683b99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b9b:{NFSU2_TR(0x683b9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683b9d:{NFSU2_TR(0x683b9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ba0:{NFSU2_TR(0x683ba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ba3:{NFSU2_TR(0x683ba3);
__builtin_memmove((R+4),(R+12),4);
}
B683ba5:{NFSU2_TR(0x683ba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ba6:{NFSU2_TR(0x683ba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ba9:{NFSU2_TR(0x683ba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683baeull));
TAIL_STATIC(0x681ff6u,681);
}
B683bae:L683bae:{c.instructions+=2;NFSU2_TR(0x683bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683bb1:{NFSU2_TR(0x683bb1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68300au);}goto L68300a;}
}
B683bb6:L683bb6:{c.instructions+=4;NFSU2_TR(0x683bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683bb9:{NFSU2_TR(0x683bb9);
__builtin_memmove((R+4),(R+12),4);
}
B683bbb:{NFSU2_TR(0x683bbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683bbe:{NFSU2_TR(0x683bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683bc3ull));
TAIL_STATIC(0x67ad18u,67a);
}
B683bc3:L683bc3:{c.instructions+=1;NFSU2_TR(0x683bc3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68300au);}goto L68300a;}
}
B683bc8:L683bc8:{c.instructions+=3;NFSU2_TR(0x683bc8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683bca:{NFSU2_TR(0x683bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B683bcb:{NFSU2_TR(0x683bcb);
{goto L683bcf;}
}
B683bcd:L683bcd:{c.instructions+=1;NFSU2_TR(0x683bcd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B683bcf:L683bcf:{c.instructions+=2;NFSU2_TR(0x683bcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B683bd1:{NFSU2_TR(0x683bd1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683bcdu);}goto L683bcd;}}
}
B683bd3:L683bd3:{c.instructions+=4;NFSU2_TR(0x683bd3);
__builtin_memmove((R+0),(R+24),4);
}
B683bd5:{NFSU2_TR(0x683bd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B683bd8:{NFSU2_TR(0x683bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683bd9:{NFSU2_TR(0x683bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683bdeull));
TAIL_STATIC(0x575620u,575);
}
B683bde:L683bde:{c.instructions+=4;NFSU2_TR(0x683bde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683be0:{NFSU2_TR(0x683be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B683be1:{NFSU2_TR(0x683be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683be4:{NFSU2_TR(0x683be4);
if(r1(R+518)){{goto L683dfc;}}
}
B683bea:L683bea:{c.instructions+=2;NFSU2_TR(0x683bea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683bf0:{NFSU2_TR(0x683bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683bf5ull));
TAIL_STATIC(0x575630u,575);
}
B683bf5:L683bf5:{c.instructions+=13;NFSU2_TR(0x683bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683bf8:{NFSU2_TR(0x683bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B683bf9:{NFSU2_TR(0x683bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683bff:{NFSU2_TR(0x683bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c05:{NFSU2_TR(0x683c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c0b:{NFSU2_TR(0x683c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c0e:{NFSU2_TR(0x683c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B683c11:{NFSU2_TR(0x683c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683c12:{NFSU2_TR(0x683c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c15:{NFSU2_TR(0x683c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c18:{NFSU2_TR(0x683c18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683c1b:{NFSU2_TR(0x683c1b);
__builtin_memmove((R+4),(R+12),4);
}
B683c1d:{NFSU2_TR(0x683c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683c22ull));
TAIL_STATIC(0x6753b9u,675);
}
B683c22:L683c22:{c.instructions+=6;NFSU2_TR(0x683c22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B683c24:{NFSU2_TR(0x683c24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683c26:{NFSU2_TR(0x683c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c29:{NFSU2_TR(0x683c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c2c:{NFSU2_TR(0x683c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c2f:{NFSU2_TR(0x683c2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x684152u,684);}
}
B683c35:L683c35:{c.instructions+=9;NFSU2_TR(0x683c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683c38:{NFSU2_TR(0x683c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c3b:{NFSU2_TR(0x683c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683c3e:{NFSU2_TR(0x683c3e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B683c40:{NFSU2_TR(0x683c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c43:{NFSU2_TR(0x683c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B683c46:{NFSU2_TR(0x683c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c49:{NFSU2_TR(0x683c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683c4c:{NFSU2_TR(0x683c4c);
{goto L683c51;}
}
B683c4e:L683c4e:{c.instructions+=1;NFSU2_TR(0x683c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c51:L683c51:{c.instructions+=7;NFSU2_TR(0x683c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683c54:{NFSU2_TR(0x683c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683c57:{NFSU2_TR(0x683c57);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B683c59:{NFSU2_TR(0x683c59);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B683c5c:{NFSU2_TR(0x683c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c5f:{NFSU2_TR(0x683c5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B683c62:{NFSU2_TR(0x683c62);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L683c6c;}}
}
B683c64:L683c64:{c.instructions+=3;NFSU2_TR(0x683c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683c67:{NFSU2_TR(0x683c67);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B683c6a:{NFSU2_TR(0x683c6a);
{goto L683c6e;}
}
B683c6c:L683c6c:{c.instructions+=1;NFSU2_TR(0x683c6c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683c6e:L683c6e:{c.instructions+=2;NFSU2_TR(0x683c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683c70:{NFSU2_TR(0x683c70);
if(r1(R+518)){{goto L683d56;}}
}
B683c76:L683c76:{c.instructions+=4;NFSU2_TR(0x683c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c79:{NFSU2_TR(0x683c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683c7c:{NFSU2_TR(0x683c7c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683c7e:{NFSU2_TR(0x683c7e);
if(r1(R+518)){{goto L683cb4;}}
}
B683c80:L683c80:{c.instructions+=2;NFSU2_TR(0x683c80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683c83:{NFSU2_TR(0x683c83);
if(r1(R+518)){{goto L683c98;}}
}
B683c85:L683c85:{c.instructions+=2;NFSU2_TR(0x683c85);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683c88:{NFSU2_TR(0x683c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683c98;}}
}
B683c8a:L683c8a:{c.instructions+=4;NFSU2_TR(0x683c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683c8d:{NFSU2_TR(0x683c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683c90:{NFSU2_TR(0x683c90);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B683c96:{NFSU2_TR(0x683c96);
{goto L683cba;}
}
B683c98:L683c98:{c.instructions+=2;NFSU2_TR(0x683c98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683c9a:{NFSU2_TR(0x683c9a);
if(r1(R+518)){{goto L683cb4;}}
}
B683c9c:L683c9c:{c.instructions+=2;NFSU2_TR(0x683c9c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683c9f:{NFSU2_TR(0x683c9f);
if(r1(R+518)){{goto L683cb4;}}
}
B683ca1:L683ca1:{c.instructions+=2;NFSU2_TR(0x683ca1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B683ca4:{NFSU2_TR(0x683ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683cb4;}}
}
B683ca6:L683ca6:{c.instructions+=4;NFSU2_TR(0x683ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683ca9:{NFSU2_TR(0x683ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683cac:{NFSU2_TR(0x683cac);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B683cb2:{NFSU2_TR(0x683cb2);
{goto L683cba;}
}
B683cb4:L683cb4:{c.instructions+=2;NFSU2_TR(0x683cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683cb7:{NFSU2_TR(0x683cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B683cba:L683cba:{c.instructions+=4;NFSU2_TR(0x683cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683cbd:{NFSU2_TR(0x683cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B683cc1:{NFSU2_TR(0x683cc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B683cc4:{NFSU2_TR(0x683cc4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683c4eu);}goto L683c4e;}}
}
B683cc6:L683cc6:{c.instructions+=2;NFSU2_TR(0x683cc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683cca:{NFSU2_TR(0x683cca);
if(r1(R+518)){{goto L683dde;}}
}
B683cd0:L683cd0:{c.instructions+=5;NFSU2_TR(0x683cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683cd3:{NFSU2_TR(0x683cd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B683cd6:{NFSU2_TR(0x683cd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683cd7:{NFSU2_TR(0x683cd7);
__builtin_memmove((R+4),(R+12),4);
}
B683cd9:{NFSU2_TR(0x683cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683cdeull));
TAIL_STATIC(0x673a0fu,673);
}
B683cde:L683cde:{c.instructions+=2;NFSU2_TR(0x683cde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683ce0:{NFSU2_TR(0x683ce0);
if(r1(R+518)){{goto L683dfc;}}
}
B683ce6:L683ce6:{c.instructions+=1;NFSU2_TR(0x683ce6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683ce8:L683ce8:{c.instructions+=5;NFSU2_TR(0x683ce8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B683cec:{NFSU2_TR(0x683cec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B683ced:{NFSU2_TR(0x683ced);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B683cef:{NFSU2_TR(0x683cef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B683cf2:{NFSU2_TR(0x683cf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683ce8u);}goto L683ce8;}}
}
B683cf4:L683cf4:{c.instructions+=4;NFSU2_TR(0x683cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683cf7:{NFSU2_TR(0x683cf7);
__builtin_memmove((R+4),(R+12),4);
}
B683cf9:{NFSU2_TR(0x683cf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683cfc:{NFSU2_TR(0x683cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683d01ull));
TAIL_STATIC(0x673b2cu,673);
}
B683d01:L683d01:{c.instructions+=3;NFSU2_TR(0x683d01);
__builtin_memmove((R+24),(R+0),4);
}
B683d03:{NFSU2_TR(0x683d03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683d05:{NFSU2_TR(0x683d05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683d0b:L683d0b:{c.instructions+=4;NFSU2_TR(0x683d0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d0e:{NFSU2_TR(0x683d0e);
__builtin_memmove((R+4),(R+12),4);
}
B683d10:{NFSU2_TR(0x683d10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d13:{NFSU2_TR(0x683d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683d18ull));
TAIL_STATIC(0x673b2cu,673);
}
B683d18:L683d18:{c.instructions+=3;NFSU2_TR(0x683d18);
__builtin_memmove((R+24),(R+0),4);
}
B683d1a:{NFSU2_TR(0x683d1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683d1c:{NFSU2_TR(0x683d1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683d22:L683d22:{c.instructions+=9;NFSU2_TR(0x683d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683d25:{NFSU2_TR(0x683d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683d28:{NFSU2_TR(0x683d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683d2b:{NFSU2_TR(0x683d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683d2e:{NFSU2_TR(0x683d2e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B683d30:{NFSU2_TR(0x683d30);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B683d32:{NFSU2_TR(0x683d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683d35:{NFSU2_TR(0x683d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683d38:{NFSU2_TR(0x683d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683d3b:L683d3b:{c.instructions+=2;NFSU2_TR(0x683d3b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B683d3f:{NFSU2_TR(0x683d3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683d6b;}}
}
B683d41:L683d41:{c.instructions+=6;NFSU2_TR(0x683d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B683d43:{NFSU2_TR(0x683d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683d46:{NFSU2_TR(0x683d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B683d49:{NFSU2_TR(0x683d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683d4c:{NFSU2_TR(0x683d4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683d50:{NFSU2_TR(0x683d50);
if(r1(R+518)){{goto L683d60;}}
}
B683d52:L683d52:{c.instructions+=2;NFSU2_TR(0x683d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B683d54:{NFSU2_TR(0x683d54);
{goto L683d63;}
}
B683d56:L683d56:{c.instructions+=2;NFSU2_TR(0x683d56);
u8 U[4];
w4(U+0,u32(0x7b78a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683d5b:{NFSU2_TR(0x683d5b);
TAIL_STATIC(0x6841c0u,684);
}
B683d60:L683d60:{c.instructions+=1;NFSU2_TR(0x683d60);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B683d63:L683d63:{c.instructions+=3;NFSU2_TR(0x683d63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B683d65:{NFSU2_TR(0x683d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683d68:{NFSU2_TR(0x683d68);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B683d6b:L683d6b:{c.instructions+=3;NFSU2_TR(0x683d6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B683d6e:{NFSU2_TR(0x683d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683d71:{NFSU2_TR(0x683d71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683d3bu);}goto L683d3b;}}
}
B683d73:L683d73:{c.instructions+=7;NFSU2_TR(0x683d73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d76:{NFSU2_TR(0x683d76);
__builtin_memmove((R+4),(R+12),4);
}
B683d78:{NFSU2_TR(0x683d78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d7b:{NFSU2_TR(0x683d7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d7e:{NFSU2_TR(0x683d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d81:{NFSU2_TR(0x683d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d84:{NFSU2_TR(0x683d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683d89ull));
TAIL_STATIC(0x6782eau,678);
}
B683d89:L683d89:{c.instructions+=3;NFSU2_TR(0x683d89);
__builtin_memmove((R+24),(R+0),4);
}
B683d8b:{NFSU2_TR(0x683d8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683d8d:{NFSU2_TR(0x683d8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683d93:L683d93:{c.instructions+=11;NFSU2_TR(0x683d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683d96:{NFSU2_TR(0x683d96);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683d98:{NFSU2_TR(0x683d98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683d9b:{NFSU2_TR(0x683d9b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B683da0:{NFSU2_TR(0x683da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683da3:{NFSU2_TR(0x683da3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B683da8:{NFSU2_TR(0x683da8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683dab:{NFSU2_TR(0x683dab);
__builtin_memmove((R+4),(R+12),4);
}
B683dad:{NFSU2_TR(0x683dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683dae:{NFSU2_TR(0x683dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683db1:{NFSU2_TR(0x683db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683db6ull));
TAIL_STATIC(0x6758ceu,675);
}
B683db6:L683db6:{c.instructions+=3;NFSU2_TR(0x683db6);
__builtin_memmove((R+24),(R+0),4);
}
B683db8:{NFSU2_TR(0x683db8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683dba:{NFSU2_TR(0x683dba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683dc0:L683dc0:{c.instructions+=3;NFSU2_TR(0x683dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683dc3:{NFSU2_TR(0x683dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683dc6:{NFSU2_TR(0x683dc6);
__builtin_memmove((R+8),(R+28),4);
}
B683dc8:L683dc8:{c.instructions+=3;NFSU2_TR(0x683dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683dcb:{NFSU2_TR(0x683dcb);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B683dcf:{NFSU2_TR(0x683dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683dd8;}}
}
B683dd1:L683dd1:{c.instructions+=3;NFSU2_TR(0x683dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B683dd3:{NFSU2_TR(0x683dd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B683dd5:{NFSU2_TR(0x683dd5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B683dd8:L683dd8:{c.instructions+=3;NFSU2_TR(0x683dd8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B683ddb:{NFSU2_TR(0x683ddb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B683ddc:{NFSU2_TR(0x683ddc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683dc8u);}goto L683dc8;}}
}
B683dde:L683dde:{c.instructions+=2;NFSU2_TR(0x683dde);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683de2:{NFSU2_TR(0x683de2);
if(r1(R+518)){TAIL_STATIC(0x684152u,684);}
}
B683de8:L683de8:{c.instructions+=6;NFSU2_TR(0x683de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683deb:{NFSU2_TR(0x683deb);
__builtin_memmove((R+0),(R+24),4);
}
B683ded:{NFSU2_TR(0x683ded);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B683df0:{NFSU2_TR(0x683df0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683df1:{NFSU2_TR(0x683df1);
__builtin_memmove((R+4),(R+12),4);
}
B683df3:{NFSU2_TR(0x683df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683df8ull));
TAIL_STATIC(0x673a0fu,673);
}
B683df8:L683df8:{c.instructions+=2;NFSU2_TR(0x683df8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B683dfa:{NFSU2_TR(0x683dfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683e19;}}
}
B683dfc:L683dfc:{c.instructions+=5;NFSU2_TR(0x683dfc);
u8 U[4];
w4(U+0,u32(0x7aba8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683e01:{NFSU2_TR(0x683e01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683e03:{NFSU2_TR(0x683e03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683e06:{NFSU2_TR(0x683e06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683e07:{NFSU2_TR(0x683e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683e0cull));
TAIL_STATIC(0x675267u,675);
}
B683e0c:L683e0c:{c.instructions+=3;NFSU2_TR(0x683e0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B683e0f:{NFSU2_TR(0x683e0f);
w4(R+24,u32(0x8007000eull));
}
B683e14:{NFSU2_TR(0x683e14);
TAIL_STATIC(0x6841d2u,684);
}
B683e19:L683e19:{c.instructions+=3;NFSU2_TR(0x683e19);
__builtin_memmove((R+8),(R+24),4);
}
B683e1b:{NFSU2_TR(0x683e1b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B683e1d:{NFSU2_TR(0x683e1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B683e20:L683e20:{c.instructions+=5;NFSU2_TR(0x683e20);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B683e24:{NFSU2_TR(0x683e24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B683e25:{NFSU2_TR(0x683e25);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B683e27:{NFSU2_TR(0x683e27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xbull))));
}
B683e2a:{NFSU2_TR(0x683e2a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683e20u);}goto L683e20;}}
}
B683e2c:L683e2c:{c.instructions+=9;NFSU2_TR(0x683e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683e2f:{NFSU2_TR(0x683e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683e32:{NFSU2_TR(0x683e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B683e35:{NFSU2_TR(0x683e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683e38:{NFSU2_TR(0x683e38);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B683e3a:{NFSU2_TR(0x683e3a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B683e3c:{NFSU2_TR(0x683e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683e3f:{NFSU2_TR(0x683e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683e42:{NFSU2_TR(0x683e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683e45:L683e45:{c.instructions+=2;NFSU2_TR(0x683e45);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B683e49:{NFSU2_TR(0x683e49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L683e6b;}}
}
B683e4b:L683e4b:{c.instructions+=6;NFSU2_TR(0x683e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B683e4d:{NFSU2_TR(0x683e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B683e50:{NFSU2_TR(0x683e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B683e53:{NFSU2_TR(0x683e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683e56:{NFSU2_TR(0x683e56);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B683e5a:{NFSU2_TR(0x683e5a);
if(r1(R+518)){{goto L683e60;}}
}
B683e5c:L683e5c:{c.instructions+=2;NFSU2_TR(0x683e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B683e5e:{NFSU2_TR(0x683e5e);
{goto L683e63;}
}
B683e60:L683e60:{c.instructions+=1;NFSU2_TR(0x683e60);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B683e63:L683e63:{c.instructions+=3;NFSU2_TR(0x683e63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B683e65:{NFSU2_TR(0x683e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B683e68:{NFSU2_TR(0x683e68);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B683e6b:L683e6b:{c.instructions+=3;NFSU2_TR(0x683e6b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B683e6e:{NFSU2_TR(0x683e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B683e71:{NFSU2_TR(0x683e71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683e45u);}goto L683e45;}}
}
B683e73:L683e73:{c.instructions+=2;NFSU2_TR(0x683e73);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B683e75:{NFSU2_TR(0x683e75);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B683e76:L683e76:{c.instructions+=4;NFSU2_TR(0x683e76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683e79:{NFSU2_TR(0x683e79);
__builtin_memmove((R+4),(R+12),4);
}
B683e7b:{NFSU2_TR(0x683e7b);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B683e7f:{NFSU2_TR(0x683e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683e84ull));
TAIL_STATIC(0x673b2cu,673);
}
B683e84:L683e84:{c.instructions+=3;NFSU2_TR(0x683e84);
__builtin_memmove((R+24),(R+0),4);
}
B683e86:{NFSU2_TR(0x683e86);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683e88:{NFSU2_TR(0x683e88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683e8e:L683e8e:{c.instructions+=3;NFSU2_TR(0x683e8e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B683e8f:{NFSU2_TR(0x683e8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B683e92:{NFSU2_TR(0x683e92);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x683e76u);}goto L683e76;}}
}
B683e94:L683e94:{c.instructions+=12;NFSU2_TR(0x683e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683e97:{NFSU2_TR(0x683e97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683e99:{NFSU2_TR(0x683e99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683e9b:{NFSU2_TR(0x683e9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683e9e:{NFSU2_TR(0x683e9e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B683ea3:{NFSU2_TR(0x683ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ea6:{NFSU2_TR(0x683ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683ea9:{NFSU2_TR(0x683ea9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10200000ull))));
}
B683eae:{NFSU2_TR(0x683eae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683eaf:{NFSU2_TR(0x683eaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683eb2:{NFSU2_TR(0x683eb2);
__builtin_memmove((R+4),(R+12),4);
}
B683eb4:{NFSU2_TR(0x683eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683eb9ull));
TAIL_STATIC(0x6758ceu,675);
}
B683eb9:L683eb9:{c.instructions+=3;NFSU2_TR(0x683eb9);
__builtin_memmove((R+24),(R+0),4);
}
B683ebb:{NFSU2_TR(0x683ebb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683ebd:{NFSU2_TR(0x683ebd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683ec3:L683ec3:{c.instructions+=10;NFSU2_TR(0x683ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683ec6:{NFSU2_TR(0x683ec6);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ec8:{NFSU2_TR(0x683ec8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683eca:{NFSU2_TR(0x683eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ecd:{NFSU2_TR(0x683ecd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B683ed2:{NFSU2_TR(0x683ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ed5:{NFSU2_TR(0x683ed5);
__builtin_memmove((R+4),(R+12),4);
}
B683ed7:{NFSU2_TR(0x683ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ed8:{NFSU2_TR(0x683ed8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683edb:{NFSU2_TR(0x683edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683ee0ull));
TAIL_STATIC(0x6758ceu,675);
}
B683ee0:L683ee0:{c.instructions+=3;NFSU2_TR(0x683ee0);
__builtin_memmove((R+24),(R+0),4);
}
B683ee2:{NFSU2_TR(0x683ee2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683ee4:{NFSU2_TR(0x683ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683eea:L683eea:{c.instructions+=11;NFSU2_TR(0x683eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683eed:{NFSU2_TR(0x683eed);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683eef:{NFSU2_TR(0x683eef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ef1:{NFSU2_TR(0x683ef1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ef4:{NFSU2_TR(0x683ef4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B683ef9:{NFSU2_TR(0x683ef9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683efc:{NFSU2_TR(0x683efc);
__builtin_memmove((R+4),(R+12),4);
}
B683efe:{NFSU2_TR(0x683efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683eff:{NFSU2_TR(0x683eff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f02:{NFSU2_TR(0x683f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683f05:{NFSU2_TR(0x683f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683f0aull));
TAIL_STATIC(0x6758ceu,675);
}
B683f0a:L683f0a:{c.instructions+=3;NFSU2_TR(0x683f0a);
__builtin_memmove((R+24),(R+0),4);
}
B683f0c:{NFSU2_TR(0x683f0c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683f0e:{NFSU2_TR(0x683f0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683f14:L683f14:{c.instructions+=11;NFSU2_TR(0x683f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683f17:{NFSU2_TR(0x683f17);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f19:{NFSU2_TR(0x683f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f1c:{NFSU2_TR(0x683f1c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B683f21:{NFSU2_TR(0x683f21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f24:{NFSU2_TR(0x683f24);
__builtin_memmove((R+4),(R+12),4);
}
B683f26:{NFSU2_TR(0x683f26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f29:{NFSU2_TR(0x683f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683f2c:{NFSU2_TR(0x683f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f2d:{NFSU2_TR(0x683f2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f30:{NFSU2_TR(0x683f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683f35ull));
TAIL_STATIC(0x6758ceu,675);
}
B683f35:L683f35:{c.instructions+=3;NFSU2_TR(0x683f35);
__builtin_memmove((R+24),(R+0),4);
}
B683f37:{NFSU2_TR(0x683f37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683f39:{NFSU2_TR(0x683f39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683f3f:L683f3f:{c.instructions+=8;NFSU2_TR(0x683f3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f41:{NFSU2_TR(0x683f41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f43:{NFSU2_TR(0x683f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f46:{NFSU2_TR(0x683f46);
__builtin_memmove((R+4),(R+12),4);
}
B683f48:{NFSU2_TR(0x683f48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f4b:{NFSU2_TR(0x683f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f4e:{NFSU2_TR(0x683f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f51:{NFSU2_TR(0x683f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683f56ull));
TAIL_STATIC(0x6758ceu,675);
}
B683f56:L683f56:{c.instructions+=3;NFSU2_TR(0x683f56);
__builtin_memmove((R+24),(R+0),4);
}
B683f58:{NFSU2_TR(0x683f58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683f5a:{NFSU2_TR(0x683f5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683f60:L683f60:{c.instructions+=11;NFSU2_TR(0x683f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683f63:{NFSU2_TR(0x683f63);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f65:{NFSU2_TR(0x683f65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f68:{NFSU2_TR(0x683f68);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B683f6d:{NFSU2_TR(0x683f6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f70:{NFSU2_TR(0x683f70);
__builtin_memmove((R+4),(R+12),4);
}
B683f72:{NFSU2_TR(0x683f72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f75:{NFSU2_TR(0x683f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B683f78:{NFSU2_TR(0x683f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f79:{NFSU2_TR(0x683f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f7c:{NFSU2_TR(0x683f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683f81ull));
TAIL_STATIC(0x6758ceu,675);
}
B683f81:L683f81:{c.instructions+=3;NFSU2_TR(0x683f81);
__builtin_memmove((R+24),(R+0),4);
}
B683f83:{NFSU2_TR(0x683f83);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683f85:{NFSU2_TR(0x683f85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683f8b:L683f8b:{c.instructions+=8;NFSU2_TR(0x683f8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f8d:{NFSU2_TR(0x683f8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683f8f:{NFSU2_TR(0x683f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f92:{NFSU2_TR(0x683f92);
__builtin_memmove((R+4),(R+12),4);
}
B683f94:{NFSU2_TR(0x683f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f97:{NFSU2_TR(0x683f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f9a:{NFSU2_TR(0x683f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683f9d:{NFSU2_TR(0x683f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683fa2ull));
TAIL_STATIC(0x6758ceu,675);
}
B683fa2:L683fa2:{c.instructions+=3;NFSU2_TR(0x683fa2);
__builtin_memmove((R+24),(R+0),4);
}
B683fa4:{NFSU2_TR(0x683fa4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683fa6:{NFSU2_TR(0x683fa6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683fac:L683fac:{c.instructions+=8;NFSU2_TR(0x683fac);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683fae:{NFSU2_TR(0x683fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fb1:{NFSU2_TR(0x683fb1);
__builtin_memmove((R+4),(R+12),4);
}
B683fb3:{NFSU2_TR(0x683fb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fb6:{NFSU2_TR(0x683fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fb9:{NFSU2_TR(0x683fb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fbc:{NFSU2_TR(0x683fbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fbf:{NFSU2_TR(0x683fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683fc4ull));
TAIL_STATIC(0x6758ceu,675);
}
B683fc4:L683fc4:{c.instructions+=3;NFSU2_TR(0x683fc4);
__builtin_memmove((R+24),(R+0),4);
}
B683fc6:{NFSU2_TR(0x683fc6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683fc8:{NFSU2_TR(0x683fc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683fce:L683fce:{c.instructions+=10;NFSU2_TR(0x683fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B683fd1:{NFSU2_TR(0x683fd1);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683fd3:{NFSU2_TR(0x683fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fd6:{NFSU2_TR(0x683fd6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B683fdb:{NFSU2_TR(0x683fdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fde:{NFSU2_TR(0x683fde);
__builtin_memmove((R+4),(R+12),4);
}
B683fe0:{NFSU2_TR(0x683fe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fe3:{NFSU2_TR(0x683fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683fe4:{NFSU2_TR(0x683fe4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683fe7:{NFSU2_TR(0x683fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x683fecull));
TAIL_STATIC(0x6758ceu,675);
}
B683fec:L683fec:{c.instructions+=3;NFSU2_TR(0x683fec);
__builtin_memmove((R+24),(R+0),4);
}
B683fee:{NFSU2_TR(0x683fee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B683ff0:{NFSU2_TR(0x683ff0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6841d2u,684);}
}
B683ff6:L683ff6:{c.instructions+=4;NFSU2_TR(0x683ff6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B683ff8:{NFSU2_TR(0x683ff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B683ffb:{NFSU2_TR(0x683ffb);
__builtin_memmove((R+4),(R+12),4);
}
B683ffd:{NFSU2_TR(0x683ffd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
TAIL_STATIC(0x684000u,684);
}
XIT:NFSU2_TR_EXIT(0x683,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
