#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_407(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_424(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_427(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x426,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x426,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_426(u8* __restrict R,Cpu& c);
u32 page_426(Cpu& c){return body_426(c.regs.data(),c);}
__attribute__((noinline)) u32 body_426(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x426000:goto L426000;
case 0x426006:c.instructions+=6;goto B426006;
case 0x42600c:c.instructions+=5;goto B42600c;
case 0x42600e:c.instructions+=4;goto B42600e;
case 0x426014:c.instructions+=3;goto B426014;
case 0x42601e:c.instructions+=2;goto B42601e;
case 0x426024:c.instructions+=1;goto B426024;
case 0x426029:goto L426029;
case 0x42602e:c.instructions+=3;goto B42602e;
case 0x426030:c.instructions+=2;goto B426030;
case 0x426035:c.instructions+=1;goto B426035;
case 0x426037:goto L426037;
case 0x42603a:c.instructions+=1;goto B42603a;
case 0x42603c:goto L42603c;
case 0x42603e:c.instructions+=1;goto B42603e;
case 0x426040:goto L426040;
case 0x426042:goto L426042;
case 0x426048:c.instructions+=19;goto B426048;
case 0x42604e:c.instructions+=18;goto B42604e;
case 0x426054:c.instructions+=17;goto B426054;
case 0x42605a:c.instructions+=16;goto B42605a;
case 0x426060:c.instructions+=15;goto B426060;
case 0x426066:c.instructions+=14;goto B426066;
case 0x42606c:c.instructions+=13;goto B42606c;
case 0x426070:c.instructions+=12;goto B426070;
case 0x426076:c.instructions+=11;goto B426076;
case 0x42607c:c.instructions+=10;goto B42607c;
case 0x426082:c.instructions+=9;goto B426082;
case 0x426088:c.instructions+=8;goto B426088;
case 0x426089:c.instructions+=7;goto B426089;
case 0x426093:c.instructions+=6;goto B426093;
case 0x426095:c.instructions+=5;goto B426095;
case 0x426096:c.instructions+=4;goto B426096;
case 0x426097:c.instructions+=3;goto B426097;
case 0x42609e:c.instructions+=2;goto B42609e;
case 0x4260a1:c.instructions+=1;goto B4260a1;
case 0x4260b0:goto L4260b0;
case 0x4260b2:c.instructions+=13;goto B4260b2;
case 0x4260b7:c.instructions+=12;goto B4260b7;
case 0x4260bd:c.instructions+=11;goto B4260bd;
case 0x4260be:c.instructions+=10;goto B4260be;
case 0x4260c5:c.instructions+=9;goto B4260c5;
case 0x4260c6:c.instructions+=8;goto B4260c6;
case 0x4260c7:c.instructions+=7;goto B4260c7;
case 0x4260c8:c.instructions+=6;goto B4260c8;
case 0x4260c9:c.instructions+=5;goto B4260c9;
case 0x4260cd:c.instructions+=4;goto B4260cd;
case 0x4260cf:c.instructions+=3;goto B4260cf;
case 0x4260d0:c.instructions+=2;goto B4260d0;
case 0x4260d4:c.instructions+=1;goto B4260d4;
case 0x4260d9:goto L4260d9;
case 0x4260db:c.instructions+=11;goto B4260db;
case 0x4260e1:c.instructions+=10;goto B4260e1;
case 0x4260e7:c.instructions+=9;goto B4260e7;
case 0x4260ed:c.instructions+=8;goto B4260ed;
case 0x4260f3:c.instructions+=7;goto B4260f3;
case 0x4260f9:c.instructions+=6;goto B4260f9;
case 0x4260ff:c.instructions+=5;goto B4260ff;
case 0x426101:c.instructions+=4;goto B426101;
case 0x426105:c.instructions+=3;goto B426105;
case 0x42610b:c.instructions+=2;goto B42610b;
case 0x426111:c.instructions+=1;goto B426111;
case 0x426116:goto L426116;
case 0x426119:c.instructions+=4;goto B426119;
case 0x42611d:c.instructions+=3;goto B42611d;
case 0x42611f:c.instructions+=2;goto B42611f;
case 0x426124:c.instructions+=1;goto B426124;
case 0x426126:goto L426126;
case 0x42612c:c.instructions+=3;goto B42612c;
case 0x42612d:c.instructions+=2;goto B42612d;
case 0x42612f:c.instructions+=1;goto B42612f;
case 0x426134:goto L426134;
case 0x426136:goto L426136;
case 0x426138:goto L426138;
case 0x42613e:c.instructions+=4;goto B42613e;
case 0x426141:c.instructions+=3;goto B426141;
case 0x426144:c.instructions+=2;goto B426144;
case 0x426148:c.instructions+=1;goto B426148;
case 0x42614a:goto L42614a;
case 0x426150:c.instructions+=1;goto B426150;
case 0x426152:goto L426152;
case 0x426158:c.instructions+=1;goto B426158;
case 0x42615a:goto L42615a;
case 0x426160:c.instructions+=1;goto B426160;
case 0x426162:goto L426162;
case 0x426168:c.instructions+=1;goto B426168;
case 0x42616a:goto L42616a;
case 0x426170:c.instructions+=1;goto B426170;
case 0x426172:goto L426172;
case 0x426177:c.instructions+=1;goto B426177;
case 0x42617c:goto L42617c;
case 0x42617f:c.instructions+=4;goto B42617f;
case 0x426183:c.instructions+=3;goto B426183;
case 0x426185:c.instructions+=2;goto B426185;
case 0x42618a:c.instructions+=1;goto B42618a;
case 0x42618c:goto L42618c;
case 0x42618d:c.instructions+=2;goto B42618d;
case 0x42618f:c.instructions+=1;goto B42618f;
case 0x426194:goto L426194;
case 0x426196:goto L426196;
case 0x42619b:c.instructions+=1;goto B42619b;
case 0x4261a0:goto L4261a0;
case 0x4261a3:c.instructions+=4;goto B4261a3;
case 0x4261a7:c.instructions+=3;goto B4261a7;
case 0x4261a9:c.instructions+=2;goto B4261a9;
case 0x4261ae:c.instructions+=1;goto B4261ae;
case 0x4261b0:goto L4261b0;
case 0x4261b1:c.instructions+=2;goto B4261b1;
case 0x4261b3:c.instructions+=1;goto B4261b3;
case 0x4261b8:goto L4261b8;
case 0x4261ba:goto L4261ba;
case 0x4261bc:goto L4261bc;
case 0x4261bf:goto L4261bf;
case 0x4261c5:c.instructions+=8;goto B4261c5;
case 0x4261cb:c.instructions+=7;goto B4261cb;
case 0x4261d1:c.instructions+=6;goto B4261d1;
case 0x4261d7:c.instructions+=5;goto B4261d7;
case 0x4261dd:c.instructions+=4;goto B4261dd;
case 0x4261e3:c.instructions+=3;goto B4261e3;
case 0x4261e9:c.instructions+=2;goto B4261e9;
case 0x4261ef:c.instructions+=1;goto B4261ef;
case 0x4261f4:goto L4261f4;
case 0x4261f8:c.instructions+=11;goto B4261f8;
case 0x4261fe:c.instructions+=10;goto B4261fe;
case 0x426204:c.instructions+=9;goto B426204;
case 0x42620a:c.instructions+=8;goto B42620a;
case 0x426210:c.instructions+=7;goto B426210;
case 0x426211:c.instructions+=6;goto B426211;
case 0x426213:c.instructions+=5;goto B426213;
case 0x426214:c.instructions+=4;goto B426214;
case 0x426215:c.instructions+=3;goto B426215;
case 0x42621c:c.instructions+=2;goto B42621c;
case 0x42621f:c.instructions+=1;goto B42621f;
case 0x426230:goto L426230;
case 0x426236:c.instructions+=10;goto B426236;
case 0x426238:c.instructions+=9;goto B426238;
case 0x42623d:c.instructions+=8;goto B42623d;
case 0x42623e:c.instructions+=7;goto B42623e;
case 0x426242:c.instructions+=6;goto B426242;
case 0x426245:c.instructions+=5;goto B426245;
case 0x42624c:c.instructions+=4;goto B42624c;
case 0x42624d:c.instructions+=3;goto B42624d;
case 0x42624e:c.instructions+=2;goto B42624e;
case 0x426250:c.instructions+=1;goto B426250;
case 0x426256:goto L426256;
case 0x426258:c.instructions+=4;goto B426258;
case 0x42625e:c.instructions+=3;goto B42625e;
case 0x426261:c.instructions+=2;goto B426261;
case 0x426263:c.instructions+=1;goto B426263;
case 0x426265:goto L426265;
case 0x42626b:c.instructions+=1;goto B42626b;
case 0x426271:goto L426271;
case 0x426277:c.instructions+=2;goto B426277;
case 0x426279:c.instructions+=1;goto B426279;
case 0x42627b:goto L42627b;
case 0x42627d:c.instructions+=5;goto B42627d;
case 0x42627e:c.instructions+=4;goto B42627e;
case 0x42627f:c.instructions+=3;goto B42627f;
case 0x426282:c.instructions+=2;goto B426282;
case 0x426283:c.instructions+=1;goto B426283;
case 0x426286:goto L426286;
case 0x42628b:goto L42628b;
case 0x426291:c.instructions+=2;goto B426291;
case 0x426292:c.instructions+=1;goto B426292;
case 0x426297:goto L426297;
case 0x426299:c.instructions+=5;goto B426299;
case 0x42629c:c.instructions+=4;goto B42629c;
case 0x4262a0:c.instructions+=3;goto B4262a0;
case 0x4262a2:c.instructions+=2;goto B4262a2;
case 0x4262aa:c.instructions+=1;goto B4262aa;
case 0x4262ac:goto L4262ac;
case 0x4262b1:c.instructions+=4;goto B4262b1;
case 0x4262b3:c.instructions+=3;goto B4262b3;
case 0x4262b5:c.instructions+=2;goto B4262b5;
case 0x4262b7:c.instructions+=1;goto B4262b7;
case 0x4262bc:goto L4262bc;
case 0x4262c0:c.instructions+=8;goto B4262c0;
case 0x4262c6:c.instructions+=7;goto B4262c6;
case 0x4262c8:c.instructions+=6;goto B4262c8;
case 0x4262cc:c.instructions+=5;goto B4262cc;
case 0x4262d3:c.instructions+=4;goto B4262d3;
case 0x4262d4:c.instructions+=3;goto B4262d4;
case 0x4262d5:c.instructions+=2;goto B4262d5;
case 0x4262d8:c.instructions+=1;goto B4262d8;
case 0x4262db:goto L4262db;
case 0x4262df:c.instructions+=8;goto B4262df;
case 0x4262e1:c.instructions+=7;goto B4262e1;
case 0x4262e3:c.instructions+=6;goto B4262e3;
case 0x4262e7:c.instructions+=5;goto B4262e7;
case 0x4262ee:c.instructions+=4;goto B4262ee;
case 0x4262ef:c.instructions+=3;goto B4262ef;
case 0x4262f0:c.instructions+=2;goto B4262f0;
case 0x4262f3:c.instructions+=1;goto B4262f3;
case 0x4262f6:goto L4262f6;
case 0x4262f9:c.instructions+=2;goto B4262f9;
case 0x4262fc:c.instructions+=1;goto B4262fc;
case 0x426302:goto L426302;
case 0x426309:c.instructions+=1;goto B426309;
case 0x426310:goto L426310;
case 0x426316:c.instructions+=2;goto B426316;
case 0x426317:c.instructions+=1;goto B426317;
case 0x42631c:goto L42631c;
case 0x42631f:c.instructions+=4;goto B42631f;
case 0x426323:c.instructions+=3;goto B426323;
case 0x426325:c.instructions+=2;goto B426325;
case 0x42632d:c.instructions+=1;goto B42632d;
case 0x426333:goto L426333;
case 0x426339:c.instructions+=4;goto B426339;
case 0x42633a:c.instructions+=3;goto B42633a;
case 0x42633c:c.instructions+=2;goto B42633c;
case 0x42633e:c.instructions+=1;goto B42633e;
case 0x426343:goto L426343;
case 0x426347:c.instructions+=7;goto B426347;
case 0x426349:c.instructions+=6;goto B426349;
case 0x42634d:c.instructions+=5;goto B42634d;
case 0x426354:c.instructions+=4;goto B426354;
case 0x426355:c.instructions+=3;goto B426355;
case 0x426356:c.instructions+=2;goto B426356;
case 0x426359:c.instructions+=1;goto B426359;
case 0x42635c:goto L42635c;
case 0x426361:c.instructions+=2;goto B426361;
case 0x426362:c.instructions+=1;goto B426362;
case 0x426367:goto L426367;
case 0x42636a:c.instructions+=4;goto B42636a;
case 0x42636e:c.instructions+=3;goto B42636e;
case 0x426370:c.instructions+=2;goto B426370;
case 0x426378:c.instructions+=1;goto B426378;
case 0x42637e:goto L42637e;
case 0x426384:c.instructions+=4;goto B426384;
case 0x426385:c.instructions+=3;goto B426385;
case 0x426387:c.instructions+=2;goto B426387;
case 0x426389:c.instructions+=1;goto B426389;
case 0x42638e:goto L42638e;
case 0x426392:c.instructions+=7;goto B426392;
case 0x426394:c.instructions+=6;goto B426394;
case 0x426398:c.instructions+=5;goto B426398;
case 0x42639f:c.instructions+=4;goto B42639f;
case 0x4263a0:c.instructions+=3;goto B4263a0;
case 0x4263a1:c.instructions+=2;goto B4263a1;
case 0x4263a4:c.instructions+=1;goto B4263a4;
case 0x4263a7:goto L4263a7;
case 0x4263ac:c.instructions+=2;goto B4263ac;
case 0x4263ad:c.instructions+=1;goto B4263ad;
case 0x4263b2:goto L4263b2;
case 0x4263b5:c.instructions+=4;goto B4263b5;
case 0x4263b9:c.instructions+=3;goto B4263b9;
case 0x4263bb:c.instructions+=2;goto B4263bb;
case 0x4263c3:c.instructions+=1;goto B4263c3;
case 0x4263c5:goto L4263c5;
case 0x4263cb:c.instructions+=8;goto B4263cb;
case 0x4263cc:c.instructions+=7;goto B4263cc;
case 0x4263d2:c.instructions+=6;goto B4263d2;
case 0x4263d5:c.instructions+=5;goto B4263d5;
case 0x4263d6:c.instructions+=4;goto B4263d6;
case 0x4263d7:c.instructions+=3;goto B4263d7;
case 0x4263dc:c.instructions+=2;goto B4263dc;
case 0x4263de:c.instructions+=1;goto B4263de;
case 0x4263e3:goto L4263e3;
case 0x4263e5:goto L4263e5;
case 0x4263e7:goto L4263e7;
case 0x4263eb:c.instructions+=8;goto B4263eb;
case 0x4263ed:c.instructions+=7;goto B4263ed;
case 0x4263f7:c.instructions+=6;goto B4263f7;
case 0x4263fb:c.instructions+=5;goto B4263fb;
case 0x426402:c.instructions+=4;goto B426402;
case 0x426403:c.instructions+=3;goto B426403;
case 0x426404:c.instructions+=2;goto B426404;
case 0x426407:c.instructions+=1;goto B426407;
case 0x42640a:goto L42640a;
case 0x42640f:c.instructions+=2;goto B42640f;
case 0x426410:c.instructions+=1;goto B426410;
case 0x426415:goto L426415;
case 0x426418:c.instructions+=4;goto B426418;
case 0x42641c:c.instructions+=3;goto B42641c;
case 0x42641e:c.instructions+=2;goto B42641e;
case 0x426426:c.instructions+=1;goto B426426;
case 0x426428:goto L426428;
case 0x42642e:c.instructions+=5;goto B42642e;
case 0x426433:c.instructions+=4;goto B426433;
case 0x426434:c.instructions+=3;goto B426434;
case 0x426439:c.instructions+=2;goto B426439;
case 0x42643b:c.instructions+=1;goto B42643b;
case 0x426440:goto L426440;
case 0x426444:c.instructions+=7;goto B426444;
case 0x426446:c.instructions+=6;goto B426446;
case 0x42644a:c.instructions+=5;goto B42644a;
case 0x426451:c.instructions+=4;goto B426451;
case 0x426452:c.instructions+=3;goto B426452;
case 0x426453:c.instructions+=2;goto B426453;
case 0x426456:c.instructions+=1;goto B426456;
case 0x426459:goto L426459;
case 0x42645e:c.instructions+=2;goto B42645e;
case 0x42645f:c.instructions+=1;goto B42645f;
case 0x426464:goto L426464;
case 0x426467:c.instructions+=4;goto B426467;
case 0x42646b:c.instructions+=3;goto B42646b;
case 0x42646d:c.instructions+=2;goto B42646d;
case 0x426475:c.instructions+=1;goto B426475;
case 0x426477:goto L426477;
case 0x42647d:c.instructions+=4;goto B42647d;
case 0x42647e:c.instructions+=3;goto B42647e;
case 0x426483:c.instructions+=2;goto B426483;
case 0x426485:c.instructions+=1;goto B426485;
case 0x42648a:goto L42648a;
case 0x42648e:c.instructions+=7;goto B42648e;
case 0x426490:c.instructions+=6;goto B426490;
case 0x426494:c.instructions+=5;goto B426494;
case 0x42649b:c.instructions+=4;goto B42649b;
case 0x42649c:c.instructions+=3;goto B42649c;
case 0x42649d:c.instructions+=2;goto B42649d;
case 0x4264a0:c.instructions+=1;goto B4264a0;
case 0x4264a3:goto L4264a3;
case 0x4264a7:c.instructions+=8;goto B4264a7;
case 0x4264a9:c.instructions+=7;goto B4264a9;
case 0x4264ab:c.instructions+=6;goto B4264ab;
case 0x4264af:c.instructions+=5;goto B4264af;
case 0x4264b6:c.instructions+=4;goto B4264b6;
case 0x4264b7:c.instructions+=3;goto B4264b7;
case 0x4264b8:c.instructions+=2;goto B4264b8;
case 0x4264bb:c.instructions+=1;goto B4264bb;
case 0x4264be:goto L4264be;
case 0x4264c3:c.instructions+=2;goto B4264c3;
case 0x4264c4:c.instructions+=1;goto B4264c4;
case 0x4264c9:goto L4264c9;
case 0x4264cc:c.instructions+=4;goto B4264cc;
case 0x4264d0:c.instructions+=3;goto B4264d0;
case 0x4264d2:c.instructions+=2;goto B4264d2;
case 0x4264da:c.instructions+=1;goto B4264da;
case 0x4264dc:goto L4264dc;
case 0x4264df:c.instructions+=6;goto B4264df;
case 0x4264e5:c.instructions+=5;goto B4264e5;
case 0x4264e6:c.instructions+=4;goto B4264e6;
case 0x4264e7:c.instructions+=3;goto B4264e7;
case 0x4264ec:c.instructions+=2;goto B4264ec;
case 0x4264ee:c.instructions+=1;goto B4264ee;
case 0x4264f3:goto L4264f3;
case 0x4264f5:goto L4264f5;
case 0x4264fb:c.instructions+=2;goto B4264fb;
case 0x4264fc:c.instructions+=1;goto B4264fc;
case 0x426501:goto L426501;
case 0x426504:c.instructions+=4;goto B426504;
case 0x426508:c.instructions+=3;goto B426508;
case 0x42650a:c.instructions+=2;goto B42650a;
case 0x426512:c.instructions+=1;goto B426512;
case 0x426514:goto L426514;
case 0x42651a:c.instructions+=8;goto B42651a;
case 0x426520:c.instructions+=7;goto B426520;
case 0x426521:c.instructions+=6;goto B426521;
case 0x426524:c.instructions+=5;goto B426524;
case 0x426525:c.instructions+=4;goto B426525;
case 0x426526:c.instructions+=3;goto B426526;
case 0x42652b:c.instructions+=2;goto B42652b;
case 0x42652d:c.instructions+=1;goto B42652d;
case 0x426532:goto L426532;
case 0x426534:goto L426534;
case 0x426536:goto L426536;
case 0x42653a:c.instructions+=7;goto B42653a;
case 0x42653c:c.instructions+=6;goto B42653c;
case 0x426540:c.instructions+=5;goto B426540;
case 0x426541:c.instructions+=4;goto B426541;
case 0x426548:c.instructions+=3;goto B426548;
case 0x426549:c.instructions+=2;goto B426549;
case 0x42654c:c.instructions+=1;goto B42654c;
case 0x426580:goto L426580;
case 0x426582:c.instructions+=13;goto B426582;
case 0x426587:c.instructions+=12;goto B426587;
case 0x42658d:c.instructions+=11;goto B42658d;
case 0x42658e:c.instructions+=10;goto B42658e;
case 0x426595:c.instructions+=9;goto B426595;
case 0x426596:c.instructions+=8;goto B426596;
case 0x426597:c.instructions+=7;goto B426597;
case 0x426598:c.instructions+=6;goto B426598;
case 0x426599:c.instructions+=5;goto B426599;
case 0x42659d:c.instructions+=4;goto B42659d;
case 0x42659f:c.instructions+=3;goto B42659f;
case 0x4265a0:c.instructions+=2;goto B4265a0;
case 0x4265a4:c.instructions+=1;goto B4265a4;
case 0x4265a9:goto L4265a9;
case 0x4265ab:c.instructions+=5;goto B4265ab;
case 0x4265b1:c.instructions+=4;goto B4265b1;
case 0x4265b6:c.instructions+=3;goto B4265b6;
case 0x4265ba:c.instructions+=2;goto B4265ba;
case 0x4265c0:c.instructions+=1;goto B4265c0;
case 0x4265c5:goto L4265c5;
case 0x4265c8:c.instructions+=4;goto B4265c8;
case 0x4265cc:c.instructions+=3;goto B4265cc;
case 0x4265ce:c.instructions+=2;goto B4265ce;
case 0x4265d3:c.instructions+=1;goto B4265d3;
case 0x4265d5:goto L4265d5;
case 0x4265d6:c.instructions+=2;goto B4265d6;
case 0x4265d8:c.instructions+=1;goto B4265d8;
case 0x4265dd:goto L4265dd;
case 0x4265df:goto L4265df;
case 0x4265e1:goto L4265e1;
case 0x4265e5:c.instructions+=21;goto B4265e5;
case 0x4265e8:c.instructions+=20;goto B4265e8;
case 0x4265ec:c.instructions+=19;goto B4265ec;
case 0x4265f0:c.instructions+=18;goto B4265f0;
case 0x4265f6:c.instructions+=17;goto B4265f6;
case 0x4265fa:c.instructions+=16;goto B4265fa;
case 0x426600:c.instructions+=15;goto B426600;
case 0x426606:c.instructions+=14;goto B426606;
case 0x42660c:c.instructions+=13;goto B42660c;
case 0x426612:c.instructions+=12;goto B426612;
case 0x426613:c.instructions+=11;goto B426613;
case 0x42661d:c.instructions+=10;goto B42661d;
case 0x426623:c.instructions+=9;goto B426623;
case 0x42662a:c.instructions+=8;goto B42662a;
case 0x426634:c.instructions+=7;goto B426634;
case 0x426636:c.instructions+=6;goto B426636;
case 0x42663c:c.instructions+=5;goto B42663c;
case 0x42663d:c.instructions+=4;goto B42663d;
case 0x42663e:c.instructions+=3;goto B42663e;
case 0x426645:c.instructions+=2;goto B426645;
case 0x426648:c.instructions+=1;goto B426648;
case 0x426650:goto L426650;
case 0x426652:c.instructions+=12;goto B426652;
case 0x426657:c.instructions+=11;goto B426657;
case 0x42665d:c.instructions+=10;goto B42665d;
case 0x42665e:c.instructions+=9;goto B42665e;
case 0x426665:c.instructions+=8;goto B426665;
case 0x426666:c.instructions+=7;goto B426666;
case 0x42666a:c.instructions+=6;goto B42666a;
case 0x42666b:c.instructions+=5;goto B42666b;
case 0x42666c:c.instructions+=4;goto B42666c;
case 0x42666e:c.instructions+=3;goto B42666e;
case 0x42666f:c.instructions+=2;goto B42666f;
case 0x426673:c.instructions+=1;goto B426673;
case 0x426678:goto L426678;
case 0x42667d:c.instructions+=3;goto B42667d;
case 0x426685:c.instructions+=2;goto B426685;
case 0x42668b:c.instructions+=1;goto B42668b;
case 0x426690:goto L426690;
case 0x426692:c.instructions+=5;goto B426692;
case 0x426695:c.instructions+=4;goto B426695;
case 0x426699:c.instructions+=3;goto B426699;
case 0x42669b:c.instructions+=2;goto B42669b;
case 0x4266a0:c.instructions+=1;goto B4266a0;
case 0x4266a2:goto L4266a2;
case 0x4266a4:c.instructions+=1;goto B4266a4;
case 0x4266a9:goto L4266a9;
case 0x4266af:c.instructions+=2;goto B4266af;
case 0x4266b2:c.instructions+=1;goto B4266b2;
case 0x4266b4:goto L4266b4;
case 0x4266b6:c.instructions+=1;goto B4266b6;
case 0x4266b9:goto L4266b9;
case 0x4266bd:c.instructions+=6;goto B4266bd;
case 0x4266be:c.instructions+=5;goto B4266be;
case 0x4266c0:c.instructions+=4;goto B4266c0;
case 0x4266c1:c.instructions+=3;goto B4266c1;
case 0x4266c8:c.instructions+=2;goto B4266c8;
case 0x4266cb:c.instructions+=1;goto B4266cb;
case 0x4266d0:goto L4266d0;
case 0x4266d2:c.instructions+=14;goto B4266d2;
case 0x4266d7:c.instructions+=13;goto B4266d7;
case 0x4266dd:c.instructions+=12;goto B4266dd;
case 0x4266de:c.instructions+=11;goto B4266de;
case 0x4266e5:c.instructions+=10;goto B4266e5;
case 0x4266e8:c.instructions+=9;goto B4266e8;
case 0x4266ec:c.instructions+=8;goto B4266ec;
case 0x4266ed:c.instructions+=7;goto B4266ed;
case 0x4266ee:c.instructions+=6;goto B4266ee;
case 0x4266ef:c.instructions+=5;goto B4266ef;
case 0x4266f0:c.instructions+=4;goto B4266f0;
case 0x4266f2:c.instructions+=3;goto B4266f2;
case 0x4266f3:c.instructions+=2;goto B4266f3;
case 0x4266f7:c.instructions+=1;goto B4266f7;
case 0x4266fc:goto L4266fc;
case 0x4266ff:c.instructions+=6;goto B4266ff;
case 0x426705:c.instructions+=5;goto B426705;
case 0x426707:c.instructions+=4;goto B426707;
case 0x426709:c.instructions+=3;goto B426709;
case 0x426710:c.instructions+=2;goto B426710;
case 0x426715:c.instructions+=1;goto B426715;
case 0x426717:goto L426717;
case 0x426719:goto L426719;
case 0x42671b:c.instructions+=4;goto B42671b;
case 0x42671f:c.instructions+=3;goto B42671f;
case 0x426725:c.instructions+=2;goto B426725;
case 0x42672b:c.instructions+=1;goto B42672b;
case 0x426730:goto L426730;
case 0x426736:c.instructions+=11;goto B426736;
case 0x42673c:c.instructions+=10;goto B42673c;
case 0x426742:c.instructions+=9;goto B426742;
case 0x426748:c.instructions+=8;goto B426748;
case 0x42674e:c.instructions+=7;goto B42674e;
case 0x426754:c.instructions+=6;goto B426754;
case 0x42675a:c.instructions+=5;goto B42675a;
case 0x426760:c.instructions+=4;goto B426760;
case 0x426762:c.instructions+=3;goto B426762;
case 0x426764:c.instructions+=2;goto B426764;
case 0x42676a:c.instructions+=1;goto B42676a;
case 0x42676f:goto L42676f;
case 0x426771:goto L426771;
case 0x426773:c.instructions+=4;goto B426773;
case 0x426778:c.instructions+=3;goto B426778;
case 0x42677e:c.instructions+=2;goto B42677e;
case 0x426785:c.instructions+=1;goto B426785;
case 0x42678a:goto L42678a;
case 0x42678f:c.instructions+=2;goto B42678f;
case 0x426794:c.instructions+=1;goto B426794;
case 0x426799:goto L426799;
case 0x42679c:c.instructions+=4;goto B42679c;
case 0x4267a0:c.instructions+=3;goto B4267a0;
case 0x4267a2:c.instructions+=2;goto B4267a2;
case 0x4267a7:c.instructions+=1;goto B4267a7;
case 0x4267a9:goto L4267a9;
case 0x4267ad:c.instructions+=3;goto B4267ad;
case 0x4267ae:c.instructions+=2;goto B4267ae;
case 0x4267b0:c.instructions+=1;goto B4267b0;
case 0x4267b5:goto L4267b5;
case 0x4267b7:goto L4267b7;
case 0x4267b9:goto L4267b9;
case 0x4267bb:c.instructions+=9;goto B4267bb;
case 0x4267c0:c.instructions+=8;goto B4267c0;
case 0x4267c3:c.instructions+=7;goto B4267c3;
case 0x4267c9:c.instructions+=6;goto B4267c9;
case 0x4267cf:c.instructions+=5;goto B4267cf;
case 0x4267d5:c.instructions+=4;goto B4267d5;
case 0x4267db:c.instructions+=3;goto B4267db;
case 0x4267e1:c.instructions+=2;goto B4267e1;
case 0x4267e7:c.instructions+=1;goto B4267e7;
case 0x4267ec:goto L4267ec;
case 0x4267f2:c.instructions+=1;goto B4267f2;
case 0x4267f7:goto L4267f7;
case 0x4267fb:c.instructions+=8;goto B4267fb;
case 0x4267fc:c.instructions+=7;goto B4267fc;
case 0x4267fe:c.instructions+=6;goto B4267fe;
case 0x4267ff:c.instructions+=5;goto B4267ff;
case 0x426800:c.instructions+=4;goto B426800;
case 0x426801:c.instructions+=3;goto B426801;
case 0x426808:c.instructions+=2;goto B426808;
case 0x42680b:c.instructions+=1;goto B42680b;
case 0x426810:goto L426810;
case 0x426813:c.instructions+=24;goto B426813;
case 0x426817:c.instructions+=23;goto B426817;
case 0x426818:c.instructions+=22;goto B426818;
case 0x42681c:c.instructions+=21;goto B42681c;
case 0x42681d:c.instructions+=20;goto B42681d;
case 0x42681e:c.instructions+=19;goto B42681e;
case 0x42681f:c.instructions+=18;goto B42681f;
case 0x426820:c.instructions+=17;goto B426820;
case 0x426822:c.instructions+=16;goto B426822;
case 0x426824:c.instructions+=15;goto B426824;
case 0x426826:c.instructions+=14;goto B426826;
case 0x426828:c.instructions+=13;goto B426828;
case 0x42682c:c.instructions+=12;goto B42682c;
case 0x42682f:c.instructions+=11;goto B42682f;
case 0x426833:c.instructions+=10;goto B426833;
case 0x426834:c.instructions+=9;goto B426834;
case 0x426838:c.instructions+=8;goto B426838;
case 0x426839:c.instructions+=7;goto B426839;
case 0x426841:c.instructions+=6;goto B426841;
case 0x426849:c.instructions+=5;goto B426849;
case 0x426851:c.instructions+=4;goto B426851;
case 0x426859:c.instructions+=3;goto B426859;
case 0x426861:c.instructions+=2;goto B426861;
case 0x426867:c.instructions+=1;goto B426867;
case 0x42686c:goto L42686c;
case 0x42686d:c.instructions+=3;goto B42686d;
case 0x42686e:c.instructions+=2;goto B42686e;
case 0x426870:c.instructions+=1;goto B426870;
case 0x426875:goto L426875;
case 0x426879:c.instructions+=5;goto B426879;
case 0x42687a:c.instructions+=4;goto B42687a;
case 0x42687b:c.instructions+=3;goto B42687b;
case 0x42687d:c.instructions+=2;goto B42687d;
case 0x426884:c.instructions+=1;goto B426884;
case 0x426889:goto L426889;
case 0x42688a:c.instructions+=4;goto B42688a;
case 0x42688b:c.instructions+=3;goto B42688b;
case 0x42688c:c.instructions+=2;goto B42688c;
case 0x42688f:c.instructions+=1;goto B42688f;
case 0x4268a0:goto L4268a0;
case 0x4268a1:c.instructions+=8;goto B4268a1;
case 0x4268a3:c.instructions+=7;goto B4268a3;
case 0x4268a6:c.instructions+=6;goto B4268a6;
case 0x4268ac:c.instructions+=5;goto B4268ac;
case 0x4268ad:c.instructions+=4;goto B4268ad;
case 0x4268ae:c.instructions+=3;goto B4268ae;
case 0x4268af:c.instructions+=2;goto B4268af;
case 0x4268b1:c.instructions+=1;goto B4268b1;
case 0x4268b6:goto L4268b6;
case 0x4268b8:c.instructions+=2;goto B4268b8;
case 0x4268bb:c.instructions+=1;goto B4268bb;
case 0x4268bd:goto L4268bd;
case 0x4268be:c.instructions+=2;goto B4268be;
case 0x4268c0:c.instructions+=1;goto B4268c0;
case 0x4268c5:goto L4268c5;
case 0x4268c7:c.instructions+=3;goto B4268c7;
case 0x4268c9:c.instructions+=2;goto B4268c9;
case 0x4268cc:c.instructions+=1;goto B4268cc;
case 0x4268ce:goto L4268ce;
case 0x4268d4:c.instructions+=2;goto B4268d4;
case 0x4268d6:c.instructions+=1;goto B4268d6;
case 0x4268d8:goto L4268d8;
case 0x4268d9:c.instructions+=1;goto B4268d9;
case 0x4268db:goto L4268db;
case 0x4268dc:c.instructions+=2;goto B4268dc;
case 0x4268de:c.instructions+=1;goto B4268de;
case 0x4268e3:goto L4268e3;
case 0x4268e6:c.instructions+=1;goto B4268e6;
case 0x4268ec:goto L4268ec;
case 0x4268f2:c.instructions+=12;goto B4268f2;
case 0x4268f8:c.instructions+=11;goto B4268f8;
case 0x4268fa:c.instructions+=10;goto B4268fa;
case 0x4268ff:c.instructions+=9;goto B4268ff;
case 0x426901:c.instructions+=8;goto B426901;
case 0x426905:c.instructions+=7;goto B426905;
case 0x426909:c.instructions+=6;goto B426909;
case 0x426910:c.instructions+=5;goto B426910;
case 0x426917:c.instructions+=4;goto B426917;
case 0x42691e:c.instructions+=3;goto B42691e;
case 0x426925:c.instructions+=2;goto B426925;
case 0x42692c:c.instructions+=1;goto B42692c;
case 0x42692e:goto L42692e;
case 0x426934:c.instructions+=3;goto B426934;
case 0x426935:c.instructions+=2;goto B426935;
case 0x426939:c.instructions+=1;goto B426939;
case 0x42693e:goto L42693e;
case 0x426945:c.instructions+=1;goto B426945;
case 0x426947:goto L426947;
case 0x426949:c.instructions+=6;goto B426949;
case 0x42694c:c.instructions+=5;goto B42694c;
case 0x42694d:c.instructions+=4;goto B42694d;
case 0x42694e:c.instructions+=3;goto B42694e;
case 0x42694f:c.instructions+=2;goto B42694f;
case 0x426953:c.instructions+=1;goto B426953;
case 0x426958:goto L426958;
case 0x42695c:c.instructions+=1;goto B42695c;
case 0x42695e:goto L42695e;
case 0x426965:c.instructions+=1;goto B426965;
case 0x426967:goto L426967;
case 0x42696e:goto L42696e;
case 0x426974:c.instructions+=4;goto B426974;
case 0x426976:c.instructions+=3;goto B426976;
case 0x426979:c.instructions+=2;goto B426979;
case 0x42697c:c.instructions+=1;goto B42697c;
case 0x42697e:goto L42697e;
case 0x426980:c.instructions+=2;goto B426980;
case 0x426983:c.instructions+=1;goto B426983;
case 0x426985:goto L426985;
case 0x426986:c.instructions+=1;goto B426986;
case 0x426988:goto L426988;
case 0x426989:c.instructions+=1;goto B426989;
case 0x42698b:goto L42698b;
case 0x426990:c.instructions+=1;goto B426990;
case 0x426992:goto L426992;
case 0x426997:goto L426997;
case 0x42699a:c.instructions+=5;goto B42699a;
case 0x42699c:c.instructions+=4;goto B42699c;
case 0x4269a0:c.instructions+=3;goto B4269a0;
case 0x4269a1:c.instructions+=2;goto B4269a1;
case 0x4269a2:c.instructions+=1;goto B4269a2;
case 0x4269a5:goto L4269a5;
case 0x4269a7:c.instructions+=6;goto B4269a7;
case 0x4269ae:c.instructions+=5;goto B4269ae;
case 0x4269b4:c.instructions+=4;goto B4269b4;
case 0x4269ba:c.instructions+=3;goto B4269ba;
case 0x4269c0:c.instructions+=2;goto B4269c0;
case 0x4269c6:c.instructions+=1;goto B4269c6;
case 0x4269cc:goto L4269cc;
case 0x4269cd:c.instructions+=5;goto B4269cd;
case 0x4269ce:c.instructions+=4;goto B4269ce;
case 0x4269cf:c.instructions+=3;goto B4269cf;
case 0x4269d1:c.instructions+=2;goto B4269d1;
case 0x4269d2:c.instructions+=1;goto B4269d2;
case 0x4269e0:goto L4269e0;
case 0x4269e2:c.instructions+=9;goto B4269e2;
case 0x4269e7:c.instructions+=8;goto B4269e7;
case 0x4269ed:c.instructions+=7;goto B4269ed;
case 0x4269ee:c.instructions+=6;goto B4269ee;
case 0x4269f5:c.instructions+=5;goto B4269f5;
case 0x4269f6:c.instructions+=4;goto B4269f6;
case 0x4269fb:c.instructions+=3;goto B4269fb;
case 0x4269fc:c.instructions+=2;goto B4269fc;
case 0x4269fd:c.instructions+=1;goto B4269fd;
case 0x426a02:goto L426a02;
case 0x426a04:c.instructions+=5;goto B426a04;
case 0x426a07:c.instructions+=4;goto B426a07;
case 0x426a0b:c.instructions+=3;goto B426a0b;
case 0x426a0d:c.instructions+=2;goto B426a0d;
case 0x426a15:c.instructions+=1;goto B426a15;
case 0x426a17:goto L426a17;
case 0x426a1c:c.instructions+=4;goto B426a1c;
case 0x426a1e:c.instructions+=3;goto B426a1e;
case 0x426a20:c.instructions+=2;goto B426a20;
case 0x426a22:c.instructions+=1;goto B426a22;
case 0x426a27:goto L426a27;
case 0x426a2d:c.instructions+=8;goto B426a2d;
case 0x426a37:c.instructions+=7;goto B426a37;
case 0x426a41:c.instructions+=6;goto B426a41;
case 0x426a43:c.instructions+=5;goto B426a43;
case 0x426a44:c.instructions+=4;goto B426a44;
case 0x426a48:c.instructions+=3;goto B426a48;
case 0x426a4f:c.instructions+=2;goto B426a4f;
case 0x426a52:c.instructions+=1;goto B426a52;
case 0x426a53:goto L426a53;
case 0x426a57:c.instructions+=5;goto B426a57;
case 0x426a59:c.instructions+=4;goto B426a59;
case 0x426a5a:c.instructions+=3;goto B426a5a;
case 0x426a61:c.instructions+=2;goto B426a61;
case 0x426a64:c.instructions+=1;goto B426a64;
case 0x426a70:goto L426a70;
case 0x426a76:c.instructions+=11;goto B426a76;
case 0x426a78:c.instructions+=10;goto B426a78;
case 0x426a7d:c.instructions+=9;goto B426a7d;
case 0x426a7e:c.instructions+=8;goto B426a7e;
case 0x426a85:c.instructions+=7;goto B426a85;
case 0x426a86:c.instructions+=6;goto B426a86;
case 0x426a87:c.instructions+=5;goto B426a87;
case 0x426a8b:c.instructions+=4;goto B426a8b;
case 0x426a8c:c.instructions+=3;goto B426a8c;
case 0x426a8d:c.instructions+=2;goto B426a8d;
case 0x426a8f:c.instructions+=1;goto B426a8f;
case 0x426a94:goto L426a94;
case 0x426a96:c.instructions+=3;goto B426a96;
case 0x426a99:c.instructions+=2;goto B426a99;
case 0x426a9c:c.instructions+=1;goto B426a9c;
case 0x426a9e:goto L426a9e;
case 0x426aa3:c.instructions+=2;goto B426aa3;
case 0x426aa4:c.instructions+=1;goto B426aa4;
case 0x426aa9:goto L426aa9;
case 0x426aab:c.instructions+=6;goto B426aab;
case 0x426aae:c.instructions+=5;goto B426aae;
case 0x426ab2:c.instructions+=4;goto B426ab2;
case 0x426ab4:c.instructions+=3;goto B426ab4;
case 0x426ab6:c.instructions+=2;goto B426ab6;
case 0x426aba:c.instructions+=1;goto B426aba;
case 0x426ac0:goto L426ac0;
case 0x426ac5:c.instructions+=4;goto B426ac5;
case 0x426ac6:c.instructions+=3;goto B426ac6;
case 0x426ac8:c.instructions+=2;goto B426ac8;
case 0x426aca:c.instructions+=1;goto B426aca;
case 0x426acf:goto L426acf;
case 0x426ad5:c.instructions+=8;goto B426ad5;
case 0x426ad7:c.instructions+=7;goto B426ad7;
case 0x426adb:c.instructions+=6;goto B426adb;
case 0x426ae2:c.instructions+=5;goto B426ae2;
case 0x426ae3:c.instructions+=4;goto B426ae3;
case 0x426ae4:c.instructions+=3;goto B426ae4;
case 0x426ae5:c.instructions+=2;goto B426ae5;
case 0x426ae8:c.instructions+=1;goto B426ae8;
case 0x426aeb:goto L426aeb;
case 0x426af1:c.instructions+=4;goto B426af1;
case 0x426af3:c.instructions+=3;goto B426af3;
case 0x426af4:c.instructions+=2;goto B426af4;
case 0x426af5:c.instructions+=1;goto B426af5;
case 0x426afa:goto L426afa;
case 0x426afd:c.instructions+=4;goto B426afd;
case 0x426aff:c.instructions+=3;goto B426aff;
case 0x426b02:c.instructions+=2;goto B426b02;
case 0x426b04:c.instructions+=1;goto B426b04;
case 0x426b06:goto L426b06;
case 0x426b0a:c.instructions+=4;goto B426b0a;
case 0x426b0f:c.instructions+=3;goto B426b0f;
case 0x426b16:c.instructions+=2;goto B426b16;
case 0x426b17:c.instructions+=1;goto B426b17;
case 0x426b1c:goto L426b1c;
case 0x426b1f:c.instructions+=4;goto B426b1f;
case 0x426b23:c.instructions+=3;goto B426b23;
case 0x426b25:c.instructions+=2;goto B426b25;
case 0x426b2d:c.instructions+=1;goto B426b2d;
case 0x426b2f:goto L426b2f;
case 0x426b30:c.instructions+=4;goto B426b30;
case 0x426b35:c.instructions+=3;goto B426b35;
case 0x426b3a:c.instructions+=2;goto B426b3a;
case 0x426b3c:c.instructions+=1;goto B426b3c;
case 0x426b41:goto L426b41;
case 0x426b45:c.instructions+=6;goto B426b45;
case 0x426b4c:c.instructions+=5;goto B426b4c;
case 0x426b4d:c.instructions+=4;goto B426b4d;
case 0x426b4e:c.instructions+=3;goto B426b4e;
case 0x426b4f:c.instructions+=2;goto B426b4f;
case 0x426b52:c.instructions+=1;goto B426b52;
case 0x426b55:goto L426b55;
case 0x426b57:c.instructions+=7;goto B426b57;
case 0x426b5b:c.instructions+=6;goto B426b5b;
case 0x426b62:c.instructions+=5;goto B426b62;
case 0x426b63:c.instructions+=4;goto B426b63;
case 0x426b64:c.instructions+=3;goto B426b64;
case 0x426b65:c.instructions+=2;goto B426b65;
case 0x426b68:c.instructions+=1;goto B426b68;
case 0x426b6b:goto L426b6b;
case 0x426b6d:c.instructions+=2;goto B426b6d;
case 0x426b6f:c.instructions+=1;goto B426b6f;
case 0x426b72:goto L426b72;
case 0x426b76:c.instructions+=6;goto B426b76;
case 0x426b77:c.instructions+=5;goto B426b77;
case 0x426b78:c.instructions+=4;goto B426b78;
case 0x426b7f:c.instructions+=3;goto B426b7f;
case 0x426b80:c.instructions+=2;goto B426b80;
case 0x426b83:c.instructions+=1;goto B426b83;
case 0x426b90:goto L426b90;
case 0x426b92:c.instructions+=9;goto B426b92;
case 0x426b97:c.instructions+=8;goto B426b97;
case 0x426b9d:c.instructions+=7;goto B426b9d;
case 0x426b9e:c.instructions+=6;goto B426b9e;
case 0x426ba5:c.instructions+=5;goto B426ba5;
case 0x426ba6:c.instructions+=4;goto B426ba6;
case 0x426bab:c.instructions+=3;goto B426bab;
case 0x426bac:c.instructions+=2;goto B426bac;
case 0x426bad:c.instructions+=1;goto B426bad;
case 0x426bb2:goto L426bb2;
case 0x426bb4:c.instructions+=5;goto B426bb4;
case 0x426bb7:c.instructions+=4;goto B426bb7;
case 0x426bbb:c.instructions+=3;goto B426bbb;
case 0x426bbd:c.instructions+=2;goto B426bbd;
case 0x426bc5:c.instructions+=1;goto B426bc5;
case 0x426bc7:goto L426bc7;
case 0x426bcc:c.instructions+=4;goto B426bcc;
case 0x426bce:c.instructions+=3;goto B426bce;
case 0x426bd0:c.instructions+=2;goto B426bd0;
case 0x426bd2:c.instructions+=1;goto B426bd2;
case 0x426bd7:goto L426bd7;
case 0x426bdd:c.instructions+=8;goto B426bdd;
case 0x426be7:c.instructions+=7;goto B426be7;
case 0x426bee:c.instructions+=6;goto B426bee;
case 0x426bf0:c.instructions+=5;goto B426bf0;
case 0x426bf1:c.instructions+=4;goto B426bf1;
case 0x426bf5:c.instructions+=3;goto B426bf5;
case 0x426bfc:c.instructions+=2;goto B426bfc;
case 0x426bff:c.instructions+=1;goto B426bff;
case 0x426c00:goto L426c00;
case 0x426c04:c.instructions+=5;goto B426c04;
case 0x426c06:c.instructions+=4;goto B426c06;
case 0x426c07:c.instructions+=3;goto B426c07;
case 0x426c0e:c.instructions+=2;goto B426c0e;
case 0x426c11:c.instructions+=1;goto B426c11;
case 0x426c20:goto L426c20;
case 0x426c22:c.instructions+=21;goto B426c22;
case 0x426c27:c.instructions+=20;goto B426c27;
case 0x426c2d:c.instructions+=19;goto B426c2d;
case 0x426c2e:c.instructions+=18;goto B426c2e;
case 0x426c35:c.instructions+=17;goto B426c35;
case 0x426c38:c.instructions+=16;goto B426c38;
case 0x426c39:c.instructions+=15;goto B426c39;
case 0x426c3a:c.instructions+=14;goto B426c3a;
case 0x426c3b:c.instructions+=13;goto B426c3b;
case 0x426c3f:c.instructions+=12;goto B426c3f;
case 0x426c41:c.instructions+=11;goto B426c41;
case 0x426c43:c.instructions+=10;goto B426c43;
case 0x426c44:c.instructions+=9;goto B426c44;
case 0x426c47:c.instructions+=8;goto B426c47;
case 0x426c4c:c.instructions+=7;goto B426c4c;
case 0x426c50:c.instructions+=6;goto B426c50;
case 0x426c54:c.instructions+=5;goto B426c54;
case 0x426c58:c.instructions+=4;goto B426c58;
case 0x426c5c:c.instructions+=3;goto B426c5c;
case 0x426c60:c.instructions+=2;goto B426c60;
case 0x426c64:c.instructions+=1;goto B426c64;
case 0x426c66:goto L426c66;
case 0x426c6e:c.instructions+=1;goto B426c6e;
case 0x426c70:goto L426c70;
case 0x426c74:c.instructions+=5;goto B426c74;
case 0x426c75:c.instructions+=4;goto B426c75;
case 0x426c79:c.instructions+=3;goto B426c79;
case 0x426c7a:c.instructions+=2;goto B426c7a;
case 0x426c7b:c.instructions+=1;goto B426c7b;
case 0x426c80:goto L426c80;
case 0x426c82:c.instructions+=3;goto B426c82;
case 0x426c85:c.instructions+=2;goto B426c85;
case 0x426c88:c.instructions+=1;goto B426c88;
case 0x426c8a:goto L426c8a;
case 0x426c90:c.instructions+=2;goto B426c90;
case 0x426c91:c.instructions+=1;goto B426c91;
case 0x426c96:goto L426c96;
case 0x426c99:c.instructions+=4;goto B426c99;
case 0x426c9d:c.instructions+=3;goto B426c9d;
case 0x426c9f:c.instructions+=2;goto B426c9f;
case 0x426ca3:c.instructions+=1;goto B426ca3;
case 0x426ca9:goto L426ca9;
case 0x426cad:c.instructions+=8;goto B426cad;
case 0x426cb1:c.instructions+=7;goto B426cb1;
case 0x426cb2:c.instructions+=6;goto B426cb2;
case 0x426cb8:c.instructions+=5;goto B426cb8;
case 0x426cb9:c.instructions+=4;goto B426cb9;
case 0x426cba:c.instructions+=3;goto B426cba;
case 0x426cbb:c.instructions+=2;goto B426cbb;
case 0x426cbd:c.instructions+=1;goto B426cbd;
case 0x426cc2:goto L426cc2;
case 0x426cc7:goto L426cc7;
case 0x426ccc:c.instructions+=1;goto B426ccc;
case 0x426cce:goto L426cce;
case 0x426cd6:c.instructions+=1;goto B426cd6;
case 0x426cd8:goto L426cd8;
case 0x426cdc:c.instructions+=7;goto B426cdc;
case 0x426cdd:c.instructions+=6;goto B426cdd;
case 0x426ce1:c.instructions+=5;goto B426ce1;
case 0x426ce2:c.instructions+=4;goto B426ce2;
case 0x426ce6:c.instructions+=3;goto B426ce6;
case 0x426ce7:c.instructions+=2;goto B426ce7;
case 0x426ce8:c.instructions+=1;goto B426ce8;
case 0x426ced:goto L426ced;
case 0x426cef:c.instructions+=3;goto B426cef;
case 0x426cf2:c.instructions+=2;goto B426cf2;
case 0x426cf5:c.instructions+=1;goto B426cf5;
case 0x426cf7:goto L426cf7;
case 0x426cf8:c.instructions+=4;goto B426cf8;
case 0x426cfc:c.instructions+=3;goto B426cfc;
case 0x426cfd:c.instructions+=2;goto B426cfd;
case 0x426cff:c.instructions+=1;goto B426cff;
case 0x426d04:goto L426d04;
case 0x426d0a:c.instructions+=2;goto B426d0a;
case 0x426d0b:c.instructions+=1;goto B426d0b;
case 0x426d10:goto L426d10;
case 0x426d13:c.instructions+=4;goto B426d13;
case 0x426d17:c.instructions+=3;goto B426d17;
case 0x426d19:c.instructions+=2;goto B426d19;
case 0x426d21:c.instructions+=1;goto B426d21;
case 0x426d23:goto L426d23;
case 0x426d27:c.instructions+=9;goto B426d27;
case 0x426d2b:c.instructions+=8;goto B426d2b;
case 0x426d2c:c.instructions+=7;goto B426d2c;
case 0x426d32:c.instructions+=6;goto B426d32;
case 0x426d33:c.instructions+=5;goto B426d33;
case 0x426d34:c.instructions+=4;goto B426d34;
case 0x426d35:c.instructions+=3;goto B426d35;
case 0x426d36:c.instructions+=2;goto B426d36;
case 0x426d38:c.instructions+=1;goto B426d38;
case 0x426d3d:goto L426d3d;
case 0x426d3f:goto L426d3f;
case 0x426d41:c.instructions+=1;goto B426d41;
case 0x426d43:goto L426d43;
case 0x426d47:c.instructions+=2;goto B426d47;
case 0x426d49:c.instructions+=1;goto B426d49;
case 0x426d4c:goto L426d4c;
case 0x426d50:c.instructions+=7;goto B426d50;
case 0x426d51:c.instructions+=6;goto B426d51;
case 0x426d52:c.instructions+=5;goto B426d52;
case 0x426d53:c.instructions+=4;goto B426d53;
case 0x426d54:c.instructions+=3;goto B426d54;
case 0x426d5b:c.instructions+=2;goto B426d5b;
case 0x426d5e:c.instructions+=1;goto B426d5e;
case 0x426d70:goto L426d70;
case 0x426d72:c.instructions+=21;goto B426d72;
case 0x426d77:c.instructions+=20;goto B426d77;
case 0x426d7d:c.instructions+=19;goto B426d7d;
case 0x426d7e:c.instructions+=18;goto B426d7e;
case 0x426d85:c.instructions+=17;goto B426d85;
case 0x426d88:c.instructions+=16;goto B426d88;
case 0x426d89:c.instructions+=15;goto B426d89;
case 0x426d8a:c.instructions+=14;goto B426d8a;
case 0x426d8b:c.instructions+=13;goto B426d8b;
case 0x426d8f:c.instructions+=12;goto B426d8f;
case 0x426d91:c.instructions+=11;goto B426d91;
case 0x426d93:c.instructions+=10;goto B426d93;
case 0x426d94:c.instructions+=9;goto B426d94;
case 0x426d97:c.instructions+=8;goto B426d97;
case 0x426d9c:c.instructions+=7;goto B426d9c;
case 0x426da0:c.instructions+=6;goto B426da0;
case 0x426da4:c.instructions+=5;goto B426da4;
case 0x426da8:c.instructions+=4;goto B426da8;
case 0x426dac:c.instructions+=3;goto B426dac;
case 0x426db0:c.instructions+=2;goto B426db0;
case 0x426db4:c.instructions+=1;goto B426db4;
case 0x426db6:goto L426db6;
case 0x426dbe:c.instructions+=1;goto B426dbe;
case 0x426dc0:goto L426dc0;
case 0x426dc4:c.instructions+=5;goto B426dc4;
case 0x426dc5:c.instructions+=4;goto B426dc5;
case 0x426dc9:c.instructions+=3;goto B426dc9;
case 0x426dca:c.instructions+=2;goto B426dca;
case 0x426dcb:c.instructions+=1;goto B426dcb;
case 0x426dd0:goto L426dd0;
case 0x426dd2:c.instructions+=3;goto B426dd2;
case 0x426dd5:c.instructions+=2;goto B426dd5;
case 0x426dd8:c.instructions+=1;goto B426dd8;
case 0x426dda:goto L426dda;
case 0x426de0:c.instructions+=2;goto B426de0;
case 0x426de1:c.instructions+=1;goto B426de1;
case 0x426de6:goto L426de6;
case 0x426de9:c.instructions+=4;goto B426de9;
case 0x426ded:c.instructions+=3;goto B426ded;
case 0x426def:c.instructions+=2;goto B426def;
case 0x426df3:c.instructions+=1;goto B426df3;
case 0x426df9:goto L426df9;
case 0x426dfd:c.instructions+=8;goto B426dfd;
case 0x426e01:c.instructions+=7;goto B426e01;
case 0x426e02:c.instructions+=6;goto B426e02;
case 0x426e08:c.instructions+=5;goto B426e08;
case 0x426e09:c.instructions+=4;goto B426e09;
case 0x426e0a:c.instructions+=3;goto B426e0a;
case 0x426e0b:c.instructions+=2;goto B426e0b;
case 0x426e0d:c.instructions+=1;goto B426e0d;
case 0x426e12:goto L426e12;
case 0x426e17:goto L426e17;
case 0x426e1c:c.instructions+=1;goto B426e1c;
case 0x426e1e:goto L426e1e;
case 0x426e26:c.instructions+=1;goto B426e26;
case 0x426e28:goto L426e28;
case 0x426e2c:c.instructions+=7;goto B426e2c;
case 0x426e2d:c.instructions+=6;goto B426e2d;
case 0x426e31:c.instructions+=5;goto B426e31;
case 0x426e32:c.instructions+=4;goto B426e32;
case 0x426e36:c.instructions+=3;goto B426e36;
case 0x426e37:c.instructions+=2;goto B426e37;
case 0x426e38:c.instructions+=1;goto B426e38;
case 0x426e3d:goto L426e3d;
case 0x426e3f:c.instructions+=3;goto B426e3f;
case 0x426e42:c.instructions+=2;goto B426e42;
case 0x426e45:c.instructions+=1;goto B426e45;
case 0x426e47:goto L426e47;
case 0x426e48:c.instructions+=4;goto B426e48;
case 0x426e4c:c.instructions+=3;goto B426e4c;
case 0x426e4d:c.instructions+=2;goto B426e4d;
case 0x426e4f:c.instructions+=1;goto B426e4f;
case 0x426e54:goto L426e54;
case 0x426e5a:c.instructions+=2;goto B426e5a;
case 0x426e5b:c.instructions+=1;goto B426e5b;
case 0x426e60:goto L426e60;
case 0x426e63:c.instructions+=4;goto B426e63;
case 0x426e67:c.instructions+=3;goto B426e67;
case 0x426e69:c.instructions+=2;goto B426e69;
case 0x426e71:c.instructions+=1;goto B426e71;
case 0x426e73:goto L426e73;
case 0x426e77:c.instructions+=9;goto B426e77;
case 0x426e7b:c.instructions+=8;goto B426e7b;
case 0x426e7c:c.instructions+=7;goto B426e7c;
case 0x426e82:c.instructions+=6;goto B426e82;
case 0x426e83:c.instructions+=5;goto B426e83;
case 0x426e84:c.instructions+=4;goto B426e84;
case 0x426e85:c.instructions+=3;goto B426e85;
case 0x426e86:c.instructions+=2;goto B426e86;
case 0x426e88:c.instructions+=1;goto B426e88;
case 0x426e8d:goto L426e8d;
case 0x426e8f:goto L426e8f;
case 0x426e91:c.instructions+=1;goto B426e91;
case 0x426e93:goto L426e93;
case 0x426e97:c.instructions+=2;goto B426e97;
case 0x426e99:c.instructions+=1;goto B426e99;
case 0x426e9c:goto L426e9c;
case 0x426ea0:c.instructions+=7;goto B426ea0;
case 0x426ea1:c.instructions+=6;goto B426ea1;
case 0x426ea2:c.instructions+=5;goto B426ea2;
case 0x426ea3:c.instructions+=4;goto B426ea3;
case 0x426ea4:c.instructions+=3;goto B426ea4;
case 0x426eab:c.instructions+=2;goto B426eab;
case 0x426eae:c.instructions+=1;goto B426eae;
case 0x426ec0:goto L426ec0;
case 0x426ec2:c.instructions+=9;goto B426ec2;
case 0x426ec7:c.instructions+=8;goto B426ec7;
case 0x426ecd:c.instructions+=7;goto B426ecd;
case 0x426ece:c.instructions+=6;goto B426ece;
case 0x426ed5:c.instructions+=5;goto B426ed5;
case 0x426ed6:c.instructions+=4;goto B426ed6;
case 0x426edb:c.instructions+=3;goto B426edb;
case 0x426edc:c.instructions+=2;goto B426edc;
case 0x426edd:c.instructions+=1;goto B426edd;
case 0x426ee2:goto L426ee2;
case 0x426ee4:c.instructions+=6;goto B426ee4;
case 0x426ee7:c.instructions+=5;goto B426ee7;
case 0x426eeb:c.instructions+=4;goto B426eeb;
case 0x426eed:c.instructions+=3;goto B426eed;
case 0x426eef:c.instructions+=2;goto B426eef;
case 0x426ef3:c.instructions+=1;goto B426ef3;
case 0x426ef5:goto L426ef5;
case 0x426efa:c.instructions+=4;goto B426efa;
case 0x426efb:c.instructions+=3;goto B426efb;
case 0x426efd:c.instructions+=2;goto B426efd;
case 0x426eff:c.instructions+=1;goto B426eff;
case 0x426f04:goto L426f04;
case 0x426f0a:c.instructions+=1;goto B426f0a;
case 0x426f0c:goto L426f0c;
case 0x426f10:c.instructions+=4;goto B426f10;
case 0x426f11:c.instructions+=3;goto B426f11;
case 0x426f18:c.instructions+=2;goto B426f18;
case 0x426f1b:c.instructions+=1;goto B426f1b;
case 0x426f20:goto L426f20;
case 0x426f22:c.instructions+=11;goto B426f22;
case 0x426f27:c.instructions+=10;goto B426f27;
case 0x426f2d:c.instructions+=9;goto B426f2d;
case 0x426f2e:c.instructions+=8;goto B426f2e;
case 0x426f35:c.instructions+=7;goto B426f35;
case 0x426f38:c.instructions+=6;goto B426f38;
case 0x426f3d:c.instructions+=5;goto B426f3d;
case 0x426f3e:c.instructions+=4;goto B426f3e;
case 0x426f3f:c.instructions+=3;goto B426f3f;
case 0x426f40:c.instructions+=2;goto B426f40;
case 0x426f42:c.instructions+=1;goto B426f42;
case 0x426f47:goto L426f47;
case 0x426f49:c.instructions+=5;goto B426f49;
case 0x426f4c:c.instructions+=4;goto B426f4c;
case 0x426f50:c.instructions+=3;goto B426f50;
case 0x426f52:c.instructions+=2;goto B426f52;
case 0x426f5a:c.instructions+=1;goto B426f5a;
case 0x426f5c:goto L426f5c;
case 0x426f61:c.instructions+=10;goto B426f61;
case 0x426f64:c.instructions+=9;goto B426f64;
case 0x426f67:c.instructions+=8;goto B426f67;
case 0x426f6a:c.instructions+=7;goto B426f6a;
case 0x426f6b:c.instructions+=6;goto B426f6b;
case 0x426f6d:c.instructions+=5;goto B426f6d;
case 0x426f71:c.instructions+=4;goto B426f71;
case 0x426f73:c.instructions+=3;goto B426f73;
case 0x426f75:c.instructions+=2;goto B426f75;
case 0x426f79:c.instructions+=1;goto B426f79;
case 0x426f7e:goto L426f7e;
case 0x426f82:c.instructions+=13;goto B426f82;
case 0x426f86:c.instructions+=12;goto B426f86;
case 0x426f8c:c.instructions+=11;goto B426f8c;
case 0x426f8d:c.instructions+=10;goto B426f8d;
case 0x426f93:c.instructions+=9;goto B426f93;
case 0x426f99:c.instructions+=8;goto B426f99;
case 0x426f9f:c.instructions+=7;goto B426f9f;
case 0x426fa9:c.instructions+=6;goto B426fa9;
case 0x426fab:c.instructions+=5;goto B426fab;
case 0x426fac:c.instructions+=4;goto B426fac;
case 0x426fb0:c.instructions+=3;goto B426fb0;
case 0x426fb7:c.instructions+=2;goto B426fb7;
case 0x426fba:c.instructions+=1;goto B426fba;
case 0x426fbb:goto L426fbb;
case 0x426fbf:c.instructions+=6;goto B426fbf;
case 0x426fc0:c.instructions+=5;goto B426fc0;
case 0x426fc2:c.instructions+=4;goto B426fc2;
case 0x426fc3:c.instructions+=3;goto B426fc3;
case 0x426fca:c.instructions+=2;goto B426fca;
case 0x426fcd:c.instructions+=1;goto B426fcd;
case 0x426fd0:goto L426fd0;
case 0x426fd2:c.instructions+=11;goto B426fd2;
case 0x426fd7:c.instructions+=10;goto B426fd7;
case 0x426fdd:c.instructions+=9;goto B426fdd;
case 0x426fde:c.instructions+=8;goto B426fde;
case 0x426fe5:c.instructions+=7;goto B426fe5;
case 0x426fe8:c.instructions+=6;goto B426fe8;
case 0x426fed:c.instructions+=5;goto B426fed;
case 0x426fee:c.instructions+=4;goto B426fee;
case 0x426fef:c.instructions+=3;goto B426fef;
case 0x426ff0:c.instructions+=2;goto B426ff0;
case 0x426ff2:c.instructions+=1;goto B426ff2;
case 0x426ff7:goto L426ff7;
case 0x426ff9:c.instructions+=2;goto B426ff9;
case 0x426ffc:c.instructions+=1;goto B426ffc;
default:missing_instruction(c.pc);}
B426000:L426000:{c.instructions+=7;NFSU2_TR(0x426000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426006:{NFSU2_TR(0x426006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42600c:{NFSU2_TR(0x42600c);
__builtin_memmove((R+4),(R+24),4);
}
B42600e:{NFSU2_TR(0x42600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426014:{NFSU2_TR(0x426014);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42601e:{NFSU2_TR(0x42601e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426024:{NFSU2_TR(0x426024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426029ull));
TAIL_STATIC(0x4076c0u,407);
}
B426029:L426029:{c.instructions+=4;NFSU2_TR(0x426029);
__builtin_memmove((R+0),gp(0x890118),4);
}
B42602e:{NFSU2_TR(0x42602e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426030:{NFSU2_TR(0x426030);
w4(R+4,u32(0x1ull));
}
B426035:{NFSU2_TR(0x426035);
if(r1(R+518)){{goto L426040;}}
}
B426037:L426037:{c.instructions+=2;NFSU2_TR(0x426037);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42603a:{NFSU2_TR(0x42603a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426040;}}
}
B42603c:L42603c:{c.instructions+=2;NFSU2_TR(0x42603c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42603e:{NFSU2_TR(0x42603e);
{goto L426042;}
}
B426040:L426040:{c.instructions+=1;NFSU2_TR(0x426040);
__builtin_memmove((R+0),(R+4),4);
}
B426042:L426042:{c.instructions+=20;NFSU2_TR(0x426042);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426048:{NFSU2_TR(0x426048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42604e:{NFSU2_TR(0x42604e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426054:{NFSU2_TR(0x426054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42605a:{NFSU2_TR(0x42605a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426060:{NFSU2_TR(0x426060);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426066:{NFSU2_TR(0x426066);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42606c:{NFSU2_TR(0x42606c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426070:{NFSU2_TR(0x426070);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426076:{NFSU2_TR(0x426076);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2faull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42607c:{NFSU2_TR(0x42607c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426082:{NFSU2_TR(0x426082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426088:{NFSU2_TR(0x426088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426089:{NFSU2_TR(0x426089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426093:{NFSU2_TR(0x426093);
__builtin_memmove((R+0),(R+24),4);
}
B426095:{NFSU2_TR(0x426095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426096:{NFSU2_TR(0x426096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426097:{NFSU2_TR(0x426097);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42609e:{NFSU2_TR(0x42609e);
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
B4260a1:{NFSU2_TR(0x4260a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4260b0:L4260b0:{c.instructions+=14;NFSU2_TR(0x4260b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260b2:{NFSU2_TR(0x4260b2);
u8 U[4];
w4(U+0,u32(0x771844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260b7:{NFSU2_TR(0x4260b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4260bd:{NFSU2_TR(0x4260bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260be:{NFSU2_TR(0x4260be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260c5:{NFSU2_TR(0x4260c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260c6:{NFSU2_TR(0x4260c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260c7:{NFSU2_TR(0x4260c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260c8:{NFSU2_TR(0x4260c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260c9:{NFSU2_TR(0x4260c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4260cd:{NFSU2_TR(0x4260cd);
__builtin_memmove((R+24),(R+4),4);
}
B4260cf:{NFSU2_TR(0x4260cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4260d0:{NFSU2_TR(0x4260d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260d4:{NFSU2_TR(0x4260d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4260d9ull));
TAIL_STATIC(0x420500u,420);
}
B4260d9:L4260d9:{c.instructions+=12;NFSU2_TR(0x4260d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4260db:{NFSU2_TR(0x4260db);
u8 U[4];
w4(U+0,u32(0x785370ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4260e1:{NFSU2_TR(0x4260e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260e7:{NFSU2_TR(0x4260e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260ed:{NFSU2_TR(0x4260ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260f3:{NFSU2_TR(0x4260f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260f9:{NFSU2_TR(0x4260f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4260ff:{NFSU2_TR(0x4260ff);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426101:{NFSU2_TR(0x426101);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426105:{NFSU2_TR(0x426105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42610b:{NFSU2_TR(0x42610b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426111:{NFSU2_TR(0x426111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426116ull));
TAIL_STATIC(0x575620u,575);
}
B426116:L426116:{c.instructions+=5;NFSU2_TR(0x426116);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426119:{NFSU2_TR(0x426119);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42611d:{NFSU2_TR(0x42611d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42611f:{NFSU2_TR(0x42611f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426124:{NFSU2_TR(0x426124);
if(r1(R+518)){{goto L426136;}}
}
B426126:L426126:{c.instructions+=4;NFSU2_TR(0x426126);
__builtin_memmove((R+4),gp(0x7e957c),4);
}
B42612c:{NFSU2_TR(0x42612c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42612d:{NFSU2_TR(0x42612d);
__builtin_memmove((R+4),(R+0),4);
}
B42612f:{NFSU2_TR(0x42612f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426134ull));
TAIL_STATIC(0x579f20u,579);
}
B426134:L426134:{c.instructions+=1;NFSU2_TR(0x426134);
{goto L426138;}
}
B426136:L426136:{c.instructions+=1;NFSU2_TR(0x426136);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426138:L426138:{c.instructions+=5;NFSU2_TR(0x426138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42613e:{NFSU2_TR(0x42613e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426141:{NFSU2_TR(0x426141);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426144:{NFSU2_TR(0x426144);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426148:{NFSU2_TR(0x426148);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4261bf;}}
}
B42614a:L42614a:{c.instructions+=2;NFSU2_TR(0x42614a);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B426150:{NFSU2_TR(0x426150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426172;}}
}
B426152:L426152:{c.instructions+=2;NFSU2_TR(0x426152);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426158:{NFSU2_TR(0x426158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426172;}}
}
B42615a:L42615a:{c.instructions+=2;NFSU2_TR(0x42615a);
u8 U[8];
__builtin_memmove((U+0),gp(0x890114),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426160:{NFSU2_TR(0x426160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426196;}}
}
B426162:L426162:{c.instructions+=2;NFSU2_TR(0x426162);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B426168:{NFSU2_TR(0x426168);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426196;}}
}
B42616a:L42616a:{c.instructions+=2;NFSU2_TR(0x42616a);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426170:{NFSU2_TR(0x426170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426196;}}
}
B426172:L426172:{c.instructions+=2;NFSU2_TR(0x426172);
u8 U[4];
w4(U+0,u32(0x460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426177:{NFSU2_TR(0x426177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42617cull));
TAIL_STATIC(0x575620u,575);
}
B42617c:L42617c:{c.instructions+=5;NFSU2_TR(0x42617c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42617f:{NFSU2_TR(0x42617f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426183:{NFSU2_TR(0x426183);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426185:{NFSU2_TR(0x426185);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42618a:{NFSU2_TR(0x42618a);
if(r1(R+518)){{goto L4261ba;}}
}
B42618c:L42618c:{c.instructions+=3;NFSU2_TR(0x42618c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42618d:{NFSU2_TR(0x42618d);
__builtin_memmove((R+4),(R+0),4);
}
B42618f:{NFSU2_TR(0x42618f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426194ull));
TAIL_STATIC(0x425ab0u,425);
}
B426194:L426194:{c.instructions+=1;NFSU2_TR(0x426194);
{goto L4261bc;}
}
B426196:L426196:{c.instructions+=2;NFSU2_TR(0x426196);
u8 U[4];
w4(U+0,u32(0x250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42619b:{NFSU2_TR(0x42619b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4261a0ull));
TAIL_STATIC(0x575620u,575);
}
B4261a0:L4261a0:{c.instructions+=5;NFSU2_TR(0x4261a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4261a3:{NFSU2_TR(0x4261a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261a7:{NFSU2_TR(0x4261a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4261a9:{NFSU2_TR(0x4261a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4261ae:{NFSU2_TR(0x4261ae);
if(r1(R+518)){{goto L4261ba;}}
}
B4261b0:L4261b0:{c.instructions+=3;NFSU2_TR(0x4261b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4261b1:{NFSU2_TR(0x4261b1);
__builtin_memmove((R+4),(R+0),4);
}
B4261b3:{NFSU2_TR(0x4261b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4261b8ull));
TAIL_STATIC(0x425e40u,425);
}
B4261b8:L4261b8:{c.instructions+=1;NFSU2_TR(0x4261b8);
{goto L4261bc;}
}
B4261ba:L4261ba:{c.instructions+=1;NFSU2_TR(0x4261ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4261bc:L4261bc:{c.instructions+=1;NFSU2_TR(0x4261bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261bf:L4261bf:{c.instructions+=9;NFSU2_TR(0x4261bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x780ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261c5:{NFSU2_TR(0x4261c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x784ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261cb:{NFSU2_TR(0x4261cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x788ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261d1:{NFSU2_TR(0x4261d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261d7:{NFSU2_TR(0x4261d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261dd:{NFSU2_TR(0x4261dd);
{u32 ea_=u32(u32(8295800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4261e3:{NFSU2_TR(0x4261e3);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4261e9:{NFSU2_TR(0x4261e9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4261ef:{NFSU2_TR(0x4261ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4261f4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4261f4:L4261f4:{c.instructions+=12;NFSU2_TR(0x4261f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4261f8:{NFSU2_TR(0x4261f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4261fe:{NFSU2_TR(0x4261fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426204:{NFSU2_TR(0x426204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42620a:{NFSU2_TR(0x42620a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426210:{NFSU2_TR(0x426210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426211:{NFSU2_TR(0x426211);
__builtin_memmove((R+0),(R+24),4);
}
B426213:{NFSU2_TR(0x426213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426214:{NFSU2_TR(0x426214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426215:{NFSU2_TR(0x426215);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42621c:{NFSU2_TR(0x42621c);
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
B42621f:{NFSU2_TR(0x42621f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426230:L426230:{c.instructions+=11;NFSU2_TR(0x426230);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426236:{NFSU2_TR(0x426236);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426238:{NFSU2_TR(0x426238);
u8 U[4];
w4(U+0,u32(0x7718a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42623d:{NFSU2_TR(0x42623d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42623e:{NFSU2_TR(0x42623e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426242:{NFSU2_TR(0x426242);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426245:{NFSU2_TR(0x426245);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42624c:{NFSU2_TR(0x42624c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42624d:{NFSU2_TR(0x42624d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42624e:{NFSU2_TR(0x42624e);
__builtin_memmove((R+24),(R+4),4);
}
B426250:{NFSU2_TR(0x426250);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4262f6;}}
}
B426256:L426256:{c.instructions+=5;NFSU2_TR(0x426256);
__builtin_memmove((R+8),(R+0),4);
}
B426258:{NFSU2_TR(0x426258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42625e:{NFSU2_TR(0x42625e);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B426261:{NFSU2_TR(0x426261);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426263:{NFSU2_TR(0x426263);
if(r1(R+518)){{goto L426271;}}
}
B426265:L426265:{c.instructions+=2;NFSU2_TR(0x426265);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42626b:{NFSU2_TR(0x42626b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B426271:L426271:{c.instructions+=3;NFSU2_TR(0x426271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426277:{NFSU2_TR(0x426277);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426279:{NFSU2_TR(0x426279);
if(r1(R+518)){{goto L42628b;}}
}
B42627b:L42627b:{c.instructions+=6;NFSU2_TR(0x42627b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42627d:{NFSU2_TR(0x42627d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42627e:{NFSU2_TR(0x42627e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42627f:{NFSU2_TR(0x42627f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x54ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426282:{NFSU2_TR(0x426282);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426283:{NFSU2_TR(0x426283);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426286ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B426286:L426286:{c.instructions+=1;NFSU2_TR(0x426286);
{goto L426536;}
}
B42628b:L42628b:{c.instructions+=3;NFSU2_TR(0x42628b);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426291:{NFSU2_TR(0x426291);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426292:{NFSU2_TR(0x426292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426297ull));
TAIL_STATIC(0x440e50u,440);
}
B426297:L426297:{c.instructions+=6;NFSU2_TR(0x426297);
__builtin_memmove((R+24),(R+0),4);
}
B426299:{NFSU2_TR(0x426299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42629c:{NFSU2_TR(0x42629c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4262a0:{NFSU2_TR(0x4262a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4262a2:{NFSU2_TR(0x4262a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4262aa:{NFSU2_TR(0x4262aa);
if(r1(R+518)){{goto L4262db;}}
}
B4262ac:L4262ac:{c.instructions+=5;NFSU2_TR(0x4262ac);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4262b1:{NFSU2_TR(0x4262b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4262b3:{NFSU2_TR(0x4262b3);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4262b5:{NFSU2_TR(0x4262b5);
__builtin_memmove((R+4),(R+24),4);
}
B4262b7:{NFSU2_TR(0x4262b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4262bcull));
TAIL_STATIC(0x4234a0u,423);
}
B4262bc:L4262bc:{c.instructions+=9;NFSU2_TR(0x4262bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4262c0:{NFSU2_TR(0x4262c0);
u8 U[4];
w4(U+0,u32(0x785820ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4262c6:{NFSU2_TR(0x4262c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4262c8:{NFSU2_TR(0x4262c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4262cc:{NFSU2_TR(0x4262cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4262d3:{NFSU2_TR(0x4262d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4262d4:{NFSU2_TR(0x4262d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4262d5:{NFSU2_TR(0x4262d5);
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
B4262d8:{NFSU2_TR(0x4262d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4262db:L4262db:{c.instructions+=9;NFSU2_TR(0x4262db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4262df:{NFSU2_TR(0x4262df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4262e1:{NFSU2_TR(0x4262e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4262e3:{NFSU2_TR(0x4262e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4262e7:{NFSU2_TR(0x4262e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4262ee:{NFSU2_TR(0x4262ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4262ef:{NFSU2_TR(0x4262ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4262f0:{NFSU2_TR(0x4262f0);
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
B4262f3:{NFSU2_TR(0x4262f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4262f6:L4262f6:{c.instructions+=3;NFSU2_TR(0x4262f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B4262f9:{NFSU2_TR(0x4262f9);
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
B4262fc:{NFSU2_TR(0x4262fc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4264f5;}}
}
B426302:L426302:{c.instructions+=2;NFSU2_TR(0x426302);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42656cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B426309:{NFSU2_TR(0x426309);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x426550ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B426310:L426310:{c.instructions+=3;NFSU2_TR(0x426310);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426316:{NFSU2_TR(0x426316);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426317:{NFSU2_TR(0x426317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42631cull));
TAIL_STATIC(0x440e50u,440);
}
B42631c:L42631c:{c.instructions+=5;NFSU2_TR(0x42631c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42631f:{NFSU2_TR(0x42631f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426323:{NFSU2_TR(0x426323);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426325:{NFSU2_TR(0x426325);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42632d:{NFSU2_TR(0x42632d);
if(r1(R+518)){{goto L4264a3;}}
}
B426333:L426333:{c.instructions+=5;NFSU2_TR(0x426333);
__builtin_memmove((R+4),gp(0x783618),4);
}
B426339:{NFSU2_TR(0x426339);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42633a:{NFSU2_TR(0x42633a);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42633c:{NFSU2_TR(0x42633c);
__builtin_memmove((R+4),(R+0),4);
}
B42633e:{NFSU2_TR(0x42633e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426343ull));
TAIL_STATIC(0x4235e0u,423);
}
B426343:L426343:{c.instructions+=8;NFSU2_TR(0x426343);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426347:{NFSU2_TR(0x426347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B426349:{NFSU2_TR(0x426349);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42634d:{NFSU2_TR(0x42634d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426354:{NFSU2_TR(0x426354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426355:{NFSU2_TR(0x426355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426356:{NFSU2_TR(0x426356);
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
B426359:{NFSU2_TR(0x426359);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42635c:L42635c:{c.instructions+=3;NFSU2_TR(0x42635c);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426361:{NFSU2_TR(0x426361);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426362:{NFSU2_TR(0x426362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426367ull));
TAIL_STATIC(0x440e50u,440);
}
B426367:L426367:{c.instructions+=5;NFSU2_TR(0x426367);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42636a:{NFSU2_TR(0x42636a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42636e:{NFSU2_TR(0x42636e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426370:{NFSU2_TR(0x426370);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426378:{NFSU2_TR(0x426378);
if(r1(R+518)){{goto L4264a3;}}
}
B42637e:L42637e:{c.instructions+=5;NFSU2_TR(0x42637e);
__builtin_memmove((R+4),gp(0x783620),4);
}
B426384:{NFSU2_TR(0x426384);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426385:{NFSU2_TR(0x426385);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426387:{NFSU2_TR(0x426387);
__builtin_memmove((R+4),(R+0),4);
}
B426389:{NFSU2_TR(0x426389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42638eull));
TAIL_STATIC(0x4235a0u,423);
}
B42638e:L42638e:{c.instructions+=8;NFSU2_TR(0x42638e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426392:{NFSU2_TR(0x426392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B426394:{NFSU2_TR(0x426394);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426398:{NFSU2_TR(0x426398);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42639f:{NFSU2_TR(0x42639f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4263a0:{NFSU2_TR(0x4263a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4263a1:{NFSU2_TR(0x4263a1);
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
B4263a4:{NFSU2_TR(0x4263a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4263a7:L4263a7:{c.instructions+=3;NFSU2_TR(0x4263a7);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4263ac:{NFSU2_TR(0x4263ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4263ad:{NFSU2_TR(0x4263ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4263b2ull));
TAIL_STATIC(0x440e50u,440);
}
B4263b2:L4263b2:{c.instructions+=5;NFSU2_TR(0x4263b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4263b5:{NFSU2_TR(0x4263b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4263b9:{NFSU2_TR(0x4263b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4263bb:{NFSU2_TR(0x4263bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4263c3:{NFSU2_TR(0x4263c3);
if(r1(R+518)){{goto L4263e5;}}
}
B4263c5:L4263c5:{c.instructions+=9;NFSU2_TR(0x4263c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4263cb:{NFSU2_TR(0x4263cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4263cc:{NFSU2_TR(0x4263cc);
__builtin_memmove((R+4),gp(0x78362c),4);
}
B4263d2:{NFSU2_TR(0x4263d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4263d5:{NFSU2_TR(0x4263d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4263d6:{NFSU2_TR(0x4263d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4263d7:{NFSU2_TR(0x4263d7);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4263dc:{NFSU2_TR(0x4263dc);
__builtin_memmove((R+4),(R+0),4);
}
B4263de:{NFSU2_TR(0x4263de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4263e3ull));
TAIL_STATIC(0x423b60u,423);
}
B4263e3:L4263e3:{c.instructions+=1;NFSU2_TR(0x4263e3);
{goto L4263e7;}
}
B4263e5:L4263e5:{c.instructions+=1;NFSU2_TR(0x4263e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4263e7:L4263e7:{c.instructions+=9;NFSU2_TR(0x4263e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4263eb:{NFSU2_TR(0x4263eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4263ed:{NFSU2_TR(0x4263ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70cull))));
w4(U+4,u32(0x4b189680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4263f7:{NFSU2_TR(0x4263f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4263fb:{NFSU2_TR(0x4263fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426402:{NFSU2_TR(0x426402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426403:{NFSU2_TR(0x426403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426404:{NFSU2_TR(0x426404);
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
B426407:{NFSU2_TR(0x426407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42640a:L42640a:{c.instructions+=3;NFSU2_TR(0x42640a);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42640f:{NFSU2_TR(0x42640f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426410:{NFSU2_TR(0x426410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426415ull));
TAIL_STATIC(0x440e50u,440);
}
B426415:L426415:{c.instructions+=5;NFSU2_TR(0x426415);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426418:{NFSU2_TR(0x426418);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42641c:{NFSU2_TR(0x42641c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42641e:{NFSU2_TR(0x42641e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426426:{NFSU2_TR(0x426426);
if(r1(R+518)){{goto L4264a3;}}
}
B426428:L426428:{c.instructions+=6;NFSU2_TR(0x426428);
__builtin_memmove((R+4),gp(0x783628),4);
}
B42642e:{NFSU2_TR(0x42642e);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426433:{NFSU2_TR(0x426433);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426434:{NFSU2_TR(0x426434);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426439:{NFSU2_TR(0x426439);
__builtin_memmove((R+4),(R+0),4);
}
B42643b:{NFSU2_TR(0x42643b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426440ull));
TAIL_STATIC(0x423c30u,423);
}
B426440:L426440:{c.instructions+=8;NFSU2_TR(0x426440);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426444:{NFSU2_TR(0x426444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B426446:{NFSU2_TR(0x426446);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42644a:{NFSU2_TR(0x42644a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426451:{NFSU2_TR(0x426451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426452:{NFSU2_TR(0x426452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426453:{NFSU2_TR(0x426453);
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
B426456:{NFSU2_TR(0x426456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426459:L426459:{c.instructions+=3;NFSU2_TR(0x426459);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42645e:{NFSU2_TR(0x42645e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42645f:{NFSU2_TR(0x42645f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426464ull));
TAIL_STATIC(0x440e50u,440);
}
B426464:L426464:{c.instructions+=5;NFSU2_TR(0x426464);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426467:{NFSU2_TR(0x426467);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42646b:{NFSU2_TR(0x42646b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42646d:{NFSU2_TR(0x42646d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426475:{NFSU2_TR(0x426475);
if(r1(R+518)){{goto L4264a3;}}
}
B426477:L426477:{c.instructions+=5;NFSU2_TR(0x426477);
__builtin_memmove((R+4),gp(0x783640),4);
}
B42647d:{NFSU2_TR(0x42647d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42647e:{NFSU2_TR(0x42647e);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426483:{NFSU2_TR(0x426483);
__builtin_memmove((R+4),(R+0),4);
}
B426485:{NFSU2_TR(0x426485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42648aull));
TAIL_STATIC(0x4241c0u,424);
}
B42648a:L42648a:{c.instructions+=8;NFSU2_TR(0x42648a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42648e:{NFSU2_TR(0x42648e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B426490:{NFSU2_TR(0x426490);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426494:{NFSU2_TR(0x426494);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42649b:{NFSU2_TR(0x42649b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42649c:{NFSU2_TR(0x42649c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42649d:{NFSU2_TR(0x42649d);
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
B4264a0:{NFSU2_TR(0x4264a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4264a3:L4264a3:{c.instructions+=9;NFSU2_TR(0x4264a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4264a7:{NFSU2_TR(0x4264a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4264a9:{NFSU2_TR(0x4264a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4264ab:{NFSU2_TR(0x4264ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4264af:{NFSU2_TR(0x4264af);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4264b6:{NFSU2_TR(0x4264b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4264b7:{NFSU2_TR(0x4264b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4264b8:{NFSU2_TR(0x4264b8);
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
B4264bb:{NFSU2_TR(0x4264bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4264be:L4264be:{c.instructions+=3;NFSU2_TR(0x4264be);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4264c3:{NFSU2_TR(0x4264c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4264c4:{NFSU2_TR(0x4264c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4264c9ull));
TAIL_STATIC(0x440e50u,440);
}
B4264c9:L4264c9:{c.instructions+=5;NFSU2_TR(0x4264c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4264cc:{NFSU2_TR(0x4264cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4264d0:{NFSU2_TR(0x4264d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4264d2:{NFSU2_TR(0x4264d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4264da:{NFSU2_TR(0x4264da);
if(r1(R+518)){{goto L426534;}}
}
B4264dc:L4264dc:{c.instructions+=7;NFSU2_TR(0x4264dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4264df:{NFSU2_TR(0x4264df);
__builtin_memmove((R+8),gp(0x783644),4);
}
B4264e5:{NFSU2_TR(0x4264e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4264e6:{NFSU2_TR(0x4264e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4264e7:{NFSU2_TR(0x4264e7);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4264ec:{NFSU2_TR(0x4264ec);
__builtin_memmove((R+4),(R+0),4);
}
B4264ee:{NFSU2_TR(0x4264ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4264f3ull));
TAIL_STATIC(0x424b00u,424);
}
B4264f3:L4264f3:{c.instructions+=1;NFSU2_TR(0x4264f3);
{goto L426536;}
}
B4264f5:L4264f5:{c.instructions+=3;NFSU2_TR(0x4264f5);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B4264fb:{NFSU2_TR(0x4264fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4264fc:{NFSU2_TR(0x4264fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426501ull));
TAIL_STATIC(0x440e50u,440);
}
B426501:L426501:{c.instructions+=5;NFSU2_TR(0x426501);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426504:{NFSU2_TR(0x426504);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426508:{NFSU2_TR(0x426508);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42650a:{NFSU2_TR(0x42650a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426512:{NFSU2_TR(0x426512);
if(r1(R+518)){{goto L426534;}}
}
B426514:L426514:{c.instructions+=9;NFSU2_TR(0x426514);
__builtin_memmove((R+4),gp(0x7e8e18),4);
}
B42651a:{NFSU2_TR(0x42651a);
__builtin_memmove((R+8),gp(0x78362c),4);
}
B426520:{NFSU2_TR(0x426520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426521:{NFSU2_TR(0x426521);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x54ull))));
}
B426524:{NFSU2_TR(0x426524);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426525:{NFSU2_TR(0x426525);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426526:{NFSU2_TR(0x426526);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42652b:{NFSU2_TR(0x42652b);
__builtin_memmove((R+4),(R+0),4);
}
B42652d:{NFSU2_TR(0x42652d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426532ull));
TAIL_STATIC(0x423b60u,423);
}
B426532:L426532:{c.instructions+=1;NFSU2_TR(0x426532);
{goto L426536;}
}
B426534:L426534:{c.instructions+=1;NFSU2_TR(0x426534);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426536:L426536:{c.instructions+=8;NFSU2_TR(0x426536);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42653a:{NFSU2_TR(0x42653a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42653c:{NFSU2_TR(0x42653c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426540:{NFSU2_TR(0x426540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426541:{NFSU2_TR(0x426541);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426548:{NFSU2_TR(0x426548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426549:{NFSU2_TR(0x426549);
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
B42654c:{NFSU2_TR(0x42654c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426580:L426580:{c.instructions+=14;NFSU2_TR(0x426580);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426582:{NFSU2_TR(0x426582);
u8 U[4];
w4(U+0,u32(0x7718dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426587:{NFSU2_TR(0x426587);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42658d:{NFSU2_TR(0x42658d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42658e:{NFSU2_TR(0x42658e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426595:{NFSU2_TR(0x426595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426596:{NFSU2_TR(0x426596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426597:{NFSU2_TR(0x426597);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426598:{NFSU2_TR(0x426598);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426599:{NFSU2_TR(0x426599);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42659d:{NFSU2_TR(0x42659d);
__builtin_memmove((R+24),(R+4),4);
}
B42659f:{NFSU2_TR(0x42659f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4265a0:{NFSU2_TR(0x4265a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265a4:{NFSU2_TR(0x4265a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4265a9ull));
TAIL_STATIC(0x420500u,420);
}
B4265a9:L4265a9:{c.instructions+=6;NFSU2_TR(0x4265a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4265ab:{NFSU2_TR(0x4265ab);
u8 U[4];
w4(U+0,u32(0x785428ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4265b1:{NFSU2_TR(0x4265b1);
u8 U[4];
w4(U+0,u32(0x460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4265b6:{NFSU2_TR(0x4265b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265ba:{NFSU2_TR(0x4265ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265c0:{NFSU2_TR(0x4265c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4265c5ull));
TAIL_STATIC(0x575620u,575);
}
B4265c5:L4265c5:{c.instructions+=5;NFSU2_TR(0x4265c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4265c8:{NFSU2_TR(0x4265c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265cc:{NFSU2_TR(0x4265cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4265ce:{NFSU2_TR(0x4265ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4265d3:{NFSU2_TR(0x4265d3);
if(r1(R+518)){{goto L4265df;}}
}
B4265d5:L4265d5:{c.instructions+=3;NFSU2_TR(0x4265d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4265d6:{NFSU2_TR(0x4265d6);
__builtin_memmove((R+4),(R+0),4);
}
B4265d8:{NFSU2_TR(0x4265d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4265ddull));
TAIL_STATIC(0x425ab0u,425);
}
B4265dd:L4265dd:{c.instructions+=1;NFSU2_TR(0x4265dd);
{goto L4265e1;}
}
B4265df:L4265df:{c.instructions+=1;NFSU2_TR(0x4265df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4265e1:L4265e1:{c.instructions+=22;NFSU2_TR(0x4265e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4265e5:{NFSU2_TR(0x4265e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265e8:{NFSU2_TR(0x4265e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4265ec:{NFSU2_TR(0x4265ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265f0:{NFSU2_TR(0x4265f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4265f6:{NFSU2_TR(0x4265f6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4265fa:{NFSU2_TR(0x4265fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426600:{NFSU2_TR(0x426600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426606:{NFSU2_TR(0x426606);
{u32 ea_=u32(u32(7879548u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42660c:{NFSU2_TR(0x42660c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426612:{NFSU2_TR(0x426612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426613:{NFSU2_TR(0x426613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42661d:{NFSU2_TR(0x42661d);
{u32 ea_=u32(u32(7883508u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B426623:{NFSU2_TR(0x426623);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x799ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B42662a:{NFSU2_TR(0x42662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79cull))));
w4(U+4,u32(0x41c4b127ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426634:{NFSU2_TR(0x426634);
__builtin_memmove((R+0),(R+24),4);
}
B426636:{NFSU2_TR(0x426636);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42663c:{NFSU2_TR(0x42663c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42663d:{NFSU2_TR(0x42663d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42663e:{NFSU2_TR(0x42663e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426645:{NFSU2_TR(0x426645);
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
B426648:{NFSU2_TR(0x426648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426650:L426650:{c.instructions+=13;NFSU2_TR(0x426650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426652:{NFSU2_TR(0x426652);
u8 U[4];
w4(U+0,u32(0x77190cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426657:{NFSU2_TR(0x426657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42665d:{NFSU2_TR(0x42665d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42665e:{NFSU2_TR(0x42665e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426665:{NFSU2_TR(0x426665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426666:{NFSU2_TR(0x426666);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42666a:{NFSU2_TR(0x42666a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42666b:{NFSU2_TR(0x42666b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42666c:{NFSU2_TR(0x42666c);
__builtin_memmove((R+24),(R+4),4);
}
B42666e:{NFSU2_TR(0x42666e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42666f:{NFSU2_TR(0x42666f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426673:{NFSU2_TR(0x426673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426678ull));
TAIL_STATIC(0x418470u,418);
}
B426678:L426678:{c.instructions+=4;NFSU2_TR(0x426678);
u8 U[4];
w4(U+0,u32(0x220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42667d:{NFSU2_TR(0x42667d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426685:{NFSU2_TR(0x426685);
u8 U[4];
w4(U+0,u32(0x784680ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42668b:{NFSU2_TR(0x42668b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426690ull));
TAIL_STATIC(0x575620u,575);
}
B426690:L426690:{c.instructions+=6;NFSU2_TR(0x426690);
__builtin_memmove((R+28),(R+0),4);
}
B426692:{NFSU2_TR(0x426692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426695:{NFSU2_TR(0x426695);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426699:{NFSU2_TR(0x426699);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42669b:{NFSU2_TR(0x42669b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4266a0:{NFSU2_TR(0x4266a0);
if(r1(R+518)){{goto L4266b4;}}
}
B4266a2:L4266a2:{c.instructions+=2;NFSU2_TR(0x4266a2);
__builtin_memmove((R+4),(R+28),4);
}
B4266a4:{NFSU2_TR(0x4266a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4266a9ull));
TAIL_STATIC(0x423330u,423);
}
B4266a9:L4266a9:{c.instructions+=3;NFSU2_TR(0x4266a9);
u8 U[4];
w4(U+0,u32(0x7855d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4266af:{NFSU2_TR(0x4266af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4266b2:{NFSU2_TR(0x4266b2);
{goto L4266b9;}
}
B4266b4:L4266b4:{c.instructions+=2;NFSU2_TR(0x4266b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4266b6:{NFSU2_TR(0x4266b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4266b9:L4266b9:{c.instructions+=7;NFSU2_TR(0x4266b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4266bd:{NFSU2_TR(0x4266bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4266be:{NFSU2_TR(0x4266be);
__builtin_memmove((R+0),(R+24),4);
}
B4266c0:{NFSU2_TR(0x4266c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4266c1:{NFSU2_TR(0x4266c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4266c8:{NFSU2_TR(0x4266c8);
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
B4266cb:{NFSU2_TR(0x4266cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4266d0:L4266d0:{c.instructions+=15;NFSU2_TR(0x4266d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266d2:{NFSU2_TR(0x4266d2);
u8 U[4];
w4(U+0,u32(0x771955ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266d7:{NFSU2_TR(0x4266d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4266dd:{NFSU2_TR(0x4266dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266de:{NFSU2_TR(0x4266de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4266e5:{NFSU2_TR(0x4266e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4266e8:{NFSU2_TR(0x4266e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4266ec:{NFSU2_TR(0x4266ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266ed:{NFSU2_TR(0x4266ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266ee:{NFSU2_TR(0x4266ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266ef:{NFSU2_TR(0x4266ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266f0:{NFSU2_TR(0x4266f0);
__builtin_memmove((R+24),(R+4),4);
}
B4266f2:{NFSU2_TR(0x4266f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4266f3:{NFSU2_TR(0x4266f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4266f7:{NFSU2_TR(0x4266f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4266fcull));
TAIL_STATIC(0x418470u,418);
}
B4266fc:L4266fc:{c.instructions+=7;NFSU2_TR(0x4266fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4266ff:{NFSU2_TR(0x4266ff);
u8 U[4];
w4(U+0,u32(0x785230ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426705:{NFSU2_TR(0x426705);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426707:{NFSU2_TR(0x426707);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B426709:{NFSU2_TR(0x426709);
u8 U[4];
w4(U+0,u32(0x785064ull));
s4(u32(r4(R+20)),r4(U+0));
}
B426710:{NFSU2_TR(0x426710);
w4(R+4,u32(0xdcull));
}
B426715:{NFSU2_TR(0x426715);
__builtin_memmove((R+28),(R+20),4);
}
B426717:L426717:{c.instructions+=1;NFSU2_TR(0x426717);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L426719;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x426717u);}goto L426717;}
}
B426719:L426719:{c.instructions+=5;NFSU2_TR(0x426719);
__builtin_memmove((R+4),(R+20),4);
}
B42671b:{NFSU2_TR(0x42671b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42671f:{NFSU2_TR(0x42671f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426725:{NFSU2_TR(0x426725);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42672b:{NFSU2_TR(0x42672b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426730ull));
TAIL_STATIC(0x411be0u,411);
}
B426730:L426730:{c.instructions+=12;NFSU2_TR(0x426730);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B426736:{NFSU2_TR(0x426736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42673c:{NFSU2_TR(0x42673c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426742:{NFSU2_TR(0x426742);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4a8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426748:{NFSU2_TR(0x426748);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4a9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42674e:{NFSU2_TR(0x42674e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426754:{NFSU2_TR(0x426754);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4abull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42675a:{NFSU2_TR(0x42675a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4acull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426760:{NFSU2_TR(0x426760);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426762:{NFSU2_TR(0x426762);
__builtin_memmove((R+28),(R+8),4);
}
B426764:{NFSU2_TR(0x426764);
u8 U[4];
w4(U+0,u32(0x785064ull));
s4(u32(r4(R+8)),r4(U+0));
}
B42676a:{NFSU2_TR(0x42676a);
w4(R+4,u32(0xdcull));
}
B42676f:L42676f:{c.instructions+=1;NFSU2_TR(0x42676f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L426771;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42676fu);}goto L42676f;}
}
B426771:L426771:{c.instructions+=5;NFSU2_TR(0x426771);
__builtin_memmove((R+4),(R+8),4);
}
B426773:{NFSU2_TR(0x426773);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426778:{NFSU2_TR(0x426778);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42677e:{NFSU2_TR(0x42677e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426785:{NFSU2_TR(0x426785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42678aull));
TAIL_STATIC(0x411be0u,411);
}
B42678a:L42678a:{c.instructions+=3;NFSU2_TR(0x42678a);
u8 U[4];
w4(U+0,u32(0x320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42678f:{NFSU2_TR(0x42678f);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426794:{NFSU2_TR(0x426794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426799ull));
TAIL_STATIC(0x575620u,575);
}
B426799:L426799:{c.instructions+=5;NFSU2_TR(0x426799);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42679c:{NFSU2_TR(0x42679c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267a0:{NFSU2_TR(0x4267a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4267a2:{NFSU2_TR(0x4267a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4267a7:{NFSU2_TR(0x4267a7);
if(r1(R+518)){{goto L4267b7;}}
}
B4267a9:L4267a9:{c.instructions+=4;NFSU2_TR(0x4267a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4267ad:{NFSU2_TR(0x4267ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4267ae:{NFSU2_TR(0x4267ae);
__builtin_memmove((R+4),(R+0),4);
}
B4267b0:{NFSU2_TR(0x4267b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4267b5ull));
TAIL_STATIC(0x425fc0u,425);
}
B4267b5:L4267b5:{c.instructions+=1;NFSU2_TR(0x4267b5);
{goto L4267b9;}
}
B4267b7:L4267b7:{c.instructions+=1;NFSU2_TR(0x4267b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4267b9:L4267b9:{c.instructions+=10;NFSU2_TR(0x4267b9);
__builtin_memmove((R+4),(R+20),4);
}
B4267bb:{NFSU2_TR(0x4267bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4267c0:{NFSU2_TR(0x4267c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267c3:{NFSU2_TR(0x4267c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267c9:{NFSU2_TR(0x4267c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267cf:{NFSU2_TR(0x4267cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267d5:{NFSU2_TR(0x4267d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267db:{NFSU2_TR(0x4267db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4267e1:{NFSU2_TR(0x4267e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4267e7:{NFSU2_TR(0x4267e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4267ecull));
TAIL_STATIC(0x411be0u,411);
}
B4267ec:L4267ec:{c.instructions+=2;NFSU2_TR(0x4267ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4267f2:{NFSU2_TR(0x4267f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4267f7ull));
TAIL_STATIC(0x411be0u,411);
}
B4267f7:L4267f7:{c.instructions+=9;NFSU2_TR(0x4267f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4267fb:{NFSU2_TR(0x4267fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4267fc:{NFSU2_TR(0x4267fc);
__builtin_memmove((R+0),(R+24),4);
}
B4267fe:{NFSU2_TR(0x4267fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4267ff:{NFSU2_TR(0x4267ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B426800:{NFSU2_TR(0x426800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426801:{NFSU2_TR(0x426801);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426808:{NFSU2_TR(0x426808);
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
B42680b:{NFSU2_TR(0x42680b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426810:L426810:{c.instructions+=25;NFSU2_TR(0x426810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B426813:{NFSU2_TR(0x426813);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426817:{NFSU2_TR(0x426817);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426818:{NFSU2_TR(0x426818);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42681c:{NFSU2_TR(0x42681c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42681d:{NFSU2_TR(0x42681d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42681e:{NFSU2_TR(0x42681e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42681f:{NFSU2_TR(0x42681f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426820:{NFSU2_TR(0x426820);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426822:{NFSU2_TR(0x426822);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426824:{NFSU2_TR(0x426824);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426826:{NFSU2_TR(0x426826);
__builtin_memmove((R+24),(R+4),4);
}
B426828:{NFSU2_TR(0x426828);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42682c:{NFSU2_TR(0x42682c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42682f:{NFSU2_TR(0x42682f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B426833:{NFSU2_TR(0x426833);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426834:{NFSU2_TR(0x426834);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B426838:{NFSU2_TR(0x426838);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426839:{NFSU2_TR(0x426839);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426841:{NFSU2_TR(0x426841);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426849:{NFSU2_TR(0x426849);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426851:{NFSU2_TR(0x426851);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426859:{NFSU2_TR(0x426859);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426861:{NFSU2_TR(0x426861);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ffull))));
}
B426867:{NFSU2_TR(0x426867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42686cull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B42686c:L42686c:{c.instructions+=4;NFSU2_TR(0x42686c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42686d:{NFSU2_TR(0x42686d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42686e:{NFSU2_TR(0x42686e);
__builtin_memmove((R+4),(R+24),4);
}
B426870:{NFSU2_TR(0x426870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426875ull));
TAIL_STATIC(0x418a50u,418);
}
B426875:L426875:{c.instructions+=6;NFSU2_TR(0x426875);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426879:{NFSU2_TR(0x426879);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42687a:{NFSU2_TR(0x42687a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42687b:{NFSU2_TR(0x42687b);
__builtin_memmove((R+4),(R+24),4);
}
B42687d:{NFSU2_TR(0x42687d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426884:{NFSU2_TR(0x426884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426889ull));
TAIL_STATIC(0x422220u,422);
}
B426889:L426889:{c.instructions+=5;NFSU2_TR(0x426889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42688a:{NFSU2_TR(0x42688a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42688b:{NFSU2_TR(0x42688b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42688c:{NFSU2_TR(0x42688c);
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
B42688f:{NFSU2_TR(0x42688f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4268a0:L4268a0:{c.instructions+=9;NFSU2_TR(0x4268a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268a1:{NFSU2_TR(0x4268a1);
__builtin_memmove((R+20),(R+16),4);
}
B4268a3:{NFSU2_TR(0x4268a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4268a6:{NFSU2_TR(0x4268a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B4268ac:{NFSU2_TR(0x4268ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268ad:{NFSU2_TR(0x4268ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268ae:{NFSU2_TR(0x4268ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268af:{NFSU2_TR(0x4268af);
__builtin_memmove((R+24),(R+4),4);
}
B4268b1:{NFSU2_TR(0x4268b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4268b6ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B4268b6:L4268b6:{c.instructions+=3;NFSU2_TR(0x4268b6);
__builtin_memmove((R+28),(R+0),4);
}
B4268b8:{NFSU2_TR(0x4268b8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4268bb:{NFSU2_TR(0x4268bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4268c5;}}
}
B4268bd:L4268bd:{c.instructions+=3;NFSU2_TR(0x4268bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268be:{NFSU2_TR(0x4268be);
__builtin_memmove((R+4),(R+24),4);
}
B4268c0:{NFSU2_TR(0x4268c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4268c5ull));
TAIL_STATIC(0x422b90u,422);
}
B4268c5:L4268c5:{c.instructions+=4;NFSU2_TR(0x4268c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4268c7:{NFSU2_TR(0x4268c7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4268c9:{NFSU2_TR(0x4268c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4268cc:{NFSU2_TR(0x4268cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4268e3;}}
}
B4268ce:L4268ce:{c.instructions+=3;NFSU2_TR(0x4268ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4268d4:{NFSU2_TR(0x4268d4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4268d6:{NFSU2_TR(0x4268d6);
if(r1(R+518)){{goto L4268e3;}}
}
B4268d8:L4268d8:{c.instructions+=2;NFSU2_TR(0x4268d8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4268d9:{NFSU2_TR(0x4268d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4268e3;}}
}
B4268db:L4268db:{c.instructions+=3;NFSU2_TR(0x4268db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4268dc:{NFSU2_TR(0x4268dc);
__builtin_memmove((R+4),(R+24),4);
}
B4268de:{NFSU2_TR(0x4268de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4268e3ull));
TAIL_STATIC(0x422f90u,422);
}
B4268e3:L4268e3:{c.instructions+=2;NFSU2_TR(0x4268e3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4268e6:{NFSU2_TR(0x4268e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4269cc;}}
}
B4268ec:L4268ec:{c.instructions+=13;NFSU2_TR(0x4268ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4268f2:{NFSU2_TR(0x4268f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4268f8:{NFSU2_TR(0x4268f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4268fa:{NFSU2_TR(0x4268fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
w1(U+6,u8((r1(R+523))==(r1(R+519))));
w1(U+7,u8((r1(U+5))&&(r1(U+6))));
__builtin_memmove((U+4),(U+7),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4268ff:{NFSU2_TR(0x4268ff);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B426901:{NFSU2_TR(0x426901);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426905:{NFSU2_TR(0x426905);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426909:{NFSU2_TR(0x426909);
u8 U[5];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426910:{NFSU2_TR(0x426910);
u8 U[5];
w4(U+0,u32(u32(u32(0xc9ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426917:{NFSU2_TR(0x426917);
u8 U[5];
w4(U+0,u32(u32(u32(0xcaull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42691e:{NFSU2_TR(0x42691e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B426925:{NFSU2_TR(0x426925);
u8 U[5];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42692c:{NFSU2_TR(0x42692c);
if(r1(R+518)){{goto L426947;}}
}
B42692e:L42692e:{c.instructions+=4;NFSU2_TR(0x42692e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B426934:{NFSU2_TR(0x426934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426935:{NFSU2_TR(0x426935);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426939:{NFSU2_TR(0x426939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42693eull));
TAIL_STATIC(0x40a2d0u,40a);
}
B42693e:L42693e:{c.instructions+=2;NFSU2_TR(0x42693e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426945:{NFSU2_TR(0x426945);
{goto L42696e;}
}
B426947:L426947:{c.instructions+=7;NFSU2_TR(0x426947);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426949:{NFSU2_TR(0x426949);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42694c:{NFSU2_TR(0x42694c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42694d:{NFSU2_TR(0x42694d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42694e:{NFSU2_TR(0x42694e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42694f:{NFSU2_TR(0x42694f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426953:{NFSU2_TR(0x426953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426958ull));
TAIL_STATIC(0x4201d0u,420);
}
B426958:L426958:{c.instructions+=2;NFSU2_TR(0x426958);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42695c:{NFSU2_TR(0x42695c);
if(r1(R+518)){{goto L426967;}}
}
B42695e:L42695e:{c.instructions+=2;NFSU2_TR(0x42695e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426965:{NFSU2_TR(0x426965);
{goto L42696e;}
}
B426967:L426967:{c.instructions+=1;NFSU2_TR(0x426967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42696e:L42696e:{c.instructions+=5;NFSU2_TR(0x42696e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426974:{NFSU2_TR(0x426974);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B426976:{NFSU2_TR(0x426976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426979:{NFSU2_TR(0x426979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42697c:{NFSU2_TR(0x42697c);
if(r1(R+518)){{goto L4269cc;}}
}
B42697e:L42697e:{c.instructions+=3;NFSU2_TR(0x42697e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426980:{NFSU2_TR(0x426980);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426983:{NFSU2_TR(0x426983);
if(r1(R+518)){{goto L426992;}}
}
B426985:L426985:{c.instructions+=2;NFSU2_TR(0x426985);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426986:{NFSU2_TR(0x426986);
if(r1(R+518)){{goto L42698b;}}
}
B426988:L426988:{c.instructions+=2;NFSU2_TR(0x426988);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426989:{NFSU2_TR(0x426989);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L426997;}}
}
B42698b:L42698b:{c.instructions+=2;NFSU2_TR(0x42698b);
w4(R+0,u32(0x3ull));
}
B426990:{NFSU2_TR(0x426990);
{goto L426997;}
}
B426992:L426992:{c.instructions+=1;NFSU2_TR(0x426992);
w4(R+0,u32(0x1ull));
}
B426997:L426997:{c.instructions+=6;NFSU2_TR(0x426997);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42699a:{NFSU2_TR(0x42699a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42699c:{NFSU2_TR(0x42699c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4269a0:{NFSU2_TR(0x4269a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269a1:{NFSU2_TR(0x4269a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269a2:{NFSU2_TR(0x4269a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4269a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4269a5:L4269a5:{c.instructions+=7;NFSU2_TR(0x4269a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4269a7:{NFSU2_TR(0x4269a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4269ae:{NFSU2_TR(0x4269ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4269b4:{NFSU2_TR(0x4269b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4269ba:{NFSU2_TR(0x4269ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4269c0:{NFSU2_TR(0x4269c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4269c6:{NFSU2_TR(0x4269c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4269cc:L4269cc:{c.instructions+=6;NFSU2_TR(0x4269cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4269cd:{NFSU2_TR(0x4269cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4269ce:{NFSU2_TR(0x4269ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4269cf:{NFSU2_TR(0x4269cf);
__builtin_memmove((R+16),(R+20),4);
}
B4269d1:{NFSU2_TR(0x4269d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4269d2:{NFSU2_TR(0x4269d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4269e0:L4269e0:{c.instructions+=10;NFSU2_TR(0x4269e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269e2:{NFSU2_TR(0x4269e2);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269e7:{NFSU2_TR(0x4269e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4269ed:{NFSU2_TR(0x4269ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269ee:{NFSU2_TR(0x4269ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4269f5:{NFSU2_TR(0x4269f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269f6:{NFSU2_TR(0x4269f6);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4269fb:{NFSU2_TR(0x4269fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269fc:{NFSU2_TR(0x4269fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4269fd:{NFSU2_TR(0x4269fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426a02ull));
TAIL_STATIC(0x440e50u,440);
}
B426a02:L426a02:{c.instructions+=6;NFSU2_TR(0x426a02);
__builtin_memmove((R+24),(R+0),4);
}
B426a04:{NFSU2_TR(0x426a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426a07:{NFSU2_TR(0x426a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426a0b:{NFSU2_TR(0x426a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426a0d:{NFSU2_TR(0x426a0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426a15:{NFSU2_TR(0x426a15);
if(r1(R+518)){{goto L426a53;}}
}
B426a17:L426a17:{c.instructions+=5;NFSU2_TR(0x426a17);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a1c:{NFSU2_TR(0x426a1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a1e:{NFSU2_TR(0x426a1e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a20:{NFSU2_TR(0x426a20);
__builtin_memmove((R+4),(R+24),4);
}
B426a22:{NFSU2_TR(0x426a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426a27ull));
TAIL_STATIC(0x4234a0u,423);
}
B426a27:L426a27:{c.instructions+=9;NFSU2_TR(0x426a27);
u8 U[4];
w4(U+0,u32(0x785684ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426a2d:{NFSU2_TR(0x426a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426a37:{NFSU2_TR(0x426a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426a41:{NFSU2_TR(0x426a41);
__builtin_memmove((R+0),(R+24),4);
}
B426a43:{NFSU2_TR(0x426a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426a44:{NFSU2_TR(0x426a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426a48:{NFSU2_TR(0x426a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426a4f:{NFSU2_TR(0x426a4f);
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
B426a52:{NFSU2_TR(0x426a52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426a53:L426a53:{c.instructions+=6;NFSU2_TR(0x426a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426a57:{NFSU2_TR(0x426a57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426a59:{NFSU2_TR(0x426a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426a5a:{NFSU2_TR(0x426a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426a61:{NFSU2_TR(0x426a61);
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
B426a64:{NFSU2_TR(0x426a64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426a70:L426a70:{c.instructions+=12;NFSU2_TR(0x426a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426a76:{NFSU2_TR(0x426a76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a78:{NFSU2_TR(0x426a78);
u8 U[4];
w4(U+0,u32(0x771996ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a7d:{NFSU2_TR(0x426a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a7e:{NFSU2_TR(0x426a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426a85:{NFSU2_TR(0x426a85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a86:{NFSU2_TR(0x426a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a87:{NFSU2_TR(0x426a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B426a8b:{NFSU2_TR(0x426a8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a8c:{NFSU2_TR(0x426a8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426a8d:{NFSU2_TR(0x426a8d);
__builtin_memmove((R+12),(R+4),4);
}
B426a8f:{NFSU2_TR(0x426a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426a94ull));
TAIL_STATIC(0x403450u,403);
}
B426a94:L426a94:{c.instructions+=4;NFSU2_TR(0x426a94);
__builtin_memmove((R+28),(R+0),4);
}
B426a96:{NFSU2_TR(0x426a96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426a99:{NFSU2_TR(0x426a99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426a9c:{NFSU2_TR(0x426a9c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L426aeb;}}
}
B426a9e:L426a9e:{c.instructions+=3;NFSU2_TR(0x426a9e);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426aa3:{NFSU2_TR(0x426aa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426aa4:{NFSU2_TR(0x426aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426aa9ull));
TAIL_STATIC(0x440e50u,440);
}
B426aa9:L426aa9:{c.instructions+=7;NFSU2_TR(0x426aa9);
__builtin_memmove((R+24),(R+0),4);
}
B426aab:{NFSU2_TR(0x426aab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426aae:{NFSU2_TR(0x426aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ab2:{NFSU2_TR(0x426ab2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426ab4:{NFSU2_TR(0x426ab4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426ab6:{NFSU2_TR(0x426ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426aba:{NFSU2_TR(0x426aba);
if(r1(R+518)){{goto L426b72;}}
}
B426ac0:L426ac0:{c.instructions+=5;NFSU2_TR(0x426ac0);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ac5:{NFSU2_TR(0x426ac5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ac6:{NFSU2_TR(0x426ac6);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ac8:{NFSU2_TR(0x426ac8);
__builtin_memmove((R+4),(R+24),4);
}
B426aca:{NFSU2_TR(0x426aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426acfull));
TAIL_STATIC(0x4234a0u,423);
}
B426acf:L426acf:{c.instructions+=9;NFSU2_TR(0x426acf);
u8 U[4];
w4(U+0,u32(0x7858d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426ad5:{NFSU2_TR(0x426ad5);
__builtin_memmove((R+0),(R+24),4);
}
B426ad7:{NFSU2_TR(0x426ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426adb:{NFSU2_TR(0x426adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ae2:{NFSU2_TR(0x426ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426ae3:{NFSU2_TR(0x426ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426ae4:{NFSU2_TR(0x426ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426ae5:{NFSU2_TR(0x426ae5);
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
B426ae8:{NFSU2_TR(0x426ae8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426aeb:L426aeb:{c.instructions+=5;NFSU2_TR(0x426aeb);
__builtin_memmove((R+4),gp(0x78373c),4);
}
B426af1:{NFSU2_TR(0x426af1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426af3:{NFSU2_TR(0x426af3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426af4:{NFSU2_TR(0x426af4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426af5:{NFSU2_TR(0x426af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426afaull));
TAIL_STATIC(0x402ae0u,402);
}
B426afa:L426afa:{c.instructions+=5;NFSU2_TR(0x426afa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B426afd:{NFSU2_TR(0x426afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426aff:{NFSU2_TR(0x426aff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B426b02:{NFSU2_TR(0x426b02);
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
B426b04:{NFSU2_TR(0x426b04);
if(r1(R+518)){{goto L426b6b;}}
}
B426b06:L426b06:{c.instructions+=5;NFSU2_TR(0x426b06);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B426b0a:{NFSU2_TR(0x426b0a);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426b0f:{NFSU2_TR(0x426b0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B426b16:{NFSU2_TR(0x426b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b17:{NFSU2_TR(0x426b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426b1cull));
TAIL_STATIC(0x440e50u,440);
}
B426b1c:L426b1c:{c.instructions+=5;NFSU2_TR(0x426b1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426b1f:{NFSU2_TR(0x426b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426b23:{NFSU2_TR(0x426b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426b25:{NFSU2_TR(0x426b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426b2d:{NFSU2_TR(0x426b2d);
if(r1(R+518)){{goto L426b55;}}
}
B426b2f:L426b2f:{c.instructions+=5;NFSU2_TR(0x426b2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b30:{NFSU2_TR(0x426b30);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b35:{NFSU2_TR(0x426b35);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b3a:{NFSU2_TR(0x426b3a);
__builtin_memmove((R+4),(R+0),4);
}
B426b3c:{NFSU2_TR(0x426b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426b41ull));
TAIL_STATIC(0x424560u,424);
}
B426b41:L426b41:{c.instructions+=7;NFSU2_TR(0x426b41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426b45:{NFSU2_TR(0x426b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426b4c:{NFSU2_TR(0x426b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426b4d:{NFSU2_TR(0x426b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426b4e:{NFSU2_TR(0x426b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426b4f:{NFSU2_TR(0x426b4f);
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
B426b52:{NFSU2_TR(0x426b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426b55:L426b55:{c.instructions+=8;NFSU2_TR(0x426b55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426b57:{NFSU2_TR(0x426b57);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426b5b:{NFSU2_TR(0x426b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426b62:{NFSU2_TR(0x426b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426b63:{NFSU2_TR(0x426b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426b64:{NFSU2_TR(0x426b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426b65:{NFSU2_TR(0x426b65);
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
B426b68:{NFSU2_TR(0x426b68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426b6b:L426b6b:{c.instructions+=3;NFSU2_TR(0x426b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B426b6d:{NFSU2_TR(0x426b6d);
__builtin_memmove((R+4),(R+12),4);
}
B426b6f:{NFSU2_TR(0x426b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426b72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B426b72:L426b72:{c.instructions+=7;NFSU2_TR(0x426b72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426b76:{NFSU2_TR(0x426b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426b77:{NFSU2_TR(0x426b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426b78:{NFSU2_TR(0x426b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426b7f:{NFSU2_TR(0x426b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426b80:{NFSU2_TR(0x426b80);
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
B426b83:{NFSU2_TR(0x426b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426b90:L426b90:{c.instructions+=10;NFSU2_TR(0x426b90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b92:{NFSU2_TR(0x426b92);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b97:{NFSU2_TR(0x426b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426b9d:{NFSU2_TR(0x426b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426b9e:{NFSU2_TR(0x426b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ba5:{NFSU2_TR(0x426ba5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ba6:{NFSU2_TR(0x426ba6);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426bab:{NFSU2_TR(0x426bab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426bac:{NFSU2_TR(0x426bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426bad:{NFSU2_TR(0x426bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426bb2ull));
TAIL_STATIC(0x440e50u,440);
}
B426bb2:L426bb2:{c.instructions+=6;NFSU2_TR(0x426bb2);
__builtin_memmove((R+24),(R+0),4);
}
B426bb4:{NFSU2_TR(0x426bb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426bb7:{NFSU2_TR(0x426bb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426bbb:{NFSU2_TR(0x426bbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426bbd:{NFSU2_TR(0x426bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426bc5:{NFSU2_TR(0x426bc5);
if(r1(R+518)){{goto L426c00;}}
}
B426bc7:L426bc7:{c.instructions+=5;NFSU2_TR(0x426bc7);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426bcc:{NFSU2_TR(0x426bcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426bce:{NFSU2_TR(0x426bce);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426bd0:{NFSU2_TR(0x426bd0);
__builtin_memmove((R+4),(R+24),4);
}
B426bd2:{NFSU2_TR(0x426bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426bd7ull));
TAIL_STATIC(0x4234a0u,423);
}
B426bd7:L426bd7:{c.instructions+=9;NFSU2_TR(0x426bd7);
u8 U[4];
w4(U+0,u32(0x785a84ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426bdd:{NFSU2_TR(0x426bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426be7:{NFSU2_TR(0x426be7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B426bee:{NFSU2_TR(0x426bee);
__builtin_memmove((R+0),(R+24),4);
}
B426bf0:{NFSU2_TR(0x426bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426bf1:{NFSU2_TR(0x426bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426bf5:{NFSU2_TR(0x426bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426bfc:{NFSU2_TR(0x426bfc);
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
B426bff:{NFSU2_TR(0x426bff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426c00:L426c00:{c.instructions+=6;NFSU2_TR(0x426c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426c04:{NFSU2_TR(0x426c04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426c06:{NFSU2_TR(0x426c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426c07:{NFSU2_TR(0x426c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c0e:{NFSU2_TR(0x426c0e);
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
B426c11:{NFSU2_TR(0x426c11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426c20:L426c20:{c.instructions+=22;NFSU2_TR(0x426c20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c22:{NFSU2_TR(0x426c22);
u8 U[4];
w4(U+0,u32(0x7719b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c27:{NFSU2_TR(0x426c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426c2d:{NFSU2_TR(0x426c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c2e:{NFSU2_TR(0x426c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c35:{NFSU2_TR(0x426c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B426c38:{NFSU2_TR(0x426c38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c39:{NFSU2_TR(0x426c39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c3a:{NFSU2_TR(0x426c3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c3b:{NFSU2_TR(0x426c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B426c3f:{NFSU2_TR(0x426c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B426c41:{NFSU2_TR(0x426c41);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B426c43:{NFSU2_TR(0x426c43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c44:{NFSU2_TR(0x426c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B426c47:{NFSU2_TR(0x426c47);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B426c4c:{NFSU2_TR(0x426c4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c50:{NFSU2_TR(0x426c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c54:{NFSU2_TR(0x426c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c58:{NFSU2_TR(0x426c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c5c:{NFSU2_TR(0x426c5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c60:{NFSU2_TR(0x426c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c64:{NFSU2_TR(0x426c64);
if(r1(R+518)){{goto L426cc7;}}
}
B426c66:L426c66:{c.instructions+=2;NFSU2_TR(0x426c66);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x258ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x258ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B426c6e:{NFSU2_TR(0x426c6e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L426cc7;}}
}
B426c70:L426c70:{c.instructions+=6;NFSU2_TR(0x426c70);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B426c74:{NFSU2_TR(0x426c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c75:{NFSU2_TR(0x426c75);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426c79:{NFSU2_TR(0x426c79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c7a:{NFSU2_TR(0x426c7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c7b:{NFSU2_TR(0x426c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426c80ull));
TAIL_STATIC(0x4149e0u,414);
}
B426c80:L426c80:{c.instructions+=4;NFSU2_TR(0x426c80);
__builtin_memmove((R+20),(R+0),4);
}
B426c82:{NFSU2_TR(0x426c82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B426c85:{NFSU2_TR(0x426c85);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426c88:{NFSU2_TR(0x426c88);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L426cc7;}}
}
B426c8a:L426c8a:{c.instructions+=3;NFSU2_TR(0x426c8a);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426c90:{NFSU2_TR(0x426c90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426c91:{NFSU2_TR(0x426c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426c96ull));
TAIL_STATIC(0x440e50u,440);
}
B426c96:L426c96:{c.instructions+=5;NFSU2_TR(0x426c96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426c99:{NFSU2_TR(0x426c99);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426c9d:{NFSU2_TR(0x426c9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426c9f:{NFSU2_TR(0x426c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ca3:{NFSU2_TR(0x426ca3);
if(r1(R+518)){{goto L426d3f;}}
}
B426ca9:L426ca9:{c.instructions+=9;NFSU2_TR(0x426ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426cad:{NFSU2_TR(0x426cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426cb1:{NFSU2_TR(0x426cb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cb2:{NFSU2_TR(0x426cb2);
__builtin_memmove((R+4),gp(0x783648),4);
}
B426cb8:{NFSU2_TR(0x426cb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cb9:{NFSU2_TR(0x426cb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cba:{NFSU2_TR(0x426cba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cbb:{NFSU2_TR(0x426cbb);
__builtin_memmove((R+4),(R+0),4);
}
B426cbd:{NFSU2_TR(0x426cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426cc2ull));
TAIL_STATIC(0x425100u,425);
}
B426cc2:L426cc2:{c.instructions+=1;NFSU2_TR(0x426cc2);
{goto L426d4c;}
}
B426cc7:L426cc7:{c.instructions+=2;NFSU2_TR(0x426cc7);
u8 U[22];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
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
B426ccc:{NFSU2_TR(0x426ccc);
if(r1(R+518)){{goto L426d43;}}
}
B426cce:L426cce:{c.instructions+=2;NFSU2_TR(0x426cce);
u8 U[22];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x12cull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x12cull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B426cd6:{NFSU2_TR(0x426cd6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L426d43;}}
}
B426cd8:L426cd8:{c.instructions+=8;NFSU2_TR(0x426cd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B426cdc:{NFSU2_TR(0x426cdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cdd:{NFSU2_TR(0x426cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B426ce1:{NFSU2_TR(0x426ce1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ce2:{NFSU2_TR(0x426ce2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426ce6:{NFSU2_TR(0x426ce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ce7:{NFSU2_TR(0x426ce7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ce8:{NFSU2_TR(0x426ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426cedull));
TAIL_STATIC(0x4145b0u,414);
}
B426ced:L426ced:{c.instructions+=4;NFSU2_TR(0x426ced);
__builtin_memmove((R+20),(R+0),4);
}
B426cef:{NFSU2_TR(0x426cef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B426cf2:{NFSU2_TR(0x426cf2);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426cf5:{NFSU2_TR(0x426cf5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L426d43;}}
}
B426cf7:L426cf7:{c.instructions+=5;NFSU2_TR(0x426cf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cf8:{NFSU2_TR(0x426cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B426cfc:{NFSU2_TR(0x426cfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426cfd:{NFSU2_TR(0x426cfd);
__builtin_memmove((R+4),(R+28),4);
}
B426cff:{NFSU2_TR(0x426cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426d04ull));
TAIL_STATIC(0x40d5c0u,40d);
}
B426d04:L426d04:{c.instructions+=3;NFSU2_TR(0x426d04);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426d0a:{NFSU2_TR(0x426d0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d0b:{NFSU2_TR(0x426d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426d10ull));
TAIL_STATIC(0x440e50u,440);
}
B426d10:L426d10:{c.instructions+=5;NFSU2_TR(0x426d10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426d13:{NFSU2_TR(0x426d13);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426d17:{NFSU2_TR(0x426d17);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426d19:{NFSU2_TR(0x426d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426d21:{NFSU2_TR(0x426d21);
if(r1(R+518)){{goto L426d3f;}}
}
B426d23:L426d23:{c.instructions+=10;NFSU2_TR(0x426d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426d27:{NFSU2_TR(0x426d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426d2b:{NFSU2_TR(0x426d2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d2c:{NFSU2_TR(0x426d2c);
__builtin_memmove((R+4),gp(0x783634),4);
}
B426d32:{NFSU2_TR(0x426d32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d33:{NFSU2_TR(0x426d33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d34:{NFSU2_TR(0x426d34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d35:{NFSU2_TR(0x426d35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d36:{NFSU2_TR(0x426d36);
__builtin_memmove((R+4),(R+0),4);
}
B426d38:{NFSU2_TR(0x426d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426d3dull));
TAIL_STATIC(0x424b40u,424);
}
B426d3d:L426d3d:{c.instructions+=1;NFSU2_TR(0x426d3d);
{goto L426d4c;}
}
B426d3f:L426d3f:{c.instructions+=2;NFSU2_TR(0x426d3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426d41:{NFSU2_TR(0x426d41);
{goto L426d4c;}
}
B426d43:L426d43:{c.instructions+=3;NFSU2_TR(0x426d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426d47:{NFSU2_TR(0x426d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B426d49:{NFSU2_TR(0x426d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426d4cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B426d4c:L426d4c:{c.instructions+=8;NFSU2_TR(0x426d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426d50:{NFSU2_TR(0x426d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426d51:{NFSU2_TR(0x426d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426d52:{NFSU2_TR(0x426d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B426d53:{NFSU2_TR(0x426d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426d54:{NFSU2_TR(0x426d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426d5b:{NFSU2_TR(0x426d5b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426d5e:{NFSU2_TR(0x426d5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426d70:L426d70:{c.instructions+=22;NFSU2_TR(0x426d70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d72:{NFSU2_TR(0x426d72);
u8 U[4];
w4(U+0,u32(0x7719b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d77:{NFSU2_TR(0x426d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426d7d:{NFSU2_TR(0x426d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d7e:{NFSU2_TR(0x426d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426d85:{NFSU2_TR(0x426d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B426d88:{NFSU2_TR(0x426d88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d89:{NFSU2_TR(0x426d89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d8a:{NFSU2_TR(0x426d8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d8b:{NFSU2_TR(0x426d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B426d8f:{NFSU2_TR(0x426d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B426d91:{NFSU2_TR(0x426d91);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B426d93:{NFSU2_TR(0x426d93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426d94:{NFSU2_TR(0x426d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B426d97:{NFSU2_TR(0x426d97);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B426d9c:{NFSU2_TR(0x426d9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426da0:{NFSU2_TR(0x426da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426da4:{NFSU2_TR(0x426da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426da8:{NFSU2_TR(0x426da8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426dac:{NFSU2_TR(0x426dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426db0:{NFSU2_TR(0x426db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426db4:{NFSU2_TR(0x426db4);
if(r1(R+518)){{goto L426e17;}}
}
B426db6:L426db6:{c.instructions+=2;NFSU2_TR(0x426db6);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x258ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x258ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B426dbe:{NFSU2_TR(0x426dbe);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L426e17;}}
}
B426dc0:L426dc0:{c.instructions+=6;NFSU2_TR(0x426dc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B426dc4:{NFSU2_TR(0x426dc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426dc5:{NFSU2_TR(0x426dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426dc9:{NFSU2_TR(0x426dc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426dca:{NFSU2_TR(0x426dca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426dcb:{NFSU2_TR(0x426dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426dd0ull));
TAIL_STATIC(0x4149e0u,414);
}
B426dd0:L426dd0:{c.instructions+=4;NFSU2_TR(0x426dd0);
__builtin_memmove((R+20),(R+0),4);
}
B426dd2:{NFSU2_TR(0x426dd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B426dd5:{NFSU2_TR(0x426dd5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426dd8:{NFSU2_TR(0x426dd8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L426e17;}}
}
B426dda:L426dda:{c.instructions+=3;NFSU2_TR(0x426dda);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426de0:{NFSU2_TR(0x426de0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426de1:{NFSU2_TR(0x426de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426de6ull));
TAIL_STATIC(0x440e50u,440);
}
B426de6:L426de6:{c.instructions+=5;NFSU2_TR(0x426de6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426de9:{NFSU2_TR(0x426de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ded:{NFSU2_TR(0x426ded);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426def:{NFSU2_TR(0x426def);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426df3:{NFSU2_TR(0x426df3);
if(r1(R+518)){{goto L426e8f;}}
}
B426df9:L426df9:{c.instructions+=9;NFSU2_TR(0x426df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426dfd:{NFSU2_TR(0x426dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426e01:{NFSU2_TR(0x426e01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e02:{NFSU2_TR(0x426e02);
__builtin_memmove((R+4),gp(0x783630),4);
}
B426e08:{NFSU2_TR(0x426e08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e09:{NFSU2_TR(0x426e09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e0a:{NFSU2_TR(0x426e0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e0b:{NFSU2_TR(0x426e0b);
__builtin_memmove((R+4),(R+0),4);
}
B426e0d:{NFSU2_TR(0x426e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e12ull));
TAIL_STATIC(0x425100u,425);
}
B426e12:L426e12:{c.instructions+=1;NFSU2_TR(0x426e12);
{goto L426e9c;}
}
B426e17:L426e17:{c.instructions+=2;NFSU2_TR(0x426e17);
u8 U[22];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
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
B426e1c:{NFSU2_TR(0x426e1c);
if(r1(R+518)){{goto L426e93;}}
}
B426e1e:L426e1e:{c.instructions+=2;NFSU2_TR(0x426e1e);
u8 U[22];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x12cull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x12cull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B426e26:{NFSU2_TR(0x426e26);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L426e93;}}
}
B426e28:L426e28:{c.instructions+=8;NFSU2_TR(0x426e28);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B426e2c:{NFSU2_TR(0x426e2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e2d:{NFSU2_TR(0x426e2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B426e31:{NFSU2_TR(0x426e31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e32:{NFSU2_TR(0x426e32);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B426e36:{NFSU2_TR(0x426e36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e37:{NFSU2_TR(0x426e37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e38:{NFSU2_TR(0x426e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e3dull));
TAIL_STATIC(0x4145b0u,414);
}
B426e3d:L426e3d:{c.instructions+=4;NFSU2_TR(0x426e3d);
__builtin_memmove((R+20),(R+0),4);
}
B426e3f:{NFSU2_TR(0x426e3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B426e42:{NFSU2_TR(0x426e42);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426e45:{NFSU2_TR(0x426e45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L426e93;}}
}
B426e47:L426e47:{c.instructions+=5;NFSU2_TR(0x426e47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e48:{NFSU2_TR(0x426e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B426e4c:{NFSU2_TR(0x426e4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e4d:{NFSU2_TR(0x426e4d);
__builtin_memmove((R+4),(R+28),4);
}
B426e4f:{NFSU2_TR(0x426e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e54ull));
TAIL_STATIC(0x40d5c0u,40d);
}
B426e54:L426e54:{c.instructions+=3;NFSU2_TR(0x426e54);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B426e5a:{NFSU2_TR(0x426e5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e5b:{NFSU2_TR(0x426e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e60ull));
TAIL_STATIC(0x440e50u,440);
}
B426e60:L426e60:{c.instructions+=5;NFSU2_TR(0x426e60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426e63:{NFSU2_TR(0x426e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426e67:{NFSU2_TR(0x426e67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426e69:{NFSU2_TR(0x426e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426e71:{NFSU2_TR(0x426e71);
if(r1(R+518)){{goto L426e8f;}}
}
B426e73:L426e73:{c.instructions+=10;NFSU2_TR(0x426e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426e77:{NFSU2_TR(0x426e77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426e7b:{NFSU2_TR(0x426e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e7c:{NFSU2_TR(0x426e7c);
__builtin_memmove((R+4),gp(0x783634),4);
}
B426e82:{NFSU2_TR(0x426e82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e83:{NFSU2_TR(0x426e83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e84:{NFSU2_TR(0x426e84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e85:{NFSU2_TR(0x426e85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426e86:{NFSU2_TR(0x426e86);
__builtin_memmove((R+4),(R+0),4);
}
B426e88:{NFSU2_TR(0x426e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e8dull));
TAIL_STATIC(0x424b40u,424);
}
B426e8d:L426e8d:{c.instructions+=1;NFSU2_TR(0x426e8d);
{goto L426e9c;}
}
B426e8f:L426e8f:{c.instructions+=2;NFSU2_TR(0x426e8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426e91:{NFSU2_TR(0x426e91);
{goto L426e9c;}
}
B426e93:L426e93:{c.instructions+=3;NFSU2_TR(0x426e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426e97:{NFSU2_TR(0x426e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B426e99:{NFSU2_TR(0x426e99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426e9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B426e9c:L426e9c:{c.instructions+=8;NFSU2_TR(0x426e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426ea0:{NFSU2_TR(0x426ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426ea1:{NFSU2_TR(0x426ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426ea2:{NFSU2_TR(0x426ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B426ea3:{NFSU2_TR(0x426ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B426ea4:{NFSU2_TR(0x426ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426eab:{NFSU2_TR(0x426eab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B426eae:{NFSU2_TR(0x426eae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426ec0:L426ec0:{c.instructions+=10;NFSU2_TR(0x426ec0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ec2:{NFSU2_TR(0x426ec2);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ec7:{NFSU2_TR(0x426ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426ecd:{NFSU2_TR(0x426ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ece:{NFSU2_TR(0x426ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ed5:{NFSU2_TR(0x426ed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ed6:{NFSU2_TR(0x426ed6);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426edb:{NFSU2_TR(0x426edb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426edc:{NFSU2_TR(0x426edc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426edd:{NFSU2_TR(0x426edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426ee2ull));
TAIL_STATIC(0x440e50u,440);
}
B426ee2:L426ee2:{c.instructions+=7;NFSU2_TR(0x426ee2);
__builtin_memmove((R+24),(R+0),4);
}
B426ee4:{NFSU2_TR(0x426ee4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426ee7:{NFSU2_TR(0x426ee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426eeb:{NFSU2_TR(0x426eeb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426eed:{NFSU2_TR(0x426eed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B426eef:{NFSU2_TR(0x426eef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426ef3:{NFSU2_TR(0x426ef3);
if(r1(R+518)){{goto L426f0c;}}
}
B426ef5:L426ef5:{c.instructions+=5;NFSU2_TR(0x426ef5);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426efa:{NFSU2_TR(0x426efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426efb:{NFSU2_TR(0x426efb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426efd:{NFSU2_TR(0x426efd);
__builtin_memmove((R+4),(R+24),4);
}
B426eff:{NFSU2_TR(0x426eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426f04ull));
TAIL_STATIC(0x4234a0u,423);
}
B426f04:L426f04:{c.instructions+=2;NFSU2_TR(0x426f04);
u8 U[4];
w4(U+0,u32(0x785820ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426f0a:{NFSU2_TR(0x426f0a);
__builtin_memmove((R+0),(R+24),4);
}
B426f0c:L426f0c:{c.instructions+=5;NFSU2_TR(0x426f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426f10:{NFSU2_TR(0x426f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426f11:{NFSU2_TR(0x426f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f18:{NFSU2_TR(0x426f18);
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
B426f1b:{NFSU2_TR(0x426f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426f20:L426f20:{c.instructions+=12;NFSU2_TR(0x426f20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f22:{NFSU2_TR(0x426f22);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f27:{NFSU2_TR(0x426f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426f2d:{NFSU2_TR(0x426f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f2e:{NFSU2_TR(0x426f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f35:{NFSU2_TR(0x426f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B426f38:{NFSU2_TR(0x426f38);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426f3d:{NFSU2_TR(0x426f3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f3e:{NFSU2_TR(0x426f3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f3f:{NFSU2_TR(0x426f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f40:{NFSU2_TR(0x426f40);
__builtin_memmove((R+28),(R+4),4);
}
B426f42:{NFSU2_TR(0x426f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426f47ull));
TAIL_STATIC(0x440e50u,440);
}
B426f47:L426f47:{c.instructions+=6;NFSU2_TR(0x426f47);
__builtin_memmove((R+24),(R+0),4);
}
B426f49:{NFSU2_TR(0x426f49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426f4c:{NFSU2_TR(0x426f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f50:{NFSU2_TR(0x426f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B426f52:{NFSU2_TR(0x426f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426f5a:{NFSU2_TR(0x426f5a);
if(r1(R+518)){{goto L426fbb;}}
}
B426f5c:L426f5c:{c.instructions+=11;NFSU2_TR(0x426f5c);
__builtin_memmove((R+0),gp(0x783650),4);
}
B426f61:{NFSU2_TR(0x426f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426f64:{NFSU2_TR(0x426f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426f67:{NFSU2_TR(0x426f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B426f6a:{NFSU2_TR(0x426f6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f6b:{NFSU2_TR(0x426f6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f6d:{NFSU2_TR(0x426f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f71:{NFSU2_TR(0x426f71);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426f73:{NFSU2_TR(0x426f73);
__builtin_memmove((R+4),(R+24),4);
}
B426f75:{NFSU2_TR(0x426f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f79:{NFSU2_TR(0x426f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426f7eull));
TAIL_STATIC(0x4234a0u,423);
}
B426f7e:L426f7e:{c.instructions+=14;NFSU2_TR(0x426f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426f82:{NFSU2_TR(0x426f82);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B426f86:{NFSU2_TR(0x426f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f8c:{NFSU2_TR(0x426f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426f8d:{NFSU2_TR(0x426f8d);
u8 U[4];
w4(U+0,u32(0x785a18ull));
s4(u32(r4(R+24)),r4(U+0));
}
B426f93:{NFSU2_TR(0x426f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f99:{NFSU2_TR(0x426f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426f9f:{NFSU2_TR(0x426f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B426fa9:{NFSU2_TR(0x426fa9);
__builtin_memmove((R+0),(R+24),4);
}
B426fab:{NFSU2_TR(0x426fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426fac:{NFSU2_TR(0x426fac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426fb0:{NFSU2_TR(0x426fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426fb7:{NFSU2_TR(0x426fb7);
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
B426fba:{NFSU2_TR(0x426fba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426fbb:L426fbb:{c.instructions+=7;NFSU2_TR(0x426fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B426fbf:{NFSU2_TR(0x426fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B426fc0:{NFSU2_TR(0x426fc0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B426fc2:{NFSU2_TR(0x426fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B426fc3:{NFSU2_TR(0x426fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426fca:{NFSU2_TR(0x426fca);
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
B426fcd:{NFSU2_TR(0x426fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B426fd0:L426fd0:{c.instructions+=12;NFSU2_TR(0x426fd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426fd2:{NFSU2_TR(0x426fd2);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426fd7:{NFSU2_TR(0x426fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B426fdd:{NFSU2_TR(0x426fdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426fde:{NFSU2_TR(0x426fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B426fe5:{NFSU2_TR(0x426fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B426fe8:{NFSU2_TR(0x426fe8);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B426fed:{NFSU2_TR(0x426fed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426fee:{NFSU2_TR(0x426fee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426fef:{NFSU2_TR(0x426fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B426ff0:{NFSU2_TR(0x426ff0);
__builtin_memmove((R+28),(R+4),4);
}
B426ff2:{NFSU2_TR(0x426ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426ff7ull));
TAIL_STATIC(0x440e50u,440);
}
B426ff7:L426ff7:{c.instructions+=3;NFSU2_TR(0x426ff7);
__builtin_memmove((R+24),(R+0),4);
}
B426ff9:{NFSU2_TR(0x426ff9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B426ffc:{NFSU2_TR(0x426ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x427000u,427);
}
XIT:NFSU2_TR_EXIT(0x426,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
