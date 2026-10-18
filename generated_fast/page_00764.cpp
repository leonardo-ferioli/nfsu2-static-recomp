#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x764,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x764,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_764(u8* __restrict R,Cpu& c);
u32 page_764(Cpu& c){return body_764(c.regs.data(),c);}
__attribute__((noinline)) u32 body_764(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x764000:goto L764000;
case 0x764002:c.instructions+=2;goto B764002;
case 0x764005:c.instructions+=1;goto B764005;
case 0x76400b:goto L76400b;
case 0x76400f:c.instructions+=2;goto B76400f;
case 0x764012:c.instructions+=1;goto B764012;
case 0x764017:goto L764017;
case 0x76401a:c.instructions+=5;goto B76401a;
case 0x76401d:c.instructions+=4;goto B76401d;
case 0x764020:c.instructions+=3;goto B764020;
case 0x764024:c.instructions+=2;goto B764024;
case 0x764027:c.instructions+=1;goto B764027;
case 0x76402c:goto L76402c;
case 0x764030:c.instructions+=1;goto B764030;
case 0x764035:goto L764035;
case 0x764038:c.instructions+=1;goto B764038;
case 0x76403a:goto L76403a;
case 0x76403e:c.instructions+=5;goto B76403e;
case 0x764041:c.instructions+=4;goto B764041;
case 0x764044:c.instructions+=3;goto B764044;
case 0x764046:c.instructions+=2;goto B764046;
case 0x764049:c.instructions+=1;goto B764049;
case 0x76404f:goto L76404f;
case 0x764053:c.instructions+=1;goto B764053;
case 0x764058:goto L764058;
case 0x76405b:c.instructions+=5;goto B76405b;
case 0x76405e:c.instructions+=4;goto B76405e;
case 0x764061:c.instructions+=3;goto B764061;
case 0x764065:c.instructions+=2;goto B764065;
case 0x764068:c.instructions+=1;goto B764068;
case 0x76406d:goto L76406d;
case 0x764070:c.instructions+=1;goto B764070;
case 0x764072:goto L764072;
case 0x764075:c.instructions+=1;goto B764075;
case 0x764077:goto L764077;
case 0x76407a:c.instructions+=1;goto B76407a;
case 0x76407c:goto L76407c;
case 0x76407f:c.instructions+=1;goto B76407f;
case 0x764085:goto L764085;
case 0x764089:c.instructions+=1;goto B764089;
case 0x76408e:goto L76408e;
case 0x764092:c.instructions+=1;goto B764092;
case 0x764097:goto L764097;
case 0x76409b:c.instructions+=1;goto B76409b;
case 0x7640a0:goto L7640a0;
case 0x7640a2:c.instructions+=2;goto B7640a2;
case 0x7640a4:c.instructions+=1;goto B7640a4;
case 0x7640a6:goto L7640a6;
case 0x7640aa:c.instructions+=1;goto B7640aa;
case 0x7640ac:goto L7640ac;
case 0x7640ad:c.instructions+=4;goto B7640ad;
case 0x7640ae:c.instructions+=3;goto B7640ae;
case 0x7640b2:c.instructions+=2;goto B7640b2;
case 0x7640b5:c.instructions+=1;goto B7640b5;
case 0x7640ba:goto L7640ba;
case 0x7640bc:c.instructions+=1;goto B7640bc;
case 0x7640be:goto L7640be;
case 0x7640c2:c.instructions+=1;goto B7640c2;
case 0x7640c4:goto L7640c4;
case 0x7640c5:c.instructions+=4;goto B7640c5;
case 0x7640c6:c.instructions+=3;goto B7640c6;
case 0x7640ca:c.instructions+=2;goto B7640ca;
case 0x7640cd:c.instructions+=1;goto B7640cd;
case 0x7640d2:goto L7640d2;
case 0x7640d4:c.instructions+=1;goto B7640d4;
case 0x7640da:goto L7640da;
case 0x7640dc:c.instructions+=1;goto B7640dc;
case 0x7640e2:goto L7640e2;
case 0x7640e4:c.instructions+=1;goto B7640e4;
case 0x7640ea:goto L7640ea;
case 0x7640ec:c.instructions+=1;goto B7640ec;
case 0x7640f2:goto L7640f2;
case 0x7640f4:c.instructions+=1;goto B7640f4;
case 0x7640fa:goto L7640fa;
case 0x7640fc:c.instructions+=1;goto B7640fc;
case 0x764102:goto L764102;
case 0x764106:c.instructions+=5;goto B764106;
case 0x76410c:c.instructions+=4;goto B76410c;
case 0x764110:c.instructions+=3;goto B764110;
case 0x764113:c.instructions+=2;goto B764113;
case 0x764118:c.instructions+=1;goto B764118;
case 0x76411a:goto L76411a;
case 0x76411d:c.instructions+=3;goto B76411d;
case 0x764120:c.instructions+=2;goto B764120;
case 0x764122:c.instructions+=1;goto B764122;
case 0x764127:goto L764127;
case 0x764129:c.instructions+=2;goto B764129;
case 0x76412a:c.instructions+=1;goto B76412a;
case 0x76412d:goto L76412d;
case 0x764130:c.instructions+=3;goto B764130;
case 0x764133:c.instructions+=2;goto B764133;
case 0x764135:c.instructions+=1;goto B764135;
case 0x76413a:goto L76413a;
case 0x76413f:goto L76413f;
case 0x764142:c.instructions+=2;goto B764142;
case 0x764145:c.instructions+=1;goto B764145;
case 0x76414b:goto L76414b;
case 0x76414e:c.instructions+=1;goto B76414e;
case 0x764154:goto L764154;
case 0x764157:c.instructions+=1;goto B764157;
case 0x76415d:goto L76415d;
case 0x764163:goto L764163;
case 0x764166:c.instructions+=1;goto B764166;
case 0x76416c:goto L76416c;
case 0x76416d:c.instructions+=2;goto B76416d;
case 0x76416e:c.instructions+=1;goto B76416e;
case 0x764170:goto L764170;
case 0x764171:c.instructions+=2;goto B764171;
case 0x764172:c.instructions+=1;goto B764172;
case 0x764174:goto L764174;
case 0x764177:c.instructions+=1;goto B764177;
case 0x76417d:goto L76417d;
case 0x764183:c.instructions+=1;goto B764183;
case 0x764185:goto L764185;
case 0x764189:goto L764189;
case 0x76418c:c.instructions+=2;goto B76418c;
case 0x76418f:c.instructions+=1;goto B76418f;
case 0x764191:goto L764191;
case 0x764196:goto L764196;
case 0x76419a:c.instructions+=5;goto B76419a;
case 0x7641a0:c.instructions+=4;goto B7641a0;
case 0x7641a3:c.instructions+=3;goto B7641a3;
case 0x7641a6:c.instructions+=2;goto B7641a6;
case 0x7641a9:c.instructions+=1;goto B7641a9;
case 0x7641af:goto L7641af;
case 0x7641b1:c.instructions+=1;goto B7641b1;
case 0x7641b3:goto L7641b3;
case 0x7641b8:c.instructions+=1;goto B7641b8;
case 0x7641bb:goto L7641bb;
case 0x7641be:c.instructions+=2;goto B7641be;
case 0x7641c5:c.instructions+=1;goto B7641c5;
case 0x7641ca:goto L7641ca;
case 0x7641d1:c.instructions+=1;goto B7641d1;
case 0x7641d4:goto L7641d4;
case 0x7641d8:c.instructions+=4;goto B7641d8;
case 0x7641dc:c.instructions+=3;goto B7641dc;
case 0x7641e2:c.instructions+=2;goto B7641e2;
case 0x7641e5:c.instructions+=1;goto B7641e5;
case 0x7641eb:goto L7641eb;
case 0x7641f2:c.instructions+=1;goto B7641f2;
case 0x7641f7:goto L7641f7;
case 0x7641fd:c.instructions+=1;goto B7641fd;
case 0x7641ff:goto L7641ff;
case 0x764203:goto L764203;
case 0x764207:c.instructions+=3;goto B764207;
case 0x76420d:c.instructions+=2;goto B76420d;
case 0x764210:c.instructions+=1;goto B764210;
case 0x764212:goto L764212;
case 0x764216:c.instructions+=4;goto B764216;
case 0x764217:c.instructions+=3;goto B764217;
case 0x76421d:c.instructions+=2;goto B76421d;
case 0x76421e:c.instructions+=1;goto B76421e;
case 0x764223:goto L764223;
case 0x764225:c.instructions+=4;goto B764225;
case 0x764226:c.instructions+=3;goto B764226;
case 0x764227:c.instructions+=2;goto B764227;
case 0x76422a:c.instructions+=1;goto B76422a;
case 0x76422c:goto L76422c;
case 0x764233:c.instructions+=1;goto B764233;
case 0x764235:goto L764235;
case 0x764238:c.instructions+=1;goto B764238;
case 0x76423a:goto L76423a;
case 0x76423d:c.instructions+=1;goto B76423d;
case 0x76423f:goto L76423f;
case 0x764240:c.instructions+=1;goto B764240;
case 0x764246:goto L764246;
case 0x76424a:goto L76424a;
case 0x764251:goto L764251;
case 0x764254:c.instructions+=3;goto B764254;
case 0x764259:c.instructions+=2;goto B764259;
case 0x76425b:c.instructions+=1;goto B76425b;
case 0x764261:goto L764261;
case 0x764264:c.instructions+=5;goto B764264;
case 0x764266:c.instructions+=4;goto B764266;
case 0x764269:c.instructions+=3;goto B764269;
case 0x76426c:c.instructions+=2;goto B76426c;
case 0x76426f:c.instructions+=1;goto B76426f;
case 0x764274:goto L764274;
case 0x764277:c.instructions+=2;goto B764277;
case 0x76427d:c.instructions+=1;goto B76427d;
case 0x764284:goto L764284;
case 0x76428a:c.instructions+=2;goto B76428a;
case 0x76428d:c.instructions+=1;goto B76428d;
case 0x764292:goto L764292;
case 0x764296:c.instructions+=4;goto B764296;
case 0x764299:c.instructions+=3;goto B764299;
case 0x76429c:c.instructions+=2;goto B76429c;
case 0x76429e:c.instructions+=1;goto B76429e;
case 0x7642a0:goto L7642a0;
case 0x7642a3:c.instructions+=2;goto B7642a3;
case 0x7642a5:c.instructions+=1;goto B7642a5;
case 0x7642a7:goto L7642a7;
case 0x7642ab:c.instructions+=3;goto B7642ab;
case 0x7642ae:c.instructions+=2;goto B7642ae;
case 0x7642b1:c.instructions+=1;goto B7642b1;
case 0x7642b3:goto L7642b3;
case 0x7642b4:c.instructions+=4;goto B7642b4;
case 0x7642b6:c.instructions+=3;goto B7642b6;
case 0x7642b8:c.instructions+=2;goto B7642b8;
case 0x7642bf:c.instructions+=1;goto B7642bf;
case 0x7642c4:goto L7642c4;
case 0x7642c8:c.instructions+=1;goto B7642c8;
case 0x7642cd:goto L7642cd;
case 0x7642d2:c.instructions+=3;goto B7642d2;
case 0x7642d5:c.instructions+=2;goto B7642d5;
case 0x7642d6:c.instructions+=1;goto B7642d6;
case 0x7642db:goto L7642db;
case 0x7642dd:goto L7642dd;
case 0x7642e0:c.instructions+=1;goto B7642e0;
case 0x7642e2:goto L7642e2;
case 0x7642e9:c.instructions+=1;goto B7642e9;
case 0x7642eb:goto L7642eb;
case 0x7642f0:c.instructions+=2;goto B7642f0;
case 0x7642f3:c.instructions+=1;goto B7642f3;
case 0x7642f5:goto L7642f5;
case 0x7642f8:goto L7642f8;
case 0x7642fd:c.instructions+=2;goto B7642fd;
case 0x764300:c.instructions+=1;goto B764300;
case 0x764302:goto L764302;
case 0x764305:c.instructions+=3;goto B764305;
case 0x76430a:c.instructions+=2;goto B76430a;
case 0x76430b:c.instructions+=1;goto B76430b;
case 0x764310:goto L764310;
case 0x764312:c.instructions+=3;goto B764312;
case 0x764313:c.instructions+=2;goto B764313;
case 0x764316:c.instructions+=1;goto B764316;
case 0x764318:goto L764318;
case 0x76431b:c.instructions+=2;goto B76431b;
case 0x76431d:c.instructions+=1;goto B76431d;
case 0x76431f:goto L76431f;
case 0x764322:goto L764322;
case 0x764325:c.instructions+=14;goto B764325;
case 0x764327:c.instructions+=13;goto B764327;
case 0x76432a:c.instructions+=12;goto B76432a;
case 0x76432d:c.instructions+=11;goto B76432d;
case 0x764330:c.instructions+=10;goto B764330;
case 0x764333:c.instructions+=9;goto B764333;
case 0x764336:c.instructions+=8;goto B764336;
case 0x764339:c.instructions+=7;goto B764339;
case 0x76433c:c.instructions+=6;goto B76433c;
case 0x76433d:c.instructions+=5;goto B76433d;
case 0x764340:c.instructions+=4;goto B764340;
case 0x764341:c.instructions+=3;goto B764341;
case 0x764342:c.instructions+=2;goto B764342;
case 0x764345:c.instructions+=1;goto B764345;
case 0x76434b:goto L76434b;
case 0x76434e:c.instructions+=3;goto B76434e;
case 0x764351:c.instructions+=2;goto B764351;
case 0x764357:c.instructions+=1;goto B764357;
case 0x764359:goto L764359;
case 0x76435d:c.instructions+=1;goto B76435d;
case 0x76435f:goto L76435f;
case 0x764360:c.instructions+=1;goto B764360;
case 0x764366:goto L764366;
case 0x764367:goto L764367;
case 0x76436a:c.instructions+=1;goto B76436a;
case 0x76436c:goto L76436c;
case 0x76436e:c.instructions+=1;goto B76436e;
case 0x764370:goto L764370;
case 0x764371:c.instructions+=1;goto B764371;
case 0x764377:goto L764377;
case 0x764378:goto L764378;
case 0x76437b:c.instructions+=1;goto B76437b;
case 0x76437d:goto L76437d;
case 0x764381:c.instructions+=2;goto B764381;
case 0x764382:c.instructions+=1;goto B764382;
case 0x764385:goto L764385;
case 0x764386:goto L764386;
case 0x76438b:goto L76438b;
case 0x76438c:c.instructions+=1;goto B76438c;
case 0x764391:goto L764391;
case 0x764394:c.instructions+=1;goto B764394;
case 0x76439a:goto L76439a;
case 0x76439d:c.instructions+=1;goto B76439d;
case 0x7643a3:goto L7643a3;
case 0x7643a4:c.instructions+=1;goto B7643a4;
case 0x7643aa:goto L7643aa;
case 0x7643ab:c.instructions+=1;goto B7643ab;
case 0x7643ad:goto L7643ad;
case 0x7643b0:c.instructions+=1;goto B7643b0;
case 0x7643b6:goto L7643b6;
case 0x7643b7:c.instructions+=2;goto B7643b7;
case 0x7643b8:c.instructions+=1;goto B7643b8;
case 0x7643be:goto L7643be;
case 0x7643c1:c.instructions+=1;goto B7643c1;
case 0x7643c7:goto L7643c7;
case 0x7643ce:c.instructions+=1;goto B7643ce;
case 0x7643d0:goto L7643d0;
case 0x7643d1:c.instructions+=2;goto B7643d1;
case 0x7643d5:c.instructions+=1;goto B7643d5;
case 0x7643d7:goto L7643d7;
case 0x7643d8:c.instructions+=1;goto B7643d8;
case 0x7643d9:goto L7643d9;
case 0x7643db:c.instructions+=1;goto B7643db;
case 0x7643dd:goto L7643dd;
case 0x7643e0:c.instructions+=2;goto B7643e0;
case 0x7643e2:c.instructions+=1;goto B7643e2;
case 0x7643e7:goto L7643e7;
case 0x7643e9:c.instructions+=1;goto B7643e9;
case 0x7643eb:goto L7643eb;
case 0x7643f0:c.instructions+=1;goto B7643f0;
case 0x7643f3:goto L7643f3;
case 0x7643f6:c.instructions+=1;goto B7643f6;
case 0x7643f8:goto L7643f8;
case 0x7643f9:c.instructions+=2;goto B7643f9;
case 0x7643fc:c.instructions+=1;goto B7643fc;
case 0x7643fe:goto L7643fe;
case 0x7643ff:goto L7643ff;
case 0x764401:c.instructions+=1;goto B764401;
case 0x764403:goto L764403;
case 0x764406:c.instructions+=1;goto B764406;
case 0x76440b:goto L76440b;
case 0x764412:goto L764412;
case 0x764415:goto L764415;
case 0x764419:c.instructions+=2;goto B764419;
case 0x764420:c.instructions+=1;goto B764420;
case 0x764426:goto L764426;
case 0x764429:c.instructions+=5;goto B764429;
case 0x76442b:c.instructions+=4;goto B76442b;
case 0x76442f:c.instructions+=3;goto B76442f;
case 0x764432:c.instructions+=2;goto B764432;
case 0x764439:c.instructions+=1;goto B764439;
case 0x76443e:goto L76443e;
case 0x764442:c.instructions+=2;goto B764442;
case 0x764449:c.instructions+=1;goto B764449;
case 0x76444f:goto L76444f;
case 0x764453:c.instructions+=1;goto B764453;
case 0x764458:goto L764458;
case 0x76445c:c.instructions+=4;goto B76445c;
case 0x764460:c.instructions+=3;goto B764460;
case 0x764463:c.instructions+=2;goto B764463;
case 0x764466:c.instructions+=1;goto B764466;
case 0x764468:goto L764468;
case 0x76446c:c.instructions+=2;goto B76446c;
case 0x76446f:c.instructions+=1;goto B76446f;
case 0x764471:goto L764471;
case 0x764474:c.instructions+=1;goto B764474;
case 0x764476:goto L764476;
case 0x76447d:c.instructions+=1;goto B76447d;
case 0x764482:goto L764482;
case 0x764486:c.instructions+=3;goto B764486;
case 0x764489:c.instructions+=2;goto B764489;
case 0x76448c:c.instructions+=1;goto B76448c;
case 0x76448e:goto L76448e;
case 0x764491:c.instructions+=1;goto B764491;
case 0x764493:goto L764493;
case 0x764497:goto L764497;
case 0x764498:c.instructions+=1;goto B764498;
case 0x76449a:goto L76449a;
case 0x76449e:c.instructions+=1;goto B76449e;
case 0x7644a0:goto L7644a0;
case 0x7644a3:c.instructions+=2;goto B7644a3;
case 0x7644a6:c.instructions+=1;goto B7644a6;
case 0x7644a8:goto L7644a8;
case 0x7644aa:goto L7644aa;
case 0x7644ad:c.instructions+=1;goto B7644ad;
case 0x7644af:goto L7644af;
case 0x7644b1:c.instructions+=1;goto B7644b1;
case 0x7644b3:goto L7644b3;
case 0x7644b5:goto L7644b5;
case 0x7644b7:c.instructions+=1;goto B7644b7;
case 0x7644b9:goto L7644b9;
case 0x7644bb:c.instructions+=3;goto B7644bb;
case 0x7644be:c.instructions+=2;goto B7644be;
case 0x7644c0:c.instructions+=1;goto B7644c0;
case 0x7644c4:goto L7644c4;
case 0x7644c7:c.instructions+=3;goto B7644c7;
case 0x7644c9:c.instructions+=2;goto B7644c9;
case 0x7644cb:c.instructions+=1;goto B7644cb;
case 0x7644cd:goto L7644cd;
case 0x7644cf:goto L7644cf;
case 0x7644d3:c.instructions+=1;goto B7644d3;
case 0x7644d5:goto L7644d5;
case 0x7644dc:c.instructions+=1;goto B7644dc;
case 0x7644de:goto L7644de;
case 0x7644e2:c.instructions+=3;goto B7644e2;
case 0x7644e7:c.instructions+=2;goto B7644e7;
case 0x7644ea:c.instructions+=1;goto B7644ea;
case 0x7644ec:goto L7644ec;
case 0x7644ef:goto L7644ef;
case 0x7644f1:c.instructions+=2;goto B7644f1;
case 0x7644f3:c.instructions+=1;goto B7644f3;
case 0x7644f5:goto L7644f5;
case 0x7644f9:goto L7644f9;
case 0x7644fc:goto L7644fc;
case 0x7644ff:c.instructions+=3;goto B7644ff;
case 0x764502:c.instructions+=2;goto B764502;
case 0x764504:c.instructions+=1;goto B764504;
case 0x764506:goto L764506;
case 0x764508:c.instructions+=2;goto B764508;
case 0x76450a:c.instructions+=1;goto B76450a;
case 0x76450c:goto L76450c;
case 0x76450f:c.instructions+=6;goto B76450f;
case 0x764510:c.instructions+=5;goto B764510;
case 0x764511:c.instructions+=4;goto B764511;
case 0x764512:c.instructions+=3;goto B764512;
case 0x764513:c.instructions+=2;goto B764513;
case 0x764514:c.instructions+=1;goto B764514;
case 0x764519:goto L764519;
case 0x76451c:c.instructions+=5;goto B76451c;
case 0x76451f:c.instructions+=4;goto B76451f;
case 0x764522:c.instructions+=3;goto B764522;
case 0x764524:c.instructions+=2;goto B764524;
case 0x764526:c.instructions+=1;goto B764526;
case 0x764528:goto L764528;
case 0x76452b:goto L76452b;
case 0x76452d:c.instructions+=2;goto B76452d;
case 0x76452e:c.instructions+=1;goto B76452e;
case 0x764530:goto L764530;
case 0x764533:c.instructions+=6;goto B764533;
case 0x764535:c.instructions+=5;goto B764535;
case 0x764536:c.instructions+=4;goto B764536;
case 0x76453a:c.instructions+=3;goto B76453a;
case 0x76453d:c.instructions+=2;goto B76453d;
case 0x764540:c.instructions+=1;goto B764540;
case 0x764542:goto L764542;
case 0x764544:c.instructions+=2;goto B764544;
case 0x764547:c.instructions+=1;goto B764547;
case 0x764549:goto L764549;
case 0x76454b:c.instructions+=1;goto B76454b;
case 0x76454d:goto L76454d;
case 0x764550:c.instructions+=3;goto B764550;
case 0x764553:c.instructions+=2;goto B764553;
case 0x764556:c.instructions+=1;goto B764556;
case 0x764557:goto L764557;
case 0x76455a:goto L76455a;
case 0x76455e:c.instructions+=1;goto B76455e;
case 0x764564:goto L764564;
case 0x764567:c.instructions+=2;goto B764567;
case 0x76456a:c.instructions+=1;goto B76456a;
case 0x76456c:goto L76456c;
case 0x76456f:c.instructions+=1;goto B76456f;
case 0x764571:goto L764571;
case 0x764575:c.instructions+=1;goto B764575;
case 0x764577:goto L764577;
case 0x76457a:c.instructions+=1;goto B76457a;
case 0x76457c:goto L76457c;
case 0x764580:c.instructions+=1;goto B764580;
case 0x764582:goto L764582;
case 0x764585:c.instructions+=1;goto B764585;
case 0x764587:goto L764587;
case 0x76458b:goto L76458b;
case 0x764592:goto L764592;
case 0x764595:c.instructions+=4;goto B764595;
case 0x764598:c.instructions+=3;goto B764598;
case 0x76459b:c.instructions+=2;goto B76459b;
case 0x76459e:c.instructions+=1;goto B76459e;
case 0x7645a0:goto L7645a0;
case 0x7645a3:c.instructions+=4;goto B7645a3;
case 0x7645a6:c.instructions+=3;goto B7645a6;
case 0x7645a7:c.instructions+=2;goto B7645a7;
case 0x7645a9:c.instructions+=1;goto B7645a9;
case 0x7645ae:goto L7645ae;
case 0x7645b1:goto L7645b1;
case 0x7645b4:c.instructions+=4;goto B7645b4;
case 0x7645b7:c.instructions+=3;goto B7645b7;
case 0x7645ba:c.instructions+=2;goto B7645ba;
case 0x7645bd:c.instructions+=1;goto B7645bd;
case 0x7645c2:goto L7645c2;
case 0x7645c5:c.instructions+=2;goto B7645c5;
case 0x7645c6:c.instructions+=1;goto B7645c6;
case 0x7645c8:goto L7645c8;
case 0x7645cb:c.instructions+=1;goto B7645cb;
case 0x7645cd:goto L7645cd;
case 0x7645ce:c.instructions+=4;goto B7645ce;
case 0x7645cf:c.instructions+=3;goto B7645cf;
case 0x7645d1:c.instructions+=2;goto B7645d1;
case 0x7645d4:c.instructions+=1;goto B7645d4;
case 0x7645d9:goto L7645d9;
case 0x7645dc:goto L7645dc;
case 0x7645e0:c.instructions+=1;goto B7645e0;
case 0x7645e2:goto L7645e2;
case 0x7645e6:c.instructions+=1;goto B7645e6;
case 0x7645e8:goto L7645e8;
case 0x7645eb:c.instructions+=2;goto B7645eb;
case 0x7645ee:c.instructions+=1;goto B7645ee;
case 0x7645f1:goto L7645f1;
case 0x7645f4:c.instructions+=6;goto B7645f4;
case 0x7645f6:c.instructions+=5;goto B7645f6;
case 0x7645f9:c.instructions+=4;goto B7645f9;
case 0x7645fa:c.instructions+=3;goto B7645fa;
case 0x7645fd:c.instructions+=2;goto B7645fd;
case 0x7645fe:c.instructions+=1;goto B7645fe;
case 0x764603:goto L764603;
case 0x764604:c.instructions+=5;goto B764604;
case 0x764605:c.instructions+=4;goto B764605;
case 0x764606:c.instructions+=3;goto B764606;
case 0x764608:c.instructions+=2;goto B764608;
case 0x764609:c.instructions+=1;goto B764609;
case 0x76460b:goto L76460b;
case 0x76460e:c.instructions+=4;goto B76460e;
case 0x76460f:c.instructions+=3;goto B76460f;
case 0x764612:c.instructions+=2;goto B764612;
case 0x764615:c.instructions+=1;goto B764615;
case 0x76461a:goto L76461a;
case 0x76461e:c.instructions+=2;goto B76461e;
case 0x76461f:c.instructions+=1;goto B76461f;
case 0x764621:goto L764621;
case 0x764623:goto L764623;
case 0x764626:c.instructions+=3;goto B764626;
case 0x764629:c.instructions+=2;goto B764629;
case 0x76462c:c.instructions+=1;goto B76462c;
case 0x764631:goto L764631;
case 0x764632:goto L764632;
case 0x764636:c.instructions+=1;goto B764636;
case 0x764638:goto L764638;
case 0x76463b:c.instructions+=4;goto B76463b;
case 0x76463e:c.instructions+=3;goto B76463e;
case 0x76463f:c.instructions+=2;goto B76463f;
case 0x764641:c.instructions+=1;goto B764641;
case 0x764646:goto L764646;
case 0x764649:goto L764649;
case 0x76464d:c.instructions+=1;goto B76464d;
case 0x76464f:goto L76464f;
case 0x764652:c.instructions+=1;goto B764652;
case 0x764657:goto L764657;
case 0x76465b:c.instructions+=1;goto B76465b;
case 0x76465c:goto L76465c;
case 0x76465f:c.instructions+=3;goto B76465f;
case 0x764661:c.instructions+=2;goto B764661;
case 0x764663:c.instructions+=1;goto B764663;
case 0x764669:goto L764669;
case 0x76466a:c.instructions+=6;goto B76466a;
case 0x76466b:c.instructions+=5;goto B76466b;
case 0x76466e:c.instructions+=4;goto B76466e;
case 0x764671:c.instructions+=3;goto B764671;
case 0x764674:c.instructions+=2;goto B764674;
case 0x764675:c.instructions+=1;goto B764675;
case 0x76467a:goto L76467a;
case 0x76467b:c.instructions+=1;goto B76467b;
case 0x76469c:goto L76469c;
case 0x76469e:c.instructions+=2;goto B76469e;
case 0x7646a3:c.instructions+=1;goto B7646a3;
case 0x7646a8:goto L7646a8;
case 0x7646ac:c.instructions+=4;goto B7646ac;
case 0x7646b0:c.instructions+=3;goto B7646b0;
case 0x7646b4:c.instructions+=2;goto B7646b4;
case 0x7646bb:c.instructions+=1;goto B7646bb;
case 0x7646bd:goto L7646bd;
case 0x7646bf:c.instructions+=2;goto B7646bf;
case 0x7646c0:c.instructions+=1;goto B7646c0;
case 0x7646c4:goto L7646c4;
case 0x7646c8:c.instructions+=2;goto B7646c8;
case 0x7646cb:c.instructions+=1;goto B7646cb;
case 0x7646d0:goto L7646d0;
case 0x7646d1:goto L7646d1;
case 0x7646d2:c.instructions+=15;goto B7646d2;
case 0x7646d4:c.instructions+=14;goto B7646d4;
case 0x7646d7:c.instructions+=13;goto B7646d7;
case 0x7646d8:c.instructions+=12;goto B7646d8;
case 0x7646d9:c.instructions+=11;goto B7646d9;
case 0x7646da:c.instructions+=10;goto B7646da;
case 0x7646db:c.instructions+=9;goto B7646db;
case 0x7646dc:c.instructions+=8;goto B7646dc;
case 0x7646de:c.instructions+=7;goto B7646de;
case 0x7646e3:c.instructions+=6;goto B7646e3;
case 0x7646e4:c.instructions+=5;goto B7646e4;
case 0x7646e5:c.instructions+=4;goto B7646e5;
case 0x7646e6:c.instructions+=3;goto B7646e6;
case 0x7646e7:c.instructions+=2;goto B7646e7;
case 0x7646e9:c.instructions+=1;goto B7646e9;
case 0x7646eb:goto L7646eb;
case 0x7646ec:c.instructions+=3;goto B7646ec;
case 0x7646ed:c.instructions+=2;goto B7646ed;
case 0x7646f2:c.instructions+=1;goto B7646f2;
case 0x7646f4:goto L7646f4;
case 0x7646f7:c.instructions+=4;goto B7646f7;
case 0x7646fe:c.instructions+=3;goto B7646fe;
case 0x764705:c.instructions+=2;goto B764705;
case 0x764709:c.instructions+=1;goto B764709;
case 0x76470b:goto L76470b;
case 0x764710:goto L764710;
case 0x764712:c.instructions+=1;goto B764712;
case 0x764714:goto L764714;
case 0x764716:c.instructions+=3;goto B764716;
case 0x764717:c.instructions+=2;goto B764717;
case 0x76471c:c.instructions+=1;goto B76471c;
case 0x764721:goto L764721;
case 0x764723:c.instructions+=5;goto B764723;
case 0x764724:c.instructions+=4;goto B764724;
case 0x764725:c.instructions+=3;goto B764725;
case 0x764726:c.instructions+=2;goto B764726;
case 0x764727:c.instructions+=1;goto B764727;
case 0x764730:goto L764730;
case 0x764731:c.instructions+=7;goto B764731;
case 0x764733:c.instructions+=6;goto B764733;
case 0x764736:c.instructions+=5;goto B764736;
case 0x764739:c.instructions+=4;goto B764739;
case 0x76473b:c.instructions+=3;goto B76473b;
case 0x76473e:c.instructions+=2;goto B76473e;
case 0x764742:c.instructions+=1;goto B764742;
case 0x764747:goto L764747;
case 0x764748:c.instructions+=1;goto B764748;
case 0x764749:goto L764749;
case 0x76474f:c.instructions+=21;goto B76474f;
case 0x764757:c.instructions+=20;goto B764757;
case 0x76475f:c.instructions+=19;goto B76475f;
case 0x764763:c.instructions+=18;goto B764763;
case 0x764767:c.instructions+=17;goto B764767;
case 0x76476c:c.instructions+=16;goto B76476c;
case 0x764771:c.instructions+=15;goto B764771;
case 0x764775:c.instructions+=14;goto B764775;
case 0x76477a:c.instructions+=13;goto B76477a;
case 0x76477f:c.instructions+=12;goto B76477f;
case 0x764782:c.instructions+=11;goto B764782;
case 0x764787:c.instructions+=10;goto B764787;
case 0x764790:c.instructions+=9;goto B764790;
case 0x764799:c.instructions+=8;goto B764799;
case 0x76479b:c.instructions+=7;goto B76479b;
case 0x7647a4:c.instructions+=6;goto B7647a4;
case 0x7647a9:c.instructions+=5;goto B7647a9;
case 0x7647ab:c.instructions+=4;goto B7647ab;
case 0x7647ae:c.instructions+=3;goto B7647ae;
case 0x7647b0:c.instructions+=2;goto B7647b0;
case 0x7647b6:c.instructions+=1;goto B7647b6;
case 0x7647bc:goto L7647bc;
case 0x7647c1:c.instructions+=1;goto B7647c1;
case 0x7647c6:goto L7647c6;
case 0x7647ca:c.instructions+=57;goto B7647ca;
case 0x7647ce:c.instructions+=56;goto B7647ce;
case 0x7647d3:c.instructions+=55;goto B7647d3;
case 0x7647d7:c.instructions+=54;goto B7647d7;
case 0x7647df:c.instructions+=53;goto B7647df;
case 0x7647e3:c.instructions+=52;goto B7647e3;
case 0x7647e8:c.instructions+=51;goto B7647e8;
case 0x7647ed:c.instructions+=50;goto B7647ed;
case 0x7647f5:c.instructions+=49;goto B7647f5;
case 0x7647fa:c.instructions+=48;goto B7647fa;
case 0x7647fd:c.instructions+=47;goto B7647fd;
case 0x764802:c.instructions+=46;goto B764802;
case 0x76480b:c.instructions+=45;goto B76480b;
case 0x764814:c.instructions+=44;goto B764814;
case 0x764816:c.instructions+=43;goto B764816;
case 0x76481f:c.instructions+=42;goto B76481f;
case 0x764827:c.instructions+=41;goto B764827;
case 0x76482b:c.instructions+=40;goto B76482b;
case 0x76482f:c.instructions+=39;goto B76482f;
case 0x764833:c.instructions+=38;goto B764833;
case 0x764838:c.instructions+=37;goto B764838;
case 0x76483d:c.instructions+=36;goto B76483d;
case 0x764845:c.instructions+=35;goto B764845;
case 0x764849:c.instructions+=34;goto B764849;
case 0x764851:c.instructions+=33;goto B764851;
case 0x764856:c.instructions+=32;goto B764856;
case 0x764859:c.instructions+=31;goto B764859;
case 0x76485e:c.instructions+=30;goto B76485e;
case 0x764867:c.instructions+=29;goto B764867;
case 0x764870:c.instructions+=28;goto B764870;
case 0x764879:c.instructions+=27;goto B764879;
case 0x76487d:c.instructions+=26;goto B76487d;
case 0x764881:c.instructions+=25;goto B764881;
case 0x764885:c.instructions+=24;goto B764885;
case 0x764889:c.instructions+=23;goto B764889;
case 0x76488d:c.instructions+=22;goto B76488d;
case 0x764891:c.instructions+=21;goto B764891;
case 0x764895:c.instructions+=20;goto B764895;
case 0x764899:c.instructions+=19;goto B764899;
case 0x76489d:c.instructions+=18;goto B76489d;
case 0x7648a1:c.instructions+=17;goto B7648a1;
case 0x7648a5:c.instructions+=16;goto B7648a5;
case 0x7648a9:c.instructions+=15;goto B7648a9;
case 0x7648af:c.instructions+=14;goto B7648af;
case 0x7648b4:c.instructions+=13;goto B7648b4;
case 0x7648b8:c.instructions+=12;goto B7648b8;
case 0x7648bc:c.instructions+=11;goto B7648bc;
case 0x7648c4:c.instructions+=10;goto B7648c4;
case 0x7648c9:c.instructions+=9;goto B7648c9;
case 0x7648cd:c.instructions+=8;goto B7648cd;
case 0x7648d1:c.instructions+=7;goto B7648d1;
case 0x7648d5:c.instructions+=6;goto B7648d5;
case 0x7648d9:c.instructions+=5;goto B7648d9;
case 0x7648dd:c.instructions+=4;goto B7648dd;
case 0x7648e1:c.instructions+=3;goto B7648e1;
case 0x7648e6:c.instructions+=2;goto B7648e6;
case 0x7648eb:c.instructions+=1;goto B7648eb;
case 0x7648f1:goto L7648f1;
case 0x7648f7:c.instructions+=8;goto B7648f7;
case 0x7648fc:c.instructions+=7;goto B7648fc;
case 0x7648fe:c.instructions+=6;goto B7648fe;
case 0x764903:c.instructions+=5;goto B764903;
case 0x764905:c.instructions+=4;goto B764905;
case 0x76490a:c.instructions+=3;goto B76490a;
case 0x76490c:c.instructions+=2;goto B76490c;
case 0x764912:c.instructions+=1;goto B764912;
case 0x764918:goto L764918;
case 0x76491c:c.instructions+=29;goto B76491c;
case 0x764920:c.instructions+=28;goto B764920;
case 0x764928:c.instructions+=27;goto B764928;
case 0x76492c:c.instructions+=26;goto B76492c;
case 0x764930:c.instructions+=25;goto B764930;
case 0x764934:c.instructions+=24;goto B764934;
case 0x764938:c.instructions+=23;goto B764938;
case 0x76493d:c.instructions+=22;goto B76493d;
case 0x764942:c.instructions+=21;goto B764942;
case 0x764946:c.instructions+=20;goto B764946;
case 0x76494a:c.instructions+=19;goto B76494a;
case 0x76494e:c.instructions+=18;goto B76494e;
case 0x764952:c.instructions+=17;goto B764952;
case 0x764956:c.instructions+=16;goto B764956;
case 0x76495a:c.instructions+=15;goto B76495a;
case 0x764962:c.instructions+=14;goto B764962;
case 0x764966:c.instructions+=13;goto B764966;
case 0x76496a:c.instructions+=12;goto B76496a;
case 0x76496e:c.instructions+=11;goto B76496e;
case 0x764976:c.instructions+=10;goto B764976;
case 0x76497a:c.instructions+=9;goto B76497a;
case 0x76497f:c.instructions+=8;goto B76497f;
case 0x764983:c.instructions+=7;goto B764983;
case 0x764988:c.instructions+=6;goto B764988;
case 0x76498a:c.instructions+=5;goto B76498a;
case 0x76498f:c.instructions+=4;goto B76498f;
case 0x764991:c.instructions+=3;goto B764991;
case 0x764996:c.instructions+=2;goto B764996;
case 0x764999:c.instructions+=1;goto B764999;
case 0x76499f:goto L76499f;
case 0x7649a1:c.instructions+=56;goto B7649a1;
case 0x7649a4:c.instructions+=55;goto B7649a4;
case 0x7649a7:c.instructions+=54;goto B7649a7;
case 0x7649ad:c.instructions+=53;goto B7649ad;
case 0x7649b1:c.instructions+=52;goto B7649b1;
case 0x7649b5:c.instructions+=51;goto B7649b5;
case 0x7649bd:c.instructions+=50;goto B7649bd;
case 0x7649c1:c.instructions+=49;goto B7649c1;
case 0x7649c9:c.instructions+=48;goto B7649c9;
case 0x7649cd:c.instructions+=47;goto B7649cd;
case 0x7649d1:c.instructions+=46;goto B7649d1;
case 0x7649d3:c.instructions+=45;goto B7649d3;
case 0x7649d5:c.instructions+=44;goto B7649d5;
case 0x7649d7:c.instructions+=43;goto B7649d7;
case 0x7649d9:c.instructions+=42;goto B7649d9;
case 0x7649e1:c.instructions+=41;goto B7649e1;
case 0x7649e9:c.instructions+=40;goto B7649e9;
case 0x7649ed:c.instructions+=39;goto B7649ed;
case 0x7649f1:c.instructions+=38;goto B7649f1;
case 0x7649f6:c.instructions+=37;goto B7649f6;
case 0x7649fa:c.instructions+=36;goto B7649fa;
case 0x7649fe:c.instructions+=35;goto B7649fe;
case 0x764a03:c.instructions+=34;goto B764a03;
case 0x764a07:c.instructions+=33;goto B764a07;
case 0x764a0c:c.instructions+=32;goto B764a0c;
case 0x764a10:c.instructions+=31;goto B764a10;
case 0x764a18:c.instructions+=30;goto B764a18;
case 0x764a1c:c.instructions+=29;goto B764a1c;
case 0x764a22:c.instructions+=28;goto B764a22;
case 0x764a26:c.instructions+=27;goto B764a26;
case 0x764a2b:c.instructions+=26;goto B764a2b;
case 0x764a30:c.instructions+=25;goto B764a30;
case 0x764a38:c.instructions+=24;goto B764a38;
case 0x764a3c:c.instructions+=23;goto B764a3c;
case 0x764a40:c.instructions+=22;goto B764a40;
case 0x764a44:c.instructions+=21;goto B764a44;
case 0x764a48:c.instructions+=20;goto B764a48;
case 0x764a4c:c.instructions+=19;goto B764a4c;
case 0x764a50:c.instructions+=18;goto B764a50;
case 0x764a54:c.instructions+=17;goto B764a54;
case 0x764a58:c.instructions+=16;goto B764a58;
case 0x764a5c:c.instructions+=15;goto B764a5c;
case 0x764a60:c.instructions+=14;goto B764a60;
case 0x764a65:c.instructions+=13;goto B764a65;
case 0x764a69:c.instructions+=12;goto B764a69;
case 0x764a6e:c.instructions+=11;goto B764a6e;
case 0x764a72:c.instructions+=10;goto B764a72;
case 0x764a76:c.instructions+=9;goto B764a76;
case 0x764a7a:c.instructions+=8;goto B764a7a;
case 0x764a7d:c.instructions+=7;goto B764a7d;
case 0x764a81:c.instructions+=6;goto B764a81;
case 0x764a85:c.instructions+=5;goto B764a85;
case 0x764a89:c.instructions+=4;goto B764a89;
case 0x764a8f:c.instructions+=3;goto B764a8f;
case 0x764a93:c.instructions+=2;goto B764a93;
case 0x764a96:c.instructions+=1;goto B764a96;
case 0x764a97:goto L764a97;
case 0x764a9d:c.instructions+=8;goto B764a9d;
case 0x764aa5:c.instructions+=7;goto B764aa5;
case 0x764aa9:c.instructions+=6;goto B764aa9;
case 0x764aad:c.instructions+=5;goto B764aad;
case 0x764ab1:c.instructions+=4;goto B764ab1;
case 0x764ab6:c.instructions+=3;goto B764ab6;
case 0x764aba:c.instructions+=2;goto B764aba;
case 0x764ac0:c.instructions+=1;goto B764ac0;
case 0x764ac6:goto L764ac6;
case 0x764ac8:c.instructions+=2;goto B764ac8;
case 0x764acb:c.instructions+=1;goto B764acb;
case 0x764ad1:goto L764ad1;
case 0x764ad4:c.instructions+=1;goto B764ad4;
case 0x764ada:goto L764ada;
case 0x764adc:c.instructions+=16;goto B764adc;
case 0x764ae2:c.instructions+=15;goto B764ae2;
case 0x764ae7:c.instructions+=14;goto B764ae7;
case 0x764aeb:c.instructions+=13;goto B764aeb;
case 0x764af0:c.instructions+=12;goto B764af0;
case 0x764af4:c.instructions+=11;goto B764af4;
case 0x764af9:c.instructions+=10;goto B764af9;
case 0x764afd:c.instructions+=9;goto B764afd;
case 0x764b01:c.instructions+=8;goto B764b01;
case 0x764b05:c.instructions+=7;goto B764b05;
case 0x764b09:c.instructions+=6;goto B764b09;
case 0x764b0d:c.instructions+=5;goto B764b0d;
case 0x764b11:c.instructions+=4;goto B764b11;
case 0x764b13:c.instructions+=3;goto B764b13;
case 0x764b19:c.instructions+=2;goto B764b19;
case 0x764b1f:c.instructions+=1;goto B764b1f;
case 0x764b25:goto L764b25;
case 0x764b2a:c.instructions+=2;goto B764b2a;
case 0x764b2f:c.instructions+=1;goto B764b2f;
case 0x764b35:goto L764b35;
case 0x764b3b:c.instructions+=16;goto B764b3b;
case 0x764b41:c.instructions+=15;goto B764b41;
case 0x764b46:c.instructions+=14;goto B764b46;
case 0x764b4a:c.instructions+=13;goto B764b4a;
case 0x764b52:c.instructions+=12;goto B764b52;
case 0x764b57:c.instructions+=11;goto B764b57;
case 0x764b5b:c.instructions+=10;goto B764b5b;
case 0x764b63:c.instructions+=9;goto B764b63;
case 0x764b67:c.instructions+=8;goto B764b67;
case 0x764b6b:c.instructions+=7;goto B764b6b;
case 0x764b6f:c.instructions+=6;goto B764b6f;
case 0x764b74:c.instructions+=5;goto B764b74;
case 0x764b79:c.instructions+=4;goto B764b79;
case 0x764b7b:c.instructions+=3;goto B764b7b;
case 0x764b81:c.instructions+=2;goto B764b81;
case 0x764b84:c.instructions+=1;goto B764b84;
case 0x764b86:goto L764b86;
case 0x764b8b:c.instructions+=3;goto B764b8b;
case 0x764b93:c.instructions+=2;goto B764b93;
case 0x764b9b:c.instructions+=1;goto B764b9b;
case 0x764ba0:goto L764ba0;
case 0x764ba6:c.instructions+=8;goto B764ba6;
case 0x764bac:c.instructions+=7;goto B764bac;
case 0x764bb0:c.instructions+=6;goto B764bb0;
case 0x764bb5:c.instructions+=5;goto B764bb5;
case 0x764bb9:c.instructions+=4;goto B764bb9;
case 0x764bbb:c.instructions+=3;goto B764bbb;
case 0x764bc0:c.instructions+=2;goto B764bc0;
case 0x764bc5:c.instructions+=1;goto B764bc5;
case 0x764bcb:goto L764bcb;
case 0x764bd1:goto L764bd1;
case 0x764bd4:c.instructions+=1;goto B764bd4;
case 0x764bda:goto L764bda;
case 0x764bdf:goto L764bdf;
case 0x764be4:goto L764be4;
case 0x764be8:c.instructions+=10;goto B764be8;
case 0x764bed:c.instructions+=9;goto B764bed;
case 0x764bf2:c.instructions+=8;goto B764bf2;
case 0x764bfa:c.instructions+=7;goto B764bfa;
case 0x764c02:c.instructions+=6;goto B764c02;
case 0x764c06:c.instructions+=5;goto B764c06;
case 0x764c0a:c.instructions+=4;goto B764c0a;
case 0x764c0f:c.instructions+=3;goto B764c0f;
case 0x764c13:c.instructions+=2;goto B764c13;
case 0x764c16:c.instructions+=1;goto B764c16;
case 0x764c18:goto L764c18;
case 0x764c1c:c.instructions+=14;goto B764c1c;
case 0x764c20:c.instructions+=13;goto B764c20;
case 0x764c28:c.instructions+=12;goto B764c28;
case 0x764c2d:c.instructions+=11;goto B764c2d;
case 0x764c32:c.instructions+=10;goto B764c32;
case 0x764c36:c.instructions+=9;goto B764c36;
case 0x764c3b:c.instructions+=8;goto B764c3b;
case 0x764c3e:c.instructions+=7;goto B764c3e;
case 0x764c43:c.instructions+=6;goto B764c43;
case 0x764c4c:c.instructions+=5;goto B764c4c;
case 0x764c55:c.instructions+=4;goto B764c55;
case 0x764c57:c.instructions+=3;goto B764c57;
case 0x764c60:c.instructions+=2;goto B764c60;
case 0x764c65:c.instructions+=1;goto B764c65;
case 0x764c6a:goto L764c6a;
case 0x764c6c:c.instructions+=3;goto B764c6c;
case 0x764c72:c.instructions+=2;goto B764c72;
case 0x764c75:c.instructions+=1;goto B764c75;
case 0x764c77:goto L764c77;
case 0x764c7b:c.instructions+=3;goto B764c7b;
case 0x764c81:c.instructions+=2;goto B764c81;
case 0x764c84:c.instructions+=1;goto B764c84;
case 0x764c86:goto L764c86;
case 0x764c89:c.instructions+=10;goto B764c89;
case 0x764c8b:c.instructions+=9;goto B764c8b;
case 0x764c90:c.instructions+=8;goto B764c90;
case 0x764c92:c.instructions+=7;goto B764c92;
case 0x764c96:c.instructions+=6;goto B764c96;
case 0x764c9b:c.instructions+=5;goto B764c9b;
case 0x764ca3:c.instructions+=4;goto B764ca3;
case 0x764ca9:c.instructions+=3;goto B764ca9;
case 0x764cad:c.instructions+=2;goto B764cad;
case 0x764cb2:c.instructions+=1;goto B764cb2;
case 0x764cb7:goto L764cb7;
case 0x764cba:c.instructions+=3;goto B764cba;
case 0x764cbc:c.instructions+=2;goto B764cbc;
case 0x764cbf:c.instructions+=1;goto B764cbf;
case 0x764cc5:goto L764cc5;
case 0x764cc7:c.instructions+=1;goto B764cc7;
case 0x764cc8:goto L764cc8;
case 0x764cd0:c.instructions+=7;goto B764cd0;
case 0x764cd4:c.instructions+=6;goto B764cd4;
case 0x764cd8:c.instructions+=5;goto B764cd8;
case 0x764cdc:c.instructions+=4;goto B764cdc;
case 0x764ce0:c.instructions+=3;goto B764ce0;
case 0x764ce6:c.instructions+=2;goto B764ce6;
case 0x764cec:c.instructions+=1;goto B764cec;
case 0x764cf2:goto L764cf2;
case 0x764cf7:c.instructions+=3;goto B764cf7;
case 0x764cfd:c.instructions+=2;goto B764cfd;
case 0x764d00:c.instructions+=1;goto B764d00;
case 0x764d06:goto L764d06;
case 0x764d0b:c.instructions+=2;goto B764d0b;
case 0x764d10:c.instructions+=1;goto B764d10;
case 0x764d12:goto L764d12;
case 0x764d18:c.instructions+=13;goto B764d18;
case 0x764d1e:c.instructions+=12;goto B764d1e;
case 0x764d23:c.instructions+=11;goto B764d23;
case 0x764d27:c.instructions+=10;goto B764d27;
case 0x764d2f:c.instructions+=9;goto B764d2f;
case 0x764d34:c.instructions+=8;goto B764d34;
case 0x764d38:c.instructions+=7;goto B764d38;
case 0x764d3c:c.instructions+=6;goto B764d3c;
case 0x764d40:c.instructions+=5;goto B764d40;
case 0x764d44:c.instructions+=4;goto B764d44;
case 0x764d48:c.instructions+=3;goto B764d48;
case 0x764d4d:c.instructions+=2;goto B764d4d;
case 0x764d52:c.instructions+=1;goto B764d52;
case 0x764d54:goto L764d54;
case 0x764d5a:c.instructions+=4;goto B764d5a;
case 0x764d5f:c.instructions+=3;goto B764d5f;
case 0x764d64:c.instructions+=2;goto B764d64;
case 0x764d67:c.instructions+=1;goto B764d67;
case 0x764d69:goto L764d69;
case 0x764d6f:c.instructions+=1;goto B764d6f;
case 0x764d70:goto L764d70;
case 0x764d76:c.instructions+=1;goto B764d76;
case 0x764d77:goto L764d77;
case 0x764d7d:c.instructions+=4;goto B764d7d;
case 0x764d82:c.instructions+=3;goto B764d82;
case 0x764d87:c.instructions+=2;goto B764d87;
case 0x764d8a:c.instructions+=1;goto B764d8a;
case 0x764d90:goto L764d90;
case 0x764d92:c.instructions+=1;goto B764d92;
case 0x764d93:goto L764d93;
case 0x764d99:c.instructions+=4;goto B764d99;
case 0x764d9e:c.instructions+=3;goto B764d9e;
case 0x764da3:c.instructions+=2;goto B764da3;
case 0x764da6:c.instructions+=1;goto B764da6;
case 0x764dac:goto L764dac;
case 0x764dae:c.instructions+=1;goto B764dae;
case 0x764daf:goto L764daf;
case 0x764db3:c.instructions+=3;goto B764db3;
case 0x764db7:c.instructions+=2;goto B764db7;
case 0x764dbc:c.instructions+=1;goto B764dbc;
case 0x764dc1:goto L764dc1;
case 0x764dc7:c.instructions+=8;goto B764dc7;
case 0x764dcb:c.instructions+=7;goto B764dcb;
case 0x764dd0:c.instructions+=6;goto B764dd0;
case 0x764dd4:c.instructions+=5;goto B764dd4;
case 0x764dda:c.instructions+=4;goto B764dda;
case 0x764ddc:c.instructions+=3;goto B764ddc;
case 0x764de1:c.instructions+=2;goto B764de1;
case 0x764de4:c.instructions+=1;goto B764de4;
case 0x764dea:goto L764dea;
case 0x764df2:c.instructions+=4;goto B764df2;
case 0x764dfa:c.instructions+=3;goto B764dfa;
case 0x764dfe:c.instructions+=2;goto B764dfe;
case 0x764e03:c.instructions+=1;goto B764e03;
case 0x764e08:goto L764e08;
case 0x764e0e:c.instructions+=4;goto B764e0e;
case 0x764e14:c.instructions+=3;goto B764e14;
case 0x764e18:c.instructions+=2;goto B764e18;
case 0x764e1b:c.instructions+=1;goto B764e1b;
case 0x764e1d:goto L764e1d;
case 0x764e22:c.instructions+=3;goto B764e22;
case 0x764e26:c.instructions+=2;goto B764e26;
case 0x764e2c:c.instructions+=1;goto B764e2c;
case 0x764e32:goto L764e32;
case 0x764e38:c.instructions+=1;goto B764e38;
case 0x764e3a:goto L764e3a;
case 0x764e42:c.instructions+=6;goto B764e42;
case 0x764e46:c.instructions+=5;goto B764e46;
case 0x764e4a:c.instructions+=4;goto B764e4a;
case 0x764e4e:c.instructions+=3;goto B764e4e;
case 0x764e52:c.instructions+=2;goto B764e52;
case 0x764e57:c.instructions+=1;goto B764e57;
case 0x764e59:goto L764e59;
case 0x764e5b:c.instructions+=1;goto B764e5b;
case 0x764e5c:goto L764e5c;
case 0x764e64:c.instructions+=7;goto B764e64;
case 0x764e68:c.instructions+=6;goto B764e68;
case 0x764e6c:c.instructions+=5;goto B764e6c;
case 0x764e70:c.instructions+=4;goto B764e70;
case 0x764e74:c.instructions+=3;goto B764e74;
case 0x764e79:c.instructions+=2;goto B764e79;
case 0x764e7e:c.instructions+=1;goto B764e7e;
case 0x764e80:goto L764e80;
case 0x764e85:c.instructions+=6;goto B764e85;
case 0x764e8b:c.instructions+=5;goto B764e8b;
case 0x764e90:c.instructions+=4;goto B764e90;
case 0x764e96:c.instructions+=3;goto B764e96;
case 0x764e98:c.instructions+=2;goto B764e98;
case 0x764e9b:c.instructions+=1;goto B764e9b;
case 0x764ea1:goto L764ea1;
case 0x764ea4:c.instructions+=1;goto B764ea4;
case 0x764ea6:goto L764ea6;
case 0x764eab:c.instructions+=3;goto B764eab;
case 0x764eb0:c.instructions+=2;goto B764eb0;
case 0x764eb5:c.instructions+=1;goto B764eb5;
case 0x764eb7:goto L764eb7;
case 0x764eb9:c.instructions+=1;goto B764eb9;
case 0x764eba:goto L764eba;
case 0x764ebf:c.instructions+=3;goto B764ebf;
case 0x764ec4:c.instructions+=2;goto B764ec4;
case 0x764ec9:c.instructions+=1;goto B764ec9;
case 0x764ecb:goto L764ecb;
case 0x764ecd:c.instructions+=1;goto B764ecd;
case 0x764ece:goto L764ece;
case 0x764ed4:c.instructions+=1;goto B764ed4;
case 0x764ed5:goto L764ed5;
case 0x764ed9:c.instructions+=3;goto B764ed9;
case 0x764edd:c.instructions+=2;goto B764edd;
case 0x764ee2:c.instructions+=1;goto B764ee2;
case 0x764ee4:goto L764ee4;
case 0x764ee8:c.instructions+=9;goto B764ee8;
case 0x764eed:c.instructions+=8;goto B764eed;
case 0x764ef1:c.instructions+=7;goto B764ef1;
case 0x764ef7:c.instructions+=6;goto B764ef7;
case 0x764ef9:c.instructions+=5;goto B764ef9;
case 0x764efb:c.instructions+=4;goto B764efb;
case 0x764f03:c.instructions+=3;goto B764f03;
case 0x764f08:c.instructions+=2;goto B764f08;
case 0x764f0b:c.instructions+=1;goto B764f0b;
case 0x764f0d:goto L764f0d;
case 0x764f11:c.instructions+=4;goto B764f11;
case 0x764f16:c.instructions+=3;goto B764f16;
case 0x764f1b:c.instructions+=2;goto B764f1b;
case 0x764f20:c.instructions+=1;goto B764f20;
case 0x764f22:goto L764f22;
case 0x764f24:goto L764f24;
case 0x764f27:c.instructions+=1;goto B764f27;
case 0x764f29:goto L764f29;
case 0x764f2c:c.instructions+=4;goto B764f2c;
case 0x764f32:c.instructions+=3;goto B764f32;
case 0x764f36:c.instructions+=2;goto B764f36;
case 0x764f39:c.instructions+=1;goto B764f39;
case 0x764f3a:goto L764f3a;
case 0x764f42:c.instructions+=3;goto B764f42;
case 0x764f48:c.instructions+=2;goto B764f48;
case 0x764f4c:c.instructions+=1;goto B764f4c;
case 0x764f51:goto L764f51;
case 0x764f54:c.instructions+=10;goto B764f54;
case 0x764f5a:c.instructions+=9;goto B764f5a;
case 0x764f5e:c.instructions+=8;goto B764f5e;
case 0x764f60:c.instructions+=7;goto B764f60;
case 0x764f63:c.instructions+=6;goto B764f63;
case 0x764f67:c.instructions+=5;goto B764f67;
case 0x764f6a:c.instructions+=4;goto B764f6a;
case 0x764f6e:c.instructions+=3;goto B764f6e;
case 0x764f71:c.instructions+=2;goto B764f71;
case 0x764f74:c.instructions+=1;goto B764f74;
case 0x764f79:goto L764f79;
case 0x764f7d:c.instructions+=2;goto B764f7d;
case 0x764f80:c.instructions+=1;goto B764f80;
case 0x764f81:goto L764f81;
case 0x764f84:c.instructions+=1;goto B764f84;
case 0x764f86:goto L764f86;
case 0x764f8b:c.instructions+=1;goto B764f8b;
case 0x764f91:goto L764f91;
case 0x764f92:c.instructions+=8;goto B764f92;
case 0x764f94:c.instructions+=7;goto B764f94;
case 0x764f97:c.instructions+=6;goto B764f97;
case 0x764f9d:c.instructions+=5;goto B764f9d;
case 0x764fa3:c.instructions+=4;goto B764fa3;
case 0x764fa6:c.instructions+=3;goto B764fa6;
case 0x764fa7:c.instructions+=2;goto B764fa7;
case 0x764fac:c.instructions+=1;goto B764fac;
case 0x764fae:goto L764fae;
case 0x764fb3:c.instructions+=1;goto B764fb3;
case 0x764fb9:goto L764fb9;
case 0x764fba:c.instructions+=7;goto B764fba;
case 0x764fbc:c.instructions+=6;goto B764fbc;
case 0x764fbf:c.instructions+=5;goto B764fbf;
case 0x764fc5:c.instructions+=4;goto B764fc5;
case 0x764fc8:c.instructions+=3;goto B764fc8;
case 0x764fce:c.instructions+=2;goto B764fce;
case 0x764fcf:c.instructions+=1;goto B764fcf;
case 0x764fd4:goto L764fd4;
case 0x764fd8:c.instructions+=8;goto B764fd8;
case 0x764fdc:c.instructions+=7;goto B764fdc;
case 0x764fe4:c.instructions+=6;goto B764fe4;
case 0x764fe6:c.instructions+=5;goto B764fe6;
case 0x764fec:c.instructions+=4;goto B764fec;
case 0x764ff0:c.instructions+=3;goto B764ff0;
case 0x764ff8:c.instructions+=2;goto B764ff8;
case 0x764ffc:c.instructions+=1;goto B764ffc;
default:missing_instruction(c.pc);}
B764000:L764000:{c.instructions+=3;NFSU2_TR(0x764000);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764002:{NFSU2_TR(0x764002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764005:{NFSU2_TR(0x764005);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76465c;}}
}
B76400b:L76400b:{c.instructions+=3;NFSU2_TR(0x76400b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76400f:{NFSU2_TR(0x76400f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B764012:{NFSU2_TR(0x764012);
{goto L76465c;}
}
B764017:L764017:{c.instructions+=6;NFSU2_TR(0x764017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76401a:{NFSU2_TR(0x76401a);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B76401d:{NFSU2_TR(0x76401d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B764020:{NFSU2_TR(0x764020);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B764024:{NFSU2_TR(0x764024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764027:{NFSU2_TR(0x764027);
{goto L76465c;}
}
B76402c:L76402c:{c.instructions+=2;NFSU2_TR(0x76402c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764030:{NFSU2_TR(0x764030);
{goto L76465c;}
}
B764035:L764035:{c.instructions+=2;NFSU2_TR(0x764035);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B764038:{NFSU2_TR(0x764038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764058;}}
}
B76403a:L76403a:{c.instructions+=6;NFSU2_TR(0x76403a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76403e:{NFSU2_TR(0x76403e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764041:{NFSU2_TR(0x764041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764044:{NFSU2_TR(0x764044);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764046:{NFSU2_TR(0x764046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764049:{NFSU2_TR(0x764049);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76465c;}}
}
B76404f:L76404f:{c.instructions+=2;NFSU2_TR(0x76404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764053:{NFSU2_TR(0x764053);
{goto L76465c;}
}
B764058:L764058:{c.instructions+=6;NFSU2_TR(0x764058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76405b:{NFSU2_TR(0x76405b);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B76405e:{NFSU2_TR(0x76405e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B764061:{NFSU2_TR(0x764061);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B764065:{NFSU2_TR(0x764065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764068:{NFSU2_TR(0x764068);
{goto L76465c;}
}
B76406d:L76406d:{c.instructions+=2;NFSU2_TR(0x76406d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x49ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B764070:{NFSU2_TR(0x764070);
if(r1(R+518)){{goto L7640a0;}}
}
B764072:L764072:{c.instructions+=2;NFSU2_TR(0x764072);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x68ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B764075:{NFSU2_TR(0x764075);
if(r1(R+518)){{goto L764097;}}
}
B764077:L764077:{c.instructions+=2;NFSU2_TR(0x764077);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x6cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76407a:{NFSU2_TR(0x76407a);
if(r1(R+518)){{goto L76408e;}}
}
B76407c:L76407c:{c.instructions+=2;NFSU2_TR(0x76407c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x77ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76407f:{NFSU2_TR(0x76407f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76465c;}}
}
B764085:L764085:{c.instructions+=2;NFSU2_TR(0x764085);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764089:{NFSU2_TR(0x764089);
{goto L76465c;}
}
B76408e:L76408e:{c.instructions+=2;NFSU2_TR(0x76408e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764092:{NFSU2_TR(0x764092);
{goto L76465c;}
}
B764097:L764097:{c.instructions+=2;NFSU2_TR(0x764097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76409b:{NFSU2_TR(0x76409b);
{goto L76465c;}
}
B7640a0:L7640a0:{c.instructions+=3;NFSU2_TR(0x7640a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7640a2:{NFSU2_TR(0x7640a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x36ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640a4:{NFSU2_TR(0x7640a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7640ba;}}
}
B7640a6:L7640a6:{c.instructions+=2;NFSU2_TR(0x7640a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x34ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7640aa:{NFSU2_TR(0x7640aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7640ba;}}
}
B7640ac:L7640ac:{c.instructions+=5;NFSU2_TR(0x7640ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640ad:{NFSU2_TR(0x7640ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640ae:{NFSU2_TR(0x7640ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7640b2:{NFSU2_TR(0x7640b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7640b5:{NFSU2_TR(0x7640b5);
{goto L76465c;}
}
B7640ba:L7640ba:{c.instructions+=2;NFSU2_TR(0x7640ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x33ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640bc:{NFSU2_TR(0x7640bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7640d2;}}
}
B7640be:L7640be:{c.instructions+=2;NFSU2_TR(0x7640be);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x32ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7640c2:{NFSU2_TR(0x7640c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7640d2;}}
}
B7640c4:L7640c4:{c.instructions+=5;NFSU2_TR(0x7640c4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640c5:{NFSU2_TR(0x7640c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640c6:{NFSU2_TR(0x7640c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B7640ca:{NFSU2_TR(0x7640ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7640cd:{NFSU2_TR(0x7640cd);
{goto L76465c;}
}
B7640d2:L7640d2:{c.instructions+=2;NFSU2_TR(0x7640d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x64ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640d4:{NFSU2_TR(0x7640d4);
if(r1(R+518)){{goto L76465c;}}
}
B7640da:L7640da:{c.instructions+=2;NFSU2_TR(0x7640da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x69ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640dc:{NFSU2_TR(0x7640dc);
if(r1(R+518)){{goto L76465c;}}
}
B7640e2:L7640e2:{c.instructions+=2;NFSU2_TR(0x7640e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640e4:{NFSU2_TR(0x7640e4);
if(r1(R+518)){{goto L76465c;}}
}
B7640ea:L7640ea:{c.instructions+=2;NFSU2_TR(0x7640ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x75ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640ec:{NFSU2_TR(0x7640ec);
if(r1(R+518)){{goto L76465c;}}
}
B7640f2:L7640f2:{c.instructions+=2;NFSU2_TR(0x7640f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640f4:{NFSU2_TR(0x7640f4);
if(r1(R+518)){{goto L76465c;}}
}
B7640fa:L7640fa:{c.instructions+=2;NFSU2_TR(0x7640fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7640fc:{NFSU2_TR(0x7640fc);
if(r1(R+518)){{goto L76465c;}}
}
B764102:L764102:{c.instructions+=6;NFSU2_TR(0x764102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764106:{NFSU2_TR(0x764106);
__builtin_memmove((R+4),gp(0x81aa00),4);
}
B76410c:{NFSU2_TR(0x76410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764110:{NFSU2_TR(0x764110);
w4(R+0,u32(r1(R+12)));
}
B764113:{NFSU2_TR(0x764113);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B764118:{NFSU2_TR(0x764118);
if(r1(R+518)){{goto L76412d;}}
}
B76411a:L76411a:{c.instructions+=4;NFSU2_TR(0x76411a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76411d:{NFSU2_TR(0x76411d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764120:{NFSU2_TR(0x764120);
__builtin_memmove((R+0),(R+12),1);
}
B764122:{NFSU2_TR(0x764122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764127ull));
TAIL_STATIC(0x763e79u,763);
}
B764127:L764127:{c.instructions+=3;NFSU2_TR(0x764127);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B764129:{NFSU2_TR(0x764129);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76412a:{NFSU2_TR(0x76412a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76412d:L76412d:{c.instructions+=4;NFSU2_TR(0x76412d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B764130:{NFSU2_TR(0x764130);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764133:{NFSU2_TR(0x764133);
__builtin_memmove((R+0),(R+12),1);
}
B764135:{NFSU2_TR(0x764135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76413aull));
TAIL_STATIC(0x763e79u,763);
}
B76413a:L76413a:{c.instructions+=1;NFSU2_TR(0x76413a);
{goto L76465c;}
}
B76413f:L76413f:{c.instructions+=3;NFSU2_TR(0x76413f);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B764142:{NFSU2_TR(0x764142);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x67ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x67ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764145:{NFSU2_TR(0x764145);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L764391;}}
}
B76414b:L76414b:{c.instructions+=2;NFSU2_TR(0x76414b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x65ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76414e:{NFSU2_TR(0x76414e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7641d4;}}
}
B764154:L764154:{c.instructions+=2;NFSU2_TR(0x764154);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x58ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764157:{NFSU2_TR(0x764157);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L764235;}}
}
B76415d:L76415d:{c.instructions+=1;NFSU2_TR(0x76415d);
if(r1(R+518)){{goto L764412;}}
}
B764163:L764163:{c.instructions+=2;NFSU2_TR(0x764163);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764166:{NFSU2_TR(0x764166);
if(r1(R+518)){{goto L7641f7;}}
}
B76416c:L76416c:{c.instructions+=3;NFSU2_TR(0x76416c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76416d:{NFSU2_TR(0x76416d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76416e:{NFSU2_TR(0x76416e);
if(r1(R+518)){{goto L7641ca;}}
}
B764170:L764170:{c.instructions+=3;NFSU2_TR(0x764170);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B764171:{NFSU2_TR(0x764171);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764172:{NFSU2_TR(0x764172);
if(r1(R+518)){{goto L7641ca;}}
}
B764174:L764174:{c.instructions+=2;NFSU2_TR(0x764174);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764177:{NFSU2_TR(0x764177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76455a;}}
}
B76417d:L76417d:{c.instructions+=2;NFSU2_TR(0x76417d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B764183:{NFSU2_TR(0x764183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764189;}}
}
B764185:L764185:{c.instructions+=1;NFSU2_TR(0x764185);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764189:L764189:{c.instructions+=3;NFSU2_TR(0x764189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76418c:{NFSU2_TR(0x76418c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76418f:{NFSU2_TR(0x76418f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764196;}}
}
B764191:L764191:{c.instructions+=1;NFSU2_TR(0x764191);
w4(R+4,u32(0x7fffffffull));
}
B764196:L764196:{c.instructions+=6;NFSU2_TR(0x764196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76419a:{NFSU2_TR(0x76419a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x810ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B7641a0:{NFSU2_TR(0x7641a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7641a3:{NFSU2_TR(0x7641a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7641a6:{NFSU2_TR(0x7641a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7641a9:{NFSU2_TR(0x7641a9);
if(r1(R+518)){{goto L7643e7;}}
}
B7641af:L7641af:{c.instructions+=2;NFSU2_TR(0x7641af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7641b1:{NFSU2_TR(0x7641b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7641bb;}}
}
B7641b3:L7641b3:{c.instructions+=2;NFSU2_TR(0x7641b3);
__builtin_memmove((R+0),gp(0x81a464),4);
}
B7641b8:{NFSU2_TR(0x7641b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7641bb:L7641bb:{c.instructions+=3;NFSU2_TR(0x7641bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7641be:{NFSU2_TR(0x7641be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641c5:{NFSU2_TR(0x7641c5);
{goto L7643d9;}
}
B7641ca:L7641ca:{c.instructions+=2;NFSU2_TR(0x7641ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641d1:{NFSU2_TR(0x7641d1);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x20ull))));
}
B7641d4:L7641d4:{c.instructions+=5;NFSU2_TR(0x7641d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7641d8:{NFSU2_TR(0x7641d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7641dc:{NFSU2_TR(0x7641dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((R+24),(U+0),4);
}
B7641e2:{NFSU2_TR(0x7641e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7641e5:{NFSU2_TR(0x7641e5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7642db;}}
}
B7641eb:L7641eb:{c.instructions+=2;NFSU2_TR(0x7641eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641f2:{NFSU2_TR(0x7641f2);
{goto L764322;}
}
B7641f7:L7641f7:{c.instructions+=2;NFSU2_TR(0x7641f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B7641fd:{NFSU2_TR(0x7641fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764203;}}
}
B7641ff:L7641ff:{c.instructions+=1;NFSU2_TR(0x7641ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764203:L764203:{c.instructions+=4;NFSU2_TR(0x764203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764207:{NFSU2_TR(0x764207);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+10,u16(u32(r2(U+4))&u32(u16(0x810ull))));
w1(R+519,u8(s16(r2(U+10))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+10))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+10))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76420d:{NFSU2_TR(0x76420d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764210:{NFSU2_TR(0x764210);
if(r1(R+518)){{goto L764274;}}
}
B764212:L764212:{c.instructions+=5;NFSU2_TR(0x764212);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B764216:{NFSU2_TR(0x764216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764217:{NFSU2_TR(0x764217);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((R+0),(U+0),4);
}
B76421d:{NFSU2_TR(0x76421d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76421e:{NFSU2_TR(0x76421e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764223ull));
TAIL_STATIC(0x76cab5u,76c);
}
B764223:L764223:{c.instructions+=5;NFSU2_TR(0x764223);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764225:{NFSU2_TR(0x764225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764226:{NFSU2_TR(0x764226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764227:{NFSU2_TR(0x764227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76422a:{NFSU2_TR(0x76422a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L764284;}}
}
B76422c:L76422c:{c.instructions+=2;NFSU2_TR(0x76422c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764233:{NFSU2_TR(0x764233);
{goto L764284;}
}
B764235:L764235:{c.instructions+=2;NFSU2_TR(0x764235);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5aull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764238:{NFSU2_TR(0x764238);
if(r1(R+518)){{goto L764292;}}
}
B76423a:L76423a:{c.instructions+=2;NFSU2_TR(0x76423a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76423d:{NFSU2_TR(0x76423d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764203u);}goto L764203;}}
}
B76423f:L76423f:{c.instructions+=2;NFSU2_TR(0x76423f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764240:{NFSU2_TR(0x764240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76455a;}}
}
B764246:L764246:{c.instructions+=1;NFSU2_TR(0x764246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76424a:L76424a:{c.instructions+=1;NFSU2_TR(0x76424a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B764251:L764251:{c.instructions+=4;NFSU2_TR(0x764251);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B764254:{NFSU2_TR(0x764254);
w4(R+24,u32(0x8000ull));
}
B764259:{NFSU2_TR(0x764259);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76425b:{NFSU2_TR(0x76425b);
if(r1(R+518)){{goto L764482;}}
}
B764261:L764261:{c.instructions+=6;NFSU2_TR(0x764261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B764264:{NFSU2_TR(0x764264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B764266:{NFSU2_TR(0x764266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B764269:{NFSU2_TR(0x764269);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B76426c:{NFSU2_TR(0x76426c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76426f:{NFSU2_TR(0x76426f);
{goto L7644aa;}
}
B764274:L764274:{c.instructions+=3;NFSU2_TR(0x764274);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B764277:{NFSU2_TR(0x764277);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76427d:{NFSU2_TR(0x76427d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764284:L764284:{c.instructions+=3;NFSU2_TR(0x764284);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((R+0),(U+0),4);
}
B76428a:{NFSU2_TR(0x76428a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76428d:{NFSU2_TR(0x76428d);
{goto L76455a;}
}
B764292:L764292:{c.instructions+=5;NFSU2_TR(0x764292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764296:{NFSU2_TR(0x764296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764299:{NFSU2_TR(0x764299);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76429c:{NFSU2_TR(0x76429c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76429e:{NFSU2_TR(0x76429e);
if(r1(R+518)){{goto L7642cd;}}
}
B7642a0:L7642a0:{c.instructions+=3;NFSU2_TR(0x7642a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7642a3:{NFSU2_TR(0x7642a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7642a5:{NFSU2_TR(0x7642a5);
if(r1(R+518)){{goto L7642cd;}}
}
B7642a7:L7642a7:{c.instructions+=4;NFSU2_TR(0x7642a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7642ab:{NFSU2_TR(0x7642ab);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B7642ae:{NFSU2_TR(0x7642ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7642b1:{NFSU2_TR(0x7642b1);
if(r1(R+518)){{goto L7642c4;}}
}
B7642b3:L7642b3:{c.instructions+=5;NFSU2_TR(0x7642b3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7642b4:{NFSU2_TR(0x7642b4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7642b6:{NFSU2_TR(0x7642b6);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7642b8:{NFSU2_TR(0x7642b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7642bf:{NFSU2_TR(0x7642bf);
{goto L764557;}
}
B7642c4:L7642c4:{c.instructions+=2;NFSU2_TR(0x7642c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7642c8:{NFSU2_TR(0x7642c8);
{goto L764557;}
}
B7642cd:L7642cd:{c.instructions+=4;NFSU2_TR(0x7642cd);
__builtin_memmove((R+0),gp(0x81a460),4);
}
B7642d2:{NFSU2_TR(0x7642d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7642d5:{NFSU2_TR(0x7642d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7642d6:{NFSU2_TR(0x7642d6);
{goto L764386;}
}
B7642db:L7642db:{c.instructions+=1;NFSU2_TR(0x7642db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7642eb;}}
}
B7642dd:L7642dd:{c.instructions+=2;NFSU2_TR(0x7642dd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x67ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7642e0:{NFSU2_TR(0x7642e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764322;}}
}
B7642e2:L7642e2:{c.instructions+=2;NFSU2_TR(0x7642e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7642e9:{NFSU2_TR(0x7642e9);
{goto L764322;}
}
B7642eb:L7642eb:{c.instructions+=3;NFSU2_TR(0x7642eb);
w4(R+0,u32(0x200ull));
}
B7642f0:{NFSU2_TR(0x7642f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7642f3:{NFSU2_TR(0x7642f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7642f8;}}
}
B7642f5:L7642f5:{c.instructions+=1;NFSU2_TR(0x7642f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7642f8:L7642f8:{c.instructions+=3;NFSU2_TR(0x7642f8);
w4(R+28,u32(0xa3ull));
}
B7642fd:{NFSU2_TR(0x7642fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B764300:{NFSU2_TR(0x764300);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L764322;}}
}
B764302:L764302:{c.instructions+=4;NFSU2_TR(0x764302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764305:{NFSU2_TR(0x764305);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x15dull))));
}
B76430a:{NFSU2_TR(0x76430a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76430b:{NFSU2_TR(0x76430b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764310ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B764310:L764310:{c.instructions+=4;NFSU2_TR(0x764310);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764312:{NFSU2_TR(0x764312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764313:{NFSU2_TR(0x764313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764316:{NFSU2_TR(0x764316);
if(r1(R+518)){{goto L76431f;}}
}
B764318:L764318:{c.instructions+=3;NFSU2_TR(0x764318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76431b:{NFSU2_TR(0x76431b);
__builtin_memmove((R+24),(R+0),4);
}
B76431d:{NFSU2_TR(0x76431d);
{goto L764322;}
}
B76431f:L76431f:{c.instructions+=1;NFSU2_TR(0x76431f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764322:L764322:{c.instructions+=15;NFSU2_TR(0x764322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764325:{NFSU2_TR(0x764325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B764327:{NFSU2_TR(0x764327);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76432a:{NFSU2_TR(0x76432a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76432d:{NFSU2_TR(0x76432d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B764330:{NFSU2_TR(0x764330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764333:{NFSU2_TR(0x764333);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764336:{NFSU2_TR(0x764336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764339:{NFSU2_TR(0x764339);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B76433c:{NFSU2_TR(0x76433c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76433d:{NFSU2_TR(0x76433d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B764340:{NFSU2_TR(0x764340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764341:{NFSU2_TR(0x764341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764342:{NFSU2_TR(0x764342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764345:{NFSU2_TR(0x764345);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a31c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76434bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76434b:L76434b:{c.instructions+=4;NFSU2_TR(0x76434b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76434e:{NFSU2_TR(0x76434e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B764351:{NFSU2_TR(0x764351);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B764357:{NFSU2_TR(0x764357);
if(r1(R+518)){{goto L764367;}}
}
B764359:L764359:{c.instructions+=2;NFSU2_TR(0x764359);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76435d:{NFSU2_TR(0x76435d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764367;}}
}
B76435f:L76435f:{c.instructions+=2;NFSU2_TR(0x76435f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764360:{NFSU2_TR(0x764360);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a328),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764366ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B764366:L764366:{c.instructions+=1;NFSU2_TR(0x764366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764367:L764367:{c.instructions+=2;NFSU2_TR(0x764367);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x67ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76436a:{NFSU2_TR(0x76436a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764378;}}
}
B76436c:L76436c:{c.instructions+=2;NFSU2_TR(0x76436c);
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
B76436e:{NFSU2_TR(0x76436e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764378;}}
}
B764370:L764370:{c.instructions+=2;NFSU2_TR(0x764370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764371:{NFSU2_TR(0x764371);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a320),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764377ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B764377:L764377:{c.instructions+=1;NFSU2_TR(0x764377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764378:L764378:{c.instructions+=2;NFSU2_TR(0x764378);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76437b:{NFSU2_TR(0x76437b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764385;}}
}
B76437d:L76437d:{c.instructions+=3;NFSU2_TR(0x76437d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764381:{NFSU2_TR(0x764381);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B764382:{NFSU2_TR(0x764382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764385:L764385:{c.instructions+=1;NFSU2_TR(0x764385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764386:L764386:{c.instructions+=1;NFSU2_TR(0x764386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76438bull));
TAIL_STATIC(0x766bc0u,766);
}
B76438b:L76438b:{c.instructions+=2;NFSU2_TR(0x76438b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76438c:{NFSU2_TR(0x76438c);
{goto L764557;}
}
B764391:L764391:{c.instructions+=2;NFSU2_TR(0x764391);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x69ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B764394:{NFSU2_TR(0x764394);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764246u);}goto L764246;}}
}
B76439a:L76439a:{c.instructions+=2;NFSU2_TR(0x76439a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76439d:{NFSU2_TR(0x76439d);
if(r1(R+518)){{goto L764458;}}
}
B7643a3:L7643a3:{c.instructions+=2;NFSU2_TR(0x7643a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7643a4:{NFSU2_TR(0x7643a4);
if(r1(R+518)){{goto L76443e;}}
}
B7643aa:L7643aa:{c.instructions+=2;NFSU2_TR(0x7643aa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7643ab:{NFSU2_TR(0x7643ab);
if(r1(R+518)){{goto L76440b;}}
}
B7643ad:L7643ad:{c.instructions+=2;NFSU2_TR(0x7643ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7643b0:{NFSU2_TR(0x7643b0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764189u);}goto L764189;}}
}
B7643b6:L7643b6:{c.instructions+=3;NFSU2_TR(0x7643b6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7643b7:{NFSU2_TR(0x7643b7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7643b8:{NFSU2_TR(0x7643b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76424au);}goto L76424a;}}
}
B7643be:L7643be:{c.instructions+=2;NFSU2_TR(0x7643be);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7643c1:{NFSU2_TR(0x7643c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76455a;}}
}
B7643c7:L7643c7:{c.instructions+=2;NFSU2_TR(0x7643c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7643ce:{NFSU2_TR(0x7643ce);
{goto L764415;}
}
B7643d0:L7643d0:{c.instructions+=3;NFSU2_TR(0x7643d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7643d1:{NFSU2_TR(0x7643d1);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B7643d5:{NFSU2_TR(0x7643d5);
if(r1(R+518)){{goto L7643dd;}}
}
B7643d7:L7643d7:{c.instructions+=2;NFSU2_TR(0x7643d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7643d8:{NFSU2_TR(0x7643d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7643d9:L7643d9:{c.instructions+=2;NFSU2_TR(0x7643d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7643db:{NFSU2_TR(0x7643db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7643d0u);}goto L7643d0;}}
}
B7643dd:L7643dd:{c.instructions+=3;NFSU2_TR(0x7643dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7643e0:{NFSU2_TR(0x7643e0);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7643e2:{NFSU2_TR(0x7643e2);
{goto L764557;}
}
B7643e7:L7643e7:{c.instructions+=2;NFSU2_TR(0x7643e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7643e9:{NFSU2_TR(0x7643e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7643f3;}}
}
B7643eb:L7643eb:{c.instructions+=2;NFSU2_TR(0x7643eb);
__builtin_memmove((R+0),gp(0x81a460),4);
}
B7643f0:{NFSU2_TR(0x7643f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7643f3:L7643f3:{c.instructions+=2;NFSU2_TR(0x7643f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7643f6:{NFSU2_TR(0x7643f6);
{goto L7643ff;}
}
B7643f8:L7643f8:{c.instructions+=3;NFSU2_TR(0x7643f8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7643f9:{NFSU2_TR(0x7643f9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7643fc:{NFSU2_TR(0x7643fc);
if(r1(R+518)){{goto L764403;}}
}
B7643fe:L7643fe:{c.instructions+=1;NFSU2_TR(0x7643fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7643ff:L7643ff:{c.instructions+=2;NFSU2_TR(0x7643ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764401:{NFSU2_TR(0x764401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7643f8u);}goto L7643f8;}}
}
B764403:L764403:{c.instructions+=2;NFSU2_TR(0x764403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B764406:{NFSU2_TR(0x764406);
{goto L764557;}
}
B76440b:L76440b:{c.instructions+=1;NFSU2_TR(0x76440b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764412:L764412:{c.instructions+=1;NFSU2_TR(0x764412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764415:L764415:{c.instructions+=3;NFSU2_TR(0x764415);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B764419:{NFSU2_TR(0x764419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764420:{NFSU2_TR(0x764420);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764251u);}goto L764251;}}
}
B764426:L764426:{c.instructions+=6;NFSU2_TR(0x764426);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B764429:{NFSU2_TR(0x764429);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x51ull))));
}
B76442b:{NFSU2_TR(0x76442b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76442f:{NFSU2_TR(0x76442f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B764432:{NFSU2_TR(0x764432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764439:{NFSU2_TR(0x764439);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764251u);}goto L764251;}
}
B76443e:L76443e:{c.instructions+=3;NFSU2_TR(0x76443e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B764442:{NFSU2_TR(0x764442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764449:{NFSU2_TR(0x764449);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764251u);}goto L764251;}}
}
B76444f:L76444f:{c.instructions+=2;NFSU2_TR(0x76444f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764453:{NFSU2_TR(0x764453);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764251u);}goto L764251;}
}
B764458:L764458:{c.instructions+=5;NFSU2_TR(0x764458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76445c:{NFSU2_TR(0x76445c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B764460:{NFSU2_TR(0x764460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764463:{NFSU2_TR(0x764463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764466:{NFSU2_TR(0x764466);
if(r1(R+518)){{goto L764471;}}
}
B764468:L764468:{c.instructions+=3;NFSU2_TR(0x764468);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B76446c:{NFSU2_TR(0x76446c);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76446f:{NFSU2_TR(0x76446f);
{goto L764476;}
}
B764471:L764471:{c.instructions+=2;NFSU2_TR(0x764471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B764474:{NFSU2_TR(0x764474);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B764476:L764476:{c.instructions+=2;NFSU2_TR(0x764476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76447d:{NFSU2_TR(0x76447d);
{goto L764649;}
}
B764482:L764482:{c.instructions+=4;NFSU2_TR(0x764482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764486:{NFSU2_TR(0x764486);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B764489:{NFSU2_TR(0x764489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76448c:{NFSU2_TR(0x76448c);
if(r1(R+518)){{goto L7644a0;}}
}
B76448e:L76448e:{c.instructions+=2;NFSU2_TR(0x76448e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B764491:{NFSU2_TR(0x764491);
if(r1(R+518)){{goto L76449a;}}
}
B764493:L764493:{c.instructions+=1;NFSU2_TR(0x764493);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B764497:L764497:{c.instructions+=2;NFSU2_TR(0x764497);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B764498:{NFSU2_TR(0x764498);
{goto L7644aa;}
}
B76449a:L76449a:{c.instructions+=2;NFSU2_TR(0x76449a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B76449e:{NFSU2_TR(0x76449e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764497u);}goto L764497;}
}
B7644a0:L7644a0:{c.instructions+=3;NFSU2_TR(0x7644a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7644a3:{NFSU2_TR(0x7644a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7644a6:{NFSU2_TR(0x7644a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764497u);}goto L764497;}}
}
B7644a8:L7644a8:{c.instructions+=1;NFSU2_TR(0x7644a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7644aa:L7644aa:{c.instructions+=2;NFSU2_TR(0x7644aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7644ad:{NFSU2_TR(0x7644ad);
if(r1(R+518)){{goto L7644c4;}}
}
B7644af:L7644af:{c.instructions+=2;NFSU2_TR(0x7644af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7644b1:{NFSU2_TR(0x7644b1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7644c4;}}
}
B7644b3:L7644b3:{c.instructions+=1;NFSU2_TR(0x7644b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7644b9;}}
}
B7644b5:L7644b5:{c.instructions+=2;NFSU2_TR(0x7644b5);
w1(R+512,u8(0x0ull));
}
B7644b7:{NFSU2_TR(0x7644b7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7644c4;}}
}
B7644b9:L7644b9:{c.instructions+=4;NFSU2_TR(0x7644b9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B7644bb:{NFSU2_TR(0x7644bb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))+u32(u32(0x0ull))));
w4(R+8,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7644be:{NFSU2_TR(0x7644be);
w4(R+8,u32(0-u32(r4(R+8))));
}
B7644c0:{NFSU2_TR(0x7644c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7644c4:L7644c4:{c.instructions+=4;NFSU2_TR(0x7644c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7644c7:{NFSU2_TR(0x7644c7);
__builtin_memmove((R+12),(R+0),4);
}
B7644c9:{NFSU2_TR(0x7644c9);
__builtin_memmove((R+28),(R+8),4);
}
B7644cb:{NFSU2_TR(0x7644cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7644cf;}}
}
B7644cd:L7644cd:{c.instructions+=1;NFSU2_TR(0x7644cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7644cf:L7644cf:{c.instructions+=2;NFSU2_TR(0x7644cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7644d3:{NFSU2_TR(0x7644d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7644de;}}
}
B7644d5:L7644d5:{c.instructions+=2;NFSU2_TR(0x7644d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7644dc:{NFSU2_TR(0x7644dc);
{goto L7644ef;}
}
B7644de:L7644de:{c.instructions+=4;NFSU2_TR(0x7644de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7644e2:{NFSU2_TR(0x7644e2);
w4(R+0,u32(0x200ull));
}
B7644e7:{NFSU2_TR(0x7644e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7644ea:{NFSU2_TR(0x7644ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7644ef;}}
}
B7644ec:L7644ec:{c.instructions+=1;NFSU2_TR(0x7644ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7644ef:L7644ef:{c.instructions+=3;NFSU2_TR(0x7644ef);
__builtin_memmove((R+0),(R+12),4);
}
B7644f1:{NFSU2_TR(0x7644f1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7644f3:{NFSU2_TR(0x7644f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7644f9;}}
}
B7644f5:L7644f5:{c.instructions+=1;NFSU2_TR(0x7644f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7644f9:L7644f9:{c.instructions+=1;NFSU2_TR(0x7644f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffabull))));
__builtin_memmove((R+24),(U+0),4);
}
B7644fc:L7644fc:{c.instructions+=4;NFSU2_TR(0x7644fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7644ff:{NFSU2_TR(0x7644ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764502:{NFSU2_TR(0x764502);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764504:{NFSU2_TR(0x764504);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76450c;}}
}
B764506:L764506:{c.instructions+=3;NFSU2_TR(0x764506);
__builtin_memmove((R+0),(R+12),4);
}
B764508:{NFSU2_TR(0x764508);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76450a:{NFSU2_TR(0x76450a);
if(r1(R+518)){{goto L764530;}}
}
B76450c:L76450c:{c.instructions+=7;NFSU2_TR(0x76450c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76450f:{NFSU2_TR(0x76450f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B764510:{NFSU2_TR(0x764510);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764511:{NFSU2_TR(0x764511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764512:{NFSU2_TR(0x764512);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764513:{NFSU2_TR(0x764513);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764514:{NFSU2_TR(0x764514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764519ull));
TAIL_STATIC(0x76cae0u,76c);
}
B764519:L764519:{c.instructions+=6;NFSU2_TR(0x764519);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B76451c:{NFSU2_TR(0x76451c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76451f:{NFSU2_TR(0x76451f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764522:{NFSU2_TR(0x764522);
__builtin_memmove((R+12),(R+0),4);
}
B764524:{NFSU2_TR(0x764524);
__builtin_memmove((R+28),(R+8),4);
}
B764526:{NFSU2_TR(0x764526);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76452b;}}
}
B764528:L764528:{c.instructions+=1;NFSU2_TR(0x764528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76452b:L76452b:{c.instructions+=3;NFSU2_TR(0x76452b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76452d:{NFSU2_TR(0x76452d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76452e:{NFSU2_TR(0x76452e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7644fcu);}goto L7644fc;}
}
B764530:L764530:{c.instructions+=7;NFSU2_TR(0x764530);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffabull))));
__builtin_memmove((R+0),(U+0),4);
}
B764533:{NFSU2_TR(0x764533);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B764535:{NFSU2_TR(0x764535);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B764536:{NFSU2_TR(0x764536);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76453a:{NFSU2_TR(0x76453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76453d:{NFSU2_TR(0x76453d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764540:{NFSU2_TR(0x764540);
if(r1(R+518)){{goto L76455a;}}
}
B764542:L764542:{c.instructions+=3;NFSU2_TR(0x764542);
__builtin_memmove((R+4),(R+24),4);
}
B764544:{NFSU2_TR(0x764544);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B764547:{NFSU2_TR(0x764547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76454d;}}
}
B764549:L764549:{c.instructions+=2;NFSU2_TR(0x764549);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76454b:{NFSU2_TR(0x76454b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76455a;}}
}
B76454d:L76454d:{c.instructions+=4;NFSU2_TR(0x76454d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764550:{NFSU2_TR(0x764550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B764553:{NFSU2_TR(0x764553);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+4)),r1(U+0));
}
B764556:{NFSU2_TR(0x764556);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B764557:L764557:{c.instructions+=1;NFSU2_TR(0x764557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76455a:L76455a:{c.instructions+=2;NFSU2_TR(0x76455a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76455e:{NFSU2_TR(0x76455e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764649;}}
}
B764564:L764564:{c.instructions+=3;NFSU2_TR(0x764564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B764567:{NFSU2_TR(0x764567);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76456a:{NFSU2_TR(0x76456a);
if(r1(R+518)){{goto L764592;}}
}
B76456c:L76456c:{c.instructions+=2;NFSU2_TR(0x76456c);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76456f:{NFSU2_TR(0x76456f);
if(r1(R+518)){{goto L764577;}}
}
B764571:L764571:{c.instructions+=2;NFSU2_TR(0x764571);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B764575:{NFSU2_TR(0x764575);
{goto L76458b;}
}
B764577:L764577:{c.instructions+=2;NFSU2_TR(0x764577);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76457a:{NFSU2_TR(0x76457a);
if(r1(R+518)){{goto L764582;}}
}
B76457c:L76457c:{c.instructions+=2;NFSU2_TR(0x76457c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x2bull));
s1(u32(r4(U+0)),r1(U+4));
}
B764580:{NFSU2_TR(0x764580);
{goto L76458b;}
}
B764582:L764582:{c.instructions+=2;NFSU2_TR(0x764582);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B764585:{NFSU2_TR(0x764585);
if(r1(R+518)){{goto L764592;}}
}
B764587:L764587:{c.instructions+=1;NFSU2_TR(0x764587);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76458b:L76458b:{c.instructions+=1;NFSU2_TR(0x76458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764592:L764592:{c.instructions+=5;NFSU2_TR(0x764592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B764595:{NFSU2_TR(0x764595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B764598:{NFSU2_TR(0x764598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B76459b:{NFSU2_TR(0x76459b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76459e:{NFSU2_TR(0x76459e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7645b1;}}
}
B7645a0:L7645a0:{c.instructions+=5;NFSU2_TR(0x7645a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7645a3:{NFSU2_TR(0x7645a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7645a6:{NFSU2_TR(0x7645a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645a7:{NFSU2_TR(0x7645a7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645a9:{NFSU2_TR(0x7645a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7645aeull));
TAIL_STATIC(0x763eacu,763);
}
B7645ae:L7645ae:{c.instructions+=1;NFSU2_TR(0x7645ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7645b1:L7645b1:{c.instructions+=5;NFSU2_TR(0x7645b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7645b4:{NFSU2_TR(0x7645b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7645b7:{NFSU2_TR(0x7645b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7645ba:{NFSU2_TR(0x7645ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7645bd:{NFSU2_TR(0x7645bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7645c2ull));
TAIL_STATIC(0x763ed0u,763);
}
B7645c2:L7645c2:{c.instructions+=3;NFSU2_TR(0x7645c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7645c5:{NFSU2_TR(0x7645c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7645c6:{NFSU2_TR(0x7645c6);
if(r1(R+518)){{goto L7645dc;}}
}
B7645c8:L7645c8:{c.instructions+=2;NFSU2_TR(0x7645c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7645cb:{NFSU2_TR(0x7645cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7645dc;}}
}
B7645cd:L7645cd:{c.instructions+=5;NFSU2_TR(0x7645cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645ce:{NFSU2_TR(0x7645ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645cf:{NFSU2_TR(0x7645cf);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645d1:{NFSU2_TR(0x7645d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7645d4:{NFSU2_TR(0x7645d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7645d9ull));
TAIL_STATIC(0x763eacu,763);
}
B7645d9:L7645d9:{c.instructions+=1;NFSU2_TR(0x7645d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7645dc:L7645dc:{c.instructions+=2;NFSU2_TR(0x7645dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7645e0:{NFSU2_TR(0x7645e0);
if(r1(R+518)){{goto L764623;}}
}
B7645e2:L7645e2:{c.instructions+=2;NFSU2_TR(0x7645e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7645e6:{NFSU2_TR(0x7645e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L764623;}}
}
B7645e8:L7645e8:{c.instructions+=3;NFSU2_TR(0x7645e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7645eb:{NFSU2_TR(0x7645eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7645ee:{NFSU2_TR(0x7645ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7645f1:L7645f1:{c.instructions+=7;NFSU2_TR(0x7645f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7645f4:{NFSU2_TR(0x7645f4);
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
B7645f6:{NFSU2_TR(0x7645f6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B7645f9:{NFSU2_TR(0x7645f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645fa:{NFSU2_TR(0x7645fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B7645fd:{NFSU2_TR(0x7645fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7645fe:{NFSU2_TR(0x7645fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764603ull));
TAIL_STATIC(0x76cab5u,76c);
}
B764603:L764603:{c.instructions+=6;NFSU2_TR(0x764603);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B764604:{NFSU2_TR(0x764604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764605:{NFSU2_TR(0x764605);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B764606:{NFSU2_TR(0x764606);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764608:{NFSU2_TR(0x764608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764609:{NFSU2_TR(0x764609);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L764632;}}
}
B76460b:L76460b:{c.instructions+=5;NFSU2_TR(0x76460b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76460e:{NFSU2_TR(0x76460e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76460f:{NFSU2_TR(0x76460f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B764612:{NFSU2_TR(0x764612);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+4),(U+0),4);
}
B764615:{NFSU2_TR(0x764615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76461aull));
TAIL_STATIC(0x763ed0u,763);
}
B76461a:L76461a:{c.instructions+=3;NFSU2_TR(0x76461a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76461e:{NFSU2_TR(0x76461e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76461f:{NFSU2_TR(0x76461f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7645f1u);}goto L7645f1;}}
}
B764621:L764621:{c.instructions+=1;NFSU2_TR(0x764621);
{goto L764632;}
}
B764623:L764623:{c.instructions+=4;NFSU2_TR(0x764623);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B764626:{NFSU2_TR(0x764626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B764629:{NFSU2_TR(0x764629);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76462c:{NFSU2_TR(0x76462c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764631ull));
TAIL_STATIC(0x763ed0u,763);
}
B764631:L764631:{c.instructions+=1;NFSU2_TR(0x764631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B764632:L764632:{c.instructions+=2;NFSU2_TR(0x764632);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B764636:{NFSU2_TR(0x764636);
if(r1(R+518)){{goto L764649;}}
}
B764638:L764638:{c.instructions+=5;NFSU2_TR(0x764638);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76463b:{NFSU2_TR(0x76463b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76463e:{NFSU2_TR(0x76463e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76463f:{NFSU2_TR(0x76463f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764641:{NFSU2_TR(0x764641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764646ull));
TAIL_STATIC(0x763eacu,763);
}
B764646:L764646:{c.instructions+=1;NFSU2_TR(0x764646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B764649:L764649:{c.instructions+=2;NFSU2_TR(0x764649);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76464d:{NFSU2_TR(0x76464d);
if(r1(R+518)){{goto L76465c;}}
}
B76464f:L76464f:{c.instructions+=2;NFSU2_TR(0x76464f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B764652:{NFSU2_TR(0x764652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764657ull));
TAIL_STATIC(0x75c6dau,75c);
}
B764657:L764657:{c.instructions+=2;NFSU2_TR(0x764657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76465b:{NFSU2_TR(0x76465b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76465c:L76465c:{c.instructions+=4;NFSU2_TR(0x76465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76465f:{NFSU2_TR(0x76465f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B764661:{NFSU2_TR(0x764661);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B764663:{NFSU2_TR(0x764663);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x763f3cu,763);}
}
B764669:L764669:{c.instructions+=7;NFSU2_TR(0x764669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76466a:{NFSU2_TR(0x76466a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76466b:{NFSU2_TR(0x76466b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76466e:{NFSU2_TR(0x76466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B764671:{NFSU2_TR(0x764671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B764674:{NFSU2_TR(0x764674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B764675:{NFSU2_TR(0x764675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76467aull));
TAIL_STATIC(0x76115eu,761);
}
B76467a:L76467a:{c.instructions+=2;NFSU2_TR(0x76467a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76467b:{NFSU2_TR(0x76467b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76469c:L76469c:{c.instructions+=3;NFSU2_TR(0x76469c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76469e:{NFSU2_TR(0x76469e);
u8 U[4];
w4(U+0,u32(0x7d4300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646a3:{NFSU2_TR(0x7646a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7646a8ull));
TAIL_STATIC(0x760da0u,760);
}
B7646a8:L7646a8:{c.instructions+=5;NFSU2_TR(0x7646a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7646ac:{NFSU2_TR(0x7646ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7646b0:{NFSU2_TR(0x7646b0);
__builtin_memmove((R+4608),(R+4672),8);
__builtin_memmove((R+4616),(R+4680),8);
}
B7646b4:{NFSU2_TR(0x7646b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7646bb:{NFSU2_TR(0x7646bb);
{goto L7646c4;}
}
B7646bd:L7646bd:{c.instructions+=3;NFSU2_TR(0x7646bd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7646bf:{NFSU2_TR(0x7646bf);
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
B7646c0:{NFSU2_TR(0x7646c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7646c4:L7646c4:{c.instructions+=3;NFSU2_TR(0x7646c4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7646c8:{NFSU2_TR(0x7646c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7646cb:{NFSU2_TR(0x7646cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7646d0ull));
TAIL_STATIC(0x760ddbu,760);
}
B7646d0:L7646d0:{c.instructions+=1;NFSU2_TR(0x7646d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7646d1:L7646d1:{c.instructions+=16;NFSU2_TR(0x7646d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646d2:{NFSU2_TR(0x7646d2);
__builtin_memmove((R+20),(R+16),4);
}
B7646d4:{NFSU2_TR(0x7646d4);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7646d7:{NFSU2_TR(0x7646d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646d8:{NFSU2_TR(0x7646d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646d9:{NFSU2_TR(0x7646d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646da:{NFSU2_TR(0x7646da);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B7646db:{NFSU2_TR(0x7646db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7646dc:{NFSU2_TR(0x7646dc);
__builtin_memmove((R+4),(R+0),4);
}
B7646de:{NFSU2_TR(0x7646de);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B7646e3:{NFSU2_TR(0x7646e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646e4:{NFSU2_TR(0x7646e4);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B7646e5:{NFSU2_TR(0x7646e5);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B7646e6:{NFSU2_TR(0x7646e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7646e7:{NFSU2_TR(0x7646e7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7646e9:{NFSU2_TR(0x7646e9);
if(r1(R+518)){{goto L7646f4;}}
}
B7646eb:L7646eb:{c.instructions+=4;NFSU2_TR(0x7646eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7646ec:{NFSU2_TR(0x7646ec);
u8 U[28];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+24))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B7646ed:{NFSU2_TR(0x7646ed);
w4(R+0,u32(0x1ull));
}
B7646f2:{NFSU2_TR(0x7646f2);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L7646f2_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L7646f2_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L7646f2_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L7646f2_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L7646f2_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L7646f2_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L7646f2_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L7646f2_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L7646f2_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L7646f2_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L7646f2_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L7646f2_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L7646f2_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L7646f2_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L7646f2_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L7646f2_65;}
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_35:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_37:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_39:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_41:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_43:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_45:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_47:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_49:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_51:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_53:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_55:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_57:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_59:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_61:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_63:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_65:;
{SPILL();c.pc=0x7646f2u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B7646f4:L7646f4:{c.instructions+=5;NFSU2_TR(0x7646f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7646f7:{NFSU2_TR(0x7646f7);
s4(0x8ba484,u32(u32(m4(0x8ba484))&u32(u32(0x0ull))));
}
B7646fe:{NFSU2_TR(0x7646fe);
s4(0x8ba480,u32(u32(m4(0x8ba480))&u32(u32(0x0ull))));
}
B764705:{NFSU2_TR(0x764705);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B764709:{NFSU2_TR(0x764709);
if(r1(R+518)){{goto L764721;}}
}
B76470b:L76470b:{c.instructions+=1;NFSU2_TR(0x76470b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764710ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76469cu);}goto L76469c;}
}
B764710:L764710:{c.instructions+=2;NFSU2_TR(0x764710);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764712:{NFSU2_TR(0x764712);
if(r1(R+518)){{goto L764721;}}
}
B764714:L764714:{c.instructions+=4;NFSU2_TR(0x764714);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B764716:{NFSU2_TR(0x764716);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B764717:{NFSU2_TR(0x764717);
__builtin_memmove(gp(0x8ba484),(R+0),4);
}
B76471c:{NFSU2_TR(0x76471c);
__builtin_memmove(gp(0x8ba480),(R+0),4);
}
B764721:L764721:{c.instructions+=6;NFSU2_TR(0x764721);
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
B764723:{NFSU2_TR(0x764723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764724:{NFSU2_TR(0x764724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B764725:{NFSU2_TR(0x764725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B764726:{NFSU2_TR(0x764726);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B764727:{NFSU2_TR(0x764727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764730:L764730:{c.instructions+=8;NFSU2_TR(0x764730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764731:{NFSU2_TR(0x764731);
__builtin_memmove((R+20),(R+16),4);
}
B764733:{NFSU2_TR(0x764733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B764736:{NFSU2_TR(0x764736);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B764739:{NFSU2_TR(0x764739);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76473b:{NFSU2_TR(0x76473b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76473e:{NFSU2_TR(0x76473e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B764742:{NFSU2_TR(0x764742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764747ull));
{goto L764749;}
}
B764747:L764747:{c.instructions+=2;NFSU2_TR(0x764747);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B764748:{NFSU2_TR(0x764748);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764749:L764749:{c.instructions+=22;NFSU2_TR(0x764749);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B76474f:{NFSU2_TR(0x76474f);
__builtin_memmove((R+5056),gp(0x7d7ba0),8);
}
B764757:{NFSU2_TR(0x764757);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B76475f:{NFSU2_TR(0x76475f);
w8(R+5056,u64(u64(r8(R+5056))&u64(r8(R+4608))));
w8(R+5064,u64(u64(r8(R+5064))&u64(r8(R+4616))));
}
B764763:{NFSU2_TR(0x764763);
__builtin_memmove((R+4864),(R+4608),8);
}
B764767:{NFSU2_TR(0x764767);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x2cull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x2cull))));
}
B76476c:{NFSU2_TR(0x76476c);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764771:{NFSU2_TR(0x764771);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4736))));
}
B764775:{NFSU2_TR(0x764775);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+4,u32(r2(U+36)));
}
B76477a:{NFSU2_TR(0x76477a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B76477f:{NFSU2_TR(0x76477f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B764782:{NFSU2_TR(0x764782);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1feull))));
}
B764787:{NFSU2_TR(0x764787);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(U+8))));
}
B764790:{NFSU2_TR(0x764790);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B764799:{NFSU2_TR(0x764799);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B76479b:{NFSU2_TR(0x76479b);
u8 U[40];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4720ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4992),(U+24),8);
__builtin_memmove((R+5000),(U+32),8);
}
B7647a4:{NFSU2_TR(0x7647a4);
w4(R+8,u32(0x7fefull));
}
B7647a9:{NFSU2_TR(0x7647a9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7647ab:{NFSU2_TR(0x7647ab);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B7647ae:{NFSU2_TR(0x7647ae);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B7647b0:{NFSU2_TR(0x7647b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x80000000ull))));
}
B7647b6:{NFSU2_TR(0x7647b6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L764a97;}}
}
B7647bc:L7647bc:{c.instructions+=2;NFSU2_TR(0x7647bc);
w4(R+4,u32(0x0ull));
}
B7647c1:{NFSU2_TR(0x7647c1);
w4(R+8,u32(0x3fe7full));
}
B7647c6:L7647c6:{c.instructions+=58;NFSU2_TR(0x7647c6);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B7647ca:{NFSU2_TR(0x7647ca);
w8(R+4608,u64(u64(r8(R+4608))-u64(r8(R+4672))));
w8(R+4616,u64(u64(r8(R+4616))-u64(r8(R+4680))));
}
B7647ce:{NFSU2_TR(0x7647ce);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x8ull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x8ull))));
}
B7647d3:{NFSU2_TR(0x7647d3);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
w8(R+4608,b64(double(s64(s32(r4(U+0))))));
w8(R+4616,b64(double(s64(s32(r4(U+4))))));
}
B7647d7:{NFSU2_TR(0x7647d7);
__builtin_memmove((R+4672),gp(0x7d7bf8),8);
}
B7647df:{NFSU2_TR(0x7647df);
__builtin_memmove((R+4800),(R+5056),8);
}
B7647e3:{NFSU2_TR(0x7647e3);
w8(R+5056,shr<u64>(r8(R+5056),u64(u32(0x26ull))));
w8(R+5064,shr<u64>(r8(R+5064),u64(u32(0x26ull))));
}
B7647e8:{NFSU2_TR(0x7647e8);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+5056),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+5064),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B7647ed:{NFSU2_TR(0x7647ed);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7ba0),16);
w8(R+4864,u64(u64(r8(R+4864))&u64(r8(U+0))));
w8(R+4872,u64(u64(r8(R+4872))&u64(r8(U+8))));
}
B7647f5:{NFSU2_TR(0x7647f5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B7647fa:{NFSU2_TR(0x7647fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7647fd:{NFSU2_TR(0x7647fd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1feull))));
}
B764802:{NFSU2_TR(0x764802);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4f30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(U+8))));
}
B76480b:{NFSU2_TR(0x76480b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4f30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(U+8))));
}
B764814:{NFSU2_TR(0x764814);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B764816:{NFSU2_TR(0x764816);
u8 U[28];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5340ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(U+8))));
w4(U+24,u32(u32(r4(U+4))+u32(u32(0x8ull))));
__builtin_memmove((U+16),gp(u32(r4(U+24))),8);
w8(R+5000,b64(f64(r8(R+5000))+f64(r8(U+16))));
}
B76481f:{NFSU2_TR(0x76481f);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>(gp(0x7d7bb0))));
}
B764827:{NFSU2_TR(0x764827);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(R+4608))));
}
B76482b:{NFSU2_TR(0x76482b);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4864))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4872))));
}
B76482f:{NFSU2_TR(0x76482f);
__builtin_memmove((R+4736),(R+4800),8);
}
B764833:{NFSU2_TR(0x764833);
w8(R+4800,shr<u64>(r8(R+4800),u64(u32(0x1full))));
w8(R+4808,shr<u64>(r8(R+4808),u64(u32(0x1full))));
}
B764838:{NFSU2_TR(0x764838);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4800),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4808),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B76483d:{NFSU2_TR(0x76483d);
__builtin_memmove((R+4608),gp(0x7d7bf8),8);
}
B764845:{NFSU2_TR(0x764845);
w8(R+4864,b64(f64(r8(R+4864))-f64(r8(R+4672))));
}
B764849:{NFSU2_TR(0x764849);
__builtin_memmove((R+5056),gp(0x7d7c00),8);
}
B764851:{NFSU2_TR(0x764851);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ffull))));
}
B764856:{NFSU2_TR(0x764856);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B764859:{NFSU2_TR(0x764859);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3feull))));
}
B76485e:{NFSU2_TR(0x76485e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5b50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(U+8))));
}
B764867:{NFSU2_TR(0x764867);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5b50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(U+8))));
}
B764870:{NFSU2_TR(0x764870);
u8 U[28];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7d6360ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(U+8))));
w4(U+24,u32(u32(r4(U+4))+u32(u32(0x8ull))));
__builtin_memmove((U+16),gp(u32(r4(U+24))),8);
w8(R+5000,b64(f64(r8(R+5000))+f64(r8(U+16))));
}
B764879:{NFSU2_TR(0x764879);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(R+4928))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(R+4936))));
}
B76487d:{NFSU2_TR(0x76487d);
w8(R+4928,b64(f64(r8(R+4928))-f64(r8(R+4608))));
}
B764881:{NFSU2_TR(0x764881);
w8(R+5056,b64(f64(r8(R+5056))+f64(r8(R+4736))));
}
B764885:{NFSU2_TR(0x764885);
__builtin_memmove((R+4800),(R+4608),8);
}
B764889:{NFSU2_TR(0x764889);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4672))));
}
B76488d:{NFSU2_TR(0x76488d);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+4928))));
}
B764891:{NFSU2_TR(0x764891);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4864))));
}
B764895:{NFSU2_TR(0x764895);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4608))));
}
B764899:{NFSU2_TR(0x764899);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4928))));
}
B76489d:{NFSU2_TR(0x76489d);
__builtin_memmove((R+4608),(R+4992),8);
}
B7648a1:{NFSU2_TR(0x7648a1);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4672))));
}
B7648a5:{NFSU2_TR(0x7648a5);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(R+5056))));
}
B7648a9:{NFSU2_TR(0x7648a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B7648af:{NFSU2_TR(0x7648af);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B7648b4:{NFSU2_TR(0x7648b4);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4800))));
}
B7648b8:{NFSU2_TR(0x7648b8);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4992))));
}
B7648bc:{NFSU2_TR(0x7648bc);
__builtin_memmove((R+4800),gp(0x7d7bf8),8);
}
B7648c4:{NFSU2_TR(0x7648c4);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4992),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+5000),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+8,u32(r2(U+36)));
}
B7648c9:{NFSU2_TR(0x7648c9);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4864))));
}
B7648cd:{NFSU2_TR(0x7648cd);
__builtin_memmove((R+4864),(R+4992),8);
}
B7648d1:{NFSU2_TR(0x7648d1);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+5056))));
}
B7648d5:{NFSU2_TR(0x7648d5);
w8(R+5056,b64(f64(r8(R+5056))-f64(r8(R+4736))));
}
B7648d9:{NFSU2_TR(0x7648d9);
w8(R+4992,b64(f64(r8(R+4992))-f64(r8(R+4736))));
}
B7648dd:{NFSU2_TR(0x7648dd);
__builtin_memmove((R+5064),(R+5056),8);
}
B7648e1:{NFSU2_TR(0x7648e1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B7648e6:{NFSU2_TR(0x7648e6);
w1(R+512,u8((r4(R+0))<(u32(0x7ff0ull))));
}
B7648eb:{NFSU2_TR(0x7648eb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L764e08;}}
}
B7648f1:L7648f1:{c.instructions+=9;NFSU2_TR(0x7648f1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ff0ull))));
}
B7648f7:{NFSU2_TR(0x7648f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ff0ull))));
}
B7648fc:{NFSU2_TR(0x7648fc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7648fe:{NFSU2_TR(0x7648fe);
w4(R+8,u32(0x40a0ull));
}
B764903:{NFSU2_TR(0x764903);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B764905:{NFSU2_TR(0x764905);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3c70ull))));
}
B76490a:{NFSU2_TR(0x76490a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B76490c:{NFSU2_TR(0x76490c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x80000000ull))));
}
B764912:{NFSU2_TR(0x764912);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x7651f1u,765);}
}
B764918:L764918:{c.instructions+=30;NFSU2_TR(0x764918);
w8(R+4864,b64(f64(r8(R+4864))-f64(r8(R+4992))));
}
B76491c:{NFSU2_TR(0x76491c);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4864))));
}
B764920:{NFSU2_TR(0x764920);
__builtin_memmove((R+4864),gp(0x7d7bf8),8);
}
B764928:{NFSU2_TR(0x764928);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4672))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4680))));
}
B76492c:{NFSU2_TR(0x76492c);
w8(R+4864,u64(u64(r8(R+4864))&u64(r8(R+4992))));
w8(R+4872,u64(u64(r8(R+4872))&u64(r8(R+5000))));
}
B764930:{NFSU2_TR(0x764930);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4736))));
}
B764934:{NFSU2_TR(0x764934);
w8(R+4736,u64(u64(r8(R+4736))^u64(r8(R+4736))));
w8(R+4744,u64(u64(r8(R+4744))^u64(r8(R+4744))));
}
B764938:{NFSU2_TR(0x764938);
w4(R+8,u32(0x4060ull));
}
B76493d:{NFSU2_TR(0x76493d);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+8)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+4736))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+8)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+4744))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4736))));
w8(R+4736,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4744))));
w8(R+4744,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764942:{NFSU2_TR(0x764942);
__builtin_memmove((R+4928),(R+4800),8);
}
B764946:{NFSU2_TR(0x764946);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4864))));
}
B76494a:{NFSU2_TR(0x76494a);
w8(R+4992,b64(f64(r8(R+4992))-f64(r8(R+4864))));
}
B76494e:{NFSU2_TR(0x76494e);
w8(R+4672,b64(f64(r8(R+4672))-f64(r8(R+4928))));
}
B764952:{NFSU2_TR(0x764952);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4736))));
}
B764956:{NFSU2_TR(0x764956);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(R+4992))));
}
B76495a:{NFSU2_TR(0x76495a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7370),16);
__builtin_memmove((R+4736),(U+0),8);
__builtin_memmove((R+4744),(U+8),8);
}
B764962:{NFSU2_TR(0x764962);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4672))));
}
B764966:{NFSU2_TR(0x764966);
u8 U[8];
wv<8>((U+0),float_op("ROUND",rv<8>((R+4800)),8,V(0x0ull),4,8));
wv<4>((R+0),float_op("TRUNC",rv<8>((U+0)),8,V(0x0ull),4,4));
}
B76496a:{NFSU2_TR(0x76496a);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4672))));
}
B76496e:{NFSU2_TR(0x76496e);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7380),16);
__builtin_memmove((R+4672),(U+0),8);
__builtin_memmove((R+4680),(U+8),8);
}
B764976:{NFSU2_TR(0x764976);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4864))));
}
B76497a:{NFSU2_TR(0x76497a);
u8 U[60];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B76497f:{NFSU2_TR(0x76497f);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4992))));
}
B764983:{NFSU2_TR(0x764983);
w4(R+8,u32(0x1ff7full));
}
B764988:{NFSU2_TR(0x764988);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B76498a:{NFSU2_TR(0x76498a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e1ffull))));
}
B76498f:{NFSU2_TR(0x76498f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B764991:{NFSU2_TR(0x764991);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1e1ffull))));
}
B764996:{NFSU2_TR(0x764996);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764999:{NFSU2_TR(0x764999);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L764f81;}}
}
B76499f:L76499f:{c.instructions+=57;NFSU2_TR(0x76499f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7649a1:{NFSU2_TR(0x7649a1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B7649a4:{NFSU2_TR(0x7649a4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff80ull))));
}
B7649a7:{NFSU2_TR(0x7649a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ff80ull))));
}
B7649ad:{NFSU2_TR(0x7649ad);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4608))));
}
B7649b1:{NFSU2_TR(0x7649b1);
__builtin_memmove((R+4608),(R+4800),8);
}
B7649b5:{NFSU2_TR(0x7649b5);
w8(R+4800,b64(f64(r8(R+4800))+f64(m8(0x7d7b90))));
}
B7649bd:{NFSU2_TR(0x7649bd);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
w8(R+4744,b64(f64(r8(R+4744))*f64(r8(R+5064))));
}
B7649c1:{NFSU2_TR(0x7649c1);
w8(R+4800,b64(f64(r8(R+4800))-f64(m8(0x7d7b90))));
}
B7649c9:{NFSU2_TR(0x7649c9);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+5056))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+5064))));
}
B7649cd:{NFSU2_TR(0x7649cd);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4800))));
}
B7649d1:{NFSU2_TR(0x7649d1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B7649d3:{NFSU2_TR(0x7649d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B7649d5:{NFSU2_TR(0x7649d5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B7649d7:{NFSU2_TR(0x7649d7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B7649d9:{NFSU2_TR(0x7649d9);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d7390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),8);
__builtin_memmove((R+4808),(U+28),8);
}
B7649e1:{NFSU2_TR(0x7649e1);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bd0),16);
__builtin_memmove((R+4992),(U+0),8);
__builtin_memmove((R+5000),(U+8),8);
}
B7649e9:{NFSU2_TR(0x7649e9);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+5056))));
w8(R+4680,b64(f64(r8(R+4680))*f64(r8(R+5064))));
}
B7649ed:{NFSU2_TR(0x7649ed);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
w8(R+4744,b64(f64(r8(R+4744))+f64(r8(R+4680))));
}
B7649f1:{NFSU2_TR(0x7649f1);
u8 U[60];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B7649f6:{NFSU2_TR(0x7649f6);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
}
B7649fa:{NFSU2_TR(0x7649fa);
w8(R+5056,u64(u64(r8(R+5056))^u64(r8(R+5056))));
w8(R+5064,u64(u64(r8(R+5064))^u64(r8(R+5064))));
}
B7649fe:{NFSU2_TR(0x7649fe);
w4(R+8,u32(0x3f80ull));
}
B764a03:{NFSU2_TR(0x764a03);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
}
B764a07:{NFSU2_TR(0x764a07);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+8)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+5056))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+8)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+5064))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5056))));
w8(R+5056,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5064))));
w8(R+5064,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764a0c:{NFSU2_TR(0x764a0c);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4864))));
}
B764a10:{NFSU2_TR(0x764a10);
__builtin_memmove((R+4864),gp(0x7d7bf0),8);
}
B764a18:{NFSU2_TR(0x764a18);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B764a1c:{NFSU2_TR(0x764a1c);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(U+4))));
}
B764a22:{NFSU2_TR(0x764a22);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B764a26:{NFSU2_TR(0x764a26);
w8(R+4672,shl<u64>(r8(R+4672),u64(u32(0x2dull))));
w8(R+4680,shl<u64>(r8(R+4680),u64(u32(0x2dull))));
}
B764a2b:{NFSU2_TR(0x764a2b);
u8 U[60];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B764a30:{NFSU2_TR(0x764a30);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7be0),16);
__builtin_memmove((R+5056),(U+0),8);
__builtin_memmove((R+5064),(U+8),8);
}
B764a38:{NFSU2_TR(0x764a38);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4736))));
}
B764a3c:{NFSU2_TR(0x764a3c);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4672))));
w8(R+4808,b64(f64(r8(R+4808))*f64(r8(R+4680))));
}
B764a40:{NFSU2_TR(0x764a40);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B764a44:{NFSU2_TR(0x764a44);
__builtin_memmove((R+4616),(R+4608),8);
}
B764a48:{NFSU2_TR(0x764a48);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4608))));
w8(R+5000,b64(f64(r8(R+5000))*f64(r8(R+4616))));
}
B764a4c:{NFSU2_TR(0x764a4c);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4608))));
}
B764a50:{NFSU2_TR(0x764a50);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
w8(R+4616,b64(f64(r8(R+4616))*f64(r8(R+4616))));
}
B764a54:{NFSU2_TR(0x764a54);
w8(R+5056,b64(f64(r8(R+5056))+f64(r8(R+4992))));
w8(R+5064,b64(f64(r8(R+5064))+f64(r8(R+5000))));
}
B764a58:{NFSU2_TR(0x764a58);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+4608))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+4616))));
}
B764a5c:{NFSU2_TR(0x764a5c);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4800))));
}
B764a60:{NFSU2_TR(0x764a60);
u8 U[60];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B764a65:{NFSU2_TR(0x764a65);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B764a69:{NFSU2_TR(0x764a69);
u8 U[60];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B764a6e:{NFSU2_TR(0x764a6e);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4800))));
}
B764a72:{NFSU2_TR(0x764a72);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4800))));
}
B764a76:{NFSU2_TR(0x764a76);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B764a7a:{NFSU2_TR(0x764a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B764a7d:{NFSU2_TR(0x764a7d);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4992))));
}
B764a81:{NFSU2_TR(0x764a81);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4864))));
}
B764a85:{NFSU2_TR(0x764a85);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4800))));
}
B764a89:{NFSU2_TR(0x764a89);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B764a8f:{NFSU2_TR(0x764a8f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764a93:{NFSU2_TR(0x764a93);
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
B764a96:{NFSU2_TR(0x764a96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764a97:L764a97:{c.instructions+=9;NFSU2_TR(0x764a97);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764a9d:{NFSU2_TR(0x764a9d);
__builtin_memmove((R+4800),gp(0x7d7bc0),8);
}
B764aa5:{NFSU2_TR(0x764aa5);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4672)),V(0x0ull)));
}
B764aa9:{NFSU2_TR(0x764aa9);
__builtin_memmove((R+4736),(R+4672),8);
}
B764aad:{NFSU2_TR(0x764aad);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4800))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4808))));
}
B764ab1:{NFSU2_TR(0x764ab1);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x20ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x20ull))));
}
B764ab6:{NFSU2_TR(0x764ab6);
wv<4>((R+4),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4672)),V(0x0ull)));
}
B764aba:{NFSU2_TR(0x764aba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ff00000ull))));
}
B764ac0:{NFSU2_TR(0x764ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L764ba0;}}
}
B764ac6:L764ac6:{c.instructions+=3;NFSU2_TR(0x764ac6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B764ac8:{NFSU2_TR(0x764ac8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764acb:{NFSU2_TR(0x764acb);
if(r1(R+518)){{goto L764ee4;}}
}
B764ad1:L764ad1:{c.instructions+=2;NFSU2_TR(0x764ad1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B764ad4:{NFSU2_TR(0x764ad4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L764bdf;}}
}
B764ada:L764ada:{c.instructions+=17;NFSU2_TR(0x764ada);
w4(R+8,u32(0-u32(r4(R+8))));
}
B764adc:{NFSU2_TR(0x764adc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7fefull))));
}
B764ae2:{NFSU2_TR(0x764ae2);
w8(R+4800,shl<u64>(r8(R+4800),u64(u32(0x34ull))));
w8(R+4808,shl<u64>(r8(R+4808),u64(u32(0x34ull))));
}
B764ae7:{NFSU2_TR(0x764ae7);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B764aeb:{NFSU2_TR(0x764aeb);
w4(R+4,u32(0x3f3ull));
}
B764af0:{NFSU2_TR(0x764af0);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B764af4:{NFSU2_TR(0x764af4);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x14ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x14ull))));
}
B764af9:{NFSU2_TR(0x764af9);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764afd:{NFSU2_TR(0x764afd);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B764b01:{NFSU2_TR(0x764b01);
u8 U[33];
__builtin_memmove((U+9),(R+4800),16);
w1(U+25,u8(s16(r2(R+4672))<s16(r2(U+9))));
w2(U+0,u16(r1(U+25)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+25))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4672))));
w2(R+4672,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+26,u8(s16(r2(R+4674))<s16(r2(U+11))));
w2(U+0,u16(r1(U+26)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+26))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4674))));
w2(R+4674,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+27,u8(s16(r2(R+4676))<s16(r2(U+13))));
w2(U+0,u16(r1(U+27)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+27))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4676))));
w2(R+4676,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+28,u8(s16(r2(R+4678))<s16(r2(U+15))));
w2(U+0,u16(r1(U+28)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+28))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4678))));
w2(R+4678,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+29,u8(s16(r2(R+4680))<s16(r2(U+17))));
w2(U+0,u16(r1(U+29)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+17))));
w1(U+4,u8(!(r1(U+29))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4680))));
w2(R+4680,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+30,u8(s16(r2(R+4682))<s16(r2(U+19))));
w2(U+0,u16(r1(U+30)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+19))));
w1(U+4,u8(!(r1(U+30))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4682))));
w2(R+4682,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+31,u8(s16(r2(R+4684))<s16(r2(U+21))));
w2(U+0,u16(r1(U+31)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+21))));
w1(U+4,u8(!(r1(U+31))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4684))));
w2(R+4684,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+32,u8(s16(r2(R+4686))<s16(r2(U+23))));
w2(U+0,u16(r1(U+32)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+23))));
w1(U+4,u8(!(r1(U+32))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4686))));
w2(R+4686,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B764b05:{NFSU2_TR(0x764b05);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764b09:{NFSU2_TR(0x764b09);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764b0d:{NFSU2_TR(0x764b0d);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+0,u32(r2(U+0)));
}
B764b11:{NFSU2_TR(0x764b11);
__builtin_memmove((R+4),(R+8),4);
}
B764b13:{NFSU2_TR(0x764b13);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B764b19:{NFSU2_TR(0x764b19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ff0ull))));
}
B764b1f:{NFSU2_TR(0x764b1f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L764cc8;}}
}
B764b25:L764b25:{c.instructions+=3;NFSU2_TR(0x764b25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764b2a:{NFSU2_TR(0x764b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764b2f:{NFSU2_TR(0x764b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764dc1;}}
}
B764b35:L764b35:{c.instructions+=17;NFSU2_TR(0x764b35);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764b3b:{NFSU2_TR(0x764b3b);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764b41:{NFSU2_TR(0x764b41);
w4(R+4,u32(0x3f4ull));
}
B764b46:{NFSU2_TR(0x764b46);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B764b4a:{NFSU2_TR(0x764b4a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(U+0))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(U+8))));
}
B764b52:{NFSU2_TR(0x764b52);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x34ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x34ull))));
}
B764b57:{NFSU2_TR(0x764b57);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764b5b:{NFSU2_TR(0x764b5b);
__builtin_memmove((R+4800),gp(0x7d7c20),8);
}
B764b63:{NFSU2_TR(0x764b63);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764b67:{NFSU2_TR(0x764b67);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764b6b:{NFSU2_TR(0x764b6b);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+0,u32(r2(U+0)));
}
B764b6f:{NFSU2_TR(0x764b6f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764b74:{NFSU2_TR(0x764b74);
w4(R+4,u32(0x3ff01ull));
}
B764b79:{NFSU2_TR(0x764b79);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B764b7b:{NFSU2_TR(0x764b7b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
}
B764b81:{NFSU2_TR(0x764b81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B764b84:{NFSU2_TR(0x764b84);
if(r1(R+512)){{goto L764be4;}}
}
B764b86:L764b86:{c.instructions+=4;NFSU2_TR(0x764b86);
w4(R+8,u32(0xbfe7full));
}
B764b8b:{NFSU2_TR(0x764b8b);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764b93:{NFSU2_TR(0x764b93);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B764b9b:{NFSU2_TR(0x764b9b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7647c6u);}goto L7647c6;}
}
B764ba0:L764ba0:{c.instructions+=9;NFSU2_TR(0x764ba0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+5056),(U+4),8);
}
B764ba6:{NFSU2_TR(0x764ba6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764bac:{NFSU2_TR(0x764bac);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+5056)),V(0x0ull)));
}
B764bb0:{NFSU2_TR(0x764bb0);
w8(R+5056,shr<u64>(r8(R+5056),u64(u32(0x20ull))));
w8(R+5064,shr<u64>(r8(R+5064),u64(u32(0x20ull))));
}
B764bb5:{NFSU2_TR(0x764bb5);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+5056)),V(0x0ull)));
}
B764bb9:{NFSU2_TR(0x764bb9);
__builtin_memmove((R+4),(R+0),4);
}
B764bbb:{NFSU2_TR(0x764bbb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B764bc0:{NFSU2_TR(0x764bc0);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7ff00000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764bc5:{NFSU2_TR(0x764bc5);
if(r1(R+512)){{goto L764e5c;}}
}
B764bcb:L764bcb:{c.instructions+=1;NFSU2_TR(0x764bcb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L764daf;}}
}
B764bd1:L764bd1:{c.instructions+=2;NFSU2_TR(0x764bd1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764bd4:{NFSU2_TR(0x764bd4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L764daf;}}
}
B764bda:L764bda:{c.instructions+=1;NFSU2_TR(0x764bda);
{goto L764e5c;}
}
B764bdf:L764bdf:{c.instructions+=1;NFSU2_TR(0x764bdf);
w4(R+4,u32(0x0ull));
}
B764be4:L764be4:{c.instructions+=11;NFSU2_TR(0x764be4);
w8(R+4608,u64(u64(r8(R+4608))^u64(r8(R+4608))));
w8(R+4616,u64(u64(r8(R+4616))^u64(r8(R+4616))));
}
B764be8:{NFSU2_TR(0x764be8);
w4(R+0,u32(0x43f0ull));
}
B764bed:{NFSU2_TR(0x764bed);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+0)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+4608))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+0)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+4616))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4608))));
w8(R+4608,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4616))));
w8(R+4616,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764bf2:{NFSU2_TR(0x764bf2);
__builtin_memmove((R+5056),gp(0x7d7ba0),8);
}
B764bfa:{NFSU2_TR(0x764bfa);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B764c02:{NFSU2_TR(0x764c02);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4864))));
}
B764c06:{NFSU2_TR(0x764c06);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764c0a:{NFSU2_TR(0x764c0a);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764c0f:{NFSU2_TR(0x764c0f);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764c13:{NFSU2_TR(0x764c13);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764c16:{NFSU2_TR(0x764c16);
if(r1(R+518)){{goto L764c6a;}}
}
B764c18:L764c18:{c.instructions+=15;NFSU2_TR(0x764c18);
w8(R+5056,u64(u64(r8(R+5056))&u64(r8(R+4608))));
w8(R+5064,u64(u64(r8(R+5064))&u64(r8(R+4616))));
}
B764c1c:{NFSU2_TR(0x764c1c);
__builtin_memmove((R+4864),(R+4608),8);
}
B764c20:{NFSU2_TR(0x764c20);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B764c28:{NFSU2_TR(0x764c28);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x2cull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x2cull))));
}
B764c2d:{NFSU2_TR(0x764c2d);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764c32:{NFSU2_TR(0x764c32);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4736))));
}
B764c36:{NFSU2_TR(0x764c36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764c3b:{NFSU2_TR(0x764c3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B764c3e:{NFSU2_TR(0x764c3e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1feull))));
}
B764c43:{NFSU2_TR(0x764c43);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(U+8))));
}
B764c4c:{NFSU2_TR(0x764c4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B764c55:{NFSU2_TR(0x764c55);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B764c57:{NFSU2_TR(0x764c57);
u8 U[40];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4720ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4992),(U+24),8);
__builtin_memmove((R+5000),(U+32),8);
}
B764c60:{NFSU2_TR(0x764c60);
w4(R+8,u32(0x43e7full));
}
B764c65:{NFSU2_TR(0x764c65);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7647c6u);}goto L7647c6;}
}
B764c6a:L764c6a:{c.instructions+=4;NFSU2_TR(0x764c6a);
__builtin_memmove((R+8),(R+0),4);
}
B764c6c:{NFSU2_TR(0x764c6c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764c72:{NFSU2_TR(0x764c72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764c75:{NFSU2_TR(0x764c75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764c18u);}goto L764c18;}}
}
B764c77:L764c77:{c.instructions+=4;NFSU2_TR(0x764c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B764c7b:{NFSU2_TR(0x764c7b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000000ull))));
}
B764c81:{NFSU2_TR(0x764c81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764c84:{NFSU2_TR(0x764c84);
if(r1(R+518)){{goto L764cb7;}}
}
B764c86:L764c86:{c.instructions+=11;NFSU2_TR(0x764c86);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B764c89:{NFSU2_TR(0x764c89);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B764c8b:{NFSU2_TR(0x764c8b);
w4(R+8,u32(0x7ff00000ull));
}
B764c90:{NFSU2_TR(0x764c90);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B764c92:{NFSU2_TR(0x764c92);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B764c96:{NFSU2_TR(0x764c96);
w8(R+4608,shl<u64>(r8(R+4608),u64(u32(0x20ull))));
w8(R+4616,shl<u64>(r8(R+4616),u64(u32(0x20ull))));
}
B764c9b:{NFSU2_TR(0x764c9b);
__builtin_memmove((R+4672),gp(0x7d7bb0),8);
}
B764ca3:{NFSU2_TR(0x764ca3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764ca9:{NFSU2_TR(0x764ca9);
w8(R+4672,b64(f64(r8(R+4672))/f64(r8(R+4736))));
}
B764cad:{NFSU2_TR(0x764cad);
w4(R+8,u32(0x1bull));
}
B764cb2:{NFSU2_TR(0x764cb2);
{goto L764f51;}
}
B764cb7:L764cb7:{c.instructions+=4;NFSU2_TR(0x764cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B764cba:{NFSU2_TR(0x764cba);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B764cbc:{NFSU2_TR(0x764cbc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764cbf:{NFSU2_TR(0x764cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764d69;}}
}
B764cc5:L764cc5:{c.instructions+=2;NFSU2_TR(0x764cc5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B764cc7:{NFSU2_TR(0x764cc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764cc8:L764cc8:{c.instructions+=8;NFSU2_TR(0x764cc8);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764cd0:{NFSU2_TR(0x764cd0);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764cd4:{NFSU2_TR(0x764cd4);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4864))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4872))));
}
B764cd8:{NFSU2_TR(0x764cd8);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764cdc:{NFSU2_TR(0x764cdc);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+4,u32(r2(U+0)));
}
B764ce0:{NFSU2_TR(0x764ce0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B764ce6:{NFSU2_TR(0x764ce6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764cec:{NFSU2_TR(0x764cec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764daf;}}
}
B764cf2:L764cf2:{c.instructions+=4;NFSU2_TR(0x764cf2);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+4,u32(r2(U+36)));
}
B764cf7:{NFSU2_TR(0x764cf7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ull))));
}
B764cfd:{NFSU2_TR(0x764cfd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764d00:{NFSU2_TR(0x764d00);
if(r1(R+518)){{goto L764d93;}}
}
B764d06:L764d06:{c.instructions+=3;NFSU2_TR(0x764d06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764d0b:{NFSU2_TR(0x764d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764d10:{NFSU2_TR(0x764d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764d77;}}
}
B764d12:L764d12:{c.instructions+=14;NFSU2_TR(0x764d12);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d18:{NFSU2_TR(0x764d18);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764d1e:{NFSU2_TR(0x764d1e);
w4(R+4,u32(0x3f4ull));
}
B764d23:{NFSU2_TR(0x764d23);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B764d27:{NFSU2_TR(0x764d27);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(U+0))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(U+8))));
}
B764d2f:{NFSU2_TR(0x764d2f);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x34ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x34ull))));
}
B764d34:{NFSU2_TR(0x764d34);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764d38:{NFSU2_TR(0x764d38);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B764d3c:{NFSU2_TR(0x764d3c);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764d40:{NFSU2_TR(0x764d40);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764d44:{NFSU2_TR(0x764d44);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+0,u32(r2(U+0)));
}
B764d48:{NFSU2_TR(0x764d48);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764d4d:{NFSU2_TR(0x764d4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764d52:{NFSU2_TR(0x764d52);
if(r1(R+518)){{goto L764d77;}}
}
B764d54:L764d54:{c.instructions+=5;NFSU2_TR(0x764d54);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d5a:{NFSU2_TR(0x764d5a);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764d5f:{NFSU2_TR(0x764d5f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B764d64:{NFSU2_TR(0x764d64);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764d67:{NFSU2_TR(0x764d67);
if(r1(R+518)){{goto L764d70;}}
}
B764d69:L764d69:{c.instructions+=2;NFSU2_TR(0x764d69);
{u32 ea_=u32(u32(8223776u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764d6f:{NFSU2_TR(0x764d6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764d70:L764d70:{c.instructions+=2;NFSU2_TR(0x764d70);
{u32 ea_=u32(u32(8223768u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764d76:{NFSU2_TR(0x764d76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764d77:L764d77:{c.instructions+=5;NFSU2_TR(0x764d77);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d7d:{NFSU2_TR(0x764d7d);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764d82:{NFSU2_TR(0x764d82);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B764d87:{NFSU2_TR(0x764d87);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764d8a:{NFSU2_TR(0x764d8a);
if(r1(R+518)){{goto L764ece;}}
}
B764d90:L764d90:{c.instructions+=2;NFSU2_TR(0x764d90);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B764d92:{NFSU2_TR(0x764d92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764d93:L764d93:{c.instructions+=5;NFSU2_TR(0x764d93);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d99:{NFSU2_TR(0x764d99);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764d9e:{NFSU2_TR(0x764d9e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B764da3:{NFSU2_TR(0x764da3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764da6:{NFSU2_TR(0x764da6);
if(r1(R+518)){{goto L764ece;}}
}
B764dac:L764dac:{c.instructions+=2;NFSU2_TR(0x764dac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B764dae:{NFSU2_TR(0x764dae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764daf:L764daf:{c.instructions+=4;NFSU2_TR(0x764daf);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4864))));
}
B764db3:{NFSU2_TR(0x764db3);
__builtin_memmove((R+4608),(R+4864),8);
}
B764db7:{NFSU2_TR(0x764db7);
w4(R+8,u32(0x3eeull));
}
B764dbc:{NFSU2_TR(0x764dbc);
{goto L764f51;}
}
B764dc1:L764dc1:{c.instructions+=9;NFSU2_TR(0x764dc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764dc7:{NFSU2_TR(0x764dc7);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4736)),V(0x0ull)));
}
B764dcb:{NFSU2_TR(0x764dcb);
w8(R+4736,shr<u64>(r8(R+4736),u64(u32(0x20ull))));
w8(R+4744,shr<u64>(r8(R+4744),u64(u32(0x20ull))));
}
B764dd0:{NFSU2_TR(0x764dd0);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4736)),V(0x0ull)));
}
B764dd4:{NFSU2_TR(0x764dd4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764dda:{NFSU2_TR(0x764dda);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B764ddc:{NFSU2_TR(0x764ddc);
w4(R+4,u32(0x0ull));
}
B764de1:{NFSU2_TR(0x764de1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764de4:{NFSU2_TR(0x764de4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x764c6au);}goto L764c6a;}}
}
B764dea:L764dea:{c.instructions+=5;NFSU2_TR(0x764dea);
__builtin_memmove((R+4672),gp(0x7d7c08),8);
}
B764df2:{NFSU2_TR(0x764df2);
__builtin_memmove((R+4608),gp(0x7d7c30),8);
}
B764dfa:{NFSU2_TR(0x764dfa);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+4672))));
}
B764dfe:{NFSU2_TR(0x764dfe);
w4(R+8,u32(0x1cull));
}
B764e03:{NFSU2_TR(0x764e03);
{goto L764f51;}
}
B764e08:L764e08:{c.instructions+=5;NFSU2_TR(0x764e08);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764e0e:{NFSU2_TR(0x764e0e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764e14:{NFSU2_TR(0x764e14);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764e18:{NFSU2_TR(0x764e18);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764e1b:{NFSU2_TR(0x764e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764e5c;}}
}
B764e1d:L764e1d:{c.instructions+=4;NFSU2_TR(0x764e1d);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764e22:{NFSU2_TR(0x764e22);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764e26:{NFSU2_TR(0x764e26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ff00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764e2c:{NFSU2_TR(0x764e2c);
if(r1(R+518)){{goto L764f3a;}}
}
B764e32:L764e32:{c.instructions+=2;NFSU2_TR(0x764e32);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbff00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764e38:{NFSU2_TR(0x764e38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764e5c;}}
}
B764e3a:L764e3a:{c.instructions+=7;NFSU2_TR(0x764e3a);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764e42:{NFSU2_TR(0x764e42);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764e46:{NFSU2_TR(0x764e46);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4736))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4744))));
}
B764e4a:{NFSU2_TR(0x764e4a);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764e4e:{NFSU2_TR(0x764e4e);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+0,u32(r2(U+0)));
}
B764e52:{NFSU2_TR(0x764e52);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764e57:{NFSU2_TR(0x764e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764ed5;}}
}
B764e59:L764e59:{c.instructions+=2;NFSU2_TR(0x764e59);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B764e5b:{NFSU2_TR(0x764e5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764e5c:L764e5c:{c.instructions+=8;NFSU2_TR(0x764e5c);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764e64:{NFSU2_TR(0x764e64);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764e68:{NFSU2_TR(0x764e68);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4736))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4744))));
}
B764e6c:{NFSU2_TR(0x764e6c);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764e70:{NFSU2_TR(0x764e70);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+0,u32(r2(U+0)));
}
B764e74:{NFSU2_TR(0x764e74);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B764e79:{NFSU2_TR(0x764e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764e7e:{NFSU2_TR(0x764e7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L764ed5;}}
}
B764e80:L764e80:{c.instructions+=7;NFSU2_TR(0x764e80);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4736),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4744),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764e85:{NFSU2_TR(0x764e85);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764e8b:{NFSU2_TR(0x764e8b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B764e90:{NFSU2_TR(0x764e90);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0xbff00000ull))));
}
B764e96:{NFSU2_TR(0x764e96);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B764e98:{NFSU2_TR(0x764e98);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764e9b:{NFSU2_TR(0x764e9b);
if(r1(R+518)){{goto L764f3a;}}
}
B764ea1:L764ea1:{c.instructions+=2;NFSU2_TR(0x764ea1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764ea4:{NFSU2_TR(0x764ea4);
if(r1(R+518)){{goto L764eba;}}
}
B764ea6:L764ea6:{c.instructions+=4;NFSU2_TR(0x764ea6);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764eab:{NFSU2_TR(0x764eab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B764eb0:{NFSU2_TR(0x764eb0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3ff0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ff0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3ff0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764eb5:{NFSU2_TR(0x764eb5);
if(r1(R+512)){{goto L764ece;}}
}
B764eb7:L764eb7:{c.instructions+=2;NFSU2_TR(0x764eb7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B764eb9:{NFSU2_TR(0x764eb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764eba:L764eba:{c.instructions+=4;NFSU2_TR(0x764eba);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B764ebf:{NFSU2_TR(0x764ebf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B764ec4:{NFSU2_TR(0x764ec4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3ff0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ff0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3ff0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B764ec9:{NFSU2_TR(0x764ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L764ece;}}
}
B764ecb:L764ecb:{c.instructions+=2;NFSU2_TR(0x764ecb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B764ecd:{NFSU2_TR(0x764ecd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764ece:L764ece:{c.instructions+=2;NFSU2_TR(0x764ece);
{u32 ea_=u32(u32(8223760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764ed4:{NFSU2_TR(0x764ed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764ed5:L764ed5:{c.instructions+=4;NFSU2_TR(0x764ed5);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4736))));
}
B764ed9:{NFSU2_TR(0x764ed9);
__builtin_memmove((R+4608),(R+4736),8);
}
B764edd:{NFSU2_TR(0x764edd);
w4(R+8,u32(0x3eeull));
}
B764ee2:{NFSU2_TR(0x764ee2);
{goto L764f51;}
}
B764ee4:L764ee4:{c.instructions+=10;NFSU2_TR(0x764ee4);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764ee8:{NFSU2_TR(0x764ee8);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764eed:{NFSU2_TR(0x764eed);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764ef1:{NFSU2_TR(0x764ef1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764ef7:{NFSU2_TR(0x764ef7);
__builtin_memmove((R+4),(R+0),4);
}
B764ef9:{NFSU2_TR(0x764ef9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B764efb:{NFSU2_TR(0x764efb);
__builtin_memmove((R+4608),gp(0x7d7bb0),8);
}
B764f03:{NFSU2_TR(0x764f03);
w4(R+8,u32(0x1aull));
}
B764f08:{NFSU2_TR(0x764f08);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764f0b:{NFSU2_TR(0x764f0b);
if(r1(R+518)){{goto L764f51;}}
}
B764f0d:L764f0d:{c.instructions+=5;NFSU2_TR(0x764f0d);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764f11:{NFSU2_TR(0x764f11);
w4(R+8,u32(0x1dull));
}
B764f16:{NFSU2_TR(0x764f16);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B764f1b:{NFSU2_TR(0x764f1b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7ff00000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764f20:{NFSU2_TR(0x764f20);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L764f51;}}
}
B764f22:L764f22:{c.instructions+=1;NFSU2_TR(0x764f22);
if(r1(R+512)){{goto L764f29;}}
}
B764f24:L764f24:{c.instructions+=2;NFSU2_TR(0x764f24);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764f27:{NFSU2_TR(0x764f27);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L764f51;}}
}
B764f29:L764f29:{c.instructions+=5;NFSU2_TR(0x764f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B764f2c:{NFSU2_TR(0x764f2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B764f32:{NFSU2_TR(0x764f32);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764f36:{NFSU2_TR(0x764f36);
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
B764f39:{NFSU2_TR(0x764f39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764f3a:L764f3a:{c.instructions+=4;NFSU2_TR(0x764f3a);
__builtin_memmove((R+4672),gp(0x7d7c30),8);
}
B764f42:{NFSU2_TR(0x764f42);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B764f48:{NFSU2_TR(0x764f48);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4672))));
}
B764f4c:{NFSU2_TR(0x764f4c);
w4(R+8,u32(0x1cull));
}
B764f51:L764f51:{c.instructions+=11;NFSU2_TR(0x764f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B764f54:{NFSU2_TR(0x764f54);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B764f5a:{NFSU2_TR(0x764f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f5e:{NFSU2_TR(0x764f5e);
__builtin_memmove((R+8),(R+16),4);
}
B764f60:{NFSU2_TR(0x764f60);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B764f63:{NFSU2_TR(0x764f63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f67:{NFSU2_TR(0x764f67);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B764f6a:{NFSU2_TR(0x764f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f6e:{NFSU2_TR(0x764f6e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B764f71:{NFSU2_TR(0x764f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B764f74:{NFSU2_TR(0x764f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x764f79ull));
TAIL_STATIC(0x7694d0u,769);
}
B764f79:L764f79:{c.instructions+=3;NFSU2_TR(0x764f79);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B764f7d:{NFSU2_TR(0x764f7d);
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
B764f80:{NFSU2_TR(0x764f80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B764f81:L764f81:{c.instructions+=2;NFSU2_TR(0x764f81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B764f84:{NFSU2_TR(0x764f84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L764fae;}}
}
B764f86:L764f86:{c.instructions+=2;NFSU2_TR(0x764f86);
w1(R+512,u8((r4(R+0))<(u32(0x40000ull))));
}
B764f8b:{NFSU2_TR(0x764f8b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x7651cdu,765);}
}
B764f91:L764f91:{c.instructions+=9;NFSU2_TR(0x764f91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764f92:{NFSU2_TR(0x764f92);
__builtin_memmove((R+8),(R+0),4);
}
B764f94:{NFSU2_TR(0x764f94);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B764f97:{NFSU2_TR(0x764f97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ff00ull))));
}
B764f9d:{NFSU2_TR(0x764f9d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x80ull))));
}
B764fa3:{NFSU2_TR(0x764fa3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff80ull))));
}
B764fa6:{NFSU2_TR(0x764fa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764fa7:{NFSU2_TR(0x764fa7);
w4(R+28,u32(0x3ff0ull));
}
B764fac:{NFSU2_TR(0x764fac);
{goto L764fd4;}
}
B764fae:L764fae:{c.instructions+=2;NFSU2_TR(0x764fae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfffc0200ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffc0200ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B764fb3:{NFSU2_TR(0x764fb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x7651aau,765);}
}
B764fb9:L764fb9:{c.instructions+=8;NFSU2_TR(0x764fb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764fba:{NFSU2_TR(0x764fba);
__builtin_memmove((R+8),(R+0),4);
}
B764fbc:{NFSU2_TR(0x764fbc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B764fbf:{NFSU2_TR(0x764fbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B764fc5:{NFSU2_TR(0x764fc5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff80ull))));
}
B764fc8:{NFSU2_TR(0x764fc8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3fe80ull))));
}
B764fce:{NFSU2_TR(0x764fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B764fcf:{NFSU2_TR(0x764fcf);
w4(R+28,u32(0x0ull));
}
B764fd4:L764fd4:{c.instructions+=9;NFSU2_TR(0x764fd4);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4608))));
}
B764fd8:{NFSU2_TR(0x764fd8);
__builtin_memmove((R+4608),(R+4800),8);
}
B764fdc:{NFSU2_TR(0x764fdc);
w8(R+4800,b64(f64(r8(R+4800))+f64(m8(0x7d7b90))));
}
B764fe4:{NFSU2_TR(0x764fe4);
__builtin_memmove((R+24),(R+8),4);
}
B764fe6:{NFSU2_TR(0x764fe6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ff80ull))));
}
B764fec:{NFSU2_TR(0x764fec);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
w8(R+4744,b64(f64(r8(R+4744))*f64(r8(R+5064))));
}
B764ff0:{NFSU2_TR(0x764ff0);
w8(R+4800,b64(f64(r8(R+4800))-f64(m8(0x7d7b90))));
}
B764ff8:{NFSU2_TR(0x764ff8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+5056))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+5064))));
}
B764ffc:{NFSU2_TR(0x764ffc);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4800))));
TAIL_STATIC(0x765000u,765);
}
XIT:NFSU2_TR_EXIT(0x764,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
