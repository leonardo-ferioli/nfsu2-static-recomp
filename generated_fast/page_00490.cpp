#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x490,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x490,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_490(u8* __restrict R,Cpu& c);
u32 page_490(Cpu& c){return body_490(c.regs.data(),c);}
__attribute__((noinline)) u32 body_490(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x490001:goto L490001;
case 0x490002:c.instructions+=2;goto B490002;
case 0x490006:c.instructions+=1;goto B490006;
case 0x49000c:goto L49000c;
case 0x49000d:c.instructions+=5;goto B49000d;
case 0x49000e:c.instructions+=4;goto B49000e;
case 0x49000f:c.instructions+=3;goto B49000f;
case 0x490010:c.instructions+=2;goto B490010;
case 0x490013:c.instructions+=1;goto B490013;
case 0x490020:goto L490020;
case 0x490023:c.instructions+=11;goto B490023;
case 0x490029:c.instructions+=10;goto B490029;
case 0x49002a:c.instructions+=9;goto B49002a;
case 0x490030:c.instructions+=8;goto B490030;
case 0x490035:c.instructions+=7;goto B490035;
case 0x49003b:c.instructions+=6;goto B49003b;
case 0x49003f:c.instructions+=5;goto B49003f;
case 0x490043:c.instructions+=4;goto B490043;
case 0x490049:c.instructions+=3;goto B490049;
case 0x49004f:c.instructions+=2;goto B49004f;
case 0x490053:c.instructions+=1;goto B490053;
case 0x490058:goto L490058;
case 0x49005a:c.instructions+=3;goto B49005a;
case 0x49005c:c.instructions+=2;goto B49005c;
case 0x490060:c.instructions+=1;goto B490060;
case 0x490066:goto L490066;
case 0x490067:c.instructions+=3;goto B490067;
case 0x490068:c.instructions+=2;goto B490068;
case 0x490069:c.instructions+=1;goto B490069;
case 0x49006b:goto L49006b;
case 0x49006f:c.instructions+=1;goto B49006f;
case 0x490070:goto L490070;
case 0x490073:c.instructions+=3;goto B490073;
case 0x490075:c.instructions+=2;goto B490075;
case 0x490078:c.instructions+=1;goto B490078;
case 0x49007e:goto L49007e;
case 0x490081:c.instructions+=1;goto B490081;
case 0x490085:goto L490085;
case 0x490088:c.instructions+=2;goto B490088;
case 0x49008a:c.instructions+=1;goto B49008a;
case 0x49008c:goto L49008c;
case 0x49008f:c.instructions+=3;goto B49008f;
case 0x490093:c.instructions+=2;goto B490093;
case 0x490096:c.instructions+=1;goto B490096;
case 0x490098:goto L490098;
case 0x49009a:c.instructions+=1;goto B49009a;
case 0x49009e:goto L49009e;
case 0x4900a1:c.instructions+=5;goto B4900a1;
case 0x4900a4:c.instructions+=4;goto B4900a4;
case 0x4900a8:c.instructions+=3;goto B4900a8;
case 0x4900ac:c.instructions+=2;goto B4900ac;
case 0x4900ae:c.instructions+=1;goto B4900ae;
case 0x4900b3:goto L4900b3;
case 0x4900b5:c.instructions+=5;goto B4900b5;
case 0x4900b6:c.instructions+=4;goto B4900b6;
case 0x4900b8:c.instructions+=3;goto B4900b8;
case 0x4900bb:c.instructions+=2;goto B4900bb;
case 0x4900bf:c.instructions+=1;goto B4900bf;
case 0x4900c1:goto L4900c1;
case 0x4900c4:c.instructions+=5;goto B4900c4;
case 0x4900c6:c.instructions+=4;goto B4900c6;
case 0x4900c8:c.instructions+=3;goto B4900c8;
case 0x4900cb:c.instructions+=2;goto B4900cb;
case 0x4900cf:c.instructions+=1;goto B4900cf;
case 0x4900d1:goto L4900d1;
case 0x4900d4:c.instructions+=1;goto B4900d4;
case 0x4900d6:goto L4900d6;
case 0x4900da:c.instructions+=2;goto B4900da;
case 0x4900de:c.instructions+=1;goto B4900de;
case 0x4900e0:goto L4900e0;
case 0x4900e3:c.instructions+=7;goto B4900e3;
case 0x4900e4:c.instructions+=6;goto B4900e4;
case 0x4900e6:c.instructions+=5;goto B4900e6;
case 0x4900e9:c.instructions+=4;goto B4900e9;
case 0x4900ed:c.instructions+=3;goto B4900ed;
case 0x4900ee:c.instructions+=2;goto B4900ee;
case 0x4900f0:c.instructions+=1;goto B4900f0;
case 0x4900f5:goto L4900f5;
case 0x4900f8:c.instructions+=3;goto B4900f8;
case 0x4900f9:c.instructions+=2;goto B4900f9;
case 0x4900fb:c.instructions+=1;goto B4900fb;
case 0x4900fd:goto L4900fd;
case 0x490101:goto L490101;
case 0x490105:c.instructions+=4;goto B490105;
case 0x490108:c.instructions+=3;goto B490108;
case 0x490109:c.instructions+=2;goto B490109;
case 0x49010d:c.instructions+=1;goto B49010d;
case 0x490113:goto L490113;
case 0x490117:goto L490117;
case 0x490119:c.instructions+=3;goto B490119;
case 0x49011b:c.instructions+=2;goto B49011b;
case 0x49011f:c.instructions+=1;goto B49011f;
case 0x490125:goto L490125;
case 0x490126:c.instructions+=2;goto B490126;
case 0x490127:c.instructions+=1;goto B490127;
case 0x490128:goto L490128;
case 0x490129:c.instructions+=2;goto B490129;
case 0x49012c:c.instructions+=1;goto B49012c;
case 0x490130:goto L490130;
case 0x490134:c.instructions+=4;goto B490134;
case 0x490136:c.instructions+=3;goto B490136;
case 0x490137:c.instructions+=2;goto B490137;
case 0x49013c:c.instructions+=1;goto B49013c;
case 0x490141:goto L490141;
case 0x490150:goto L490150;
case 0x490154:c.instructions+=5;goto B490154;
case 0x490158:c.instructions+=4;goto B490158;
case 0x490159:c.instructions+=3;goto B490159;
case 0x49015a:c.instructions+=2;goto B49015a;
case 0x49015f:c.instructions+=1;goto B49015f;
case 0x490164:goto L490164;
case 0x490170:goto L490170;
case 0x490171:c.instructions+=4;goto B490171;
case 0x490175:c.instructions+=3;goto B490175;
case 0x490176:c.instructions+=2;goto B490176;
case 0x49017b:c.instructions+=1;goto B49017b;
case 0x490180:goto L490180;
case 0x490182:c.instructions+=1;goto B490182;
case 0x490184:goto L490184;
case 0x490189:goto L490189;
case 0x49018a:c.instructions+=2;goto B49018a;
case 0x49018f:c.instructions+=1;goto B49018f;
case 0x490194:goto L490194;
case 0x490196:c.instructions+=1;goto B490196;
case 0x490198:goto L490198;
case 0x490199:c.instructions+=1;goto B490199;
case 0x4901a0:goto L4901a0;
case 0x4901a4:c.instructions+=3;goto B4901a4;
case 0x4901a5:c.instructions+=2;goto B4901a5;
case 0x4901aa:c.instructions+=1;goto B4901aa;
case 0x4901af:goto L4901af;
case 0x4901b0:goto L4901b0;
case 0x4901b4:c.instructions+=3;goto B4901b4;
case 0x4901b5:c.instructions+=2;goto B4901b5;
case 0x4901ba:c.instructions+=1;goto B4901ba;
case 0x4901bf:goto L4901bf;
case 0x4901c1:c.instructions+=3;goto B4901c1;
case 0x4901c3:c.instructions+=2;goto B4901c3;
case 0x4901c5:c.instructions+=1;goto B4901c5;
case 0x4901d0:goto L4901d0;
case 0x4901d1:c.instructions+=6;goto B4901d1;
case 0x4901d2:c.instructions+=5;goto B4901d2;
case 0x4901d3:c.instructions+=4;goto B4901d3;
case 0x4901d4:c.instructions+=3;goto B4901d4;
case 0x4901d8:c.instructions+=2;goto B4901d8;
case 0x4901da:c.instructions+=1;goto B4901da;
case 0x4901e0:goto L4901e0;
case 0x4901e6:c.instructions+=2;goto B4901e6;
case 0x4901eb:c.instructions+=1;goto B4901eb;
case 0x4901f0:goto L4901f0;
case 0x4901f2:c.instructions+=2;goto B4901f2;
case 0x4901f4:c.instructions+=1;goto B4901f4;
case 0x4901f6:goto L4901f6;
case 0x4901f8:c.instructions+=2;goto B4901f8;
case 0x4901fd:c.instructions+=1;goto B4901fd;
case 0x490203:goto L490203;
case 0x490205:c.instructions+=1;goto B490205;
case 0x490207:goto L490207;
case 0x49020b:c.instructions+=2;goto B49020b;
case 0x49020d:c.instructions+=1;goto B49020d;
case 0x49020f:goto L49020f;
case 0x490212:c.instructions+=2;goto B490212;
case 0x490214:c.instructions+=1;goto B490214;
case 0x490216:goto L490216;
case 0x490219:c.instructions+=2;goto B490219;
case 0x49021b:c.instructions+=1;goto B49021b;
case 0x49021d:goto L49021d;
case 0x490220:c.instructions+=6;goto B490220;
case 0x490222:c.instructions+=5;goto B490222;
case 0x490224:c.instructions+=4;goto B490224;
case 0x490225:c.instructions+=3;goto B490225;
case 0x490226:c.instructions+=2;goto B490226;
case 0x490227:c.instructions+=1;goto B490227;
case 0x49022c:goto L49022c;
case 0x49022f:c.instructions+=2;goto B49022f;
case 0x490231:c.instructions+=1;goto B490231;
case 0x490233:goto L490233;
case 0x490236:c.instructions+=1;goto B490236;
case 0x490238:goto L490238;
case 0x490239:c.instructions+=2;goto B490239;
case 0x49023b:c.instructions+=1;goto B49023b;
case 0x490240:goto L490240;
case 0x490242:c.instructions+=1;goto B490242;
case 0x490244:goto L490244;
case 0x490246:c.instructions+=2;goto B490246;
case 0x490248:c.instructions+=1;goto B490248;
case 0x49024a:goto L49024a;
case 0x49024b:c.instructions+=1;goto B49024b;
case 0x490250:goto L490250;
case 0x490253:c.instructions+=2;goto B490253;
case 0x490255:c.instructions+=1;goto B490255;
case 0x490257:goto L490257;
case 0x49025d:c.instructions+=2;goto B49025d;
case 0x49025f:c.instructions+=1;goto B49025f;
case 0x490261:goto L490261;
case 0x490268:c.instructions+=1;goto B490268;
case 0x49026a:goto L49026a;
case 0x49026b:c.instructions+=2;goto B49026b;
case 0x49026d:c.instructions+=1;goto B49026d;
case 0x49026f:goto L49026f;
case 0x490271:goto L490271;
case 0x490273:c.instructions+=14;goto B490273;
case 0x490276:c.instructions+=13;goto B490276;
case 0x490278:c.instructions+=12;goto B490278;
case 0x49027b:c.instructions+=11;goto B49027b;
case 0x490281:c.instructions+=10;goto B490281;
case 0x490287:c.instructions+=9;goto B490287;
case 0x49028a:c.instructions+=8;goto B49028a;
case 0x49028b:c.instructions+=7;goto B49028b;
case 0x490292:c.instructions+=6;goto B490292;
case 0x490294:c.instructions+=5;goto B490294;
case 0x490295:c.instructions+=4;goto B490295;
case 0x490296:c.instructions+=3;goto B490296;
case 0x49029a:c.instructions+=2;goto B49029a;
case 0x49029b:c.instructions+=1;goto B49029b;
case 0x49029c:goto L49029c;
case 0x4902a3:c.instructions+=2;goto B4902a3;
case 0x4902a5:c.instructions+=1;goto B4902a5;
case 0x4902a7:goto L4902a7;
case 0x4902ab:c.instructions+=2;goto B4902ab;
case 0x4902ad:c.instructions+=1;goto B4902ad;
case 0x4902af:goto L4902af;
case 0x4902b4:c.instructions+=2;goto B4902b4;
case 0x4902b6:c.instructions+=1;goto B4902b6;
case 0x4902b8:goto L4902b8;
case 0x4902bd:goto L4902bd;
case 0x4902bf:goto L4902bf;
case 0x4902c0:c.instructions+=4;goto B4902c0;
case 0x4902c1:c.instructions+=3;goto B4902c1;
case 0x4902c2:c.instructions+=2;goto B4902c2;
case 0x4902c3:c.instructions+=1;goto B4902c3;
case 0x4902d0:goto L4902d0;
case 0x4902d4:c.instructions+=5;goto B4902d4;
case 0x4902d6:c.instructions+=4;goto B4902d6;
case 0x4902d7:c.instructions+=3;goto B4902d7;
case 0x4902db:c.instructions+=2;goto B4902db;
case 0x4902dc:c.instructions+=1;goto B4902dc;
case 0x4902de:goto L4902de;
case 0x4902e0:c.instructions+=1;goto B4902e0;
case 0x4902e2:goto L4902e2;
case 0x4902e6:c.instructions+=3;goto B4902e6;
case 0x4902ea:c.instructions+=2;goto B4902ea;
case 0x4902eb:c.instructions+=1;goto B4902eb;
case 0x4902f0:goto L4902f0;
case 0x4902f2:c.instructions+=1;goto B4902f2;
case 0x4902f4:goto L4902f4;
case 0x4902f5:c.instructions+=3;goto B4902f5;
case 0x4902f9:c.instructions+=2;goto B4902f9;
case 0x4902fa:c.instructions+=1;goto B4902fa;
case 0x4902fb:goto L4902fb;
case 0x4902fd:c.instructions+=1;goto B4902fd;
case 0x4902ff:goto L4902ff;
case 0x490303:c.instructions+=2;goto B490303;
case 0x490306:c.instructions+=1;goto B490306;
case 0x490308:goto L490308;
case 0x49030c:c.instructions+=2;goto B49030c;
case 0x49030d:c.instructions+=1;goto B49030d;
case 0x490312:goto L490312;
case 0x490314:c.instructions+=1;goto B490314;
case 0x490316:goto L490316;
case 0x490317:c.instructions+=3;goto B490317;
case 0x490318:c.instructions+=2;goto B490318;
case 0x490319:c.instructions+=1;goto B490319;
case 0x49031e:goto L49031e;
case 0x490321:c.instructions+=3;goto B490321;
case 0x490322:c.instructions+=2;goto B490322;
case 0x490323:c.instructions+=1;goto B490323;
case 0x490324:goto L490324;
case 0x490325:c.instructions+=3;goto B490325;
case 0x490327:c.instructions+=2;goto B490327;
case 0x490328:c.instructions+=1;goto B490328;
case 0x490330:goto L490330;
case 0x490335:c.instructions+=3;goto B490335;
case 0x49033b:c.instructions+=2;goto B49033b;
case 0x49033c:c.instructions+=1;goto B49033c;
case 0x490341:goto L490341;
case 0x490343:c.instructions+=3;goto B490343;
case 0x490345:c.instructions+=2;goto B490345;
case 0x49034a:c.instructions+=1;goto B49034a;
case 0x49034f:goto L49034f;
case 0x490351:c.instructions+=4;goto B490351;
case 0x490353:c.instructions+=3;goto B490353;
case 0x490358:c.instructions+=2;goto B490358;
case 0x49035d:c.instructions+=1;goto B49035d;
case 0x490362:goto L490362;
case 0x490364:c.instructions+=4;goto B490364;
case 0x490366:c.instructions+=3;goto B490366;
case 0x49036b:c.instructions+=2;goto B49036b;
case 0x490370:c.instructions+=1;goto B490370;
case 0x490375:goto L490375;
case 0x490377:c.instructions+=4;goto B490377;
case 0x490379:c.instructions+=3;goto B490379;
case 0x49037e:c.instructions+=2;goto B49037e;
case 0x490383:c.instructions+=1;goto B490383;
case 0x490388:goto L490388;
case 0x49038a:c.instructions+=4;goto B49038a;
case 0x49038c:c.instructions+=3;goto B49038c;
case 0x490391:c.instructions+=2;goto B490391;
case 0x490396:c.instructions+=1;goto B490396;
case 0x49039b:goto L49039b;
case 0x49039e:c.instructions+=2;goto B49039e;
case 0x4903a3:c.instructions+=1;goto B4903a3;
case 0x4903b0:goto L4903b0;
case 0x4903b3:c.instructions+=4;goto B4903b3;
case 0x4903b4:c.instructions+=3;goto B4903b4;
case 0x4903b6:c.instructions+=2;goto B4903b6;
case 0x4903b8:c.instructions+=1;goto B4903b8;
case 0x4903ba:goto L4903ba;
case 0x4903bd:c.instructions+=1;goto B4903bd;
case 0x4903bf:goto L4903bf;
case 0x4903c1:c.instructions+=3;goto B4903c1;
case 0x4903c4:c.instructions+=2;goto B4903c4;
case 0x4903c6:c.instructions+=1;goto B4903c6;
case 0x4903c9:goto L4903c9;
case 0x4903cc:c.instructions+=5;goto B4903cc;
case 0x4903cf:c.instructions+=4;goto B4903cf;
case 0x4903d2:c.instructions+=3;goto B4903d2;
case 0x4903d5:c.instructions+=2;goto B4903d5;
case 0x4903d6:c.instructions+=1;goto B4903d6;
case 0x4903e0:goto L4903e0;
case 0x4903e1:c.instructions+=7;goto B4903e1;
case 0x4903e3:c.instructions+=6;goto B4903e3;
case 0x4903e4:c.instructions+=5;goto B4903e4;
case 0x4903e5:c.instructions+=4;goto B4903e5;
case 0x4903eb:c.instructions+=3;goto B4903eb;
case 0x4903ec:c.instructions+=2;goto B4903ec;
case 0x4903f1:c.instructions+=1;goto B4903f1;
case 0x4903f6:goto L4903f6;
case 0x4903f9:c.instructions+=3;goto B4903f9;
case 0x4903fb:c.instructions+=2;goto B4903fb;
case 0x4903fd:c.instructions+=1;goto B4903fd;
case 0x4903ff:goto L4903ff;
case 0x490400:goto L490400;
case 0x490403:c.instructions+=1;goto B490403;
case 0x490405:goto L490405;
case 0x490408:goto L490408;
case 0x49040a:c.instructions+=2;goto B49040a;
case 0x49040c:c.instructions+=1;goto B49040c;
case 0x49040e:goto L49040e;
case 0x490414:c.instructions+=2;goto B490414;
case 0x490419:c.instructions+=1;goto B490419;
case 0x49041e:goto L49041e;
case 0x490420:c.instructions+=1;goto B490420;
case 0x490422:goto L490422;
case 0x490425:c.instructions+=1;goto B490425;
case 0x490427:goto L490427;
case 0x49042a:goto L49042a;
case 0x49042c:c.instructions+=2;goto B49042c;
case 0x49042e:c.instructions+=1;goto B49042e;
case 0x490430:goto L490430;
case 0x490431:c.instructions+=4;goto B490431;
case 0x490432:c.instructions+=3;goto B490432;
case 0x490433:c.instructions+=2;goto B490433;
case 0x490434:c.instructions+=1;goto B490434;
case 0x490440:goto L490440;
case 0x490446:c.instructions+=18;goto B490446;
case 0x490448:c.instructions+=17;goto B490448;
case 0x49044c:c.instructions+=16;goto B49044c;
case 0x49044d:c.instructions+=15;goto B49044d;
case 0x490454:c.instructions+=14;goto B490454;
case 0x49045a:c.instructions+=13;goto B49045a;
case 0x490460:c.instructions+=12;goto B490460;
case 0x490464:c.instructions+=11;goto B490464;
case 0x490468:c.instructions+=10;goto B490468;
case 0x49046c:c.instructions+=9;goto B49046c;
case 0x49046d:c.instructions+=8;goto B49046d;
case 0x490471:c.instructions+=7;goto B490471;
case 0x490475:c.instructions+=6;goto B490475;
case 0x49047c:c.instructions+=5;goto B49047c;
case 0x49047f:c.instructions+=4;goto B49047f;
case 0x490480:c.instructions+=3;goto B490480;
case 0x490484:c.instructions+=2;goto B490484;
case 0x490488:c.instructions+=1;goto B490488;
case 0x49048b:goto L49048b;
case 0x49048c:c.instructions+=1;goto B49048c;
case 0x490491:goto L490491;
case 0x490494:c.instructions+=3;goto B490494;
case 0x490497:c.instructions+=2;goto B490497;
case 0x49049c:c.instructions+=1;goto B49049c;
case 0x49049e:goto L49049e;
case 0x4904a3:goto L4904a3;
case 0x4904a4:c.instructions+=6;goto B4904a4;
case 0x4904a5:c.instructions+=5;goto B4904a5;
case 0x4904a6:c.instructions+=4;goto B4904a6;
case 0x4904aa:c.instructions+=3;goto B4904aa;
case 0x4904af:c.instructions+=2;goto B4904af;
case 0x4904b0:c.instructions+=1;goto B4904b0;
case 0x4904b5:goto L4904b5;
case 0x4904bc:c.instructions+=8;goto B4904bc;
case 0x4904c0:c.instructions+=7;goto B4904c0;
case 0x4904c4:c.instructions+=6;goto B4904c4;
case 0x4904c7:c.instructions+=5;goto B4904c7;
case 0x4904ca:c.instructions+=4;goto B4904ca;
case 0x4904ce:c.instructions+=3;goto B4904ce;
case 0x4904d4:c.instructions+=2;goto B4904d4;
case 0x4904d9:c.instructions+=1;goto B4904d9;
case 0x4904db:goto L4904db;
case 0x4904de:c.instructions+=2;goto B4904de;
case 0x4904df:c.instructions+=1;goto B4904df;
case 0x4904e4:goto L4904e4;
case 0x4904e7:c.instructions+=2;goto B4904e7;
case 0x4904e9:c.instructions+=1;goto B4904e9;
case 0x4904eb:goto L4904eb;
case 0x4904ed:c.instructions+=4;goto B4904ed;
case 0x4904f3:c.instructions+=3;goto B4904f3;
case 0x4904f6:c.instructions+=2;goto B4904f6;
case 0x4904fc:c.instructions+=1;goto B4904fc;
case 0x4904fe:goto L4904fe;
case 0x4904ff:c.instructions+=2;goto B4904ff;
case 0x490500:c.instructions+=1;goto B490500;
case 0x490505:goto L490505;
case 0x490509:c.instructions+=6;goto B490509;
case 0x49050f:c.instructions+=5;goto B49050f;
case 0x490512:c.instructions+=4;goto B490512;
case 0x490515:c.instructions+=3;goto B490515;
case 0x490517:c.instructions+=2;goto B490517;
case 0x49051b:c.instructions+=1;goto B49051b;
case 0x49051d:goto L49051d;
case 0x49051f:c.instructions+=4;goto B49051f;
case 0x490521:c.instructions+=3;goto B490521;
case 0x490523:c.instructions+=2;goto B490523;
case 0x490526:c.instructions+=1;goto B490526;
case 0x490528:goto L490528;
case 0x49052a:goto L49052a;
case 0x49052c:c.instructions+=1;goto B49052c;
case 0x49052f:goto L49052f;
case 0x490531:goto L490531;
case 0x490535:c.instructions+=3;goto B490535;
case 0x490539:c.instructions+=2;goto B490539;
case 0x490540:c.instructions+=1;goto B490540;
case 0x490542:goto L490542;
case 0x490543:c.instructions+=1;goto B490543;
case 0x490548:goto L490548;
case 0x49054c:c.instructions+=5;goto B49054c;
case 0x490552:c.instructions+=4;goto B490552;
case 0x490555:c.instructions+=3;goto B490555;
case 0x490558:c.instructions+=2;goto B490558;
case 0x49055a:c.instructions+=1;goto B49055a;
case 0x49055c:goto L49055c;
case 0x490563:c.instructions+=9;goto B490563;
case 0x490564:c.instructions+=8;goto B490564;
case 0x490565:c.instructions+=7;goto B490565;
case 0x49056a:c.instructions+=6;goto B49056a;
case 0x49056b:c.instructions+=5;goto B49056b;
case 0x49056c:c.instructions+=4;goto B49056c;
case 0x49056f:c.instructions+=3;goto B49056f;
case 0x490570:c.instructions+=2;goto B490570;
case 0x490571:c.instructions+=1;goto B490571;
case 0x490576:goto L490576;
case 0x490579:goto L490579;
case 0x49057c:c.instructions+=4;goto B49057c;
case 0x49057e:c.instructions+=3;goto B49057e;
case 0x49057f:c.instructions+=2;goto B49057f;
case 0x490580:c.instructions+=1;goto B490580;
case 0x490582:goto L490582;
case 0x490589:c.instructions+=4;goto B490589;
case 0x49058a:c.instructions+=3;goto B49058a;
case 0x49058c:c.instructions+=2;goto B49058c;
case 0x49058d:c.instructions+=1;goto B49058d;
case 0x490592:goto L490592;
case 0x490595:goto L490595;
case 0x490596:c.instructions+=3;goto B490596;
case 0x490597:c.instructions+=2;goto B490597;
case 0x49059d:c.instructions+=1;goto B49059d;
case 0x4905a0:goto L4905a0;
case 0x4905a3:c.instructions+=11;goto B4905a3;
case 0x4905a4:c.instructions+=10;goto B4905a4;
case 0x4905a7:c.instructions+=9;goto B4905a7;
case 0x4905ab:c.instructions+=8;goto B4905ab;
case 0x4905ac:c.instructions+=7;goto B4905ac;
case 0x4905af:c.instructions+=6;goto B4905af;
case 0x4905b1:c.instructions+=5;goto B4905b1;
case 0x4905b2:c.instructions+=4;goto B4905b2;
case 0x4905b5:c.instructions+=3;goto B4905b5;
case 0x4905b9:c.instructions+=2;goto B4905b9;
case 0x4905bd:c.instructions+=1;goto B4905bd;
case 0x4905c3:goto L4905c3;
case 0x4905c5:c.instructions+=1;goto B4905c5;
case 0x4905cb:goto L4905cb;
case 0x4905cc:c.instructions+=1;goto B4905cc;
case 0x4905ce:goto L4905ce;
case 0x4905d1:c.instructions+=1;goto B4905d1;
case 0x4905d3:goto L4905d3;
case 0x4905d6:c.instructions+=1;goto B4905d6;
case 0x4905d8:goto L4905d8;
case 0x4905db:c.instructions+=4;goto B4905db;
case 0x4905dd:c.instructions+=3;goto B4905dd;
case 0x4905df:c.instructions+=2;goto B4905df;
case 0x4905e0:c.instructions+=1;goto B4905e0;
case 0x4905e5:goto L4905e5;
case 0x4905e8:c.instructions+=1;goto B4905e8;
case 0x4905ea:goto L4905ea;
case 0x4905ed:c.instructions+=2;goto B4905ed;
case 0x4905ee:c.instructions+=1;goto B4905ee;
case 0x4905f0:goto L4905f0;
case 0x4905f4:c.instructions+=3;goto B4905f4;
case 0x4905f6:c.instructions+=2;goto B4905f6;
case 0x4905f8:c.instructions+=1;goto B4905f8;
case 0x4905fa:goto L4905fa;
case 0x490600:goto L490600;
case 0x490603:c.instructions+=6;goto B490603;
case 0x490606:c.instructions+=5;goto B490606;
case 0x49060a:c.instructions+=4;goto B49060a;
case 0x49060d:c.instructions+=3;goto B49060d;
case 0x49060f:c.instructions+=2;goto B49060f;
case 0x490611:c.instructions+=1;goto B490611;
case 0x490613:goto L490613;
case 0x490617:c.instructions+=1;goto B490617;
case 0x490619:goto L490619;
case 0x49061b:c.instructions+=1;goto B49061b;
case 0x49061d:goto L49061d;
case 0x490620:c.instructions+=3;goto B490620;
case 0x490621:c.instructions+=2;goto B490621;
case 0x490623:c.instructions+=1;goto B490623;
case 0x490625:goto L490625;
case 0x490627:goto L490627;
case 0x49062a:c.instructions+=6;goto B49062a;
case 0x49062d:c.instructions+=5;goto B49062d;
case 0x490630:c.instructions+=4;goto B490630;
case 0x490633:c.instructions+=3;goto B490633;
case 0x490637:c.instructions+=2;goto B490637;
case 0x49063a:c.instructions+=1;goto B49063a;
case 0x49063d:goto L49063d;
case 0x490641:c.instructions+=3;goto B490641;
case 0x490642:c.instructions+=2;goto B490642;
case 0x490644:c.instructions+=1;goto B490644;
case 0x490646:goto L490646;
case 0x490647:goto L490647;
case 0x490648:c.instructions+=4;goto B490648;
case 0x490649:c.instructions+=3;goto B490649;
case 0x49064a:c.instructions+=2;goto B49064a;
case 0x49064d:c.instructions+=1;goto B49064d;
case 0x490650:goto L490650;
case 0x490651:c.instructions+=4;goto B490651;
case 0x490656:c.instructions+=3;goto B490656;
case 0x490658:c.instructions+=2;goto B490658;
case 0x490659:c.instructions+=1;goto B490659;
case 0x49065b:goto L49065b;
case 0x490661:c.instructions+=2;goto B490661;
case 0x490667:c.instructions+=1;goto B490667;
case 0x49066d:goto L49066d;
case 0x490670:goto L490670;
case 0x490672:c.instructions+=14;goto B490672;
case 0x490675:c.instructions+=13;goto B490675;
case 0x490677:c.instructions+=12;goto B490677;
case 0x49067a:c.instructions+=11;goto B49067a;
case 0x49067d:c.instructions+=10;goto B49067d;
case 0x490680:c.instructions+=9;goto B490680;
case 0x490686:c.instructions+=8;goto B490686;
case 0x49068b:c.instructions+=7;goto B49068b;
case 0x49068d:c.instructions+=6;goto B49068d;
case 0x490690:c.instructions+=5;goto B490690;
case 0x490692:c.instructions+=4;goto B490692;
case 0x490694:c.instructions+=3;goto B490694;
case 0x49069a:c.instructions+=2;goto B49069a;
case 0x4906a0:c.instructions+=1;goto B4906a0;
case 0x4906a2:goto L4906a2;
case 0x4906a3:c.instructions+=2;goto B4906a3;
case 0x4906a4:c.instructions+=1;goto B4906a4;
case 0x4906a5:goto L4906a5;
case 0x4906a6:c.instructions+=1;goto B4906a6;
case 0x4906ab:goto L4906ab;
case 0x4906b1:c.instructions+=3;goto B4906b1;
case 0x4906b6:c.instructions+=2;goto B4906b6;
case 0x4906ba:c.instructions+=1;goto B4906ba;
case 0x4906bf:goto L4906bf;
case 0x4906c1:c.instructions+=2;goto B4906c1;
case 0x4906c3:c.instructions+=1;goto B4906c3;
case 0x4906c5:goto L4906c5;
case 0x4906c6:c.instructions+=3;goto B4906c6;
case 0x4906ca:c.instructions+=2;goto B4906ca;
case 0x4906cb:c.instructions+=1;goto B4906cb;
case 0x4906d0:goto L4906d0;
case 0x4906d3:c.instructions+=3;goto B4906d3;
case 0x4906d5:c.instructions+=2;goto B4906d5;
case 0x4906d7:c.instructions+=1;goto B4906d7;
case 0x4906d9:goto L4906d9;
case 0x4906da:c.instructions+=2;goto B4906da;
case 0x4906db:c.instructions+=1;goto B4906db;
case 0x4906e0:goto L4906e0;
case 0x4906e3:c.instructions+=3;goto B4906e3;
case 0x4906e6:c.instructions+=2;goto B4906e6;
case 0x4906e8:c.instructions+=1;goto B4906e8;
case 0x4906ea:goto L4906ea;
case 0x4906ed:c.instructions+=1;goto B4906ed;
case 0x4906ef:goto L4906ef;
case 0x4906f1:c.instructions+=5;goto B4906f1;
case 0x4906f3:c.instructions+=4;goto B4906f3;
case 0x4906f6:c.instructions+=3;goto B4906f6;
case 0x4906f8:c.instructions+=2;goto B4906f8;
case 0x4906fb:c.instructions+=1;goto B4906fb;
case 0x4906fd:goto L4906fd;
case 0x490703:c.instructions+=6;goto B490703;
case 0x490709:c.instructions+=5;goto B490709;
case 0x49070b:c.instructions+=4;goto B49070b;
case 0x49070e:c.instructions+=3;goto B49070e;
case 0x490711:c.instructions+=2;goto B490711;
case 0x490713:c.instructions+=1;goto B490713;
case 0x490715:goto L490715;
case 0x49071b:c.instructions+=4;goto B49071b;
case 0x49071d:c.instructions+=3;goto B49071d;
case 0x490723:c.instructions+=2;goto B490723;
case 0x490726:c.instructions+=1;goto B490726;
case 0x49072c:goto L49072c;
case 0x49072f:goto L49072f;
case 0x490731:c.instructions+=2;goto B490731;
case 0x490733:c.instructions+=1;goto B490733;
case 0x490735:goto L490735;
case 0x490736:c.instructions+=1;goto B490736;
case 0x490737:goto L490737;
case 0x49073c:goto L49073c;
case 0x49073d:c.instructions+=3;goto B49073d;
case 0x490741:c.instructions+=2;goto B490741;
case 0x490742:c.instructions+=1;goto B490742;
case 0x490747:goto L490747;
case 0x49074d:c.instructions+=6;goto B49074d;
case 0x49074f:c.instructions+=5;goto B49074f;
case 0x490752:c.instructions+=4;goto B490752;
case 0x490753:c.instructions+=3;goto B490753;
case 0x490755:c.instructions+=2;goto B490755;
case 0x490758:c.instructions+=1;goto B490758;
case 0x49075a:goto L49075a;
case 0x490760:c.instructions+=1;goto B490760;
case 0x490762:goto L490762;
case 0x490764:goto L490764;
case 0x490769:c.instructions+=10;goto B490769;
case 0x49076f:c.instructions+=9;goto B49076f;
case 0x490775:c.instructions+=8;goto B490775;
case 0x490776:c.instructions+=7;goto B490776;
case 0x490778:c.instructions+=6;goto B490778;
case 0x49077d:c.instructions+=5;goto B49077d;
case 0x490783:c.instructions+=4;goto B490783;
case 0x490785:c.instructions+=3;goto B490785;
case 0x49078b:c.instructions+=2;goto B49078b;
case 0x490791:c.instructions+=1;goto B490791;
case 0x490797:goto L490797;
case 0x490798:c.instructions+=2;goto B490798;
case 0x490799:c.instructions+=1;goto B490799;
case 0x4907a0:goto L4907a0;
case 0x4907a5:c.instructions+=4;goto B4907a5;
case 0x4907a7:c.instructions+=3;goto B4907a7;
case 0x4907a8:c.instructions+=2;goto B4907a8;
case 0x4907aa:c.instructions+=1;goto B4907aa;
case 0x4907ac:goto L4907ac;
case 0x4907af:c.instructions+=4;goto B4907af;
case 0x4907b0:c.instructions+=3;goto B4907b0;
case 0x4907b2:c.instructions+=2;goto B4907b2;
case 0x4907b4:c.instructions+=1;goto B4907b4;
case 0x4907b6:goto L4907b6;
case 0x4907b7:goto L4907b7;
case 0x4907ba:c.instructions+=6;goto B4907ba;
case 0x4907bd:c.instructions+=5;goto B4907bd;
case 0x4907c0:c.instructions+=4;goto B4907c0;
case 0x4907c2:c.instructions+=3;goto B4907c2;
case 0x4907c4:c.instructions+=2;goto B4907c4;
case 0x4907c5:c.instructions+=1;goto B4907c5;
case 0x4907ca:goto L4907ca;
case 0x4907cd:c.instructions+=5;goto B4907cd;
case 0x4907d1:c.instructions+=4;goto B4907d1;
case 0x4907d4:c.instructions+=3;goto B4907d4;
case 0x4907d5:c.instructions+=2;goto B4907d5;
case 0x4907d7:c.instructions+=1;goto B4907d7;
case 0x4907d9:goto L4907d9;
case 0x4907da:goto L4907da;
case 0x4907db:goto L4907db;
case 0x4907dc:c.instructions+=1;goto B4907dc;
case 0x4907e0:goto L4907e0;
case 0x4907e1:c.instructions+=9;goto B4907e1;
case 0x4907e2:c.instructions+=8;goto B4907e2;
case 0x4907e4:c.instructions+=7;goto B4907e4;
case 0x4907e7:c.instructions+=6;goto B4907e7;
case 0x4907e8:c.instructions+=5;goto B4907e8;
case 0x4907ea:c.instructions+=4;goto B4907ea;
case 0x4907ec:c.instructions+=3;goto B4907ec;
case 0x4907ee:c.instructions+=2;goto B4907ee;
case 0x4907f2:c.instructions+=1;goto B4907f2;
case 0x4907f4:goto L4907f4;
case 0x4907f5:c.instructions+=1;goto B4907f5;
case 0x4907f6:goto L4907f6;
case 0x4907f9:c.instructions+=4;goto B4907f9;
case 0x4907fd:c.instructions+=3;goto B4907fd;
case 0x490800:c.instructions+=2;goto B490800;
case 0x490806:c.instructions+=1;goto B490806;
case 0x490808:goto L490808;
case 0x49080e:c.instructions+=1;goto B49080e;
case 0x490810:goto L490810;
case 0x490812:c.instructions+=3;goto B490812;
case 0x490813:c.instructions+=2;goto B490813;
case 0x490817:c.instructions+=1;goto B490817;
case 0x49081c:goto L49081c;
case 0x49081e:c.instructions+=1;goto B49081e;
case 0x490820:goto L490820;
case 0x490824:c.instructions+=1;goto B490824;
case 0x490826:goto L490826;
case 0x490829:c.instructions+=1;goto B490829;
case 0x49082b:goto L49082b;
case 0x49082e:c.instructions+=1;goto B49082e;
case 0x490833:goto L490833;
case 0x490837:c.instructions+=3;goto B490837;
case 0x490838:c.instructions+=2;goto B490838;
case 0x49083a:c.instructions+=1;goto B49083a;
case 0x49083c:goto L49083c;
case 0x490840:c.instructions+=2;goto B490840;
case 0x490841:c.instructions+=1;goto B490841;
case 0x490842:goto L490842;
case 0x490843:c.instructions+=3;goto B490843;
case 0x490844:c.instructions+=2;goto B490844;
case 0x490845:c.instructions+=1;goto B490845;
case 0x490850:goto L490850;
case 0x490853:c.instructions+=8;goto B490853;
case 0x490856:c.instructions+=7;goto B490856;
case 0x490857:c.instructions+=6;goto B490857;
case 0x490859:c.instructions+=5;goto B490859;
case 0x49085b:c.instructions+=4;goto B49085b;
case 0x49085d:c.instructions+=3;goto B49085d;
case 0x490861:c.instructions+=2;goto B490861;
case 0x490865:c.instructions+=1;goto B490865;
case 0x490867:goto L490867;
case 0x490868:c.instructions+=3;goto B490868;
case 0x490869:c.instructions+=2;goto B490869;
case 0x49086a:c.instructions+=1;goto B49086a;
case 0x490870:goto L490870;
case 0x490873:c.instructions+=7;goto B490873;
case 0x490877:c.instructions+=6;goto B490877;
case 0x49087a:c.instructions+=5;goto B49087a;
case 0x49087d:c.instructions+=4;goto B49087d;
case 0x490880:c.instructions+=3;goto B490880;
case 0x490884:c.instructions+=2;goto B490884;
case 0x490886:c.instructions+=1;goto B490886;
case 0x490888:goto L490888;
case 0x490889:c.instructions+=2;goto B490889;
case 0x49088b:c.instructions+=1;goto B49088b;
case 0x490890:goto L490890;
case 0x490892:c.instructions+=1;goto B490892;
case 0x490894:goto L490894;
case 0x490895:c.instructions+=3;goto B490895;
case 0x490896:c.instructions+=2;goto B490896;
case 0x490897:c.instructions+=1;goto B490897;
case 0x49089c:goto L49089c;
case 0x49089f:c.instructions+=2;goto B49089f;
case 0x4908a1:c.instructions+=1;goto B4908a1;
case 0x4908a3:goto L4908a3;
case 0x4908a5:c.instructions+=1;goto B4908a5;
case 0x4908a7:goto L4908a7;
case 0x4908ad:c.instructions+=2;goto B4908ad;
case 0x4908af:c.instructions+=1;goto B4908af;
case 0x4908b1:goto L4908b1;
case 0x4908b6:goto L4908b6;
case 0x4908ba:goto L4908ba;
case 0x4908bd:c.instructions+=1;goto B4908bd;
case 0x4908bf:goto L4908bf;
case 0x4908c2:c.instructions+=1;goto B4908c2;
case 0x4908c7:goto L4908c7;
case 0x4908cb:c.instructions+=3;goto B4908cb;
case 0x4908cc:c.instructions+=2;goto B4908cc;
case 0x4908ce:c.instructions+=1;goto B4908ce;
case 0x4908d0:goto L4908d0;
case 0x4908d4:c.instructions+=3;goto B4908d4;
case 0x4908d5:c.instructions+=2;goto B4908d5;
case 0x4908d6:c.instructions+=1;goto B4908d6;
case 0x4908d7:goto L4908d7;
case 0x4908d8:c.instructions+=2;goto B4908d8;
case 0x4908db:c.instructions+=1;goto B4908db;
case 0x4908e0:goto L4908e0;
case 0x4908e4:c.instructions+=3;goto B4908e4;
case 0x4908e6:c.instructions+=2;goto B4908e6;
case 0x4908e7:c.instructions+=1;goto B4908e7;
case 0x4908ec:goto L4908ec;
case 0x4908ef:c.instructions+=1;goto B4908ef;
case 0x4908f0:goto L4908f0;
case 0x4908f1:c.instructions+=1;goto B4908f1;
case 0x4908f3:goto L4908f3;
case 0x4908f9:c.instructions+=4;goto B4908f9;
case 0x4908fb:c.instructions+=3;goto B4908fb;
case 0x4908fd:c.instructions+=2;goto B4908fd;
case 0x4908fe:c.instructions+=1;goto B4908fe;
case 0x490903:goto L490903;
case 0x490909:c.instructions+=4;goto B490909;
case 0x49090c:c.instructions+=3;goto B49090c;
case 0x49090f:c.instructions+=2;goto B49090f;
case 0x490912:c.instructions+=1;goto B490912;
case 0x490914:goto L490914;
case 0x490915:c.instructions+=1;goto B490915;
case 0x490920:goto L490920;
case 0x490921:c.instructions+=14;goto B490921;
case 0x490923:c.instructions+=13;goto B490923;
case 0x490926:c.instructions+=12;goto B490926;
case 0x490928:c.instructions+=11;goto B490928;
case 0x49092d:c.instructions+=10;goto B49092d;
case 0x490933:c.instructions+=9;goto B490933;
case 0x490934:c.instructions+=8;goto B490934;
case 0x49093b:c.instructions+=7;goto B49093b;
case 0x490941:c.instructions+=6;goto B490941;
case 0x490946:c.instructions+=5;goto B490946;
case 0x490948:c.instructions+=4;goto B490948;
case 0x490949:c.instructions+=3;goto B490949;
case 0x49094a:c.instructions+=2;goto B49094a;
case 0x49094b:c.instructions+=1;goto B49094b;
case 0x490951:goto L490951;
case 0x490955:c.instructions+=1;goto B490955;
case 0x490957:goto L490957;
case 0x49095a:c.instructions+=8;goto B49095a;
case 0x49095d:c.instructions+=7;goto B49095d;
case 0x490963:c.instructions+=6;goto B490963;
case 0x490969:c.instructions+=5;goto B490969;
case 0x49096f:c.instructions+=4;goto B49096f;
case 0x490971:c.instructions+=3;goto B490971;
case 0x490977:c.instructions+=2;goto B490977;
case 0x49097d:c.instructions+=1;goto B49097d;
case 0x49097f:goto L49097f;
case 0x490982:c.instructions+=4;goto B490982;
case 0x490984:c.instructions+=3;goto B490984;
case 0x490987:c.instructions+=2;goto B490987;
case 0x49098a:c.instructions+=1;goto B49098a;
case 0x490990:goto L490990;
case 0x490993:c.instructions+=2;goto B490993;
case 0x490995:c.instructions+=1;goto B490995;
case 0x49099b:goto L49099b;
case 0x49099d:c.instructions+=1;goto B49099d;
case 0x4909a3:goto L4909a3;
case 0x4909a6:c.instructions+=8;goto B4909a6;
case 0x4909aa:c.instructions+=7;goto B4909aa;
case 0x4909b0:c.instructions+=6;goto B4909b0;
case 0x4909b4:c.instructions+=5;goto B4909b4;
case 0x4909b8:c.instructions+=4;goto B4909b8;
case 0x4909bf:c.instructions+=3;goto B4909bf;
case 0x4909c1:c.instructions+=2;goto B4909c1;
case 0x4909c4:c.instructions+=1;goto B4909c4;
case 0x4909c6:goto L4909c6;
case 0x4909c9:c.instructions+=2;goto B4909c9;
case 0x4909cc:c.instructions+=1;goto B4909cc;
case 0x4909d1:goto L4909d1;
case 0x4909d8:c.instructions+=1;goto B4909d8;
case 0x4909da:goto L4909da;
case 0x4909de:c.instructions+=1;goto B4909de;
case 0x4909e4:goto L4909e4;
case 0x4909eb:c.instructions+=1;goto B4909eb;
case 0x4909f0:goto L4909f0;
case 0x4909f3:c.instructions+=42;goto B4909f3;
case 0x4909f6:c.instructions+=41;goto B4909f6;
case 0x4909f9:c.instructions+=40;goto B4909f9;
case 0x4909fd:c.instructions+=39;goto B4909fd;
case 0x490a01:c.instructions+=38;goto B490a01;
case 0x490a05:c.instructions+=37;goto B490a05;
case 0x490a08:c.instructions+=36;goto B490a08;
case 0x490a0c:c.instructions+=35;goto B490a0c;
case 0x490a0e:c.instructions+=34;goto B490a0e;
case 0x490a0f:c.instructions+=33;goto B490a0f;
case 0x490a12:c.instructions+=32;goto B490a12;
case 0x490a19:c.instructions+=31;goto B490a19;
case 0x490a24:c.instructions+=30;goto B490a24;
case 0x490a26:c.instructions+=29;goto B490a26;
case 0x490a2a:c.instructions+=28;goto B490a2a;
case 0x490a2c:c.instructions+=27;goto B490a2c;
case 0x490a2e:c.instructions+=26;goto B490a2e;
case 0x490a31:c.instructions+=25;goto B490a31;
case 0x490a35:c.instructions+=24;goto B490a35;
case 0x490a38:c.instructions+=23;goto B490a38;
case 0x490a3c:c.instructions+=22;goto B490a3c;
case 0x490a3f:c.instructions+=21;goto B490a3f;
case 0x490a41:c.instructions+=20;goto B490a41;
case 0x490a43:c.instructions+=19;goto B490a43;
case 0x490a46:c.instructions+=18;goto B490a46;
case 0x490a48:c.instructions+=17;goto B490a48;
case 0x490a4b:c.instructions+=16;goto B490a4b;
case 0x490a4f:c.instructions+=15;goto B490a4f;
case 0x490a52:c.instructions+=14;goto B490a52;
case 0x490a56:c.instructions+=13;goto B490a56;
case 0x490a59:c.instructions+=12;goto B490a59;
case 0x490a5b:c.instructions+=11;goto B490a5b;
case 0x490a5d:c.instructions+=10;goto B490a5d;
case 0x490a60:c.instructions+=9;goto B490a60;
case 0x490a62:c.instructions+=8;goto B490a62;
case 0x490a64:c.instructions+=7;goto B490a64;
case 0x490a67:c.instructions+=6;goto B490a67;
case 0x490a6e:c.instructions+=5;goto B490a6e;
case 0x490a75:c.instructions+=4;goto B490a75;
case 0x490a79:c.instructions+=3;goto B490a79;
case 0x490a7d:c.instructions+=2;goto B490a7d;
case 0x490a81:c.instructions+=1;goto B490a81;
case 0x490a86:goto L490a86;
case 0x490a88:c.instructions+=1;goto B490a88;
case 0x490a8a:goto L490a8a;
case 0x490a91:c.instructions+=1;goto B490a91;
case 0x490a93:goto L490a93;
case 0x490a95:c.instructions+=6;goto B490a95;
case 0x490a97:c.instructions+=5;goto B490a97;
case 0x490a99:c.instructions+=4;goto B490a99;
case 0x490a9d:c.instructions+=3;goto B490a9d;
case 0x490a9e:c.instructions+=2;goto B490a9e;
case 0x490aa5:c.instructions+=1;goto B490aa5;
case 0x490aaa:goto L490aaa;
case 0x490aad:c.instructions+=7;goto B490aad;
case 0x490aaf:c.instructions+=6;goto B490aaf;
case 0x490ab2:c.instructions+=5;goto B490ab2;
case 0x490ab4:c.instructions+=4;goto B490ab4;
case 0x490aba:c.instructions+=3;goto B490aba;
case 0x490abc:c.instructions+=2;goto B490abc;
case 0x490abf:c.instructions+=1;goto B490abf;
case 0x490ac1:goto L490ac1;
case 0x490ac8:c.instructions+=1;goto B490ac8;
case 0x490aca:goto L490aca;
case 0x490ace:c.instructions+=3;goto B490ace;
case 0x490ad0:c.instructions+=2;goto B490ad0;
case 0x490ad2:c.instructions+=1;goto B490ad2;
case 0x490ad5:goto L490ad5;
case 0x490ad7:goto L490ad7;
case 0x490ade:c.instructions+=2;goto B490ade;
case 0x490ae9:c.instructions+=1;goto B490ae9;
case 0x490aee:goto L490aee;
case 0x490af1:c.instructions+=9;goto B490af1;
case 0x490af4:c.instructions+=8;goto B490af4;
case 0x490af7:c.instructions+=7;goto B490af7;
case 0x490afa:c.instructions+=6;goto B490afa;
case 0x490afe:c.instructions+=5;goto B490afe;
case 0x490aff:c.instructions+=4;goto B490aff;
case 0x490b06:c.instructions+=3;goto B490b06;
case 0x490b0a:c.instructions+=2;goto B490b0a;
case 0x490b0e:c.instructions+=1;goto B490b0e;
case 0x490b13:goto L490b13;
case 0x490b16:c.instructions+=8;goto B490b16;
case 0x490b19:c.instructions+=7;goto B490b19;
case 0x490b21:c.instructions+=6;goto B490b21;
case 0x490b29:c.instructions+=5;goto B490b29;
case 0x490b31:c.instructions+=4;goto B490b31;
case 0x490b39:c.instructions+=3;goto B490b39;
case 0x490b41:c.instructions+=2;goto B490b41;
case 0x490b49:c.instructions+=1;goto B490b49;
case 0x490b4f:goto L490b4f;
case 0x490b52:c.instructions+=3;goto B490b52;
case 0x490b55:c.instructions+=2;goto B490b55;
case 0x490b5a:c.instructions+=1;goto B490b5a;
case 0x490b60:goto L490b60;
case 0x490b65:c.instructions+=1;goto B490b65;
case 0x490b6b:goto L490b6b;
case 0x490b6f:c.instructions+=13;goto B490b6f;
case 0x490b73:c.instructions+=12;goto B490b73;
case 0x490b76:c.instructions+=11;goto B490b76;
case 0x490b78:c.instructions+=10;goto B490b78;
case 0x490b7a:c.instructions+=9;goto B490b7a;
case 0x490b7e:c.instructions+=8;goto B490b7e;
case 0x490b81:c.instructions+=7;goto B490b81;
case 0x490b85:c.instructions+=6;goto B490b85;
case 0x490b88:c.instructions+=5;goto B490b88;
case 0x490b8b:c.instructions+=4;goto B490b8b;
case 0x490b92:c.instructions+=3;goto B490b92;
case 0x490b93:c.instructions+=2;goto B490b93;
case 0x490b9a:c.instructions+=1;goto B490b9a;
case 0x490b9f:goto L490b9f;
case 0x490ba1:c.instructions+=13;goto B490ba1;
case 0x490ba4:c.instructions+=12;goto B490ba4;
case 0x490ba6:c.instructions+=11;goto B490ba6;
case 0x490ba8:c.instructions+=10;goto B490ba8;
case 0x490bab:c.instructions+=9;goto B490bab;
case 0x490bae:c.instructions+=8;goto B490bae;
case 0x490bb1:c.instructions+=7;goto B490bb1;
case 0x490bb4:c.instructions+=6;goto B490bb4;
case 0x490bb7:c.instructions+=5;goto B490bb7;
case 0x490bba:c.instructions+=4;goto B490bba;
case 0x490bc1:c.instructions+=3;goto B490bc1;
case 0x490bc2:c.instructions+=2;goto B490bc2;
case 0x490bc6:c.instructions+=1;goto B490bc6;
case 0x490bcb:goto L490bcb;
case 0x490bce:c.instructions+=8;goto B490bce;
case 0x490bd1:c.instructions+=7;goto B490bd1;
case 0x490bd3:c.instructions+=6;goto B490bd3;
case 0x490bd6:c.instructions+=5;goto B490bd6;
case 0x490bdd:c.instructions+=4;goto B490bdd;
case 0x490be4:c.instructions+=3;goto B490be4;
case 0x490be5:c.instructions+=2;goto B490be5;
case 0x490be9:c.instructions+=1;goto B490be9;
case 0x490bee:goto L490bee;
case 0x490bf2:c.instructions+=6;goto B490bf2;
case 0x490bf3:c.instructions+=5;goto B490bf3;
case 0x490bfa:c.instructions+=4;goto B490bfa;
case 0x490bfb:c.instructions+=3;goto B490bfb;
case 0x490c02:c.instructions+=2;goto B490c02;
case 0x490c03:c.instructions+=1;goto B490c03;
case 0x490c08:goto L490c08;
case 0x490c0e:c.instructions+=8;goto B490c0e;
case 0x490c0f:c.instructions+=7;goto B490c0f;
case 0x490c13:c.instructions+=6;goto B490c13;
case 0x490c14:c.instructions+=5;goto B490c14;
case 0x490c1b:c.instructions+=4;goto B490c1b;
case 0x490c1c:c.instructions+=3;goto B490c1c;
case 0x490c23:c.instructions+=2;goto B490c23;
case 0x490c24:c.instructions+=1;goto B490c24;
case 0x490c29:goto L490c29;
case 0x490c2c:c.instructions+=8;goto B490c2c;
case 0x490c2f:c.instructions+=7;goto B490c2f;
case 0x490c31:c.instructions+=6;goto B490c31;
case 0x490c38:c.instructions+=5;goto B490c38;
case 0x490c39:c.instructions+=4;goto B490c39;
case 0x490c40:c.instructions+=3;goto B490c40;
case 0x490c41:c.instructions+=2;goto B490c41;
case 0x490c43:c.instructions+=1;goto B490c43;
case 0x490c48:goto L490c48;
case 0x490c4a:c.instructions+=1;goto B490c4a;
case 0x490c50:goto L490c50;
case 0x490c53:c.instructions+=5;goto B490c53;
case 0x490c54:c.instructions+=4;goto B490c54;
case 0x490c5b:c.instructions+=3;goto B490c5b;
case 0x490c5c:c.instructions+=2;goto B490c5c;
case 0x490c60:c.instructions+=1;goto B490c60;
case 0x490c65:goto L490c65;
case 0x490c6c:c.instructions+=5;goto B490c6c;
case 0x490c6d:c.instructions+=4;goto B490c6d;
case 0x490c74:c.instructions+=3;goto B490c74;
case 0x490c75:c.instructions+=2;goto B490c75;
case 0x490c79:c.instructions+=1;goto B490c79;
case 0x490c7e:goto L490c7e;
case 0x490c80:c.instructions+=1;goto B490c80;
case 0x490c85:goto L490c85;
case 0x490c87:c.instructions+=13;goto B490c87;
case 0x490c8a:c.instructions+=12;goto B490c8a;
case 0x490c8c:c.instructions+=11;goto B490c8c;
case 0x490c8e:c.instructions+=10;goto B490c8e;
case 0x490c91:c.instructions+=9;goto B490c91;
case 0x490c94:c.instructions+=8;goto B490c94;
case 0x490c97:c.instructions+=7;goto B490c97;
case 0x490c9a:c.instructions+=6;goto B490c9a;
case 0x490c9d:c.instructions+=5;goto B490c9d;
case 0x490ca0:c.instructions+=4;goto B490ca0;
case 0x490ca7:c.instructions+=3;goto B490ca7;
case 0x490ca8:c.instructions+=2;goto B490ca8;
case 0x490cac:c.instructions+=1;goto B490cac;
case 0x490cb1:goto L490cb1;
case 0x490cb6:goto L490cb6;
case 0x490cb9:c.instructions+=1;goto B490cb9;
case 0x490cbf:goto L490cbf;
case 0x490cc3:c.instructions+=13;goto B490cc3;
case 0x490cc7:c.instructions+=12;goto B490cc7;
case 0x490cca:c.instructions+=11;goto B490cca;
case 0x490ccc:c.instructions+=10;goto B490ccc;
case 0x490cce:c.instructions+=9;goto B490cce;
case 0x490cd2:c.instructions+=8;goto B490cd2;
case 0x490cd5:c.instructions+=7;goto B490cd5;
case 0x490cd9:c.instructions+=6;goto B490cd9;
case 0x490cdc:c.instructions+=5;goto B490cdc;
case 0x490cdf:c.instructions+=4;goto B490cdf;
case 0x490ce6:c.instructions+=3;goto B490ce6;
case 0x490ce7:c.instructions+=2;goto B490ce7;
case 0x490cee:c.instructions+=1;goto B490cee;
case 0x490cf3:goto L490cf3;
case 0x490cf5:c.instructions+=13;goto B490cf5;
case 0x490cf8:c.instructions+=12;goto B490cf8;
case 0x490cfa:c.instructions+=11;goto B490cfa;
case 0x490cfc:c.instructions+=10;goto B490cfc;
case 0x490cff:c.instructions+=9;goto B490cff;
case 0x490d02:c.instructions+=8;goto B490d02;
case 0x490d05:c.instructions+=7;goto B490d05;
case 0x490d08:c.instructions+=6;goto B490d08;
case 0x490d0b:c.instructions+=5;goto B490d0b;
case 0x490d0e:c.instructions+=4;goto B490d0e;
case 0x490d15:c.instructions+=3;goto B490d15;
case 0x490d16:c.instructions+=2;goto B490d16;
case 0x490d1a:c.instructions+=1;goto B490d1a;
case 0x490d1f:goto L490d1f;
case 0x490d23:c.instructions+=6;goto B490d23;
case 0x490d24:c.instructions+=5;goto B490d24;
case 0x490d2b:c.instructions+=4;goto B490d2b;
case 0x490d2c:c.instructions+=3;goto B490d2c;
case 0x490d33:c.instructions+=2;goto B490d33;
case 0x490d34:c.instructions+=1;goto B490d34;
case 0x490d39:goto L490d39;
case 0x490d3f:c.instructions+=8;goto B490d3f;
case 0x490d40:c.instructions+=7;goto B490d40;
case 0x490d44:c.instructions+=6;goto B490d44;
case 0x490d45:c.instructions+=5;goto B490d45;
case 0x490d4c:c.instructions+=4;goto B490d4c;
case 0x490d4d:c.instructions+=3;goto B490d4d;
case 0x490d54:c.instructions+=2;goto B490d54;
case 0x490d55:c.instructions+=1;goto B490d55;
case 0x490d5a:goto L490d5a;
case 0x490d5d:c.instructions+=7;goto B490d5d;
case 0x490d5f:c.instructions+=6;goto B490d5f;
case 0x490d66:c.instructions+=5;goto B490d66;
case 0x490d67:c.instructions+=4;goto B490d67;
case 0x490d6e:c.instructions+=3;goto B490d6e;
case 0x490d6f:c.instructions+=2;goto B490d6f;
case 0x490d72:c.instructions+=1;goto B490d72;
case 0x490d77:goto L490d77;
case 0x490d79:c.instructions+=1;goto B490d79;
case 0x490d7f:goto L490d7f;
case 0x490d81:c.instructions+=8;goto B490d81;
case 0x490d88:c.instructions+=7;goto B490d88;
case 0x490d8f:c.instructions+=6;goto B490d8f;
case 0x490d90:c.instructions+=5;goto B490d90;
case 0x490d91:c.instructions+=4;goto B490d91;
case 0x490d92:c.instructions+=3;goto B490d92;
case 0x490d94:c.instructions+=2;goto B490d94;
case 0x490d95:c.instructions+=1;goto B490d95;
case 0x490d96:goto L490d96;
case 0x490d99:c.instructions+=1;goto B490d99;
case 0x490d9b:goto L490d9b;
case 0x490d9e:c.instructions+=1;goto B490d9e;
case 0x490da4:goto L490da4;
case 0x490da8:c.instructions+=2;goto B490da8;
case 0x490dab:c.instructions+=1;goto B490dab;
case 0x490db1:goto L490db1;
case 0x490db4:c.instructions+=1;goto B490db4;
case 0x490dba:goto L490dba;
case 0x490dbd:c.instructions+=2;goto B490dbd;
case 0x490dc2:c.instructions+=1;goto B490dc2;
case 0x490dc4:goto L490dc4;
case 0x490dc6:c.instructions+=1;goto B490dc6;
case 0x490dc8:goto L490dc8;
case 0x490dca:goto L490dca;
case 0x490dcf:goto L490dcf;
case 0x490dd5:c.instructions+=2;goto B490dd5;
case 0x490dd6:c.instructions+=1;goto B490dd6;
case 0x490ddb:goto L490ddb;
case 0x490ddd:c.instructions+=6;goto B490ddd;
case 0x490de0:c.instructions+=5;goto B490de0;
case 0x490de1:c.instructions+=4;goto B490de1;
case 0x490de5:c.instructions+=3;goto B490de5;
case 0x490de6:c.instructions+=2;goto B490de6;
case 0x490de8:c.instructions+=1;goto B490de8;
case 0x490ded:goto L490ded;
case 0x490df1:c.instructions+=4;goto B490df1;
case 0x490df2:c.instructions+=3;goto B490df2;
case 0x490df6:c.instructions+=2;goto B490df6;
case 0x490df7:c.instructions+=1;goto B490df7;
case 0x490dfc:goto L490dfc;
case 0x490e00:c.instructions+=12;goto B490e00;
case 0x490e06:c.instructions+=11;goto B490e06;
case 0x490e09:c.instructions+=10;goto B490e09;
case 0x490e0d:c.instructions+=9;goto B490e0d;
case 0x490e13:c.instructions+=8;goto B490e13;
case 0x490e15:c.instructions+=7;goto B490e15;
case 0x490e19:c.instructions+=6;goto B490e19;
case 0x490e1f:c.instructions+=5;goto B490e1f;
case 0x490e21:c.instructions+=4;goto B490e21;
case 0x490e27:c.instructions+=3;goto B490e27;
case 0x490e29:c.instructions+=2;goto B490e29;
case 0x490e2c:c.instructions+=1;goto B490e2c;
case 0x490e32:goto L490e32;
case 0x490e38:c.instructions+=4;goto B490e38;
case 0x490e3e:c.instructions+=3;goto B490e3e;
case 0x490e44:c.instructions+=2;goto B490e44;
case 0x490e46:c.instructions+=1;goto B490e46;
case 0x490e49:goto L490e49;
case 0x490e4d:c.instructions+=13;goto B490e4d;
case 0x490e51:c.instructions+=12;goto B490e51;
case 0x490e54:c.instructions+=11;goto B490e54;
case 0x490e56:c.instructions+=10;goto B490e56;
case 0x490e58:c.instructions+=9;goto B490e58;
case 0x490e5c:c.instructions+=8;goto B490e5c;
case 0x490e5f:c.instructions+=7;goto B490e5f;
case 0x490e63:c.instructions+=6;goto B490e63;
case 0x490e66:c.instructions+=5;goto B490e66;
case 0x490e69:c.instructions+=4;goto B490e69;
case 0x490e70:c.instructions+=3;goto B490e70;
case 0x490e71:c.instructions+=2;goto B490e71;
case 0x490e78:c.instructions+=1;goto B490e78;
case 0x490e7d:goto L490e7d;
case 0x490e7f:c.instructions+=13;goto B490e7f;
case 0x490e82:c.instructions+=12;goto B490e82;
case 0x490e84:c.instructions+=11;goto B490e84;
case 0x490e86:c.instructions+=10;goto B490e86;
case 0x490e89:c.instructions+=9;goto B490e89;
case 0x490e8c:c.instructions+=8;goto B490e8c;
case 0x490e8f:c.instructions+=7;goto B490e8f;
case 0x490e92:c.instructions+=6;goto B490e92;
case 0x490e95:c.instructions+=5;goto B490e95;
case 0x490e98:c.instructions+=4;goto B490e98;
case 0x490e9f:c.instructions+=3;goto B490e9f;
case 0x490ea0:c.instructions+=2;goto B490ea0;
case 0x490ea4:c.instructions+=1;goto B490ea4;
case 0x490ea9:goto L490ea9;
case 0x490eac:c.instructions+=4;goto B490eac;
case 0x490eae:c.instructions+=3;goto B490eae;
case 0x490eb2:c.instructions+=2;goto B490eb2;
case 0x490eb3:c.instructions+=1;goto B490eb3;
case 0x490eb8:goto L490eb8;
case 0x490eba:c.instructions+=1;goto B490eba;
case 0x490ec0:goto L490ec0;
case 0x490ec3:c.instructions+=6;goto B490ec3;
case 0x490ec6:c.instructions+=5;goto B490ec6;
case 0x490ec7:c.instructions+=4;goto B490ec7;
case 0x490ece:c.instructions+=3;goto B490ece;
case 0x490ecf:c.instructions+=2;goto B490ecf;
case 0x490ed3:c.instructions+=1;goto B490ed3;
case 0x490ed8:goto L490ed8;
case 0x490edb:goto L490edb;
case 0x490ede:c.instructions+=19;goto B490ede;
case 0x490ee1:c.instructions+=18;goto B490ee1;
case 0x490ee4:c.instructions+=17;goto B490ee4;
case 0x490eeb:c.instructions+=16;goto B490eeb;
case 0x490eee:c.instructions+=15;goto B490eee;
case 0x490ef5:c.instructions+=14;goto B490ef5;
case 0x490ef9:c.instructions+=13;goto B490ef9;
case 0x490f00:c.instructions+=12;goto B490f00;
case 0x490f04:c.instructions+=11;goto B490f04;
case 0x490f06:c.instructions+=10;goto B490f06;
case 0x490f08:c.instructions+=9;goto B490f08;
case 0x490f0f:c.instructions+=8;goto B490f0f;
case 0x490f12:c.instructions+=7;goto B490f12;
case 0x490f19:c.instructions+=6;goto B490f19;
case 0x490f1c:c.instructions+=5;goto B490f1c;
case 0x490f1f:c.instructions+=4;goto B490f1f;
case 0x490f23:c.instructions+=3;goto B490f23;
case 0x490f24:c.instructions+=2;goto B490f24;
case 0x490f2b:c.instructions+=1;goto B490f2b;
case 0x490f30:goto L490f30;
case 0x490f34:c.instructions+=13;goto B490f34;
case 0x490f38:c.instructions+=12;goto B490f38;
case 0x490f3b:c.instructions+=11;goto B490f3b;
case 0x490f3d:c.instructions+=10;goto B490f3d;
case 0x490f3f:c.instructions+=9;goto B490f3f;
case 0x490f43:c.instructions+=8;goto B490f43;
case 0x490f46:c.instructions+=7;goto B490f46;
case 0x490f4a:c.instructions+=6;goto B490f4a;
case 0x490f4d:c.instructions+=5;goto B490f4d;
case 0x490f50:c.instructions+=4;goto B490f50;
case 0x490f57:c.instructions+=3;goto B490f57;
case 0x490f58:c.instructions+=2;goto B490f58;
case 0x490f5c:c.instructions+=1;goto B490f5c;
case 0x490f61:goto L490f61;
case 0x490f67:c.instructions+=5;goto B490f67;
case 0x490f6a:c.instructions+=4;goto B490f6a;
case 0x490f70:c.instructions+=3;goto B490f70;
case 0x490f71:c.instructions+=2;goto B490f71;
case 0x490f7c:c.instructions+=1;goto B490f7c;
case 0x490f7e:goto L490f7e;
case 0x490f7f:c.instructions+=1;goto B490f7f;
case 0x490f81:goto L490f81;
case 0x490f83:c.instructions+=4;goto B490f83;
case 0x490f85:c.instructions+=3;goto B490f85;
case 0x490f8b:c.instructions+=2;goto B490f8b;
case 0x490f91:c.instructions+=1;goto B490f91;
case 0x490f93:goto L490f93;
case 0x490f95:c.instructions+=3;goto B490f95;
case 0x490f97:c.instructions+=2;goto B490f97;
case 0x490f9d:c.instructions+=1;goto B490f9d;
case 0x490fa3:goto L490fa3;
case 0x490faa:c.instructions+=4;goto B490faa;
case 0x490fac:c.instructions+=3;goto B490fac;
case 0x490fae:c.instructions+=2;goto B490fae;
case 0x490fb1:c.instructions+=1;goto B490fb1;
case 0x490fb3:goto L490fb3;
case 0x490fb5:goto L490fb5;
case 0x490fb7:c.instructions+=9;goto B490fb7;
case 0x490fb9:c.instructions+=8;goto B490fb9;
case 0x490fc0:c.instructions+=7;goto B490fc0;
case 0x490fc7:c.instructions+=6;goto B490fc7;
case 0x490fc8:c.instructions+=5;goto B490fc8;
case 0x490fc9:c.instructions+=4;goto B490fc9;
case 0x490fca:c.instructions+=3;goto B490fca;
case 0x490fcc:c.instructions+=2;goto B490fcc;
case 0x490fcd:c.instructions+=1;goto B490fcd;
case 0x490fce:goto L490fce;
case 0x490fd5:c.instructions+=4;goto B490fd5;
case 0x490fd7:c.instructions+=3;goto B490fd7;
case 0x490fd9:c.instructions+=2;goto B490fd9;
case 0x490fdc:c.instructions+=1;goto B490fdc;
case 0x490fde:goto L490fde;
case 0x490fe5:c.instructions+=7;goto B490fe5;
case 0x490fe7:c.instructions+=6;goto B490fe7;
case 0x490fe9:c.instructions+=5;goto B490fe9;
case 0x490feb:c.instructions+=4;goto B490feb;
case 0x490fed:c.instructions+=3;goto B490fed;
case 0x490ff3:c.instructions+=2;goto B490ff3;
case 0x490ffa:c.instructions+=1;goto B490ffa;
case 0x490ffc:goto L490ffc;
case 0x490ffe:goto L490ffe;
default:missing_instruction(c.pc);}
B490001:L490001:{c.instructions+=3;NFSU2_TR(0x490001);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B490002:{NFSU2_TR(0x490002);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490006:{NFSU2_TR(0x490006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x48ff64u,48f);}
}
B49000c:L49000c:{c.instructions+=6;NFSU2_TR(0x49000c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49000d:{NFSU2_TR(0x49000d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49000e:{NFSU2_TR(0x49000e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49000f:{NFSU2_TR(0x49000f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490010:{NFSU2_TR(0x490010);
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
B490013:{NFSU2_TR(0x490013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490020:L490020:{c.instructions+=12;NFSU2_TR(0x490020);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B490023:{NFSU2_TR(0x490023);
{u32 ea_=u32(u32(8369952u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B490029:{NFSU2_TR(0x490029);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49002a:{NFSU2_TR(0x49002a);
__builtin_memmove((R+12),gp(0x82dc00),4);
}
B490030:{NFSU2_TR(0x490030);
w4(R+4,u32(0x82dc00ull));
}
B490035:{NFSU2_TR(0x490035);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49003b:{NFSU2_TR(0x49003b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49003f:{NFSU2_TR(0x49003f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490043:{NFSU2_TR(0x490043);
{u32 ea_=u32(u32(8369928u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B490049:{NFSU2_TR(0x490049);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49004f:{NFSU2_TR(0x49004f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490053:{NFSU2_TR(0x490053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490058ull));
TAIL_STATIC(0x502fd0u,502);
}
B490058:L490058:{c.instructions+=4;NFSU2_TR(0x490058);
__builtin_memmove((R+4),(R+0),4);
}
B49005a:{NFSU2_TR(0x49005a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49005c:{NFSU2_TR(0x49005c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490060:{NFSU2_TR(0x490060);
if(r1(R+518)){{goto L490128;}}
}
B490066:L490066:{c.instructions+=4;NFSU2_TR(0x490066);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490067:{NFSU2_TR(0x490067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490068:{NFSU2_TR(0x490068);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490069:{NFSU2_TR(0x490069);
{goto L490070;}
}
B49006b:L49006b:{c.instructions+=2;NFSU2_TR(0x49006b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49006f:{NFSU2_TR(0x49006f);
}
B490070:L490070:{c.instructions+=4;NFSU2_TR(0x490070);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490073:{NFSU2_TR(0x490073);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490075:{NFSU2_TR(0x490075);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B490078:{NFSU2_TR(0x490078);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L490117;}}
}
B49007e:L49007e:{c.instructions+=2;NFSU2_TR(0x49007e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x24ull))));
}
B490081:{NFSU2_TR(0x490081);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490085:L490085:{c.instructions+=3;NFSU2_TR(0x490085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490088:{NFSU2_TR(0x490088);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49008a:{NFSU2_TR(0x49008a);
if(r1(R+518)){{goto L490101;}}
}
B49008c:L49008c:{c.instructions+=4;NFSU2_TR(0x49008c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49008f:{NFSU2_TR(0x49008f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490093:{NFSU2_TR(0x490093);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490096:{NFSU2_TR(0x490096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49009e;}}
}
B490098:L490098:{c.instructions+=2;NFSU2_TR(0x490098);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B49009a:{NFSU2_TR(0x49009a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49009e:L49009e:{c.instructions+=6;NFSU2_TR(0x49009e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4900a1:{NFSU2_TR(0x4900a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4900a4:{NFSU2_TR(0x4900a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4900a8:{NFSU2_TR(0x4900a8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4900ac:{NFSU2_TR(0x4900ac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4900ae:{NFSU2_TR(0x4900ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4900b3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4900b3:L4900b3:{c.instructions+=6;NFSU2_TR(0x4900b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4900b5:{NFSU2_TR(0x4900b5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4900b6:{NFSU2_TR(0x4900b6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4900b6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4900b6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4900b8:{NFSU2_TR(0x4900b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4900bb:{NFSU2_TR(0x4900bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4900bf:{NFSU2_TR(0x4900bf);
if(r1(R+518)){{goto L490101;}}
}
B4900c1:L4900c1:{c.instructions+=6;NFSU2_TR(0x4900c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4900c4:{NFSU2_TR(0x4900c4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4900c6:{NFSU2_TR(0x4900c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4900c8:{NFSU2_TR(0x4900c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4900cb:{NFSU2_TR(0x4900cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4900cf:{NFSU2_TR(0x4900cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L490101;}}
}
B4900d1:L4900d1:{c.instructions+=2;NFSU2_TR(0x4900d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4900d4:{NFSU2_TR(0x4900d4);
{goto L4900e0;}
}
B4900d6:L4900d6:{c.instructions+=3;NFSU2_TR(0x4900d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4900da:{NFSU2_TR(0x4900da);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4900de:{NFSU2_TR(0x4900de);
__builtin_memmove((R+28),(R+28),4);
}
B4900e0:L4900e0:{c.instructions+=8;NFSU2_TR(0x4900e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4900e3:{NFSU2_TR(0x4900e3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4900e4:{NFSU2_TR(0x4900e4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4900e4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4900e4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4900e6:{NFSU2_TR(0x4900e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4900e9:{NFSU2_TR(0x4900e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4900ed:{NFSU2_TR(0x4900ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4900ee:{NFSU2_TR(0x4900ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4900f0:{NFSU2_TR(0x4900f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4900f5ull));
TAIL_STATIC(0x5b9730u,5b9);
}
B4900f5:L4900f5:{c.instructions+=4;NFSU2_TR(0x4900f5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B4900f8:{NFSU2_TR(0x4900f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4900f9:{NFSU2_TR(0x4900f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4900fb:{NFSU2_TR(0x4900fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4900d6u);}goto L4900d6;}}
}
B4900fd:L4900fd:{c.instructions+=1;NFSU2_TR(0x4900fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B490101:L490101:{c.instructions+=5;NFSU2_TR(0x490101);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490105:{NFSU2_TR(0x490105);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x34ull))));
}
B490108:{NFSU2_TR(0x490108);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B490109:{NFSU2_TR(0x490109);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49010d:{NFSU2_TR(0x49010d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490085u);}goto L490085;}}
}
B490113:L490113:{c.instructions+=1;NFSU2_TR(0x490113);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490117:L490117:{c.instructions+=4;NFSU2_TR(0x490117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B490119:{NFSU2_TR(0x490119);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49011b:{NFSU2_TR(0x49011b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49011f:{NFSU2_TR(0x49011f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49006bu);}goto L49006b;}}
}
B490125:L490125:{c.instructions+=3;NFSU2_TR(0x490125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490126:{NFSU2_TR(0x490126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490127:{NFSU2_TR(0x490127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490128:L490128:{c.instructions+=3;NFSU2_TR(0x490128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490129:{NFSU2_TR(0x490129);
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
B49012c:{NFSU2_TR(0x49012c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490130:L490130:{c.instructions+=5;NFSU2_TR(0x490130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490134:{NFSU2_TR(0x490134);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490136:{NFSU2_TR(0x490136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490137:{NFSU2_TR(0x490137);
w4(R+4,u32(0x83579cull));
}
B49013c:{NFSU2_TR(0x49013c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490141ull));
TAIL_STATIC(0x48d250u,48d);
}
B490141:L490141:{c.instructions+=1;NFSU2_TR(0x490141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490150:L490150:{c.instructions+=6;NFSU2_TR(0x490150);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490154:{NFSU2_TR(0x490154);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490158:{NFSU2_TR(0x490158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490159:{NFSU2_TR(0x490159);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49015a:{NFSU2_TR(0x49015a);
w4(R+4,u32(0x83579cull));
}
B49015f:{NFSU2_TR(0x49015f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490164ull));
TAIL_STATIC(0x48d2e0u,48d);
}
B490164:L490164:{c.instructions+=1;NFSU2_TR(0x490164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490170:L490170:{c.instructions+=5;NFSU2_TR(0x490170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490171:{NFSU2_TR(0x490171);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B490175:{NFSU2_TR(0x490175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490176:{NFSU2_TR(0x490176);
w4(R+4,u32(0x83579cull));
}
B49017b:{NFSU2_TR(0x49017b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490180ull));
TAIL_STATIC(0x48d3c0u,48d);
}
B490180:L490180:{c.instructions+=2;NFSU2_TR(0x490180);
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
B490182:{NFSU2_TR(0x490182);
if(r1(R+518)){{goto L490198;}}
}
B490184:L490184:{c.instructions+=1;NFSU2_TR(0x490184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490189ull));
TAIL_STATIC(0x57ef60u,57e);
}
B490189:L490189:{c.instructions+=3;NFSU2_TR(0x490189);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49018a:{NFSU2_TR(0x49018a);
w4(R+4,u32(0x83579cull));
}
B49018f:{NFSU2_TR(0x49018f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490194ull));
TAIL_STATIC(0x48d3c0u,48d);
}
B490194:L490194:{c.instructions+=2;NFSU2_TR(0x490194);
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
B490196:{NFSU2_TR(0x490196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490184u);}goto L490184;}}
}
B490198:L490198:{c.instructions+=2;NFSU2_TR(0x490198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490199:{NFSU2_TR(0x490199);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4901a0:L4901a0:{c.instructions+=4;NFSU2_TR(0x4901a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4901a4:{NFSU2_TR(0x4901a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901a5:{NFSU2_TR(0x4901a5);
w4(R+4,u32(0x83579cull));
}
B4901aa:{NFSU2_TR(0x4901aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4901afull));
TAIL_STATIC(0x48d370u,48d);
}
B4901af:L4901af:{c.instructions+=1;NFSU2_TR(0x4901af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4901b0:L4901b0:{c.instructions+=4;NFSU2_TR(0x4901b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4901b4:{NFSU2_TR(0x4901b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901b5:{NFSU2_TR(0x4901b5);
w4(R+4,u32(0x83579cull));
}
B4901ba:{NFSU2_TR(0x4901ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4901bfull));
TAIL_STATIC(0x48ce80u,48c);
}
B4901bf:L4901bf:{c.instructions+=4;NFSU2_TR(0x4901bf);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4901c1:{NFSU2_TR(0x4901c1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4901c3:{NFSU2_TR(0x4901c3);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4901c5:{NFSU2_TR(0x4901c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4901d0:L4901d0:{c.instructions+=7;NFSU2_TR(0x4901d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901d1:{NFSU2_TR(0x4901d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901d2:{NFSU2_TR(0x4901d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901d3:{NFSU2_TR(0x4901d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4901d4:{NFSU2_TR(0x4901d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4901d8:{NFSU2_TR(0x4901d8);
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
B4901da:{NFSU2_TR(0x4901da);
if(r1(R+518)){{goto L4902a7;}}
}
B4901e0:L4901e0:{c.instructions+=3;NFSU2_TR(0x4901e0);
__builtin_memmove((R+24),gp(0x830af0),4);
}
B4901e6:{NFSU2_TR(0x4901e6);
w4(R+4,u32(0x830af0ull));
}
B4901eb:{NFSU2_TR(0x4901eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4901f0ull));
TAIL_STATIC(0x502fd0u,502);
}
B4901f0:L4901f0:{c.instructions+=3;NFSU2_TR(0x4901f0);
__builtin_memmove((R+20),(R+0),4);
}
B4901f2:{NFSU2_TR(0x4901f2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4901f4:{NFSU2_TR(0x4901f4);
if(r1(R+518)){{goto L49024a;}}
}
B4901f6:L4901f6:{c.instructions+=3;NFSU2_TR(0x4901f6);
__builtin_memmove((R+0),(R+28),4);
}
B4901f8:{NFSU2_TR(0x4901f8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B4901fd:{NFSU2_TR(0x4901fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x833784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B490203:L490203:{c.instructions+=2;NFSU2_TR(0x490203);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B490205:{NFSU2_TR(0x490205);
if(r1(R+518)){{goto L49024a;}}
}
B490207:L490207:{c.instructions+=3;NFSU2_TR(0x490207);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49020b:{NFSU2_TR(0x49020b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49020d:{NFSU2_TR(0x49020d);
if(r1(R+518)){{goto L490238;}}
}
B49020f:L49020f:{c.instructions+=3;NFSU2_TR(0x49020f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490212:{NFSU2_TR(0x490212);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490214:{NFSU2_TR(0x490214);
if(r1(R+518)){{goto L490244;}}
}
B490216:L490216:{c.instructions+=3;NFSU2_TR(0x490216);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490219:{NFSU2_TR(0x490219);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49021b:{NFSU2_TR(0x49021b);
if(r1(R+518)){{goto L490244;}}
}
B49021d:L49021d:{c.instructions+=7;NFSU2_TR(0x49021d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490220:{NFSU2_TR(0x490220);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490222:{NFSU2_TR(0x490222);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490224:{NFSU2_TR(0x490224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490225:{NFSU2_TR(0x490225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490226:{NFSU2_TR(0x490226);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490227:{NFSU2_TR(0x490227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49022cull));
TAIL_STATIC(0x488bc0u,488);
}
B49022c:L49022c:{c.instructions+=3;NFSU2_TR(0x49022c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49022f:{NFSU2_TR(0x49022f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490231:{NFSU2_TR(0x490231);
if(r1(R+518)){{goto L490244;}}
}
B490233:L490233:{c.instructions+=2;NFSU2_TR(0x490233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490236:{NFSU2_TR(0x490236);
{goto L490240;}
}
B490238:L490238:{c.instructions+=3;NFSU2_TR(0x490238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490239:{NFSU2_TR(0x490239);
__builtin_memmove((R+4),(R+24),4);
}
B49023b:{NFSU2_TR(0x49023b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490240ull));
TAIL_STATIC(0x48fe00u,48f);
}
B490240:L490240:{c.instructions+=2;NFSU2_TR(0x490240);
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
B490242:{NFSU2_TR(0x490242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490271;}}
}
B490244:L490244:{c.instructions+=3;NFSU2_TR(0x490244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B490246:{NFSU2_TR(0x490246);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490248:{NFSU2_TR(0x490248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490203u);}goto L490203;}}
}
B49024a:L49024a:{c.instructions+=2;NFSU2_TR(0x49024a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49024b:{NFSU2_TR(0x49024b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490250ull));
TAIL_STATIC(0x50d510u,50d);
}
B490250:L490250:{c.instructions+=3;NFSU2_TR(0x490250);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B490253:{NFSU2_TR(0x490253);
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
B490255:{NFSU2_TR(0x490255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4902bf;}}
}
B490257:L490257:{c.instructions+=3;NFSU2_TR(0x490257);
__builtin_memmove((R+4),gp(0x82da80),4);
}
B49025d:{NFSU2_TR(0x49025d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49025f:{NFSU2_TR(0x49025f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4902a7;}}
}
B490261:L490261:{c.instructions+=2;NFSU2_TR(0x490261);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B490268:{NFSU2_TR(0x490268);
if(r1(R+518)){{goto L49029c;}}
}
B49026a:L49026a:{c.instructions+=3;NFSU2_TR(0x49026a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49026b:{NFSU2_TR(0x49026b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B49026d:{NFSU2_TR(0x49026d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490261u);}goto L490261;}}
}
B49026f:L49026f:{c.instructions+=1;NFSU2_TR(0x49026f);
{goto L4902a7;}
}
B490271:L490271:{c.instructions+=15;NFSU2_TR(0x490271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B490273:{NFSU2_TR(0x490273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490276:{NFSU2_TR(0x490276);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B490278:{NFSU2_TR(0x490278);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49027b:{NFSU2_TR(0x49027b);
__builtin_memmove((R+4),gp(0x830af0),4);
}
B490281:{NFSU2_TR(0x490281);
__builtin_memmove(gp(0x830af0),(R+24),4);
}
B490287:{NFSU2_TR(0x490287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49028a:{NFSU2_TR(0x49028a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49028b:{NFSU2_TR(0x49028b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x830af0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490292:{NFSU2_TR(0x490292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B490294:{NFSU2_TR(0x490294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490295:{NFSU2_TR(0x490295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490296:{NFSU2_TR(0x490296);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49029a:{NFSU2_TR(0x49029a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49029b:{NFSU2_TR(0x49029b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49029c:L49029c:{c.instructions+=3;NFSU2_TR(0x49029c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82d5c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4902a3:{NFSU2_TR(0x4902a3);
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
B4902a5:{NFSU2_TR(0x4902a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4902bf;}}
}
B4902a7:L4902a7:{c.instructions+=3;NFSU2_TR(0x4902a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4902ab:{NFSU2_TR(0x4902ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4902ad:{NFSU2_TR(0x4902ad);
if(r1(R+518)){{goto L4902bd;}}
}
B4902af:L4902af:{c.instructions+=3;NFSU2_TR(0x4902af);
__builtin_memmove((R+0),gp(0x82db08),4);
}
B4902b4:{NFSU2_TR(0x4902b4);
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
B4902b6:{NFSU2_TR(0x4902b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4902bf;}}
}
B4902b8:L4902b8:{c.instructions+=1;NFSU2_TR(0x4902b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4902bdull));
TAIL_STATIC(0x43bd50u,43b);
}
B4902bd:L4902bd:{c.instructions+=1;NFSU2_TR(0x4902bd);
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
B4902bf:L4902bf:{c.instructions+=5;NFSU2_TR(0x4902bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4902c0:{NFSU2_TR(0x4902c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4902c1:{NFSU2_TR(0x4902c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4902c2:{NFSU2_TR(0x4902c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4902c3:{NFSU2_TR(0x4902c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4902d0:L4902d0:{c.instructions+=6;NFSU2_TR(0x4902d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4902d4:{NFSU2_TR(0x4902d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4902d6:{NFSU2_TR(0x4902d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4902d7:{NFSU2_TR(0x4902d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4902db:{NFSU2_TR(0x4902db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4902dc:{NFSU2_TR(0x4902dc);
if(r1(R+518)){{goto L4902fb;}}
}
B4902de:L4902de:{c.instructions+=2;NFSU2_TR(0x4902de);
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
B4902e0:{NFSU2_TR(0x4902e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490324;}}
}
B4902e2:L4902e2:{c.instructions+=4;NFSU2_TR(0x4902e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4902e6:{NFSU2_TR(0x4902e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4902ea:{NFSU2_TR(0x4902ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4902eb:{NFSU2_TR(0x4902eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4902f0ull));
TAIL_STATIC(0x48fe00u,48f);
}
B4902f0:L4902f0:{c.instructions+=2;NFSU2_TR(0x4902f0);
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
B4902f2:{NFSU2_TR(0x4902f2);
if(r1(R+518)){{goto L490324;}}
}
B4902f4:L4902f4:{c.instructions+=4;NFSU2_TR(0x4902f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4902f5:{NFSU2_TR(0x4902f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4902f9:{NFSU2_TR(0x4902f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4902fa:{NFSU2_TR(0x4902fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4902fb:L4902fb:{c.instructions+=2;NFSU2_TR(0x4902fb);
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
B4902fd:{NFSU2_TR(0x4902fd);
if(r1(R+518)){{goto L490324;}}
}
B4902ff:L4902ff:{c.instructions+=3;NFSU2_TR(0x4902ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490303:{NFSU2_TR(0x490303);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
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
B490306:{NFSU2_TR(0x490306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490324;}}
}
B490308:L490308:{c.instructions+=3;NFSU2_TR(0x490308);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49030c:{NFSU2_TR(0x49030c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49030d:{NFSU2_TR(0x49030d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490312ull));
TAIL_STATIC(0x48fe00u,48f);
}
B490312:L490312:{c.instructions+=2;NFSU2_TR(0x490312);
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
B490314:{NFSU2_TR(0x490314);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490324;}}
}
B490316:L490316:{c.instructions+=4;NFSU2_TR(0x490316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490317:{NFSU2_TR(0x490317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490318:{NFSU2_TR(0x490318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490319:{NFSU2_TR(0x490319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49031eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B49031e:L49031e:{c.instructions+=4;NFSU2_TR(0x49031e);
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
B490321:{NFSU2_TR(0x490321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490322:{NFSU2_TR(0x490322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490323:{NFSU2_TR(0x490323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490324:L490324:{c.instructions+=4;NFSU2_TR(0x490324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490325:{NFSU2_TR(0x490325);
__builtin_memmove((R+0),(R+24),4);
}
B490327:{NFSU2_TR(0x490327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490328:{NFSU2_TR(0x490328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490330:L490330:{c.instructions+=4;NFSU2_TR(0x490330);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B490335:{NFSU2_TR(0x490335);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49033b:{NFSU2_TR(0x49033b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49033c:{NFSU2_TR(0x49033c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490341ull));
TAIL_STATIC(0x48b4e0u,48b);
}
B490341:L490341:{c.instructions+=4;NFSU2_TR(0x490341);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490343:{NFSU2_TR(0x490343);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490345:{NFSU2_TR(0x490345);
u8 U[4];
w4(U+0,u32(0x47beb4b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49034a:{NFSU2_TR(0x49034a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49034full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B49034f:L49034f:{c.instructions+=5;NFSU2_TR(0x49034f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490351:{NFSU2_TR(0x490351);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490353:{NFSU2_TR(0x490353);
u8 U[4];
w4(U+0,u32(0xd4d26c59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490358:{NFSU2_TR(0x490358);
__builtin_memmove(gp(0x82d5a8),(R+0),4);
}
B49035d:{NFSU2_TR(0x49035d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490362ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B490362:L490362:{c.instructions+=5;NFSU2_TR(0x490362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490364:{NFSU2_TR(0x490364);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490366:{NFSU2_TR(0x490366);
u8 U[4];
w4(U+0,u32(0x1744b82dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49036b:{NFSU2_TR(0x49036b);
__builtin_memmove(gp(0x82d5ac),(R+0),4);
}
B490370:{NFSU2_TR(0x490370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490375ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B490375:L490375:{c.instructions+=5;NFSU2_TR(0x490375);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490377:{NFSU2_TR(0x490377);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490379:{NFSU2_TR(0x490379);
u8 U[4];
w4(U+0,u32(0xad3c5239ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49037e:{NFSU2_TR(0x49037e);
__builtin_memmove(gp(0x82d5b0),(R+0),4);
}
B490383:{NFSU2_TR(0x490383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490388ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B490388:L490388:{c.instructions+=5;NFSU2_TR(0x490388);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49038a:{NFSU2_TR(0x49038a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49038c:{NFSU2_TR(0x49038c);
u8 U[4];
w4(U+0,u32(0xd4d80a65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490391:{NFSU2_TR(0x490391);
__builtin_memmove(gp(0x82d5b4),(R+0),4);
}
B490396:{NFSU2_TR(0x490396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49039bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B49039b:L49039b:{c.instructions+=3;NFSU2_TR(0x49039b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49039e:{NFSU2_TR(0x49039e);
__builtin_memmove(gp(0x82d5b8),(R+0),4);
}
B4903a3:{NFSU2_TR(0x4903a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4903b0:L4903b0:{c.instructions+=5;NFSU2_TR(0x4903b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4903b3:{NFSU2_TR(0x4903b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4903b4:{NFSU2_TR(0x4903b4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4903b6:{NFSU2_TR(0x4903b6);
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
B4903b8:{NFSU2_TR(0x4903b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4903bf;}}
}
B4903ba:L4903ba:{c.instructions+=2;NFSU2_TR(0x4903ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
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
B4903bd:{NFSU2_TR(0x4903bd);
if(r1(R+518)){{goto L4903c9;}}
}
B4903bf:L4903bf:{c.instructions+=4;NFSU2_TR(0x4903bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4903c1:{NFSU2_TR(0x4903c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4903c4:{NFSU2_TR(0x4903c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4903c6:{NFSU2_TR(0x4903c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4903c9:L4903c9:{c.instructions+=6;NFSU2_TR(0x4903c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4903cc:{NFSU2_TR(0x4903cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4903cf:{NFSU2_TR(0x4903cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4903d2:{NFSU2_TR(0x4903d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4903d5:{NFSU2_TR(0x4903d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4903d6:{NFSU2_TR(0x4903d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4903e0:L4903e0:{c.instructions+=8;NFSU2_TR(0x4903e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4903e1:{NFSU2_TR(0x4903e1);
__builtin_memmove((R+20),(R+16),4);
}
B4903e3:{NFSU2_TR(0x4903e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4903e4:{NFSU2_TR(0x4903e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4903e5:{NFSU2_TR(0x4903e5);
__builtin_memmove((R+24),gp(0x835860),4);
}
B4903eb:{NFSU2_TR(0x4903eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4903ec:{NFSU2_TR(0x4903ec);
w4(R+4,u32(0x835860ull));
}
B4903f1:{NFSU2_TR(0x4903f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4903f6ull));
TAIL_STATIC(0x502fd0u,502);
}
B4903f6:L4903f6:{c.instructions+=4;NFSU2_TR(0x4903f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4903f9:{NFSU2_TR(0x4903f9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4903fb:{NFSU2_TR(0x4903fb);
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
B4903fd:{NFSU2_TR(0x4903fd);
if(r1(R+518)){{goto L49040e;}}
}
B4903ff:L4903ff:{c.instructions+=1;NFSU2_TR(0x4903ff);
}
B490400:L490400:{c.instructions+=2;NFSU2_TR(0x490400);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B490403:{NFSU2_TR(0x490403);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490408;}}
}
B490405:L490405:{c.instructions+=1;NFSU2_TR(0x490405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490408:L490408:{c.instructions+=3;NFSU2_TR(0x490408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B49040a:{NFSU2_TR(0x49040a);
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
B49040c:{NFSU2_TR(0x49040c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490400u);}goto L490400;}}
}
B49040e:L49040e:{c.instructions+=3;NFSU2_TR(0x49040e);
__builtin_memmove((R+24),gp(0x8357e0),4);
}
B490414:{NFSU2_TR(0x490414);
w4(R+4,u32(0x8357e0ull));
}
B490419:{NFSU2_TR(0x490419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49041eull));
TAIL_STATIC(0x502fd0u,502);
}
B49041e:L49041e:{c.instructions+=2;NFSU2_TR(0x49041e);
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
B490420:{NFSU2_TR(0x490420);
if(r1(R+518)){{goto L490430;}}
}
B490422:L490422:{c.instructions+=2;NFSU2_TR(0x490422);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B490425:{NFSU2_TR(0x490425);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49042a;}}
}
B490427:L490427:{c.instructions+=1;NFSU2_TR(0x490427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49042a:L49042a:{c.instructions+=3;NFSU2_TR(0x49042a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B49042c:{NFSU2_TR(0x49042c);
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
B49042e:{NFSU2_TR(0x49042e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490422u);}goto L490422;}}
}
B490430:L490430:{c.instructions+=5;NFSU2_TR(0x490430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490431:{NFSU2_TR(0x490431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490432:{NFSU2_TR(0x490432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490433:{NFSU2_TR(0x490433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490434:{NFSU2_TR(0x490434);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490440:L490440:{c.instructions+=19;NFSU2_TR(0x490440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x41cull))));
}
B490446:{NFSU2_TR(0x490446);
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
B490448:{NFSU2_TR(0x490448);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49044c:{NFSU2_TR(0x49044c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49044d:{NFSU2_TR(0x49044d);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B490454:{NFSU2_TR(0x490454);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49045a:{NFSU2_TR(0x49045a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490460:{NFSU2_TR(0x490460);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490464:{NFSU2_TR(0x490464);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490468:{NFSU2_TR(0x490468);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49046c:{NFSU2_TR(0x49046c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49046d:{NFSU2_TR(0x49046d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490471:{NFSU2_TR(0x490471);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490475:{NFSU2_TR(0x490475);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49047c:{NFSU2_TR(0x49047c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49047f:{NFSU2_TR(0x49047f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490480:{NFSU2_TR(0x490480);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490484:{NFSU2_TR(0x490484);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490488:{NFSU2_TR(0x490488);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49048bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49048b:L49048b:{c.instructions+=2;NFSU2_TR(0x49048b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49048c:{NFSU2_TR(0x49048c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490491ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B490491:L490491:{c.instructions+=4;NFSU2_TR(0x490491);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B490494:{NFSU2_TR(0x490494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B490497:{NFSU2_TR(0x490497);
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
}
B49049c:{NFSU2_TR(0x49049c);
if(r1(R+512)){{goto L4904a3;}}
}
B49049e:L49049e:{c.instructions+=1;NFSU2_TR(0x49049e);
w4(R+24,u32(0x78da1cull));
}
B4904a3:L4904a3:{c.instructions+=7;NFSU2_TR(0x4904a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904a4:{NFSU2_TR(0x4904a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904a5:{NFSU2_TR(0x4904a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904a6:{NFSU2_TR(0x4904a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4904aa:{NFSU2_TR(0x4904aa);
u8 U[4];
w4(U+0,u32(0x78da0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904af:{NFSU2_TR(0x4904af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904b0:{NFSU2_TR(0x4904b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4904b5ull));
TAIL_STATIC(0x4400d0u,440);
}
B4904b5:L4904b5:{c.instructions+=9;NFSU2_TR(0x4904b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4904bc:{NFSU2_TR(0x4904bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4904c0:{NFSU2_TR(0x4904c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4904c4:{NFSU2_TR(0x4904c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4904c7:{NFSU2_TR(0x4904c7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4904ca:{NFSU2_TR(0x4904ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4904ce:{NFSU2_TR(0x4904ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4904d4:{NFSU2_TR(0x4904d4);
w4(R+28,u32(0x2000ull));
}
B4904d9:{NFSU2_TR(0x4904d9);
if(r1(R+518)){{goto L4904fe;}}
}
B4904db:L4904db:{c.instructions+=3;NFSU2_TR(0x4904db);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4904de:{NFSU2_TR(0x4904de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904df:{NFSU2_TR(0x4904df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4904e4ull));
TAIL_STATIC(0x43e910u,43e);
}
B4904e4:L4904e4:{c.instructions+=3;NFSU2_TR(0x4904e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4904e7:{NFSU2_TR(0x4904e7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4904e9:{NFSU2_TR(0x4904e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4904fe;}}
}
B4904eb:L4904eb:{c.instructions+=5;NFSU2_TR(0x4904eb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4904ed:{NFSU2_TR(0x4904ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4904f3:{NFSU2_TR(0x4904f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4904f6:{NFSU2_TR(0x4904f6);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2008ull))));
}
B4904fc:{NFSU2_TR(0x4904fc);
__builtin_memmove((R+28),(R+4),4);
}
B4904fe:L4904fe:{c.instructions+=3;NFSU2_TR(0x4904fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4904ff:{NFSU2_TR(0x4904ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490500:{NFSU2_TR(0x490500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490505ull));
TAIL_STATIC(0x440820u,440);
}
B490505:L490505:{c.instructions+=7;NFSU2_TR(0x490505);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B490509:{NFSU2_TR(0x490509);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49050f:{NFSU2_TR(0x49050f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B490512:{NFSU2_TR(0x490512);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B490515:{NFSU2_TR(0x490515);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+4)));
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B490517:{NFSU2_TR(0x490517);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49051b:{NFSU2_TR(0x49051b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L490542;}}
}
B49051d:L49051d:{c.instructions+=5;NFSU2_TR(0x49051d);
__builtin_memmove((R+4),(R+20),4);
}
B49051f:{NFSU2_TR(0x49051f);
__builtin_memmove((R+28),(R+0),4);
}
B490521:{NFSU2_TR(0x490521);
__builtin_memmove((R+0),(R+4),4);
}
B490523:{NFSU2_TR(0x490523);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B490526:{NFSU2_TR(0x490526);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B490528:L490528:{c.instructions+=1;NFSU2_TR(0x490528);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L49052a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490528u);}goto L490528;}
}
B49052a:L49052a:{c.instructions+=2;NFSU2_TR(0x49052a);
__builtin_memmove((R+4),(R+0),4);
}
B49052c:{NFSU2_TR(0x49052c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B49052f:L49052f:{c.instructions+=1;NFSU2_TR(0x49052f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L490531;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49052fu);}goto L49052f;}
}
B490531:L490531:{c.instructions+=4;NFSU2_TR(0x490531);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490535:{NFSU2_TR(0x490535);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B490539:{NFSU2_TR(0x490539);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490540:{NFSU2_TR(0x490540);
__builtin_memmove((R+28),(R+4),4);
}
B490542:L490542:{c.instructions+=2;NFSU2_TR(0x490542);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490543:{NFSU2_TR(0x490543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490548ull));
TAIL_STATIC(0x440540u,440);
}
B490548:L490548:{c.instructions+=6;NFSU2_TR(0x490548);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49054c:{NFSU2_TR(0x49054c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490552:{NFSU2_TR(0x490552);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490555:{NFSU2_TR(0x490555);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B490558:{NFSU2_TR(0x490558);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49055a:{NFSU2_TR(0x49055a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490579;}}
}
B49055c:L49055c:{c.instructions+=10;NFSU2_TR(0x49055c);
u8 U[8];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490563:{NFSU2_TR(0x490563);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490564:{NFSU2_TR(0x490564);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490565:{NFSU2_TR(0x490565);
u8 U[4];
w4(U+0,u32(0x48d630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49056a:{NFSU2_TR(0x49056a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49056b:{NFSU2_TR(0x49056b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49056c:{NFSU2_TR(0x49056c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49056f:{NFSU2_TR(0x49056f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490570:{NFSU2_TR(0x490570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490571:{NFSU2_TR(0x490571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490576ull));
TAIL_STATIC(0x57b530u,57b);
}
B490576:L490576:{c.instructions+=1;NFSU2_TR(0x490576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B490579:L490579:{c.instructions+=5;NFSU2_TR(0x490579);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49057c:{NFSU2_TR(0x49057c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49057e:{NFSU2_TR(0x49057e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49057f:{NFSU2_TR(0x49057f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490580:{NFSU2_TR(0x490580);
if(r1(R+518)){{goto L490595;}}
}
B490582:L490582:{c.instructions+=5;NFSU2_TR(0x490582);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490589:{NFSU2_TR(0x490589);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49058a:{NFSU2_TR(0x49058a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49058c:{NFSU2_TR(0x49058c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49058d:{NFSU2_TR(0x49058d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490592ull));
TAIL_STATIC(0x48d630u,48d);
}
B490592:L490592:{c.instructions+=1;NFSU2_TR(0x490592);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B490595:L490595:{c.instructions+=4;NFSU2_TR(0x490595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490596:{NFSU2_TR(0x490596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490597:{NFSU2_TR(0x490597);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x41cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x41cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x41cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49059d:{NFSU2_TR(0x49059d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4905a0:L4905a0:{c.instructions+=12;NFSU2_TR(0x4905a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4905a3:{NFSU2_TR(0x4905a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905a4:{NFSU2_TR(0x4905a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4905a7:{NFSU2_TR(0x4905a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4905ab:{NFSU2_TR(0x4905ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905ac:{NFSU2_TR(0x4905ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4905af:{NFSU2_TR(0x4905af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4905b1:{NFSU2_TR(0x4905b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905b2:{NFSU2_TR(0x4905b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4905b5:{NFSU2_TR(0x4905b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4905b9:{NFSU2_TR(0x4905b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4905bd:{NFSU2_TR(0x4905bd);
if(r1(R+518)){{goto L490647;}}
}
B4905c3:L4905c3:{c.instructions+=2;NFSU2_TR(0x4905c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4905c5:{NFSU2_TR(0x4905c5);
if(r1(R+518)){{goto L490647;}}
}
B4905cb:L4905cb:{c.instructions+=2;NFSU2_TR(0x4905cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905cc:{NFSU2_TR(0x4905cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4905f0;}}
}
B4905ce:L4905ce:{c.instructions+=2;NFSU2_TR(0x4905ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B4905d1:{NFSU2_TR(0x4905d1);
__builtin_memmove((R+12),(R+28),4);
}
B4905d3:L4905d3:{c.instructions+=2;NFSU2_TR(0x4905d3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4905d6:{NFSU2_TR(0x4905d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4905ea;}}
}
B4905d8:L4905d8:{c.instructions+=5;NFSU2_TR(0x4905d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4905db:{NFSU2_TR(0x4905db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905dd:{NFSU2_TR(0x4905dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905df:{NFSU2_TR(0x4905df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4905e0:{NFSU2_TR(0x4905e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4905e5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B4905e5:L4905e5:{c.instructions+=2;NFSU2_TR(0x4905e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4905e8:{NFSU2_TR(0x4905e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4905ea:L4905ea:{c.instructions+=3;NFSU2_TR(0x4905ea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B4905ed:{NFSU2_TR(0x4905ed);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4905ee:{NFSU2_TR(0x4905ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4905d3u);}goto L4905d3;}}
}
B4905f0:L4905f0:{c.instructions+=4;NFSU2_TR(0x4905f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4905f4:{NFSU2_TR(0x4905f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4905f6:{NFSU2_TR(0x4905f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4905f8:{NFSU2_TR(0x4905f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L490646;}}
}
B4905fa:L4905fa:{c.instructions+=1;NFSU2_TR(0x4905fa);
__builtin_memmove((R+12),(R+12),4);
}
B490600:L490600:{c.instructions+=7;NFSU2_TR(0x490600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490603:{NFSU2_TR(0x490603);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B490606:{NFSU2_TR(0x490606);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49060a:{NFSU2_TR(0x49060a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B49060d:{NFSU2_TR(0x49060d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49060f:{NFSU2_TR(0x49060f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490611:{NFSU2_TR(0x490611);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49063d;}}
}
B490613:L490613:{c.instructions+=2;NFSU2_TR(0x490613);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B490617:{NFSU2_TR(0x490617);
if(r1(R+518)){{goto L49061d;}}
}
B490619:L490619:{c.instructions+=2;NFSU2_TR(0x490619);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B49061b:{NFSU2_TR(0x49061b);
if(r1(R+518)){{goto L490627;}}
}
B49061d:L49061d:{c.instructions+=4;NFSU2_TR(0x49061d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B490620:{NFSU2_TR(0x490620);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B490621:{NFSU2_TR(0x490621);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B490623:{NFSU2_TR(0x490623);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490613u);}goto L490613;}}
}
B490625:L490625:{c.instructions+=1;NFSU2_TR(0x490625);
{goto L49063d;}
}
B490627:L490627:{c.instructions+=7;NFSU2_TR(0x490627);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49062a:{NFSU2_TR(0x49062a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49062d:{NFSU2_TR(0x49062d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490630:{NFSU2_TR(0x490630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490633:{NFSU2_TR(0x490633);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B490637:{NFSU2_TR(0x490637);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49063a:{NFSU2_TR(0x49063a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49063d:L49063d:{c.instructions+=4;NFSU2_TR(0x49063d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490641:{NFSU2_TR(0x490641);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B490642:{NFSU2_TR(0x490642);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B490644:{NFSU2_TR(0x490644);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490600u);}goto L490600;}}
}
B490646:L490646:{c.instructions+=1;NFSU2_TR(0x490646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490647:L490647:{c.instructions+=5;NFSU2_TR(0x490647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490648:{NFSU2_TR(0x490648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490649:{NFSU2_TR(0x490649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49064a:{NFSU2_TR(0x49064a);
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
B49064d:{NFSU2_TR(0x49064d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490650:L490650:{c.instructions+=5;NFSU2_TR(0x490650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490651:{NFSU2_TR(0x490651);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B490656:{NFSU2_TR(0x490656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490658:{NFSU2_TR(0x490658);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490659:{NFSU2_TR(0x490659);
if(r1(R+518)){{goto L4906a5;}}
}
B49065b:L49065b:{c.instructions+=3;NFSU2_TR(0x49065b);
__builtin_memmove((R+4),gp(0x832da4),4);
}
B490661:{NFSU2_TR(0x490661);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x832da4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x832da4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x832da4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B490667:{NFSU2_TR(0x490667);
if(r1(R+518)){{goto L490797;}}
}
B49066d:L49066d:{c.instructions+=1;NFSU2_TR(0x49066d);
__builtin_memmove((R+4),(R+4),4);
}
B490670:L490670:{c.instructions+=15;NFSU2_TR(0x490670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B490672:{NFSU2_TR(0x490672);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B490675:{NFSU2_TR(0x490675);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B490677:{NFSU2_TR(0x490677);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49067a:{NFSU2_TR(0x49067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49067d:{NFSU2_TR(0x49067d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490680:{NFSU2_TR(0x490680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B490686:{NFSU2_TR(0x490686);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B49068b:{NFSU2_TR(0x49068b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B49068d:{NFSU2_TR(0x49068d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490690:{NFSU2_TR(0x490690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B490692:{NFSU2_TR(0x490692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B490694:{NFSU2_TR(0x490694);
__builtin_memmove((R+4),gp(0x832da4),4);
}
B49069a:{NFSU2_TR(0x49069a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x832da4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x832da4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x832da4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4906a0:{NFSU2_TR(0x4906a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490670u);}goto L490670;}}
}
B4906a2:L4906a2:{c.instructions+=3;NFSU2_TR(0x4906a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4906a3:{NFSU2_TR(0x4906a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4906a4:{NFSU2_TR(0x4906a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4906a5:L4906a5:{c.instructions+=2;NFSU2_TR(0x4906a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4906a6:{NFSU2_TR(0x4906a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4906abull));
TAIL_STATIC(0x43bdf0u,43b);
}
B4906ab:L4906ab:{c.instructions+=4;NFSU2_TR(0x4906ab);
__builtin_memmove((R+24),gp(0x82dbc0),4);
}
B4906b1:{NFSU2_TR(0x4906b1);
w4(R+4,u32(0x82dbc0ull));
}
B4906b6:{NFSU2_TR(0x4906b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4906ba:{NFSU2_TR(0x4906ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4906bfull));
TAIL_STATIC(0x502fd0u,502);
}
B4906bf:L4906bf:{c.instructions+=3;NFSU2_TR(0x4906bf);
__builtin_memmove((R+20),(R+0),4);
}
B4906c1:{NFSU2_TR(0x4906c1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4906c3:{NFSU2_TR(0x4906c3);
if(r1(R+518)){{goto L490737;}}
}
B4906c5:L4906c5:{c.instructions+=4;NFSU2_TR(0x4906c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4906c6:{NFSU2_TR(0x4906c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4906ca:{NFSU2_TR(0x4906ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4906cb:{NFSU2_TR(0x4906cb);
{goto L4906d0;}
}
B4906d0:L4906d0:{c.instructions+=4;NFSU2_TR(0x4906d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4906d3:{NFSU2_TR(0x4906d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4906d5:{NFSU2_TR(0x4906d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4906d7:{NFSU2_TR(0x4906d7);
if(r1(R+518)){{goto L49072f;}}
}
B4906d9:L4906d9:{c.instructions+=3;NFSU2_TR(0x4906d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4906da:{NFSU2_TR(0x4906da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4906db:{NFSU2_TR(0x4906db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4906e0ull));
TAIL_STATIC(0x48df90u,48d);
}
B4906e0:L4906e0:{c.instructions+=4;NFSU2_TR(0x4906e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4906e3:{NFSU2_TR(0x4906e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4906e6:{NFSU2_TR(0x4906e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4906e8:{NFSU2_TR(0x4906e8);
if(r1(R+518)){{goto L49072f;}}
}
B4906ea:L4906ea:{c.instructions+=2;NFSU2_TR(0x4906ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4906ed:{NFSU2_TR(0x4906ed);
if(r1(R+518)){{goto L49072f;}}
}
B4906ef:L4906ef:{c.instructions+=6;NFSU2_TR(0x4906ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4906f1:{NFSU2_TR(0x4906f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4906f3:{NFSU2_TR(0x4906f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4906f6:{NFSU2_TR(0x4906f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4906f8:{NFSU2_TR(0x4906f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4906fb:{NFSU2_TR(0x4906fb);
if(r1(R+518)){{goto L490715;}}
}
B4906fd:L4906fd:{c.instructions+=7;NFSU2_TR(0x4906fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490703:{NFSU2_TR(0x490703);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B490709:{NFSU2_TR(0x490709);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49070b:{NFSU2_TR(0x49070b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49070e:{NFSU2_TR(0x49070e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490711:{NFSU2_TR(0x490711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B490713:{NFSU2_TR(0x490713);
{goto L49072c;}
}
B490715:L490715:{c.instructions+=5;NFSU2_TR(0x490715);
__builtin_memmove((R+4),gp(0x82dbc4),4);
}
B49071b:{NFSU2_TR(0x49071b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B49071d:{NFSU2_TR(0x49071d);
__builtin_memmove(gp(0x82dbc4),(R+24),4);
}
B490723:{NFSU2_TR(0x490723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490726:{NFSU2_TR(0x490726);
u8 U[4];
w4(U+0,u32(0x82dbc0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49072c:L49072c:{c.instructions+=1;NFSU2_TR(0x49072c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49072f:L49072f:{c.instructions+=3;NFSU2_TR(0x49072f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490731:{NFSU2_TR(0x490731);
__builtin_memmove((R+24),(R+28),4);
}
B490733:{NFSU2_TR(0x490733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4906d0u);}goto L4906d0;}}
}
B490735:L490735:{c.instructions+=2;NFSU2_TR(0x490735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490736:{NFSU2_TR(0x490736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490737:L490737:{c.instructions+=1;NFSU2_TR(0x490737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49073cull));
TAIL_STATIC(0x43bdf0u,43b);
}
B49073c:L49073c:{c.instructions+=4;NFSU2_TR(0x49073c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49073d:{NFSU2_TR(0x49073d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490741:{NFSU2_TR(0x490741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490742:{NFSU2_TR(0x490742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490747ull));
TAIL_STATIC(0x43be20u,43b);
}
B490747:L490747:{c.instructions+=7;NFSU2_TR(0x490747);
{u32 ea_=u32(u32(8575628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49074d:{NFSU2_TR(0x49074d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B49074f:{NFSU2_TR(0x49074f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B490752:{NFSU2_TR(0x490752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490753:{NFSU2_TR(0x490753);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B490755:{NFSU2_TR(0x490755);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B490758:{NFSU2_TR(0x490758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490762;}}
}
B49075a:L49075a:{c.instructions+=2;NFSU2_TR(0x49075a);
{u32 ea_=u32(u32(8575628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490760:{NFSU2_TR(0x490760);
{goto L490764;}
}
B490762:L490762:{c.instructions+=1;NFSU2_TR(0x490762);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B490764:L490764:{c.instructions+=11;NFSU2_TR(0x490764);
__builtin_memmove((R+0),gp(0x82daa0),4);
}
B490769:{NFSU2_TR(0x490769);
{u32 ea_=u32(u32(8575628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49076f:{NFSU2_TR(0x49076f);
{u32 ea_=u32(u32(8575636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490775:{NFSU2_TR(0x490775);
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
B490776:{NFSU2_TR(0x490776);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B490778:{NFSU2_TR(0x490778);
__builtin_memmove(gp(0x82daa0),(R+0),4);
}
B49077d:{NFSU2_TR(0x49077d);
{u32 ea_=u32(u32(8575636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490783:{NFSU2_TR(0x490783);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490785:{NFSU2_TR(0x490785);
{u32 ea_=u32(u32(8575640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49078b:{NFSU2_TR(0x49078b);
{u32 ea_=u32(u32(8575636u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B490791:{NFSU2_TR(0x490791);
{u32 ea_=u32(u32(8575644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490797:L490797:{c.instructions+=3;NFSU2_TR(0x490797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490798:{NFSU2_TR(0x490798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B490799:{NFSU2_TR(0x490799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4907a0:L4907a0:{c.instructions+=5;NFSU2_TR(0x4907a0);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B4907a5:{NFSU2_TR(0x4907a5);
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
B4907a7:{NFSU2_TR(0x4907a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907a8:{NFSU2_TR(0x4907a8);
__builtin_memmove((R+12),(R+4),4);
}
B4907aa:{NFSU2_TR(0x4907aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4907db;}}
}
B4907ac:L4907ac:{c.instructions+=5;NFSU2_TR(0x4907ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4907af:{NFSU2_TR(0x4907af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907b0:{NFSU2_TR(0x4907b0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4907b2:{NFSU2_TR(0x4907b2);
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
B4907b4:{NFSU2_TR(0x4907b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4907da;}}
}
B4907b6:L4907b6:{c.instructions+=1;NFSU2_TR(0x4907b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907b7:L4907b7:{c.instructions+=7;NFSU2_TR(0x4907b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4907ba:{NFSU2_TR(0x4907ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4907bd:{NFSU2_TR(0x4907bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4907c0:{NFSU2_TR(0x4907c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907c2:{NFSU2_TR(0x4907c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907c4:{NFSU2_TR(0x4907c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907c5:{NFSU2_TR(0x4907c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4907caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B4907ca:L4907ca:{c.instructions+=6;NFSU2_TR(0x4907ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4907cd:{NFSU2_TR(0x4907cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4907d1:{NFSU2_TR(0x4907d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4907d4:{NFSU2_TR(0x4907d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4907d5:{NFSU2_TR(0x4907d5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4907d7:{NFSU2_TR(0x4907d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4907b7u);}goto L4907b7;}}
}
B4907d9:L4907d9:{c.instructions+=1;NFSU2_TR(0x4907d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4907da:L4907da:{c.instructions+=1;NFSU2_TR(0x4907da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4907db:L4907db:{c.instructions+=2;NFSU2_TR(0x4907db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4907dc:{NFSU2_TR(0x4907dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4907e0:L4907e0:{c.instructions+=10;NFSU2_TR(0x4907e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907e1:{NFSU2_TR(0x4907e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907e2:{NFSU2_TR(0x4907e2);
__builtin_memmove((R+12),(R+4),4);
}
B4907e4:{NFSU2_TR(0x4907e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4907e7:{NFSU2_TR(0x4907e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907e8:{NFSU2_TR(0x4907e8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4907ea:{NFSU2_TR(0x4907ea);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4907ec:{NFSU2_TR(0x4907ec);
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
B4907ee:{NFSU2_TR(0x4907ee);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4907f2:{NFSU2_TR(0x4907f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L490842;}}
}
B4907f4:L4907f4:{c.instructions+=2;NFSU2_TR(0x4907f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907f5:{NFSU2_TR(0x4907f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4907f6:L4907f6:{c.instructions+=5;NFSU2_TR(0x4907f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4907f9:{NFSU2_TR(0x4907f9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4907fd:{NFSU2_TR(0x4907fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B490800:{NFSU2_TR(0x490800);
u8 U[8];
__builtin_memmove((U+0),gp(0x82db08),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490806:{NFSU2_TR(0x490806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490826;}}
}
B490808:L490808:{c.instructions+=2;NFSU2_TR(0x490808);
u8 U[8];
__builtin_memmove((U+0),gp(0x82db08),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49080e:{NFSU2_TR(0x49080e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490826;}}
}
B490810:L490810:{c.instructions+=4;NFSU2_TR(0x490810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B490812:{NFSU2_TR(0x490812);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490813:{NFSU2_TR(0x490813);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490817:{NFSU2_TR(0x490817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49081cull));
TAIL_STATIC(0x48fe00u,48f);
}
B49081c:L49081c:{c.instructions+=2;NFSU2_TR(0x49081c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49081e:{NFSU2_TR(0x49081e);
if(r1(R+518)){{goto L490826;}}
}
B490820:L490820:{c.instructions+=2;NFSU2_TR(0x490820);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B490824:{NFSU2_TR(0x490824);
__builtin_memmove((R+28),(R+0),4);
}
B490826:L490826:{c.instructions+=2;NFSU2_TR(0x490826);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B490829:{NFSU2_TR(0x490829);
if(r1(R+518)){{goto L490833;}}
}
B49082b:L49082b:{c.instructions+=2;NFSU2_TR(0x49082b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49082e:{NFSU2_TR(0x49082e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B490833:L490833:{c.instructions+=4;NFSU2_TR(0x490833);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B490837:{NFSU2_TR(0x490837);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B490838:{NFSU2_TR(0x490838);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49083a:{NFSU2_TR(0x49083a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4907f6u);}goto L4907f6;}}
}
B49083c:L49083c:{c.instructions+=3;NFSU2_TR(0x49083c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B490840:{NFSU2_TR(0x490840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490841:{NFSU2_TR(0x490841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490842:L490842:{c.instructions+=4;NFSU2_TR(0x490842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490843:{NFSU2_TR(0x490843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490844:{NFSU2_TR(0x490844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B490845:{NFSU2_TR(0x490845);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490850:L490850:{c.instructions+=9;NFSU2_TR(0x490850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B490853:{NFSU2_TR(0x490853);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B490856:{NFSU2_TR(0x490856);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490857:{NFSU2_TR(0x490857);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B490859:{NFSU2_TR(0x490859);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49085b:{NFSU2_TR(0x49085b);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49085d:{NFSU2_TR(0x49085d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490861:{NFSU2_TR(0x490861);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B490865:{NFSU2_TR(0x490865);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4908d7;}}
}
B490867:L490867:{c.instructions+=4;NFSU2_TR(0x490867);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490868:{NFSU2_TR(0x490868);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490869:{NFSU2_TR(0x490869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49086a:{NFSU2_TR(0x49086a);
__builtin_memmove((R+12),(R+12),4);
}
B490870:L490870:{c.instructions+=8;NFSU2_TR(0x490870);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490873:{NFSU2_TR(0x490873);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B490877:{NFSU2_TR(0x490877);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49087a:{NFSU2_TR(0x49087a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B49087d:{NFSU2_TR(0x49087d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B490880:{NFSU2_TR(0x490880);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490884:{NFSU2_TR(0x490884);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490886:{NFSU2_TR(0x490886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4908ba;}}
}
B490888:L490888:{c.instructions+=3;NFSU2_TR(0x490888);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490889:{NFSU2_TR(0x490889);
__builtin_memmove((R+4),(R+0),4);
}
B49088b:{NFSU2_TR(0x49088b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490890ull));
TAIL_STATIC(0x48fe00u,48f);
}
B490890:L490890:{c.instructions+=2;NFSU2_TR(0x490890);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490892:{NFSU2_TR(0x490892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4908b6;}}
}
B490894:L490894:{c.instructions+=4;NFSU2_TR(0x490894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490895:{NFSU2_TR(0x490895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490896:{NFSU2_TR(0x490896);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490897:{NFSU2_TR(0x490897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49089cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B49089c:L49089c:{c.instructions+=3;NFSU2_TR(0x49089c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49089f:{NFSU2_TR(0x49089f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4908a1:{NFSU2_TR(0x4908a1);
if(r1(R+518)){{goto L4908a7;}}
}
B4908a3:L4908a3:{c.instructions+=2;NFSU2_TR(0x4908a3);
__builtin_memmove((R+28),(R+0),4);
}
B4908a5:{NFSU2_TR(0x4908a5);
{goto L4908b6;}
}
B4908a7:L4908a7:{c.instructions+=3;NFSU2_TR(0x4908a7);
__builtin_memmove((R+28),gp(0x82db08),4);
}
B4908ad:{NFSU2_TR(0x4908ad);
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
B4908af:{NFSU2_TR(0x4908af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4908b6;}}
}
B4908b1:L4908b1:{c.instructions+=1;NFSU2_TR(0x4908b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4908b6ull));
TAIL_STATIC(0x43bd50u,43b);
}
B4908b6:L4908b6:{c.instructions+=1;NFSU2_TR(0x4908b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4908ba:L4908ba:{c.instructions+=2;NFSU2_TR(0x4908ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4908bd:{NFSU2_TR(0x4908bd);
if(r1(R+518)){{goto L4908c7;}}
}
B4908bf:L4908bf:{c.instructions+=2;NFSU2_TR(0x4908bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4908c2:{NFSU2_TR(0x4908c2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4908c7:L4908c7:{c.instructions+=4;NFSU2_TR(0x4908c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4908cb:{NFSU2_TR(0x4908cb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4908cc:{NFSU2_TR(0x4908cc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4908ce:{NFSU2_TR(0x4908ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490870u);}goto L490870;}}
}
B4908d0:L4908d0:{c.instructions+=4;NFSU2_TR(0x4908d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4908d4:{NFSU2_TR(0x4908d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4908d5:{NFSU2_TR(0x4908d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4908d6:{NFSU2_TR(0x4908d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4908d7:L4908d7:{c.instructions+=3;NFSU2_TR(0x4908d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4908d8:{NFSU2_TR(0x4908d8);
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
B4908db:{NFSU2_TR(0x4908db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4908e0:L4908e0:{c.instructions+=4;NFSU2_TR(0x4908e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4908e4:{NFSU2_TR(0x4908e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908e6:{NFSU2_TR(0x4908e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908e7:{NFSU2_TR(0x4908e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4908ecull));
TAIL_STATIC(0x48df90u,48d);
}
B4908ec:L4908ec:{c.instructions+=2;NFSU2_TR(0x4908ec);
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
B4908ef:{NFSU2_TR(0x4908ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4908f0:L4908f0:{c.instructions+=2;NFSU2_TR(0x4908f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908f1:{NFSU2_TR(0x4908f1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4908f3:L4908f3:{c.instructions+=5;NFSU2_TR(0x4908f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f39ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4908f9:{NFSU2_TR(0x4908f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908fb:{NFSU2_TR(0x4908fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908fd:{NFSU2_TR(0x4908fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4908fe:{NFSU2_TR(0x4908fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490903ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4901d0u);}goto L4901d0;}
}
B490903:L490903:{c.instructions+=5;NFSU2_TR(0x490903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82cc10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490909:{NFSU2_TR(0x490909);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B49090c:{NFSU2_TR(0x49090c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49090f:{NFSU2_TR(0x49090f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B490912:{NFSU2_TR(0x490912);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4908f3u);}goto L4908f3;}}
}
B490914:L490914:{c.instructions+=2;NFSU2_TR(0x490914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490915:{NFSU2_TR(0x490915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490920:L490920:{c.instructions+=15;NFSU2_TR(0x490920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490921:{NFSU2_TR(0x490921);
__builtin_memmove((R+20),(R+16),4);
}
B490923:{NFSU2_TR(0x490923);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B490926:{NFSU2_TR(0x490926);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490928:{NFSU2_TR(0x490928);
u8 U[4];
w4(U+0,u32(0x7727abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49092d:{NFSU2_TR(0x49092d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490933:{NFSU2_TR(0x490933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490934:{NFSU2_TR(0x490934);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49093b:{NFSU2_TR(0x49093b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x608ull))));
}
B490941:{NFSU2_TR(0x490941);
__builtin_memmove((R+0),gp(0x7f3d40),4);
}
B490946:{NFSU2_TR(0x490946);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490948:{NFSU2_TR(0x490948);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490949:{NFSU2_TR(0x490949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49094a:{NFSU2_TR(0x49094a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49094b:{NFSU2_TR(0x49094b);
if(r1(R+518)){{goto L490d7f;}}
}
B490951:L490951:{c.instructions+=2;NFSU2_TR(0x490951);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B490955:{NFSU2_TR(0x490955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49097f;}}
}
B490957:L490957:{c.instructions+=9;NFSU2_TR(0x490957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49095a:{NFSU2_TR(0x49095a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49095d:{NFSU2_TR(0x49095d);
{u32 ea_=u32(r4(R+4)+u32(20636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490963:{NFSU2_TR(0x490963);
{u32 ea_=u32(u32(8337832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490969:{NFSU2_TR(0x490969);
{u32 ea_=u32(u32(8337828u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49096f:{NFSU2_TR(0x49096f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B490971:{NFSU2_TR(0x490971);
{u32 ea_=u32(u32(8337828u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B490977:{NFSU2_TR(0x490977);
{u32 ea_=u32(u32(8337824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49097d:{NFSU2_TR(0x49097d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B49097f:L49097f:{c.instructions+=5;NFSU2_TR(0x49097f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B490982:{NFSU2_TR(0x490982);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490984:{NFSU2_TR(0x490984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490987:{NFSU2_TR(0x490987);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49098a:{NFSU2_TR(0x49098a);
if(r1(R+518)){{goto L490d7f;}}
}
B490990:L490990:{c.instructions+=3;NFSU2_TR(0x490990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B490993:{NFSU2_TR(0x490993);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490995:{NFSU2_TR(0x490995);
if(r1(R+518)){{goto L490d7f;}}
}
B49099b:L49099b:{c.instructions+=2;NFSU2_TR(0x49099b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49099d:{NFSU2_TR(0x49099d);
if(r1(R+518)){{goto L490d7f;}}
}
B4909a3:L4909a3:{c.instructions+=9;NFSU2_TR(0x4909a3);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4909a6:{NFSU2_TR(0x4909a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4909aa:{NFSU2_TR(0x4909aa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4909b0:{NFSU2_TR(0x4909b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4909b4:{NFSU2_TR(0x4909b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4909b8:{NFSU2_TR(0x4909b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4909bf:{NFSU2_TR(0x4909bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4909c1:{NFSU2_TR(0x4909c1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4909c4:{NFSU2_TR(0x4909c4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4909d1;}}
}
B4909c6:L4909c6:{c.instructions+=3;NFSU2_TR(0x4909c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4909c9:{NFSU2_TR(0x4909c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4909cc:{NFSU2_TR(0x4909cc);
{goto L490aee;}
}
B4909d1:L4909d1:{c.instructions+=2;NFSU2_TR(0x4909d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4479c000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4909d8:{NFSU2_TR(0x4909d8);
if(r1(R+518)){{goto L4909e4;}}
}
B4909da:L4909da:{c.instructions+=2;NFSU2_TR(0x4909da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4909de:{NFSU2_TR(0x4909de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490aee;}}
}
B4909e4:L4909e4:{c.instructions+=2;NFSU2_TR(0x4909e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4909eb:{NFSU2_TR(0x4909eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4909f0ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B4909f0:L4909f0:{c.instructions+=43;NFSU2_TR(0x4909f0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4909f3:{NFSU2_TR(0x4909f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4909f6:{NFSU2_TR(0x4909f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4909f9:{NFSU2_TR(0x4909f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4909fd:{NFSU2_TR(0x4909fd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a01:{NFSU2_TR(0x490a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490a05:{NFSU2_TR(0x490a05);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a08:{NFSU2_TR(0x490a08);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490a0c:{NFSU2_TR(0x490a0c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B490a0e:{NFSU2_TR(0x490a0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490a0f:{NFSU2_TR(0x490a0f);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a12:{NFSU2_TR(0x490a12);
u8 U[4];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490a19:{NFSU2_TR(0x490a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x620ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490a24:{NFSU2_TR(0x490a24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490a26:{NFSU2_TR(0x490a26);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a2a:{NFSU2_TR(0x490a2a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a2c:{NFSU2_TR(0x490a2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490a2e:{NFSU2_TR(0x490a2e);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B490a31:{NFSU2_TR(0x490a31);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a35:{NFSU2_TR(0x490a35);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a38:{NFSU2_TR(0x490a38);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a3c:{NFSU2_TR(0x490a3c);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a3f:{NFSU2_TR(0x490a3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490a41:{NFSU2_TR(0x490a41);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B490a43:{NFSU2_TR(0x490a43);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a46:{NFSU2_TR(0x490a46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490a48:{NFSU2_TR(0x490a48);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B490a4b:{NFSU2_TR(0x490a4b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a4f:{NFSU2_TR(0x490a4f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a52:{NFSU2_TR(0x490a52);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490a56:{NFSU2_TR(0x490a56);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a59:{NFSU2_TR(0x490a59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490a5b:{NFSU2_TR(0x490a5b);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B490a5d:{NFSU2_TR(0x490a5d);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490a60:{NFSU2_TR(0x490a60);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B490a62:{NFSU2_TR(0x490a62);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B490a64:{NFSU2_TR(0x490a64);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B490a67:{NFSU2_TR(0x490a67);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490a6e:{NFSU2_TR(0x490a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490a75:{NFSU2_TR(0x490a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490a79:{NFSU2_TR(0x490a79);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490a7d:{NFSU2_TR(0x490a7d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490a81:{NFSU2_TR(0x490a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490a86ull));
TAIL_STATIC(0x486ed0u,486);
}
B490a86:L490a86:{c.instructions+=2;NFSU2_TR(0x490a86);
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
B490a88:{NFSU2_TR(0x490a88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490a93;}}
}
B490a8a:L490a8a:{c.instructions+=2;NFSU2_TR(0x490a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w4(U+4,u32(0x461c3c00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490a91:{NFSU2_TR(0x490a91);
{goto L490ad7;}
}
B490a93:L490a93:{c.instructions+=7;NFSU2_TR(0x490a93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490a95:{NFSU2_TR(0x490a95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490a97:{NFSU2_TR(0x490a97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490a99:{NFSU2_TR(0x490a99);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490a9d:{NFSU2_TR(0x490a9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490a9e:{NFSU2_TR(0x490a9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490aa5:{NFSU2_TR(0x490aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490aaaull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B490aaa:L490aaa:{c.instructions+=8;NFSU2_TR(0x490aaa);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B490aad:{NFSU2_TR(0x490aad);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B490aaf:{NFSU2_TR(0x490aaf);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B490ab2:{NFSU2_TR(0x490ab2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B490ab4:{NFSU2_TR(0x490ab4);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B490aba:{NFSU2_TR(0x490aba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B490abc:{NFSU2_TR(0x490abc);
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
B490abf:{NFSU2_TR(0x490abf);
if(r1(R+514)){{goto L490aca;}}
}
B490ac1:L490ac1:{c.instructions+=2;NFSU2_TR(0x490ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w4(U+4,u32(0x461c3c00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490ac8:{NFSU2_TR(0x490ac8);
{goto L490ad5;}
}
B490aca:L490aca:{c.instructions+=4;NFSU2_TR(0x490aca);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490ace:{NFSU2_TR(0x490ace);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B490ad0:{NFSU2_TR(0x490ad0);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B490ad2:{NFSU2_TR(0x490ad2);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490ad5:L490ad5:{c.instructions+=1;NFSU2_TR(0x490ad5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490ad7:L490ad7:{c.instructions+=3;NFSU2_TR(0x490ad7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490ade:{NFSU2_TR(0x490ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x61cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B490ae9:{NFSU2_TR(0x490ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490aeeull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B490aee:L490aee:{c.instructions+=10;NFSU2_TR(0x490aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490af1:{NFSU2_TR(0x490af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490af4:{NFSU2_TR(0x490af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490af7:{NFSU2_TR(0x490af7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B490afa:{NFSU2_TR(0x490afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490afe:{NFSU2_TR(0x490afe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490aff:{NFSU2_TR(0x490aff);
u8 U[4];
w4(U+0,u32(u32(u32(0x27cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490b06:{NFSU2_TR(0x490b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490b0a:{NFSU2_TR(0x490b0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490b0e:{NFSU2_TR(0x490b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490b13ull));
TAIL_STATIC(0x487270u,487);
}
B490b13:L490b13:{c.instructions+=9;NFSU2_TR(0x490b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490b16:{NFSU2_TR(0x490b16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490b19:{NFSU2_TR(0x490b19);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b21:{NFSU2_TR(0x490b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b29:{NFSU2_TR(0x490b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b31:{NFSU2_TR(0x490b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b39:{NFSU2_TR(0x490b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b41:{NFSU2_TR(0x490b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490b49:{NFSU2_TR(0x490b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490cb6;}}
}
B490b4f:L490b4f:{c.instructions+=4;NFSU2_TR(0x490b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B490b52:{NFSU2_TR(0x490b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490b55:{NFSU2_TR(0x490b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4479c000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490b5a:{NFSU2_TR(0x490b5a);
if(r1(R+518)){{goto L490d7f;}}
}
B490b60:L490b60:{c.instructions+=2;NFSU2_TR(0x490b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x461c3c00ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490b65:{NFSU2_TR(0x490b65);
if(r1(R+518)){{goto L490d7f;}}
}
B490b6b:L490b6b:{c.instructions+=14;NFSU2_TR(0x490b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490b6f:{NFSU2_TR(0x490b6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490b73:{NFSU2_TR(0x490b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B490b76:{NFSU2_TR(0x490b76);
__builtin_memmove((R+8),(R+16),4);
}
B490b78:{NFSU2_TR(0x490b78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B490b7a:{NFSU2_TR(0x490b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490b7e:{NFSU2_TR(0x490b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490b81:{NFSU2_TR(0x490b81);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490b85:{NFSU2_TR(0x490b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490b88:{NFSU2_TR(0x490b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490b8b:{NFSU2_TR(0x490b8b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490b92:{NFSU2_TR(0x490b92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490b93:{NFSU2_TR(0x490b93);
u8 U[4];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490b9a:{NFSU2_TR(0x490b9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490b9full));
TAIL_STATIC(0x487210u,487);
}
B490b9f:L490b9f:{c.instructions+=14;NFSU2_TR(0x490b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B490ba1:{NFSU2_TR(0x490ba1);
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
B490ba4:{NFSU2_TR(0x490ba4);
__builtin_memmove((R+4),(R+16),4);
}
B490ba6:{NFSU2_TR(0x490ba6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B490ba8:{NFSU2_TR(0x490ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490bab:{NFSU2_TR(0x490bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490bae:{NFSU2_TR(0x490bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490bb1:{NFSU2_TR(0x490bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490bb4:{NFSU2_TR(0x490bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490bb7:{NFSU2_TR(0x490bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490bba:{NFSU2_TR(0x490bba);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490bc1:{NFSU2_TR(0x490bc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490bc2:{NFSU2_TR(0x490bc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490bc6:{NFSU2_TR(0x490bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490bcbull));
TAIL_STATIC(0x487040u,487);
}
B490bcb:L490bcb:{c.instructions+=9;NFSU2_TR(0x490bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490bce:{NFSU2_TR(0x490bce);
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
B490bd1:{NFSU2_TR(0x490bd1);
__builtin_memmove((R+0),(R+16),4);
}
B490bd3:{NFSU2_TR(0x490bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490bd6:{NFSU2_TR(0x490bd6);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490bdd:{NFSU2_TR(0x490bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490be4:{NFSU2_TR(0x490be4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490be5:{NFSU2_TR(0x490be5);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490be9:{NFSU2_TR(0x490be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490beeull));
TAIL_STATIC(0x487080u,487);
}
B490bee:L490bee:{c.instructions+=7;NFSU2_TR(0x490bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490bf2:{NFSU2_TR(0x490bf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490bf3:{NFSU2_TR(0x490bf3);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490bfa:{NFSU2_TR(0x490bfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490bfb:{NFSU2_TR(0x490bfb);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490c02:{NFSU2_TR(0x490c02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c03:{NFSU2_TR(0x490c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c08ull));
TAIL_STATIC(0x43d540u,43d);
}
B490c08:L490c08:{c.instructions+=9;NFSU2_TR(0x490c08);
__builtin_memmove((R+4),gp(0x7f39a0),4);
}
B490c0e:{NFSU2_TR(0x490c0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c0f:{NFSU2_TR(0x490c0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490c13:{NFSU2_TR(0x490c13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c14:{NFSU2_TR(0x490c14);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490c1b:{NFSU2_TR(0x490c1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c1c:{NFSU2_TR(0x490c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490c23:{NFSU2_TR(0x490c23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c24:{NFSU2_TR(0x490c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c29ull));
TAIL_STATIC(0x43d610u,43d);
}
B490c29:L490c29:{c.instructions+=9;NFSU2_TR(0x490c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B490c2c:{NFSU2_TR(0x490c2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B490c2f:{NFSU2_TR(0x490c2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c31:{NFSU2_TR(0x490c31);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490c38:{NFSU2_TR(0x490c38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c39:{NFSU2_TR(0x490c39);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490c40:{NFSU2_TR(0x490c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c41:{NFSU2_TR(0x490c41);
__builtin_memmove((R+4),(R+28),4);
}
B490c43:{NFSU2_TR(0x490c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c48ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B490c48:L490c48:{c.instructions+=2;NFSU2_TR(0x490c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490c4a:{NFSU2_TR(0x490c4a);
if(r1(R+518)){{goto L490d7f;}}
}
B490c50:L490c50:{c.instructions+=6;NFSU2_TR(0x490c50);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x20ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B490c53:{NFSU2_TR(0x490c53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c54:{NFSU2_TR(0x490c54);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490c5b:{NFSU2_TR(0x490c5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c5c:{NFSU2_TR(0x490c5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490c60:{NFSU2_TR(0x490c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c65ull));
TAIL_STATIC(0x487120u,487);
}
B490c65:L490c65:{c.instructions+=6;NFSU2_TR(0x490c65);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490c6c:{NFSU2_TR(0x490c6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c6d:{NFSU2_TR(0x490c6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490c74:{NFSU2_TR(0x490c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490c75:{NFSU2_TR(0x490c75);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490c79:{NFSU2_TR(0x490c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c7eull));
TAIL_STATIC(0x48b7f0u,48b);
}
B490c7e:L490c7e:{c.instructions+=2;NFSU2_TR(0x490c7e);
__builtin_memmove((R+4),(R+0),4);
}
B490c80:{NFSU2_TR(0x490c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490c85ull));
TAIL_STATIC(0x487320u,487);
}
B490c85:L490c85:{c.instructions+=14;NFSU2_TR(0x490c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B490c87:{NFSU2_TR(0x490c87);
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
B490c8a:{NFSU2_TR(0x490c8a);
__builtin_memmove((R+4),(R+16),4);
}
B490c8c:{NFSU2_TR(0x490c8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B490c8e:{NFSU2_TR(0x490c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490c91:{NFSU2_TR(0x490c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490c94:{NFSU2_TR(0x490c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490c97:{NFSU2_TR(0x490c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490c9a:{NFSU2_TR(0x490c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490c9d:{NFSU2_TR(0x490c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490ca0:{NFSU2_TR(0x490ca0);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490ca7:{NFSU2_TR(0x490ca7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490ca8:{NFSU2_TR(0x490ca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490cac:{NFSU2_TR(0x490cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490cb1ull));
TAIL_STATIC(0x487080u,487);
}
B490cb1:L490cb1:{c.instructions+=1;NFSU2_TR(0x490cb1);
{goto L490edb;}
}
B490cb6:L490cb6:{c.instructions+=2;NFSU2_TR(0x490cb6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490cb9:{NFSU2_TR(0x490cb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490d96;}}
}
B490cbf:L490cbf:{c.instructions+=14;NFSU2_TR(0x490cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490cc3:{NFSU2_TR(0x490cc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490cc7:{NFSU2_TR(0x490cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B490cca:{NFSU2_TR(0x490cca);
__builtin_memmove((R+8),(R+16),4);
}
B490ccc:{NFSU2_TR(0x490ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B490cce:{NFSU2_TR(0x490cce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490cd2:{NFSU2_TR(0x490cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490cd5:{NFSU2_TR(0x490cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490cd9:{NFSU2_TR(0x490cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490cdc:{NFSU2_TR(0x490cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490cdf:{NFSU2_TR(0x490cdf);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490ce6:{NFSU2_TR(0x490ce6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490ce7:{NFSU2_TR(0x490ce7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490cee:{NFSU2_TR(0x490cee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490cf3ull));
TAIL_STATIC(0x487210u,487);
}
B490cf3:L490cf3:{c.instructions+=14;NFSU2_TR(0x490cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B490cf5:{NFSU2_TR(0x490cf5);
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
B490cf8:{NFSU2_TR(0x490cf8);
__builtin_memmove((R+4),(R+16),4);
}
B490cfa:{NFSU2_TR(0x490cfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B490cfc:{NFSU2_TR(0x490cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490cff:{NFSU2_TR(0x490cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490d02:{NFSU2_TR(0x490d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490d05:{NFSU2_TR(0x490d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490d08:{NFSU2_TR(0x490d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490d0b:{NFSU2_TR(0x490d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490d0e:{NFSU2_TR(0x490d0e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490d15:{NFSU2_TR(0x490d15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d16:{NFSU2_TR(0x490d16);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490d1a:{NFSU2_TR(0x490d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490d1full));
TAIL_STATIC(0x487040u,487);
}
B490d1f:L490d1f:{c.instructions+=7;NFSU2_TR(0x490d1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490d23:{NFSU2_TR(0x490d23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d24:{NFSU2_TR(0x490d24);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490d2b:{NFSU2_TR(0x490d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d2c:{NFSU2_TR(0x490d2c);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490d33:{NFSU2_TR(0x490d33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d34:{NFSU2_TR(0x490d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490d39ull));
TAIL_STATIC(0x43d540u,43d);
}
B490d39:L490d39:{c.instructions+=9;NFSU2_TR(0x490d39);
__builtin_memmove((R+8),gp(0x7f3d4c),4);
}
B490d3f:{NFSU2_TR(0x490d3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d40:{NFSU2_TR(0x490d40);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490d44:{NFSU2_TR(0x490d44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d45:{NFSU2_TR(0x490d45);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490d4c:{NFSU2_TR(0x490d4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d4d:{NFSU2_TR(0x490d4d);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490d54:{NFSU2_TR(0x490d54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d55:{NFSU2_TR(0x490d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490d5aull));
TAIL_STATIC(0x43d610u,43d);
}
B490d5a:L490d5a:{c.instructions+=8;NFSU2_TR(0x490d5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B490d5d:{NFSU2_TR(0x490d5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d5f:{NFSU2_TR(0x490d5f);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490d66:{NFSU2_TR(0x490d66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d67:{NFSU2_TR(0x490d67);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490d6e:{NFSU2_TR(0x490d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490d6f:{NFSU2_TR(0x490d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490d72:{NFSU2_TR(0x490d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490d77ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B490d77:L490d77:{c.instructions+=2;NFSU2_TR(0x490d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490d79:{NFSU2_TR(0x490d79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490ed8;}}
}
B490d7f:L490d7f:{c.instructions+=9;NFSU2_TR(0x490d7f);
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
B490d81:{NFSU2_TR(0x490d81);
u8 U[8];
w4(U+0,u32(u32(u32(0x614ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490d88:{NFSU2_TR(0x490d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490d8f:{NFSU2_TR(0x490d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490d90:{NFSU2_TR(0x490d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490d91:{NFSU2_TR(0x490d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490d92:{NFSU2_TR(0x490d92);
__builtin_memmove((R+16),(R+20),4);
}
B490d94:{NFSU2_TR(0x490d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490d95:{NFSU2_TR(0x490d95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490d96:L490d96:{c.instructions+=2;NFSU2_TR(0x490d96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490d99:{NFSU2_TR(0x490d99);
if(r1(R+518)){{goto L490da4;}}
}
B490d9b:L490d9b:{c.instructions+=2;NFSU2_TR(0x490d9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490d9e:{NFSU2_TR(0x490d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490e49;}}
}
B490da4:L490da4:{c.instructions+=3;NFSU2_TR(0x490da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490da8:{NFSU2_TR(0x490da8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490dab:{NFSU2_TR(0x490dab);
if(r1(R+518)){{goto L490e49;}}
}
B490db1:L490db1:{c.instructions+=2;NFSU2_TR(0x490db1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B490db4:{NFSU2_TR(0x490db4);
if(r1(R+518)){{goto L490e49;}}
}
B490dba:L490dba:{c.instructions+=3;NFSU2_TR(0x490dba);
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
B490dbd:{NFSU2_TR(0x490dbd);
w4(R+4,u32(0x89e7a0ull));
}
B490dc2:{NFSU2_TR(0x490dc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490dc8;}}
}
B490dc4:L490dc4:{c.instructions+=2;NFSU2_TR(0x490dc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490dc6:{NFSU2_TR(0x490dc6);
{goto L490dca;}
}
B490dc8:L490dc8:{c.instructions+=1;NFSU2_TR(0x490dc8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490dca:L490dca:{c.instructions+=1;NFSU2_TR(0x490dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490dcfull));
TAIL_STATIC(0x5ed980u,5ed);
}
B490dcf:L490dcf:{c.instructions+=3;NFSU2_TR(0x490dcf);
__builtin_memmove((R+4),gp(0x890080),4);
}
B490dd5:{NFSU2_TR(0x490dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490dd6:{NFSU2_TR(0x490dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490ddbull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B490ddb:L490ddb:{c.instructions+=7;NFSU2_TR(0x490ddb);
__builtin_memmove((R+28),(R+0),4);
}
B490ddd:{NFSU2_TR(0x490ddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B490de0:{NFSU2_TR(0x490de0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490de1:{NFSU2_TR(0x490de1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490de5:{NFSU2_TR(0x490de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490de6:{NFSU2_TR(0x490de6);
__builtin_memmove((R+4),(R+12),4);
}
B490de8:{NFSU2_TR(0x490de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490dedull));
TAIL_STATIC(0x401250u,401);
}
B490ded:L490ded:{c.instructions+=5;NFSU2_TR(0x490ded);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490df1:{NFSU2_TR(0x490df1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490df2:{NFSU2_TR(0x490df2);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490df6:{NFSU2_TR(0x490df6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490df7:{NFSU2_TR(0x490df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490dfcull));
TAIL_STATIC(0x43cf10u,43c);
}
B490dfc:L490dfc:{c.instructions+=13;NFSU2_TR(0x490dfc);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490e00:{NFSU2_TR(0x490e00);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490e06:{NFSU2_TR(0x490e06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B490e09:{NFSU2_TR(0x490e09);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490e0d:{NFSU2_TR(0x490e0d);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490e13:{NFSU2_TR(0x490e13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490e15:{NFSU2_TR(0x490e15);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490e19:{NFSU2_TR(0x490e19);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B490e1f:{NFSU2_TR(0x490e1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B490e21:{NFSU2_TR(0x490e21);
{u32 ea_=u32(u32(8403568u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B490e27:{NFSU2_TR(0x490e27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B490e29:{NFSU2_TR(0x490e29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B490e2c:{NFSU2_TR(0x490e2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490fb5;}}
}
B490e32:L490e32:{c.instructions+=5;NFSU2_TR(0x490e32);
{u32 ea_=u32(u32(8403568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B490e38:{NFSU2_TR(0x490e38);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490e3e:{NFSU2_TR(0x490e3e);
{u32 ea_=u32(u32(8403568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B490e44:{NFSU2_TR(0x490e44);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B490e46:{NFSU2_TR(0x490e46);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490e49:L490e49:{c.instructions+=14;NFSU2_TR(0x490e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490e4d:{NFSU2_TR(0x490e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490e51:{NFSU2_TR(0x490e51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B490e54:{NFSU2_TR(0x490e54);
__builtin_memmove((R+0),(R+16),4);
}
B490e56:{NFSU2_TR(0x490e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B490e58:{NFSU2_TR(0x490e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490e5c:{NFSU2_TR(0x490e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e5f:{NFSU2_TR(0x490e5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490e63:{NFSU2_TR(0x490e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e66:{NFSU2_TR(0x490e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e69:{NFSU2_TR(0x490e69);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490e70:{NFSU2_TR(0x490e70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490e71:{NFSU2_TR(0x490e71);
u8 U[4];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490e78:{NFSU2_TR(0x490e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490e7dull));
TAIL_STATIC(0x487210u,487);
}
B490e7d:L490e7d:{c.instructions+=14;NFSU2_TR(0x490e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B490e7f:{NFSU2_TR(0x490e7f);
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
B490e82:{NFSU2_TR(0x490e82);
__builtin_memmove((R+4),(R+16),4);
}
B490e84:{NFSU2_TR(0x490e84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B490e86:{NFSU2_TR(0x490e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490e89:{NFSU2_TR(0x490e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e8c:{NFSU2_TR(0x490e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490e8f:{NFSU2_TR(0x490e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490e92:{NFSU2_TR(0x490e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e95:{NFSU2_TR(0x490e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490e98:{NFSU2_TR(0x490e98);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490e9f:{NFSU2_TR(0x490e9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490ea0:{NFSU2_TR(0x490ea0);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490ea4:{NFSU2_TR(0x490ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490ea9ull));
TAIL_STATIC(0x487040u,487);
}
B490ea9:L490ea9:{c.instructions+=5;NFSU2_TR(0x490ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490eac:{NFSU2_TR(0x490eac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490eae:{NFSU2_TR(0x490eae);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490eb2:{NFSU2_TR(0x490eb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490eb3:{NFSU2_TR(0x490eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490eb8ull));
TAIL_STATIC(0x5bc450u,5bc);
}
B490eb8:L490eb8:{c.instructions+=2;NFSU2_TR(0x490eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B490eba:{NFSU2_TR(0x490eba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x490d7fu);}goto L490d7f;}}
}
B490ec0:L490ec0:{c.instructions+=7;NFSU2_TR(0x490ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490ec3:{NFSU2_TR(0x490ec3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B490ec6:{NFSU2_TR(0x490ec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490ec7:{NFSU2_TR(0x490ec7);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490ece:{NFSU2_TR(0x490ece);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490ecf:{NFSU2_TR(0x490ecf);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490ed3:{NFSU2_TR(0x490ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490ed8ull));
TAIL_STATIC(0x487120u,487);
}
B490ed8:L490ed8:{c.instructions+=1;NFSU2_TR(0x490ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B490edb:L490edb:{c.instructions+=20;NFSU2_TR(0x490edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490ede:{NFSU2_TR(0x490ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490ee1:{NFSU2_TR(0x490ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490ee4:{NFSU2_TR(0x490ee4);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490eeb:{NFSU2_TR(0x490eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B490eee:{NFSU2_TR(0x490eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490ef5:{NFSU2_TR(0x490ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490ef9:{NFSU2_TR(0x490ef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f00:{NFSU2_TR(0x490f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490f04:{NFSU2_TR(0x490f04);
__builtin_memmove((R+8),(R+16),4);
}
B490f06:{NFSU2_TR(0x490f06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B490f08:{NFSU2_TR(0x490f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490f0f:{NFSU2_TR(0x490f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f12:{NFSU2_TR(0x490f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490f19:{NFSU2_TR(0x490f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f1c:{NFSU2_TR(0x490f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f1f:{NFSU2_TR(0x490f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B490f23:{NFSU2_TR(0x490f23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490f24:{NFSU2_TR(0x490f24);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490f2b:{NFSU2_TR(0x490f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490f30ull));
TAIL_STATIC(0x486ff0u,486);
}
B490f30:L490f30:{c.instructions+=14;NFSU2_TR(0x490f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490f34:{NFSU2_TR(0x490f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490f38:{NFSU2_TR(0x490f38);
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
B490f3b:{NFSU2_TR(0x490f3b);
__builtin_memmove((R+0),(R+16),4);
}
B490f3d:{NFSU2_TR(0x490f3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B490f3f:{NFSU2_TR(0x490f3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490f43:{NFSU2_TR(0x490f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f46:{NFSU2_TR(0x490f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B490f4a:{NFSU2_TR(0x490f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f4d:{NFSU2_TR(0x490f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490f50:{NFSU2_TR(0x490f50);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B490f57:{NFSU2_TR(0x490f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B490f58:{NFSU2_TR(0x490f58);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B490f5c:{NFSU2_TR(0x490f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x490f61ull));
TAIL_STATIC(0x48b7b0u,48b);
}
B490f61:L490f61:{c.instructions+=6;NFSU2_TR(0x490f61);
{u32 ea_=u32(u32(7919512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490f67:{NFSU2_TR(0x490f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B490f6a:{NFSU2_TR(0x490f6a);
{u32 ea_=u32(u32(7919516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490f70:{NFSU2_TR(0x490f70);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B490f71:{NFSU2_TR(0x490f71);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B490f7c:{NFSU2_TR(0x490f7c);
if(r1(R+518)){{goto L490f93;}}
}
B490f7e:L490f7e:{c.instructions+=2;NFSU2_TR(0x490f7e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B490f7f:{NFSU2_TR(0x490f7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490fa3;}}
}
B490f81:L490f81:{c.instructions+=5;NFSU2_TR(0x490f81);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490f83:{NFSU2_TR(0x490f83);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490f85:{NFSU2_TR(0x490f85);
{u32 ea_=u32(u32(7919520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490f8b:{NFSU2_TR(0x490f8b);
{u32 ea_=u32(u32(7919524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490f91:{NFSU2_TR(0x490f91);
{goto L490fa3;}
}
B490f93:L490f93:{c.instructions+=4;NFSU2_TR(0x490f93);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490f95:{NFSU2_TR(0x490f95);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490f97:{NFSU2_TR(0x490f97);
{u32 ea_=u32(u32(7919528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490f9d:{NFSU2_TR(0x490f9d);
{u32 ea_=u32(u32(7919532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490fa3:L490fa3:{c.instructions+=5;NFSU2_TR(0x490fa3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490faa:{NFSU2_TR(0x490faa);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B490fac:{NFSU2_TR(0x490fac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B490fae:{NFSU2_TR(0x490fae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B490fb1:{NFSU2_TR(0x490fb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490fce;}}
}
B490fb3:L490fb3:{c.instructions+=1;NFSU2_TR(0x490fb3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490fb5:L490fb5:{c.instructions+=10;NFSU2_TR(0x490fb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490fb7:{NFSU2_TR(0x490fb7);
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
B490fb9:{NFSU2_TR(0x490fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x614ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B490fc0:{NFSU2_TR(0x490fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B490fc7:{NFSU2_TR(0x490fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B490fc8:{NFSU2_TR(0x490fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B490fc9:{NFSU2_TR(0x490fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B490fca:{NFSU2_TR(0x490fca);
__builtin_memmove((R+16),(R+20),4);
}
B490fcc:{NFSU2_TR(0x490fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B490fcd:{NFSU2_TR(0x490fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B490fce:L490fce:{c.instructions+=5;NFSU2_TR(0x490fce);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490fd5:{NFSU2_TR(0x490fd5);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B490fd7:{NFSU2_TR(0x490fd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B490fd9:{NFSU2_TR(0x490fd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B490fdc:{NFSU2_TR(0x490fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L490ffc;}}
}
B490fde:L490fde:{c.instructions+=8;NFSU2_TR(0x490fde);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B490fe5:{NFSU2_TR(0x490fe5);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B490fe7:{NFSU2_TR(0x490fe7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B490fe9:{NFSU2_TR(0x490fe9);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B490feb:{NFSU2_TR(0x490feb);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B490fed:{NFSU2_TR(0x490fed);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B490ff3:{NFSU2_TR(0x490ff3);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B490ffa:{NFSU2_TR(0x490ffa);
{goto L490ffe;}
}
B490ffc:L490ffc:{c.instructions+=1;NFSU2_TR(0x490ffc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B490ffe:L490ffe:{c.instructions+=1;NFSU2_TR(0x490ffe);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x491005u,491);
}
XIT:NFSU2_TR_EXIT(0x490,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
