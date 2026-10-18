#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x424,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x424,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_424(u8* __restrict R,Cpu& c);
u32 page_424(Cpu& c){return body_424(c.regs.data(),c);}
__attribute__((noinline)) u32 body_424(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x424001:goto L424001;
case 0x424003:c.instructions+=1;goto B424003;
case 0x424009:goto L424009;
case 0x42400e:c.instructions+=2;goto B42400e;
case 0x424010:c.instructions+=1;goto B424010;
case 0x424016:goto L424016;
case 0x42401b:c.instructions+=2;goto B42401b;
case 0x42401d:c.instructions+=1;goto B42401d;
case 0x424023:goto L424023;
case 0x424028:c.instructions+=2;goto B424028;
case 0x42402a:c.instructions+=1;goto B42402a;
case 0x424030:goto L424030;
case 0x424032:c.instructions+=1;goto B424032;
case 0x424038:goto L424038;
case 0x42403e:c.instructions+=2;goto B42403e;
case 0x424040:c.instructions+=1;goto B424040;
case 0x424046:goto L424046;
case 0x424048:c.instructions+=3;goto B424048;
case 0x42404a:c.instructions+=2;goto B42404a;
case 0x42404b:c.instructions+=1;goto B42404b;
case 0x424050:goto L424050;
case 0x424053:c.instructions+=2;goto B424053;
case 0x424056:c.instructions+=1;goto B424056;
case 0x424058:goto L424058;
case 0x424059:c.instructions+=2;goto B424059;
case 0x42405b:c.instructions+=1;goto B42405b;
case 0x424060:goto L424060;
case 0x424066:c.instructions+=3;goto B424066;
case 0x424068:c.instructions+=2;goto B424068;
case 0x42406b:c.instructions+=1;goto B42406b;
case 0x42406d:goto L42406d;
case 0x424073:c.instructions+=5;goto B424073;
case 0x424075:c.instructions+=4;goto B424075;
case 0x424076:c.instructions+=3;goto B424076;
case 0x424077:c.instructions+=2;goto B424077;
case 0x424079:c.instructions+=1;goto B424079;
case 0x42407e:goto L42407e;
case 0x424083:goto L424083;
case 0x424085:c.instructions+=6;goto B424085;
case 0x424086:c.instructions+=5;goto B424086;
case 0x424087:c.instructions+=4;goto B424087;
case 0x42408b:c.instructions+=3;goto B42408b;
case 0x42408c:c.instructions+=2;goto B42408c;
case 0x42408e:c.instructions+=1;goto B42408e;
case 0x424093:goto L424093;
case 0x424099:c.instructions+=1;goto B424099;
case 0x42409e:goto L42409e;
case 0x4240a0:c.instructions+=2;goto B4240a0;
case 0x4240a5:c.instructions+=1;goto B4240a5;
case 0x4240a7:goto L4240a7;
case 0x4240a9:c.instructions+=3;goto B4240a9;
case 0x4240ac:c.instructions+=2;goto B4240ac;
case 0x4240af:c.instructions+=1;goto B4240af;
case 0x4240b1:goto L4240b1;
case 0x4240b5:c.instructions+=2;goto B4240b5;
case 0x4240b7:c.instructions+=1;goto B4240b7;
case 0x4240b9:goto L4240b9;
case 0x4240bf:c.instructions+=7;goto B4240bf;
case 0x4240c4:c.instructions+=6;goto B4240c4;
case 0x4240c5:c.instructions+=5;goto B4240c5;
case 0x4240c6:c.instructions+=4;goto B4240c6;
case 0x4240c7:c.instructions+=3;goto B4240c7;
case 0x4240c8:c.instructions+=2;goto B4240c8;
case 0x4240ca:c.instructions+=1;goto B4240ca;
case 0x4240cf:goto L4240cf;
case 0x4240d4:goto L4240d4;
case 0x4240d8:c.instructions+=2;goto B4240d8;
case 0x4240da:c.instructions+=1;goto B4240da;
case 0x4240dc:goto L4240dc;
case 0x4240e0:c.instructions+=2;goto B4240e0;
case 0x4240e2:c.instructions+=1;goto B4240e2;
case 0x4240e5:goto L4240e5;
case 0x4240eb:c.instructions+=2;goto B4240eb;
case 0x4240f5:c.instructions+=1;goto B4240f5;
case 0x4240f7:goto L4240f7;
case 0x4240f8:c.instructions+=2;goto B4240f8;
case 0x4240fa:c.instructions+=1;goto B4240fa;
case 0x4240ff:goto L4240ff;
case 0x424105:c.instructions+=3;goto B424105;
case 0x424107:c.instructions+=2;goto B424107;
case 0x42410a:c.instructions+=1;goto B42410a;
case 0x42410c:goto L42410c;
case 0x42410e:c.instructions+=3;goto B42410e;
case 0x424111:c.instructions+=2;goto B424111;
case 0x424114:c.instructions+=1;goto B424114;
case 0x424116:goto L424116;
case 0x42411c:c.instructions+=10;goto B42411c;
case 0x424122:c.instructions+=9;goto B424122;
case 0x424125:c.instructions+=8;goto B424125;
case 0x424128:c.instructions+=7;goto B424128;
case 0x42412e:c.instructions+=6;goto B42412e;
case 0x424130:c.instructions+=5;goto B424130;
case 0x424132:c.instructions+=4;goto B424132;
case 0x424138:c.instructions+=3;goto B424138;
case 0x42413a:c.instructions+=2;goto B42413a;
case 0x42413d:c.instructions+=1;goto B42413d;
case 0x42413f:goto L42413f;
case 0x424146:c.instructions+=3;goto B424146;
case 0x424148:c.instructions+=2;goto B424148;
case 0x42414e:c.instructions+=1;goto B42414e;
case 0x424150:goto L424150;
case 0x424154:c.instructions+=2;goto B424154;
case 0x424156:c.instructions+=1;goto B424156;
case 0x424159:goto L424159;
case 0x42415b:goto L42415b;
case 0x424162:goto L424162;
case 0x424168:c.instructions+=2;goto B424168;
case 0x42416a:c.instructions+=1;goto B42416a;
case 0x42416c:goto L42416c;
case 0x424172:c.instructions+=4;goto B424172;
case 0x424178:c.instructions+=3;goto B424178;
case 0x42417a:c.instructions+=2;goto B42417a;
case 0x42417d:c.instructions+=1;goto B42417d;
case 0x42417f:goto L42417f;
case 0x424185:c.instructions+=2;goto B424185;
case 0x424187:c.instructions+=1;goto B424187;
case 0x424189:goto L424189;
case 0x42418e:goto L42418e;
case 0x424194:c.instructions+=3;goto B424194;
case 0x424196:c.instructions+=2;goto B424196;
case 0x424199:c.instructions+=1;goto B424199;
case 0x42419b:goto L42419b;
case 0x4241a1:c.instructions+=1;goto B4241a1;
case 0x4241a7:goto L4241a7;
case 0x4241a8:c.instructions+=5;goto B4241a8;
case 0x4241a9:c.instructions+=4;goto B4241a9;
case 0x4241aa:c.instructions+=3;goto B4241aa;
case 0x4241ab:c.instructions+=2;goto B4241ab;
case 0x4241ae:c.instructions+=1;goto B4241ae;
case 0x4241c0:goto L4241c0;
case 0x4241c4:c.instructions+=8;goto B4241c4;
case 0x4241c5:c.instructions+=7;goto B4241c5;
case 0x4241c7:c.instructions+=6;goto B4241c7;
case 0x4241cb:c.instructions+=5;goto B4241cb;
case 0x4241cc:c.instructions+=4;goto B4241cc;
case 0x4241cd:c.instructions+=3;goto B4241cd;
case 0x4241cf:c.instructions+=2;goto B4241cf;
case 0x4241d1:c.instructions+=1;goto B4241d1;
case 0x4241d6:goto L4241d6;
case 0x4241dc:c.instructions+=8;goto B4241dc;
case 0x4241de:c.instructions+=7;goto B4241de;
case 0x4241e4:c.instructions+=6;goto B4241e4;
case 0x4241ea:c.instructions+=5;goto B4241ea;
case 0x4241f0:c.instructions+=4;goto B4241f0;
case 0x4241f6:c.instructions+=3;goto B4241f6;
case 0x4241f8:c.instructions+=2;goto B4241f8;
case 0x4241f9:c.instructions+=1;goto B4241f9;
case 0x424200:goto L424200;
case 0x424205:c.instructions+=1;goto B424205;
case 0x424210:goto L424210;
case 0x424211:c.instructions+=8;goto B424211;
case 0x424212:c.instructions+=7;goto B424212;
case 0x424216:c.instructions+=6;goto B424216;
case 0x424218:c.instructions+=5;goto B424218;
case 0x424219:c.instructions+=4;goto B424219;
case 0x42421c:c.instructions+=3;goto B42421c;
case 0x42421d:c.instructions+=2;goto B42421d;
case 0x424223:c.instructions+=1;goto B424223;
case 0x424228:goto L424228;
case 0x42422e:c.instructions+=15;goto B42422e;
case 0x424230:c.instructions+=14;goto B424230;
case 0x424236:c.instructions+=13;goto B424236;
case 0x42423c:c.instructions+=12;goto B42423c;
case 0x424242:c.instructions+=11;goto B424242;
case 0x424248:c.instructions+=10;goto B424248;
case 0x42424e:c.instructions+=9;goto B42424e;
case 0x424254:c.instructions+=8;goto B424254;
case 0x424256:c.instructions+=7;goto B424256;
case 0x42425a:c.instructions+=6;goto B42425a;
case 0x42425e:c.instructions+=5;goto B42425e;
case 0x424264:c.instructions+=4;goto B424264;
case 0x42426a:c.instructions+=3;goto B42426a;
case 0x42426c:c.instructions+=2;goto B42426c;
case 0x42426f:c.instructions+=1;goto B42426f;
case 0x424271:goto L424271;
case 0x424277:c.instructions+=1;goto B424277;
case 0x424279:goto L424279;
case 0x42427b:c.instructions+=1;goto B42427b;
case 0x424280:goto L424280;
case 0x424287:goto L424287;
case 0x424288:c.instructions+=2;goto B424288;
case 0x424289:c.instructions+=1;goto B424289;
case 0x424290:goto L424290;
case 0x424294:c.instructions+=8;goto B424294;
case 0x424295:c.instructions+=7;goto B424295;
case 0x424297:c.instructions+=6;goto B424297;
case 0x42429b:c.instructions+=5;goto B42429b;
case 0x42429c:c.instructions+=4;goto B42429c;
case 0x42429d:c.instructions+=3;goto B42429d;
case 0x42429f:c.instructions+=2;goto B42429f;
case 0x4242a1:c.instructions+=1;goto B4242a1;
case 0x4242a6:goto L4242a6;
case 0x4242ac:c.instructions+=3;goto B4242ac;
case 0x4242ae:c.instructions+=2;goto B4242ae;
case 0x4242af:c.instructions+=1;goto B4242af;
case 0x4242c0:goto L4242c0;
case 0x4242c5:c.instructions+=1;goto B4242c5;
case 0x4242d0:goto L4242d0;
case 0x4242d1:c.instructions+=13;goto B4242d1;
case 0x4242d2:c.instructions+=12;goto B4242d2;
case 0x4242d3:c.instructions+=11;goto B4242d3;
case 0x4242d7:c.instructions+=10;goto B4242d7;
case 0x4242da:c.instructions+=9;goto B4242da;
case 0x4242dd:c.instructions+=8;goto B4242dd;
case 0x4242de:c.instructions+=7;goto B4242de;
case 0x4242df:c.instructions+=6;goto B4242df;
case 0x4242e5:c.instructions+=5;goto B4242e5;
case 0x4242e9:c.instructions+=4;goto B4242e9;
case 0x4242eb:c.instructions+=3;goto B4242eb;
case 0x4242ed:c.instructions+=2;goto B4242ed;
case 0x4242ef:c.instructions+=1;goto B4242ef;
case 0x4242f1:goto L4242f1;
case 0x4242f4:c.instructions+=1;goto B4242f4;
case 0x4242f6:goto L4242f6;
case 0x4242fe:c.instructions+=1;goto B4242fe;
case 0x424300:goto L424300;
case 0x424303:c.instructions+=1;goto B424303;
case 0x424305:goto L424305;
case 0x424308:c.instructions+=2;goto B424308;
case 0x424310:c.instructions+=1;goto B424310;
case 0x424312:goto L424312;
case 0x42431a:goto L42431a;
case 0x424320:c.instructions+=2;goto B424320;
case 0x424322:c.instructions+=1;goto B424322;
case 0x424324:goto L424324;
case 0x424327:c.instructions+=3;goto B424327;
case 0x424329:c.instructions+=2;goto B424329;
case 0x42432a:c.instructions+=1;goto B42432a;
case 0x42432d:goto L42432d;
case 0x42432f:goto L42432f;
case 0x424331:goto L424331;
case 0x424335:c.instructions+=2;goto B424335;
case 0x424336:c.instructions+=1;goto B424336;
case 0x424338:goto L424338;
case 0x42433b:c.instructions+=3;goto B42433b;
case 0x42433c:c.instructions+=2;goto B42433c;
case 0x42433e:c.instructions+=1;goto B42433e;
case 0x424343:goto L424343;
case 0x424345:goto L424345;
case 0x424348:c.instructions+=3;goto B424348;
case 0x424349:c.instructions+=2;goto B424349;
case 0x42434b:c.instructions+=1;goto B42434b;
case 0x424350:goto L424350;
case 0x424357:c.instructions+=3;goto B424357;
case 0x424359:c.instructions+=2;goto B424359;
case 0x42435b:c.instructions+=1;goto B42435b;
case 0x42435e:goto L42435e;
case 0x424364:c.instructions+=3;goto B424364;
case 0x424369:c.instructions+=2;goto B424369;
case 0x42436b:c.instructions+=1;goto B42436b;
case 0x42436d:goto L42436d;
case 0x424372:c.instructions+=2;goto B424372;
case 0x424374:c.instructions+=1;goto B424374;
case 0x424376:goto L424376;
case 0x42437a:c.instructions+=3;goto B42437a;
case 0x42437d:c.instructions+=2;goto B42437d;
case 0x424381:c.instructions+=1;goto B424381;
case 0x424383:goto L424383;
case 0x424384:c.instructions+=2;goto B424384;
case 0x424386:c.instructions+=1;goto B424386;
case 0x42438b:goto L42438b;
case 0x424391:c.instructions+=9;goto B424391;
case 0x424392:c.instructions+=8;goto B424392;
case 0x424398:c.instructions+=7;goto B424398;
case 0x42439f:c.instructions+=6;goto B42439f;
case 0x4243a6:c.instructions+=5;goto B4243a6;
case 0x4243a7:c.instructions+=4;goto B4243a7;
case 0x4243a8:c.instructions+=3;goto B4243a8;
case 0x4243a9:c.instructions+=2;goto B4243a9;
case 0x4243aa:c.instructions+=1;goto B4243aa;
case 0x4243b0:goto L4243b0;
case 0x4243b2:c.instructions+=18;goto B4243b2;
case 0x4243b7:c.instructions+=17;goto B4243b7;
case 0x4243bd:c.instructions+=16;goto B4243bd;
case 0x4243be:c.instructions+=15;goto B4243be;
case 0x4243c5:c.instructions+=14;goto B4243c5;
case 0x4243c6:c.instructions+=13;goto B4243c6;
case 0x4243ca:c.instructions+=12;goto B4243ca;
case 0x4243cb:c.instructions+=11;goto B4243cb;
case 0x4243cc:c.instructions+=10;goto B4243cc;
case 0x4243cd:c.instructions+=9;goto B4243cd;
case 0x4243ce:c.instructions+=8;goto B4243ce;
case 0x4243d0:c.instructions+=7;goto B4243d0;
case 0x4243d4:c.instructions+=6;goto B4243d4;
case 0x4243d5:c.instructions+=5;goto B4243d5;
case 0x4243d6:c.instructions+=4;goto B4243d6;
case 0x4243d8:c.instructions+=3;goto B4243d8;
case 0x4243da:c.instructions+=2;goto B4243da;
case 0x4243de:c.instructions+=1;goto B4243de;
case 0x4243e3:goto L4243e3;
case 0x4243e5:c.instructions+=8;goto B4243e5;
case 0x4243eb:c.instructions+=7;goto B4243eb;
case 0x4243f1:c.instructions+=6;goto B4243f1;
case 0x4243f5:c.instructions+=5;goto B4243f5;
case 0x4243f8:c.instructions+=4;goto B4243f8;
case 0x4243fe:c.instructions+=3;goto B4243fe;
case 0x424401:c.instructions+=2;goto B424401;
case 0x424406:c.instructions+=1;goto B424406;
case 0x424408:goto L424408;
case 0x42440a:c.instructions+=1;goto B42440a;
case 0x42440f:goto L42440f;
case 0x424411:c.instructions+=3;goto B424411;
case 0x424414:c.instructions+=2;goto B424414;
case 0x424416:c.instructions+=1;goto B424416;
case 0x424419:goto L424419;
case 0x42441d:c.instructions+=3;goto B42441d;
case 0x42441f:c.instructions+=2;goto B42441f;
case 0x424422:c.instructions+=1;goto B424422;
case 0x424424:goto L424424;
case 0x424426:c.instructions+=1;goto B424426;
case 0x42442b:goto L42442b;
case 0x42442e:c.instructions+=4;goto B42442e;
case 0x424430:c.instructions+=3;goto B424430;
case 0x424433:c.instructions+=2;goto B424433;
case 0x424436:c.instructions+=1;goto B424436;
case 0x424438:goto L424438;
case 0x42443a:c.instructions+=10;goto B42443a;
case 0x424440:c.instructions+=9;goto B424440;
case 0x424444:c.instructions+=8;goto B424444;
case 0x424448:c.instructions+=7;goto B424448;
case 0x42444c:c.instructions+=6;goto B42444c;
case 0x424452:c.instructions+=5;goto B424452;
case 0x424458:c.instructions+=4;goto B424458;
case 0x42445e:c.instructions+=3;goto B42445e;
case 0x424464:c.instructions+=2;goto B424464;
case 0x42446a:c.instructions+=1;goto B42446a;
case 0x42446c:goto L42446c;
case 0x42446e:c.instructions+=1;goto B42446e;
case 0x424473:goto L424473;
case 0x424475:c.instructions+=1;goto B424475;
case 0x424477:goto L424477;
case 0x424479:c.instructions+=1;goto B424479;
case 0x42447e:goto L42447e;
case 0x424484:c.instructions+=2;goto B424484;
case 0x42448a:c.instructions+=1;goto B42448a;
case 0x42448c:goto L42448c;
case 0x424492:goto L424492;
case 0x424496:c.instructions+=8;goto B424496;
case 0x424498:c.instructions+=7;goto B424498;
case 0x424499:c.instructions+=6;goto B424499;
case 0x42449a:c.instructions+=5;goto B42449a;
case 0x42449b:c.instructions+=4;goto B42449b;
case 0x42449c:c.instructions+=3;goto B42449c;
case 0x4244a3:c.instructions+=2;goto B4244a3;
case 0x4244a6:c.instructions+=1;goto B4244a6;
case 0x4244b0:goto L4244b0;
case 0x4244b5:c.instructions+=1;goto B4244b5;
case 0x4244c0:goto L4244c0;
case 0x4244c1:c.instructions+=2;goto B4244c1;
case 0x4244c3:c.instructions+=1;goto B4244c3;
case 0x4244c8:goto L4244c8;
case 0x4244cd:c.instructions+=1;goto B4244cd;
case 0x4244cf:goto L4244cf;
case 0x4244d4:c.instructions+=3;goto B4244d4;
case 0x4244d5:c.instructions+=2;goto B4244d5;
case 0x4244d6:c.instructions+=1;goto B4244d6;
case 0x4244db:goto L4244db;
case 0x4244de:goto L4244de;
case 0x4244e0:c.instructions+=2;goto B4244e0;
case 0x4244e1:c.instructions+=1;goto B4244e1;
case 0x4244f0:goto L4244f0;
case 0x4244f2:c.instructions+=15;goto B4244f2;
case 0x4244f7:c.instructions+=14;goto B4244f7;
case 0x4244fd:c.instructions+=13;goto B4244fd;
case 0x4244fe:c.instructions+=12;goto B4244fe;
case 0x424505:c.instructions+=11;goto B424505;
case 0x424506:c.instructions+=10;goto B424506;
case 0x424507:c.instructions+=9;goto B424507;
case 0x424508:c.instructions+=8;goto B424508;
case 0x42450a:c.instructions+=7;goto B42450a;
case 0x42450e:c.instructions+=6;goto B42450e;
case 0x424514:c.instructions+=5;goto B424514;
case 0x42451a:c.instructions+=4;goto B42451a;
case 0x42451c:c.instructions+=3;goto B42451c;
case 0x424522:c.instructions+=2;goto B424522;
case 0x42452a:c.instructions+=1;goto B42452a;
case 0x42452c:goto L42452c;
case 0x42452e:c.instructions+=1;goto B42452e;
case 0x424533:goto L424533;
case 0x424535:c.instructions+=3;goto B424535;
case 0x424538:c.instructions+=2;goto B424538;
case 0x42453a:c.instructions+=1;goto B42453a;
case 0x42453d:goto L42453d;
case 0x424541:c.instructions+=7;goto B424541;
case 0x424548:c.instructions+=6;goto B424548;
case 0x42454e:c.instructions+=5;goto B42454e;
case 0x42454f:c.instructions+=4;goto B42454f;
case 0x424550:c.instructions+=3;goto B424550;
case 0x424557:c.instructions+=2;goto B424557;
case 0x42455a:c.instructions+=1;goto B42455a;
case 0x424560:goto L424560;
case 0x424562:c.instructions+=16;goto B424562;
case 0x424567:c.instructions+=15;goto B424567;
case 0x42456d:c.instructions+=14;goto B42456d;
case 0x42456e:c.instructions+=13;goto B42456e;
case 0x424575:c.instructions+=12;goto B424575;
case 0x424576:c.instructions+=11;goto B424576;
case 0x42457a:c.instructions+=10;goto B42457a;
case 0x42457b:c.instructions+=9;goto B42457b;
case 0x42457c:c.instructions+=8;goto B42457c;
case 0x42457e:c.instructions+=7;goto B42457e;
case 0x424582:c.instructions+=6;goto B424582;
case 0x424583:c.instructions+=5;goto B424583;
case 0x424584:c.instructions+=4;goto B424584;
case 0x424586:c.instructions+=3;goto B424586;
case 0x424588:c.instructions+=2;goto B424588;
case 0x42458c:c.instructions+=1;goto B42458c;
case 0x424591:goto L424591;
case 0x424597:c.instructions+=7;goto B424597;
case 0x42459d:c.instructions+=6;goto B42459d;
case 0x4245a5:c.instructions+=5;goto B4245a5;
case 0x4245ac:c.instructions+=4;goto B4245ac;
case 0x4245af:c.instructions+=3;goto B4245af;
case 0x4245b1:c.instructions+=2;goto B4245b1;
case 0x4245b6:c.instructions+=1;goto B4245b6;
case 0x4245b8:goto L4245b8;
case 0x4245ba:c.instructions+=1;goto B4245ba;
case 0x4245bf:goto L4245bf;
case 0x4245c1:c.instructions+=3;goto B4245c1;
case 0x4245c4:c.instructions+=2;goto B4245c4;
case 0x4245c6:c.instructions+=1;goto B4245c6;
case 0x4245c9:goto L4245c9;
case 0x4245cd:c.instructions+=3;goto B4245cd;
case 0x4245cf:c.instructions+=2;goto B4245cf;
case 0x4245d2:c.instructions+=1;goto B4245d2;
case 0x4245d4:goto L4245d4;
case 0x4245d6:c.instructions+=1;goto B4245d6;
case 0x4245db:goto L4245db;
case 0x4245de:c.instructions+=4;goto B4245de;
case 0x4245e0:c.instructions+=3;goto B4245e0;
case 0x4245e3:c.instructions+=2;goto B4245e3;
case 0x4245e6:c.instructions+=1;goto B4245e6;
case 0x4245e8:goto L4245e8;
case 0x4245ec:c.instructions+=6;goto B4245ec;
case 0x4245ee:c.instructions+=5;goto B4245ee;
case 0x4245ef:c.instructions+=4;goto B4245ef;
case 0x4245f0:c.instructions+=3;goto B4245f0;
case 0x4245f7:c.instructions+=2;goto B4245f7;
case 0x4245fa:c.instructions+=1;goto B4245fa;
case 0x424600:goto L424600;
case 0x424605:c.instructions+=1;goto B424605;
case 0x424610:goto L424610;
case 0x424611:c.instructions+=2;goto B424611;
case 0x424613:c.instructions+=1;goto B424613;
case 0x424618:goto L424618;
case 0x42461d:c.instructions+=1;goto B42461d;
case 0x42461f:goto L42461f;
case 0x424624:c.instructions+=3;goto B424624;
case 0x424625:c.instructions+=2;goto B424625;
case 0x424626:c.instructions+=1;goto B424626;
case 0x42462b:goto L42462b;
case 0x42462e:goto L42462e;
case 0x424630:c.instructions+=2;goto B424630;
case 0x424631:c.instructions+=1;goto B424631;
case 0x424640:goto L424640;
case 0x424642:c.instructions+=15;goto B424642;
case 0x424647:c.instructions+=14;goto B424647;
case 0x42464d:c.instructions+=13;goto B42464d;
case 0x42464e:c.instructions+=12;goto B42464e;
case 0x424655:c.instructions+=11;goto B424655;
case 0x424656:c.instructions+=10;goto B424656;
case 0x424657:c.instructions+=9;goto B424657;
case 0x424658:c.instructions+=8;goto B424658;
case 0x42465a:c.instructions+=7;goto B42465a;
case 0x42465e:c.instructions+=6;goto B42465e;
case 0x424664:c.instructions+=5;goto B424664;
case 0x42466a:c.instructions+=4;goto B42466a;
case 0x42466c:c.instructions+=3;goto B42466c;
case 0x424672:c.instructions+=2;goto B424672;
case 0x42467a:c.instructions+=1;goto B42467a;
case 0x42467c:goto L42467c;
case 0x42467e:c.instructions+=1;goto B42467e;
case 0x424683:goto L424683;
case 0x424685:c.instructions+=3;goto B424685;
case 0x424688:c.instructions+=2;goto B424688;
case 0x42468a:c.instructions+=1;goto B42468a;
case 0x42468d:goto L42468d;
case 0x424691:c.instructions+=7;goto B424691;
case 0x424698:c.instructions+=6;goto B424698;
case 0x42469e:c.instructions+=5;goto B42469e;
case 0x42469f:c.instructions+=4;goto B42469f;
case 0x4246a0:c.instructions+=3;goto B4246a0;
case 0x4246a7:c.instructions+=2;goto B4246a7;
case 0x4246aa:c.instructions+=1;goto B4246aa;
case 0x4246b0:goto L4246b0;
case 0x4246b3:c.instructions+=14;goto B4246b3;
case 0x4246b4:c.instructions+=13;goto B4246b4;
case 0x4246b5:c.instructions+=12;goto B4246b5;
case 0x4246b6:c.instructions+=11;goto B4246b6;
case 0x4246ba:c.instructions+=10;goto B4246ba;
case 0x4246bc:c.instructions+=9;goto B4246bc;
case 0x4246c2:c.instructions+=8;goto B4246c2;
case 0x4246c4:c.instructions+=7;goto B4246c4;
case 0x4246c8:c.instructions+=6;goto B4246c8;
case 0x4246ce:c.instructions+=5;goto B4246ce;
case 0x4246d0:c.instructions+=4;goto B4246d0;
case 0x4246d1:c.instructions+=3;goto B4246d1;
case 0x4246d4:c.instructions+=2;goto B4246d4;
case 0x4246d8:c.instructions+=1;goto B4246d8;
case 0x4246de:goto L4246de;
case 0x4246e2:c.instructions+=1;goto B4246e2;
case 0x4246e4:goto L4246e4;
case 0x4246e9:c.instructions+=3;goto B4246e9;
case 0x4246ef:c.instructions+=2;goto B4246ef;
case 0x4246f5:c.instructions+=1;goto B4246f5;
case 0x4246fc:goto L4246fc;
case 0x4246ff:c.instructions+=13;goto B4246ff;
case 0x424701:c.instructions+=12;goto B424701;
case 0x424703:c.instructions+=11;goto B424703;
case 0x42470a:c.instructions+=10;goto B42470a;
case 0x42470d:c.instructions+=9;goto B42470d;
case 0x424710:c.instructions+=8;goto B424710;
case 0x424716:c.instructions+=7;goto B424716;
case 0x424719:c.instructions+=6;goto B424719;
case 0x42471d:c.instructions+=5;goto B42471d;
case 0x42471e:c.instructions+=4;goto B42471e;
case 0x424722:c.instructions+=3;goto B424722;
case 0x424726:c.instructions+=2;goto B424726;
case 0x424728:c.instructions+=1;goto B424728;
case 0x42472d:goto L42472d;
case 0x424730:c.instructions+=9;goto B424730;
case 0x424733:c.instructions+=8;goto B424733;
case 0x42473a:c.instructions+=7;goto B42473a;
case 0x42473e:c.instructions+=6;goto B42473e;
case 0x424745:c.instructions+=5;goto B424745;
case 0x424749:c.instructions+=4;goto B424749;
case 0x42474d:c.instructions+=3;goto B42474d;
case 0x424751:c.instructions+=2;goto B424751;
case 0x424755:c.instructions+=1;goto B424755;
case 0x424757:goto L424757;
case 0x42475b:c.instructions+=2;goto B42475b;
case 0x42475f:c.instructions+=1;goto B42475f;
case 0x424761:goto L424761;
case 0x424764:c.instructions+=2;goto B424764;
case 0x424766:c.instructions+=1;goto B424766;
case 0x424768:goto L424768;
case 0x42476f:c.instructions+=4;goto B42476f;
case 0x424772:c.instructions+=3;goto B424772;
case 0x424775:c.instructions+=2;goto B424775;
case 0x42477c:c.instructions+=1;goto B42477c;
case 0x42477e:goto L42477e;
case 0x424781:c.instructions+=4;goto B424781;
case 0x424783:c.instructions+=3;goto B424783;
case 0x424786:c.instructions+=2;goto B424786;
case 0x42478d:c.instructions+=1;goto B42478d;
case 0x42478f:goto L42478f;
case 0x424791:goto L424791;
case 0x424795:c.instructions+=8;goto B424795;
case 0x42479a:c.instructions+=7;goto B42479a;
case 0x42479f:c.instructions+=6;goto B42479f;
case 0x4247a0:c.instructions+=5;goto B4247a0;
case 0x4247a1:c.instructions+=4;goto B4247a1;
case 0x4247a4:c.instructions+=3;goto B4247a4;
case 0x4247a5:c.instructions+=2;goto B4247a5;
case 0x4247a6:c.instructions+=1;goto B4247a6;
case 0x4247ab:goto L4247ab;
case 0x4247af:c.instructions+=5;goto B4247af;
case 0x4247b1:c.instructions+=4;goto B4247b1;
case 0x4247b5:c.instructions+=3;goto B4247b5;
case 0x4247b8:c.instructions+=2;goto B4247b8;
case 0x4247bc:c.instructions+=1;goto B4247bc;
case 0x4247be:goto L4247be;
case 0x4247c2:c.instructions+=2;goto B4247c2;
case 0x4247c6:c.instructions+=1;goto B4247c6;
case 0x4247c8:goto L4247c8;
case 0x4247cb:c.instructions+=2;goto B4247cb;
case 0x4247cd:c.instructions+=1;goto B4247cd;
case 0x4247cf:goto L4247cf;
case 0x4247d6:c.instructions+=4;goto B4247d6;
case 0x4247d9:c.instructions+=3;goto B4247d9;
case 0x4247dc:c.instructions+=2;goto B4247dc;
case 0x4247e3:c.instructions+=1;goto B4247e3;
case 0x4247e5:goto L4247e5;
case 0x4247e8:c.instructions+=4;goto B4247e8;
case 0x4247ea:c.instructions+=3;goto B4247ea;
case 0x4247ed:c.instructions+=2;goto B4247ed;
case 0x4247f4:c.instructions+=1;goto B4247f4;
case 0x4247f6:goto L4247f6;
case 0x4247f8:goto L4247f8;
case 0x4247fe:c.instructions+=9;goto B4247fe;
case 0x424801:c.instructions+=8;goto B424801;
case 0x424805:c.instructions+=7;goto B424805;
case 0x42480a:c.instructions+=6;goto B42480a;
case 0x42480f:c.instructions+=5;goto B42480f;
case 0x424810:c.instructions+=4;goto B424810;
case 0x424811:c.instructions+=3;goto B424811;
case 0x424812:c.instructions+=2;goto B424812;
case 0x424813:c.instructions+=1;goto B424813;
case 0x424818:goto L424818;
case 0x42481b:c.instructions+=3;goto B42481b;
case 0x42481e:c.instructions+=2;goto B42481e;
case 0x424820:c.instructions+=1;goto B424820;
case 0x424826:goto L424826;
case 0x424829:c.instructions+=1;goto B424829;
case 0x42482f:goto L42482f;
case 0x424833:c.instructions+=4;goto B424833;
case 0x424834:c.instructions+=3;goto B424834;
case 0x424835:c.instructions+=2;goto B424835;
case 0x424837:c.instructions+=1;goto B424837;
case 0x42483c:goto L42483c;
case 0x424840:c.instructions+=2;goto B424840;
case 0x424842:c.instructions+=1;goto B424842;
case 0x424848:goto L424848;
case 0x42484c:c.instructions+=2;goto B42484c;
case 0x42484d:c.instructions+=1;goto B42484d;
case 0x424852:goto L424852;
case 0x424856:c.instructions+=5;goto B424856;
case 0x424858:c.instructions+=4;goto B424858;
case 0x42485c:c.instructions+=3;goto B42485c;
case 0x42485d:c.instructions+=2;goto B42485d;
case 0x42485f:c.instructions+=1;goto B42485f;
case 0x424864:goto L424864;
case 0x424868:c.instructions+=6;goto B424868;
case 0x42486a:c.instructions+=5;goto B42486a;
case 0x42486d:c.instructions+=4;goto B42486d;
case 0x424871:c.instructions+=3;goto B424871;
case 0x424873:c.instructions+=2;goto B424873;
case 0x424876:c.instructions+=1;goto B424876;
case 0x424878:goto L424878;
case 0x42487b:c.instructions+=5;goto B42487b;
case 0x42487d:c.instructions+=4;goto B42487d;
case 0x42487f:c.instructions+=3;goto B42487f;
case 0x424881:c.instructions+=2;goto B424881;
case 0x424884:c.instructions+=1;goto B424884;
case 0x424886:goto L424886;
case 0x424887:c.instructions+=3;goto B424887;
case 0x424889:c.instructions+=2;goto B424889;
case 0x42488b:c.instructions+=1;goto B42488b;
case 0x424890:goto L424890;
case 0x424896:c.instructions+=3;goto B424896;
case 0x424898:c.instructions+=2;goto B424898;
case 0x42489b:c.instructions+=1;goto B42489b;
case 0x42489d:goto L42489d;
case 0x42489f:c.instructions+=1;goto B42489f;
case 0x4248a1:goto L4248a1;
case 0x4248a5:c.instructions+=5;goto B4248a5;
case 0x4248a7:c.instructions+=4;goto B4248a7;
case 0x4248a9:c.instructions+=3;goto B4248a9;
case 0x4248ab:c.instructions+=2;goto B4248ab;
case 0x4248ae:c.instructions+=1;goto B4248ae;
case 0x4248b0:goto L4248b0;
case 0x4248b4:c.instructions+=2;goto B4248b4;
case 0x4248bb:c.instructions+=1;goto B4248bb;
case 0x4248c0:goto L4248c0;
case 0x4248c2:c.instructions+=1;goto B4248c2;
case 0x4248c4:goto L4248c4;
case 0x4248c6:c.instructions+=1;goto B4248c6;
case 0x4248c8:goto L4248c8;
case 0x4248ca:goto L4248ca;
case 0x4248ce:c.instructions+=6;goto B4248ce;
case 0x4248d4:c.instructions+=5;goto B4248d4;
case 0x4248d6:c.instructions+=4;goto B4248d6;
case 0x4248d9:c.instructions+=3;goto B4248d9;
case 0x4248db:c.instructions+=2;goto B4248db;
case 0x4248dc:c.instructions+=1;goto B4248dc;
case 0x4248de:goto L4248de;
case 0x4248e1:c.instructions+=2;goto B4248e1;
case 0x4248e2:c.instructions+=1;goto B4248e2;
case 0x4248e4:goto L4248e4;
case 0x4248e7:c.instructions+=1;goto B4248e7;
case 0x4248e8:goto L4248e8;
case 0x4248ec:c.instructions+=2;goto B4248ec;
case 0x4248ed:c.instructions+=1;goto B4248ed;
case 0x4248f2:goto L4248f2;
case 0x4248f4:c.instructions+=1;goto B4248f4;
case 0x4248f6:goto L4248f6;
case 0x4248f8:c.instructions+=1;goto B4248f8;
case 0x4248fa:goto L4248fa;
case 0x4248fe:c.instructions+=5;goto B4248fe;
case 0x424901:c.instructions+=4;goto B424901;
case 0x424907:c.instructions+=3;goto B424907;
case 0x424909:c.instructions+=2;goto B424909;
case 0x42490c:c.instructions+=1;goto B42490c;
case 0x42490e:goto L42490e;
case 0x424911:goto L424911;
case 0x424913:c.instructions+=5;goto B424913;
case 0x424917:c.instructions+=4;goto B424917;
case 0x424918:c.instructions+=3;goto B424918;
case 0x424919:c.instructions+=2;goto B424919;
case 0x42491a:c.instructions+=1;goto B42491a;
case 0x42491f:goto L42491f;
case 0x424921:c.instructions+=1;goto B424921;
case 0x424923:goto L424923;
case 0x424925:goto L424925;
case 0x424929:c.instructions+=2;goto B424929;
case 0x42492a:c.instructions+=1;goto B42492a;
case 0x42492f:goto L42492f;
case 0x424933:goto L424933;
case 0x424937:c.instructions+=4;goto B424937;
case 0x424938:c.instructions+=3;goto B424938;
case 0x42493b:c.instructions+=2;goto B42493b;
case 0x42493c:c.instructions+=1;goto B42493c;
case 0x424941:goto L424941;
case 0x424943:c.instructions+=2;goto B424943;
case 0x424945:c.instructions+=1;goto B424945;
case 0x424948:goto L424948;
case 0x42494e:c.instructions+=12;goto B42494e;
case 0x42494f:c.instructions+=11;goto B42494f;
case 0x424951:c.instructions+=10;goto B424951;
case 0x424952:c.instructions+=9;goto B424952;
case 0x424958:c.instructions+=8;goto B424958;
case 0x42495e:c.instructions+=7;goto B42495e;
case 0x424964:c.instructions+=6;goto B424964;
case 0x42496b:c.instructions+=5;goto B42496b;
case 0x424972:c.instructions+=4;goto B424972;
case 0x424973:c.instructions+=3;goto B424973;
case 0x424974:c.instructions+=2;goto B424974;
case 0x424977:c.instructions+=1;goto B424977;
case 0x424980:goto L424980;
case 0x424984:c.instructions+=8;goto B424984;
case 0x424985:c.instructions+=7;goto B424985;
case 0x424987:c.instructions+=6;goto B424987;
case 0x42498b:c.instructions+=5;goto B42498b;
case 0x42498c:c.instructions+=4;goto B42498c;
case 0x42498d:c.instructions+=3;goto B42498d;
case 0x42498f:c.instructions+=2;goto B42498f;
case 0x424991:c.instructions+=1;goto B424991;
case 0x424996:goto L424996;
case 0x42499c:c.instructions+=3;goto B42499c;
case 0x42499e:c.instructions+=2;goto B42499e;
case 0x42499f:c.instructions+=1;goto B42499f;
case 0x4249b0:goto L4249b0;
case 0x4249b5:c.instructions+=1;goto B4249b5;
case 0x4249c0:goto L4249c0;
case 0x4249c1:c.instructions+=22;goto B4249c1;
case 0x4249c2:c.instructions+=21;goto B4249c2;
case 0x4249c3:c.instructions+=20;goto B4249c3;
case 0x4249c7:c.instructions+=19;goto B4249c7;
case 0x4249c8:c.instructions+=18;goto B4249c8;
case 0x4249ca:c.instructions+=17;goto B4249ca;
case 0x4249cc:c.instructions+=16;goto B4249cc;
case 0x4249ce:c.instructions+=15;goto B4249ce;
case 0x4249d1:c.instructions+=14;goto B4249d1;
case 0x4249d4:c.instructions+=13;goto B4249d4;
case 0x4249d6:c.instructions+=12;goto B4249d6;
case 0x4249d9:c.instructions+=11;goto B4249d9;
case 0x4249df:c.instructions+=10;goto B4249df;
case 0x4249e3:c.instructions+=9;goto B4249e3;
case 0x4249ea:c.instructions+=8;goto B4249ea;
case 0x4249eb:c.instructions+=7;goto B4249eb;
case 0x4249ee:c.instructions+=6;goto B4249ee;
case 0x4249f1:c.instructions+=5;goto B4249f1;
case 0x4249f5:c.instructions+=4;goto B4249f5;
case 0x4249f8:c.instructions+=3;goto B4249f8;
case 0x4249ff:c.instructions+=2;goto B4249ff;
case 0x424a04:c.instructions+=1;goto B424a04;
case 0x424a06:goto L424a06;
case 0x424a0c:c.instructions+=2;goto B424a0c;
case 0x424a12:c.instructions+=1;goto B424a12;
case 0x424a19:goto L424a19;
case 0x424a1d:c.instructions+=2;goto B424a1d;
case 0x424a21:c.instructions+=1;goto B424a21;
case 0x424a23:goto L424a23;
case 0x424a27:c.instructions+=2;goto B424a27;
case 0x424a2b:c.instructions+=1;goto B424a2b;
case 0x424a2d:goto L424a2d;
case 0x424a30:c.instructions+=2;goto B424a30;
case 0x424a32:c.instructions+=1;goto B424a32;
case 0x424a34:goto L424a34;
case 0x424a3b:c.instructions+=4;goto B424a3b;
case 0x424a3e:c.instructions+=3;goto B424a3e;
case 0x424a41:c.instructions+=2;goto B424a41;
case 0x424a48:c.instructions+=1;goto B424a48;
case 0x424a4a:goto L424a4a;
case 0x424a4d:c.instructions+=4;goto B424a4d;
case 0x424a4f:c.instructions+=3;goto B424a4f;
case 0x424a52:c.instructions+=2;goto B424a52;
case 0x424a59:c.instructions+=1;goto B424a59;
case 0x424a5b:goto L424a5b;
case 0x424a5d:goto L424a5d;
case 0x424a61:c.instructions+=8;goto B424a61;
case 0x424a66:c.instructions+=7;goto B424a66;
case 0x424a6b:c.instructions+=6;goto B424a6b;
case 0x424a6c:c.instructions+=5;goto B424a6c;
case 0x424a6d:c.instructions+=4;goto B424a6d;
case 0x424a70:c.instructions+=3;goto B424a70;
case 0x424a71:c.instructions+=2;goto B424a71;
case 0x424a72:c.instructions+=1;goto B424a72;
case 0x424a77:goto L424a77;
case 0x424a7a:c.instructions+=2;goto B424a7a;
case 0x424a7d:c.instructions+=1;goto B424a7d;
case 0x424a7f:goto L424a7f;
case 0x424a85:c.instructions+=10;goto B424a85;
case 0x424a87:c.instructions+=9;goto B424a87;
case 0x424a8a:c.instructions+=8;goto B424a8a;
case 0x424a8c:c.instructions+=7;goto B424a8c;
case 0x424a8f:c.instructions+=6;goto B424a8f;
case 0x424a95:c.instructions+=5;goto B424a95;
case 0x424a97:c.instructions+=4;goto B424a97;
case 0x424a9d:c.instructions+=3;goto B424a9d;
case 0x424a9f:c.instructions+=2;goto B424a9f;
case 0x424aa2:c.instructions+=1;goto B424aa2;
case 0x424aa4:goto L424aa4;
case 0x424aa7:c.instructions+=2;goto B424aa7;
case 0x424aa9:c.instructions+=1;goto B424aa9;
case 0x424aab:goto L424aab;
case 0x424ab0:c.instructions+=1;goto B424ab0;
case 0x424ab2:goto L424ab2;
case 0x424ab8:goto L424ab8;
case 0x424abb:goto L424abb;
case 0x424abc:c.instructions+=4;goto B424abc;
case 0x424abf:c.instructions+=3;goto B424abf;
case 0x424ac0:c.instructions+=2;goto B424ac0;
case 0x424ac2:c.instructions+=1;goto B424ac2;
case 0x424ac7:goto L424ac7;
case 0x424aca:c.instructions+=2;goto B424aca;
case 0x424acc:c.instructions+=1;goto B424acc;
case 0x424acf:goto L424acf;
case 0x424ad5:c.instructions+=12;goto B424ad5;
case 0x424ad7:c.instructions+=11;goto B424ad7;
case 0x424add:c.instructions+=10;goto B424add;
case 0x424ae3:c.instructions+=9;goto B424ae3;
case 0x424ae9:c.instructions+=8;goto B424ae9;
case 0x424aeb:c.instructions+=7;goto B424aeb;
case 0x424af1:c.instructions+=6;goto B424af1;
case 0x424af7:c.instructions+=5;goto B424af7;
case 0x424af8:c.instructions+=4;goto B424af8;
case 0x424af9:c.instructions+=3;goto B424af9;
case 0x424afa:c.instructions+=2;goto B424afa;
case 0x424afb:c.instructions+=1;goto B424afb;
case 0x424b00:goto L424b00;
case 0x424b04:c.instructions+=8;goto B424b04;
case 0x424b05:c.instructions+=7;goto B424b05;
case 0x424b07:c.instructions+=6;goto B424b07;
case 0x424b0b:c.instructions+=5;goto B424b0b;
case 0x424b0c:c.instructions+=4;goto B424b0c;
case 0x424b0d:c.instructions+=3;goto B424b0d;
case 0x424b0f:c.instructions+=2;goto B424b0f;
case 0x424b11:c.instructions+=1;goto B424b11;
case 0x424b16:goto L424b16;
case 0x424b1c:c.instructions+=4;goto B424b1c;
case 0x424b26:c.instructions+=3;goto B424b26;
case 0x424b28:c.instructions+=2;goto B424b28;
case 0x424b29:c.instructions+=1;goto B424b29;
case 0x424b30:goto L424b30;
case 0x424b35:c.instructions+=1;goto B424b35;
case 0x424b40:goto L424b40;
case 0x424b42:c.instructions+=16;goto B424b42;
case 0x424b47:c.instructions+=15;goto B424b47;
case 0x424b4d:c.instructions+=14;goto B424b4d;
case 0x424b4e:c.instructions+=13;goto B424b4e;
case 0x424b55:c.instructions+=12;goto B424b55;
case 0x424b56:c.instructions+=11;goto B424b56;
case 0x424b5a:c.instructions+=10;goto B424b5a;
case 0x424b5b:c.instructions+=9;goto B424b5b;
case 0x424b5c:c.instructions+=8;goto B424b5c;
case 0x424b5e:c.instructions+=7;goto B424b5e;
case 0x424b62:c.instructions+=6;goto B424b62;
case 0x424b63:c.instructions+=5;goto B424b63;
case 0x424b64:c.instructions+=4;goto B424b64;
case 0x424b66:c.instructions+=3;goto B424b66;
case 0x424b68:c.instructions+=2;goto B424b68;
case 0x424b6c:c.instructions+=1;goto B424b6c;
case 0x424b71:goto L424b71;
case 0x424b77:c.instructions+=7;goto B424b77;
case 0x424b7d:c.instructions+=6;goto B424b7d;
case 0x424b85:c.instructions+=5;goto B424b85;
case 0x424b8c:c.instructions+=4;goto B424b8c;
case 0x424b8f:c.instructions+=3;goto B424b8f;
case 0x424b91:c.instructions+=2;goto B424b91;
case 0x424b96:c.instructions+=1;goto B424b96;
case 0x424b98:goto L424b98;
case 0x424b9a:c.instructions+=1;goto B424b9a;
case 0x424b9f:goto L424b9f;
case 0x424ba1:c.instructions+=3;goto B424ba1;
case 0x424ba4:c.instructions+=2;goto B424ba4;
case 0x424ba6:c.instructions+=1;goto B424ba6;
case 0x424ba9:goto L424ba9;
case 0x424bad:c.instructions+=3;goto B424bad;
case 0x424baf:c.instructions+=2;goto B424baf;
case 0x424bb2:c.instructions+=1;goto B424bb2;
case 0x424bb4:goto L424bb4;
case 0x424bb6:c.instructions+=1;goto B424bb6;
case 0x424bbb:goto L424bbb;
case 0x424bbe:c.instructions+=4;goto B424bbe;
case 0x424bc0:c.instructions+=3;goto B424bc0;
case 0x424bc3:c.instructions+=2;goto B424bc3;
case 0x424bc6:c.instructions+=1;goto B424bc6;
case 0x424bc8:goto L424bc8;
case 0x424bcd:c.instructions+=10;goto B424bcd;
case 0x424bd1:c.instructions+=9;goto B424bd1;
case 0x424bd5:c.instructions+=8;goto B424bd5;
case 0x424bdb:c.instructions+=7;goto B424bdb;
case 0x424be1:c.instructions+=6;goto B424be1;
case 0x424be3:c.instructions+=5;goto B424be3;
case 0x424be4:c.instructions+=4;goto B424be4;
case 0x424be5:c.instructions+=3;goto B424be5;
case 0x424bec:c.instructions+=2;goto B424bec;
case 0x424bef:c.instructions+=1;goto B424bef;
case 0x424c00:goto L424c00;
case 0x424c05:c.instructions+=1;goto B424c05;
case 0x424c10:goto L424c10;
case 0x424c11:c.instructions+=2;goto B424c11;
case 0x424c13:c.instructions+=1;goto B424c13;
case 0x424c18:goto L424c18;
case 0x424c1d:c.instructions+=1;goto B424c1d;
case 0x424c1f:goto L424c1f;
case 0x424c24:c.instructions+=3;goto B424c24;
case 0x424c25:c.instructions+=2;goto B424c25;
case 0x424c26:c.instructions+=1;goto B424c26;
case 0x424c2b:goto L424c2b;
case 0x424c2e:goto L424c2e;
case 0x424c30:c.instructions+=2;goto B424c30;
case 0x424c31:c.instructions+=1;goto B424c31;
case 0x424c40:goto L424c40;
case 0x424c42:c.instructions+=15;goto B424c42;
case 0x424c47:c.instructions+=14;goto B424c47;
case 0x424c4d:c.instructions+=13;goto B424c4d;
case 0x424c4e:c.instructions+=12;goto B424c4e;
case 0x424c55:c.instructions+=11;goto B424c55;
case 0x424c56:c.instructions+=10;goto B424c56;
case 0x424c57:c.instructions+=9;goto B424c57;
case 0x424c58:c.instructions+=8;goto B424c58;
case 0x424c5a:c.instructions+=7;goto B424c5a;
case 0x424c5e:c.instructions+=6;goto B424c5e;
case 0x424c64:c.instructions+=5;goto B424c64;
case 0x424c6a:c.instructions+=4;goto B424c6a;
case 0x424c6c:c.instructions+=3;goto B424c6c;
case 0x424c72:c.instructions+=2;goto B424c72;
case 0x424c7a:c.instructions+=1;goto B424c7a;
case 0x424c7c:goto L424c7c;
case 0x424c7e:c.instructions+=1;goto B424c7e;
case 0x424c83:goto L424c83;
case 0x424c85:c.instructions+=3;goto B424c85;
case 0x424c88:c.instructions+=2;goto B424c88;
case 0x424c8a:c.instructions+=1;goto B424c8a;
case 0x424c8d:goto L424c8d;
case 0x424c91:c.instructions+=7;goto B424c91;
case 0x424c98:c.instructions+=6;goto B424c98;
case 0x424c9e:c.instructions+=5;goto B424c9e;
case 0x424c9f:c.instructions+=4;goto B424c9f;
case 0x424ca0:c.instructions+=3;goto B424ca0;
case 0x424ca7:c.instructions+=2;goto B424ca7;
case 0x424caa:c.instructions+=1;goto B424caa;
case 0x424cb0:goto L424cb0;
case 0x424cb1:c.instructions+=26;goto B424cb1;
case 0x424cb3:c.instructions+=25;goto B424cb3;
case 0x424cb6:c.instructions+=24;goto B424cb6;
case 0x424cb9:c.instructions+=23;goto B424cb9;
case 0x424cba:c.instructions+=22;goto B424cba;
case 0x424cbb:c.instructions+=21;goto B424cbb;
case 0x424cbc:c.instructions+=20;goto B424cbc;
case 0x424cbf:c.instructions+=19;goto B424cbf;
case 0x424cc5:c.instructions+=18;goto B424cc5;
case 0x424cc9:c.instructions+=17;goto B424cc9;
case 0x424cd0:c.instructions+=16;goto B424cd0;
case 0x424cd2:c.instructions+=15;goto B424cd2;
case 0x424cd5:c.instructions+=14;goto B424cd5;
case 0x424cd8:c.instructions+=13;goto B424cd8;
case 0x424cdc:c.instructions+=12;goto B424cdc;
case 0x424cde:c.instructions+=11;goto B424cde;
case 0x424ce1:c.instructions+=10;goto B424ce1;
case 0x424ce5:c.instructions+=9;goto B424ce5;
case 0x424ce8:c.instructions+=8;goto B424ce8;
case 0x424cec:c.instructions+=7;goto B424cec;
case 0x424cf3:c.instructions+=6;goto B424cf3;
case 0x424cf9:c.instructions+=5;goto B424cf9;
case 0x424cfd:c.instructions+=4;goto B424cfd;
case 0x424cfe:c.instructions+=3;goto B424cfe;
case 0x424d00:c.instructions+=2;goto B424d00;
case 0x424d04:c.instructions+=1;goto B424d04;
case 0x424d09:goto L424d09;
case 0x424d0b:c.instructions+=4;goto B424d0b;
case 0x424d0d:c.instructions+=3;goto B424d0d;
case 0x424d15:c.instructions+=2;goto B424d15;
case 0x424d1a:c.instructions+=1;goto B424d1a;
case 0x424d20:goto L424d20;
case 0x424d26:c.instructions+=2;goto B424d26;
case 0x424d28:c.instructions+=1;goto B424d28;
case 0x424d2e:goto L424d2e;
case 0x424d33:goto L424d33;
case 0x424d35:c.instructions+=1;goto B424d35;
case 0x424d3b:goto L424d3b;
case 0x424d41:c.instructions+=5;goto B424d41;
case 0x424d43:c.instructions+=4;goto B424d43;
case 0x424d46:c.instructions+=3;goto B424d46;
case 0x424d48:c.instructions+=2;goto B424d48;
case 0x424d4b:c.instructions+=1;goto B424d4b;
case 0x424d51:goto L424d51;
case 0x424d55:c.instructions+=7;goto B424d55;
case 0x424d58:c.instructions+=6;goto B424d58;
case 0x424d5b:c.instructions+=5;goto B424d5b;
case 0x424d5f:c.instructions+=4;goto B424d5f;
case 0x424d60:c.instructions+=3;goto B424d60;
case 0x424d62:c.instructions+=2;goto B424d62;
case 0x424d66:c.instructions+=1;goto B424d66;
case 0x424d6b:goto L424d6b;
case 0x424d6f:c.instructions+=5;goto B424d6f;
case 0x424d73:c.instructions+=4;goto B424d73;
case 0x424d79:c.instructions+=3;goto B424d79;
case 0x424d7b:c.instructions+=2;goto B424d7b;
case 0x424d7e:c.instructions+=1;goto B424d7e;
case 0x424d80:goto L424d80;
case 0x424d84:c.instructions+=1;goto B424d84;
case 0x424d86:goto L424d86;
case 0x424d88:c.instructions+=1;goto B424d88;
case 0x424d90:goto L424d90;
case 0x424d92:c.instructions+=4;goto B424d92;
case 0x424d98:c.instructions+=3;goto B424d98;
case 0x424d9a:c.instructions+=2;goto B424d9a;
case 0x424d9d:c.instructions+=1;goto B424d9d;
case 0x424d9f:goto L424d9f;
case 0x424da1:c.instructions+=1;goto B424da1;
case 0x424da3:goto L424da3;
case 0x424da5:goto L424da5;
case 0x424da7:c.instructions+=5;goto B424da7;
case 0x424dab:c.instructions+=4;goto B424dab;
case 0x424dad:c.instructions+=3;goto B424dad;
case 0x424db1:c.instructions+=2;goto B424db1;
case 0x424db5:c.instructions+=1;goto B424db5;
case 0x424db7:goto L424db7;
case 0x424dba:c.instructions+=9;goto B424dba;
case 0x424dbd:c.instructions+=8;goto B424dbd;
case 0x424dc1:c.instructions+=7;goto B424dc1;
case 0x424dc5:c.instructions+=6;goto B424dc5;
case 0x424dc8:c.instructions+=5;goto B424dc8;
case 0x424dcb:c.instructions+=4;goto B424dcb;
case 0x424dcf:c.instructions+=3;goto B424dcf;
case 0x424dd3:c.instructions+=2;goto B424dd3;
case 0x424dd5:c.instructions+=1;goto B424dd5;
case 0x424dd7:goto L424dd7;
case 0x424dda:c.instructions+=9;goto B424dda;
case 0x424ddd:c.instructions+=8;goto B424ddd;
case 0x424de1:c.instructions+=7;goto B424de1;
case 0x424de5:c.instructions+=6;goto B424de5;
case 0x424de8:c.instructions+=5;goto B424de8;
case 0x424deb:c.instructions+=4;goto B424deb;
case 0x424def:c.instructions+=3;goto B424def;
case 0x424df3:c.instructions+=2;goto B424df3;
case 0x424df5:c.instructions+=1;goto B424df5;
case 0x424df7:goto L424df7;
case 0x424dfb:c.instructions+=1;goto B424dfb;
case 0x424e00:goto L424e00;
case 0x424e01:c.instructions+=5;goto B424e01;
case 0x424e02:c.instructions+=4;goto B424e02;
case 0x424e06:c.instructions+=3;goto B424e06;
case 0x424e07:c.instructions+=2;goto B424e07;
case 0x424e09:c.instructions+=1;goto B424e09;
case 0x424e0e:goto L424e0e;
case 0x424e10:c.instructions+=1;goto B424e10;
case 0x424e16:goto L424e16;
case 0x424e17:c.instructions+=2;goto B424e17;
case 0x424e1a:c.instructions+=1;goto B424e1a;
case 0x424e1c:goto L424e1c;
case 0x424e21:goto L424e21;
case 0x424e25:c.instructions+=4;goto B424e25;
case 0x424e27:c.instructions+=3;goto B424e27;
case 0x424e2b:c.instructions+=2;goto B424e2b;
case 0x424e2c:c.instructions+=1;goto B424e2c;
case 0x424e31:goto L424e31;
case 0x424e35:c.instructions+=13;goto B424e35;
case 0x424e3b:c.instructions+=12;goto B424e3b;
case 0x424e3f:c.instructions+=11;goto B424e3f;
case 0x424e40:c.instructions+=10;goto B424e40;
case 0x424e44:c.instructions+=9;goto B424e44;
case 0x424e48:c.instructions+=8;goto B424e48;
case 0x424e49:c.instructions+=7;goto B424e49;
case 0x424e4a:c.instructions+=6;goto B424e4a;
case 0x424e4b:c.instructions+=5;goto B424e4b;
case 0x424e4c:c.instructions+=4;goto B424e4c;
case 0x424e4d:c.instructions+=3;goto B424e4d;
case 0x424e55:c.instructions+=2;goto B424e55;
case 0x424e5d:c.instructions+=1;goto B424e5d;
case 0x424e62:goto L424e62;
case 0x424e65:c.instructions+=3;goto B424e65;
case 0x424e67:c.instructions+=2;goto B424e67;
case 0x424e6b:c.instructions+=1;goto B424e6b;
case 0x424e71:goto L424e71;
case 0x424e77:c.instructions+=3;goto B424e77;
case 0x424e78:c.instructions+=2;goto B424e78;
case 0x424e7a:c.instructions+=1;goto B424e7a;
case 0x424e7f:goto L424e7f;
case 0x424e81:c.instructions+=1;goto B424e81;
case 0x424e83:goto L424e83;
case 0x424e89:c.instructions+=3;goto B424e89;
case 0x424e8b:c.instructions+=2;goto B424e8b;
case 0x424e91:c.instructions+=1;goto B424e91;
case 0x424e93:goto L424e93;
case 0x424e95:c.instructions+=1;goto B424e95;
case 0x424e9a:goto L424e9a;
case 0x424e9c:c.instructions+=3;goto B424e9c;
case 0x424e9f:c.instructions+=2;goto B424e9f;
case 0x424ea1:c.instructions+=1;goto B424ea1;
case 0x424ea4:goto L424ea4;
case 0x424ea8:c.instructions+=3;goto B424ea8;
case 0x424eaa:c.instructions+=2;goto B424eaa;
case 0x424ead:c.instructions+=1;goto B424ead;
case 0x424eb2:goto L424eb2;
case 0x424eb5:c.instructions+=6;goto B424eb5;
case 0x424eb7:c.instructions+=5;goto B424eb7;
case 0x424eba:c.instructions+=4;goto B424eba;
case 0x424ebd:c.instructions+=3;goto B424ebd;
case 0x424ec3:c.instructions+=2;goto B424ec3;
case 0x424ec5:c.instructions+=1;goto B424ec5;
case 0x424ecb:goto L424ecb;
case 0x424ecf:c.instructions+=7;goto B424ecf;
case 0x424ed3:c.instructions+=6;goto B424ed3;
case 0x424ed9:c.instructions+=5;goto B424ed9;
case 0x424edf:c.instructions+=4;goto B424edf;
case 0x424ee5:c.instructions+=3;goto B424ee5;
case 0x424ee7:c.instructions+=2;goto B424ee7;
case 0x424eea:c.instructions+=1;goto B424eea;
case 0x424eec:goto L424eec;
case 0x424ef2:c.instructions+=4;goto B424ef2;
case 0x424ef8:c.instructions+=3;goto B424ef8;
case 0x424efa:c.instructions+=2;goto B424efa;
case 0x424efd:c.instructions+=1;goto B424efd;
case 0x424eff:goto L424eff;
case 0x424f01:c.instructions+=1;goto B424f01;
case 0x424f07:goto L424f07;
case 0x424f0b:c.instructions+=4;goto B424f0b;
case 0x424f0d:c.instructions+=3;goto B424f0d;
case 0x424f0f:c.instructions+=2;goto B424f0f;
case 0x424f12:c.instructions+=1;goto B424f12;
case 0x424f14:goto L424f14;
case 0x424f16:c.instructions+=1;goto B424f16;
case 0x424f1a:goto L424f1a;
case 0x424f1e:c.instructions+=10;goto B424f1e;
case 0x424f24:c.instructions+=9;goto B424f24;
case 0x424f27:c.instructions+=8;goto B424f27;
case 0x424f2b:c.instructions+=7;goto B424f2b;
case 0x424f2d:c.instructions+=6;goto B424f2d;
case 0x424f2f:c.instructions+=5;goto B424f2f;
case 0x424f32:c.instructions+=4;goto B424f32;
case 0x424f37:c.instructions+=3;goto B424f37;
case 0x424f3c:c.instructions+=2;goto B424f3c;
case 0x424f3d:c.instructions+=1;goto B424f3d;
case 0x424f42:goto L424f42;
case 0x424f43:c.instructions+=4;goto B424f43;
case 0x424f46:c.instructions+=3;goto B424f46;
case 0x424f47:c.instructions+=2;goto B424f47;
case 0x424f48:c.instructions+=1;goto B424f48;
case 0x424f4d:goto L424f4d;
case 0x424f50:c.instructions+=2;goto B424f50;
case 0x424f53:c.instructions+=1;goto B424f53;
case 0x424f55:goto L424f55;
case 0x424f59:c.instructions+=2;goto B424f59;
case 0x424f5a:c.instructions+=1;goto B424f5a;
case 0x424f5f:goto L424f5f;
case 0x424f63:c.instructions+=4;goto B424f63;
case 0x424f69:c.instructions+=3;goto B424f69;
case 0x424f6b:c.instructions+=2;goto B424f6b;
case 0x424f6e:c.instructions+=1;goto B424f6e;
case 0x424f74:goto L424f74;
case 0x424f78:c.instructions+=4;goto B424f78;
case 0x424f7e:c.instructions+=3;goto B424f7e;
case 0x424f80:c.instructions+=2;goto B424f80;
case 0x424f83:c.instructions+=1;goto B424f83;
case 0x424f89:goto L424f89;
case 0x424f8d:c.instructions+=2;goto B424f8d;
case 0x424f8f:c.instructions+=1;goto B424f8f;
case 0x424f92:goto L424f92;
case 0x424f98:c.instructions+=11;goto B424f98;
case 0x424f9a:c.instructions+=10;goto B424f9a;
case 0x424f9e:c.instructions+=9;goto B424f9e;
case 0x424f9f:c.instructions+=8;goto B424f9f;
case 0x424fa1:c.instructions+=7;goto B424fa1;
case 0x424fab:c.instructions+=6;goto B424fab;
case 0x424fb5:c.instructions+=5;goto B424fb5;
case 0x424fbd:c.instructions+=4;goto B424fbd;
case 0x424fc5:c.instructions+=3;goto B424fc5;
case 0x424fcd:c.instructions+=2;goto B424fcd;
case 0x424fd5:c.instructions+=1;goto B424fd5;
case 0x424fda:goto L424fda;
case 0x424fdb:c.instructions+=4;goto B424fdb;
case 0x424fde:c.instructions+=3;goto B424fde;
case 0x424fdf:c.instructions+=2;goto B424fdf;
case 0x424fe3:c.instructions+=1;goto B424fe3;
case 0x424fe8:goto L424fe8;
case 0x424fe9:c.instructions+=5;goto B424fe9;
case 0x424ff0:c.instructions+=4;goto B424ff0;
case 0x424ff7:c.instructions+=3;goto B424ff7;
case 0x424ffe:c.instructions+=2;goto B424ffe;
case 0x424fff:c.instructions+=1;goto B424fff;
default:missing_instruction(c.pc);}
B424001:L424001:{c.instructions+=2;NFSU2_TR(0x424001);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424003:{NFSU2_TR(0x424003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42415b;}}
}
B424009:L424009:{c.instructions+=3;NFSU2_TR(0x424009);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B42400e:{NFSU2_TR(0x42400e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424010:{NFSU2_TR(0x424010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42415b;}}
}
B424016:L424016:{c.instructions+=3;NFSU2_TR(0x424016);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B42401b:{NFSU2_TR(0x42401b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42401d:{NFSU2_TR(0x42401d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42415b;}}
}
B424023:L424023:{c.instructions+=3;NFSU2_TR(0x424023);
__builtin_memmove((R+0),gp(0x890104),4);
}
B424028:{NFSU2_TR(0x424028);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42402a:{NFSU2_TR(0x42402a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42415b;}}
}
B424030:L424030:{c.instructions+=2;NFSU2_TR(0x424030);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424032:{NFSU2_TR(0x424032);
if(r1(R+518)){{goto L42415b;}}
}
B424038:L424038:{c.instructions+=3;NFSU2_TR(0x424038);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42403e:{NFSU2_TR(0x42403e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424040:{NFSU2_TR(0x424040);
if(r1(R+518)){{goto L42415b;}}
}
B424046:L424046:{c.instructions+=4;NFSU2_TR(0x424046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424048:{NFSU2_TR(0x424048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42404a:{NFSU2_TR(0x42404a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42404b:{NFSU2_TR(0x42404b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424050ull));
TAIL_STATIC(0x40df50u,40d);
}
B424050:L424050:{c.instructions+=3;NFSU2_TR(0x424050);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B424053:{NFSU2_TR(0x424053);
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
B424056:{NFSU2_TR(0x424056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424083;}}
}
B424058:L424058:{c.instructions+=3;NFSU2_TR(0x424058);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424059:{NFSU2_TR(0x424059);
__builtin_memmove((R+4),(R+24),4);
}
B42405b:{NFSU2_TR(0x42405b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424060ull));
TAIL_STATIC(0x60bff0u,60b);
}
B424060:L424060:{c.instructions+=4;NFSU2_TR(0x424060);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424066:{NFSU2_TR(0x424066);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424068:{NFSU2_TR(0x424068);
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
B42406b:{NFSU2_TR(0x42406b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424083;}}
}
B42406d:L42406d:{c.instructions+=6;NFSU2_TR(0x42406d);
__builtin_memmove((R+8),gp(0x783704),4);
}
B424073:{NFSU2_TR(0x424073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424075:{NFSU2_TR(0x424075);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424076:{NFSU2_TR(0x424076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424077:{NFSU2_TR(0x424077);
__builtin_memmove((R+4),(R+28),4);
}
B424079:{NFSU2_TR(0x424079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42407eull));
TAIL_STATIC(0x40dee0u,40d);
}
B42407e:L42407e:{c.instructions+=1;NFSU2_TR(0x42407e);
{goto L424162;}
}
B424083:L424083:{c.instructions+=7;NFSU2_TR(0x424083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B424085:{NFSU2_TR(0x424085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424086:{NFSU2_TR(0x424086);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424087:{NFSU2_TR(0x424087);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42408b:{NFSU2_TR(0x42408b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42408c:{NFSU2_TR(0x42408c);
__builtin_memmove((R+4),(R+24),4);
}
B42408e:{NFSU2_TR(0x42408e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424093ull));
TAIL_STATIC(0x60c050u,60c);
}
B424093:L424093:{c.instructions+=2;NFSU2_TR(0x424093);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424099:{NFSU2_TR(0x424099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42409eull));
TAIL_STATIC(0x614880u,614);
}
B42409e:L42409e:{c.instructions+=3;NFSU2_TR(0x42409e);
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
B4240a0:{NFSU2_TR(0x4240a0);
w4(R+12,u32(0x3ull));
}
B4240a5:{NFSU2_TR(0x4240a5);
if(r1(R+518)){{goto L4240f7;}}
}
B4240a7:L4240a7:{c.instructions+=4;NFSU2_TR(0x4240a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4240a9:{NFSU2_TR(0x4240a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4240ac:{NFSU2_TR(0x4240ac);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B4240af:{NFSU2_TR(0x4240af);
if(r1(R+518)){{goto L4240f7;}}
}
B4240b1:L4240b1:{c.instructions+=3;NFSU2_TR(0x4240b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4240b5:{NFSU2_TR(0x4240b5);
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
B4240b7:{NFSU2_TR(0x4240b7);
if(r1(R+518)){{goto L4240d4;}}
}
B4240b9:L4240b9:{c.instructions+=8;NFSU2_TR(0x4240b9);
__builtin_memmove((R+8),gp(0x783704),4);
}
B4240bf:{NFSU2_TR(0x4240bf);
__builtin_memmove((R+0),gp(0x783708),4);
}
B4240c4:{NFSU2_TR(0x4240c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4240c5:{NFSU2_TR(0x4240c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4240c6:{NFSU2_TR(0x4240c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4240c7:{NFSU2_TR(0x4240c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4240c8:{NFSU2_TR(0x4240c8);
__builtin_memmove((R+4),(R+28),4);
}
B4240ca:{NFSU2_TR(0x4240ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4240cfull));
TAIL_STATIC(0x402940u,402);
}
B4240cf:L4240cf:{c.instructions+=1;NFSU2_TR(0x4240cf);
{goto L424162;}
}
B4240d4:L4240d4:{c.instructions+=3;NFSU2_TR(0x4240d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4240d8:{NFSU2_TR(0x4240d8);
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
B4240da:{NFSU2_TR(0x4240da);
if(r1(R+518)){{goto L42415b;}}
}
B4240dc:L4240dc:{c.instructions+=3;NFSU2_TR(0x4240dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4240e0:{NFSU2_TR(0x4240e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4240e2:{NFSU2_TR(0x4240e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4240e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4240e5:L4240e5:{c.instructions+=3;NFSU2_TR(0x4240e5);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4240eb:{NFSU2_TR(0x4240eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4240f5:{NFSU2_TR(0x4240f5);
{goto L424162;}
}
B4240f7:L4240f7:{c.instructions+=3;NFSU2_TR(0x4240f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4240f8:{NFSU2_TR(0x4240f8);
__builtin_memmove((R+4),(R+24),4);
}
B4240fa:{NFSU2_TR(0x4240fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4240ffull));
TAIL_STATIC(0x60bff0u,60b);
}
B4240ff:L4240ff:{c.instructions+=4;NFSU2_TR(0x4240ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424105:{NFSU2_TR(0x424105);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424107:{NFSU2_TR(0x424107);
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
B42410a:{NFSU2_TR(0x42410a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424150;}}
}
B42410c:L42410c:{c.instructions+=4;NFSU2_TR(0x42410c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42410e:{NFSU2_TR(0x42410e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424111:{NFSU2_TR(0x424111);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B424114:{NFSU2_TR(0x424114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4240dcu);}goto L4240dc;}}
}
B424116:L424116:{c.instructions+=11;NFSU2_TR(0x424116);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42411c:{NFSU2_TR(0x42411c);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424122:{NFSU2_TR(0x424122);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424125:{NFSU2_TR(0x424125);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B424128:{NFSU2_TR(0x424128);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42412e:{NFSU2_TR(0x42412e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B424130:{NFSU2_TR(0x424130);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B424132:{NFSU2_TR(0x424132);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424138:{NFSU2_TR(0x424138);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42413a:{NFSU2_TR(0x42413a);
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
B42413d:{NFSU2_TR(0x42413d);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4240dcu);}goto L4240dc;}}
}
B42413f:L42413f:{c.instructions+=4;NFSU2_TR(0x42413f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424146:{NFSU2_TR(0x424146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424148:{NFSU2_TR(0x424148);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42414e:{NFSU2_TR(0x42414e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4240e5u);}goto L4240e5;}
}
B424150:L424150:{c.instructions+=3;NFSU2_TR(0x424150);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424154:{NFSU2_TR(0x424154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424156:{NFSU2_TR(0x424156);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424159ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B424159:L424159:{c.instructions+=1;NFSU2_TR(0x424159);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4240e5u);}goto L4240e5;}
}
B42415b:L42415b:{c.instructions+=1;NFSU2_TR(0x42415b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424162:L424162:{c.instructions+=3;NFSU2_TR(0x424162);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B424168:{NFSU2_TR(0x424168);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42416a:{NFSU2_TR(0x42416a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4241a7;}}
}
B42416c:L42416c:{c.instructions+=5;NFSU2_TR(0x42416c);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424172:{NFSU2_TR(0x424172);
{u32 ea_=u32(u32(7878416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424178:{NFSU2_TR(0x424178);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42417a:{NFSU2_TR(0x42417a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42417d:{NFSU2_TR(0x42417d);
if(r1(R+514)){{goto L4241a7;}}
}
B42417f:L42417f:{c.instructions+=3;NFSU2_TR(0x42417f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B424185:{NFSU2_TR(0x424185);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424187:{NFSU2_TR(0x424187);
if(r1(R+518)){{goto L42419b;}}
}
B424189:L424189:{c.instructions+=1;NFSU2_TR(0x424189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42418eull));
TAIL_STATIC(0x402000u,402);
}
B42418e:L42418e:{c.instructions+=4;NFSU2_TR(0x42418e);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424194:{NFSU2_TR(0x424194);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424196:{NFSU2_TR(0x424196);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424199:{NFSU2_TR(0x424199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4241a7;}}
}
B42419b:L42419b:{c.instructions+=2;NFSU2_TR(0x42419b);
__builtin_memmove((R+4),gp(0x783710),4);
}
B4241a1:{NFSU2_TR(0x4241a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4241a7:L4241a7:{c.instructions+=6;NFSU2_TR(0x4241a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4241a8:{NFSU2_TR(0x4241a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4241a9:{NFSU2_TR(0x4241a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4241aa:{NFSU2_TR(0x4241aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4241ab:{NFSU2_TR(0x4241ab);
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
B4241ae:{NFSU2_TR(0x4241ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4241c0:L4241c0:{c.instructions+=9;NFSU2_TR(0x4241c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4241c4:{NFSU2_TR(0x4241c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4241c5:{NFSU2_TR(0x4241c5);
__builtin_memmove((R+24),(R+4),4);
}
B4241c7:{NFSU2_TR(0x4241c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4241cb:{NFSU2_TR(0x4241cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4241cc:{NFSU2_TR(0x4241cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4241cd:{NFSU2_TR(0x4241cd);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4241cf:{NFSU2_TR(0x4241cf);
__builtin_memmove((R+4),(R+24),4);
}
B4241d1:{NFSU2_TR(0x4241d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4241d6ull));
TAIL_STATIC(0x4234a0u,423);
}
B4241d6:L4241d6:{c.instructions+=9;NFSU2_TR(0x4241d6);
u8 U[4];
w4(U+0,u32(0x7857e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4241dc:{NFSU2_TR(0x4241dc);
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
B4241de:{NFSU2_TR(0x4241de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4241e4:{NFSU2_TR(0x4241e4);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4241ea:{NFSU2_TR(0x4241ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4241f0:{NFSU2_TR(0x4241f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4241f6:{NFSU2_TR(0x4241f6);
__builtin_memmove((R+0),(R+24),4);
}
B4241f8:{NFSU2_TR(0x4241f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4241f9:{NFSU2_TR(0x4241f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424200:L424200:{c.instructions+=2;NFSU2_TR(0x424200);
w4(R+0,u32(0x78580cull));
}
B424205:{NFSU2_TR(0x424205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424210:L424210:{c.instructions+=9;NFSU2_TR(0x424210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424211:{NFSU2_TR(0x424211);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424212:{NFSU2_TR(0x424212);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B424216:{NFSU2_TR(0x424216);
__builtin_memmove((R+24),(R+4),4);
}
B424218:{NFSU2_TR(0x424218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424219:{NFSU2_TR(0x424219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42421c:{NFSU2_TR(0x42421c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42421d:{NFSU2_TR(0x42421d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B424223:{NFSU2_TR(0x424223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424228ull));
TAIL_STATIC(0x420d40u,420);
}
B424228:L424228:{c.instructions+=16;NFSU2_TR(0x424228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42422e:{NFSU2_TR(0x42422e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B424230:{NFSU2_TR(0x424230);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B424236:{NFSU2_TR(0x424236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42423c:{NFSU2_TR(0x42423c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424242:{NFSU2_TR(0x424242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424248:{NFSU2_TR(0x424248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42424e:{NFSU2_TR(0x42424e);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B424254:{NFSU2_TR(0x424254);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B424256:{NFSU2_TR(0x424256);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42425a:{NFSU2_TR(0x42425a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42425e:{NFSU2_TR(0x42425e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B424264:{NFSU2_TR(0x424264);
{u32 ea_=u32(u32(7878432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42426a:{NFSU2_TR(0x42426a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42426c:{NFSU2_TR(0x42426c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42426f:{NFSU2_TR(0x42426f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424287;}}
}
B424271:L424271:{c.instructions+=2;NFSU2_TR(0x424271);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B424277:{NFSU2_TR(0x424277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424287;}}
}
B424279:L424279:{c.instructions+=2;NFSU2_TR(0x424279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42427b:{NFSU2_TR(0x42427b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424280ull));
TAIL_STATIC(0x5ebf60u,5eb);
}
B424280:L424280:{c.instructions+=1;NFSU2_TR(0x424280);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424287:L424287:{c.instructions+=3;NFSU2_TR(0x424287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424288:{NFSU2_TR(0x424288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424289:{NFSU2_TR(0x424289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424290:L424290:{c.instructions+=9;NFSU2_TR(0x424290);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424294:{NFSU2_TR(0x424294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424295:{NFSU2_TR(0x424295);
__builtin_memmove((R+24),(R+4),4);
}
B424297:{NFSU2_TR(0x424297);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42429b:{NFSU2_TR(0x42429b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42429c:{NFSU2_TR(0x42429c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42429d:{NFSU2_TR(0x42429d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42429f:{NFSU2_TR(0x42429f);
__builtin_memmove((R+4),(R+24),4);
}
B4242a1:{NFSU2_TR(0x4242a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4242a6ull));
TAIL_STATIC(0x4234a0u,423);
}
B4242a6:L4242a6:{c.instructions+=4;NFSU2_TR(0x4242a6);
u8 U[4];
w4(U+0,u32(0x785820ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4242ac:{NFSU2_TR(0x4242ac);
__builtin_memmove((R+0),(R+24),4);
}
B4242ae:{NFSU2_TR(0x4242ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4242af:{NFSU2_TR(0x4242af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4242c0:L4242c0:{c.instructions+=2;NFSU2_TR(0x4242c0);
w4(R+0,u32(0x785844ull));
}
B4242c5:{NFSU2_TR(0x4242c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4242d0:L4242d0:{c.instructions+=14;NFSU2_TR(0x4242d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4242d1:{NFSU2_TR(0x4242d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4242d2:{NFSU2_TR(0x4242d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4242d3:{NFSU2_TR(0x4242d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4242d7:{NFSU2_TR(0x4242d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4242da:{NFSU2_TR(0x4242da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4242dd:{NFSU2_TR(0x4242dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4242de:{NFSU2_TR(0x4242de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4242df:{NFSU2_TR(0x4242df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4242e5:{NFSU2_TR(0x4242e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4242e9:{NFSU2_TR(0x4242e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4242eb:{NFSU2_TR(0x4242eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4242ed:{NFSU2_TR(0x4242ed);
__builtin_memmove((R+24),(R+4),4);
}
B4242ef:{NFSU2_TR(0x4242ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L424300;}}
}
B4242f1:L4242f1:{c.instructions+=2;NFSU2_TR(0x4242f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4242f4:{NFSU2_TR(0x4242f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L424305;}}
}
B4242f6:L4242f6:{c.instructions+=2;NFSU2_TR(0x4242f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4242fe:{NFSU2_TR(0x4242fe);
{goto L42431a;}
}
B424300:L424300:{c.instructions+=2;NFSU2_TR(0x424300);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B424303:{NFSU2_TR(0x424303);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L424312;}}
}
B424305:L424305:{c.instructions+=3;NFSU2_TR(0x424305);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B424308:{NFSU2_TR(0x424308);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424310:{NFSU2_TR(0x424310);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42431a;}}
}
B424312:L424312:{c.instructions+=1;NFSU2_TR(0x424312);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42431a:L42431a:{c.instructions+=3;NFSU2_TR(0x42431a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424320:{NFSU2_TR(0x424320);
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
B424322:{NFSU2_TR(0x424322);
if(r1(R+518)){{goto L42432f;}}
}
B424324:L424324:{c.instructions+=4;NFSU2_TR(0x424324);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424327:{NFSU2_TR(0x424327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424329:{NFSU2_TR(0x424329);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42432a:{NFSU2_TR(0x42432a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42432dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42432d:L42432d:{c.instructions+=1;NFSU2_TR(0x42432d);
{goto L424331;}
}
B42432f:L42432f:{c.instructions+=1;NFSU2_TR(0x42432f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424331:L424331:{c.instructions+=3;NFSU2_TR(0x424331);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B424335:{NFSU2_TR(0x424335);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424336:{NFSU2_TR(0x424336);
if(r1(R+518)){{goto L424345;}}
}
B424338:L424338:{c.instructions+=4;NFSU2_TR(0x424338);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42433b:{NFSU2_TR(0x42433b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42433c:{NFSU2_TR(0x42433c);
__builtin_memmove((R+4),(R+28),4);
}
B42433e:{NFSU2_TR(0x42433e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424343ull));
TAIL_STATIC(0x420ed0u,420);
}
B424343:L424343:{c.instructions+=1;NFSU2_TR(0x424343);
{goto L424350;}
}
B424345:L424345:{c.instructions+=4;NFSU2_TR(0x424345);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B424348:{NFSU2_TR(0x424348);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424349:{NFSU2_TR(0x424349);
__builtin_memmove((R+4),(R+28),4);
}
B42434b:{NFSU2_TR(0x42434b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424350ull));
TAIL_STATIC(0x420d40u,420);
}
B424350:L424350:{c.instructions+=4;NFSU2_TR(0x424350);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424357:{NFSU2_TR(0x424357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B424359:{NFSU2_TR(0x424359);
__builtin_memmove((R+4),(R+12),4);
}
B42435b:{NFSU2_TR(0x42435b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42435eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42435e:L42435e:{c.instructions+=4;NFSU2_TR(0x42435e);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424364:{NFSU2_TR(0x424364);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B424369:{NFSU2_TR(0x424369);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42436b:{NFSU2_TR(0x42436b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424376;}}
}
B42436d:L42436d:{c.instructions+=3;NFSU2_TR(0x42436d);
__builtin_memmove((R+0),gp(0x890108),4);
}
B424372:{NFSU2_TR(0x424372);
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
B424374:{NFSU2_TR(0x424374);
if(r1(R+518)){{goto L42438b;}}
}
B424376:L424376:{c.instructions+=4;NFSU2_TR(0x424376);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42437a:{NFSU2_TR(0x42437a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42437d:{NFSU2_TR(0x42437d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B424381:{NFSU2_TR(0x424381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42438b;}}
}
B424383:L424383:{c.instructions+=3;NFSU2_TR(0x424383);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424384:{NFSU2_TR(0x424384);
__builtin_memmove((R+4),(R+24),4);
}
B424386:{NFSU2_TR(0x424386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42438bull));
TAIL_STATIC(0x40e390u,40e);
}
B42438b:L42438b:{c.instructions+=10;NFSU2_TR(0x42438b);
__builtin_memmove((R+8),gp(0x783724),4);
}
B424391:{NFSU2_TR(0x424391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424392:{NFSU2_TR(0x424392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424398:{NFSU2_TR(0x424398);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42439f:{NFSU2_TR(0x42439f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4243a6:{NFSU2_TR(0x4243a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4243a7:{NFSU2_TR(0x4243a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4243a8:{NFSU2_TR(0x4243a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4243a9:{NFSU2_TR(0x4243a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4243aa:{NFSU2_TR(0x4243aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4243b0:L4243b0:{c.instructions+=19;NFSU2_TR(0x4243b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243b2:{NFSU2_TR(0x4243b2);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243b7:{NFSU2_TR(0x4243b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4243bd:{NFSU2_TR(0x4243bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243be:{NFSU2_TR(0x4243be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4243c5:{NFSU2_TR(0x4243c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243c6:{NFSU2_TR(0x4243c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4243ca:{NFSU2_TR(0x4243ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243cb:{NFSU2_TR(0x4243cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243cc:{NFSU2_TR(0x4243cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243cd:{NFSU2_TR(0x4243cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243ce:{NFSU2_TR(0x4243ce);
__builtin_memmove((R+28),(R+4),4);
}
B4243d0:{NFSU2_TR(0x4243d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4243d4:{NFSU2_TR(0x4243d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243d5:{NFSU2_TR(0x4243d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243d6:{NFSU2_TR(0x4243d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4243d8:{NFSU2_TR(0x4243d8);
__builtin_memmove((R+4),(R+28),4);
}
B4243da:{NFSU2_TR(0x4243da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4243de:{NFSU2_TR(0x4243de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4243e3ull));
TAIL_STATIC(0x4234a0u,423);
}
B4243e3:L4243e3:{c.instructions+=9;NFSU2_TR(0x4243e3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4243e5:{NFSU2_TR(0x4243e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4243eb:{NFSU2_TR(0x4243eb);
u8 U[4];
w4(U+0,u32(0x785858ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4243f1:{NFSU2_TR(0x4243f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4243f5:{NFSU2_TR(0x4243f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4243f8:{NFSU2_TR(0x4243f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4243fe:{NFSU2_TR(0x4243fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B424401:{NFSU2_TR(0x424401);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424406:{NFSU2_TR(0x424406);
if(r1(R+518)){{goto L424419;}}
}
B424408:L424408:{c.instructions+=2;NFSU2_TR(0x424408);
__builtin_memmove((R+4),(R+24),4);
}
B42440a:{NFSU2_TR(0x42440a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42440full));
TAIL_STATIC(0x614810u,614);
}
B42440f:L42440f:{c.instructions+=4;NFSU2_TR(0x42440f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424411:{NFSU2_TR(0x424411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424414:{NFSU2_TR(0x424414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424416:{NFSU2_TR(0x424416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424419:L424419:{c.instructions+=4;NFSU2_TR(0x424419);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42441d:{NFSU2_TR(0x42441d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42441f:{NFSU2_TR(0x42441f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424422:{NFSU2_TR(0x424422);
if(r1(R+518)){{goto L424438;}}
}
B424424:L424424:{c.instructions+=2;NFSU2_TR(0x424424);
__builtin_memmove((R+4),(R+24),4);
}
B424426:{NFSU2_TR(0x424426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42442bull));
TAIL_STATIC(0x614810u,614);
}
B42442b:L42442b:{c.instructions+=5;NFSU2_TR(0x42442b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42442e:{NFSU2_TR(0x42442e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424430:{NFSU2_TR(0x424430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424433:{NFSU2_TR(0x424433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424436:{NFSU2_TR(0x424436);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B424438:L424438:{c.instructions+=11;NFSU2_TR(0x424438);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42443a:{NFSU2_TR(0x42443a);
{u32 ea_=u32(u32(7878440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424440:{NFSU2_TR(0x424440);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B424444:{NFSU2_TR(0x424444);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424448:{NFSU2_TR(0x424448);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42444c:{NFSU2_TR(0x42444c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424452:{NFSU2_TR(0x424452);
{u32 ea_=u32(r4(R+28)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424458:{NFSU2_TR(0x424458);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42445e:{NFSU2_TR(0x42445e);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B424464:{NFSU2_TR(0x424464);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42446a:{NFSU2_TR(0x42446a);
if(r1(R+518)){{goto L42448c;}}
}
B42446c:L42446c:{c.instructions+=2;NFSU2_TR(0x42446c);
__builtin_memmove((R+4),(R+12),4);
}
B42446e:{NFSU2_TR(0x42446e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424473ull));
TAIL_STATIC(0x6148c0u,614);
}
B424473:L424473:{c.instructions+=2;NFSU2_TR(0x424473);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424475:{NFSU2_TR(0x424475);
if(r1(R+518)){{goto L42448c;}}
}
B424477:L424477:{c.instructions+=2;NFSU2_TR(0x424477);
__builtin_memmove((R+4),(R+12),4);
}
B424479:{NFSU2_TR(0x424479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42447eull));
TAIL_STATIC(0x60bee0u,60b);
}
B42447e:L42447e:{c.instructions+=3;NFSU2_TR(0x42447e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424484:{NFSU2_TR(0x424484);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42448a:{NFSU2_TR(0x42448a);
{goto L424492;}
}
B42448c:L42448c:{c.instructions+=1;NFSU2_TR(0x42448c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424492:L424492:{c.instructions+=9;NFSU2_TR(0x424492);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424496:{NFSU2_TR(0x424496);
__builtin_memmove((R+0),(R+28),4);
}
B424498:{NFSU2_TR(0x424498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424499:{NFSU2_TR(0x424499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42449a:{NFSU2_TR(0x42449a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42449b:{NFSU2_TR(0x42449b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42449c:{NFSU2_TR(0x42449c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4244a3:{NFSU2_TR(0x4244a3);
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
B4244a6:{NFSU2_TR(0x4244a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4244b0:L4244b0:{c.instructions+=2;NFSU2_TR(0x4244b0);
w4(R+0,u32(0x78587cull));
}
B4244b5:{NFSU2_TR(0x4244b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4244c0:L4244c0:{c.instructions+=3;NFSU2_TR(0x4244c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244c1:{NFSU2_TR(0x4244c1);
__builtin_memmove((R+24),(R+4),4);
}
B4244c3:{NFSU2_TR(0x4244c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4244c8ull));
{goto L4244f0;}
}
B4244c8:L4244c8:{c.instructions+=2;NFSU2_TR(0x4244c8);
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
B4244cd:{NFSU2_TR(0x4244cd);
if(r1(R+518)){{goto L4244de;}}
}
B4244cf:L4244cf:{c.instructions+=4;NFSU2_TR(0x4244cf);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4244d4:{NFSU2_TR(0x4244d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244d5:{NFSU2_TR(0x4244d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244d6:{NFSU2_TR(0x4244d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4244dbull));
TAIL_STATIC(0x43f920u,43f);
}
B4244db:L4244db:{c.instructions+=1;NFSU2_TR(0x4244db);
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
B4244de:L4244de:{c.instructions+=3;NFSU2_TR(0x4244de);
__builtin_memmove((R+0),(R+24),4);
}
B4244e0:{NFSU2_TR(0x4244e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4244e1:{NFSU2_TR(0x4244e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4244f0:L4244f0:{c.instructions+=16;NFSU2_TR(0x4244f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244f2:{NFSU2_TR(0x4244f2);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244f7:{NFSU2_TR(0x4244f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4244fd:{NFSU2_TR(0x4244fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4244fe:{NFSU2_TR(0x4244fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424505:{NFSU2_TR(0x424505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424506:{NFSU2_TR(0x424506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424507:{NFSU2_TR(0x424507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424508:{NFSU2_TR(0x424508);
__builtin_memmove((R+28),(R+4),4);
}
B42450a:{NFSU2_TR(0x42450a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42450e:{NFSU2_TR(0x42450e);
u8 U[4];
w4(U+0,u32(0x785858ull));
s4(u32(r4(R+28)),r4(U+0));
}
B424514:{NFSU2_TR(0x424514);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42451a:{NFSU2_TR(0x42451a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42451c:{NFSU2_TR(0x42451c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424522:{NFSU2_TR(0x424522);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42452a:{NFSU2_TR(0x42452a);
if(r1(R+518)){{goto L42453d;}}
}
B42452c:L42452c:{c.instructions+=2;NFSU2_TR(0x42452c);
__builtin_memmove((R+4),(R+24),4);
}
B42452e:{NFSU2_TR(0x42452e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424533ull));
TAIL_STATIC(0x614810u,614);
}
B424533:L424533:{c.instructions+=4;NFSU2_TR(0x424533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424535:{NFSU2_TR(0x424535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424538:{NFSU2_TR(0x424538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42453a:{NFSU2_TR(0x42453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42453d:L42453d:{c.instructions+=8;NFSU2_TR(0x42453d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424541:{NFSU2_TR(0x424541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424548:{NFSU2_TR(0x424548);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42454e:{NFSU2_TR(0x42454e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42454f:{NFSU2_TR(0x42454f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424550:{NFSU2_TR(0x424550);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424557:{NFSU2_TR(0x424557);
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
B42455a:{NFSU2_TR(0x42455a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424560:L424560:{c.instructions+=17;NFSU2_TR(0x424560);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424562:{NFSU2_TR(0x424562);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424567:{NFSU2_TR(0x424567);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42456d:{NFSU2_TR(0x42456d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42456e:{NFSU2_TR(0x42456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424575:{NFSU2_TR(0x424575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424576:{NFSU2_TR(0x424576);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42457a:{NFSU2_TR(0x42457a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42457b:{NFSU2_TR(0x42457b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42457c:{NFSU2_TR(0x42457c);
__builtin_memmove((R+28),(R+4),4);
}
B42457e:{NFSU2_TR(0x42457e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424582:{NFSU2_TR(0x424582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424583:{NFSU2_TR(0x424583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424584:{NFSU2_TR(0x424584);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424586:{NFSU2_TR(0x424586);
__builtin_memmove((R+4),(R+28),4);
}
B424588:{NFSU2_TR(0x424588);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42458c:{NFSU2_TR(0x42458c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424591ull));
TAIL_STATIC(0x4234a0u,423);
}
B424591:L424591:{c.instructions+=8;NFSU2_TR(0x424591);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424597:{NFSU2_TR(0x424597);
u8 U[4];
w4(U+0,u32(0x78588cull));
s4(u32(r4(R+28)),r4(U+0));
}
B42459d:{NFSU2_TR(0x42459d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4245a5:{NFSU2_TR(0x4245a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4245ac:{NFSU2_TR(0x4245ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4245af:{NFSU2_TR(0x4245af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4245b1:{NFSU2_TR(0x4245b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4245b6:{NFSU2_TR(0x4245b6);
if(r1(R+518)){{goto L4245c9;}}
}
B4245b8:L4245b8:{c.instructions+=2;NFSU2_TR(0x4245b8);
__builtin_memmove((R+4),(R+24),4);
}
B4245ba:{NFSU2_TR(0x4245ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4245bfull));
TAIL_STATIC(0x614810u,614);
}
B4245bf:L4245bf:{c.instructions+=4;NFSU2_TR(0x4245bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4245c1:{NFSU2_TR(0x4245c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4245c4:{NFSU2_TR(0x4245c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4245c6:{NFSU2_TR(0x4245c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4245c9:L4245c9:{c.instructions+=4;NFSU2_TR(0x4245c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4245cd:{NFSU2_TR(0x4245cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4245cf:{NFSU2_TR(0x4245cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4245d2:{NFSU2_TR(0x4245d2);
if(r1(R+518)){{goto L4245e8;}}
}
B4245d4:L4245d4:{c.instructions+=2;NFSU2_TR(0x4245d4);
__builtin_memmove((R+4),(R+24),4);
}
B4245d6:{NFSU2_TR(0x4245d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4245dbull));
TAIL_STATIC(0x614810u,614);
}
B4245db:L4245db:{c.instructions+=5;NFSU2_TR(0x4245db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4245de:{NFSU2_TR(0x4245de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4245e0:{NFSU2_TR(0x4245e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4245e3:{NFSU2_TR(0x4245e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4245e6:{NFSU2_TR(0x4245e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4245e8:L4245e8:{c.instructions+=7;NFSU2_TR(0x4245e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4245ec:{NFSU2_TR(0x4245ec);
__builtin_memmove((R+0),(R+28),4);
}
B4245ee:{NFSU2_TR(0x4245ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4245ef:{NFSU2_TR(0x4245ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4245f0:{NFSU2_TR(0x4245f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4245f7:{NFSU2_TR(0x4245f7);
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
B4245fa:{NFSU2_TR(0x4245fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424600:L424600:{c.instructions+=2;NFSU2_TR(0x424600);
w4(R+0,u32(0x7858b0ull));
}
B424605:{NFSU2_TR(0x424605);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424610:L424610:{c.instructions+=3;NFSU2_TR(0x424610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424611:{NFSU2_TR(0x424611);
__builtin_memmove((R+24),(R+4),4);
}
B424613:{NFSU2_TR(0x424613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424618ull));
{goto L424640;}
}
B424618:L424618:{c.instructions+=2;NFSU2_TR(0x424618);
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
B42461d:{NFSU2_TR(0x42461d);
if(r1(R+518)){{goto L42462e;}}
}
B42461f:L42461f:{c.instructions+=4;NFSU2_TR(0x42461f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B424624:{NFSU2_TR(0x424624);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424625:{NFSU2_TR(0x424625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424626:{NFSU2_TR(0x424626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42462bull));
TAIL_STATIC(0x43f920u,43f);
}
B42462b:L42462b:{c.instructions+=1;NFSU2_TR(0x42462b);
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
B42462e:L42462e:{c.instructions+=3;NFSU2_TR(0x42462e);
__builtin_memmove((R+0),(R+24),4);
}
B424630:{NFSU2_TR(0x424630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424631:{NFSU2_TR(0x424631);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424640:L424640:{c.instructions+=16;NFSU2_TR(0x424640);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424642:{NFSU2_TR(0x424642);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424647:{NFSU2_TR(0x424647);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42464d:{NFSU2_TR(0x42464d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42464e:{NFSU2_TR(0x42464e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424655:{NFSU2_TR(0x424655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424656:{NFSU2_TR(0x424656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424657:{NFSU2_TR(0x424657);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424658:{NFSU2_TR(0x424658);
__builtin_memmove((R+28),(R+4),4);
}
B42465a:{NFSU2_TR(0x42465a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42465e:{NFSU2_TR(0x42465e);
u8 U[4];
w4(U+0,u32(0x78588cull));
s4(u32(r4(R+28)),r4(U+0));
}
B424664:{NFSU2_TR(0x424664);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42466a:{NFSU2_TR(0x42466a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42466c:{NFSU2_TR(0x42466c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424672:{NFSU2_TR(0x424672);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42467a:{NFSU2_TR(0x42467a);
if(r1(R+518)){{goto L42468d;}}
}
B42467c:L42467c:{c.instructions+=2;NFSU2_TR(0x42467c);
__builtin_memmove((R+4),(R+24),4);
}
B42467e:{NFSU2_TR(0x42467e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424683ull));
TAIL_STATIC(0x614810u,614);
}
B424683:L424683:{c.instructions+=4;NFSU2_TR(0x424683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424685:{NFSU2_TR(0x424685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424688:{NFSU2_TR(0x424688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42468a:{NFSU2_TR(0x42468a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42468d:L42468d:{c.instructions+=8;NFSU2_TR(0x42468d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424691:{NFSU2_TR(0x424691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424698:{NFSU2_TR(0x424698);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42469e:{NFSU2_TR(0x42469e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42469f:{NFSU2_TR(0x42469f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4246a0:{NFSU2_TR(0x4246a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4246a7:{NFSU2_TR(0x4246a7);
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
B4246aa:{NFSU2_TR(0x4246aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4246b0:L4246b0:{c.instructions+=15;NFSU2_TR(0x4246b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B4246b3:{NFSU2_TR(0x4246b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4246b4:{NFSU2_TR(0x4246b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4246b5:{NFSU2_TR(0x4246b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4246b6:{NFSU2_TR(0x4246b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4246ba:{NFSU2_TR(0x4246ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4246bc:{NFSU2_TR(0x4246bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4246c2:{NFSU2_TR(0x4246c2);
__builtin_memmove((R+20),(R+4),4);
}
B4246c4:{NFSU2_TR(0x4246c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4246c8:{NFSU2_TR(0x4246c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4246ce:{NFSU2_TR(0x4246ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4246d0:{NFSU2_TR(0x4246d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4246d1:{NFSU2_TR(0x4246d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4246d4:{NFSU2_TR(0x4246d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4246d8:{NFSU2_TR(0x4246d8);
if(r1(R+518)){{goto L424933;}}
}
B4246de:L4246de:{c.instructions+=2;NFSU2_TR(0x4246de);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4246e2:{NFSU2_TR(0x4246e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4246fc;}}
}
B4246e4:L4246e4:{c.instructions+=4;NFSU2_TR(0x4246e4);
w4(R+0,u32(0xffull));
}
B4246e9:{NFSU2_TR(0x4246e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4246ef:{NFSU2_TR(0x4246ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4246f5:{NFSU2_TR(0x4246f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4246fc:L4246fc:{c.instructions+=14;NFSU2_TR(0x4246fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4246ff:{NFSU2_TR(0x4246ff);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B424701:{NFSU2_TR(0x424701);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424703:{NFSU2_TR(0x424703);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42470a:{NFSU2_TR(0x42470a);
__builtin_memmove((R+4),(R+518),1);
}
B42470d:{NFSU2_TR(0x42470d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B424710:{NFSU2_TR(0x424710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424716:{NFSU2_TR(0x424716);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B424719:{NFSU2_TR(0x424719);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B42471d:{NFSU2_TR(0x42471d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42471e:{NFSU2_TR(0x42471e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424722:{NFSU2_TR(0x424722);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424726:{NFSU2_TR(0x424726);
__builtin_memmove((R+4),(R+24),4);
}
B424728:{NFSU2_TR(0x424728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42472dull));
TAIL_STATIC(0x60c120u,60c);
}
B42472d:L42472d:{c.instructions+=10;NFSU2_TR(0x42472d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424730:{NFSU2_TR(0x424730);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424733:{NFSU2_TR(0x424733);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B42473a:{NFSU2_TR(0x42473a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42473e:{NFSU2_TR(0x42473e);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B424745:{NFSU2_TR(0x424745);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424749:{NFSU2_TR(0x424749);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B42474d:{NFSU2_TR(0x42474d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B424751:{NFSU2_TR(0x424751);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424755:{NFSU2_TR(0x424755);
if(r1(R+518)){{goto L42478f;}}
}
B424757:L424757:{c.instructions+=3;NFSU2_TR(0x424757);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B42475b:{NFSU2_TR(0x42475b);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B42475f:{NFSU2_TR(0x42475f);
if(r1(R+518)){{goto L42478f;}}
}
B424761:L424761:{c.instructions+=3;NFSU2_TR(0x424761);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B424764:{NFSU2_TR(0x424764);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B424766:{NFSU2_TR(0x424766);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42477e;}}
}
B424768:L424768:{c.instructions+=5;NFSU2_TR(0x424768);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42476f:{NFSU2_TR(0x42476f);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B424772:{NFSU2_TR(0x424772);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B424775:{NFSU2_TR(0x424775);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42477c:{NFSU2_TR(0x42477c);
{goto L424791;}
}
B42477e:L42477e:{c.instructions+=5;NFSU2_TR(0x42477e);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B424781:{NFSU2_TR(0x424781);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424783:{NFSU2_TR(0x424783);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B424786:{NFSU2_TR(0x424786);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42478d:{NFSU2_TR(0x42478d);
{goto L424791;}
}
B42478f:L42478f:{c.instructions+=1;NFSU2_TR(0x42478f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424791:L424791:{c.instructions+=9;NFSU2_TR(0x424791);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424795:{NFSU2_TR(0x424795);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42479a:{NFSU2_TR(0x42479a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42479f:{NFSU2_TR(0x42479f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4247a0:{NFSU2_TR(0x4247a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4247a1:{NFSU2_TR(0x4247a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4247a4:{NFSU2_TR(0x4247a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4247a5:{NFSU2_TR(0x4247a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4247a6:{NFSU2_TR(0x4247a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4247abull));
TAIL_STATIC(0x40f4a0u,40f);
}
B4247ab:L4247ab:{c.instructions+=6;NFSU2_TR(0x4247ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4247af:{NFSU2_TR(0x4247af);
__builtin_memmove((R+28),(R+0),4);
}
B4247b1:{NFSU2_TR(0x4247b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4247b5:{NFSU2_TR(0x4247b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4247b8:{NFSU2_TR(0x4247b8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4247bc:{NFSU2_TR(0x4247bc);
if(r1(R+518)){{goto L4247f6;}}
}
B4247be:L4247be:{c.instructions+=3;NFSU2_TR(0x4247be);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4247c2:{NFSU2_TR(0x4247c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4247c6:{NFSU2_TR(0x4247c6);
if(r1(R+518)){{goto L4247f6;}}
}
B4247c8:L4247c8:{c.instructions+=3;NFSU2_TR(0x4247c8);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4247cb:{NFSU2_TR(0x4247cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4247cd:{NFSU2_TR(0x4247cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4247e5;}}
}
B4247cf:L4247cf:{c.instructions+=5;NFSU2_TR(0x4247cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4247d6:{NFSU2_TR(0x4247d6);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4247d9:{NFSU2_TR(0x4247d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4247dc:{NFSU2_TR(0x4247dc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4247e3:{NFSU2_TR(0x4247e3);
{goto L4247f8;}
}
B4247e5:L4247e5:{c.instructions+=5;NFSU2_TR(0x4247e5);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4247e8:{NFSU2_TR(0x4247e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4247ea:{NFSU2_TR(0x4247ea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4247ed:{NFSU2_TR(0x4247ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4247f4:{NFSU2_TR(0x4247f4);
{goto L4247f8;}
}
B4247f6:L4247f6:{c.instructions+=1;NFSU2_TR(0x4247f6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4247f8:L4247f8:{c.instructions+=10;NFSU2_TR(0x4247f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4247fe:{NFSU2_TR(0x4247fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424801:{NFSU2_TR(0x424801);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424805:{NFSU2_TR(0x424805);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42480a:{NFSU2_TR(0x42480a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42480f:{NFSU2_TR(0x42480f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424810:{NFSU2_TR(0x424810);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424811:{NFSU2_TR(0x424811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424812:{NFSU2_TR(0x424812);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424813:{NFSU2_TR(0x424813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424818ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B424818:L424818:{c.instructions+=4;NFSU2_TR(0x424818);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42481b:{NFSU2_TR(0x42481b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42481e:{NFSU2_TR(0x42481e);
__builtin_memmove((R+12),(R+0),4);
}
B424820:{NFSU2_TR(0x424820);
if(r1(R+518)){{goto L42492f;}}
}
B424826:L424826:{c.instructions+=2;NFSU2_TR(0x424826);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B424829:{NFSU2_TR(0x424829);
if(r1(R+518)){{goto L42492f;}}
}
B42482f:L42482f:{c.instructions+=5;NFSU2_TR(0x42482f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424833:{NFSU2_TR(0x424833);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424834:{NFSU2_TR(0x424834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424835:{NFSU2_TR(0x424835);
__builtin_memmove((R+4),(R+24),4);
}
B424837:{NFSU2_TR(0x424837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42483cull));
TAIL_STATIC(0x60c010u,60c);
}
B42483c:L42483c:{c.instructions+=3;NFSU2_TR(0x42483c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424840:{NFSU2_TR(0x424840);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B424842:{NFSU2_TR(0x424842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424923;}}
}
B424848:L424848:{c.instructions+=3;NFSU2_TR(0x424848);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42484c:{NFSU2_TR(0x42484c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42484d:{NFSU2_TR(0x42484d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424852ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B424852:L424852:{c.instructions+=6;NFSU2_TR(0x424852);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B424856:{NFSU2_TR(0x424856);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B424858:{NFSU2_TR(0x424858);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42485c:{NFSU2_TR(0x42485c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42485d:{NFSU2_TR(0x42485d);
__builtin_memmove((R+4),(R+12),4);
}
B42485f:{NFSU2_TR(0x42485f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424864ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B424864:L424864:{c.instructions+=7;NFSU2_TR(0x424864);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424868:{NFSU2_TR(0x424868);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42486a:{NFSU2_TR(0x42486a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42486d:{NFSU2_TR(0x42486d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424871:{NFSU2_TR(0x424871);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424873:{NFSU2_TR(0x424873);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424876:{NFSU2_TR(0x424876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4248a1;}}
}
B424878:L424878:{c.instructions+=6;NFSU2_TR(0x424878);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42487b:{NFSU2_TR(0x42487b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B42487d:{NFSU2_TR(0x42487d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42487f:{NFSU2_TR(0x42487f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424881:{NFSU2_TR(0x424881);
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
B424884:{NFSU2_TR(0x424884);
if(r1(R+514)){{goto L4248a1;}}
}
B424886:L424886:{c.instructions+=4;NFSU2_TR(0x424886);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424887:{NFSU2_TR(0x424887);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B424889:{NFSU2_TR(0x424889);
__builtin_memmove((R+4),(R+24),4);
}
B42488b:{NFSU2_TR(0x42488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424890ull));
TAIL_STATIC(0x60bff0u,60b);
}
B424890:L424890:{c.instructions+=4;NFSU2_TR(0x424890);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424896:{NFSU2_TR(0x424896);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424898:{NFSU2_TR(0x424898);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42489b:{NFSU2_TR(0x42489b);
if(r1(R+518)){{goto L4248c8;}}
}
B42489d:L42489d:{c.instructions+=2;NFSU2_TR(0x42489d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42489f:{NFSU2_TR(0x42489f);
{goto L4248ca;}
}
B4248a1:L4248a1:{c.instructions+=6;NFSU2_TR(0x4248a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4248a5:{NFSU2_TR(0x4248a5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4248a7:{NFSU2_TR(0x4248a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4248a9:{NFSU2_TR(0x4248a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4248ab:{NFSU2_TR(0x4248ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4248ae:{NFSU2_TR(0x4248ae);
if(r1(R+514)){{goto L4248c8;}}
}
B4248b0:L4248b0:{c.instructions+=3;NFSU2_TR(0x4248b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4248b4:{NFSU2_TR(0x4248b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4248bb:{NFSU2_TR(0x4248bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4248c0ull));
TAIL_STATIC(0x614880u,614);
}
B4248c0:L4248c0:{c.instructions+=2;NFSU2_TR(0x4248c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4248c2:{NFSU2_TR(0x4248c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4248c8;}}
}
B4248c4:L4248c4:{c.instructions+=2;NFSU2_TR(0x4248c4);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4248c6:{NFSU2_TR(0x4248c6);
{goto L4248ca;}
}
B4248c8:L4248c8:{c.instructions+=1;NFSU2_TR(0x4248c8);
w1(R+12,u8(0x1ull));
}
B4248ca:L4248ca:{c.instructions+=7;NFSU2_TR(0x4248ca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4248ce:{NFSU2_TR(0x4248ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4248d4:{NFSU2_TR(0x4248d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4248d6:{NFSU2_TR(0x4248d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4248d9:{NFSU2_TR(0x4248d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4248db:{NFSU2_TR(0x4248db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4248dc:{NFSU2_TR(0x4248dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4248e4;}}
}
B4248de:L4248de:{c.instructions+=3;NFSU2_TR(0x4248de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4248e1:{NFSU2_TR(0x4248e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4248e2:{NFSU2_TR(0x4248e2);
{goto L4248e8;}
}
B4248e4:L4248e4:{c.instructions+=2;NFSU2_TR(0x4248e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4248e7:{NFSU2_TR(0x4248e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4248e8:L4248e8:{c.instructions+=3;NFSU2_TR(0x4248e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4248ec:{NFSU2_TR(0x4248ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4248ed:{NFSU2_TR(0x4248ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4248f2ull));
TAIL_STATIC(0x412500u,412);
}
B4248f2:L4248f2:{c.instructions+=2;NFSU2_TR(0x4248f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4248f4:{NFSU2_TR(0x4248f4);
if(r1(R+518)){{goto L4248fa;}}
}
B4248f6:L4248f6:{c.instructions+=2;NFSU2_TR(0x4248f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4248f8:{NFSU2_TR(0x4248f8);
if(r1(R+518)){{goto L424923;}}
}
B4248fa:L4248fa:{c.instructions+=6;NFSU2_TR(0x4248fa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4248fe:{NFSU2_TR(0x4248fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B424901:{NFSU2_TR(0x424901);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424907:{NFSU2_TR(0x424907);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424909:{NFSU2_TR(0x424909);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42490c:{NFSU2_TR(0x42490c);
if(r1(R+518)){{goto L424911;}}
}
B42490e:L42490e:{c.instructions+=1;NFSU2_TR(0x42490e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B424911:L424911:{c.instructions+=6;NFSU2_TR(0x424911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424913:{NFSU2_TR(0x424913);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424917:{NFSU2_TR(0x424917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424918:{NFSU2_TR(0x424918);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424919:{NFSU2_TR(0x424919);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42491a:{NFSU2_TR(0x42491a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42491full));
TAIL_STATIC(0x412500u,412);
}
B42491f:L42491f:{c.instructions+=2;NFSU2_TR(0x42491f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424921:{NFSU2_TR(0x424921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424925;}}
}
B424923:L424923:{c.instructions+=1;NFSU2_TR(0x424923);
__builtin_memmove((R+12),(R+28),4);
}
B424925:L424925:{c.instructions+=3;NFSU2_TR(0x424925);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424929:{NFSU2_TR(0x424929);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42492a:{NFSU2_TR(0x42492a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42492full));
TAIL_STATIC(0x405410u,405);
}
B42492f:L42492f:{c.instructions+=1;NFSU2_TR(0x42492f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B424933:L424933:{c.instructions+=5;NFSU2_TR(0x424933);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424937:{NFSU2_TR(0x424937);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424938:{NFSU2_TR(0x424938);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42493b:{NFSU2_TR(0x42493b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42493c:{NFSU2_TR(0x42493c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424941ull));
TAIL_STATIC(0x420d40u,420);
}
B424941:L424941:{c.instructions+=3;NFSU2_TR(0x424941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424943:{NFSU2_TR(0x424943);
__builtin_memmove((R+4),(R+28),4);
}
B424945:{NFSU2_TR(0x424945);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424948ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B424948:L424948:{c.instructions+=13;NFSU2_TR(0x424948);
{u32 ea_=u32(r4(R+20)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42494e:{NFSU2_TR(0x42494e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42494f:{NFSU2_TR(0x42494f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424951:{NFSU2_TR(0x424951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424952:{NFSU2_TR(0x424952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424958:{NFSU2_TR(0x424958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42495e:{NFSU2_TR(0x42495e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B424964:{NFSU2_TR(0x424964);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42496b:{NFSU2_TR(0x42496b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424972:{NFSU2_TR(0x424972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B424973:{NFSU2_TR(0x424973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B424974:{NFSU2_TR(0x424974);
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
B424977:{NFSU2_TR(0x424977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424980:L424980:{c.instructions+=9;NFSU2_TR(0x424980);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424984:{NFSU2_TR(0x424984);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424985:{NFSU2_TR(0x424985);
__builtin_memmove((R+24),(R+4),4);
}
B424987:{NFSU2_TR(0x424987);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42498b:{NFSU2_TR(0x42498b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42498c:{NFSU2_TR(0x42498c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42498d:{NFSU2_TR(0x42498d);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42498f:{NFSU2_TR(0x42498f);
__builtin_memmove((R+4),(R+24),4);
}
B424991:{NFSU2_TR(0x424991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424996ull));
TAIL_STATIC(0x4234a0u,423);
}
B424996:L424996:{c.instructions+=4;NFSU2_TR(0x424996);
u8 U[4];
w4(U+0,u32(0x7858d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42499c:{NFSU2_TR(0x42499c);
__builtin_memmove((R+0),(R+24),4);
}
B42499e:{NFSU2_TR(0x42499e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42499f:{NFSU2_TR(0x42499f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4249b0:L4249b0:{c.instructions+=2;NFSU2_TR(0x4249b0);
w4(R+0,u32(0x7858f8ull));
}
B4249b5:{NFSU2_TR(0x4249b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4249c0:L4249c0:{c.instructions+=23;NFSU2_TR(0x4249c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4249c1:{NFSU2_TR(0x4249c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4249c2:{NFSU2_TR(0x4249c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4249c3:{NFSU2_TR(0x4249c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4249c7:{NFSU2_TR(0x4249c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4249c8:{NFSU2_TR(0x4249c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4249ca:{NFSU2_TR(0x4249ca);
__builtin_memmove((R+28),(R+4),4);
}
B4249cc:{NFSU2_TR(0x4249cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4249ce:{NFSU2_TR(0x4249ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4249d1:{NFSU2_TR(0x4249d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4249d4:{NFSU2_TR(0x4249d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4249d6:{NFSU2_TR(0x4249d6);
__builtin_memmove((R+0),(R+518),1);
}
B4249d9:{NFSU2_TR(0x4249d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4249df:{NFSU2_TR(0x4249df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4249e3:{NFSU2_TR(0x4249e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4249ea:{NFSU2_TR(0x4249ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4249eb:{NFSU2_TR(0x4249eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4249ee:{NFSU2_TR(0x4249ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4249f1:{NFSU2_TR(0x4249f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4249f5:{NFSU2_TR(0x4249f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4249f8:{NFSU2_TR(0x4249f8);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4249ff:{NFSU2_TR(0x4249ff);
w4(R+8,u32(0xffull));
}
B424a04:{NFSU2_TR(0x424a04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424a19;}}
}
B424a06:L424a06:{c.instructions+=3;NFSU2_TR(0x424a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424a0c:{NFSU2_TR(0x424a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424a12:{NFSU2_TR(0x424a12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424a19:L424a19:{c.instructions+=3;NFSU2_TR(0x424a19);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B424a1d:{NFSU2_TR(0x424a1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B424a21:{NFSU2_TR(0x424a21);
if(r1(R+518)){{goto L424a5b;}}
}
B424a23:L424a23:{c.instructions+=3;NFSU2_TR(0x424a23);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B424a27:{NFSU2_TR(0x424a27);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B424a2b:{NFSU2_TR(0x424a2b);
if(r1(R+518)){{goto L424a5b;}}
}
B424a2d:L424a2d:{c.instructions+=3;NFSU2_TR(0x424a2d);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B424a30:{NFSU2_TR(0x424a30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B424a32:{NFSU2_TR(0x424a32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L424a4a;}}
}
B424a34:L424a34:{c.instructions+=5;NFSU2_TR(0x424a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B424a3b:{NFSU2_TR(0x424a3b);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B424a3e:{NFSU2_TR(0x424a3e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B424a41:{NFSU2_TR(0x424a41);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B424a48:{NFSU2_TR(0x424a48);
{goto L424a5d;}
}
B424a4a:L424a4a:{c.instructions+=5;NFSU2_TR(0x424a4a);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B424a4d:{NFSU2_TR(0x424a4d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B424a4f:{NFSU2_TR(0x424a4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B424a52:{NFSU2_TR(0x424a52);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B424a59:{NFSU2_TR(0x424a59);
{goto L424a5d;}
}
B424a5b:L424a5b:{c.instructions+=1;NFSU2_TR(0x424a5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424a5d:L424a5d:{c.instructions+=9;NFSU2_TR(0x424a5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424a61:{NFSU2_TR(0x424a61);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a66:{NFSU2_TR(0x424a66);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a6b:{NFSU2_TR(0x424a6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a6c:{NFSU2_TR(0x424a6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a6d:{NFSU2_TR(0x424a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B424a70:{NFSU2_TR(0x424a70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a71:{NFSU2_TR(0x424a71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424a72:{NFSU2_TR(0x424a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424a77ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B424a77:L424a77:{c.instructions+=3;NFSU2_TR(0x424a77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B424a7a:{NFSU2_TR(0x424a7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B424a7d:{NFSU2_TR(0x424a7d);
if(r1(R+518)){{goto L424abb;}}
}
B424a7f:L424a7f:{c.instructions+=11;NFSU2_TR(0x424a7f);
{u32 ea_=u32(u32(7878616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424a85:{NFSU2_TR(0x424a85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B424a87:{NFSU2_TR(0x424a87);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B424a8a:{NFSU2_TR(0x424a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B424a8c:{NFSU2_TR(0x424a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424a8f:{NFSU2_TR(0x424a8f);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B424a95:{NFSU2_TR(0x424a95);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B424a97:{NFSU2_TR(0x424a97);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424a9d:{NFSU2_TR(0x424a9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424a9f:{NFSU2_TR(0x424a9f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B424aa2:{NFSU2_TR(0x424aa2);
if(r1(R+514)){{goto L424ab8;}}
}
B424aa4:L424aa4:{c.instructions+=3;NFSU2_TR(0x424aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424aa7:{NFSU2_TR(0x424aa7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B424aa9:{NFSU2_TR(0x424aa9);
if(r1(R+518)){{goto L424ab2;}}
}
B424aab:L424aab:{c.instructions+=2;NFSU2_TR(0x424aab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424ab0:{NFSU2_TR(0x424ab0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424abb;}}
}
B424ab2:L424ab2:{c.instructions+=1;NFSU2_TR(0x424ab2);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B424ab8:L424ab8:{c.instructions+=1;NFSU2_TR(0x424ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424abb:L424abb:{c.instructions+=5;NFSU2_TR(0x424abb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424abc:{NFSU2_TR(0x424abc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B424abf:{NFSU2_TR(0x424abf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424ac0:{NFSU2_TR(0x424ac0);
__builtin_memmove((R+4),(R+12),4);
}
B424ac2:{NFSU2_TR(0x424ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424ac7ull));
TAIL_STATIC(0x420d40u,420);
}
B424ac7:L424ac7:{c.instructions+=3;NFSU2_TR(0x424ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424aca:{NFSU2_TR(0x424aca);
__builtin_memmove((R+4),(R+20),4);
}
B424acc:{NFSU2_TR(0x424acc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424acfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B424acf:L424acf:{c.instructions+=13;NFSU2_TR(0x424acf);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424ad5:{NFSU2_TR(0x424ad5);
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
B424ad7:{NFSU2_TR(0x424ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424add:{NFSU2_TR(0x424add);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ae3:{NFSU2_TR(0x424ae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B424ae9:{NFSU2_TR(0x424ae9);
w1(R+0,u8(0x1ull));
}
B424aeb:{NFSU2_TR(0x424aeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B424af1:{NFSU2_TR(0x424af1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1feull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B424af7:{NFSU2_TR(0x424af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424af8:{NFSU2_TR(0x424af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424af9:{NFSU2_TR(0x424af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B424afa:{NFSU2_TR(0x424afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B424afb:{NFSU2_TR(0x424afb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424b00:L424b00:{c.instructions+=9;NFSU2_TR(0x424b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424b04:{NFSU2_TR(0x424b04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b05:{NFSU2_TR(0x424b05);
__builtin_memmove((R+24),(R+4),4);
}
B424b07:{NFSU2_TR(0x424b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424b0b:{NFSU2_TR(0x424b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b0c:{NFSU2_TR(0x424b0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b0d:{NFSU2_TR(0x424b0d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b0f:{NFSU2_TR(0x424b0f);
__builtin_memmove((R+4),(R+24),4);
}
B424b11:{NFSU2_TR(0x424b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424b16ull));
TAIL_STATIC(0x4234a0u,423);
}
B424b16:L424b16:{c.instructions+=5;NFSU2_TR(0x424b16);
u8 U[4];
w4(U+0,u32(0x78591cull));
s4(u32(r4(R+24)),r4(U+0));
}
B424b1c:{NFSU2_TR(0x424b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424b26:{NFSU2_TR(0x424b26);
__builtin_memmove((R+0),(R+24),4);
}
B424b28:{NFSU2_TR(0x424b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424b29:{NFSU2_TR(0x424b29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424b30:L424b30:{c.instructions+=2;NFSU2_TR(0x424b30);
w4(R+0,u32(0x785940ull));
}
B424b35:{NFSU2_TR(0x424b35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424b40:L424b40:{c.instructions+=17;NFSU2_TR(0x424b40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b42:{NFSU2_TR(0x424b42);
u8 U[4];
w4(U+0,u32(0x7716f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b47:{NFSU2_TR(0x424b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424b4d:{NFSU2_TR(0x424b4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b4e:{NFSU2_TR(0x424b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424b55:{NFSU2_TR(0x424b55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b56:{NFSU2_TR(0x424b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424b5a:{NFSU2_TR(0x424b5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b5b:{NFSU2_TR(0x424b5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b5c:{NFSU2_TR(0x424b5c);
__builtin_memmove((R+28),(R+4),4);
}
B424b5e:{NFSU2_TR(0x424b5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424b62:{NFSU2_TR(0x424b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b63:{NFSU2_TR(0x424b63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b64:{NFSU2_TR(0x424b64);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424b66:{NFSU2_TR(0x424b66);
__builtin_memmove((R+4),(R+28),4);
}
B424b68:{NFSU2_TR(0x424b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424b6c:{NFSU2_TR(0x424b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424b71ull));
TAIL_STATIC(0x4234a0u,423);
}
B424b71:L424b71:{c.instructions+=8;NFSU2_TR(0x424b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424b77:{NFSU2_TR(0x424b77);
u8 U[4];
w4(U+0,u32(0x785950ull));
s4(u32(r4(R+28)),r4(U+0));
}
B424b7d:{NFSU2_TR(0x424b7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424b85:{NFSU2_TR(0x424b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424b8c:{NFSU2_TR(0x424b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424b8f:{NFSU2_TR(0x424b8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424b91:{NFSU2_TR(0x424b91);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424b96:{NFSU2_TR(0x424b96);
if(r1(R+518)){{goto L424ba9;}}
}
B424b98:L424b98:{c.instructions+=2;NFSU2_TR(0x424b98);
__builtin_memmove((R+4),(R+24),4);
}
B424b9a:{NFSU2_TR(0x424b9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424b9full));
TAIL_STATIC(0x614810u,614);
}
B424b9f:L424b9f:{c.instructions+=4;NFSU2_TR(0x424b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424ba1:{NFSU2_TR(0x424ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424ba4:{NFSU2_TR(0x424ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424ba6:{NFSU2_TR(0x424ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ba9:L424ba9:{c.instructions+=4;NFSU2_TR(0x424ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424bad:{NFSU2_TR(0x424bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424baf:{NFSU2_TR(0x424baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424bb2:{NFSU2_TR(0x424bb2);
if(r1(R+518)){{goto L424bc8;}}
}
B424bb4:L424bb4:{c.instructions+=2;NFSU2_TR(0x424bb4);
__builtin_memmove((R+4),(R+24),4);
}
B424bb6:{NFSU2_TR(0x424bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424bbbull));
TAIL_STATIC(0x614810u,614);
}
B424bbb:L424bbb:{c.instructions+=5;NFSU2_TR(0x424bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424bbe:{NFSU2_TR(0x424bbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424bc0:{NFSU2_TR(0x424bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424bc3:{NFSU2_TR(0x424bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424bc6:{NFSU2_TR(0x424bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B424bc8:L424bc8:{c.instructions+=11;NFSU2_TR(0x424bc8);
__builtin_memmove((R+0),gp(0x783748),4);
}
B424bcd:{NFSU2_TR(0x424bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424bd1:{NFSU2_TR(0x424bd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424bd5:{NFSU2_TR(0x424bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424bdb:{NFSU2_TR(0x424bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424be1:{NFSU2_TR(0x424be1);
__builtin_memmove((R+0),(R+28),4);
}
B424be3:{NFSU2_TR(0x424be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424be4:{NFSU2_TR(0x424be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424be5:{NFSU2_TR(0x424be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424bec:{NFSU2_TR(0x424bec);
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
B424bef:{NFSU2_TR(0x424bef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424c00:L424c00:{c.instructions+=2;NFSU2_TR(0x424c00);
w4(R+0,u32(0x785974ull));
}
B424c05:{NFSU2_TR(0x424c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424c10:L424c10:{c.instructions+=3;NFSU2_TR(0x424c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c11:{NFSU2_TR(0x424c11);
__builtin_memmove((R+24),(R+4),4);
}
B424c13:{NFSU2_TR(0x424c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424c18ull));
{goto L424c40;}
}
B424c18:L424c18:{c.instructions+=2;NFSU2_TR(0x424c18);
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
B424c1d:{NFSU2_TR(0x424c1d);
if(r1(R+518)){{goto L424c2e;}}
}
B424c1f:L424c1f:{c.instructions+=4;NFSU2_TR(0x424c1f);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B424c24:{NFSU2_TR(0x424c24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c25:{NFSU2_TR(0x424c25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c26:{NFSU2_TR(0x424c26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424c2bull));
TAIL_STATIC(0x43f920u,43f);
}
B424c2b:L424c2b:{c.instructions+=1;NFSU2_TR(0x424c2b);
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
B424c2e:L424c2e:{c.instructions+=3;NFSU2_TR(0x424c2e);
__builtin_memmove((R+0),(R+24),4);
}
B424c30:{NFSU2_TR(0x424c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424c31:{NFSU2_TR(0x424c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424c40:L424c40:{c.instructions+=16;NFSU2_TR(0x424c40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c42:{NFSU2_TR(0x424c42);
u8 U[4];
w4(U+0,u32(0x7716c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c47:{NFSU2_TR(0x424c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424c4d:{NFSU2_TR(0x424c4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c4e:{NFSU2_TR(0x424c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424c55:{NFSU2_TR(0x424c55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c56:{NFSU2_TR(0x424c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c57:{NFSU2_TR(0x424c57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424c58:{NFSU2_TR(0x424c58);
__builtin_memmove((R+28),(R+4),4);
}
B424c5a:{NFSU2_TR(0x424c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424c5e:{NFSU2_TR(0x424c5e);
u8 U[4];
w4(U+0,u32(0x785950ull));
s4(u32(r4(R+28)),r4(U+0));
}
B424c64:{NFSU2_TR(0x424c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424c6a:{NFSU2_TR(0x424c6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424c6c:{NFSU2_TR(0x424c6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424c72:{NFSU2_TR(0x424c72);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424c7a:{NFSU2_TR(0x424c7a);
if(r1(R+518)){{goto L424c8d;}}
}
B424c7c:L424c7c:{c.instructions+=2;NFSU2_TR(0x424c7c);
__builtin_memmove((R+4),(R+24),4);
}
B424c7e:{NFSU2_TR(0x424c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424c83ull));
TAIL_STATIC(0x614810u,614);
}
B424c83:L424c83:{c.instructions+=4;NFSU2_TR(0x424c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424c85:{NFSU2_TR(0x424c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424c88:{NFSU2_TR(0x424c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424c8a:{NFSU2_TR(0x424c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424c8d:L424c8d:{c.instructions+=8;NFSU2_TR(0x424c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424c91:{NFSU2_TR(0x424c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424c98:{NFSU2_TR(0x424c98);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+28)),r4(U+0));
}
B424c9e:{NFSU2_TR(0x424c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424c9f:{NFSU2_TR(0x424c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424ca0:{NFSU2_TR(0x424ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ca7:{NFSU2_TR(0x424ca7);
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
B424caa:{NFSU2_TR(0x424caa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B424cb0:L424cb0:{c.instructions+=27;NFSU2_TR(0x424cb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424cb1:{NFSU2_TR(0x424cb1);
__builtin_memmove((R+20),(R+16),4);
}
B424cb3:{NFSU2_TR(0x424cb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B424cb6:{NFSU2_TR(0x424cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B424cb9:{NFSU2_TR(0x424cb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424cba:{NFSU2_TR(0x424cba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424cbb:{NFSU2_TR(0x424cbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424cbc:{NFSU2_TR(0x424cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B424cbf:{NFSU2_TR(0x424cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B424cc5:{NFSU2_TR(0x424cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424cc9:{NFSU2_TR(0x424cc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B424cd0:{NFSU2_TR(0x424cd0);
__builtin_memmove((R+24),(R+4),4);
}
B424cd2:{NFSU2_TR(0x424cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B424cd5:{NFSU2_TR(0x424cd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B424cd8:{NFSU2_TR(0x424cd8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B424cdc:{NFSU2_TR(0x424cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B424cde:{NFSU2_TR(0x424cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424ce1:{NFSU2_TR(0x424ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ce5:{NFSU2_TR(0x424ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424ce8:{NFSU2_TR(0x424ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424cec:{NFSU2_TR(0x424cec);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B424cf3:{NFSU2_TR(0x424cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424cf9:{NFSU2_TR(0x424cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424cfd:{NFSU2_TR(0x424cfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424cfe:{NFSU2_TR(0x424cfe);
__builtin_memmove((R+4),(R+28),4);
}
B424d00:{NFSU2_TR(0x424d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424d04:{NFSU2_TR(0x424d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424d09ull));
TAIL_STATIC(0x60c120u,60c);
}
B424d09:L424d09:{c.instructions+=5;NFSU2_TR(0x424d09);
__builtin_memmove((R+12),(R+0),4);
}
B424d0b:{NFSU2_TR(0x424d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424d0d:{NFSU2_TR(0x424d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424d15:{NFSU2_TR(0x424d15);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424d1a:{NFSU2_TR(0x424d1a);
if(r1(R+518)){{goto L424e21;}}
}
B424d20:L424d20:{c.instructions+=3;NFSU2_TR(0x424d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424d26:{NFSU2_TR(0x424d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424d28:{NFSU2_TR(0x424d28);
if(r1(R+518)){{goto L424e21;}}
}
B424d2e:L424d2e:{c.instructions+=1;NFSU2_TR(0x424d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424d33ull));
TAIL_STATIC(0x614880u,614);
}
B424d33:L424d33:{c.instructions+=2;NFSU2_TR(0x424d33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424d35:{NFSU2_TR(0x424d35);
if(r1(R+518)){{goto L424e21;}}
}
B424d3b:L424d3b:{c.instructions+=6;NFSU2_TR(0x424d3b);
{u32 ea_=u32(u32(7878480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424d41:{NFSU2_TR(0x424d41);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B424d43:{NFSU2_TR(0x424d43);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424d46:{NFSU2_TR(0x424d46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424d48:{NFSU2_TR(0x424d48);
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
B424d4b:{NFSU2_TR(0x424d4b);
if(r1(R+514)){{goto L424e21;}}
}
B424d51:L424d51:{c.instructions+=8;NFSU2_TR(0x424d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424d55:{NFSU2_TR(0x424d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424d58:{NFSU2_TR(0x424d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424d5b:{NFSU2_TR(0x424d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424d5f:{NFSU2_TR(0x424d5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424d60:{NFSU2_TR(0x424d60);
__builtin_memmove((R+4),(R+28),4);
}
B424d62:{NFSU2_TR(0x424d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424d66:{NFSU2_TR(0x424d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424d6bull));
TAIL_STATIC(0x60bff0u,60b);
}
B424d6b:L424d6b:{c.instructions+=6;NFSU2_TR(0x424d6b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B424d6f:{NFSU2_TR(0x424d6f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B424d73:{NFSU2_TR(0x424d73);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B424d79:{NFSU2_TR(0x424d79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424d7b:{NFSU2_TR(0x424d7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424d7e:{NFSU2_TR(0x424d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424d86;}}
}
B424d80:L424d80:{c.instructions+=2;NFSU2_TR(0x424d80);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424d84:{NFSU2_TR(0x424d84);
{goto L424d90;}
}
B424d86:L424d86:{c.instructions+=2;NFSU2_TR(0x424d86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B424d88:{NFSU2_TR(0x424d88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424d90:L424d90:{c.instructions+=5;NFSU2_TR(0x424d90);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424d92:{NFSU2_TR(0x424d92);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424d98:{NFSU2_TR(0x424d98);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424d9a:{NFSU2_TR(0x424d9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424d9d:{NFSU2_TR(0x424d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424da3;}}
}
B424d9f:L424d9f:{c.instructions+=2;NFSU2_TR(0x424d9f);
w1(R+4,u8(0x1ull));
}
B424da1:{NFSU2_TR(0x424da1);
{goto L424da5;}
}
B424da3:L424da3:{c.instructions+=1;NFSU2_TR(0x424da3);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B424da5:L424da5:{c.instructions+=6;NFSU2_TR(0x424da5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424da7:{NFSU2_TR(0x424da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424dab:{NFSU2_TR(0x424dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424dad:{NFSU2_TR(0x424dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424db1:{NFSU2_TR(0x424db1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424db5:{NFSU2_TR(0x424db5);
if(r1(R+518)){{goto L424dd7;}}
}
B424db7:L424db7:{c.instructions+=10;NFSU2_TR(0x424db7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B424dba:{NFSU2_TR(0x424dba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B424dbd:{NFSU2_TR(0x424dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424dc1:{NFSU2_TR(0x424dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424dc5:{NFSU2_TR(0x424dc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B424dc8:{NFSU2_TR(0x424dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B424dcb:{NFSU2_TR(0x424dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424dcf:{NFSU2_TR(0x424dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424dd3:{NFSU2_TR(0x424dd3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B424dd5:{NFSU2_TR(0x424dd5);
{goto L424e00;}
}
B424dd7:L424dd7:{c.instructions+=10;NFSU2_TR(0x424dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B424dda:{NFSU2_TR(0x424dda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B424ddd:{NFSU2_TR(0x424ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424de1:{NFSU2_TR(0x424de1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424de5:{NFSU2_TR(0x424de5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B424de8:{NFSU2_TR(0x424de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+8),(U+0),4);
}
B424deb:{NFSU2_TR(0x424deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424def:{NFSU2_TR(0x424def);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424df3:{NFSU2_TR(0x424df3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B424df5:{NFSU2_TR(0x424df5);
{goto L424e00;}
}
B424df7:L424df7:{c.instructions+=2;NFSU2_TR(0x424df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424dfb:{NFSU2_TR(0x424dfb);
{goto L424e00;}
}
B424e00:L424e00:{c.instructions+=6;NFSU2_TR(0x424e00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e01:{NFSU2_TR(0x424e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e02:{NFSU2_TR(0x424e02);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B424e06:{NFSU2_TR(0x424e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e07:{NFSU2_TR(0x424e07);
__builtin_memmove((R+4),(R+24),4);
}
B424e09:{NFSU2_TR(0x424e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424e0eull));
TAIL_STATIC(0x4146c0u,414);
}
B424e0e:L424e0e:{c.instructions+=2;NFSU2_TR(0x424e0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424e10:{NFSU2_TR(0x424e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x425006u,425);}
}
B424e16:L424e16:{c.instructions+=3;NFSU2_TR(0x424e16);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B424e17:{NFSU2_TR(0x424e17);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B424e1a:{NFSU2_TR(0x424e1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x424df7u);}goto L424df7;}}
}
B424e1c:L424e1c:{c.instructions+=1;NFSU2_TR(0x424e1c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424e21:L424e21:{c.instructions+=5;NFSU2_TR(0x424e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424e25:{NFSU2_TR(0x424e25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B424e27:{NFSU2_TR(0x424e27);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424e2b:{NFSU2_TR(0x424e2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e2c:{NFSU2_TR(0x424e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424e31ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B424e31:L424e31:{c.instructions+=14;NFSU2_TR(0x424e31);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424e35:{NFSU2_TR(0x424e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424e3b:{NFSU2_TR(0x424e3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B424e3f:{NFSU2_TR(0x424e3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e40:{NFSU2_TR(0x424e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424e44:{NFSU2_TR(0x424e44);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B424e48:{NFSU2_TR(0x424e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e49:{NFSU2_TR(0x424e49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e4a:{NFSU2_TR(0x424e4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e4b:{NFSU2_TR(0x424e4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e4c:{NFSU2_TR(0x424e4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e4d:{NFSU2_TR(0x424e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424e55:{NFSU2_TR(0x424e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424e5d:{NFSU2_TR(0x424e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424e62ull));
TAIL_STATIC(0x402ed0u,402);
}
B424e62:L424e62:{c.instructions+=4;NFSU2_TR(0x424e62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B424e65:{NFSU2_TR(0x424e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424e67:{NFSU2_TR(0x424e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424e6b:{NFSU2_TR(0x424e6b);
if(r1(R+518)){TAIL_STATIC(0x425025u,425);}
}
B424e71:L424e71:{c.instructions+=4;NFSU2_TR(0x424e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424e77:{NFSU2_TR(0x424e77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424e78:{NFSU2_TR(0x424e78);
__builtin_memmove((R+4),(R+0),4);
}
B424e7a:{NFSU2_TR(0x424e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424e7full));
TAIL_STATIC(0x60be90u,60b);
}
B424e7f:L424e7f:{c.instructions+=2;NFSU2_TR(0x424e7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424e81:{NFSU2_TR(0x424e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424ecb;}}
}
B424e83:L424e83:{c.instructions+=4;NFSU2_TR(0x424e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424e89:{NFSU2_TR(0x424e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B424e8b:{NFSU2_TR(0x424e8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((R+12),(U+0),4);
}
B424e91:{NFSU2_TR(0x424e91);
if(r1(R+518)){{goto L424ea4;}}
}
B424e93:L424e93:{c.instructions+=2;NFSU2_TR(0x424e93);
__builtin_memmove((R+4),(R+12),4);
}
B424e95:{NFSU2_TR(0x424e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424e9aull));
TAIL_STATIC(0x614810u,614);
}
B424e9a:L424e9a:{c.instructions+=4;NFSU2_TR(0x424e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B424e9c:{NFSU2_TR(0x424e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424e9f:{NFSU2_TR(0x424e9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424ea1:{NFSU2_TR(0x424ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ea4:L424ea4:{c.instructions+=4;NFSU2_TR(0x424ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B424ea8:{NFSU2_TR(0x424ea8);
__builtin_memmove((R+4),(R+12),4);
}
B424eaa:{NFSU2_TR(0x424eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ead:{NFSU2_TR(0x424ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424eb2ull));
TAIL_STATIC(0x614810u,614);
}
B424eb2:L424eb2:{c.instructions+=7;NFSU2_TR(0x424eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424eb5:{NFSU2_TR(0x424eb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B424eb7:{NFSU2_TR(0x424eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424eba:{NFSU2_TR(0x424eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ebd:{NFSU2_TR(0x424ebd);
__builtin_memmove((R+4),gp(0x783748),4);
}
B424ec3:{NFSU2_TR(0x424ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B424ec5:{NFSU2_TR(0x424ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ecb:L424ecb:{c.instructions+=8;NFSU2_TR(0x424ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B424ecf:{NFSU2_TR(0x424ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B424ed3:{NFSU2_TR(0x424ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B424ed9:{NFSU2_TR(0x424ed9);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424edf:{NFSU2_TR(0x424edf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424ee5:{NFSU2_TR(0x424ee5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424ee7:{NFSU2_TR(0x424ee7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B424eea:{NFSU2_TR(0x424eea);
if(r1(R+514)){{goto L424f5f;}}
}
B424eec:L424eec:{c.instructions+=5;NFSU2_TR(0x424eec);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424ef2:{NFSU2_TR(0x424ef2);
{u32 ea_=u32(u32(7878472u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B424ef8:{NFSU2_TR(0x424ef8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424efa:{NFSU2_TR(0x424efa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424efd:{NFSU2_TR(0x424efd);
if(r1(R+518)){{goto L424f07;}}
}
B424eff:L424eff:{c.instructions+=2;NFSU2_TR(0x424eff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B424f01:{NFSU2_TR(0x424f01);
{u32 ea_=u32(u32(7878472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424f07:L424f07:{c.instructions+=5;NFSU2_TR(0x424f07);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424f0b:{NFSU2_TR(0x424f0b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B424f0d:{NFSU2_TR(0x424f0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424f0f:{NFSU2_TR(0x424f0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424f12:{NFSU2_TR(0x424f12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L424f1a;}}
}
B424f14:L424f14:{c.instructions+=2;NFSU2_TR(0x424f14);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B424f16:{NFSU2_TR(0x424f16);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424f1a:L424f1a:{c.instructions+=11;NFSU2_TR(0x424f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424f1e:{NFSU2_TR(0x424f1e);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424f24:{NFSU2_TR(0x424f24);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B424f27:{NFSU2_TR(0x424f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424f2b:{NFSU2_TR(0x424f2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B424f2d:{NFSU2_TR(0x424f2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B424f2f:{NFSU2_TR(0x424f2f);
__builtin_memmove((R+0),(R+518),1);
}
B424f32:{NFSU2_TR(0x424f32);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f37:{NFSU2_TR(0x424f37);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f3c:{NFSU2_TR(0x424f3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f3d:{NFSU2_TR(0x424f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424f42ull));
TAIL_STATIC(0x401ed0u,401);
}
B424f42:L424f42:{c.instructions+=5;NFSU2_TR(0x424f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f43:{NFSU2_TR(0x424f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B424f46:{NFSU2_TR(0x424f46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f47:{NFSU2_TR(0x424f47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f48:{NFSU2_TR(0x424f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424f4dull));
TAIL_STATIC(0x40f4a0u,40f);
}
B424f4d:L424f4d:{c.instructions+=3;NFSU2_TR(0x424f4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B424f50:{NFSU2_TR(0x424f50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B424f53:{NFSU2_TR(0x424f53);
if(r1(R+518)){{goto L424f5f;}}
}
B424f55:L424f55:{c.instructions+=3;NFSU2_TR(0x424f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424f59:{NFSU2_TR(0x424f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f5a:{NFSU2_TR(0x424f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424f5full));
TAIL_STATIC(0x405410u,405);
}
B424f5f:L424f5f:{c.instructions+=5;NFSU2_TR(0x424f5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424f63:{NFSU2_TR(0x424f63);
{u32 ea_=u32(u32(7878468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424f69:{NFSU2_TR(0x424f69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424f6b:{NFSU2_TR(0x424f6b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B424f6e:{NFSU2_TR(0x424f6e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x425035u,425);}
}
B424f74:L424f74:{c.instructions+=5;NFSU2_TR(0x424f74);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B424f78:{NFSU2_TR(0x424f78);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B424f7e:{NFSU2_TR(0x424f7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B424f80:{NFSU2_TR(0x424f80);
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
B424f83:{NFSU2_TR(0x424f83);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x425035u,425);}
}
B424f89:L424f89:{c.instructions+=3;NFSU2_TR(0x424f89);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424f8d:{NFSU2_TR(0x424f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B424f8f:{NFSU2_TR(0x424f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424f92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B424f92:L424f92:{c.instructions+=12;NFSU2_TR(0x424f92);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B424f98:{NFSU2_TR(0x424f98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f9a:{NFSU2_TR(0x424f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B424f9e:{NFSU2_TR(0x424f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424f9f:{NFSU2_TR(0x424f9f);
__builtin_memmove((R+4),(R+12),4);
}
B424fa1:{NFSU2_TR(0x424fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fab:{NFSU2_TR(0x424fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fb5:{NFSU2_TR(0x424fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fbd:{NFSU2_TR(0x424fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fc5:{NFSU2_TR(0x424fc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fcd:{NFSU2_TR(0x424fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B424fd5:{NFSU2_TR(0x424fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424fdaull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B424fda:L424fda:{c.instructions+=5;NFSU2_TR(0x424fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424fdb:{NFSU2_TR(0x424fdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B424fde:{NFSU2_TR(0x424fde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B424fdf:{NFSU2_TR(0x424fdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B424fe3:{NFSU2_TR(0x424fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x424fe8ull));
TAIL_STATIC(0x420d40u,420);
}
B424fe8:L424fe8:{c.instructions+=6;NFSU2_TR(0x424fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B424fe9:{NFSU2_TR(0x424fe9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424ff0:{NFSU2_TR(0x424ff0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424ff7:{NFSU2_TR(0x424ff7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B424ffe:{NFSU2_TR(0x424ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B424fff:{NFSU2_TR(0x424fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
TAIL_STATIC(0x425000u,425);
}
XIT:NFSU2_TR_EXIT(0x424,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
