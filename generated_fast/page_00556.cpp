#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x556,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x556,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_556(u8* __restrict R,Cpu& c);
u32 page_556(Cpu& c){return body_556(c.regs.data(),c);}
__attribute__((noinline)) u32 body_556(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x556003:goto L556003;
case 0x556004:c.instructions+=4;goto B556004;
case 0x556005:c.instructions+=3;goto B556005;
case 0x55600c:c.instructions+=2;goto B55600c;
case 0x55600f:c.instructions+=1;goto B55600f;
case 0x556020:goto L556020;
case 0x556021:c.instructions+=9;goto B556021;
case 0x556022:c.instructions+=8;goto B556022;
case 0x556023:c.instructions+=7;goto B556023;
case 0x556024:c.instructions+=6;goto B556024;
case 0x556028:c.instructions+=5;goto B556028;
case 0x55602a:c.instructions+=4;goto B55602a;
case 0x55602d:c.instructions+=3;goto B55602d;
case 0x55602f:c.instructions+=2;goto B55602f;
case 0x556035:c.instructions+=1;goto B556035;
case 0x55603b:goto L55603b;
case 0x556041:goto L556041;
case 0x556047:c.instructions+=1;goto B556047;
case 0x55604d:goto L55604d;
case 0x556053:goto L556053;
case 0x556059:c.instructions+=1;goto B556059;
case 0x55605f:goto L55605f;
case 0x556061:goto L556061;
case 0x556067:c.instructions+=1;goto B556067;
case 0x556069:goto L556069;
case 0x55606f:c.instructions+=1;goto B55606f;
case 0x556075:goto L556075;
case 0x556078:c.instructions+=2;goto B556078;
case 0x55607a:c.instructions+=1;goto B55607a;
case 0x55607c:goto L55607c;
case 0x55607f:c.instructions+=2;goto B55607f;
case 0x556081:c.instructions+=1;goto B556081;
case 0x556083:goto L556083;
case 0x556086:c.instructions+=4;goto B556086;
case 0x556088:c.instructions+=3;goto B556088;
case 0x556089:c.instructions+=2;goto B556089;
case 0x55608a:c.instructions+=1;goto B55608a;
case 0x55608d:goto L55608d;
case 0x556091:c.instructions+=8;goto B556091;
case 0x556095:c.instructions+=7;goto B556095;
case 0x556099:c.instructions+=6;goto B556099;
case 0x55609a:c.instructions+=5;goto B55609a;
case 0x55609b:c.instructions+=4;goto B55609b;
case 0x55609c:c.instructions+=3;goto B55609c;
case 0x55609d:c.instructions+=2;goto B55609d;
case 0x55609f:c.instructions+=1;goto B55609f;
case 0x5560a4:goto L5560a4;
case 0x5560a7:c.instructions+=2;goto B5560a7;
case 0x5560a9:c.instructions+=1;goto B5560a9;
case 0x5560ab:goto L5560ab;
case 0x5560ae:c.instructions+=2;goto B5560ae;
case 0x5560b0:c.instructions+=1;goto B5560b0;
case 0x5560b6:goto L5560b6;
case 0x5560bc:c.instructions+=1;goto B5560bc;
case 0x5560c2:goto L5560c2;
case 0x5560c7:c.instructions+=1;goto B5560c7;
case 0x5560cc:goto L5560cc;
case 0x5560cf:c.instructions+=4;goto B5560cf;
case 0x5560d2:c.instructions+=3;goto B5560d2;
case 0x5560d4:c.instructions+=2;goto B5560d4;
case 0x5560d5:c.instructions+=1;goto B5560d5;
case 0x5560d8:goto L5560d8;
case 0x5560dd:goto L5560dd;
case 0x5560e0:c.instructions+=5;goto B5560e0;
case 0x5560e2:c.instructions+=4;goto B5560e2;
case 0x5560e7:c.instructions+=3;goto B5560e7;
case 0x5560ec:c.instructions+=2;goto B5560ec;
case 0x5560ed:c.instructions+=1;goto B5560ed;
case 0x5560f2:goto L5560f2;
case 0x5560f5:c.instructions+=1;goto B5560f5;
case 0x5560fa:goto L5560fa;
case 0x556100:c.instructions+=1;goto B556100;
case 0x556102:goto L556102;
case 0x556108:c.instructions+=1;goto B556108;
case 0x55610e:goto L55610e;
case 0x556111:c.instructions+=2;goto B556111;
case 0x556113:c.instructions+=1;goto B556113;
case 0x556119:goto L556119;
case 0x55611c:c.instructions+=2;goto B55611c;
case 0x55611e:c.instructions+=1;goto B55611e;
case 0x556124:goto L556124;
case 0x556129:c.instructions+=1;goto B556129;
case 0x55612e:goto L55612e;
case 0x556131:c.instructions+=2;goto B556131;
case 0x556133:c.instructions+=1;goto B556133;
case 0x556139:goto L556139;
case 0x55613c:c.instructions+=2;goto B55613c;
case 0x55613e:c.instructions+=1;goto B55613e;
case 0x556144:goto L556144;
case 0x556147:c.instructions+=3;goto B556147;
case 0x556149:c.instructions+=2;goto B556149;
case 0x55614a:c.instructions+=1;goto B55614a;
case 0x55614d:goto L55614d;
case 0x556150:c.instructions+=3;goto B556150;
case 0x556152:c.instructions+=2;goto B556152;
case 0x556157:c.instructions+=1;goto B556157;
case 0x55615a:goto L55615a;
case 0x55615f:goto L55615f;
case 0x556165:c.instructions+=2;goto B556165;
case 0x556167:c.instructions+=1;goto B556167;
case 0x55616d:goto L55616d;
case 0x556173:c.instructions+=4;goto B556173;
case 0x556175:c.instructions+=3;goto B556175;
case 0x556177:c.instructions+=2;goto B556177;
case 0x556179:c.instructions+=1;goto B556179;
case 0x55617b:goto L55617b;
case 0x556180:goto L556180;
case 0x556185:c.instructions+=2;goto B556185;
case 0x55618a:c.instructions+=1;goto B55618a;
case 0x55618f:goto L55618f;
case 0x556194:goto L556194;
case 0x556199:c.instructions+=2;goto B556199;
case 0x55619e:c.instructions+=1;goto B55619e;
case 0x5561a3:goto L5561a3;
case 0x5561a9:c.instructions+=1;goto B5561a9;
case 0x5561af:goto L5561af;
case 0x5561b5:goto L5561b5;
case 0x5561bb:c.instructions+=1;goto B5561bb;
case 0x5561bd:goto L5561bd;
case 0x5561c3:c.instructions+=1;goto B5561c3;
case 0x5561c9:goto L5561c9;
case 0x5561cc:c.instructions+=2;goto B5561cc;
case 0x5561ce:c.instructions+=1;goto B5561ce;
case 0x5561d4:goto L5561d4;
case 0x5561d7:c.instructions+=2;goto B5561d7;
case 0x5561d9:c.instructions+=1;goto B5561d9;
case 0x5561df:goto L5561df;
case 0x5561e1:c.instructions+=1;goto B5561e1;
case 0x5561e4:goto L5561e4;
case 0x5561e7:c.instructions+=3;goto B5561e7;
case 0x5561e9:c.instructions+=2;goto B5561e9;
case 0x5561ee:c.instructions+=1;goto B5561ee;
case 0x5561f1:goto L5561f1;
case 0x5561f6:goto L5561f6;
case 0x5561fb:c.instructions+=8;goto B5561fb;
case 0x556201:c.instructions+=7;goto B556201;
case 0x556205:c.instructions+=6;goto B556205;
case 0x556209:c.instructions+=5;goto B556209;
case 0x55620f:c.instructions+=4;goto B55620f;
case 0x556215:c.instructions+=3;goto B556215;
case 0x556217:c.instructions+=2;goto B556217;
case 0x55621a:c.instructions+=1;goto B55621a;
case 0x556220:goto L556220;
case 0x556223:c.instructions+=3;goto B556223;
case 0x556228:c.instructions+=2;goto B556228;
case 0x55622a:c.instructions+=1;goto B55622a;
case 0x55622f:goto L55622f;
case 0x556235:c.instructions+=13;goto B556235;
case 0x556237:c.instructions+=12;goto B556237;
case 0x556238:c.instructions+=11;goto B556238;
case 0x55623e:c.instructions+=10;goto B55623e;
case 0x556244:c.instructions+=9;goto B556244;
case 0x556245:c.instructions+=8;goto B556245;
case 0x556248:c.instructions+=7;goto B556248;
case 0x55624b:c.instructions+=6;goto B55624b;
case 0x55624c:c.instructions+=5;goto B55624c;
case 0x55624f:c.instructions+=4;goto B55624f;
case 0x556250:c.instructions+=3;goto B556250;
case 0x556251:c.instructions+=2;goto B556251;
case 0x556253:c.instructions+=1;goto B556253;
case 0x556258:goto L556258;
case 0x55625a:c.instructions+=2;goto B55625a;
case 0x556261:c.instructions+=1;goto B556261;
case 0x556266:goto L556266;
case 0x55626b:goto L55626b;
case 0x556271:c.instructions+=1;goto B556271;
case 0x556277:goto L556277;
case 0x55627c:c.instructions+=1;goto B55627c;
case 0x556281:goto L556281;
case 0x556287:c.instructions+=1;goto B556287;
case 0x55628d:goto L55628d;
case 0x556293:c.instructions+=2;goto B556293;
case 0x556295:c.instructions+=1;goto B556295;
case 0x55629b:goto L55629b;
case 0x5562a1:c.instructions+=4;goto B5562a1;
case 0x5562a3:c.instructions+=3;goto B5562a3;
case 0x5562a5:c.instructions+=2;goto B5562a5;
case 0x5562a7:c.instructions+=1;goto B5562a7;
case 0x5562a9:goto L5562a9;
case 0x5562ae:goto L5562ae;
case 0x5562b3:c.instructions+=2;goto B5562b3;
case 0x5562b5:c.instructions+=1;goto B5562b5;
case 0x5562ba:goto L5562ba;
case 0x5562bf:goto L5562bf;
case 0x5562c4:c.instructions+=2;goto B5562c4;
case 0x5562c6:c.instructions+=1;goto B5562c6;
case 0x5562cb:goto L5562cb;
case 0x5562d1:c.instructions+=1;goto B5562d1;
case 0x5562d7:goto L5562d7;
case 0x5562dd:goto L5562dd;
case 0x5562e3:c.instructions+=1;goto B5562e3;
case 0x5562e5:goto L5562e5;
case 0x5562e7:goto L5562e7;
case 0x5562ed:c.instructions+=1;goto B5562ed;
case 0x5562ef:goto L5562ef;
case 0x5562f5:c.instructions+=1;goto B5562f5;
case 0x5562fb:goto L5562fb;
case 0x5562fe:c.instructions+=5;goto B5562fe;
case 0x556300:c.instructions+=4;goto B556300;
case 0x556305:c.instructions+=3;goto B556305;
case 0x55630a:c.instructions+=2;goto B55630a;
case 0x55630b:c.instructions+=1;goto B55630b;
case 0x556310:goto L556310;
case 0x556313:c.instructions+=1;goto B556313;
case 0x556318:goto L556318;
case 0x55631a:c.instructions+=1;goto B55631a;
case 0x55631f:goto L55631f;
case 0x556324:goto L556324;
case 0x556326:c.instructions+=1;goto B556326;
case 0x55632b:goto L55632b;
case 0x556330:goto L556330;
case 0x556336:c.instructions+=1;goto B556336;
case 0x55633c:goto L55633c;
case 0x55633e:c.instructions+=3;goto B55633e;
case 0x556345:c.instructions+=2;goto B556345;
case 0x55634f:c.instructions+=1;goto B55634f;
case 0x556354:goto L556354;
case 0x556356:c.instructions+=2;goto B556356;
case 0x556358:c.instructions+=1;goto B556358;
case 0x55635b:goto L55635b;
case 0x556360:goto L556360;
case 0x556363:c.instructions+=2;goto B556363;
case 0x556365:c.instructions+=1;goto B556365;
case 0x55636b:goto L55636b;
case 0x55636e:c.instructions+=2;goto B55636e;
case 0x556370:c.instructions+=1;goto B556370;
case 0x556376:goto L556376;
case 0x556379:c.instructions+=4;goto B556379;
case 0x55637b:c.instructions+=3;goto B55637b;
case 0x55637c:c.instructions+=2;goto B55637c;
case 0x55637d:c.instructions+=1;goto B55637d;
case 0x556380:goto L556380;
case 0x556383:c.instructions+=2;goto B556383;
case 0x556384:c.instructions+=1;goto B556384;
case 0x556389:goto L556389;
case 0x55638c:c.instructions+=3;goto B55638c;
case 0x55638e:c.instructions+=2;goto B55638e;
case 0x556390:c.instructions+=1;goto B556390;
case 0x556393:goto L556393;
case 0x556398:goto L556398;
case 0x55639e:c.instructions+=1;goto B55639e;
case 0x5563a0:goto L5563a0;
case 0x5563a2:goto L5563a2;
case 0x5563a8:c.instructions+=1;goto B5563a8;
case 0x5563aa:goto L5563aa;
case 0x5563b0:c.instructions+=1;goto B5563b0;
case 0x5563b6:goto L5563b6;
case 0x5563b9:c.instructions+=5;goto B5563b9;
case 0x5563bb:c.instructions+=4;goto B5563bb;
case 0x5563c0:c.instructions+=3;goto B5563c0;
case 0x5563c5:c.instructions+=2;goto B5563c5;
case 0x5563c6:c.instructions+=1;goto B5563c6;
case 0x5563cb:goto L5563cb;
case 0x5563ce:c.instructions+=2;goto B5563ce;
case 0x5563d5:c.instructions+=1;goto B5563d5;
case 0x5563d7:goto L5563d7;
case 0x5563d9:c.instructions+=1;goto B5563d9;
case 0x5563de:goto L5563de;
case 0x5563e0:goto L5563e0;
case 0x5563e3:c.instructions+=2;goto B5563e3;
case 0x5563e5:c.instructions+=1;goto B5563e5;
case 0x5563ea:goto L5563ea;
case 0x5563ec:c.instructions+=2;goto B5563ec;
case 0x5563ee:c.instructions+=1;goto B5563ee;
case 0x5563f1:goto L5563f1;
case 0x5563f3:goto L5563f3;
case 0x5563f9:c.instructions+=1;goto B5563f9;
case 0x5563fb:goto L5563fb;
case 0x5563fe:c.instructions+=5;goto B5563fe;
case 0x556400:c.instructions+=4;goto B556400;
case 0x556405:c.instructions+=3;goto B556405;
case 0x55640a:c.instructions+=2;goto B55640a;
case 0x55640b:c.instructions+=1;goto B55640b;
case 0x556410:goto L556410;
case 0x556413:c.instructions+=9;goto B556413;
case 0x556416:c.instructions+=8;goto B556416;
case 0x556418:c.instructions+=7;goto B556418;
case 0x55641a:c.instructions+=6;goto B55641a;
case 0x55641f:c.instructions+=5;goto B55641f;
case 0x556424:c.instructions+=4;goto B556424;
case 0x556425:c.instructions+=3;goto B556425;
case 0x556428:c.instructions+=2;goto B556428;
case 0x556429:c.instructions+=1;goto B556429;
case 0x55642e:goto L55642e;
case 0x556430:c.instructions+=3;goto B556430;
case 0x556433:c.instructions+=2;goto B556433;
case 0x556435:c.instructions+=1;goto B556435;
case 0x556438:goto L556438;
case 0x55643d:c.instructions+=2;goto B55643d;
case 0x55643f:c.instructions+=1;goto B55643f;
case 0x556444:goto L556444;
case 0x556446:c.instructions+=3;goto B556446;
case 0x556448:c.instructions+=2;goto B556448;
case 0x55644a:c.instructions+=1;goto B55644a;
case 0x55644d:goto L55644d;
case 0x556454:goto L556454;
case 0x556456:goto L556456;
case 0x55645c:c.instructions+=2;goto B55645c;
case 0x55645e:c.instructions+=1;goto B55645e;
case 0x556460:goto L556460;
case 0x556462:c.instructions+=1;goto B556462;
case 0x556464:goto L556464;
case 0x556467:c.instructions+=3;goto B556467;
case 0x55646f:c.instructions+=2;goto B55646f;
case 0x556472:c.instructions+=1;goto B556472;
case 0x556474:goto L556474;
case 0x55647a:c.instructions+=2;goto B55647a;
case 0x55647b:c.instructions+=1;goto B55647b;
case 0x556480:goto L556480;
case 0x556481:c.instructions+=4;goto B556481;
case 0x556482:c.instructions+=3;goto B556482;
case 0x556483:c.instructions+=2;goto B556483;
case 0x556484:c.instructions+=1;goto B556484;
case 0x556490:goto L556490;
case 0x556491:c.instructions+=6;goto B556491;
case 0x556492:c.instructions+=5;goto B556492;
case 0x556493:c.instructions+=4;goto B556493;
case 0x556494:c.instructions+=3;goto B556494;
case 0x556499:c.instructions+=2;goto B556499;
case 0x55649b:c.instructions+=1;goto B55649b;
case 0x5564a0:goto L5564a0;
case 0x5564a2:c.instructions+=2;goto B5564a2;
case 0x5564a4:c.instructions+=1;goto B5564a4;
case 0x5564a6:goto L5564a6;
case 0x5564ab:c.instructions+=1;goto B5564ab;
case 0x5564b0:goto L5564b0;
case 0x5564b2:c.instructions+=3;goto B5564b2;
case 0x5564b5:c.instructions+=2;goto B5564b5;
case 0x5564b6:c.instructions+=1;goto B5564b6;
case 0x5564bb:goto L5564bb;
case 0x5564be:c.instructions+=5;goto B5564be;
case 0x5564c0:c.instructions+=4;goto B5564c0;
case 0x5564c5:c.instructions+=3;goto B5564c5;
case 0x5564ca:c.instructions+=2;goto B5564ca;
case 0x5564cb:c.instructions+=1;goto B5564cb;
case 0x5564d0:goto L5564d0;
case 0x5564d3:c.instructions+=3;goto B5564d3;
case 0x5564d8:c.instructions+=2;goto B5564d8;
case 0x5564d9:c.instructions+=1;goto B5564d9;
case 0x5564de:goto L5564de;
case 0x5564e4:c.instructions+=4;goto B5564e4;
case 0x5564e9:c.instructions+=3;goto B5564e9;
case 0x5564ec:c.instructions+=2;goto B5564ec;
case 0x5564ee:c.instructions+=1;goto B5564ee;
case 0x5564f0:goto L5564f0;
case 0x5564f6:c.instructions+=1;goto B5564f6;
case 0x5564f8:goto L5564f8;
case 0x5564fd:goto L5564fd;
case 0x556502:c.instructions+=1;goto B556502;
case 0x556507:goto L556507;
case 0x556509:c.instructions+=1;goto B556509;
case 0x55650b:goto L55650b;
case 0x556510:c.instructions+=1;goto B556510;
case 0x556515:goto L556515;
case 0x556516:c.instructions+=7;goto B556516;
case 0x556518:c.instructions+=6;goto B556518;
case 0x556519:c.instructions+=5;goto B556519;
case 0x55651a:c.instructions+=4;goto B55651a;
case 0x55651c:c.instructions+=3;goto B55651c;
case 0x556521:c.instructions+=2;goto B556521;
case 0x556523:c.instructions+=1;goto B556523;
case 0x556528:goto L556528;
case 0x55652b:c.instructions+=2;goto B55652b;
case 0x55652d:c.instructions+=1;goto B55652d;
case 0x55652f:goto L55652f;
case 0x556530:c.instructions+=1;goto B556530;
case 0x556535:goto L556535;
case 0x556538:c.instructions+=2;goto B556538;
case 0x55653a:c.instructions+=1;goto B55653a;
case 0x55653c:goto L55653c;
case 0x556541:c.instructions+=2;goto B556541;
case 0x556543:c.instructions+=1;goto B556543;
case 0x556548:goto L556548;
case 0x55654a:c.instructions+=1;goto B55654a;
case 0x55654c:goto L55654c;
case 0x556551:c.instructions+=2;goto B556551;
case 0x556553:c.instructions+=1;goto B556553;
case 0x556555:goto L556555;
case 0x556558:c.instructions+=3;goto B556558;
case 0x556559:c.instructions+=2;goto B556559;
case 0x55655e:c.instructions+=1;goto B55655e;
case 0x556563:goto L556563;
case 0x556565:c.instructions+=2;goto B556565;
case 0x556567:c.instructions+=1;goto B556567;
case 0x556569:goto L556569;
case 0x55656c:c.instructions+=2;goto B55656c;
case 0x55656e:c.instructions+=1;goto B55656e;
case 0x556570:goto L556570;
case 0x556575:c.instructions+=1;goto B556575;
case 0x55657a:goto L55657a;
case 0x55657d:c.instructions+=3;goto B55657d;
case 0x556580:c.instructions+=2;goto B556580;
case 0x556582:c.instructions+=1;goto B556582;
case 0x556584:goto L556584;
case 0x556587:c.instructions+=2;goto B556587;
case 0x556589:c.instructions+=1;goto B556589;
case 0x55658b:goto L55658b;
case 0x55658d:goto L55658d;
case 0x55658f:c.instructions+=1;goto B55658f;
case 0x556591:goto L556591;
case 0x556594:c.instructions+=1;goto B556594;
case 0x556596:goto L556596;
case 0x556598:c.instructions+=2;goto B556598;
case 0x55659b:c.instructions+=1;goto B55659b;
case 0x5565a0:goto L5565a0;
case 0x5565a3:c.instructions+=1;goto B5565a3;
case 0x5565a6:goto L5565a6;
case 0x5565a9:goto L5565a9;
case 0x5565ac:c.instructions+=2;goto B5565ac;
case 0x5565ae:c.instructions+=1;goto B5565ae;
case 0x5565b0:goto L5565b0;
case 0x5565b1:c.instructions+=1;goto B5565b1;
case 0x5565b6:goto L5565b6;
case 0x5565b9:c.instructions+=2;goto B5565b9;
case 0x5565bb:c.instructions+=1;goto B5565bb;
case 0x5565bd:goto L5565bd;
case 0x5565c2:c.instructions+=2;goto B5565c2;
case 0x5565c4:c.instructions+=1;goto B5565c4;
case 0x5565c9:goto L5565c9;
case 0x5565cb:c.instructions+=1;goto B5565cb;
case 0x5565cd:goto L5565cd;
case 0x5565d2:c.instructions+=2;goto B5565d2;
case 0x5565d4:c.instructions+=1;goto B5565d4;
case 0x5565d6:goto L5565d6;
case 0x5565d9:c.instructions+=3;goto B5565d9;
case 0x5565da:c.instructions+=2;goto B5565da;
case 0x5565df:c.instructions+=1;goto B5565df;
case 0x5565e4:goto L5565e4;
case 0x5565e6:c.instructions+=2;goto B5565e6;
case 0x5565e8:c.instructions+=1;goto B5565e8;
case 0x5565ea:goto L5565ea;
case 0x5565ed:c.instructions+=2;goto B5565ed;
case 0x5565ef:c.instructions+=1;goto B5565ef;
case 0x5565f1:goto L5565f1;
case 0x5565f6:c.instructions+=1;goto B5565f6;
case 0x5565fb:goto L5565fb;
case 0x5565fe:c.instructions+=3;goto B5565fe;
case 0x556601:c.instructions+=2;goto B556601;
case 0x556603:c.instructions+=1;goto B556603;
case 0x556605:goto L556605;
case 0x556608:c.instructions+=2;goto B556608;
case 0x55660a:c.instructions+=1;goto B55660a;
case 0x55660c:goto L55660c;
case 0x55660d:c.instructions+=4;goto B55660d;
case 0x55660e:c.instructions+=3;goto B55660e;
case 0x55660f:c.instructions+=2;goto B55660f;
case 0x556610:c.instructions+=1;goto B556610;
case 0x556611:goto L556611;
case 0x556613:c.instructions+=1;goto B556613;
case 0x556615:goto L556615;
case 0x556618:c.instructions+=1;goto B556618;
case 0x55661a:goto L55661a;
case 0x55661c:c.instructions+=2;goto B55661c;
case 0x55661f:c.instructions+=1;goto B55661f;
case 0x556624:goto L556624;
case 0x556627:c.instructions+=1;goto B556627;
case 0x55662a:goto L55662a;
case 0x55662d:goto L55662d;
case 0x55662e:c.instructions+=4;goto B55662e;
case 0x55662f:c.instructions+=3;goto B55662f;
case 0x556630:c.instructions+=2;goto B556630;
case 0x556631:c.instructions+=1;goto B556631;
case 0x556640:goto L556640;
case 0x556641:c.instructions+=15;goto B556641;
case 0x556643:c.instructions+=14;goto B556643;
case 0x556645:c.instructions+=13;goto B556645;
case 0x55664a:c.instructions+=12;goto B55664a;
case 0x556650:c.instructions+=11;goto B556650;
case 0x556651:c.instructions+=10;goto B556651;
case 0x556658:c.instructions+=9;goto B556658;
case 0x556659:c.instructions+=8;goto B556659;
case 0x55665c:c.instructions+=7;goto B55665c;
case 0x55665d:c.instructions+=6;goto B55665d;
case 0x55665e:c.instructions+=5;goto B55665e;
case 0x55665f:c.instructions+=4;goto B55665f;
case 0x556661:c.instructions+=3;goto B556661;
case 0x556662:c.instructions+=2;goto B556662;
case 0x556665:c.instructions+=1;goto B556665;
case 0x55666a:goto L55666a;
case 0x55666c:c.instructions+=19;goto B55666c;
case 0x556672:c.instructions+=18;goto B556672;
case 0x556678:c.instructions+=17;goto B556678;
case 0x55667e:c.instructions+=16;goto B55667e;
case 0x556681:c.instructions+=15;goto B556681;
case 0x556683:c.instructions+=14;goto B556683;
case 0x556686:c.instructions+=13;goto B556686;
case 0x556689:c.instructions+=12;goto B556689;
case 0x55668c:c.instructions+=11;goto B55668c;
case 0x55668f:c.instructions+=10;goto B55668f;
case 0x556692:c.instructions+=9;goto B556692;
case 0x556695:c.instructions+=8;goto B556695;
case 0x556698:c.instructions+=7;goto B556698;
case 0x55669b:c.instructions+=6;goto B55669b;
case 0x55669e:c.instructions+=5;goto B55669e;
case 0x5566a4:c.instructions+=4;goto B5566a4;
case 0x5566a7:c.instructions+=3;goto B5566a7;
case 0x5566a8:c.instructions+=2;goto B5566a8;
case 0x5566ac:c.instructions+=1;goto B5566ac;
case 0x5566b1:goto L5566b1;
case 0x5566b4:c.instructions+=2;goto B5566b4;
case 0x5566b6:c.instructions+=1;goto B5566b6;
case 0x5566b8:goto L5566b8;
case 0x5566bb:c.instructions+=1;goto B5566bb;
case 0x5566bd:goto L5566bd;
case 0x5566c2:c.instructions+=4;goto B5566c2;
case 0x5566c5:c.instructions+=3;goto B5566c5;
case 0x5566c8:c.instructions+=2;goto B5566c8;
case 0x5566cb:c.instructions+=1;goto B5566cb;
case 0x5566ce:goto L5566ce;
case 0x5566d5:c.instructions+=1;goto B5566d5;
case 0x5566d7:goto L5566d7;
case 0x5566de:goto L5566de;
case 0x5566e1:c.instructions+=2;goto B5566e1;
case 0x5566e2:c.instructions+=1;goto B5566e2;
case 0x5566e7:goto L5566e7;
case 0x5566e9:c.instructions+=1;goto B5566e9;
case 0x5566ee:goto L5566ee;
case 0x5566f4:c.instructions+=1;goto B5566f4;
case 0x5566f6:goto L5566f6;
case 0x5566fc:c.instructions+=6;goto B5566fc;
case 0x556701:c.instructions+=5;goto B556701;
case 0x556703:c.instructions+=4;goto B556703;
case 0x556704:c.instructions+=3;goto B556704;
case 0x556709:c.instructions+=2;goto B556709;
case 0x55670a:c.instructions+=1;goto B55670a;
case 0x55670d:goto L55670d;
case 0x556713:c.instructions+=6;goto B556713;
case 0x556718:c.instructions+=5;goto B556718;
case 0x55671a:c.instructions+=4;goto B55671a;
case 0x55671b:c.instructions+=3;goto B55671b;
case 0x556720:c.instructions+=2;goto B556720;
case 0x556721:c.instructions+=1;goto B556721;
case 0x556724:goto L556724;
case 0x55672b:goto L55672b;
case 0x556730:goto L556730;
case 0x556732:c.instructions+=1;goto B556732;
case 0x556737:goto L556737;
case 0x55673e:c.instructions+=1;goto B55673e;
case 0x556740:goto L556740;
case 0x556743:c.instructions+=4;goto B556743;
case 0x556748:c.instructions+=3;goto B556748;
case 0x55674d:c.instructions+=2;goto B55674d;
case 0x55674e:c.instructions+=1;goto B55674e;
case 0x556753:goto L556753;
case 0x556756:goto L556756;
case 0x556760:c.instructions+=1;goto B556760;
case 0x556762:goto L556762;
case 0x556764:c.instructions+=3;goto B556764;
case 0x556765:c.instructions+=2;goto B556765;
case 0x556767:c.instructions+=1;goto B556767;
case 0x55676c:goto L55676c;
case 0x556771:c.instructions+=1;goto B556771;
case 0x556776:goto L556776;
case 0x556779:c.instructions+=2;goto B556779;
case 0x55677b:c.instructions+=1;goto B55677b;
case 0x55677d:goto L55677d;
case 0x556783:c.instructions+=3;goto B556783;
case 0x556785:c.instructions+=2;goto B556785;
case 0x556788:c.instructions+=1;goto B556788;
case 0x55678a:goto L55678a;
case 0x55678c:c.instructions+=3;goto B55678c;
case 0x55678d:c.instructions+=2;goto B55678d;
case 0x556792:c.instructions+=1;goto B556792;
case 0x556794:goto L556794;
case 0x556795:c.instructions+=3;goto B556795;
case 0x55679a:c.instructions+=2;goto B55679a;
case 0x55679c:c.instructions+=1;goto B55679c;
case 0x55679e:goto L55679e;
case 0x55679f:c.instructions+=2;goto B55679f;
case 0x5567a4:c.instructions+=1;goto B5567a4;
case 0x5567a5:goto L5567a5;
case 0x5567aa:goto L5567aa;
case 0x5567af:c.instructions+=4;goto B5567af;
case 0x5567b1:c.instructions+=3;goto B5567b1;
case 0x5567b3:c.instructions+=2;goto B5567b3;
case 0x5567b7:c.instructions+=1;goto B5567b7;
case 0x5567bc:goto L5567bc;
case 0x5567bf:c.instructions+=5;goto B5567bf;
case 0x5567c2:c.instructions+=4;goto B5567c2;
case 0x5567c8:c.instructions+=3;goto B5567c8;
case 0x5567c9:c.instructions+=2;goto B5567c9;
case 0x5567ca:c.instructions+=1;goto B5567ca;
case 0x5567cf:goto L5567cf;
case 0x5567d2:c.instructions+=8;goto B5567d2;
case 0x5567d4:c.instructions+=7;goto B5567d4;
case 0x5567d5:c.instructions+=6;goto B5567d5;
case 0x5567d6:c.instructions+=5;goto B5567d6;
case 0x5567d7:c.instructions+=4;goto B5567d7;
case 0x5567de:c.instructions+=3;goto B5567de;
case 0x5567e0:c.instructions+=2;goto B5567e0;
case 0x5567e1:c.instructions+=1;goto B5567e1;
case 0x5567f0:goto L5567f0;
case 0x5567f1:c.instructions+=2;goto B5567f1;
case 0x5567f3:c.instructions+=1;goto B5567f3;
case 0x5567f8:goto L5567f8;
case 0x5567fd:c.instructions+=1;goto B5567fd;
case 0x5567ff:goto L5567ff;
case 0x556800:c.instructions+=1;goto B556800;
case 0x556805:goto L556805;
case 0x556808:goto L556808;
case 0x55680a:c.instructions+=2;goto B55680a;
case 0x55680b:c.instructions+=1;goto B55680b;
case 0x556810:goto L556810;
case 0x556812:c.instructions+=12;goto B556812;
case 0x556817:c.instructions+=11;goto B556817;
case 0x55681d:c.instructions+=10;goto B55681d;
case 0x55681e:c.instructions+=9;goto B55681e;
case 0x556825:c.instructions+=8;goto B556825;
case 0x556826:c.instructions+=7;goto B556826;
case 0x556827:c.instructions+=6;goto B556827;
case 0x556829:c.instructions+=5;goto B556829;
case 0x55682d:c.instructions+=4;goto B55682d;
case 0x556833:c.instructions+=3;goto B556833;
case 0x556839:c.instructions+=2;goto B556839;
case 0x556841:c.instructions+=1;goto B556841;
case 0x556846:goto L556846;
case 0x556848:c.instructions+=2;goto B556848;
case 0x556850:c.instructions+=1;goto B556850;
case 0x556855:goto L556855;
case 0x556859:c.instructions+=4;goto B556859;
case 0x55685a:c.instructions+=3;goto B55685a;
case 0x556861:c.instructions+=2;goto B556861;
case 0x556864:c.instructions+=1;goto B556864;
case 0x556870:goto L556870;
case 0x556871:c.instructions+=5;goto B556871;
case 0x556873:c.instructions+=4;goto B556873;
case 0x556876:c.instructions+=3;goto B556876;
case 0x556879:c.instructions+=2;goto B556879;
case 0x55687b:c.instructions+=1;goto B55687b;
case 0x556881:goto L556881;
case 0x556887:c.instructions+=2;goto B556887;
case 0x556888:c.instructions+=1;goto B556888;
case 0x55688d:goto L55688d;
case 0x556890:c.instructions+=2;goto B556890;
case 0x556892:c.instructions+=1;goto B556892;
case 0x556898:goto L556898;
case 0x55689e:c.instructions+=2;goto B55689e;
case 0x5568a0:c.instructions+=1;goto B5568a0;
case 0x5568a6:goto L5568a6;
case 0x5568a9:c.instructions+=2;goto B5568a9;
case 0x5568ab:c.instructions+=1;goto B5568ab;
case 0x5568ad:goto L5568ad;
case 0x5568b0:c.instructions+=2;goto B5568b0;
case 0x5568b2:c.instructions+=1;goto B5568b2;
case 0x5568b4:goto L5568b4;
case 0x5568b7:c.instructions+=2;goto B5568b7;
case 0x5568ba:c.instructions+=1;goto B5568ba;
case 0x5568bc:goto L5568bc;
case 0x5568bf:c.instructions+=1;goto B5568bf;
case 0x5568c1:goto L5568c1;
case 0x5568c3:c.instructions+=1;goto B5568c3;
case 0x5568c5:goto L5568c5;
case 0x5568c8:c.instructions+=2;goto B5568c8;
case 0x5568ca:c.instructions+=1;goto B5568ca;
case 0x5568cc:goto L5568cc;
case 0x5568cf:c.instructions+=2;goto B5568cf;
case 0x5568d2:c.instructions+=1;goto B5568d2;
case 0x5568d4:goto L5568d4;
case 0x5568da:c.instructions+=1;goto B5568da;
case 0x5568dc:goto L5568dc;
case 0x5568de:c.instructions+=1;goto B5568de;
case 0x5568e0:goto L5568e0;
case 0x5568e3:c.instructions+=2;goto B5568e3;
case 0x5568e5:c.instructions+=1;goto B5568e5;
case 0x5568e7:goto L5568e7;
case 0x5568ea:c.instructions+=1;goto B5568ea;
case 0x5568ec:goto L5568ec;
case 0x5568f1:goto L5568f1;
case 0x5568f4:c.instructions+=6;goto B5568f4;
case 0x5568f5:c.instructions+=5;goto B5568f5;
case 0x5568fb:c.instructions+=4;goto B5568fb;
case 0x556900:c.instructions+=3;goto B556900;
case 0x556901:c.instructions+=2;goto B556901;
case 0x556902:c.instructions+=1;goto B556902;
case 0x556907:goto L556907;
case 0x55690a:c.instructions+=5;goto B55690a;
case 0x55690d:c.instructions+=4;goto B55690d;
case 0x55690e:c.instructions+=3;goto B55690e;
case 0x556914:c.instructions+=2;goto B556914;
case 0x556919:c.instructions+=1;goto B556919;
case 0x55691e:goto L55691e;
case 0x556928:goto L556928;
case 0x556929:c.instructions+=1;goto B556929;
case 0x556930:goto L556930;
case 0x556931:c.instructions+=7;goto B556931;
case 0x556932:c.instructions+=6;goto B556932;
case 0x556933:c.instructions+=5;goto B556933;
case 0x556934:c.instructions+=4;goto B556934;
case 0x556936:c.instructions+=3;goto B556936;
case 0x55693c:c.instructions+=2;goto B55693c;
case 0x55693e:c.instructions+=1;goto B55693e;
case 0x556943:goto L556943;
case 0x556946:c.instructions+=3;goto B556946;
case 0x55694b:c.instructions+=2;goto B55694b;
case 0x55694c:c.instructions+=1;goto B55694c;
case 0x556951:goto L556951;
case 0x556954:c.instructions+=4;goto B556954;
case 0x556959:c.instructions+=3;goto B556959;
case 0x55695e:c.instructions+=2;goto B55695e;
case 0x55695f:c.instructions+=1;goto B55695f;
case 0x556964:goto L556964;
case 0x556967:c.instructions+=4;goto B556967;
case 0x55696a:c.instructions+=3;goto B55696a;
case 0x55696d:c.instructions+=2;goto B55696d;
case 0x556972:c.instructions+=1;goto B556972;
case 0x556974:goto L556974;
case 0x556977:c.instructions+=3;goto B556977;
case 0x55697c:c.instructions+=2;goto B55697c;
case 0x55697d:c.instructions+=1;goto B55697d;
case 0x556982:goto L556982;
case 0x556985:c.instructions+=3;goto B556985;
case 0x55698a:c.instructions+=2;goto B55698a;
case 0x55698b:c.instructions+=1;goto B55698b;
case 0x556990:goto L556990;
case 0x556993:goto L556993;
case 0x556996:c.instructions+=5;goto B556996;
case 0x556998:c.instructions+=4;goto B556998;
case 0x55699d:c.instructions+=3;goto B55699d;
case 0x5569a3:c.instructions+=2;goto B5569a3;
case 0x5569a7:c.instructions+=1;goto B5569a7;
case 0x5569a9:goto L5569a9;
case 0x5569ac:c.instructions+=3;goto B5569ac;
case 0x5569ae:c.instructions+=2;goto B5569ae;
case 0x5569b4:c.instructions+=1;goto B5569b4;
case 0x5569b6:goto L5569b6;
case 0x5569b7:c.instructions+=1;goto B5569b7;
case 0x5569bc:goto L5569bc;
case 0x5569bf:c.instructions+=2;goto B5569bf;
case 0x5569c1:c.instructions+=1;goto B5569c1;
case 0x5569c3:goto L5569c3;
case 0x5569c6:c.instructions+=6;goto B5569c6;
case 0x5569cc:c.instructions+=5;goto B5569cc;
case 0x5569cd:c.instructions+=4;goto B5569cd;
case 0x5569d2:c.instructions+=3;goto B5569d2;
case 0x5569d3:c.instructions+=2;goto B5569d3;
case 0x5569d4:c.instructions+=1;goto B5569d4;
case 0x5569d9:goto L5569d9;
case 0x5569dc:goto L5569dc;
case 0x5569de:c.instructions+=6;goto B5569de;
case 0x5569e4:c.instructions+=5;goto B5569e4;
case 0x5569ea:c.instructions+=4;goto B5569ea;
case 0x5569ed:c.instructions+=3;goto B5569ed;
case 0x5569f0:c.instructions+=2;goto B5569f0;
case 0x5569f5:c.instructions+=1;goto B5569f5;
case 0x5569fb:goto L5569fb;
case 0x556a02:c.instructions+=1;goto B556a02;
case 0x556a09:goto L556a09;
case 0x556a0c:c.instructions+=4;goto B556a0c;
case 0x556a12:c.instructions+=3;goto B556a12;
case 0x556a19:c.instructions+=2;goto B556a19;
case 0x556a1f:c.instructions+=1;goto B556a1f;
case 0x556a21:goto L556a21;
case 0x556a24:c.instructions+=4;goto B556a24;
case 0x556a2a:c.instructions+=3;goto B556a2a;
case 0x556a31:c.instructions+=2;goto B556a31;
case 0x556a37:c.instructions+=1;goto B556a37;
case 0x556a39:goto L556a39;
case 0x556a3c:c.instructions+=3;goto B556a3c;
case 0x556a42:c.instructions+=2;goto B556a42;
case 0x556a49:c.instructions+=1;goto B556a49;
case 0x556a4b:goto L556a4b;
case 0x556a4e:c.instructions+=3;goto B556a4e;
case 0x556a54:c.instructions+=2;goto B556a54;
case 0x556a5b:c.instructions+=1;goto B556a5b;
case 0x556a5d:goto L556a5d;
case 0x556a60:c.instructions+=4;goto B556a60;
case 0x556a65:c.instructions+=3;goto B556a65;
case 0x556a6a:c.instructions+=2;goto B556a6a;
case 0x556a6b:c.instructions+=1;goto B556a6b;
case 0x556a70:goto L556a70;
case 0x556a73:c.instructions+=7;goto B556a73;
case 0x556a76:c.instructions+=6;goto B556a76;
case 0x556a77:c.instructions+=5;goto B556a77;
case 0x556a78:c.instructions+=4;goto B556a78;
case 0x556a7a:c.instructions+=3;goto B556a7a;
case 0x556a80:c.instructions+=2;goto B556a80;
case 0x556a87:c.instructions+=1;goto B556a87;
case 0x556a8c:goto L556a8c;
case 0x556a8e:goto L556a8e;
case 0x556a91:c.instructions+=2;goto B556a91;
case 0x556a97:c.instructions+=1;goto B556a97;
case 0x556a9a:goto L556a9a;
case 0x556a9f:c.instructions+=1;goto B556a9f;
case 0x556aa4:goto L556aa4;
case 0x556aa6:c.instructions+=3;goto B556aa6;
case 0x556aa9:c.instructions+=2;goto B556aa9;
case 0x556aab:c.instructions+=1;goto B556aab;
case 0x556aad:goto L556aad;
case 0x556ab2:c.instructions+=2;goto B556ab2;
case 0x556ab4:c.instructions+=1;goto B556ab4;
case 0x556ab9:goto L556ab9;
case 0x556abb:c.instructions+=1;goto B556abb;
case 0x556abd:goto L556abd;
case 0x556ac2:c.instructions+=2;goto B556ac2;
case 0x556ac4:c.instructions+=1;goto B556ac4;
case 0x556ac6:goto L556ac6;
case 0x556ac9:c.instructions+=3;goto B556ac9;
case 0x556ace:c.instructions+=2;goto B556ace;
case 0x556ad3:c.instructions+=1;goto B556ad3;
case 0x556ad8:goto L556ad8;
case 0x556ada:c.instructions+=2;goto B556ada;
case 0x556adc:c.instructions+=1;goto B556adc;
case 0x556ade:goto L556ade;
case 0x556ae1:c.instructions+=2;goto B556ae1;
case 0x556ae3:c.instructions+=1;goto B556ae3;
case 0x556ae5:goto L556ae5;
case 0x556aea:c.instructions+=1;goto B556aea;
case 0x556aef:goto L556aef;
case 0x556af2:c.instructions+=3;goto B556af2;
case 0x556af5:c.instructions+=2;goto B556af5;
case 0x556af7:c.instructions+=1;goto B556af7;
case 0x556af9:goto L556af9;
case 0x556afc:c.instructions+=2;goto B556afc;
case 0x556afe:c.instructions+=1;goto B556afe;
case 0x556b00:goto L556b00;
case 0x556b02:goto L556b02;
case 0x556b04:c.instructions+=1;goto B556b04;
case 0x556b06:goto L556b06;
case 0x556b09:c.instructions+=1;goto B556b09;
case 0x556b0b:goto L556b0b;
case 0x556b0d:c.instructions+=2;goto B556b0d;
case 0x556b10:c.instructions+=1;goto B556b10;
case 0x556b15:goto L556b15;
case 0x556b18:c.instructions+=1;goto B556b18;
case 0x556b1b:goto L556b1b;
case 0x556b1e:goto L556b1e;
case 0x556b23:c.instructions+=1;goto B556b23;
case 0x556b28:goto L556b28;
case 0x556b2b:c.instructions+=2;goto B556b2b;
case 0x556b2d:c.instructions+=1;goto B556b2d;
case 0x556b2f:goto L556b2f;
case 0x556b34:c.instructions+=2;goto B556b34;
case 0x556b36:c.instructions+=1;goto B556b36;
case 0x556b3b:goto L556b3b;
case 0x556b3d:c.instructions+=1;goto B556b3d;
case 0x556b3f:goto L556b3f;
case 0x556b44:c.instructions+=2;goto B556b44;
case 0x556b46:c.instructions+=1;goto B556b46;
case 0x556b48:goto L556b48;
case 0x556b4b:c.instructions+=3;goto B556b4b;
case 0x556b50:c.instructions+=2;goto B556b50;
case 0x556b55:c.instructions+=1;goto B556b55;
case 0x556b5a:goto L556b5a;
case 0x556b5c:c.instructions+=2;goto B556b5c;
case 0x556b5e:c.instructions+=1;goto B556b5e;
case 0x556b60:goto L556b60;
case 0x556b63:c.instructions+=2;goto B556b63;
case 0x556b65:c.instructions+=1;goto B556b65;
case 0x556b67:goto L556b67;
case 0x556b70:goto L556b70;
case 0x556b75:c.instructions+=1;goto B556b75;
case 0x556b7a:goto L556b7a;
case 0x556b7d:c.instructions+=3;goto B556b7d;
case 0x556b80:c.instructions+=2;goto B556b80;
case 0x556b82:c.instructions+=1;goto B556b82;
case 0x556b84:goto L556b84;
case 0x556b87:c.instructions+=2;goto B556b87;
case 0x556b89:c.instructions+=1;goto B556b89;
case 0x556b8b:goto L556b8b;
case 0x556b8c:c.instructions+=5;goto B556b8c;
case 0x556b8d:c.instructions+=4;goto B556b8d;
case 0x556b8e:c.instructions+=3;goto B556b8e;
case 0x556b95:c.instructions+=2;goto B556b95;
case 0x556b96:c.instructions+=1;goto B556b96;
case 0x556b97:goto L556b97;
case 0x556b99:c.instructions+=1;goto B556b99;
case 0x556b9b:goto L556b9b;
case 0x556b9e:c.instructions+=1;goto B556b9e;
case 0x556ba0:goto L556ba0;
case 0x556ba2:c.instructions+=2;goto B556ba2;
case 0x556ba5:c.instructions+=1;goto B556ba5;
case 0x556baa:goto L556baa;
case 0x556bad:c.instructions+=1;goto B556bad;
case 0x556bb0:goto L556bb0;
case 0x556bb3:goto L556bb3;
case 0x556bb4:c.instructions+=5;goto B556bb4;
case 0x556bb5:c.instructions+=4;goto B556bb5;
case 0x556bb6:c.instructions+=3;goto B556bb6;
case 0x556bbd:c.instructions+=2;goto B556bbd;
case 0x556bbe:c.instructions+=1;goto B556bbe;
case 0x556c80:goto L556c80;
case 0x556c81:c.instructions+=14;goto B556c81;
case 0x556c83:c.instructions+=13;goto B556c83;
case 0x556c85:c.instructions+=12;goto B556c85;
case 0x556c8a:c.instructions+=11;goto B556c8a;
case 0x556c90:c.instructions+=10;goto B556c90;
case 0x556c91:c.instructions+=9;goto B556c91;
case 0x556c98:c.instructions+=8;goto B556c98;
case 0x556c99:c.instructions+=7;goto B556c99;
case 0x556c9c:c.instructions+=6;goto B556c9c;
case 0x556c9d:c.instructions+=5;goto B556c9d;
case 0x556c9e:c.instructions+=4;goto B556c9e;
case 0x556ca0:c.instructions+=3;goto B556ca0;
case 0x556ca1:c.instructions+=2;goto B556ca1;
case 0x556ca4:c.instructions+=1;goto B556ca4;
case 0x556ca9:goto L556ca9;
case 0x556cab:c.instructions+=8;goto B556cab;
case 0x556cb1:c.instructions+=7;goto B556cb1;
case 0x556cb7:c.instructions+=6;goto B556cb7;
case 0x556cbd:c.instructions+=5;goto B556cbd;
case 0x556cc3:c.instructions+=4;goto B556cc3;
case 0x556cc8:c.instructions+=3;goto B556cc8;
case 0x556cca:c.instructions+=2;goto B556cca;
case 0x556ccd:c.instructions+=1;goto B556ccd;
case 0x556ccf:goto L556ccf;
case 0x556cd5:c.instructions+=2;goto B556cd5;
case 0x556cd7:c.instructions+=1;goto B556cd7;
case 0x556cd9:goto L556cd9;
case 0x556cdb:c.instructions+=4;goto B556cdb;
case 0x556cdd:c.instructions+=3;goto B556cdd;
case 0x556cdf:c.instructions+=2;goto B556cdf;
case 0x556ce6:c.instructions+=1;goto B556ce6;
case 0x556ce8:goto L556ce8;
case 0x556ced:c.instructions+=1;goto B556ced;
case 0x556cf2:goto L556cf2;
case 0x556cf4:c.instructions+=1;goto B556cf4;
case 0x556cf6:goto L556cf6;
case 0x556cfb:c.instructions+=1;goto B556cfb;
case 0x556d00:goto L556d00;
case 0x556d03:c.instructions+=4;goto B556d03;
case 0x556d04:c.instructions+=3;goto B556d04;
case 0x556d09:c.instructions+=2;goto B556d09;
case 0x556d0a:c.instructions+=1;goto B556d0a;
case 0x556d0f:goto L556d0f;
case 0x556d12:goto L556d12;
case 0x556d18:c.instructions+=3;goto B556d18;
case 0x556d1b:c.instructions+=2;goto B556d1b;
case 0x556d1c:c.instructions+=1;goto B556d1c;
case 0x556d21:goto L556d21;
case 0x556d23:c.instructions+=1;goto B556d23;
case 0x556d28:goto L556d28;
case 0x556d2e:c.instructions+=1;goto B556d2e;
case 0x556d30:goto L556d30;
case 0x556d36:c.instructions+=6;goto B556d36;
case 0x556d3b:c.instructions+=5;goto B556d3b;
case 0x556d3d:c.instructions+=4;goto B556d3d;
case 0x556d3e:c.instructions+=3;goto B556d3e;
case 0x556d43:c.instructions+=2;goto B556d43;
case 0x556d44:c.instructions+=1;goto B556d44;
case 0x556d47:goto L556d47;
case 0x556d4d:c.instructions+=6;goto B556d4d;
case 0x556d52:c.instructions+=5;goto B556d52;
case 0x556d54:c.instructions+=4;goto B556d54;
case 0x556d55:c.instructions+=3;goto B556d55;
case 0x556d5a:c.instructions+=2;goto B556d5a;
case 0x556d5b:c.instructions+=1;goto B556d5b;
case 0x556d5e:goto L556d5e;
case 0x556d65:goto L556d65;
case 0x556d6a:goto L556d6a;
case 0x556d6c:c.instructions+=1;goto B556d6c;
case 0x556d71:goto L556d71;
case 0x556d78:c.instructions+=1;goto B556d78;
case 0x556d7a:goto L556d7a;
case 0x556d7d:c.instructions+=4;goto B556d7d;
case 0x556d82:c.instructions+=3;goto B556d82;
case 0x556d87:c.instructions+=2;goto B556d87;
case 0x556d88:c.instructions+=1;goto B556d88;
case 0x556d8d:goto L556d8d;
case 0x556d90:goto L556d90;
case 0x556d96:c.instructions+=2;goto B556d96;
case 0x556d97:c.instructions+=1;goto B556d97;
case 0x556d9c:goto L556d9c;
case 0x556d9f:c.instructions+=2;goto B556d9f;
case 0x556da1:c.instructions+=1;goto B556da1;
case 0x556da3:goto L556da3;
case 0x556da6:c.instructions+=3;goto B556da6;
case 0x556da9:c.instructions+=2;goto B556da9;
case 0x556dac:c.instructions+=1;goto B556dac;
case 0x556daf:goto L556daf;
case 0x556db4:c.instructions+=1;goto B556db4;
case 0x556db9:goto L556db9;
case 0x556dbc:c.instructions+=2;goto B556dbc;
case 0x556dbe:c.instructions+=1;goto B556dbe;
case 0x556dc0:goto L556dc0;
case 0x556dc6:c.instructions+=3;goto B556dc6;
case 0x556dc8:c.instructions+=2;goto B556dc8;
case 0x556dcb:c.instructions+=1;goto B556dcb;
case 0x556dcd:goto L556dcd;
case 0x556dcf:c.instructions+=3;goto B556dcf;
case 0x556dd0:c.instructions+=2;goto B556dd0;
case 0x556dd5:c.instructions+=1;goto B556dd5;
case 0x556dd7:goto L556dd7;
case 0x556dd8:c.instructions+=3;goto B556dd8;
case 0x556ddd:c.instructions+=2;goto B556ddd;
case 0x556ddf:c.instructions+=1;goto B556ddf;
case 0x556de1:goto L556de1;
case 0x556de2:c.instructions+=2;goto B556de2;
case 0x556de7:c.instructions+=1;goto B556de7;
case 0x556de8:goto L556de8;
case 0x556ded:goto L556ded;
case 0x556df2:c.instructions+=4;goto B556df2;
case 0x556df4:c.instructions+=3;goto B556df4;
case 0x556df6:c.instructions+=2;goto B556df6;
case 0x556dfa:c.instructions+=1;goto B556dfa;
case 0x556dff:goto L556dff;
case 0x556e02:c.instructions+=5;goto B556e02;
case 0x556e05:c.instructions+=4;goto B556e05;
case 0x556e06:c.instructions+=3;goto B556e06;
case 0x556e07:c.instructions+=2;goto B556e07;
case 0x556e0d:c.instructions+=1;goto B556e0d;
case 0x556e12:goto L556e12;
case 0x556e15:c.instructions+=7;goto B556e15;
case 0x556e17:c.instructions+=6;goto B556e17;
case 0x556e18:c.instructions+=5;goto B556e18;
case 0x556e19:c.instructions+=4;goto B556e19;
case 0x556e20:c.instructions+=3;goto B556e20;
case 0x556e22:c.instructions+=2;goto B556e22;
case 0x556e23:c.instructions+=1;goto B556e23;
case 0x556e30:goto L556e30;
case 0x556e31:c.instructions+=2;goto B556e31;
case 0x556e33:c.instructions+=1;goto B556e33;
case 0x556e38:goto L556e38;
case 0x556e3d:c.instructions+=1;goto B556e3d;
case 0x556e3f:goto L556e3f;
case 0x556e40:c.instructions+=1;goto B556e40;
case 0x556e45:goto L556e45;
case 0x556e48:goto L556e48;
case 0x556e4a:c.instructions+=2;goto B556e4a;
case 0x556e4b:c.instructions+=1;goto B556e4b;
case 0x556e50:goto L556e50;
case 0x556e56:c.instructions+=1;goto B556e56;
case 0x556e60:goto L556e60;
case 0x556e63:c.instructions+=7;goto B556e63;
case 0x556e64:c.instructions+=6;goto B556e64;
case 0x556e65:c.instructions+=5;goto B556e65;
case 0x556e66:c.instructions+=4;goto B556e66;
case 0x556e68:c.instructions+=3;goto B556e68;
case 0x556e6a:c.instructions+=2;goto B556e6a;
case 0x556e6e:c.instructions+=1;goto B556e6e;
case 0x556e73:goto L556e73;
case 0x556e75:c.instructions+=4;goto B556e75;
case 0x556e78:c.instructions+=3;goto B556e78;
case 0x556e7a:c.instructions+=2;goto B556e7a;
case 0x556e7f:c.instructions+=1;goto B556e7f;
case 0x556e81:goto L556e81;
case 0x556e88:c.instructions+=18;goto B556e88;
case 0x556e8b:c.instructions+=17;goto B556e8b;
case 0x556e8e:c.instructions+=16;goto B556e8e;
case 0x556e91:c.instructions+=15;goto B556e91;
case 0x556e94:c.instructions+=14;goto B556e94;
case 0x556e98:c.instructions+=13;goto B556e98;
case 0x556e9b:c.instructions+=12;goto B556e9b;
case 0x556e9e:c.instructions+=11;goto B556e9e;
case 0x556ea5:c.instructions+=10;goto B556ea5;
case 0x556ea8:c.instructions+=9;goto B556ea8;
case 0x556eab:c.instructions+=8;goto B556eab;
case 0x556eae:c.instructions+=7;goto B556eae;
case 0x556eb1:c.instructions+=6;goto B556eb1;
case 0x556eb4:c.instructions+=5;goto B556eb4;
case 0x556eb8:c.instructions+=4;goto B556eb8;
case 0x556ebb:c.instructions+=3;goto B556ebb;
case 0x556ec1:c.instructions+=2;goto B556ec1;
case 0x556ec5:c.instructions+=1;goto B556ec5;
case 0x556ec7:goto L556ec7;
case 0x556ec9:goto L556ec9;
case 0x556ecb:c.instructions+=3;goto B556ecb;
case 0x556ecc:c.instructions+=2;goto B556ecc;
case 0x556ece:c.instructions+=1;goto B556ece;
case 0x556ed1:goto L556ed1;
case 0x556ed7:c.instructions+=4;goto B556ed7;
case 0x556edc:c.instructions+=3;goto B556edc;
case 0x556ede:c.instructions+=2;goto B556ede;
case 0x556ee0:c.instructions+=1;goto B556ee0;
case 0x556ee2:goto L556ee2;
case 0x556ee8:c.instructions+=1;goto B556ee8;
case 0x556eea:goto L556eea;
case 0x556eec:c.instructions+=1;goto B556eec;
case 0x556ef2:goto L556ef2;
case 0x556ef4:c.instructions+=2;goto B556ef4;
case 0x556efb:c.instructions+=1;goto B556efb;
case 0x556f01:goto L556f01;
case 0x556f03:c.instructions+=3;goto B556f03;
case 0x556f09:c.instructions+=2;goto B556f09;
case 0x556f0e:c.instructions+=1;goto B556f0e;
case 0x556f10:goto L556f10;
case 0x556f16:c.instructions+=2;goto B556f16;
case 0x556f18:c.instructions+=1;goto B556f18;
case 0x556f1a:goto L556f1a;
case 0x556f21:c.instructions+=1;goto B556f21;
case 0x556f23:goto L556f23;
case 0x556f28:goto L556f28;
case 0x556f2a:c.instructions+=1;goto B556f2a;
case 0x556f30:goto L556f30;
case 0x556f35:c.instructions+=3;goto B556f35;
case 0x556f36:c.instructions+=2;goto B556f36;
case 0x556f37:c.instructions+=1;goto B556f37;
case 0x556f3c:goto L556f3c;
case 0x556f3d:c.instructions+=6;goto B556f3d;
case 0x556f42:c.instructions+=5;goto B556f42;
case 0x556f46:c.instructions+=4;goto B556f46;
case 0x556f48:c.instructions+=3;goto B556f48;
case 0x556f49:c.instructions+=2;goto B556f49;
case 0x556f4b:c.instructions+=1;goto B556f4b;
case 0x556f50:goto L556f50;
case 0x556f54:c.instructions+=2;goto B556f54;
case 0x556f55:c.instructions+=1;goto B556f55;
case 0x556f5a:goto L556f5a;
case 0x556f5b:c.instructions+=6;goto B556f5b;
case 0x556f60:c.instructions+=5;goto B556f60;
case 0x556f64:c.instructions+=4;goto B556f64;
case 0x556f68:c.instructions+=3;goto B556f68;
case 0x556f6a:c.instructions+=2;goto B556f6a;
case 0x556f6b:c.instructions+=1;goto B556f6b;
case 0x556f70:goto L556f70;
case 0x556f74:c.instructions+=2;goto B556f74;
case 0x556f75:c.instructions+=1;goto B556f75;
case 0x556f7a:goto L556f7a;
case 0x556f7c:c.instructions+=2;goto B556f7c;
case 0x556f80:c.instructions+=1;goto B556f80;
case 0x556f85:goto L556f85;
case 0x556f88:c.instructions+=2;goto B556f88;
case 0x556f8a:c.instructions+=1;goto B556f8a;
case 0x556f8c:goto L556f8c;
case 0x556f90:c.instructions+=23;goto B556f90;
case 0x556f94:c.instructions+=22;goto B556f94;
case 0x556f97:c.instructions+=21;goto B556f97;
case 0x556f9c:c.instructions+=20;goto B556f9c;
case 0x556f9f:c.instructions+=19;goto B556f9f;
case 0x556fa2:c.instructions+=18;goto B556fa2;
case 0x556fa5:c.instructions+=17;goto B556fa5;
case 0x556fa8:c.instructions+=16;goto B556fa8;
case 0x556fab:c.instructions+=15;goto B556fab;
case 0x556faf:c.instructions+=14;goto B556faf;
case 0x556fb2:c.instructions+=13;goto B556fb2;
case 0x556fb5:c.instructions+=12;goto B556fb5;
case 0x556fb8:c.instructions+=11;goto B556fb8;
case 0x556fbb:c.instructions+=10;goto B556fbb;
case 0x556fbe:c.instructions+=9;goto B556fbe;
case 0x556fc1:c.instructions+=8;goto B556fc1;
case 0x556fc4:c.instructions+=7;goto B556fc4;
case 0x556fc8:c.instructions+=6;goto B556fc8;
case 0x556fcf:c.instructions+=5;goto B556fcf;
case 0x556fd5:c.instructions+=4;goto B556fd5;
case 0x556fd8:c.instructions+=3;goto B556fd8;
case 0x556fdc:c.instructions+=2;goto B556fdc;
case 0x556fe0:c.instructions+=1;goto B556fe0;
case 0x556fe2:goto L556fe2;
case 0x556fe6:goto L556fe6;
case 0x556fec:c.instructions+=5;goto B556fec;
case 0x556fee:c.instructions+=4;goto B556fee;
case 0x556fef:c.instructions+=3;goto B556fef;
case 0x556ff0:c.instructions+=2;goto B556ff0;
case 0x556ff1:c.instructions+=1;goto B556ff1;
case 0x556ff6:goto L556ff6;
case 0x556ff7:c.instructions+=1;goto B556ff7;
case 0x556ffc:goto L556ffc;
case 0x556ffe:c.instructions+=1;goto B556ffe;
default:missing_instruction(c.pc);}
B556003:L556003:{c.instructions+=5;NFSU2_TR(0x556003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B556004:{NFSU2_TR(0x556004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556005:{NFSU2_TR(0x556005);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55600c:{NFSU2_TR(0x55600c);
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
B55600f:{NFSU2_TR(0x55600f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556020:L556020:{c.instructions+=10;NFSU2_TR(0x556020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556021:{NFSU2_TR(0x556021);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556022:{NFSU2_TR(0x556022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556023:{NFSU2_TR(0x556023);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556024:{NFSU2_TR(0x556024);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B556028:{NFSU2_TR(0x556028);
__builtin_memmove((R+24),(R+4),4);
}
B55602a:{NFSU2_TR(0x55602a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55602d:{NFSU2_TR(0x55602d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B55602f:{NFSU2_TR(0x55602f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556035:{NFSU2_TR(0x556035);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5562cb;}}
}
B55603b:L55603b:{c.instructions+=1;NFSU2_TR(0x55603b);
if(r1(R+518)){{goto L556360;}}
}
B556041:L556041:{c.instructions+=2;NFSU2_TR(0x556041);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x72619778ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556047:{NFSU2_TR(0x556047);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5561a3;}}
}
B55604d:L55604d:{c.instructions+=1;NFSU2_TR(0x55604d);
if(r1(R+518)){{goto L55615f;}}
}
B556053:L556053:{c.instructions+=2;NFSU2_TR(0x556053);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x251bf83eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556059:{NFSU2_TR(0x556059);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5560fa;}}
}
B55605f:L55605f:{c.instructions+=1;NFSU2_TR(0x55605f);
if(r1(R+518)){{goto L5560dd;}}
}
B556061:L556061:{c.instructions+=2;NFSU2_TR(0x556061);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x153e234ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x153e234ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x153e234ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B556067:{NFSU2_TR(0x556067);
if(r1(R+518)){{goto L5560cc;}}
}
B556069:L556069:{c.instructions+=2;NFSU2_TR(0x556069);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55606f:{NFSU2_TR(0x55606f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B556075:L556075:{c.instructions+=3;NFSU2_TR(0x556075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556078:{NFSU2_TR(0x556078);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55607a:{NFSU2_TR(0x55607a);
if(r1(R+518)){{goto L5560a4;}}
}
B55607c:L55607c:{c.instructions+=3;NFSU2_TR(0x55607c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55607f:{NFSU2_TR(0x55607f);
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
B556081:{NFSU2_TR(0x556081);
if(r1(R+518)){{goto L5560a4;}}
}
B556083:L556083:{c.instructions+=5;NFSU2_TR(0x556083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556086:{NFSU2_TR(0x556086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556088:{NFSU2_TR(0x556088);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556089:{NFSU2_TR(0x556089);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55608a:{NFSU2_TR(0x55608a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55608dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55608d:L55608d:{c.instructions+=9;NFSU2_TR(0x55608d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556091:{NFSU2_TR(0x556091);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556095:{NFSU2_TR(0x556095);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556099:{NFSU2_TR(0x556099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55609a:{NFSU2_TR(0x55609a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55609b:{NFSU2_TR(0x55609b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55609c:{NFSU2_TR(0x55609c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55609d:{NFSU2_TR(0x55609d);
__builtin_memmove((R+4),(R+24),4);
}
B55609f:{NFSU2_TR(0x55609f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5560a4ull));
TAIL_STATIC(0x50dae0u,50d);
}
B5560a4:L5560a4:{c.instructions+=3;NFSU2_TR(0x5560a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5560a7:{NFSU2_TR(0x5560a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5560a9:{NFSU2_TR(0x5560a9);
if(r1(R+518)){{goto L5560b6;}}
}
B5560ab:L5560ab:{c.instructions+=3;NFSU2_TR(0x5560ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5560ae:{NFSU2_TR(0x5560ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5560b0:{NFSU2_TR(0x5560b0);
if(r1(R+518)){{goto L556456;}}
}
B5560b6:L5560b6:{c.instructions+=2;NFSU2_TR(0x5560b6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5560bc:{NFSU2_TR(0x5560bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55626b;}}
}
B5560c2:L5560c2:{c.instructions+=2;NFSU2_TR(0x5560c2);
w4(R+20,u32(0xaull));
}
B5560c7:{NFSU2_TR(0x5560c7);
{goto L556456;}
}
B5560cc:L5560cc:{c.instructions+=5;NFSU2_TR(0x5560cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5560cf:{NFSU2_TR(0x5560cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5560d2:{NFSU2_TR(0x5560d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5560d4:{NFSU2_TR(0x5560d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5560d5:{NFSU2_TR(0x5560d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5560d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5560d8:L5560d8:{c.instructions+=1;NFSU2_TR(0x5560d8);
{goto L556456;}
}
B5560dd:L5560dd:{c.instructions+=6;NFSU2_TR(0x5560dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5560e0:{NFSU2_TR(0x5560e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5560e2:{NFSU2_TR(0x5560e2);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5560e7:{NFSU2_TR(0x5560e7);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5560ec:{NFSU2_TR(0x5560ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5560ed:{NFSU2_TR(0x5560ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5560f2ull));
TAIL_STATIC(0x537c00u,537);
}
B5560f2:L5560f2:{c.instructions+=2;NFSU2_TR(0x5560f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5560f5:{NFSU2_TR(0x5560f5);
{goto L556456;}
}
B5560fa:L5560fa:{c.instructions+=2;NFSU2_TR(0x5560fa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556100:{NFSU2_TR(0x556100);
if(r1(R+518)){{goto L55612e;}}
}
B556102:L556102:{c.instructions+=2;NFSU2_TR(0x556102);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556108:{NFSU2_TR(0x556108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B55610e:L55610e:{c.instructions+=3;NFSU2_TR(0x55610e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556111:{NFSU2_TR(0x556111);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B556113:{NFSU2_TR(0x556113);
if(r1(R+518)){{goto L556456;}}
}
B556119:L556119:{c.instructions+=3;NFSU2_TR(0x556119);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B55611c:{NFSU2_TR(0x55611c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55611e:{NFSU2_TR(0x55611e);
if(r1(R+518)){{goto L556456;}}
}
B556124:L556124:{c.instructions+=2;NFSU2_TR(0x556124);
w4(R+20,u32(0x8ull));
}
B556129:{NFSU2_TR(0x556129);
{goto L556456;}
}
B55612e:L55612e:{c.instructions+=3;NFSU2_TR(0x55612e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556131:{NFSU2_TR(0x556131);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B556133:{NFSU2_TR(0x556133);
if(r1(R+518)){{goto L556456;}}
}
B556139:L556139:{c.instructions+=3;NFSU2_TR(0x556139);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55613c:{NFSU2_TR(0x55613c);
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
B55613e:{NFSU2_TR(0x55613e);
if(r1(R+518)){{goto L556456;}}
}
B556144:L556144:{c.instructions+=4;NFSU2_TR(0x556144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556147:{NFSU2_TR(0x556147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556149:{NFSU2_TR(0x556149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55614a:{NFSU2_TR(0x55614a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55614dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55614d:L55614d:{c.instructions+=4;NFSU2_TR(0x55614d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556150:{NFSU2_TR(0x556150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556152:{NFSU2_TR(0x556152);
w4(R+20,u32(0xbull));
}
B556157:{NFSU2_TR(0x556157);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55615aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55615a:L55615a:{c.instructions+=1;NFSU2_TR(0x55615a);
{goto L556454;}
}
B55615f:L55615f:{c.instructions+=3;NFSU2_TR(0x55615f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B556165:{NFSU2_TR(0x556165);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B556167:{NFSU2_TR(0x556167);
if(r1(R+518)){{goto L556456;}}
}
B55616d:L55616d:{c.instructions+=5;NFSU2_TR(0x55616d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B556173:{NFSU2_TR(0x556173);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B556175:{NFSU2_TR(0x556175);
__builtin_memmove((R+4),(R+24),4);
}
B556177:{NFSU2_TR(0x556177);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556179:{NFSU2_TR(0x556179);
if(r1(R+518)){{goto L55618f;}}
}
B55617b:L55617b:{c.instructions+=1;NFSU2_TR(0x55617b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556180ull));
TAIL_STATIC(0x539370u,539);
}
B556180:L556180:{c.instructions+=3;NFSU2_TR(0x556180);
w4(R+20,u32(0x6ull));
}
B556185:{NFSU2_TR(0x556185);
w4(R+12,u32(0x7ull));
}
B55618a:{NFSU2_TR(0x55618a);
{goto L556456;}
}
B55618f:L55618f:{c.instructions+=1;NFSU2_TR(0x55618f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556194ull));
TAIL_STATIC(0x5390e0u,539);
}
B556194:L556194:{c.instructions+=3;NFSU2_TR(0x556194);
w4(R+20,u32(0x6ull));
}
B556199:{NFSU2_TR(0x556199);
w4(R+12,u32(0x7ull));
}
B55619e:{NFSU2_TR(0x55619e);
{goto L556456;}
}
B5561a3:L5561a3:{c.instructions+=2;NFSU2_TR(0x5561a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5561a9:{NFSU2_TR(0x5561a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L556281;}}
}
B5561af:L5561af:{c.instructions+=1;NFSU2_TR(0x5561af);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x556075u);}goto L556075;}}
}
B5561b5:L5561b5:{c.instructions+=2;NFSU2_TR(0x5561b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81017864ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5561bb:{NFSU2_TR(0x5561bb);
if(r1(R+518)){{goto L5561f6;}}
}
B5561bd:L5561bd:{c.instructions+=2;NFSU2_TR(0x5561bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x84378befull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5561c3:{NFSU2_TR(0x5561c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B5561c9:L5561c9:{c.instructions+=3;NFSU2_TR(0x5561c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5561cc:{NFSU2_TR(0x5561cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5561ce:{NFSU2_TR(0x5561ce);
if(r1(R+518)){{goto L556456;}}
}
B5561d4:L5561d4:{c.instructions+=3;NFSU2_TR(0x5561d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5561d7:{NFSU2_TR(0x5561d7);
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
B5561d9:{NFSU2_TR(0x5561d9);
if(r1(R+518)){{goto L556456;}}
}
B5561df:L5561df:{c.instructions+=2;NFSU2_TR(0x5561df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5561e1:{NFSU2_TR(0x5561e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5561e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5561e4:L5561e4:{c.instructions+=4;NFSU2_TR(0x5561e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5561e7:{NFSU2_TR(0x5561e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5561e9:{NFSU2_TR(0x5561e9);
w4(R+20,u32(0xcull));
}
B5561ee:{NFSU2_TR(0x5561ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5561f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5561f1:L5561f1:{c.instructions+=1;NFSU2_TR(0x5561f1);
{goto L556454;}
}
B5561f6:L5561f6:{c.instructions+=9;NFSU2_TR(0x5561f6);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5561fb:{NFSU2_TR(0x5561fb);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9c8))));
}
B556201:{NFSU2_TR(0x556201);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556205:{NFSU2_TR(0x556205);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B556209:{NFSU2_TR(0x556209);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B55620f:{NFSU2_TR(0x55620f);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B556215:{NFSU2_TR(0x556215);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B556217:{NFSU2_TR(0x556217);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55621a:{NFSU2_TR(0x55621a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L556456;}}
}
B556220:L556220:{c.instructions+=4;NFSU2_TR(0x556220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B556223:{NFSU2_TR(0x556223);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556228:{NFSU2_TR(0x556228);
__builtin_memmove((R+4),(R+28),4);
}
B55622a:{NFSU2_TR(0x55622a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55622full));
TAIL_STATIC(0x4957d0u,495);
}
B55622f:L55622f:{c.instructions+=14;NFSU2_TR(0x55622f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556235:{NFSU2_TR(0x556235);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556237:{NFSU2_TR(0x556237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556238:{NFSU2_TR(0x556238);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55623e:{NFSU2_TR(0x55623e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((R+8),(U+0),4);
}
B556244:{NFSU2_TR(0x556244);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556245:{NFSU2_TR(0x556245);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556248:{NFSU2_TR(0x556248);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B55624b:{NFSU2_TR(0x55624b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55624c:{NFSU2_TR(0x55624c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55624f:{NFSU2_TR(0x55624f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556250:{NFSU2_TR(0x556250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556251:{NFSU2_TR(0x556251);
__builtin_memmove((R+4),(R+24),4);
}
B556253:{NFSU2_TR(0x556253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556258ull));
TAIL_STATIC(0x555f80u,555);
}
B556258:L556258:{c.instructions+=3;NFSU2_TR(0x556258);
__builtin_memmove((R+4),(R+28),4);
}
B55625a:{NFSU2_TR(0x55625a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556261:{NFSU2_TR(0x556261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556266ull));
TAIL_STATIC(0x51eb60u,51e);
}
B556266:L556266:{c.instructions+=1;NFSU2_TR(0x556266);
{goto L556456;}
}
B55626b:L55626b:{c.instructions+=2;NFSU2_TR(0x55626b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556271:{NFSU2_TR(0x556271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B556277:L556277:{c.instructions+=2;NFSU2_TR(0x556277);
w4(R+20,u32(0x8ull));
}
B55627c:{NFSU2_TR(0x55627c);
{goto L556456;}
}
B556281:L556281:{c.instructions+=2;NFSU2_TR(0x556281);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556287:{NFSU2_TR(0x556287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B55628d:L55628d:{c.instructions+=3;NFSU2_TR(0x55628d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B556293:{NFSU2_TR(0x556293);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B556295:{NFSU2_TR(0x556295);
if(r1(R+518)){{goto L556456;}}
}
B55629b:L55629b:{c.instructions+=5;NFSU2_TR(0x55629b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5562a1:{NFSU2_TR(0x5562a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5562a3:{NFSU2_TR(0x5562a3);
__builtin_memmove((R+4),(R+24),4);
}
B5562a5:{NFSU2_TR(0x5562a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5562a7:{NFSU2_TR(0x5562a7);
if(r1(R+518)){{goto L5562ba;}}
}
B5562a9:L5562a9:{c.instructions+=1;NFSU2_TR(0x5562a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5562aeull));
TAIL_STATIC(0x539370u,539);
}
B5562ae:L5562ae:{c.instructions+=3;NFSU2_TR(0x5562ae);
w4(R+20,u32(0x7ull));
}
B5562b3:{NFSU2_TR(0x5562b3);
__builtin_memmove((R+12),(R+20),4);
}
B5562b5:{NFSU2_TR(0x5562b5);
{goto L556456;}
}
B5562ba:L5562ba:{c.instructions+=1;NFSU2_TR(0x5562ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5562bfull));
TAIL_STATIC(0x5390e0u,539);
}
B5562bf:L5562bf:{c.instructions+=3;NFSU2_TR(0x5562bf);
w4(R+20,u32(0x7ull));
}
B5562c4:{NFSU2_TR(0x5562c4);
__builtin_memmove((R+12),(R+20),4);
}
B5562c6:{NFSU2_TR(0x5562c6);
{goto L556456;}
}
B5562cb:L5562cb:{c.instructions+=2;NFSU2_TR(0x5562cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5971bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5562d1:{NFSU2_TR(0x5562d1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L556398;}}
}
B5562d7:L5562d7:{c.instructions+=1;NFSU2_TR(0x5562d7);
if(r1(R+518)){{goto L556360;}}
}
B5562dd:L5562dd:{c.instructions+=2;NFSU2_TR(0x5562dd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9803f6e2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5562e3:{NFSU2_TR(0x5562e3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L556330;}}
}
B5562e5:L5562e5:{c.instructions+=1;NFSU2_TR(0x5562e5);
if(r1(R+518)){{goto L556324;}}
}
B5562e7:L5562e7:{c.instructions+=2;NFSU2_TR(0x5562e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x92b703b5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5562ed:{NFSU2_TR(0x5562ed);
if(r1(R+518)){{goto L556318;}}
}
B5562ef:L5562ef:{c.instructions+=2;NFSU2_TR(0x5562ef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x96dda9e6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5562f5:{NFSU2_TR(0x5562f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B5562fb:L5562fb:{c.instructions+=6;NFSU2_TR(0x5562fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5562fe:{NFSU2_TR(0x5562fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556300:{NFSU2_TR(0x556300);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556305:{NFSU2_TR(0x556305);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55630a:{NFSU2_TR(0x55630a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55630b:{NFSU2_TR(0x55630b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556310ull));
TAIL_STATIC(0x537c00u,537);
}
B556310:L556310:{c.instructions+=2;NFSU2_TR(0x556310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B556313:{NFSU2_TR(0x556313);
{goto L556456;}
}
B556318:L556318:{c.instructions+=2;NFSU2_TR(0x556318);
__builtin_memmove((R+4),(R+24),4);
}
B55631a:{NFSU2_TR(0x55631a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55631full));
TAIL_STATIC(0x51ff40u,51f);
}
B55631f:L55631f:{c.instructions+=1;NFSU2_TR(0x55631f);
{goto L556456;}
}
B556324:L556324:{c.instructions+=2;NFSU2_TR(0x556324);
__builtin_memmove((R+4),(R+24),4);
}
B556326:{NFSU2_TR(0x556326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55632bull));
TAIL_STATIC(0x52fc40u,52f);
}
B55632b:L55632b:{c.instructions+=1;NFSU2_TR(0x55632b);
{goto L556456;}
}
B556330:L556330:{c.instructions+=2;NFSU2_TR(0x556330);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaf0bbd92ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556336:{NFSU2_TR(0x556336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B55633c:L55633c:{c.instructions+=4;NFSU2_TR(0x55633c);
__builtin_memmove((R+4),(R+24),4);
}
B55633e:{NFSU2_TR(0x55633e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x145ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556345:{NFSU2_TR(0x556345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55634f:{NFSU2_TR(0x55634f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556354ull));
TAIL_STATIC(0x52fd40u,52f);
}
B556354:L556354:{c.instructions+=3;NFSU2_TR(0x556354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556356:{NFSU2_TR(0x556356);
__builtin_memmove((R+4),(R+24),4);
}
B556358:{NFSU2_TR(0x556358);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55635bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55635b:L55635b:{c.instructions+=1;NFSU2_TR(0x55635b);
{goto L556456;}
}
B556360:L556360:{c.instructions+=3;NFSU2_TR(0x556360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556363:{NFSU2_TR(0x556363);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B556365:{NFSU2_TR(0x556365);
if(r1(R+518)){{goto L556456;}}
}
B55636b:L55636b:{c.instructions+=3;NFSU2_TR(0x55636b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55636e:{NFSU2_TR(0x55636e);
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
B556370:{NFSU2_TR(0x556370);
if(r1(R+518)){{goto L556456;}}
}
B556376:L556376:{c.instructions+=5;NFSU2_TR(0x556376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556379:{NFSU2_TR(0x556379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55637b:{NFSU2_TR(0x55637b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55637c:{NFSU2_TR(0x55637c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55637d:{NFSU2_TR(0x55637d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556380ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556380:L556380:{c.instructions+=3;NFSU2_TR(0x556380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556383:{NFSU2_TR(0x556383);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556384:{NFSU2_TR(0x556384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556389ull));
TAIL_STATIC(0x50d460u,50d);
}
B556389:L556389:{c.instructions+=4;NFSU2_TR(0x556389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55638c:{NFSU2_TR(0x55638c);
__builtin_memmove((R+20),(R+0),4);
}
B55638e:{NFSU2_TR(0x55638e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B556390:{NFSU2_TR(0x556390);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556393ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556393:L556393:{c.instructions+=1;NFSU2_TR(0x556393);
{goto L556454;}
}
B556398:L556398:{c.instructions+=2;NFSU2_TR(0x556398);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xda52af6bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda52af6bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55639e:{NFSU2_TR(0x55639e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5563f3;}}
}
B5563a0:L5563a0:{c.instructions+=1;NFSU2_TR(0x5563a0);
if(r1(R+518)){{goto L5563e0;}}
}
B5563a2:L5563a2:{c.instructions+=2;NFSU2_TR(0x5563a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5563a8:{NFSU2_TR(0x5563a8);
if(r1(R+518)){{goto L5563d7;}}
}
B5563aa:L5563aa:{c.instructions+=2;NFSU2_TR(0x5563aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5563b0:{NFSU2_TR(0x5563b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B5563b6:L5563b6:{c.instructions+=6;NFSU2_TR(0x5563b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5563b9:{NFSU2_TR(0x5563b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5563bb:{NFSU2_TR(0x5563bb);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5563c0:{NFSU2_TR(0x5563c0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5563c5:{NFSU2_TR(0x5563c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5563c6:{NFSU2_TR(0x5563c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5563cbull));
TAIL_STATIC(0x537c00u,537);
}
B5563cb:L5563cb:{c.instructions+=3;NFSU2_TR(0x5563cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5563ce:{NFSU2_TR(0x5563ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5563d5:{NFSU2_TR(0x5563d5);
{goto L556456;}
}
B5563d7:L5563d7:{c.instructions+=2;NFSU2_TR(0x5563d7);
__builtin_memmove((R+4),(R+24),4);
}
B5563d9:{NFSU2_TR(0x5563d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5563deull));
TAIL_STATIC(0x544490u,544);
}
B5563de:L5563de:{c.instructions+=1;NFSU2_TR(0x5563de);
{goto L556456;}
}
B5563e0:L5563e0:{c.instructions+=3;NFSU2_TR(0x5563e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5563e3:{NFSU2_TR(0x5563e3);
__builtin_memmove((R+4),(R+28),4);
}
B5563e5:{NFSU2_TR(0x5563e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5563eaull));
TAIL_STATIC(0x538060u,538);
}
B5563ea:L5563ea:{c.instructions+=3;NFSU2_TR(0x5563ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5563ec:{NFSU2_TR(0x5563ec);
__builtin_memmove((R+4),(R+28),4);
}
B5563ee:{NFSU2_TR(0x5563ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5563f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5563f1:L5563f1:{c.instructions+=1;NFSU2_TR(0x5563f1);
{goto L556456;}
}
B5563f3:L5563f3:{c.instructions+=2;NFSU2_TR(0x5563f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5563f9:{NFSU2_TR(0x5563f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556456;}}
}
B5563fb:L5563fb:{c.instructions+=6;NFSU2_TR(0x5563fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5563fe:{NFSU2_TR(0x5563fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556400:{NFSU2_TR(0x556400);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556405:{NFSU2_TR(0x556405);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55640a:{NFSU2_TR(0x55640a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55640b:{NFSU2_TR(0x55640b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556410ull));
TAIL_STATIC(0x537c00u,537);
}
B556410:L556410:{c.instructions+=10;NFSU2_TR(0x556410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556413:{NFSU2_TR(0x556413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B556416:{NFSU2_TR(0x556416);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B556418:{NFSU2_TR(0x556418);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55641a:{NFSU2_TR(0x55641a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x83a8b0ull))));
}
B55641f:{NFSU2_TR(0x55641f);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556424:{NFSU2_TR(0x556424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556425:{NFSU2_TR(0x556425);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B556428:{NFSU2_TR(0x556428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556429:{NFSU2_TR(0x556429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55642eull));
TAIL_STATIC(0x43dc00u,43d);
}
B55642e:L55642e:{c.instructions+=4;NFSU2_TR(0x55642e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556430:{NFSU2_TR(0x556430);
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
B556433:{NFSU2_TR(0x556433);
__builtin_memmove((R+4),(R+28),4);
}
B556435:{NFSU2_TR(0x556435);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556438ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556438:L556438:{c.instructions+=3;NFSU2_TR(0x556438);
u8 U[4];
w4(U+0,u32(0xda5b8712ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55643d:{NFSU2_TR(0x55643d);
__builtin_memmove((R+4),(R+28),4);
}
B55643f:{NFSU2_TR(0x55643f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556444ull));
TAIL_STATIC(0x50d460u,50d);
}
B556444:L556444:{c.instructions+=4;NFSU2_TR(0x556444);
__builtin_memmove((R+20),(R+0),4);
}
B556446:{NFSU2_TR(0x556446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B556448:{NFSU2_TR(0x556448);
__builtin_memmove((R+4),(R+28),4);
}
B55644a:{NFSU2_TR(0x55644a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55644dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55644d:L55644d:{c.instructions+=1;NFSU2_TR(0x55644d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556454:L556454:{c.instructions+=1;NFSU2_TR(0x556454);
__builtin_memmove((R+12),(R+0),4);
}
B556456:L556456:{c.instructions+=3;NFSU2_TR(0x556456);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55645c:{NFSU2_TR(0x55645c);
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
B55645e:{NFSU2_TR(0x55645e);
if(r1(R+518)){{goto L556480;}}
}
B556460:L556460:{c.instructions+=2;NFSU2_TR(0x556460);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B556462:{NFSU2_TR(0x556462);
if(r1(R+518)){{goto L556480;}}
}
B556464:L556464:{c.instructions+=4;NFSU2_TR(0x556464);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B556467:{NFSU2_TR(0x556467);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B55646f:{NFSU2_TR(0x55646f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B556472:{NFSU2_TR(0x556472);
if(r1(R+518)){{goto L556480;}}
}
B556474:L556474:{c.instructions+=3;NFSU2_TR(0x556474);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55647a:{NFSU2_TR(0x55647a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55647b:{NFSU2_TR(0x55647b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556480ull));
TAIL_STATIC(0x458520u,458);
}
B556480:L556480:{c.instructions+=5;NFSU2_TR(0x556480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B556481:{NFSU2_TR(0x556481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556482:{NFSU2_TR(0x556482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B556483:{NFSU2_TR(0x556483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556484:{NFSU2_TR(0x556484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556490:L556490:{c.instructions+=7;NFSU2_TR(0x556490);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556491:{NFSU2_TR(0x556491);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556492:{NFSU2_TR(0x556492);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556493:{NFSU2_TR(0x556493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556494:{NFSU2_TR(0x556494);
w4(R+8,u32(0x818f0385ull));
}
B556499:{NFSU2_TR(0x556499);
__builtin_memmove((R+12),(R+4),4);
}
B55649b:{NFSU2_TR(0x55649b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5564a0ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5564a0:L5564a0:{c.instructions+=3;NFSU2_TR(0x5564a0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5564a2:{NFSU2_TR(0x5564a2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5564a4:{NFSU2_TR(0x5564a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5564b0;}}
}
B5564a6:L5564a6:{c.instructions+=2;NFSU2_TR(0x5564a6);
w4(R+8,u32(0xc01a6f63ull));
}
B5564ab:{NFSU2_TR(0x5564ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5564b0ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5564b0:L5564b0:{c.instructions+=4;NFSU2_TR(0x5564b0);
__builtin_memmove((R+24),(R+0),4);
}
B5564b2:{NFSU2_TR(0x5564b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5564b5:{NFSU2_TR(0x5564b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564b6:{NFSU2_TR(0x5564b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5564bbull));
TAIL_STATIC(0x50ca00u,50c);
}
B5564bb:L5564bb:{c.instructions+=6;NFSU2_TR(0x5564bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5564be:{NFSU2_TR(0x5564be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564c0:{NFSU2_TR(0x5564c0);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564c5:{NFSU2_TR(0x5564c5);
u8 U[4];
w4(U+0,u32(0x7902b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564ca:{NFSU2_TR(0x5564ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564cb:{NFSU2_TR(0x5564cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5564d0ull));
TAIL_STATIC(0x5426c0u,542);
}
B5564d0:L5564d0:{c.instructions+=4;NFSU2_TR(0x5564d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5564d3:{NFSU2_TR(0x5564d3);
u8 U[4];
w4(U+0,u32(0xf54cc524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564d8:{NFSU2_TR(0x5564d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5564d9:{NFSU2_TR(0x5564d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5564deull));
TAIL_STATIC(0x50c900u,50c);
}
B5564de:L5564de:{c.instructions+=5;NFSU2_TR(0x5564de);
__builtin_memmove((R+4),gp(0x7f70d0),4);
}
B5564e4:{NFSU2_TR(0x5564e4);
w4(R+0,u32(0x8ull));
}
B5564e9:{NFSU2_TR(0x5564e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5564ec:{NFSU2_TR(0x5564ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5564ee:{NFSU2_TR(0x5564ee);
if(r1(R+518)){{goto L5564f8;}}
}
B5564f0:L5564f0:{c.instructions+=2;NFSU2_TR(0x5564f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fca00),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5564f6:{NFSU2_TR(0x5564f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5564fd;}}
}
B5564f8:L5564f8:{c.instructions+=1;NFSU2_TR(0x5564f8);
w4(R+24,u32(0x783fe5ull));
}
B5564fd:L5564fd:{c.instructions+=2;NFSU2_TR(0x5564fd);
w4(R+8,u32(0x3de4eff0ull));
}
B556502:{NFSU2_TR(0x556502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556507ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B556507:L556507:{c.instructions+=2;NFSU2_TR(0x556507);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556509:{NFSU2_TR(0x556509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556515;}}
}
B55650b:L55650b:{c.instructions+=2;NFSU2_TR(0x55650b);
w4(R+8,u32(0xc01a6f63ull));
}
B556510:{NFSU2_TR(0x556510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556515ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B556515:L556515:{c.instructions+=8;NFSU2_TR(0x556515);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556516:{NFSU2_TR(0x556516);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556518:{NFSU2_TR(0x556518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556519:{NFSU2_TR(0x556519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55651a:{NFSU2_TR(0x55651a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55651c:{NFSU2_TR(0x55651c);
u8 U[4];
w4(U+0,u32(0x5b9d88b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556521:{NFSU2_TR(0x556521);
__builtin_memmove((R+4),(R+12),4);
}
B556523:{NFSU2_TR(0x556523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556528ull));
TAIL_STATIC(0x555f80u,555);
}
B556528:L556528:{c.instructions+=3;NFSU2_TR(0x556528);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55652b:{NFSU2_TR(0x55652b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55652d:{NFSU2_TR(0x55652d);
if(r1(R+518)){{goto L55654c;}}
}
B55652f:L55652f:{c.instructions+=2;NFSU2_TR(0x55652f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556530:{NFSU2_TR(0x556530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556535ull));
TAIL_STATIC(0x52cef0u,52c);
}
B556535:L556535:{c.instructions+=3;NFSU2_TR(0x556535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556538:{NFSU2_TR(0x556538);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55653a:{NFSU2_TR(0x55653a);
if(r1(R+518)){{goto L55654c;}}
}
B55653c:L55653c:{c.instructions+=3;NFSU2_TR(0x55653c);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556541:{NFSU2_TR(0x556541);
__builtin_memmove((R+4),(R+0),4);
}
B556543:{NFSU2_TR(0x556543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556548ull));
TAIL_STATIC(0x517f80u,517);
}
B556548:L556548:{c.instructions+=2;NFSU2_TR(0x556548);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55654a:{NFSU2_TR(0x55654a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556563;}}
}
B55654c:L55654c:{c.instructions+=3;NFSU2_TR(0x55654c);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B556551:{NFSU2_TR(0x556551);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556553:{NFSU2_TR(0x556553);
if(r1(R+518)){{goto L5565a9;}}
}
B556555:L556555:{c.instructions+=4;NFSU2_TR(0x556555);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556558:{NFSU2_TR(0x556558);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556559:{NFSU2_TR(0x556559);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55655e:{NFSU2_TR(0x55655e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556563ull));
TAIL_STATIC(0x52c570u,52c);
}
B556563:L556563:{c.instructions+=3;NFSU2_TR(0x556563);
__builtin_memmove((R+28),(R+0),4);
}
B556565:{NFSU2_TR(0x556565);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556567:{NFSU2_TR(0x556567);
if(r1(R+518)){{goto L5565a9;}}
}
B556569:L556569:{c.instructions+=3;NFSU2_TR(0x556569);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55656c:{NFSU2_TR(0x55656c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55656e:{NFSU2_TR(0x55656e);
if(r1(R+518)){{goto L5565a9;}}
}
B556570:L556570:{c.instructions+=2;NFSU2_TR(0x556570);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556575:{NFSU2_TR(0x556575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55657aull));
TAIL_STATIC(0x505450u,505);
}
B55657a:L55657a:{c.instructions+=4;NFSU2_TR(0x55657a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55657d:{NFSU2_TR(0x55657d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556580:{NFSU2_TR(0x556580);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556582:{NFSU2_TR(0x556582);
if(r1(R+518)){{goto L55658d;}}
}
B556584:L556584:{c.instructions+=3;NFSU2_TR(0x556584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556587:{NFSU2_TR(0x556587);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556589:{NFSU2_TR(0x556589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x556570u);}goto L556570;}}
}
B55658b:L55658b:{c.instructions+=1;NFSU2_TR(0x55658b);
{goto L5565a9;}
}
B55658d:L55658d:{c.instructions+=2;NFSU2_TR(0x55658d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55658f:{NFSU2_TR(0x55658f);
if(r1(R+518)){{goto L5565a9;}}
}
B556591:L556591:{c.instructions+=2;NFSU2_TR(0x556591);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B556594:{NFSU2_TR(0x556594);
if(r1(R+518)){{goto L5565a6;}}
}
B556596:L556596:{c.instructions+=3;NFSU2_TR(0x556596);
__builtin_memmove((R+4),(R+28),4);
}
B556598:{NFSU2_TR(0x556598);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55659b:{NFSU2_TR(0x55659b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5565a0ull));
TAIL_STATIC(0x517720u,517);
}
B5565a0:L5565a0:{c.instructions+=2;NFSU2_TR(0x5565a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5565a3:{NFSU2_TR(0x5565a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5565a6:L5565a6:{c.instructions+=1;NFSU2_TR(0x5565a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5565a9:L5565a9:{c.instructions+=3;NFSU2_TR(0x5565a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5565ac:{NFSU2_TR(0x5565ac);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5565ae:{NFSU2_TR(0x5565ae);
if(r1(R+518)){{goto L5565cd;}}
}
B5565b0:L5565b0:{c.instructions+=2;NFSU2_TR(0x5565b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5565b1:{NFSU2_TR(0x5565b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5565b6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5565b6:L5565b6:{c.instructions+=3;NFSU2_TR(0x5565b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5565b9:{NFSU2_TR(0x5565b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5565bb:{NFSU2_TR(0x5565bb);
if(r1(R+518)){{goto L5565cd;}}
}
B5565bd:L5565bd:{c.instructions+=3;NFSU2_TR(0x5565bd);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5565c2:{NFSU2_TR(0x5565c2);
__builtin_memmove((R+4),(R+0),4);
}
B5565c4:{NFSU2_TR(0x5565c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5565c9ull));
TAIL_STATIC(0x517f80u,517);
}
B5565c9:L5565c9:{c.instructions+=2;NFSU2_TR(0x5565c9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5565cb:{NFSU2_TR(0x5565cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5565e4;}}
}
B5565cd:L5565cd:{c.instructions+=3;NFSU2_TR(0x5565cd);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5565d2:{NFSU2_TR(0x5565d2);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5565d4:{NFSU2_TR(0x5565d4);
if(r1(R+518)){{goto L55662d;}}
}
B5565d6:L5565d6:{c.instructions+=4;NFSU2_TR(0x5565d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5565d9:{NFSU2_TR(0x5565d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5565da:{NFSU2_TR(0x5565da);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5565df:{NFSU2_TR(0x5565df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5565e4ull));
TAIL_STATIC(0x52c570u,52c);
}
B5565e4:L5565e4:{c.instructions+=3;NFSU2_TR(0x5565e4);
__builtin_memmove((R+28),(R+0),4);
}
B5565e6:{NFSU2_TR(0x5565e6);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5565e8:{NFSU2_TR(0x5565e8);
if(r1(R+518)){{goto L55662d;}}
}
B5565ea:L5565ea:{c.instructions+=3;NFSU2_TR(0x5565ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5565ed:{NFSU2_TR(0x5565ed);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5565ef:{NFSU2_TR(0x5565ef);
if(r1(R+518)){{goto L55662d;}}
}
B5565f1:L5565f1:{c.instructions+=2;NFSU2_TR(0x5565f1);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5565f6:{NFSU2_TR(0x5565f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5565fbull));
TAIL_STATIC(0x505450u,505);
}
B5565fb:L5565fb:{c.instructions+=4;NFSU2_TR(0x5565fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5565fe:{NFSU2_TR(0x5565fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556601:{NFSU2_TR(0x556601);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556603:{NFSU2_TR(0x556603);
if(r1(R+518)){{goto L556611;}}
}
B556605:L556605:{c.instructions+=3;NFSU2_TR(0x556605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556608:{NFSU2_TR(0x556608);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B55660a:{NFSU2_TR(0x55660a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5565f1u);}goto L5565f1;}}
}
B55660c:L55660c:{c.instructions+=5;NFSU2_TR(0x55660c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55660d:{NFSU2_TR(0x55660d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55660e:{NFSU2_TR(0x55660e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55660f:{NFSU2_TR(0x55660f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556610:{NFSU2_TR(0x556610);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556611:L556611:{c.instructions+=2;NFSU2_TR(0x556611);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B556613:{NFSU2_TR(0x556613);
if(r1(R+518)){{goto L55662d;}}
}
B556615:L556615:{c.instructions+=2;NFSU2_TR(0x556615);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B556618:{NFSU2_TR(0x556618);
if(r1(R+518)){{goto L55662a;}}
}
B55661a:L55661a:{c.instructions+=3;NFSU2_TR(0x55661a);
__builtin_memmove((R+4),(R+28),4);
}
B55661c:{NFSU2_TR(0x55661c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55661f:{NFSU2_TR(0x55661f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556624ull));
TAIL_STATIC(0x517720u,517);
}
B556624:L556624:{c.instructions+=2;NFSU2_TR(0x556624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556627:{NFSU2_TR(0x556627);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55662a:L55662a:{c.instructions+=1;NFSU2_TR(0x55662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55662d:L55662d:{c.instructions+=5;NFSU2_TR(0x55662d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55662e:{NFSU2_TR(0x55662e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55662f:{NFSU2_TR(0x55662f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B556630:{NFSU2_TR(0x556630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556631:{NFSU2_TR(0x556631);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556640:L556640:{c.instructions+=16;NFSU2_TR(0x556640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556641:{NFSU2_TR(0x556641);
__builtin_memmove((R+20),(R+16),4);
}
B556643:{NFSU2_TR(0x556643);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556645:{NFSU2_TR(0x556645);
u8 U[4];
w4(U+0,u32(0x7780f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55664a:{NFSU2_TR(0x55664a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556650:{NFSU2_TR(0x556650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556651:{NFSU2_TR(0x556651);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556658:{NFSU2_TR(0x556658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556659:{NFSU2_TR(0x556659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55665c:{NFSU2_TR(0x55665c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55665d:{NFSU2_TR(0x55665d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55665e:{NFSU2_TR(0x55665e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55665f:{NFSU2_TR(0x55665f);
__builtin_memmove((R+28),(R+4),4);
}
B556661:{NFSU2_TR(0x556661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556662:{NFSU2_TR(0x556662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556665:{NFSU2_TR(0x556665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55666aull));
TAIL_STATIC(0x552330u,552);
}
B55666a:L55666a:{c.instructions+=20;NFSU2_TR(0x55666a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55666c:{NFSU2_TR(0x55666c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556672:{NFSU2_TR(0x556672);
u8 U[4];
w4(U+0,u32(0x79cd64ull));
s4(u32(r4(R+28)),r4(U+0));
}
B556678:{NFSU2_TR(0x556678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55667e:{NFSU2_TR(0x55667e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556681:{NFSU2_TR(0x556681);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B556683:{NFSU2_TR(0x556683);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556686:{NFSU2_TR(0x556686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556689:{NFSU2_TR(0x556689);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55668c:{NFSU2_TR(0x55668c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55668f:{NFSU2_TR(0x55668f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556692:{NFSU2_TR(0x556692);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556695:{NFSU2_TR(0x556695);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556698:{NFSU2_TR(0x556698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55669b:{NFSU2_TR(0x55669b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55669e:{NFSU2_TR(0x55669e);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B5566a4:{NFSU2_TR(0x5566a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5566a7:{NFSU2_TR(0x5566a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5566a8:{NFSU2_TR(0x5566a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5566ac:{NFSU2_TR(0x5566ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5566b1ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5566b1:L5566b1:{c.instructions+=3;NFSU2_TR(0x5566b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5566b4:{NFSU2_TR(0x5566b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5566b6:{NFSU2_TR(0x5566b6);
if(r1(R+518)){{goto L5566ce;}}
}
B5566b8:L5566b8:{c.instructions+=2;NFSU2_TR(0x5566b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5566bb:{NFSU2_TR(0x5566bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5566ce;}}
}
B5566bd:L5566bd:{c.instructions+=5;NFSU2_TR(0x5566bd);
w4(R+4,u32(0xffull));
}
B5566c2:{NFSU2_TR(0x5566c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5566c5:{NFSU2_TR(0x5566c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5566c8:{NFSU2_TR(0x5566c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5566cb:{NFSU2_TR(0x5566cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5566ce:L5566ce:{c.instructions+=2;NFSU2_TR(0x5566ce);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5566d5:{NFSU2_TR(0x5566d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5566de;}}
}
B5566d7:L5566d7:{c.instructions+=1;NFSU2_TR(0x5566d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x9fe6dadaull));
s4(u32(r4(U+0)),r4(U+4));
}
B5566de:L5566de:{c.instructions+=3;NFSU2_TR(0x5566de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5566e1:{NFSU2_TR(0x5566e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5566e2:{NFSU2_TR(0x5566e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5566e7ull));
TAIL_STATIC(0x54f980u,54f);
}
B5566e7:L5566e7:{c.instructions+=2;NFSU2_TR(0x5566e7);
__builtin_memmove((R+4),(R+0),4);
}
B5566e9:{NFSU2_TR(0x5566e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5566eeull));
TAIL_STATIC(0x5208e0u,520);
}
B5566ee:L5566ee:{c.instructions+=2;NFSU2_TR(0x5566ee);
u8 U[5];
__builtin_memmove((U+3),gp(0x838980),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5566f4:{NFSU2_TR(0x5566f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55672b;}}
}
B5566f6:L5566f6:{c.instructions+=7;NFSU2_TR(0x5566f6);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5566fc:{NFSU2_TR(0x5566fc);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B556701:{NFSU2_TR(0x556701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556703:{NFSU2_TR(0x556703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556704:{NFSU2_TR(0x556704);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556709:{NFSU2_TR(0x556709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55670a:{NFSU2_TR(0x55670a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55670dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55670d:L55670d:{c.instructions+=7;NFSU2_TR(0x55670d);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B556713:{NFSU2_TR(0x556713);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B556718:{NFSU2_TR(0x556718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55671a:{NFSU2_TR(0x55671a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55671b:{NFSU2_TR(0x55671b);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556720:{NFSU2_TR(0x556720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556721:{NFSU2_TR(0x556721);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556724ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556724:L556724:{c.instructions+=1;NFSU2_TR(0x556724);
s1(0x838980,u8(0x1ull));
}
B55672b:L55672b:{c.instructions+=1;NFSU2_TR(0x55672b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556730ull));
TAIL_STATIC(0x5205b0u,520);
}
B556730:L556730:{c.instructions+=2;NFSU2_TR(0x556730);
__builtin_memmove((R+4),(R+28),4);
}
B556732:{NFSU2_TR(0x556732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556737ull));
TAIL_STATIC(0x520d60u,520);
}
B556737:L556737:{c.instructions+=2;NFSU2_TR(0x556737);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55673e:{NFSU2_TR(0x55673e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556756;}}
}
B556740:L556740:{c.instructions+=5;NFSU2_TR(0x556740);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556743:{NFSU2_TR(0x556743);
u8 U[4];
w4(U+0,u32(0xe1497a54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556748:{NFSU2_TR(0x556748);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55674d:{NFSU2_TR(0x55674d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55674e:{NFSU2_TR(0x55674e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556753ull));
TAIL_STATIC(0x495460u,495);
}
B556753:L556753:{c.instructions+=1;NFSU2_TR(0x556753);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B556756:L556756:{c.instructions+=2;NFSU2_TR(0x556756);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556760:{NFSU2_TR(0x556760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55676c;}}
}
B556762:L556762:{c.instructions+=4;NFSU2_TR(0x556762);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556764:{NFSU2_TR(0x556764);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556765:{NFSU2_TR(0x556765);
__builtin_memmove((R+4),(R+24),4);
}
B556767:{NFSU2_TR(0x556767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55676cull));
TAIL_STATIC(0x4cfd80u,4cf);
}
B55676c:L55676c:{c.instructions+=2;NFSU2_TR(0x55676c);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556771:{NFSU2_TR(0x556771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556776ull));
TAIL_STATIC(0x52cf60u,52c);
}
B556776:L556776:{c.instructions+=3;NFSU2_TR(0x556776);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556779:{NFSU2_TR(0x556779);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55677b:{NFSU2_TR(0x55677b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5567aa;}}
}
B55677d:L55677d:{c.instructions+=4;NFSU2_TR(0x55677d);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B556783:{NFSU2_TR(0x556783);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556785:{NFSU2_TR(0x556785);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556788:{NFSU2_TR(0x556788);
if(r1(R+518)){{goto L5567aa;}}
}
B55678a:L55678a:{c.instructions+=4;NFSU2_TR(0x55678a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55678c:{NFSU2_TR(0x55678c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55678d:{NFSU2_TR(0x55678d);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556792:{NFSU2_TR(0x556792);
if(r1(R+518)){{goto L55679e;}}
}
B556794:L556794:{c.instructions+=4;NFSU2_TR(0x556794);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556795:{NFSU2_TR(0x556795);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55679a:{NFSU2_TR(0x55679a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55679c:{NFSU2_TR(0x55679c);
{goto L5567a5;}
}
B55679e:L55679e:{c.instructions+=3;NFSU2_TR(0x55679e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55679f:{NFSU2_TR(0x55679f);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567a4:{NFSU2_TR(0x5567a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567a5:L5567a5:{c.instructions+=1;NFSU2_TR(0x5567a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5567aaull));
TAIL_STATIC(0x555d00u,555);
}
B5567aa:L5567aa:{c.instructions+=5;NFSU2_TR(0x5567aa);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B5567af:{NFSU2_TR(0x5567af);
__builtin_memmove((R+4),(R+0),4);
}
B5567b1:{NFSU2_TR(0x5567b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567b3:{NFSU2_TR(0x5567b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5567b7:{NFSU2_TR(0x5567b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5567bcull));
TAIL_STATIC(0x542990u,542);
}
B5567bc:L5567bc:{c.instructions+=6;NFSU2_TR(0x5567bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5567bf:{NFSU2_TR(0x5567bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5567c2:{NFSU2_TR(0x5567c2);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5567c8:{NFSU2_TR(0x5567c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567c9:{NFSU2_TR(0x5567c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567ca:{NFSU2_TR(0x5567ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5567cfull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5567cf:L5567cf:{c.instructions+=9;NFSU2_TR(0x5567cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5567d2:{NFSU2_TR(0x5567d2);
__builtin_memmove((R+0),(R+28),4);
}
B5567d4:{NFSU2_TR(0x5567d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5567d5:{NFSU2_TR(0x5567d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5567d6:{NFSU2_TR(0x5567d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5567d7:{NFSU2_TR(0x5567d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5567de:{NFSU2_TR(0x5567de);
__builtin_memmove((R+16),(R+20),4);
}
B5567e0:{NFSU2_TR(0x5567e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5567e1:{NFSU2_TR(0x5567e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5567f0:L5567f0:{c.instructions+=3;NFSU2_TR(0x5567f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5567f1:{NFSU2_TR(0x5567f1);
__builtin_memmove((R+24),(R+4),4);
}
B5567f3:{NFSU2_TR(0x5567f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5567f8ull));
{goto L556810;}
}
B5567f8:L5567f8:{c.instructions+=2;NFSU2_TR(0x5567f8);
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
B5567fd:{NFSU2_TR(0x5567fd);
if(r1(R+518)){{goto L556808;}}
}
B5567ff:L5567ff:{c.instructions+=2;NFSU2_TR(0x5567ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556800:{NFSU2_TR(0x556800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556805ull));
TAIL_STATIC(0x575630u,575);
}
B556805:L556805:{c.instructions+=1;NFSU2_TR(0x556805);
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
B556808:L556808:{c.instructions+=3;NFSU2_TR(0x556808);
__builtin_memmove((R+0),(R+24),4);
}
B55680a:{NFSU2_TR(0x55680a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55680b:{NFSU2_TR(0x55680b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556810:L556810:{c.instructions+=13;NFSU2_TR(0x556810);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556812:{NFSU2_TR(0x556812);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556817:{NFSU2_TR(0x556817);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55681d:{NFSU2_TR(0x55681d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55681e:{NFSU2_TR(0x55681e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556825:{NFSU2_TR(0x556825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556826:{NFSU2_TR(0x556826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556827:{NFSU2_TR(0x556827);
__builtin_memmove((R+24),(R+4),4);
}
B556829:{NFSU2_TR(0x556829);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55682d:{NFSU2_TR(0x55682d);
u8 U[4];
w4(U+0,u32(0x79cd64ull));
s4(u32(r4(R+24)),r4(U+0));
}
B556833:{NFSU2_TR(0x556833);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+4),(U+0),4);
}
B556839:{NFSU2_TR(0x556839);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556841:{NFSU2_TR(0x556841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556846ull));
TAIL_STATIC(0x49d870u,49d);
}
B556846:L556846:{c.instructions+=3;NFSU2_TR(0x556846);
__builtin_memmove((R+4),(R+24),4);
}
B556848:{NFSU2_TR(0x556848);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B556850:{NFSU2_TR(0x556850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556855ull));
TAIL_STATIC(0x4defb0u,4de);
}
B556855:L556855:{c.instructions+=5;NFSU2_TR(0x556855);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556859:{NFSU2_TR(0x556859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55685a:{NFSU2_TR(0x55685a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556861:{NFSU2_TR(0x556861);
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
B556864:{NFSU2_TR(0x556864);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556870:L556870:{c.instructions+=6;NFSU2_TR(0x556870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556871:{NFSU2_TR(0x556871);
__builtin_memmove((R+24),(R+4),4);
}
B556873:{NFSU2_TR(0x556873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556876:{NFSU2_TR(0x556876);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B556879:{NFSU2_TR(0x556879);
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
B55687b:{NFSU2_TR(0x55687b);
if(r1(R+518)){{goto L556928;}}
}
B556881:L556881:{c.instructions+=3;NFSU2_TR(0x556881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556887:{NFSU2_TR(0x556887);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556888:{NFSU2_TR(0x556888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55688dull));
TAIL_STATIC(0x52cf60u,52c);
}
B55688d:L55688d:{c.instructions+=3;NFSU2_TR(0x55688d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556890:{NFSU2_TR(0x556890);
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
B556892:{NFSU2_TR(0x556892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556928;}}
}
B556898:L556898:{c.instructions+=3;NFSU2_TR(0x556898);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55689e:{NFSU2_TR(0x55689e);
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
B5568a0:{NFSU2_TR(0x5568a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556928;}}
}
B5568a6:L5568a6:{c.instructions+=3;NFSU2_TR(0x5568a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5568a9:{NFSU2_TR(0x5568a9);
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
B5568ab:{NFSU2_TR(0x5568ab);
if(r1(R+518)){{goto L556928;}}
}
B5568ad:L5568ad:{c.instructions+=3;NFSU2_TR(0x5568ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5568b0:{NFSU2_TR(0x5568b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5568b2:{NFSU2_TR(0x5568b2);
if(r1(R+518)){{goto L5568c1;}}
}
B5568b4:L5568b4:{c.instructions+=3;NFSU2_TR(0x5568b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5568b7:{NFSU2_TR(0x5568b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5568ba:{NFSU2_TR(0x5568ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5568c1;}}
}
B5568bc:L5568bc:{c.instructions+=2;NFSU2_TR(0x5568bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5568bf:{NFSU2_TR(0x5568bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5568dc;}}
}
B5568c1:L5568c1:{c.instructions+=2;NFSU2_TR(0x5568c1);
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
B5568c3:{NFSU2_TR(0x5568c3);
if(r1(R+518)){{goto L556928;}}
}
B5568c5:L5568c5:{c.instructions+=3;NFSU2_TR(0x5568c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5568c8:{NFSU2_TR(0x5568c8);
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
B5568ca:{NFSU2_TR(0x5568ca);
if(r1(R+518)){{goto L556928;}}
}
B5568cc:L5568cc:{c.instructions+=3;NFSU2_TR(0x5568cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5568cf:{NFSU2_TR(0x5568cf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5568d2:{NFSU2_TR(0x5568d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L556928;}}
}
B5568d4:L5568d4:{c.instructions+=2;NFSU2_TR(0x5568d4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x98ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x98ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5568da:{NFSU2_TR(0x5568da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L556928;}}
}
B5568dc:L5568dc:{c.instructions+=2;NFSU2_TR(0x5568dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5568de:{NFSU2_TR(0x5568de);
if(r1(R+518)){{goto L5568ec;}}
}
B5568e0:L5568e0:{c.instructions+=3;NFSU2_TR(0x5568e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5568e3:{NFSU2_TR(0x5568e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5568e5:{NFSU2_TR(0x5568e5);
if(r1(R+518)){{goto L5568ec;}}
}
B5568e7:L5568e7:{c.instructions+=2;NFSU2_TR(0x5568e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5568ea:{NFSU2_TR(0x5568ea);
{goto L5568f1;}
}
B5568ec:L5568ec:{c.instructions+=1;NFSU2_TR(0x5568ec);
w4(R+0,u32(0xa9ull));
}
B5568f1:L5568f1:{c.instructions+=7;NFSU2_TR(0x5568f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5568f4:{NFSU2_TR(0x5568f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5568f5:{NFSU2_TR(0x5568f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5568fb:{NFSU2_TR(0x5568fb);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556900:{NFSU2_TR(0x556900);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556901:{NFSU2_TR(0x556901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556902:{NFSU2_TR(0x556902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556907ull));
TAIL_STATIC(0x555f10u,555);
}
B556907:L556907:{c.instructions+=6;NFSU2_TR(0x556907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55690a:{NFSU2_TR(0x55690a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55690d:{NFSU2_TR(0x55690d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55690e:{NFSU2_TR(0x55690e);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B556914:{NFSU2_TR(0x556914);
u8 U[4];
w4(U+0,u32(0x800421ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556919:{NFSU2_TR(0x556919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55691eull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55691e:L55691e:{c.instructions+=1;NFSU2_TR(0x55691e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556928:L556928:{c.instructions+=2;NFSU2_TR(0x556928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556929:{NFSU2_TR(0x556929);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556930:L556930:{c.instructions+=8;NFSU2_TR(0x556930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556931:{NFSU2_TR(0x556931);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556932:{NFSU2_TR(0x556932);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556933:{NFSU2_TR(0x556933);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556934:{NFSU2_TR(0x556934);
__builtin_memmove((R+24),(R+4),4);
}
B556936:{NFSU2_TR(0x556936);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55693c:{NFSU2_TR(0x55693c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55693e:{NFSU2_TR(0x55693e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556943ull));
TAIL_STATIC(0x458520u,458);
}
B556943:L556943:{c.instructions+=4;NFSU2_TR(0x556943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556946:{NFSU2_TR(0x556946);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55694b:{NFSU2_TR(0x55694b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55694c:{NFSU2_TR(0x55694c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556951ull));
TAIL_STATIC(0x495520u,495);
}
B556951:L556951:{c.instructions+=5;NFSU2_TR(0x556951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556954:{NFSU2_TR(0x556954);
u8 U[4];
w4(U+0,u32(0x56da42e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556959:{NFSU2_TR(0x556959);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55695e:{NFSU2_TR(0x55695e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55695f:{NFSU2_TR(0x55695f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556964ull));
TAIL_STATIC(0x495460u,495);
}
B556964:L556964:{c.instructions+=5;NFSU2_TR(0x556964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B556967:{NFSU2_TR(0x556967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55696a:{NFSU2_TR(0x55696a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55696d:{NFSU2_TR(0x55696d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B556972:{NFSU2_TR(0x556972);
if(r1(R+518)){{goto L556993;}}
}
B556974:L556974:{c.instructions+=4;NFSU2_TR(0x556974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556977:{NFSU2_TR(0x556977);
u8 U[4];
w4(U+0,u32(0xa2285688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55697c:{NFSU2_TR(0x55697c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55697d:{NFSU2_TR(0x55697d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556982ull));
TAIL_STATIC(0x495520u,495);
}
B556982:L556982:{c.instructions+=4;NFSU2_TR(0x556982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556985:{NFSU2_TR(0x556985);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55698a:{NFSU2_TR(0x55698a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55698b:{NFSU2_TR(0x55698b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556990ull));
TAIL_STATIC(0x495520u,495);
}
B556990:L556990:{c.instructions+=1;NFSU2_TR(0x556990);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B556993:L556993:{c.instructions+=6;NFSU2_TR(0x556993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B556996:{NFSU2_TR(0x556996);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B556998:{NFSU2_TR(0x556998);
w4(R+12,u32(0x1ull));
}
B55699d:{NFSU2_TR(0x55699d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5569a3:{NFSU2_TR(0x5569a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5569a7:{NFSU2_TR(0x5569a7);
if(r1(R+518)){{goto L5569dc;}}
}
B5569a9:L5569a9:{c.instructions+=4;NFSU2_TR(0x5569a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5569ac:{NFSU2_TR(0x5569ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5569ae:{NFSU2_TR(0x5569ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5569b4:{NFSU2_TR(0x5569b4);
if(r1(R+518)){{goto L5569dc;}}
}
B5569b6:L5569b6:{c.instructions+=2;NFSU2_TR(0x5569b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5569b7:{NFSU2_TR(0x5569b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5569bcull));
TAIL_STATIC(0x52cf60u,52c);
}
B5569bc:L5569bc:{c.instructions+=3;NFSU2_TR(0x5569bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5569bf:{NFSU2_TR(0x5569bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5569c1:{NFSU2_TR(0x5569c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5569dc;}}
}
B5569c3:L5569c3:{c.instructions+=7;NFSU2_TR(0x5569c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5569c6:{NFSU2_TR(0x5569c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5569cc:{NFSU2_TR(0x5569cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5569cd:{NFSU2_TR(0x5569cd);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5569d2:{NFSU2_TR(0x5569d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5569d3:{NFSU2_TR(0x5569d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5569d4:{NFSU2_TR(0x5569d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5569d9ull));
TAIL_STATIC(0x555f10u,555);
}
B5569d9:L5569d9:{c.instructions+=1;NFSU2_TR(0x5569d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5569dc:L5569dc:{c.instructions+=7;NFSU2_TR(0x5569dc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5569de:{NFSU2_TR(0x5569de);
__builtin_memmove(gp(0x8a1c68),(R+4),4);
}
B5569e4:{NFSU2_TR(0x5569e4);
__builtin_memmove(gp(0x8363f8),(R+4),4);
}
B5569ea:{NFSU2_TR(0x5569ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5569ed:{NFSU2_TR(0x5569ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
}
B5569f0:{NFSU2_TR(0x5569f0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5569f5:{NFSU2_TR(0x5569f5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L556a9a;}}
}
B5569fb:L5569fb:{c.instructions+=2;NFSU2_TR(0x5569fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x556bdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B556a02:{NFSU2_TR(0x556a02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x556bc0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556a09:L556a09:{c.instructions+=5;NFSU2_TR(0x556a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556a0c:{NFSU2_TR(0x556a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a12:{NFSU2_TR(0x556a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd3e04e45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556a19:{NFSU2_TR(0x556a19);
__builtin_memmove(gp(0x8a1c68),(R+12),4);
}
B556a1f:{NFSU2_TR(0x556a1f);
{goto L556a9a;}
}
B556a21:L556a21:{c.instructions+=5;NFSU2_TR(0x556a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556a24:{NFSU2_TR(0x556a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a2a:{NFSU2_TR(0x556a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd3e04e45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556a31:{NFSU2_TR(0x556a31);
__builtin_memmove(gp(0x8363f8),(R+12),4);
}
B556a37:{NFSU2_TR(0x556a37);
{goto L556a9a;}
}
B556a39:L556a39:{c.instructions+=4;NFSU2_TR(0x556a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556a3c:{NFSU2_TR(0x556a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a42:{NFSU2_TR(0x556a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xa93e10e9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556a49:{NFSU2_TR(0x556a49);
{goto L556a9a;}
}
B556a4b:L556a4b:{c.instructions+=4;NFSU2_TR(0x556a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556a4e:{NFSU2_TR(0x556a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a54:{NFSU2_TR(0x556a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd3e04e45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556a5b:{NFSU2_TR(0x556a5b);
{goto L556a9a;}
}
B556a5d:L556a5d:{c.instructions+=5;NFSU2_TR(0x556a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556a60:{NFSU2_TR(0x556a60);
u8 U[4];
w4(U+0,u32(0xbd620bb1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a65:{NFSU2_TR(0x556a65);
u8 U[4];
w4(U+0,u32(0xc318ff76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a6a:{NFSU2_TR(0x556a6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a6b:{NFSU2_TR(0x556a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556a70ull));
TAIL_STATIC(0x495460u,495);
}
B556a70:L556a70:{c.instructions+=8;NFSU2_TR(0x556a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556a73:{NFSU2_TR(0x556a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B556a76:{NFSU2_TR(0x556a76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a77:{NFSU2_TR(0x556a77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a78:{NFSU2_TR(0x556a78);
__builtin_memmove((R+4),(R+24),4);
}
B556a7a:{NFSU2_TR(0x556a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a80:{NFSU2_TR(0x556a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd3e04e45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556a87:{NFSU2_TR(0x556a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556a8cull));
TAIL_STATIC(0x54fb70u,54f);
}
B556a8c:L556a8c:{c.instructions+=1;NFSU2_TR(0x556a8c);
{goto L556a9a;}
}
B556a8e:L556a8e:{c.instructions+=3;NFSU2_TR(0x556a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556a91:{NFSU2_TR(0x556a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a97:{NFSU2_TR(0x556a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556a9a:L556a9a:{c.instructions+=2;NFSU2_TR(0x556a9a);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556a9f:{NFSU2_TR(0x556a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556aa4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B556aa4:L556aa4:{c.instructions+=4;NFSU2_TR(0x556aa4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B556aa6:{NFSU2_TR(0x556aa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556aa9:{NFSU2_TR(0x556aa9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556aab:{NFSU2_TR(0x556aab);
if(r1(R+518)){{goto L556abd;}}
}
B556aad:L556aad:{c.instructions+=3;NFSU2_TR(0x556aad);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ab2:{NFSU2_TR(0x556ab2);
__builtin_memmove((R+4),(R+0),4);
}
B556ab4:{NFSU2_TR(0x556ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ab9ull));
TAIL_STATIC(0x517f80u,517);
}
B556ab9:L556ab9:{c.instructions+=2;NFSU2_TR(0x556ab9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556abb:{NFSU2_TR(0x556abb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556ad8;}}
}
B556abd:L556abd:{c.instructions+=3;NFSU2_TR(0x556abd);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B556ac2:{NFSU2_TR(0x556ac2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556ac4:{NFSU2_TR(0x556ac4);
if(r1(R+518)){{goto L556b1e;}}
}
B556ac6:L556ac6:{c.instructions+=4;NFSU2_TR(0x556ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556ac9:{NFSU2_TR(0x556ac9);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ace:{NFSU2_TR(0x556ace);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ad3:{NFSU2_TR(0x556ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ad8ull));
TAIL_STATIC(0x52c570u,52c);
}
B556ad8:L556ad8:{c.instructions+=3;NFSU2_TR(0x556ad8);
__builtin_memmove((R+28),(R+0),4);
}
B556ada:{NFSU2_TR(0x556ada);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556adc:{NFSU2_TR(0x556adc);
if(r1(R+518)){{goto L556b1e;}}
}
B556ade:L556ade:{c.instructions+=3;NFSU2_TR(0x556ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556ae1:{NFSU2_TR(0x556ae1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556ae3:{NFSU2_TR(0x556ae3);
if(r1(R+518)){{goto L556b1e;}}
}
B556ae5:L556ae5:{c.instructions+=2;NFSU2_TR(0x556ae5);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556aea:{NFSU2_TR(0x556aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556aefull));
TAIL_STATIC(0x505450u,505);
}
B556aef:L556aef:{c.instructions+=4;NFSU2_TR(0x556aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556af2:{NFSU2_TR(0x556af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556af5:{NFSU2_TR(0x556af5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556af7:{NFSU2_TR(0x556af7);
if(r1(R+518)){{goto L556b02;}}
}
B556af9:L556af9:{c.instructions+=3;NFSU2_TR(0x556af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556afc:{NFSU2_TR(0x556afc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556afe:{NFSU2_TR(0x556afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x556ae5u);}goto L556ae5;}}
}
B556b00:L556b00:{c.instructions+=1;NFSU2_TR(0x556b00);
{goto L556b1e;}
}
B556b02:L556b02:{c.instructions+=2;NFSU2_TR(0x556b02);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556b04:{NFSU2_TR(0x556b04);
if(r1(R+518)){{goto L556b1e;}}
}
B556b06:L556b06:{c.instructions+=2;NFSU2_TR(0x556b06);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B556b09:{NFSU2_TR(0x556b09);
if(r1(R+518)){{goto L556b1b;}}
}
B556b0b:L556b0b:{c.instructions+=3;NFSU2_TR(0x556b0b);
__builtin_memmove((R+4),(R+28),4);
}
B556b0d:{NFSU2_TR(0x556b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556b10:{NFSU2_TR(0x556b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556b15ull));
TAIL_STATIC(0x517720u,517);
}
B556b15:L556b15:{c.instructions+=2;NFSU2_TR(0x556b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556b18:{NFSU2_TR(0x556b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556b1b:L556b1b:{c.instructions+=1;NFSU2_TR(0x556b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556b1e:L556b1e:{c.instructions+=2;NFSU2_TR(0x556b1e);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556b23:{NFSU2_TR(0x556b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556b28ull));
TAIL_STATIC(0x52cef0u,52c);
}
B556b28:L556b28:{c.instructions+=3;NFSU2_TR(0x556b28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556b2b:{NFSU2_TR(0x556b2b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556b2d:{NFSU2_TR(0x556b2d);
if(r1(R+518)){{goto L556b3f;}}
}
B556b2f:L556b2f:{c.instructions+=3;NFSU2_TR(0x556b2f);
u8 U[4];
w4(U+0,u32(0xf1e6850bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556b34:{NFSU2_TR(0x556b34);
__builtin_memmove((R+4),(R+0),4);
}
B556b36:{NFSU2_TR(0x556b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556b3bull));
TAIL_STATIC(0x517f80u,517);
}
B556b3b:L556b3b:{c.instructions+=2;NFSU2_TR(0x556b3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556b3d:{NFSU2_TR(0x556b3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556b5a;}}
}
B556b3f:L556b3f:{c.instructions+=3;NFSU2_TR(0x556b3f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B556b44:{NFSU2_TR(0x556b44);
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
B556b46:{NFSU2_TR(0x556b46);
if(r1(R+518)){{goto L556bb3;}}
}
B556b48:L556b48:{c.instructions+=4;NFSU2_TR(0x556b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556b4b:{NFSU2_TR(0x556b4b);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556b50:{NFSU2_TR(0x556b50);
u8 U[4];
w4(U+0,u32(0xf1e6850bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556b55:{NFSU2_TR(0x556b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556b5aull));
TAIL_STATIC(0x52c570u,52c);
}
B556b5a:L556b5a:{c.instructions+=3;NFSU2_TR(0x556b5a);
__builtin_memmove((R+28),(R+0),4);
}
B556b5c:{NFSU2_TR(0x556b5c);
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
B556b5e:{NFSU2_TR(0x556b5e);
if(r1(R+518)){{goto L556bb3;}}
}
B556b60:L556b60:{c.instructions+=3;NFSU2_TR(0x556b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556b63:{NFSU2_TR(0x556b63);
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
B556b65:{NFSU2_TR(0x556b65);
if(r1(R+518)){{goto L556bb3;}}
}
B556b67:L556b67:{c.instructions+=1;NFSU2_TR(0x556b67);
{goto L556b70;}
}
B556b70:L556b70:{c.instructions+=2;NFSU2_TR(0x556b70);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556b75:{NFSU2_TR(0x556b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556b7aull));
TAIL_STATIC(0x505450u,505);
}
B556b7a:L556b7a:{c.instructions+=4;NFSU2_TR(0x556b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556b7d:{NFSU2_TR(0x556b7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556b80:{NFSU2_TR(0x556b80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556b82:{NFSU2_TR(0x556b82);
if(r1(R+518)){{goto L556b97;}}
}
B556b84:L556b84:{c.instructions+=3;NFSU2_TR(0x556b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B556b87:{NFSU2_TR(0x556b87);
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
B556b89:{NFSU2_TR(0x556b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x556b70u);}goto L556b70;}}
}
B556b8b:L556b8b:{c.instructions+=6;NFSU2_TR(0x556b8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B556b8c:{NFSU2_TR(0x556b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556b8d:{NFSU2_TR(0x556b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B556b8e:{NFSU2_TR(0x556b8e);
s1(0x83854c,u8(0x0ull));
}
B556b95:{NFSU2_TR(0x556b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556b96:{NFSU2_TR(0x556b96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556b97:L556b97:{c.instructions+=2;NFSU2_TR(0x556b97);
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
B556b99:{NFSU2_TR(0x556b99);
if(r1(R+518)){{goto L556bb3;}}
}
B556b9b:L556b9b:{c.instructions+=2;NFSU2_TR(0x556b9b);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B556b9e:{NFSU2_TR(0x556b9e);
if(r1(R+518)){{goto L556bb0;}}
}
B556ba0:L556ba0:{c.instructions+=3;NFSU2_TR(0x556ba0);
__builtin_memmove((R+4),(R+28),4);
}
B556ba2:{NFSU2_TR(0x556ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556ba5:{NFSU2_TR(0x556ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556baaull));
TAIL_STATIC(0x517720u,517);
}
B556baa:L556baa:{c.instructions+=2;NFSU2_TR(0x556baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556bad:{NFSU2_TR(0x556bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556bb0:L556bb0:{c.instructions+=1;NFSU2_TR(0x556bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556bb3:L556bb3:{c.instructions+=6;NFSU2_TR(0x556bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B556bb4:{NFSU2_TR(0x556bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556bb5:{NFSU2_TR(0x556bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B556bb6:{NFSU2_TR(0x556bb6);
s1(0x83854c,u8(0x0ull));
}
B556bbd:{NFSU2_TR(0x556bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556bbe:{NFSU2_TR(0x556bbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556c80:L556c80:{c.instructions+=15;NFSU2_TR(0x556c80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c81:{NFSU2_TR(0x556c81);
__builtin_memmove((R+20),(R+16),4);
}
B556c83:{NFSU2_TR(0x556c83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c85:{NFSU2_TR(0x556c85);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c8a:{NFSU2_TR(0x556c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556c90:{NFSU2_TR(0x556c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c91:{NFSU2_TR(0x556c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556c98:{NFSU2_TR(0x556c98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c99:{NFSU2_TR(0x556c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556c9c:{NFSU2_TR(0x556c9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c9d:{NFSU2_TR(0x556c9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556c9e:{NFSU2_TR(0x556c9e);
__builtin_memmove((R+24),(R+4),4);
}
B556ca0:{NFSU2_TR(0x556ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ca1:{NFSU2_TR(0x556ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556ca4:{NFSU2_TR(0x556ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ca9ull));
TAIL_STATIC(0x552330u,552);
}
B556ca9:L556ca9:{c.instructions+=9;NFSU2_TR(0x556ca9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B556cab:{NFSU2_TR(0x556cab);
u8 U[4];
w4(U+0,u32(0x79cd80ull));
s4(u32(r4(R+24)),r4(U+0));
}
B556cb1:{NFSU2_TR(0x556cb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556cb7:{NFSU2_TR(0x556cb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556cbd:{NFSU2_TR(0x556cbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556cc3:{NFSU2_TR(0x556cc3);
__builtin_memmove((R+0),gp(0x863444),4);
}
B556cc8:{NFSU2_TR(0x556cc8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556cca:{NFSU2_TR(0x556cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556ccd:{NFSU2_TR(0x556ccd);
if(r1(R+518)){{goto L556d12;}}
}
B556ccf:L556ccf:{c.instructions+=3;NFSU2_TR(0x556ccf);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B556cd5:{NFSU2_TR(0x556cd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556cd7:{NFSU2_TR(0x556cd7);
if(r1(R+518)){{goto L556d12;}}
}
B556cd9:L556cd9:{c.instructions+=5;NFSU2_TR(0x556cd9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B556cdb:{NFSU2_TR(0x556cdb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B556cdd:{NFSU2_TR(0x556cdd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B556cdf:{NFSU2_TR(0x556cdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B556ce6:{NFSU2_TR(0x556ce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556d12;}}
}
B556ce8:L556ce8:{c.instructions+=2;NFSU2_TR(0x556ce8);
w4(R+8,u32(0x6aa654c5ull));
}
B556ced:{NFSU2_TR(0x556ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556cf2ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B556cf2:L556cf2:{c.instructions+=2;NFSU2_TR(0x556cf2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556cf4:{NFSU2_TR(0x556cf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556d00;}}
}
B556cf6:L556cf6:{c.instructions+=2;NFSU2_TR(0x556cf6);
w4(R+8,u32(0xc01a6f63ull));
}
B556cfb:{NFSU2_TR(0x556cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d00ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B556d00:L556d00:{c.instructions+=5;NFSU2_TR(0x556d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556d03:{NFSU2_TR(0x556d03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d04:{NFSU2_TR(0x556d04);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d09:{NFSU2_TR(0x556d09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d0a:{NFSU2_TR(0x556d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d0full));
TAIL_STATIC(0x537b80u,537);
}
B556d0f:L556d0f:{c.instructions+=1;NFSU2_TR(0x556d0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B556d12:L556d12:{c.instructions+=4;NFSU2_TR(0x556d12);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B556d18:{NFSU2_TR(0x556d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556d1b:{NFSU2_TR(0x556d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d1c:{NFSU2_TR(0x556d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d21ull));
TAIL_STATIC(0x54f980u,54f);
}
B556d21:L556d21:{c.instructions+=2;NFSU2_TR(0x556d21);
__builtin_memmove((R+4),(R+0),4);
}
B556d23:{NFSU2_TR(0x556d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d28ull));
TAIL_STATIC(0x5208e0u,520);
}
B556d28:L556d28:{c.instructions+=2;NFSU2_TR(0x556d28);
u8 U[5];
__builtin_memmove((U+3),gp(0x838980),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B556d2e:{NFSU2_TR(0x556d2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556d65;}}
}
B556d30:L556d30:{c.instructions+=7;NFSU2_TR(0x556d30);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B556d36:{NFSU2_TR(0x556d36);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B556d3b:{NFSU2_TR(0x556d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556d3d:{NFSU2_TR(0x556d3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d3e:{NFSU2_TR(0x556d3e);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d43:{NFSU2_TR(0x556d43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d44:{NFSU2_TR(0x556d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556d47:L556d47:{c.instructions+=7;NFSU2_TR(0x556d47);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B556d4d:{NFSU2_TR(0x556d4d);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B556d52:{NFSU2_TR(0x556d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556d54:{NFSU2_TR(0x556d54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d55:{NFSU2_TR(0x556d55);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d5a:{NFSU2_TR(0x556d5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d5b:{NFSU2_TR(0x556d5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556d5e:L556d5e:{c.instructions+=1;NFSU2_TR(0x556d5e);
s1(0x838980,u8(0x1ull));
}
B556d65:L556d65:{c.instructions+=1;NFSU2_TR(0x556d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d6aull));
TAIL_STATIC(0x5205b0u,520);
}
B556d6a:L556d6a:{c.instructions+=2;NFSU2_TR(0x556d6a);
__builtin_memmove((R+4),(R+24),4);
}
B556d6c:{NFSU2_TR(0x556d6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d71ull));
TAIL_STATIC(0x5304f0u,530);
}
B556d71:L556d71:{c.instructions+=2;NFSU2_TR(0x556d71);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556d78:{NFSU2_TR(0x556d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556d90;}}
}
B556d7a:L556d7a:{c.instructions+=5;NFSU2_TR(0x556d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556d7d:{NFSU2_TR(0x556d7d);
u8 U[4];
w4(U+0,u32(0xdccd75f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d82:{NFSU2_TR(0x556d82);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d87:{NFSU2_TR(0x556d87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d88:{NFSU2_TR(0x556d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d8dull));
TAIL_STATIC(0x495460u,495);
}
B556d8d:L556d8d:{c.instructions+=1;NFSU2_TR(0x556d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B556d90:L556d90:{c.instructions+=3;NFSU2_TR(0x556d90);
__builtin_memmove((R+8),gp(0x7fa1b4),4);
}
B556d96:{NFSU2_TR(0x556d96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556d97:{NFSU2_TR(0x556d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556d9cull));
TAIL_STATIC(0x52cef0u,52c);
}
B556d9c:L556d9c:{c.instructions+=3;NFSU2_TR(0x556d9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556d9f:{NFSU2_TR(0x556d9f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556da1:{NFSU2_TR(0x556da1);
if(r1(R+518)){{goto L556daf;}}
}
B556da3:L556da3:{c.instructions+=4;NFSU2_TR(0x556da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556da6:{NFSU2_TR(0x556da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556da9:{NFSU2_TR(0x556da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556dac:{NFSU2_TR(0x556dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556daf:L556daf:{c.instructions+=2;NFSU2_TR(0x556daf);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556db4:{NFSU2_TR(0x556db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556db9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B556db9:L556db9:{c.instructions+=3;NFSU2_TR(0x556db9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556dbc:{NFSU2_TR(0x556dbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B556dbe:{NFSU2_TR(0x556dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556ded;}}
}
B556dc0:L556dc0:{c.instructions+=4;NFSU2_TR(0x556dc0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B556dc6:{NFSU2_TR(0x556dc6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556dc8:{NFSU2_TR(0x556dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556dcb:{NFSU2_TR(0x556dcb);
if(r1(R+518)){{goto L556ded;}}
}
B556dcd:L556dcd:{c.instructions+=4;NFSU2_TR(0x556dcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556dcf:{NFSU2_TR(0x556dcf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556dd0:{NFSU2_TR(0x556dd0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556dd5:{NFSU2_TR(0x556dd5);
if(r1(R+518)){{goto L556de1;}}
}
B556dd7:L556dd7:{c.instructions+=4;NFSU2_TR(0x556dd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556dd8:{NFSU2_TR(0x556dd8);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ddd:{NFSU2_TR(0x556ddd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ddf:{NFSU2_TR(0x556ddf);
{goto L556de8;}
}
B556de1:L556de1:{c.instructions+=3;NFSU2_TR(0x556de1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556de2:{NFSU2_TR(0x556de2);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556de7:{NFSU2_TR(0x556de7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556de8:L556de8:{c.instructions+=1;NFSU2_TR(0x556de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556dedull));
TAIL_STATIC(0x555d00u,555);
}
B556ded:L556ded:{c.instructions+=5;NFSU2_TR(0x556ded);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B556df2:{NFSU2_TR(0x556df2);
__builtin_memmove((R+4),(R+0),4);
}
B556df4:{NFSU2_TR(0x556df4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556df6:{NFSU2_TR(0x556df6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556dfa:{NFSU2_TR(0x556dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556dffull));
TAIL_STATIC(0x542990u,542);
}
B556dff:L556dff:{c.instructions+=6;NFSU2_TR(0x556dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B556e02:{NFSU2_TR(0x556e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556e05:{NFSU2_TR(0x556e05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e06:{NFSU2_TR(0x556e06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e07:{NFSU2_TR(0x556e07);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B556e0d:{NFSU2_TR(0x556e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556e12ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B556e12:L556e12:{c.instructions+=8;NFSU2_TR(0x556e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556e15:{NFSU2_TR(0x556e15);
__builtin_memmove((R+0),(R+24),4);
}
B556e17:{NFSU2_TR(0x556e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556e18:{NFSU2_TR(0x556e18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B556e19:{NFSU2_TR(0x556e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556e20:{NFSU2_TR(0x556e20);
__builtin_memmove((R+16),(R+20),4);
}
B556e22:{NFSU2_TR(0x556e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B556e23:{NFSU2_TR(0x556e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556e30:L556e30:{c.instructions+=3;NFSU2_TR(0x556e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e31:{NFSU2_TR(0x556e31);
__builtin_memmove((R+24),(R+4),4);
}
B556e33:{NFSU2_TR(0x556e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556e38ull));
{goto L556e50;}
}
B556e38:L556e38:{c.instructions+=2;NFSU2_TR(0x556e38);
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
B556e3d:{NFSU2_TR(0x556e3d);
if(r1(R+518)){{goto L556e48;}}
}
B556e3f:L556e3f:{c.instructions+=2;NFSU2_TR(0x556e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e40:{NFSU2_TR(0x556e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556e45ull));
TAIL_STATIC(0x575630u,575);
}
B556e45:L556e45:{c.instructions+=1;NFSU2_TR(0x556e45);
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
B556e48:L556e48:{c.instructions+=3;NFSU2_TR(0x556e48);
__builtin_memmove((R+0),(R+24),4);
}
B556e4a:{NFSU2_TR(0x556e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B556e4b:{NFSU2_TR(0x556e4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B556e50:L556e50:{c.instructions+=2;NFSU2_TR(0x556e50);
u8 U[4];
w4(U+0,u32(0x79cd80ull));
s4(u32(r4(R+4)),r4(U+0));
}
B556e56:{NFSU2_TR(0x556e56);
TAIL_STATIC(0x4defb0u,4de);
}
B556e60:L556e60:{c.instructions+=8;NFSU2_TR(0x556e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B556e63:{NFSU2_TR(0x556e63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e64:{NFSU2_TR(0x556e64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e65:{NFSU2_TR(0x556e65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e66:{NFSU2_TR(0x556e66);
__builtin_memmove((R+28),(R+4),4);
}
B556e68:{NFSU2_TR(0x556e68);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556e6a:{NFSU2_TR(0x556e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556e6e:{NFSU2_TR(0x556e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556e73ull));
TAIL_STATIC(0x575620u,575);
}
B556e73:L556e73:{c.instructions+=5;NFSU2_TR(0x556e73);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B556e75:{NFSU2_TR(0x556e75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B556e78:{NFSU2_TR(0x556e78);
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
B556e7a:{NFSU2_TR(0x556e7a);
w4(R+24,u32(0x3f800000ull));
}
B556e7f:{NFSU2_TR(0x556e7f);
if(r1(R+518)){{goto L556ec7;}}
}
B556e81:L556e81:{c.instructions+=19;NFSU2_TR(0x556e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xc7d3f6a7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556e88:{NFSU2_TR(0x556e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556e8b:{NFSU2_TR(0x556e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556e8e:{NFSU2_TR(0x556e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556e91:{NFSU2_TR(0x556e91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556e94:{NFSU2_TR(0x556e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556e98:{NFSU2_TR(0x556e98);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556e9b:{NFSU2_TR(0x556e9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556e9e:{NFSU2_TR(0x556e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xdf3fd1d6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556ea5:{NFSU2_TR(0x556ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556ea8:{NFSU2_TR(0x556ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556eab:{NFSU2_TR(0x556eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556eae:{NFSU2_TR(0x556eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556eb1:{NFSU2_TR(0x556eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556eb4:{NFSU2_TR(0x556eb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556eb8:{NFSU2_TR(0x556eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556ebb:{NFSU2_TR(0x556ebb);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+0)),r4(U+0));
}
B556ec1:{NFSU2_TR(0x556ec1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556ec5:{NFSU2_TR(0x556ec5);
{goto L556ec9;}
}
B556ec7:L556ec7:{c.instructions+=1;NFSU2_TR(0x556ec7);
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
B556ec9:L556ec9:{c.instructions+=4;NFSU2_TR(0x556ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B556ecb:{NFSU2_TR(0x556ecb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ecc:{NFSU2_TR(0x556ecc);
__builtin_memmove((R+4),(R+28),4);
}
B556ece:{NFSU2_TR(0x556ece);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ed1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B556ed1:L556ed1:{c.instructions+=5;NFSU2_TR(0x556ed1);
__builtin_memmove((R+8),gp(0x850078),4);
}
B556ed7:{NFSU2_TR(0x556ed7);
w4(R+4,u32(0x1ull));
}
B556edc:{NFSU2_TR(0x556edc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556ede:{NFSU2_TR(0x556ede);
w1(R+0,u8(0x1ull));
}
B556ee0:{NFSU2_TR(0x556ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556ef2;}}
}
B556ee2:L556ee2:{c.instructions+=2;NFSU2_TR(0x556ee2);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556ee8:{NFSU2_TR(0x556ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556ef2;}}
}
B556eea:L556eea:{c.instructions+=2;NFSU2_TR(0x556eea);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B556eec:{NFSU2_TR(0x556eec);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x162ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556ef2:L556ef2:{c.instructions+=3;NFSU2_TR(0x556ef2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B556ef4:{NFSU2_TR(0x556ef4);
s1(0x83855d,u8(0x1ull));
}
B556efb:{NFSU2_TR(0x556efb);
if(r1(R+518)){TAIL_STATIC(0x557027u,557);}
}
B556f01:L556f01:{c.instructions+=4;NFSU2_TR(0x556f01);
__builtin_memmove((R+24),(R+4),4);
}
B556f03:{NFSU2_TR(0x556f03);
u8 U[8];
__builtin_memmove((U+0),gp(0x863444),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556f09:{NFSU2_TR(0x556f09);
w4(R+0,u32(0x4ull));
}
B556f0e:{NFSU2_TR(0x556f0e);
if(r1(R+518)){{goto L556f28;}}
}
B556f10:L556f10:{c.instructions+=3;NFSU2_TR(0x556f10);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B556f16:{NFSU2_TR(0x556f16);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556f18:{NFSU2_TR(0x556f18);
if(r1(R+518)){{goto L556f28;}}
}
B556f1a:L556f1a:{c.instructions+=2;NFSU2_TR(0x556f1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B556f21:{NFSU2_TR(0x556f21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L556f28;}}
}
B556f23:L556f23:{c.instructions+=1;NFSU2_TR(0x556f23);
w4(R+0,u32(0x3ull));
}
B556f28:L556f28:{c.instructions+=2;NFSU2_TR(0x556f28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B556f2a:{NFSU2_TR(0x556f2a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x557022u,557);}
}
B556f30:L556f30:{c.instructions+=4;NFSU2_TR(0x556f30);
__builtin_memmove((R+0),gp(0x838994),4);
}
B556f35:{NFSU2_TR(0x556f35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f36:{NFSU2_TR(0x556f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f37:{NFSU2_TR(0x556f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f3cull));
TAIL_STATIC(0x500100u,500);
}
B556f3c:L556f3c:{c.instructions+=7;NFSU2_TR(0x556f3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f3d:{NFSU2_TR(0x556f3d);
u8 U[4];
w4(U+0,u32(0x79cdb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f42:{NFSU2_TR(0x556f42);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B556f46:{NFSU2_TR(0x556f46);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f48:{NFSU2_TR(0x556f48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f49:{NFSU2_TR(0x556f49);
__builtin_memmove((R+28),(R+0),4);
}
B556f4b:{NFSU2_TR(0x556f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f50ull));
TAIL_STATIC(0x50c960u,50c);
}
B556f50:L556f50:{c.instructions+=3;NFSU2_TR(0x556f50);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B556f54:{NFSU2_TR(0x556f54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f55:{NFSU2_TR(0x556f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f5aull));
TAIL_STATIC(0x43db50u,43d);
}
B556f5a:L556f5a:{c.instructions+=7;NFSU2_TR(0x556f5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f5b:{NFSU2_TR(0x556f5b);
u8 U[4];
w4(U+0,u32(0x79cd9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f60:{NFSU2_TR(0x556f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556f64:{NFSU2_TR(0x556f64);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B556f68:{NFSU2_TR(0x556f68);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f6a:{NFSU2_TR(0x556f6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f6b:{NFSU2_TR(0x556f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f70ull));
TAIL_STATIC(0x50c960u,50c);
}
B556f70:L556f70:{c.instructions+=3;NFSU2_TR(0x556f70);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B556f74:{NFSU2_TR(0x556f74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f75:{NFSU2_TR(0x556f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f7aull));
TAIL_STATIC(0x43db50u,43d);
}
B556f7a:L556f7a:{c.instructions+=3;NFSU2_TR(0x556f7a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556f7c:{NFSU2_TR(0x556f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556f80:{NFSU2_TR(0x556f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556f85ull));
TAIL_STATIC(0x575620u,575);
}
B556f85:L556f85:{c.instructions+=3;NFSU2_TR(0x556f85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B556f88:{NFSU2_TR(0x556f88);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B556f8a:{NFSU2_TR(0x556f8a);
if(r1(R+518)){{goto L556fe2;}}
}
B556f8c:L556f8c:{c.instructions+=24;NFSU2_TR(0x556f8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B556f90:{NFSU2_TR(0x556f90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B556f94:{NFSU2_TR(0x556f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556f97:{NFSU2_TR(0x556f97);
w4(R+4,u32(0x3f800000ull));
}
B556f9c:{NFSU2_TR(0x556f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556f9f:{NFSU2_TR(0x556f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fa2:{NFSU2_TR(0x556fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fa5:{NFSU2_TR(0x556fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fa8:{NFSU2_TR(0x556fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556fab:{NFSU2_TR(0x556fab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556faf:{NFSU2_TR(0x556faf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556fb2:{NFSU2_TR(0x556fb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B556fb5:{NFSU2_TR(0x556fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fb8:{NFSU2_TR(0x556fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fbb:{NFSU2_TR(0x556fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fbe:{NFSU2_TR(0x556fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fc1:{NFSU2_TR(0x556fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fc4:{NFSU2_TR(0x556fc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556fc8:{NFSU2_TR(0x556fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B556fcf:{NFSU2_TR(0x556fcf);
u8 U[4];
w4(U+0,u32(0x79b60cull));
s4(u32(r4(R+0)),r4(U+0));
}
B556fd5:{NFSU2_TR(0x556fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fd8:{NFSU2_TR(0x556fd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B556fdc:{NFSU2_TR(0x556fdc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fe0:{NFSU2_TR(0x556fe0);
{goto L556fe6;}
}
B556fe2:L556fe2:{c.instructions+=1;NFSU2_TR(0x556fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B556fe6:L556fe6:{c.instructions+=6;NFSU2_TR(0x556fe6);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B556fec:{NFSU2_TR(0x556fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B556fee:{NFSU2_TR(0x556fee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556fef:{NFSU2_TR(0x556fef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ff0:{NFSU2_TR(0x556ff0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ff1:{NFSU2_TR(0x556ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ff6ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B556ff6:L556ff6:{c.instructions+=2;NFSU2_TR(0x556ff6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B556ff7:{NFSU2_TR(0x556ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x556ffcull));
TAIL_STATIC(0x52a110u,52a);
}
B556ffc:L556ffc:{c.instructions+=2;NFSU2_TR(0x556ffc);
__builtin_memmove((R+4),(R+0),1);
}
B556ffe:{NFSU2_TR(0x556ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x557002u,557);
}
XIT:NFSU2_TR_EXIT(0x556,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
