#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_460(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_474(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x473,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x473,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_473(u8* __restrict R,Cpu& c);
u32 page_473(Cpu& c){return body_473(c.regs.data(),c);}
__attribute__((noinline)) u32 body_473(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x473003:goto L473003;
case 0x473006:c.instructions+=1;goto B473006;
case 0x473010:goto L473010;
case 0x473011:c.instructions+=8;goto B473011;
case 0x473012:c.instructions+=7;goto B473012;
case 0x473013:c.instructions+=6;goto B473013;
case 0x473015:c.instructions+=5;goto B473015;
case 0x473016:c.instructions+=4;goto B473016;
case 0x47301c:c.instructions+=3;goto B47301c;
case 0x47301e:c.instructions+=2;goto B47301e;
case 0x473020:c.instructions+=1;goto B473020;
case 0x473022:goto L473022;
case 0x473024:c.instructions+=2;goto B473024;
case 0x473026:c.instructions+=1;goto B473026;
case 0x473028:goto L473028;
case 0x47302d:goto L47302d;
case 0x473031:c.instructions+=2;goto B473031;
case 0x473032:c.instructions+=1;goto B473032;
case 0x473037:goto L473037;
case 0x47303a:c.instructions+=1;goto B47303a;
case 0x47303f:goto L47303f;
case 0x473043:c.instructions+=4;goto B473043;
case 0x473045:c.instructions+=3;goto B473045;
case 0x473046:c.instructions+=2;goto B473046;
case 0x473047:c.instructions+=1;goto B473047;
case 0x47304a:goto L47304a;
case 0x47304f:goto L47304f;
case 0x473055:goto L473055;
case 0x47305b:c.instructions+=2;goto B47305b;
case 0x47305d:c.instructions+=1;goto B47305d;
case 0x47305f:goto L47305f;
case 0x473061:c.instructions+=2;goto B473061;
case 0x473063:c.instructions+=1;goto B473063;
case 0x473065:goto L473065;
case 0x47306a:goto L47306a;
case 0x47306e:c.instructions+=2;goto B47306e;
case 0x47306f:c.instructions+=1;goto B47306f;
case 0x473074:goto L473074;
case 0x473077:c.instructions+=1;goto B473077;
case 0x47307c:goto L47307c;
case 0x473080:c.instructions+=4;goto B473080;
case 0x473082:c.instructions+=3;goto B473082;
case 0x473083:c.instructions+=2;goto B473083;
case 0x473084:c.instructions+=1;goto B473084;
case 0x473087:goto L473087;
case 0x47308c:goto L47308c;
case 0x473092:goto L473092;
case 0x473098:c.instructions+=2;goto B473098;
case 0x47309a:c.instructions+=1;goto B47309a;
case 0x47309c:goto L47309c;
case 0x47309e:c.instructions+=2;goto B47309e;
case 0x4730a0:c.instructions+=1;goto B4730a0;
case 0x4730a2:goto L4730a2;
case 0x4730a7:goto L4730a7;
case 0x4730ab:c.instructions+=2;goto B4730ab;
case 0x4730ac:c.instructions+=1;goto B4730ac;
case 0x4730b1:goto L4730b1;
case 0x4730b4:c.instructions+=1;goto B4730b4;
case 0x4730b9:goto L4730b9;
case 0x4730bd:c.instructions+=4;goto B4730bd;
case 0x4730bf:c.instructions+=3;goto B4730bf;
case 0x4730c0:c.instructions+=2;goto B4730c0;
case 0x4730c1:c.instructions+=1;goto B4730c1;
case 0x4730c4:goto L4730c4;
case 0x4730c9:goto L4730c9;
case 0x4730cf:goto L4730cf;
case 0x4730d5:c.instructions+=2;goto B4730d5;
case 0x4730d7:c.instructions+=1;goto B4730d7;
case 0x4730d9:goto L4730d9;
case 0x4730db:c.instructions+=2;goto B4730db;
case 0x4730dd:c.instructions+=1;goto B4730dd;
case 0x4730df:goto L4730df;
case 0x4730e4:goto L4730e4;
case 0x4730e8:c.instructions+=2;goto B4730e8;
case 0x4730e9:c.instructions+=1;goto B4730e9;
case 0x4730ee:goto L4730ee;
case 0x4730f1:c.instructions+=1;goto B4730f1;
case 0x4730f6:goto L4730f6;
case 0x4730fa:c.instructions+=4;goto B4730fa;
case 0x4730fc:c.instructions+=3;goto B4730fc;
case 0x4730fd:c.instructions+=2;goto B4730fd;
case 0x4730fe:c.instructions+=1;goto B4730fe;
case 0x473101:goto L473101;
case 0x473106:goto L473106;
case 0x47310c:goto L47310c;
case 0x473112:c.instructions+=2;goto B473112;
case 0x473114:c.instructions+=1;goto B473114;
case 0x473116:goto L473116;
case 0x473118:c.instructions+=2;goto B473118;
case 0x47311a:c.instructions+=1;goto B47311a;
case 0x47311c:goto L47311c;
case 0x473122:c.instructions+=3;goto B473122;
case 0x473124:c.instructions+=2;goto B473124;
case 0x47312a:c.instructions+=1;goto B47312a;
case 0x47312c:goto L47312c;
case 0x47312e:c.instructions+=2;goto B47312e;
case 0x473130:c.instructions+=1;goto B473130;
case 0x473132:goto L473132;
case 0x473138:c.instructions+=3;goto B473138;
case 0x47313a:c.instructions+=2;goto B47313a;
case 0x473140:c.instructions+=1;goto B473140;
case 0x473142:goto L473142;
case 0x473144:c.instructions+=2;goto B473144;
case 0x473146:c.instructions+=1;goto B473146;
case 0x473148:goto L473148;
case 0x47314d:goto L47314d;
case 0x473151:c.instructions+=2;goto B473151;
case 0x473152:c.instructions+=1;goto B473152;
case 0x473157:goto L473157;
case 0x47315a:c.instructions+=1;goto B47315a;
case 0x47315f:goto L47315f;
case 0x473163:c.instructions+=4;goto B473163;
case 0x473165:c.instructions+=3;goto B473165;
case 0x473166:c.instructions+=2;goto B473166;
case 0x473167:c.instructions+=1;goto B473167;
case 0x47316a:goto L47316a;
case 0x47316f:goto L47316f;
case 0x473175:c.instructions+=3;goto B473175;
case 0x473177:c.instructions+=2;goto B473177;
case 0x47317d:c.instructions+=1;goto B47317d;
case 0x47317f:goto L47317f;
case 0x473181:c.instructions+=2;goto B473181;
case 0x473183:c.instructions+=1;goto B473183;
case 0x473185:goto L473185;
case 0x47318a:goto L47318a;
case 0x47318e:c.instructions+=2;goto B47318e;
case 0x47318f:c.instructions+=1;goto B47318f;
case 0x473194:goto L473194;
case 0x473197:c.instructions+=1;goto B473197;
case 0x47319c:goto L47319c;
case 0x4731a0:c.instructions+=4;goto B4731a0;
case 0x4731a2:c.instructions+=3;goto B4731a2;
case 0x4731a3:c.instructions+=2;goto B4731a3;
case 0x4731a4:c.instructions+=1;goto B4731a4;
case 0x4731a7:goto L4731a7;
case 0x4731ac:goto L4731ac;
case 0x4731ad:c.instructions+=5;goto B4731ad;
case 0x4731b3:c.instructions+=4;goto B4731b3;
case 0x4731b4:c.instructions+=3;goto B4731b4;
case 0x4731b5:c.instructions+=2;goto B4731b5;
case 0x4731b6:c.instructions+=1;goto B4731b6;
case 0x4731c0:goto L4731c0;
case 0x4731c6:c.instructions+=10;goto B4731c6;
case 0x4731c8:c.instructions+=9;goto B4731c8;
case 0x4731cd:c.instructions+=8;goto B4731cd;
case 0x4731ce:c.instructions+=7;goto B4731ce;
case 0x4731d3:c.instructions+=6;goto B4731d3;
case 0x4731da:c.instructions+=5;goto B4731da;
case 0x4731dd:c.instructions+=4;goto B4731dd;
case 0x4731df:c.instructions+=3;goto B4731df;
case 0x4731e0:c.instructions+=2;goto B4731e0;
case 0x4731e2:c.instructions+=1;goto B4731e2;
case 0x4731e8:goto L4731e8;
case 0x4731ee:c.instructions+=2;goto B4731ee;
case 0x4731f0:c.instructions+=1;goto B4731f0;
case 0x4731f6:goto L4731f6;
case 0x4731f9:c.instructions+=11;goto B4731f9;
case 0x473200:c.instructions+=10;goto B473200;
case 0x473203:c.instructions+=9;goto B473203;
case 0x473209:c.instructions+=8;goto B473209;
case 0x47320a:c.instructions+=7;goto B47320a;
case 0x473210:c.instructions+=6;goto B473210;
case 0x473211:c.instructions+=5;goto B473211;
case 0x473212:c.instructions+=4;goto B473212;
case 0x473216:c.instructions+=3;goto B473216;
case 0x47321b:c.instructions+=2;goto B47321b;
case 0x473221:c.instructions+=1;goto B473221;
case 0x473226:goto L473226;
case 0x47322c:c.instructions+=1;goto B47322c;
case 0x473231:goto L473231;
case 0x473235:c.instructions+=2;goto B473235;
case 0x473238:c.instructions+=1;goto B473238;
case 0x47323a:goto L47323a;
case 0x473241:goto L473241;
case 0x473246:c.instructions+=1;goto B473246;
case 0x473248:goto L473248;
case 0x47324d:c.instructions+=1;goto B47324d;
case 0x47324f:goto L47324f;
case 0x473254:goto L473254;
case 0x473258:c.instructions+=5;goto B473258;
case 0x47325b:c.instructions+=4;goto B47325b;
case 0x473261:c.instructions+=3;goto B473261;
case 0x473266:c.instructions+=2;goto B473266;
case 0x473269:c.instructions+=1;goto B473269;
case 0x47326e:goto L47326e;
case 0x473274:c.instructions+=1;goto B473274;
case 0x473279:goto L473279;
case 0x47327c:c.instructions+=5;goto B47327c;
case 0x473280:c.instructions+=4;goto B473280;
case 0x473284:c.instructions+=3;goto B473284;
case 0x473286:c.instructions+=2;goto B473286;
case 0x473288:c.instructions+=1;goto B473288;
case 0x47328e:goto L47328e;
case 0x473290:c.instructions+=2;goto B473290;
case 0x473296:c.instructions+=1;goto B473296;
case 0x473299:goto L473299;
case 0x47329b:c.instructions+=6;goto B47329b;
case 0x47329e:c.instructions+=5;goto B47329e;
case 0x4732a8:c.instructions+=4;goto B4732a8;
case 0x4732ae:c.instructions+=3;goto B4732ae;
case 0x4732b1:c.instructions+=2;goto B4732b1;
case 0x4732b3:c.instructions+=1;goto B4732b3;
case 0x4732b5:goto L4732b5;
case 0x4732b7:c.instructions+=1;goto B4732b7;
case 0x4732bc:goto L4732bc;
case 0x4732be:c.instructions+=1;goto B4732be;
case 0x4732c3:goto L4732c3;
case 0x4732c5:c.instructions+=5;goto B4732c5;
case 0x4732c8:c.instructions+=4;goto B4732c8;
case 0x4732cc:c.instructions+=3;goto B4732cc;
case 0x4732ce:c.instructions+=2;goto B4732ce;
case 0x4732d6:c.instructions+=1;goto B4732d6;
case 0x4732dc:goto L4732dc;
case 0x4732df:c.instructions+=3;goto B4732df;
case 0x4732e1:c.instructions+=2;goto B4732e1;
case 0x4732e3:c.instructions+=1;goto B4732e3;
case 0x4732e6:goto L4732e6;
case 0x4732e8:c.instructions+=3;goto B4732e8;
case 0x4732ea:c.instructions+=2;goto B4732ea;
case 0x4732ec:c.instructions+=1;goto B4732ec;
case 0x4732ee:goto L4732ee;
case 0x4732f0:c.instructions+=1;goto B4732f0;
case 0x4732f2:goto L4732f2;
case 0x4732f5:c.instructions+=1;goto B4732f5;
case 0x4732f7:goto L4732f7;
case 0x4732fc:goto L4732fc;
case 0x4732fe:c.instructions+=3;goto B4732fe;
case 0x473301:c.instructions+=2;goto B473301;
case 0x473303:c.instructions+=1;goto B473303;
case 0x473305:goto L473305;
case 0x473307:c.instructions+=1;goto B473307;
case 0x473309:goto L473309;
case 0x47330f:c.instructions+=1;goto B47330f;
case 0x473311:goto L473311;
case 0x473316:goto L473316;
case 0x47331a:c.instructions+=3;goto B47331a;
case 0x47331c:c.instructions+=2;goto B47331c;
case 0x47331f:c.instructions+=1;goto B47331f;
case 0x473321:goto L473321;
case 0x473323:c.instructions+=1;goto B473323;
case 0x473325:goto L473325;
case 0x47332b:c.instructions+=1;goto B47332b;
case 0x47332d:goto L47332d;
case 0x473332:goto L473332;
case 0x473334:c.instructions+=2;goto B473334;
case 0x473337:c.instructions+=1;goto B473337;
case 0x473339:goto L473339;
case 0x47333b:c.instructions+=1;goto B47333b;
case 0x47333d:goto L47333d;
case 0x473342:c.instructions+=1;goto B473342;
case 0x473344:goto L473344;
case 0x473349:goto L473349;
case 0x47334a:c.instructions+=7;goto B47334a;
case 0x47334b:c.instructions+=6;goto B47334b;
case 0x473350:c.instructions+=5;goto B473350;
case 0x473353:c.instructions+=4;goto B473353;
case 0x47335a:c.instructions+=3;goto B47335a;
case 0x47335d:c.instructions+=2;goto B47335d;
case 0x473360:c.instructions+=1;goto B473360;
case 0x473365:goto L473365;
case 0x473368:c.instructions+=2;goto B473368;
case 0x47336a:c.instructions+=1;goto B47336a;
case 0x47336c:goto L47336c;
case 0x473371:c.instructions+=2;goto B473371;
case 0x473376:c.instructions+=1;goto B473376;
case 0x47337b:goto L47337b;
case 0x47337c:c.instructions+=3;goto B47337c;
case 0x47337d:c.instructions+=2;goto B47337d;
case 0x473382:c.instructions+=1;goto B473382;
case 0x473387:goto L473387;
case 0x47338a:c.instructions+=1;goto B47338a;
case 0x47338c:goto L47338c;
case 0x47338e:goto L47338e;
case 0x473394:c.instructions+=4;goto B473394;
case 0x473396:c.instructions+=3;goto B473396;
case 0x47339e:c.instructions+=2;goto B47339e;
case 0x4733a4:c.instructions+=1;goto B4733a4;
case 0x4733aa:goto L4733aa;
case 0x4733af:c.instructions+=2;goto B4733af;
case 0x4733b4:c.instructions+=1;goto B4733b4;
case 0x4733b6:goto L4733b6;
case 0x4733b7:c.instructions+=2;goto B4733b7;
case 0x4733ba:c.instructions+=1;goto B4733ba;
case 0x4733bb:goto L4733bb;
case 0x4733c1:c.instructions+=7;goto B4733c1;
case 0x4733c4:c.instructions+=6;goto B4733c4;
case 0x4733c5:c.instructions+=5;goto B4733c5;
case 0x4733ca:c.instructions+=4;goto B4733ca;
case 0x4733d0:c.instructions+=3;goto B4733d0;
case 0x4733d1:c.instructions+=2;goto B4733d1;
case 0x4733d4:c.instructions+=1;goto B4733d4;
case 0x4733d9:goto L4733d9;
case 0x4733dc:c.instructions+=9;goto B4733dc;
case 0x4733de:c.instructions+=8;goto B4733de;
case 0x4733e3:c.instructions+=7;goto B4733e3;
case 0x4733e5:c.instructions+=6;goto B4733e5;
case 0x4733e9:c.instructions+=5;goto B4733e9;
case 0x4733ed:c.instructions+=4;goto B4733ed;
case 0x4733f1:c.instructions+=3;goto B4733f1;
case 0x4733f5:c.instructions+=2;goto B4733f5;
case 0x4733f9:c.instructions+=1;goto B4733f9;
case 0x4733fe:goto L4733fe;
case 0x473401:c.instructions+=2;goto B473401;
case 0x473403:c.instructions+=1;goto B473403;
case 0x473405:goto L473405;
case 0x473406:c.instructions+=2;goto B473406;
case 0x473408:c.instructions+=1;goto B473408;
case 0x47340d:goto L47340d;
case 0x473413:c.instructions+=1;goto B473413;
case 0x473418:goto L473418;
case 0x47341a:c.instructions+=2;goto B47341a;
case 0x473420:c.instructions+=1;goto B473420;
case 0x473425:goto L473425;
case 0x473427:c.instructions+=2;goto B473427;
case 0x47342d:c.instructions+=1;goto B47342d;
case 0x473430:goto L473430;
case 0x473432:c.instructions+=6;goto B473432;
case 0x473435:c.instructions+=5;goto B473435;
case 0x47343f:c.instructions+=4;goto B47343f;
case 0x473445:c.instructions+=3;goto B473445;
case 0x473448:c.instructions+=2;goto B473448;
case 0x47344a:c.instructions+=1;goto B47344a;
case 0x47344c:goto L47344c;
case 0x47344e:c.instructions+=1;goto B47344e;
case 0x473453:goto L473453;
case 0x473455:c.instructions+=1;goto B473455;
case 0x47345a:goto L47345a;
case 0x47345c:c.instructions+=5;goto B47345c;
case 0x47345f:c.instructions+=4;goto B47345f;
case 0x473463:c.instructions+=3;goto B473463;
case 0x473465:c.instructions+=2;goto B473465;
case 0x47346d:c.instructions+=1;goto B47346d;
case 0x473473:goto L473473;
case 0x473476:c.instructions+=3;goto B473476;
case 0x473478:c.instructions+=2;goto B473478;
case 0x47347a:c.instructions+=1;goto B47347a;
case 0x47347d:goto L47347d;
case 0x47347f:c.instructions+=3;goto B47347f;
case 0x473481:c.instructions+=2;goto B473481;
case 0x473483:c.instructions+=1;goto B473483;
case 0x473485:goto L473485;
case 0x473487:c.instructions+=1;goto B473487;
case 0x473489:goto L473489;
case 0x47348c:c.instructions+=1;goto B47348c;
case 0x47348e:goto L47348e;
case 0x473493:goto L473493;
case 0x473495:c.instructions+=3;goto B473495;
case 0x473498:c.instructions+=2;goto B473498;
case 0x47349a:c.instructions+=1;goto B47349a;
case 0x47349c:goto L47349c;
case 0x47349e:c.instructions+=1;goto B47349e;
case 0x4734a0:goto L4734a0;
case 0x4734a6:c.instructions+=1;goto B4734a6;
case 0x4734a8:goto L4734a8;
case 0x4734ad:goto L4734ad;
case 0x4734b1:c.instructions+=3;goto B4734b1;
case 0x4734b3:c.instructions+=2;goto B4734b3;
case 0x4734b6:c.instructions+=1;goto B4734b6;
case 0x4734b8:goto L4734b8;
case 0x4734ba:c.instructions+=1;goto B4734ba;
case 0x4734bc:goto L4734bc;
case 0x4734c2:c.instructions+=1;goto B4734c2;
case 0x4734c4:goto L4734c4;
case 0x4734c9:goto L4734c9;
case 0x4734cb:c.instructions+=2;goto B4734cb;
case 0x4734ce:c.instructions+=1;goto B4734ce;
case 0x4734d0:goto L4734d0;
case 0x4734d2:c.instructions+=1;goto B4734d2;
case 0x4734d4:goto L4734d4;
case 0x4734d9:c.instructions+=1;goto B4734d9;
case 0x4734db:goto L4734db;
case 0x4734e0:goto L4734e0;
case 0x4734e1:c.instructions+=7;goto B4734e1;
case 0x4734e2:c.instructions+=6;goto B4734e2;
case 0x4734e7:c.instructions+=5;goto B4734e7;
case 0x4734ea:c.instructions+=4;goto B4734ea;
case 0x4734f1:c.instructions+=3;goto B4734f1;
case 0x4734f4:c.instructions+=2;goto B4734f4;
case 0x4734f7:c.instructions+=1;goto B4734f7;
case 0x4734fc:goto L4734fc;
case 0x4734ff:c.instructions+=2;goto B4734ff;
case 0x473501:c.instructions+=1;goto B473501;
case 0x473503:goto L473503;
case 0x473508:c.instructions+=2;goto B473508;
case 0x47350d:c.instructions+=1;goto B47350d;
case 0x473512:goto L473512;
case 0x473513:c.instructions+=3;goto B473513;
case 0x473514:c.instructions+=2;goto B473514;
case 0x473519:c.instructions+=1;goto B473519;
case 0x47351e:goto L47351e;
case 0x473521:c.instructions+=1;goto B473521;
case 0x473523:goto L473523;
case 0x473525:goto L473525;
case 0x47352b:c.instructions+=4;goto B47352b;
case 0x47352d:c.instructions+=3;goto B47352d;
case 0x473535:c.instructions+=2;goto B473535;
case 0x47353b:c.instructions+=1;goto B47353b;
case 0x47353d:goto L47353d;
case 0x473542:c.instructions+=2;goto B473542;
case 0x473547:c.instructions+=1;goto B473547;
case 0x473549:goto L473549;
case 0x47354a:c.instructions+=2;goto B47354a;
case 0x47354d:c.instructions+=1;goto B47354d;
case 0x47354e:goto L47354e;
case 0x473554:c.instructions+=7;goto B473554;
case 0x473557:c.instructions+=6;goto B473557;
case 0x473558:c.instructions+=5;goto B473558;
case 0x47355d:c.instructions+=4;goto B47355d;
case 0x473563:c.instructions+=3;goto B473563;
case 0x473564:c.instructions+=2;goto B473564;
case 0x473567:c.instructions+=1;goto B473567;
case 0x47356c:goto L47356c;
case 0x47356f:c.instructions+=9;goto B47356f;
case 0x473571:c.instructions+=8;goto B473571;
case 0x473576:c.instructions+=7;goto B473576;
case 0x473578:c.instructions+=6;goto B473578;
case 0x47357c:c.instructions+=5;goto B47357c;
case 0x473580:c.instructions+=4;goto B473580;
case 0x473584:c.instructions+=3;goto B473584;
case 0x473588:c.instructions+=2;goto B473588;
case 0x47358c:c.instructions+=1;goto B47358c;
case 0x473591:goto L473591;
case 0x473594:c.instructions+=2;goto B473594;
case 0x473596:c.instructions+=1;goto B473596;
case 0x473598:goto L473598;
case 0x473599:c.instructions+=2;goto B473599;
case 0x47359b:c.instructions+=1;goto B47359b;
case 0x4735a0:goto L4735a0;
case 0x4735a2:goto L4735a2;
case 0x4735a4:goto L4735a4;
case 0x4735aa:goto L4735aa;
case 0x4735ae:c.instructions+=3;goto B4735ae;
case 0x4735af:c.instructions+=2;goto B4735af;
case 0x4735b1:c.instructions+=1;goto B4735b1;
case 0x4735b6:goto L4735b6;
case 0x4735b7:c.instructions+=2;goto B4735b7;
case 0x4735b8:c.instructions+=1;goto B4735b8;
case 0x4735b9:goto L4735b9;
case 0x4735bd:c.instructions+=4;goto B4735bd;
case 0x4735be:c.instructions+=3;goto B4735be;
case 0x4735c5:c.instructions+=2;goto B4735c5;
case 0x4735c8:c.instructions+=1;goto B4735c8;
case 0x4735e0:goto L4735e0;
case 0x4735e3:c.instructions+=8;goto B4735e3;
case 0x4735e9:c.instructions+=7;goto B4735e9;
case 0x4735ea:c.instructions+=6;goto B4735ea;
case 0x4735ec:c.instructions+=5;goto B4735ec;
case 0x4735f3:c.instructions+=4;goto B4735f3;
case 0x4735fb:c.instructions+=3;goto B4735fb;
case 0x473603:c.instructions+=2;goto B473603;
case 0x47360b:c.instructions+=1;goto B47360b;
case 0x473611:goto L473611;
case 0x473614:c.instructions+=9;goto B473614;
case 0x473616:c.instructions+=8;goto B473616;
case 0x473619:c.instructions+=7;goto B473619;
case 0x47361f:c.instructions+=6;goto B47361f;
case 0x473624:c.instructions+=5;goto B473624;
case 0x47362a:c.instructions+=4;goto B47362a;
case 0x47362e:c.instructions+=3;goto B47362e;
case 0x473632:c.instructions+=2;goto B473632;
case 0x473633:c.instructions+=1;goto B473633;
case 0x473638:goto L473638;
case 0x47363d:goto L47363d;
case 0x473643:c.instructions+=19;goto B473643;
case 0x473649:c.instructions+=18;goto B473649;
case 0x47364c:c.instructions+=17;goto B47364c;
case 0x473650:c.instructions+=16;goto B473650;
case 0x473654:c.instructions+=15;goto B473654;
case 0x47365a:c.instructions+=14;goto B47365a;
case 0x473660:c.instructions+=13;goto B473660;
case 0x473662:c.instructions+=12;goto B473662;
case 0x473664:c.instructions+=11;goto B473664;
case 0x473666:c.instructions+=10;goto B473666;
case 0x473668:c.instructions+=9;goto B473668;
case 0x47366a:c.instructions+=8;goto B47366a;
case 0x47366c:c.instructions+=7;goto B47366c;
case 0x47366e:c.instructions+=6;goto B47366e;
case 0x473670:c.instructions+=5;goto B473670;
case 0x473676:c.instructions+=4;goto B473676;
case 0x47367c:c.instructions+=3;goto B47367c;
case 0x47367e:c.instructions+=2;goto B47367e;
case 0x473681:c.instructions+=1;goto B473681;
case 0x473683:goto L473683;
case 0x473685:c.instructions+=1;goto B473685;
case 0x47368b:goto L47368b;
case 0x473691:c.instructions+=21;goto B473691;
case 0x473693:c.instructions+=20;goto B473693;
case 0x473699:c.instructions+=19;goto B473699;
case 0x47369f:c.instructions+=18;goto B47369f;
case 0x4736a1:c.instructions+=17;goto B4736a1;
case 0x4736a5:c.instructions+=16;goto B4736a5;
case 0x4736a7:c.instructions+=15;goto B4736a7;
case 0x4736ad:c.instructions+=14;goto B4736ad;
case 0x4736b3:c.instructions+=13;goto B4736b3;
case 0x4736b5:c.instructions+=12;goto B4736b5;
case 0x4736b7:c.instructions+=11;goto B4736b7;
case 0x4736b9:c.instructions+=10;goto B4736b9;
case 0x4736bb:c.instructions+=9;goto B4736bb;
case 0x4736bd:c.instructions+=8;goto B4736bd;
case 0x4736bf:c.instructions+=7;goto B4736bf;
case 0x4736c1:c.instructions+=6;goto B4736c1;
case 0x4736c3:c.instructions+=5;goto B4736c3;
case 0x4736c9:c.instructions+=4;goto B4736c9;
case 0x4736cf:c.instructions+=3;goto B4736cf;
case 0x4736d1:c.instructions+=2;goto B4736d1;
case 0x4736d4:c.instructions+=1;goto B4736d4;
case 0x4736d6:goto L4736d6;
case 0x4736d8:c.instructions+=1;goto B4736d8;
case 0x4736de:goto L4736de;
case 0x4736e4:c.instructions+=10;goto B4736e4;
case 0x4736e6:c.instructions+=9;goto B4736e6;
case 0x4736ec:c.instructions+=8;goto B4736ec;
case 0x4736f2:c.instructions+=7;goto B4736f2;
case 0x4736f8:c.instructions+=6;goto B4736f8;
case 0x4736fe:c.instructions+=5;goto B4736fe;
case 0x473704:c.instructions+=4;goto B473704;
case 0x47370a:c.instructions+=3;goto B47370a;
case 0x47370c:c.instructions+=2;goto B47370c;
case 0x47370f:c.instructions+=1;goto B47370f;
case 0x473711:goto L473711;
case 0x473713:c.instructions+=1;goto B473713;
case 0x473719:goto L473719;
case 0x47371f:c.instructions+=6;goto B47371f;
case 0x473721:c.instructions+=5;goto B473721;
case 0x473725:c.instructions+=4;goto B473725;
case 0x47372b:c.instructions+=3;goto B47372b;
case 0x47372d:c.instructions+=2;goto B47372d;
case 0x473730:c.instructions+=1;goto B473730;
case 0x473732:goto L473732;
case 0x47373a:goto L47373a;
case 0x47373e:c.instructions+=4;goto B47373e;
case 0x473744:c.instructions+=3;goto B473744;
case 0x473746:c.instructions+=2;goto B473746;
case 0x473749:c.instructions+=1;goto B473749;
case 0x47374b:goto L47374b;
case 0x473753:goto L473753;
case 0x473757:c.instructions+=3;goto B473757;
case 0x47375c:c.instructions+=2;goto B47375c;
case 0x473761:c.instructions+=1;goto B473761;
case 0x473766:goto L473766;
case 0x47376c:c.instructions+=17;goto B47376c;
case 0x473772:c.instructions+=16;goto B473772;
case 0x473776:c.instructions+=15;goto B473776;
case 0x47377c:c.instructions+=14;goto B47377c;
case 0x473782:c.instructions+=13;goto B473782;
case 0x473784:c.instructions+=12;goto B473784;
case 0x473786:c.instructions+=11;goto B473786;
case 0x473788:c.instructions+=10;goto B473788;
case 0x47378a:c.instructions+=9;goto B47378a;
case 0x47378c:c.instructions+=8;goto B47378c;
case 0x47378e:c.instructions+=7;goto B47378e;
case 0x473790:c.instructions+=6;goto B473790;
case 0x473792:c.instructions+=5;goto B473792;
case 0x473798:c.instructions+=4;goto B473798;
case 0x47379e:c.instructions+=3;goto B47379e;
case 0x4737a0:c.instructions+=2;goto B4737a0;
case 0x4737a3:c.instructions+=1;goto B4737a3;
case 0x4737a5:goto L4737a5;
case 0x4737a7:c.instructions+=1;goto B4737a7;
case 0x4737ad:goto L4737ad;
case 0x4737b3:c.instructions+=10;goto B4737b3;
case 0x4737b5:c.instructions+=9;goto B4737b5;
case 0x4737bb:c.instructions+=8;goto B4737bb;
case 0x4737c1:c.instructions+=7;goto B4737c1;
case 0x4737c7:c.instructions+=6;goto B4737c7;
case 0x4737cd:c.instructions+=5;goto B4737cd;
case 0x4737d3:c.instructions+=4;goto B4737d3;
case 0x4737d9:c.instructions+=3;goto B4737d9;
case 0x4737db:c.instructions+=2;goto B4737db;
case 0x4737de:c.instructions+=1;goto B4737de;
case 0x4737e0:goto L4737e0;
case 0x4737e2:c.instructions+=1;goto B4737e2;
case 0x4737e8:goto L4737e8;
case 0x4737ee:c.instructions+=6;goto B4737ee;
case 0x4737f0:c.instructions+=5;goto B4737f0;
case 0x4737f4:c.instructions+=4;goto B4737f4;
case 0x4737fa:c.instructions+=3;goto B4737fa;
case 0x4737fc:c.instructions+=2;goto B4737fc;
case 0x4737ff:c.instructions+=1;goto B4737ff;
case 0x473801:goto L473801;
case 0x473809:goto L473809;
case 0x47380f:c.instructions+=14;goto B47380f;
case 0x473815:c.instructions+=13;goto B473815;
case 0x473817:c.instructions+=12;goto B473817;
case 0x473819:c.instructions+=11;goto B473819;
case 0x47381b:c.instructions+=10;goto B47381b;
case 0x47381d:c.instructions+=9;goto B47381d;
case 0x47381f:c.instructions+=8;goto B47381f;
case 0x473821:c.instructions+=7;goto B473821;
case 0x473823:c.instructions+=6;goto B473823;
case 0x473825:c.instructions+=5;goto B473825;
case 0x47382b:c.instructions+=4;goto B47382b;
case 0x473831:c.instructions+=3;goto B473831;
case 0x473833:c.instructions+=2;goto B473833;
case 0x473836:c.instructions+=1;goto B473836;
case 0x473838:goto L473838;
case 0x47383a:c.instructions+=1;goto B47383a;
case 0x473840:goto L473840;
case 0x473846:c.instructions+=10;goto B473846;
case 0x47384a:c.instructions+=9;goto B47384a;
case 0x473850:c.instructions+=8;goto B473850;
case 0x473856:c.instructions+=7;goto B473856;
case 0x47385c:c.instructions+=6;goto B47385c;
case 0x473862:c.instructions+=5;goto B473862;
case 0x473868:c.instructions+=4;goto B473868;
case 0x47386e:c.instructions+=3;goto B47386e;
case 0x473870:c.instructions+=2;goto B473870;
case 0x473873:c.instructions+=1;goto B473873;
case 0x473875:goto L473875;
case 0x473877:c.instructions+=1;goto B473877;
case 0x47387d:goto L47387d;
case 0x473883:c.instructions+=5;goto B473883;
case 0x473885:c.instructions+=4;goto B473885;
case 0x47388b:c.instructions+=3;goto B47388b;
case 0x47388d:c.instructions+=2;goto B47388d;
case 0x473890:c.instructions+=1;goto B473890;
case 0x473892:goto L473892;
case 0x473894:c.instructions+=1;goto B473894;
case 0x47389a:goto L47389a;
case 0x47389e:c.instructions+=1;goto B47389e;
case 0x4738a3:goto L4738a3;
case 0x4738a7:c.instructions+=2;goto B4738a7;
case 0x4738ad:c.instructions+=1;goto B4738ad;
case 0x4738b2:goto L4738b2;
case 0x4738b6:c.instructions+=2;goto B4738b6;
case 0x4738bc:c.instructions+=1;goto B4738bc;
case 0x4738c1:goto L4738c1;
case 0x4738c7:c.instructions+=1;goto B4738c7;
case 0x4738cc:goto L4738cc;
case 0x4738d2:c.instructions+=3;goto B4738d2;
case 0x4738d3:c.instructions+=2;goto B4738d3;
case 0x4738d6:c.instructions+=1;goto B4738d6;
case 0x4738e0:goto L4738e0;
case 0x4738e1:c.instructions+=2;goto B4738e1;
case 0x4738e3:c.instructions+=1;goto B4738e3;
case 0x4738e8:goto L4738e8;
case 0x4738ea:c.instructions+=11;goto B4738ea;
case 0x4738f0:c.instructions+=10;goto B4738f0;
case 0x4738f6:c.instructions+=9;goto B4738f6;
case 0x4738fc:c.instructions+=8;goto B4738fc;
case 0x473902:c.instructions+=7;goto B473902;
case 0x473908:c.instructions+=6;goto B473908;
case 0x47390e:c.instructions+=5;goto B47390e;
case 0x473912:c.instructions+=4;goto B473912;
case 0x473918:c.instructions+=3;goto B473918;
case 0x47391a:c.instructions+=2;goto B47391a;
case 0x47391b:c.instructions+=1;goto B47391b;
case 0x473920:goto L473920;
case 0x473921:c.instructions+=6;goto B473921;
case 0x473922:c.instructions+=5;goto B473922;
case 0x473923:c.instructions+=4;goto B473923;
case 0x473925:c.instructions+=3;goto B473925;
case 0x47392b:c.instructions+=2;goto B47392b;
case 0x47392d:c.instructions+=1;goto B47392d;
case 0x47392f:goto L47392f;
case 0x473931:c.instructions+=2;goto B473931;
case 0x473933:c.instructions+=1;goto B473933;
case 0x473935:goto L473935;
case 0x47393a:goto L47393a;
case 0x47393e:c.instructions+=2;goto B47393e;
case 0x47393f:c.instructions+=1;goto B47393f;
case 0x473944:goto L473944;
case 0x473947:c.instructions+=1;goto B473947;
case 0x47394c:goto L47394c;
case 0x473950:c.instructions+=4;goto B473950;
case 0x473952:c.instructions+=3;goto B473952;
case 0x473954:c.instructions+=2;goto B473954;
case 0x473955:c.instructions+=1;goto B473955;
case 0x473958:goto L473958;
case 0x47395d:goto L47395d;
case 0x473967:goto L473967;
case 0x473968:c.instructions+=3;goto B473968;
case 0x473969:c.instructions+=2;goto B473969;
case 0x47396a:c.instructions+=1;goto B47396a;
case 0x473970:goto L473970;
case 0x473976:c.instructions+=2;goto B473976;
case 0x473978:c.instructions+=1;goto B473978;
case 0x47397a:goto L47397a;
case 0x47397f:goto L47397f;
case 0x473980:goto L473980;
case 0x473981:c.instructions+=2;goto B473981;
case 0x473983:c.instructions+=1;goto B473983;
case 0x473988:goto L473988;
case 0x47398a:c.instructions+=11;goto B47398a;
case 0x473990:c.instructions+=10;goto B473990;
case 0x473996:c.instructions+=9;goto B473996;
case 0x47399c:c.instructions+=8;goto B47399c;
case 0x4739a2:c.instructions+=7;goto B4739a2;
case 0x4739a8:c.instructions+=6;goto B4739a8;
case 0x4739ae:c.instructions+=5;goto B4739ae;
case 0x4739b2:c.instructions+=4;goto B4739b2;
case 0x4739b8:c.instructions+=3;goto B4739b8;
case 0x4739ba:c.instructions+=2;goto B4739ba;
case 0x4739bb:c.instructions+=1;goto B4739bb;
case 0x4739c0:goto L4739c0;
case 0x4739c1:c.instructions+=6;goto B4739c1;
case 0x4739c2:c.instructions+=5;goto B4739c2;
case 0x4739c3:c.instructions+=4;goto B4739c3;
case 0x4739c5:c.instructions+=3;goto B4739c5;
case 0x4739cb:c.instructions+=2;goto B4739cb;
case 0x4739cd:c.instructions+=1;goto B4739cd;
case 0x4739cf:goto L4739cf;
case 0x4739d1:c.instructions+=2;goto B4739d1;
case 0x4739d3:c.instructions+=1;goto B4739d3;
case 0x4739d5:goto L4739d5;
case 0x4739da:goto L4739da;
case 0x4739de:c.instructions+=2;goto B4739de;
case 0x4739df:c.instructions+=1;goto B4739df;
case 0x4739e4:goto L4739e4;
case 0x4739e7:c.instructions+=1;goto B4739e7;
case 0x4739ec:goto L4739ec;
case 0x4739f0:c.instructions+=4;goto B4739f0;
case 0x4739f2:c.instructions+=3;goto B4739f2;
case 0x4739f4:c.instructions+=2;goto B4739f4;
case 0x4739f5:c.instructions+=1;goto B4739f5;
case 0x4739f8:goto L4739f8;
case 0x4739fd:goto L4739fd;
case 0x473a07:c.instructions+=4;goto B473a07;
case 0x473a08:c.instructions+=3;goto B473a08;
case 0x473a09:c.instructions+=2;goto B473a09;
case 0x473a0a:c.instructions+=1;goto B473a0a;
case 0x473a10:goto L473a10;
case 0x473a15:c.instructions+=4;goto B473a15;
case 0x473a16:c.instructions+=3;goto B473a16;
case 0x473a18:c.instructions+=2;goto B473a18;
case 0x473a1b:c.instructions+=1;goto B473a1b;
case 0x473a1d:goto L473a1d;
case 0x473a23:c.instructions+=2;goto B473a23;
case 0x473a25:c.instructions+=1;goto B473a25;
case 0x473a27:goto L473a27;
case 0x473a29:c.instructions+=2;goto B473a29;
case 0x473a2b:c.instructions+=1;goto B473a2b;
case 0x473a2e:goto L473a2e;
case 0x473a34:c.instructions+=6;goto B473a34;
case 0x473a37:c.instructions+=5;goto B473a37;
case 0x473a3d:c.instructions+=4;goto B473a3d;
case 0x473a42:c.instructions+=3;goto B473a42;
case 0x473a48:c.instructions+=2;goto B473a48;
case 0x473a4e:c.instructions+=1;goto B473a4e;
case 0x473a53:goto L473a53;
case 0x473a59:c.instructions+=1;goto B473a59;
case 0x473a5f:goto L473a5f;
case 0x473a60:c.instructions+=1;goto B473a60;
case 0x473a70:goto L473a70;
case 0x473a71:c.instructions+=3;goto B473a71;
case 0x473a72:c.instructions+=2;goto B473a72;
case 0x473a74:c.instructions+=1;goto B473a74;
case 0x473a79:goto L473a79;
case 0x473a7b:c.instructions+=10;goto B473a7b;
case 0x473a81:c.instructions+=9;goto B473a81;
case 0x473a87:c.instructions+=8;goto B473a87;
case 0x473a8d:c.instructions+=7;goto B473a8d;
case 0x473a93:c.instructions+=6;goto B473a93;
case 0x473a97:c.instructions+=5;goto B473a97;
case 0x473a9d:c.instructions+=4;goto B473a9d;
case 0x473aa3:c.instructions+=3;goto B473aa3;
case 0x473aa9:c.instructions+=2;goto B473aa9;
case 0x473aae:c.instructions+=1;goto B473aae;
case 0x473ab0:goto L473ab0;
case 0x473ab3:c.instructions+=11;goto B473ab3;
case 0x473ab6:c.instructions+=10;goto B473ab6;
case 0x473ab8:c.instructions+=9;goto B473ab8;
case 0x473abb:c.instructions+=8;goto B473abb;
case 0x473abe:c.instructions+=7;goto B473abe;
case 0x473ac1:c.instructions+=6;goto B473ac1;
case 0x473ac4:c.instructions+=5;goto B473ac4;
case 0x473ac6:c.instructions+=4;goto B473ac6;
case 0x473ac9:c.instructions+=3;goto B473ac9;
case 0x473acc:c.instructions+=2;goto B473acc;
case 0x473acd:c.instructions+=1;goto B473acd;
case 0x473acf:goto L473acf;
case 0x473ad0:c.instructions+=3;goto B473ad0;
case 0x473ad2:c.instructions+=2;goto B473ad2;
case 0x473ad3:c.instructions+=1;goto B473ad3;
case 0x473ae0:goto L473ae0;
case 0x473ae1:c.instructions+=7;goto B473ae1;
case 0x473ae2:c.instructions+=6;goto B473ae2;
case 0x473ae3:c.instructions+=5;goto B473ae3;
case 0x473ae4:c.instructions+=4;goto B473ae4;
case 0x473ae6:c.instructions+=3;goto B473ae6;
case 0x473ae7:c.instructions+=2;goto B473ae7;
case 0x473aed:c.instructions+=1;goto B473aed;
case 0x473af2:goto L473af2;
case 0x473af4:c.instructions+=2;goto B473af4;
case 0x473af6:c.instructions+=1;goto B473af6;
case 0x473af8:goto L473af8;
case 0x473afa:c.instructions+=2;goto B473afa;
case 0x473afc:c.instructions+=1;goto B473afc;
case 0x473afe:goto L473afe;
case 0x473b03:goto L473b03;
case 0x473b07:c.instructions+=2;goto B473b07;
case 0x473b08:c.instructions+=1;goto B473b08;
case 0x473b0d:goto L473b0d;
case 0x473b10:c.instructions+=1;goto B473b10;
case 0x473b15:goto L473b15;
case 0x473b19:c.instructions+=4;goto B473b19;
case 0x473b1b:c.instructions+=3;goto B473b1b;
case 0x473b1d:c.instructions+=2;goto B473b1d;
case 0x473b1e:c.instructions+=1;goto B473b1e;
case 0x473b21:goto L473b21;
case 0x473b26:goto L473b26;
case 0x473b2c:goto L473b2c;
case 0x473b2f:c.instructions+=2;goto B473b2f;
case 0x473b30:c.instructions+=1;goto B473b30;
case 0x473b32:goto L473b32;
case 0x473b33:c.instructions+=6;goto B473b33;
case 0x473b34:c.instructions+=5;goto B473b34;
case 0x473b3b:c.instructions+=4;goto B473b3b;
case 0x473b3c:c.instructions+=3;goto B473b3c;
case 0x473b3d:c.instructions+=2;goto B473b3d;
case 0x473b3e:c.instructions+=1;goto B473b3e;
case 0x473b40:goto L473b40;
case 0x473b41:c.instructions+=6;goto B473b41;
case 0x473b45:c.instructions+=5;goto B473b45;
case 0x473b47:c.instructions+=4;goto B473b47;
case 0x473b48:c.instructions+=3;goto B473b48;
case 0x473b4a:c.instructions+=2;goto B473b4a;
case 0x473b4c:c.instructions+=1;goto B473b4c;
case 0x473b4f:goto L473b4f;
case 0x473b51:c.instructions+=4;goto B473b51;
case 0x473b54:c.instructions+=3;goto B473b54;
case 0x473b59:c.instructions+=2;goto B473b59;
case 0x473b5a:c.instructions+=1;goto B473b5a;
case 0x473b5c:goto L473b5c;
case 0x473b5d:c.instructions+=1;goto B473b5d;
case 0x473b5f:goto L473b5f;
case 0x473b62:c.instructions+=1;goto B473b62;
case 0x473b64:goto L473b64;
case 0x473b69:c.instructions+=2;goto B473b69;
case 0x473b6b:c.instructions+=1;goto B473b6b;
case 0x473b70:goto L473b70;
case 0x473b73:c.instructions+=3;goto B473b73;
case 0x473b74:c.instructions+=2;goto B473b74;
case 0x473b75:c.instructions+=1;goto B473b75;
case 0x473b78:goto L473b78;
case 0x473b7e:c.instructions+=3;goto B473b7e;
case 0x473b7f:c.instructions+=2;goto B473b7f;
case 0x473b80:c.instructions+=1;goto B473b80;
case 0x473b83:goto L473b83;
case 0x473b89:c.instructions+=3;goto B473b89;
case 0x473b8a:c.instructions+=2;goto B473b8a;
case 0x473b8b:c.instructions+=1;goto B473b8b;
case 0x473b8e:goto L473b8e;
case 0x473b94:c.instructions+=3;goto B473b94;
case 0x473b95:c.instructions+=2;goto B473b95;
case 0x473b96:c.instructions+=1;goto B473b96;
case 0x473ba0:goto L473ba0;
case 0x473ba1:c.instructions+=7;goto B473ba1;
case 0x473ba3:c.instructions+=6;goto B473ba3;
case 0x473ba6:c.instructions+=5;goto B473ba6;
case 0x473ba9:c.instructions+=4;goto B473ba9;
case 0x473bac:c.instructions+=3;goto B473bac;
case 0x473bb2:c.instructions+=2;goto B473bb2;
case 0x473bb4:c.instructions+=1;goto B473bb4;
case 0x473bb6:goto L473bb6;
case 0x473bc0:goto L473bc0;
case 0x473bc6:c.instructions+=4;goto B473bc6;
case 0x473bcc:c.instructions+=3;goto B473bcc;
case 0x473bd2:c.instructions+=2;goto B473bd2;
case 0x473bd4:c.instructions+=1;goto B473bd4;
case 0x473bd9:goto L473bd9;
case 0x473be0:c.instructions+=2;goto B473be0;
case 0x473be1:c.instructions+=1;goto B473be1;
case 0x473bf0:goto L473bf0;
case 0x473bf1:c.instructions+=3;goto B473bf1;
case 0x473bf2:c.instructions+=2;goto B473bf2;
case 0x473bf4:c.instructions+=1;goto B473bf4;
case 0x473bf9:goto L473bf9;
case 0x473bfb:c.instructions+=12;goto B473bfb;
case 0x473c01:c.instructions+=11;goto B473c01;
case 0x473c07:c.instructions+=10;goto B473c07;
case 0x473c0d:c.instructions+=9;goto B473c0d;
case 0x473c13:c.instructions+=8;goto B473c13;
case 0x473c19:c.instructions+=7;goto B473c19;
case 0x473c1f:c.instructions+=6;goto B473c1f;
case 0x473c25:c.instructions+=5;goto B473c25;
case 0x473c2b:c.instructions+=4;goto B473c2b;
case 0x473c2e:c.instructions+=3;goto B473c2e;
case 0x473c30:c.instructions+=2;goto B473c30;
case 0x473c35:c.instructions+=1;goto B473c35;
case 0x473c3a:goto L473c3a;
case 0x473c3c:goto L473c3c;
case 0x473c46:c.instructions+=5;goto B473c46;
case 0x473c47:c.instructions+=4;goto B473c47;
case 0x473c4d:c.instructions+=3;goto B473c4d;
case 0x473c4f:c.instructions+=2;goto B473c4f;
case 0x473c50:c.instructions+=1;goto B473c50;
case 0x473c60:goto L473c60;
case 0x473c62:c.instructions+=14;goto B473c62;
case 0x473c67:c.instructions+=13;goto B473c67;
case 0x473c6d:c.instructions+=12;goto B473c6d;
case 0x473c6e:c.instructions+=11;goto B473c6e;
case 0x473c75:c.instructions+=10;goto B473c75;
case 0x473c78:c.instructions+=9;goto B473c78;
case 0x473c79:c.instructions+=8;goto B473c79;
case 0x473c7a:c.instructions+=7;goto B473c7a;
case 0x473c7c:c.instructions+=6;goto B473c7c;
case 0x473c80:c.instructions+=5;goto B473c80;
case 0x473c86:c.instructions+=4;goto B473c86;
case 0x473c8c:c.instructions+=3;goto B473c8c;
case 0x473c8e:c.instructions+=2;goto B473c8e;
case 0x473c96:c.instructions+=1;goto B473c96;
case 0x473c98:goto L473c98;
case 0x473c9a:c.instructions+=2;goto B473c9a;
case 0x473c9c:c.instructions+=1;goto B473c9c;
case 0x473c9e:goto L473c9e;
case 0x473ca3:goto L473ca3;
case 0x473ca7:c.instructions+=2;goto B473ca7;
case 0x473ca8:c.instructions+=1;goto B473ca8;
case 0x473cad:goto L473cad;
case 0x473cb0:c.instructions+=1;goto B473cb0;
case 0x473cb5:goto L473cb5;
case 0x473cb9:c.instructions+=4;goto B473cb9;
case 0x473cbb:c.instructions+=3;goto B473cbb;
case 0x473cbd:c.instructions+=2;goto B473cbd;
case 0x473cbe:c.instructions+=1;goto B473cbe;
case 0x473cc1:goto L473cc1;
case 0x473cc6:goto L473cc6;
case 0x473cca:c.instructions+=6;goto B473cca;
case 0x473cd0:c.instructions+=5;goto B473cd0;
case 0x473cd1:c.instructions+=4;goto B473cd1;
case 0x473cd2:c.instructions+=3;goto B473cd2;
case 0x473cd9:c.instructions+=2;goto B473cd9;
case 0x473cdc:c.instructions+=1;goto B473cdc;
case 0x473ce0:goto L473ce0;
case 0x473ce1:c.instructions+=2;goto B473ce1;
case 0x473ce3:c.instructions+=1;goto B473ce3;
case 0x473ce8:goto L473ce8;
case 0x473ced:c.instructions+=11;goto B473ced;
case 0x473cf0:c.instructions+=10;goto B473cf0;
case 0x473cf1:c.instructions+=9;goto B473cf1;
case 0x473cf6:c.instructions+=8;goto B473cf6;
case 0x473cf8:c.instructions+=7;goto B473cf8;
case 0x473cfe:c.instructions+=6;goto B473cfe;
case 0x473d00:c.instructions+=5;goto B473d00;
case 0x473d06:c.instructions+=4;goto B473d06;
case 0x473d0c:c.instructions+=3;goto B473d0c;
case 0x473d12:c.instructions+=2;goto B473d12;
case 0x473d13:c.instructions+=1;goto B473d13;
case 0x473d20:goto L473d20;
case 0x473d26:c.instructions+=1;goto B473d26;
case 0x473d30:goto L473d30;
case 0x473d31:c.instructions+=2;goto B473d31;
case 0x473d33:c.instructions+=1;goto B473d33;
case 0x473d38:goto L473d38;
case 0x473d3e:c.instructions+=4;goto B473d3e;
case 0x473d44:c.instructions+=3;goto B473d44;
case 0x473d49:c.instructions+=2;goto B473d49;
case 0x473d4b:c.instructions+=1;goto B473d4b;
case 0x473d50:goto L473d50;
case 0x473d52:c.instructions+=9;goto B473d52;
case 0x473d55:c.instructions+=8;goto B473d55;
case 0x473d58:c.instructions+=7;goto B473d58;
case 0x473d5b:c.instructions+=6;goto B473d5b;
case 0x473d5e:c.instructions+=5;goto B473d5e;
case 0x473d65:c.instructions+=4;goto B473d65;
case 0x473d68:c.instructions+=3;goto B473d68;
case 0x473d6b:c.instructions+=2;goto B473d6b;
case 0x473d6c:c.instructions+=1;goto B473d6c;
case 0x473d6e:goto L473d6e;
case 0x473d74:c.instructions+=5;goto B473d74;
case 0x473d7a:c.instructions+=4;goto B473d7a;
case 0x473d80:c.instructions+=3;goto B473d80;
case 0x473d82:c.instructions+=2;goto B473d82;
case 0x473d83:c.instructions+=1;goto B473d83;
case 0x473d90:goto L473d90;
case 0x473d92:c.instructions+=15;goto B473d92;
case 0x473d97:c.instructions+=14;goto B473d97;
case 0x473d9d:c.instructions+=13;goto B473d9d;
case 0x473d9e:c.instructions+=12;goto B473d9e;
case 0x473da5:c.instructions+=11;goto B473da5;
case 0x473da6:c.instructions+=10;goto B473da6;
case 0x473da7:c.instructions+=9;goto B473da7;
case 0x473da8:c.instructions+=8;goto B473da8;
case 0x473da9:c.instructions+=7;goto B473da9;
case 0x473daa:c.instructions+=6;goto B473daa;
case 0x473dae:c.instructions+=5;goto B473dae;
case 0x473db4:c.instructions+=4;goto B473db4;
case 0x473db6:c.instructions+=3;goto B473db6;
case 0x473dba:c.instructions+=2;goto B473dba;
case 0x473dbc:c.instructions+=1;goto B473dbc;
case 0x473dc2:goto L473dc2;
case 0x473dc8:c.instructions+=3;goto B473dc8;
case 0x473dcb:c.instructions+=2;goto B473dcb;
case 0x473dcd:c.instructions+=1;goto B473dcd;
case 0x473dcf:goto L473dcf;
case 0x473dd2:c.instructions+=1;goto B473dd2;
case 0x473dd4:goto L473dd4;
case 0x473dd7:c.instructions+=1;goto B473dd7;
case 0x473dd9:goto L473dd9;
case 0x473ddc:c.instructions+=1;goto B473ddc;
case 0x473dde:goto L473dde;
case 0x473de0:c.instructions+=2;goto B473de0;
case 0x473de2:c.instructions+=1;goto B473de2;
case 0x473de4:goto L473de4;
case 0x473de7:c.instructions+=1;goto B473de7;
case 0x473de9:goto L473de9;
case 0x473dee:goto L473dee;
case 0x473df1:c.instructions+=2;goto B473df1;
case 0x473df2:c.instructions+=1;goto B473df2;
case 0x473df7:goto L473df7;
case 0x473dfa:c.instructions+=1;goto B473dfa;
case 0x473dff:goto L473dff;
case 0x473e02:goto L473e02;
case 0x473e04:c.instructions+=2;goto B473e04;
case 0x473e06:c.instructions+=1;goto B473e06;
case 0x473e08:goto L473e08;
case 0x473e0a:c.instructions+=2;goto B473e0a;
case 0x473e0c:c.instructions+=1;goto B473e0c;
case 0x473e0e:goto L473e0e;
case 0x473e11:c.instructions+=3;goto B473e11;
case 0x473e13:c.instructions+=2;goto B473e13;
case 0x473e15:c.instructions+=1;goto B473e15;
case 0x473e17:goto L473e17;
case 0x473e19:c.instructions+=2;goto B473e19;
case 0x473e1b:c.instructions+=1;goto B473e1b;
case 0x473e1d:goto L473e1d;
case 0x473e20:c.instructions+=3;goto B473e20;
case 0x473e22:c.instructions+=2;goto B473e22;
case 0x473e25:c.instructions+=1;goto B473e25;
case 0x473e27:goto L473e27;
case 0x473e28:c.instructions+=1;goto B473e28;
case 0x473e2d:goto L473e2d;
case 0x473e30:goto L473e30;
case 0x473e34:c.instructions+=4;goto B473e34;
case 0x473e37:c.instructions+=3;goto B473e37;
case 0x473e38:c.instructions+=2;goto B473e38;
case 0x473e3b:c.instructions+=1;goto B473e3b;
case 0x473e3d:goto L473e3d;
case 0x473e45:c.instructions+=1;goto B473e45;
case 0x473e4a:goto L473e4a;
case 0x473e4e:c.instructions+=7;goto B473e4e;
case 0x473e4f:c.instructions+=6;goto B473e4f;
case 0x473e50:c.instructions+=5;goto B473e50;
case 0x473e51:c.instructions+=4;goto B473e51;
case 0x473e52:c.instructions+=3;goto B473e52;
case 0x473e59:c.instructions+=2;goto B473e59;
case 0x473e5c:c.instructions+=1;goto B473e5c;
case 0x473e60:goto L473e60;
case 0x473e63:c.instructions+=5;goto B473e63;
case 0x473e64:c.instructions+=4;goto B473e64;
case 0x473e66:c.instructions+=3;goto B473e66;
case 0x473e6c:c.instructions+=2;goto B473e6c;
case 0x473e6e:c.instructions+=1;goto B473e6e;
case 0x473e74:goto L473e74;
case 0x473e76:c.instructions+=2;goto B473e76;
case 0x473e78:c.instructions+=1;goto B473e78;
case 0x473e7b:goto L473e7b;
case 0x473e81:c.instructions+=12;goto B473e81;
case 0x473e87:c.instructions+=11;goto B473e87;
case 0x473e8d:c.instructions+=10;goto B473e8d;
case 0x473e93:c.instructions+=9;goto B473e93;
case 0x473e95:c.instructions+=8;goto B473e95;
case 0x473e9b:c.instructions+=7;goto B473e9b;
case 0x473e9e:c.instructions+=6;goto B473e9e;
case 0x473ea2:c.instructions+=5;goto B473ea2;
case 0x473ea5:c.instructions+=4;goto B473ea5;
case 0x473ea7:c.instructions+=3;goto B473ea7;
case 0x473eaa:c.instructions+=2;goto B473eaa;
case 0x473eb2:c.instructions+=1;goto B473eb2;
case 0x473eb4:goto L473eb4;
case 0x473eba:c.instructions+=4;goto B473eba;
case 0x473ec0:c.instructions+=3;goto B473ec0;
case 0x473ec6:c.instructions+=2;goto B473ec6;
case 0x473eca:c.instructions+=1;goto B473eca;
case 0x473ece:goto L473ece;
case 0x473ecf:c.instructions+=5;goto B473ecf;
case 0x473ed5:c.instructions+=4;goto B473ed5;
case 0x473ed8:c.instructions+=3;goto B473ed8;
case 0x473eda:c.instructions+=2;goto B473eda;
case 0x473edb:c.instructions+=1;goto B473edb;
case 0x473edd:goto L473edd;
case 0x473edf:c.instructions+=1;goto B473edf;
case 0x473ee1:goto L473ee1;
case 0x473ee4:c.instructions+=1;goto B473ee4;
case 0x473ee6:goto L473ee6;
case 0x473eeb:goto L473eeb;
case 0x473eed:c.instructions+=4;goto B473eed;
case 0x473ef0:c.instructions+=3;goto B473ef0;
case 0x473ef2:c.instructions+=2;goto B473ef2;
case 0x473ef8:c.instructions+=1;goto B473ef8;
case 0x473efa:goto L473efa;
case 0x473efc:c.instructions+=1;goto B473efc;
case 0x473efe:goto L473efe;
case 0x473f01:c.instructions+=1;goto B473f01;
case 0x473f03:goto L473f03;
case 0x473f08:goto L473f08;
case 0x473f0e:c.instructions+=5;goto B473f0e;
case 0x473f14:c.instructions+=4;goto B473f14;
case 0x473f17:c.instructions+=3;goto B473f17;
case 0x473f1a:c.instructions+=2;goto B473f1a;
case 0x473f1c:c.instructions+=1;goto B473f1c;
case 0x473f1e:goto L473f1e;
case 0x473f20:c.instructions+=1;goto B473f20;
case 0x473f22:goto L473f22;
case 0x473f25:c.instructions+=1;goto B473f25;
case 0x473f27:goto L473f27;
case 0x473f2c:goto L473f2c;
case 0x473f31:goto L473f31;
case 0x473f37:c.instructions+=4;goto B473f37;
case 0x473f3d:c.instructions+=3;goto B473f3d;
case 0x473f3e:c.instructions+=2;goto B473f3e;
case 0x473f3f:c.instructions+=1;goto B473f3f;
case 0x473f44:goto L473f44;
case 0x473f46:c.instructions+=5;goto B473f46;
case 0x473f49:c.instructions+=4;goto B473f49;
case 0x473f4b:c.instructions+=3;goto B473f4b;
case 0x473f4d:c.instructions+=2;goto B473f4d;
case 0x473f4f:c.instructions+=1;goto B473f4f;
case 0x473f52:goto L473f52;
case 0x473f58:c.instructions+=3;goto B473f58;
case 0x473f59:c.instructions+=2;goto B473f59;
case 0x473f5a:c.instructions+=1;goto B473f5a;
case 0x473f5f:goto L473f5f;
case 0x473f63:c.instructions+=3;goto B473f63;
case 0x473f69:c.instructions+=2;goto B473f69;
case 0x473f6f:c.instructions+=1;goto B473f6f;
case 0x473f74:goto L473f74;
case 0x473f7a:c.instructions+=3;goto B473f7a;
case 0x473f7b:c.instructions+=2;goto B473f7b;
case 0x473f7c:c.instructions+=1;goto B473f7c;
case 0x473f81:goto L473f81;
case 0x473f87:c.instructions+=2;goto B473f87;
case 0x473f8d:c.instructions+=1;goto B473f8d;
case 0x473f92:goto L473f92;
case 0x473f98:c.instructions+=3;goto B473f98;
case 0x473f99:c.instructions+=2;goto B473f99;
case 0x473f9a:c.instructions+=1;goto B473f9a;
case 0x473f9f:goto L473f9f;
case 0x473fa5:c.instructions+=3;goto B473fa5;
case 0x473fa6:c.instructions+=2;goto B473fa6;
case 0x473fa7:c.instructions+=1;goto B473fa7;
case 0x473fac:goto L473fac;
case 0x473fb2:c.instructions+=4;goto B473fb2;
case 0x473fb3:c.instructions+=3;goto B473fb3;
case 0x473fb5:c.instructions+=2;goto B473fb5;
case 0x473fb6:c.instructions+=1;goto B473fb6;
case 0x473fbb:goto L473fbb;
case 0x473fbe:c.instructions+=1;goto B473fbe;
case 0x473fc3:goto L473fc3;
case 0x473fc7:c.instructions+=4;goto B473fc7;
case 0x473fcc:c.instructions+=3;goto B473fcc;
case 0x473fcd:c.instructions+=2;goto B473fcd;
case 0x473fd3:c.instructions+=1;goto B473fd3;
case 0x473fd8:goto L473fd8;
case 0x473fde:c.instructions+=6;goto B473fde;
case 0x473fe1:c.instructions+=5;goto B473fe1;
case 0x473fe3:c.instructions+=4;goto B473fe3;
case 0x473fe4:c.instructions+=3;goto B473fe4;
case 0x473fe8:c.instructions+=2;goto B473fe8;
case 0x473fe9:c.instructions+=1;goto B473fe9;
case 0x473feb:goto L473feb;
case 0x473ff1:c.instructions+=1;goto B473ff1;
case 0x473ff3:goto L473ff3;
case 0x473ff7:c.instructions+=4;goto B473ff7;
case 0x473ff8:c.instructions+=3;goto B473ff8;
case 0x473ffb:c.instructions+=2;goto B473ffb;
case 0x473fff:c.instructions+=1;goto B473fff;
default:missing_instruction(c.pc);}
B473003:L473003:{c.instructions+=2;NFSU2_TR(0x473003);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B473006:{NFSU2_TR(0x473006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473010:L473010:{c.instructions+=9;NFSU2_TR(0x473010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473011:{NFSU2_TR(0x473011);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473012:{NFSU2_TR(0x473012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473013:{NFSU2_TR(0x473013);
__builtin_memmove((R+24),(R+4),4);
}
B473015:{NFSU2_TR(0x473015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473016:{NFSU2_TR(0x473016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47301c:{NFSU2_TR(0x47301c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47301e:{NFSU2_TR(0x47301e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473020:{NFSU2_TR(0x473020);
if(r1(R+518)){{goto L473055;}}
}
B473022:L473022:{c.instructions+=3;NFSU2_TR(0x473022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473024:{NFSU2_TR(0x473024);
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
B473026:{NFSU2_TR(0x473026);
if(r1(R+518)){{goto L47302d;}}
}
B473028:L473028:{c.instructions+=1;NFSU2_TR(0x473028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47302dull));
TAIL_STATIC(0x735550u,735);
}
B47302d:L47302d:{c.instructions+=3;NFSU2_TR(0x47302d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B473031:{NFSU2_TR(0x473031);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473032:{NFSU2_TR(0x473032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473037ull));
TAIL_STATIC(0x734df0u,734);
}
B473037:L473037:{c.instructions+=2;NFSU2_TR(0x473037);
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
B47303a:{NFSU2_TR(0x47303a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47303full));
TAIL_STATIC(0x734e40u,734);
}
B47303f:L47303f:{c.instructions+=5;NFSU2_TR(0x47303f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473043:{NFSU2_TR(0x473043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473045:{NFSU2_TR(0x473045);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473046:{NFSU2_TR(0x473046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473047:{NFSU2_TR(0x473047);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47304aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47304a:L47304a:{c.instructions+=1;NFSU2_TR(0x47304a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47304full));
TAIL_STATIC(0x734e60u,734);
}
B47304f:L47304f:{c.instructions+=1;NFSU2_TR(0x47304f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473055:L473055:{c.instructions+=3;NFSU2_TR(0x473055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47305b:{NFSU2_TR(0x47305b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47305d:{NFSU2_TR(0x47305d);
if(r1(R+518)){{goto L473092;}}
}
B47305f:L47305f:{c.instructions+=3;NFSU2_TR(0x47305f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473061:{NFSU2_TR(0x473061);
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
B473063:{NFSU2_TR(0x473063);
if(r1(R+518)){{goto L47306a;}}
}
B473065:L473065:{c.instructions+=1;NFSU2_TR(0x473065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47306aull));
TAIL_STATIC(0x735550u,735);
}
B47306a:L47306a:{c.instructions+=3;NFSU2_TR(0x47306a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47306e:{NFSU2_TR(0x47306e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47306f:{NFSU2_TR(0x47306f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473074ull));
TAIL_STATIC(0x734df0u,734);
}
B473074:L473074:{c.instructions+=2;NFSU2_TR(0x473074);
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
B473077:{NFSU2_TR(0x473077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47307cull));
TAIL_STATIC(0x734e40u,734);
}
B47307c:L47307c:{c.instructions+=5;NFSU2_TR(0x47307c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473080:{NFSU2_TR(0x473080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473082:{NFSU2_TR(0x473082);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473083:{NFSU2_TR(0x473083);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473084:{NFSU2_TR(0x473084);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473087ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473087:L473087:{c.instructions+=1;NFSU2_TR(0x473087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47308cull));
TAIL_STATIC(0x734e60u,734);
}
B47308c:L47308c:{c.instructions+=1;NFSU2_TR(0x47308c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473092:L473092:{c.instructions+=3;NFSU2_TR(0x473092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B473098:{NFSU2_TR(0x473098);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47309a:{NFSU2_TR(0x47309a);
if(r1(R+518)){{goto L4730cf;}}
}
B47309c:L47309c:{c.instructions+=3;NFSU2_TR(0x47309c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47309e:{NFSU2_TR(0x47309e);
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
B4730a0:{NFSU2_TR(0x4730a0);
if(r1(R+518)){{goto L4730a7;}}
}
B4730a2:L4730a2:{c.instructions+=1;NFSU2_TR(0x4730a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730a7ull));
TAIL_STATIC(0x735550u,735);
}
B4730a7:L4730a7:{c.instructions+=3;NFSU2_TR(0x4730a7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4730ab:{NFSU2_TR(0x4730ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730ac:{NFSU2_TR(0x4730ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730b1ull));
TAIL_STATIC(0x734df0u,734);
}
B4730b1:L4730b1:{c.instructions+=2;NFSU2_TR(0x4730b1);
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
B4730b4:{NFSU2_TR(0x4730b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730b9ull));
TAIL_STATIC(0x734e40u,734);
}
B4730b9:L4730b9:{c.instructions+=5;NFSU2_TR(0x4730b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4730bd:{NFSU2_TR(0x4730bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4730bf:{NFSU2_TR(0x4730bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730c0:{NFSU2_TR(0x4730c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730c1:{NFSU2_TR(0x4730c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4730c4:L4730c4:{c.instructions+=1;NFSU2_TR(0x4730c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730c9ull));
TAIL_STATIC(0x734e60u,734);
}
B4730c9:L4730c9:{c.instructions+=1;NFSU2_TR(0x4730c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4730cf:L4730cf:{c.instructions+=3;NFSU2_TR(0x4730cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4730d5:{NFSU2_TR(0x4730d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4730d7:{NFSU2_TR(0x4730d7);
if(r1(R+518)){{goto L47310c;}}
}
B4730d9:L4730d9:{c.instructions+=3;NFSU2_TR(0x4730d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4730db:{NFSU2_TR(0x4730db);
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
B4730dd:{NFSU2_TR(0x4730dd);
if(r1(R+518)){{goto L4730e4;}}
}
B4730df:L4730df:{c.instructions+=1;NFSU2_TR(0x4730df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730e4ull));
TAIL_STATIC(0x735550u,735);
}
B4730e4:L4730e4:{c.instructions+=3;NFSU2_TR(0x4730e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4730e8:{NFSU2_TR(0x4730e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730e9:{NFSU2_TR(0x4730e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730eeull));
TAIL_STATIC(0x734df0u,734);
}
B4730ee:L4730ee:{c.instructions+=2;NFSU2_TR(0x4730ee);
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
B4730f1:{NFSU2_TR(0x4730f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4730f6ull));
TAIL_STATIC(0x734e40u,734);
}
B4730f6:L4730f6:{c.instructions+=5;NFSU2_TR(0x4730f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4730fa:{NFSU2_TR(0x4730fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4730fc:{NFSU2_TR(0x4730fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730fd:{NFSU2_TR(0x4730fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4730fe:{NFSU2_TR(0x4730fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473101ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473101:L473101:{c.instructions+=1;NFSU2_TR(0x473101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473106ull));
TAIL_STATIC(0x734e60u,734);
}
B473106:L473106:{c.instructions+=1;NFSU2_TR(0x473106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47310c:L47310c:{c.instructions+=3;NFSU2_TR(0x47310c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473112:{NFSU2_TR(0x473112);
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
B473114:{NFSU2_TR(0x473114);
if(r1(R+518)){{goto L47311c;}}
}
B473116:L473116:{c.instructions+=3;NFSU2_TR(0x473116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473118:{NFSU2_TR(0x473118);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47311a:{NFSU2_TR(0x47311a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47311cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47311c:L47311c:{c.instructions+=4;NFSU2_TR(0x47311c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473122:{NFSU2_TR(0x473122);
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
B473124:{NFSU2_TR(0x473124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47312a:{NFSU2_TR(0x47312a);
if(r1(R+518)){{goto L473132;}}
}
B47312c:L47312c:{c.instructions+=3;NFSU2_TR(0x47312c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47312e:{NFSU2_TR(0x47312e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473130:{NFSU2_TR(0x473130);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473132ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B473132:L473132:{c.instructions+=4;NFSU2_TR(0x473132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B473138:{NFSU2_TR(0x473138);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47313a:{NFSU2_TR(0x47313a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473140:{NFSU2_TR(0x473140);
if(r1(R+518)){{goto L47316f;}}
}
B473142:L473142:{c.instructions+=3;NFSU2_TR(0x473142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473144:{NFSU2_TR(0x473144);
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
B473146:{NFSU2_TR(0x473146);
if(r1(R+518)){{goto L47314d;}}
}
B473148:L473148:{c.instructions+=1;NFSU2_TR(0x473148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47314dull));
TAIL_STATIC(0x735550u,735);
}
B47314d:L47314d:{c.instructions+=3;NFSU2_TR(0x47314d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B473151:{NFSU2_TR(0x473151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473152:{NFSU2_TR(0x473152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473157ull));
TAIL_STATIC(0x734df0u,734);
}
B473157:L473157:{c.instructions+=2;NFSU2_TR(0x473157);
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
B47315a:{NFSU2_TR(0x47315a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47315full));
TAIL_STATIC(0x734e40u,734);
}
B47315f:L47315f:{c.instructions+=5;NFSU2_TR(0x47315f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473163:{NFSU2_TR(0x473163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473165:{NFSU2_TR(0x473165);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473166:{NFSU2_TR(0x473166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473167:{NFSU2_TR(0x473167);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47316aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47316a:L47316a:{c.instructions+=1;NFSU2_TR(0x47316a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47316full));
TAIL_STATIC(0x734e60u,734);
}
B47316f:L47316f:{c.instructions+=4;NFSU2_TR(0x47316f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B473175:{NFSU2_TR(0x473175);
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
B473177:{NFSU2_TR(0x473177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47317d:{NFSU2_TR(0x47317d);
if(r1(R+518)){{goto L4731ac;}}
}
B47317f:L47317f:{c.instructions+=3;NFSU2_TR(0x47317f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473181:{NFSU2_TR(0x473181);
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
B473183:{NFSU2_TR(0x473183);
if(r1(R+518)){{goto L47318a;}}
}
B473185:L473185:{c.instructions+=1;NFSU2_TR(0x473185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47318aull));
TAIL_STATIC(0x735550u,735);
}
B47318a:L47318a:{c.instructions+=3;NFSU2_TR(0x47318a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47318e:{NFSU2_TR(0x47318e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47318f:{NFSU2_TR(0x47318f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473194ull));
TAIL_STATIC(0x734df0u,734);
}
B473194:L473194:{c.instructions+=2;NFSU2_TR(0x473194);
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
B473197:{NFSU2_TR(0x473197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47319cull));
TAIL_STATIC(0x734e40u,734);
}
B47319c:L47319c:{c.instructions+=5;NFSU2_TR(0x47319c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4731a0:{NFSU2_TR(0x4731a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4731a2:{NFSU2_TR(0x4731a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731a3:{NFSU2_TR(0x4731a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731a4:{NFSU2_TR(0x4731a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4731a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4731a7:L4731a7:{c.instructions+=1;NFSU2_TR(0x4731a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4731acull));
TAIL_STATIC(0x734e60u,734);
}
B4731ac:L4731ac:{c.instructions+=6;NFSU2_TR(0x4731ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4731ad:{NFSU2_TR(0x4731ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4731b3:{NFSU2_TR(0x4731b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4731b4:{NFSU2_TR(0x4731b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4731b5:{NFSU2_TR(0x4731b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4731b6:{NFSU2_TR(0x4731b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4731c0:L4731c0:{c.instructions+=11;NFSU2_TR(0x4731c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4731c6:{NFSU2_TR(0x4731c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731c8:{NFSU2_TR(0x4731c8);
u8 U[4];
w4(U+0,u32(0x772466ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731cd:{NFSU2_TR(0x4731cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731ce:{NFSU2_TR(0x4731ce);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4731d3:{NFSU2_TR(0x4731d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4731da:{NFSU2_TR(0x4731da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B4731dd:{NFSU2_TR(0x4731dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4731df:{NFSU2_TR(0x4731df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4731e0:{NFSU2_TR(0x4731e0);
__builtin_memmove((R+20),(R+4),4);
}
B4731e2:{NFSU2_TR(0x4731e2);
if(r1(R+518)){{goto L4735b9;}}
}
B4731e8:L4731e8:{c.instructions+=3;NFSU2_TR(0x4731e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4731ee:{NFSU2_TR(0x4731ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4731f0:{NFSU2_TR(0x4731f0);
if(r1(R+518)){{goto L4735b9;}}
}
B4731f6:L4731f6:{c.instructions+=12;NFSU2_TR(0x4731f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4731f9:{NFSU2_TR(0x4731f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473200:{NFSU2_TR(0x473200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473203:{NFSU2_TR(0x473203);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473209:{NFSU2_TR(0x473209);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47320a:{NFSU2_TR(0x47320a);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473210:{NFSU2_TR(0x473210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473211:{NFSU2_TR(0x473211);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473212:{NFSU2_TR(0x473212);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B473216:{NFSU2_TR(0x473216);
w4(R+4,u32(0x7f0978ull));
}
B47321b:{NFSU2_TR(0x47321b);
{u32 ea_=u32(u32(8325512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B473221:{NFSU2_TR(0x473221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473226ull));
TAIL_STATIC(0x4599e0u,459);
}
B473226:L473226:{c.instructions+=2;NFSU2_TR(0x473226);
{u32 ea_=u32(u32(8325516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47322c:{NFSU2_TR(0x47322c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473231ull));
TAIL_STATIC(0x75bed4u,75b);
}
B473231:L473231:{c.instructions+=3;NFSU2_TR(0x473231);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B473235:{NFSU2_TR(0x473235);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B473238:{NFSU2_TR(0x473238);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47324f;}}
}
B47323a:L47323a:{c.instructions+=1;NFSU2_TR(0x47323a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4735ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473241:L473241:{c.instructions+=2;NFSU2_TR(0x473241);
w4(R+24,u32(0x2ee0ull));
}
B473246:{NFSU2_TR(0x473246);
{goto L473254;}
}
B473248:L473248:{c.instructions+=2;NFSU2_TR(0x473248);
w4(R+24,u32(0x5fb4ull));
}
B47324d:{NFSU2_TR(0x47324d);
{goto L473254;}
}
B47324f:L47324f:{c.instructions+=1;NFSU2_TR(0x47324f);
w4(R+24,u32(0x7fffull));
}
B473254:L473254:{c.instructions+=6;NFSU2_TR(0x473254);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473258:{NFSU2_TR(0x473258);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B47325b:{NFSU2_TR(0x47325b);
__builtin_memmove(gp(0x7f09a4),(R+4),4);
}
B473261:{NFSU2_TR(0x473261);
w4(R+4,u32(0x7f0994ull));
}
B473266:{NFSU2_TR(0x473266);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B473269:{NFSU2_TR(0x473269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47326eull));
TAIL_STATIC(0x4599e0u,459);
}
B47326e:L47326e:{c.instructions+=2;NFSU2_TR(0x47326e);
{u32 ea_=u32(u32(8325544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473274:{NFSU2_TR(0x473274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473279ull));
TAIL_STATIC(0x75bed4u,75b);
}
B473279:L473279:{c.instructions+=6;NFSU2_TR(0x473279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47327c:{NFSU2_TR(0x47327c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473280:{NFSU2_TR(0x473280);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B473284:{NFSU2_TR(0x473284);
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
B473286:{NFSU2_TR(0x473286);
__builtin_memmove((R+4),(R+20),4);
}
B473288:{NFSU2_TR(0x473288);
if(r1(R+518)){{goto L473425;}}
}
B47328e:L47328e:{c.instructions+=3;NFSU2_TR(0x47328e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473290:{NFSU2_TR(0x473290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473296:{NFSU2_TR(0x473296);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473299ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473299:L473299:{c.instructions+=7;NFSU2_TR(0x473299);
__builtin_memmove((R+28),(R+0),4);
}
B47329b:{NFSU2_TR(0x47329b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B47329e:{NFSU2_TR(0x47329e);
s4(0x7ec844,u32(0x78ad98ull));
}
B4732a8:{NFSU2_TR(0x4732a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4732ae:{NFSU2_TR(0x4732ae);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B4732b1:{NFSU2_TR(0x4732b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4732b3:{NFSU2_TR(0x4732b3);
if(r1(R+518)){{goto L4732bc;}}
}
B4732b5:L4732b5:{c.instructions+=2;NFSU2_TR(0x4732b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4732b7:{NFSU2_TR(0x4732b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4732bcull));
TAIL_STATIC(0x45fa60u,45f);
}
B4732bc:L4732bc:{c.instructions+=2;NFSU2_TR(0x4732bc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4732be:{NFSU2_TR(0x4732be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4732c3ull));
TAIL_STATIC(0x457e20u,457);
}
B4732c3:L4732c3:{c.instructions+=6;NFSU2_TR(0x4732c3);
__builtin_memmove((R+24),(R+0),4);
}
B4732c5:{NFSU2_TR(0x4732c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4732c8:{NFSU2_TR(0x4732c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4732cc:{NFSU2_TR(0x4732cc);
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
B4732ce:{NFSU2_TR(0x4732ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4732d6:{NFSU2_TR(0x4732d6);
if(r1(R+518)){{goto L47338c;}}
}
B4732dc:L4732dc:{c.instructions+=4;NFSU2_TR(0x4732dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4732df:{NFSU2_TR(0x4732df);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4732e1:{NFSU2_TR(0x4732e1);
__builtin_memmove((R+4),(R+20),4);
}
B4732e3:{NFSU2_TR(0x4732e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4732e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4732e6:L4732e6:{c.instructions+=4;NFSU2_TR(0x4732e6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4732e8:{NFSU2_TR(0x4732e8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4732ea:{NFSU2_TR(0x4732ea);
__builtin_memmove((R+4),(R+12),4);
}
B4732ec:{NFSU2_TR(0x4732ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4732f2;}}
}
B4732ee:L4732ee:{c.instructions+=2;NFSU2_TR(0x4732ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4732f0:{NFSU2_TR(0x4732f0);
{goto L4732fc;}
}
B4732f2:L4732f2:{c.instructions+=2;NFSU2_TR(0x4732f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4732f5:{NFSU2_TR(0x4732f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4732fc;}}
}
B4732f7:L4732f7:{c.instructions+=1;NFSU2_TR(0x4732f7);
w4(R+4,u32(0xfull));
}
B4732fc:L4732fc:{c.instructions+=4;NFSU2_TR(0x4732fc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4732fe:{NFSU2_TR(0x4732fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B473301:{NFSU2_TR(0x473301);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B473303:{NFSU2_TR(0x473303);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473309;}}
}
B473305:L473305:{c.instructions+=2;NFSU2_TR(0x473305);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B473307:{NFSU2_TR(0x473307);
{goto L473316;}
}
B473309:L473309:{c.instructions+=2;NFSU2_TR(0x473309);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47330f:{NFSU2_TR(0x47330f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473316;}}
}
B473311:L473311:{c.instructions+=1;NFSU2_TR(0x473311);
w4(R+28,u32(0x7fffull));
}
B473316:L473316:{c.instructions+=4;NFSU2_TR(0x473316);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47331a:{NFSU2_TR(0x47331a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47331c:{NFSU2_TR(0x47331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47331f:{NFSU2_TR(0x47331f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473325;}}
}
B473321:L473321:{c.instructions+=2;NFSU2_TR(0x473321);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B473323:{NFSU2_TR(0x473323);
{goto L473332;}
}
B473325:L473325:{c.instructions+=2;NFSU2_TR(0x473325);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47332b:{NFSU2_TR(0x47332b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473332;}}
}
B47332d:L47332d:{c.instructions+=1;NFSU2_TR(0x47332d);
w4(R+4,u32(0x1fffull));
}
B473332:L473332:{c.instructions+=3;NFSU2_TR(0x473332);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B473334:{NFSU2_TR(0x473334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473337:{NFSU2_TR(0x473337);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47333d;}}
}
B473339:L473339:{c.instructions+=2;NFSU2_TR(0x473339);
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
B47333b:{NFSU2_TR(0x47333b);
{goto L473349;}
}
B47333d:L47333d:{c.instructions+=2;NFSU2_TR(0x47333d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B473342:{NFSU2_TR(0x473342);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473349;}}
}
B473344:L473344:{c.instructions+=1;NFSU2_TR(0x473344);
w4(R+0,u32(0xffffull));
}
B473349:L473349:{c.instructions+=8;NFSU2_TR(0x473349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47334a:{NFSU2_TR(0x47334a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47334b:{NFSU2_TR(0x47334b);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473350:{NFSU2_TR(0x473350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473353:{NFSU2_TR(0x473353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47335a:{NFSU2_TR(0x47335a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47335d:{NFSU2_TR(0x47335d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473360:{NFSU2_TR(0x473360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473365ull));
TAIL_STATIC(0x7358c0u,735);
}
B473365:L473365:{c.instructions+=3;NFSU2_TR(0x473365);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B473368:{NFSU2_TR(0x473368);
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
B47336a:{NFSU2_TR(0x47336a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47338e;}}
}
B47336c:L47336c:{c.instructions+=3;NFSU2_TR(0x47336c);
u8 U[4];
w4(U+0,u32(0x7edd58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473371:{NFSU2_TR(0x473371);
w4(R+4,u32(0x82c6b4ull));
}
B473376:{NFSU2_TR(0x473376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47337bull));
TAIL_STATIC(0x735840u,735);
}
B47337b:L47337b:{c.instructions+=4;NFSU2_TR(0x47337b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47337c:{NFSU2_TR(0x47337c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47337d:{NFSU2_TR(0x47337d);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473382:{NFSU2_TR(0x473382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473387ull));
TAIL_STATIC(0x7358c0u,735);
}
B473387:L473387:{c.instructions+=2;NFSU2_TR(0x473387);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47338a:{NFSU2_TR(0x47338a);
{goto L47338e;}
}
B47338c:L47338c:{c.instructions+=1;NFSU2_TR(0x47338c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47338e:L47338e:{c.instructions+=5;NFSU2_TR(0x47338e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473394:{NFSU2_TR(0x473394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B473396:{NFSU2_TR(0x473396);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47339e:{NFSU2_TR(0x47339e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733a4:{NFSU2_TR(0x4733a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4735b6;}}
}
B4733aa:L4733aa:{c.instructions+=3;NFSU2_TR(0x4733aa);
__builtin_memmove((R+0),gp(0x82cb48),4);
}
B4733af:{NFSU2_TR(0x4733af);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4733b4:{NFSU2_TR(0x4733b4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4733bb;}}
}
B4733b6:L4733b6:{c.instructions+=3;NFSU2_TR(0x4733b6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4733b7:{NFSU2_TR(0x4733b7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B4733ba:{NFSU2_TR(0x4733ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4733bb:L4733bb:{c.instructions+=8;NFSU2_TR(0x4733bb);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4733c1:{NFSU2_TR(0x4733c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((R+4),(U+0),4);
}
B4733c4:{NFSU2_TR(0x4733c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4733c5:{NFSU2_TR(0x4733c5);
__builtin_memmove(gp(0x82cb48),(R+0),4);
}
B4733ca:{NFSU2_TR(0x4733ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4733d0:{NFSU2_TR(0x4733d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4733d1:{NFSU2_TR(0x4733d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4733d4:{NFSU2_TR(0x4733d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4733d9ull));
TAIL_STATIC(0x43be60u,43b);
}
B4733d9:L4733d9:{c.instructions+=10;NFSU2_TR(0x4733d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4733dc:{NFSU2_TR(0x4733dc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4733de:{NFSU2_TR(0x4733de);
u8 U[4];
w4(U+0,u32(0x78ad84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4733e3:{NFSU2_TR(0x4733e3);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4733e5:{NFSU2_TR(0x4733e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733e9:{NFSU2_TR(0x4733e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733ed:{NFSU2_TR(0x4733ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733f1:{NFSU2_TR(0x4733f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733f5:{NFSU2_TR(0x4733f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4733f9:{NFSU2_TR(0x4733f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4733feull));
TAIL_STATIC(0x457aa0u,457);
}
B4733fe:L4733fe:{c.instructions+=3;NFSU2_TR(0x4733fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B473401:{NFSU2_TR(0x473401);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473403:{NFSU2_TR(0x473403);
if(r1(R+518)){{goto L473418;}}
}
B473405:L473405:{c.instructions+=3;NFSU2_TR(0x473405);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473406:{NFSU2_TR(0x473406);
__builtin_memmove((R+4),(R+0),4);
}
B473408:{NFSU2_TR(0x473408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47340dull));
TAIL_STATIC(0x45b1f0u,45b);
}
B47340d:L47340d:{c.instructions+=2;NFSU2_TR(0x47340d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473413:{NFSU2_TR(0x473413);
{goto L4735aa;}
}
B473418:L473418:{c.instructions+=3;NFSU2_TR(0x473418);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47341a:{NFSU2_TR(0x47341a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473420:{NFSU2_TR(0x473420);
{goto L4735aa;}
}
B473425:L473425:{c.instructions+=3;NFSU2_TR(0x473425);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473427:{NFSU2_TR(0x473427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47342d:{NFSU2_TR(0x47342d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473430ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473430:L473430:{c.instructions+=7;NFSU2_TR(0x473430);
__builtin_memmove((R+28),(R+0),4);
}
B473432:{NFSU2_TR(0x473432);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B473435:{NFSU2_TR(0x473435);
s4(0x7ec844,u32(0x78ad68ull));
}
B47343f:{NFSU2_TR(0x47343f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473445:{NFSU2_TR(0x473445);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B473448:{NFSU2_TR(0x473448);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47344a:{NFSU2_TR(0x47344a);
if(r1(R+518)){{goto L473453;}}
}
B47344c:L47344c:{c.instructions+=2;NFSU2_TR(0x47344c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47344e:{NFSU2_TR(0x47344e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473453ull));
TAIL_STATIC(0x45fa60u,45f);
}
B473453:L473453:{c.instructions+=2;NFSU2_TR(0x473453);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473455:{NFSU2_TR(0x473455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47345aull));
TAIL_STATIC(0x457e20u,457);
}
B47345a:L47345a:{c.instructions+=6;NFSU2_TR(0x47345a);
__builtin_memmove((R+24),(R+0),4);
}
B47345c:{NFSU2_TR(0x47345c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47345f:{NFSU2_TR(0x47345f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473463:{NFSU2_TR(0x473463);
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
B473465:{NFSU2_TR(0x473465);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47346d:{NFSU2_TR(0x47346d);
if(r1(R+518)){{goto L473523;}}
}
B473473:L473473:{c.instructions+=4;NFSU2_TR(0x473473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473476:{NFSU2_TR(0x473476);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473478:{NFSU2_TR(0x473478);
__builtin_memmove((R+4),(R+20),4);
}
B47347a:{NFSU2_TR(0x47347a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47347dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47347d:L47347d:{c.instructions+=4;NFSU2_TR(0x47347d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47347f:{NFSU2_TR(0x47347f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B473481:{NFSU2_TR(0x473481);
__builtin_memmove((R+4),(R+12),4);
}
B473483:{NFSU2_TR(0x473483);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473489;}}
}
B473485:L473485:{c.instructions+=2;NFSU2_TR(0x473485);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B473487:{NFSU2_TR(0x473487);
{goto L473493;}
}
B473489:L473489:{c.instructions+=2;NFSU2_TR(0x473489);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47348c:{NFSU2_TR(0x47348c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473493;}}
}
B47348e:L47348e:{c.instructions+=1;NFSU2_TR(0x47348e);
w4(R+4,u32(0xfull));
}
B473493:L473493:{c.instructions+=4;NFSU2_TR(0x473493);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B473495:{NFSU2_TR(0x473495);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B473498:{NFSU2_TR(0x473498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B47349a:{NFSU2_TR(0x47349a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4734a0;}}
}
B47349c:L47349c:{c.instructions+=2;NFSU2_TR(0x47349c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47349e:{NFSU2_TR(0x47349e);
{goto L4734ad;}
}
B4734a0:L4734a0:{c.instructions+=2;NFSU2_TR(0x4734a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4734a6:{NFSU2_TR(0x4734a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4734ad;}}
}
B4734a8:L4734a8:{c.instructions+=1;NFSU2_TR(0x4734a8);
w4(R+28,u32(0x7fffull));
}
B4734ad:L4734ad:{c.instructions+=4;NFSU2_TR(0x4734ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4734b1:{NFSU2_TR(0x4734b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4734b3:{NFSU2_TR(0x4734b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4734b6:{NFSU2_TR(0x4734b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4734bc;}}
}
B4734b8:L4734b8:{c.instructions+=2;NFSU2_TR(0x4734b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4734ba:{NFSU2_TR(0x4734ba);
{goto L4734c9;}
}
B4734bc:L4734bc:{c.instructions+=2;NFSU2_TR(0x4734bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4734c2:{NFSU2_TR(0x4734c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4734c9;}}
}
B4734c4:L4734c4:{c.instructions+=1;NFSU2_TR(0x4734c4);
w4(R+4,u32(0x1fffull));
}
B4734c9:L4734c9:{c.instructions+=3;NFSU2_TR(0x4734c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4734cb:{NFSU2_TR(0x4734cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4734ce:{NFSU2_TR(0x4734ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4734d4;}}
}
B4734d0:L4734d0:{c.instructions+=2;NFSU2_TR(0x4734d0);
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
B4734d2:{NFSU2_TR(0x4734d2);
{goto L4734e0;}
}
B4734d4:L4734d4:{c.instructions+=2;NFSU2_TR(0x4734d4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4734d9:{NFSU2_TR(0x4734d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4734e0;}}
}
B4734db:L4734db:{c.instructions+=1;NFSU2_TR(0x4734db);
w4(R+0,u32(0xffffull));
}
B4734e0:L4734e0:{c.instructions+=8;NFSU2_TR(0x4734e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4734e1:{NFSU2_TR(0x4734e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4734e2:{NFSU2_TR(0x4734e2);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4734e7:{NFSU2_TR(0x4734e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4734ea:{NFSU2_TR(0x4734ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4734f1:{NFSU2_TR(0x4734f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4734f4:{NFSU2_TR(0x4734f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4734f7:{NFSU2_TR(0x4734f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4734fcull));
TAIL_STATIC(0x7358c0u,735);
}
B4734fc:L4734fc:{c.instructions+=3;NFSU2_TR(0x4734fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4734ff:{NFSU2_TR(0x4734ff);
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
B473501:{NFSU2_TR(0x473501);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473525;}}
}
B473503:L473503:{c.instructions+=3;NFSU2_TR(0x473503);
u8 U[4];
w4(U+0,u32(0x7edd58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473508:{NFSU2_TR(0x473508);
w4(R+4,u32(0x82c6b4ull));
}
B47350d:{NFSU2_TR(0x47350d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473512ull));
TAIL_STATIC(0x735840u,735);
}
B473512:L473512:{c.instructions+=4;NFSU2_TR(0x473512);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473513:{NFSU2_TR(0x473513);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473514:{NFSU2_TR(0x473514);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473519:{NFSU2_TR(0x473519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47351eull));
TAIL_STATIC(0x7358c0u,735);
}
B47351e:L47351e:{c.instructions+=2;NFSU2_TR(0x47351e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B473521:{NFSU2_TR(0x473521);
{goto L473525;}
}
B473523:L473523:{c.instructions+=1;NFSU2_TR(0x473523);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B473525:L473525:{c.instructions+=5;NFSU2_TR(0x473525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47352b:{NFSU2_TR(0x47352b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47352d:{NFSU2_TR(0x47352d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B473535:{NFSU2_TR(0x473535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47353b:{NFSU2_TR(0x47353b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4735b6;}}
}
B47353d:L47353d:{c.instructions+=3;NFSU2_TR(0x47353d);
__builtin_memmove((R+0),gp(0x82cb44),4);
}
B473542:{NFSU2_TR(0x473542);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B473547:{NFSU2_TR(0x473547);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47354e;}}
}
B473549:L473549:{c.instructions+=3;NFSU2_TR(0x473549);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47354a:{NFSU2_TR(0x47354a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B47354d:{NFSU2_TR(0x47354d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B47354e:L47354e:{c.instructions+=8;NFSU2_TR(0x47354e);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B473554:{NFSU2_TR(0x473554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((R+4),(U+0),4);
}
B473557:{NFSU2_TR(0x473557);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B473558:{NFSU2_TR(0x473558);
__builtin_memmove(gp(0x82cb44),(R+0),4);
}
B47355d:{NFSU2_TR(0x47355d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473563:{NFSU2_TR(0x473563);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473564:{NFSU2_TR(0x473564);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B473567:{NFSU2_TR(0x473567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47356cull));
TAIL_STATIC(0x43be60u,43b);
}
B47356c:L47356c:{c.instructions+=10;NFSU2_TR(0x47356c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47356f:{NFSU2_TR(0x47356f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B473571:{NFSU2_TR(0x473571);
u8 U[4];
w4(U+0,u32(0x78ad84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473576:{NFSU2_TR(0x473576);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473578:{NFSU2_TR(0x473578);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47357c:{NFSU2_TR(0x47357c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473580:{NFSU2_TR(0x473580);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473584:{NFSU2_TR(0x473584);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473588:{NFSU2_TR(0x473588);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47358c:{NFSU2_TR(0x47358c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473591ull));
TAIL_STATIC(0x457aa0u,457);
}
B473591:L473591:{c.instructions+=3;NFSU2_TR(0x473591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B473594:{NFSU2_TR(0x473594);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473596:{NFSU2_TR(0x473596);
if(r1(R+518)){{goto L4735a2;}}
}
B473598:L473598:{c.instructions+=3;NFSU2_TR(0x473598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473599:{NFSU2_TR(0x473599);
__builtin_memmove((R+4),(R+0),4);
}
B47359b:{NFSU2_TR(0x47359b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4735a0ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B4735a0:L4735a0:{c.instructions+=1;NFSU2_TR(0x4735a0);
{goto L4735a4;}
}
B4735a2:L4735a2:{c.instructions+=1;NFSU2_TR(0x4735a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4735a4:L4735a4:{c.instructions+=1;NFSU2_TR(0x4735a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4735aa:L4735aa:{c.instructions+=4;NFSU2_TR(0x4735aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4735ae:{NFSU2_TR(0x4735ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4735af:{NFSU2_TR(0x4735af);
__builtin_memmove((R+4),(R+0),4);
}
B4735b1:{NFSU2_TR(0x4735b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4735b6ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B4735b6:L4735b6:{c.instructions+=3;NFSU2_TR(0x4735b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4735b7:{NFSU2_TR(0x4735b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4735b8:{NFSU2_TR(0x4735b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4735b9:L4735b9:{c.instructions+=5;NFSU2_TR(0x4735b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4735bd:{NFSU2_TR(0x4735bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4735be:{NFSU2_TR(0x4735be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4735c5:{NFSU2_TR(0x4735c5);
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
B4735c8:{NFSU2_TR(0x4735c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4735e0:L4735e0:{c.instructions+=9;NFSU2_TR(0x4735e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4735e3:{NFSU2_TR(0x4735e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4735e9:{NFSU2_TR(0x4735e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4735ea:{NFSU2_TR(0x4735ea);
__builtin_memmove((R+24),(R+4),4);
}
B4735ec:{NFSU2_TR(0x4735ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4735f3:{NFSU2_TR(0x4735f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4735fb:{NFSU2_TR(0x4735fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473603:{NFSU2_TR(0x473603);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47360b:{NFSU2_TR(0x47360b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47389a;}}
}
B473611:L473611:{c.instructions+=10;NFSU2_TR(0x473611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473614:{NFSU2_TR(0x473614);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473616:{NFSU2_TR(0x473616);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473619:{NFSU2_TR(0x473619);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47361f:{NFSU2_TR(0x47361f);
w4(R+4,u32(0x82c69cull));
}
B473624:{NFSU2_TR(0x473624);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47362a:{NFSU2_TR(0x47362a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47362e:{NFSU2_TR(0x47362e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B473632:{NFSU2_TR(0x473632);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473633:{NFSU2_TR(0x473633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473638ull));
TAIL_STATIC(0x576790u,576);
}
B473638:L473638:{c.instructions+=1;NFSU2_TR(0x473638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47363dull));
TAIL_STATIC(0x75bed4u,75b);
}
B47363d:L47363d:{c.instructions+=20;NFSU2_TR(0x47363d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7fffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B473643:{NFSU2_TR(0x473643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473649:{NFSU2_TR(0x473649);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47364c:{NFSU2_TR(0x47364c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473650:{NFSU2_TR(0x473650);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B473654:{NFSU2_TR(0x473654);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47365a:{NFSU2_TR(0x47365a);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473660:{NFSU2_TR(0x473660);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B473662:{NFSU2_TR(0x473662);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B473664:{NFSU2_TR(0x473664);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B473666:{NFSU2_TR(0x473666);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B473668:{NFSU2_TR(0x473668);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47366a:{NFSU2_TR(0x47366a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B47366c:{NFSU2_TR(0x47366c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B47366e:{NFSU2_TR(0x47366e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473670:{NFSU2_TR(0x473670);
{u32 ea_=u32(u32(7899168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473676:{NFSU2_TR(0x473676);
{u32 ea_=u32(u32(7899176u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47367c:{NFSU2_TR(0x47367c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47367e:{NFSU2_TR(0x47367e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473681:{NFSU2_TR(0x473681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47368b;}}
}
B473683:L473683:{c.instructions+=2;NFSU2_TR(0x473683);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473685:{NFSU2_TR(0x473685);
{u32 ea_=u32(u32(7899176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47368b:L47368b:{c.instructions+=22;NFSU2_TR(0x47368b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B473691:{NFSU2_TR(0x473691);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B473693:{NFSU2_TR(0x473693);
{u32 ea_=u32(u32(7899180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473699:{NFSU2_TR(0x473699);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47369f:{NFSU2_TR(0x47369f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4736a1:{NFSU2_TR(0x4736a1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4736a5:{NFSU2_TR(0x4736a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4736a7:{NFSU2_TR(0x4736a7);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4736ad:{NFSU2_TR(0x4736ad);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4736b3:{NFSU2_TR(0x4736b3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4736b5:{NFSU2_TR(0x4736b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4736b7:{NFSU2_TR(0x4736b7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4736b9:{NFSU2_TR(0x4736b9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4736bb:{NFSU2_TR(0x4736bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4736bd:{NFSU2_TR(0x4736bd);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4736bf:{NFSU2_TR(0x4736bf);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4736c1:{NFSU2_TR(0x4736c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4736c3:{NFSU2_TR(0x4736c3);
{u32 ea_=u32(u32(7899168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4736c9:{NFSU2_TR(0x4736c9);
{u32 ea_=u32(u32(7899176u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4736cf:{NFSU2_TR(0x4736cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4736d1:{NFSU2_TR(0x4736d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4736d4:{NFSU2_TR(0x4736d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4736de;}}
}
B4736d6:L4736d6:{c.instructions+=2;NFSU2_TR(0x4736d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4736d8:{NFSU2_TR(0x4736d8);
{u32 ea_=u32(u32(7899176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4736de:L4736de:{c.instructions+=11;NFSU2_TR(0x4736de);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4736e4:{NFSU2_TR(0x4736e4);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4736e6:{NFSU2_TR(0x4736e6);
{u32 ea_=u32(r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4736ec:{NFSU2_TR(0x4736ec);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4736f2:{NFSU2_TR(0x4736f2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4736f8:{NFSU2_TR(0x4736f8);
{u32 ea_=u32(u32(7899172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4736fe:{NFSU2_TR(0x4736fe);
{u32 ea_=u32(u32(7899180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473704:{NFSU2_TR(0x473704);
{u32 ea_=u32(u32(7899180u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47370a:{NFSU2_TR(0x47370a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47370c:{NFSU2_TR(0x47370c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47370f:{NFSU2_TR(0x47370f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473719;}}
}
B473711:L473711:{c.instructions+=2;NFSU2_TR(0x473711);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473713:{NFSU2_TR(0x473713);
{u32 ea_=u32(u32(7899180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473719:L473719:{c.instructions+=7;NFSU2_TR(0x473719);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47371f:{NFSU2_TR(0x47371f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B473721:{NFSU2_TR(0x473721);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B473725:{NFSU2_TR(0x473725);
{u32 ea_=u32(u32(7908788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47372b:{NFSU2_TR(0x47372b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47372d:{NFSU2_TR(0x47372d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473730:{NFSU2_TR(0x473730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47373a;}}
}
B473732:L473732:{c.instructions+=1;NFSU2_TR(0x473732);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x46fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47373a:L47373a:{c.instructions+=5;NFSU2_TR(0x47373a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47373e:{NFSU2_TR(0x47373e);
{u32 ea_=u32(u32(7908788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B473744:{NFSU2_TR(0x473744);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B473746:{NFSU2_TR(0x473746);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473749:{NFSU2_TR(0x473749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473753;}}
}
B47374b:L47374b:{c.instructions+=1;NFSU2_TR(0x47374b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x46fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473753:L473753:{c.instructions+=4;NFSU2_TR(0x473753);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473757:{NFSU2_TR(0x473757);
w4(R+4,u32(0x7f09d8ull));
}
B47375c:{NFSU2_TR(0x47375c);
__builtin_memmove(gp(0x7f09e8),(R+0),4);
}
B473761:{NFSU2_TR(0x473761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473766ull));
TAIL_STATIC(0x4599e0u,459);
}
B473766:L473766:{c.instructions+=18;NFSU2_TR(0x473766);
{u32 ea_=u32(u32(8325612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47376c:{NFSU2_TR(0x47376c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473772:{NFSU2_TR(0x473772);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B473776:{NFSU2_TR(0x473776);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47377c:{NFSU2_TR(0x47377c);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473782:{NFSU2_TR(0x473782);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B473784:{NFSU2_TR(0x473784);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B473786:{NFSU2_TR(0x473786);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B473788:{NFSU2_TR(0x473788);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B47378a:{NFSU2_TR(0x47378a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47378c:{NFSU2_TR(0x47378c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B47378e:{NFSU2_TR(0x47378e);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B473790:{NFSU2_TR(0x473790);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473792:{NFSU2_TR(0x473792);
{u32 ea_=u32(u32(7899184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473798:{NFSU2_TR(0x473798);
{u32 ea_=u32(u32(7899192u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47379e:{NFSU2_TR(0x47379e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4737a0:{NFSU2_TR(0x4737a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4737a3:{NFSU2_TR(0x4737a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4737ad;}}
}
B4737a5:L4737a5:{c.instructions+=2;NFSU2_TR(0x4737a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4737a7:{NFSU2_TR(0x4737a7);
{u32 ea_=u32(u32(7899192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4737ad:L4737ad:{c.instructions+=11;NFSU2_TR(0x4737ad);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4737b3:{NFSU2_TR(0x4737b3);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4737b5:{NFSU2_TR(0x4737b5);
{u32 ea_=u32(r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4737bb:{NFSU2_TR(0x4737bb);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4737c1:{NFSU2_TR(0x4737c1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4737c7:{NFSU2_TR(0x4737c7);
{u32 ea_=u32(u32(7899188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4737cd:{NFSU2_TR(0x4737cd);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4737d3:{NFSU2_TR(0x4737d3);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4737d9:{NFSU2_TR(0x4737d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4737db:{NFSU2_TR(0x4737db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4737de:{NFSU2_TR(0x4737de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4737e8;}}
}
B4737e0:L4737e0:{c.instructions+=2;NFSU2_TR(0x4737e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4737e2:{NFSU2_TR(0x4737e2);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4737e8:L4737e8:{c.instructions+=7;NFSU2_TR(0x4737e8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4737ee:{NFSU2_TR(0x4737ee);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4737f0:{NFSU2_TR(0x4737f0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4737f4:{NFSU2_TR(0x4737f4);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4737fa:{NFSU2_TR(0x4737fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4737fc:{NFSU2_TR(0x4737fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4737ff:{NFSU2_TR(0x4737ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473809;}}
}
B473801:L473801:{c.instructions+=1;NFSU2_TR(0x473801);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x45bb8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473809:L473809:{c.instructions+=15;NFSU2_TR(0x473809);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47380f:{NFSU2_TR(0x47380f);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473815:{NFSU2_TR(0x473815);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B473817:{NFSU2_TR(0x473817);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B473819:{NFSU2_TR(0x473819);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B47381b:{NFSU2_TR(0x47381b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B47381d:{NFSU2_TR(0x47381d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47381f:{NFSU2_TR(0x47381f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B473821:{NFSU2_TR(0x473821);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B473823:{NFSU2_TR(0x473823);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473825:{NFSU2_TR(0x473825);
{u32 ea_=u32(u32(7899184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47382b:{NFSU2_TR(0x47382b);
{u32 ea_=u32(u32(7899192u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B473831:{NFSU2_TR(0x473831);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B473833:{NFSU2_TR(0x473833);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473836:{NFSU2_TR(0x473836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473840;}}
}
B473838:L473838:{c.instructions+=2;NFSU2_TR(0x473838);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47383a:{NFSU2_TR(0x47383a);
{u32 ea_=u32(u32(7899192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473840:L473840:{c.instructions+=11;NFSU2_TR(0x473840);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B473846:{NFSU2_TR(0x473846);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47384a:{NFSU2_TR(0x47384a);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473850:{NFSU2_TR(0x473850);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B473856:{NFSU2_TR(0x473856);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47385c:{NFSU2_TR(0x47385c);
{u32 ea_=u32(u32(7899188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473862:{NFSU2_TR(0x473862);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473868:{NFSU2_TR(0x473868);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47386e:{NFSU2_TR(0x47386e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B473870:{NFSU2_TR(0x473870);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473873:{NFSU2_TR(0x473873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47387d;}}
}
B473875:L473875:{c.instructions+=2;NFSU2_TR(0x473875);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473877:{NFSU2_TR(0x473877);
{u32 ea_=u32(u32(7899196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47387d:L47387d:{c.instructions+=6;NFSU2_TR(0x47387d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B473883:{NFSU2_TR(0x473883);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B473885:{NFSU2_TR(0x473885);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47388b:{NFSU2_TR(0x47388b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47388d:{NFSU2_TR(0x47388d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473890:{NFSU2_TR(0x473890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47389a;}}
}
B473892:L473892:{c.instructions+=2;NFSU2_TR(0x473892);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B473894:{NFSU2_TR(0x473894);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47389a:L47389a:{c.instructions+=2;NFSU2_TR(0x47389a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47389e:{NFSU2_TR(0x47389e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4738a3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4738a3:L4738a3:{c.instructions+=3;NFSU2_TR(0x4738a3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4738a7:{NFSU2_TR(0x4738a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738ad:{NFSU2_TR(0x4738ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4738b2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4738b2:L4738b2:{c.instructions+=3;NFSU2_TR(0x4738b2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4738b6:{NFSU2_TR(0x4738b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738bc:{NFSU2_TR(0x4738bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4738c1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4738c1:L4738c1:{c.instructions+=2;NFSU2_TR(0x4738c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738c7:{NFSU2_TR(0x4738c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4738ccull));
TAIL_STATIC(0x75bed4u,75b);
}
B4738cc:L4738cc:{c.instructions+=4;NFSU2_TR(0x4738cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738d2:{NFSU2_TR(0x4738d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4738d3:{NFSU2_TR(0x4738d3);
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
B4738d6:{NFSU2_TR(0x4738d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4738e0:L4738e0:{c.instructions+=3;NFSU2_TR(0x4738e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4738e1:{NFSU2_TR(0x4738e1);
__builtin_memmove((R+24),(R+4),4);
}
B4738e3:{NFSU2_TR(0x4738e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4738e8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4738e8:L4738e8:{c.instructions+=12;NFSU2_TR(0x4738e8);
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
B4738ea:{NFSU2_TR(0x4738ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4738f0:{NFSU2_TR(0x4738f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738f6:{NFSU2_TR(0x4738f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4738fc:{NFSU2_TR(0x4738fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473902:{NFSU2_TR(0x473902);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473908:{NFSU2_TR(0x473908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47390e:{NFSU2_TR(0x47390e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B473912:{NFSU2_TR(0x473912);
u8 U[4];
w4(U+0,u32(0x78adb8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B473918:{NFSU2_TR(0x473918);
__builtin_memmove((R+0),(R+24),4);
}
B47391a:{NFSU2_TR(0x47391a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47391b:{NFSU2_TR(0x47391b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473920:L473920:{c.instructions+=7;NFSU2_TR(0x473920);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473921:{NFSU2_TR(0x473921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473922:{NFSU2_TR(0x473922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473923:{NFSU2_TR(0x473923);
__builtin_memmove((R+28),(R+4),4);
}
B473925:{NFSU2_TR(0x473925);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47392b:{NFSU2_TR(0x47392b);
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
B47392d:{NFSU2_TR(0x47392d);
if(r1(R+518)){{goto L473967;}}
}
B47392f:L47392f:{c.instructions+=3;NFSU2_TR(0x47392f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473931:{NFSU2_TR(0x473931);
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
B473933:{NFSU2_TR(0x473933);
if(r1(R+518)){{goto L47393a;}}
}
B473935:L473935:{c.instructions+=1;NFSU2_TR(0x473935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47393aull));
TAIL_STATIC(0x735550u,735);
}
B47393a:L47393a:{c.instructions+=3;NFSU2_TR(0x47393a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47393e:{NFSU2_TR(0x47393e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47393f:{NFSU2_TR(0x47393f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473944ull));
TAIL_STATIC(0x734df0u,734);
}
B473944:L473944:{c.instructions+=2;NFSU2_TR(0x473944);
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
B473947:{NFSU2_TR(0x473947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47394cull));
TAIL_STATIC(0x734e40u,734);
}
B47394c:L47394c:{c.instructions+=5;NFSU2_TR(0x47394c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473950:{NFSU2_TR(0x473950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473952:{NFSU2_TR(0x473952);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473954:{NFSU2_TR(0x473954);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473955:{NFSU2_TR(0x473955);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473958ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473958:L473958:{c.instructions+=1;NFSU2_TR(0x473958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47395dull));
TAIL_STATIC(0x734e60u,734);
}
B47395d:L47395d:{c.instructions+=1;NFSU2_TR(0x47395d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473967:L473967:{c.instructions+=4;NFSU2_TR(0x473967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473968:{NFSU2_TR(0x473968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473969:{NFSU2_TR(0x473969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47396a:{NFSU2_TR(0x47396a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473970:L473970:{c.instructions+=3;NFSU2_TR(0x473970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B473976:{NFSU2_TR(0x473976);
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
B473978:{NFSU2_TR(0x473978);
if(r1(R+518)){{goto L47397f;}}
}
B47397a:L47397a:{c.instructions+=1;NFSU2_TR(0x47397a);
TAIL_STATIC(0x4604e0u,460);
}
B47397f:L47397f:{c.instructions+=1;NFSU2_TR(0x47397f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473980:L473980:{c.instructions+=3;NFSU2_TR(0x473980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473981:{NFSU2_TR(0x473981);
__builtin_memmove((R+24),(R+4),4);
}
B473983:{NFSU2_TR(0x473983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473988ull));
TAIL_STATIC(0x45e350u,45e);
}
B473988:L473988:{c.instructions+=12;NFSU2_TR(0x473988);
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
B47398a:{NFSU2_TR(0x47398a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473990:{NFSU2_TR(0x473990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473996:{NFSU2_TR(0x473996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47399c:{NFSU2_TR(0x47399c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4739a2:{NFSU2_TR(0x4739a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4739a8:{NFSU2_TR(0x4739a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4739ae:{NFSU2_TR(0x4739ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4739b2:{NFSU2_TR(0x4739b2);
u8 U[4];
w4(U+0,u32(0x78ae00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4739b8:{NFSU2_TR(0x4739b8);
__builtin_memmove((R+0),(R+24),4);
}
B4739ba:{NFSU2_TR(0x4739ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4739bb:{NFSU2_TR(0x4739bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4739c0:L4739c0:{c.instructions+=7;NFSU2_TR(0x4739c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739c1:{NFSU2_TR(0x4739c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739c2:{NFSU2_TR(0x4739c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739c3:{NFSU2_TR(0x4739c3);
__builtin_memmove((R+28),(R+4),4);
}
B4739c5:{NFSU2_TR(0x4739c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4739cb:{NFSU2_TR(0x4739cb);
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
B4739cd:{NFSU2_TR(0x4739cd);
if(r1(R+518)){{goto L4739fd;}}
}
B4739cf:L4739cf:{c.instructions+=3;NFSU2_TR(0x4739cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4739d1:{NFSU2_TR(0x4739d1);
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
B4739d3:{NFSU2_TR(0x4739d3);
if(r1(R+518)){{goto L4739da;}}
}
B4739d5:L4739d5:{c.instructions+=1;NFSU2_TR(0x4739d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4739daull));
TAIL_STATIC(0x735550u,735);
}
B4739da:L4739da:{c.instructions+=3;NFSU2_TR(0x4739da);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4739de:{NFSU2_TR(0x4739de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739df:{NFSU2_TR(0x4739df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4739e4ull));
TAIL_STATIC(0x734df0u,734);
}
B4739e4:L4739e4:{c.instructions+=2;NFSU2_TR(0x4739e4);
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
B4739e7:{NFSU2_TR(0x4739e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4739ecull));
TAIL_STATIC(0x734e40u,734);
}
B4739ec:L4739ec:{c.instructions+=5;NFSU2_TR(0x4739ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4739f0:{NFSU2_TR(0x4739f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4739f2:{NFSU2_TR(0x4739f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739f4:{NFSU2_TR(0x4739f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4739f5:{NFSU2_TR(0x4739f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4739f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4739f8:L4739f8:{c.instructions+=1;NFSU2_TR(0x4739f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4739fdull));
TAIL_STATIC(0x734e60u,734);
}
B4739fd:L4739fd:{c.instructions+=5;NFSU2_TR(0x4739fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473a07:{NFSU2_TR(0x473a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473a08:{NFSU2_TR(0x473a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473a09:{NFSU2_TR(0x473a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B473a0a:{NFSU2_TR(0x473a0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473a10:L473a10:{c.instructions+=5;NFSU2_TR(0x473a10);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B473a15:{NFSU2_TR(0x473a15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473a16:{NFSU2_TR(0x473a16);
__builtin_memmove((R+24),(R+4),4);
}
B473a18:{NFSU2_TR(0x473a18);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B473a1b:{NFSU2_TR(0x473a1b);
if(r1(R+518)){{goto L473a5f;}}
}
B473a1d:L473a1d:{c.instructions+=3;NFSU2_TR(0x473a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473a23:{NFSU2_TR(0x473a23);
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
B473a25:{NFSU2_TR(0x473a25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473a2e;}}
}
B473a27:L473a27:{c.instructions+=3;NFSU2_TR(0x473a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473a29:{NFSU2_TR(0x473a29);
__builtin_memmove((R+4),(R+24),4);
}
B473a2b:{NFSU2_TR(0x473a2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473a2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473a2e:L473a2e:{c.instructions+=7;NFSU2_TR(0x473a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473a34:{NFSU2_TR(0x473a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473a37:{NFSU2_TR(0x473a37);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473a3d:{NFSU2_TR(0x473a3d);
w4(R+4,u32(0x7f09f4ull));
}
B473a42:{NFSU2_TR(0x473a42);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473a48:{NFSU2_TR(0x473a48);
{u32 ea_=u32(u32(8325636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B473a4e:{NFSU2_TR(0x473a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473a53ull));
TAIL_STATIC(0x4599e0u,459);
}
B473a53:L473a53:{c.instructions+=2;NFSU2_TR(0x473a53);
__builtin_memmove((R+8),gp(0x7f0a08),4);
}
B473a59:{NFSU2_TR(0x473a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473a5f:L473a5f:{c.instructions+=2;NFSU2_TR(0x473a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473a60:{NFSU2_TR(0x473a60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473a70:L473a70:{c.instructions+=4;NFSU2_TR(0x473a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473a71:{NFSU2_TR(0x473a71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473a72:{NFSU2_TR(0x473a72);
__builtin_memmove((R+24),(R+4),4);
}
B473a74:{NFSU2_TR(0x473a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473a79ull));
TAIL_STATIC(0x45e350u,45e);
}
B473a79:L473a79:{c.instructions+=11;NFSU2_TR(0x473a79);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B473a7b:{NFSU2_TR(0x473a7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473a81:{NFSU2_TR(0x473a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473a87:{NFSU2_TR(0x473a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473a8d:{NFSU2_TR(0x473a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473a93:{NFSU2_TR(0x473a93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B473a97:{NFSU2_TR(0x473a97);
u8 U[4];
w4(U+0,u32(0x78ae48ull));
s4(u32(r4(R+24)),r4(U+0));
}
B473a9d:{NFSU2_TR(0x473a9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+8),(U+0),4);
}
B473aa3:{NFSU2_TR(0x473aa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B473aa9:{NFSU2_TR(0x473aa9);
w4(R+28,u32(0x4ull));
}
B473aae:{NFSU2_TR(0x473aae);
__builtin_memmove((R+28),(R+28),4);
}
B473ab0:L473ab0:{c.instructions+=12;NFSU2_TR(0x473ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ab3:{NFSU2_TR(0x473ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ab6:{NFSU2_TR(0x473ab6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B473ab8:{NFSU2_TR(0x473ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473abb:{NFSU2_TR(0x473abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473abe:{NFSU2_TR(0x473abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ac1:{NFSU2_TR(0x473ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ac4:{NFSU2_TR(0x473ac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B473ac6:{NFSU2_TR(0x473ac6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B473ac9:{NFSU2_TR(0x473ac9);
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B473acc:{NFSU2_TR(0x473acc);
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
B473acd:{NFSU2_TR(0x473acd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473ab0u);}goto L473ab0;}}
}
B473acf:L473acf:{c.instructions+=4;NFSU2_TR(0x473acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473ad0:{NFSU2_TR(0x473ad0);
__builtin_memmove((R+0),(R+24),4);
}
B473ad2:{NFSU2_TR(0x473ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473ad3:{NFSU2_TR(0x473ad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473ae0:L473ae0:{c.instructions+=8;NFSU2_TR(0x473ae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ae1:{NFSU2_TR(0x473ae1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ae2:{NFSU2_TR(0x473ae2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ae3:{NFSU2_TR(0x473ae3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ae4:{NFSU2_TR(0x473ae4);
__builtin_memmove((R+20),(R+4),4);
}
B473ae6:{NFSU2_TR(0x473ae6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ae7:{NFSU2_TR(0x473ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473aed:{NFSU2_TR(0x473aed);
w4(R+12,u32(0x4ull));
}
B473af2:L473af2:{c.instructions+=3;NFSU2_TR(0x473af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B473af4:{NFSU2_TR(0x473af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B473af6:{NFSU2_TR(0x473af6);
if(r1(R+518)){{goto L473b2c;}}
}
B473af8:L473af8:{c.instructions+=3;NFSU2_TR(0x473af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473afa:{NFSU2_TR(0x473afa);
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
B473afc:{NFSU2_TR(0x473afc);
if(r1(R+518)){{goto L473b03;}}
}
B473afe:L473afe:{c.instructions+=1;NFSU2_TR(0x473afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b03ull));
TAIL_STATIC(0x735550u,735);
}
B473b03:L473b03:{c.instructions+=3;NFSU2_TR(0x473b03);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B473b07:{NFSU2_TR(0x473b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b08:{NFSU2_TR(0x473b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b0dull));
TAIL_STATIC(0x734df0u,734);
}
B473b0d:L473b0d:{c.instructions+=2;NFSU2_TR(0x473b0d);
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
B473b10:{NFSU2_TR(0x473b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b15ull));
TAIL_STATIC(0x734e40u,734);
}
B473b15:L473b15:{c.instructions+=5;NFSU2_TR(0x473b15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473b19:{NFSU2_TR(0x473b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473b1b:{NFSU2_TR(0x473b1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b1d:{NFSU2_TR(0x473b1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b1e:{NFSU2_TR(0x473b1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b21ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473b21:L473b21:{c.instructions+=1;NFSU2_TR(0x473b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b26ull));
TAIL_STATIC(0x734e60u,734);
}
B473b26:L473b26:{c.instructions+=1;NFSU2_TR(0x473b26);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B473b2c:L473b2c:{c.instructions+=3;NFSU2_TR(0x473b2c);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B473b2f:{NFSU2_TR(0x473b2f);
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
B473b30:{NFSU2_TR(0x473b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473af2u);}goto L473af2;}}
}
B473b32:L473b32:{c.instructions+=7;NFSU2_TR(0x473b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473b33:{NFSU2_TR(0x473b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473b34:{NFSU2_TR(0x473b34);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B473b3b:{NFSU2_TR(0x473b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B473b3c:{NFSU2_TR(0x473b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B473b3d:{NFSU2_TR(0x473b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B473b3e:{NFSU2_TR(0x473b3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473b40:L473b40:{c.instructions+=7;NFSU2_TR(0x473b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b41:{NFSU2_TR(0x473b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B473b45:{NFSU2_TR(0x473b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473b47:{NFSU2_TR(0x473b47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b48:{NFSU2_TR(0x473b48);
__builtin_memmove((R+28),(R+4),4);
}
B473b4a:{NFSU2_TR(0x473b4a);
__builtin_memmove((R+4),(R+24),4);
}
B473b4c:{NFSU2_TR(0x473b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473b4f:L473b4f:{c.instructions+=5;NFSU2_TR(0x473b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473b51:{NFSU2_TR(0x473b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B473b54:{NFSU2_TR(0x473b54);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B473b59:{NFSU2_TR(0x473b59);
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
B473b5a:{NFSU2_TR(0x473b5a);
if(r1(R+518)){{goto L473b8e;}}
}
B473b5c:L473b5c:{c.instructions+=2;NFSU2_TR(0x473b5c);
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
B473b5d:{NFSU2_TR(0x473b5d);
if(r1(R+518)){{goto L473b83;}}
}
B473b5f:L473b5f:{c.instructions+=2;NFSU2_TR(0x473b5f);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B473b62:{NFSU2_TR(0x473b62);
if(r1(R+518)){{goto L473b78;}}
}
B473b64:L473b64:{c.instructions+=3;NFSU2_TR(0x473b64);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b69:{NFSU2_TR(0x473b69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473b6b:{NFSU2_TR(0x473b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473b70ull));
TAIL_STATIC(0x4691c0u,469);
}
B473b70:L473b70:{c.instructions+=4;NFSU2_TR(0x473b70);
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
B473b73:{NFSU2_TR(0x473b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473b74:{NFSU2_TR(0x473b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473b75:{NFSU2_TR(0x473b75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473b78:L473b78:{c.instructions+=4;NFSU2_TR(0x473b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473b7e:{NFSU2_TR(0x473b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473b7f:{NFSU2_TR(0x473b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473b80:{NFSU2_TR(0x473b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473b83:L473b83:{c.instructions+=4;NFSU2_TR(0x473b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473b89:{NFSU2_TR(0x473b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473b8a:{NFSU2_TR(0x473b8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473b8b:{NFSU2_TR(0x473b8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473b8e:L473b8e:{c.instructions+=4;NFSU2_TR(0x473b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473b94:{NFSU2_TR(0x473b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473b95:{NFSU2_TR(0x473b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473b96:{NFSU2_TR(0x473b96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473ba0:L473ba0:{c.instructions+=8;NFSU2_TR(0x473ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ba1:{NFSU2_TR(0x473ba1);
__builtin_memmove((R+24),(R+4),4);
}
B473ba3:{NFSU2_TR(0x473ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473ba6:{NFSU2_TR(0x473ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473ba9:{NFSU2_TR(0x473ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B473bac:{NFSU2_TR(0x473bac);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B473bb2:{NFSU2_TR(0x473bb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B473bb4:{NFSU2_TR(0x473bb4);
if(r1(R+518)){{goto L473bc0;}}
}
B473bb6:L473bb6:{c.instructions+=1;NFSU2_TR(0x473bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473bc0:L473bc0:{c.instructions+=5;NFSU2_TR(0x473bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473bc6:{NFSU2_TR(0x473bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473bcc:{NFSU2_TR(0x473bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473bd2:{NFSU2_TR(0x473bd2);
__builtin_memmove((R+4),(R+24),4);
}
B473bd4:{NFSU2_TR(0x473bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473bd9ull));
TAIL_STATIC(0x4608d0u,460);
}
B473bd9:L473bd9:{c.instructions+=3;NFSU2_TR(0x473bd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B473be0:{NFSU2_TR(0x473be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473be1:{NFSU2_TR(0x473be1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473bf0:L473bf0:{c.instructions+=4;NFSU2_TR(0x473bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473bf1:{NFSU2_TR(0x473bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473bf2:{NFSU2_TR(0x473bf2);
__builtin_memmove((R+24),(R+4),4);
}
B473bf4:{NFSU2_TR(0x473bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473bf9ull));
TAIL_STATIC(0x45e350u,45e);
}
B473bf9:L473bf9:{c.instructions+=13;NFSU2_TR(0x473bf9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B473bfb:{NFSU2_TR(0x473bfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473c01:{NFSU2_TR(0x473c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c07:{NFSU2_TR(0x473c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c0d:{NFSU2_TR(0x473c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c13:{NFSU2_TR(0x473c13);
u8 U[4];
w4(U+0,u32(0x78ae90ull));
s4(u32(r4(R+24)),r4(U+0));
}
B473c19:{NFSU2_TR(0x473c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c1f:{NFSU2_TR(0x473c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c25:{NFSU2_TR(0x473c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c2b:{NFSU2_TR(0x473c2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473c2e:{NFSU2_TR(0x473c2e);
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
B473c30:{NFSU2_TR(0x473c30);
w4(R+4,u32(0x6ull));
}
B473c35:{NFSU2_TR(0x473c35);
w4(R+28,u32(0x82af90ull));
}
B473c3a:L473c3a:{c.instructions+=1;NFSU2_TR(0x473c3a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L473c3c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473c3au);}goto L473c3a;}
}
B473c3c:L473c3c:{c.instructions+=6;NFSU2_TR(0x473c3c);
s4(0x7ed440,u32(0xffffffffull));
}
B473c46:{NFSU2_TR(0x473c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473c47:{NFSU2_TR(0x473c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c4d:{NFSU2_TR(0x473c4d);
__builtin_memmove((R+0),(R+24),4);
}
B473c4f:{NFSU2_TR(0x473c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473c50:{NFSU2_TR(0x473c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473c60:L473c60:{c.instructions+=15;NFSU2_TR(0x473c60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473c62:{NFSU2_TR(0x473c62);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473c67:{NFSU2_TR(0x473c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473c6d:{NFSU2_TR(0x473c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473c6e:{NFSU2_TR(0x473c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c75:{NFSU2_TR(0x473c75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B473c78:{NFSU2_TR(0x473c78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473c79:{NFSU2_TR(0x473c79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473c7a:{NFSU2_TR(0x473c7a);
__builtin_memmove((R+28),(R+4),4);
}
B473c7c:{NFSU2_TR(0x473c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473c80:{NFSU2_TR(0x473c80);
u8 U[4];
w4(U+0,u32(0x78ae90ull));
s4(u32(r4(R+28)),r4(U+0));
}
B473c86:{NFSU2_TR(0x473c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B473c8c:{NFSU2_TR(0x473c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B473c8e:{NFSU2_TR(0x473c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473c96:{NFSU2_TR(0x473c96);
if(r1(R+518)){{goto L473cc6;}}
}
B473c98:L473c98:{c.instructions+=3;NFSU2_TR(0x473c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473c9a:{NFSU2_TR(0x473c9a);
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
B473c9c:{NFSU2_TR(0x473c9c);
if(r1(R+518)){{goto L473ca3;}}
}
B473c9e:L473c9e:{c.instructions+=1;NFSU2_TR(0x473c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473ca3ull));
TAIL_STATIC(0x735550u,735);
}
B473ca3:L473ca3:{c.instructions+=3;NFSU2_TR(0x473ca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B473ca7:{NFSU2_TR(0x473ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ca8:{NFSU2_TR(0x473ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473cadull));
TAIL_STATIC(0x734df0u,734);
}
B473cad:L473cad:{c.instructions+=2;NFSU2_TR(0x473cad);
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
B473cb0:{NFSU2_TR(0x473cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473cb5ull));
TAIL_STATIC(0x734e40u,734);
}
B473cb5:L473cb5:{c.instructions+=5;NFSU2_TR(0x473cb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473cb9:{NFSU2_TR(0x473cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473cbb:{NFSU2_TR(0x473cbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473cbd:{NFSU2_TR(0x473cbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473cbe:{NFSU2_TR(0x473cbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473cc1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473cc1:L473cc1:{c.instructions+=1;NFSU2_TR(0x473cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473cc6ull));
TAIL_STATIC(0x734e60u,734);
}
B473cc6:L473cc6:{c.instructions+=7;NFSU2_TR(0x473cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473cca:{NFSU2_TR(0x473cca);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B473cd0:{NFSU2_TR(0x473cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473cd1:{NFSU2_TR(0x473cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473cd2:{NFSU2_TR(0x473cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473cd9:{NFSU2_TR(0x473cd9);
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
B473cdc:{NFSU2_TR(0x473cdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473ce0:L473ce0:{c.instructions+=3;NFSU2_TR(0x473ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ce1:{NFSU2_TR(0x473ce1);
__builtin_memmove((R+24),(R+4),4);
}
B473ce3:{NFSU2_TR(0x473ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473ce8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473bf0u);}goto L473bf0;}
}
B473ce8:L473ce8:{c.instructions+=12;NFSU2_TR(0x473ce8);
__builtin_memmove((R+0),gp(0x82cb4c),4);
}
B473ced:{NFSU2_TR(0x473ced);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B473cf0:{NFSU2_TR(0x473cf0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B473cf1:{NFSU2_TR(0x473cf1);
w4(R+4,u32(0x258ull));
}
B473cf6:{NFSU2_TR(0x473cf6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x473cf6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x473cf6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B473cf8:{NFSU2_TR(0x473cf8);
u8 U[4];
w4(U+0,u32(0x78aee0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B473cfe:{NFSU2_TR(0x473cfe);
__builtin_memmove((R+0),(R+24),4);
}
B473d00:{NFSU2_TR(0x473d00);
__builtin_memmove(gp(0x82cb4c),(R+8),4);
}
B473d06:{NFSU2_TR(0x473d06);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xfffffed4ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xfffffed4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffed4ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B473d0c:{NFSU2_TR(0x473d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d12:{NFSU2_TR(0x473d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473d13:{NFSU2_TR(0x473d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473d20:L473d20:{c.instructions+=2;NFSU2_TR(0x473d20);
u8 U[4];
w4(U+0,u32(0x78aee0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B473d26:{NFSU2_TR(0x473d26);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473c60u);}goto L473c60;}
}
B473d30:L473d30:{c.instructions+=3;NFSU2_TR(0x473d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473d31:{NFSU2_TR(0x473d31);
__builtin_memmove((R+24),(R+4),4);
}
B473d33:{NFSU2_TR(0x473d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473d38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473bf0u);}goto L473bf0;}
}
B473d38:L473d38:{c.instructions+=5;NFSU2_TR(0x473d38);
u8 U[4];
w4(U+0,u32(0x78af30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B473d3e:{NFSU2_TR(0x473d3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B473d44:{NFSU2_TR(0x473d44);
w4(R+8,u32(0x2ull));
}
B473d49:{NFSU2_TR(0x473d49);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B473d4b:{NFSU2_TR(0x473d4b);
{goto L473d50;}
}
B473d50:L473d50:{c.instructions+=10;NFSU2_TR(0x473d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B473d52:{NFSU2_TR(0x473d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d55:{NFSU2_TR(0x473d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d58:{NFSU2_TR(0x473d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d5b:{NFSU2_TR(0x473d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d5e:{NFSU2_TR(0x473d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B473d65:{NFSU2_TR(0x473d65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473d68:{NFSU2_TR(0x473d68);
w1(R+512,carry<u32>(r4(R+0),u32(0x1cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B473d6b:{NFSU2_TR(0x473d6b);
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
B473d6c:{NFSU2_TR(0x473d6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473d50u);}goto L473d50;}}
}
B473d6e:L473d6e:{c.instructions+=6;NFSU2_TR(0x473d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d74:{NFSU2_TR(0x473d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473d7a:{NFSU2_TR(0x473d7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B473d80:{NFSU2_TR(0x473d80);
__builtin_memmove((R+0),(R+24),4);
}
B473d82:{NFSU2_TR(0x473d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473d83:{NFSU2_TR(0x473d83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473d90:L473d90:{c.instructions+=16;NFSU2_TR(0x473d90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473d92:{NFSU2_TR(0x473d92);
u8 U[4];
w4(U+0,u32(0x772578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473d97:{NFSU2_TR(0x473d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473d9d:{NFSU2_TR(0x473d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473d9e:{NFSU2_TR(0x473d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473da5:{NFSU2_TR(0x473da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473da6:{NFSU2_TR(0x473da6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473da7:{NFSU2_TR(0x473da7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473da8:{NFSU2_TR(0x473da8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473da9:{NFSU2_TR(0x473da9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473daa:{NFSU2_TR(0x473daa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473dae:{NFSU2_TR(0x473dae);
u8 U[4];
w4(U+0,u32(0x78af30ull));
s4(u32(r4(R+4)),r4(U+0));
}
B473db4:{NFSU2_TR(0x473db4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B473db6:{NFSU2_TR(0x473db6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473dba:{NFSU2_TR(0x473dba);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B473dbc:{NFSU2_TR(0x473dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473dc2:L473dc2:{c.instructions+=4;NFSU2_TR(0x473dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473dc8:{NFSU2_TR(0x473dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473dcb:{NFSU2_TR(0x473dcb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473dcd:{NFSU2_TR(0x473dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473dd4;}}
}
B473dcf:L473dcf:{c.instructions+=2;NFSU2_TR(0x473dcf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B473dd2:{NFSU2_TR(0x473dd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L473dde;}}
}
B473dd4:L473dd4:{c.instructions+=2;NFSU2_TR(0x473dd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473dd7:{NFSU2_TR(0x473dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473e3d;}}
}
B473dd9:L473dd9:{c.instructions+=2;NFSU2_TR(0x473dd9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B473ddc:{NFSU2_TR(0x473ddc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473e3d;}}
}
B473dde:L473dde:{c.instructions+=3;NFSU2_TR(0x473dde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B473de0:{NFSU2_TR(0x473de0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473de2:{NFSU2_TR(0x473de2);
if(r1(R+518)){{goto L473e02;}}
}
B473de4:L473de4:{c.instructions+=2;NFSU2_TR(0x473de4);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B473de7:{NFSU2_TR(0x473de7);
if(r1(R+518)){{goto L473e02;}}
}
B473de9:L473de9:{c.instructions+=1;NFSU2_TR(0x473de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473deeull));
TAIL_STATIC(0x721f99u,721);
}
B473dee:L473dee:{c.instructions+=3;NFSU2_TR(0x473dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473df1:{NFSU2_TR(0x473df1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473df2:{NFSU2_TR(0x473df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473df7ull));
TAIL_STATIC(0x72387bu,723);
}
B473df7:L473df7:{c.instructions+=2;NFSU2_TR(0x473df7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B473dfa:{NFSU2_TR(0x473dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473dffull));
TAIL_STATIC(0x721fa7u,721);
}
B473dff:L473dff:{c.instructions+=1;NFSU2_TR(0x473dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473e02:L473e02:{c.instructions+=3;NFSU2_TR(0x473e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B473e04:{NFSU2_TR(0x473e04);
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
B473e06:{NFSU2_TR(0x473e06);
if(r1(R+518)){{goto L473e0e;}}
}
B473e08:L473e08:{c.instructions+=3;NFSU2_TR(0x473e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B473e0a:{NFSU2_TR(0x473e0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473e0c:{NFSU2_TR(0x473e0c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473e0eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B473e0e:L473e0e:{c.instructions+=4;NFSU2_TR(0x473e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473e11:{NFSU2_TR(0x473e11);
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
B473e13:{NFSU2_TR(0x473e13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B473e15:{NFSU2_TR(0x473e15);
if(r1(R+518)){{goto L473e1d;}}
}
B473e17:L473e17:{c.instructions+=3;NFSU2_TR(0x473e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473e19:{NFSU2_TR(0x473e19);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473e1b:{NFSU2_TR(0x473e1b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473e1dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B473e1d:L473e1d:{c.instructions+=4;NFSU2_TR(0x473e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473e20:{NFSU2_TR(0x473e20);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473e22:{NFSU2_TR(0x473e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473e25:{NFSU2_TR(0x473e25);
if(r1(R+518)){{goto L473e30;}}
}
B473e27:L473e27:{c.instructions+=2;NFSU2_TR(0x473e27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473e28:{NFSU2_TR(0x473e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473e2dull));
TAIL_STATIC(0x440540u,440);
}
B473e2d:L473e2d:{c.instructions+=1;NFSU2_TR(0x473e2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B473e30:L473e30:{c.instructions+=5;NFSU2_TR(0x473e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473e34:{NFSU2_TR(0x473e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473e37:{NFSU2_TR(0x473e37);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B473e38:{NFSU2_TR(0x473e38);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B473e3b:{NFSU2_TR(0x473e3b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473dc2u);}goto L473dc2;}
}
B473e3d:L473e3d:{c.instructions+=2;NFSU2_TR(0x473e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B473e45:{NFSU2_TR(0x473e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473e4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x473c60u);}goto L473c60;}
}
B473e4a:L473e4a:{c.instructions+=8;NFSU2_TR(0x473e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473e4e:{NFSU2_TR(0x473e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473e4f:{NFSU2_TR(0x473e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B473e50:{NFSU2_TR(0x473e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B473e51:{NFSU2_TR(0x473e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B473e52:{NFSU2_TR(0x473e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473e59:{NFSU2_TR(0x473e59);
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
B473e5c:{NFSU2_TR(0x473e5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B473e60:L473e60:{c.instructions+=6;NFSU2_TR(0x473e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B473e63:{NFSU2_TR(0x473e63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473e64:{NFSU2_TR(0x473e64);
__builtin_memmove((R+24),(R+4),4);
}
B473e66:{NFSU2_TR(0x473e66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B473e6c:{NFSU2_TR(0x473e6c);
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
B473e6e:{NFSU2_TR(0x473e6e);
if(r1(R+518)){TAIL_STATIC(0x474024u,474);}
}
B473e74:L473e74:{c.instructions+=3;NFSU2_TR(0x473e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473e76:{NFSU2_TR(0x473e76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473e78:{NFSU2_TR(0x473e78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473e7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473e7b:L473e7b:{c.instructions+=13;NFSU2_TR(0x473e7b);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473e81:{NFSU2_TR(0x473e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473e87:{NFSU2_TR(0x473e87);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B473e8d:{NFSU2_TR(0x473e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473e93:{NFSU2_TR(0x473e93);
__builtin_memmove((R+8),(R+0),4);
}
B473e95:{NFSU2_TR(0x473e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473e9b:{NFSU2_TR(0x473e9b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B473e9e:{NFSU2_TR(0x473e9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ea2:{NFSU2_TR(0x473ea2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B473ea5:{NFSU2_TR(0x473ea5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B473ea7:{NFSU2_TR(0x473ea7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B473eaa:{NFSU2_TR(0x473eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B473eb2:{NFSU2_TR(0x473eb2);
if(r1(R+514)){{goto L473ece;}}
}
B473eb4:L473eb4:{c.instructions+=5;NFSU2_TR(0x473eb4);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473eba:{NFSU2_TR(0x473eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473ec0:{NFSU2_TR(0x473ec0);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B473ec6:{NFSU2_TR(0x473ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473eca:{NFSU2_TR(0x473eca);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B473ece:L473ece:{c.instructions+=6;NFSU2_TR(0x473ece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ecf:{NFSU2_TR(0x473ecf);
__builtin_memmove((R+12),gp(0x82a998),4);
}
B473ed5:{NFSU2_TR(0x473ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B473ed8:{NFSU2_TR(0x473ed8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B473eda:{NFSU2_TR(0x473eda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473edb:{NFSU2_TR(0x473edb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473ee1;}}
}
B473edd:L473edd:{c.instructions+=2;NFSU2_TR(0x473edd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B473edf:{NFSU2_TR(0x473edf);
{goto L473eeb;}
}
B473ee1:L473ee1:{c.instructions+=2;NFSU2_TR(0x473ee1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473ee4:{NFSU2_TR(0x473ee4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473eeb;}}
}
B473ee6:L473ee6:{c.instructions+=1;NFSU2_TR(0x473ee6);
w4(R+12,u32(0x7full));
}
B473eeb:L473eeb:{c.instructions+=5;NFSU2_TR(0x473eeb);
__builtin_memmove((R+0),(R+4),4);
}
B473eed:{NFSU2_TR(0x473eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B473ef0:{NFSU2_TR(0x473ef0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B473ef2:{NFSU2_TR(0x473ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473ef8:{NFSU2_TR(0x473ef8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473efe;}}
}
B473efa:L473efa:{c.instructions+=2;NFSU2_TR(0x473efa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B473efc:{NFSU2_TR(0x473efc);
{goto L473f08;}
}
B473efe:L473efe:{c.instructions+=2;NFSU2_TR(0x473efe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B473f01:{NFSU2_TR(0x473f01);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473f08;}}
}
B473f03:L473f03:{c.instructions+=1;NFSU2_TR(0x473f03);
w4(R+0,u32(0x7full));
}
B473f08:L473f08:{c.instructions+=6;NFSU2_TR(0x473f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473f0e:{NFSU2_TR(0x473f0e);
__builtin_memmove((R+28),gp(0x82b078),4);
}
B473f14:{NFSU2_TR(0x473f14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B473f17:{NFSU2_TR(0x473f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B473f1a:{NFSU2_TR(0x473f1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B473f1c:{NFSU2_TR(0x473f1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L473f22;}}
}
B473f1e:L473f1e:{c.instructions+=2;NFSU2_TR(0x473f1e);
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
B473f20:{NFSU2_TR(0x473f20);
{goto L473f2c;}
}
B473f22:L473f22:{c.instructions+=2;NFSU2_TR(0x473f22);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B473f25:{NFSU2_TR(0x473f25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L473f2c;}}
}
B473f27:L473f27:{c.instructions+=1;NFSU2_TR(0x473f27);
w4(R+28,u32(0x7full));
}
B473f2c:L473f2c:{c.instructions+=1;NFSU2_TR(0x473f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f31ull));
TAIL_STATIC(0x721f99u,721);
}
B473f31:L473f31:{c.instructions+=5;NFSU2_TR(0x473f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473f37:{NFSU2_TR(0x473f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B473f3d:{NFSU2_TR(0x473f3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f3e:{NFSU2_TR(0x473f3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f3f:{NFSU2_TR(0x473f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f44ull));
TAIL_STATIC(0x72412au,724);
}
B473f44:L473f44:{c.instructions+=6;NFSU2_TR(0x473f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B473f46:{NFSU2_TR(0x473f46);
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
B473f49:{NFSU2_TR(0x473f49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f4b:{NFSU2_TR(0x473f4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f4d:{NFSU2_TR(0x473f4d);
__builtin_memmove((R+4),(R+24),4);
}
B473f4f:{NFSU2_TR(0x473f4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B473f52:L473f52:{c.instructions+=4;NFSU2_TR(0x473f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473f58:{NFSU2_TR(0x473f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f59:{NFSU2_TR(0x473f59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f5a:{NFSU2_TR(0x473f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f5full));
TAIL_STATIC(0x724093u,724);
}
B473f5f:L473f5f:{c.instructions+=4;NFSU2_TR(0x473f5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473f63:{NFSU2_TR(0x473f63);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473f69:{NFSU2_TR(0x473f69);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B473f6f:{NFSU2_TR(0x473f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f74ull));
TAIL_STATIC(0x75bed4u,75b);
}
B473f74:L473f74:{c.instructions+=4;NFSU2_TR(0x473f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B473f7a:{NFSU2_TR(0x473f7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f7b:{NFSU2_TR(0x473f7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f7c:{NFSU2_TR(0x473f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f81ull));
TAIL_STATIC(0x723d9bu,723);
}
B473f81:L473f81:{c.instructions+=3;NFSU2_TR(0x473f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473f87:{NFSU2_TR(0x473f87);
{u32 ea_=u32(r4(R+0)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473f8d:{NFSU2_TR(0x473f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f92ull));
TAIL_STATIC(0x75bed4u,75b);
}
B473f92:L473f92:{c.instructions+=4;NFSU2_TR(0x473f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473f98:{NFSU2_TR(0x473f98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f99:{NFSU2_TR(0x473f99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473f9a:{NFSU2_TR(0x473f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473f9full));
TAIL_STATIC(0x72403eu,724);
}
B473f9f:L473f9f:{c.instructions+=4;NFSU2_TR(0x473f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B473fa5:{NFSU2_TR(0x473fa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fa6:{NFSU2_TR(0x473fa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fa7:{NFSU2_TR(0x473fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473facull));
TAIL_STATIC(0x723c41u,723);
}
B473fac:L473fac:{c.instructions+=5;NFSU2_TR(0x473fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473fb2:{NFSU2_TR(0x473fb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fb3:{NFSU2_TR(0x473fb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fb5:{NFSU2_TR(0x473fb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fb6:{NFSU2_TR(0x473fb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473fbbull));
TAIL_STATIC(0x723bc1u,723);
}
B473fbb:L473fbb:{c.instructions+=2;NFSU2_TR(0x473fbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B473fbe:{NFSU2_TR(0x473fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473fc3ull));
TAIL_STATIC(0x721fa7u,721);
}
B473fc3:L473fc3:{c.instructions+=5;NFSU2_TR(0x473fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473fc7:{NFSU2_TR(0x473fc7);
u8 U[4];
w4(U+0,u32(0x42700000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fcc:{NFSU2_TR(0x473fcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473fcd:{NFSU2_TR(0x473fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473fd3:{NFSU2_TR(0x473fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x473fd8ull));
TAIL_STATIC(0x467230u,467);
}
B473fd8:L473fd8:{c.instructions+=7;NFSU2_TR(0x473fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B473fde:{NFSU2_TR(0x473fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473fe1:{NFSU2_TR(0x473fe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B473fe3:{NFSU2_TR(0x473fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B473fe4:{NFSU2_TR(0x473fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B473fe8:{NFSU2_TR(0x473fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B473fe9:{NFSU2_TR(0x473fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L473ff3;}}
}
B473feb:L473feb:{c.instructions+=2;NFSU2_TR(0x473feb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B473ff1:{NFSU2_TR(0x473ff1);
TAIL_STATIC(0x474014u,474);
}
B473ff3:L473ff3:{c.instructions+=5;NFSU2_TR(0x473ff3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B473ff7:{NFSU2_TR(0x473ff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B473ff8:{NFSU2_TR(0x473ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B473ffb:{NFSU2_TR(0x473ffb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B473fff:{NFSU2_TR(0x473fff);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x474002u,474);
}
XIT:NFSU2_TR_EXIT(0x473,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
