#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_463(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x476,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x476,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_476(u8* __restrict R,Cpu& c);
u32 page_476(Cpu& c){return body_476(c.regs.data(),c);}
__attribute__((noinline)) u32 body_476(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x476000:goto L476000;
case 0x476002:c.instructions+=15;goto B476002;
case 0x476007:c.instructions+=14;goto B476007;
case 0x47600d:c.instructions+=13;goto B47600d;
case 0x47600e:c.instructions+=12;goto B47600e;
case 0x476015:c.instructions+=11;goto B476015;
case 0x476016:c.instructions+=10;goto B476016;
case 0x476017:c.instructions+=9;goto B476017;
case 0x476019:c.instructions+=8;goto B476019;
case 0x47601a:c.instructions+=7;goto B47601a;
case 0x47601e:c.instructions+=6;goto B47601e;
case 0x476024:c.instructions+=5;goto B476024;
case 0x47602a:c.instructions+=4;goto B47602a;
case 0x47602c:c.instructions+=3;goto B47602c;
case 0x47602e:c.instructions+=2;goto B47602e;
case 0x476032:c.instructions+=1;goto B476032;
case 0x476034:goto L476034;
case 0x476036:c.instructions+=2;goto B476036;
case 0x476038:c.instructions+=1;goto B476038;
case 0x47603a:goto L47603a;
case 0x476040:c.instructions+=3;goto B476040;
case 0x476042:c.instructions+=2;goto B476042;
case 0x476048:c.instructions+=1;goto B476048;
case 0x47604a:goto L47604a;
case 0x47604c:c.instructions+=2;goto B47604c;
case 0x47604e:c.instructions+=1;goto B47604e;
case 0x476050:goto L476050;
case 0x476056:c.instructions+=3;goto B476056;
case 0x476058:c.instructions+=2;goto B476058;
case 0x47605e:c.instructions+=1;goto B47605e;
case 0x476060:goto L476060;
case 0x476062:c.instructions+=2;goto B476062;
case 0x476064:c.instructions+=1;goto B476064;
case 0x476066:goto L476066;
case 0x47606a:c.instructions+=7;goto B47606a;
case 0x476070:c.instructions+=6;goto B476070;
case 0x476076:c.instructions+=5;goto B476076;
case 0x476077:c.instructions+=4;goto B476077;
case 0x476078:c.instructions+=3;goto B476078;
case 0x47607f:c.instructions+=2;goto B47607f;
case 0x476082:c.instructions+=1;goto B476082;
case 0x476090:goto L476090;
case 0x476091:c.instructions+=2;goto B476091;
case 0x476093:c.instructions+=1;goto B476093;
case 0x476098:goto L476098;
case 0x47609a:c.instructions+=13;goto B47609a;
case 0x4760a0:c.instructions+=12;goto B4760a0;
case 0x4760a6:c.instructions+=11;goto B4760a6;
case 0x4760ac:c.instructions+=10;goto B4760ac;
case 0x4760b2:c.instructions+=9;goto B4760b2;
case 0x4760b8:c.instructions+=8;goto B4760b8;
case 0x4760be:c.instructions+=7;goto B4760be;
case 0x4760c4:c.instructions+=6;goto B4760c4;
case 0x4760ca:c.instructions+=5;goto B4760ca;
case 0x4760ce:c.instructions+=4;goto B4760ce;
case 0x4760d4:c.instructions+=3;goto B4760d4;
case 0x4760d6:c.instructions+=2;goto B4760d6;
case 0x4760d7:c.instructions+=1;goto B4760d7;
case 0x4760e0:goto L4760e0;
case 0x4760e2:c.instructions+=16;goto B4760e2;
case 0x4760e7:c.instructions+=15;goto B4760e7;
case 0x4760ed:c.instructions+=14;goto B4760ed;
case 0x4760ee:c.instructions+=13;goto B4760ee;
case 0x4760f5:c.instructions+=12;goto B4760f5;
case 0x4760f8:c.instructions+=11;goto B4760f8;
case 0x4760f9:c.instructions+=10;goto B4760f9;
case 0x4760fa:c.instructions+=9;goto B4760fa;
case 0x4760fc:c.instructions+=8;goto B4760fc;
case 0x4760fd:c.instructions+=7;goto B4760fd;
case 0x476101:c.instructions+=6;goto B476101;
case 0x476107:c.instructions+=5;goto B476107;
case 0x47610d:c.instructions+=4;goto B47610d;
case 0x47610f:c.instructions+=3;goto B47610f;
case 0x476111:c.instructions+=2;goto B476111;
case 0x476115:c.instructions+=1;goto B476115;
case 0x476117:goto L476117;
case 0x476119:c.instructions+=2;goto B476119;
case 0x47611b:c.instructions+=1;goto B47611b;
case 0x47611d:goto L47611d;
case 0x476122:goto L476122;
case 0x476126:c.instructions+=2;goto B476126;
case 0x476127:c.instructions+=1;goto B476127;
case 0x47612c:goto L47612c;
case 0x47612f:c.instructions+=1;goto B47612f;
case 0x476134:goto L476134;
case 0x476138:c.instructions+=4;goto B476138;
case 0x47613a:c.instructions+=3;goto B47613a;
case 0x47613b:c.instructions+=2;goto B47613b;
case 0x47613c:c.instructions+=1;goto B47613c;
case 0x47613f:goto L47613f;
case 0x476144:goto L476144;
case 0x47614a:c.instructions+=3;goto B47614a;
case 0x47614c:c.instructions+=2;goto B47614c;
case 0x476152:c.instructions+=1;goto B476152;
case 0x476154:goto L476154;
case 0x476156:c.instructions+=2;goto B476156;
case 0x476158:c.instructions+=1;goto B476158;
case 0x47615a:goto L47615a;
case 0x47615f:goto L47615f;
case 0x476163:c.instructions+=2;goto B476163;
case 0x476164:c.instructions+=1;goto B476164;
case 0x476169:goto L476169;
case 0x47616c:c.instructions+=1;goto B47616c;
case 0x476171:goto L476171;
case 0x476175:c.instructions+=4;goto B476175;
case 0x476177:c.instructions+=3;goto B476177;
case 0x476178:c.instructions+=2;goto B476178;
case 0x476179:c.instructions+=1;goto B476179;
case 0x47617c:goto L47617c;
case 0x476181:goto L476181;
case 0x476185:c.instructions+=8;goto B476185;
case 0x47618b:c.instructions+=7;goto B47618b;
case 0x47618c:c.instructions+=6;goto B47618c;
case 0x476192:c.instructions+=5;goto B476192;
case 0x476193:c.instructions+=4;goto B476193;
case 0x476194:c.instructions+=3;goto B476194;
case 0x47619b:c.instructions+=2;goto B47619b;
case 0x47619e:c.instructions+=1;goto B47619e;
case 0x4761a0:goto L4761a0;
case 0x4761a1:c.instructions+=2;goto B4761a1;
case 0x4761a3:c.instructions+=1;goto B4761a3;
case 0x4761a8:goto L4761a8;
case 0x4761aa:c.instructions+=12;goto B4761aa;
case 0x4761b0:c.instructions+=11;goto B4761b0;
case 0x4761b6:c.instructions+=10;goto B4761b6;
case 0x4761bc:c.instructions+=9;goto B4761bc;
case 0x4761c2:c.instructions+=8;goto B4761c2;
case 0x4761c8:c.instructions+=7;goto B4761c8;
case 0x4761ce:c.instructions+=6;goto B4761ce;
case 0x4761d4:c.instructions+=5;goto B4761d4;
case 0x4761d8:c.instructions+=4;goto B4761d8;
case 0x4761de:c.instructions+=3;goto B4761de;
case 0x4761e0:c.instructions+=2;goto B4761e0;
case 0x4761e1:c.instructions+=1;goto B4761e1;
case 0x4761f0:goto L4761f0;
case 0x4761f2:c.instructions+=14;goto B4761f2;
case 0x4761f7:c.instructions+=13;goto B4761f7;
case 0x4761fd:c.instructions+=12;goto B4761fd;
case 0x4761fe:c.instructions+=11;goto B4761fe;
case 0x476205:c.instructions+=10;goto B476205;
case 0x476208:c.instructions+=9;goto B476208;
case 0x476209:c.instructions+=8;goto B476209;
case 0x47620b:c.instructions+=7;goto B47620b;
case 0x47620c:c.instructions+=6;goto B47620c;
case 0x476210:c.instructions+=5;goto B476210;
case 0x476216:c.instructions+=4;goto B476216;
case 0x47621c:c.instructions+=3;goto B47621c;
case 0x47621e:c.instructions+=2;goto B47621e;
case 0x476226:c.instructions+=1;goto B476226;
case 0x476228:goto L476228;
case 0x47622a:c.instructions+=2;goto B47622a;
case 0x47622c:c.instructions+=1;goto B47622c;
case 0x47622e:goto L47622e;
case 0x476233:goto L476233;
case 0x476237:c.instructions+=2;goto B476237;
case 0x476238:c.instructions+=1;goto B476238;
case 0x47623d:goto L47623d;
case 0x476240:c.instructions+=1;goto B476240;
case 0x476245:goto L476245;
case 0x476249:c.instructions+=4;goto B476249;
case 0x47624b:c.instructions+=3;goto B47624b;
case 0x47624d:c.instructions+=2;goto B47624d;
case 0x47624e:c.instructions+=1;goto B47624e;
case 0x476251:goto L476251;
case 0x476256:goto L476256;
case 0x47625a:c.instructions+=7;goto B47625a;
case 0x476264:c.instructions+=6;goto B476264;
case 0x47626a:c.instructions+=5;goto B47626a;
case 0x47626b:c.instructions+=4;goto B47626b;
case 0x47626c:c.instructions+=3;goto B47626c;
case 0x476273:c.instructions+=2;goto B476273;
case 0x476276:c.instructions+=1;goto B476276;
case 0x476280:goto L476280;
case 0x476281:c.instructions+=6;goto B476281;
case 0x476285:c.instructions+=5;goto B476285;
case 0x476287:c.instructions+=4;goto B476287;
case 0x476288:c.instructions+=3;goto B476288;
case 0x47628a:c.instructions+=2;goto B47628a;
case 0x47628c:c.instructions+=1;goto B47628c;
case 0x47628f:goto L47628f;
case 0x476295:c.instructions+=1;goto B476295;
case 0x476297:goto L476297;
case 0x47629c:c.instructions+=2;goto B47629c;
case 0x47629e:c.instructions+=1;goto B47629e;
case 0x4762a3:goto L4762a3;
case 0x4762a6:c.instructions+=3;goto B4762a6;
case 0x4762a7:c.instructions+=2;goto B4762a7;
case 0x4762a8:c.instructions+=1;goto B4762a8;
case 0x4762ab:goto L4762ab;
case 0x4762b1:c.instructions+=3;goto B4762b1;
case 0x4762b2:c.instructions+=2;goto B4762b2;
case 0x4762b3:c.instructions+=1;goto B4762b3;
case 0x4762c0:goto L4762c0;
case 0x4762c1:c.instructions+=2;goto B4762c1;
case 0x4762c3:c.instructions+=1;goto B4762c3;
case 0x4762c8:goto L4762c8;
case 0x4762ca:c.instructions+=12;goto B4762ca;
case 0x4762d0:c.instructions+=11;goto B4762d0;
case 0x4762d6:c.instructions+=10;goto B4762d6;
case 0x4762dc:c.instructions+=9;goto B4762dc;
case 0x4762e2:c.instructions+=8;goto B4762e2;
case 0x4762e4:c.instructions+=7;goto B4762e4;
case 0x4762e7:c.instructions+=6;goto B4762e7;
case 0x4762ed:c.instructions+=5;goto B4762ed;
case 0x4762f2:c.instructions+=4;goto B4762f2;
case 0x4762f4:c.instructions+=3;goto B4762f4;
case 0x4762fa:c.instructions+=2;goto B4762fa;
case 0x4762fb:c.instructions+=1;goto B4762fb;
case 0x476300:goto L476300;
case 0x476302:c.instructions+=14;goto B476302;
case 0x476307:c.instructions+=13;goto B476307;
case 0x47630d:c.instructions+=12;goto B47630d;
case 0x47630e:c.instructions+=11;goto B47630e;
case 0x476315:c.instructions+=10;goto B476315;
case 0x476316:c.instructions+=9;goto B476316;
case 0x476317:c.instructions+=8;goto B476317;
case 0x476319:c.instructions+=7;goto B476319;
case 0x47631a:c.instructions+=6;goto B47631a;
case 0x47631e:c.instructions+=5;goto B47631e;
case 0x476324:c.instructions+=4;goto B476324;
case 0x47632a:c.instructions+=3;goto B47632a;
case 0x47632c:c.instructions+=2;goto B47632c;
case 0x476334:c.instructions+=1;goto B476334;
case 0x476336:goto L476336;
case 0x47633b:goto L47633b;
case 0x476345:goto L476345;
case 0x47634b:c.instructions+=2;goto B47634b;
case 0x47634d:c.instructions+=1;goto B47634d;
case 0x47634f:goto L47634f;
case 0x476354:goto L476354;
case 0x47635e:goto L47635e;
case 0x476363:goto L476363;
case 0x476365:c.instructions+=2;goto B476365;
case 0x476367:c.instructions+=1;goto B476367;
case 0x476369:goto L476369;
case 0x47636a:c.instructions+=1;goto B47636a;
case 0x47636f:goto L47636f;
case 0x476372:goto L476372;
case 0x476378:c.instructions+=3;goto B476378;
case 0x47637b:c.instructions+=2;goto B47637b;
case 0x476381:c.instructions+=1;goto B476381;
case 0x476383:goto L476383;
case 0x476387:c.instructions+=6;goto B476387;
case 0x47638d:c.instructions+=5;goto B47638d;
case 0x47638e:c.instructions+=4;goto B47638e;
case 0x47638f:c.instructions+=3;goto B47638f;
case 0x476396:c.instructions+=2;goto B476396;
case 0x476399:c.instructions+=1;goto B476399;
case 0x4763a0:goto L4763a0;
case 0x4763a1:c.instructions+=6;goto B4763a1;
case 0x4763a5:c.instructions+=5;goto B4763a5;
case 0x4763a7:c.instructions+=4;goto B4763a7;
case 0x4763a8:c.instructions+=3;goto B4763a8;
case 0x4763aa:c.instructions+=2;goto B4763aa;
case 0x4763ac:c.instructions+=1;goto B4763ac;
case 0x4763af:goto L4763af;
case 0x4763b1:c.instructions+=3;goto B4763b1;
case 0x4763b7:c.instructions+=2;goto B4763b7;
case 0x4763ba:c.instructions+=1;goto B4763ba;
case 0x4763bc:goto L4763bc;
case 0x4763c1:c.instructions+=2;goto B4763c1;
case 0x4763c3:c.instructions+=1;goto B4763c3;
case 0x4763c8:goto L4763c8;
case 0x4763cb:c.instructions+=3;goto B4763cb;
case 0x4763cc:c.instructions+=2;goto B4763cc;
case 0x4763cd:c.instructions+=1;goto B4763cd;
case 0x4763d0:goto L4763d0;
case 0x4763d6:c.instructions+=3;goto B4763d6;
case 0x4763d7:c.instructions+=2;goto B4763d7;
case 0x4763d8:c.instructions+=1;goto B4763d8;
case 0x4763e0:goto L4763e0;
case 0x4763e4:c.instructions+=4;goto B4763e4;
case 0x4763e7:c.instructions+=3;goto B4763e7;
case 0x4763ea:c.instructions+=2;goto B4763ea;
case 0x4763eb:c.instructions+=1;goto B4763eb;
case 0x4763ed:goto L4763ed;
case 0x4763f0:c.instructions+=1;goto B4763f0;
case 0x4763f2:goto L4763f2;
case 0x4763f4:c.instructions+=2;goto B4763f4;
case 0x4763fa:c.instructions+=1;goto B4763fa;
case 0x4763fc:goto L4763fc;
case 0x476402:c.instructions+=1;goto B476402;
case 0x476404:goto L476404;
case 0x476407:c.instructions+=3;goto B476407;
case 0x47640e:c.instructions+=2;goto B47640e;
case 0x476411:c.instructions+=1;goto B476411;
case 0x476417:goto L476417;
case 0x476418:c.instructions+=4;goto B476418;
case 0x476419:c.instructions+=3;goto B476419;
case 0x47641b:c.instructions+=2;goto B47641b;
case 0x476420:c.instructions+=1;goto B476420;
case 0x476425:goto L476425;
case 0x476427:goto L476427;
case 0x47642d:c.instructions+=4;goto B47642d;
case 0x476433:c.instructions+=3;goto B476433;
case 0x476438:c.instructions+=2;goto B476438;
case 0x47643f:c.instructions+=1;goto B47643f;
case 0x476440:goto L476440;
case 0x476447:c.instructions+=2;goto B476447;
case 0x476448:c.instructions+=1;goto B476448;
case 0x47644d:goto L47644d;
case 0x476453:c.instructions+=4;goto B476453;
case 0x476454:c.instructions+=3;goto B476454;
case 0x476456:c.instructions+=2;goto B476456;
case 0x476458:c.instructions+=1;goto B476458;
case 0x47645d:goto L47645d;
case 0x476463:c.instructions+=3;goto B476463;
case 0x476466:c.instructions+=2;goto B476466;
case 0x476468:c.instructions+=1;goto B476468;
case 0x47646a:goto L47646a;
case 0x47646f:c.instructions+=5;goto B47646f;
case 0x476472:c.instructions+=4;goto B476472;
case 0x476477:c.instructions+=3;goto B476477;
case 0x476478:c.instructions+=2;goto B476478;
case 0x476479:c.instructions+=1;goto B476479;
case 0x47647e:goto L47647e;
case 0x476481:c.instructions+=1;goto B476481;
case 0x476483:goto L476483;
case 0x47648a:c.instructions+=8;goto B47648a;
case 0x47648b:c.instructions+=7;goto B47648b;
case 0x476490:c.instructions+=6;goto B476490;
case 0x476491:c.instructions+=5;goto B476491;
case 0x476493:c.instructions+=4;goto B476493;
case 0x476494:c.instructions+=3;goto B476494;
case 0x476495:c.instructions+=2;goto B476495;
case 0x47649c:c.instructions+=1;goto B47649c;
case 0x4764a1:goto L4764a1;
case 0x4764a4:c.instructions+=3;goto B4764a4;
case 0x4764a5:c.instructions+=2;goto B4764a5;
case 0x4764a8:c.instructions+=1;goto B4764a8;
case 0x4764aa:goto L4764aa;
case 0x4764ab:c.instructions+=1;goto B4764ab;
case 0x4764ac:goto L4764ac;
case 0x4764ad:c.instructions+=1;goto B4764ad;
case 0x4764b0:goto L4764b0;
case 0x4764b1:c.instructions+=2;goto B4764b1;
case 0x4764b3:c.instructions+=1;goto B4764b3;
case 0x4764b8:goto L4764b8;
case 0x4764ba:c.instructions+=10;goto B4764ba;
case 0x4764c0:c.instructions+=9;goto B4764c0;
case 0x4764c6:c.instructions+=8;goto B4764c6;
case 0x4764cc:c.instructions+=7;goto B4764cc;
case 0x4764d2:c.instructions+=6;goto B4764d2;
case 0x4764d8:c.instructions+=5;goto B4764d8;
case 0x4764dc:c.instructions+=4;goto B4764dc;
case 0x4764e2:c.instructions+=3;goto B4764e2;
case 0x4764e4:c.instructions+=2;goto B4764e4;
case 0x4764e5:c.instructions+=1;goto B4764e5;
case 0x4764f0:goto L4764f0;
case 0x4764f2:c.instructions+=14;goto B4764f2;
case 0x4764f7:c.instructions+=13;goto B4764f7;
case 0x4764fd:c.instructions+=12;goto B4764fd;
case 0x4764fe:c.instructions+=11;goto B4764fe;
case 0x476505:c.instructions+=10;goto B476505;
case 0x476508:c.instructions+=9;goto B476508;
case 0x476509:c.instructions+=8;goto B476509;
case 0x47650b:c.instructions+=7;goto B47650b;
case 0x47650c:c.instructions+=6;goto B47650c;
case 0x476510:c.instructions+=5;goto B476510;
case 0x476516:c.instructions+=4;goto B476516;
case 0x47651c:c.instructions+=3;goto B47651c;
case 0x47651e:c.instructions+=2;goto B47651e;
case 0x476526:c.instructions+=1;goto B476526;
case 0x476528:goto L476528;
case 0x47652a:c.instructions+=2;goto B47652a;
case 0x47652c:c.instructions+=1;goto B47652c;
case 0x47652e:goto L47652e;
case 0x476533:goto L476533;
case 0x476537:c.instructions+=2;goto B476537;
case 0x476538:c.instructions+=1;goto B476538;
case 0x47653d:goto L47653d;
case 0x476540:c.instructions+=1;goto B476540;
case 0x476545:goto L476545;
case 0x476549:c.instructions+=4;goto B476549;
case 0x47654b:c.instructions+=3;goto B47654b;
case 0x47654d:c.instructions+=2;goto B47654d;
case 0x47654e:c.instructions+=1;goto B47654e;
case 0x476551:goto L476551;
case 0x476556:goto L476556;
case 0x47655a:c.instructions+=7;goto B47655a;
case 0x476564:c.instructions+=6;goto B476564;
case 0x47656a:c.instructions+=5;goto B47656a;
case 0x47656b:c.instructions+=4;goto B47656b;
case 0x47656c:c.instructions+=3;goto B47656c;
case 0x476573:c.instructions+=2;goto B476573;
case 0x476576:c.instructions+=1;goto B476576;
case 0x476580:goto L476580;
case 0x476581:c.instructions+=5;goto B476581;
case 0x476583:c.instructions+=4;goto B476583;
case 0x476586:c.instructions+=3;goto B476586;
case 0x476589:c.instructions+=2;goto B476589;
case 0x47658b:c.instructions+=1;goto B47658b;
case 0x47658d:goto L47658d;
case 0x476590:c.instructions+=2;goto B476590;
case 0x476594:c.instructions+=1;goto B476594;
case 0x476596:goto L476596;
case 0x476599:c.instructions+=3;goto B476599;
case 0x47659b:c.instructions+=2;goto B47659b;
case 0x47659e:c.instructions+=1;goto B47659e;
case 0x4765a0:goto L4765a0;
case 0x4765a3:c.instructions+=1;goto B4765a3;
case 0x4765a5:goto L4765a5;
case 0x4765a7:c.instructions+=1;goto B4765a7;
case 0x4765ac:goto L4765ac;
case 0x4765af:c.instructions+=6;goto B4765af;
case 0x4765b1:c.instructions+=5;goto B4765b1;
case 0x4765b3:c.instructions+=4;goto B4765b3;
case 0x4765b5:c.instructions+=3;goto B4765b5;
case 0x4765b7:c.instructions+=2;goto B4765b7;
case 0x4765bd:c.instructions+=1;goto B4765bd;
case 0x4765c2:goto L4765c2;
case 0x4765c5:c.instructions+=4;goto B4765c5;
case 0x4765c7:c.instructions+=3;goto B4765c7;
case 0x4765cd:c.instructions+=2;goto B4765cd;
case 0x4765ce:c.instructions+=1;goto B4765ce;
case 0x4765cf:goto L4765cf;
case 0x4765d6:goto L4765d6;
case 0x4765d8:c.instructions+=1;goto B4765d8;
case 0x4765dd:goto L4765dd;
case 0x4765df:c.instructions+=4;goto B4765df;
case 0x4765e2:c.instructions+=3;goto B4765e2;
case 0x4765e8:c.instructions+=2;goto B4765e8;
case 0x4765e9:c.instructions+=1;goto B4765e9;
case 0x4765f0:goto L4765f0;
case 0x4765f1:c.instructions+=3;goto B4765f1;
case 0x4765f3:c.instructions+=2;goto B4765f3;
case 0x4765f5:c.instructions+=1;goto B4765f5;
case 0x4765fa:goto L4765fa;
case 0x4765fc:c.instructions+=6;goto B4765fc;
case 0x476602:c.instructions+=5;goto B476602;
case 0x476605:c.instructions+=4;goto B476605;
case 0x476608:c.instructions+=3;goto B476608;
case 0x47660b:c.instructions+=2;goto B47660b;
case 0x47660d:c.instructions+=1;goto B47660d;
case 0x47660f:goto L47660f;
case 0x476612:c.instructions+=2;goto B476612;
case 0x476616:c.instructions+=1;goto B476616;
case 0x476618:goto L476618;
case 0x47661d:c.instructions+=8;goto B47661d;
case 0x47661e:c.instructions+=7;goto B47661e;
case 0x47661f:c.instructions+=6;goto B47661f;
case 0x476624:c.instructions+=5;goto B476624;
case 0x476626:c.instructions+=4;goto B476626;
case 0x476628:c.instructions+=3;goto B476628;
case 0x47662e:c.instructions+=2;goto B47662e;
case 0x476631:c.instructions+=1;goto B476631;
case 0x476637:goto L476637;
case 0x476638:c.instructions+=1;goto B476638;
case 0x476640:goto L476640;
case 0x476641:c.instructions+=6;goto B476641;
case 0x476645:c.instructions+=5;goto B476645;
case 0x476647:c.instructions+=4;goto B476647;
case 0x476648:c.instructions+=3;goto B476648;
case 0x47664a:c.instructions+=2;goto B47664a;
case 0x47664c:c.instructions+=1;goto B47664c;
case 0x47664f:goto L47664f;
case 0x476651:c.instructions+=3;goto B476651;
case 0x476657:c.instructions+=2;goto B476657;
case 0x47665d:c.instructions+=1;goto B47665d;
case 0x47665f:goto L47665f;
case 0x476664:c.instructions+=2;goto B476664;
case 0x476666:c.instructions+=1;goto B476666;
case 0x47666b:goto L47666b;
case 0x47666e:c.instructions+=3;goto B47666e;
case 0x47666f:c.instructions+=2;goto B47666f;
case 0x476670:c.instructions+=1;goto B476670;
case 0x476673:goto L476673;
case 0x476679:c.instructions+=3;goto B476679;
case 0x47667a:c.instructions+=2;goto B47667a;
case 0x47667b:c.instructions+=1;goto B47667b;
case 0x476680:goto L476680;
case 0x476681:c.instructions+=6;goto B476681;
case 0x476685:c.instructions+=5;goto B476685;
case 0x476687:c.instructions+=4;goto B476687;
case 0x476688:c.instructions+=3;goto B476688;
case 0x47668a:c.instructions+=2;goto B47668a;
case 0x47668c:c.instructions+=1;goto B47668c;
case 0x47668f:goto L47668f;
case 0x476695:c.instructions+=1;goto B476695;
case 0x476697:goto L476697;
case 0x47669c:c.instructions+=2;goto B47669c;
case 0x47669e:c.instructions+=1;goto B47669e;
case 0x4766a3:goto L4766a3;
case 0x4766a6:c.instructions+=3;goto B4766a6;
case 0x4766a7:c.instructions+=2;goto B4766a7;
case 0x4766a8:c.instructions+=1;goto B4766a8;
case 0x4766ab:goto L4766ab;
case 0x4766b1:c.instructions+=3;goto B4766b1;
case 0x4766b2:c.instructions+=2;goto B4766b2;
case 0x4766b3:c.instructions+=1;goto B4766b3;
case 0x4766c0:goto L4766c0;
case 0x4766c1:c.instructions+=2;goto B4766c1;
case 0x4766c3:c.instructions+=1;goto B4766c3;
case 0x4766c8:goto L4766c8;
case 0x4766ca:c.instructions+=11;goto B4766ca;
case 0x4766d0:c.instructions+=10;goto B4766d0;
case 0x4766d6:c.instructions+=9;goto B4766d6;
case 0x4766dc:c.instructions+=8;goto B4766dc;
case 0x4766e2:c.instructions+=7;goto B4766e2;
case 0x4766e8:c.instructions+=6;goto B4766e8;
case 0x4766ee:c.instructions+=5;goto B4766ee;
case 0x4766f2:c.instructions+=4;goto B4766f2;
case 0x4766f8:c.instructions+=3;goto B4766f8;
case 0x4766fa:c.instructions+=2;goto B4766fa;
case 0x4766fb:c.instructions+=1;goto B4766fb;
case 0x476700:goto L476700;
case 0x476702:c.instructions+=14;goto B476702;
case 0x476707:c.instructions+=13;goto B476707;
case 0x47670d:c.instructions+=12;goto B47670d;
case 0x47670e:c.instructions+=11;goto B47670e;
case 0x476715:c.instructions+=10;goto B476715;
case 0x476718:c.instructions+=9;goto B476718;
case 0x476719:c.instructions+=8;goto B476719;
case 0x47671b:c.instructions+=7;goto B47671b;
case 0x47671c:c.instructions+=6;goto B47671c;
case 0x476720:c.instructions+=5;goto B476720;
case 0x476726:c.instructions+=4;goto B476726;
case 0x47672c:c.instructions+=3;goto B47672c;
case 0x47672e:c.instructions+=2;goto B47672e;
case 0x476736:c.instructions+=1;goto B476736;
case 0x476738:goto L476738;
case 0x47673a:c.instructions+=2;goto B47673a;
case 0x47673c:c.instructions+=1;goto B47673c;
case 0x47673e:goto L47673e;
case 0x476743:goto L476743;
case 0x476747:c.instructions+=2;goto B476747;
case 0x476748:c.instructions+=1;goto B476748;
case 0x47674d:goto L47674d;
case 0x476750:c.instructions+=1;goto B476750;
case 0x476755:goto L476755;
case 0x476759:c.instructions+=4;goto B476759;
case 0x47675b:c.instructions+=3;goto B47675b;
case 0x47675d:c.instructions+=2;goto B47675d;
case 0x47675e:c.instructions+=1;goto B47675e;
case 0x476761:goto L476761;
case 0x476766:goto L476766;
case 0x47676a:c.instructions+=7;goto B47676a;
case 0x476774:c.instructions+=6;goto B476774;
case 0x47677a:c.instructions+=5;goto B47677a;
case 0x47677b:c.instructions+=4;goto B47677b;
case 0x47677c:c.instructions+=3;goto B47677c;
case 0x476783:c.instructions+=2;goto B476783;
case 0x476786:c.instructions+=1;goto B476786;
case 0x476790:goto L476790;
case 0x476791:c.instructions+=9;goto B476791;
case 0x476792:c.instructions+=8;goto B476792;
case 0x476793:c.instructions+=7;goto B476793;
case 0x476799:c.instructions+=6;goto B476799;
case 0x47679a:c.instructions+=5;goto B47679a;
case 0x47679e:c.instructions+=4;goto B47679e;
case 0x47679f:c.instructions+=3;goto B47679f;
case 0x4767a4:c.instructions+=2;goto B4767a4;
case 0x4767a6:c.instructions+=1;goto B4767a6;
case 0x4767ab:goto L4767ab;
case 0x4767ad:c.instructions+=1;goto B4767ad;
case 0x4767b3:goto L4767b3;
case 0x4767b6:c.instructions+=7;goto B4767b6;
case 0x4767b8:c.instructions+=6;goto B4767b8;
case 0x4767bc:c.instructions+=5;goto B4767bc;
case 0x4767be:c.instructions+=4;goto B4767be;
case 0x4767c1:c.instructions+=3;goto B4767c1;
case 0x4767c7:c.instructions+=2;goto B4767c7;
case 0x4767c9:c.instructions+=1;goto B4767c9;
case 0x4767cb:goto L4767cb;
case 0x4767cf:c.instructions+=3;goto B4767cf;
case 0x4767d2:c.instructions+=2;goto B4767d2;
case 0x4767d5:c.instructions+=1;goto B4767d5;
case 0x4767d7:goto L4767d7;
case 0x4767da:c.instructions+=1;goto B4767da;
case 0x4767dc:goto L4767dc;
case 0x4767de:c.instructions+=4;goto B4767de;
case 0x4767e1:c.instructions+=3;goto B4767e1;
case 0x4767e7:c.instructions+=2;goto B4767e7;
case 0x4767ea:c.instructions+=1;goto B4767ea;
case 0x4767ec:goto L4767ec;
case 0x4767ef:c.instructions+=4;goto B4767ef;
case 0x4767f1:c.instructions+=3;goto B4767f1;
case 0x4767f7:c.instructions+=2;goto B4767f7;
case 0x4767f9:c.instructions+=1;goto B4767f9;
case 0x4767fb:goto L4767fb;
case 0x4767fd:c.instructions+=1;goto B4767fd;
case 0x4767ff:goto L4767ff;
case 0x476801:goto L476801;
case 0x476803:c.instructions+=1;goto B476803;
case 0x476805:goto L476805;
case 0x476807:c.instructions+=1;goto B476807;
case 0x476809:goto L476809;
case 0x47680b:goto L47680b;
case 0x47680d:c.instructions+=4;goto B47680d;
case 0x476810:c.instructions+=3;goto B476810;
case 0x476816:c.instructions+=2;goto B476816;
case 0x476818:c.instructions+=1;goto B476818;
case 0x47681a:goto L47681a;
case 0x47681d:c.instructions+=2;goto B47681d;
case 0x47681f:c.instructions+=1;goto B47681f;
case 0x476821:goto L476821;
case 0x476823:c.instructions+=1;goto B476823;
case 0x476825:goto L476825;
case 0x476828:c.instructions+=2;goto B476828;
case 0x47682a:c.instructions+=1;goto B47682a;
case 0x47682c:goto L47682c;
case 0x47682e:goto L47682e;
case 0x476830:goto L476830;
case 0x476833:c.instructions+=2;goto B476833;
case 0x476835:c.instructions+=1;goto B476835;
case 0x47683b:goto L47683b;
case 0x47683d:c.instructions+=1;goto B47683d;
case 0x47683f:goto L47683f;
case 0x476842:c.instructions+=2;goto B476842;
case 0x476844:c.instructions+=1;goto B476844;
case 0x476846:goto L476846;
case 0x476848:c.instructions+=1;goto B476848;
case 0x47684a:goto L47684a;
case 0x47684c:c.instructions+=1;goto B47684c;
case 0x47684e:goto L47684e;
case 0x476851:goto L476851;
case 0x476855:c.instructions+=15;goto B476855;
case 0x476858:c.instructions+=14;goto B476858;
case 0x47685c:c.instructions+=13;goto B47685c;
case 0x476860:c.instructions+=12;goto B476860;
case 0x476863:c.instructions+=11;goto B476863;
case 0x476865:c.instructions+=10;goto B476865;
case 0x476868:c.instructions+=9;goto B476868;
case 0x476869:c.instructions+=8;goto B476869;
case 0x47686b:c.instructions+=7;goto B47686b;
case 0x47686c:c.instructions+=6;goto B47686c;
case 0x47686f:c.instructions+=5;goto B47686f;
case 0x476870:c.instructions+=4;goto B476870;
case 0x476873:c.instructions+=3;goto B476873;
case 0x476874:c.instructions+=2;goto B476874;
case 0x476875:c.instructions+=1;goto B476875;
case 0x476878:goto L476878;
case 0x476879:c.instructions+=6;goto B476879;
case 0x47687a:c.instructions+=5;goto B47687a;
case 0x47687b:c.instructions+=4;goto B47687b;
case 0x47687d:c.instructions+=3;goto B47687d;
case 0x47687e:c.instructions+=2;goto B47687e;
case 0x47687f:c.instructions+=1;goto B47687f;
case 0x476890:goto L476890;
case 0x476891:c.instructions+=9;goto B476891;
case 0x476892:c.instructions+=8;goto B476892;
case 0x476893:c.instructions+=7;goto B476893;
case 0x476899:c.instructions+=6;goto B476899;
case 0x47689a:c.instructions+=5;goto B47689a;
case 0x47689e:c.instructions+=4;goto B47689e;
case 0x47689f:c.instructions+=3;goto B47689f;
case 0x4768a4:c.instructions+=2;goto B4768a4;
case 0x4768a6:c.instructions+=1;goto B4768a6;
case 0x4768ab:goto L4768ab;
case 0x4768ad:c.instructions+=1;goto B4768ad;
case 0x4768b3:goto L4768b3;
case 0x4768b6:c.instructions+=7;goto B4768b6;
case 0x4768b8:c.instructions+=6;goto B4768b8;
case 0x4768bc:c.instructions+=5;goto B4768bc;
case 0x4768be:c.instructions+=4;goto B4768be;
case 0x4768c1:c.instructions+=3;goto B4768c1;
case 0x4768c7:c.instructions+=2;goto B4768c7;
case 0x4768c9:c.instructions+=1;goto B4768c9;
case 0x4768cb:goto L4768cb;
case 0x4768cf:c.instructions+=3;goto B4768cf;
case 0x4768d2:c.instructions+=2;goto B4768d2;
case 0x4768d5:c.instructions+=1;goto B4768d5;
case 0x4768d7:goto L4768d7;
case 0x4768da:c.instructions+=1;goto B4768da;
case 0x4768dc:goto L4768dc;
case 0x4768de:c.instructions+=4;goto B4768de;
case 0x4768e1:c.instructions+=3;goto B4768e1;
case 0x4768e7:c.instructions+=2;goto B4768e7;
case 0x4768ea:c.instructions+=1;goto B4768ea;
case 0x4768ec:goto L4768ec;
case 0x4768ef:c.instructions+=4;goto B4768ef;
case 0x4768f1:c.instructions+=3;goto B4768f1;
case 0x4768f7:c.instructions+=2;goto B4768f7;
case 0x4768f9:c.instructions+=1;goto B4768f9;
case 0x4768fb:goto L4768fb;
case 0x4768fd:c.instructions+=1;goto B4768fd;
case 0x4768ff:goto L4768ff;
case 0x476901:goto L476901;
case 0x476903:c.instructions+=1;goto B476903;
case 0x476905:goto L476905;
case 0x476907:c.instructions+=1;goto B476907;
case 0x476909:goto L476909;
case 0x47690b:goto L47690b;
case 0x47690d:c.instructions+=4;goto B47690d;
case 0x476910:c.instructions+=3;goto B476910;
case 0x476916:c.instructions+=2;goto B476916;
case 0x476918:c.instructions+=1;goto B476918;
case 0x47691a:goto L47691a;
case 0x47691d:c.instructions+=2;goto B47691d;
case 0x47691f:c.instructions+=1;goto B47691f;
case 0x476921:goto L476921;
case 0x476923:c.instructions+=1;goto B476923;
case 0x476925:goto L476925;
case 0x476928:c.instructions+=2;goto B476928;
case 0x47692a:c.instructions+=1;goto B47692a;
case 0x47692c:goto L47692c;
case 0x47692e:goto L47692e;
case 0x476930:goto L476930;
case 0x476933:c.instructions+=2;goto B476933;
case 0x476935:c.instructions+=1;goto B476935;
case 0x47693b:goto L47693b;
case 0x47693d:c.instructions+=1;goto B47693d;
case 0x47693f:goto L47693f;
case 0x476942:c.instructions+=2;goto B476942;
case 0x476944:c.instructions+=1;goto B476944;
case 0x476946:goto L476946;
case 0x476948:c.instructions+=1;goto B476948;
case 0x47694a:goto L47694a;
case 0x47694c:c.instructions+=1;goto B47694c;
case 0x47694e:goto L47694e;
case 0x476951:goto L476951;
case 0x476955:c.instructions+=15;goto B476955;
case 0x476958:c.instructions+=14;goto B476958;
case 0x47695c:c.instructions+=13;goto B47695c;
case 0x476960:c.instructions+=12;goto B476960;
case 0x476963:c.instructions+=11;goto B476963;
case 0x476965:c.instructions+=10;goto B476965;
case 0x476968:c.instructions+=9;goto B476968;
case 0x476969:c.instructions+=8;goto B476969;
case 0x47696b:c.instructions+=7;goto B47696b;
case 0x47696c:c.instructions+=6;goto B47696c;
case 0x47696f:c.instructions+=5;goto B47696f;
case 0x476970:c.instructions+=4;goto B476970;
case 0x476973:c.instructions+=3;goto B476973;
case 0x476974:c.instructions+=2;goto B476974;
case 0x476975:c.instructions+=1;goto B476975;
case 0x476978:goto L476978;
case 0x476979:c.instructions+=6;goto B476979;
case 0x47697a:c.instructions+=5;goto B47697a;
case 0x47697b:c.instructions+=4;goto B47697b;
case 0x47697d:c.instructions+=3;goto B47697d;
case 0x47697e:c.instructions+=2;goto B47697e;
case 0x47697f:c.instructions+=1;goto B47697f;
case 0x476990:goto L476990;
case 0x476991:c.instructions+=5;goto B476991;
case 0x476992:c.instructions+=4;goto B476992;
case 0x476994:c.instructions+=3;goto B476994;
case 0x476997:c.instructions+=2;goto B476997;
case 0x47699a:c.instructions+=1;goto B47699a;
case 0x47699c:goto L47699c;
case 0x47699e:c.instructions+=3;goto B47699e;
case 0x47699f:c.instructions+=2;goto B47699f;
case 0x4769a0:c.instructions+=1;goto B4769a0;
case 0x4769a3:goto L4769a3;
case 0x4769a4:c.instructions+=6;goto B4769a4;
case 0x4769a5:c.instructions+=5;goto B4769a5;
case 0x4769a6:c.instructions+=4;goto B4769a6;
case 0x4769ac:c.instructions+=3;goto B4769ac;
case 0x4769b1:c.instructions+=2;goto B4769b1;
case 0x4769b3:c.instructions+=1;goto B4769b3;
case 0x4769b8:goto L4769b8;
case 0x4769ba:c.instructions+=2;goto B4769ba;
case 0x4769be:c.instructions+=1;goto B4769be;
case 0x4769c0:goto L4769c0;
case 0x4769c3:c.instructions+=1;goto B4769c3;
case 0x4769c7:goto L4769c7;
case 0x4769ca:c.instructions+=3;goto B4769ca;
case 0x4769ce:c.instructions+=2;goto B4769ce;
case 0x4769d0:c.instructions+=1;goto B4769d0;
case 0x4769d2:goto L4769d2;
case 0x4769d4:c.instructions+=1;goto B4769d4;
case 0x4769d6:goto L4769d6;
case 0x4769d8:goto L4769d8;
case 0x4769da:c.instructions+=3;goto B4769da;
case 0x4769e0:c.instructions+=2;goto B4769e0;
case 0x4769e2:c.instructions+=1;goto B4769e2;
case 0x4769e4:goto L4769e4;
case 0x4769e6:c.instructions+=3;goto B4769e6;
case 0x4769ec:c.instructions+=2;goto B4769ec;
case 0x4769ee:c.instructions+=1;goto B4769ee;
case 0x4769f0:goto L4769f0;
case 0x4769f3:c.instructions+=2;goto B4769f3;
case 0x4769f5:c.instructions+=1;goto B4769f5;
case 0x4769f7:goto L4769f7;
case 0x4769f9:c.instructions+=1;goto B4769f9;
case 0x4769fb:goto L4769fb;
case 0x4769fe:c.instructions+=2;goto B4769fe;
case 0x476a00:c.instructions+=1;goto B476a00;
case 0x476a02:goto L476a02;
case 0x476a04:goto L476a04;
case 0x476a06:goto L476a06;
case 0x476a08:c.instructions+=2;goto B476a08;
case 0x476a0c:c.instructions+=1;goto B476a0c;
case 0x476a0e:goto L476a0e;
case 0x476a10:c.instructions+=1;goto B476a10;
case 0x476a12:goto L476a12;
case 0x476a13:c.instructions+=6;goto B476a13;
case 0x476a14:c.instructions+=5;goto B476a14;
case 0x476a15:c.instructions+=4;goto B476a15;
case 0x476a17:c.instructions+=3;goto B476a17;
case 0x476a18:c.instructions+=2;goto B476a18;
case 0x476a19:c.instructions+=1;goto B476a19;
case 0x476a1c:goto L476a1c;
case 0x476a1f:c.instructions+=2;goto B476a1f;
case 0x476a21:c.instructions+=1;goto B476a21;
case 0x476a23:goto L476a23;
case 0x476a25:c.instructions+=1;goto B476a25;
case 0x476a27:goto L476a27;
case 0x476a29:c.instructions+=1;goto B476a29;
case 0x476a2b:goto L476a2b;
case 0x476a2e:goto L476a2e;
case 0x476a31:c.instructions+=8;goto B476a31;
case 0x476a34:c.instructions+=7;goto B476a34;
case 0x476a37:c.instructions+=6;goto B476a37;
case 0x476a3a:c.instructions+=5;goto B476a3a;
case 0x476a3d:c.instructions+=4;goto B476a3d;
case 0x476a40:c.instructions+=3;goto B476a40;
case 0x476a43:c.instructions+=2;goto B476a43;
case 0x476a45:c.instructions+=1;goto B476a45;
case 0x476a47:goto L476a47;
case 0x476a4a:c.instructions+=9;goto B476a4a;
case 0x476a4b:c.instructions+=8;goto B476a4b;
case 0x476a4c:c.instructions+=7;goto B476a4c;
case 0x476a4d:c.instructions+=6;goto B476a4d;
case 0x476a4e:c.instructions+=5;goto B476a4e;
case 0x476a51:c.instructions+=4;goto B476a51;
case 0x476a54:c.instructions+=3;goto B476a54;
case 0x476a55:c.instructions+=2;goto B476a55;
case 0x476a56:c.instructions+=1;goto B476a56;
case 0x476a59:goto L476a59;
case 0x476a5c:c.instructions+=2;goto B476a5c;
case 0x476a5e:c.instructions+=1;goto B476a5e;
case 0x476a60:goto L476a60;
case 0x476a63:c.instructions+=3;goto B476a63;
case 0x476a66:c.instructions+=2;goto B476a66;
case 0x476a68:c.instructions+=1;goto B476a68;
case 0x476a6a:goto L476a6a;
case 0x476a6d:c.instructions+=10;goto B476a6d;
case 0x476a70:c.instructions+=9;goto B476a70;
case 0x476a73:c.instructions+=8;goto B476a73;
case 0x476a74:c.instructions+=7;goto B476a74;
case 0x476a75:c.instructions+=6;goto B476a75;
case 0x476a76:c.instructions+=5;goto B476a76;
case 0x476a77:c.instructions+=4;goto B476a77;
case 0x476a7a:c.instructions+=3;goto B476a7a;
case 0x476a7b:c.instructions+=2;goto B476a7b;
case 0x476a7c:c.instructions+=1;goto B476a7c;
case 0x476a80:goto L476a80;
case 0x476a85:c.instructions+=6;goto B476a85;
case 0x476a86:c.instructions+=5;goto B476a86;
case 0x476a88:c.instructions+=4;goto B476a88;
case 0x476a8a:c.instructions+=3;goto B476a8a;
case 0x476a8b:c.instructions+=2;goto B476a8b;
case 0x476a8d:c.instructions+=1;goto B476a8d;
case 0x476a8f:goto L476a8f;
case 0x476a90:c.instructions+=1;goto B476a90;
case 0x476a91:goto L476a91;
case 0x476a92:c.instructions+=2;goto B476a92;
case 0x476a97:c.instructions+=1;goto B476a97;
case 0x476a9c:goto L476a9c;
case 0x476a9e:c.instructions+=2;goto B476a9e;
case 0x476aa2:c.instructions+=1;goto B476aa2;
case 0x476aa4:goto L476aa4;
case 0x476aaa:c.instructions+=2;goto B476aaa;
case 0x476aac:c.instructions+=1;goto B476aac;
case 0x476aae:goto L476aae;
case 0x476ab3:c.instructions+=3;goto B476ab3;
case 0x476ab5:c.instructions+=2;goto B476ab5;
case 0x476ab7:c.instructions+=1;goto B476ab7;
case 0x476abc:goto L476abc;
case 0x476abe:c.instructions+=4;goto B476abe;
case 0x476ac0:c.instructions+=3;goto B476ac0;
case 0x476ac1:c.instructions+=2;goto B476ac1;
case 0x476ac3:c.instructions+=1;goto B476ac3;
case 0x476ac6:goto L476ac6;
case 0x476ac8:c.instructions+=3;goto B476ac8;
case 0x476acd:c.instructions+=2;goto B476acd;
case 0x476acf:c.instructions+=1;goto B476acf;
case 0x476ad2:goto L476ad2;
case 0x476ad7:c.instructions+=3;goto B476ad7;
case 0x476ad8:c.instructions+=2;goto B476ad8;
case 0x476ada:c.instructions+=1;goto B476ada;
case 0x476adc:goto L476adc;
case 0x476add:c.instructions+=1;goto B476add;
case 0x476ade:goto L476ade;
case 0x476adf:c.instructions+=2;goto B476adf;
case 0x476ae0:c.instructions+=1;goto B476ae0;
case 0x476af0:goto L476af0;
case 0x476af5:c.instructions+=8;goto B476af5;
case 0x476af6:c.instructions+=7;goto B476af6;
case 0x476af7:c.instructions+=6;goto B476af7;
case 0x476af8:c.instructions+=5;goto B476af8;
case 0x476afa:c.instructions+=4;goto B476afa;
case 0x476afc:c.instructions+=3;goto B476afc;
case 0x476afe:c.instructions+=2;goto B476afe;
case 0x476b00:c.instructions+=1;goto B476b00;
case 0x476b02:goto L476b02;
case 0x476b03:c.instructions+=2;goto B476b03;
case 0x476b08:c.instructions+=1;goto B476b08;
case 0x476b0d:goto L476b0d;
case 0x476b11:c.instructions+=1;goto B476b11;
case 0x476b13:goto L476b13;
case 0x476b14:goto L476b14;
case 0x476b19:c.instructions+=3;goto B476b19;
case 0x476b1a:c.instructions+=2;goto B476b1a;
case 0x476b1c:c.instructions+=1;goto B476b1c;
case 0x476b1e:goto L476b1e;
case 0x476b21:c.instructions+=1;goto B476b21;
case 0x476b23:goto L476b23;
case 0x476b28:goto L476b28;
case 0x476b2a:c.instructions+=1;goto B476b2a;
case 0x476b2c:goto L476b2c;
case 0x476b2e:c.instructions+=1;goto B476b2e;
case 0x476b30:goto L476b30;
case 0x476b32:c.instructions+=3;goto B476b32;
case 0x476b34:c.instructions+=2;goto B476b34;
case 0x476b36:c.instructions+=1;goto B476b36;
case 0x476b3b:goto L476b3b;
case 0x476b3d:c.instructions+=3;goto B476b3d;
case 0x476b3f:c.instructions+=2;goto B476b3f;
case 0x476b41:c.instructions+=1;goto B476b41;
case 0x476b44:goto L476b44;
case 0x476b45:c.instructions+=1;goto B476b45;
case 0x476b47:goto L476b47;
case 0x476b48:c.instructions+=3;goto B476b48;
case 0x476b49:c.instructions+=2;goto B476b49;
case 0x476b4a:c.instructions+=1;goto B476b4a;
case 0x476b50:goto L476b50;
case 0x476b55:c.instructions+=7;goto B476b55;
case 0x476b56:c.instructions+=6;goto B476b56;
case 0x476b57:c.instructions+=5;goto B476b57;
case 0x476b59:c.instructions+=4;goto B476b59;
case 0x476b5b:c.instructions+=3;goto B476b5b;
case 0x476b5c:c.instructions+=2;goto B476b5c;
case 0x476b5e:c.instructions+=1;goto B476b5e;
case 0x476b60:goto L476b60;
case 0x476b61:c.instructions+=2;goto B476b61;
case 0x476b66:c.instructions+=1;goto B476b66;
case 0x476b6b:goto L476b6b;
case 0x476b6d:c.instructions+=2;goto B476b6d;
case 0x476b71:c.instructions+=1;goto B476b71;
case 0x476b73:goto L476b73;
case 0x476b79:c.instructions+=2;goto B476b79;
case 0x476b7b:c.instructions+=1;goto B476b7b;
case 0x476b7d:goto L476b7d;
case 0x476b82:c.instructions+=3;goto B476b82;
case 0x476b84:c.instructions+=2;goto B476b84;
case 0x476b86:c.instructions+=1;goto B476b86;
case 0x476b8b:goto L476b8b;
case 0x476b8d:c.instructions+=3;goto B476b8d;
case 0x476b8e:c.instructions+=2;goto B476b8e;
case 0x476b90:c.instructions+=1;goto B476b90;
case 0x476b93:goto L476b93;
case 0x476b98:c.instructions+=3;goto B476b98;
case 0x476b99:c.instructions+=2;goto B476b99;
case 0x476b9b:c.instructions+=1;goto B476b9b;
case 0x476b9d:goto L476b9d;
case 0x476b9f:c.instructions+=1;goto B476b9f;
case 0x476ba4:goto L476ba4;
case 0x476ba7:c.instructions+=2;goto B476ba7;
case 0x476ba9:c.instructions+=1;goto B476ba9;
case 0x476bab:goto L476bab;
case 0x476bb0:goto L476bb0;
case 0x476bb2:c.instructions+=3;goto B476bb2;
case 0x476bb7:c.instructions+=2;goto B476bb7;
case 0x476bb9:c.instructions+=1;goto B476bb9;
case 0x476bbc:goto L476bbc;
case 0x476bbf:c.instructions+=2;goto B476bbf;
case 0x476bc1:c.instructions+=1;goto B476bc1;
case 0x476bc3:goto L476bc3;
case 0x476bc4:c.instructions+=3;goto B476bc4;
case 0x476bc5:c.instructions+=2;goto B476bc5;
case 0x476bc6:c.instructions+=1;goto B476bc6;
case 0x476bd0:goto L476bd0;
case 0x476bd1:c.instructions+=7;goto B476bd1;
case 0x476bd4:c.instructions+=6;goto B476bd4;
case 0x476bd5:c.instructions+=5;goto B476bd5;
case 0x476bd9:c.instructions+=4;goto B476bd9;
case 0x476bda:c.instructions+=3;goto B476bda;
case 0x476bdc:c.instructions+=2;goto B476bdc;
case 0x476bde:c.instructions+=1;goto B476bde;
case 0x476be0:goto L476be0;
case 0x476be2:c.instructions+=3;goto B476be2;
case 0x476be3:c.instructions+=2;goto B476be3;
case 0x476be5:c.instructions+=1;goto B476be5;
case 0x476be8:goto L476be8;
case 0x476beb:c.instructions+=2;goto B476beb;
case 0x476bed:c.instructions+=1;goto B476bed;
case 0x476bef:goto L476bef;
case 0x476bf5:c.instructions+=3;goto B476bf5;
case 0x476bfb:c.instructions+=2;goto B476bfb;
case 0x476bff:c.instructions+=1;goto B476bff;
case 0x476c05:goto L476c05;
case 0x476c07:c.instructions+=2;goto B476c07;
case 0x476c0b:c.instructions+=1;goto B476c0b;
case 0x476c0d:goto L476c0d;
case 0x476c10:c.instructions+=2;goto B476c10;
case 0x476c12:c.instructions+=1;goto B476c12;
case 0x476c14:goto L476c14;
case 0x476c17:c.instructions+=1;goto B476c17;
case 0x476c19:goto L476c19;
case 0x476c1c:c.instructions+=2;goto B476c1c;
case 0x476c1e:c.instructions+=1;goto B476c1e;
case 0x476c20:goto L476c20;
case 0x476c22:goto L476c22;
case 0x476c24:c.instructions+=1;goto B476c24;
case 0x476c26:goto L476c26;
case 0x476c2c:c.instructions+=2;goto B476c2c;
case 0x476c2d:c.instructions+=1;goto B476c2d;
case 0x476c32:goto L476c32;
case 0x476c35:c.instructions+=1;goto B476c35;
case 0x476c39:goto L476c39;
case 0x476c3f:c.instructions+=3;goto B476c3f;
case 0x476c41:c.instructions+=2;goto B476c41;
case 0x476c43:c.instructions+=1;goto B476c43;
case 0x476c45:goto L476c45;
case 0x476c4a:goto L476c4a;
case 0x476c50:c.instructions+=1;goto B476c50;
case 0x476c52:goto L476c52;
case 0x476c53:goto L476c53;
case 0x476c59:c.instructions+=1;goto B476c59;
case 0x476c5b:goto L476c5b;
case 0x476c5c:goto L476c5c;
case 0x476c62:c.instructions+=1;goto B476c62;
case 0x476c64:goto L476c64;
case 0x476c65:goto L476c65;
case 0x476c6b:c.instructions+=1;goto B476c6b;
case 0x476c6d:goto L476c6d;
case 0x476c6e:goto L476c6e;
case 0x476c74:c.instructions+=1;goto B476c74;
case 0x476c76:goto L476c76;
case 0x476c77:goto L476c77;
case 0x476c7a:c.instructions+=1;goto B476c7a;
case 0x476c80:goto L476c80;
case 0x476c85:c.instructions+=1;goto B476c85;
case 0x476c87:goto L476c87;
case 0x476c8b:c.instructions+=2;goto B476c8b;
case 0x476c8d:c.instructions+=1;goto B476c8d;
case 0x476c8f:goto L476c8f;
case 0x476c90:c.instructions+=1;goto B476c90;
case 0x476c92:goto L476c92;
case 0x476c93:c.instructions+=1;goto B476c93;
case 0x476c95:goto L476c95;
case 0x476c97:c.instructions+=1;goto B476c97;
case 0x476c99:goto L476c99;
case 0x476c9b:c.instructions+=1;goto B476c9b;
case 0x476ca0:goto L476ca0;
case 0x476ca7:c.instructions+=1;goto B476ca7;
case 0x476ca9:goto L476ca9;
case 0x476cab:c.instructions+=1;goto B476cab;
case 0x476cb0:goto L476cb0;
case 0x476cb7:c.instructions+=1;goto B476cb7;
case 0x476cb9:goto L476cb9;
case 0x476cbb:c.instructions+=1;goto B476cbb;
case 0x476cc0:goto L476cc0;
case 0x476cc7:goto L476cc7;
case 0x476cca:goto L476cca;
case 0x476cd0:c.instructions+=45;goto B476cd0;
case 0x476cd3:c.instructions+=44;goto B476cd3;
case 0x476cd8:c.instructions+=43;goto B476cd8;
case 0x476cda:c.instructions+=42;goto B476cda;
case 0x476ce1:c.instructions+=41;goto B476ce1;
case 0x476ce3:c.instructions+=40;goto B476ce3;
case 0x476ce6:c.instructions+=39;goto B476ce6;
case 0x476ceb:c.instructions+=38;goto B476ceb;
case 0x476cf1:c.instructions+=37;goto B476cf1;
case 0x476cf3:c.instructions+=36;goto B476cf3;
case 0x476cf6:c.instructions+=35;goto B476cf6;
case 0x476cfc:c.instructions+=34;goto B476cfc;
case 0x476cfe:c.instructions+=33;goto B476cfe;
case 0x476d01:c.instructions+=32;goto B476d01;
case 0x476d04:c.instructions+=31;goto B476d04;
case 0x476d0a:c.instructions+=30;goto B476d0a;
case 0x476d0c:c.instructions+=29;goto B476d0c;
case 0x476d12:c.instructions+=28;goto B476d12;
case 0x476d15:c.instructions+=27;goto B476d15;
case 0x476d1b:c.instructions+=26;goto B476d1b;
case 0x476d1d:c.instructions+=25;goto B476d1d;
case 0x476d20:c.instructions+=24;goto B476d20;
case 0x476d26:c.instructions+=23;goto B476d26;
case 0x476d28:c.instructions+=22;goto B476d28;
case 0x476d2b:c.instructions+=21;goto B476d2b;
case 0x476d31:c.instructions+=20;goto B476d31;
case 0x476d33:c.instructions+=19;goto B476d33;
case 0x476d36:c.instructions+=18;goto B476d36;
case 0x476d3c:c.instructions+=17;goto B476d3c;
case 0x476d3e:c.instructions+=16;goto B476d3e;
case 0x476d41:c.instructions+=15;goto B476d41;
case 0x476d47:c.instructions+=14;goto B476d47;
case 0x476d49:c.instructions+=13;goto B476d49;
case 0x476d4c:c.instructions+=12;goto B476d4c;
case 0x476d52:c.instructions+=11;goto B476d52;
case 0x476d54:c.instructions+=10;goto B476d54;
case 0x476d57:c.instructions+=9;goto B476d57;
case 0x476d5d:c.instructions+=8;goto B476d5d;
case 0x476d5f:c.instructions+=7;goto B476d5f;
case 0x476d62:c.instructions+=6;goto B476d62;
case 0x476d6c:c.instructions+=5;goto B476d6c;
case 0x476d6e:c.instructions+=4;goto B476d6e;
case 0x476d6f:c.instructions+=3;goto B476d6f;
case 0x476d70:c.instructions+=2;goto B476d70;
case 0x476d72:c.instructions+=1;goto B476d72;
case 0x476d77:goto L476d77;
case 0x476d7a:c.instructions+=2;goto B476d7a;
case 0x476d7b:c.instructions+=1;goto B476d7b;
case 0x476d81:goto L476d81;
case 0x476d82:c.instructions+=3;goto B476d82;
case 0x476d83:c.instructions+=2;goto B476d83;
case 0x476d84:c.instructions+=1;goto B476d84;
case 0x476d90:goto L476d90;
case 0x476d91:c.instructions+=6;goto B476d91;
case 0x476d93:c.instructions+=5;goto B476d93;
case 0x476d96:c.instructions+=4;goto B476d96;
case 0x476d97:c.instructions+=3;goto B476d97;
case 0x476d99:c.instructions+=2;goto B476d99;
case 0x476d9b:c.instructions+=1;goto B476d9b;
case 0x476d9d:goto L476d9d;
case 0x476da0:goto L476da0;
case 0x476da2:c.instructions+=3;goto B476da2;
case 0x476da4:c.instructions+=2;goto B476da4;
case 0x476da6:c.instructions+=1;goto B476da6;
case 0x476dab:goto L476dab;
case 0x476dad:c.instructions+=3;goto B476dad;
case 0x476daf:c.instructions+=2;goto B476daf;
case 0x476db1:c.instructions+=1;goto B476db1;
case 0x476db4:goto L476db4;
case 0x476db7:c.instructions+=3;goto B476db7;
case 0x476db8:c.instructions+=2;goto B476db8;
case 0x476dba:c.instructions+=1;goto B476dba;
case 0x476dbc:goto L476dbc;
case 0x476dbd:c.instructions+=2;goto B476dbd;
case 0x476dbe:c.instructions+=1;goto B476dbe;
case 0x476dd0:goto L476dd0;
case 0x476dd1:c.instructions+=4;goto B476dd1;
case 0x476dd2:c.instructions+=3;goto B476dd2;
case 0x476dd4:c.instructions+=2;goto B476dd4;
case 0x476dd9:c.instructions+=1;goto B476dd9;
case 0x476de0:goto L476de0;
case 0x476de2:c.instructions+=3;goto B476de2;
case 0x476de4:c.instructions+=2;goto B476de4;
case 0x476de6:c.instructions+=1;goto B476de6;
case 0x476deb:goto L476deb;
case 0x476ded:c.instructions+=3;goto B476ded;
case 0x476def:c.instructions+=2;goto B476def;
case 0x476df1:c.instructions+=1;goto B476df1;
case 0x476df4:goto L476df4;
case 0x476df5:c.instructions+=1;goto B476df5;
case 0x476df7:goto L476df7;
case 0x476df8:c.instructions+=2;goto B476df8;
case 0x476df9:c.instructions+=1;goto B476df9;
case 0x476e00:goto L476e00;
case 0x476e01:c.instructions+=5;goto B476e01;
case 0x476e03:c.instructions+=4;goto B476e03;
case 0x476e04:c.instructions+=3;goto B476e04;
case 0x476e0a:c.instructions+=2;goto B476e0a;
case 0x476e11:c.instructions+=1;goto B476e11;
case 0x476e16:goto L476e16;
case 0x476e18:c.instructions+=3;goto B476e18;
case 0x476e1a:c.instructions+=2;goto B476e1a;
case 0x476e1c:c.instructions+=1;goto B476e1c;
case 0x476e21:goto L476e21;
case 0x476e23:c.instructions+=3;goto B476e23;
case 0x476e25:c.instructions+=2;goto B476e25;
case 0x476e27:c.instructions+=1;goto B476e27;
case 0x476e2a:goto L476e2a;
case 0x476e2b:c.instructions+=1;goto B476e2b;
case 0x476e2d:goto L476e2d;
case 0x476e32:c.instructions+=3;goto B476e32;
case 0x476e34:c.instructions+=2;goto B476e34;
case 0x476e3a:c.instructions+=1;goto B476e3a;
case 0x476e3c:goto L476e3c;
case 0x476e3e:c.instructions+=1;goto B476e3e;
case 0x476e40:goto L476e40;
case 0x476e46:c.instructions+=2;goto B476e46;
case 0x476e4c:c.instructions+=1;goto B476e4c;
case 0x476e4e:goto L476e4e;
case 0x476e54:c.instructions+=1;goto B476e54;
case 0x476e56:goto L476e56;
case 0x476e57:c.instructions+=4;goto B476e57;
case 0x476e5e:c.instructions+=3;goto B476e5e;
case 0x476e64:c.instructions+=2;goto B476e64;
case 0x476e65:c.instructions+=1;goto B476e65;
case 0x476e68:goto L476e68;
case 0x476e6a:c.instructions+=1;goto B476e6a;
case 0x476e6c:goto L476e6c;
case 0x476e6e:c.instructions+=1;goto B476e6e;
case 0x476e70:goto L476e70;
case 0x476e71:c.instructions+=4;goto B476e71;
case 0x476e78:c.instructions+=3;goto B476e78;
case 0x476e7e:c.instructions+=2;goto B476e7e;
case 0x476e7f:c.instructions+=1;goto B476e7f;
case 0x476e82:goto L476e82;
case 0x476e87:c.instructions+=2;goto B476e87;
case 0x476e89:c.instructions+=1;goto B476e89;
case 0x476e8b:goto L476e8b;
case 0x476e8c:c.instructions+=4;goto B476e8c;
case 0x476e93:c.instructions+=3;goto B476e93;
case 0x476e99:c.instructions+=2;goto B476e99;
case 0x476e9a:c.instructions+=1;goto B476e9a;
case 0x476e9d:goto L476e9d;
case 0x476e9e:c.instructions+=4;goto B476e9e;
case 0x476ea5:c.instructions+=3;goto B476ea5;
case 0x476eab:c.instructions+=2;goto B476eab;
case 0x476eac:c.instructions+=1;goto B476eac;
case 0x476eb0:goto L476eb0;
case 0x476eb1:c.instructions+=4;goto B476eb1;
case 0x476eb2:c.instructions+=3;goto B476eb2;
case 0x476eb4:c.instructions+=2;goto B476eb4;
case 0x476eb9:c.instructions+=1;goto B476eb9;
case 0x476ec0:goto L476ec0;
case 0x476ec6:c.instructions+=3;goto B476ec6;
case 0x476ec9:c.instructions+=2;goto B476ec9;
case 0x476ece:c.instructions+=1;goto B476ece;
case 0x476ed0:goto L476ed0;
case 0x476ed5:goto L476ed5;
case 0x476ed7:c.instructions+=3;goto B476ed7;
case 0x476ed9:c.instructions+=2;goto B476ed9;
case 0x476edb:c.instructions+=1;goto B476edb;
case 0x476ee0:goto L476ee0;
case 0x476ee2:c.instructions+=3;goto B476ee2;
case 0x476ee4:c.instructions+=2;goto B476ee4;
case 0x476ee6:c.instructions+=1;goto B476ee6;
case 0x476ee9:goto L476ee9;
case 0x476eea:c.instructions+=1;goto B476eea;
case 0x476eec:goto L476eec;
case 0x476eed:c.instructions+=2;goto B476eed;
case 0x476eee:c.instructions+=1;goto B476eee;
case 0x476f00:goto L476f00;
case 0x476f05:c.instructions+=4;goto B476f05;
case 0x476f0a:c.instructions+=3;goto B476f0a;
case 0x476f0b:c.instructions+=2;goto B476f0b;
case 0x476f0d:c.instructions+=1;goto B476f0d;
case 0x476f0f:goto L476f0f;
case 0x476f14:c.instructions+=1;goto B476f14;
case 0x476f16:goto L476f16;
case 0x476f17:c.instructions+=2;goto B476f17;
case 0x476f1c:c.instructions+=1;goto B476f1c;
case 0x476f20:goto L476f20;
case 0x476f22:c.instructions+=3;goto B476f22;
case 0x476f24:c.instructions+=2;goto B476f24;
case 0x476f26:c.instructions+=1;goto B476f26;
case 0x476f2b:goto L476f2b;
case 0x476f2d:c.instructions+=3;goto B476f2d;
case 0x476f2f:c.instructions+=2;goto B476f2f;
case 0x476f31:c.instructions+=1;goto B476f31;
case 0x476f34:goto L476f34;
case 0x476f35:c.instructions+=1;goto B476f35;
case 0x476f37:goto L476f37;
case 0x476f38:goto L476f38;
case 0x476f39:c.instructions+=1;goto B476f39;
case 0x476f40:goto L476f40;
case 0x476f45:c.instructions+=2;goto B476f45;
case 0x476f46:c.instructions+=1;goto B476f46;
case 0x476f4b:goto L476f4b;
case 0x476f4e:c.instructions+=2;goto B476f4e;
case 0x476f53:c.instructions+=1;goto B476f53;
case 0x476f55:goto L476f55;
case 0x476f5b:c.instructions+=5;goto B476f5b;
case 0x476f5e:c.instructions+=4;goto B476f5e;
case 0x476f64:c.instructions+=3;goto B476f64;
case 0x476f65:c.instructions+=2;goto B476f65;
case 0x476f67:c.instructions+=1;goto B476f67;
case 0x476f6c:goto L476f6c;
case 0x476f6f:c.instructions+=2;goto B476f6f;
case 0x476f71:c.instructions+=1;goto B476f71;
case 0x476f73:goto L476f73;
case 0x476f75:c.instructions+=1;goto B476f75;
case 0x476f7a:goto L476f7a;
case 0x476f7c:c.instructions+=1;goto B476f7c;
case 0x476f80:goto L476f80;
case 0x476f81:c.instructions+=6;goto B476f81;
case 0x476f85:c.instructions+=5;goto B476f85;
case 0x476f86:c.instructions+=4;goto B476f86;
case 0x476f87:c.instructions+=3;goto B476f87;
case 0x476f88:c.instructions+=2;goto B476f88;
case 0x476f8a:c.instructions+=1;goto B476f8a;
case 0x476f8f:goto L476f8f;
case 0x476f91:c.instructions+=2;goto B476f91;
case 0x476f93:c.instructions+=1;goto B476f93;
case 0x476f95:goto L476f95;
case 0x476f98:c.instructions+=1;goto B476f98;
case 0x476f9a:goto L476f9a;
case 0x476f9b:c.instructions+=3;goto B476f9b;
case 0x476f9c:c.instructions+=2;goto B476f9c;
case 0x476f9d:c.instructions+=1;goto B476f9d;
case 0x476fa0:goto L476fa0;
case 0x476fa3:c.instructions+=4;goto B476fa3;
case 0x476fa6:c.instructions+=3;goto B476fa6;
case 0x476fa7:c.instructions+=2;goto B476fa7;
case 0x476fa8:c.instructions+=1;goto B476fa8;
case 0x476fad:goto L476fad;
case 0x476faf:c.instructions+=4;goto B476faf;
case 0x476fb1:c.instructions+=3;goto B476fb1;
case 0x476fb2:c.instructions+=2;goto B476fb2;
case 0x476fb4:c.instructions+=1;goto B476fb4;
case 0x476fb7:goto L476fb7;
case 0x476fba:c.instructions+=2;goto B476fba;
case 0x476fbc:c.instructions+=1;goto B476fbc;
case 0x476fbe:goto L476fbe;
case 0x476fc1:c.instructions+=6;goto B476fc1;
case 0x476fc4:c.instructions+=5;goto B476fc4;
case 0x476fc6:c.instructions+=4;goto B476fc6;
case 0x476fc7:c.instructions+=3;goto B476fc7;
case 0x476fc8:c.instructions+=2;goto B476fc8;
case 0x476fc9:c.instructions+=1;goto B476fc9;
case 0x476fcc:goto L476fcc;
case 0x476fcf:c.instructions+=2;goto B476fcf;
case 0x476fd1:c.instructions+=1;goto B476fd1;
case 0x476fd3:goto L476fd3;
case 0x476fd6:c.instructions+=3;goto B476fd6;
case 0x476fd9:c.instructions+=2;goto B476fd9;
case 0x476fdb:c.instructions+=1;goto B476fdb;
case 0x476fdd:goto L476fdd;
case 0x476fe0:c.instructions+=1;goto B476fe0;
case 0x476fe3:goto L476fe3;
case 0x476fe5:c.instructions+=4;goto B476fe5;
case 0x476fe6:c.instructions+=3;goto B476fe6;
case 0x476fe7:c.instructions+=2;goto B476fe7;
case 0x476fe8:c.instructions+=1;goto B476fe8;
case 0x476ff0:goto L476ff0;
case 0x476ff2:c.instructions+=5;goto B476ff2;
case 0x476ff4:c.instructions+=4;goto B476ff4;
case 0x476ff7:c.instructions+=3;goto B476ff7;
case 0x476ffa:c.instructions+=2;goto B476ffa;
case 0x476ffd:c.instructions+=1;goto B476ffd;
default:missing_instruction(c.pc);}
B476000:L476000:{c.instructions+=16;NFSU2_TR(0x476000);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476002:{NFSU2_TR(0x476002);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476007:{NFSU2_TR(0x476007);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47600d:{NFSU2_TR(0x47600d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47600e:{NFSU2_TR(0x47600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476015:{NFSU2_TR(0x476015);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476016:{NFSU2_TR(0x476016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476017:{NFSU2_TR(0x476017);
__builtin_memmove((R+24),(R+4),4);
}
B476019:{NFSU2_TR(0x476019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47601a:{NFSU2_TR(0x47601a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47601e:{NFSU2_TR(0x47601e);
u8 U[4];
w4(U+0,u32(0x78b4e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476024:{NFSU2_TR(0x476024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47602a:{NFSU2_TR(0x47602a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47602c:{NFSU2_TR(0x47602c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B47602e:{NFSU2_TR(0x47602e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476032:{NFSU2_TR(0x476032);
if(r1(R+518)){{goto L47603a;}}
}
B476034:L476034:{c.instructions+=3;NFSU2_TR(0x476034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476036:{NFSU2_TR(0x476036);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476038:{NFSU2_TR(0x476038);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47603aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47603a:L47603a:{c.instructions+=4;NFSU2_TR(0x47603a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476040:{NFSU2_TR(0x476040);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B476042:{NFSU2_TR(0x476042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476048:{NFSU2_TR(0x476048);
if(r1(R+518)){{goto L476050;}}
}
B47604a:L47604a:{c.instructions+=3;NFSU2_TR(0x47604a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47604c:{NFSU2_TR(0x47604c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47604e:{NFSU2_TR(0x47604e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476050ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B476050:L476050:{c.instructions+=4;NFSU2_TR(0x476050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476056:{NFSU2_TR(0x476056);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B476058:{NFSU2_TR(0x476058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47605e:{NFSU2_TR(0x47605e);
if(r1(R+518)){{goto L476066;}}
}
B476060:L476060:{c.instructions+=3;NFSU2_TR(0x476060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476062:{NFSU2_TR(0x476062);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476064:{NFSU2_TR(0x476064);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476066ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B476066:L476066:{c.instructions+=8;NFSU2_TR(0x476066);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47606a:{NFSU2_TR(0x47606a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476070:{NFSU2_TR(0x476070);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476076:{NFSU2_TR(0x476076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476077:{NFSU2_TR(0x476077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476078:{NFSU2_TR(0x476078);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47607f:{NFSU2_TR(0x47607f);
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
B476082:{NFSU2_TR(0x476082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476090:L476090:{c.instructions+=3;NFSU2_TR(0x476090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476091:{NFSU2_TR(0x476091);
__builtin_memmove((R+24),(R+4),4);
}
B476093:{NFSU2_TR(0x476093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476098ull));
TAIL_STATIC(0x45e350u,45e);
}
B476098:L476098:{c.instructions+=14;NFSU2_TR(0x476098);
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
B47609a:{NFSU2_TR(0x47609a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4760a0:{NFSU2_TR(0x4760a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760a6:{NFSU2_TR(0x4760a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760ac:{NFSU2_TR(0x4760ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760b2:{NFSU2_TR(0x4760b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760b8:{NFSU2_TR(0x4760b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760be:{NFSU2_TR(0x4760be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760c4:{NFSU2_TR(0x4760c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760ca:{NFSU2_TR(0x4760ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4760ce:{NFSU2_TR(0x4760ce);
u8 U[4];
w4(U+0,u32(0x78b530ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4760d4:{NFSU2_TR(0x4760d4);
__builtin_memmove((R+0),(R+24),4);
}
B4760d6:{NFSU2_TR(0x4760d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4760d7:{NFSU2_TR(0x4760d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4760e0:L4760e0:{c.instructions+=17;NFSU2_TR(0x4760e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760e2:{NFSU2_TR(0x4760e2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760e7:{NFSU2_TR(0x4760e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4760ed:{NFSU2_TR(0x4760ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760ee:{NFSU2_TR(0x4760ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4760f5:{NFSU2_TR(0x4760f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4760f8:{NFSU2_TR(0x4760f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760f9:{NFSU2_TR(0x4760f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760fa:{NFSU2_TR(0x4760fa);
__builtin_memmove((R+24),(R+4),4);
}
B4760fc:{NFSU2_TR(0x4760fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4760fd:{NFSU2_TR(0x4760fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476101:{NFSU2_TR(0x476101);
u8 U[4];
w4(U+0,u32(0x78b530ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476107:{NFSU2_TR(0x476107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47610d:{NFSU2_TR(0x47610d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47610f:{NFSU2_TR(0x47610f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476111:{NFSU2_TR(0x476111);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476115:{NFSU2_TR(0x476115);
if(r1(R+518)){{goto L476144;}}
}
B476117:L476117:{c.instructions+=3;NFSU2_TR(0x476117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476119:{NFSU2_TR(0x476119);
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
B47611b:{NFSU2_TR(0x47611b);
if(r1(R+518)){{goto L476122;}}
}
B47611d:L47611d:{c.instructions+=1;NFSU2_TR(0x47611d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476122ull));
TAIL_STATIC(0x735550u,735);
}
B476122:L476122:{c.instructions+=3;NFSU2_TR(0x476122);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B476126:{NFSU2_TR(0x476126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476127:{NFSU2_TR(0x476127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47612cull));
TAIL_STATIC(0x734df0u,734);
}
B47612c:L47612c:{c.instructions+=2;NFSU2_TR(0x47612c);
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
B47612f:{NFSU2_TR(0x47612f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476134ull));
TAIL_STATIC(0x734e40u,734);
}
B476134:L476134:{c.instructions+=5;NFSU2_TR(0x476134);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476138:{NFSU2_TR(0x476138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47613a:{NFSU2_TR(0x47613a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47613b:{NFSU2_TR(0x47613b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47613c:{NFSU2_TR(0x47613c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47613full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47613f:L47613f:{c.instructions+=1;NFSU2_TR(0x47613f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476144ull));
TAIL_STATIC(0x734e60u,734);
}
B476144:L476144:{c.instructions+=4;NFSU2_TR(0x476144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47614a:{NFSU2_TR(0x47614a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47614c:{NFSU2_TR(0x47614c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476152:{NFSU2_TR(0x476152);
if(r1(R+518)){{goto L476181;}}
}
B476154:L476154:{c.instructions+=3;NFSU2_TR(0x476154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476156:{NFSU2_TR(0x476156);
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
B476158:{NFSU2_TR(0x476158);
if(r1(R+518)){{goto L47615f;}}
}
B47615a:L47615a:{c.instructions+=1;NFSU2_TR(0x47615a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47615full));
TAIL_STATIC(0x735550u,735);
}
B47615f:L47615f:{c.instructions+=3;NFSU2_TR(0x47615f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B476163:{NFSU2_TR(0x476163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476164:{NFSU2_TR(0x476164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476169ull));
TAIL_STATIC(0x734df0u,734);
}
B476169:L476169:{c.instructions+=2;NFSU2_TR(0x476169);
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
B47616c:{NFSU2_TR(0x47616c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476171ull));
TAIL_STATIC(0x734e40u,734);
}
B476171:L476171:{c.instructions+=5;NFSU2_TR(0x476171);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476175:{NFSU2_TR(0x476175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476177:{NFSU2_TR(0x476177);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476178:{NFSU2_TR(0x476178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476179:{NFSU2_TR(0x476179);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47617cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47617c:L47617c:{c.instructions+=1;NFSU2_TR(0x47617c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476181ull));
TAIL_STATIC(0x734e60u,734);
}
B476181:L476181:{c.instructions+=9;NFSU2_TR(0x476181);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476185:{NFSU2_TR(0x476185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47618b:{NFSU2_TR(0x47618b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47618c:{NFSU2_TR(0x47618c);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476192:{NFSU2_TR(0x476192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476193:{NFSU2_TR(0x476193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476194:{NFSU2_TR(0x476194);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47619b:{NFSU2_TR(0x47619b);
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
B47619e:{NFSU2_TR(0x47619e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4761a0:L4761a0:{c.instructions+=3;NFSU2_TR(0x4761a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4761a1:{NFSU2_TR(0x4761a1);
__builtin_memmove((R+24),(R+4),4);
}
B4761a3:{NFSU2_TR(0x4761a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4761a8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4761a8:L4761a8:{c.instructions+=13;NFSU2_TR(0x4761a8);
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
B4761aa:{NFSU2_TR(0x4761aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4761b0:{NFSU2_TR(0x4761b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761b6:{NFSU2_TR(0x4761b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761bc:{NFSU2_TR(0x4761bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761c2:{NFSU2_TR(0x4761c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761c8:{NFSU2_TR(0x4761c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761ce:{NFSU2_TR(0x4761ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4761d4:{NFSU2_TR(0x4761d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4761d8:{NFSU2_TR(0x4761d8);
u8 U[4];
w4(U+0,u32(0x78b578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4761de:{NFSU2_TR(0x4761de);
__builtin_memmove((R+0),(R+24),4);
}
B4761e0:{NFSU2_TR(0x4761e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4761e1:{NFSU2_TR(0x4761e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4761f0:L4761f0:{c.instructions+=15;NFSU2_TR(0x4761f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4761f2:{NFSU2_TR(0x4761f2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4761f7:{NFSU2_TR(0x4761f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4761fd:{NFSU2_TR(0x4761fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4761fe:{NFSU2_TR(0x4761fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476205:{NFSU2_TR(0x476205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B476208:{NFSU2_TR(0x476208);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476209:{NFSU2_TR(0x476209);
__builtin_memmove((R+24),(R+4),4);
}
B47620b:{NFSU2_TR(0x47620b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47620c:{NFSU2_TR(0x47620c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476210:{NFSU2_TR(0x476210);
u8 U[4];
w4(U+0,u32(0x78b578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476216:{NFSU2_TR(0x476216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47621c:{NFSU2_TR(0x47621c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47621e:{NFSU2_TR(0x47621e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476226:{NFSU2_TR(0x476226);
if(r1(R+518)){{goto L476256;}}
}
B476228:L476228:{c.instructions+=3;NFSU2_TR(0x476228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47622a:{NFSU2_TR(0x47622a);
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
B47622c:{NFSU2_TR(0x47622c);
if(r1(R+518)){{goto L476233;}}
}
B47622e:L47622e:{c.instructions+=1;NFSU2_TR(0x47622e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476233ull));
TAIL_STATIC(0x735550u,735);
}
B476233:L476233:{c.instructions+=3;NFSU2_TR(0x476233);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B476237:{NFSU2_TR(0x476237);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476238:{NFSU2_TR(0x476238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47623dull));
TAIL_STATIC(0x734df0u,734);
}
B47623d:L47623d:{c.instructions+=2;NFSU2_TR(0x47623d);
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
B476240:{NFSU2_TR(0x476240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476245ull));
TAIL_STATIC(0x734e40u,734);
}
B476245:L476245:{c.instructions+=5;NFSU2_TR(0x476245);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476249:{NFSU2_TR(0x476249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47624b:{NFSU2_TR(0x47624b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47624d:{NFSU2_TR(0x47624d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47624e:{NFSU2_TR(0x47624e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476251ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476251:L476251:{c.instructions+=1;NFSU2_TR(0x476251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476256ull));
TAIL_STATIC(0x734e60u,734);
}
B476256:L476256:{c.instructions+=8;NFSU2_TR(0x476256);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47625a:{NFSU2_TR(0x47625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476264:{NFSU2_TR(0x476264);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47626a:{NFSU2_TR(0x47626a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47626b:{NFSU2_TR(0x47626b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47626c:{NFSU2_TR(0x47626c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476273:{NFSU2_TR(0x476273);
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
B476276:{NFSU2_TR(0x476276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476280:L476280:{c.instructions+=7;NFSU2_TR(0x476280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476281:{NFSU2_TR(0x476281);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476285:{NFSU2_TR(0x476285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476287:{NFSU2_TR(0x476287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476288:{NFSU2_TR(0x476288);
__builtin_memmove((R+28),(R+4),4);
}
B47628a:{NFSU2_TR(0x47628a);
__builtin_memmove((R+4),(R+24),4);
}
B47628c:{NFSU2_TR(0x47628c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47628full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47628f:L47628f:{c.instructions+=2;NFSU2_TR(0x47628f);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(u32(0xfff0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B476295:{NFSU2_TR(0x476295);
if(r1(R+518)){{goto L4762ab;}}
}
B476297:L476297:{c.instructions+=3;NFSU2_TR(0x476297);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47629c:{NFSU2_TR(0x47629c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47629e:{NFSU2_TR(0x47629e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4762a3ull));
TAIL_STATIC(0x4691c0u,469);
}
B4762a3:L4762a3:{c.instructions+=4;NFSU2_TR(0x4762a3);
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
B4762a6:{NFSU2_TR(0x4762a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4762a7:{NFSU2_TR(0x4762a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4762a8:{NFSU2_TR(0x4762a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4762ab:L4762ab:{c.instructions+=4;NFSU2_TR(0x4762ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4762b1:{NFSU2_TR(0x4762b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4762b2:{NFSU2_TR(0x4762b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4762b3:{NFSU2_TR(0x4762b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4762c0:L4762c0:{c.instructions+=3;NFSU2_TR(0x4762c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4762c1:{NFSU2_TR(0x4762c1);
__builtin_memmove((R+24),(R+4),4);
}
B4762c3:{NFSU2_TR(0x4762c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4762c8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4762c8:L4762c8:{c.instructions+=13;NFSU2_TR(0x4762c8);
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
B4762ca:{NFSU2_TR(0x4762ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4762d0:{NFSU2_TR(0x4762d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4762d6:{NFSU2_TR(0x4762d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4762dc:{NFSU2_TR(0x4762dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4762e2:{NFSU2_TR(0x4762e2);
w1(R+4,u8(0x1ull));
}
B4762e4:{NFSU2_TR(0x4762e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4762e7:{NFSU2_TR(0x4762e7);
u8 U[4];
w4(U+0,u32(0x78b5c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4762ed:{NFSU2_TR(0x4762ed);
__builtin_memmove(gp(0x82bc54),(R+0),1);
}
B4762f2:{NFSU2_TR(0x4762f2);
__builtin_memmove((R+0),(R+24),4);
}
B4762f4:{NFSU2_TR(0x4762f4);
__builtin_memmove(gp(0x7ed638),(R+4),1);
}
B4762fa:{NFSU2_TR(0x4762fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4762fb:{NFSU2_TR(0x4762fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476300:L476300:{c.instructions+=15;NFSU2_TR(0x476300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476302:{NFSU2_TR(0x476302);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476307:{NFSU2_TR(0x476307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47630d:{NFSU2_TR(0x47630d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47630e:{NFSU2_TR(0x47630e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476315:{NFSU2_TR(0x476315);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476316:{NFSU2_TR(0x476316);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476317:{NFSU2_TR(0x476317);
__builtin_memmove((R+12),(R+4),4);
}
B476319:{NFSU2_TR(0x476319);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47631a:{NFSU2_TR(0x47631a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47631e:{NFSU2_TR(0x47631e);
u8 U[4];
w4(U+0,u32(0x78b5c0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B476324:{NFSU2_TR(0x476324);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B47632a:{NFSU2_TR(0x47632a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47632c:{NFSU2_TR(0x47632c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476334:{NFSU2_TR(0x476334);
if(r1(R+518)){{goto L476345;}}
}
B476336:L476336:{c.instructions+=1;NFSU2_TR(0x476336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47633bull));
TAIL_STATIC(0x721a63u,721);
}
B47633b:L47633b:{c.instructions+=1;NFSU2_TR(0x47633b);
s4(0x82b08c,u32(0x0ull));
}
B476345:L476345:{c.instructions+=3;NFSU2_TR(0x476345);
__builtin_memmove((R+4),gp(0x82b090),4);
}
B47634b:{NFSU2_TR(0x47634b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47634d:{NFSU2_TR(0x47634d);
if(r1(R+518)){{goto L47635e;}}
}
B47634f:L47634f:{c.instructions+=1;NFSU2_TR(0x47634f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476354ull));
TAIL_STATIC(0x721a63u,721);
}
B476354:L476354:{c.instructions+=1;NFSU2_TR(0x476354);
s4(0x82b090,u32(0x0ull));
}
B47635e:L47635e:{c.instructions+=1;NFSU2_TR(0x47635e);
w4(R+24,u32(0x82af60ull));
}
B476363:L476363:{c.instructions+=3;NFSU2_TR(0x476363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476365:{NFSU2_TR(0x476365);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476367:{NFSU2_TR(0x476367);
if(r1(R+518)){{goto L476372;}}
}
B476369:L476369:{c.instructions+=2;NFSU2_TR(0x476369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47636a:{NFSU2_TR(0x47636a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47636full));
TAIL_STATIC(0x440540u,440);
}
B47636f:L47636f:{c.instructions+=1;NFSU2_TR(0x47636f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476372:L476372:{c.instructions+=4;NFSU2_TR(0x476372);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476378:{NFSU2_TR(0x476378);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B47637b:{NFSU2_TR(0x47637b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82af90ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82af90ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B476381:{NFSU2_TR(0x476381);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476363u);}goto L476363;}}
}
B476383:L476383:{c.instructions+=7;NFSU2_TR(0x476383);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476387:{NFSU2_TR(0x476387);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B47638d:{NFSU2_TR(0x47638d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47638e:{NFSU2_TR(0x47638e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47638f:{NFSU2_TR(0x47638f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476396:{NFSU2_TR(0x476396);
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
B476399:{NFSU2_TR(0x476399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4763a0:L4763a0:{c.instructions+=7;NFSU2_TR(0x4763a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4763a1:{NFSU2_TR(0x4763a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4763a5:{NFSU2_TR(0x4763a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4763a7:{NFSU2_TR(0x4763a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4763a8:{NFSU2_TR(0x4763a8);
__builtin_memmove((R+28),(R+4),4);
}
B4763aa:{NFSU2_TR(0x4763aa);
__builtin_memmove((R+4),(R+24),4);
}
B4763ac:{NFSU2_TR(0x4763ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4763afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4763af:L4763af:{c.instructions+=4;NFSU2_TR(0x4763af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4763b1:{NFSU2_TR(0x4763b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff0ull))));
}
B4763b7:{NFSU2_TR(0x4763b7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x70ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x70ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4763ba:{NFSU2_TR(0x4763ba);
if(r1(R+518)){{goto L4763d0;}}
}
B4763bc:L4763bc:{c.instructions+=3;NFSU2_TR(0x4763bc);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4763c1:{NFSU2_TR(0x4763c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4763c3:{NFSU2_TR(0x4763c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4763c8ull));
TAIL_STATIC(0x4691c0u,469);
}
B4763c8:L4763c8:{c.instructions+=4;NFSU2_TR(0x4763c8);
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
B4763cb:{NFSU2_TR(0x4763cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4763cc:{NFSU2_TR(0x4763cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4763cd:{NFSU2_TR(0x4763cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4763d0:L4763d0:{c.instructions+=4;NFSU2_TR(0x4763d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4763d6:{NFSU2_TR(0x4763d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4763d7:{NFSU2_TR(0x4763d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4763d8:{NFSU2_TR(0x4763d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4763e0:L4763e0:{c.instructions+=5;NFSU2_TR(0x4763e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4763e4:{NFSU2_TR(0x4763e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4763e7:{NFSU2_TR(0x4763e7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4763ea:{NFSU2_TR(0x4763ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4763eb:{NFSU2_TR(0x4763eb);
if(r1(R+518)){{goto L4763fc;}}
}
B4763ed:L4763ed:{c.instructions+=2;NFSU2_TR(0x4763ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4763f0:{NFSU2_TR(0x4763f0);
if(r1(R+518)){{goto L4763fc;}}
}
B4763f2:L4763f2:{c.instructions+=3;NFSU2_TR(0x4763f2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4763f4:{NFSU2_TR(0x4763f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4763fa:{NFSU2_TR(0x4763fa);
{goto L476404;}
}
B4763fc:L4763fc:{c.instructions+=2;NFSU2_TR(0x4763fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476402:{NFSU2_TR(0x476402);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B476404:L476404:{c.instructions+=4;NFSU2_TR(0x476404);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476407:{NFSU2_TR(0x476407);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47640e:{NFSU2_TR(0x47640e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B476411:{NFSU2_TR(0x476411);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4764ac;}}
}
B476417:L476417:{c.instructions+=5;NFSU2_TR(0x476417);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476418:{NFSU2_TR(0x476418);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476419:{NFSU2_TR(0x476419);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47641b:{NFSU2_TR(0x47641b);
w4(R+4,u32(0xcull));
}
B476420:{NFSU2_TR(0x476420);
w4(R+28,u32(0x82af60ull));
}
B476425:L476425:{c.instructions+=1;NFSU2_TR(0x476425);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L476427;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476425u);}goto L476425;}
}
B476427:L476427:{c.instructions+=5;NFSU2_TR(0x476427);
__builtin_memmove(gp(0x82b08c),(R+24),4);
}
B47642d:{NFSU2_TR(0x47642d);
__builtin_memmove(gp(0x82b090),(R+24),4);
}
B476433:{NFSU2_TR(0x476433);
__builtin_memmove(gp(0x82bc54),(R+0),1);
}
B476438:{NFSU2_TR(0x476438);
s1(0x7ed638,u8(0x1ull));
}
B47643f:{NFSU2_TR(0x47643f);
}
B476440:L476440:{c.instructions+=3;NFSU2_TR(0x476440);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed608ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B476447:{NFSU2_TR(0x476447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476448:{NFSU2_TR(0x476448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47644dull));
TAIL_STATIC(0x57d900u,57d);
}
B47644d:L47644d:{c.instructions+=5;NFSU2_TR(0x47644d);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B476453:{NFSU2_TR(0x476453);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476454:{NFSU2_TR(0x476454);
__builtin_memmove((R+20),(R+0),4);
}
B476456:{NFSU2_TR(0x476456);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B476458:{NFSU2_TR(0x476458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47645dull));
TAIL_STATIC(0x43e910u,43e);
}
B47645d:L47645d:{c.instructions+=4;NFSU2_TR(0x47645d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B476463:{NFSU2_TR(0x476463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B476466:{NFSU2_TR(0x476466);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476468:{NFSU2_TR(0x476468);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L476483;}}
}
B47646a:L47646a:{c.instructions+=6;NFSU2_TR(0x47646a);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47646f:{NFSU2_TR(0x47646f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B476472:{NFSU2_TR(0x476472);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B476477:{NFSU2_TR(0x476477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476478:{NFSU2_TR(0x476478);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476479:{NFSU2_TR(0x476479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47647eull));
TAIL_STATIC(0x440820u,440);
}
B47647e:L47647e:{c.instructions+=2;NFSU2_TR(0x47647e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B476481:{NFSU2_TR(0x476481);
__builtin_memmove((R+28),(R+0),4);
}
B476483:L476483:{c.instructions+=9;NFSU2_TR(0x476483);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed608ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47648a:{NFSU2_TR(0x47648a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47648b:{NFSU2_TR(0x47648b);
u8 U[4];
w4(U+0,u32(0x4632b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476490:{NFSU2_TR(0x476490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476491:{NFSU2_TR(0x476491);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476493:{NFSU2_TR(0x476493);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476494:{NFSU2_TR(0x476494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476495:{NFSU2_TR(0x476495);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B47649c:{NFSU2_TR(0x47649c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4764a1ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B4764a1:L4764a1:{c.instructions+=4;NFSU2_TR(0x4764a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4764a4:{NFSU2_TR(0x4764a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4764a5:{NFSU2_TR(0x4764a5);
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
B4764a8:{NFSU2_TR(0x4764a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476440u);}goto L476440;}}
}
B4764aa:L4764aa:{c.instructions+=2;NFSU2_TR(0x4764aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4764ab:{NFSU2_TR(0x4764ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4764ac:L4764ac:{c.instructions+=2;NFSU2_TR(0x4764ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4764ad:{NFSU2_TR(0x4764ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4764b0:L4764b0:{c.instructions+=3;NFSU2_TR(0x4764b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4764b1:{NFSU2_TR(0x4764b1);
__builtin_memmove((R+24),(R+4),4);
}
B4764b3:{NFSU2_TR(0x4764b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4764b8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4764b8:L4764b8:{c.instructions+=11;NFSU2_TR(0x4764b8);
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
B4764ba:{NFSU2_TR(0x4764ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4764c0:{NFSU2_TR(0x4764c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4764c6:{NFSU2_TR(0x4764c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4764cc:{NFSU2_TR(0x4764cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4764d2:{NFSU2_TR(0x4764d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4764d8:{NFSU2_TR(0x4764d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4764dc:{NFSU2_TR(0x4764dc);
u8 U[4];
w4(U+0,u32(0x78b608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4764e2:{NFSU2_TR(0x4764e2);
__builtin_memmove((R+0),(R+24),4);
}
B4764e4:{NFSU2_TR(0x4764e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4764e5:{NFSU2_TR(0x4764e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4764f0:L4764f0:{c.instructions+=15;NFSU2_TR(0x4764f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4764f2:{NFSU2_TR(0x4764f2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4764f7:{NFSU2_TR(0x4764f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4764fd:{NFSU2_TR(0x4764fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4764fe:{NFSU2_TR(0x4764fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476505:{NFSU2_TR(0x476505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B476508:{NFSU2_TR(0x476508);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476509:{NFSU2_TR(0x476509);
__builtin_memmove((R+24),(R+4),4);
}
B47650b:{NFSU2_TR(0x47650b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47650c:{NFSU2_TR(0x47650c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476510:{NFSU2_TR(0x476510);
u8 U[4];
w4(U+0,u32(0x78b608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476516:{NFSU2_TR(0x476516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47651c:{NFSU2_TR(0x47651c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47651e:{NFSU2_TR(0x47651e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476526:{NFSU2_TR(0x476526);
if(r1(R+518)){{goto L476556;}}
}
B476528:L476528:{c.instructions+=3;NFSU2_TR(0x476528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47652a:{NFSU2_TR(0x47652a);
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
B47652c:{NFSU2_TR(0x47652c);
if(r1(R+518)){{goto L476533;}}
}
B47652e:L47652e:{c.instructions+=1;NFSU2_TR(0x47652e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476533ull));
TAIL_STATIC(0x735550u,735);
}
B476533:L476533:{c.instructions+=3;NFSU2_TR(0x476533);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B476537:{NFSU2_TR(0x476537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476538:{NFSU2_TR(0x476538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47653dull));
TAIL_STATIC(0x734df0u,734);
}
B47653d:L47653d:{c.instructions+=2;NFSU2_TR(0x47653d);
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
B476540:{NFSU2_TR(0x476540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476545ull));
TAIL_STATIC(0x734e40u,734);
}
B476545:L476545:{c.instructions+=5;NFSU2_TR(0x476545);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476549:{NFSU2_TR(0x476549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47654b:{NFSU2_TR(0x47654b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47654d:{NFSU2_TR(0x47654d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47654e:{NFSU2_TR(0x47654e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476551ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476551:L476551:{c.instructions+=1;NFSU2_TR(0x476551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476556ull));
TAIL_STATIC(0x734e60u,734);
}
B476556:L476556:{c.instructions+=8;NFSU2_TR(0x476556);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47655a:{NFSU2_TR(0x47655a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476564:{NFSU2_TR(0x476564);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47656a:{NFSU2_TR(0x47656a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47656b:{NFSU2_TR(0x47656b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47656c:{NFSU2_TR(0x47656c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476573:{NFSU2_TR(0x476573);
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
B476576:{NFSU2_TR(0x476576);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476580:L476580:{c.instructions+=6;NFSU2_TR(0x476580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476581:{NFSU2_TR(0x476581);
__builtin_memmove((R+24),(R+4),4);
}
B476583:{NFSU2_TR(0x476583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476586:{NFSU2_TR(0x476586);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476589:{NFSU2_TR(0x476589);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47658b:{NFSU2_TR(0x47658b);
if(r1(R+518)){{goto L4765d6;}}
}
B47658d:L47658d:{c.instructions+=3;NFSU2_TR(0x47658d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476590:{NFSU2_TR(0x476590);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476594:{NFSU2_TR(0x476594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4765d6;}}
}
B476596:L476596:{c.instructions+=4;NFSU2_TR(0x476596);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476599:{NFSU2_TR(0x476599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47659b:{NFSU2_TR(0x47659b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47659e:{NFSU2_TR(0x47659e);
if(r1(R+518)){{goto L4765cf;}}
}
B4765a0:L4765a0:{c.instructions+=2;NFSU2_TR(0x4765a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4765a3:{NFSU2_TR(0x4765a3);
if(r1(R+518)){{goto L4765cf;}}
}
B4765a5:L4765a5:{c.instructions+=2;NFSU2_TR(0x4765a5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4765a7:{NFSU2_TR(0x4765a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4765acull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4765ac:L4765ac:{c.instructions+=7;NFSU2_TR(0x4765ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4765af:{NFSU2_TR(0x4765af);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4765b1:{NFSU2_TR(0x4765b1);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4765b3:{NFSU2_TR(0x4765b3);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4765b5:{NFSU2_TR(0x4765b5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4765b7:{NFSU2_TR(0x4765b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4765bd:{NFSU2_TR(0x4765bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4765c2ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4765c2:L4765c2:{c.instructions+=5;NFSU2_TR(0x4765c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4765c5:{NFSU2_TR(0x4765c5);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0x8ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0x8ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4765c7:{NFSU2_TR(0x4765c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4765cd:{NFSU2_TR(0x4765cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4765ce:{NFSU2_TR(0x4765ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4765cf:L4765cf:{c.instructions+=1;NFSU2_TR(0x4765cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4765d6:L4765d6:{c.instructions+=2;NFSU2_TR(0x4765d6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4765d8:{NFSU2_TR(0x4765d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4765ddull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4765dd:L4765dd:{c.instructions+=5;NFSU2_TR(0x4765dd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x8ull))));
}
B4765df:{NFSU2_TR(0x4765df);
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
B4765e2:{NFSU2_TR(0x4765e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4765e8:{NFSU2_TR(0x4765e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4765e9:{NFSU2_TR(0x4765e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4765f0:L4765f0:{c.instructions+=4;NFSU2_TR(0x4765f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4765f1:{NFSU2_TR(0x4765f1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4765f3:{NFSU2_TR(0x4765f3);
__builtin_memmove((R+24),(R+4),4);
}
B4765f5:{NFSU2_TR(0x4765f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4765faull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4765fa:L4765fa:{c.instructions+=7;NFSU2_TR(0x4765fa);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x8ull))));
}
B4765fc:{NFSU2_TR(0x4765fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B476602:{NFSU2_TR(0x476602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476605:{NFSU2_TR(0x476605);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476608:{NFSU2_TR(0x476608);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47660b:{NFSU2_TR(0x47660b);
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
B47660d:{NFSU2_TR(0x47660d);
if(r1(R+518)){{goto L476637;}}
}
B47660f:L47660f:{c.instructions+=3;NFSU2_TR(0x47660f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476612:{NFSU2_TR(0x476612);
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
B476616:{NFSU2_TR(0x476616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476637;}}
}
B476618:L476618:{c.instructions+=9;NFSU2_TR(0x476618);
__builtin_memmove((R+0),gp(0x82cb6c),4);
}
B47661d:{NFSU2_TR(0x47661d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B47661e:{NFSU2_TR(0x47661e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47661f:{NFSU2_TR(0x47661f);
w4(R+4,u32(0x6ull));
}
B476624:{NFSU2_TR(0x476624);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x476624);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x476624);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B476626:{NFSU2_TR(0x476626);
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
B476628:{NFSU2_TR(0x476628);
__builtin_memmove(gp(0x82cb6c),(R+8),4);
}
B47662e:{NFSU2_TR(0x47662e);
__builtin_memmove((R+8),(R+518),1);
}
B476631:{NFSU2_TR(0x476631);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B476637:L476637:{c.instructions+=2;NFSU2_TR(0x476637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476638:{NFSU2_TR(0x476638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476640:L476640:{c.instructions+=7;NFSU2_TR(0x476640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476641:{NFSU2_TR(0x476641);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476645:{NFSU2_TR(0x476645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476647:{NFSU2_TR(0x476647);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476648:{NFSU2_TR(0x476648);
__builtin_memmove((R+28),(R+4),4);
}
B47664a:{NFSU2_TR(0x47664a);
__builtin_memmove((R+4),(R+24),4);
}
B47664c:{NFSU2_TR(0x47664c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47664full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47664f:L47664f:{c.instructions+=4;NFSU2_TR(0x47664f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476651:{NFSU2_TR(0x476651);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff0ull))));
}
B476657:{NFSU2_TR(0x476657);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47665d:{NFSU2_TR(0x47665d);
if(r1(R+518)){{goto L476673;}}
}
B47665f:L47665f:{c.instructions+=3;NFSU2_TR(0x47665f);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476664:{NFSU2_TR(0x476664);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476666:{NFSU2_TR(0x476666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47666bull));
TAIL_STATIC(0x4691c0u,469);
}
B47666b:L47666b:{c.instructions+=4;NFSU2_TR(0x47666b);
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
B47666e:{NFSU2_TR(0x47666e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47666f:{NFSU2_TR(0x47666f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476670:{NFSU2_TR(0x476670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476673:L476673:{c.instructions+=4;NFSU2_TR(0x476673);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476679:{NFSU2_TR(0x476679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47667a:{NFSU2_TR(0x47667a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47667b:{NFSU2_TR(0x47667b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476680:L476680:{c.instructions+=7;NFSU2_TR(0x476680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476681:{NFSU2_TR(0x476681);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476685:{NFSU2_TR(0x476685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476687:{NFSU2_TR(0x476687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476688:{NFSU2_TR(0x476688);
__builtin_memmove((R+28),(R+4),4);
}
B47668a:{NFSU2_TR(0x47668a);
__builtin_memmove((R+4),(R+24),4);
}
B47668c:{NFSU2_TR(0x47668c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47668full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47668f:L47668f:{c.instructions+=2;NFSU2_TR(0x47668f);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(u32(0xfff0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B476695:{NFSU2_TR(0x476695);
if(r1(R+518)){{goto L4766ab;}}
}
B476697:L476697:{c.instructions+=3;NFSU2_TR(0x476697);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47669c:{NFSU2_TR(0x47669c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47669e:{NFSU2_TR(0x47669e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4766a3ull));
TAIL_STATIC(0x4691c0u,469);
}
B4766a3:L4766a3:{c.instructions+=4;NFSU2_TR(0x4766a3);
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
B4766a6:{NFSU2_TR(0x4766a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4766a7:{NFSU2_TR(0x4766a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4766a8:{NFSU2_TR(0x4766a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4766ab:L4766ab:{c.instructions+=4;NFSU2_TR(0x4766ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766b1:{NFSU2_TR(0x4766b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4766b2:{NFSU2_TR(0x4766b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4766b3:{NFSU2_TR(0x4766b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4766c0:L4766c0:{c.instructions+=3;NFSU2_TR(0x4766c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4766c1:{NFSU2_TR(0x4766c1);
__builtin_memmove((R+24),(R+4),4);
}
B4766c3:{NFSU2_TR(0x4766c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4766c8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4766c8:L4766c8:{c.instructions+=12;NFSU2_TR(0x4766c8);
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
B4766ca:{NFSU2_TR(0x4766ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4766d0:{NFSU2_TR(0x4766d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766d6:{NFSU2_TR(0x4766d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766dc:{NFSU2_TR(0x4766dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766e2:{NFSU2_TR(0x4766e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766e8:{NFSU2_TR(0x4766e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4766ee:{NFSU2_TR(0x4766ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4766f2:{NFSU2_TR(0x4766f2);
u8 U[4];
w4(U+0,u32(0x78b650ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4766f8:{NFSU2_TR(0x4766f8);
__builtin_memmove((R+0),(R+24),4);
}
B4766fa:{NFSU2_TR(0x4766fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4766fb:{NFSU2_TR(0x4766fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476700:L476700:{c.instructions+=15;NFSU2_TR(0x476700);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476702:{NFSU2_TR(0x476702);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476707:{NFSU2_TR(0x476707);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47670d:{NFSU2_TR(0x47670d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47670e:{NFSU2_TR(0x47670e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476715:{NFSU2_TR(0x476715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B476718:{NFSU2_TR(0x476718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476719:{NFSU2_TR(0x476719);
__builtin_memmove((R+24),(R+4),4);
}
B47671b:{NFSU2_TR(0x47671b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47671c:{NFSU2_TR(0x47671c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476720:{NFSU2_TR(0x476720);
u8 U[4];
w4(U+0,u32(0x78b650ull));
s4(u32(r4(R+24)),r4(U+0));
}
B476726:{NFSU2_TR(0x476726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47672c:{NFSU2_TR(0x47672c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47672e:{NFSU2_TR(0x47672e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476736:{NFSU2_TR(0x476736);
if(r1(R+518)){{goto L476766;}}
}
B476738:L476738:{c.instructions+=3;NFSU2_TR(0x476738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47673a:{NFSU2_TR(0x47673a);
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
B47673c:{NFSU2_TR(0x47673c);
if(r1(R+518)){{goto L476743;}}
}
B47673e:L47673e:{c.instructions+=1;NFSU2_TR(0x47673e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476743ull));
TAIL_STATIC(0x735550u,735);
}
B476743:L476743:{c.instructions+=3;NFSU2_TR(0x476743);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B476747:{NFSU2_TR(0x476747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476748:{NFSU2_TR(0x476748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47674dull));
TAIL_STATIC(0x734df0u,734);
}
B47674d:L47674d:{c.instructions+=2;NFSU2_TR(0x47674d);
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
B476750:{NFSU2_TR(0x476750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476755ull));
TAIL_STATIC(0x734e40u,734);
}
B476755:L476755:{c.instructions+=5;NFSU2_TR(0x476755);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476759:{NFSU2_TR(0x476759);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47675b:{NFSU2_TR(0x47675b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47675d:{NFSU2_TR(0x47675d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47675e:{NFSU2_TR(0x47675e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476761ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476761:L476761:{c.instructions+=1;NFSU2_TR(0x476761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476766ull));
TAIL_STATIC(0x734e60u,734);
}
B476766:L476766:{c.instructions+=8;NFSU2_TR(0x476766);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47676a:{NFSU2_TR(0x47676a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476774:{NFSU2_TR(0x476774);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47677a:{NFSU2_TR(0x47677a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47677b:{NFSU2_TR(0x47677b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47677c:{NFSU2_TR(0x47677c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476783:{NFSU2_TR(0x476783);
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
B476786:{NFSU2_TR(0x476786);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476790:L476790:{c.instructions+=10;NFSU2_TR(0x476790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476791:{NFSU2_TR(0x476791);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476792:{NFSU2_TR(0x476792);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476793:{NFSU2_TR(0x476793);
__builtin_memmove((R+20),gp(0x82bebc),4);
}
B476799:{NFSU2_TR(0x476799);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47679a:{NFSU2_TR(0x47679a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47679e:{NFSU2_TR(0x47679e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47679f:{NFSU2_TR(0x47679f);
w4(R+4,u32(0x82bebcull));
}
B4767a4:{NFSU2_TR(0x4767a4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4767a6:{NFSU2_TR(0x4767a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4767abull));
TAIL_STATIC(0x502fd0u,502);
}
B4767ab:L4767ab:{c.instructions+=2;NFSU2_TR(0x4767ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767ad:{NFSU2_TR(0x4767ad);
if(r1(R+518)){{goto L476878;}}
}
B4767b3:L4767b3:{c.instructions+=8;NFSU2_TR(0x4767b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4767b6:{NFSU2_TR(0x4767b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4767b8:{NFSU2_TR(0x4767b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4767bc:{NFSU2_TR(0x4767bc);
__builtin_memmove((R+4),(R+8),4);
}
B4767be:{NFSU2_TR(0x4767be);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4767c1:{NFSU2_TR(0x4767c1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B4767c7:{NFSU2_TR(0x4767c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767c9:{NFSU2_TR(0x4767c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476830;}}
}
B4767cb:L4767cb:{c.instructions+=4;NFSU2_TR(0x4767cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4767cf:{NFSU2_TR(0x4767cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4767d2:{NFSU2_TR(0x4767d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767d5:{NFSU2_TR(0x4767d5);
if(r1(R+518)){{goto L4767dc;}}
}
B4767d7:L4767d7:{c.instructions+=2;NFSU2_TR(0x4767d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767da:{NFSU2_TR(0x4767da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4767ec;}}
}
B4767dc:L4767dc:{c.instructions+=5;NFSU2_TR(0x4767dc);
__builtin_memmove((R+4),(R+8),4);
}
B4767de:{NFSU2_TR(0x4767de);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4767e1:{NFSU2_TR(0x4767e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B4767e7:{NFSU2_TR(0x4767e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767ea:{NFSU2_TR(0x4767ea);
if(r1(R+518)){{goto L4767ff;}}
}
B4767ec:L4767ec:{c.instructions+=5;NFSU2_TR(0x4767ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4767ef:{NFSU2_TR(0x4767ef);
__builtin_memmove((R+4),(R+8),4);
}
B4767f1:{NFSU2_TR(0x4767f1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B4767f7:{NFSU2_TR(0x4767f7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4767f9:{NFSU2_TR(0x4767f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476830;}}
}
B4767fb:L4767fb:{c.instructions+=2;NFSU2_TR(0x4767fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4767fd:{NFSU2_TR(0x4767fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476801;}}
}
B4767ff:L4767ff:{c.instructions+=1;NFSU2_TR(0x4767ff);
__builtin_memmove((R+28),(R+12),4);
}
B476801:L476801:{c.instructions+=2;NFSU2_TR(0x476801);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476803:{NFSU2_TR(0x476803);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476830;}}
}
B476805:L476805:{c.instructions+=2;NFSU2_TR(0x476805);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476807:{NFSU2_TR(0x476807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47680b;}}
}
B476809:L476809:{c.instructions+=1;NFSU2_TR(0x476809);
__builtin_memmove((R+28),(R+12),4);
}
B47680b:L47680b:{c.instructions+=5;NFSU2_TR(0x47680b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47680d:{NFSU2_TR(0x47680d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B476810:{NFSU2_TR(0x476810);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B476816:{NFSU2_TR(0x476816);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476818:{NFSU2_TR(0x476818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47682e;}}
}
B47681a:L47681a:{c.instructions+=3;NFSU2_TR(0x47681a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47681d:{NFSU2_TR(0x47681d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47681f:{NFSU2_TR(0x47681f);
if(r1(R+518)){{goto L476830;}}
}
B476821:L476821:{c.instructions+=2;NFSU2_TR(0x476821);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476823:{NFSU2_TR(0x476823);
if(r1(R+518)){{goto L47682e;}}
}
B476825:L476825:{c.instructions+=3;NFSU2_TR(0x476825);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476828:{NFSU2_TR(0x476828);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47682a:{NFSU2_TR(0x47682a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476821u);}goto L476821;}}
}
B47682c:L47682c:{c.instructions+=1;NFSU2_TR(0x47682c);
{goto L476830;}
}
B47682e:L47682e:{c.instructions+=1;NFSU2_TR(0x47682e);
__builtin_memmove((R+28),(R+12),4);
}
B476830:L476830:{c.instructions+=3;NFSU2_TR(0x476830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B476833:{NFSU2_TR(0x476833);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476835:{NFSU2_TR(0x476835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4767b3u);}goto L4767b3;}}
}
B47683b:L47683b:{c.instructions+=2;NFSU2_TR(0x47683b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47683d:{NFSU2_TR(0x47683d);
if(r1(R+518)){{goto L476878;}}
}
B47683f:L47683f:{c.instructions+=3;NFSU2_TR(0x47683f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B476842:{NFSU2_TR(0x476842);
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
B476844:{NFSU2_TR(0x476844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47684a;}}
}
B476846:L476846:{c.instructions+=2;NFSU2_TR(0x476846);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B476848:{NFSU2_TR(0x476848);
{goto L476851;}
}
B47684a:L47684a:{c.instructions+=2;NFSU2_TR(0x47684a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47684c:{NFSU2_TR(0x47684c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47684eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B47684e:L47684e:{c.instructions+=1;NFSU2_TR(0x47684e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476851:L476851:{c.instructions+=16;NFSU2_TR(0x476851);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476855:{NFSU2_TR(0x476855);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476858:{NFSU2_TR(0x476858);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47685c:{NFSU2_TR(0x47685c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476860:{NFSU2_TR(0x476860);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B476863:{NFSU2_TR(0x476863);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B476865:{NFSU2_TR(0x476865);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B476868:{NFSU2_TR(0x476868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476869:{NFSU2_TR(0x476869);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47686b:{NFSU2_TR(0x47686b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47686c:{NFSU2_TR(0x47686c);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B47686f:{NFSU2_TR(0x47686f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476870:{NFSU2_TR(0x476870);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476873:{NFSU2_TR(0x476873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476874:{NFSU2_TR(0x476874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B476875:{NFSU2_TR(0x476875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476878:L476878:{c.instructions+=7;NFSU2_TR(0x476878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476879:{NFSU2_TR(0x476879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47687a:{NFSU2_TR(0x47687a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47687b:{NFSU2_TR(0x47687b);
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
B47687d:{NFSU2_TR(0x47687d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47687e:{NFSU2_TR(0x47687e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47687f:{NFSU2_TR(0x47687f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476890:L476890:{c.instructions+=10;NFSU2_TR(0x476890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476891:{NFSU2_TR(0x476891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476892:{NFSU2_TR(0x476892);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476893:{NFSU2_TR(0x476893);
__builtin_memmove((R+20),gp(0x82c6a4),4);
}
B476899:{NFSU2_TR(0x476899);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47689a:{NFSU2_TR(0x47689a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47689e:{NFSU2_TR(0x47689e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47689f:{NFSU2_TR(0x47689f);
w4(R+4,u32(0x82c6a4ull));
}
B4768a4:{NFSU2_TR(0x4768a4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4768a6:{NFSU2_TR(0x4768a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4768abull));
TAIL_STATIC(0x502fd0u,502);
}
B4768ab:L4768ab:{c.instructions+=2;NFSU2_TR(0x4768ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768ad:{NFSU2_TR(0x4768ad);
if(r1(R+518)){{goto L476978;}}
}
B4768b3:L4768b3:{c.instructions+=8;NFSU2_TR(0x4768b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4768b6:{NFSU2_TR(0x4768b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4768b8:{NFSU2_TR(0x4768b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4768bc:{NFSU2_TR(0x4768bc);
__builtin_memmove((R+4),(R+8),4);
}
B4768be:{NFSU2_TR(0x4768be);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4768c1:{NFSU2_TR(0x4768c1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffull))));
}
B4768c7:{NFSU2_TR(0x4768c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768c9:{NFSU2_TR(0x4768c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476930;}}
}
B4768cb:L4768cb:{c.instructions+=4;NFSU2_TR(0x4768cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4768cf:{NFSU2_TR(0x4768cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4768d2:{NFSU2_TR(0x4768d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768d5:{NFSU2_TR(0x4768d5);
if(r1(R+518)){{goto L4768dc;}}
}
B4768d7:L4768d7:{c.instructions+=2;NFSU2_TR(0x4768d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768da:{NFSU2_TR(0x4768da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4768ec;}}
}
B4768dc:L4768dc:{c.instructions+=5;NFSU2_TR(0x4768dc);
__builtin_memmove((R+4),(R+8),4);
}
B4768de:{NFSU2_TR(0x4768de);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4768e1:{NFSU2_TR(0x4768e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B4768e7:{NFSU2_TR(0x4768e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768ea:{NFSU2_TR(0x4768ea);
if(r1(R+518)){{goto L4768ff;}}
}
B4768ec:L4768ec:{c.instructions+=5;NFSU2_TR(0x4768ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4768ef:{NFSU2_TR(0x4768ef);
__builtin_memmove((R+4),(R+8),4);
}
B4768f1:{NFSU2_TR(0x4768f1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B4768f7:{NFSU2_TR(0x4768f7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4768f9:{NFSU2_TR(0x4768f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476930;}}
}
B4768fb:L4768fb:{c.instructions+=2;NFSU2_TR(0x4768fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4768fd:{NFSU2_TR(0x4768fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476901;}}
}
B4768ff:L4768ff:{c.instructions+=1;NFSU2_TR(0x4768ff);
__builtin_memmove((R+28),(R+12),4);
}
B476901:L476901:{c.instructions+=2;NFSU2_TR(0x476901);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476903:{NFSU2_TR(0x476903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476930;}}
}
B476905:L476905:{c.instructions+=2;NFSU2_TR(0x476905);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476907:{NFSU2_TR(0x476907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47690b;}}
}
B476909:L476909:{c.instructions+=1;NFSU2_TR(0x476909);
__builtin_memmove((R+28),(R+12),4);
}
B47690b:L47690b:{c.instructions+=5;NFSU2_TR(0x47690b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47690d:{NFSU2_TR(0x47690d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B476910:{NFSU2_TR(0x476910);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B476916:{NFSU2_TR(0x476916);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476918:{NFSU2_TR(0x476918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47692e;}}
}
B47691a:L47691a:{c.instructions+=3;NFSU2_TR(0x47691a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47691d:{NFSU2_TR(0x47691d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47691f:{NFSU2_TR(0x47691f);
if(r1(R+518)){{goto L476930;}}
}
B476921:L476921:{c.instructions+=2;NFSU2_TR(0x476921);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476923:{NFSU2_TR(0x476923);
if(r1(R+518)){{goto L47692e;}}
}
B476925:L476925:{c.instructions+=3;NFSU2_TR(0x476925);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476928:{NFSU2_TR(0x476928);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47692a:{NFSU2_TR(0x47692a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476921u);}goto L476921;}}
}
B47692c:L47692c:{c.instructions+=1;NFSU2_TR(0x47692c);
{goto L476930;}
}
B47692e:L47692e:{c.instructions+=1;NFSU2_TR(0x47692e);
__builtin_memmove((R+28),(R+12),4);
}
B476930:L476930:{c.instructions+=3;NFSU2_TR(0x476930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B476933:{NFSU2_TR(0x476933);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476935:{NFSU2_TR(0x476935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4768b3u);}goto L4768b3;}}
}
B47693b:L47693b:{c.instructions+=2;NFSU2_TR(0x47693b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47693d:{NFSU2_TR(0x47693d);
if(r1(R+518)){{goto L476978;}}
}
B47693f:L47693f:{c.instructions+=3;NFSU2_TR(0x47693f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B476942:{NFSU2_TR(0x476942);
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
B476944:{NFSU2_TR(0x476944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47694a;}}
}
B476946:L476946:{c.instructions+=2;NFSU2_TR(0x476946);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B476948:{NFSU2_TR(0x476948);
{goto L476951;}
}
B47694a:L47694a:{c.instructions+=2;NFSU2_TR(0x47694a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47694c:{NFSU2_TR(0x47694c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47694eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B47694e:L47694e:{c.instructions+=1;NFSU2_TR(0x47694e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476951:L476951:{c.instructions+=16;NFSU2_TR(0x476951);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476955:{NFSU2_TR(0x476955);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476958:{NFSU2_TR(0x476958);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47695c:{NFSU2_TR(0x47695c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476960:{NFSU2_TR(0x476960);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B476963:{NFSU2_TR(0x476963);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B476965:{NFSU2_TR(0x476965);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B476968:{NFSU2_TR(0x476968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476969:{NFSU2_TR(0x476969);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47696b:{NFSU2_TR(0x47696b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47696c:{NFSU2_TR(0x47696c);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B47696f:{NFSU2_TR(0x47696f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476970:{NFSU2_TR(0x476970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476973:{NFSU2_TR(0x476973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476974:{NFSU2_TR(0x476974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B476975:{NFSU2_TR(0x476975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476978:L476978:{c.instructions+=7;NFSU2_TR(0x476978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476979:{NFSU2_TR(0x476979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47697a:{NFSU2_TR(0x47697a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47697b:{NFSU2_TR(0x47697b);
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
B47697d:{NFSU2_TR(0x47697d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47697e:{NFSU2_TR(0x47697e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47697f:{NFSU2_TR(0x47697f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476990:L476990:{c.instructions+=6;NFSU2_TR(0x476990);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476991:{NFSU2_TR(0x476991);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476992:{NFSU2_TR(0x476992);
__builtin_memmove((R+12),(R+4),4);
}
B476994:{NFSU2_TR(0x476994);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476997:{NFSU2_TR(0x476997);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B47699a:{NFSU2_TR(0x47699a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4769a3;}}
}
B47699c:L47699c:{c.instructions+=4;NFSU2_TR(0x47699c);
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
B47699e:{NFSU2_TR(0x47699e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47699f:{NFSU2_TR(0x47699f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4769a0:{NFSU2_TR(0x4769a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4769a3:L4769a3:{c.instructions+=7;NFSU2_TR(0x4769a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4769a4:{NFSU2_TR(0x4769a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4769a5:{NFSU2_TR(0x4769a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4769a6:{NFSU2_TR(0x4769a6);
__builtin_memmove((R+28),gp(0x82bec4),4);
}
B4769ac:{NFSU2_TR(0x4769ac);
w4(R+4,u32(0x82bec4ull));
}
B4769b1:{NFSU2_TR(0x4769b1);
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
B4769b3:{NFSU2_TR(0x4769b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4769b8ull));
TAIL_STATIC(0x502fd0u,502);
}
B4769b8:L4769b8:{c.instructions+=3;NFSU2_TR(0x4769b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4769ba:{NFSU2_TR(0x4769ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4769be:{NFSU2_TR(0x4769be);
if(r1(R+518)){{goto L476a12;}}
}
B4769c0:L4769c0:{c.instructions+=2;NFSU2_TR(0x4769c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4769c3:{NFSU2_TR(0x4769c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4769c7:L4769c7:{c.instructions+=4;NFSU2_TR(0x4769c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4769ca:{NFSU2_TR(0x4769ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4769ce:{NFSU2_TR(0x4769ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4769d0:{NFSU2_TR(0x4769d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a06;}}
}
B4769d2:L4769d2:{c.instructions+=2;NFSU2_TR(0x4769d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4769d4:{NFSU2_TR(0x4769d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4769d8;}}
}
B4769d6:L4769d6:{c.instructions+=1;NFSU2_TR(0x4769d6);
__builtin_memmove((R+24),(R+8),4);
}
B4769d8:L4769d8:{c.instructions+=4;NFSU2_TR(0x4769d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4769da:{NFSU2_TR(0x4769da);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B4769e0:{NFSU2_TR(0x4769e0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4769e2:{NFSU2_TR(0x4769e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a06;}}
}
B4769e4:L4769e4:{c.instructions+=4;NFSU2_TR(0x4769e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4769e6:{NFSU2_TR(0x4769e6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B4769ec:{NFSU2_TR(0x4769ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4769ee:{NFSU2_TR(0x4769ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a04;}}
}
B4769f0:L4769f0:{c.instructions+=3;NFSU2_TR(0x4769f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4769f3:{NFSU2_TR(0x4769f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4769f5:{NFSU2_TR(0x4769f5);
if(r1(R+518)){{goto L476a06;}}
}
B4769f7:L4769f7:{c.instructions+=2;NFSU2_TR(0x4769f7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4769f9:{NFSU2_TR(0x4769f9);
if(r1(R+518)){{goto L476a04;}}
}
B4769fb:L4769fb:{c.instructions+=3;NFSU2_TR(0x4769fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4769fe:{NFSU2_TR(0x4769fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476a00:{NFSU2_TR(0x476a00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4769f7u);}goto L4769f7;}}
}
B476a02:L476a02:{c.instructions+=1;NFSU2_TR(0x476a02);
{goto L476a06;}
}
B476a04:L476a04:{c.instructions+=1;NFSU2_TR(0x476a04);
__builtin_memmove((R+24),(R+8),4);
}
B476a06:L476a06:{c.instructions+=3;NFSU2_TR(0x476a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B476a08:{NFSU2_TR(0x476a08);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476a0c:{NFSU2_TR(0x476a0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4769c7u);}goto L4769c7;}}
}
B476a0e:L476a0e:{c.instructions+=2;NFSU2_TR(0x476a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476a10:{NFSU2_TR(0x476a10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a1c;}}
}
B476a12:L476a12:{c.instructions+=7;NFSU2_TR(0x476a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476a13:{NFSU2_TR(0x476a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476a14:{NFSU2_TR(0x476a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476a15:{NFSU2_TR(0x476a15);
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
B476a17:{NFSU2_TR(0x476a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476a18:{NFSU2_TR(0x476a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B476a19:{NFSU2_TR(0x476a19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476a1c:L476a1c:{c.instructions+=3;NFSU2_TR(0x476a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476a1f:{NFSU2_TR(0x476a1f);
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
B476a21:{NFSU2_TR(0x476a21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a27;}}
}
B476a23:L476a23:{c.instructions+=2;NFSU2_TR(0x476a23);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B476a25:{NFSU2_TR(0x476a25);
{goto L476a2e;}
}
B476a27:L476a27:{c.instructions+=2;NFSU2_TR(0x476a27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a29:{NFSU2_TR(0x476a29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476a2bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B476a2b:L476a2b:{c.instructions+=1;NFSU2_TR(0x476a2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476a2e:L476a2e:{c.instructions+=9;NFSU2_TR(0x476a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a31:{NFSU2_TR(0x476a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476a34:{NFSU2_TR(0x476a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a37:{NFSU2_TR(0x476a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476a3a:{NFSU2_TR(0x476a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a3d:{NFSU2_TR(0x476a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a40:{NFSU2_TR(0x476a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476a43:{NFSU2_TR(0x476a43);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476a45:{NFSU2_TR(0x476a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476a59;}}
}
B476a47:L476a47:{c.instructions+=10;NFSU2_TR(0x476a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476a4a:{NFSU2_TR(0x476a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476a4b:{NFSU2_TR(0x476a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476a4c:{NFSU2_TR(0x476a4c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476a4d:{NFSU2_TR(0x476a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476a4e:{NFSU2_TR(0x476a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a51:{NFSU2_TR(0x476a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a54:{NFSU2_TR(0x476a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476a55:{NFSU2_TR(0x476a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B476a56:{NFSU2_TR(0x476a56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476a59:L476a59:{c.instructions+=3;NFSU2_TR(0x476a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476a5c:{NFSU2_TR(0x476a5c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476a5e:{NFSU2_TR(0x476a5e);
if(r1(R+518)){{goto L476a6a;}}
}
B476a60:L476a60:{c.instructions+=4;NFSU2_TR(0x476a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476a63:{NFSU2_TR(0x476a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476a66:{NFSU2_TR(0x476a66);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476a68:{NFSU2_TR(0x476a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476a60u);}goto L476a60;}}
}
B476a6a:L476a6a:{c.instructions+=11;NFSU2_TR(0x476a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a6d:{NFSU2_TR(0x476a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a70:{NFSU2_TR(0x476a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476a73:{NFSU2_TR(0x476a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476a74:{NFSU2_TR(0x476a74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476a75:{NFSU2_TR(0x476a75);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476a76:{NFSU2_TR(0x476a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476a77:{NFSU2_TR(0x476a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476a7a:{NFSU2_TR(0x476a7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476a7b:{NFSU2_TR(0x476a7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B476a7c:{NFSU2_TR(0x476a7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476a80:L476a80:{c.instructions+=7;NFSU2_TR(0x476a80);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476a85:{NFSU2_TR(0x476a85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a86:{NFSU2_TR(0x476a86);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B476a88:{NFSU2_TR(0x476a88);
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
B476a8a:{NFSU2_TR(0x476a8a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a8b:{NFSU2_TR(0x476a8b);
__builtin_memmove((R+20),(R+4),4);
}
B476a8d:{NFSU2_TR(0x476a8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L476ade;}}
}
B476a8f:L476a8f:{c.instructions+=2;NFSU2_TR(0x476a8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a90:{NFSU2_TR(0x476a90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a91:L476a91:{c.instructions+=3;NFSU2_TR(0x476a91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476a92:{NFSU2_TR(0x476a92);
w4(R+4,u32(0x89e7a0ull));
}
B476a97:{NFSU2_TR(0x476a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476a9cull));
TAIL_STATIC(0x5ed900u,5ed);
}
B476a9c:L476a9c:{c.instructions+=3;NFSU2_TR(0x476a9c);
__builtin_memmove((R+28),(R+0),4);
}
B476a9e:{NFSU2_TR(0x476a9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476aa2:{NFSU2_TR(0x476aa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476ad2;}}
}
B476aa4:L476aa4:{c.instructions+=3;NFSU2_TR(0x476aa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B476aaa:{NFSU2_TR(0x476aaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B476aac:{NFSU2_TR(0x476aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476ad2;}}
}
B476aae:L476aae:{c.instructions+=4;NFSU2_TR(0x476aae);
u8 U[4];
w4(U+0,u32(0x5fffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ab3:{NFSU2_TR(0x476ab3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ab5:{NFSU2_TR(0x476ab5);
__builtin_memmove((R+4),(R+20),4);
}
B476ab7:{NFSU2_TR(0x476ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476abcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476abc:L476abc:{c.instructions+=5;NFSU2_TR(0x476abc);
__builtin_memmove((R+24),(R+0),4);
}
B476abe:{NFSU2_TR(0x476abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476ac0:{NFSU2_TR(0x476ac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ac1:{NFSU2_TR(0x476ac1);
__builtin_memmove((R+4),(R+24),4);
}
B476ac3:{NFSU2_TR(0x476ac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ac6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476ac6:L476ac6:{c.instructions+=4;NFSU2_TR(0x476ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476ac8:{NFSU2_TR(0x476ac8);
u8 U[4];
w4(U+0,u32(0x5fffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476acd:{NFSU2_TR(0x476acd);
__builtin_memmove((R+4),(R+24),4);
}
B476acf:{NFSU2_TR(0x476acf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ad2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476ad2:L476ad2:{c.instructions+=4;NFSU2_TR(0x476ad2);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476ad7:{NFSU2_TR(0x476ad7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B476ad8:{NFSU2_TR(0x476ad8);
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
B476ada:{NFSU2_TR(0x476ada);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476a91u);}goto L476a91;}}
}
B476adc:L476adc:{c.instructions+=2;NFSU2_TR(0x476adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476add:{NFSU2_TR(0x476add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476ade:L476ade:{c.instructions+=3;NFSU2_TR(0x476ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B476adf:{NFSU2_TR(0x476adf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476ae0:{NFSU2_TR(0x476ae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476af0:L476af0:{c.instructions+=9;NFSU2_TR(0x476af0);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476af5:{NFSU2_TR(0x476af5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476af6:{NFSU2_TR(0x476af6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476af7:{NFSU2_TR(0x476af7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476af8:{NFSU2_TR(0x476af8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B476afa:{NFSU2_TR(0x476afa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B476afc:{NFSU2_TR(0x476afc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476afe:{NFSU2_TR(0x476afe);
__builtin_memmove((R+12),(R+4),4);
}
B476b00:{NFSU2_TR(0x476b00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L476b28;}}
}
B476b02:L476b02:{c.instructions+=3;NFSU2_TR(0x476b02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b03:{NFSU2_TR(0x476b03);
w4(R+4,u32(0x89e7a0ull));
}
B476b08:{NFSU2_TR(0x476b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b0dull));
TAIL_STATIC(0x5ed900u,5ed);
}
B476b0d:L476b0d:{c.instructions+=2;NFSU2_TR(0x476b0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476b11:{NFSU2_TR(0x476b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476b14;}}
}
B476b13:L476b13:{c.instructions+=1;NFSU2_TR(0x476b13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B476b14:L476b14:{c.instructions+=4;NFSU2_TR(0x476b14);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476b19:{NFSU2_TR(0x476b19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B476b1a:{NFSU2_TR(0x476b1a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B476b1c:{NFSU2_TR(0x476b1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476b02u);}goto L476b02;}}
}
B476b1e:L476b1e:{c.instructions+=2;NFSU2_TR(0x476b1e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B476b21:{NFSU2_TR(0x476b21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L476b28;}}
}
B476b23:L476b23:{c.instructions+=1;NFSU2_TR(0x476b23);
w4(R+28,u32(0x6ull));
}
B476b28:L476b28:{c.instructions+=2;NFSU2_TR(0x476b28);
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
B476b2a:{NFSU2_TR(0x476b2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L476b47;}}
}
B476b2c:L476b2c:{c.instructions+=2;NFSU2_TR(0x476b2c);
__builtin_memmove((R+24),(R+28),4);
}
B476b2e:{NFSU2_TR(0x476b2e);
__builtin_memmove((R+28),(R+28),4);
}
B476b30:L476b30:{c.instructions+=4;NFSU2_TR(0x476b30);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b32:{NFSU2_TR(0x476b32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b34:{NFSU2_TR(0x476b34);
__builtin_memmove((R+4),(R+12),4);
}
B476b36:{NFSU2_TR(0x476b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476b3b:L476b3b:{c.instructions+=4;NFSU2_TR(0x476b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476b3d:{NFSU2_TR(0x476b3d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b3f:{NFSU2_TR(0x476b3f);
__builtin_memmove((R+4),(R+0),4);
}
B476b41:{NFSU2_TR(0x476b41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b44ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476b44:L476b44:{c.instructions+=2;NFSU2_TR(0x476b44);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476b45:{NFSU2_TR(0x476b45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476b30u);}goto L476b30;}}
}
B476b47:L476b47:{c.instructions+=4;NFSU2_TR(0x476b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476b48:{NFSU2_TR(0x476b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476b49:{NFSU2_TR(0x476b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476b4a:{NFSU2_TR(0x476b4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476b50:L476b50:{c.instructions+=8;NFSU2_TR(0x476b50);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476b55:{NFSU2_TR(0x476b55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b56:{NFSU2_TR(0x476b56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b57:{NFSU2_TR(0x476b57);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B476b59:{NFSU2_TR(0x476b59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476b5b:{NFSU2_TR(0x476b5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b5c:{NFSU2_TR(0x476b5c);
__builtin_memmove((R+28),(R+4),4);
}
B476b5e:{NFSU2_TR(0x476b5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L476b9d;}}
}
B476b60:L476b60:{c.instructions+=3;NFSU2_TR(0x476b60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b61:{NFSU2_TR(0x476b61);
w4(R+4,u32(0x89e7a0ull));
}
B476b66:{NFSU2_TR(0x476b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b6bull));
TAIL_STATIC(0x5ed900u,5ed);
}
B476b6b:L476b6b:{c.instructions+=3;NFSU2_TR(0x476b6b);
__builtin_memmove((R+24),(R+0),4);
}
B476b6d:{NFSU2_TR(0x476b6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476b71:{NFSU2_TR(0x476b71);
if(r1(R+518)){{goto L476b7d;}}
}
B476b73:L476b73:{c.instructions+=3;NFSU2_TR(0x476b73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B476b79:{NFSU2_TR(0x476b79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B476b7b:{NFSU2_TR(0x476b7b);
if(r1(R+518)){{goto L476b93;}}
}
B476b7d:L476b7d:{c.instructions+=4;NFSU2_TR(0x476b7d);
u8 U[4];
w4(U+0,u32(0x802dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b82:{NFSU2_TR(0x476b82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b84:{NFSU2_TR(0x476b84);
__builtin_memmove((R+4),(R+28),4);
}
B476b86:{NFSU2_TR(0x476b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476b8b:L476b8b:{c.instructions+=4;NFSU2_TR(0x476b8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476b8d:{NFSU2_TR(0x476b8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476b8e:{NFSU2_TR(0x476b8e);
__builtin_memmove((R+4),(R+0),4);
}
B476b90:{NFSU2_TR(0x476b90);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476b93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476b93:L476b93:{c.instructions+=4;NFSU2_TR(0x476b93);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B476b98:{NFSU2_TR(0x476b98);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B476b99:{NFSU2_TR(0x476b99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B476b9b:{NFSU2_TR(0x476b9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476b60u);}goto L476b60;}}
}
B476b9d:L476b9d:{c.instructions+=2;NFSU2_TR(0x476b9d);
__builtin_memmove((R+4),(R+28),4);
}
B476b9f:{NFSU2_TR(0x476b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ba4ull));
TAIL_STATIC(0x463f60u,463);
}
B476ba4:L476ba4:{c.instructions+=3;NFSU2_TR(0x476ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476ba7:{NFSU2_TR(0x476ba7);
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
B476ba9:{NFSU2_TR(0x476ba9);
if(r1(R+518)){{goto L476bc3;}}
}
B476bab:L476bab:{c.instructions+=1;NFSU2_TR(0x476bab);
{goto L476bb0;}
}
B476bb0:L476bb0:{c.instructions+=4;NFSU2_TR(0x476bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476bb2:{NFSU2_TR(0x476bb2);
u8 U[4];
w4(U+0,u32(0x802dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476bb7:{NFSU2_TR(0x476bb7);
__builtin_memmove((R+4),(R+24),4);
}
B476bb9:{NFSU2_TR(0x476bb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476bbcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476bbc:L476bbc:{c.instructions+=3;NFSU2_TR(0x476bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476bbf:{NFSU2_TR(0x476bbf);
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
B476bc1:{NFSU2_TR(0x476bc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476bb0u);}goto L476bb0;}}
}
B476bc3:L476bc3:{c.instructions+=4;NFSU2_TR(0x476bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476bc4:{NFSU2_TR(0x476bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476bc5:{NFSU2_TR(0x476bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476bc6:{NFSU2_TR(0x476bc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476bd0:L476bd0:{c.instructions+=8;NFSU2_TR(0x476bd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476bd1:{NFSU2_TR(0x476bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B476bd4:{NFSU2_TR(0x476bd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476bd5:{NFSU2_TR(0x476bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B476bd9:{NFSU2_TR(0x476bd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476bda:{NFSU2_TR(0x476bda);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B476bdc:{NFSU2_TR(0x476bdc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B476bde:{NFSU2_TR(0x476bde);
if(r1(R+518)){{goto L476bef;}}
}
B476be0:L476be0:{c.instructions+=4;NFSU2_TR(0x476be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476be2:{NFSU2_TR(0x476be2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476be3:{NFSU2_TR(0x476be3);
__builtin_memmove((R+4),(R+12),4);
}
B476be5:{NFSU2_TR(0x476be5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476be8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476be8:L476be8:{c.instructions+=3;NFSU2_TR(0x476be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B476beb:{NFSU2_TR(0x476beb);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B476bed:{NFSU2_TR(0x476bed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476be0u);}goto L476be0;}}
}
B476bef:L476bef:{c.instructions+=4;NFSU2_TR(0x476bef);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B476bf5:{NFSU2_TR(0x476bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476bfb:{NFSU2_TR(0x476bfb);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B476bff:{NFSU2_TR(0x476bff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L476d81;}}
}
B476c05:L476c05:{c.instructions+=3;NFSU2_TR(0x476c05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c07:{NFSU2_TR(0x476c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476c0b:{NFSU2_TR(0x476c0b);
if(r1(R+518)){{goto L476c39;}}
}
B476c0d:L476c0d:{c.instructions+=3;NFSU2_TR(0x476c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476c10:{NFSU2_TR(0x476c10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c12:{NFSU2_TR(0x476c12);
if(r1(R+518)){{goto L476c39;}}
}
B476c14:L476c14:{c.instructions+=2;NFSU2_TR(0x476c14);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B476c17:{NFSU2_TR(0x476c17);
if(r1(R+518)){{goto L476c22;}}
}
B476c19:L476c19:{c.instructions+=3;NFSU2_TR(0x476c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476c1c:{NFSU2_TR(0x476c1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c1e:{NFSU2_TR(0x476c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476c14u);}goto L476c14;}}
}
B476c20:L476c20:{c.instructions+=1;NFSU2_TR(0x476c20);
{goto L476c39;}
}
B476c22:L476c22:{c.instructions+=2;NFSU2_TR(0x476c22);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c24:{NFSU2_TR(0x476c24);
if(r1(R+518)){{goto L476c39;}}
}
B476c26:L476c26:{c.instructions+=3;NFSU2_TR(0x476c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476c2c:{NFSU2_TR(0x476c2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476c2d:{NFSU2_TR(0x476c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476c32ull));
TAIL_STATIC(0x458f00u,458);
}
B476c32:L476c32:{c.instructions+=2;NFSU2_TR(0x476c32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476c35:{NFSU2_TR(0x476c35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476c39:L476c39:{c.instructions+=4;NFSU2_TR(0x476c39);
__builtin_memmove((R+4),gp(0x82a5a0),4);
}
B476c3f:{NFSU2_TR(0x476c3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B476c41:{NFSU2_TR(0x476c41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c43:{NFSU2_TR(0x476c43);
if(r1(R+518)){{goto L476c4a;}}
}
B476c45:L476c45:{c.instructions+=1;NFSU2_TR(0x476c45);
w4(R+0,u32(0x1ull));
}
B476c4a:L476c4a:{c.instructions+=2;NFSU2_TR(0x476c4a);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a5a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c50:{NFSU2_TR(0x476c50);
if(r1(R+518)){{goto L476c53;}}
}
B476c52:L476c52:{c.instructions+=1;NFSU2_TR(0x476c52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476c53:L476c53:{c.instructions+=2;NFSU2_TR(0x476c53);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a5a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c59:{NFSU2_TR(0x476c59);
if(r1(R+518)){{goto L476c5c;}}
}
B476c5b:L476c5b:{c.instructions+=1;NFSU2_TR(0x476c5b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476c5c:L476c5c:{c.instructions+=2;NFSU2_TR(0x476c5c);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a5ac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c62:{NFSU2_TR(0x476c62);
if(r1(R+518)){{goto L476c65;}}
}
B476c64:L476c64:{c.instructions+=1;NFSU2_TR(0x476c64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476c65:L476c65:{c.instructions+=2;NFSU2_TR(0x476c65);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a5b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c6b:{NFSU2_TR(0x476c6b);
if(r1(R+518)){{goto L476c6e;}}
}
B476c6d:L476c6d:{c.instructions+=1;NFSU2_TR(0x476c6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476c6e:L476c6e:{c.instructions+=2;NFSU2_TR(0x476c6e);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a5b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B476c74:{NFSU2_TR(0x476c74);
if(r1(R+518)){{goto L476c77;}}
}
B476c76:L476c76:{c.instructions+=1;NFSU2_TR(0x476c76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476c77:L476c77:{c.instructions+=2;NFSU2_TR(0x476c77);
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
B476c7a:{NFSU2_TR(0x476c7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L476d81;}}
}
B476c80:L476c80:{c.instructions+=2;NFSU2_TR(0x476c80);
w4(R+12,u32(0x3ull));
}
B476c85:{NFSU2_TR(0x476c85);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B476c87:L476c87:{c.instructions+=3;NFSU2_TR(0x476c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476c8b:{NFSU2_TR(0x476c8b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B476c8d:{NFSU2_TR(0x476c8d);
if(r1(R+518)){{goto L476cb9;}}
}
B476c8f:L476c8f:{c.instructions+=2;NFSU2_TR(0x476c8f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B476c90:{NFSU2_TR(0x476c90);
if(r1(R+518)){{goto L476ca9;}}
}
B476c92:L476c92:{c.instructions+=2;NFSU2_TR(0x476c92);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B476c93:{NFSU2_TR(0x476c93);
if(r1(R+518)){{goto L476c99;}}
}
B476c95:L476c95:{c.instructions+=2;NFSU2_TR(0x476c95);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B476c97:{NFSU2_TR(0x476c97);
{goto L476cca;}
}
B476c99:L476c99:{c.instructions+=2;NFSU2_TR(0x476c99);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476c9b:{NFSU2_TR(0x476c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ca0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B476ca0:L476ca0:{c.instructions+=2;NFSU2_TR(0x476ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecb14ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B476ca7:{NFSU2_TR(0x476ca7);
{goto L476cc7;}
}
B476ca9:L476ca9:{c.instructions+=2;NFSU2_TR(0x476ca9);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476cab:{NFSU2_TR(0x476cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476cb0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B476cb0:L476cb0:{c.instructions+=2;NFSU2_TR(0x476cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecae4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B476cb7:{NFSU2_TR(0x476cb7);
{goto L476cc7;}
}
B476cb9:L476cb9:{c.instructions+=2;NFSU2_TR(0x476cb9);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476cbb:{NFSU2_TR(0x476cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476cc0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B476cc0:L476cc0:{c.instructions+=1;NFSU2_TR(0x476cc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecaa8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B476cc7:L476cc7:{c.instructions+=1;NFSU2_TR(0x476cc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476cca:L476cca:{c.instructions+=46;NFSU2_TR(0x476cca);
__builtin_memmove((R+4),gp(0x7ed928),4);
}
B476cd0:{NFSU2_TR(0x476cd0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B476cd3:{NFSU2_TR(0x476cd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f0de0ull))));
}
B476cd8:{NFSU2_TR(0x476cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B476cda:{NFSU2_TR(0x476cda);
s4(0x7ed928,u32(u32(m4(0x7ed928))+u32(u32(0x4ull))));
}
B476ce1:{NFSU2_TR(0x476ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476ce3:{NFSU2_TR(0x476ce3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B476ce6:{NFSU2_TR(0x476ce6);
w4(R+4,u32(0x1ull));
}
B476ceb:{NFSU2_TR(0x476ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476cf1:{NFSU2_TR(0x476cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476cf3:{NFSU2_TR(0x476cf3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B476cf6:{NFSU2_TR(0x476cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476cfc:{NFSU2_TR(0x476cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476cfe:{NFSU2_TR(0x476cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B476d01:{NFSU2_TR(0x476d01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B476d04:{NFSU2_TR(0x476d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d0a:{NFSU2_TR(0x476d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476d0c:{NFSU2_TR(0x476d0c);
__builtin_memmove((R+4),gp(0x7ed164),4);
}
B476d12:{NFSU2_TR(0x476d12);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B476d15:{NFSU2_TR(0x476d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d1b:{NFSU2_TR(0x476d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476d1d:{NFSU2_TR(0x476d1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B476d20:{NFSU2_TR(0x476d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d26:{NFSU2_TR(0x476d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476d28:{NFSU2_TR(0x476d28);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B476d2b:{NFSU2_TR(0x476d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d31:{NFSU2_TR(0x476d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476d33:{NFSU2_TR(0x476d33);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B476d36:{NFSU2_TR(0x476d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d3c:{NFSU2_TR(0x476d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476d3e:{NFSU2_TR(0x476d3e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B476d41:{NFSU2_TR(0x476d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d47:{NFSU2_TR(0x476d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476d49:{NFSU2_TR(0x476d49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B476d4c:{NFSU2_TR(0x476d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d52:{NFSU2_TR(0x476d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B476d54:{NFSU2_TR(0x476d54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B476d57:{NFSU2_TR(0x476d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476d5d:{NFSU2_TR(0x476d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476d5f:{NFSU2_TR(0x476d5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B476d62:{NFSU2_TR(0x476d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0c0ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B476d6c:{NFSU2_TR(0x476d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B476d6e:{NFSU2_TR(0x476d6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B476d6f:{NFSU2_TR(0x476d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476d70:{NFSU2_TR(0x476d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B476d72:{NFSU2_TR(0x476d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476d77ull));
TAIL_STATIC(0x463af0u,463);
}
B476d77:L476d77:{c.instructions+=3;NFSU2_TR(0x476d77);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476d7a:{NFSU2_TR(0x476d7a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476d7b:{NFSU2_TR(0x476d7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476c87u);}goto L476c87;}}
}
B476d81:L476d81:{c.instructions+=4;NFSU2_TR(0x476d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476d82:{NFSU2_TR(0x476d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476d83:{NFSU2_TR(0x476d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476d84:{NFSU2_TR(0x476d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476d90:L476d90:{c.instructions+=7;NFSU2_TR(0x476d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476d91:{NFSU2_TR(0x476d91);
__builtin_memmove((R+24),(R+4),4);
}
B476d93:{NFSU2_TR(0x476d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476d96:{NFSU2_TR(0x476d96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476d97:{NFSU2_TR(0x476d97);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B476d99:{NFSU2_TR(0x476d99);
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
B476d9b:{NFSU2_TR(0x476d9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L476dbc;}}
}
B476d9d:L476d9d:{c.instructions+=1;NFSU2_TR(0x476d9d);
__builtin_memmove((R+4),(R+4),4);
}
B476da0:L476da0:{c.instructions+=4;NFSU2_TR(0x476da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476da2:{NFSU2_TR(0x476da2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476da4:{NFSU2_TR(0x476da4);
__builtin_memmove((R+4),(R+24),4);
}
B476da6:{NFSU2_TR(0x476da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476dabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476dab:L476dab:{c.instructions+=4;NFSU2_TR(0x476dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476dad:{NFSU2_TR(0x476dad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476daf:{NFSU2_TR(0x476daf);
__builtin_memmove((R+4),(R+0),4);
}
B476db1:{NFSU2_TR(0x476db1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476db4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476db4:L476db4:{c.instructions+=4;NFSU2_TR(0x476db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476db7:{NFSU2_TR(0x476db7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B476db8:{NFSU2_TR(0x476db8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B476dba:{NFSU2_TR(0x476dba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476da0u);}goto L476da0;}}
}
B476dbc:L476dbc:{c.instructions+=3;NFSU2_TR(0x476dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476dbd:{NFSU2_TR(0x476dbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476dbe:{NFSU2_TR(0x476dbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476dd0:L476dd0:{c.instructions+=5;NFSU2_TR(0x476dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476dd1:{NFSU2_TR(0x476dd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476dd2:{NFSU2_TR(0x476dd2);
__builtin_memmove((R+28),(R+4),4);
}
B476dd4:{NFSU2_TR(0x476dd4);
w4(R+24,u32(0x6ull));
}
B476dd9:{NFSU2_TR(0x476dd9);
__builtin_memmove((R+16),(R+16),4);
}
B476de0:L476de0:{c.instructions+=4;NFSU2_TR(0x476de0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476de2:{NFSU2_TR(0x476de2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476de4:{NFSU2_TR(0x476de4);
__builtin_memmove((R+4),(R+28),4);
}
B476de6:{NFSU2_TR(0x476de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476debull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476deb:L476deb:{c.instructions+=4;NFSU2_TR(0x476deb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476ded:{NFSU2_TR(0x476ded);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476def:{NFSU2_TR(0x476def);
__builtin_memmove((R+4),(R+0),4);
}
B476df1:{NFSU2_TR(0x476df1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476df4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476df4:L476df4:{c.instructions+=2;NFSU2_TR(0x476df4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476df5:{NFSU2_TR(0x476df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476de0u);}goto L476de0;}}
}
B476df7:L476df7:{c.instructions+=3;NFSU2_TR(0x476df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476df8:{NFSU2_TR(0x476df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476df9:{NFSU2_TR(0x476df9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476e00:L476e00:{c.instructions+=6;NFSU2_TR(0x476e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476e01:{NFSU2_TR(0x476e01);
__builtin_memmove((R+24),(R+4),4);
}
B476e03:{NFSU2_TR(0x476e03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476e04:{NFSU2_TR(0x476e04);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B476e0a:{NFSU2_TR(0x476e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476e11:{NFSU2_TR(0x476e11);
w4(R+28,u32(0x3ull));
}
B476e16:L476e16:{c.instructions+=4;NFSU2_TR(0x476e16);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476e18:{NFSU2_TR(0x476e18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476e1a:{NFSU2_TR(0x476e1a);
__builtin_memmove((R+4),(R+24),4);
}
B476e1c:{NFSU2_TR(0x476e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476e21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476e21:L476e21:{c.instructions+=4;NFSU2_TR(0x476e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476e23:{NFSU2_TR(0x476e23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476e25:{NFSU2_TR(0x476e25);
__builtin_memmove((R+4),(R+0),4);
}
B476e27:{NFSU2_TR(0x476e27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476e2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476e2a:L476e2a:{c.instructions+=2;NFSU2_TR(0x476e2a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B476e2b:{NFSU2_TR(0x476e2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476e16u);}goto L476e16;}}
}
B476e2d:L476e2d:{c.instructions+=4;NFSU2_TR(0x476e2d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B476e32:{NFSU2_TR(0x476e32);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B476e34:{NFSU2_TR(0x476e34);
__builtin_memmove((R+8),gp(0x890108),4);
}
B476e3a:{NFSU2_TR(0x476e3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476e40;}}
}
B476e3c:L476e3c:{c.instructions+=2;NFSU2_TR(0x476e3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476e3e:{NFSU2_TR(0x476e3e);
if(r1(R+518)){{goto L476e82;}}
}
B476e40:L476e40:{c.instructions+=3;NFSU2_TR(0x476e40);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B476e46:{NFSU2_TR(0x476e46);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1130ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1130ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1130ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476e4c:{NFSU2_TR(0x476e4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L476e56;}}
}
B476e4e:L476e4e:{c.instructions+=2;NFSU2_TR(0x476e4e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1194ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1194ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1194ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476e54:{NFSU2_TR(0x476e54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L476e68;}}
}
B476e56:L476e56:{c.instructions+=5;NFSU2_TR(0x476e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476e57:{NFSU2_TR(0x476e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7ed6d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476e5e:{NFSU2_TR(0x476e5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x5ull));
s2(u32(r4(U+0)),r2(U+4));
}
B476e64:{NFSU2_TR(0x476e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476e65:{NFSU2_TR(0x476e65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476e68:L476e68:{c.instructions+=2;NFSU2_TR(0x476e68);
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
B476e6a:{NFSU2_TR(0x476e6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476e70;}}
}
B476e6c:L476e6c:{c.instructions+=2;NFSU2_TR(0x476e6c);
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
B476e6e:{NFSU2_TR(0x476e6e);
if(r1(R+518)){{goto L476e82;}}
}
B476e70:L476e70:{c.instructions+=5;NFSU2_TR(0x476e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476e71:{NFSU2_TR(0x476e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7ed718ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476e78:{NFSU2_TR(0x476e78);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x6ull));
s2(u32(r4(U+0)),r2(U+4));
}
B476e7e:{NFSU2_TR(0x476e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476e7f:{NFSU2_TR(0x476e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476e82:L476e82:{c.instructions+=3;NFSU2_TR(0x476e82);
__builtin_memmove((R+0),gp(0x89e7e1),1);
}
B476e87:{NFSU2_TR(0x476e87);
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
B476e89:{NFSU2_TR(0x476e89);
if(r1(R+518)){{goto L476e9d;}}
}
B476e8b:L476e8b:{c.instructions+=5;NFSU2_TR(0x476e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476e8c:{NFSU2_TR(0x476e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7ed760ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476e93:{NFSU2_TR(0x476e93);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B476e99:{NFSU2_TR(0x476e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476e9a:{NFSU2_TR(0x476e9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476e9d:L476e9d:{c.instructions+=5;NFSU2_TR(0x476e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476e9e:{NFSU2_TR(0x476e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7ed690ull));
s4(u32(r4(U+0)),r4(U+4));
}
B476ea5:{NFSU2_TR(0x476ea5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w2(U+4,u16(0x6ull));
s2(u32(r4(U+0)),r2(U+4));
}
B476eab:{NFSU2_TR(0x476eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476eac:{NFSU2_TR(0x476eac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476eb0:L476eb0:{c.instructions+=5;NFSU2_TR(0x476eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476eb1:{NFSU2_TR(0x476eb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476eb2:{NFSU2_TR(0x476eb2);
__builtin_memmove((R+28),(R+4),4);
}
B476eb4:{NFSU2_TR(0x476eb4);
w4(R+0,u32(0x7ed7a0ull));
}
B476eb9:{NFSU2_TR(0x476eb9);
__builtin_memmove((R+16),(R+16),4);
}
B476ec0:L476ec0:{c.instructions+=4;NFSU2_TR(0x476ec0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B476ec6:{NFSU2_TR(0x476ec6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B476ec9:{NFSU2_TR(0x476ec9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ed8c0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ed8c0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B476ece:{NFSU2_TR(0x476ece);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476ec0u);}goto L476ec0;}}
}
B476ed0:L476ed0:{c.instructions+=1;NFSU2_TR(0x476ed0);
w4(R+24,u32(0x6ull));
}
B476ed5:L476ed5:{c.instructions+=4;NFSU2_TR(0x476ed5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ed7:{NFSU2_TR(0x476ed7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ed9:{NFSU2_TR(0x476ed9);
__builtin_memmove((R+4),(R+28),4);
}
B476edb:{NFSU2_TR(0x476edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ee0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476ee0:L476ee0:{c.instructions+=4;NFSU2_TR(0x476ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476ee2:{NFSU2_TR(0x476ee2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476ee4:{NFSU2_TR(0x476ee4);
__builtin_memmove((R+4),(R+0),4);
}
B476ee6:{NFSU2_TR(0x476ee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476ee9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476ee9:L476ee9:{c.instructions+=2;NFSU2_TR(0x476ee9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476eea:{NFSU2_TR(0x476eea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476ed5u);}goto L476ed5;}}
}
B476eec:L476eec:{c.instructions+=3;NFSU2_TR(0x476eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476eed:{NFSU2_TR(0x476eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476eee:{NFSU2_TR(0x476eee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476f00:L476f00:{c.instructions+=5;NFSU2_TR(0x476f00);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B476f05:{NFSU2_TR(0x476f05);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476f0a:{NFSU2_TR(0x476f0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f0b:{NFSU2_TR(0x476f0b);
__builtin_memmove((R+28),(R+4),4);
}
B476f0d:{NFSU2_TR(0x476f0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L476f38;}}
}
B476f0f:L476f0f:{c.instructions+=2;NFSU2_TR(0x476f0f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1067ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1067ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1067ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476f14:{NFSU2_TR(0x476f14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L476f38;}}
}
B476f16:L476f16:{c.instructions+=3;NFSU2_TR(0x476f16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f17:{NFSU2_TR(0x476f17);
w4(R+24,u32(0x5ull));
}
B476f1c:{NFSU2_TR(0x476f1c);
__builtin_memmove((R+16),(R+16),4);
}
B476f20:L476f20:{c.instructions+=4;NFSU2_TR(0x476f20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f22:{NFSU2_TR(0x476f22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f24:{NFSU2_TR(0x476f24);
__builtin_memmove((R+4),(R+28),4);
}
B476f26:{NFSU2_TR(0x476f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476f2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476990u);}goto L476990;}
}
B476f2b:L476f2b:{c.instructions+=4;NFSU2_TR(0x476f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476f2d:{NFSU2_TR(0x476f2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f2f:{NFSU2_TR(0x476f2f);
__builtin_memmove((R+4),(R+0),4);
}
B476f31:{NFSU2_TR(0x476f31);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476f34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476f34:L476f34:{c.instructions+=2;NFSU2_TR(0x476f34);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B476f35:{NFSU2_TR(0x476f35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476f20u);}goto L476f20;}}
}
B476f37:L476f37:{c.instructions+=1;NFSU2_TR(0x476f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476f38:L476f38:{c.instructions+=2;NFSU2_TR(0x476f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476f39:{NFSU2_TR(0x476f39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476f40:L476f40:{c.instructions+=3;NFSU2_TR(0x476f40);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B476f45:{NFSU2_TR(0x476f45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f46:{NFSU2_TR(0x476f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476f4bull));
TAIL_STATIC(0x43e910u,43e);
}
B476f4b:L476f4b:{c.instructions+=3;NFSU2_TR(0x476f4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B476f4e:{NFSU2_TR(0x476f4e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x43cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x43cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B476f53:{NFSU2_TR(0x476f53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L476f7a;}}
}
B476f55:L476f55:{c.instructions+=6;NFSU2_TR(0x476f55);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B476f5b:{NFSU2_TR(0x476f5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B476f5e:{NFSU2_TR(0x476f5e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B476f64:{NFSU2_TR(0x476f64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f65:{NFSU2_TR(0x476f65);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f67:{NFSU2_TR(0x476f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476f6cull));
TAIL_STATIC(0x440820u,440);
}
B476f6c:L476f6c:{c.instructions+=3;NFSU2_TR(0x476f6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B476f6f:{NFSU2_TR(0x476f6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476f71:{NFSU2_TR(0x476f71);
if(r1(R+518)){{goto L476f7a;}}
}
B476f73:L476f73:{c.instructions+=2;NFSU2_TR(0x476f73);
__builtin_memmove((R+4),(R+0),4);
}
B476f75:{NFSU2_TR(0x476f75);
TAIL_STATIC(0x4649e0u,464);
}
B476f7a:L476f7a:{c.instructions+=2;NFSU2_TR(0x476f7a);
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
B476f7c:{NFSU2_TR(0x476f7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476f80:L476f80:{c.instructions+=7;NFSU2_TR(0x476f80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f81:{NFSU2_TR(0x476f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B476f85:{NFSU2_TR(0x476f85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f86:{NFSU2_TR(0x476f86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f87:{NFSU2_TR(0x476f87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476f88:{NFSU2_TR(0x476f88);
__builtin_memmove((R+24),(R+4),4);
}
B476f8a:{NFSU2_TR(0x476f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476f8full));
TAIL_STATIC(0x464ad0u,464);
}
B476f8f:L476f8f:{c.instructions+=3;NFSU2_TR(0x476f8f);
__builtin_memmove((R+28),(R+0),4);
}
B476f91:{NFSU2_TR(0x476f91);
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
B476f93:{NFSU2_TR(0x476f93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476fe3;}}
}
B476f95:L476f95:{c.instructions+=2;NFSU2_TR(0x476f95);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B476f98:{NFSU2_TR(0x476f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476fa0;}}
}
B476f9a:L476f9a:{c.instructions+=4;NFSU2_TR(0x476f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476f9b:{NFSU2_TR(0x476f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476f9c:{NFSU2_TR(0x476f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476f9d:{NFSU2_TR(0x476f9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476fa0:L476fa0:{c.instructions+=5;NFSU2_TR(0x476fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476fa3:{NFSU2_TR(0x476fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476fa6:{NFSU2_TR(0x476fa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476fa7:{NFSU2_TR(0x476fa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476fa8:{NFSU2_TR(0x476fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476fadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476890u);}goto L476890;}
}
B476fad:L476fad:{c.instructions+=5;NFSU2_TR(0x476fad);
__builtin_memmove((R+28),(R+0),4);
}
B476faf:{NFSU2_TR(0x476faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B476fb1:{NFSU2_TR(0x476fb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B476fb2:{NFSU2_TR(0x476fb2);
__builtin_memmove((R+4),(R+28),4);
}
B476fb4:{NFSU2_TR(0x476fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x476fb7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B476fb7:L476fb7:{c.instructions+=3;NFSU2_TR(0x476fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476fba:{NFSU2_TR(0x476fba);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476fbc:{NFSU2_TR(0x476fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L476fcc;}}
}
B476fbe:L476fbe:{c.instructions+=7;NFSU2_TR(0x476fbe);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B476fc1:{NFSU2_TR(0x476fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476fc4:{NFSU2_TR(0x476fc4);
__builtin_memmove((R+0),(R+28),4);
}
B476fc6:{NFSU2_TR(0x476fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476fc7:{NFSU2_TR(0x476fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476fc8:{NFSU2_TR(0x476fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476fc9:{NFSU2_TR(0x476fc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476fcc:L476fcc:{c.instructions+=3;NFSU2_TR(0x476fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476fcf:{NFSU2_TR(0x476fcf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476fd1:{NFSU2_TR(0x476fd1);
if(r1(R+518)){{goto L476fdd;}}
}
B476fd3:L476fd3:{c.instructions+=4;NFSU2_TR(0x476fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B476fd6:{NFSU2_TR(0x476fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B476fd9:{NFSU2_TR(0x476fd9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B476fdb:{NFSU2_TR(0x476fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x476fd3u);}goto L476fd3;}}
}
B476fdd:L476fdd:{c.instructions+=2;NFSU2_TR(0x476fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476fe0:{NFSU2_TR(0x476fe0);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B476fe3:L476fe3:{c.instructions+=5;NFSU2_TR(0x476fe3);
__builtin_memmove((R+0),(R+28),4);
}
B476fe5:{NFSU2_TR(0x476fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B476fe6:{NFSU2_TR(0x476fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B476fe7:{NFSU2_TR(0x476fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B476fe8:{NFSU2_TR(0x476fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B476ff0:L476ff0:{c.instructions+=6;NFSU2_TR(0x476ff0);
__builtin_memmove((R+0),(R+4),4);
}
B476ff2:{NFSU2_TR(0x476ff2);
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
B476ff4:{NFSU2_TR(0x476ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476ff7:{NFSU2_TR(0x476ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476ffa:{NFSU2_TR(0x476ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B476ffd:{NFSU2_TR(0x476ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x477000u,477);
}
XIT:NFSU2_TR_EXIT(0x476,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
