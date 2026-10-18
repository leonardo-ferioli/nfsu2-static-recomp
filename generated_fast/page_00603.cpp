#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_604(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x603,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x603,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_603(u8* __restrict R,Cpu& c);
u32 page_603(Cpu& c){return body_603(c.regs.data(),c);}
__attribute__((noinline)) u32 body_603(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x603000:goto L603000;
case 0x603002:c.instructions+=1;goto B603002;
case 0x603008:goto L603008;
case 0x603009:c.instructions+=2;goto B603009;
case 0x60300b:c.instructions+=1;goto B60300b;
case 0x60300d:goto L60300d;
case 0x603012:c.instructions+=4;goto B603012;
case 0x603018:c.instructions+=3;goto B603018;
case 0x60301e:c.instructions+=2;goto B60301e;
case 0x603021:c.instructions+=1;goto B603021;
case 0x603027:goto L603027;
case 0x60302c:c.instructions+=4;goto B60302c;
case 0x60302d:c.instructions+=3;goto B60302d;
case 0x60302f:c.instructions+=2;goto B60302f;
case 0x603031:c.instructions+=1;goto B603031;
case 0x603036:goto L603036;
case 0x60303b:goto L60303b;
case 0x603041:c.instructions+=7;goto B603041;
case 0x603046:c.instructions+=6;goto B603046;
case 0x603050:c.instructions+=5;goto B603050;
case 0x603056:c.instructions+=4;goto B603056;
case 0x60305c:c.instructions+=3;goto B60305c;
case 0x60305f:c.instructions+=2;goto B60305f;
case 0x603060:c.instructions+=1;goto B603060;
case 0x603065:goto L603065;
case 0x603068:goto L603068;
case 0x60306b:c.instructions+=8;goto B60306b;
case 0x603071:c.instructions+=7;goto B603071;
case 0x603077:c.instructions+=6;goto B603077;
case 0x603078:c.instructions+=5;goto B603078;
case 0x603079:c.instructions+=4;goto B603079;
case 0x603083:c.instructions+=3;goto B603083;
case 0x603084:c.instructions+=2;goto B603084;
case 0x603085:c.instructions+=1;goto B603085;
case 0x603088:goto L603088;
case 0x60308d:c.instructions+=2;goto B60308d;
case 0x60308f:c.instructions+=1;goto B60308f;
case 0x603095:goto L603095;
case 0x60309a:c.instructions+=2;goto B60309a;
case 0x60309c:c.instructions+=1;goto B60309c;
case 0x6030a2:goto L6030a2;
case 0x6030a5:c.instructions+=2;goto B6030a5;
case 0x6030a7:c.instructions+=1;goto B6030a7;
case 0x6030a9:goto L6030a9;
case 0x6030ae:c.instructions+=1;goto B6030ae;
case 0x6030b0:goto L6030b0;
case 0x6030b5:c.instructions+=8;goto B6030b5;
case 0x6030b8:c.instructions+=7;goto B6030b8;
case 0x6030bb:c.instructions+=6;goto B6030bb;
case 0x6030be:c.instructions+=5;goto B6030be;
case 0x6030c4:c.instructions+=4;goto B6030c4;
case 0x6030ca:c.instructions+=3;goto B6030ca;
case 0x6030cc:c.instructions+=2;goto B6030cc;
case 0x6030cf:c.instructions+=1;goto B6030cf;
case 0x6030d5:goto L6030d5;
case 0x6030db:c.instructions+=2;goto B6030db;
case 0x6030de:c.instructions+=1;goto B6030de;
case 0x6030e4:goto L6030e4;
case 0x6030ea:c.instructions+=2;goto B6030ea;
case 0x6030ed:c.instructions+=1;goto B6030ed;
case 0x6030f3:goto L6030f3;
case 0x6030f9:c.instructions+=4;goto B6030f9;
case 0x6030ff:c.instructions+=3;goto B6030ff;
case 0x603101:c.instructions+=2;goto B603101;
case 0x603104:c.instructions+=1;goto B603104;
case 0x60310a:goto L60310a;
case 0x60310d:c.instructions+=3;goto B60310d;
case 0x603113:c.instructions+=2;goto B603113;
case 0x603115:c.instructions+=1;goto B603115;
case 0x603117:goto L603117;
case 0x603119:c.instructions+=2;goto B603119;
case 0x60311b:c.instructions+=1;goto B60311b;
case 0x603120:goto L603120;
case 0x603126:goto L603126;
case 0x603128:c.instructions+=2;goto B603128;
case 0x60312a:c.instructions+=1;goto B60312a;
case 0x60312c:goto L60312c;
case 0x603130:goto L603130;
case 0x603137:c.instructions+=4;goto B603137;
case 0x60313a:c.instructions+=3;goto B60313a;
case 0x603140:c.instructions+=2;goto B603140;
case 0x603142:c.instructions+=1;goto B603142;
case 0x603148:goto L603148;
case 0x603149:c.instructions+=2;goto B603149;
case 0x60314b:c.instructions+=1;goto B60314b;
case 0x60314d:goto L60314d;
case 0x603152:c.instructions+=4;goto B603152;
case 0x603158:c.instructions+=3;goto B603158;
case 0x60315e:c.instructions+=2;goto B60315e;
case 0x603161:c.instructions+=1;goto B603161;
case 0x603167:goto L603167;
case 0x60316d:c.instructions+=2;goto B60316d;
case 0x60316f:c.instructions+=1;goto B60316f;
case 0x603175:goto L603175;
case 0x603178:c.instructions+=2;goto B603178;
case 0x603179:c.instructions+=1;goto B603179;
case 0x60317e:goto L60317e;
case 0x603181:c.instructions+=3;goto B603181;
case 0x603183:c.instructions+=2;goto B603183;
case 0x603189:c.instructions+=1;goto B603189;
case 0x60318f:goto L60318f;
case 0x603194:c.instructions+=4;goto B603194;
case 0x603195:c.instructions+=3;goto B603195;
case 0x603197:c.instructions+=2;goto B603197;
case 0x603199:c.instructions+=1;goto B603199;
case 0x60319e:goto L60319e;
case 0x6031a4:c.instructions+=2;goto B6031a4;
case 0x6031a6:c.instructions+=1;goto B6031a6;
case 0x6031ab:goto L6031ab;
case 0x6031ad:c.instructions+=1;goto B6031ad;
case 0x6031af:goto L6031af;
case 0x6031b1:c.instructions+=1;goto B6031b1;
case 0x6031b6:goto L6031b6;
case 0x6031b7:c.instructions+=4;goto B6031b7;
case 0x6031b8:c.instructions+=3;goto B6031b8;
case 0x6031b9:c.instructions+=2;goto B6031b9;
case 0x6031ba:c.instructions+=1;goto B6031ba;
case 0x6031bd:goto L6031bd;
case 0x6031bf:c.instructions+=1;goto B6031bf;
case 0x6031c4:goto L6031c4;
case 0x6031ca:c.instructions+=7;goto B6031ca;
case 0x6031cf:c.instructions+=6;goto B6031cf;
case 0x6031d9:c.instructions+=5;goto B6031d9;
case 0x6031df:c.instructions+=4;goto B6031df;
case 0x6031e5:c.instructions+=3;goto B6031e5;
case 0x6031e8:c.instructions+=2;goto B6031e8;
case 0x6031e9:c.instructions+=1;goto B6031e9;
case 0x6031ee:goto L6031ee;
case 0x6031f5:c.instructions+=1;goto B6031f5;
case 0x6031fa:goto L6031fa;
case 0x6031ff:c.instructions+=2;goto B6031ff;
case 0x603201:c.instructions+=1;goto B603201;
case 0x603207:goto L603207;
case 0x60320c:c.instructions+=2;goto B60320c;
case 0x60320e:c.instructions+=1;goto B60320e;
case 0x603214:goto L603214;
case 0x603217:c.instructions+=2;goto B603217;
case 0x603219:c.instructions+=1;goto B603219;
case 0x60321b:goto L60321b;
case 0x603220:c.instructions+=1;goto B603220;
case 0x603222:goto L603222;
case 0x603228:c.instructions+=8;goto B603228;
case 0x60322a:c.instructions+=7;goto B60322a;
case 0x60322d:c.instructions+=6;goto B60322d;
case 0x603230:c.instructions+=5;goto B603230;
case 0x603236:c.instructions+=4;goto B603236;
case 0x60323c:c.instructions+=3;goto B60323c;
case 0x60323e:c.instructions+=2;goto B60323e;
case 0x603241:c.instructions+=1;goto B603241;
case 0x603247:goto L603247;
case 0x60324d:c.instructions+=2;goto B60324d;
case 0x603250:c.instructions+=1;goto B603250;
case 0x603256:goto L603256;
case 0x60325c:c.instructions+=2;goto B60325c;
case 0x60325f:c.instructions+=1;goto B60325f;
case 0x603265:goto L603265;
case 0x60326b:c.instructions+=4;goto B60326b;
case 0x603271:c.instructions+=3;goto B603271;
case 0x603273:c.instructions+=2;goto B603273;
case 0x603276:c.instructions+=1;goto B603276;
case 0x60327c:goto L60327c;
case 0x60327f:c.instructions+=3;goto B60327f;
case 0x603285:c.instructions+=2;goto B603285;
case 0x603287:c.instructions+=1;goto B603287;
case 0x603289:goto L603289;
case 0x60328b:c.instructions+=2;goto B60328b;
case 0x60328d:c.instructions+=1;goto B60328d;
case 0x603292:goto L603292;
case 0x603298:goto L603298;
case 0x60329a:c.instructions+=2;goto B60329a;
case 0x60329c:c.instructions+=1;goto B60329c;
case 0x60329e:goto L60329e;
case 0x6032a0:goto L6032a0;
case 0x6032a7:c.instructions+=4;goto B6032a7;
case 0x6032aa:c.instructions+=3;goto B6032aa;
case 0x6032b0:c.instructions+=2;goto B6032b0;
case 0x6032b2:c.instructions+=1;goto B6032b2;
case 0x6032b8:goto L6032b8;
case 0x6032b9:c.instructions+=2;goto B6032b9;
case 0x6032bb:c.instructions+=1;goto B6032bb;
case 0x6032bd:goto L6032bd;
case 0x6032c3:c.instructions+=9;goto B6032c3;
case 0x6032c8:c.instructions+=8;goto B6032c8;
case 0x6032ce:c.instructions+=7;goto B6032ce;
case 0x6032cf:c.instructions+=6;goto B6032cf;
case 0x6032d4:c.instructions+=5;goto B6032d4;
case 0x6032d5:c.instructions+=4;goto B6032d5;
case 0x6032db:c.instructions+=3;goto B6032db;
case 0x6032e1:c.instructions+=2;goto B6032e1;
case 0x6032e2:c.instructions+=1;goto B6032e2;
case 0x6032e7:goto L6032e7;
case 0x6032ea:c.instructions+=2;goto B6032ea;
case 0x6032eb:c.instructions+=1;goto B6032eb;
case 0x6032f0:goto L6032f0;
case 0x6032f5:c.instructions+=2;goto B6032f5;
case 0x6032fc:c.instructions+=1;goto B6032fc;
case 0x603301:goto L603301;
case 0x603307:c.instructions+=6;goto B603307;
case 0x603308:c.instructions+=5;goto B603308;
case 0x603309:c.instructions+=4;goto B603309;
case 0x60330f:c.instructions+=3;goto B60330f;
case 0x603310:c.instructions+=2;goto B603310;
case 0x603311:c.instructions+=1;goto B603311;
case 0x603314:goto L603314;
case 0x60331a:c.instructions+=6;goto B60331a;
case 0x60331b:c.instructions+=5;goto B60331b;
case 0x60331c:c.instructions+=4;goto B60331c;
case 0x603322:c.instructions+=3;goto B603322;
case 0x603323:c.instructions+=2;goto B603323;
case 0x603324:c.instructions+=1;goto B603324;
case 0x603327:goto L603327;
case 0x60332d:c.instructions+=2;goto B60332d;
case 0x603330:c.instructions+=1;goto B603330;
case 0x603332:goto L603332;
case 0x603335:c.instructions+=1;goto B603335;
case 0x603337:goto L603337;
case 0x603338:c.instructions+=1;goto B603338;
case 0x60333e:goto L60333e;
case 0x60333f:c.instructions+=5;goto B60333f;
case 0x603340:c.instructions+=4;goto B603340;
case 0x60334a:c.instructions+=3;goto B60334a;
case 0x60334b:c.instructions+=2;goto B60334b;
case 0x60334c:c.instructions+=1;goto B60334c;
case 0x60334f:goto L60334f;
case 0x603350:c.instructions+=5;goto B603350;
case 0x603351:c.instructions+=4;goto B603351;
case 0x60335b:c.instructions+=3;goto B60335b;
case 0x60335c:c.instructions+=2;goto B60335c;
case 0x60335d:c.instructions+=1;goto B60335d;
case 0x603360:goto L603360;
case 0x603361:c.instructions+=5;goto B603361;
case 0x603362:c.instructions+=4;goto B603362;
case 0x60336c:c.instructions+=3;goto B60336c;
case 0x60336d:c.instructions+=2;goto B60336d;
case 0x60336e:c.instructions+=1;goto B60336e;
case 0x603371:goto L603371;
case 0x603375:c.instructions+=6;goto B603375;
case 0x603378:c.instructions+=5;goto B603378;
case 0x603379:c.instructions+=4;goto B603379;
case 0x60337e:c.instructions+=3;goto B60337e;
case 0x603381:c.instructions+=2;goto B603381;
case 0x603384:c.instructions+=1;goto B603384;
case 0x603389:goto L603389;
case 0x60338f:c.instructions+=6;goto B60338f;
case 0x603390:c.instructions+=5;goto B603390;
case 0x603391:c.instructions+=4;goto B603391;
case 0x603397:c.instructions+=3;goto B603397;
case 0x603398:c.instructions+=2;goto B603398;
case 0x603399:c.instructions+=1;goto B603399;
case 0x60339c:goto L60339c;
case 0x6033a0:c.instructions+=6;goto B6033a0;
case 0x6033a3:c.instructions+=5;goto B6033a3;
case 0x6033a4:c.instructions+=4;goto B6033a4;
case 0x6033a9:c.instructions+=3;goto B6033a9;
case 0x6033ac:c.instructions+=2;goto B6033ac;
case 0x6033af:c.instructions+=1;goto B6033af;
case 0x6033b4:goto L6033b4;
case 0x6033ba:c.instructions+=6;goto B6033ba;
case 0x6033bb:c.instructions+=5;goto B6033bb;
case 0x6033bc:c.instructions+=4;goto B6033bc;
case 0x6033c2:c.instructions+=3;goto B6033c2;
case 0x6033c3:c.instructions+=2;goto B6033c3;
case 0x6033c4:c.instructions+=1;goto B6033c4;
case 0x6033c7:goto L6033c7;
case 0x6033cc:c.instructions+=1;goto B6033cc;
case 0x6033d1:goto L6033d1;
case 0x6033d3:c.instructions+=1;goto B6033d3;
case 0x6033d9:goto L6033d9;
case 0x6033dc:c.instructions+=6;goto B6033dc;
case 0x6033de:c.instructions+=5;goto B6033de;
case 0x6033e1:c.instructions+=4;goto B6033e1;
case 0x6033e7:c.instructions+=3;goto B6033e7;
case 0x6033ec:c.instructions+=2;goto B6033ec;
case 0x6033ee:c.instructions+=1;goto B6033ee;
case 0x6033f0:goto L6033f0;
case 0x6033f5:c.instructions+=1;goto B6033f5;
case 0x6033f8:goto L6033f8;
case 0x6033fe:c.instructions+=3;goto B6033fe;
case 0x603400:c.instructions+=2;goto B603400;
case 0x603405:c.instructions+=1;goto B603405;
case 0x603407:goto L603407;
case 0x60340a:c.instructions+=1;goto B60340a;
case 0x60340c:goto L60340c;
case 0x603412:c.instructions+=2;goto B603412;
case 0x603414:c.instructions+=1;goto B603414;
case 0x60341a:goto L60341a;
case 0x60341d:c.instructions+=1;goto B60341d;
case 0x603423:goto L603423;
case 0x603425:c.instructions+=4;goto B603425;
case 0x603427:c.instructions+=3;goto B603427;
case 0x60342d:c.instructions+=2;goto B60342d;
case 0x60342e:c.instructions+=1;goto B60342e;
case 0x603431:goto L603431;
case 0x603432:c.instructions+=4;goto B603432;
case 0x603433:c.instructions+=3;goto B603433;
case 0x603434:c.instructions+=2;goto B603434;
case 0x603435:c.instructions+=1;goto B603435;
case 0x603438:goto L603438;
case 0x60343b:c.instructions+=3;goto B60343b;
case 0x60343d:c.instructions+=2;goto B60343d;
case 0x60343f:c.instructions+=1;goto B60343f;
case 0x603441:goto L603441;
case 0x603446:goto L603446;
case 0x60344b:goto L60344b;
case 0x60344c:c.instructions+=4;goto B60344c;
case 0x60344d:c.instructions+=3;goto B60344d;
case 0x60344e:c.instructions+=2;goto B60344e;
case 0x60344f:c.instructions+=1;goto B60344f;
case 0x603452:goto L603452;
case 0x603457:goto L603457;
case 0x603458:c.instructions+=4;goto B603458;
case 0x603459:c.instructions+=3;goto B603459;
case 0x60345a:c.instructions+=2;goto B60345a;
case 0x60345b:c.instructions+=1;goto B60345b;
case 0x60345e:goto L60345e;
case 0x603463:c.instructions+=1;goto B603463;
case 0x603468:goto L603468;
case 0x60346a:c.instructions+=1;goto B60346a;
case 0x603470:goto L603470;
case 0x603473:c.instructions+=4;goto B603473;
case 0x603475:c.instructions+=3;goto B603475;
case 0x603478:c.instructions+=2;goto B603478;
case 0x60347b:c.instructions+=1;goto B60347b;
case 0x603481:goto L603481;
case 0x603485:c.instructions+=1;goto B603485;
case 0x603487:goto L603487;
case 0x603489:c.instructions+=1;goto B603489;
case 0x60348b:goto L60348b;
case 0x603491:c.instructions+=2;goto B603491;
case 0x603493:c.instructions+=1;goto B603493;
case 0x603499:goto L603499;
case 0x60349b:c.instructions+=1;goto B60349b;
case 0x6034a0:goto L6034a0;
case 0x6034a2:c.instructions+=1;goto B6034a2;
case 0x6034a8:goto L6034a8;
case 0x6034aa:c.instructions+=1;goto B6034aa;
case 0x6034af:goto L6034af;
case 0x6034b0:c.instructions+=4;goto B6034b0;
case 0x6034b1:c.instructions+=3;goto B6034b1;
case 0x6034b2:c.instructions+=2;goto B6034b2;
case 0x6034b3:c.instructions+=1;goto B6034b3;
case 0x6034b6:goto L6034b6;
case 0x6034b9:c.instructions+=3;goto B6034b9;
case 0x6034bb:c.instructions+=2;goto B6034bb;
case 0x6034bd:c.instructions+=1;goto B6034bd;
case 0x6034c3:goto L6034c3;
case 0x6034c8:goto L6034c8;
case 0x6034ca:c.instructions+=1;goto B6034ca;
case 0x6034d0:goto L6034d0;
case 0x6034d3:c.instructions+=2;goto B6034d3;
case 0x6034d6:c.instructions+=1;goto B6034d6;
case 0x6034db:goto L6034db;
case 0x6034dd:c.instructions+=1;goto B6034dd;
case 0x6034e3:goto L6034e3;
case 0x6034e8:c.instructions+=1;goto B6034e8;
case 0x6034ed:goto L6034ed;
case 0x6034ef:c.instructions+=1;goto B6034ef;
case 0x6034f1:goto L6034f1;
case 0x6034f7:c.instructions+=2;goto B6034f7;
case 0x6034fa:c.instructions+=1;goto B6034fa;
case 0x6034fc:goto L6034fc;
case 0x6034ff:c.instructions+=1;goto B6034ff;
case 0x603504:goto L603504;
case 0x603506:c.instructions+=1;goto B603506;
case 0x603508:goto L603508;
case 0x60350b:c.instructions+=6;goto B60350b;
case 0x60350e:c.instructions+=5;goto B60350e;
case 0x603514:c.instructions+=4;goto B603514;
case 0x603516:c.instructions+=3;goto B603516;
case 0x60351b:c.instructions+=2;goto B60351b;
case 0x60351d:c.instructions+=1;goto B60351d;
case 0x603522:goto L603522;
case 0x603524:goto L603524;
case 0x603527:c.instructions+=2;goto B603527;
case 0x603528:c.instructions+=1;goto B603528;
case 0x60352d:goto L60352d;
case 0x603530:c.instructions+=1;goto B603530;
case 0x603537:goto L603537;
case 0x60353a:c.instructions+=4;goto B60353a;
case 0x60353d:c.instructions+=3;goto B60353d;
case 0x603544:c.instructions+=2;goto B603544;
case 0x603546:c.instructions+=1;goto B603546;
case 0x603548:goto L603548;
case 0x60354b:c.instructions+=4;goto B60354b;
case 0x603550:c.instructions+=3;goto B603550;
case 0x603551:c.instructions+=2;goto B603551;
case 0x603553:c.instructions+=1;goto B603553;
case 0x603558:goto L603558;
case 0x60355b:c.instructions+=5;goto B60355b;
case 0x60355c:c.instructions+=4;goto B60355c;
case 0x60355d:c.instructions+=3;goto B60355d;
case 0x60355e:c.instructions+=2;goto B60355e;
case 0x60355f:c.instructions+=1;goto B60355f;
case 0x603562:goto L603562;
case 0x603567:goto L603567;
case 0x603569:c.instructions+=1;goto B603569;
case 0x60356b:goto L60356b;
case 0x603570:c.instructions+=2;goto B603570;
case 0x603572:c.instructions+=1;goto B603572;
case 0x603574:goto L603574;
case 0x603577:c.instructions+=2;goto B603577;
case 0x60357a:c.instructions+=1;goto B60357a;
case 0x60357f:goto L60357f;
case 0x603580:c.instructions+=4;goto B603580;
case 0x603581:c.instructions+=3;goto B603581;
case 0x603582:c.instructions+=2;goto B603582;
case 0x603583:c.instructions+=1;goto B603583;
case 0x603630:goto L603630;
case 0x603631:c.instructions+=5;goto B603631;
case 0x603633:c.instructions+=4;goto B603633;
case 0x603635:c.instructions+=3;goto B603635;
case 0x603636:c.instructions+=2;goto B603636;
case 0x603638:c.instructions+=1;goto B603638;
case 0x60363d:goto L60363d;
case 0x603641:c.instructions+=4;goto B603641;
case 0x603642:c.instructions+=3;goto B603642;
case 0x603644:c.instructions+=2;goto B603644;
case 0x603646:c.instructions+=1;goto B603646;
case 0x60364b:goto L60364b;
case 0x60364d:c.instructions+=3;goto B60364d;
case 0x60364f:c.instructions+=2;goto B60364f;
case 0x603651:c.instructions+=1;goto B603651;
case 0x603656:goto L603656;
case 0x603657:c.instructions+=1;goto B603657;
case 0x603660:goto L603660;
case 0x603662:c.instructions+=13;goto B603662;
case 0x603667:c.instructions+=12;goto B603667;
case 0x60366d:c.instructions+=11;goto B60366d;
case 0x60366e:c.instructions+=10;goto B60366e;
case 0x603675:c.instructions+=9;goto B603675;
case 0x603676:c.instructions+=8;goto B603676;
case 0x603677:c.instructions+=7;goto B603677;
case 0x603678:c.instructions+=6;goto B603678;
case 0x60367a:c.instructions+=5;goto B60367a;
case 0x60367e:c.instructions+=4;goto B60367e;
case 0x603680:c.instructions+=3;goto B603680;
case 0x603682:c.instructions+=2;goto B603682;
case 0x60368a:c.instructions+=1;goto B60368a;
case 0x603690:goto L603690;
case 0x603695:c.instructions+=2;goto B603695;
case 0x603696:c.instructions+=1;goto B603696;
case 0x60369b:goto L60369b;
case 0x60369e:c.instructions+=2;goto B60369e;
case 0x6036a0:c.instructions+=1;goto B6036a0;
case 0x6036a2:goto L6036a2;
case 0x6036a9:c.instructions+=2;goto B6036a9;
case 0x6036ac:c.instructions+=1;goto B6036ac;
case 0x6036ae:goto L6036ae;
case 0x6036b0:goto L6036b0;
case 0x6036b3:c.instructions+=8;goto B6036b3;
case 0x6036b6:c.instructions+=7;goto B6036b6;
case 0x6036b8:c.instructions+=6;goto B6036b8;
case 0x6036bb:c.instructions+=5;goto B6036bb;
case 0x6036be:c.instructions+=4;goto B6036be;
case 0x6036c0:c.instructions+=3;goto B6036c0;
case 0x6036c3:c.instructions+=2;goto B6036c3;
case 0x6036c5:c.instructions+=1;goto B6036c5;
case 0x6036c7:goto L6036c7;
case 0x6036c9:c.instructions+=1;goto B6036c9;
case 0x6036ce:goto L6036ce;
case 0x6036d4:c.instructions+=2;goto B6036d4;
case 0x6036d5:c.instructions+=1;goto B6036d5;
case 0x6036da:goto L6036da;
case 0x6036dd:c.instructions+=2;goto B6036dd;
case 0x6036df:c.instructions+=1;goto B6036df;
case 0x6036e1:goto L6036e1;
case 0x6036e8:c.instructions+=2;goto B6036e8;
case 0x6036ef:c.instructions+=1;goto B6036ef;
case 0x6036f1:goto L6036f1;
case 0x6036f3:goto L6036f3;
case 0x6036f6:c.instructions+=7;goto B6036f6;
case 0x6036f8:c.instructions+=6;goto B6036f8;
case 0x6036fb:c.instructions+=5;goto B6036fb;
case 0x6036fe:c.instructions+=4;goto B6036fe;
case 0x603700:c.instructions+=3;goto B603700;
case 0x603703:c.instructions+=2;goto B603703;
case 0x603705:c.instructions+=1;goto B603705;
case 0x603707:goto L603707;
case 0x603709:c.instructions+=1;goto B603709;
case 0x60370e:goto L60370e;
case 0x603714:c.instructions+=2;goto B603714;
case 0x603715:c.instructions+=1;goto B603715;
case 0x60371a:goto L60371a;
case 0x60371d:c.instructions+=2;goto B60371d;
case 0x60371f:c.instructions+=1;goto B60371f;
case 0x603721:goto L603721;
case 0x603728:c.instructions+=2;goto B603728;
case 0x60372f:c.instructions+=1;goto B60372f;
case 0x603731:goto L603731;
case 0x603733:goto L603733;
case 0x603736:c.instructions+=7;goto B603736;
case 0x603738:c.instructions+=6;goto B603738;
case 0x60373b:c.instructions+=5;goto B60373b;
case 0x60373e:c.instructions+=4;goto B60373e;
case 0x603740:c.instructions+=3;goto B603740;
case 0x603743:c.instructions+=2;goto B603743;
case 0x603745:c.instructions+=1;goto B603745;
case 0x603747:goto L603747;
case 0x603749:c.instructions+=1;goto B603749;
case 0x60374e:goto L60374e;
case 0x603751:c.instructions+=2;goto B603751;
case 0x603753:c.instructions+=1;goto B603753;
case 0x603755:goto L603755;
case 0x603756:c.instructions+=1;goto B603756;
case 0x60375b:goto L60375b;
case 0x60375e:goto L60375e;
case 0x603763:c.instructions+=2;goto B603763;
case 0x603764:c.instructions+=1;goto B603764;
case 0x603769:goto L603769;
case 0x60376c:c.instructions+=3;goto B60376c;
case 0x60376f:c.instructions+=2;goto B60376f;
case 0x603777:c.instructions+=1;goto B603777;
case 0x60377c:goto L60377c;
case 0x603780:c.instructions+=5;goto B603780;
case 0x603781:c.instructions+=4;goto B603781;
case 0x603782:c.instructions+=3;goto B603782;
case 0x603789:c.instructions+=2;goto B603789;
case 0x60378c:c.instructions+=1;goto B60378c;
case 0x603790:goto L603790;
case 0x603791:c.instructions+=5;goto B603791;
case 0x603793:c.instructions+=4;goto B603793;
case 0x603795:c.instructions+=3;goto B603795;
case 0x603796:c.instructions+=2;goto B603796;
case 0x603798:c.instructions+=1;goto B603798;
case 0x60379d:goto L60379d;
case 0x60379f:c.instructions+=3;goto B60379f;
case 0x6037a1:c.instructions+=2;goto B6037a1;
case 0x6037a3:c.instructions+=1;goto B6037a3;
case 0x6037a8:goto L6037a8;
case 0x6037aa:c.instructions+=3;goto B6037aa;
case 0x6037ac:c.instructions+=2;goto B6037ac;
case 0x6037ae:c.instructions+=1;goto B6037ae;
case 0x6037b3:goto L6037b3;
case 0x6037b5:c.instructions+=3;goto B6037b5;
case 0x6037b7:c.instructions+=2;goto B6037b7;
case 0x6037b9:c.instructions+=1;goto B6037b9;
case 0x6037be:goto L6037be;
case 0x6037bf:c.instructions+=1;goto B6037bf;
case 0x6037c0:goto L6037c0;
case 0x6037c1:c.instructions+=7;goto B6037c1;
case 0x6037c3:c.instructions+=6;goto B6037c3;
case 0x6037c4:c.instructions+=5;goto B6037c4;
case 0x6037c6:c.instructions+=4;goto B6037c6;
case 0x6037c9:c.instructions+=3;goto B6037c9;
case 0x6037cc:c.instructions+=2;goto B6037cc;
case 0x6037cf:c.instructions+=1;goto B6037cf;
case 0x6037d5:goto L6037d5;
case 0x6037dc:c.instructions+=1;goto B6037dc;
case 0x6037e3:goto L6037e3;
case 0x6037e8:c.instructions+=3;goto B6037e8;
case 0x6037e9:c.instructions+=2;goto B6037e9;
case 0x6037ea:c.instructions+=1;goto B6037ea;
case 0x6037ed:goto L6037ed;
case 0x6037ef:c.instructions+=2;goto B6037ef;
case 0x6037f1:c.instructions+=1;goto B6037f1;
case 0x6037f6:goto L6037f6;
case 0x6037f8:c.instructions+=3;goto B6037f8;
case 0x6037fa:c.instructions+=2;goto B6037fa;
case 0x6037fc:c.instructions+=1;goto B6037fc;
case 0x603801:goto L603801;
case 0x603806:c.instructions+=3;goto B603806;
case 0x603807:c.instructions+=2;goto B603807;
case 0x603808:c.instructions+=1;goto B603808;
case 0x60380b:goto L60380b;
case 0x60380d:c.instructions+=2;goto B60380d;
case 0x60380f:c.instructions+=1;goto B60380f;
case 0x603814:goto L603814;
case 0x603819:c.instructions+=3;goto B603819;
case 0x60381a:c.instructions+=2;goto B60381a;
case 0x60381b:c.instructions+=1;goto B60381b;
case 0x60381e:goto L60381e;
case 0x603824:c.instructions+=2;goto B603824;
case 0x603829:c.instructions+=1;goto B603829;
case 0x60382e:goto L60382e;
case 0x603833:c.instructions+=3;goto B603833;
case 0x603834:c.instructions+=2;goto B603834;
case 0x603835:c.instructions+=1;goto B603835;
case 0x603838:goto L603838;
case 0x60383a:c.instructions+=2;goto B60383a;
case 0x60383f:c.instructions+=1;goto B60383f;
case 0x603844:goto L603844;
case 0x603849:c.instructions+=1;goto B603849;
case 0x60384e:goto L60384e;
case 0x603853:c.instructions+=1;goto B603853;
case 0x603858:goto L603858;
case 0x60385d:c.instructions+=3;goto B60385d;
case 0x60385e:c.instructions+=2;goto B60385e;
case 0x60385f:c.instructions+=1;goto B60385f;
case 0x603862:goto L603862;
case 0x603867:c.instructions+=2;goto B603867;
case 0x603869:c.instructions+=1;goto B603869;
case 0x60386b:goto L60386b;
case 0x603870:c.instructions+=1;goto B603870;
case 0x603875:goto L603875;
case 0x603877:c.instructions+=1;goto B603877;
case 0x603879:goto L603879;
case 0x60387b:c.instructions+=3;goto B60387b;
case 0x60387d:c.instructions+=2;goto B60387d;
case 0x603881:c.instructions+=1;goto B603881;
case 0x603886:goto L603886;
case 0x603888:c.instructions+=3;goto B603888;
case 0x60388a:c.instructions+=2;goto B60388a;
case 0x60388c:c.instructions+=1;goto B60388c;
case 0x603891:goto L603891;
case 0x603896:c.instructions+=3;goto B603896;
case 0x603897:c.instructions+=2;goto B603897;
case 0x603898:c.instructions+=1;goto B603898;
case 0x60389b:goto L60389b;
case 0x60389d:c.instructions+=3;goto B60389d;
case 0x60389e:c.instructions+=2;goto B60389e;
case 0x60389f:c.instructions+=1;goto B60389f;
case 0x6038e0:goto L6038e0;
case 0x6038e4:c.instructions+=5;goto B6038e4;
case 0x6038e5:c.instructions+=4;goto B6038e5;
case 0x6038e8:c.instructions+=3;goto B6038e8;
case 0x6038e9:c.instructions+=2;goto B6038e9;
case 0x6038eb:c.instructions+=1;goto B6038eb;
case 0x6038f1:goto L6038f1;
case 0x6038f8:c.instructions+=1;goto B6038f8;
case 0x6038ff:goto L6038ff;
case 0x603902:c.instructions+=2;goto B603902;
case 0x603905:c.instructions+=1;goto B603905;
case 0x60390b:goto L60390b;
case 0x60390e:c.instructions+=1;goto B60390e;
case 0x603910:goto L603910;
case 0x603915:c.instructions+=1;goto B603915;
case 0x60391a:goto L60391a;
case 0x60391d:c.instructions+=2;goto B60391d;
case 0x60391f:c.instructions+=1;goto B60391f;
case 0x603925:goto L603925;
case 0x60392a:c.instructions+=1;goto B60392a;
case 0x60392f:goto L60392f;
case 0x603932:c.instructions+=2;goto B603932;
case 0x603934:c.instructions+=1;goto B603934;
case 0x60393a:goto L60393a;
case 0x60393f:c.instructions+=1;goto B60393f;
case 0x603944:goto L603944;
case 0x603946:c.instructions+=1;goto B603946;
case 0x603948:goto L603948;
case 0x60394e:c.instructions+=1;goto B60394e;
case 0x603953:goto L603953;
case 0x603955:c.instructions+=1;goto B603955;
case 0x603957:goto L603957;
case 0x603959:c.instructions+=2;goto B603959;
case 0x60395e:c.instructions+=1;goto B60395e;
case 0x603963:goto L603963;
case 0x603966:c.instructions+=3;goto B603966;
case 0x60396b:c.instructions+=2;goto B60396b;
case 0x60396c:c.instructions+=1;goto B60396c;
case 0x60396f:goto L60396f;
case 0x603971:c.instructions+=2;goto B603971;
case 0x603976:c.instructions+=1;goto B603976;
case 0x60397b:goto L60397b;
case 0x60397e:c.instructions+=3;goto B60397e;
case 0x603983:c.instructions+=2;goto B603983;
case 0x603984:c.instructions+=1;goto B603984;
case 0x603987:goto L603987;
case 0x60398a:c.instructions+=1;goto B60398a;
case 0x60398c:goto L60398c;
case 0x60398f:c.instructions+=1;goto B60398f;
case 0x603991:goto L603991;
case 0x603994:c.instructions+=1;goto B603994;
case 0x603996:goto L603996;
case 0x60399b:c.instructions+=1;goto B60399b;
case 0x6039a0:goto L6039a0;
case 0x6039a3:c.instructions+=2;goto B6039a3;
case 0x6039a5:c.instructions+=1;goto B6039a5;
case 0x6039a7:goto L6039a7;
case 0x6039a9:c.instructions+=2;goto B6039a9;
case 0x6039ae:c.instructions+=1;goto B6039ae;
case 0x6039b3:goto L6039b3;
case 0x6039b6:goto L6039b6;
case 0x6039ba:c.instructions+=1;goto B6039ba;
case 0x6039bc:goto L6039bc;
case 0x6039c1:c.instructions+=1;goto B6039c1;
case 0x6039c6:goto L6039c6;
case 0x6039ca:c.instructions+=1;goto B6039ca;
case 0x6039ce:goto L6039ce;
case 0x6039d3:c.instructions+=2;goto B6039d3;
case 0x6039d4:c.instructions+=1;goto B6039d4;
case 0x6039d7:goto L6039d7;
case 0x6039dc:c.instructions+=1;goto B6039dc;
case 0x6039e1:goto L6039e1;
case 0x6039e4:c.instructions+=2;goto B6039e4;
case 0x6039e6:c.instructions+=1;goto B6039e6;
case 0x6039e8:goto L6039e8;
case 0x6039ed:c.instructions+=1;goto B6039ed;
case 0x6039f2:goto L6039f2;
case 0x6039f5:goto L6039f5;
case 0x6039fa:c.instructions+=1;goto B6039fa;
case 0x6039ff:goto L6039ff;
case 0x603a02:c.instructions+=2;goto B603a02;
case 0x603a04:c.instructions+=1;goto B603a04;
case 0x603a06:goto L603a06;
case 0x603a0b:c.instructions+=1;goto B603a0b;
case 0x603a10:goto L603a10;
case 0x603a13:goto L603a13;
case 0x603a18:goto L603a18;
case 0x603a1f:c.instructions+=3;goto B603a1f;
case 0x603a24:c.instructions+=2;goto B603a24;
case 0x603a25:c.instructions+=1;goto B603a25;
case 0x603a28:goto L603a28;
case 0x603a2c:c.instructions+=1;goto B603a2c;
case 0x603a2e:goto L603a2e;
case 0x603a32:c.instructions+=3;goto B603a32;
case 0x603a33:c.instructions+=2;goto B603a33;
case 0x603a35:c.instructions+=1;goto B603a35;
case 0x603a3a:goto L603a3a;
case 0x603a3f:c.instructions+=2;goto B603a3f;
case 0x603a40:c.instructions+=1;goto B603a40;
case 0x603a43:goto L603a43;
case 0x603a47:c.instructions+=1;goto B603a47;
case 0x603a49:goto L603a49;
case 0x603a4e:c.instructions+=1;goto B603a4e;
case 0x603a53:goto L603a53;
case 0x603a57:c.instructions+=1;goto B603a57;
case 0x603a59:goto L603a59;
case 0x603a5c:c.instructions+=2;goto B603a5c;
case 0x603a5e:c.instructions+=1;goto B603a5e;
case 0x603a60:goto L603a60;
case 0x603a65:c.instructions+=1;goto B603a65;
case 0x603a6a:goto L603a6a;
case 0x603a6c:c.instructions+=1;goto B603a6c;
case 0x603a6e:goto L603a6e;
case 0x603a73:c.instructions+=2;goto B603a73;
case 0x603a77:c.instructions+=1;goto B603a77;
case 0x603a7c:goto L603a7c;
case 0x603a80:c.instructions+=3;goto B603a80;
case 0x603a85:c.instructions+=2;goto B603a85;
case 0x603a86:c.instructions+=1;goto B603a86;
case 0x603a89:goto L603a89;
case 0x603a8c:c.instructions+=2;goto B603a8c;
case 0x603a8e:c.instructions+=1;goto B603a8e;
case 0x603a90:goto L603a90;
case 0x603a95:c.instructions+=1;goto B603a95;
case 0x603a9a:goto L603a9a;
case 0x603a9f:c.instructions+=2;goto B603a9f;
case 0x603aa1:c.instructions+=1;goto B603aa1;
case 0x603aa3:goto L603aa3;
case 0x603aa5:c.instructions+=3;goto B603aa5;
case 0x603aa7:c.instructions+=2;goto B603aa7;
case 0x603aab:c.instructions+=1;goto B603aab;
case 0x603ab0:goto L603ab0;
case 0x603ab5:c.instructions+=2;goto B603ab5;
case 0x603ab6:c.instructions+=1;goto B603ab6;
case 0x603ab9:goto L603ab9;
case 0x603abb:c.instructions+=2;goto B603abb;
case 0x603abc:c.instructions+=1;goto B603abc;
case 0x603af0:goto L603af0;
case 0x603af1:c.instructions+=5;goto B603af1;
case 0x603af3:c.instructions+=4;goto B603af3;
case 0x603af7:c.instructions+=3;goto B603af7;
case 0x603afa:c.instructions+=2;goto B603afa;
case 0x603afd:c.instructions+=1;goto B603afd;
case 0x603b03:goto L603b03;
case 0x603b0a:c.instructions+=1;goto B603b0a;
case 0x603b11:goto L603b11;
case 0x603b16:c.instructions+=2;goto B603b16;
case 0x603b17:c.instructions+=1;goto B603b17;
case 0x603b1a:goto L603b1a;
case 0x603b20:c.instructions+=2;goto B603b20;
case 0x603b22:c.instructions+=1;goto B603b22;
case 0x603b27:goto L603b27;
case 0x603b29:c.instructions+=4;goto B603b29;
case 0x603b2a:c.instructions+=3;goto B603b2a;
case 0x603b2c:c.instructions+=2;goto B603b2c;
case 0x603b2e:c.instructions+=1;goto B603b2e;
case 0x603b33:goto L603b33;
case 0x603b35:c.instructions+=3;goto B603b35;
case 0x603b37:c.instructions+=2;goto B603b37;
case 0x603b39:c.instructions+=1;goto B603b39;
case 0x603b3e:goto L603b3e;
case 0x603b40:c.instructions+=3;goto B603b40;
case 0x603b42:c.instructions+=2;goto B603b42;
case 0x603b44:c.instructions+=1;goto B603b44;
case 0x603b49:goto L603b49;
case 0x603b4e:c.instructions+=2;goto B603b4e;
case 0x603b4f:c.instructions+=1;goto B603b4f;
case 0x603b52:goto L603b52;
case 0x603b54:c.instructions+=8;goto B603b54;
case 0x603b58:c.instructions+=7;goto B603b58;
case 0x603b59:c.instructions+=6;goto B603b59;
case 0x603b5c:c.instructions+=5;goto B603b5c;
case 0x603b5e:c.instructions+=4;goto B603b5e;
case 0x603b60:c.instructions+=3;goto B603b60;
case 0x603b63:c.instructions+=2;goto B603b63;
case 0x603b66:c.instructions+=1;goto B603b66;
case 0x603b6b:goto L603b6b;
case 0x603b6d:c.instructions+=3;goto B603b6d;
case 0x603b6f:c.instructions+=2;goto B603b6f;
case 0x603b71:c.instructions+=1;goto B603b71;
case 0x603b76:goto L603b76;
case 0x603b78:c.instructions+=3;goto B603b78;
case 0x603b7a:c.instructions+=2;goto B603b7a;
case 0x603b7c:c.instructions+=1;goto B603b7c;
case 0x603b81:goto L603b81;
case 0x603b86:c.instructions+=2;goto B603b86;
case 0x603b87:c.instructions+=1;goto B603b87;
case 0x603b8a:goto L603b8a;
case 0x603b8c:c.instructions+=2;goto B603b8c;
case 0x603b8d:c.instructions+=1;goto B603b8d;
case 0x603bc0:goto L603bc0;
case 0x603bc4:c.instructions+=5;goto B603bc4;
case 0x603bc5:c.instructions+=4;goto B603bc5;
case 0x603bc8:c.instructions+=3;goto B603bc8;
case 0x603bc9:c.instructions+=2;goto B603bc9;
case 0x603bcb:c.instructions+=1;goto B603bcb;
case 0x603bd1:goto L603bd1;
case 0x603bd8:c.instructions+=1;goto B603bd8;
case 0x603bdf:goto L603bdf;
case 0x603be4:c.instructions+=1;goto B603be4;
case 0x603be9:goto L603be9;
case 0x603bee:c.instructions+=1;goto B603bee;
case 0x603bf3:goto L603bf3;
case 0x603bf5:c.instructions+=1;goto B603bf5;
case 0x603bf7:goto L603bf7;
case 0x603bfd:c.instructions+=2;goto B603bfd;
case 0x603bff:c.instructions+=1;goto B603bff;
case 0x603c04:goto L603c04;
case 0x603c06:c.instructions+=2;goto B603c06;
case 0x603c08:c.instructions+=1;goto B603c08;
case 0x603c0d:goto L603c0d;
case 0x603c12:c.instructions+=2;goto B603c12;
case 0x603c13:c.instructions+=1;goto B603c13;
case 0x603c16:goto L603c16;
case 0x603c1b:c.instructions+=1;goto B603c1b;
case 0x603c20:goto L603c20;
case 0x603c23:c.instructions+=2;goto B603c23;
case 0x603c25:c.instructions+=1;goto B603c25;
case 0x603c27:goto L603c27;
case 0x603c28:c.instructions+=1;goto B603c28;
case 0x603c2d:goto L603c2d;
case 0x603c30:goto L603c30;
case 0x603c35:c.instructions+=2;goto B603c35;
case 0x603c36:c.instructions+=1;goto B603c36;
case 0x603c39:goto L603c39;
case 0x603c3f:c.instructions+=2;goto B603c3f;
case 0x603c42:c.instructions+=1;goto B603c42;
case 0x603c44:goto L603c44;
case 0x603c49:c.instructions+=1;goto B603c49;
case 0x603c4e:goto L603c4e;
case 0x603c50:goto L603c50;
case 0x603c55:c.instructions+=2;goto B603c55;
case 0x603c57:c.instructions+=1;goto B603c57;
case 0x603c59:goto L603c59;
case 0x603c5e:c.instructions+=2;goto B603c5e;
case 0x603c60:c.instructions+=1;goto B603c60;
case 0x603c62:goto L603c62;
case 0x603c68:c.instructions+=2;goto B603c68;
case 0x603c6a:c.instructions+=1;goto B603c6a;
case 0x603c6f:goto L603c6f;
case 0x603c71:c.instructions+=2;goto B603c71;
case 0x603c73:c.instructions+=1;goto B603c73;
case 0x603c78:goto L603c78;
case 0x603c7d:c.instructions+=1;goto B603c7d;
case 0x603c82:goto L603c82;
case 0x603c87:c.instructions+=2;goto B603c87;
case 0x603c88:c.instructions+=1;goto B603c88;
case 0x603c8b:goto L603c8b;
case 0x603c8d:c.instructions+=2;goto B603c8d;
case 0x603c8f:c.instructions+=1;goto B603c8f;
case 0x603c94:goto L603c94;
case 0x603c96:c.instructions+=3;goto B603c96;
case 0x603c98:c.instructions+=2;goto B603c98;
case 0x603c9a:c.instructions+=1;goto B603c9a;
case 0x603c9f:goto L603c9f;
case 0x603ca4:c.instructions+=2;goto B603ca4;
case 0x603ca5:c.instructions+=1;goto B603ca5;
case 0x603ca8:goto L603ca8;
case 0x603caa:c.instructions+=2;goto B603caa;
case 0x603cac:c.instructions+=1;goto B603cac;
case 0x603cb1:goto L603cb1;
case 0x603cb3:c.instructions+=3;goto B603cb3;
case 0x603cb5:c.instructions+=2;goto B603cb5;
case 0x603cb7:c.instructions+=1;goto B603cb7;
case 0x603cbc:goto L603cbc;
case 0x603cc1:c.instructions+=2;goto B603cc1;
case 0x603cc2:c.instructions+=1;goto B603cc2;
case 0x603cc5:goto L603cc5;
case 0x603cc7:c.instructions+=2;goto B603cc7;
case 0x603cc8:c.instructions+=1;goto B603cc8;
case 0x603d10:goto L603d10;
case 0x603d14:c.instructions+=5;goto B603d14;
case 0x603d15:c.instructions+=4;goto B603d15;
case 0x603d18:c.instructions+=3;goto B603d18;
case 0x603d19:c.instructions+=2;goto B603d19;
case 0x603d1b:c.instructions+=1;goto B603d1b;
case 0x603d21:goto L603d21;
case 0x603d28:c.instructions+=1;goto B603d28;
case 0x603d2f:goto L603d2f;
case 0x603d31:c.instructions+=2;goto B603d31;
case 0x603d36:c.instructions+=1;goto B603d36;
case 0x603d3b:goto L603d3b;
case 0x603d3e:c.instructions+=4;goto B603d3e;
case 0x603d41:c.instructions+=3;goto B603d41;
case 0x603d42:c.instructions+=2;goto B603d42;
case 0x603d47:c.instructions+=1;goto B603d47;
case 0x603d4c:goto L603d4c;
case 0x603d4d:c.instructions+=2;goto B603d4d;
case 0x603d52:c.instructions+=1;goto B603d52;
case 0x603d57:goto L603d57;
case 0x603d5a:c.instructions+=2;goto B603d5a;
case 0x603d5b:c.instructions+=1;goto B603d5b;
case 0x603d60:goto L603d60;
case 0x603d63:c.instructions+=3;goto B603d63;
case 0x603d68:c.instructions+=2;goto B603d68;
case 0x603d69:c.instructions+=1;goto B603d69;
case 0x603d6c:goto L603d6c;
case 0x603d71:c.instructions+=1;goto B603d71;
case 0x603d76:goto L603d76;
case 0x603d79:c.instructions+=1;goto B603d79;
case 0x603d7e:goto L603d7e;
case 0x603d83:c.instructions+=2;goto B603d83;
case 0x603d84:c.instructions+=1;goto B603d84;
case 0x603d87:goto L603d87;
case 0x603d8a:c.instructions+=3;goto B603d8a;
case 0x603d8b:c.instructions+=2;goto B603d8b;
case 0x603d8d:c.instructions+=1;goto B603d8d;
case 0x603d92:goto L603d92;
case 0x603d96:c.instructions+=3;goto B603d96;
case 0x603d9c:c.instructions+=2;goto B603d9c;
case 0x603d9d:c.instructions+=1;goto B603d9d;
case 0x603da2:goto L603da2;
case 0x603da7:c.instructions+=2;goto B603da7;
case 0x603da8:c.instructions+=1;goto B603da8;
case 0x603dab:goto L603dab;
case 0x603dad:c.instructions+=1;goto B603dad;
case 0x603de0:goto L603de0;
case 0x603de1:c.instructions+=3;goto B603de1;
case 0x603de3:c.instructions+=2;goto B603de3;
case 0x603de8:c.instructions+=1;goto B603de8;
case 0x603ded:goto L603ded;
case 0x603def:c.instructions+=4;goto B603def;
case 0x603df0:c.instructions+=3;goto B603df0;
case 0x603df2:c.instructions+=2;goto B603df2;
case 0x603df4:c.instructions+=1;goto B603df4;
case 0x603df9:goto L603df9;
case 0x603dfb:c.instructions+=3;goto B603dfb;
case 0x603dfd:c.instructions+=2;goto B603dfd;
case 0x603dff:c.instructions+=1;goto B603dff;
case 0x603e04:goto L603e04;
case 0x603e06:c.instructions+=3;goto B603e06;
case 0x603e08:c.instructions+=2;goto B603e08;
case 0x603e0a:c.instructions+=1;goto B603e0a;
case 0x603e0f:goto L603e0f;
case 0x603e11:c.instructions+=3;goto B603e11;
case 0x603e13:c.instructions+=2;goto B603e13;
case 0x603e15:c.instructions+=1;goto B603e15;
case 0x603e1a:goto L603e1a;
case 0x603e1b:c.instructions+=1;goto B603e1b;
case 0x603e20:goto L603e20;
case 0x603e24:c.instructions+=3;goto B603e24;
case 0x603e25:c.instructions+=2;goto B603e25;
case 0x603e28:c.instructions+=1;goto B603e28;
case 0x603e2a:goto L603e2a;
case 0x603e31:c.instructions+=1;goto B603e31;
case 0x603e38:goto L603e38;
case 0x603e3d:c.instructions+=1;goto B603e3d;
case 0x603e40:goto L603e40;
case 0x603e45:goto L603e45;
case 0x603e4a:c.instructions+=1;goto B603e4a;
case 0x603e4d:goto L603e4d;
case 0x603e4f:c.instructions+=1;goto B603e4f;
case 0x603e54:goto L603e54;
case 0x603e59:c.instructions+=1;goto B603e59;
case 0x603e5c:goto L603e5c;
case 0x603e5f:c.instructions+=2;goto B603e5f;
case 0x603e61:c.instructions+=1;goto B603e61;
case 0x603e63:goto L603e63;
case 0x603e65:c.instructions+=1;goto B603e65;
case 0x603e6a:goto L603e6a;
case 0x603e6f:c.instructions+=1;goto B603e6f;
case 0x603e72:goto L603e72;
case 0x603e74:c.instructions+=1;goto B603e74;
case 0x603e79:goto L603e79;
case 0x603e7e:c.instructions+=1;goto B603e7e;
case 0x603e81:goto L603e81;
case 0x603e83:c.instructions+=1;goto B603e83;
case 0x603eb0:goto L603eb0;
case 0x603eb1:c.instructions+=11;goto B603eb1;
case 0x603eb3:c.instructions+=10;goto B603eb3;
case 0x603eb6:c.instructions+=9;goto B603eb6;
case 0x603eb9:c.instructions+=8;goto B603eb9;
case 0x603eba:c.instructions+=7;goto B603eba;
case 0x603ebb:c.instructions+=6;goto B603ebb;
case 0x603ebc:c.instructions+=5;goto B603ebc;
case 0x603ebf:c.instructions+=4;goto B603ebf;
case 0x603ec2:c.instructions+=3;goto B603ec2;
case 0x603ec5:c.instructions+=2;goto B603ec5;
case 0x603ec7:c.instructions+=1;goto B603ec7;
case 0x603ecd:goto L603ecd;
case 0x603ed4:c.instructions+=1;goto B603ed4;
case 0x603edb:goto L603edb;
case 0x603edd:c.instructions+=1;goto B603edd;
case 0x603ee2:goto L603ee2;
case 0x603ee5:c.instructions+=1;goto B603ee5;
case 0x603eea:goto L603eea;
case 0x603eec:c.instructions+=1;goto B603eec;
case 0x603eee:goto L603eee;
case 0x603ef1:c.instructions+=1;goto B603ef1;
case 0x603ef6:goto L603ef6;
case 0x603efb:c.instructions+=2;goto B603efb;
case 0x603efd:c.instructions+=1;goto B603efd;
case 0x603eff:goto L603eff;
case 0x603f04:c.instructions+=1;goto B603f04;
case 0x603f09:goto L603f09;
case 0x603f0b:c.instructions+=1;goto B603f0b;
case 0x603f0d:goto L603f0d;
case 0x603f11:goto L603f11;
case 0x603f17:c.instructions+=4;goto B603f17;
case 0x603f1a:c.instructions+=3;goto B603f1a;
case 0x603f1c:c.instructions+=2;goto B603f1c;
case 0x603f1e:c.instructions+=1;goto B603f1e;
case 0x603f24:goto L603f24;
case 0x603f27:c.instructions+=2;goto B603f27;
case 0x603f29:c.instructions+=1;goto B603f29;
case 0x603f2f:goto L603f2f;
case 0x603f34:c.instructions+=2;goto B603f34;
case 0x603f36:c.instructions+=1;goto B603f36;
case 0x603f38:goto L603f38;
case 0x603f3f:c.instructions+=1;goto B603f3f;
case 0x603f41:goto L603f41;
case 0x603f45:c.instructions+=3;goto B603f45;
case 0x603f4a:c.instructions+=2;goto B603f4a;
case 0x603f4c:c.instructions+=1;goto B603f4c;
case 0x603f4e:goto L603f4e;
case 0x603f50:goto L603f50;
case 0x603f57:c.instructions+=3;goto B603f57;
case 0x603f59:c.instructions+=2;goto B603f59;
case 0x603f5b:c.instructions+=1;goto B603f5b;
case 0x603f60:goto L603f60;
case 0x603f65:c.instructions+=3;goto B603f65;
case 0x603f66:c.instructions+=2;goto B603f66;
case 0x603f68:c.instructions+=1;goto B603f68;
case 0x603f6a:goto L603f6a;
case 0x603f6c:c.instructions+=2;goto B603f6c;
case 0x603f6e:c.instructions+=1;goto B603f6e;
case 0x603f73:goto L603f73;
case 0x603f75:c.instructions+=3;goto B603f75;
case 0x603f77:c.instructions+=2;goto B603f77;
case 0x603f79:c.instructions+=1;goto B603f79;
case 0x603f7e:goto L603f7e;
case 0x603f83:goto L603f83;
case 0x603f88:c.instructions+=6;goto B603f88;
case 0x603f89:c.instructions+=5;goto B603f89;
case 0x603f8a:c.instructions+=4;goto B603f8a;
case 0x603f8b:c.instructions+=3;goto B603f8b;
case 0x603f8d:c.instructions+=2;goto B603f8d;
case 0x603f8e:c.instructions+=1;goto B603f8e;
case 0x603f91:goto L603f91;
case 0x603f92:c.instructions+=5;goto B603f92;
case 0x603f94:c.instructions+=4;goto B603f94;
case 0x603f96:c.instructions+=3;goto B603f96;
case 0x603f9a:c.instructions+=2;goto B603f9a;
case 0x603fa1:c.instructions+=1;goto B603fa1;
case 0x603fa6:goto L603fa6;
case 0x603fab:c.instructions+=6;goto B603fab;
case 0x603fac:c.instructions+=5;goto B603fac;
case 0x603fad:c.instructions+=4;goto B603fad;
case 0x603fae:c.instructions+=3;goto B603fae;
case 0x603fb0:c.instructions+=2;goto B603fb0;
case 0x603fb1:c.instructions+=1;goto B603fb1;
case 0x603fb4:goto L603fb4;
case 0x603fb9:c.instructions+=1;goto B603fb9;
case 0x603fbe:goto L603fbe;
case 0x603fc0:c.instructions+=1;goto B603fc0;
case 0x603fc6:goto L603fc6;
case 0x603fcc:c.instructions+=16;goto B603fcc;
case 0x603fcf:c.instructions+=15;goto B603fcf;
case 0x603fd2:c.instructions+=14;goto B603fd2;
case 0x603fd5:c.instructions+=13;goto B603fd5;
case 0x603fd8:c.instructions+=12;goto B603fd8;
case 0x603fda:c.instructions+=11;goto B603fda;
case 0x603fdb:c.instructions+=10;goto B603fdb;
case 0x603fdd:c.instructions+=9;goto B603fdd;
case 0x603fe1:c.instructions+=8;goto B603fe1;
case 0x603fe5:c.instructions+=7;goto B603fe5;
case 0x603fe6:c.instructions+=6;goto B603fe6;
case 0x603fea:c.instructions+=5;goto B603fea;
case 0x603fee:c.instructions+=4;goto B603fee;
case 0x603fef:c.instructions+=3;goto B603fef;
case 0x603ff3:c.instructions+=2;goto B603ff3;
case 0x603ff7:c.instructions+=1;goto B603ff7;
case 0x603ffc:goto L603ffc;
default:missing_instruction(c.pc);}
B603000:L603000:{c.instructions+=2;NFSU2_TR(0x603000);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B603002:{NFSU2_TR(0x603002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603008:L603008:{c.instructions+=3;NFSU2_TR(0x603008);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B603009:{NFSU2_TR(0x603009);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60300b:{NFSU2_TR(0x60300b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x602ff0u,602);}
}
B60300d:L60300d:{c.instructions+=5;NFSU2_TR(0x60300d);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B603012:{NFSU2_TR(0x603012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603018:{NFSU2_TR(0x603018);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B60301e:{NFSU2_TR(0x60301e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B603021:{NFSU2_TR(0x603021);
if(r1(R+518)){{goto L60357f;}}
}
B603027:L603027:{c.instructions+=5;NFSU2_TR(0x603027);
w4(R+12,u32(0x1ull));
}
B60302c:{NFSU2_TR(0x60302c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60302d:{NFSU2_TR(0x60302d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60302f:{NFSU2_TR(0x60302f);
__builtin_memmove((R+4),(R+24),4);
}
B603031:{NFSU2_TR(0x603031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603036ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B603036:L603036:{c.instructions+=1;NFSU2_TR(0x603036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60303bull));
TAIL_STATIC(0x446800u,446);
}
B60303b:L60303b:{c.instructions+=8;NFSU2_TR(0x60303b);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B603041:{NFSU2_TR(0x603041);
__builtin_memmove((R+0),gp(0x890080),4);
}
B603046:{NFSU2_TR(0x603046);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w4(U+4,u32(0x6022d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B603050:{NFSU2_TR(0x603050);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B603056:{NFSU2_TR(0x603056);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60305c:{NFSU2_TR(0x60305c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60305f:{NFSU2_TR(0x60305f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603060:{NFSU2_TR(0x603060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603065ull));
TAIL_STATIC(0x4022c0u,402);
}
B603065:L603065:{c.instructions+=1;NFSU2_TR(0x603065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603068:L603068:{c.instructions+=9;NFSU2_TR(0x603068);
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
B60306b:{NFSU2_TR(0x60306b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B603071:{NFSU2_TR(0x603071);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B603077:{NFSU2_TR(0x603077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603078:{NFSU2_TR(0x603078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603079:{NFSU2_TR(0x603079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B603083:{NFSU2_TR(0x603083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603084:{NFSU2_TR(0x603084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603085:{NFSU2_TR(0x603085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603088:L603088:{c.instructions+=3;NFSU2_TR(0x603088);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B60308d:{NFSU2_TR(0x60308d);
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
B60308f:{NFSU2_TR(0x60308f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603095:L603095:{c.instructions+=3;NFSU2_TR(0x603095);
__builtin_memmove((R+0),gp(0x890104),4);
}
B60309a:{NFSU2_TR(0x60309a);
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
B60309c:{NFSU2_TR(0x60309c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B6030a2:L6030a2:{c.instructions+=3;NFSU2_TR(0x6030a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6030a5:{NFSU2_TR(0x6030a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6030a7:{NFSU2_TR(0x6030a7);
if(r1(R+518)){{goto L6030d5;}}
}
B6030a9:L6030a9:{c.instructions+=2;NFSU2_TR(0x6030a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6030ae:{NFSU2_TR(0x6030ae);
if(r1(R+518)){{goto L6030d5;}}
}
B6030b0:L6030b0:{c.instructions+=9;NFSU2_TR(0x6030b0);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B6030b5:{NFSU2_TR(0x6030b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6030b8:{NFSU2_TR(0x6030b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6030bb:{NFSU2_TR(0x6030bb);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6030be:{NFSU2_TR(0x6030be);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6030c4:{NFSU2_TR(0x6030c4);
{u32 ea_=u32(u32(8017168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6030ca:{NFSU2_TR(0x6030ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6030cc:{NFSU2_TR(0x6030cc);
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
B6030cf:{NFSU2_TR(0x6030cf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60357f;}}
}
B6030d5:L6030d5:{c.instructions+=3;NFSU2_TR(0x6030d5);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6030db:{NFSU2_TR(0x6030db);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6030de:{NFSU2_TR(0x6030de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B6030e4:L6030e4:{c.instructions+=3;NFSU2_TR(0x6030e4);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B6030ea:{NFSU2_TR(0x6030ea);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6030ed:{NFSU2_TR(0x6030ed);
if(r1(R+518)){{goto L60357f;}}
}
B6030f3:L6030f3:{c.instructions+=5;NFSU2_TR(0x6030f3);
{u32 ea_=u32(u32(8628772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6030f9:{NFSU2_TR(0x6030f9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6030ff:{NFSU2_TR(0x6030ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B603101:{NFSU2_TR(0x603101);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B603104:{NFSU2_TR(0x603104);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60357f;}}
}
B60310a:L60310a:{c.instructions+=4;NFSU2_TR(0x60310a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60310d:{NFSU2_TR(0x60310d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B603113:{NFSU2_TR(0x603113);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603115:{NFSU2_TR(0x603115);
if(r1(R+518)){{goto L603126;}}
}
B603117:L603117:{c.instructions+=3;NFSU2_TR(0x603117);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603119:{NFSU2_TR(0x603119);
__builtin_memmove((R+4),(R+24),4);
}
B60311b:{NFSU2_TR(0x60311b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603120ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B603120:L603120:{c.instructions+=1;NFSU2_TR(0x603120);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B603126:L603126:{c.instructions+=3;NFSU2_TR(0x603126);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B603128:{NFSU2_TR(0x603128);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60312a:{NFSU2_TR(0x60312a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60314d;}}
}
B60312c:L60312c:{c.instructions+=1;NFSU2_TR(0x60312c);
__builtin_memmove((R+16),(R+16),4);
}
B603130:L603130:{c.instructions+=5;NFSU2_TR(0x603130);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B603137:{NFSU2_TR(0x603137);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60313a:{NFSU2_TR(0x60313a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B603140:{NFSU2_TR(0x603140);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B603142:{NFSU2_TR(0x603142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603148:L603148:{c.instructions+=3;NFSU2_TR(0x603148);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B603149:{NFSU2_TR(0x603149);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60314b:{NFSU2_TR(0x60314b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603130u);}goto L603130;}}
}
B60314d:L60314d:{c.instructions+=5;NFSU2_TR(0x60314d);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B603152:{NFSU2_TR(0x603152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603158:{NFSU2_TR(0x603158);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B60315e:{NFSU2_TR(0x60315e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B603161:{NFSU2_TR(0x603161);
if(r1(R+518)){{goto L60357f;}}
}
B603167:L603167:{c.instructions+=3;NFSU2_TR(0x603167);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60316d:{NFSU2_TR(0x60316d);
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
B60316f:{NFSU2_TR(0x60316f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603175:L603175:{c.instructions+=3;NFSU2_TR(0x603175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B603178:{NFSU2_TR(0x603178);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603179:{NFSU2_TR(0x603179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60317eull));
TAIL_STATIC(0x455bd0u,455);
}
B60317e:L60317e:{c.instructions+=4;NFSU2_TR(0x60317e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603181:{NFSU2_TR(0x603181);
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
B603183:{NFSU2_TR(0x603183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603189:{NFSU2_TR(0x603189);
if(r1(R+518)){{goto L60357f;}}
}
B60318f:L60318f:{c.instructions+=5;NFSU2_TR(0x60318f);
w4(R+12,u32(0x1ull));
}
B603194:{NFSU2_TR(0x603194);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603195:{NFSU2_TR(0x603195);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603197:{NFSU2_TR(0x603197);
__builtin_memmove((R+4),(R+24),4);
}
B603199:{NFSU2_TR(0x603199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60319eull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B60319e:L60319e:{c.instructions+=3;NFSU2_TR(0x60319e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6031a4:{NFSU2_TR(0x6031a4);
__builtin_memmove((R+4),(R+28),4);
}
B6031a6:{NFSU2_TR(0x6031a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6031abull));
TAIL_STATIC(0x446970u,446);
}
B6031ab:L6031ab:{c.instructions+=2;NFSU2_TR(0x6031ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6031ad:{NFSU2_TR(0x6031ad);
if(r1(R+518)){{goto L6031bd;}}
}
B6031af:L6031af:{c.instructions+=2;NFSU2_TR(0x6031af);
__builtin_memmove((R+4),(R+24),4);
}
B6031b1:{NFSU2_TR(0x6031b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6031b6ull));
TAIL_STATIC(0x5ffdd0u,5ff);
}
B6031b6:L6031b6:{c.instructions+=5;NFSU2_TR(0x6031b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6031b7:{NFSU2_TR(0x6031b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6031b8:{NFSU2_TR(0x6031b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6031b9:{NFSU2_TR(0x6031b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6031ba:{NFSU2_TR(0x6031ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6031bd:L6031bd:{c.instructions+=2;NFSU2_TR(0x6031bd);
__builtin_memmove((R+4),(R+28),4);
}
B6031bf:{NFSU2_TR(0x6031bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6031c4ull));
TAIL_STATIC(0x446820u,446);
}
B6031c4:L6031c4:{c.instructions+=8;NFSU2_TR(0x6031c4);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6031ca:{NFSU2_TR(0x6031ca);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6031cf:{NFSU2_TR(0x6031cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w4(U+4,u32(0x6022d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6031d9:{NFSU2_TR(0x6031d9);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6031df:{NFSU2_TR(0x6031df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6031e5:{NFSU2_TR(0x6031e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6031e8:{NFSU2_TR(0x6031e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6031e9:{NFSU2_TR(0x6031e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6031eeull));
TAIL_STATIC(0x4022c0u,402);
}
B6031ee:L6031ee:{c.instructions+=2;NFSU2_TR(0x6031ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6031f5:{NFSU2_TR(0x6031f5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603068u);}goto L603068;}
}
B6031fa:L6031fa:{c.instructions+=3;NFSU2_TR(0x6031fa);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6031ff:{NFSU2_TR(0x6031ff);
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
B603201:{NFSU2_TR(0x603201);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603207:L603207:{c.instructions+=3;NFSU2_TR(0x603207);
__builtin_memmove((R+0),gp(0x890104),4);
}
B60320c:{NFSU2_TR(0x60320c);
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
B60320e:{NFSU2_TR(0x60320e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603214:L603214:{c.instructions+=3;NFSU2_TR(0x603214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603217:{NFSU2_TR(0x603217);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603219:{NFSU2_TR(0x603219);
if(r1(R+518)){{goto L603247;}}
}
B60321b:L60321b:{c.instructions+=2;NFSU2_TR(0x60321b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603220:{NFSU2_TR(0x603220);
if(r1(R+518)){{goto L603247;}}
}
B603222:L603222:{c.instructions+=9;NFSU2_TR(0x603222);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B603228:{NFSU2_TR(0x603228);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B60322a:{NFSU2_TR(0x60322a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60322d:{NFSU2_TR(0x60322d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B603230:{NFSU2_TR(0x603230);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B603236:{NFSU2_TR(0x603236);
{u32 ea_=u32(u32(8017168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60323c:{NFSU2_TR(0x60323c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60323e:{NFSU2_TR(0x60323e);
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
B603241:{NFSU2_TR(0x603241);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60357f;}}
}
B603247:L603247:{c.instructions+=3;NFSU2_TR(0x603247);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60324d:{NFSU2_TR(0x60324d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B603250:{NFSU2_TR(0x603250);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603256:L603256:{c.instructions+=3;NFSU2_TR(0x603256);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B60325c:{NFSU2_TR(0x60325c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B60325f:{NFSU2_TR(0x60325f);
if(r1(R+518)){{goto L60357f;}}
}
B603265:L603265:{c.instructions+=5;NFSU2_TR(0x603265);
{u32 ea_=u32(u32(8628772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60326b:{NFSU2_TR(0x60326b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B603271:{NFSU2_TR(0x603271);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B603273:{NFSU2_TR(0x603273);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B603276:{NFSU2_TR(0x603276);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60357f;}}
}
B60327c:L60327c:{c.instructions+=4;NFSU2_TR(0x60327c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60327f:{NFSU2_TR(0x60327f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B603285:{NFSU2_TR(0x603285);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603287:{NFSU2_TR(0x603287);
if(r1(R+518)){{goto L603298;}}
}
B603289:L603289:{c.instructions+=3;NFSU2_TR(0x603289);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60328b:{NFSU2_TR(0x60328b);
__builtin_memmove((R+4),(R+24),4);
}
B60328d:{NFSU2_TR(0x60328d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603292ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B603292:L603292:{c.instructions+=1;NFSU2_TR(0x603292);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B603298:L603298:{c.instructions+=3;NFSU2_TR(0x603298);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60329a:{NFSU2_TR(0x60329a);
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
B60329c:{NFSU2_TR(0x60329c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6032bd;}}
}
B60329e:L60329e:{c.instructions+=1;NFSU2_TR(0x60329e);
__builtin_memmove((R+28),(R+28),4);
}
B6032a0:L6032a0:{c.instructions+=5;NFSU2_TR(0x6032a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6032a7:{NFSU2_TR(0x6032a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6032aa:{NFSU2_TR(0x6032aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6032b0:{NFSU2_TR(0x6032b0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6032b2:{NFSU2_TR(0x6032b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B6032b8:L6032b8:{c.instructions+=3;NFSU2_TR(0x6032b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6032b9:{NFSU2_TR(0x6032b9);
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
B6032bb:{NFSU2_TR(0x6032bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6032a0u);}goto L6032a0;}}
}
B6032bd:L6032bd:{c.instructions+=10;NFSU2_TR(0x6032bd);
__builtin_memmove((R+4),gp(0x7a54f8),4);
}
B6032c3:{NFSU2_TR(0x6032c3);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B6032c8:{NFSU2_TR(0x6032c8);
__builtin_memmove((R+8),gp(0x7a5500),4);
}
B6032ce:{NFSU2_TR(0x6032ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6032cf:{NFSU2_TR(0x6032cf);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6032d4:{NFSU2_TR(0x6032d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6032d5:{NFSU2_TR(0x6032d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6032db:{NFSU2_TR(0x6032db);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6032e1:{NFSU2_TR(0x6032e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6032e2:{NFSU2_TR(0x6032e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6032e7ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B6032e7:L6032e7:{c.instructions+=3;NFSU2_TR(0x6032e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6032ea:{NFSU2_TR(0x6032ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6032eb:{NFSU2_TR(0x6032eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6032f0ull));
TAIL_STATIC(0x4022c0u,402);
}
B6032f0:L6032f0:{c.instructions+=3;NFSU2_TR(0x6032f0);
w4(R+12,u32(0x1ull));
}
B6032f5:{NFSU2_TR(0x6032f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6032fc:{NFSU2_TR(0x6032fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603068u);}goto L603068;}
}
B603301:L603301:{c.instructions+=7;NFSU2_TR(0x603301);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B603307:{NFSU2_TR(0x603307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603308:{NFSU2_TR(0x603308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603309:{NFSU2_TR(0x603309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60330f:{NFSU2_TR(0x60330f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603310:{NFSU2_TR(0x603310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603311:{NFSU2_TR(0x603311);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603314:L603314:{c.instructions+=7;NFSU2_TR(0x603314);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B60331a:{NFSU2_TR(0x60331a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60331b:{NFSU2_TR(0x60331b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60331c:{NFSU2_TR(0x60331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603322:{NFSU2_TR(0x603322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603323:{NFSU2_TR(0x603323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603324:{NFSU2_TR(0x603324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603327:L603327:{c.instructions+=3;NFSU2_TR(0x603327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60332d:{NFSU2_TR(0x60332d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603330:{NFSU2_TR(0x603330);
if(r1(R+518)){{goto L603360;}}
}
B603332:L603332:{c.instructions+=2;NFSU2_TR(0x603332);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603335:{NFSU2_TR(0x603335);
if(r1(R+518)){{goto L60334f;}}
}
B603337:L603337:{c.instructions+=2;NFSU2_TR(0x603337);
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
B603338:{NFSU2_TR(0x603338);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B60333e:L60333e:{c.instructions+=6;NFSU2_TR(0x60333e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60333f:{NFSU2_TR(0x60333f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603340:{NFSU2_TR(0x603340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60334a:{NFSU2_TR(0x60334a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60334b:{NFSU2_TR(0x60334b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60334c:{NFSU2_TR(0x60334c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60334f:L60334f:{c.instructions+=6;NFSU2_TR(0x60334f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603350:{NFSU2_TR(0x603350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603351:{NFSU2_TR(0x603351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60335b:{NFSU2_TR(0x60335b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60335c:{NFSU2_TR(0x60335c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60335d:{NFSU2_TR(0x60335d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603360:L603360:{c.instructions+=6;NFSU2_TR(0x603360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603361:{NFSU2_TR(0x603361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603362:{NFSU2_TR(0x603362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60336c:{NFSU2_TR(0x60336c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60336d:{NFSU2_TR(0x60336d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60336e:{NFSU2_TR(0x60336e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603371:L603371:{c.instructions+=7;NFSU2_TR(0x603371);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603375:{NFSU2_TR(0x603375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603378:{NFSU2_TR(0x603378);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603379:{NFSU2_TR(0x603379);
w4(R+4,u32(0x89cf24ull));
}
B60337e:{NFSU2_TR(0x60337e);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B603381:{NFSU2_TR(0x603381);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B603384:{NFSU2_TR(0x603384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603389ull));
TAIL_STATIC(0x576790u,576);
}
B603389:L603389:{c.instructions+=7;NFSU2_TR(0x603389);
{u32 ea_=u32(u32(8017072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60338f:{NFSU2_TR(0x60338f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603390:{NFSU2_TR(0x603390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603391:{NFSU2_TR(0x603391);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B603397:{NFSU2_TR(0x603397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603398:{NFSU2_TR(0x603398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603399:{NFSU2_TR(0x603399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60339c:L60339c:{c.instructions+=7;NFSU2_TR(0x60339c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6033a0:{NFSU2_TR(0x6033a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6033a3:{NFSU2_TR(0x6033a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6033a4:{NFSU2_TR(0x6033a4);
w4(R+4,u32(0x89cf24ull));
}
B6033a9:{NFSU2_TR(0x6033a9);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6033ac:{NFSU2_TR(0x6033ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6033af:{NFSU2_TR(0x6033af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6033b4ull));
TAIL_STATIC(0x576790u,576);
}
B6033b4:L6033b4:{c.instructions+=7;NFSU2_TR(0x6033b4);
{u32 ea_=u32(u32(8017076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6033ba:{NFSU2_TR(0x6033ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6033bb:{NFSU2_TR(0x6033bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6033bc:{NFSU2_TR(0x6033bc);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6033c2:{NFSU2_TR(0x6033c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6033c3:{NFSU2_TR(0x6033c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6033c4:{NFSU2_TR(0x6033c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6033c7:L6033c7:{c.instructions+=2;NFSU2_TR(0x6033c7);
w4(R+4,u32(0x85ef50ull));
}
B6033cc:{NFSU2_TR(0x6033cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6033d1ull));
TAIL_STATIC(0x5012c0u,501);
}
B6033d1:L6033d1:{c.instructions+=2;NFSU2_TR(0x6033d1);
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
B6033d3:{NFSU2_TR(0x6033d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B6033d9:L6033d9:{c.instructions+=7;NFSU2_TR(0x6033d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6033dc:{NFSU2_TR(0x6033dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6033de:{NFSU2_TR(0x6033de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6033e1:{NFSU2_TR(0x6033e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6033e7:{NFSU2_TR(0x6033e7);
__builtin_memmove((R+0),gp(0x890084),4);
}
B6033ec:{NFSU2_TR(0x6033ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6033ee:{NFSU2_TR(0x6033ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6033f8;}}
}
B6033f0:L6033f0:{c.instructions+=2;NFSU2_TR(0x6033f0);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B6033f5:{NFSU2_TR(0x6033f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6033f8:L6033f8:{c.instructions+=4;NFSU2_TR(0x6033f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6033fe:{NFSU2_TR(0x6033fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603400:{NFSU2_TR(0x603400);
w4(R+12,u32(0x1ull));
}
B603405:{NFSU2_TR(0x603405);
if(r1(R+518)){{goto L60340c;}}
}
B603407:L603407:{c.instructions+=2;NFSU2_TR(0x603407);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60340a:{NFSU2_TR(0x60340a);
if(r1(R+518)){{goto L603423;}}
}
B60340c:L60340c:{c.instructions+=3;NFSU2_TR(0x60340c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603412:{NFSU2_TR(0x603412);
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
B603414:{NFSU2_TR(0x603414);
if(r1(R+518)){{goto L60357f;}}
}
B60341a:L60341a:{c.instructions+=2;NFSU2_TR(0x60341a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
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
B60341d:{NFSU2_TR(0x60341d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603423:L603423:{c.instructions+=5;NFSU2_TR(0x603423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B603425:{NFSU2_TR(0x603425);
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
B603427:{NFSU2_TR(0x603427);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60342d:{NFSU2_TR(0x60342d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60342e:{NFSU2_TR(0x60342e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603431ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603431:L603431:{c.instructions+=5;NFSU2_TR(0x603431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603432:{NFSU2_TR(0x603432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603433:{NFSU2_TR(0x603433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603434:{NFSU2_TR(0x603434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603435:{NFSU2_TR(0x603435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603438:L603438:{c.instructions+=4;NFSU2_TR(0x603438);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60343b:{NFSU2_TR(0x60343b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60343d:{NFSU2_TR(0x60343d);
__builtin_memmove((R+4),(R+24),4);
}
B60343f:{NFSU2_TR(0x60343f);
if(r1(R+518)){{goto L603452;}}
}
B603441:L603441:{c.instructions+=1;NFSU2_TR(0x603441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603446ull));
TAIL_STATIC(0x5eb590u,5eb);
}
B603446:L603446:{c.instructions+=1;NFSU2_TR(0x603446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60344bull));
TAIL_STATIC(0x4022c0u,402);
}
B60344b:L60344b:{c.instructions+=5;NFSU2_TR(0x60344b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60344c:{NFSU2_TR(0x60344c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60344d:{NFSU2_TR(0x60344d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60344e:{NFSU2_TR(0x60344e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60344f:{NFSU2_TR(0x60344f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603452:L603452:{c.instructions+=1;NFSU2_TR(0x603452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603457ull));
TAIL_STATIC(0x5eb5b0u,5eb);
}
B603457:L603457:{c.instructions+=5;NFSU2_TR(0x603457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603458:{NFSU2_TR(0x603458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603459:{NFSU2_TR(0x603459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60345a:{NFSU2_TR(0x60345a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60345b:{NFSU2_TR(0x60345b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60345e:L60345e:{c.instructions+=2;NFSU2_TR(0x60345e);
w4(R+4,u32(0x85ef50ull));
}
B603463:{NFSU2_TR(0x603463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603468ull));
TAIL_STATIC(0x5012c0u,501);
}
B603468:L603468:{c.instructions+=2;NFSU2_TR(0x603468);
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
B60346a:{NFSU2_TR(0x60346a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603470:L603470:{c.instructions+=5;NFSU2_TR(0x603470);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B603473:{NFSU2_TR(0x603473);
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
B603475:{NFSU2_TR(0x603475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603478:{NFSU2_TR(0x603478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60347b:{NFSU2_TR(0x60347b);
if(r1(R+518)){{goto L60357f;}}
}
B603481:L603481:{c.instructions+=2;NFSU2_TR(0x603481);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B603485:{NFSU2_TR(0x603485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603499;}}
}
B603487:L603487:{c.instructions+=2;NFSU2_TR(0x603487);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603489:{NFSU2_TR(0x603489);
if(r1(R+518)){{goto L603499;}}
}
B60348b:L60348b:{c.instructions+=3;NFSU2_TR(0x60348b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B603491:{NFSU2_TR(0x603491);
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
B603493:{NFSU2_TR(0x603493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60357f;}}
}
B603499:L603499:{c.instructions+=2;NFSU2_TR(0x603499);
__builtin_memmove((R+4),(R+24),4);
}
B60349b:{NFSU2_TR(0x60349b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6034a0ull));
TAIL_STATIC(0x5f3f00u,5f3);
}
B6034a0:L6034a0:{c.instructions+=2;NFSU2_TR(0x6034a0);
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
B6034a2:{NFSU2_TR(0x6034a2);
if(r1(R+518)){{goto L60357f;}}
}
B6034a8:L6034a8:{c.instructions+=2;NFSU2_TR(0x6034a8);
__builtin_memmove((R+4),(R+24),4);
}
B6034aa:{NFSU2_TR(0x6034aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6034afull));
TAIL_STATIC(0x6009a0u,600);
}
B6034af:L6034af:{c.instructions+=5;NFSU2_TR(0x6034af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6034b0:{NFSU2_TR(0x6034b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6034b1:{NFSU2_TR(0x6034b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6034b2:{NFSU2_TR(0x6034b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6034b3:{NFSU2_TR(0x6034b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6034b6:L6034b6:{c.instructions+=4;NFSU2_TR(0x6034b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6034b9:{NFSU2_TR(0x6034b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6034bb:{NFSU2_TR(0x6034bb);
__builtin_memmove((R+4),(R+24),4);
}
B6034bd:{NFSU2_TR(0x6034bd);
if(r1(R+518)){{goto L603562;}}
}
B6034c3:L6034c3:{c.instructions+=1;NFSU2_TR(0x6034c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6034c8ull));
TAIL_STATIC(0x5eb560u,5eb);
}
B6034c8:L6034c8:{c.instructions+=2;NFSU2_TR(0x6034c8);
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
B6034ca:{NFSU2_TR(0x6034ca);
if(r1(R+518)){{goto L60357f;}}
}
B6034d0:L6034d0:{c.instructions+=3;NFSU2_TR(0x6034d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6034d3:{NFSU2_TR(0x6034d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6034d6:{NFSU2_TR(0x6034d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6034dbull));
TAIL_STATIC(0x59faf0u,59f);
}
B6034db:L6034db:{c.instructions+=2;NFSU2_TR(0x6034db);
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
B6034dd:{NFSU2_TR(0x6034dd);
if(r1(R+518)){{goto L60357f;}}
}
B6034e3:L6034e3:{c.instructions+=2;NFSU2_TR(0x6034e3);
w4(R+4,u32(0x89cf48ull));
}
B6034e8:{NFSU2_TR(0x6034e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6034edull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B6034ed:L6034ed:{c.instructions+=2;NFSU2_TR(0x6034ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6034ef:{NFSU2_TR(0x6034ef);
if(r1(R+518)){{goto L6034fc;}}
}
B6034f1:L6034f1:{c.instructions+=3;NFSU2_TR(0x6034f1);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6034f7:{NFSU2_TR(0x6034f7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6034fa:{NFSU2_TR(0x6034fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603524;}}
}
B6034fc:L6034fc:{c.instructions+=2;NFSU2_TR(0x6034fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6034ff:{NFSU2_TR(0x6034ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603504ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B603504:L603504:{c.instructions+=2;NFSU2_TR(0x603504);
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
B603506:{NFSU2_TR(0x603506);
if(r1(R+518)){{goto L603524;}}
}
B603508:L603508:{c.instructions+=7;NFSU2_TR(0x603508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60350b:{NFSU2_TR(0x60350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60350e:{NFSU2_TR(0x60350e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603514:{NFSU2_TR(0x603514);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603516:{NFSU2_TR(0x603516);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60351b:{NFSU2_TR(0x60351b);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60351d:{NFSU2_TR(0x60351d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603522ull));
TAIL_STATIC(0x56ed10u,56e);
}
B603522:L603522:{c.instructions+=1;NFSU2_TR(0x603522);
{goto L603537;}
}
B603524:L603524:{c.instructions+=3;NFSU2_TR(0x603524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603527:{NFSU2_TR(0x603527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603528:{NFSU2_TR(0x603528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60352dull));
TAIL_STATIC(0x4022c0u,402);
}
B60352d:L60352d:{c.instructions+=2;NFSU2_TR(0x60352d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603530:{NFSU2_TR(0x603530);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603537:L603537:{c.instructions+=5;NFSU2_TR(0x603537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60353a:{NFSU2_TR(0x60353a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B60353d:{NFSU2_TR(0x60353d);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B603544:{NFSU2_TR(0x603544);
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
B603546:{NFSU2_TR(0x603546);
if(r1(R+518)){{goto L60357f;}}
}
B603548:L603548:{c.instructions+=5;NFSU2_TR(0x603548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60354b:{NFSU2_TR(0x60354b);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603550:{NFSU2_TR(0x603550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603551:{NFSU2_TR(0x603551);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603553:{NFSU2_TR(0x603553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603558ull));
TAIL_STATIC(0x5727b0u,572);
}
B603558:L603558:{c.instructions+=6;NFSU2_TR(0x603558);
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
B60355b:{NFSU2_TR(0x60355b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60355c:{NFSU2_TR(0x60355c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60355d:{NFSU2_TR(0x60355d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60355e:{NFSU2_TR(0x60355e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60355f:{NFSU2_TR(0x60355f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603562:L603562:{c.instructions+=1;NFSU2_TR(0x603562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603567ull));
TAIL_STATIC(0x5eb530u,5eb);
}
B603567:L603567:{c.instructions+=2;NFSU2_TR(0x603567);
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
B603569:{NFSU2_TR(0x603569);
if(r1(R+518)){{goto L60357f;}}
}
B60356b:L60356b:{c.instructions+=3;NFSU2_TR(0x60356b);
__builtin_memmove((R+0),gp(0x7fbedc),4);
}
B603570:{NFSU2_TR(0x603570);
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
B603572:{NFSU2_TR(0x603572);
if(r1(R+518)){{goto L60357f;}}
}
B603574:L603574:{c.instructions+=3;NFSU2_TR(0x603574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603577:{NFSU2_TR(0x603577);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B60357a:{NFSU2_TR(0x60357a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60357full));
TAIL_STATIC(0x592500u,592);
}
B60357f:L60357f:{c.instructions+=5;NFSU2_TR(0x60357f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603580:{NFSU2_TR(0x603580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603581:{NFSU2_TR(0x603581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603582:{NFSU2_TR(0x603582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603583:{NFSU2_TR(0x603583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603630:L603630:{c.instructions+=6;NFSU2_TR(0x603630);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603631:{NFSU2_TR(0x603631);
__builtin_memmove((R+24),(R+4),4);
}
B603633:{NFSU2_TR(0x603633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B603635:{NFSU2_TR(0x603635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603636:{NFSU2_TR(0x603636);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603638:{NFSU2_TR(0x603638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60363dull));
TAIL_STATIC(0x601020u,601);
}
B60363d:L60363d:{c.instructions+=5;NFSU2_TR(0x60363d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603641:{NFSU2_TR(0x603641);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603642:{NFSU2_TR(0x603642);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603644:{NFSU2_TR(0x603644);
__builtin_memmove((R+4),(R+24),4);
}
B603646:{NFSU2_TR(0x603646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60364bull));
TAIL_STATIC(0x601020u,601);
}
B60364b:L60364b:{c.instructions+=4;NFSU2_TR(0x60364b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60364d:{NFSU2_TR(0x60364d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60364f:{NFSU2_TR(0x60364f);
__builtin_memmove((R+4),(R+24),4);
}
B603651:{NFSU2_TR(0x603651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603656ull));
TAIL_STATIC(0x601020u,601);
}
B603656:L603656:{c.instructions+=2;NFSU2_TR(0x603656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603657:{NFSU2_TR(0x603657);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603660:L603660:{c.instructions+=14;NFSU2_TR(0x603660);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603662:{NFSU2_TR(0x603662);
u8 U[4];
w4(U+0,u32(0x779efbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603667:{NFSU2_TR(0x603667);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60366d:{NFSU2_TR(0x60366d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60366e:{NFSU2_TR(0x60366e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603675:{NFSU2_TR(0x603675);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603676:{NFSU2_TR(0x603676);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603677:{NFSU2_TR(0x603677);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603678:{NFSU2_TR(0x603678);
__builtin_memmove((R+28),(R+4),4);
}
B60367a:{NFSU2_TR(0x60367a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60367e:{NFSU2_TR(0x60367e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B603680:{NFSU2_TR(0x603680);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603682:{NFSU2_TR(0x603682);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60368a:{NFSU2_TR(0x60368a);
if(r1(R+518)){{goto L60374e;}}
}
B603690:L603690:{c.instructions+=3;NFSU2_TR(0x603690);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B603695:{NFSU2_TR(0x603695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603696:{NFSU2_TR(0x603696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60369bull));
TAIL_STATIC(0x440e50u,440);
}
B60369b:L60369b:{c.instructions+=3;NFSU2_TR(0x60369b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60369e:{NFSU2_TR(0x60369e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6036a0:{NFSU2_TR(0x6036a0);
if(r1(R+518)){{goto L6036ae;}}
}
B6036a2:L6036a2:{c.instructions+=3;NFSU2_TR(0x6036a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6036a9:{NFSU2_TR(0x6036a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6036ac:{NFSU2_TR(0x6036ac);
{goto L6036b0;}
}
B6036ae:L6036ae:{c.instructions+=1;NFSU2_TR(0x6036ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6036b0:L6036b0:{c.instructions+=9;NFSU2_TR(0x6036b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6036b3:{NFSU2_TR(0x6036b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6036b6:{NFSU2_TR(0x6036b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6036b8:{NFSU2_TR(0x6036b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6036bb:{NFSU2_TR(0x6036bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6036be:{NFSU2_TR(0x6036be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6036c0:{NFSU2_TR(0x6036c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6036c3:{NFSU2_TR(0x6036c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6036c5:{NFSU2_TR(0x6036c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6036ce;}}
}
B6036c7:L6036c7:{c.instructions+=2;NFSU2_TR(0x6036c7);
__builtin_memmove((R+4),(R+28),4);
}
B6036c9:{NFSU2_TR(0x6036c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6036ceull));
TAIL_STATIC(0x600fa0u,600);
}
B6036ce:L6036ce:{c.instructions+=3;NFSU2_TR(0x6036ce);
__builtin_memmove((R+4),gp(0x8900dc),4);
}
B6036d4:{NFSU2_TR(0x6036d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6036d5:{NFSU2_TR(0x6036d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6036daull));
TAIL_STATIC(0x440e50u,440);
}
B6036da:L6036da:{c.instructions+=3;NFSU2_TR(0x6036da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6036dd:{NFSU2_TR(0x6036dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6036df:{NFSU2_TR(0x6036df);
if(r1(R+518)){{goto L6036f1;}}
}
B6036e1:L6036e1:{c.instructions+=3;NFSU2_TR(0x6036e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6036e8:{NFSU2_TR(0x6036e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6036ef:{NFSU2_TR(0x6036ef);
{goto L6036f3;}
}
B6036f1:L6036f1:{c.instructions+=1;NFSU2_TR(0x6036f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6036f3:L6036f3:{c.instructions+=8;NFSU2_TR(0x6036f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6036f6:{NFSU2_TR(0x6036f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6036f8:{NFSU2_TR(0x6036f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6036fb:{NFSU2_TR(0x6036fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6036fe:{NFSU2_TR(0x6036fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B603700:{NFSU2_TR(0x603700);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603703:{NFSU2_TR(0x603703);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603705:{NFSU2_TR(0x603705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60370e;}}
}
B603707:L603707:{c.instructions+=2;NFSU2_TR(0x603707);
__builtin_memmove((R+4),(R+28),4);
}
B603709:{NFSU2_TR(0x603709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60370eull));
TAIL_STATIC(0x600fa0u,600);
}
B60370e:L60370e:{c.instructions+=3;NFSU2_TR(0x60370e);
__builtin_memmove((R+8),gp(0x8900dc),4);
}
B603714:{NFSU2_TR(0x603714);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603715:{NFSU2_TR(0x603715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60371aull));
TAIL_STATIC(0x440e50u,440);
}
B60371a:L60371a:{c.instructions+=3;NFSU2_TR(0x60371a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60371d:{NFSU2_TR(0x60371d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60371f:{NFSU2_TR(0x60371f);
if(r1(R+518)){{goto L603731;}}
}
B603721:L603721:{c.instructions+=3;NFSU2_TR(0x603721);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B603728:{NFSU2_TR(0x603728);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60372f:{NFSU2_TR(0x60372f);
{goto L603733;}
}
B603731:L603731:{c.instructions+=1;NFSU2_TR(0x603731);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B603733:L603733:{c.instructions+=8;NFSU2_TR(0x603733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603736:{NFSU2_TR(0x603736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B603738:{NFSU2_TR(0x603738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60373b:{NFSU2_TR(0x60373b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60373e:{NFSU2_TR(0x60373e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B603740:{NFSU2_TR(0x603740);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603743:{NFSU2_TR(0x603743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603745:{NFSU2_TR(0x603745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60374e;}}
}
B603747:L603747:{c.instructions+=2;NFSU2_TR(0x603747);
__builtin_memmove((R+4),(R+28),4);
}
B603749:{NFSU2_TR(0x603749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60374eull));
TAIL_STATIC(0x600fa0u,600);
}
B60374e:L60374e:{c.instructions+=3;NFSU2_TR(0x60374e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603751:{NFSU2_TR(0x603751);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603753:{NFSU2_TR(0x603753);
if(r1(R+518)){{goto L60375e;}}
}
B603755:L603755:{c.instructions+=2;NFSU2_TR(0x603755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603756:{NFSU2_TR(0x603756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60375bull));
TAIL_STATIC(0x575630u,575);
}
B60375b:L60375b:{c.instructions+=1;NFSU2_TR(0x60375b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60375e:L60375e:{c.instructions+=3;NFSU2_TR(0x60375e);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B603763:{NFSU2_TR(0x603763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603764:{NFSU2_TR(0x603764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603769ull));
TAIL_STATIC(0x440e40u,440);
}
B603769:L603769:{c.instructions+=4;NFSU2_TR(0x603769);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60376c:{NFSU2_TR(0x60376c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B60376f:{NFSU2_TR(0x60376f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B603777:{NFSU2_TR(0x603777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60377cull));
TAIL_STATIC(0x5ff3f0u,5ff);
}
B60377c:L60377c:{c.instructions+=6;NFSU2_TR(0x60377c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603780:{NFSU2_TR(0x603780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603781:{NFSU2_TR(0x603781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603782:{NFSU2_TR(0x603782);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603789:{NFSU2_TR(0x603789);
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
B60378c:{NFSU2_TR(0x60378c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603790:L603790:{c.instructions+=6;NFSU2_TR(0x603790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603791:{NFSU2_TR(0x603791);
__builtin_memmove((R+24),(R+4),4);
}
B603793:{NFSU2_TR(0x603793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B603795:{NFSU2_TR(0x603795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603796:{NFSU2_TR(0x603796);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603798:{NFSU2_TR(0x603798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60379dull));
TAIL_STATIC(0x601020u,601);
}
B60379d:L60379d:{c.instructions+=4;NFSU2_TR(0x60379d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60379f:{NFSU2_TR(0x60379f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037a1:{NFSU2_TR(0x6037a1);
__builtin_memmove((R+4),(R+24),4);
}
B6037a3:{NFSU2_TR(0x6037a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6037a8ull));
TAIL_STATIC(0x601020u,601);
}
B6037a8:L6037a8:{c.instructions+=4;NFSU2_TR(0x6037a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037aa:{NFSU2_TR(0x6037aa);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037ac:{NFSU2_TR(0x6037ac);
__builtin_memmove((R+4),(R+24),4);
}
B6037ae:{NFSU2_TR(0x6037ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6037b3ull));
TAIL_STATIC(0x601020u,601);
}
B6037b3:L6037b3:{c.instructions+=4;NFSU2_TR(0x6037b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037b5:{NFSU2_TR(0x6037b5);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037b7:{NFSU2_TR(0x6037b7);
__builtin_memmove((R+4),(R+24),4);
}
B6037b9:{NFSU2_TR(0x6037b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6037beull));
TAIL_STATIC(0x601020u,601);
}
B6037be:L6037be:{c.instructions+=2;NFSU2_TR(0x6037be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6037bf:{NFSU2_TR(0x6037bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6037c0:L6037c0:{c.instructions+=8;NFSU2_TR(0x6037c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037c1:{NFSU2_TR(0x6037c1);
__builtin_memmove((R+20),(R+16),4);
}
B6037c3:{NFSU2_TR(0x6037c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037c4:{NFSU2_TR(0x6037c4);
__builtin_memmove((R+24),(R+4),4);
}
B6037c6:{NFSU2_TR(0x6037c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6037c9:{NFSU2_TR(0x6037c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6037cc:{NFSU2_TR(0x6037cc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6037cf:{NFSU2_TR(0x6037cf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60389b;}}
}
B6037d5:L6037d5:{c.instructions+=2;NFSU2_TR(0x6037d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6038c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6037dc:{NFSU2_TR(0x6037dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6038a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6037e3:L6037e3:{c.instructions+=4;NFSU2_TR(0x6037e3);
w4(R+0,u32(0x1ull));
}
B6037e8:{NFSU2_TR(0x6037e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6037e9:{NFSU2_TR(0x6037e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6037ea:{NFSU2_TR(0x6037ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6037ed:L6037ed:{c.instructions+=3;NFSU2_TR(0x6037ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037ef:{NFSU2_TR(0x6037ef);
__builtin_memmove((R+4),(R+24),4);
}
B6037f1:{NFSU2_TR(0x6037f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6037f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B6037f6:L6037f6:{c.instructions+=4;NFSU2_TR(0x6037f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037f8:{NFSU2_TR(0x6037f8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6037fa:{NFSU2_TR(0x6037fa);
__builtin_memmove((R+4),(R+24),4);
}
B6037fc:{NFSU2_TR(0x6037fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603801ull));
TAIL_STATIC(0x601020u,601);
}
B603801:L603801:{c.instructions+=4;NFSU2_TR(0x603801);
w4(R+0,u32(0x1ull));
}
B603806:{NFSU2_TR(0x603806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603807:{NFSU2_TR(0x603807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603808:{NFSU2_TR(0x603808);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60380b:L60380b:{c.instructions+=3;NFSU2_TR(0x60380b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60380d:{NFSU2_TR(0x60380d);
__builtin_memmove((R+4),(R+24),4);
}
B60380f:{NFSU2_TR(0x60380f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603814ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603814:L603814:{c.instructions+=4;NFSU2_TR(0x603814);
w4(R+0,u32(0x1ull));
}
B603819:{NFSU2_TR(0x603819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60381a:{NFSU2_TR(0x60381a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60381b:{NFSU2_TR(0x60381b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60381e:L60381e:{c.instructions+=3;NFSU2_TR(0x60381e);
__builtin_memmove(gp(0x7faa08),(R+4),4);
}
B603824:{NFSU2_TR(0x603824);
w4(R+4,u32(0x865480ull));
}
B603829:{NFSU2_TR(0x603829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60382eull));
TAIL_STATIC(0x5819f0u,581);
}
B60382e:L60382e:{c.instructions+=4;NFSU2_TR(0x60382e);
w4(R+0,u32(0x1ull));
}
B603833:{NFSU2_TR(0x603833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603834:{NFSU2_TR(0x603834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603835:{NFSU2_TR(0x603835);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603838:L603838:{c.instructions+=3;NFSU2_TR(0x603838);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60383a:{NFSU2_TR(0x60383a);
w4(R+4,u32(0x85ad40ull));
}
B60383f:{NFSU2_TR(0x60383f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603844ull));
TAIL_STATIC(0x532830u,532);
}
B603844:L603844:{c.instructions+=2;NFSU2_TR(0x603844);
w4(R+4,u32(0x83ad90ull));
}
B603849:{NFSU2_TR(0x603849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60384eull));
TAIL_STATIC(0x516480u,516);
}
B60384e:L60384e:{c.instructions+=2;NFSU2_TR(0x60384e);
w4(R+4,u32(0x865480ull));
}
B603853:{NFSU2_TR(0x603853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603858ull));
TAIL_STATIC(0x5819c0u,581);
}
B603858:L603858:{c.instructions+=4;NFSU2_TR(0x603858);
w4(R+0,u32(0x1ull));
}
B60385d:{NFSU2_TR(0x60385d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60385e:{NFSU2_TR(0x60385e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60385f:{NFSU2_TR(0x60385f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603862:L603862:{c.instructions+=3;NFSU2_TR(0x603862);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B603867:{NFSU2_TR(0x603867);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603869:{NFSU2_TR(0x603869);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60384eu);}goto L60384e;}}
}
B60386b:L60386b:{c.instructions+=2;NFSU2_TR(0x60386b);
w4(R+4,u32(0x89cf48ull));
}
B603870:{NFSU2_TR(0x603870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603875ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B603875:L603875:{c.instructions+=2;NFSU2_TR(0x603875);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603877:{NFSU2_TR(0x603877);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60384eu);}goto L60384e;}}
}
B603879:L603879:{c.instructions+=4;NFSU2_TR(0x603879);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60387b:{NFSU2_TR(0x60387b);
__builtin_memmove((R+4),(R+24),4);
}
B60387d:{NFSU2_TR(0x60387d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603881:{NFSU2_TR(0x603881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603886ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603886:L603886:{c.instructions+=4;NFSU2_TR(0x603886);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603888:{NFSU2_TR(0x603888);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60388a:{NFSU2_TR(0x60388a);
__builtin_memmove((R+4),(R+24),4);
}
B60388c:{NFSU2_TR(0x60388c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603891ull));
TAIL_STATIC(0x601020u,601);
}
B603891:L603891:{c.instructions+=4;NFSU2_TR(0x603891);
w4(R+0,u32(0x1ull));
}
B603896:{NFSU2_TR(0x603896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603897:{NFSU2_TR(0x603897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603898:{NFSU2_TR(0x603898);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60389b:L60389b:{c.instructions+=4;NFSU2_TR(0x60389b);
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
B60389d:{NFSU2_TR(0x60389d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60389e:{NFSU2_TR(0x60389e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60389f:{NFSU2_TR(0x60389f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6038e0:L6038e0:{c.instructions+=6;NFSU2_TR(0x6038e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6038e4:{NFSU2_TR(0x6038e4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6038e5:{NFSU2_TR(0x6038e5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6038e8:{NFSU2_TR(0x6038e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6038e9:{NFSU2_TR(0x6038e9);
__builtin_memmove((R+24),(R+4),4);
}
B6038eb:{NFSU2_TR(0x6038eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L603ab9;}}
}
B6038f1:L6038f1:{c.instructions+=2;NFSU2_TR(0x6038f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x603ad8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6038f8:{NFSU2_TR(0x6038f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603ac0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6038ff:L6038ff:{c.instructions+=3;NFSU2_TR(0x6038ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603902:{NFSU2_TR(0x603902);
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
B603905:{NFSU2_TR(0x603905);
if(r1(R+518)){{goto L6039ce;}}
}
B60390b:L60390b:{c.instructions+=2;NFSU2_TR(0x60390b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60390e:{NFSU2_TR(0x60390e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603987;}}
}
B603910:L603910:{c.instructions+=2;NFSU2_TR(0x603910);
u8 U[4];
w4(U+0,u32(0x7a6434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603915:{NFSU2_TR(0x603915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60391aull));
TAIL_STATIC(0x52cf60u,52c);
}
B60391a:L60391a:{c.instructions+=3;NFSU2_TR(0x60391a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60391d:{NFSU2_TR(0x60391d);
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
B60391f:{NFSU2_TR(0x60391f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6039ce;}}
}
B603925:L603925:{c.instructions+=2;NFSU2_TR(0x603925);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60392a:{NFSU2_TR(0x60392a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60392full));
TAIL_STATIC(0x52cf60u,52c);
}
B60392f:L60392f:{c.instructions+=3;NFSU2_TR(0x60392f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603932:{NFSU2_TR(0x603932);
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
B603934:{NFSU2_TR(0x603934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6039ce;}}
}
B60393a:L60393a:{c.instructions+=2;NFSU2_TR(0x60393a);
w4(R+4,u32(0x83a9d0ull));
}
B60393f:{NFSU2_TR(0x60393f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603944ull));
TAIL_STATIC(0x4ae8d0u,4ae);
}
B603944:L603944:{c.instructions+=2;NFSU2_TR(0x603944);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603946:{NFSU2_TR(0x603946);
if(r1(R+518)){{goto L60396f;}}
}
B603948:L603948:{c.instructions+=2;NFSU2_TR(0x603948);
__builtin_memmove((R+4),gp(0x89cf4c),4);
}
B60394e:{NFSU2_TR(0x60394e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603953ull));
TAIL_STATIC(0x5efa00u,5ef);
}
B603953:L603953:{c.instructions+=2;NFSU2_TR(0x603953);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603955:{NFSU2_TR(0x603955);
if(r1(R+518)){{goto L60396f;}}
}
B603957:L603957:{c.instructions+=3;NFSU2_TR(0x603957);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603959:{NFSU2_TR(0x603959);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60395e:{NFSU2_TR(0x60395e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603963ull));
TAIL_STATIC(0x555e80u,555);
}
B603963:L603963:{c.instructions+=4;NFSU2_TR(0x603963);
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
B603966:{NFSU2_TR(0x603966);
w4(R+0,u32(0x1ull));
}
B60396b:{NFSU2_TR(0x60396b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60396c:{NFSU2_TR(0x60396c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60396f:L60396f:{c.instructions+=3;NFSU2_TR(0x60396f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603971:{NFSU2_TR(0x603971);
u8 U[4];
w4(U+0,u32(0x7a6434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603976:{NFSU2_TR(0x603976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60397bull));
TAIL_STATIC(0x555e80u,555);
}
B60397b:L60397b:{c.instructions+=4;NFSU2_TR(0x60397b);
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
B60397e:{NFSU2_TR(0x60397e);
w4(R+0,u32(0x1ull));
}
B603983:{NFSU2_TR(0x603983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603984:{NFSU2_TR(0x603984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603987:L603987:{c.instructions+=2;NFSU2_TR(0x603987);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60398a:{NFSU2_TR(0x60398a);
if(r1(R+518)){{goto L603996;}}
}
B60398c:L60398c:{c.instructions+=2;NFSU2_TR(0x60398c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60398f:{NFSU2_TR(0x60398f);
if(r1(R+518)){{goto L603996;}}
}
B603991:L603991:{c.instructions+=2;NFSU2_TR(0x603991);
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
B603994:{NFSU2_TR(0x603994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6039ce;}}
}
B603996:L603996:{c.instructions+=2;NFSU2_TR(0x603996);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60399b:{NFSU2_TR(0x60399b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039a0ull));
TAIL_STATIC(0x52cf60u,52c);
}
B6039a0:L6039a0:{c.instructions+=3;NFSU2_TR(0x6039a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6039a3:{NFSU2_TR(0x6039a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6039a5:{NFSU2_TR(0x6039a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6039b6;}}
}
B6039a7:L6039a7:{c.instructions+=3;NFSU2_TR(0x6039a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6039a9:{NFSU2_TR(0x6039a9);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6039ae:{NFSU2_TR(0x6039ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039b3ull));
TAIL_STATIC(0x555e80u,555);
}
B6039b3:L6039b3:{c.instructions+=1;NFSU2_TR(0x6039b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6039b6:L6039b6:{c.instructions+=2;NFSU2_TR(0x6039b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6039ba:{NFSU2_TR(0x6039ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6039ce;}}
}
B6039bc:L6039bc:{c.instructions+=2;NFSU2_TR(0x6039bc);
w4(R+4,u32(0x827e88ull));
}
B6039c1:{NFSU2_TR(0x6039c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039c6ull));
TAIL_STATIC(0x430430u,430);
}
B6039c6:L6039c6:{c.instructions+=2;NFSU2_TR(0x6039c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6039ca:{NFSU2_TR(0x6039ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6039ce:L6039ce:{c.instructions+=3;NFSU2_TR(0x6039ce);
w4(R+0,u32(0x1ull));
}
B6039d3:{NFSU2_TR(0x6039d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6039d4:{NFSU2_TR(0x6039d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6039d7:L6039d7:{c.instructions+=2;NFSU2_TR(0x6039d7);
u8 U[4];
w4(U+0,u32(0x799fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6039dc:{NFSU2_TR(0x6039dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039e1ull));
TAIL_STATIC(0x52cf60u,52c);
}
B6039e1:L6039e1:{c.instructions+=3;NFSU2_TR(0x6039e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6039e4:{NFSU2_TR(0x6039e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6039e6:{NFSU2_TR(0x6039e6);
if(r1(R+518)){{goto L6039f5;}}
}
B6039e8:L6039e8:{c.instructions+=2;NFSU2_TR(0x6039e8);
u8 U[4];
w4(U+0,u32(0x799fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6039ed:{NFSU2_TR(0x6039ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039f2ull));
TAIL_STATIC(0x558f00u,558);
}
B6039f2:L6039f2:{c.instructions+=1;NFSU2_TR(0x6039f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6039f5:L6039f5:{c.instructions+=2;NFSU2_TR(0x6039f5);
u8 U[4];
w4(U+0,u32(0x7a6434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6039fa:{NFSU2_TR(0x6039fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6039ffull));
TAIL_STATIC(0x52cf60u,52c);
}
B6039ff:L6039ff:{c.instructions+=3;NFSU2_TR(0x6039ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603a02:{NFSU2_TR(0x603a02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603a04:{NFSU2_TR(0x603a04);
if(r1(R+518)){{goto L603a13;}}
}
B603a06:L603a06:{c.instructions+=2;NFSU2_TR(0x603a06);
u8 U[4];
w4(U+0,u32(0x7a6434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603a0b:{NFSU2_TR(0x603a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a10ull));
TAIL_STATIC(0x558f00u,558);
}
B603a10:L603a10:{c.instructions+=1;NFSU2_TR(0x603a10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603a13:L603a13:{c.instructions+=1;NFSU2_TR(0x603a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a18ull));
TAIL_STATIC(0x4a9310u,4a9);
}
B603a18:L603a18:{c.instructions+=4;NFSU2_TR(0x603a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B603a1f:{NFSU2_TR(0x603a1f);
w4(R+0,u32(0x1ull));
}
B603a24:{NFSU2_TR(0x603a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603a25:{NFSU2_TR(0x603a25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603a28:L603a28:{c.instructions+=2;NFSU2_TR(0x603a28);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B603a2c:{NFSU2_TR(0x603a2c);
if(r1(R+518)){{goto L603a3a;}}
}
B603a2e:L603a2e:{c.instructions+=4;NFSU2_TR(0x603a2e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603a32:{NFSU2_TR(0x603a32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603a33:{NFSU2_TR(0x603a33);
__builtin_memmove((R+4),(R+24),4);
}
B603a35:{NFSU2_TR(0x603a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603a3a:L603a3a:{c.instructions+=3;NFSU2_TR(0x603a3a);
w4(R+0,u32(0x1ull));
}
B603a3f:{NFSU2_TR(0x603a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603a40:{NFSU2_TR(0x603a40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603a43:L603a43:{c.instructions+=2;NFSU2_TR(0x603a43);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B603a47:{NFSU2_TR(0x603a47);
if(r1(R+518)){{goto L603a53;}}
}
B603a49:L603a49:{c.instructions+=2;NFSU2_TR(0x603a49);
w4(R+4,u32(0x88eb00ull));
}
B603a4e:{NFSU2_TR(0x603a4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a53ull));
TAIL_STATIC(0x5e86e0u,5e8);
}
B603a53:L603a53:{c.instructions+=2;NFSU2_TR(0x603a53);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B603a57:{NFSU2_TR(0x603a57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603ab0;}}
}
B603a59:L603a59:{c.instructions+=3;NFSU2_TR(0x603a59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B603a5c:{NFSU2_TR(0x603a5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603a5e:{NFSU2_TR(0x603a5e);
if(r1(R+518)){{goto L603a89;}}
}
B603a60:L603a60:{c.instructions+=2;NFSU2_TR(0x603a60);
w4(R+4,u32(0x88eb00ull));
}
B603a65:{NFSU2_TR(0x603a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a6aull));
TAIL_STATIC(0x5d6160u,5d6);
}
B603a6a:L603a6a:{c.instructions+=2;NFSU2_TR(0x603a6a);
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
B603a6c:{NFSU2_TR(0x603a6c);
if(r1(R+518)){{goto L603ab0;}}
}
B603a6e:L603a6e:{c.instructions+=3;NFSU2_TR(0x603a6e);
w4(R+4,u32(0x827e88ull));
}
B603a73:{NFSU2_TR(0x603a73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603a77:{NFSU2_TR(0x603a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a7cull));
TAIL_STATIC(0x437200u,437);
}
B603a7c:L603a7c:{c.instructions+=4;NFSU2_TR(0x603a7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603a80:{NFSU2_TR(0x603a80);
w4(R+0,u32(0x1ull));
}
B603a85:{NFSU2_TR(0x603a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603a86:{NFSU2_TR(0x603a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603a89:L603a89:{c.instructions+=3;NFSU2_TR(0x603a89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B603a8c:{NFSU2_TR(0x603a8c);
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
B603a8e:{NFSU2_TR(0x603a8e);
if(r1(R+518)){{goto L603ab0;}}
}
B603a90:L603a90:{c.instructions+=2;NFSU2_TR(0x603a90);
w4(R+4,u32(0x827e88ull));
}
B603a95:{NFSU2_TR(0x603a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603a9aull));
TAIL_STATIC(0x43baa0u,43b);
}
B603a9a:L603a9a:{c.instructions+=3;NFSU2_TR(0x603a9a);
__builtin_memmove((R+0),gp(0x827ea4),1);
}
B603a9f:{NFSU2_TR(0x603a9f);
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
B603aa1:{NFSU2_TR(0x603aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603ab0;}}
}
B603aa3:L603aa3:{c.instructions+=4;NFSU2_TR(0x603aa3);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603aa5:{NFSU2_TR(0x603aa5);
__builtin_memmove((R+4),(R+24),4);
}
B603aa7:{NFSU2_TR(0x603aa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603aab:{NFSU2_TR(0x603aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603ab0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603ab0:L603ab0:{c.instructions+=3;NFSU2_TR(0x603ab0);
w4(R+0,u32(0x1ull));
}
B603ab5:{NFSU2_TR(0x603ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603ab6:{NFSU2_TR(0x603ab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603ab9:L603ab9:{c.instructions+=3;NFSU2_TR(0x603ab9);
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
B603abb:{NFSU2_TR(0x603abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603abc:{NFSU2_TR(0x603abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603af0:L603af0:{c.instructions+=6;NFSU2_TR(0x603af0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603af1:{NFSU2_TR(0x603af1);
__builtin_memmove((R+24),(R+4),4);
}
B603af3:{NFSU2_TR(0x603af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603af7:{NFSU2_TR(0x603af7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B603afa:{NFSU2_TR(0x603afa);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603afd:{NFSU2_TR(0x603afd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L603b8a;}}
}
B603b03:L603b03:{c.instructions+=2;NFSU2_TR(0x603b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x603ba0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603b0a:{NFSU2_TR(0x603b0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603b11:L603b11:{c.instructions+=3;NFSU2_TR(0x603b11);
w4(R+0,u32(0x1ull));
}
B603b16:{NFSU2_TR(0x603b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603b17:{NFSU2_TR(0x603b17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603b1a:L603b1a:{c.instructions+=3;NFSU2_TR(0x603b1a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B603b20:{NFSU2_TR(0x603b20);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b22:{NFSU2_TR(0x603b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b27ull));
TAIL_STATIC(0x5fc900u,5fc);
}
B603b27:L603b27:{c.instructions+=5;NFSU2_TR(0x603b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B603b29:{NFSU2_TR(0x603b29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b2a:{NFSU2_TR(0x603b2a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b2c:{NFSU2_TR(0x603b2c);
__builtin_memmove((R+4),(R+24),4);
}
B603b2e:{NFSU2_TR(0x603b2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b33ull));
TAIL_STATIC(0x601020u,601);
}
B603b33:L603b33:{c.instructions+=4;NFSU2_TR(0x603b33);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b35:{NFSU2_TR(0x603b35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b37:{NFSU2_TR(0x603b37);
__builtin_memmove((R+4),(R+24),4);
}
B603b39:{NFSU2_TR(0x603b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b3eull));
TAIL_STATIC(0x601020u,601);
}
B603b3e:L603b3e:{c.instructions+=4;NFSU2_TR(0x603b3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b40:{NFSU2_TR(0x603b40);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b42:{NFSU2_TR(0x603b42);
__builtin_memmove((R+4),(R+24),4);
}
B603b44:{NFSU2_TR(0x603b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b49ull));
TAIL_STATIC(0x601020u,601);
}
B603b49:L603b49:{c.instructions+=3;NFSU2_TR(0x603b49);
w4(R+0,u32(0x1ull));
}
B603b4e:{NFSU2_TR(0x603b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603b4f:{NFSU2_TR(0x603b4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603b52:L603b52:{c.instructions+=9;NFSU2_TR(0x603b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B603b54:{NFSU2_TR(0x603b54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B603b58:{NFSU2_TR(0x603b58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b59:{NFSU2_TR(0x603b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603b5c:{NFSU2_TR(0x603b5c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b5e:{NFSU2_TR(0x603b5e);
__builtin_memmove((R+4),(R+24),4);
}
B603b60:{NFSU2_TR(0x603b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603b63:{NFSU2_TR(0x603b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603b66:{NFSU2_TR(0x603b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b6bull));
TAIL_STATIC(0x601020u,601);
}
B603b6b:L603b6b:{c.instructions+=4;NFSU2_TR(0x603b6b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b6d:{NFSU2_TR(0x603b6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b6f:{NFSU2_TR(0x603b6f);
__builtin_memmove((R+4),(R+24),4);
}
B603b71:{NFSU2_TR(0x603b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b76ull));
TAIL_STATIC(0x601020u,601);
}
B603b76:L603b76:{c.instructions+=4;NFSU2_TR(0x603b76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b78:{NFSU2_TR(0x603b78);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603b7a:{NFSU2_TR(0x603b7a);
__builtin_memmove((R+4),(R+24),4);
}
B603b7c:{NFSU2_TR(0x603b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603b81ull));
TAIL_STATIC(0x601020u,601);
}
B603b81:L603b81:{c.instructions+=3;NFSU2_TR(0x603b81);
w4(R+0,u32(0x1ull));
}
B603b86:{NFSU2_TR(0x603b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603b87:{NFSU2_TR(0x603b87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603b8a:L603b8a:{c.instructions+=3;NFSU2_TR(0x603b8a);
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
B603b8c:{NFSU2_TR(0x603b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603b8d:{NFSU2_TR(0x603b8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603bc0:L603bc0:{c.instructions+=6;NFSU2_TR(0x603bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603bc4:{NFSU2_TR(0x603bc4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B603bc5:{NFSU2_TR(0x603bc5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603bc8:{NFSU2_TR(0x603bc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603bc9:{NFSU2_TR(0x603bc9);
__builtin_memmove((R+24),(R+4),4);
}
B603bcb:{NFSU2_TR(0x603bcb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L603cc5;}}
}
B603bd1:L603bd1:{c.instructions+=2;NFSU2_TR(0x603bd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x603cecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603bd8:{NFSU2_TR(0x603bd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603cccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603bdf:L603bdf:{c.instructions+=2;NFSU2_TR(0x603bdf);
w4(R+4,u32(0x827e88ull));
}
B603be4:{NFSU2_TR(0x603be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603be9ull));
TAIL_STATIC(0x43b930u,43b);
}
B603be9:L603be9:{c.instructions+=2;NFSU2_TR(0x603be9);
w4(R+4,u32(0x827b88ull));
}
B603bee:{NFSU2_TR(0x603bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603bf3ull));
TAIL_STATIC(0x432500u,432);
}
B603bf3:L603bf3:{c.instructions+=2;NFSU2_TR(0x603bf3);
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
B603bf5:{NFSU2_TR(0x603bf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603c0d;}}
}
B603bf7:L603bf7:{c.instructions+=3;NFSU2_TR(0x603bf7);
__builtin_memmove((R+4),gp(0x890118),4);
}
B603bfd:{NFSU2_TR(0x603bfd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603bff:{NFSU2_TR(0x603bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c04ull));
TAIL_STATIC(0x5fc900u,5fc);
}
B603c04:L603c04:{c.instructions+=3;NFSU2_TR(0x603c04);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c06:{NFSU2_TR(0x603c06);
__builtin_memmove((R+4),(R+24),4);
}
B603c08:{NFSU2_TR(0x603c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603c0d:L603c0d:{c.instructions+=3;NFSU2_TR(0x603c0d);
w4(R+0,u32(0x1ull));
}
B603c12:{NFSU2_TR(0x603c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603c13:{NFSU2_TR(0x603c13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603c16:L603c16:{c.instructions+=2;NFSU2_TR(0x603c16);
u8 U[4];
w4(U+0,u32(0x7a644cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c1b:{NFSU2_TR(0x603c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c20ull));
TAIL_STATIC(0x577eb0u,577);
}
B603c20:L603c20:{c.instructions+=3;NFSU2_TR(0x603c20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603c23:{NFSU2_TR(0x603c23);
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
B603c25:{NFSU2_TR(0x603c25);
if(r1(R+518)){{goto L603c30;}}
}
B603c27:L603c27:{c.instructions+=2;NFSU2_TR(0x603c27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c28:{NFSU2_TR(0x603c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c2dull));
TAIL_STATIC(0x580e90u,580);
}
B603c2d:L603c2d:{c.instructions+=1;NFSU2_TR(0x603c2d);
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
B603c30:L603c30:{c.instructions+=3;NFSU2_TR(0x603c30);
w4(R+0,u32(0x1ull));
}
B603c35:{NFSU2_TR(0x603c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603c36:{NFSU2_TR(0x603c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603c39:L603c39:{c.instructions+=3;NFSU2_TR(0x603c39);
__builtin_memmove((R+4),gp(0x890118),4);
}
B603c3f:{NFSU2_TR(0x603c3f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B603c42:{NFSU2_TR(0x603c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603c0du);}goto L603c0d;}}
}
B603c44:L603c44:{c.instructions+=2;NFSU2_TR(0x603c44);
w4(R+4,u32(0x827e88ull));
}
B603c49:{NFSU2_TR(0x603c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c4eull));
TAIL_STATIC(0x438760u,438);
}
B603c4e:L603c4e:{c.instructions+=1;NFSU2_TR(0x603c4e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603bf3u);}goto L603bf3;}
}
B603c50:L603c50:{c.instructions+=3;NFSU2_TR(0x603c50);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B603c55:{NFSU2_TR(0x603c55);
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
B603c57:{NFSU2_TR(0x603c57);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603c0du);}goto L603c0d;}}
}
B603c59:L603c59:{c.instructions+=3;NFSU2_TR(0x603c59);
__builtin_memmove((R+0),gp(0x7faab8),4);
}
B603c5e:{NFSU2_TR(0x603c5e);
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
B603c60:{NFSU2_TR(0x603c60);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603c0du);}goto L603c0d;}}
}
B603c62:L603c62:{c.instructions+=3;NFSU2_TR(0x603c62);
__builtin_memmove((R+4),gp(0x890118),4);
}
B603c68:{NFSU2_TR(0x603c68);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c6a:{NFSU2_TR(0x603c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c6full));
TAIL_STATIC(0x5fc900u,5fc);
}
B603c6f:L603c6f:{c.instructions+=3;NFSU2_TR(0x603c6f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c71:{NFSU2_TR(0x603c71);
__builtin_memmove((R+4),(R+24),4);
}
B603c73:{NFSU2_TR(0x603c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603c78:L603c78:{c.instructions+=2;NFSU2_TR(0x603c78);
w4(R+4,u32(0x827e88ull));
}
B603c7d:{NFSU2_TR(0x603c7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c82ull));
TAIL_STATIC(0x43b460u,43b);
}
B603c82:L603c82:{c.instructions+=3;NFSU2_TR(0x603c82);
w4(R+0,u32(0x1ull));
}
B603c87:{NFSU2_TR(0x603c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603c88:{NFSU2_TR(0x603c88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603c8b:L603c8b:{c.instructions+=3;NFSU2_TR(0x603c8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c8d:{NFSU2_TR(0x603c8d);
__builtin_memmove((R+4),(R+24),4);
}
B603c8f:{NFSU2_TR(0x603c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603c94:L603c94:{c.instructions+=4;NFSU2_TR(0x603c94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c96:{NFSU2_TR(0x603c96);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603c98:{NFSU2_TR(0x603c98);
__builtin_memmove((R+4),(R+24),4);
}
B603c9a:{NFSU2_TR(0x603c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603c9full));
TAIL_STATIC(0x601020u,601);
}
B603c9f:L603c9f:{c.instructions+=3;NFSU2_TR(0x603c9f);
w4(R+0,u32(0x1ull));
}
B603ca4:{NFSU2_TR(0x603ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603ca5:{NFSU2_TR(0x603ca5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603ca8:L603ca8:{c.instructions+=3;NFSU2_TR(0x603ca8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603caa:{NFSU2_TR(0x603caa);
__builtin_memmove((R+4),(R+24),4);
}
B603cac:{NFSU2_TR(0x603cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603cb1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603cb1:L603cb1:{c.instructions+=4;NFSU2_TR(0x603cb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603cb3:{NFSU2_TR(0x603cb3);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603cb5:{NFSU2_TR(0x603cb5);
__builtin_memmove((R+4),(R+24),4);
}
B603cb7:{NFSU2_TR(0x603cb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603cbcull));
TAIL_STATIC(0x601020u,601);
}
B603cbc:L603cbc:{c.instructions+=3;NFSU2_TR(0x603cbc);
w4(R+0,u32(0x1ull));
}
B603cc1:{NFSU2_TR(0x603cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603cc2:{NFSU2_TR(0x603cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603cc5:L603cc5:{c.instructions+=3;NFSU2_TR(0x603cc5);
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
B603cc7:{NFSU2_TR(0x603cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603cc8:{NFSU2_TR(0x603cc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603d10:L603d10:{c.instructions+=6;NFSU2_TR(0x603d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603d14:{NFSU2_TR(0x603d14);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B603d15:{NFSU2_TR(0x603d15);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603d18:{NFSU2_TR(0x603d18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d19:{NFSU2_TR(0x603d19);
__builtin_memmove((R+24),(R+4),4);
}
B603d1b:{NFSU2_TR(0x603d1b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L603dab;}}
}
B603d21:L603d21:{c.instructions+=2;NFSU2_TR(0x603d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x603dc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603d28:{NFSU2_TR(0x603d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603db4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603d2f:L603d2f:{c.instructions+=3;NFSU2_TR(0x603d2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d31:{NFSU2_TR(0x603d31);
u8 U[4];
w4(U+0,u32(0x7a6470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d36:{NFSU2_TR(0x603d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d3bull));
TAIL_STATIC(0x555e80u,555);
}
B603d3b:L603d3b:{c.instructions+=5;NFSU2_TR(0x603d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B603d3e:{NFSU2_TR(0x603d3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B603d41:{NFSU2_TR(0x603d41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d42:{NFSU2_TR(0x603d42);
u8 U[4];
w4(U+0,u32(0x7a6464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d47:{NFSU2_TR(0x603d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d4cull));
TAIL_STATIC(0x505450u,505);
}
B603d4c:L603d4c:{c.instructions+=3;NFSU2_TR(0x603d4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d4d:{NFSU2_TR(0x603d4d);
u8 U[4];
w4(U+0,u32(0x7a6470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d52:{NFSU2_TR(0x603d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d57ull));
TAIL_STATIC(0x537a10u,537);
}
B603d57:L603d57:{c.instructions+=3;NFSU2_TR(0x603d57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B603d5a:{NFSU2_TR(0x603d5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d5b:{NFSU2_TR(0x603d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d60ull));
TAIL_STATIC(0x50c900u,50c);
}
B603d60:L603d60:{c.instructions+=4;NFSU2_TR(0x603d60);
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
B603d63:{NFSU2_TR(0x603d63);
w4(R+0,u32(0x1ull));
}
B603d68:{NFSU2_TR(0x603d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603d69:{NFSU2_TR(0x603d69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603d6c:L603d6c:{c.instructions+=2;NFSU2_TR(0x603d6c);
u8 U[4];
w4(U+0,u32(0x7a6470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d71:{NFSU2_TR(0x603d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d76ull));
TAIL_STATIC(0x558f00u,558);
}
B603d76:L603d76:{c.instructions+=2;NFSU2_TR(0x603d76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603d79:{NFSU2_TR(0x603d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d7eull));
TAIL_STATIC(0x5eb3c0u,5eb);
}
B603d7e:L603d7e:{c.instructions+=3;NFSU2_TR(0x603d7e);
w4(R+0,u32(0x1ull));
}
B603d83:{NFSU2_TR(0x603d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603d84:{NFSU2_TR(0x603d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603d87:L603d87:{c.instructions+=4;NFSU2_TR(0x603d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603d8a:{NFSU2_TR(0x603d8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d8b:{NFSU2_TR(0x603d8b);
__builtin_memmove((R+4),(R+24),4);
}
B603d8d:{NFSU2_TR(0x603d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603d92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603d92:L603d92:{c.instructions+=4;NFSU2_TR(0x603d92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B603d96:{NFSU2_TR(0x603d96);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B603d9c:{NFSU2_TR(0x603d9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603d9d:{NFSU2_TR(0x603d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603da2ull));
TAIL_STATIC(0x481210u,481);
}
B603da2:L603da2:{c.instructions+=3;NFSU2_TR(0x603da2);
w4(R+0,u32(0x1ull));
}
B603da7:{NFSU2_TR(0x603da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603da8:{NFSU2_TR(0x603da8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603dab:L603dab:{c.instructions+=2;NFSU2_TR(0x603dab);
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
B603dad:{NFSU2_TR(0x603dad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
EXIT(0x603daeu);
}
B603de0:L603de0:{c.instructions+=4;NFSU2_TR(0x603de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603de1:{NFSU2_TR(0x603de1);
__builtin_memmove((R+24),(R+4),4);
}
B603de3:{NFSU2_TR(0x603de3);
w4(R+4,u32(0x83a9d0ull));
}
B603de8:{NFSU2_TR(0x603de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603dedull));
TAIL_STATIC(0x541a10u,541);
}
B603ded:L603ded:{c.instructions+=5;NFSU2_TR(0x603ded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B603def:{NFSU2_TR(0x603def);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603df0:{NFSU2_TR(0x603df0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603df2:{NFSU2_TR(0x603df2);
__builtin_memmove((R+4),(R+24),4);
}
B603df4:{NFSU2_TR(0x603df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603df9ull));
TAIL_STATIC(0x601020u,601);
}
B603df9:L603df9:{c.instructions+=4;NFSU2_TR(0x603df9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603dfb:{NFSU2_TR(0x603dfb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603dfd:{NFSU2_TR(0x603dfd);
__builtin_memmove((R+4),(R+24),4);
}
B603dff:{NFSU2_TR(0x603dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e04ull));
TAIL_STATIC(0x601020u,601);
}
B603e04:L603e04:{c.instructions+=4;NFSU2_TR(0x603e04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e06:{NFSU2_TR(0x603e06);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e08:{NFSU2_TR(0x603e08);
__builtin_memmove((R+4),(R+24),4);
}
B603e0a:{NFSU2_TR(0x603e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e0full));
TAIL_STATIC(0x601020u,601);
}
B603e0f:L603e0f:{c.instructions+=4;NFSU2_TR(0x603e0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e11:{NFSU2_TR(0x603e11);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e13:{NFSU2_TR(0x603e13);
__builtin_memmove((R+4),(R+24),4);
}
B603e15:{NFSU2_TR(0x603e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e1aull));
TAIL_STATIC(0x601020u,601);
}
B603e1a:L603e1a:{c.instructions+=2;NFSU2_TR(0x603e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603e1b:{NFSU2_TR(0x603e1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e20:L603e20:{c.instructions+=4;NFSU2_TR(0x603e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603e24:{NFSU2_TR(0x603e24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B603e25:{NFSU2_TR(0x603e25);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603e28:{NFSU2_TR(0x603e28);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L603e81;}}
}
B603e2a:L603e2a:{c.instructions+=2;NFSU2_TR(0x603e2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x603e9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603e31:{NFSU2_TR(0x603e31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603e88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603e38:L603e38:{c.instructions+=2;NFSU2_TR(0x603e38);
w4(R+0,u32(0x1ull));
}
B603e3d:{NFSU2_TR(0x603e3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e40:L603e40:{c.instructions+=1;NFSU2_TR(0x603e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e45ull));
TAIL_STATIC(0x57c390u,57c);
}
B603e45:L603e45:{c.instructions+=2;NFSU2_TR(0x603e45);
w4(R+0,u32(0x1ull));
}
B603e4a:{NFSU2_TR(0x603e4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e4d:L603e4d:{c.instructions+=2;NFSU2_TR(0x603e4d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e4f:{NFSU2_TR(0x603e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603e54:L603e54:{c.instructions+=2;NFSU2_TR(0x603e54);
w4(R+0,u32(0x1ull));
}
B603e59:{NFSU2_TR(0x603e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e5c:L603e5c:{c.instructions+=3;NFSU2_TR(0x603e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603e5f:{NFSU2_TR(0x603e5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603e61:{NFSU2_TR(0x603e61);
if(r1(R+518)){{goto L603e72;}}
}
B603e63:L603e63:{c.instructions+=2;NFSU2_TR(0x603e63);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e65:{NFSU2_TR(0x603e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603e6a:L603e6a:{c.instructions+=2;NFSU2_TR(0x603e6a);
w4(R+0,u32(0x1ull));
}
B603e6f:{NFSU2_TR(0x603e6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e72:L603e72:{c.instructions+=2;NFSU2_TR(0x603e72);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603e74:{NFSU2_TR(0x603e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603e79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603e79:L603e79:{c.instructions+=2;NFSU2_TR(0x603e79);
w4(R+0,u32(0x1ull));
}
B603e7e:{NFSU2_TR(0x603e7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603e81:L603e81:{c.instructions+=2;NFSU2_TR(0x603e81);
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
B603e83:{NFSU2_TR(0x603e83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603eb0:L603eb0:{c.instructions+=12;NFSU2_TR(0x603eb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603eb1:{NFSU2_TR(0x603eb1);
__builtin_memmove((R+20),(R+16),4);
}
B603eb3:{NFSU2_TR(0x603eb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B603eb6:{NFSU2_TR(0x603eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B603eb9:{NFSU2_TR(0x603eb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603eba:{NFSU2_TR(0x603eba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603ebb:{NFSU2_TR(0x603ebb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603ebc:{NFSU2_TR(0x603ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B603ebf:{NFSU2_TR(0x603ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B603ec2:{NFSU2_TR(0x603ec2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B603ec5:{NFSU2_TR(0x603ec5);
__builtin_memmove((R+24),(R+4),4);
}
B603ec7:{NFSU2_TR(0x603ec7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x604206u,604);}
}
B603ecd:L603ecd:{c.instructions+=2;NFSU2_TR(0x603ecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B603ed4:{NFSU2_TR(0x603ed4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x604214ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B603edb:L603edb:{c.instructions+=2;NFSU2_TR(0x603edb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603edd:{NFSU2_TR(0x603edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603ee2ull));
TAIL_STATIC(0x5736f0u,573);
}
B603ee2:L603ee2:{c.instructions+=2;NFSU2_TR(0x603ee2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B603ee5:{NFSU2_TR(0x603ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603eeaull));
TAIL_STATIC(0x4a4b60u,4a4);
}
B603eea:L603eea:{c.instructions+=2;NFSU2_TR(0x603eea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603eec:{NFSU2_TR(0x603eec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L603ef6;}}
}
B603eee:L603eee:{c.instructions+=2;NFSU2_TR(0x603eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B603ef1:{NFSU2_TR(0x603ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603ef6ull));
TAIL_STATIC(0x4a46e0u,4a4);
}
B603ef6:L603ef6:{c.instructions+=3;NFSU2_TR(0x603ef6);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B603efb:{NFSU2_TR(0x603efb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603efd:{NFSU2_TR(0x603efd);
if(r1(R+518)){{goto L603f11;}}
}
B603eff:L603eff:{c.instructions+=2;NFSU2_TR(0x603eff);
w4(R+4,u32(0x89e7a0ull));
}
B603f04:{NFSU2_TR(0x603f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603f09ull));
TAIL_STATIC(0x4018f0u,401);
}
B603f09:L603f09:{c.instructions+=2;NFSU2_TR(0x603f09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603f0b:{NFSU2_TR(0x603f0b);
if(r1(R+518)){{goto L603f11;}}
}
B603f0d:L603f0d:{c.instructions+=1;NFSU2_TR(0x603f0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603f11:L603f11:{c.instructions+=5;NFSU2_TR(0x603f11);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B603f17:{NFSU2_TR(0x603f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603f1a:{NFSU2_TR(0x603f1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B603f1c:{NFSU2_TR(0x603f1c);
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
B603f1e:{NFSU2_TR(0x603f1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x604072u,604);}
}
B603f24:L603f24:{c.instructions+=3;NFSU2_TR(0x603f24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B603f27:{NFSU2_TR(0x603f27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603f29:{NFSU2_TR(0x603f29);
if(r1(R+518)){{goto L603fb4;}}
}
B603f2f:L603f2f:{c.instructions+=3;NFSU2_TR(0x603f2f);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B603f34:{NFSU2_TR(0x603f34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B603f36:{NFSU2_TR(0x603f36);
if(r1(R+518)){{goto L603f91;}}
}
B603f38:L603f38:{c.instructions+=2;NFSU2_TR(0x603f38);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B603f3f:{NFSU2_TR(0x603f3f);
if(r1(R+518)){{goto L603f91;}}
}
B603f41:L603f41:{c.instructions+=4;NFSU2_TR(0x603f41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603f45:{NFSU2_TR(0x603f45);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B603f4a:{NFSU2_TR(0x603f4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B603f4c:{NFSU2_TR(0x603f4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L603f6a;}}
}
B603f4e:L603f4e:{c.instructions+=1;NFSU2_TR(0x603f4e);
__builtin_memmove((R+28),(R+28),4);
}
B603f50:L603f50:{c.instructions+=4;NFSU2_TR(0x603f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B603f57:{NFSU2_TR(0x603f57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f59:{NFSU2_TR(0x603f59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f5b:{NFSU2_TR(0x603f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603f60ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B603f60:L603f60:{c.instructions+=4;NFSU2_TR(0x603f60);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B603f65:{NFSU2_TR(0x603f65);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B603f66:{NFSU2_TR(0x603f66);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B603f68:{NFSU2_TR(0x603f68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603f50u);}goto L603f50;}}
}
B603f6a:L603f6a:{c.instructions+=3;NFSU2_TR(0x603f6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f6c:{NFSU2_TR(0x603f6c);
__builtin_memmove((R+4),(R+24),4);
}
B603f6e:{NFSU2_TR(0x603f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603f73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x603630u);}goto L603630;}
}
B603f73:L603f73:{c.instructions+=4;NFSU2_TR(0x603f73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f75:{NFSU2_TR(0x603f75);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f77:{NFSU2_TR(0x603f77);
__builtin_memmove((R+4),(R+24),4);
}
B603f79:{NFSU2_TR(0x603f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603f7eull));
TAIL_STATIC(0x601020u,601);
}
B603f7e:L603f7e:{c.instructions+=1;NFSU2_TR(0x603f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603f83ull));
TAIL_STATIC(0x5100b0u,510);
}
B603f83:L603f83:{c.instructions+=7;NFSU2_TR(0x603f83);
w4(R+0,u32(0x1ull));
}
B603f88:{NFSU2_TR(0x603f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603f89:{NFSU2_TR(0x603f89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603f8a:{NFSU2_TR(0x603f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603f8b:{NFSU2_TR(0x603f8b);
__builtin_memmove((R+16),(R+20),4);
}
B603f8d:{NFSU2_TR(0x603f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603f8e:{NFSU2_TR(0x603f8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603f91:L603f91:{c.instructions+=6;NFSU2_TR(0x603f91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f92:{NFSU2_TR(0x603f92);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603f94:{NFSU2_TR(0x603f94);
__builtin_memmove((R+4),(R+24),4);
}
B603f96:{NFSU2_TR(0x603f96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B603f9a:{NFSU2_TR(0x603f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B603fa1:{NFSU2_TR(0x603fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603fa6ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B603fa6:L603fa6:{c.instructions+=7;NFSU2_TR(0x603fa6);
w4(R+0,u32(0x1ull));
}
B603fab:{NFSU2_TR(0x603fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B603fac:{NFSU2_TR(0x603fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B603fad:{NFSU2_TR(0x603fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B603fae:{NFSU2_TR(0x603fae);
__builtin_memmove((R+16),(R+20),4);
}
B603fb0:{NFSU2_TR(0x603fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B603fb1:{NFSU2_TR(0x603fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B603fb4:L603fb4:{c.instructions+=2;NFSU2_TR(0x603fb4);
w4(R+4,u32(0x827e88ull));
}
B603fb9:{NFSU2_TR(0x603fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603fbeull));
TAIL_STATIC(0x430420u,430);
}
B603fbe:L603fbe:{c.instructions+=2;NFSU2_TR(0x603fbe);
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
B603fc0:{NFSU2_TR(0x603fc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x604072u,604);}
}
B603fc6:L603fc6:{c.instructions+=17;NFSU2_TR(0x603fc6);
__builtin_memmove((R+8),gp(0x890080),4);
}
B603fcc:{NFSU2_TR(0x603fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B603fcf:{NFSU2_TR(0x603fcf);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B603fd2:{NFSU2_TR(0x603fd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B603fd5:{NFSU2_TR(0x603fd5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B603fd8:{NFSU2_TR(0x603fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B603fda:{NFSU2_TR(0x603fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603fdb:{NFSU2_TR(0x603fdb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B603fdd:{NFSU2_TR(0x603fdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B603fe1:{NFSU2_TR(0x603fe1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B603fe5:{NFSU2_TR(0x603fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603fe6:{NFSU2_TR(0x603fe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B603fea:{NFSU2_TR(0x603fea);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B603fee:{NFSU2_TR(0x603fee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B603fef:{NFSU2_TR(0x603fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603ff3:{NFSU2_TR(0x603ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B603ff7:{NFSU2_TR(0x603ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x603ffcull));
TAIL_STATIC(0x42fc60u,42f);
}
B603ffc:L603ffc:{c.instructions+=1;NFSU2_TR(0x603ffc);
__builtin_memmove((R+12),gp(0x85105c),4);
TAIL_STATIC(0x604002u,604);
}
XIT:NFSU2_TR_EXIT(0x603,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
