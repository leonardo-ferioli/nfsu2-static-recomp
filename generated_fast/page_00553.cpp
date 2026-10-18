#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_546(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_554(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x553,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x553,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_553(u8* __restrict R,Cpu& c);
u32 page_553(Cpu& c){return body_553(c.regs.data(),c);}
__attribute__((noinline)) u32 body_553(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x553001:goto L553001;
case 0x553004:c.instructions+=4;goto B553004;
case 0x553007:c.instructions+=3;goto B553007;
case 0x553009:c.instructions+=2;goto B553009;
case 0x55300e:c.instructions+=1;goto B55300e;
case 0x553010:goto L553010;
case 0x553012:c.instructions+=5;goto B553012;
case 0x553015:c.instructions+=4;goto B553015;
case 0x553017:c.instructions+=3;goto B553017;
case 0x553018:c.instructions+=2;goto B553018;
case 0x55301b:c.instructions+=1;goto B55301b;
case 0x553020:goto L553020;
case 0x553022:c.instructions+=3;goto B553022;
case 0x553025:c.instructions+=2;goto B553025;
case 0x553027:c.instructions+=1;goto B553027;
case 0x553029:goto L553029;
case 0x55302c:c.instructions+=4;goto B55302c;
case 0x55302f:c.instructions+=3;goto B55302f;
case 0x553031:c.instructions+=2;goto B553031;
case 0x553036:c.instructions+=1;goto B553036;
case 0x553038:goto L553038;
case 0x55303a:c.instructions+=5;goto B55303a;
case 0x55303d:c.instructions+=4;goto B55303d;
case 0x55303f:c.instructions+=3;goto B55303f;
case 0x553040:c.instructions+=2;goto B553040;
case 0x553043:c.instructions+=1;goto B553043;
case 0x553048:goto L553048;
case 0x55304a:c.instructions+=3;goto B55304a;
case 0x55304d:c.instructions+=2;goto B55304d;
case 0x55304f:c.instructions+=1;goto B55304f;
case 0x553051:goto L553051;
case 0x553055:c.instructions+=6;goto B553055;
case 0x55305b:c.instructions+=5;goto B55305b;
case 0x55305c:c.instructions+=4;goto B55305c;
case 0x55305d:c.instructions+=3;goto B55305d;
case 0x553064:c.instructions+=2;goto B553064;
case 0x553067:c.instructions+=1;goto B553067;
case 0x553070:goto L553070;
case 0x553072:c.instructions+=11;goto B553072;
case 0x553077:c.instructions+=10;goto B553077;
case 0x55307d:c.instructions+=9;goto B55307d;
case 0x55307e:c.instructions+=8;goto B55307e;
case 0x553085:c.instructions+=7;goto B553085;
case 0x553086:c.instructions+=6;goto B553086;
case 0x55308a:c.instructions+=5;goto B55308a;
case 0x55308b:c.instructions+=4;goto B55308b;
case 0x55308d:c.instructions+=3;goto B55308d;
case 0x55308e:c.instructions+=2;goto B55308e;
case 0x553092:c.instructions+=1;goto B553092;
case 0x553097:goto L553097;
case 0x553099:c.instructions+=3;goto B553099;
case 0x5530a1:c.instructions+=2;goto B5530a1;
case 0x5530a7:c.instructions+=1;goto B5530a7;
case 0x5530ac:goto L5530ac;
case 0x5530b0:c.instructions+=5;goto B5530b0;
case 0x5530b2:c.instructions+=4;goto B5530b2;
case 0x5530b3:c.instructions+=3;goto B5530b3;
case 0x5530ba:c.instructions+=2;goto B5530ba;
case 0x5530bd:c.instructions+=1;goto B5530bd;
case 0x5530c0:goto L5530c0;
case 0x5530c1:c.instructions+=2;goto B5530c1;
case 0x5530c3:c.instructions+=1;goto B5530c3;
case 0x5530c8:goto L5530c8;
case 0x5530cd:c.instructions+=1;goto B5530cd;
case 0x5530cf:goto L5530cf;
case 0x5530d0:c.instructions+=1;goto B5530d0;
case 0x5530d5:goto L5530d5;
case 0x5530d8:goto L5530d8;
case 0x5530da:c.instructions+=2;goto B5530da;
case 0x5530db:c.instructions+=1;goto B5530db;
case 0x5530e0:goto L5530e0;
case 0x5530e6:c.instructions+=1;goto B5530e6;
case 0x5530f0:goto L5530f0;
case 0x5530f2:c.instructions+=13;goto B5530f2;
case 0x5530f7:c.instructions+=12;goto B5530f7;
case 0x5530fd:c.instructions+=11;goto B5530fd;
case 0x5530fe:c.instructions+=10;goto B5530fe;
case 0x553105:c.instructions+=9;goto B553105;
case 0x553106:c.instructions+=8;goto B553106;
case 0x553107:c.instructions+=7;goto B553107;
case 0x553108:c.instructions+=6;goto B553108;
case 0x553109:c.instructions+=5;goto B553109;
case 0x55310d:c.instructions+=4;goto B55310d;
case 0x55310f:c.instructions+=3;goto B55310f;
case 0x553110:c.instructions+=2;goto B553110;
case 0x553114:c.instructions+=1;goto B553114;
case 0x553119:goto L553119;
case 0x55311b:c.instructions+=17;goto B55311b;
case 0x553121:c.instructions+=16;goto B553121;
case 0x553127:c.instructions+=15;goto B553127;
case 0x55312d:c.instructions+=14;goto B55312d;
case 0x553137:c.instructions+=13;goto B553137;
case 0x553141:c.instructions+=12;goto B553141;
case 0x553147:c.instructions+=11;goto B553147;
case 0x55314d:c.instructions+=10;goto B55314d;
case 0x553153:c.instructions+=9;goto B553153;
case 0x553159:c.instructions+=8;goto B553159;
case 0x55315f:c.instructions+=7;goto B55315f;
case 0x553162:c.instructions+=6;goto B553162;
case 0x553168:c.instructions+=5;goto B553168;
case 0x55316c:c.instructions+=4;goto B55316c;
case 0x553172:c.instructions+=3;goto B553172;
case 0x553179:c.instructions+=2;goto B553179;
case 0x55317b:c.instructions+=1;goto B55317b;
case 0x553181:goto L553181;
case 0x553188:c.instructions+=5;goto B553188;
case 0x55318a:c.instructions+=4;goto B55318a;
case 0x55318b:c.instructions+=3;goto B55318b;
case 0x55318e:c.instructions+=2;goto B55318e;
case 0x553191:c.instructions+=1;goto B553191;
case 0x553193:goto L553193;
case 0x553195:c.instructions+=1;goto B553195;
case 0x55319a:goto L55319a;
case 0x5531a0:c.instructions+=2;goto B5531a0;
case 0x5531a1:c.instructions+=1;goto B5531a1;
case 0x5531a6:goto L5531a6;
case 0x5531a9:c.instructions+=2;goto B5531a9;
case 0x5531ab:c.instructions+=1;goto B5531ab;
case 0x5531ad:goto L5531ad;
case 0x5531b0:c.instructions+=3;goto B5531b0;
case 0x5531b3:c.instructions+=2;goto B5531b3;
case 0x5531b6:c.instructions+=1;goto B5531b6;
case 0x5531b9:goto L5531b9;
case 0x5531bd:c.instructions+=7;goto B5531bd;
case 0x5531be:c.instructions+=6;goto B5531be;
case 0x5531c0:c.instructions+=5;goto B5531c0;
case 0x5531c1:c.instructions+=4;goto B5531c1;
case 0x5531c2:c.instructions+=3;goto B5531c2;
case 0x5531c9:c.instructions+=2;goto B5531c9;
case 0x5531cc:c.instructions+=1;goto B5531cc;
case 0x5531d0:goto L5531d0;
case 0x5531d1:c.instructions+=2;goto B5531d1;
case 0x5531d3:c.instructions+=1;goto B5531d3;
case 0x5531d8:goto L5531d8;
case 0x5531dd:c.instructions+=1;goto B5531dd;
case 0x5531df:goto L5531df;
case 0x5531e0:c.instructions+=1;goto B5531e0;
case 0x5531e5:goto L5531e5;
case 0x5531e8:goto L5531e8;
case 0x5531ea:c.instructions+=2;goto B5531ea;
case 0x5531eb:c.instructions+=1;goto B5531eb;
case 0x5531f0:goto L5531f0;
case 0x5531f6:c.instructions+=1;goto B5531f6;
case 0x553200:goto L553200;
case 0x553202:c.instructions+=11;goto B553202;
case 0x553207:c.instructions+=10;goto B553207;
case 0x55320d:c.instructions+=9;goto B55320d;
case 0x55320e:c.instructions+=8;goto B55320e;
case 0x553215:c.instructions+=7;goto B553215;
case 0x553216:c.instructions+=6;goto B553216;
case 0x55321a:c.instructions+=5;goto B55321a;
case 0x55321b:c.instructions+=4;goto B55321b;
case 0x55321d:c.instructions+=3;goto B55321d;
case 0x55321e:c.instructions+=2;goto B55321e;
case 0x553222:c.instructions+=1;goto B553222;
case 0x553227:goto L553227;
case 0x553229:c.instructions+=7;goto B553229;
case 0x55322f:c.instructions+=6;goto B55322f;
case 0x553235:c.instructions+=5;goto B553235;
case 0x55323b:c.instructions+=4;goto B55323b;
case 0x553241:c.instructions+=3;goto B553241;
case 0x553245:c.instructions+=2;goto B553245;
case 0x55324a:c.instructions+=1;goto B55324a;
case 0x55324f:goto L55324f;
case 0x553251:c.instructions+=1;goto B553251;
case 0x553256:goto L553256;
case 0x55325a:c.instructions+=5;goto B55325a;
case 0x55325c:c.instructions+=4;goto B55325c;
case 0x55325d:c.instructions+=3;goto B55325d;
case 0x553264:c.instructions+=2;goto B553264;
case 0x553267:c.instructions+=1;goto B553267;
case 0x553270:goto L553270;
case 0x553274:c.instructions+=1;goto B553274;
case 0x553280:goto L553280;
case 0x553281:c.instructions+=2;goto B553281;
case 0x553283:c.instructions+=1;goto B553283;
case 0x553288:goto L553288;
case 0x55328d:c.instructions+=1;goto B55328d;
case 0x55328f:goto L55328f;
case 0x553290:c.instructions+=1;goto B553290;
case 0x553295:goto L553295;
case 0x553298:goto L553298;
case 0x55329a:c.instructions+=2;goto B55329a;
case 0x55329b:c.instructions+=1;goto B55329b;
case 0x5532a0:goto L5532a0;
case 0x5532a6:c.instructions+=1;goto B5532a6;
case 0x5532b0:goto L5532b0;
case 0x5532b2:c.instructions+=12;goto B5532b2;
case 0x5532b7:c.instructions+=11;goto B5532b7;
case 0x5532bd:c.instructions+=10;goto B5532bd;
case 0x5532be:c.instructions+=9;goto B5532be;
case 0x5532c5:c.instructions+=8;goto B5532c5;
case 0x5532c6:c.instructions+=7;goto B5532c6;
case 0x5532c7:c.instructions+=6;goto B5532c7;
case 0x5532c8:c.instructions+=5;goto B5532c8;
case 0x5532cc:c.instructions+=4;goto B5532cc;
case 0x5532ce:c.instructions+=3;goto B5532ce;
case 0x5532cf:c.instructions+=2;goto B5532cf;
case 0x5532d3:c.instructions+=1;goto B5532d3;
case 0x5532d8:goto L5532d8;
case 0x5532de:c.instructions+=7;goto B5532de;
case 0x5532e1:c.instructions+=6;goto B5532e1;
case 0x5532e3:c.instructions+=5;goto B5532e3;
case 0x5532e9:c.instructions+=4;goto B5532e9;
case 0x5532eb:c.instructions+=3;goto B5532eb;
case 0x5532ef:c.instructions+=2;goto B5532ef;
case 0x5532f4:c.instructions+=1;goto B5532f4;
case 0x5532f9:goto L5532f9;
case 0x5532fd:c.instructions+=6;goto B5532fd;
case 0x5532fe:c.instructions+=5;goto B5532fe;
case 0x553300:c.instructions+=4;goto B553300;
case 0x553301:c.instructions+=3;goto B553301;
case 0x553308:c.instructions+=2;goto B553308;
case 0x55330b:c.instructions+=1;goto B55330b;
case 0x553310:goto L553310;
case 0x553312:c.instructions+=14;goto B553312;
case 0x553317:c.instructions+=13;goto B553317;
case 0x55331d:c.instructions+=12;goto B55331d;
case 0x55331e:c.instructions+=11;goto B55331e;
case 0x553325:c.instructions+=10;goto B553325;
case 0x553326:c.instructions+=9;goto B553326;
case 0x553327:c.instructions+=8;goto B553327;
case 0x553328:c.instructions+=7;goto B553328;
case 0x55332c:c.instructions+=6;goto B55332c;
case 0x55332d:c.instructions+=5;goto B55332d;
case 0x55332e:c.instructions+=4;goto B55332e;
case 0x553330:c.instructions+=3;goto B553330;
case 0x553331:c.instructions+=2;goto B553331;
case 0x553335:c.instructions+=1;goto B553335;
case 0x55333a:goto L55333a;
case 0x55333f:c.instructions+=13;goto B55333f;
case 0x553344:c.instructions+=12;goto B553344;
case 0x553346:c.instructions+=11;goto B553346;
case 0x553348:c.instructions+=10;goto B553348;
case 0x55334d:c.instructions+=9;goto B55334d;
case 0x553353:c.instructions+=8;goto B553353;
case 0x553356:c.instructions+=7;goto B553356;
case 0x553359:c.instructions+=6;goto B553359;
case 0x55335e:c.instructions+=5;goto B55335e;
case 0x553361:c.instructions+=4;goto B553361;
case 0x553362:c.instructions+=3;goto B553362;
case 0x553364:c.instructions+=2;goto B553364;
case 0x553368:c.instructions+=1;goto B553368;
case 0x55336d:goto L55336d;
case 0x553370:c.instructions+=8;goto B553370;
case 0x553371:c.instructions+=7;goto B553371;
case 0x553372:c.instructions+=6;goto B553372;
case 0x553374:c.instructions+=5;goto B553374;
case 0x553379:c.instructions+=4;goto B553379;
case 0x55337a:c.instructions+=3;goto B55337a;
case 0x553380:c.instructions+=2;goto B553380;
case 0x553385:c.instructions+=1;goto B553385;
case 0x55338a:goto L55338a;
case 0x553390:c.instructions+=17;goto B553390;
case 0x553396:c.instructions+=16;goto B553396;
case 0x55339c:c.instructions+=15;goto B55339c;
case 0x5533a2:c.instructions+=14;goto B5533a2;
case 0x5533a8:c.instructions+=13;goto B5533a8;
case 0x5533ae:c.instructions+=12;goto B5533ae;
case 0x5533b4:c.instructions+=11;goto B5533b4;
case 0x5533b7:c.instructions+=10;goto B5533b7;
case 0x5533ba:c.instructions+=9;goto B5533ba;
case 0x5533bd:c.instructions+=8;goto B5533bd;
case 0x5533c2:c.instructions+=7;goto B5533c2;
case 0x5533c3:c.instructions+=6;goto B5533c3;
case 0x5533c9:c.instructions+=5;goto B5533c9;
case 0x5533cd:c.instructions+=4;goto B5533cd;
case 0x5533d3:c.instructions+=3;goto B5533d3;
case 0x5533dd:c.instructions+=2;goto B5533dd;
case 0x5533e7:c.instructions+=1;goto B5533e7;
case 0x5533ec:goto L5533ec;
case 0x5533ef:c.instructions+=3;goto B5533ef;
case 0x5533f1:c.instructions+=2;goto B5533f1;
case 0x5533f7:c.instructions+=1;goto B5533f7;
case 0x5533fc:goto L5533fc;
case 0x5533fe:c.instructions+=1;goto B5533fe;
case 0x553403:goto L553403;
case 0x553406:c.instructions+=2;goto B553406;
case 0x553408:c.instructions+=1;goto B553408;
case 0x55340a:goto L55340a;
case 0x55340d:c.instructions+=1;goto B55340d;
case 0x55340f:goto L55340f;
case 0x553411:goto L553411;
case 0x553414:c.instructions+=1;goto B553414;
case 0x553416:goto L553416;
case 0x55341c:c.instructions+=2;goto B55341c;
case 0x55341d:c.instructions+=1;goto B55341d;
case 0x553422:goto L553422;
case 0x553425:c.instructions+=1;goto B553425;
case 0x553427:goto L553427;
case 0x55342a:c.instructions+=2;goto B55342a;
case 0x55342c:c.instructions+=1;goto B55342c;
case 0x55342e:goto L55342e;
case 0x553431:goto L553431;
case 0x553434:c.instructions+=1;goto B553434;
case 0x553436:goto L553436;
case 0x55343c:c.instructions+=2;goto B55343c;
case 0x55343d:c.instructions+=1;goto B55343d;
case 0x553442:goto L553442;
case 0x553445:c.instructions+=1;goto B553445;
case 0x553447:goto L553447;
case 0x55344d:c.instructions+=2;goto B55344d;
case 0x55344e:c.instructions+=1;goto B55344e;
case 0x553453:goto L553453;
case 0x553459:c.instructions+=2;goto B553459;
case 0x55345a:c.instructions+=1;goto B55345a;
case 0x55345f:goto L55345f;
case 0x553462:goto L553462;
case 0x553466:c.instructions+=8;goto B553466;
case 0x553467:c.instructions+=7;goto B553467;
case 0x553469:c.instructions+=6;goto B553469;
case 0x55346a:c.instructions+=5;goto B55346a;
case 0x55346b:c.instructions+=4;goto B55346b;
case 0x55346c:c.instructions+=3;goto B55346c;
case 0x553473:c.instructions+=2;goto B553473;
case 0x553476:c.instructions+=1;goto B553476;
case 0x553480:goto L553480;
case 0x553481:c.instructions+=2;goto B553481;
case 0x553483:c.instructions+=1;goto B553483;
case 0x553488:goto L553488;
case 0x55348d:c.instructions+=1;goto B55348d;
case 0x55348f:goto L55348f;
case 0x553490:c.instructions+=1;goto B553490;
case 0x553495:goto L553495;
case 0x553498:goto L553498;
case 0x55349a:c.instructions+=2;goto B55349a;
case 0x55349b:c.instructions+=1;goto B55349b;
case 0x5534a0:goto L5534a0;
case 0x5534a2:c.instructions+=12;goto B5534a2;
case 0x5534a7:c.instructions+=11;goto B5534a7;
case 0x5534ad:c.instructions+=10;goto B5534ad;
case 0x5534ae:c.instructions+=9;goto B5534ae;
case 0x5534b5:c.instructions+=8;goto B5534b5;
case 0x5534b6:c.instructions+=7;goto B5534b6;
case 0x5534b7:c.instructions+=6;goto B5534b7;
case 0x5534b9:c.instructions+=5;goto B5534b9;
case 0x5534bd:c.instructions+=4;goto B5534bd;
case 0x5534c3:c.instructions+=3;goto B5534c3;
case 0x5534c6:c.instructions+=2;goto B5534c6;
case 0x5534ce:c.instructions+=1;goto B5534ce;
case 0x5534d3:goto L5534d3;
case 0x5534d7:c.instructions+=5;goto B5534d7;
case 0x5534dd:c.instructions+=4;goto B5534dd;
case 0x5534de:c.instructions+=3;goto B5534de;
case 0x5534e5:c.instructions+=2;goto B5534e5;
case 0x5534e8:c.instructions+=1;goto B5534e8;
case 0x5534f0:goto L5534f0;
case 0x5534f2:c.instructions+=11;goto B5534f2;
case 0x5534f7:c.instructions+=10;goto B5534f7;
case 0x5534fd:c.instructions+=9;goto B5534fd;
case 0x5534fe:c.instructions+=8;goto B5534fe;
case 0x553505:c.instructions+=7;goto B553505;
case 0x553506:c.instructions+=6;goto B553506;
case 0x55350a:c.instructions+=5;goto B55350a;
case 0x55350b:c.instructions+=4;goto B55350b;
case 0x55350d:c.instructions+=3;goto B55350d;
case 0x55350e:c.instructions+=2;goto B55350e;
case 0x553512:c.instructions+=1;goto B553512;
case 0x553517:goto L553517;
case 0x553519:c.instructions+=16;goto B553519;
case 0x55351f:c.instructions+=15;goto B55351f;
case 0x553525:c.instructions+=14;goto B553525;
case 0x55352b:c.instructions+=13;goto B55352b;
case 0x553531:c.instructions+=12;goto B553531;
case 0x553537:c.instructions+=11;goto B553537;
case 0x55353e:c.instructions+=10;goto B55353e;
case 0x553544:c.instructions+=9;goto B553544;
case 0x55354a:c.instructions+=8;goto B55354a;
case 0x553550:c.instructions+=7;goto B553550;
case 0x553555:c.instructions+=6;goto B553555;
case 0x55355b:c.instructions+=5;goto B55355b;
case 0x55355d:c.instructions+=4;goto B55355d;
case 0x553561:c.instructions+=3;goto B553561;
case 0x553567:c.instructions+=2;goto B553567;
case 0x55356b:c.instructions+=1;goto B55356b;
case 0x553570:goto L553570;
case 0x553572:c.instructions+=1;goto B553572;
case 0x553577:goto L553577;
case 0x55357a:c.instructions+=4;goto B55357a;
case 0x55357c:c.instructions+=3;goto B55357c;
case 0x55357d:c.instructions+=2;goto B55357d;
case 0x55357f:c.instructions+=1;goto B55357f;
case 0x553584:goto L553584;
case 0x553588:c.instructions+=5;goto B553588;
case 0x55358a:c.instructions+=4;goto B55358a;
case 0x55358b:c.instructions+=3;goto B55358b;
case 0x553592:c.instructions+=2;goto B553592;
case 0x553595:c.instructions+=1;goto B553595;
case 0x5535a0:goto L5535a0;
case 0x5535a1:c.instructions+=2;goto B5535a1;
case 0x5535a3:c.instructions+=1;goto B5535a3;
case 0x5535a8:goto L5535a8;
case 0x5535ad:c.instructions+=1;goto B5535ad;
case 0x5535af:goto L5535af;
case 0x5535b0:c.instructions+=1;goto B5535b0;
case 0x5535b5:goto L5535b5;
case 0x5535b8:goto L5535b8;
case 0x5535ba:c.instructions+=2;goto B5535ba;
case 0x5535bb:c.instructions+=1;goto B5535bb;
case 0x5535c0:goto L5535c0;
case 0x5535c6:c.instructions+=1;goto B5535c6;
case 0x5535d0:goto L5535d0;
case 0x5535d1:c.instructions+=5;goto B5535d1;
case 0x5535d2:c.instructions+=4;goto B5535d2;
case 0x5535d3:c.instructions+=3;goto B5535d3;
case 0x5535d4:c.instructions+=2;goto B5535d4;
case 0x5535d6:c.instructions+=1;goto B5535d6;
case 0x5535db:goto L5535db;
case 0x5535de:c.instructions+=3;goto B5535de;
case 0x5535e1:c.instructions+=2;goto B5535e1;
case 0x5535e6:c.instructions+=1;goto B5535e6;
case 0x5535eb:goto L5535eb;
case 0x5535ed:c.instructions+=1;goto B5535ed;
case 0x5535ef:goto L5535ef;
case 0x5535f4:goto L5535f4;
case 0x5535f5:c.instructions+=2;goto B5535f5;
case 0x5535fa:c.instructions+=1;goto B5535fa;
case 0x5535ff:goto L5535ff;
case 0x553601:c.instructions+=1;goto B553601;
case 0x553603:goto L553603;
case 0x553605:c.instructions+=3;goto B553605;
case 0x55360a:c.instructions+=2;goto B55360a;
case 0x55360c:c.instructions+=1;goto B55360c;
case 0x553611:goto L553611;
case 0x553614:c.instructions+=1;goto B553614;
case 0x553616:goto L553616;
case 0x553617:c.instructions+=2;goto B553617;
case 0x55361a:c.instructions+=1;goto B55361a;
case 0x55361c:goto L55361c;
case 0x553621:c.instructions+=1;goto B553621;
case 0x553623:goto L553623;
case 0x553628:goto L553628;
case 0x55362b:c.instructions+=1;goto B55362b;
case 0x55362d:goto L55362d;
case 0x553630:c.instructions+=1;goto B553630;
case 0x553632:goto L553632;
case 0x553633:c.instructions+=2;goto B553633;
case 0x553638:c.instructions+=1;goto B553638;
case 0x55363d:goto L55363d;
case 0x55363f:c.instructions+=1;goto B55363f;
case 0x553641:goto L553641;
case 0x553643:c.instructions+=3;goto B553643;
case 0x553644:c.instructions+=2;goto B553644;
case 0x553649:c.instructions+=1;goto B553649;
case 0x55364e:goto L55364e;
case 0x553650:c.instructions+=1;goto B553650;
case 0x553652:goto L553652;
case 0x553654:goto L553654;
case 0x553658:c.instructions+=2;goto B553658;
case 0x55365a:c.instructions+=1;goto B55365a;
case 0x55365c:goto L55365c;
case 0x55365e:c.instructions+=1;goto B55365e;
case 0x553660:goto L553660;
case 0x553661:c.instructions+=2;goto B553661;
case 0x553666:c.instructions+=1;goto B553666;
case 0x55366b:goto L55366b;
case 0x55366d:c.instructions+=1;goto B55366d;
case 0x55366f:goto L55366f;
case 0x553670:c.instructions+=2;goto B553670;
case 0x553675:c.instructions+=1;goto B553675;
case 0x55367a:goto L55367a;
case 0x55367c:c.instructions+=1;goto B55367c;
case 0x55367e:goto L55367e;
case 0x553680:c.instructions+=3;goto B553680;
case 0x553685:c.instructions+=2;goto B553685;
case 0x553687:c.instructions+=1;goto B553687;
case 0x55368c:goto L55368c;
case 0x55368e:c.instructions+=1;goto B55368e;
case 0x553690:goto L553690;
case 0x553693:c.instructions+=6;goto B553693;
case 0x553696:c.instructions+=5;goto B553696;
case 0x553697:c.instructions+=4;goto B553697;
case 0x55369d:c.instructions+=3;goto B55369d;
case 0x5536a3:c.instructions+=2;goto B5536a3;
case 0x5536a4:c.instructions+=1;goto B5536a4;
case 0x5536a9:goto L5536a9;
case 0x5536ab:goto L5536ab;
case 0x5536ae:c.instructions+=5;goto B5536ae;
case 0x5536b1:c.instructions+=4;goto B5536b1;
case 0x5536b2:c.instructions+=3;goto B5536b2;
case 0x5536b3:c.instructions+=2;goto B5536b3;
case 0x5536b9:c.instructions+=1;goto B5536b9;
case 0x5536be:goto L5536be;
case 0x5536c0:goto L5536c0;
case 0x5536c3:c.instructions+=5;goto B5536c3;
case 0x5536c6:c.instructions+=4;goto B5536c6;
case 0x5536cc:c.instructions+=3;goto B5536cc;
case 0x5536cd:c.instructions+=2;goto B5536cd;
case 0x5536ce:c.instructions+=1;goto B5536ce;
case 0x5536d3:goto L5536d3;
case 0x5536d7:c.instructions+=2;goto B5536d7;
case 0x5536d9:c.instructions+=1;goto B5536d9;
case 0x5536db:goto L5536db;
case 0x5536dd:c.instructions+=3;goto B5536dd;
case 0x5536de:c.instructions+=2;goto B5536de;
case 0x5536e3:c.instructions+=1;goto B5536e3;
case 0x5536e8:goto L5536e8;
case 0x5536ea:c.instructions+=1;goto B5536ea;
case 0x5536ec:goto L5536ec;
case 0x5536ef:c.instructions+=1;goto B5536ef;
case 0x5536f1:goto L5536f1;
case 0x5536f4:c.instructions+=1;goto B5536f4;
case 0x5536f6:goto L5536f6;
case 0x5536f7:c.instructions+=2;goto B5536f7;
case 0x5536fc:c.instructions+=1;goto B5536fc;
case 0x553701:goto L553701;
case 0x553703:c.instructions+=1;goto B553703;
case 0x553705:goto L553705;
case 0x553708:c.instructions+=3;goto B553708;
case 0x55370d:c.instructions+=2;goto B55370d;
case 0x55370e:c.instructions+=1;goto B55370e;
case 0x553713:goto L553713;
case 0x553716:c.instructions+=3;goto B553716;
case 0x55371b:c.instructions+=2;goto B55371b;
case 0x55371c:c.instructions+=1;goto B55371c;
case 0x553721:goto L553721;
case 0x553724:c.instructions+=3;goto B553724;
case 0x553729:c.instructions+=2;goto B553729;
case 0x55372a:c.instructions+=1;goto B55372a;
case 0x55372f:goto L55372f;
case 0x553732:c.instructions+=5;goto B553732;
case 0x553733:c.instructions+=4;goto B553733;
case 0x553734:c.instructions+=3;goto B553734;
case 0x553735:c.instructions+=2;goto B553735;
case 0x553736:c.instructions+=1;goto B553736;
case 0x553737:goto L553737;
case 0x55373a:c.instructions+=3;goto B55373a;
case 0x55373f:c.instructions+=2;goto B55373f;
case 0x553740:c.instructions+=1;goto B553740;
case 0x553745:goto L553745;
case 0x553748:c.instructions+=3;goto B553748;
case 0x55374d:c.instructions+=2;goto B55374d;
case 0x55374e:c.instructions+=1;goto B55374e;
case 0x553753:goto L553753;
case 0x553756:c.instructions+=3;goto B553756;
case 0x55375b:c.instructions+=2;goto B55375b;
case 0x55375c:c.instructions+=1;goto B55375c;
case 0x553761:goto L553761;
case 0x553764:c.instructions+=5;goto B553764;
case 0x553765:c.instructions+=4;goto B553765;
case 0x553766:c.instructions+=3;goto B553766;
case 0x553767:c.instructions+=2;goto B553767;
case 0x553768:c.instructions+=1;goto B553768;
case 0x553770:goto L553770;
case 0x553772:c.instructions+=13;goto B553772;
case 0x553777:c.instructions+=12;goto B553777;
case 0x55377d:c.instructions+=11;goto B55377d;
case 0x55377e:c.instructions+=10;goto B55377e;
case 0x553785:c.instructions+=9;goto B553785;
case 0x553786:c.instructions+=8;goto B553786;
case 0x553787:c.instructions+=7;goto B553787;
case 0x553788:c.instructions+=6;goto B553788;
case 0x553789:c.instructions+=5;goto B553789;
case 0x55378d:c.instructions+=4;goto B55378d;
case 0x55378f:c.instructions+=3;goto B55378f;
case 0x553790:c.instructions+=2;goto B553790;
case 0x553794:c.instructions+=1;goto B553794;
case 0x553799:goto L553799;
case 0x55379e:c.instructions+=13;goto B55379e;
case 0x5537a3:c.instructions+=12;goto B5537a3;
case 0x5537a5:c.instructions+=11;goto B5537a5;
case 0x5537a7:c.instructions+=10;goto B5537a7;
case 0x5537a9:c.instructions+=9;goto B5537a9;
case 0x5537ac:c.instructions+=8;goto B5537ac;
case 0x5537ad:c.instructions+=7;goto B5537ad;
case 0x5537b1:c.instructions+=6;goto B5537b1;
case 0x5537b7:c.instructions+=5;goto B5537b7;
case 0x5537ba:c.instructions+=4;goto B5537ba;
case 0x5537bd:c.instructions+=3;goto B5537bd;
case 0x5537c4:c.instructions+=2;goto B5537c4;
case 0x5537cb:c.instructions+=1;goto B5537cb;
case 0x5537d0:goto L5537d0;
case 0x5537da:c.instructions+=12;goto B5537da;
case 0x5537e4:c.instructions+=11;goto B5537e4;
case 0x5537ea:c.instructions+=10;goto B5537ea;
case 0x5537f0:c.instructions+=9;goto B5537f0;
case 0x5537f6:c.instructions+=8;goto B5537f6;
case 0x5537f9:c.instructions+=7;goto B5537f9;
case 0x5537ff:c.instructions+=6;goto B5537ff;
case 0x553805:c.instructions+=5;goto B553805;
case 0x553808:c.instructions+=4;goto B553808;
case 0x55380d:c.instructions+=3;goto B55380d;
case 0x55380e:c.instructions+=2;goto B55380e;
case 0x553813:c.instructions+=1;goto B553813;
case 0x553818:goto L553818;
case 0x55381b:c.instructions+=4;goto B55381b;
case 0x55381e:c.instructions+=3;goto B55381e;
case 0x553820:c.instructions+=2;goto B553820;
case 0x553823:c.instructions+=1;goto B553823;
case 0x553825:goto L553825;
case 0x553826:c.instructions+=1;goto B553826;
case 0x55382b:goto L55382b;
case 0x55382e:c.instructions+=2;goto B55382e;
case 0x553830:c.instructions+=1;goto B553830;
case 0x553832:goto L553832;
case 0x553837:c.instructions+=2;goto B553837;
case 0x553839:c.instructions+=1;goto B553839;
case 0x55383e:goto L55383e;
case 0x553840:c.instructions+=1;goto B553840;
case 0x553842:goto L553842;
case 0x553847:c.instructions+=2;goto B553847;
case 0x553849:c.instructions+=1;goto B553849;
case 0x55384b:goto L55384b;
case 0x55384e:c.instructions+=3;goto B55384e;
case 0x55384f:c.instructions+=2;goto B55384f;
case 0x553854:c.instructions+=1;goto B553854;
case 0x553859:goto L553859;
case 0x55385b:c.instructions+=1;goto B55385b;
case 0x55385d:goto L55385d;
case 0x553861:c.instructions+=1;goto B553861;
case 0x553863:goto L553863;
case 0x553865:goto L553865;
case 0x553868:c.instructions+=3;goto B553868;
case 0x55386a:c.instructions+=2;goto B55386a;
case 0x553870:c.instructions+=1;goto B553870;
case 0x553872:goto L553872;
case 0x553873:c.instructions+=1;goto B553873;
case 0x553878:goto L553878;
case 0x55387b:c.instructions+=2;goto B55387b;
case 0x55387d:c.instructions+=1;goto B55387d;
case 0x55387f:goto L55387f;
case 0x553884:c.instructions+=2;goto B553884;
case 0x553886:c.instructions+=1;goto B553886;
case 0x55388b:goto L55388b;
case 0x55388d:c.instructions+=1;goto B55388d;
case 0x55388f:goto L55388f;
case 0x553894:c.instructions+=2;goto B553894;
case 0x553896:c.instructions+=1;goto B553896;
case 0x553898:goto L553898;
case 0x55389b:c.instructions+=3;goto B55389b;
case 0x55389c:c.instructions+=2;goto B55389c;
case 0x5538a1:c.instructions+=1;goto B5538a1;
case 0x5538a6:goto L5538a6;
case 0x5538a8:c.instructions+=1;goto B5538a8;
case 0x5538aa:goto L5538aa;
case 0x5538ae:c.instructions+=1;goto B5538ae;
case 0x5538b0:goto L5538b0;
case 0x5538b2:goto L5538b2;
case 0x5538b4:c.instructions+=2;goto B5538b4;
case 0x5538ba:c.instructions+=1;goto B5538ba;
case 0x5538bf:goto L5538bf;
case 0x5538c2:c.instructions+=5;goto B5538c2;
case 0x5538c4:c.instructions+=4;goto B5538c4;
case 0x5538c9:c.instructions+=3;goto B5538c9;
case 0x5538ce:c.instructions+=2;goto B5538ce;
case 0x5538cf:c.instructions+=1;goto B5538cf;
case 0x5538d4:goto L5538d4;
case 0x5538d7:c.instructions+=3;goto B5538d7;
case 0x5538dc:c.instructions+=2;goto B5538dc;
case 0x5538dd:c.instructions+=1;goto B5538dd;
case 0x5538e2:goto L5538e2;
case 0x5538e5:c.instructions+=3;goto B5538e5;
case 0x5538e8:c.instructions+=2;goto B5538e8;
case 0x5538ed:c.instructions+=1;goto B5538ed;
case 0x5538f0:goto L5538f0;
case 0x5538f6:c.instructions+=3;goto B5538f6;
case 0x5538f9:c.instructions+=2;goto B5538f9;
case 0x5538fa:c.instructions+=1;goto B5538fa;
case 0x5538fc:goto L5538fc;
case 0x5538ff:c.instructions+=10;goto B5538ff;
case 0x553900:c.instructions+=9;goto B553900;
case 0x553905:c.instructions+=8;goto B553905;
case 0x553907:c.instructions+=7;goto B553907;
case 0x553908:c.instructions+=6;goto B553908;
case 0x553909:c.instructions+=5;goto B553909;
case 0x55390b:c.instructions+=4;goto B55390b;
case 0x553910:c.instructions+=3;goto B553910;
case 0x553913:c.instructions+=2;goto B553913;
case 0x553916:c.instructions+=1;goto B553916;
case 0x55391b:goto L55391b;
case 0x55391f:c.instructions+=9;goto B55391f;
case 0x553922:c.instructions+=8;goto B553922;
case 0x553925:c.instructions+=7;goto B553925;
case 0x553926:c.instructions+=6;goto B553926;
case 0x553928:c.instructions+=5;goto B553928;
case 0x553929:c.instructions+=4;goto B553929;
case 0x55392a:c.instructions+=3;goto B55392a;
case 0x553931:c.instructions+=2;goto B553931;
case 0x553934:c.instructions+=1;goto B553934;
case 0x553940:goto L553940;
case 0x553941:c.instructions+=15;goto B553941;
case 0x553943:c.instructions+=14;goto B553943;
case 0x553945:c.instructions+=13;goto B553945;
case 0x55394a:c.instructions+=12;goto B55394a;
case 0x553950:c.instructions+=11;goto B553950;
case 0x553951:c.instructions+=10;goto B553951;
case 0x553958:c.instructions+=9;goto B553958;
case 0x553959:c.instructions+=8;goto B553959;
case 0x55395c:c.instructions+=7;goto B55395c;
case 0x55395d:c.instructions+=6;goto B55395d;
case 0x55395e:c.instructions+=5;goto B55395e;
case 0x55395f:c.instructions+=4;goto B55395f;
case 0x553961:c.instructions+=3;goto B553961;
case 0x553962:c.instructions+=2;goto B553962;
case 0x553965:c.instructions+=1;goto B553965;
case 0x55396a:goto L55396a;
case 0x55396c:c.instructions+=4;goto B55396c;
case 0x55396f:c.instructions+=3;goto B55396f;
case 0x553972:c.instructions+=2;goto B553972;
case 0x553978:c.instructions+=1;goto B553978;
case 0x55397d:goto L55397d;
case 0x553982:c.instructions+=3;goto B553982;
case 0x553984:c.instructions+=2;goto B553984;
case 0x553988:c.instructions+=1;goto B553988;
case 0x55398a:goto L55398a;
case 0x55398d:c.instructions+=1;goto B55398d;
case 0x55398f:goto L55398f;
case 0x553995:c.instructions+=1;goto B553995;
case 0x553997:goto L553997;
case 0x553999:c.instructions+=4;goto B553999;
case 0x55399a:c.instructions+=3;goto B55399a;
case 0x55399c:c.instructions+=2;goto B55399c;
case 0x55399f:c.instructions+=1;goto B55399f;
case 0x5539a4:goto L5539a4;
case 0x5539a7:c.instructions+=3;goto B5539a7;
case 0x5539ac:c.instructions+=2;goto B5539ac;
case 0x5539ad:c.instructions+=1;goto B5539ad;
case 0x5539b2:goto L5539b2;
case 0x5539b5:goto L5539b5;
case 0x5539ba:c.instructions+=2;goto B5539ba;
case 0x5539bc:c.instructions+=1;goto B5539bc;
case 0x5539be:goto L5539be;
case 0x5539c3:c.instructions+=1;goto B5539c3;
case 0x5539c5:goto L5539c5;
case 0x5539c8:c.instructions+=1;goto B5539c8;
case 0x5539ca:goto L5539ca;
case 0x5539cf:c.instructions+=1;goto B5539cf;
case 0x5539d1:goto L5539d1;
case 0x5539d4:c.instructions+=1;goto B5539d4;
case 0x5539d6:goto L5539d6;
case 0x5539db:c.instructions+=1;goto B5539db;
case 0x5539dd:goto L5539dd;
case 0x5539df:c.instructions+=5;goto B5539df;
case 0x5539e2:c.instructions+=4;goto B5539e2;
case 0x5539e5:c.instructions+=3;goto B5539e5;
case 0x5539e6:c.instructions+=2;goto B5539e6;
case 0x5539e9:c.instructions+=1;goto B5539e9;
case 0x5539eb:goto L5539eb;
case 0x5539ee:c.instructions+=2;goto B5539ee;
case 0x5539ef:c.instructions+=1;goto B5539ef;
case 0x5539f4:goto L5539f4;
case 0x5539f7:c.instructions+=2;goto B5539f7;
case 0x5539f9:c.instructions+=1;goto B5539f9;
case 0x5539fb:goto L5539fb;
case 0x5539fe:c.instructions+=3;goto B5539fe;
case 0x553a01:c.instructions+=2;goto B553a01;
case 0x553a04:c.instructions+=1;goto B553a04;
case 0x553a07:goto L553a07;
case 0x553a0a:c.instructions+=8;goto B553a0a;
case 0x553a0d:c.instructions+=7;goto B553a0d;
case 0x553a13:c.instructions+=6;goto B553a13;
case 0x553a16:c.instructions+=5;goto B553a16;
case 0x553a1c:c.instructions+=4;goto B553a1c;
case 0x553a1d:c.instructions+=3;goto B553a1d;
case 0x553a22:c.instructions+=2;goto B553a22;
case 0x553a27:c.instructions+=1;goto B553a27;
case 0x553a2c:goto L553a2c;
case 0x553a2f:c.instructions+=1;goto B553a2f;
case 0x553a34:goto L553a34;
case 0x553a37:c.instructions+=1;goto B553a37;
case 0x553a39:goto L553a39;
case 0x553a3f:c.instructions+=1;goto B553a3f;
case 0x553a41:goto L553a41;
case 0x553a46:goto L553a46;
case 0x553a49:c.instructions+=1;goto B553a49;
case 0x553a4b:goto L553a4b;
case 0x553a51:c.instructions+=1;goto B553a51;
case 0x553a53:goto L553a53;
case 0x553a58:goto L553a58;
case 0x553a5b:c.instructions+=1;goto B553a5b;
case 0x553a5d:goto L553a5d;
case 0x553a62:goto L553a62;
case 0x553a65:c.instructions+=1;goto B553a65;
case 0x553a67:goto L553a67;
case 0x553a6c:c.instructions+=3;goto B553a6c;
case 0x553a6d:c.instructions+=2;goto B553a6d;
case 0x553a70:c.instructions+=1;goto B553a70;
case 0x553a75:goto L553a75;
case 0x553a78:c.instructions+=8;goto B553a78;
case 0x553a79:c.instructions+=7;goto B553a79;
case 0x553a7b:c.instructions+=6;goto B553a7b;
case 0x553a7c:c.instructions+=5;goto B553a7c;
case 0x553a7d:c.instructions+=4;goto B553a7d;
case 0x553a84:c.instructions+=3;goto B553a84;
case 0x553a86:c.instructions+=2;goto B553a86;
case 0x553a87:c.instructions+=1;goto B553a87;
case 0x553a90:goto L553a90;
case 0x553a91:c.instructions+=2;goto B553a91;
case 0x553a93:c.instructions+=1;goto B553a93;
case 0x553a98:goto L553a98;
case 0x553a9d:c.instructions+=1;goto B553a9d;
case 0x553a9f:goto L553a9f;
case 0x553aa0:c.instructions+=1;goto B553aa0;
case 0x553aa5:goto L553aa5;
case 0x553aa8:goto L553aa8;
case 0x553aaa:c.instructions+=2;goto B553aaa;
case 0x553aab:c.instructions+=1;goto B553aab;
case 0x553ab0:goto L553ab0;
case 0x553ab2:c.instructions+=12;goto B553ab2;
case 0x553ab7:c.instructions+=11;goto B553ab7;
case 0x553abd:c.instructions+=10;goto B553abd;
case 0x553abe:c.instructions+=9;goto B553abe;
case 0x553ac5:c.instructions+=8;goto B553ac5;
case 0x553ac6:c.instructions+=7;goto B553ac6;
case 0x553ac7:c.instructions+=6;goto B553ac7;
case 0x553ac9:c.instructions+=5;goto B553ac9;
case 0x553acd:c.instructions+=4;goto B553acd;
case 0x553ad3:c.instructions+=3;goto B553ad3;
case 0x553ad6:c.instructions+=2;goto B553ad6;
case 0x553ade:c.instructions+=1;goto B553ade;
case 0x553ae3:goto L553ae3;
case 0x553ae7:c.instructions+=5;goto B553ae7;
case 0x553aed:c.instructions+=4;goto B553aed;
case 0x553aee:c.instructions+=3;goto B553aee;
case 0x553af5:c.instructions+=2;goto B553af5;
case 0x553af8:c.instructions+=1;goto B553af8;
case 0x553b00:goto L553b00;
case 0x553b02:c.instructions+=8;goto B553b02;
case 0x553b07:c.instructions+=7;goto B553b07;
case 0x553b0d:c.instructions+=6;goto B553b0d;
case 0x553b0e:c.instructions+=5;goto B553b0e;
case 0x553b15:c.instructions+=4;goto B553b15;
case 0x553b16:c.instructions+=3;goto B553b16;
case 0x553b17:c.instructions+=2;goto B553b17;
case 0x553b19:c.instructions+=1;goto B553b19;
case 0x553b1e:goto L553b1e;
case 0x553b20:c.instructions+=6;goto B553b20;
case 0x553b23:c.instructions+=5;goto B553b23;
case 0x553b27:c.instructions+=4;goto B553b27;
case 0x553b29:c.instructions+=3;goto B553b29;
case 0x553b2b:c.instructions+=2;goto B553b2b;
case 0x553b2f:c.instructions+=1;goto B553b2f;
case 0x553b31:goto L553b31;
case 0x553b35:c.instructions+=3;goto B553b35;
case 0x553b36:c.instructions+=2;goto B553b36;
case 0x553b38:c.instructions+=1;goto B553b38;
case 0x553b3d:goto L553b3d;
case 0x553b43:c.instructions+=1;goto B553b43;
case 0x553b45:goto L553b45;
case 0x553b49:c.instructions+=4;goto B553b49;
case 0x553b4a:c.instructions+=3;goto B553b4a;
case 0x553b51:c.instructions+=2;goto B553b51;
case 0x553b54:c.instructions+=1;goto B553b54;
case 0x553b60:goto L553b60;
case 0x553b62:c.instructions+=11;goto B553b62;
case 0x553b67:c.instructions+=10;goto B553b67;
case 0x553b6d:c.instructions+=9;goto B553b6d;
case 0x553b6e:c.instructions+=8;goto B553b6e;
case 0x553b75:c.instructions+=7;goto B553b75;
case 0x553b76:c.instructions+=6;goto B553b76;
case 0x553b7a:c.instructions+=5;goto B553b7a;
case 0x553b7b:c.instructions+=4;goto B553b7b;
case 0x553b7d:c.instructions+=3;goto B553b7d;
case 0x553b7e:c.instructions+=2;goto B553b7e;
case 0x553b82:c.instructions+=1;goto B553b82;
case 0x553b87:goto L553b87;
case 0x553b8a:c.instructions+=5;goto B553b8a;
case 0x553b8f:c.instructions+=4;goto B553b8f;
case 0x553b90:c.instructions+=3;goto B553b90;
case 0x553b98:c.instructions+=2;goto B553b98;
case 0x553b9e:c.instructions+=1;goto B553b9e;
case 0x553ba3:goto L553ba3;
case 0x553ba7:c.instructions+=6;goto B553ba7;
case 0x553baa:c.instructions+=5;goto B553baa;
case 0x553bac:c.instructions+=4;goto B553bac;
case 0x553bad:c.instructions+=3;goto B553bad;
case 0x553bb4:c.instructions+=2;goto B553bb4;
case 0x553bb7:c.instructions+=1;goto B553bb7;
case 0x553bc0:goto L553bc0;
case 0x553bc1:c.instructions+=2;goto B553bc1;
case 0x553bc3:c.instructions+=1;goto B553bc3;
case 0x553bc8:goto L553bc8;
case 0x553bcd:c.instructions+=1;goto B553bcd;
case 0x553bcf:goto L553bcf;
case 0x553bd0:c.instructions+=1;goto B553bd0;
case 0x553bd5:goto L553bd5;
case 0x553bd8:goto L553bd8;
case 0x553bda:c.instructions+=2;goto B553bda;
case 0x553bdb:c.instructions+=1;goto B553bdb;
case 0x553be0:goto L553be0;
case 0x553be2:c.instructions+=13;goto B553be2;
case 0x553be7:c.instructions+=12;goto B553be7;
case 0x553bed:c.instructions+=11;goto B553bed;
case 0x553bee:c.instructions+=10;goto B553bee;
case 0x553bf5:c.instructions+=9;goto B553bf5;
case 0x553bf6:c.instructions+=8;goto B553bf6;
case 0x553bf7:c.instructions+=7;goto B553bf7;
case 0x553bf8:c.instructions+=6;goto B553bf8;
case 0x553bf9:c.instructions+=5;goto B553bf9;
case 0x553bfd:c.instructions+=4;goto B553bfd;
case 0x553bff:c.instructions+=3;goto B553bff;
case 0x553c00:c.instructions+=2;goto B553c00;
case 0x553c04:c.instructions+=1;goto B553c04;
case 0x553c09:goto L553c09;
case 0x553c0f:c.instructions+=6;goto B553c0f;
case 0x553c12:c.instructions+=5;goto B553c12;
case 0x553c14:c.instructions+=4;goto B553c14;
case 0x553c19:c.instructions+=3;goto B553c19;
case 0x553c1d:c.instructions+=2;goto B553c1d;
case 0x553c23:c.instructions+=1;goto B553c23;
case 0x553c28:goto L553c28;
case 0x553c2f:c.instructions+=7;goto B553c2f;
case 0x553c32:c.instructions+=6;goto B553c32;
case 0x553c35:c.instructions+=5;goto B553c35;
case 0x553c3b:c.instructions+=4;goto B553c3b;
case 0x553c3c:c.instructions+=3;goto B553c3c;
case 0x553c3e:c.instructions+=2;goto B553c3e;
case 0x553c41:c.instructions+=1;goto B553c41;
case 0x553c46:goto L553c46;
case 0x553c49:c.instructions+=3;goto B553c49;
case 0x553c4e:c.instructions+=2;goto B553c4e;
case 0x553c4f:c.instructions+=1;goto B553c4f;
case 0x553c54:goto L553c54;
case 0x553c58:c.instructions+=8;goto B553c58;
case 0x553c5b:c.instructions+=7;goto B553c5b;
case 0x553c5c:c.instructions+=6;goto B553c5c;
case 0x553c5e:c.instructions+=5;goto B553c5e;
case 0x553c5f:c.instructions+=4;goto B553c5f;
case 0x553c60:c.instructions+=3;goto B553c60;
case 0x553c67:c.instructions+=2;goto B553c67;
case 0x553c6a:c.instructions+=1;goto B553c6a;
case 0x553c70:goto L553c70;
case 0x553c72:c.instructions+=14;goto B553c72;
case 0x553c77:c.instructions+=13;goto B553c77;
case 0x553c7d:c.instructions+=12;goto B553c7d;
case 0x553c7e:c.instructions+=11;goto B553c7e;
case 0x553c85:c.instructions+=10;goto B553c85;
case 0x553c88:c.instructions+=9;goto B553c88;
case 0x553c8c:c.instructions+=8;goto B553c8c;
case 0x553c8d:c.instructions+=7;goto B553c8d;
case 0x553c8e:c.instructions+=6;goto B553c8e;
case 0x553c8f:c.instructions+=5;goto B553c8f;
case 0x553c90:c.instructions+=4;goto B553c90;
case 0x553c92:c.instructions+=3;goto B553c92;
case 0x553c93:c.instructions+=2;goto B553c93;
case 0x553c97:c.instructions+=1;goto B553c97;
case 0x553c9c:goto L553c9c;
case 0x553c9f:c.instructions+=13;goto B553c9f;
case 0x553ca4:c.instructions+=12;goto B553ca4;
case 0x553ca5:c.instructions+=11;goto B553ca5;
case 0x553ca7:c.instructions+=10;goto B553ca7;
case 0x553ca8:c.instructions+=9;goto B553ca8;
case 0x553ca9:c.instructions+=8;goto B553ca9;
case 0x553caa:c.instructions+=7;goto B553caa;
case 0x553caf:c.instructions+=6;goto B553caf;
case 0x553cb4:c.instructions+=5;goto B553cb4;
case 0x553cb5:c.instructions+=4;goto B553cb5;
case 0x553cb8:c.instructions+=3;goto B553cb8;
case 0x553cbc:c.instructions+=2;goto B553cbc;
case 0x553cc2:c.instructions+=1;goto B553cc2;
case 0x553cc7:goto L553cc7;
case 0x553cca:c.instructions+=5;goto B553cca;
case 0x553ccc:c.instructions+=4;goto B553ccc;
case 0x553cd1:c.instructions+=3;goto B553cd1;
case 0x553cd8:c.instructions+=2;goto B553cd8;
case 0x553ce2:c.instructions+=1;goto B553ce2;
case 0x553ce4:goto L553ce4;
case 0x553ce5:c.instructions+=1;goto B553ce5;
case 0x553cea:goto L553cea;
case 0x553ced:c.instructions+=2;goto B553ced;
case 0x553cef:c.instructions+=1;goto B553cef;
case 0x553cf1:goto L553cf1;
case 0x553cf6:c.instructions+=2;goto B553cf6;
case 0x553cf8:c.instructions+=1;goto B553cf8;
case 0x553cfd:goto L553cfd;
case 0x553cff:c.instructions+=1;goto B553cff;
case 0x553d01:goto L553d01;
case 0x553d06:c.instructions+=2;goto B553d06;
case 0x553d08:c.instructions+=1;goto B553d08;
case 0x553d0a:goto L553d0a;
case 0x553d0d:c.instructions+=3;goto B553d0d;
case 0x553d0e:c.instructions+=2;goto B553d0e;
case 0x553d13:c.instructions+=1;goto B553d13;
case 0x553d18:goto L553d18;
case 0x553d1a:c.instructions+=1;goto B553d1a;
case 0x553d1c:goto L553d1c;
case 0x553d20:c.instructions+=1;goto B553d20;
case 0x553d22:goto L553d22;
case 0x553d24:goto L553d24;
case 0x553d27:c.instructions+=3;goto B553d27;
case 0x553d29:c.instructions+=2;goto B553d29;
case 0x553d2f:c.instructions+=1;goto B553d2f;
case 0x553d31:goto L553d31;
case 0x553d32:c.instructions+=1;goto B553d32;
case 0x553d37:goto L553d37;
case 0x553d3a:c.instructions+=2;goto B553d3a;
case 0x553d3c:c.instructions+=1;goto B553d3c;
case 0x553d3e:goto L553d3e;
case 0x553d43:c.instructions+=2;goto B553d43;
case 0x553d45:c.instructions+=1;goto B553d45;
case 0x553d4a:goto L553d4a;
case 0x553d4c:c.instructions+=1;goto B553d4c;
case 0x553d4e:goto L553d4e;
case 0x553d53:c.instructions+=2;goto B553d53;
case 0x553d55:c.instructions+=1;goto B553d55;
case 0x553d57:goto L553d57;
case 0x553d5a:c.instructions+=3;goto B553d5a;
case 0x553d5b:c.instructions+=2;goto B553d5b;
case 0x553d60:c.instructions+=1;goto B553d60;
case 0x553d65:goto L553d65;
case 0x553d67:c.instructions+=1;goto B553d67;
case 0x553d69:goto L553d69;
case 0x553d6c:c.instructions+=1;goto B553d6c;
case 0x553d6e:goto L553d6e;
case 0x553d70:goto L553d70;
case 0x553d73:c.instructions+=3;goto B553d73;
case 0x553d75:c.instructions+=2;goto B553d75;
case 0x553d7b:c.instructions+=1;goto B553d7b;
case 0x553d7d:goto L553d7d;
case 0x553d7e:c.instructions+=1;goto B553d7e;
case 0x553d83:goto L553d83;
case 0x553d86:c.instructions+=2;goto B553d86;
case 0x553d88:c.instructions+=1;goto B553d88;
case 0x553d8a:goto L553d8a;
case 0x553d8f:c.instructions+=2;goto B553d8f;
case 0x553d91:c.instructions+=1;goto B553d91;
case 0x553d96:goto L553d96;
case 0x553d98:c.instructions+=1;goto B553d98;
case 0x553d9a:goto L553d9a;
case 0x553d9f:c.instructions+=2;goto B553d9f;
case 0x553da1:c.instructions+=1;goto B553da1;
case 0x553da3:goto L553da3;
case 0x553da6:c.instructions+=3;goto B553da6;
case 0x553da7:c.instructions+=2;goto B553da7;
case 0x553dac:c.instructions+=1;goto B553dac;
case 0x553db1:goto L553db1;
case 0x553db3:c.instructions+=1;goto B553db3;
case 0x553db5:goto L553db5;
case 0x553db8:c.instructions+=1;goto B553db8;
case 0x553dba:goto L553dba;
case 0x553dbc:goto L553dbc;
case 0x553dbf:c.instructions+=3;goto B553dbf;
case 0x553dc1:c.instructions+=2;goto B553dc1;
case 0x553dc7:c.instructions+=1;goto B553dc7;
case 0x553dc9:goto L553dc9;
case 0x553dca:c.instructions+=1;goto B553dca;
case 0x553dcf:goto L553dcf;
case 0x553dd2:c.instructions+=2;goto B553dd2;
case 0x553dd4:c.instructions+=1;goto B553dd4;
case 0x553dd6:goto L553dd6;
case 0x553ddb:c.instructions+=2;goto B553ddb;
case 0x553ddd:c.instructions+=1;goto B553ddd;
case 0x553de2:goto L553de2;
case 0x553de4:c.instructions+=1;goto B553de4;
case 0x553de6:goto L553de6;
case 0x553deb:c.instructions+=2;goto B553deb;
case 0x553ded:c.instructions+=1;goto B553ded;
case 0x553def:goto L553def;
case 0x553df2:c.instructions+=3;goto B553df2;
case 0x553df3:c.instructions+=2;goto B553df3;
case 0x553df8:c.instructions+=1;goto B553df8;
case 0x553dfd:goto L553dfd;
case 0x553dff:c.instructions+=1;goto B553dff;
case 0x553e01:goto L553e01;
case 0x553e04:c.instructions+=1;goto B553e04;
case 0x553e06:goto L553e06;
case 0x553e08:goto L553e08;
case 0x553e0b:c.instructions+=3;goto B553e0b;
case 0x553e0d:c.instructions+=2;goto B553e0d;
case 0x553e13:c.instructions+=1;goto B553e13;
case 0x553e15:goto L553e15;
case 0x553e16:c.instructions+=1;goto B553e16;
case 0x553e1b:goto L553e1b;
case 0x553e1e:c.instructions+=2;goto B553e1e;
case 0x553e20:c.instructions+=1;goto B553e20;
case 0x553e22:goto L553e22;
case 0x553e27:c.instructions+=2;goto B553e27;
case 0x553e29:c.instructions+=1;goto B553e29;
case 0x553e2e:goto L553e2e;
case 0x553e30:c.instructions+=1;goto B553e30;
case 0x553e32:goto L553e32;
case 0x553e37:c.instructions+=2;goto B553e37;
case 0x553e39:c.instructions+=1;goto B553e39;
case 0x553e3b:goto L553e3b;
case 0x553e3e:c.instructions+=3;goto B553e3e;
case 0x553e3f:c.instructions+=2;goto B553e3f;
case 0x553e44:c.instructions+=1;goto B553e44;
case 0x553e49:goto L553e49;
case 0x553e4b:c.instructions+=1;goto B553e4b;
case 0x553e4d:goto L553e4d;
case 0x553e50:c.instructions+=1;goto B553e50;
case 0x553e52:goto L553e52;
case 0x553e54:goto L553e54;
case 0x553e5a:c.instructions+=2;goto B553e5a;
case 0x553e60:c.instructions+=1;goto B553e60;
case 0x553e66:goto L553e66;
case 0x553e6a:c.instructions+=8;goto B553e6a;
case 0x553e70:c.instructions+=7;goto B553e70;
case 0x553e75:c.instructions+=6;goto B553e75;
case 0x553e79:c.instructions+=5;goto B553e79;
case 0x553e80:c.instructions+=4;goto B553e80;
case 0x553e84:c.instructions+=3;goto B553e84;
case 0x553e87:c.instructions+=2;goto B553e87;
case 0x553e89:c.instructions+=1;goto B553e89;
case 0x553e8b:goto L553e8b;
case 0x553e8c:c.instructions+=1;goto B553e8c;
case 0x553e91:goto L553e91;
case 0x553e94:c.instructions+=2;goto B553e94;
case 0x553e96:c.instructions+=1;goto B553e96;
case 0x553e98:goto L553e98;
case 0x553ea0:c.instructions+=8;goto B553ea0;
case 0x553ea6:c.instructions+=7;goto B553ea6;
case 0x553eaa:c.instructions+=6;goto B553eaa;
case 0x553eae:c.instructions+=5;goto B553eae;
case 0x553eaf:c.instructions+=4;goto B553eaf;
case 0x553eb1:c.instructions+=3;goto B553eb1;
case 0x553eb6:c.instructions+=2;goto B553eb6;
case 0x553eba:c.instructions+=1;goto B553eba;
case 0x553ebf:goto L553ebf;
case 0x553ec3:c.instructions+=4;goto B553ec3;
case 0x553ec5:c.instructions+=3;goto B553ec5;
case 0x553eca:c.instructions+=2;goto B553eca;
case 0x553ed2:c.instructions+=1;goto B553ed2;
case 0x553ed4:goto L553ed4;
case 0x553ed6:c.instructions+=1;goto B553ed6;
case 0x553ed8:goto L553ed8;
case 0x553edd:c.instructions+=2;goto B553edd;
case 0x553edf:c.instructions+=1;goto B553edf;
case 0x553ee1:goto L553ee1;
case 0x553ee2:c.instructions+=4;goto B553ee2;
case 0x553ee8:c.instructions+=3;goto B553ee8;
case 0x553ee9:c.instructions+=2;goto B553ee9;
case 0x553eec:c.instructions+=1;goto B553eec;
case 0x553ef1:goto L553ef1;
case 0x553ef3:c.instructions+=1;goto B553ef3;
case 0x553ef5:goto L553ef5;
case 0x553ef7:goto L553ef7;
case 0x553ef9:c.instructions+=3;goto B553ef9;
case 0x553efd:c.instructions+=2;goto B553efd;
case 0x553eff:c.instructions+=1;goto B553eff;
case 0x553f01:goto L553f01;
case 0x553f06:c.instructions+=3;goto B553f06;
case 0x553f09:c.instructions+=2;goto B553f09;
case 0x553f0b:c.instructions+=1;goto B553f0b;
case 0x553f10:goto L553f10;
case 0x553f13:c.instructions+=2;goto B553f13;
case 0x553f15:c.instructions+=1;goto B553f15;
case 0x553f17:goto L553f17;
case 0x553f19:c.instructions+=1;goto B553f19;
case 0x553f1b:goto L553f1b;
case 0x553f1d:goto L553f1d;
case 0x553f20:c.instructions+=5;goto B553f20;
case 0x553f22:c.instructions+=4;goto B553f22;
case 0x553f25:c.instructions+=3;goto B553f25;
case 0x553f26:c.instructions+=2;goto B553f26;
case 0x553f28:c.instructions+=1;goto B553f28;
case 0x553f2a:goto L553f2a;
case 0x553f2d:c.instructions+=2;goto B553f2d;
case 0x553f2f:c.instructions+=1;goto B553f2f;
case 0x553f31:goto L553f31;
case 0x553f34:c.instructions+=1;goto B553f34;
case 0x553f36:goto L553f36;
case 0x553f39:c.instructions+=2;goto B553f39;
case 0x553f3b:c.instructions+=1;goto B553f3b;
case 0x553f3d:goto L553f3d;
case 0x553f3f:goto L553f3f;
case 0x553f41:c.instructions+=1;goto B553f41;
case 0x553f43:goto L553f43;
case 0x553f46:c.instructions+=1;goto B553f46;
case 0x553f48:goto L553f48;
case 0x553f4a:c.instructions+=2;goto B553f4a;
case 0x553f4d:c.instructions+=1;goto B553f4d;
case 0x553f52:goto L553f52;
case 0x553f55:c.instructions+=1;goto B553f55;
case 0x553f58:goto L553f58;
case 0x553f5b:goto L553f5b;
case 0x553f61:c.instructions+=2;goto B553f61;
case 0x553f64:c.instructions+=1;goto B553f64;
case 0x553f6a:goto L553f6a;
case 0x553f6e:c.instructions+=3;goto B553f6e;
case 0x553f71:c.instructions+=2;goto B553f71;
case 0x553f73:c.instructions+=1;goto B553f73;
case 0x553f75:goto L553f75;
case 0x553f76:c.instructions+=1;goto B553f76;
case 0x553f7b:goto L553f7b;
case 0x553f7e:c.instructions+=2;goto B553f7e;
case 0x553f80:c.instructions+=1;goto B553f80;
case 0x553f82:goto L553f82;
case 0x553f83:c.instructions+=2;goto B553f83;
case 0x553f85:c.instructions+=1;goto B553f85;
case 0x553f8a:goto L553f8a;
case 0x553f8c:c.instructions+=1;goto B553f8c;
case 0x553f8e:goto L553f8e;
case 0x553f93:c.instructions+=2;goto B553f93;
case 0x553f95:c.instructions+=1;goto B553f95;
case 0x553f97:goto L553f97;
case 0x553f9a:c.instructions+=3;goto B553f9a;
case 0x553f9b:c.instructions+=2;goto B553f9b;
case 0x553f9c:c.instructions+=1;goto B553f9c;
case 0x553fa1:goto L553fa1;
case 0x553fa3:c.instructions+=2;goto B553fa3;
case 0x553fa5:c.instructions+=1;goto B553fa5;
case 0x553fa7:goto L553fa7;
case 0x553fac:c.instructions+=2;goto B553fac;
case 0x553faf:c.instructions+=1;goto B553faf;
case 0x553fb1:goto L553fb1;
case 0x553fb4:c.instructions+=2;goto B553fb4;
case 0x553fb6:c.instructions+=1;goto B553fb6;
case 0x553fb8:goto L553fb8;
case 0x553fba:c.instructions+=1;goto B553fba;
case 0x553fbc:goto L553fbc;
case 0x553fbe:goto L553fbe;
case 0x553fc1:c.instructions+=5;goto B553fc1;
case 0x553fc3:c.instructions+=4;goto B553fc3;
case 0x553fc6:c.instructions+=3;goto B553fc6;
case 0x553fc7:c.instructions+=2;goto B553fc7;
case 0x553fc9:c.instructions+=1;goto B553fc9;
case 0x553fcb:goto L553fcb;
case 0x553fce:c.instructions+=2;goto B553fce;
case 0x553fd0:c.instructions+=1;goto B553fd0;
case 0x553fd2:goto L553fd2;
case 0x553fd5:c.instructions+=1;goto B553fd5;
case 0x553fd7:goto L553fd7;
case 0x553fda:c.instructions+=2;goto B553fda;
case 0x553fdc:c.instructions+=1;goto B553fdc;
case 0x553fde:goto L553fde;
case 0x553fe0:goto L553fe0;
case 0x553fe2:c.instructions+=1;goto B553fe2;
case 0x553fe4:goto L553fe4;
case 0x553fe7:c.instructions+=1;goto B553fe7;
case 0x553fe9:goto L553fe9;
case 0x553feb:c.instructions+=2;goto B553feb;
case 0x553fee:c.instructions+=1;goto B553fee;
case 0x553ff3:goto L553ff3;
case 0x553ff6:c.instructions+=1;goto B553ff6;
case 0x553ff9:goto L553ff9;
case 0x553ffc:goto L553ffc;
default:missing_instruction(c.pc);}
B553001:L553001:{c.instructions+=5;NFSU2_TR(0x553001);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553004:{NFSU2_TR(0x553004);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553007:{NFSU2_TR(0x553007);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553009:{NFSU2_TR(0x553009);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55300e:{NFSU2_TR(0x55300e);
if(r1(R+518)){{goto L553029;}}
}
B553010:L553010:{c.instructions+=6;NFSU2_TR(0x553010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B553012:{NFSU2_TR(0x553012);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553015:{NFSU2_TR(0x553015);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B553017:{NFSU2_TR(0x553017);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553018:{NFSU2_TR(0x553018);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55301b:{NFSU2_TR(0x55301b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553020ull));
TAIL_STATIC(0x575630u,575);
}
B553020:L553020:{c.instructions+=4;NFSU2_TR(0x553020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B553022:{NFSU2_TR(0x553022);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553025:{NFSU2_TR(0x553025);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553027:{NFSU2_TR(0x553027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553010u);}goto L553010;}}
}
B553029:L553029:{c.instructions+=5;NFSU2_TR(0x553029);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55302c:{NFSU2_TR(0x55302c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B55302f:{NFSU2_TR(0x55302f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553031:{NFSU2_TR(0x553031);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553036:{NFSU2_TR(0x553036);
if(r1(R+518)){{goto L553051;}}
}
B553038:L553038:{c.instructions+=6;NFSU2_TR(0x553038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55303a:{NFSU2_TR(0x55303a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55303d:{NFSU2_TR(0x55303d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B55303f:{NFSU2_TR(0x55303f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553040:{NFSU2_TR(0x553040);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553043:{NFSU2_TR(0x553043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553048ull));
TAIL_STATIC(0x575630u,575);
}
B553048:L553048:{c.instructions+=4;NFSU2_TR(0x553048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55304a:{NFSU2_TR(0x55304a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55304d:{NFSU2_TR(0x55304d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55304f:{NFSU2_TR(0x55304f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553038u);}goto L553038;}}
}
B553051:L553051:{c.instructions+=7;NFSU2_TR(0x553051);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553055:{NFSU2_TR(0x553055);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+28)),r4(U+0));
}
B55305b:{NFSU2_TR(0x55305b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55305c:{NFSU2_TR(0x55305c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55305d:{NFSU2_TR(0x55305d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553064:{NFSU2_TR(0x553064);
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
B553067:{NFSU2_TR(0x553067);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553070:L553070:{c.instructions+=12;NFSU2_TR(0x553070);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553072:{NFSU2_TR(0x553072);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553077:{NFSU2_TR(0x553077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55307d:{NFSU2_TR(0x55307d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55307e:{NFSU2_TR(0x55307e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553085:{NFSU2_TR(0x553085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553086:{NFSU2_TR(0x553086);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55308a:{NFSU2_TR(0x55308a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55308b:{NFSU2_TR(0x55308b);
__builtin_memmove((R+24),(R+4),4);
}
B55308d:{NFSU2_TR(0x55308d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55308e:{NFSU2_TR(0x55308e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553092:{NFSU2_TR(0x553092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553097ull));
TAIL_STATIC(0x552330u,552);
}
B553097:L553097:{c.instructions+=4;NFSU2_TR(0x553097);
__builtin_memmove((R+4),(R+24),4);
}
B553099:{NFSU2_TR(0x553099);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5530a1:{NFSU2_TR(0x5530a1);
u8 U[4];
w4(U+0,u32(0x79ca78ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5530a7:{NFSU2_TR(0x5530a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5530acull));
TAIL_STATIC(0x546520u,546);
}
B5530ac:L5530ac:{c.instructions+=6;NFSU2_TR(0x5530ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5530b0:{NFSU2_TR(0x5530b0);
__builtin_memmove((R+0),(R+24),4);
}
B5530b2:{NFSU2_TR(0x5530b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5530b3:{NFSU2_TR(0x5530b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5530ba:{NFSU2_TR(0x5530ba);
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
B5530bd:{NFSU2_TR(0x5530bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5530c0:L5530c0:{c.instructions+=3;NFSU2_TR(0x5530c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5530c1:{NFSU2_TR(0x5530c1);
__builtin_memmove((R+24),(R+4),4);
}
B5530c3:{NFSU2_TR(0x5530c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5530c8ull));
{goto L5530e0;}
}
B5530c8:L5530c8:{c.instructions+=2;NFSU2_TR(0x5530c8);
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
B5530cd:{NFSU2_TR(0x5530cd);
if(r1(R+518)){{goto L5530d8;}}
}
B5530cf:L5530cf:{c.instructions+=2;NFSU2_TR(0x5530cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5530d0:{NFSU2_TR(0x5530d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5530d5ull));
TAIL_STATIC(0x575630u,575);
}
B5530d5:L5530d5:{c.instructions+=1;NFSU2_TR(0x5530d5);
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
B5530d8:L5530d8:{c.instructions+=3;NFSU2_TR(0x5530d8);
__builtin_memmove((R+0),(R+24),4);
}
B5530da:{NFSU2_TR(0x5530da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5530db:{NFSU2_TR(0x5530db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5530e0:L5530e0:{c.instructions+=2;NFSU2_TR(0x5530e0);
u8 U[4];
w4(U+0,u32(0x79ca78ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5530e6:{NFSU2_TR(0x5530e6);
TAIL_STATIC(0x4defb0u,4de);
}
B5530f0:L5530f0:{c.instructions+=14;NFSU2_TR(0x5530f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5530f2:{NFSU2_TR(0x5530f2);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5530f7:{NFSU2_TR(0x5530f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5530fd:{NFSU2_TR(0x5530fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5530fe:{NFSU2_TR(0x5530fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553105:{NFSU2_TR(0x553105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553106:{NFSU2_TR(0x553106);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553107:{NFSU2_TR(0x553107);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553108:{NFSU2_TR(0x553108);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553109:{NFSU2_TR(0x553109);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55310d:{NFSU2_TR(0x55310d);
__builtin_memmove((R+24),(R+4),4);
}
B55310f:{NFSU2_TR(0x55310f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553110:{NFSU2_TR(0x553110);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553114:{NFSU2_TR(0x553114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553119ull));
TAIL_STATIC(0x552330u,552);
}
B553119:L553119:{c.instructions+=18;NFSU2_TR(0x553119);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55311b:{NFSU2_TR(0x55311b);
u8 U[4];
w4(U+0,u32(0x79ca94ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553121:{NFSU2_TR(0x553121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553127:{NFSU2_TR(0x553127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55312d:{NFSU2_TR(0x55312d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553137:{NFSU2_TR(0x553137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x799c30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553141:{NFSU2_TR(0x553141);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553147:{NFSU2_TR(0x553147);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55314d:{NFSU2_TR(0x55314d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553153:{NFSU2_TR(0x553153);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553159:{NFSU2_TR(0x553159);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55315f:{NFSU2_TR(0x55315f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553162:{NFSU2_TR(0x553162);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553168:{NFSU2_TR(0x553168);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55316c:{NFSU2_TR(0x55316c);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B553172:{NFSU2_TR(0x553172);
s1(0x7fa1fc,u8(0x1ull));
}
B553179:{NFSU2_TR(0x553179);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55317b:{NFSU2_TR(0x55317b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553181:L553181:{c.instructions+=6;NFSU2_TR(0x553181);
u8 U[13];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B553188:{NFSU2_TR(0x553188);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B55318a:{NFSU2_TR(0x55318a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55318b:{NFSU2_TR(0x55318b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B55318e:{NFSU2_TR(0x55318e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B553191:{NFSU2_TR(0x553191);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553181u);}goto L553181;}}
}
B553193:L553193:{c.instructions+=2;NFSU2_TR(0x553193);
__builtin_memmove((R+4),(R+24),4);
}
B553195:{NFSU2_TR(0x553195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55319aull));
TAIL_STATIC(0x5469f0u,546);
}
B55319a:L55319a:{c.instructions+=3;NFSU2_TR(0x55319a);
__builtin_memmove((R+4),gp(0x7fa1e0),4);
}
B5531a0:{NFSU2_TR(0x5531a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5531a1:{NFSU2_TR(0x5531a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5531a6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5531a6:L5531a6:{c.instructions+=3;NFSU2_TR(0x5531a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5531a9:{NFSU2_TR(0x5531a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5531ab:{NFSU2_TR(0x5531ab);
if(r1(R+518)){{goto L5531b9;}}
}
B5531ad:L5531ad:{c.instructions+=4;NFSU2_TR(0x5531ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5531b0:{NFSU2_TR(0x5531b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5531b3:{NFSU2_TR(0x5531b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5531b6:{NFSU2_TR(0x5531b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5531b9:L5531b9:{c.instructions+=8;NFSU2_TR(0x5531b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5531bd:{NFSU2_TR(0x5531bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5531be:{NFSU2_TR(0x5531be);
__builtin_memmove((R+0),(R+24),4);
}
B5531c0:{NFSU2_TR(0x5531c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5531c1:{NFSU2_TR(0x5531c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5531c2:{NFSU2_TR(0x5531c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5531c9:{NFSU2_TR(0x5531c9);
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
B5531cc:{NFSU2_TR(0x5531cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5531d0:L5531d0:{c.instructions+=3;NFSU2_TR(0x5531d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5531d1:{NFSU2_TR(0x5531d1);
__builtin_memmove((R+24),(R+4),4);
}
B5531d3:{NFSU2_TR(0x5531d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5531d8ull));
{goto L5531f0;}
}
B5531d8:L5531d8:{c.instructions+=2;NFSU2_TR(0x5531d8);
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
B5531dd:{NFSU2_TR(0x5531dd);
if(r1(R+518)){{goto L5531e8;}}
}
B5531df:L5531df:{c.instructions+=2;NFSU2_TR(0x5531df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5531e0:{NFSU2_TR(0x5531e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5531e5ull));
TAIL_STATIC(0x575630u,575);
}
B5531e5:L5531e5:{c.instructions+=1;NFSU2_TR(0x5531e5);
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
B5531e8:L5531e8:{c.instructions+=3;NFSU2_TR(0x5531e8);
__builtin_memmove((R+0),(R+24),4);
}
B5531ea:{NFSU2_TR(0x5531ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5531eb:{NFSU2_TR(0x5531eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5531f0:L5531f0:{c.instructions+=2;NFSU2_TR(0x5531f0);
u8 U[4];
w4(U+0,u32(0x79ca94ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5531f6:{NFSU2_TR(0x5531f6);
TAIL_STATIC(0x4defb0u,4de);
}
B553200:L553200:{c.instructions+=12;NFSU2_TR(0x553200);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553202:{NFSU2_TR(0x553202);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553207:{NFSU2_TR(0x553207);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55320d:{NFSU2_TR(0x55320d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55320e:{NFSU2_TR(0x55320e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553215:{NFSU2_TR(0x553215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553216:{NFSU2_TR(0x553216);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55321a:{NFSU2_TR(0x55321a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55321b:{NFSU2_TR(0x55321b);
__builtin_memmove((R+24),(R+4),4);
}
B55321d:{NFSU2_TR(0x55321d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55321e:{NFSU2_TR(0x55321e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553222:{NFSU2_TR(0x553222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553227ull));
TAIL_STATIC(0x552330u,552);
}
B553227:L553227:{c.instructions+=8;NFSU2_TR(0x553227);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553229:{NFSU2_TR(0x553229);
u8 U[4];
w4(U+0,u32(0x79cab0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55322f:{NFSU2_TR(0x55322f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553235:{NFSU2_TR(0x553235);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55323b:{NFSU2_TR(0x55323b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553241:{NFSU2_TR(0x553241);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553245:{NFSU2_TR(0x553245);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B55324a:{NFSU2_TR(0x55324a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55324full));
TAIL_STATIC(0x5205b0u,520);
}
B55324f:L55324f:{c.instructions+=2;NFSU2_TR(0x55324f);
__builtin_memmove((R+4),(R+24),4);
}
B553251:{NFSU2_TR(0x553251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553256ull));
TAIL_STATIC(0x53abd0u,53a);
}
B553256:L553256:{c.instructions+=6;NFSU2_TR(0x553256);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55325a:{NFSU2_TR(0x55325a);
__builtin_memmove((R+0),(R+24),4);
}
B55325c:{NFSU2_TR(0x55325c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55325d:{NFSU2_TR(0x55325d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553264:{NFSU2_TR(0x553264);
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
B553267:{NFSU2_TR(0x553267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553270:L553270:{c.instructions+=2;NFSU2_TR(0x553270);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553274:{NFSU2_TR(0x553274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553280:L553280:{c.instructions+=3;NFSU2_TR(0x553280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553281:{NFSU2_TR(0x553281);
__builtin_memmove((R+24),(R+4),4);
}
B553283:{NFSU2_TR(0x553283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553288ull));
{goto L5532a0;}
}
B553288:L553288:{c.instructions+=2;NFSU2_TR(0x553288);
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
B55328d:{NFSU2_TR(0x55328d);
if(r1(R+518)){{goto L553298;}}
}
B55328f:L55328f:{c.instructions+=2;NFSU2_TR(0x55328f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553290:{NFSU2_TR(0x553290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553295ull));
TAIL_STATIC(0x575630u,575);
}
B553295:L553295:{c.instructions+=1;NFSU2_TR(0x553295);
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
B553298:L553298:{c.instructions+=3;NFSU2_TR(0x553298);
__builtin_memmove((R+0),(R+24),4);
}
B55329a:{NFSU2_TR(0x55329a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55329b:{NFSU2_TR(0x55329b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5532a0:L5532a0:{c.instructions+=2;NFSU2_TR(0x5532a0);
u8 U[4];
w4(U+0,u32(0x79cab0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5532a6:{NFSU2_TR(0x5532a6);
TAIL_STATIC(0x4defb0u,4de);
}
B5532b0:L5532b0:{c.instructions+=13;NFSU2_TR(0x5532b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532b2:{NFSU2_TR(0x5532b2);
u8 U[4];
w4(U+0,u32(0x777d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532b7:{NFSU2_TR(0x5532b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5532bd:{NFSU2_TR(0x5532bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532be:{NFSU2_TR(0x5532be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5532c5:{NFSU2_TR(0x5532c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532c6:{NFSU2_TR(0x5532c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532c7:{NFSU2_TR(0x5532c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532c8:{NFSU2_TR(0x5532c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5532cc:{NFSU2_TR(0x5532cc);
__builtin_memmove((R+24),(R+4),4);
}
B5532ce:{NFSU2_TR(0x5532ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5532cf:{NFSU2_TR(0x5532cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5532d3:{NFSU2_TR(0x5532d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5532d8ull));
TAIL_STATIC(0x552780u,552);
}
B5532d8:L5532d8:{c.instructions+=8;NFSU2_TR(0x5532d8);
u8 U[4];
w4(U+0,u32(0x79caccull));
s4(u32(r4(R+24)),r4(U+0));
}
B5532de:{NFSU2_TR(0x5532de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5532e1:{NFSU2_TR(0x5532e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5532e3:{NFSU2_TR(0x5532e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5532e9:{NFSU2_TR(0x5532e9);
__builtin_memmove((R+4),(R+24),4);
}
B5532eb:{NFSU2_TR(0x5532eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5532ef:{NFSU2_TR(0x5532ef);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B5532f4:{NFSU2_TR(0x5532f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5532f9ull));
TAIL_STATIC(0x550330u,550);
}
B5532f9:L5532f9:{c.instructions+=7;NFSU2_TR(0x5532f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5532fd:{NFSU2_TR(0x5532fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5532fe:{NFSU2_TR(0x5532fe);
__builtin_memmove((R+0),(R+24),4);
}
B553300:{NFSU2_TR(0x553300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553301:{NFSU2_TR(0x553301);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553308:{NFSU2_TR(0x553308);
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
B55330b:{NFSU2_TR(0x55330b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553310:L553310:{c.instructions+=15;NFSU2_TR(0x553310);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553312:{NFSU2_TR(0x553312);
u8 U[4];
w4(U+0,u32(0x777dc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553317:{NFSU2_TR(0x553317);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55331d:{NFSU2_TR(0x55331d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55331e:{NFSU2_TR(0x55331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553325:{NFSU2_TR(0x553325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553326:{NFSU2_TR(0x553326);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553327:{NFSU2_TR(0x553327);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553328:{NFSU2_TR(0x553328);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B55332c:{NFSU2_TR(0x55332c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55332d:{NFSU2_TR(0x55332d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55332e:{NFSU2_TR(0x55332e);
__builtin_memmove((R+24),(R+4),4);
}
B553330:{NFSU2_TR(0x553330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553331:{NFSU2_TR(0x553331);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553335:{NFSU2_TR(0x553335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55333aull));
TAIL_STATIC(0x551de0u,551);
}
B55333a:L55333a:{c.instructions+=14;NFSU2_TR(0x55333a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55333f:{NFSU2_TR(0x55333f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553344:{NFSU2_TR(0x553344);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553346:{NFSU2_TR(0x553346);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B553348:{NFSU2_TR(0x553348);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55334d:{NFSU2_TR(0x55334d);
u8 U[4];
w4(U+0,u32(0x79cae0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553353:{NFSU2_TR(0x553353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553356:{NFSU2_TR(0x553356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553359:{NFSU2_TR(0x553359);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55335e:{NFSU2_TR(0x55335e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553361:{NFSU2_TR(0x553361);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553362:{NFSU2_TR(0x553362);
__builtin_memmove((R+4),(R+28),4);
}
B553364:{NFSU2_TR(0x553364);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553368:{NFSU2_TR(0x553368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55336dull));
TAIL_STATIC(0x5435d0u,543);
}
B55336d:L55336d:{c.instructions+=9;NFSU2_TR(0x55336d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553370:{NFSU2_TR(0x553370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553371:{NFSU2_TR(0x553371);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553372:{NFSU2_TR(0x553372);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553374:{NFSU2_TR(0x553374);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553379:{NFSU2_TR(0x553379);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55337a:{NFSU2_TR(0x55337a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553380:{NFSU2_TR(0x553380);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553385:{NFSU2_TR(0x553385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55338aull));
TAIL_STATIC(0x542ac0u,542);
}
B55338a:L55338a:{c.instructions+=18;NFSU2_TR(0x55338a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553390:{NFSU2_TR(0x553390);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553396:{NFSU2_TR(0x553396);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55339c:{NFSU2_TR(0x55339c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5533a2:{NFSU2_TR(0x5533a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5533a8:{NFSU2_TR(0x5533a8);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5533ae:{NFSU2_TR(0x5533ae);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B5533b4:{NFSU2_TR(0x5533b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5533b7:{NFSU2_TR(0x5533b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5533ba:{NFSU2_TR(0x5533ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5533bd:{NFSU2_TR(0x5533bd);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5533c2:{NFSU2_TR(0x5533c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5533c3:{NFSU2_TR(0x5533c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5533c9:{NFSU2_TR(0x5533c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5533cd:{NFSU2_TR(0x5533cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5533d3:{NFSU2_TR(0x5533d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5533dd:{NFSU2_TR(0x5533dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5533e7:{NFSU2_TR(0x5533e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5533ecull));
TAIL_STATIC(0x4953e0u,495);
}
B5533ec:L5533ec:{c.instructions+=4;NFSU2_TR(0x5533ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5533ef:{NFSU2_TR(0x5533ef);
__builtin_memmove((R+4),(R+24),4);
}
B5533f1:{NFSU2_TR(0x5533f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5533f7:{NFSU2_TR(0x5533f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5533fcull));
TAIL_STATIC(0x53ba00u,53b);
}
B5533fc:L5533fc:{c.instructions+=2;NFSU2_TR(0x5533fc);
__builtin_memmove((R+4),(R+24),4);
}
B5533fe:{NFSU2_TR(0x5533fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553403ull));
TAIL_STATIC(0x547f30u,547);
}
B553403:L553403:{c.instructions+=3;NFSU2_TR(0x553403);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553406:{NFSU2_TR(0x553406);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553408:{NFSU2_TR(0x553408);
if(r1(R+518)){{goto L55340f;}}
}
B55340a:L55340a:{c.instructions+=2;NFSU2_TR(0x55340a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55340d:{NFSU2_TR(0x55340d);
{goto L553411;}
}
B55340f:L55340f:{c.instructions+=1;NFSU2_TR(0x55340f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553411:L553411:{c.instructions+=2;NFSU2_TR(0x553411);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553414:{NFSU2_TR(0x553414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553427;}}
}
B553416:L553416:{c.instructions+=3;NFSU2_TR(0x553416);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55341c:{NFSU2_TR(0x55341c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55341d:{NFSU2_TR(0x55341d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553422ull));
TAIL_STATIC(0x50ca00u,50c);
}
B553422:L553422:{c.instructions+=2;NFSU2_TR(0x553422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553425:{NFSU2_TR(0x553425);
{goto L553462;}
}
B553427:L553427:{c.instructions+=3;NFSU2_TR(0x553427);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55342a:{NFSU2_TR(0x55342a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55342c:{NFSU2_TR(0x55342c);
if(r1(R+518)){{goto L553431;}}
}
B55342e:L55342e:{c.instructions+=1;NFSU2_TR(0x55342e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B553431:L553431:{c.instructions+=2;NFSU2_TR(0x553431);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553434:{NFSU2_TR(0x553434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553447;}}
}
B553436:L553436:{c.instructions+=3;NFSU2_TR(0x553436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55343c:{NFSU2_TR(0x55343c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55343d:{NFSU2_TR(0x55343d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553442ull));
TAIL_STATIC(0x50ca00u,50c);
}
B553442:L553442:{c.instructions+=2;NFSU2_TR(0x553442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553445:{NFSU2_TR(0x553445);
{goto L553462;}
}
B553447:L553447:{c.instructions+=3;NFSU2_TR(0x553447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55344d:{NFSU2_TR(0x55344d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55344e:{NFSU2_TR(0x55344e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553453ull));
TAIL_STATIC(0x50ca50u,50c);
}
B553453:L553453:{c.instructions+=3;NFSU2_TR(0x553453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553459:{NFSU2_TR(0x553459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55345a:{NFSU2_TR(0x55345a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55345full));
TAIL_STATIC(0x50ca50u,50c);
}
B55345f:L55345f:{c.instructions+=1;NFSU2_TR(0x55345f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B553462:L553462:{c.instructions+=9;NFSU2_TR(0x553462);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553466:{NFSU2_TR(0x553466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553467:{NFSU2_TR(0x553467);
__builtin_memmove((R+0),(R+24),4);
}
B553469:{NFSU2_TR(0x553469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55346a:{NFSU2_TR(0x55346a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55346b:{NFSU2_TR(0x55346b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55346c:{NFSU2_TR(0x55346c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553473:{NFSU2_TR(0x553473);
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
B553476:{NFSU2_TR(0x553476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553480:L553480:{c.instructions+=3;NFSU2_TR(0x553480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553481:{NFSU2_TR(0x553481);
__builtin_memmove((R+24),(R+4),4);
}
B553483:{NFSU2_TR(0x553483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553488ull));
{goto L5534a0;}
}
B553488:L553488:{c.instructions+=2;NFSU2_TR(0x553488);
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
B55348d:{NFSU2_TR(0x55348d);
if(r1(R+518)){{goto L553498;}}
}
B55348f:L55348f:{c.instructions+=2;NFSU2_TR(0x55348f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553490:{NFSU2_TR(0x553490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553495ull));
TAIL_STATIC(0x575630u,575);
}
B553495:L553495:{c.instructions+=1;NFSU2_TR(0x553495);
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
B553498:L553498:{c.instructions+=3;NFSU2_TR(0x553498);
__builtin_memmove((R+0),(R+24),4);
}
B55349a:{NFSU2_TR(0x55349a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55349b:{NFSU2_TR(0x55349b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5534a0:L5534a0:{c.instructions+=13;NFSU2_TR(0x5534a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534a2:{NFSU2_TR(0x5534a2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534a7:{NFSU2_TR(0x5534a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5534ad:{NFSU2_TR(0x5534ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534ae:{NFSU2_TR(0x5534ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5534b5:{NFSU2_TR(0x5534b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534b6:{NFSU2_TR(0x5534b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534b7:{NFSU2_TR(0x5534b7);
__builtin_memmove((R+24),(R+4),4);
}
B5534b9:{NFSU2_TR(0x5534b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5534bd:{NFSU2_TR(0x5534bd);
u8 U[4];
w4(U+0,u32(0x79cae0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5534c3:{NFSU2_TR(0x5534c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5534c6:{NFSU2_TR(0x5534c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5534ce:{NFSU2_TR(0x5534ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5534d3ull));
TAIL_STATIC(0x52ea90u,52e);
}
B5534d3:L5534d3:{c.instructions+=6;NFSU2_TR(0x5534d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5534d7:{NFSU2_TR(0x5534d7);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5534dd:{NFSU2_TR(0x5534dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5534de:{NFSU2_TR(0x5534de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5534e5:{NFSU2_TR(0x5534e5);
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
B5534e8:{NFSU2_TR(0x5534e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5534f0:L5534f0:{c.instructions+=12;NFSU2_TR(0x5534f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534f2:{NFSU2_TR(0x5534f2);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534f7:{NFSU2_TR(0x5534f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5534fd:{NFSU2_TR(0x5534fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5534fe:{NFSU2_TR(0x5534fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553505:{NFSU2_TR(0x553505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553506:{NFSU2_TR(0x553506);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55350a:{NFSU2_TR(0x55350a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55350b:{NFSU2_TR(0x55350b);
__builtin_memmove((R+24),(R+4),4);
}
B55350d:{NFSU2_TR(0x55350d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55350e:{NFSU2_TR(0x55350e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553512:{NFSU2_TR(0x553512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553517ull));
TAIL_STATIC(0x552330u,552);
}
B553517:L553517:{c.instructions+=17;NFSU2_TR(0x553517);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553519:{NFSU2_TR(0x553519);
u8 U[4];
w4(U+0,u32(0x79cafcull));
s4(u32(r4(R+24)),r4(U+0));
}
B55351f:{NFSU2_TR(0x55351f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553525:{NFSU2_TR(0x553525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55352b:{NFSU2_TR(0x55352b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553531:{NFSU2_TR(0x553531);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553537:{NFSU2_TR(0x553537);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55353e:{NFSU2_TR(0x55353e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553544:{NFSU2_TR(0x553544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55354a:{NFSU2_TR(0x55354a);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B553550:{NFSU2_TR(0x553550);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B553555:{NFSU2_TR(0x553555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55355b:{NFSU2_TR(0x55355b);
__builtin_memmove((R+4),(R+24),4);
}
B55355d:{NFSU2_TR(0x55355d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553561:{NFSU2_TR(0x553561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553567:{NFSU2_TR(0x553567);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55356b:{NFSU2_TR(0x55356b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553570ull));
TAIL_STATIC(0x548010u,548);
}
B553570:L553570:{c.instructions+=2;NFSU2_TR(0x553570);
__builtin_memmove((R+4),(R+24),4);
}
B553572:{NFSU2_TR(0x553572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553577ull));
TAIL_STATIC(0x5480b0u,548);
}
B553577:L553577:{c.instructions+=5;NFSU2_TR(0x553577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55357a:{NFSU2_TR(0x55357a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55357c:{NFSU2_TR(0x55357c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55357d:{NFSU2_TR(0x55357d);
__builtin_memmove((R+4),(R+24),4);
}
B55357f:{NFSU2_TR(0x55357f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553584ull));
TAIL_STATIC(0x50f290u,50f);
}
B553584:L553584:{c.instructions+=6;NFSU2_TR(0x553584);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553588:{NFSU2_TR(0x553588);
__builtin_memmove((R+0),(R+24),4);
}
B55358a:{NFSU2_TR(0x55358a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55358b:{NFSU2_TR(0x55358b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553592:{NFSU2_TR(0x553592);
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
B553595:{NFSU2_TR(0x553595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5535a0:L5535a0:{c.instructions+=3;NFSU2_TR(0x5535a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535a1:{NFSU2_TR(0x5535a1);
__builtin_memmove((R+24),(R+4),4);
}
B5535a3:{NFSU2_TR(0x5535a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5535a8ull));
{goto L5535c0;}
}
B5535a8:L5535a8:{c.instructions+=2;NFSU2_TR(0x5535a8);
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
B5535ad:{NFSU2_TR(0x5535ad);
if(r1(R+518)){{goto L5535b8;}}
}
B5535af:L5535af:{c.instructions+=2;NFSU2_TR(0x5535af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535b0:{NFSU2_TR(0x5535b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5535b5ull));
TAIL_STATIC(0x575630u,575);
}
B5535b5:L5535b5:{c.instructions+=1;NFSU2_TR(0x5535b5);
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
B5535b8:L5535b8:{c.instructions+=3;NFSU2_TR(0x5535b8);
__builtin_memmove((R+0),(R+24),4);
}
B5535ba:{NFSU2_TR(0x5535ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5535bb:{NFSU2_TR(0x5535bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5535c0:L5535c0:{c.instructions+=2;NFSU2_TR(0x5535c0);
u8 U[4];
w4(U+0,u32(0x79cafcull));
s4(u32(r4(R+4)),r4(U+0));
}
B5535c6:{NFSU2_TR(0x5535c6);
TAIL_STATIC(0x4defb0u,4de);
}
B5535d0:L5535d0:{c.instructions+=6;NFSU2_TR(0x5535d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535d1:{NFSU2_TR(0x5535d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535d2:{NFSU2_TR(0x5535d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535d3:{NFSU2_TR(0x5535d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535d4:{NFSU2_TR(0x5535d4);
__builtin_memmove((R+12),(R+4),4);
}
B5535d6:{NFSU2_TR(0x5535d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5535dbull));
TAIL_STATIC(0x50da50u,50d);
}
B5535db:L5535db:{c.instructions+=4;NFSU2_TR(0x5535db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5535de:{NFSU2_TR(0x5535de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5535e1:{NFSU2_TR(0x5535e1);
w4(R+4,u32(0x838980ull));
}
B5535e6:{NFSU2_TR(0x5535e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5535ebull));
TAIL_STATIC(0x521580u,521);
}
B5535eb:L5535eb:{c.instructions+=2;NFSU2_TR(0x5535eb);
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
B5535ed:{NFSU2_TR(0x5535ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553623;}}
}
B5535ef:L5535ef:{c.instructions+=1;NFSU2_TR(0x5535ef);
w4(R+24,u32(0x40ull));
}
B5535f4:L5535f4:{c.instructions+=3;NFSU2_TR(0x5535f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5535f5:{NFSU2_TR(0x5535f5);
w4(R+4,u32(0x8392c0ull));
}
B5535fa:{NFSU2_TR(0x5535fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5535ffull));
TAIL_STATIC(0x6102f0u,610);
}
B5535ff:L5535ff:{c.instructions+=2;NFSU2_TR(0x5535ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B553601:{NFSU2_TR(0x553601);
if(r1(R+518)){{goto L553616;}}
}
B553603:L553603:{c.instructions+=4;NFSU2_TR(0x553603);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553605:{NFSU2_TR(0x553605);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55360a:{NFSU2_TR(0x55360a);
__builtin_memmove((R+4),(R+0),4);
}
B55360c:{NFSU2_TR(0x55360c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553611ull));
TAIL_STATIC(0x61b500u,61b);
}
B553611:L553611:{c.instructions+=2;NFSU2_TR(0x553611);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553614:{NFSU2_TR(0x553614);
if(r1(R+518)){{goto L553623;}}
}
B553616:L553616:{c.instructions+=3;NFSU2_TR(0x553616);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B553617:{NFSU2_TR(0x553617);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B55361a:{NFSU2_TR(0x55361a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5535f4u);}goto L5535f4;}}
}
B55361c:L55361c:{c.instructions+=2;NFSU2_TR(0x55361c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553621:{NFSU2_TR(0x553621);
{goto L553628;}
}
B553623:L553623:{c.instructions+=1;NFSU2_TR(0x553623);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553628:L553628:{c.instructions+=2;NFSU2_TR(0x553628);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55362b:{NFSU2_TR(0x55362b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L553641;}}
}
B55362d:L55362d:{c.instructions+=2;NFSU2_TR(0x55362d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B553630:{NFSU2_TR(0x553630);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L553641;}}
}
B553632:L553632:{c.instructions+=3;NFSU2_TR(0x553632);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553633:{NFSU2_TR(0x553633);
w4(R+4,u32(0x8392c0ull));
}
B553638:{NFSU2_TR(0x553638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55363dull));
TAIL_STATIC(0x6102f0u,610);
}
B55363d:L55363d:{c.instructions+=2;NFSU2_TR(0x55363d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55363f:{NFSU2_TR(0x55363f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553652;}}
}
B553641:L553641:{c.instructions+=4;NFSU2_TR(0x553641);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553643:{NFSU2_TR(0x553643);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553644:{NFSU2_TR(0x553644);
w4(R+4,u32(0x838980ull));
}
B553649:{NFSU2_TR(0x553649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55364eull));
TAIL_STATIC(0x521670u,521);
}
B55364e:L55364e:{c.instructions+=2;NFSU2_TR(0x55364e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B553650:{NFSU2_TR(0x553650);
if(r1(R+518)){{goto L553654;}}
}
B553652:L553652:{c.instructions+=1;NFSU2_TR(0x553652);
w1(R+0,u8(0x1ull));
}
B553654:L553654:{c.instructions+=3;NFSU2_TR(0x553654);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B553658:{NFSU2_TR(0x553658);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55365a:{NFSU2_TR(0x55365a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5536c0;}}
}
B55365c:L55365c:{c.instructions+=2;NFSU2_TR(0x55365c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55365e:{NFSU2_TR(0x55365e);
if(r1(R+518)){{goto L5536c0;}}
}
B553660:L553660:{c.instructions+=3;NFSU2_TR(0x553660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553661:{NFSU2_TR(0x553661);
w4(R+4,u32(0x838980ull));
}
B553666:{NFSU2_TR(0x553666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55366bull));
TAIL_STATIC(0x5214d0u,521);
}
B55366b:L55366b:{c.instructions+=2;NFSU2_TR(0x55366b);
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
B55366d:{NFSU2_TR(0x55366d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55367e;}}
}
B55366f:L55366f:{c.instructions+=3;NFSU2_TR(0x55366f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553670:{NFSU2_TR(0x553670);
w4(R+4,u32(0x8392c0ull));
}
B553675:{NFSU2_TR(0x553675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55367aull));
TAIL_STATIC(0x6102f0u,610);
}
B55367a:L55367a:{c.instructions+=2;NFSU2_TR(0x55367a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55367c:{NFSU2_TR(0x55367c);
if(r1(R+518)){{goto L5536ab;}}
}
B55367e:L55367e:{c.instructions+=4;NFSU2_TR(0x55367e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553680:{NFSU2_TR(0x553680);
u8 U[4];
w4(U+0,u32(0x39dd714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553685:{NFSU2_TR(0x553685);
__builtin_memmove((R+4),(R+0),4);
}
B553687:{NFSU2_TR(0x553687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55368cull));
TAIL_STATIC(0x61b500u,61b);
}
B55368c:L55368c:{c.instructions+=2;NFSU2_TR(0x55368c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55368e:{NFSU2_TR(0x55368e);
if(r1(R+518)){{goto L5536ab;}}
}
B553690:L553690:{c.instructions+=7;NFSU2_TR(0x553690);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553693:{NFSU2_TR(0x553693);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553696:{NFSU2_TR(0x553696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553697:{NFSU2_TR(0x553697);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55369d:{NFSU2_TR(0x55369d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x800000ull))));
}
B5536a3:{NFSU2_TR(0x5536a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536a4:{NFSU2_TR(0x5536a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5536a9ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5536a9:L5536a9:{c.instructions+=1;NFSU2_TR(0x5536a9);
{goto L5536db;}
}
B5536ab:L5536ab:{c.instructions+=6;NFSU2_TR(0x5536ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5536ae:{NFSU2_TR(0x5536ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5536b1:{NFSU2_TR(0x5536b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536b2:{NFSU2_TR(0x5536b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536b3:{NFSU2_TR(0x5536b3);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5536b9:{NFSU2_TR(0x5536b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5536beull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5536be:L5536be:{c.instructions+=1;NFSU2_TR(0x5536be);
{goto L5536db;}
}
B5536c0:L5536c0:{c.instructions+=6;NFSU2_TR(0x5536c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5536c3:{NFSU2_TR(0x5536c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5536c6:{NFSU2_TR(0x5536c6);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5536cc:{NFSU2_TR(0x5536cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536cd:{NFSU2_TR(0x5536cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536ce:{NFSU2_TR(0x5536ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5536d3ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5536d3:L5536d3:{c.instructions+=3;NFSU2_TR(0x5536d3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5536d7:{NFSU2_TR(0x5536d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5536d9:{NFSU2_TR(0x5536d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553737;}}
}
B5536db:L5536db:{c.instructions+=4;NFSU2_TR(0x5536db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536dd:{NFSU2_TR(0x5536dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536de:{NFSU2_TR(0x5536de);
w4(R+4,u32(0x838980ull));
}
B5536e3:{NFSU2_TR(0x5536e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5536e8ull));
TAIL_STATIC(0x521670u,521);
}
B5536e8:L5536e8:{c.instructions+=2;NFSU2_TR(0x5536e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5536ea:{NFSU2_TR(0x5536ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553705;}}
}
B5536ec:L5536ec:{c.instructions+=2;NFSU2_TR(0x5536ec);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5536ef:{NFSU2_TR(0x5536ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L553737;}}
}
B5536f1:L5536f1:{c.instructions+=2;NFSU2_TR(0x5536f1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5536f4:{NFSU2_TR(0x5536f4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L553737;}}
}
B5536f6:L5536f6:{c.instructions+=3;NFSU2_TR(0x5536f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5536f7:{NFSU2_TR(0x5536f7);
w4(R+4,u32(0x8392c0ull));
}
B5536fc:{NFSU2_TR(0x5536fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553701ull));
TAIL_STATIC(0x6102f0u,610);
}
B553701:L553701:{c.instructions+=2;NFSU2_TR(0x553701);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B553703:{NFSU2_TR(0x553703);
if(r1(R+518)){{goto L553737;}}
}
B553705:L553705:{c.instructions+=4;NFSU2_TR(0x553705);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553708:{NFSU2_TR(0x553708);
u8 U[4];
w4(U+0,u32(0xd999b6e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55370d:{NFSU2_TR(0x55370d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55370e:{NFSU2_TR(0x55370e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553713ull));
TAIL_STATIC(0x495520u,495);
}
B553713:L553713:{c.instructions+=4;NFSU2_TR(0x553713);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553716:{NFSU2_TR(0x553716);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55371b:{NFSU2_TR(0x55371b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55371c:{NFSU2_TR(0x55371c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553721ull));
TAIL_STATIC(0x495520u,495);
}
B553721:L553721:{c.instructions+=4;NFSU2_TR(0x553721);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553724:{NFSU2_TR(0x553724);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553729:{NFSU2_TR(0x553729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55372a:{NFSU2_TR(0x55372a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55372full));
TAIL_STATIC(0x495520u,495);
}
B55372f:L55372f:{c.instructions+=6;NFSU2_TR(0x55372f);
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
B553732:{NFSU2_TR(0x553732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553733:{NFSU2_TR(0x553733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553734:{NFSU2_TR(0x553734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B553735:{NFSU2_TR(0x553735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553736:{NFSU2_TR(0x553736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553737:L553737:{c.instructions+=4;NFSU2_TR(0x553737);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55373a:{NFSU2_TR(0x55373a);
u8 U[4];
w4(U+0,u32(0xd999b6e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55373f:{NFSU2_TR(0x55373f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553740:{NFSU2_TR(0x553740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553745ull));
TAIL_STATIC(0x4954e0u,495);
}
B553745:L553745:{c.instructions+=4;NFSU2_TR(0x553745);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553748:{NFSU2_TR(0x553748);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55374d:{NFSU2_TR(0x55374d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55374e:{NFSU2_TR(0x55374e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553753ull));
TAIL_STATIC(0x4954e0u,495);
}
B553753:L553753:{c.instructions+=4;NFSU2_TR(0x553753);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553756:{NFSU2_TR(0x553756);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55375b:{NFSU2_TR(0x55375b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55375c:{NFSU2_TR(0x55375c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553761ull));
TAIL_STATIC(0x4954e0u,495);
}
B553761:L553761:{c.instructions+=6;NFSU2_TR(0x553761);
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
B553764:{NFSU2_TR(0x553764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553765:{NFSU2_TR(0x553765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553766:{NFSU2_TR(0x553766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B553767:{NFSU2_TR(0x553767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553768:{NFSU2_TR(0x553768);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553770:L553770:{c.instructions+=14;NFSU2_TR(0x553770);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553772:{NFSU2_TR(0x553772);
u8 U[4];
w4(U+0,u32(0x77785eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553777:{NFSU2_TR(0x553777);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55377d:{NFSU2_TR(0x55377d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55377e:{NFSU2_TR(0x55377e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553785:{NFSU2_TR(0x553785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553786:{NFSU2_TR(0x553786);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553787:{NFSU2_TR(0x553787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553788:{NFSU2_TR(0x553788);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553789:{NFSU2_TR(0x553789);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55378d:{NFSU2_TR(0x55378d);
__builtin_memmove((R+24),(R+4),4);
}
B55378f:{NFSU2_TR(0x55378f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553790:{NFSU2_TR(0x553790);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553794:{NFSU2_TR(0x553794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553799ull));
TAIL_STATIC(0x551de0u,551);
}
B553799:L553799:{c.instructions+=14;NFSU2_TR(0x553799);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55379e:{NFSU2_TR(0x55379e);
u8 U[4];
w4(U+0,u32(0x57bcd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5537a3:{NFSU2_TR(0x5537a3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5537a5:{NFSU2_TR(0x5537a5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5537a7:{NFSU2_TR(0x5537a7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5537a9:{NFSU2_TR(0x5537a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5537ac:{NFSU2_TR(0x5537ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5537ad:{NFSU2_TR(0x5537ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5537b1:{NFSU2_TR(0x5537b1);
u8 U[4];
w4(U+0,u32(0x79bea0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5537b7:{NFSU2_TR(0x5537b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5537ba:{NFSU2_TR(0x5537ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5537bd:{NFSU2_TR(0x5537bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5537c4:{NFSU2_TR(0x5537c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5537cb:{NFSU2_TR(0x5537cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5537d0ull));
TAIL_STATIC(0x75c461u,75c);
}
B5537d0:L5537d0:{c.instructions+=13;NFSU2_TR(0x5537d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x41a80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5537da:{NFSU2_TR(0x5537da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x43020000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5537e4:{NFSU2_TR(0x5537e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5537ea:{NFSU2_TR(0x5537ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5537f0:{NFSU2_TR(0x5537f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5537f6:{NFSU2_TR(0x5537f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5537f9:{NFSU2_TR(0x5537f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5537ff:{NFSU2_TR(0x5537ff);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B553805:{NFSU2_TR(0x553805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553808:{NFSU2_TR(0x553808);
u8 U[4];
w4(U+0,u32(0x79cb30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55380d:{NFSU2_TR(0x55380d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55380e:{NFSU2_TR(0x55380e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553813:{NFSU2_TR(0x553813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553818ull));
TAIL_STATIC(0x4953e0u,495);
}
B553818:L553818:{c.instructions+=5;NFSU2_TR(0x553818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55381b:{NFSU2_TR(0x55381b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55381e:{NFSU2_TR(0x55381e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553820:{NFSU2_TR(0x553820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553823:{NFSU2_TR(0x553823);
if(r1(R+518)){{goto L553842;}}
}
B553825:L553825:{c.instructions+=2;NFSU2_TR(0x553825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553826:{NFSU2_TR(0x553826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55382bull));
TAIL_STATIC(0x52cef0u,52c);
}
B55382b:L55382b:{c.instructions+=3;NFSU2_TR(0x55382b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55382e:{NFSU2_TR(0x55382e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553830:{NFSU2_TR(0x553830);
if(r1(R+518)){{goto L553842;}}
}
B553832:L553832:{c.instructions+=3;NFSU2_TR(0x553832);
u8 U[4];
w4(U+0,u32(0xd1cda594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553837:{NFSU2_TR(0x553837);
__builtin_memmove((R+4),(R+0),4);
}
B553839:{NFSU2_TR(0x553839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55383eull));
TAIL_STATIC(0x517f80u,517);
}
B55383e:L55383e:{c.instructions+=2;NFSU2_TR(0x55383e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553840:{NFSU2_TR(0x553840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55385d;}}
}
B553842:L553842:{c.instructions+=3;NFSU2_TR(0x553842);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553847:{NFSU2_TR(0x553847);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553849:{NFSU2_TR(0x553849);
if(r1(R+518)){{goto L553863;}}
}
B55384b:L55384b:{c.instructions+=4;NFSU2_TR(0x55384b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55384e:{NFSU2_TR(0x55384e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55384f:{NFSU2_TR(0x55384f);
u8 U[4];
w4(U+0,u32(0xd1cda594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553854:{NFSU2_TR(0x553854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553859ull));
TAIL_STATIC(0x52c570u,52c);
}
B553859:L553859:{c.instructions+=2;NFSU2_TR(0x553859);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55385b:{NFSU2_TR(0x55385b);
if(r1(R+518)){{goto L553863;}}
}
B55385d:L55385d:{c.instructions+=2;NFSU2_TR(0x55385d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553861:{NFSU2_TR(0x553861);
if(r1(R+518)){{goto L553865;}}
}
B553863:L553863:{c.instructions+=1;NFSU2_TR(0x553863);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553865:L553865:{c.instructions+=4;NFSU2_TR(0x553865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B553868:{NFSU2_TR(0x553868);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55386a:{NFSU2_TR(0x55386a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553870:{NFSU2_TR(0x553870);
if(r1(R+518)){{goto L55388f;}}
}
B553872:L553872:{c.instructions+=2;NFSU2_TR(0x553872);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553873:{NFSU2_TR(0x553873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553878ull));
TAIL_STATIC(0x52cef0u,52c);
}
B553878:L553878:{c.instructions+=3;NFSU2_TR(0x553878);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55387b:{NFSU2_TR(0x55387b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55387d:{NFSU2_TR(0x55387d);
if(r1(R+518)){{goto L55388f;}}
}
B55387f:L55387f:{c.instructions+=3;NFSU2_TR(0x55387f);
u8 U[4];
w4(U+0,u32(0x9345e4a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553884:{NFSU2_TR(0x553884);
__builtin_memmove((R+4),(R+0),4);
}
B553886:{NFSU2_TR(0x553886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55388bull));
TAIL_STATIC(0x517f80u,517);
}
B55388b:L55388b:{c.instructions+=2;NFSU2_TR(0x55388b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55388d:{NFSU2_TR(0x55388d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5538aa;}}
}
B55388f:L55388f:{c.instructions+=3;NFSU2_TR(0x55388f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553894:{NFSU2_TR(0x553894);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553896:{NFSU2_TR(0x553896);
if(r1(R+518)){{goto L5538b0;}}
}
B553898:L553898:{c.instructions+=4;NFSU2_TR(0x553898);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55389b:{NFSU2_TR(0x55389b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55389c:{NFSU2_TR(0x55389c);
u8 U[4];
w4(U+0,u32(0x9345e4a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538a1:{NFSU2_TR(0x5538a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5538a6ull));
TAIL_STATIC(0x52c570u,52c);
}
B5538a6:L5538a6:{c.instructions+=2;NFSU2_TR(0x5538a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5538a8:{NFSU2_TR(0x5538a8);
if(r1(R+518)){{goto L5538b0;}}
}
B5538aa:L5538aa:{c.instructions+=2;NFSU2_TR(0x5538aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5538ae:{NFSU2_TR(0x5538ae);
if(r1(R+518)){{goto L5538b2;}}
}
B5538b0:L5538b0:{c.instructions+=1;NFSU2_TR(0x5538b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5538b2:L5538b2:{c.instructions+=3;NFSU2_TR(0x5538b2);
__builtin_memmove((R+4),(R+24),4);
}
B5538b4:{NFSU2_TR(0x5538b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5538ba:{NFSU2_TR(0x5538ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5538bfull));
TAIL_STATIC(0x53c560u,53c);
}
B5538bf:L5538bf:{c.instructions+=6;NFSU2_TR(0x5538bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5538c2:{NFSU2_TR(0x5538c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538c4:{NFSU2_TR(0x5538c4);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538c9:{NFSU2_TR(0x5538c9);
u8 U[4];
w4(U+0,u32(0x79cb18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538ce:{NFSU2_TR(0x5538ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538cf:{NFSU2_TR(0x5538cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5538d4ull));
TAIL_STATIC(0x5426c0u,542);
}
B5538d4:L5538d4:{c.instructions+=4;NFSU2_TR(0x5538d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5538d7:{NFSU2_TR(0x5538d7);
u8 U[4];
w4(U+0,u32(0x7985a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538dc:{NFSU2_TR(0x5538dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5538dd:{NFSU2_TR(0x5538dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5538e2ull));
TAIL_STATIC(0x4954c0u,495);
}
B5538e2:L5538e2:{c.instructions+=4;NFSU2_TR(0x5538e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5538e5:{NFSU2_TR(0x5538e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5538e8:{NFSU2_TR(0x5538e8);
w4(R+4,u32(0x3ull));
}
B5538ed:{NFSU2_TR(0x5538ed);
__builtin_memmove((R+4),(R+4),4);
}
B5538f0:L5538f0:{c.instructions+=4;NFSU2_TR(0x5538f0);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5538f6:{NFSU2_TR(0x5538f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5538f9:{NFSU2_TR(0x5538f9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5538fa:{NFSU2_TR(0x5538fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5538f0u);}goto L5538f0;}}
}
B5538fc:L5538fc:{c.instructions+=11;NFSU2_TR(0x5538fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5538ff:{NFSU2_TR(0x5538ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553900:{NFSU2_TR(0x553900);
u8 U[4];
w4(U+0,u32(0x50f640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553905:{NFSU2_TR(0x553905);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553907:{NFSU2_TR(0x553907);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553908:{NFSU2_TR(0x553908);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B553909:{NFSU2_TR(0x553909);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55390b:{NFSU2_TR(0x55390b);
u8 U[4];
w4(U+0,u32(0x79b6fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553910:{NFSU2_TR(0x553910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553913:{NFSU2_TR(0x553913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553916:{NFSU2_TR(0x553916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55391bull));
TAIL_STATIC(0x57cfb0u,57c);
}
B55391b:L55391b:{c.instructions+=10;NFSU2_TR(0x55391b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55391f:{NFSU2_TR(0x55391f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B553922:{NFSU2_TR(0x553922);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553925:{NFSU2_TR(0x553925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553926:{NFSU2_TR(0x553926);
__builtin_memmove((R+0),(R+24),4);
}
B553928:{NFSU2_TR(0x553928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553929:{NFSU2_TR(0x553929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55392a:{NFSU2_TR(0x55392a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553931:{NFSU2_TR(0x553931);
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
B553934:{NFSU2_TR(0x553934);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553940:L553940:{c.instructions+=16;NFSU2_TR(0x553940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553941:{NFSU2_TR(0x553941);
__builtin_memmove((R+20),(R+16),4);
}
B553943:{NFSU2_TR(0x553943);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553945:{NFSU2_TR(0x553945);
u8 U[4];
w4(U+0,u32(0x777de3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55394a:{NFSU2_TR(0x55394a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553950:{NFSU2_TR(0x553950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553951:{NFSU2_TR(0x553951);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553958:{NFSU2_TR(0x553958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553959:{NFSU2_TR(0x553959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55395c:{NFSU2_TR(0x55395c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55395d:{NFSU2_TR(0x55395d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55395e:{NFSU2_TR(0x55395e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55395f:{NFSU2_TR(0x55395f);
__builtin_memmove((R+24),(R+4),4);
}
B553961:{NFSU2_TR(0x553961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553962:{NFSU2_TR(0x553962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553965:{NFSU2_TR(0x553965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55396aull));
TAIL_STATIC(0x551de0u,551);
}
B55396a:L55396a:{c.instructions+=5;NFSU2_TR(0x55396a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55396c:{NFSU2_TR(0x55396c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55396f:{NFSU2_TR(0x55396f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553972:{NFSU2_TR(0x553972);
u8 U[4];
w4(U+0,u32(0x79cb44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553978:{NFSU2_TR(0x553978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55397dull));
TAIL_STATIC(0x5763e0u,576);
}
B55397d:L55397d:{c.instructions+=4;NFSU2_TR(0x55397d);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B553982:{NFSU2_TR(0x553982);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553984:{NFSU2_TR(0x553984);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553988:{NFSU2_TR(0x553988);
if(r1(R+518)){{goto L5539b5;}}
}
B55398a:L55398a:{c.instructions+=2;NFSU2_TR(0x55398a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B55398d:{NFSU2_TR(0x55398d);
if(r1(R+518)){{goto L5539b5;}}
}
B55398f:L55398f:{c.instructions+=2;NFSU2_TR(0x55398f);
u8 U[2];
__builtin_memmove((U+0),gp(0x8384dc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B553995:{NFSU2_TR(0x553995);
if(r1(R+518)){{goto L5539b5;}}
}
B553997:L553997:{c.instructions+=5;NFSU2_TR(0x553997);
__builtin_memmove((R+28),(R+0),4);
}
B553999:{NFSU2_TR(0x553999);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55399a:{NFSU2_TR(0x55399a);
__builtin_memmove((R+4),(R+28),4);
}
B55399c:{NFSU2_TR(0x55399c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55399f:{NFSU2_TR(0x55399f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5539a4ull));
TAIL_STATIC(0x542990u,542);
}
B5539a4:L5539a4:{c.instructions+=4;NFSU2_TR(0x5539a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5539a7:{NFSU2_TR(0x5539a7);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5539ac:{NFSU2_TR(0x5539ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5539ad:{NFSU2_TR(0x5539ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5539b2ull));
TAIL_STATIC(0x4954e0u,495);
}
B5539b2:L5539b2:{c.instructions+=1;NFSU2_TR(0x5539b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5539b5:L5539b5:{c.instructions+=3;NFSU2_TR(0x5539b5);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B5539ba:{NFSU2_TR(0x5539ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5539bc:{NFSU2_TR(0x5539bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5539c5;}}
}
B5539be:L5539be:{c.instructions+=2;NFSU2_TR(0x5539be);
w4(R+28,u32(0x1ull));
}
B5539c3:{NFSU2_TR(0x5539c3);
{goto L5539eb;}
}
B5539c5:L5539c5:{c.instructions+=2;NFSU2_TR(0x5539c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5539c8:{NFSU2_TR(0x5539c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5539d1;}}
}
B5539ca:L5539ca:{c.instructions+=2;NFSU2_TR(0x5539ca);
w4(R+28,u32(0x2ull));
}
B5539cf:{NFSU2_TR(0x5539cf);
{goto L5539eb;}
}
B5539d1:L5539d1:{c.instructions+=2;NFSU2_TR(0x5539d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5539d4:{NFSU2_TR(0x5539d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5539dd;}}
}
B5539d6:L5539d6:{c.instructions+=2;NFSU2_TR(0x5539d6);
w4(R+28,u32(0x4ull));
}
B5539db:{NFSU2_TR(0x5539db);
{goto L5539eb;}
}
B5539dd:L5539dd:{c.instructions+=6;NFSU2_TR(0x5539dd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5539df:{NFSU2_TR(0x5539df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5539e2:{NFSU2_TR(0x5539e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5539e5:{NFSU2_TR(0x5539e5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5539e6:{NFSU2_TR(0x5539e6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8ull))));
}
B5539e9:{NFSU2_TR(0x5539e9);
__builtin_memmove((R+28),(R+8),4);
}
B5539eb:L5539eb:{c.instructions+=3;NFSU2_TR(0x5539eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5539ee:{NFSU2_TR(0x5539ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5539ef:{NFSU2_TR(0x5539ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5539f4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5539f4:L5539f4:{c.instructions+=3;NFSU2_TR(0x5539f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5539f7:{NFSU2_TR(0x5539f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5539f9:{NFSU2_TR(0x5539f9);
if(r1(R+518)){{goto L553a07;}}
}
B5539fb:L5539fb:{c.instructions+=4;NFSU2_TR(0x5539fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5539fe:{NFSU2_TR(0x5539fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553a01:{NFSU2_TR(0x553a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553a04:{NFSU2_TR(0x553a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553a07:L553a07:{c.instructions+=9;NFSU2_TR(0x553a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553a0a:{NFSU2_TR(0x553a0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553a0d:{NFSU2_TR(0x553a0d);
__builtin_memmove((R+28),gp(0x83856c),4);
}
B553a13:{NFSU2_TR(0x553a13);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B553a16:{NFSU2_TR(0x553a16);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8382a0ull))));
}
B553a1c:{NFSU2_TR(0x553a1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a1d:{NFSU2_TR(0x553a1d);
u8 U[4];
w4(U+0,u32(0x6c6554eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a22:{NFSU2_TR(0x553a22);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a27:{NFSU2_TR(0x553a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a2cull));
TAIL_STATIC(0x4955c0u,495);
}
B553a2c:L553a2c:{c.instructions+=2;NFSU2_TR(0x553a2c);
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
B553a2f:{NFSU2_TR(0x553a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a34ull));
TAIL_STATIC(0x570a30u,570);
}
B553a34:L553a34:{c.instructions+=2;NFSU2_TR(0x553a34);
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
B553a37:{NFSU2_TR(0x553a37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553a41;}}
}
B553a39:L553a39:{c.instructions+=2;NFSU2_TR(0x553a39);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f70d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B553a3f:{NFSU2_TR(0x553a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553a67;}}
}
B553a41:L553a41:{c.instructions+=1;NFSU2_TR(0x553a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a46ull));
TAIL_STATIC(0x570a30u,570);
}
B553a46:L553a46:{c.instructions+=2;NFSU2_TR(0x553a46);
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
B553a49:{NFSU2_TR(0x553a49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553a53;}}
}
B553a4b:L553a4b:{c.instructions+=2;NFSU2_TR(0x553a4b);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f70d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B553a51:{NFSU2_TR(0x553a51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553a67;}}
}
B553a53:L553a53:{c.instructions+=1;NFSU2_TR(0x553a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a58ull));
TAIL_STATIC(0x570a30u,570);
}
B553a58:L553a58:{c.instructions+=2;NFSU2_TR(0x553a58);
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
B553a5b:{NFSU2_TR(0x553a5b);
if(r1(R+518)){{goto L553a67;}}
}
B553a5d:L553a5d:{c.instructions+=1;NFSU2_TR(0x553a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a62ull));
TAIL_STATIC(0x570a30u,570);
}
B553a62:L553a62:{c.instructions+=2;NFSU2_TR(0x553a62);
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
B553a65:{NFSU2_TR(0x553a65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553a75;}}
}
B553a67:L553a67:{c.instructions+=4;NFSU2_TR(0x553a67);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a6c:{NFSU2_TR(0x553a6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a6d:{NFSU2_TR(0x553a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553a70:{NFSU2_TR(0x553a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a75ull));
TAIL_STATIC(0x57daa0u,57d);
}
B553a75:L553a75:{c.instructions+=9;NFSU2_TR(0x553a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553a78:{NFSU2_TR(0x553a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553a79:{NFSU2_TR(0x553a79);
__builtin_memmove((R+0),(R+24),4);
}
B553a7b:{NFSU2_TR(0x553a7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553a7c:{NFSU2_TR(0x553a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B553a7d:{NFSU2_TR(0x553a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553a84:{NFSU2_TR(0x553a84);
__builtin_memmove((R+16),(R+20),4);
}
B553a86:{NFSU2_TR(0x553a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B553a87:{NFSU2_TR(0x553a87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553a90:L553a90:{c.instructions+=3;NFSU2_TR(0x553a90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553a91:{NFSU2_TR(0x553a91);
__builtin_memmove((R+24),(R+4),4);
}
B553a93:{NFSU2_TR(0x553a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553a98ull));
{goto L553ab0;}
}
B553a98:L553a98:{c.instructions+=2;NFSU2_TR(0x553a98);
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
B553a9d:{NFSU2_TR(0x553a9d);
if(r1(R+518)){{goto L553aa8;}}
}
B553a9f:L553a9f:{c.instructions+=2;NFSU2_TR(0x553a9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553aa0:{NFSU2_TR(0x553aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553aa5ull));
TAIL_STATIC(0x575630u,575);
}
B553aa5:L553aa5:{c.instructions+=1;NFSU2_TR(0x553aa5);
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
B553aa8:L553aa8:{c.instructions+=3;NFSU2_TR(0x553aa8);
__builtin_memmove((R+0),(R+24),4);
}
B553aaa:{NFSU2_TR(0x553aaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553aab:{NFSU2_TR(0x553aab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553ab0:L553ab0:{c.instructions+=13;NFSU2_TR(0x553ab0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ab2:{NFSU2_TR(0x553ab2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ab7:{NFSU2_TR(0x553ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553abd:{NFSU2_TR(0x553abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553abe:{NFSU2_TR(0x553abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553ac5:{NFSU2_TR(0x553ac5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ac6:{NFSU2_TR(0x553ac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ac7:{NFSU2_TR(0x553ac7);
__builtin_memmove((R+24),(R+4),4);
}
B553ac9:{NFSU2_TR(0x553ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553acd:{NFSU2_TR(0x553acd);
u8 U[4];
w4(U+0,u32(0x79cb44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553ad3:{NFSU2_TR(0x553ad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553ad6:{NFSU2_TR(0x553ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553ade:{NFSU2_TR(0x553ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ae3ull));
TAIL_STATIC(0x579dc0u,579);
}
B553ae3:L553ae3:{c.instructions+=6;NFSU2_TR(0x553ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553ae7:{NFSU2_TR(0x553ae7);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553aed:{NFSU2_TR(0x553aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553aee:{NFSU2_TR(0x553aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553af5:{NFSU2_TR(0x553af5);
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
B553af8:{NFSU2_TR(0x553af8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553b00:L553b00:{c.instructions+=9;NFSU2_TR(0x553b00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b02:{NFSU2_TR(0x553b02);
u8 U[4];
w4(U+0,u32(0x777e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b07:{NFSU2_TR(0x553b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553b0d:{NFSU2_TR(0x553b0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b0e:{NFSU2_TR(0x553b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b15:{NFSU2_TR(0x553b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b16:{NFSU2_TR(0x553b16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b17:{NFSU2_TR(0x553b17);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b19:{NFSU2_TR(0x553b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553b1eull));
TAIL_STATIC(0x575620u,575);
}
B553b1e:L553b1e:{c.instructions+=7;NFSU2_TR(0x553b1e);
__builtin_memmove((R+24),(R+0),4);
}
B553b20:{NFSU2_TR(0x553b20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553b23:{NFSU2_TR(0x553b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b27:{NFSU2_TR(0x553b27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553b29:{NFSU2_TR(0x553b29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553b2b:{NFSU2_TR(0x553b2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b2f:{NFSU2_TR(0x553b2f);
if(r1(R+518)){{goto L553b45;}}
}
B553b31:L553b31:{c.instructions+=4;NFSU2_TR(0x553b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553b35:{NFSU2_TR(0x553b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b36:{NFSU2_TR(0x553b36);
__builtin_memmove((R+4),(R+24),4);
}
B553b38:{NFSU2_TR(0x553b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553b3dull));
TAIL_STATIC(0x551de0u,551);
}
B553b3d:L553b3d:{c.instructions+=2;NFSU2_TR(0x553b3d);
u8 U[4];
w4(U+0,u32(0x79c948ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553b43:{NFSU2_TR(0x553b43);
__builtin_memmove((R+0),(R+24),4);
}
B553b45:L553b45:{c.instructions+=5;NFSU2_TR(0x553b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553b49:{NFSU2_TR(0x553b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553b4a:{NFSU2_TR(0x553b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b51:{NFSU2_TR(0x553b51);
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
B553b54:{NFSU2_TR(0x553b54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553b60:L553b60:{c.instructions+=12;NFSU2_TR(0x553b60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b62:{NFSU2_TR(0x553b62);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b67:{NFSU2_TR(0x553b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553b6d:{NFSU2_TR(0x553b6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b6e:{NFSU2_TR(0x553b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b75:{NFSU2_TR(0x553b75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b76:{NFSU2_TR(0x553b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553b7a:{NFSU2_TR(0x553b7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b7b:{NFSU2_TR(0x553b7b);
__builtin_memmove((R+24),(R+4),4);
}
B553b7d:{NFSU2_TR(0x553b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b7e:{NFSU2_TR(0x553b7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553b82:{NFSU2_TR(0x553b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553b87ull));
TAIL_STATIC(0x551de0u,551);
}
B553b87:L553b87:{c.instructions+=6;NFSU2_TR(0x553b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553b8a:{NFSU2_TR(0x553b8a);
u8 U[4];
w4(U+0,u32(0x79c70cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b8f:{NFSU2_TR(0x553b8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553b90:{NFSU2_TR(0x553b90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553b98:{NFSU2_TR(0x553b98);
u8 U[4];
w4(U+0,u32(0x79cb64ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553b9e:{NFSU2_TR(0x553b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ba3ull));
TAIL_STATIC(0x4954c0u,495);
}
B553ba3:L553ba3:{c.instructions+=7;NFSU2_TR(0x553ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553ba7:{NFSU2_TR(0x553ba7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B553baa:{NFSU2_TR(0x553baa);
__builtin_memmove((R+0),(R+24),4);
}
B553bac:{NFSU2_TR(0x553bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553bad:{NFSU2_TR(0x553bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553bb4:{NFSU2_TR(0x553bb4);
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
B553bb7:{NFSU2_TR(0x553bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553bc0:L553bc0:{c.instructions+=3;NFSU2_TR(0x553bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bc1:{NFSU2_TR(0x553bc1);
__builtin_memmove((R+24),(R+4),4);
}
B553bc3:{NFSU2_TR(0x553bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553bc8ull));
TAIL_STATIC(0x510d40u,510);
}
B553bc8:L553bc8:{c.instructions+=2;NFSU2_TR(0x553bc8);
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
B553bcd:{NFSU2_TR(0x553bcd);
if(r1(R+518)){{goto L553bd8;}}
}
B553bcf:L553bcf:{c.instructions+=2;NFSU2_TR(0x553bcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bd0:{NFSU2_TR(0x553bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553bd5ull));
TAIL_STATIC(0x575630u,575);
}
B553bd5:L553bd5:{c.instructions+=1;NFSU2_TR(0x553bd5);
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
B553bd8:L553bd8:{c.instructions+=3;NFSU2_TR(0x553bd8);
__builtin_memmove((R+0),(R+24),4);
}
B553bda:{NFSU2_TR(0x553bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553bdb:{NFSU2_TR(0x553bdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553be0:L553be0:{c.instructions+=14;NFSU2_TR(0x553be0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553be2:{NFSU2_TR(0x553be2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553be7:{NFSU2_TR(0x553be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553bed:{NFSU2_TR(0x553bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bee:{NFSU2_TR(0x553bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553bf5:{NFSU2_TR(0x553bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bf6:{NFSU2_TR(0x553bf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bf7:{NFSU2_TR(0x553bf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bf8:{NFSU2_TR(0x553bf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553bf9:{NFSU2_TR(0x553bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B553bfd:{NFSU2_TR(0x553bfd);
__builtin_memmove((R+24),(R+4),4);
}
B553bff:{NFSU2_TR(0x553bff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c00:{NFSU2_TR(0x553c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553c04:{NFSU2_TR(0x553c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553c09ull));
TAIL_STATIC(0x551de0u,551);
}
B553c09:L553c09:{c.instructions+=7;NFSU2_TR(0x553c09);
u8 U[4];
w4(U+0,u32(0x79ace8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B553c0f:{NFSU2_TR(0x553c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553c12:{NFSU2_TR(0x553c12);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B553c14:{NFSU2_TR(0x553c14);
w4(R+4,u32(0x832dacull));
}
B553c19:{NFSU2_TR(0x553c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553c1d:{NFSU2_TR(0x553c1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553c23:{NFSU2_TR(0x553c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553c28ull));
TAIL_STATIC(0x488ae0u,488);
}
B553c28:L553c28:{c.instructions+=8;NFSU2_TR(0x553c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553c2f:{NFSU2_TR(0x553c2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553c32:{NFSU2_TR(0x553c32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553c35:{NFSU2_TR(0x553c35);
__builtin_memmove((R+28),gp(0x8384d8),4);
}
B553c3b:{NFSU2_TR(0x553c3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c3c:{NFSU2_TR(0x553c3c);
__builtin_memmove((R+4),(R+28),4);
}
B553c3e:{NFSU2_TR(0x553c3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B553c41:{NFSU2_TR(0x553c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553c46ull));
TAIL_STATIC(0x542990u,542);
}
B553c46:L553c46:{c.instructions+=4;NFSU2_TR(0x553c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553c49:{NFSU2_TR(0x553c49);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c4e:{NFSU2_TR(0x553c4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c4f:{NFSU2_TR(0x553c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553c54ull));
TAIL_STATIC(0x4954e0u,495);
}
B553c54:L553c54:{c.instructions+=9;NFSU2_TR(0x553c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553c58:{NFSU2_TR(0x553c58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B553c5b:{NFSU2_TR(0x553c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B553c5c:{NFSU2_TR(0x553c5c);
__builtin_memmove((R+0),(R+24),4);
}
B553c5e:{NFSU2_TR(0x553c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B553c5f:{NFSU2_TR(0x553c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B553c60:{NFSU2_TR(0x553c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553c67:{NFSU2_TR(0x553c67);
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
B553c6a:{NFSU2_TR(0x553c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B553c70:L553c70:{c.instructions+=15;NFSU2_TR(0x553c70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c72:{NFSU2_TR(0x553c72);
u8 U[4];
w4(U+0,u32(0x777e2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c77:{NFSU2_TR(0x553c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553c7d:{NFSU2_TR(0x553c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c7e:{NFSU2_TR(0x553c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553c85:{NFSU2_TR(0x553c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B553c88:{NFSU2_TR(0x553c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553c8c:{NFSU2_TR(0x553c8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c8d:{NFSU2_TR(0x553c8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c8e:{NFSU2_TR(0x553c8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c8f:{NFSU2_TR(0x553c8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c90:{NFSU2_TR(0x553c90);
__builtin_memmove((R+12),(R+4),4);
}
B553c92:{NFSU2_TR(0x553c92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553c93:{NFSU2_TR(0x553c93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553c97:{NFSU2_TR(0x553c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553c9cull));
TAIL_STATIC(0x551de0u,551);
}
B553c9c:L553c9c:{c.instructions+=14;NFSU2_TR(0x553c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553c9f:{NFSU2_TR(0x553c9f);
w4(R+28,u32(0x1ull));
}
B553ca4:{NFSU2_TR(0x553ca4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ca5:{NFSU2_TR(0x553ca5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B553ca7:{NFSU2_TR(0x553ca7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ca8:{NFSU2_TR(0x553ca8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ca9:{NFSU2_TR(0x553ca9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553caa:{NFSU2_TR(0x553caa);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553caf:{NFSU2_TR(0x553caf);
u8 U[4];
w4(U+0,u32(0x797670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553cb4:{NFSU2_TR(0x553cb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553cb5:{NFSU2_TR(0x553cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B553cb8:{NFSU2_TR(0x553cb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553cbc:{NFSU2_TR(0x553cbc);
u8 U[4];
w4(U+0,u32(0x79cb74ull));
s4(u32(r4(R+12)),r4(U+0));
}
B553cc2:{NFSU2_TR(0x553cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553cc7ull));
TAIL_STATIC(0x542ca0u,542);
}
B553cc7:L553cc7:{c.instructions+=6;NFSU2_TR(0x553cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553cca:{NFSU2_TR(0x553cca);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553ccc:{NFSU2_TR(0x553ccc);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553cd1:{NFSU2_TR(0x553cd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553cd8:{NFSU2_TR(0x553cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553ce2:{NFSU2_TR(0x553ce2);
if(r1(R+518)){{goto L553d01;}}
}
B553ce4:L553ce4:{c.instructions+=2;NFSU2_TR(0x553ce4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ce5:{NFSU2_TR(0x553ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ceaull));
TAIL_STATIC(0x52cef0u,52c);
}
B553cea:L553cea:{c.instructions+=3;NFSU2_TR(0x553cea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553ced:{NFSU2_TR(0x553ced);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553cef:{NFSU2_TR(0x553cef);
if(r1(R+518)){{goto L553d01;}}
}
B553cf1:L553cf1:{c.instructions+=3;NFSU2_TR(0x553cf1);
u8 U[4];
w4(U+0,u32(0xca74a2faull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553cf6:{NFSU2_TR(0x553cf6);
__builtin_memmove((R+4),(R+0),4);
}
B553cf8:{NFSU2_TR(0x553cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553cfdull));
TAIL_STATIC(0x517f80u,517);
}
B553cfd:L553cfd:{c.instructions+=2;NFSU2_TR(0x553cfd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553cff:{NFSU2_TR(0x553cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553d1c;}}
}
B553d01:L553d01:{c.instructions+=3;NFSU2_TR(0x553d01);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553d06:{NFSU2_TR(0x553d06);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d08:{NFSU2_TR(0x553d08);
if(r1(R+518)){{goto L553d22;}}
}
B553d0a:L553d0a:{c.instructions+=4;NFSU2_TR(0x553d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553d0d:{NFSU2_TR(0x553d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d0e:{NFSU2_TR(0x553d0e);
u8 U[4];
w4(U+0,u32(0xca74a2faull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d13:{NFSU2_TR(0x553d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d18ull));
TAIL_STATIC(0x52c570u,52c);
}
B553d18:L553d18:{c.instructions+=2;NFSU2_TR(0x553d18);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d1a:{NFSU2_TR(0x553d1a);
if(r1(R+518)){{goto L553d22;}}
}
B553d1c:L553d1c:{c.instructions+=2;NFSU2_TR(0x553d1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553d20:{NFSU2_TR(0x553d20);
if(r1(R+518)){{goto L553d24;}}
}
B553d22:L553d22:{c.instructions+=1;NFSU2_TR(0x553d22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553d24:L553d24:{c.instructions+=4;NFSU2_TR(0x553d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553d27:{NFSU2_TR(0x553d27);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d29:{NFSU2_TR(0x553d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553d2f:{NFSU2_TR(0x553d2f);
if(r1(R+518)){{goto L553d4e;}}
}
B553d31:L553d31:{c.instructions+=2;NFSU2_TR(0x553d31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d32:{NFSU2_TR(0x553d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d37ull));
TAIL_STATIC(0x52cef0u,52c);
}
B553d37:L553d37:{c.instructions+=3;NFSU2_TR(0x553d37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553d3a:{NFSU2_TR(0x553d3a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d3c:{NFSU2_TR(0x553d3c);
if(r1(R+518)){{goto L553d4e;}}
}
B553d3e:L553d3e:{c.instructions+=3;NFSU2_TR(0x553d3e);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d43:{NFSU2_TR(0x553d43);
__builtin_memmove((R+4),(R+0),4);
}
B553d45:{NFSU2_TR(0x553d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d4aull));
TAIL_STATIC(0x517f80u,517);
}
B553d4a:L553d4a:{c.instructions+=2;NFSU2_TR(0x553d4a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d4c:{NFSU2_TR(0x553d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553d69;}}
}
B553d4e:L553d4e:{c.instructions+=3;NFSU2_TR(0x553d4e);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553d53:{NFSU2_TR(0x553d53);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d55:{NFSU2_TR(0x553d55);
if(r1(R+518)){{goto L553d6e;}}
}
B553d57:L553d57:{c.instructions+=4;NFSU2_TR(0x553d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553d5a:{NFSU2_TR(0x553d5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d5b:{NFSU2_TR(0x553d5b);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d60:{NFSU2_TR(0x553d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d65ull));
TAIL_STATIC(0x52c570u,52c);
}
B553d65:L553d65:{c.instructions+=2;NFSU2_TR(0x553d65);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d67:{NFSU2_TR(0x553d67);
if(r1(R+518)){{goto L553d6e;}}
}
B553d69:L553d69:{c.instructions+=2;NFSU2_TR(0x553d69);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553d6c:{NFSU2_TR(0x553d6c);
if(r1(R+518)){{goto L553d70;}}
}
B553d6e:L553d6e:{c.instructions+=1;NFSU2_TR(0x553d6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553d70:L553d70:{c.instructions+=4;NFSU2_TR(0x553d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553d73:{NFSU2_TR(0x553d73);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d75:{NFSU2_TR(0x553d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553d7b:{NFSU2_TR(0x553d7b);
if(r1(R+518)){{goto L553d9a;}}
}
B553d7d:L553d7d:{c.instructions+=2;NFSU2_TR(0x553d7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d7e:{NFSU2_TR(0x553d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d83ull));
TAIL_STATIC(0x52cef0u,52c);
}
B553d83:L553d83:{c.instructions+=3;NFSU2_TR(0x553d83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553d86:{NFSU2_TR(0x553d86);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d88:{NFSU2_TR(0x553d88);
if(r1(R+518)){{goto L553d9a;}}
}
B553d8a:L553d8a:{c.instructions+=3;NFSU2_TR(0x553d8a);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553d8f:{NFSU2_TR(0x553d8f);
__builtin_memmove((R+4),(R+0),4);
}
B553d91:{NFSU2_TR(0x553d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553d96ull));
TAIL_STATIC(0x517f80u,517);
}
B553d96:L553d96:{c.instructions+=2;NFSU2_TR(0x553d96);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553d98:{NFSU2_TR(0x553d98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553db5;}}
}
B553d9a:L553d9a:{c.instructions+=3;NFSU2_TR(0x553d9a);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553d9f:{NFSU2_TR(0x553d9f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553da1:{NFSU2_TR(0x553da1);
if(r1(R+518)){{goto L553dba;}}
}
B553da3:L553da3:{c.instructions+=4;NFSU2_TR(0x553da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553da6:{NFSU2_TR(0x553da6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553da7:{NFSU2_TR(0x553da7);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553dac:{NFSU2_TR(0x553dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553db1ull));
TAIL_STATIC(0x52c570u,52c);
}
B553db1:L553db1:{c.instructions+=2;NFSU2_TR(0x553db1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553db3:{NFSU2_TR(0x553db3);
if(r1(R+518)){{goto L553dba;}}
}
B553db5:L553db5:{c.instructions+=2;NFSU2_TR(0x553db5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553db8:{NFSU2_TR(0x553db8);
if(r1(R+518)){{goto L553dbc;}}
}
B553dba:L553dba:{c.instructions+=1;NFSU2_TR(0x553dba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553dbc:L553dbc:{c.instructions+=4;NFSU2_TR(0x553dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553dbf:{NFSU2_TR(0x553dbf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553dc1:{NFSU2_TR(0x553dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553dc7:{NFSU2_TR(0x553dc7);
if(r1(R+518)){{goto L553de6;}}
}
B553dc9:L553dc9:{c.instructions+=2;NFSU2_TR(0x553dc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553dca:{NFSU2_TR(0x553dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553dcfull));
TAIL_STATIC(0x52cef0u,52c);
}
B553dcf:L553dcf:{c.instructions+=3;NFSU2_TR(0x553dcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553dd2:{NFSU2_TR(0x553dd2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553dd4:{NFSU2_TR(0x553dd4);
if(r1(R+518)){{goto L553de6;}}
}
B553dd6:L553dd6:{c.instructions+=3;NFSU2_TR(0x553dd6);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ddb:{NFSU2_TR(0x553ddb);
__builtin_memmove((R+4),(R+0),4);
}
B553ddd:{NFSU2_TR(0x553ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553de2ull));
TAIL_STATIC(0x517f80u,517);
}
B553de2:L553de2:{c.instructions+=2;NFSU2_TR(0x553de2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553de4:{NFSU2_TR(0x553de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553e01;}}
}
B553de6:L553de6:{c.instructions+=3;NFSU2_TR(0x553de6);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553deb:{NFSU2_TR(0x553deb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553ded:{NFSU2_TR(0x553ded);
if(r1(R+518)){{goto L553e06;}}
}
B553def:L553def:{c.instructions+=4;NFSU2_TR(0x553def);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553df2:{NFSU2_TR(0x553df2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553df3:{NFSU2_TR(0x553df3);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553df8:{NFSU2_TR(0x553df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553dfdull));
TAIL_STATIC(0x52c570u,52c);
}
B553dfd:L553dfd:{c.instructions+=2;NFSU2_TR(0x553dfd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553dff:{NFSU2_TR(0x553dff);
if(r1(R+518)){{goto L553e06;}}
}
B553e01:L553e01:{c.instructions+=2;NFSU2_TR(0x553e01);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553e04:{NFSU2_TR(0x553e04);
if(r1(R+518)){{goto L553e08;}}
}
B553e06:L553e06:{c.instructions+=1;NFSU2_TR(0x553e06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553e08:L553e08:{c.instructions+=4;NFSU2_TR(0x553e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553e0b:{NFSU2_TR(0x553e0b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e0d:{NFSU2_TR(0x553e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553e13:{NFSU2_TR(0x553e13);
if(r1(R+518)){{goto L553e32;}}
}
B553e15:L553e15:{c.instructions+=2;NFSU2_TR(0x553e15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553e16:{NFSU2_TR(0x553e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553e1bull));
TAIL_STATIC(0x52cef0u,52c);
}
B553e1b:L553e1b:{c.instructions+=3;NFSU2_TR(0x553e1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553e1e:{NFSU2_TR(0x553e1e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e20:{NFSU2_TR(0x553e20);
if(r1(R+518)){{goto L553e32;}}
}
B553e22:L553e22:{c.instructions+=3;NFSU2_TR(0x553e22);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553e27:{NFSU2_TR(0x553e27);
__builtin_memmove((R+4),(R+0),4);
}
B553e29:{NFSU2_TR(0x553e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553e2eull));
TAIL_STATIC(0x517f80u,517);
}
B553e2e:L553e2e:{c.instructions+=2;NFSU2_TR(0x553e2e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e30:{NFSU2_TR(0x553e30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553e4d;}}
}
B553e32:L553e32:{c.instructions+=3;NFSU2_TR(0x553e32);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553e37:{NFSU2_TR(0x553e37);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e39:{NFSU2_TR(0x553e39);
if(r1(R+518)){{goto L553e52;}}
}
B553e3b:L553e3b:{c.instructions+=4;NFSU2_TR(0x553e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553e3e:{NFSU2_TR(0x553e3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553e3f:{NFSU2_TR(0x553e3f);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553e44:{NFSU2_TR(0x553e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553e49ull));
TAIL_STATIC(0x52c570u,52c);
}
B553e49:L553e49:{c.instructions+=2;NFSU2_TR(0x553e49);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e4b:{NFSU2_TR(0x553e4b);
if(r1(R+518)){{goto L553e52;}}
}
B553e4d:L553e4d:{c.instructions+=2;NFSU2_TR(0x553e4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553e50:{NFSU2_TR(0x553e50);
if(r1(R+518)){{goto L553e54;}}
}
B553e52:L553e52:{c.instructions+=1;NFSU2_TR(0x553e52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B553e54:L553e54:{c.instructions+=3;NFSU2_TR(0x553e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553e5a:{NFSU2_TR(0x553e5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553e60:{NFSU2_TR(0x553e60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5540bfu,554);}
}
B553e66:L553e66:{c.instructions+=9;NFSU2_TR(0x553e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553e6a:{NFSU2_TR(0x553e6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x114ull))));
}
B553e70:{NFSU2_TR(0x553e70);
w4(R+12,u32(0x7bcd6704ull));
}
B553e75:{NFSU2_TR(0x553e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553e79:{NFSU2_TR(0x553e79);
__builtin_memmove((R+16),(R+16),4);
}
B553e80:{NFSU2_TR(0x553e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553e84:{NFSU2_TR(0x553e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553e87:{NFSU2_TR(0x553e87);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e89:{NFSU2_TR(0x553e89);
if(r1(R+518)){{goto L553ed8;}}
}
B553e8b:L553e8b:{c.instructions+=2;NFSU2_TR(0x553e8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553e8c:{NFSU2_TR(0x553e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553e91ull));
TAIL_STATIC(0x52cef0u,52c);
}
B553e91:L553e91:{c.instructions+=3;NFSU2_TR(0x553e91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553e94:{NFSU2_TR(0x553e94);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553e96:{NFSU2_TR(0x553e96);
if(r1(R+518)){{goto L553ed8;}}
}
B553e98:L553e98:{c.instructions+=9;NFSU2_TR(0x553e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B553ea0:{NFSU2_TR(0x553ea0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4980f77ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553ea6:{NFSU2_TR(0x553ea6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B553eaa:{NFSU2_TR(0x553eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553eae:{NFSU2_TR(0x553eae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553eaf:{NFSU2_TR(0x553eaf);
__builtin_memmove((R+4),(R+0),4);
}
B553eb1:{NFSU2_TR(0x553eb1);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553eb6:{NFSU2_TR(0x553eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553eba:{NFSU2_TR(0x553eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ebfull));
TAIL_STATIC(0x504880u,504);
}
B553ebf:L553ebf:{c.instructions+=5;NFSU2_TR(0x553ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553ec3:{NFSU2_TR(0x553ec3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553ec5:{NFSU2_TR(0x553ec5);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B553eca:{NFSU2_TR(0x553eca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B553ed2:{NFSU2_TR(0x553ed2);
if(r1(R+518)){{goto L553ed8;}}
}
B553ed4:L553ed4:{c.instructions+=2;NFSU2_TR(0x553ed4);
__builtin_memmove((R+28),(R+0),4);
}
B553ed6:{NFSU2_TR(0x553ed6);
{goto L553ef7;}
}
B553ed8:L553ed8:{c.instructions+=3;NFSU2_TR(0x553ed8);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553edd:{NFSU2_TR(0x553edd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553edf:{NFSU2_TR(0x553edf);
if(r1(R+518)){{goto L553ef5;}}
}
B553ee1:L553ee1:{c.instructions+=5;NFSU2_TR(0x553ee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ee2:{NFSU2_TR(0x553ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4980f77ull))));
__builtin_memmove((R+4),(U+0),4);
}
B553ee8:{NFSU2_TR(0x553ee8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553ee9:{NFSU2_TR(0x553ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553eec:{NFSU2_TR(0x553eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ef1ull));
TAIL_STATIC(0x52c570u,52c);
}
B553ef1:L553ef1:{c.instructions+=2;NFSU2_TR(0x553ef1);
__builtin_memmove((R+28),(R+0),4);
}
B553ef3:{NFSU2_TR(0x553ef3);
{goto L553ef7;}
}
B553ef5:L553ef5:{c.instructions+=1;NFSU2_TR(0x553ef5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B553ef7:L553ef7:{c.instructions+=4;NFSU2_TR(0x553ef7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553ef9:{NFSU2_TR(0x553ef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B553efd:{NFSU2_TR(0x553efd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B553eff:{NFSU2_TR(0x553eff);
if(r1(R+518)){{goto L553f5b;}}
}
B553f01:L553f01:{c.instructions+=4;NFSU2_TR(0x553f01);
w4(R+8,u32(0x790ac8ull));
}
B553f06:{NFSU2_TR(0x553f06);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B553f09:{NFSU2_TR(0x553f09);
w1(R+0,u8(0x73ull));
}
B553f0b:{NFSU2_TR(0x553f0b);
{goto L553f10;}
}
B553f10:L553f10:{c.instructions+=3;NFSU2_TR(0x553f10);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B553f13:{NFSU2_TR(0x553f13);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B553f15:{NFSU2_TR(0x553f15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L553f1d;}}
}
B553f17:L553f17:{c.instructions+=2;NFSU2_TR(0x553f17);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B553f19:{NFSU2_TR(0x553f19);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L553f1d;}}
}
B553f1b:L553f1b:{c.instructions+=1;NFSU2_TR(0x553f1b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B553f1d:L553f1d:{c.instructions+=6;NFSU2_TR(0x553f1d);
w4(R+0,u32(r1(R+0)));
}
B553f20:{NFSU2_TR(0x553f20);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B553f22:{NFSU2_TR(0x553f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B553f25:{NFSU2_TR(0x553f25);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B553f26:{NFSU2_TR(0x553f26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B553f28:{NFSU2_TR(0x553f28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553f10u);}goto L553f10;}}
}
B553f2a:L553f2a:{c.instructions+=3;NFSU2_TR(0x553f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553f2d:{NFSU2_TR(0x553f2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f2f:{NFSU2_TR(0x553f2f);
if(r1(R+518)){{goto L553f5b;}}
}
B553f31:L553f31:{c.instructions+=2;NFSU2_TR(0x553f31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553f34:{NFSU2_TR(0x553f34);
if(r1(R+518)){{goto L553f3f;}}
}
B553f36:L553f36:{c.instructions+=3;NFSU2_TR(0x553f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553f39:{NFSU2_TR(0x553f39);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f3b:{NFSU2_TR(0x553f3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553f31u);}goto L553f31;}}
}
B553f3d:L553f3d:{c.instructions+=1;NFSU2_TR(0x553f3d);
{goto L553f5b;}
}
B553f3f:L553f3f:{c.instructions+=2;NFSU2_TR(0x553f3f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f41:{NFSU2_TR(0x553f41);
if(r1(R+518)){{goto L553f5b;}}
}
B553f43:L553f43:{c.instructions+=2;NFSU2_TR(0x553f43);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553f46:{NFSU2_TR(0x553f46);
if(r1(R+518)){{goto L553f58;}}
}
B553f48:L553f48:{c.instructions+=3;NFSU2_TR(0x553f48);
__builtin_memmove((R+4),(R+28),4);
}
B553f4a:{NFSU2_TR(0x553f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553f4d:{NFSU2_TR(0x553f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553f52ull));
TAIL_STATIC(0x517720u,517);
}
B553f52:L553f52:{c.instructions+=2;NFSU2_TR(0x553f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553f55:{NFSU2_TR(0x553f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553f58:L553f58:{c.instructions+=1;NFSU2_TR(0x553f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553f5b:L553f5b:{c.instructions+=3;NFSU2_TR(0x553f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x843298fcull))));
__builtin_memmove((R+8),(U+0),4);
}
B553f61:{NFSU2_TR(0x553f61);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B553f64:{NFSU2_TR(0x553f64);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x55409bu,554);}
}
B553f6a:L553f6a:{c.instructions+=4;NFSU2_TR(0x553f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B553f6e:{NFSU2_TR(0x553f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553f71:{NFSU2_TR(0x553f71);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f73:{NFSU2_TR(0x553f73);
if(r1(R+518)){{goto L553f8e;}}
}
B553f75:L553f75:{c.instructions+=2;NFSU2_TR(0x553f75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553f76:{NFSU2_TR(0x553f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553f7bull));
TAIL_STATIC(0x52cef0u,52c);
}
B553f7b:L553f7b:{c.instructions+=3;NFSU2_TR(0x553f7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B553f7e:{NFSU2_TR(0x553f7e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f80:{NFSU2_TR(0x553f80);
if(r1(R+518)){{goto L553f8e;}}
}
B553f82:L553f82:{c.instructions+=3;NFSU2_TR(0x553f82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553f83:{NFSU2_TR(0x553f83);
__builtin_memmove((R+4),(R+0),4);
}
B553f85:{NFSU2_TR(0x553f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553f8aull));
TAIL_STATIC(0x517f80u,517);
}
B553f8a:L553f8a:{c.instructions+=2;NFSU2_TR(0x553f8a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f8c:{NFSU2_TR(0x553f8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L553fa1;}}
}
B553f8e:L553f8e:{c.instructions+=3;NFSU2_TR(0x553f8e);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B553f93:{NFSU2_TR(0x553f93);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553f95:{NFSU2_TR(0x553f95);
if(r1(R+518)){{goto L553ffc;}}
}
B553f97:L553f97:{c.instructions+=4;NFSU2_TR(0x553f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553f9a:{NFSU2_TR(0x553f9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553f9b:{NFSU2_TR(0x553f9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B553f9c:{NFSU2_TR(0x553f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553fa1ull));
TAIL_STATIC(0x52c570u,52c);
}
B553fa1:L553fa1:{c.instructions+=3;NFSU2_TR(0x553fa1);
__builtin_memmove((R+28),(R+0),4);
}
B553fa3:{NFSU2_TR(0x553fa3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553fa5:{NFSU2_TR(0x553fa5);
if(r1(R+518)){{goto L553ffc;}}
}
B553fa7:L553fa7:{c.instructions+=3;NFSU2_TR(0x553fa7);
w4(R+8,u32(0x78f758ull));
}
B553fac:{NFSU2_TR(0x553fac);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B553faf:{NFSU2_TR(0x553faf);
w1(R+0,u8(0x53ull));
}
B553fb1:L553fb1:{c.instructions+=3;NFSU2_TR(0x553fb1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B553fb4:{NFSU2_TR(0x553fb4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B553fb6:{NFSU2_TR(0x553fb6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L553fbe;}}
}
B553fb8:L553fb8:{c.instructions+=2;NFSU2_TR(0x553fb8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B553fba:{NFSU2_TR(0x553fba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L553fbe;}}
}
B553fbc:L553fbc:{c.instructions+=1;NFSU2_TR(0x553fbc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B553fbe:L553fbe:{c.instructions+=6;NFSU2_TR(0x553fbe);
w4(R+0,u32(r1(R+0)));
}
B553fc1:{NFSU2_TR(0x553fc1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B553fc3:{NFSU2_TR(0x553fc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B553fc6:{NFSU2_TR(0x553fc6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B553fc7:{NFSU2_TR(0x553fc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B553fc9:{NFSU2_TR(0x553fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553fb1u);}goto L553fb1;}}
}
B553fcb:L553fcb:{c.instructions+=3;NFSU2_TR(0x553fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553fce:{NFSU2_TR(0x553fce);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553fd0:{NFSU2_TR(0x553fd0);
if(r1(R+518)){{goto L553ffc;}}
}
B553fd2:L553fd2:{c.instructions+=2;NFSU2_TR(0x553fd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553fd5:{NFSU2_TR(0x553fd5);
if(r1(R+518)){{goto L553fe0;}}
}
B553fd7:L553fd7:{c.instructions+=3;NFSU2_TR(0x553fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B553fda:{NFSU2_TR(0x553fda);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553fdc:{NFSU2_TR(0x553fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x553fd2u);}goto L553fd2;}}
}
B553fde:L553fde:{c.instructions+=1;NFSU2_TR(0x553fde);
{goto L553ffc;}
}
B553fe0:L553fe0:{c.instructions+=2;NFSU2_TR(0x553fe0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B553fe2:{NFSU2_TR(0x553fe2);
if(r1(R+518)){{goto L553ffc;}}
}
B553fe4:L553fe4:{c.instructions+=2;NFSU2_TR(0x553fe4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B553fe7:{NFSU2_TR(0x553fe7);
if(r1(R+518)){{goto L553ff9;}}
}
B553fe9:L553fe9:{c.instructions+=3;NFSU2_TR(0x553fe9);
__builtin_memmove((R+4),(R+28),4);
}
B553feb:{NFSU2_TR(0x553feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553fee:{NFSU2_TR(0x553fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x553ff3ull));
TAIL_STATIC(0x517720u,517);
}
B553ff3:L553ff3:{c.instructions+=2;NFSU2_TR(0x553ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B553ff6:{NFSU2_TR(0x553ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553ff9:L553ff9:{c.instructions+=1;NFSU2_TR(0x553ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B553ffc:L553ffc:{c.instructions+=1;NFSU2_TR(0x553ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x554000u,554);
}
XIT:NFSU2_TR_EXIT(0x553,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
