#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_416(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x415,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x415,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_415(u8* __restrict R,Cpu& c);
u32 page_415(Cpu& c){return body_415(c.regs.data(),c);}
__attribute__((noinline)) u32 body_415(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x415001:goto L415001;
case 0x415005:c.instructions+=8;goto B415005;
case 0x415008:c.instructions+=7;goto B415008;
case 0x415009:c.instructions+=6;goto B415009;
case 0x41500a:c.instructions+=5;goto B41500a;
case 0x41500b:c.instructions+=4;goto B41500b;
case 0x41500f:c.instructions+=3;goto B41500f;
case 0x415010:c.instructions+=2;goto B415010;
case 0x415014:c.instructions+=1;goto B415014;
case 0x415019:goto L415019;
case 0x41501d:c.instructions+=9;goto B41501d;
case 0x415020:c.instructions+=8;goto B415020;
case 0x415021:c.instructions+=7;goto B415021;
case 0x415023:c.instructions+=6;goto B415023;
case 0x415025:c.instructions+=5;goto B415025;
case 0x415029:c.instructions+=4;goto B415029;
case 0x41502a:c.instructions+=3;goto B41502a;
case 0x41502e:c.instructions+=2;goto B41502e;
case 0x41502f:c.instructions+=1;goto B41502f;
case 0x415034:goto L415034;
case 0x415036:c.instructions+=6;goto B415036;
case 0x415038:c.instructions+=5;goto B415038;
case 0x41503a:c.instructions+=4;goto B41503a;
case 0x41503e:c.instructions+=3;goto B41503e;
case 0x41503f:c.instructions+=2;goto B41503f;
case 0x415046:c.instructions+=1;goto B415046;
case 0x41504b:goto L41504b;
case 0x41504f:c.instructions+=7;goto B41504f;
case 0x415051:c.instructions+=6;goto B415051;
case 0x415053:c.instructions+=5;goto B415053;
case 0x415055:c.instructions+=4;goto B415055;
case 0x415059:c.instructions+=3;goto B415059;
case 0x41505a:c.instructions+=2;goto B41505a;
case 0x415061:c.instructions+=1;goto B415061;
case 0x415066:goto L415066;
case 0x41506a:c.instructions+=7;goto B41506a;
case 0x41506c:c.instructions+=6;goto B41506c;
case 0x41506e:c.instructions+=5;goto B41506e;
case 0x415070:c.instructions+=4;goto B415070;
case 0x415074:c.instructions+=3;goto B415074;
case 0x415075:c.instructions+=2;goto B415075;
case 0x41507c:c.instructions+=1;goto B41507c;
case 0x415081:goto L415081;
case 0x415085:c.instructions+=9;goto B415085;
case 0x415089:c.instructions+=8;goto B415089;
case 0x41508d:c.instructions+=7;goto B41508d;
case 0x41508e:c.instructions+=6;goto B41508e;
case 0x415092:c.instructions+=5;goto B415092;
case 0x415093:c.instructions+=4;goto B415093;
case 0x415094:c.instructions+=3;goto B415094;
case 0x415096:c.instructions+=2;goto B415096;
case 0x415098:c.instructions+=1;goto B415098;
case 0x41509d:goto L41509d;
case 0x4150a1:c.instructions+=7;goto B4150a1;
case 0x4150a2:c.instructions+=6;goto B4150a2;
case 0x4150a6:c.instructions+=5;goto B4150a6;
case 0x4150a7:c.instructions+=4;goto B4150a7;
case 0x4150a8:c.instructions+=3;goto B4150a8;
case 0x4150aa:c.instructions+=2;goto B4150aa;
case 0x4150ac:c.instructions+=1;goto B4150ac;
case 0x4150b1:goto L4150b1;
case 0x4150b5:c.instructions+=7;goto B4150b5;
case 0x4150b6:c.instructions+=6;goto B4150b6;
case 0x4150ba:c.instructions+=5;goto B4150ba;
case 0x4150bb:c.instructions+=4;goto B4150bb;
case 0x4150bc:c.instructions+=3;goto B4150bc;
case 0x4150be:c.instructions+=2;goto B4150be;
case 0x4150c0:c.instructions+=1;goto B4150c0;
case 0x4150c5:goto L4150c5;
case 0x4150c8:c.instructions+=10;goto B4150c8;
case 0x4150ca:c.instructions+=9;goto B4150ca;
case 0x4150cc:c.instructions+=8;goto B4150cc;
case 0x4150d0:c.instructions+=7;goto B4150d0;
case 0x4150d1:c.instructions+=6;goto B4150d1;
case 0x4150d4:c.instructions+=5;goto B4150d4;
case 0x4150d7:c.instructions+=4;goto B4150d7;
case 0x4150da:c.instructions+=3;goto B4150da;
case 0x4150de:c.instructions+=2;goto B4150de;
case 0x4150e2:c.instructions+=1;goto B4150e2;
case 0x4150e8:goto L4150e8;
case 0x4150ec:c.instructions+=2;goto B4150ec;
case 0x4150f7:c.instructions+=1;goto B4150f7;
case 0x4150fc:goto L4150fc;
case 0x415103:c.instructions+=7;goto B415103;
case 0x415104:c.instructions+=6;goto B415104;
case 0x415105:c.instructions+=5;goto B415105;
case 0x41510c:c.instructions+=4;goto B41510c;
case 0x41510d:c.instructions+=3;goto B41510d;
case 0x41510f:c.instructions+=2;goto B41510f;
case 0x415110:c.instructions+=1;goto B415110;
case 0x415120:goto L415120;
case 0x415130:goto L415130;
case 0x415136:c.instructions+=12;goto B415136;
case 0x41513b:c.instructions+=11;goto B41513b;
case 0x41513c:c.instructions+=10;goto B41513c;
case 0x415143:c.instructions+=9;goto B415143;
case 0x415144:c.instructions+=8;goto B415144;
case 0x415146:c.instructions+=7;goto B415146;
case 0x415148:c.instructions+=6;goto B415148;
case 0x41514f:c.instructions+=5;goto B41514f;
case 0x415156:c.instructions+=4;goto B415156;
case 0x41515e:c.instructions+=3;goto B41515e;
case 0x415162:c.instructions+=2;goto B415162;
case 0x415166:c.instructions+=1;goto B415166;
case 0x415168:goto L415168;
case 0x415169:c.instructions+=4;goto B415169;
case 0x41516b:c.instructions+=3;goto B41516b;
case 0x41516c:c.instructions+=2;goto B41516c;
case 0x415172:c.instructions+=1;goto B415172;
case 0x415173:goto L415173;
case 0x41517a:c.instructions+=7;goto B41517a;
case 0x41517c:c.instructions+=6;goto B41517c;
case 0x415183:c.instructions+=5;goto B415183;
case 0x415187:c.instructions+=4;goto B415187;
case 0x41518b:c.instructions+=3;goto B41518b;
case 0x41518f:c.instructions+=2;goto B41518f;
case 0x415193:c.instructions+=1;goto B415193;
case 0x415195:goto L415195;
case 0x415199:c.instructions+=6;goto B415199;
case 0x41519c:c.instructions+=5;goto B41519c;
case 0x4151a0:c.instructions+=4;goto B4151a0;
case 0x4151a4:c.instructions+=3;goto B4151a4;
case 0x4151aa:c.instructions+=2;goto B4151aa;
case 0x4151b1:c.instructions+=1;goto B4151b1;
case 0x4151b5:goto L4151b5;
case 0x4151ba:c.instructions+=6;goto B4151ba;
case 0x4151bd:c.instructions+=5;goto B4151bd;
case 0x4151c0:c.instructions+=4;goto B4151c0;
case 0x4151c1:c.instructions+=3;goto B4151c1;
case 0x4151c2:c.instructions+=2;goto B4151c2;
case 0x4151ca:c.instructions+=1;goto B4151ca;
case 0x4151d0:goto L4151d0;
case 0x4151d4:goto L4151d4;
case 0x4151d8:c.instructions+=11;goto B4151d8;
case 0x4151db:c.instructions+=10;goto B4151db;
case 0x4151df:c.instructions+=9;goto B4151df;
case 0x4151e1:c.instructions+=8;goto B4151e1;
case 0x4151e5:c.instructions+=7;goto B4151e5;
case 0x4151eb:c.instructions+=6;goto B4151eb;
case 0x4151ef:c.instructions+=5;goto B4151ef;
case 0x4151f3:c.instructions+=4;goto B4151f3;
case 0x4151f9:c.instructions+=3;goto B4151f9;
case 0x4151fb:c.instructions+=2;goto B4151fb;
case 0x4151fe:c.instructions+=1;goto B4151fe;
case 0x415200:goto L415200;
case 0x415205:goto L415205;
case 0x41520c:c.instructions+=10;goto B41520c;
case 0x415210:c.instructions+=9;goto B415210;
case 0x415212:c.instructions+=8;goto B415212;
case 0x415216:c.instructions+=7;goto B415216;
case 0x415219:c.instructions+=6;goto B415219;
case 0x415220:c.instructions+=5;goto B415220;
case 0x415221:c.instructions+=4;goto B415221;
case 0x415223:c.instructions+=3;goto B415223;
case 0x415226:c.instructions+=2;goto B415226;
case 0x41522a:c.instructions+=1;goto B41522a;
case 0x415230:goto L415230;
case 0x415233:c.instructions+=2;goto B415233;
case 0x41523a:c.instructions+=1;goto B41523a;
case 0x41523f:goto L41523f;
case 0x415241:c.instructions+=3;goto B415241;
case 0x415246:c.instructions+=2;goto B415246;
case 0x41524a:c.instructions+=1;goto B41524a;
case 0x41524f:goto L41524f;
case 0x415251:c.instructions+=1;goto B415251;
case 0x415257:goto L415257;
case 0x41525b:c.instructions+=3;goto B41525b;
case 0x41525c:c.instructions+=2;goto B41525c;
case 0x41525e:c.instructions+=1;goto B41525e;
case 0x415263:goto L415263;
case 0x415265:c.instructions+=7;goto B415265;
case 0x415268:c.instructions+=6;goto B415268;
case 0x41526c:c.instructions+=5;goto B41526c;
case 0x41526e:c.instructions+=4;goto B41526e;
case 0x415271:c.instructions+=3;goto B415271;
case 0x415274:c.instructions+=2;goto B415274;
case 0x415276:c.instructions+=1;goto B415276;
case 0x41527c:goto L41527c;
case 0x41527e:c.instructions+=6;goto B41527e;
case 0x415280:c.instructions+=5;goto B415280;
case 0x415282:c.instructions+=4;goto B415282;
case 0x415284:c.instructions+=3;goto B415284;
case 0x415288:c.instructions+=2;goto B415288;
case 0x41528c:c.instructions+=1;goto B41528c;
case 0x415292:goto L415292;
case 0x415295:c.instructions+=8;goto B415295;
case 0x41529c:c.instructions+=7;goto B41529c;
case 0x41529e:c.instructions+=6;goto B41529e;
case 0x4152a1:c.instructions+=5;goto B4152a1;
case 0x4152a4:c.instructions+=4;goto B4152a4;
case 0x4152a7:c.instructions+=3;goto B4152a7;
case 0x4152a9:c.instructions+=2;goto B4152a9;
case 0x4152ab:c.instructions+=1;goto B4152ab;
case 0x4152b1:goto L4152b1;
case 0x4152b3:c.instructions+=1;goto B4152b3;
case 0x4152b5:goto L4152b5;
case 0x4152b9:c.instructions+=2;goto B4152b9;
case 0x4152bb:c.instructions+=1;goto B4152bb;
case 0x4152c1:goto L4152c1;
case 0x4152c3:goto L4152c3;
case 0x4152c9:goto L4152c9;
case 0x4152cb:c.instructions+=1;goto B4152cb;
case 0x4152d0:goto L4152d0;
case 0x4152d4:c.instructions+=39;goto B4152d4;
case 0x4152d8:c.instructions+=38;goto B4152d8;
case 0x4152dc:c.instructions+=37;goto B4152dc;
case 0x4152e0:c.instructions+=36;goto B4152e0;
case 0x4152e4:c.instructions+=35;goto B4152e4;
case 0x4152e8:c.instructions+=34;goto B4152e8;
case 0x4152eb:c.instructions+=33;goto B4152eb;
case 0x4152f1:c.instructions+=32;goto B4152f1;
case 0x4152f5:c.instructions+=31;goto B4152f5;
case 0x4152f9:c.instructions+=30;goto B4152f9;
case 0x4152fd:c.instructions+=29;goto B4152fd;
case 0x415301:c.instructions+=28;goto B415301;
case 0x415307:c.instructions+=27;goto B415307;
case 0x415308:c.instructions+=26;goto B415308;
case 0x41530c:c.instructions+=25;goto B41530c;
case 0x41530d:c.instructions+=24;goto B41530d;
case 0x415311:c.instructions+=23;goto B415311;
case 0x415317:c.instructions+=22;goto B415317;
case 0x41531b:c.instructions+=21;goto B41531b;
case 0x41531f:c.instructions+=20;goto B41531f;
case 0x415322:c.instructions+=19;goto B415322;
case 0x415325:c.instructions+=18;goto B415325;
case 0x415327:c.instructions+=17;goto B415327;
case 0x415329:c.instructions+=16;goto B415329;
case 0x41532c:c.instructions+=15;goto B41532c;
case 0x41532e:c.instructions+=14;goto B41532e;
case 0x415331:c.instructions+=13;goto B415331;
case 0x415333:c.instructions+=12;goto B415333;
case 0x415335:c.instructions+=11;goto B415335;
case 0x415339:c.instructions+=10;goto B415339;
case 0x41533b:c.instructions+=9;goto B41533b;
case 0x41533f:c.instructions+=8;goto B41533f;
case 0x415341:c.instructions+=7;goto B415341;
case 0x415343:c.instructions+=6;goto B415343;
case 0x415347:c.instructions+=5;goto B415347;
case 0x415349:c.instructions+=4;goto B415349;
case 0x41534d:c.instructions+=3;goto B41534d;
case 0x41534f:c.instructions+=2;goto B41534f;
case 0x415351:c.instructions+=1;goto B415351;
case 0x415356:goto L415356;
case 0x415358:c.instructions+=1;goto B415358;
case 0x41535d:goto L41535d;
case 0x41535f:c.instructions+=2;goto B41535f;
case 0x415363:c.instructions+=1;goto B415363;
case 0x415365:goto L415365;
case 0x415369:c.instructions+=3;goto B415369;
case 0x41536a:c.instructions+=2;goto B41536a;
case 0x41536e:c.instructions+=1;goto B41536e;
case 0x415373:goto L415373;
case 0x415377:c.instructions+=2;goto B415377;
case 0x415379:c.instructions+=1;goto B415379;
case 0x41537b:goto L41537b;
case 0x41537f:c.instructions+=1;goto B41537f;
case 0x415381:goto L415381;
case 0x415385:c.instructions+=3;goto B415385;
case 0x415386:c.instructions+=2;goto B415386;
case 0x41538a:c.instructions+=1;goto B41538a;
case 0x41538f:goto L41538f;
case 0x415391:goto L415391;
case 0x415393:c.instructions+=1;goto B415393;
case 0x415399:goto L415399;
case 0x41539b:c.instructions+=4;goto B41539b;
case 0x41539e:c.instructions+=3;goto B41539e;
case 0x4153a1:c.instructions+=2;goto B4153a1;
case 0x4153a4:c.instructions+=1;goto B4153a4;
case 0x4153a6:goto L4153a6;
case 0x4153a8:c.instructions+=1;goto B4153a8;
case 0x4153aa:goto L4153aa;
case 0x4153ac:c.instructions+=1;goto B4153ac;
case 0x4153b2:goto L4153b2;
case 0x4153b5:c.instructions+=3;goto B4153b5;
case 0x4153b8:c.instructions+=2;goto B4153b8;
case 0x4153bb:c.instructions+=1;goto B4153bb;
case 0x4153c0:goto L4153c0;
case 0x4153c4:c.instructions+=2;goto B4153c4;
case 0x4153c5:c.instructions+=1;goto B4153c5;
case 0x4153c7:goto L4153c7;
case 0x4153cd:c.instructions+=2;goto B4153cd;
case 0x4153d2:c.instructions+=1;goto B4153d2;
case 0x4153d7:goto L4153d7;
case 0x4153dd:c.instructions+=3;goto B4153dd;
case 0x4153df:c.instructions+=2;goto B4153df;
case 0x4153e2:c.instructions+=1;goto B4153e2;
case 0x4153e4:goto L4153e4;
case 0x4153e8:c.instructions+=3;goto B4153e8;
case 0x4153e9:c.instructions+=2;goto B4153e9;
case 0x4153ed:c.instructions+=1;goto B4153ed;
case 0x4153f2:goto L4153f2;
case 0x4153f4:goto L4153f4;
case 0x4153f8:c.instructions+=1;goto B4153f8;
case 0x4153f9:goto L4153f9;
case 0x4153fd:c.instructions+=1;goto B4153fd;
case 0x415402:goto L415402;
case 0x415406:c.instructions+=1;goto B415406;
case 0x41540b:goto L41540b;
case 0x41540f:c.instructions+=4;goto B41540f;
case 0x415410:c.instructions+=3;goto B415410;
case 0x415412:c.instructions+=2;goto B415412;
case 0x415416:c.instructions+=1;goto B415416;
case 0x41541b:goto L41541b;
case 0x41541d:c.instructions+=1;goto B41541d;
case 0x415423:goto L415423;
case 0x415428:goto L415428;
case 0x415430:c.instructions+=1;goto B415430;
case 0x415435:goto L415435;
case 0x415437:c.instructions+=1;goto B415437;
case 0x41543c:goto L41543c;
case 0x415440:c.instructions+=35;goto B415440;
case 0x415444:c.instructions+=34;goto B415444;
case 0x415447:c.instructions+=33;goto B415447;
case 0x41544b:c.instructions+=32;goto B41544b;
case 0x41544f:c.instructions+=31;goto B41544f;
case 0x415453:c.instructions+=30;goto B415453;
case 0x415457:c.instructions+=29;goto B415457;
case 0x41545d:c.instructions+=28;goto B41545d;
case 0x415460:c.instructions+=27;goto B415460;
case 0x415464:c.instructions+=26;goto B415464;
case 0x415468:c.instructions+=25;goto B415468;
case 0x41546c:c.instructions+=24;goto B41546c;
case 0x415470:c.instructions+=23;goto B415470;
case 0x415473:c.instructions+=22;goto B415473;
case 0x415476:c.instructions+=21;goto B415476;
case 0x41547c:c.instructions+=20;goto B41547c;
case 0x415480:c.instructions+=19;goto B415480;
case 0x415486:c.instructions+=18;goto B415486;
case 0x415489:c.instructions+=17;goto B415489;
case 0x41548c:c.instructions+=16;goto B41548c;
case 0x41548e:c.instructions+=15;goto B41548e;
case 0x415490:c.instructions+=14;goto B415490;
case 0x415492:c.instructions+=13;goto B415492;
case 0x415494:c.instructions+=12;goto B415494;
case 0x415498:c.instructions+=11;goto B415498;
case 0x41549a:c.instructions+=10;goto B41549a;
case 0x41549c:c.instructions+=9;goto B41549c;
case 0x4154a0:c.instructions+=8;goto B4154a0;
case 0x4154a4:c.instructions+=7;goto B4154a4;
case 0x4154a6:c.instructions+=6;goto B4154a6;
case 0x4154aa:c.instructions+=5;goto B4154aa;
case 0x4154ac:c.instructions+=4;goto B4154ac;
case 0x4154b0:c.instructions+=3;goto B4154b0;
case 0x4154b2:c.instructions+=2;goto B4154b2;
case 0x4154b4:c.instructions+=1;goto B4154b4;
case 0x4154b6:goto L4154b6;
case 0x4154ba:c.instructions+=2;goto B4154ba;
case 0x4154bc:c.instructions+=1;goto B4154bc;
case 0x4154be:goto L4154be;
case 0x4154c0:c.instructions+=1;goto B4154c0;
case 0x4154c4:goto L4154c4;
case 0x4154c6:c.instructions+=2;goto B4154c6;
case 0x4154c8:c.instructions+=1;goto B4154c8;
case 0x4154ca:goto L4154ca;
case 0x4154cc:c.instructions+=1;goto B4154cc;
case 0x4154ce:goto L4154ce;
case 0x4154cf:c.instructions+=3;goto B4154cf;
case 0x4154d0:c.instructions+=2;goto B4154d0;
case 0x4154d2:c.instructions+=1;goto B4154d2;
case 0x4154d7:goto L4154d7;
case 0x4154d9:c.instructions+=1;goto B4154d9;
case 0x4154de:goto L4154de;
case 0x4154e0:c.instructions+=1;goto B4154e0;
case 0x4154e4:goto L4154e4;
case 0x4154e6:c.instructions+=1;goto B4154e6;
case 0x4154e8:goto L4154e8;
case 0x4154ef:c.instructions+=3;goto B4154ef;
case 0x4154f1:c.instructions+=2;goto B4154f1;
case 0x4154f3:c.instructions+=1;goto B4154f3;
case 0x4154f5:goto L4154f5;
case 0x4154fa:goto L4154fa;
case 0x4154fc:goto L4154fc;
case 0x415501:goto L415501;
case 0x415503:c.instructions+=1;goto B415503;
case 0x415505:goto L415505;
case 0x415509:goto L415509;
case 0x415510:c.instructions+=2;goto B415510;
case 0x415512:c.instructions+=1;goto B415512;
case 0x415514:goto L415514;
case 0x41551b:c.instructions+=2;goto B41551b;
case 0x415522:c.instructions+=1;goto B415522;
case 0x415524:goto L415524;
case 0x415528:c.instructions+=3;goto B415528;
case 0x415529:c.instructions+=2;goto B415529;
case 0x41552d:c.instructions+=1;goto B41552d;
case 0x415532:goto L415532;
case 0x415536:c.instructions+=5;goto B415536;
case 0x41553c:c.instructions+=4;goto B41553c;
case 0x41553d:c.instructions+=3;goto B41553d;
case 0x41553f:c.instructions+=2;goto B41553f;
case 0x415543:c.instructions+=1;goto B415543;
case 0x415545:goto L415545;
case 0x415549:c.instructions+=1;goto B415549;
case 0x41554d:goto L41554d;
case 0x415551:c.instructions+=6;goto B415551;
case 0x415557:c.instructions+=5;goto B415557;
case 0x415558:c.instructions+=4;goto B415558;
case 0x41555b:c.instructions+=3;goto B41555b;
case 0x41555d:c.instructions+=2;goto B41555d;
case 0x415561:c.instructions+=1;goto B415561;
case 0x415567:goto L415567;
case 0x415568:c.instructions+=6;goto B415568;
case 0x415569:c.instructions+=5;goto B415569;
case 0x41556a:c.instructions+=4;goto B41556a;
case 0x41556c:c.instructions+=3;goto B41556c;
case 0x41556d:c.instructions+=2;goto B41556d;
case 0x415573:c.instructions+=1;goto B415573;
case 0x415574:goto L415574;
case 0x415578:c.instructions+=6;goto B415578;
case 0x415579:c.instructions+=5;goto B415579;
case 0x41557a:c.instructions+=4;goto B41557a;
case 0x41557b:c.instructions+=3;goto B41557b;
case 0x41557c:c.instructions+=2;goto B41557c;
case 0x415582:c.instructions+=1;goto B415582;
case 0x415590:goto L415590;
case 0x415594:c.instructions+=13;goto B415594;
case 0x415595:c.instructions+=12;goto B415595;
case 0x415596:c.instructions+=11;goto B415596;
case 0x415598:c.instructions+=10;goto B415598;
case 0x41559e:c.instructions+=9;goto B41559e;
case 0x4155a1:c.instructions+=8;goto B4155a1;
case 0x4155a4:c.instructions+=7;goto B4155a4;
case 0x4155a5:c.instructions+=6;goto B4155a5;
case 0x4155a7:c.instructions+=5;goto B4155a7;
case 0x4155a8:c.instructions+=4;goto B4155a8;
case 0x4155ac:c.instructions+=3;goto B4155ac;
case 0x4155ad:c.instructions+=2;goto B4155ad;
case 0x4155af:c.instructions+=1;goto B4155af;
case 0x4155b4:goto L4155b4;
case 0x4155b6:c.instructions+=19;goto B4155b6;
case 0x4155b9:c.instructions+=18;goto B4155b9;
case 0x4155bc:c.instructions+=17;goto B4155bc;
case 0x4155bf:c.instructions+=16;goto B4155bf;
case 0x4155c2:c.instructions+=15;goto B4155c2;
case 0x4155c4:c.instructions+=14;goto B4155c4;
case 0x4155c7:c.instructions+=13;goto B4155c7;
case 0x4155ca:c.instructions+=12;goto B4155ca;
case 0x4155cc:c.instructions+=11;goto B4155cc;
case 0x4155ce:c.instructions+=10;goto B4155ce;
case 0x4155d0:c.instructions+=9;goto B4155d0;
case 0x4155d2:c.instructions+=8;goto B4155d2;
case 0x4155d4:c.instructions+=7;goto B4155d4;
case 0x4155d6:c.instructions+=6;goto B4155d6;
case 0x4155d8:c.instructions+=5;goto B4155d8;
case 0x4155da:c.instructions+=4;goto B4155da;
case 0x4155de:c.instructions+=3;goto B4155de;
case 0x4155e0:c.instructions+=2;goto B4155e0;
case 0x4155e3:c.instructions+=1;goto B4155e3;
case 0x4155e5:goto L4155e5;
case 0x4155e8:goto L4155e8;
case 0x4155ea:c.instructions+=1;goto B4155ea;
case 0x4155ec:goto L4155ec;
case 0x4155ef:c.instructions+=18;goto B4155ef;
case 0x4155f2:c.instructions+=17;goto B4155f2;
case 0x4155f5:c.instructions+=16;goto B4155f5;
case 0x4155f6:c.instructions+=15;goto B4155f6;
case 0x4155f9:c.instructions+=14;goto B4155f9;
case 0x4155fc:c.instructions+=13;goto B4155fc;
case 0x4155fe:c.instructions+=12;goto B4155fe;
case 0x415600:c.instructions+=11;goto B415600;
case 0x415602:c.instructions+=10;goto B415602;
case 0x415604:c.instructions+=9;goto B415604;
case 0x415606:c.instructions+=8;goto B415606;
case 0x415608:c.instructions+=7;goto B415608;
case 0x41560a:c.instructions+=6;goto B41560a;
case 0x41560c:c.instructions+=5;goto B41560c;
case 0x41560e:c.instructions+=4;goto B41560e;
case 0x415612:c.instructions+=3;goto B415612;
case 0x415614:c.instructions+=2;goto B415614;
case 0x415617:c.instructions+=1;goto B415617;
case 0x415619:goto L415619;
case 0x41561a:c.instructions+=4;goto B41561a;
case 0x41561c:c.instructions+=3;goto B41561c;
case 0x41561e:c.instructions+=2;goto B41561e;
case 0x41561f:c.instructions+=1;goto B41561f;
case 0x415630:goto L415630;
case 0x415631:c.instructions+=10;goto B415631;
case 0x415633:c.instructions+=9;goto B415633;
case 0x415636:c.instructions+=8;goto B415636;
case 0x41563c:c.instructions+=7;goto B41563c;
case 0x41563d:c.instructions+=6;goto B41563d;
case 0x41563f:c.instructions+=5;goto B41563f;
case 0x415641:c.instructions+=4;goto B415641;
case 0x415643:c.instructions+=3;goto B415643;
case 0x415644:c.instructions+=2;goto B415644;
case 0x415645:c.instructions+=1;goto B415645;
case 0x415647:goto L415647;
case 0x41564a:c.instructions+=15;goto B41564a;
case 0x41564d:c.instructions+=14;goto B41564d;
case 0x415650:c.instructions+=13;goto B415650;
case 0x415653:c.instructions+=12;goto B415653;
case 0x415656:c.instructions+=11;goto B415656;
case 0x415658:c.instructions+=10;goto B415658;
case 0x41565a:c.instructions+=9;goto B41565a;
case 0x41565d:c.instructions+=8;goto B41565d;
case 0x415660:c.instructions+=7;goto B415660;
case 0x415663:c.instructions+=6;goto B415663;
case 0x415664:c.instructions+=5;goto B415664;
case 0x415665:c.instructions+=4;goto B415665;
case 0x415666:c.instructions+=3;goto B415666;
case 0x415668:c.instructions+=2;goto B415668;
case 0x415669:c.instructions+=1;goto B415669;
case 0x41566c:goto L41566c;
case 0x41566e:c.instructions+=1;goto B41566e;
case 0x415670:goto L415670;
case 0x415673:c.instructions+=16;goto B415673;
case 0x415676:c.instructions+=15;goto B415676;
case 0x415679:c.instructions+=14;goto B415679;
case 0x41567c:c.instructions+=13;goto B41567c;
case 0x41567d:c.instructions+=12;goto B41567d;
case 0x415681:c.instructions+=11;goto B415681;
case 0x415685:c.instructions+=10;goto B415685;
case 0x415688:c.instructions+=9;goto B415688;
case 0x415689:c.instructions+=8;goto B415689;
case 0x41568c:c.instructions+=7;goto B41568c;
case 0x415690:c.instructions+=6;goto B415690;
case 0x415691:c.instructions+=5;goto B415691;
case 0x415695:c.instructions+=4;goto B415695;
case 0x415698:c.instructions+=3;goto B415698;
case 0x41569b:c.instructions+=2;goto B41569b;
case 0x41569f:c.instructions+=1;goto B41569f;
case 0x4156a4:goto L4156a4;
case 0x4156a8:c.instructions+=18;goto B4156a8;
case 0x4156ab:c.instructions+=17;goto B4156ab;
case 0x4156ae:c.instructions+=16;goto B4156ae;
case 0x4156b1:c.instructions+=15;goto B4156b1;
case 0x4156b4:c.instructions+=14;goto B4156b4;
case 0x4156b8:c.instructions+=13;goto B4156b8;
case 0x4156bb:c.instructions+=12;goto B4156bb;
case 0x4156bf:c.instructions+=11;goto B4156bf;
case 0x4156c1:c.instructions+=10;goto B4156c1;
case 0x4156c3:c.instructions+=9;goto B4156c3;
case 0x4156c6:c.instructions+=8;goto B4156c6;
case 0x4156c9:c.instructions+=7;goto B4156c9;
case 0x4156cb:c.instructions+=6;goto B4156cb;
case 0x4156cc:c.instructions+=5;goto B4156cc;
case 0x4156cd:c.instructions+=4;goto B4156cd;
case 0x4156ce:c.instructions+=3;goto B4156ce;
case 0x4156d0:c.instructions+=2;goto B4156d0;
case 0x4156d1:c.instructions+=1;goto B4156d1;
case 0x4156d4:goto L4156d4;
case 0x4156d7:c.instructions+=11;goto B4156d7;
case 0x4156dd:c.instructions+=10;goto B4156dd;
case 0x4156e0:c.instructions+=9;goto B4156e0;
case 0x4156e3:c.instructions+=8;goto B4156e3;
case 0x4156e4:c.instructions+=7;goto B4156e4;
case 0x4156e5:c.instructions+=6;goto B4156e5;
case 0x4156e7:c.instructions+=5;goto B4156e7;
case 0x4156eb:c.instructions+=4;goto B4156eb;
case 0x4156ec:c.instructions+=3;goto B4156ec;
case 0x4156ee:c.instructions+=2;goto B4156ee;
case 0x4156f2:c.instructions+=1;goto B4156f2;
case 0x4156f7:goto L4156f7;
case 0x4156fb:c.instructions+=9;goto B4156fb;
case 0x4156fd:c.instructions+=8;goto B4156fd;
case 0x415700:c.instructions+=7;goto B415700;
case 0x415703:c.instructions+=6;goto B415703;
case 0x415704:c.instructions+=5;goto B415704;
case 0x415706:c.instructions+=4;goto B415706;
case 0x415707:c.instructions+=3;goto B415707;
case 0x41570b:c.instructions+=2;goto B41570b;
case 0x41570d:c.instructions+=1;goto B41570d;
case 0x415712:goto L415712;
case 0x415716:c.instructions+=6;goto B415716;
case 0x41571a:c.instructions+=5;goto B41571a;
case 0x41571d:c.instructions+=4;goto B41571d;
case 0x415720:c.instructions+=3;goto B415720;
case 0x415722:c.instructions+=2;goto B415722;
case 0x415725:c.instructions+=1;goto B415725;
case 0x41572b:goto L41572b;
case 0x415730:c.instructions+=3;goto B415730;
case 0x415736:c.instructions+=2;goto B415736;
case 0x41573a:c.instructions+=1;goto B41573a;
case 0x41573f:goto L41573f;
case 0x415745:c.instructions+=3;goto B415745;
case 0x415747:c.instructions+=2;goto B415747;
case 0x41574a:c.instructions+=1;goto B41574a;
case 0x41574c:goto L41574c;
case 0x415752:c.instructions+=1;goto B415752;
case 0x415756:goto L415756;
case 0x415759:c.instructions+=7;goto B415759;
case 0x41575d:c.instructions+=6;goto B41575d;
case 0x415761:c.instructions+=5;goto B415761;
case 0x415764:c.instructions+=4;goto B415764;
case 0x415766:c.instructions+=3;goto B415766;
case 0x41576a:c.instructions+=2;goto B41576a;
case 0x41576e:c.instructions+=1;goto B41576e;
case 0x415770:goto L415770;
case 0x415772:c.instructions+=2;goto B415772;
case 0x415775:c.instructions+=1;goto B415775;
case 0x415777:goto L415777;
case 0x41577a:c.instructions+=3;goto B41577a;
case 0x41577b:c.instructions+=2;goto B41577b;
case 0x41577c:c.instructions+=1;goto B41577c;
case 0x415781:goto L415781;
case 0x415785:c.instructions+=7;goto B415785;
case 0x415789:c.instructions+=6;goto B415789;
case 0x41578d:c.instructions+=5;goto B41578d;
case 0x41578e:c.instructions+=4;goto B41578e;
case 0x415791:c.instructions+=3;goto B415791;
case 0x415792:c.instructions+=2;goto B415792;
case 0x415796:c.instructions+=1;goto B415796;
case 0x41579b:goto L41579b;
case 0x41579f:c.instructions+=13;goto B41579f;
case 0x4157a3:c.instructions+=12;goto B4157a3;
case 0x4157a7:c.instructions+=11;goto B4157a7;
case 0x4157aa:c.instructions+=10;goto B4157aa;
case 0x4157ae:c.instructions+=9;goto B4157ae;
case 0x4157b2:c.instructions+=8;goto B4157b2;
case 0x4157b6:c.instructions+=7;goto B4157b6;
case 0x4157ba:c.instructions+=6;goto B4157ba;
case 0x4157be:c.instructions+=5;goto B4157be;
case 0x4157c2:c.instructions+=4;goto B4157c2;
case 0x4157c5:c.instructions+=3;goto B4157c5;
case 0x4157c7:c.instructions+=2;goto B4157c7;
case 0x4157ca:c.instructions+=1;goto B4157ca;
case 0x4157cc:goto L4157cc;
case 0x4157cf:c.instructions+=4;goto B4157cf;
case 0x4157d0:c.instructions+=3;goto B4157d0;
case 0x4157d3:c.instructions+=2;goto B4157d3;
case 0x4157d5:c.instructions+=1;goto B4157d5;
case 0x4157d7:goto L4157d7;
case 0x4157db:goto L4157db;
case 0x4157de:c.instructions+=4;goto B4157de;
case 0x4157df:c.instructions+=3;goto B4157df;
case 0x4157e1:c.instructions+=2;goto B4157e1;
case 0x4157e5:c.instructions+=1;goto B4157e5;
case 0x4157e7:goto L4157e7;
case 0x4157e9:c.instructions+=20;goto B4157e9;
case 0x4157ec:c.instructions+=19;goto B4157ec;
case 0x4157f0:c.instructions+=18;goto B4157f0;
case 0x4157f3:c.instructions+=17;goto B4157f3;
case 0x4157f5:c.instructions+=16;goto B4157f5;
case 0x4157f6:c.instructions+=15;goto B4157f6;
case 0x4157fa:c.instructions+=14;goto B4157fa;
case 0x4157fe:c.instructions+=13;goto B4157fe;
case 0x415801:c.instructions+=12;goto B415801;
case 0x415804:c.instructions+=11;goto B415804;
case 0x415808:c.instructions+=10;goto B415808;
case 0x41580b:c.instructions+=9;goto B41580b;
case 0x41580e:c.instructions+=8;goto B41580e;
case 0x415812:c.instructions+=7;goto B415812;
case 0x415815:c.instructions+=6;goto B415815;
case 0x415819:c.instructions+=5;goto B415819;
case 0x41581d:c.instructions+=4;goto B41581d;
case 0x415820:c.instructions+=3;goto B415820;
case 0x415821:c.instructions+=2;goto B415821;
case 0x415822:c.instructions+=1;goto B415822;
case 0x415827:goto L415827;
case 0x41582b:c.instructions+=18;goto B41582b;
case 0x41582e:c.instructions+=17;goto B41582e;
case 0x415831:c.instructions+=16;goto B415831;
case 0x415834:c.instructions+=15;goto B415834;
case 0x415837:c.instructions+=14;goto B415837;
case 0x41583b:c.instructions+=13;goto B41583b;
case 0x41583e:c.instructions+=12;goto B41583e;
case 0x415842:c.instructions+=11;goto B415842;
case 0x415844:c.instructions+=10;goto B415844;
case 0x415846:c.instructions+=9;goto B415846;
case 0x415849:c.instructions+=8;goto B415849;
case 0x41584c:c.instructions+=7;goto B41584c;
case 0x415850:c.instructions+=6;goto B415850;
case 0x415851:c.instructions+=5;goto B415851;
case 0x415852:c.instructions+=4;goto B415852;
case 0x415853:c.instructions+=3;goto B415853;
case 0x415855:c.instructions+=2;goto B415855;
case 0x415856:c.instructions+=1;goto B415856;
case 0x415859:goto L415859;
case 0x41585b:c.instructions+=2;goto B41585b;
case 0x41585f:c.instructions+=1;goto B41585f;
case 0x415861:goto L415861;
case 0x415864:c.instructions+=5;goto B415864;
case 0x415868:c.instructions+=4;goto B415868;
case 0x41586b:c.instructions+=3;goto B41586b;
case 0x41586e:c.instructions+=2;goto B41586e;
case 0x415870:c.instructions+=1;goto B415870;
case 0x415872:goto L415872;
case 0x415878:c.instructions+=2;goto B415878;
case 0x41587c:c.instructions+=1;goto B41587c;
case 0x41587f:goto L41587f;
case 0x415882:c.instructions+=26;goto B415882;
case 0x415885:c.instructions+=25;goto B415885;
case 0x415888:c.instructions+=24;goto B415888;
case 0x41588a:c.instructions+=23;goto B41588a;
case 0x41588c:c.instructions+=22;goto B41588c;
case 0x41588d:c.instructions+=21;goto B41588d;
case 0x415891:c.instructions+=20;goto B415891;
case 0x415895:c.instructions+=19;goto B415895;
case 0x415898:c.instructions+=18;goto B415898;
case 0x41589b:c.instructions+=17;goto B41589b;
case 0x41589f:c.instructions+=16;goto B41589f;
case 0x4158a2:c.instructions+=15;goto B4158a2;
case 0x4158a5:c.instructions+=14;goto B4158a5;
case 0x4158a9:c.instructions+=13;goto B4158a9;
case 0x4158ac:c.instructions+=12;goto B4158ac;
case 0x4158ae:c.instructions+=11;goto B4158ae;
case 0x4158b0:c.instructions+=10;goto B4158b0;
case 0x4158b2:c.instructions+=9;goto B4158b2;
case 0x4158b4:c.instructions+=8;goto B4158b4;
case 0x4158b6:c.instructions+=7;goto B4158b6;
case 0x4158b9:c.instructions+=6;goto B4158b9;
case 0x4158ba:c.instructions+=5;goto B4158ba;
case 0x4158bb:c.instructions+=4;goto B4158bb;
case 0x4158bd:c.instructions+=3;goto B4158bd;
case 0x4158c0:c.instructions+=2;goto B4158c0;
case 0x4158c1:c.instructions+=1;goto B4158c1;
case 0x4158c6:goto L4158c6;
case 0x4158c9:c.instructions+=7;goto B4158c9;
case 0x4158cb:c.instructions+=6;goto B4158cb;
case 0x4158cc:c.instructions+=5;goto B4158cc;
case 0x4158cd:c.instructions+=4;goto B4158cd;
case 0x4158ce:c.instructions+=3;goto B4158ce;
case 0x4158d0:c.instructions+=2;goto B4158d0;
case 0x4158d1:c.instructions+=1;goto B4158d1;
case 0x4158e0:goto L4158e0;
case 0x4158e1:c.instructions+=10;goto B4158e1;
case 0x4158e3:c.instructions+=9;goto B4158e3;
case 0x4158e6:c.instructions+=8;goto B4158e6;
case 0x4158e9:c.instructions+=7;goto B4158e9;
case 0x4158ee:c.instructions+=6;goto B4158ee;
case 0x4158ef:c.instructions+=5;goto B4158ef;
case 0x4158f0:c.instructions+=4;goto B4158f0;
case 0x4158f1:c.instructions+=3;goto B4158f1;
case 0x4158f3:c.instructions+=2;goto B4158f3;
case 0x4158f9:c.instructions+=1;goto B4158f9;
case 0x4158ff:goto L4158ff;
case 0x415902:c.instructions+=39;goto B415902;
case 0x415908:c.instructions+=38;goto B415908;
case 0x41590a:c.instructions+=37;goto B41590a;
case 0x41590e:c.instructions+=36;goto B41590e;
case 0x415911:c.instructions+=35;goto B415911;
case 0x415914:c.instructions+=34;goto B415914;
case 0x415917:c.instructions+=33;goto B415917;
case 0x41591a:c.instructions+=32;goto B41591a;
case 0x41591e:c.instructions+=31;goto B41591e;
case 0x415920:c.instructions+=30;goto B415920;
case 0x415922:c.instructions+=29;goto B415922;
case 0x415924:c.instructions+=28;goto B415924;
case 0x415928:c.instructions+=27;goto B415928;
case 0x41592a:c.instructions+=26;goto B41592a;
case 0x41592d:c.instructions+=25;goto B41592d;
case 0x41592f:c.instructions+=24;goto B41592f;
case 0x415933:c.instructions+=23;goto B415933;
case 0x415935:c.instructions+=22;goto B415935;
case 0x415938:c.instructions+=21;goto B415938;
case 0x41593a:c.instructions+=20;goto B41593a;
case 0x41593d:c.instructions+=19;goto B41593d;
case 0x41593f:c.instructions+=18;goto B41593f;
case 0x415943:c.instructions+=17;goto B415943;
case 0x415945:c.instructions+=16;goto B415945;
case 0x415948:c.instructions+=15;goto B415948;
case 0x41594a:c.instructions+=14;goto B41594a;
case 0x41594e:c.instructions+=13;goto B41594e;
case 0x415950:c.instructions+=12;goto B415950;
case 0x415958:c.instructions+=11;goto B415958;
case 0x41595a:c.instructions+=10;goto B41595a;
case 0x41595c:c.instructions+=9;goto B41595c;
case 0x41595e:c.instructions+=8;goto B41595e;
case 0x415960:c.instructions+=7;goto B415960;
case 0x415962:c.instructions+=6;goto B415962;
case 0x415966:c.instructions+=5;goto B415966;
case 0x41596a:c.instructions+=4;goto B41596a;
case 0x415970:c.instructions+=3;goto B415970;
case 0x415972:c.instructions+=2;goto B415972;
case 0x415975:c.instructions+=1;goto B415975;
case 0x41597b:goto L41597b;
case 0x415981:c.instructions+=4;goto B415981;
case 0x415987:c.instructions+=3;goto B415987;
case 0x415989:c.instructions+=2;goto B415989;
case 0x41598c:c.instructions+=1;goto B41598c;
case 0x415992:goto L415992;
case 0x415999:c.instructions+=4;goto B415999;
case 0x41599c:c.instructions+=3;goto B41599c;
case 0x4159a0:c.instructions+=2;goto B4159a0;
case 0x4159a4:c.instructions+=1;goto B4159a4;
case 0x4159a6:goto L4159a6;
case 0x4159a9:c.instructions+=1;goto B4159a9;
case 0x4159b0:goto L4159b0;
case 0x4159b3:c.instructions+=2;goto B4159b3;
case 0x4159b5:c.instructions+=1;goto B4159b5;
case 0x4159bb:goto L4159bb;
case 0x4159c2:c.instructions+=2;goto B4159c2;
case 0x4159c4:c.instructions+=1;goto B4159c4;
case 0x4159c6:goto L4159c6;
case 0x4159c8:c.instructions+=3;goto B4159c8;
case 0x4159cb:c.instructions+=2;goto B4159cb;
case 0x4159ce:c.instructions+=1;goto B4159ce;
case 0x4159d0:goto L4159d0;
case 0x4159d3:c.instructions+=2;goto B4159d3;
case 0x4159d6:c.instructions+=1;goto B4159d6;
case 0x4159d9:goto L4159d9;
case 0x4159db:c.instructions+=21;goto B4159db;
case 0x4159df:c.instructions+=20;goto B4159df;
case 0x4159e3:c.instructions+=19;goto B4159e3;
case 0x4159e5:c.instructions+=18;goto B4159e5;
case 0x4159e7:c.instructions+=17;goto B4159e7;
case 0x4159e9:c.instructions+=16;goto B4159e9;
case 0x4159eb:c.instructions+=15;goto B4159eb;
case 0x4159ed:c.instructions+=14;goto B4159ed;
case 0x4159ef:c.instructions+=13;goto B4159ef;
case 0x4159f1:c.instructions+=12;goto B4159f1;
case 0x4159f3:c.instructions+=11;goto B4159f3;
case 0x4159f7:c.instructions+=10;goto B4159f7;
case 0x4159fb:c.instructions+=9;goto B4159fb;
case 0x4159ff:c.instructions+=8;goto B4159ff;
case 0x415a03:c.instructions+=7;goto B415a03;
case 0x415a04:c.instructions+=6;goto B415a04;
case 0x415a05:c.instructions+=5;goto B415a05;
case 0x415a06:c.instructions+=4;goto B415a06;
case 0x415a0a:c.instructions+=3;goto B415a0a;
case 0x415a0e:c.instructions+=2;goto B415a0e;
case 0x415a0f:c.instructions+=1;goto B415a0f;
case 0x415a14:goto L415a14;
case 0x415a18:c.instructions+=8;goto B415a18;
case 0x415a19:c.instructions+=7;goto B415a19;
case 0x415a1d:c.instructions+=6;goto B415a1d;
case 0x415a1e:c.instructions+=5;goto B415a1e;
case 0x415a22:c.instructions+=4;goto B415a22;
case 0x415a23:c.instructions+=3;goto B415a23;
case 0x415a27:c.instructions+=2;goto B415a27;
case 0x415a28:c.instructions+=1;goto B415a28;
case 0x415a2d:goto L415a2d;
case 0x415a31:c.instructions+=15;goto B415a31;
case 0x415a35:c.instructions+=14;goto B415a35;
case 0x415a39:c.instructions+=13;goto B415a39;
case 0x415a3d:c.instructions+=12;goto B415a3d;
case 0x415a41:c.instructions+=11;goto B415a41;
case 0x415a45:c.instructions+=10;goto B415a45;
case 0x415a4a:c.instructions+=9;goto B415a4a;
case 0x415a4e:c.instructions+=8;goto B415a4e;
case 0x415a52:c.instructions+=7;goto B415a52;
case 0x415a56:c.instructions+=6;goto B415a56;
case 0x415a5a:c.instructions+=5;goto B415a5a;
case 0x415a5d:c.instructions+=4;goto B415a5d;
case 0x415a5f:c.instructions+=3;goto B415a5f;
case 0x415a63:c.instructions+=2;goto B415a63;
case 0x415a67:c.instructions+=1;goto B415a67;
case 0x415a69:goto L415a69;
case 0x415a6d:c.instructions+=3;goto B415a6d;
case 0x415a6e:c.instructions+=2;goto B415a6e;
case 0x415a73:c.instructions+=1;goto B415a73;
case 0x415a78:goto L415a78;
case 0x415a7c:c.instructions+=3;goto B415a7c;
case 0x415a82:c.instructions+=2;goto B415a82;
case 0x415a86:c.instructions+=1;goto B415a86;
case 0x415a88:goto L415a88;
case 0x415a8c:c.instructions+=5;goto B415a8c;
case 0x415a92:c.instructions+=4;goto B415a92;
case 0x415a98:c.instructions+=3;goto B415a98;
case 0x415a9a:c.instructions+=2;goto B415a9a;
case 0x415a9d:c.instructions+=1;goto B415a9d;
case 0x415a9f:goto L415a9f;
case 0x415aa1:c.instructions+=1;goto B415aa1;
case 0x415aa7:goto L415aa7;
case 0x415aad:c.instructions+=2;goto B415aad;
case 0x415aaf:c.instructions+=1;goto B415aaf;
case 0x415ab3:goto L415ab3;
case 0x415ab5:c.instructions+=17;goto B415ab5;
case 0x415ab7:c.instructions+=16;goto B415ab7;
case 0x415aba:c.instructions+=15;goto B415aba;
case 0x415abe:c.instructions+=14;goto B415abe;
case 0x415ac2:c.instructions+=13;goto B415ac2;
case 0x415ac5:c.instructions+=12;goto B415ac5;
case 0x415ac9:c.instructions+=11;goto B415ac9;
case 0x415ad1:c.instructions+=10;goto B415ad1;
case 0x415ad3:c.instructions+=9;goto B415ad3;
case 0x415ad7:c.instructions+=8;goto B415ad7;
case 0x415adb:c.instructions+=7;goto B415adb;
case 0x415adf:c.instructions+=6;goto B415adf;
case 0x415ae1:c.instructions+=5;goto B415ae1;
case 0x415ae5:c.instructions+=4;goto B415ae5;
case 0x415ae9:c.instructions+=3;goto B415ae9;
case 0x415aed:c.instructions+=2;goto B415aed;
case 0x415aef:c.instructions+=1;goto B415aef;
case 0x415af1:goto L415af1;
case 0x415af4:c.instructions+=2;goto B415af4;
case 0x415af6:c.instructions+=1;goto B415af6;
case 0x415af8:goto L415af8;
case 0x415afc:c.instructions+=11;goto B415afc;
case 0x415afe:c.instructions+=10;goto B415afe;
case 0x415b01:c.instructions+=9;goto B415b01;
case 0x415b06:c.instructions+=8;goto B415b06;
case 0x415b0d:c.instructions+=7;goto B415b0d;
case 0x415b11:c.instructions+=6;goto B415b11;
case 0x415b16:c.instructions+=5;goto B415b16;
case 0x415b19:c.instructions+=4;goto B415b19;
case 0x415b20:c.instructions+=3;goto B415b20;
case 0x415b22:c.instructions+=2;goto B415b22;
case 0x415b2c:c.instructions+=1;goto B415b2c;
case 0x415b31:goto L415b31;
case 0x415b35:c.instructions+=1;goto B415b35;
case 0x415b37:goto L415b37;
case 0x415b39:goto L415b39;
case 0x415b3d:c.instructions+=8;goto B415b3d;
case 0x415b40:c.instructions+=7;goto B415b40;
case 0x415b46:c.instructions+=6;goto B415b46;
case 0x415b4a:c.instructions+=5;goto B415b4a;
case 0x415b4b:c.instructions+=4;goto B415b4b;
case 0x415b4e:c.instructions+=3;goto B415b4e;
case 0x415b50:c.instructions+=2;goto B415b50;
case 0x415b53:c.instructions+=1;goto B415b53;
case 0x415b59:goto L415b59;
case 0x415b5c:c.instructions+=2;goto B415b5c;
case 0x415b5e:c.instructions+=1;goto B415b5e;
case 0x415b60:goto L415b60;
case 0x415b62:goto L415b62;
case 0x415b64:goto L415b64;
case 0x415b65:c.instructions+=5;goto B415b65;
case 0x415b66:c.instructions+=4;goto B415b66;
case 0x415b67:c.instructions+=3;goto B415b67;
case 0x415b69:c.instructions+=2;goto B415b69;
case 0x415b6a:c.instructions+=1;goto B415b6a;
case 0x415b70:goto L415b70;
case 0x415b71:c.instructions+=13;goto B415b71;
case 0x415b75:c.instructions+=12;goto B415b75;
case 0x415b79:c.instructions+=11;goto B415b79;
case 0x415b7b:c.instructions+=10;goto B415b7b;
case 0x415b7c:c.instructions+=9;goto B415b7c;
case 0x415b80:c.instructions+=8;goto B415b80;
case 0x415b81:c.instructions+=7;goto B415b81;
case 0x415b83:c.instructions+=6;goto B415b83;
case 0x415b85:c.instructions+=5;goto B415b85;
case 0x415b86:c.instructions+=4;goto B415b86;
case 0x415b87:c.instructions+=3;goto B415b87;
case 0x415b89:c.instructions+=2;goto B415b89;
case 0x415b8d:c.instructions+=1;goto B415b8d;
case 0x415b90:goto L415b90;
case 0x415b92:c.instructions+=1;goto B415b92;
case 0x415b94:goto L415b94;
case 0x415b96:c.instructions+=1;goto B415b96;
case 0x415b98:goto L415b98;
case 0x415b9b:c.instructions+=1;goto B415b9b;
case 0x415b9d:goto L415b9d;
case 0x415ba0:c.instructions+=1;goto B415ba0;
case 0x415ba2:goto L415ba2;
case 0x415ba5:c.instructions+=1;goto B415ba5;
case 0x415ba7:goto L415ba7;
case 0x415baa:c.instructions+=2;goto B415baa;
case 0x415bad:c.instructions+=1;goto B415bad;
case 0x415baf:goto L415baf;
case 0x415bb1:goto L415bb1;
case 0x415bb4:c.instructions+=1;goto B415bb4;
case 0x415bba:goto L415bba;
case 0x415bbd:c.instructions+=1;goto B415bbd;
case 0x415bc3:goto L415bc3;
case 0x415bc7:c.instructions+=2;goto B415bc7;
case 0x415bcb:c.instructions+=1;goto B415bcb;
case 0x415bcd:goto L415bcd;
case 0x415bd2:c.instructions+=1;goto B415bd2;
case 0x415bd4:goto L415bd4;
case 0x415bd7:c.instructions+=2;goto B415bd7;
case 0x415bd9:c.instructions+=1;goto B415bd9;
case 0x415bdb:goto L415bdb;
case 0x415be2:c.instructions+=1;goto B415be2;
case 0x415be4:goto L415be4;
case 0x415be6:goto L415be6;
case 0x415bed:c.instructions+=2;goto B415bed;
case 0x415bef:c.instructions+=1;goto B415bef;
case 0x415bf5:goto L415bf5;
case 0x415bfd:c.instructions+=2;goto B415bfd;
case 0x415c00:c.instructions+=1;goto B415c00;
case 0x415c03:goto L415c03;
case 0x415c06:c.instructions+=1;goto B415c06;
case 0x415c08:goto L415c08;
case 0x415c0b:c.instructions+=1;goto B415c0b;
case 0x415c0d:goto L415c0d;
case 0x415c0f:c.instructions+=2;goto B415c0f;
case 0x415c11:c.instructions+=1;goto B415c11;
case 0x415c14:goto L415c14;
case 0x415c16:c.instructions+=1;goto B415c16;
case 0x415c18:goto L415c18;
case 0x415c1a:c.instructions+=1;goto B415c1a;
case 0x415c1c:goto L415c1c;
case 0x415c1e:c.instructions+=1;goto B415c1e;
case 0x415c20:goto L415c20;
case 0x415c23:c.instructions+=2;goto B415c23;
case 0x415c26:c.instructions+=1;goto B415c26;
case 0x415c28:goto L415c28;
case 0x415c2b:goto L415c2b;
case 0x415c2f:c.instructions+=2;goto B415c2f;
case 0x415c33:c.instructions+=1;goto B415c33;
case 0x415c35:goto L415c35;
case 0x415c3a:c.instructions+=1;goto B415c3a;
case 0x415c3c:goto L415c3c;
case 0x415c3f:c.instructions+=2;goto B415c3f;
case 0x415c41:c.instructions+=1;goto B415c41;
case 0x415c43:goto L415c43;
case 0x415c4a:c.instructions+=1;goto B415c4a;
case 0x415c4c:goto L415c4c;
case 0x415c4e:goto L415c4e;
case 0x415c55:c.instructions+=2;goto B415c55;
case 0x415c57:c.instructions+=1;goto B415c57;
case 0x415c5d:goto L415c5d;
case 0x415c60:c.instructions+=1;goto B415c60;
case 0x415c62:goto L415c62;
case 0x415c65:c.instructions+=1;goto B415c65;
case 0x415c67:goto L415c67;
case 0x415c69:c.instructions+=2;goto B415c69;
case 0x415c6b:c.instructions+=1;goto B415c6b;
case 0x415c6e:goto L415c6e;
case 0x415c70:c.instructions+=1;goto B415c70;
case 0x415c72:goto L415c72;
case 0x415c74:c.instructions+=1;goto B415c74;
case 0x415c76:goto L415c76;
case 0x415c78:c.instructions+=1;goto B415c78;
case 0x415c7a:goto L415c7a;
case 0x415c7d:c.instructions+=2;goto B415c7d;
case 0x415c80:c.instructions+=1;goto B415c80;
case 0x415c82:goto L415c82;
case 0x415c85:goto L415c85;
case 0x415c89:c.instructions+=2;goto B415c89;
case 0x415c8d:c.instructions+=1;goto B415c8d;
case 0x415c8f:goto L415c8f;
case 0x415c94:c.instructions+=1;goto B415c94;
case 0x415c96:goto L415c96;
case 0x415c99:c.instructions+=2;goto B415c99;
case 0x415c9b:c.instructions+=1;goto B415c9b;
case 0x415c9d:goto L415c9d;
case 0x415ca4:c.instructions+=1;goto B415ca4;
case 0x415ca6:goto L415ca6;
case 0x415ca8:goto L415ca8;
case 0x415caf:c.instructions+=2;goto B415caf;
case 0x415cb1:c.instructions+=1;goto B415cb1;
case 0x415cb3:goto L415cb3;
case 0x415cb7:c.instructions+=6;goto B415cb7;
case 0x415cb8:c.instructions+=5;goto B415cb8;
case 0x415cb9:c.instructions+=4;goto B415cb9;
case 0x415cba:c.instructions+=3;goto B415cba;
case 0x415cbd:c.instructions+=2;goto B415cbd;
case 0x415cc1:c.instructions+=1;goto B415cc1;
case 0x415cc7:goto L415cc7;
case 0x415ccb:c.instructions+=10;goto B415ccb;
case 0x415ccf:c.instructions+=9;goto B415ccf;
case 0x415cd3:c.instructions+=8;goto B415cd3;
case 0x415cd4:c.instructions+=7;goto B415cd4;
case 0x415cd5:c.instructions+=6;goto B415cd5;
case 0x415cd7:c.instructions+=5;goto B415cd7;
case 0x415cd9:c.instructions+=4;goto B415cd9;
case 0x415cda:c.instructions+=3;goto B415cda;
case 0x415cdb:c.instructions+=2;goto B415cdb;
case 0x415cdc:c.instructions+=1;goto B415cdc;
case 0x415cdd:goto L415cdd;
case 0x415ce1:c.instructions+=4;goto B415ce1;
case 0x415ce3:c.instructions+=3;goto B415ce3;
case 0x415ce5:c.instructions+=2;goto B415ce5;
case 0x415ce7:c.instructions+=1;goto B415ce7;
case 0x415ce9:goto L415ce9;
case 0x415cec:c.instructions+=6;goto B415cec;
case 0x415cef:c.instructions+=5;goto B415cef;
case 0x415cf1:c.instructions+=4;goto B415cf1;
case 0x415cf2:c.instructions+=3;goto B415cf2;
case 0x415cf3:c.instructions+=2;goto B415cf3;
case 0x415cf5:c.instructions+=1;goto B415cf5;
case 0x415cfa:goto L415cfa;
case 0x415cfe:c.instructions+=10;goto B415cfe;
case 0x415d02:c.instructions+=9;goto B415d02;
case 0x415d06:c.instructions+=8;goto B415d06;
case 0x415d07:c.instructions+=7;goto B415d07;
case 0x415d08:c.instructions+=6;goto B415d08;
case 0x415d0a:c.instructions+=5;goto B415d0a;
case 0x415d0b:c.instructions+=4;goto B415d0b;
case 0x415d0d:c.instructions+=3;goto B415d0d;
case 0x415d0e:c.instructions+=2;goto B415d0e;
case 0x415d0f:c.instructions+=1;goto B415d0f;
case 0x415d10:goto L415d10;
case 0x415d14:c.instructions+=4;goto B415d14;
case 0x415d16:c.instructions+=3;goto B415d16;
case 0x415d18:c.instructions+=2;goto B415d18;
case 0x415d1a:c.instructions+=1;goto B415d1a;
case 0x415d1c:goto L415d1c;
case 0x415d1f:c.instructions+=6;goto B415d1f;
case 0x415d22:c.instructions+=5;goto B415d22;
case 0x415d24:c.instructions+=4;goto B415d24;
case 0x415d25:c.instructions+=3;goto B415d25;
case 0x415d26:c.instructions+=2;goto B415d26;
case 0x415d28:c.instructions+=1;goto B415d28;
case 0x415d2d:goto L415d2d;
case 0x415d31:c.instructions+=10;goto B415d31;
case 0x415d35:c.instructions+=9;goto B415d35;
case 0x415d39:c.instructions+=8;goto B415d39;
case 0x415d3a:c.instructions+=7;goto B415d3a;
case 0x415d3b:c.instructions+=6;goto B415d3b;
case 0x415d3d:c.instructions+=5;goto B415d3d;
case 0x415d3e:c.instructions+=4;goto B415d3e;
case 0x415d40:c.instructions+=3;goto B415d40;
case 0x415d41:c.instructions+=2;goto B415d41;
case 0x415d42:c.instructions+=1;goto B415d42;
case 0x415d50:goto L415d50;
case 0x415d51:c.instructions+=9;goto B415d51;
case 0x415d53:c.instructions+=8;goto B415d53;
case 0x415d56:c.instructions+=7;goto B415d56;
case 0x415d59:c.instructions+=6;goto B415d59;
case 0x415d5a:c.instructions+=5;goto B415d5a;
case 0x415d5d:c.instructions+=4;goto B415d5d;
case 0x415d60:c.instructions+=3;goto B415d60;
case 0x415d61:c.instructions+=2;goto B415d61;
case 0x415d62:c.instructions+=1;goto B415d62;
case 0x415d64:goto L415d64;
case 0x415d67:c.instructions+=11;goto B415d67;
case 0x415d6a:c.instructions+=10;goto B415d6a;
case 0x415d6d:c.instructions+=9;goto B415d6d;
case 0x415d70:c.instructions+=8;goto B415d70;
case 0x415d71:c.instructions+=7;goto B415d71;
case 0x415d72:c.instructions+=6;goto B415d72;
case 0x415d73:c.instructions+=5;goto B415d73;
case 0x415d77:c.instructions+=4;goto B415d77;
case 0x415d7a:c.instructions+=3;goto B415d7a;
case 0x415d7b:c.instructions+=2;goto B415d7b;
case 0x415d7d:c.instructions+=1;goto B415d7d;
case 0x415d82:goto L415d82;
case 0x415d85:c.instructions+=11;goto B415d85;
case 0x415d89:c.instructions+=10;goto B415d89;
case 0x415d8d:c.instructions+=9;goto B415d8d;
case 0x415d8e:c.instructions+=8;goto B415d8e;
case 0x415d90:c.instructions+=7;goto B415d90;
case 0x415d91:c.instructions+=6;goto B415d91;
case 0x415d92:c.instructions+=5;goto B415d92;
case 0x415d93:c.instructions+=4;goto B415d93;
case 0x415d97:c.instructions+=3;goto B415d97;
case 0x415d98:c.instructions+=2;goto B415d98;
case 0x415d9a:c.instructions+=1;goto B415d9a;
case 0x415d9f:goto L415d9f;
case 0x415da0:c.instructions+=5;goto B415da0;
case 0x415da1:c.instructions+=4;goto B415da1;
case 0x415da2:c.instructions+=3;goto B415da2;
case 0x415da4:c.instructions+=2;goto B415da4;
case 0x415da5:c.instructions+=1;goto B415da5;
case 0x415db0:goto L415db0;
case 0x415db1:c.instructions+=2;goto B415db1;
case 0x415db3:c.instructions+=1;goto B415db3;
case 0x415db8:goto L415db8;
case 0x415dbd:c.instructions+=1;goto B415dbd;
case 0x415dbf:goto L415dbf;
case 0x415dc0:c.instructions+=1;goto B415dc0;
case 0x415dc5:goto L415dc5;
case 0x415dc8:goto L415dc8;
case 0x415dca:c.instructions+=2;goto B415dca;
case 0x415dcb:c.instructions+=1;goto B415dcb;
case 0x415dd0:goto L415dd0;
case 0x415dd1:c.instructions+=7;goto B415dd1;
case 0x415dd2:c.instructions+=6;goto B415dd2;
case 0x415dd6:c.instructions+=5;goto B415dd6;
case 0x415ddb:c.instructions+=4;goto B415ddb;
case 0x415ddd:c.instructions+=3;goto B415ddd;
case 0x415ddf:c.instructions+=2;goto B415ddf;
case 0x415de1:c.instructions+=1;goto B415de1;
case 0x415de6:goto L415de6;
case 0x415de8:c.instructions+=6;goto B415de8;
case 0x415dea:c.instructions+=5;goto B415dea;
case 0x415dec:c.instructions+=4;goto B415dec;
case 0x415df2:c.instructions+=3;goto B415df2;
case 0x415df3:c.instructions+=2;goto B415df3;
case 0x415df5:c.instructions+=1;goto B415df5;
case 0x415dfa:goto L415dfa;
case 0x415e00:c.instructions+=3;goto B415e00;
case 0x415e01:c.instructions+=2;goto B415e01;
case 0x415e03:c.instructions+=1;goto B415e03;
case 0x415e08:goto L415e08;
case 0x415e0e:c.instructions+=3;goto B415e0e;
case 0x415e0f:c.instructions+=2;goto B415e0f;
case 0x415e11:c.instructions+=1;goto B415e11;
case 0x415e16:goto L415e16;
case 0x415e1c:c.instructions+=3;goto B415e1c;
case 0x415e1d:c.instructions+=2;goto B415e1d;
case 0x415e1f:c.instructions+=1;goto B415e1f;
case 0x415e24:goto L415e24;
case 0x415e2a:c.instructions+=3;goto B415e2a;
case 0x415e2b:c.instructions+=2;goto B415e2b;
case 0x415e2d:c.instructions+=1;goto B415e2d;
case 0x415e32:goto L415e32;
case 0x415e34:c.instructions+=6;goto B415e34;
case 0x415e36:c.instructions+=5;goto B415e36;
case 0x415e38:c.instructions+=4;goto B415e38;
case 0x415e3e:c.instructions+=3;goto B415e3e;
case 0x415e3f:c.instructions+=2;goto B415e3f;
case 0x415e41:c.instructions+=1;goto B415e41;
case 0x415e46:goto L415e46;
case 0x415e4c:c.instructions+=3;goto B415e4c;
case 0x415e4d:c.instructions+=2;goto B415e4d;
case 0x415e4f:c.instructions+=1;goto B415e4f;
case 0x415e54:goto L415e54;
case 0x415e56:c.instructions+=6;goto B415e56;
case 0x415e58:c.instructions+=5;goto B415e58;
case 0x415e5a:c.instructions+=4;goto B415e5a;
case 0x415e60:c.instructions+=3;goto B415e60;
case 0x415e61:c.instructions+=2;goto B415e61;
case 0x415e63:c.instructions+=1;goto B415e63;
case 0x415e68:goto L415e68;
case 0x415e6e:c.instructions+=3;goto B415e6e;
case 0x415e6f:c.instructions+=2;goto B415e6f;
case 0x415e71:c.instructions+=1;goto B415e71;
case 0x415e76:goto L415e76;
case 0x415e78:c.instructions+=6;goto B415e78;
case 0x415e7a:c.instructions+=5;goto B415e7a;
case 0x415e7c:c.instructions+=4;goto B415e7c;
case 0x415e82:c.instructions+=3;goto B415e82;
case 0x415e83:c.instructions+=2;goto B415e83;
case 0x415e85:c.instructions+=1;goto B415e85;
case 0x415e8a:goto L415e8a;
case 0x415e90:c.instructions+=3;goto B415e90;
case 0x415e91:c.instructions+=2;goto B415e91;
case 0x415e93:c.instructions+=1;goto B415e93;
case 0x415e98:goto L415e98;
case 0x415e9a:c.instructions+=6;goto B415e9a;
case 0x415e9c:c.instructions+=5;goto B415e9c;
case 0x415e9e:c.instructions+=4;goto B415e9e;
case 0x415ea4:c.instructions+=3;goto B415ea4;
case 0x415ea5:c.instructions+=2;goto B415ea5;
case 0x415ea7:c.instructions+=1;goto B415ea7;
case 0x415eac:goto L415eac;
case 0x415eae:c.instructions+=6;goto B415eae;
case 0x415eb0:c.instructions+=5;goto B415eb0;
case 0x415eb2:c.instructions+=4;goto B415eb2;
case 0x415eb8:c.instructions+=3;goto B415eb8;
case 0x415eb9:c.instructions+=2;goto B415eb9;
case 0x415ebb:c.instructions+=1;goto B415ebb;
case 0x415ec0:goto L415ec0;
case 0x415ec6:c.instructions+=3;goto B415ec6;
case 0x415ec7:c.instructions+=2;goto B415ec7;
case 0x415ec9:c.instructions+=1;goto B415ec9;
case 0x415ece:goto L415ece;
case 0x415ed0:c.instructions+=6;goto B415ed0;
case 0x415ed2:c.instructions+=5;goto B415ed2;
case 0x415ed4:c.instructions+=4;goto B415ed4;
case 0x415eda:c.instructions+=3;goto B415eda;
case 0x415edb:c.instructions+=2;goto B415edb;
case 0x415edd:c.instructions+=1;goto B415edd;
case 0x415ee2:goto L415ee2;
case 0x415ee8:c.instructions+=3;goto B415ee8;
case 0x415ee9:c.instructions+=2;goto B415ee9;
case 0x415eeb:c.instructions+=1;goto B415eeb;
case 0x415ef0:goto L415ef0;
case 0x415ef6:c.instructions+=2;goto B415ef6;
case 0x415ef7:c.instructions+=1;goto B415ef7;
case 0x415efc:goto L415efc;
case 0x415f02:c.instructions+=2;goto B415f02;
case 0x415f03:c.instructions+=1;goto B415f03;
case 0x415f08:goto L415f08;
case 0x415f0e:c.instructions+=2;goto B415f0e;
case 0x415f0f:c.instructions+=1;goto B415f0f;
case 0x415f14:goto L415f14;
case 0x415f1a:c.instructions+=2;goto B415f1a;
case 0x415f1b:c.instructions+=1;goto B415f1b;
case 0x415f20:goto L415f20;
case 0x415f26:c.instructions+=2;goto B415f26;
case 0x415f27:c.instructions+=1;goto B415f27;
case 0x415f2c:goto L415f2c;
case 0x415f32:c.instructions+=2;goto B415f32;
case 0x415f33:c.instructions+=1;goto B415f33;
case 0x415f38:goto L415f38;
case 0x415f3e:c.instructions+=3;goto B415f3e;
case 0x415f41:c.instructions+=2;goto B415f41;
case 0x415f45:c.instructions+=1;goto B415f45;
case 0x415f47:goto L415f47;
case 0x415f4d:c.instructions+=3;goto B415f4d;
case 0x415f53:c.instructions+=2;goto B415f53;
case 0x415f54:c.instructions+=1;goto B415f54;
case 0x415f57:goto L415f57;
case 0x415f5d:c.instructions+=3;goto B415f5d;
case 0x415f63:c.instructions+=2;goto B415f63;
case 0x415f64:c.instructions+=1;goto B415f64;
case 0x415f67:goto L415f67;
case 0x415f68:c.instructions+=2;goto B415f68;
case 0x415f6a:c.instructions+=1;goto B415f6a;
case 0x415f6f:goto L415f6f;
case 0x415f71:c.instructions+=1;goto B415f71;
case 0x415f76:goto L415f76;
case 0x415f77:c.instructions+=2;goto B415f77;
case 0x415f78:c.instructions+=1;goto B415f78;
case 0x415f80:goto L415f80;
case 0x415f81:c.instructions+=9;goto B415f81;
case 0x415f83:c.instructions+=8;goto B415f83;
case 0x415f86:c.instructions+=7;goto B415f86;
case 0x415f89:c.instructions+=6;goto B415f89;
case 0x415f8a:c.instructions+=5;goto B415f8a;
case 0x415f8c:c.instructions+=4;goto B415f8c;
case 0x415f92:c.instructions+=3;goto B415f92;
case 0x415f95:c.instructions+=2;goto B415f95;
case 0x415f96:c.instructions+=1;goto B415f96;
case 0x415f98:goto L415f98;
case 0x415f9b:c.instructions+=1;goto B415f9b;
case 0x415f9d:goto L415f9d;
case 0x415f9e:c.instructions+=1;goto B415f9e;
case 0x415fa0:goto L415fa0;
case 0x415fa5:c.instructions+=1;goto B415fa5;
case 0x415fa7:goto L415fa7;
case 0x415faa:c.instructions+=7;goto B415faa;
case 0x415fac:c.instructions+=6;goto B415fac;
case 0x415faf:c.instructions+=5;goto B415faf;
case 0x415fb2:c.instructions+=4;goto B415fb2;
case 0x415fb3:c.instructions+=3;goto B415fb3;
case 0x415fb6:c.instructions+=2;goto B415fb6;
case 0x415fb9:c.instructions+=1;goto B415fb9;
case 0x415fbb:goto L415fbb;
case 0x415fbe:c.instructions+=1;goto B415fbe;
case 0x415fc0:goto L415fc0;
case 0x415fc6:c.instructions+=7;goto B415fc6;
case 0x415fcd:c.instructions+=6;goto B415fcd;
case 0x415fd4:c.instructions+=5;goto B415fd4;
case 0x415fd8:c.instructions+=4;goto B415fd8;
case 0x415fda:c.instructions+=3;goto B415fda;
case 0x415fdc:c.instructions+=2;goto B415fdc;
case 0x415fdf:c.instructions+=1;goto B415fdf;
case 0x415fe1:goto L415fe1;
case 0x415fe5:c.instructions+=3;goto B415fe5;
case 0x415fe7:c.instructions+=2;goto B415fe7;
case 0x415feb:c.instructions+=1;goto B415feb;
case 0x415fed:goto L415fed;
case 0x415ff3:c.instructions+=5;goto B415ff3;
case 0x415ff5:c.instructions+=4;goto B415ff5;
case 0x415ff9:c.instructions+=3;goto B415ff9;
case 0x415ffa:c.instructions+=2;goto B415ffa;
case 0x415fff:c.instructions+=1;goto B415fff;
default:missing_instruction(c.pc);}
B415001:L415001:{c.instructions+=9;NFSU2_TR(0x415001);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415005:{NFSU2_TR(0x415005);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415008:{NFSU2_TR(0x415008);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415009:{NFSU2_TR(0x415009);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41500a:{NFSU2_TR(0x41500a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41500b:{NFSU2_TR(0x41500b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41500f:{NFSU2_TR(0x41500f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415010:{NFSU2_TR(0x415010);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415014:{NFSU2_TR(0x415014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415019ull));
TAIL_STATIC(0x4122c0u,412);
}
B415019:L415019:{c.instructions+=10;NFSU2_TR(0x415019);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41501d:{NFSU2_TR(0x41501d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415020:{NFSU2_TR(0x415020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415021:{NFSU2_TR(0x415021);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415023:{NFSU2_TR(0x415023);
__builtin_memmove((R+8),(R+0),4);
}
B415025:{NFSU2_TR(0x415025);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415029:{NFSU2_TR(0x415029);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41502a:{NFSU2_TR(0x41502a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41502e:{NFSU2_TR(0x41502e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41502f:{NFSU2_TR(0x41502f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415034ull));
TAIL_STATIC(0x4122c0u,412);
}
B415034:L415034:{c.instructions+=7;NFSU2_TR(0x415034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415036:{NFSU2_TR(0x415036);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415038:{NFSU2_TR(0x415038);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41503a:{NFSU2_TR(0x41503a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41503e:{NFSU2_TR(0x41503e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41503f:{NFSU2_TR(0x41503f);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415046:{NFSU2_TR(0x415046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41504bull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B41504b:L41504b:{c.instructions+=8;NFSU2_TR(0x41504b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41504f:{NFSU2_TR(0x41504f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415051:{NFSU2_TR(0x415051);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415053:{NFSU2_TR(0x415053);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415055:{NFSU2_TR(0x415055);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415059:{NFSU2_TR(0x415059);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41505a:{NFSU2_TR(0x41505a);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415061:{NFSU2_TR(0x415061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415066ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B415066:L415066:{c.instructions+=8;NFSU2_TR(0x415066);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41506a:{NFSU2_TR(0x41506a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41506c:{NFSU2_TR(0x41506c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41506e:{NFSU2_TR(0x41506e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415070:{NFSU2_TR(0x415070);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B415074:{NFSU2_TR(0x415074);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415075:{NFSU2_TR(0x415075);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41507c:{NFSU2_TR(0x41507c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415081ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B415081:L415081:{c.instructions+=10;NFSU2_TR(0x415081);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415085:{NFSU2_TR(0x415085);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415089:{NFSU2_TR(0x415089);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41508d:{NFSU2_TR(0x41508d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41508e:{NFSU2_TR(0x41508e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415092:{NFSU2_TR(0x415092);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415093:{NFSU2_TR(0x415093);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415094:{NFSU2_TR(0x415094);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415096:{NFSU2_TR(0x415096);
__builtin_memmove((R+4),(R+28),4);
}
B415098:{NFSU2_TR(0x415098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41509dull));
TAIL_STATIC(0x40f0d0u,40f);
}
B41509d:L41509d:{c.instructions+=8;NFSU2_TR(0x41509d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4150a1:{NFSU2_TR(0x4150a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150a2:{NFSU2_TR(0x4150a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4150a6:{NFSU2_TR(0x4150a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150a7:{NFSU2_TR(0x4150a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150a8:{NFSU2_TR(0x4150a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150aa:{NFSU2_TR(0x4150aa);
__builtin_memmove((R+4),(R+28),4);
}
B4150ac:{NFSU2_TR(0x4150ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4150b1ull));
TAIL_STATIC(0x40f0d0u,40f);
}
B4150b1:L4150b1:{c.instructions+=8;NFSU2_TR(0x4150b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4150b5:{NFSU2_TR(0x4150b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150b6:{NFSU2_TR(0x4150b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4150ba:{NFSU2_TR(0x4150ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150bb:{NFSU2_TR(0x4150bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150bc:{NFSU2_TR(0x4150bc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4150be:{NFSU2_TR(0x4150be);
__builtin_memmove((R+4),(R+28),4);
}
B4150c0:{NFSU2_TR(0x4150c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4150c5ull));
TAIL_STATIC(0x40f0d0u,40f);
}
B4150c5:L4150c5:{c.instructions+=11;NFSU2_TR(0x4150c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4150c8:{NFSU2_TR(0x4150c8);
__builtin_memmove((R+0),(R+12),4);
}
B4150ca:{NFSU2_TR(0x4150ca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4150cc:{NFSU2_TR(0x4150cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4150d0:{NFSU2_TR(0x4150d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4150d1:{NFSU2_TR(0x4150d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4150d4:{NFSU2_TR(0x4150d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4150d7:{NFSU2_TR(0x4150d7);
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
B4150da:{NFSU2_TR(0x4150da);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4150de:{NFSU2_TR(0x4150de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4150e2:{NFSU2_TR(0x4150e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x414d98u,414);}
}
B4150e8:L4150e8:{c.instructions+=3;NFSU2_TR(0x4150e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4150ec:{NFSU2_TR(0x4150ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4150f7:{NFSU2_TR(0x4150f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4150fcull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B4150fc:L4150fc:{c.instructions+=8;NFSU2_TR(0x4150fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415103:{NFSU2_TR(0x415103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415104:{NFSU2_TR(0x415104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415105:{NFSU2_TR(0x415105);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41510c:{NFSU2_TR(0x41510c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41510d:{NFSU2_TR(0x41510d);
__builtin_memmove((R+16),(R+20),4);
}
B41510f:{NFSU2_TR(0x41510f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415110:{NFSU2_TR(0x415110);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415120:L415120:{c.instructions+=1;NFSU2_TR(0x415120);
TAIL_STATIC(0x40f070u,40f);
}
B415130:L415130:{c.instructions+=13;NFSU2_TR(0x415130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x140ull))));
}
B415136:{NFSU2_TR(0x415136);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B41513b:{NFSU2_TR(0x41513b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41513c:{NFSU2_TR(0x41513c);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B415143:{NFSU2_TR(0x415143);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415144:{NFSU2_TR(0x415144);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B415146:{NFSU2_TR(0x415146);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415148:{NFSU2_TR(0x415148);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41514f:{NFSU2_TR(0x41514f);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415156:{NFSU2_TR(0x415156);
u8 U[5];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41515e:{NFSU2_TR(0x41515e);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B415162:{NFSU2_TR(0x415162);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415166:{NFSU2_TR(0x415166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415173;}}
}
B415168:L415168:{c.instructions+=5;NFSU2_TR(0x415168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415169:{NFSU2_TR(0x415169);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41516b:{NFSU2_TR(0x41516b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41516c:{NFSU2_TR(0x41516c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x140ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415172:{NFSU2_TR(0x415172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415173:L415173:{c.instructions+=8;NFSU2_TR(0x415173);
u8 U[5];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41517a:{NFSU2_TR(0x41517a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41517c:{NFSU2_TR(0x41517c);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415183:{NFSU2_TR(0x415183);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415187:{NFSU2_TR(0x415187);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41518b:{NFSU2_TR(0x41518b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41518f:{NFSU2_TR(0x41518f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B415193:{NFSU2_TR(0x415193);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4151b5;}}
}
B415195:L415195:{c.instructions+=7;NFSU2_TR(0x415195);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B415199:{NFSU2_TR(0x415199);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41519c:{NFSU2_TR(0x41519c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4151a0:{NFSU2_TR(0x4151a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4151a4:{NFSU2_TR(0x4151a4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4151aa:{NFSU2_TR(0x4151aa);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4151b1:{NFSU2_TR(0x4151b1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4151b5:L4151b5:{c.instructions+=7;NFSU2_TR(0x4151b5);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B4151ba:{NFSU2_TR(0x4151ba);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4151bd:{NFSU2_TR(0x4151bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4151c0:{NFSU2_TR(0x4151c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4151c1:{NFSU2_TR(0x4151c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4151c2:{NFSU2_TR(0x4151c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4151ca:{NFSU2_TR(0x4151ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415567;}}
}
B4151d0:L4151d0:{c.instructions+=1;NFSU2_TR(0x4151d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4151d4:L4151d4:{c.instructions+=12;NFSU2_TR(0x4151d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4151d8:{NFSU2_TR(0x4151d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4151db:{NFSU2_TR(0x4151db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4151df:{NFSU2_TR(0x4151df);
__builtin_memmove((R+4),(R+24),4);
}
B4151e1:{NFSU2_TR(0x4151e1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4151e5:{NFSU2_TR(0x4151e5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4151eb:{NFSU2_TR(0x4151eb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4151ef:{NFSU2_TR(0x4151ef);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4151f3:{NFSU2_TR(0x4151f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4151f9:{NFSU2_TR(0x4151f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4151fb:{NFSU2_TR(0x4151fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4151fe:{NFSU2_TR(0x4151fe);
if(r1(R+514)){{goto L41523f;}}
}
B415200:L415200:{c.instructions+=1;NFSU2_TR(0x415200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415205ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B415205:L415205:{c.instructions+=11;NFSU2_TR(0x415205);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41520c:{NFSU2_TR(0x41520c);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B415210:{NFSU2_TR(0x415210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B415212:{NFSU2_TR(0x415212);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415216:{NFSU2_TR(0x415216);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B415219:{NFSU2_TR(0x415219);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415220:{NFSU2_TR(0x415220);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B415221:{NFSU2_TR(0x415221);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415223:{NFSU2_TR(0x415223);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415226:{NFSU2_TR(0x415226);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41522a:{NFSU2_TR(0x41522a);
if(r1(R+518)){{goto L415574;}}
}
B415230:L415230:{c.instructions+=3;NFSU2_TR(0x415230);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B415233:{NFSU2_TR(0x415233);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41523a:{NFSU2_TR(0x41523a);
{goto L415505;}
}
B41523f:L41523f:{c.instructions+=4;NFSU2_TR(0x41523f);
w1(R+12,u8(0x1ull));
}
B415241:{NFSU2_TR(0x415241);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B415246:{NFSU2_TR(0x415246);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41524a:{NFSU2_TR(0x41524a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41524full));
TAIL_STATIC(0x5d4380u,5d4);
}
B41524f:L41524f:{c.instructions+=2;NFSU2_TR(0x41524f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B415251:{NFSU2_TR(0x415251);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4154ca;}}
}
B415257:L415257:{c.instructions+=4;NFSU2_TR(0x415257);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41525b:{NFSU2_TR(0x41525b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41525c:{NFSU2_TR(0x41525c);
__builtin_memmove((R+4),(R+24),4);
}
B41525e:{NFSU2_TR(0x41525e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415263ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B415263:L415263:{c.instructions+=8;NFSU2_TR(0x415263);
__builtin_memmove((R+28),(R+0),4);
}
B415265:{NFSU2_TR(0x415265);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415268:{NFSU2_TR(0x415268);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41526c:{NFSU2_TR(0x41526c);
__builtin_memmove((R+4),(R+8),4);
}
B41526e:{NFSU2_TR(0x41526e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B415271:{NFSU2_TR(0x415271);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B415274:{NFSU2_TR(0x415274);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B415276:{NFSU2_TR(0x415276);
if(r1(R+518)){{goto L41540b;}}
}
B41527c:L41527c:{c.instructions+=7;NFSU2_TR(0x41527c);
__builtin_memmove((R+0),(R+8),1);
}
B41527e:{NFSU2_TR(0x41527e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B415280:{NFSU2_TR(0x415280);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B415282:{NFSU2_TR(0x415282);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415284:{NFSU2_TR(0x415284);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B415288:{NFSU2_TR(0x415288);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41528c:{NFSU2_TR(0x41528c);
if(r1(R+518)){{goto L415428;}}
}
B415292:L415292:{c.instructions+=9;NFSU2_TR(0x415292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415295:{NFSU2_TR(0x415295);
u8 U[5];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41529c:{NFSU2_TR(0x41529c);
__builtin_memmove((R+4),(R+0),4);
}
B41529e:{NFSU2_TR(0x41529e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4152a1:{NFSU2_TR(0x4152a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4152a4:{NFSU2_TR(0x4152a4);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B4152a7:{NFSU2_TR(0x4152a7);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B4152a9:{NFSU2_TR(0x4152a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4152ab:{NFSU2_TR(0x4152ab);
if(r1(R+518)){{goto L415391;}}
}
B4152b1:L4152b1:{c.instructions+=2;NFSU2_TR(0x4152b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4152b3:{NFSU2_TR(0x4152b3);
if(r1(R+518)){{goto L4152c9;}}
}
B4152b5:L4152b5:{c.instructions+=3;NFSU2_TR(0x4152b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4152b9:{NFSU2_TR(0x4152b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4152bb:{NFSU2_TR(0x4152bb);
if(r1(R+518)){{goto L4153a6;}}
}
B4152c1:L4152c1:{c.instructions+=1;NFSU2_TR(0x4152c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4152c3:L4152c3:{c.instructions+=1;NFSU2_TR(0x4152c3);
if(r1(R+518)){{goto L415435;}}
}
B4152c9:L4152c9:{c.instructions+=2;NFSU2_TR(0x4152c9);
__builtin_memmove((R+4),(R+28),4);
}
B4152cb:{NFSU2_TR(0x4152cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4152d0ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B4152d0:L4152d0:{c.instructions+=40;NFSU2_TR(0x4152d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4152d4:{NFSU2_TR(0x4152d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4152d8:{NFSU2_TR(0x4152d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4152dc:{NFSU2_TR(0x4152dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4152e0:{NFSU2_TR(0x4152e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4152e4:{NFSU2_TR(0x4152e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4152e8:{NFSU2_TR(0x4152e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4152eb:{NFSU2_TR(0x4152eb);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4152f1:{NFSU2_TR(0x4152f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4152f5:{NFSU2_TR(0x4152f5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4152f9:{NFSU2_TR(0x4152f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4152fd:{NFSU2_TR(0x4152fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415301:{NFSU2_TR(0x415301);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415307:{NFSU2_TR(0x415307);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415308:{NFSU2_TR(0x415308);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41530c:{NFSU2_TR(0x41530c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41530d:{NFSU2_TR(0x41530d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415311:{NFSU2_TR(0x415311);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415317:{NFSU2_TR(0x415317);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41531b:{NFSU2_TR(0x41531b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41531f:{NFSU2_TR(0x41531f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415322:{NFSU2_TR(0x415322);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415325:{NFSU2_TR(0x415325);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B415327:{NFSU2_TR(0x415327);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415329:{NFSU2_TR(0x415329);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41532c:{NFSU2_TR(0x41532c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41532e:{NFSU2_TR(0x41532e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B415331:{NFSU2_TR(0x415331);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B415333:{NFSU2_TR(0x415333);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
}
B415335:{NFSU2_TR(0x415335);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415339:{NFSU2_TR(0x415339);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41533b:{NFSU2_TR(0x41533b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41533f:{NFSU2_TR(0x41533f);
__builtin_memmove((R+4),(R+24),4);
}
B415341:{NFSU2_TR(0x415341);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B415343:{NFSU2_TR(0x415343);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B415347:{NFSU2_TR(0x415347);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B415349:{NFSU2_TR(0x415349);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41534d:{NFSU2_TR(0x41534d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41534f:{NFSU2_TR(0x41534f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415351:{NFSU2_TR(0x415351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415356ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B415356:L415356:{c.instructions+=2;NFSU2_TR(0x415356);
__builtin_memmove((R+4),(R+0),4);
}
B415358:{NFSU2_TR(0x415358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41535dull));
TAIL_STATIC(0x401cc0u,401);
}
B41535d:L41535d:{c.instructions+=3;NFSU2_TR(0x41535d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41535f:{NFSU2_TR(0x41535f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415363:{NFSU2_TR(0x415363);
if(r1(R+518)){{goto L415373;}}
}
B415365:L415365:{c.instructions+=4;NFSU2_TR(0x415365);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415369:{NFSU2_TR(0x415369);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41536a:{NFSU2_TR(0x41536a);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41536e:{NFSU2_TR(0x41536e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415373ull));
TAIL_STATIC(0x40c720u,40c);
}
B415373:L415373:{c.instructions+=3;NFSU2_TR(0x415373);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B415377:{NFSU2_TR(0x415377);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415379:{NFSU2_TR(0x415379);
if(r1(R+518)){{goto L4153c7;}}
}
B41537b:L41537b:{c.instructions+=2;NFSU2_TR(0x41537b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xfull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B41537f:{NFSU2_TR(0x41537f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4153c0;}}
}
B415381:L415381:{c.instructions+=4;NFSU2_TR(0x415381);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B415385:{NFSU2_TR(0x415385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415386:{NFSU2_TR(0x415386);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41538a:{NFSU2_TR(0x41538a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41538full));
TAIL_STATIC(0x40c720u,40c);
}
B41538f:L41538f:{c.instructions+=1;NFSU2_TR(0x41538f);
{goto L415402;}
}
B415391:L415391:{c.instructions+=2;NFSU2_TR(0x415391);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415393:{NFSU2_TR(0x415393);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4152c9u);}goto L4152c9;}}
}
B415399:L415399:{c.instructions+=5;NFSU2_TR(0x415399);
__builtin_memmove((R+4),(R+8),4);
}
B41539b:{NFSU2_TR(0x41539b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41539e:{NFSU2_TR(0x41539e);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B4153a1:{NFSU2_TR(0x4153a1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4153a4:{NFSU2_TR(0x4153a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4153aa;}}
}
B4153a6:L4153a6:{c.instructions+=2;NFSU2_TR(0x4153a6);
w1(R+12,u8(0x1ull));
}
B4153a8:{NFSU2_TR(0x4153a8);
{goto L41540b;}
}
B4153aa:L4153aa:{c.instructions+=2;NFSU2_TR(0x4153aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4153ac:{NFSU2_TR(0x4153ac);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4152c9u);}goto L4152c9;}}
}
B4153b2:L4153b2:{c.instructions+=4;NFSU2_TR(0x4153b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B4153b5:{NFSU2_TR(0x4153b5);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B4153b8:{NFSU2_TR(0x4153b8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4153bb:{NFSU2_TR(0x4153bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4152c3u);}goto L4152c3;}
}
B4153c0:L4153c0:{c.instructions+=3;NFSU2_TR(0x4153c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4153c4:{NFSU2_TR(0x4153c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4153c5:{NFSU2_TR(0x4153c5);
{goto L4153f9;}
}
B4153c7:L4153c7:{c.instructions+=3;NFSU2_TR(0x4153c7);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4153cd:{NFSU2_TR(0x4153cd);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4153d2:{NFSU2_TR(0x4153d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4153d7ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B4153d7:L4153d7:{c.instructions+=4;NFSU2_TR(0x4153d7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4153dd:{NFSU2_TR(0x4153dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4153df:{NFSU2_TR(0x4153df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4153e2:{NFSU2_TR(0x4153e2);
if(r1(R+514)){{goto L4153f4;}}
}
B4153e4:L4153e4:{c.instructions+=4;NFSU2_TR(0x4153e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4153e8:{NFSU2_TR(0x4153e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4153e9:{NFSU2_TR(0x4153e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4153ed:{NFSU2_TR(0x4153ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4153f2ull));
TAIL_STATIC(0x40c720u,40c);
}
B4153f2:L4153f2:{c.instructions+=1;NFSU2_TR(0x4153f2);
{goto L415402;}
}
B4153f4:L4153f4:{c.instructions+=2;NFSU2_TR(0x4153f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4153f8:{NFSU2_TR(0x4153f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4153f9:L4153f9:{c.instructions+=2;NFSU2_TR(0x4153f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4153fd:{NFSU2_TR(0x4153fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415402ull));
TAIL_STATIC(0x40c6b0u,40c);
}
B415402:L415402:{c.instructions+=2;NFSU2_TR(0x415402);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B415406:{NFSU2_TR(0x415406);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41540b:L41540b:{c.instructions+=5;NFSU2_TR(0x41540b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41540f:{NFSU2_TR(0x41540f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B415410:{NFSU2_TR(0x415410);
__builtin_memmove((R+4),(R+24),4);
}
B415412:{NFSU2_TR(0x415412);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415416:{NFSU2_TR(0x415416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41541bull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41541b:L41541b:{c.instructions+=2;NFSU2_TR(0x41541b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41541d:{NFSU2_TR(0x41541d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x415257u);}goto L415257;}}
}
B415423:L415423:{c.instructions+=1;NFSU2_TR(0x415423);
{goto L4154b6;}
}
B415428:L415428:{c.instructions+=2;NFSU2_TR(0x415428);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B415430:{NFSU2_TR(0x415430);
{goto L4154b6;}
}
B415435:L415435:{c.instructions+=2;NFSU2_TR(0x415435);
__builtin_memmove((R+4),(R+28),4);
}
B415437:{NFSU2_TR(0x415437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41543cull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41543c:L41543c:{c.instructions+=36;NFSU2_TR(0x41543c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B415440:{NFSU2_TR(0x415440);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B415444:{NFSU2_TR(0x415444);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B415447:{NFSU2_TR(0x415447);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41544b:{NFSU2_TR(0x41544b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41544f:{NFSU2_TR(0x41544f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B415453:{NFSU2_TR(0x415453);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415457:{NFSU2_TR(0x415457);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41545d:{NFSU2_TR(0x41545d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415460:{NFSU2_TR(0x415460);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B415464:{NFSU2_TR(0x415464);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B415468:{NFSU2_TR(0x415468);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41546c:{NFSU2_TR(0x41546c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415470:{NFSU2_TR(0x415470);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B415473:{NFSU2_TR(0x415473);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B415476:{NFSU2_TR(0x415476);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41547c:{NFSU2_TR(0x41547c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B415480:{NFSU2_TR(0x415480);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415486:{NFSU2_TR(0x415486);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415489:{NFSU2_TR(0x415489);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41548c:{NFSU2_TR(0x41548c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41548e:{NFSU2_TR(0x41548e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415490:{NFSU2_TR(0x415490);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415492:{NFSU2_TR(0x415492);
__builtin_memmove((R+24),(R+0),4);
}
B415494:{NFSU2_TR(0x415494);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B415498:{NFSU2_TR(0x415498);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
}
B41549a:{NFSU2_TR(0x41549a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41549c:{NFSU2_TR(0x41549c);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4154a0:{NFSU2_TR(0x4154a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4154a4:{NFSU2_TR(0x4154a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4154a6:{NFSU2_TR(0x4154a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4154aa:{NFSU2_TR(0x4154aa);
__asm__ volatile(".byte 0xd8,0xeb":::"memory");
}
B4154ac:{NFSU2_TR(0x4154ac);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4154b0:{NFSU2_TR(0x4154b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4154b2:{NFSU2_TR(0x4154b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4154b4:{NFSU2_TR(0x4154b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4154b6:L4154b6:{c.instructions+=3;NFSU2_TR(0x4154b6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4154ba:{NFSU2_TR(0x4154ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4154bc:{NFSU2_TR(0x4154bc);
if(r1(R+518)){{goto L4154c4;}}
}
B4154be:L4154be:{c.instructions+=2;NFSU2_TR(0x4154be);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4154c0:{NFSU2_TR(0x4154c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4154c4:L4154c4:{c.instructions+=3;NFSU2_TR(0x4154c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4154c6:{NFSU2_TR(0x4154c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4154c8:{NFSU2_TR(0x4154c8);
if(r1(R+518)){{goto L4154e4;}}
}
B4154ca:L4154ca:{c.instructions+=2;NFSU2_TR(0x4154ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4154cc:{NFSU2_TR(0x4154cc);
if(r1(R+518)){{goto L415509;}}
}
B4154ce:L4154ce:{c.instructions+=4;NFSU2_TR(0x4154ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4154cf:{NFSU2_TR(0x4154cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4154d0:{NFSU2_TR(0x4154d0);
__builtin_memmove((R+4),(R+24),4);
}
B4154d2:{NFSU2_TR(0x4154d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4154d7ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B4154d7:L4154d7:{c.instructions+=2;NFSU2_TR(0x4154d7);
__builtin_memmove((R+4),(R+0),4);
}
B4154d9:{NFSU2_TR(0x4154d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4154deull));
TAIL_STATIC(0x401cc0u,401);
}
B4154de:L4154de:{c.instructions+=2;NFSU2_TR(0x4154de);
__builtin_memmove((R+24),(R+0),4);
}
B4154e0:{NFSU2_TR(0x4154e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4154e4:L4154e4:{c.instructions+=2;NFSU2_TR(0x4154e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4154e6:{NFSU2_TR(0x4154e6);
if(r1(R+518)){{goto L415509;}}
}
B4154e8:L4154e8:{c.instructions+=4;NFSU2_TR(0x4154e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4154ef:{NFSU2_TR(0x4154ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4154f1:{NFSU2_TR(0x4154f1);
__builtin_memmove((R+4),(R+24),4);
}
B4154f3:{NFSU2_TR(0x4154f3);
if(r1(R+518)){{goto L4154fc;}}
}
B4154f5:L4154f5:{c.instructions+=1;NFSU2_TR(0x4154f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4154faull));
TAIL_STATIC(0x5d8bf0u,5d8);
}
B4154fa:L4154fa:{c.instructions+=1;NFSU2_TR(0x4154fa);
{goto L415501;}
}
B4154fc:L4154fc:{c.instructions+=1;NFSU2_TR(0x4154fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415501ull));
TAIL_STATIC(0x5d8c40u,5d8);
}
B415501:L415501:{c.instructions+=2;NFSU2_TR(0x415501);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415503:{NFSU2_TR(0x415503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41554d;}}
}
B415505:L415505:{c.instructions+=1;NFSU2_TR(0x415505);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415509:L415509:{c.instructions+=3;NFSU2_TR(0x415509);
u8 U[5];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B415510:{NFSU2_TR(0x415510);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415512:{NFSU2_TR(0x415512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415524;}}
}
B415514:L415514:{c.instructions+=3;NFSU2_TR(0x415514);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41551b:{NFSU2_TR(0x41551b);
u8 U[16];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B415522:{NFSU2_TR(0x415522);
if(r1(R+518)){{goto L415574;}}
}
B415524:L415524:{c.instructions+=4;NFSU2_TR(0x415524);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415528:{NFSU2_TR(0x415528);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415529:{NFSU2_TR(0x415529);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41552d:{NFSU2_TR(0x41552d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415532ull));
TAIL_STATIC(0x4132e0u,413);
}
B415532:L415532:{c.instructions+=6;NFSU2_TR(0x415532);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415536:{NFSU2_TR(0x415536);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B41553c:{NFSU2_TR(0x41553c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41553d:{NFSU2_TR(0x41553d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41553f:{NFSU2_TR(0x41553f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415543:{NFSU2_TR(0x415543);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L415567;}}
}
B415545:L415545:{c.instructions+=2;NFSU2_TR(0x415545);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B415549:{NFSU2_TR(0x415549);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41554d:L41554d:{c.instructions+=7;NFSU2_TR(0x41554d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415551:{NFSU2_TR(0x415551);
__builtin_memmove((R+8),gp(0x88d218),4);
}
B415557:{NFSU2_TR(0x415557);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B415558:{NFSU2_TR(0x415558);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41555b:{NFSU2_TR(0x41555b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41555d:{NFSU2_TR(0x41555d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415561:{NFSU2_TR(0x415561);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4151d4u);}goto L4151d4;}}
}
B415567:L415567:{c.instructions+=7;NFSU2_TR(0x415567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415568:{NFSU2_TR(0x415568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415569:{NFSU2_TR(0x415569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41556a:{NFSU2_TR(0x41556a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41556c:{NFSU2_TR(0x41556c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41556d:{NFSU2_TR(0x41556d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x140ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415573:{NFSU2_TR(0x415573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415574:L415574:{c.instructions+=7;NFSU2_TR(0x415574);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415578:{NFSU2_TR(0x415578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415579:{NFSU2_TR(0x415579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41557a:{NFSU2_TR(0x41557a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41557b:{NFSU2_TR(0x41557b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41557c:{NFSU2_TR(0x41557c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x140ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415582:{NFSU2_TR(0x415582);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415590:L415590:{c.instructions+=14;NFSU2_TR(0x415590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415594:{NFSU2_TR(0x415594);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415595:{NFSU2_TR(0x415595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415596:{NFSU2_TR(0x415596);
__builtin_memmove((R+28),(R+4),4);
}
B415598:{NFSU2_TR(0x415598);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41559e:{NFSU2_TR(0x41559e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4155a1:{NFSU2_TR(0x4155a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B4155a4:{NFSU2_TR(0x4155a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4155a5:{NFSU2_TR(0x4155a5);
__builtin_memmove((R+8),(R+4),4);
}
B4155a7:{NFSU2_TR(0x4155a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4155a8:{NFSU2_TR(0x4155a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4155ac:{NFSU2_TR(0x4155ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4155ad:{NFSU2_TR(0x4155ad);
__builtin_memmove((R+4),(R+28),4);
}
B4155af:{NFSU2_TR(0x4155af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4155b4ull));
TAIL_STATIC(0x404ef0u,404);
}
B4155b4:L4155b4:{c.instructions+=20;NFSU2_TR(0x4155b4);
__builtin_memmove((R+8),(R+0),4);
}
B4155b6:{NFSU2_TR(0x4155b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4155b9:{NFSU2_TR(0x4155b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4155bc:{NFSU2_TR(0x4155bc);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4155bf:{NFSU2_TR(0x4155bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4155c2:{NFSU2_TR(0x4155c2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4155c4:{NFSU2_TR(0x4155c4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4155c7:{NFSU2_TR(0x4155c7);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4155ca:{NFSU2_TR(0x4155ca);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4155cc:{NFSU2_TR(0x4155cc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4155ce:{NFSU2_TR(0x4155ce);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4155d0:{NFSU2_TR(0x4155d0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4155d2:{NFSU2_TR(0x4155d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4155d4:{NFSU2_TR(0x4155d4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4155d6:{NFSU2_TR(0x4155d6);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4155d8:{NFSU2_TR(0x4155d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4155da:{NFSU2_TR(0x4155da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4155de:{NFSU2_TR(0x4155de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4155e0:{NFSU2_TR(0x4155e0);
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
B4155e3:{NFSU2_TR(0x4155e3);
if(r1(R+514)){{goto L415619;}}
}
B4155e5:L4155e5:{c.instructions+=1;NFSU2_TR(0x4155e5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+24,u32(s32(s8(r1(U+0)))));
}
B4155e8:L4155e8:{c.instructions+=2;NFSU2_TR(0x4155e8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4155ea:{NFSU2_TR(0x4155ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415619;}}
}
B4155ec:L4155ec:{c.instructions+=19;NFSU2_TR(0x4155ec);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4155ef:{NFSU2_TR(0x4155ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4155f2:{NFSU2_TR(0x4155f2);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4155f5:{NFSU2_TR(0x4155f5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4155f6:{NFSU2_TR(0x4155f6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4155f9:{NFSU2_TR(0x4155f9);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4155fc:{NFSU2_TR(0x4155fc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4155fe:{NFSU2_TR(0x4155fe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B415600:{NFSU2_TR(0x415600);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B415602:{NFSU2_TR(0x415602);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B415604:{NFSU2_TR(0x415604);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B415606:{NFSU2_TR(0x415606);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B415608:{NFSU2_TR(0x415608);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B41560a:{NFSU2_TR(0x41560a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41560c:{NFSU2_TR(0x41560c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41560e:{NFSU2_TR(0x41560e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B415612:{NFSU2_TR(0x415612);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415614:{NFSU2_TR(0x415614);
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
B415617:{NFSU2_TR(0x415617);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4155e8u);}goto L4155e8;}}
}
B415619:L415619:{c.instructions+=5;NFSU2_TR(0x415619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41561a:{NFSU2_TR(0x41561a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41561c:{NFSU2_TR(0x41561c);
__builtin_memmove((R+0),(R+8),4);
}
B41561e:{NFSU2_TR(0x41561e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41561f:{NFSU2_TR(0x41561f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415630:L415630:{c.instructions+=11;NFSU2_TR(0x415630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415631:{NFSU2_TR(0x415631);
__builtin_memmove((R+20),(R+16),4);
}
B415633:{NFSU2_TR(0x415633);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B415636:{NFSU2_TR(0x415636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B41563c:{NFSU2_TR(0x41563c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41563d:{NFSU2_TR(0x41563d);
__builtin_memmove((R+12),(R+4),4);
}
B41563f:{NFSU2_TR(0x41563f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B415641:{NFSU2_TR(0x415641);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415643:{NFSU2_TR(0x415643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415644:{NFSU2_TR(0x415644);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415645:{NFSU2_TR(0x415645);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41566c;}}
}
B415647:L415647:{c.instructions+=16;NFSU2_TR(0x415647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41564a:{NFSU2_TR(0x41564a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41564d:{NFSU2_TR(0x41564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415650:{NFSU2_TR(0x415650);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415653:{NFSU2_TR(0x415653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415656:{NFSU2_TR(0x415656);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B415658:{NFSU2_TR(0x415658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41565a:{NFSU2_TR(0x41565a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41565d:{NFSU2_TR(0x41565d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415660:{NFSU2_TR(0x415660);
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
B415663:{NFSU2_TR(0x415663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415664:{NFSU2_TR(0x415664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415665:{NFSU2_TR(0x415665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415666:{NFSU2_TR(0x415666);
__builtin_memmove((R+16),(R+20),4);
}
B415668:{NFSU2_TR(0x415668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415669:{NFSU2_TR(0x415669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41566c:L41566c:{c.instructions+=2;NFSU2_TR(0x41566c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41566e:{NFSU2_TR(0x41566e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4156d4;}}
}
B415670:L415670:{c.instructions+=17;NFSU2_TR(0x415670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B415673:{NFSU2_TR(0x415673);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415676:{NFSU2_TR(0x415676);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415679:{NFSU2_TR(0x415679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41567c:{NFSU2_TR(0x41567c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41567d:{NFSU2_TR(0x41567d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B415681:{NFSU2_TR(0x415681);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415685:{NFSU2_TR(0x415685);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415688:{NFSU2_TR(0x415688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415689:{NFSU2_TR(0x415689);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41568c:{NFSU2_TR(0x41568c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415690:{NFSU2_TR(0x415690);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415691:{NFSU2_TR(0x415691);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415695:{NFSU2_TR(0x415695);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415698:{NFSU2_TR(0x415698);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41569b:{NFSU2_TR(0x41569b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41569f:{NFSU2_TR(0x41569f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4156a4ull));
TAIL_STATIC(0x43cf90u,43c);
}
B4156a4:L4156a4:{c.instructions+=19;NFSU2_TR(0x4156a4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4156a8:{NFSU2_TR(0x4156a8);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4156ab:{NFSU2_TR(0x4156ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4156ae:{NFSU2_TR(0x4156ae);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4156b1:{NFSU2_TR(0x4156b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4156b4:{NFSU2_TR(0x4156b4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4156b8:{NFSU2_TR(0x4156b8);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4156bb:{NFSU2_TR(0x4156bb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4156bf:{NFSU2_TR(0x4156bf);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4156c1:{NFSU2_TR(0x4156c1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4156c3:{NFSU2_TR(0x4156c3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4156c6:{NFSU2_TR(0x4156c6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4156c9:{NFSU2_TR(0x4156c9);
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
B4156cb:{NFSU2_TR(0x4156cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4156cc:{NFSU2_TR(0x4156cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4156cd:{NFSU2_TR(0x4156cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4156ce:{NFSU2_TR(0x4156ce);
__builtin_memmove((R+16),(R+20),4);
}
B4156d0:{NFSU2_TR(0x4156d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4156d1:{NFSU2_TR(0x4156d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4156d4:L4156d4:{c.instructions+=12;NFSU2_TR(0x4156d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4156d7:{NFSU2_TR(0x4156d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4156dd:{NFSU2_TR(0x4156dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4156e0:{NFSU2_TR(0x4156e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B4156e3:{NFSU2_TR(0x4156e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4156e4:{NFSU2_TR(0x4156e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4156e5:{NFSU2_TR(0x4156e5);
__builtin_memmove((R+0),(R+8),4);
}
B4156e7:{NFSU2_TR(0x4156e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4156eb:{NFSU2_TR(0x4156eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4156ec:{NFSU2_TR(0x4156ec);
__builtin_memmove((R+4),(R+12),4);
}
B4156ee:{NFSU2_TR(0x4156ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4156f2:{NFSU2_TR(0x4156f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4156f7ull));
TAIL_STATIC(0x404ef0u,404);
}
B4156f7:L4156f7:{c.instructions+=10;NFSU2_TR(0x4156f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4156fb:{NFSU2_TR(0x4156fb);
__builtin_memmove((R+28),(R+0),4);
}
B4156fd:{NFSU2_TR(0x4156fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B415700:{NFSU2_TR(0x415700);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B415703:{NFSU2_TR(0x415703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415704:{NFSU2_TR(0x415704);
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
B415706:{NFSU2_TR(0x415706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415707:{NFSU2_TR(0x415707);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41570b:{NFSU2_TR(0x41570b);
__builtin_memmove((R+24),(R+28),4);
}
B41570d:{NFSU2_TR(0x41570d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415712ull));
TAIL_STATIC(0x43ce10u,43c);
}
B415712:L415712:{c.instructions+=7;NFSU2_TR(0x415712);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B415716:{NFSU2_TR(0x415716);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41571a:{NFSU2_TR(0x41571a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41571d:{NFSU2_TR(0x41571d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B415720:{NFSU2_TR(0x415720);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415722:{NFSU2_TR(0x415722);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B415725:{NFSU2_TR(0x415725);
if(r1(R+514)){{goto L4157db;}}
}
B41572b:L41572b:{c.instructions+=4;NFSU2_TR(0x41572b);
__builtin_memmove((R+0),gp(0x7837ac),4);
}
B415730:{NFSU2_TR(0x415730);
__builtin_memmove((R+4),gp(0x890118),4);
}
B415736:{NFSU2_TR(0x415736);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41573a:{NFSU2_TR(0x41573a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41573full));
TAIL_STATIC(0x402000u,402);
}
B41573f:L41573f:{c.instructions+=4;NFSU2_TR(0x41573f);
{u32 ea_=u32(u32(7878580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B415745:{NFSU2_TR(0x415745);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415747:{NFSU2_TR(0x415747);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41574a:{NFSU2_TR(0x41574a);
if(r1(R+514)){{goto L415756;}}
}
B41574c:L41574c:{c.instructions+=2;NFSU2_TR(0x41574c);
__builtin_memmove((R+4),gp(0x7837b0),4);
}
B415752:{NFSU2_TR(0x415752);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415756:L415756:{c.instructions+=8;NFSU2_TR(0x415756);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B415759:{NFSU2_TR(0x415759);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41575d:{NFSU2_TR(0x41575d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415761:{NFSU2_TR(0x415761);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415764:{NFSU2_TR(0x415764);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415766:{NFSU2_TR(0x415766);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41576a:{NFSU2_TR(0x41576a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41576e:{NFSU2_TR(0x41576e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4157db;}}
}
B415770:L415770:{c.instructions+=3;NFSU2_TR(0x415770);
__builtin_memmove((R+28),(R+24),4);
}
B415772:{NFSU2_TR(0x415772);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B415775:{NFSU2_TR(0x415775);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+12)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415777:L415777:{c.instructions+=4;NFSU2_TR(0x415777);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41577a:{NFSU2_TR(0x41577a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41577b:{NFSU2_TR(0x41577b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41577c:{NFSU2_TR(0x41577c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415781ull));
TAIL_STATIC(0x43ce10u,43c);
}
B415781:L415781:{c.instructions+=8;NFSU2_TR(0x415781);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B415785:{NFSU2_TR(0x415785);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415789:{NFSU2_TR(0x415789);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41578d:{NFSU2_TR(0x41578d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41578e:{NFSU2_TR(0x41578e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415791:{NFSU2_TR(0x415791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415792:{NFSU2_TR(0x415792);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415796:{NFSU2_TR(0x415796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41579bull));
TAIL_STATIC(0x43ce10u,43c);
}
B41579b:L41579b:{c.instructions+=14;NFSU2_TR(0x41579b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41579f:{NFSU2_TR(0x41579f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4157a3:{NFSU2_TR(0x4157a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4157a7:{NFSU2_TR(0x4157a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4157aa:{NFSU2_TR(0x4157aa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4157ae:{NFSU2_TR(0x4157ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4157b2:{NFSU2_TR(0x4157b2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4157b6:{NFSU2_TR(0x4157b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4157ba:{NFSU2_TR(0x4157ba);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4157be:{NFSU2_TR(0x4157be);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4157c2:{NFSU2_TR(0x4157c2);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4157c5:{NFSU2_TR(0x4157c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4157c7:{NFSU2_TR(0x4157c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4157ca:{NFSU2_TR(0x4157ca);
if(r1(R+518)){{goto L4157d7;}}
}
B4157cc:L4157cc:{c.instructions+=5;NFSU2_TR(0x4157cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B4157cf:{NFSU2_TR(0x4157cf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4157d0:{NFSU2_TR(0x4157d0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B4157d3:{NFSU2_TR(0x4157d3);
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
B4157d5:{NFSU2_TR(0x4157d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x415777u);}goto L415777;}}
}
B4157d7:L4157d7:{c.instructions+=1;NFSU2_TR(0x4157d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4157db:L4157db:{c.instructions+=5;NFSU2_TR(0x4157db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4157de:{NFSU2_TR(0x4157de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4157df:{NFSU2_TR(0x4157df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4157e1:{NFSU2_TR(0x4157e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4157e5:{NFSU2_TR(0x4157e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L415859;}}
}
B4157e7:L4157e7:{c.instructions+=21;NFSU2_TR(0x4157e7);
__builtin_memmove((R+8),(R+0),4);
}
B4157e9:{NFSU2_TR(0x4157e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4157ec:{NFSU2_TR(0x4157ec);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4157f0:{NFSU2_TR(0x4157f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4157f3:{NFSU2_TR(0x4157f3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4157f5:{NFSU2_TR(0x4157f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4157f6:{NFSU2_TR(0x4157f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4157fa:{NFSU2_TR(0x4157fa);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4157fe:{NFSU2_TR(0x4157fe);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415801:{NFSU2_TR(0x415801);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415804:{NFSU2_TR(0x415804);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415808:{NFSU2_TR(0x415808);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41580b:{NFSU2_TR(0x41580b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41580e:{NFSU2_TR(0x41580e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415812:{NFSU2_TR(0x415812);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415815:{NFSU2_TR(0x415815);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415819:{NFSU2_TR(0x415819);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41581d:{NFSU2_TR(0x41581d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415820:{NFSU2_TR(0x415820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415821:{NFSU2_TR(0x415821);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415822:{NFSU2_TR(0x415822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415827ull));
TAIL_STATIC(0x43cf90u,43c);
}
B415827:L415827:{c.instructions+=19;NFSU2_TR(0x415827);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41582b:{NFSU2_TR(0x41582b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41582e:{NFSU2_TR(0x41582e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415831:{NFSU2_TR(0x415831);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415834:{NFSU2_TR(0x415834);
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
B415837:{NFSU2_TR(0x415837);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41583b:{NFSU2_TR(0x41583b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41583e:{NFSU2_TR(0x41583e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B415842:{NFSU2_TR(0x415842);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B415844:{NFSU2_TR(0x415844);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415846:{NFSU2_TR(0x415846);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415849:{NFSU2_TR(0x415849);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41584c:{NFSU2_TR(0x41584c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415850:{NFSU2_TR(0x415850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415851:{NFSU2_TR(0x415851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415852:{NFSU2_TR(0x415852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415853:{NFSU2_TR(0x415853);
__builtin_memmove((R+16),(R+20),4);
}
B415855:{NFSU2_TR(0x415855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415856:{NFSU2_TR(0x415856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415859:L415859:{c.instructions+=3;NFSU2_TR(0x415859);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41585b:{NFSU2_TR(0x41585b);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41585f:{NFSU2_TR(0x41585f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L415872;}}
}
B415861:L415861:{c.instructions+=6;NFSU2_TR(0x415861);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B415864:{NFSU2_TR(0x415864);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415868:{NFSU2_TR(0x415868);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41586b:{NFSU2_TR(0x41586b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41586e:{NFSU2_TR(0x41586e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B415870:{NFSU2_TR(0x415870);
{goto L41587f;}
}
B415872:L415872:{c.instructions+=3;NFSU2_TR(0x415872);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415878:{NFSU2_TR(0x415878);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41587c:{NFSU2_TR(0x41587c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B41587f:L41587f:{c.instructions+=27;NFSU2_TR(0x41587f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415882:{NFSU2_TR(0x415882);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B415885:{NFSU2_TR(0x415885);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415888:{NFSU2_TR(0x415888);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41588a:{NFSU2_TR(0x41588a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41588c:{NFSU2_TR(0x41588c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41588d:{NFSU2_TR(0x41588d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415891:{NFSU2_TR(0x415891);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415895:{NFSU2_TR(0x415895);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415898:{NFSU2_TR(0x415898);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41589b:{NFSU2_TR(0x41589b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41589f:{NFSU2_TR(0x41589f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4158a2:{NFSU2_TR(0x4158a2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4158a5:{NFSU2_TR(0x4158a5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4158a9:{NFSU2_TR(0x4158a9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4158ac:{NFSU2_TR(0x4158ac);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4158ae:{NFSU2_TR(0x4158ae);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4158b0:{NFSU2_TR(0x4158b0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4158b2:{NFSU2_TR(0x4158b2);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B4158b4:{NFSU2_TR(0x4158b4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4158b6:{NFSU2_TR(0x4158b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4158b9:{NFSU2_TR(0x4158b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158ba:{NFSU2_TR(0x4158ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158bb:{NFSU2_TR(0x4158bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4158bd:{NFSU2_TR(0x4158bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4158c0:{NFSU2_TR(0x4158c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158c1:{NFSU2_TR(0x4158c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4158c6ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4158c6:L4158c6:{c.instructions+=8;NFSU2_TR(0x4158c6);
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
B4158c9:{NFSU2_TR(0x4158c9);
__builtin_memmove((R+0),(R+28),4);
}
B4158cb:{NFSU2_TR(0x4158cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4158cc:{NFSU2_TR(0x4158cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4158cd:{NFSU2_TR(0x4158cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4158ce:{NFSU2_TR(0x4158ce);
__builtin_memmove((R+16),(R+20),4);
}
B4158d0:{NFSU2_TR(0x4158d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4158d1:{NFSU2_TR(0x4158d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4158e0:L4158e0:{c.instructions+=11;NFSU2_TR(0x4158e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158e1:{NFSU2_TR(0x4158e1);
__builtin_memmove((R+20),(R+16),4);
}
B4158e3:{NFSU2_TR(0x4158e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4158e6:{NFSU2_TR(0x4158e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B4158e9:{NFSU2_TR(0x4158e9);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4158ee:{NFSU2_TR(0x4158ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158ef:{NFSU2_TR(0x4158ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158f0:{NFSU2_TR(0x4158f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4158f1:{NFSU2_TR(0x4158f1);
__builtin_memmove((R+28),(R+4),4);
}
B4158f3:{NFSU2_TR(0x4158f3);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4158f9:{NFSU2_TR(0x4158f9);
if(r1(R+518)){{goto L415b64;}}
}
B4158ff:L4158ff:{c.instructions+=40;NFSU2_TR(0x4158ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415902:{NFSU2_TR(0x415902);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415908:{NFSU2_TR(0x415908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41590a:{NFSU2_TR(0x41590a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41590e:{NFSU2_TR(0x41590e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415911:{NFSU2_TR(0x415911);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415914:{NFSU2_TR(0x415914);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415917:{NFSU2_TR(0x415917);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41591a:{NFSU2_TR(0x41591a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41591e:{NFSU2_TR(0x41591e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415920:{NFSU2_TR(0x415920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B415922:{NFSU2_TR(0x415922);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B415924:{NFSU2_TR(0x415924);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415928:{NFSU2_TR(0x415928);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41592a:{NFSU2_TR(0x41592a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41592d:{NFSU2_TR(0x41592d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B41592f:{NFSU2_TR(0x41592f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415933:{NFSU2_TR(0x415933);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B415935:{NFSU2_TR(0x415935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415938:{NFSU2_TR(0x415938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41593a:{NFSU2_TR(0x41593a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41593d:{NFSU2_TR(0x41593d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41593f:{NFSU2_TR(0x41593f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415943:{NFSU2_TR(0x415943);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B415945:{NFSU2_TR(0x415945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B415948:{NFSU2_TR(0x415948);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41594a:{NFSU2_TR(0x41594a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41594e:{NFSU2_TR(0x41594e);
__builtin_memmove((R+12),(R+24),4);
}
B415950:{NFSU2_TR(0x415950);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B415958:{NFSU2_TR(0x415958);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41595a:{NFSU2_TR(0x41595a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B41595c:{NFSU2_TR(0x41595c);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B41595e:{NFSU2_TR(0x41595e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415960:{NFSU2_TR(0x415960);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415962:{NFSU2_TR(0x415962);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415966:{NFSU2_TR(0x415966);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41596a:{NFSU2_TR(0x41596a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B415970:{NFSU2_TR(0x415970);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415972:{NFSU2_TR(0x415972);
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
B415975:{NFSU2_TR(0x415975);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L415b64;}}
}
B41597b:L41597b:{c.instructions+=5;NFSU2_TR(0x41597b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415981:{NFSU2_TR(0x415981);
{u32 ea_=u32(u32(7878608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B415987:{NFSU2_TR(0x415987);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415989:{NFSU2_TR(0x415989);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41598c:{NFSU2_TR(0x41598c);
if(r1(R+514)){{goto L415b59;}}
}
B415992:L415992:{c.instructions+=5;NFSU2_TR(0x415992);
u8 U[12];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B415999:{NFSU2_TR(0x415999);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B41599c:{NFSU2_TR(0x41599c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4159a0:{NFSU2_TR(0x4159a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4159a4:{NFSU2_TR(0x4159a4);
{goto L4159b0;}
}
B4159a6:L4159a6:{c.instructions+=2;NFSU2_TR(0x4159a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4159a9:{NFSU2_TR(0x4159a9);
__builtin_memmove((R+16),(R+16),4);
}
B4159b0:L4159b0:{c.instructions+=3;NFSU2_TR(0x4159b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B4159b3:{NFSU2_TR(0x4159b3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4159b5:{NFSU2_TR(0x4159b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415b59;}}
}
B4159bb:L4159bb:{c.instructions+=3;NFSU2_TR(0x4159bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4159c2:{NFSU2_TR(0x4159c2);
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
B4159c4:{NFSU2_TR(0x4159c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4159d0;}}
}
B4159c6:L4159c6:{c.instructions+=4;NFSU2_TR(0x4159c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4159c8:{NFSU2_TR(0x4159c8);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4159cb:{NFSU2_TR(0x4159cb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4159ce:{NFSU2_TR(0x4159ce);
{goto L4159d9;}
}
B4159d0:L4159d0:{c.instructions+=3;NFSU2_TR(0x4159d0);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4159d3:{NFSU2_TR(0x4159d3);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4159d6:{NFSU2_TR(0x4159d6);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4159d9:L4159d9:{c.instructions+=22;NFSU2_TR(0x4159d9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4159db:{NFSU2_TR(0x4159db);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4159df:{NFSU2_TR(0x4159df);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4159e3:{NFSU2_TR(0x4159e3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4159e5:{NFSU2_TR(0x4159e5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4159e7:{NFSU2_TR(0x4159e7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4159e9:{NFSU2_TR(0x4159e9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4159eb:{NFSU2_TR(0x4159eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4159ed:{NFSU2_TR(0x4159ed);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4159ef:{NFSU2_TR(0x4159ef);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4159f1:{NFSU2_TR(0x4159f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4159f3:{NFSU2_TR(0x4159f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4159f7:{NFSU2_TR(0x4159f7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4159fb:{NFSU2_TR(0x4159fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4159ff:{NFSU2_TR(0x4159ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415a03:{NFSU2_TR(0x415a03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a04:{NFSU2_TR(0x415a04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a05:{NFSU2_TR(0x415a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a06:{NFSU2_TR(0x415a06);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415a0a:{NFSU2_TR(0x415a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415a0e:{NFSU2_TR(0x415a0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a0f:{NFSU2_TR(0x415a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415a14ull));
TAIL_STATIC(0x43d090u,43d);
}
B415a14:L415a14:{c.instructions+=9;NFSU2_TR(0x415a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415a18:{NFSU2_TR(0x415a18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a19:{NFSU2_TR(0x415a19);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B415a1d:{NFSU2_TR(0x415a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a1e:{NFSU2_TR(0x415a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415a22:{NFSU2_TR(0x415a22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a23:{NFSU2_TR(0x415a23);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415a27:{NFSU2_TR(0x415a27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a28:{NFSU2_TR(0x415a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415a2dull));
TAIL_STATIC(0x43d090u,43d);
}
B415a2d:L415a2d:{c.instructions+=16;NFSU2_TR(0x415a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415a31:{NFSU2_TR(0x415a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415a35:{NFSU2_TR(0x415a35);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415a39:{NFSU2_TR(0x415a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a3d:{NFSU2_TR(0x415a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415a41:{NFSU2_TR(0x415a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a45:{NFSU2_TR(0x415a45);
__builtin_memmove((R+0),gp(0x81cbb0),4);
}
B415a4a:{NFSU2_TR(0x415a4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a4e:{NFSU2_TR(0x415a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415a52:{NFSU2_TR(0x415a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a56:{NFSU2_TR(0x415a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415a5a:{NFSU2_TR(0x415a5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B415a5d:{NFSU2_TR(0x415a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B415a5f:{NFSU2_TR(0x415a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a63:{NFSU2_TR(0x415a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415a67:{NFSU2_TR(0x415a67);
if(r1(R+518)){{goto L415a88;}}
}
B415a69:L415a69:{c.instructions+=4;NFSU2_TR(0x415a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415a6d:{NFSU2_TR(0x415a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415a6e:{NFSU2_TR(0x415a6e);
w4(R+4,u32(0x81e380ull));
}
B415a73:{NFSU2_TR(0x415a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415a78ull));
TAIL_STATIC(0x576790u,576);
}
B415a78:L415a78:{c.instructions+=4;NFSU2_TR(0x415a78);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415a7c:{NFSU2_TR(0x415a7c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415a82:{NFSU2_TR(0x415a82);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B415a86:{NFSU2_TR(0x415a86);
{goto L415ab3;}
}
B415a88:L415a88:{c.instructions+=6;NFSU2_TR(0x415a88);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415a8c:{NFSU2_TR(0x415a8c);
{u32 ea_=u32(u32(7878608u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B415a92:{NFSU2_TR(0x415a92);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B415a98:{NFSU2_TR(0x415a98);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415a9a:{NFSU2_TR(0x415a9a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B415a9d:{NFSU2_TR(0x415a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L415aa7;}}
}
B415a9f:L415a9f:{c.instructions+=2;NFSU2_TR(0x415a9f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415aa1:{NFSU2_TR(0x415aa1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415aa7:L415aa7:{c.instructions+=3;NFSU2_TR(0x415aa7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415aad:{NFSU2_TR(0x415aad);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B415aaf:{NFSU2_TR(0x415aaf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415ab3:L415ab3:{c.instructions+=18;NFSU2_TR(0x415ab3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415ab5:{NFSU2_TR(0x415ab5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B415ab7:{NFSU2_TR(0x415ab7);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415aba:{NFSU2_TR(0x415aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415abe:{NFSU2_TR(0x415abe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415ac2:{NFSU2_TR(0x415ac2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B415ac5:{NFSU2_TR(0x415ac5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415ac9:{NFSU2_TR(0x415ac9);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B415ad1:{NFSU2_TR(0x415ad1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B415ad3:{NFSU2_TR(0x415ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415ad7:{NFSU2_TR(0x415ad7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B415adb:{NFSU2_TR(0x415adb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415adf:{NFSU2_TR(0x415adf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415ae1:{NFSU2_TR(0x415ae1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415ae5:{NFSU2_TR(0x415ae5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415ae9:{NFSU2_TR(0x415ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415aed:{NFSU2_TR(0x415aed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B415aef:{NFSU2_TR(0x415aef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415b37;}}
}
B415af1:L415af1:{c.instructions+=3;NFSU2_TR(0x415af1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B415af4:{NFSU2_TR(0x415af4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415af6:{NFSU2_TR(0x415af6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415b37;}}
}
B415af8:L415af8:{c.instructions+=12;NFSU2_TR(0x415af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415afc:{NFSU2_TR(0x415afc);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415afe:{NFSU2_TR(0x415afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415b01:{NFSU2_TR(0x415b01);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B415b06:{NFSU2_TR(0x415b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B415b0d:{NFSU2_TR(0x415b0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B415b11:{NFSU2_TR(0x415b11);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B415b16:{NFSU2_TR(0x415b16);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B415b19:{NFSU2_TR(0x415b19);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B415b20:{NFSU2_TR(0x415b20);
__builtin_memmove((R+4),(R+28),4);
}
B415b22:{NFSU2_TR(0x415b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B415b2c:{NFSU2_TR(0x415b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415b31ull));
TAIL_STATIC(0x405270u,405);
}
B415b31:L415b31:{c.instructions+=2;NFSU2_TR(0x415b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415b35:{NFSU2_TR(0x415b35);
{goto L415b39;}
}
B415b37:L415b37:{c.instructions+=1;NFSU2_TR(0x415b37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415b39:L415b39:{c.instructions+=9;NFSU2_TR(0x415b39);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415b3d:{NFSU2_TR(0x415b3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B415b40:{NFSU2_TR(0x415b40);
{u32 ea_=u32(u32(7878608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B415b46:{NFSU2_TR(0x415b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415b4a:{NFSU2_TR(0x415b4a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B415b4b:{NFSU2_TR(0x415b4b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B415b4e:{NFSU2_TR(0x415b4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415b50:{NFSU2_TR(0x415b50);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B415b53:{NFSU2_TR(0x415b53);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4159a6u);}goto L4159a6;}}
}
B415b59:L415b59:{c.instructions+=3;NFSU2_TR(0x415b59);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B415b5c:{NFSU2_TR(0x415b5c);
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
B415b5e:{NFSU2_TR(0x415b5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415b62;}}
}
B415b60:L415b60:{c.instructions+=1;NFSU2_TR(0x415b60);
__builtin_memmove((R+0),(R+12),4);
}
B415b62:L415b62:{c.instructions+=1;NFSU2_TR(0x415b62);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B415b64:L415b64:{c.instructions+=6;NFSU2_TR(0x415b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415b65:{NFSU2_TR(0x415b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415b66:{NFSU2_TR(0x415b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415b67:{NFSU2_TR(0x415b67);
__builtin_memmove((R+16),(R+20),4);
}
B415b69:{NFSU2_TR(0x415b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415b6a:{NFSU2_TR(0x415b6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415b70:L415b70:{c.instructions+=14;NFSU2_TR(0x415b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415b71:{NFSU2_TR(0x415b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415b75:{NFSU2_TR(0x415b75);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415b79:{NFSU2_TR(0x415b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B415b7b:{NFSU2_TR(0x415b7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415b7c:{NFSU2_TR(0x415b7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B415b80:{NFSU2_TR(0x415b80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415b81:{NFSU2_TR(0x415b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B415b83:{NFSU2_TR(0x415b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B415b85:{NFSU2_TR(0x415b85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415b86:{NFSU2_TR(0x415b86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415b87:{NFSU2_TR(0x415b87);
__builtin_memmove((R+4),(R+12),4);
}
B415b89:{NFSU2_TR(0x415b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415b8d:{NFSU2_TR(0x415b8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415b90ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B415b90:L415b90:{c.instructions+=2;NFSU2_TR(0x415b90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B415b92:{NFSU2_TR(0x415b92);
if(r1(R+518)){{goto L415baf;}}
}
B415b94:L415b94:{c.instructions+=2;NFSU2_TR(0x415b94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415b96:{NFSU2_TR(0x415b96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415ba2;}}
}
B415b98:L415b98:{c.instructions+=2;NFSU2_TR(0x415b98);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415b9b:{NFSU2_TR(0x415b9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415ba2;}}
}
B415b9d:L415b9d:{c.instructions+=2;NFSU2_TR(0x415b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415ba0:{NFSU2_TR(0x415ba0);
{goto L415bb1;}
}
B415ba2:L415ba2:{c.instructions+=2;NFSU2_TR(0x415ba2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415ba5:{NFSU2_TR(0x415ba5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415baf;}}
}
B415ba7:L415ba7:{c.instructions+=3;NFSU2_TR(0x415ba7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415baa:{NFSU2_TR(0x415baa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415bad:{NFSU2_TR(0x415bad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415bb1;}}
}
B415baf:L415baf:{c.instructions+=1;NFSU2_TR(0x415baf);
__builtin_memmove((R+4),(R+20),4);
}
B415bb1:L415bb1:{c.instructions+=2;NFSU2_TR(0x415bb1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B415bb4:{NFSU2_TR(0x415bb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415cc7;}}
}
B415bba:L415bba:{c.instructions+=2;NFSU2_TR(0x415bba);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415bbd:{NFSU2_TR(0x415bbd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415cc7;}}
}
B415bc3:L415bc3:{c.instructions+=3;NFSU2_TR(0x415bc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B415bc7:{NFSU2_TR(0x415bc7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B415bcb:{NFSU2_TR(0x415bcb);
if(r1(R+518)){{goto L415be4;}}
}
B415bcd:L415bcd:{c.instructions+=2;NFSU2_TR(0x415bcd);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B415bd2:{NFSU2_TR(0x415bd2);
if(r1(R+518)){{goto L415be4;}}
}
B415bd4:L415bd4:{c.instructions+=3;NFSU2_TR(0x415bd4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B415bd7:{NFSU2_TR(0x415bd7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415bd9:{NFSU2_TR(0x415bd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415be4;}}
}
B415bdb:L415bdb:{c.instructions+=2;NFSU2_TR(0x415bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B415be2:{NFSU2_TR(0x415be2);
{goto L415be6;}
}
B415be4:L415be4:{c.instructions+=1;NFSU2_TR(0x415be4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B415be6:L415be6:{c.instructions+=3;NFSU2_TR(0x415be6);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B415bed:{NFSU2_TR(0x415bed);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B415bef:{NFSU2_TR(0x415bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415cc7;}}
}
B415bf5:L415bf5:{c.instructions+=3;NFSU2_TR(0x415bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B415bfd:{NFSU2_TR(0x415bfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415c00:{NFSU2_TR(0x415c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B415c03:L415c03:{c.instructions+=2;NFSU2_TR(0x415c03);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415c06:{NFSU2_TR(0x415c06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c5d;}}
}
B415c08:L415c08:{c.instructions+=2;NFSU2_TR(0x415c08);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415c0b:{NFSU2_TR(0x415c0b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415c5d;}}
}
B415c0d:L415c0d:{c.instructions+=3;NFSU2_TR(0x415c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B415c0f:{NFSU2_TR(0x415c0f);
__builtin_memmove((R+4),(R+12),4);
}
B415c11:{NFSU2_TR(0x415c11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415c14ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B415c14:L415c14:{c.instructions+=2;NFSU2_TR(0x415c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B415c16:{NFSU2_TR(0x415c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415c1c;}}
}
B415c18:L415c18:{c.instructions+=2;NFSU2_TR(0x415c18);
__builtin_memmove((R+4),(R+24),4);
}
B415c1a:{NFSU2_TR(0x415c1a);
{goto L415c2b;}
}
B415c1c:L415c1c:{c.instructions+=2;NFSU2_TR(0x415c1c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415c1e:{NFSU2_TR(0x415c1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c28;}}
}
B415c20:L415c20:{c.instructions+=3;NFSU2_TR(0x415c20);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415c23:{NFSU2_TR(0x415c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415c26:{NFSU2_TR(0x415c26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c2b;}}
}
B415c28:L415c28:{c.instructions+=1;NFSU2_TR(0x415c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415c2b:L415c2b:{c.instructions+=3;NFSU2_TR(0x415c2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B415c2f:{NFSU2_TR(0x415c2f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B415c33:{NFSU2_TR(0x415c33);
if(r1(R+518)){{goto L415c4c;}}
}
B415c35:L415c35:{c.instructions+=2;NFSU2_TR(0x415c35);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B415c3a:{NFSU2_TR(0x415c3a);
if(r1(R+518)){{goto L415c4c;}}
}
B415c3c:L415c3c:{c.instructions+=3;NFSU2_TR(0x415c3c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B415c3f:{NFSU2_TR(0x415c3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415c41:{NFSU2_TR(0x415c41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c4c;}}
}
B415c43:L415c43:{c.instructions+=2;NFSU2_TR(0x415c43);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B415c4a:{NFSU2_TR(0x415c4a);
{goto L415c4e;}
}
B415c4c:L415c4c:{c.instructions+=1;NFSU2_TR(0x415c4c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B415c4e:L415c4e:{c.instructions+=3;NFSU2_TR(0x415c4e);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B415c55:{NFSU2_TR(0x415c55);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415c57:{NFSU2_TR(0x415c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415cdd;}}
}
B415c5d:L415c5d:{c.instructions+=2;NFSU2_TR(0x415c5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415c60:{NFSU2_TR(0x415c60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415cb3;}}
}
B415c62:L415c62:{c.instructions+=2;NFSU2_TR(0x415c62);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B415c65:{NFSU2_TR(0x415c65);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415cb3;}}
}
B415c67:L415c67:{c.instructions+=3;NFSU2_TR(0x415c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B415c69:{NFSU2_TR(0x415c69);
__builtin_memmove((R+4),(R+12),4);
}
B415c6b:{NFSU2_TR(0x415c6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415c6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B415c6e:L415c6e:{c.instructions+=2;NFSU2_TR(0x415c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B415c70:{NFSU2_TR(0x415c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415c76;}}
}
B415c72:L415c72:{c.instructions+=2;NFSU2_TR(0x415c72);
__builtin_memmove((R+4),(R+28),4);
}
B415c74:{NFSU2_TR(0x415c74);
{goto L415c85;}
}
B415c76:L415c76:{c.instructions+=2;NFSU2_TR(0x415c76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415c78:{NFSU2_TR(0x415c78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c82;}}
}
B415c7a:L415c7a:{c.instructions+=3;NFSU2_TR(0x415c7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B415c7d:{NFSU2_TR(0x415c7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415c80:{NFSU2_TR(0x415c80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415c85;}}
}
B415c82:L415c82:{c.instructions+=1;NFSU2_TR(0x415c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415c85:L415c85:{c.instructions+=3;NFSU2_TR(0x415c85);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B415c89:{NFSU2_TR(0x415c89);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B415c8d:{NFSU2_TR(0x415c8d);
if(r1(R+518)){{goto L415ca6;}}
}
B415c8f:L415c8f:{c.instructions+=2;NFSU2_TR(0x415c8f);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B415c94:{NFSU2_TR(0x415c94);
if(r1(R+518)){{goto L415ca6;}}
}
B415c96:L415c96:{c.instructions+=3;NFSU2_TR(0x415c96);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B415c99:{NFSU2_TR(0x415c99);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B415c9b:{NFSU2_TR(0x415c9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L415ca6;}}
}
B415c9d:L415c9d:{c.instructions+=2;NFSU2_TR(0x415c9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B415ca4:{NFSU2_TR(0x415ca4);
{goto L415ca8;}
}
B415ca6:L415ca6:{c.instructions+=1;NFSU2_TR(0x415ca6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B415ca8:L415ca8:{c.instructions+=3;NFSU2_TR(0x415ca8);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B415caf:{NFSU2_TR(0x415caf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415cb1:{NFSU2_TR(0x415cb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415d10;}}
}
B415cb3:L415cb3:{c.instructions+=7;NFSU2_TR(0x415cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415cb7:{NFSU2_TR(0x415cb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B415cb8:{NFSU2_TR(0x415cb8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B415cb9:{NFSU2_TR(0x415cb9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B415cba:{NFSU2_TR(0x415cba);
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
B415cbd:{NFSU2_TR(0x415cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415cc1:{NFSU2_TR(0x415cc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x415c03u);}goto L415c03;}}
}
B415cc7:L415cc7:{c.instructions+=11;NFSU2_TR(0x415cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415ccb:{NFSU2_TR(0x415ccb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415ccf:{NFSU2_TR(0x415ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415cd3:{NFSU2_TR(0x415cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415cd4:{NFSU2_TR(0x415cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415cd5:{NFSU2_TR(0x415cd5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B415cd7:{NFSU2_TR(0x415cd7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415cd9:{NFSU2_TR(0x415cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415cda:{NFSU2_TR(0x415cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415cdb:{NFSU2_TR(0x415cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415cdc:{NFSU2_TR(0x415cdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415cdd:L415cdd:{c.instructions+=5;NFSU2_TR(0x415cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415ce1:{NFSU2_TR(0x415ce1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B415ce3:{NFSU2_TR(0x415ce3);
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
B415ce5:{NFSU2_TR(0x415ce5);
__builtin_memmove((R+20),(R+24),4);
}
B415ce7:{NFSU2_TR(0x415ce7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x415cc7u);}goto L415cc7;}}
}
B415ce9:L415ce9:{c.instructions+=7;NFSU2_TR(0x415ce9);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B415cec:{NFSU2_TR(0x415cec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B415cef:{NFSU2_TR(0x415cef);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B415cf1:{NFSU2_TR(0x415cf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415cf2:{NFSU2_TR(0x415cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415cf3:{NFSU2_TR(0x415cf3);
__builtin_memmove((R+4),(R+12),4);
}
B415cf5:{NFSU2_TR(0x415cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415cfaull));
TAIL_STATIC(0x4123c0u,412);
}
B415cfa:L415cfa:{c.instructions+=11;NFSU2_TR(0x415cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415cfe:{NFSU2_TR(0x415cfe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B415d02:{NFSU2_TR(0x415d02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415d06:{NFSU2_TR(0x415d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415d07:{NFSU2_TR(0x415d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415d08:{NFSU2_TR(0x415d08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B415d0a:{NFSU2_TR(0x415d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415d0b:{NFSU2_TR(0x415d0b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415d0d:{NFSU2_TR(0x415d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415d0e:{NFSU2_TR(0x415d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415d0f:{NFSU2_TR(0x415d0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415d10:L415d10:{c.instructions+=5;NFSU2_TR(0x415d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415d14:{NFSU2_TR(0x415d14);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B415d16:{NFSU2_TR(0x415d16);
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
B415d18:{NFSU2_TR(0x415d18);
__builtin_memmove((R+20),(R+28),4);
}
B415d1a:{NFSU2_TR(0x415d1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x415cc7u);}goto L415cc7;}}
}
B415d1c:L415d1c:{c.instructions+=7;NFSU2_TR(0x415d1c);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B415d1f:{NFSU2_TR(0x415d1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B415d22:{NFSU2_TR(0x415d22);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B415d24:{NFSU2_TR(0x415d24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d25:{NFSU2_TR(0x415d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d26:{NFSU2_TR(0x415d26);
__builtin_memmove((R+4),(R+12),4);
}
B415d28:{NFSU2_TR(0x415d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415d2dull));
TAIL_STATIC(0x4123c0u,412);
}
B415d2d:L415d2d:{c.instructions+=11;NFSU2_TR(0x415d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415d31:{NFSU2_TR(0x415d31);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B415d35:{NFSU2_TR(0x415d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415d39:{NFSU2_TR(0x415d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415d3a:{NFSU2_TR(0x415d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415d3b:{NFSU2_TR(0x415d3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B415d3d:{NFSU2_TR(0x415d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415d3e:{NFSU2_TR(0x415d3e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415d40:{NFSU2_TR(0x415d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415d41:{NFSU2_TR(0x415d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415d42:{NFSU2_TR(0x415d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415d50:L415d50:{c.instructions+=10;NFSU2_TR(0x415d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d51:{NFSU2_TR(0x415d51);
__builtin_memmove((R+20),(R+16),4);
}
B415d53:{NFSU2_TR(0x415d53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B415d56:{NFSU2_TR(0x415d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B415d59:{NFSU2_TR(0x415d59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d5a:{NFSU2_TR(0x415d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B415d5d:{NFSU2_TR(0x415d5d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x14ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B415d60:{NFSU2_TR(0x415d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d61:{NFSU2_TR(0x415d61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d62:{NFSU2_TR(0x415d62);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L415d9f;}}
}
B415d64:L415d64:{c.instructions+=12;NFSU2_TR(0x415d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B415d67:{NFSU2_TR(0x415d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415d6a:{NFSU2_TR(0x415d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B415d6d:{NFSU2_TR(0x415d6d);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415d70:{NFSU2_TR(0x415d70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d71:{NFSU2_TR(0x415d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d72:{NFSU2_TR(0x415d72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d73:{NFSU2_TR(0x415d73);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B415d77:{NFSU2_TR(0x415d77);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B415d7a:{NFSU2_TR(0x415d7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d7b:{NFSU2_TR(0x415d7b);
__builtin_memmove((R+4),(R+24),4);
}
B415d7d:{NFSU2_TR(0x415d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415d82ull));
TAIL_STATIC(0x4122c0u,412);
}
B415d82:L415d82:{c.instructions+=12;NFSU2_TR(0x415d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415d85:{NFSU2_TR(0x415d85);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B415d89:{NFSU2_TR(0x415d89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B415d8d:{NFSU2_TR(0x415d8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d8e:{NFSU2_TR(0x415d8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d90:{NFSU2_TR(0x415d90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d91:{NFSU2_TR(0x415d91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d92:{NFSU2_TR(0x415d92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d93:{NFSU2_TR(0x415d93);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B415d97:{NFSU2_TR(0x415d97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415d98:{NFSU2_TR(0x415d98);
__builtin_memmove((R+4),(R+12),4);
}
B415d9a:{NFSU2_TR(0x415d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415d9full));
TAIL_STATIC(0x404cd0u,404);
}
B415d9f:L415d9f:{c.instructions+=6;NFSU2_TR(0x415d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415da0:{NFSU2_TR(0x415da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415da1:{NFSU2_TR(0x415da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B415da2:{NFSU2_TR(0x415da2);
__builtin_memmove((R+16),(R+20),4);
}
B415da4:{NFSU2_TR(0x415da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B415da5:{NFSU2_TR(0x415da5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415db0:L415db0:{c.instructions+=3;NFSU2_TR(0x415db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415db1:{NFSU2_TR(0x415db1);
__builtin_memmove((R+24),(R+4),4);
}
B415db3:{NFSU2_TR(0x415db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415db8ull));
TAIL_STATIC(0x40fea0u,40f);
}
B415db8:L415db8:{c.instructions+=2;NFSU2_TR(0x415db8);
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
B415dbd:{NFSU2_TR(0x415dbd);
if(r1(R+518)){{goto L415dc8;}}
}
B415dbf:L415dbf:{c.instructions+=2;NFSU2_TR(0x415dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415dc0:{NFSU2_TR(0x415dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415dc5ull));
TAIL_STATIC(0x575630u,575);
}
B415dc5:L415dc5:{c.instructions+=1;NFSU2_TR(0x415dc5);
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
B415dc8:L415dc8:{c.instructions+=3;NFSU2_TR(0x415dc8);
__builtin_memmove((R+0),(R+24),4);
}
B415dca:{NFSU2_TR(0x415dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415dcb:{NFSU2_TR(0x415dcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415dd0:L415dd0:{c.instructions+=8;NFSU2_TR(0x415dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415dd1:{NFSU2_TR(0x415dd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415dd2:{NFSU2_TR(0x415dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B415dd6:{NFSU2_TR(0x415dd6);
u8 U[4];
w4(U+0,u32(0x7850dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ddb:{NFSU2_TR(0x415ddb);
__builtin_memmove((R+24),(R+4),4);
}
B415ddd:{NFSU2_TR(0x415ddd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ddf:{NFSU2_TR(0x415ddf);
__builtin_memmove((R+4),(R+28),4);
}
B415de1:{NFSU2_TR(0x415de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415de6ull));
TAIL_STATIC(0x578ce0u,578);
}
B415de6:L415de6:{c.instructions+=7;NFSU2_TR(0x415de6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415de8:{NFSU2_TR(0x415de8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415dea:{NFSU2_TR(0x415dea);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415dec:{NFSU2_TR(0x415dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415df2:{NFSU2_TR(0x415df2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415df3:{NFSU2_TR(0x415df3);
__builtin_memmove((R+4),(R+28),4);
}
B415df5:{NFSU2_TR(0x415df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415dfaull));
TAIL_STATIC(0x571640u,571);
}
B415dfa:L415dfa:{c.instructions+=4;NFSU2_TR(0x415dfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((R+4),(U+0),4);
}
B415e00:{NFSU2_TR(0x415e00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e01:{NFSU2_TR(0x415e01);
__builtin_memmove((R+4),(R+28),4);
}
B415e03:{NFSU2_TR(0x415e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e08ull));
TAIL_STATIC(0x571770u,571);
}
B415e08:L415e08:{c.instructions+=4;NFSU2_TR(0x415e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B415e0e:{NFSU2_TR(0x415e0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e0f:{NFSU2_TR(0x415e0f);
__builtin_memmove((R+4),(R+28),4);
}
B415e11:{NFSU2_TR(0x415e11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e16ull));
TAIL_STATIC(0x571770u,571);
}
B415e16:L415e16:{c.instructions+=4;NFSU2_TR(0x415e16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415e1c:{NFSU2_TR(0x415e1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e1d:{NFSU2_TR(0x415e1d);
__builtin_memmove((R+4),(R+28),4);
}
B415e1f:{NFSU2_TR(0x415e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e24ull));
TAIL_STATIC(0x571770u,571);
}
B415e24:L415e24:{c.instructions+=4;NFSU2_TR(0x415e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415e2a:{NFSU2_TR(0x415e2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e2b:{NFSU2_TR(0x415e2b);
__builtin_memmove((R+4),(R+28),4);
}
B415e2d:{NFSU2_TR(0x415e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e32ull));
TAIL_STATIC(0x571770u,571);
}
B415e32:L415e32:{c.instructions+=7;NFSU2_TR(0x415e32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e34:{NFSU2_TR(0x415e34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e36:{NFSU2_TR(0x415e36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e38:{NFSU2_TR(0x415e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((R+8),(U+0),4);
}
B415e3e:{NFSU2_TR(0x415e3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e3f:{NFSU2_TR(0x415e3f);
__builtin_memmove((R+4),(R+28),4);
}
B415e41:{NFSU2_TR(0x415e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e46ull));
TAIL_STATIC(0x571640u,571);
}
B415e46:L415e46:{c.instructions+=4;NFSU2_TR(0x415e46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415e4c:{NFSU2_TR(0x415e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e4d:{NFSU2_TR(0x415e4d);
__builtin_memmove((R+4),(R+28),4);
}
B415e4f:{NFSU2_TR(0x415e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e54ull));
TAIL_STATIC(0x571770u,571);
}
B415e54:L415e54:{c.instructions+=7;NFSU2_TR(0x415e54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e56:{NFSU2_TR(0x415e56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e58:{NFSU2_TR(0x415e58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e5a:{NFSU2_TR(0x415e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415e60:{NFSU2_TR(0x415e60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e61:{NFSU2_TR(0x415e61);
__builtin_memmove((R+4),(R+28),4);
}
B415e63:{NFSU2_TR(0x415e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e68ull));
TAIL_STATIC(0x571640u,571);
}
B415e68:L415e68:{c.instructions+=4;NFSU2_TR(0x415e68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((R+8),(U+0),4);
}
B415e6e:{NFSU2_TR(0x415e6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e6f:{NFSU2_TR(0x415e6f);
__builtin_memmove((R+4),(R+28),4);
}
B415e71:{NFSU2_TR(0x415e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e76ull));
TAIL_STATIC(0x571770u,571);
}
B415e76:L415e76:{c.instructions+=7;NFSU2_TR(0x415e76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e78:{NFSU2_TR(0x415e78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e7a:{NFSU2_TR(0x415e7a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e7c:{NFSU2_TR(0x415e7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((R+0),(U+0),4);
}
B415e82:{NFSU2_TR(0x415e82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e83:{NFSU2_TR(0x415e83);
__builtin_memmove((R+4),(R+28),4);
}
B415e85:{NFSU2_TR(0x415e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e8aull));
TAIL_STATIC(0x571640u,571);
}
B415e8a:L415e8a:{c.instructions+=4;NFSU2_TR(0x415e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((R+4),(U+0),4);
}
B415e90:{NFSU2_TR(0x415e90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e91:{NFSU2_TR(0x415e91);
__builtin_memmove((R+4),(R+28),4);
}
B415e93:{NFSU2_TR(0x415e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415e98ull));
TAIL_STATIC(0x571710u,571);
}
B415e98:L415e98:{c.instructions+=7;NFSU2_TR(0x415e98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e9a:{NFSU2_TR(0x415e9a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e9c:{NFSU2_TR(0x415e9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415e9e:{NFSU2_TR(0x415e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((R+8),(U+0),4);
}
B415ea4:{NFSU2_TR(0x415ea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ea5:{NFSU2_TR(0x415ea5);
__builtin_memmove((R+4),(R+28),4);
}
B415ea7:{NFSU2_TR(0x415ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415eacull));
TAIL_STATIC(0x571640u,571);
}
B415eac:L415eac:{c.instructions+=7;NFSU2_TR(0x415eac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415eae:{NFSU2_TR(0x415eae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415eb0:{NFSU2_TR(0x415eb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415eb2:{NFSU2_TR(0x415eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415eb8:{NFSU2_TR(0x415eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415eb9:{NFSU2_TR(0x415eb9);
__builtin_memmove((R+4),(R+28),4);
}
B415ebb:{NFSU2_TR(0x415ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415ec0ull));
TAIL_STATIC(0x571640u,571);
}
B415ec0:L415ec0:{c.instructions+=4;NFSU2_TR(0x415ec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415ec6:{NFSU2_TR(0x415ec6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ec7:{NFSU2_TR(0x415ec7);
__builtin_memmove((R+4),(R+28),4);
}
B415ec9:{NFSU2_TR(0x415ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415eceull));
TAIL_STATIC(0x571770u,571);
}
B415ece:L415ece:{c.instructions+=7;NFSU2_TR(0x415ece);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ed0:{NFSU2_TR(0x415ed0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ed2:{NFSU2_TR(0x415ed2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ed4:{NFSU2_TR(0x415ed4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((R+8),(U+0),4);
}
B415eda:{NFSU2_TR(0x415eda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415edb:{NFSU2_TR(0x415edb);
__builtin_memmove((R+4),(R+28),4);
}
B415edd:{NFSU2_TR(0x415edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415ee2ull));
TAIL_STATIC(0x571640u,571);
}
B415ee2:L415ee2:{c.instructions+=4;NFSU2_TR(0x415ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((R+0),(U+0),4);
}
B415ee8:{NFSU2_TR(0x415ee8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ee9:{NFSU2_TR(0x415ee9);
__builtin_memmove((R+4),(R+28),4);
}
B415eeb:{NFSU2_TR(0x415eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415ef0ull));
TAIL_STATIC(0x571770u,571);
}
B415ef0:L415ef0:{c.instructions+=3;NFSU2_TR(0x415ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415ef6:{NFSU2_TR(0x415ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ef7:{NFSU2_TR(0x415ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415efcull));
TAIL_STATIC(0x57cd10u,57c);
}
B415efc:L415efc:{c.instructions+=3;NFSU2_TR(0x415efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f02:{NFSU2_TR(0x415f02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f03:{NFSU2_TR(0x415f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f08ull));
TAIL_STATIC(0x57cd10u,57c);
}
B415f08:L415f08:{c.instructions+=3;NFSU2_TR(0x415f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f0e:{NFSU2_TR(0x415f0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f0f:{NFSU2_TR(0x415f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f14ull));
TAIL_STATIC(0x57cd10u,57c);
}
B415f14:L415f14:{c.instructions+=3;NFSU2_TR(0x415f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f1a:{NFSU2_TR(0x415f1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f1b:{NFSU2_TR(0x415f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f20ull));
TAIL_STATIC(0x57cd10u,57c);
}
B415f20:L415f20:{c.instructions+=3;NFSU2_TR(0x415f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f26:{NFSU2_TR(0x415f26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f27:{NFSU2_TR(0x415f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f2cull));
TAIL_STATIC(0x57cd10u,57c);
}
B415f2c:L415f2c:{c.instructions+=3;NFSU2_TR(0x415f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f32:{NFSU2_TR(0x415f32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f33:{NFSU2_TR(0x415f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f38ull));
TAIL_STATIC(0x57cd10u,57c);
}
B415f38:L415f38:{c.instructions+=4;NFSU2_TR(0x415f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f3e:{NFSU2_TR(0x415f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415f41:{NFSU2_TR(0x415f41);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B415f45:{NFSU2_TR(0x415f45);
if(r1(R+518)){{goto L415f67;}}
}
B415f47:L415f47:{c.instructions+=4;NFSU2_TR(0x415f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415f4d:{NFSU2_TR(0x415f4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415f53:{NFSU2_TR(0x415f53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f54:{NFSU2_TR(0x415f54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B415f57:L415f57:{c.instructions+=4;NFSU2_TR(0x415f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415f5d:{NFSU2_TR(0x415f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((R+4),(U+0),4);
}
B415f63:{NFSU2_TR(0x415f63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f64:{NFSU2_TR(0x415f64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B415f67:L415f67:{c.instructions+=3;NFSU2_TR(0x415f67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f68:{NFSU2_TR(0x415f68);
__builtin_memmove((R+4),(R+24),4);
}
B415f6a:{NFSU2_TR(0x415f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f6full));
TAIL_STATIC(0x5eb860u,5eb);
}
B415f6f:L415f6f:{c.instructions+=2;NFSU2_TR(0x415f6f);
__builtin_memmove((R+4),(R+28),4);
}
B415f71:{NFSU2_TR(0x415f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x415f76ull));
TAIL_STATIC(0x578d90u,578);
}
B415f76:L415f76:{c.instructions+=3;NFSU2_TR(0x415f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B415f77:{NFSU2_TR(0x415f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B415f78:{NFSU2_TR(0x415f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B415f80:L415f80:{c.instructions+=10;NFSU2_TR(0x415f80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f81:{NFSU2_TR(0x415f81);
__builtin_memmove((R+20),(R+16),4);
}
B415f83:{NFSU2_TR(0x415f83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B415f86:{NFSU2_TR(0x415f86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B415f89:{NFSU2_TR(0x415f89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415f8a:{NFSU2_TR(0x415f8a);
__builtin_memmove((R+24),(R+4),4);
}
B415f8c:{NFSU2_TR(0x415f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415f92:{NFSU2_TR(0x415f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415f95:{NFSU2_TR(0x415f95);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B415f96:{NFSU2_TR(0x415f96);
if(r1(R+518)){{goto L415fed;}}
}
B415f98:L415f98:{c.instructions+=2;NFSU2_TR(0x415f98);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B415f9b:{NFSU2_TR(0x415f9b);
if(r1(R+518)){{goto L415fa7;}}
}
B415f9d:L415f9d:{c.instructions+=2;NFSU2_TR(0x415f9d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B415f9e:{NFSU2_TR(0x415f9e);
if(r1(R+518)){{goto L415fed;}}
}
B415fa0:L415fa0:{c.instructions+=2;NFSU2_TR(0x415fa0);
w4(R+4,u32(0x3ull));
}
B415fa5:{NFSU2_TR(0x415fa5);
{goto L415fc0;}
}
B415fa7:L415fa7:{c.instructions+=8;NFSU2_TR(0x415fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B415faa:{NFSU2_TR(0x415faa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B415fac:{NFSU2_TR(0x415fac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415faf:{NFSU2_TR(0x415faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B415fb2:{NFSU2_TR(0x415fb2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B415fb3:{NFSU2_TR(0x415fb3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4ull))));
}
B415fb6:{NFSU2_TR(0x415fb6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415fb9:{NFSU2_TR(0x415fb9);
if(r1(R+518)){{goto L415fc0;}}
}
B415fbb:L415fbb:{c.instructions+=2;NFSU2_TR(0x415fbb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B415fbe:{NFSU2_TR(0x415fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L415fed;}}
}
B415fc0:L415fc0:{c.instructions+=8;NFSU2_TR(0x415fc0);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415fc6:{NFSU2_TR(0x415fc6);
{u32 ea_=u32((r4(R+4)*4u)+u32(7879088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B415fcd:{NFSU2_TR(0x415fcd);
{u32 ea_=u32((r4(R+4)*4u)+u32(7879116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B415fd4:{NFSU2_TR(0x415fd4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B415fd8:{NFSU2_TR(0x415fd8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B415fda:{NFSU2_TR(0x415fda);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B415fdc:{NFSU2_TR(0x415fdc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B415fdf:{NFSU2_TR(0x415fdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x416056u,416);}
}
B415fe1:L415fe1:{c.instructions+=4;NFSU2_TR(0x415fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B415fe5:{NFSU2_TR(0x415fe5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B415fe7:{NFSU2_TR(0x415fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415feb:{NFSU2_TR(0x415feb);
TAIL_STATIC(0x41605au,416);
}
B415fed:L415fed:{c.instructions+=6;NFSU2_TR(0x415fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B415ff3:{NFSU2_TR(0x415ff3);
__builtin_memmove((R+8),(R+4),4);
}
B415ff5:{NFSU2_TR(0x415ff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B415ff9:{NFSU2_TR(0x415ff9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B415ffa:{NFSU2_TR(0x415ffa);
w4(R+4,u32(0x7e9d94ull));
}
B415fff:{NFSU2_TR(0x415fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x416004ull));
TAIL_STATIC(0x5764d0u,576);
}
XIT:NFSU2_TR_EXIT(0x415,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
