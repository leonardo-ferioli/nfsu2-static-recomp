#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x438,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x438,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_438(u8* __restrict R,Cpu& c);
u32 page_438(Cpu& c){return body_438(c.regs.data(),c);}
__attribute__((noinline)) u32 body_438(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x438003:goto L438003;
case 0x438004:c.instructions+=5;goto B438004;
case 0x438005:c.instructions+=4;goto B438005;
case 0x438006:c.instructions+=3;goto B438006;
case 0x438008:c.instructions+=2;goto B438008;
case 0x438009:c.instructions+=1;goto B438009;
case 0x43800c:goto L43800c;
case 0x438013:c.instructions+=8;goto B438013;
case 0x438014:c.instructions+=7;goto B438014;
case 0x438015:c.instructions+=6;goto B438015;
case 0x438017:c.instructions+=5;goto B438017;
case 0x43801e:c.instructions+=4;goto B43801e;
case 0x43801f:c.instructions+=3;goto B43801f;
case 0x438021:c.instructions+=2;goto B438021;
case 0x438022:c.instructions+=1;goto B438022;
case 0x438030:goto L438030;
case 0x438035:c.instructions+=4;goto B438035;
case 0x438037:c.instructions+=3;goto B438037;
case 0x438038:c.instructions+=2;goto B438038;
case 0x438039:c.instructions+=1;goto B438039;
case 0x43803b:goto L43803b;
case 0x43803e:c.instructions+=1;goto B43803e;
case 0x438040:goto L438040;
case 0x438042:goto L438042;
case 0x438047:c.instructions+=1;goto B438047;
case 0x43804c:goto L43804c;
case 0x43804e:c.instructions+=2;goto B43804e;
case 0x438050:c.instructions+=1;goto B438050;
case 0x438052:goto L438052;
case 0x438054:c.instructions+=1;goto B438054;
case 0x438059:goto L438059;
case 0x43805c:c.instructions+=2;goto B43805c;
case 0x43805e:c.instructions+=1;goto B43805e;
case 0x438060:goto L438060;
case 0x438063:c.instructions+=1;goto B438063;
case 0x438065:goto L438065;
case 0x438067:goto L438067;
case 0x438069:c.instructions+=1;goto B438069;
case 0x43806b:goto L43806b;
case 0x43806c:c.instructions+=2;goto B43806c;
case 0x43806d:c.instructions+=1;goto B43806d;
case 0x438070:goto L438070;
case 0x438072:c.instructions+=23;goto B438072;
case 0x438077:c.instructions+=22;goto B438077;
case 0x43807d:c.instructions+=21;goto B43807d;
case 0x43807e:c.instructions+=20;goto B43807e;
case 0x438085:c.instructions+=19;goto B438085;
case 0x438086:c.instructions+=18;goto B438086;
case 0x438087:c.instructions+=17;goto B438087;
case 0x438089:c.instructions+=16;goto B438089;
case 0x43808c:c.instructions+=15;goto B43808c;
case 0x438092:c.instructions+=14;goto B438092;
case 0x438093:c.instructions+=13;goto B438093;
case 0x438097:c.instructions+=12;goto B438097;
case 0x438099:c.instructions+=11;goto B438099;
case 0x43809c:c.instructions+=10;goto B43809c;
case 0x43809f:c.instructions+=9;goto B43809f;
case 0x4380a6:c.instructions+=8;goto B4380a6;
case 0x4380ae:c.instructions+=7;goto B4380ae;
case 0x4380b0:c.instructions+=6;goto B4380b0;
case 0x4380b3:c.instructions+=5;goto B4380b3;
case 0x4380b7:c.instructions+=4;goto B4380b7;
case 0x4380b8:c.instructions+=3;goto B4380b8;
case 0x4380bd:c.instructions+=2;goto B4380bd;
case 0x4380c2:c.instructions+=1;goto B4380c2;
case 0x4380c7:goto L4380c7;
case 0x4380cb:c.instructions+=10;goto B4380cb;
case 0x4380ce:c.instructions+=9;goto B4380ce;
case 0x4380d1:c.instructions+=8;goto B4380d1;
case 0x4380d4:c.instructions+=7;goto B4380d4;
case 0x4380db:c.instructions+=6;goto B4380db;
case 0x4380dc:c.instructions+=5;goto B4380dc;
case 0x4380de:c.instructions+=4;goto B4380de;
case 0x4380df:c.instructions+=3;goto B4380df;
case 0x4380e6:c.instructions+=2;goto B4380e6;
case 0x4380e9:c.instructions+=1;goto B4380e9;
case 0x4380f0:goto L4380f0;
case 0x4380f1:c.instructions+=7;goto B4380f1;
case 0x4380f2:c.instructions+=6;goto B4380f2;
case 0x4380f4:c.instructions+=5;goto B4380f4;
case 0x4380f5:c.instructions+=4;goto B4380f5;
case 0x4380f8:c.instructions+=3;goto B4380f8;
case 0x4380fb:c.instructions+=2;goto B4380fb;
case 0x4380fd:c.instructions+=1;goto B4380fd;
case 0x4380ff:goto L4380ff;
case 0x438100:goto L438100;
case 0x438103:c.instructions+=3;goto B438103;
case 0x438105:c.instructions+=2;goto B438105;
case 0x438107:c.instructions+=1;goto B438107;
case 0x43810a:goto L43810a;
case 0x43810c:c.instructions+=3;goto B43810c;
case 0x43810e:c.instructions+=2;goto B43810e;
case 0x438110:c.instructions+=1;goto B438110;
case 0x438112:goto L438112;
case 0x438115:c.instructions+=2;goto B438115;
case 0x438117:c.instructions+=1;goto B438117;
case 0x438119:goto L438119;
case 0x43811a:goto L43811a;
case 0x43811c:c.instructions+=1;goto B43811c;
case 0x43811e:goto L43811e;
case 0x438120:goto L438120;
case 0x438123:c.instructions+=6;goto B438123;
case 0x438125:c.instructions+=5;goto B438125;
case 0x438128:c.instructions+=4;goto B438128;
case 0x43812a:c.instructions+=3;goto B43812a;
case 0x43812b:c.instructions+=2;goto B43812b;
case 0x43812e:c.instructions+=1;goto B43812e;
case 0x438133:goto L438133;
case 0x438135:c.instructions+=3;goto B438135;
case 0x438138:c.instructions+=2;goto B438138;
case 0x43813a:c.instructions+=1;goto B43813a;
case 0x43813c:goto L43813c;
case 0x43813d:c.instructions+=3;goto B43813d;
case 0x43813e:c.instructions+=2;goto B43813e;
case 0x43813f:c.instructions+=1;goto B43813f;
case 0x438140:goto L438140;
case 0x438145:c.instructions+=4;goto B438145;
case 0x438147:c.instructions+=3;goto B438147;
case 0x438148:c.instructions+=2;goto B438148;
case 0x438149:c.instructions+=1;goto B438149;
case 0x43814b:goto L43814b;
case 0x43814e:c.instructions+=1;goto B43814e;
case 0x438150:goto L438150;
case 0x438152:goto L438152;
case 0x438157:c.instructions+=1;goto B438157;
case 0x43815c:goto L43815c;
case 0x43815e:c.instructions+=2;goto B43815e;
case 0x438160:c.instructions+=1;goto B438160;
case 0x438162:goto L438162;
case 0x438163:c.instructions+=1;goto B438163;
case 0x438167:goto L438167;
case 0x438169:c.instructions+=1;goto B438169;
case 0x43816b:goto L43816b;
case 0x43816e:c.instructions+=1;goto B43816e;
case 0x438170:goto L438170;
case 0x438173:c.instructions+=5;goto B438173;
case 0x438176:c.instructions+=4;goto B438176;
case 0x438178:c.instructions+=3;goto B438178;
case 0x43817b:c.instructions+=2;goto B43817b;
case 0x43817d:c.instructions+=1;goto B43817d;
case 0x438182:goto L438182;
case 0x438184:c.instructions+=1;goto B438184;
case 0x438186:goto L438186;
case 0x438188:c.instructions+=3;goto B438188;
case 0x43818a:c.instructions+=2;goto B43818a;
case 0x43818c:c.instructions+=1;goto B43818c;
case 0x43818e:goto L43818e;
case 0x438191:c.instructions+=2;goto B438191;
case 0x438193:c.instructions+=1;goto B438193;
case 0x438195:goto L438195;
case 0x438198:c.instructions+=1;goto B438198;
case 0x43819a:goto L43819a;
case 0x43819c:goto L43819c;
case 0x43819e:c.instructions+=1;goto B43819e;
case 0x4381a0:goto L4381a0;
case 0x4381a1:goto L4381a1;
case 0x4381a2:c.instructions+=2;goto B4381a2;
case 0x4381a3:c.instructions+=1;goto B4381a3;
case 0x4381b0:goto L4381b0;
case 0x4381b6:c.instructions+=9;goto B4381b6;
case 0x4381b8:c.instructions+=8;goto B4381b8;
case 0x4381bd:c.instructions+=7;goto B4381bd;
case 0x4381be:c.instructions+=6;goto B4381be;
case 0x4381c2:c.instructions+=5;goto B4381c2;
case 0x4381c9:c.instructions+=4;goto B4381c9;
case 0x4381cb:c.instructions+=3;goto B4381cb;
case 0x4381ce:c.instructions+=2;goto B4381ce;
case 0x4381d4:c.instructions+=1;goto B4381d4;
case 0x4381da:goto L4381da;
case 0x4381db:c.instructions+=7;goto B4381db;
case 0x4381dc:c.instructions+=6;goto B4381dc;
case 0x4381dd:c.instructions+=5;goto B4381dd;
case 0x4381de:c.instructions+=4;goto B4381de;
case 0x4381e1:c.instructions+=3;goto B4381e1;
case 0x4381e4:c.instructions+=2;goto B4381e4;
case 0x4381e8:c.instructions+=1;goto B4381e8;
case 0x4381ed:goto L4381ed;
case 0x4381ef:c.instructions+=2;goto B4381ef;
case 0x4381f1:c.instructions+=1;goto B4381f1;
case 0x4381f3:goto L4381f3;
case 0x4381f6:c.instructions+=1;goto B4381f6;
case 0x4381f8:goto L4381f8;
case 0x4381fa:goto L4381fa;
case 0x438200:c.instructions+=6;goto B438200;
case 0x438202:c.instructions+=5;goto B438202;
case 0x438207:c.instructions+=4;goto B438207;
case 0x438209:c.instructions+=3;goto B438209;
case 0x43820c:c.instructions+=2;goto B43820c;
case 0x438212:c.instructions+=1;goto B438212;
case 0x438217:goto L438217;
case 0x43821a:c.instructions+=4;goto B43821a;
case 0x43821e:c.instructions+=3;goto B43821e;
case 0x438220:c.instructions+=2;goto B438220;
case 0x438224:c.instructions+=1;goto B438224;
case 0x438226:goto L438226;
case 0x438229:c.instructions+=3;goto B438229;
case 0x43822a:c.instructions+=2;goto B43822a;
case 0x43822c:c.instructions+=1;goto B43822c;
case 0x438231:goto L438231;
case 0x438233:c.instructions+=2;goto B438233;
case 0x438237:c.instructions+=1;goto B438237;
case 0x438239:goto L438239;
case 0x43823d:c.instructions+=1;goto B43823d;
case 0x43823f:goto L43823f;
case 0x438241:c.instructions+=2;goto B438241;
case 0x438249:c.instructions+=1;goto B438249;
case 0x43824e:goto L43824e;
case 0x438250:c.instructions+=1;goto B438250;
case 0x438252:goto L438252;
case 0x438255:c.instructions+=1;goto B438255;
case 0x438257:goto L438257;
case 0x438259:goto L438259;
case 0x43825f:c.instructions+=8;goto B43825f;
case 0x438261:c.instructions+=7;goto B438261;
case 0x438266:c.instructions+=6;goto B438266;
case 0x438269:c.instructions+=5;goto B438269;
case 0x43826f:c.instructions+=4;goto B43826f;
case 0x438275:c.instructions+=3;goto B438275;
case 0x438278:c.instructions+=2;goto B438278;
case 0x43827e:c.instructions+=1;goto B43827e;
case 0x438280:goto L438280;
case 0x438286:c.instructions+=1;goto B438286;
case 0x438288:goto L438288;
case 0x43828e:c.instructions+=2;goto B43828e;
case 0x438292:c.instructions+=1;goto B438292;
case 0x438294:goto L438294;
case 0x438299:goto L438299;
case 0x43829e:c.instructions+=1;goto B43829e;
case 0x4382a0:goto L4382a0;
case 0x4382a4:c.instructions+=1;goto B4382a4;
case 0x4382a6:goto L4382a6;
case 0x4382a9:c.instructions+=2;goto B4382a9;
case 0x4382af:c.instructions+=1;goto B4382af;
case 0x4382b5:goto L4382b5;
case 0x4382bb:c.instructions+=1;goto B4382bb;
case 0x4382c1:goto L4382c1;
case 0x4382c7:c.instructions+=1;goto B4382c7;
case 0x4382cd:goto L4382cd;
case 0x4382d3:c.instructions+=1;goto B4382d3;
case 0x4382d9:goto L4382d9;
case 0x4382df:c.instructions+=1;goto B4382df;
case 0x4382e5:goto L4382e5;
case 0x4382eb:c.instructions+=1;goto B4382eb;
case 0x4382ed:goto L4382ed;
case 0x4382f3:c.instructions+=1;goto B4382f3;
case 0x4382f5:goto L4382f5;
case 0x4382fb:c.instructions+=1;goto B4382fb;
case 0x4382fd:goto L4382fd;
case 0x4382ff:c.instructions+=1;goto B4382ff;
case 0x438304:goto L438304;
case 0x438307:c.instructions+=2;goto B438307;
case 0x438309:c.instructions+=1;goto B438309;
case 0x43830b:goto L43830b;
case 0x43830e:c.instructions+=11;goto B43830e;
case 0x438311:c.instructions+=10;goto B438311;
case 0x438317:c.instructions+=9;goto B438317;
case 0x43831a:c.instructions+=8;goto B43831a;
case 0x43831d:c.instructions+=7;goto B43831d;
case 0x438320:c.instructions+=6;goto B438320;
case 0x438323:c.instructions+=5;goto B438323;
case 0x438326:c.instructions+=4;goto B438326;
case 0x438329:c.instructions+=3;goto B438329;
case 0x43832c:c.instructions+=2;goto B43832c;
case 0x43832e:c.instructions+=1;goto B43832e;
case 0x438330:goto L438330;
case 0x438332:goto L438332;
case 0x438335:c.instructions+=6;goto B438335;
case 0x438339:c.instructions+=5;goto B438339;
case 0x43833b:c.instructions+=4;goto B43833b;
case 0x43833c:c.instructions+=3;goto B43833c;
case 0x43833d:c.instructions+=2;goto B43833d;
case 0x43833f:c.instructions+=1;goto B43833f;
case 0x438342:goto L438342;
case 0x438345:c.instructions+=1;goto B438345;
case 0x43834a:goto L43834a;
case 0x43834c:c.instructions+=1;goto B43834c;
case 0x43834e:goto L43834e;
case 0x438351:c.instructions+=1;goto B438351;
case 0x438353:goto L438353;
case 0x438355:goto L438355;
case 0x438358:c.instructions+=5;goto B438358;
case 0x43835a:c.instructions+=4;goto B43835a;
case 0x43835d:c.instructions+=3;goto B43835d;
case 0x43835f:c.instructions+=2;goto B43835f;
case 0x438363:c.instructions+=1;goto B438363;
case 0x438366:goto L438366;
case 0x438369:c.instructions+=2;goto B438369;
case 0x43836f:c.instructions+=1;goto B43836f;
case 0x438375:goto L438375;
case 0x438376:c.instructions+=8;goto B438376;
case 0x438377:c.instructions+=7;goto B438377;
case 0x438378:c.instructions+=6;goto B438378;
case 0x43837d:c.instructions+=5;goto B43837d;
case 0x43837e:c.instructions+=4;goto B43837e;
case 0x438382:c.instructions+=3;goto B438382;
case 0x438389:c.instructions+=2;goto B438389;
case 0x43838c:c.instructions+=1;goto B43838c;
case 0x43838d:goto L43838d;
case 0x438391:c.instructions+=4;goto B438391;
case 0x438393:c.instructions+=3;goto B438393;
case 0x43839a:c.instructions+=2;goto B43839a;
case 0x43839d:c.instructions+=1;goto B43839d;
case 0x4383a0:goto L4383a0;
case 0x4383a2:c.instructions+=12;goto B4383a2;
case 0x4383a7:c.instructions+=11;goto B4383a7;
case 0x4383ad:c.instructions+=10;goto B4383ad;
case 0x4383ae:c.instructions+=9;goto B4383ae;
case 0x4383b5:c.instructions+=8;goto B4383b5;
case 0x4383b6:c.instructions+=7;goto B4383b6;
case 0x4383b7:c.instructions+=6;goto B4383b7;
case 0x4383b9:c.instructions+=5;goto B4383b9;
case 0x4383ba:c.instructions+=4;goto B4383ba;
case 0x4383be:c.instructions+=3;goto B4383be;
case 0x4383c0:c.instructions+=2;goto B4383c0;
case 0x4383c4:c.instructions+=1;goto B4383c4;
case 0x4383c9:goto L4383c9;
case 0x4383cc:c.instructions+=4;goto B4383cc;
case 0x4383ce:c.instructions+=3;goto B4383ce;
case 0x4383d6:c.instructions+=2;goto B4383d6;
case 0x4383d9:c.instructions+=1;goto B4383d9;
case 0x4383db:goto L4383db;
case 0x4383dc:c.instructions+=1;goto B4383dc;
case 0x4383e1:goto L4383e1;
case 0x4383e4:c.instructions+=1;goto B4383e4;
case 0x4383e7:goto L4383e7;
case 0x4383ea:c.instructions+=3;goto B4383ea;
case 0x4383ec:c.instructions+=2;goto B4383ec;
case 0x4383ef:c.instructions+=1;goto B4383ef;
case 0x4383f1:goto L4383f1;
case 0x4383f3:c.instructions+=2;goto B4383f3;
case 0x4383f4:c.instructions+=1;goto B4383f4;
case 0x4383fa:goto L4383fa;
case 0x4383fd:c.instructions+=1;goto B4383fd;
case 0x438400:goto L438400;
case 0x438404:c.instructions+=6;goto B438404;
case 0x438407:c.instructions+=5;goto B438407;
case 0x438408:c.instructions+=4;goto B438408;
case 0x438409:c.instructions+=3;goto B438409;
case 0x438410:c.instructions+=2;goto B438410;
case 0x438413:c.instructions+=1;goto B438413;
case 0x438420:goto L438420;
case 0x438425:c.instructions+=2;goto B438425;
case 0x438427:c.instructions+=1;goto B438427;
case 0x438429:goto L438429;
case 0x43842e:c.instructions+=2;goto B43842e;
case 0x438430:c.instructions+=1;goto B438430;
case 0x438432:goto L438432;
case 0x438435:c.instructions+=3;goto B438435;
case 0x438438:c.instructions+=2;goto B438438;
case 0x43843a:c.instructions+=1;goto B43843a;
case 0x43843c:goto L43843c;
case 0x438440:goto L438440;
case 0x438443:c.instructions+=1;goto B438443;
case 0x438445:goto L438445;
case 0x438447:c.instructions+=2;goto B438447;
case 0x438449:c.instructions+=1;goto B438449;
case 0x43844b:goto L43844b;
case 0x43844e:goto L43844e;
case 0x438450:c.instructions+=5;goto B438450;
case 0x438453:c.instructions+=4;goto B438453;
case 0x438455:c.instructions+=3;goto B438455;
case 0x438456:c.instructions+=2;goto B438456;
case 0x438459:c.instructions+=1;goto B438459;
case 0x43845e:goto L43845e;
case 0x438461:goto L438461;
case 0x438470:goto L438470;
case 0x438475:c.instructions+=2;goto B438475;
case 0x438477:c.instructions+=1;goto B438477;
case 0x438479:goto L438479;
case 0x43847e:c.instructions+=2;goto B43847e;
case 0x438480:c.instructions+=1;goto B438480;
case 0x438482:goto L438482;
case 0x438485:c.instructions+=3;goto B438485;
case 0x438488:c.instructions+=2;goto B438488;
case 0x43848a:c.instructions+=1;goto B43848a;
case 0x43848c:goto L43848c;
case 0x438490:goto L438490;
case 0x438493:c.instructions+=1;goto B438493;
case 0x438495:goto L438495;
case 0x438497:c.instructions+=2;goto B438497;
case 0x438499:c.instructions+=1;goto B438499;
case 0x43849b:goto L43849b;
case 0x43849e:goto L43849e;
case 0x4384a0:c.instructions+=5;goto B4384a0;
case 0x4384a3:c.instructions+=4;goto B4384a3;
case 0x4384a5:c.instructions+=3;goto B4384a5;
case 0x4384a6:c.instructions+=2;goto B4384a6;
case 0x4384a9:c.instructions+=1;goto B4384a9;
case 0x4384ae:goto L4384ae;
case 0x4384b1:goto L4384b1;
case 0x4384c0:goto L4384c0;
case 0x4384c5:c.instructions+=4;goto B4384c5;
case 0x4384c7:c.instructions+=3;goto B4384c7;
case 0x4384c8:c.instructions+=2;goto B4384c8;
case 0x4384ca:c.instructions+=1;goto B4384ca;
case 0x4384cc:goto L4384cc;
case 0x4384d1:c.instructions+=2;goto B4384d1;
case 0x4384d3:c.instructions+=1;goto B4384d3;
case 0x4384d5:goto L4384d5;
case 0x4384d8:c.instructions+=4;goto B4384d8;
case 0x4384d9:c.instructions+=3;goto B4384d9;
case 0x4384dc:c.instructions+=2;goto B4384dc;
case 0x4384de:c.instructions+=1;goto B4384de;
case 0x4384e0:goto L4384e0;
case 0x4384e3:c.instructions+=11;goto B4384e3;
case 0x4384e6:c.instructions+=10;goto B4384e6;
case 0x4384e8:c.instructions+=9;goto B4384e8;
case 0x4384ea:c.instructions+=8;goto B4384ea;
case 0x4384ed:c.instructions+=7;goto B4384ed;
case 0x4384f3:c.instructions+=6;goto B4384f3;
case 0x4384f4:c.instructions+=5;goto B4384f4;
case 0x4384f9:c.instructions+=4;goto B4384f9;
case 0x4384fa:c.instructions+=3;goto B4384fa;
case 0x4384fb:c.instructions+=2;goto B4384fb;
case 0x438501:c.instructions+=1;goto B438501;
case 0x438506:goto L438506;
case 0x438508:c.instructions+=3;goto B438508;
case 0x43850b:c.instructions+=2;goto B43850b;
case 0x43850d:c.instructions+=1;goto B43850d;
case 0x43850f:goto L43850f;
case 0x438510:goto L438510;
case 0x438511:c.instructions+=1;goto B438511;
case 0x438520:goto L438520;
case 0x438525:c.instructions+=4;goto B438525;
case 0x438527:c.instructions+=3;goto B438527;
case 0x438528:c.instructions+=2;goto B438528;
case 0x43852a:c.instructions+=1;goto B43852a;
case 0x43852c:goto L43852c;
case 0x438531:c.instructions+=2;goto B438531;
case 0x438533:c.instructions+=1;goto B438533;
case 0x438535:goto L438535;
case 0x438538:c.instructions+=5;goto B438538;
case 0x43853b:c.instructions+=4;goto B43853b;
case 0x43853d:c.instructions+=3;goto B43853d;
case 0x43853e:c.instructions+=2;goto B43853e;
case 0x438542:c.instructions+=1;goto B438542;
case 0x438544:goto L438544;
case 0x438547:c.instructions+=1;goto B438547;
case 0x438549:goto L438549;
case 0x43854b:c.instructions+=2;goto B43854b;
case 0x43854d:c.instructions+=1;goto B43854d;
case 0x43854f:goto L43854f;
case 0x438551:goto L438551;
case 0x438553:c.instructions+=10;goto B438553;
case 0x438556:c.instructions+=9;goto B438556;
case 0x438558:c.instructions+=8;goto B438558;
case 0x43855b:c.instructions+=7;goto B43855b;
case 0x438561:c.instructions+=6;goto B438561;
case 0x438562:c.instructions+=5;goto B438562;
case 0x438567:c.instructions+=4;goto B438567;
case 0x438568:c.instructions+=3;goto B438568;
case 0x438569:c.instructions+=2;goto B438569;
case 0x43856f:c.instructions+=1;goto B43856f;
case 0x438574:goto L438574;
case 0x438577:goto L438577;
case 0x43857a:c.instructions+=3;goto B43857a;
case 0x43857d:c.instructions+=2;goto B43857d;
case 0x43857f:c.instructions+=1;goto B43857f;
case 0x438581:goto L438581;
case 0x438584:c.instructions+=1;goto B438584;
case 0x438586:goto L438586;
case 0x438588:c.instructions+=2;goto B438588;
case 0x43858a:c.instructions+=1;goto B43858a;
case 0x43858c:goto L43858c;
case 0x43858d:c.instructions+=2;goto B43858d;
case 0x43858e:c.instructions+=1;goto B43858e;
case 0x438591:goto L438591;
case 0x438593:c.instructions+=5;goto B438593;
case 0x438596:c.instructions+=4;goto B438596;
case 0x438598:c.instructions+=3;goto B438598;
case 0x438599:c.instructions+=2;goto B438599;
case 0x43859c:c.instructions+=1;goto B43859c;
case 0x4385a1:goto L4385a1;
case 0x4385a4:goto L4385a4;
case 0x4385a5:goto L4385a5;
case 0x4385a6:c.instructions+=1;goto B4385a6;
case 0x4385b0:goto L4385b0;
case 0x4385b5:c.instructions+=4;goto B4385b5;
case 0x4385b7:c.instructions+=3;goto B4385b7;
case 0x4385b8:c.instructions+=2;goto B4385b8;
case 0x4385ba:c.instructions+=1;goto B4385ba;
case 0x4385c0:goto L4385c0;
case 0x4385c5:c.instructions+=2;goto B4385c5;
case 0x4385c7:c.instructions+=1;goto B4385c7;
case 0x4385cd:goto L4385cd;
case 0x4385d0:c.instructions+=2;goto B4385d0;
case 0x4385d2:c.instructions+=1;goto B4385d2;
case 0x4385d4:goto L4385d4;
case 0x4385d7:c.instructions+=2;goto B4385d7;
case 0x4385d9:c.instructions+=1;goto B4385d9;
case 0x4385db:goto L4385db;
case 0x4385de:c.instructions+=2;goto B4385de;
case 0x4385df:c.instructions+=1;goto B4385df;
case 0x4385e4:goto L4385e4;
case 0x4385e6:c.instructions+=5;goto B4385e6;
case 0x4385eb:c.instructions+=4;goto B4385eb;
case 0x4385f0:c.instructions+=3;goto B4385f0;
case 0x4385f2:c.instructions+=2;goto B4385f2;
case 0x4385f6:c.instructions+=1;goto B4385f6;
case 0x4385fb:goto L4385fb;
case 0x4385fd:c.instructions+=5;goto B4385fd;
case 0x438602:c.instructions+=4;goto B438602;
case 0x438604:c.instructions+=3;goto B438604;
case 0x438606:c.instructions+=2;goto B438606;
case 0x438608:c.instructions+=1;goto B438608;
case 0x43860d:goto L43860d;
case 0x43860f:c.instructions+=5;goto B43860f;
case 0x438614:c.instructions+=4;goto B438614;
case 0x438616:c.instructions+=3;goto B438616;
case 0x438618:c.instructions+=2;goto B438618;
case 0x43861b:c.instructions+=1;goto B43861b;
case 0x438620:goto L438620;
case 0x438622:c.instructions+=5;goto B438622;
case 0x438627:c.instructions+=4;goto B438627;
case 0x43862c:c.instructions+=3;goto B43862c;
case 0x43862e:c.instructions+=2;goto B43862e;
case 0x438631:c.instructions+=1;goto B438631;
case 0x438636:goto L438636;
case 0x438639:c.instructions+=6;goto B438639;
case 0x43863b:c.instructions+=5;goto B43863b;
case 0x438640:c.instructions+=4;goto B438640;
case 0x438642:c.instructions+=3;goto B438642;
case 0x438644:c.instructions+=2;goto B438644;
case 0x438647:c.instructions+=1;goto B438647;
case 0x43864c:goto L43864c;
case 0x43864f:c.instructions+=1;goto B43864f;
case 0x438652:goto L438652;
case 0x438653:c.instructions+=1;goto B438653;
case 0x438660:goto L438660;
case 0x438665:c.instructions+=6;goto B438665;
case 0x438666:c.instructions+=5;goto B438666;
case 0x438668:c.instructions+=4;goto B438668;
case 0x43866a:c.instructions+=3;goto B43866a;
case 0x43866b:c.instructions+=2;goto B43866b;
case 0x43866d:c.instructions+=1;goto B43866d;
case 0x438673:goto L438673;
case 0x438679:c.instructions+=1;goto B438679;
case 0x43867f:goto L43867f;
case 0x438683:c.instructions+=1;goto B438683;
case 0x438689:goto L438689;
case 0x43868c:c.instructions+=3;goto B43868c;
case 0x43868d:c.instructions+=2;goto B43868d;
case 0x438691:c.instructions+=1;goto B438691;
case 0x438696:goto L438696;
case 0x43869a:c.instructions+=3;goto B43869a;
case 0x43869d:c.instructions+=2;goto B43869d;
case 0x43869f:c.instructions+=1;goto B43869f;
case 0x4386a1:goto L4386a1;
case 0x4386a3:c.instructions+=1;goto B4386a3;
case 0x4386a8:goto L4386a8;
case 0x4386aa:c.instructions+=1;goto B4386aa;
case 0x4386af:goto L4386af;
case 0x4386b2:c.instructions+=2;goto B4386b2;
case 0x4386b4:c.instructions+=1;goto B4386b4;
case 0x4386b6:goto L4386b6;
case 0x4386b7:c.instructions+=1;goto B4386b7;
case 0x4386bc:goto L4386bc;
case 0x4386bf:c.instructions+=1;goto B4386bf;
case 0x4386c2:goto L4386c2;
case 0x4386c4:c.instructions+=2;goto B4386c4;
case 0x4386c6:c.instructions+=1;goto B4386c6;
case 0x4386c8:goto L4386c8;
case 0x4386c9:c.instructions+=1;goto B4386c9;
case 0x4386ce:goto L4386ce;
case 0x4386d1:c.instructions+=1;goto B4386d1;
case 0x4386d3:goto L4386d3;
case 0x4386d6:c.instructions+=2;goto B4386d6;
case 0x4386d8:c.instructions+=1;goto B4386d8;
case 0x4386da:goto L4386da;
case 0x4386db:c.instructions+=1;goto B4386db;
case 0x4386e0:goto L4386e0;
case 0x4386e3:c.instructions+=1;goto B4386e3;
case 0x4386e6:goto L4386e6;
case 0x4386e9:c.instructions+=2;goto B4386e9;
case 0x4386eb:c.instructions+=1;goto B4386eb;
case 0x4386ed:goto L4386ed;
case 0x4386ee:c.instructions+=1;goto B4386ee;
case 0x4386f3:goto L4386f3;
case 0x4386f6:c.instructions+=1;goto B4386f6;
case 0x4386f9:goto L4386f9;
case 0x4386fc:c.instructions+=2;goto B4386fc;
case 0x4386fe:c.instructions+=1;goto B4386fe;
case 0x438700:goto L438700;
case 0x438701:c.instructions+=1;goto B438701;
case 0x438706:goto L438706;
case 0x438709:c.instructions+=1;goto B438709;
case 0x43870c:goto L43870c;
case 0x43870f:c.instructions+=1;goto B43870f;
case 0x438712:goto L438712;
case 0x438713:c.instructions+=2;goto B438713;
case 0x438714:c.instructions+=1;goto B438714;
case 0x438720:goto L438720;
case 0x438724:c.instructions+=2;goto B438724;
case 0x43872a:c.instructions+=1;goto B43872a;
case 0x43872c:goto L43872c;
case 0x438732:c.instructions+=2;goto B438732;
case 0x438734:c.instructions+=1;goto B438734;
case 0x438736:goto L438736;
case 0x43873c:c.instructions+=2;goto B43873c;
case 0x43873e:c.instructions+=1;goto B43873e;
case 0x438740:goto L438740;
case 0x438743:c.instructions+=4;goto B438743;
case 0x438746:c.instructions+=3;goto B438746;
case 0x438747:c.instructions+=2;goto B438747;
case 0x43874c:c.instructions+=1;goto B43874c;
case 0x438751:goto L438751;
case 0x438756:c.instructions+=1;goto B438756;
case 0x438757:goto L438757;
case 0x438759:c.instructions+=1;goto B438759;
case 0x438760:goto L438760;
case 0x438761:c.instructions+=7;goto B438761;
case 0x438762:c.instructions+=6;goto B438762;
case 0x438763:c.instructions+=5;goto B438763;
case 0x438765:c.instructions+=4;goto B438765;
case 0x438768:c.instructions+=3;goto B438768;
case 0x43876a:c.instructions+=2;goto B43876a;
case 0x43876c:c.instructions+=1;goto B43876c;
case 0x43876e:goto L43876e;
case 0x43876f:c.instructions+=2;goto B43876f;
case 0x438774:c.instructions+=1;goto B438774;
case 0x438779:goto L438779;
case 0x43877b:c.instructions+=1;goto B43877b;
case 0x43877d:goto L43877d;
case 0x438780:c.instructions+=2;goto B438780;
case 0x438782:c.instructions+=1;goto B438782;
case 0x438784:goto L438784;
case 0x438787:c.instructions+=1;goto B438787;
case 0x438789:goto L438789;
case 0x43878a:c.instructions+=2;goto B43878a;
case 0x43878f:c.instructions+=1;goto B43878f;
case 0x438794:goto L438794;
case 0x438796:c.instructions+=1;goto B438796;
case 0x438798:goto L438798;
case 0x43879a:c.instructions+=2;goto B43879a;
case 0x43879c:c.instructions+=1;goto B43879c;
case 0x4387a1:goto L4387a1;
case 0x4387a3:c.instructions+=1;goto B4387a3;
case 0x4387a5:goto L4387a5;
case 0x4387a8:c.instructions+=4;goto B4387a8;
case 0x4387aa:c.instructions+=3;goto B4387aa;
case 0x4387ad:c.instructions+=2;goto B4387ad;
case 0x4387af:c.instructions+=1;goto B4387af;
case 0x4387b1:goto L4387b1;
case 0x4387b6:c.instructions+=4;goto B4387b6;
case 0x4387b7:c.instructions+=3;goto B4387b7;
case 0x4387b8:c.instructions+=2;goto B4387b8;
case 0x4387bd:c.instructions+=1;goto B4387bd;
case 0x4387c2:goto L4387c2;
case 0x4387c4:c.instructions+=1;goto B4387c4;
case 0x4387c6:goto L4387c6;
case 0x4387c8:c.instructions+=2;goto B4387c8;
case 0x4387ca:c.instructions+=1;goto B4387ca;
case 0x4387cf:goto L4387cf;
case 0x4387d0:c.instructions+=4;goto B4387d0;
case 0x4387d1:c.instructions+=3;goto B4387d1;
case 0x4387d3:c.instructions+=2;goto B4387d3;
case 0x4387d4:c.instructions+=1;goto B4387d4;
case 0x4387d5:goto L4387d5;
case 0x4387d6:c.instructions+=4;goto B4387d6;
case 0x4387d7:c.instructions+=3;goto B4387d7;
case 0x4387d9:c.instructions+=2;goto B4387d9;
case 0x4387da:c.instructions+=1;goto B4387da;
case 0x4387e0:goto L4387e0;
case 0x4387e1:c.instructions+=2;goto B4387e1;
case 0x4387e3:c.instructions+=1;goto B4387e3;
case 0x4387e8:goto L4387e8;
case 0x4387ed:c.instructions+=1;goto B4387ed;
case 0x4387ef:goto L4387ef;
case 0x4387f5:c.instructions+=4;goto B4387f5;
case 0x4387fa:c.instructions+=3;goto B4387fa;
case 0x4387fb:c.instructions+=2;goto B4387fb;
case 0x4387fc:c.instructions+=1;goto B4387fc;
case 0x438801:goto L438801;
case 0x438804:goto L438804;
case 0x438806:c.instructions+=2;goto B438806;
case 0x438807:c.instructions+=1;goto B438807;
case 0x438810:goto L438810;
case 0x438812:c.instructions+=11;goto B438812;
case 0x438817:c.instructions+=10;goto B438817;
case 0x43881d:c.instructions+=9;goto B43881d;
case 0x43881e:c.instructions+=8;goto B43881e;
case 0x438825:c.instructions+=7;goto B438825;
case 0x438826:c.instructions+=6;goto B438826;
case 0x438827:c.instructions+=5;goto B438827;
case 0x438829:c.instructions+=4;goto B438829;
case 0x43882d:c.instructions+=3;goto B43882d;
case 0x438833:c.instructions+=2;goto B438833;
case 0x43883b:c.instructions+=1;goto B43883b;
case 0x438840:goto L438840;
case 0x438844:c.instructions+=5;goto B438844;
case 0x43884a:c.instructions+=4;goto B43884a;
case 0x43884b:c.instructions+=3;goto B43884b;
case 0x438852:c.instructions+=2;goto B438852;
case 0x438855:c.instructions+=1;goto B438855;
case 0x438860:goto L438860;
case 0x438862:c.instructions+=12;goto B438862;
case 0x438868:c.instructions+=11;goto B438868;
case 0x43886d:c.instructions+=10;goto B43886d;
case 0x43886e:c.instructions+=9;goto B43886e;
case 0x438875:c.instructions+=8;goto B438875;
case 0x438878:c.instructions+=7;goto B438878;
case 0x438879:c.instructions+=6;goto B438879;
case 0x43887a:c.instructions+=5;goto B43887a;
case 0x43887b:c.instructions+=4;goto B43887b;
case 0x43887d:c.instructions+=3;goto B43887d;
case 0x43887f:c.instructions+=2;goto B43887f;
case 0x438880:c.instructions+=1;goto B438880;
case 0x438883:goto L438883;
case 0x438887:c.instructions+=10;goto B438887;
case 0x43888a:c.instructions+=9;goto B43888a;
case 0x43888c:c.instructions+=8;goto B43888c;
case 0x43888f:c.instructions+=7;goto B43888f;
case 0x438892:c.instructions+=6;goto B438892;
case 0x438895:c.instructions+=5;goto B438895;
case 0x438898:c.instructions+=4;goto B438898;
case 0x43889a:c.instructions+=3;goto B43889a;
case 0x43889b:c.instructions+=2;goto B43889b;
case 0x43889e:c.instructions+=1;goto B43889e;
case 0x4388a3:goto L4388a3;
case 0x4388a7:c.instructions+=5;goto B4388a7;
case 0x4388aa:c.instructions+=4;goto B4388aa;
case 0x4388ab:c.instructions+=3;goto B4388ab;
case 0x4388ad:c.instructions+=2;goto B4388ad;
case 0x4388b0:c.instructions+=1;goto B4388b0;
case 0x4388b5:goto L4388b5;
case 0x4388b8:c.instructions+=8;goto B4388b8;
case 0x4388bb:c.instructions+=7;goto B4388bb;
case 0x4388c1:c.instructions+=6;goto B4388c1;
case 0x4388c4:c.instructions+=5;goto B4388c4;
case 0x4388c7:c.instructions+=4;goto B4388c7;
case 0x4388ca:c.instructions+=3;goto B4388ca;
case 0x4388cb:c.instructions+=2;goto B4388cb;
case 0x4388cc:c.instructions+=1;goto B4388cc;
case 0x4388d1:goto L4388d1;
case 0x4388d7:c.instructions+=3;goto B4388d7;
case 0x4388da:c.instructions+=2;goto B4388da;
case 0x4388dc:c.instructions+=1;goto B4388dc;
case 0x4388de:goto L4388de;
case 0x4388e0:c.instructions+=1;goto B4388e0;
case 0x4388e5:goto L4388e5;
case 0x4388e8:c.instructions+=2;goto B4388e8;
case 0x4388ea:c.instructions+=1;goto B4388ea;
case 0x4388ec:goto L4388ec;
case 0x4388ef:c.instructions+=2;goto B4388ef;
case 0x4388f2:c.instructions+=1;goto B4388f2;
case 0x4388f4:goto L4388f4;
case 0x4388fa:c.instructions+=8;goto B4388fa;
case 0x4388fd:c.instructions+=7;goto B4388fd;
case 0x438901:c.instructions+=6;goto B438901;
case 0x438904:c.instructions+=5;goto B438904;
case 0x438905:c.instructions+=4;goto B438905;
case 0x438909:c.instructions+=3;goto B438909;
case 0x43890d:c.instructions+=2;goto B43890d;
case 0x438911:c.instructions+=1;goto B438911;
case 0x438916:goto L438916;
case 0x438919:c.instructions+=4;goto B438919;
case 0x43891d:c.instructions+=3;goto B43891d;
case 0x43891f:c.instructions+=2;goto B43891f;
case 0x438923:c.instructions+=1;goto B438923;
case 0x438925:goto L438925;
case 0x438928:c.instructions+=6;goto B438928;
case 0x438929:c.instructions+=5;goto B438929;
case 0x43892d:c.instructions+=4;goto B43892d;
case 0x43892e:c.instructions+=3;goto B43892e;
case 0x43892f:c.instructions+=2;goto B43892f;
case 0x438931:c.instructions+=1;goto B438931;
case 0x438936:goto L438936;
case 0x43893e:c.instructions+=2;goto B43893e;
case 0x438941:c.instructions+=1;goto B438941;
case 0x438943:goto L438943;
case 0x438945:c.instructions+=3;goto B438945;
case 0x43894d:c.instructions+=2;goto B43894d;
case 0x438950:c.instructions+=1;goto B438950;
case 0x438952:goto L438952;
case 0x438955:goto L438955;
case 0x43895a:c.instructions+=5;goto B43895a;
case 0x438960:c.instructions+=4;goto B438960;
case 0x438961:c.instructions+=3;goto B438961;
case 0x438963:c.instructions+=2;goto B438963;
case 0x438968:c.instructions+=1;goto B438968;
case 0x43896a:goto L43896a;
case 0x43896f:goto L43896f;
case 0x438975:c.instructions+=2;goto B438975;
case 0x438976:c.instructions+=1;goto B438976;
case 0x43897b:goto L43897b;
case 0x43897e:c.instructions+=2;goto B43897e;
case 0x438980:c.instructions+=1;goto B438980;
case 0x438982:goto L438982;
case 0x438984:c.instructions+=1;goto B438984;
case 0x438989:goto L438989;
case 0x43898b:goto L43898b;
case 0x43898d:goto L43898d;
case 0x438990:c.instructions+=13;goto B438990;
case 0x438993:c.instructions+=12;goto B438993;
case 0x438999:c.instructions+=11;goto B438999;
case 0x43899c:c.instructions+=10;goto B43899c;
case 0x43899f:c.instructions+=9;goto B43899f;
case 0x4389a2:c.instructions+=8;goto B4389a2;
case 0x4389a5:c.instructions+=7;goto B4389a5;
case 0x4389a8:c.instructions+=6;goto B4389a8;
case 0x4389ab:c.instructions+=5;goto B4389ab;
case 0x4389ae:c.instructions+=4;goto B4389ae;
case 0x4389b4:c.instructions+=3;goto B4389b4;
case 0x4389b6:c.instructions+=2;goto B4389b6;
case 0x4389b9:c.instructions+=1;goto B4389b9;
case 0x4389bb:goto L4389bb;
case 0x4389c2:goto L4389c2;
case 0x4389c5:c.instructions+=17;goto B4389c5;
case 0x4389c8:c.instructions+=16;goto B4389c8;
case 0x4389cb:c.instructions+=15;goto B4389cb;
case 0x4389ce:c.instructions+=14;goto B4389ce;
case 0x4389d1:c.instructions+=13;goto B4389d1;
case 0x4389d7:c.instructions+=12;goto B4389d7;
case 0x4389da:c.instructions+=11;goto B4389da;
case 0x4389dd:c.instructions+=10;goto B4389dd;
case 0x4389e0:c.instructions+=9;goto B4389e0;
case 0x4389e3:c.instructions+=8;goto B4389e3;
case 0x4389e6:c.instructions+=7;goto B4389e6;
case 0x4389e9:c.instructions+=6;goto B4389e9;
case 0x4389ef:c.instructions+=5;goto B4389ef;
case 0x4389f2:c.instructions+=4;goto B4389f2;
case 0x4389f5:c.instructions+=3;goto B4389f5;
case 0x4389fa:c.instructions+=2;goto B4389fa;
case 0x4389fd:c.instructions+=1;goto B4389fd;
case 0x438a02:goto L438a02;
case 0x438a03:c.instructions+=1;goto B438a03;
case 0x438a08:goto L438a08;
case 0x438a0b:c.instructions+=6;goto B438a0b;
case 0x438a0e:c.instructions+=5;goto B438a0e;
case 0x438a11:c.instructions+=4;goto B438a11;
case 0x438a12:c.instructions+=3;goto B438a12;
case 0x438a14:c.instructions+=2;goto B438a14;
case 0x438a18:c.instructions+=1;goto B438a18;
case 0x438a1d:goto L438a1d;
case 0x438a1f:c.instructions+=3;goto B438a1f;
case 0x438a22:c.instructions+=2;goto B438a22;
case 0x438a25:c.instructions+=1;goto B438a25;
case 0x438a27:goto L438a27;
case 0x438a2a:c.instructions+=1;goto B438a2a;
case 0x438a2c:goto L438a2c;
case 0x438a2e:goto L438a2e;
case 0x438a31:c.instructions+=2;goto B438a31;
case 0x438a35:c.instructions+=1;goto B438a35;
case 0x438a37:goto L438a37;
case 0x438a3a:c.instructions+=3;goto B438a3a;
case 0x438a3b:c.instructions+=2;goto B438a3b;
case 0x438a40:c.instructions+=1;goto B438a40;
case 0x438a45:goto L438a45;
case 0x438a48:c.instructions+=4;goto B438a48;
case 0x438a4b:c.instructions+=3;goto B438a4b;
case 0x438a4d:c.instructions+=2;goto B438a4d;
case 0x438a4e:c.instructions+=1;goto B438a4e;
case 0x438a53:goto L438a53;
case 0x438a57:c.instructions+=1;goto B438a57;
case 0x438a59:goto L438a59;
case 0x438a5c:c.instructions+=3;goto B438a5c;
case 0x438a5d:c.instructions+=2;goto B438a5d;
case 0x438a62:c.instructions+=1;goto B438a62;
case 0x438a67:goto L438a67;
case 0x438a6a:c.instructions+=4;goto B438a6a;
case 0x438a6d:c.instructions+=3;goto B438a6d;
case 0x438a6f:c.instructions+=2;goto B438a6f;
case 0x438a70:c.instructions+=1;goto B438a70;
case 0x438a75:goto L438a75;
case 0x438a79:c.instructions+=1;goto B438a79;
case 0x438a7b:goto L438a7b;
case 0x438a7e:c.instructions+=3;goto B438a7e;
case 0x438a7f:c.instructions+=2;goto B438a7f;
case 0x438a84:c.instructions+=1;goto B438a84;
case 0x438a89:goto L438a89;
case 0x438a8c:c.instructions+=4;goto B438a8c;
case 0x438a8f:c.instructions+=3;goto B438a8f;
case 0x438a91:c.instructions+=2;goto B438a91;
case 0x438a92:c.instructions+=1;goto B438a92;
case 0x438a97:goto L438a97;
case 0x438a9a:c.instructions+=4;goto B438a9a;
case 0x438a9d:c.instructions+=3;goto B438a9d;
case 0x438a9f:c.instructions+=2;goto B438a9f;
case 0x438aa1:c.instructions+=1;goto B438aa1;
case 0x438aa3:goto L438aa3;
case 0x438aa7:c.instructions+=1;goto B438aa7;
case 0x438aa9:goto L438aa9;
case 0x438aac:c.instructions+=3;goto B438aac;
case 0x438aae:c.instructions+=2;goto B438aae;
case 0x438ab1:c.instructions+=1;goto B438ab1;
case 0x438ab3:goto L438ab3;
case 0x438ab4:c.instructions+=1;goto B438ab4;
case 0x438ab9:goto L438ab9;
case 0x438abc:c.instructions+=1;goto B438abc;
case 0x438abf:goto L438abf;
case 0x438ac2:c.instructions+=3;goto B438ac2;
case 0x438ac4:c.instructions+=2;goto B438ac4;
case 0x438ac7:c.instructions+=1;goto B438ac7;
case 0x438ac9:goto L438ac9;
case 0x438acb:c.instructions+=2;goto B438acb;
case 0x438acc:c.instructions+=1;goto B438acc;
case 0x438ad2:goto L438ad2;
case 0x438ad5:c.instructions+=1;goto B438ad5;
case 0x438ad8:goto L438ad8;
case 0x438adb:c.instructions+=2;goto B438adb;
case 0x438ade:c.instructions+=1;goto B438ade;
case 0x438ae3:goto L438ae3;
case 0x438ae6:c.instructions+=2;goto B438ae6;
case 0x438ae8:c.instructions+=1;goto B438ae8;
case 0x438aea:goto L438aea;
case 0x438aec:c.instructions+=1;goto B438aec;
case 0x438af1:goto L438af1;
case 0x438af6:c.instructions+=6;goto B438af6;
case 0x438afc:c.instructions+=5;goto B438afc;
case 0x438afd:c.instructions+=4;goto B438afd;
case 0x438afe:c.instructions+=3;goto B438afe;
case 0x438aff:c.instructions+=2;goto B438aff;
case 0x438b04:c.instructions+=1;goto B438b04;
case 0x438b09:goto L438b09;
case 0x438b0c:goto L438b0c;
case 0x438b0f:goto L438b0f;
case 0x438b12:c.instructions+=2;goto B438b12;
case 0x438b14:c.instructions+=1;goto B438b14;
case 0x438b1a:goto L438b1a;
case 0x438b1d:c.instructions+=2;goto B438b1d;
case 0x438b21:c.instructions+=1;goto B438b21;
case 0x438b23:goto L438b23;
case 0x438b27:c.instructions+=4;goto B438b27;
case 0x438b2b:c.instructions+=3;goto B438b2b;
case 0x438b2f:c.instructions+=2;goto B438b2f;
case 0x438b32:c.instructions+=1;goto B438b32;
case 0x438b35:goto L438b35;
case 0x438b38:c.instructions+=4;goto B438b38;
case 0x438b3b:c.instructions+=3;goto B438b3b;
case 0x438b3e:c.instructions+=2;goto B438b3e;
case 0x438b43:c.instructions+=1;goto B438b43;
case 0x438b45:goto L438b45;
case 0x438b48:c.instructions+=12;goto B438b48;
case 0x438b4c:c.instructions+=11;goto B438b4c;
case 0x438b4f:c.instructions+=10;goto B438b4f;
case 0x438b55:c.instructions+=9;goto B438b55;
case 0x438b59:c.instructions+=8;goto B438b59;
case 0x438b5a:c.instructions+=7;goto B438b5a;
case 0x438b5b:c.instructions+=6;goto B438b5b;
case 0x438b5e:c.instructions+=5;goto B438b5e;
case 0x438b61:c.instructions+=4;goto B438b61;
case 0x438b63:c.instructions+=3;goto B438b63;
case 0x438b69:c.instructions+=2;goto B438b69;
case 0x438b6c:c.instructions+=1;goto B438b6c;
case 0x438b71:goto L438b71;
case 0x438b74:c.instructions+=5;goto B438b74;
case 0x438b77:c.instructions+=4;goto B438b77;
case 0x438b7a:c.instructions+=3;goto B438b7a;
case 0x438b7d:c.instructions+=2;goto B438b7d;
case 0x438b83:c.instructions+=1;goto B438b83;
case 0x438b86:goto L438b86;
case 0x438b89:c.instructions+=3;goto B438b89;
case 0x438b8c:c.instructions+=2;goto B438b8c;
case 0x438b8f:c.instructions+=1;goto B438b8f;
case 0x438b91:goto L438b91;
case 0x438b94:c.instructions+=8;goto B438b94;
case 0x438b98:c.instructions+=7;goto B438b98;
case 0x438b9b:c.instructions+=6;goto B438b9b;
case 0x438b9f:c.instructions+=5;goto B438b9f;
case 0x438ba3:c.instructions+=4;goto B438ba3;
case 0x438ba7:c.instructions+=3;goto B438ba7;
case 0x438ba8:c.instructions+=2;goto B438ba8;
case 0x438ba9:c.instructions+=1;goto B438ba9;
case 0x438bae:goto L438bae;
case 0x438bb1:c.instructions+=2;goto B438bb1;
case 0x438bb4:c.instructions+=1;goto B438bb4;
case 0x438bb7:goto L438bb7;
case 0x438bba:c.instructions+=2;goto B438bba;
case 0x438bbd:c.instructions+=1;goto B438bbd;
case 0x438bbf:goto L438bbf;
case 0x438bc2:c.instructions+=1;goto B438bc2;
case 0x438bc4:goto L438bc4;
case 0x438bc7:c.instructions+=3;goto B438bc7;
case 0x438bcb:c.instructions+=2;goto B438bcb;
case 0x438bce:c.instructions+=1;goto B438bce;
case 0x438bd5:goto L438bd5;
case 0x438bd9:c.instructions+=8;goto B438bd9;
case 0x438bda:c.instructions+=7;goto B438bda;
case 0x438bdb:c.instructions+=6;goto B438bdb;
case 0x438bdc:c.instructions+=5;goto B438bdc;
case 0x438bde:c.instructions+=4;goto B438bde;
case 0x438bdf:c.instructions+=3;goto B438bdf;
case 0x438be6:c.instructions+=2;goto B438be6;
case 0x438be9:c.instructions+=1;goto B438be9;
case 0x438bf0:goto L438bf0;
case 0x438bf1:c.instructions+=2;goto B438bf1;
case 0x438bf3:c.instructions+=1;goto B438bf3;
case 0x438bf8:goto L438bf8;
case 0x438bfd:c.instructions+=1;goto B438bfd;
case 0x438bff:goto L438bff;
case 0x438c05:c.instructions+=4;goto B438c05;
case 0x438c0a:c.instructions+=3;goto B438c0a;
case 0x438c0b:c.instructions+=2;goto B438c0b;
case 0x438c0c:c.instructions+=1;goto B438c0c;
case 0x438c11:goto L438c11;
case 0x438c14:goto L438c14;
case 0x438c16:c.instructions+=2;goto B438c16;
case 0x438c17:c.instructions+=1;goto B438c17;
case 0x438c20:goto L438c20;
case 0x438c24:c.instructions+=2;goto B438c24;
case 0x438c2a:c.instructions+=1;goto B438c2a;
case 0x438c2c:goto L438c2c;
case 0x438c32:c.instructions+=2;goto B438c32;
case 0x438c34:c.instructions+=1;goto B438c34;
case 0x438c36:goto L438c36;
case 0x438c3c:c.instructions+=2;goto B438c3c;
case 0x438c3e:c.instructions+=1;goto B438c3e;
case 0x438c40:goto L438c40;
case 0x438c43:c.instructions+=4;goto B438c43;
case 0x438c46:c.instructions+=3;goto B438c46;
case 0x438c47:c.instructions+=2;goto B438c47;
case 0x438c4c:c.instructions+=1;goto B438c4c;
case 0x438c51:goto L438c51;
case 0x438c56:c.instructions+=1;goto B438c56;
case 0x438c57:goto L438c57;
case 0x438c59:c.instructions+=1;goto B438c59;
case 0x438c60:goto L438c60;
case 0x438c64:c.instructions+=2;goto B438c64;
case 0x438c6a:c.instructions+=1;goto B438c6a;
case 0x438c6c:goto L438c6c;
case 0x438c72:c.instructions+=2;goto B438c72;
case 0x438c74:c.instructions+=1;goto B438c74;
case 0x438c76:goto L438c76;
case 0x438c7c:c.instructions+=2;goto B438c7c;
case 0x438c7e:c.instructions+=1;goto B438c7e;
case 0x438c80:goto L438c80;
case 0x438c83:c.instructions+=4;goto B438c83;
case 0x438c86:c.instructions+=3;goto B438c86;
case 0x438c87:c.instructions+=2;goto B438c87;
case 0x438c8c:c.instructions+=1;goto B438c8c;
case 0x438c91:goto L438c91;
case 0x438c96:c.instructions+=1;goto B438c96;
case 0x438c97:goto L438c97;
case 0x438c99:c.instructions+=1;goto B438c99;
case 0x438ca0:goto L438ca0;
case 0x438ca5:c.instructions+=3;goto B438ca5;
case 0x438ca8:c.instructions+=2;goto B438ca8;
case 0x438caa:c.instructions+=1;goto B438caa;
case 0x438cb0:goto L438cb0;
case 0x438cb5:c.instructions+=2;goto B438cb5;
case 0x438cb7:c.instructions+=1;goto B438cb7;
case 0x438cbd:goto L438cbd;
case 0x438cc1:c.instructions+=6;goto B438cc1;
case 0x438cc7:c.instructions+=5;goto B438cc7;
case 0x438cc8:c.instructions+=4;goto B438cc8;
case 0x438cc9:c.instructions+=3;goto B438cc9;
case 0x438cca:c.instructions+=2;goto B438cca;
case 0x438ccb:c.instructions+=1;goto B438ccb;
case 0x438cd1:goto L438cd1;
case 0x438cd6:c.instructions+=3;goto B438cd6;
case 0x438cd8:c.instructions+=2;goto B438cd8;
case 0x438cda:c.instructions+=1;goto B438cda;
case 0x438cdc:goto L438cdc;
case 0x438ce2:goto L438ce2;
case 0x438ce4:c.instructions+=1;goto B438ce4;
case 0x438cea:goto L438cea;
case 0x438cee:c.instructions+=7;goto B438cee;
case 0x438cf2:c.instructions+=6;goto B438cf2;
case 0x438cf5:c.instructions+=5;goto B438cf5;
case 0x438cf9:c.instructions+=4;goto B438cf9;
case 0x438cfb:c.instructions+=3;goto B438cfb;
case 0x438cfd:c.instructions+=2;goto B438cfd;
case 0x438d01:c.instructions+=1;goto B438d01;
case 0x438d03:goto L438d03;
case 0x438d06:c.instructions+=1;goto B438d06;
case 0x438d08:goto L438d08;
case 0x438d0a:goto L438d0a;
case 0x438d10:goto L438d10;
case 0x438d12:c.instructions+=1;goto B438d12;
case 0x438d14:goto L438d14;
case 0x438d17:c.instructions+=1;goto B438d17;
case 0x438d19:goto L438d19;
case 0x438d1b:goto L438d1b;
case 0x438d1d:c.instructions+=1;goto B438d1d;
case 0x438d23:goto L438d23;
case 0x438d28:c.instructions+=2;goto B438d28;
case 0x438d2a:c.instructions+=1;goto B438d2a;
case 0x438d2c:goto L438d2c;
case 0x438d31:c.instructions+=2;goto B438d31;
case 0x438d33:c.instructions+=1;goto B438d33;
case 0x438d35:goto L438d35;
case 0x438d3a:c.instructions+=2;goto B438d3a;
case 0x438d3c:c.instructions+=1;goto B438d3c;
case 0x438d3e:goto L438d3e;
case 0x438d43:c.instructions+=1;goto B438d43;
case 0x438d48:goto L438d48;
case 0x438d4e:goto L438d4e;
case 0x438d50:c.instructions+=1;goto B438d50;
case 0x438d52:goto L438d52;
case 0x438d55:c.instructions+=1;goto B438d55;
case 0x438d57:goto L438d57;
case 0x438d5a:c.instructions+=1;goto B438d5a;
case 0x438d5c:goto L438d5c;
case 0x438d5e:c.instructions+=6;goto B438d5e;
case 0x438d62:c.instructions+=5;goto B438d62;
case 0x438d63:c.instructions+=4;goto B438d63;
case 0x438d67:c.instructions+=3;goto B438d67;
case 0x438d68:c.instructions+=2;goto B438d68;
case 0x438d69:c.instructions+=1;goto B438d69;
case 0x438d6c:goto L438d6c;
case 0x438d72:goto L438d72;
case 0x438d75:c.instructions+=2;goto B438d75;
case 0x438d77:c.instructions+=1;goto B438d77;
case 0x438d79:goto L438d79;
case 0x438d7c:c.instructions+=1;goto B438d7c;
case 0x438d7e:goto L438d7e;
case 0x438d80:c.instructions+=1;goto B438d80;
case 0x438d82:goto L438d82;
case 0x438d88:c.instructions+=1;goto B438d88;
case 0x438d8e:goto L438d8e;
case 0x438d92:c.instructions+=7;goto B438d92;
case 0x438d96:c.instructions+=6;goto B438d96;
case 0x438d9a:c.instructions+=5;goto B438d9a;
case 0x438d9d:c.instructions+=4;goto B438d9d;
case 0x438da1:c.instructions+=3;goto B438da1;
case 0x438da3:c.instructions+=2;goto B438da3;
case 0x438da7:c.instructions+=1;goto B438da7;
case 0x438dab:goto L438dab;
case 0x438dad:c.instructions+=1;goto B438dad;
case 0x438daf:goto L438daf;
case 0x438db2:c.instructions+=1;goto B438db2;
case 0x438db4:goto L438db4;
case 0x438db6:goto L438db6;
case 0x438db8:c.instructions+=1;goto B438db8;
case 0x438dba:goto L438dba;
case 0x438dbd:c.instructions+=1;goto B438dbd;
case 0x438dbf:goto L438dbf;
case 0x438dc1:goto L438dc1;
case 0x438dc3:c.instructions+=1;goto B438dc3;
case 0x438dc5:goto L438dc5;
case 0x438dca:c.instructions+=2;goto B438dca;
case 0x438dcc:c.instructions+=1;goto B438dcc;
case 0x438dce:goto L438dce;
case 0x438dd3:c.instructions+=2;goto B438dd3;
case 0x438dd5:c.instructions+=1;goto B438dd5;
case 0x438dd7:goto L438dd7;
case 0x438ddc:c.instructions+=2;goto B438ddc;
case 0x438dde:c.instructions+=1;goto B438dde;
case 0x438de0:goto L438de0;
case 0x438de5:c.instructions+=1;goto B438de5;
case 0x438dea:goto L438dea;
case 0x438df0:c.instructions+=2;goto B438df0;
case 0x438df2:c.instructions+=1;goto B438df2;
case 0x438df4:goto L438df4;
case 0x438df5:c.instructions+=2;goto B438df5;
case 0x438df7:c.instructions+=1;goto B438df7;
case 0x438dfc:goto L438dfc;
case 0x438dfe:c.instructions+=1;goto B438dfe;
case 0x438e00:goto L438e00;
case 0x438e04:c.instructions+=7;goto B438e04;
case 0x438e06:c.instructions+=6;goto B438e06;
case 0x438e0a:c.instructions+=5;goto B438e0a;
case 0x438e0b:c.instructions+=4;goto B438e0b;
case 0x438e0c:c.instructions+=3;goto B438e0c;
case 0x438e0d:c.instructions+=2;goto B438e0d;
case 0x438e0f:c.instructions+=1;goto B438e0f;
case 0x438e12:goto L438e12;
case 0x438e15:c.instructions+=1;goto B438e15;
case 0x438e17:goto L438e17;
case 0x438e18:c.instructions+=3;goto B438e18;
case 0x438e19:c.instructions+=2;goto B438e19;
case 0x438e1a:c.instructions+=1;goto B438e1a;
case 0x438e1b:goto L438e1b;
case 0x438e1e:c.instructions+=1;goto B438e1e;
case 0x438e30:goto L438e30;
case 0x438e35:c.instructions+=2;goto B438e35;
case 0x438e37:c.instructions+=1;goto B438e37;
case 0x438e39:goto L438e39;
case 0x438e3e:c.instructions+=2;goto B438e3e;
case 0x438e40:c.instructions+=1;goto B438e40;
case 0x438e42:goto L438e42;
case 0x438e48:c.instructions+=2;goto B438e48;
case 0x438e4a:c.instructions+=1;goto B438e4a;
case 0x438e4c:goto L438e4c;
case 0x438e50:c.instructions+=10;goto B438e50;
case 0x438e54:c.instructions+=9;goto B438e54;
case 0x438e55:c.instructions+=8;goto B438e55;
case 0x438e59:c.instructions+=7;goto B438e59;
case 0x438e5a:c.instructions+=6;goto B438e5a;
case 0x438e5e:c.instructions+=5;goto B438e5e;
case 0x438e5f:c.instructions+=4;goto B438e5f;
case 0x438e63:c.instructions+=3;goto B438e63;
case 0x438e64:c.instructions+=2;goto B438e64;
case 0x438e65:c.instructions+=1;goto B438e65;
case 0x438e6a:goto L438e6a;
case 0x438e70:goto L438e70;
case 0x438e74:c.instructions+=3;goto B438e74;
case 0x438e75:c.instructions+=2;goto B438e75;
case 0x438e76:c.instructions+=1;goto B438e76;
case 0x438e7b:goto L438e7b;
case 0x438e7d:c.instructions+=2;goto B438e7d;
case 0x438e7f:c.instructions+=1;goto B438e7f;
case 0x438e81:goto L438e81;
case 0x438e82:c.instructions+=4;goto B438e82;
case 0x438e86:c.instructions+=3;goto B438e86;
case 0x438e87:c.instructions+=2;goto B438e87;
case 0x438e89:c.instructions+=1;goto B438e89;
case 0x438e8e:goto L438e8e;
case 0x438e90:c.instructions+=1;goto B438e90;
case 0x438e92:goto L438e92;
case 0x438e97:c.instructions+=5;goto B438e97;
case 0x438e98:c.instructions+=4;goto B438e98;
case 0x438e9b:c.instructions+=3;goto B438e9b;
case 0x438e9d:c.instructions+=2;goto B438e9d;
case 0x438e9e:c.instructions+=1;goto B438e9e;
case 0x438ea1:goto L438ea1;
case 0x438ea5:c.instructions+=4;goto B438ea5;
case 0x438ea6:c.instructions+=3;goto B438ea6;
case 0x438ea7:c.instructions+=2;goto B438ea7;
case 0x438ea9:c.instructions+=1;goto B438ea9;
case 0x438eae:goto L438eae;
case 0x438eaf:c.instructions+=3;goto B438eaf;
case 0x438eb1:c.instructions+=2;goto B438eb1;
case 0x438eb2:c.instructions+=1;goto B438eb2;
case 0x438eb5:goto L438eb5;
case 0x438eb7:c.instructions+=2;goto B438eb7;
case 0x438eb8:c.instructions+=1;goto B438eb8;
case 0x438ec0:goto L438ec0;
case 0x438ec5:c.instructions+=4;goto B438ec5;
case 0x438ec7:c.instructions+=3;goto B438ec7;
case 0x438ec8:c.instructions+=2;goto B438ec8;
case 0x438eca:c.instructions+=1;goto B438eca;
case 0x438ecc:goto L438ecc;
case 0x438ed1:c.instructions+=2;goto B438ed1;
case 0x438ed3:c.instructions+=1;goto B438ed3;
case 0x438ed5:goto L438ed5;
case 0x438ed8:c.instructions+=2;goto B438ed8;
case 0x438eda:c.instructions+=1;goto B438eda;
case 0x438edc:goto L438edc;
case 0x438edf:c.instructions+=2;goto B438edf;
case 0x438ee1:c.instructions+=1;goto B438ee1;
case 0x438ee3:goto L438ee3;
case 0x438ee8:goto L438ee8;
case 0x438eeb:c.instructions+=2;goto B438eeb;
case 0x438eed:c.instructions+=1;goto B438eed;
case 0x438eef:goto L438eef;
case 0x438ef1:c.instructions+=2;goto B438ef1;
case 0x438ef3:c.instructions+=1;goto B438ef3;
case 0x438ef5:goto L438ef5;
case 0x438efc:goto L438efc;
case 0x438efd:c.instructions+=2;goto B438efd;
case 0x438f02:c.instructions+=1;goto B438f02;
case 0x438f07:goto L438f07;
case 0x438f08:c.instructions+=1;goto B438f08;
case 0x438f10:goto L438f10;
case 0x438f11:c.instructions+=2;goto B438f11;
case 0x438f13:c.instructions+=1;goto B438f13;
case 0x438f18:goto L438f18;
case 0x438f1d:c.instructions+=1;goto B438f1d;
case 0x438f1f:goto L438f1f;
case 0x438f20:c.instructions+=1;goto B438f20;
case 0x438f25:goto L438f25;
case 0x438f28:goto L438f28;
case 0x438f2a:c.instructions+=2;goto B438f2a;
case 0x438f2b:c.instructions+=1;goto B438f2b;
case 0x438f30:goto L438f30;
case 0x438f32:c.instructions+=44;goto B438f32;
case 0x438f37:c.instructions+=43;goto B438f37;
case 0x438f3d:c.instructions+=42;goto B438f3d;
case 0x438f3e:c.instructions+=41;goto B438f3e;
case 0x438f45:c.instructions+=40;goto B438f45;
case 0x438f46:c.instructions+=39;goto B438f46;
case 0x438f47:c.instructions+=38;goto B438f47;
case 0x438f49:c.instructions+=37;goto B438f49;
case 0x438f4d:c.instructions+=36;goto B438f4d;
case 0x438f50:c.instructions+=35;goto B438f50;
case 0x438f52:c.instructions+=34;goto B438f52;
case 0x438f55:c.instructions+=33;goto B438f55;
case 0x438f5b:c.instructions+=32;goto B438f5b;
case 0x438f5e:c.instructions+=31;goto B438f5e;
case 0x438f62:c.instructions+=30;goto B438f62;
case 0x438f64:c.instructions+=29;goto B438f64;
case 0x438f67:c.instructions+=28;goto B438f67;
case 0x438f6a:c.instructions+=27;goto B438f6a;
case 0x438f6d:c.instructions+=26;goto B438f6d;
case 0x438f70:c.instructions+=25;goto B438f70;
case 0x438f73:c.instructions+=24;goto B438f73;
case 0x438f76:c.instructions+=23;goto B438f76;
case 0x438f7a:c.instructions+=22;goto B438f7a;
case 0x438f7c:c.instructions+=21;goto B438f7c;
case 0x438f7f:c.instructions+=20;goto B438f7f;
case 0x438f82:c.instructions+=19;goto B438f82;
case 0x438f84:c.instructions+=18;goto B438f84;
case 0x438f87:c.instructions+=17;goto B438f87;
case 0x438f8b:c.instructions+=16;goto B438f8b;
case 0x438f90:c.instructions+=15;goto B438f90;
case 0x438f93:c.instructions+=14;goto B438f93;
case 0x438f96:c.instructions+=13;goto B438f96;
case 0x438f9c:c.instructions+=12;goto B438f9c;
case 0x438fa1:c.instructions+=11;goto B438fa1;
case 0x438fa4:c.instructions+=10;goto B438fa4;
case 0x438fa6:c.instructions+=9;goto B438fa6;
case 0x438fac:c.instructions+=8;goto B438fac;
case 0x438fb2:c.instructions+=7;goto B438fb2;
case 0x438fb8:c.instructions+=6;goto B438fb8;
case 0x438fba:c.instructions+=5;goto B438fba;
case 0x438fc0:c.instructions+=4;goto B438fc0;
case 0x438fc1:c.instructions+=3;goto B438fc1;
case 0x438fc6:c.instructions+=2;goto B438fc6;
case 0x438fd0:c.instructions+=1;goto B438fd0;
case 0x438fd5:goto L438fd5;
case 0x438fd9:c.instructions+=9;goto B438fd9;
case 0x438fdd:c.instructions+=8;goto B438fdd;
case 0x438fe3:c.instructions+=7;goto B438fe3;
case 0x438fe9:c.instructions+=6;goto B438fe9;
case 0x438fee:c.instructions+=5;goto B438fee;
case 0x438fef:c.instructions+=4;goto B438fef;
case 0x438ff4:c.instructions+=3;goto B438ff4;
case 0x438ff9:c.instructions+=2;goto B438ff9;
case 0x438ffe:c.instructions+=1;goto B438ffe;
default:missing_instruction(c.pc);}
B438003:L438003:{c.instructions+=6;NFSU2_TR(0x438003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438004:{NFSU2_TR(0x438004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438005:{NFSU2_TR(0x438005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B438006:{NFSU2_TR(0x438006);
__builtin_memmove((R+16),(R+20),4);
}
B438008:{NFSU2_TR(0x438008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B438009:{NFSU2_TR(0x438009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43800c:L43800c:{c.instructions+=9;NFSU2_TR(0x43800c);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438013:{NFSU2_TR(0x438013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438014:{NFSU2_TR(0x438014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438015:{NFSU2_TR(0x438015);
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
B438017:{NFSU2_TR(0x438017);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43801e:{NFSU2_TR(0x43801e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43801f:{NFSU2_TR(0x43801f);
__builtin_memmove((R+16),(R+20),4);
}
B438021:{NFSU2_TR(0x438021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B438022:{NFSU2_TR(0x438022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438030:L438030:{c.instructions+=5;NFSU2_TR(0x438030);
__builtin_memmove((R+0),gp(0x827c9c),4);
}
B438035:{NFSU2_TR(0x438035);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438037:{NFSU2_TR(0x438037);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438038:{NFSU2_TR(0x438038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438039:{NFSU2_TR(0x438039);
if(r1(R+518)){{goto L438040;}}
}
B43803b:L43803b:{c.instructions+=2;NFSU2_TR(0x43803b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B43803e:{NFSU2_TR(0x43803e);
{goto L438042;}
}
B438040:L438040:{c.instructions+=1;NFSU2_TR(0x438040);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B438042:L438042:{c.instructions+=2;NFSU2_TR(0x438042);
w4(R+4,u32(0x827c9cull));
}
B438047:{NFSU2_TR(0x438047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43804cull));
TAIL_STATIC(0x431780u,431);
}
B43804c:L43804c:{c.instructions+=3;NFSU2_TR(0x43804c);
__builtin_memmove((R+28),(R+0),4);
}
B43804e:{NFSU2_TR(0x43804e);
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
B438050:{NFSU2_TR(0x438050);
if(r1(R+518)){{goto L43806b;}}
}
B438052:L438052:{c.instructions+=2;NFSU2_TR(0x438052);
__builtin_memmove((R+4),(R+24),4);
}
B438054:{NFSU2_TR(0x438054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438059ull));
TAIL_STATIC(0x436440u,436);
}
B438059:L438059:{c.instructions+=3;NFSU2_TR(0x438059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43805c:{NFSU2_TR(0x43805c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43805e:{NFSU2_TR(0x43805e);
if(r1(R+518)){{goto L438065;}}
}
B438060:L438060:{c.instructions+=2;NFSU2_TR(0x438060);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B438063:{NFSU2_TR(0x438063);
{goto L438067;}
}
B438065:L438065:{c.instructions+=1;NFSU2_TR(0x438065);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B438067:L438067:{c.instructions+=2;NFSU2_TR(0x438067);
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
B438069:{NFSU2_TR(0x438069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438052u);}goto L438052;}}
}
B43806b:L43806b:{c.instructions+=3;NFSU2_TR(0x43806b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43806c:{NFSU2_TR(0x43806c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43806d:{NFSU2_TR(0x43806d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438070:L438070:{c.instructions+=24;NFSU2_TR(0x438070);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438072:{NFSU2_TR(0x438072);
u8 U[4];
w4(U+0,u32(0x771e36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438077:{NFSU2_TR(0x438077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43807d:{NFSU2_TR(0x43807d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43807e:{NFSU2_TR(0x43807e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438085:{NFSU2_TR(0x438085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438086:{NFSU2_TR(0x438086);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438087:{NFSU2_TR(0x438087);
__builtin_memmove((R+24),(R+4),4);
}
B438089:{NFSU2_TR(0x438089);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B43808c:{NFSU2_TR(0x43808c);
u8 U[4];
w4(U+0,u32(0x7863a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B438092:{NFSU2_TR(0x438092);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438093:{NFSU2_TR(0x438093);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438097:{NFSU2_TR(0x438097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B438099:{NFSU2_TR(0x438099);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43809c:{NFSU2_TR(0x43809c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43809f:{NFSU2_TR(0x43809f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4380a6:{NFSU2_TR(0x4380a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4380ae:{NFSU2_TR(0x4380ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4380b0:{NFSU2_TR(0x4380b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4380b3:{NFSU2_TR(0x4380b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4380b7:{NFSU2_TR(0x4380b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4380b8:{NFSU2_TR(0x4380b8);
u8 U[4];
w4(U+0,u32(0x786398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4380bd:{NFSU2_TR(0x4380bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4380c2:{NFSU2_TR(0x4380c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4380c7ull));
TAIL_STATIC(0x43db80u,43d);
}
B4380c7:L4380c7:{c.instructions+=11;NFSU2_TR(0x4380c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4380cb:{NFSU2_TR(0x4380cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4380ce:{NFSU2_TR(0x4380ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4380d1:{NFSU2_TR(0x4380d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4380d4:{NFSU2_TR(0x4380d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4380db:{NFSU2_TR(0x4380db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4380dc:{NFSU2_TR(0x4380dc);
__builtin_memmove((R+0),(R+24),4);
}
B4380de:{NFSU2_TR(0x4380de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4380df:{NFSU2_TR(0x4380df);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4380e6:{NFSU2_TR(0x4380e6);
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
B4380e9:{NFSU2_TR(0x4380e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4380f0:L4380f0:{c.instructions+=8;NFSU2_TR(0x4380f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4380f1:{NFSU2_TR(0x4380f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4380f2:{NFSU2_TR(0x4380f2);
__builtin_memmove((R+20),(R+4),4);
}
B4380f4:{NFSU2_TR(0x4380f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4380f5:{NFSU2_TR(0x4380f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4380f8:{NFSU2_TR(0x4380f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4380fb:{NFSU2_TR(0x4380fb);
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
B4380fd:{NFSU2_TR(0x4380fd);
if(r1(R+518)){{goto L43811a;}}
}
B4380ff:L4380ff:{c.instructions+=1;NFSU2_TR(0x4380ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438100:L438100:{c.instructions+=4;NFSU2_TR(0x438100);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438103:{NFSU2_TR(0x438103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438105:{NFSU2_TR(0x438105);
__builtin_memmove((R+4),(R+24),4);
}
B438107:{NFSU2_TR(0x438107);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43810aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43810a:L43810a:{c.instructions+=4;NFSU2_TR(0x43810a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43810c:{NFSU2_TR(0x43810c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43810e:{NFSU2_TR(0x43810e);
__builtin_memmove((R+4),(R+24),4);
}
B438110:{NFSU2_TR(0x438110);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438112ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B438112:L438112:{c.instructions+=3;NFSU2_TR(0x438112);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438115:{NFSU2_TR(0x438115);
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
B438117:{NFSU2_TR(0x438117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438100u);}goto L438100;}}
}
B438119:L438119:{c.instructions+=1;NFSU2_TR(0x438119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43811a:L43811a:{c.instructions+=2;NFSU2_TR(0x43811a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B43811c:{NFSU2_TR(0x43811c);
if(r1(R+518)){{goto L43813c;}}
}
B43811e:L43811e:{c.instructions+=1;NFSU2_TR(0x43811e);
__builtin_memmove((R+28),(R+28),4);
}
B438120:L438120:{c.instructions+=7;NFSU2_TR(0x438120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438123:{NFSU2_TR(0x438123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B438125:{NFSU2_TR(0x438125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438128:{NFSU2_TR(0x438128);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43812a:{NFSU2_TR(0x43812a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43812b:{NFSU2_TR(0x43812b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43812e:{NFSU2_TR(0x43812e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438133ull));
TAIL_STATIC(0x440ef0u,440);
}
B438133:L438133:{c.instructions+=4;NFSU2_TR(0x438133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438135:{NFSU2_TR(0x438135);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B438138:{NFSU2_TR(0x438138);
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
B43813a:{NFSU2_TR(0x43813a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438120u);}goto L438120;}}
}
B43813c:L43813c:{c.instructions+=4;NFSU2_TR(0x43813c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43813d:{NFSU2_TR(0x43813d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43813e:{NFSU2_TR(0x43813e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43813f:{NFSU2_TR(0x43813f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438140:L438140:{c.instructions+=5;NFSU2_TR(0x438140);
__builtin_memmove((R+0),gp(0x827c9c),4);
}
B438145:{NFSU2_TR(0x438145);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438147:{NFSU2_TR(0x438147);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438148:{NFSU2_TR(0x438148);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438149:{NFSU2_TR(0x438149);
if(r1(R+518)){{goto L438150;}}
}
B43814b:L43814b:{c.instructions+=2;NFSU2_TR(0x43814b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B43814e:{NFSU2_TR(0x43814e);
{goto L438152;}
}
B438150:L438150:{c.instructions+=1;NFSU2_TR(0x438150);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B438152:L438152:{c.instructions+=2;NFSU2_TR(0x438152);
w4(R+4,u32(0x827c9cull));
}
B438157:{NFSU2_TR(0x438157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43815cull));
TAIL_STATIC(0x431780u,431);
}
B43815c:L43815c:{c.instructions+=3;NFSU2_TR(0x43815c);
__builtin_memmove((R+12),(R+0),4);
}
B43815e:{NFSU2_TR(0x43815e);
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
B438160:{NFSU2_TR(0x438160);
if(r1(R+518)){{goto L4381a1;}}
}
B438162:L438162:{c.instructions+=2;NFSU2_TR(0x438162);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438163:{NFSU2_TR(0x438163);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438167:L438167:{c.instructions+=2;NFSU2_TR(0x438167);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438169:{NFSU2_TR(0x438169);
if(r1(R+518)){{goto L438170;}}
}
B43816b:L43816b:{c.instructions+=2;NFSU2_TR(0x43816b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43816e:{NFSU2_TR(0x43816e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43818e;}}
}
B438170:L438170:{c.instructions+=6;NFSU2_TR(0x438170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438173:{NFSU2_TR(0x438173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438176:{NFSU2_TR(0x438176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438178:{NFSU2_TR(0x438178);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43817b:{NFSU2_TR(0x43817b);
__builtin_memmove((R+4),(R+24),4);
}
B43817d:{NFSU2_TR(0x43817d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438182ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4380f0u);}goto L4380f0;}
}
B438182:L438182:{c.instructions+=2;NFSU2_TR(0x438182);
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
B438184:{NFSU2_TR(0x438184);
if(r1(R+518)){{goto L43818e;}}
}
B438186:L438186:{c.instructions+=4;NFSU2_TR(0x438186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438188:{NFSU2_TR(0x438188);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43818a:{NFSU2_TR(0x43818a);
__builtin_memmove((R+4),(R+24),4);
}
B43818c:{NFSU2_TR(0x43818c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43818eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43818e:L43818e:{c.instructions+=3;NFSU2_TR(0x43818e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438191:{NFSU2_TR(0x438191);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438193:{NFSU2_TR(0x438193);
if(r1(R+518)){{goto L43819a;}}
}
B438195:L438195:{c.instructions+=2;NFSU2_TR(0x438195);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B438198:{NFSU2_TR(0x438198);
{goto L43819c;}
}
B43819a:L43819a:{c.instructions+=1;NFSU2_TR(0x43819a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43819c:L43819c:{c.instructions+=2;NFSU2_TR(0x43819c);
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
B43819e:{NFSU2_TR(0x43819e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438167u);}goto L438167;}}
}
B4381a0:L4381a0:{c.instructions+=1;NFSU2_TR(0x4381a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4381a1:L4381a1:{c.instructions+=3;NFSU2_TR(0x4381a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4381a2:{NFSU2_TR(0x4381a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4381a3:{NFSU2_TR(0x4381a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4381b0:L4381b0:{c.instructions+=10;NFSU2_TR(0x4381b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4381b6:{NFSU2_TR(0x4381b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381b8:{NFSU2_TR(0x4381b8);
u8 U[4];
w4(U+0,u32(0x771e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381bd:{NFSU2_TR(0x4381bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381be:{NFSU2_TR(0x4381be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4381c2:{NFSU2_TR(0x4381c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4381c9:{NFSU2_TR(0x4381c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4381cb:{NFSU2_TR(0x4381cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4381ce:{NFSU2_TR(0x4381ce);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x37100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4381d4:{NFSU2_TR(0x4381d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43838d;}}
}
B4381da:L4381da:{c.instructions+=8;NFSU2_TR(0x4381da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381db:{NFSU2_TR(0x4381db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381dc:{NFSU2_TR(0x4381dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381dd:{NFSU2_TR(0x4381dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4381de:{NFSU2_TR(0x4381de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4381e1:{NFSU2_TR(0x4381e1);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B4381e4:{NFSU2_TR(0x4381e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4381e8:{NFSU2_TR(0x4381e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4381edull));
TAIL_STATIC(0x440ec0u,440);
}
B4381ed:L4381ed:{c.instructions+=3;NFSU2_TR(0x4381ed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4381ef:{NFSU2_TR(0x4381ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4381f1:{NFSU2_TR(0x4381f1);
if(r1(R+518)){{goto L4381f8;}}
}
B4381f3:L4381f3:{c.instructions+=2;NFSU2_TR(0x4381f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4381f6:{NFSU2_TR(0x4381f6);
{goto L4381fa;}
}
B4381f8:L4381f8:{c.instructions+=1;NFSU2_TR(0x4381f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4381fa:L4381fa:{c.instructions+=7;NFSU2_TR(0x4381fa);
__builtin_memmove((R+4),gp(0x827ca8),4);
}
B438200:{NFSU2_TR(0x438200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438202:{NFSU2_TR(0x438202);
__builtin_memmove(gp(0x827ca8),(R+0),4);
}
B438207:{NFSU2_TR(0x438207);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438209:{NFSU2_TR(0x438209);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43820c:{NFSU2_TR(0x43820c);
u8 U[4];
w4(U+0,u32(0x827ca4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B438212:{NFSU2_TR(0x438212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438217ull));
TAIL_STATIC(0x575620u,575);
}
B438217:L438217:{c.instructions+=5;NFSU2_TR(0x438217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43821a:{NFSU2_TR(0x43821a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43821e:{NFSU2_TR(0x43821e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438220:{NFSU2_TR(0x438220);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438224:{NFSU2_TR(0x438224);
if(r1(R+518)){{goto L438239;}}
}
B438226:L438226:{c.instructions+=4;NFSU2_TR(0x438226);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438229:{NFSU2_TR(0x438229);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43822a:{NFSU2_TR(0x43822a);
__builtin_memmove((R+4),(R+0),4);
}
B43822c:{NFSU2_TR(0x43822c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438231ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438070u);}goto L438070;}
}
B438231:L438231:{c.instructions+=3;NFSU2_TR(0x438231);
__builtin_memmove((R+24),(R+0),4);
}
B438233:{NFSU2_TR(0x438233);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438237:{NFSU2_TR(0x438237);
{goto L43823f;}
}
B438239:L438239:{c.instructions+=2;NFSU2_TR(0x438239);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43823d:{NFSU2_TR(0x43823d);
__builtin_memmove((R+24),(R+12),4);
}
B43823f:L43823f:{c.instructions+=3;NFSU2_TR(0x43823f);
__builtin_memmove((R+4),(R+24),4);
}
B438241:{NFSU2_TR(0x438241);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B438249:{NFSU2_TR(0x438249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43824eull));
TAIL_STATIC(0x4339e0u,433);
}
B43824e:L43824e:{c.instructions+=2;NFSU2_TR(0x43824e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438250:{NFSU2_TR(0x438250);
if(r1(R+518)){{goto L438257;}}
}
B438252:L438252:{c.instructions+=2;NFSU2_TR(0x438252);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B438255:{NFSU2_TR(0x438255);
{goto L438259;}
}
B438257:L438257:{c.instructions+=1;NFSU2_TR(0x438257);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438259:L438259:{c.instructions+=9;NFSU2_TR(0x438259);
__builtin_memmove((R+4),gp(0x827ca0),4);
}
B43825f:{NFSU2_TR(0x43825f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438261:{NFSU2_TR(0x438261);
__builtin_memmove(gp(0x827ca0),(R+0),4);
}
B438266:{NFSU2_TR(0x438266);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438269:{NFSU2_TR(0x438269);
u8 U[4];
w4(U+0,u32(0x827c9cull));
s4(u32(r4(R+0)),r4(U+0));
}
B43826f:{NFSU2_TR(0x43826f);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B438275:{NFSU2_TR(0x438275);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438278:{NFSU2_TR(0x438278);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5670ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43827e:{NFSU2_TR(0x43827e);
if(r1(R+518)){{goto L438294;}}
}
B438280:L438280:{c.instructions+=2;NFSU2_TR(0x438280);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438286:{NFSU2_TR(0x438286);
if(r1(R+518)){{goto L438294;}}
}
B438288:L438288:{c.instructions+=3;NFSU2_TR(0x438288);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4de0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43828e:{NFSU2_TR(0x43828e);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B438292:{NFSU2_TR(0x438292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438299;}}
}
B438294:L438294:{c.instructions+=1;NFSU2_TR(0x438294);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B438299:L438299:{c.instructions+=2;NFSU2_TR(0x438299);
w4(R+20,u32(0x7ea56cull));
}
B43829e:{NFSU2_TR(0x43829e);
__builtin_memmove((R+28),(R+28),4);
}
B4382a0:L4382a0:{c.instructions+=2;NFSU2_TR(0x4382a0);
u8 U[7];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4382a4:{NFSU2_TR(0x4382a4);
if(r1(R+518)){{goto L4382fd;}}
}
B4382a6:L4382a6:{c.instructions+=3;NFSU2_TR(0x4382a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4382a9:{NFSU2_TR(0x4382a9);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c90),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382af:{NFSU2_TR(0x4382af);
if(r1(R+518)){{goto L438366;}}
}
B4382b5:L4382b5:{c.instructions+=2;NFSU2_TR(0x4382b5);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c70),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382bb:{NFSU2_TR(0x4382bb);
if(r1(R+518)){{goto L438366;}}
}
B4382c1:L4382c1:{c.instructions+=2;NFSU2_TR(0x4382c1);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c54),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382c7:{NFSU2_TR(0x4382c7);
if(r1(R+518)){{goto L438366;}}
}
B4382cd:L4382cd:{c.instructions+=2;NFSU2_TR(0x4382cd);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c80),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382d3:{NFSU2_TR(0x4382d3);
if(r1(R+518)){{goto L438366;}}
}
B4382d9:L4382d9:{c.instructions+=2;NFSU2_TR(0x4382d9);
u8 U[8];
__builtin_memmove((U+0),gp(0x827db4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382df:{NFSU2_TR(0x4382df);
if(r1(R+518)){{goto L438366;}}
}
B4382e5:L4382e5:{c.instructions+=2;NFSU2_TR(0x4382e5);
u8 U[8];
__builtin_memmove((U+0),gp(0x827d30),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382eb:{NFSU2_TR(0x4382eb);
if(r1(R+518)){{goto L438366;}}
}
B4382ed:L4382ed:{c.instructions+=2;NFSU2_TR(0x4382ed);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c88),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382f3:{NFSU2_TR(0x4382f3);
if(r1(R+518)){{goto L438366;}}
}
B4382f5:L4382f5:{c.instructions+=2;NFSU2_TR(0x4382f5);
u8 U[8];
__builtin_memmove((U+0),gp(0x827e18),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4382fb:{NFSU2_TR(0x4382fb);
if(r1(R+518)){{goto L438366;}}
}
B4382fd:L4382fd:{c.instructions+=2;NFSU2_TR(0x4382fd);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4382ff:{NFSU2_TR(0x4382ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438304ull));
TAIL_STATIC(0x575620u,575);
}
B438304:L438304:{c.instructions+=3;NFSU2_TR(0x438304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B438307:{NFSU2_TR(0x438307);
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
B438309:{NFSU2_TR(0x438309);
if(r1(R+518)){{goto L438330;}}
}
B43830b:L43830b:{c.instructions+=12;NFSU2_TR(0x43830b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43830e:{NFSU2_TR(0x43830e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438311:{NFSU2_TR(0x438311);
u8 U[4];
w4(U+0,u32(0x785ffcull));
s4(u32(r4(R+0)),r4(U+0));
}
B438317:{NFSU2_TR(0x438317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43831a:{NFSU2_TR(0x43831a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43831d:{NFSU2_TR(0x43831d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438320:{NFSU2_TR(0x438320);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438323:{NFSU2_TR(0x438323);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438326:{NFSU2_TR(0x438326);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438329:{NFSU2_TR(0x438329);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43832c:{NFSU2_TR(0x43832c);
__builtin_memmove((R+28),(R+0),4);
}
B43832e:{NFSU2_TR(0x43832e);
{goto L438332;}
}
B438330:L438330:{c.instructions+=1;NFSU2_TR(0x438330);
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
B438332:L438332:{c.instructions+=7;NFSU2_TR(0x438332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438335:{NFSU2_TR(0x438335);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438339:{NFSU2_TR(0x438339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43833b:{NFSU2_TR(0x43833b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43833c:{NFSU2_TR(0x43833c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43833d:{NFSU2_TR(0x43833d);
__builtin_memmove((R+4),(R+28),4);
}
B43833f:{NFSU2_TR(0x43833f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438342ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B438342:L438342:{c.instructions+=2;NFSU2_TR(0x438342);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B438345:{NFSU2_TR(0x438345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43834aull));
TAIL_STATIC(0x440ec0u,440);
}
B43834a:L43834a:{c.instructions+=2;NFSU2_TR(0x43834a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43834c:{NFSU2_TR(0x43834c);
if(r1(R+518)){{goto L438353;}}
}
B43834e:L43834e:{c.instructions+=2;NFSU2_TR(0x43834e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438351:{NFSU2_TR(0x438351);
{goto L438355;}
}
B438353:L438353:{c.instructions+=1;NFSU2_TR(0x438353);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438355:L438355:{c.instructions+=6;NFSU2_TR(0x438355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438358:{NFSU2_TR(0x438358);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43835a:{NFSU2_TR(0x43835a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43835d:{NFSU2_TR(0x43835d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43835f:{NFSU2_TR(0x43835f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438363:{NFSU2_TR(0x438363);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438366:L438366:{c.instructions+=3;NFSU2_TR(0x438366);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B438369:{NFSU2_TR(0x438369);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ea614ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ea614ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43836f:{NFSU2_TR(0x43836f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4382a0u);}goto L4382a0;}}
}
B438375:L438375:{c.instructions+=9;NFSU2_TR(0x438375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438376:{NFSU2_TR(0x438376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438377:{NFSU2_TR(0x438377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B438378:{NFSU2_TR(0x438378);
w4(R+0,u32(0x1ull));
}
B43837d:{NFSU2_TR(0x43837d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43837e:{NFSU2_TR(0x43837e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438382:{NFSU2_TR(0x438382);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438389:{NFSU2_TR(0x438389);
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
B43838c:{NFSU2_TR(0x43838c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43838d:L43838d:{c.instructions+=5;NFSU2_TR(0x43838d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438391:{NFSU2_TR(0x438391);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438393:{NFSU2_TR(0x438393);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43839a:{NFSU2_TR(0x43839a);
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
B43839d:{NFSU2_TR(0x43839d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4383a0:L4383a0:{c.instructions+=13;NFSU2_TR(0x4383a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383a2:{NFSU2_TR(0x4383a2);
u8 U[4];
w4(U+0,u32(0x771e6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383a7:{NFSU2_TR(0x4383a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4383ad:{NFSU2_TR(0x4383ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383ae:{NFSU2_TR(0x4383ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383b5:{NFSU2_TR(0x4383b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383b6:{NFSU2_TR(0x4383b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383b7:{NFSU2_TR(0x4383b7);
__builtin_memmove((R+24),(R+4),4);
}
B4383b9:{NFSU2_TR(0x4383b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383ba:{NFSU2_TR(0x4383ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383be:{NFSU2_TR(0x4383be);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4383c0:{NFSU2_TR(0x4383c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383c4:{NFSU2_TR(0x4383c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4383c9ull));
TAIL_STATIC(0x436550u,436);
}
B4383c9:L4383c9:{c.instructions+=5;NFSU2_TR(0x4383c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4383cc:{NFSU2_TR(0x4383cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4383ce:{NFSU2_TR(0x4383ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4383d6:{NFSU2_TR(0x4383d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383d9:{NFSU2_TR(0x4383d9);
if(r1(R+518)){{goto L4383e7;}}
}
B4383db:L4383db:{c.instructions+=2;NFSU2_TR(0x4383db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383dc:{NFSU2_TR(0x4383dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4383e1ull));
TAIL_STATIC(0x575630u,575);
}
B4383e1:L4383e1:{c.instructions+=2;NFSU2_TR(0x4383e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4383e4:{NFSU2_TR(0x4383e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383e7:L4383e7:{c.instructions+=4;NFSU2_TR(0x4383e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4383ea:{NFSU2_TR(0x4383ea);
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
B4383ec:{NFSU2_TR(0x4383ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4383ef:{NFSU2_TR(0x4383ef);
if(r1(R+518)){{goto L438400;}}
}
B4383f1:L4383f1:{c.instructions+=3;NFSU2_TR(0x4383f1);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383f3:{NFSU2_TR(0x4383f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4383f4:{NFSU2_TR(0x4383f4);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4383faull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4383fa:L4383fa:{c.instructions+=2;NFSU2_TR(0x4383fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4383fd:{NFSU2_TR(0x4383fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438400:L438400:{c.instructions+=7;NFSU2_TR(0x438400);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438404:{NFSU2_TR(0x438404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438407:{NFSU2_TR(0x438407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438408:{NFSU2_TR(0x438408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438409:{NFSU2_TR(0x438409);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438410:{NFSU2_TR(0x438410);
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
B438413:{NFSU2_TR(0x438413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438420:L438420:{c.instructions+=3;NFSU2_TR(0x438420);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438425:{NFSU2_TR(0x438425);
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
B438427:{NFSU2_TR(0x438427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438461;}}
}
B438429:L438429:{c.instructions+=3;NFSU2_TR(0x438429);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43842e:{NFSU2_TR(0x43842e);
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
B438430:{NFSU2_TR(0x438430);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438461;}}
}
B438432:L438432:{c.instructions+=4;NFSU2_TR(0x438432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438435:{NFSU2_TR(0x438435);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B438438:{NFSU2_TR(0x438438);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B43843a:{NFSU2_TR(0x43843a);
if(r1(R+518)){{goto L438461;}}
}
B43843c:L43843c:{c.instructions+=1;NFSU2_TR(0x43843c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438440:L438440:{c.instructions+=2;NFSU2_TR(0x438440);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438443:{NFSU2_TR(0x438443);
if(r1(R+518)){{goto L43844e;}}
}
B438445:L438445:{c.instructions+=3;NFSU2_TR(0x438445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438447:{NFSU2_TR(0x438447);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B438449:{NFSU2_TR(0x438449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438440u);}goto L438440;}}
}
B43844b:L43844b:{c.instructions+=1;NFSU2_TR(0x43844b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43844e:L43844e:{c.instructions+=6;NFSU2_TR(0x43844e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B438450:{NFSU2_TR(0x438450);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438453:{NFSU2_TR(0x438453);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B438455:{NFSU2_TR(0x438455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438456:{NFSU2_TR(0x438456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438459:{NFSU2_TR(0x438459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43845eull));
TAIL_STATIC(0x440ef0u,440);
}
B43845e:L43845e:{c.instructions+=1;NFSU2_TR(0x43845e);
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
B438461:L438461:{c.instructions+=1;NFSU2_TR(0x438461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438470:L438470:{c.instructions+=3;NFSU2_TR(0x438470);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438475:{NFSU2_TR(0x438475);
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
B438477:{NFSU2_TR(0x438477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4384b1;}}
}
B438479:L438479:{c.instructions+=3;NFSU2_TR(0x438479);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43847e:{NFSU2_TR(0x43847e);
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
B438480:{NFSU2_TR(0x438480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4384b1;}}
}
B438482:L438482:{c.instructions+=4;NFSU2_TR(0x438482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438485:{NFSU2_TR(0x438485);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B438488:{NFSU2_TR(0x438488);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B43848a:{NFSU2_TR(0x43848a);
if(r1(R+518)){{goto L4384b1;}}
}
B43848c:L43848c:{c.instructions+=1;NFSU2_TR(0x43848c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438490:L438490:{c.instructions+=2;NFSU2_TR(0x438490);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438493:{NFSU2_TR(0x438493);
if(r1(R+518)){{goto L43849e;}}
}
B438495:L438495:{c.instructions+=3;NFSU2_TR(0x438495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438497:{NFSU2_TR(0x438497);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B438499:{NFSU2_TR(0x438499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438490u);}goto L438490;}}
}
B43849b:L43849b:{c.instructions+=1;NFSU2_TR(0x43849b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43849e:L43849e:{c.instructions+=6;NFSU2_TR(0x43849e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4384a0:{NFSU2_TR(0x4384a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4384a3:{NFSU2_TR(0x4384a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4384a5:{NFSU2_TR(0x4384a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4384a6:{NFSU2_TR(0x4384a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4384a9:{NFSU2_TR(0x4384a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4384aeull));
TAIL_STATIC(0x440ef0u,440);
}
B4384ae:L4384ae:{c.instructions+=1;NFSU2_TR(0x4384ae);
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
B4384b1:L4384b1:{c.instructions+=1;NFSU2_TR(0x4384b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4384c0:L4384c0:{c.instructions+=5;NFSU2_TR(0x4384c0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4384c5:{NFSU2_TR(0x4384c5);
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
B4384c7:{NFSU2_TR(0x4384c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4384c8:{NFSU2_TR(0x4384c8);
__builtin_memmove((R+28),(R+4),4);
}
B4384ca:{NFSU2_TR(0x4384ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438510;}}
}
B4384cc:L4384cc:{c.instructions+=3;NFSU2_TR(0x4384cc);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B4384d1:{NFSU2_TR(0x4384d1);
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
B4384d3:{NFSU2_TR(0x4384d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438510;}}
}
B4384d5:L4384d5:{c.instructions+=5;NFSU2_TR(0x4384d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4384d8:{NFSU2_TR(0x4384d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4384d9:{NFSU2_TR(0x4384d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4384dc:{NFSU2_TR(0x4384dc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4384de:{NFSU2_TR(0x4384de);
if(r1(R+518)){{goto L43850f;}}
}
B4384e0:L4384e0:{c.instructions+=12;NFSU2_TR(0x4384e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4384e3:{NFSU2_TR(0x4384e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4384e6:{NFSU2_TR(0x4384e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4384e8:{NFSU2_TR(0x4384e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4384ea:{NFSU2_TR(0x4384ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4384ed:{NFSU2_TR(0x4384ed);
__builtin_memmove((R+8),gp(0x827b78),4);
}
B4384f3:{NFSU2_TR(0x4384f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4384f4:{NFSU2_TR(0x4384f4);
__builtin_memmove((R+0),gp(0x827f00),4);
}
B4384f9:{NFSU2_TR(0x4384f9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4384fa:{NFSU2_TR(0x4384fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4384fb:{NFSU2_TR(0x4384fb);
__builtin_memmove(gp(0x827b78),(R+8),4);
}
B438501:{NFSU2_TR(0x438501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438506ull));
TAIL_STATIC(0x43f920u,43f);
}
B438506:L438506:{c.instructions+=4;NFSU2_TR(0x438506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438508:{NFSU2_TR(0x438508);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43850b:{NFSU2_TR(0x43850b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43850d:{NFSU2_TR(0x43850d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4384e0u);}goto L4384e0;}}
}
B43850f:L43850f:{c.instructions+=1;NFSU2_TR(0x43850f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438510:L438510:{c.instructions+=2;NFSU2_TR(0x438510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438511:{NFSU2_TR(0x438511);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438520:L438520:{c.instructions+=5;NFSU2_TR(0x438520);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438525:{NFSU2_TR(0x438525);
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
B438527:{NFSU2_TR(0x438527);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438528:{NFSU2_TR(0x438528);
__builtin_memmove((R+24),(R+4),4);
}
B43852a:{NFSU2_TR(0x43852a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4385a5;}}
}
B43852c:L43852c:{c.instructions+=3;NFSU2_TR(0x43852c);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438531:{NFSU2_TR(0x438531);
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
B438533:{NFSU2_TR(0x438533);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4385a5;}}
}
B438535:L438535:{c.instructions+=6;NFSU2_TR(0x438535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438538:{NFSU2_TR(0x438538);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43853b:{NFSU2_TR(0x43853b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43853d:{NFSU2_TR(0x43853d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43853e:{NFSU2_TR(0x43853e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438542:{NFSU2_TR(0x438542);
if(r1(R+518)){{goto L438577;}}
}
B438544:L438544:{c.instructions+=2;NFSU2_TR(0x438544);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438547:{NFSU2_TR(0x438547);
if(r1(R+518)){{goto L438551;}}
}
B438549:L438549:{c.instructions+=3;NFSU2_TR(0x438549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43854b:{NFSU2_TR(0x43854b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43854d:{NFSU2_TR(0x43854d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438544u);}goto L438544;}}
}
B43854f:L43854f:{c.instructions+=1;NFSU2_TR(0x43854f);
{goto L438577;}
}
B438551:L438551:{c.instructions+=11;NFSU2_TR(0x438551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B438553:{NFSU2_TR(0x438553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438556:{NFSU2_TR(0x438556);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B438558:{NFSU2_TR(0x438558);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43855b:{NFSU2_TR(0x43855b);
__builtin_memmove((R+4),gp(0x827b78),4);
}
B438561:{NFSU2_TR(0x438561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438562:{NFSU2_TR(0x438562);
__builtin_memmove((R+0),gp(0x827f00),4);
}
B438567:{NFSU2_TR(0x438567);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B438568:{NFSU2_TR(0x438568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438569:{NFSU2_TR(0x438569);
__builtin_memmove(gp(0x827b78),(R+4),4);
}
B43856f:{NFSU2_TR(0x43856f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438574ull));
TAIL_STATIC(0x43f920u,43f);
}
B438574:L438574:{c.instructions+=1;NFSU2_TR(0x438574);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438577:L438577:{c.instructions+=4;NFSU2_TR(0x438577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43857a:{NFSU2_TR(0x43857a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43857d:{NFSU2_TR(0x43857d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B43857f:{NFSU2_TR(0x43857f);
if(r1(R+518)){{goto L4385a4;}}
}
B438581:L438581:{c.instructions+=2;NFSU2_TR(0x438581);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438584:{NFSU2_TR(0x438584);
if(r1(R+518)){{goto L438591;}}
}
B438586:L438586:{c.instructions+=3;NFSU2_TR(0x438586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438588:{NFSU2_TR(0x438588);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B43858a:{NFSU2_TR(0x43858a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438581u);}goto L438581;}}
}
B43858c:L43858c:{c.instructions+=3;NFSU2_TR(0x43858c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43858d:{NFSU2_TR(0x43858d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43858e:{NFSU2_TR(0x43858e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438591:L438591:{c.instructions+=6;NFSU2_TR(0x438591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B438593:{NFSU2_TR(0x438593);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438596:{NFSU2_TR(0x438596);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B438598:{NFSU2_TR(0x438598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438599:{NFSU2_TR(0x438599);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43859c:{NFSU2_TR(0x43859c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4385a1ull));
TAIL_STATIC(0x440ef0u,440);
}
B4385a1:L4385a1:{c.instructions+=1;NFSU2_TR(0x4385a1);
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
B4385a4:L4385a4:{c.instructions+=1;NFSU2_TR(0x4385a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4385a5:L4385a5:{c.instructions+=2;NFSU2_TR(0x4385a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4385a6:{NFSU2_TR(0x4385a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4385b0:L4385b0:{c.instructions+=5;NFSU2_TR(0x4385b0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4385b5:{NFSU2_TR(0x4385b5);
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
B4385b7:{NFSU2_TR(0x4385b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385b8:{NFSU2_TR(0x4385b8);
__builtin_memmove((R+24),(R+4),4);
}
B4385ba:{NFSU2_TR(0x4385ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438652;}}
}
B4385c0:L4385c0:{c.instructions+=3;NFSU2_TR(0x4385c0);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B4385c5:{NFSU2_TR(0x4385c5);
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
B4385c7:{NFSU2_TR(0x4385c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438652;}}
}
B4385cd:L4385cd:{c.instructions+=3;NFSU2_TR(0x4385cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4385d0:{NFSU2_TR(0x4385d0);
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
B4385d2:{NFSU2_TR(0x4385d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438652;}}
}
B4385d4:L4385d4:{c.instructions+=3;NFSU2_TR(0x4385d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4385d7:{NFSU2_TR(0x4385d7);
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
B4385d9:{NFSU2_TR(0x4385d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438652;}}
}
B4385db:L4385db:{c.instructions+=3;NFSU2_TR(0x4385db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4385de:{NFSU2_TR(0x4385de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385df:{NFSU2_TR(0x4385df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4385e4ull));
TAIL_STATIC(0x4366d0u,436);
}
B4385e4:L4385e4:{c.instructions+=6;NFSU2_TR(0x4385e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385e6:{NFSU2_TR(0x4385e6);
u8 U[4];
w4(U+0,u32(0x78643cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385eb:{NFSU2_TR(0x4385eb);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385f0:{NFSU2_TR(0x4385f0);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385f2:{NFSU2_TR(0x4385f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4385f6:{NFSU2_TR(0x4385f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4385fbull));
TAIL_STATIC(0x440df0u,440);
}
B4385fb:L4385fb:{c.instructions+=6;NFSU2_TR(0x4385fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4385fd:{NFSU2_TR(0x4385fd);
u8 U[4];
w4(U+0,u32(0x78641cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438602:{NFSU2_TR(0x438602);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438604:{NFSU2_TR(0x438604);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438606:{NFSU2_TR(0x438606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B438608:{NFSU2_TR(0x438608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43860dull));
TAIL_STATIC(0x440df0u,440);
}
B43860d:L43860d:{c.instructions+=6;NFSU2_TR(0x43860d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43860f:{NFSU2_TR(0x43860f);
u8 U[4];
w4(U+0,u32(0x7863f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438614:{NFSU2_TR(0x438614);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438616:{NFSU2_TR(0x438616);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438618:{NFSU2_TR(0x438618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43861b:{NFSU2_TR(0x43861b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438620ull));
TAIL_STATIC(0x440df0u,440);
}
B438620:L438620:{c.instructions+=6;NFSU2_TR(0x438620);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438622:{NFSU2_TR(0x438622);
u8 U[4];
w4(U+0,u32(0x7863e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438627:{NFSU2_TR(0x438627);
u8 U[4];
w4(U+0,u32(0x95ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43862c:{NFSU2_TR(0x43862c);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43862e:{NFSU2_TR(0x43862e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438631:{NFSU2_TR(0x438631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438636ull));
TAIL_STATIC(0x440df0u,440);
}
B438636:L438636:{c.instructions+=7;NFSU2_TR(0x438636);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B438639:{NFSU2_TR(0x438639);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43863b:{NFSU2_TR(0x43863b);
u8 U[4];
w4(U+0,u32(0x7863c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438640:{NFSU2_TR(0x438640);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438642:{NFSU2_TR(0x438642);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438644:{NFSU2_TR(0x438644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438647:{NFSU2_TR(0x438647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43864cull));
TAIL_STATIC(0x440df0u,440);
}
B43864c:L43864c:{c.instructions+=2;NFSU2_TR(0x43864c);
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
B43864f:{NFSU2_TR(0x43864f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438652:L438652:{c.instructions+=2;NFSU2_TR(0x438652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438653:{NFSU2_TR(0x438653);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438660:L438660:{c.instructions+=7;NFSU2_TR(0x438660);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438665:{NFSU2_TR(0x438665);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438666:{NFSU2_TR(0x438666);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B438668:{NFSU2_TR(0x438668);
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
B43866a:{NFSU2_TR(0x43866a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43866b:{NFSU2_TR(0x43866b);
__builtin_memmove((R+24),(R+4),4);
}
B43866d:{NFSU2_TR(0x43866d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438712;}}
}
B438673:L438673:{c.instructions+=2;NFSU2_TR(0x438673);
u8 U[5];
__builtin_memmove((U+3),gp(0x827adc),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B438679:{NFSU2_TR(0x438679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438712;}}
}
B43867f:L43867f:{c.instructions+=2;NFSU2_TR(0x43867f);
u8 U[10];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B438683:{NFSU2_TR(0x438683);
if(r1(R+518)){{goto L438712;}}
}
B438689:L438689:{c.instructions+=4;NFSU2_TR(0x438689);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43868c:{NFSU2_TR(0x43868c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43868d:{NFSU2_TR(0x43868d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B438691:{NFSU2_TR(0x438691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438696ull));
TAIL_STATIC(0x431750u,431);
}
B438696:L438696:{c.instructions+=4;NFSU2_TR(0x438696);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43869a:{NFSU2_TR(0x43869a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43869d:{NFSU2_TR(0x43869d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43869f:{NFSU2_TR(0x43869f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4386af;}}
}
B4386a1:L4386a1:{c.instructions+=2;NFSU2_TR(0x4386a1);
__builtin_memmove((R+4),(R+24),4);
}
B4386a3:{NFSU2_TR(0x4386a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386a8ull));
TAIL_STATIC(0x4354a0u,435);
}
B4386a8:L4386a8:{c.instructions+=2;NFSU2_TR(0x4386a8);
__builtin_memmove((R+4),(R+24),4);
}
B4386aa:{NFSU2_TR(0x4386aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4384c0u);}goto L4384c0;}
}
B4386af:L4386af:{c.instructions+=3;NFSU2_TR(0x4386af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4386b2:{NFSU2_TR(0x4386b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4386b4:{NFSU2_TR(0x4386b4);
if(r1(R+518)){{goto L4386c2;}}
}
B4386b6:L4386b6:{c.instructions+=2;NFSU2_TR(0x4386b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4386b7:{NFSU2_TR(0x4386b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386bcull));
TAIL_STATIC(0x440e40u,440);
}
B4386bc:L4386bc:{c.instructions+=2;NFSU2_TR(0x4386bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4386bf:{NFSU2_TR(0x4386bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4386c2:L4386c2:{c.instructions+=3;NFSU2_TR(0x4386c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4386c4:{NFSU2_TR(0x4386c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4386c6:{NFSU2_TR(0x4386c6);
if(r1(R+518)){{goto L4386d3;}}
}
B4386c8:L4386c8:{c.instructions+=2;NFSU2_TR(0x4386c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4386c9:{NFSU2_TR(0x4386c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386ceull));
TAIL_STATIC(0x440e40u,440);
}
B4386ce:L4386ce:{c.instructions+=2;NFSU2_TR(0x4386ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4386d1:{NFSU2_TR(0x4386d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4386d3:L4386d3:{c.instructions+=3;NFSU2_TR(0x4386d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4386d6:{NFSU2_TR(0x4386d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4386d8:{NFSU2_TR(0x4386d8);
if(r1(R+518)){{goto L4386e6;}}
}
B4386da:L4386da:{c.instructions+=2;NFSU2_TR(0x4386da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4386db:{NFSU2_TR(0x4386db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386e0ull));
TAIL_STATIC(0x440e40u,440);
}
B4386e0:L4386e0:{c.instructions+=2;NFSU2_TR(0x4386e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4386e3:{NFSU2_TR(0x4386e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4386e6:L4386e6:{c.instructions+=3;NFSU2_TR(0x4386e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4386e9:{NFSU2_TR(0x4386e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4386eb:{NFSU2_TR(0x4386eb);
if(r1(R+518)){{goto L4386f9;}}
}
B4386ed:L4386ed:{c.instructions+=2;NFSU2_TR(0x4386ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4386ee:{NFSU2_TR(0x4386ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4386f3ull));
TAIL_STATIC(0x440e40u,440);
}
B4386f3:L4386f3:{c.instructions+=2;NFSU2_TR(0x4386f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4386f6:{NFSU2_TR(0x4386f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4386f9:L4386f9:{c.instructions+=3;NFSU2_TR(0x4386f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4386fc:{NFSU2_TR(0x4386fc);
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
B4386fe:{NFSU2_TR(0x4386fe);
if(r1(R+518)){{goto L43870c;}}
}
B438700:L438700:{c.instructions+=2;NFSU2_TR(0x438700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438701:{NFSU2_TR(0x438701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438706ull));
TAIL_STATIC(0x440e40u,440);
}
B438706:L438706:{c.instructions+=2;NFSU2_TR(0x438706);
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
B438709:{NFSU2_TR(0x438709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43870c:L43870c:{c.instructions+=2;NFSU2_TR(0x43870c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43870f:{NFSU2_TR(0x43870f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B438712:L438712:{c.instructions+=3;NFSU2_TR(0x438712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438713:{NFSU2_TR(0x438713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B438714:{NFSU2_TR(0x438714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438720:L438720:{c.instructions+=3;NFSU2_TR(0x438720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438724:{NFSU2_TR(0x438724);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37150ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43872a:{NFSU2_TR(0x43872a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438757;}}
}
B43872c:L43872c:{c.instructions+=3;NFSU2_TR(0x43872c);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B438732:{NFSU2_TR(0x438732);
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
B438734:{NFSU2_TR(0x438734);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438751;}}
}
B438736:L438736:{c.instructions+=3;NFSU2_TR(0x438736);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B43873c:{NFSU2_TR(0x43873c);
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
B43873e:{NFSU2_TR(0x43873e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438751;}}
}
B438740:L438740:{c.instructions+=5;NFSU2_TR(0x438740);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B438743:{NFSU2_TR(0x438743);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B438746:{NFSU2_TR(0x438746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438747:{NFSU2_TR(0x438747);
w4(R+4,u32(0x827ef0ull));
}
B43874c:{NFSU2_TR(0x43874c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438751ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438520u);}goto L438520;}
}
B438751:L438751:{c.instructions+=2;NFSU2_TR(0x438751);
w4(R+0,u32(0x1ull));
}
B438756:{NFSU2_TR(0x438756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438757:L438757:{c.instructions+=2;NFSU2_TR(0x438757);
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
B438759:{NFSU2_TR(0x438759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438760:L438760:{c.instructions+=8;NFSU2_TR(0x438760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438761:{NFSU2_TR(0x438761);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438762:{NFSU2_TR(0x438762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438763:{NFSU2_TR(0x438763);
__builtin_memmove((R+28),(R+4),4);
}
B438765:{NFSU2_TR(0x438765);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438768:{NFSU2_TR(0x438768);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43876a:{NFSU2_TR(0x43876a);
w1(R+12,u8(0x1ull));
}
B43876c:{NFSU2_TR(0x43876c);
if(r1(R+518)){{goto L4387d5;}}
}
B43876e:L43876e:{c.instructions+=3;NFSU2_TR(0x43876e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43876f:{NFSU2_TR(0x43876f);
w4(R+4,u32(0x827b88ull));
}
B438774:{NFSU2_TR(0x438774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438779ull));
TAIL_STATIC(0x432490u,432);
}
B438779:L438779:{c.instructions+=2;NFSU2_TR(0x438779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43877b:{NFSU2_TR(0x43877b);
if(r1(R+518)){{goto L4387d5;}}
}
B43877d:L43877d:{c.instructions+=3;NFSU2_TR(0x43877d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438780:{NFSU2_TR(0x438780);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438782:{NFSU2_TR(0x438782);
if(r1(R+518)){{goto L4387d5;}}
}
B438784:L438784:{c.instructions+=2;NFSU2_TR(0x438784);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438787:{NFSU2_TR(0x438787);
if(r1(R+518)){{goto L4387d5;}}
}
B438789:L438789:{c.instructions+=3;NFSU2_TR(0x438789);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43878a:{NFSU2_TR(0x43878a);
w4(R+4,u32(0x827b88ull));
}
B43878f:{NFSU2_TR(0x43878f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438794ull));
TAIL_STATIC(0x432490u,432);
}
B438794:L438794:{c.instructions+=2;NFSU2_TR(0x438794);
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
B438796:{NFSU2_TR(0x438796);
if(r1(R+518)){{goto L4387cf;}}
}
B438798:L438798:{c.instructions+=3;NFSU2_TR(0x438798);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43879a:{NFSU2_TR(0x43879a);
__builtin_memmove((R+4),(R+0),4);
}
B43879c:{NFSU2_TR(0x43879c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4387a1ull));
TAIL_STATIC(0x4326b0u,432);
}
B4387a1:L4387a1:{c.instructions+=2;NFSU2_TR(0x4387a1);
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
B4387a3:{NFSU2_TR(0x4387a3);
if(r1(R+518)){{goto L4387cf;}}
}
B4387a5:L4387a5:{c.instructions+=5;NFSU2_TR(0x4387a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4387a8:{NFSU2_TR(0x4387a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4387aa:{NFSU2_TR(0x4387aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4387ad:{NFSU2_TR(0x4387ad);
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
B4387af:{NFSU2_TR(0x4387af);
if(r1(R+518)){{goto L4387cf;}}
}
B4387b1:L4387b1:{c.instructions+=5;NFSU2_TR(0x4387b1);
__builtin_memmove((R+0),gp(0x827afc),4);
}
B4387b6:{NFSU2_TR(0x4387b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4387b7:{NFSU2_TR(0x4387b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4387b8:{NFSU2_TR(0x4387b8);
w4(R+4,u32(0x827b88ull));
}
B4387bd:{NFSU2_TR(0x4387bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4387c2ull));
TAIL_STATIC(0x437720u,437);
}
B4387c2:L4387c2:{c.instructions+=2;NFSU2_TR(0x4387c2);
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
B4387c4:{NFSU2_TR(0x4387c4);
if(r1(R+518)){{goto L4387cf;}}
}
B4387c6:L4387c6:{c.instructions+=3;NFSU2_TR(0x4387c6);
__builtin_memmove((R+4),(R+28),4);
}
B4387c8:{NFSU2_TR(0x4387c8);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4387ca:{NFSU2_TR(0x4387ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4387cfull));
TAIL_STATIC(0x430310u,430);
}
B4387cf:L4387cf:{c.instructions+=5;NFSU2_TR(0x4387cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4387d0:{NFSU2_TR(0x4387d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4387d1:{NFSU2_TR(0x4387d1);
__builtin_memmove((R+0),(R+12),1);
}
B4387d3:{NFSU2_TR(0x4387d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4387d4:{NFSU2_TR(0x4387d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4387d5:L4387d5:{c.instructions+=5;NFSU2_TR(0x4387d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4387d6:{NFSU2_TR(0x4387d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4387d7:{NFSU2_TR(0x4387d7);
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
B4387d9:{NFSU2_TR(0x4387d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4387da:{NFSU2_TR(0x4387da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4387e0:L4387e0:{c.instructions+=3;NFSU2_TR(0x4387e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4387e1:{NFSU2_TR(0x4387e1);
__builtin_memmove((R+24),(R+4),4);
}
B4387e3:{NFSU2_TR(0x4387e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4387e8ull));
TAIL_STATIC(0x4375b0u,437);
}
B4387e8:L4387e8:{c.instructions+=2;NFSU2_TR(0x4387e8);
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
B4387ed:{NFSU2_TR(0x4387ed);
if(r1(R+518)){{goto L438804;}}
}
B4387ef:L4387ef:{c.instructions+=5;NFSU2_TR(0x4387ef);
s4(0x827af0,u32(u32(m4(0x827af0))-u32(u32(0x1ull))));
}
B4387f5:{NFSU2_TR(0x4387f5);
__builtin_memmove((R+0),gp(0x827ef8),4);
}
B4387fa:{NFSU2_TR(0x4387fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4387fb:{NFSU2_TR(0x4387fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4387fc:{NFSU2_TR(0x4387fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438801ull));
TAIL_STATIC(0x43f920u,43f);
}
B438801:L438801:{c.instructions+=1;NFSU2_TR(0x438801);
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
B438804:L438804:{c.instructions+=3;NFSU2_TR(0x438804);
__builtin_memmove((R+0),(R+24),4);
}
B438806:{NFSU2_TR(0x438806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438807:{NFSU2_TR(0x438807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438810:L438810:{c.instructions+=12;NFSU2_TR(0x438810);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438812:{NFSU2_TR(0x438812);
u8 U[4];
w4(U+0,u32(0x771c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438817:{NFSU2_TR(0x438817);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43881d:{NFSU2_TR(0x43881d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43881e:{NFSU2_TR(0x43881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438825:{NFSU2_TR(0x438825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438826:{NFSU2_TR(0x438826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438827:{NFSU2_TR(0x438827);
__builtin_memmove((R+24),(R+4),4);
}
B438829:{NFSU2_TR(0x438829);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43882d:{NFSU2_TR(0x43882d);
u8 U[4];
w4(U+0,u32(0x785dccull));
s4(u32(r4(R+24)),r4(U+0));
}
B438833:{NFSU2_TR(0x438833);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43883b:{NFSU2_TR(0x43883b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438840ull));
TAIL_STATIC(0x4373a0u,437);
}
B438840:L438840:{c.instructions+=6;NFSU2_TR(0x438840);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438844:{NFSU2_TR(0x438844);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43884a:{NFSU2_TR(0x43884a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43884b:{NFSU2_TR(0x43884b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438852:{NFSU2_TR(0x438852);
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
B438855:{NFSU2_TR(0x438855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438860:L438860:{c.instructions+=13;NFSU2_TR(0x438860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438862:{NFSU2_TR(0x438862);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438868:{NFSU2_TR(0x438868);
u8 U[4];
w4(U+0,u32(0x771e8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43886d:{NFSU2_TR(0x43886d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43886e:{NFSU2_TR(0x43886e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438875:{NFSU2_TR(0x438875);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B438878:{NFSU2_TR(0x438878);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438879:{NFSU2_TR(0x438879);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43887a:{NFSU2_TR(0x43887a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43887b:{NFSU2_TR(0x43887b);
__builtin_memmove((R+24),(R+4),4);
}
B43887d:{NFSU2_TR(0x43887d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43887f:{NFSU2_TR(0x43887f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438880:{NFSU2_TR(0x438880);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438883ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B438883:L438883:{c.instructions+=11;NFSU2_TR(0x438883);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438887:{NFSU2_TR(0x438887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43888a:{NFSU2_TR(0x43888a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43888c:{NFSU2_TR(0x43888c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43888f:{NFSU2_TR(0x43888f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438892:{NFSU2_TR(0x438892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438895:{NFSU2_TR(0x438895);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438898:{NFSU2_TR(0x438898);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B43889a:{NFSU2_TR(0x43889a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43889b:{NFSU2_TR(0x43889b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43889e:{NFSU2_TR(0x43889e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4388a3ull));
TAIL_STATIC(0x638010u,638);
}
B4388a3:L4388a3:{c.instructions+=6;NFSU2_TR(0x4388a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4388a7:{NFSU2_TR(0x4388a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4388aa:{NFSU2_TR(0x4388aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4388ab:{NFSU2_TR(0x4388ab);
__builtin_memmove((R+4),(R+0),4);
}
B4388ad:{NFSU2_TR(0x4388ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4388b0:{NFSU2_TR(0x4388b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4388b5ull));
TAIL_STATIC(0x6345b0u,634);
}
B4388b5:L4388b5:{c.instructions+=9;NFSU2_TR(0x4388b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4388b8:{NFSU2_TR(0x4388b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4388bb:{NFSU2_TR(0x4388bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4388c1:{NFSU2_TR(0x4388c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4388c4:{NFSU2_TR(0x4388c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4388c7:{NFSU2_TR(0x4388c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4388ca:{NFSU2_TR(0x4388ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4388cb:{NFSU2_TR(0x4388cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4388cc:{NFSU2_TR(0x4388cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4388d1ull));
TAIL_STATIC(0x4012b0u,401);
}
B4388d1:L4388d1:{c.instructions+=4;NFSU2_TR(0x4388d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4388d7:{NFSU2_TR(0x4388d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4388da:{NFSU2_TR(0x4388da);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4388dc:{NFSU2_TR(0x4388dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4388e5;}}
}
B4388de:L4388de:{c.instructions+=2;NFSU2_TR(0x4388de);
__builtin_memmove((R+4),(R+12),4);
}
B4388e0:{NFSU2_TR(0x4388e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4388e5ull));
TAIL_STATIC(0x6147e0u,614);
}
B4388e5:L4388e5:{c.instructions+=3;NFSU2_TR(0x4388e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4388e8:{NFSU2_TR(0x4388e8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4388ea:{NFSU2_TR(0x4388ea);
if(r1(R+518)){{goto L438952;}}
}
B4388ec:L4388ec:{c.instructions+=3;NFSU2_TR(0x4388ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4388ef:{NFSU2_TR(0x4388ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4388f2:{NFSU2_TR(0x4388f2);
if(r1(R+518)){{goto L438952;}}
}
B4388f4:L4388f4:{c.instructions+=9;NFSU2_TR(0x4388f4);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B4388fa:{NFSU2_TR(0x4388fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4388fd:{NFSU2_TR(0x4388fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438901:{NFSU2_TR(0x438901);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438904:{NFSU2_TR(0x438904);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438905:{NFSU2_TR(0x438905);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438909:{NFSU2_TR(0x438909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43890d:{NFSU2_TR(0x43890d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438911:{NFSU2_TR(0x438911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438916ull));
TAIL_STATIC(0x440e50u,440);
}
B438916:L438916:{c.instructions+=5;NFSU2_TR(0x438916);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B438919:{NFSU2_TR(0x438919);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43891d:{NFSU2_TR(0x43891d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43891f:{NFSU2_TR(0x43891f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438923:{NFSU2_TR(0x438923);
if(r1(R+518)){{goto L438943;}}
}
B438925:L438925:{c.instructions+=7;NFSU2_TR(0x438925);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438928:{NFSU2_TR(0x438928);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438929:{NFSU2_TR(0x438929);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43892d:{NFSU2_TR(0x43892d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43892e:{NFSU2_TR(0x43892e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43892f:{NFSU2_TR(0x43892f);
__builtin_memmove((R+4),(R+0),4);
}
B438931:{NFSU2_TR(0x438931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438936ull));
TAIL_STATIC(0x61d050u,61d);
}
B438936:L438936:{c.instructions+=3;NFSU2_TR(0x438936);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43893e:{NFSU2_TR(0x43893e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438941:{NFSU2_TR(0x438941);
{goto L438955;}
}
B438943:L438943:{c.instructions+=4;NFSU2_TR(0x438943);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438945:{NFSU2_TR(0x438945);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43894d:{NFSU2_TR(0x43894d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438950:{NFSU2_TR(0x438950);
{goto L438955;}
}
B438952:L438952:{c.instructions+=1;NFSU2_TR(0x438952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438955:L438955:{c.instructions+=6;NFSU2_TR(0x438955);
__builtin_memmove((R+0),gp(0x827b70),4);
}
B43895a:{NFSU2_TR(0x43895a);
__builtin_memmove((R+4),gp(0x827b74),4);
}
B438960:{NFSU2_TR(0x438960);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B438961:{NFSU2_TR(0x438961);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438963:{NFSU2_TR(0x438963);
__builtin_memmove(gp(0x827b70),(R+0),4);
}
B438968:{NFSU2_TR(0x438968);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43896f;}}
}
B43896a:L43896a:{c.instructions+=1;NFSU2_TR(0x43896a);
__builtin_memmove(gp(0x827b74),(R+0),4);
}
B43896f:L43896f:{c.instructions+=3;NFSU2_TR(0x43896f);
__builtin_memmove((R+8),gp(0x827efc),4);
}
B438975:{NFSU2_TR(0x438975);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438976:{NFSU2_TR(0x438976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43897bull));
TAIL_STATIC(0x440e50u,440);
}
B43897b:L43897b:{c.instructions+=3;NFSU2_TR(0x43897b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43897e:{NFSU2_TR(0x43897e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438980:{NFSU2_TR(0x438980);
if(r1(R+518)){{goto L43898b;}}
}
B438982:L438982:{c.instructions+=2;NFSU2_TR(0x438982);
__builtin_memmove((R+4),(R+0),4);
}
B438984:{NFSU2_TR(0x438984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438989ull));
TAIL_STATIC(0x435010u,435);
}
B438989:L438989:{c.instructions+=1;NFSU2_TR(0x438989);
{goto L43898d;}
}
B43898b:L43898b:{c.instructions+=1;NFSU2_TR(0x43898b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43898d:L43898d:{c.instructions+=14;NFSU2_TR(0x43898d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438990:{NFSU2_TR(0x438990);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438993:{NFSU2_TR(0x438993);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438999:{NFSU2_TR(0x438999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43899c:{NFSU2_TR(0x43899c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43899f:{NFSU2_TR(0x43899f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4389a2:{NFSU2_TR(0x4389a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4389a5:{NFSU2_TR(0x4389a5);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4389a8:{NFSU2_TR(0x4389a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4389ab:{NFSU2_TR(0x4389ab);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4389ae:{NFSU2_TR(0x4389ae);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4389b4:{NFSU2_TR(0x4389b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4389b6:{NFSU2_TR(0x4389b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4389b9:{NFSU2_TR(0x4389b9);
if(r1(R+514)){{goto L4389c2;}}
}
B4389bb:L4389bb:{c.instructions+=1;NFSU2_TR(0x4389bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4389c2:L4389c2:{c.instructions+=18;NFSU2_TR(0x4389c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4389c5:{NFSU2_TR(0x4389c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4389c8:{NFSU2_TR(0x4389c8);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4389cb:{NFSU2_TR(0x4389cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4389ce:{NFSU2_TR(0x4389ce);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4389d1:{NFSU2_TR(0x4389d1);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x80ull))));
}
B4389d7:{NFSU2_TR(0x4389d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4389da:{NFSU2_TR(0x4389da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4389dd:{NFSU2_TR(0x4389dd);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4389e0:{NFSU2_TR(0x4389e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4389e3:{NFSU2_TR(0x4389e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4389e6:{NFSU2_TR(0x4389e6);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4389e9:{NFSU2_TR(0x4389e9);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x100ull))));
}
B4389ef:{NFSU2_TR(0x4389ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4389f2:{NFSU2_TR(0x4389f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4389f5:{NFSU2_TR(0x4389f5);
u8 U[4];
w4(U+0,u32(0x786458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4389fa:{NFSU2_TR(0x4389fa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B4389fd:{NFSU2_TR(0x4389fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a02ull));
TAIL_STATIC(0x43db50u,43d);
}
B438a02:L438a02:{c.instructions+=2;NFSU2_TR(0x438a02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a03:{NFSU2_TR(0x438a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a08ull));
TAIL_STATIC(0x434dc0u,434);
}
B438a08:L438a08:{c.instructions+=7;NFSU2_TR(0x438a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438a0b:{NFSU2_TR(0x438a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B438a0e:{NFSU2_TR(0x438a0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438a11:{NFSU2_TR(0x438a11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a12:{NFSU2_TR(0x438a12);
__builtin_memmove((R+4),(R+12),4);
}
B438a14:{NFSU2_TR(0x438a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438a18:{NFSU2_TR(0x438a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a1dull));
TAIL_STATIC(0x434f20u,434);
}
B438a1d:L438a1d:{c.instructions+=4;NFSU2_TR(0x438a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438a1f:{NFSU2_TR(0x438a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438a22:{NFSU2_TR(0x438a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438a25:{NFSU2_TR(0x438a25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438a2c;}}
}
B438a27:L438a27:{c.instructions+=2;NFSU2_TR(0x438a27);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x28ull))));
}
B438a2a:{NFSU2_TR(0x438a2a);
{goto L438a2e;}
}
B438a2c:L438a2c:{c.instructions+=1;NFSU2_TR(0x438a2c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B438a2e:L438a2e:{c.instructions+=3;NFSU2_TR(0x438a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438a31:{NFSU2_TR(0x438a31);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B438a35:{NFSU2_TR(0x438a35);
if(r1(R+518)){{goto L438a53;}}
}
B438a37:L438a37:{c.instructions+=4;NFSU2_TR(0x438a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438a3a:{NFSU2_TR(0x438a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a3b:{NFSU2_TR(0x438a3b);
u8 U[4];
w4(U+0,u32(0x785df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a40:{NFSU2_TR(0x438a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a45ull));
TAIL_STATIC(0x43db80u,43d);
}
B438a45:L438a45:{c.instructions+=5;NFSU2_TR(0x438a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438a48:{NFSU2_TR(0x438a48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438a4b:{NFSU2_TR(0x438a4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a4d:{NFSU2_TR(0x438a4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a4e:{NFSU2_TR(0x438a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a53ull));
TAIL_STATIC(0x4350c0u,435);
}
B438a53:L438a53:{c.instructions+=2;NFSU2_TR(0x438a53);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B438a57:{NFSU2_TR(0x438a57);
if(r1(R+518)){{goto L438a75;}}
}
B438a59:L438a59:{c.instructions+=4;NFSU2_TR(0x438a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438a5c:{NFSU2_TR(0x438a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a5d:{NFSU2_TR(0x438a5d);
u8 U[4];
w4(U+0,u32(0x785df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a62:{NFSU2_TR(0x438a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a67ull));
TAIL_STATIC(0x43db80u,43d);
}
B438a67:L438a67:{c.instructions+=5;NFSU2_TR(0x438a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438a6a:{NFSU2_TR(0x438a6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438a6d:{NFSU2_TR(0x438a6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a6f:{NFSU2_TR(0x438a6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a70:{NFSU2_TR(0x438a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a75ull));
TAIL_STATIC(0x4350c0u,435);
}
B438a75:L438a75:{c.instructions+=2;NFSU2_TR(0x438a75);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B438a79:{NFSU2_TR(0x438a79);
if(r1(R+518)){{goto L438a97;}}
}
B438a7b:L438a7b:{c.instructions+=4;NFSU2_TR(0x438a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438a7e:{NFSU2_TR(0x438a7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a7f:{NFSU2_TR(0x438a7f);
u8 U[4];
w4(U+0,u32(0x785df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a84:{NFSU2_TR(0x438a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a89ull));
TAIL_STATIC(0x43db80u,43d);
}
B438a89:L438a89:{c.instructions+=5;NFSU2_TR(0x438a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438a8c:{NFSU2_TR(0x438a8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438a8f:{NFSU2_TR(0x438a8f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a91:{NFSU2_TR(0x438a91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438a92:{NFSU2_TR(0x438a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438a97ull));
TAIL_STATIC(0x4350c0u,435);
}
B438a97:L438a97:{c.instructions+=5;NFSU2_TR(0x438a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B438a9a:{NFSU2_TR(0x438a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438a9d:{NFSU2_TR(0x438a9d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B438a9f:{NFSU2_TR(0x438a9f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438aa1:{NFSU2_TR(0x438aa1);
if(r1(R+518)){{goto L438aa9;}}
}
B438aa3:L438aa3:{c.instructions+=2;NFSU2_TR(0x438aa3);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438aa7:{NFSU2_TR(0x438aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438b0f;}}
}
B438aa9:L438aa9:{c.instructions+=4;NFSU2_TR(0x438aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438aac:{NFSU2_TR(0x438aac);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438aae:{NFSU2_TR(0x438aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438ab1:{NFSU2_TR(0x438ab1);
if(r1(R+518)){{goto L438abf;}}
}
B438ab3:L438ab3:{c.instructions+=2;NFSU2_TR(0x438ab3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ab4:{NFSU2_TR(0x438ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438ab9ull));
TAIL_STATIC(0x575630u,575);
}
B438ab9:L438ab9:{c.instructions+=2;NFSU2_TR(0x438ab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B438abc:{NFSU2_TR(0x438abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438abf:L438abf:{c.instructions+=4;NFSU2_TR(0x438abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438ac2:{NFSU2_TR(0x438ac2);
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
B438ac4:{NFSU2_TR(0x438ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438ac7:{NFSU2_TR(0x438ac7);
if(r1(R+518)){{goto L438ad8;}}
}
B438ac9:L438ac9:{c.instructions+=3;NFSU2_TR(0x438ac9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438acb:{NFSU2_TR(0x438acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438acc:{NFSU2_TR(0x438acc);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438ad2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B438ad2:L438ad2:{c.instructions+=2;NFSU2_TR(0x438ad2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438ad5:{NFSU2_TR(0x438ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438ad8:L438ad8:{c.instructions+=3;NFSU2_TR(0x438ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438adb:{NFSU2_TR(0x438adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438ade:{NFSU2_TR(0x438ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438ae3ull));
TAIL_STATIC(0x4315b0u,431);
}
B438ae3:L438ae3:{c.instructions+=3;NFSU2_TR(0x438ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B438ae6:{NFSU2_TR(0x438ae6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438ae8:{NFSU2_TR(0x438ae8);
if(r1(R+518)){{goto L438b0c;}}
}
B438aea:L438aea:{c.instructions+=2;NFSU2_TR(0x438aea);
__builtin_memmove((R+4),(R+12),4);
}
B438aec:{NFSU2_TR(0x438aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438af1ull));
TAIL_STATIC(0x436650u,436);
}
B438af1:L438af1:{c.instructions+=7;NFSU2_TR(0x438af1);
__builtin_memmove((R+0),gp(0x827b70),4);
}
B438af6:{NFSU2_TR(0x438af6);
__builtin_memmove((R+8),gp(0x827efc),4);
}
B438afc:{NFSU2_TR(0x438afc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B438afd:{NFSU2_TR(0x438afd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438afe:{NFSU2_TR(0x438afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438aff:{NFSU2_TR(0x438aff);
__builtin_memmove(gp(0x827b70),(R+0),4);
}
B438b04:{NFSU2_TR(0x438b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438b09ull));
TAIL_STATIC(0x43f920u,43f);
}
B438b09:L438b09:{c.instructions+=1;NFSU2_TR(0x438b09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438b0c:L438b0c:{c.instructions+=1;NFSU2_TR(0x438b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b0f:L438b0f:{c.instructions+=3;NFSU2_TR(0x438b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b12:{NFSU2_TR(0x438b12);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438b14:{NFSU2_TR(0x438b14);
if(r1(R+518)){{goto L438bd5;}}
}
B438b1a:L438b1a:{c.instructions+=3;NFSU2_TR(0x438b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438b1d:{NFSU2_TR(0x438b1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B438b21:{NFSU2_TR(0x438b21);
if(r1(R+518)){{goto L438b35;}}
}
B438b23:L438b23:{c.instructions+=5;NFSU2_TR(0x438b23);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B438b27:{NFSU2_TR(0x438b27);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B438b2b:{NFSU2_TR(0x438b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B438b2f:{NFSU2_TR(0x438b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b32:{NFSU2_TR(0x438b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b35:L438b35:{c.instructions+=5;NFSU2_TR(0x438b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b38:{NFSU2_TR(0x438b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438b3b:{NFSU2_TR(0x438b3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438b3e:{NFSU2_TR(0x438b3e);
w4(R+12,u32(0x69babe69ull));
}
B438b43:{NFSU2_TR(0x438b43);
if(r1(R+518)){{goto L438b86;}}
}
B438b45:L438b45:{c.instructions+=13;NFSU2_TR(0x438b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b48:{NFSU2_TR(0x438b48);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b4c:{NFSU2_TR(0x438b4c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B438b4f:{NFSU2_TR(0x438b4f);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B438b55:{NFSU2_TR(0x438b55);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B438b59:{NFSU2_TR(0x438b59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438b5a:{NFSU2_TR(0x438b5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438b5b:{NFSU2_TR(0x438b5b);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B438b5e:{NFSU2_TR(0x438b5e);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B438b61:{NFSU2_TR(0x438b61);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B438b63:{NFSU2_TR(0x438b63);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B438b69:{NFSU2_TR(0x438b69);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B438b6c:{NFSU2_TR(0x438b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438b71ull));
TAIL_STATIC(0x43c170u,43c);
}
B438b71:L438b71:{c.instructions+=6;NFSU2_TR(0x438b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b74:{NFSU2_TR(0x438b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438b77:{NFSU2_TR(0x438b77);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B438b7a:{NFSU2_TR(0x438b7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438b7d:{NFSU2_TR(0x438b7d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x100ull))));
}
B438b83:{NFSU2_TR(0x438b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b86:L438b86:{c.instructions+=4;NFSU2_TR(0x438b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438b89:{NFSU2_TR(0x438b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b8c:{NFSU2_TR(0x438b8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438b8f:{NFSU2_TR(0x438b8f);
if(r1(R+518)){{goto L438bb7;}}
}
B438b91:L438b91:{c.instructions+=9;NFSU2_TR(0x438b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438b94:{NFSU2_TR(0x438b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438b98:{NFSU2_TR(0x438b98);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B438b9b:{NFSU2_TR(0x438b9b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B438b9f:{NFSU2_TR(0x438b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438ba3:{NFSU2_TR(0x438ba3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B438ba7:{NFSU2_TR(0x438ba7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ba8:{NFSU2_TR(0x438ba8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ba9:{NFSU2_TR(0x438ba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438baeull));
TAIL_STATIC(0x43c170u,43c);
}
B438bae:L438bae:{c.instructions+=3;NFSU2_TR(0x438bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438bb1:{NFSU2_TR(0x438bb1);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B438bb4:{NFSU2_TR(0x438bb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B438bb7:L438bb7:{c.instructions+=3;NFSU2_TR(0x438bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438bba:{NFSU2_TR(0x438bba);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438bbd:{NFSU2_TR(0x438bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438bc4;}}
}
B438bbf:L438bbf:{c.instructions+=2;NFSU2_TR(0x438bbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B438bc2:{NFSU2_TR(0x438bc2);
if(r1(R+518)){{goto L438bd5;}}
}
B438bc4:L438bc4:{c.instructions+=4;NFSU2_TR(0x438bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438bc7:{NFSU2_TR(0x438bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B438bcb:{NFSU2_TR(0x438bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438bce:{NFSU2_TR(0x438bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x810ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B438bd5:L438bd5:{c.instructions+=9;NFSU2_TR(0x438bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438bd9:{NFSU2_TR(0x438bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438bda:{NFSU2_TR(0x438bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438bdb:{NFSU2_TR(0x438bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B438bdc:{NFSU2_TR(0x438bdc);
w1(R+0,u8(0x1ull));
}
B438bde:{NFSU2_TR(0x438bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B438bdf:{NFSU2_TR(0x438bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438be6:{NFSU2_TR(0x438be6);
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
B438be9:{NFSU2_TR(0x438be9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438bf0:L438bf0:{c.instructions+=3;NFSU2_TR(0x438bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438bf1:{NFSU2_TR(0x438bf1);
__builtin_memmove((R+24),(R+4),4);
}
B438bf3:{NFSU2_TR(0x438bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438bf8ull));
TAIL_STATIC(0x437500u,437);
}
B438bf8:L438bf8:{c.instructions+=2;NFSU2_TR(0x438bf8);
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
B438bfd:{NFSU2_TR(0x438bfd);
if(r1(R+518)){{goto L438c14;}}
}
B438bff:L438bff:{c.instructions+=5;NFSU2_TR(0x438bff);
s4(0x827ae8,u32(u32(m4(0x827ae8))-u32(u32(0x1ull))));
}
B438c05:{NFSU2_TR(0x438c05);
__builtin_memmove((R+0),gp(0x827ef4),4);
}
B438c0a:{NFSU2_TR(0x438c0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438c0b:{NFSU2_TR(0x438c0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438c0c:{NFSU2_TR(0x438c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438c11ull));
TAIL_STATIC(0x43f920u,43f);
}
B438c11:L438c11:{c.instructions+=1;NFSU2_TR(0x438c11);
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
B438c14:L438c14:{c.instructions+=3;NFSU2_TR(0x438c14);
__builtin_memmove((R+0),(R+24),4);
}
B438c16:{NFSU2_TR(0x438c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438c17:{NFSU2_TR(0x438c17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438c20:L438c20:{c.instructions+=3;NFSU2_TR(0x438c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438c24:{NFSU2_TR(0x438c24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37080ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B438c2a:{NFSU2_TR(0x438c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c57;}}
}
B438c2c:L438c2c:{c.instructions+=3;NFSU2_TR(0x438c2c);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B438c32:{NFSU2_TR(0x438c32);
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
B438c34:{NFSU2_TR(0x438c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c51;}}
}
B438c36:L438c36:{c.instructions+=3;NFSU2_TR(0x438c36);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B438c3c:{NFSU2_TR(0x438c3c);
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
B438c3e:{NFSU2_TR(0x438c3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c51;}}
}
B438c40:L438c40:{c.instructions+=5;NFSU2_TR(0x438c40);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B438c43:{NFSU2_TR(0x438c43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B438c46:{NFSU2_TR(0x438c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438c47:{NFSU2_TR(0x438c47);
w4(R+4,u32(0x827ef0ull));
}
B438c4c:{NFSU2_TR(0x438c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438c51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438420u);}goto L438420;}
}
B438c51:L438c51:{c.instructions+=2;NFSU2_TR(0x438c51);
w4(R+0,u32(0x1ull));
}
B438c56:{NFSU2_TR(0x438c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438c57:L438c57:{c.instructions+=2;NFSU2_TR(0x438c57);
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
B438c59:{NFSU2_TR(0x438c59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438c60:L438c60:{c.instructions+=3;NFSU2_TR(0x438c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438c64:{NFSU2_TR(0x438c64);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37090ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B438c6a:{NFSU2_TR(0x438c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c97;}}
}
B438c6c:L438c6c:{c.instructions+=3;NFSU2_TR(0x438c6c);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B438c72:{NFSU2_TR(0x438c72);
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
B438c74:{NFSU2_TR(0x438c74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c91;}}
}
B438c76:L438c76:{c.instructions+=3;NFSU2_TR(0x438c76);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B438c7c:{NFSU2_TR(0x438c7c);
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
B438c7e:{NFSU2_TR(0x438c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438c91;}}
}
B438c80:L438c80:{c.instructions+=5;NFSU2_TR(0x438c80);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B438c83:{NFSU2_TR(0x438c83);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B438c86:{NFSU2_TR(0x438c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438c87:{NFSU2_TR(0x438c87);
w4(R+4,u32(0x827ef0ull));
}
B438c8c:{NFSU2_TR(0x438c8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438c91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438470u);}goto L438470;}
}
B438c91:L438c91:{c.instructions+=2;NFSU2_TR(0x438c91);
w4(R+0,u32(0x1ull));
}
B438c96:{NFSU2_TR(0x438c96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438c97:L438c97:{c.instructions+=2;NFSU2_TR(0x438c97);
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
B438c99:{NFSU2_TR(0x438c99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438ca0:L438ca0:{c.instructions+=4;NFSU2_TR(0x438ca0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438ca5:{NFSU2_TR(0x438ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B438ca8:{NFSU2_TR(0x438ca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438caa:{NFSU2_TR(0x438caa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e1b;}}
}
B438cb0:L438cb0:{c.instructions+=3;NFSU2_TR(0x438cb0);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438cb5:{NFSU2_TR(0x438cb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438cb7:{NFSU2_TR(0x438cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e1b;}}
}
B438cbd:L438cbd:{c.instructions+=7;NFSU2_TR(0x438cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438cc1:{NFSU2_TR(0x438cc1);
u8 U[8];
__builtin_memmove((U+0),gp(0x827f40),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438cc7:{NFSU2_TR(0x438cc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438cc8:{NFSU2_TR(0x438cc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438cc9:{NFSU2_TR(0x438cc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438cca:{NFSU2_TR(0x438cca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ccb:{NFSU2_TR(0x438ccb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438d82;}}
}
B438cd1:L438cd1:{c.instructions+=4;NFSU2_TR(0x438cd1);
__builtin_memmove((R+0),gp(0x865024),4);
}
B438cd6:{NFSU2_TR(0x438cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438cd8:{NFSU2_TR(0x438cd8);
__builtin_memmove((R+12),(R+0),4);
}
B438cda:{NFSU2_TR(0x438cda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438ce2;}}
}
B438cdc:L438cdc:{c.instructions+=1;NFSU2_TR(0x438cdc);
__builtin_memmove((R+12),gp(0x827ed4),4);
}
B438ce2:L438ce2:{c.instructions+=2;NFSU2_TR(0x438ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438ce4:{NFSU2_TR(0x438ce4);
if(r1(R+518)){{goto L438e17;}}
}
B438cea:L438cea:{c.instructions+=8;NFSU2_TR(0x438cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438cee:{NFSU2_TR(0x438cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438cf2:{NFSU2_TR(0x438cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438cf5:{NFSU2_TR(0x438cf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438cf9:{NFSU2_TR(0x438cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438cfb:{NFSU2_TR(0x438cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438cfd:{NFSU2_TR(0x438cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438d01:{NFSU2_TR(0x438d01);
if(r1(R+518)){{goto L438d08;}}
}
B438d03:L438d03:{c.instructions+=2;NFSU2_TR(0x438d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B438d06:{NFSU2_TR(0x438d06);
{goto L438d0a;}
}
B438d08:L438d08:{c.instructions+=1;NFSU2_TR(0x438d08);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B438d0a:L438d0a:{c.instructions+=1;NFSU2_TR(0x438d0a);
__builtin_memmove((R+4),gp(0x827f0c),4);
}
B438d10:L438d10:{c.instructions+=2;NFSU2_TR(0x438d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438d12:{NFSU2_TR(0x438d12);
if(r1(R+518)){{goto L438d19;}}
}
B438d14:L438d14:{c.instructions+=2;NFSU2_TR(0x438d14);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B438d17:{NFSU2_TR(0x438d17);
{goto L438d1b;}
}
B438d19:L438d19:{c.instructions+=1;NFSU2_TR(0x438d19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438d1b:L438d1b:{c.instructions+=2;NFSU2_TR(0x438d1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438d1d:{NFSU2_TR(0x438d1d);
if(r1(R+518)){{goto L438e17;}}
}
B438d23:L438d23:{c.instructions+=3;NFSU2_TR(0x438d23);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438d28:{NFSU2_TR(0x438d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438d2a:{NFSU2_TR(0x438d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438d72;}}
}
B438d2c:L438d2c:{c.instructions+=3;NFSU2_TR(0x438d2c);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438d31:{NFSU2_TR(0x438d31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438d33:{NFSU2_TR(0x438d33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438d72;}}
}
B438d35:L438d35:{c.instructions+=3;NFSU2_TR(0x438d35);
__builtin_memmove((R+0),gp(0x827f04),1);
}
B438d3a:{NFSU2_TR(0x438d3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438d3c:{NFSU2_TR(0x438d3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438d4e;}}
}
B438d3e:L438d3e:{c.instructions+=2;NFSU2_TR(0x438d3e);
w4(R+4,u32(0x827ef0ull));
}
B438d43:{NFSU2_TR(0x438d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438d48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4385b0u);}goto L4385b0;}
}
B438d48:L438d48:{c.instructions+=1;NFSU2_TR(0x438d48);
__builtin_memmove((R+4),gp(0x827f0c),4);
}
B438d4e:L438d4e:{c.instructions+=2;NFSU2_TR(0x438d4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438d50:{NFSU2_TR(0x438d50);
if(r1(R+518)){{goto L438d72;}}
}
B438d52:L438d52:{c.instructions+=2;NFSU2_TR(0x438d52);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
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
B438d55:{NFSU2_TR(0x438d55);
if(r1(R+518)){{goto L438d5c;}}
}
B438d57:L438d57:{c.instructions+=2;NFSU2_TR(0x438d57);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B438d5a:{NFSU2_TR(0x438d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438d72;}}
}
B438d5c:L438d5c:{c.instructions+=7;NFSU2_TR(0x438d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438d5e:{NFSU2_TR(0x438d5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B438d62:{NFSU2_TR(0x438d62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438d63:{NFSU2_TR(0x438d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438d67:{NFSU2_TR(0x438d67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438d68:{NFSU2_TR(0x438d68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438d69:{NFSU2_TR(0x438d69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438d6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B438d6c:L438d6c:{c.instructions+=1;NFSU2_TR(0x438d6c);
__builtin_memmove((R+4),gp(0x827f0c),4);
}
B438d72:L438d72:{c.instructions+=3;NFSU2_TR(0x438d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B438d75:{NFSU2_TR(0x438d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438d77:{NFSU2_TR(0x438d77);
if(r1(R+518)){{goto L438d7e;}}
}
B438d79:L438d79:{c.instructions+=2;NFSU2_TR(0x438d79);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B438d7c:{NFSU2_TR(0x438d7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438d10u);}goto L438d10;}
}
B438d7e:L438d7e:{c.instructions+=2;NFSU2_TR(0x438d7e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B438d80:{NFSU2_TR(0x438d80);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438d10u);}goto L438d10;}
}
B438d82:L438d82:{c.instructions+=2;NFSU2_TR(0x438d82);
u8 U[8];
__builtin_memmove((U+0),gp(0x827c8c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438d88:{NFSU2_TR(0x438d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e17;}}
}
B438d8e:L438d8e:{c.instructions+=8;NFSU2_TR(0x438d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438d92:{NFSU2_TR(0x438d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B438d96:{NFSU2_TR(0x438d96);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438d9a:{NFSU2_TR(0x438d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B438d9d:{NFSU2_TR(0x438d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438da1:{NFSU2_TR(0x438da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438da3:{NFSU2_TR(0x438da3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438da7:{NFSU2_TR(0x438da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438dab:L438dab:{c.instructions+=2;NFSU2_TR(0x438dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438dad:{NFSU2_TR(0x438dad);
if(r1(R+518)){{goto L438db4;}}
}
B438daf:L438daf:{c.instructions+=2;NFSU2_TR(0x438daf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B438db2:{NFSU2_TR(0x438db2);
{goto L438db6;}
}
B438db4:L438db4:{c.instructions+=1;NFSU2_TR(0x438db4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B438db6:L438db6:{c.instructions+=2;NFSU2_TR(0x438db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438db8:{NFSU2_TR(0x438db8);
if(r1(R+518)){{goto L438dbf;}}
}
B438dba:L438dba:{c.instructions+=2;NFSU2_TR(0x438dba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B438dbd:{NFSU2_TR(0x438dbd);
{goto L438dc1;}
}
B438dbf:L438dbf:{c.instructions+=1;NFSU2_TR(0x438dbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438dc1:L438dc1:{c.instructions+=2;NFSU2_TR(0x438dc1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B438dc3:{NFSU2_TR(0x438dc3);
if(r1(R+518)){{goto L438e17;}}
}
B438dc5:L438dc5:{c.instructions+=3;NFSU2_TR(0x438dc5);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438dca:{NFSU2_TR(0x438dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438dcc:{NFSU2_TR(0x438dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e12;}}
}
B438dce:L438dce:{c.instructions+=3;NFSU2_TR(0x438dce);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438dd3:{NFSU2_TR(0x438dd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438dd5:{NFSU2_TR(0x438dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e12;}}
}
B438dd7:L438dd7:{c.instructions+=3;NFSU2_TR(0x438dd7);
__builtin_memmove((R+0),gp(0x827f04),1);
}
B438ddc:{NFSU2_TR(0x438ddc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438dde:{NFSU2_TR(0x438dde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438dea;}}
}
B438de0:L438de0:{c.instructions+=2;NFSU2_TR(0x438de0);
w4(R+4,u32(0x827ef0ull));
}
B438de5:{NFSU2_TR(0x438de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438deaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4385b0u);}goto L4385b0;}
}
B438dea:L438dea:{c.instructions+=3;NFSU2_TR(0x438dea);
__builtin_memmove((R+24),gp(0x827f10),4);
}
B438df0:{NFSU2_TR(0x438df0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438df2:{NFSU2_TR(0x438df2);
if(r1(R+518)){{goto L438e12;}}
}
B438df4:L438df4:{c.instructions+=3;NFSU2_TR(0x438df4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438df5:{NFSU2_TR(0x438df5);
__builtin_memmove((R+4),(R+28),4);
}
B438df7:{NFSU2_TR(0x438df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438dfcull));
TAIL_STATIC(0x4320f0u,432);
}
B438dfc:L438dfc:{c.instructions+=2;NFSU2_TR(0x438dfc);
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
B438dfe:{NFSU2_TR(0x438dfe);
if(r1(R+518)){{goto L438e12;}}
}
B438e00:L438e00:{c.instructions+=8;NFSU2_TR(0x438e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438e04:{NFSU2_TR(0x438e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438e06:{NFSU2_TR(0x438e06);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B438e0a:{NFSU2_TR(0x438e0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e0b:{NFSU2_TR(0x438e0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e0c:{NFSU2_TR(0x438e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e0d:{NFSU2_TR(0x438e0d);
__builtin_memmove((R+4),(R+24),4);
}
B438e0f:{NFSU2_TR(0x438e0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438e12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B438e12:L438e12:{c.instructions+=2;NFSU2_TR(0x438e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438e15:{NFSU2_TR(0x438e15);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438dabu);}goto L438dab;}
}
B438e17:L438e17:{c.instructions+=4;NFSU2_TR(0x438e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438e18:{NFSU2_TR(0x438e18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438e19:{NFSU2_TR(0x438e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B438e1a:{NFSU2_TR(0x438e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B438e1b:L438e1b:{c.instructions+=2;NFSU2_TR(0x438e1b);
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
B438e1e:{NFSU2_TR(0x438e1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438e30:L438e30:{c.instructions+=3;NFSU2_TR(0x438e30);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438e35:{NFSU2_TR(0x438e35);
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
B438e37:{NFSU2_TR(0x438e37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e6a;}}
}
B438e39:L438e39:{c.instructions+=3;NFSU2_TR(0x438e39);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438e3e:{NFSU2_TR(0x438e3e);
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
B438e40:{NFSU2_TR(0x438e40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438e6a;}}
}
B438e42:L438e42:{c.instructions+=3;NFSU2_TR(0x438e42);
__builtin_memmove((R+4),gp(0x827b94),4);
}
B438e48:{NFSU2_TR(0x438e48);
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
B438e4a:{NFSU2_TR(0x438e4a);
if(r1(R+518)){{goto L438e6a;}}
}
B438e4c:L438e4c:{c.instructions+=11;NFSU2_TR(0x438e4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438e50:{NFSU2_TR(0x438e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438e54:{NFSU2_TR(0x438e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e55:{NFSU2_TR(0x438e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438e59:{NFSU2_TR(0x438e59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e5a:{NFSU2_TR(0x438e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438e5e:{NFSU2_TR(0x438e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e5f:{NFSU2_TR(0x438e5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438e63:{NFSU2_TR(0x438e63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e64:{NFSU2_TR(0x438e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e65:{NFSU2_TR(0x438e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438e6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438ca0u);}goto L438ca0;}
}
B438e6a:L438e6a:{c.instructions+=1;NFSU2_TR(0x438e6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438e70:L438e70:{c.instructions+=4;NFSU2_TR(0x438e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438e74:{NFSU2_TR(0x438e74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e75:{NFSU2_TR(0x438e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e76:{NFSU2_TR(0x438e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438e7bull));
TAIL_STATIC(0x432490u,432);
}
B438e7b:L438e7b:{c.instructions+=3;NFSU2_TR(0x438e7b);
__builtin_memmove((R+24),(R+0),4);
}
B438e7d:{NFSU2_TR(0x438e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438e7f:{NFSU2_TR(0x438e7f);
if(r1(R+518)){{goto L438eb5;}}
}
B438e81:L438e81:{c.instructions+=5;NFSU2_TR(0x438e81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e82:{NFSU2_TR(0x438e82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B438e86:{NFSU2_TR(0x438e86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438e87:{NFSU2_TR(0x438e87);
__builtin_memmove((R+4),(R+24),4);
}
B438e89:{NFSU2_TR(0x438e89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438e8eull));
TAIL_STATIC(0x4326b0u,432);
}
B438e8e:L438e8e:{c.instructions+=2;NFSU2_TR(0x438e8e);
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
B438e90:{NFSU2_TR(0x438e90);
if(r1(R+518)){{goto L438ea1;}}
}
B438e92:L438e92:{c.instructions+=6;NFSU2_TR(0x438e92);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B438e97:{NFSU2_TR(0x438e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438e98:{NFSU2_TR(0x438e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438e9b:{NFSU2_TR(0x438e9b);
w1(R+0,u8(0x1ull));
}
B438e9d:{NFSU2_TR(0x438e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438e9e:{NFSU2_TR(0x438e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438ea1:L438ea1:{c.instructions+=5;NFSU2_TR(0x438ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438ea5:{NFSU2_TR(0x438ea5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ea6:{NFSU2_TR(0x438ea6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ea7:{NFSU2_TR(0x438ea7);
__builtin_memmove((R+4),(R+24),4);
}
B438ea9:{NFSU2_TR(0x438ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438eaeull));
TAIL_STATIC(0x435ef0u,435);
}
B438eae:L438eae:{c.instructions+=4;NFSU2_TR(0x438eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B438eaf:{NFSU2_TR(0x438eaf);
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
B438eb1:{NFSU2_TR(0x438eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438eb2:{NFSU2_TR(0x438eb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438eb5:L438eb5:{c.instructions+=3;NFSU2_TR(0x438eb5);
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
B438eb7:{NFSU2_TR(0x438eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438eb8:{NFSU2_TR(0x438eb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438ec0:L438ec0:{c.instructions+=5;NFSU2_TR(0x438ec0);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B438ec5:{NFSU2_TR(0x438ec5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B438ec7:{NFSU2_TR(0x438ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ec8:{NFSU2_TR(0x438ec8);
__builtin_memmove((R+24),(R+4),4);
}
B438eca:{NFSU2_TR(0x438eca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L438ed5;}}
}
B438ecc:L438ecc:{c.instructions+=3;NFSU2_TR(0x438ecc);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B438ed1:{NFSU2_TR(0x438ed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438ed3:{NFSU2_TR(0x438ed3);
if(r1(R+518)){{goto L438edc;}}
}
B438ed5:L438ed5:{c.instructions+=3;NFSU2_TR(0x438ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438ed8:{NFSU2_TR(0x438ed8);
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
B438eda:{NFSU2_TR(0x438eda);
if(r1(R+518)){{goto L438f07;}}
}
B438edc:L438edc:{c.instructions+=3;NFSU2_TR(0x438edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438edf:{NFSU2_TR(0x438edf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B438ee1:{NFSU2_TR(0x438ee1);
if(r1(R+518)){{goto L438efc;}}
}
B438ee3:L438ee3:{c.instructions+=1;NFSU2_TR(0x438ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438ee8ull));
TAIL_STATIC(0x432130u,432);
}
B438ee8:L438ee8:{c.instructions+=3;NFSU2_TR(0x438ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438eeb:{NFSU2_TR(0x438eeb);
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
B438eed:{NFSU2_TR(0x438eed);
if(r1(R+518)){{goto L438ef5;}}
}
B438eef:L438eef:{c.instructions+=3;NFSU2_TR(0x438eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B438ef1:{NFSU2_TR(0x438ef1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438ef3:{NFSU2_TR(0x438ef3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438ef5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B438ef5:L438ef5:{c.instructions+=1;NFSU2_TR(0x438ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B438efc:L438efc:{c.instructions+=3;NFSU2_TR(0x438efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438efd:{NFSU2_TR(0x438efd);
w4(R+4,u32(0x827ef0ull));
}
B438f02:{NFSU2_TR(0x438f02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x438660u);}goto L438660;}
}
B438f07:L438f07:{c.instructions+=2;NFSU2_TR(0x438f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438f08:{NFSU2_TR(0x438f08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438f10:L438f10:{c.instructions+=3;NFSU2_TR(0x438f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f11:{NFSU2_TR(0x438f11);
__builtin_memmove((R+24),(R+4),4);
}
B438f13:{NFSU2_TR(0x438f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438f18ull));
TAIL_STATIC(0x437760u,437);
}
B438f18:L438f18:{c.instructions+=2;NFSU2_TR(0x438f18);
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
B438f1d:{NFSU2_TR(0x438f1d);
if(r1(R+518)){{goto L438f28;}}
}
B438f1f:L438f1f:{c.instructions+=2;NFSU2_TR(0x438f1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f20:{NFSU2_TR(0x438f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438f25ull));
TAIL_STATIC(0x575630u,575);
}
B438f25:L438f25:{c.instructions+=1;NFSU2_TR(0x438f25);
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
B438f28:L438f28:{c.instructions+=3;NFSU2_TR(0x438f28);
__builtin_memmove((R+0),(R+24),4);
}
B438f2a:{NFSU2_TR(0x438f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B438f2b:{NFSU2_TR(0x438f2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B438f30:L438f30:{c.instructions+=45;NFSU2_TR(0x438f30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f32:{NFSU2_TR(0x438f32);
u8 U[4];
w4(U+0,u32(0x771ecfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f37:{NFSU2_TR(0x438f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B438f3d:{NFSU2_TR(0x438f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f3e:{NFSU2_TR(0x438f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f45:{NFSU2_TR(0x438f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f46:{NFSU2_TR(0x438f46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f47:{NFSU2_TR(0x438f47);
__builtin_memmove((R+24),(R+4),4);
}
B438f49:{NFSU2_TR(0x438f49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438f4d:{NFSU2_TR(0x438f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f50:{NFSU2_TR(0x438f50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B438f52:{NFSU2_TR(0x438f52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B438f55:{NFSU2_TR(0x438f55);
u8 U[4];
w4(U+0,u32(0x786394ull));
s4(u32(r4(R+24)),r4(U+0));
}
B438f5b:{NFSU2_TR(0x438f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f5e:{NFSU2_TR(0x438f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f62:{NFSU2_TR(0x438f62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438f64:{NFSU2_TR(0x438f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f67:{NFSU2_TR(0x438f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B438f6a:{NFSU2_TR(0x438f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f6d:{NFSU2_TR(0x438f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f70:{NFSU2_TR(0x438f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f73:{NFSU2_TR(0x438f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f76:{NFSU2_TR(0x438f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f7a:{NFSU2_TR(0x438f7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438f7c:{NFSU2_TR(0x438f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f7f:{NFSU2_TR(0x438f7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B438f82:{NFSU2_TR(0x438f82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B438f84:{NFSU2_TR(0x438f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f87:{NFSU2_TR(0x438f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438f8b:{NFSU2_TR(0x438f8b);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438f90:{NFSU2_TR(0x438f90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B438f93:{NFSU2_TR(0x438f93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B438f96:{NFSU2_TR(0x438f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438f9c:{NFSU2_TR(0x438f9c);
u8 U[4];
w4(U+0,u32(0x430b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438fa1:{NFSU2_TR(0x438fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fa4:{NFSU2_TR(0x438fa4);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438fa6:{NFSU2_TR(0x438fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fac:{NFSU2_TR(0x438fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fb2:{NFSU2_TR(0x438fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fb8:{NFSU2_TR(0x438fb8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438fba:{NFSU2_TR(0x438fba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B438fc0:{NFSU2_TR(0x438fc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B438fc1:{NFSU2_TR(0x438fc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B438fc6:{NFSU2_TR(0x438fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x7860d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B438fd0:{NFSU2_TR(0x438fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x438fd5ull));
TAIL_STATIC(0x75c461u,75c);
}
B438fd5:L438fd5:{c.instructions+=10;NFSU2_TR(0x438fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B438fd9:{NFSU2_TR(0x438fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B438fdd:{NFSU2_TR(0x438fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fe3:{NFSU2_TR(0x438fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B438fe9:{NFSU2_TR(0x438fe9);
__builtin_memmove((R+0),gp(0x827b20),4);
}
B438fee:{NFSU2_TR(0x438fee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B438fef:{NFSU2_TR(0x438fef);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B438ff4:{NFSU2_TR(0x438ff4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B438ff9:{NFSU2_TR(0x438ff9);
__builtin_memmove(gp(0x827b20),(R+0),4);
}
B438ffe:{NFSU2_TR(0x438ffe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x43900au,439);}
TAIL_STATIC(0x439000u,439);
}
XIT:NFSU2_TR_EXIT(0x438,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
