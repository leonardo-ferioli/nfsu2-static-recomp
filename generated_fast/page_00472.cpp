#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_473(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x472,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x472,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_472(u8* __restrict R,Cpu& c);
u32 page_472(Cpu& c){return body_472(c.regs.data(),c);}
__attribute__((noinline)) u32 body_472(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x472004:goto L472004;
case 0x472008:c.instructions+=2;goto B472008;
case 0x472009:c.instructions+=1;goto B472009;
case 0x47200e:goto L47200e;
case 0x472011:c.instructions+=1;goto B472011;
case 0x472016:goto L472016;
case 0x47201a:c.instructions+=4;goto B47201a;
case 0x47201c:c.instructions+=3;goto B47201c;
case 0x47201d:c.instructions+=2;goto B47201d;
case 0x47201e:c.instructions+=1;goto B47201e;
case 0x472021:goto L472021;
case 0x472026:goto L472026;
case 0x47202c:c.instructions+=3;goto B47202c;
case 0x472032:c.instructions+=2;goto B472032;
case 0x472034:c.instructions+=1;goto B472034;
case 0x472036:goto L472036;
case 0x472038:c.instructions+=2;goto B472038;
case 0x47203a:c.instructions+=1;goto B47203a;
case 0x47203c:goto L47203c;
case 0x472041:goto L472041;
case 0x472045:c.instructions+=2;goto B472045;
case 0x472046:c.instructions+=1;goto B472046;
case 0x47204b:goto L47204b;
case 0x47204e:c.instructions+=1;goto B47204e;
case 0x472053:goto L472053;
case 0x472057:c.instructions+=4;goto B472057;
case 0x472059:c.instructions+=3;goto B472059;
case 0x47205a:c.instructions+=2;goto B47205a;
case 0x47205b:c.instructions+=1;goto B47205b;
case 0x47205e:goto L47205e;
case 0x472063:goto L472063;
case 0x472069:goto L472069;
case 0x47206a:c.instructions+=4;goto B47206a;
case 0x47206b:c.instructions+=3;goto B47206b;
case 0x47206c:c.instructions+=2;goto B47206c;
case 0x47206d:c.instructions+=1;goto B47206d;
case 0x472070:goto L472070;
case 0x472071:c.instructions+=6;goto B472071;
case 0x472075:c.instructions+=5;goto B472075;
case 0x472077:c.instructions+=4;goto B472077;
case 0x472078:c.instructions+=3;goto B472078;
case 0x47207a:c.instructions+=2;goto B47207a;
case 0x47207c:c.instructions+=1;goto B47207c;
case 0x47207f:goto L47207f;
case 0x472081:c.instructions+=4;goto B472081;
case 0x472084:c.instructions+=3;goto B472084;
case 0x472089:c.instructions+=2;goto B472089;
case 0x47208c:c.instructions+=1;goto B47208c;
case 0x47208e:goto L47208e;
case 0x47208f:c.instructions+=1;goto B47208f;
case 0x472091:goto L472091;
case 0x472094:c.instructions+=1;goto B472094;
case 0x472096:goto L472096;
case 0x47209b:c.instructions+=2;goto B47209b;
case 0x47209d:c.instructions+=1;goto B47209d;
case 0x4720a2:goto L4720a2;
case 0x4720a5:c.instructions+=3;goto B4720a5;
case 0x4720a6:c.instructions+=2;goto B4720a6;
case 0x4720a7:c.instructions+=1;goto B4720a7;
case 0x4720aa:goto L4720aa;
case 0x4720b0:c.instructions+=3;goto B4720b0;
case 0x4720b1:c.instructions+=2;goto B4720b1;
case 0x4720b2:c.instructions+=1;goto B4720b2;
case 0x4720b5:goto L4720b5;
case 0x4720bb:c.instructions+=3;goto B4720bb;
case 0x4720bc:c.instructions+=2;goto B4720bc;
case 0x4720bd:c.instructions+=1;goto B4720bd;
case 0x4720c0:goto L4720c0;
case 0x4720c6:c.instructions+=3;goto B4720c6;
case 0x4720c7:c.instructions+=2;goto B4720c7;
case 0x4720c8:c.instructions+=1;goto B4720c8;
case 0x4720d0:goto L4720d0;
case 0x4720d6:c.instructions+=11;goto B4720d6;
case 0x4720d8:c.instructions+=10;goto B4720d8;
case 0x4720dd:c.instructions+=9;goto B4720dd;
case 0x4720de:c.instructions+=8;goto B4720de;
case 0x4720e3:c.instructions+=7;goto B4720e3;
case 0x4720ea:c.instructions+=6;goto B4720ea;
case 0x4720ed:c.instructions+=5;goto B4720ed;
case 0x4720ef:c.instructions+=4;goto B4720ef;
case 0x4720f0:c.instructions+=3;goto B4720f0;
case 0x4720f1:c.instructions+=2;goto B4720f1;
case 0x4720f3:c.instructions+=1;goto B4720f3;
case 0x4720f9:goto L4720f9;
case 0x4720ff:c.instructions+=5;goto B4720ff;
case 0x472102:c.instructions+=4;goto B472102;
case 0x472108:c.instructions+=3;goto B472108;
case 0x47210a:c.instructions+=2;goto B47210a;
case 0x47210d:c.instructions+=1;goto B47210d;
case 0x472113:goto L472113;
case 0x472119:c.instructions+=6;goto B472119;
case 0x47211c:c.instructions+=5;goto B47211c;
case 0x472122:c.instructions+=4;goto B472122;
case 0x472123:c.instructions+=3;goto B472123;
case 0x472124:c.instructions+=2;goto B472124;
case 0x472129:c.instructions+=1;goto B472129;
case 0x47212e:goto L47212e;
case 0x472134:c.instructions+=5;goto B472134;
case 0x472136:c.instructions+=4;goto B472136;
case 0x472138:c.instructions+=3;goto B472138;
case 0x47213a:c.instructions+=2;goto B47213a;
case 0x47213e:c.instructions+=1;goto B47213e;
case 0x472141:goto L472141;
case 0x472145:c.instructions+=2;goto B472145;
case 0x472147:c.instructions+=1;goto B472147;
case 0x47214c:goto L47214c;
case 0x47214e:c.instructions+=7;goto B47214e;
case 0x472151:c.instructions+=6;goto B472151;
case 0x472154:c.instructions+=5;goto B472154;
case 0x472157:c.instructions+=4;goto B472157;
case 0x472159:c.instructions+=3;goto B472159;
case 0x47215c:c.instructions+=2;goto B47215c;
case 0x472166:c.instructions+=1;goto B472166;
case 0x47216b:goto L47216b;
case 0x47216d:c.instructions+=5;goto B47216d;
case 0x472170:c.instructions+=4;goto B472170;
case 0x472174:c.instructions+=3;goto B472174;
case 0x472176:c.instructions+=2;goto B472176;
case 0x47217e:c.instructions+=1;goto B47217e;
case 0x472184:goto L472184;
case 0x47218a:c.instructions+=7;goto B47218a;
case 0x47218d:c.instructions+=6;goto B47218d;
case 0x47218f:c.instructions+=5;goto B47218f;
case 0x472195:c.instructions+=4;goto B472195;
case 0x472199:c.instructions+=3;goto B472199;
case 0x47219b:c.instructions+=2;goto B47219b;
case 0x47219d:c.instructions+=1;goto B47219d;
case 0x4721a0:goto L4721a0;
case 0x4721a4:c.instructions+=5;goto B4721a4;
case 0x4721a7:c.instructions+=4;goto B4721a7;
case 0x4721a9:c.instructions+=3;goto B4721a9;
case 0x4721ac:c.instructions+=2;goto B4721ac;
case 0x4721b3:c.instructions+=1;goto B4721b3;
case 0x4721b5:goto L4721b5;
case 0x4721b7:c.instructions+=1;goto B4721b7;
case 0x4721b9:goto L4721b9;
case 0x4721bc:c.instructions+=1;goto B4721bc;
case 0x4721be:goto L4721be;
case 0x4721c3:goto L4721c3;
case 0x4721c7:c.instructions+=2;goto B4721c7;
case 0x4721ca:c.instructions+=1;goto B4721ca;
case 0x4721cf:goto L4721cf;
case 0x4721d1:c.instructions+=2;goto B4721d1;
case 0x4721d3:c.instructions+=1;goto B4721d3;
case 0x4721d5:goto L4721d5;
case 0x4721d7:c.instructions+=1;goto B4721d7;
case 0x4721d9:goto L4721d9;
case 0x4721de:c.instructions+=1;goto B4721de;
case 0x4721e0:goto L4721e0;
case 0x4721e5:goto L4721e5;
case 0x4721e7:c.instructions+=2;goto B4721e7;
case 0x4721ea:c.instructions+=1;goto B4721ea;
case 0x4721ec:goto L4721ec;
case 0x4721ee:c.instructions+=1;goto B4721ee;
case 0x4721f0:goto L4721f0;
case 0x4721f6:c.instructions+=1;goto B4721f6;
case 0x4721f8:goto L4721f8;
case 0x4721fd:goto L4721fd;
case 0x472201:c.instructions+=3;goto B472201;
case 0x472203:c.instructions+=2;goto B472203;
case 0x472206:c.instructions+=1;goto B472206;
case 0x472208:goto L472208;
case 0x47220a:c.instructions+=1;goto B47220a;
case 0x47220c:goto L47220c;
case 0x472211:c.instructions+=1;goto B472211;
case 0x472213:goto L472213;
case 0x472218:goto L472218;
case 0x472219:c.instructions+=6;goto B472219;
case 0x47221a:c.instructions+=5;goto B47221a;
case 0x47221f:c.instructions+=4;goto B47221f;
case 0x472222:c.instructions+=3;goto B472222;
case 0x472225:c.instructions+=2;goto B472225;
case 0x472228:c.instructions+=1;goto B472228;
case 0x47222d:goto L47222d;
case 0x472230:c.instructions+=2;goto B472230;
case 0x472232:c.instructions+=1;goto B472232;
case 0x472234:goto L472234;
case 0x472239:c.instructions+=2;goto B472239;
case 0x47223e:c.instructions+=1;goto B47223e;
case 0x472243:goto L472243;
case 0x472244:c.instructions+=3;goto B472244;
case 0x472245:c.instructions+=2;goto B472245;
case 0x47224a:c.instructions+=1;goto B47224a;
case 0x47224f:goto L47224f;
case 0x472252:c.instructions+=1;goto B472252;
case 0x472254:goto L472254;
case 0x472256:goto L472256;
case 0x47225c:c.instructions+=7;goto B47225c;
case 0x47225e:c.instructions+=6;goto B47225e;
case 0x472260:c.instructions+=5;goto B472260;
case 0x472261:c.instructions+=4;goto B472261;
case 0x472269:c.instructions+=3;goto B472269;
case 0x472271:c.instructions+=2;goto B472271;
case 0x472272:c.instructions+=1;goto B472272;
case 0x472274:goto L472274;
case 0x472278:c.instructions+=3;goto B472278;
case 0x472279:c.instructions+=2;goto B472279;
case 0x47227b:c.instructions+=1;goto B47227b;
case 0x472280:goto L472280;
case 0x472281:c.instructions+=5;goto B472281;
case 0x472282:c.instructions+=4;goto B472282;
case 0x472286:c.instructions+=3;goto B472286;
case 0x47228d:c.instructions+=2;goto B47228d;
case 0x472290:c.instructions+=1;goto B472290;
case 0x472291:goto L472291;
case 0x472293:goto L472293;
case 0x472297:c.instructions+=5;goto B472297;
case 0x472298:c.instructions+=4;goto B472298;
case 0x472299:c.instructions+=3;goto B472299;
case 0x4722a0:c.instructions+=2;goto B4722a0;
case 0x4722a3:c.instructions+=1;goto B4722a3;
case 0x4722b0:goto L4722b0;
case 0x4722b6:c.instructions+=10;goto B4722b6;
case 0x4722b8:c.instructions+=9;goto B4722b8;
case 0x4722bd:c.instructions+=8;goto B4722bd;
case 0x4722be:c.instructions+=7;goto B4722be;
case 0x4722c3:c.instructions+=6;goto B4722c3;
case 0x4722ca:c.instructions+=5;goto B4722ca;
case 0x4722cd:c.instructions+=4;goto B4722cd;
case 0x4722cf:c.instructions+=3;goto B4722cf;
case 0x4722d0:c.instructions+=2;goto B4722d0;
case 0x4722d2:c.instructions+=1;goto B4722d2;
case 0x4722d8:goto L4722d8;
case 0x4722de:c.instructions+=5;goto B4722de;
case 0x4722e4:c.instructions+=4;goto B4722e4;
case 0x4722ea:c.instructions+=3;goto B4722ea;
case 0x4722ec:c.instructions+=2;goto B4722ec;
case 0x4722ef:c.instructions+=1;goto B4722ef;
case 0x4722f5:goto L4722f5;
case 0x4722fb:c.instructions+=7;goto B4722fb;
case 0x4722fc:c.instructions+=6;goto B4722fc;
case 0x4722fd:c.instructions+=5;goto B4722fd;
case 0x472300:c.instructions+=4;goto B472300;
case 0x472306:c.instructions+=3;goto B472306;
case 0x472307:c.instructions+=2;goto B472307;
case 0x47230c:c.instructions+=1;goto B47230c;
case 0x472311:goto L472311;
case 0x472317:c.instructions+=5;goto B472317;
case 0x472319:c.instructions+=4;goto B472319;
case 0x47231b:c.instructions+=3;goto B47231b;
case 0x47231d:c.instructions+=2;goto B47231d;
case 0x472321:c.instructions+=1;goto B472321;
case 0x472324:goto L472324;
case 0x472328:c.instructions+=2;goto B472328;
case 0x47232a:c.instructions+=1;goto B47232a;
case 0x47232f:goto L47232f;
case 0x472331:c.instructions+=7;goto B472331;
case 0x472334:c.instructions+=6;goto B472334;
case 0x472337:c.instructions+=5;goto B472337;
case 0x47233a:c.instructions+=4;goto B47233a;
case 0x47233c:c.instructions+=3;goto B47233c;
case 0x47233f:c.instructions+=2;goto B47233f;
case 0x472349:c.instructions+=1;goto B472349;
case 0x47234e:goto L47234e;
case 0x472350:c.instructions+=5;goto B472350;
case 0x472353:c.instructions+=4;goto B472353;
case 0x472357:c.instructions+=3;goto B472357;
case 0x472359:c.instructions+=2;goto B472359;
case 0x472361:c.instructions+=1;goto B472361;
case 0x472367:goto L472367;
case 0x47236d:c.instructions+=7;goto B47236d;
case 0x472370:c.instructions+=6;goto B472370;
case 0x472372:c.instructions+=5;goto B472372;
case 0x472378:c.instructions+=4;goto B472378;
case 0x47237c:c.instructions+=3;goto B47237c;
case 0x47237e:c.instructions+=2;goto B47237e;
case 0x472380:c.instructions+=1;goto B472380;
case 0x472383:goto L472383;
case 0x472387:c.instructions+=5;goto B472387;
case 0x47238a:c.instructions+=4;goto B47238a;
case 0x47238c:c.instructions+=3;goto B47238c;
case 0x47238f:c.instructions+=2;goto B47238f;
case 0x472396:c.instructions+=1;goto B472396;
case 0x472398:goto L472398;
case 0x47239a:c.instructions+=1;goto B47239a;
case 0x47239c:goto L47239c;
case 0x47239f:c.instructions+=1;goto B47239f;
case 0x4723a1:goto L4723a1;
case 0x4723a6:goto L4723a6;
case 0x4723aa:c.instructions+=2;goto B4723aa;
case 0x4723ad:c.instructions+=1;goto B4723ad;
case 0x4723b2:goto L4723b2;
case 0x4723b4:c.instructions+=2;goto B4723b4;
case 0x4723b6:c.instructions+=1;goto B4723b6;
case 0x4723b8:goto L4723b8;
case 0x4723ba:c.instructions+=1;goto B4723ba;
case 0x4723bc:goto L4723bc;
case 0x4723c1:c.instructions+=1;goto B4723c1;
case 0x4723c3:goto L4723c3;
case 0x4723c8:goto L4723c8;
case 0x4723ca:c.instructions+=2;goto B4723ca;
case 0x4723cd:c.instructions+=1;goto B4723cd;
case 0x4723cf:goto L4723cf;
case 0x4723d1:c.instructions+=1;goto B4723d1;
case 0x4723d3:goto L4723d3;
case 0x4723d9:c.instructions+=1;goto B4723d9;
case 0x4723db:goto L4723db;
case 0x4723e0:goto L4723e0;
case 0x4723e4:c.instructions+=3;goto B4723e4;
case 0x4723e6:c.instructions+=2;goto B4723e6;
case 0x4723e9:c.instructions+=1;goto B4723e9;
case 0x4723eb:goto L4723eb;
case 0x4723ed:c.instructions+=1;goto B4723ed;
case 0x4723ef:goto L4723ef;
case 0x4723f4:c.instructions+=1;goto B4723f4;
case 0x4723f6:goto L4723f6;
case 0x4723fb:goto L4723fb;
case 0x4723fc:c.instructions+=6;goto B4723fc;
case 0x4723fd:c.instructions+=5;goto B4723fd;
case 0x472402:c.instructions+=4;goto B472402;
case 0x472405:c.instructions+=3;goto B472405;
case 0x472408:c.instructions+=2;goto B472408;
case 0x47240b:c.instructions+=1;goto B47240b;
case 0x472410:goto L472410;
case 0x472413:c.instructions+=2;goto B472413;
case 0x472415:c.instructions+=1;goto B472415;
case 0x472417:goto L472417;
case 0x47241c:c.instructions+=2;goto B47241c;
case 0x472421:c.instructions+=1;goto B472421;
case 0x472426:goto L472426;
case 0x472427:c.instructions+=3;goto B472427;
case 0x472428:c.instructions+=2;goto B472428;
case 0x47242d:c.instructions+=1;goto B47242d;
case 0x472432:goto L472432;
case 0x472435:c.instructions+=9;goto B472435;
case 0x472436:c.instructions+=8;goto B472436;
case 0x47243c:c.instructions+=7;goto B47243c;
case 0x47243d:c.instructions+=6;goto B47243d;
case 0x47243e:c.instructions+=5;goto B47243e;
case 0x47243f:c.instructions+=4;goto B47243f;
case 0x472443:c.instructions+=3;goto B472443;
case 0x47244a:c.instructions+=2;goto B47244a;
case 0x47244d:c.instructions+=1;goto B47244d;
case 0x47244e:goto L47244e;
case 0x472450:goto L472450;
case 0x472451:c.instructions+=8;goto B472451;
case 0x472457:c.instructions+=7;goto B472457;
case 0x472458:c.instructions+=6;goto B472458;
case 0x472459:c.instructions+=5;goto B472459;
case 0x47245a:c.instructions+=4;goto B47245a;
case 0x47245e:c.instructions+=3;goto B47245e;
case 0x472465:c.instructions+=2;goto B472465;
case 0x472468:c.instructions+=1;goto B472468;
case 0x472469:goto L472469;
case 0x47246b:goto L47246b;
case 0x47246f:c.instructions+=4;goto B47246f;
case 0x472470:c.instructions+=3;goto B472470;
case 0x472477:c.instructions+=2;goto B472477;
case 0x47247a:c.instructions+=1;goto B47247a;
case 0x472480:goto L472480;
case 0x472482:c.instructions+=10;goto B472482;
case 0x472487:c.instructions+=9;goto B472487;
case 0x47248d:c.instructions+=8;goto B47248d;
case 0x47248e:c.instructions+=7;goto B47248e;
case 0x472495:c.instructions+=6;goto B472495;
case 0x472496:c.instructions+=5;goto B472496;
case 0x472497:c.instructions+=4;goto B472497;
case 0x472498:c.instructions+=3;goto B472498;
case 0x47249a:c.instructions+=2;goto B47249a;
case 0x47249e:c.instructions+=1;goto B47249e;
case 0x4724a3:goto L4724a3;
case 0x4724a5:c.instructions+=21;goto B4724a5;
case 0x4724a7:c.instructions+=20;goto B4724a7;
case 0x4724ad:c.instructions+=19;goto B4724ad;
case 0x4724b3:c.instructions+=18;goto B4724b3;
case 0x4724b9:c.instructions+=17;goto B4724b9;
case 0x4724bf:c.instructions+=16;goto B4724bf;
case 0x4724c2:c.instructions+=15;goto B4724c2;
case 0x4724c8:c.instructions+=14;goto B4724c8;
case 0x4724ce:c.instructions+=13;goto B4724ce;
case 0x4724d4:c.instructions+=12;goto B4724d4;
case 0x4724da:c.instructions+=11;goto B4724da;
case 0x4724e0:c.instructions+=10;goto B4724e0;
case 0x4724e6:c.instructions+=9;goto B4724e6;
case 0x4724ec:c.instructions+=8;goto B4724ec;
case 0x4724f2:c.instructions+=7;goto B4724f2;
case 0x4724f6:c.instructions+=6;goto B4724f6;
case 0x4724fc:c.instructions+=5;goto B4724fc;
case 0x472502:c.instructions+=4;goto B472502;
case 0x472508:c.instructions+=3;goto B472508;
case 0x47250e:c.instructions+=2;goto B47250e;
case 0x472510:c.instructions+=1;goto B472510;
case 0x472516:goto L472516;
case 0x472519:c.instructions+=8;goto B472519;
case 0x47251b:c.instructions+=7;goto B47251b;
case 0x47251e:c.instructions+=6;goto B47251e;
case 0x472525:c.instructions+=5;goto B472525;
case 0x472528:c.instructions+=4;goto B472528;
case 0x472529:c.instructions+=3;goto B472529;
case 0x47252c:c.instructions+=2;goto B47252c;
case 0x47252f:c.instructions+=1;goto B47252f;
case 0x472531:goto L472531;
case 0x472533:c.instructions+=3;goto B472533;
case 0x472539:c.instructions+=2;goto B472539;
case 0x47253f:c.instructions+=1;goto B47253f;
case 0x472544:goto L472544;
case 0x472548:c.instructions+=15;goto B472548;
case 0x47254e:c.instructions+=14;goto B47254e;
case 0x472554:c.instructions+=13;goto B472554;
case 0x47255a:c.instructions+=12;goto B47255a;
case 0x472560:c.instructions+=11;goto B472560;
case 0x472566:c.instructions+=10;goto B472566;
case 0x47256c:c.instructions+=9;goto B47256c;
case 0x472572:c.instructions+=8;goto B472572;
case 0x472578:c.instructions+=7;goto B472578;
case 0x47257e:c.instructions+=6;goto B47257e;
case 0x472580:c.instructions+=5;goto B472580;
case 0x472581:c.instructions+=4;goto B472581;
case 0x472582:c.instructions+=3;goto B472582;
case 0x472589:c.instructions+=2;goto B472589;
case 0x47258c:c.instructions+=1;goto B47258c;
case 0x472590:goto L472590;
case 0x472592:c.instructions+=14;goto B472592;
case 0x472597:c.instructions+=13;goto B472597;
case 0x47259d:c.instructions+=12;goto B47259d;
case 0x47259e:c.instructions+=11;goto B47259e;
case 0x4725a5:c.instructions+=10;goto B4725a5;
case 0x4725a8:c.instructions+=9;goto B4725a8;
case 0x4725a9:c.instructions+=8;goto B4725a9;
case 0x4725ab:c.instructions+=7;goto B4725ab;
case 0x4725ac:c.instructions+=6;goto B4725ac;
case 0x4725b0:c.instructions+=5;goto B4725b0;
case 0x4725b6:c.instructions+=4;goto B4725b6;
case 0x4725bc:c.instructions+=3;goto B4725bc;
case 0x4725be:c.instructions+=2;goto B4725be;
case 0x4725c6:c.instructions+=1;goto B4725c6;
case 0x4725c8:goto L4725c8;
case 0x4725ca:c.instructions+=2;goto B4725ca;
case 0x4725cc:c.instructions+=1;goto B4725cc;
case 0x4725ce:goto L4725ce;
case 0x4725d3:goto L4725d3;
case 0x4725d7:c.instructions+=2;goto B4725d7;
case 0x4725d8:c.instructions+=1;goto B4725d8;
case 0x4725dd:goto L4725dd;
case 0x4725e0:c.instructions+=1;goto B4725e0;
case 0x4725e5:goto L4725e5;
case 0x4725e9:c.instructions+=4;goto B4725e9;
case 0x4725eb:c.instructions+=3;goto B4725eb;
case 0x4725ed:c.instructions+=2;goto B4725ed;
case 0x4725ee:c.instructions+=1;goto B4725ee;
case 0x4725f1:goto L4725f1;
case 0x4725f6:goto L4725f6;
case 0x472600:c.instructions+=1;goto B472600;
case 0x472606:goto L472606;
case 0x47260c:c.instructions+=2;goto B47260c;
case 0x47260e:c.instructions+=1;goto B47260e;
case 0x472610:goto L472610;
case 0x472612:c.instructions+=2;goto B472612;
case 0x472614:c.instructions+=1;goto B472614;
case 0x472616:goto L472616;
case 0x47261b:goto L47261b;
case 0x47261f:c.instructions+=2;goto B47261f;
case 0x472620:c.instructions+=1;goto B472620;
case 0x472625:goto L472625;
case 0x472628:c.instructions+=1;goto B472628;
case 0x47262d:goto L47262d;
case 0x472631:c.instructions+=4;goto B472631;
case 0x472633:c.instructions+=3;goto B472633;
case 0x472635:c.instructions+=2;goto B472635;
case 0x472636:c.instructions+=1;goto B472636;
case 0x472639:goto L472639;
case 0x47263e:goto L47263e;
case 0x472648:c.instructions+=1;goto B472648;
case 0x47264e:goto L47264e;
case 0x472654:c.instructions+=2;goto B472654;
case 0x472659:c.instructions+=1;goto B472659;
case 0x47265e:goto L47265e;
case 0x472662:c.instructions+=6;goto B472662;
case 0x472668:c.instructions+=5;goto B472668;
case 0x472669:c.instructions+=4;goto B472669;
case 0x47266a:c.instructions+=3;goto B47266a;
case 0x472671:c.instructions+=2;goto B472671;
case 0x472674:c.instructions+=1;goto B472674;
case 0x472680:goto L472680;
case 0x472681:c.instructions+=6;goto B472681;
case 0x472685:c.instructions+=5;goto B472685;
case 0x472687:c.instructions+=4;goto B472687;
case 0x472688:c.instructions+=3;goto B472688;
case 0x47268a:c.instructions+=2;goto B47268a;
case 0x47268c:c.instructions+=1;goto B47268c;
case 0x47268f:goto L47268f;
case 0x472691:c.instructions+=4;goto B472691;
case 0x472694:c.instructions+=3;goto B472694;
case 0x472699:c.instructions+=2;goto B472699;
case 0x47269c:c.instructions+=1;goto B47269c;
case 0x47269e:goto L47269e;
case 0x4726a1:c.instructions+=1;goto B4726a1;
case 0x4726a3:goto L4726a3;
case 0x4726a6:c.instructions+=1;goto B4726a6;
case 0x4726a8:goto L4726a8;
case 0x4726ad:c.instructions+=2;goto B4726ad;
case 0x4726af:c.instructions+=1;goto B4726af;
case 0x4726b4:goto L4726b4;
case 0x4726b7:c.instructions+=3;goto B4726b7;
case 0x4726b8:c.instructions+=2;goto B4726b8;
case 0x4726b9:c.instructions+=1;goto B4726b9;
case 0x4726bc:goto L4726bc;
case 0x4726c2:c.instructions+=3;goto B4726c2;
case 0x4726c3:c.instructions+=2;goto B4726c3;
case 0x4726c4:c.instructions+=1;goto B4726c4;
case 0x4726c7:goto L4726c7;
case 0x4726cd:c.instructions+=3;goto B4726cd;
case 0x4726ce:c.instructions+=2;goto B4726ce;
case 0x4726cf:c.instructions+=1;goto B4726cf;
case 0x4726d2:goto L4726d2;
case 0x4726d8:c.instructions+=3;goto B4726d8;
case 0x4726d9:c.instructions+=2;goto B4726d9;
case 0x4726da:c.instructions+=1;goto B4726da;
case 0x4726e0:goto L4726e0;
case 0x4726e1:c.instructions+=4;goto B4726e1;
case 0x4726e3:c.instructions+=3;goto B4726e3;
case 0x4726e9:c.instructions+=2;goto B4726e9;
case 0x4726eb:c.instructions+=1;goto B4726eb;
case 0x4726ed:goto L4726ed;
case 0x4726f1:c.instructions+=5;goto B4726f1;
case 0x4726f2:c.instructions+=4;goto B4726f2;
case 0x4726f8:c.instructions+=3;goto B4726f8;
case 0x4726f9:c.instructions+=2;goto B4726f9;
case 0x4726fb:c.instructions+=1;goto B4726fb;
case 0x472700:goto L472700;
case 0x472706:c.instructions+=5;goto B472706;
case 0x472709:c.instructions+=4;goto B472709;
case 0x47270f:c.instructions+=3;goto B47270f;
case 0x472711:c.instructions+=2;goto B472711;
case 0x472714:c.instructions+=1;goto B472714;
case 0x472716:goto L472716;
case 0x47271c:c.instructions+=4;goto B47271c;
case 0x472722:c.instructions+=3;goto B472722;
case 0x472724:c.instructions+=2;goto B472724;
case 0x472727:c.instructions+=1;goto B472727;
case 0x472729:goto L472729;
case 0x47272f:c.instructions+=3;goto B47272f;
case 0x472732:c.instructions+=2;goto B472732;
case 0x472735:c.instructions+=1;goto B472735;
case 0x472737:goto L472737;
case 0x472739:c.instructions+=1;goto B472739;
case 0x47273b:goto L47273b;
case 0x47273c:c.instructions+=5;goto B47273c;
case 0x472741:c.instructions+=4;goto B472741;
case 0x472742:c.instructions+=3;goto B472742;
case 0x472747:c.instructions+=2;goto B472747;
case 0x472749:c.instructions+=1;goto B472749;
case 0x47274e:goto L47274e;
case 0x472750:c.instructions+=1;goto B472750;
case 0x472755:goto L472755;
case 0x472757:c.instructions+=2;goto B472757;
case 0x472758:c.instructions+=1;goto B472758;
case 0x47275a:goto L47275a;
case 0x47275c:c.instructions+=1;goto B47275c;
case 0x472761:goto L472761;
case 0x472762:c.instructions+=1;goto B472762;
case 0x472770:goto L472770;
case 0x472773:c.instructions+=5;goto B472773;
case 0x472774:c.instructions+=4;goto B472774;
case 0x472776:c.instructions+=3;goto B472776;
case 0x47277c:c.instructions+=2;goto B47277c;
case 0x47277e:c.instructions+=1;goto B47277e;
case 0x472780:goto L472780;
case 0x472782:c.instructions+=5;goto B472782;
case 0x472784:c.instructions+=4;goto B472784;
case 0x472786:c.instructions+=3;goto B472786;
case 0x472788:c.instructions+=2;goto B472788;
case 0x47278a:c.instructions+=1;goto B47278a;
case 0x47278f:goto L47278f;
case 0x472791:c.instructions+=3;goto B472791;
case 0x472792:c.instructions+=2;goto B472792;
case 0x472795:c.instructions+=1;goto B472795;
case 0x472798:goto L472798;
case 0x47279d:c.instructions+=3;goto B47279d;
case 0x4727a0:c.instructions+=2;goto B4727a0;
case 0x4727a2:c.instructions+=1;goto B4727a2;
case 0x4727a4:goto L4727a4;
case 0x4727aa:c.instructions+=4;goto B4727aa;
case 0x4727b0:c.instructions+=3;goto B4727b0;
case 0x4727b2:c.instructions+=2;goto B4727b2;
case 0x4727b5:c.instructions+=1;goto B4727b5;
case 0x4727b7:goto L4727b7;
case 0x4727bd:c.instructions+=2;goto B4727bd;
case 0x4727c3:c.instructions+=1;goto B4727c3;
case 0x4727c5:goto L4727c5;
case 0x4727cb:c.instructions+=2;goto B4727cb;
case 0x4727d1:c.instructions+=1;goto B4727d1;
case 0x4727d4:goto L4727d4;
case 0x4727da:goto L4727da;
case 0x4727e0:c.instructions+=8;goto B4727e0;
case 0x4727e1:c.instructions+=7;goto B4727e1;
case 0x4727e7:c.instructions+=6;goto B4727e7;
case 0x4727ed:c.instructions+=5;goto B4727ed;
case 0x4727f0:c.instructions+=4;goto B4727f0;
case 0x4727f4:c.instructions+=3;goto B4727f4;
case 0x4727f6:c.instructions+=2;goto B4727f6;
case 0x4727f9:c.instructions+=1;goto B4727f9;
case 0x4727fb:goto L4727fb;
case 0x4727fd:c.instructions+=1;goto B4727fd;
case 0x472803:goto L472803;
case 0x472807:c.instructions+=4;goto B472807;
case 0x472809:c.instructions+=3;goto B472809;
case 0x47280b:c.instructions+=2;goto B47280b;
case 0x47280e:c.instructions+=1;goto B47280e;
case 0x472810:goto L472810;
case 0x472812:c.instructions+=1;goto B472812;
case 0x472816:goto L472816;
case 0x47281c:c.instructions+=3;goto B47281c;
case 0x472822:c.instructions+=2;goto B472822;
case 0x472825:c.instructions+=1;goto B472825;
case 0x47282a:goto L47282a;
case 0x47282f:c.instructions+=8;goto B47282f;
case 0x472833:c.instructions+=7;goto B472833;
case 0x472837:c.instructions+=6;goto B472837;
case 0x47283d:c.instructions+=5;goto B47283d;
case 0x472841:c.instructions+=4;goto B472841;
case 0x472847:c.instructions+=3;goto B472847;
case 0x472849:c.instructions+=2;goto B472849;
case 0x47284c:c.instructions+=1;goto B47284c;
case 0x472852:goto L472852;
case 0x472856:c.instructions+=5;goto B472856;
case 0x47285c:c.instructions+=4;goto B47285c;
case 0x472860:c.instructions+=3;goto B472860;
case 0x472862:c.instructions+=2;goto B472862;
case 0x472865:c.instructions+=1;goto B472865;
case 0x472867:goto L472867;
case 0x472869:c.instructions+=1;goto B472869;
case 0x47286f:goto L47286f;
case 0x472875:c.instructions+=12;goto B472875;
case 0x47287b:c.instructions+=11;goto B47287b;
case 0x47287d:c.instructions+=10;goto B47287d;
case 0x472883:c.instructions+=9;goto B472883;
case 0x472887:c.instructions+=8;goto B472887;
case 0x472889:c.instructions+=7;goto B472889;
case 0x47288d:c.instructions+=6;goto B47288d;
case 0x472890:c.instructions+=5;goto B472890;
case 0x472894:c.instructions+=4;goto B472894;
case 0x47289a:c.instructions+=3;goto B47289a;
case 0x47289c:c.instructions+=2;goto B47289c;
case 0x47289f:c.instructions+=1;goto B47289f;
case 0x4728a1:goto L4728a1;
case 0x4728a3:c.instructions+=1;goto B4728a3;
case 0x4728a9:goto L4728a9;
case 0x4728ad:c.instructions+=4;goto B4728ad;
case 0x4728af:c.instructions+=3;goto B4728af;
case 0x4728b1:c.instructions+=2;goto B4728b1;
case 0x4728b4:c.instructions+=1;goto B4728b4;
case 0x4728b6:goto L4728b6;
case 0x4728b8:c.instructions+=1;goto B4728b8;
case 0x4728bc:goto L4728bc;
case 0x4728c2:c.instructions+=7;goto B4728c2;
case 0x4728c6:c.instructions+=6;goto B4728c6;
case 0x4728c9:c.instructions+=5;goto B4728c9;
case 0x4728cb:c.instructions+=4;goto B4728cb;
case 0x4728cd:c.instructions+=3;goto B4728cd;
case 0x4728cf:c.instructions+=2;goto B4728cf;
case 0x4728d2:c.instructions+=1;goto B4728d2;
case 0x4728d4:goto L4728d4;
case 0x4728da:c.instructions+=2;goto B4728da;
case 0x4728dc:c.instructions+=1;goto B4728dc;
case 0x4728de:goto L4728de;
case 0x4728e4:c.instructions+=3;goto B4728e4;
case 0x4728e6:c.instructions+=2;goto B4728e6;
case 0x4728ed:c.instructions+=1;goto B4728ed;
case 0x4728f2:goto L4728f2;
case 0x4728f4:c.instructions+=4;goto B4728f4;
case 0x4728f9:c.instructions+=3;goto B4728f9;
case 0x4728fb:c.instructions+=2;goto B4728fb;
case 0x4728fd:c.instructions+=1;goto B4728fd;
case 0x472902:goto L472902;
case 0x472908:c.instructions+=7;goto B472908;
case 0x47290e:c.instructions+=6;goto B47290e;
case 0x472910:c.instructions+=5;goto B472910;
case 0x472915:c.instructions+=4;goto B472915;
case 0x472916:c.instructions+=3;goto B472916;
case 0x472919:c.instructions+=2;goto B472919;
case 0x47291b:c.instructions+=1;goto B47291b;
case 0x472920:goto L472920;
case 0x472922:goto L472922;
case 0x472928:c.instructions+=1;goto B472928;
case 0x47292d:goto L47292d;
case 0x472930:c.instructions+=3;goto B472930;
case 0x472932:c.instructions+=2;goto B472932;
case 0x472935:c.instructions+=1;goto B472935;
case 0x472937:goto L472937;
case 0x47293d:c.instructions+=2;goto B47293d;
case 0x47293f:c.instructions+=1;goto B47293f;
case 0x472941:goto L472941;
case 0x472948:goto L472948;
case 0x47294e:c.instructions+=5;goto B47294e;
case 0x472954:c.instructions+=4;goto B472954;
case 0x472957:c.instructions+=3;goto B472957;
case 0x47295d:c.instructions+=2;goto B47295d;
case 0x472963:c.instructions+=1;goto B472963;
case 0x472968:goto L472968;
case 0x47296e:c.instructions+=8;goto B47296e;
case 0x472971:c.instructions+=7;goto B472971;
case 0x472974:c.instructions+=6;goto B472974;
case 0x47297a:c.instructions+=5;goto B47297a;
case 0x47297d:c.instructions+=4;goto B47297d;
case 0x47297f:c.instructions+=3;goto B47297f;
case 0x472985:c.instructions+=2;goto B472985;
case 0x472986:c.instructions+=1;goto B472986;
case 0x472988:goto L472988;
case 0x47298c:c.instructions+=3;goto B47298c;
case 0x47298d:c.instructions+=2;goto B47298d;
case 0x472993:c.instructions+=1;goto B472993;
case 0x472998:goto L472998;
case 0x47299e:c.instructions+=1;goto B47299e;
case 0x4729a3:goto L4729a3;
case 0x4729aa:c.instructions+=3;goto B4729aa;
case 0x4729b1:c.instructions+=2;goto B4729b1;
case 0x4729b4:c.instructions+=1;goto B4729b4;
case 0x4729ba:goto L4729ba;
case 0x4729bc:c.instructions+=3;goto B4729bc;
case 0x4729bd:c.instructions+=2;goto B4729bd;
case 0x4729c0:c.instructions+=1;goto B4729c0;
case 0x4729d0:goto L4729d0;
case 0x4729d1:c.instructions+=2;goto B4729d1;
case 0x4729d3:c.instructions+=1;goto B4729d3;
case 0x4729d8:goto L4729d8;
case 0x4729da:c.instructions+=21;goto B4729da;
case 0x4729e0:c.instructions+=20;goto B4729e0;
case 0x4729e6:c.instructions+=19;goto B4729e6;
case 0x4729ec:c.instructions+=18;goto B4729ec;
case 0x4729f2:c.instructions+=17;goto B4729f2;
case 0x4729f8:c.instructions+=16;goto B4729f8;
case 0x4729fa:c.instructions+=15;goto B4729fa;
case 0x4729fd:c.instructions+=14;goto B4729fd;
case 0x472a03:c.instructions+=13;goto B472a03;
case 0x472a09:c.instructions+=12;goto B472a09;
case 0x472a0f:c.instructions+=11;goto B472a0f;
case 0x472a15:c.instructions+=10;goto B472a15;
case 0x472a1b:c.instructions+=9;goto B472a1b;
case 0x472a21:c.instructions+=8;goto B472a21;
case 0x472a27:c.instructions+=7;goto B472a27;
case 0x472a2d:c.instructions+=6;goto B472a2d;
case 0x472a33:c.instructions+=5;goto B472a33;
case 0x472a39:c.instructions+=4;goto B472a39;
case 0x472a3f:c.instructions+=3;goto B472a3f;
case 0x472a41:c.instructions+=2;goto B472a41;
case 0x472a42:c.instructions+=1;goto B472a42;
case 0x472a50:goto L472a50;
case 0x472a52:c.instructions+=11;goto B472a52;
case 0x472a57:c.instructions+=10;goto B472a57;
case 0x472a5d:c.instructions+=9;goto B472a5d;
case 0x472a5e:c.instructions+=8;goto B472a5e;
case 0x472a65:c.instructions+=7;goto B472a65;
case 0x472a66:c.instructions+=6;goto B472a66;
case 0x472a67:c.instructions+=5;goto B472a67;
case 0x472a69:c.instructions+=4;goto B472a69;
case 0x472a6d:c.instructions+=3;goto B472a6d;
case 0x472a73:c.instructions+=2;goto B472a73;
case 0x472a7b:c.instructions+=1;goto B472a7b;
case 0x472a80:goto L472a80;
case 0x472a84:c.instructions+=5;goto B472a84;
case 0x472a8a:c.instructions+=4;goto B472a8a;
case 0x472a8b:c.instructions+=3;goto B472a8b;
case 0x472a92:c.instructions+=2;goto B472a92;
case 0x472a95:c.instructions+=1;goto B472a95;
case 0x472aa0:goto L472aa0;
case 0x472aa1:c.instructions+=6;goto B472aa1;
case 0x472aa5:c.instructions+=5;goto B472aa5;
case 0x472aa7:c.instructions+=4;goto B472aa7;
case 0x472aa8:c.instructions+=3;goto B472aa8;
case 0x472aaa:c.instructions+=2;goto B472aaa;
case 0x472aac:c.instructions+=1;goto B472aac;
case 0x472aaf:goto L472aaf;
case 0x472ab1:c.instructions+=4;goto B472ab1;
case 0x472ab4:c.instructions+=3;goto B472ab4;
case 0x472ab9:c.instructions+=2;goto B472ab9;
case 0x472abc:c.instructions+=1;goto B472abc;
case 0x472abe:goto L472abe;
case 0x472ac1:c.instructions+=1;goto B472ac1;
case 0x472ac3:goto L472ac3;
case 0x472ac8:c.instructions+=2;goto B472ac8;
case 0x472aca:c.instructions+=1;goto B472aca;
case 0x472acf:goto L472acf;
case 0x472ad2:c.instructions+=3;goto B472ad2;
case 0x472ad3:c.instructions+=2;goto B472ad3;
case 0x472ad4:c.instructions+=1;goto B472ad4;
case 0x472ad7:goto L472ad7;
case 0x472add:c.instructions+=3;goto B472add;
case 0x472ade:c.instructions+=2;goto B472ade;
case 0x472adf:c.instructions+=1;goto B472adf;
case 0x472ae2:goto L472ae2;
case 0x472ae8:c.instructions+=3;goto B472ae8;
case 0x472ae9:c.instructions+=2;goto B472ae9;
case 0x472aea:c.instructions+=1;goto B472aea;
case 0x472af0:goto L472af0;
case 0x472af2:c.instructions+=10;goto B472af2;
case 0x472af7:c.instructions+=9;goto B472af7;
case 0x472afd:c.instructions+=8;goto B472afd;
case 0x472afe:c.instructions+=7;goto B472afe;
case 0x472b05:c.instructions+=6;goto B472b05;
case 0x472b06:c.instructions+=5;goto B472b06;
case 0x472b07:c.instructions+=4;goto B472b07;
case 0x472b09:c.instructions+=3;goto B472b09;
case 0x472b0f:c.instructions+=2;goto B472b0f;
case 0x472b11:c.instructions+=1;goto B472b11;
case 0x472b17:goto L472b17;
case 0x472b1e:c.instructions+=1;goto B472b1e;
case 0x472b24:goto L472b24;
case 0x472b26:c.instructions+=4;goto B472b26;
case 0x472b27:c.instructions+=3;goto B472b27;
case 0x472b28:c.instructions+=2;goto B472b28;
case 0x472b2a:c.instructions+=1;goto B472b2a;
case 0x472b2d:goto L472b2d;
case 0x472b33:c.instructions+=3;goto B472b33;
case 0x472b35:c.instructions+=2;goto B472b35;
case 0x472b37:c.instructions+=1;goto B472b37;
case 0x472b39:goto L472b39;
case 0x472b3b:c.instructions+=2;goto B472b3b;
case 0x472b3d:c.instructions+=1;goto B472b3d;
case 0x472b3f:goto L472b3f;
case 0x472b44:goto L472b44;
case 0x472b48:c.instructions+=2;goto B472b48;
case 0x472b49:c.instructions+=1;goto B472b49;
case 0x472b4e:goto L472b4e;
case 0x472b51:c.instructions+=1;goto B472b51;
case 0x472b56:goto L472b56;
case 0x472b5a:c.instructions+=4;goto B472b5a;
case 0x472b5c:c.instructions+=3;goto B472b5c;
case 0x472b5e:c.instructions+=2;goto B472b5e;
case 0x472b5f:c.instructions+=1;goto B472b5f;
case 0x472b62:goto L472b62;
case 0x472b67:goto L472b67;
case 0x472b71:goto L472b71;
case 0x472b73:c.instructions+=2;goto B472b73;
case 0x472b7d:c.instructions+=1;goto B472b7d;
case 0x472b82:goto L472b82;
case 0x472b84:c.instructions+=5;goto B472b84;
case 0x472b87:c.instructions+=4;goto B472b87;
case 0x472b8b:c.instructions+=3;goto B472b8b;
case 0x472b8d:c.instructions+=2;goto B472b8d;
case 0x472b95:c.instructions+=1;goto B472b95;
case 0x472b97:goto L472b97;
case 0x472b99:c.instructions+=4;goto B472b99;
case 0x472b9b:c.instructions+=3;goto B472b9b;
case 0x472b9d:c.instructions+=2;goto B472b9d;
case 0x472b9f:c.instructions+=1;goto B472b9f;
case 0x472ba2:goto L472ba2;
case 0x472ba6:c.instructions+=5;goto B472ba6;
case 0x472ba7:c.instructions+=4;goto B472ba7;
case 0x472ba8:c.instructions+=3;goto B472ba8;
case 0x472ba9:c.instructions+=2;goto B472ba9;
case 0x472bab:c.instructions+=1;goto B472bab;
case 0x472bb0:goto L472bb0;
case 0x472bb2:goto L472bb2;
case 0x472bb4:goto L472bb4;
case 0x472bba:c.instructions+=6;goto B472bba;
case 0x472bc0:c.instructions+=5;goto B472bc0;
case 0x472bc2:c.instructions+=4;goto B472bc2;
case 0x472bc5:c.instructions+=3;goto B472bc5;
case 0x472bc6:c.instructions+=2;goto B472bc6;
case 0x472bc7:c.instructions+=1;goto B472bc7;
case 0x472bc9:goto L472bc9;
case 0x472bcc:c.instructions+=1;goto B472bcc;
case 0x472bce:goto L472bce;
case 0x472bd1:c.instructions+=1;goto B472bd1;
case 0x472bd3:goto L472bd3;
case 0x472bda:c.instructions+=6;goto B472bda;
case 0x472bdc:c.instructions+=5;goto B472bdc;
case 0x472bdd:c.instructions+=4;goto B472bdd;
case 0x472be1:c.instructions+=3;goto B472be1;
case 0x472be8:c.instructions+=2;goto B472be8;
case 0x472beb:c.instructions+=1;goto B472beb;
case 0x472bee:goto L472bee;
case 0x472bf5:goto L472bf5;
case 0x472bf9:c.instructions+=5;goto B472bf9;
case 0x472bfb:c.instructions+=4;goto B472bfb;
case 0x472bfc:c.instructions+=3;goto B472bfc;
case 0x472c03:c.instructions+=2;goto B472c03;
case 0x472c06:c.instructions+=1;goto B472c06;
case 0x472c10:goto L472c10;
case 0x472c11:c.instructions+=2;goto B472c11;
case 0x472c13:c.instructions+=1;goto B472c13;
case 0x472c18:goto L472c18;
case 0x472c1a:c.instructions+=20;goto B472c1a;
case 0x472c20:c.instructions+=19;goto B472c20;
case 0x472c26:c.instructions+=18;goto B472c26;
case 0x472c2c:c.instructions+=17;goto B472c2c;
case 0x472c32:c.instructions+=16;goto B472c32;
case 0x472c38:c.instructions+=15;goto B472c38;
case 0x472c3c:c.instructions+=14;goto B472c3c;
case 0x472c42:c.instructions+=13;goto B472c42;
case 0x472c44:c.instructions+=12;goto B472c44;
case 0x472c46:c.instructions+=11;goto B472c46;
case 0x472c4c:c.instructions+=10;goto B472c4c;
case 0x472c52:c.instructions+=9;goto B472c52;
case 0x472c58:c.instructions+=8;goto B472c58;
case 0x472c5e:c.instructions+=7;goto B472c5e;
case 0x472c64:c.instructions+=6;goto B472c64;
case 0x472c6a:c.instructions+=5;goto B472c6a;
case 0x472c70:c.instructions+=4;goto B472c70;
case 0x472c76:c.instructions+=3;goto B472c76;
case 0x472c78:c.instructions+=2;goto B472c78;
case 0x472c79:c.instructions+=1;goto B472c79;
case 0x472c80:goto L472c80;
case 0x472c81:c.instructions+=6;goto B472c81;
case 0x472c85:c.instructions+=5;goto B472c85;
case 0x472c87:c.instructions+=4;goto B472c87;
case 0x472c88:c.instructions+=3;goto B472c88;
case 0x472c8a:c.instructions+=2;goto B472c8a;
case 0x472c8c:c.instructions+=1;goto B472c8c;
case 0x472c8f:goto L472c8f;
case 0x472c91:c.instructions+=4;goto B472c91;
case 0x472c94:c.instructions+=3;goto B472c94;
case 0x472c99:c.instructions+=2;goto B472c99;
case 0x472c9c:c.instructions+=1;goto B472c9c;
case 0x472c9e:goto L472c9e;
case 0x472ca1:c.instructions+=1;goto B472ca1;
case 0x472ca3:goto L472ca3;
case 0x472ca8:c.instructions+=2;goto B472ca8;
case 0x472caa:c.instructions+=1;goto B472caa;
case 0x472caf:goto L472caf;
case 0x472cb2:c.instructions+=3;goto B472cb2;
case 0x472cb3:c.instructions+=2;goto B472cb3;
case 0x472cb4:c.instructions+=1;goto B472cb4;
case 0x472cb7:goto L472cb7;
case 0x472cbd:c.instructions+=3;goto B472cbd;
case 0x472cbe:c.instructions+=2;goto B472cbe;
case 0x472cbf:c.instructions+=1;goto B472cbf;
case 0x472cc2:goto L472cc2;
case 0x472cc8:c.instructions+=3;goto B472cc8;
case 0x472cc9:c.instructions+=2;goto B472cc9;
case 0x472cca:c.instructions+=1;goto B472cca;
case 0x472cd0:goto L472cd0;
case 0x472cd4:c.instructions+=5;goto B472cd4;
case 0x472cd6:c.instructions+=4;goto B472cd6;
case 0x472cda:c.instructions+=3;goto B472cda;
case 0x472cdc:c.instructions+=2;goto B472cdc;
case 0x472ce2:c.instructions+=1;goto B472ce2;
case 0x472cf0:goto L472cf0;
case 0x472cf1:c.instructions+=8;goto B472cf1;
case 0x472cf2:c.instructions+=7;goto B472cf2;
case 0x472cf3:c.instructions+=6;goto B472cf3;
case 0x472cf5:c.instructions+=5;goto B472cf5;
case 0x472cf6:c.instructions+=4;goto B472cf6;
case 0x472cfc:c.instructions+=3;goto B472cfc;
case 0x472cfe:c.instructions+=2;goto B472cfe;
case 0x472d00:c.instructions+=1;goto B472d00;
case 0x472d02:goto L472d02;
case 0x472d04:c.instructions+=2;goto B472d04;
case 0x472d06:c.instructions+=1;goto B472d06;
case 0x472d08:goto L472d08;
case 0x472d0d:goto L472d0d;
case 0x472d11:c.instructions+=2;goto B472d11;
case 0x472d12:c.instructions+=1;goto B472d12;
case 0x472d17:goto L472d17;
case 0x472d1a:c.instructions+=1;goto B472d1a;
case 0x472d1f:goto L472d1f;
case 0x472d23:c.instructions+=4;goto B472d23;
case 0x472d25:c.instructions+=3;goto B472d25;
case 0x472d26:c.instructions+=2;goto B472d26;
case 0x472d27:c.instructions+=1;goto B472d27;
case 0x472d2a:goto L472d2a;
case 0x472d2f:goto L472d2f;
case 0x472d35:goto L472d35;
case 0x472d3b:c.instructions+=3;goto B472d3b;
case 0x472d41:c.instructions+=2;goto B472d41;
case 0x472d47:c.instructions+=1;goto B472d47;
case 0x472d49:goto L472d49;
case 0x472d4f:c.instructions+=4;goto B472d4f;
case 0x472d55:c.instructions+=3;goto B472d55;
case 0x472d56:c.instructions+=2;goto B472d56;
case 0x472d5b:c.instructions+=1;goto B472d5b;
case 0x472d60:goto L472d60;
case 0x472d63:goto L472d63;
case 0x472d64:c.instructions+=4;goto B472d64;
case 0x472d65:c.instructions+=3;goto B472d65;
case 0x472d66:c.instructions+=2;goto B472d66;
case 0x472d67:c.instructions+=1;goto B472d67;
case 0x472d70:goto L472d70;
case 0x472d71:c.instructions+=2;goto B472d71;
case 0x472d73:c.instructions+=1;goto B472d73;
case 0x472d78:goto L472d78;
case 0x472d7a:c.instructions+=27;goto B472d7a;
case 0x472d7d:c.instructions+=26;goto B472d7d;
case 0x472d83:c.instructions+=25;goto B472d83;
case 0x472d89:c.instructions+=24;goto B472d89;
case 0x472d8f:c.instructions+=23;goto B472d8f;
case 0x472d95:c.instructions+=22;goto B472d95;
case 0x472d9b:c.instructions+=21;goto B472d9b;
case 0x472da1:c.instructions+=20;goto B472da1;
case 0x472da7:c.instructions+=19;goto B472da7;
case 0x472dad:c.instructions+=18;goto B472dad;
case 0x472db3:c.instructions+=17;goto B472db3;
case 0x472db9:c.instructions+=16;goto B472db9;
case 0x472dbf:c.instructions+=15;goto B472dbf;
case 0x472dc5:c.instructions+=14;goto B472dc5;
case 0x472dcb:c.instructions+=13;goto B472dcb;
case 0x472dd1:c.instructions+=12;goto B472dd1;
case 0x472dd7:c.instructions+=11;goto B472dd7;
case 0x472ddd:c.instructions+=10;goto B472ddd;
case 0x472de3:c.instructions+=9;goto B472de3;
case 0x472de9:c.instructions+=8;goto B472de9;
case 0x472def:c.instructions+=7;goto B472def;
case 0x472df3:c.instructions+=6;goto B472df3;
case 0x472df9:c.instructions+=5;goto B472df9;
case 0x472dff:c.instructions+=4;goto B472dff;
case 0x472e05:c.instructions+=3;goto B472e05;
case 0x472e07:c.instructions+=2;goto B472e07;
case 0x472e08:c.instructions+=1;goto B472e08;
case 0x472e10:goto L472e10;
case 0x472e11:c.instructions+=6;goto B472e11;
case 0x472e15:c.instructions+=5;goto B472e15;
case 0x472e17:c.instructions+=4;goto B472e17;
case 0x472e18:c.instructions+=3;goto B472e18;
case 0x472e1a:c.instructions+=2;goto B472e1a;
case 0x472e1c:c.instructions+=1;goto B472e1c;
case 0x472e1f:goto L472e1f;
case 0x472e21:c.instructions+=4;goto B472e21;
case 0x472e24:c.instructions+=3;goto B472e24;
case 0x472e29:c.instructions+=2;goto B472e29;
case 0x472e2a:c.instructions+=1;goto B472e2a;
case 0x472e2c:goto L472e2c;
case 0x472e31:c.instructions+=2;goto B472e31;
case 0x472e33:c.instructions+=1;goto B472e33;
case 0x472e38:goto L472e38;
case 0x472e3b:c.instructions+=3;goto B472e3b;
case 0x472e3c:c.instructions+=2;goto B472e3c;
case 0x472e3d:c.instructions+=1;goto B472e3d;
case 0x472e40:goto L472e40;
case 0x472e46:c.instructions+=3;goto B472e46;
case 0x472e47:c.instructions+=2;goto B472e47;
case 0x472e48:c.instructions+=1;goto B472e48;
case 0x472e50:goto L472e50;
case 0x472e56:c.instructions+=12;goto B472e56;
case 0x472e58:c.instructions+=11;goto B472e58;
case 0x472e5d:c.instructions+=10;goto B472e5d;
case 0x472e5e:c.instructions+=9;goto B472e5e;
case 0x472e65:c.instructions+=8;goto B472e65;
case 0x472e68:c.instructions+=7;goto B472e68;
case 0x472e69:c.instructions+=6;goto B472e69;
case 0x472e6a:c.instructions+=5;goto B472e6a;
case 0x472e6c:c.instructions+=4;goto B472e6c;
case 0x472e72:c.instructions+=3;goto B472e72;
case 0x472e74:c.instructions+=2;goto B472e74;
case 0x472e76:c.instructions+=1;goto B472e76;
case 0x472e78:goto L472e78;
case 0x472e7d:c.instructions+=2;goto B472e7d;
case 0x472e7f:c.instructions+=1;goto B472e7f;
case 0x472e84:goto L472e84;
case 0x472e87:c.instructions+=7;goto B472e87;
case 0x472e8d:c.instructions+=6;goto B472e8d;
case 0x472e8e:c.instructions+=5;goto B472e8e;
case 0x472e8f:c.instructions+=4;goto B472e8f;
case 0x472e93:c.instructions+=3;goto B472e93;
case 0x472e9a:c.instructions+=2;goto B472e9a;
case 0x472e9d:c.instructions+=1;goto B472e9d;
case 0x472e9e:goto L472e9e;
case 0x472e9f:c.instructions+=4;goto B472e9f;
case 0x472ea3:c.instructions+=3;goto B472ea3;
case 0x472ea4:c.instructions+=2;goto B472ea4;
case 0x472ea5:c.instructions+=1;goto B472ea5;
case 0x472eaa:goto L472eaa;
case 0x472ead:c.instructions+=1;goto B472ead;
case 0x472eb2:goto L472eb2;
case 0x472eb6:c.instructions+=8;goto B472eb6;
case 0x472eba:c.instructions+=7;goto B472eba;
case 0x472ebb:c.instructions+=6;goto B472ebb;
case 0x472ebf:c.instructions+=5;goto B472ebf;
case 0x472ec3:c.instructions+=4;goto B472ec3;
case 0x472ec7:c.instructions+=3;goto B472ec7;
case 0x472ec9:c.instructions+=2;goto B472ec9;
case 0x472ecb:c.instructions+=1;goto B472ecb;
case 0x472ecd:goto L472ecd;
case 0x472ecf:c.instructions+=1;goto B472ecf;
case 0x472ed4:goto L472ed4;
case 0x472ed8:c.instructions+=3;goto B472ed8;
case 0x472eda:c.instructions+=2;goto B472eda;
case 0x472ede:c.instructions+=1;goto B472ede;
case 0x472ee0:goto L472ee0;
case 0x472ee3:c.instructions+=11;goto B472ee3;
case 0x472ee4:c.instructions+=10;goto B472ee4;
case 0x472ee5:c.instructions+=9;goto B472ee5;
case 0x472eea:c.instructions+=8;goto B472eea;
case 0x472ef0:c.instructions+=7;goto B472ef0;
case 0x472ef3:c.instructions+=6;goto B472ef3;
case 0x472ef6:c.instructions+=5;goto B472ef6;
case 0x472ef9:c.instructions+=4;goto B472ef9;
case 0x472efc:c.instructions+=3;goto B472efc;
case 0x472eff:c.instructions+=2;goto B472eff;
case 0x472f02:c.instructions+=1;goto B472f02;
case 0x472f07:goto L472f07;
case 0x472f0a:c.instructions+=2;goto B472f0a;
case 0x472f0c:c.instructions+=1;goto B472f0c;
case 0x472f0e:goto L472f0e;
case 0x472f13:c.instructions+=2;goto B472f13;
case 0x472f18:c.instructions+=1;goto B472f18;
case 0x472f1d:goto L472f1d;
case 0x472f1e:c.instructions+=3;goto B472f1e;
case 0x472f1f:c.instructions+=2;goto B472f1f;
case 0x472f24:c.instructions+=1;goto B472f24;
case 0x472f29:goto L472f29;
case 0x472f2c:c.instructions+=1;goto B472f2c;
case 0x472f2e:goto L472f2e;
case 0x472f30:goto L472f30;
case 0x472f34:c.instructions+=4;goto B472f34;
case 0x472f35:c.instructions+=3;goto B472f35;
case 0x472f3d:c.instructions+=2;goto B472f3d;
case 0x472f43:c.instructions+=1;goto B472f43;
case 0x472f48:goto L472f48;
case 0x472f4b:c.instructions+=1;goto B472f4b;
case 0x472f50:goto L472f50;
case 0x472f54:c.instructions+=8;goto B472f54;
case 0x472f58:c.instructions+=7;goto B472f58;
case 0x472f59:c.instructions+=6;goto B472f59;
case 0x472f5d:c.instructions+=5;goto B472f5d;
case 0x472f61:c.instructions+=4;goto B472f61;
case 0x472f65:c.instructions+=3;goto B472f65;
case 0x472f67:c.instructions+=2;goto B472f67;
case 0x472f69:c.instructions+=1;goto B472f69;
case 0x472f6b:goto L472f6b;
case 0x472f6d:c.instructions+=1;goto B472f6d;
case 0x472f72:goto L472f72;
case 0x472f76:c.instructions+=3;goto B472f76;
case 0x472f78:c.instructions+=2;goto B472f78;
case 0x472f80:c.instructions+=1;goto B472f80;
case 0x472f82:goto L472f82;
case 0x472f85:c.instructions+=11;goto B472f85;
case 0x472f86:c.instructions+=10;goto B472f86;
case 0x472f87:c.instructions+=9;goto B472f87;
case 0x472f8c:c.instructions+=8;goto B472f8c;
case 0x472f92:c.instructions+=7;goto B472f92;
case 0x472f95:c.instructions+=6;goto B472f95;
case 0x472f98:c.instructions+=5;goto B472f98;
case 0x472f9b:c.instructions+=4;goto B472f9b;
case 0x472f9e:c.instructions+=3;goto B472f9e;
case 0x472fa1:c.instructions+=2;goto B472fa1;
case 0x472fa4:c.instructions+=1;goto B472fa4;
case 0x472fa9:goto L472fa9;
case 0x472fac:c.instructions+=2;goto B472fac;
case 0x472fae:c.instructions+=1;goto B472fae;
case 0x472fb0:goto L472fb0;
case 0x472fb5:c.instructions+=2;goto B472fb5;
case 0x472fba:c.instructions+=1;goto B472fba;
case 0x472fbf:goto L472fbf;
case 0x472fc0:c.instructions+=3;goto B472fc0;
case 0x472fc1:c.instructions+=2;goto B472fc1;
case 0x472fc6:c.instructions+=1;goto B472fc6;
case 0x472fcb:goto L472fcb;
case 0x472fce:c.instructions+=1;goto B472fce;
case 0x472fd0:goto L472fd0;
case 0x472fd2:goto L472fd2;
case 0x472fd8:c.instructions+=4;goto B472fd8;
case 0x472fde:c.instructions+=3;goto B472fde;
case 0x472fe0:c.instructions+=2;goto B472fe0;
case 0x472fe8:c.instructions+=1;goto B472fe8;
case 0x472feb:goto L472feb;
case 0x472fee:c.instructions+=7;goto B472fee;
case 0x472ff2:c.instructions+=6;goto B472ff2;
case 0x472ff3:c.instructions+=5;goto B472ff3;
case 0x472ff4:c.instructions+=4;goto B472ff4;
case 0x472ffa:c.instructions+=3;goto B472ffa;
case 0x472ffb:c.instructions+=2;goto B472ffb;
case 0x472ffc:c.instructions+=1;goto B472ffc;
default:missing_instruction(c.pc);}
B472004:L472004:{c.instructions+=3;NFSU2_TR(0x472004);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472008:{NFSU2_TR(0x472008);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472009:{NFSU2_TR(0x472009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47200eull));
TAIL_STATIC(0x734df0u,734);
}
B47200e:L47200e:{c.instructions+=2;NFSU2_TR(0x47200e);
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
B472011:{NFSU2_TR(0x472011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472016ull));
TAIL_STATIC(0x734e40u,734);
}
B472016:L472016:{c.instructions+=5;NFSU2_TR(0x472016);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47201a:{NFSU2_TR(0x47201a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47201c:{NFSU2_TR(0x47201c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47201d:{NFSU2_TR(0x47201d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47201e:{NFSU2_TR(0x47201e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472021ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472021:L472021:{c.instructions+=1;NFSU2_TR(0x472021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472026ull));
TAIL_STATIC(0x734e60u,734);
}
B472026:L472026:{c.instructions+=4;NFSU2_TR(0x472026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47202c:{NFSU2_TR(0x47202c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B472032:{NFSU2_TR(0x472032);
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
B472034:{NFSU2_TR(0x472034);
if(r1(R+518)){{goto L472069;}}
}
B472036:L472036:{c.instructions+=3;NFSU2_TR(0x472036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B472038:{NFSU2_TR(0x472038);
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
B47203a:{NFSU2_TR(0x47203a);
if(r1(R+518)){{goto L472041;}}
}
B47203c:L47203c:{c.instructions+=1;NFSU2_TR(0x47203c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472041ull));
TAIL_STATIC(0x735550u,735);
}
B472041:L472041:{c.instructions+=3;NFSU2_TR(0x472041);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472045:{NFSU2_TR(0x472045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472046:{NFSU2_TR(0x472046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47204bull));
TAIL_STATIC(0x734df0u,734);
}
B47204b:L47204b:{c.instructions+=2;NFSU2_TR(0x47204b);
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
B47204e:{NFSU2_TR(0x47204e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472053ull));
TAIL_STATIC(0x734e40u,734);
}
B472053:L472053:{c.instructions+=5;NFSU2_TR(0x472053);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472057:{NFSU2_TR(0x472057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472059:{NFSU2_TR(0x472059);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47205a:{NFSU2_TR(0x47205a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47205b:{NFSU2_TR(0x47205b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47205eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47205e:L47205e:{c.instructions+=1;NFSU2_TR(0x47205e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472063ull));
TAIL_STATIC(0x734e60u,734);
}
B472063:L472063:{c.instructions+=1;NFSU2_TR(0x472063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472069:L472069:{c.instructions+=5;NFSU2_TR(0x472069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47206a:{NFSU2_TR(0x47206a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47206b:{NFSU2_TR(0x47206b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47206c:{NFSU2_TR(0x47206c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47206d:{NFSU2_TR(0x47206d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472070:L472070:{c.instructions+=7;NFSU2_TR(0x472070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472071:{NFSU2_TR(0x472071);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472075:{NFSU2_TR(0x472075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472077:{NFSU2_TR(0x472077);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472078:{NFSU2_TR(0x472078);
__builtin_memmove((R+28),(R+4),4);
}
B47207a:{NFSU2_TR(0x47207a);
__builtin_memmove((R+4),(R+24),4);
}
B47207c:{NFSU2_TR(0x47207c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47207full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47207f:L47207f:{c.instructions+=5;NFSU2_TR(0x47207f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472081:{NFSU2_TR(0x472081);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B472084:{NFSU2_TR(0x472084);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B472089:{NFSU2_TR(0x472089);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47208c:{NFSU2_TR(0x47208c);
if(r1(R+518)){{goto L4720c0;}}
}
B47208e:L47208e:{c.instructions+=2;NFSU2_TR(0x47208e);
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
B47208f:{NFSU2_TR(0x47208f);
if(r1(R+518)){{goto L4720b5;}}
}
B472091:L472091:{c.instructions+=2;NFSU2_TR(0x472091);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472094:{NFSU2_TR(0x472094);
if(r1(R+518)){{goto L4720aa;}}
}
B472096:L472096:{c.instructions+=3;NFSU2_TR(0x472096);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47209b:{NFSU2_TR(0x47209b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47209d:{NFSU2_TR(0x47209d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4720a2ull));
TAIL_STATIC(0x4691c0u,469);
}
B4720a2:L4720a2:{c.instructions+=4;NFSU2_TR(0x4720a2);
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
B4720a5:{NFSU2_TR(0x4720a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4720a6:{NFSU2_TR(0x4720a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4720a7:{NFSU2_TR(0x4720a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4720aa:L4720aa:{c.instructions+=4;NFSU2_TR(0x4720aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4720b0:{NFSU2_TR(0x4720b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4720b1:{NFSU2_TR(0x4720b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4720b2:{NFSU2_TR(0x4720b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4720b5:L4720b5:{c.instructions+=4;NFSU2_TR(0x4720b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4720bb:{NFSU2_TR(0x4720bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4720bc:{NFSU2_TR(0x4720bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4720bd:{NFSU2_TR(0x4720bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4720c0:L4720c0:{c.instructions+=4;NFSU2_TR(0x4720c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4720c6:{NFSU2_TR(0x4720c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4720c7:{NFSU2_TR(0x4720c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4720c8:{NFSU2_TR(0x4720c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4720d0:L4720d0:{c.instructions+=12;NFSU2_TR(0x4720d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4720d6:{NFSU2_TR(0x4720d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4720d8:{NFSU2_TR(0x4720d8);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4720dd:{NFSU2_TR(0x4720dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4720de:{NFSU2_TR(0x4720de);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4720e3:{NFSU2_TR(0x4720e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4720ea:{NFSU2_TR(0x4720ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4720ed:{NFSU2_TR(0x4720ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4720ef:{NFSU2_TR(0x4720ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4720f0:{NFSU2_TR(0x4720f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4720f1:{NFSU2_TR(0x4720f1);
__builtin_memmove((R+12),(R+4),4);
}
B4720f3:{NFSU2_TR(0x4720f3);
if(r1(R+518)){{goto L472293;}}
}
B4720f9:L4720f9:{c.instructions+=6;NFSU2_TR(0x4720f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4720ff:{NFSU2_TR(0x4720ff);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472102:{NFSU2_TR(0x472102);
{u32 ea_=u32(u32(7908344u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B472108:{NFSU2_TR(0x472108);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47210a:{NFSU2_TR(0x47210a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47210d:{NFSU2_TR(0x47210d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L472291;}}
}
B472113:L472113:{c.instructions+=7;NFSU2_TR(0x472113);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472119:{NFSU2_TR(0x472119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47211c:{NFSU2_TR(0x47211c);
{u32 ea_=u32(u32(8325484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B472122:{NFSU2_TR(0x472122);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472123:{NFSU2_TR(0x472123);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472124:{NFSU2_TR(0x472124);
w4(R+4,u32(0x7f095cull));
}
B472129:{NFSU2_TR(0x472129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47212eull));
TAIL_STATIC(0x4599e0u,459);
}
B47212e:L47212e:{c.instructions+=6;NFSU2_TR(0x47212e);
__builtin_memmove((R+8),gp(0x7f0970),4);
}
B472134:{NFSU2_TR(0x472134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472136:{NFSU2_TR(0x472136);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472138:{NFSU2_TR(0x472138);
__builtin_memmove((R+4),(R+12),4);
}
B47213a:{NFSU2_TR(0x47213a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47213e:{NFSU2_TR(0x47213e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472141ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472141:L472141:{c.instructions+=3;NFSU2_TR(0x472141);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472145:{NFSU2_TR(0x472145);
__builtin_memmove((R+20),(R+0),4);
}
B472147:{NFSU2_TR(0x472147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47214cull));
TAIL_STATIC(0x75bed4u,75b);
}
B47214c:L47214c:{c.instructions+=8;NFSU2_TR(0x47214c);
__builtin_memmove((R+28),(R+0),4);
}
B47214e:{NFSU2_TR(0x47214e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B472151:{NFSU2_TR(0x472151);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B472154:{NFSU2_TR(0x472154);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B472157:{NFSU2_TR(0x472157);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472159:{NFSU2_TR(0x472159);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B47215c:{NFSU2_TR(0x47215c);
s4(0x7ec844,u32(0x78abe4ull));
}
B472166:{NFSU2_TR(0x472166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47216bull));
TAIL_STATIC(0x457e20u,457);
}
B47216b:L47216b:{c.instructions+=6;NFSU2_TR(0x47216b);
__builtin_memmove((R+24),(R+0),4);
}
B47216d:{NFSU2_TR(0x47216d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B472170:{NFSU2_TR(0x472170);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472174:{NFSU2_TR(0x472174);
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
B472176:{NFSU2_TR(0x472176);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47217e:{NFSU2_TR(0x47217e);
if(r1(R+518)){{goto L472254;}}
}
B472184:L472184:{c.instructions+=8;NFSU2_TR(0x472184);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47218a:{NFSU2_TR(0x47218a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47218d:{NFSU2_TR(0x47218d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47218f:{NFSU2_TR(0x47218f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B472195:{NFSU2_TR(0x472195);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472199:{NFSU2_TR(0x472199);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47219b:{NFSU2_TR(0x47219b);
__builtin_memmove((R+4),(R+12),4);
}
B47219d:{NFSU2_TR(0x47219d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4721a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4721a0:L4721a0:{c.instructions+=6;NFSU2_TR(0x4721a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4721a4:{NFSU2_TR(0x4721a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4721a7:{NFSU2_TR(0x4721a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4721a9:{NFSU2_TR(0x4721a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4721ac:{NFSU2_TR(0x4721ac);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4721b3:{NFSU2_TR(0x4721b3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4721b9;}}
}
B4721b5:L4721b5:{c.instructions+=2;NFSU2_TR(0x4721b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4721b7:{NFSU2_TR(0x4721b7);
{goto L4721c3;}
}
B4721b9:L4721b9:{c.instructions+=2;NFSU2_TR(0x4721b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4721bc:{NFSU2_TR(0x4721bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4721c3;}}
}
B4721be:L4721be:{c.instructions+=1;NFSU2_TR(0x4721be);
w4(R+0,u32(0x3cull));
}
B4721c3:L4721c3:{c.instructions+=3;NFSU2_TR(0x4721c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4721c7:{NFSU2_TR(0x4721c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4721ca:{NFSU2_TR(0x4721ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4721cfull));
TAIL_STATIC(0x75bed4u,75b);
}
B4721cf:L4721cf:{c.instructions+=3;NFSU2_TR(0x4721cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4721d1:{NFSU2_TR(0x4721d1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4721d3:{NFSU2_TR(0x4721d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4721d9;}}
}
B4721d5:L4721d5:{c.instructions+=2;NFSU2_TR(0x4721d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4721d7:{NFSU2_TR(0x4721d7);
{goto L4721e5;}
}
B4721d9:L4721d9:{c.instructions+=2;NFSU2_TR(0x4721d9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4721de:{NFSU2_TR(0x4721de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4721e5;}}
}
B4721e0:L4721e0:{c.instructions+=1;NFSU2_TR(0x4721e0);
w4(R+0,u32(0x2710ull));
}
B4721e5:L4721e5:{c.instructions+=3;NFSU2_TR(0x4721e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4721e7:{NFSU2_TR(0x4721e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4721ea:{NFSU2_TR(0x4721ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4721f0;}}
}
B4721ec:L4721ec:{c.instructions+=2;NFSU2_TR(0x4721ec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4721ee:{NFSU2_TR(0x4721ee);
{goto L4721fd;}
}
B4721f0:L4721f0:{c.instructions+=2;NFSU2_TR(0x4721f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8013ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8013ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4721f6:{NFSU2_TR(0x4721f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4721fd;}}
}
B4721f8:L4721f8:{c.instructions+=1;NFSU2_TR(0x4721f8);
w4(R+28,u32(0x8013ull));
}
B4721fd:L4721fd:{c.instructions+=4;NFSU2_TR(0x4721fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472201:{NFSU2_TR(0x472201);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B472203:{NFSU2_TR(0x472203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472206:{NFSU2_TR(0x472206);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47220c;}}
}
B472208:L472208:{c.instructions+=2;NFSU2_TR(0x472208);
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
B47220a:{NFSU2_TR(0x47220a);
{goto L472218;}
}
B47220c:L47220c:{c.instructions+=2;NFSU2_TR(0x47220c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472211:{NFSU2_TR(0x472211);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L472218;}}
}
B472213:L472213:{c.instructions+=1;NFSU2_TR(0x472213);
w4(R+0,u32(0x10000ull));
}
B472218:L472218:{c.instructions+=7;NFSU2_TR(0x472218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472219:{NFSU2_TR(0x472219);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47221a:{NFSU2_TR(0x47221a);
u8 U[4];
w4(U+0,u32(0x82c680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47221f:{NFSU2_TR(0x47221f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472222:{NFSU2_TR(0x472222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472225:{NFSU2_TR(0x472225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472228:{NFSU2_TR(0x472228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47222dull));
TAIL_STATIC(0x7358c0u,735);
}
B47222d:L47222d:{c.instructions+=3;NFSU2_TR(0x47222d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472230:{NFSU2_TR(0x472230);
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
B472232:{NFSU2_TR(0x472232);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L472256;}}
}
B472234:L472234:{c.instructions+=3;NFSU2_TR(0x472234);
u8 U[4];
w4(U+0,u32(0x7ede20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472239:{NFSU2_TR(0x472239);
w4(R+4,u32(0x82c680ull));
}
B47223e:{NFSU2_TR(0x47223e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472243ull));
TAIL_STATIC(0x735840u,735);
}
B472243:L472243:{c.instructions+=4;NFSU2_TR(0x472243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472244:{NFSU2_TR(0x472244);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472245:{NFSU2_TR(0x472245);
u8 U[4];
w4(U+0,u32(0x82c680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47224a:{NFSU2_TR(0x47224a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47224full));
TAIL_STATIC(0x7358c0u,735);
}
B47224f:L47224f:{c.instructions+=2;NFSU2_TR(0x47224f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472252:{NFSU2_TR(0x472252);
{goto L472256;}
}
B472254:L472254:{c.instructions+=1;NFSU2_TR(0x472254);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B472256:L472256:{c.instructions+=8;NFSU2_TR(0x472256);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47225c:{NFSU2_TR(0x47225c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B47225e:{NFSU2_TR(0x47225e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B472260:{NFSU2_TR(0x472260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472261:{NFSU2_TR(0x472261);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B472269:{NFSU2_TR(0x472269);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472271:{NFSU2_TR(0x472271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B472272:{NFSU2_TR(0x472272);
if(r1(R+518)){{goto L472293;}}
}
B472274:L472274:{c.instructions+=4;NFSU2_TR(0x472274);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472278:{NFSU2_TR(0x472278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472279:{NFSU2_TR(0x472279);
__builtin_memmove((R+4),(R+24),4);
}
B47227b:{NFSU2_TR(0x47227b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472280ull));
TAIL_STATIC(0x735070u,735);
}
B472280:L472280:{c.instructions+=6;NFSU2_TR(0x472280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472281:{NFSU2_TR(0x472281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472282:{NFSU2_TR(0x472282);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472286:{NFSU2_TR(0x472286);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47228d:{NFSU2_TR(0x47228d);
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
B472290:{NFSU2_TR(0x472290);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472291:L472291:{c.instructions+=1;NFSU2_TR(0x472291);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B472293:L472293:{c.instructions+=6;NFSU2_TR(0x472293);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472297:{NFSU2_TR(0x472297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472298:{NFSU2_TR(0x472298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472299:{NFSU2_TR(0x472299);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4722a0:{NFSU2_TR(0x4722a0);
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
B4722a3:{NFSU2_TR(0x4722a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4722b0:L4722b0:{c.instructions+=11;NFSU2_TR(0x4722b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4722b6:{NFSU2_TR(0x4722b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722b8:{NFSU2_TR(0x4722b8);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722bd:{NFSU2_TR(0x4722bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722be:{NFSU2_TR(0x4722be);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4722c3:{NFSU2_TR(0x4722c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4722ca:{NFSU2_TR(0x4722ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4722cd:{NFSU2_TR(0x4722cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4722cf:{NFSU2_TR(0x4722cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722d0:{NFSU2_TR(0x4722d0);
__builtin_memmove((R+12),(R+4),4);
}
B4722d2:{NFSU2_TR(0x4722d2);
if(r1(R+518)){{goto L47246b;}}
}
B4722d8:L4722d8:{c.instructions+=6;NFSU2_TR(0x4722d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4722de:{NFSU2_TR(0x4722de);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4722e4:{NFSU2_TR(0x4722e4);
{u32 ea_=u32(u32(7908344u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4722ea:{NFSU2_TR(0x4722ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4722ec:{NFSU2_TR(0x4722ec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4722ef:{NFSU2_TR(0x4722ef);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L472469;}}
}
B4722f5:L4722f5:{c.instructions+=8;NFSU2_TR(0x4722f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4722fb:{NFSU2_TR(0x4722fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722fc:{NFSU2_TR(0x4722fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4722fd:{NFSU2_TR(0x4722fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472300:{NFSU2_TR(0x472300);
{u32 ea_=u32(u32(8325484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B472306:{NFSU2_TR(0x472306);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472307:{NFSU2_TR(0x472307);
w4(R+4,u32(0x7f095cull));
}
B47230c:{NFSU2_TR(0x47230c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472311ull));
TAIL_STATIC(0x4599e0u,459);
}
B472311:L472311:{c.instructions+=6;NFSU2_TR(0x472311);
__builtin_memmove((R+8),gp(0x7f0970),4);
}
B472317:{NFSU2_TR(0x472317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472319:{NFSU2_TR(0x472319);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47231b:{NFSU2_TR(0x47231b);
__builtin_memmove((R+4),(R+12),4);
}
B47231d:{NFSU2_TR(0x47231d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472321:{NFSU2_TR(0x472321);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472324ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472324:L472324:{c.instructions+=3;NFSU2_TR(0x472324);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472328:{NFSU2_TR(0x472328);
__builtin_memmove((R+20),(R+0),4);
}
B47232a:{NFSU2_TR(0x47232a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47232full));
TAIL_STATIC(0x75bed4u,75b);
}
B47232f:L47232f:{c.instructions+=8;NFSU2_TR(0x47232f);
__builtin_memmove((R+28),(R+0),4);
}
B472331:{NFSU2_TR(0x472331);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B472334:{NFSU2_TR(0x472334);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B472337:{NFSU2_TR(0x472337);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B47233a:{NFSU2_TR(0x47233a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47233c:{NFSU2_TR(0x47233c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B47233f:{NFSU2_TR(0x47233f);
s4(0x7ec844,u32(0x78abfcull));
}
B472349:{NFSU2_TR(0x472349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47234eull));
TAIL_STATIC(0x457e20u,457);
}
B47234e:L47234e:{c.instructions+=6;NFSU2_TR(0x47234e);
__builtin_memmove((R+24),(R+0),4);
}
B472350:{NFSU2_TR(0x472350);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B472353:{NFSU2_TR(0x472353);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472357:{NFSU2_TR(0x472357);
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
B472359:{NFSU2_TR(0x472359);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472361:{NFSU2_TR(0x472361);
if(r1(R+518)){{goto L47244e;}}
}
B472367:L472367:{c.instructions+=8;NFSU2_TR(0x472367);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47236d:{NFSU2_TR(0x47236d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472370:{NFSU2_TR(0x472370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472372:{NFSU2_TR(0x472372);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B472378:{NFSU2_TR(0x472378);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47237c:{NFSU2_TR(0x47237c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47237e:{NFSU2_TR(0x47237e);
__builtin_memmove((R+4),(R+12),4);
}
B472380:{NFSU2_TR(0x472380);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472383ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472383:L472383:{c.instructions+=6;NFSU2_TR(0x472383);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472387:{NFSU2_TR(0x472387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47238a:{NFSU2_TR(0x47238a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47238c:{NFSU2_TR(0x47238c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47238f:{NFSU2_TR(0x47238f);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+20)),r4(U+0));
}
B472396:{NFSU2_TR(0x472396);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47239c;}}
}
B472398:L472398:{c.instructions+=2;NFSU2_TR(0x472398);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47239a:{NFSU2_TR(0x47239a);
{goto L4723a6;}
}
B47239c:L47239c:{c.instructions+=2;NFSU2_TR(0x47239c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47239f:{NFSU2_TR(0x47239f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4723a6;}}
}
B4723a1:L4723a1:{c.instructions+=1;NFSU2_TR(0x4723a1);
w4(R+0,u32(0x3cull));
}
B4723a6:L4723a6:{c.instructions+=3;NFSU2_TR(0x4723a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4723aa:{NFSU2_TR(0x4723aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4723ad:{NFSU2_TR(0x4723ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4723b2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4723b2:L4723b2:{c.instructions+=3;NFSU2_TR(0x4723b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4723b4:{NFSU2_TR(0x4723b4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4723b6:{NFSU2_TR(0x4723b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4723bc;}}
}
B4723b8:L4723b8:{c.instructions+=2;NFSU2_TR(0x4723b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4723ba:{NFSU2_TR(0x4723ba);
{goto L4723c8;}
}
B4723bc:L4723bc:{c.instructions+=2;NFSU2_TR(0x4723bc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4723c1:{NFSU2_TR(0x4723c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4723c8;}}
}
B4723c3:L4723c3:{c.instructions+=1;NFSU2_TR(0x4723c3);
w4(R+0,u32(0x2710ull));
}
B4723c8:L4723c8:{c.instructions+=3;NFSU2_TR(0x4723c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4723ca:{NFSU2_TR(0x4723ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4723cd:{NFSU2_TR(0x4723cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4723d3;}}
}
B4723cf:L4723cf:{c.instructions+=2;NFSU2_TR(0x4723cf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4723d1:{NFSU2_TR(0x4723d1);
{goto L4723e0;}
}
B4723d3:L4723d3:{c.instructions+=2;NFSU2_TR(0x4723d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8013ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8013ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4723d9:{NFSU2_TR(0x4723d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4723e0;}}
}
B4723db:L4723db:{c.instructions+=1;NFSU2_TR(0x4723db);
w4(R+28,u32(0x8013ull));
}
B4723e0:L4723e0:{c.instructions+=4;NFSU2_TR(0x4723e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4723e4:{NFSU2_TR(0x4723e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4723e6:{NFSU2_TR(0x4723e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4723e9:{NFSU2_TR(0x4723e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4723ef;}}
}
B4723eb:L4723eb:{c.instructions+=2;NFSU2_TR(0x4723eb);
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
B4723ed:{NFSU2_TR(0x4723ed);
{goto L4723fb;}
}
B4723ef:L4723ef:{c.instructions+=2;NFSU2_TR(0x4723ef);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4723f4:{NFSU2_TR(0x4723f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4723fb;}}
}
B4723f6:L4723f6:{c.instructions+=1;NFSU2_TR(0x4723f6);
w4(R+0,u32(0x10000ull));
}
B4723fb:L4723fb:{c.instructions+=7;NFSU2_TR(0x4723fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4723fc:{NFSU2_TR(0x4723fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4723fd:{NFSU2_TR(0x4723fd);
u8 U[4];
w4(U+0,u32(0x82c680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472402:{NFSU2_TR(0x472402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472405:{NFSU2_TR(0x472405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472408:{NFSU2_TR(0x472408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47240b:{NFSU2_TR(0x47240b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472410ull));
TAIL_STATIC(0x7358c0u,735);
}
B472410:L472410:{c.instructions+=3;NFSU2_TR(0x472410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472413:{NFSU2_TR(0x472413);
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
B472415:{NFSU2_TR(0x472415);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L472450;}}
}
B472417:L472417:{c.instructions+=3;NFSU2_TR(0x472417);
u8 U[4];
w4(U+0,u32(0x7ede20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47241c:{NFSU2_TR(0x47241c);
w4(R+4,u32(0x82c680ull));
}
B472421:{NFSU2_TR(0x472421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472426ull));
TAIL_STATIC(0x735840u,735);
}
B472426:L472426:{c.instructions+=4;NFSU2_TR(0x472426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472427:{NFSU2_TR(0x472427);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472428:{NFSU2_TR(0x472428);
u8 U[4];
w4(U+0,u32(0x82c680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47242d:{NFSU2_TR(0x47242d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472432ull));
TAIL_STATIC(0x7358c0u,735);
}
B472432:L472432:{c.instructions+=10;NFSU2_TR(0x472432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472435:{NFSU2_TR(0x472435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472436:{NFSU2_TR(0x472436);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47243c:{NFSU2_TR(0x47243c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47243d:{NFSU2_TR(0x47243d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47243e:{NFSU2_TR(0x47243e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47243f:{NFSU2_TR(0x47243f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472443:{NFSU2_TR(0x472443);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47244a:{NFSU2_TR(0x47244a);
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
B47244d:{NFSU2_TR(0x47244d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47244e:L47244e:{c.instructions+=1;NFSU2_TR(0x47244e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B472450:L472450:{c.instructions+=9;NFSU2_TR(0x472450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472451:{NFSU2_TR(0x472451);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472457:{NFSU2_TR(0x472457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472458:{NFSU2_TR(0x472458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B472459:{NFSU2_TR(0x472459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47245a:{NFSU2_TR(0x47245a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47245e:{NFSU2_TR(0x47245e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472465:{NFSU2_TR(0x472465);
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
B472468:{NFSU2_TR(0x472468);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472469:L472469:{c.instructions+=1;NFSU2_TR(0x472469);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47246b:L47246b:{c.instructions+=5;NFSU2_TR(0x47246b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47246f:{NFSU2_TR(0x47246f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472470:{NFSU2_TR(0x472470);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472477:{NFSU2_TR(0x472477);
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
B47247a:{NFSU2_TR(0x47247a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472480:L472480:{c.instructions+=11;NFSU2_TR(0x472480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472482:{NFSU2_TR(0x472482);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472487:{NFSU2_TR(0x472487);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47248d:{NFSU2_TR(0x47248d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47248e:{NFSU2_TR(0x47248e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472495:{NFSU2_TR(0x472495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472496:{NFSU2_TR(0x472496);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472497:{NFSU2_TR(0x472497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472498:{NFSU2_TR(0x472498);
__builtin_memmove((R+24),(R+4),4);
}
B47249a:{NFSU2_TR(0x47249a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47249e:{NFSU2_TR(0x47249e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4724a3ull));
TAIL_STATIC(0x45e350u,45e);
}
B4724a3:L4724a3:{c.instructions+=22;NFSU2_TR(0x4724a3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4724a5:{NFSU2_TR(0x4724a5);
w1(R+8,u8(0x1ull));
}
B4724a7:{NFSU2_TR(0x4724a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4724ad:{NFSU2_TR(0x4724ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724b3:{NFSU2_TR(0x4724b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724b9:{NFSU2_TR(0x4724b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724bf:{NFSU2_TR(0x4724bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4724c2:{NFSU2_TR(0x4724c2);
u8 U[4];
w4(U+0,u32(0x78ac10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4724c8:{NFSU2_TR(0x4724c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724ce:{NFSU2_TR(0x4724ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724d4:{NFSU2_TR(0x4724d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724da:{NFSU2_TR(0x4724da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724e0:{NFSU2_TR(0x4724e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724e6:{NFSU2_TR(0x4724e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724ec:{NFSU2_TR(0x4724ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4724f2:{NFSU2_TR(0x4724f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724f6:{NFSU2_TR(0x4724f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4724fc:{NFSU2_TR(0x4724fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472502:{NFSU2_TR(0x472502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472508:{NFSU2_TR(0x472508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47250e:{NFSU2_TR(0x47250e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B472510:{NFSU2_TR(0x472510);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+0),(U+0),4);
}
B472516:L472516:{c.instructions+=9;NFSU2_TR(0x472516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472519:{NFSU2_TR(0x472519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B47251b:{NFSU2_TR(0x47251b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47251e:{NFSU2_TR(0x47251e);
u8 U[13];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B472525:{NFSU2_TR(0x472525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472528:{NFSU2_TR(0x472528);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B472529:{NFSU2_TR(0x472529);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B47252c:{NFSU2_TR(0x47252c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47252f:{NFSU2_TR(0x47252f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x472516u);}goto L472516;}}
}
B472531:L472531:{c.instructions+=4;NFSU2_TR(0x472531);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472533:{NFSU2_TR(0x472533);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+4),(U+0),4);
}
B472539:{NFSU2_TR(0x472539);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47253f:{NFSU2_TR(0x47253f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472544ull));
TAIL_STATIC(0x579f20u,579);
}
B472544:L472544:{c.instructions+=16;NFSU2_TR(0x472544);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472548:{NFSU2_TR(0x472548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47254e:{NFSU2_TR(0x47254e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472554:{NFSU2_TR(0x472554);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47255a:{NFSU2_TR(0x47255a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472560:{NFSU2_TR(0x472560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472566:{NFSU2_TR(0x472566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47256c:{NFSU2_TR(0x47256c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472572:{NFSU2_TR(0x472572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472578:{NFSU2_TR(0x472578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47257e:{NFSU2_TR(0x47257e);
__builtin_memmove((R+0),(R+24),4);
}
B472580:{NFSU2_TR(0x472580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472581:{NFSU2_TR(0x472581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472582:{NFSU2_TR(0x472582);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472589:{NFSU2_TR(0x472589);
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
B47258c:{NFSU2_TR(0x47258c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472590:L472590:{c.instructions+=15;NFSU2_TR(0x472590);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472592:{NFSU2_TR(0x472592);
u8 U[4];
w4(U+0,u32(0x772526ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472597:{NFSU2_TR(0x472597);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47259d:{NFSU2_TR(0x47259d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47259e:{NFSU2_TR(0x47259e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4725a5:{NFSU2_TR(0x4725a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4725a8:{NFSU2_TR(0x4725a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4725a9:{NFSU2_TR(0x4725a9);
__builtin_memmove((R+24),(R+4),4);
}
B4725ab:{NFSU2_TR(0x4725ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4725ac:{NFSU2_TR(0x4725ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4725b0:{NFSU2_TR(0x4725b0);
u8 U[4];
w4(U+0,u32(0x78ac10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4725b6:{NFSU2_TR(0x4725b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4725bc:{NFSU2_TR(0x4725bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4725be:{NFSU2_TR(0x4725be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4725c6:{NFSU2_TR(0x4725c6);
if(r1(R+518)){{goto L472606;}}
}
B4725c8:L4725c8:{c.instructions+=3;NFSU2_TR(0x4725c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4725ca:{NFSU2_TR(0x4725ca);
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
B4725cc:{NFSU2_TR(0x4725cc);
if(r1(R+518)){{goto L4725d3;}}
}
B4725ce:L4725ce:{c.instructions+=1;NFSU2_TR(0x4725ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4725d3ull));
TAIL_STATIC(0x735550u,735);
}
B4725d3:L4725d3:{c.instructions+=3;NFSU2_TR(0x4725d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4725d7:{NFSU2_TR(0x4725d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4725d8:{NFSU2_TR(0x4725d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4725ddull));
TAIL_STATIC(0x734df0u,734);
}
B4725dd:L4725dd:{c.instructions+=2;NFSU2_TR(0x4725dd);
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
B4725e0:{NFSU2_TR(0x4725e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4725e5ull));
TAIL_STATIC(0x734e40u,734);
}
B4725e5:L4725e5:{c.instructions+=5;NFSU2_TR(0x4725e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4725e9:{NFSU2_TR(0x4725e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4725eb:{NFSU2_TR(0x4725eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4725ed:{NFSU2_TR(0x4725ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4725ee:{NFSU2_TR(0x4725ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4725f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4725f1:L4725f1:{c.instructions+=1;NFSU2_TR(0x4725f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4725f6ull));
TAIL_STATIC(0x734e60u,734);
}
B4725f6:L4725f6:{c.instructions+=2;NFSU2_TR(0x4725f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472600:{NFSU2_TR(0x472600);
s4(0x82bc18,u32(u32(m4(0x82bc18))-u32(u32(0x1ull))));
}
B472606:L472606:{c.instructions+=3;NFSU2_TR(0x472606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47260c:{NFSU2_TR(0x47260c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47260e:{NFSU2_TR(0x47260e);
if(r1(R+518)){{goto L47264e;}}
}
B472610:L472610:{c.instructions+=3;NFSU2_TR(0x472610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B472612:{NFSU2_TR(0x472612);
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
B472614:{NFSU2_TR(0x472614);
if(r1(R+518)){{goto L47261b;}}
}
B472616:L472616:{c.instructions+=1;NFSU2_TR(0x472616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47261bull));
TAIL_STATIC(0x735550u,735);
}
B47261b:L47261b:{c.instructions+=3;NFSU2_TR(0x47261b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47261f:{NFSU2_TR(0x47261f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472620:{NFSU2_TR(0x472620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472625ull));
TAIL_STATIC(0x734df0u,734);
}
B472625:L472625:{c.instructions+=2;NFSU2_TR(0x472625);
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
B472628:{NFSU2_TR(0x472628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47262dull));
TAIL_STATIC(0x734e40u,734);
}
B47262d:L47262d:{c.instructions+=5;NFSU2_TR(0x47262d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472631:{NFSU2_TR(0x472631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472633:{NFSU2_TR(0x472633);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472635:{NFSU2_TR(0x472635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472636:{NFSU2_TR(0x472636);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472639ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472639:L472639:{c.instructions+=1;NFSU2_TR(0x472639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47263eull));
TAIL_STATIC(0x734e60u,734);
}
B47263e:L47263e:{c.instructions+=2;NFSU2_TR(0x47263e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472648:{NFSU2_TR(0x472648);
s4(0x82bc1c,u32(u32(m4(0x82bc1c))-u32(u32(0x1ull))));
}
B47264e:L47264e:{c.instructions+=3;NFSU2_TR(0x47264e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+4),(U+0),4);
}
B472654:{NFSU2_TR(0x472654);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B472659:{NFSU2_TR(0x472659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47265eull));
TAIL_STATIC(0x5768e0u,576);
}
B47265e:L47265e:{c.instructions+=7;NFSU2_TR(0x47265e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472662:{NFSU2_TR(0x472662);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B472668:{NFSU2_TR(0x472668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472669:{NFSU2_TR(0x472669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47266a:{NFSU2_TR(0x47266a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472671:{NFSU2_TR(0x472671);
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
B472674:{NFSU2_TR(0x472674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472680:L472680:{c.instructions+=7;NFSU2_TR(0x472680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472681:{NFSU2_TR(0x472681);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472685:{NFSU2_TR(0x472685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472687:{NFSU2_TR(0x472687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472688:{NFSU2_TR(0x472688);
__builtin_memmove((R+28),(R+4),4);
}
B47268a:{NFSU2_TR(0x47268a);
__builtin_memmove((R+4),(R+24),4);
}
B47268c:{NFSU2_TR(0x47268c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47268full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47268f:L47268f:{c.instructions+=5;NFSU2_TR(0x47268f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472691:{NFSU2_TR(0x472691);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B472694:{NFSU2_TR(0x472694);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B472699:{NFSU2_TR(0x472699);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47269c:{NFSU2_TR(0x47269c);
if(r1(R+518)){{goto L4726d2;}}
}
B47269e:L47269e:{c.instructions+=2;NFSU2_TR(0x47269e);
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
B4726a1:{NFSU2_TR(0x4726a1);
if(r1(R+518)){{goto L4726c7;}}
}
B4726a3:L4726a3:{c.instructions+=2;NFSU2_TR(0x4726a3);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4726a6:{NFSU2_TR(0x4726a6);
if(r1(R+518)){{goto L4726bc;}}
}
B4726a8:L4726a8:{c.instructions+=3;NFSU2_TR(0x4726a8);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4726ad:{NFSU2_TR(0x4726ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4726af:{NFSU2_TR(0x4726af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4726b4ull));
TAIL_STATIC(0x4691c0u,469);
}
B4726b4:L4726b4:{c.instructions+=4;NFSU2_TR(0x4726b4);
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
B4726b7:{NFSU2_TR(0x4726b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4726b8:{NFSU2_TR(0x4726b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4726b9:{NFSU2_TR(0x4726b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4726bc:L4726bc:{c.instructions+=4;NFSU2_TR(0x4726bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4726c2:{NFSU2_TR(0x4726c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4726c3:{NFSU2_TR(0x4726c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4726c4:{NFSU2_TR(0x4726c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4726c7:L4726c7:{c.instructions+=4;NFSU2_TR(0x4726c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4726cd:{NFSU2_TR(0x4726cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4726ce:{NFSU2_TR(0x4726ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4726cf:{NFSU2_TR(0x4726cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4726d2:L4726d2:{c.instructions+=4;NFSU2_TR(0x4726d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4726d8:{NFSU2_TR(0x4726d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4726d9:{NFSU2_TR(0x4726d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4726da:{NFSU2_TR(0x4726da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4726e0:L4726e0:{c.instructions+=5;NFSU2_TR(0x4726e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4726e1:{NFSU2_TR(0x4726e1);
__builtin_memmove((R+24),(R+4),4);
}
B4726e3:{NFSU2_TR(0x4726e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4726e9:{NFSU2_TR(0x4726e9);
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
B4726eb:{NFSU2_TR(0x4726eb);
if(r1(R+518)){{goto L472761;}}
}
B4726ed:L4726ed:{c.instructions+=6;NFSU2_TR(0x4726ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4726f1:{NFSU2_TR(0x4726f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4726f2:{NFSU2_TR(0x4726f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4726f8:{NFSU2_TR(0x4726f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4726f9:{NFSU2_TR(0x4726f9);
__builtin_memmove((R+4),(R+28),4);
}
B4726fb:{NFSU2_TR(0x4726fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472700ull));
TAIL_STATIC(0x46b100u,46b);
}
B472700:L472700:{c.instructions+=6;NFSU2_TR(0x472700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472706:{NFSU2_TR(0x472706);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472709:{NFSU2_TR(0x472709);
{u32 ea_=u32(u32(8311716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47270f:{NFSU2_TR(0x47270f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B472711:{NFSU2_TR(0x472711);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B472714:{NFSU2_TR(0x472714);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47274e;}}
}
B472716:L472716:{c.instructions+=5;NFSU2_TR(0x472716);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47271c:{NFSU2_TR(0x47271c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B472722:{NFSU2_TR(0x472722);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B472724:{NFSU2_TR(0x472724);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B472727:{NFSU2_TR(0x472727);
if(r1(R+514)){{goto L47274e;}}
}
B472729:L472729:{c.instructions+=4;NFSU2_TR(0x472729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47272f:{NFSU2_TR(0x47272f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472732:{NFSU2_TR(0x472732);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472735:{NFSU2_TR(0x472735);
if(r1(R+518)){{goto L47274e;}}
}
B472737:L472737:{c.instructions+=2;NFSU2_TR(0x472737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B472739:{NFSU2_TR(0x472739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47274e;}}
}
B47273b:L47273b:{c.instructions+=6;NFSU2_TR(0x47273b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47273c:{NFSU2_TR(0x47273c);
u8 U[4];
w4(U+0,u32(0x96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472741:{NFSU2_TR(0x472741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472742:{NFSU2_TR(0x472742);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472747:{NFSU2_TR(0x472747);
__builtin_memmove((R+4),(R+28),4);
}
B472749:{NFSU2_TR(0x472749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47274eull));
TAIL_STATIC(0x459990u,459);
}
B47274e:L47274e:{c.instructions+=2;NFSU2_TR(0x47274e);
__builtin_memmove((R+4),(R+24),4);
}
B472750:{NFSU2_TR(0x472750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472755ull));
TAIL_STATIC(0x45eff0u,45e);
}
B472755:L472755:{c.instructions+=3;NFSU2_TR(0x472755);
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
B472757:{NFSU2_TR(0x472757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472758:{NFSU2_TR(0x472758);
if(r1(R+518)){{goto L472761;}}
}
B47275a:L47275a:{c.instructions+=2;NFSU2_TR(0x47275a);
__builtin_memmove((R+4),(R+24),4);
}
B47275c:{NFSU2_TR(0x47275c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472761ull));
TAIL_STATIC(0x45f050u,45f);
}
B472761:L472761:{c.instructions+=2;NFSU2_TR(0x472761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472762:{NFSU2_TR(0x472762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472770:L472770:{c.instructions+=6;NFSU2_TR(0x472770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B472773:{NFSU2_TR(0x472773);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472774:{NFSU2_TR(0x472774);
__builtin_memmove((R+24),(R+4),4);
}
B472776:{NFSU2_TR(0x472776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47277c:{NFSU2_TR(0x47277c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47277e:{NFSU2_TR(0x47277e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L472798;}}
}
B472780:L472780:{c.instructions+=6;NFSU2_TR(0x472780);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472782:{NFSU2_TR(0x472782);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472784:{NFSU2_TR(0x472784);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472786:{NFSU2_TR(0x472786);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472788:{NFSU2_TR(0x472788);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47278a:{NFSU2_TR(0x47278a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47278full));
TAIL_STATIC(0x45f0a0u,45f);
}
B47278f:L47278f:{c.instructions+=4;NFSU2_TR(0x47278f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B472791:{NFSU2_TR(0x472791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472792:{NFSU2_TR(0x472792);
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
B472795:{NFSU2_TR(0x472795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472798:L472798:{c.instructions+=4;NFSU2_TR(0x472798);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47279d:{NFSU2_TR(0x47279d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4727a0:{NFSU2_TR(0x4727a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4727a2:{NFSU2_TR(0x4727a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4727da;}}
}
B4727a4:L4727a4:{c.instructions+=5;NFSU2_TR(0x4727a4);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4727aa:{NFSU2_TR(0x4727aa);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4727b0:{NFSU2_TR(0x4727b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4727b2:{NFSU2_TR(0x4727b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4727b5:{NFSU2_TR(0x4727b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4727c5;}}
}
B4727b7:L4727b7:{c.instructions+=3;NFSU2_TR(0x4727b7);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4727bd:{NFSU2_TR(0x4727bd);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4727c3:{NFSU2_TR(0x4727c3);
{goto L4727d4;}
}
B4727c5:L4727c5:{c.instructions+=3;NFSU2_TR(0x4727c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4727cb:{NFSU2_TR(0x4727cb);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4727d1:{NFSU2_TR(0x4727d1);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4727d4:L4727d4:{c.instructions+=1;NFSU2_TR(0x4727d4);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4727da:L4727da:{c.instructions+=9;NFSU2_TR(0x4727da);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4727e0:{NFSU2_TR(0x4727e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4727e1:{NFSU2_TR(0x4727e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4727e7:{NFSU2_TR(0x4727e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4727ed:{NFSU2_TR(0x4727ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4727f0:{NFSU2_TR(0x4727f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4727f4:{NFSU2_TR(0x4727f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4727f6:{NFSU2_TR(0x4727f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4727f9:{NFSU2_TR(0x4727f9);
if(r1(R+518)){{goto L472803;}}
}
B4727fb:L4727fb:{c.instructions+=2;NFSU2_TR(0x4727fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4727fd:{NFSU2_TR(0x4727fd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472803:L472803:{c.instructions+=5;NFSU2_TR(0x472803);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472807:{NFSU2_TR(0x472807);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B472809:{NFSU2_TR(0x472809);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47280b:{NFSU2_TR(0x47280b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47280e:{NFSU2_TR(0x47280e);
if(r1(R+514)){{goto L472816;}}
}
B472810:L472810:{c.instructions+=2;NFSU2_TR(0x472810);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B472812:{NFSU2_TR(0x472812);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472816:L472816:{c.instructions+=4;NFSU2_TR(0x472816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47281c:{NFSU2_TR(0x47281c);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B472822:{NFSU2_TR(0x472822);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472825:{NFSU2_TR(0x472825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47282aull));
TAIL_STATIC(0x75bed4u,75b);
}
B47282a:L47282a:{c.instructions+=9;NFSU2_TR(0x47282a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
}
B47282f:{NFSU2_TR(0x47282f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472833:{NFSU2_TR(0x472833);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B472837:{NFSU2_TR(0x472837);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47283d:{NFSU2_TR(0x47283d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B472841:{NFSU2_TR(0x472841);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B472847:{NFSU2_TR(0x472847);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B472849:{NFSU2_TR(0x472849);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47284c:{NFSU2_TR(0x47284c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L472922;}}
}
B472852:L472852:{c.instructions+=6;NFSU2_TR(0x472852);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472856:{NFSU2_TR(0x472856);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47285c:{NFSU2_TR(0x47285c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B472860:{NFSU2_TR(0x472860);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B472862:{NFSU2_TR(0x472862);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B472865:{NFSU2_TR(0x472865);
if(r1(R+514)){{goto L47286f;}}
}
B472867:L472867:{c.instructions+=2;NFSU2_TR(0x472867);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B472869:{NFSU2_TR(0x472869);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47286f:L47286f:{c.instructions+=13;NFSU2_TR(0x47286f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472875:{NFSU2_TR(0x472875);
{u32 ea_=u32(u32(7899152u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47287b:{NFSU2_TR(0x47287b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B47287d:{NFSU2_TR(0x47287d);
{u32 ea_=u32(u32(7899152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B472883:{NFSU2_TR(0x472883);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B472887:{NFSU2_TR(0x472887);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B472889:{NFSU2_TR(0x472889);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47288d:{NFSU2_TR(0x47288d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B472890:{NFSU2_TR(0x472890);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B472894:{NFSU2_TR(0x472894);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B47289a:{NFSU2_TR(0x47289a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47289c:{NFSU2_TR(0x47289c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47289f:{NFSU2_TR(0x47289f);
if(r1(R+518)){{goto L4728a9;}}
}
B4728a1:L4728a1:{c.instructions+=2;NFSU2_TR(0x4728a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4728a3:{NFSU2_TR(0x4728a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4728a9:L4728a9:{c.instructions+=5;NFSU2_TR(0x4728a9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4728ad:{NFSU2_TR(0x4728ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4728af:{NFSU2_TR(0x4728af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4728b1:{NFSU2_TR(0x4728b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4728b4:{NFSU2_TR(0x4728b4);
if(r1(R+514)){{goto L4728bc;}}
}
B4728b6:L4728b6:{c.instructions+=2;NFSU2_TR(0x4728b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4728b8:{NFSU2_TR(0x4728b8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4728bc:L4728bc:{c.instructions+=8;NFSU2_TR(0x4728bc);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4728c2:{NFSU2_TR(0x4728c2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4728c6:{NFSU2_TR(0x4728c6);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4728c9:{NFSU2_TR(0x4728c9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4728cb:{NFSU2_TR(0x4728cb);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4728cd:{NFSU2_TR(0x4728cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4728cf:{NFSU2_TR(0x4728cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4728d2:{NFSU2_TR(0x4728d2);
if(r1(R+514)){{goto L47292d;}}
}
B4728d4:L4728d4:{c.instructions+=3;NFSU2_TR(0x4728d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4728da:{NFSU2_TR(0x4728da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4728dc:{NFSU2_TR(0x4728dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47292d;}}
}
B4728de:L4728de:{c.instructions+=4;NFSU2_TR(0x4728de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4728e4:{NFSU2_TR(0x4728e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4728e6:{NFSU2_TR(0x4728e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4728ed:{NFSU2_TR(0x4728ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4728f2ull));
TAIL_STATIC(0x4598c0u,459);
}
B4728f2:L4728f2:{c.instructions+=5;NFSU2_TR(0x4728f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4728f4:{NFSU2_TR(0x4728f4);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4728f9:{NFSU2_TR(0x4728f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4728fb:{NFSU2_TR(0x4728fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4728fd:{NFSU2_TR(0x4728fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472902ull));
TAIL_STATIC(0x4598f0u,459);
}
B472902:L472902:{c.instructions+=8;NFSU2_TR(0x472902);
{u32 ea_=u32(u32(7899148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472908:{NFSU2_TR(0x472908);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47290e:{NFSU2_TR(0x47290e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472910:{NFSU2_TR(0x472910);
u8 U[4];
w4(U+0,u32(0x7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472915:{NFSU2_TR(0x472915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472916:{NFSU2_TR(0x472916);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B472919:{NFSU2_TR(0x472919);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47291b:{NFSU2_TR(0x47291b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472920ull));
TAIL_STATIC(0x4598f0u,459);
}
B472920:L472920:{c.instructions+=1;NFSU2_TR(0x472920);
{goto L472948;}
}
B472922:L472922:{c.instructions+=2;NFSU2_TR(0x472922);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472928:{NFSU2_TR(0x472928);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47286fu);}goto L47286f;}
}
B47292d:L47292d:{c.instructions+=4;NFSU2_TR(0x47292d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B472930:{NFSU2_TR(0x472930);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B472932:{NFSU2_TR(0x472932);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B472935:{NFSU2_TR(0x472935);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L472948;}}
}
B472937:L472937:{c.instructions+=3;NFSU2_TR(0x472937);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47293d:{NFSU2_TR(0x47293d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47293f:{NFSU2_TR(0x47293f);
if(r1(R+518)){{goto L472948;}}
}
B472941:L472941:{c.instructions+=1;NFSU2_TR(0x472941);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B472948:L472948:{c.instructions+=6;NFSU2_TR(0x472948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47294e:{NFSU2_TR(0x47294e);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B472954:{NFSU2_TR(0x472954);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B472957:{NFSU2_TR(0x472957);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47295d:{NFSU2_TR(0x47295d);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B472963:{NFSU2_TR(0x472963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472968ull));
TAIL_STATIC(0x75bed4u,75b);
}
B472968:L472968:{c.instructions+=9;NFSU2_TR(0x472968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47296e:{NFSU2_TR(0x47296e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472971:{NFSU2_TR(0x472971);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B472974:{NFSU2_TR(0x472974);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47297a:{NFSU2_TR(0x47297a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B47297d:{NFSU2_TR(0x47297d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47297f:{NFSU2_TR(0x47297f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472985:{NFSU2_TR(0x472985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472986:{NFSU2_TR(0x472986);
if(r1(R+518)){{goto L4729ba;}}
}
B472988:L472988:{c.instructions+=4;NFSU2_TR(0x472988);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47298c:{NFSU2_TR(0x47298c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47298d:{NFSU2_TR(0x47298d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B472993:{NFSU2_TR(0x472993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472998ull));
TAIL_STATIC(0x46af70u,46a);
}
B472998:L472998:{c.instructions+=2;NFSU2_TR(0x472998);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47299e:{NFSU2_TR(0x47299e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4729a3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4729a3:L4729a3:{c.instructions+=4;NFSU2_TR(0x4729a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ef7f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4729aa:{NFSU2_TR(0x4729aa);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B4729b1:{NFSU2_TR(0x4729b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4729b4:{NFSU2_TR(0x4729b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4729ba:L4729ba:{c.instructions+=4;NFSU2_TR(0x4729ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4729bc:{NFSU2_TR(0x4729bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4729bd:{NFSU2_TR(0x4729bd);
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
B4729c0:{NFSU2_TR(0x4729c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4729d0:L4729d0:{c.instructions+=3;NFSU2_TR(0x4729d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4729d1:{NFSU2_TR(0x4729d1);
__builtin_memmove((R+24),(R+4),4);
}
B4729d3:{NFSU2_TR(0x4729d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4729d8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4729d8:L4729d8:{c.instructions+=22;NFSU2_TR(0x4729d8);
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
B4729da:{NFSU2_TR(0x4729da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4729e0:{NFSU2_TR(0x4729e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4729e6:{NFSU2_TR(0x4729e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4729ec:{NFSU2_TR(0x4729ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4729f2:{NFSU2_TR(0x4729f2);
u8 U[4];
w4(U+0,u32(0x78ac58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4729f8:{NFSU2_TR(0x4729f8);
w1(R+4,u8(0x1ull));
}
B4729fa:{NFSU2_TR(0x4729fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4729fd:{NFSU2_TR(0x4729fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a03:{NFSU2_TR(0x472a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a09:{NFSU2_TR(0x472a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a0f:{NFSU2_TR(0x472a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a15:{NFSU2_TR(0x472a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a1b:{NFSU2_TR(0x472a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a21:{NFSU2_TR(0x472a21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472a27:{NFSU2_TR(0x472a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a2d:{NFSU2_TR(0x472a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a33:{NFSU2_TR(0x472a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a39:{NFSU2_TR(0x472a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a3f:{NFSU2_TR(0x472a3f);
__builtin_memmove((R+0),(R+24),4);
}
B472a41:{NFSU2_TR(0x472a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472a42:{NFSU2_TR(0x472a42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472a50:L472a50:{c.instructions+=12;NFSU2_TR(0x472a50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472a52:{NFSU2_TR(0x472a52);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472a57:{NFSU2_TR(0x472a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472a5d:{NFSU2_TR(0x472a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472a5e:{NFSU2_TR(0x472a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a65:{NFSU2_TR(0x472a65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472a66:{NFSU2_TR(0x472a66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472a67:{NFSU2_TR(0x472a67);
__builtin_memmove((R+24),(R+4),4);
}
B472a69:{NFSU2_TR(0x472a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a6d:{NFSU2_TR(0x472a6d);
u8 U[4];
w4(U+0,u32(0x78ac58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B472a73:{NFSU2_TR(0x472a73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472a7b:{NFSU2_TR(0x472a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472a80ull));
TAIL_STATIC(0x45f410u,45f);
}
B472a80:L472a80:{c.instructions+=6;NFSU2_TR(0x472a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472a84:{NFSU2_TR(0x472a84);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B472a8a:{NFSU2_TR(0x472a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472a8b:{NFSU2_TR(0x472a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472a92:{NFSU2_TR(0x472a92);
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
B472a95:{NFSU2_TR(0x472a95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472aa0:L472aa0:{c.instructions+=7;NFSU2_TR(0x472aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472aa1:{NFSU2_TR(0x472aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472aa5:{NFSU2_TR(0x472aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472aa7:{NFSU2_TR(0x472aa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472aa8:{NFSU2_TR(0x472aa8);
__builtin_memmove((R+28),(R+4),4);
}
B472aaa:{NFSU2_TR(0x472aaa);
__builtin_memmove((R+4),(R+24),4);
}
B472aac:{NFSU2_TR(0x472aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472aafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472aaf:L472aaf:{c.instructions+=5;NFSU2_TR(0x472aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472ab1:{NFSU2_TR(0x472ab1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B472ab4:{NFSU2_TR(0x472ab4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B472ab9:{NFSU2_TR(0x472ab9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B472abc:{NFSU2_TR(0x472abc);
if(r1(R+518)){{goto L472ae2;}}
}
B472abe:L472abe:{c.instructions+=2;NFSU2_TR(0x472abe);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472ac1:{NFSU2_TR(0x472ac1);
if(r1(R+518)){{goto L472ad7;}}
}
B472ac3:L472ac3:{c.instructions+=3;NFSU2_TR(0x472ac3);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ac8:{NFSU2_TR(0x472ac8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472aca:{NFSU2_TR(0x472aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472acfull));
TAIL_STATIC(0x4691c0u,469);
}
B472acf:L472acf:{c.instructions+=4;NFSU2_TR(0x472acf);
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
B472ad2:{NFSU2_TR(0x472ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472ad3:{NFSU2_TR(0x472ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472ad4:{NFSU2_TR(0x472ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472ad7:L472ad7:{c.instructions+=4;NFSU2_TR(0x472ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472add:{NFSU2_TR(0x472add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472ade:{NFSU2_TR(0x472ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472adf:{NFSU2_TR(0x472adf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472ae2:L472ae2:{c.instructions+=4;NFSU2_TR(0x472ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ae8:{NFSU2_TR(0x472ae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472ae9:{NFSU2_TR(0x472ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472aea:{NFSU2_TR(0x472aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472af0:L472af0:{c.instructions+=11;NFSU2_TR(0x472af0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472af2:{NFSU2_TR(0x472af2);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472af7:{NFSU2_TR(0x472af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472afd:{NFSU2_TR(0x472afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472afe:{NFSU2_TR(0x472afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472b05:{NFSU2_TR(0x472b05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b06:{NFSU2_TR(0x472b06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b07:{NFSU2_TR(0x472b07);
__builtin_memmove((R+24),(R+4),4);
}
B472b09:{NFSU2_TR(0x472b09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B472b0f:{NFSU2_TR(0x472b0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B472b11:{NFSU2_TR(0x472b11);
if(r1(R+518)){{goto L472bf5;}}
}
B472b17:L472b17:{c.instructions+=2;NFSU2_TR(0x472b17);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B472b1e:{NFSU2_TR(0x472b1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L472bf5;}}
}
B472b24:L472b24:{c.instructions+=5;NFSU2_TR(0x472b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472b26:{NFSU2_TR(0x472b26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b27:{NFSU2_TR(0x472b27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b28:{NFSU2_TR(0x472b28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b2a:{NFSU2_TR(0x472b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472b2d:L472b2d:{c.instructions+=4;NFSU2_TR(0x472b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B472b33:{NFSU2_TR(0x472b33);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B472b35:{NFSU2_TR(0x472b35);
__builtin_memmove((R+20),(R+0),4);
}
B472b37:{NFSU2_TR(0x472b37);
if(r1(R+518)){{goto L472b71;}}
}
B472b39:L472b39:{c.instructions+=3;NFSU2_TR(0x472b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B472b3b:{NFSU2_TR(0x472b3b);
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
B472b3d:{NFSU2_TR(0x472b3d);
if(r1(R+518)){{goto L472b44;}}
}
B472b3f:L472b3f:{c.instructions+=1;NFSU2_TR(0x472b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b44ull));
TAIL_STATIC(0x735550u,735);
}
B472b44:L472b44:{c.instructions+=3;NFSU2_TR(0x472b44);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B472b48:{NFSU2_TR(0x472b48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b49:{NFSU2_TR(0x472b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b4eull));
TAIL_STATIC(0x734df0u,734);
}
B472b4e:L472b4e:{c.instructions+=2;NFSU2_TR(0x472b4e);
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
B472b51:{NFSU2_TR(0x472b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b56ull));
TAIL_STATIC(0x734e40u,734);
}
B472b56:L472b56:{c.instructions+=5;NFSU2_TR(0x472b56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472b5a:{NFSU2_TR(0x472b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472b5c:{NFSU2_TR(0x472b5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b5e:{NFSU2_TR(0x472b5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b5f:{NFSU2_TR(0x472b5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472b62:L472b62:{c.instructions+=1;NFSU2_TR(0x472b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b67ull));
TAIL_STATIC(0x734e60u,734);
}
B472b67:L472b67:{c.instructions+=1;NFSU2_TR(0x472b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472b71:L472b71:{c.instructions+=3;NFSU2_TR(0x472b71);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b73:{NFSU2_TR(0x472b73);
s4(0x7ec844,u32(0x78ac9cull));
}
B472b7d:{NFSU2_TR(0x472b7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472b82ull));
TAIL_STATIC(0x457e20u,457);
}
B472b82:L472b82:{c.instructions+=6;NFSU2_TR(0x472b82);
__builtin_memmove((R+28),(R+0),4);
}
B472b84:{NFSU2_TR(0x472b84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B472b87:{NFSU2_TR(0x472b87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472b8b:{NFSU2_TR(0x472b8b);
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
B472b8d:{NFSU2_TR(0x472b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472b95:{NFSU2_TR(0x472b95);
if(r1(R+518)){{goto L472bb2;}}
}
B472b97:L472b97:{c.instructions+=5;NFSU2_TR(0x472b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472b99:{NFSU2_TR(0x472b99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b9b:{NFSU2_TR(0x472b9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472b9d:{NFSU2_TR(0x472b9d);
__builtin_memmove((R+4),(R+24),4);
}
B472b9f:{NFSU2_TR(0x472b9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472ba2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472ba2:L472ba2:{c.instructions+=6;NFSU2_TR(0x472ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472ba6:{NFSU2_TR(0x472ba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ba7:{NFSU2_TR(0x472ba7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ba8:{NFSU2_TR(0x472ba8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ba9:{NFSU2_TR(0x472ba9);
__builtin_memmove((R+4),(R+28),4);
}
B472bab:{NFSU2_TR(0x472bab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472bb0ull));
TAIL_STATIC(0x457e70u,457);
}
B472bb0:L472bb0:{c.instructions+=1;NFSU2_TR(0x472bb0);
{goto L472bb4;}
}
B472bb2:L472bb2:{c.instructions+=1;NFSU2_TR(0x472bb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B472bb4:L472bb4:{c.instructions+=7;NFSU2_TR(0x472bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472bba:{NFSU2_TR(0x472bba);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B472bc0:{NFSU2_TR(0x472bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472bc2:{NFSU2_TR(0x472bc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472bc5:{NFSU2_TR(0x472bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472bc6:{NFSU2_TR(0x472bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B472bc7:{NFSU2_TR(0x472bc7);
if(r1(R+518)){{goto L472bee;}}
}
B472bc9:L472bc9:{c.instructions+=2;NFSU2_TR(0x472bc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472bcc:{NFSU2_TR(0x472bcc);
if(r1(R+518)){{goto L472bee;}}
}
B472bce:L472bce:{c.instructions+=2;NFSU2_TR(0x472bce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472bd1:{NFSU2_TR(0x472bd1);
if(r1(R+518)){{goto L472bee;}}
}
B472bd3:L472bd3:{c.instructions+=7;NFSU2_TR(0x472bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472bda:{NFSU2_TR(0x472bda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B472bdc:{NFSU2_TR(0x472bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472bdd:{NFSU2_TR(0x472bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472be1:{NFSU2_TR(0x472be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472be8:{NFSU2_TR(0x472be8);
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
B472beb:{NFSU2_TR(0x472beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472bee:L472bee:{c.instructions+=1;NFSU2_TR(0x472bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472bf5:L472bf5:{c.instructions+=6;NFSU2_TR(0x472bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472bf9:{NFSU2_TR(0x472bf9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B472bfb:{NFSU2_TR(0x472bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472bfc:{NFSU2_TR(0x472bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c03:{NFSU2_TR(0x472c03);
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
B472c06:{NFSU2_TR(0x472c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472c10:L472c10:{c.instructions+=3;NFSU2_TR(0x472c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472c11:{NFSU2_TR(0x472c11);
__builtin_memmove((R+24),(R+4),4);
}
B472c13:{NFSU2_TR(0x472c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472c18ull));
TAIL_STATIC(0x45e350u,45e);
}
B472c18:L472c18:{c.instructions+=21;NFSU2_TR(0x472c18);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472c1a:{NFSU2_TR(0x472c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B472c20:{NFSU2_TR(0x472c20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472c26:{NFSU2_TR(0x472c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c2c:{NFSU2_TR(0x472c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c32:{NFSU2_TR(0x472c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c38:{NFSU2_TR(0x472c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B472c3c:{NFSU2_TR(0x472c3c);
u8 U[4];
w4(U+0,u32(0x78acb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B472c42:{NFSU2_TR(0x472c42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B472c44:{NFSU2_TR(0x472c44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B472c46:{NFSU2_TR(0x472c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c4c:{NFSU2_TR(0x472c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c52:{NFSU2_TR(0x472c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c58:{NFSU2_TR(0x472c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c5e:{NFSU2_TR(0x472c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c64:{NFSU2_TR(0x472c64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472c6a:{NFSU2_TR(0x472c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c70:{NFSU2_TR(0x472c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472c76:{NFSU2_TR(0x472c76);
__builtin_memmove((R+0),(R+24),4);
}
B472c78:{NFSU2_TR(0x472c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472c79:{NFSU2_TR(0x472c79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472c80:L472c80:{c.instructions+=7;NFSU2_TR(0x472c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472c81:{NFSU2_TR(0x472c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472c85:{NFSU2_TR(0x472c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472c87:{NFSU2_TR(0x472c87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472c88:{NFSU2_TR(0x472c88);
__builtin_memmove((R+28),(R+4),4);
}
B472c8a:{NFSU2_TR(0x472c8a);
__builtin_memmove((R+4),(R+24),4);
}
B472c8c:{NFSU2_TR(0x472c8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472c8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472c8f:L472c8f:{c.instructions+=5;NFSU2_TR(0x472c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472c91:{NFSU2_TR(0x472c91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B472c94:{NFSU2_TR(0x472c94);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B472c99:{NFSU2_TR(0x472c99);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B472c9c:{NFSU2_TR(0x472c9c);
if(r1(R+518)){{goto L472cc2;}}
}
B472c9e:L472c9e:{c.instructions+=2;NFSU2_TR(0x472c9e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472ca1:{NFSU2_TR(0x472ca1);
if(r1(R+518)){{goto L472cb7;}}
}
B472ca3:L472ca3:{c.instructions+=3;NFSU2_TR(0x472ca3);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ca8:{NFSU2_TR(0x472ca8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472caa:{NFSU2_TR(0x472caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472cafull));
TAIL_STATIC(0x4691c0u,469);
}
B472caf:L472caf:{c.instructions+=4;NFSU2_TR(0x472caf);
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
B472cb2:{NFSU2_TR(0x472cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472cb3:{NFSU2_TR(0x472cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472cb4:{NFSU2_TR(0x472cb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472cb7:L472cb7:{c.instructions+=4;NFSU2_TR(0x472cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472cbd:{NFSU2_TR(0x472cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472cbe:{NFSU2_TR(0x472cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472cbf:{NFSU2_TR(0x472cbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472cc2:L472cc2:{c.instructions+=4;NFSU2_TR(0x472cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472cc8:{NFSU2_TR(0x472cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472cc9:{NFSU2_TR(0x472cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472cca:{NFSU2_TR(0x472cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472cd0:L472cd0:{c.instructions+=6;NFSU2_TR(0x472cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472cd4:{NFSU2_TR(0x472cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B472cd6:{NFSU2_TR(0x472cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B472cda:{NFSU2_TR(0x472cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472cdc:{NFSU2_TR(0x472cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ce2:{NFSU2_TR(0x472ce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472cf0:L472cf0:{c.instructions+=9;NFSU2_TR(0x472cf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472cf1:{NFSU2_TR(0x472cf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472cf2:{NFSU2_TR(0x472cf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472cf3:{NFSU2_TR(0x472cf3);
__builtin_memmove((R+24),(R+4),4);
}
B472cf5:{NFSU2_TR(0x472cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472cf6:{NFSU2_TR(0x472cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B472cfc:{NFSU2_TR(0x472cfc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B472cfe:{NFSU2_TR(0x472cfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472d00:{NFSU2_TR(0x472d00);
if(r1(R+518)){{goto L472d35;}}
}
B472d02:L472d02:{c.instructions+=3;NFSU2_TR(0x472d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B472d04:{NFSU2_TR(0x472d04);
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
B472d06:{NFSU2_TR(0x472d06);
if(r1(R+518)){{goto L472d0d;}}
}
B472d08:L472d08:{c.instructions+=1;NFSU2_TR(0x472d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d0dull));
TAIL_STATIC(0x735550u,735);
}
B472d0d:L472d0d:{c.instructions+=3;NFSU2_TR(0x472d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472d11:{NFSU2_TR(0x472d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d12:{NFSU2_TR(0x472d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d17ull));
TAIL_STATIC(0x734df0u,734);
}
B472d17:L472d17:{c.instructions+=2;NFSU2_TR(0x472d17);
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
B472d1a:{NFSU2_TR(0x472d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d1full));
TAIL_STATIC(0x734e40u,734);
}
B472d1f:L472d1f:{c.instructions+=5;NFSU2_TR(0x472d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472d23:{NFSU2_TR(0x472d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472d25:{NFSU2_TR(0x472d25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d26:{NFSU2_TR(0x472d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d27:{NFSU2_TR(0x472d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472d2a:L472d2a:{c.instructions+=1;NFSU2_TR(0x472d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d2full));
TAIL_STATIC(0x734e60u,734);
}
B472d2f:L472d2f:{c.instructions+=1;NFSU2_TR(0x472d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d35:L472d35:{c.instructions+=4;NFSU2_TR(0x472d35);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
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
B472d3b:{NFSU2_TR(0x472d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d41:{NFSU2_TR(0x472d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d47:{NFSU2_TR(0x472d47);
if(r1(R+518)){{goto L472d63;}}
}
B472d49:L472d49:{c.instructions+=5;NFSU2_TR(0x472d49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472d4f:{NFSU2_TR(0x472d4f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xc4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xc4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472d55:{NFSU2_TR(0x472d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d56:{NFSU2_TR(0x472d56);
u8 U[4];
w4(U+0,u32(0x82c648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d5b:{NFSU2_TR(0x472d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d60ull));
TAIL_STATIC(0x7359a0u,735);
}
B472d60:L472d60:{c.instructions+=1;NFSU2_TR(0x472d60);
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
B472d63:L472d63:{c.instructions+=5;NFSU2_TR(0x472d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472d64:{NFSU2_TR(0x472d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472d65:{NFSU2_TR(0x472d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472d66:{NFSU2_TR(0x472d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B472d67:{NFSU2_TR(0x472d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472d70:L472d70:{c.instructions+=3;NFSU2_TR(0x472d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472d71:{NFSU2_TR(0x472d71);
__builtin_memmove((R+24),(R+4),4);
}
B472d73:{NFSU2_TR(0x472d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472d78ull));
TAIL_STATIC(0x45e350u,45e);
}
B472d78:L472d78:{c.instructions+=28;NFSU2_TR(0x472d78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B472d7a:{NFSU2_TR(0x472d7a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472d7d:{NFSU2_TR(0x472d7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472d83:{NFSU2_TR(0x472d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d89:{NFSU2_TR(0x472d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d8f:{NFSU2_TR(0x472d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d95:{NFSU2_TR(0x472d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472d9b:{NFSU2_TR(0x472d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472da1:{NFSU2_TR(0x472da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472da7:{NFSU2_TR(0x472da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dad:{NFSU2_TR(0x472dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472db3:{NFSU2_TR(0x472db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472db9:{NFSU2_TR(0x472db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dbf:{NFSU2_TR(0x472dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dc5:{NFSU2_TR(0x472dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dcb:{NFSU2_TR(0x472dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dd1:{NFSU2_TR(0x472dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dd7:{NFSU2_TR(0x472dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ddd:{NFSU2_TR(0x472ddd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472de3:{NFSU2_TR(0x472de3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472de9:{NFSU2_TR(0x472de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472def:{NFSU2_TR(0x472def);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B472df3:{NFSU2_TR(0x472df3);
u8 U[4];
w4(U+0,u32(0x78acf8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B472df9:{NFSU2_TR(0x472df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472dff:{NFSU2_TR(0x472dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472e05:{NFSU2_TR(0x472e05);
__builtin_memmove((R+0),(R+24),4);
}
B472e07:{NFSU2_TR(0x472e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472e08:{NFSU2_TR(0x472e08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472e10:L472e10:{c.instructions+=7;NFSU2_TR(0x472e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e11:{NFSU2_TR(0x472e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B472e15:{NFSU2_TR(0x472e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472e17:{NFSU2_TR(0x472e17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e18:{NFSU2_TR(0x472e18);
__builtin_memmove((R+28),(R+4),4);
}
B472e1a:{NFSU2_TR(0x472e1a);
__builtin_memmove((R+4),(R+24),4);
}
B472e1c:{NFSU2_TR(0x472e1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472e1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472e1f:L472e1f:{c.instructions+=5;NFSU2_TR(0x472e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B472e21:{NFSU2_TR(0x472e21);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B472e24:{NFSU2_TR(0x472e24);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B472e29:{NFSU2_TR(0x472e29);
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
B472e2a:{NFSU2_TR(0x472e2a);
if(r1(R+518)){{goto L472e40;}}
}
B472e2c:L472e2c:{c.instructions+=3;NFSU2_TR(0x472e2c);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e31:{NFSU2_TR(0x472e31);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e33:{NFSU2_TR(0x472e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472e38ull));
TAIL_STATIC(0x4691c0u,469);
}
B472e38:L472e38:{c.instructions+=4;NFSU2_TR(0x472e38);
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
B472e3b:{NFSU2_TR(0x472e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472e3c:{NFSU2_TR(0x472e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472e3d:{NFSU2_TR(0x472e3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472e40:L472e40:{c.instructions+=4;NFSU2_TR(0x472e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472e46:{NFSU2_TR(0x472e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472e47:{NFSU2_TR(0x472e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472e48:{NFSU2_TR(0x472e48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472e50:L472e50:{c.instructions+=13;NFSU2_TR(0x472e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472e56:{NFSU2_TR(0x472e56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e58:{NFSU2_TR(0x472e58);
u8 U[4];
w4(U+0,u32(0x772566ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e5d:{NFSU2_TR(0x472e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e5e:{NFSU2_TR(0x472e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472e65:{NFSU2_TR(0x472e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B472e68:{NFSU2_TR(0x472e68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e69:{NFSU2_TR(0x472e69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e6a:{NFSU2_TR(0x472e6a);
__builtin_memmove((R+20),(R+4),4);
}
B472e6c:{NFSU2_TR(0x472e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472e72:{NFSU2_TR(0x472e72);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B472e74:{NFSU2_TR(0x472e74);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B472e76:{NFSU2_TR(0x472e76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L472e9e;}}
}
B472e78:L472e78:{c.instructions+=3;NFSU2_TR(0x472e78);
u8 U[4];
w4(U+0,u32(0x78ad40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e7d:{NFSU2_TR(0x472e7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e7f:{NFSU2_TR(0x472e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472e84ull));
TAIL_STATIC(0x4691c0u,469);
}
B472e84:L472e84:{c.instructions+=8;NFSU2_TR(0x472e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B472e87:{NFSU2_TR(0x472e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B472e8d:{NFSU2_TR(0x472e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B472e8e:{NFSU2_TR(0x472e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472e8f:{NFSU2_TR(0x472e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472e93:{NFSU2_TR(0x472e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472e9a:{NFSU2_TR(0x472e9a);
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
B472e9d:{NFSU2_TR(0x472e9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B472e9e:L472e9e:{c.instructions+=5;NFSU2_TR(0x472e9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472e9f:{NFSU2_TR(0x472e9f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472ea3:{NFSU2_TR(0x472ea3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ea4:{NFSU2_TR(0x472ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ea5:{NFSU2_TR(0x472ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472eaaull));
TAIL_STATIC(0x734df0u,734);
}
B472eaa:L472eaa:{c.instructions+=2;NFSU2_TR(0x472eaa);
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
B472ead:{NFSU2_TR(0x472ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472eb2ull));
TAIL_STATIC(0x734e40u,734);
}
B472eb2:L472eb2:{c.instructions+=9;NFSU2_TR(0x472eb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472eb6:{NFSU2_TR(0x472eb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472eba:{NFSU2_TR(0x472eba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ebb:{NFSU2_TR(0x472ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ebf:{NFSU2_TR(0x472ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ec3:{NFSU2_TR(0x472ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ec7:{NFSU2_TR(0x472ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472ec9:{NFSU2_TR(0x472ec9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ecb:{NFSU2_TR(0x472ecb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472ecdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B472ecd:L472ecd:{c.instructions+=2;NFSU2_TR(0x472ecd);
__builtin_memmove((R+24),(R+0),4);
}
B472ecf:{NFSU2_TR(0x472ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472ed4ull));
TAIL_STATIC(0x734e60u,734);
}
B472ed4:L472ed4:{c.instructions+=4;NFSU2_TR(0x472ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ed8:{NFSU2_TR(0x472ed8);
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
B472eda:{NFSU2_TR(0x472eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ede:{NFSU2_TR(0x472ede);
if(r1(R+518)){{goto L472f2e;}}
}
B472ee0:L472ee0:{c.instructions+=12;NFSU2_TR(0x472ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472ee3:{NFSU2_TR(0x472ee3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ee4:{NFSU2_TR(0x472ee4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472ee5:{NFSU2_TR(0x472ee5);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472eea:{NFSU2_TR(0x472eea);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B472ef0:{NFSU2_TR(0x472ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ef3:{NFSU2_TR(0x472ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ef6:{NFSU2_TR(0x472ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ef9:{NFSU2_TR(0x472ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472efc:{NFSU2_TR(0x472efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472eff:{NFSU2_TR(0x472eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f02:{NFSU2_TR(0x472f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f07ull));
TAIL_STATIC(0x7358c0u,735);
}
B472f07:L472f07:{c.instructions+=3;NFSU2_TR(0x472f07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472f0a:{NFSU2_TR(0x472f0a);
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
B472f0c:{NFSU2_TR(0x472f0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L472f30;}}
}
B472f0e:L472f0e:{c.instructions+=3;NFSU2_TR(0x472f0e);
u8 U[4];
w4(U+0,u32(0x7edd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f13:{NFSU2_TR(0x472f13);
w4(R+4,u32(0x82c540ull));
}
B472f18:{NFSU2_TR(0x472f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f1dull));
TAIL_STATIC(0x735840u,735);
}
B472f1d:L472f1d:{c.instructions+=4;NFSU2_TR(0x472f1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f1e:{NFSU2_TR(0x472f1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f1f:{NFSU2_TR(0x472f1f);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f24:{NFSU2_TR(0x472f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f29ull));
TAIL_STATIC(0x7358c0u,735);
}
B472f29:L472f29:{c.instructions+=2;NFSU2_TR(0x472f29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472f2c:{NFSU2_TR(0x472f2c);
{goto L472f30;}
}
B472f2e:L472f2e:{c.instructions+=1;NFSU2_TR(0x472f2e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B472f30:L472f30:{c.instructions+=5;NFSU2_TR(0x472f30);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B472f34:{NFSU2_TR(0x472f34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f35:{NFSU2_TR(0x472f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B472f3d:{NFSU2_TR(0x472f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f43:{NFSU2_TR(0x472f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f48ull));
TAIL_STATIC(0x734df0u,734);
}
B472f48:L472f48:{c.instructions+=2;NFSU2_TR(0x472f48);
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
B472f4b:{NFSU2_TR(0x472f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f50ull));
TAIL_STATIC(0x734e40u,734);
}
B472f50:L472f50:{c.instructions+=9;NFSU2_TR(0x472f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472f54:{NFSU2_TR(0x472f54);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B472f58:{NFSU2_TR(0x472f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f59:{NFSU2_TR(0x472f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f5d:{NFSU2_TR(0x472f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f61:{NFSU2_TR(0x472f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f65:{NFSU2_TR(0x472f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472f67:{NFSU2_TR(0x472f67);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f69:{NFSU2_TR(0x472f69);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f6bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B472f6b:L472f6b:{c.instructions+=2;NFSU2_TR(0x472f6b);
__builtin_memmove((R+24),(R+0),4);
}
B472f6d:{NFSU2_TR(0x472f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472f72ull));
TAIL_STATIC(0x734e60u,734);
}
B472f72:L472f72:{c.instructions+=4;NFSU2_TR(0x472f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f76:{NFSU2_TR(0x472f76);
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
B472f78:{NFSU2_TR(0x472f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B472f80:{NFSU2_TR(0x472f80);
if(r1(R+518)){{goto L472fd0;}}
}
B472f82:L472f82:{c.instructions+=12;NFSU2_TR(0x472f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472f85:{NFSU2_TR(0x472f85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f86:{NFSU2_TR(0x472f86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f87:{NFSU2_TR(0x472f87);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472f8c:{NFSU2_TR(0x472f8c);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B472f92:{NFSU2_TR(0x472f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f95:{NFSU2_TR(0x472f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f98:{NFSU2_TR(0x472f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f9b:{NFSU2_TR(0x472f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472f9e:{NFSU2_TR(0x472f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472fa1:{NFSU2_TR(0x472fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472fa4:{NFSU2_TR(0x472fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472fa9ull));
TAIL_STATIC(0x7358c0u,735);
}
B472fa9:L472fa9:{c.instructions+=3;NFSU2_TR(0x472fa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B472fac:{NFSU2_TR(0x472fac);
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
B472fae:{NFSU2_TR(0x472fae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L472fd2;}}
}
B472fb0:L472fb0:{c.instructions+=3;NFSU2_TR(0x472fb0);
u8 U[4];
w4(U+0,u32(0x7edd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472fb5:{NFSU2_TR(0x472fb5);
w4(R+4,u32(0x82c540ull));
}
B472fba:{NFSU2_TR(0x472fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472fbfull));
TAIL_STATIC(0x735840u,735);
}
B472fbf:L472fbf:{c.instructions+=4;NFSU2_TR(0x472fbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472fc0:{NFSU2_TR(0x472fc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472fc1:{NFSU2_TR(0x472fc1);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B472fc6:{NFSU2_TR(0x472fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472fcbull));
TAIL_STATIC(0x7358c0u,735);
}
B472fcb:L472fcb:{c.instructions+=2;NFSU2_TR(0x472fcb);
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
B472fce:{NFSU2_TR(0x472fce);
{goto L472fd2;}
}
B472fd0:L472fd0:{c.instructions+=1;NFSU2_TR(0x472fd0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B472fd2:L472fd2:{c.instructions+=5;NFSU2_TR(0x472fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472fd8:{NFSU2_TR(0x472fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472fde:{NFSU2_TR(0x472fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B472fe0:{NFSU2_TR(0x472fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B472fe8:{NFSU2_TR(0x472fe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472febull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B472feb:L472feb:{c.instructions+=8;NFSU2_TR(0x472feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B472fee:{NFSU2_TR(0x472fee);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B472ff2:{NFSU2_TR(0x472ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B472ff3:{NFSU2_TR(0x472ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B472ff4:{NFSU2_TR(0x472ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B472ffa:{NFSU2_TR(0x472ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B472ffb:{NFSU2_TR(0x472ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B472ffc:{NFSU2_TR(0x472ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x473003u,473);
}
XIT:NFSU2_TR_EXIT(0x472,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
