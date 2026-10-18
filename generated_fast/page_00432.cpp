#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x432,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x432,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_432(u8* __restrict R,Cpu& c);
u32 page_432(Cpu& c){return body_432(c.regs.data(),c);}
__attribute__((noinline)) u32 body_432(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x432000:goto L432000;
case 0x432005:c.instructions+=4;goto B432005;
case 0x432006:c.instructions+=3;goto B432006;
case 0x432008:c.instructions+=2;goto B432008;
case 0x43200e:c.instructions+=1;goto B43200e;
case 0x432010:goto L432010;
case 0x432011:c.instructions+=1;goto B432011;
case 0x432016:goto L432016;
case 0x432019:goto L432019;
case 0x43201b:c.instructions+=2;goto B43201b;
case 0x43201c:c.instructions+=1;goto B43201c;
case 0x432020:goto L432020;
case 0x432025:c.instructions+=4;goto B432025;
case 0x432026:c.instructions+=3;goto B432026;
case 0x432028:c.instructions+=2;goto B432028;
case 0x43202e:c.instructions+=1;goto B43202e;
case 0x432030:goto L432030;
case 0x432031:c.instructions+=1;goto B432031;
case 0x432036:goto L432036;
case 0x432039:goto L432039;
case 0x43203b:c.instructions+=2;goto B43203b;
case 0x43203c:c.instructions+=1;goto B43203c;
case 0x432040:goto L432040;
case 0x432041:c.instructions+=3;goto B432041;
case 0x432047:c.instructions+=2;goto B432047;
case 0x43204c:c.instructions+=1;goto B43204c;
case 0x432051:goto L432051;
case 0x432053:c.instructions+=1;goto B432053;
case 0x432055:goto L432055;
case 0x432059:c.instructions+=1;goto B432059;
case 0x432060:goto L432060;
case 0x432063:c.instructions+=1;goto B432063;
case 0x432065:goto L432065;
case 0x432067:c.instructions+=2;goto B432067;
case 0x432069:c.instructions+=1;goto B432069;
case 0x43206b:goto L43206b;
case 0x43206d:c.instructions+=2;goto B43206d;
case 0x43206e:c.instructions+=1;goto B43206e;
case 0x43206f:goto L43206f;
case 0x432072:c.instructions+=2;goto B432072;
case 0x432073:c.instructions+=1;goto B432073;
case 0x432080:goto L432080;
case 0x432084:c.instructions+=2;goto B432084;
case 0x43208a:c.instructions+=1;goto B43208a;
case 0x43208c:goto L43208c;
case 0x432092:c.instructions+=8;goto B432092;
case 0x432095:c.instructions+=7;goto B432095;
case 0x432098:c.instructions+=6;goto B432098;
case 0x43209a:c.instructions+=5;goto B43209a;
case 0x43209f:c.instructions+=4;goto B43209f;
case 0x4320a2:c.instructions+=3;goto B4320a2;
case 0x4320a8:c.instructions+=2;goto B4320a8;
case 0x4320ad:c.instructions+=1;goto B4320ad;
case 0x4320ae:goto L4320ae;
case 0x4320b0:c.instructions+=1;goto B4320b0;
case 0x4320c0:goto L4320c0;
case 0x4320c4:c.instructions+=2;goto B4320c4;
case 0x4320ca:c.instructions+=1;goto B4320ca;
case 0x4320cc:goto L4320cc;
case 0x4320cf:c.instructions+=7;goto B4320cf;
case 0x4320d2:c.instructions+=6;goto B4320d2;
case 0x4320d4:c.instructions+=5;goto B4320d4;
case 0x4320d7:c.instructions+=4;goto B4320d7;
case 0x4320d9:c.instructions+=3;goto B4320d9;
case 0x4320dc:c.instructions+=2;goto B4320dc;
case 0x4320e1:c.instructions+=1;goto B4320e1;
case 0x4320e2:goto L4320e2;
case 0x4320e4:c.instructions+=1;goto B4320e4;
case 0x4320f0:goto L4320f0;
case 0x4320f1:c.instructions+=7;goto B4320f1;
case 0x4320f2:c.instructions+=6;goto B4320f2;
case 0x4320f5:c.instructions+=5;goto B4320f5;
case 0x4320f6:c.instructions+=4;goto B4320f6;
case 0x4320f8:c.instructions+=3;goto B4320f8;
case 0x4320fa:c.instructions+=2;goto B4320fa;
case 0x4320fb:c.instructions+=1;goto B4320fb;
case 0x4320fd:goto L4320fd;
case 0x432101:goto L432101;
case 0x432104:c.instructions+=3;goto B432104;
case 0x432106:c.instructions+=2;goto B432106;
case 0x432108:c.instructions+=1;goto B432108;
case 0x43210b:goto L43210b;
case 0x43210d:c.instructions+=1;goto B43210d;
case 0x43210f:goto L43210f;
case 0x432111:c.instructions+=2;goto B432111;
case 0x432113:c.instructions+=1;goto B432113;
case 0x432115:goto L432115;
case 0x432116:c.instructions+=5;goto B432116;
case 0x432117:c.instructions+=4;goto B432117;
case 0x432118:c.instructions+=3;goto B432118;
case 0x43211a:c.instructions+=2;goto B43211a;
case 0x43211b:c.instructions+=1;goto B43211b;
case 0x43211e:goto L43211e;
case 0x432120:c.instructions+=5;goto B432120;
case 0x432121:c.instructions+=4;goto B432121;
case 0x432122:c.instructions+=3;goto B432122;
case 0x432123:c.instructions+=2;goto B432123;
case 0x432124:c.instructions+=1;goto B432124;
case 0x432130:goto L432130;
case 0x432131:c.instructions+=6;goto B432131;
case 0x432133:c.instructions+=5;goto B432133;
case 0x432136:c.instructions+=4;goto B432136;
case 0x432137:c.instructions+=3;goto B432137;
case 0x43213a:c.instructions+=2;goto B43213a;
case 0x43213c:c.instructions+=1;goto B43213c;
case 0x43213e:goto L43213e;
case 0x432140:goto L432140;
case 0x432143:c.instructions+=2;goto B432143;
case 0x432145:c.instructions+=1;goto B432145;
case 0x432147:goto L432147;
case 0x43214a:c.instructions+=1;goto B43214a;
case 0x43214c:goto L43214c;
case 0x43214e:goto L43214e;
case 0x432150:c.instructions+=5;goto B432150;
case 0x432153:c.instructions+=4;goto B432153;
case 0x432156:c.instructions+=3;goto B432156;
case 0x432158:c.instructions+=2;goto B432158;
case 0x43215b:c.instructions+=1;goto B43215b;
case 0x43215d:goto L43215d;
case 0x43215f:c.instructions+=2;goto B43215f;
case 0x432161:c.instructions+=1;goto B432161;
case 0x432163:goto L432163;
case 0x432165:c.instructions+=1;goto B432165;
case 0x432167:goto L432167;
case 0x432168:c.instructions+=2;goto B432168;
case 0x432169:c.instructions+=1;goto B432169;
case 0x432170:goto L432170;
case 0x432173:c.instructions+=3;goto B432173;
case 0x432175:c.instructions+=2;goto B432175;
case 0x432178:c.instructions+=1;goto B432178;
case 0x43217a:goto L43217a;
case 0x43217d:c.instructions+=1;goto B43217d;
case 0x43217f:goto L43217f;
case 0x432181:goto L432181;
case 0x432182:c.instructions+=1;goto B432182;
case 0x432186:goto L432186;
case 0x432188:c.instructions+=1;goto B432188;
case 0x43218a:goto L43218a;
case 0x43218d:c.instructions+=1;goto B43218d;
case 0x43218f:goto L43218f;
case 0x432191:goto L432191;
case 0x432193:c.instructions+=1;goto B432193;
case 0x432195:goto L432195;
case 0x432198:c.instructions+=2;goto B432198;
case 0x43219a:c.instructions+=1;goto B43219a;
case 0x43219c:goto L43219c;
case 0x43219f:c.instructions+=2;goto B43219f;
case 0x4321a1:c.instructions+=1;goto B4321a1;
case 0x4321a3:goto L4321a3;
case 0x4321a6:c.instructions+=1;goto B4321a6;
case 0x4321a8:goto L4321a8;
case 0x4321aa:c.instructions+=1;goto B4321aa;
case 0x4321ac:goto L4321ac;
case 0x4321ae:goto L4321ae;
case 0x4321af:c.instructions+=1;goto B4321af;
case 0x4321c0:goto L4321c0;
case 0x4321c1:c.instructions+=3;goto B4321c1;
case 0x4321c6:c.instructions+=2;goto B4321c6;
case 0x4321c8:c.instructions+=1;goto B4321c8;
case 0x4321ce:goto L4321ce;
case 0x4321d3:c.instructions+=2;goto B4321d3;
case 0x4321d5:c.instructions+=1;goto B4321d5;
case 0x4321db:goto L4321db;
case 0x4321e1:c.instructions+=4;goto B4321e1;
case 0x4321e7:c.instructions+=3;goto B4321e7;
case 0x4321e9:c.instructions+=2;goto B4321e9;
case 0x4321ec:c.instructions+=1;goto B4321ec;
case 0x4321ee:goto L4321ee;
case 0x4321f4:c.instructions+=6;goto B4321f4;
case 0x4321f8:c.instructions+=5;goto B4321f8;
case 0x4321fe:c.instructions+=4;goto B4321fe;
case 0x432204:c.instructions+=3;goto B432204;
case 0x432206:c.instructions+=2;goto B432206;
case 0x432209:c.instructions+=1;goto B432209;
case 0x43220b:goto L43220b;
case 0x432215:goto L432215;
case 0x432216:c.instructions+=8;goto B432216;
case 0x432219:c.instructions+=7;goto B432219;
case 0x43221c:c.instructions+=6;goto B43221c;
case 0x43221e:c.instructions+=5;goto B43221e;
case 0x43221f:c.instructions+=4;goto B43221f;
case 0x432220:c.instructions+=3;goto B432220;
case 0x432221:c.instructions+=2;goto B432221;
case 0x432225:c.instructions+=1;goto B432225;
case 0x432227:goto L432227;
case 0x43222a:c.instructions+=1;goto B43222a;
case 0x43222c:goto L43222c;
case 0x43222e:goto L43222e;
case 0x432232:goto L432232;
case 0x432234:c.instructions+=1;goto B432234;
case 0x432236:goto L432236;
case 0x432239:c.instructions+=1;goto B432239;
case 0x43223b:goto L43223b;
case 0x43223d:goto L43223d;
case 0x43223f:c.instructions+=1;goto B43223f;
case 0x432241:goto L432241;
case 0x432244:c.instructions+=3;goto B432244;
case 0x432247:c.instructions+=2;goto B432247;
case 0x432249:c.instructions+=1;goto B432249;
case 0x43224b:goto L43224b;
case 0x432250:goto L432250;
case 0x432253:c.instructions+=3;goto B432253;
case 0x432255:c.instructions+=2;goto B432255;
case 0x432256:c.instructions+=1;goto B432256;
case 0x432259:goto L432259;
case 0x43225b:c.instructions+=2;goto B43225b;
case 0x43225d:c.instructions+=1;goto B43225d;
case 0x43225f:goto L43225f;
case 0x432263:goto L432263;
case 0x432266:c.instructions+=2;goto B432266;
case 0x432268:c.instructions+=1;goto B432268;
case 0x43226a:goto L43226a;
case 0x43226d:c.instructions+=1;goto B43226d;
case 0x43226f:goto L43226f;
case 0x432271:c.instructions+=1;goto B432271;
case 0x432273:goto L432273;
case 0x432274:c.instructions+=3;goto B432274;
case 0x432275:c.instructions+=2;goto B432275;
case 0x432276:c.instructions+=1;goto B432276;
case 0x432277:goto L432277;
case 0x432278:c.instructions+=1;goto B432278;
case 0x432280:goto L432280;
case 0x432281:c.instructions+=10;goto B432281;
case 0x432282:c.instructions+=9;goto B432282;
case 0x432283:c.instructions+=8;goto B432283;
case 0x432284:c.instructions+=7;goto B432284;
case 0x432285:c.instructions+=6;goto B432285;
case 0x432289:c.instructions+=5;goto B432289;
case 0x43228e:c.instructions+=4;goto B43228e;
case 0x432290:c.instructions+=3;goto B432290;
case 0x432292:c.instructions+=2;goto B432292;
case 0x432294:c.instructions+=1;goto B432294;
case 0x432299:goto L432299;
case 0x43229c:c.instructions+=2;goto B43229c;
case 0x43229f:c.instructions+=1;goto B43229f;
case 0x4322a3:goto L4322a3;
case 0x4322a5:c.instructions+=1;goto B4322a5;
case 0x4322a7:goto L4322a7;
case 0x4322aa:c.instructions+=2;goto B4322aa;
case 0x4322ae:c.instructions+=1;goto B4322ae;
case 0x4322b0:goto L4322b0;
case 0x4322b8:goto L4322b8;
case 0x4322ba:c.instructions+=1;goto B4322ba;
case 0x4322bc:goto L4322bc;
case 0x4322bf:c.instructions+=1;goto B4322bf;
case 0x4322c1:goto L4322c1;
case 0x4322c3:goto L4322c3;
case 0x4322c7:c.instructions+=2;goto B4322c7;
case 0x4322c9:c.instructions+=1;goto B4322c9;
case 0x4322cb:goto L4322cb;
case 0x4322ce:c.instructions+=3;goto B4322ce;
case 0x4322d1:c.instructions+=2;goto B4322d1;
case 0x4322d3:c.instructions+=1;goto B4322d3;
case 0x4322d5:goto L4322d5;
case 0x4322d8:c.instructions+=3;goto B4322d8;
case 0x4322db:c.instructions+=2;goto B4322db;
case 0x4322dd:c.instructions+=1;goto B4322dd;
case 0x4322df:goto L4322df;
case 0x4322e4:c.instructions+=3;goto B4322e4;
case 0x4322e6:c.instructions+=2;goto B4322e6;
case 0x4322e8:c.instructions+=1;goto B4322e8;
case 0x4322ed:goto L4322ed;
case 0x4322f0:c.instructions+=3;goto B4322f0;
case 0x4322f1:c.instructions+=2;goto B4322f1;
case 0x4322f3:c.instructions+=1;goto B4322f3;
case 0x4322f8:goto L4322f8;
case 0x4322fb:c.instructions+=3;goto B4322fb;
case 0x4322fc:c.instructions+=2;goto B4322fc;
case 0x4322fe:c.instructions+=1;goto B4322fe;
case 0x432303:goto L432303;
case 0x432306:c.instructions+=3;goto B432306;
case 0x432307:c.instructions+=2;goto B432307;
case 0x432309:c.instructions+=1;goto B432309;
case 0x43230e:goto L43230e;
case 0x432311:c.instructions+=3;goto B432311;
case 0x432312:c.instructions+=2;goto B432312;
case 0x432314:c.instructions+=1;goto B432314;
case 0x432319:goto L432319;
case 0x43231c:c.instructions+=3;goto B43231c;
case 0x43231d:c.instructions+=2;goto B43231d;
case 0x43231f:c.instructions+=1;goto B43231f;
case 0x432324:goto L432324;
case 0x432326:c.instructions+=1;goto B432326;
case 0x43232b:goto L43232b;
case 0x43232f:goto L43232f;
case 0x432331:c.instructions+=2;goto B432331;
case 0x432333:c.instructions+=1;goto B432333;
case 0x432335:goto L432335;
case 0x432339:goto L432339;
case 0x43233c:c.instructions+=1;goto B43233c;
case 0x432341:goto L432341;
case 0x432343:c.instructions+=1;goto B432343;
case 0x432348:goto L432348;
case 0x432349:c.instructions+=5;goto B432349;
case 0x43234a:c.instructions+=4;goto B43234a;
case 0x43234b:c.instructions+=3;goto B43234b;
case 0x43234c:c.instructions+=2;goto B43234c;
case 0x43234d:c.instructions+=1;goto B43234d;
case 0x432350:goto L432350;
case 0x432351:c.instructions+=5;goto B432351;
case 0x432352:c.instructions+=4;goto B432352;
case 0x432353:c.instructions+=3;goto B432353;
case 0x432357:c.instructions+=2;goto B432357;
case 0x432358:c.instructions+=1;goto B432358;
case 0x43235d:goto L43235d;
case 0x43235f:c.instructions+=6;goto B43235f;
case 0x432360:c.instructions+=5;goto B432360;
case 0x432362:c.instructions+=4;goto B432362;
case 0x432364:c.instructions+=3;goto B432364;
case 0x432366:c.instructions+=2;goto B432366;
case 0x432367:c.instructions+=1;goto B432367;
case 0x43236c:goto L43236c;
case 0x43236f:c.instructions+=7;goto B43236f;
case 0x432371:c.instructions+=6;goto B432371;
case 0x432376:c.instructions+=5;goto B432376;
case 0x432377:c.instructions+=4;goto B432377;
case 0x432379:c.instructions+=3;goto B432379;
case 0x43237b:c.instructions+=2;goto B43237b;
case 0x432381:c.instructions+=1;goto B432381;
case 0x432386:goto L432386;
case 0x432388:c.instructions+=3;goto B432388;
case 0x43238d:c.instructions+=2;goto B43238d;
case 0x43238f:c.instructions+=1;goto B43238f;
case 0x432394:goto L432394;
case 0x432396:c.instructions+=1;goto B432396;
case 0x43239b:goto L43239b;
case 0x43239e:c.instructions+=2;goto B43239e;
case 0x4323a0:c.instructions+=1;goto B4323a0;
case 0x4323a2:goto L4323a2;
case 0x4323a8:c.instructions+=5;goto B4323a8;
case 0x4323ab:c.instructions+=4;goto B4323ab;
case 0x4323b1:c.instructions+=3;goto B4323b1;
case 0x4323b4:c.instructions+=2;goto B4323b4;
case 0x4323b7:c.instructions+=1;goto B4323b7;
case 0x4323b9:goto L4323b9;
case 0x4323bb:goto L4323bb;
case 0x4323c1:c.instructions+=12;goto B4323c1;
case 0x4323c3:c.instructions+=11;goto B4323c3;
case 0x4323c8:c.instructions+=10;goto B4323c8;
case 0x4323cb:c.instructions+=9;goto B4323cb;
case 0x4323d1:c.instructions+=8;goto B4323d1;
case 0x4323d6:c.instructions+=7;goto B4323d6;
case 0x4323d8:c.instructions+=6;goto B4323d8;
case 0x4323d9:c.instructions+=5;goto B4323d9;
case 0x4323de:c.instructions+=4;goto B4323de;
case 0x4323e1:c.instructions+=3;goto B4323e1;
case 0x4323e2:c.instructions+=2;goto B4323e2;
case 0x4323e3:c.instructions+=1;goto B4323e3;
case 0x4323e5:goto L4323e5;
case 0x4323ea:c.instructions+=2;goto B4323ea;
case 0x4323ec:c.instructions+=1;goto B4323ec;
case 0x4323f2:goto L4323f2;
case 0x432400:goto L432400;
case 0x432405:c.instructions+=2;goto B432405;
case 0x432407:c.instructions+=1;goto B432407;
case 0x43240d:goto L43240d;
case 0x432412:c.instructions+=4;goto B432412;
case 0x432418:c.instructions+=3;goto B432418;
case 0x43241b:c.instructions+=2;goto B43241b;
case 0x43241d:c.instructions+=1;goto B43241d;
case 0x43241f:goto L43241f;
case 0x432422:c.instructions+=6;goto B432422;
case 0x432424:c.instructions+=5;goto B432424;
case 0x43242a:c.instructions+=4;goto B43242a;
case 0x43242d:c.instructions+=3;goto B43242d;
case 0x432434:c.instructions+=2;goto B432434;
case 0x432435:c.instructions+=1;goto B432435;
case 0x43243a:goto L43243a;
case 0x43243f:c.instructions+=4;goto B43243f;
case 0x432442:c.instructions+=3;goto B432442;
case 0x432443:c.instructions+=2;goto B432443;
case 0x432448:c.instructions+=1;goto B432448;
case 0x432449:goto L432449;
case 0x43244f:c.instructions+=4;goto B43244f;
case 0x432455:c.instructions+=3;goto B432455;
case 0x432458:c.instructions+=2;goto B432458;
case 0x43245a:c.instructions+=1;goto B43245a;
case 0x43245c:goto L43245c;
case 0x43245f:c.instructions+=6;goto B43245f;
case 0x432461:c.instructions+=5;goto B432461;
case 0x432467:c.instructions+=4;goto B432467;
case 0x43246a:c.instructions+=3;goto B43246a;
case 0x432471:c.instructions+=2;goto B432471;
case 0x432472:c.instructions+=1;goto B432472;
case 0x432477:goto L432477;
case 0x43247c:c.instructions+=4;goto B43247c;
case 0x43247f:c.instructions+=3;goto B43247f;
case 0x432480:c.instructions+=2;goto B432480;
case 0x432485:c.instructions+=1;goto B432485;
case 0x432486:goto L432486;
case 0x43248d:goto L43248d;
case 0x432490:goto L432490;
case 0x432493:c.instructions+=3;goto B432493;
case 0x432495:c.instructions+=2;goto B432495;
case 0x432498:c.instructions+=1;goto B432498;
case 0x43249a:goto L43249a;
case 0x43249d:c.instructions+=1;goto B43249d;
case 0x43249f:goto L43249f;
case 0x4324a1:goto L4324a1;
case 0x4324a2:c.instructions+=1;goto B4324a2;
case 0x4324a6:goto L4324a6;
case 0x4324a8:c.instructions+=1;goto B4324a8;
case 0x4324aa:goto L4324aa;
case 0x4324ad:c.instructions+=1;goto B4324ad;
case 0x4324af:goto L4324af;
case 0x4324b1:goto L4324b1;
case 0x4324b3:c.instructions+=1;goto B4324b3;
case 0x4324b5:goto L4324b5;
case 0x4324b8:c.instructions+=1;goto B4324b8;
case 0x4324ba:goto L4324ba;
case 0x4324bd:c.instructions+=2;goto B4324bd;
case 0x4324bf:c.instructions+=1;goto B4324bf;
case 0x4324c1:goto L4324c1;
case 0x4324c4:c.instructions+=1;goto B4324c4;
case 0x4324c6:goto L4324c6;
case 0x4324c8:c.instructions+=1;goto B4324c8;
case 0x4324ca:goto L4324ca;
case 0x4324cc:goto L4324cc;
case 0x4324cd:c.instructions+=1;goto B4324cd;
case 0x4324d0:goto L4324d0;
case 0x4324d3:c.instructions+=3;goto B4324d3;
case 0x4324d5:c.instructions+=2;goto B4324d5;
case 0x4324d7:c.instructions+=1;goto B4324d7;
case 0x4324d9:goto L4324d9;
case 0x4324dc:c.instructions+=1;goto B4324dc;
case 0x4324de:goto L4324de;
case 0x4324e0:goto L4324e0;
case 0x4324e2:c.instructions+=1;goto B4324e2;
case 0x4324e4:goto L4324e4;
case 0x4324e7:c.instructions+=1;goto B4324e7;
case 0x4324e9:goto L4324e9;
case 0x4324eb:goto L4324eb;
case 0x4324ed:c.instructions+=1;goto B4324ed;
case 0x4324ef:goto L4324ef;
case 0x4324f2:c.instructions+=1;goto B4324f2;
case 0x4324f5:goto L4324f5;
case 0x4324f7:c.instructions+=1;goto B4324f7;
case 0x432500:goto L432500;
case 0x432503:c.instructions+=1;goto B432503;
case 0x432506:goto L432506;
case 0x432508:c.instructions+=1;goto B432508;
case 0x43250a:goto L43250a;
case 0x43250d:c.instructions+=1;goto B43250d;
case 0x43250f:goto L43250f;
case 0x432511:goto L432511;
case 0x432513:c.instructions+=1;goto B432513;
case 0x432515:goto L432515;
case 0x432518:c.instructions+=1;goto B432518;
case 0x43251a:goto L43251a;
case 0x43251c:goto L43251c;
case 0x43251e:c.instructions+=1;goto B43251e;
case 0x432520:goto L432520;
case 0x432523:c.instructions+=2;goto B432523;
case 0x432525:c.instructions+=1;goto B432525;
case 0x432527:goto L432527;
case 0x43252a:c.instructions+=1;goto B43252a;
case 0x43252c:goto L43252c;
case 0x43252e:c.instructions+=1;goto B43252e;
case 0x43252f:goto L43252f;
case 0x432531:c.instructions+=1;goto B432531;
case 0x432540:goto L432540;
case 0x432544:c.instructions+=2;goto B432544;
case 0x432545:c.instructions+=1;goto B432545;
case 0x43254a:goto L43254a;
case 0x43254c:c.instructions+=1;goto B43254c;
case 0x43254e:goto L43254e;
case 0x432551:c.instructions+=5;goto B432551;
case 0x432554:c.instructions+=4;goto B432554;
case 0x432556:c.instructions+=3;goto B432556;
case 0x432558:c.instructions+=2;goto B432558;
case 0x43255b:c.instructions+=1;goto B43255b;
case 0x43255d:goto L43255d;
case 0x432562:c.instructions+=1;goto B432562;
case 0x432565:goto L432565;
case 0x432567:c.instructions+=1;goto B432567;
case 0x43256a:goto L43256a;
case 0x43256c:c.instructions+=1;goto B43256c;
case 0x432570:goto L432570;
case 0x432575:c.instructions+=3;goto B432575;
case 0x432577:c.instructions+=2;goto B432577;
case 0x432578:c.instructions+=1;goto B432578;
case 0x43257a:goto L43257a;
case 0x43257d:c.instructions+=1;goto B43257d;
case 0x43257f:goto L43257f;
case 0x432581:goto L432581;
case 0x432586:c.instructions+=1;goto B432586;
case 0x43258b:goto L43258b;
case 0x43258d:c.instructions+=1;goto B43258d;
case 0x43258f:goto L43258f;
case 0x432593:goto L432593;
case 0x432596:c.instructions+=2;goto B432596;
case 0x432598:c.instructions+=1;goto B432598;
case 0x43259a:goto L43259a;
case 0x43259d:c.instructions+=2;goto B43259d;
case 0x43259f:c.instructions+=1;goto B43259f;
case 0x4325a1:goto L4325a1;
case 0x4325a4:c.instructions+=1;goto B4325a4;
case 0x4325a6:goto L4325a6;
case 0x4325a8:goto L4325a8;
case 0x4325aa:c.instructions+=1;goto B4325aa;
case 0x4325ac:goto L4325ac;
case 0x4325ae:c.instructions+=2;goto B4325ae;
case 0x4325af:c.instructions+=1;goto B4325af;
case 0x4325b0:goto L4325b0;
case 0x4325b2:c.instructions+=2;goto B4325b2;
case 0x4325b3:c.instructions+=1;goto B4325b3;
case 0x4325c0:goto L4325c0;
case 0x4325c1:c.instructions+=3;goto B4325c1;
case 0x4325c5:c.instructions+=2;goto B4325c5;
case 0x4325cb:c.instructions+=1;goto B4325cb;
case 0x4325cd:goto L4325cd;
case 0x4325d2:c.instructions+=3;goto B4325d2;
case 0x4325d4:c.instructions+=2;goto B4325d4;
case 0x4325d5:c.instructions+=1;goto B4325d5;
case 0x4325d7:goto L4325d7;
case 0x4325da:c.instructions+=1;goto B4325da;
case 0x4325dc:goto L4325dc;
case 0x4325de:goto L4325de;
case 0x4325e3:c.instructions+=1;goto B4325e3;
case 0x4325e8:goto L4325e8;
case 0x4325ea:c.instructions+=1;goto B4325ea;
case 0x4325ec:goto L4325ec;
case 0x4325ef:c.instructions+=1;goto B4325ef;
case 0x4325f0:goto L4325f0;
case 0x4325f2:c.instructions+=1;goto B4325f2;
case 0x4325f4:goto L4325f4;
case 0x4325f7:c.instructions+=7;goto B4325f7;
case 0x4325fa:c.instructions+=6;goto B4325fa;
case 0x4325fc:c.instructions+=5;goto B4325fc;
case 0x4325ff:c.instructions+=4;goto B4325ff;
case 0x432601:c.instructions+=3;goto B432601;
case 0x432603:c.instructions+=2;goto B432603;
case 0x432605:c.instructions+=1;goto B432605;
case 0x432607:goto L432607;
case 0x432608:c.instructions+=3;goto B432608;
case 0x43260d:c.instructions+=2;goto B43260d;
case 0x43260e:c.instructions+=1;goto B43260e;
case 0x43260f:goto L43260f;
case 0x432611:c.instructions+=2;goto B432611;
case 0x432612:c.instructions+=1;goto B432612;
case 0x432620:goto L432620;
case 0x432626:c.instructions+=1;goto B432626;
case 0x432630:goto L432630;
case 0x432636:c.instructions+=1;goto B432636;
case 0x432640:goto L432640;
case 0x432641:c.instructions+=5;goto B432641;
case 0x432644:c.instructions+=4;goto B432644;
case 0x432645:c.instructions+=3;goto B432645;
case 0x432648:c.instructions+=2;goto B432648;
case 0x43264a:c.instructions+=1;goto B43264a;
case 0x43264c:goto L43264c;
case 0x43264d:c.instructions+=3;goto B43264d;
case 0x432651:c.instructions+=2;goto B432651;
case 0x432652:c.instructions+=1;goto B432652;
case 0x432656:goto L432656;
case 0x432659:c.instructions+=4;goto B432659;
case 0x43265b:c.instructions+=3;goto B43265b;
case 0x43265c:c.instructions+=2;goto B43265c;
case 0x43265d:c.instructions+=1;goto B43265d;
case 0x432660:goto L432660;
case 0x432663:c.instructions+=2;goto B432663;
case 0x432665:c.instructions+=1;goto B432665;
case 0x432667:goto L432667;
case 0x432668:c.instructions+=1;goto B432668;
case 0x432669:goto L432669;
case 0x43266a:c.instructions+=2;goto B43266a;
case 0x43266b:c.instructions+=1;goto B43266b;
case 0x432670:goto L432670;
case 0x432673:c.instructions+=3;goto B432673;
case 0x432675:c.instructions+=2;goto B432675;
case 0x432678:c.instructions+=1;goto B432678;
case 0x43267a:goto L43267a;
case 0x43267d:c.instructions+=1;goto B43267d;
case 0x43267f:goto L43267f;
case 0x432681:goto L432681;
case 0x432682:c.instructions+=1;goto B432682;
case 0x432686:goto L432686;
case 0x432688:c.instructions+=1;goto B432688;
case 0x43268a:goto L43268a;
case 0x43268d:c.instructions+=1;goto B43268d;
case 0x43268f:goto L43268f;
case 0x432691:goto L432691;
case 0x432693:c.instructions+=1;goto B432693;
case 0x432695:goto L432695;
case 0x432698:c.instructions+=1;goto B432698;
case 0x43269a:goto L43269a;
case 0x43269d:c.instructions+=2;goto B43269d;
case 0x43269f:c.instructions+=1;goto B43269f;
case 0x4326a1:goto L4326a1;
case 0x4326a4:c.instructions+=1;goto B4326a4;
case 0x4326a6:goto L4326a6;
case 0x4326a8:c.instructions+=1;goto B4326a8;
case 0x4326aa:goto L4326aa;
case 0x4326ac:goto L4326ac;
case 0x4326ad:c.instructions+=1;goto B4326ad;
case 0x4326b0:goto L4326b0;
case 0x4326b3:c.instructions+=3;goto B4326b3;
case 0x4326b5:c.instructions+=2;goto B4326b5;
case 0x4326b8:c.instructions+=1;goto B4326b8;
case 0x4326ba:goto L4326ba;
case 0x4326bd:c.instructions+=1;goto B4326bd;
case 0x4326bf:goto L4326bf;
case 0x4326c1:goto L4326c1;
case 0x4326c2:c.instructions+=1;goto B4326c2;
case 0x4326c6:goto L4326c6;
case 0x4326c8:c.instructions+=1;goto B4326c8;
case 0x4326ca:goto L4326ca;
case 0x4326cd:c.instructions+=1;goto B4326cd;
case 0x4326cf:goto L4326cf;
case 0x4326d1:goto L4326d1;
case 0x4326d3:c.instructions+=1;goto B4326d3;
case 0x4326d5:goto L4326d5;
case 0x4326d8:c.instructions+=1;goto B4326d8;
case 0x4326da:goto L4326da;
case 0x4326dd:c.instructions+=2;goto B4326dd;
case 0x4326df:c.instructions+=1;goto B4326df;
case 0x4326e1:goto L4326e1;
case 0x4326e4:c.instructions+=1;goto B4326e4;
case 0x4326e6:goto L4326e6;
case 0x4326e8:c.instructions+=1;goto B4326e8;
case 0x4326ea:goto L4326ea;
case 0x4326ec:goto L4326ec;
case 0x4326ed:c.instructions+=1;goto B4326ed;
case 0x4326f0:goto L4326f0;
case 0x4326f6:c.instructions+=10;goto B4326f6;
case 0x4326fa:c.instructions+=9;goto B4326fa;
case 0x432700:c.instructions+=8;goto B432700;
case 0x432701:c.instructions+=7;goto B432701;
case 0x432702:c.instructions+=6;goto B432702;
case 0x432706:c.instructions+=5;goto B432706;
case 0x432707:c.instructions+=4;goto B432707;
case 0x43270a:c.instructions+=3;goto B43270a;
case 0x43270d:c.instructions+=2;goto B43270d;
case 0x43270e:c.instructions+=1;goto B43270e;
case 0x432710:goto L432710;
case 0x432714:c.instructions+=1;goto B432714;
case 0x432716:goto L432716;
case 0x432718:goto L432718;
case 0x43271e:c.instructions+=2;goto B43271e;
case 0x432721:c.instructions+=1;goto B432721;
case 0x432723:goto L432723;
case 0x432727:c.instructions+=1;goto B432727;
case 0x432729:goto L432729;
case 0x43272e:goto L43272e;
case 0x432734:c.instructions+=2;goto B432734;
case 0x432737:c.instructions+=1;goto B432737;
case 0x432739:goto L432739;
case 0x43273d:c.instructions+=1;goto B43273d;
case 0x43273f:goto L43273f;
case 0x432744:goto L432744;
case 0x43274a:c.instructions+=2;goto B43274a;
case 0x43274d:c.instructions+=1;goto B43274d;
case 0x43274f:goto L43274f;
case 0x432753:c.instructions+=1;goto B432753;
case 0x432755:goto L432755;
case 0x43275a:goto L43275a;
case 0x432760:c.instructions+=2;goto B432760;
case 0x432763:c.instructions+=1;goto B432763;
case 0x432765:goto L432765;
case 0x432769:c.instructions+=1;goto B432769;
case 0x43276b:goto L43276b;
case 0x432770:goto L432770;
case 0x432776:c.instructions+=2;goto B432776;
case 0x432779:c.instructions+=1;goto B432779;
case 0x43277b:goto L43277b;
case 0x43277f:c.instructions+=1;goto B43277f;
case 0x432781:goto L432781;
case 0x432786:goto L432786;
case 0x43278c:c.instructions+=2;goto B43278c;
case 0x43278f:c.instructions+=1;goto B43278f;
case 0x432791:goto L432791;
case 0x432795:c.instructions+=1;goto B432795;
case 0x432797:goto L432797;
case 0x43279c:goto L43279c;
case 0x4327a2:c.instructions+=2;goto B4327a2;
case 0x4327a5:c.instructions+=1;goto B4327a5;
case 0x4327a7:goto L4327a7;
case 0x4327ab:c.instructions+=1;goto B4327ab;
case 0x4327ad:goto L4327ad;
case 0x4327b2:goto L4327b2;
case 0x4327b4:c.instructions+=1;goto B4327b4;
case 0x4327ba:goto L4327ba;
case 0x4327bd:c.instructions+=22;goto B4327bd;
case 0x4327c4:c.instructions+=21;goto B4327c4;
case 0x4327cb:c.instructions+=20;goto B4327cb;
case 0x4327d2:c.instructions+=19;goto B4327d2;
case 0x4327d9:c.instructions+=18;goto B4327d9;
case 0x4327e0:c.instructions+=17;goto B4327e0;
case 0x4327e3:c.instructions+=16;goto B4327e3;
case 0x4327ea:c.instructions+=15;goto B4327ea;
case 0x4327f1:c.instructions+=14;goto B4327f1;
case 0x4327f8:c.instructions+=13;goto B4327f8;
case 0x4327ff:c.instructions+=12;goto B4327ff;
case 0x432806:c.instructions+=11;goto B432806;
case 0x43280d:c.instructions+=10;goto B43280d;
case 0x43280f:c.instructions+=9;goto B43280f;
case 0x432816:c.instructions+=8;goto B432816;
case 0x43281d:c.instructions+=7;goto B43281d;
case 0x432824:c.instructions+=6;goto B432824;
case 0x43282b:c.instructions+=5;goto B43282b;
case 0x432832:c.instructions+=4;goto B432832;
case 0x432839:c.instructions+=3;goto B432839;
case 0x432840:c.instructions+=2;goto B432840;
case 0x432847:c.instructions+=1;goto B432847;
case 0x43284e:goto L43284e;
case 0x43284f:c.instructions+=3;goto B43284f;
case 0x432850:c.instructions+=2;goto B432850;
case 0x432851:c.instructions+=1;goto B432851;
case 0x432860:goto L432860;
case 0x432861:c.instructions+=5;goto B432861;
case 0x432867:c.instructions+=4;goto B432867;
case 0x43286a:c.instructions+=3;goto B43286a;
case 0x43286c:c.instructions+=2;goto B43286c;
case 0x43286e:c.instructions+=1;goto B43286e;
case 0x432870:goto L432870;
case 0x432876:c.instructions+=2;goto B432876;
case 0x432879:c.instructions+=1;goto B432879;
case 0x432880:goto L432880;
case 0x432882:c.instructions+=4;goto B432882;
case 0x432885:c.instructions+=3;goto B432885;
case 0x432888:c.instructions+=2;goto B432888;
case 0x43288a:c.instructions+=1;goto B43288a;
case 0x43288c:goto L43288c;
case 0x43288e:c.instructions+=1;goto B43288e;
case 0x432890:goto L432890;
case 0x432893:c.instructions+=2;goto B432893;
case 0x432896:c.instructions+=1;goto B432896;
case 0x43289d:goto L43289d;
case 0x4328a0:c.instructions+=4;goto B4328a0;
case 0x4328a1:c.instructions+=3;goto B4328a1;
case 0x4328a4:c.instructions+=2;goto B4328a4;
case 0x4328a6:c.instructions+=1;goto B4328a6;
case 0x4328a8:goto L4328a8;
case 0x4328a9:c.instructions+=1;goto B4328a9;
case 0x4328b0:goto L4328b0;
case 0x4328b1:c.instructions+=4;goto B4328b1;
case 0x4328b2:c.instructions+=3;goto B4328b2;
case 0x4328b4:c.instructions+=2;goto B4328b4;
case 0x4328b9:c.instructions+=1;goto B4328b9;
case 0x4328c0:goto L4328c0;
case 0x4328c6:c.instructions+=3;goto B4328c6;
case 0x4328c9:c.instructions+=2;goto B4328c9;
case 0x4328ce:c.instructions+=1;goto B4328ce;
case 0x4328d0:goto L4328d0;
case 0x4328d3:c.instructions+=5;goto B4328d3;
case 0x4328d6:c.instructions+=4;goto B4328d6;
case 0x4328d9:c.instructions+=3;goto B4328d9;
case 0x4328de:c.instructions+=2;goto B4328de;
case 0x4328e0:c.instructions+=1;goto B4328e0;
case 0x4328e2:goto L4328e2;
case 0x4328e5:c.instructions+=1;goto B4328e5;
case 0x4328e7:goto L4328e7;
case 0x4328ea:c.instructions+=1;goto B4328ea;
case 0x4328ec:goto L4328ec;
case 0x4328ee:c.instructions+=1;goto B4328ee;
case 0x4328f3:goto L4328f3;
case 0x4328f5:c.instructions+=3;goto B4328f5;
case 0x4328f7:c.instructions+=2;goto B4328f7;
case 0x4328f9:c.instructions+=1;goto B4328f9;
case 0x4328fe:goto L4328fe;
case 0x4328ff:c.instructions+=2;goto B4328ff;
case 0x432900:c.instructions+=1;goto B432900;
case 0x432901:goto L432901;
case 0x432903:c.instructions+=1;goto B432903;
case 0x432905:goto L432905;
case 0x432907:c.instructions+=1;goto B432907;
case 0x43290c:goto L43290c;
case 0x432911:c.instructions+=2;goto B432911;
case 0x432913:c.instructions+=1;goto B432913;
case 0x432915:goto L432915;
case 0x432916:c.instructions+=3;goto B432916;
case 0x432918:c.instructions+=2;goto B432918;
case 0x43291a:c.instructions+=1;goto B43291a;
case 0x43291f:goto L43291f;
case 0x432924:c.instructions+=2;goto B432924;
case 0x432926:c.instructions+=1;goto B432926;
case 0x43292c:goto L43292c;
case 0x43292d:c.instructions+=3;goto B43292d;
case 0x43292f:c.instructions+=2;goto B43292f;
case 0x432931:c.instructions+=1;goto B432931;
case 0x432936:goto L432936;
case 0x432937:c.instructions+=2;goto B432937;
case 0x432938:c.instructions+=1;goto B432938;
case 0x432939:goto L432939;
case 0x43293c:c.instructions+=1;goto B43293c;
case 0x432942:goto L432942;
case 0x432947:c.instructions+=3;goto B432947;
case 0x432949:c.instructions+=2;goto B432949;
case 0x43294b:c.instructions+=1;goto B43294b;
case 0x43294d:goto L43294d;
case 0x43294e:c.instructions+=2;goto B43294e;
case 0x43294f:c.instructions+=1;goto B43294f;
case 0x432954:goto L432954;
case 0x432959:goto L432959;
case 0x432960:c.instructions+=1;goto B432960;
case 0x432962:goto L432962;
case 0x43296c:c.instructions+=1;goto B43296c;
case 0x43296e:goto L43296e;
case 0x432974:c.instructions+=1;goto B432974;
case 0x43297a:goto L43297a;
case 0x432980:c.instructions+=5;goto B432980;
case 0x432985:c.instructions+=4;goto B432985;
case 0x43298c:c.instructions+=3;goto B43298c;
case 0x43298e:c.instructions+=2;goto B43298e;
case 0x432995:c.instructions+=1;goto B432995;
case 0x432997:goto L432997;
case 0x43299b:c.instructions+=4;goto B43299b;
case 0x43299c:c.instructions+=3;goto B43299c;
case 0x43299e:c.instructions+=2;goto B43299e;
case 0x4329a0:c.instructions+=1;goto B4329a0;
case 0x4329a5:goto L4329a5;
case 0x4329a6:c.instructions+=2;goto B4329a6;
case 0x4329a7:c.instructions+=1;goto B4329a7;
case 0x4329a8:goto L4329a8;
case 0x4329ac:c.instructions+=4;goto B4329ac;
case 0x4329ad:c.instructions+=3;goto B4329ad;
case 0x4329af:c.instructions+=2;goto B4329af;
case 0x4329b1:c.instructions+=1;goto B4329b1;
case 0x4329b6:goto L4329b6;
case 0x4329b7:c.instructions+=2;goto B4329b7;
case 0x4329b8:c.instructions+=1;goto B4329b8;
case 0x4329b9:goto L4329b9;
case 0x4329bf:c.instructions+=1;goto B4329bf;
case 0x4329c5:goto L4329c5;
case 0x4329cb:c.instructions+=7;goto B4329cb;
case 0x4329d1:c.instructions+=6;goto B4329d1;
case 0x4329d8:c.instructions+=5;goto B4329d8;
case 0x4329dd:c.instructions+=4;goto B4329dd;
case 0x4329e0:c.instructions+=3;goto B4329e0;
case 0x4329e6:c.instructions+=2;goto B4329e6;
case 0x4329e7:c.instructions+=1;goto B4329e7;
case 0x4329ec:goto L4329ec;
case 0x4329ef:c.instructions+=3;goto B4329ef;
case 0x4329f3:c.instructions+=2;goto B4329f3;
case 0x4329f6:c.instructions+=1;goto B4329f6;
case 0x4329f8:goto L4329f8;
case 0x4329fa:c.instructions+=3;goto B4329fa;
case 0x4329fd:c.instructions+=2;goto B4329fd;
case 0x432a00:c.instructions+=1;goto B432a00;
case 0x432a02:goto L432a02;
case 0x432a04:c.instructions+=1;goto B432a04;
case 0x432a06:goto L432a06;
case 0x432a0a:c.instructions+=4;goto B432a0a;
case 0x432a0b:c.instructions+=3;goto B432a0b;
case 0x432a0d:c.instructions+=2;goto B432a0d;
case 0x432a0f:c.instructions+=1;goto B432a0f;
case 0x432a14:goto L432a14;
case 0x432a18:c.instructions+=4;goto B432a18;
case 0x432a19:c.instructions+=3;goto B432a19;
case 0x432a1b:c.instructions+=2;goto B432a1b;
case 0x432a1d:c.instructions+=1;goto B432a1d;
case 0x432a22:goto L432a22;
case 0x432a23:c.instructions+=2;goto B432a23;
case 0x432a24:c.instructions+=1;goto B432a24;
case 0x432a25:goto L432a25;
case 0x432a28:c.instructions+=1;goto B432a28;
case 0x432a2a:goto L432a2a;
case 0x432a2e:c.instructions+=4;goto B432a2e;
case 0x432a2f:c.instructions+=3;goto B432a2f;
case 0x432a30:c.instructions+=2;goto B432a30;
case 0x432a32:c.instructions+=1;goto B432a32;
case 0x432a37:goto L432a37;
case 0x432a3b:c.instructions+=4;goto B432a3b;
case 0x432a3c:c.instructions+=3;goto B432a3c;
case 0x432a3e:c.instructions+=2;goto B432a3e;
case 0x432a40:c.instructions+=1;goto B432a40;
case 0x432a45:goto L432a45;
case 0x432a46:c.instructions+=2;goto B432a46;
case 0x432a47:c.instructions+=1;goto B432a47;
case 0x432a48:goto L432a48;
case 0x432a4a:c.instructions+=1;goto B432a4a;
case 0x432a4c:goto L432a4c;
case 0x432a50:c.instructions+=4;goto B432a50;
case 0x432a51:c.instructions+=3;goto B432a51;
case 0x432a52:c.instructions+=2;goto B432a52;
case 0x432a54:c.instructions+=1;goto B432a54;
case 0x432a59:goto L432a59;
case 0x432a5d:c.instructions+=4;goto B432a5d;
case 0x432a5e:c.instructions+=3;goto B432a5e;
case 0x432a60:c.instructions+=2;goto B432a60;
case 0x432a62:c.instructions+=1;goto B432a62;
case 0x432a67:goto L432a67;
case 0x432a68:c.instructions+=2;goto B432a68;
case 0x432a69:c.instructions+=1;goto B432a69;
case 0x432a70:goto L432a70;
case 0x432a71:c.instructions+=13;goto B432a71;
case 0x432a76:c.instructions+=12;goto B432a76;
case 0x432a78:c.instructions+=11;goto B432a78;
case 0x432a7a:c.instructions+=10;goto B432a7a;
case 0x432a7f:c.instructions+=9;goto B432a7f;
case 0x432a81:c.instructions+=8;goto B432a81;
case 0x432a84:c.instructions+=7;goto B432a84;
case 0x432a87:c.instructions+=6;goto B432a87;
case 0x432a8a:c.instructions+=5;goto B432a8a;
case 0x432a8c:c.instructions+=4;goto B432a8c;
case 0x432a8f:c.instructions+=3;goto B432a8f;
case 0x432a90:c.instructions+=2;goto B432a90;
case 0x432a96:c.instructions+=1;goto B432a96;
case 0x432a9b:goto L432a9b;
case 0x432a9d:c.instructions+=2;goto B432a9d;
case 0x432a9e:c.instructions+=1;goto B432a9e;
case 0x432aa0:goto L432aa0;
case 0x432aa5:c.instructions+=6;goto B432aa5;
case 0x432aa7:c.instructions+=5;goto B432aa7;
case 0x432aad:c.instructions+=4;goto B432aad;
case 0x432aaf:c.instructions+=3;goto B432aaf;
case 0x432ab2:c.instructions+=2;goto B432ab2;
case 0x432ab3:c.instructions+=1;goto B432ab3;
case 0x432ab8:goto L432ab8;
case 0x432ac0:goto L432ac0;
case 0x432ac6:c.instructions+=14;goto B432ac6;
case 0x432ac8:c.instructions+=13;goto B432ac8;
case 0x432acd:c.instructions+=12;goto B432acd;
case 0x432ace:c.instructions+=11;goto B432ace;
case 0x432ad2:c.instructions+=10;goto B432ad2;
case 0x432ad9:c.instructions+=9;goto B432ad9;
case 0x432adf:c.instructions+=8;goto B432adf;
case 0x432ae0:c.instructions+=7;goto B432ae0;
case 0x432ae1:c.instructions+=6;goto B432ae1;
case 0x432ae2:c.instructions+=5;goto B432ae2;
case 0x432ae4:c.instructions+=4;goto B432ae4;
case 0x432aea:c.instructions+=3;goto B432aea;
case 0x432af0:c.instructions+=2;goto B432af0;
case 0x432af5:c.instructions+=1;goto B432af5;
case 0x432afa:goto L432afa;
case 0x432afc:c.instructions+=1;goto B432afc;
case 0x432afe:goto L432afe;
case 0x432b05:goto L432b05;
case 0x432b08:c.instructions+=1;goto B432b08;
case 0x432b0a:goto L432b0a;
case 0x432b0c:c.instructions+=2;goto B432b0c;
case 0x432b0e:c.instructions+=1;goto B432b0e;
case 0x432b10:goto L432b10;
case 0x432b12:c.instructions+=1;goto B432b12;
case 0x432b17:goto L432b17;
case 0x432b1a:c.instructions+=3;goto B432b1a;
case 0x432b1c:c.instructions+=2;goto B432b1c;
case 0x432b1e:c.instructions+=1;goto B432b1e;
case 0x432b20:goto L432b20;
case 0x432b22:c.instructions+=1;goto B432b22;
case 0x432b27:goto L432b27;
case 0x432b28:c.instructions+=5;goto B432b28;
case 0x432b2c:c.instructions+=4;goto B432b2c;
case 0x432b31:c.instructions+=3;goto B432b31;
case 0x432b32:c.instructions+=2;goto B432b32;
case 0x432b35:c.instructions+=1;goto B432b35;
case 0x432b3a:goto L432b3a;
case 0x432b3e:c.instructions+=2;goto B432b3e;
case 0x432b3f:c.instructions+=1;goto B432b3f;
case 0x432b44:goto L432b44;
case 0x432b47:c.instructions+=2;goto B432b47;
case 0x432b49:c.instructions+=1;goto B432b49;
case 0x432b4f:goto L432b4f;
case 0x432b51:c.instructions+=4;goto B432b51;
case 0x432b55:c.instructions+=3;goto B432b55;
case 0x432b56:c.instructions+=2;goto B432b56;
case 0x432b5d:c.instructions+=1;goto B432b5d;
case 0x432b62:goto L432b62;
case 0x432b67:c.instructions+=3;goto B432b67;
case 0x432b6e:c.instructions+=2;goto B432b6e;
case 0x432b75:c.instructions+=1;goto B432b75;
case 0x432b7a:goto L432b7a;
case 0x432b7c:c.instructions+=1;goto B432b7c;
case 0x432b7e:goto L432b7e;
case 0x432b80:goto L432b80;
case 0x432b82:c.instructions+=4;goto B432b82;
case 0x432b89:c.instructions+=3;goto B432b89;
case 0x432b8a:c.instructions+=2;goto B432b8a;
case 0x432b8c:c.instructions+=1;goto B432b8c;
case 0x432b8f:goto L432b8f;
case 0x432b94:c.instructions+=2;goto B432b94;
case 0x432b9b:c.instructions+=1;goto B432b9b;
case 0x432ba0:goto L432ba0;
case 0x432ba2:c.instructions+=1;goto B432ba2;
case 0x432ba4:goto L432ba4;
case 0x432ba7:c.instructions+=6;goto B432ba7;
case 0x432bac:c.instructions+=5;goto B432bac;
case 0x432bae:c.instructions+=4;goto B432bae;
case 0x432baf:c.instructions+=3;goto B432baf;
case 0x432bb2:c.instructions+=2;goto B432bb2;
case 0x432bb3:c.instructions+=1;goto B432bb3;
case 0x432bb8:goto L432bb8;
case 0x432bbb:c.instructions+=3;goto B432bbb;
case 0x432bc2:c.instructions+=2;goto B432bc2;
case 0x432bcd:c.instructions+=1;goto B432bcd;
case 0x432bd2:goto L432bd2;
case 0x432bd7:goto L432bd7;
case 0x432bd9:goto L432bd9;
case 0x432bdb:goto L432bdb;
case 0x432be2:c.instructions+=6;goto B432be2;
case 0x432be3:c.instructions+=5;goto B432be3;
case 0x432be4:c.instructions+=4;goto B432be4;
case 0x432be5:c.instructions+=3;goto B432be5;
case 0x432bec:c.instructions+=2;goto B432bec;
case 0x432bf2:c.instructions+=1;goto B432bf2;
case 0x432c00:goto L432c00;
case 0x432c06:c.instructions+=16;goto B432c06;
case 0x432c08:c.instructions+=15;goto B432c08;
case 0x432c0d:c.instructions+=14;goto B432c0d;
case 0x432c0e:c.instructions+=13;goto B432c0e;
case 0x432c12:c.instructions+=12;goto B432c12;
case 0x432c19:c.instructions+=11;goto B432c19;
case 0x432c1f:c.instructions+=10;goto B432c1f;
case 0x432c20:c.instructions+=9;goto B432c20;
case 0x432c21:c.instructions+=8;goto B432c21;
case 0x432c22:c.instructions+=7;goto B432c22;
case 0x432c24:c.instructions+=6;goto B432c24;
case 0x432c28:c.instructions+=5;goto B432c28;
case 0x432c2d:c.instructions+=4;goto B432c2d;
case 0x432c2f:c.instructions+=3;goto B432c2f;
case 0x432c30:c.instructions+=2;goto B432c30;
case 0x432c33:c.instructions+=1;goto B432c33;
case 0x432c38:goto L432c38;
case 0x432c3c:c.instructions+=2;goto B432c3c;
case 0x432c3d:c.instructions+=1;goto B432c3d;
case 0x432c42:goto L432c42;
case 0x432c45:c.instructions+=2;goto B432c45;
case 0x432c47:c.instructions+=1;goto B432c47;
case 0x432c4d:goto L432c4d;
case 0x432c4f:c.instructions+=4;goto B432c4f;
case 0x432c53:c.instructions+=3;goto B432c53;
case 0x432c54:c.instructions+=2;goto B432c54;
case 0x432c5b:c.instructions+=1;goto B432c5b;
case 0x432c60:goto L432c60;
case 0x432c65:c.instructions+=3;goto B432c65;
case 0x432c6c:c.instructions+=2;goto B432c6c;
case 0x432c73:c.instructions+=1;goto B432c73;
case 0x432c78:goto L432c78;
case 0x432c7a:c.instructions+=1;goto B432c7a;
case 0x432c7c:goto L432c7c;
case 0x432c80:goto L432c80;
case 0x432c82:c.instructions+=4;goto B432c82;
case 0x432c89:c.instructions+=3;goto B432c89;
case 0x432c8a:c.instructions+=2;goto B432c8a;
case 0x432c8c:c.instructions+=1;goto B432c8c;
case 0x432c8f:goto L432c8f;
case 0x432c94:c.instructions+=2;goto B432c94;
case 0x432c9b:c.instructions+=1;goto B432c9b;
case 0x432ca0:goto L432ca0;
case 0x432ca2:c.instructions+=1;goto B432ca2;
case 0x432ca4:goto L432ca4;
case 0x432ca7:c.instructions+=6;goto B432ca7;
case 0x432cac:c.instructions+=5;goto B432cac;
case 0x432cae:c.instructions+=4;goto B432cae;
case 0x432caf:c.instructions+=3;goto B432caf;
case 0x432cb2:c.instructions+=2;goto B432cb2;
case 0x432cb3:c.instructions+=1;goto B432cb3;
case 0x432cb8:goto L432cb8;
case 0x432cbb:c.instructions+=3;goto B432cbb;
case 0x432cc2:c.instructions+=2;goto B432cc2;
case 0x432ccd:c.instructions+=1;goto B432ccd;
case 0x432cd2:goto L432cd2;
case 0x432cd7:goto L432cd7;
case 0x432cd9:c.instructions+=1;goto B432cd9;
case 0x432cdb:goto L432cdb;
case 0x432cdd:goto L432cdd;
case 0x432ce4:c.instructions+=6;goto B432ce4;
case 0x432cea:c.instructions+=5;goto B432cea;
case 0x432ceb:c.instructions+=4;goto B432ceb;
case 0x432cec:c.instructions+=3;goto B432cec;
case 0x432cf3:c.instructions+=2;goto B432cf3;
case 0x432cf9:c.instructions+=1;goto B432cf9;
case 0x432d00:goto L432d00;
case 0x432d03:c.instructions+=11;goto B432d03;
case 0x432d04:c.instructions+=10;goto B432d04;
case 0x432d06:c.instructions+=9;goto B432d06;
case 0x432d09:c.instructions+=8;goto B432d09;
case 0x432d0c:c.instructions+=7;goto B432d0c;
case 0x432d0d:c.instructions+=6;goto B432d0d;
case 0x432d0e:c.instructions+=5;goto B432d0e;
case 0x432d12:c.instructions+=4;goto B432d12;
case 0x432d13:c.instructions+=3;goto B432d13;
case 0x432d15:c.instructions+=2;goto B432d15;
case 0x432d19:c.instructions+=1;goto B432d19;
case 0x432d1e:goto L432d1e;
case 0x432d20:c.instructions+=2;goto B432d20;
case 0x432d23:c.instructions+=1;goto B432d23;
case 0x432d28:goto L432d28;
case 0x432d29:c.instructions+=1;goto B432d29;
case 0x432d2e:goto L432d2e;
case 0x432d31:c.instructions+=3;goto B432d31;
case 0x432d34:c.instructions+=2;goto B432d34;
case 0x432d36:c.instructions+=1;goto B432d36;
case 0x432d38:goto L432d38;
case 0x432d3a:c.instructions+=1;goto B432d3a;
case 0x432d3f:goto L432d3f;
case 0x432d42:c.instructions+=1;goto B432d42;
case 0x432d44:goto L432d44;
case 0x432d47:goto L432d47;
case 0x432d49:c.instructions+=2;goto B432d49;
case 0x432d4c:c.instructions+=1;goto B432d4c;
case 0x432d51:goto L432d51;
case 0x432d52:c.instructions+=1;goto B432d52;
case 0x432d57:goto L432d57;
case 0x432d5a:c.instructions+=3;goto B432d5a;
case 0x432d5c:c.instructions+=2;goto B432d5c;
case 0x432d5f:c.instructions+=1;goto B432d5f;
case 0x432d64:goto L432d64;
case 0x432d67:c.instructions+=2;goto B432d67;
case 0x432d69:c.instructions+=1;goto B432d69;
case 0x432d6e:goto L432d6e;
case 0x432d71:c.instructions+=9;goto B432d71;
case 0x432d74:c.instructions+=8;goto B432d74;
case 0x432d75:c.instructions+=7;goto B432d75;
case 0x432d76:c.instructions+=6;goto B432d76;
case 0x432d77:c.instructions+=5;goto B432d77;
case 0x432d78:c.instructions+=4;goto B432d78;
case 0x432d7b:c.instructions+=3;goto B432d7b;
case 0x432d7c:c.instructions+=2;goto B432d7c;
case 0x432d7f:c.instructions+=1;goto B432d7f;
case 0x432d82:goto L432d82;
case 0x432d85:c.instructions+=1;goto B432d85;
case 0x432d87:goto L432d87;
case 0x432d89:c.instructions+=1;goto B432d89;
case 0x432d8e:goto L432d8e;
case 0x432d91:c.instructions+=1;goto B432d91;
case 0x432d93:goto L432d93;
case 0x432d96:goto L432d96;
case 0x432d98:c.instructions+=2;goto B432d98;
case 0x432d9b:c.instructions+=1;goto B432d9b;
case 0x432da0:goto L432da0;
case 0x432da1:c.instructions+=1;goto B432da1;
case 0x432da6:goto L432da6;
case 0x432da9:c.instructions+=3;goto B432da9;
case 0x432dab:c.instructions+=2;goto B432dab;
case 0x432dae:c.instructions+=1;goto B432dae;
case 0x432db3:goto L432db3;
case 0x432db6:c.instructions+=9;goto B432db6;
case 0x432db9:c.instructions+=8;goto B432db9;
case 0x432dba:c.instructions+=7;goto B432dba;
case 0x432dbb:c.instructions+=6;goto B432dbb;
case 0x432dbc:c.instructions+=5;goto B432dbc;
case 0x432dbd:c.instructions+=4;goto B432dbd;
case 0x432dc0:c.instructions+=3;goto B432dc0;
case 0x432dc1:c.instructions+=2;goto B432dc1;
case 0x432dc4:c.instructions+=1;goto B432dc4;
case 0x432dc7:goto L432dc7;
case 0x432dca:c.instructions+=1;goto B432dca;
case 0x432dcc:goto L432dcc;
case 0x432dcf:c.instructions+=1;goto B432dcf;
case 0x432dd1:goto L432dd1;
case 0x432dd4:c.instructions+=1;goto B432dd4;
case 0x432dd6:goto L432dd6;
case 0x432dd8:c.instructions+=1;goto B432dd8;
case 0x432ddd:goto L432ddd;
case 0x432de0:c.instructions+=1;goto B432de0;
case 0x432de2:goto L432de2;
case 0x432de5:goto L432de5;
case 0x432de7:c.instructions+=2;goto B432de7;
case 0x432dea:c.instructions+=1;goto B432dea;
case 0x432def:goto L432def;
case 0x432df2:c.instructions+=9;goto B432df2;
case 0x432df5:c.instructions+=8;goto B432df5;
case 0x432df6:c.instructions+=7;goto B432df6;
case 0x432df7:c.instructions+=6;goto B432df7;
case 0x432df8:c.instructions+=5;goto B432df8;
case 0x432df9:c.instructions+=4;goto B432df9;
case 0x432dfc:c.instructions+=3;goto B432dfc;
case 0x432dfd:c.instructions+=2;goto B432dfd;
case 0x432e00:c.instructions+=1;goto B432e00;
case 0x432e03:goto L432e03;
case 0x432e06:c.instructions+=1;goto B432e06;
case 0x432e0c:goto L432e0c;
case 0x432e0f:c.instructions+=1;goto B432e0f;
case 0x432e11:goto L432e11;
case 0x432e13:c.instructions+=1;goto B432e13;
case 0x432e18:goto L432e18;
case 0x432e1a:c.instructions+=2;goto B432e1a;
case 0x432e1d:c.instructions+=1;goto B432e1d;
case 0x432e22:goto L432e22;
case 0x432e25:c.instructions+=9;goto B432e25;
case 0x432e28:c.instructions+=8;goto B432e28;
case 0x432e29:c.instructions+=7;goto B432e29;
case 0x432e2a:c.instructions+=6;goto B432e2a;
case 0x432e2b:c.instructions+=5;goto B432e2b;
case 0x432e2c:c.instructions+=4;goto B432e2c;
case 0x432e2f:c.instructions+=3;goto B432e2f;
case 0x432e30:c.instructions+=2;goto B432e30;
case 0x432e33:c.instructions+=1;goto B432e33;
case 0x432e36:goto L432e36;
case 0x432e39:c.instructions+=1;goto B432e39;
case 0x432e3b:goto L432e3b;
case 0x432e3d:c.instructions+=1;goto B432e3d;
case 0x432e42:goto L432e42;
case 0x432e43:c.instructions+=1;goto B432e43;
case 0x432e48:goto L432e48;
case 0x432e4b:c.instructions+=3;goto B432e4b;
case 0x432e4d:c.instructions+=2;goto B432e4d;
case 0x432e50:c.instructions+=1;goto B432e50;
case 0x432e55:goto L432e55;
case 0x432e58:c.instructions+=2;goto B432e58;
case 0x432e5a:c.instructions+=1;goto B432e5a;
case 0x432e5f:goto L432e5f;
case 0x432e62:c.instructions+=2;goto B432e62;
case 0x432e64:c.instructions+=1;goto B432e64;
case 0x432e69:goto L432e69;
case 0x432e6b:c.instructions+=1;goto B432e6b;
case 0x432e71:goto L432e71;
case 0x432e73:c.instructions+=1;goto B432e73;
case 0x432e78:goto L432e78;
case 0x432e7b:c.instructions+=9;goto B432e7b;
case 0x432e7e:c.instructions+=8;goto B432e7e;
case 0x432e7f:c.instructions+=7;goto B432e7f;
case 0x432e80:c.instructions+=6;goto B432e80;
case 0x432e81:c.instructions+=5;goto B432e81;
case 0x432e82:c.instructions+=4;goto B432e82;
case 0x432e85:c.instructions+=3;goto B432e85;
case 0x432e86:c.instructions+=2;goto B432e86;
case 0x432e89:c.instructions+=1;goto B432e89;
case 0x432e8c:goto L432e8c;
case 0x432e8f:c.instructions+=1;goto B432e8f;
case 0x432e91:goto L432e91;
case 0x432e93:c.instructions+=1;goto B432e93;
case 0x432e98:goto L432e98;
case 0x432e9b:c.instructions+=1;goto B432e9b;
case 0x432e9d:goto L432e9d;
case 0x432ea0:goto L432ea0;
case 0x432ea2:c.instructions+=2;goto B432ea2;
case 0x432ea5:c.instructions+=1;goto B432ea5;
case 0x432eaa:goto L432eaa;
case 0x432eac:c.instructions+=2;goto B432eac;
case 0x432eaf:c.instructions+=1;goto B432eaf;
case 0x432eb4:goto L432eb4;
case 0x432eb7:c.instructions+=9;goto B432eb7;
case 0x432eba:c.instructions+=8;goto B432eba;
case 0x432ebb:c.instructions+=7;goto B432ebb;
case 0x432ebc:c.instructions+=6;goto B432ebc;
case 0x432ebd:c.instructions+=5;goto B432ebd;
case 0x432ebe:c.instructions+=4;goto B432ebe;
case 0x432ec1:c.instructions+=3;goto B432ec1;
case 0x432ec2:c.instructions+=2;goto B432ec2;
case 0x432ec5:c.instructions+=1;goto B432ec5;
case 0x432ec8:goto L432ec8;
case 0x432ecb:c.instructions+=1;goto B432ecb;
case 0x432ecd:goto L432ecd;
case 0x432ecf:c.instructions+=1;goto B432ecf;
case 0x432ed4:goto L432ed4;
case 0x432ed7:c.instructions+=1;goto B432ed7;
case 0x432ed9:goto L432ed9;
case 0x432edc:goto L432edc;
case 0x432ede:c.instructions+=2;goto B432ede;
case 0x432ee1:c.instructions+=1;goto B432ee1;
case 0x432ee6:goto L432ee6;
case 0x432ee9:c.instructions+=2;goto B432ee9;
case 0x432eeb:c.instructions+=1;goto B432eeb;
case 0x432ef0:goto L432ef0;
case 0x432ef3:c.instructions+=9;goto B432ef3;
case 0x432ef6:c.instructions+=8;goto B432ef6;
case 0x432ef7:c.instructions+=7;goto B432ef7;
case 0x432ef8:c.instructions+=6;goto B432ef8;
case 0x432ef9:c.instructions+=5;goto B432ef9;
case 0x432efa:c.instructions+=4;goto B432efa;
case 0x432efd:c.instructions+=3;goto B432efd;
case 0x432efe:c.instructions+=2;goto B432efe;
case 0x432f01:c.instructions+=1;goto B432f01;
case 0x432f04:goto L432f04;
case 0x432f07:c.instructions+=1;goto B432f07;
case 0x432f09:goto L432f09;
case 0x432f0b:c.instructions+=1;goto B432f0b;
case 0x432f10:goto L432f10;
case 0x432f13:c.instructions+=1;goto B432f13;
case 0x432f15:goto L432f15;
case 0x432f17:c.instructions+=1;goto B432f17;
case 0x432f19:goto L432f19;
case 0x432f1c:goto L432f1c;
case 0x432f1e:c.instructions+=1;goto B432f1e;
case 0x432f23:goto L432f23;
case 0x432f27:c.instructions+=7;goto B432f27;
case 0x432f2b:c.instructions+=6;goto B432f2b;
case 0x432f2e:c.instructions+=5;goto B432f2e;
case 0x432f2f:c.instructions+=4;goto B432f2f;
case 0x432f30:c.instructions+=3;goto B432f30;
case 0x432f31:c.instructions+=2;goto B432f31;
case 0x432f33:c.instructions+=1;goto B432f33;
case 0x432f38:goto L432f38;
case 0x432f39:c.instructions+=5;goto B432f39;
case 0x432f3a:c.instructions+=4;goto B432f3a;
case 0x432f3b:c.instructions+=3;goto B432f3b;
case 0x432f3c:c.instructions+=2;goto B432f3c;
case 0x432f3f:c.instructions+=1;goto B432f3f;
case 0x432f42:goto L432f42;
case 0x432f45:c.instructions+=1;goto B432f45;
case 0x432f47:goto L432f47;
case 0x432f49:c.instructions+=1;goto B432f49;
case 0x432f4e:goto L432f4e;
case 0x432f51:c.instructions+=1;goto B432f51;
case 0x432f53:goto L432f53;
case 0x432f55:c.instructions+=1;goto B432f55;
case 0x432f57:goto L432f57;
case 0x432f5a:goto L432f5a;
case 0x432f5c:c.instructions+=1;goto B432f5c;
case 0x432f61:goto L432f61;
case 0x432f65:c.instructions+=7;goto B432f65;
case 0x432f69:c.instructions+=6;goto B432f69;
case 0x432f6c:c.instructions+=5;goto B432f6c;
case 0x432f6d:c.instructions+=4;goto B432f6d;
case 0x432f6e:c.instructions+=3;goto B432f6e;
case 0x432f6f:c.instructions+=2;goto B432f6f;
case 0x432f71:c.instructions+=1;goto B432f71;
case 0x432f76:goto L432f76;
case 0x432f77:c.instructions+=5;goto B432f77;
case 0x432f78:c.instructions+=4;goto B432f78;
case 0x432f79:c.instructions+=3;goto B432f79;
case 0x432f7a:c.instructions+=2;goto B432f7a;
case 0x432f7d:c.instructions+=1;goto B432f7d;
case 0x432f80:goto L432f80;
case 0x432f83:c.instructions+=1;goto B432f83;
case 0x432f85:goto L432f85;
case 0x432f87:c.instructions+=1;goto B432f87;
case 0x432f8c:goto L432f8c;
case 0x432f8f:c.instructions+=1;goto B432f8f;
case 0x432f91:goto L432f91;
case 0x432f93:c.instructions+=1;goto B432f93;
case 0x432f95:goto L432f95;
case 0x432f98:goto L432f98;
case 0x432f9a:c.instructions+=1;goto B432f9a;
case 0x432f9f:goto L432f9f;
case 0x432fa3:c.instructions+=2;goto B432fa3;
case 0x432fa5:c.instructions+=1;goto B432fa5;
case 0x432faa:goto L432faa;
case 0x432fae:c.instructions+=2;goto B432fae;
case 0x432fb0:c.instructions+=1;goto B432fb0;
case 0x432fb5:goto L432fb5;
case 0x432fb9:c.instructions+=11;goto B432fb9;
case 0x432fbd:c.instructions+=10;goto B432fbd;
case 0x432fc1:c.instructions+=9;goto B432fc1;
case 0x432fc5:c.instructions+=8;goto B432fc5;
case 0x432fc6:c.instructions+=7;goto B432fc6;
case 0x432fc9:c.instructions+=6;goto B432fc9;
case 0x432fca:c.instructions+=5;goto B432fca;
case 0x432fcb:c.instructions+=4;goto B432fcb;
case 0x432fcc:c.instructions+=3;goto B432fcc;
case 0x432fcd:c.instructions+=2;goto B432fcd;
case 0x432fcf:c.instructions+=1;goto B432fcf;
case 0x432fd4:goto L432fd4;
case 0x432fd5:c.instructions+=5;goto B432fd5;
case 0x432fd6:c.instructions+=4;goto B432fd6;
case 0x432fd7:c.instructions+=3;goto B432fd7;
case 0x432fd8:c.instructions+=2;goto B432fd8;
case 0x432fdb:c.instructions+=1;goto B432fdb;
case 0x432fde:goto L432fde;
case 0x432fe1:c.instructions+=1;goto B432fe1;
case 0x432fe3:goto L432fe3;
case 0x432fe5:c.instructions+=1;goto B432fe5;
case 0x432fea:goto L432fea;
case 0x432fec:c.instructions+=1;goto B432fec;
case 0x432fee:goto L432fee;
case 0x432fef:c.instructions+=1;goto B432fef;
case 0x432ff4:goto L432ff4;
case 0x432ffa:c.instructions+=4;goto B432ffa;
case 0x432ffb:c.instructions+=3;goto B432ffb;
case 0x432ffc:c.instructions+=2;goto B432ffc;
case 0x432fff:c.instructions+=1;goto B432fff;
default:missing_instruction(c.pc);}
B432000:L432000:{c.instructions+=5;NFSU2_TR(0x432000);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B432005:{NFSU2_TR(0x432005);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432006:{NFSU2_TR(0x432006);
__builtin_memmove((R+24),(R+4),4);
}
B432008:{NFSU2_TR(0x432008);
u8 U[4];
w4(U+0,u32(0x785d9cull));
s4(u32(r4(R+24)),r4(U+0));
}
B43200e:{NFSU2_TR(0x43200e);
if(r1(R+518)){{goto L432019;}}
}
B432010:L432010:{c.instructions+=2;NFSU2_TR(0x432010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432011:{NFSU2_TR(0x432011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432016ull));
TAIL_STATIC(0x575630u,575);
}
B432016:L432016:{c.instructions+=1;NFSU2_TR(0x432016);
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
B432019:L432019:{c.instructions+=3;NFSU2_TR(0x432019);
__builtin_memmove((R+0),(R+24),4);
}
B43201b:{NFSU2_TR(0x43201b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43201c:{NFSU2_TR(0x43201c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432020:L432020:{c.instructions+=5;NFSU2_TR(0x432020);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B432025:{NFSU2_TR(0x432025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432026:{NFSU2_TR(0x432026);
__builtin_memmove((R+24),(R+4),4);
}
B432028:{NFSU2_TR(0x432028);
u8 U[4];
w4(U+0,u32(0x785da0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43202e:{NFSU2_TR(0x43202e);
if(r1(R+518)){{goto L432039;}}
}
B432030:L432030:{c.instructions+=2;NFSU2_TR(0x432030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432031:{NFSU2_TR(0x432031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432036ull));
TAIL_STATIC(0x575630u,575);
}
B432036:L432036:{c.instructions+=1;NFSU2_TR(0x432036);
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
B432039:L432039:{c.instructions+=3;NFSU2_TR(0x432039);
__builtin_memmove((R+0),(R+24),4);
}
B43203b:{NFSU2_TR(0x43203b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43203c:{NFSU2_TR(0x43203c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432040:L432040:{c.instructions+=4;NFSU2_TR(0x432040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432041:{NFSU2_TR(0x432041);
__builtin_memmove((R+24),gp(0x827d98),4);
}
B432047:{NFSU2_TR(0x432047);
w4(R+4,u32(0x827d98ull));
}
B43204c:{NFSU2_TR(0x43204c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432051ull));
TAIL_STATIC(0x502fd0u,502);
}
B432051:L432051:{c.instructions+=2;NFSU2_TR(0x432051);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432053:{NFSU2_TR(0x432053);
if(r1(R+518)){{goto L43206b;}}
}
B432055:L432055:{c.instructions+=2;NFSU2_TR(0x432055);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432059:{NFSU2_TR(0x432059);
__builtin_memmove((R+16),(R+16),4);
}
B432060:L432060:{c.instructions+=2;NFSU2_TR(0x432060);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B432063:{NFSU2_TR(0x432063);
if(r1(R+518)){{goto L43206f;}}
}
B432065:L432065:{c.instructions+=3;NFSU2_TR(0x432065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B432067:{NFSU2_TR(0x432067);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432069:{NFSU2_TR(0x432069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432060u);}goto L432060;}}
}
B43206b:L43206b:{c.instructions+=3;NFSU2_TR(0x43206b);
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
B43206d:{NFSU2_TR(0x43206d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43206e:{NFSU2_TR(0x43206e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43206f:L43206f:{c.instructions+=3;NFSU2_TR(0x43206f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B432072:{NFSU2_TR(0x432072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432073:{NFSU2_TR(0x432073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432080:L432080:{c.instructions+=3;NFSU2_TR(0x432080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432084:{NFSU2_TR(0x432084);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37140ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43208a:{NFSU2_TR(0x43208a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4320ae;}}
}
B43208c:L43208c:{c.instructions+=9;NFSU2_TR(0x43208c);
__builtin_memmove((R+4),gp(0x827d9c),4);
}
B432092:{NFSU2_TR(0x432092);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B432095:{NFSU2_TR(0x432095);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B432098:{NFSU2_TR(0x432098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43209a:{NFSU2_TR(0x43209a);
__builtin_memmove(gp(0x827d9c),(R+0),4);
}
B43209f:{NFSU2_TR(0x43209f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4320a2:{NFSU2_TR(0x4320a2);
u8 U[4];
w4(U+0,u32(0x827d98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4320a8:{NFSU2_TR(0x4320a8);
w4(R+0,u32(0x1ull));
}
B4320ad:{NFSU2_TR(0x4320ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4320ae:L4320ae:{c.instructions+=2;NFSU2_TR(0x4320ae);
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
B4320b0:{NFSU2_TR(0x4320b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4320c0:L4320c0:{c.instructions+=3;NFSU2_TR(0x4320c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4320c4:{NFSU2_TR(0x4320c4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37140ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4320ca:{NFSU2_TR(0x4320ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4320e2;}}
}
B4320cc:L4320cc:{c.instructions+=8;NFSU2_TR(0x4320cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B4320cf:{NFSU2_TR(0x4320cf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4320d2:{NFSU2_TR(0x4320d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4320d4:{NFSU2_TR(0x4320d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4320d7:{NFSU2_TR(0x4320d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4320d9:{NFSU2_TR(0x4320d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4320dc:{NFSU2_TR(0x4320dc);
w4(R+0,u32(0x1ull));
}
B4320e1:{NFSU2_TR(0x4320e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4320e2:L4320e2:{c.instructions+=2;NFSU2_TR(0x4320e2);
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
B4320e4:{NFSU2_TR(0x4320e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4320f0:L4320f0:{c.instructions+=8;NFSU2_TR(0x4320f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4320f1:{NFSU2_TR(0x4320f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4320f2:{NFSU2_TR(0x4320f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4320f5:{NFSU2_TR(0x4320f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4320f6:{NFSU2_TR(0x4320f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4320f8:{NFSU2_TR(0x4320f8);
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
B4320fa:{NFSU2_TR(0x4320fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4320fb:{NFSU2_TR(0x4320fb);
if(r1(R+518)){{goto L432115;}}
}
B4320fd:L4320fd:{c.instructions+=1;NFSU2_TR(0x4320fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B432101:L432101:{c.instructions+=4;NFSU2_TR(0x432101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B432104:{NFSU2_TR(0x432104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B432106:{NFSU2_TR(0x432106);
__builtin_memmove((R+4),(R+28),4);
}
B432108:{NFSU2_TR(0x432108);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43210bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43210b:L43210b:{c.instructions+=2;NFSU2_TR(0x43210b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B43210d:{NFSU2_TR(0x43210d);
if(r1(R+518)){{goto L43211e;}}
}
B43210f:L43210f:{c.instructions+=3;NFSU2_TR(0x43210f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B432111:{NFSU2_TR(0x432111);
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
B432113:{NFSU2_TR(0x432113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432101u);}goto L432101;}}
}
B432115:L432115:{c.instructions+=6;NFSU2_TR(0x432115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432116:{NFSU2_TR(0x432116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432117:{NFSU2_TR(0x432117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432118:{NFSU2_TR(0x432118);
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
B43211a:{NFSU2_TR(0x43211a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43211b:{NFSU2_TR(0x43211b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43211e:L43211e:{c.instructions+=6;NFSU2_TR(0x43211e);
__builtin_memmove((R+0),(R+28),4);
}
B432120:{NFSU2_TR(0x432120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432121:{NFSU2_TR(0x432121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432122:{NFSU2_TR(0x432122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432123:{NFSU2_TR(0x432123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432124:{NFSU2_TR(0x432124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432130:L432130:{c.instructions+=7;NFSU2_TR(0x432130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432131:{NFSU2_TR(0x432131);
__builtin_memmove((R+24),(R+4),4);
}
B432133:{NFSU2_TR(0x432133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432136:{NFSU2_TR(0x432136);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432137:{NFSU2_TR(0x432137);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43213a:{NFSU2_TR(0x43213a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B43213c:{NFSU2_TR(0x43213c);
if(r1(R+518)){{goto L432167;}}
}
B43213e:L43213e:{c.instructions+=1;NFSU2_TR(0x43213e);
__builtin_memmove((R+28),(R+28),4);
}
B432140:L432140:{c.instructions+=3;NFSU2_TR(0x432140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432143:{NFSU2_TR(0x432143);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432145:{NFSU2_TR(0x432145);
if(r1(R+518)){{goto L43214c;}}
}
B432147:L432147:{c.instructions+=2;NFSU2_TR(0x432147);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43214a:{NFSU2_TR(0x43214a);
{goto L43214e;}
}
B43214c:L43214c:{c.instructions+=1;NFSU2_TR(0x43214c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43214e:L43214e:{c.instructions+=6;NFSU2_TR(0x43214e);
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
B432150:{NFSU2_TR(0x432150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432153:{NFSU2_TR(0x432153);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432156:{NFSU2_TR(0x432156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B432158:{NFSU2_TR(0x432158);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43215b:{NFSU2_TR(0x43215b);
if(r1(R+518)){{goto L432163;}}
}
B43215d:L43215d:{c.instructions+=3;NFSU2_TR(0x43215d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43215f:{NFSU2_TR(0x43215f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432161:{NFSU2_TR(0x432161);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432163ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B432163:L432163:{c.instructions+=2;NFSU2_TR(0x432163);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B432165:{NFSU2_TR(0x432165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432140u);}goto L432140;}}
}
B432167:L432167:{c.instructions+=3;NFSU2_TR(0x432167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432168:{NFSU2_TR(0x432168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432169:{NFSU2_TR(0x432169);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432170:L432170:{c.instructions+=4;NFSU2_TR(0x432170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432173:{NFSU2_TR(0x432173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432175:{NFSU2_TR(0x432175);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B432178:{NFSU2_TR(0x432178);
if(r1(R+518)){{goto L43217f;}}
}
B43217a:L43217a:{c.instructions+=2;NFSU2_TR(0x43217a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B43217d:{NFSU2_TR(0x43217d);
{goto L432181;}
}
B43217f:L43217f:{c.instructions+=1;NFSU2_TR(0x43217f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B432181:L432181:{c.instructions+=2;NFSU2_TR(0x432181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432182:{NFSU2_TR(0x432182);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432186:L432186:{c.instructions+=2;NFSU2_TR(0x432186);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432188:{NFSU2_TR(0x432188);
if(r1(R+518)){{goto L43218f;}}
}
B43218a:L43218a:{c.instructions+=2;NFSU2_TR(0x43218a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43218d:{NFSU2_TR(0x43218d);
{goto L432191;}
}
B43218f:L43218f:{c.instructions+=1;NFSU2_TR(0x43218f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B432191:L432191:{c.instructions+=2;NFSU2_TR(0x432191);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432193:{NFSU2_TR(0x432193);
if(r1(R+518)){{goto L4321ac;}}
}
B432195:L432195:{c.instructions+=3;NFSU2_TR(0x432195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432198:{NFSU2_TR(0x432198);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B43219a:{NFSU2_TR(0x43219a);
if(r1(R+518)){{goto L4321ae;}}
}
B43219c:L43219c:{c.instructions+=3;NFSU2_TR(0x43219c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43219f:{NFSU2_TR(0x43219f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4321a1:{NFSU2_TR(0x4321a1);
if(r1(R+518)){{goto L4321a8;}}
}
B4321a3:L4321a3:{c.instructions+=2;NFSU2_TR(0x4321a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4321a6:{NFSU2_TR(0x4321a6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432186u);}goto L432186;}
}
B4321a8:L4321a8:{c.instructions+=2;NFSU2_TR(0x4321a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4321aa:{NFSU2_TR(0x4321aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432186u);}goto L432186;}
}
B4321ac:L4321ac:{c.instructions+=1;NFSU2_TR(0x4321ac);
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
B4321ae:L4321ae:{c.instructions+=2;NFSU2_TR(0x4321ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4321af:{NFSU2_TR(0x4321af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4321c0:L4321c0:{c.instructions+=4;NFSU2_TR(0x4321c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4321c1:{NFSU2_TR(0x4321c1);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4321c6:{NFSU2_TR(0x4321c6);
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
B4321c8:{NFSU2_TR(0x4321c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432277;}}
}
B4321ce:L4321ce:{c.instructions+=3;NFSU2_TR(0x4321ce);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B4321d3:{NFSU2_TR(0x4321d3);
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
B4321d5:{NFSU2_TR(0x4321d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432277;}}
}
B4321db:L4321db:{c.instructions+=5;NFSU2_TR(0x4321db);
{u32 ea_=u32(u32(8552172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4321e1:{NFSU2_TR(0x4321e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4321e7:{NFSU2_TR(0x4321e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4321e9:{NFSU2_TR(0x4321e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4321ec:{NFSU2_TR(0x4321ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432215;}}
}
B4321ee:L4321ee:{c.instructions+=7;NFSU2_TR(0x4321ee);
{u32 ea_=u32(u32(8552172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4321f4:{NFSU2_TR(0x4321f4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4321f8:{NFSU2_TR(0x4321f8);
{u32 ea_=u32(u32(8552172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4321fe:{NFSU2_TR(0x4321fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B432204:{NFSU2_TR(0x432204);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B432206:{NFSU2_TR(0x432206);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B432209:{NFSU2_TR(0x432209);
if(r1(R+514)){{goto L432215;}}
}
B43220b:L43220b:{c.instructions+=1;NFSU2_TR(0x43220b);
s4(0x827eec,u32(0x0ull));
}
B432215:L432215:{c.instructions+=9;NFSU2_TR(0x432215);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432216:{NFSU2_TR(0x432216);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B432219:{NFSU2_TR(0x432219);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B43221c:{NFSU2_TR(0x43221c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43221e:{NFSU2_TR(0x43221e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43221f:{NFSU2_TR(0x43221f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432220:{NFSU2_TR(0x432220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432221:{NFSU2_TR(0x432221);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432225:{NFSU2_TR(0x432225);
if(r1(R+518)){{goto L43222c;}}
}
B432227:L432227:{c.instructions+=2;NFSU2_TR(0x432227);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B43222a:{NFSU2_TR(0x43222a);
{goto L43222e;}
}
B43222c:L43222c:{c.instructions+=1;NFSU2_TR(0x43222c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43222e:L43222e:{c.instructions+=1;NFSU2_TR(0x43222e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B432232:L432232:{c.instructions+=2;NFSU2_TR(0x432232);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432234:{NFSU2_TR(0x432234);
if(r1(R+518)){{goto L43223b;}}
}
B432236:L432236:{c.instructions+=2;NFSU2_TR(0x432236);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B432239:{NFSU2_TR(0x432239);
{goto L43223d;}
}
B43223b:L43223b:{c.instructions+=1;NFSU2_TR(0x43223b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43223d:L43223d:{c.instructions+=2;NFSU2_TR(0x43223d);
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
B43223f:{NFSU2_TR(0x43223f);
if(r1(R+518)){{goto L432273;}}
}
B432241:L432241:{c.instructions+=4;NFSU2_TR(0x432241);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432244:{NFSU2_TR(0x432244);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432247:{NFSU2_TR(0x432247);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B432249:{NFSU2_TR(0x432249);
if(r1(R+518)){{goto L432263;}}
}
B43224b:L43224b:{c.instructions+=1;NFSU2_TR(0x43224b);
{goto L432250;}
}
B432250:L432250:{c.instructions+=4;NFSU2_TR(0x432250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432253:{NFSU2_TR(0x432253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B432255:{NFSU2_TR(0x432255);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432256:{NFSU2_TR(0x432256);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432259ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B432259:L432259:{c.instructions+=3;NFSU2_TR(0x432259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43225b:{NFSU2_TR(0x43225b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B43225d:{NFSU2_TR(0x43225d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432250u);}goto L432250;}}
}
B43225f:L43225f:{c.instructions+=1;NFSU2_TR(0x43225f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432263:L432263:{c.instructions+=3;NFSU2_TR(0x432263);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432266:{NFSU2_TR(0x432266);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432268:{NFSU2_TR(0x432268);
if(r1(R+518)){{goto L43226f;}}
}
B43226a:L43226a:{c.instructions+=2;NFSU2_TR(0x43226a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B43226d:{NFSU2_TR(0x43226d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432232u);}goto L432232;}
}
B43226f:L43226f:{c.instructions+=2;NFSU2_TR(0x43226f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B432271:{NFSU2_TR(0x432271);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432232u);}goto L432232;}
}
B432273:L432273:{c.instructions+=4;NFSU2_TR(0x432273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432274:{NFSU2_TR(0x432274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432275:{NFSU2_TR(0x432275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432276:{NFSU2_TR(0x432276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432277:L432277:{c.instructions+=2;NFSU2_TR(0x432277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B432278:{NFSU2_TR(0x432278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432280:L432280:{c.instructions+=11;NFSU2_TR(0x432280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432281:{NFSU2_TR(0x432281);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432282:{NFSU2_TR(0x432282);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432283:{NFSU2_TR(0x432283);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432284:{NFSU2_TR(0x432284);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432285:{NFSU2_TR(0x432285);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B432289:{NFSU2_TR(0x432289);
u8 U[4];
w4(U+0,u32(0x7860b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43228e:{NFSU2_TR(0x43228e);
__builtin_memmove((R+24),(R+4),4);
}
B432290:{NFSU2_TR(0x432290);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432292:{NFSU2_TR(0x432292);
__builtin_memmove((R+4),(R+28),4);
}
B432294:{NFSU2_TR(0x432294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432299ull));
TAIL_STATIC(0x578ce0u,578);
}
B432299:L432299:{c.instructions+=3;NFSU2_TR(0x432299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43229c:{NFSU2_TR(0x43229c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43229f:{NFSU2_TR(0x43229f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4322a3:L4322a3:{c.instructions+=2;NFSU2_TR(0x4322a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4322a5:{NFSU2_TR(0x4322a5);
if(r1(R+518)){{goto L4322b0;}}
}
B4322a7:L4322a7:{c.instructions+=3;NFSU2_TR(0x4322a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4322aa:{NFSU2_TR(0x4322aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4322ae:{NFSU2_TR(0x4322ae);
{goto L4322b8;}
}
B4322b0:L4322b0:{c.instructions+=1;NFSU2_TR(0x4322b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4322b8:L4322b8:{c.instructions+=2;NFSU2_TR(0x4322b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4322ba:{NFSU2_TR(0x4322ba);
if(r1(R+518)){{goto L4322c1;}}
}
B4322bc:L4322bc:{c.instructions+=2;NFSU2_TR(0x4322bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4322bf:{NFSU2_TR(0x4322bf);
{goto L4322c3;}
}
B4322c1:L4322c1:{c.instructions+=1;NFSU2_TR(0x4322c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4322c3:L4322c3:{c.instructions+=3;NFSU2_TR(0x4322c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4322c7:{NFSU2_TR(0x4322c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4322c9:{NFSU2_TR(0x4322c9);
if(r1(R+518)){{goto L432341;}}
}
B4322cb:L4322cb:{c.instructions+=4;NFSU2_TR(0x4322cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4322ce:{NFSU2_TR(0x4322ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4322d1:{NFSU2_TR(0x4322d1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4322d3:{NFSU2_TR(0x4322d3);
if(r1(R+518)){{goto L432339;}}
}
B4322d5:L4322d5:{c.instructions+=4;NFSU2_TR(0x4322d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4322d8:{NFSU2_TR(0x4322d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4322db:{NFSU2_TR(0x4322db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4322dd:{NFSU2_TR(0x4322dd);
if(r1(R+518)){{goto L43232f;}}
}
B4322df:L4322df:{c.instructions+=4;NFSU2_TR(0x4322df);
u8 U[4];
w4(U+0,u32(0x786088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4322e4:{NFSU2_TR(0x4322e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4322e6:{NFSU2_TR(0x4322e6);
__builtin_memmove((R+4),(R+28),4);
}
B4322e8:{NFSU2_TR(0x4322e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4322edull));
TAIL_STATIC(0x578ce0u,578);
}
B4322ed:L4322ed:{c.instructions+=4;NFSU2_TR(0x4322ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4322f0:{NFSU2_TR(0x4322f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4322f1:{NFSU2_TR(0x4322f1);
__builtin_memmove((R+4),(R+28),4);
}
B4322f3:{NFSU2_TR(0x4322f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4322f8ull));
TAIL_STATIC(0x571770u,571);
}
B4322f8:L4322f8:{c.instructions+=4;NFSU2_TR(0x4322f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4322fb:{NFSU2_TR(0x4322fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4322fc:{NFSU2_TR(0x4322fc);
__builtin_memmove((R+4),(R+28),4);
}
B4322fe:{NFSU2_TR(0x4322fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432303ull));
TAIL_STATIC(0x571770u,571);
}
B432303:L432303:{c.instructions+=4;NFSU2_TR(0x432303);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B432306:{NFSU2_TR(0x432306);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432307:{NFSU2_TR(0x432307);
__builtin_memmove((R+4),(R+28),4);
}
B432309:{NFSU2_TR(0x432309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43230eull));
TAIL_STATIC(0x571770u,571);
}
B43230e:L43230e:{c.instructions+=4;NFSU2_TR(0x43230e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B432311:{NFSU2_TR(0x432311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432312:{NFSU2_TR(0x432312);
__builtin_memmove((R+4),(R+28),4);
}
B432314:{NFSU2_TR(0x432314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432319ull));
TAIL_STATIC(0x571770u,571);
}
B432319:L432319:{c.instructions+=4;NFSU2_TR(0x432319);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B43231c:{NFSU2_TR(0x43231c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43231d:{NFSU2_TR(0x43231d);
__builtin_memmove((R+4),(R+28),4);
}
B43231f:{NFSU2_TR(0x43231f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432324ull));
TAIL_STATIC(0x571770u,571);
}
B432324:L432324:{c.instructions+=2;NFSU2_TR(0x432324);
__builtin_memmove((R+4),(R+28),4);
}
B432326:{NFSU2_TR(0x432326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43232bull));
TAIL_STATIC(0x578d90u,578);
}
B43232b:L43232b:{c.instructions+=1;NFSU2_TR(0x43232b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43232f:L43232f:{c.instructions+=3;NFSU2_TR(0x43232f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B432331:{NFSU2_TR(0x432331);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432333:{NFSU2_TR(0x432333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4322d5u);}goto L4322d5;}}
}
B432335:L432335:{c.instructions+=1;NFSU2_TR(0x432335);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432339:L432339:{c.instructions+=2;NFSU2_TR(0x432339);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43233c:{NFSU2_TR(0x43233c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4322a3u);}goto L4322a3;}
}
B432341:L432341:{c.instructions+=2;NFSU2_TR(0x432341);
__builtin_memmove((R+4),(R+28),4);
}
B432343:{NFSU2_TR(0x432343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432348ull));
TAIL_STATIC(0x578d90u,578);
}
B432348:L432348:{c.instructions+=6;NFSU2_TR(0x432348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432349:{NFSU2_TR(0x432349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43234a:{NFSU2_TR(0x43234a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43234b:{NFSU2_TR(0x43234b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43234c:{NFSU2_TR(0x43234c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43234d:{NFSU2_TR(0x43234d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432350:L432350:{c.instructions+=6;NFSU2_TR(0x432350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432351:{NFSU2_TR(0x432351);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432352:{NFSU2_TR(0x432352);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432353:{NFSU2_TR(0x432353);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B432357:{NFSU2_TR(0x432357);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432358:{NFSU2_TR(0x432358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43235dull));
TAIL_STATIC(0x57d900u,57d);
}
B43235d:L43235d:{c.instructions+=7;NFSU2_TR(0x43235d);
__builtin_memmove((R+12),(R+0),4);
}
B43235f:{NFSU2_TR(0x43235f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432360:{NFSU2_TR(0x432360);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432362:{NFSU2_TR(0x432362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432364:{NFSU2_TR(0x432364);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432366:{NFSU2_TR(0x432366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432367:{NFSU2_TR(0x432367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43236cull));
TAIL_STATIC(0x57cef0u,57c);
}
B43236c:L43236c:{c.instructions+=8;NFSU2_TR(0x43236c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B43236f:{NFSU2_TR(0x43236f);
__builtin_memmove((R+24),(R+0),4);
}
B432371:{NFSU2_TR(0x432371);
__builtin_memmove((R+0),gp(0x827b10),4);
}
B432376:{NFSU2_TR(0x432376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432377:{NFSU2_TR(0x432377);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432379:{NFSU2_TR(0x432379);
__builtin_memmove((R+4),(R+24),4);
}
B43237b:{NFSU2_TR(0x43237b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432381:{NFSU2_TR(0x432381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432386ull));
TAIL_STATIC(0x570fa0u,570);
}
B432386:L432386:{c.instructions+=4;NFSU2_TR(0x432386);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432388:{NFSU2_TR(0x432388);
u8 U[4];
w4(U+0,u32(0x4307a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43238d:{NFSU2_TR(0x43238d);
__builtin_memmove((R+4),(R+24),4);
}
B43238f:{NFSU2_TR(0x43238f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432394ull));
TAIL_STATIC(0x57bd70u,57b);
}
B432394:L432394:{c.instructions+=2;NFSU2_TR(0x432394);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432396:{NFSU2_TR(0x432396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43239bull));
TAIL_STATIC(0x575620u,575);
}
B43239b:L43239b:{c.instructions+=3;NFSU2_TR(0x43239b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43239e:{NFSU2_TR(0x43239e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4323a0:{NFSU2_TR(0x4323a0);
if(r1(R+518)){{goto L4323b9;}}
}
B4323a2:L4323a2:{c.instructions+=6;NFSU2_TR(0x4323a2);
__builtin_memmove((R+4),gp(0x827b10),4);
}
B4323a8:{NFSU2_TR(0x4323a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4323ab:{NFSU2_TR(0x4323ab);
__builtin_memmove((R+4),gp(0x7ea109),1);
}
B4323b1:{NFSU2_TR(0x4323b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4323b4:{NFSU2_TR(0x4323b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4323b7:{NFSU2_TR(0x4323b7);
{goto L4323bb;}
}
B4323b9:L4323b9:{c.instructions+=1;NFSU2_TR(0x4323b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4323bb:L4323bb:{c.instructions+=13;NFSU2_TR(0x4323bb);
__builtin_memmove((R+4),gp(0x827c64),4);
}
B4323c1:{NFSU2_TR(0x4323c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4323c3:{NFSU2_TR(0x4323c3);
__builtin_memmove(gp(0x827c64),(R+0),4);
}
B4323c8:{NFSU2_TR(0x4323c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4323cb:{NFSU2_TR(0x4323cb);
u8 U[4];
w4(U+0,u32(0x827c60ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4323d1:{NFSU2_TR(0x4323d1);
__builtin_memmove((R+0),gp(0x827b10),4);
}
B4323d6:{NFSU2_TR(0x4323d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B4323d8:{NFSU2_TR(0x4323d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4323d9:{NFSU2_TR(0x4323d9);
__builtin_memmove(gp(0x827b10),(R+0),4);
}
B4323de:{NFSU2_TR(0x4323de);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4323e1:{NFSU2_TR(0x4323e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4323e2:{NFSU2_TR(0x4323e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4323e3:{NFSU2_TR(0x4323e3);
if(r1(R+518)){{goto L4323f2;}}
}
B4323e5:L4323e5:{c.instructions+=3;NFSU2_TR(0x4323e5);
w4(R+8,u32(0x10ull));
}
B4323ea:{NFSU2_TR(0x4323ea);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4323ec:{NFSU2_TR(0x4323ec);
u8 U[6];
w1(R+512,carry<u32>(m4(0x827b10),r4(R+8)));
w1(R+523,scarry<u32>(m4(0x827b10),r4(R+8)));
s4(0x827b10,u32(u32(m4(0x827b10))+u32(r4(R+8))));
w1(R+519,u8(s32(m4(0x827b10))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x827b10))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x827b10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4323f2:L4323f2:{c.instructions+=1;NFSU2_TR(0x4323f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432400:L432400:{c.instructions+=3;NFSU2_TR(0x432400);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B432405:{NFSU2_TR(0x432405);
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
B432407:{NFSU2_TR(0x432407);
if(r1(R+518)){{goto L43248d;}}
}
B43240d:L43240d:{c.instructions+=5;NFSU2_TR(0x43240d);
__builtin_memmove((R+0),gp(0x827e20),4);
}
B432412:{NFSU2_TR(0x432412);
__builtin_memmove((R+4),gp(0x827b04),4);
}
B432418:{NFSU2_TR(0x432418);
w4(R+8,u32(r1(R+0)));
}
B43241b:{NFSU2_TR(0x43241b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43241d:{NFSU2_TR(0x43241d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L432449;}}
}
B43241f:L43241f:{c.instructions+=7;NFSU2_TR(0x43241f);
w4(R+0,u32(r1(R+1)));
}
B432422:{NFSU2_TR(0x432422);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B432424:{NFSU2_TR(0x432424);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B43242a:{NFSU2_TR(0x43242a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43242d:{NFSU2_TR(0x43242d);
u8 U[12];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B432434:{NFSU2_TR(0x432434);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432435:{NFSU2_TR(0x432435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43243aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432350u);}goto L432350;}
}
B43243a:L43243a:{c.instructions+=5;NFSU2_TR(0x43243a);
__builtin_memmove((R+0),gp(0x827b04),4);
}
B43243f:{NFSU2_TR(0x43243f);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B432442:{NFSU2_TR(0x432442);
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
B432443:{NFSU2_TR(0x432443);
__builtin_memmove(gp(0x827b04),(R+0),4);
}
B432448:{NFSU2_TR(0x432448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432449:L432449:{c.instructions+=5;NFSU2_TR(0x432449);
__builtin_memmove((R+0),gp(0x827e22),2);
}
B43244f:{NFSU2_TR(0x43244f);
__builtin_memmove((R+4),gp(0x827b08),4);
}
B432455:{NFSU2_TR(0x432455);
w4(R+8,u32(r1(R+0)));
}
B432458:{NFSU2_TR(0x432458);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B43245a:{NFSU2_TR(0x43245a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L432486;}}
}
B43245c:L43245c:{c.instructions+=7;NFSU2_TR(0x43245c);
w4(R+0,u32(r1(R+1)));
}
B43245f:{NFSU2_TR(0x43245f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B432461:{NFSU2_TR(0x432461);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B432467:{NFSU2_TR(0x432467);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43246a:{NFSU2_TR(0x43246a);
u8 U[12];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B432471:{NFSU2_TR(0x432471);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432472:{NFSU2_TR(0x432472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432477ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432350u);}goto L432350;}
}
B432477:L432477:{c.instructions+=5;NFSU2_TR(0x432477);
__builtin_memmove((R+0),gp(0x827b08),4);
}
B43247c:{NFSU2_TR(0x43247c);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43247f:{NFSU2_TR(0x43247f);
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
B432480:{NFSU2_TR(0x432480);
__builtin_memmove(gp(0x827b08),(R+0),4);
}
B432485:{NFSU2_TR(0x432485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432486:L432486:{c.instructions+=1;NFSU2_TR(0x432486);
s1(0x827b00,u8(0x0ull));
}
B43248d:L43248d:{c.instructions+=1;NFSU2_TR(0x43248d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432490:L432490:{c.instructions+=4;NFSU2_TR(0x432490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432493:{NFSU2_TR(0x432493);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432495:{NFSU2_TR(0x432495);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B432498:{NFSU2_TR(0x432498);
if(r1(R+518)){{goto L43249f;}}
}
B43249a:L43249a:{c.instructions+=2;NFSU2_TR(0x43249a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B43249d:{NFSU2_TR(0x43249d);
{goto L4324a1;}
}
B43249f:L43249f:{c.instructions+=1;NFSU2_TR(0x43249f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4324a1:L4324a1:{c.instructions+=2;NFSU2_TR(0x4324a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4324a2:{NFSU2_TR(0x4324a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4324a6:L4324a6:{c.instructions+=2;NFSU2_TR(0x4324a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4324a8:{NFSU2_TR(0x4324a8);
if(r1(R+518)){{goto L4324af;}}
}
B4324aa:L4324aa:{c.instructions+=2;NFSU2_TR(0x4324aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4324ad:{NFSU2_TR(0x4324ad);
{goto L4324b1;}
}
B4324af:L4324af:{c.instructions+=1;NFSU2_TR(0x4324af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4324b1:L4324b1:{c.instructions+=2;NFSU2_TR(0x4324b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4324b3:{NFSU2_TR(0x4324b3);
if(r1(R+518)){{goto L4324ca;}}
}
B4324b5:L4324b5:{c.instructions+=2;NFSU2_TR(0x4324b5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4324b8:{NFSU2_TR(0x4324b8);
if(r1(R+518)){{goto L4324cc;}}
}
B4324ba:L4324ba:{c.instructions+=3;NFSU2_TR(0x4324ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4324bd:{NFSU2_TR(0x4324bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4324bf:{NFSU2_TR(0x4324bf);
if(r1(R+518)){{goto L4324c6;}}
}
B4324c1:L4324c1:{c.instructions+=2;NFSU2_TR(0x4324c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4324c4:{NFSU2_TR(0x4324c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4324a6u);}goto L4324a6;}
}
B4324c6:L4324c6:{c.instructions+=2;NFSU2_TR(0x4324c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4324c8:{NFSU2_TR(0x4324c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4324a6u);}goto L4324a6;}
}
B4324ca:L4324ca:{c.instructions+=1;NFSU2_TR(0x4324ca);
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
B4324cc:L4324cc:{c.instructions+=2;NFSU2_TR(0x4324cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4324cd:{NFSU2_TR(0x4324cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4324d0:L4324d0:{c.instructions+=4;NFSU2_TR(0x4324d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4324d3:{NFSU2_TR(0x4324d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4324d5:{NFSU2_TR(0x4324d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4324d7:{NFSU2_TR(0x4324d7);
if(r1(R+518)){{goto L4324de;}}
}
B4324d9:L4324d9:{c.instructions+=2;NFSU2_TR(0x4324d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B4324dc:{NFSU2_TR(0x4324dc);
{goto L4324e0;}
}
B4324de:L4324de:{c.instructions+=1;NFSU2_TR(0x4324de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4324e0:L4324e0:{c.instructions+=2;NFSU2_TR(0x4324e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4324e2:{NFSU2_TR(0x4324e2);
if(r1(R+518)){{goto L4324e9;}}
}
B4324e4:L4324e4:{c.instructions+=2;NFSU2_TR(0x4324e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4324e7:{NFSU2_TR(0x4324e7);
{goto L4324eb;}
}
B4324e9:L4324e9:{c.instructions+=1;NFSU2_TR(0x4324e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4324eb:L4324eb:{c.instructions+=2;NFSU2_TR(0x4324eb);
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
B4324ed:{NFSU2_TR(0x4324ed);
if(r1(R+518)){{goto L4324f5;}}
}
B4324ef:L4324ef:{c.instructions+=2;NFSU2_TR(0x4324ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4324f2:{NFSU2_TR(0x4324f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4324f5:L4324f5:{c.instructions+=2;NFSU2_TR(0x4324f5);
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
B4324f7:{NFSU2_TR(0x4324f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432500:L432500:{c.instructions+=2;NFSU2_TR(0x432500);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432503:{NFSU2_TR(0x432503);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B432506:L432506:{c.instructions+=2;NFSU2_TR(0x432506);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432508:{NFSU2_TR(0x432508);
if(r1(R+518)){{goto L43250f;}}
}
B43250a:L43250a:{c.instructions+=2;NFSU2_TR(0x43250a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B43250d:{NFSU2_TR(0x43250d);
{goto L432511;}
}
B43250f:L43250f:{c.instructions+=1;NFSU2_TR(0x43250f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B432511:L432511:{c.instructions+=2;NFSU2_TR(0x432511);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432513:{NFSU2_TR(0x432513);
if(r1(R+518)){{goto L43251a;}}
}
B432515:L432515:{c.instructions+=2;NFSU2_TR(0x432515);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B432518:{NFSU2_TR(0x432518);
{goto L43251c;}
}
B43251a:L43251a:{c.instructions+=1;NFSU2_TR(0x43251a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43251c:L43251c:{c.instructions+=2;NFSU2_TR(0x43251c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43251e:{NFSU2_TR(0x43251e);
if(r1(R+518)){{goto L43252f;}}
}
B432520:L432520:{c.instructions+=3;NFSU2_TR(0x432520);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B432523:{NFSU2_TR(0x432523);
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
B432525:{NFSU2_TR(0x432525);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43252c;}}
}
B432527:L432527:{c.instructions+=2;NFSU2_TR(0x432527);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43252a:{NFSU2_TR(0x43252a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432506u);}goto L432506;}
}
B43252c:L43252c:{c.instructions+=2;NFSU2_TR(0x43252c);
w1(R+0,u8(0x1ull));
}
B43252e:{NFSU2_TR(0x43252e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43252f:L43252f:{c.instructions+=2;NFSU2_TR(0x43252f);
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
B432531:{NFSU2_TR(0x432531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432540:L432540:{c.instructions+=3;NFSU2_TR(0x432540);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432544:{NFSU2_TR(0x432544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432545:{NFSU2_TR(0x432545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43254aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432490u);}goto L432490;}
}
B43254a:L43254a:{c.instructions+=2;NFSU2_TR(0x43254a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43254c:{NFSU2_TR(0x43254c);
if(r1(R+518)){{goto L43256a;}}
}
B43254e:L43254e:{c.instructions+=6;NFSU2_TR(0x43254e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B432551:{NFSU2_TR(0x432551);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B432554:{NFSU2_TR(0x432554);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B432556:{NFSU2_TR(0x432556);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B432558:{NFSU2_TR(0x432558);
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
B43255b:{NFSU2_TR(0x43255b);
if(r1(R+514)){{goto L432565;}}
}
B43255d:L43255d:{c.instructions+=2;NFSU2_TR(0x43255d);
w4(R+0,u32(0x1ull));
}
B432562:{NFSU2_TR(0x432562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432565:L432565:{c.instructions+=2;NFSU2_TR(0x432565);
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
B432567:{NFSU2_TR(0x432567);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43256a:L43256a:{c.instructions+=2;NFSU2_TR(0x43256a);
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
B43256c:{NFSU2_TR(0x43256c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432570:L432570:{c.instructions+=4;NFSU2_TR(0x432570);
__builtin_memmove((R+0),gp(0x827b80),4);
}
B432575:{NFSU2_TR(0x432575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432577:{NFSU2_TR(0x432577);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432578:{NFSU2_TR(0x432578);
if(r1(R+518)){{goto L43257f;}}
}
B43257a:L43257a:{c.instructions+=2;NFSU2_TR(0x43257a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B43257d:{NFSU2_TR(0x43257d);
{goto L432581;}
}
B43257f:L43257f:{c.instructions+=1;NFSU2_TR(0x43257f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B432581:L432581:{c.instructions+=2;NFSU2_TR(0x432581);
w4(R+4,u32(0x827b80ull));
}
B432586:{NFSU2_TR(0x432586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43258bull));
TAIL_STATIC(0x431780u,431);
}
B43258b:L43258b:{c.instructions+=2;NFSU2_TR(0x43258b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43258d:{NFSU2_TR(0x43258d);
if(r1(R+518)){{goto L4325ac;}}
}
B43258f:L43258f:{c.instructions+=1;NFSU2_TR(0x43258f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432593:L432593:{c.instructions+=3;NFSU2_TR(0x432593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432596:{NFSU2_TR(0x432596);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+10)));
w4(U+14,u32(u32(r4(R+4))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B432598:{NFSU2_TR(0x432598);
if(r1(R+518)){{goto L4325b0;}}
}
B43259a:L43259a:{c.instructions+=3;NFSU2_TR(0x43259a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43259d:{NFSU2_TR(0x43259d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43259f:{NFSU2_TR(0x43259f);
if(r1(R+518)){{goto L4325a6;}}
}
B4325a1:L4325a1:{c.instructions+=2;NFSU2_TR(0x4325a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4325a4:{NFSU2_TR(0x4325a4);
{goto L4325a8;}
}
B4325a6:L4325a6:{c.instructions+=1;NFSU2_TR(0x4325a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4325a8:L4325a8:{c.instructions+=2;NFSU2_TR(0x4325a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4325aa:{NFSU2_TR(0x4325aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432593u);}goto L432593;}}
}
B4325ac:L4325ac:{c.instructions+=3;NFSU2_TR(0x4325ac);
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
B4325ae:{NFSU2_TR(0x4325ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4325af:{NFSU2_TR(0x4325af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4325b0:L4325b0:{c.instructions+=3;NFSU2_TR(0x4325b0);
__builtin_memmove((R+0),(R+24),4);
}
B4325b2:{NFSU2_TR(0x4325b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4325b3:{NFSU2_TR(0x4325b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4325c0:L4325c0:{c.instructions+=4;NFSU2_TR(0x4325c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4325c1:{NFSU2_TR(0x4325c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4325c5:{NFSU2_TR(0x4325c5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80037020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4325cb:{NFSU2_TR(0x4325cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43260f;}}
}
B4325cd:L4325cd:{c.instructions+=4;NFSU2_TR(0x4325cd);
__builtin_memmove((R+0),gp(0x827b80),4);
}
B4325d2:{NFSU2_TR(0x4325d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4325d4:{NFSU2_TR(0x4325d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4325d5:{NFSU2_TR(0x4325d5);
if(r1(R+518)){{goto L4325dc;}}
}
B4325d7:L4325d7:{c.instructions+=2;NFSU2_TR(0x4325d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4325da:{NFSU2_TR(0x4325da);
{goto L4325de;}
}
B4325dc:L4325dc:{c.instructions+=1;NFSU2_TR(0x4325dc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4325de:L4325de:{c.instructions+=2;NFSU2_TR(0x4325de);
w4(R+4,u32(0x827b80ull));
}
B4325e3:{NFSU2_TR(0x4325e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4325e8ull));
TAIL_STATIC(0x431780u,431);
}
B4325e8:L4325e8:{c.instructions+=2;NFSU2_TR(0x4325e8);
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
B4325ea:{NFSU2_TR(0x4325ea);
if(r1(R+518)){{goto L432607;}}
}
B4325ec:L4325ec:{c.instructions+=2;NFSU2_TR(0x4325ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4325ef:{NFSU2_TR(0x4325ef);
}
B4325f0:L4325f0:{c.instructions+=2;NFSU2_TR(0x4325f0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4325f2:{NFSU2_TR(0x4325f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4325f0u);}goto L4325f0;}}
}
B4325f4:L4325f4:{c.instructions+=8;NFSU2_TR(0x4325f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4325f7:{NFSU2_TR(0x4325f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4325fa:{NFSU2_TR(0x4325fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4325fc:{NFSU2_TR(0x4325fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4325ff:{NFSU2_TR(0x4325ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B432601:{NFSU2_TR(0x432601);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432603:{NFSU2_TR(0x432603);
__builtin_memmove((R+4),(R+24),4);
}
B432605:{NFSU2_TR(0x432605);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432607ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B432607:L432607:{c.instructions+=4;NFSU2_TR(0x432607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432608:{NFSU2_TR(0x432608);
w4(R+0,u32(0x1ull));
}
B43260d:{NFSU2_TR(0x43260d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43260e:{NFSU2_TR(0x43260e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43260f:L43260f:{c.instructions+=3;NFSU2_TR(0x43260f);
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
B432611:{NFSU2_TR(0x432611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432612:{NFSU2_TR(0x432612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432620:L432620:{c.instructions+=2;NFSU2_TR(0x432620);
u8 U[4];
w4(U+0,u32(0x7860c8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B432626:{NFSU2_TR(0x432626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432630:L432630:{c.instructions+=2;NFSU2_TR(0x432630);
u8 U[4];
w4(U+0,u32(0x7860ccull));
s4(u32(r4(R+4)),r4(U+0));
}
B432636:{NFSU2_TR(0x432636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432640:L432640:{c.instructions+=6;NFSU2_TR(0x432640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432641:{NFSU2_TR(0x432641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432644:{NFSU2_TR(0x432644);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432645:{NFSU2_TR(0x432645);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432648:{NFSU2_TR(0x432648);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B43264a:{NFSU2_TR(0x43264a);
if(r1(R+518)){{goto L432669;}}
}
B43264c:L43264c:{c.instructions+=4;NFSU2_TR(0x43264c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43264d:{NFSU2_TR(0x43264d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B432651:{NFSU2_TR(0x432651);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432652:{NFSU2_TR(0x432652);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B432656:L432656:{c.instructions+=5;NFSU2_TR(0x432656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432659:{NFSU2_TR(0x432659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43265b:{NFSU2_TR(0x43265b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43265c:{NFSU2_TR(0x43265c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43265d:{NFSU2_TR(0x43265d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432660ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B432660:L432660:{c.instructions+=3;NFSU2_TR(0x432660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432663:{NFSU2_TR(0x432663);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B432665:{NFSU2_TR(0x432665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432656u);}goto L432656;}}
}
B432667:L432667:{c.instructions+=2;NFSU2_TR(0x432667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432668:{NFSU2_TR(0x432668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432669:L432669:{c.instructions+=3;NFSU2_TR(0x432669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43266a:{NFSU2_TR(0x43266a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43266b:{NFSU2_TR(0x43266b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432670:L432670:{c.instructions+=4;NFSU2_TR(0x432670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432673:{NFSU2_TR(0x432673);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432675:{NFSU2_TR(0x432675);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B432678:{NFSU2_TR(0x432678);
if(r1(R+518)){{goto L43267f;}}
}
B43267a:L43267a:{c.instructions+=2;NFSU2_TR(0x43267a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B43267d:{NFSU2_TR(0x43267d);
{goto L432681;}
}
B43267f:L43267f:{c.instructions+=1;NFSU2_TR(0x43267f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B432681:L432681:{c.instructions+=2;NFSU2_TR(0x432681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432682:{NFSU2_TR(0x432682);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432686:L432686:{c.instructions+=2;NFSU2_TR(0x432686);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432688:{NFSU2_TR(0x432688);
if(r1(R+518)){{goto L43268f;}}
}
B43268a:L43268a:{c.instructions+=2;NFSU2_TR(0x43268a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43268d:{NFSU2_TR(0x43268d);
{goto L432691;}
}
B43268f:L43268f:{c.instructions+=1;NFSU2_TR(0x43268f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B432691:L432691:{c.instructions+=2;NFSU2_TR(0x432691);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432693:{NFSU2_TR(0x432693);
if(r1(R+518)){{goto L4326aa;}}
}
B432695:L432695:{c.instructions+=2;NFSU2_TR(0x432695);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B432698:{NFSU2_TR(0x432698);
if(r1(R+518)){{goto L4326ac;}}
}
B43269a:L43269a:{c.instructions+=3;NFSU2_TR(0x43269a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43269d:{NFSU2_TR(0x43269d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43269f:{NFSU2_TR(0x43269f);
if(r1(R+518)){{goto L4326a6;}}
}
B4326a1:L4326a1:{c.instructions+=2;NFSU2_TR(0x4326a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4326a4:{NFSU2_TR(0x4326a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432686u);}goto L432686;}
}
B4326a6:L4326a6:{c.instructions+=2;NFSU2_TR(0x4326a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4326a8:{NFSU2_TR(0x4326a8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432686u);}goto L432686;}
}
B4326aa:L4326aa:{c.instructions+=1;NFSU2_TR(0x4326aa);
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
B4326ac:L4326ac:{c.instructions+=2;NFSU2_TR(0x4326ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4326ad:{NFSU2_TR(0x4326ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4326b0:L4326b0:{c.instructions+=4;NFSU2_TR(0x4326b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4326b3:{NFSU2_TR(0x4326b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4326b5:{NFSU2_TR(0x4326b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4326b8:{NFSU2_TR(0x4326b8);
if(r1(R+518)){{goto L4326bf;}}
}
B4326ba:L4326ba:{c.instructions+=2;NFSU2_TR(0x4326ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4326bd:{NFSU2_TR(0x4326bd);
{goto L4326c1;}
}
B4326bf:L4326bf:{c.instructions+=1;NFSU2_TR(0x4326bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4326c1:L4326c1:{c.instructions+=2;NFSU2_TR(0x4326c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4326c2:{NFSU2_TR(0x4326c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4326c6:L4326c6:{c.instructions+=2;NFSU2_TR(0x4326c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4326c8:{NFSU2_TR(0x4326c8);
if(r1(R+518)){{goto L4326cf;}}
}
B4326ca:L4326ca:{c.instructions+=2;NFSU2_TR(0x4326ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4326cd:{NFSU2_TR(0x4326cd);
{goto L4326d1;}
}
B4326cf:L4326cf:{c.instructions+=1;NFSU2_TR(0x4326cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4326d1:L4326d1:{c.instructions+=2;NFSU2_TR(0x4326d1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4326d3:{NFSU2_TR(0x4326d3);
if(r1(R+518)){{goto L4326ea;}}
}
B4326d5:L4326d5:{c.instructions+=2;NFSU2_TR(0x4326d5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B4326d8:{NFSU2_TR(0x4326d8);
if(r1(R+518)){{goto L4326ec;}}
}
B4326da:L4326da:{c.instructions+=3;NFSU2_TR(0x4326da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4326dd:{NFSU2_TR(0x4326dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4326df:{NFSU2_TR(0x4326df);
if(r1(R+518)){{goto L4326e6;}}
}
B4326e1:L4326e1:{c.instructions+=2;NFSU2_TR(0x4326e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4326e4:{NFSU2_TR(0x4326e4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4326c6u);}goto L4326c6;}
}
B4326e6:L4326e6:{c.instructions+=2;NFSU2_TR(0x4326e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4326e8:{NFSU2_TR(0x4326e8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4326c6u);}goto L4326c6;}
}
B4326ea:L4326ea:{c.instructions+=1;NFSU2_TR(0x4326ea);
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
B4326ec:L4326ec:{c.instructions+=2;NFSU2_TR(0x4326ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4326ed:{NFSU2_TR(0x4326ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4326f0:L4326f0:{c.instructions+=11;NFSU2_TR(0x4326f0);
__builtin_memmove((R+8),gp(0x827ba8),4);
}
B4326f6:{NFSU2_TR(0x4326f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4326fa:{NFSU2_TR(0x4326fa);
__builtin_memmove((R+4),gp(0x890080),4);
}
B432700:{NFSU2_TR(0x432700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432701:{NFSU2_TR(0x432701);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432702:{NFSU2_TR(0x432702);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432706:{NFSU2_TR(0x432706);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B432707:{NFSU2_TR(0x432707);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B43270a:{NFSU2_TR(0x43270a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43270d:{NFSU2_TR(0x43270d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43270e:{NFSU2_TR(0x43270e);
if(r1(R+518)){{goto L432718;}}
}
B432710:L432710:{c.instructions+=2;NFSU2_TR(0x432710);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B432714:{NFSU2_TR(0x432714);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432718;}}
}
B432716:L432716:{c.instructions+=1;NFSU2_TR(0x432716);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B432718:L432718:{c.instructions+=3;NFSU2_TR(0x432718);
__builtin_memmove((R+8),gp(0x827bbc),4);
}
B43271e:{NFSU2_TR(0x43271e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432721:{NFSU2_TR(0x432721);
if(r1(R+518)){{goto L43272e;}}
}
B432723:L432723:{c.instructions+=2;NFSU2_TR(0x432723);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B432727:{NFSU2_TR(0x432727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43272e;}}
}
B432729:L432729:{c.instructions+=1;NFSU2_TR(0x432729);
w4(R+12,u32(0x1ull));
}
B43272e:L43272e:{c.instructions+=3;NFSU2_TR(0x43272e);
__builtin_memmove((R+8),gp(0x827bd0),4);
}
B432734:{NFSU2_TR(0x432734);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432737:{NFSU2_TR(0x432737);
if(r1(R+518)){{goto L432744;}}
}
B432739:L432739:{c.instructions+=2;NFSU2_TR(0x432739);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B43273d:{NFSU2_TR(0x43273d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432744;}}
}
B43273f:L43273f:{c.instructions+=1;NFSU2_TR(0x43273f);
w4(R+12,u32(0x2ull));
}
B432744:L432744:{c.instructions+=3;NFSU2_TR(0x432744);
__builtin_memmove((R+8),gp(0x827be4),4);
}
B43274a:{NFSU2_TR(0x43274a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43274d:{NFSU2_TR(0x43274d);
if(r1(R+518)){{goto L43275a;}}
}
B43274f:L43274f:{c.instructions+=2;NFSU2_TR(0x43274f);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B432753:{NFSU2_TR(0x432753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43275a;}}
}
B432755:L432755:{c.instructions+=1;NFSU2_TR(0x432755);
w4(R+12,u32(0x3ull));
}
B43275a:L43275a:{c.instructions+=3;NFSU2_TR(0x43275a);
__builtin_memmove((R+8),gp(0x827bf8),4);
}
B432760:{NFSU2_TR(0x432760);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432763:{NFSU2_TR(0x432763);
if(r1(R+518)){{goto L432770;}}
}
B432765:L432765:{c.instructions+=2;NFSU2_TR(0x432765);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B432769:{NFSU2_TR(0x432769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432770;}}
}
B43276b:L43276b:{c.instructions+=1;NFSU2_TR(0x43276b);
w4(R+12,u32(0x4ull));
}
B432770:L432770:{c.instructions+=3;NFSU2_TR(0x432770);
__builtin_memmove((R+8),gp(0x827c0c),4);
}
B432776:{NFSU2_TR(0x432776);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432779:{NFSU2_TR(0x432779);
if(r1(R+518)){{goto L432786;}}
}
B43277b:L43277b:{c.instructions+=2;NFSU2_TR(0x43277b);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B43277f:{NFSU2_TR(0x43277f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432786;}}
}
B432781:L432781:{c.instructions+=1;NFSU2_TR(0x432781);
w4(R+12,u32(0x5ull));
}
B432786:L432786:{c.instructions+=3;NFSU2_TR(0x432786);
__builtin_memmove((R+8),gp(0x827c20),4);
}
B43278c:{NFSU2_TR(0x43278c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43278f:{NFSU2_TR(0x43278f);
if(r1(R+518)){{goto L43279c;}}
}
B432791:L432791:{c.instructions+=2;NFSU2_TR(0x432791);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B432795:{NFSU2_TR(0x432795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43279c;}}
}
B432797:L432797:{c.instructions+=1;NFSU2_TR(0x432797);
w4(R+12,u32(0x6ull));
}
B43279c:L43279c:{c.instructions+=3;NFSU2_TR(0x43279c);
__builtin_memmove((R+8),gp(0x827c34),4);
}
B4327a2:{NFSU2_TR(0x4327a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4327a5:{NFSU2_TR(0x4327a5);
if(r1(R+518)){{goto L4327b2;}}
}
B4327a7:L4327a7:{c.instructions+=2;NFSU2_TR(0x4327a7);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4327ab:{NFSU2_TR(0x4327ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4327b2;}}
}
B4327ad:L4327ad:{c.instructions+=1;NFSU2_TR(0x4327ad);
w4(R+12,u32(0x7ull));
}
B4327b2:L4327b2:{c.instructions+=2;NFSU2_TR(0x4327b2);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4327b4:{NFSU2_TR(0x4327b4);
if(r1(R+518)){{goto L43284e;}}
}
B4327ba:L4327ba:{c.instructions+=23;NFSU2_TR(0x4327ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4327bd:{NFSU2_TR(0x4327bd);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4327c4:{NFSU2_TR(0x4327c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4327cb:{NFSU2_TR(0x4327cb);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4327d2:{NFSU2_TR(0x4327d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4327d9:{NFSU2_TR(0x4327d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4327e0:{NFSU2_TR(0x4327e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4327e3:{NFSU2_TR(0x4327e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4327ea:{NFSU2_TR(0x4327ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4327f1:{NFSU2_TR(0x4327f1);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4327f8:{NFSU2_TR(0x4327f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4327ff:{NFSU2_TR(0x4327ff);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432806:{NFSU2_TR(0x432806);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43280d:{NFSU2_TR(0x43280d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43280f:{NFSU2_TR(0x43280f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B432816:{NFSU2_TR(0x432816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43281d:{NFSU2_TR(0x43281d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B432824:{NFSU2_TR(0x432824);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43282b:{NFSU2_TR(0x43282b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B432832:{NFSU2_TR(0x432832);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432839:{NFSU2_TR(0x432839);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432840:{NFSU2_TR(0x432840);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B432847:{NFSU2_TR(0x432847);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43284e:L43284e:{c.instructions+=4;NFSU2_TR(0x43284e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43284f:{NFSU2_TR(0x43284f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432850:{NFSU2_TR(0x432850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432851:{NFSU2_TR(0x432851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432860:L432860:{c.instructions+=6;NFSU2_TR(0x432860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432861:{NFSU2_TR(0x432861);
__builtin_memmove((R+24),gp(0x890118),4);
}
B432867:{NFSU2_TR(0x432867);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43286a:{NFSU2_TR(0x43286a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43286c:{NFSU2_TR(0x43286c);
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
B43286e:{NFSU2_TR(0x43286e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4328a8;}}
}
B432870:L432870:{c.instructions+=3;NFSU2_TR(0x432870);
__builtin_memmove((R+8),gp(0x890080),4);
}
B432876:{NFSU2_TR(0x432876);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B432879:{NFSU2_TR(0x432879);
__builtin_memmove((R+16),(R+16),4);
}
B432880:L432880:{c.instructions+=5;NFSU2_TR(0x432880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B432882:{NFSU2_TR(0x432882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432885:{NFSU2_TR(0x432885);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B432888:{NFSU2_TR(0x432888);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43288a:{NFSU2_TR(0x43288a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43289d;}}
}
B43288c:L43288c:{c.instructions+=2;NFSU2_TR(0x43288c);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x8ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43288e:{NFSU2_TR(0x43288e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43289d;}}
}
B432890:L432890:{c.instructions+=3;NFSU2_TR(0x432890);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B432893:{NFSU2_TR(0x432893);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B432896:{NFSU2_TR(0x432896);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b94ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43289d:L43289d:{c.instructions+=5;NFSU2_TR(0x43289d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4328a0:{NFSU2_TR(0x4328a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4328a1:{NFSU2_TR(0x4328a1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4328a4:{NFSU2_TR(0x4328a4);
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
B4328a6:{NFSU2_TR(0x4328a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432880u);}goto L432880;}}
}
B4328a8:L4328a8:{c.instructions+=2;NFSU2_TR(0x4328a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4328a9:{NFSU2_TR(0x4328a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4328b0:L4328b0:{c.instructions+=5;NFSU2_TR(0x4328b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4328b1:{NFSU2_TR(0x4328b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4328b2:{NFSU2_TR(0x4328b2);
__builtin_memmove((R+24),(R+4),4);
}
B4328b4:{NFSU2_TR(0x4328b4);
w4(R+0,u32(0x827ba8ull));
}
B4328b9:{NFSU2_TR(0x4328b9);
__builtin_memmove((R+16),(R+16),4);
}
B4328c0:L4328c0:{c.instructions+=4;NFSU2_TR(0x4328c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B4328c6:{NFSU2_TR(0x4328c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B4328c9:{NFSU2_TR(0x4328c9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x827c48ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x827c48ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4328ce:{NFSU2_TR(0x4328ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4328c0u);}goto L4328c0;}}
}
B4328d0:L4328d0:{c.instructions+=6;NFSU2_TR(0x4328d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4328d3:{NFSU2_TR(0x4328d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4328d6:{NFSU2_TR(0x4328d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4328d9:{NFSU2_TR(0x4328d9);
w4(R+28,u32(0x2ull));
}
B4328de:{NFSU2_TR(0x4328de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4328e0:{NFSU2_TR(0x4328e0);
if(r1(R+518)){{goto L4328ec;}}
}
B4328e2:L4328e2:{c.instructions+=2;NFSU2_TR(0x4328e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4328e5:{NFSU2_TR(0x4328e5);
if(r1(R+518)){{goto L4328ec;}}
}
B4328e7:L4328e7:{c.instructions+=2;NFSU2_TR(0x4328e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4328ea:{NFSU2_TR(0x4328ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432901;}}
}
B4328ec:L4328ec:{c.instructions+=2;NFSU2_TR(0x4328ec);
__builtin_memmove((R+4),(R+24),4);
}
B4328ee:{NFSU2_TR(0x4328ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4328f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432860u);}goto L432860;}
}
B4328f3:L4328f3:{c.instructions+=4;NFSU2_TR(0x4328f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4328f5:{NFSU2_TR(0x4328f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4328f7:{NFSU2_TR(0x4328f7);
__builtin_memmove((R+4),(R+24),4);
}
B4328f9:{NFSU2_TR(0x4328f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4328feull));
TAIL_STATIC(0x4307f0u,430);
}
B4328fe:L4328fe:{c.instructions+=3;NFSU2_TR(0x4328fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4328ff:{NFSU2_TR(0x4328ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432900:{NFSU2_TR(0x432900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432901:L432901:{c.instructions+=2;NFSU2_TR(0x432901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432903:{NFSU2_TR(0x432903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432939;}}
}
B432905:L432905:{c.instructions+=2;NFSU2_TR(0x432905);
__builtin_memmove((R+4),(R+24),4);
}
B432907:{NFSU2_TR(0x432907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43290cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432860u);}goto L432860;}
}
B43290c:L43290c:{c.instructions+=3;NFSU2_TR(0x43290c);
__builtin_memmove((R+0),gp(0x865044),4);
}
B432911:{NFSU2_TR(0x432911);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432913:{NFSU2_TR(0x432913);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43291f;}}
}
B432915:L432915:{c.instructions+=4;NFSU2_TR(0x432915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432916:{NFSU2_TR(0x432916);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432918:{NFSU2_TR(0x432918);
__builtin_memmove((R+4),(R+24),4);
}
B43291a:{NFSU2_TR(0x43291a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43291full));
TAIL_STATIC(0x4307f0u,430);
}
B43291f:L43291f:{c.instructions+=3;NFSU2_TR(0x43291f);
__builtin_memmove((R+0),gp(0x865048),4);
}
B432924:{NFSU2_TR(0x432924);
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
B432926:{NFSU2_TR(0x432926);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L432a67;}}
}
B43292c:L43292c:{c.instructions+=4;NFSU2_TR(0x43292c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43292d:{NFSU2_TR(0x43292d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43292f:{NFSU2_TR(0x43292f);
__builtin_memmove((R+4),(R+24),4);
}
B432931:{NFSU2_TR(0x432931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432936ull));
TAIL_STATIC(0x4307f0u,430);
}
B432936:L432936:{c.instructions+=3;NFSU2_TR(0x432936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432937:{NFSU2_TR(0x432937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432938:{NFSU2_TR(0x432938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432939:L432939:{c.instructions+=2;NFSU2_TR(0x432939);
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
B43293c:{NFSU2_TR(0x43293c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a67;}}
}
B432942:L432942:{c.instructions+=4;NFSU2_TR(0x432942);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B432947:{NFSU2_TR(0x432947);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432949:{NFSU2_TR(0x432949);
__builtin_memmove((R+4),(R+24),4);
}
B43294b:{NFSU2_TR(0x43294b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L432954;}}
}
B43294d:L43294d:{c.instructions+=3;NFSU2_TR(0x43294d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43294e:{NFSU2_TR(0x43294e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43294f:{NFSU2_TR(0x43294f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432860u);}goto L432860;}
}
B432954:L432954:{c.instructions+=1;NFSU2_TR(0x432954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432959ull));
TAIL_STATIC(0x430960u,430);
}
B432959:L432959:{c.instructions+=2;NFSU2_TR(0x432959);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432960:{NFSU2_TR(0x432960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4329b9;}}
}
B432962:L432962:{c.instructions+=2;NFSU2_TR(0x432962);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1262ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43296c:{NFSU2_TR(0x43296c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4328f3u);}goto L4328f3;}}
}
B43296e:L43296e:{c.instructions+=2;NFSU2_TR(0x43296e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc30ull))));
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
B432974:{NFSU2_TR(0x432974);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a67;}}
}
B43297a:L43297a:{c.instructions+=6;NFSU2_TR(0x43297a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432980:{NFSU2_TR(0x432980);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B432985:{NFSU2_TR(0x432985);
u8 U[13];
w4(U+0,u32(u32(u32(0x261ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B43298c:{NFSU2_TR(0x43298c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43298e:{NFSU2_TR(0x43298e);
u8 U[12];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B432995:{NFSU2_TR(0x432995);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4329a8;}}
}
B432997:L432997:{c.instructions+=5;NFSU2_TR(0x432997);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B43299b:{NFSU2_TR(0x43299b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43299c:{NFSU2_TR(0x43299c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43299e:{NFSU2_TR(0x43299e);
__builtin_memmove((R+4),(R+24),4);
}
B4329a0:{NFSU2_TR(0x4329a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4329a5ull));
TAIL_STATIC(0x4307f0u,430);
}
B4329a5:L4329a5:{c.instructions+=3;NFSU2_TR(0x4329a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4329a6:{NFSU2_TR(0x4329a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4329a7:{NFSU2_TR(0x4329a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4329a8:L4329a8:{c.instructions+=5;NFSU2_TR(0x4329a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4329ac:{NFSU2_TR(0x4329ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4329ad:{NFSU2_TR(0x4329ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4329af:{NFSU2_TR(0x4329af);
__builtin_memmove((R+4),(R+24),4);
}
B4329b1:{NFSU2_TR(0x4329b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4329b6ull));
TAIL_STATIC(0x4307f0u,430);
}
B4329b6:L4329b6:{c.instructions+=3;NFSU2_TR(0x4329b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4329b7:{NFSU2_TR(0x4329b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4329b8:{NFSU2_TR(0x4329b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4329b9:L4329b9:{c.instructions+=2;NFSU2_TR(0x4329b9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc30ull))));
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
B4329bf:{NFSU2_TR(0x4329bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a67;}}
}
B4329c5:L4329c5:{c.instructions+=8;NFSU2_TR(0x4329c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4329cb:{NFSU2_TR(0x4329cb);
__builtin_memmove((R+4),gp(0x827ad4),4);
}
B4329d1:{NFSU2_TR(0x4329d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4329d8:{NFSU2_TR(0x4329d8);
__builtin_memmove((R+0),gp(0x851044),4);
}
B4329dd:{NFSU2_TR(0x4329dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4329e0:{NFSU2_TR(0x4329e0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4329e6:{NFSU2_TR(0x4329e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4329e7:{NFSU2_TR(0x4329e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4329ecull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4329ec:L4329ec:{c.instructions+=4;NFSU2_TR(0x4329ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4329ef:{NFSU2_TR(0x4329ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4329f3:{NFSU2_TR(0x4329f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4329f6:{NFSU2_TR(0x4329f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a48;}}
}
B4329f8:L4329f8:{c.instructions+=4;NFSU2_TR(0x4329f8);
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
B4329fa:{NFSU2_TR(0x4329fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4329fd:{NFSU2_TR(0x4329fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432a00:{NFSU2_TR(0x432a00);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L432a67;}}
}
B432a02:L432a02:{c.instructions+=2;NFSU2_TR(0x432a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432a04:{NFSU2_TR(0x432a04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a25;}}
}
B432a06:L432a06:{c.instructions+=5;NFSU2_TR(0x432a06);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B432a0a:{NFSU2_TR(0x432a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a0b:{NFSU2_TR(0x432a0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a0d:{NFSU2_TR(0x432a0d);
__builtin_memmove((R+4),(R+24),4);
}
B432a0f:{NFSU2_TR(0x432a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a14ull));
TAIL_STATIC(0x4307f0u,430);
}
B432a14:L432a14:{c.instructions+=5;NFSU2_TR(0x432a14);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B432a18:{NFSU2_TR(0x432a18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a19:{NFSU2_TR(0x432a19);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a1b:{NFSU2_TR(0x432a1b);
__builtin_memmove((R+4),(R+24),4);
}
B432a1d:{NFSU2_TR(0x432a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a22ull));
TAIL_STATIC(0x4307f0u,430);
}
B432a22:L432a22:{c.instructions+=3;NFSU2_TR(0x432a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432a23:{NFSU2_TR(0x432a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432a24:{NFSU2_TR(0x432a24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432a25:L432a25:{c.instructions+=2;NFSU2_TR(0x432a25);
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
B432a28:{NFSU2_TR(0x432a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432a67;}}
}
B432a2a:L432a2a:{c.instructions+=5;NFSU2_TR(0x432a2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B432a2e:{NFSU2_TR(0x432a2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a2f:{NFSU2_TR(0x432a2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a30:{NFSU2_TR(0x432a30);
__builtin_memmove((R+4),(R+24),4);
}
B432a32:{NFSU2_TR(0x432a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a37ull));
TAIL_STATIC(0x4307f0u,430);
}
B432a37:L432a37:{c.instructions+=5;NFSU2_TR(0x432a37);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B432a3b:{NFSU2_TR(0x432a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a3c:{NFSU2_TR(0x432a3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a3e:{NFSU2_TR(0x432a3e);
__builtin_memmove((R+4),(R+24),4);
}
B432a40:{NFSU2_TR(0x432a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a45ull));
TAIL_STATIC(0x4307f0u,430);
}
B432a45:L432a45:{c.instructions+=3;NFSU2_TR(0x432a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432a46:{NFSU2_TR(0x432a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432a47:{NFSU2_TR(0x432a47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432a48:L432a48:{c.instructions+=2;NFSU2_TR(0x432a48);
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
B432a4a:{NFSU2_TR(0x432a4a);
if(r1(R+519)){{goto L432a67;}}
}
B432a4c:L432a4c:{c.instructions+=5;NFSU2_TR(0x432a4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B432a50:{NFSU2_TR(0x432a50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a51:{NFSU2_TR(0x432a51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a52:{NFSU2_TR(0x432a52);
__builtin_memmove((R+4),(R+24),4);
}
B432a54:{NFSU2_TR(0x432a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4326f0u);}goto L4326f0;}
}
B432a59:L432a59:{c.instructions+=5;NFSU2_TR(0x432a59);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B432a5d:{NFSU2_TR(0x432a5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a5e:{NFSU2_TR(0x432a5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a60:{NFSU2_TR(0x432a60);
__builtin_memmove((R+4),(R+24),4);
}
B432a62:{NFSU2_TR(0x432a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a67ull));
TAIL_STATIC(0x4307f0u,430);
}
B432a67:L432a67:{c.instructions+=3;NFSU2_TR(0x432a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432a68:{NFSU2_TR(0x432a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432a69:{NFSU2_TR(0x432a69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432a70:L432a70:{c.instructions+=14;NFSU2_TR(0x432a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a71:{NFSU2_TR(0x432a71);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a76:{NFSU2_TR(0x432a76);
__builtin_memmove((R+24),(R+4),4);
}
B432a78:{NFSU2_TR(0x432a78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B432a7a:{NFSU2_TR(0x432a7a);
u8 U[4];
w4(U+0,u32(0x430b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a7f:{NFSU2_TR(0x432a7f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a81:{NFSU2_TR(0x432a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432a84:{NFSU2_TR(0x432a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432a87:{NFSU2_TR(0x432a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432a8a:{NFSU2_TR(0x432a8a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a8c:{NFSU2_TR(0x432a8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B432a8f:{NFSU2_TR(0x432a8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432a90:{NFSU2_TR(0x432a90);
u8 U[4];
w4(U+0,u32(0x7860d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B432a96:{NFSU2_TR(0x432a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432a9bull));
TAIL_STATIC(0x75c461u,75c);
}
B432a9b:L432a9b:{c.instructions+=3;NFSU2_TR(0x432a9b);
__builtin_memmove((R+0),(R+24),4);
}
B432a9d:{NFSU2_TR(0x432a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432a9e:{NFSU2_TR(0x432a9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432aa0:L432aa0:{c.instructions+=7;NFSU2_TR(0x432aa0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432aa5:{NFSU2_TR(0x432aa5);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432aa7:{NFSU2_TR(0x432aa7);
u8 U[4];
w4(U+0,u32(0x7860d0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B432aad:{NFSU2_TR(0x432aad);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432aaf:{NFSU2_TR(0x432aaf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B432ab2:{NFSU2_TR(0x432ab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ab3:{NFSU2_TR(0x432ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ab8ull));
TAIL_STATIC(0x75c401u,75c);
}
B432ab8:L432ab8:{c.instructions+=1;NFSU2_TR(0x432ab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432ac0:L432ac0:{c.instructions+=15;NFSU2_TR(0x432ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432ac6:{NFSU2_TR(0x432ac6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ac8:{NFSU2_TR(0x432ac8);
u8 U[4];
w4(U+0,u32(0x771c3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432acd:{NFSU2_TR(0x432acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ace:{NFSU2_TR(0x432ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432ad2:{NFSU2_TR(0x432ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432ad9:{NFSU2_TR(0x432ad9);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x2e8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x2e8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B432adf:{NFSU2_TR(0x432adf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ae0:{NFSU2_TR(0x432ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ae1:{NFSU2_TR(0x432ae1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ae2:{NFSU2_TR(0x432ae2);
__builtin_memmove((R+28),(R+4),4);
}
B432ae4:{NFSU2_TR(0x432ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb08ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432aea:{NFSU2_TR(0x432aea);
__builtin_memmove((R+24),gp(0x827d98),4);
}
B432af0:{NFSU2_TR(0x432af0);
w4(R+4,u32(0x827d98ull));
}
B432af5:{NFSU2_TR(0x432af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432afaull));
TAIL_STATIC(0x502fd0u,502);
}
B432afa:L432afa:{c.instructions+=2;NFSU2_TR(0x432afa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432afc:{NFSU2_TR(0x432afc);
if(r1(R+518)){{goto L432b20;}}
}
B432afe:L432afe:{c.instructions+=1;NFSU2_TR(0x432afe);
u8 U[8];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432b05:L432b05:{c.instructions+=2;NFSU2_TR(0x432b05);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B432b08:{NFSU2_TR(0x432b08);
if(r1(R+518)){{goto L432b17;}}
}
B432b0a:L432b0a:{c.instructions+=3;NFSU2_TR(0x432b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B432b0c:{NFSU2_TR(0x432b0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432b0e:{NFSU2_TR(0x432b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432b05u);}goto L432b05;}}
}
B432b10:L432b10:{c.instructions+=2;NFSU2_TR(0x432b10);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B432b12:{NFSU2_TR(0x432b12);
{goto L432bdb;}
}
B432b17:L432b17:{c.instructions+=4;NFSU2_TR(0x432b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B432b1a:{NFSU2_TR(0x432b1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B432b1c:{NFSU2_TR(0x432b1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432b1e:{NFSU2_TR(0x432b1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432b27;}}
}
B432b20:L432b20:{c.instructions+=2;NFSU2_TR(0x432b20);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B432b22:{NFSU2_TR(0x432b22);
{goto L432bdb;}
}
B432b27:L432b27:{c.instructions+=6;NFSU2_TR(0x432b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b28:{NFSU2_TR(0x432b28);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432b2c:{NFSU2_TR(0x432b2c);
u8 U[4];
w4(U+0,u32(0x7860e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b31:{NFSU2_TR(0x432b31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b32:{NFSU2_TR(0x432b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432b35:{NFSU2_TR(0x432b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432b3aull));
TAIL_STATIC(0x4400d0u,440);
}
B432b3a:L432b3a:{c.instructions+=3;NFSU2_TR(0x432b3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B432b3e:{NFSU2_TR(0x432b3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b3f:{NFSU2_TR(0x432b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432b44ull));
TAIL_STATIC(0x57cac0u,57c);
}
B432b44:L432b44:{c.instructions+=3;NFSU2_TR(0x432b44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B432b47:{NFSU2_TR(0x432b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432b49:{NFSU2_TR(0x432b49);
if(r1(R+518)){{goto L432bd9;}}
}
B432b4f:L432b4f:{c.instructions+=5;NFSU2_TR(0x432b4f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b51:{NFSU2_TR(0x432b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B432b55:{NFSU2_TR(0x432b55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b56:{NFSU2_TR(0x432b56);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432b5d:{NFSU2_TR(0x432b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432b62ull));
TAIL_STATIC(0x440840u,440);
}
B432b62:L432b62:{c.instructions+=4;NFSU2_TR(0x432b62);
u8 U[4];
w4(U+0,u32(0x7860d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b67:{NFSU2_TR(0x432b67);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432b6e:{NFSU2_TR(0x432b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432b75:{NFSU2_TR(0x432b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432b7aull));
TAIL_STATIC(0x43e4a0u,43e);
}
B432b7a:L432b7a:{c.instructions+=2;NFSU2_TR(0x432b7a);
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
B432b7c:{NFSU2_TR(0x432b7c);
if(r1(R+518)){{goto L432ba4;}}
}
B432b7e:L432b7e:{c.instructions+=1;NFSU2_TR(0x432b7e);
__builtin_memmove((R+28),(R+28),4);
}
B432b80:L432b80:{c.instructions+=5;NFSU2_TR(0x432b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B432b82:{NFSU2_TR(0x432b82);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B432b89:{NFSU2_TR(0x432b89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b8a:{NFSU2_TR(0x432b8a);
__builtin_memmove((R+4),(R+28),4);
}
B432b8c:{NFSU2_TR(0x432b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432b8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B432b8f:L432b8f:{c.instructions+=3;NFSU2_TR(0x432b8f);
u8 U[4];
w4(U+0,u32(0x7860d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432b94:{NFSU2_TR(0x432b94);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432b9b:{NFSU2_TR(0x432b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ba0ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B432ba0:L432ba0:{c.instructions+=2;NFSU2_TR(0x432ba0);
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
B432ba2:{NFSU2_TR(0x432ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432b80u);}goto L432b80;}}
}
B432ba4:L432ba4:{c.instructions+=7;NFSU2_TR(0x432ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432ba7:{NFSU2_TR(0x432ba7);
u8 U[4];
w4(U+0,u32(0x430db0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432bac:{NFSU2_TR(0x432bac);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432bae:{NFSU2_TR(0x432bae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432baf:{NFSU2_TR(0x432baf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B432bb2:{NFSU2_TR(0x432bb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432bb3:{NFSU2_TR(0x432bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432bb8ull));
TAIL_STATIC(0x5d40f0u,5d4);
}
B432bb8:L432bb8:{c.instructions+=4;NFSU2_TR(0x432bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B432bbb:{NFSU2_TR(0x432bbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432bc2:{NFSU2_TR(0x432bc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B432bcd:{NFSU2_TR(0x432bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432bd2ull));
TAIL_STATIC(0x43e060u,43e);
}
B432bd2:L432bd2:{c.instructions+=1;NFSU2_TR(0x432bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432bd7ull));
TAIL_STATIC(0x575320u,575);
}
B432bd7:L432bd7:{c.instructions+=1;NFSU2_TR(0x432bd7);
w1(R+12,u8(0x1ull));
}
B432bd9:L432bd9:{c.instructions+=1;NFSU2_TR(0x432bd9);
__builtin_memmove((R+0),(R+12),1);
}
B432bdb:L432bdb:{c.instructions+=7;NFSU2_TR(0x432bdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432be2:{NFSU2_TR(0x432be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432be3:{NFSU2_TR(0x432be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432be4:{NFSU2_TR(0x432be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432be5:{NFSU2_TR(0x432be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432bec:{NFSU2_TR(0x432bec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2f4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2f4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2f4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B432bf2:{NFSU2_TR(0x432bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432c00:L432c00:{c.instructions+=17;NFSU2_TR(0x432c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432c06:{NFSU2_TR(0x432c06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c08:{NFSU2_TR(0x432c08);
u8 U[4];
w4(U+0,u32(0x771c3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c0d:{NFSU2_TR(0x432c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c0e:{NFSU2_TR(0x432c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432c12:{NFSU2_TR(0x432c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432c19:{NFSU2_TR(0x432c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2e8ull))));
}
B432c1f:{NFSU2_TR(0x432c1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c20:{NFSU2_TR(0x432c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c21:{NFSU2_TR(0x432c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c22:{NFSU2_TR(0x432c22);
__builtin_memmove((R+24),(R+4),4);
}
B432c24:{NFSU2_TR(0x432c24);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432c28:{NFSU2_TR(0x432c28);
u8 U[4];
w4(U+0,u32(0x7860f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c2d:{NFSU2_TR(0x432c2d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B432c2f:{NFSU2_TR(0x432c2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c30:{NFSU2_TR(0x432c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432c33:{NFSU2_TR(0x432c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432c38ull));
TAIL_STATIC(0x4400d0u,440);
}
B432c38:L432c38:{c.instructions+=3;NFSU2_TR(0x432c38);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B432c3c:{NFSU2_TR(0x432c3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c3d:{NFSU2_TR(0x432c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432c42ull));
TAIL_STATIC(0x57cac0u,57c);
}
B432c42:L432c42:{c.instructions+=3;NFSU2_TR(0x432c42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B432c45:{NFSU2_TR(0x432c45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432c47:{NFSU2_TR(0x432c47);
if(r1(R+518)){{goto L432cdb;}}
}
B432c4d:L432c4d:{c.instructions+=5;NFSU2_TR(0x432c4d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c4f:{NFSU2_TR(0x432c4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B432c53:{NFSU2_TR(0x432c53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c54:{NFSU2_TR(0x432c54);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432c5b:{NFSU2_TR(0x432c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432c60ull));
TAIL_STATIC(0x440840u,440);
}
B432c60:L432c60:{c.instructions+=4;NFSU2_TR(0x432c60);
u8 U[4];
w4(U+0,u32(0x7860d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c65:{NFSU2_TR(0x432c65);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432c6c:{NFSU2_TR(0x432c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432c73:{NFSU2_TR(0x432c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432c78ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B432c78:L432c78:{c.instructions+=2;NFSU2_TR(0x432c78);
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
B432c7a:{NFSU2_TR(0x432c7a);
if(r1(R+518)){{goto L432ca4;}}
}
B432c7c:L432c7c:{c.instructions+=1;NFSU2_TR(0x432c7c);
__builtin_memmove((R+16),(R+16),4);
}
B432c80:L432c80:{c.instructions+=5;NFSU2_TR(0x432c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B432c82:{NFSU2_TR(0x432c82);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B432c89:{NFSU2_TR(0x432c89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c8a:{NFSU2_TR(0x432c8a);
__builtin_memmove((R+4),(R+24),4);
}
B432c8c:{NFSU2_TR(0x432c8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432c8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B432c8f:L432c8f:{c.instructions+=3;NFSU2_TR(0x432c8f);
u8 U[4];
w4(U+0,u32(0x7860d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432c94:{NFSU2_TR(0x432c94);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432c9b:{NFSU2_TR(0x432c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ca0ull));
TAIL_STATIC(0x43e4a0u,43e);
}
B432ca0:L432ca0:{c.instructions+=2;NFSU2_TR(0x432ca0);
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
B432ca2:{NFSU2_TR(0x432ca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432c80u);}goto L432c80;}}
}
B432ca4:L432ca4:{c.instructions+=7;NFSU2_TR(0x432ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432ca7:{NFSU2_TR(0x432ca7);
u8 U[4];
w4(U+0,u32(0x430db0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432cac:{NFSU2_TR(0x432cac);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432cae:{NFSU2_TR(0x432cae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432caf:{NFSU2_TR(0x432caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B432cb2:{NFSU2_TR(0x432cb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432cb3:{NFSU2_TR(0x432cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432cb8ull));
TAIL_STATIC(0x5d40f0u,5d4);
}
B432cb8:L432cb8:{c.instructions+=4;NFSU2_TR(0x432cb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B432cbb:{NFSU2_TR(0x432cbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B432cc2:{NFSU2_TR(0x432cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B432ccd:{NFSU2_TR(0x432ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432cd2ull));
TAIL_STATIC(0x43e060u,43e);
}
B432cd2:L432cd2:{c.instructions+=1;NFSU2_TR(0x432cd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432cd7ull));
TAIL_STATIC(0x575320u,575);
}
B432cd7:L432cd7:{c.instructions+=2;NFSU2_TR(0x432cd7);
w1(R+0,u8(0x1ull));
}
B432cd9:{NFSU2_TR(0x432cd9);
{goto L432cdd;}
}
B432cdb:L432cdb:{c.instructions+=1;NFSU2_TR(0x432cdb);
__builtin_memmove((R+0),(R+12),1);
}
B432cdd:L432cdd:{c.instructions+=7;NFSU2_TR(0x432cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432ce4:{NFSU2_TR(0x432ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb08ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432cea:{NFSU2_TR(0x432cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432ceb:{NFSU2_TR(0x432ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432cec:{NFSU2_TR(0x432cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432cf3:{NFSU2_TR(0x432cf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2f4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2f4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2f4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B432cf9:{NFSU2_TR(0x432cf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432d00:L432d00:{c.instructions+=12;NFSU2_TR(0x432d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B432d03:{NFSU2_TR(0x432d03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d04:{NFSU2_TR(0x432d04);
__builtin_memmove((R+12),(R+4),4);
}
B432d06:{NFSU2_TR(0x432d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432d09:{NFSU2_TR(0x432d09);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B432d0c:{NFSU2_TR(0x432d0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d0d:{NFSU2_TR(0x432d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d0e:{NFSU2_TR(0x432d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B432d12:{NFSU2_TR(0x432d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d13:{NFSU2_TR(0x432d13);
__builtin_memmove((R+4),(R+24),4);
}
B432d15:{NFSU2_TR(0x432d15);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B432d19:{NFSU2_TR(0x432d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d1eull));
TAIL_STATIC(0x440250u,440);
}
B432d1e:L432d1e:{c.instructions+=3;NFSU2_TR(0x432d1e);
__builtin_memmove((R+4),(R+24),4);
}
B432d20:{NFSU2_TR(0x432d20);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432d23:{NFSU2_TR(0x432d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d28ull));
TAIL_STATIC(0x440160u,440);
}
B432d28:L432d28:{c.instructions+=2;NFSU2_TR(0x432d28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d29:{NFSU2_TR(0x432d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d2eull));
TAIL_STATIC(0x430b20u,430);
}
B432d2e:L432d2e:{c.instructions+=4;NFSU2_TR(0x432d2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B432d31:{NFSU2_TR(0x432d31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432d34:{NFSU2_TR(0x432d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B432d36:{NFSU2_TR(0x432d36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432d82;}}
}
B432d38:L432d38:{c.instructions+=2;NFSU2_TR(0x432d38);
__builtin_memmove((R+4),(R+24),4);
}
B432d3a:{NFSU2_TR(0x432d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d3full));
TAIL_STATIC(0x4401c0u,440);
}
B432d3f:L432d3f:{c.instructions+=2;NFSU2_TR(0x432d3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432d42:{NFSU2_TR(0x432d42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L432d47;}}
}
B432d44:L432d44:{c.instructions+=1;NFSU2_TR(0x432d44);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B432d47:L432d47:{c.instructions+=3;NFSU2_TR(0x432d47);
__builtin_memmove((R+4),(R+24),4);
}
B432d49:{NFSU2_TR(0x432d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432d4c:{NFSU2_TR(0x432d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d51ull));
TAIL_STATIC(0x440160u,440);
}
B432d51:L432d51:{c.instructions+=2;NFSU2_TR(0x432d51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432d52:{NFSU2_TR(0x432d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d57ull));
TAIL_STATIC(0x430c90u,430);
}
B432d57:L432d57:{c.instructions+=4;NFSU2_TR(0x432d57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B432d5a:{NFSU2_TR(0x432d5a);
__builtin_memmove((R+4),(R+24),4);
}
B432d5c:{NFSU2_TR(0x432d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432d5f:{NFSU2_TR(0x432d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d64ull));
TAIL_STATIC(0x440250u,440);
}
B432d64:L432d64:{c.instructions+=3;NFSU2_TR(0x432d64);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432d67:{NFSU2_TR(0x432d67);
__builtin_memmove((R+4),(R+24),4);
}
B432d69:{NFSU2_TR(0x432d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d6eull));
TAIL_STATIC(0x4401c0u,440);
}
B432d6e:L432d6e:{c.instructions+=10;NFSU2_TR(0x432d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432d71:{NFSU2_TR(0x432d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432d74:{NFSU2_TR(0x432d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432d75:{NFSU2_TR(0x432d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432d76:{NFSU2_TR(0x432d76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432d77:{NFSU2_TR(0x432d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432d78:{NFSU2_TR(0x432d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432d7b:{NFSU2_TR(0x432d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432d7c:{NFSU2_TR(0x432d7c);
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
B432d7f:{NFSU2_TR(0x432d7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432d82:L432d82:{c.instructions+=2;NFSU2_TR(0x432d82);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432d85:{NFSU2_TR(0x432d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432dc7;}}
}
B432d87:L432d87:{c.instructions+=2;NFSU2_TR(0x432d87);
__builtin_memmove((R+4),(R+24),4);
}
B432d89:{NFSU2_TR(0x432d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432d8eull));
TAIL_STATIC(0x4401c0u,440);
}
B432d8e:L432d8e:{c.instructions+=2;NFSU2_TR(0x432d8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432d91:{NFSU2_TR(0x432d91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L432d96;}}
}
B432d93:L432d93:{c.instructions+=1;NFSU2_TR(0x432d93);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B432d96:L432d96:{c.instructions+=3;NFSU2_TR(0x432d96);
__builtin_memmove((R+4),(R+24),4);
}
B432d98:{NFSU2_TR(0x432d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432d9b:{NFSU2_TR(0x432d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432da0ull));
TAIL_STATIC(0x440160u,440);
}
B432da0:L432da0:{c.instructions+=2;NFSU2_TR(0x432da0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432da1:{NFSU2_TR(0x432da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432da6ull));
TAIL_STATIC(0x430d40u,430);
}
B432da6:L432da6:{c.instructions+=4;NFSU2_TR(0x432da6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B432da9:{NFSU2_TR(0x432da9);
__builtin_memmove((R+4),(R+24),4);
}
B432dab:{NFSU2_TR(0x432dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432dae:{NFSU2_TR(0x432dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432db3ull));
TAIL_STATIC(0x440250u,440);
}
B432db3:L432db3:{c.instructions+=10;NFSU2_TR(0x432db3);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432db6:{NFSU2_TR(0x432db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432db9:{NFSU2_TR(0x432db9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432dba:{NFSU2_TR(0x432dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432dbb:{NFSU2_TR(0x432dbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432dbc:{NFSU2_TR(0x432dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432dbd:{NFSU2_TR(0x432dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432dc0:{NFSU2_TR(0x432dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432dc1:{NFSU2_TR(0x432dc1);
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
B432dc4:{NFSU2_TR(0x432dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432dc7:L432dc7:{c.instructions+=2;NFSU2_TR(0x432dc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432dca:{NFSU2_TR(0x432dca);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x432d87u);}goto L432d87;}}
}
B432dcc:L432dcc:{c.instructions+=2;NFSU2_TR(0x432dcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432dcf:{NFSU2_TR(0x432dcf);
if(r1(R+518)){{goto L432dd6;}}
}
B432dd1:L432dd1:{c.instructions+=2;NFSU2_TR(0x432dd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432dd4:{NFSU2_TR(0x432dd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432e03;}}
}
B432dd6:L432dd6:{c.instructions+=2;NFSU2_TR(0x432dd6);
__builtin_memmove((R+4),(R+24),4);
}
B432dd8:{NFSU2_TR(0x432dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432dddull));
TAIL_STATIC(0x4401c0u,440);
}
B432ddd:L432ddd:{c.instructions+=2;NFSU2_TR(0x432ddd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432de0:{NFSU2_TR(0x432de0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L432de5;}}
}
B432de2:L432de2:{c.instructions+=1;NFSU2_TR(0x432de2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B432de5:L432de5:{c.instructions+=3;NFSU2_TR(0x432de5);
__builtin_memmove((R+4),(R+24),4);
}
B432de7:{NFSU2_TR(0x432de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432dea:{NFSU2_TR(0x432dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432defull));
TAIL_STATIC(0x440250u,440);
}
B432def:L432def:{c.instructions+=10;NFSU2_TR(0x432def);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432df2:{NFSU2_TR(0x432df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432df5:{NFSU2_TR(0x432df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432df6:{NFSU2_TR(0x432df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432df7:{NFSU2_TR(0x432df7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432df8:{NFSU2_TR(0x432df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432df9:{NFSU2_TR(0x432df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432dfc:{NFSU2_TR(0x432dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432dfd:{NFSU2_TR(0x432dfd);
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
B432e00:{NFSU2_TR(0x432e00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432e03:L432e03:{c.instructions+=2;NFSU2_TR(0x432e03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432e06:{NFSU2_TR(0x432e06);
if(r1(R+518)){{goto L432ecd;}}
}
B432e0c:L432e0c:{c.instructions+=2;NFSU2_TR(0x432e0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432e0f:{NFSU2_TR(0x432e0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432e36;}}
}
B432e11:L432e11:{c.instructions+=2;NFSU2_TR(0x432e11);
__builtin_memmove((R+4),(R+24),4);
}
B432e13:{NFSU2_TR(0x432e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e18ull));
TAIL_STATIC(0x4401c0u,440);
}
B432e18:L432e18:{c.instructions+=3;NFSU2_TR(0x432e18);
__builtin_memmove((R+4),(R+24),4);
}
B432e1a:{NFSU2_TR(0x432e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432e1d:{NFSU2_TR(0x432e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e22ull));
TAIL_STATIC(0x440250u,440);
}
B432e22:L432e22:{c.instructions+=10;NFSU2_TR(0x432e22);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432e25:{NFSU2_TR(0x432e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432e28:{NFSU2_TR(0x432e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432e29:{NFSU2_TR(0x432e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432e2a:{NFSU2_TR(0x432e2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432e2b:{NFSU2_TR(0x432e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432e2c:{NFSU2_TR(0x432e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432e2f:{NFSU2_TR(0x432e2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432e30:{NFSU2_TR(0x432e30);
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
B432e33:{NFSU2_TR(0x432e33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432e36:L432e36:{c.instructions+=2;NFSU2_TR(0x432e36);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432e39:{NFSU2_TR(0x432e39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432e8c;}}
}
B432e3b:L432e3b:{c.instructions+=2;NFSU2_TR(0x432e3b);
__builtin_memmove((R+4),(R+24),4);
}
B432e3d:{NFSU2_TR(0x432e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e42ull));
TAIL_STATIC(0x440160u,440);
}
B432e42:L432e42:{c.instructions+=2;NFSU2_TR(0x432e42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432e43:{NFSU2_TR(0x432e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e48ull));
TAIL_STATIC(0x430d00u,430);
}
B432e48:L432e48:{c.instructions+=4;NFSU2_TR(0x432e48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B432e4b:{NFSU2_TR(0x432e4b);
__builtin_memmove((R+4),(R+24),4);
}
B432e4d:{NFSU2_TR(0x432e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432e50:{NFSU2_TR(0x432e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e55ull));
TAIL_STATIC(0x440250u,440);
}
B432e55:L432e55:{c.instructions+=3;NFSU2_TR(0x432e55);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432e58:{NFSU2_TR(0x432e58);
__builtin_memmove((R+4),(R+24),4);
}
B432e5a:{NFSU2_TR(0x432e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e5full));
TAIL_STATIC(0x440250u,440);
}
B432e5f:L432e5f:{c.instructions+=3;NFSU2_TR(0x432e5f);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432e62:{NFSU2_TR(0x432e62);
__builtin_memmove((R+4),(R+24),4);
}
B432e64:{NFSU2_TR(0x432e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e69ull));
TAIL_STATIC(0x43e530u,43e);
}
B432e69:L432e69:{c.instructions+=2;NFSU2_TR(0x432e69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B432e6b:{NFSU2_TR(0x432e6b);
if(r1(R+518)){TAIL_STATIC(0x43300eu,433);}
}
B432e71:L432e71:{c.instructions+=2;NFSU2_TR(0x432e71);
__builtin_memmove((R+4),(R+24),4);
}
B432e73:{NFSU2_TR(0x432e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e78ull));
TAIL_STATIC(0x4401c0u,440);
}
B432e78:L432e78:{c.instructions+=10;NFSU2_TR(0x432e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432e7b:{NFSU2_TR(0x432e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432e7e:{NFSU2_TR(0x432e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432e7f:{NFSU2_TR(0x432e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432e80:{NFSU2_TR(0x432e80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432e81:{NFSU2_TR(0x432e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432e82:{NFSU2_TR(0x432e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432e85:{NFSU2_TR(0x432e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432e86:{NFSU2_TR(0x432e86);
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
B432e89:{NFSU2_TR(0x432e89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432e8c:L432e8c:{c.instructions+=2;NFSU2_TR(0x432e8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432e8f:{NFSU2_TR(0x432e8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432ec8;}}
}
B432e91:L432e91:{c.instructions+=2;NFSU2_TR(0x432e91);
__builtin_memmove((R+4),(R+24),4);
}
B432e93:{NFSU2_TR(0x432e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432e98ull));
TAIL_STATIC(0x4401c0u,440);
}
B432e98:L432e98:{c.instructions+=2;NFSU2_TR(0x432e98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432e9b:{NFSU2_TR(0x432e9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L432ea0;}}
}
B432e9d:L432e9d:{c.instructions+=1;NFSU2_TR(0x432e9d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B432ea0:L432ea0:{c.instructions+=3;NFSU2_TR(0x432ea0);
__builtin_memmove((R+4),(R+24),4);
}
B432ea2:{NFSU2_TR(0x432ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432ea5:{NFSU2_TR(0x432ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432eaaull));
TAIL_STATIC(0x4401c0u,440);
}
B432eaa:L432eaa:{c.instructions+=3;NFSU2_TR(0x432eaa);
__builtin_memmove((R+4),(R+24),4);
}
B432eac:{NFSU2_TR(0x432eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432eaf:{NFSU2_TR(0x432eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432eb4ull));
TAIL_STATIC(0x440250u,440);
}
B432eb4:L432eb4:{c.instructions+=10;NFSU2_TR(0x432eb4);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432eb7:{NFSU2_TR(0x432eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432eba:{NFSU2_TR(0x432eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432ebb:{NFSU2_TR(0x432ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432ebc:{NFSU2_TR(0x432ebc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432ebd:{NFSU2_TR(0x432ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432ebe:{NFSU2_TR(0x432ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432ec1:{NFSU2_TR(0x432ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432ec2:{NFSU2_TR(0x432ec2);
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
B432ec5:{NFSU2_TR(0x432ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432ec8:L432ec8:{c.instructions+=2;NFSU2_TR(0x432ec8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432ecb:{NFSU2_TR(0x432ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432f04;}}
}
B432ecd:L432ecd:{c.instructions+=2;NFSU2_TR(0x432ecd);
__builtin_memmove((R+4),(R+24),4);
}
B432ecf:{NFSU2_TR(0x432ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ed4ull));
TAIL_STATIC(0x4401c0u,440);
}
B432ed4:L432ed4:{c.instructions+=2;NFSU2_TR(0x432ed4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432ed7:{NFSU2_TR(0x432ed7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L432edc;}}
}
B432ed9:L432ed9:{c.instructions+=1;NFSU2_TR(0x432ed9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B432edc:L432edc:{c.instructions+=3;NFSU2_TR(0x432edc);
__builtin_memmove((R+4),(R+24),4);
}
B432ede:{NFSU2_TR(0x432ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432ee1:{NFSU2_TR(0x432ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ee6ull));
TAIL_STATIC(0x440250u,440);
}
B432ee6:L432ee6:{c.instructions+=3;NFSU2_TR(0x432ee6);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432ee9:{NFSU2_TR(0x432ee9);
__builtin_memmove((R+4),(R+24),4);
}
B432eeb:{NFSU2_TR(0x432eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ef0ull));
TAIL_STATIC(0x440250u,440);
}
B432ef0:L432ef0:{c.instructions+=10;NFSU2_TR(0x432ef0);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432ef3:{NFSU2_TR(0x432ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432ef6:{NFSU2_TR(0x432ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432ef7:{NFSU2_TR(0x432ef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432ef8:{NFSU2_TR(0x432ef8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B432ef9:{NFSU2_TR(0x432ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432efa:{NFSU2_TR(0x432efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432efd:{NFSU2_TR(0x432efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432efe:{NFSU2_TR(0x432efe);
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
B432f01:{NFSU2_TR(0x432f01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432f04:L432f04:{c.instructions+=2;NFSU2_TR(0x432f04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432f07:{NFSU2_TR(0x432f07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432f42;}}
}
B432f09:L432f09:{c.instructions+=2;NFSU2_TR(0x432f09);
__builtin_memmove((R+4),(R+24),4);
}
B432f0b:{NFSU2_TR(0x432f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f10ull));
TAIL_STATIC(0x4401c0u,440);
}
B432f10:L432f10:{c.instructions+=2;NFSU2_TR(0x432f10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432f13:{NFSU2_TR(0x432f13);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L432f19;}}
}
B432f15:L432f15:{c.instructions+=2;NFSU2_TR(0x432f15);
__builtin_memmove((R+20),(R+0),4);
}
B432f17:{NFSU2_TR(0x432f17);
{goto L432f1c;}
}
B432f19:L432f19:{c.instructions+=1;NFSU2_TR(0x432f19);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B432f1c:L432f1c:{c.instructions+=2;NFSU2_TR(0x432f1c);
__builtin_memmove((R+4),(R+24),4);
}
B432f1e:{NFSU2_TR(0x432f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f23ull));
TAIL_STATIC(0x440250u,440);
}
B432f23:L432f23:{c.instructions+=8;NFSU2_TR(0x432f23);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432f27:{NFSU2_TR(0x432f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432f2b:{NFSU2_TR(0x432f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432f2e:{NFSU2_TR(0x432f2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f2f:{NFSU2_TR(0x432f2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f30:{NFSU2_TR(0x432f30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f31:{NFSU2_TR(0x432f31);
__builtin_memmove((R+4),(R+12),4);
}
B432f33:{NFSU2_TR(0x432f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f38ull));
TAIL_STATIC(0x430dc0u,430);
}
B432f38:L432f38:{c.instructions+=6;NFSU2_TR(0x432f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432f39:{NFSU2_TR(0x432f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432f3a:{NFSU2_TR(0x432f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432f3b:{NFSU2_TR(0x432f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432f3c:{NFSU2_TR(0x432f3c);
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
B432f3f:{NFSU2_TR(0x432f3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432f42:L432f42:{c.instructions+=2;NFSU2_TR(0x432f42);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432f45:{NFSU2_TR(0x432f45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432f80;}}
}
B432f47:L432f47:{c.instructions+=2;NFSU2_TR(0x432f47);
__builtin_memmove((R+4),(R+24),4);
}
B432f49:{NFSU2_TR(0x432f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f4eull));
TAIL_STATIC(0x4401c0u,440);
}
B432f4e:L432f4e:{c.instructions+=2;NFSU2_TR(0x432f4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432f51:{NFSU2_TR(0x432f51);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L432f57;}}
}
B432f53:L432f53:{c.instructions+=2;NFSU2_TR(0x432f53);
__builtin_memmove((R+20),(R+0),4);
}
B432f55:{NFSU2_TR(0x432f55);
{goto L432f5a;}
}
B432f57:L432f57:{c.instructions+=1;NFSU2_TR(0x432f57);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B432f5a:L432f5a:{c.instructions+=2;NFSU2_TR(0x432f5a);
__builtin_memmove((R+4),(R+24),4);
}
B432f5c:{NFSU2_TR(0x432f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f61ull));
TAIL_STATIC(0x440250u,440);
}
B432f61:L432f61:{c.instructions+=8;NFSU2_TR(0x432f61);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432f65:{NFSU2_TR(0x432f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432f69:{NFSU2_TR(0x432f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432f6c:{NFSU2_TR(0x432f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f6d:{NFSU2_TR(0x432f6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f6e:{NFSU2_TR(0x432f6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432f6f:{NFSU2_TR(0x432f6f);
__builtin_memmove((R+4),(R+12),4);
}
B432f71:{NFSU2_TR(0x432f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f76ull));
TAIL_STATIC(0x430ea0u,430);
}
B432f76:L432f76:{c.instructions+=6;NFSU2_TR(0x432f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432f77:{NFSU2_TR(0x432f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432f78:{NFSU2_TR(0x432f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432f79:{NFSU2_TR(0x432f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432f7a:{NFSU2_TR(0x432f7a);
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
B432f7d:{NFSU2_TR(0x432f7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432f80:L432f80:{c.instructions+=2;NFSU2_TR(0x432f80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432f83:{NFSU2_TR(0x432f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L432fde;}}
}
B432f85:L432f85:{c.instructions+=2;NFSU2_TR(0x432f85);
__builtin_memmove((R+4),(R+24),4);
}
B432f87:{NFSU2_TR(0x432f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f8cull));
TAIL_STATIC(0x4401c0u,440);
}
B432f8c:L432f8c:{c.instructions+=2;NFSU2_TR(0x432f8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B432f8f:{NFSU2_TR(0x432f8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L432f95;}}
}
B432f91:L432f91:{c.instructions+=2;NFSU2_TR(0x432f91);
__builtin_memmove((R+20),(R+0),4);
}
B432f93:{NFSU2_TR(0x432f93);
{goto L432f98;}
}
B432f95:L432f95:{c.instructions+=1;NFSU2_TR(0x432f95);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B432f98:L432f98:{c.instructions+=2;NFSU2_TR(0x432f98);
__builtin_memmove((R+4),(R+24),4);
}
B432f9a:{NFSU2_TR(0x432f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432f9full));
TAIL_STATIC(0x440250u,440);
}
B432f9f:L432f9f:{c.instructions+=3;NFSU2_TR(0x432f9f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432fa3:{NFSU2_TR(0x432fa3);
__builtin_memmove((R+4),(R+24),4);
}
B432fa5:{NFSU2_TR(0x432fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432faaull));
TAIL_STATIC(0x440250u,440);
}
B432faa:L432faa:{c.instructions+=3;NFSU2_TR(0x432faa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432fae:{NFSU2_TR(0x432fae);
__builtin_memmove((R+4),(R+24),4);
}
B432fb0:{NFSU2_TR(0x432fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432fb5ull));
TAIL_STATIC(0x440250u,440);
}
B432fb5:L432fb5:{c.instructions+=12;NFSU2_TR(0x432fb5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B432fb9:{NFSU2_TR(0x432fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432fbd:{NFSU2_TR(0x432fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B432fc1:{NFSU2_TR(0x432fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432fc5:{NFSU2_TR(0x432fc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fc6:{NFSU2_TR(0x432fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B432fc9:{NFSU2_TR(0x432fc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fca:{NFSU2_TR(0x432fca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fcb:{NFSU2_TR(0x432fcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fcc:{NFSU2_TR(0x432fcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fcd:{NFSU2_TR(0x432fcd);
__builtin_memmove((R+4),(R+12),4);
}
B432fcf:{NFSU2_TR(0x432fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432fd4ull));
TAIL_STATIC(0x431130u,431);
}
B432fd4:L432fd4:{c.instructions+=6;NFSU2_TR(0x432fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B432fd5:{NFSU2_TR(0x432fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B432fd6:{NFSU2_TR(0x432fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B432fd7:{NFSU2_TR(0x432fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B432fd8:{NFSU2_TR(0x432fd8);
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
B432fdb:{NFSU2_TR(0x432fdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B432fde:L432fde:{c.instructions+=2;NFSU2_TR(0x432fde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B432fe1:{NFSU2_TR(0x432fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x433011u,433);}
}
B432fe3:L432fe3:{c.instructions+=2;NFSU2_TR(0x432fe3);
__builtin_memmove((R+4),(R+24),4);
}
B432fe5:{NFSU2_TR(0x432fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432feaull));
TAIL_STATIC(0x43e560u,43e);
}
B432fea:L432fea:{c.instructions+=2;NFSU2_TR(0x432fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B432fec:{NFSU2_TR(0x432fec);
if(r1(R+518)){TAIL_STATIC(0x433011u,433);}
}
B432fee:L432fee:{c.instructions+=2;NFSU2_TR(0x432fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432fef:{NFSU2_TR(0x432fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x432ff4ull));
TAIL_STATIC(0x43db50u,43d);
}
B432ff4:L432ff4:{c.instructions+=5;NFSU2_TR(0x432ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B432ffa:{NFSU2_TR(0x432ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ffb:{NFSU2_TR(0x432ffb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B432ffc:{NFSU2_TR(0x432ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B432fff:{NFSU2_TR(0x432fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x433002u,433);
}
XIT:NFSU2_TR_EXIT(0x432,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
