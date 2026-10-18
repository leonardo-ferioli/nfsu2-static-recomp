#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x439,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x439,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_439(u8* __restrict R,Cpu& c);
u32 page_439(Cpu& c){return body_439(c.regs.data(),c);}
__attribute__((noinline)) u32 body_439(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x439000:goto L439000;
case 0x439005:c.instructions+=7;goto B439005;
case 0x43900a:c.instructions+=6;goto B43900a;
case 0x43900d:c.instructions+=5;goto B43900d;
case 0x439010:c.instructions+=4;goto B439010;
case 0x439013:c.instructions+=3;goto B439013;
case 0x439014:c.instructions+=2;goto B439014;
case 0x439019:c.instructions+=1;goto B439019;
case 0x43901e:goto L43901e;
case 0x439024:c.instructions+=2;goto B439024;
case 0x439025:c.instructions+=1;goto B439025;
case 0x43902a:goto L43902a;
case 0x439030:c.instructions+=2;goto B439030;
case 0x439031:c.instructions+=1;goto B439031;
case 0x439036:goto L439036;
case 0x43903a:c.instructions+=6;goto B43903a;
case 0x43903d:c.instructions+=5;goto B43903d;
case 0x43903f:c.instructions+=4;goto B43903f;
case 0x439040:c.instructions+=3;goto B439040;
case 0x439047:c.instructions+=2;goto B439047;
case 0x43904a:c.instructions+=1;goto B43904a;
case 0x439050:goto L439050;
case 0x439051:c.instructions+=2;goto B439051;
case 0x439053:c.instructions+=1;goto B439053;
case 0x439058:goto L439058;
case 0x43905d:c.instructions+=1;goto B43905d;
case 0x43905f:goto L43905f;
case 0x439060:c.instructions+=1;goto B439060;
case 0x439065:goto L439065;
case 0x439068:goto L439068;
case 0x43906a:c.instructions+=2;goto B43906a;
case 0x43906b:c.instructions+=1;goto B43906b;
case 0x439070:goto L439070;
case 0x439071:c.instructions+=4;goto B439071;
case 0x439073:c.instructions+=3;goto B439073;
case 0x439076:c.instructions+=2;goto B439076;
case 0x439078:c.instructions+=1;goto B439078;
case 0x43907e:goto L43907e;
case 0x439081:c.instructions+=2;goto B439081;
case 0x439083:c.instructions+=1;goto B439083;
case 0x439085:goto L439085;
case 0x439088:c.instructions+=4;goto B439088;
case 0x43908b:c.instructions+=3;goto B43908b;
case 0x43908e:c.instructions+=2;goto B43908e;
case 0x439090:c.instructions+=1;goto B439090;
case 0x439092:goto L439092;
case 0x439097:c.instructions+=2;goto B439097;
case 0x439099:c.instructions+=1;goto B439099;
case 0x43909b:goto L43909b;
case 0x4390a1:c.instructions+=3;goto B4390a1;
case 0x4390a7:c.instructions+=2;goto B4390a7;
case 0x4390a9:c.instructions+=1;goto B4390a9;
case 0x4390ab:goto L4390ab;
case 0x4390b2:c.instructions+=1;goto B4390b2;
case 0x4390b7:goto L4390b7;
case 0x4390be:goto L4390be;
case 0x4390c3:c.instructions+=4;goto B4390c3;
case 0x4390c4:c.instructions+=3;goto B4390c4;
case 0x4390c6:c.instructions+=2;goto B4390c6;
case 0x4390c8:c.instructions+=1;goto B4390c8;
case 0x4390ca:goto L4390ca;
case 0x4390d0:goto L4390d0;
case 0x4390d7:c.instructions+=3;goto B4390d7;
case 0x4390dd:c.instructions+=2;goto B4390dd;
case 0x4390df:c.instructions+=1;goto B4390df;
case 0x4390e1:goto L4390e1;
case 0x4390e5:c.instructions+=1;goto B4390e5;
case 0x4390e7:goto L4390e7;
case 0x4390e9:c.instructions+=1;goto B4390e9;
case 0x4390ee:goto L4390ee;
case 0x4390f3:c.instructions+=3;goto B4390f3;
case 0x4390f4:c.instructions+=2;goto B4390f4;
case 0x4390f6:c.instructions+=1;goto B4390f6;
case 0x4390f8:goto L4390f8;
case 0x4390fc:c.instructions+=1;goto B4390fc;
case 0x4390fd:goto L4390fd;
case 0x4390ff:c.instructions+=1;goto B4390ff;
case 0x439104:goto L439104;
case 0x439109:c.instructions+=2;goto B439109;
case 0x439113:c.instructions+=1;goto B439113;
case 0x439117:goto L439117;
case 0x439119:c.instructions+=2;goto B439119;
case 0x43911a:c.instructions+=1;goto B43911a;
case 0x439120:goto L439120;
case 0x439123:c.instructions+=2;goto B439123;
case 0x439126:c.instructions+=1;goto B439126;
case 0x439128:goto L439128;
case 0x439129:c.instructions+=1;goto B439129;
case 0x43912b:goto L43912b;
case 0x43912c:c.instructions+=1;goto B43912c;
case 0x43912e:goto L43912e;
case 0x439135:goto L439135;
case 0x43913a:c.instructions+=2;goto B43913a;
case 0x43913c:c.instructions+=1;goto B43913c;
case 0x43913e:goto L43913e;
case 0x439143:c.instructions+=2;goto B439143;
case 0x439145:c.instructions+=1;goto B439145;
case 0x439147:goto L439147;
case 0x43914c:c.instructions+=2;goto B43914c;
case 0x43914f:c.instructions+=1;goto B43914f;
case 0x439154:goto L439154;
case 0x439156:c.instructions+=1;goto B439156;
case 0x439160:goto L439160;
case 0x439161:c.instructions+=4;goto B439161;
case 0x439163:c.instructions+=3;goto B439163;
case 0x439166:c.instructions+=2;goto B439166;
case 0x439169:c.instructions+=1;goto B439169;
case 0x43916b:goto L43916b;
case 0x43916c:c.instructions+=1;goto B43916c;
case 0x43916e:goto L43916e;
case 0x439170:goto L439170;
case 0x439172:c.instructions+=2;goto B439172;
case 0x439179:c.instructions+=1;goto B439179;
case 0x43917e:goto L43917e;
case 0x439185:goto L439185;
case 0x43918a:c.instructions+=3;goto B43918a;
case 0x43918c:c.instructions+=2;goto B43918c;
case 0x43918d:c.instructions+=1;goto B43918d;
case 0x43918f:goto L43918f;
case 0x439194:c.instructions+=2;goto B439194;
case 0x439196:c.instructions+=1;goto B439196;
case 0x439198:goto L439198;
case 0x43919d:c.instructions+=2;goto B43919d;
case 0x4391a0:c.instructions+=1;goto B4391a0;
case 0x4391a5:goto L4391a5;
case 0x4391a7:c.instructions+=1;goto B4391a7;
case 0x4391b0:goto L4391b0;
case 0x4391b1:c.instructions+=5;goto B4391b1;
case 0x4391b2:c.instructions+=4;goto B4391b2;
case 0x4391b3:c.instructions+=3;goto B4391b3;
case 0x4391b8:c.instructions+=2;goto B4391b8;
case 0x4391ba:c.instructions+=1;goto B4391ba;
case 0x4391c0:goto L4391c0;
case 0x4391c2:c.instructions+=2;goto B4391c2;
case 0x4391c4:c.instructions+=1;goto B4391c4;
case 0x4391c6:goto L4391c6;
case 0x4391c9:c.instructions+=3;goto B4391c9;
case 0x4391cb:c.instructions+=2;goto B4391cb;
case 0x4391ce:c.instructions+=1;goto B4391ce;
case 0x4391d0:goto L4391d0;
case 0x4391d1:c.instructions+=1;goto B4391d1;
case 0x4391d6:goto L4391d6;
case 0x4391d9:c.instructions+=1;goto B4391d9;
case 0x4391dc:goto L4391dc;
case 0x4391df:c.instructions+=3;goto B4391df;
case 0x4391e1:c.instructions+=2;goto B4391e1;
case 0x4391e4:c.instructions+=1;goto B4391e4;
case 0x4391e6:goto L4391e6;
case 0x4391e8:c.instructions+=2;goto B4391e8;
case 0x4391e9:c.instructions+=1;goto B4391e9;
case 0x4391ef:goto L4391ef;
case 0x4391f2:c.instructions+=1;goto B4391f2;
case 0x4391f5:goto L4391f5;
case 0x4391f8:c.instructions+=2;goto B4391f8;
case 0x4391fa:c.instructions+=1;goto B4391fa;
case 0x4391ff:goto L4391ff;
case 0x439201:c.instructions+=2;goto B439201;
case 0x439203:c.instructions+=1;goto B439203;
case 0x439205:goto L439205;
case 0x439207:c.instructions+=1;goto B439207;
case 0x43920c:goto L43920c;
case 0x439211:c.instructions+=3;goto B439211;
case 0x439212:c.instructions+=2;goto B439212;
case 0x439213:c.instructions+=1;goto B439213;
case 0x439218:goto L439218;
case 0x43921b:goto L43921b;
case 0x43921d:goto L43921d;
case 0x439220:c.instructions+=6;goto B439220;
case 0x439223:c.instructions+=5;goto B439223;
case 0x439226:c.instructions+=4;goto B439226;
case 0x43922d:c.instructions+=3;goto B43922d;
case 0x439230:c.instructions+=2;goto B439230;
case 0x439236:c.instructions+=1;goto B439236;
case 0x439238:goto L439238;
case 0x439239:c.instructions+=3;goto B439239;
case 0x43923a:c.instructions+=2;goto B43923a;
case 0x43923b:c.instructions+=1;goto B43923b;
case 0x439240:goto L439240;
case 0x439241:c.instructions+=3;goto B439241;
case 0x439243:c.instructions+=2;goto B439243;
case 0x439245:c.instructions+=1;goto B439245;
case 0x43924a:goto L43924a;
case 0x43924c:c.instructions+=1;goto B43924c;
case 0x439252:goto L439252;
case 0x439255:c.instructions+=4;goto B439255;
case 0x439257:c.instructions+=3;goto B439257;
case 0x43925a:c.instructions+=2;goto B43925a;
case 0x43925c:c.instructions+=1;goto B43925c;
case 0x43925e:goto L43925e;
case 0x439260:c.instructions+=2;goto B439260;
case 0x439262:c.instructions+=1;goto B439262;
case 0x439267:goto L439267;
case 0x439269:c.instructions+=1;goto B439269;
case 0x43926b:goto L43926b;
case 0x43926e:c.instructions+=4;goto B43926e;
case 0x439270:c.instructions+=3;goto B439270;
case 0x439273:c.instructions+=2;goto B439273;
case 0x439275:c.instructions+=1;goto B439275;
case 0x439277:goto L439277;
case 0x43927a:c.instructions+=4;goto B43927a;
case 0x43927d:c.instructions+=3;goto B43927d;
case 0x43927f:c.instructions+=2;goto B43927f;
case 0x439282:c.instructions+=1;goto B439282;
case 0x439284:goto L439284;
case 0x439286:c.instructions+=1;goto B439286;
case 0x43928b:goto L43928b;
case 0x43928c:c.instructions+=1;goto B43928c;
case 0x43928f:goto L43928f;
case 0x439290:c.instructions+=5;goto B439290;
case 0x439291:c.instructions+=4;goto B439291;
case 0x439292:c.instructions+=3;goto B439292;
case 0x439294:c.instructions+=2;goto B439294;
case 0x439299:c.instructions+=1;goto B439299;
case 0x4392a0:goto L4392a0;
case 0x4392a3:c.instructions+=2;goto B4392a3;
case 0x4392a5:c.instructions+=1;goto B4392a5;
case 0x4392a7:goto L4392a7;
case 0x4392aa:c.instructions+=1;goto B4392aa;
case 0x4392ac:goto L4392ac;
case 0x4392b0:c.instructions+=3;goto B4392b0;
case 0x4392b1:c.instructions+=2;goto B4392b1;
case 0x4392b3:c.instructions+=1;goto B4392b3;
case 0x4392b8:goto L4392b8;
case 0x4392ba:c.instructions+=2;goto B4392ba;
case 0x4392bc:c.instructions+=1;goto B4392bc;
case 0x4392c1:goto L4392c1;
case 0x4392c2:c.instructions+=3;goto B4392c2;
case 0x4392c3:c.instructions+=2;goto B4392c3;
case 0x4392c5:c.instructions+=1;goto B4392c5;
case 0x4392ca:goto L4392ca;
case 0x4392cd:c.instructions+=3;goto B4392cd;
case 0x4392ce:c.instructions+=2;goto B4392ce;
case 0x4392d4:c.instructions+=1;goto B4392d4;
case 0x4392d6:goto L4392d6;
case 0x4392d7:c.instructions+=2;goto B4392d7;
case 0x4392d8:c.instructions+=1;goto B4392d8;
case 0x4392d9:goto L4392d9;
case 0x4392da:c.instructions+=1;goto B4392da;
case 0x4392e0:goto L4392e0;
case 0x4392e1:c.instructions+=4;goto B4392e1;
case 0x4392e3:c.instructions+=3;goto B4392e3;
case 0x4392e5:c.instructions+=2;goto B4392e5;
case 0x4392e8:c.instructions+=1;goto B4392e8;
case 0x4392ee:goto L4392ee;
case 0x4392f1:c.instructions+=5;goto B4392f1;
case 0x4392f2:c.instructions+=4;goto B4392f2;
case 0x4392f5:c.instructions+=3;goto B4392f5;
case 0x4392fc:c.instructions+=2;goto B4392fc;
case 0x4392fe:c.instructions+=1;goto B4392fe;
case 0x439304:goto L439304;
case 0x439307:c.instructions+=3;goto B439307;
case 0x43930a:c.instructions+=2;goto B43930a;
case 0x43930d:c.instructions+=1;goto B43930d;
case 0x439313:goto L439313;
case 0x43931a:goto L43931a;
case 0x43931d:c.instructions+=8;goto B43931d;
case 0x439320:c.instructions+=7;goto B439320;
case 0x439326:c.instructions+=6;goto B439326;
case 0x439329:c.instructions+=5;goto B439329;
case 0x43932f:c.instructions+=4;goto B43932f;
case 0x439332:c.instructions+=3;goto B439332;
case 0x439338:c.instructions+=2;goto B439338;
case 0x439339:c.instructions+=1;goto B439339;
case 0x43933a:goto L43933a;
case 0x43933d:c.instructions+=8;goto B43933d;
case 0x439340:c.instructions+=7;goto B439340;
case 0x439346:c.instructions+=6;goto B439346;
case 0x439349:c.instructions+=5;goto B439349;
case 0x43934f:c.instructions+=4;goto B43934f;
case 0x439352:c.instructions+=3;goto B439352;
case 0x439358:c.instructions+=2;goto B439358;
case 0x439359:c.instructions+=1;goto B439359;
case 0x43935a:goto L43935a;
case 0x43935d:c.instructions+=8;goto B43935d;
case 0x439360:c.instructions+=7;goto B439360;
case 0x439366:c.instructions+=6;goto B439366;
case 0x439369:c.instructions+=5;goto B439369;
case 0x43936f:c.instructions+=4;goto B43936f;
case 0x439372:c.instructions+=3;goto B439372;
case 0x439378:c.instructions+=2;goto B439378;
case 0x439379:c.instructions+=1;goto B439379;
case 0x43937a:goto L43937a;
case 0x43937d:c.instructions+=8;goto B43937d;
case 0x439380:c.instructions+=7;goto B439380;
case 0x439386:c.instructions+=6;goto B439386;
case 0x439389:c.instructions+=5;goto B439389;
case 0x43938f:c.instructions+=4;goto B43938f;
case 0x439392:c.instructions+=3;goto B439392;
case 0x439398:c.instructions+=2;goto B439398;
case 0x439399:c.instructions+=1;goto B439399;
case 0x43939a:goto L43939a;
case 0x43939d:c.instructions+=1;goto B43939d;
case 0x43939f:goto L43939f;
case 0x4393a2:c.instructions+=5;goto B4393a2;
case 0x4393a3:c.instructions+=4;goto B4393a3;
case 0x4393a6:c.instructions+=3;goto B4393a6;
case 0x4393ad:c.instructions+=2;goto B4393ad;
case 0x4393af:c.instructions+=1;goto B4393af;
case 0x4393b5:goto L4393b5;
case 0x4393bb:c.instructions+=7;goto B4393bb;
case 0x4393be:c.instructions+=6;goto B4393be;
case 0x4393c2:c.instructions+=5;goto B4393c2;
case 0x4393c5:c.instructions+=4;goto B4393c5;
case 0x4393c8:c.instructions+=3;goto B4393c8;
case 0x4393cf:c.instructions+=2;goto B4393cf;
case 0x4393d0:c.instructions+=1;goto B4393d0;
case 0x4393d1:goto L4393d1;
case 0x4393d4:c.instructions+=1;goto B4393d4;
case 0x4393d6:goto L4393d6;
case 0x4393d9:c.instructions+=5;goto B4393d9;
case 0x4393da:c.instructions+=4;goto B4393da;
case 0x4393dd:c.instructions+=3;goto B4393dd;
case 0x4393e4:c.instructions+=2;goto B4393e4;
case 0x4393e6:c.instructions+=1;goto B4393e6;
case 0x4393ec:goto L4393ec;
case 0x4393f2:c.instructions+=7;goto B4393f2;
case 0x4393f5:c.instructions+=6;goto B4393f5;
case 0x4393f9:c.instructions+=5;goto B4393f9;
case 0x4393fc:c.instructions+=4;goto B4393fc;
case 0x4393ff:c.instructions+=3;goto B4393ff;
case 0x439406:c.instructions+=2;goto B439406;
case 0x439407:c.instructions+=1;goto B439407;
case 0x439408:goto L439408;
case 0x43940b:c.instructions+=1;goto B43940b;
case 0x43940d:goto L43940d;
case 0x439410:c.instructions+=5;goto B439410;
case 0x439411:c.instructions+=4;goto B439411;
case 0x439414:c.instructions+=3;goto B439414;
case 0x43941b:c.instructions+=2;goto B43941b;
case 0x43941d:c.instructions+=1;goto B43941d;
case 0x439423:goto L439423;
case 0x439429:c.instructions+=3;goto B439429;
case 0x43942d:c.instructions+=2;goto B43942d;
case 0x439431:c.instructions+=1;goto B439431;
case 0x439437:goto L439437;
case 0x43943a:c.instructions+=3;goto B43943a;
case 0x43943d:c.instructions+=2;goto B43943d;
case 0x43943e:c.instructions+=1;goto B43943e;
case 0x439443:goto L439443;
case 0x439444:c.instructions+=1;goto B439444;
case 0x439445:goto L439445;
case 0x43944a:c.instructions+=2;goto B43944a;
case 0x43944c:c.instructions+=1;goto B43944c;
case 0x43944e:goto L43944e;
case 0x439451:c.instructions+=5;goto B439451;
case 0x439452:c.instructions+=4;goto B439452;
case 0x439455:c.instructions+=3;goto B439455;
case 0x43945c:c.instructions+=2;goto B43945c;
case 0x43945e:c.instructions+=1;goto B43945e;
case 0x439464:goto L439464;
case 0x43946a:c.instructions+=3;goto B43946a;
case 0x43946e:c.instructions+=2;goto B43946e;
case 0x439471:c.instructions+=1;goto B439471;
case 0x439477:goto L439477;
case 0x43947a:c.instructions+=3;goto B43947a;
case 0x43947b:c.instructions+=2;goto B43947b;
case 0x43947e:c.instructions+=1;goto B43947e;
case 0x439483:goto L439483;
case 0x439484:c.instructions+=1;goto B439484;
case 0x439485:goto L439485;
case 0x439488:c.instructions+=1;goto B439488;
case 0x43948a:goto L43948a;
case 0x43948d:c.instructions+=5;goto B43948d;
case 0x43948e:c.instructions+=4;goto B43948e;
case 0x439491:c.instructions+=3;goto B439491;
case 0x439498:c.instructions+=2;goto B439498;
case 0x43949a:c.instructions+=1;goto B43949a;
case 0x4394a0:goto L4394a0;
case 0x4394a6:c.instructions+=3;goto B4394a6;
case 0x4394aa:c.instructions+=2;goto B4394aa;
case 0x4394ad:c.instructions+=1;goto B4394ad;
case 0x4394b3:goto L4394b3;
case 0x4394b6:c.instructions+=5;goto B4394b6;
case 0x4394b9:c.instructions+=4;goto B4394b9;
case 0x4394ba:c.instructions+=3;goto B4394ba;
case 0x4394bd:c.instructions+=2;goto B4394bd;
case 0x4394be:c.instructions+=1;goto B4394be;
case 0x4394c3:goto L4394c3;
case 0x4394c4:c.instructions+=1;goto B4394c4;
case 0x4394c5:goto L4394c5;
case 0x4394c8:c.instructions+=1;goto B4394c8;
case 0x4394ca:goto L4394ca;
case 0x4394cf:c.instructions+=1;goto B4394cf;
case 0x4394d0:goto L4394d0;
case 0x4394d1:c.instructions+=1;goto B4394d1;
case 0x4394d6:goto L4394d6;
case 0x4394d9:c.instructions+=3;goto B4394d9;
case 0x4394dc:c.instructions+=2;goto B4394dc;
case 0x4394de:c.instructions+=1;goto B4394de;
case 0x4394e0:goto L4394e0;
case 0x4394e3:c.instructions+=2;goto B4394e3;
case 0x4394e5:c.instructions+=1;goto B4394e5;
case 0x4394ea:goto L4394ea;
case 0x4394eb:c.instructions+=2;goto B4394eb;
case 0x4394ee:c.instructions+=1;goto B4394ee;
case 0x4394f0:goto L4394f0;
case 0x4394f1:c.instructions+=1;goto B4394f1;
case 0x4394f2:goto L4394f2;
case 0x4394f5:c.instructions+=1;goto B4394f5;
case 0x4394fb:goto L4394fb;
case 0x4394fe:c.instructions+=1;goto B4394fe;
case 0x439500:goto L439500;
case 0x439503:c.instructions+=2;goto B439503;
case 0x439504:c.instructions+=1;goto B439504;
case 0x439506:goto L439506;
case 0x439507:c.instructions+=1;goto B439507;
case 0x43950d:goto L43950d;
case 0x439510:c.instructions+=9;goto B439510;
case 0x439513:c.instructions+=8;goto B439513;
case 0x439516:c.instructions+=7;goto B439516;
case 0x439517:c.instructions+=6;goto B439517;
case 0x43951c:c.instructions+=5;goto B43951c;
case 0x43951d:c.instructions+=4;goto B43951d;
case 0x43951f:c.instructions+=3;goto B43951f;
case 0x439520:c.instructions+=2;goto B439520;
case 0x439521:c.instructions+=1;goto B439521;
case 0x439526:goto L439526;
case 0x439529:c.instructions+=2;goto B439529;
case 0x43952a:c.instructions+=1;goto B43952a;
case 0x43952b:goto L43952b;
case 0x43952e:c.instructions+=8;goto B43952e;
case 0x439531:c.instructions+=7;goto B439531;
case 0x439536:c.instructions+=6;goto B439536;
case 0x439537:c.instructions+=5;goto B439537;
case 0x439538:c.instructions+=4;goto B439538;
case 0x43953a:c.instructions+=3;goto B43953a;
case 0x43953c:c.instructions+=2;goto B43953c;
case 0x43953d:c.instructions+=1;goto B43953d;
case 0x439542:goto L439542;
case 0x439545:c.instructions+=2;goto B439545;
case 0x439546:c.instructions+=1;goto B439546;
case 0x439547:goto L439547;
case 0x43954a:c.instructions+=3;goto B43954a;
case 0x43954b:c.instructions+=2;goto B43954b;
case 0x43954c:c.instructions+=1;goto B43954c;
case 0x43954e:goto L43954e;
case 0x439551:c.instructions+=5;goto B439551;
case 0x439552:c.instructions+=4;goto B439552;
case 0x439555:c.instructions+=3;goto B439555;
case 0x43955c:c.instructions+=2;goto B43955c;
case 0x43955e:c.instructions+=1;goto B43955e;
case 0x439560:goto L439560;
case 0x439566:c.instructions+=3;goto B439566;
case 0x43956a:c.instructions+=2;goto B43956a;
case 0x43956c:c.instructions+=1;goto B43956c;
case 0x43956e:goto L43956e;
case 0x439574:c.instructions+=2;goto B439574;
case 0x439576:c.instructions+=1;goto B439576;
case 0x439578:goto L439578;
case 0x43957b:c.instructions+=2;goto B43957b;
case 0x43957d:c.instructions+=1;goto B43957d;
case 0x439582:goto L439582;
case 0x439583:c.instructions+=5;goto B439583;
case 0x439586:c.instructions+=4;goto B439586;
case 0x439587:c.instructions+=3;goto B439587;
case 0x439589:c.instructions+=2;goto B439589;
case 0x43958b:c.instructions+=1;goto B43958b;
case 0x43958e:goto L43958e;
case 0x43958f:c.instructions+=3;goto B43958f;
case 0x439590:c.instructions+=2;goto B439590;
case 0x439591:c.instructions+=1;goto B439591;
case 0x439592:goto L439592;
case 0x439595:c.instructions+=1;goto B439595;
case 0x439597:goto L439597;
case 0x43959a:c.instructions+=5;goto B43959a;
case 0x43959b:c.instructions+=4;goto B43959b;
case 0x43959e:c.instructions+=3;goto B43959e;
case 0x4395a5:c.instructions+=2;goto B4395a5;
case 0x4395a7:c.instructions+=1;goto B4395a7;
case 0x4395a9:goto L4395a9;
case 0x4395af:c.instructions+=3;goto B4395af;
case 0x4395b3:c.instructions+=2;goto B4395b3;
case 0x4395b5:c.instructions+=1;goto B4395b5;
case 0x4395b7:goto L4395b7;
case 0x4395bd:c.instructions+=2;goto B4395bd;
case 0x4395bf:c.instructions+=1;goto B4395bf;
case 0x4395c1:goto L4395c1;
case 0x4395c4:c.instructions+=2;goto B4395c4;
case 0x4395c6:c.instructions+=1;goto B4395c6;
case 0x4395cb:goto L4395cb;
case 0x4395ce:c.instructions+=2;goto B4395ce;
case 0x4395cf:c.instructions+=1;goto B4395cf;
case 0x4395d4:goto L4395d4;
case 0x4395d5:c.instructions+=3;goto B4395d5;
case 0x4395d7:c.instructions+=2;goto B4395d7;
case 0x4395d9:c.instructions+=1;goto B4395d9;
case 0x4395dc:goto L4395dc;
case 0x4395dd:c.instructions+=1;goto B4395dd;
case 0x4395de:goto L4395de;
case 0x4395df:c.instructions+=1;goto B4395df;
case 0x4395f0:goto L4395f0;
case 0x4395f4:c.instructions+=9;goto B4395f4;
case 0x4395f7:c.instructions+=8;goto B4395f7;
case 0x4395fa:c.instructions+=7;goto B4395fa;
case 0x4395fb:c.instructions+=6;goto B4395fb;
case 0x4395fe:c.instructions+=5;goto B4395fe;
case 0x439600:c.instructions+=4;goto B439600;
case 0x439603:c.instructions+=3;goto B439603;
case 0x439604:c.instructions+=2;goto B439604;
case 0x439606:c.instructions+=1;goto B439606;
case 0x439608:goto L439608;
case 0x439609:c.instructions+=8;goto B439609;
case 0x43960c:c.instructions+=7;goto B43960c;
case 0x43960f:c.instructions+=6;goto B43960f;
case 0x439615:c.instructions+=5;goto B439615;
case 0x439617:c.instructions+=4;goto B439617;
case 0x439619:c.instructions+=3;goto B439619;
case 0x43961b:c.instructions+=2;goto B43961b;
case 0x43961e:c.instructions+=1;goto B43961e;
case 0x439620:goto L439620;
case 0x439623:c.instructions+=2;goto B439623;
case 0x439625:c.instructions+=1;goto B439625;
case 0x439627:goto L439627;
case 0x439628:c.instructions+=9;goto B439628;
case 0x43962b:c.instructions+=8;goto B43962b;
case 0x43962c:c.instructions+=7;goto B43962c;
case 0x43962f:c.instructions+=6;goto B43962f;
case 0x439632:c.instructions+=5;goto B439632;
case 0x439638:c.instructions+=4;goto B439638;
case 0x43963b:c.instructions+=3;goto B43963b;
case 0x43963d:c.instructions+=2;goto B43963d;
case 0x439640:c.instructions+=1;goto B439640;
case 0x439642:goto L439642;
case 0x439644:goto L439644;
case 0x439646:goto L439646;
case 0x439649:c.instructions+=2;goto B439649;
case 0x43964b:c.instructions+=1;goto B43964b;
case 0x43964d:goto L43964d;
case 0x43964f:c.instructions+=5;goto B43964f;
case 0x439652:c.instructions+=4;goto B439652;
case 0x439654:c.instructions+=3;goto B439654;
case 0x439658:c.instructions+=2;goto B439658;
case 0x43965a:c.instructions+=1;goto B43965a;
case 0x439660:goto L439660;
case 0x439662:c.instructions+=1;goto B439662;
case 0x439667:goto L439667;
case 0x43966a:c.instructions+=2;goto B43966a;
case 0x43966b:c.instructions+=1;goto B43966b;
case 0x43966d:goto L43966d;
case 0x439672:c.instructions+=1;goto B439672;
case 0x439674:goto L439674;
case 0x439676:c.instructions+=2;goto B439676;
case 0x439678:c.instructions+=1;goto B439678;
case 0x43967e:goto L43967e;
case 0x439684:c.instructions+=4;goto B439684;
case 0x43968a:c.instructions+=3;goto B43968a;
case 0x43968c:c.instructions+=2;goto B43968c;
case 0x43968f:c.instructions+=1;goto B43968f;
case 0x439691:goto L439691;
case 0x439697:c.instructions+=9;goto B439697;
case 0x43969d:c.instructions+=8;goto B43969d;
case 0x43969f:c.instructions+=7;goto B43969f;
case 0x4396a0:c.instructions+=6;goto B4396a0;
case 0x4396a6:c.instructions+=5;goto B4396a6;
case 0x4396a7:c.instructions+=4;goto B4396a7;
case 0x4396ac:c.instructions+=3;goto B4396ac;
case 0x4396b0:c.instructions+=2;goto B4396b0;
case 0x4396b1:c.instructions+=1;goto B4396b1;
case 0x4396b6:goto L4396b6;
case 0x4396bc:c.instructions+=4;goto B4396bc;
case 0x4396c2:c.instructions+=3;goto B4396c2;
case 0x4396c4:c.instructions+=2;goto B4396c4;
case 0x4396c7:c.instructions+=1;goto B4396c7;
case 0x4396c9:goto L4396c9;
case 0x4396cf:c.instructions+=10;goto B4396cf;
case 0x4396d5:c.instructions+=9;goto B4396d5;
case 0x4396db:c.instructions+=8;goto B4396db;
case 0x4396dd:c.instructions+=7;goto B4396dd;
case 0x4396de:c.instructions+=6;goto B4396de;
case 0x4396e0:c.instructions+=5;goto B4396e0;
case 0x4396e1:c.instructions+=4;goto B4396e1;
case 0x4396e7:c.instructions+=3;goto B4396e7;
case 0x4396eb:c.instructions+=2;goto B4396eb;
case 0x4396ec:c.instructions+=1;goto B4396ec;
case 0x4396f1:goto L4396f1;
case 0x4396f7:c.instructions+=4;goto B4396f7;
case 0x4396fd:c.instructions+=3;goto B4396fd;
case 0x4396ff:c.instructions+=2;goto B4396ff;
case 0x439702:c.instructions+=1;goto B439702;
case 0x439704:goto L439704;
case 0x43970a:c.instructions+=10;goto B43970a;
case 0x439710:c.instructions+=9;goto B439710;
case 0x439716:c.instructions+=8;goto B439716;
case 0x439718:c.instructions+=7;goto B439718;
case 0x439719:c.instructions+=6;goto B439719;
case 0x43971b:c.instructions+=5;goto B43971b;
case 0x43971c:c.instructions+=4;goto B43971c;
case 0x439722:c.instructions+=3;goto B439722;
case 0x439726:c.instructions+=2;goto B439726;
case 0x439727:c.instructions+=1;goto B439727;
case 0x43972c:goto L43972c;
case 0x439732:c.instructions+=4;goto B439732;
case 0x439738:c.instructions+=3;goto B439738;
case 0x43973a:c.instructions+=2;goto B43973a;
case 0x43973d:c.instructions+=1;goto B43973d;
case 0x43973f:goto L43973f;
case 0x439745:c.instructions+=10;goto B439745;
case 0x43974b:c.instructions+=9;goto B43974b;
case 0x439751:c.instructions+=8;goto B439751;
case 0x439753:c.instructions+=7;goto B439753;
case 0x439754:c.instructions+=6;goto B439754;
case 0x439756:c.instructions+=5;goto B439756;
case 0x439757:c.instructions+=4;goto B439757;
case 0x43975c:c.instructions+=3;goto B43975c;
case 0x43975d:c.instructions+=2;goto B43975d;
case 0x439761:c.instructions+=1;goto B439761;
case 0x439766:goto L439766;
case 0x439769:c.instructions+=3;goto B439769;
case 0x43976c:c.instructions+=2;goto B43976c;
case 0x439772:c.instructions+=1;goto B439772;
case 0x439778:goto L439778;
case 0x439779:c.instructions+=2;goto B439779;
case 0x43977a:c.instructions+=1;goto B43977a;
case 0x439780:goto L439780;
case 0x439782:c.instructions+=29;goto B439782;
case 0x439787:c.instructions+=28;goto B439787;
case 0x43978d:c.instructions+=27;goto B43978d;
case 0x43978e:c.instructions+=26;goto B43978e;
case 0x439795:c.instructions+=25;goto B439795;
case 0x439798:c.instructions+=24;goto B439798;
case 0x439799:c.instructions+=23;goto B439799;
case 0x43979a:c.instructions+=22;goto B43979a;
case 0x43979b:c.instructions+=21;goto B43979b;
case 0x43979d:c.instructions+=20;goto B43979d;
case 0x43979e:c.instructions+=19;goto B43979e;
case 0x4397a2:c.instructions+=18;goto B4397a2;
case 0x4397a4:c.instructions+=17;goto B4397a4;
case 0x4397a7:c.instructions+=16;goto B4397a7;
case 0x4397aa:c.instructions+=15;goto B4397aa;
case 0x4397ad:c.instructions+=14;goto B4397ad;
case 0x4397af:c.instructions+=13;goto B4397af;
case 0x4397b1:c.instructions+=12;goto B4397b1;
case 0x4397b4:c.instructions+=11;goto B4397b4;
case 0x4397b8:c.instructions+=10;goto B4397b8;
case 0x4397bf:c.instructions+=9;goto B4397bf;
case 0x4397c3:c.instructions+=8;goto B4397c3;
case 0x4397c8:c.instructions+=7;goto B4397c8;
case 0x4397cd:c.instructions+=6;goto B4397cd;
case 0x4397cf:c.instructions+=5;goto B4397cf;
case 0x4397d1:c.instructions+=4;goto B4397d1;
case 0x4397d4:c.instructions+=3;goto B4397d4;
case 0x4397d5:c.instructions+=2;goto B4397d5;
case 0x4397da:c.instructions+=1;goto B4397da;
case 0x4397df:goto L4397df;
case 0x4397e4:c.instructions+=2;goto B4397e4;
case 0x4397e9:c.instructions+=1;goto B4397e9;
case 0x4397ee:goto L4397ee;
case 0x4397ef:c.instructions+=2;goto B4397ef;
case 0x4397f0:c.instructions+=1;goto B4397f0;
case 0x4397f5:goto L4397f5;
case 0x4397f7:c.instructions+=4;goto B4397f7;
case 0x4397fa:c.instructions+=3;goto B4397fa;
case 0x4397ff:c.instructions+=2;goto B4397ff;
case 0x439800:c.instructions+=1;goto B439800;
case 0x439805:goto L439805;
case 0x43980b:c.instructions+=9;goto B43980b;
case 0x43980e:c.instructions+=8;goto B43980e;
case 0x439810:c.instructions+=7;goto B439810;
case 0x439814:c.instructions+=6;goto B439814;
case 0x439818:c.instructions+=5;goto B439818;
case 0x43981b:c.instructions+=4;goto B43981b;
case 0x43981f:c.instructions+=3;goto B43981f;
case 0x439822:c.instructions+=2;goto B439822;
case 0x439825:c.instructions+=1;goto B439825;
case 0x439827:goto L439827;
case 0x439829:c.instructions+=1;goto B439829;
case 0x439830:goto L439830;
case 0x439834:c.instructions+=21;goto B439834;
case 0x439836:c.instructions+=20;goto B439836;
case 0x43983a:c.instructions+=19;goto B43983a;
case 0x43983e:c.instructions+=18;goto B43983e;
case 0x439844:c.instructions+=17;goto B439844;
case 0x439848:c.instructions+=16;goto B439848;
case 0x43984b:c.instructions+=15;goto B43984b;
case 0x43984e:c.instructions+=14;goto B43984e;
case 0x439851:c.instructions+=13;goto B439851;
case 0x439853:c.instructions+=12;goto B439853;
case 0x439856:c.instructions+=11;goto B439856;
case 0x439858:c.instructions+=10;goto B439858;
case 0x43985c:c.instructions+=9;goto B43985c;
case 0x43985f:c.instructions+=8;goto B43985f;
case 0x439861:c.instructions+=7;goto B439861;
case 0x439862:c.instructions+=6;goto B439862;
case 0x439865:c.instructions+=5;goto B439865;
case 0x439868:c.instructions+=4;goto B439868;
case 0x43986b:c.instructions+=3;goto B43986b;
case 0x43986f:c.instructions+=2;goto B43986f;
case 0x439873:c.instructions+=1;goto B439873;
case 0x439875:goto L439875;
case 0x439876:c.instructions+=1;goto B439876;
case 0x43987b:goto L43987b;
case 0x43987f:c.instructions+=9;goto B43987f;
case 0x439882:c.instructions+=8;goto B439882;
case 0x439883:c.instructions+=7;goto B439883;
case 0x439885:c.instructions+=6;goto B439885;
case 0x439886:c.instructions+=5;goto B439886;
case 0x439887:c.instructions+=4;goto B439887;
case 0x439888:c.instructions+=3;goto B439888;
case 0x43988f:c.instructions+=2;goto B43988f;
case 0x439892:c.instructions+=1;goto B439892;
case 0x4398a0:goto L4398a0;
case 0x4398a2:c.instructions+=9;goto B4398a2;
case 0x4398a7:c.instructions+=8;goto B4398a7;
case 0x4398ad:c.instructions+=7;goto B4398ad;
case 0x4398ae:c.instructions+=6;goto B4398ae;
case 0x4398b5:c.instructions+=5;goto B4398b5;
case 0x4398b6:c.instructions+=4;goto B4398b6;
case 0x4398b8:c.instructions+=3;goto B4398b8;
case 0x4398ba:c.instructions+=2;goto B4398ba;
case 0x4398bf:c.instructions+=1;goto B4398bf;
case 0x4398c4:goto L4398c4;
case 0x4398c7:c.instructions+=2;goto B4398c7;
case 0x4398c8:c.instructions+=1;goto B4398c8;
case 0x4398cd:goto L4398cd;
case 0x4398d2:c.instructions+=4;goto B4398d2;
case 0x4398d7:c.instructions+=3;goto B4398d7;
case 0x4398da:c.instructions+=2;goto B4398da;
case 0x4398dc:c.instructions+=1;goto B4398dc;
case 0x4398de:goto L4398de;
case 0x4398e3:c.instructions+=1;goto B4398e3;
case 0x4398e8:goto L4398e8;
case 0x4398eb:c.instructions+=4;goto B4398eb;
case 0x4398ef:c.instructions+=3;goto B4398ef;
case 0x4398f1:c.instructions+=2;goto B4398f1;
case 0x4398f9:c.instructions+=1;goto B4398f9;
case 0x4398fb:goto L4398fb;
case 0x4398fd:c.instructions+=1;goto B4398fd;
case 0x439902:goto L439902;
case 0x439907:c.instructions+=4;goto B439907;
case 0x43990b:c.instructions+=3;goto B43990b;
case 0x439912:c.instructions+=2;goto B439912;
case 0x439915:c.instructions+=1;goto B439915;
case 0x439916:goto L439916;
case 0x439918:c.instructions+=1;goto B439918;
case 0x43991d:goto L43991d;
case 0x439921:c.instructions+=3;goto B439921;
case 0x439928:c.instructions+=2;goto B439928;
case 0x43992b:c.instructions+=1;goto B43992b;
case 0x439930:goto L439930;
case 0x439936:c.instructions+=3;goto B439936;
case 0x439938:c.instructions+=2;goto B439938;
case 0x439942:c.instructions+=1;goto B439942;
case 0x439944:goto L439944;
case 0x439945:c.instructions+=2;goto B439945;
case 0x439947:c.instructions+=1;goto B439947;
case 0x43994c:goto L43994c;
case 0x43994d:c.instructions+=1;goto B43994d;
case 0x439952:goto L439952;
case 0x439955:c.instructions+=2;goto B439955;
case 0x43995f:c.instructions+=1;goto B43995f;
case 0x439960:goto L439960;
case 0x439970:goto L439970;
case 0x439971:c.instructions+=7;goto B439971;
case 0x439972:c.instructions+=6;goto B439972;
case 0x439973:c.instructions+=5;goto B439973;
case 0x439975:c.instructions+=4;goto B439975;
case 0x439978:c.instructions+=3;goto B439978;
case 0x43997a:c.instructions+=2;goto B43997a;
case 0x43997c:c.instructions+=1;goto B43997c;
case 0x43997e:goto L43997e;
case 0x439981:c.instructions+=3;goto B439981;
case 0x439983:c.instructions+=2;goto B439983;
case 0x439986:c.instructions+=1;goto B439986;
case 0x439988:goto L439988;
case 0x439989:c.instructions+=1;goto B439989;
case 0x43998e:goto L43998e;
case 0x439991:c.instructions+=1;goto B439991;
case 0x439994:goto L439994;
case 0x439997:c.instructions+=3;goto B439997;
case 0x439999:c.instructions+=2;goto B439999;
case 0x43999c:c.instructions+=1;goto B43999c;
case 0x43999e:goto L43999e;
case 0x4399a0:c.instructions+=2;goto B4399a0;
case 0x4399a1:c.instructions+=1;goto B4399a1;
case 0x4399a7:goto L4399a7;
case 0x4399aa:c.instructions+=1;goto B4399aa;
case 0x4399ad:goto L4399ad;
case 0x4399b0:c.instructions+=2;goto B4399b0;
case 0x4399b3:c.instructions+=1;goto B4399b3;
case 0x4399b8:goto L4399b8;
case 0x4399bb:c.instructions+=2;goto B4399bb;
case 0x4399bd:c.instructions+=1;goto B4399bd;
case 0x4399bf:goto L4399bf;
case 0x4399c1:c.instructions+=1;goto B4399c1;
case 0x4399c6:goto L4399c6;
case 0x4399cb:c.instructions+=3;goto B4399cb;
case 0x4399cc:c.instructions+=2;goto B4399cc;
case 0x4399cd:c.instructions+=1;goto B4399cd;
case 0x4399d2:goto L4399d2;
case 0x4399d5:goto L4399d5;
case 0x4399d8:goto L4399d8;
case 0x4399db:c.instructions+=2;goto B4399db;
case 0x4399dd:c.instructions+=1;goto B4399dd;
case 0x4399df:goto L4399df;
case 0x4399e1:c.instructions+=1;goto B4399e1;
case 0x4399e6:goto L4399e6;
case 0x4399ec:c.instructions+=3;goto B4399ec;
case 0x4399ed:c.instructions+=2;goto B4399ed;
case 0x4399ee:c.instructions+=1;goto B4399ee;
case 0x4399f3:goto L4399f3;
case 0x4399f6:c.instructions+=1;goto B4399f6;
case 0x4399f9:goto L4399f9;
case 0x4399fc:c.instructions+=2;goto B4399fc;
case 0x4399fe:c.instructions+=1;goto B4399fe;
case 0x439a00:goto L439a00;
case 0x439a01:c.instructions+=1;goto B439a01;
case 0x439a06:goto L439a06;
case 0x439a09:goto L439a09;
case 0x439a0a:c.instructions+=3;goto B439a0a;
case 0x439a0b:c.instructions+=2;goto B439a0b;
case 0x439a0c:c.instructions+=1;goto B439a0c;
case 0x439a10:goto L439a10;
case 0x439a11:c.instructions+=11;goto B439a11;
case 0x439a13:c.instructions+=10;goto B439a13;
case 0x439a16:c.instructions+=9;goto B439a16;
case 0x439a19:c.instructions+=8;goto B439a19;
case 0x439a1a:c.instructions+=7;goto B439a1a;
case 0x439a1b:c.instructions+=6;goto B439a1b;
case 0x439a1d:c.instructions+=5;goto B439a1d;
case 0x439a20:c.instructions+=4;goto B439a20;
case 0x439a22:c.instructions+=3;goto B439a22;
case 0x439a23:c.instructions+=2;goto B439a23;
case 0x439a26:c.instructions+=1;goto B439a26;
case 0x439a29:goto L439a29;
case 0x439a2c:c.instructions+=6;goto B439a2c;
case 0x439a2e:c.instructions+=5;goto B439a2e;
case 0x439a31:c.instructions+=4;goto B439a31;
case 0x439a34:c.instructions+=3;goto B439a34;
case 0x439a35:c.instructions+=2;goto B439a35;
case 0x439a3a:c.instructions+=1;goto B439a3a;
case 0x439a3f:goto L439a3f;
case 0x439a42:c.instructions+=4;goto B439a42;
case 0x439a43:c.instructions+=3;goto B439a43;
case 0x439a44:c.instructions+=2;goto B439a44;
case 0x439a47:c.instructions+=1;goto B439a47;
case 0x439a4c:goto L439a4c;
case 0x439a4f:c.instructions+=3;goto B439a4f;
case 0x439a50:c.instructions+=2;goto B439a50;
case 0x439a53:c.instructions+=1;goto B439a53;
case 0x439a58:goto L439a58;
case 0x439a5b:c.instructions+=4;goto B439a5b;
case 0x439a5c:c.instructions+=3;goto B439a5c;
case 0x439a5e:c.instructions+=2;goto B439a5e;
case 0x439a61:c.instructions+=1;goto B439a61;
case 0x439a66:goto L439a66;
case 0x439a69:c.instructions+=5;goto B439a69;
case 0x439a6c:c.instructions+=4;goto B439a6c;
case 0x439a70:c.instructions+=3;goto B439a70;
case 0x439a71:c.instructions+=2;goto B439a71;
case 0x439a77:c.instructions+=1;goto B439a77;
case 0x439a7c:goto L439a7c;
case 0x439a7f:c.instructions+=5;goto B439a7f;
case 0x439a83:c.instructions+=4;goto B439a83;
case 0x439a84:c.instructions+=3;goto B439a84;
case 0x439a87:c.instructions+=2;goto B439a87;
case 0x439a88:c.instructions+=1;goto B439a88;
case 0x439a8d:goto L439a8d;
case 0x439a93:c.instructions+=3;goto B439a93;
case 0x439a96:c.instructions+=2;goto B439a96;
case 0x439a98:c.instructions+=1;goto B439a98;
case 0x439a9a:goto L439a9a;
case 0x439a9c:c.instructions+=1;goto B439a9c;
case 0x439aa1:goto L439aa1;
case 0x439aa7:c.instructions+=2;goto B439aa7;
case 0x439aa8:c.instructions+=1;goto B439aa8;
case 0x439aad:goto L439aad;
case 0x439ab0:c.instructions+=2;goto B439ab0;
case 0x439ab2:c.instructions+=1;goto B439ab2;
case 0x439ab4:goto L439ab4;
case 0x439ab6:c.instructions+=1;goto B439ab6;
case 0x439abb:goto L439abb;
case 0x439abd:goto L439abd;
case 0x439abf:goto L439abf;
case 0x439ac2:c.instructions+=12;goto B439ac2;
case 0x439ac5:c.instructions+=11;goto B439ac5;
case 0x439acb:c.instructions+=10;goto B439acb;
case 0x439ace:c.instructions+=9;goto B439ace;
case 0x439ad1:c.instructions+=8;goto B439ad1;
case 0x439ad6:c.instructions+=7;goto B439ad6;
case 0x439ad9:c.instructions+=6;goto B439ad9;
case 0x439adc:c.instructions+=5;goto B439adc;
case 0x439adf:c.instructions+=4;goto B439adf;
case 0x439ae5:c.instructions+=3;goto B439ae5;
case 0x439ae7:c.instructions+=2;goto B439ae7;
case 0x439aea:c.instructions+=1;goto B439aea;
case 0x439aec:goto L439aec;
case 0x439aef:goto L439aef;
case 0x439af2:c.instructions+=6;goto B439af2;
case 0x439af9:c.instructions+=5;goto B439af9;
case 0x439b00:c.instructions+=4;goto B439b00;
case 0x439b03:c.instructions+=3;goto B439b03;
case 0x439b08:c.instructions+=2;goto B439b08;
case 0x439b0b:c.instructions+=1;goto B439b0b;
case 0x439b10:goto L439b10;
case 0x439b11:c.instructions+=1;goto B439b11;
case 0x439b16:goto L439b16;
case 0x439b19:c.instructions+=4;goto B439b19;
case 0x439b1a:c.instructions+=3;goto B439b1a;
case 0x439b1c:c.instructions+=2;goto B439b1c;
case 0x439b20:c.instructions+=1;goto B439b20;
case 0x439b25:goto L439b25;
case 0x439b28:c.instructions+=5;goto B439b28;
case 0x439b2c:c.instructions+=4;goto B439b2c;
case 0x439b2f:c.instructions+=3;goto B439b2f;
case 0x439b30:c.instructions+=2;goto B439b30;
case 0x439b35:c.instructions+=1;goto B439b35;
case 0x439b3a:goto L439b3a;
case 0x439b3d:c.instructions+=3;goto B439b3d;
case 0x439b3e:c.instructions+=2;goto B439b3e;
case 0x439b3f:c.instructions+=1;goto B439b3f;
case 0x439b44:goto L439b44;
case 0x439b45:c.instructions+=2;goto B439b45;
case 0x439b4a:c.instructions+=1;goto B439b4a;
case 0x439b4f:goto L439b4f;
case 0x439b51:c.instructions+=4;goto B439b51;
case 0x439b54:c.instructions+=3;goto B439b54;
case 0x439b55:c.instructions+=2;goto B439b55;
case 0x439b5a:c.instructions+=1;goto B439b5a;
case 0x439b5f:goto L439b5f;
case 0x439b62:c.instructions+=3;goto B439b62;
case 0x439b63:c.instructions+=2;goto B439b63;
case 0x439b64:c.instructions+=1;goto B439b64;
case 0x439b69:goto L439b69;
case 0x439b6a:c.instructions+=2;goto B439b6a;
case 0x439b6f:c.instructions+=1;goto B439b6f;
case 0x439b74:goto L439b74;
case 0x439b77:c.instructions+=4;goto B439b77;
case 0x439b78:c.instructions+=3;goto B439b78;
case 0x439b7d:c.instructions+=2;goto B439b7d;
case 0x439b81:c.instructions+=1;goto B439b81;
case 0x439b86:goto L439b86;
case 0x439b87:c.instructions+=3;goto B439b87;
case 0x439b8a:c.instructions+=2;goto B439b8a;
case 0x439b8b:c.instructions+=1;goto B439b8b;
case 0x439b90:goto L439b90;
case 0x439b93:c.instructions+=3;goto B439b93;
case 0x439b94:c.instructions+=2;goto B439b94;
case 0x439b99:c.instructions+=1;goto B439b99;
case 0x439b9e:goto L439b9e;
case 0x439ba1:c.instructions+=5;goto B439ba1;
case 0x439ba4:c.instructions+=4;goto B439ba4;
case 0x439ba6:c.instructions+=3;goto B439ba6;
case 0x439ba7:c.instructions+=2;goto B439ba7;
case 0x439ba8:c.instructions+=1;goto B439ba8;
case 0x439bad:goto L439bad;
case 0x439bb1:c.instructions+=4;goto B439bb1;
case 0x439bb3:c.instructions+=3;goto B439bb3;
case 0x439bb4:c.instructions+=2;goto B439bb4;
case 0x439bb7:c.instructions+=1;goto B439bb7;
case 0x439bbc:goto L439bbc;
case 0x439bbf:c.instructions+=2;goto B439bbf;
case 0x439bc2:c.instructions+=1;goto B439bc2;
case 0x439bc4:goto L439bc4;
case 0x439bc8:c.instructions+=1;goto B439bc8;
case 0x439bca:goto L439bca;
case 0x439bcd:c.instructions+=3;goto B439bcd;
case 0x439bcf:c.instructions+=2;goto B439bcf;
case 0x439bd2:c.instructions+=1;goto B439bd2;
case 0x439bd4:goto L439bd4;
case 0x439bd5:c.instructions+=1;goto B439bd5;
case 0x439bda:goto L439bda;
case 0x439bdd:c.instructions+=1;goto B439bdd;
case 0x439be0:goto L439be0;
case 0x439be3:c.instructions+=3;goto B439be3;
case 0x439be5:c.instructions+=2;goto B439be5;
case 0x439be8:c.instructions+=1;goto B439be8;
case 0x439bea:goto L439bea;
case 0x439bec:c.instructions+=2;goto B439bec;
case 0x439bed:c.instructions+=1;goto B439bed;
case 0x439bf3:goto L439bf3;
case 0x439bf6:c.instructions+=1;goto B439bf6;
case 0x439bf9:goto L439bf9;
case 0x439bfc:c.instructions+=2;goto B439bfc;
case 0x439bff:c.instructions+=1;goto B439bff;
case 0x439c04:goto L439c04;
case 0x439c07:c.instructions+=2;goto B439c07;
case 0x439c09:c.instructions+=1;goto B439c09;
case 0x439c0b:goto L439c0b;
case 0x439c0d:c.instructions+=1;goto B439c0d;
case 0x439c12:goto L439c12;
case 0x439c18:c.instructions+=3;goto B439c18;
case 0x439c19:c.instructions+=2;goto B439c19;
case 0x439c1a:c.instructions+=1;goto B439c1a;
case 0x439c1f:goto L439c1f;
case 0x439c22:goto L439c22;
case 0x439c25:goto L439c25;
case 0x439c26:c.instructions+=6;goto B439c26;
case 0x439c27:c.instructions+=5;goto B439c27;
case 0x439c29:c.instructions+=4;goto B439c29;
case 0x439c2a:c.instructions+=3;goto B439c2a;
case 0x439c2c:c.instructions+=2;goto B439c2c;
case 0x439c2d:c.instructions+=1;goto B439c2d;
case 0x439c30:goto L439c30;
case 0x439c31:c.instructions+=7;goto B439c31;
case 0x439c32:c.instructions+=6;goto B439c32;
case 0x439c33:c.instructions+=5;goto B439c33;
case 0x439c35:c.instructions+=4;goto B439c35;
case 0x439c38:c.instructions+=3;goto B439c38;
case 0x439c3a:c.instructions+=2;goto B439c3a;
case 0x439c3c:c.instructions+=1;goto B439c3c;
case 0x439c3e:goto L439c3e;
case 0x439c41:c.instructions+=3;goto B439c41;
case 0x439c43:c.instructions+=2;goto B439c43;
case 0x439c46:c.instructions+=1;goto B439c46;
case 0x439c48:goto L439c48;
case 0x439c49:c.instructions+=1;goto B439c49;
case 0x439c4e:goto L439c4e;
case 0x439c51:c.instructions+=1;goto B439c51;
case 0x439c54:goto L439c54;
case 0x439c57:c.instructions+=3;goto B439c57;
case 0x439c59:c.instructions+=2;goto B439c59;
case 0x439c5c:c.instructions+=1;goto B439c5c;
case 0x439c5e:goto L439c5e;
case 0x439c60:c.instructions+=2;goto B439c60;
case 0x439c61:c.instructions+=1;goto B439c61;
case 0x439c67:goto L439c67;
case 0x439c6a:c.instructions+=1;goto B439c6a;
case 0x439c6d:goto L439c6d;
case 0x439c70:c.instructions+=2;goto B439c70;
case 0x439c73:c.instructions+=1;goto B439c73;
case 0x439c78:goto L439c78;
case 0x439c7b:c.instructions+=2;goto B439c7b;
case 0x439c7d:c.instructions+=1;goto B439c7d;
case 0x439c7f:goto L439c7f;
case 0x439c81:c.instructions+=1;goto B439c81;
case 0x439c86:goto L439c86;
case 0x439c8b:c.instructions+=3;goto B439c8b;
case 0x439c8c:c.instructions+=2;goto B439c8c;
case 0x439c8d:c.instructions+=1;goto B439c8d;
case 0x439c92:goto L439c92;
case 0x439c95:goto L439c95;
case 0x439c98:goto L439c98;
case 0x439c9b:c.instructions+=2;goto B439c9b;
case 0x439c9d:c.instructions+=1;goto B439c9d;
case 0x439c9f:goto L439c9f;
case 0x439ca0:c.instructions+=1;goto B439ca0;
case 0x439ca5:goto L439ca5;
case 0x439ca8:goto L439ca8;
case 0x439ca9:c.instructions+=3;goto B439ca9;
case 0x439caa:c.instructions+=2;goto B439caa;
case 0x439cab:c.instructions+=1;goto B439cab;
case 0x439cb0:goto L439cb0;
case 0x439cb2:c.instructions+=15;goto B439cb2;
case 0x439cb7:c.instructions+=14;goto B439cb7;
case 0x439cbd:c.instructions+=13;goto B439cbd;
case 0x439cbe:c.instructions+=12;goto B439cbe;
case 0x439cc5:c.instructions+=11;goto B439cc5;
case 0x439cc6:c.instructions+=10;goto B439cc6;
case 0x439cc7:c.instructions+=9;goto B439cc7;
case 0x439cc8:c.instructions+=8;goto B439cc8;
case 0x439cca:c.instructions+=7;goto B439cca;
case 0x439cce:c.instructions+=6;goto B439cce;
case 0x439cd4:c.instructions+=5;goto B439cd4;
case 0x439cd7:c.instructions+=4;goto B439cd7;
case 0x439cda:c.instructions+=3;goto B439cda;
case 0x439cdc:c.instructions+=2;goto B439cdc;
case 0x439ce4:c.instructions+=1;goto B439ce4;
case 0x439ce6:goto L439ce6;
case 0x439ce9:c.instructions+=6;goto B439ce9;
case 0x439ceb:c.instructions+=5;goto B439ceb;
case 0x439cee:c.instructions+=4;goto B439cee;
case 0x439cf0:c.instructions+=3;goto B439cf0;
case 0x439cf1:c.instructions+=2;goto B439cf1;
case 0x439cf4:c.instructions+=1;goto B439cf4;
case 0x439cf9:goto L439cf9;
case 0x439cfb:c.instructions+=3;goto B439cfb;
case 0x439cfe:c.instructions+=2;goto B439cfe;
case 0x439d00:c.instructions+=1;goto B439d00;
case 0x439d02:goto L439d02;
case 0x439d05:c.instructions+=4;goto B439d05;
case 0x439d08:c.instructions+=3;goto B439d08;
case 0x439d0a:c.instructions+=2;goto B439d0a;
case 0x439d0f:c.instructions+=1;goto B439d0f;
case 0x439d11:goto L439d11;
case 0x439d13:c.instructions+=5;goto B439d13;
case 0x439d16:c.instructions+=4;goto B439d16;
case 0x439d18:c.instructions+=3;goto B439d18;
case 0x439d19:c.instructions+=2;goto B439d19;
case 0x439d1c:c.instructions+=1;goto B439d1c;
case 0x439d21:goto L439d21;
case 0x439d23:c.instructions+=3;goto B439d23;
case 0x439d26:c.instructions+=2;goto B439d26;
case 0x439d28:c.instructions+=1;goto B439d28;
case 0x439d2a:goto L439d2a;
case 0x439d2c:c.instructions+=3;goto B439d2c;
case 0x439d2e:c.instructions+=2;goto B439d2e;
case 0x439d36:c.instructions+=1;goto B439d36;
case 0x439d38:goto L439d38;
case 0x439d3a:c.instructions+=5;goto B439d3a;
case 0x439d3d:c.instructions+=4;goto B439d3d;
case 0x439d3f:c.instructions+=3;goto B439d3f;
case 0x439d40:c.instructions+=2;goto B439d40;
case 0x439d43:c.instructions+=1;goto B439d43;
case 0x439d48:goto L439d48;
case 0x439d4a:c.instructions+=3;goto B439d4a;
case 0x439d4d:c.instructions+=2;goto B439d4d;
case 0x439d4f:c.instructions+=1;goto B439d4f;
case 0x439d51:goto L439d51;
case 0x439d55:c.instructions+=5;goto B439d55;
case 0x439d56:c.instructions+=4;goto B439d56;
case 0x439d57:c.instructions+=3;goto B439d57;
case 0x439d5e:c.instructions+=2;goto B439d5e;
case 0x439d61:c.instructions+=1;goto B439d61;
case 0x439d70:goto L439d70;
case 0x439d74:c.instructions+=6;goto B439d74;
case 0x439d7a:c.instructions+=5;goto B439d7a;
case 0x439d7b:c.instructions+=4;goto B439d7b;
case 0x439d7c:c.instructions+=3;goto B439d7c;
case 0x439d7d:c.instructions+=2;goto B439d7d;
case 0x439d7e:c.instructions+=1;goto B439d7e;
case 0x439d84:goto L439d84;
case 0x439d87:c.instructions+=8;goto B439d87;
case 0x439d8a:c.instructions+=7;goto B439d8a;
case 0x439d8d:c.instructions+=6;goto B439d8d;
case 0x439d91:c.instructions+=5;goto B439d91;
case 0x439d96:c.instructions+=4;goto B439d96;
case 0x439d98:c.instructions+=3;goto B439d98;
case 0x439d9a:c.instructions+=2;goto B439d9a;
case 0x439d9c:c.instructions+=1;goto B439d9c;
case 0x439d9e:goto L439d9e;
case 0x439da1:c.instructions+=1;goto B439da1;
case 0x439da3:goto L439da3;
case 0x439da5:goto L439da5;
case 0x439daa:c.instructions+=1;goto B439daa;
case 0x439daf:goto L439daf;
case 0x439db0:goto L439db0;
case 0x439db2:c.instructions+=1;goto B439db2;
case 0x439db4:goto L439db4;
case 0x439db8:c.instructions+=2;goto B439db8;
case 0x439dbb:c.instructions+=1;goto B439dbb;
case 0x439dbd:goto L439dbd;
case 0x439dc0:c.instructions+=5;goto B439dc0;
case 0x439dc3:c.instructions+=4;goto B439dc3;
case 0x439dc5:c.instructions+=3;goto B439dc5;
case 0x439dc7:c.instructions+=2;goto B439dc7;
case 0x439dca:c.instructions+=1;goto B439dca;
case 0x439dcc:goto L439dcc;
case 0x439dcf:c.instructions+=2;goto B439dcf;
case 0x439dd1:c.instructions+=1;goto B439dd1;
case 0x439dd3:goto L439dd3;
case 0x439dd6:c.instructions+=1;goto B439dd6;
case 0x439dd8:goto L439dd8;
case 0x439dda:goto L439dda;
case 0x439ddc:c.instructions+=1;goto B439ddc;
case 0x439dde:goto L439dde;
case 0x439de4:c.instructions+=2;goto B439de4;
case 0x439de9:c.instructions+=1;goto B439de9;
case 0x439dee:goto L439dee;
case 0x439df0:c.instructions+=1;goto B439df0;
case 0x439df2:goto L439df2;
case 0x439df5:c.instructions+=1;goto B439df5;
case 0x439df7:goto L439df7;
case 0x439df9:c.instructions+=2;goto B439df9;
case 0x439dfb:c.instructions+=1;goto B439dfb;
case 0x439dfd:goto L439dfd;
case 0x439e00:c.instructions+=3;goto B439e00;
case 0x439e03:c.instructions+=2;goto B439e03;
case 0x439e05:c.instructions+=1;goto B439e05;
case 0x439e07:goto L439e07;
case 0x439e0a:c.instructions+=3;goto B439e0a;
case 0x439e0c:c.instructions+=2;goto B439e0c;
case 0x439e0e:c.instructions+=1;goto B439e0e;
case 0x439e11:goto L439e11;
case 0x439e13:c.instructions+=3;goto B439e13;
case 0x439e15:c.instructions+=2;goto B439e15;
case 0x439e17:c.instructions+=1;goto B439e17;
case 0x439e19:goto L439e19;
case 0x439e1c:c.instructions+=2;goto B439e1c;
case 0x439e1e:c.instructions+=1;goto B439e1e;
case 0x439e20:goto L439e20;
case 0x439e22:c.instructions+=1;goto B439e22;
case 0x439e24:goto L439e24;
case 0x439e27:c.instructions+=6;goto B439e27;
case 0x439e29:c.instructions+=5;goto B439e29;
case 0x439e2c:c.instructions+=4;goto B439e2c;
case 0x439e2e:c.instructions+=3;goto B439e2e;
case 0x439e2f:c.instructions+=2;goto B439e2f;
case 0x439e32:c.instructions+=1;goto B439e32;
case 0x439e37:goto L439e37;
case 0x439e39:c.instructions+=3;goto B439e39;
case 0x439e3c:c.instructions+=2;goto B439e3c;
case 0x439e3e:c.instructions+=1;goto B439e3e;
case 0x439e40:goto L439e40;
case 0x439e43:c.instructions+=2;goto B439e43;
case 0x439e44:c.instructions+=1;goto B439e44;
case 0x439e49:goto L439e49;
case 0x439e4c:c.instructions+=4;goto B439e4c;
case 0x439e4f:c.instructions+=3;goto B439e4f;
case 0x439e51:c.instructions+=2;goto B439e51;
case 0x439e53:c.instructions+=1;goto B439e53;
case 0x439e55:goto L439e55;
case 0x439e56:c.instructions+=5;goto B439e56;
case 0x439e57:c.instructions+=4;goto B439e57;
case 0x439e58:c.instructions+=3;goto B439e58;
case 0x439e5d:c.instructions+=2;goto B439e5d;
case 0x439e5e:c.instructions+=1;goto B439e5e;
case 0x439e5f:goto L439e5f;
case 0x439e61:c.instructions+=5;goto B439e61;
case 0x439e64:c.instructions+=4;goto B439e64;
case 0x439e66:c.instructions+=3;goto B439e66;
case 0x439e67:c.instructions+=2;goto B439e67;
case 0x439e6a:c.instructions+=1;goto B439e6a;
case 0x439e6f:goto L439e6f;
case 0x439e72:c.instructions+=2;goto B439e72;
case 0x439e74:c.instructions+=1;goto B439e74;
case 0x439e79:goto L439e79;
case 0x439e7c:c.instructions+=2;goto B439e7c;
case 0x439e7d:c.instructions+=1;goto B439e7d;
case 0x439e82:goto L439e82;
case 0x439e85:c.instructions+=4;goto B439e85;
case 0x439e88:c.instructions+=3;goto B439e88;
case 0x439e8a:c.instructions+=2;goto B439e8a;
case 0x439e8c:c.instructions+=1;goto B439e8c;
case 0x439e8e:goto L439e8e;
case 0x439e8f:c.instructions+=5;goto B439e8f;
case 0x439e90:c.instructions+=4;goto B439e90;
case 0x439e91:c.instructions+=3;goto B439e91;
case 0x439e96:c.instructions+=2;goto B439e96;
case 0x439e97:c.instructions+=1;goto B439e97;
case 0x439e98:goto L439e98;
case 0x439e99:c.instructions+=5;goto B439e99;
case 0x439e9a:c.instructions+=4;goto B439e9a;
case 0x439e9b:c.instructions+=3;goto B439e9b;
case 0x439e9d:c.instructions+=2;goto B439e9d;
case 0x439e9e:c.instructions+=1;goto B439e9e;
case 0x439ea0:goto L439ea0;
case 0x439ea2:c.instructions+=19;goto B439ea2;
case 0x439ea5:c.instructions+=18;goto B439ea5;
case 0x439ea7:c.instructions+=17;goto B439ea7;
case 0x439eaa:c.instructions+=16;goto B439eaa;
case 0x439ead:c.instructions+=15;goto B439ead;
case 0x439eaf:c.instructions+=14;goto B439eaf;
case 0x439eb2:c.instructions+=13;goto B439eb2;
case 0x439eb5:c.instructions+=12;goto B439eb5;
case 0x439eb7:c.instructions+=11;goto B439eb7;
case 0x439eba:c.instructions+=10;goto B439eba;
case 0x439ebd:c.instructions+=9;goto B439ebd;
case 0x439ebf:c.instructions+=8;goto B439ebf;
case 0x439ec2:c.instructions+=7;goto B439ec2;
case 0x439ec5:c.instructions+=6;goto B439ec5;
case 0x439ec7:c.instructions+=5;goto B439ec7;
case 0x439eca:c.instructions+=4;goto B439eca;
case 0x439ecc:c.instructions+=3;goto B439ecc;
case 0x439ecf:c.instructions+=2;goto B439ecf;
case 0x439ed2:c.instructions+=1;goto B439ed2;
case 0x439ee0:goto L439ee0;
case 0x439ee5:c.instructions+=4;goto B439ee5;
case 0x439ee7:c.instructions+=3;goto B439ee7;
case 0x439ee8:c.instructions+=2;goto B439ee8;
case 0x439eea:c.instructions+=1;goto B439eea;
case 0x439eec:goto L439eec;
case 0x439ef1:c.instructions+=2;goto B439ef1;
case 0x439ef3:c.instructions+=1;goto B439ef3;
case 0x439ef5:goto L439ef5;
case 0x439ef8:c.instructions+=2;goto B439ef8;
case 0x439efa:c.instructions+=1;goto B439efa;
case 0x439efc:goto L439efc;
case 0x439f01:goto L439f01;
case 0x439f04:c.instructions+=3;goto B439f04;
case 0x439f06:c.instructions+=2;goto B439f06;
case 0x439f09:c.instructions+=1;goto B439f09;
case 0x439f0b:goto L439f0b;
case 0x439f0e:c.instructions+=1;goto B439f0e;
case 0x439f10:goto L439f10;
case 0x439f12:goto L439f12;
case 0x439f16:goto L439f16;
case 0x439f18:c.instructions+=1;goto B439f18;
case 0x439f1a:goto L439f1a;
case 0x439f1d:c.instructions+=1;goto B439f1d;
case 0x439f1f:goto L439f1f;
case 0x439f21:goto L439f21;
case 0x439f23:c.instructions+=1;goto B439f23;
case 0x439f25:goto L439f25;
case 0x439f28:c.instructions+=1;goto B439f28;
case 0x439f2a:goto L439f2a;
case 0x439f2d:c.instructions+=2;goto B439f2d;
case 0x439f2f:c.instructions+=1;goto B439f2f;
case 0x439f31:goto L439f31;
case 0x439f34:c.instructions+=1;goto B439f34;
case 0x439f36:goto L439f36;
case 0x439f38:c.instructions+=1;goto B439f38;
case 0x439f3a:goto L439f3a;
case 0x439f3c:goto L439f3c;
case 0x439f3d:c.instructions+=1;goto B439f3d;
case 0x439f40:goto L439f40;
case 0x439f41:c.instructions+=8;goto B439f41;
case 0x439f42:c.instructions+=7;goto B439f42;
case 0x439f43:c.instructions+=6;goto B439f43;
case 0x439f44:c.instructions+=5;goto B439f44;
case 0x439f48:c.instructions+=4;goto B439f48;
case 0x439f49:c.instructions+=3;goto B439f49;
case 0x439f4a:c.instructions+=2;goto B439f4a;
case 0x439f4f:c.instructions+=1;goto B439f4f;
case 0x439f54:goto L439f54;
case 0x439f5a:c.instructions+=2;goto B439f5a;
case 0x439f5c:c.instructions+=1;goto B439f5c;
case 0x439f62:goto L439f62;
case 0x439f63:c.instructions+=1;goto B439f63;
case 0x439f68:goto L439f68;
case 0x439f6a:c.instructions+=2;goto B439f6a;
case 0x439f6c:c.instructions+=1;goto B439f6c;
case 0x439f72:goto L439f72;
case 0x439f75:c.instructions+=3;goto B439f75;
case 0x439f77:c.instructions+=2;goto B439f77;
case 0x439f79:c.instructions+=1;goto B439f79;
case 0x439f7c:goto L439f7c;
case 0x439f80:c.instructions+=2;goto B439f80;
case 0x439f82:c.instructions+=1;goto B439f82;
case 0x439f84:goto L439f84;
case 0x439f87:c.instructions+=2;goto B439f87;
case 0x439f89:c.instructions+=1;goto B439f89;
case 0x439f8f:goto L439f8f;
case 0x439f91:c.instructions+=2;goto B439f91;
case 0x439f93:c.instructions+=1;goto B439f93;
case 0x439f96:goto L439f96;
case 0x439f98:c.instructions+=3;goto B439f98;
case 0x439f9e:c.instructions+=2;goto B439f9e;
case 0x439fa0:c.instructions+=1;goto B439fa0;
case 0x439fa2:goto L439fa2;
case 0x439fa4:c.instructions+=1;goto B439fa4;
case 0x439fa9:goto L439fa9;
case 0x439fac:c.instructions+=9;goto B439fac;
case 0x439fb0:c.instructions+=8;goto B439fb0;
case 0x439fb2:c.instructions+=7;goto B439fb2;
case 0x439fb5:c.instructions+=6;goto B439fb5;
case 0x439fb8:c.instructions+=5;goto B439fb8;
case 0x439fbc:c.instructions+=4;goto B439fbc;
case 0x439fbe:c.instructions+=3;goto B439fbe;
case 0x439fc1:c.instructions+=2;goto B439fc1;
case 0x439fc4:c.instructions+=1;goto B439fc4;
case 0x439fc6:goto L439fc6;
case 0x439fc9:c.instructions+=3;goto B439fc9;
case 0x439fcc:c.instructions+=2;goto B439fcc;
case 0x439fce:c.instructions+=1;goto B439fce;
case 0x439fd0:goto L439fd0;
case 0x439fd5:goto L439fd5;
case 0x439fd7:c.instructions+=1;goto B439fd7;
case 0x439fd9:goto L439fd9;
case 0x439fde:goto L439fde;
case 0x439fe0:c.instructions+=1;goto B439fe0;
case 0x439fe2:goto L439fe2;
case 0x439fe3:c.instructions+=8;goto B439fe3;
case 0x439fe4:c.instructions+=7;goto B439fe4;
case 0x439fe6:c.instructions+=6;goto B439fe6;
case 0x439fe7:c.instructions+=5;goto B439fe7;
case 0x439fe9:c.instructions+=4;goto B439fe9;
case 0x439feb:c.instructions+=3;goto B439feb;
case 0x439fec:c.instructions+=2;goto B439fec;
case 0x439fed:c.instructions+=1;goto B439fed;
case 0x439fee:goto L439fee;
case 0x439ff1:c.instructions+=3;goto B439ff1;
case 0x439ff3:c.instructions+=2;goto B439ff3;
case 0x439ff7:c.instructions+=1;goto B439ff7;
case 0x439ff9:goto L439ff9;
case 0x439ffd:c.instructions+=1;goto B439ffd;
default:missing_instruction(c.pc);}
B439000:L439000:{c.instructions+=8;NFSU2_TR(0x439000);
w4(R+0,u32(0x1ull));
}
B439005:{NFSU2_TR(0x439005);
__builtin_memmove(gp(0x827b20),(R+0),4);
}
B43900a:{NFSU2_TR(0x43900a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43900d:{NFSU2_TR(0x43900d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439010:{NFSU2_TR(0x439010);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439013:{NFSU2_TR(0x439013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439014:{NFSU2_TR(0x439014);
__builtin_memmove(gp(0x827b14),(R+0),4);
}
B439019:{NFSU2_TR(0x439019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43901eull));
TAIL_STATIC(0x43c780u,43c);
}
B43901e:L43901e:{c.instructions+=3;NFSU2_TR(0x43901e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B439024:{NFSU2_TR(0x439024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439025:{NFSU2_TR(0x439025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43902aull));
TAIL_STATIC(0x43c780u,43c);
}
B43902a:L43902a:{c.instructions+=3;NFSU2_TR(0x43902a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B439030:{NFSU2_TR(0x439030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439031:{NFSU2_TR(0x439031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439036ull));
TAIL_STATIC(0x43c780u,43c);
}
B439036:L439036:{c.instructions+=7;NFSU2_TR(0x439036);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43903a:{NFSU2_TR(0x43903a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B43903d:{NFSU2_TR(0x43903d);
__builtin_memmove((R+0),(R+24),4);
}
B43903f:{NFSU2_TR(0x43903f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439040:{NFSU2_TR(0x439040);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439047:{NFSU2_TR(0x439047);
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
B43904a:{NFSU2_TR(0x43904a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439050:L439050:{c.instructions+=3;NFSU2_TR(0x439050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439051:{NFSU2_TR(0x439051);
__builtin_memmove((R+24),(R+4),4);
}
B439053:{NFSU2_TR(0x439053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439058ull));
TAIL_STATIC(0x437870u,437);
}
B439058:L439058:{c.instructions+=2;NFSU2_TR(0x439058);
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
B43905d:{NFSU2_TR(0x43905d);
if(r1(R+518)){{goto L439068;}}
}
B43905f:L43905f:{c.instructions+=2;NFSU2_TR(0x43905f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439060:{NFSU2_TR(0x439060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439065ull));
TAIL_STATIC(0x575630u,575);
}
B439065:L439065:{c.instructions+=1;NFSU2_TR(0x439065);
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
B439068:L439068:{c.instructions+=3;NFSU2_TR(0x439068);
__builtin_memmove((R+0),(R+24),4);
}
B43906a:{NFSU2_TR(0x43906a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43906b:{NFSU2_TR(0x43906b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439070:L439070:{c.instructions+=5;NFSU2_TR(0x439070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439071:{NFSU2_TR(0x439071);
__builtin_memmove((R+28),(R+4),4);
}
B439073:{NFSU2_TR(0x439073);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B439076:{NFSU2_TR(0x439076);
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
B439078:{NFSU2_TR(0x439078);
if(r1(R+518)){{goto L439117;}}
}
B43907e:L43907e:{c.instructions+=3;NFSU2_TR(0x43907e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B439081:{NFSU2_TR(0x439081);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439083:{NFSU2_TR(0x439083);
if(r1(R+518)){{goto L4390fd;}}
}
B439085:L439085:{c.instructions+=5;NFSU2_TR(0x439085);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439088:{NFSU2_TR(0x439088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43908b:{NFSU2_TR(0x43908b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43908e:{NFSU2_TR(0x43908e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439090:{NFSU2_TR(0x439090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4390be;}}
}
B439092:L439092:{c.instructions+=3;NFSU2_TR(0x439092);
__builtin_memmove((R+0),gp(0x827eea),1);
}
B439097:{NFSU2_TR(0x439097);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439099:{NFSU2_TR(0x439099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4390be;}}
}
B43909b:L43909b:{c.instructions+=4;NFSU2_TR(0x43909b);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4390a1:{NFSU2_TR(0x4390a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4390a7:{NFSU2_TR(0x4390a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4390a9:{NFSU2_TR(0x4390a9);
if(r1(R+518)){{goto L4390b7;}}
}
B4390ab:L4390ab:{c.instructions+=2;NFSU2_TR(0x4390ab);
s1(0x827ee9,u8(0x1ull));
}
B4390b2:{NFSU2_TR(0x4390b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4390b7ull));
TAIL_STATIC(0x409a30u,409);
}
B4390b7:L4390b7:{c.instructions+=1;NFSU2_TR(0x4390b7);
s1(0x827eea,u8(0x1ull));
}
B4390be:L4390be:{c.instructions+=5;NFSU2_TR(0x4390be);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4390c3:{NFSU2_TR(0x4390c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4390c4:{NFSU2_TR(0x4390c4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4390c6:{NFSU2_TR(0x4390c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4390c8:{NFSU2_TR(0x4390c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4390f8;}}
}
B4390ca:L4390ca:{c.instructions+=1;NFSU2_TR(0x4390ca);
__builtin_memmove((R+12),(R+12),4);
}
B4390d0:L4390d0:{c.instructions+=4;NFSU2_TR(0x4390d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4390d7:{NFSU2_TR(0x4390d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4390dd:{NFSU2_TR(0x4390dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4390df:{NFSU2_TR(0x4390df);
if(r1(R+518)){{goto L4390ee;}}
}
B4390e1:L4390e1:{c.instructions+=2;NFSU2_TR(0x4390e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4390e5:{NFSU2_TR(0x4390e5);
if(r1(R+518)){{goto L4390ee;}}
}
B4390e7:L4390e7:{c.instructions+=2;NFSU2_TR(0x4390e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4390e9:{NFSU2_TR(0x4390e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4390eeull));
TAIL_STATIC(0x5fa820u,5fa);
}
B4390ee:L4390ee:{c.instructions+=4;NFSU2_TR(0x4390ee);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4390f3:{NFSU2_TR(0x4390f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4390f4:{NFSU2_TR(0x4390f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4390f6:{NFSU2_TR(0x4390f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4390d0u);}goto L4390d0;}}
}
B4390f8:L4390f8:{c.instructions+=2;NFSU2_TR(0x4390f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4390fc:{NFSU2_TR(0x4390fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4390fd:L4390fd:{c.instructions+=2;NFSU2_TR(0x4390fd);
__builtin_memmove((R+4),(R+28),4);
}
B4390ff:{NFSU2_TR(0x4390ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439104ull));
TAIL_STATIC(0x437a00u,437);
}
B439104:L439104:{c.instructions+=3;NFSU2_TR(0x439104);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B439109:{NFSU2_TR(0x439109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439113:{NFSU2_TR(0x439113);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B439117:L439117:{c.instructions+=3;NFSU2_TR(0x439117);
w1(R+0,u8(0x1ull));
}
B439119:{NFSU2_TR(0x439119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43911a:{NFSU2_TR(0x43911a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439120:L439120:{c.instructions+=3;NFSU2_TR(0x439120);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439123:{NFSU2_TR(0x439123);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B439126:{NFSU2_TR(0x439126);
if(r1(R+518)){{goto L439135;}}
}
B439128:L439128:{c.instructions+=2;NFSU2_TR(0x439128);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B439129:{NFSU2_TR(0x439129);
if(r1(R+518)){{goto L439135;}}
}
B43912b:L43912b:{c.instructions+=2;NFSU2_TR(0x43912b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43912c:{NFSU2_TR(0x43912c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439135;}}
}
B43912e:L43912e:{c.instructions+=1;NFSU2_TR(0x43912e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439135:L439135:{c.instructions+=3;NFSU2_TR(0x439135);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43913a:{NFSU2_TR(0x43913a);
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
B43913c:{NFSU2_TR(0x43913c);
if(r1(R+518)){{goto L439154;}}
}
B43913e:L43913e:{c.instructions+=3;NFSU2_TR(0x43913e);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B439143:{NFSU2_TR(0x439143);
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
B439145:{NFSU2_TR(0x439145);
if(r1(R+518)){{goto L439154;}}
}
B439147:L439147:{c.instructions+=3;NFSU2_TR(0x439147);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B43914c:{NFSU2_TR(0x43914c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43914f:{NFSU2_TR(0x43914f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439154ull));
TAIL_STATIC(0x45ae00u,45a);
}
B439154:L439154:{c.instructions+=2;NFSU2_TR(0x439154);
w1(R+0,u8(0x1ull));
}
B439156:{NFSU2_TR(0x439156);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439160:L439160:{c.instructions+=5;NFSU2_TR(0x439160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439161:{NFSU2_TR(0x439161);
__builtin_memmove((R+24),(R+4),4);
}
B439163:{NFSU2_TR(0x439163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439166:{NFSU2_TR(0x439166);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B439169:{NFSU2_TR(0x439169);
if(r1(R+518)){{goto L439170;}}
}
B43916b:L43916b:{c.instructions+=2;NFSU2_TR(0x43916b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43916c:{NFSU2_TR(0x43916c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439185;}}
}
B43916e:L43916e:{c.instructions+=1;NFSU2_TR(0x43916e);
{goto L43917e;}
}
B439170:L439170:{c.instructions+=3;NFSU2_TR(0x439170);
__builtin_memmove((R+4),(R+24),4);
}
B439172:{NFSU2_TR(0x439172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439179:{NFSU2_TR(0x439179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43917eull));
TAIL_STATIC(0x437910u,437);
}
B43917e:L43917e:{c.instructions+=1;NFSU2_TR(0x43917e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439185:L439185:{c.instructions+=4;NFSU2_TR(0x439185);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43918a:{NFSU2_TR(0x43918a);
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
B43918c:{NFSU2_TR(0x43918c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43918d:{NFSU2_TR(0x43918d);
if(r1(R+518)){{goto L4391a5;}}
}
B43918f:L43918f:{c.instructions+=3;NFSU2_TR(0x43918f);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B439194:{NFSU2_TR(0x439194);
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
B439196:{NFSU2_TR(0x439196);
if(r1(R+518)){{goto L4391a5;}}
}
B439198:L439198:{c.instructions+=3;NFSU2_TR(0x439198);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B43919d:{NFSU2_TR(0x43919d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4391a0:{NFSU2_TR(0x4391a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4391a5ull));
TAIL_STATIC(0x45ae20u,45a);
}
B4391a5:L4391a5:{c.instructions+=2;NFSU2_TR(0x4391a5);
w1(R+0,u8(0x1ull));
}
B4391a7:{NFSU2_TR(0x4391a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4391b0:L4391b0:{c.instructions+=6;NFSU2_TR(0x4391b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391b1:{NFSU2_TR(0x4391b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391b2:{NFSU2_TR(0x4391b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391b3:{NFSU2_TR(0x4391b3);
w4(R+24,u32(0x827b98ull));
}
B4391b8:{NFSU2_TR(0x4391b8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4391ba:{NFSU2_TR(0x4391ba);
__builtin_memmove((R+12),(R+12),4);
}
B4391c0:L4391c0:{c.instructions+=3;NFSU2_TR(0x4391c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4391c2:{NFSU2_TR(0x4391c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4391c4:{NFSU2_TR(0x4391c4);
if(r1(R+518)){{goto L43921d;}}
}
B4391c6:L4391c6:{c.instructions+=4;NFSU2_TR(0x4391c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4391c9:{NFSU2_TR(0x4391c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4391cb:{NFSU2_TR(0x4391cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4391ce:{NFSU2_TR(0x4391ce);
if(r1(R+518)){{goto L4391dc;}}
}
B4391d0:L4391d0:{c.instructions+=2;NFSU2_TR(0x4391d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391d1:{NFSU2_TR(0x4391d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4391d6ull));
TAIL_STATIC(0x575630u,575);
}
B4391d6:L4391d6:{c.instructions+=2;NFSU2_TR(0x4391d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4391d9:{NFSU2_TR(0x4391d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4391dc:L4391dc:{c.instructions+=4;NFSU2_TR(0x4391dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4391df:{NFSU2_TR(0x4391df);
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
B4391e1:{NFSU2_TR(0x4391e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4391e4:{NFSU2_TR(0x4391e4);
if(r1(R+518)){{goto L4391f5;}}
}
B4391e6:L4391e6:{c.instructions+=3;NFSU2_TR(0x4391e6);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391e8:{NFSU2_TR(0x4391e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4391e9:{NFSU2_TR(0x4391e9);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4391efull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4391ef:L4391ef:{c.instructions+=2;NFSU2_TR(0x4391ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4391f2:{NFSU2_TR(0x4391f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4391f5:L4391f5:{c.instructions+=3;NFSU2_TR(0x4391f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4391f8:{NFSU2_TR(0x4391f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4391fa:{NFSU2_TR(0x4391fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4391ffull));
TAIL_STATIC(0x434a20u,434);
}
B4391ff:L4391ff:{c.instructions+=3;NFSU2_TR(0x4391ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B439201:{NFSU2_TR(0x439201);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439203:{NFSU2_TR(0x439203);
if(r1(R+518)){{goto L43921b;}}
}
B439205:L439205:{c.instructions+=2;NFSU2_TR(0x439205);
__builtin_memmove((R+4),(R+28),4);
}
B439207:{NFSU2_TR(0x439207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43920cull));
TAIL_STATIC(0x4383a0u,438);
}
B43920c:L43920c:{c.instructions+=4;NFSU2_TR(0x43920c);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B439211:{NFSU2_TR(0x439211);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439212:{NFSU2_TR(0x439212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439213:{NFSU2_TR(0x439213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439218ull));
TAIL_STATIC(0x43f920u,43f);
}
B439218:L439218:{c.instructions+=1;NFSU2_TR(0x439218);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43921b:L43921b:{c.instructions+=1;NFSU2_TR(0x43921b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43921d:L43921d:{c.instructions+=7;NFSU2_TR(0x43921d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439220:{NFSU2_TR(0x439220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439223:{NFSU2_TR(0x439223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439226:{NFSU2_TR(0x439226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43922d:{NFSU2_TR(0x43922d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B439230:{NFSU2_TR(0x439230);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x827c38ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x827c38ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x827c38ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439236:{NFSU2_TR(0x439236);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4391c0u);}goto L4391c0;}}
}
B439238:L439238:{c.instructions+=4;NFSU2_TR(0x439238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439239:{NFSU2_TR(0x439239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43923a:{NFSU2_TR(0x43923a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43923b:{NFSU2_TR(0x43923b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439240:L439240:{c.instructions+=4;NFSU2_TR(0x439240);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439241:{NFSU2_TR(0x439241);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439243:{NFSU2_TR(0x439243);
__builtin_memmove((R+20),(R+4),4);
}
B439245:{NFSU2_TR(0x439245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43924aull));
TAIL_STATIC(0x4326b0u,432);
}
B43924a:L43924a:{c.instructions+=2;NFSU2_TR(0x43924a);
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
B43924c:{NFSU2_TR(0x43924c);
if(r1(R+518)){{goto L4392d9;}}
}
B439252:L439252:{c.instructions+=5;NFSU2_TR(0x439252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439255:{NFSU2_TR(0x439255);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439257:{NFSU2_TR(0x439257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B43925a:{NFSU2_TR(0x43925a);
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
B43925c:{NFSU2_TR(0x43925c);
if(r1(R+518)){{goto L4392d9;}}
}
B43925e:L43925e:{c.instructions+=3;NFSU2_TR(0x43925e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439260:{NFSU2_TR(0x439260);
__builtin_memmove((R+4),(R+20),4);
}
B439262:{NFSU2_TR(0x439262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439267ull));
TAIL_STATIC(0x4326b0u,432);
}
B439267:L439267:{c.instructions+=2;NFSU2_TR(0x439267);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439269:{NFSU2_TR(0x439269);
if(r1(R+518)){{goto L43928f;}}
}
B43926b:L43926b:{c.instructions+=5;NFSU2_TR(0x43926b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43926e:{NFSU2_TR(0x43926e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439270:{NFSU2_TR(0x439270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B439273:{NFSU2_TR(0x439273);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439275:{NFSU2_TR(0x439275);
if(r1(R+518)){{goto L43928f;}}
}
B439277:L439277:{c.instructions+=5;NFSU2_TR(0x439277);
{u32 ea_=u32(r4(R+20)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43927a:{NFSU2_TR(0x43927a);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43927d:{NFSU2_TR(0x43927d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43927f:{NFSU2_TR(0x43927f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439282:{NFSU2_TR(0x439282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43928f;}}
}
B439284:L439284:{c.instructions+=2;NFSU2_TR(0x439284);
__builtin_memmove((R+4),(R+20),4);
}
B439286:{NFSU2_TR(0x439286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43928bull));
TAIL_STATIC(0x437a00u,437);
}
B43928b:L43928b:{c.instructions+=2;NFSU2_TR(0x43928b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43928c:{NFSU2_TR(0x43928c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43928f:L43928f:{c.instructions+=6;NFSU2_TR(0x43928f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439290:{NFSU2_TR(0x439290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439291:{NFSU2_TR(0x439291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439292:{NFSU2_TR(0x439292);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B439294:{NFSU2_TR(0x439294);
w4(R+28,u32(0x827ba8ull));
}
B439299:{NFSU2_TR(0x439299);
__builtin_memmove((R+16),(R+16),4);
}
B4392a0:L4392a0:{c.instructions+=3;NFSU2_TR(0x4392a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4392a3:{NFSU2_TR(0x4392a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4392a5:{NFSU2_TR(0x4392a5);
if(r1(R+518)){{goto L4392ca;}}
}
B4392a7:L4392a7:{c.instructions+=2;NFSU2_TR(0x4392a7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B4392aa:{NFSU2_TR(0x4392aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4392ca;}}
}
B4392ac:L4392ac:{c.instructions+=4;NFSU2_TR(0x4392ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4392b0:{NFSU2_TR(0x4392b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4392b1:{NFSU2_TR(0x4392b1);
__builtin_memmove((R+4),(R+24),4);
}
B4392b3:{NFSU2_TR(0x4392b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4392b8ull));
TAIL_STATIC(0x434b00u,434);
}
B4392b8:L4392b8:{c.instructions+=3;NFSU2_TR(0x4392b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4392ba:{NFSU2_TR(0x4392ba);
__builtin_memmove((R+4),(R+24),4);
}
B4392bc:{NFSU2_TR(0x4392bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4392c1ull));
TAIL_STATIC(0x431400u,431);
}
B4392c1:L4392c1:{c.instructions+=4;NFSU2_TR(0x4392c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4392c2:{NFSU2_TR(0x4392c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4392c3:{NFSU2_TR(0x4392c3);
__builtin_memmove((R+4),(R+20),4);
}
B4392c5:{NFSU2_TR(0x4392c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4392caull));
TAIL_STATIC(0x4309d0u,430);
}
B4392ca:L4392ca:{c.instructions+=4;NFSU2_TR(0x4392ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B4392cd:{NFSU2_TR(0x4392cd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4392ce:{NFSU2_TR(0x4392ce);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x827c48ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x827c48ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x827c48ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4392d4:{NFSU2_TR(0x4392d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4392a0u);}goto L4392a0;}}
}
B4392d6:L4392d6:{c.instructions+=3;NFSU2_TR(0x4392d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4392d7:{NFSU2_TR(0x4392d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4392d8:{NFSU2_TR(0x4392d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4392d9:L4392d9:{c.instructions+=2;NFSU2_TR(0x4392d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4392da:{NFSU2_TR(0x4392da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4392e0:L4392e0:{c.instructions+=5;NFSU2_TR(0x4392e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4392e1:{NFSU2_TR(0x4392e1);
__builtin_memmove((R+24),(R+4),4);
}
B4392e3:{NFSU2_TR(0x4392e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4392e5:{NFSU2_TR(0x4392e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4392e8:{NFSU2_TR(0x4392e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43939a;}}
}
B4392ee:L4392ee:{c.instructions+=6;NFSU2_TR(0x4392ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4392f1:{NFSU2_TR(0x4392f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4392f2:{NFSU2_TR(0x4392f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4392f5:{NFSU2_TR(0x4392f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4392fc:{NFSU2_TR(0x4392fc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4392fe:{NFSU2_TR(0x4392fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B439304:L439304:{c.instructions+=4;NFSU2_TR(0x439304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439307:{NFSU2_TR(0x439307);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff6ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43930a:{NFSU2_TR(0x43930a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B43930d:{NFSU2_TR(0x43930d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4395de;}}
}
B439313:L439313:{c.instructions+=1;NFSU2_TR(0x439313);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4395e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43931a:L43931a:{c.instructions+=9;NFSU2_TR(0x43931a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43931d:{NFSU2_TR(0x43931d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B439320:{NFSU2_TR(0x439320);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827d38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439326:{NFSU2_TR(0x439326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439329:{NFSU2_TR(0x439329);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827d3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43932f:{NFSU2_TR(0x43932f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439332:{NFSU2_TR(0x439332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827d40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439338:{NFSU2_TR(0x439338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439339:{NFSU2_TR(0x439339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43933a:L43933a:{c.instructions+=9;NFSU2_TR(0x43933a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43933d:{NFSU2_TR(0x43933d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B439340:{NFSU2_TR(0x439340);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827db8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439346:{NFSU2_TR(0x439346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439349:{NFSU2_TR(0x439349);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827dbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43934f:{NFSU2_TR(0x43934f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439352:{NFSU2_TR(0x439352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827dc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439358:{NFSU2_TR(0x439358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439359:{NFSU2_TR(0x439359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43935a:L43935a:{c.instructions+=9;NFSU2_TR(0x43935a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43935d:{NFSU2_TR(0x43935d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B439360:{NFSU2_TR(0x439360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827e28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439366:{NFSU2_TR(0x439366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439369:{NFSU2_TR(0x439369);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827e2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43936f:{NFSU2_TR(0x43936f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439372:{NFSU2_TR(0x439372);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827e30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439378:{NFSU2_TR(0x439378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439379:{NFSU2_TR(0x439379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43937a:L43937a:{c.instructions+=9;NFSU2_TR(0x43937a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43937d:{NFSU2_TR(0x43937d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B439380:{NFSU2_TR(0x439380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827cd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439386:{NFSU2_TR(0x439386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439389:{NFSU2_TR(0x439389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827cd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43938f:{NFSU2_TR(0x43938f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439392:{NFSU2_TR(0x439392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827cd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439398:{NFSU2_TR(0x439398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439399:{NFSU2_TR(0x439399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43939a:L43939a:{c.instructions+=2;NFSU2_TR(0x43939a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43939d:{NFSU2_TR(0x43939d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4393d1;}}
}
B43939f:L43939f:{c.instructions+=6;NFSU2_TR(0x43939f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4393a2:{NFSU2_TR(0x4393a2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4393a3:{NFSU2_TR(0x4393a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4393a6:{NFSU2_TR(0x4393a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4393ad:{NFSU2_TR(0x4393ad);
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
B4393af:{NFSU2_TR(0x4393af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B4393b5:L4393b5:{c.instructions+=8;NFSU2_TR(0x4393b5);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4393bb:{NFSU2_TR(0x4393bb);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4393be:{NFSU2_TR(0x4393be);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4393c2:{NFSU2_TR(0x4393c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4393c5:{NFSU2_TR(0x4393c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4393c8:{NFSU2_TR(0x4393c8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4393cf:{NFSU2_TR(0x4393cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4393d0:{NFSU2_TR(0x4393d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4393d1:L4393d1:{c.instructions+=2;NFSU2_TR(0x4393d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4393d4:{NFSU2_TR(0x4393d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439408;}}
}
B4393d6:L4393d6:{c.instructions+=6;NFSU2_TR(0x4393d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4393d9:{NFSU2_TR(0x4393d9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4393da:{NFSU2_TR(0x4393da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4393dd:{NFSU2_TR(0x4393dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4393e4:{NFSU2_TR(0x4393e4);
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
B4393e6:{NFSU2_TR(0x4393e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B4393ec:L4393ec:{c.instructions+=8;NFSU2_TR(0x4393ec);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4393f2:{NFSU2_TR(0x4393f2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4393f5:{NFSU2_TR(0x4393f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4393f9:{NFSU2_TR(0x4393f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4393fc:{NFSU2_TR(0x4393fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4393ff:{NFSU2_TR(0x4393ff);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B439406:{NFSU2_TR(0x439406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439407:{NFSU2_TR(0x439407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439408:L439408:{c.instructions+=2;NFSU2_TR(0x439408);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43940b:{NFSU2_TR(0x43940b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439445;}}
}
B43940d:L43940d:{c.instructions+=6;NFSU2_TR(0x43940d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439410:{NFSU2_TR(0x439410);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B439411:{NFSU2_TR(0x439411);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B439414:{NFSU2_TR(0x439414);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43941b:{NFSU2_TR(0x43941b);
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
B43941d:{NFSU2_TR(0x43941d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B439423:L439423:{c.instructions+=4;NFSU2_TR(0x439423);
__builtin_memmove((R+4),gp(0x890080),4);
}
B439429:{NFSU2_TR(0x439429);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B43942d:{NFSU2_TR(0x43942d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B439431:{NFSU2_TR(0x439431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4395de;}}
}
B439437:L439437:{c.instructions+=4;NFSU2_TR(0x439437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43943a:{NFSU2_TR(0x43943a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43943d:{NFSU2_TR(0x43943d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43943e:{NFSU2_TR(0x43943e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439443ull));
TAIL_STATIC(0x598ed0u,598);
}
B439443:L439443:{c.instructions+=2;NFSU2_TR(0x439443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439444:{NFSU2_TR(0x439444);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439445:L439445:{c.instructions+=3;NFSU2_TR(0x439445);
w4(R+4,u32(0x5ull));
}
B43944a:{NFSU2_TR(0x43944a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43944c:{NFSU2_TR(0x43944c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439485;}}
}
B43944e:L43944e:{c.instructions+=6;NFSU2_TR(0x43944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439451:{NFSU2_TR(0x439451);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B439452:{NFSU2_TR(0x439452);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B439455:{NFSU2_TR(0x439455);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43945c:{NFSU2_TR(0x43945c);
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
B43945e:{NFSU2_TR(0x43945e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B439464:L439464:{c.instructions+=4;NFSU2_TR(0x439464);
__builtin_memmove((R+8),gp(0x890080),4);
}
B43946a:{NFSU2_TR(0x43946a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B43946e:{NFSU2_TR(0x43946e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B439471:{NFSU2_TR(0x439471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4395de;}}
}
B439477:L439477:{c.instructions+=4;NFSU2_TR(0x439477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43947a:{NFSU2_TR(0x43947a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43947b:{NFSU2_TR(0x43947b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43947e:{NFSU2_TR(0x43947e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439483ull));
TAIL_STATIC(0x598ee0u,598);
}
B439483:L439483:{c.instructions+=2;NFSU2_TR(0x439483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439484:{NFSU2_TR(0x439484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439485:L439485:{c.instructions+=2;NFSU2_TR(0x439485);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439488:{NFSU2_TR(0x439488);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4394c5;}}
}
B43948a:L43948a:{c.instructions+=6;NFSU2_TR(0x43948a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43948d:{NFSU2_TR(0x43948d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43948e:{NFSU2_TR(0x43948e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B439491:{NFSU2_TR(0x439491);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B439498:{NFSU2_TR(0x439498);
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
B43949a:{NFSU2_TR(0x43949a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395de;}}
}
B4394a0:L4394a0:{c.instructions+=4;NFSU2_TR(0x4394a0);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4394a6:{NFSU2_TR(0x4394a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4394aa:{NFSU2_TR(0x4394aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B4394ad:{NFSU2_TR(0x4394ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4395de;}}
}
B4394b3:L4394b3:{c.instructions+=6;NFSU2_TR(0x4394b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4394b6:{NFSU2_TR(0x4394b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4394b9:{NFSU2_TR(0x4394b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4394ba:{NFSU2_TR(0x4394ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4394bd:{NFSU2_TR(0x4394bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4394be:{NFSU2_TR(0x4394be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4394c3ull));
TAIL_STATIC(0x5a4080u,5a4);
}
B4394c3:L4394c3:{c.instructions+=2;NFSU2_TR(0x4394c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4394c4:{NFSU2_TR(0x4394c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4394c5:L4394c5:{c.instructions+=2;NFSU2_TR(0x4394c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4394c8:{NFSU2_TR(0x4394c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4394f2;}}
}
B4394ca:L4394ca:{c.instructions+=2;NFSU2_TR(0x4394ca);
w4(R+24,u32(0x1ull));
}
B4394cf:{NFSU2_TR(0x4394cf);
}
B4394d0:L4394d0:{c.instructions+=2;NFSU2_TR(0x4394d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4394d1:{NFSU2_TR(0x4394d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4394d6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4394d6:L4394d6:{c.instructions+=4;NFSU2_TR(0x4394d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4394d9:{NFSU2_TR(0x4394d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4394dc:{NFSU2_TR(0x4394dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4394de:{NFSU2_TR(0x4394de);
if(r1(R+518)){{goto L4394ea;}}
}
B4394e0:L4394e0:{c.instructions+=3;NFSU2_TR(0x4394e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4394e3:{NFSU2_TR(0x4394e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4394e5:{NFSU2_TR(0x4394e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4394eaull));
TAIL_STATIC(0x5dbd70u,5db);
}
B4394ea:L4394ea:{c.instructions+=3;NFSU2_TR(0x4394ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4394eb:{NFSU2_TR(0x4394eb);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4394ee:{NFSU2_TR(0x4394ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4394d0u);}goto L4394d0;}}
}
B4394f0:L4394f0:{c.instructions+=2;NFSU2_TR(0x4394f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4394f1:{NFSU2_TR(0x4394f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4394f2:L4394f2:{c.instructions+=2;NFSU2_TR(0x4394f2);
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
B4394f5:{NFSU2_TR(0x4394f5);
if(r1(R+518)){{goto L4395de;}}
}
B4394fb:L4394fb:{c.instructions+=2;NFSU2_TR(0x4394fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4394fe:{NFSU2_TR(0x4394fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439547;}}
}
B439500:L439500:{c.instructions+=3;NFSU2_TR(0x439500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439503:{NFSU2_TR(0x439503);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B439504:{NFSU2_TR(0x439504);
if(r1(R+518)){{goto L43952b;}}
}
B439506:L439506:{c.instructions+=2;NFSU2_TR(0x439506);
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
B439507:{NFSU2_TR(0x439507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4395de;}}
}
B43950d:L43950d:{c.instructions+=10;NFSU2_TR(0x43950d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439510:{NFSU2_TR(0x439510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439513:{NFSU2_TR(0x439513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439516:{NFSU2_TR(0x439516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439517:{NFSU2_TR(0x439517);
__builtin_memmove((R+0),gp(0x827c8c),4);
}
B43951c:{NFSU2_TR(0x43951c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43951d:{NFSU2_TR(0x43951d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43951f:{NFSU2_TR(0x43951f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439520:{NFSU2_TR(0x439520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439521:{NFSU2_TR(0x439521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439526ull));
TAIL_STATIC(0x438e30u,438);
}
B439526:L439526:{c.instructions+=3;NFSU2_TR(0x439526);
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
B439529:{NFSU2_TR(0x439529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43952a:{NFSU2_TR(0x43952a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43952b:L43952b:{c.instructions+=9;NFSU2_TR(0x43952b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43952e:{NFSU2_TR(0x43952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439531:{NFSU2_TR(0x439531);
__builtin_memmove((R+0),gp(0x827f40),4);
}
B439536:{NFSU2_TR(0x439536);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439537:{NFSU2_TR(0x439537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439538:{NFSU2_TR(0x439538);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43953a:{NFSU2_TR(0x43953a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43953c:{NFSU2_TR(0x43953c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43953d:{NFSU2_TR(0x43953d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439542ull));
TAIL_STATIC(0x438e30u,438);
}
B439542:L439542:{c.instructions+=3;NFSU2_TR(0x439542);
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
B439545:{NFSU2_TR(0x439545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439546:{NFSU2_TR(0x439546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439547:L439547:{c.instructions+=4;NFSU2_TR(0x439547);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43954a:{NFSU2_TR(0x43954a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43954b:{NFSU2_TR(0x43954b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43954c:{NFSU2_TR(0x43954c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439592;}}
}
B43954e:L43954e:{c.instructions+=6;NFSU2_TR(0x43954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439551:{NFSU2_TR(0x439551);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B439552:{NFSU2_TR(0x439552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B439555:{NFSU2_TR(0x439555);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43955c:{NFSU2_TR(0x43955c);
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
B43955e:{NFSU2_TR(0x43955e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395dc;}}
}
B439560:L439560:{c.instructions+=4;NFSU2_TR(0x439560);
__builtin_memmove((R+8),gp(0x890080),4);
}
B439566:{NFSU2_TR(0x439566);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B43956a:{NFSU2_TR(0x43956a);
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
B43956c:{NFSU2_TR(0x43956c);
if(r1(R+518)){{goto L4395dc;}}
}
B43956e:L43956e:{c.instructions+=3;NFSU2_TR(0x43956e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439574:{NFSU2_TR(0x439574);
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
B439576:{NFSU2_TR(0x439576);
if(r1(R+518)){{goto L4395dc;}}
}
B439578:L439578:{c.instructions+=3;NFSU2_TR(0x439578);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43957b:{NFSU2_TR(0x43957b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B43957d:{NFSU2_TR(0x43957d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439582ull));
TAIL_STATIC(0x75bed4u,75b);
}
B439582:L439582:{c.instructions+=6;NFSU2_TR(0x439582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439583:{NFSU2_TR(0x439583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439586:{NFSU2_TR(0x439586);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439587:{NFSU2_TR(0x439587);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439589:{NFSU2_TR(0x439589);
__builtin_memmove((R+4),(R+28),4);
}
B43958b:{NFSU2_TR(0x43958b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43958eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43958e:L43958e:{c.instructions+=4;NFSU2_TR(0x43958e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43958f:{NFSU2_TR(0x43958f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439590:{NFSU2_TR(0x439590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439591:{NFSU2_TR(0x439591);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439592:L439592:{c.instructions+=2;NFSU2_TR(0x439592);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439595:{NFSU2_TR(0x439595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4395dc;}}
}
B439597:L439597:{c.instructions+=6;NFSU2_TR(0x439597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43959a:{NFSU2_TR(0x43959a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43959b:{NFSU2_TR(0x43959b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43959e:{NFSU2_TR(0x43959e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4395a5:{NFSU2_TR(0x4395a5);
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
B4395a7:{NFSU2_TR(0x4395a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4395dc;}}
}
B4395a9:L4395a9:{c.instructions+=4;NFSU2_TR(0x4395a9);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4395af:{NFSU2_TR(0x4395af);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4395b3:{NFSU2_TR(0x4395b3);
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
B4395b5:{NFSU2_TR(0x4395b5);
if(r1(R+518)){{goto L4395dc;}}
}
B4395b7:L4395b7:{c.instructions+=3;NFSU2_TR(0x4395b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4395bd:{NFSU2_TR(0x4395bd);
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
B4395bf:{NFSU2_TR(0x4395bf);
if(r1(R+518)){{goto L4395dc;}}
}
B4395c1:L4395c1:{c.instructions+=3;NFSU2_TR(0x4395c1);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4395c4:{NFSU2_TR(0x4395c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4395c6:{NFSU2_TR(0x4395c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4395cbull));
TAIL_STATIC(0x75bed4u,75b);
}
B4395cb:L4395cb:{c.instructions+=3;NFSU2_TR(0x4395cb);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4395ce:{NFSU2_TR(0x4395ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4395cf:{NFSU2_TR(0x4395cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4395d4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4395d4:L4395d4:{c.instructions+=4;NFSU2_TR(0x4395d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4395d5:{NFSU2_TR(0x4395d5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4395d7:{NFSU2_TR(0x4395d7);
__builtin_memmove((R+4),(R+28),4);
}
B4395d9:{NFSU2_TR(0x4395d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4395dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4395dc:L4395dc:{c.instructions+=2;NFSU2_TR(0x4395dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4395dd:{NFSU2_TR(0x4395dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4395de:L4395de:{c.instructions+=2;NFSU2_TR(0x4395de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4395df:{NFSU2_TR(0x4395df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4395f0:L4395f0:{c.instructions+=10;NFSU2_TR(0x4395f0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4395f4:{NFSU2_TR(0x4395f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4395f7:{NFSU2_TR(0x4395f7);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4395fa:{NFSU2_TR(0x4395fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4395fb:{NFSU2_TR(0x4395fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4395fe:{NFSU2_TR(0x4395fe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439600:{NFSU2_TR(0x439600);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B439603:{NFSU2_TR(0x439603);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439604:{NFSU2_TR(0x439604);
__builtin_memmove((R+8),(R+0),4);
}
B439606:{NFSU2_TR(0x439606);
if(r1(R+518)){{goto L439644;}}
}
B439608:L439608:{c.instructions+=9;NFSU2_TR(0x439608);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B439609:{NFSU2_TR(0x439609);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43960c:{NFSU2_TR(0x43960c);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43960f:{NFSU2_TR(0x43960f);
{u32 ea_=u32(u32(7890016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B439615:{NFSU2_TR(0x439615);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B439617:{NFSU2_TR(0x439617);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B439619:{NFSU2_TR(0x439619);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43961b:{NFSU2_TR(0x43961b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43961e:{NFSU2_TR(0x43961e);
if(r1(R+514)){{goto L439646;}}
}
B439620:L439620:{c.instructions+=3;NFSU2_TR(0x439620);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439623:{NFSU2_TR(0x439623);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B439625:{NFSU2_TR(0x439625);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L439646;}}
}
B439627:L439627:{c.instructions+=10;NFSU2_TR(0x439627);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B439628:{NFSU2_TR(0x439628);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43962b:{NFSU2_TR(0x43962b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43962c:{NFSU2_TR(0x43962c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43962f:{NFSU2_TR(0x43962f);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B439632:{NFSU2_TR(0x439632);
{u32 ea_=u32(u32(7890016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B439638:{NFSU2_TR(0x439638);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43963b:{NFSU2_TR(0x43963b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43963d:{NFSU2_TR(0x43963d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B439640:{NFSU2_TR(0x439640);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439620u);}goto L439620;}}
}
B439642:L439642:{c.instructions+=1;NFSU2_TR(0x439642);
{goto L439646;}
}
B439644:L439644:{c.instructions+=1;NFSU2_TR(0x439644);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B439646:L439646:{c.instructions+=3;NFSU2_TR(0x439646);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439649:{NFSU2_TR(0x439649);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43964b:{NFSU2_TR(0x43964b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43966d;}}
}
B43964d:L43964d:{c.instructions+=6;NFSU2_TR(0x43964d);
__builtin_memmove((R+24),(R+8),4);
}
B43964f:{NFSU2_TR(0x43964f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B439652:{NFSU2_TR(0x439652);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B439654:{NFSU2_TR(0x439654);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B439658:{NFSU2_TR(0x439658);
__builtin_memmove((R+28),(R+0),4);
}
B43965a:{NFSU2_TR(0x43965a);
__builtin_memmove((R+12),(R+12),4);
}
B439660:L439660:{c.instructions+=2;NFSU2_TR(0x439660);
__builtin_memmove((R+4),(R+24),4);
}
B439662:{NFSU2_TR(0x439662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439667ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4392e0u);}goto L4392e0;}
}
B439667:L439667:{c.instructions+=3;NFSU2_TR(0x439667);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B43966a:{NFSU2_TR(0x43966a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43966b:{NFSU2_TR(0x43966b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439660u);}goto L439660;}}
}
B43966d:L43966d:{c.instructions+=2;NFSU2_TR(0x43966d);
w4(R+28,u32(0x827ba8ull));
}
B439672:{NFSU2_TR(0x439672);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B439674:L439674:{c.instructions+=3;NFSU2_TR(0x439674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B439676:{NFSU2_TR(0x439676);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B439678:{NFSU2_TR(0x439678);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L439766;}}
}
B43967e:L43967e:{c.instructions+=5;NFSU2_TR(0x43967e);
{u32 ea_=u32(r4(R+24)+u32(8551740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B439684:{NFSU2_TR(0x439684);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43968a:{NFSU2_TR(0x43968a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43968c:{NFSU2_TR(0x43968c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43968f:{NFSU2_TR(0x43968f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4396b6;}}
}
B439691:L439691:{c.instructions+=10;NFSU2_TR(0x439691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827d40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439697:{NFSU2_TR(0x439697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827d3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43969d:{NFSU2_TR(0x43969d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43969f:{NFSU2_TR(0x43969f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396a0:{NFSU2_TR(0x4396a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827d38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4396a6:{NFSU2_TR(0x4396a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396a7:{NFSU2_TR(0x4396a7);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4396ac:{NFSU2_TR(0x4396ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4396b0:{NFSU2_TR(0x4396b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396b1:{NFSU2_TR(0x4396b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4396b6ull));
TAIL_STATIC(0x61fb00u,61f);
}
B4396b6:L4396b6:{c.instructions+=5;NFSU2_TR(0x4396b6);
{u32 ea_=u32(r4(R+24)+u32(8551868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4396bc:{NFSU2_TR(0x4396bc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4396c2:{NFSU2_TR(0x4396c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4396c4:{NFSU2_TR(0x4396c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4396c7:{NFSU2_TR(0x4396c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4396f1;}}
}
B4396c9:L4396c9:{c.instructions+=11;NFSU2_TR(0x4396c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827dc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4396cf:{NFSU2_TR(0x4396cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827dbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4396d5:{NFSU2_TR(0x4396d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827db8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4396db:{NFSU2_TR(0x4396db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396dd:{NFSU2_TR(0x4396dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396de:{NFSU2_TR(0x4396de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4396e0:{NFSU2_TR(0x4396e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396e1:{NFSU2_TR(0x4396e1);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4396e7:{NFSU2_TR(0x4396e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4396eb:{NFSU2_TR(0x4396eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4396ec:{NFSU2_TR(0x4396ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4396f1ull));
TAIL_STATIC(0x61fb00u,61f);
}
B4396f1:L4396f1:{c.instructions+=5;NFSU2_TR(0x4396f1);
{u32 ea_=u32(r4(R+24)+u32(8551980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4396f7:{NFSU2_TR(0x4396f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4396fd:{NFSU2_TR(0x4396fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4396ff:{NFSU2_TR(0x4396ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439702:{NFSU2_TR(0x439702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43972c;}}
}
B439704:L439704:{c.instructions+=11;NFSU2_TR(0x439704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827e30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43970a:{NFSU2_TR(0x43970a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827e2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439710:{NFSU2_TR(0x439710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827e28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439716:{NFSU2_TR(0x439716);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439718:{NFSU2_TR(0x439718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439719:{NFSU2_TR(0x439719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43971b:{NFSU2_TR(0x43971b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43971c:{NFSU2_TR(0x43971c);
__builtin_memmove((R+4),gp(0x890080),4);
}
B439722:{NFSU2_TR(0x439722);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B439726:{NFSU2_TR(0x439726);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439727:{NFSU2_TR(0x439727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43972cull));
TAIL_STATIC(0x61fb00u,61f);
}
B43972c:L43972c:{c.instructions+=5;NFSU2_TR(0x43972c);
{u32 ea_=u32(r4(R+24)+u32(8551636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B439732:{NFSU2_TR(0x439732);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B439738:{NFSU2_TR(0x439738);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43973a:{NFSU2_TR(0x43973a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43973d:{NFSU2_TR(0x43973d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439766;}}
}
B43973f:L43973f:{c.instructions+=11;NFSU2_TR(0x43973f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827cd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439745:{NFSU2_TR(0x439745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43974b:{NFSU2_TR(0x43974b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x827cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439751:{NFSU2_TR(0x439751);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439753:{NFSU2_TR(0x439753);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439754:{NFSU2_TR(0x439754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B439756:{NFSU2_TR(0x439756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439757:{NFSU2_TR(0x439757);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43975c:{NFSU2_TR(0x43975c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43975d:{NFSU2_TR(0x43975d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B439761:{NFSU2_TR(0x439761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439766ull));
TAIL_STATIC(0x61fb00u,61f);
}
B439766:L439766:{c.instructions+=4;NFSU2_TR(0x439766);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B439769:{NFSU2_TR(0x439769);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B43976c:{NFSU2_TR(0x43976c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x827c48ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x827c48ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x827c48ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439772:{NFSU2_TR(0x439772);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439674u);}goto L439674;}}
}
B439778:L439778:{c.instructions+=3;NFSU2_TR(0x439778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439779:{NFSU2_TR(0x439779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43977a:{NFSU2_TR(0x43977a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439780:L439780:{c.instructions+=30;NFSU2_TR(0x439780);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439782:{NFSU2_TR(0x439782);
u8 U[4];
w4(U+0,u32(0x771dd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439787:{NFSU2_TR(0x439787);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43978d:{NFSU2_TR(0x43978d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43978e:{NFSU2_TR(0x43978e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439795:{NFSU2_TR(0x439795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B439798:{NFSU2_TR(0x439798);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439799:{NFSU2_TR(0x439799);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43979a:{NFSU2_TR(0x43979a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43979b:{NFSU2_TR(0x43979b);
__builtin_memmove((R+24),(R+4),4);
}
B43979d:{NFSU2_TR(0x43979d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43979e:{NFSU2_TR(0x43979e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4397a2:{NFSU2_TR(0x4397a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4397a4:{NFSU2_TR(0x4397a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4397a7:{NFSU2_TR(0x4397a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4397aa:{NFSU2_TR(0x4397aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4397ad:{NFSU2_TR(0x4397ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4397af:{NFSU2_TR(0x4397af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4397b1:{NFSU2_TR(0x4397b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4397b4:{NFSU2_TR(0x4397b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4397b8:{NFSU2_TR(0x4397b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4397bf:{NFSU2_TR(0x4397bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4397c3:{NFSU2_TR(0x4397c3);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397c8:{NFSU2_TR(0x4397c8);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397cd:{NFSU2_TR(0x4397cd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397cf:{NFSU2_TR(0x4397cf);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397d1:{NFSU2_TR(0x4397d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4397d4:{NFSU2_TR(0x4397d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397d5:{NFSU2_TR(0x4397d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4397da:{NFSU2_TR(0x4397da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4397dfull));
TAIL_STATIC(0x75c461u,75c);
}
B4397df:L4397df:{c.instructions+=3;NFSU2_TR(0x4397df);
u8 U[4];
w4(U+0,u32(0x78647cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397e4:{NFSU2_TR(0x4397e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4397e9:{NFSU2_TR(0x4397e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4397eeull));
TAIL_STATIC(0x43db50u,43d);
}
B4397ee:L4397ee:{c.instructions+=3;NFSU2_TR(0x4397ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397ef:{NFSU2_TR(0x4397ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397f0:{NFSU2_TR(0x4397f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4397f5ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B4397f5:L4397f5:{c.instructions+=5;NFSU2_TR(0x4397f5);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397f7:{NFSU2_TR(0x4397f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4397fa:{NFSU2_TR(0x4397fa);
u8 U[4];
w4(U+0,u32(0x786464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4397ff:{NFSU2_TR(0x4397ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439800:{NFSU2_TR(0x439800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439805ull));
TAIL_STATIC(0x43dc00u,43d);
}
B439805:L439805:{c.instructions+=10;NFSU2_TR(0x439805);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B43980b:{NFSU2_TR(0x43980b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B43980e:{NFSU2_TR(0x43980e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B439810:{NFSU2_TR(0x439810);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B439814:{NFSU2_TR(0x439814);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439818:{NFSU2_TR(0x439818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43981b:{NFSU2_TR(0x43981b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43981f:{NFSU2_TR(0x43981f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B439822:{NFSU2_TR(0x439822);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B439825:{NFSU2_TR(0x439825);
{goto L439830;}
}
B439827:L439827:{c.instructions+=2;NFSU2_TR(0x439827);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B439829:{NFSU2_TR(0x439829);
__builtin_memmove((R+16),(R+16),4);
}
B439830:L439830:{c.instructions+=22;NFSU2_TR(0x439830);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B439834:{NFSU2_TR(0x439834);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B439836:{NFSU2_TR(0x439836);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43983a:{NFSU2_TR(0x43983a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43983e:{NFSU2_TR(0x43983e);
{u32 ea_=u32(u32(7887888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B439844:{NFSU2_TR(0x439844);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B439848:{NFSU2_TR(0x439848);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43984b:{NFSU2_TR(0x43984b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43984e:{NFSU2_TR(0x43984e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439851:{NFSU2_TR(0x439851);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B439853:{NFSU2_TR(0x439853);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439856:{NFSU2_TR(0x439856);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439858:{NFSU2_TR(0x439858);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43985c:{NFSU2_TR(0x43985c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43985f:{NFSU2_TR(0x43985f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B439861:{NFSU2_TR(0x439861);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B439862:{NFSU2_TR(0x439862);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B439865:{NFSU2_TR(0x439865);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
}
B439868:{NFSU2_TR(0x439868);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43986b:{NFSU2_TR(0x43986b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43986f:{NFSU2_TR(0x43986f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439873:{NFSU2_TR(0x439873);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439827u);}goto L439827;}}
}
B439875:L439875:{c.instructions+=2;NFSU2_TR(0x439875);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439876:{NFSU2_TR(0x439876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43987bull));
TAIL_STATIC(0x48e380u,48e);
}
B43987b:L43987b:{c.instructions+=10;NFSU2_TR(0x43987b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43987f:{NFSU2_TR(0x43987f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439882:{NFSU2_TR(0x439882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439883:{NFSU2_TR(0x439883);
__builtin_memmove((R+0),(R+24),4);
}
B439885:{NFSU2_TR(0x439885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439886:{NFSU2_TR(0x439886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439887:{NFSU2_TR(0x439887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439888:{NFSU2_TR(0x439888);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43988f:{NFSU2_TR(0x43988f);
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
B439892:{NFSU2_TR(0x439892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4398a0:L4398a0:{c.instructions+=10;NFSU2_TR(0x4398a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398a2:{NFSU2_TR(0x4398a2);
u8 U[4];
w4(U+0,u32(0x771ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398a7:{NFSU2_TR(0x4398a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4398ad:{NFSU2_TR(0x4398ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398ae:{NFSU2_TR(0x4398ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4398b5:{NFSU2_TR(0x4398b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398b6:{NFSU2_TR(0x4398b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398b8:{NFSU2_TR(0x4398b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398ba:{NFSU2_TR(0x4398ba);
u8 U[4];
w4(U+0,u32(0x7864a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398bf:{NFSU2_TR(0x4398bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4398c4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4398c4:L4398c4:{c.instructions+=3;NFSU2_TR(0x4398c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4398c7:{NFSU2_TR(0x4398c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398c8:{NFSU2_TR(0x4398c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4398cdull));
TAIL_STATIC(0x4901d0u,490);
}
B4398cd:L4398cd:{c.instructions+=5;NFSU2_TR(0x4398cd);
__builtin_memmove(gp(0x827b24),(R+0),4);
}
B4398d2:{NFSU2_TR(0x4398d2);
__builtin_memmove((R+0),gp(0x827b28),4);
}
B4398d7:{NFSU2_TR(0x4398d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4398da:{NFSU2_TR(0x4398da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4398dc:{NFSU2_TR(0x4398dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43991d;}}
}
B4398de:L4398de:{c.instructions+=2;NFSU2_TR(0x4398de);
u8 U[4];
w4(U+0,u32(0x114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4398e3:{NFSU2_TR(0x4398e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4398e8ull));
TAIL_STATIC(0x575620u,575);
}
B4398e8:L4398e8:{c.instructions+=5;NFSU2_TR(0x4398e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4398eb:{NFSU2_TR(0x4398eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4398ef:{NFSU2_TR(0x4398ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4398f1:{NFSU2_TR(0x4398f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4398f9:{NFSU2_TR(0x4398f9);
if(r1(R+518)){{goto L439916;}}
}
B4398fb:L4398fb:{c.instructions+=2;NFSU2_TR(0x4398fb);
__builtin_memmove((R+4),(R+0),4);
}
B4398fd:{NFSU2_TR(0x4398fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439902ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439780u);}goto L439780;}
}
B439902:L439902:{c.instructions+=5;NFSU2_TR(0x439902);
__builtin_memmove(gp(0x827b28),(R+0),4);
}
B439907:{NFSU2_TR(0x439907);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43990b:{NFSU2_TR(0x43990b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439912:{NFSU2_TR(0x439912);
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
B439915:{NFSU2_TR(0x439915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439916:L439916:{c.instructions+=2;NFSU2_TR(0x439916);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B439918:{NFSU2_TR(0x439918);
__builtin_memmove(gp(0x827b28),(R+0),4);
}
B43991d:L43991d:{c.instructions+=4;NFSU2_TR(0x43991d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439921:{NFSU2_TR(0x439921);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439928:{NFSU2_TR(0x439928);
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
B43992b:{NFSU2_TR(0x43992b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439930:L439930:{c.instructions+=4;NFSU2_TR(0x439930);
__builtin_memmove((R+4),gp(0x827b28),4);
}
B439936:{NFSU2_TR(0x439936);
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
B439938:{NFSU2_TR(0x439938);
s4(0x827b24,u32(0x0ull));
}
B439942:{NFSU2_TR(0x439942);
if(r1(R+518)){{goto L439960;}}
}
B439944:L439944:{c.instructions+=3;NFSU2_TR(0x439944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439945:{NFSU2_TR(0x439945);
__builtin_memmove((R+24),(R+4),4);
}
B439947:{NFSU2_TR(0x439947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43994cull));
TAIL_STATIC(0x437b00u,437);
}
B43994c:L43994c:{c.instructions+=2;NFSU2_TR(0x43994c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43994d:{NFSU2_TR(0x43994d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439952ull));
TAIL_STATIC(0x575630u,575);
}
B439952:L439952:{c.instructions+=3;NFSU2_TR(0x439952);
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
B439955:{NFSU2_TR(0x439955);
s4(0x827b28,u32(0x0ull));
}
B43995f:{NFSU2_TR(0x43995f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439960:L439960:{c.instructions+=1;NFSU2_TR(0x439960);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439970:L439970:{c.instructions+=8;NFSU2_TR(0x439970);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439971:{NFSU2_TR(0x439971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439972:{NFSU2_TR(0x439972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439973:{NFSU2_TR(0x439973);
__builtin_memmove((R+28),(R+4),4);
}
B439975:{NFSU2_TR(0x439975);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439978:{NFSU2_TR(0x439978);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43997a:{NFSU2_TR(0x43997a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43997c:{NFSU2_TR(0x43997c);
if(r1(R+518)){{goto L4399d8;}}
}
B43997e:L43997e:{c.instructions+=4;NFSU2_TR(0x43997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439981:{NFSU2_TR(0x439981);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439983:{NFSU2_TR(0x439983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439986:{NFSU2_TR(0x439986);
if(r1(R+518)){{goto L439994;}}
}
B439988:L439988:{c.instructions+=2;NFSU2_TR(0x439988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439989:{NFSU2_TR(0x439989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43998eull));
TAIL_STATIC(0x575630u,575);
}
B43998e:L43998e:{c.instructions+=2;NFSU2_TR(0x43998e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439991:{NFSU2_TR(0x439991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439994:L439994:{c.instructions+=4;NFSU2_TR(0x439994);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439997:{NFSU2_TR(0x439997);
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
B439999:{NFSU2_TR(0x439999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43999c:{NFSU2_TR(0x43999c);
if(r1(R+518)){{goto L4399ad;}}
}
B43999e:L43999e:{c.instructions+=3;NFSU2_TR(0x43999e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399a0:{NFSU2_TR(0x4399a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399a1:{NFSU2_TR(0x4399a1);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399a7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4399a7:L4399a7:{c.instructions+=2;NFSU2_TR(0x4399a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4399aa:{NFSU2_TR(0x4399aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4399ad:L4399ad:{c.instructions+=3;NFSU2_TR(0x4399ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4399b0:{NFSU2_TR(0x4399b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4399b3:{NFSU2_TR(0x4399b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399b8ull));
TAIL_STATIC(0x434a20u,434);
}
B4399b8:L4399b8:{c.instructions+=3;NFSU2_TR(0x4399b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4399bb:{NFSU2_TR(0x4399bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4399bd:{NFSU2_TR(0x4399bd);
if(r1(R+518)){{goto L4399d5;}}
}
B4399bf:L4399bf:{c.instructions+=2;NFSU2_TR(0x4399bf);
__builtin_memmove((R+4),(R+24),4);
}
B4399c1:{NFSU2_TR(0x4399c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399c6ull));
TAIL_STATIC(0x4383a0u,438);
}
B4399c6:L4399c6:{c.instructions+=4;NFSU2_TR(0x4399c6);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B4399cb:{NFSU2_TR(0x4399cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399cc:{NFSU2_TR(0x4399cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399cd:{NFSU2_TR(0x4399cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399d2ull));
TAIL_STATIC(0x43f920u,43f);
}
B4399d2:L4399d2:{c.instructions+=1;NFSU2_TR(0x4399d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4399d5:L4399d5:{c.instructions+=1;NFSU2_TR(0x4399d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4399d8:L4399d8:{c.instructions+=3;NFSU2_TR(0x4399d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4399db:{NFSU2_TR(0x4399db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4399dd:{NFSU2_TR(0x4399dd);
if(r1(R+518)){{goto L4399f9;}}
}
B4399df:L4399df:{c.instructions+=2;NFSU2_TR(0x4399df);
__builtin_memmove((R+4),(R+24),4);
}
B4399e1:{NFSU2_TR(0x4399e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399e6ull));
TAIL_STATIC(0x633fd0u,633);
}
B4399e6:L4399e6:{c.instructions+=4;NFSU2_TR(0x4399e6);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B4399ec:{NFSU2_TR(0x4399ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399ed:{NFSU2_TR(0x4399ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4399ee:{NFSU2_TR(0x4399ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4399f3ull));
TAIL_STATIC(0x43f920u,43f);
}
B4399f3:L4399f3:{c.instructions+=2;NFSU2_TR(0x4399f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4399f6:{NFSU2_TR(0x4399f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4399f9:L4399f9:{c.instructions+=3;NFSU2_TR(0x4399f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4399fc:{NFSU2_TR(0x4399fc);
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
B4399fe:{NFSU2_TR(0x4399fe);
if(r1(R+518)){{goto L439a09;}}
}
B439a00:L439a00:{c.instructions+=2;NFSU2_TR(0x439a00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a01:{NFSU2_TR(0x439a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a06ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B439a06:L439a06:{c.instructions+=1;NFSU2_TR(0x439a06);
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
B439a09:L439a09:{c.instructions+=4;NFSU2_TR(0x439a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439a0a:{NFSU2_TR(0x439a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439a0b:{NFSU2_TR(0x439a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439a0c:{NFSU2_TR(0x439a0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439a10:L439a10:{c.instructions+=12;NFSU2_TR(0x439a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a11:{NFSU2_TR(0x439a11);
__builtin_memmove((R+20),(R+16),4);
}
B439a13:{NFSU2_TR(0x439a13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B439a16:{NFSU2_TR(0x439a16);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439a19:{NFSU2_TR(0x439a19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a1a:{NFSU2_TR(0x439a1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a1b:{NFSU2_TR(0x439a1b);
__builtin_memmove((R+24),(R+4),4);
}
B439a1d:{NFSU2_TR(0x439a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439a20:{NFSU2_TR(0x439a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B439a22:{NFSU2_TR(0x439a22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a23:{NFSU2_TR(0x439a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a26:{NFSU2_TR(0x439a26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B439a29:L439a29:{c.instructions+=7;NFSU2_TR(0x439a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B439a2c:{NFSU2_TR(0x439a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439a2e:{NFSU2_TR(0x439a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a31:{NFSU2_TR(0x439a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439a34:{NFSU2_TR(0x439a34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a35:{NFSU2_TR(0x439a35);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a3a:{NFSU2_TR(0x439a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a3full));
TAIL_STATIC(0x43db80u,43d);
}
B439a3f:L439a3f:{c.instructions+=5;NFSU2_TR(0x439a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439a42:{NFSU2_TR(0x439a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a43:{NFSU2_TR(0x439a43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a44:{NFSU2_TR(0x439a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a47:{NFSU2_TR(0x439a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a4cull));
TAIL_STATIC(0x43db80u,43d);
}
B439a4c:L439a4c:{c.instructions+=4;NFSU2_TR(0x439a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439a4f:{NFSU2_TR(0x439a4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a50:{NFSU2_TR(0x439a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a53:{NFSU2_TR(0x439a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a58ull));
TAIL_STATIC(0x638010u,638);
}
B439a58:L439a58:{c.instructions+=5;NFSU2_TR(0x439a58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B439a5b:{NFSU2_TR(0x439a5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a5c:{NFSU2_TR(0x439a5c);
__builtin_memmove((R+4),(R+0),4);
}
B439a5e:{NFSU2_TR(0x439a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a61:{NFSU2_TR(0x439a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a66ull));
TAIL_STATIC(0x6345b0u,634);
}
B439a66:L439a66:{c.instructions+=6;NFSU2_TR(0x439a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439a69:{NFSU2_TR(0x439a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439a6c:{NFSU2_TR(0x439a6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B439a70:{NFSU2_TR(0x439a70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a71:{NFSU2_TR(0x439a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439a77:{NFSU2_TR(0x439a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a7cull));
TAIL_STATIC(0x43c780u,43c);
}
B439a7c:L439a7c:{c.instructions+=6;NFSU2_TR(0x439a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439a7f:{NFSU2_TR(0x439a7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B439a83:{NFSU2_TR(0x439a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a84:{NFSU2_TR(0x439a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439a87:{NFSU2_TR(0x439a87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439a88:{NFSU2_TR(0x439a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439a8dull));
TAIL_STATIC(0x4012b0u,401);
}
B439a8d:L439a8d:{c.instructions+=4;NFSU2_TR(0x439a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439a93:{NFSU2_TR(0x439a93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B439a96:{NFSU2_TR(0x439a96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439a98:{NFSU2_TR(0x439a98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439aa1;}}
}
B439a9a:L439a9a:{c.instructions+=2;NFSU2_TR(0x439a9a);
__builtin_memmove((R+4),(R+28),4);
}
B439a9c:{NFSU2_TR(0x439a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439aa1ull));
TAIL_STATIC(0x6147e0u,614);
}
B439aa1:L439aa1:{c.instructions+=3;NFSU2_TR(0x439aa1);
__builtin_memmove((R+8),gp(0x827b54),4);
}
B439aa7:{NFSU2_TR(0x439aa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439aa8:{NFSU2_TR(0x439aa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439aadull));
TAIL_STATIC(0x440e50u,440);
}
B439aad:L439aad:{c.instructions+=3;NFSU2_TR(0x439aad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439ab0:{NFSU2_TR(0x439ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439ab2:{NFSU2_TR(0x439ab2);
if(r1(R+518)){{goto L439abd;}}
}
B439ab4:L439ab4:{c.instructions+=2;NFSU2_TR(0x439ab4);
__builtin_memmove((R+4),(R+0),4);
}
B439ab6:{NFSU2_TR(0x439ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439abbull));
TAIL_STATIC(0x4364e0u,436);
}
B439abb:L439abb:{c.instructions+=1;NFSU2_TR(0x439abb);
{goto L439abf;}
}
B439abd:L439abd:{c.instructions+=1;NFSU2_TR(0x439abd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B439abf:L439abf:{c.instructions+=13;NFSU2_TR(0x439abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439ac2:{NFSU2_TR(0x439ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439ac5:{NFSU2_TR(0x439ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439acb:{NFSU2_TR(0x439acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439ace:{NFSU2_TR(0x439ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439ad1:{NFSU2_TR(0x439ad1);
w4(R+8,u32(0x3f800000ull));
}
B439ad6:{NFSU2_TR(0x439ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439ad9:{NFSU2_TR(0x439ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439adc:{NFSU2_TR(0x439adc);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B439adf:{NFSU2_TR(0x439adf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B439ae5:{NFSU2_TR(0x439ae5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B439ae7:{NFSU2_TR(0x439ae7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B439aea:{NFSU2_TR(0x439aea);
if(r1(R+514)){{goto L439aef;}}
}
B439aec:L439aec:{c.instructions+=1;NFSU2_TR(0x439aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439aef:L439aef:{c.instructions+=7;NFSU2_TR(0x439aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439af2:{NFSU2_TR(0x439af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x80ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B439af9:{NFSU2_TR(0x439af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439b00:{NFSU2_TR(0x439b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439b03:{NFSU2_TR(0x439b03);
u8 U[4];
w4(U+0,u32(0x786458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b08:{NFSU2_TR(0x439b08);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B439b0b:{NFSU2_TR(0x439b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b10ull));
TAIL_STATIC(0x43db50u,43d);
}
B439b10:L439b10:{c.instructions+=2;NFSU2_TR(0x439b10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b11:{NFSU2_TR(0x439b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b16ull));
TAIL_STATIC(0x434dc0u,434);
}
B439b16:L439b16:{c.instructions+=5;NFSU2_TR(0x439b16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B439b19:{NFSU2_TR(0x439b19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b1a:{NFSU2_TR(0x439b1a);
__builtin_memmove((R+4),(R+28),4);
}
B439b1c:{NFSU2_TR(0x439b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439b20:{NFSU2_TR(0x439b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b25ull));
TAIL_STATIC(0x434f20u,434);
}
B439b25:L439b25:{c.instructions+=6;NFSU2_TR(0x439b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439b28:{NFSU2_TR(0x439b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2aull))));
s4(u32(r4(U+0)),r4(U+4));
}
B439b2c:{NFSU2_TR(0x439b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439b2f:{NFSU2_TR(0x439b2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b30:{NFSU2_TR(0x439b30);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b35:{NFSU2_TR(0x439b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b3aull));
TAIL_STATIC(0x43db80u,43d);
}
B439b3a:L439b3a:{c.instructions+=4;NFSU2_TR(0x439b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439b3d:{NFSU2_TR(0x439b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b3e:{NFSU2_TR(0x439b3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b3f:{NFSU2_TR(0x439b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b44ull));
TAIL_STATIC(0x43db80u,43d);
}
B439b44:L439b44:{c.instructions+=3;NFSU2_TR(0x439b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b45:{NFSU2_TR(0x439b45);
u8 U[4];
w4(U+0,u32(0x785df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b4a:{NFSU2_TR(0x439b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b4full));
TAIL_STATIC(0x43db80u,43d);
}
B439b4f:L439b4f:{c.instructions+=5;NFSU2_TR(0x439b4f);
__builtin_memmove((R+28),(R+0),4);
}
B439b51:{NFSU2_TR(0x439b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439b54:{NFSU2_TR(0x439b54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b55:{NFSU2_TR(0x439b55);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b5a:{NFSU2_TR(0x439b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b5full));
TAIL_STATIC(0x43db80u,43d);
}
B439b5f:L439b5f:{c.instructions+=4;NFSU2_TR(0x439b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439b62:{NFSU2_TR(0x439b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b63:{NFSU2_TR(0x439b63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b64:{NFSU2_TR(0x439b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b69ull));
TAIL_STATIC(0x43db80u,43d);
}
B439b69:L439b69:{c.instructions+=3;NFSU2_TR(0x439b69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b6a:{NFSU2_TR(0x439b6a);
u8 U[4];
w4(U+0,u32(0x785df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b6f:{NFSU2_TR(0x439b6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b74ull));
TAIL_STATIC(0x43db80u,43d);
}
B439b74:L439b74:{c.instructions+=5;NFSU2_TR(0x439b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439b77:{NFSU2_TR(0x439b77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b78:{NFSU2_TR(0x439b78);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b7d:{NFSU2_TR(0x439b7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439b81:{NFSU2_TR(0x439b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b86ull));
TAIL_STATIC(0x43db80u,43d);
}
B439b86:L439b86:{c.instructions+=4;NFSU2_TR(0x439b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b87:{NFSU2_TR(0x439b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439b8a:{NFSU2_TR(0x439b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b8b:{NFSU2_TR(0x439b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b90ull));
TAIL_STATIC(0x43db80u,43d);
}
B439b90:L439b90:{c.instructions+=4;NFSU2_TR(0x439b90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B439b93:{NFSU2_TR(0x439b93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b94:{NFSU2_TR(0x439b94);
u8 U[4];
w4(U+0,u32(0x785df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439b99:{NFSU2_TR(0x439b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439b9eull));
TAIL_STATIC(0x43db80u,43d);
}
B439b9e:L439b9e:{c.instructions+=6;NFSU2_TR(0x439b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439ba1:{NFSU2_TR(0x439ba1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B439ba4:{NFSU2_TR(0x439ba4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B439ba6:{NFSU2_TR(0x439ba6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439ba7:{NFSU2_TR(0x439ba7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439ba8:{NFSU2_TR(0x439ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439badull));
TAIL_STATIC(0x434a80u,434);
}
B439bad:L439bad:{c.instructions+=5;NFSU2_TR(0x439bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439bb1:{NFSU2_TR(0x439bb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439bb3:{NFSU2_TR(0x439bb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439bb4:{NFSU2_TR(0x439bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439bb7:{NFSU2_TR(0x439bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439bbcull));
TAIL_STATIC(0x434a80u,434);
}
B439bbc:L439bbc:{c.instructions+=3;NFSU2_TR(0x439bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439bbf:{NFSU2_TR(0x439bbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B439bc2:{NFSU2_TR(0x439bc2);
if(r1(R+518)){{goto L439bca;}}
}
B439bc4:L439bc4:{c.instructions+=2;NFSU2_TR(0x439bc4);
u8 U[22];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B439bc8:{NFSU2_TR(0x439bc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439c25;}}
}
B439bca:L439bca:{c.instructions+=4;NFSU2_TR(0x439bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439bcd:{NFSU2_TR(0x439bcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439bcf:{NFSU2_TR(0x439bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439bd2:{NFSU2_TR(0x439bd2);
if(r1(R+518)){{goto L439be0;}}
}
B439bd4:L439bd4:{c.instructions+=2;NFSU2_TR(0x439bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439bd5:{NFSU2_TR(0x439bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439bdaull));
TAIL_STATIC(0x575630u,575);
}
B439bda:L439bda:{c.instructions+=2;NFSU2_TR(0x439bda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439bdd:{NFSU2_TR(0x439bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439be0:L439be0:{c.instructions+=4;NFSU2_TR(0x439be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439be3:{NFSU2_TR(0x439be3);
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
B439be5:{NFSU2_TR(0x439be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439be8:{NFSU2_TR(0x439be8);
if(r1(R+518)){{goto L439bf9;}}
}
B439bea:L439bea:{c.instructions+=3;NFSU2_TR(0x439bea);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439bec:{NFSU2_TR(0x439bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439bed:{NFSU2_TR(0x439bed);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439bf3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B439bf3:L439bf3:{c.instructions+=2;NFSU2_TR(0x439bf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B439bf6:{NFSU2_TR(0x439bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439bf9:L439bf9:{c.instructions+=3;NFSU2_TR(0x439bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439bfc:{NFSU2_TR(0x439bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439bff:{NFSU2_TR(0x439bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c04ull));
TAIL_STATIC(0x434a20u,434);
}
B439c04:L439c04:{c.instructions+=3;NFSU2_TR(0x439c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439c07:{NFSU2_TR(0x439c07);
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
B439c09:{NFSU2_TR(0x439c09);
if(r1(R+518)){{goto L439c22;}}
}
B439c0b:L439c0b:{c.instructions+=2;NFSU2_TR(0x439c0b);
__builtin_memmove((R+4),(R+28),4);
}
B439c0d:{NFSU2_TR(0x439c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c12ull));
TAIL_STATIC(0x4383a0u,438);
}
B439c12:L439c12:{c.instructions+=4;NFSU2_TR(0x439c12);
__builtin_memmove((R+8),gp(0x827b54),4);
}
B439c18:{NFSU2_TR(0x439c18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c19:{NFSU2_TR(0x439c19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c1a:{NFSU2_TR(0x439c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c1full));
TAIL_STATIC(0x43f920u,43f);
}
B439c1f:L439c1f:{c.instructions+=1;NFSU2_TR(0x439c1f);
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
B439c22:L439c22:{c.instructions+=1;NFSU2_TR(0x439c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c25:L439c25:{c.instructions+=7;NFSU2_TR(0x439c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439c26:{NFSU2_TR(0x439c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439c27:{NFSU2_TR(0x439c27);
w1(R+0,u8(0x1ull));
}
B439c29:{NFSU2_TR(0x439c29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439c2a:{NFSU2_TR(0x439c2a);
__builtin_memmove((R+16),(R+20),4);
}
B439c2c:{NFSU2_TR(0x439c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439c2d:{NFSU2_TR(0x439c2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439c30:L439c30:{c.instructions+=8;NFSU2_TR(0x439c30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c31:{NFSU2_TR(0x439c31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c32:{NFSU2_TR(0x439c32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c33:{NFSU2_TR(0x439c33);
__builtin_memmove((R+28),(R+4),4);
}
B439c35:{NFSU2_TR(0x439c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439c38:{NFSU2_TR(0x439c38);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B439c3a:{NFSU2_TR(0x439c3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439c3c:{NFSU2_TR(0x439c3c);
if(r1(R+518)){{goto L439c98;}}
}
B439c3e:L439c3e:{c.instructions+=4;NFSU2_TR(0x439c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439c41:{NFSU2_TR(0x439c41);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439c43:{NFSU2_TR(0x439c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c46:{NFSU2_TR(0x439c46);
if(r1(R+518)){{goto L439c54;}}
}
B439c48:L439c48:{c.instructions+=2;NFSU2_TR(0x439c48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c49:{NFSU2_TR(0x439c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c4eull));
TAIL_STATIC(0x575630u,575);
}
B439c4e:L439c4e:{c.instructions+=2;NFSU2_TR(0x439c4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439c51:{NFSU2_TR(0x439c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c54:L439c54:{c.instructions+=4;NFSU2_TR(0x439c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439c57:{NFSU2_TR(0x439c57);
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
B439c59:{NFSU2_TR(0x439c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c5c:{NFSU2_TR(0x439c5c);
if(r1(R+518)){{goto L439c6d;}}
}
B439c5e:L439c5e:{c.instructions+=3;NFSU2_TR(0x439c5e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c60:{NFSU2_TR(0x439c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c61:{NFSU2_TR(0x439c61);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c67ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B439c67:L439c67:{c.instructions+=2;NFSU2_TR(0x439c67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B439c6a:{NFSU2_TR(0x439c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c6d:L439c6d:{c.instructions+=3;NFSU2_TR(0x439c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c70:{NFSU2_TR(0x439c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439c73:{NFSU2_TR(0x439c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c78ull));
TAIL_STATIC(0x434a20u,434);
}
B439c78:L439c78:{c.instructions+=3;NFSU2_TR(0x439c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439c7b:{NFSU2_TR(0x439c7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439c7d:{NFSU2_TR(0x439c7d);
if(r1(R+518)){{goto L439c95;}}
}
B439c7f:L439c7f:{c.instructions+=2;NFSU2_TR(0x439c7f);
__builtin_memmove((R+4),(R+24),4);
}
B439c81:{NFSU2_TR(0x439c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c86ull));
TAIL_STATIC(0x4383a0u,438);
}
B439c86:L439c86:{c.instructions+=4;NFSU2_TR(0x439c86);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B439c8b:{NFSU2_TR(0x439c8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c8c:{NFSU2_TR(0x439c8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439c8d:{NFSU2_TR(0x439c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439c92ull));
TAIL_STATIC(0x43f920u,43f);
}
B439c92:L439c92:{c.instructions+=1;NFSU2_TR(0x439c92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B439c95:L439c95:{c.instructions+=1;NFSU2_TR(0x439c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439c98:L439c98:{c.instructions+=3;NFSU2_TR(0x439c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439c9b:{NFSU2_TR(0x439c9b);
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
B439c9d:{NFSU2_TR(0x439c9d);
if(r1(R+518)){{goto L439ca8;}}
}
B439c9f:L439c9f:{c.instructions+=2;NFSU2_TR(0x439c9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439ca0:{NFSU2_TR(0x439ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439ca5ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B439ca5:L439ca5:{c.instructions+=1;NFSU2_TR(0x439ca5);
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
B439ca8:L439ca8:{c.instructions+=4;NFSU2_TR(0x439ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439ca9:{NFSU2_TR(0x439ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439caa:{NFSU2_TR(0x439caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439cab:{NFSU2_TR(0x439cab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439cb0:L439cb0:{c.instructions+=16;NFSU2_TR(0x439cb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cb2:{NFSU2_TR(0x439cb2);
u8 U[4];
w4(U+0,u32(0x771e36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cb7:{NFSU2_TR(0x439cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439cbd:{NFSU2_TR(0x439cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cbe:{NFSU2_TR(0x439cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439cc5:{NFSU2_TR(0x439cc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cc6:{NFSU2_TR(0x439cc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cc7:{NFSU2_TR(0x439cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cc8:{NFSU2_TR(0x439cc8);
__builtin_memmove((R+28),(R+4),4);
}
B439cca:{NFSU2_TR(0x439cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439cce:{NFSU2_TR(0x439cce);
u8 U[4];
w4(U+0,u32(0x7863a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B439cd4:{NFSU2_TR(0x439cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439cd7:{NFSU2_TR(0x439cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B439cda:{NFSU2_TR(0x439cda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439cdc:{NFSU2_TR(0x439cdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B439ce4:{NFSU2_TR(0x439ce4);
if(r1(R+518)){{goto L439d02;}}
}
B439ce6:L439ce6:{c.instructions+=7;NFSU2_TR(0x439ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439ce9:{NFSU2_TR(0x439ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B439ceb:{NFSU2_TR(0x439ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439cee:{NFSU2_TR(0x439cee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B439cf0:{NFSU2_TR(0x439cf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439cf1:{NFSU2_TR(0x439cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439cf4:{NFSU2_TR(0x439cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439cf9ull));
TAIL_STATIC(0x575630u,575);
}
B439cf9:L439cf9:{c.instructions+=4;NFSU2_TR(0x439cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439cfb:{NFSU2_TR(0x439cfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439cfe:{NFSU2_TR(0x439cfe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439d00:{NFSU2_TR(0x439d00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439ce6u);}goto L439ce6;}}
}
B439d02:L439d02:{c.instructions+=5;NFSU2_TR(0x439d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439d05:{NFSU2_TR(0x439d05);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B439d08:{NFSU2_TR(0x439d08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439d0a:{NFSU2_TR(0x439d0a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B439d0f:{NFSU2_TR(0x439d0f);
if(r1(R+518)){{goto L439d2a;}}
}
B439d11:L439d11:{c.instructions+=6;NFSU2_TR(0x439d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B439d13:{NFSU2_TR(0x439d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439d16:{NFSU2_TR(0x439d16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B439d18:{NFSU2_TR(0x439d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d19:{NFSU2_TR(0x439d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439d1c:{NFSU2_TR(0x439d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439d21ull));
TAIL_STATIC(0x440ef0u,440);
}
B439d21:L439d21:{c.instructions+=4;NFSU2_TR(0x439d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439d23:{NFSU2_TR(0x439d23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439d26:{NFSU2_TR(0x439d26);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439d28:{NFSU2_TR(0x439d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439d11u);}goto L439d11;}}
}
B439d2a:L439d2a:{c.instructions+=4;NFSU2_TR(0x439d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439d2c:{NFSU2_TR(0x439d2c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439d2e:{NFSU2_TR(0x439d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B439d36:{NFSU2_TR(0x439d36);
if(r1(R+518)){{goto L439d51;}}
}
B439d38:L439d38:{c.instructions+=6;NFSU2_TR(0x439d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B439d3a:{NFSU2_TR(0x439d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439d3d:{NFSU2_TR(0x439d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B439d3f:{NFSU2_TR(0x439d3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d40:{NFSU2_TR(0x439d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439d43:{NFSU2_TR(0x439d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439d48ull));
TAIL_STATIC(0x575630u,575);
}
B439d48:L439d48:{c.instructions+=4;NFSU2_TR(0x439d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439d4a:{NFSU2_TR(0x439d4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439d4d:{NFSU2_TR(0x439d4d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439d4f:{NFSU2_TR(0x439d4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439d38u);}goto L439d38;}}
}
B439d51:L439d51:{c.instructions+=6;NFSU2_TR(0x439d51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439d55:{NFSU2_TR(0x439d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439d56:{NFSU2_TR(0x439d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439d57:{NFSU2_TR(0x439d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439d5e:{NFSU2_TR(0x439d5e);
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
B439d61:{NFSU2_TR(0x439d61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439d70:L439d70:{c.instructions+=7;NFSU2_TR(0x439d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439d74:{NFSU2_TR(0x439d74);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37100ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B439d7a:{NFSU2_TR(0x439d7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d7b:{NFSU2_TR(0x439d7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d7c:{NFSU2_TR(0x439d7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d7d:{NFSU2_TR(0x439d7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439d7e:{NFSU2_TR(0x439d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439e98;}}
}
B439d84:L439d84:{c.instructions+=9;NFSU2_TR(0x439d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439d87:{NFSU2_TR(0x439d87);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B439d8a:{NFSU2_TR(0x439d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439d8d:{NFSU2_TR(0x439d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439d91:{NFSU2_TR(0x439d91);
__builtin_memmove((R+0),gp(0x827c9c),4);
}
B439d96:{NFSU2_TR(0x439d96);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B439d98:{NFSU2_TR(0x439d98);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B439d9a:{NFSU2_TR(0x439d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439d9c:{NFSU2_TR(0x439d9c);
if(r1(R+518)){{goto L439da3;}}
}
B439d9e:L439d9e:{c.instructions+=2;NFSU2_TR(0x439d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B439da1:{NFSU2_TR(0x439da1);
{goto L439da5;}
}
B439da3:L439da3:{c.instructions+=1;NFSU2_TR(0x439da3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B439da5:L439da5:{c.instructions+=2;NFSU2_TR(0x439da5);
w4(R+4,u32(0x827c9cull));
}
B439daa:{NFSU2_TR(0x439daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439dafull));
TAIL_STATIC(0x431780u,431);
}
B439daf:L439daf:{c.instructions+=1;NFSU2_TR(0x439daf);
}
B439db0:L439db0:{c.instructions+=2;NFSU2_TR(0x439db0);
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
B439db2:{NFSU2_TR(0x439db2);
if(r1(R+518)){{goto L439dde;}}
}
B439db4:L439db4:{c.instructions+=3;NFSU2_TR(0x439db4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439db8:{NFSU2_TR(0x439db8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B439dbb:{NFSU2_TR(0x439dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439dcc;}}
}
B439dbd:L439dbd:{c.instructions+=6;NFSU2_TR(0x439dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439dc0:{NFSU2_TR(0x439dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439dc3:{NFSU2_TR(0x439dc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B439dc5:{NFSU2_TR(0x439dc5);
__builtin_memmove((R+20),(R+24),4);
}
B439dc7:{NFSU2_TR(0x439dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439dca:{NFSU2_TR(0x439dca);
w1(R+12,u8(0x1ull));
}
B439dcc:L439dcc:{c.instructions+=3;NFSU2_TR(0x439dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439dcf:{NFSU2_TR(0x439dcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439dd1:{NFSU2_TR(0x439dd1);
if(r1(R+518)){{goto L439dd8;}}
}
B439dd3:L439dd3:{c.instructions+=2;NFSU2_TR(0x439dd3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B439dd6:{NFSU2_TR(0x439dd6);
{goto L439dda;}
}
B439dd8:L439dd8:{c.instructions+=1;NFSU2_TR(0x439dd8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B439dda:L439dda:{c.instructions+=2;NFSU2_TR(0x439dda);
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
B439ddc:{NFSU2_TR(0x439ddc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439db0u);}goto L439db0;}}
}
B439dde:L439dde:{c.instructions+=3;NFSU2_TR(0x439dde);
__builtin_memmove((R+24),gp(0x827ca4),4);
}
B439de4:{NFSU2_TR(0x439de4);
w4(R+4,u32(0x827ca4ull));
}
B439de9:{NFSU2_TR(0x439de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439deeull));
TAIL_STATIC(0x502fd0u,502);
}
B439dee:L439dee:{c.instructions+=2;NFSU2_TR(0x439dee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439df0:{NFSU2_TR(0x439df0);
if(r1(R+518)){{goto L439dfd;}}
}
B439df2:L439df2:{c.instructions+=2;NFSU2_TR(0x439df2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B439df5:{NFSU2_TR(0x439df5);
if(r1(R+518)){{goto L439e5f;}}
}
B439df7:L439df7:{c.instructions+=3;NFSU2_TR(0x439df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B439df9:{NFSU2_TR(0x439df9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439dfb:{NFSU2_TR(0x439dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439df2u);}goto L439df2;}}
}
B439dfd:L439dfd:{c.instructions+=4;NFSU2_TR(0x439dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439e00:{NFSU2_TR(0x439e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439e03:{NFSU2_TR(0x439e03);
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
B439e05:{NFSU2_TR(0x439e05);
if(r1(R+518)){{goto L439e20;}}
}
B439e07:L439e07:{c.instructions+=4;NFSU2_TR(0x439e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439e0a:{NFSU2_TR(0x439e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B439e0c:{NFSU2_TR(0x439e0c);
__builtin_memmove((R+4),(R+24),4);
}
B439e0e:{NFSU2_TR(0x439e0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B439e11:L439e11:{c.instructions+=4;NFSU2_TR(0x439e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439e13:{NFSU2_TR(0x439e13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e15:{NFSU2_TR(0x439e15);
__builtin_memmove((R+4),(R+24),4);
}
B439e17:{NFSU2_TR(0x439e17);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e19ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B439e19:L439e19:{c.instructions+=3;NFSU2_TR(0x439e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B439e1c:{NFSU2_TR(0x439e1c);
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
B439e1e:{NFSU2_TR(0x439e1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439e07u);}goto L439e07;}}
}
B439e20:L439e20:{c.instructions+=2;NFSU2_TR(0x439e20);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+12))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B439e22:{NFSU2_TR(0x439e22);
if(r1(R+518)){{goto L439e40;}}
}
B439e24:L439e24:{c.instructions+=7;NFSU2_TR(0x439e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439e27:{NFSU2_TR(0x439e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B439e29:{NFSU2_TR(0x439e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439e2c:{NFSU2_TR(0x439e2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B439e2e:{NFSU2_TR(0x439e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e2f:{NFSU2_TR(0x439e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439e32:{NFSU2_TR(0x439e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e37ull));
TAIL_STATIC(0x440ef0u,440);
}
B439e37:L439e37:{c.instructions+=4;NFSU2_TR(0x439e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439e39:{NFSU2_TR(0x439e39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439e3c:{NFSU2_TR(0x439e3c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439e3e:{NFSU2_TR(0x439e3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439e24u);}goto L439e24;}}
}
B439e40:L439e40:{c.instructions+=3;NFSU2_TR(0x439e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439e43:{NFSU2_TR(0x439e43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e44:{NFSU2_TR(0x439e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e49ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B439e49:L439e49:{c.instructions+=5;NFSU2_TR(0x439e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B439e4c:{NFSU2_TR(0x439e4c);
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
B439e4f:{NFSU2_TR(0x439e4f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e51:{NFSU2_TR(0x439e51);
__builtin_memmove((R+4),(R+20),4);
}
B439e53:{NFSU2_TR(0x439e53);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e55ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B439e55:L439e55:{c.instructions+=6;NFSU2_TR(0x439e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439e56:{NFSU2_TR(0x439e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439e57:{NFSU2_TR(0x439e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439e58:{NFSU2_TR(0x439e58);
w4(R+0,u32(0x1ull));
}
B439e5d:{NFSU2_TR(0x439e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439e5e:{NFSU2_TR(0x439e5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439e5f:L439e5f:{c.instructions+=6;NFSU2_TR(0x439e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439e61:{NFSU2_TR(0x439e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439e64:{NFSU2_TR(0x439e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439e66:{NFSU2_TR(0x439e66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e67:{NFSU2_TR(0x439e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439e6a:{NFSU2_TR(0x439e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e6full));
TAIL_STATIC(0x440ef0u,440);
}
B439e6f:L439e6f:{c.instructions+=3;NFSU2_TR(0x439e6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B439e72:{NFSU2_TR(0x439e72);
__builtin_memmove((R+4),(R+20),4);
}
B439e74:{NFSU2_TR(0x439e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e79ull));
TAIL_STATIC(0x4380f0u,438);
}
B439e79:L439e79:{c.instructions+=3;NFSU2_TR(0x439e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439e7c:{NFSU2_TR(0x439e7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e7d:{NFSU2_TR(0x439e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e82ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B439e82:L439e82:{c.instructions+=5;NFSU2_TR(0x439e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439e85:{NFSU2_TR(0x439e85);
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
B439e88:{NFSU2_TR(0x439e88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439e8a:{NFSU2_TR(0x439e8a);
__builtin_memmove((R+4),(R+20),4);
}
B439e8c:{NFSU2_TR(0x439e8c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439e8eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B439e8e:L439e8e:{c.instructions+=6;NFSU2_TR(0x439e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439e8f:{NFSU2_TR(0x439e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439e90:{NFSU2_TR(0x439e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439e91:{NFSU2_TR(0x439e91);
w4(R+0,u32(0x1ull));
}
B439e96:{NFSU2_TR(0x439e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439e97:{NFSU2_TR(0x439e97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439e98:L439e98:{c.instructions+=6;NFSU2_TR(0x439e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439e99:{NFSU2_TR(0x439e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439e9a:{NFSU2_TR(0x439e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439e9b:{NFSU2_TR(0x439e9b);
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
B439e9d:{NFSU2_TR(0x439e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439e9e:{NFSU2_TR(0x439e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439ea0:L439ea0:{c.instructions+=20;NFSU2_TR(0x439ea0);
__builtin_memmove((R+0),(R+4),4);
}
B439ea2:{NFSU2_TR(0x439ea2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439ea5:{NFSU2_TR(0x439ea5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439ea7:{NFSU2_TR(0x439ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439eaa:{NFSU2_TR(0x439eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439ead:{NFSU2_TR(0x439ead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439eaf:{NFSU2_TR(0x439eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439eb2:{NFSU2_TR(0x439eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439eb5:{NFSU2_TR(0x439eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439eb7:{NFSU2_TR(0x439eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439eba:{NFSU2_TR(0x439eba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439ebd:{NFSU2_TR(0x439ebd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439ebf:{NFSU2_TR(0x439ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439ec2:{NFSU2_TR(0x439ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439ec5:{NFSU2_TR(0x439ec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B439ec7:{NFSU2_TR(0x439ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439eca:{NFSU2_TR(0x439eca);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B439ecc:{NFSU2_TR(0x439ecc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B439ecf:{NFSU2_TR(0x439ecf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B439ed2:{NFSU2_TR(0x439ed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439ee0:L439ee0:{c.instructions+=5;NFSU2_TR(0x439ee0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B439ee5:{NFSU2_TR(0x439ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439ee7:{NFSU2_TR(0x439ee7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439ee8:{NFSU2_TR(0x439ee8);
__builtin_memmove((R+24),(R+4),4);
}
B439eea:{NFSU2_TR(0x439eea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439f3a;}}
}
B439eec:L439eec:{c.instructions+=3;NFSU2_TR(0x439eec);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B439ef1:{NFSU2_TR(0x439ef1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439ef3:{NFSU2_TR(0x439ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439f3a;}}
}
B439ef5:L439ef5:{c.instructions+=3;NFSU2_TR(0x439ef5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B439ef8:{NFSU2_TR(0x439ef8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B439efa:{NFSU2_TR(0x439efa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439f01;}}
}
B439efc:L439efc:{c.instructions+=1;NFSU2_TR(0x439efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439f01ull));
TAIL_STATIC(0x4385b0u,438);
}
B439f01:L439f01:{c.instructions+=4;NFSU2_TR(0x439f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439f04:{NFSU2_TR(0x439f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439f06:{NFSU2_TR(0x439f06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B439f09:{NFSU2_TR(0x439f09);
if(r1(R+518)){{goto L439f10;}}
}
B439f0b:L439f0b:{c.instructions+=2;NFSU2_TR(0x439f0b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B439f0e:{NFSU2_TR(0x439f0e);
{goto L439f12;}
}
B439f10:L439f10:{c.instructions+=1;NFSU2_TR(0x439f10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B439f12:L439f12:{c.instructions+=1;NFSU2_TR(0x439f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439f16:L439f16:{c.instructions+=2;NFSU2_TR(0x439f16);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439f18:{NFSU2_TR(0x439f18);
if(r1(R+518)){{goto L439f1f;}}
}
B439f1a:L439f1a:{c.instructions+=2;NFSU2_TR(0x439f1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B439f1d:{NFSU2_TR(0x439f1d);
{goto L439f21;}
}
B439f1f:L439f1f:{c.instructions+=1;NFSU2_TR(0x439f1f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B439f21:L439f21:{c.instructions+=2;NFSU2_TR(0x439f21);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439f23:{NFSU2_TR(0x439f23);
if(r1(R+518)){{goto L439f3a;}}
}
B439f25:L439f25:{c.instructions+=2;NFSU2_TR(0x439f25);
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
B439f28:{NFSU2_TR(0x439f28);
if(r1(R+518)){{goto L439f3c;}}
}
B439f2a:L439f2a:{c.instructions+=3;NFSU2_TR(0x439f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439f2d:{NFSU2_TR(0x439f2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439f2f:{NFSU2_TR(0x439f2f);
if(r1(R+518)){{goto L439f36;}}
}
B439f31:L439f31:{c.instructions+=2;NFSU2_TR(0x439f31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B439f34:{NFSU2_TR(0x439f34);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439f16u);}goto L439f16;}
}
B439f36:L439f36:{c.instructions+=2;NFSU2_TR(0x439f36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B439f38:{NFSU2_TR(0x439f38);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439f16u);}goto L439f16;}
}
B439f3a:L439f3a:{c.instructions+=1;NFSU2_TR(0x439f3a);
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
B439f3c:L439f3c:{c.instructions+=2;NFSU2_TR(0x439f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439f3d:{NFSU2_TR(0x439f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439f40:L439f40:{c.instructions+=9;NFSU2_TR(0x439f40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f41:{NFSU2_TR(0x439f41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f42:{NFSU2_TR(0x439f42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f43:{NFSU2_TR(0x439f43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f44:{NFSU2_TR(0x439f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B439f48:{NFSU2_TR(0x439f48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f49:{NFSU2_TR(0x439f49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f4a:{NFSU2_TR(0x439f4a);
w4(R+4,u32(0x827ef0ull));
}
B439f4f:{NFSU2_TR(0x439f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439f54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x439ee0u);}goto L439ee0;}
}
B439f54:L439f54:{c.instructions+=3;NFSU2_TR(0x439f54);
__builtin_memmove((R+4),gp(0x827b94),4);
}
B439f5a:{NFSU2_TR(0x439f5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439f5c:{NFSU2_TR(0x439f5c);
if(r1(R+518)){TAIL_STATIC(0x43a02eu,43a);}
}
B439f62:L439f62:{c.instructions+=2;NFSU2_TR(0x439f62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B439f63:{NFSU2_TR(0x439f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439f68ull));
TAIL_STATIC(0x432170u,432);
}
B439f68:L439f68:{c.instructions+=3;NFSU2_TR(0x439f68);
__builtin_memmove((R+24),(R+0),4);
}
B439f6a:{NFSU2_TR(0x439f6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439f6c:{NFSU2_TR(0x439f6c);
if(r1(R+518)){TAIL_STATIC(0x43a02eu,43a);}
}
B439f72:L439f72:{c.instructions+=4;NFSU2_TR(0x439f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439f75:{NFSU2_TR(0x439f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439f77:{NFSU2_TR(0x439f77);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439f79:{NFSU2_TR(0x439f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439f7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B439f7c:L439f7c:{c.instructions+=3;NFSU2_TR(0x439f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B439f80:{NFSU2_TR(0x439f80);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B439f82:{NFSU2_TR(0x439f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L439fee;}}
}
B439f84:L439f84:{c.instructions+=3;NFSU2_TR(0x439f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B439f87:{NFSU2_TR(0x439f87);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439f89:{NFSU2_TR(0x439f89);
if(r1(R+518)){TAIL_STATIC(0x43a02eu,43a);}
}
B439f8f:L439f8f:{c.instructions+=3;NFSU2_TR(0x439f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B439f91:{NFSU2_TR(0x439f91);
__builtin_memmove((R+4),(R+12),4);
}
B439f93:{NFSU2_TR(0x439f93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439f96ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B439f96:L439f96:{c.instructions+=4;NFSU2_TR(0x439f96);
__builtin_memmove((R+24),(R+0),4);
}
B439f98:{NFSU2_TR(0x439f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439f9e:{NFSU2_TR(0x439f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B439fa0:{NFSU2_TR(0x439fa0);
if(r1(R+518)){{goto L439fa9;}}
}
B439fa2:L439fa2:{c.instructions+=2;NFSU2_TR(0x439fa2);
__builtin_memmove((R+4),(R+24),4);
}
B439fa4:{NFSU2_TR(0x439fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439fa9ull));
TAIL_STATIC(0x60bb10u,60b);
}
B439fa9:L439fa9:{c.instructions+=10;NFSU2_TR(0x439fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439fac:{NFSU2_TR(0x439fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439fb0:{NFSU2_TR(0x439fb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B439fb2:{NFSU2_TR(0x439fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439fb5:{NFSU2_TR(0x439fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439fb8:{NFSU2_TR(0x439fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B439fbc:{NFSU2_TR(0x439fbc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B439fbe:{NFSU2_TR(0x439fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439fc1:{NFSU2_TR(0x439fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439fc4:{NFSU2_TR(0x439fc4);
if(r1(R+518)){TAIL_STATIC(0x43a026u,43a);}
}
B439fc6:L439fc6:{c.instructions+=4;NFSU2_TR(0x439fc6);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B439fc9:{NFSU2_TR(0x439fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B439fcc:{NFSU2_TR(0x439fcc);
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
B439fce:{NFSU2_TR(0x439fce);
if(r1(R+518)){TAIL_STATIC(0x43a026u,43a);}
}
B439fd0:L439fd0:{c.instructions+=1;NFSU2_TR(0x439fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439fd5ull));
TAIL_STATIC(0x431610u,431);
}
B439fd5:L439fd5:{c.instructions+=2;NFSU2_TR(0x439fd5);
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
B439fd7:{NFSU2_TR(0x439fd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43a01fu,43a);}
}
B439fd9:L439fd9:{c.instructions+=1;NFSU2_TR(0x439fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x439fdeull));
TAIL_STATIC(0x431660u,431);
}
B439fde:L439fde:{c.instructions+=2;NFSU2_TR(0x439fde);
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
B439fe0:{NFSU2_TR(0x439fe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43a01fu,43a);}
}
B439fe2:L439fe2:{c.instructions+=9;NFSU2_TR(0x439fe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B439fe3:{NFSU2_TR(0x439fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B439fe4:{NFSU2_TR(0x439fe4);
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
B439fe6:{NFSU2_TR(0x439fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B439fe7:{NFSU2_TR(0x439fe7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B439fe9:{NFSU2_TR(0x439fe9);
w1(R+0,u8(0x1ull));
}
B439feb:{NFSU2_TR(0x439feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B439fec:{NFSU2_TR(0x439fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B439fed:{NFSU2_TR(0x439fed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B439fee:L439fee:{c.instructions+=4;NFSU2_TR(0x439fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B439ff1:{NFSU2_TR(0x439ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B439ff3:{NFSU2_TR(0x439ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B439ff7:{NFSU2_TR(0x439ff7);
TAIL_STATIC(0x43a000u,43a);
}
B439ff9:L439ff9:{c.instructions+=2;NFSU2_TR(0x439ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B439ffd:{NFSU2_TR(0x439ffd);
__builtin_memmove((R+4),(R+4),4);
TAIL_STATIC(0x43a000u,43a);
}
XIT:NFSU2_TR_EXIT(0x439,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
