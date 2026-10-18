#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6ac(u8* __restrict R,Cpu& c);
u32 body_6be(u8* __restrict R,Cpu& c);
u32 body_6bf(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c0(u8* __restrict R,Cpu& c);
u32 page_6c0(Cpu& c){return body_6c0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c0001:goto L6c0001;
case 0x6c0006:goto L6c0006;
case 0x6c0008:c.instructions+=1;goto B6c0008;
case 0x6c000d:goto L6c000d;
case 0x6c0012:goto L6c0012;
case 0x6c0014:c.instructions+=1;goto B6c0014;
case 0x6c0019:goto L6c0019;
case 0x6c001e:goto L6c001e;
case 0x6c0023:c.instructions+=1;goto B6c0023;
case 0x6c0029:goto L6c0029;
case 0x6c002e:c.instructions+=1;goto B6c002e;
case 0x6c0030:goto L6c0030;
case 0x6c0035:c.instructions+=1;goto B6c0035;
case 0x6c003b:goto L6c003b;
case 0x6c0040:c.instructions+=1;goto B6c0040;
case 0x6c0042:goto L6c0042;
case 0x6c0047:c.instructions+=1;goto B6c0047;
case 0x6c0049:goto L6c0049;
case 0x6c004e:c.instructions+=1;goto B6c004e;
case 0x6c0050:goto L6c0050;
case 0x6c0055:c.instructions+=1;goto B6c0055;
case 0x6c005b:goto L6c005b;
case 0x6c005d:c.instructions+=1;goto B6c005d;
case 0x6c0062:goto L6c0062;
case 0x6c0067:goto L6c0067;
case 0x6c0069:c.instructions+=1;goto B6c0069;
case 0x6c006e:goto L6c006e;
case 0x6c0073:goto L6c0073;
case 0x6c0075:c.instructions+=1;goto B6c0075;
case 0x6c007a:goto L6c007a;
case 0x6c007f:goto L6c007f;
case 0x6c0081:c.instructions+=1;goto B6c0081;
case 0x6c0086:goto L6c0086;
case 0x6c008b:goto L6c008b;
case 0x6c008d:c.instructions+=1;goto B6c008d;
case 0x6c0092:goto L6c0092;
case 0x6c0097:goto L6c0097;
case 0x6c009c:c.instructions+=2;goto B6c009c;
case 0x6c009e:c.instructions+=1;goto B6c009e;
case 0x6c00a4:goto L6c00a4;
case 0x6c00a6:goto L6c00a6;
case 0x6c00ab:c.instructions+=1;goto B6c00ab;
case 0x6c00ad:goto L6c00ad;
case 0x6c00b2:c.instructions+=1;goto B6c00b2;
case 0x6c00b4:goto L6c00b4;
case 0x6c00b9:c.instructions+=1;goto B6c00b9;
case 0x6c00bb:goto L6c00bb;
case 0x6c00c0:c.instructions+=1;goto B6c00c0;
case 0x6c00c6:goto L6c00c6;
case 0x6c00cb:c.instructions+=1;goto B6c00cb;
case 0x6c00cd:goto L6c00cd;
case 0x6c00d2:c.instructions+=1;goto B6c00d2;
case 0x6c00d4:goto L6c00d4;
case 0x6c00d9:c.instructions+=1;goto B6c00d9;
case 0x6c00df:goto L6c00df;
case 0x6c00e1:c.instructions+=1;goto B6c00e1;
case 0x6c00e6:goto L6c00e6;
case 0x6c00eb:goto L6c00eb;
case 0x6c00ed:c.instructions+=1;goto B6c00ed;
case 0x6c00f2:goto L6c00f2;
case 0x6c00f7:goto L6c00f7;
case 0x6c00f9:c.instructions+=1;goto B6c00f9;
case 0x6c00fe:goto L6c00fe;
case 0x6c0103:goto L6c0103;
case 0x6c0105:c.instructions+=1;goto B6c0105;
case 0x6c010a:goto L6c010a;
case 0x6c010f:goto L6c010f;
case 0x6c0111:c.instructions+=1;goto B6c0111;
case 0x6c0116:goto L6c0116;
case 0x6c011b:goto L6c011b;
case 0x6c011d:c.instructions+=1;goto B6c011d;
case 0x6c0122:goto L6c0122;
case 0x6c0127:goto L6c0127;
case 0x6c012c:c.instructions+=1;goto B6c012c;
case 0x6c012e:goto L6c012e;
case 0x6c0133:c.instructions+=1;goto B6c0133;
case 0x6c0135:goto L6c0135;
case 0x6c013a:c.instructions+=1;goto B6c013a;
case 0x6c013c:goto L6c013c;
case 0x6c0141:c.instructions+=1;goto B6c0141;
case 0x6c0143:goto L6c0143;
case 0x6c0148:c.instructions+=1;goto B6c0148;
case 0x6c014a:goto L6c014a;
case 0x6c014f:c.instructions+=1;goto B6c014f;
case 0x6c0155:goto L6c0155;
case 0x6c0157:c.instructions+=1;goto B6c0157;
case 0x6c015c:goto L6c015c;
case 0x6c0161:goto L6c0161;
case 0x6c0163:c.instructions+=1;goto B6c0163;
case 0x6c0168:goto L6c0168;
case 0x6c016d:goto L6c016d;
case 0x6c016f:c.instructions+=1;goto B6c016f;
case 0x6c0174:goto L6c0174;
case 0x6c0179:goto L6c0179;
case 0x6c017b:c.instructions+=1;goto B6c017b;
case 0x6c0180:goto L6c0180;
case 0x6c0185:goto L6c0185;
case 0x6c0187:c.instructions+=1;goto B6c0187;
case 0x6c018c:goto L6c018c;
case 0x6c0191:goto L6c0191;
case 0x6c0196:c.instructions+=2;goto B6c0196;
case 0x6c0198:c.instructions+=1;goto B6c0198;
case 0x6c019e:goto L6c019e;
case 0x6c01a4:goto L6c01a4;
case 0x6c01a9:c.instructions+=2;goto B6c01a9;
case 0x6c01ab:c.instructions+=1;goto B6c01ab;
case 0x6c01ad:goto L6c01ad;
case 0x6c01b3:goto L6c01b3;
case 0x6c01b8:c.instructions+=1;goto B6c01b8;
case 0x6c01ba:goto L6c01ba;
case 0x6c01bf:c.instructions+=1;goto B6c01bf;
case 0x6c01c1:goto L6c01c1;
case 0x6c01c6:c.instructions+=1;goto B6c01c6;
case 0x6c01c8:goto L6c01c8;
case 0x6c01cd:c.instructions+=1;goto B6c01cd;
case 0x6c01cf:goto L6c01cf;
case 0x6c01d4:c.instructions+=1;goto B6c01d4;
case 0x6c01d6:goto L6c01d6;
case 0x6c01db:c.instructions+=1;goto B6c01db;
case 0x6c01e1:goto L6c01e1;
case 0x6c01e6:c.instructions+=1;goto B6c01e6;
case 0x6c01ec:goto L6c01ec;
case 0x6c01ee:goto L6c01ee;
case 0x6c01f0:c.instructions+=1;goto B6c01f0;
case 0x6c01f5:goto L6c01f5;
case 0x6c01fa:goto L6c01fa;
case 0x6c01fc:c.instructions+=1;goto B6c01fc;
case 0x6c01fe:goto L6c01fe;
case 0x6c0200:c.instructions+=1;goto B6c0200;
case 0x6c0205:goto L6c0205;
case 0x6c020a:goto L6c020a;
case 0x6c020c:c.instructions+=1;goto B6c020c;
case 0x6c0211:goto L6c0211;
case 0x6c0216:goto L6c0216;
case 0x6c0218:c.instructions+=1;goto B6c0218;
case 0x6c021d:goto L6c021d;
case 0x6c0222:goto L6c0222;
case 0x6c0227:c.instructions+=1;goto B6c0227;
case 0x6c0229:goto L6c0229;
case 0x6c022e:c.instructions+=1;goto B6c022e;
case 0x6c0230:goto L6c0230;
case 0x6c0235:c.instructions+=1;goto B6c0235;
case 0x6c0237:goto L6c0237;
case 0x6c023c:c.instructions+=1;goto B6c023c;
case 0x6c023e:goto L6c023e;
case 0x6c0243:c.instructions+=1;goto B6c0243;
case 0x6c0245:goto L6c0245;
case 0x6c024a:c.instructions+=1;goto B6c024a;
case 0x6c0250:goto L6c0250;
case 0x6c0252:c.instructions+=1;goto B6c0252;
case 0x6c0257:goto L6c0257;
case 0x6c025c:goto L6c025c;
case 0x6c025e:c.instructions+=1;goto B6c025e;
case 0x6c0263:goto L6c0263;
case 0x6c0268:goto L6c0268;
case 0x6c026a:c.instructions+=1;goto B6c026a;
case 0x6c026f:goto L6c026f;
case 0x6c0274:goto L6c0274;
case 0x6c0279:c.instructions+=2;goto B6c0279;
case 0x6c027b:c.instructions+=1;goto B6c027b;
case 0x6c027d:goto L6c027d;
case 0x6c027f:goto L6c027f;
case 0x6c0284:c.instructions+=1;goto B6c0284;
case 0x6c0286:goto L6c0286;
case 0x6c028b:c.instructions+=1;goto B6c028b;
case 0x6c028d:goto L6c028d;
case 0x6c0292:c.instructions+=1;goto B6c0292;
case 0x6c0294:goto L6c0294;
case 0x6c0299:c.instructions+=1;goto B6c0299;
case 0x6c029b:goto L6c029b;
case 0x6c02a0:c.instructions+=1;goto B6c02a0;
case 0x6c02a2:goto L6c02a2;
case 0x6c02a7:c.instructions+=1;goto B6c02a7;
case 0x6c02a9:goto L6c02a9;
case 0x6c02ae:c.instructions+=1;goto B6c02ae;
case 0x6c02b4:goto L6c02b4;
case 0x6c02b6:c.instructions+=1;goto B6c02b6;
case 0x6c02bb:goto L6c02bb;
case 0x6c02bd:goto L6c02bd;
case 0x6c02bf:c.instructions+=1;goto B6c02bf;
case 0x6c02c4:goto L6c02c4;
case 0x6c02c6:goto L6c02c6;
case 0x6c02c8:c.instructions+=1;goto B6c02c8;
case 0x6c02cd:goto L6c02cd;
case 0x6c02cf:goto L6c02cf;
case 0x6c02d4:c.instructions+=1;goto B6c02d4;
case 0x6c02d6:goto L6c02d6;
case 0x6c02db:c.instructions+=1;goto B6c02db;
case 0x6c02dd:goto L6c02dd;
case 0x6c02e2:c.instructions+=1;goto B6c02e2;
case 0x6c02e4:goto L6c02e4;
case 0x6c02e9:c.instructions+=1;goto B6c02e9;
case 0x6c02eb:goto L6c02eb;
case 0x6c02f0:c.instructions+=1;goto B6c02f0;
case 0x6c02f2:goto L6c02f2;
case 0x6c02f7:c.instructions+=1;goto B6c02f7;
case 0x6c02f9:goto L6c02f9;
case 0x6c02fb:c.instructions+=1;goto B6c02fb;
case 0x6c0300:goto L6c0300;
case 0x6c0302:goto L6c0302;
case 0x6c0304:c.instructions+=1;goto B6c0304;
case 0x6c0309:goto L6c0309;
case 0x6c030b:goto L6c030b;
case 0x6c030f:c.instructions+=1;goto B6c030f;
case 0x6c0311:goto L6c0311;
case 0x6c0313:c.instructions+=1;goto B6c0313;
case 0x6c0318:goto L6c0318;
case 0x6c031a:goto L6c031a;
case 0x6c031f:goto L6c031f;
case 0x6c0324:c.instructions+=1;goto B6c0324;
case 0x6c0326:goto L6c0326;
case 0x6c0327:c.instructions+=2;goto B6c0327;
case 0x6c032a:c.instructions+=1;goto B6c032a;
case 0x6c0330:goto L6c0330;
case 0x6c0332:goto L6c0332;
case 0x6c0333:c.instructions+=3;goto B6c0333;
case 0x6c0334:c.instructions+=2;goto B6c0334;
case 0x6c0335:c.instructions+=1;goto B6c0335;
case 0x6c0336:goto L6c0336;
case 0x6c033c:c.instructions+=5;goto B6c033c;
case 0x6c0341:c.instructions+=4;goto B6c0341;
case 0x6c0346:c.instructions+=3;goto B6c0346;
case 0x6c0349:c.instructions+=2;goto B6c0349;
case 0x6c034a:c.instructions+=1;goto B6c034a;
case 0x6c034f:goto L6c034f;
case 0x6c0352:c.instructions+=2;goto B6c0352;
case 0x6c0357:c.instructions+=1;goto B6c0357;
case 0x6c0359:goto L6c0359;
case 0x6c035b:c.instructions+=3;goto B6c035b;
case 0x6c035c:c.instructions+=2;goto B6c035c;
case 0x6c035e:c.instructions+=1;goto B6c035e;
case 0x6c0363:goto L6c0363;
case 0x6c036a:c.instructions+=4;goto B6c036a;
case 0x6c0370:c.instructions+=3;goto B6c0370;
case 0x6c0372:c.instructions+=2;goto B6c0372;
case 0x6c0373:c.instructions+=1;goto B6c0373;
case 0x6c0374:goto L6c0374;
case 0x6c0376:c.instructions+=10;goto B6c0376;
case 0x6c0377:c.instructions+=9;goto B6c0377;
case 0x6c0379:c.instructions+=8;goto B6c0379;
case 0x6c037c:c.instructions+=7;goto B6c037c;
case 0x6c037d:c.instructions+=6;goto B6c037d;
case 0x6c0380:c.instructions+=5;goto B6c0380;
case 0x6c0381:c.instructions+=4;goto B6c0381;
case 0x6c0383:c.instructions+=3;goto B6c0383;
case 0x6c0388:c.instructions+=2;goto B6c0388;
case 0x6c038a:c.instructions+=1;goto B6c038a;
case 0x6c038f:goto L6c038f;
case 0x6c0392:c.instructions+=16;goto B6c0392;
case 0x6c0396:c.instructions+=15;goto B6c0396;
case 0x6c039a:c.instructions+=14;goto B6c039a;
case 0x6c03a0:c.instructions+=13;goto B6c03a0;
case 0x6c03a2:c.instructions+=12;goto B6c03a2;
case 0x6c03a3:c.instructions+=11;goto B6c03a3;
case 0x6c03a6:c.instructions+=10;goto B6c03a6;
case 0x6c03a9:c.instructions+=9;goto B6c03a9;
case 0x6c03ac:c.instructions+=8;goto B6c03ac;
case 0x6c03b1:c.instructions+=7;goto B6c03b1;
case 0x6c03b6:c.instructions+=6;goto B6c03b6;
case 0x6c03b9:c.instructions+=5;goto B6c03b9;
case 0x6c03c0:c.instructions+=4;goto B6c03c0;
case 0x6c03c2:c.instructions+=3;goto B6c03c2;
case 0x6c03c3:c.instructions+=2;goto B6c03c3;
case 0x6c03c4:c.instructions+=1;goto B6c03c4;
case 0x6c03c5:goto L6c03c5;
case 0x6c03c7:c.instructions+=10;goto B6c03c7;
case 0x6c03c8:c.instructions+=9;goto B6c03c8;
case 0x6c03ca:c.instructions+=8;goto B6c03ca;
case 0x6c03cd:c.instructions+=7;goto B6c03cd;
case 0x6c03ce:c.instructions+=6;goto B6c03ce;
case 0x6c03d1:c.instructions+=5;goto B6c03d1;
case 0x6c03d4:c.instructions+=4;goto B6c03d4;
case 0x6c03d7:c.instructions+=3;goto B6c03d7;
case 0x6c03da:c.instructions+=2;goto B6c03da;
case 0x6c03dd:c.instructions+=1;goto B6c03dd;
case 0x6c03df:goto L6c03df;
case 0x6c03e1:goto L6c03e1;
case 0x6c03e6:goto L6c03e6;
case 0x6c03eb:goto L6c03eb;
case 0x6c03ed:c.instructions+=2;goto B6c03ed;
case 0x6c03f3:c.instructions+=1;goto B6c03f3;
case 0x6c03f5:goto L6c03f5;
case 0x6c03f7:c.instructions+=1;goto B6c03f7;
case 0x6c03f9:goto L6c03f9;
case 0x6c03fb:c.instructions+=1;goto B6c03fb;
case 0x6c03fd:goto L6c03fd;
case 0x6c03ff:c.instructions+=1;goto B6c03ff;
case 0x6c0401:goto L6c0401;
case 0x6c0403:c.instructions+=1;goto B6c0403;
case 0x6c0405:goto L6c0405;
case 0x6c0407:c.instructions+=1;goto B6c0407;
case 0x6c0409:goto L6c0409;
case 0x6c040b:c.instructions+=1;goto B6c040b;
case 0x6c040d:goto L6c040d;
case 0x6c040e:c.instructions+=5;goto B6c040e;
case 0x6c0413:c.instructions+=4;goto B6c0413;
case 0x6c0415:c.instructions+=3;goto B6c0415;
case 0x6c0417:c.instructions+=2;goto B6c0417;
case 0x6c0419:c.instructions+=1;goto B6c0419;
case 0x6c041b:goto L6c041b;
case 0x6c041d:goto L6c041d;
case 0x6c0422:goto L6c0422;
case 0x6c0424:goto L6c0424;
case 0x6c0429:c.instructions+=4;goto B6c0429;
case 0x6c042b:c.instructions+=3;goto B6c042b;
case 0x6c042d:c.instructions+=2;goto B6c042d;
case 0x6c042f:c.instructions+=1;goto B6c042f;
case 0x6c0431:goto L6c0431;
case 0x6c0433:c.instructions+=1;goto B6c0433;
case 0x6c0435:goto L6c0435;
case 0x6c0437:c.instructions+=1;goto B6c0437;
case 0x6c0439:goto L6c0439;
case 0x6c043b:c.instructions+=1;goto B6c043b;
case 0x6c043d:goto L6c043d;
case 0x6c043f:c.instructions+=1;goto B6c043f;
case 0x6c0441:goto L6c0441;
case 0x6c0443:c.instructions+=1;goto B6c0443;
case 0x6c0445:goto L6c0445;
case 0x6c0447:c.instructions+=1;goto B6c0447;
case 0x6c0449:goto L6c0449;
case 0x6c044b:c.instructions+=1;goto B6c044b;
case 0x6c044d:goto L6c044d;
case 0x6c044f:c.instructions+=1;goto B6c044f;
case 0x6c0451:goto L6c0451;
case 0x6c0453:c.instructions+=1;goto B6c0453;
case 0x6c0455:goto L6c0455;
case 0x6c045a:c.instructions+=1;goto B6c045a;
case 0x6c045c:goto L6c045c;
case 0x6c045f:c.instructions+=7;goto B6c045f;
case 0x6c0462:c.instructions+=6;goto B6c0462;
case 0x6c0465:c.instructions+=5;goto B6c0465;
case 0x6c046a:c.instructions+=4;goto B6c046a;
case 0x6c046f:c.instructions+=3;goto B6c046f;
case 0x6c0472:c.instructions+=2;goto B6c0472;
case 0x6c0473:c.instructions+=1;goto B6c0473;
case 0x6c0478:goto L6c0478;
case 0x6c047b:goto L6c047b;
case 0x6c0480:goto L6c0480;
case 0x6c0481:goto L6c0481;
case 0x6c0482:c.instructions+=2;goto B6c0482;
case 0x6c0483:c.instructions+=1;goto B6c0483;
case 0x6c0486:goto L6c0486;
case 0x6c0488:c.instructions+=6;goto B6c0488;
case 0x6c0489:c.instructions+=5;goto B6c0489;
case 0x6c048b:c.instructions+=4;goto B6c048b;
case 0x6c048c:c.instructions+=3;goto B6c048c;
case 0x6c048e:c.instructions+=2;goto B6c048e;
case 0x6c0490:c.instructions+=1;goto B6c0490;
case 0x6c0495:goto L6c0495;
case 0x6c0497:c.instructions+=1;goto B6c0497;
case 0x6c0499:goto L6c0499;
case 0x6c049f:c.instructions+=8;goto B6c049f;
case 0x6c04a5:c.instructions+=7;goto B6c04a5;
case 0x6c04a7:c.instructions+=6;goto B6c04a7;
case 0x6c04aa:c.instructions+=5;goto B6c04aa;
case 0x6c04ad:c.instructions+=4;goto B6c04ad;
case 0x6c04b0:c.instructions+=3;goto B6c04b0;
case 0x6c04b4:c.instructions+=2;goto B6c04b4;
case 0x6c04b7:c.instructions+=1;goto B6c04b7;
case 0x6c04b9:goto L6c04b9;
case 0x6c04ba:c.instructions+=2;goto B6c04ba;
case 0x6c04bb:c.instructions+=1;goto B6c04bb;
case 0x6c04be:goto L6c04be;
case 0x6c04c0:c.instructions+=12;goto B6c04c0;
case 0x6c04c1:c.instructions+=11;goto B6c04c1;
case 0x6c04c3:c.instructions+=10;goto B6c04c3;
case 0x6c04c6:c.instructions+=9;goto B6c04c6;
case 0x6c04c8:c.instructions+=8;goto B6c04c8;
case 0x6c04ce:c.instructions+=7;goto B6c04ce;
case 0x6c04cf:c.instructions+=6;goto B6c04cf;
case 0x6c04d1:c.instructions+=5;goto B6c04d1;
case 0x6c04d7:c.instructions+=4;goto B6c04d7;
case 0x6c04dd:c.instructions+=3;goto B6c04dd;
case 0x6c04e0:c.instructions+=2;goto B6c04e0;
case 0x6c04e3:c.instructions+=1;goto B6c04e3;
case 0x6c04e5:goto L6c04e5;
case 0x6c04e8:c.instructions+=2;goto B6c04e8;
case 0x6c04ec:c.instructions+=1;goto B6c04ec;
case 0x6c04ee:goto L6c04ee;
case 0x6c04f3:c.instructions+=3;goto B6c04f3;
case 0x6c04f5:c.instructions+=2;goto B6c04f5;
case 0x6c04f8:c.instructions+=1;goto B6c04f8;
case 0x6c04fa:goto L6c04fa;
case 0x6c04fc:c.instructions+=1;goto B6c04fc;
case 0x6c0501:goto L6c0501;
case 0x6c0502:c.instructions+=3;goto B6c0502;
case 0x6c0505:c.instructions+=2;goto B6c0505;
case 0x6c0509:c.instructions+=1;goto B6c0509;
case 0x6c050b:goto L6c050b;
case 0x6c050d:c.instructions+=1;goto B6c050d;
case 0x6c0512:goto L6c0512;
case 0x6c0515:c.instructions+=6;goto B6c0515;
case 0x6c0516:c.instructions+=5;goto B6c0516;
case 0x6c0518:c.instructions+=4;goto B6c0518;
case 0x6c051b:c.instructions+=3;goto B6c051b;
case 0x6c051e:c.instructions+=2;goto B6c051e;
case 0x6c051f:c.instructions+=1;goto B6c051f;
case 0x6c0524:goto L6c0524;
case 0x6c0527:c.instructions+=4;goto B6c0527;
case 0x6c052b:c.instructions+=3;goto B6c052b;
case 0x6c052f:c.instructions+=2;goto B6c052f;
case 0x6c0532:c.instructions+=1;goto B6c0532;
case 0x6c0534:goto L6c0534;
case 0x6c0537:c.instructions+=2;goto B6c0537;
case 0x6c0538:c.instructions+=1;goto B6c0538;
case 0x6c053d:goto L6c053d;
case 0x6c053f:c.instructions+=2;goto B6c053f;
case 0x6c0540:c.instructions+=1;goto B6c0540;
case 0x6c0542:goto L6c0542;
case 0x6c0543:c.instructions+=2;goto B6c0543;
case 0x6c0546:c.instructions+=1;goto B6c0546;
case 0x6c0548:goto L6c0548;
case 0x6c054b:c.instructions+=1;goto B6c054b;
case 0x6c054d:goto L6c054d;
case 0x6c054e:c.instructions+=1;goto B6c054e;
case 0x6c0553:goto L6c0553;
case 0x6c0554:c.instructions+=1;goto B6c0554;
case 0x6c0556:goto L6c0556;
case 0x6c0559:c.instructions+=1;goto B6c0559;
case 0x6c055b:goto L6c055b;
case 0x6c055e:c.instructions+=1;goto B6c055e;
case 0x6c055f:goto L6c055f;
case 0x6c0561:c.instructions+=2;goto B6c0561;
case 0x6c0563:c.instructions+=1;goto B6c0563;
case 0x6c0565:goto L6c0565;
case 0x6c0568:c.instructions+=2;goto B6c0568;
case 0x6c0569:c.instructions+=1;goto B6c0569;
case 0x6c056e:goto L6c056e;
case 0x6c0570:c.instructions+=2;goto B6c0570;
case 0x6c0571:c.instructions+=1;goto B6c0571;
case 0x6c0573:goto L6c0573;
case 0x6c0574:c.instructions+=3;goto B6c0574;
case 0x6c0576:c.instructions+=2;goto B6c0576;
case 0x6c0578:c.instructions+=1;goto B6c0578;
case 0x6c057a:goto L6c057a;
case 0x6c057d:c.instructions+=1;goto B6c057d;
case 0x6c057f:goto L6c057f;
case 0x6c0582:c.instructions+=1;goto B6c0582;
case 0x6c0584:goto L6c0584;
case 0x6c0587:c.instructions+=2;goto B6c0587;
case 0x6c058a:c.instructions+=1;goto B6c058a;
case 0x6c058c:goto L6c058c;
case 0x6c058f:c.instructions+=6;goto B6c058f;
case 0x6c0592:c.instructions+=5;goto B6c0592;
case 0x6c0595:c.instructions+=4;goto B6c0595;
case 0x6c0598:c.instructions+=3;goto B6c0598;
case 0x6c059b:c.instructions+=2;goto B6c059b;
case 0x6c059d:c.instructions+=1;goto B6c059d;
case 0x6c059f:goto L6c059f;
case 0x6c05a2:c.instructions+=1;goto B6c05a2;
case 0x6c05a4:goto L6c05a4;
case 0x6c05a7:c.instructions+=3;goto B6c05a7;
case 0x6c05ac:c.instructions+=2;goto B6c05ac;
case 0x6c05ad:c.instructions+=1;goto B6c05ad;
case 0x6c05b2:goto L6c05b2;
case 0x6c05b4:c.instructions+=3;goto B6c05b4;
case 0x6c05b5:c.instructions+=2;goto B6c05b5;
case 0x6c05b6:c.instructions+=1;goto B6c05b6;
case 0x6c05b8:goto L6c05b8;
case 0x6c05bf:goto L6c05bf;
case 0x6c05c2:c.instructions+=3;goto B6c05c2;
case 0x6c05c4:c.instructions+=2;goto B6c05c4;
case 0x6c05c5:c.instructions+=1;goto B6c05c5;
case 0x6c05c7:goto L6c05c7;
case 0x6c05ca:c.instructions+=3;goto B6c05ca;
case 0x6c05cf:c.instructions+=2;goto B6c05cf;
case 0x6c05d0:c.instructions+=1;goto B6c05d0;
case 0x6c05d5:goto L6c05d5;
case 0x6c05d7:c.instructions+=3;goto B6c05d7;
case 0x6c05d8:c.instructions+=2;goto B6c05d8;
case 0x6c05d9:c.instructions+=1;goto B6c05d9;
case 0x6c05db:goto L6c05db;
case 0x6c05e2:c.instructions+=1;goto B6c05e2;
case 0x6c05e4:goto L6c05e4;
case 0x6c05e8:c.instructions+=2;goto B6c05e8;
case 0x6c05ea:c.instructions+=1;goto B6c05ea;
case 0x6c05eb:goto L6c05eb;
case 0x6c05ed:c.instructions+=1;goto B6c05ed;
case 0x6c05ef:goto L6c05ef;
case 0x6c05f3:c.instructions+=1;goto B6c05f3;
case 0x6c05f5:goto L6c05f5;
case 0x6c05f6:c.instructions+=4;goto B6c05f6;
case 0x6c05f9:c.instructions+=3;goto B6c05f9;
case 0x6c05fa:c.instructions+=2;goto B6c05fa;
case 0x6c05ff:c.instructions+=1;goto B6c05ff;
case 0x6c0601:goto L6c0601;
case 0x6c0603:c.instructions+=1;goto B6c0603;
case 0x6c0605:goto L6c0605;
case 0x6c0608:c.instructions+=3;goto B6c0608;
case 0x6c060d:c.instructions+=2;goto B6c060d;
case 0x6c060e:c.instructions+=1;goto B6c060e;
case 0x6c0613:goto L6c0613;
case 0x6c0615:c.instructions+=3;goto B6c0615;
case 0x6c0616:c.instructions+=2;goto B6c0616;
case 0x6c0617:c.instructions+=1;goto B6c0617;
case 0x6c0619:goto L6c0619;
case 0x6c061a:c.instructions+=5;goto B6c061a;
case 0x6c061c:c.instructions+=4;goto B6c061c;
case 0x6c061e:c.instructions+=3;goto B6c061e;
case 0x6c0621:c.instructions+=2;goto B6c0621;
case 0x6c0622:c.instructions+=1;goto B6c0622;
case 0x6c0624:goto L6c0624;
case 0x6c0628:c.instructions+=2;goto B6c0628;
case 0x6c062a:c.instructions+=1;goto B6c062a;
case 0x6c062b:goto L6c062b;
case 0x6c062d:c.instructions+=1;goto B6c062d;
case 0x6c062f:goto L6c062f;
case 0x6c0633:c.instructions+=1;goto B6c0633;
case 0x6c0635:goto L6c0635;
case 0x6c0636:c.instructions+=3;goto B6c0636;
case 0x6c0639:c.instructions+=2;goto B6c0639;
case 0x6c063a:c.instructions+=1;goto B6c063a;
case 0x6c063f:goto L6c063f;
case 0x6c0644:c.instructions+=3;goto B6c0644;
case 0x6c0647:c.instructions+=2;goto B6c0647;
case 0x6c064a:c.instructions+=1;goto B6c064a;
case 0x6c064f:goto L6c064f;
case 0x6c0652:goto L6c0652;
case 0x6c0655:c.instructions+=2;goto B6c0655;
case 0x6c0657:c.instructions+=1;goto B6c0657;
case 0x6c0659:goto L6c0659;
case 0x6c065c:c.instructions+=2;goto B6c065c;
case 0x6c065e:c.instructions+=1;goto B6c065e;
case 0x6c065f:goto L6c065f;
case 0x6c0665:c.instructions+=1;goto B6c0665;
case 0x6c0667:goto L6c0667;
case 0x6c0669:c.instructions+=1;goto B6c0669;
case 0x6c066a:goto L6c066a;
case 0x6c0670:c.instructions+=9;goto B6c0670;
case 0x6c0675:c.instructions+=8;goto B6c0675;
case 0x6c0678:c.instructions+=7;goto B6c0678;
case 0x6c067a:c.instructions+=6;goto B6c067a;
case 0x6c067c:c.instructions+=5;goto B6c067c;
case 0x6c067e:c.instructions+=4;goto B6c067e;
case 0x6c0680:c.instructions+=3;goto B6c0680;
case 0x6c0683:c.instructions+=2;goto B6c0683;
case 0x6c0688:c.instructions+=1;goto B6c0688;
case 0x6c0689:goto L6c0689;
case 0x6c068a:goto L6c068a;
case 0x6c068b:c.instructions+=2;goto B6c068b;
case 0x6c068c:c.instructions+=1;goto B6c068c;
case 0x6c068f:goto L6c068f;
case 0x6c0691:c.instructions+=6;goto B6c0691;
case 0x6c0692:c.instructions+=5;goto B6c0692;
case 0x6c0694:c.instructions+=4;goto B6c0694;
case 0x6c0695:c.instructions+=3;goto B6c0695;
case 0x6c0697:c.instructions+=2;goto B6c0697;
case 0x6c069d:c.instructions+=1;goto B6c069d;
case 0x6c06a2:goto L6c06a2;
case 0x6c06a6:c.instructions+=1;goto B6c06a6;
case 0x6c06a8:goto L6c06a8;
case 0x6c06a9:c.instructions+=1;goto B6c06a9;
case 0x6c06ae:goto L6c06ae;
case 0x6c06af:goto L6c06af;
case 0x6c06b1:c.instructions+=3;goto B6c06b1;
case 0x6c06b2:c.instructions+=2;goto B6c06b2;
case 0x6c06b3:c.instructions+=1;goto B6c06b3;
case 0x6c06b6:goto L6c06b6;
case 0x6c06b8:c.instructions+=13;goto B6c06b8;
case 0x6c06b9:c.instructions+=12;goto B6c06b9;
case 0x6c06bb:c.instructions+=11;goto B6c06bb;
case 0x6c06bc:c.instructions+=10;goto B6c06bc;
case 0x6c06bf:c.instructions+=9;goto B6c06bf;
case 0x6c06c0:c.instructions+=8;goto B6c06c0;
case 0x6c06c1:c.instructions+=7;goto B6c06c1;
case 0x6c06c3:c.instructions+=6;goto B6c06c3;
case 0x6c06c6:c.instructions+=5;goto B6c06c6;
case 0x6c06c9:c.instructions+=4;goto B6c06c9;
case 0x6c06cc:c.instructions+=3;goto B6c06cc;
case 0x6c06cf:c.instructions+=2;goto B6c06cf;
case 0x6c06d2:c.instructions+=1;goto B6c06d2;
case 0x6c06d4:goto L6c06d4;
case 0x6c06d5:c.instructions+=3;goto B6c06d5;
case 0x6c06d6:c.instructions+=2;goto B6c06d6;
case 0x6c06d8:c.instructions+=1;goto B6c06d8;
case 0x6c06dd:goto L6c06dd;
case 0x6c06df:c.instructions+=1;goto B6c06df;
case 0x6c06e1:goto L6c06e1;
case 0x6c06e2:c.instructions+=2;goto B6c06e2;
case 0x6c06e4:c.instructions+=1;goto B6c06e4;
case 0x6c06e9:goto L6c06e9;
case 0x6c06eb:c.instructions+=1;goto B6c06eb;
case 0x6c06ed:goto L6c06ed;
case 0x6c06f0:c.instructions+=5;goto B6c06f0;
case 0x6c06f3:c.instructions+=4;goto B6c06f3;
case 0x6c06f6:c.instructions+=3;goto B6c06f6;
case 0x6c06f7:c.instructions+=2;goto B6c06f7;
case 0x6c06f9:c.instructions+=1;goto B6c06f9;
case 0x6c06fe:goto L6c06fe;
case 0x6c0700:c.instructions+=1;goto B6c0700;
case 0x6c0702:goto L6c0702;
case 0x6c0707:c.instructions+=1;goto B6c0707;
case 0x6c0709:goto L6c0709;
case 0x6c070f:c.instructions+=3;goto B6c070f;
case 0x6c0712:c.instructions+=2;goto B6c0712;
case 0x6c0714:c.instructions+=1;goto B6c0714;
case 0x6c0716:goto L6c0716;
case 0x6c0717:c.instructions+=4;goto B6c0717;
case 0x6c0718:c.instructions+=3;goto B6c0718;
case 0x6c0719:c.instructions+=2;goto B6c0719;
case 0x6c071a:c.instructions+=1;goto B6c071a;
case 0x6c071d:goto L6c071d;
case 0x6c071f:c.instructions+=19;goto B6c071f;
case 0x6c0720:c.instructions+=18;goto B6c0720;
case 0x6c0722:c.instructions+=17;goto B6c0722;
case 0x6c0728:c.instructions+=16;goto B6c0728;
case 0x6c072c:c.instructions+=15;goto B6c072c;
case 0x6c072e:c.instructions+=14;goto B6c072e;
case 0x6c072f:c.instructions+=13;goto B6c072f;
case 0x6c0730:c.instructions+=12;goto B6c0730;
case 0x6c0733:c.instructions+=11;goto B6c0733;
case 0x6c0734:c.instructions+=10;goto B6c0734;
case 0x6c0735:c.instructions+=9;goto B6c0735;
case 0x6c0736:c.instructions+=8;goto B6c0736;
case 0x6c0738:c.instructions+=7;goto B6c0738;
case 0x6c073b:c.instructions+=6;goto B6c073b;
case 0x6c073c:c.instructions+=5;goto B6c073c;
case 0x6c073d:c.instructions+=4;goto B6c073d;
case 0x6c073f:c.instructions+=3;goto B6c073f;
case 0x6c0743:c.instructions+=2;goto B6c0743;
case 0x6c0744:c.instructions+=1;goto B6c0744;
case 0x6c0746:goto L6c0746;
case 0x6c0748:c.instructions+=2;goto B6c0748;
case 0x6c0749:c.instructions+=1;goto B6c0749;
case 0x6c074e:goto L6c074e;
case 0x6c0751:c.instructions+=2;goto B6c0751;
case 0x6c0753:c.instructions+=1;goto B6c0753;
case 0x6c0758:goto L6c0758;
case 0x6c075a:c.instructions+=2;goto B6c075a;
case 0x6c075d:c.instructions+=1;goto B6c075d;
case 0x6c0763:goto L6c0763;
case 0x6c0765:c.instructions+=6;goto B6c0765;
case 0x6c076a:c.instructions+=5;goto B6c076a;
case 0x6c076f:c.instructions+=4;goto B6c076f;
case 0x6c0772:c.instructions+=3;goto B6c0772;
case 0x6c0774:c.instructions+=2;goto B6c0774;
case 0x6c0777:c.instructions+=1;goto B6c0777;
case 0x6c077c:goto L6c077c;
case 0x6c077e:c.instructions+=2;goto B6c077e;
case 0x6c0781:c.instructions+=1;goto B6c0781;
case 0x6c0787:goto L6c0787;
case 0x6c078a:c.instructions+=17;goto B6c078a;
case 0x6c078e:c.instructions+=16;goto B6c078e;
case 0x6c0792:c.instructions+=15;goto B6c0792;
case 0x6c0795:c.instructions+=14;goto B6c0795;
case 0x6c0796:c.instructions+=13;goto B6c0796;
case 0x6c0797:c.instructions+=12;goto B6c0797;
case 0x6c0798:c.instructions+=11;goto B6c0798;
case 0x6c0799:c.instructions+=10;goto B6c0799;
case 0x6c079b:c.instructions+=9;goto B6c079b;
case 0x6c079e:c.instructions+=8;goto B6c079e;
case 0x6c079f:c.instructions+=7;goto B6c079f;
case 0x6c07a0:c.instructions+=6;goto B6c07a0;
case 0x6c07a1:c.instructions+=5;goto B6c07a1;
case 0x6c07a2:c.instructions+=4;goto B6c07a2;
case 0x6c07a5:c.instructions+=3;goto B6c07a5;
case 0x6c07a7:c.instructions+=2;goto B6c07a7;
case 0x6c07a8:c.instructions+=1;goto B6c07a8;
case 0x6c07ae:goto L6c07ae;
case 0x6c07b1:c.instructions+=2;goto B6c07b1;
case 0x6c07b4:c.instructions+=1;goto B6c07b4;
case 0x6c07b7:goto L6c07b7;
case 0x6c07b9:c.instructions+=3;goto B6c07b9;
case 0x6c07bc:c.instructions+=2;goto B6c07bc;
case 0x6c07be:c.instructions+=1;goto B6c07be;
case 0x6c07c0:goto L6c07c0;
case 0x6c07c3:c.instructions+=3;goto B6c07c3;
case 0x6c07c4:c.instructions+=2;goto B6c07c4;
case 0x6c07c7:c.instructions+=1;goto B6c07c7;
case 0x6c07c9:goto L6c07c9;
case 0x6c07cc:c.instructions+=1;goto B6c07cc;
case 0x6c07ce:goto L6c07ce;
case 0x6c07d4:c.instructions+=1;goto B6c07d4;
case 0x6c07d6:goto L6c07d6;
case 0x6c07d9:c.instructions+=3;goto B6c07d9;
case 0x6c07da:c.instructions+=2;goto B6c07da;
case 0x6c07dd:c.instructions+=1;goto B6c07dd;
case 0x6c07df:goto L6c07df;
case 0x6c07e2:goto L6c07e2;
case 0x6c07e8:c.instructions+=1;goto B6c07e8;
case 0x6c07ea:goto L6c07ea;
case 0x6c07ed:c.instructions+=2;goto B6c07ed;
case 0x6c07f0:c.instructions+=1;goto B6c07f0;
case 0x6c07f2:goto L6c07f2;
case 0x6c07f5:goto L6c07f5;
case 0x6c07fb:c.instructions+=1;goto B6c07fb;
case 0x6c07fd:goto L6c07fd;
case 0x6c0800:c.instructions+=2;goto B6c0800;
case 0x6c0803:c.instructions+=1;goto B6c0803;
case 0x6c0805:goto L6c0805;
case 0x6c0808:goto L6c0808;
case 0x6c080e:c.instructions+=1;goto B6c080e;
case 0x6c0810:goto L6c0810;
case 0x6c0813:c.instructions+=2;goto B6c0813;
case 0x6c0816:c.instructions+=1;goto B6c0816;
case 0x6c0818:goto L6c0818;
case 0x6c081b:goto L6c081b;
case 0x6c0821:c.instructions+=1;goto B6c0821;
case 0x6c0823:goto L6c0823;
case 0x6c0826:c.instructions+=2;goto B6c0826;
case 0x6c0829:c.instructions+=1;goto B6c0829;
case 0x6c082b:goto L6c082b;
case 0x6c082e:goto L6c082e;
case 0x6c0834:c.instructions+=1;goto B6c0834;
case 0x6c0836:goto L6c0836;
case 0x6c0839:c.instructions+=2;goto B6c0839;
case 0x6c083c:c.instructions+=1;goto B6c083c;
case 0x6c083e:goto L6c083e;
case 0x6c0841:goto L6c0841;
case 0x6c0847:c.instructions+=1;goto B6c0847;
case 0x6c0849:goto L6c0849;
case 0x6c084c:c.instructions+=2;goto B6c084c;
case 0x6c084f:c.instructions+=1;goto B6c084f;
case 0x6c0851:goto L6c0851;
case 0x6c0854:goto L6c0854;
case 0x6c0857:c.instructions+=2;goto B6c0857;
case 0x6c085a:c.instructions+=1;goto B6c085a;
case 0x6c0860:goto L6c0860;
case 0x6c0866:c.instructions+=6;goto B6c0866;
case 0x6c086a:c.instructions+=5;goto B6c086a;
case 0x6c086d:c.instructions+=4;goto B6c086d;
case 0x6c0873:c.instructions+=3;goto B6c0873;
case 0x6c0876:c.instructions+=2;goto B6c0876;
case 0x6c087c:c.instructions+=1;goto B6c087c;
case 0x6c087f:goto L6c087f;
case 0x6c0882:c.instructions+=2;goto B6c0882;
case 0x6c0887:c.instructions+=1;goto B6c0887;
case 0x6c088d:goto L6c088d;
case 0x6c0891:c.instructions+=4;goto B6c0891;
case 0x6c0895:c.instructions+=3;goto B6c0895;
case 0x6c0896:c.instructions+=2;goto B6c0896;
case 0x6c0897:c.instructions+=1;goto B6c0897;
case 0x6c089c:goto L6c089c;
case 0x6c089e:c.instructions+=3;goto B6c089e;
case 0x6c089f:c.instructions+=2;goto B6c089f;
case 0x6c08a2:c.instructions+=1;goto B6c08a2;
case 0x6c08a8:goto L6c08a8;
case 0x6c08ab:c.instructions+=4;goto B6c08ab;
case 0x6c08ad:c.instructions+=3;goto B6c08ad;
case 0x6c08af:c.instructions+=2;goto B6c08af;
case 0x6c08b2:c.instructions+=1;goto B6c08b2;
case 0x6c08b4:goto L6c08b4;
case 0x6c08b6:goto L6c08b6;
case 0x6c08b8:c.instructions+=1;goto B6c08b8;
case 0x6c08bb:goto L6c08bb;
case 0x6c08bd:goto L6c08bd;
case 0x6c08bf:c.instructions+=2;goto B6c08bf;
case 0x6c08c2:c.instructions+=1;goto B6c08c2;
case 0x6c08c4:goto L6c08c4;
case 0x6c08c7:c.instructions+=1;goto B6c08c7;
case 0x6c08cb:goto L6c08cb;
case 0x6c08ce:c.instructions+=3;goto B6c08ce;
case 0x6c08d1:c.instructions+=2;goto B6c08d1;
case 0x6c08d4:c.instructions+=1;goto B6c08d4;
case 0x6c08d6:goto L6c08d6;
case 0x6c08d9:c.instructions+=4;goto B6c08d9;
case 0x6c08dc:c.instructions+=3;goto B6c08dc;
case 0x6c08e0:c.instructions+=2;goto B6c08e0;
case 0x6c08e3:c.instructions+=1;goto B6c08e3;
case 0x6c08e7:goto L6c08e7;
case 0x6c08e8:c.instructions+=2;goto B6c08e8;
case 0x6c08eb:c.instructions+=1;goto B6c08eb;
case 0x6c08ed:goto L6c08ed;
case 0x6c08ef:c.instructions+=3;goto B6c08ef;
case 0x6c08f1:c.instructions+=2;goto B6c08f1;
case 0x6c08f4:c.instructions+=1;goto B6c08f4;
case 0x6c08f6:goto L6c08f6;
case 0x6c08f9:c.instructions+=1;goto B6c08f9;
case 0x6c08fb:goto L6c08fb;
case 0x6c08ff:c.instructions+=1;goto B6c08ff;
case 0x6c0901:goto L6c0901;
case 0x6c0902:goto L6c0902;
case 0x6c0904:c.instructions+=1;goto B6c0904;
case 0x6c0906:goto L6c0906;
case 0x6c0909:c.instructions+=1;goto B6c0909;
case 0x6c090b:goto L6c090b;
case 0x6c090f:c.instructions+=1;goto B6c090f;
case 0x6c0911:goto L6c0911;
case 0x6c0912:goto L6c0912;
case 0x6c0914:c.instructions+=1;goto B6c0914;
case 0x6c0916:goto L6c0916;
case 0x6c0917:c.instructions+=2;goto B6c0917;
case 0x6c0919:c.instructions+=1;goto B6c0919;
case 0x6c091b:goto L6c091b;
case 0x6c091e:c.instructions+=3;goto B6c091e;
case 0x6c0921:c.instructions+=2;goto B6c0921;
case 0x6c0922:c.instructions+=1;goto B6c0922;
case 0x6c0927:goto L6c0927;
case 0x6c0929:c.instructions+=4;goto B6c0929;
case 0x6c092c:c.instructions+=3;goto B6c092c;
case 0x6c092d:c.instructions+=2;goto B6c092d;
case 0x6c0931:c.instructions+=1;goto B6c0931;
case 0x6c0937:goto L6c0937;
case 0x6c0939:c.instructions+=2;goto B6c0939;
case 0x6c093b:c.instructions+=1;goto B6c093b;
case 0x6c093d:goto L6c093d;
case 0x6c093f:goto L6c093f;
case 0x6c0942:c.instructions+=2;goto B6c0942;
case 0x6c0946:c.instructions+=1;goto B6c0946;
case 0x6c0948:goto L6c0948;
case 0x6c0949:goto L6c0949;
case 0x6c094b:c.instructions+=1;goto B6c094b;
case 0x6c094d:goto L6c094d;
case 0x6c0951:c.instructions+=4;goto B6c0951;
case 0x6c0953:c.instructions+=3;goto B6c0953;
case 0x6c0955:c.instructions+=2;goto B6c0955;
case 0x6c0958:c.instructions+=1;goto B6c0958;
case 0x6c095a:goto L6c095a;
case 0x6c095d:c.instructions+=2;goto B6c095d;
case 0x6c0961:c.instructions+=1;goto B6c0961;
case 0x6c0963:goto L6c0963;
case 0x6c0964:goto L6c0964;
case 0x6c0966:c.instructions+=1;goto B6c0966;
case 0x6c0968:goto L6c0968;
case 0x6c096c:c.instructions+=7;goto B6c096c;
case 0x6c096f:c.instructions+=6;goto B6c096f;
case 0x6c0971:c.instructions+=5;goto B6c0971;
case 0x6c0973:c.instructions+=4;goto B6c0973;
case 0x6c0976:c.instructions+=3;goto B6c0976;
case 0x6c0977:c.instructions+=2;goto B6c0977;
case 0x6c0979:c.instructions+=1;goto B6c0979;
case 0x6c097b:goto L6c097b;
case 0x6c097e:c.instructions+=1;goto B6c097e;
case 0x6c0983:goto L6c0983;
case 0x6c0986:c.instructions+=2;goto B6c0986;
case 0x6c0987:c.instructions+=1;goto B6c0987;
case 0x6c098b:goto L6c098b;
case 0x6c098f:c.instructions+=2;goto B6c098f;
case 0x6c0993:c.instructions+=1;goto B6c0993;
case 0x6c0999:goto L6c0999;
case 0x6c099c:c.instructions+=3;goto B6c099c;
case 0x6c099f:c.instructions+=2;goto B6c099f;
case 0x6c09a0:c.instructions+=1;goto B6c09a0;
case 0x6c09a5:goto L6c09a5;
case 0x6c09a7:c.instructions+=3;goto B6c09a7;
case 0x6c09a8:c.instructions+=2;goto B6c09a8;
case 0x6c09ab:c.instructions+=1;goto B6c09ab;
case 0x6c09b1:goto L6c09b1;
case 0x6c09b5:c.instructions+=1;goto B6c09b5;
case 0x6c09bb:goto L6c09bb;
case 0x6c09bd:c.instructions+=4;goto B6c09bd;
case 0x6c09c0:c.instructions+=3;goto B6c09c0;
case 0x6c09c2:c.instructions+=2;goto B6c09c2;
case 0x6c09c5:c.instructions+=1;goto B6c09c5;
case 0x6c09c7:goto L6c09c7;
case 0x6c09c9:goto L6c09c9;
case 0x6c09cb:c.instructions+=1;goto B6c09cb;
case 0x6c09ce:goto L6c09ce;
case 0x6c09d0:goto L6c09d0;
case 0x6c09d2:c.instructions+=3;goto B6c09d2;
case 0x6c09d4:c.instructions+=2;goto B6c09d4;
case 0x6c09d7:c.instructions+=1;goto B6c09d7;
case 0x6c09dd:goto L6c09dd;
case 0x6c09e0:c.instructions+=4;goto B6c09e0;
case 0x6c09e3:c.instructions+=3;goto B6c09e3;
case 0x6c09e6:c.instructions+=2;goto B6c09e6;
case 0x6c09e9:c.instructions+=1;goto B6c09e9;
case 0x6c09eb:goto L6c09eb;
case 0x6c09ef:c.instructions+=1;goto B6c09ef;
case 0x6c09f1:goto L6c09f1;
case 0x6c09f4:c.instructions+=5;goto B6c09f4;
case 0x6c09f7:c.instructions+=4;goto B6c09f7;
case 0x6c09fa:c.instructions+=3;goto B6c09fa;
case 0x6c09fd:c.instructions+=2;goto B6c09fd;
case 0x6c0a00:c.instructions+=1;goto B6c0a00;
case 0x6c0a03:goto L6c0a03;
case 0x6c0a0d:c.instructions+=1;goto B6c0a0d;
case 0x6c0a0f:goto L6c0a0f;
case 0x6c0a12:c.instructions+=2;goto B6c0a12;
case 0x6c0a18:c.instructions+=1;goto B6c0a18;
case 0x6c0a1a:goto L6c0a1a;
case 0x6c0a1e:c.instructions+=1;goto B6c0a1e;
case 0x6c0a24:goto L6c0a24;
case 0x6c0a27:c.instructions+=3;goto B6c0a27;
case 0x6c0a2d:c.instructions+=2;goto B6c0a2d;
case 0x6c0a30:c.instructions+=1;goto B6c0a30;
case 0x6c0a32:goto L6c0a32;
case 0x6c0a35:c.instructions+=1;goto B6c0a35;
case 0x6c0a37:goto L6c0a37;
case 0x6c0a3a:c.instructions+=1;goto B6c0a3a;
case 0x6c0a3f:goto L6c0a3f;
case 0x6c0a40:goto L6c0a40;
case 0x6c0a47:c.instructions+=1;goto B6c0a47;
case 0x6c0a4c:goto L6c0a4c;
case 0x6c0a4f:c.instructions+=1;goto B6c0a4f;
case 0x6c0a51:goto L6c0a51;
case 0x6c0a58:goto L6c0a58;
case 0x6c0a5e:c.instructions+=1;goto B6c0a5e;
case 0x6c0a60:goto L6c0a60;
case 0x6c0a63:c.instructions+=1;goto B6c0a63;
case 0x6c0a69:goto L6c0a69;
case 0x6c0a6a:c.instructions+=2;goto B6c0a6a;
case 0x6c0a6d:c.instructions+=1;goto B6c0a6d;
case 0x6c0a73:goto L6c0a73;
case 0x6c0a76:c.instructions+=4;goto B6c0a76;
case 0x6c0a78:c.instructions+=3;goto B6c0a78;
case 0x6c0a7b:c.instructions+=2;goto B6c0a7b;
case 0x6c0a7e:c.instructions+=1;goto B6c0a7e;
case 0x6c0a84:goto L6c0a84;
case 0x6c0a87:c.instructions+=11;goto B6c0a87;
case 0x6c0a8a:c.instructions+=10;goto B6c0a8a;
case 0x6c0a8d:c.instructions+=9;goto B6c0a8d;
case 0x6c0a8f:c.instructions+=8;goto B6c0a8f;
case 0x6c0a93:c.instructions+=7;goto B6c0a93;
case 0x6c0a97:c.instructions+=6;goto B6c0a97;
case 0x6c0a99:c.instructions+=5;goto B6c0a99;
case 0x6c0a9c:c.instructions+=4;goto B6c0a9c;
case 0x6c0aa3:c.instructions+=3;goto B6c0aa3;
case 0x6c0aa9:c.instructions+=2;goto B6c0aa9;
case 0x6c0aab:c.instructions+=1;goto B6c0aab;
case 0x6c0ab1:goto L6c0ab1;
case 0x6c0ab4:c.instructions+=12;goto B6c0ab4;
case 0x6c0ab6:c.instructions+=11;goto B6c0ab6;
case 0x6c0ab8:c.instructions+=10;goto B6c0ab8;
case 0x6c0abb:c.instructions+=9;goto B6c0abb;
case 0x6c0abf:c.instructions+=8;goto B6c0abf;
case 0x6c0ac2:c.instructions+=7;goto B6c0ac2;
case 0x6c0ac6:c.instructions+=6;goto B6c0ac6;
case 0x6c0ac9:c.instructions+=5;goto B6c0ac9;
case 0x6c0acb:c.instructions+=4;goto B6c0acb;
case 0x6c0ace:c.instructions+=3;goto B6c0ace;
case 0x6c0ad1:c.instructions+=2;goto B6c0ad1;
case 0x6c0ad4:c.instructions+=1;goto B6c0ad4;
case 0x6c0ad6:goto L6c0ad6;
case 0x6c0ad9:c.instructions+=1;goto B6c0ad9;
case 0x6c0adc:goto L6c0adc;
case 0x6c0adf:c.instructions+=13;goto B6c0adf;
case 0x6c0ae1:c.instructions+=12;goto B6c0ae1;
case 0x6c0ae4:c.instructions+=11;goto B6c0ae4;
case 0x6c0ae7:c.instructions+=10;goto B6c0ae7;
case 0x6c0aea:c.instructions+=9;goto B6c0aea;
case 0x6c0aed:c.instructions+=8;goto B6c0aed;
case 0x6c0af0:c.instructions+=7;goto B6c0af0;
case 0x6c0af4:c.instructions+=6;goto B6c0af4;
case 0x6c0af6:c.instructions+=5;goto B6c0af6;
case 0x6c0af9:c.instructions+=4;goto B6c0af9;
case 0x6c0afc:c.instructions+=3;goto B6c0afc;
case 0x6c0aff:c.instructions+=2;goto B6c0aff;
case 0x6c0b02:c.instructions+=1;goto B6c0b02;
case 0x6c0b04:goto L6c0b04;
case 0x6c0b07:c.instructions+=1;goto B6c0b07;
case 0x6c0b09:goto L6c0b09;
case 0x6c0b0c:c.instructions+=1;goto B6c0b0c;
case 0x6c0b0e:goto L6c0b0e;
case 0x6c0b11:c.instructions+=5;goto B6c0b11;
case 0x6c0b12:c.instructions+=4;goto B6c0b12;
case 0x6c0b15:c.instructions+=3;goto B6c0b15;
case 0x6c0b18:c.instructions+=2;goto B6c0b18;
case 0x6c0b1b:c.instructions+=1;goto B6c0b1b;
case 0x6c0b1e:goto L6c0b1e;
case 0x6c0b20:c.instructions+=5;goto B6c0b20;
case 0x6c0b23:c.instructions+=4;goto B6c0b23;
case 0x6c0b26:c.instructions+=3;goto B6c0b26;
case 0x6c0b29:c.instructions+=2;goto B6c0b29;
case 0x6c0b2c:c.instructions+=1;goto B6c0b2c;
case 0x6c0b2e:goto L6c0b2e;
case 0x6c0b35:c.instructions+=1;goto B6c0b35;
case 0x6c0b37:goto L6c0b37;
case 0x6c0b3c:goto L6c0b3c;
case 0x6c0b41:c.instructions+=3;goto B6c0b41;
case 0x6c0b42:c.instructions+=2;goto B6c0b42;
case 0x6c0b43:c.instructions+=1;goto B6c0b43;
case 0x6c0b48:goto L6c0b48;
case 0x6c0b4b:c.instructions+=1;goto B6c0b4b;
case 0x6c0b50:goto L6c0b50;
case 0x6c0b55:c.instructions+=1;goto B6c0b55;
case 0x6c0b57:goto L6c0b57;
case 0x6c0b5a:c.instructions+=1;goto B6c0b5a;
case 0x6c0b5d:goto L6c0b5d;
case 0x6c0b60:c.instructions+=2;goto B6c0b60;
case 0x6c0b63:c.instructions+=1;goto B6c0b63;
case 0x6c0b65:goto L6c0b65;
case 0x6c0b69:c.instructions+=1;goto B6c0b69;
case 0x6c0b6f:goto L6c0b6f;
case 0x6c0b73:c.instructions+=1;goto B6c0b73;
case 0x6c0b79:goto L6c0b79;
case 0x6c0b7c:c.instructions+=7;goto B6c0b7c;
case 0x6c0b7e:c.instructions+=6;goto B6c0b7e;
case 0x6c0b7f:c.instructions+=5;goto B6c0b7f;
case 0x6c0b80:c.instructions+=4;goto B6c0b80;
case 0x6c0b82:c.instructions+=3;goto B6c0b82;
case 0x6c0b85:c.instructions+=2;goto B6c0b85;
case 0x6c0b88:c.instructions+=1;goto B6c0b88;
case 0x6c0b8e:goto L6c0b8e;
case 0x6c0b91:c.instructions+=14;goto B6c0b91;
case 0x6c0b93:c.instructions+=13;goto B6c0b93;
case 0x6c0b96:c.instructions+=12;goto B6c0b96;
case 0x6c0b99:c.instructions+=11;goto B6c0b99;
case 0x6c0b9c:c.instructions+=10;goto B6c0b9c;
case 0x6c0b9f:c.instructions+=9;goto B6c0b9f;
case 0x6c0ba2:c.instructions+=8;goto B6c0ba2;
case 0x6c0ba8:c.instructions+=7;goto B6c0ba8;
case 0x6c0bab:c.instructions+=6;goto B6c0bab;
case 0x6c0bae:c.instructions+=5;goto B6c0bae;
case 0x6c0bb1:c.instructions+=4;goto B6c0bb1;
case 0x6c0bb4:c.instructions+=3;goto B6c0bb4;
case 0x6c0bb7:c.instructions+=2;goto B6c0bb7;
case 0x6c0bba:c.instructions+=1;goto B6c0bba;
case 0x6c0bbd:goto L6c0bbd;
case 0x6c0bc0:c.instructions+=6;goto B6c0bc0;
case 0x6c0bc2:c.instructions+=5;goto B6c0bc2;
case 0x6c0bc5:c.instructions+=4;goto B6c0bc5;
case 0x6c0bc8:c.instructions+=3;goto B6c0bc8;
case 0x6c0bcb:c.instructions+=2;goto B6c0bcb;
case 0x6c0bce:c.instructions+=1;goto B6c0bce;
case 0x6c0bd0:goto L6c0bd0;
case 0x6c0bd4:goto L6c0bd4;
case 0x6c0bd7:c.instructions+=6;goto B6c0bd7;
case 0x6c0bd9:c.instructions+=5;goto B6c0bd9;
case 0x6c0bdc:c.instructions+=4;goto B6c0bdc;
case 0x6c0bdf:c.instructions+=3;goto B6c0bdf;
case 0x6c0be2:c.instructions+=2;goto B6c0be2;
case 0x6c0be5:c.instructions+=1;goto B6c0be5;
case 0x6c0be7:goto L6c0be7;
case 0x6c0beb:c.instructions+=1;goto B6c0beb;
case 0x6c0bed:goto L6c0bed;
case 0x6c0bf0:goto L6c0bf0;
case 0x6c0bf4:c.instructions+=3;goto B6c0bf4;
case 0x6c0bf8:c.instructions+=2;goto B6c0bf8;
case 0x6c0bfb:c.instructions+=1;goto B6c0bfb;
case 0x6c0bfd:goto L6c0bfd;
case 0x6c0c01:c.instructions+=1;goto B6c0c01;
case 0x6c0c07:goto L6c0c07;
case 0x6c0c0a:c.instructions+=14;goto B6c0c0a;
case 0x6c0c0c:c.instructions+=13;goto B6c0c0c;
case 0x6c0c0d:c.instructions+=12;goto B6c0c0d;
case 0x6c0c10:c.instructions+=11;goto B6c0c10;
case 0x6c0c13:c.instructions+=10;goto B6c0c13;
case 0x6c0c16:c.instructions+=9;goto B6c0c16;
case 0x6c0c19:c.instructions+=8;goto B6c0c19;
case 0x6c0c1c:c.instructions+=7;goto B6c0c1c;
case 0x6c0c22:c.instructions+=6;goto B6c0c22;
case 0x6c0c25:c.instructions+=5;goto B6c0c25;
case 0x6c0c28:c.instructions+=4;goto B6c0c28;
case 0x6c0c2b:c.instructions+=3;goto B6c0c2b;
case 0x6c0c2e:c.instructions+=2;goto B6c0c2e;
case 0x6c0c35:c.instructions+=1;goto B6c0c35;
case 0x6c0c38:goto L6c0c38;
case 0x6c0c3b:c.instructions+=5;goto B6c0c3b;
case 0x6c0c3d:c.instructions+=4;goto B6c0c3d;
case 0x6c0c40:c.instructions+=3;goto B6c0c40;
case 0x6c0c43:c.instructions+=2;goto B6c0c43;
case 0x6c0c46:c.instructions+=1;goto B6c0c46;
case 0x6c0c48:goto L6c0c48;
case 0x6c0c4c:goto L6c0c4c;
case 0x6c0c4f:c.instructions+=6;goto B6c0c4f;
case 0x6c0c51:c.instructions+=5;goto B6c0c51;
case 0x6c0c54:c.instructions+=4;goto B6c0c54;
case 0x6c0c57:c.instructions+=3;goto B6c0c57;
case 0x6c0c5a:c.instructions+=2;goto B6c0c5a;
case 0x6c0c5d:c.instructions+=1;goto B6c0c5d;
case 0x6c0c5f:goto L6c0c5f;
case 0x6c0c63:c.instructions+=1;goto B6c0c63;
case 0x6c0c65:goto L6c0c65;
case 0x6c0c68:goto L6c0c68;
case 0x6c0c6c:c.instructions+=3;goto B6c0c6c;
case 0x6c0c70:c.instructions+=2;goto B6c0c70;
case 0x6c0c73:c.instructions+=1;goto B6c0c73;
case 0x6c0c75:goto L6c0c75;
case 0x6c0c79:c.instructions+=1;goto B6c0c79;
case 0x6c0c7b:goto L6c0c7b;
case 0x6c0c7f:c.instructions+=2;goto B6c0c7f;
case 0x6c0c81:c.instructions+=1;goto B6c0c81;
case 0x6c0c83:goto L6c0c83;
case 0x6c0c85:c.instructions+=2;goto B6c0c85;
case 0x6c0c88:c.instructions+=1;goto B6c0c88;
case 0x6c0c8b:goto L6c0c8b;
case 0x6c0c8e:c.instructions+=15;goto B6c0c8e;
case 0x6c0c91:c.instructions+=14;goto B6c0c91;
case 0x6c0c94:c.instructions+=13;goto B6c0c94;
case 0x6c0c97:c.instructions+=12;goto B6c0c97;
case 0x6c0c99:c.instructions+=11;goto B6c0c99;
case 0x6c0c9c:c.instructions+=10;goto B6c0c9c;
case 0x6c0c9f:c.instructions+=9;goto B6c0c9f;
case 0x6c0ca2:c.instructions+=8;goto B6c0ca2;
case 0x6c0ca4:c.instructions+=7;goto B6c0ca4;
case 0x6c0ca7:c.instructions+=6;goto B6c0ca7;
case 0x6c0caa:c.instructions+=5;goto B6c0caa;
case 0x6c0cad:c.instructions+=4;goto B6c0cad;
case 0x6c0cb0:c.instructions+=3;goto B6c0cb0;
case 0x6c0cb3:c.instructions+=2;goto B6c0cb3;
case 0x6c0cb6:c.instructions+=1;goto B6c0cb6;
case 0x6c0cb8:goto L6c0cb8;
case 0x6c0cbf:c.instructions+=1;goto B6c0cbf;
case 0x6c0cc1:goto L6c0cc1;
case 0x6c0cc3:c.instructions+=4;goto B6c0cc3;
case 0x6c0cc4:c.instructions+=3;goto B6c0cc4;
case 0x6c0cc6:c.instructions+=2;goto B6c0cc6;
case 0x6c0cc9:c.instructions+=1;goto B6c0cc9;
case 0x6c0ccb:goto L6c0ccb;
case 0x6c0ccf:c.instructions+=2;goto B6c0ccf;
case 0x6c0cd3:c.instructions+=1;goto B6c0cd3;
case 0x6c0cd5:goto L6c0cd5;
case 0x6c0cd8:c.instructions+=3;goto B6c0cd8;
case 0x6c0cdb:c.instructions+=2;goto B6c0cdb;
case 0x6c0cde:c.instructions+=1;goto B6c0cde;
case 0x6c0ce1:goto L6c0ce1;
case 0x6c0ce4:c.instructions+=11;goto B6c0ce4;
case 0x6c0ce8:c.instructions+=10;goto B6c0ce8;
case 0x6c0cea:c.instructions+=9;goto B6c0cea;
case 0x6c0ceb:c.instructions+=8;goto B6c0ceb;
case 0x6c0cee:c.instructions+=7;goto B6c0cee;
case 0x6c0cf1:c.instructions+=6;goto B6c0cf1;
case 0x6c0cf3:c.instructions+=5;goto B6c0cf3;
case 0x6c0cf6:c.instructions+=4;goto B6c0cf6;
case 0x6c0cf9:c.instructions+=3;goto B6c0cf9;
case 0x6c0cfc:c.instructions+=2;goto B6c0cfc;
case 0x6c0cff:c.instructions+=1;goto B6c0cff;
case 0x6c0d01:goto L6c0d01;
case 0x6c0d08:c.instructions+=1;goto B6c0d08;
case 0x6c0d0a:goto L6c0d0a;
case 0x6c0d0c:goto L6c0d0c;
case 0x6c0d0f:c.instructions+=6;goto B6c0d0f;
case 0x6c0d11:c.instructions+=5;goto B6c0d11;
case 0x6c0d14:c.instructions+=4;goto B6c0d14;
case 0x6c0d17:c.instructions+=3;goto B6c0d17;
case 0x6c0d1a:c.instructions+=2;goto B6c0d1a;
case 0x6c0d1d:c.instructions+=1;goto B6c0d1d;
case 0x6c0d1f:goto L6c0d1f;
case 0x6c0d22:c.instructions+=2;goto B6c0d22;
case 0x6c0d25:c.instructions+=1;goto B6c0d25;
case 0x6c0d27:goto L6c0d27;
case 0x6c0d29:c.instructions+=2;goto B6c0d29;
case 0x6c0d2c:c.instructions+=1;goto B6c0d2c;
case 0x6c0d2e:goto L6c0d2e;
case 0x6c0d35:c.instructions+=1;goto B6c0d35;
case 0x6c0d37:goto L6c0d37;
case 0x6c0d3d:goto L6c0d3d;
case 0x6c0d3e:c.instructions+=2;goto B6c0d3e;
case 0x6c0d40:c.instructions+=1;goto B6c0d40;
case 0x6c0d45:goto L6c0d45;
case 0x6c0d4a:goto L6c0d4a;
case 0x6c0d51:c.instructions+=1;goto B6c0d51;
case 0x6c0d57:goto L6c0d57;
case 0x6c0d59:c.instructions+=2;goto B6c0d59;
case 0x6c0d5c:c.instructions+=1;goto B6c0d5c;
case 0x6c0d62:goto L6c0d62;
case 0x6c0d65:c.instructions+=6;goto B6c0d65;
case 0x6c0d68:c.instructions+=5;goto B6c0d68;
case 0x6c0d6b:c.instructions+=4;goto B6c0d6b;
case 0x6c0d6e:c.instructions+=3;goto B6c0d6e;
case 0x6c0d71:c.instructions+=2;goto B6c0d71;
case 0x6c0d75:c.instructions+=1;goto B6c0d75;
case 0x6c0d77:goto L6c0d77;
case 0x6c0d7b:c.instructions+=4;goto B6c0d7b;
case 0x6c0d7d:c.instructions+=3;goto B6c0d7d;
case 0x6c0d7f:c.instructions+=2;goto B6c0d7f;
case 0x6c0d81:c.instructions+=1;goto B6c0d81;
case 0x6c0d83:goto L6c0d83;
case 0x6c0d88:c.instructions+=1;goto B6c0d88;
case 0x6c0d8a:goto L6c0d8a;
case 0x6c0d8f:goto L6c0d8f;
case 0x6c0d94:goto L6c0d94;
case 0x6c0d97:c.instructions+=1;goto B6c0d97;
case 0x6c0d9d:goto L6c0d9d;
case 0x6c0da0:c.instructions+=5;goto B6c0da0;
case 0x6c0da3:c.instructions+=4;goto B6c0da3;
case 0x6c0da4:c.instructions+=3;goto B6c0da4;
case 0x6c0da6:c.instructions+=2;goto B6c0da6;
case 0x6c0da9:c.instructions+=1;goto B6c0da9;
case 0x6c0dae:goto L6c0dae;
case 0x6c0db0:c.instructions+=2;goto B6c0db0;
case 0x6c0db3:c.instructions+=1;goto B6c0db3;
case 0x6c0db9:goto L6c0db9;
case 0x6c0dbc:c.instructions+=10;goto B6c0dbc;
case 0x6c0dbf:c.instructions+=9;goto B6c0dbf;
case 0x6c0dc2:c.instructions+=8;goto B6c0dc2;
case 0x6c0dc5:c.instructions+=7;goto B6c0dc5;
case 0x6c0dc8:c.instructions+=6;goto B6c0dc8;
case 0x6c0dca:c.instructions+=5;goto B6c0dca;
case 0x6c0dcd:c.instructions+=4;goto B6c0dcd;
case 0x6c0dd0:c.instructions+=3;goto B6c0dd0;
case 0x6c0dd3:c.instructions+=2;goto B6c0dd3;
case 0x6c0dd6:c.instructions+=1;goto B6c0dd6;
case 0x6c0dd8:goto L6c0dd8;
case 0x6c0ddb:c.instructions+=2;goto B6c0ddb;
case 0x6c0dde:c.instructions+=1;goto B6c0dde;
case 0x6c0de0:goto L6c0de0;
case 0x6c0de5:goto L6c0de5;
case 0x6c0de7:c.instructions+=2;goto B6c0de7;
case 0x6c0dea:c.instructions+=1;goto B6c0dea;
case 0x6c0df0:goto L6c0df0;
case 0x6c0df2:c.instructions+=1;goto B6c0df2;
case 0x6c0df7:goto L6c0df7;
case 0x6c0df9:c.instructions+=1;goto B6c0df9;
case 0x6c0dfb:goto L6c0dfb;
case 0x6c0dfd:c.instructions+=1;goto B6c0dfd;
case 0x6c0e02:goto L6c0e02;
case 0x6c0e05:c.instructions+=1;goto B6c0e05;
case 0x6c0e07:goto L6c0e07;
case 0x6c0e0b:goto L6c0e0b;
case 0x6c0e0e:c.instructions+=5;goto B6c0e0e;
case 0x6c0e11:c.instructions+=4;goto B6c0e11;
case 0x6c0e14:c.instructions+=3;goto B6c0e14;
case 0x6c0e16:c.instructions+=2;goto B6c0e16;
case 0x6c0e1d:c.instructions+=1;goto B6c0e1d;
case 0x6c0e23:goto L6c0e23;
case 0x6c0e26:c.instructions+=6;goto B6c0e26;
case 0x6c0e28:c.instructions+=5;goto B6c0e28;
case 0x6c0e2a:c.instructions+=4;goto B6c0e2a;
case 0x6c0e2d:c.instructions+=3;goto B6c0e2d;
case 0x6c0e30:c.instructions+=2;goto B6c0e30;
case 0x6c0e31:c.instructions+=1;goto B6c0e31;
case 0x6c0e36:goto L6c0e36;
case 0x6c0e38:c.instructions+=2;goto B6c0e38;
case 0x6c0e3b:c.instructions+=1;goto B6c0e3b;
case 0x6c0e41:goto L6c0e41;
case 0x6c0e44:c.instructions+=2;goto B6c0e44;
case 0x6c0e45:c.instructions+=1;goto B6c0e45;
case 0x6c0e4a:goto L6c0e4a;
case 0x6c0e4c:c.instructions+=2;goto B6c0e4c;
case 0x6c0e4f:c.instructions+=1;goto B6c0e4f;
case 0x6c0e55:goto L6c0e55;
case 0x6c0e58:c.instructions+=9;goto B6c0e58;
case 0x6c0e5b:c.instructions+=8;goto B6c0e5b;
case 0x6c0e5e:c.instructions+=7;goto B6c0e5e;
case 0x6c0e61:c.instructions+=6;goto B6c0e61;
case 0x6c0e65:c.instructions+=5;goto B6c0e65;
case 0x6c0e68:c.instructions+=4;goto B6c0e68;
case 0x6c0e6c:c.instructions+=3;goto B6c0e6c;
case 0x6c0e6f:c.instructions+=2;goto B6c0e6f;
case 0x6c0e71:c.instructions+=1;goto B6c0e71;
case 0x6c0e73:goto L6c0e73;
case 0x6c0e76:goto L6c0e76;
case 0x6c0e79:c.instructions+=13;goto B6c0e79;
case 0x6c0e7c:c.instructions+=12;goto B6c0e7c;
case 0x6c0e7f:c.instructions+=11;goto B6c0e7f;
case 0x6c0e82:c.instructions+=10;goto B6c0e82;
case 0x6c0e85:c.instructions+=9;goto B6c0e85;
case 0x6c0e88:c.instructions+=8;goto B6c0e88;
case 0x6c0e8b:c.instructions+=7;goto B6c0e8b;
case 0x6c0e8d:c.instructions+=6;goto B6c0e8d;
case 0x6c0e90:c.instructions+=5;goto B6c0e90;
case 0x6c0e93:c.instructions+=4;goto B6c0e93;
case 0x6c0e94:c.instructions+=3;goto B6c0e94;
case 0x6c0e97:c.instructions+=2;goto B6c0e97;
case 0x6c0e9a:c.instructions+=1;goto B6c0e9a;
case 0x6c0e9c:goto L6c0e9c;
case 0x6c0e9f:c.instructions+=2;goto B6c0e9f;
case 0x6c0ea1:c.instructions+=1;goto B6c0ea1;
case 0x6c0ea6:goto L6c0ea6;
case 0x6c0ea9:c.instructions+=2;goto B6c0ea9;
case 0x6c0eab:c.instructions+=1;goto B6c0eab;
case 0x6c0eb0:goto L6c0eb0;
case 0x6c0eb3:c.instructions+=2;goto B6c0eb3;
case 0x6c0eb6:c.instructions+=1;goto B6c0eb6;
case 0x6c0ebc:goto L6c0ebc;
case 0x6c0ebf:c.instructions+=4;goto B6c0ebf;
case 0x6c0ec2:c.instructions+=3;goto B6c0ec2;
case 0x6c0ec5:c.instructions+=2;goto B6c0ec5;
case 0x6c0ec8:c.instructions+=1;goto B6c0ec8;
case 0x6c0ece:goto L6c0ece;
case 0x6c0ed0:goto L6c0ed0;
case 0x6c0ed2:c.instructions+=1;goto B6c0ed2;
case 0x6c0ed7:goto L6c0ed7;
case 0x6c0edd:c.instructions+=3;goto B6c0edd;
case 0x6c0edf:c.instructions+=2;goto B6c0edf;
case 0x6c0ee1:c.instructions+=1;goto B6c0ee1;
case 0x6c0ee6:goto L6c0ee6;
case 0x6c0ee8:c.instructions+=2;goto B6c0ee8;
case 0x6c0eeb:c.instructions+=1;goto B6c0eeb;
case 0x6c0ef1:goto L6c0ef1;
case 0x6c0ef7:c.instructions+=1;goto B6c0ef7;
case 0x6c0efd:goto L6c0efd;
case 0x6c0f00:c.instructions+=10;goto B6c0f00;
case 0x6c0f03:c.instructions+=9;goto B6c0f03;
case 0x6c0f06:c.instructions+=8;goto B6c0f06;
case 0x6c0f08:c.instructions+=7;goto B6c0f08;
case 0x6c0f0c:c.instructions+=6;goto B6c0f0c;
case 0x6c0f0f:c.instructions+=5;goto B6c0f0f;
case 0x6c0f14:c.instructions+=4;goto B6c0f14;
case 0x6c0f19:c.instructions+=3;goto B6c0f19;
case 0x6c0f1a:c.instructions+=2;goto B6c0f1a;
case 0x6c0f1c:c.instructions+=1;goto B6c0f1c;
case 0x6c0f21:goto L6c0f21;
case 0x6c0f26:c.instructions+=2;goto B6c0f26;
case 0x6c0f28:c.instructions+=1;goto B6c0f28;
case 0x6c0f2d:goto L6c0f2d;
case 0x6c0f2f:c.instructions+=2;goto B6c0f2f;
case 0x6c0f32:c.instructions+=1;goto B6c0f32;
case 0x6c0f38:goto L6c0f38;
case 0x6c0f3a:goto L6c0f3a;
case 0x6c0f3e:c.instructions+=3;goto B6c0f3e;
case 0x6c0f41:c.instructions+=2;goto B6c0f41;
case 0x6c0f43:c.instructions+=1;goto B6c0f43;
case 0x6c0f45:goto L6c0f45;
case 0x6c0f47:c.instructions+=1;goto B6c0f47;
case 0x6c0f49:goto L6c0f49;
case 0x6c0f4a:goto L6c0f4a;
case 0x6c0f4f:goto L6c0f4f;
case 0x6c0f50:c.instructions+=2;goto B6c0f50;
case 0x6c0f53:c.instructions+=1;goto B6c0f53;
case 0x6c0f55:goto L6c0f55;
case 0x6c0f57:goto L6c0f57;
case 0x6c0f5b:c.instructions+=2;goto B6c0f5b;
case 0x6c0f5e:c.instructions+=1;goto B6c0f5e;
case 0x6c0f60:goto L6c0f60;
case 0x6c0f62:c.instructions+=1;goto B6c0f62;
case 0x6c0f64:goto L6c0f64;
case 0x6c0f68:c.instructions+=3;goto B6c0f68;
case 0x6c0f6a:c.instructions+=2;goto B6c0f6a;
case 0x6c0f6b:c.instructions+=1;goto B6c0f6b;
case 0x6c0f6c:goto L6c0f6c;
case 0x6c0f6e:c.instructions+=1;goto B6c0f6e;
case 0x6c0f73:goto L6c0f73;
case 0x6c0f76:c.instructions+=2;goto B6c0f76;
case 0x6c0f79:c.instructions+=1;goto B6c0f79;
case 0x6c0f7b:goto L6c0f7b;
case 0x6c0f7c:c.instructions+=2;goto B6c0f7c;
case 0x6c0f7e:c.instructions+=1;goto B6c0f7e;
case 0x6c0f83:goto L6c0f83;
case 0x6c0f85:c.instructions+=2;goto B6c0f85;
case 0x6c0f87:c.instructions+=1;goto B6c0f87;
case 0x6c0f89:goto L6c0f89;
case 0x6c0f8c:c.instructions+=3;goto B6c0f8c;
case 0x6c0f8f:c.instructions+=2;goto B6c0f8f;
case 0x6c0f91:c.instructions+=1;goto B6c0f91;
case 0x6c0f96:goto L6c0f96;
case 0x6c0f99:c.instructions+=3;goto B6c0f99;
case 0x6c0f9d:c.instructions+=2;goto B6c0f9d;
case 0x6c0f9f:c.instructions+=1;goto B6c0f9f;
case 0x6c0fa4:goto L6c0fa4;
case 0x6c0fa5:c.instructions+=2;goto B6c0fa5;
case 0x6c0fa7:c.instructions+=1;goto B6c0fa7;
case 0x6c0fa9:goto L6c0fa9;
case 0x6c0fac:c.instructions+=2;goto B6c0fac;
case 0x6c0fae:c.instructions+=1;goto B6c0fae;
case 0x6c0fb3:goto L6c0fb3;
case 0x6c0fb5:c.instructions+=2;goto B6c0fb5;
case 0x6c0fb8:c.instructions+=1;goto B6c0fb8;
case 0x6c0fba:goto L6c0fba;
case 0x6c0fbd:goto L6c0fbd;
case 0x6c0fc0:c.instructions+=2;goto B6c0fc0;
case 0x6c0fc2:c.instructions+=1;goto B6c0fc2;
case 0x6c0fc7:goto L6c0fc7;
case 0x6c0fcb:c.instructions+=2;goto B6c0fcb;
case 0x6c0fcd:c.instructions+=1;goto B6c0fcd;
case 0x6c0fd2:goto L6c0fd2;
case 0x6c0fd3:c.instructions+=2;goto B6c0fd3;
case 0x6c0fd6:c.instructions+=1;goto B6c0fd6;
case 0x6c0fd8:goto L6c0fd8;
case 0x6c0fdb:c.instructions+=2;goto B6c0fdb;
case 0x6c0fdd:c.instructions+=1;goto B6c0fdd;
case 0x6c0fe2:goto L6c0fe2;
case 0x6c0fe4:c.instructions+=2;goto B6c0fe4;
case 0x6c0fe7:c.instructions+=1;goto B6c0fe7;
case 0x6c0fe9:goto L6c0fe9;
case 0x6c0fec:c.instructions+=3;goto B6c0fec;
case 0x6c0fef:c.instructions+=2;goto B6c0fef;
case 0x6c0ff1:c.instructions+=1;goto B6c0ff1;
case 0x6c0ff6:goto L6c0ff6;
case 0x6c0ffa:c.instructions+=2;goto B6c0ffa;
case 0x6c0ffc:c.instructions+=1;goto B6c0ffc;
default:missing_instruction(c.pc);}
B6c0001:L6c0001:{c.instructions+=1;NFSU2_TR(0x6c0001);
{goto L6c031f;}
}
B6c0006:L6c0006:{c.instructions+=2;NFSU2_TR(0x6c0006);
__builtin_memmove((R+4),(R+24),4);
}
B6c0008:{NFSU2_TR(0x6c0008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c000dull));
TAIL_STATIC(0x727e6bu,727);
}
B6c000d:L6c000d:{c.instructions+=1;NFSU2_TR(0x6c000d);
{goto L6c031f;}
}
B6c0012:L6c0012:{c.instructions+=2;NFSU2_TR(0x6c0012);
__builtin_memmove((R+4),(R+24),4);
}
B6c0014:{NFSU2_TR(0x6c0014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0019ull));
TAIL_STATIC(0x6d3820u,6d3);
}
B6c0019:L6c0019:{c.instructions+=1;NFSU2_TR(0x6c0019);
{goto L6c031f;}
}
B6c001e:L6c001e:{c.instructions+=2;NFSU2_TR(0x6c001e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0023:{NFSU2_TR(0x6c0023);
if(r1(R+518)){{goto L6c025c;}}
}
B6c0029:L6c0029:{c.instructions+=2;NFSU2_TR(0x6c0029);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c002e:{NFSU2_TR(0x6c002e);
if(r1(R+518)){{goto L6c007f;}}
}
B6c0030:L6c0030:{c.instructions+=2;NFSU2_TR(0x6c0030);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0035:{NFSU2_TR(0x6c0035);
if(r1(R+518)){{goto L6c0326;}}
}
B6c003b:L6c003b:{c.instructions+=2;NFSU2_TR(0x6c003b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0040:{NFSU2_TR(0x6c0040);
if(r1(R+518)){{goto L6c007f;}}
}
B6c0042:L6c0042:{c.instructions+=2;NFSU2_TR(0x6c0042);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0047:{NFSU2_TR(0x6c0047);
if(r1(R+518)){{goto L6c0073;}}
}
B6c0049:L6c0049:{c.instructions+=2;NFSU2_TR(0x6c0049);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c004e:{NFSU2_TR(0x6c004e);
if(r1(R+518)){{goto L6c0067;}}
}
B6c0050:L6c0050:{c.instructions+=2;NFSU2_TR(0x6c0050);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0055:{NFSU2_TR(0x6c0055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c005b:L6c005b:{c.instructions+=2;NFSU2_TR(0x6c005b);
__builtin_memmove((R+4),(R+24),4);
}
B6c005d:{NFSU2_TR(0x6c005d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0062ull));
TAIL_STATIC(0x6d3852u,6d3);
}
B6c0062:L6c0062:{c.instructions+=1;NFSU2_TR(0x6c0062);
{goto L6c031f;}
}
B6c0067:L6c0067:{c.instructions+=2;NFSU2_TR(0x6c0067);
__builtin_memmove((R+4),(R+24),4);
}
B6c0069:{NFSU2_TR(0x6c0069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c006eull));
TAIL_STATIC(0x6d3848u,6d3);
}
B6c006e:L6c006e:{c.instructions+=1;NFSU2_TR(0x6c006e);
{goto L6c031f;}
}
B6c0073:L6c0073:{c.instructions+=2;NFSU2_TR(0x6c0073);
__builtin_memmove((R+4),(R+24),4);
}
B6c0075:{NFSU2_TR(0x6c0075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c007aull));
TAIL_STATIC(0x6d383eu,6d3);
}
B6c007a:L6c007a:{c.instructions+=1;NFSU2_TR(0x6c007a);
{goto L6c031f;}
}
B6c007f:L6c007f:{c.instructions+=2;NFSU2_TR(0x6c007f);
__builtin_memmove((R+4),(R+24),4);
}
B6c0081:{NFSU2_TR(0x6c0081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0086ull));
TAIL_STATIC(0x6d366fu,6d3);
}
B6c0086:L6c0086:{c.instructions+=1;NFSU2_TR(0x6c0086);
{goto L6c031f;}
}
B6c008b:L6c008b:{c.instructions+=2;NFSU2_TR(0x6c008b);
__builtin_memmove((R+4),(R+24),4);
}
B6c008d:{NFSU2_TR(0x6c008d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0092ull));
TAIL_STATIC(0x6d385cu,6d3);
}
B6c0092:L6c0092:{c.instructions+=1;NFSU2_TR(0x6c0092);
{goto L6c031f;}
}
B6c0097:L6c0097:{c.instructions+=3;NFSU2_TR(0x6c0097);
w4(R+4,u32(0x50300000ull));
}
B6c009c:{NFSU2_TR(0x6c009c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c009e:{NFSU2_TR(0x6c009e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c0127;}}
}
B6c00a4:L6c00a4:{c.instructions+=1;NFSU2_TR(0x6c00a4);
if(r1(R+518)){{goto L6c011b;}}
}
B6c00a6:L6c00a6:{c.instructions+=2;NFSU2_TR(0x6c00a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00ab:{NFSU2_TR(0x6c00ab);
if(r1(R+518)){{goto L6c010f;}}
}
B6c00ad:L6c00ad:{c.instructions+=2;NFSU2_TR(0x6c00ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00b2:{NFSU2_TR(0x6c00b2);
if(r1(R+518)){{goto L6c0103;}}
}
B6c00b4:L6c00b4:{c.instructions+=2;NFSU2_TR(0x6c00b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00b9:{NFSU2_TR(0x6c00b9);
if(r1(R+518)){{goto L6c00f7;}}
}
B6c00bb:L6c00bb:{c.instructions+=2;NFSU2_TR(0x6c00bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00c0:{NFSU2_TR(0x6c00c0);
if(r1(R+518)){{goto L6c0326;}}
}
B6c00c6:L6c00c6:{c.instructions+=2;NFSU2_TR(0x6c00c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00cb:{NFSU2_TR(0x6c00cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c007fu);}goto L6c007f;}}
}
B6c00cd:L6c00cd:{c.instructions+=2;NFSU2_TR(0x6c00cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00d2:{NFSU2_TR(0x6c00d2);
if(r1(R+518)){{goto L6c00eb;}}
}
B6c00d4:L6c00d4:{c.instructions+=2;NFSU2_TR(0x6c00d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c00d9:{NFSU2_TR(0x6c00d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c00df:L6c00df:{c.instructions+=2;NFSU2_TR(0x6c00df);
__builtin_memmove((R+4),(R+24),4);
}
B6c00e1:{NFSU2_TR(0x6c00e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c00e6ull));
TAIL_STATIC(0x6d3937u,6d3);
}
B6c00e6:L6c00e6:{c.instructions+=1;NFSU2_TR(0x6c00e6);
{goto L6c031f;}
}
B6c00eb:L6c00eb:{c.instructions+=2;NFSU2_TR(0x6c00eb);
__builtin_memmove((R+4),(R+24),4);
}
B6c00ed:{NFSU2_TR(0x6c00ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c00f2ull));
TAIL_STATIC(0x6d3884u,6d3);
}
B6c00f2:L6c00f2:{c.instructions+=1;NFSU2_TR(0x6c00f2);
{goto L6c031f;}
}
B6c00f7:L6c00f7:{c.instructions+=2;NFSU2_TR(0x6c00f7);
__builtin_memmove((R+4),(R+24),4);
}
B6c00f9:{NFSU2_TR(0x6c00f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c00feull));
TAIL_STATIC(0x6d2881u,6d2);
}
B6c00fe:L6c00fe:{c.instructions+=1;NFSU2_TR(0x6c00fe);
{goto L6c031f;}
}
B6c0103:L6c0103:{c.instructions+=2;NFSU2_TR(0x6c0103);
__builtin_memmove((R+4),(R+24),4);
}
B6c0105:{NFSU2_TR(0x6c0105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c010aull));
TAIL_STATIC(0x6d3870u,6d3);
}
B6c010a:L6c010a:{c.instructions+=1;NFSU2_TR(0x6c010a);
{goto L6c031f;}
}
B6c010f:L6c010f:{c.instructions+=2;NFSU2_TR(0x6c010f);
__builtin_memmove((R+4),(R+24),4);
}
B6c0111:{NFSU2_TR(0x6c0111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0116ull));
TAIL_STATIC(0x6d3866u,6d3);
}
B6c0116:L6c0116:{c.instructions+=1;NFSU2_TR(0x6c0116);
{goto L6c031f;}
}
B6c011b:L6c011b:{c.instructions+=2;NFSU2_TR(0x6c011b);
__builtin_memmove((R+4),(R+24),4);
}
B6c011d:{NFSU2_TR(0x6c011d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0122ull));
TAIL_STATIC(0x6d25dau,6d2);
}
B6c0122:L6c0122:{c.instructions+=1;NFSU2_TR(0x6c0122);
{goto L6c031f;}
}
B6c0127:L6c0127:{c.instructions+=2;NFSU2_TR(0x6c0127);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c012c:{NFSU2_TR(0x6c012c);
if(r1(R+518)){{goto L6c0185;}}
}
B6c012e:L6c012e:{c.instructions+=2;NFSU2_TR(0x6c012e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0133:{NFSU2_TR(0x6c0133);
if(r1(R+518)){{goto L6c0179;}}
}
B6c0135:L6c0135:{c.instructions+=2;NFSU2_TR(0x6c0135);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c013a:{NFSU2_TR(0x6c013a);
if(r1(R+518)){{goto L6c016d;}}
}
B6c013c:L6c013c:{c.instructions+=2;NFSU2_TR(0x6c013c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0141:{NFSU2_TR(0x6c0141);
if(r1(R+518)){{goto L6c0161;}}
}
B6c0143:L6c0143:{c.instructions+=2;NFSU2_TR(0x6c0143);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0148:{NFSU2_TR(0x6c0148);
if(r1(R+518)){{goto L6c0161;}}
}
B6c014a:L6c014a:{c.instructions+=2;NFSU2_TR(0x6c014a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c014f:{NFSU2_TR(0x6c014f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c0155:L6c0155:{c.instructions+=2;NFSU2_TR(0x6c0155);
__builtin_memmove((R+4),(R+24),4);
}
B6c0157:{NFSU2_TR(0x6c0157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c015cull));
TAIL_STATIC(0x6d30f7u,6d3);
}
B6c015c:L6c015c:{c.instructions+=1;NFSU2_TR(0x6c015c);
{goto L6c031f;}
}
B6c0161:L6c0161:{c.instructions+=2;NFSU2_TR(0x6c0161);
__builtin_memmove((R+4),(R+24),4);
}
B6c0163:{NFSU2_TR(0x6c0163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0168ull));
TAIL_STATIC(0x6d2fb9u,6d2);
}
B6c0168:L6c0168:{c.instructions+=1;NFSU2_TR(0x6c0168);
{goto L6c031f;}
}
B6c016d:L6c016d:{c.instructions+=2;NFSU2_TR(0x6c016d);
__builtin_memmove((R+4),(R+24),4);
}
B6c016f:{NFSU2_TR(0x6c016f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0174ull));
TAIL_STATIC(0x6d2f13u,6d2);
}
B6c0174:L6c0174:{c.instructions+=1;NFSU2_TR(0x6c0174);
{goto L6c031f;}
}
B6c0179:L6c0179:{c.instructions+=2;NFSU2_TR(0x6c0179);
__builtin_memmove((R+4),(R+24),4);
}
B6c017b:{NFSU2_TR(0x6c017b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0180ull));
TAIL_STATIC(0x6d2df8u,6d2);
}
B6c0180:L6c0180:{c.instructions+=1;NFSU2_TR(0x6c0180);
{goto L6c031f;}
}
B6c0185:L6c0185:{c.instructions+=2;NFSU2_TR(0x6c0185);
__builtin_memmove((R+4),(R+24),4);
}
B6c0187:{NFSU2_TR(0x6c0187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c018cull));
TAIL_STATIC(0x6d3955u,6d3);
}
B6c018c:L6c018c:{c.instructions+=1;NFSU2_TR(0x6c018c);
{goto L6c031f;}
}
B6c0191:L6c0191:{c.instructions+=3;NFSU2_TR(0x6c0191);
w4(R+4,u32(0x73a00000ull));
}
B6c0196:{NFSU2_TR(0x6c0196);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0198:{NFSU2_TR(0x6c0198);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c0274;}}
}
B6c019e:L6c019e:{c.instructions+=1;NFSU2_TR(0x6c019e);
if(r1(R+518)){{goto L6c0250;}}
}
B6c01a4:L6c01a4:{c.instructions+=3;NFSU2_TR(0x6c01a4);
w4(R+4,u32(0x73300000ull));
}
B6c01a9:{NFSU2_TR(0x6c01a9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c01ab:{NFSU2_TR(0x6c01ab);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c0222;}}
}
B6c01ad:L6c01ad:{c.instructions+=1;NFSU2_TR(0x6c01ad);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c01b3:L6c01b3:{c.instructions+=2;NFSU2_TR(0x6c01b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01b8:{NFSU2_TR(0x6c01b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0155u);}goto L6c0155;}}
}
B6c01ba:L6c01ba:{c.instructions+=2;NFSU2_TR(0x6c01ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01bf:{NFSU2_TR(0x6c01bf);
if(r1(R+518)){{goto L6c0216;}}
}
B6c01c1:L6c01c1:{c.instructions+=2;NFSU2_TR(0x6c01c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01c6:{NFSU2_TR(0x6c01c6);
if(r1(R+518)){{goto L6c020a;}}
}
B6c01c8:L6c01c8:{c.instructions+=2;NFSU2_TR(0x6c01c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x71000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01cd:{NFSU2_TR(0x6c01cd);
if(r1(R+518)){{goto L6c01fe;}}
}
B6c01cf:L6c01cf:{c.instructions+=2;NFSU2_TR(0x6c01cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01d4:{NFSU2_TR(0x6c01d4);
if(r1(R+518)){{goto L6c01fa;}}
}
B6c01d6:L6c01d6:{c.instructions+=2;NFSU2_TR(0x6c01d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01db:{NFSU2_TR(0x6c01db);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c01e1:L6c01e1:{c.instructions+=2;NFSU2_TR(0x6c01e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c01e6:{NFSU2_TR(0x6c01e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c01ec:L6c01ec:{c.instructions+=1;NFSU2_TR(0x6c01ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c01ee:L6c01ee:{c.instructions+=2;NFSU2_TR(0x6c01ee);
__builtin_memmove((R+4),(R+24),4);
}
B6c01f0:{NFSU2_TR(0x6c01f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c01f5ull));
TAIL_STATIC(0x6d2babu,6d2);
}
B6c01f5:L6c01f5:{c.instructions+=1;NFSU2_TR(0x6c01f5);
{goto L6c031f;}
}
B6c01fa:L6c01fa:{c.instructions+=2;NFSU2_TR(0x6c01fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c01fc:{NFSU2_TR(0x6c01fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c01eeu);}goto L6c01ee;}
}
B6c01fe:L6c01fe:{c.instructions+=2;NFSU2_TR(0x6c01fe);
__builtin_memmove((R+4),(R+24),4);
}
B6c0200:{NFSU2_TR(0x6c0200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0205ull));
TAIL_STATIC(0x6beb73u,6be);
}
B6c0205:L6c0205:{c.instructions+=1;NFSU2_TR(0x6c0205);
{goto L6c031f;}
}
B6c020a:L6c020a:{c.instructions+=2;NFSU2_TR(0x6c020a);
__builtin_memmove((R+4),(R+24),4);
}
B6c020c:{NFSU2_TR(0x6c020c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0211ull));
TAIL_STATIC(0x6d2d86u,6d2);
}
B6c0211:L6c0211:{c.instructions+=1;NFSU2_TR(0x6c0211);
{goto L6c031f;}
}
B6c0216:L6c0216:{c.instructions+=2;NFSU2_TR(0x6c0216);
__builtin_memmove((R+4),(R+24),4);
}
B6c0218:{NFSU2_TR(0x6c0218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c021dull));
TAIL_STATIC(0x6d387au,6d3);
}
B6c021d:L6c021d:{c.instructions+=1;NFSU2_TR(0x6c021d);
{goto L6c031f;}
}
B6c0222:L6c0222:{c.instructions+=2;NFSU2_TR(0x6c0222);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0227:{NFSU2_TR(0x6c0227);
if(r1(R+518)){{goto L6c0268;}}
}
B6c0229:L6c0229:{c.instructions+=2;NFSU2_TR(0x6c0229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c022e:{NFSU2_TR(0x6c022e);
if(r1(R+518)){{goto L6c025c;}}
}
B6c0230:L6c0230:{c.instructions+=2;NFSU2_TR(0x6c0230);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0235:{NFSU2_TR(0x6c0235);
if(r1(R+518)){{goto L6c025c;}}
}
B6c0237:L6c0237:{c.instructions+=2;NFSU2_TR(0x6c0237);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c023c:{NFSU2_TR(0x6c023c);
if(r1(R+518)){{goto L6c025c;}}
}
B6c023e:L6c023e:{c.instructions+=2;NFSU2_TR(0x6c023e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0243:{NFSU2_TR(0x6c0243);
if(r1(R+518)){{goto L6c025c;}}
}
B6c0245:L6c0245:{c.instructions+=2;NFSU2_TR(0x6c0245);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c024a:{NFSU2_TR(0x6c024a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c0250:L6c0250:{c.instructions+=2;NFSU2_TR(0x6c0250);
__builtin_memmove((R+4),(R+24),4);
}
B6c0252:{NFSU2_TR(0x6c0252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0257ull));
TAIL_STATIC(0x6d2a50u,6d2);
}
B6c0257:L6c0257:{c.instructions+=1;NFSU2_TR(0x6c0257);
{goto L6c031f;}
}
B6c025c:L6c025c:{c.instructions+=2;NFSU2_TR(0x6c025c);
__builtin_memmove((R+4),(R+24),4);
}
B6c025e:{NFSU2_TR(0x6c025e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0263ull));
TAIL_STATIC(0x6d2678u,6d2);
}
B6c0263:L6c0263:{c.instructions+=1;NFSU2_TR(0x6c0263);
{goto L6c031f;}
}
B6c0268:L6c0268:{c.instructions+=2;NFSU2_TR(0x6c0268);
__builtin_memmove((R+4),(R+24),4);
}
B6c026a:{NFSU2_TR(0x6c026a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c026full));
TAIL_STATIC(0x6d2c4fu,6d2);
}
B6c026f:L6c026f:{c.instructions+=1;NFSU2_TR(0x6c026f);
{goto L6c031f;}
}
B6c0274:L6c0274:{c.instructions+=3;NFSU2_TR(0x6c0274);
w4(R+4,u32(0x74200000ull));
}
B6c0279:{NFSU2_TR(0x6c0279);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c027b:{NFSU2_TR(0x6c027b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c02cf;}}
}
B6c027d:L6c027d:{c.instructions+=1;NFSU2_TR(0x6c027d);
if(r1(R+518)){{goto L6c02c6;}}
}
B6c027f:L6c027f:{c.instructions+=2;NFSU2_TR(0x6c027f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0284:{NFSU2_TR(0x6c0284);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0250u);}goto L6c0250;}}
}
B6c0286:L6c0286:{c.instructions+=2;NFSU2_TR(0x6c0286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c028b:{NFSU2_TR(0x6c028b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0250u);}goto L6c0250;}}
}
B6c028d:L6c028d:{c.instructions+=2;NFSU2_TR(0x6c028d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0292:{NFSU2_TR(0x6c0292);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c0294:L6c0294:{c.instructions+=2;NFSU2_TR(0x6c0294);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0299:{NFSU2_TR(0x6c0299);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c029b:L6c029b:{c.instructions+=2;NFSU2_TR(0x6c029b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02a0:{NFSU2_TR(0x6c02a0);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c02a2:L6c02a2:{c.instructions+=2;NFSU2_TR(0x6c02a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02a7:{NFSU2_TR(0x6c02a7);
if(r1(R+518)){{goto L6c02bd;}}
}
B6c02a9:L6c02a9:{c.instructions+=2;NFSU2_TR(0x6c02a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02ae:{NFSU2_TR(0x6c02ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c02b4:L6c02b4:{c.instructions+=2;NFSU2_TR(0x6c02b4);
__builtin_memmove((R+4),(R+24),4);
}
B6c02b6:{NFSU2_TR(0x6c02b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c02bbull));
TAIL_STATIC(0x6d35ebu,6d3);
}
B6c02bb:L6c02bb:{c.instructions+=1;NFSU2_TR(0x6c02bb);
{goto L6c031f;}
}
B6c02bd:L6c02bd:{c.instructions+=2;NFSU2_TR(0x6c02bd);
__builtin_memmove((R+4),(R+24),4);
}
B6c02bf:{NFSU2_TR(0x6c02bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c02c4ull));
TAIL_STATIC(0x6d2c25u,6d2);
}
B6c02c4:L6c02c4:{c.instructions+=1;NFSU2_TR(0x6c02c4);
{goto L6c031f;}
}
B6c02c6:L6c02c6:{c.instructions+=2;NFSU2_TR(0x6c02c6);
__builtin_memmove((R+4),(R+24),4);
}
B6c02c8:{NFSU2_TR(0x6c02c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c02cdull));
TAIL_STATIC(0x6d3581u,6d3);
}
B6c02cd:L6c02cd:{c.instructions+=1;NFSU2_TR(0x6c02cd);
{goto L6c031f;}
}
B6c02cf:L6c02cf:{c.instructions+=2;NFSU2_TR(0x6c02cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02d4:{NFSU2_TR(0x6c02d4);
if(r1(R+518)){{goto L6c030b;}}
}
B6c02d6:L6c02d6:{c.instructions+=2;NFSU2_TR(0x6c02d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02db:{NFSU2_TR(0x6c02db);
if(r1(R+518)){{goto L6c030b;}}
}
B6c02dd:L6c02dd:{c.instructions+=2;NFSU2_TR(0x6c02dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02e2:{NFSU2_TR(0x6c02e2);
if(r1(R+518)){{goto L6c030b;}}
}
B6c02e4:L6c02e4:{c.instructions+=2;NFSU2_TR(0x6c02e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02e9:{NFSU2_TR(0x6c02e9);
if(r1(R+518)){{goto L6c030b;}}
}
B6c02eb:L6c02eb:{c.instructions+=2;NFSU2_TR(0x6c02eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02f0:{NFSU2_TR(0x6c02f0);
if(r1(R+518)){{goto L6c0302;}}
}
B6c02f2:L6c02f2:{c.instructions+=2;NFSU2_TR(0x6c02f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c02f7:{NFSU2_TR(0x6c02f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0336;}}
}
B6c02f9:L6c02f9:{c.instructions+=2;NFSU2_TR(0x6c02f9);
__builtin_memmove((R+4),(R+24),4);
}
B6c02fb:{NFSU2_TR(0x6c02fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0300ull));
TAIL_STATIC(0x6d1ef0u,6d1);
}
B6c0300:L6c0300:{c.instructions+=1;NFSU2_TR(0x6c0300);
{goto L6c031f;}
}
B6c0302:L6c0302:{c.instructions+=2;NFSU2_TR(0x6c0302);
__builtin_memmove((R+4),(R+24),4);
}
B6c0304:{NFSU2_TR(0x6c0304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0309ull));
TAIL_STATIC(0x6d1f1au,6d1);
}
B6c0309:L6c0309:{c.instructions+=1;NFSU2_TR(0x6c0309);
{goto L6c031f;}
}
B6c030b:L6c030b:{c.instructions+=2;NFSU2_TR(0x6c030b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c030f:{NFSU2_TR(0x6c030f);
if(r1(R+518)){{goto L6c031a;}}
}
B6c0311:L6c0311:{c.instructions+=2;NFSU2_TR(0x6c0311);
__builtin_memmove((R+4),(R+24),4);
}
B6c0313:{NFSU2_TR(0x6c0313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0318ull));
TAIL_STATIC(0x6d1f44u,6d1);
}
B6c0318:L6c0318:{c.instructions+=1;NFSU2_TR(0x6c0318);
{goto L6c031f;}
}
B6c031a:L6c031a:{c.instructions+=1;NFSU2_TR(0x6c031a);
w4(R+0,u32(0x80004001ull));
}
B6c031f:L6c031f:{c.instructions+=2;NFSU2_TR(0x6c031f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80004001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0324:{NFSU2_TR(0x6c0324);
if(r1(R+518)){{goto L6c0336;}}
}
B6c0326:L6c0326:{c.instructions+=3;NFSU2_TR(0x6c0326);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c0327:{NFSU2_TR(0x6c0327);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c032a:{NFSU2_TR(0x6c032a);
if(r1(R+512)){TAIL_STATIC(0x6bff20u,6bf);}
}
B6c0330:L6c0330:{c.instructions+=1;NFSU2_TR(0x6c0330);
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
B6c0332:L6c0332:{c.instructions+=4;NFSU2_TR(0x6c0332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0333:{NFSU2_TR(0x6c0333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0334:{NFSU2_TR(0x6c0334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c0335:{NFSU2_TR(0x6c0335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c0336:L6c0336:{c.instructions+=6;NFSU2_TR(0x6c0336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c033c:{NFSU2_TR(0x6c033c);
u8 U[4];
w4(U+0,u32(0x7bb290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0341:{NFSU2_TR(0x6c0341);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0346:{NFSU2_TR(0x6c0346);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0349:{NFSU2_TR(0x6c0349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c034a:{NFSU2_TR(0x6c034a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c034full));
TAIL_STATIC(0x69e936u,69e);
}
B6c034f:L6c034f:{c.instructions+=3;NFSU2_TR(0x6c034f);
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
B6c0352:{NFSU2_TR(0x6c0352);
w4(R+0,u32(0x80004001ull));
}
B6c0357:{NFSU2_TR(0x6c0357);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0332u);}goto L6c0332;}
}
B6c0359:L6c0359:{c.instructions+=4;NFSU2_TR(0x6c0359);
__builtin_memmove((R+28),(R+28),4);
}
B6c035b:{NFSU2_TR(0x6c035b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c035c:{NFSU2_TR(0x6c035c);
__builtin_memmove((R+24),(R+4),4);
}
B6c035e:{NFSU2_TR(0x6c035e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0363ull));
TAIL_STATIC(0x6cd15fu,6cd);
}
B6c0363:L6c0363:{c.instructions+=5;NFSU2_TR(0x6c0363);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6c036a:{NFSU2_TR(0x6c036a);
u8 U[4];
w4(U+0,u32(0x7bd2f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6c0370:{NFSU2_TR(0x6c0370);
__builtin_memmove((R+0),(R+24),4);
}
B6c0372:{NFSU2_TR(0x6c0372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0373:{NFSU2_TR(0x6c0373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c0374:L6c0374:{c.instructions+=11;NFSU2_TR(0x6c0374);
__builtin_memmove((R+28),(R+28),4);
}
B6c0376:{NFSU2_TR(0x6c0376);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0377:{NFSU2_TR(0x6c0377);
__builtin_memmove((R+20),(R+16),4);
}
B6c0379:{NFSU2_TR(0x6c0379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6c037c:{NFSU2_TR(0x6c037c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c037d:{NFSU2_TR(0x6c037d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c0380:{NFSU2_TR(0x6c0380);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0381:{NFSU2_TR(0x6c0381);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0383:{NFSU2_TR(0x6c0383);
u8 U[4];
w4(U+0,u32(0x7b76dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0388:{NFSU2_TR(0x6c0388);
__builtin_memmove((R+24),(R+4),4);
}
B6c038a:{NFSU2_TR(0x6c038a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c038full));
TAIL_STATIC(0x672277u,672);
}
B6c038f:L6c038f:{c.instructions+=17;NFSU2_TR(0x6c038f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0392:{NFSU2_TR(0x6c0392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0396:{NFSU2_TR(0x6c0396);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6c039a:{NFSU2_TR(0x6c039a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c03a0:{NFSU2_TR(0x6c03a0);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c03a2:{NFSU2_TR(0x6c03a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c03a3:{NFSU2_TR(0x6c03a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c03a6:{NFSU2_TR(0x6c03a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c03a9:{NFSU2_TR(0x6c03a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c03ac:{NFSU2_TR(0x6c03ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffefeull))));
}
B6c03b1:{NFSU2_TR(0x6c03b1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000202ull))));
}
B6c03b6:{NFSU2_TR(0x6c03b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c03b9:{NFSU2_TR(0x6c03b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c03c0:{NFSU2_TR(0x6c03c0);
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
B6c03c2:{NFSU2_TR(0x6c03c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c03c3:{NFSU2_TR(0x6c03c3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c03c4:{NFSU2_TR(0x6c03c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c03c5:L6c03c5:{c.instructions+=11;NFSU2_TR(0x6c03c5);
__builtin_memmove((R+28),(R+28),4);
}
B6c03c7:{NFSU2_TR(0x6c03c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c03c8:{NFSU2_TR(0x6c03c8);
__builtin_memmove((R+20),(R+16),4);
}
B6c03ca:{NFSU2_TR(0x6c03ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c03cd:{NFSU2_TR(0x6c03cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c03ce:{NFSU2_TR(0x6c03ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c03d1:{NFSU2_TR(0x6c03d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c03d4:{NFSU2_TR(0x6c03d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c03d7:{NFSU2_TR(0x6c03d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c03da:{NFSU2_TR(0x6c03da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c03dd:{NFSU2_TR(0x6c03dd);
if(r1(R+518)){{goto L6c03eb;}}
}
B6c03df:L6c03df:{c.instructions+=1;NFSU2_TR(0x6c03df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c03e1:L6c03e1:{c.instructions+=1;NFSU2_TR(0x6c03e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c03e6ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c03e6:L6c03e6:{c.instructions+=1;NFSU2_TR(0x6c03e6);
{goto L6c0481;}
}
B6c03eb:L6c03eb:{c.instructions+=3;NFSU2_TR(0x6c03eb);
__builtin_memmove((R+8),(R+0),4);
}
B6c03ed:{NFSU2_TR(0x6c03ed);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x200ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c03f3:{NFSU2_TR(0x6c03f3);
if(r1(R+518)){{goto L6c03fd;}}
}
B6c03f5:L6c03f5:{c.instructions+=2;NFSU2_TR(0x6c03f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6c03f7:{NFSU2_TR(0x6c03f7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6c03fd;}}
}
B6c03f9:L6c03f9:{c.instructions+=2;NFSU2_TR(0x6c03f9);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c03fb:{NFSU2_TR(0x6c03fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c03e1u);}goto L6c03e1;}
}
B6c03fd:L6c03fd:{c.instructions+=2;NFSU2_TR(0x6c03fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c03ff:{NFSU2_TR(0x6c03ff);
if(r1(R+518)){{goto L6c0405;}}
}
B6c0401:L6c0401:{c.instructions+=2;NFSU2_TR(0x6c0401);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0403:{NFSU2_TR(0x6c0403);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c03e1u);}goto L6c03e1;}
}
B6c0405:L6c0405:{c.instructions+=2;NFSU2_TR(0x6c0405);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c0407:{NFSU2_TR(0x6c0407);
if(r1(R+518)){{goto L6c040d;}}
}
B6c0409:L6c0409:{c.instructions+=2;NFSU2_TR(0x6c0409);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c040b:{NFSU2_TR(0x6c040b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c03e1u);}goto L6c03e1;}
}
B6c040d:L6c040d:{c.instructions+=6;NFSU2_TR(0x6c040d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c040e:{NFSU2_TR(0x6c040e);
w4(R+8,u32(0x2020ull));
}
B6c0413:{NFSU2_TR(0x6c0413);
__builtin_memmove((R+28),(R+0),4);
}
B6c0415:{NFSU2_TR(0x6c0415);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B6c0417:{NFSU2_TR(0x6c0417);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0419:{NFSU2_TR(0x6c0419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0424;}}
}
B6c041b:L6c041b:{c.instructions+=1;NFSU2_TR(0x6c041b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c041d:L6c041d:{c.instructions+=1;NFSU2_TR(0x6c041d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0422ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0422:L6c0422:{c.instructions+=1;NFSU2_TR(0x6c0422);
{goto L6c0480;}
}
B6c0424:L6c0424:{c.instructions+=5;NFSU2_TR(0x6c0424);
w4(R+8,u32(0x40020ull));
}
B6c0429:{NFSU2_TR(0x6c0429);
__builtin_memmove((R+28),(R+0),4);
}
B6c042b:{NFSU2_TR(0x6c042b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B6c042d:{NFSU2_TR(0x6c042d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c042f:{NFSU2_TR(0x6c042f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0435;}}
}
B6c0431:L6c0431:{c.instructions+=2;NFSU2_TR(0x6c0431);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0433:{NFSU2_TR(0x6c0433);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c041du);}goto L6c041d;}
}
B6c0435:L6c0435:{c.instructions+=2;NFSU2_TR(0x6c0435);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c0437:{NFSU2_TR(0x6c0437);
if(r1(R+518)){{goto L6c043d;}}
}
B6c0439:L6c0439:{c.instructions+=2;NFSU2_TR(0x6c0439);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c043b:{NFSU2_TR(0x6c043b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c041du);}goto L6c041d;}
}
B6c043d:L6c043d:{c.instructions+=2;NFSU2_TR(0x6c043d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c043f:{NFSU2_TR(0x6c043f);
if(r1(R+518)){{goto L6c0449;}}
}
B6c0441:L6c0441:{c.instructions+=2;NFSU2_TR(0x6c0441);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c0443:{NFSU2_TR(0x6c0443);
if(r1(R+518)){{goto L6c0455;}}
}
B6c0445:L6c0445:{c.instructions+=2;NFSU2_TR(0x6c0445);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0447:{NFSU2_TR(0x6c0447);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c041du);}goto L6c041d;}
}
B6c0449:L6c0449:{c.instructions+=2;NFSU2_TR(0x6c0449);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c044b:{NFSU2_TR(0x6c044b);
if(r1(R+518)){{goto L6c0455;}}
}
B6c044d:L6c044d:{c.instructions+=2;NFSU2_TR(0x6c044d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c044f:{NFSU2_TR(0x6c044f);
if(r1(R+518)){{goto L6c0455;}}
}
B6c0451:L6c0451:{c.instructions+=2;NFSU2_TR(0x6c0451);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0453:{NFSU2_TR(0x6c0453);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c041du);}goto L6c041d;}
}
B6c0455:L6c0455:{c.instructions+=2;NFSU2_TR(0x6c0455);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c045a:{NFSU2_TR(0x6c045a);
if(r1(R+518)){{goto L6c047b;}}
}
B6c045c:L6c045c:{c.instructions+=8;NFSU2_TR(0x6c045c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c045f:{NFSU2_TR(0x6c045f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0462:{NFSU2_TR(0x6c0462);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0465:{NFSU2_TR(0x6c0465);
u8 U[4];
w4(U+0,u32(0x7bd394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c046a:{NFSU2_TR(0x6c046a);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c046f:{NFSU2_TR(0x6c046f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0472:{NFSU2_TR(0x6c0472);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0473:{NFSU2_TR(0x6c0473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0478ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c0478:L6c0478:{c.instructions+=1;NFSU2_TR(0x6c0478);
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
B6c047b:L6c047b:{c.instructions+=1;NFSU2_TR(0x6c047b);
w4(R+0,u32(0x80004005ull));
}
B6c0480:L6c0480:{c.instructions+=1;NFSU2_TR(0x6c0480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0481:L6c0481:{c.instructions+=3;NFSU2_TR(0x6c0481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0482:{NFSU2_TR(0x6c0482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c0483:{NFSU2_TR(0x6c0483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c0486:L6c0486:{c.instructions+=7;NFSU2_TR(0x6c0486);
__builtin_memmove((R+28),(R+28),4);
}
B6c0488:{NFSU2_TR(0x6c0488);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0489:{NFSU2_TR(0x6c0489);
__builtin_memmove((R+20),(R+16),4);
}
B6c048b:{NFSU2_TR(0x6c048b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c048c:{NFSU2_TR(0x6c048c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c048e:{NFSU2_TR(0x6c048e);
__builtin_memmove((R+24),(R+4),4);
}
B6c0490:{NFSU2_TR(0x6c0490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0495ull));
TAIL_STATIC(0x6cc145u,6cc);
}
B6c0495:L6c0495:{c.instructions+=2;NFSU2_TR(0x6c0495);
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
B6c0497:{NFSU2_TR(0x6c0497);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c04b9;}}
}
B6c0499:L6c0499:{c.instructions+=9;NFSU2_TR(0x6c0499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c049f:{NFSU2_TR(0x6c049f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c04a5:{NFSU2_TR(0x6c04a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c04a7:{NFSU2_TR(0x6c04a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c04aa:{NFSU2_TR(0x6c04aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c04ad:{NFSU2_TR(0x6c04ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c04b0:{NFSU2_TR(0x6c04b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c04b4:{NFSU2_TR(0x6c04b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x2ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c04b7:{NFSU2_TR(0x6c04b7);
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
B6c04b9:L6c04b9:{c.instructions+=3;NFSU2_TR(0x6c04b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c04ba:{NFSU2_TR(0x6c04ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c04bb:{NFSU2_TR(0x6c04bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c04be:L6c04be:{c.instructions+=13;NFSU2_TR(0x6c04be);
__builtin_memmove((R+28),(R+28),4);
}
B6c04c0:{NFSU2_TR(0x6c04c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c04c1:{NFSU2_TR(0x6c04c1);
__builtin_memmove((R+20),(R+16),4);
}
B6c04c3:{NFSU2_TR(0x6c04c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6c04c6:{NFSU2_TR(0x6c04c6);
__builtin_memmove((R+0),(R+4),4);
}
B6c04c8:{NFSU2_TR(0x6c04c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c04ce:{NFSU2_TR(0x6c04ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c04cf:{NFSU2_TR(0x6c04cf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c04d1:{NFSU2_TR(0x6c04d1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff0000ull))));
}
B6c04d7:{NFSU2_TR(0x6c04d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46580000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c04dd:{NFSU2_TR(0x6c04dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c04e0:{NFSU2_TR(0x6c04e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c04e3:{NFSU2_TR(0x6c04e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0501;}}
}
B6c04e5:L6c04e5:{c.instructions+=3;NFSU2_TR(0x6c04e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c04e8:{NFSU2_TR(0x6c04e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c04ec:{NFSU2_TR(0x6c04ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c04fa;}}
}
B6c04ee:L6c04ee:{c.instructions+=4;NFSU2_TR(0x6c04ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
}
B6c04f3:{NFSU2_TR(0x6c04f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c04f5:{NFSU2_TR(0x6c04f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c04f8:{NFSU2_TR(0x6c04f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c04fa:L6c04fa:{c.instructions+=2;NFSU2_TR(0x6c04fa);
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
B6c04fc:{NFSU2_TR(0x6c04fc);
{goto L6c068a;}
}
B6c0501:L6c0501:{c.instructions+=4;NFSU2_TR(0x6c0501);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0502:{NFSU2_TR(0x6c0502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c0505:{NFSU2_TR(0x6c0505);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0509:{NFSU2_TR(0x6c0509);
if(r1(R+518)){{goto L6c0512;}}
}
B6c050b:L6c050b:{c.instructions+=2;NFSU2_TR(0x6c050b);
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
B6c050d:{NFSU2_TR(0x6c050d);
{goto L6c0689;}
}
B6c0512:L6c0512:{c.instructions+=7;NFSU2_TR(0x6c0512);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0515:{NFSU2_TR(0x6c0515);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0516:{NFSU2_TR(0x6c0516);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0518:{NFSU2_TR(0x6c0518);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c051b:{NFSU2_TR(0x6c051b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c051e:{NFSU2_TR(0x6c051e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c051f:{NFSU2_TR(0x6c051f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0524ull));
TAIL_STATIC(0x75c840u,75c);
}
B6c0524:L6c0524:{c.instructions+=5;NFSU2_TR(0x6c0524);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6c0527:{NFSU2_TR(0x6c0527);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c052b:{NFSU2_TR(0x6c052b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6c052f:{NFSU2_TR(0x6c052f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0532:{NFSU2_TR(0x6c0532);
if(r1(R+518)){{goto L6c0556;}}
}
B6c0534:L6c0534:{c.instructions+=3;NFSU2_TR(0x6c0534);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6c0537:{NFSU2_TR(0x6c0537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0538:{NFSU2_TR(0x6c0538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c053dull));
TAIL_STATIC(0x75defau,75d);
}
B6c053d:L6c053d:{c.instructions+=3;NFSU2_TR(0x6c053d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c053f:{NFSU2_TR(0x6c053f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0540:{NFSU2_TR(0x6c0540);
if(r1(R+518)){{goto L6c0548;}}
}
B6c0542:L6c0542:{c.instructions+=3;NFSU2_TR(0x6c0542);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c0543:{NFSU2_TR(0x6c0543);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6c0546:{NFSU2_TR(0x6c0546);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0534u);}goto L6c0534;}}
}
B6c0548:L6c0548:{c.instructions+=2;NFSU2_TR(0x6c0548);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6c054b:{NFSU2_TR(0x6c054b);
if(r1(R+518)){{goto L6c055f;}}
}
B6c054d:L6c054d:{c.instructions+=2;NFSU2_TR(0x6c054d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c054e:{NFSU2_TR(0x6c054e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0553ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6c0553:L6c0553:{c.instructions+=2;NFSU2_TR(0x6c0553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0554:{NFSU2_TR(0x6c0554);
__builtin_memmove((R+28),(R+0),4);
}
B6c0556:L6c0556:{c.instructions+=2;NFSU2_TR(0x6c0556);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c0559:{NFSU2_TR(0x6c0559);
if(r1(R+518)){{goto L6c055f;}}
}
B6c055b:L6c055b:{c.instructions+=2;NFSU2_TR(0x6c055b);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6c055e:{NFSU2_TR(0x6c055e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c055f:L6c055f:{c.instructions+=3;NFSU2_TR(0x6c055f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c0561:{NFSU2_TR(0x6c0561);
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
B6c0563:{NFSU2_TR(0x6c0563);
if(r1(R+518)){{goto L6c0584;}}
}
B6c0565:L6c0565:{c.instructions+=3;NFSU2_TR(0x6c0565);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6c0568:{NFSU2_TR(0x6c0568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0569:{NFSU2_TR(0x6c0569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c056eull));
TAIL_STATIC(0x75df39u,75d);
}
B6c056e:L6c056e:{c.instructions+=3;NFSU2_TR(0x6c056e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0570:{NFSU2_TR(0x6c0570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0571:{NFSU2_TR(0x6c0571);
if(r1(R+518)){{goto L6c057a;}}
}
B6c0573:L6c0573:{c.instructions+=4;NFSU2_TR(0x6c0573);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c0574:{NFSU2_TR(0x6c0574);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c0576:{NFSU2_TR(0x6c0576);
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
B6c0578:{NFSU2_TR(0x6c0578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0565u);}goto L6c0565;}}
}
B6c057a:L6c057a:{c.instructions+=2;NFSU2_TR(0x6c057a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c057d:{NFSU2_TR(0x6c057d);
if(r1(R+518)){{goto L6c0584;}}
}
B6c057f:L6c057f:{c.instructions+=2;NFSU2_TR(0x6c057f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6c0582:{NFSU2_TR(0x6c0582);
{goto L6c058c;}
}
B6c0584:L6c0584:{c.instructions+=3;NFSU2_TR(0x6c0584);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0587:{NFSU2_TR(0x6c0587);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6c058a:{NFSU2_TR(0x6c058a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6c058c:L6c058c:{c.instructions+=7;NFSU2_TR(0x6c058c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c058f:{NFSU2_TR(0x6c058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0592:{NFSU2_TR(0x6c0592);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0595:{NFSU2_TR(0x6c0595);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0598:{NFSU2_TR(0x6c0598);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c059b:{NFSU2_TR(0x6c059b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c059d:{NFSU2_TR(0x6c059d);
if(r1(R+518)){{goto L6c0601;}}
}
B6c059f:L6c059f:{c.instructions+=2;NFSU2_TR(0x6c059f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c05a2:{NFSU2_TR(0x6c05a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0601;}}
}
B6c05a4:L6c05a4:{c.instructions+=4;NFSU2_TR(0x6c05a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c05a7:{NFSU2_TR(0x6c05a7);
u8 U[4];
w4(U+0,u32(0x7b9eacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05ac:{NFSU2_TR(0x6c05ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05ad:{NFSU2_TR(0x6c05ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c05b2ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6c05b2:L6c05b2:{c.instructions+=4;NFSU2_TR(0x6c05b2);
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
B6c05b4:{NFSU2_TR(0x6c05b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c05b5:{NFSU2_TR(0x6c05b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c05b6:{NFSU2_TR(0x6c05b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c05c7;}}
}
B6c05b8:L6c05b8:{c.instructions+=1;NFSU2_TR(0x6c05b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c05bf:L6c05bf:{c.instructions+=4;NFSU2_TR(0x6c05bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6c05c2:{NFSU2_TR(0x6c05c2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c05c4:{NFSU2_TR(0x6c05c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c05c5:{NFSU2_TR(0x6c05c5);
{goto L6c05eb;}
}
B6c05c7:L6c05c7:{c.instructions+=4;NFSU2_TR(0x6c05c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c05ca:{NFSU2_TR(0x6c05ca);
u8 U[4];
w4(U+0,u32(0x7b9e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05cf:{NFSU2_TR(0x6c05cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05d0:{NFSU2_TR(0x6c05d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c05d5ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6c05d5:L6c05d5:{c.instructions+=4;NFSU2_TR(0x6c05d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c05d7:{NFSU2_TR(0x6c05d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c05d8:{NFSU2_TR(0x6c05d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c05d9:{NFSU2_TR(0x6c05d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c05e4;}}
}
B6c05db:L6c05db:{c.instructions+=2;NFSU2_TR(0x6c05db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c05e2:{NFSU2_TR(0x6c05e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c05bfu);}goto L6c05bf;}
}
B6c05e4:L6c05e4:{c.instructions+=3;NFSU2_TR(0x6c05e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c05e8:{NFSU2_TR(0x6c05e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c05ea:{NFSU2_TR(0x6c05ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c05eb:L6c05eb:{c.instructions+=2;NFSU2_TR(0x6c05eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c05ed:{NFSU2_TR(0x6c05ed);
if(r1(R+518)){{goto L6c0652;}}
}
B6c05ef:L6c05ef:{c.instructions+=2;NFSU2_TR(0x6c05ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c05f3:{NFSU2_TR(0x6c05f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0652;}}
}
B6c05f5:L6c05f5:{c.instructions+=5;NFSU2_TR(0x6c05f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05f6:{NFSU2_TR(0x6c05f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c05f9:{NFSU2_TR(0x6c05f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05fa:{NFSU2_TR(0x6c05fa);
u8 U[4];
w4(U+0,u32(0x7bcd80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c05ff:{NFSU2_TR(0x6c05ff);
{goto L6c063f;}
}
B6c0601:L6c0601:{c.instructions+=2;NFSU2_TR(0x6c0601);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c0603:{NFSU2_TR(0x6c0603);
if(r1(R+518)){{goto L6c0659;}}
}
B6c0605:L6c0605:{c.instructions+=4;NFSU2_TR(0x6c0605);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c0608:{NFSU2_TR(0x6c0608);
u8 U[4];
w4(U+0,u32(0x7b9e4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c060d:{NFSU2_TR(0x6c060d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c060e:{NFSU2_TR(0x6c060e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0613ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6c0613:L6c0613:{c.instructions+=4;NFSU2_TR(0x6c0613);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0615:{NFSU2_TR(0x6c0615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0616:{NFSU2_TR(0x6c0616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0617:{NFSU2_TR(0x6c0617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0624;}}
}
B6c0619:L6c0619:{c.instructions+=6;NFSU2_TR(0x6c0619);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c061a:{NFSU2_TR(0x6c061a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c061c:{NFSU2_TR(0x6c061c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c061e:{NFSU2_TR(0x6c061e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0621:{NFSU2_TR(0x6c0621);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c0622:{NFSU2_TR(0x6c0622);
{goto L6c062b;}
}
B6c0624:L6c0624:{c.instructions+=3;NFSU2_TR(0x6c0624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0628:{NFSU2_TR(0x6c0628);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c062a:{NFSU2_TR(0x6c062a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c062b:L6c062b:{c.instructions+=2;NFSU2_TR(0x6c062b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c062d:{NFSU2_TR(0x6c062d);
if(r1(R+518)){{goto L6c0652;}}
}
B6c062f:L6c062f:{c.instructions+=2;NFSU2_TR(0x6c062f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0633:{NFSU2_TR(0x6c0633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0652;}}
}
B6c0635:L6c0635:{c.instructions+=4;NFSU2_TR(0x6c0635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0636:{NFSU2_TR(0x6c0636);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c0639:{NFSU2_TR(0x6c0639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c063a:{NFSU2_TR(0x6c063a);
u8 U[4];
w4(U+0,u32(0x7bd3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c063f:L6c063f:{c.instructions+=4;NFSU2_TR(0x6c063f);
u8 U[4];
w4(U+0,u32(0x1196ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0644:{NFSU2_TR(0x6c0644);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0647:{NFSU2_TR(0x6c0647);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c064a:{NFSU2_TR(0x6c064a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c064full));
TAIL_STATIC(0x69e936u,69e);
}
B6c064f:L6c064f:{c.instructions+=1;NFSU2_TR(0x6c064f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6c0652:L6c0652:{c.instructions+=3;NFSU2_TR(0x6c0652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0655:{NFSU2_TR(0x6c0655);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0657:{NFSU2_TR(0x6c0657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c065f;}}
}
B6c0659:L6c0659:{c.instructions+=3;NFSU2_TR(0x6c0659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c065c:{NFSU2_TR(0x6c065c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c065e:{NFSU2_TR(0x6c065e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c065f:L6c065f:{c.instructions+=2;NFSU2_TR(0x6c065f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0665:{NFSU2_TR(0x6c0665);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c066a;}}
}
B6c0667:L6c0667:{c.instructions+=2;NFSU2_TR(0x6c0667);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c0669:{NFSU2_TR(0x6c0669);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c066a:L6c066a:{c.instructions+=10;NFSU2_TR(0x6c066a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffff00ull))));
}
B6c0670:{NFSU2_TR(0x6c0670);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6c0675:{NFSU2_TR(0x6c0675);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c0678:{NFSU2_TR(0x6c0678);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B6c067a:{NFSU2_TR(0x6c067a);
__builtin_memmove((R+0),(R+24),4);
}
B6c067c:{NFSU2_TR(0x6c067c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6c067e:{NFSU2_TR(0x6c067e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c0680:{NFSU2_TR(0x6c0680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0683:{NFSU2_TR(0x6c0683);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c0688:{NFSU2_TR(0x6c0688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0689:L6c0689:{c.instructions+=1;NFSU2_TR(0x6c0689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c068a:L6c068a:{c.instructions+=3;NFSU2_TR(0x6c068a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c068b:{NFSU2_TR(0x6c068b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c068c:{NFSU2_TR(0x6c068c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c068f:L6c068f:{c.instructions+=7;NFSU2_TR(0x6c068f);
__builtin_memmove((R+28),(R+28),4);
}
B6c0691:{NFSU2_TR(0x6c0691);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0692:{NFSU2_TR(0x6c0692);
__builtin_memmove((R+20),(R+16),4);
}
B6c0694:{NFSU2_TR(0x6c0694);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0695:{NFSU2_TR(0x6c0695);
__builtin_memmove((R+24),(R+4),4);
}
B6c0697:{NFSU2_TR(0x6c0697);
u8 U[4];
w4(U+0,u32(0x7bd2f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6c069d:{NFSU2_TR(0x6c069d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c06a2ull));
TAIL_STATIC(0x6cd245u,6cd);
}
B6c06a2:L6c06a2:{c.instructions+=2;NFSU2_TR(0x6c06a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6c06a6:{NFSU2_TR(0x6c06a6);
if(r1(R+518)){{goto L6c06af;}}
}
B6c06a8:L6c06a8:{c.instructions+=2;NFSU2_TR(0x6c06a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06a9:{NFSU2_TR(0x6c06a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c06aeull));
TAIL_STATIC(0x575630u,575);
}
B6c06ae:L6c06ae:{c.instructions+=1;NFSU2_TR(0x6c06ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c06af:L6c06af:{c.instructions+=4;NFSU2_TR(0x6c06af);
__builtin_memmove((R+0),(R+24),4);
}
B6c06b1:{NFSU2_TR(0x6c06b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c06b2:{NFSU2_TR(0x6c06b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c06b3:{NFSU2_TR(0x6c06b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c06b6:L6c06b6:{c.instructions+=14;NFSU2_TR(0x6c06b6);
__builtin_memmove((R+28),(R+28),4);
}
B6c06b8:{NFSU2_TR(0x6c06b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06b9:{NFSU2_TR(0x6c06b9);
__builtin_memmove((R+20),(R+16),4);
}
B6c06bb:{NFSU2_TR(0x6c06bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06bc:{NFSU2_TR(0x6c06bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c06bf:{NFSU2_TR(0x6c06bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06c0:{NFSU2_TR(0x6c06c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06c1:{NFSU2_TR(0x6c06c1);
__builtin_memmove((R+28),(R+4),4);
}
B6c06c3:{NFSU2_TR(0x6c06c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c06c6:{NFSU2_TR(0x6c06c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c06c9:{NFSU2_TR(0x6c06c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c06cc:{NFSU2_TR(0x6c06cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c06cf:{NFSU2_TR(0x6c06cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c06d2:{NFSU2_TR(0x6c06d2);
if(r1(R+518)){{goto L6c06e1;}}
}
B6c06d4:L6c06d4:{c.instructions+=4;NFSU2_TR(0x6c06d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06d5:{NFSU2_TR(0x6c06d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06d6:{NFSU2_TR(0x6c06d6);
__builtin_memmove((R+4),(R+28),4);
}
B6c06d8:{NFSU2_TR(0x6c06d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c06ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c06b6u);}goto L6c06b6;}
}
B6c06dd:L6c06dd:{c.instructions+=2;NFSU2_TR(0x6c06dd);
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
B6c06df:{NFSU2_TR(0x6c06df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c0702;}}
}
B6c06e1:L6c06e1:{c.instructions+=3;NFSU2_TR(0x6c06e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06e2:{NFSU2_TR(0x6c06e2);
__builtin_memmove((R+4),(R+28),4);
}
B6c06e4:{NFSU2_TR(0x6c06e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c06e9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c03c5u);}goto L6c03c5;}
}
B6c06e9:L6c06e9:{c.instructions+=2;NFSU2_TR(0x6c06e9);
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
B6c06eb:{NFSU2_TR(0x6c06eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c0702;}}
}
B6c06ed:L6c06ed:{c.instructions+=6;NFSU2_TR(0x6c06ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c06f0:{NFSU2_TR(0x6c06f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c06f3:{NFSU2_TR(0x6c06f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c06f6:{NFSU2_TR(0x6c06f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c06f7:{NFSU2_TR(0x6c06f7);
__builtin_memmove((R+4),(R+28),4);
}
B6c06f9:{NFSU2_TR(0x6c06f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c06feull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c06fe:L6c06fe:{c.instructions+=2;NFSU2_TR(0x6c06fe);
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
B6c0700:{NFSU2_TR(0x6c0700);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c0709;}}
}
B6c0702:L6c0702:{c.instructions+=2;NFSU2_TR(0x6c0702);
w4(R+0,u32(0x8007000eull));
}
B6c0707:{NFSU2_TR(0x6c0707);
{goto L6c0716;}
}
B6c0709:L6c0709:{c.instructions+=4;NFSU2_TR(0x6c0709);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c070f:{NFSU2_TR(0x6c070f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c0712:{NFSU2_TR(0x6c0712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c0714:{NFSU2_TR(0x6c0714);
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
B6c0716:L6c0716:{c.instructions+=5;NFSU2_TR(0x6c0716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0717:{NFSU2_TR(0x6c0717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c0718:{NFSU2_TR(0x6c0718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c0719:{NFSU2_TR(0x6c0719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c071a:{NFSU2_TR(0x6c071a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c071d:L6c071d:{c.instructions+=20;NFSU2_TR(0x6c071d);
__builtin_memmove((R+28),(R+28),4);
}
B6c071f:{NFSU2_TR(0x6c071f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0720:{NFSU2_TR(0x6c0720);
__builtin_memmove((R+20),(R+16),4);
}
B6c0722:{NFSU2_TR(0x6c0722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B6c0728:{NFSU2_TR(0x6c0728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c072c:{NFSU2_TR(0x6c072c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c072e:{NFSU2_TR(0x6c072e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c072f:{NFSU2_TR(0x6c072f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0730:{NFSU2_TR(0x6c0730);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0733:{NFSU2_TR(0x6c0733);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0734:{NFSU2_TR(0x6c0734);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0735:{NFSU2_TR(0x6c0735);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0736:{NFSU2_TR(0x6c0736);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c0738:{NFSU2_TR(0x6c0738);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c073b:{NFSU2_TR(0x6c073b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c073c:{NFSU2_TR(0x6c073c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c073d:{NFSU2_TR(0x6c073d);
__builtin_memmove((R+24),(R+4),4);
}
B6c073f:{NFSU2_TR(0x6c073f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0743:{NFSU2_TR(0x6c0743);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0744:{NFSU2_TR(0x6c0744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c074e;}}
}
B6c0746:L6c0746:{c.instructions+=3;NFSU2_TR(0x6c0746);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c0748:{NFSU2_TR(0x6c0748);
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
B6c0749:{NFSU2_TR(0x6c0749);
TAIL_STATIC(0x6c13b3u,6c1);
}
B6c074e:L6c074e:{c.instructions+=3;NFSU2_TR(0x6c074e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0751:{NFSU2_TR(0x6c0751);
__builtin_memmove((R+4),(R+24),4);
}
B6c0753:{NFSU2_TR(0x6c0753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0758ull));
TAIL_STATIC(0x6acbbbu,6ac);
}
B6c0758:L6c0758:{c.instructions+=3;NFSU2_TR(0x6c0758);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c075a:{NFSU2_TR(0x6c075a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c075d:{NFSU2_TR(0x6c075d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138du,6c1);}
}
B6c0763:L6c0763:{c.instructions+=7;NFSU2_TR(0x6c0763);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0765:{NFSU2_TR(0x6c0765);
u8 U[4];
w4(U+0,u32(0x42080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c076a:{NFSU2_TR(0x6c076a);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c076f:{NFSU2_TR(0x6c076f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0772:{NFSU2_TR(0x6c0772);
__builtin_memmove((R+4),(R+24),4);
}
B6c0774:{NFSU2_TR(0x6c0774);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0777:{NFSU2_TR(0x6c0777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c077cull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6c077c:L6c077c:{c.instructions+=3;NFSU2_TR(0x6c077c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c077e:{NFSU2_TR(0x6c077e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0781:{NFSU2_TR(0x6c0781);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138du,6c1);}
}
B6c0787:L6c0787:{c.instructions+=18;NFSU2_TR(0x6c0787);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c078a:{NFSU2_TR(0x6c078a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c078e:{NFSU2_TR(0x6c078e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0792:{NFSU2_TR(0x6c0792);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0795:{NFSU2_TR(0x6c0795);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0796:{NFSU2_TR(0x6c0796);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0797:{NFSU2_TR(0x6c0797);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0798:{NFSU2_TR(0x6c0798);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c0799:{NFSU2_TR(0x6c0799);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c079b:{NFSU2_TR(0x6c079b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c079e:{NFSU2_TR(0x6c079e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c079f:{NFSU2_TR(0x6c079f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c07a0:{NFSU2_TR(0x6c07a0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c07a1:{NFSU2_TR(0x6c07a1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c07a2:{NFSU2_TR(0x6c07a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c07a5:{NFSU2_TR(0x6c07a5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c07a7:{NFSU2_TR(0x6c07a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c07a8:{NFSU2_TR(0x6c07a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0860;}}
}
B6c07ae:L6c07ae:{c.instructions+=3;NFSU2_TR(0x6c07ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c07b1:{NFSU2_TR(0x6c07b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c07b4:{NFSU2_TR(0x6c07b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c07b7:L6c07b7:{c.instructions+=4;NFSU2_TR(0x6c07b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c07b9:{NFSU2_TR(0x6c07b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c07bc:{NFSU2_TR(0x6c07bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c07be:{NFSU2_TR(0x6c07be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c07ce;}}
}
B6c07c0:L6c07c0:{c.instructions+=4;NFSU2_TR(0x6c07c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c07c3:{NFSU2_TR(0x6c07c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c07c4:{NFSU2_TR(0x6c07c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07c7:{NFSU2_TR(0x6c07c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c07ce;}}
}
B6c07c9:L6c07c9:{c.instructions+=2;NFSU2_TR(0x6c07c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c07cc:{NFSU2_TR(0x6c07cc);
{goto L6c07e2;}
}
B6c07ce:L6c07ce:{c.instructions+=2;NFSU2_TR(0x6c07ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07d4:{NFSU2_TR(0x6c07d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c07e2;}}
}
B6c07d6:L6c07d6:{c.instructions+=4;NFSU2_TR(0x6c07d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c07d9:{NFSU2_TR(0x6c07d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c07da:{NFSU2_TR(0x6c07da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07dd:{NFSU2_TR(0x6c07dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c07e2;}}
}
B6c07df:L6c07df:{c.instructions+=1;NFSU2_TR(0x6c07df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c07e2:L6c07e2:{c.instructions+=2;NFSU2_TR(0x6c07e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07e8:{NFSU2_TR(0x6c07e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0808;}}
}
B6c07ea:L6c07ea:{c.instructions+=3;NFSU2_TR(0x6c07ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c07ed:{NFSU2_TR(0x6c07ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07f0:{NFSU2_TR(0x6c07f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c07f5;}}
}
B6c07f2:L6c07f2:{c.instructions+=1;NFSU2_TR(0x6c07f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c07f5:L6c07f5:{c.instructions+=2;NFSU2_TR(0x6c07f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c07fb:{NFSU2_TR(0x6c07fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0808;}}
}
B6c07fd:L6c07fd:{c.instructions+=3;NFSU2_TR(0x6c07fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0800:{NFSU2_TR(0x6c0800);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c0803:{NFSU2_TR(0x6c0803);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c0808;}}
}
B6c0805:L6c0805:{c.instructions+=1;NFSU2_TR(0x6c0805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0808:L6c0808:{c.instructions+=2;NFSU2_TR(0x6c0808);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c080e:{NFSU2_TR(0x6c080e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c082e;}}
}
B6c0810:L6c0810:{c.instructions+=3;NFSU2_TR(0x6c0810);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0813:{NFSU2_TR(0x6c0813);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0816:{NFSU2_TR(0x6c0816);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c081b;}}
}
B6c0818:L6c0818:{c.instructions+=1;NFSU2_TR(0x6c0818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c081b:L6c081b:{c.instructions+=2;NFSU2_TR(0x6c081b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0821:{NFSU2_TR(0x6c0821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c082e;}}
}
B6c0823:L6c0823:{c.instructions+=3;NFSU2_TR(0x6c0823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0826:{NFSU2_TR(0x6c0826);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c0829:{NFSU2_TR(0x6c0829);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c082e;}}
}
B6c082b:L6c082b:{c.instructions+=1;NFSU2_TR(0x6c082b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c082e:L6c082e:{c.instructions+=2;NFSU2_TR(0x6c082e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0834:{NFSU2_TR(0x6c0834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0854;}}
}
B6c0836:L6c0836:{c.instructions+=3;NFSU2_TR(0x6c0836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0839:{NFSU2_TR(0x6c0839);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c083c:{NFSU2_TR(0x6c083c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0841;}}
}
B6c083e:L6c083e:{c.instructions+=1;NFSU2_TR(0x6c083e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0841:L6c0841:{c.instructions+=2;NFSU2_TR(0x6c0841);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0847:{NFSU2_TR(0x6c0847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0854;}}
}
B6c0849:L6c0849:{c.instructions+=3;NFSU2_TR(0x6c0849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c084c:{NFSU2_TR(0x6c084c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c084f:{NFSU2_TR(0x6c084f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c0854;}}
}
B6c0851:L6c0851:{c.instructions+=1;NFSU2_TR(0x6c0851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0854:L6c0854:{c.instructions+=3;NFSU2_TR(0x6c0854);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c0857:{NFSU2_TR(0x6c0857);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c085a:{NFSU2_TR(0x6c085a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c07b7u);}goto L6c07b7;}}
}
B6c0860:L6c0860:{c.instructions+=7;NFSU2_TR(0x6c0860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0866:{NFSU2_TR(0x6c0866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c086a:{NFSU2_TR(0x6c086a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c086d:{NFSU2_TR(0x6c086d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0873:{NFSU2_TR(0x6c0873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0876:{NFSU2_TR(0x6c0876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c087c:{NFSU2_TR(0x6c087c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c087f:L6c087f:{c.instructions+=3;NFSU2_TR(0x6c087f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0882:{NFSU2_TR(0x6c0882);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c0887:{NFSU2_TR(0x6c0887);
if(r1(R+518)){{goto L6c098b;}}
}
B6c088d:L6c088d:{c.instructions+=5;NFSU2_TR(0x6c088d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6c0891:{NFSU2_TR(0x6c0891);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+12))));
}
B6c0895:{NFSU2_TR(0x6c0895);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c0896:{NFSU2_TR(0x6c0896);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0897:{NFSU2_TR(0x6c0897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c089cull));
TAIL_STATIC(0x575620u,575);
}
B6c089c:L6c089c:{c.instructions+=4;NFSU2_TR(0x6c089c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c089e:{NFSU2_TR(0x6c089e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c089f:{NFSU2_TR(0x6c089f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c08a2:{NFSU2_TR(0x6c08a2);
if(r1(R+518)){{goto L6c0a40;}}
}
B6c08a8:L6c08a8:{c.instructions+=5;NFSU2_TR(0x6c08a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c08ab:{NFSU2_TR(0x6c08ab);
__builtin_memmove((R+4),(R+12),4);
}
B6c08ad:{NFSU2_TR(0x6c08ad);
__builtin_memmove((R+8),(R+4),4);
}
B6c08af:{NFSU2_TR(0x6c08af);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c08b2:{NFSU2_TR(0x6c08b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c08b4:L6c08b4:{c.instructions+=1;NFSU2_TR(0x6c08b4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c08b6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c08b4u);}goto L6c08b4;}
}
B6c08b6:L6c08b6:{c.instructions+=2;NFSU2_TR(0x6c08b6);
__builtin_memmove((R+4),(R+8),4);
}
B6c08b8:{NFSU2_TR(0x6c08b8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c08bb:L6c08bb:{c.instructions+=1;NFSU2_TR(0x6c08bb);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c08bd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c08bbu);}goto L6c08bb;}
}
B6c08bd:L6c08bd:{c.instructions+=3;NFSU2_TR(0x6c08bd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c08bf:{NFSU2_TR(0x6c08bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c08c2:{NFSU2_TR(0x6c08c2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c08ed;}}
}
B6c08c4:L6c08c4:{c.instructions+=2;NFSU2_TR(0x6c08c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c08c7:{NFSU2_TR(0x6c08c7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c08cb:L6c08cb:{c.instructions+=4;NFSU2_TR(0x6c08cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c08ce:{NFSU2_TR(0x6c08ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c08d1:{NFSU2_TR(0x6c08d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c08d4:{NFSU2_TR(0x6c08d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c08e7;}}
}
B6c08d6:L6c08d6:{c.instructions+=5;NFSU2_TR(0x6c08d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c08d9:{NFSU2_TR(0x6c08d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c08dc:{NFSU2_TR(0x6c08dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+12))));
}
B6c08e0:{NFSU2_TR(0x6c08e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c08e3:{NFSU2_TR(0x6c08e3);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6c08e7:L6c08e7:{c.instructions+=3;NFSU2_TR(0x6c08e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c08e8:{NFSU2_TR(0x6c08e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c08eb:{NFSU2_TR(0x6c08eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c08cbu);}goto L6c08cb;}}
}
B6c08ed:L6c08ed:{c.instructions+=4;NFSU2_TR(0x6c08ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c08ef:{NFSU2_TR(0x6c08ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c08f1:{NFSU2_TR(0x6c08f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c08f4:{NFSU2_TR(0x6c08f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c091b;}}
}
B6c08f6:L6c08f6:{c.instructions+=2;NFSU2_TR(0x6c08f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c08f9:{NFSU2_TR(0x6c08f9);
{goto L6c0902;}
}
B6c08fb:L6c08fb:{c.instructions+=2;NFSU2_TR(0x6c08fb);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6c08ff:{NFSU2_TR(0x6c08ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0906;}}
}
B6c0901:L6c0901:{c.instructions+=1;NFSU2_TR(0x6c0901);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0902:L6c0902:{c.instructions+=2;NFSU2_TR(0x6c0902);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c0904:{NFSU2_TR(0x6c0904);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c08fbu);}goto L6c08fb;}}
}
B6c0906:L6c0906:{c.instructions+=2;NFSU2_TR(0x6c0906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0909:{NFSU2_TR(0x6c0909);
{goto L6c0912;}
}
B6c090b:L6c090b:{c.instructions+=2;NFSU2_TR(0x6c090b);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6c090f:{NFSU2_TR(0x6c090f);
if(r1(R+518)){{goto L6c0916;}}
}
B6c0911:L6c0911:{c.instructions+=1;NFSU2_TR(0x6c0911);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0912:L6c0912:{c.instructions+=2;NFSU2_TR(0x6c0912);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c0914:{NFSU2_TR(0x6c0914);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c090bu);}goto L6c090b;}}
}
B6c0916:L6c0916:{c.instructions+=3;NFSU2_TR(0x6c0916);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0917:{NFSU2_TR(0x6c0917);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c0919:{NFSU2_TR(0x6c0919);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c08fbu);}goto L6c08fb;}}
}
B6c091b:L6c091b:{c.instructions+=4;NFSU2_TR(0x6c091b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c091e:{NFSU2_TR(0x6c091e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0921:{NFSU2_TR(0x6c0921);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0922:{NFSU2_TR(0x6c0922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0927ull));
TAIL_STATIC(0x575620u,575);
}
B6c0927:L6c0927:{c.instructions+=5;NFSU2_TR(0x6c0927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0929:{NFSU2_TR(0x6c0929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c092c:{NFSU2_TR(0x6c092c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c092d:{NFSU2_TR(0x6c092d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c0931:{NFSU2_TR(0x6c0931);
if(r1(R+518)){{goto L6c0a37;}}
}
B6c0937:L6c0937:{c.instructions+=3;NFSU2_TR(0x6c0937);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c0939:{NFSU2_TR(0x6c0939);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c093b:{NFSU2_TR(0x6c093b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c097b;}}
}
B6c093d:L6c093d:{c.instructions+=1;NFSU2_TR(0x6c093d);
{goto L6c0949;}
}
B6c093f:L6c093f:{c.instructions+=3;NFSU2_TR(0x6c093f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0942:{NFSU2_TR(0x6c0942);
u8 U[11];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6c0946:{NFSU2_TR(0x6c0946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c094d;}}
}
B6c0948:L6c0948:{c.instructions+=1;NFSU2_TR(0x6c0948);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0949:L6c0949:{c.instructions+=2;NFSU2_TR(0x6c0949);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c094b:{NFSU2_TR(0x6c094b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c093fu);}goto L6c093f;}}
}
B6c094d:L6c094d:{c.instructions+=5;NFSU2_TR(0x6c094d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c0951:{NFSU2_TR(0x6c0951);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6c0953:{NFSU2_TR(0x6c0953);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c0955:{NFSU2_TR(0x6c0955);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c0958:{NFSU2_TR(0x6c0958);
{goto L6c0964;}
}
B6c095a:L6c095a:{c.instructions+=3;NFSU2_TR(0x6c095a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c095d:{NFSU2_TR(0x6c095d);
u8 U[11];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6c0961:{NFSU2_TR(0x6c0961);
if(r1(R+518)){{goto L6c0968;}}
}
B6c0963:L6c0963:{c.instructions+=1;NFSU2_TR(0x6c0963);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0964:L6c0964:{c.instructions+=2;NFSU2_TR(0x6c0964);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c0966:{NFSU2_TR(0x6c0966);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c095au);}goto L6c095a;}}
}
B6c0968:L6c0968:{c.instructions+=8;NFSU2_TR(0x6c0968);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c096c:{NFSU2_TR(0x6c096c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B6c096f:{NFSU2_TR(0x6c096f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6c0971:{NFSU2_TR(0x6c0971);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c0973:{NFSU2_TR(0x6c0973);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c0976:{NFSU2_TR(0x6c0976);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0977:{NFSU2_TR(0x6c0977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c0979:{NFSU2_TR(0x6c0979);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c093fu);}goto L6c093f;}}
}
B6c097b:L6c097b:{c.instructions+=2;NFSU2_TR(0x6c097b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c097e:{NFSU2_TR(0x6c097e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0983ull));
TAIL_STATIC(0x575630u,575);
}
B6c0983:L6c0983:{c.instructions+=3;NFSU2_TR(0x6c0983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0986:{NFSU2_TR(0x6c0986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0987:{NFSU2_TR(0x6c0987);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c098b:L6c098b:{c.instructions+=3;NFSU2_TR(0x6c098b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c098f:{NFSU2_TR(0x6c098f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xcull))));
}
B6c0993:{NFSU2_TR(0x6c0993);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c087fu);}goto L6c087f;}}
}
B6c0999:L6c0999:{c.instructions+=4;NFSU2_TR(0x6c0999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c099c:{NFSU2_TR(0x6c099c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c099f:{NFSU2_TR(0x6c099f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c09a0:{NFSU2_TR(0x6c09a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c09a5ull));
TAIL_STATIC(0x575620u,575);
}
B6c09a5:L6c09a5:{c.instructions+=4;NFSU2_TR(0x6c09a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c09a7:{NFSU2_TR(0x6c09a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c09a8:{NFSU2_TR(0x6c09a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c09ab:{NFSU2_TR(0x6c09ab);
if(r1(R+518)){{goto L6c0a40;}}
}
B6c09b1:L6c09b1:{c.instructions+=2;NFSU2_TR(0x6c09b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x40ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c09b5:{NFSU2_TR(0x6c09b5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c09bb:L6c09bb:{c.instructions+=5;NFSU2_TR(0x6c09bb);
__builtin_memmove((R+4),(R+28),4);
}
B6c09bd:{NFSU2_TR(0x6c09bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c09c0:{NFSU2_TR(0x6c09c0);
__builtin_memmove((R+8),(R+4),4);
}
B6c09c2:{NFSU2_TR(0x6c09c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c09c5:{NFSU2_TR(0x6c09c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c09c7:L6c09c7:{c.instructions+=1;NFSU2_TR(0x6c09c7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c09c9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c09c7u);}goto L6c09c7;}
}
B6c09c9:L6c09c9:{c.instructions+=2;NFSU2_TR(0x6c09c9);
__builtin_memmove((R+4),(R+8),4);
}
B6c09cb:{NFSU2_TR(0x6c09cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c09ce:L6c09ce:{c.instructions+=1;NFSU2_TR(0x6c09ce);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c09d0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c09ceu);}goto L6c09ce;}
}
B6c09d0:L6c09d0:{c.instructions+=4;NFSU2_TR(0x6c09d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c09d2:{NFSU2_TR(0x6c09d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c09d4:{NFSU2_TR(0x6c09d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c09d7:{NFSU2_TR(0x6c09d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0a73;}}
}
B6c09dd:L6c09dd:{c.instructions+=5;NFSU2_TR(0x6c09dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c09e0:{NFSU2_TR(0x6c09e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c09e3:{NFSU2_TR(0x6c09e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c09e6:{NFSU2_TR(0x6c09e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c09e9:{NFSU2_TR(0x6c09e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a03;}}
}
B6c09eb:L6c09eb:{c.instructions+=2;NFSU2_TR(0x6c09eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c09ef:{NFSU2_TR(0x6c09ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a03;}}
}
B6c09f1:L6c09f1:{c.instructions+=6;NFSU2_TR(0x6c09f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c09f4:{NFSU2_TR(0x6c09f4);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c09f7:{NFSU2_TR(0x6c09f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c09fa:{NFSU2_TR(0x6c09fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c09fd:{NFSU2_TR(0x6c09fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0a00:{NFSU2_TR(0x6c0a00);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c0a03:L6c0a03:{c.instructions+=2;NFSU2_TR(0x6c0a03);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x54580100ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0a0d:{NFSU2_TR(0x6c0a0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a69;}}
}
B6c0a0f:L6c0a0f:{c.instructions+=3;NFSU2_TR(0x6c0a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0a12:{NFSU2_TR(0x6c0a12);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0a18:{NFSU2_TR(0x6c0a18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a58;}}
}
B6c0a1a:L6c0a1a:{c.instructions+=2;NFSU2_TR(0x6c0a1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0a1e:{NFSU2_TR(0x6c0a1e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c0b37;}}
}
B6c0a24:L6c0a24:{c.instructions+=4;NFSU2_TR(0x6c0a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0a27:{NFSU2_TR(0x6c0a27);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6c0a2d:{NFSU2_TR(0x6c0a2d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0a30:{NFSU2_TR(0x6c0a30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a4c;}}
}
B6c0a32:L6c0a32:{c.instructions+=2;NFSU2_TR(0x6c0a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a35:{NFSU2_TR(0x6c0a35);
{goto L6c0a58;}
}
B6c0a37:L6c0a37:{c.instructions+=2;NFSU2_TR(0x6c0a37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0a3a:{NFSU2_TR(0x6c0a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0a3full));
TAIL_STATIC(0x575630u,575);
}
B6c0a3f:L6c0a3f:{c.instructions+=1;NFSU2_TR(0x6c0a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0a40:L6c0a40:{c.instructions+=2;NFSU2_TR(0x6c0a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a47:{NFSU2_TR(0x6c0a47);
TAIL_STATIC(0x6c138cu,6c1);
}
B6c0a4c:L6c0a4c:{c.instructions+=2;NFSU2_TR(0x6c0a4c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0a4f:{NFSU2_TR(0x6c0a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a58;}}
}
B6c0a51:L6c0a51:{c.instructions+=1;NFSU2_TR(0x6c0a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a58:L6c0a58:{c.instructions+=2;NFSU2_TR(0x6c0a58);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0a5e:{NFSU2_TR(0x6c0a5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0a69;}}
}
B6c0a60:L6c0a60:{c.instructions+=2;NFSU2_TR(0x6c0a60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0a63:{NFSU2_TR(0x6c0a63);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c0b50;}}
}
B6c0a69:L6c0a69:{c.instructions+=3;NFSU2_TR(0x6c0a69);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c0a6a:{NFSU2_TR(0x6c0a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c0a6d:{NFSU2_TR(0x6c0a6d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c09ddu);}goto L6c09dd;}}
}
B6c0a73:L6c0a73:{c.instructions+=5;NFSU2_TR(0x6c0a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0a76:{NFSU2_TR(0x6c0a76);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0a78:{NFSU2_TR(0x6c0a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a7b:{NFSU2_TR(0x6c0a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a7e:{NFSU2_TR(0x6c0a7e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0ed0;}}
}
B6c0a84:L6c0a84:{c.instructions+=12;NFSU2_TR(0x6c0a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0a87:{NFSU2_TR(0x6c0a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0a8a:{NFSU2_TR(0x6c0a8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c0a8d:{NFSU2_TR(0x6c0a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c0a8f:{NFSU2_TR(0x6c0a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a93:{NFSU2_TR(0x6c0a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a97:{NFSU2_TR(0x6c0a97);
__builtin_memmove((R+12),(R+0),4);
}
B6c0a99:{NFSU2_TR(0x6c0a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0a9c:{NFSU2_TR(0x6c0a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfff00000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0aa3:{NFSU2_TR(0x6c0aa3);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6c0aa9:{NFSU2_TR(0x6c0aa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0aab:{NFSU2_TR(0x6c0aab);
if(r1(R+518)){{goto L6c0d3d;}}
}
B6c0ab1:L6c0ab1:{c.instructions+=13;NFSU2_TR(0x6c0ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0ab4:{NFSU2_TR(0x6c0ab4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c0ab6:{NFSU2_TR(0x6c0ab6);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c0ab6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c0ab6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6c0ab8:{NFSU2_TR(0x6c0ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0abb:{NFSU2_TR(0x6c0abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0abf:{NFSU2_TR(0x6c0abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ac2:{NFSU2_TR(0x6c0ac2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0ac6:{NFSU2_TR(0x6c0ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0ac9:{NFSU2_TR(0x6c0ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0acb:{NFSU2_TR(0x6c0acb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0ace:{NFSU2_TR(0x6c0ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0ad1:{NFSU2_TR(0x6c0ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ad4:{NFSU2_TR(0x6c0ad4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0b04;}}
}
B6c0ad6:L6c0ad6:{c.instructions+=2;NFSU2_TR(0x6c0ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0ad9:{NFSU2_TR(0x6c0ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0adc:L6c0adc:{c.instructions+=14;NFSU2_TR(0x6c0adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0adf:{NFSU2_TR(0x6c0adf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0ae1:{NFSU2_TR(0x6c0ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0ae4:{NFSU2_TR(0x6c0ae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0ae7:{NFSU2_TR(0x6c0ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0aea:{NFSU2_TR(0x6c0aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0aed:{NFSU2_TR(0x6c0aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0af0:{NFSU2_TR(0x6c0af0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c0af4:{NFSU2_TR(0x6c0af4);
__builtin_memmove((R+4),(R+12),4);
}
B6c0af6:{NFSU2_TR(0x6c0af6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c0af9:{NFSU2_TR(0x6c0af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0afc:{NFSU2_TR(0x6c0afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0aff:{NFSU2_TR(0x6c0aff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c0b02:{NFSU2_TR(0x6c0b02);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0adcu);}goto L6c0adc;}}
}
B6c0b04:L6c0b04:{c.instructions+=2;NFSU2_TR(0x6c0b04);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0b07:{NFSU2_TR(0x6c0b07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0b65;}}
}
B6c0b09:L6c0b09:{c.instructions+=2;NFSU2_TR(0x6c0b09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0b0c:{NFSU2_TR(0x6c0b0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0b65;}}
}
B6c0b0e:L6c0b0e:{c.instructions+=6;NFSU2_TR(0x6c0b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b11:{NFSU2_TR(0x6c0b11);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0b12:{NFSU2_TR(0x6c0b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b15:{NFSU2_TR(0x6c0b15);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0b18:{NFSU2_TR(0x6c0b18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c0b1b:{NFSU2_TR(0x6c0b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b1e:L6c0b1e:{c.instructions+=6;NFSU2_TR(0x6c0b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0b20:{NFSU2_TR(0x6c0b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b23:{NFSU2_TR(0x6c0b23);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0b26:{NFSU2_TR(0x6c0b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b29:{NFSU2_TR(0x6c0b29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0b2c:{NFSU2_TR(0x6c0b2c);
if(r1(R+518)){{goto L6c0b57;}}
}
B6c0b2e:L6c0b2e:{c.instructions+=2;NFSU2_TR(0x6c0b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b35:{NFSU2_TR(0x6c0b35);
{goto L6c0b5d;}
}
B6c0b37:L6c0b37:{c.instructions+=1;NFSU2_TR(0x6c0b37);
u8 U[4];
w4(U+0,u32(0x7bd408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0b3c:L6c0b3c:{c.instructions+=4;NFSU2_TR(0x6c0b3c);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0b41:{NFSU2_TR(0x6c0b41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0b42:{NFSU2_TR(0x6c0b42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0b43:{NFSU2_TR(0x6c0b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0b48ull));
TAIL_STATIC(0x69e936u,69e);
}
B6c0b48:L6c0b48:{c.instructions+=2;NFSU2_TR(0x6c0b48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6c0b4b:{NFSU2_TR(0x6c0b4b);
TAIL_STATIC(0x6c138cu,6c1);
}
B6c0b50:L6c0b50:{c.instructions+=2;NFSU2_TR(0x6c0b50);
u8 U[4];
w4(U+0,u32(0x7bd3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0b55:{NFSU2_TR(0x6c0b55);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0b3cu);}goto L6c0b3c;}
}
B6c0b57:L6c0b57:{c.instructions+=2;NFSU2_TR(0x6c0b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b5a:{NFSU2_TR(0x6c0b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b5d:L6c0b5d:{c.instructions+=3;NFSU2_TR(0x6c0b5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c0b60:{NFSU2_TR(0x6c0b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0b63:{NFSU2_TR(0x6c0b63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0b1eu);}goto L6c0b1e;}}
}
B6c0b65:L6c0b65:{c.instructions+=2;NFSU2_TR(0x6c0b65);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0b69:{NFSU2_TR(0x6c0b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0cc1;}}
}
B6c0b6f:L6c0b6f:{c.instructions+=2;NFSU2_TR(0x6c0b6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0b73:{NFSU2_TR(0x6c0b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0cc1;}}
}
B6c0b79:L6c0b79:{c.instructions+=8;NFSU2_TR(0x6c0b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b7c:{NFSU2_TR(0x6c0b7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c0b7e:{NFSU2_TR(0x6c0b7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0b7f:{NFSU2_TR(0x6c0b7f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0b80:{NFSU2_TR(0x6c0b80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0b82:{NFSU2_TR(0x6c0b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b85:{NFSU2_TR(0x6c0b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b88:{NFSU2_TR(0x6c0b88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0cb8;}}
}
B6c0b8e:L6c0b8e:{c.instructions+=15;NFSU2_TR(0x6c0b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0b91:{NFSU2_TR(0x6c0b91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0b93:{NFSU2_TR(0x6c0b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b96:{NFSU2_TR(0x6c0b96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0b99:{NFSU2_TR(0x6c0b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0b9c:{NFSU2_TR(0x6c0b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0b9f:{NFSU2_TR(0x6c0b9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0ba2:{NFSU2_TR(0x6c0ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ba8:{NFSU2_TR(0x6c0ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bab:{NFSU2_TR(0x6c0bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c0bae:{NFSU2_TR(0x6c0bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0bb1:{NFSU2_TR(0x6c0bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bb4:{NFSU2_TR(0x6c0bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bb7:{NFSU2_TR(0x6c0bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c0bba:{NFSU2_TR(0x6c0bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bbd:L6c0bbd:{c.instructions+=7;NFSU2_TR(0x6c0bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0bc0:{NFSU2_TR(0x6c0bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0bc2:{NFSU2_TR(0x6c0bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0bc5:{NFSU2_TR(0x6c0bc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0bc8:{NFSU2_TR(0x6c0bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0bcb:{NFSU2_TR(0x6c0bcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0bce:{NFSU2_TR(0x6c0bce);
if(r1(R+518)){{goto L6c0bd4;}}
}
B6c0bd0:L6c0bd0:{c.instructions+=1;NFSU2_TR(0x6c0bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bd4:L6c0bd4:{c.instructions+=7;NFSU2_TR(0x6c0bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0bd7:{NFSU2_TR(0x6c0bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0bd9:{NFSU2_TR(0x6c0bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0bdc:{NFSU2_TR(0x6c0bdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0bdf:{NFSU2_TR(0x6c0bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0be2:{NFSU2_TR(0x6c0be2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0be5:{NFSU2_TR(0x6c0be5);
if(r1(R+518)){{goto L6c0bed;}}
}
B6c0be7:L6c0be7:{c.instructions+=2;NFSU2_TR(0x6c0be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0beb:{NFSU2_TR(0x6c0beb);
{goto L6c0bf0;}
}
B6c0bed:L6c0bed:{c.instructions+=1;NFSU2_TR(0x6c0bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bf0:L6c0bf0:{c.instructions+=4;NFSU2_TR(0x6c0bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bf4:{NFSU2_TR(0x6c0bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0bf8:{NFSU2_TR(0x6c0bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0bfb:{NFSU2_TR(0x6c0bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0bbdu);}goto L6c0bbd;}}
}
B6c0bfd:L6c0bfd:{c.instructions+=2;NFSU2_TR(0x6c0bfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0c01:{NFSU2_TR(0x6c0c01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0cb8;}}
}
B6c0c07:L6c0c07:{c.instructions+=15;NFSU2_TR(0x6c0c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0c0a:{NFSU2_TR(0x6c0c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c0c0c:{NFSU2_TR(0x6c0c0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0c0d:{NFSU2_TR(0x6c0c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c10:{NFSU2_TR(0x6c0c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0c13:{NFSU2_TR(0x6c0c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0c16:{NFSU2_TR(0x6c0c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c19:{NFSU2_TR(0x6c0c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c1c:{NFSU2_TR(0x6c0c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c22:{NFSU2_TR(0x6c0c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c25:{NFSU2_TR(0x6c0c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c28:{NFSU2_TR(0x6c0c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c2b:{NFSU2_TR(0x6c0c2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c0c2e:{NFSU2_TR(0x6c0c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c35:{NFSU2_TR(0x6c0c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c38:L6c0c38:{c.instructions+=6;NFSU2_TR(0x6c0c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c3b:{NFSU2_TR(0x6c0c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c0c3d:{NFSU2_TR(0x6c0c3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0c40:{NFSU2_TR(0x6c0c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0c43:{NFSU2_TR(0x6c0c43);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0c46:{NFSU2_TR(0x6c0c46);
if(r1(R+518)){{goto L6c0c4c;}}
}
B6c0c48:L6c0c48:{c.instructions+=1;NFSU2_TR(0x6c0c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c4c:L6c0c4c:{c.instructions+=7;NFSU2_TR(0x6c0c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c4f:{NFSU2_TR(0x6c0c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0c51:{NFSU2_TR(0x6c0c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c54:{NFSU2_TR(0x6c0c54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0c57:{NFSU2_TR(0x6c0c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c5a:{NFSU2_TR(0x6c0c5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0c5d:{NFSU2_TR(0x6c0c5d);
if(r1(R+518)){{goto L6c0c65;}}
}
B6c0c5f:L6c0c5f:{c.instructions+=2;NFSU2_TR(0x6c0c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c63:{NFSU2_TR(0x6c0c63);
{goto L6c0c68;}
}
B6c0c65:L6c0c65:{c.instructions+=1;NFSU2_TR(0x6c0c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c68:L6c0c68:{c.instructions+=4;NFSU2_TR(0x6c0c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c6c:{NFSU2_TR(0x6c0c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c70:{NFSU2_TR(0x6c0c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0c73:{NFSU2_TR(0x6c0c73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0c38u);}goto L6c0c38;}}
}
B6c0c75:L6c0c75:{c.instructions+=2;NFSU2_TR(0x6c0c75);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0c79:{NFSU2_TR(0x6c0c79);
if(r1(R+518)){{goto L6c0cc1;}}
}
B6c0c7b:L6c0c7b:{c.instructions+=3;NFSU2_TR(0x6c0c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c7f:{NFSU2_TR(0x6c0c7f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0c81:{NFSU2_TR(0x6c0c81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0cb8;}}
}
B6c0c83:L6c0c83:{c.instructions+=3;NFSU2_TR(0x6c0c83);
__builtin_memmove((R+0),(R+12),4);
}
B6c0c85:{NFSU2_TR(0x6c0c85);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0c88:{NFSU2_TR(0x6c0c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c8b:L6c0c8b:{c.instructions+=16;NFSU2_TR(0x6c0c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0c8e:{NFSU2_TR(0x6c0c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0c91:{NFSU2_TR(0x6c0c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c94:{NFSU2_TR(0x6c0c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c0c97:{NFSU2_TR(0x6c0c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0c99:{NFSU2_TR(0x6c0c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0c9c:{NFSU2_TR(0x6c0c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0c9f:{NFSU2_TR(0x6c0c9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0ca2:{NFSU2_TR(0x6c0ca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c0ca4:{NFSU2_TR(0x6c0ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0ca7:{NFSU2_TR(0x6c0ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0caa:{NFSU2_TR(0x6c0caa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c0cad:{NFSU2_TR(0x6c0cad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c0cb0:{NFSU2_TR(0x6c0cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c0cb3:{NFSU2_TR(0x6c0cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0cb6:{NFSU2_TR(0x6c0cb6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0c8bu);}goto L6c0c8b;}}
}
B6c0cb8:L6c0cb8:{c.instructions+=2;NFSU2_TR(0x6c0cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0cbf:{NFSU2_TR(0x6c0cbf);
{goto L6c0d3d;}
}
B6c0cc1:L6c0cc1:{c.instructions+=5;NFSU2_TR(0x6c0cc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c0cc3:{NFSU2_TR(0x6c0cc3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0cc4:{NFSU2_TR(0x6c0cc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0cc6:{NFSU2_TR(0x6c0cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0cc9:{NFSU2_TR(0x6c0cc9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0d27;}}
}
B6c0ccb:L6c0ccb:{c.instructions+=3;NFSU2_TR(0x6c0ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ccf:{NFSU2_TR(0x6c0ccf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0cd3:{NFSU2_TR(0x6c0cd3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0d1f;}}
}
B6c0cd5:L6c0cd5:{c.instructions+=4;NFSU2_TR(0x6c0cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0cd8:{NFSU2_TR(0x6c0cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0cdb:{NFSU2_TR(0x6c0cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c0cde:{NFSU2_TR(0x6c0cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ce1:L6c0ce1:{c.instructions+=12;NFSU2_TR(0x6c0ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0ce4:{NFSU2_TR(0x6c0ce4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c0ce8:{NFSU2_TR(0x6c0ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c0cea:{NFSU2_TR(0x6c0cea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0ceb:{NFSU2_TR(0x6c0ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0cee:{NFSU2_TR(0x6c0cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0cf1:{NFSU2_TR(0x6c0cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c0cf3:{NFSU2_TR(0x6c0cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0cf6:{NFSU2_TR(0x6c0cf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c0cf9:{NFSU2_TR(0x6c0cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0cfc:{NFSU2_TR(0x6c0cfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0cff:{NFSU2_TR(0x6c0cff);
if(r1(R+518)){{goto L6c0d0a;}}
}
B6c0d01:L6c0d01:{c.instructions+=2;NFSU2_TR(0x6c0d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0d08:{NFSU2_TR(0x6c0d08);
{goto L6c0d0c;}
}
B6c0d0a:L6c0d0a:{c.instructions+=1;NFSU2_TR(0x6c0d0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c0d0c:L6c0d0c:{c.instructions+=7;NFSU2_TR(0x6c0d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0d0f:{NFSU2_TR(0x6c0d0f);
__builtin_memmove((R+0),(R+12),4);
}
B6c0d11:{NFSU2_TR(0x6c0d11);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0d14:{NFSU2_TR(0x6c0d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0d17:{NFSU2_TR(0x6c0d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0d1a:{NFSU2_TR(0x6c0d1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c0d1d:{NFSU2_TR(0x6c0d1d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0ce1u);}goto L6c0ce1;}}
}
B6c0d1f:L6c0d1f:{c.instructions+=3;NFSU2_TR(0x6c0d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0d22:{NFSU2_TR(0x6c0d22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c0d25:{NFSU2_TR(0x6c0d25);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0ccbu);}goto L6c0ccb;}}
}
B6c0d27:L6c0d27:{c.instructions+=3;NFSU2_TR(0x6c0d27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c0d29:{NFSU2_TR(0x6c0d29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0d2c:{NFSU2_TR(0x6c0d2c);
if(r1(R+518)){{goto L6c0d3d;}}
}
B6c0d2e:L6c0d2e:{c.instructions+=2;NFSU2_TR(0x6c0d2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0d35:{NFSU2_TR(0x6c0d35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0d4a;}}
}
B6c0d37:L6c0d37:{c.instructions+=1;NFSU2_TR(0x6c0d37);
u8 U[4];
w4(U+0,u32(0x70e00001ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6c0d3d:L6c0d3d:{c.instructions+=3;NFSU2_TR(0x6c0d3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0d3e:{NFSU2_TR(0x6c0d3e);
__builtin_memmove((R+4),(R+24),4);
}
B6c0d40:{NFSU2_TR(0x6c0d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0d45ull));
TAIL_STATIC(0x699d92u,699);
}
B6c0d45:L6c0d45:{c.instructions+=1;NFSU2_TR(0x6c0d45);
{goto L6c0ebc;}
}
B6c0d4a:L6c0d4a:{c.instructions+=2;NFSU2_TR(0x6c0d4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0d51:{NFSU2_TR(0x6c0d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0de5;}}
}
B6c0d57:L6c0d57:{c.instructions+=3;NFSU2_TR(0x6c0d57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0d59:{NFSU2_TR(0x6c0d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0d5c:{NFSU2_TR(0x6c0d5c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0ebc;}}
}
B6c0d62:L6c0d62:{c.instructions+=7;NFSU2_TR(0x6c0d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0d65:{NFSU2_TR(0x6c0d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0d68:{NFSU2_TR(0x6c0d68);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0d6b:{NFSU2_TR(0x6c0d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0d6e:{NFSU2_TR(0x6c0d6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0d71:{NFSU2_TR(0x6c0d71);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0d75:{NFSU2_TR(0x6c0d75);
if(r1(R+518)){{goto L6c0dd8;}}
}
B6c0d77:L6c0d77:{c.instructions+=5;NFSU2_TR(0x6c0d77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0d7b:{NFSU2_TR(0x6c0d7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0d7d:{NFSU2_TR(0x6c0d7d);
__builtin_memmove((R+4),(R+24),4);
}
B6c0d7f:{NFSU2_TR(0x6c0d7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0d81:{NFSU2_TR(0x6c0d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0d8a;}}
}
B6c0d83:L6c0d83:{c.instructions+=2;NFSU2_TR(0x6c0d83);
u8 U[4];
w4(U+0,u32(0x10900001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0d88:{NFSU2_TR(0x6c0d88);
{goto L6c0d8f;}
}
B6c0d8a:L6c0d8a:{c.instructions+=1;NFSU2_TR(0x6c0d8a);
u8 U[4];
w4(U+0,u32(0x10800001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0d8f:L6c0d8f:{c.instructions+=1;NFSU2_TR(0x6c0d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0d94ull));
TAIL_STATIC(0x699c99u,699);
}
B6c0d94:L6c0d94:{c.instructions+=2;NFSU2_TR(0x6c0d94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0d97:{NFSU2_TR(0x6c0d97);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0a40u);}goto L6c0a40;}}
}
B6c0d9d:L6c0d9d:{c.instructions+=6;NFSU2_TR(0x6c0d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0da0:{NFSU2_TR(0x6c0da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0da3:{NFSU2_TR(0x6c0da3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0da4:{NFSU2_TR(0x6c0da4);
__builtin_memmove((R+4),(R+0),4);
}
B6c0da6:{NFSU2_TR(0x6c0da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0da9:{NFSU2_TR(0x6c0da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0daeull));
TAIL_STATIC(0x698eb3u,698);
}
B6c0dae:L6c0dae:{c.instructions+=3;NFSU2_TR(0x6c0dae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c0db0:{NFSU2_TR(0x6c0db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0db3:{NFSU2_TR(0x6c0db3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c0db9:L6c0db9:{c.instructions+=11;NFSU2_TR(0x6c0db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0dbc:{NFSU2_TR(0x6c0dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0dbf:{NFSU2_TR(0x6c0dbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0dc2:{NFSU2_TR(0x6c0dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0dc5:{NFSU2_TR(0x6c0dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0dc8:{NFSU2_TR(0x6c0dc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c0dca:{NFSU2_TR(0x6c0dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0dcd:{NFSU2_TR(0x6c0dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0dd0:{NFSU2_TR(0x6c0dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0dd3:{NFSU2_TR(0x6c0dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c0dd6:{NFSU2_TR(0x6c0dd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c0dd8:L6c0dd8:{c.instructions+=3;NFSU2_TR(0x6c0dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ddb:{NFSU2_TR(0x6c0ddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c0dde:{NFSU2_TR(0x6c0dde);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0d62u);}goto L6c0d62;}}
}
B6c0de0:L6c0de0:{c.instructions+=1;NFSU2_TR(0x6c0de0);
{goto L6c0ebc;}
}
B6c0de5:L6c0de5:{c.instructions+=3;NFSU2_TR(0x6c0de5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0de7:{NFSU2_TR(0x6c0de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0dea:{NFSU2_TR(0x6c0dea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0ebc;}}
}
B6c0df0:L6c0df0:{c.instructions+=2;NFSU2_TR(0x6c0df0);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0df2:{NFSU2_TR(0x6c0df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0df7ull));
TAIL_STATIC(0x699317u,699);
}
B6c0df7:L6c0df7:{c.instructions+=2;NFSU2_TR(0x6c0df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0df9:{NFSU2_TR(0x6c0df9);
if(r1(R+518)){{goto L6c0e07;}}
}
B6c0dfb:L6c0dfb:{c.instructions+=2;NFSU2_TR(0x6c0dfb);
__builtin_memmove((R+4),(R+0),4);
}
B6c0dfd:{NFSU2_TR(0x6c0dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0e02ull));
TAIL_STATIC(0x698e7du,698);
}
B6c0e02:L6c0e02:{c.instructions+=2;NFSU2_TR(0x6c0e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e05:{NFSU2_TR(0x6c0e05);
{goto L6c0e0b;}
}
B6c0e07:L6c0e07:{c.instructions+=1;NFSU2_TR(0x6c0e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e0b:L6c0e0b:{c.instructions+=6;NFSU2_TR(0x6c0e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e0e:{NFSU2_TR(0x6c0e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0e11:{NFSU2_TR(0x6c0e11);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0e14:{NFSU2_TR(0x6c0e14);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0e16:{NFSU2_TR(0x6c0e16);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c0e1d:{NFSU2_TR(0x6c0e1d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0a40u);}goto L6c0a40;}}
}
B6c0e23:L6c0e23:{c.instructions+=7;NFSU2_TR(0x6c0e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e26:{NFSU2_TR(0x6c0e26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0e28:{NFSU2_TR(0x6c0e28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0e2a:{NFSU2_TR(0x6c0e2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0e2d:{NFSU2_TR(0x6c0e2d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B6c0e30:{NFSU2_TR(0x6c0e30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0e31:{NFSU2_TR(0x6c0e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0e36ull));
TAIL_STATIC(0x699362u,699);
}
B6c0e36:L6c0e36:{c.instructions+=3;NFSU2_TR(0x6c0e36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c0e38:{NFSU2_TR(0x6c0e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e3b:{NFSU2_TR(0x6c0e3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c0e41:L6c0e41:{c.instructions+=3;NFSU2_TR(0x6c0e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0e44:{NFSU2_TR(0x6c0e44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0e45:{NFSU2_TR(0x6c0e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0e4aull));
TAIL_STATIC(0x698eb3u,698);
}
B6c0e4a:L6c0e4a:{c.instructions+=3;NFSU2_TR(0x6c0e4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c0e4c:{NFSU2_TR(0x6c0e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e4f:{NFSU2_TR(0x6c0e4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c0e55:L6c0e55:{c.instructions+=10;NFSU2_TR(0x6c0e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e58:{NFSU2_TR(0x6c0e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0e5b:{NFSU2_TR(0x6c0e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e5e:{NFSU2_TR(0x6c0e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0e61:{NFSU2_TR(0x6c0e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e65:{NFSU2_TR(0x6c0e65);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0e68:{NFSU2_TR(0x6c0e68);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0e6c:{NFSU2_TR(0x6c0e6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c0e6f:{NFSU2_TR(0x6c0e6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c0e71:{NFSU2_TR(0x6c0e71);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0e9c;}}
}
B6c0e73:L6c0e73:{c.instructions+=1;NFSU2_TR(0x6c0e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e76:L6c0e76:{c.instructions+=14;NFSU2_TR(0x6c0e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e79:{NFSU2_TR(0x6c0e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c0e7c:{NFSU2_TR(0x6c0e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c0e7f:{NFSU2_TR(0x6c0e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0e82:{NFSU2_TR(0x6c0e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0e85:{NFSU2_TR(0x6c0e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0e88:{NFSU2_TR(0x6c0e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c0e8b:{NFSU2_TR(0x6c0e8b);
__builtin_memmove((R+4),(R+12),4);
}
B6c0e8d:{NFSU2_TR(0x6c0e8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c0e90:{NFSU2_TR(0x6c0e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e93:{NFSU2_TR(0x6c0e93);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c0e94:{NFSU2_TR(0x6c0e94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c0e97:{NFSU2_TR(0x6c0e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0e9a:{NFSU2_TR(0x6c0e9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0e76u);}goto L6c0e76;}}
}
B6c0e9c:L6c0e9c:{c.instructions+=3;NFSU2_TR(0x6c0e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0e9f:{NFSU2_TR(0x6c0e9f);
__builtin_memmove((R+4),(R+24),4);
}
B6c0ea1:{NFSU2_TR(0x6c0ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0ea6ull));
TAIL_STATIC(0x699d92u,699);
}
B6c0ea6:L6c0ea6:{c.instructions+=3;NFSU2_TR(0x6c0ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0ea9:{NFSU2_TR(0x6c0ea9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0eab:{NFSU2_TR(0x6c0eab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0eb0ull));
TAIL_STATIC(0x6739efu,673);
}
B6c0eb0:L6c0eb0:{c.instructions+=3;NFSU2_TR(0x6c0eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0eb3:{NFSU2_TR(0x6c0eb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c0eb6:{NFSU2_TR(0x6c0eb6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0df0u);}goto L6c0df0;}}
}
B6c0ebc:L6c0ebc:{c.instructions+=5;NFSU2_TR(0x6c0ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6c0ebf:{NFSU2_TR(0x6c0ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c0ec2:{NFSU2_TR(0x6c0ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0ec5:{NFSU2_TR(0x6c0ec5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c0ec8:{NFSU2_TR(0x6c0ec8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0a84u);}goto L6c0a84;}}
}
B6c0ece:L6c0ece:{c.instructions+=1;NFSU2_TR(0x6c0ece);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c0ed0:L6c0ed0:{c.instructions+=2;NFSU2_TR(0x6c0ed0);
__builtin_memmove((R+4),(R+24),4);
}
B6c0ed2:{NFSU2_TR(0x6c0ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0ed7ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6c0ed7:L6c0ed7:{c.instructions+=4;NFSU2_TR(0x6c0ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c0edd:{NFSU2_TR(0x6c0edd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c0edf:{NFSU2_TR(0x6c0edf);
__builtin_memmove((R+4),(R+24),4);
}
B6c0ee1:{NFSU2_TR(0x6c0ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0ee6ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0ee6:L6c0ee6:{c.instructions+=3;NFSU2_TR(0x6c0ee6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6c0ee8:{NFSU2_TR(0x6c0ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0eeb:{NFSU2_TR(0x6c0eeb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c0ef1:L6c0ef1:{c.instructions+=2;NFSU2_TR(0x6c0ef1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x46580201ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c0ef7:{NFSU2_TR(0x6c0ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c1007u,6c1);}
}
B6c0efd:L6c0efd:{c.instructions+=11;NFSU2_TR(0x6c0efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0f00:{NFSU2_TR(0x6c0f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c0f03:{NFSU2_TR(0x6c0f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c0f06:{NFSU2_TR(0x6c0f06);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6c0f08:{NFSU2_TR(0x6c0f08);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c0f0c:{NFSU2_TR(0x6c0f0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c0f0f:{NFSU2_TR(0x6c0f0f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fff0000ull))));
}
B6c0f14:{NFSU2_TR(0x6c0f14);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffeull))));
}
B6c0f19:{NFSU2_TR(0x6c0f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f1a:{NFSU2_TR(0x6c0f1a);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f1c:{NFSU2_TR(0x6c0f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f21ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f21:L6c0f21:{c.instructions+=3;NFSU2_TR(0x6c0f21);
u8 U[4];
w4(U+0,u32(0x49535250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f26:{NFSU2_TR(0x6c0f26);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f28:{NFSU2_TR(0x6c0f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f2dull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f2d:L6c0f2d:{c.instructions+=3;NFSU2_TR(0x6c0f2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c0f2f:{NFSU2_TR(0x6c0f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c0f32:{NFSU2_TR(0x6c0f32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c138cu,6c1);}
}
B6c0f38:L6c0f38:{c.instructions+=1;NFSU2_TR(0x6c0f38);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c0f3a:L6c0f3a:{c.instructions+=4;NFSU2_TR(0x6c0f3a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c0f3e:{NFSU2_TR(0x6c0f3e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0f41:{NFSU2_TR(0x6c0f41);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f43:{NFSU2_TR(0x6c0f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0f49;}}
}
B6c0f45:L6c0f45:{c.instructions+=2;NFSU2_TR(0x6c0f45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f47:{NFSU2_TR(0x6c0f47);
{goto L6c0f4a;}
}
B6c0f49:L6c0f49:{c.instructions+=1;NFSU2_TR(0x6c0f49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f4a:L6c0f4a:{c.instructions+=1;NFSU2_TR(0x6c0f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f4full));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f4f:L6c0f4f:{c.instructions+=3;NFSU2_TR(0x6c0f4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c0f50:{NFSU2_TR(0x6c0f50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6c0f53:{NFSU2_TR(0x6c0f53);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0f3au);}goto L6c0f3a;}}
}
B6c0f55:L6c0f55:{c.instructions+=1;NFSU2_TR(0x6c0f55);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c0f57:L6c0f57:{c.instructions+=3;NFSU2_TR(0x6c0f57);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c0f5b:{NFSU2_TR(0x6c0f5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c0f5e:{NFSU2_TR(0x6c0f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c0f64;}}
}
B6c0f60:L6c0f60:{c.instructions+=2;NFSU2_TR(0x6c0f60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f62:{NFSU2_TR(0x6c0f62);
{goto L6c0f6c;}
}
B6c0f64:L6c0f64:{c.instructions+=4;NFSU2_TR(0x6c0f64);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c0f68:{NFSU2_TR(0x6c0f68);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6c0f6a:{NFSU2_TR(0x6c0f6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c0f6b:{NFSU2_TR(0x6c0f6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f6c:L6c0f6c:{c.instructions+=2;NFSU2_TR(0x6c0f6c);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f6e:{NFSU2_TR(0x6c0f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f73ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f73:L6c0f73:{c.instructions+=3;NFSU2_TR(0x6c0f73);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c0f76:{NFSU2_TR(0x6c0f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B6c0f79:{NFSU2_TR(0x6c0f79);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0f57u);}goto L6c0f57;}}
}
B6c0f7b:L6c0f7b:{c.instructions+=3;NFSU2_TR(0x6c0f7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c0f7c:{NFSU2_TR(0x6c0f7c);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f7e:{NFSU2_TR(0x6c0f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f83ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f83:L6c0f83:{c.instructions+=3;NFSU2_TR(0x6c0f83);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c0f85:{NFSU2_TR(0x6c0f85);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c0f87:{NFSU2_TR(0x6c0f87);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0fa9;}}
}
B6c0f89:L6c0f89:{c.instructions+=4;NFSU2_TR(0x6c0f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0f8c:{NFSU2_TR(0x6c0f8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c0f8f:{NFSU2_TR(0x6c0f8f);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f91:{NFSU2_TR(0x6c0f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0f96ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0f96:L6c0f96:{c.instructions+=4;NFSU2_TR(0x6c0f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c0f99:{NFSU2_TR(0x6c0f99);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6c0f9d:{NFSU2_TR(0x6c0f9d);
__builtin_memmove((R+4),(R+24),4);
}
B6c0f9f:{NFSU2_TR(0x6c0f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0fa4ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0fa4:L6c0fa4:{c.instructions+=3;NFSU2_TR(0x6c0fa4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c0fa5:{NFSU2_TR(0x6c0fa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c0fa7:{NFSU2_TR(0x6c0fa7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0f89u);}goto L6c0f89;}}
}
B6c0fa9:L6c0fa9:{c.instructions+=3;NFSU2_TR(0x6c0fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0fac:{NFSU2_TR(0x6c0fac);
__builtin_memmove((R+4),(R+24),4);
}
B6c0fae:{NFSU2_TR(0x6c0fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0fb3ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0fb3:L6c0fb3:{c.instructions+=3;NFSU2_TR(0x6c0fb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c0fb5:{NFSU2_TR(0x6c0fb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0fb8:{NFSU2_TR(0x6c0fb8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c0fd8;}}
}
B6c0fba:L6c0fba:{c.instructions+=1;NFSU2_TR(0x6c0fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c0fbd:L6c0fbd:{c.instructions+=3;NFSU2_TR(0x6c0fbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c0fc0:{NFSU2_TR(0x6c0fc0);
__builtin_memmove((R+4),(R+24),4);
}
B6c0fc2:{NFSU2_TR(0x6c0fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0fc7ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0fc7:L6c0fc7:{c.instructions+=3;NFSU2_TR(0x6c0fc7);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6c0fcb:{NFSU2_TR(0x6c0fcb);
__builtin_memmove((R+4),(R+24),4);
}
B6c0fcd:{NFSU2_TR(0x6c0fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0fd2ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0fd2:L6c0fd2:{c.instructions+=3;NFSU2_TR(0x6c0fd2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c0fd3:{NFSU2_TR(0x6c0fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c0fd6:{NFSU2_TR(0x6c0fd6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c0fbdu);}goto L6c0fbd;}}
}
B6c0fd8:L6c0fd8:{c.instructions+=3;NFSU2_TR(0x6c0fd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c0fdb:{NFSU2_TR(0x6c0fdb);
__builtin_memmove((R+4),(R+24),4);
}
B6c0fdd:{NFSU2_TR(0x6c0fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0fe2ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0fe2:L6c0fe2:{c.instructions+=3;NFSU2_TR(0x6c0fe2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c0fe4:{NFSU2_TR(0x6c0fe4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c0fe7:{NFSU2_TR(0x6c0fe7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c1007u,6c1);}
}
B6c0fe9:L6c0fe9:{c.instructions+=4;NFSU2_TR(0x6c0fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c0fec:{NFSU2_TR(0x6c0fec);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c0fef:{NFSU2_TR(0x6c0fef);
__builtin_memmove((R+4),(R+24),4);
}
B6c0ff1:{NFSU2_TR(0x6c0ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0ff6ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c0ff6:L6c0ff6:{c.instructions+=3;NFSU2_TR(0x6c0ff6);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6c0ffa:{NFSU2_TR(0x6c0ffa);
__builtin_memmove((R+4),(R+24),4);
}
B6c0ffc:{NFSU2_TR(0x6c0ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1001ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
XIT:NFSU2_TR_EXIT(0x6c0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
