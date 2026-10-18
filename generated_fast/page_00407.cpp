#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x407,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x407,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_407(u8* __restrict R,Cpu& c);
u32 page_407(Cpu& c){return body_407(c.regs.data(),c);}
__attribute__((noinline)) u32 body_407(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x407003:goto L407003;
case 0x407006:c.instructions+=3;goto B407006;
case 0x407007:c.instructions+=2;goto B407007;
case 0x407009:c.instructions+=1;goto B407009;
case 0x40700e:goto L40700e;
case 0x40700f:c.instructions+=2;goto B40700f;
case 0x407011:c.instructions+=1;goto B407011;
case 0x407016:goto L407016;
case 0x407019:c.instructions+=2;goto B407019;
case 0x40701a:c.instructions+=1;goto B40701a;
case 0x40701c:goto L40701c;
case 0x407021:c.instructions+=3;goto B407021;
case 0x407026:c.instructions+=2;goto B407026;
case 0x407028:c.instructions+=1;goto B407028;
case 0x40702d:goto L40702d;
case 0x40702e:c.instructions+=2;goto B40702e;
case 0x407034:c.instructions+=1;goto B407034;
case 0x407039:goto L407039;
case 0x40703a:c.instructions+=2;goto B40703a;
case 0x40703c:c.instructions+=1;goto B40703c;
case 0x407041:goto L407041;
case 0x407043:c.instructions+=1;goto B407043;
case 0x407048:goto L407048;
case 0x407049:c.instructions+=4;goto B407049;
case 0x40704a:c.instructions+=3;goto B40704a;
case 0x40704b:c.instructions+=2;goto B40704b;
case 0x40704c:c.instructions+=1;goto B40704c;
case 0x407050:goto L407050;
case 0x407051:c.instructions+=5;goto B407051;
case 0x407053:c.instructions+=4;goto B407053;
case 0x407059:c.instructions+=3;goto B407059;
case 0x40705e:c.instructions+=2;goto B40705e;
case 0x40705f:c.instructions+=1;goto B40705f;
case 0x407064:goto L407064;
case 0x40706a:c.instructions+=3;goto B40706a;
case 0x40706f:c.instructions+=2;goto B40706f;
case 0x407070:c.instructions+=1;goto B407070;
case 0x407075:goto L407075;
case 0x40707b:c.instructions+=3;goto B40707b;
case 0x407080:c.instructions+=2;goto B407080;
case 0x407081:c.instructions+=1;goto B407081;
case 0x407086:goto L407086;
case 0x40708c:c.instructions+=3;goto B40708c;
case 0x407091:c.instructions+=2;goto B407091;
case 0x407092:c.instructions+=1;goto B407092;
case 0x407097:goto L407097;
case 0x40709d:c.instructions+=3;goto B40709d;
case 0x4070a2:c.instructions+=2;goto B4070a2;
case 0x4070a3:c.instructions+=1;goto B4070a3;
case 0x4070a8:goto L4070a8;
case 0x4070ae:c.instructions+=3;goto B4070ae;
case 0x4070b3:c.instructions+=2;goto B4070b3;
case 0x4070b4:c.instructions+=1;goto B4070b4;
case 0x4070b9:goto L4070b9;
case 0x4070bf:c.instructions+=3;goto B4070bf;
case 0x4070c4:c.instructions+=2;goto B4070c4;
case 0x4070c5:c.instructions+=1;goto B4070c5;
case 0x4070ca:goto L4070ca;
case 0x4070d0:c.instructions+=3;goto B4070d0;
case 0x4070d5:c.instructions+=2;goto B4070d5;
case 0x4070d6:c.instructions+=1;goto B4070d6;
case 0x4070db:goto L4070db;
case 0x4070e1:c.instructions+=4;goto B4070e1;
case 0x4070e4:c.instructions+=3;goto B4070e4;
case 0x4070e9:c.instructions+=2;goto B4070e9;
case 0x4070ea:c.instructions+=1;goto B4070ea;
case 0x4070ef:goto L4070ef;
case 0x4070f5:c.instructions+=3;goto B4070f5;
case 0x4070fa:c.instructions+=2;goto B4070fa;
case 0x4070fb:c.instructions+=1;goto B4070fb;
case 0x407100:goto L407100;
case 0x407103:c.instructions+=2;goto B407103;
case 0x407104:c.instructions+=1;goto B407104;
case 0x407110:goto L407110;
case 0x407111:c.instructions+=4;goto B407111;
case 0x407113:c.instructions+=3;goto B407113;
case 0x407119:c.instructions+=2;goto B407119;
case 0x40711b:c.instructions+=1;goto B40711b;
case 0x407121:goto L407121;
case 0x407127:c.instructions+=2;goto B407127;
case 0x407129:c.instructions+=1;goto B407129;
case 0x40712b:goto L40712b;
case 0x407131:c.instructions+=3;goto B407131;
case 0x407136:c.instructions+=2;goto B407136;
case 0x407137:c.instructions+=1;goto B407137;
case 0x40713c:goto L40713c;
case 0x407142:c.instructions+=3;goto B407142;
case 0x407147:c.instructions+=2;goto B407147;
case 0x407148:c.instructions+=1;goto B407148;
case 0x40714d:goto L40714d;
case 0x407150:goto L407150;
case 0x407156:c.instructions+=3;goto B407156;
case 0x40715b:c.instructions+=2;goto B40715b;
case 0x40715c:c.instructions+=1;goto B40715c;
case 0x407161:goto L407161;
case 0x407167:c.instructions+=3;goto B407167;
case 0x40716c:c.instructions+=2;goto B40716c;
case 0x40716d:c.instructions+=1;goto B40716d;
case 0x407172:goto L407172;
case 0x407178:c.instructions+=3;goto B407178;
case 0x40717d:c.instructions+=2;goto B40717d;
case 0x40717e:c.instructions+=1;goto B40717e;
case 0x407183:goto L407183;
case 0x407189:c.instructions+=3;goto B407189;
case 0x40718e:c.instructions+=2;goto B40718e;
case 0x40718f:c.instructions+=1;goto B40718f;
case 0x407194:goto L407194;
case 0x40719a:c.instructions+=3;goto B40719a;
case 0x40719f:c.instructions+=2;goto B40719f;
case 0x4071a0:c.instructions+=1;goto B4071a0;
case 0x4071a5:goto L4071a5;
case 0x4071ab:c.instructions+=3;goto B4071ab;
case 0x4071b0:c.instructions+=2;goto B4071b0;
case 0x4071b1:c.instructions+=1;goto B4071b1;
case 0x4071b6:goto L4071b6;
case 0x4071bc:c.instructions+=3;goto B4071bc;
case 0x4071c1:c.instructions+=2;goto B4071c1;
case 0x4071c2:c.instructions+=1;goto B4071c2;
case 0x4071c7:goto L4071c7;
case 0x4071cd:c.instructions+=3;goto B4071cd;
case 0x4071d2:c.instructions+=2;goto B4071d2;
case 0x4071d3:c.instructions+=1;goto B4071d3;
case 0x4071d8:goto L4071d8;
case 0x4071de:c.instructions+=4;goto B4071de;
case 0x4071e1:c.instructions+=3;goto B4071e1;
case 0x4071e6:c.instructions+=2;goto B4071e6;
case 0x4071e7:c.instructions+=1;goto B4071e7;
case 0x4071ec:goto L4071ec;
case 0x4071f2:c.instructions+=3;goto B4071f2;
case 0x4071f7:c.instructions+=2;goto B4071f7;
case 0x4071f8:c.instructions+=1;goto B4071f8;
case 0x4071fd:goto L4071fd;
case 0x407203:c.instructions+=3;goto B407203;
case 0x407208:c.instructions+=2;goto B407208;
case 0x407209:c.instructions+=1;goto B407209;
case 0x40720e:goto L40720e;
case 0x407214:c.instructions+=3;goto B407214;
case 0x407219:c.instructions+=2;goto B407219;
case 0x40721a:c.instructions+=1;goto B40721a;
case 0x40721f:goto L40721f;
case 0x407225:c.instructions+=3;goto B407225;
case 0x40722a:c.instructions+=2;goto B40722a;
case 0x40722b:c.instructions+=1;goto B40722b;
case 0x407230:goto L407230;
case 0x407236:c.instructions+=3;goto B407236;
case 0x40723b:c.instructions+=2;goto B40723b;
case 0x40723c:c.instructions+=1;goto B40723c;
case 0x407241:goto L407241;
case 0x407247:c.instructions+=3;goto B407247;
case 0x40724c:c.instructions+=2;goto B40724c;
case 0x40724d:c.instructions+=1;goto B40724d;
case 0x407252:goto L407252;
case 0x407258:c.instructions+=3;goto B407258;
case 0x40725d:c.instructions+=2;goto B40725d;
case 0x40725e:c.instructions+=1;goto B40725e;
case 0x407263:goto L407263;
case 0x407266:c.instructions+=2;goto B407266;
case 0x407268:c.instructions+=1;goto B407268;
case 0x40726d:goto L40726d;
case 0x40726f:c.instructions+=2;goto B40726f;
case 0x407271:c.instructions+=1;goto B407271;
case 0x407274:goto L407274;
case 0x40727e:goto L40727e;
case 0x40727f:c.instructions+=1;goto B40727f;
case 0x407280:goto L407280;
case 0x407284:c.instructions+=3;goto B407284;
case 0x407287:c.instructions+=2;goto B407287;
case 0x40728c:c.instructions+=1;goto B40728c;
case 0x40728e:goto L40728e;
case 0x407294:c.instructions+=4;goto B407294;
case 0x40729a:c.instructions+=3;goto B40729a;
case 0x4072a0:c.instructions+=2;goto B4072a0;
case 0x4072aa:c.instructions+=1;goto B4072aa;
case 0x4072ac:goto L4072ac;
case 0x4072ae:c.instructions+=1;goto B4072ae;
case 0x4072b0:goto L4072b0;
case 0x4072b6:c.instructions+=4;goto B4072b6;
case 0x4072bc:c.instructions+=3;goto B4072bc;
case 0x4072c2:c.instructions+=2;goto B4072c2;
case 0x4072c8:c.instructions+=1;goto B4072c8;
case 0x4072ca:goto L4072ca;
case 0x4072cc:c.instructions+=2;goto B4072cc;
case 0x4072d6:c.instructions+=1;goto B4072d6;
case 0x4072d8:goto L4072d8;
case 0x4072de:c.instructions+=1;goto B4072de;
case 0x4072e0:goto L4072e0;
case 0x4072ea:goto L4072ea;
case 0x4072f0:c.instructions+=2;goto B4072f0;
case 0x4072f3:c.instructions+=1;goto B4072f3;
case 0x4072f5:goto L4072f5;
case 0x4072f8:c.instructions+=4;goto B4072f8;
case 0x4072fb:c.instructions+=3;goto B4072fb;
case 0x407301:c.instructions+=2;goto B407301;
case 0x407304:c.instructions+=1;goto B407304;
case 0x407307:goto L407307;
case 0x407309:c.instructions+=1;goto B407309;
case 0x407310:goto L407310;
case 0x407311:c.instructions+=4;goto B407311;
case 0x407313:c.instructions+=3;goto B407313;
case 0x407319:c.instructions+=2;goto B407319;
case 0x40731c:c.instructions+=1;goto B40731c;
case 0x40731e:goto L40731e;
case 0x407321:c.instructions+=1;goto B407321;
case 0x407323:goto L407323;
case 0x40732d:c.instructions+=2;goto B40732d;
case 0x40732e:c.instructions+=1;goto B40732e;
case 0x40732f:goto L40732f;
case 0x407339:c.instructions+=3;goto B407339;
case 0x40733e:c.instructions+=2;goto B40733e;
case 0x407340:c.instructions+=1;goto B407340;
case 0x407342:goto L407342;
case 0x407347:c.instructions+=2;goto B407347;
case 0x407349:c.instructions+=1;goto B407349;
case 0x40734b:goto L40734b;
case 0x407351:c.instructions+=3;goto B407351;
case 0x407357:c.instructions+=2;goto B407357;
case 0x40735d:c.instructions+=1;goto B40735d;
case 0x407362:goto L407362;
case 0x407368:goto L407368;
case 0x407369:c.instructions+=1;goto B407369;
case 0x407370:goto L407370;
case 0x407374:c.instructions+=3;goto B407374;
case 0x407376:c.instructions+=2;goto B407376;
case 0x407378:c.instructions+=1;goto B407378;
case 0x40737a:goto L40737a;
case 0x407380:c.instructions+=1;goto B407380;
case 0x407382:goto L407382;
case 0x407388:goto L407388;
case 0x40738d:c.instructions+=2;goto B40738d;
case 0x40738f:c.instructions+=1;goto B40738f;
case 0x407391:goto L407391;
case 0x407397:c.instructions+=3;goto B407397;
case 0x407399:c.instructions+=2;goto B407399;
case 0x40739c:c.instructions+=1;goto B40739c;
case 0x40739e:goto L40739e;
case 0x4073a0:goto L4073a0;
case 0x4073a6:c.instructions+=3;goto B4073a6;
case 0x4073a8:c.instructions+=2;goto B4073a8;
case 0x4073ab:c.instructions+=1;goto B4073ab;
case 0x4073ad:goto L4073ad;
case 0x4073b3:c.instructions+=7;goto B4073b3;
case 0x4073b9:c.instructions+=6;goto B4073b9;
case 0x4073bf:c.instructions+=5;goto B4073bf;
case 0x4073c1:c.instructions+=4;goto B4073c1;
case 0x4073c3:c.instructions+=3;goto B4073c3;
case 0x4073c5:c.instructions+=2;goto B4073c5;
case 0x4073c8:c.instructions+=1;goto B4073c8;
case 0x4073ca:goto L4073ca;
case 0x4073cc:c.instructions+=1;goto B4073cc;
case 0x4073ce:goto L4073ce;
case 0x4073d0:goto L4073d0;
case 0x4073d5:c.instructions+=2;goto B4073d5;
case 0x4073d7:c.instructions+=1;goto B4073d7;
case 0x4073d9:goto L4073d9;
case 0x4073de:c.instructions+=2;goto B4073de;
case 0x4073e0:c.instructions+=1;goto B4073e0;
case 0x4073e2:goto L4073e2;
case 0x4073e7:c.instructions+=2;goto B4073e7;
case 0x4073e9:c.instructions+=1;goto B4073e9;
case 0x4073eb:goto L4073eb;
case 0x4073f0:c.instructions+=2;goto B4073f0;
case 0x4073f2:c.instructions+=1;goto B4073f2;
case 0x4073f4:goto L4073f4;
case 0x4073f6:c.instructions+=1;goto B4073f6;
case 0x4073f9:goto L4073f9;
case 0x4073fb:c.instructions+=1;goto B4073fb;
case 0x407400:goto L407400;
case 0x407401:c.instructions+=6;goto B407401;
case 0x407402:c.instructions+=5;goto B407402;
case 0x407403:c.instructions+=4;goto B407403;
case 0x407405:c.instructions+=3;goto B407405;
case 0x407406:c.instructions+=2;goto B407406;
case 0x407408:c.instructions+=1;goto B407408;
case 0x40740d:goto L40740d;
case 0x40740f:c.instructions+=1;goto B40740f;
case 0x407411:goto L407411;
case 0x407417:c.instructions+=2;goto B407417;
case 0x407419:c.instructions+=1;goto B407419;
case 0x40741b:goto L40741b;
case 0x40741d:c.instructions+=14;goto B40741d;
case 0x407423:c.instructions+=13;goto B407423;
case 0x407425:c.instructions+=12;goto B407425;
case 0x407428:c.instructions+=11;goto B407428;
case 0x40742b:c.instructions+=10;goto B40742b;
case 0x40742e:c.instructions+=9;goto B40742e;
case 0x407434:c.instructions+=8;goto B407434;
case 0x407436:c.instructions+=7;goto B407436;
case 0x407439:c.instructions+=6;goto B407439;
case 0x40743c:c.instructions+=5;goto B40743c;
case 0x40743f:c.instructions+=4;goto B40743f;
case 0x407445:c.instructions+=3;goto B407445;
case 0x40744b:c.instructions+=2;goto B40744b;
case 0x407451:c.instructions+=1;goto B407451;
case 0x407457:goto L407457;
case 0x40745d:c.instructions+=3;goto B40745d;
case 0x407463:c.instructions+=2;goto B407463;
case 0x407465:c.instructions+=1;goto B407465;
case 0x407467:goto L407467;
case 0x40746c:c.instructions+=1;goto B40746c;
case 0x40746e:goto L40746e;
case 0x407473:c.instructions+=8;goto B407473;
case 0x407479:c.instructions+=7;goto B407479;
case 0x40747d:c.instructions+=6;goto B40747d;
case 0x407481:c.instructions+=5;goto B407481;
case 0x407487:c.instructions+=4;goto B407487;
case 0x40748d:c.instructions+=3;goto B40748d;
case 0x40748f:c.instructions+=2;goto B40748f;
case 0x407492:c.instructions+=1;goto B407492;
case 0x407494:goto L407494;
case 0x407496:c.instructions+=2;goto B407496;
case 0x407498:c.instructions+=1;goto B407498;
case 0x40749d:goto L40749d;
case 0x40749f:c.instructions+=1;goto B40749f;
case 0x4074a1:goto L4074a1;
case 0x4074a7:c.instructions+=2;goto B4074a7;
case 0x4074a9:c.instructions+=1;goto B4074a9;
case 0x4074ab:goto L4074ab;
case 0x4074ad:c.instructions+=4;goto B4074ad;
case 0x4074b0:c.instructions+=3;goto B4074b0;
case 0x4074b2:c.instructions+=2;goto B4074b2;
case 0x4074b8:c.instructions+=1;goto B4074b8;
case 0x4074be:goto L4074be;
case 0x4074c4:goto L4074c4;
case 0x4074cb:c.instructions+=1;goto B4074cb;
case 0x4074d1:goto L4074d1;
case 0x4074d7:c.instructions+=15;goto B4074d7;
case 0x4074d9:c.instructions+=14;goto B4074d9;
case 0x4074df:c.instructions+=13;goto B4074df;
case 0x4074e1:c.instructions+=12;goto B4074e1;
case 0x4074e3:c.instructions+=11;goto B4074e3;
case 0x4074e7:c.instructions+=10;goto B4074e7;
case 0x4074e9:c.instructions+=9;goto B4074e9;
case 0x4074ec:c.instructions+=8;goto B4074ec;
case 0x4074ef:c.instructions+=7;goto B4074ef;
case 0x4074f2:c.instructions+=6;goto B4074f2;
case 0x4074f8:c.instructions+=5;goto B4074f8;
case 0x4074fc:c.instructions+=4;goto B4074fc;
case 0x407502:c.instructions+=3;goto B407502;
case 0x407504:c.instructions+=2;goto B407504;
case 0x407507:c.instructions+=1;goto B407507;
case 0x407509:goto L407509;
case 0x40750b:c.instructions+=5;goto B40750b;
case 0x407511:c.instructions+=4;goto B407511;
case 0x407517:c.instructions+=3;goto B407517;
case 0x407519:c.instructions+=2;goto B407519;
case 0x40751f:c.instructions+=1;goto B40751f;
case 0x407521:goto L407521;
case 0x407527:c.instructions+=3;goto B407527;
case 0x407529:c.instructions+=2;goto B407529;
case 0x40752c:c.instructions+=1;goto B40752c;
case 0x40752e:goto L40752e;
case 0x407534:c.instructions+=4;goto B407534;
case 0x40753a:c.instructions+=3;goto B40753a;
case 0x407540:c.instructions+=2;goto B407540;
case 0x407542:c.instructions+=1;goto B407542;
case 0x407544:goto L407544;
case 0x40754a:c.instructions+=5;goto B40754a;
case 0x40754e:c.instructions+=4;goto B40754e;
case 0x407554:c.instructions+=3;goto B407554;
case 0x407556:c.instructions+=2;goto B407556;
case 0x407559:c.instructions+=1;goto B407559;
case 0x40755b:goto L40755b;
case 0x40755d:c.instructions+=5;goto B40755d;
case 0x407563:c.instructions+=4;goto B407563;
case 0x407569:c.instructions+=3;goto B407569;
case 0x40756b:c.instructions+=2;goto B40756b;
case 0x407571:c.instructions+=1;goto B407571;
case 0x407573:goto L407573;
case 0x407579:c.instructions+=3;goto B407579;
case 0x40757b:c.instructions+=2;goto B40757b;
case 0x40757e:c.instructions+=1;goto B40757e;
case 0x407580:goto L407580;
case 0x407586:c.instructions+=3;goto B407586;
case 0x407588:c.instructions+=2;goto B407588;
case 0x40758e:c.instructions+=1;goto B40758e;
case 0x407594:goto L407594;
case 0x40759b:c.instructions+=1;goto B40759b;
case 0x4075a1:goto L4075a1;
case 0x4075a7:c.instructions+=9;goto B4075a7;
case 0x4075a8:c.instructions+=8;goto B4075a8;
case 0x4075aa:c.instructions+=7;goto B4075aa;
case 0x4075ac:c.instructions+=6;goto B4075ac;
case 0x4075b0:c.instructions+=5;goto B4075b0;
case 0x4075b6:c.instructions+=4;goto B4075b6;
case 0x4075ba:c.instructions+=3;goto B4075ba;
case 0x4075bc:c.instructions+=2;goto B4075bc;
case 0x4075bf:c.instructions+=1;goto B4075bf;
case 0x4075c1:goto L4075c1;
case 0x4075c3:c.instructions+=1;goto B4075c3;
case 0x4075c5:goto L4075c5;
case 0x4075cb:c.instructions+=4;goto B4075cb;
case 0x4075d1:c.instructions+=3;goto B4075d1;
case 0x4075d3:c.instructions+=2;goto B4075d3;
case 0x4075d6:c.instructions+=1;goto B4075d6;
case 0x4075d8:goto L4075d8;
case 0x4075da:c.instructions+=1;goto B4075da;
case 0x4075dc:goto L4075dc;
case 0x4075e2:c.instructions+=4;goto B4075e2;
case 0x4075e6:c.instructions+=3;goto B4075e6;
case 0x4075e8:c.instructions+=2;goto B4075e8;
case 0x4075eb:c.instructions+=1;goto B4075eb;
case 0x4075ed:goto L4075ed;
case 0x4075ef:c.instructions+=1;goto B4075ef;
case 0x4075f1:goto L4075f1;
case 0x4075f7:c.instructions+=4;goto B4075f7;
case 0x4075fd:c.instructions+=3;goto B4075fd;
case 0x4075ff:c.instructions+=2;goto B4075ff;
case 0x407602:c.instructions+=1;goto B407602;
case 0x407604:goto L407604;
case 0x407606:goto L407606;
case 0x40760c:c.instructions+=2;goto B40760c;
case 0x40760e:c.instructions+=1;goto B40760e;
case 0x407610:goto L407610;
case 0x407611:c.instructions+=1;goto B407611;
case 0x407614:goto L407614;
case 0x407619:c.instructions+=4;goto B407619;
case 0x40761b:c.instructions+=3;goto B40761b;
case 0x40761d:c.instructions+=2;goto B40761d;
case 0x40761f:c.instructions+=1;goto B40761f;
case 0x407621:goto L407621;
case 0x407627:c.instructions+=2;goto B407627;
case 0x407628:c.instructions+=1;goto B407628;
case 0x40762d:goto L40762d;
case 0x40762f:c.instructions+=1;goto B40762f;
case 0x407631:goto L407631;
case 0x407638:c.instructions+=1;goto B407638;
case 0x40763a:goto L40763a;
case 0x407640:c.instructions+=2;goto B407640;
case 0x407641:c.instructions+=1;goto B407641;
case 0x407646:goto L407646;
case 0x407649:c.instructions+=1;goto B407649;
case 0x40764b:goto L40764b;
case 0x407651:c.instructions+=2;goto B407651;
case 0x407653:c.instructions+=1;goto B407653;
case 0x407655:goto L407655;
case 0x40765c:goto L40765c;
case 0x40765d:c.instructions+=2;goto B40765d;
case 0x407660:c.instructions+=1;goto B407660;
case 0x407662:goto L407662;
case 0x407668:c.instructions+=4;goto B407668;
case 0x40766a:c.instructions+=3;goto B40766a;
case 0x40766c:c.instructions+=2;goto B40766c;
case 0x40766d:c.instructions+=1;goto B40766d;
case 0x40766f:goto L40766f;
case 0x407671:c.instructions+=3;goto B407671;
case 0x407674:c.instructions+=2;goto B407674;
case 0x40767a:c.instructions+=1;goto B40767a;
case 0x407680:goto L407680;
case 0x407685:c.instructions+=3;goto B407685;
case 0x407687:c.instructions+=2;goto B407687;
case 0x407689:c.instructions+=1;goto B407689;
case 0x40768b:goto L40768b;
case 0x407691:c.instructions+=2;goto B407691;
case 0x407693:c.instructions+=1;goto B407693;
case 0x407695:goto L407695;
case 0x40769b:c.instructions+=1;goto B40769b;
case 0x40769d:goto L40769d;
case 0x4076a3:goto L4076a3;
case 0x4076a5:goto L4076a5;
case 0x4076a6:c.instructions+=3;goto B4076a6;
case 0x4076a9:c.instructions+=2;goto B4076a9;
case 0x4076ac:c.instructions+=1;goto B4076ac;
case 0x4076ae:goto L4076ae;
case 0x4076af:goto L4076af;
case 0x4076b0:c.instructions+=3;goto B4076b0;
case 0x4076b1:c.instructions+=2;goto B4076b1;
case 0x4076b2:c.instructions+=1;goto B4076b2;
case 0x4076c0:goto L4076c0;
case 0x4076c2:c.instructions+=25;goto B4076c2;
case 0x4076c8:c.instructions+=24;goto B4076c8;
case 0x4076ce:c.instructions+=23;goto B4076ce;
case 0x4076d0:c.instructions+=22;goto B4076d0;
case 0x4076d6:c.instructions+=21;goto B4076d6;
case 0x4076dc:c.instructions+=20;goto B4076dc;
case 0x4076e2:c.instructions+=19;goto B4076e2;
case 0x4076e8:c.instructions+=18;goto B4076e8;
case 0x4076ee:c.instructions+=17;goto B4076ee;
case 0x4076f4:c.instructions+=16;goto B4076f4;
case 0x4076fa:c.instructions+=15;goto B4076fa;
case 0x407700:c.instructions+=14;goto B407700;
case 0x407706:c.instructions+=13;goto B407706;
case 0x40770c:c.instructions+=12;goto B40770c;
case 0x407712:c.instructions+=11;goto B407712;
case 0x407718:c.instructions+=10;goto B407718;
case 0x40771e:c.instructions+=9;goto B40771e;
case 0x407724:c.instructions+=8;goto B407724;
case 0x40772a:c.instructions+=7;goto B40772a;
case 0x407730:c.instructions+=6;goto B407730;
case 0x407736:c.instructions+=5;goto B407736;
case 0x40773c:c.instructions+=4;goto B40773c;
case 0x407742:c.instructions+=3;goto B407742;
case 0x407748:c.instructions+=2;goto B407748;
case 0x40774e:c.instructions+=1;goto B40774e;
case 0x407750:goto L407750;
case 0x407754:c.instructions+=4;goto B407754;
case 0x40775a:c.instructions+=3;goto B40775a;
case 0x40775e:c.instructions+=2;goto B40775e;
case 0x407760:c.instructions+=1;goto B407760;
case 0x407762:goto L407762;
case 0x407763:c.instructions+=1;goto B407763;
case 0x407765:goto L407765;
case 0x407769:c.instructions+=3;goto B407769;
case 0x40776f:c.instructions+=2;goto B40776f;
case 0x407775:c.instructions+=1;goto B407775;
case 0x407777:goto L407777;
case 0x40777b:c.instructions+=2;goto B40777b;
case 0x407781:c.instructions+=1;goto B407781;
case 0x407787:goto L407787;
case 0x40778d:c.instructions+=2;goto B40778d;
case 0x40778f:c.instructions+=1;goto B40778f;
case 0x407791:goto L407791;
case 0x407797:goto L407797;
case 0x40779a:c.instructions+=1;goto B40779a;
case 0x40779c:goto L40779c;
case 0x4077a6:c.instructions+=1;goto B4077a6;
case 0x4077a7:goto L4077a7;
case 0x4077aa:c.instructions+=6;goto B4077aa;
case 0x4077ae:c.instructions+=5;goto B4077ae;
case 0x4077b2:c.instructions+=4;goto B4077b2;
case 0x4077b8:c.instructions+=3;goto B4077b8;
case 0x4077be:c.instructions+=2;goto B4077be;
case 0x4077c4:c.instructions+=1;goto B4077c4;
case 0x4077d0:goto L4077d0;
case 0x4077d1:c.instructions+=4;goto B4077d1;
case 0x4077d5:c.instructions+=3;goto B4077d5;
case 0x4077db:c.instructions+=2;goto B4077db;
case 0x4077dd:c.instructions+=1;goto B4077dd;
case 0x4077df:goto L4077df;
case 0x4077e9:c.instructions+=2;goto B4077e9;
case 0x4077ea:c.instructions+=1;goto B4077ea;
case 0x4077eb:goto L4077eb;
case 0x4077ef:c.instructions+=3;goto B4077ef;
case 0x4077f4:c.instructions+=2;goto B4077f4;
case 0x4077f5:c.instructions+=1;goto B4077f5;
case 0x4077f7:goto L4077f7;
case 0x4077f8:c.instructions+=1;goto B4077f8;
case 0x4077fa:goto L4077fa;
case 0x407800:c.instructions+=3;goto B407800;
case 0x407807:c.instructions+=2;goto B407807;
case 0x40780c:c.instructions+=1;goto B40780c;
case 0x40780e:goto L40780e;
case 0x407810:c.instructions+=3;goto B407810;
case 0x407814:c.instructions+=2;goto B407814;
case 0x407818:c.instructions+=1;goto B407818;
case 0x40781a:goto L40781a;
case 0x407820:goto L407820;
case 0x407826:c.instructions+=5;goto B407826;
case 0x407828:c.instructions+=4;goto B407828;
case 0x40782a:c.instructions+=3;goto B40782a;
case 0x40782c:c.instructions+=2;goto B40782c;
case 0x407832:c.instructions+=1;goto B407832;
case 0x407837:goto L407837;
case 0x407839:c.instructions+=2;goto B407839;
case 0x40783b:c.instructions+=1;goto B40783b;
case 0x40783d:goto L40783d;
case 0x407843:c.instructions+=2;goto B407843;
case 0x407844:c.instructions+=1;goto B407844;
case 0x407849:goto L407849;
case 0x40784c:c.instructions+=2;goto B40784c;
case 0x40784e:c.instructions+=1;goto B40784e;
case 0x407850:goto L407850;
case 0x407853:goto L407853;
case 0x407859:c.instructions+=1;goto B407859;
case 0x40785b:goto L40785b;
case 0x407862:c.instructions+=1;goto B407862;
case 0x407864:goto L407864;
case 0x40786a:c.instructions+=1;goto B40786a;
case 0x40786c:goto L40786c;
case 0x407870:c.instructions+=1;goto B407870;
case 0x407876:goto L407876;
case 0x40787c:c.instructions+=3;goto B40787c;
case 0x40787e:c.instructions+=2;goto B40787e;
case 0x40787f:c.instructions+=1;goto B40787f;
case 0x407881:goto L407881;
case 0x407887:goto L407887;
case 0x40788a:c.instructions+=6;goto B40788a;
case 0x40788e:c.instructions+=5;goto B40788e;
case 0x407892:c.instructions+=4;goto B407892;
case 0x407898:c.instructions+=3;goto B407898;
case 0x40789e:c.instructions+=2;goto B40789e;
case 0x40789f:c.instructions+=1;goto B40789f;
case 0x4078a0:goto L4078a0;
case 0x4078a4:c.instructions+=6;goto B4078a4;
case 0x4078aa:c.instructions+=5;goto B4078aa;
case 0x4078ad:c.instructions+=4;goto B4078ad;
case 0x4078b4:c.instructions+=3;goto B4078b4;
case 0x4078ba:c.instructions+=2;goto B4078ba;
case 0x4078bd:c.instructions+=1;goto B4078bd;
case 0x4078bf:goto L4078bf;
case 0x4078c1:goto L4078c1;
case 0x4078c3:c.instructions+=1;goto B4078c3;
case 0x4078c9:goto L4078c9;
case 0x4078cf:c.instructions+=2;goto B4078cf;
case 0x4078d1:c.instructions+=1;goto B4078d1;
case 0x4078d7:goto L4078d7;
case 0x4078d8:c.instructions+=4;goto B4078d8;
case 0x4078dc:c.instructions+=3;goto B4078dc;
case 0x4078e2:c.instructions+=2;goto B4078e2;
case 0x4078e5:c.instructions+=1;goto B4078e5;
case 0x4078eb:goto L4078eb;
case 0x4078f2:goto L4078f2;
case 0x4078f6:c.instructions+=3;goto B4078f6;
case 0x4078f8:c.instructions+=2;goto B4078f8;
case 0x4078fe:c.instructions+=1;goto B4078fe;
case 0x407900:goto L407900;
case 0x407902:c.instructions+=1;goto B407902;
case 0x407904:goto L407904;
case 0x407909:c.instructions+=1;goto B407909;
case 0x40790f:goto L40790f;
case 0x407915:c.instructions+=2;goto B407915;
case 0x407916:c.instructions+=1;goto B407916;
case 0x407917:goto L407917;
case 0x407919:c.instructions+=1;goto B407919;
case 0x40791b:goto L40791b;
case 0x407921:c.instructions+=2;goto B407921;
case 0x407923:c.instructions+=1;goto B407923;
case 0x407925:goto L407925;
case 0x40792c:c.instructions+=1;goto B40792c;
case 0x407936:goto L407936;
case 0x40793d:c.instructions+=2;goto B40793d;
case 0x40793e:c.instructions+=1;goto B40793e;
case 0x40793f:goto L40793f;
case 0x407944:c.instructions+=7;goto B407944;
case 0x407948:c.instructions+=6;goto B407948;
case 0x407949:c.instructions+=5;goto B407949;
case 0x40794d:c.instructions+=4;goto B40794d;
case 0x407953:c.instructions+=3;goto B407953;
case 0x407959:c.instructions+=2;goto B407959;
case 0x40795f:c.instructions+=1;goto B40795f;
case 0x407960:goto L407960;
case 0x407965:c.instructions+=7;goto B407965;
case 0x407969:c.instructions+=6;goto B407969;
case 0x40796a:c.instructions+=5;goto B40796a;
case 0x40796e:c.instructions+=4;goto B40796e;
case 0x407974:c.instructions+=3;goto B407974;
case 0x40797a:c.instructions+=2;goto B40797a;
case 0x407980:c.instructions+=1;goto B407980;
case 0x407981:goto L407981;
case 0x407986:c.instructions+=6;goto B407986;
case 0x40798a:c.instructions+=5;goto B40798a;
case 0x40798e:c.instructions+=4;goto B40798e;
case 0x407994:c.instructions+=3;goto B407994;
case 0x40799a:c.instructions+=2;goto B40799a;
case 0x4079a0:c.instructions+=1;goto B4079a0;
case 0x4079a2:goto L4079a2;
case 0x4079a5:c.instructions+=1;goto B4079a5;
case 0x4079a7:goto L4079a7;
case 0x4079ac:c.instructions+=5;goto B4079ac;
case 0x4079b0:c.instructions+=4;goto B4079b0;
case 0x4079b4:c.instructions+=3;goto B4079b4;
case 0x4079ba:c.instructions+=2;goto B4079ba;
case 0x4079c0:c.instructions+=1;goto B4079c0;
case 0x4079c6:goto L4079c6;
case 0x4079cc:c.instructions+=5;goto B4079cc;
case 0x4079ce:c.instructions+=4;goto B4079ce;
case 0x4079d4:c.instructions+=3;goto B4079d4;
case 0x4079d6:c.instructions+=2;goto B4079d6;
case 0x4079d9:c.instructions+=1;goto B4079d9;
case 0x4079db:goto L4079db;
case 0x4079e1:c.instructions+=5;goto B4079e1;
case 0x4079e3:c.instructions+=4;goto B4079e3;
case 0x4079e9:c.instructions+=3;goto B4079e9;
case 0x4079eb:c.instructions+=2;goto B4079eb;
case 0x4079ee:c.instructions+=1;goto B4079ee;
case 0x4079f0:goto L4079f0;
case 0x4079f7:goto L4079f7;
case 0x4079f8:goto L4079f8;
case 0x407a30:goto L407a30;
case 0x407a33:c.instructions+=11;goto B407a33;
case 0x407a38:c.instructions+=10;goto B407a38;
case 0x407a39:c.instructions+=9;goto B407a39;
case 0x407a3b:c.instructions+=8;goto B407a3b;
case 0x407a3c:c.instructions+=7;goto B407a3c;
case 0x407a42:c.instructions+=6;goto B407a42;
case 0x407a48:c.instructions+=5;goto B407a48;
case 0x407a4c:c.instructions+=4;goto B407a4c;
case 0x407a51:c.instructions+=3;goto B407a51;
case 0x407a53:c.instructions+=2;goto B407a53;
case 0x407a57:c.instructions+=1;goto B407a57;
case 0x407a59:goto L407a59;
case 0x407a5e:c.instructions+=2;goto B407a5e;
case 0x407a60:c.instructions+=1;goto B407a60;
case 0x407a62:goto L407a62;
case 0x407a67:c.instructions+=2;goto B407a67;
case 0x407a69:c.instructions+=1;goto B407a69;
case 0x407a6b:goto L407a6b;
case 0x407a71:c.instructions+=7;goto B407a71;
case 0x407a77:c.instructions+=6;goto B407a77;
case 0x407a79:c.instructions+=5;goto B407a79;
case 0x407a7f:c.instructions+=4;goto B407a7f;
case 0x407a83:c.instructions+=3;goto B407a83;
case 0x407a89:c.instructions+=2;goto B407a89;
case 0x407a8d:c.instructions+=1;goto B407a8d;
case 0x407a91:goto L407a91;
case 0x407a97:c.instructions+=6;goto B407a97;
case 0x407a9b:c.instructions+=5;goto B407a9b;
case 0x407aa1:c.instructions+=4;goto B407aa1;
case 0x407aa7:c.instructions+=3;goto B407aa7;
case 0x407aa9:c.instructions+=2;goto B407aa9;
case 0x407aac:c.instructions+=1;goto B407aac;
case 0x407aae:goto L407aae;
case 0x407ab2:c.instructions+=5;goto B407ab2;
case 0x407ab4:c.instructions+=4;goto B407ab4;
case 0x407aba:c.instructions+=3;goto B407aba;
case 0x407abc:c.instructions+=2;goto B407abc;
case 0x407abf:c.instructions+=1;goto B407abf;
case 0x407ac1:goto L407ac1;
case 0x407ac9:c.instructions+=2;goto B407ac9;
case 0x407ace:c.instructions+=1;goto B407ace;
case 0x407ad0:goto L407ad0;
case 0x407ad6:c.instructions+=4;goto B407ad6;
case 0x407adc:c.instructions+=3;goto B407adc;
case 0x407ae6:c.instructions+=2;goto B407ae6;
case 0x407aea:c.instructions+=1;goto B407aea;
case 0x407aeb:goto L407aeb;
case 0x407aed:c.instructions+=1;goto B407aed;
case 0x407af2:goto L407af2;
case 0x407af8:c.instructions+=4;goto B407af8;
case 0x407afe:c.instructions+=3;goto B407afe;
case 0x407b00:c.instructions+=2;goto B407b00;
case 0x407b03:c.instructions+=1;goto B407b03;
case 0x407b05:goto L407b05;
case 0x407b0b:c.instructions+=4;goto B407b0b;
case 0x407b11:c.instructions+=3;goto B407b11;
case 0x407b13:c.instructions+=2;goto B407b13;
case 0x407b16:c.instructions+=1;goto B407b16;
case 0x407b18:goto L407b18;
case 0x407b1f:c.instructions+=1;goto B407b1f;
case 0x407b21:goto L407b21;
case 0x407b25:c.instructions+=4;goto B407b25;
case 0x407b2b:c.instructions+=3;goto B407b2b;
case 0x407b2d:c.instructions+=2;goto B407b2d;
case 0x407b30:c.instructions+=1;goto B407b30;
case 0x407b32:goto L407b32;
case 0x407b39:goto L407b39;
case 0x407b3d:c.instructions+=4;goto B407b3d;
case 0x407b41:c.instructions+=3;goto B407b41;
case 0x407b43:c.instructions+=2;goto B407b43;
case 0x407b46:c.instructions+=1;goto B407b46;
case 0x407b48:goto L407b48;
case 0x407b4e:c.instructions+=2;goto B407b4e;
case 0x407b50:c.instructions+=1;goto B407b50;
case 0x407b52:goto L407b52;
case 0x407b56:c.instructions+=4;goto B407b56;
case 0x407b5c:c.instructions+=3;goto B407b5c;
case 0x407b5e:c.instructions+=2;goto B407b5e;
case 0x407b61:c.instructions+=1;goto B407b61;
case 0x407b63:goto L407b63;
case 0x407b67:c.instructions+=4;goto B407b67;
case 0x407b6d:c.instructions+=3;goto B407b6d;
case 0x407b6f:c.instructions+=2;goto B407b6f;
case 0x407b72:c.instructions+=1;goto B407b72;
case 0x407b74:goto L407b74;
case 0x407b78:c.instructions+=4;goto B407b78;
case 0x407b7e:c.instructions+=3;goto B407b7e;
case 0x407b82:c.instructions+=2;goto B407b82;
case 0x407b8a:c.instructions+=1;goto B407b8a;
case 0x407b8c:goto L407b8c;
case 0x407b90:c.instructions+=4;goto B407b90;
case 0x407b96:c.instructions+=3;goto B407b96;
case 0x407b9e:c.instructions+=2;goto B407b9e;
case 0x407ba2:c.instructions+=1;goto B407ba2;
case 0x407ba4:goto L407ba4;
case 0x407ba8:c.instructions+=4;goto B407ba8;
case 0x407bae:c.instructions+=3;goto B407bae;
case 0x407bb4:c.instructions+=2;goto B407bb4;
case 0x407bb8:c.instructions+=1;goto B407bb8;
case 0x407bbc:goto L407bbc;
case 0x407bbe:c.instructions+=5;goto B407bbe;
case 0x407bc2:c.instructions+=4;goto B407bc2;
case 0x407bc8:c.instructions+=3;goto B407bc8;
case 0x407bca:c.instructions+=2;goto B407bca;
case 0x407bcd:c.instructions+=1;goto B407bcd;
case 0x407bcf:goto L407bcf;
case 0x407bd7:goto L407bd7;
case 0x407bdb:c.instructions+=3;goto B407bdb;
case 0x407bdc:c.instructions+=2;goto B407bdc;
case 0x407bde:c.instructions+=1;goto B407bde;
case 0x407be3:goto L407be3;
case 0x407be9:c.instructions+=4;goto B407be9;
case 0x407bef:c.instructions+=3;goto B407bef;
case 0x407bf1:c.instructions+=2;goto B407bf1;
case 0x407bf4:c.instructions+=1;goto B407bf4;
case 0x407bf6:goto L407bf6;
case 0x407bfc:c.instructions+=3;goto B407bfc;
case 0x407bfd:c.instructions+=2;goto B407bfd;
case 0x407c03:c.instructions+=1;goto B407c03;
case 0x407c05:goto L407c05;
case 0x407c06:c.instructions+=2;goto B407c06;
case 0x407c09:c.instructions+=1;goto B407c09;
case 0x407c0a:goto L407c0a;
case 0x407c0c:goto L407c0c;
case 0x407c12:c.instructions+=5;goto B407c12;
case 0x407c18:c.instructions+=4;goto B407c18;
case 0x407c1e:c.instructions+=3;goto B407c1e;
case 0x407c20:c.instructions+=2;goto B407c20;
case 0x407c23:c.instructions+=1;goto B407c23;
case 0x407c25:goto L407c25;
case 0x407c2a:c.instructions+=4;goto B407c2a;
case 0x407c30:c.instructions+=3;goto B407c30;
case 0x407c35:c.instructions+=2;goto B407c35;
case 0x407c36:c.instructions+=1;goto B407c36;
case 0x407c3b:goto L407c3b;
case 0x407c40:c.instructions+=2;goto B407c40;
case 0x407c42:c.instructions+=1;goto B407c42;
case 0x407c44:goto L407c44;
case 0x407c49:c.instructions+=2;goto B407c49;
case 0x407c4b:c.instructions+=1;goto B407c4b;
case 0x407c4d:goto L407c4d;
case 0x407c51:c.instructions+=3;goto B407c51;
case 0x407c52:c.instructions+=2;goto B407c52;
case 0x407c58:c.instructions+=1;goto B407c58;
case 0x407c5d:goto L407c5d;
case 0x407c5f:c.instructions+=1;goto B407c5f;
case 0x407c61:goto L407c61;
case 0x407c67:c.instructions+=6;goto B407c67;
case 0x407c6b:c.instructions+=5;goto B407c6b;
case 0x407c6f:c.instructions+=4;goto B407c6f;
case 0x407c75:c.instructions+=3;goto B407c75;
case 0x407c77:c.instructions+=2;goto B407c77;
case 0x407c7a:c.instructions+=1;goto B407c7a;
case 0x407c7c:goto L407c7c;
case 0x407c80:c.instructions+=5;goto B407c80;
case 0x407c86:c.instructions+=4;goto B407c86;
case 0x407c8a:c.instructions+=3;goto B407c8a;
case 0x407c8c:c.instructions+=2;goto B407c8c;
case 0x407c8f:c.instructions+=1;goto B407c8f;
case 0x407c91:goto L407c91;
case 0x407c93:c.instructions+=1;goto B407c93;
case 0x407c99:goto L407c99;
case 0x407c9d:goto L407c9d;
case 0x407ca1:c.instructions+=5;goto B407ca1;
case 0x407ca7:c.instructions+=4;goto B407ca7;
case 0x407cab:c.instructions+=3;goto B407cab;
case 0x407cad:c.instructions+=2;goto B407cad;
case 0x407cb0:c.instructions+=1;goto B407cb0;
case 0x407cb2:goto L407cb2;
case 0x407cb6:c.instructions+=3;goto B407cb6;
case 0x407cb7:c.instructions+=2;goto B407cb7;
case 0x407cb9:c.instructions+=1;goto B407cb9;
case 0x407cbe:goto L407cbe;
case 0x407cc8:c.instructions+=1;goto B407cc8;
case 0x407ccd:goto L407ccd;
case 0x407cd3:c.instructions+=1;goto B407cd3;
case 0x407cd5:goto L407cd5;
case 0x407cda:c.instructions+=2;goto B407cda;
case 0x407cdc:c.instructions+=1;goto B407cdc;
case 0x407cde:goto L407cde;
case 0x407ce3:c.instructions+=2;goto B407ce3;
case 0x407ce5:c.instructions+=1;goto B407ce5;
case 0x407ce7:goto L407ce7;
case 0x407cec:c.instructions+=2;goto B407cec;
case 0x407cee:c.instructions+=1;goto B407cee;
case 0x407cf0:goto L407cf0;
case 0x407cf4:c.instructions+=3;goto B407cf4;
case 0x407cf5:c.instructions+=2;goto B407cf5;
case 0x407cfa:c.instructions+=1;goto B407cfa;
case 0x407cff:goto L407cff;
case 0x407d03:goto L407d03;
case 0x407d08:c.instructions+=2;goto B407d08;
case 0x407d0a:c.instructions+=1;goto B407d0a;
case 0x407d0c:goto L407d0c;
case 0x407d11:c.instructions+=2;goto B407d11;
case 0x407d13:c.instructions+=1;goto B407d13;
case 0x407d15:goto L407d15;
case 0x407d1b:c.instructions+=2;goto B407d1b;
case 0x407d22:c.instructions+=1;goto B407d22;
case 0x407d24:goto L407d24;
case 0x407d29:c.instructions+=2;goto B407d29;
case 0x407d2b:c.instructions+=1;goto B407d2b;
case 0x407d2d:goto L407d2d;
case 0x407d32:c.instructions+=2;goto B407d32;
case 0x407d34:c.instructions+=1;goto B407d34;
case 0x407d36:goto L407d36;
case 0x407d3b:c.instructions+=2;goto B407d3b;
case 0x407d3d:c.instructions+=1;goto B407d3d;
case 0x407d43:goto L407d43;
case 0x407d49:c.instructions+=12;goto B407d49;
case 0x407d4f:c.instructions+=11;goto B407d4f;
case 0x407d53:c.instructions+=10;goto B407d53;
case 0x407d55:c.instructions+=9;goto B407d55;
case 0x407d59:c.instructions+=8;goto B407d59;
case 0x407d5f:c.instructions+=7;goto B407d5f;
case 0x407d63:c.instructions+=6;goto B407d63;
case 0x407d65:c.instructions+=5;goto B407d65;
case 0x407d69:c.instructions+=4;goto B407d69;
case 0x407d6b:c.instructions+=3;goto B407d6b;
case 0x407d6d:c.instructions+=2;goto B407d6d;
case 0x407d70:c.instructions+=1;goto B407d70;
case 0x407d72:goto L407d72;
case 0x407d74:c.instructions+=1;goto B407d74;
case 0x407d78:goto L407d78;
case 0x407d7c:c.instructions+=4;goto B407d7c;
case 0x407d7e:c.instructions+=3;goto B407d7e;
case 0x407d80:c.instructions+=2;goto B407d80;
case 0x407d83:c.instructions+=1;goto B407d83;
case 0x407d85:goto L407d85;
case 0x407d87:c.instructions+=1;goto B407d87;
case 0x407d8b:goto L407d8b;
case 0x407d8f:c.instructions+=5;goto B407d8f;
case 0x407d95:c.instructions+=4;goto B407d95;
case 0x407d9b:c.instructions+=3;goto B407d9b;
case 0x407d9d:c.instructions+=2;goto B407d9d;
case 0x407da0:c.instructions+=1;goto B407da0;
case 0x407da2:goto L407da2;
case 0x407da8:c.instructions+=4;goto B407da8;
case 0x407dae:c.instructions+=3;goto B407dae;
case 0x407db0:c.instructions+=2;goto B407db0;
case 0x407db3:c.instructions+=1;goto B407db3;
case 0x407db5:goto L407db5;
case 0x407dbb:c.instructions+=1;goto B407dbb;
case 0x407dbd:goto L407dbd;
case 0x407dc3:c.instructions+=1;goto B407dc3;
case 0x407dc9:goto L407dc9;
case 0x407dcf:c.instructions+=8;goto B407dcf;
case 0x407dd2:c.instructions+=7;goto B407dd2;
case 0x407dd8:c.instructions+=6;goto B407dd8;
case 0x407dde:c.instructions+=5;goto B407dde;
case 0x407de0:c.instructions+=4;goto B407de0;
case 0x407de2:c.instructions+=3;goto B407de2;
case 0x407de4:c.instructions+=2;goto B407de4;
case 0x407de7:c.instructions+=1;goto B407de7;
case 0x407de9:goto L407de9;
case 0x407def:c.instructions+=5;goto B407def;
case 0x407df1:c.instructions+=4;goto B407df1;
case 0x407df3:c.instructions+=3;goto B407df3;
case 0x407df5:c.instructions+=2;goto B407df5;
case 0x407df8:c.instructions+=1;goto B407df8;
case 0x407dfa:goto L407dfa;
case 0x407e02:c.instructions+=1;goto B407e02;
case 0x407e04:goto L407e04;
case 0x407e06:goto L407e06;
case 0x407e0a:c.instructions+=4;goto B407e0a;
case 0x407e10:c.instructions+=3;goto B407e10;
case 0x407e12:c.instructions+=2;goto B407e12;
case 0x407e15:c.instructions+=1;goto B407e15;
case 0x407e17:goto L407e17;
case 0x407e1b:c.instructions+=5;goto B407e1b;
case 0x407e21:c.instructions+=4;goto B407e21;
case 0x407e25:c.instructions+=3;goto B407e25;
case 0x407e27:c.instructions+=2;goto B407e27;
case 0x407e2a:c.instructions+=1;goto B407e2a;
case 0x407e2c:goto L407e2c;
case 0x407e2e:c.instructions+=2;goto B407e2e;
case 0x407e36:c.instructions+=1;goto B407e36;
case 0x407e38:goto L407e38;
case 0x407e3e:goto L407e3e;
case 0x407e42:goto L407e42;
case 0x407e46:c.instructions+=3;goto B407e46;
case 0x407e47:c.instructions+=2;goto B407e47;
case 0x407e49:c.instructions+=1;goto B407e49;
case 0x407e4e:goto L407e4e;
case 0x407e54:c.instructions+=2;goto B407e54;
case 0x407e56:c.instructions+=1;goto B407e56;
case 0x407e58:goto L407e58;
case 0x407e5a:c.instructions+=2;goto B407e5a;
case 0x407e5c:c.instructions+=1;goto B407e5c;
case 0x407e5f:goto L407e5f;
case 0x407e64:c.instructions+=1;goto B407e64;
case 0x407e69:goto L407e69;
case 0x407e6b:c.instructions+=1;goto B407e6b;
case 0x407e6d:goto L407e6d;
case 0x407e73:c.instructions+=2;goto B407e73;
case 0x407e76:c.instructions+=1;goto B407e76;
case 0x407e78:goto L407e78;
case 0x407e7a:c.instructions+=2;goto B407e7a;
case 0x407e7c:c.instructions+=1;goto B407e7c;
case 0x407e81:goto L407e81;
case 0x407e86:c.instructions+=2;goto B407e86;
case 0x407e88:c.instructions+=1;goto B407e88;
case 0x407e8d:goto L407e8d;
case 0x407e93:c.instructions+=5;goto B407e93;
case 0x407e99:c.instructions+=4;goto B407e99;
case 0x407e9a:c.instructions+=3;goto B407e9a;
case 0x407e9b:c.instructions+=2;goto B407e9b;
case 0x407e9e:c.instructions+=1;goto B407e9e;
case 0x407eb0:goto L407eb0;
case 0x407eb4:c.instructions+=3;goto B407eb4;
case 0x407eba:c.instructions+=2;goto B407eba;
case 0x407ebc:c.instructions+=1;goto B407ebc;
case 0x407ebe:goto L407ebe;
case 0x407ec8:c.instructions+=1;goto B407ec8;
case 0x407ec9:goto L407ec9;
case 0x407ecd:c.instructions+=2;goto B407ecd;
case 0x407ed3:c.instructions+=1;goto B407ed3;
case 0x407ed5:goto L407ed5;
case 0x407ed6:c.instructions+=1;goto B407ed6;
case 0x407ed8:goto L407ed8;
case 0x407ed9:c.instructions+=1;goto B407ed9;
case 0x407edb:goto L407edb;
case 0x407edf:c.instructions+=2;goto B407edf;
case 0x407ee5:c.instructions+=1;goto B407ee5;
case 0x407ee7:goto L407ee7;
case 0x407eeb:c.instructions+=2;goto B407eeb;
case 0x407ef1:c.instructions+=1;goto B407ef1;
case 0x407ef3:goto L407ef3;
case 0x407ef7:c.instructions+=1;goto B407ef7;
case 0x407efd:goto L407efd;
case 0x407f03:c.instructions+=2;goto B407f03;
case 0x407f05:c.instructions+=1;goto B407f05;
case 0x407f07:goto L407f07;
case 0x407f0d:c.instructions+=3;goto B407f0d;
case 0x407f13:c.instructions+=2;goto B407f13;
case 0x407f15:c.instructions+=1;goto B407f15;
case 0x407f17:goto L407f17;
case 0x407f19:goto L407f19;
case 0x407f1c:c.instructions+=5;goto B407f1c;
case 0x407f20:c.instructions+=4;goto B407f20;
case 0x407f24:c.instructions+=3;goto B407f24;
case 0x407f2a:c.instructions+=2;goto B407f2a;
case 0x407f30:c.instructions+=1;goto B407f30;
case 0x407f40:goto L407f40;
case 0x407f44:c.instructions+=4;goto B407f44;
case 0x407f49:c.instructions+=3;goto B407f49;
case 0x407f4a:c.instructions+=2;goto B407f4a;
case 0x407f4e:c.instructions+=1;goto B407f4e;
case 0x407f50:goto L407f50;
case 0x407f51:c.instructions+=1;goto B407f51;
case 0x407f53:goto L407f53;
case 0x407f58:c.instructions+=8;goto B407f58;
case 0x407f5c:c.instructions+=7;goto B407f5c;
case 0x407f60:c.instructions+=6;goto B407f60;
case 0x407f62:c.instructions+=5;goto B407f62;
case 0x407f68:c.instructions+=4;goto B407f68;
case 0x407f6a:c.instructions+=3;goto B407f6a;
case 0x407f6c:c.instructions+=2;goto B407f6c;
case 0x407f6f:c.instructions+=1;goto B407f6f;
case 0x407f71:goto L407f71;
case 0x407f73:c.instructions+=1;goto B407f73;
case 0x407f79:goto L407f79;
case 0x407f7e:goto L407f7e;
case 0x407f84:c.instructions+=1;goto B407f84;
case 0x407f86:goto L407f86;
case 0x407f8a:c.instructions+=1;goto B407f8a;
case 0x407f90:goto L407f90;
case 0x407f96:c.instructions+=2;goto B407f96;
case 0x407f98:c.instructions+=1;goto B407f98;
case 0x407f9a:goto L407f9a;
case 0x407fa0:goto L407fa0;
case 0x407fa3:c.instructions+=6;goto B407fa3;
case 0x407fa7:c.instructions+=5;goto B407fa7;
case 0x407fab:c.instructions+=4;goto B407fab;
case 0x407fb1:c.instructions+=3;goto B407fb1;
case 0x407fb7:c.instructions+=2;goto B407fb7;
case 0x407fb8:c.instructions+=1;goto B407fb8;
case 0x407fc0:goto L407fc0;
case 0x407fc4:c.instructions+=2;goto B407fc4;
case 0x407fc6:c.instructions+=1;goto B407fc6;
case 0x407fcc:goto L407fcc;
case 0x407fd0:c.instructions+=3;goto B407fd0;
case 0x407fd6:c.instructions+=2;goto B407fd6;
case 0x407fd9:c.instructions+=1;goto B407fd9;
case 0x407fdb:goto L407fdb;
case 0x407fe1:c.instructions+=2;goto B407fe1;
case 0x407fe3:c.instructions+=1;goto B407fe3;
case 0x407fe9:goto L407fe9;
case 0x407fef:c.instructions+=5;goto B407fef;
case 0x407ff5:c.instructions+=4;goto B407ff5;
case 0x407ff8:c.instructions+=3;goto B407ff8;
case 0x407ffe:c.instructions+=2;goto B407ffe;
case 0x407fff:c.instructions+=1;goto B407fff;
default:missing_instruction(c.pc);}
B407003:L407003:{c.instructions+=4;NFSU2_TR(0x407003);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B407006:{NFSU2_TR(0x407006);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407007:{NFSU2_TR(0x407007);
__builtin_memmove((R+4),(R+24),4);
}
B407009:{NFSU2_TR(0x407009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40700eull));
TAIL_STATIC(0x571770u,571);
}
B40700e:L40700e:{c.instructions+=3;NFSU2_TR(0x40700e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40700f:{NFSU2_TR(0x40700f);
__builtin_memmove((R+4),(R+24),4);
}
B407011:{NFSU2_TR(0x407011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407016ull));
TAIL_STATIC(0x571770u,571);
}
B407016:L407016:{c.instructions+=3;NFSU2_TR(0x407016);
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B407019:{NFSU2_TR(0x407019);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40701a:{NFSU2_TR(0x40701a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407003u);}goto L407003;}}
}
B40701c:L40701c:{c.instructions+=4;NFSU2_TR(0x40701c);
u8 U[4];
w4(U+0,u32(0x784514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407021:{NFSU2_TR(0x407021);
u8 U[4];
w4(U+0,u32(0x784530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407026:{NFSU2_TR(0x407026);
__builtin_memmove((R+4),(R+24),4);
}
B407028:{NFSU2_TR(0x407028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40702dull));
TAIL_STATIC(0x402350u,402);
}
B40702d:L40702d:{c.instructions+=3;NFSU2_TR(0x40702d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40702e:{NFSU2_TR(0x40702e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((R+4),(U+0),4);
}
B407034:{NFSU2_TR(0x407034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407039ull));
TAIL_STATIC(0x405d50u,405);
}
B407039:L407039:{c.instructions+=3;NFSU2_TR(0x407039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40703a:{NFSU2_TR(0x40703a);
__builtin_memmove((R+4),(R+28),4);
}
B40703c:{NFSU2_TR(0x40703c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407041ull));
TAIL_STATIC(0x5eb860u,5eb);
}
B407041:L407041:{c.instructions+=2;NFSU2_TR(0x407041);
__builtin_memmove((R+4),(R+24),4);
}
B407043:{NFSU2_TR(0x407043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407048ull));
TAIL_STATIC(0x578d90u,578);
}
B407048:L407048:{c.instructions+=5;NFSU2_TR(0x407048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B407049:{NFSU2_TR(0x407049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40704a:{NFSU2_TR(0x40704a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40704b:{NFSU2_TR(0x40704b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40704c:{NFSU2_TR(0x40704c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407050:L407050:{c.instructions+=6;NFSU2_TR(0x407050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407051:{NFSU2_TR(0x407051);
__builtin_memmove((R+24),(R+4),4);
}
B407053:{NFSU2_TR(0x407053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407059:{NFSU2_TR(0x407059);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40705e:{NFSU2_TR(0x40705e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40705f:{NFSU2_TR(0x40705f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407064ull));
TAIL_STATIC(0x57c330u,57c);
}
B407064:L407064:{c.instructions+=4;NFSU2_TR(0x407064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40706a:{NFSU2_TR(0x40706a);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40706f:{NFSU2_TR(0x40706f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407070:{NFSU2_TR(0x407070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407075ull));
TAIL_STATIC(0x57c330u,57c);
}
B407075:L407075:{c.instructions+=4;NFSU2_TR(0x407075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40707b:{NFSU2_TR(0x40707b);
u8 U[4];
w4(U+0,u32(0xa7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407080:{NFSU2_TR(0x407080);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407081:{NFSU2_TR(0x407081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407086ull));
TAIL_STATIC(0x57c330u,57c);
}
B407086:L407086:{c.instructions+=4;NFSU2_TR(0x407086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40708c:{NFSU2_TR(0x40708c);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407091:{NFSU2_TR(0x407091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407092:{NFSU2_TR(0x407092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407097ull));
TAIL_STATIC(0x57c330u,57c);
}
B407097:L407097:{c.instructions+=4;NFSU2_TR(0x407097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40709d:{NFSU2_TR(0x40709d);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070a2:{NFSU2_TR(0x4070a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070a3:{NFSU2_TR(0x4070a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4070a8ull));
TAIL_STATIC(0x57c330u,57c);
}
B4070a8:L4070a8:{c.instructions+=4;NFSU2_TR(0x4070a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4070ae:{NFSU2_TR(0x4070ae);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070b3:{NFSU2_TR(0x4070b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070b4:{NFSU2_TR(0x4070b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4070b9ull));
TAIL_STATIC(0x57c330u,57c);
}
B4070b9:L4070b9:{c.instructions+=4;NFSU2_TR(0x4070b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4070bf:{NFSU2_TR(0x4070bf);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070c4:{NFSU2_TR(0x4070c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070c5:{NFSU2_TR(0x4070c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4070caull));
TAIL_STATIC(0x57c330u,57c);
}
B4070ca:L4070ca:{c.instructions+=4;NFSU2_TR(0x4070ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4070d0:{NFSU2_TR(0x4070d0);
u8 U[4];
w4(U+0,u32(0xacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070d5:{NFSU2_TR(0x4070d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070d6:{NFSU2_TR(0x4070d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4070dbull));
TAIL_STATIC(0x57c330u,57c);
}
B4070db:L4070db:{c.instructions+=5;NFSU2_TR(0x4070db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4070e1:{NFSU2_TR(0x4070e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4070e4:{NFSU2_TR(0x4070e4);
u8 U[4];
w4(U+0,u32(0xadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070e9:{NFSU2_TR(0x4070e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070ea:{NFSU2_TR(0x4070ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4070efull));
TAIL_STATIC(0x57c330u,57c);
}
B4070ef:L4070ef:{c.instructions+=4;NFSU2_TR(0x4070ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4070f5:{NFSU2_TR(0x4070f5);
u8 U[4];
w4(U+0,u32(0xaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070fa:{NFSU2_TR(0x4070fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4070fb:{NFSU2_TR(0x4070fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407100ull));
TAIL_STATIC(0x57c330u,57c);
}
B407100:L407100:{c.instructions+=3;NFSU2_TR(0x407100);
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
B407103:{NFSU2_TR(0x407103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B407104:{NFSU2_TR(0x407104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407110:L407110:{c.instructions+=5;NFSU2_TR(0x407110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407111:{NFSU2_TR(0x407111);
__builtin_memmove((R+24),(R+4),4);
}
B407113:{NFSU2_TR(0x407113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407119:{NFSU2_TR(0x407119);
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
B40711b:{NFSU2_TR(0x40711b);
if(r1(R+518)){{goto L40727e;}}
}
B407121:L407121:{c.instructions+=3;NFSU2_TR(0x407121);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407127:{NFSU2_TR(0x407127);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407129:{NFSU2_TR(0x407129);
if(r1(R+518)){{goto L407150;}}
}
B40712b:L40712b:{c.instructions+=4;NFSU2_TR(0x40712b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407131:{NFSU2_TR(0x407131);
u8 U[4];
w4(U+0,u32(0x8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407136:{NFSU2_TR(0x407136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407137:{NFSU2_TR(0x407137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40713cull));
TAIL_STATIC(0x57c330u,57c);
}
B40713c:L40713c:{c.instructions+=4;NFSU2_TR(0x40713c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407142:{NFSU2_TR(0x407142);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407147:{NFSU2_TR(0x407147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407148:{NFSU2_TR(0x407148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40714dull));
TAIL_STATIC(0x57c330u,57c);
}
B40714d:L40714d:{c.instructions+=1;NFSU2_TR(0x40714d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B407150:L407150:{c.instructions+=4;NFSU2_TR(0x407150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407156:{NFSU2_TR(0x407156);
u8 U[4];
w4(U+0,u32(0x91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40715b:{NFSU2_TR(0x40715b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40715c:{NFSU2_TR(0x40715c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407161ull));
TAIL_STATIC(0x57c330u,57c);
}
B407161:L407161:{c.instructions+=4;NFSU2_TR(0x407161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407167:{NFSU2_TR(0x407167);
u8 U[4];
w4(U+0,u32(0x92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40716c:{NFSU2_TR(0x40716c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40716d:{NFSU2_TR(0x40716d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407172ull));
TAIL_STATIC(0x57c330u,57c);
}
B407172:L407172:{c.instructions+=4;NFSU2_TR(0x407172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407178:{NFSU2_TR(0x407178);
u8 U[4];
w4(U+0,u32(0x93ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40717d:{NFSU2_TR(0x40717d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40717e:{NFSU2_TR(0x40717e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407183ull));
TAIL_STATIC(0x57c330u,57c);
}
B407183:L407183:{c.instructions+=4;NFSU2_TR(0x407183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407189:{NFSU2_TR(0x407189);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40718e:{NFSU2_TR(0x40718e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40718f:{NFSU2_TR(0x40718f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407194ull));
TAIL_STATIC(0x57c330u,57c);
}
B407194:L407194:{c.instructions+=4;NFSU2_TR(0x407194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40719a:{NFSU2_TR(0x40719a);
u8 U[4];
w4(U+0,u32(0x95ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40719f:{NFSU2_TR(0x40719f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071a0:{NFSU2_TR(0x4071a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071a5ull));
TAIL_STATIC(0x57c330u,57c);
}
B4071a5:L4071a5:{c.instructions+=4;NFSU2_TR(0x4071a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4071ab:{NFSU2_TR(0x4071ab);
u8 U[4];
w4(U+0,u32(0x96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071b0:{NFSU2_TR(0x4071b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071b1:{NFSU2_TR(0x4071b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071b6ull));
TAIL_STATIC(0x57c330u,57c);
}
B4071b6:L4071b6:{c.instructions+=4;NFSU2_TR(0x4071b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4071bc:{NFSU2_TR(0x4071bc);
u8 U[4];
w4(U+0,u32(0x97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071c1:{NFSU2_TR(0x4071c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071c2:{NFSU2_TR(0x4071c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071c7ull));
TAIL_STATIC(0x57c330u,57c);
}
B4071c7:L4071c7:{c.instructions+=4;NFSU2_TR(0x4071c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4071cd:{NFSU2_TR(0x4071cd);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071d2:{NFSU2_TR(0x4071d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071d3:{NFSU2_TR(0x4071d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071d8ull));
TAIL_STATIC(0x57c330u,57c);
}
B4071d8:L4071d8:{c.instructions+=5;NFSU2_TR(0x4071d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4071de:{NFSU2_TR(0x4071de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4071e1:{NFSU2_TR(0x4071e1);
u8 U[4];
w4(U+0,u32(0x99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071e6:{NFSU2_TR(0x4071e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071e7:{NFSU2_TR(0x4071e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071ecull));
TAIL_STATIC(0x57c330u,57c);
}
B4071ec:L4071ec:{c.instructions+=4;NFSU2_TR(0x4071ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4071f2:{NFSU2_TR(0x4071f2);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071f7:{NFSU2_TR(0x4071f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4071f8:{NFSU2_TR(0x4071f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4071fdull));
TAIL_STATIC(0x57c330u,57c);
}
B4071fd:L4071fd:{c.instructions+=4;NFSU2_TR(0x4071fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407203:{NFSU2_TR(0x407203);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407208:{NFSU2_TR(0x407208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407209:{NFSU2_TR(0x407209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40720eull));
TAIL_STATIC(0x57c330u,57c);
}
B40720e:L40720e:{c.instructions+=4;NFSU2_TR(0x40720e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407214:{NFSU2_TR(0x407214);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407219:{NFSU2_TR(0x407219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40721a:{NFSU2_TR(0x40721a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40721full));
TAIL_STATIC(0x57c330u,57c);
}
B40721f:L40721f:{c.instructions+=4;NFSU2_TR(0x40721f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407225:{NFSU2_TR(0x407225);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40722a:{NFSU2_TR(0x40722a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40722b:{NFSU2_TR(0x40722b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407230ull));
TAIL_STATIC(0x57c330u,57c);
}
B407230:L407230:{c.instructions+=4;NFSU2_TR(0x407230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407236:{NFSU2_TR(0x407236);
u8 U[4];
w4(U+0,u32(0x9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40723b:{NFSU2_TR(0x40723b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40723c:{NFSU2_TR(0x40723c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407241ull));
TAIL_STATIC(0x57c330u,57c);
}
B407241:L407241:{c.instructions+=4;NFSU2_TR(0x407241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407247:{NFSU2_TR(0x407247);
u8 U[4];
w4(U+0,u32(0x9full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40724c:{NFSU2_TR(0x40724c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40724d:{NFSU2_TR(0x40724d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407252ull));
TAIL_STATIC(0x57c330u,57c);
}
B407252:L407252:{c.instructions+=4;NFSU2_TR(0x407252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407258:{NFSU2_TR(0x407258);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40725d:{NFSU2_TR(0x40725d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40725e:{NFSU2_TR(0x40725e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407263ull));
TAIL_STATIC(0x57c330u,57c);
}
B407263:L407263:{c.instructions+=3;NFSU2_TR(0x407263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B407266:{NFSU2_TR(0x407266);
__builtin_memmove((R+4),(R+24),4);
}
B407268:{NFSU2_TR(0x407268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40726dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407050u);}goto L407050;}
}
B40726d:L40726d:{c.instructions+=3;NFSU2_TR(0x40726d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40726f:{NFSU2_TR(0x40726f);
__builtin_memmove((R+4),(R+24),4);
}
B407271:{NFSU2_TR(0x407271);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407274ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B407274:L407274:{c.instructions+=1;NFSU2_TR(0x407274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40727e:L40727e:{c.instructions+=2;NFSU2_TR(0x40727e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40727f:{NFSU2_TR(0x40727f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407280:L407280:{c.instructions+=4;NFSU2_TR(0x407280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407284:{NFSU2_TR(0x407284);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B407287:{NFSU2_TR(0x407287);
w4(R+0,u32(0x1ull));
}
B40728c:{NFSU2_TR(0x40728c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4072ac;}}
}
B40728e:L40728e:{c.instructions+=5;NFSU2_TR(0x40728e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407294:{NFSU2_TR(0x407294);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40729a:{NFSU2_TR(0x40729a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4072a0:{NFSU2_TR(0x4072a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4072aa:{NFSU2_TR(0x4072aa);
{goto L4072ea;}
}
B4072ac:L4072ac:{c.instructions+=2;NFSU2_TR(0x4072ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4072ae:{NFSU2_TR(0x4072ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4072ca;}}
}
B4072b0:L4072b0:{c.instructions+=5;NFSU2_TR(0x4072b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4072b6:{NFSU2_TR(0x4072b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4072bc:{NFSU2_TR(0x4072bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4072c2:{NFSU2_TR(0x4072c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4072c8:{NFSU2_TR(0x4072c8);
{goto L4072ea;}
}
B4072ca:L4072ca:{c.instructions+=3;NFSU2_TR(0x4072ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4072cc:{NFSU2_TR(0x4072cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4072d6:{NFSU2_TR(0x4072d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4072e0;}}
}
B4072d8:L4072d8:{c.instructions+=2;NFSU2_TR(0x4072d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4072de:{NFSU2_TR(0x4072de);
{goto L4072ea;}
}
B4072e0:L4072e0:{c.instructions+=1;NFSU2_TR(0x4072e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4072ea:L4072ea:{c.instructions+=3;NFSU2_TR(0x4072ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4072f0:{NFSU2_TR(0x4072f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
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
B4072f3:{NFSU2_TR(0x4072f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407307;}}
}
B4072f5:L4072f5:{c.instructions+=5;NFSU2_TR(0x4072f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4072f8:{NFSU2_TR(0x4072f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4072fb:{NFSU2_TR(0x4072fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407301:{NFSU2_TR(0x407301);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407304:{NFSU2_TR(0x407304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407307:L407307:{c.instructions+=2;NFSU2_TR(0x407307);
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
B407309:{NFSU2_TR(0x407309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407310:L407310:{c.instructions+=5;NFSU2_TR(0x407310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407311:{NFSU2_TR(0x407311);
__builtin_memmove((R+24),(R+4),4);
}
B407313:{NFSU2_TR(0x407313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407319:{NFSU2_TR(0x407319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40731c:{NFSU2_TR(0x40731c);
if(r1(R+518)){{goto L40732f;}}
}
B40731e:L40731e:{c.instructions+=2;NFSU2_TR(0x40731e);
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
B407321:{NFSU2_TR(0x407321);
if(r1(R+518)){{goto L40732f;}}
}
B407323:L407323:{c.instructions+=3;NFSU2_TR(0x407323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40732d:{NFSU2_TR(0x40732d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40732e:{NFSU2_TR(0x40732e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40732f:L40732f:{c.instructions+=4;NFSU2_TR(0x40732f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407339:{NFSU2_TR(0x407339);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B40733e:{NFSU2_TR(0x40733e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407340:{NFSU2_TR(0x407340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40734b;}}
}
B407342:L407342:{c.instructions+=3;NFSU2_TR(0x407342);
__builtin_memmove((R+0),gp(0x890108),4);
}
B407347:{NFSU2_TR(0x407347);
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
B407349:{NFSU2_TR(0x407349);
if(r1(R+518)){{goto L407368;}}
}
B40734b:L40734b:{c.instructions+=4;NFSU2_TR(0x40734b);
{u32 ea_=u32(u32(7879428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407351:{NFSU2_TR(0x407351);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407357:{NFSU2_TR(0x407357);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40735d:{NFSU2_TR(0x40735d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407362ull));
TAIL_STATIC(0x75bed4u,75b);
}
B407362:L407362:{c.instructions+=1;NFSU2_TR(0x407362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407368:L407368:{c.instructions+=2;NFSU2_TR(0x407368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B407369:{NFSU2_TR(0x407369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407370:L407370:{c.instructions+=4;NFSU2_TR(0x407370);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407374:{NFSU2_TR(0x407374);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407376:{NFSU2_TR(0x407376);
w1(R+8,u8(0x1ull));
}
B407378:{NFSU2_TR(0x407378);
if(r1(R+518)){{goto L407382;}}
}
B40737a:L40737a:{c.instructions+=2;NFSU2_TR(0x40737a);
{u32 ea_=u32(u32(7879444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407380:{NFSU2_TR(0x407380);
{goto L407388;}
}
B407382:L407382:{c.instructions+=1;NFSU2_TR(0x407382);
{u32 ea_=u32(u32(7879448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407388:L407388:{c.instructions+=3;NFSU2_TR(0x407388);
__builtin_memmove((R+0),gp(0x7e94a0),1);
}
B40738d:{NFSU2_TR(0x40738d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40738f:{NFSU2_TR(0x40738f);
if(r1(R+518)){{goto L40739e;}}
}
B407391:L407391:{c.instructions+=4;NFSU2_TR(0x407391);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B407397:{NFSU2_TR(0x407397);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407399:{NFSU2_TR(0x407399);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40739c:{NFSU2_TR(0x40739c);
if(r1(R+514)){{goto L4073a0;}}
}
B40739e:L40739e:{c.instructions+=1;NFSU2_TR(0x40739e);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4073a0:L4073a0:{c.instructions+=4;NFSU2_TR(0x4073a0);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4073a6:{NFSU2_TR(0x4073a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4073a8:{NFSU2_TR(0x4073a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4073ab:{NFSU2_TR(0x4073ab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4073ce;}}
}
B4073ad:L4073ad:{c.instructions+=8;NFSU2_TR(0x4073ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4073b3:{NFSU2_TR(0x4073b3);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4073b9:{NFSU2_TR(0x4073b9);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4073bf:{NFSU2_TR(0x4073bf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4073c1:{NFSU2_TR(0x4073c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4073c3:{NFSU2_TR(0x4073c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4073c5:{NFSU2_TR(0x4073c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4073c8:{NFSU2_TR(0x4073c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4073d0;}}
}
B4073ca:L4073ca:{c.instructions+=2;NFSU2_TR(0x4073ca);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4073cc:{NFSU2_TR(0x4073cc);
{goto L4073d0;}
}
B4073ce:L4073ce:{c.instructions+=1;NFSU2_TR(0x4073ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4073d0:L4073d0:{c.instructions+=3;NFSU2_TR(0x4073d0);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4073d5:{NFSU2_TR(0x4073d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4073d7:{NFSU2_TR(0x4073d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4073f4;}}
}
B4073d9:L4073d9:{c.instructions+=3;NFSU2_TR(0x4073d9);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4073de:{NFSU2_TR(0x4073de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4073e0:{NFSU2_TR(0x4073e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4073f4;}}
}
B4073e2:L4073e2:{c.instructions+=3;NFSU2_TR(0x4073e2);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B4073e7:{NFSU2_TR(0x4073e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4073e9:{NFSU2_TR(0x4073e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4073f4;}}
}
B4073eb:L4073eb:{c.instructions+=3;NFSU2_TR(0x4073eb);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B4073f0:{NFSU2_TR(0x4073f0);
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
B4073f2:{NFSU2_TR(0x4073f2);
if(r1(R+518)){{goto L4073f9;}}
}
B4073f4:L4073f4:{c.instructions+=2;NFSU2_TR(0x4073f4);
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
B4073f6:{NFSU2_TR(0x4073f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4073f9:L4073f9:{c.instructions+=2;NFSU2_TR(0x4073f9);
__builtin_memmove((R+0),(R+8),1);
}
B4073fb:{NFSU2_TR(0x4073fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407400:L407400:{c.instructions+=7;NFSU2_TR(0x407400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407401:{NFSU2_TR(0x407401);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407402:{NFSU2_TR(0x407402);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407403:{NFSU2_TR(0x407403);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B407405:{NFSU2_TR(0x407405);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407406:{NFSU2_TR(0x407406);
__builtin_memmove((R+24),(R+4),4);
}
B407408:{NFSU2_TR(0x407408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40740dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407370u);}goto L407370;}
}
B40740d:L40740d:{c.instructions+=2;NFSU2_TR(0x40740d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40740f:{NFSU2_TR(0x40740f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407457;}}
}
B407411:L407411:{c.instructions+=3;NFSU2_TR(0x407411);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407417:{NFSU2_TR(0x407417);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407419:{NFSU2_TR(0x407419);
if(r1(R+518)){{goto L407457;}}
}
B40741b:L40741b:{c.instructions+=15;NFSU2_TR(0x40741b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40741d:{NFSU2_TR(0x40741d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((R+8),(U+0),4);
}
B407423:{NFSU2_TR(0x407423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B407425:{NFSU2_TR(0x407425);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407428:{NFSU2_TR(0x407428);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40742b:{NFSU2_TR(0x40742b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40742e:{NFSU2_TR(0x40742e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((R+8),(U+0),4);
}
B407434:{NFSU2_TR(0x407434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B407436:{NFSU2_TR(0x407436);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407439:{NFSU2_TR(0x407439);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40743c:{NFSU2_TR(0x40743c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40743f:{NFSU2_TR(0x40743f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407445:{NFSU2_TR(0x407445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40744b:{NFSU2_TR(0x40744b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407451:{NFSU2_TR(0x407451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407457:L407457:{c.instructions+=4;NFSU2_TR(0x407457);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40745d:{NFSU2_TR(0x40745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407463:{NFSU2_TR(0x407463);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B407465:{NFSU2_TR(0x407465);
if(r1(R+518)){{goto L4074c4;}}
}
B407467:L407467:{c.instructions+=2;NFSU2_TR(0x407467);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40746c:{NFSU2_TR(0x40746c);
if(r1(R+518)){{goto L4074c4;}}
}
B40746e:L40746e:{c.instructions+=9;NFSU2_TR(0x40746e);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B407473:{NFSU2_TR(0x407473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B407479:{NFSU2_TR(0x407479);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40747d:{NFSU2_TR(0x40747d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407481:{NFSU2_TR(0x407481);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407487:{NFSU2_TR(0x407487);
{u32 ea_=u32(u32(7879440u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40748d:{NFSU2_TR(0x40748d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40748f:{NFSU2_TR(0x40748f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407492:{NFSU2_TR(0x407492);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4074c4;}}
}
B407494:L407494:{c.instructions+=3;NFSU2_TR(0x407494);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407496:{NFSU2_TR(0x407496);
__builtin_memmove((R+4),(R+24),4);
}
B407498:{NFSU2_TR(0x407498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40749dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407370u);}goto L407370;}
}
B40749d:L40749d:{c.instructions+=2;NFSU2_TR(0x40749d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40749f:{NFSU2_TR(0x40749f);
if(r1(R+518)){{goto L4074be;}}
}
B4074a1:L4074a1:{c.instructions+=3;NFSU2_TR(0x4074a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2faull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4074a7:{NFSU2_TR(0x4074a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4074a9:{NFSU2_TR(0x4074a9);
if(r1(R+518)){{goto L4074be;}}
}
B4074ab:L4074ab:{c.instructions+=5;NFSU2_TR(0x4074ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4074ad:{NFSU2_TR(0x4074ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4074b0:{NFSU2_TR(0x4074b0);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B4074b2:{NFSU2_TR(0x4074b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4074b8:{NFSU2_TR(0x4074b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4074be:L4074be:{c.instructions+=1;NFSU2_TR(0x4074be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4074c4:L4074c4:{c.instructions+=2;NFSU2_TR(0x4074c4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4074cb:{NFSU2_TR(0x4074cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407594;}}
}
B4074d1:L4074d1:{c.instructions+=16;NFSU2_TR(0x4074d1);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4074d7:{NFSU2_TR(0x4074d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4074d9:{NFSU2_TR(0x4074d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((R+4),(U+0),4);
}
B4074df:{NFSU2_TR(0x4074df);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4074e1:{NFSU2_TR(0x4074e1);
__builtin_memmove((R+0),(R+4),4);
}
B4074e3:{NFSU2_TR(0x4074e3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4074e7:{NFSU2_TR(0x4074e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4074e9:{NFSU2_TR(0x4074e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4074ec:{NFSU2_TR(0x4074ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4074ef:{NFSU2_TR(0x4074ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4074f2:{NFSU2_TR(0x4074f2);
{u32 ea_=u32(r4(R+24)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4074f8:{NFSU2_TR(0x4074f8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4074fc:{NFSU2_TR(0x4074fc);
{u32 ea_=u32(r4(R+24)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407502:{NFSU2_TR(0x407502);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407504:{NFSU2_TR(0x407504);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407507:{NFSU2_TR(0x407507);
if(r1(R+514)){{goto L407521;}}
}
B407509:L407509:{c.instructions+=6;NFSU2_TR(0x407509);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40750b:{NFSU2_TR(0x40750b);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407511:{NFSU2_TR(0x407511);
{u32 ea_=u32(r4(R+24)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407517:{NFSU2_TR(0x407517);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B407519:{NFSU2_TR(0x407519);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40751f:{NFSU2_TR(0x40751f);
{goto L407594;}
}
B407521:L407521:{c.instructions+=4;NFSU2_TR(0x407521);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407527:{NFSU2_TR(0x407527);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407529:{NFSU2_TR(0x407529);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40752c:{NFSU2_TR(0x40752c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407544;}}
}
B40752e:L40752e:{c.instructions+=5;NFSU2_TR(0x40752e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407534:{NFSU2_TR(0x407534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40753a:{NFSU2_TR(0x40753a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407540:{NFSU2_TR(0x407540);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B407542:{NFSU2_TR(0x407542);
{goto L407594;}
}
B407544:L407544:{c.instructions+=6;NFSU2_TR(0x407544);
{u32 ea_=u32(r4(R+24)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40754a:{NFSU2_TR(0x40754a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40754e:{NFSU2_TR(0x40754e);
{u32 ea_=u32(r4(R+24)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407554:{NFSU2_TR(0x407554);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407556:{NFSU2_TR(0x407556);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407559:{NFSU2_TR(0x407559);
if(r1(R+514)){{goto L407573;}}
}
B40755b:L40755b:{c.instructions+=6;NFSU2_TR(0x40755b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40755d:{NFSU2_TR(0x40755d);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407563:{NFSU2_TR(0x407563);
{u32 ea_=u32(r4(R+24)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407569:{NFSU2_TR(0x407569);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40756b:{NFSU2_TR(0x40756b);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407571:{NFSU2_TR(0x407571);
{goto L407594;}
}
B407573:L407573:{c.instructions+=4;NFSU2_TR(0x407573);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407579:{NFSU2_TR(0x407579);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40757b:{NFSU2_TR(0x40757b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40757e:{NFSU2_TR(0x40757e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407594;}}
}
B407580:L407580:{c.instructions+=4;NFSU2_TR(0x407580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407586:{NFSU2_TR(0x407586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B407588:{NFSU2_TR(0x407588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40758e:{NFSU2_TR(0x40758e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407594:L407594:{c.instructions+=2;NFSU2_TR(0x407594);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B40759b:{NFSU2_TR(0x40759b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4076af;}}
}
B4075a1:L4075a1:{c.instructions+=10;NFSU2_TR(0x4075a1);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4075a7:{NFSU2_TR(0x4075a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4075a8:{NFSU2_TR(0x4075a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4075aa:{NFSU2_TR(0x4075aa);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4075ac:{NFSU2_TR(0x4075ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4075b0:{NFSU2_TR(0x4075b0);
{u32 ea_=u32(r4(R+24)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4075b6:{NFSU2_TR(0x4075b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4075ba:{NFSU2_TR(0x4075ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4075bc:{NFSU2_TR(0x4075bc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4075bf:{NFSU2_TR(0x4075bf);
if(r1(R+514)){{goto L4075c5;}}
}
B4075c1:L4075c1:{c.instructions+=2;NFSU2_TR(0x4075c1);
w1(R+12,u8(0xcull));
}
B4075c3:{NFSU2_TR(0x4075c3);
{goto L407606;}
}
B4075c5:L4075c5:{c.instructions+=5;NFSU2_TR(0x4075c5);
{u32 ea_=u32(r4(R+24)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4075cb:{NFSU2_TR(0x4075cb);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4075d1:{NFSU2_TR(0x4075d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4075d3:{NFSU2_TR(0x4075d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4075d6:{NFSU2_TR(0x4075d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4075dc;}}
}
B4075d8:L4075d8:{c.instructions+=2;NFSU2_TR(0x4075d8);
w1(R+12,u8(0x3ull));
}
B4075da:{NFSU2_TR(0x4075da);
{goto L407606;}
}
B4075dc:L4075dc:{c.instructions+=5;NFSU2_TR(0x4075dc);
{u32 ea_=u32(r4(R+24)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4075e2:{NFSU2_TR(0x4075e2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4075e6:{NFSU2_TR(0x4075e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4075e8:{NFSU2_TR(0x4075e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4075eb:{NFSU2_TR(0x4075eb);
if(r1(R+514)){{goto L4075f1;}}
}
B4075ed:L4075ed:{c.instructions+=2;NFSU2_TR(0x4075ed);
w1(R+12,u8(0x6ull));
}
B4075ef:{NFSU2_TR(0x4075ef);
{goto L407606;}
}
B4075f1:L4075f1:{c.instructions+=5;NFSU2_TR(0x4075f1);
{u32 ea_=u32(r4(R+24)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4075f7:{NFSU2_TR(0x4075f7);
{u32 ea_=u32(u32(7879432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4075fd:{NFSU2_TR(0x4075fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4075ff:{NFSU2_TR(0x4075ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407602:{NFSU2_TR(0x407602);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407606;}}
}
B407604:L407604:{c.instructions+=1;NFSU2_TR(0x407604);
w1(R+12,u8(0x9ull));
}
B407606:L407606:{c.instructions+=3;NFSU2_TR(0x407606);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40760c:{NFSU2_TR(0x40760c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40760e:{NFSU2_TR(0x40760e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40766f;}}
}
B407610:L407610:{c.instructions+=2;NFSU2_TR(0x407610);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407611:{NFSU2_TR(0x407611);
w4(R+20,u32(s32(s8(r1(R+12)))));
}
B407614:L407614:{c.instructions+=5;NFSU2_TR(0x407614);
w4(R+8,u32(0x1ull));
}
B407619:{NFSU2_TR(0x407619);
__builtin_memmove((R+4),(R+28),4);
}
B40761b:{NFSU2_TR(0x40761b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B40761d:{NFSU2_TR(0x40761d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40761f:{NFSU2_TR(0x40761f);
if(r1(R+518)){{goto L40765c;}}
}
B407621:L407621:{c.instructions+=3;NFSU2_TR(0x407621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407627:{NFSU2_TR(0x407627);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407628:{NFSU2_TR(0x407628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40762dull));
TAIL_STATIC(0x5ed470u,5ed);
}
B40762d:L40762d:{c.instructions+=2;NFSU2_TR(0x40762d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40762f:{NFSU2_TR(0x40762f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40763a;}}
}
B407631:L407631:{c.instructions+=2;NFSU2_TR(0x407631);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B407638:{NFSU2_TR(0x407638);
{goto L40765c;}
}
B40763a:L40763a:{c.instructions+=3;NFSU2_TR(0x40763a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407640:{NFSU2_TR(0x407640);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407641:{NFSU2_TR(0x407641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407646ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B407646:L407646:{c.instructions+=2;NFSU2_TR(0x407646);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B407649:{NFSU2_TR(0x407649);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40765c;}}
}
B40764b:L40764b:{c.instructions+=3;NFSU2_TR(0x40764b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407651:{NFSU2_TR(0x407651);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407653:{NFSU2_TR(0x407653);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40765c;}}
}
B407655:L407655:{c.instructions+=1;NFSU2_TR(0x407655);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B40765c:L40765c:{c.instructions+=3;NFSU2_TR(0x40765c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40765d:{NFSU2_TR(0x40765d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B407660:{NFSU2_TR(0x407660);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407614u);}goto L407614;}}
}
B407662:L407662:{c.instructions+=5;NFSU2_TR(0x407662);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407668:{NFSU2_TR(0x407668);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40766a:{NFSU2_TR(0x40766a);
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
B40766c:{NFSU2_TR(0x40766c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40766d:{NFSU2_TR(0x40766d);
if(r1(R+518)){{goto L4076ae;}}
}
B40766f:L40766f:{c.instructions+=4;NFSU2_TR(0x40766f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B407671:{NFSU2_TR(0x407671);
w4(R+8,u32(s32(s8(r1(R+12)))));
}
B407674:{NFSU2_TR(0x407674);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B40767a:{NFSU2_TR(0x40767a);
__builtin_memmove((R+12),(R+12),4);
}
B407680:L407680:{c.instructions+=4;NFSU2_TR(0x407680);
w4(R+28,u32(0x1ull));
}
B407685:{NFSU2_TR(0x407685);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B407687:{NFSU2_TR(0x407687);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407689:{NFSU2_TR(0x407689);
if(r1(R+518)){{goto L4076a5;}}
}
B40768b:L40768b:{c.instructions+=3;NFSU2_TR(0x40768b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B407691:{NFSU2_TR(0x407691);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407693:{NFSU2_TR(0x407693);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40769d;}}
}
B407695:L407695:{c.instructions+=2;NFSU2_TR(0x407695);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40769b:{NFSU2_TR(0x40769b);
{goto L4076a3;}
}
B40769d:L40769d:{c.instructions+=1;NFSU2_TR(0x40769d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4076a3:L4076a3:{c.instructions+=1;NFSU2_TR(0x4076a3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4076a5:L4076a5:{c.instructions+=4;NFSU2_TR(0x4076a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4076a6:{NFSU2_TR(0x4076a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4076a9:{NFSU2_TR(0x4076a9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4076ac:{NFSU2_TR(0x4076ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407680u);}goto L407680;}}
}
B4076ae:L4076ae:{c.instructions+=1;NFSU2_TR(0x4076ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4076af:L4076af:{c.instructions+=4;NFSU2_TR(0x4076af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4076b0:{NFSU2_TR(0x4076b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4076b1:{NFSU2_TR(0x4076b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4076b2:{NFSU2_TR(0x4076b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4076c0:L4076c0:{c.instructions+=26;NFSU2_TR(0x4076c0);
w1(R+0,u8(0x80ull));
}
B4076c2:{NFSU2_TR(0x4076c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076c8:{NFSU2_TR(0x4076c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076ce:{NFSU2_TR(0x4076ce);
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
B4076d0:{NFSU2_TR(0x4076d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076d6:{NFSU2_TR(0x4076d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076dc:{NFSU2_TR(0x4076dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076e2:{NFSU2_TR(0x4076e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076e8:{NFSU2_TR(0x4076e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076ee:{NFSU2_TR(0x4076ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2daull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076f4:{NFSU2_TR(0x4076f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4076fa:{NFSU2_TR(0x4076fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407700:{NFSU2_TR(0x407700);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407706:{NFSU2_TR(0x407706);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40770c:{NFSU2_TR(0x40770c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407712:{NFSU2_TR(0x407712);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407718:{NFSU2_TR(0x407718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40771e:{NFSU2_TR(0x40771e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407724:{NFSU2_TR(0x407724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40772a:{NFSU2_TR(0x40772a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407730:{NFSU2_TR(0x407730);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407736:{NFSU2_TR(0x407736);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40773c:{NFSU2_TR(0x40773c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407742:{NFSU2_TR(0x407742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407748:{NFSU2_TR(0x407748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40774e:{NFSU2_TR(0x40774e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407750:L407750:{c.instructions+=5;NFSU2_TR(0x407750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407754:{NFSU2_TR(0x407754);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8full))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B40775a:{NFSU2_TR(0x40775a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40775e:{NFSU2_TR(0x40775e);
w1(R+8,u8(0x80ull));
}
B407760:{NFSU2_TR(0x407760);
if(r1(R+518)){{goto L407777;}}
}
B407762:L407762:{c.instructions+=2;NFSU2_TR(0x407762);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407763:{NFSU2_TR(0x407763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407787;}}
}
B407765:L407765:{c.instructions+=4;NFSU2_TR(0x407765);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407769:{NFSU2_TR(0x407769);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40776f:{NFSU2_TR(0x40776f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407775:{NFSU2_TR(0x407775);
{goto L407787;}
}
B407777:L407777:{c.instructions+=3;NFSU2_TR(0x407777);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40777b:{NFSU2_TR(0x40777b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407781:{NFSU2_TR(0x407781);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407787:L407787:{c.instructions+=3;NFSU2_TR(0x407787);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40778d:{NFSU2_TR(0x40778d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B40778f:{NFSU2_TR(0x40778f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407797;}}
}
B407791:L407791:{c.instructions+=1;NFSU2_TR(0x407791);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407797:L407797:{c.instructions+=2;NFSU2_TR(0x407797);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xffull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40779a:{NFSU2_TR(0x40779a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4077a7;}}
}
B40779c:L40779c:{c.instructions+=2;NFSU2_TR(0x40779c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c8ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4077a6:{NFSU2_TR(0x4077a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4077a7:L4077a7:{c.instructions+=7;NFSU2_TR(0x4077a7);
w4(R+8,u32(r1(R+4)));
}
B4077aa:{NFSU2_TR(0x4077aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4077ae:{NFSU2_TR(0x4077ae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4077b2:{NFSU2_TR(0x4077b2);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4077b8:{NFSU2_TR(0x4077b8);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4077be:{NFSU2_TR(0x4077be);
{u32 ea_=u32(r4(R+0)+u32(712u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4077c4:{NFSU2_TR(0x4077c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4077d0:L4077d0:{c.instructions+=5;NFSU2_TR(0x4077d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4077d1:{NFSU2_TR(0x4077d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4077d5:{NFSU2_TR(0x4077d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4077db:{NFSU2_TR(0x4077db);
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
B4077dd:{NFSU2_TR(0x4077dd);
if(r1(R+518)){{goto L4077eb;}}
}
B4077df:L4077df:{c.instructions+=3;NFSU2_TR(0x4077df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4077e9:{NFSU2_TR(0x4077e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4077ea:{NFSU2_TR(0x4077ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4077eb:L4077eb:{c.instructions+=4;NFSU2_TR(0x4077eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4077ef:{NFSU2_TR(0x4077ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x97ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4077f4:{NFSU2_TR(0x4077f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4077f5:{NFSU2_TR(0x4077f5);
if(r1(R+518)){{goto L40786c;}}
}
B4077f7:L4077f7:{c.instructions+=2;NFSU2_TR(0x4077f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4077f8:{NFSU2_TR(0x4077f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407876;}}
}
B4077fa:L4077fa:{c.instructions+=4;NFSU2_TR(0x4077fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407800:{NFSU2_TR(0x407800);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B407807:{NFSU2_TR(0x407807);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B40780c:{NFSU2_TR(0x40780c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40783d;}}
}
B40780e:L40780e:{c.instructions+=4;NFSU2_TR(0x40780e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B407810:{NFSU2_TR(0x407810);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407814:{NFSU2_TR(0x407814);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407818:{NFSU2_TR(0x407818);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L407820;}}
}
B40781a:L40781a:{c.instructions+=1;NFSU2_TR(0x40781a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B407820:L407820:{c.instructions+=6;NFSU2_TR(0x407820);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407826:{NFSU2_TR(0x407826);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B407828:{NFSU2_TR(0x407828);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40782a:{NFSU2_TR(0x40782a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40782c:{NFSU2_TR(0x40782c);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407832:{NFSU2_TR(0x407832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407837ull));
TAIL_STATIC(0x75bed4u,75b);
}
B407837:L407837:{c.instructions+=3;NFSU2_TR(0x407837);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407839:{NFSU2_TR(0x407839);
__builtin_memmove((R+12),(R+0),4);
}
B40783b:{NFSU2_TR(0x40783b);
{goto L407853;}
}
B40783d:L40783d:{c.instructions+=3;NFSU2_TR(0x40783d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407843:{NFSU2_TR(0x407843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407844:{NFSU2_TR(0x407844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407849ull));
TAIL_STATIC(0x404800u,404);
}
B407849:L407849:{c.instructions+=3;NFSU2_TR(0x407849);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40784c:{NFSU2_TR(0x40784c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40784e:{NFSU2_TR(0x40784e);
if(r1(R+518)){{goto L407853;}}
}
B407850:L407850:{c.instructions+=1;NFSU2_TR(0x407850);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B407853:L407853:{c.instructions+=2;NFSU2_TR(0x407853);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B407859:{NFSU2_TR(0x407859);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L407864;}}
}
B40785b:L40785b:{c.instructions+=2;NFSU2_TR(0x40785b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e1ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B407862:{NFSU2_TR(0x407862);
{goto L407876;}
}
B407864:L407864:{c.instructions+=2;NFSU2_TR(0x407864);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40786a:{NFSU2_TR(0x40786a);
{goto L407876;}
}
B40786c:L40786c:{c.instructions+=2;NFSU2_TR(0x40786c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B407870:{NFSU2_TR(0x407870);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407876:L407876:{c.instructions+=4;NFSU2_TR(0x407876);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40787c:{NFSU2_TR(0x40787c);
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
B40787e:{NFSU2_TR(0x40787e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40787f:{NFSU2_TR(0x40787f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407887;}}
}
B407881:L407881:{c.instructions+=1;NFSU2_TR(0x407881);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407887:L407887:{c.instructions+=7;NFSU2_TR(0x407887);
w4(R+0,u32(r1(R+0)));
}
B40788a:{NFSU2_TR(0x40788a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40788e:{NFSU2_TR(0x40788e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407892:{NFSU2_TR(0x407892);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407898:{NFSU2_TR(0x407898);
{u32 ea_=u32(r4(R+24)+u32(740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40789e:{NFSU2_TR(0x40789e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40789f:{NFSU2_TR(0x40789f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4078a0:L4078a0:{c.instructions+=7;NFSU2_TR(0x4078a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4078a4:{NFSU2_TR(0x4078a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4078aa:{NFSU2_TR(0x4078aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4078ad:{NFSU2_TR(0x4078ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x581ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4078b4:{NFSU2_TR(0x4078b4);
__builtin_memmove((R+8),gp(0x7e949c),4);
}
B4078ba:{NFSU2_TR(0x4078ba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4078bd:{NFSU2_TR(0x4078bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4078c1;}}
}
B4078bf:L4078bf:{c.instructions+=1;NFSU2_TR(0x4078bf);
__builtin_memmove((R+0),(R+8),4);
}
B4078c1:L4078c1:{c.instructions+=2;NFSU2_TR(0x4078c1);
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
B4078c3:{NFSU2_TR(0x4078c3);
if(r1(R+518)){{goto L4079f8;}}
}
B4078c9:L4078c9:{c.instructions+=3;NFSU2_TR(0x4078c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4078cf:{NFSU2_TR(0x4078cf);
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
B4078d1:{NFSU2_TR(0x4078d1);
if(r1(R+518)){{goto L4079f8;}}
}
B4078d7:L4078d7:{c.instructions+=5;NFSU2_TR(0x4078d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4078d8:{NFSU2_TR(0x4078d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4078dc:{NFSU2_TR(0x4078dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff5bull))));
__builtin_memmove((R+8),(U+0),4);
}
B4078e2:{NFSU2_TR(0x4078e2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4078e5:{NFSU2_TR(0x4078e5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4079f7;}}
}
B4078eb:L4078eb:{c.instructions+=1;NFSU2_TR(0x4078eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4079fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4078f2:L4078f2:{c.instructions+=4;NFSU2_TR(0x4078f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4078f6:{NFSU2_TR(0x4078f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4078f8:{NFSU2_TR(0x4078f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2faull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4078fe:{NFSU2_TR(0x4078fe);
if(r1(R+518)){{goto L407917;}}
}
B407900:L407900:{c.instructions+=2;NFSU2_TR(0x407900);
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
B407902:{NFSU2_TR(0x407902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40790f;}}
}
B407904:L407904:{c.instructions+=2;NFSU2_TR(0x407904);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B407909:{NFSU2_TR(0x407909);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40790f:L40790f:{c.instructions+=3;NFSU2_TR(0x40790f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2faull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407915:{NFSU2_TR(0x407915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B407916:{NFSU2_TR(0x407916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407917:L407917:{c.instructions+=2;NFSU2_TR(0x407917);
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
B407919:{NFSU2_TR(0x407919);
if(r1(R+518)){{goto L407936;}}
}
B40791b:L40791b:{c.instructions+=3;NFSU2_TR(0x40791b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407921:{NFSU2_TR(0x407921);
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
B407923:{NFSU2_TR(0x407923);
if(r1(R+518)){{goto L407936;}}
}
B407925:L407925:{c.instructions+=2;NFSU2_TR(0x407925);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40792c:{NFSU2_TR(0x40792c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407936:L407936:{c.instructions+=3;NFSU2_TR(0x407936);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2faull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40793d:{NFSU2_TR(0x40793d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40793e:{NFSU2_TR(0x40793e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40793f:L40793f:{c.instructions+=8;NFSU2_TR(0x40793f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B407944:{NFSU2_TR(0x407944);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407948:{NFSU2_TR(0x407948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B407949:{NFSU2_TR(0x407949);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40794d:{NFSU2_TR(0x40794d);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B407953:{NFSU2_TR(0x407953);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407959:{NFSU2_TR(0x407959);
{u32 ea_=u32(r4(R+4)+u32(776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40795f:{NFSU2_TR(0x40795f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407960:L407960:{c.instructions+=8;NFSU2_TR(0x407960);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B407965:{NFSU2_TR(0x407965);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407969:{NFSU2_TR(0x407969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40796a:{NFSU2_TR(0x40796a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40796e:{NFSU2_TR(0x40796e);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B407974:{NFSU2_TR(0x407974);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40797a:{NFSU2_TR(0x40797a);
{u32 ea_=u32(r4(R+4)+u32(772u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407980:{NFSU2_TR(0x407980);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407981:L407981:{c.instructions+=7;NFSU2_TR(0x407981);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B407986:{NFSU2_TR(0x407986);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40798a:{NFSU2_TR(0x40798a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40798e:{NFSU2_TR(0x40798e);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B407994:{NFSU2_TR(0x407994);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40799a:{NFSU2_TR(0x40799a);
{u32 ea_=u32(r4(R+4)+u32(784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4079a0:{NFSU2_TR(0x4079a0);
{goto L4079c6;}
}
B4079a2:L4079a2:{c.instructions+=2;NFSU2_TR(0x4079a2);
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
B4079a5:{NFSU2_TR(0x4079a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4079f7;}}
}
B4079a7:L4079a7:{c.instructions+=6;NFSU2_TR(0x4079a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4079ac:{NFSU2_TR(0x4079ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4079b0:{NFSU2_TR(0x4079b0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4079b4:{NFSU2_TR(0x4079b4);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4079ba:{NFSU2_TR(0x4079ba);
{u32 ea_=u32(u32(7882044u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4079c0:{NFSU2_TR(0x4079c0);
{u32 ea_=u32(r4(R+4)+u32(780u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4079c6:L4079c6:{c.instructions+=6;NFSU2_TR(0x4079c6);
{u32 ea_=u32(r4(R+4)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4079cc:{NFSU2_TR(0x4079cc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4079ce:{NFSU2_TR(0x4079ce);
{u32 ea_=u32(u32(7879436u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4079d4:{NFSU2_TR(0x4079d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4079d6:{NFSU2_TR(0x4079d6);
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
B4079d9:{NFSU2_TR(0x4079d9);
if(r1(R+514)){{goto L4079f7;}}
}
B4079db:L4079db:{c.instructions+=6;NFSU2_TR(0x4079db);
{u32 ea_=u32(r4(R+4)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4079e1:{NFSU2_TR(0x4079e1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4079e3:{NFSU2_TR(0x4079e3);
{u32 ea_=u32(u32(7879436u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4079e9:{NFSU2_TR(0x4079e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4079eb:{NFSU2_TR(0x4079eb);
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
B4079ee:{NFSU2_TR(0x4079ee);
if(r1(R+514)){{goto L4079f7;}}
}
B4079f0:L4079f0:{c.instructions+=1;NFSU2_TR(0x4079f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4079f7:L4079f7:{c.instructions+=1;NFSU2_TR(0x4079f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4079f8:L4079f8:{c.instructions+=1;NFSU2_TR(0x4079f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407a30:L407a30:{c.instructions+=12;NFSU2_TR(0x407a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B407a33:{NFSU2_TR(0x407a33);
__builtin_memmove((R+0),gp(0x783b28),4);
}
B407a38:{NFSU2_TR(0x407a38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407a39:{NFSU2_TR(0x407a39);
__builtin_memmove((R+24),(R+4),4);
}
B407a3b:{NFSU2_TR(0x407a3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407a3c:{NFSU2_TR(0x407a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B407a42:{NFSU2_TR(0x407a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407a48:{NFSU2_TR(0x407a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407a4c:{NFSU2_TR(0x407a4c);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B407a51:{NFSU2_TR(0x407a51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407a53:{NFSU2_TR(0x407a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407a57:{NFSU2_TR(0x407a57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407a6b;}}
}
B407a59:L407a59:{c.instructions+=3;NFSU2_TR(0x407a59);
__builtin_memmove((R+0),gp(0x890100),4);
}
B407a5e:{NFSU2_TR(0x407a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407a60:{NFSU2_TR(0x407a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407a6b;}}
}
B407a62:L407a62:{c.instructions+=3;NFSU2_TR(0x407a62);
__builtin_memmove((R+0),gp(0x890110),4);
}
B407a67:{NFSU2_TR(0x407a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407a69:{NFSU2_TR(0x407a69);
if(r1(R+518)){{goto L407a91;}}
}
B407a6b:L407a6b:{c.instructions+=8;NFSU2_TR(0x407a6b);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407a71:{NFSU2_TR(0x407a71);
__builtin_memmove((R+8),gp(0x783b28),4);
}
B407a77:{NFSU2_TR(0x407a77);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B407a79:{NFSU2_TR(0x407a79);
{u32 ea_=u32(u32(7879476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407a7f:{NFSU2_TR(0x407a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407a83:{NFSU2_TR(0x407a83);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B407a89:{NFSU2_TR(0x407a89);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B407a8d:{NFSU2_TR(0x407a8d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407a91:L407a91:{c.instructions+=7;NFSU2_TR(0x407a91);
{u32 ea_=u32(r4(R+24)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407a97:{NFSU2_TR(0x407a97);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B407a9b:{NFSU2_TR(0x407a9b);
{u32 ea_=u32(r4(R+24)+u32(700u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B407aa1:{NFSU2_TR(0x407aa1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407aa7:{NFSU2_TR(0x407aa7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407aa9:{NFSU2_TR(0x407aa9);
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
B407aac:{NFSU2_TR(0x407aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407ad0;}}
}
B407aae:L407aae:{c.instructions+=6;NFSU2_TR(0x407aae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407ab2:{NFSU2_TR(0x407ab2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B407ab4:{NFSU2_TR(0x407ab4);
{u32 ea_=u32(u32(7882088u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407aba:{NFSU2_TR(0x407aba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407abc:{NFSU2_TR(0x407abc);
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
B407abf:{NFSU2_TR(0x407abf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407ad0;}}
}
B407ac1:L407ac1:{c.instructions+=3;NFSU2_TR(0x407ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407ac9:{NFSU2_TR(0x407ac9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407ace:{NFSU2_TR(0x407ace);
{goto L407aeb;}
}
B407ad0:L407ad0:{c.instructions+=5;NFSU2_TR(0x407ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407ad6:{NFSU2_TR(0x407ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407adc:{NFSU2_TR(0x407adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407ae6:{NFSU2_TR(0x407ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407aea:{NFSU2_TR(0x407aea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407aeb:L407aeb:{c.instructions+=2;NFSU2_TR(0x407aeb);
__builtin_memmove((R+4),(R+24),4);
}
B407aed:{NFSU2_TR(0x407aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407af2ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B407af2:L407af2:{c.instructions+=5;NFSU2_TR(0x407af2);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407af8:{NFSU2_TR(0x407af8);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407afe:{NFSU2_TR(0x407afe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b00:{NFSU2_TR(0x407b00);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407b03:{NFSU2_TR(0x407b03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407b21;}}
}
B407b05:L407b05:{c.instructions+=5;NFSU2_TR(0x407b05);
{u32 ea_=u32(r4(R+24)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b0b:{NFSU2_TR(0x407b0b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407b11:{NFSU2_TR(0x407b11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b13:{NFSU2_TR(0x407b13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407b16:{NFSU2_TR(0x407b16);
if(r1(R+514)){{goto L407b21;}}
}
B407b18:L407b18:{c.instructions+=2;NFSU2_TR(0x407b18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B407b1f:{NFSU2_TR(0x407b1f);
{goto L407b39;}
}
B407b21:L407b21:{c.instructions+=5;NFSU2_TR(0x407b21);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b25:{NFSU2_TR(0x407b25);
{u32 ea_=u32(u32(7879472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407b2b:{NFSU2_TR(0x407b2b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b2d:{NFSU2_TR(0x407b2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407b30:{NFSU2_TR(0x407b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407b39;}}
}
B407b32:L407b32:{c.instructions+=1;NFSU2_TR(0x407b32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B407b39:L407b39:{c.instructions+=5;NFSU2_TR(0x407b39);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b3d:{NFSU2_TR(0x407b3d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407b41:{NFSU2_TR(0x407b41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b43:{NFSU2_TR(0x407b43);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407b46:{NFSU2_TR(0x407b46);
if(r1(R+518)){{goto L407ba4;}}
}
B407b48:L407b48:{c.instructions+=3;NFSU2_TR(0x407b48);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407b4e:{NFSU2_TR(0x407b4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407b50:{NFSU2_TR(0x407b50);
if(r1(R+518)){{goto L407ba4;}}
}
B407b52:L407b52:{c.instructions+=5;NFSU2_TR(0x407b52);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b56:{NFSU2_TR(0x407b56);
{u32 ea_=u32(u32(7879468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407b5c:{NFSU2_TR(0x407b5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b5e:{NFSU2_TR(0x407b5e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407b61:{NFSU2_TR(0x407b61);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L407b8c;}}
}
B407b63:L407b63:{c.instructions+=5;NFSU2_TR(0x407b63);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b67:{NFSU2_TR(0x407b67);
{u32 ea_=u32(u32(7879472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407b6d:{NFSU2_TR(0x407b6d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407b6f:{NFSU2_TR(0x407b6f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407b72:{NFSU2_TR(0x407b72);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L407b8c;}}
}
B407b74:L407b74:{c.instructions+=5;NFSU2_TR(0x407b74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407b78:{NFSU2_TR(0x407b78);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b7e:{NFSU2_TR(0x407b7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407b82:{NFSU2_TR(0x407b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407b8a:{NFSU2_TR(0x407b8a);
{goto L407bbc;}
}
B407b8c:L407b8c:{c.instructions+=5;NFSU2_TR(0x407b8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407b90:{NFSU2_TR(0x407b90);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407b96:{NFSU2_TR(0x407b96);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407b9e:{NFSU2_TR(0x407b9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407ba2:{NFSU2_TR(0x407ba2);
{goto L407bbc;}
}
B407ba4:L407ba4:{c.instructions+=5;NFSU2_TR(0x407ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407ba8:{NFSU2_TR(0x407ba8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407bae:{NFSU2_TR(0x407bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407bb4:{NFSU2_TR(0x407bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407bb8:{NFSU2_TR(0x407bb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407bbc:L407bbc:{c.instructions+=6;NFSU2_TR(0x407bbc);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B407bbe:{NFSU2_TR(0x407bbe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B407bc2:{NFSU2_TR(0x407bc2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407bc8:{NFSU2_TR(0x407bc8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407bca:{NFSU2_TR(0x407bca);
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
B407bcd:{NFSU2_TR(0x407bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407bd7;}}
}
B407bcf:L407bcf:{c.instructions+=1;NFSU2_TR(0x407bcf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407bd7:L407bd7:{c.instructions+=4;NFSU2_TR(0x407bd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407bdb:{NFSU2_TR(0x407bdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407bdc:{NFSU2_TR(0x407bdc);
__builtin_memmove((R+4),(R+24),4);
}
B407bde:{NFSU2_TR(0x407bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407be3ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B407be3:L407be3:{c.instructions+=5;NFSU2_TR(0x407be3);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407be9:{NFSU2_TR(0x407be9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407bef:{NFSU2_TR(0x407bef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407bf1:{NFSU2_TR(0x407bf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407bf4:{NFSU2_TR(0x407bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407c3b;}}
}
B407bf6:L407bf6:{c.instructions+=4;NFSU2_TR(0x407bf6);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B407bfc:{NFSU2_TR(0x407bfc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B407bfd:{NFSU2_TR(0x407bfd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407c03:{NFSU2_TR(0x407c03);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L407c0a;}}
}
B407c05:L407c05:{c.instructions+=3;NFSU2_TR(0x407c05);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B407c06:{NFSU2_TR(0x407c06);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B407c09:{NFSU2_TR(0x407c09);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407c0a:L407c0a:{c.instructions+=1;NFSU2_TR(0x407c0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407c3b;}}
}
B407c0c:L407c0c:{c.instructions+=6;NFSU2_TR(0x407c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407c12:{NFSU2_TR(0x407c12);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407c18:{NFSU2_TR(0x407c18);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407c1e:{NFSU2_TR(0x407c1e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407c20:{NFSU2_TR(0x407c20);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407c23:{NFSU2_TR(0x407c23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407c3b;}}
}
B407c25:L407c25:{c.instructions+=5;NFSU2_TR(0x407c25);
__builtin_memmove((R+0),gp(0x783afc),4);
}
B407c2a:{NFSU2_TR(0x407c2a);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B407c30:{NFSU2_TR(0x407c30);
u8 U[4];
w4(U+0,u32(0x784558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407c35:{NFSU2_TR(0x407c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407c36:{NFSU2_TR(0x407c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407c3bull));
TAIL_STATIC(0x578e90u,578);
}
B407c3b:L407c3b:{c.instructions+=3;NFSU2_TR(0x407c3b);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B407c40:{NFSU2_TR(0x407c40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407c42:{NFSU2_TR(0x407c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407c4d;}}
}
B407c44:L407c44:{c.instructions+=3;NFSU2_TR(0x407c44);
__builtin_memmove((R+0),gp(0x890108),4);
}
B407c49:{NFSU2_TR(0x407c49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407c4b:{NFSU2_TR(0x407c4b);
if(r1(R+518)){{goto L407c9d;}}
}
B407c4d:L407c4d:{c.instructions+=4;NFSU2_TR(0x407c4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407c51:{NFSU2_TR(0x407c51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407c52:{NFSU2_TR(0x407c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((R+4),(U+0),4);
}
B407c58:{NFSU2_TR(0x407c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407c5dull));
TAIL_STATIC(0x577310u,577);
}
B407c5d:L407c5d:{c.instructions+=2;NFSU2_TR(0x407c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407c5f:{NFSU2_TR(0x407c5f);
if(r1(R+518)){{goto L407c9d;}}
}
B407c61:L407c61:{c.instructions+=7;NFSU2_TR(0x407c61);
{u32 ea_=u32(u32(7879424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407c67:{NFSU2_TR(0x407c67);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407c6b:{NFSU2_TR(0x407c6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B407c6f:{NFSU2_TR(0x407c6f);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407c75:{NFSU2_TR(0x407c75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407c77:{NFSU2_TR(0x407c77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407c7a:{NFSU2_TR(0x407c7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407ccd;}}
}
B407c7c:L407c7c:{c.instructions+=6;NFSU2_TR(0x407c7c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407c80:{NFSU2_TR(0x407c80);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407c86:{NFSU2_TR(0x407c86);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407c8a:{NFSU2_TR(0x407c8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407c8c:{NFSU2_TR(0x407c8c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407c8f:{NFSU2_TR(0x407c8f);
if(r1(R+514)){{goto L407c99;}}
}
B407c91:L407c91:{c.instructions+=2;NFSU2_TR(0x407c91);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407c93:{NFSU2_TR(0x407c93);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407c99:L407c99:{c.instructions+=1;NFSU2_TR(0x407c99);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407c9d:L407c9d:{c.instructions+=6;NFSU2_TR(0x407c9d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407ca1:{NFSU2_TR(0x407ca1);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B407ca7:{NFSU2_TR(0x407ca7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407cab:{NFSU2_TR(0x407cab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407cad:{NFSU2_TR(0x407cad);
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
B407cb0:{NFSU2_TR(0x407cb0);
if(r1(R+514)){{goto L407cd5;}}
}
B407cb2:L407cb2:{c.instructions+=4;NFSU2_TR(0x407cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407cb6:{NFSU2_TR(0x407cb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407cb7:{NFSU2_TR(0x407cb7);
__builtin_memmove((R+4),(R+24),4);
}
B407cb9:{NFSU2_TR(0x407cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407cbeull));
TAIL_STATIC(0x5eb910u,5eb);
}
B407cbe:L407cbe:{c.instructions+=2;NFSU2_TR(0x407cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407cc8:{NFSU2_TR(0x407cc8);
{goto L407e5f;}
}
B407ccd:L407ccd:{c.instructions+=2;NFSU2_TR(0x407ccd);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407cd3:{NFSU2_TR(0x407cd3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x407c99u);}goto L407c99;}
}
B407cd5:L407cd5:{c.instructions+=3;NFSU2_TR(0x407cd5);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B407cda:{NFSU2_TR(0x407cda);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407cdc:{NFSU2_TR(0x407cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407cf0;}}
}
B407cde:L407cde:{c.instructions+=3;NFSU2_TR(0x407cde);
__builtin_memmove((R+0),gp(0x890100),4);
}
B407ce3:{NFSU2_TR(0x407ce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407ce5:{NFSU2_TR(0x407ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407cf0;}}
}
B407ce7:L407ce7:{c.instructions+=3;NFSU2_TR(0x407ce7);
__builtin_memmove((R+0),gp(0x890110),4);
}
B407cec:{NFSU2_TR(0x407cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407cee:{NFSU2_TR(0x407cee);
if(r1(R+518)){{goto L407d03;}}
}
B407cf0:L407cf0:{c.instructions+=4;NFSU2_TR(0x407cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407cf4:{NFSU2_TR(0x407cf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407cf5:{NFSU2_TR(0x407cf5);
w4(R+4,u32(0x7ea014ull));
}
B407cfa:{NFSU2_TR(0x407cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407cffull));
TAIL_STATIC(0x5764d0u,576);
}
B407cff:L407cff:{c.instructions+=1;NFSU2_TR(0x407cff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407d03:L407d03:{c.instructions+=3;NFSU2_TR(0x407d03);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B407d08:{NFSU2_TR(0x407d08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407d0a:{NFSU2_TR(0x407d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407d15;}}
}
B407d0c:L407d0c:{c.instructions+=3;NFSU2_TR(0x407d0c);
__builtin_memmove((R+0),gp(0x890108),4);
}
B407d11:{NFSU2_TR(0x407d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407d13:{NFSU2_TR(0x407d13);
if(r1(R+518)){{goto L407d24;}}
}
B407d15:L407d15:{c.instructions+=3;NFSU2_TR(0x407d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407d1b:{NFSU2_TR(0x407d1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B407d22:{NFSU2_TR(0x407d22);
if(r1(R+518)){{goto L407d43;}}
}
B407d24:L407d24:{c.instructions+=3;NFSU2_TR(0x407d24);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B407d29:{NFSU2_TR(0x407d29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407d2b:{NFSU2_TR(0x407d2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407d43;}}
}
B407d2d:L407d2d:{c.instructions+=3;NFSU2_TR(0x407d2d);
__builtin_memmove((R+0),gp(0x890100),4);
}
B407d32:{NFSU2_TR(0x407d32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407d34:{NFSU2_TR(0x407d34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407d43;}}
}
B407d36:L407d36:{c.instructions+=3;NFSU2_TR(0x407d36);
__builtin_memmove((R+0),gp(0x890110),4);
}
B407d3b:{NFSU2_TR(0x407d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B407d3d:{NFSU2_TR(0x407d3d);
if(r1(R+518)){{goto L407e06;}}
}
B407d43:L407d43:{c.instructions+=13;NFSU2_TR(0x407d43);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d49:{NFSU2_TR(0x407d49);
{u32 ea_=u32(u32(7879480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d4f:{NFSU2_TR(0x407d4f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407d53:{NFSU2_TR(0x407d53);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B407d55:{NFSU2_TR(0x407d55);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407d59:{NFSU2_TR(0x407d59);
{u32 ea_=u32(u32(7879484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d5f:{NFSU2_TR(0x407d5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407d63:{NFSU2_TR(0x407d63);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B407d65:{NFSU2_TR(0x407d65);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d69:{NFSU2_TR(0x407d69);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B407d6b:{NFSU2_TR(0x407d6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407d6d:{NFSU2_TR(0x407d6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407d70:{NFSU2_TR(0x407d70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407d78;}}
}
B407d72:L407d72:{c.instructions+=2;NFSU2_TR(0x407d72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407d74:{NFSU2_TR(0x407d74);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d78:L407d78:{c.instructions+=5;NFSU2_TR(0x407d78);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d7c:{NFSU2_TR(0x407d7c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B407d7e:{NFSU2_TR(0x407d7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407d80:{NFSU2_TR(0x407d80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407d83:{NFSU2_TR(0x407d83);
if(r1(R+514)){{goto L407d8b;}}
}
B407d85:L407d85:{c.instructions+=2;NFSU2_TR(0x407d85);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407d87:{NFSU2_TR(0x407d87);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d8b:L407d8b:{c.instructions+=6;NFSU2_TR(0x407d8b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B407d8f:{NFSU2_TR(0x407d8f);
{u32 ea_=u32(r4(R+24)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407d95:{NFSU2_TR(0x407d95);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407d9b:{NFSU2_TR(0x407d9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407d9d:{NFSU2_TR(0x407d9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407da0:{NFSU2_TR(0x407da0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407e04;}}
}
B407da2:L407da2:{c.instructions+=5;NFSU2_TR(0x407da2);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407da8:{NFSU2_TR(0x407da8);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407dae:{NFSU2_TR(0x407dae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407db0:{NFSU2_TR(0x407db0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407db3:{NFSU2_TR(0x407db3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L407dbd;}}
}
B407db5:L407db5:{c.instructions+=2;NFSU2_TR(0x407db5);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407dbb:{NFSU2_TR(0x407dbb);
{goto L407dc9;}
}
B407dbd:L407dbd:{c.instructions+=2;NFSU2_TR(0x407dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407dc3:{NFSU2_TR(0x407dc3);
{u32 ea_=u32(r4(R+8)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407dc9:L407dc9:{c.instructions+=9;NFSU2_TR(0x407dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407dcf:{NFSU2_TR(0x407dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407dd2:{NFSU2_TR(0x407dd2);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407dd8:{NFSU2_TR(0x407dd8);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B407dde:{NFSU2_TR(0x407dde);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B407de0:{NFSU2_TR(0x407de0);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B407de2:{NFSU2_TR(0x407de2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407de4:{NFSU2_TR(0x407de4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407de7:{NFSU2_TR(0x407de7);
if(r1(R+514)){{goto L407e04;}}
}
B407de9:L407de9:{c.instructions+=6;NFSU2_TR(0x407de9);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407def:{NFSU2_TR(0x407def);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B407df1:{NFSU2_TR(0x407df1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407df3:{NFSU2_TR(0x407df3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407df5:{NFSU2_TR(0x407df5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407df8:{NFSU2_TR(0x407df8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407e06;}}
}
B407dfa:L407dfa:{c.instructions+=2;NFSU2_TR(0x407dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f19999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B407e02:{NFSU2_TR(0x407e02);
{goto L407e17;}
}
B407e04:L407e04:{c.instructions+=1;NFSU2_TR(0x407e04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407e06:L407e06:{c.instructions+=5;NFSU2_TR(0x407e06);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407e0a:{NFSU2_TR(0x407e0a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407e10:{NFSU2_TR(0x407e10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407e12:{NFSU2_TR(0x407e12);
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
B407e15:{NFSU2_TR(0x407e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407e38;}}
}
B407e17:L407e17:{c.instructions+=6;NFSU2_TR(0x407e17);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407e1b:{NFSU2_TR(0x407e1b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407e21:{NFSU2_TR(0x407e21);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B407e25:{NFSU2_TR(0x407e25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407e27:{NFSU2_TR(0x407e27);
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
B407e2a:{NFSU2_TR(0x407e2a);
if(r1(R+514)){{goto L407e3e;}}
}
B407e2c:L407e2c:{c.instructions+=3;NFSU2_TR(0x407e2c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407e2e:{NFSU2_TR(0x407e2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407e36:{NFSU2_TR(0x407e36);
{goto L407e42;}
}
B407e38:L407e38:{c.instructions+=1;NFSU2_TR(0x407e38);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407e3e:L407e3e:{c.instructions+=1;NFSU2_TR(0x407e3e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407e42:L407e42:{c.instructions+=4;NFSU2_TR(0x407e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407e46:{NFSU2_TR(0x407e46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407e47:{NFSU2_TR(0x407e47);
__builtin_memmove((R+4),(R+24),4);
}
B407e49:{NFSU2_TR(0x407e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407e4eull));
TAIL_STATIC(0x5eb910u,5eb);
}
B407e4e:L407e4e:{c.instructions+=3;NFSU2_TR(0x407e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407e54:{NFSU2_TR(0x407e54);
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
B407e56:{NFSU2_TR(0x407e56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407e5f;}}
}
B407e58:L407e58:{c.instructions+=3;NFSU2_TR(0x407e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B407e5a:{NFSU2_TR(0x407e5a);
__builtin_memmove((R+4),(R+24),4);
}
B407e5c:{NFSU2_TR(0x407e5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407e5full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B407e5f:L407e5f:{c.instructions+=2;NFSU2_TR(0x407e5f);
w4(R+4,u32(0x89cf48ull));
}
B407e64:{NFSU2_TR(0x407e64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407e69ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B407e69:L407e69:{c.instructions+=2;NFSU2_TR(0x407e69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B407e6b:{NFSU2_TR(0x407e6b);
if(r1(R+518)){{goto L407e8d;}}
}
B407e6d:L407e6d:{c.instructions+=3;NFSU2_TR(0x407e6d);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B407e73:{NFSU2_TR(0x407e73);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x6ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B407e76:{NFSU2_TR(0x407e76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407e8d;}}
}
B407e78:L407e78:{c.instructions+=3;NFSU2_TR(0x407e78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407e7a:{NFSU2_TR(0x407e7a);
__builtin_memmove((R+4),(R+24),4);
}
B407e7c:{NFSU2_TR(0x407e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407e81ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B407e81:L407e81:{c.instructions+=3;NFSU2_TR(0x407e81);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407e86:{NFSU2_TR(0x407e86);
__builtin_memmove((R+4),(R+24),4);
}
B407e88:{NFSU2_TR(0x407e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407e8dull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B407e8d:L407e8d:{c.instructions+=6;NFSU2_TR(0x407e8d);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407e93:{NFSU2_TR(0x407e93);
{u32 ea_=u32(r4(R+28)+u32(1080u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407e99:{NFSU2_TR(0x407e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B407e9a:{NFSU2_TR(0x407e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B407e9b:{NFSU2_TR(0x407e9b);
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
B407e9e:{NFSU2_TR(0x407e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407eb0:L407eb0:{c.instructions+=4;NFSU2_TR(0x407eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407eb4:{NFSU2_TR(0x407eb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407eba:{NFSU2_TR(0x407eba);
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
B407ebc:{NFSU2_TR(0x407ebc);
if(r1(R+518)){{goto L407ec9;}}
}
B407ebe:L407ebe:{c.instructions+=2;NFSU2_TR(0x407ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2dcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B407ec8:{NFSU2_TR(0x407ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407ec9:L407ec9:{c.instructions+=3;NFSU2_TR(0x407ec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407ecd:{NFSU2_TR(0x407ecd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x94ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407ed3:{NFSU2_TR(0x407ed3);
if(r1(R+518)){{goto L407ef3;}}
}
B407ed5:L407ed5:{c.instructions+=2;NFSU2_TR(0x407ed5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407ed6:{NFSU2_TR(0x407ed6);
if(r1(R+518)){{goto L407ee7;}}
}
B407ed8:L407ed8:{c.instructions+=2;NFSU2_TR(0x407ed8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B407ed9:{NFSU2_TR(0x407ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407efd;}}
}
B407edb:L407edb:{c.instructions+=3;NFSU2_TR(0x407edb);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407edf:{NFSU2_TR(0x407edf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2daull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407ee5:{NFSU2_TR(0x407ee5);
{goto L407efd;}
}
B407ee7:L407ee7:{c.instructions+=3;NFSU2_TR(0x407ee7);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B407eeb:{NFSU2_TR(0x407eeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407ef1:{NFSU2_TR(0x407ef1);
{goto L407efd;}
}
B407ef3:L407ef3:{c.instructions+=2;NFSU2_TR(0x407ef3);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407ef7:{NFSU2_TR(0x407ef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407efd:L407efd:{c.instructions+=3;NFSU2_TR(0x407efd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407f03:{NFSU2_TR(0x407f03);
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
B407f05:{NFSU2_TR(0x407f05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407f19;}}
}
B407f07:L407f07:{c.instructions+=4;NFSU2_TR(0x407f07);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407f0d:{NFSU2_TR(0x407f0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2daull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B407f13:{NFSU2_TR(0x407f13);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407f15:{NFSU2_TR(0x407f15);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L407f19;}}
}
B407f17:L407f17:{c.instructions+=1;NFSU2_TR(0x407f17);
__builtin_memmove((R+4),(R+8),1);
}
B407f19:L407f19:{c.instructions+=6;NFSU2_TR(0x407f19);
w4(R+8,u32(r1(R+4)));
}
B407f1c:{NFSU2_TR(0x407f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407f20:{NFSU2_TR(0x407f20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407f24:{NFSU2_TR(0x407f24);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407f2a:{NFSU2_TR(0x407f2a);
{u32 ea_=u32(r4(R+0)+u32(732u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407f30:{NFSU2_TR(0x407f30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407f40:L407f40:{c.instructions+=5;NFSU2_TR(0x407f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407f44:{NFSU2_TR(0x407f44);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x99ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B407f49:{NFSU2_TR(0x407f49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B407f4a:{NFSU2_TR(0x407f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B407f4e:{NFSU2_TR(0x407f4e);
if(r1(R+518)){{goto L407f86;}}
}
B407f50:L407f50:{c.instructions+=2;NFSU2_TR(0x407f50);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B407f51:{NFSU2_TR(0x407f51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407f90;}}
}
B407f53:L407f53:{c.instructions+=9;NFSU2_TR(0x407f53);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B407f58:{NFSU2_TR(0x407f58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407f5c:{NFSU2_TR(0x407f5c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407f60:{NFSU2_TR(0x407f60);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B407f62:{NFSU2_TR(0x407f62);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407f68:{NFSU2_TR(0x407f68);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B407f6a:{NFSU2_TR(0x407f6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B407f6c:{NFSU2_TR(0x407f6c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B407f6f:{NFSU2_TR(0x407f6f);
if(r1(R+514)){{goto L407f79;}}
}
B407f71:L407f71:{c.instructions+=2;NFSU2_TR(0x407f71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B407f73:{NFSU2_TR(0x407f73);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B407f79:L407f79:{c.instructions+=1;NFSU2_TR(0x407f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x407f7eull));
TAIL_STATIC(0x75bed4u,75b);
}
B407f7e:L407f7e:{c.instructions+=2;NFSU2_TR(0x407f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407f84:{NFSU2_TR(0x407f84);
{goto L407f90;}
}
B407f86:L407f86:{c.instructions+=2;NFSU2_TR(0x407f86);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B407f8a:{NFSU2_TR(0x407f8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B407f90:L407f90:{c.instructions+=3;NFSU2_TR(0x407f90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407f96:{NFSU2_TR(0x407f96);
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
B407f98:{NFSU2_TR(0x407f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L407fa0;}}
}
B407f9a:L407f9a:{c.instructions+=1;NFSU2_TR(0x407f9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B407fa0:L407fa0:{c.instructions+=7;NFSU2_TR(0x407fa0);
w4(R+8,u32(r1(R+0)));
}
B407fa3:{NFSU2_TR(0x407fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B407fa7:{NFSU2_TR(0x407fa7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B407fab:{NFSU2_TR(0x407fab);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B407fb1:{NFSU2_TR(0x407fb1);
{u32 ea_=u32(r4(R+24)+u32(748u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B407fb7:{NFSU2_TR(0x407fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B407fb8:{NFSU2_TR(0x407fb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B407fc0:L407fc0:{c.instructions+=3;NFSU2_TR(0x407fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407fc4:{NFSU2_TR(0x407fc4);
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
B407fc6:{NFSU2_TR(0x407fc6);
if(r1(R+518)){TAIL_STATIC(0x4080a6u,408);}
}
B407fcc:L407fcc:{c.instructions+=4;NFSU2_TR(0x407fcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B407fd0:{NFSU2_TR(0x407fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407fd6:{NFSU2_TR(0x407fd6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B407fd9:{NFSU2_TR(0x407fd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40800bu,408);}
}
B407fdb:L407fdb:{c.instructions+=3;NFSU2_TR(0x407fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407fe1:{NFSU2_TR(0x407fe1);
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
B407fe3:{NFSU2_TR(0x407fe3);
if(r1(R+518)){TAIL_STATIC(0x4080a6u,408);}
}
B407fe9:L407fe9:{c.instructions+=6;NFSU2_TR(0x407fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407fef:{NFSU2_TR(0x407fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B407ff5:{NFSU2_TR(0x407ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407ff8:{NFSU2_TR(0x407ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B407ffe:{NFSU2_TR(0x407ffe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B407fff:{NFSU2_TR(0x407fff);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x408001u,408);
}
XIT:NFSU2_TR_EXIT(0x407,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
