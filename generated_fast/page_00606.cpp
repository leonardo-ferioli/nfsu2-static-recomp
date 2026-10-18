#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_604(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_607(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x606,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x606,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_606(u8* __restrict R,Cpu& c);
u32 page_606(Cpu& c){return body_606(c.regs.data(),c);}
__attribute__((noinline)) u32 body_606(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x606005:goto L606005;
case 0x60600c:goto L60600c;
case 0x60600f:c.instructions+=5;goto B60600f;
case 0x606010:c.instructions+=4;goto B606010;
case 0x606015:c.instructions+=3;goto B606015;
case 0x60601a:c.instructions+=2;goto B60601a;
case 0x60601b:c.instructions+=1;goto B60601b;
case 0x606020:goto L606020;
case 0x606023:c.instructions+=5;goto B606023;
case 0x606024:c.instructions+=4;goto B606024;
case 0x606029:c.instructions+=3;goto B606029;
case 0x60602e:c.instructions+=2;goto B60602e;
case 0x60602f:c.instructions+=1;goto B60602f;
case 0x606034:goto L606034;
case 0x606035:c.instructions+=3;goto B606035;
case 0x60603a:c.instructions+=2;goto B60603a;
case 0x60603f:c.instructions+=1;goto B60603f;
case 0x606044:goto L606044;
case 0x60604a:c.instructions+=2;goto B60604a;
case 0x60604d:c.instructions+=1;goto B60604d;
case 0x606053:goto L606053;
case 0x606056:c.instructions+=5;goto B606056;
case 0x606057:c.instructions+=4;goto B606057;
case 0x60605c:c.instructions+=3;goto B60605c;
case 0x606061:c.instructions+=2;goto B606061;
case 0x606062:c.instructions+=1;goto B606062;
case 0x606067:goto L606067;
case 0x60606a:c.instructions+=5;goto B60606a;
case 0x60606b:c.instructions+=4;goto B60606b;
case 0x606070:c.instructions+=3;goto B606070;
case 0x606072:c.instructions+=2;goto B606072;
case 0x606073:c.instructions+=1;goto B606073;
case 0x606078:goto L606078;
case 0x60607b:c.instructions+=5;goto B60607b;
case 0x60607c:c.instructions+=4;goto B60607c;
case 0x606081:c.instructions+=3;goto B606081;
case 0x606086:c.instructions+=2;goto B606086;
case 0x606087:c.instructions+=1;goto B606087;
case 0x60608c:goto L60608c;
case 0x60608f:c.instructions+=5;goto B60608f;
case 0x606090:c.instructions+=4;goto B606090;
case 0x606095:c.instructions+=3;goto B606095;
case 0x60609a:c.instructions+=2;goto B60609a;
case 0x60609b:c.instructions+=1;goto B60609b;
case 0x6060a0:goto L6060a0;
case 0x6060a3:c.instructions+=6;goto B6060a3;
case 0x6060a6:c.instructions+=5;goto B6060a6;
case 0x6060a7:c.instructions+=4;goto B6060a7;
case 0x6060ac:c.instructions+=3;goto B6060ac;
case 0x6060b1:c.instructions+=2;goto B6060b1;
case 0x6060b2:c.instructions+=1;goto B6060b2;
case 0x6060b7:goto L6060b7;
case 0x6060bc:c.instructions+=3;goto B6060bc;
case 0x6060bf:c.instructions+=2;goto B6060bf;
case 0x6060c1:c.instructions+=1;goto B6060c1;
case 0x6060c3:goto L6060c3;
case 0x6060c6:c.instructions+=5;goto B6060c6;
case 0x6060c7:c.instructions+=4;goto B6060c7;
case 0x6060cc:c.instructions+=3;goto B6060cc;
case 0x6060d1:c.instructions+=2;goto B6060d1;
case 0x6060d2:c.instructions+=1;goto B6060d2;
case 0x6060d7:goto L6060d7;
case 0x6060da:c.instructions+=5;goto B6060da;
case 0x6060db:c.instructions+=4;goto B6060db;
case 0x6060e0:c.instructions+=3;goto B6060e0;
case 0x6060e5:c.instructions+=2;goto B6060e5;
case 0x6060e6:c.instructions+=1;goto B6060e6;
case 0x6060eb:goto L6060eb;
case 0x6060ee:goto L6060ee;
case 0x6060f1:c.instructions+=5;goto B6060f1;
case 0x6060f2:c.instructions+=4;goto B6060f2;
case 0x6060f7:c.instructions+=3;goto B6060f7;
case 0x6060fc:c.instructions+=2;goto B6060fc;
case 0x6060fd:c.instructions+=1;goto B6060fd;
case 0x606102:goto L606102;
case 0x606105:c.instructions+=5;goto B606105;
case 0x606106:c.instructions+=4;goto B606106;
case 0x60610b:c.instructions+=3;goto B60610b;
case 0x60610d:c.instructions+=2;goto B60610d;
case 0x60610e:c.instructions+=1;goto B60610e;
case 0x606113:goto L606113;
case 0x606116:c.instructions+=5;goto B606116;
case 0x606117:c.instructions+=4;goto B606117;
case 0x60611c:c.instructions+=3;goto B60611c;
case 0x606121:c.instructions+=2;goto B606121;
case 0x606122:c.instructions+=1;goto B606122;
case 0x606127:goto L606127;
case 0x60612a:c.instructions+=5;goto B60612a;
case 0x60612b:c.instructions+=4;goto B60612b;
case 0x606130:c.instructions+=3;goto B606130;
case 0x606135:c.instructions+=2;goto B606135;
case 0x606136:c.instructions+=1;goto B606136;
case 0x60613b:goto L60613b;
case 0x60613e:c.instructions+=6;goto B60613e;
case 0x606141:c.instructions+=5;goto B606141;
case 0x606142:c.instructions+=4;goto B606142;
case 0x606147:c.instructions+=3;goto B606147;
case 0x60614c:c.instructions+=2;goto B60614c;
case 0x60614d:c.instructions+=1;goto B60614d;
case 0x606152:goto L606152;
case 0x606155:c.instructions+=5;goto B606155;
case 0x606156:c.instructions+=4;goto B606156;
case 0x60615b:c.instructions+=3;goto B60615b;
case 0x606160:c.instructions+=2;goto B606160;
case 0x606161:c.instructions+=1;goto B606161;
case 0x606166:goto L606166;
case 0x606169:c.instructions+=5;goto B606169;
case 0x60616a:c.instructions+=4;goto B60616a;
case 0x60616f:c.instructions+=3;goto B60616f;
case 0x606171:c.instructions+=2;goto B606171;
case 0x606172:c.instructions+=1;goto B606172;
case 0x606177:goto L606177;
case 0x60617a:c.instructions+=5;goto B60617a;
case 0x60617b:c.instructions+=4;goto B60617b;
case 0x606180:c.instructions+=3;goto B606180;
case 0x606185:c.instructions+=2;goto B606185;
case 0x606186:c.instructions+=1;goto B606186;
case 0x60618b:goto L60618b;
case 0x60618e:c.instructions+=6;goto B60618e;
case 0x606191:c.instructions+=5;goto B606191;
case 0x606192:c.instructions+=4;goto B606192;
case 0x606197:c.instructions+=3;goto B606197;
case 0x60619c:c.instructions+=2;goto B60619c;
case 0x60619d:c.instructions+=1;goto B60619d;
case 0x6061a2:goto L6061a2;
case 0x6061a5:c.instructions+=5;goto B6061a5;
case 0x6061a6:c.instructions+=4;goto B6061a6;
case 0x6061ab:c.instructions+=3;goto B6061ab;
case 0x6061b0:c.instructions+=2;goto B6061b0;
case 0x6061b1:c.instructions+=1;goto B6061b1;
case 0x6061b6:goto L6061b6;
case 0x6061bc:c.instructions+=3;goto B6061bc;
case 0x6061bf:c.instructions+=2;goto B6061bf;
case 0x6061c2:c.instructions+=1;goto B6061c2;
case 0x6061c4:goto L6061c4;
case 0x6061c5:c.instructions+=1;goto B6061c5;
case 0x6061c7:goto L6061c7;
case 0x6061c8:c.instructions+=1;goto B6061c8;
case 0x6061ca:goto L6061ca;
case 0x6061cc:c.instructions+=2;goto B6061cc;
case 0x6061ce:c.instructions+=1;goto B6061ce;
case 0x6061d3:goto L6061d3;
case 0x6061d5:goto L6061d5;
case 0x6061d8:c.instructions+=5;goto B6061d8;
case 0x6061d9:c.instructions+=4;goto B6061d9;
case 0x6061de:c.instructions+=3;goto B6061de;
case 0x6061e3:c.instructions+=2;goto B6061e3;
case 0x6061e4:c.instructions+=1;goto B6061e4;
case 0x6061e9:goto L6061e9;
case 0x6061ec:c.instructions+=5;goto B6061ec;
case 0x6061ed:c.instructions+=4;goto B6061ed;
case 0x6061f2:c.instructions+=3;goto B6061f2;
case 0x6061f7:c.instructions+=2;goto B6061f7;
case 0x6061f8:c.instructions+=1;goto B6061f8;
case 0x6061fd:goto L6061fd;
case 0x606200:c.instructions+=5;goto B606200;
case 0x606202:c.instructions+=4;goto B606202;
case 0x606204:c.instructions+=3;goto B606204;
case 0x606209:c.instructions+=2;goto B606209;
case 0x60620a:c.instructions+=1;goto B60620a;
case 0x60620f:goto L60620f;
case 0x606212:c.instructions+=2;goto B606212;
case 0x606214:c.instructions+=1;goto B606214;
case 0x606219:goto L606219;
case 0x60621b:c.instructions+=1;goto B60621b;
case 0x606220:goto L606220;
case 0x606222:c.instructions+=3;goto B606222;
case 0x606224:c.instructions+=2;goto B606224;
case 0x606226:c.instructions+=1;goto B606226;
case 0x60622b:goto L60622b;
case 0x606230:goto L606230;
case 0x606232:c.instructions+=1;goto B606232;
case 0x606237:goto L606237;
case 0x60623c:goto L60623c;
case 0x60623f:c.instructions+=2;goto B60623f;
case 0x606241:c.instructions+=1;goto B606241;
case 0x606243:goto L606243;
case 0x606246:c.instructions+=1;goto B606246;
case 0x606248:goto L606248;
case 0x60624b:c.instructions+=3;goto B60624b;
case 0x60624d:c.instructions+=2;goto B60624d;
case 0x60624f:c.instructions+=1;goto B60624f;
case 0x606252:goto L606252;
case 0x606255:c.instructions+=2;goto B606255;
case 0x606257:c.instructions+=1;goto B606257;
case 0x60625d:goto L60625d;
case 0x606260:c.instructions+=2;goto B606260;
case 0x606262:c.instructions+=1;goto B606262;
case 0x606268:goto L606268;
case 0x60626b:c.instructions+=4;goto B60626b;
case 0x60626d:c.instructions+=3;goto B60626d;
case 0x60626e:c.instructions+=2;goto B60626e;
case 0x606270:c.instructions+=1;goto B606270;
case 0x606273:goto L606273;
case 0x606275:c.instructions+=2;goto B606275;
case 0x606277:c.instructions+=1;goto B606277;
case 0x60627a:goto L60627a;
case 0x60627f:goto L60627f;
case 0x606282:c.instructions+=5;goto B606282;
case 0x606283:c.instructions+=4;goto B606283;
case 0x606288:c.instructions+=3;goto B606288;
case 0x60628d:c.instructions+=2;goto B60628d;
case 0x60628e:c.instructions+=1;goto B60628e;
case 0x606293:goto L606293;
case 0x606296:c.instructions+=1;goto B606296;
case 0x606298:goto L606298;
case 0x60629b:c.instructions+=5;goto B60629b;
case 0x60629c:c.instructions+=4;goto B60629c;
case 0x6062a1:c.instructions+=3;goto B6062a1;
case 0x6062a6:c.instructions+=2;goto B6062a6;
case 0x6062a7:c.instructions+=1;goto B6062a7;
case 0x6062ac:goto L6062ac;
case 0x6062af:c.instructions+=5;goto B6062af;
case 0x6062b0:c.instructions+=4;goto B6062b0;
case 0x6062b5:c.instructions+=3;goto B6062b5;
case 0x6062ba:c.instructions+=2;goto B6062ba;
case 0x6062bb:c.instructions+=1;goto B6062bb;
case 0x6062c0:goto L6062c0;
case 0x6062c1:c.instructions+=2;goto B6062c1;
case 0x6062c6:c.instructions+=1;goto B6062c6;
case 0x6062c8:goto L6062c8;
case 0x6062cb:c.instructions+=5;goto B6062cb;
case 0x6062cc:c.instructions+=4;goto B6062cc;
case 0x6062d1:c.instructions+=3;goto B6062d1;
case 0x6062d6:c.instructions+=2;goto B6062d6;
case 0x6062d7:c.instructions+=1;goto B6062d7;
case 0x6062dc:goto L6062dc;
case 0x6062df:c.instructions+=5;goto B6062df;
case 0x6062e0:c.instructions+=4;goto B6062e0;
case 0x6062e5:c.instructions+=3;goto B6062e5;
case 0x6062ea:c.instructions+=2;goto B6062ea;
case 0x6062eb:c.instructions+=1;goto B6062eb;
case 0x6062f0:goto L6062f0;
case 0x6062f1:c.instructions+=1;goto B6062f1;
case 0x6062f6:goto L6062f6;
case 0x6062fb:goto L6062fb;
case 0x6062fe:c.instructions+=2;goto B6062fe;
case 0x6062ff:c.instructions+=1;goto B6062ff;
case 0x606304:goto L606304;
case 0x606307:goto L606307;
case 0x60630c:c.instructions+=3;goto B60630c;
case 0x60630e:c.instructions+=2;goto B60630e;
case 0x60630f:c.instructions+=1;goto B60630f;
case 0x606311:goto L606311;
case 0x606317:c.instructions+=2;goto B606317;
case 0x60631a:c.instructions+=1;goto B60631a;
case 0x60631c:goto L60631c;
case 0x606323:c.instructions+=1;goto B606323;
case 0x60632a:goto L60632a;
case 0x606330:c.instructions+=1;goto B606330;
case 0x606332:goto L606332;
case 0x606335:c.instructions+=2;goto B606335;
case 0x606337:c.instructions+=1;goto B606337;
case 0x606339:goto L606339;
case 0x60633a:c.instructions+=4;goto B60633a;
case 0x60633f:c.instructions+=3;goto B60633f;
case 0x606341:c.instructions+=2;goto B606341;
case 0x606343:c.instructions+=1;goto B606343;
case 0x606348:goto L606348;
case 0x60634b:goto L60634b;
case 0x60634c:c.instructions+=2;goto B60634c;
case 0x60634d:c.instructions+=1;goto B60634d;
case 0x6063b0:goto L6063b0;
case 0x6063b1:c.instructions+=5;goto B6063b1;
case 0x6063b2:c.instructions+=4;goto B6063b2;
case 0x6063b4:c.instructions+=3;goto B6063b4;
case 0x6063b7:c.instructions+=2;goto B6063b7;
case 0x6063b8:c.instructions+=1;goto B6063b8;
case 0x6063bd:goto L6063bd;
case 0x6063c0:c.instructions+=6;goto B6063c0;
case 0x6063c2:c.instructions+=5;goto B6063c2;
case 0x6063c3:c.instructions+=4;goto B6063c3;
case 0x6063c4:c.instructions+=3;goto B6063c4;
case 0x6063c6:c.instructions+=2;goto B6063c6;
case 0x6063cc:c.instructions+=1;goto B6063cc;
case 0x6063d1:goto L6063d1;
case 0x6063d7:c.instructions+=2;goto B6063d7;
case 0x6063d9:c.instructions+=1;goto B6063d9;
case 0x6063db:goto L6063db;
case 0x6063dd:c.instructions+=2;goto B6063dd;
case 0x6063df:c.instructions+=1;goto B6063df;
case 0x6063e1:goto L6063e1;
case 0x6063e7:goto L6063e7;
case 0x6063ed:c.instructions+=2;goto B6063ed;
case 0x6063ef:c.instructions+=1;goto B6063ef;
case 0x6063f1:goto L6063f1;
case 0x6063f3:c.instructions+=2;goto B6063f3;
case 0x6063f5:c.instructions+=1;goto B6063f5;
case 0x6063f7:goto L6063f7;
case 0x6063fd:goto L6063fd;
case 0x6063fe:c.instructions+=3;goto B6063fe;
case 0x6063ff:c.instructions+=2;goto B6063ff;
case 0x606401:c.instructions+=1;goto B606401;
case 0x606406:goto L606406;
case 0x606409:c.instructions+=5;goto B606409;
case 0x60640c:c.instructions+=4;goto B60640c;
case 0x606412:c.instructions+=3;goto B606412;
case 0x606414:c.instructions+=2;goto B606414;
case 0x606417:c.instructions+=1;goto B606417;
case 0x606419:goto L606419;
case 0x60641b:c.instructions+=1;goto B60641b;
case 0x606420:goto L606420;
case 0x606426:c.instructions+=3;goto B606426;
case 0x606427:c.instructions+=2;goto B606427;
case 0x606428:c.instructions+=1;goto B606428;
case 0x60642d:goto L60642d;
case 0x606430:goto L606430;
case 0x606436:c.instructions+=3;goto B606436;
case 0x606438:c.instructions+=2;goto B606438;
case 0x60643e:c.instructions+=1;goto B60643e;
case 0x606440:goto L606440;
case 0x606442:c.instructions+=1;goto B606442;
case 0x606447:goto L606447;
case 0x60644c:c.instructions+=3;goto B60644c;
case 0x60644d:c.instructions+=2;goto B60644d;
case 0x60644e:c.instructions+=1;goto B60644e;
case 0x606453:goto L606453;
case 0x606456:goto L606456;
case 0x60645c:c.instructions+=4;goto B60645c;
case 0x60645e:c.instructions+=3;goto B60645e;
case 0x606464:c.instructions+=2;goto B606464;
case 0x606465:c.instructions+=1;goto B606465;
case 0x606467:goto L606467;
case 0x606468:c.instructions+=1;goto B606468;
case 0x60646d:goto L60646d;
case 0x606470:c.instructions+=1;goto B606470;
case 0x606476:goto L606476;
case 0x606477:c.instructions+=2;goto B606477;
case 0x606478:c.instructions+=1;goto B606478;
case 0x606480:goto L606480;
case 0x606482:c.instructions+=23;goto B606482;
case 0x606487:c.instructions+=22;goto B606487;
case 0x60648d:c.instructions+=21;goto B60648d;
case 0x60648e:c.instructions+=20;goto B60648e;
case 0x606495:c.instructions+=19;goto B606495;
case 0x606498:c.instructions+=18;goto B606498;
case 0x606499:c.instructions+=17;goto B606499;
case 0x60649a:c.instructions+=16;goto B60649a;
case 0x60649e:c.instructions+=15;goto B60649e;
case 0x60649f:c.instructions+=14;goto B60649f;
case 0x6064a1:c.instructions+=13;goto B6064a1;
case 0x6064a4:c.instructions+=12;goto B6064a4;
case 0x6064a5:c.instructions+=11;goto B6064a5;
case 0x6064a7:c.instructions+=10;goto B6064a7;
case 0x6064aa:c.instructions+=9;goto B6064aa;
case 0x6064ac:c.instructions+=8;goto B6064ac;
case 0x6064b0:c.instructions+=7;goto B6064b0;
case 0x6064b3:c.instructions+=6;goto B6064b3;
case 0x6064b5:c.instructions+=5;goto B6064b5;
case 0x6064b8:c.instructions+=4;goto B6064b8;
case 0x6064ba:c.instructions+=3;goto B6064ba;
case 0x6064bb:c.instructions+=2;goto B6064bb;
case 0x6064be:c.instructions+=1;goto B6064be;
case 0x6064c3:goto L6064c3;
case 0x6064c4:c.instructions+=2;goto B6064c4;
case 0x6064c8:c.instructions+=1;goto B6064c8;
case 0x6064cd:goto L6064cd;
case 0x6064d2:c.instructions+=2;goto B6064d2;
case 0x6064da:c.instructions+=1;goto B6064da;
case 0x6064df:goto L6064df;
case 0x6064e2:c.instructions+=3;goto B6064e2;
case 0x6064e4:c.instructions+=2;goto B6064e4;
case 0x6064e8:c.instructions+=1;goto B6064e8;
case 0x6064ea:goto L6064ea;
case 0x6064ec:c.instructions+=2;goto B6064ec;
case 0x6064f1:c.instructions+=1;goto B6064f1;
case 0x6064f3:goto L6064f3;
case 0x6064f7:c.instructions+=9;goto B6064f7;
case 0x6064f9:c.instructions+=8;goto B6064f9;
case 0x606500:c.instructions+=7;goto B606500;
case 0x606501:c.instructions+=6;goto B606501;
case 0x606504:c.instructions+=5;goto B606504;
case 0x606505:c.instructions+=4;goto B606505;
case 0x606506:c.instructions+=3;goto B606506;
case 0x606507:c.instructions+=2;goto B606507;
case 0x606509:c.instructions+=1;goto B606509;
case 0x60650e:goto L60650e;
case 0x606510:goto L606510;
case 0x606512:c.instructions+=2;goto B606512;
case 0x606517:c.instructions+=1;goto B606517;
case 0x606519:goto L606519;
case 0x60651d:c.instructions+=6;goto B60651d;
case 0x60651e:c.instructions+=5;goto B60651e;
case 0x60651f:c.instructions+=4;goto B60651f;
case 0x606520:c.instructions+=3;goto B606520;
case 0x606521:c.instructions+=2;goto B606521;
case 0x606523:c.instructions+=1;goto B606523;
case 0x606528:goto L606528;
case 0x60652a:goto L60652a;
case 0x60652c:goto L60652c;
case 0x606530:c.instructions+=5;goto B606530;
case 0x606532:c.instructions+=4;goto B606532;
case 0x606533:c.instructions+=3;goto B606533;
case 0x606535:c.instructions+=2;goto B606535;
case 0x60653a:c.instructions+=1;goto B60653a;
case 0x60653f:goto L60653f;
case 0x606542:c.instructions+=1;goto B606542;
case 0x606544:goto L606544;
case 0x606545:c.instructions+=1;goto B606545;
case 0x60654a:goto L60654a;
case 0x60654d:c.instructions+=3;goto B60654d;
case 0x60654e:c.instructions+=2;goto B60654e;
case 0x606550:c.instructions+=1;goto B606550;
case 0x606555:goto L606555;
case 0x60655a:c.instructions+=2;goto B60655a;
case 0x60655c:c.instructions+=1;goto B60655c;
case 0x60655e:goto L60655e;
case 0x606560:c.instructions+=1;goto B606560;
case 0x606565:goto L606565;
case 0x606567:goto L606567;
case 0x60656a:c.instructions+=2;goto B60656a;
case 0x60656c:c.instructions+=1;goto B60656c;
case 0x60656e:goto L60656e;
case 0x60656f:c.instructions+=1;goto B60656f;
case 0x606571:goto L606571;
case 0x606573:goto L606573;
case 0x606578:goto L606578;
case 0x60657e:c.instructions+=8;goto B60657e;
case 0x606581:c.instructions+=7;goto B606581;
case 0x606583:c.instructions+=6;goto B606583;
case 0x606586:c.instructions+=5;goto B606586;
case 0x606588:c.instructions+=4;goto B606588;
case 0x60658c:c.instructions+=3;goto B60658c;
case 0x60658f:c.instructions+=2;goto B60658f;
case 0x606597:c.instructions+=1;goto B606597;
case 0x60659c:goto L60659c;
case 0x6065a0:c.instructions+=7;goto B6065a0;
case 0x6065a1:c.instructions+=6;goto B6065a1;
case 0x6065a2:c.instructions+=5;goto B6065a2;
case 0x6065a3:c.instructions+=4;goto B6065a3;
case 0x6065a4:c.instructions+=3;goto B6065a4;
case 0x6065ab:c.instructions+=2;goto B6065ab;
case 0x6065ae:c.instructions+=1;goto B6065ae;
case 0x6065b0:goto L6065b0;
case 0x6065b1:c.instructions+=10;goto B6065b1;
case 0x6065b3:c.instructions+=9;goto B6065b3;
case 0x6065b6:c.instructions+=8;goto B6065b6;
case 0x6065bc:c.instructions+=7;goto B6065bc;
case 0x6065bd:c.instructions+=6;goto B6065bd;
case 0x6065be:c.instructions+=5;goto B6065be;
case 0x6065bf:c.instructions+=4;goto B6065bf;
case 0x6065c3:c.instructions+=3;goto B6065c3;
case 0x6065c4:c.instructions+=2;goto B6065c4;
case 0x6065c6:c.instructions+=1;goto B6065c6;
case 0x6065cb:goto L6065cb;
case 0x6065ce:c.instructions+=3;goto B6065ce;
case 0x6065d3:c.instructions+=2;goto B6065d3;
case 0x6065d7:c.instructions+=1;goto B6065d7;
case 0x6065e0:goto L6065e0;
case 0x6065e6:c.instructions+=3;goto B6065e6;
case 0x6065e8:c.instructions+=2;goto B6065e8;
case 0x6065ea:c.instructions+=1;goto B6065ea;
case 0x6065f0:goto L6065f0;
case 0x6065f6:goto L6065f6;
case 0x6065f9:c.instructions+=1;goto B6065f9;
case 0x6065fb:goto L6065fb;
case 0x6065ff:c.instructions+=2;goto B6065ff;
case 0x606601:c.instructions+=1;goto B606601;
case 0x606603:goto L606603;
case 0x606604:c.instructions+=3;goto B606604;
case 0x60660a:c.instructions+=2;goto B60660a;
case 0x60660c:c.instructions+=1;goto B60660c;
case 0x60660e:goto L60660e;
case 0x606613:goto L606613;
case 0x606619:c.instructions+=2;goto B606619;
case 0x60661b:c.instructions+=1;goto B60661b;
case 0x60661d:goto L60661d;
case 0x60661f:c.instructions+=2;goto B60661f;
case 0x606621:c.instructions+=1;goto B606621;
case 0x606623:goto L606623;
case 0x606626:c.instructions+=2;goto B606626;
case 0x606629:c.instructions+=1;goto B606629;
case 0x60662b:goto L60662b;
case 0x606631:c.instructions+=4;goto B606631;
case 0x606637:c.instructions+=3;goto B606637;
case 0x606639:c.instructions+=2;goto B606639;
case 0x60663c:c.instructions+=1;goto B60663c;
case 0x60663e:goto L60663e;
case 0x606643:c.instructions+=1;goto B606643;
case 0x606645:goto L606645;
case 0x606647:goto L606647;
case 0x606649:c.instructions+=9;goto B606649;
case 0x60664b:c.instructions+=8;goto B60664b;
case 0x60664e:c.instructions+=7;goto B60664e;
case 0x606650:c.instructions+=6;goto B606650;
case 0x606654:c.instructions+=5;goto B606654;
case 0x606656:c.instructions+=4;goto B606656;
case 0x60665c:c.instructions+=3;goto B60665c;
case 0x60665e:c.instructions+=2;goto B60665e;
case 0x60665f:c.instructions+=1;goto B60665f;
case 0x606661:goto L606661;
case 0x606667:c.instructions+=9;goto B606667;
case 0x60666d:c.instructions+=8;goto B60666d;
case 0x606671:c.instructions+=7;goto B606671;
case 0x606678:c.instructions+=6;goto B606678;
case 0x60667c:c.instructions+=5;goto B60667c;
case 0x606682:c.instructions+=4;goto B606682;
case 0x606687:c.instructions+=3;goto B606687;
case 0x60668b:c.instructions+=2;goto B60668b;
case 0x60668f:c.instructions+=1;goto B60668f;
case 0x606691:goto L606691;
case 0x606694:c.instructions+=1;goto B606694;
case 0x606696:goto L606696;
case 0x606698:c.instructions+=1;goto B606698;
case 0x60669a:goto L60669a;
case 0x60669c:goto L60669c;
case 0x6066a1:goto L6066a1;
case 0x6066a4:goto L6066a4;
case 0x6066a5:c.instructions+=3;goto B6066a5;
case 0x6066a8:c.instructions+=2;goto B6066a8;
case 0x6066ab:c.instructions+=1;goto B6066ab;
case 0x6066b1:goto L6066b1;
case 0x6066b7:c.instructions+=1;goto B6066b7;
case 0x6066bc:goto L6066bc;
case 0x6066c1:c.instructions+=3;goto B6066c1;
case 0x6066c3:c.instructions+=2;goto B6066c3;
case 0x6066c5:c.instructions+=1;goto B6066c5;
case 0x6066c7:goto L6066c7;
case 0x6066c9:c.instructions+=1;goto B6066c9;
case 0x6066d0:goto L6066d0;
case 0x6066d6:c.instructions+=4;goto B6066d6;
case 0x6066da:c.instructions+=3;goto B6066da;
case 0x6066dd:c.instructions+=2;goto B6066dd;
case 0x6066e0:c.instructions+=1;goto B6066e0;
case 0x6066e2:goto L6066e2;
case 0x6066e8:c.instructions+=3;goto B6066e8;
case 0x6066ee:c.instructions+=2;goto B6066ee;
case 0x6066ef:c.instructions+=1;goto B6066ef;
case 0x6066f4:goto L6066f4;
case 0x6066f6:c.instructions+=1;goto B6066f6;
case 0x6066f8:goto L6066f8;
case 0x6066fb:c.instructions+=4;goto B6066fb;
case 0x6066fd:c.instructions+=3;goto B6066fd;
case 0x606700:c.instructions+=2;goto B606700;
case 0x606703:c.instructions+=1;goto B606703;
case 0x606705:goto L606705;
case 0x60670a:c.instructions+=4;goto B60670a;
case 0x60670b:c.instructions+=3;goto B60670b;
case 0x606711:c.instructions+=2;goto B606711;
case 0x606713:c.instructions+=1;goto B606713;
case 0x606715:goto L606715;
case 0x60671b:c.instructions+=1;goto B60671b;
case 0x606720:goto L606720;
case 0x606721:c.instructions+=5;goto B606721;
case 0x606722:c.instructions+=4;goto B606722;
case 0x606723:c.instructions+=3;goto B606723;
case 0x606725:c.instructions+=2;goto B606725;
case 0x606726:c.instructions+=1;goto B606726;
case 0x606730:goto L606730;
case 0x606731:c.instructions+=8;goto B606731;
case 0x606733:c.instructions+=7;goto B606733;
case 0x606736:c.instructions+=6;goto B606736;
case 0x606737:c.instructions+=5;goto B606737;
case 0x606738:c.instructions+=4;goto B606738;
case 0x60673b:c.instructions+=3;goto B60673b;
case 0x60673c:c.instructions+=2;goto B60673c;
case 0x60673e:c.instructions+=1;goto B60673e;
case 0x606744:goto L606744;
case 0x60674b:c.instructions+=1;goto B60674b;
case 0x606752:goto L606752;
case 0x606755:c.instructions+=3;goto B606755;
case 0x606758:c.instructions+=2;goto B606758;
case 0x60675b:c.instructions+=1;goto B60675b;
case 0x606761:goto L606761;
case 0x606768:c.instructions+=1;goto B606768;
case 0x60676f:goto L60676f;
case 0x606774:c.instructions+=1;goto B606774;
case 0x606779:goto L606779;
case 0x60677c:c.instructions+=2;goto B60677c;
case 0x60677e:c.instructions+=1;goto B60677e;
case 0x606784:goto L606784;
case 0x606786:c.instructions+=2;goto B606786;
case 0x60678b:c.instructions+=1;goto B60678b;
case 0x606790:goto L606790;
case 0x606795:c.instructions+=2;goto B606795;
case 0x606797:c.instructions+=1;goto B606797;
case 0x606799:goto L606799;
case 0x60679e:goto L60679e;
case 0x60679f:c.instructions+=1;goto B60679f;
case 0x6067a4:goto L6067a4;
case 0x6067a7:c.instructions+=2;goto B6067a7;
case 0x6067a9:c.instructions+=1;goto B6067a9;
case 0x6067af:goto L6067af;
case 0x6067b1:c.instructions+=1;goto B6067b1;
case 0x6067b6:goto L6067b6;
case 0x6067b7:c.instructions+=1;goto B6067b7;
case 0x6067bc:goto L6067bc;
case 0x6067bf:c.instructions+=5;goto B6067bf;
case 0x6067c0:c.instructions+=4;goto B6067c0;
case 0x6067c5:c.instructions+=3;goto B6067c5;
case 0x6067c6:c.instructions+=2;goto B6067c6;
case 0x6067c7:c.instructions+=1;goto B6067c7;
case 0x6067ca:goto L6067ca;
case 0x6067cf:goto L6067cf;
case 0x6067d1:c.instructions+=1;goto B6067d1;
case 0x6067d7:goto L6067d7;
case 0x6067dc:goto L6067dc;
case 0x6067de:c.instructions+=1;goto B6067de;
case 0x6067e4:goto L6067e4;
case 0x6067e9:c.instructions+=1;goto B6067e9;
case 0x6067ee:goto L6067ee;
case 0x6067f0:c.instructions+=1;goto B6067f0;
case 0x6067f2:goto L6067f2;
case 0x6067f9:c.instructions+=1;goto B6067f9;
case 0x6067fb:goto L6067fb;
case 0x6067fd:c.instructions+=3;goto B6067fd;
case 0x606802:c.instructions+=2;goto B606802;
case 0x606807:c.instructions+=1;goto B606807;
case 0x60680c:goto L60680c;
case 0x60680f:c.instructions+=5;goto B60680f;
case 0x606810:c.instructions+=4;goto B606810;
case 0x606815:c.instructions+=3;goto B606815;
case 0x606816:c.instructions+=2;goto B606816;
case 0x606817:c.instructions+=1;goto B606817;
case 0x60681a:goto L60681a;
case 0x60681f:c.instructions+=1;goto B60681f;
case 0x606824:goto L606824;
case 0x606827:c.instructions+=2;goto B606827;
case 0x606829:c.instructions+=1;goto B606829;
case 0x60682b:goto L60682b;
case 0x606830:c.instructions+=1;goto B606830;
case 0x606835:goto L606835;
case 0x606838:goto L606838;
case 0x60683a:c.instructions+=2;goto B60683a;
case 0x60683f:c.instructions+=1;goto B60683f;
case 0x606844:goto L606844;
case 0x606847:c.instructions+=5;goto B606847;
case 0x606848:c.instructions+=4;goto B606848;
case 0x60684d:c.instructions+=3;goto B60684d;
case 0x60684e:c.instructions+=2;goto B60684e;
case 0x60684f:c.instructions+=1;goto B60684f;
case 0x606852:goto L606852;
case 0x606854:c.instructions+=2;goto B606854;
case 0x606859:c.instructions+=1;goto B606859;
case 0x60685e:goto L60685e;
case 0x606863:goto L606863;
case 0x606864:c.instructions+=4;goto B606864;
case 0x606869:c.instructions+=3;goto B606869;
case 0x60686a:c.instructions+=2;goto B60686a;
case 0x60686b:c.instructions+=1;goto B60686b;
case 0x60686e:goto L60686e;
case 0x606870:c.instructions+=2;goto B606870;
case 0x606875:c.instructions+=1;goto B606875;
case 0x60687a:goto L60687a;
case 0x606880:c.instructions+=2;goto B606880;
case 0x606883:c.instructions+=1;goto B606883;
case 0x606885:goto L606885;
case 0x60688a:goto L60688a;
case 0x60688b:c.instructions+=4;goto B60688b;
case 0x606890:c.instructions+=3;goto B606890;
case 0x606891:c.instructions+=2;goto B606891;
case 0x606892:c.instructions+=1;goto B606892;
case 0x606895:goto L606895;
case 0x606897:c.instructions+=2;goto B606897;
case 0x60689c:c.instructions+=1;goto B60689c;
case 0x6068a1:goto L6068a1;
case 0x6068a6:c.instructions+=2;goto B6068a6;
case 0x6068a9:c.instructions+=1;goto B6068a9;
case 0x6068ab:goto L6068ab;
case 0x6068ad:c.instructions+=2;goto B6068ad;
case 0x6068b2:c.instructions+=1;goto B6068b2;
case 0x6068b7:goto L6068b7;
case 0x6068ba:c.instructions+=5;goto B6068ba;
case 0x6068bb:c.instructions+=4;goto B6068bb;
case 0x6068c0:c.instructions+=3;goto B6068c0;
case 0x6068c1:c.instructions+=2;goto B6068c1;
case 0x6068c2:c.instructions+=1;goto B6068c2;
case 0x6068c5:goto L6068c5;
case 0x6068c7:c.instructions+=2;goto B6068c7;
case 0x6068cc:c.instructions+=1;goto B6068cc;
case 0x6068d1:goto L6068d1;
case 0x6068d7:c.instructions+=2;goto B6068d7;
case 0x6068da:c.instructions+=1;goto B6068da;
case 0x6068dc:goto L6068dc;
case 0x6068de:c.instructions+=2;goto B6068de;
case 0x6068e3:c.instructions+=1;goto B6068e3;
case 0x6068e8:goto L6068e8;
case 0x6068eb:goto L6068eb;
case 0x6068ec:c.instructions+=4;goto B6068ec;
case 0x6068f1:c.instructions+=3;goto B6068f1;
case 0x6068f2:c.instructions+=2;goto B6068f2;
case 0x6068f3:c.instructions+=1;goto B6068f3;
case 0x6068f6:goto L6068f6;
case 0x6068fb:goto L6068fb;
case 0x6068fe:c.instructions+=3;goto B6068fe;
case 0x606901:c.instructions+=2;goto B606901;
case 0x606904:c.instructions+=1;goto B606904;
case 0x60690a:goto L60690a;
case 0x606911:c.instructions+=1;goto B606911;
case 0x606918:goto L606918;
case 0x60691d:c.instructions+=1;goto B60691d;
case 0x606922:goto L606922;
case 0x606925:c.instructions+=2;goto B606925;
case 0x606927:c.instructions+=1;goto B606927;
case 0x60692d:goto L60692d;
case 0x606932:c.instructions+=2;goto B606932;
case 0x606934:c.instructions+=1;goto B606934;
case 0x606936:goto L606936;
case 0x60693b:goto L60693b;
case 0x60693c:c.instructions+=1;goto B60693c;
case 0x606941:goto L606941;
case 0x606944:c.instructions+=2;goto B606944;
case 0x606946:c.instructions+=1;goto B606946;
case 0x60694c:goto L60694c;
case 0x606951:goto L606951;
case 0x606952:c.instructions+=1;goto B606952;
case 0x606954:goto L606954;
case 0x606959:goto L606959;
case 0x60695b:c.instructions+=1;goto B60695b;
case 0x60695d:goto L60695d;
case 0x606962:c.instructions+=1;goto B606962;
case 0x606967:goto L606967;
case 0x606969:c.instructions+=1;goto B606969;
case 0x60696b:goto L60696b;
case 0x606972:c.instructions+=1;goto B606972;
case 0x606974:goto L606974;
case 0x606976:c.instructions+=3;goto B606976;
case 0x60697b:c.instructions+=2;goto B60697b;
case 0x606980:c.instructions+=1;goto B606980;
case 0x606985:goto L606985;
case 0x606988:c.instructions+=1;goto B606988;
case 0x60698d:goto L60698d;
case 0x60698e:c.instructions+=4;goto B60698e;
case 0x606993:c.instructions+=3;goto B606993;
case 0x606994:c.instructions+=2;goto B606994;
case 0x606995:c.instructions+=1;goto B606995;
case 0x606998:goto L606998;
case 0x60699d:c.instructions+=1;goto B60699d;
case 0x60699f:goto L60699f;
case 0x6069a4:goto L6069a4;
case 0x6069a9:goto L6069a9;
case 0x6069aa:c.instructions+=4;goto B6069aa;
case 0x6069af:c.instructions+=3;goto B6069af;
case 0x6069b0:c.instructions+=2;goto B6069b0;
case 0x6069b1:c.instructions+=1;goto B6069b1;
case 0x6069b4:goto L6069b4;
case 0x6069b9:goto L6069b9;
case 0x6069be:goto L6069be;
case 0x6069bf:c.instructions+=4;goto B6069bf;
case 0x6069c4:c.instructions+=3;goto B6069c4;
case 0x6069c5:c.instructions+=2;goto B6069c5;
case 0x6069c6:c.instructions+=1;goto B6069c6;
case 0x6069c9:goto L6069c9;
case 0x6069ce:goto L6069ce;
case 0x6069d3:goto L6069d3;
case 0x6069d6:goto L6069d6;
case 0x6069db:goto L6069db;
case 0x6069dc:c.instructions+=4;goto B6069dc;
case 0x6069e1:c.instructions+=3;goto B6069e1;
case 0x6069e2:c.instructions+=2;goto B6069e2;
case 0x6069e3:c.instructions+=1;goto B6069e3;
case 0x6069e6:goto L6069e6;
case 0x6069eb:c.instructions+=1;goto B6069eb;
case 0x6069f0:goto L6069f0;
case 0x6069f2:c.instructions+=1;goto B6069f2;
case 0x6069f4:goto L6069f4;
case 0x6069f9:c.instructions+=1;goto B6069f9;
case 0x6069fe:goto L6069fe;
case 0x6069ff:c.instructions+=4;goto B6069ff;
case 0x606a04:c.instructions+=3;goto B606a04;
case 0x606a05:c.instructions+=2;goto B606a05;
case 0x606a06:c.instructions+=1;goto B606a06;
case 0x606a09:goto L606a09;
case 0x606a0b:c.instructions+=2;goto B606a0b;
case 0x606a0d:c.instructions+=1;goto B606a0d;
case 0x606a12:goto L606a12;
case 0x606a13:c.instructions+=4;goto B606a13;
case 0x606a18:c.instructions+=3;goto B606a18;
case 0x606a19:c.instructions+=2;goto B606a19;
case 0x606a1a:c.instructions+=1;goto B606a1a;
case 0x606a1d:goto L606a1d;
case 0x606a20:c.instructions+=3;goto B606a20;
case 0x606a26:c.instructions+=2;goto B606a26;
case 0x606a27:c.instructions+=1;goto B606a27;
case 0x606a2c:goto L606a2c;
case 0x606a2f:c.instructions+=1;goto B606a2f;
case 0x606a31:goto L606a31;
case 0x606a36:goto L606a36;
case 0x606a38:c.instructions+=1;goto B606a38;
case 0x606a3a:goto L606a3a;
case 0x606a3f:goto L606a3f;
case 0x606a42:c.instructions+=3;goto B606a42;
case 0x606a43:c.instructions+=2;goto B606a43;
case 0x606a45:c.instructions+=1;goto B606a45;
case 0x606a4a:goto L606a4a;
case 0x606a4b:c.instructions+=5;goto B606a4b;
case 0x606a4f:c.instructions+=4;goto B606a4f;
case 0x606a54:c.instructions+=3;goto B606a54;
case 0x606a55:c.instructions+=2;goto B606a55;
case 0x606a56:c.instructions+=1;goto B606a56;
case 0x606a59:goto L606a59;
case 0x606a5c:c.instructions+=1;goto B606a5c;
case 0x606a5e:goto L606a5e;
case 0x606a63:goto L606a63;
case 0x606a65:c.instructions+=1;goto B606a65;
case 0x606a67:goto L606a67;
case 0x606a6c:goto L606a6c;
case 0x606a6e:c.instructions+=2;goto B606a6e;
case 0x606a70:c.instructions+=1;goto B606a70;
case 0x606a75:goto L606a75;
case 0x606a76:c.instructions+=5;goto B606a76;
case 0x606a7a:c.instructions+=4;goto B606a7a;
case 0x606a7f:c.instructions+=3;goto B606a7f;
case 0x606a80:c.instructions+=2;goto B606a80;
case 0x606a81:c.instructions+=1;goto B606a81;
case 0x606a84:goto L606a84;
case 0x606a87:c.instructions+=1;goto B606a87;
case 0x606a89:goto L606a89;
case 0x606a8c:c.instructions+=3;goto B606a8c;
case 0x606a8d:c.instructions+=2;goto B606a8d;
case 0x606a8f:c.instructions+=1;goto B606a8f;
case 0x606a94:goto L606a94;
case 0x606a95:c.instructions+=5;goto B606a95;
case 0x606a99:c.instructions+=4;goto B606a99;
case 0x606a9e:c.instructions+=3;goto B606a9e;
case 0x606a9f:c.instructions+=2;goto B606a9f;
case 0x606aa0:c.instructions+=1;goto B606aa0;
case 0x606aa3:goto L606aa3;
case 0x606aa6:c.instructions+=1;goto B606aa6;
case 0x606aac:goto L606aac;
case 0x606aaf:c.instructions+=1;goto B606aaf;
case 0x606ab1:goto L606ab1;
case 0x606ab3:c.instructions+=4;goto B606ab3;
case 0x606ab5:c.instructions+=3;goto B606ab5;
case 0x606ab7:c.instructions+=2;goto B606ab7;
case 0x606abe:c.instructions+=1;goto B606abe;
case 0x606ac3:goto L606ac3;
case 0x606ac4:c.instructions+=5;goto B606ac4;
case 0x606ac8:c.instructions+=4;goto B606ac8;
case 0x606acd:c.instructions+=3;goto B606acd;
case 0x606ace:c.instructions+=2;goto B606ace;
case 0x606acf:c.instructions+=1;goto B606acf;
case 0x606ad2:goto L606ad2;
case 0x606ad5:c.instructions+=1;goto B606ad5;
case 0x606ad7:goto L606ad7;
case 0x606ada:c.instructions+=1;goto B606ada;
case 0x606adc:goto L606adc;
case 0x606adf:c.instructions+=1;goto B606adf;
case 0x606ae1:goto L606ae1;
case 0x606ae4:c.instructions+=1;goto B606ae4;
case 0x606ae6:goto L606ae6;
case 0x606ae8:c.instructions+=1;goto B606ae8;
case 0x606aed:goto L606aed;
case 0x606aee:c.instructions+=5;goto B606aee;
case 0x606af2:c.instructions+=4;goto B606af2;
case 0x606af7:c.instructions+=3;goto B606af7;
case 0x606af8:c.instructions+=2;goto B606af8;
case 0x606af9:c.instructions+=1;goto B606af9;
case 0x606afc:goto L606afc;
case 0x606afe:c.instructions+=2;goto B606afe;
case 0x606b03:c.instructions+=1;goto B606b03;
case 0x606b08:goto L606b08;
case 0x606b0d:c.instructions+=2;goto B606b0d;
case 0x606b0f:c.instructions+=1;goto B606b0f;
case 0x606b11:goto L606b11;
case 0x606b14:c.instructions+=1;goto B606b14;
case 0x606b16:goto L606b16;
case 0x606b18:c.instructions+=2;goto B606b18;
case 0x606b1a:c.instructions+=1;goto B606b1a;
case 0x606b1f:goto L606b1f;
case 0x606b25:c.instructions+=2;goto B606b25;
case 0x606b27:c.instructions+=1;goto B606b27;
case 0x606b2c:goto L606b2c;
case 0x606b32:c.instructions+=1;goto B606b32;
case 0x606b37:goto L606b37;
case 0x606b38:c.instructions+=5;goto B606b38;
case 0x606b3c:c.instructions+=4;goto B606b3c;
case 0x606b41:c.instructions+=3;goto B606b41;
case 0x606b42:c.instructions+=2;goto B606b42;
case 0x606b43:c.instructions+=1;goto B606b43;
case 0x606b46:goto L606b46;
case 0x606b48:c.instructions+=3;goto B606b48;
case 0x606b4a:c.instructions+=2;goto B606b4a;
case 0x606b54:c.instructions+=1;goto B606b54;
case 0x606b59:goto L606b59;
case 0x606b5b:c.instructions+=3;goto B606b5b;
case 0x606b5d:c.instructions+=2;goto B606b5d;
case 0x606b5f:c.instructions+=1;goto B606b5f;
case 0x606b64:goto L606b64;
case 0x606b65:c.instructions+=5;goto B606b65;
case 0x606b69:c.instructions+=4;goto B606b69;
case 0x606b6e:c.instructions+=3;goto B606b6e;
case 0x606b6f:c.instructions+=2;goto B606b6f;
case 0x606b70:c.instructions+=1;goto B606b70;
case 0x606b73:goto L606b73;
case 0x606b75:c.instructions+=2;goto B606b75;
case 0x606b77:c.instructions+=1;goto B606b77;
case 0x606b7c:goto L606b7c;
case 0x606b7e:c.instructions+=3;goto B606b7e;
case 0x606b80:c.instructions+=2;goto B606b80;
case 0x606b82:c.instructions+=1;goto B606b82;
case 0x606b87:goto L606b87;
case 0x606b88:c.instructions+=4;goto B606b88;
case 0x606b8d:c.instructions+=3;goto B606b8d;
case 0x606b8e:c.instructions+=2;goto B606b8e;
case 0x606b8f:c.instructions+=1;goto B606b8f;
case 0x606b92:goto L606b92;
case 0x606b95:c.instructions+=3;goto B606b95;
case 0x606b97:c.instructions+=2;goto B606b97;
case 0x606b9d:c.instructions+=1;goto B606b9d;
case 0x606b9f:goto L606b9f;
case 0x606ba1:c.instructions+=1;goto B606ba1;
case 0x606ba3:goto L606ba3;
case 0x606ba4:goto L606ba4;
case 0x606ba9:goto L606ba9;
case 0x606bae:c.instructions+=2;goto B606bae;
case 0x606bb0:c.instructions+=1;goto B606bb0;
case 0x606bb2:goto L606bb2;
case 0x606bb7:c.instructions+=1;goto B606bb7;
case 0x606bbc:goto L606bbc;
case 0x606bbe:c.instructions+=2;goto B606bbe;
case 0x606bc0:c.instructions+=1;goto B606bc0;
case 0x606bc5:goto L606bc5;
case 0x606bc6:c.instructions+=3;goto B606bc6;
case 0x606bc8:c.instructions+=2;goto B606bc8;
case 0x606bca:c.instructions+=1;goto B606bca;
case 0x606bcf:goto L606bcf;
case 0x606bd0:c.instructions+=4;goto B606bd0;
case 0x606bd5:c.instructions+=3;goto B606bd5;
case 0x606bd6:c.instructions+=2;goto B606bd6;
case 0x606bd7:c.instructions+=1;goto B606bd7;
case 0x606bda:goto L606bda;
case 0x606bdc:c.instructions+=2;goto B606bdc;
case 0x606bde:c.instructions+=1;goto B606bde;
case 0x606be3:goto L606be3;
case 0x606be9:c.instructions+=2;goto B606be9;
case 0x606beb:c.instructions+=1;goto B606beb;
case 0x606bf0:goto L606bf0;
case 0x606bf1:c.instructions+=4;goto B606bf1;
case 0x606bf6:c.instructions+=3;goto B606bf6;
case 0x606bf7:c.instructions+=2;goto B606bf7;
case 0x606bf8:c.instructions+=1;goto B606bf8;
case 0x606bfb:goto L606bfb;
case 0x606bfd:c.instructions+=2;goto B606bfd;
case 0x606bff:c.instructions+=1;goto B606bff;
case 0x606c04:goto L606c04;
case 0x606c06:c.instructions+=3;goto B606c06;
case 0x606c08:c.instructions+=2;goto B606c08;
case 0x606c0a:c.instructions+=1;goto B606c0a;
case 0x606c0f:goto L606c0f;
case 0x606c10:c.instructions+=4;goto B606c10;
case 0x606c15:c.instructions+=3;goto B606c15;
case 0x606c16:c.instructions+=2;goto B606c16;
case 0x606c17:c.instructions+=1;goto B606c17;
case 0x606c1a:goto L606c1a;
case 0x606c1b:c.instructions+=4;goto B606c1b;
case 0x606c1d:c.instructions+=3;goto B606c1d;
case 0x606c1e:c.instructions+=2;goto B606c1e;
case 0x606c1f:c.instructions+=1;goto B606c1f;
case 0x606cb0:goto L606cb0;
case 0x606cb1:c.instructions+=10;goto B606cb1;
case 0x606cb5:c.instructions+=9;goto B606cb5;
case 0x606cb6:c.instructions+=8;goto B606cb6;
case 0x606cb7:c.instructions+=7;goto B606cb7;
case 0x606cb8:c.instructions+=6;goto B606cb8;
case 0x606cb9:c.instructions+=5;goto B606cb9;
case 0x606cbb:c.instructions+=4;goto B606cbb;
case 0x606cc2:c.instructions+=3;goto B606cc2;
case 0x606cc4:c.instructions+=2;goto B606cc4;
case 0x606cc6:c.instructions+=1;goto B606cc6;
case 0x606cc8:goto L606cc8;
case 0x606ccb:c.instructions+=2;goto B606ccb;
case 0x606ccf:c.instructions+=1;goto B606ccf;
case 0x606cd1:goto L606cd1;
case 0x606cd9:goto L606cd9;
case 0x606cdd:c.instructions+=5;goto B606cdd;
case 0x606cdf:c.instructions+=4;goto B606cdf;
case 0x606ce2:c.instructions+=3;goto B606ce2;
case 0x606ce5:c.instructions+=2;goto B606ce5;
case 0x606ce9:c.instructions+=1;goto B606ce9;
case 0x606ceb:goto L606ceb;
case 0x606cf2:goto L606cf2;
case 0x606cf8:c.instructions+=6;goto B606cf8;
case 0x606cfb:c.instructions+=5;goto B606cfb;
case 0x606d01:c.instructions+=4;goto B606d01;
case 0x606d03:c.instructions+=3;goto B606d03;
case 0x606d08:c.instructions+=2;goto B606d08;
case 0x606d0a:c.instructions+=1;goto B606d0a;
case 0x606d0f:goto L606d0f;
case 0x606d11:goto L606d11;
case 0x606d17:c.instructions+=6;goto B606d17;
case 0x606d1d:c.instructions+=5;goto B606d1d;
case 0x606d23:c.instructions+=4;goto B606d23;
case 0x606d29:c.instructions+=3;goto B606d29;
case 0x606d2f:c.instructions+=2;goto B606d2f;
case 0x606d35:c.instructions+=1;goto B606d35;
case 0x606d3a:goto L606d3a;
case 0x606d3f:c.instructions+=3;goto B606d3f;
case 0x606d41:c.instructions+=2;goto B606d41;
case 0x606d44:c.instructions+=1;goto B606d44;
case 0x606d49:goto L606d49;
case 0x606d4d:goto L606d4d;
case 0x606d53:c.instructions+=5;goto B606d53;
case 0x606d55:c.instructions+=4;goto B606d55;
case 0x606d58:c.instructions+=3;goto B606d58;
case 0x606d5c:c.instructions+=2;goto B606d5c;
case 0x606d5f:c.instructions+=1;goto B606d5f;
case 0x606d61:goto L606d61;
case 0x606d66:goto L606d66;
case 0x606d6b:c.instructions+=2;goto B606d6b;
case 0x606d6d:c.instructions+=1;goto B606d6d;
case 0x606d6f:goto L606d6f;
case 0x606d74:c.instructions+=2;goto B606d74;
case 0x606d76:c.instructions+=1;goto B606d76;
case 0x606d78:goto L606d78;
case 0x606d7c:c.instructions+=2;goto B606d7c;
case 0x606d82:c.instructions+=1;goto B606d82;
case 0x606d84:goto L606d84;
case 0x606d86:c.instructions+=1;goto B606d86;
case 0x606d8b:goto L606d8b;
case 0x606d90:c.instructions+=3;goto B606d90;
case 0x606d92:c.instructions+=2;goto B606d92;
case 0x606d97:c.instructions+=1;goto B606d97;
case 0x606d99:goto L606d99;
case 0x606d9e:c.instructions+=2;goto B606d9e;
case 0x606da0:c.instructions+=1;goto B606da0;
case 0x606da2:goto L606da2;
case 0x606da7:c.instructions+=2;goto B606da7;
case 0x606da9:c.instructions+=1;goto B606da9;
case 0x606daf:goto L606daf;
case 0x606db4:c.instructions+=2;goto B606db4;
case 0x606db6:c.instructions+=1;goto B606db6;
case 0x606db8:goto L606db8;
case 0x606dbd:c.instructions+=2;goto B606dbd;
case 0x606dbf:c.instructions+=1;goto B606dbf;
case 0x606dc1:goto L606dc1;
case 0x606dc3:c.instructions+=3;goto B606dc3;
case 0x606dc6:c.instructions+=2;goto B606dc6;
case 0x606dc9:c.instructions+=1;goto B606dc9;
case 0x606dcb:goto L606dcb;
case 0x606dd1:c.instructions+=2;goto B606dd1;
case 0x606dd3:c.instructions+=1;goto B606dd3;
case 0x606dd5:goto L606dd5;
case 0x606dd8:c.instructions+=1;goto B606dd8;
case 0x606dda:goto L606dda;
case 0x606de0:c.instructions+=2;goto B606de0;
case 0x606de8:c.instructions+=1;goto B606de8;
case 0x606dea:goto L606dea;
case 0x606dec:c.instructions+=2;goto B606dec;
case 0x606df0:c.instructions+=1;goto B606df0;
case 0x606df4:goto L606df4;
case 0x606df7:c.instructions+=2;goto B606df7;
case 0x606df9:c.instructions+=1;goto B606df9;
case 0x606dfb:goto L606dfb;
case 0x606dfd:c.instructions+=1;goto B606dfd;
case 0x606dff:goto L606dff;
case 0x606e02:c.instructions+=1;goto B606e02;
case 0x606e04:goto L606e04;
case 0x606e06:c.instructions+=1;goto B606e06;
case 0x606e0b:goto L606e0b;
case 0x606e0d:goto L606e0d;
case 0x606e0f:c.instructions+=1;goto B606e0f;
case 0x606e14:goto L606e14;
case 0x606e17:goto L606e17;
case 0x606e1e:c.instructions+=1;goto B606e1e;
case 0x606e20:goto L606e20;
case 0x606e24:c.instructions+=2;goto B606e24;
case 0x606e2a:c.instructions+=1;goto B606e2a;
case 0x606e2c:goto L606e2c;
case 0x606e32:c.instructions+=4;goto B606e32;
case 0x606e39:c.instructions+=3;goto B606e39;
case 0x606e3d:c.instructions+=2;goto B606e3d;
case 0x606e40:c.instructions+=1;goto B606e40;
case 0x606e42:goto L606e42;
case 0x606e48:c.instructions+=3;goto B606e48;
case 0x606e4b:c.instructions+=2;goto B606e4b;
case 0x606e51:c.instructions+=1;goto B606e51;
case 0x606e53:goto L606e53;
case 0x606e56:c.instructions+=1;goto B606e56;
case 0x606e58:goto L606e58;
case 0x606e5b:c.instructions+=1;goto B606e5b;
case 0x606e5d:goto L606e5d;
case 0x606e60:c.instructions+=2;goto B606e60;
case 0x606e66:c.instructions+=1;goto B606e66;
case 0x606e68:goto L606e68;
case 0x606e6c:c.instructions+=1;goto B606e6c;
case 0x606e73:goto L606e73;
case 0x606e79:goto L606e79;
case 0x606e7d:c.instructions+=8;goto B606e7d;
case 0x606e81:c.instructions+=7;goto B606e81;
case 0x606e85:c.instructions+=6;goto B606e85;
case 0x606e86:c.instructions+=5;goto B606e86;
case 0x606e87:c.instructions+=4;goto B606e87;
case 0x606e88:c.instructions+=3;goto B606e88;
case 0x606e89:c.instructions+=2;goto B606e89;
case 0x606e8e:c.instructions+=1;goto B606e8e;
case 0x606e93:goto L606e93;
case 0x606e95:c.instructions+=1;goto B606e95;
case 0x606e97:goto L606e97;
case 0x606e98:c.instructions+=6;goto B606e98;
case 0x606e9e:c.instructions+=5;goto B606e9e;
case 0x606e9f:c.instructions+=4;goto B606e9f;
case 0x606ea0:c.instructions+=3;goto B606ea0;
case 0x606ea1:c.instructions+=2;goto B606ea1;
case 0x606ea2:c.instructions+=1;goto B606ea2;
case 0x606ea5:goto L606ea5;
case 0x606ea7:c.instructions+=3;goto B606ea7;
case 0x606eaa:c.instructions+=2;goto B606eaa;
case 0x606eae:c.instructions+=1;goto B606eae;
case 0x606eb0:goto L606eb0;
case 0x606eb5:c.instructions+=1;goto B606eb5;
case 0x606eb7:goto L606eb7;
case 0x606ebb:c.instructions+=1;goto B606ebb;
case 0x606ebd:goto L606ebd;
case 0x606ec0:c.instructions+=2;goto B606ec0;
case 0x606ec2:c.instructions+=1;goto B606ec2;
case 0x606ec7:goto L606ec7;
case 0x606ec9:c.instructions+=1;goto B606ec9;
case 0x606ecb:goto L606ecb;
case 0x606ecf:c.instructions+=3;goto B606ecf;
case 0x606ed6:c.instructions+=2;goto B606ed6;
case 0x606ed8:c.instructions+=1;goto B606ed8;
case 0x606eda:goto L606eda;
case 0x606edf:goto L606edf;
case 0x606ee1:c.instructions+=1;goto B606ee1;
case 0x606ee3:goto L606ee3;
case 0x606ee6:c.instructions+=4;goto B606ee6;
case 0x606ee9:c.instructions+=3;goto B606ee9;
case 0x606eee:c.instructions+=2;goto B606eee;
case 0x606ef0:c.instructions+=1;goto B606ef0;
case 0x606ef3:goto L606ef3;
case 0x606ef8:c.instructions+=2;goto B606ef8;
case 0x606efa:c.instructions+=1;goto B606efa;
case 0x606efc:goto L606efc;
case 0x606f01:c.instructions+=2;goto B606f01;
case 0x606f03:c.instructions+=1;goto B606f03;
case 0x606f05:goto L606f05;
case 0x606f0a:c.instructions+=2;goto B606f0a;
case 0x606f0c:c.instructions+=1;goto B606f0c;
case 0x606f0e:goto L606f0e;
case 0x606f13:c.instructions+=2;goto B606f13;
case 0x606f15:c.instructions+=1;goto B606f15;
case 0x606f17:goto L606f17;
case 0x606f1b:c.instructions+=2;goto B606f1b;
case 0x606f1f:c.instructions+=1;goto B606f1f;
case 0x606f21:goto L606f21;
case 0x606f25:c.instructions+=1;goto B606f25;
case 0x606f2b:goto L606f2b;
case 0x606f2d:c.instructions+=5;goto B606f2d;
case 0x606f30:c.instructions+=4;goto B606f30;
case 0x606f34:c.instructions+=3;goto B606f34;
case 0x606f38:c.instructions+=2;goto B606f38;
case 0x606f3f:c.instructions+=1;goto B606f3f;
case 0x606f41:goto L606f41;
case 0x606f45:c.instructions+=2;goto B606f45;
case 0x606f47:c.instructions+=1;goto B606f47;
case 0x606f49:goto L606f49;
case 0x606f4b:goto L606f4b;
case 0x606f4e:c.instructions+=2;goto B606f4e;
case 0x606f55:c.instructions+=1;goto B606f55;
case 0x606f57:goto L606f57;
case 0x606f59:goto L606f59;
case 0x606f5d:c.instructions+=3;goto B606f5d;
case 0x606f63:c.instructions+=2;goto B606f63;
case 0x606f65:c.instructions+=1;goto B606f65;
case 0x606f67:goto L606f67;
case 0x606f6c:goto L606f6c;
case 0x606f6f:c.instructions+=6;goto B606f6f;
case 0x606f74:c.instructions+=5;goto B606f74;
case 0x606f7b:c.instructions+=4;goto B606f7b;
case 0x606f7f:c.instructions+=3;goto B606f7f;
case 0x606f82:c.instructions+=2;goto B606f82;
case 0x606f88:c.instructions+=1;goto B606f88;
case 0x606f8a:goto L606f8a;
case 0x606f8f:goto L606f8f;
case 0x606f92:goto L606f92;
case 0x606f98:c.instructions+=5;goto B606f98;
case 0x606f9b:c.instructions+=4;goto B606f9b;
case 0x606f9c:c.instructions+=3;goto B606f9c;
case 0x606f9d:c.instructions+=2;goto B606f9d;
case 0x606f9f:c.instructions+=1;goto B606f9f;
case 0x606fa4:goto L606fa4;
case 0x606fa9:c.instructions+=2;goto B606fa9;
case 0x606fab:c.instructions+=1;goto B606fab;
case 0x606fad:goto L606fad;
case 0x606fb2:c.instructions+=2;goto B606fb2;
case 0x606fb4:c.instructions+=1;goto B606fb4;
case 0x606fb6:goto L606fb6;
case 0x606fbb:c.instructions+=2;goto B606fbb;
case 0x606fbd:c.instructions+=1;goto B606fbd;
case 0x606fbf:goto L606fbf;
case 0x606fc4:c.instructions+=2;goto B606fc4;
case 0x606fc6:c.instructions+=1;goto B606fc6;
case 0x606fc8:goto L606fc8;
case 0x606fcd:c.instructions+=2;goto B606fcd;
case 0x606fcf:c.instructions+=1;goto B606fcf;
case 0x606fd1:goto L606fd1;
case 0x606fd4:c.instructions+=3;goto B606fd4;
case 0x606fd7:c.instructions+=2;goto B606fd7;
case 0x606fda:c.instructions+=1;goto B606fda;
case 0x606fdc:goto L606fdc;
case 0x606fdf:c.instructions+=1;goto B606fdf;
case 0x606fe1:goto L606fe1;
case 0x606fe8:c.instructions+=1;goto B606fe8;
case 0x606fea:goto L606fea;
case 0x606fed:c.instructions+=1;goto B606fed;
case 0x606fef:goto L606fef;
case 0x606ff2:c.instructions+=1;goto B606ff2;
case 0x606ff4:goto L606ff4;
case 0x606ff7:c.instructions+=2;goto B606ff7;
case 0x606ff9:c.instructions+=1;goto B606ff9;
case 0x606ffe:goto L606ffe;
default:missing_instruction(c.pc);}
B606005:L606005:{c.instructions+=1;NFSU2_TR(0x606005);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606374ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60600c:L60600c:{c.instructions+=6;NFSU2_TR(0x60600c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60600f:{NFSU2_TR(0x60600f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606010:{NFSU2_TR(0x606010);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606015:{NFSU2_TR(0x606015);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60601a:{NFSU2_TR(0x60601a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60601b:{NFSU2_TR(0x60601b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606020ull));
TAIL_STATIC(0x579410u,579);
}
B606020:L606020:{c.instructions+=6;NFSU2_TR(0x606020);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606023:{NFSU2_TR(0x606023);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606024:{NFSU2_TR(0x606024);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606029:{NFSU2_TR(0x606029);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60602e:{NFSU2_TR(0x60602e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60602f:{NFSU2_TR(0x60602f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606034ull));
TAIL_STATIC(0x579410u,579);
}
B606034:L606034:{c.instructions+=4;NFSU2_TR(0x606034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606035:{NFSU2_TR(0x606035);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60603a:{NFSU2_TR(0x60603a);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60603f:{NFSU2_TR(0x60603f);
{goto L6062fb;}
}
B606044:L606044:{c.instructions+=3;NFSU2_TR(0x606044);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B60604a:{NFSU2_TR(0x60604a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60604d:{NFSU2_TR(0x60604d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6060ee;}}
}
B606053:L606053:{c.instructions+=6;NFSU2_TR(0x606053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606056:{NFSU2_TR(0x606056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606057:{NFSU2_TR(0x606057);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60605c:{NFSU2_TR(0x60605c);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606061:{NFSU2_TR(0x606061);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606062:{NFSU2_TR(0x606062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606067ull));
TAIL_STATIC(0x579410u,579);
}
B606067:L606067:{c.instructions+=6;NFSU2_TR(0x606067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60606a:{NFSU2_TR(0x60606a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60606b:{NFSU2_TR(0x60606b);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606070:{NFSU2_TR(0x606070);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606072:{NFSU2_TR(0x606072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606073:{NFSU2_TR(0x606073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606078ull));
TAIL_STATIC(0x579410u,579);
}
B606078:L606078:{c.instructions+=6;NFSU2_TR(0x606078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60607b:{NFSU2_TR(0x60607b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60607c:{NFSU2_TR(0x60607c);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606081:{NFSU2_TR(0x606081);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606086:{NFSU2_TR(0x606086);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606087:{NFSU2_TR(0x606087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60608cull));
TAIL_STATIC(0x579410u,579);
}
B60608c:L60608c:{c.instructions+=6;NFSU2_TR(0x60608c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60608f:{NFSU2_TR(0x60608f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606090:{NFSU2_TR(0x606090);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606095:{NFSU2_TR(0x606095);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60609a:{NFSU2_TR(0x60609a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60609b:{NFSU2_TR(0x60609b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6060a0ull));
TAIL_STATIC(0x579410u,579);
}
B6060a0:L6060a0:{c.instructions+=7;NFSU2_TR(0x6060a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6060a3:{NFSU2_TR(0x6060a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B6060a6:{NFSU2_TR(0x6060a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060a7:{NFSU2_TR(0x6060a7);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060ac:{NFSU2_TR(0x6060ac);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060b1:{NFSU2_TR(0x6060b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060b2:{NFSU2_TR(0x6060b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6060b7ull));
TAIL_STATIC(0x579410u,579);
}
B6060b7:L6060b7:{c.instructions+=4;NFSU2_TR(0x6060b7);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B6060bc:{NFSU2_TR(0x6060bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6060bf:{NFSU2_TR(0x6060bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6060c1:{NFSU2_TR(0x6060c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6060ee;}}
}
B6060c3:L6060c3:{c.instructions+=6;NFSU2_TR(0x6060c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6060c6:{NFSU2_TR(0x6060c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060c7:{NFSU2_TR(0x6060c7);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060cc:{NFSU2_TR(0x6060cc);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060d1:{NFSU2_TR(0x6060d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060d2:{NFSU2_TR(0x6060d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6060d7ull));
TAIL_STATIC(0x579410u,579);
}
B6060d7:L6060d7:{c.instructions+=6;NFSU2_TR(0x6060d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6060da:{NFSU2_TR(0x6060da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060db:{NFSU2_TR(0x6060db);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060e0:{NFSU2_TR(0x6060e0);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060e5:{NFSU2_TR(0x6060e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060e6:{NFSU2_TR(0x6060e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6060ebull));
TAIL_STATIC(0x579410u,579);
}
B6060eb:L6060eb:{c.instructions+=1;NFSU2_TR(0x6060eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6060ee:L6060ee:{c.instructions+=6;NFSU2_TR(0x6060ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6060f1:{NFSU2_TR(0x6060f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060f2:{NFSU2_TR(0x6060f2);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060f7:{NFSU2_TR(0x6060f7);
u8 U[4];
w4(U+0,u32(0xb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060fc:{NFSU2_TR(0x6060fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6060fd:{NFSU2_TR(0x6060fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606102ull));
TAIL_STATIC(0x579410u,579);
}
B606102:L606102:{c.instructions+=6;NFSU2_TR(0x606102);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606105:{NFSU2_TR(0x606105);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606106:{NFSU2_TR(0x606106);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60610b:{NFSU2_TR(0x60610b);
u8 U[4];
w4(U+0,u32(0x7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60610d:{NFSU2_TR(0x60610d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60610e:{NFSU2_TR(0x60610e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606113ull));
TAIL_STATIC(0x579410u,579);
}
B606113:L606113:{c.instructions+=6;NFSU2_TR(0x606113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606116:{NFSU2_TR(0x606116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606117:{NFSU2_TR(0x606117);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60611c:{NFSU2_TR(0x60611c);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606121:{NFSU2_TR(0x606121);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606122:{NFSU2_TR(0x606122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606127ull));
TAIL_STATIC(0x579410u,579);
}
B606127:L606127:{c.instructions+=6;NFSU2_TR(0x606127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60612a:{NFSU2_TR(0x60612a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60612b:{NFSU2_TR(0x60612b);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606130:{NFSU2_TR(0x606130);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606135:{NFSU2_TR(0x606135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606136:{NFSU2_TR(0x606136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60613bull));
TAIL_STATIC(0x579410u,579);
}
B60613b:L60613b:{c.instructions+=7;NFSU2_TR(0x60613b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60613e:{NFSU2_TR(0x60613e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B606141:{NFSU2_TR(0x606141);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606142:{NFSU2_TR(0x606142);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606147:{NFSU2_TR(0x606147);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60614c:{NFSU2_TR(0x60614c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60614d:{NFSU2_TR(0x60614d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606152ull));
TAIL_STATIC(0x579410u,579);
}
B606152:L606152:{c.instructions+=6;NFSU2_TR(0x606152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606155:{NFSU2_TR(0x606155);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606156:{NFSU2_TR(0x606156);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60615b:{NFSU2_TR(0x60615b);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606160:{NFSU2_TR(0x606160);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606161:{NFSU2_TR(0x606161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606166ull));
TAIL_STATIC(0x579410u,579);
}
B606166:L606166:{c.instructions+=6;NFSU2_TR(0x606166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606169:{NFSU2_TR(0x606169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60616a:{NFSU2_TR(0x60616a);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60616f:{NFSU2_TR(0x60616f);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606171:{NFSU2_TR(0x606171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606172:{NFSU2_TR(0x606172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606177ull));
TAIL_STATIC(0x579410u,579);
}
B606177:L606177:{c.instructions+=6;NFSU2_TR(0x606177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60617a:{NFSU2_TR(0x60617a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60617b:{NFSU2_TR(0x60617b);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606180:{NFSU2_TR(0x606180);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606185:{NFSU2_TR(0x606185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606186:{NFSU2_TR(0x606186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60618bull));
TAIL_STATIC(0x579410u,579);
}
B60618b:L60618b:{c.instructions+=7;NFSU2_TR(0x60618b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60618e:{NFSU2_TR(0x60618e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B606191:{NFSU2_TR(0x606191);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606192:{NFSU2_TR(0x606192);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606197:{NFSU2_TR(0x606197);
u8 U[4];
w4(U+0,u32(0x81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60619c:{NFSU2_TR(0x60619c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60619d:{NFSU2_TR(0x60619d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6061a2ull));
TAIL_STATIC(0x579410u,579);
}
B6061a2:L6061a2:{c.instructions+=6;NFSU2_TR(0x6061a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6061a5:{NFSU2_TR(0x6061a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061a6:{NFSU2_TR(0x6061a6);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061ab:{NFSU2_TR(0x6061ab);
u8 U[4];
w4(U+0,u32(0x82ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061b0:{NFSU2_TR(0x6061b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061b1:{NFSU2_TR(0x6061b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6061b6ull));
TAIL_STATIC(0x579410u,579);
}
B6061b6:L6061b6:{c.instructions+=4;NFSU2_TR(0x6061b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6061bc:{NFSU2_TR(0x6061bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6061bf:{NFSU2_TR(0x6061bf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6061c2:{NFSU2_TR(0x6061c2);
if(r1(R+518)){{goto L60623c;}}
}
B6061c4:L6061c4:{c.instructions+=2;NFSU2_TR(0x6061c4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6061c5:{NFSU2_TR(0x6061c5);
if(r1(R+518)){{goto L606230;}}
}
B6061c7:L6061c7:{c.instructions+=2;NFSU2_TR(0x6061c7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6061c8:{NFSU2_TR(0x6061c8);
if(r1(R+518)){{goto L6061d5;}}
}
B6061ca:L6061ca:{c.instructions+=3;NFSU2_TR(0x6061ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061cc:{NFSU2_TR(0x6061cc);
__builtin_memmove((R+4),(R+24),4);
}
B6061ce:{NFSU2_TR(0x6061ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6061d3ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B6061d3:L6061d3:{c.instructions+=1;NFSU2_TR(0x6061d3);
{goto L606252;}
}
B6061d5:L6061d5:{c.instructions+=6;NFSU2_TR(0x6061d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6061d8:{NFSU2_TR(0x6061d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061d9:{NFSU2_TR(0x6061d9);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061de:{NFSU2_TR(0x6061de);
u8 U[4];
w4(U+0,u32(0xb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061e3:{NFSU2_TR(0x6061e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061e4:{NFSU2_TR(0x6061e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6061e9ull));
TAIL_STATIC(0x579410u,579);
}
B6061e9:L6061e9:{c.instructions+=6;NFSU2_TR(0x6061e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6061ec:{NFSU2_TR(0x6061ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061ed:{NFSU2_TR(0x6061ed);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061f2:{NFSU2_TR(0x6061f2);
u8 U[4];
w4(U+0,u32(0xb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061f7:{NFSU2_TR(0x6061f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6061f8:{NFSU2_TR(0x6061f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6061fdull));
TAIL_STATIC(0x579410u,579);
}
B6061fd:L6061fd:{c.instructions+=6;NFSU2_TR(0x6061fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606200:{NFSU2_TR(0x606200);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606202:{NFSU2_TR(0x606202);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606204:{NFSU2_TR(0x606204);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606209:{NFSU2_TR(0x606209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60620a:{NFSU2_TR(0x60620a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60620full));
TAIL_STATIC(0x579410u,579);
}
B60620f:L60620f:{c.instructions+=3;NFSU2_TR(0x60620f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B606212:{NFSU2_TR(0x606212);
__builtin_memmove((R+4),(R+24),4);
}
B606214:{NFSU2_TR(0x606214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606219ull));
TAIL_STATIC(0x5fae20u,5fa);
}
B606219:L606219:{c.instructions+=2;NFSU2_TR(0x606219);
__builtin_memmove((R+4),(R+24),4);
}
B60621b:{NFSU2_TR(0x60621b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606220ull));
TAIL_STATIC(0x5f30f0u,5f3);
}
B606220:L606220:{c.instructions+=4;NFSU2_TR(0x606220);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606222:{NFSU2_TR(0x606222);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606224:{NFSU2_TR(0x606224);
__builtin_memmove((R+4),(R+24),4);
}
B606226:{NFSU2_TR(0x606226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60622bull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B60622b:L60622b:{c.instructions+=1;NFSU2_TR(0x60622b);
{goto L606307;}
}
B606230:L606230:{c.instructions+=2;NFSU2_TR(0x606230);
__builtin_memmove((R+4),(R+24),4);
}
B606232:{NFSU2_TR(0x606232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606237ull));
TAIL_STATIC(0x5fae20u,5fa);
}
B606237:L606237:{c.instructions+=1;NFSU2_TR(0x606237);
{goto L606307;}
}
B60623c:L60623c:{c.instructions+=3;NFSU2_TR(0x60623c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60623f:{NFSU2_TR(0x60623f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606241:{NFSU2_TR(0x606241);
if(r1(R+518)){{goto L606252;}}
}
B606243:L606243:{c.instructions+=2;NFSU2_TR(0x606243);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
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
B606246:{NFSU2_TR(0x606246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606252;}}
}
B606248:L606248:{c.instructions+=4;NFSU2_TR(0x606248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60624b:{NFSU2_TR(0x60624b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60624d:{NFSU2_TR(0x60624d);
__builtin_memmove((R+4),(R+0),4);
}
B60624f:{NFSU2_TR(0x60624f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606252ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B606252:L606252:{c.instructions+=3;NFSU2_TR(0x606252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606255:{NFSU2_TR(0x606255);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606257:{NFSU2_TR(0x606257);
if(r1(R+518)){{goto L606307;}}
}
B60625d:L60625d:{c.instructions+=3;NFSU2_TR(0x60625d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606260:{NFSU2_TR(0x606260);
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
B606262:{NFSU2_TR(0x606262);
if(r1(R+518)){{goto L606307;}}
}
B606268:L606268:{c.instructions+=5;NFSU2_TR(0x606268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60626b:{NFSU2_TR(0x60626b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60626d:{NFSU2_TR(0x60626d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60626e:{NFSU2_TR(0x60626e);
__builtin_memmove((R+4),(R+28),4);
}
B606270:{NFSU2_TR(0x606270);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606273ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B606273:L606273:{c.instructions+=3;NFSU2_TR(0x606273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B606275:{NFSU2_TR(0x606275);
__builtin_memmove((R+4),(R+28),4);
}
B606277:{NFSU2_TR(0x606277);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60627aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60627a:L60627a:{c.instructions+=1;NFSU2_TR(0x60627a);
{goto L606307;}
}
B60627f:L60627f:{c.instructions+=6;NFSU2_TR(0x60627f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606282:{NFSU2_TR(0x606282);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606283:{NFSU2_TR(0x606283);
u8 U[4];
w4(U+0,u32(0x605c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606288:{NFSU2_TR(0x606288);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60628d:{NFSU2_TR(0x60628d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60628e:{NFSU2_TR(0x60628e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606293ull));
TAIL_STATIC(0x579410u,579);
}
B606293:L606293:{c.instructions+=2;NFSU2_TR(0x606293);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B606296:{NFSU2_TR(0x606296);
{goto L606307;}
}
B606298:L606298:{c.instructions+=6;NFSU2_TR(0x606298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60629b:{NFSU2_TR(0x60629b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60629c:{NFSU2_TR(0x60629c);
u8 U[4];
w4(U+0,u32(0x5fa880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062a1:{NFSU2_TR(0x6062a1);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062a6:{NFSU2_TR(0x6062a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062a7:{NFSU2_TR(0x6062a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6062acull));
TAIL_STATIC(0x579410u,579);
}
B6062ac:L6062ac:{c.instructions+=6;NFSU2_TR(0x6062ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6062af:{NFSU2_TR(0x6062af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062b0:{NFSU2_TR(0x6062b0);
u8 U[4];
w4(U+0,u32(0x5fa880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062b5:{NFSU2_TR(0x6062b5);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062ba:{NFSU2_TR(0x6062ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062bb:{NFSU2_TR(0x6062bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6062c0ull));
TAIL_STATIC(0x579410u,579);
}
B6062c0:L6062c0:{c.instructions+=3;NFSU2_TR(0x6062c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062c1:{NFSU2_TR(0x6062c1);
u8 U[4];
w4(U+0,u32(0x5fa880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062c6:{NFSU2_TR(0x6062c6);
{goto L6062f6;}
}
B6062c8:L6062c8:{c.instructions+=6;NFSU2_TR(0x6062c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6062cb:{NFSU2_TR(0x6062cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062cc:{NFSU2_TR(0x6062cc);
u8 U[4];
w4(U+0,u32(0x5fa900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062d1:{NFSU2_TR(0x6062d1);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062d6:{NFSU2_TR(0x6062d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062d7:{NFSU2_TR(0x6062d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6062dcull));
TAIL_STATIC(0x579410u,579);
}
B6062dc:L6062dc:{c.instructions+=6;NFSU2_TR(0x6062dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6062df:{NFSU2_TR(0x6062df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062e0:{NFSU2_TR(0x6062e0);
u8 U[4];
w4(U+0,u32(0x5fa900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062e5:{NFSU2_TR(0x6062e5);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062ea:{NFSU2_TR(0x6062ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062eb:{NFSU2_TR(0x6062eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6062f0ull));
TAIL_STATIC(0x579410u,579);
}
B6062f0:L6062f0:{c.instructions+=2;NFSU2_TR(0x6062f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062f1:{NFSU2_TR(0x6062f1);
u8 U[4];
w4(U+0,u32(0x5fa900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062f6:L6062f6:{c.instructions+=1;NFSU2_TR(0x6062f6);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062fb:L6062fb:{c.instructions+=3;NFSU2_TR(0x6062fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6062fe:{NFSU2_TR(0x6062fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6062ff:{NFSU2_TR(0x6062ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606304ull));
TAIL_STATIC(0x579410u,579);
}
B606304:L606304:{c.instructions+=1;NFSU2_TR(0x606304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B606307:L606307:{c.instructions+=4;NFSU2_TR(0x606307);
__builtin_memmove((R+0),gp(0x865098),4);
}
B60630c:{NFSU2_TR(0x60630c);
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
B60630e:{NFSU2_TR(0x60630e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60630f:{NFSU2_TR(0x60630f);
if(r1(R+518)){{goto L60634b;}}
}
B606311:L606311:{c.instructions+=3;NFSU2_TR(0x606311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606317:{NFSU2_TR(0x606317);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60631a:{NFSU2_TR(0x60631a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60634b;}}
}
B60631c:L60631c:{c.instructions+=2;NFSU2_TR(0x60631c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6063a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B606323:{NFSU2_TR(0x606323);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606398ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60632a:L60632a:{c.instructions+=2;NFSU2_TR(0x60632a);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B606330:{NFSU2_TR(0x606330);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60634b;}}
}
B606332:L606332:{c.instructions+=3;NFSU2_TR(0x606332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606335:{NFSU2_TR(0x606335);
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
B606337:{NFSU2_TR(0x606337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60634b;}}
}
B606339:L606339:{c.instructions+=5;NFSU2_TR(0x606339);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60633a:{NFSU2_TR(0x60633a);
u8 U[4];
w4(U+0,u32(0x5ff470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60633f:{NFSU2_TR(0x60633f);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606341:{NFSU2_TR(0x606341);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606343:{NFSU2_TR(0x606343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606348ull));
TAIL_STATIC(0x579410u,579);
}
B606348:L606348:{c.instructions+=1;NFSU2_TR(0x606348);
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
B60634b:L60634b:{c.instructions+=3;NFSU2_TR(0x60634b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60634c:{NFSU2_TR(0x60634c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60634d:{NFSU2_TR(0x60634d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6063b0:L6063b0:{c.instructions+=6;NFSU2_TR(0x6063b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063b1:{NFSU2_TR(0x6063b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063b2:{NFSU2_TR(0x6063b2);
__builtin_memmove((R+24),(R+4),4);
}
B6063b4:{NFSU2_TR(0x6063b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6063b7:{NFSU2_TR(0x6063b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063b8:{NFSU2_TR(0x6063b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6063bdull));
TAIL_STATIC(0x4022c0u,402);
}
B6063bd:L6063bd:{c.instructions+=7;NFSU2_TR(0x6063bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6063c0:{NFSU2_TR(0x6063c0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6063c2:{NFSU2_TR(0x6063c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063c3:{NFSU2_TR(0x6063c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063c4:{NFSU2_TR(0x6063c4);
__builtin_memmove((R+4),(R+24),4);
}
B6063c6:{NFSU2_TR(0x6063c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6063cc:{NFSU2_TR(0x6063cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6063d1ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B6063d1:L6063d1:{c.instructions+=3;NFSU2_TR(0x6063d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6063d7:{NFSU2_TR(0x6063d7);
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
B6063d9:{NFSU2_TR(0x6063d9);
if(r1(R+518)){{goto L6063e7;}}
}
B6063db:L6063db:{c.instructions+=3;NFSU2_TR(0x6063db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6063dd:{NFSU2_TR(0x6063dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063df:{NFSU2_TR(0x6063df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6063e1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6063e1:L6063e1:{c.instructions+=1;NFSU2_TR(0x6063e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6063e7:L6063e7:{c.instructions+=3;NFSU2_TR(0x6063e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6063ed:{NFSU2_TR(0x6063ed);
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
B6063ef:{NFSU2_TR(0x6063ef);
if(r1(R+518)){{goto L6063fd;}}
}
B6063f1:L6063f1:{c.instructions+=3;NFSU2_TR(0x6063f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6063f3:{NFSU2_TR(0x6063f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063f5:{NFSU2_TR(0x6063f5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6063f7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6063f7:L6063f7:{c.instructions+=1;NFSU2_TR(0x6063f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6063fd:L6063fd:{c.instructions+=4;NFSU2_TR(0x6063fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063fe:{NFSU2_TR(0x6063fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6063ff:{NFSU2_TR(0x6063ff);
__builtin_memmove((R+4),(R+24),4);
}
B606401:{NFSU2_TR(0x606401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606406ull));
TAIL_STATIC(0x605c70u,605);
}
B606406:L606406:{c.instructions+=6;NFSU2_TR(0x606406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606409:{NFSU2_TR(0x606409);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60640c:{NFSU2_TR(0x60640c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606412:{NFSU2_TR(0x606412);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606414:{NFSU2_TR(0x606414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606417:{NFSU2_TR(0x606417);
if(r1(R+518)){{goto L606430;}}
}
B606419:L606419:{c.instructions+=2;NFSU2_TR(0x606419);
__builtin_memmove((R+4),(R+28),4);
}
B60641b:{NFSU2_TR(0x60641b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606420ull));
TAIL_STATIC(0x4903b0u,490);
}
B606420:L606420:{c.instructions+=4;NFSU2_TR(0x606420);
__builtin_memmove((R+8),gp(0x82da88),4);
}
B606426:{NFSU2_TR(0x606426);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606427:{NFSU2_TR(0x606427);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606428:{NFSU2_TR(0x606428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60642dull));
TAIL_STATIC(0x43f920u,43f);
}
B60642d:L60642d:{c.instructions+=1;NFSU2_TR(0x60642d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B606430:L606430:{c.instructions+=4;NFSU2_TR(0x606430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606436:{NFSU2_TR(0x606436);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606438:{NFSU2_TR(0x606438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60643e:{NFSU2_TR(0x60643e);
if(r1(R+518)){{goto L606456;}}
}
B606440:L606440:{c.instructions+=2;NFSU2_TR(0x606440);
__builtin_memmove((R+4),(R+28),4);
}
B606442:{NFSU2_TR(0x606442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606447ull));
TAIL_STATIC(0x4903b0u,490);
}
B606447:L606447:{c.instructions+=4;NFSU2_TR(0x606447);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B60644c:{NFSU2_TR(0x60644c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60644d:{NFSU2_TR(0x60644d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60644e:{NFSU2_TR(0x60644e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606453ull));
TAIL_STATIC(0x43f920u,43f);
}
B606453:L606453:{c.instructions+=1;NFSU2_TR(0x606453);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B606456:L606456:{c.instructions+=5;NFSU2_TR(0x606456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60645c:{NFSU2_TR(0x60645c);
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
B60645e:{NFSU2_TR(0x60645e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606464:{NFSU2_TR(0x606464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606465:{NFSU2_TR(0x606465);
if(r1(R+518)){{goto L606476;}}
}
B606467:L606467:{c.instructions+=2;NFSU2_TR(0x606467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606468:{NFSU2_TR(0x606468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60646dull));
TAIL_STATIC(0x575630u,575);
}
B60646d:L60646d:{c.instructions+=2;NFSU2_TR(0x60646d);
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
B606470:{NFSU2_TR(0x606470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606476:L606476:{c.instructions+=3;NFSU2_TR(0x606476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606477:{NFSU2_TR(0x606477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B606478:{NFSU2_TR(0x606478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606480:L606480:{c.instructions+=24;NFSU2_TR(0x606480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606482:{NFSU2_TR(0x606482);
u8 U[4];
w4(U+0,u32(0x77a030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606487:{NFSU2_TR(0x606487);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60648d:{NFSU2_TR(0x60648d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60648e:{NFSU2_TR(0x60648e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606495:{NFSU2_TR(0x606495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B606498:{NFSU2_TR(0x606498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606499:{NFSU2_TR(0x606499);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60649a:{NFSU2_TR(0x60649a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B60649e:{NFSU2_TR(0x60649e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60649f:{NFSU2_TR(0x60649f);
__builtin_memmove((R+24),(R+8),4);
}
B6064a1:{NFSU2_TR(0x6064a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6064a4:{NFSU2_TR(0x6064a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064a5:{NFSU2_TR(0x6064a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064a7:{NFSU2_TR(0x6064a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6064aa:{NFSU2_TR(0x6064aa);
__builtin_memmove((R+28),(R+4),4);
}
B6064ac:{NFSU2_TR(0x6064ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B6064b0:{NFSU2_TR(0x6064b0);
__builtin_memmove((R+0),(R+518),1);
}
B6064b3:{NFSU2_TR(0x6064b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064b5:{NFSU2_TR(0x6064b5);
w4(R+4,u32(r1(R+0)));
}
B6064b8:{NFSU2_TR(0x6064b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064ba:{NFSU2_TR(0x6064ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064bb:{NFSU2_TR(0x6064bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6064be:{NFSU2_TR(0x6064be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6064c3ull));
TAIL_STATIC(0x639ce0u,639);
}
B6064c3:L6064c3:{c.instructions+=3;NFSU2_TR(0x6064c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064c4:{NFSU2_TR(0x6064c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6064c8:{NFSU2_TR(0x6064c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6064cdull));
TAIL_STATIC(0x5ded90u,5de);
}
B6064cd:L6064cd:{c.instructions+=3;NFSU2_TR(0x6064cd);
u8 U[4];
w4(U+0,u32(0x9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6064d2:{NFSU2_TR(0x6064d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6064da:{NFSU2_TR(0x6064da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6064dfull));
TAIL_STATIC(0x575620u,575);
}
B6064df:L6064df:{c.instructions+=4;NFSU2_TR(0x6064df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6064e2:{NFSU2_TR(0x6064e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6064e4:{NFSU2_TR(0x6064e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6064e8:{NFSU2_TR(0x6064e8);
if(r1(R+518)){{goto L606510;}}
}
B6064ea:L6064ea:{c.instructions+=3;NFSU2_TR(0x6064ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6064ec:{NFSU2_TR(0x6064ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6064f1:{NFSU2_TR(0x6064f1);
if(r1(R+518)){{goto L60652a;}}
}
B6064f3:L6064f3:{c.instructions+=10;NFSU2_TR(0x6064f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6064f7:{NFSU2_TR(0x6064f7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6064f9:{NFSU2_TR(0x6064f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B606500:{NFSU2_TR(0x606500);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606501:{NFSU2_TR(0x606501);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B606504:{NFSU2_TR(0x606504);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606505:{NFSU2_TR(0x606505);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606506:{NFSU2_TR(0x606506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606507:{NFSU2_TR(0x606507);
__builtin_memmove((R+4),(R+0),4);
}
B606509:{NFSU2_TR(0x606509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60650eull));
TAIL_STATIC(0x604260u,604);
}
B60650e:L60650e:{c.instructions+=1;NFSU2_TR(0x60650e);
{goto L60652c;}
}
B606510:L606510:{c.instructions+=3;NFSU2_TR(0x606510);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606512:{NFSU2_TR(0x606512);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606517:{NFSU2_TR(0x606517);
if(r1(R+518)){{goto L60652a;}}
}
B606519:L606519:{c.instructions+=7;NFSU2_TR(0x606519);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60651d:{NFSU2_TR(0x60651d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60651e:{NFSU2_TR(0x60651e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60651f:{NFSU2_TR(0x60651f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606520:{NFSU2_TR(0x606520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606521:{NFSU2_TR(0x606521);
__builtin_memmove((R+4),(R+0),4);
}
B606523:{NFSU2_TR(0x606523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606528ull));
TAIL_STATIC(0x604260u,604);
}
B606528:L606528:{c.instructions+=1;NFSU2_TR(0x606528);
{goto L60652c;}
}
B60652a:L60652a:{c.instructions+=1;NFSU2_TR(0x60652a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60652c:L60652c:{c.instructions+=6;NFSU2_TR(0x60652c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606530:{NFSU2_TR(0x606530);
__builtin_memmove((R+24),(R+0),4);
}
B606532:{NFSU2_TR(0x606532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606533:{NFSU2_TR(0x606533);
__builtin_memmove((R+4),(R+24),4);
}
B606535:{NFSU2_TR(0x606535);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60653a:{NFSU2_TR(0x60653a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60653full));
TAIL_STATIC(0x5eba30u,5eb);
}
B60653f:L60653f:{c.instructions+=2;NFSU2_TR(0x60653f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606542:{NFSU2_TR(0x606542);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606567;}}
}
B606544:L606544:{c.instructions+=2;NFSU2_TR(0x606544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606545:{NFSU2_TR(0x606545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60654aull));
TAIL_STATIC(0x5f4400u,5f4);
}
B60654a:L60654a:{c.instructions+=4;NFSU2_TR(0x60654a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60654d:{NFSU2_TR(0x60654d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60654e:{NFSU2_TR(0x60654e);
__builtin_memmove((R+4),(R+24),4);
}
B606550:{NFSU2_TR(0x606550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606555ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B606555:L606555:{c.instructions+=3;NFSU2_TR(0x606555);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60655a:{NFSU2_TR(0x60655a);
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
B60655c:{NFSU2_TR(0x60655c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606578;}}
}
B60655e:L60655e:{c.instructions+=2;NFSU2_TR(0x60655e);
__builtin_memmove((R+4),(R+24),4);
}
B606560:{NFSU2_TR(0x606560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606565ull));
TAIL_STATIC(0x5f6e20u,5f6);
}
B606565:L606565:{c.instructions+=1;NFSU2_TR(0x606565);
{goto L606578;}
}
B606567:L606567:{c.instructions+=3;NFSU2_TR(0x606567);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60656a:{NFSU2_TR(0x60656a);
__builtin_memmove((R+4),(R+24),4);
}
B60656c:{NFSU2_TR(0x60656c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606571;}}
}
B60656e:L60656e:{c.instructions+=2;NFSU2_TR(0x60656e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60656f:{NFSU2_TR(0x60656f);
{goto L606573;}
}
B606571:L606571:{c.instructions+=1;NFSU2_TR(0x606571);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606573:L606573:{c.instructions+=1;NFSU2_TR(0x606573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606578ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B606578:L606578:{c.instructions+=9;NFSU2_TR(0x606578);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60657e:{NFSU2_TR(0x60657e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606581:{NFSU2_TR(0x606581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B606583:{NFSU2_TR(0x606583);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606586:{NFSU2_TR(0x606586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B606588:{NFSU2_TR(0x606588);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60658c:{NFSU2_TR(0x60658c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60658f:{NFSU2_TR(0x60658f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B606597:{NFSU2_TR(0x606597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60659cull));
TAIL_STATIC(0x4022c0u,402);
}
B60659c:L60659c:{c.instructions+=8;NFSU2_TR(0x60659c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6065a0:{NFSU2_TR(0x6065a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6065a1:{NFSU2_TR(0x6065a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6065a2:{NFSU2_TR(0x6065a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6065a3:{NFSU2_TR(0x6065a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6065a4:{NFSU2_TR(0x6065a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6065ab:{NFSU2_TR(0x6065ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6065ae:{NFSU2_TR(0x6065ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6065b0:L6065b0:{c.instructions+=11;NFSU2_TR(0x6065b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065b1:{NFSU2_TR(0x6065b1);
__builtin_memmove((R+20),(R+16),4);
}
B6065b3:{NFSU2_TR(0x6065b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6065b6:{NFSU2_TR(0x6065b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe4ull))));
}
B6065bc:{NFSU2_TR(0x6065bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065bd:{NFSU2_TR(0x6065bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065be:{NFSU2_TR(0x6065be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065bf:{NFSU2_TR(0x6065bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6065c3:{NFSU2_TR(0x6065c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065c4:{NFSU2_TR(0x6065c4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6065c6:{NFSU2_TR(0x6065c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6065cbull));
TAIL_STATIC(0x5eb5d0u,5eb);
}
B6065cb:L6065cb:{c.instructions+=4;NFSU2_TR(0x6065cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6065ce:{NFSU2_TR(0x6065ce);
w4(R+28,u32(0x1ull));
}
B6065d3:{NFSU2_TR(0x6065d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6065d7:{NFSU2_TR(0x6065d7);
{goto L6065e0;}
}
B6065e0:L6065e0:{c.instructions+=4;NFSU2_TR(0x6065e0);
__builtin_memmove((R+4),gp(0x89e814),4);
}
B6065e6:{NFSU2_TR(0x6065e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6065e8:{NFSU2_TR(0x6065e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6065ea:{NFSU2_TR(0x6065ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6066a4;}}
}
B6065f0:L6065f0:{c.instructions+=1;NFSU2_TR(0x6065f0);
__builtin_memmove((R+8),gp(0x89e810),4);
}
B6065f6:L6065f6:{c.instructions+=2;NFSU2_TR(0x6065f6);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6065f9:{NFSU2_TR(0x6065f9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L606603;}}
}
B6065fb:L6065fb:{c.instructions+=3;NFSU2_TR(0x6065fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B6065ff:{NFSU2_TR(0x6065ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606601:{NFSU2_TR(0x606601);
if(r1(R+518)){{goto L606613;}}
}
B606603:L606603:{c.instructions+=4;NFSU2_TR(0x606603);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B606604:{NFSU2_TR(0x606604);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x940ull))));
}
B60660a:{NFSU2_TR(0x60660a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60660c:{NFSU2_TR(0x60660c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6065f6u);}goto L6065f6;}}
}
B60660e:L60660e:{c.instructions+=1;NFSU2_TR(0x60660e);
{goto L6066a4;}
}
B606613:L606613:{c.instructions+=3;NFSU2_TR(0x606613);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B606619:{NFSU2_TR(0x606619);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60661b:{NFSU2_TR(0x60661b);
if(r1(R+518)){{goto L606623;}}
}
B60661d:L60661d:{c.instructions+=3;NFSU2_TR(0x60661d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60661f:{NFSU2_TR(0x60661f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606621:{NFSU2_TR(0x606621);
{goto L60669a;}
}
B606623:L606623:{c.instructions+=3;NFSU2_TR(0x606623);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606626:{NFSU2_TR(0x606626);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606629:{NFSU2_TR(0x606629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606691;}}
}
B60662b:L60662b:{c.instructions+=5;NFSU2_TR(0x60662b);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B606631:{NFSU2_TR(0x606631);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B606637:{NFSU2_TR(0x606637);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B606639:{NFSU2_TR(0x606639);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60663c:{NFSU2_TR(0x60663c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606645;}}
}
B60663e:L60663e:{c.instructions+=2;NFSU2_TR(0x60663e);
w4(R+0,u32(0x1ull));
}
B606643:{NFSU2_TR(0x606643);
{goto L606647;}
}
B606645:L606645:{c.instructions+=1;NFSU2_TR(0x606645);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B606647:L606647:{c.instructions+=10;NFSU2_TR(0x606647);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B606649:{NFSU2_TR(0x606649);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60664b:{NFSU2_TR(0x60664b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B60664e:{NFSU2_TR(0x60664e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606650:{NFSU2_TR(0x606650);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B606654:{NFSU2_TR(0x606654);
__builtin_memmove((R+0),(R+4),4);
}
B606656:{NFSU2_TR(0x606656);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60665c:{NFSU2_TR(0x60665c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60665e:{NFSU2_TR(0x60665e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60665f:{NFSU2_TR(0x60665f);
if(r1(R+518)){{goto L60669a;}}
}
B606661:L606661:{c.instructions+=10;NFSU2_TR(0x606661);
{u32 ea_=u32(r4(R+8)+u32(2340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B606667:{NFSU2_TR(0x606667);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60666d:{NFSU2_TR(0x60666d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606671:{NFSU2_TR(0x606671);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B606678:{NFSU2_TR(0x606678);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60667c:{NFSU2_TR(0x60667c);
{u32 ea_=u32(r4(R+8)+u32(2344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B606682:{NFSU2_TR(0x606682);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B606687:{NFSU2_TR(0x606687);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60668b:{NFSU2_TR(0x60668b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60668f:{NFSU2_TR(0x60668f);
{goto L60669c;}
}
B606691:L606691:{c.instructions+=2;NFSU2_TR(0x606691);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606694:{NFSU2_TR(0x606694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6066a4;}}
}
B606696:L606696:{c.instructions+=2;NFSU2_TR(0x606696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606698:{NFSU2_TR(0x606698);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60669a:L60669a:{c.instructions+=1;NFSU2_TR(0x60669a);
__builtin_memmove((R+4),(R+24),4);
}
B60669c:L60669c:{c.instructions+=1;NFSU2_TR(0x60669c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6066a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x606480u);}goto L606480;}
}
B6066a1:L6066a1:{c.instructions+=1;NFSU2_TR(0x6066a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6066a4:L6066a4:{c.instructions+=4;NFSU2_TR(0x6066a4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6066a5:{NFSU2_TR(0x6066a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6066a8:{NFSU2_TR(0x6066a8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6066ab:{NFSU2_TR(0x6066ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6065e0u);}goto L6065e0;}}
}
B6066b1:L6066b1:{c.instructions+=2;NFSU2_TR(0x6066b1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6066b7:{NFSU2_TR(0x6066b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6066bcull));
TAIL_STATIC(0x5f0d20u,5f0);
}
B6066bc:L6066bc:{c.instructions+=4;NFSU2_TR(0x6066bc);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B6066c1:{NFSU2_TR(0x6066c1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6066c3:{NFSU2_TR(0x6066c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6066c5:{NFSU2_TR(0x6066c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L606715;}}
}
B6066c7:L6066c7:{c.instructions+=2;NFSU2_TR(0x6066c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6066c9:{NFSU2_TR(0x6066c9);
__builtin_memmove((R+16),(R+16),4);
}
B6066d0:L6066d0:{c.instructions+=5;NFSU2_TR(0x6066d0);
__builtin_memmove((R+8),gp(0x89e810),4);
}
B6066d6:{NFSU2_TR(0x6066d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6066da:{NFSU2_TR(0x6066da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6066dd:{NFSU2_TR(0x6066dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6066e0:{NFSU2_TR(0x6066e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606705;}}
}
B6066e2:L6066e2:{c.instructions+=4;NFSU2_TR(0x6066e2);
__builtin_memmove((R+24),gp(0x890080),4);
}
B6066e8:{NFSU2_TR(0x6066e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6066ee:{NFSU2_TR(0x6066ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6066ef:{NFSU2_TR(0x6066ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6066f4ull));
TAIL_STATIC(0x42f7a0u,42f);
}
B6066f4:L6066f4:{c.instructions+=2;NFSU2_TR(0x6066f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6066f6:{NFSU2_TR(0x6066f6);
if(r1(R+518)){{goto L606705;}}
}
B6066f8:L6066f8:{c.instructions+=5;NFSU2_TR(0x6066f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6066fb:{NFSU2_TR(0x6066fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6066fd:{NFSU2_TR(0x6066fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606700:{NFSU2_TR(0x606700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606703:{NFSU2_TR(0x606703);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B606705:L606705:{c.instructions+=5;NFSU2_TR(0x606705);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B60670a:{NFSU2_TR(0x60670a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60670b:{NFSU2_TR(0x60670b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x940ull))));
}
B606711:{NFSU2_TR(0x606711);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B606713:{NFSU2_TR(0x606713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6066d0u);}goto L6066d0;}}
}
B606715:L606715:{c.instructions+=2;NFSU2_TR(0x606715);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60671b:{NFSU2_TR(0x60671b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606720ull));
TAIL_STATIC(0x5f0d20u,5f0);
}
B606720:L606720:{c.instructions+=6;NFSU2_TR(0x606720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606721:{NFSU2_TR(0x606721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606722:{NFSU2_TR(0x606722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B606723:{NFSU2_TR(0x606723);
__builtin_memmove((R+16),(R+20),4);
}
B606725:{NFSU2_TR(0x606725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606726:{NFSU2_TR(0x606726);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606730:L606730:{c.instructions+=9;NFSU2_TR(0x606730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606731:{NFSU2_TR(0x606731);
__builtin_memmove((R+20),(R+16),4);
}
B606733:{NFSU2_TR(0x606733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606736:{NFSU2_TR(0x606736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606737:{NFSU2_TR(0x606737);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B606738:{NFSU2_TR(0x606738);
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
B60673b:{NFSU2_TR(0x60673b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60673c:{NFSU2_TR(0x60673c);
__builtin_memmove((R+24),(R+4),4);
}
B60673e:{NFSU2_TR(0x60673e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L606c1a;}}
}
B606744:L606744:{c.instructions+=2;NFSU2_TR(0x606744);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x606c48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B60674b:{NFSU2_TR(0x60674b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606c24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B606752:L606752:{c.instructions+=4;NFSU2_TR(0x606752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B606755:{NFSU2_TR(0x606755);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B606758:{NFSU2_TR(0x606758);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B60675b:{NFSU2_TR(0x60675b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6068eb;}}
}
B606761:L606761:{c.instructions+=2;NFSU2_TR(0x606761);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x606c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B606768:{NFSU2_TR(0x606768);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606c60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60676f:L60676f:{c.instructions+=2;NFSU2_TR(0x60676f);
u8 U[4];
w4(U+0,u32(0x78f940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606774:{NFSU2_TR(0x606774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606779ull));
TAIL_STATIC(0x52cf60u,52c);
}
B606779:L606779:{c.instructions+=3;NFSU2_TR(0x606779);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60677c:{NFSU2_TR(0x60677c);
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
B60677e:{NFSU2_TR(0x60677e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6068eb;}}
}
B606784:L606784:{c.instructions+=3;NFSU2_TR(0x606784);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606786:{NFSU2_TR(0x606786);
w4(R+4,u32(0x85ad40ull));
}
B60678b:{NFSU2_TR(0x60678b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606790ull));
TAIL_STATIC(0x5004b0u,500);
}
B606790:L606790:{c.instructions+=3;NFSU2_TR(0x606790);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B606795:{NFSU2_TR(0x606795);
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
B606797:{NFSU2_TR(0x606797);
if(r1(R+518)){{goto L6067ca;}}
}
B606799:L606799:{c.instructions+=1;NFSU2_TR(0x606799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60679eull));
TAIL_STATIC(0x510040u,510);
}
B60679e:L60679e:{c.instructions+=2;NFSU2_TR(0x60679e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60679f:{NFSU2_TR(0x60679f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067a4ull));
TAIL_STATIC(0x52cf60u,52c);
}
B6067a4:L6067a4:{c.instructions+=3;NFSU2_TR(0x6067a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6067a7:{NFSU2_TR(0x6067a7);
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
B6067a9:{NFSU2_TR(0x6067a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6068eb;}}
}
B6067af:L6067af:{c.instructions+=2;NFSU2_TR(0x6067af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6067b1:{NFSU2_TR(0x6067b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067b6ull));
TAIL_STATIC(0x510040u,510);
}
B6067b6:L6067b6:{c.instructions+=2;NFSU2_TR(0x6067b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6067b7:{NFSU2_TR(0x6067b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067bcull));
TAIL_STATIC(0x555e80u,555);
}
B6067bc:L6067bc:{c.instructions+=6;NFSU2_TR(0x6067bc);
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
B6067bf:{NFSU2_TR(0x6067bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6067c0:{NFSU2_TR(0x6067c0);
w4(R+0,u32(0x1ull));
}
B6067c5:{NFSU2_TR(0x6067c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6067c6:{NFSU2_TR(0x6067c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6067c7:{NFSU2_TR(0x6067c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6067ca:L6067ca:{c.instructions+=1;NFSU2_TR(0x6067ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067cfull));
TAIL_STATIC(0x4a4b60u,4a4);
}
B6067cf:L6067cf:{c.instructions+=2;NFSU2_TR(0x6067cf);
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
B6067d1:{NFSU2_TR(0x6067d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6068eb;}}
}
B6067d7:L6067d7:{c.instructions+=1;NFSU2_TR(0x6067d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067dcull));
TAIL_STATIC(0x499460u,499);
}
B6067dc:L6067dc:{c.instructions+=2;NFSU2_TR(0x6067dc);
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
B6067de:{NFSU2_TR(0x6067de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6068eb;}}
}
B6067e4:L6067e4:{c.instructions+=2;NFSU2_TR(0x6067e4);
w4(R+4,u32(0x89cf48ull));
}
B6067e9:{NFSU2_TR(0x6067e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6067eeull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B6067ee:L6067ee:{c.instructions+=2;NFSU2_TR(0x6067ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6067f0:{NFSU2_TR(0x6067f0);
if(r1(R+518)){{goto L60681a;}}
}
B6067f2:L6067f2:{c.instructions+=2;NFSU2_TR(0x6067f2);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6067f9:{NFSU2_TR(0x6067f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60681a;}}
}
B6067fb:L6067fb:{c.instructions+=4;NFSU2_TR(0x6067fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6067fd:{NFSU2_TR(0x6067fd);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606802:{NFSU2_TR(0x606802);
u8 U[4];
w4(U+0,u32(0x794da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606807:{NFSU2_TR(0x606807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60680cull));
TAIL_STATIC(0x537980u,537);
}
B60680c:L60680c:{c.instructions+=6;NFSU2_TR(0x60680c);
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
B60680f:{NFSU2_TR(0x60680f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606810:{NFSU2_TR(0x606810);
w4(R+0,u32(0x1ull));
}
B606815:{NFSU2_TR(0x606815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606816:{NFSU2_TR(0x606816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606817:{NFSU2_TR(0x606817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60681a:L60681a:{c.instructions+=2;NFSU2_TR(0x60681a);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60681f:{NFSU2_TR(0x60681f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606824ull));
TAIL_STATIC(0x52cf60u,52c);
}
B606824:L606824:{c.instructions+=3;NFSU2_TR(0x606824);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B606827:{NFSU2_TR(0x606827);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606829:{NFSU2_TR(0x606829);
if(r1(R+518)){{goto L606838;}}
}
B60682b:L60682b:{c.instructions+=2;NFSU2_TR(0x60682b);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606830:{NFSU2_TR(0x606830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606835ull));
TAIL_STATIC(0x5379a0u,537);
}
B606835:L606835:{c.instructions+=1;NFSU2_TR(0x606835);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B606838:L606838:{c.instructions+=3;NFSU2_TR(0x606838);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60683a:{NFSU2_TR(0x60683a);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60683f:{NFSU2_TR(0x60683f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606844ull));
TAIL_STATIC(0x555e80u,555);
}
B606844:L606844:{c.instructions+=6;NFSU2_TR(0x606844);
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
B606847:{NFSU2_TR(0x606847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606848:{NFSU2_TR(0x606848);
w4(R+0,u32(0x1ull));
}
B60684d:{NFSU2_TR(0x60684d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60684e:{NFSU2_TR(0x60684e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60684f:{NFSU2_TR(0x60684f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606852:L606852:{c.instructions+=3;NFSU2_TR(0x606852);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606854:{NFSU2_TR(0x606854);
w4(R+4,u32(0x85ad40ull));
}
B606859:{NFSU2_TR(0x606859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60685eull));
TAIL_STATIC(0x5004b0u,500);
}
B60685e:L60685e:{c.instructions+=1;NFSU2_TR(0x60685e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606863ull));
TAIL_STATIC(0x498d00u,498);
}
B606863:L606863:{c.instructions+=5;NFSU2_TR(0x606863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606864:{NFSU2_TR(0x606864);
w4(R+0,u32(0x1ull));
}
B606869:{NFSU2_TR(0x606869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60686a:{NFSU2_TR(0x60686a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60686b:{NFSU2_TR(0x60686b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60686e:L60686e:{c.instructions+=3;NFSU2_TR(0x60686e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606870:{NFSU2_TR(0x606870);
w4(R+4,u32(0x85ad40ull));
}
B606875:{NFSU2_TR(0x606875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60687aull));
TAIL_STATIC(0x5004b0u,500);
}
B60687a:L60687a:{c.instructions+=3;NFSU2_TR(0x60687a);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B606880:{NFSU2_TR(0x606880);
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
B606883:{NFSU2_TR(0x606883);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6068eb;}}
}
B606885:L606885:{c.instructions+=1;NFSU2_TR(0x606885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60688aull));
TAIL_STATIC(0x4976b0u,497);
}
B60688a:L60688a:{c.instructions+=5;NFSU2_TR(0x60688a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60688b:{NFSU2_TR(0x60688b);
w4(R+0,u32(0x1ull));
}
B606890:{NFSU2_TR(0x606890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606891:{NFSU2_TR(0x606891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606892:{NFSU2_TR(0x606892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606895:L606895:{c.instructions+=3;NFSU2_TR(0x606895);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606897:{NFSU2_TR(0x606897);
w4(R+4,u32(0x85ad40ull));
}
B60689c:{NFSU2_TR(0x60689c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6068a1ull));
TAIL_STATIC(0x5004b0u,500);
}
B6068a1:L6068a1:{c.instructions+=3;NFSU2_TR(0x6068a1);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B6068a6:{NFSU2_TR(0x6068a6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B6068a9:{NFSU2_TR(0x6068a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6068eb;}}
}
B6068ab:L6068ab:{c.instructions+=3;NFSU2_TR(0x6068ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6068ad:{NFSU2_TR(0x6068ad);
u8 U[4];
w4(U+0,u32(0x799ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6068b2:{NFSU2_TR(0x6068b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6068b7ull));
TAIL_STATIC(0x555e80u,555);
}
B6068b7:L6068b7:{c.instructions+=6;NFSU2_TR(0x6068b7);
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
B6068ba:{NFSU2_TR(0x6068ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6068bb:{NFSU2_TR(0x6068bb);
w4(R+0,u32(0x1ull));
}
B6068c0:{NFSU2_TR(0x6068c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6068c1:{NFSU2_TR(0x6068c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6068c2:{NFSU2_TR(0x6068c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6068c5:L6068c5:{c.instructions+=3;NFSU2_TR(0x6068c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6068c7:{NFSU2_TR(0x6068c7);
w4(R+4,u32(0x85ad40ull));
}
B6068cc:{NFSU2_TR(0x6068cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6068d1ull));
TAIL_STATIC(0x5004b0u,500);
}
B6068d1:L6068d1:{c.instructions+=3;NFSU2_TR(0x6068d1);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B6068d7:{NFSU2_TR(0x6068d7);
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
B6068da:{NFSU2_TR(0x6068da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6068eb;}}
}
B6068dc:L6068dc:{c.instructions+=3;NFSU2_TR(0x6068dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6068de:{NFSU2_TR(0x6068de);
u8 U[4];
w4(U+0,u32(0x799f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6068e3:{NFSU2_TR(0x6068e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6068e8ull));
TAIL_STATIC(0x555e80u,555);
}
B6068e8:L6068e8:{c.instructions+=1;NFSU2_TR(0x6068e8);
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
B6068eb:L6068eb:{c.instructions+=5;NFSU2_TR(0x6068eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6068ec:{NFSU2_TR(0x6068ec);
w4(R+0,u32(0x1ull));
}
B6068f1:{NFSU2_TR(0x6068f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6068f2:{NFSU2_TR(0x6068f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6068f3:{NFSU2_TR(0x6068f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6068f6:L6068f6:{c.instructions+=1;NFSU2_TR(0x6068f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6068fbull));
TAIL_STATIC(0x57c390u,57c);
}
B6068fb:L6068fb:{c.instructions+=4;NFSU2_TR(0x6068fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6068fe:{NFSU2_TR(0x6068fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B606901:{NFSU2_TR(0x606901);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B606904:{NFSU2_TR(0x606904);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6069d6;}}
}
B60690a:L60690a:{c.instructions+=2;NFSU2_TR(0x60690a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x606c9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B606911:{NFSU2_TR(0x606911);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606c88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B606918:L606918:{c.instructions+=2;NFSU2_TR(0x606918);
u8 U[4];
w4(U+0,u32(0x78f940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60691d:{NFSU2_TR(0x60691d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606922ull));
TAIL_STATIC(0x52cf60u,52c);
}
B606922:L606922:{c.instructions+=3;NFSU2_TR(0x606922);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B606925:{NFSU2_TR(0x606925);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606927:{NFSU2_TR(0x606927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6069d6;}}
}
B60692d:L60692d:{c.instructions+=3;NFSU2_TR(0x60692d);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B606932:{NFSU2_TR(0x606932);
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
B606934:{NFSU2_TR(0x606934);
if(r1(R+518)){{goto L606954;}}
}
B606936:L606936:{c.instructions+=1;NFSU2_TR(0x606936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60693bull));
TAIL_STATIC(0x510040u,510);
}
B60693b:L60693b:{c.instructions+=2;NFSU2_TR(0x60693b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60693c:{NFSU2_TR(0x60693c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606941ull));
TAIL_STATIC(0x52cf60u,52c);
}
B606941:L606941:{c.instructions+=3;NFSU2_TR(0x606941);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B606944:{NFSU2_TR(0x606944);
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
B606946:{NFSU2_TR(0x606946);
if(r1(R+518)){{goto L6069d6;}}
}
B60694c:L60694c:{c.instructions+=1;NFSU2_TR(0x60694c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606951ull));
TAIL_STATIC(0x510040u,510);
}
B606951:L606951:{c.instructions+=2;NFSU2_TR(0x606951);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606952:{NFSU2_TR(0x606952);
{goto L6069ce;}
}
B606954:L606954:{c.instructions+=1;NFSU2_TR(0x606954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606959ull));
TAIL_STATIC(0x4a4b60u,4a4);
}
B606959:L606959:{c.instructions+=2;NFSU2_TR(0x606959);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60695b:{NFSU2_TR(0x60695b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6069d6;}}
}
B60695d:L60695d:{c.instructions+=2;NFSU2_TR(0x60695d);
w4(R+4,u32(0x89cf48ull));
}
B606962:{NFSU2_TR(0x606962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606967ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B606967:L606967:{c.instructions+=2;NFSU2_TR(0x606967);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606969:{NFSU2_TR(0x606969);
if(r1(R+518)){{goto L606998;}}
}
B60696b:L60696b:{c.instructions+=2;NFSU2_TR(0x60696b);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606972:{NFSU2_TR(0x606972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606998;}}
}
B606974:L606974:{c.instructions+=4;NFSU2_TR(0x606974);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606976:{NFSU2_TR(0x606976);
u8 U[4];
w4(U+0,u32(0x794da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60697b:{NFSU2_TR(0x60697b);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606980:{NFSU2_TR(0x606980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606985ull));
TAIL_STATIC(0x537980u,537);
}
B606985:L606985:{c.instructions+=2;NFSU2_TR(0x606985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B606988:{NFSU2_TR(0x606988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60698dull));
TAIL_STATIC(0x5eb3c0u,5eb);
}
B60698d:L60698d:{c.instructions+=5;NFSU2_TR(0x60698d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60698e:{NFSU2_TR(0x60698e);
w4(R+0,u32(0x1ull));
}
B606993:{NFSU2_TR(0x606993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606994:{NFSU2_TR(0x606994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606995:{NFSU2_TR(0x606995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606998:L606998:{c.instructions+=2;NFSU2_TR(0x606998);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60699d:{NFSU2_TR(0x60699d);
{goto L6069ce;}
}
B60699f:L60699f:{c.instructions+=1;NFSU2_TR(0x60699f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069a4ull));
TAIL_STATIC(0x498d90u,498);
}
B6069a4:L6069a4:{c.instructions+=1;NFSU2_TR(0x6069a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069a9ull));
TAIL_STATIC(0x5eb3c0u,5eb);
}
B6069a9:L6069a9:{c.instructions+=5;NFSU2_TR(0x6069a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6069aa:{NFSU2_TR(0x6069aa);
w4(R+0,u32(0x1ull));
}
B6069af:{NFSU2_TR(0x6069af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6069b0:{NFSU2_TR(0x6069b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6069b1:{NFSU2_TR(0x6069b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6069b4:L6069b4:{c.instructions+=1;NFSU2_TR(0x6069b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069b9ull));
TAIL_STATIC(0x497730u,497);
}
B6069b9:L6069b9:{c.instructions+=1;NFSU2_TR(0x6069b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069beull));
TAIL_STATIC(0x5eb3c0u,5eb);
}
B6069be:L6069be:{c.instructions+=5;NFSU2_TR(0x6069be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6069bf:{NFSU2_TR(0x6069bf);
w4(R+0,u32(0x1ull));
}
B6069c4:{NFSU2_TR(0x6069c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6069c5:{NFSU2_TR(0x6069c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6069c6:{NFSU2_TR(0x6069c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6069c9:L6069c9:{c.instructions+=1;NFSU2_TR(0x6069c9);
u8 U[4];
w4(U+0,u32(0x7a6570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6069ce:L6069ce:{c.instructions+=1;NFSU2_TR(0x6069ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069d3ull));
TAIL_STATIC(0x558f00u,558);
}
B6069d3:L6069d3:{c.instructions+=1;NFSU2_TR(0x6069d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6069d6:L6069d6:{c.instructions+=1;NFSU2_TR(0x6069d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069dbull));
TAIL_STATIC(0x5eb3c0u,5eb);
}
B6069db:L6069db:{c.instructions+=5;NFSU2_TR(0x6069db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6069dc:{NFSU2_TR(0x6069dc);
w4(R+0,u32(0x1ull));
}
B6069e1:{NFSU2_TR(0x6069e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6069e2:{NFSU2_TR(0x6069e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6069e3:{NFSU2_TR(0x6069e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6069e6:L6069e6:{c.instructions+=2;NFSU2_TR(0x6069e6);
w4(R+4,u32(0x89cf48ull));
}
B6069eb:{NFSU2_TR(0x6069eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069f0ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B6069f0:L6069f0:{c.instructions+=2;NFSU2_TR(0x6069f0);
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
B6069f2:{NFSU2_TR(0x6069f2);
if(r1(R+518)){{goto L6069fe;}}
}
B6069f4:L6069f4:{c.instructions+=2;NFSU2_TR(0x6069f4);
w4(R+4,u32(0x827e88ull));
}
B6069f9:{NFSU2_TR(0x6069f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6069feull));
TAIL_STATIC(0x43b4e0u,43b);
}
B6069fe:L6069fe:{c.instructions+=5;NFSU2_TR(0x6069fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6069ff:{NFSU2_TR(0x6069ff);
w4(R+0,u32(0x1ull));
}
B606a04:{NFSU2_TR(0x606a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606a05:{NFSU2_TR(0x606a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606a06:{NFSU2_TR(0x606a06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606a09:L606a09:{c.instructions+=3;NFSU2_TR(0x606a09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606a0b:{NFSU2_TR(0x606a0b);
__builtin_memmove((R+4),(R+24),4);
}
B606a0d:{NFSU2_TR(0x606a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a12ull));
TAIL_STATIC(0x603630u,603);
}
B606a12:L606a12:{c.instructions+=5;NFSU2_TR(0x606a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606a13:{NFSU2_TR(0x606a13);
w4(R+0,u32(0x1ull));
}
B606a18:{NFSU2_TR(0x606a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606a19:{NFSU2_TR(0x606a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606a1a:{NFSU2_TR(0x606a1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606a1d:L606a1d:{c.instructions+=4;NFSU2_TR(0x606a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606a20:{NFSU2_TR(0x606a20);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B606a26:{NFSU2_TR(0x606a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606a27:{NFSU2_TR(0x606a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a2cull));
TAIL_STATIC(0x481210u,481);
}
B606a2c:L606a2c:{c.instructions+=2;NFSU2_TR(0x606a2c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606a2f:{NFSU2_TR(0x606a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606a59;}}
}
B606a31:L606a31:{c.instructions+=1;NFSU2_TR(0x606a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a36ull));
TAIL_STATIC(0x4a9330u,4a9);
}
B606a36:L606a36:{c.instructions+=2;NFSU2_TR(0x606a36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606a38:{NFSU2_TR(0x606a38);
if(r1(R+518)){{goto L606a3f;}}
}
B606a3a:L606a3a:{c.instructions+=1;NFSU2_TR(0x606a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a3full));
TAIL_STATIC(0x4a9310u,4a9);
}
B606a3f:L606a3f:{c.instructions+=4;NFSU2_TR(0x606a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606a42:{NFSU2_TR(0x606a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606a43:{NFSU2_TR(0x606a43);
__builtin_memmove((R+4),(R+24),4);
}
B606a45:{NFSU2_TR(0x606a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a4aull));
TAIL_STATIC(0x603630u,603);
}
B606a4a:L606a4a:{c.instructions+=6;NFSU2_TR(0x606a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606a4b:{NFSU2_TR(0x606a4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606a4f:{NFSU2_TR(0x606a4f);
w4(R+0,u32(0x1ull));
}
B606a54:{NFSU2_TR(0x606a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606a55:{NFSU2_TR(0x606a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606a56:{NFSU2_TR(0x606a56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606a59:L606a59:{c.instructions+=2;NFSU2_TR(0x606a59);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606a5c:{NFSU2_TR(0x606a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606a84;}}
}
B606a5e:L606a5e:{c.instructions+=1;NFSU2_TR(0x606a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a63ull));
TAIL_STATIC(0x4a9330u,4a9);
}
B606a63:L606a63:{c.instructions+=2;NFSU2_TR(0x606a63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606a65:{NFSU2_TR(0x606a65);
if(r1(R+518)){{goto L606a6c;}}
}
B606a67:L606a67:{c.instructions+=1;NFSU2_TR(0x606a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a6cull));
TAIL_STATIC(0x4a9310u,4a9);
}
B606a6c:L606a6c:{c.instructions+=3;NFSU2_TR(0x606a6c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606a6e:{NFSU2_TR(0x606a6e);
__builtin_memmove((R+4),(R+24),4);
}
B606a70:{NFSU2_TR(0x606a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a75ull));
TAIL_STATIC(0x603630u,603);
}
B606a75:L606a75:{c.instructions+=6;NFSU2_TR(0x606a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606a76:{NFSU2_TR(0x606a76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606a7a:{NFSU2_TR(0x606a7a);
w4(R+0,u32(0x1ull));
}
B606a7f:{NFSU2_TR(0x606a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606a80:{NFSU2_TR(0x606a80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606a81:{NFSU2_TR(0x606a81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606a84:L606a84:{c.instructions+=2;NFSU2_TR(0x606a84);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606a87:{NFSU2_TR(0x606a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606aa3;}}
}
B606a89:L606a89:{c.instructions+=4;NFSU2_TR(0x606a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606a8c:{NFSU2_TR(0x606a8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606a8d:{NFSU2_TR(0x606a8d);
__builtin_memmove((R+4),(R+24),4);
}
B606a8f:{NFSU2_TR(0x606a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606a94ull));
TAIL_STATIC(0x603630u,603);
}
B606a94:L606a94:{c.instructions+=6;NFSU2_TR(0x606a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606a95:{NFSU2_TR(0x606a95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606a99:{NFSU2_TR(0x606a99);
w4(R+0,u32(0x1ull));
}
B606a9e:{NFSU2_TR(0x606a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606a9f:{NFSU2_TR(0x606a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606aa0:{NFSU2_TR(0x606aa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606aa3:L606aa3:{c.instructions+=2;NFSU2_TR(0x606aa3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B606aa6:{NFSU2_TR(0x606aa6);
if(r1(R+518)){{goto L606b64;}}
}
B606aac:L606aac:{c.instructions+=2;NFSU2_TR(0x606aac);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606aaf:{NFSU2_TR(0x606aaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ad2;}}
}
B606ab1:L606ab1:{c.instructions+=5;NFSU2_TR(0x606ab1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606ab3:{NFSU2_TR(0x606ab3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606ab5:{NFSU2_TR(0x606ab5);
__builtin_memmove((R+4),(R+24),4);
}
B606ab7:{NFSU2_TR(0x606ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B606abe:{NFSU2_TR(0x606abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606ac3ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B606ac3:L606ac3:{c.instructions+=6;NFSU2_TR(0x606ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606ac4:{NFSU2_TR(0x606ac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606ac8:{NFSU2_TR(0x606ac8);
w4(R+0,u32(0x1ull));
}
B606acd:{NFSU2_TR(0x606acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606ace:{NFSU2_TR(0x606ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606acf:{NFSU2_TR(0x606acf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606ad2:L606ad2:{c.instructions+=2;NFSU2_TR(0x606ad2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606ad5:{NFSU2_TR(0x606ad5);
if(r1(R+518)){{goto L606afc;}}
}
B606ad7:L606ad7:{c.instructions+=2;NFSU2_TR(0x606ad7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606ada:{NFSU2_TR(0x606ada);
if(r1(R+518)){{goto L606afc;}}
}
B606adc:L606adc:{c.instructions+=2;NFSU2_TR(0x606adc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606adf:{NFSU2_TR(0x606adf);
if(r1(R+518)){{goto L606ae6;}}
}
B606ae1:L606ae1:{c.instructions+=2;NFSU2_TR(0x606ae1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B606ae4:{NFSU2_TR(0x606ae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606b64;}}
}
B606ae6:L606ae6:{c.instructions+=2;NFSU2_TR(0x606ae6);
__builtin_memmove((R+4),(R+24),4);
}
B606ae8:{NFSU2_TR(0x606ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606aedull));
TAIL_STATIC(0x603de0u,603);
}
B606aed:L606aed:{c.instructions+=6;NFSU2_TR(0x606aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606aee:{NFSU2_TR(0x606aee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606af2:{NFSU2_TR(0x606af2);
w4(R+0,u32(0x1ull));
}
B606af7:{NFSU2_TR(0x606af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606af8:{NFSU2_TR(0x606af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606af9:{NFSU2_TR(0x606af9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606afc:L606afc:{c.instructions+=3;NFSU2_TR(0x606afc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606afe:{NFSU2_TR(0x606afe);
w4(R+4,u32(0x83a9d0ull));
}
B606b03:{NFSU2_TR(0x606b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b08ull));
TAIL_STATIC(0x503040u,503);
}
B606b08:L606b08:{c.instructions+=3;NFSU2_TR(0x606b08);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B606b0d:{NFSU2_TR(0x606b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606b0f:{NFSU2_TR(0x606b0f);
if(r1(R+518)){{goto L606b46;}}
}
B606b11:L606b11:{c.instructions+=2;NFSU2_TR(0x606b11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606b14:{NFSU2_TR(0x606b14);
if(r1(R+518)){{goto L606b46;}}
}
B606b16:L606b16:{c.instructions+=3;NFSU2_TR(0x606b16);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b18:{NFSU2_TR(0x606b18);
__builtin_memmove((R+4),(R+24),4);
}
B606b1a:{NFSU2_TR(0x606b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b1full));
TAIL_STATIC(0x603630u,603);
}
B606b1f:L606b1f:{c.instructions+=3;NFSU2_TR(0x606b1f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B606b25:{NFSU2_TR(0x606b25);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b27:{NFSU2_TR(0x606b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b2cull));
TAIL_STATIC(0x5fc900u,5fc);
}
B606b2c:L606b2c:{c.instructions+=2;NFSU2_TR(0x606b2c);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B606b32:{NFSU2_TR(0x606b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b37ull));
TAIL_STATIC(0x5ea980u,5ea);
}
B606b37:L606b37:{c.instructions+=6;NFSU2_TR(0x606b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606b38:{NFSU2_TR(0x606b38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606b3c:{NFSU2_TR(0x606b3c);
w4(R+0,u32(0x1ull));
}
B606b41:{NFSU2_TR(0x606b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606b42:{NFSU2_TR(0x606b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606b43:{NFSU2_TR(0x606b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606b46:L606b46:{c.instructions+=4;NFSU2_TR(0x606b46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b48:{NFSU2_TR(0x606b48);
__builtin_memmove((R+4),(R+24),4);
}
B606b4a:{NFSU2_TR(0x606b4a);
s4(0x89e7b0,u32(0x0ull));
}
B606b54:{NFSU2_TR(0x606b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b59ull));
TAIL_STATIC(0x603630u,603);
}
B606b59:L606b59:{c.instructions+=4;NFSU2_TR(0x606b59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b5b:{NFSU2_TR(0x606b5b);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b5d:{NFSU2_TR(0x606b5d);
__builtin_memmove((R+4),(R+24),4);
}
B606b5f:{NFSU2_TR(0x606b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b64ull));
TAIL_STATIC(0x601020u,601);
}
B606b64:L606b64:{c.instructions+=6;NFSU2_TR(0x606b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606b65:{NFSU2_TR(0x606b65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606b69:{NFSU2_TR(0x606b69);
w4(R+0,u32(0x1ull));
}
B606b6e:{NFSU2_TR(0x606b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606b6f:{NFSU2_TR(0x606b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606b70:{NFSU2_TR(0x606b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606b73:L606b73:{c.instructions+=3;NFSU2_TR(0x606b73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b75:{NFSU2_TR(0x606b75);
__builtin_memmove((R+4),(R+24),4);
}
B606b77:{NFSU2_TR(0x606b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b7cull));
TAIL_STATIC(0x603630u,603);
}
B606b7c:L606b7c:{c.instructions+=4;NFSU2_TR(0x606b7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b7e:{NFSU2_TR(0x606b7e);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606b80:{NFSU2_TR(0x606b80);
__builtin_memmove((R+4),(R+24),4);
}
B606b82:{NFSU2_TR(0x606b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606b87ull));
TAIL_STATIC(0x601020u,601);
}
B606b87:L606b87:{c.instructions+=5;NFSU2_TR(0x606b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606b88:{NFSU2_TR(0x606b88);
w4(R+0,u32(0x1ull));
}
B606b8d:{NFSU2_TR(0x606b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606b8e:{NFSU2_TR(0x606b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606b8f:{NFSU2_TR(0x606b8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606b92:L606b92:{c.instructions+=4;NFSU2_TR(0x606b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B606b95:{NFSU2_TR(0x606b95);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606b97:{NFSU2_TR(0x606b97);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B606b9d:{NFSU2_TR(0x606b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ba3;}}
}
B606b9f:L606b9f:{c.instructions+=2;NFSU2_TR(0x606b9f);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606ba1:{NFSU2_TR(0x606ba1);
{goto L606ba4;}
}
B606ba3:L606ba3:{c.instructions+=1;NFSU2_TR(0x606ba3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606ba4:L606ba4:{c.instructions+=1;NFSU2_TR(0x606ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606ba9ull));
TAIL_STATIC(0x481210u,481);
}
B606ba9:L606ba9:{c.instructions+=3;NFSU2_TR(0x606ba9);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B606bae:{NFSU2_TR(0x606bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606bb0:{NFSU2_TR(0x606bb0);
if(r1(R+518)){{goto L606bda;}}
}
B606bb2:L606bb2:{c.instructions+=2;NFSU2_TR(0x606bb2);
w4(R+4,u32(0x85ad40ull));
}
B606bb7:{NFSU2_TR(0x606bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606bbcull));
TAIL_STATIC(0x513950u,513);
}
B606bbc:L606bbc:{c.instructions+=3;NFSU2_TR(0x606bbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606bbe:{NFSU2_TR(0x606bbe);
__builtin_memmove((R+4),(R+24),4);
}
B606bc0:{NFSU2_TR(0x606bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606bc5ull));
TAIL_STATIC(0x603630u,603);
}
B606bc5:L606bc5:{c.instructions+=4;NFSU2_TR(0x606bc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606bc6:{NFSU2_TR(0x606bc6);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606bc8:{NFSU2_TR(0x606bc8);
__builtin_memmove((R+4),(R+24),4);
}
B606bca:{NFSU2_TR(0x606bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606bcfull));
TAIL_STATIC(0x601020u,601);
}
B606bcf:L606bcf:{c.instructions+=5;NFSU2_TR(0x606bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606bd0:{NFSU2_TR(0x606bd0);
w4(R+0,u32(0x1ull));
}
B606bd5:{NFSU2_TR(0x606bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606bd6:{NFSU2_TR(0x606bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606bd7:{NFSU2_TR(0x606bd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606bda:L606bda:{c.instructions+=3;NFSU2_TR(0x606bda);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606bdc:{NFSU2_TR(0x606bdc);
__builtin_memmove((R+4),(R+24),4);
}
B606bde:{NFSU2_TR(0x606bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606be3ull));
TAIL_STATIC(0x603630u,603);
}
B606be3:L606be3:{c.instructions+=3;NFSU2_TR(0x606be3);
__builtin_memmove((R+4),gp(0x890118),4);
}
B606be9:{NFSU2_TR(0x606be9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606beb:{NFSU2_TR(0x606beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606bf0ull));
TAIL_STATIC(0x5fc900u,5fc);
}
B606bf0:L606bf0:{c.instructions+=5;NFSU2_TR(0x606bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606bf1:{NFSU2_TR(0x606bf1);
w4(R+0,u32(0x1ull));
}
B606bf6:{NFSU2_TR(0x606bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606bf7:{NFSU2_TR(0x606bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606bf8:{NFSU2_TR(0x606bf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606bfb:L606bfb:{c.instructions+=3;NFSU2_TR(0x606bfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606bfd:{NFSU2_TR(0x606bfd);
__builtin_memmove((R+4),(R+24),4);
}
B606bff:{NFSU2_TR(0x606bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606c04ull));
TAIL_STATIC(0x603630u,603);
}
B606c04:L606c04:{c.instructions+=4;NFSU2_TR(0x606c04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606c06:{NFSU2_TR(0x606c06);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606c08:{NFSU2_TR(0x606c08);
__builtin_memmove((R+4),(R+24),4);
}
B606c0a:{NFSU2_TR(0x606c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606c0full));
TAIL_STATIC(0x601020u,601);
}
B606c0f:L606c0f:{c.instructions+=5;NFSU2_TR(0x606c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606c10:{NFSU2_TR(0x606c10);
w4(R+0,u32(0x1ull));
}
B606c15:{NFSU2_TR(0x606c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606c16:{NFSU2_TR(0x606c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606c17:{NFSU2_TR(0x606c17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606c1a:L606c1a:{c.instructions+=5;NFSU2_TR(0x606c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606c1b:{NFSU2_TR(0x606c1b);
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
B606c1d:{NFSU2_TR(0x606c1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606c1e:{NFSU2_TR(0x606c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606c1f:{NFSU2_TR(0x606c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606cb0:L606cb0:{c.instructions+=11;NFSU2_TR(0x606cb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606cb1:{NFSU2_TR(0x606cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606cb5:{NFSU2_TR(0x606cb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606cb6:{NFSU2_TR(0x606cb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606cb7:{NFSU2_TR(0x606cb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606cb8:{NFSU2_TR(0x606cb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606cb9:{NFSU2_TR(0x606cb9);
__builtin_memmove((R+28),(R+4),4);
}
B606cbb:{NFSU2_TR(0x606cbb);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B606cc2:{NFSU2_TR(0x606cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B606cc4:{NFSU2_TR(0x606cc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606cc6:{NFSU2_TR(0x606cc6);
if(r1(R+518)){{goto L606cd1;}}
}
B606cc8:L606cc8:{c.instructions+=3;NFSU2_TR(0x606cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606ccb:{NFSU2_TR(0x606ccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606ccf:{NFSU2_TR(0x606ccf);
{goto L606cd9;}
}
B606cd1:L606cd1:{c.instructions+=1;NFSU2_TR(0x606cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B606cd9:L606cd9:{c.instructions+=6;NFSU2_TR(0x606cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B606cdd:{NFSU2_TR(0x606cdd);
__builtin_memmove((R+20),(R+0),4);
}
B606cdf:{NFSU2_TR(0x606cdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B606ce2:{NFSU2_TR(0x606ce2);
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
B606ce5:{NFSU2_TR(0x606ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606ce9:{NFSU2_TR(0x606ce9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L606d4d;}}
}
B606ceb:L606ceb:{c.instructions+=1;NFSU2_TR(0x606ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x607164ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B606cf2:L606cf2:{c.instructions+=7;NFSU2_TR(0x606cf2);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B606cf8:{NFSU2_TR(0x606cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606cfb:{NFSU2_TR(0x606cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B606d01:{NFSU2_TR(0x606d01);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B606d03:{NFSU2_TR(0x606d03);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606d08:{NFSU2_TR(0x606d08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B606d0a:{NFSU2_TR(0x606d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606d0full));
TAIL_STATIC(0x577400u,577);
}
B606d0f:L606d0f:{c.instructions+=1;NFSU2_TR(0x606d0f);
{goto L606d4d;}
}
B606d11:L606d11:{c.instructions+=7;NFSU2_TR(0x606d11);
{u32 ea_=u32(u32(9037848u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B606d17:{NFSU2_TR(0x606d17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606d1d:{NFSU2_TR(0x606d1d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B606d23:{NFSU2_TR(0x606d23);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B606d29:{NFSU2_TR(0x606d29);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B606d2f:{NFSU2_TR(0x606d2f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B606d35:{NFSU2_TR(0x606d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606d3aull));
TAIL_STATIC(0x75bed4u,75b);
}
B606d3a:L606d3a:{c.instructions+=4;NFSU2_TR(0x606d3a);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606d3f:{NFSU2_TR(0x606d3f);
__builtin_memmove((R+4),(R+20),4);
}
B606d41:{NFSU2_TR(0x606d41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B606d44:{NFSU2_TR(0x606d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606d49ull));
TAIL_STATIC(0x577400u,577);
}
B606d49:L606d49:{c.instructions+=1;NFSU2_TR(0x606d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B606d4d:L606d4d:{c.instructions+=6;NFSU2_TR(0x606d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606d53:{NFSU2_TR(0x606d53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606d55:{NFSU2_TR(0x606d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606d58:{NFSU2_TR(0x606d58);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B606d5c:{NFSU2_TR(0x606d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606d5f:{NFSU2_TR(0x606d5f);
if(r1(R+518)){{goto L606d8b;}}
}
B606d61:L606d61:{c.instructions+=1;NFSU2_TR(0x606d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606d66ull));
TAIL_STATIC(0x56d710u,56d);
}
B606d66:L606d66:{c.instructions+=3;NFSU2_TR(0x606d66);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B606d6b:{NFSU2_TR(0x606d6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606d6d:{NFSU2_TR(0x606d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606d78;}}
}
B606d6f:L606d6f:{c.instructions+=3;NFSU2_TR(0x606d6f);
__builtin_memmove((R+0),gp(0x890104),4);
}
B606d74:{NFSU2_TR(0x606d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606d76:{NFSU2_TR(0x606d76);
if(r1(R+518)){{goto L606d8b;}}
}
B606d78:L606d78:{c.instructions+=3;NFSU2_TR(0x606d78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B606d7c:{NFSU2_TR(0x606d7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B606d82:{NFSU2_TR(0x606d82);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L606d8b;}}
}
B606d84:L606d84:{c.instructions+=2;NFSU2_TR(0x606d84);
__builtin_memmove((R+4),(R+24),4);
}
B606d86:{NFSU2_TR(0x606d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606d8bull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B606d8b:L606d8b:{c.instructions+=4;NFSU2_TR(0x606d8b);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B606d90:{NFSU2_TR(0x606d90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606d92:{NFSU2_TR(0x606d92);
w4(R+4,u32(0x1ull));
}
B606d97:{NFSU2_TR(0x606d97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606daf;}}
}
B606d99:L606d99:{c.instructions+=3;NFSU2_TR(0x606d99);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B606d9e:{NFSU2_TR(0x606d9e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606da0:{NFSU2_TR(0x606da0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L606daf;}}
}
B606da2:L606da2:{c.instructions+=3;NFSU2_TR(0x606da2);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B606da7:{NFSU2_TR(0x606da7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606da9:{NFSU2_TR(0x606da9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L606f41;}}
}
B606daf:L606daf:{c.instructions+=3;NFSU2_TR(0x606daf);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B606db4:{NFSU2_TR(0x606db4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606db6:{NFSU2_TR(0x606db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606dc1;}}
}
B606db8:L606db8:{c.instructions+=3;NFSU2_TR(0x606db8);
__builtin_memmove((R+0),gp(0x890104),4);
}
B606dbd:{NFSU2_TR(0x606dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606dbf:{NFSU2_TR(0x606dbf);
if(r1(R+518)){{goto L606df4;}}
}
B606dc1:L606dc1:{c.instructions+=4;NFSU2_TR(0x606dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B606dc3:{NFSU2_TR(0x606dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606dc6:{NFSU2_TR(0x606dc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B606dc9:{NFSU2_TR(0x606dc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606df4;}}
}
B606dcb:L606dcb:{c.instructions+=3;NFSU2_TR(0x606dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B606dd1:{NFSU2_TR(0x606dd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606dd3:{NFSU2_TR(0x606dd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606df4;}}
}
B606dd5:L606dd5:{c.instructions+=2;NFSU2_TR(0x606dd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606dd8:{NFSU2_TR(0x606dd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606df4;}}
}
B606dda:L606dda:{c.instructions+=3;NFSU2_TR(0x606dda);
__builtin_memmove((R+8),gp(0x89cf4c),4);
}
B606de0:{NFSU2_TR(0x606de0);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B606de8:{NFSU2_TR(0x606de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606df4;}}
}
B606dea:L606dea:{c.instructions+=3;NFSU2_TR(0x606dea);
__builtin_memmove((R+12),(R+4),4);
}
B606dec:{NFSU2_TR(0x606dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606df0:{NFSU2_TR(0x606df0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B606df4:L606df4:{c.instructions+=3;NFSU2_TR(0x606df4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B606df7:{NFSU2_TR(0x606df7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606df9:{NFSU2_TR(0x606df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606e17;}}
}
B606dfb:L606dfb:{c.instructions+=2;NFSU2_TR(0x606dfb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606dfd:{NFSU2_TR(0x606dfd);
if(r1(R+518)){{goto L606e0d;}}
}
B606dff:L606dff:{c.instructions+=2;NFSU2_TR(0x606dff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606e02:{NFSU2_TR(0x606e02);
if(r1(R+518)){{goto L606e0d;}}
}
B606e04:L606e04:{c.instructions+=2;NFSU2_TR(0x606e04);
__builtin_memmove((R+4),(R+28),4);
}
B606e06:{NFSU2_TR(0x606e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606e0bull));
TAIL_STATIC(0x5eefb0u,5ee);
}
B606e0b:L606e0b:{c.instructions+=1;NFSU2_TR(0x606e0b);
{goto L606e14;}
}
B606e0d:L606e0d:{c.instructions+=2;NFSU2_TR(0x606e0d);
__builtin_memmove((R+4),(R+28),4);
}
B606e0f:{NFSU2_TR(0x606e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606e14ull));
TAIL_STATIC(0x5eef70u,5ee);
}
B606e14:L606e14:{c.instructions+=1;NFSU2_TR(0x606e14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B606e17:L606e17:{c.instructions+=2;NFSU2_TR(0x606e17);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606e1e:{NFSU2_TR(0x606e1e);
if(r1(R+518)){{goto L606e53;}}
}
B606e20:L606e20:{c.instructions+=3;NFSU2_TR(0x606e20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B606e24:{NFSU2_TR(0x606e24);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B606e2a:{NFSU2_TR(0x606e2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606e42;}}
}
B606e2c:L606e2c:{c.instructions+=5;NFSU2_TR(0x606e2c);
__builtin_memmove((R+4),gp(0x890118),4);
}
B606e32:{NFSU2_TR(0x606e32);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B606e39:{NFSU2_TR(0x606e39);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B606e3d:{NFSU2_TR(0x606e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B606e40:{NFSU2_TR(0x606e40);
{goto L606e73;}
}
B606e42:L606e42:{c.instructions+=4;NFSU2_TR(0x606e42);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B606e48:{NFSU2_TR(0x606e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B606e4b:{NFSU2_TR(0x606e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606e51:{NFSU2_TR(0x606e51);
{goto L606e79;}
}
B606e53:L606e53:{c.instructions+=2;NFSU2_TR(0x606e53);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606e56:{NFSU2_TR(0x606e56);
if(r1(R+518)){{goto L606e68;}}
}
B606e58:L606e58:{c.instructions+=2;NFSU2_TR(0x606e58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606e5b:{NFSU2_TR(0x606e5b);
if(r1(R+518)){{goto L606e68;}}
}
B606e5d:L606e5d:{c.instructions+=3;NFSU2_TR(0x606e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606e60:{NFSU2_TR(0x606e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606e66:{NFSU2_TR(0x606e66);
{goto L606e79;}
}
B606e68:L606e68:{c.instructions+=2;NFSU2_TR(0x606e68);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B606e6c:{NFSU2_TR(0x606e6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B606e73:L606e73:{c.instructions+=1;NFSU2_TR(0x606e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606e79:L606e79:{c.instructions+=9;NFSU2_TR(0x606e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606e7d:{NFSU2_TR(0x606e7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B606e81:{NFSU2_TR(0x606e81);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B606e85:{NFSU2_TR(0x606e85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606e86:{NFSU2_TR(0x606e86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606e87:{NFSU2_TR(0x606e87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606e88:{NFSU2_TR(0x606e88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606e89:{NFSU2_TR(0x606e89);
w4(R+4,u32(0x89cf48ull));
}
B606e8e:{NFSU2_TR(0x606e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606e93ull));
TAIL_STATIC(0x602000u,602);
}
B606e93:L606e93:{c.instructions+=2;NFSU2_TR(0x606e93);
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
B606e95:{NFSU2_TR(0x606e95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ea5;}}
}
B606e97:L606e97:{c.instructions+=7;NFSU2_TR(0x606e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B606e98:{NFSU2_TR(0x606e98);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B606e9e:{NFSU2_TR(0x606e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B606e9f:{NFSU2_TR(0x606e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B606ea0:{NFSU2_TR(0x606ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B606ea1:{NFSU2_TR(0x606ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B606ea2:{NFSU2_TR(0x606ea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B606ea5:L606ea5:{c.instructions+=4;NFSU2_TR(0x606ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B606ea7:{NFSU2_TR(0x606ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606eaa:{NFSU2_TR(0x606eaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B606eae:{NFSU2_TR(0x606eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ef3;}}
}
B606eb0:L606eb0:{c.instructions+=2;NFSU2_TR(0x606eb0);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B606eb5:{NFSU2_TR(0x606eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ef3;}}
}
B606eb7:L606eb7:{c.instructions+=2;NFSU2_TR(0x606eb7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B606ebb:{NFSU2_TR(0x606ebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ef3;}}
}
B606ebd:L606ebd:{c.instructions+=3;NFSU2_TR(0x606ebd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B606ec0:{NFSU2_TR(0x606ec0);
__builtin_memmove((R+4),(R+12),4);
}
B606ec2:{NFSU2_TR(0x606ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606ec7ull));
TAIL_STATIC(0x401820u,401);
}
B606ec7:L606ec7:{c.instructions+=2;NFSU2_TR(0x606ec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606ec9:{NFSU2_TR(0x606ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606ef3;}}
}
B606ecb:L606ecb:{c.instructions+=4;NFSU2_TR(0x606ecb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B606ecf:{NFSU2_TR(0x606ecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B606ed6:{NFSU2_TR(0x606ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606ed8:{NFSU2_TR(0x606ed8);
if(r1(R+518)){{goto L606ef3;}}
}
B606eda:L606eda:{c.instructions+=1;NFSU2_TR(0x606eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606edfull));
TAIL_STATIC(0x5efa00u,5ef);
}
B606edf:L606edf:{c.instructions+=2;NFSU2_TR(0x606edf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606ee1:{NFSU2_TR(0x606ee1);
if(r1(R+518)){{goto L606ef3;}}
}
B606ee3:L606ee3:{c.instructions+=5;NFSU2_TR(0x606ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606ee6:{NFSU2_TR(0x606ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B606ee9:{NFSU2_TR(0x606ee9);
__builtin_memmove((R+0),gp(0x7a5690),4);
}
B606eee:{NFSU2_TR(0x606eee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B606ef0:{NFSU2_TR(0x606ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606ef3:L606ef3:{c.instructions+=3;NFSU2_TR(0x606ef3);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B606ef8:{NFSU2_TR(0x606ef8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606efa:{NFSU2_TR(0x606efa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606f2b;}}
}
B606efc:L606efc:{c.instructions+=3;NFSU2_TR(0x606efc);
__builtin_memmove((R+0),gp(0x890104),4);
}
B606f01:{NFSU2_TR(0x606f01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606f03:{NFSU2_TR(0x606f03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606f2b;}}
}
B606f05:L606f05:{c.instructions+=3;NFSU2_TR(0x606f05);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B606f0a:{NFSU2_TR(0x606f0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606f0c:{NFSU2_TR(0x606f0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606f2b;}}
}
B606f0e:L606f0e:{c.instructions+=3;NFSU2_TR(0x606f0e);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B606f13:{NFSU2_TR(0x606f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606f15:{NFSU2_TR(0x606f15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606f2b;}}
}
B606f17:L606f17:{c.instructions+=3;NFSU2_TR(0x606f17);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B606f1b:{NFSU2_TR(0x606f1b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B606f1f:{NFSU2_TR(0x606f1f);
if(r1(R+518)){{goto L606f2b;}}
}
B606f21:L606f21:{c.instructions+=2;NFSU2_TR(0x606f21);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B606f25:{NFSU2_TR(0x606f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606f2b:L606f2b:{c.instructions+=6;NFSU2_TR(0x606f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B606f2d:{NFSU2_TR(0x606f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606f30:{NFSU2_TR(0x606f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B606f34:{NFSU2_TR(0x606f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B606f38:{NFSU2_TR(0x606f38);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B606f3f:{NFSU2_TR(0x606f3f);
{goto L606fa4;}
}
B606f41:L606f41:{c.instructions+=3;NFSU2_TR(0x606f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606f45:{NFSU2_TR(0x606f45);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606f47:{NFSU2_TR(0x606f47);
if(r1(R+518)){{goto L606f59;}}
}
B606f49:L606f49:{c.instructions+=1;NFSU2_TR(0x606f49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L606fa4;}}
}
B606f4b:L606f4b:{c.instructions+=3;NFSU2_TR(0x606f4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B606f4e:{NFSU2_TR(0x606f4e);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606f55:{NFSU2_TR(0x606f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606fa4;}}
}
B606f57:L606f57:{c.instructions+=1;NFSU2_TR(0x606f57);
{goto L606f92;}
}
B606f59:L606f59:{c.instructions+=4;NFSU2_TR(0x606f59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B606f5d:{NFSU2_TR(0x606f5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B606f63:{NFSU2_TR(0x606f63);
__builtin_memmove((R+4),(R+28),4);
}
B606f65:{NFSU2_TR(0x606f65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606f8a;}}
}
B606f67:L606f67:{c.instructions+=1;NFSU2_TR(0x606f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606f6cull));
TAIL_STATIC(0x5eef70u,5ee);
}
B606f6c:L606f6c:{c.instructions+=7;NFSU2_TR(0x606f6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B606f6f:{NFSU2_TR(0x606f6f);
__builtin_memmove((R+0),gp(0x890118),4);
}
B606f74:{NFSU2_TR(0x606f74);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B606f7b:{NFSU2_TR(0x606f7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B606f7f:{NFSU2_TR(0x606f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B606f82:{NFSU2_TR(0x606f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B606f88:{NFSU2_TR(0x606f88);
{goto L606fa4;}
}
B606f8a:L606f8a:{c.instructions+=1;NFSU2_TR(0x606f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606f8full));
TAIL_STATIC(0x5eef70u,5ee);
}
B606f8f:L606f8f:{c.instructions+=1;NFSU2_TR(0x606f8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B606f92:L606f92:{c.instructions+=6;NFSU2_TR(0x606f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B606f98:{NFSU2_TR(0x606f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B606f9b:{NFSU2_TR(0x606f9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606f9c:{NFSU2_TR(0x606f9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B606f9d:{NFSU2_TR(0x606f9d);
__builtin_memmove((R+4),(R+24),4);
}
B606f9f:{NFSU2_TR(0x606f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606fa4ull));
TAIL_STATIC(0x5f7ec0u,5f7);
}
B606fa4:L606fa4:{c.instructions+=3;NFSU2_TR(0x606fa4);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B606fa9:{NFSU2_TR(0x606fa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606fab:{NFSU2_TR(0x606fab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L606fb6;}}
}
B606fad:L606fad:{c.instructions+=3;NFSU2_TR(0x606fad);
__builtin_memmove((R+0),gp(0x890104),4);
}
B606fb2:{NFSU2_TR(0x606fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606fb4:{NFSU2_TR(0x606fb4);
if(r1(R+518)){TAIL_STATIC(0x607017u,607);}
}
B606fb6:L606fb6:{c.instructions+=3;NFSU2_TR(0x606fb6);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B606fbb:{NFSU2_TR(0x606fbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B606fbd:{NFSU2_TR(0x606fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606fbf:L606fbf:{c.instructions+=3;NFSU2_TR(0x606fbf);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B606fc4:{NFSU2_TR(0x606fc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606fc6:{NFSU2_TR(0x606fc6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x607017u,607);}
}
B606fc8:L606fc8:{c.instructions+=3;NFSU2_TR(0x606fc8);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B606fcd:{NFSU2_TR(0x606fcd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B606fcf:{NFSU2_TR(0x606fcf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x607017u,607);}
}
B606fd1:L606fd1:{c.instructions+=4;NFSU2_TR(0x606fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B606fd4:{NFSU2_TR(0x606fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B606fd7:{NFSU2_TR(0x606fd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606fda:{NFSU2_TR(0x606fda);
if(r1(R+518)){{goto L606fea;}}
}
B606fdc:L606fdc:{c.instructions+=2;NFSU2_TR(0x606fdc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606fdf:{NFSU2_TR(0x606fdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606fe1:L606fe1:{c.instructions+=2;NFSU2_TR(0x606fe1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606fe8:{NFSU2_TR(0x606fe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606fea:L606fea:{c.instructions+=2;NFSU2_TR(0x606fea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B606fed:{NFSU2_TR(0x606fed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606fef:L606fef:{c.instructions+=2;NFSU2_TR(0x606fef);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B606ff2:{NFSU2_TR(0x606ff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x607017u,607);}
}
B606ff4:L606ff4:{c.instructions+=3;NFSU2_TR(0x606ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B606ff7:{NFSU2_TR(0x606ff7);
__builtin_memmove((R+4),(R+20),4);
}
B606ff9:{NFSU2_TR(0x606ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x606ffeull));
TAIL_STATIC(0x401820u,401);
}
B606ffe:L606ffe:{c.instructions+=1;NFSU2_TR(0x606ffe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x607000u,607);
}
XIT:NFSU2_TR_EXIT(0x606,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
