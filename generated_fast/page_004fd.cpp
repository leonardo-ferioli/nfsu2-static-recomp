#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4c4(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4f3(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_4fa(u8* __restrict R,Cpu& c);
u32 body_4fb(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4fd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4fd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 page_4fd(Cpu& c){return body_4fd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4fd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4fd003:goto L4fd003;
case 0x4fd006:c.instructions+=2;goto B4fd006;
case 0x4fd007:c.instructions+=1;goto B4fd007;
case 0x4fd00c:goto L4fd00c;
case 0x4fd00f:c.instructions+=1;goto B4fd00f;
case 0x4fd014:goto L4fd014;
case 0x4fd01a:c.instructions+=1;goto B4fd01a;
case 0x4fd020:goto L4fd020;
case 0x4fd022:c.instructions+=1;goto B4fd022;
case 0x4fd027:goto L4fd027;
case 0x4fd02a:c.instructions+=1;goto B4fd02a;
case 0x4fd02f:goto L4fd02f;
case 0x4fd032:c.instructions+=2;goto B4fd032;
case 0x4fd034:c.instructions+=1;goto B4fd034;
case 0x4fd036:goto L4fd036;
case 0x4fd039:goto L4fd039;
case 0x4fd03c:c.instructions+=2;goto B4fd03c;
case 0x4fd03e:c.instructions+=1;goto B4fd03e;
case 0x4fd043:goto L4fd043;
case 0x4fd044:c.instructions+=2;goto B4fd044;
case 0x4fd046:c.instructions+=1;goto B4fd046;
case 0x4fd04b:goto L4fd04b;
case 0x4fd04d:c.instructions+=1;goto B4fd04d;
case 0x4fd04f:goto L4fd04f;
case 0x4fd055:c.instructions+=6;goto B4fd055;
case 0x4fd056:c.instructions+=5;goto B4fd056;
case 0x4fd058:c.instructions+=4;goto B4fd058;
case 0x4fd059:c.instructions+=3;goto B4fd059;
case 0x4fd05b:c.instructions+=2;goto B4fd05b;
case 0x4fd061:c.instructions+=1;goto B4fd061;
case 0x4fd066:goto L4fd066;
case 0x4fd06b:goto L4fd06b;
case 0x4fd06e:c.instructions+=5;goto B4fd06e;
case 0x4fd070:c.instructions+=4;goto B4fd070;
case 0x4fd075:c.instructions+=3;goto B4fd075;
case 0x4fd07a:c.instructions+=2;goto B4fd07a;
case 0x4fd07b:c.instructions+=1;goto B4fd07b;
case 0x4fd080:goto L4fd080;
case 0x4fd083:c.instructions+=2;goto B4fd083;
case 0x4fd085:c.instructions+=1;goto B4fd085;
case 0x4fd08a:goto L4fd08a;
case 0x4fd08d:c.instructions+=2;goto B4fd08d;
case 0x4fd08f:c.instructions+=1;goto B4fd08f;
case 0x4fd094:goto L4fd094;
case 0x4fd097:c.instructions+=3;goto B4fd097;
case 0x4fd09a:c.instructions+=2;goto B4fd09a;
case 0x4fd09c:c.instructions+=1;goto B4fd09c;
case 0x4fd09e:goto L4fd09e;
case 0x4fd0a0:c.instructions+=1;goto B4fd0a0;
case 0x4fd0a2:goto L4fd0a2;
case 0x4fd0a3:c.instructions+=1;goto B4fd0a3;
case 0x4fd0a8:goto L4fd0a8;
case 0x4fd0ab:c.instructions+=1;goto B4fd0ab;
case 0x4fd0ad:goto L4fd0ad;
case 0x4fd0ae:c.instructions+=2;goto B4fd0ae;
case 0x4fd0b0:c.instructions+=1;goto B4fd0b0;
case 0x4fd0b5:goto L4fd0b5;
case 0x4fd0b6:c.instructions+=4;goto B4fd0b6;
case 0x4fd0b7:c.instructions+=3;goto B4fd0b7;
case 0x4fd0b9:c.instructions+=2;goto B4fd0b9;
case 0x4fd0bf:c.instructions+=1;goto B4fd0bf;
case 0x4fd0c4:goto L4fd0c4;
case 0x4fd0c6:c.instructions+=1;goto B4fd0c6;
case 0x4fd0cb:goto L4fd0cb;
case 0x4fd0cf:c.instructions+=1;goto B4fd0cf;
case 0x4fd0d4:goto L4fd0d4;
case 0x4fd0da:c.instructions+=1;goto B4fd0da;
case 0x4fd0e0:goto L4fd0e0;
case 0x4fd0e6:goto L4fd0e6;
case 0x4fd0ec:c.instructions+=1;goto B4fd0ec;
case 0x4fd0ee:goto L4fd0ee;
case 0x4fd0f0:goto L4fd0f0;
case 0x4fd0f6:c.instructions+=1;goto B4fd0f6;
case 0x4fd0f8:goto L4fd0f8;
case 0x4fd0fe:c.instructions+=1;goto B4fd0fe;
case 0x4fd104:goto L4fd104;
case 0x4fd10a:c.instructions+=2;goto B4fd10a;
case 0x4fd10c:c.instructions+=1;goto B4fd10c;
case 0x4fd112:goto L4fd112;
case 0x4fd114:c.instructions+=1;goto B4fd114;
case 0x4fd119:goto L4fd119;
case 0x4fd11e:goto L4fd11e;
case 0x4fd124:c.instructions+=2;goto B4fd124;
case 0x4fd126:c.instructions+=1;goto B4fd126;
case 0x4fd12c:goto L4fd12c;
case 0x4fd12d:c.instructions+=3;goto B4fd12d;
case 0x4fd12f:c.instructions+=2;goto B4fd12f;
case 0x4fd135:c.instructions+=1;goto B4fd135;
case 0x4fd13a:goto L4fd13a;
case 0x4fd13f:goto L4fd13f;
case 0x4fd145:c.instructions+=2;goto B4fd145;
case 0x4fd148:c.instructions+=1;goto B4fd148;
case 0x4fd14e:goto L4fd14e;
case 0x4fd14f:c.instructions+=3;goto B4fd14f;
case 0x4fd151:c.instructions+=2;goto B4fd151;
case 0x4fd157:c.instructions+=1;goto B4fd157;
case 0x4fd15c:goto L4fd15c;
case 0x4fd161:goto L4fd161;
case 0x4fd167:c.instructions+=1;goto B4fd167;
case 0x4fd16d:goto L4fd16d;
case 0x4fd174:c.instructions+=3;goto B4fd174;
case 0x4fd17b:c.instructions+=2;goto B4fd17b;
case 0x4fd17d:c.instructions+=1;goto B4fd17d;
case 0x4fd182:goto L4fd182;
case 0x4fd187:goto L4fd187;
case 0x4fd18e:c.instructions+=1;goto B4fd18e;
case 0x4fd190:goto L4fd190;
case 0x4fd196:c.instructions+=2;goto B4fd196;
case 0x4fd198:c.instructions+=1;goto B4fd198;
case 0x4fd19a:goto L4fd19a;
case 0x4fd19b:c.instructions+=2;goto B4fd19b;
case 0x4fd19d:c.instructions+=1;goto B4fd19d;
case 0x4fd1a2:goto L4fd1a2;
case 0x4fd1a4:c.instructions+=1;goto B4fd1a4;
case 0x4fd1a6:goto L4fd1a6;
case 0x4fd1a9:c.instructions+=3;goto B4fd1a9;
case 0x4fd1ae:c.instructions+=2;goto B4fd1ae;
case 0x4fd1b5:c.instructions+=1;goto B4fd1b5;
case 0x4fd1ba:goto L4fd1ba;
case 0x4fd1bb:c.instructions+=5;goto B4fd1bb;
case 0x4fd1c0:c.instructions+=4;goto B4fd1c0;
case 0x4fd1c5:c.instructions+=3;goto B4fd1c5;
case 0x4fd1ca:c.instructions+=2;goto B4fd1ca;
case 0x4fd1cb:c.instructions+=1;goto B4fd1cb;
case 0x4fd1d0:goto L4fd1d0;
case 0x4fd1d3:c.instructions+=1;goto B4fd1d3;
case 0x4fd1d9:goto L4fd1d9;
case 0x4fd1df:c.instructions+=3;goto B4fd1df;
case 0x4fd1e5:c.instructions+=2;goto B4fd1e5;
case 0x4fd1eb:c.instructions+=1;goto B4fd1eb;
case 0x4fd1f1:goto L4fd1f1;
case 0x4fd1f6:goto L4fd1f6;
case 0x4fd1f8:c.instructions+=1;goto B4fd1f8;
case 0x4fd1fd:goto L4fd1fd;
case 0x4fd1ff:c.instructions+=2;goto B4fd1ff;
case 0x4fd201:c.instructions+=1;goto B4fd201;
case 0x4fd207:goto L4fd207;
case 0x4fd20a:c.instructions+=8;goto B4fd20a;
case 0x4fd20d:c.instructions+=7;goto B4fd20d;
case 0x4fd210:c.instructions+=6;goto B4fd210;
case 0x4fd212:c.instructions+=5;goto B4fd212;
case 0x4fd213:c.instructions+=4;goto B4fd213;
case 0x4fd218:c.instructions+=3;goto B4fd218;
case 0x4fd21d:c.instructions+=2;goto B4fd21d;
case 0x4fd21e:c.instructions+=1;goto B4fd21e;
case 0x4fd223:goto L4fd223;
case 0x4fd226:c.instructions+=10;goto B4fd226;
case 0x4fd229:c.instructions+=9;goto B4fd229;
case 0x4fd22c:c.instructions+=8;goto B4fd22c;
case 0x4fd22e:c.instructions+=7;goto B4fd22e;
case 0x4fd230:c.instructions+=6;goto B4fd230;
case 0x4fd233:c.instructions+=5;goto B4fd233;
case 0x4fd234:c.instructions+=4;goto B4fd234;
case 0x4fd239:c.instructions+=3;goto B4fd239;
case 0x4fd23e:c.instructions+=2;goto B4fd23e;
case 0x4fd23f:c.instructions+=1;goto B4fd23f;
case 0x4fd244:goto L4fd244;
case 0x4fd24a:c.instructions+=6;goto B4fd24a;
case 0x4fd24d:c.instructions+=5;goto B4fd24d;
case 0x4fd24f:c.instructions+=4;goto B4fd24f;
case 0x4fd255:c.instructions+=3;goto B4fd255;
case 0x4fd25b:c.instructions+=2;goto B4fd25b;
case 0x4fd25e:c.instructions+=1;goto B4fd25e;
case 0x4fd263:goto L4fd263;
case 0x4fd268:goto L4fd268;
case 0x4fd26e:c.instructions+=1;goto B4fd26e;
case 0x4fd274:goto L4fd274;
case 0x4fd27a:goto L4fd27a;
case 0x4fd280:c.instructions+=1;goto B4fd280;
case 0x4fd282:goto L4fd282;
case 0x4fd288:c.instructions+=1;goto B4fd288;
case 0x4fd28e:goto L4fd28e;
case 0x4fd291:c.instructions+=4;goto B4fd291;
case 0x4fd292:c.instructions+=3;goto B4fd292;
case 0x4fd297:c.instructions+=2;goto B4fd297;
case 0x4fd298:c.instructions+=1;goto B4fd298;
case 0x4fd29d:goto L4fd29d;
case 0x4fd2a0:c.instructions+=1;goto B4fd2a0;
case 0x4fd2a5:goto L4fd2a5;
case 0x4fd2a8:c.instructions+=2;goto B4fd2a8;
case 0x4fd2ad:c.instructions+=1;goto B4fd2ad;
case 0x4fd2af:goto L4fd2af;
case 0x4fd2b2:c.instructions+=4;goto B4fd2b2;
case 0x4fd2b7:c.instructions+=3;goto B4fd2b7;
case 0x4fd2b8:c.instructions+=2;goto B4fd2b8;
case 0x4fd2b9:c.instructions+=1;goto B4fd2b9;
case 0x4fd2bb:goto L4fd2bb;
case 0x4fd2c0:c.instructions+=1;goto B4fd2c0;
case 0x4fd2c2:goto L4fd2c2;
case 0x4fd2c7:c.instructions+=4;goto B4fd2c7;
case 0x4fd2c8:c.instructions+=3;goto B4fd2c8;
case 0x4fd2cb:c.instructions+=2;goto B4fd2cb;
case 0x4fd2cc:c.instructions+=1;goto B4fd2cc;
case 0x4fd2ce:goto L4fd2ce;
case 0x4fd2d3:c.instructions+=1;goto B4fd2d3;
case 0x4fd2d5:goto L4fd2d5;
case 0x4fd2d8:c.instructions+=3;goto B4fd2d8;
case 0x4fd2dd:c.instructions+=2;goto B4fd2dd;
case 0x4fd2de:c.instructions+=1;goto B4fd2de;
case 0x4fd2df:goto L4fd2df;
case 0x4fd2e4:goto L4fd2e4;
case 0x4fd2e7:goto L4fd2e7;
case 0x4fd2f1:c.instructions+=3;goto B4fd2f1;
case 0x4fd2f4:c.instructions+=2;goto B4fd2f4;
case 0x4fd2fa:c.instructions+=1;goto B4fd2fa;
case 0x4fd2ff:goto L4fd2ff;
case 0x4fd302:c.instructions+=3;goto B4fd302;
case 0x4fd307:c.instructions+=2;goto B4fd307;
case 0x4fd309:c.instructions+=1;goto B4fd309;
case 0x4fd30b:goto L4fd30b;
case 0x4fd310:goto L4fd310;
case 0x4fd313:c.instructions+=1;goto B4fd313;
case 0x4fd315:goto L4fd315;
case 0x4fd318:c.instructions+=4;goto B4fd318;
case 0x4fd31d:c.instructions+=3;goto B4fd31d;
case 0x4fd322:c.instructions+=2;goto B4fd322;
case 0x4fd323:c.instructions+=1;goto B4fd323;
case 0x4fd328:goto L4fd328;
case 0x4fd32b:c.instructions+=1;goto B4fd32b;
case 0x4fd330:goto L4fd330;
case 0x4fd332:c.instructions+=1;goto B4fd332;
case 0x4fd337:goto L4fd337;
case 0x4fd338:c.instructions+=3;goto B4fd338;
case 0x4fd33a:c.instructions+=2;goto B4fd33a;
case 0x4fd33c:c.instructions+=1;goto B4fd33c;
case 0x4fd341:goto L4fd341;
case 0x4fd346:goto L4fd346;
case 0x4fd34b:c.instructions+=1;goto B4fd34b;
case 0x4fd34d:goto L4fd34d;
case 0x4fd352:goto L4fd352;
case 0x4fd355:c.instructions+=1;goto B4fd355;
case 0x4fd357:goto L4fd357;
case 0x4fd35a:c.instructions+=4;goto B4fd35a;
case 0x4fd35f:c.instructions+=3;goto B4fd35f;
case 0x4fd364:c.instructions+=2;goto B4fd364;
case 0x4fd365:c.instructions+=1;goto B4fd365;
case 0x4fd36a:goto L4fd36a;
case 0x4fd36d:c.instructions+=1;goto B4fd36d;
case 0x4fd36f:goto L4fd36f;
case 0x4fd371:c.instructions+=1;goto B4fd371;
case 0x4fd376:goto L4fd376;
case 0x4fd377:c.instructions+=3;goto B4fd377;
case 0x4fd379:c.instructions+=2;goto B4fd379;
case 0x4fd37b:c.instructions+=1;goto B4fd37b;
case 0x4fd380:goto L4fd380;
case 0x4fd382:goto L4fd382;
case 0x4fd387:c.instructions+=1;goto B4fd387;
case 0x4fd389:goto L4fd389;
case 0x4fd38e:goto L4fd38e;
case 0x4fd391:c.instructions+=1;goto B4fd391;
case 0x4fd393:goto L4fd393;
case 0x4fd396:c.instructions+=4;goto B4fd396;
case 0x4fd39b:c.instructions+=3;goto B4fd39b;
case 0x4fd3a0:c.instructions+=2;goto B4fd3a0;
case 0x4fd3a1:c.instructions+=1;goto B4fd3a1;
case 0x4fd3a6:goto L4fd3a6;
case 0x4fd3a9:c.instructions+=1;goto B4fd3a9;
case 0x4fd3ab:goto L4fd3ab;
case 0x4fd3ad:c.instructions+=1;goto B4fd3ad;
case 0x4fd3b2:goto L4fd3b2;
case 0x4fd3b3:c.instructions+=3;goto B4fd3b3;
case 0x4fd3b5:c.instructions+=2;goto B4fd3b5;
case 0x4fd3b7:c.instructions+=1;goto B4fd3b7;
case 0x4fd3bc:goto L4fd3bc;
case 0x4fd3be:goto L4fd3be;
case 0x4fd3c3:goto L4fd3c3;
case 0x4fd3c5:c.instructions+=2;goto B4fd3c5;
case 0x4fd3ca:c.instructions+=1;goto B4fd3ca;
case 0x4fd3cf:goto L4fd3cf;
case 0x4fd3d9:c.instructions+=3;goto B4fd3d9;
case 0x4fd3dc:c.instructions+=2;goto B4fd3dc;
case 0x4fd3e1:c.instructions+=1;goto B4fd3e1;
case 0x4fd3e3:goto L4fd3e3;
case 0x4fd3e9:c.instructions+=1;goto B4fd3e9;
case 0x4fd3eb:goto L4fd3eb;
case 0x4fd3f2:goto L4fd3f2;
case 0x4fd3f7:c.instructions+=2;goto B4fd3f7;
case 0x4fd3f9:c.instructions+=1;goto B4fd3f9;
case 0x4fd3fb:goto L4fd3fb;
case 0x4fd3ff:c.instructions+=10;goto B4fd3ff;
case 0x4fd403:c.instructions+=9;goto B4fd403;
case 0x4fd407:c.instructions+=8;goto B4fd407;
case 0x4fd409:c.instructions+=7;goto B4fd409;
case 0x4fd40a:c.instructions+=6;goto B4fd40a;
case 0x4fd40b:c.instructions+=5;goto B4fd40b;
case 0x4fd40c:c.instructions+=4;goto B4fd40c;
case 0x4fd412:c.instructions+=3;goto B4fd412;
case 0x4fd413:c.instructions+=2;goto B4fd413;
case 0x4fd415:c.instructions+=1;goto B4fd415;
case 0x4fd41a:goto L4fd41a;
case 0x4fd41d:c.instructions+=1;goto B4fd41d;
case 0x4fd41f:goto L4fd41f;
case 0x4fd421:c.instructions+=4;goto B4fd421;
case 0x4fd426:c.instructions+=3;goto B4fd426;
case 0x4fd42b:c.instructions+=2;goto B4fd42b;
case 0x4fd42d:c.instructions+=1;goto B4fd42d;
case 0x4fd432:goto L4fd432;
case 0x4fd433:c.instructions+=4;goto B4fd433;
case 0x4fd434:c.instructions+=3;goto B4fd434;
case 0x4fd435:c.instructions+=2;goto B4fd435;
case 0x4fd436:c.instructions+=1;goto B4fd436;
case 0x4fd450:goto L4fd450;
case 0x4fd452:c.instructions+=7;goto B4fd452;
case 0x4fd457:c.instructions+=6;goto B4fd457;
case 0x4fd45d:c.instructions+=5;goto B4fd45d;
case 0x4fd45e:c.instructions+=4;goto B4fd45e;
case 0x4fd465:c.instructions+=3;goto B4fd465;
case 0x4fd466:c.instructions+=2;goto B4fd466;
case 0x4fd46b:c.instructions+=1;goto B4fd46b;
case 0x4fd470:goto L4fd470;
case 0x4fd473:c.instructions+=4;goto B4fd473;
case 0x4fd477:c.instructions+=3;goto B4fd477;
case 0x4fd479:c.instructions+=2;goto B4fd479;
case 0x4fd481:c.instructions+=1;goto B4fd481;
case 0x4fd483:goto L4fd483;
case 0x4fd487:c.instructions+=3;goto B4fd487;
case 0x4fd488:c.instructions+=2;goto B4fd488;
case 0x4fd48a:c.instructions+=1;goto B4fd48a;
case 0x4fd48f:goto L4fd48f;
case 0x4fd493:c.instructions+=3;goto B4fd493;
case 0x4fd49a:c.instructions+=2;goto B4fd49a;
case 0x4fd49d:c.instructions+=1;goto B4fd49d;
case 0x4fd49e:goto L4fd49e;
case 0x4fd4a2:c.instructions+=4;goto B4fd4a2;
case 0x4fd4a4:c.instructions+=3;goto B4fd4a4;
case 0x4fd4ab:c.instructions+=2;goto B4fd4ab;
case 0x4fd4ae:c.instructions+=1;goto B4fd4ae;
case 0x4fd4b0:goto L4fd4b0;
case 0x4fd4b2:c.instructions+=7;goto B4fd4b2;
case 0x4fd4b7:c.instructions+=6;goto B4fd4b7;
case 0x4fd4bd:c.instructions+=5;goto B4fd4bd;
case 0x4fd4be:c.instructions+=4;goto B4fd4be;
case 0x4fd4c5:c.instructions+=3;goto B4fd4c5;
case 0x4fd4c6:c.instructions+=2;goto B4fd4c6;
case 0x4fd4cb:c.instructions+=1;goto B4fd4cb;
case 0x4fd4d0:goto L4fd4d0;
case 0x4fd4d3:c.instructions+=4;goto B4fd4d3;
case 0x4fd4d7:c.instructions+=3;goto B4fd4d7;
case 0x4fd4d9:c.instructions+=2;goto B4fd4d9;
case 0x4fd4e1:c.instructions+=1;goto B4fd4e1;
case 0x4fd4e3:goto L4fd4e3;
case 0x4fd4e7:c.instructions+=3;goto B4fd4e7;
case 0x4fd4e8:c.instructions+=2;goto B4fd4e8;
case 0x4fd4ea:c.instructions+=1;goto B4fd4ea;
case 0x4fd4ef:goto L4fd4ef;
case 0x4fd4f3:c.instructions+=3;goto B4fd4f3;
case 0x4fd4fa:c.instructions+=2;goto B4fd4fa;
case 0x4fd4fd:c.instructions+=1;goto B4fd4fd;
case 0x4fd4fe:goto L4fd4fe;
case 0x4fd502:c.instructions+=4;goto B4fd502;
case 0x4fd504:c.instructions+=3;goto B4fd504;
case 0x4fd50b:c.instructions+=2;goto B4fd50b;
case 0x4fd50e:c.instructions+=1;goto B4fd50e;
case 0x4fd510:goto L4fd510;
case 0x4fd514:c.instructions+=13;goto B4fd514;
case 0x4fd515:c.instructions+=12;goto B4fd515;
case 0x4fd519:c.instructions+=11;goto B4fd519;
case 0x4fd51a:c.instructions+=10;goto B4fd51a;
case 0x4fd51e:c.instructions+=9;goto B4fd51e;
case 0x4fd51f:c.instructions+=8;goto B4fd51f;
case 0x4fd520:c.instructions+=7;goto B4fd520;
case 0x4fd522:c.instructions+=6;goto B4fd522;
case 0x4fd526:c.instructions+=5;goto B4fd526;
case 0x4fd527:c.instructions+=4;goto B4fd527;
case 0x4fd528:c.instructions+=3;goto B4fd528;
case 0x4fd529:c.instructions+=2;goto B4fd529;
case 0x4fd52b:c.instructions+=1;goto B4fd52b;
case 0x4fd530:goto L4fd530;
case 0x4fd536:c.instructions+=1;goto B4fd536;
case 0x4fd538:goto L4fd538;
case 0x4fd53e:c.instructions+=1;goto B4fd53e;
case 0x4fd540:goto L4fd540;
case 0x4fd546:c.instructions+=1;goto B4fd546;
case 0x4fd548:goto L4fd548;
case 0x4fd54b:c.instructions+=3;goto B4fd54b;
case 0x4fd54c:c.instructions+=2;goto B4fd54c;
case 0x4fd54d:c.instructions+=1;goto B4fd54d;
case 0x4fd552:goto L4fd552;
case 0x4fd555:c.instructions+=4;goto B4fd555;
case 0x4fd556:c.instructions+=3;goto B4fd556;
case 0x4fd557:c.instructions+=2;goto B4fd557;
case 0x4fd558:c.instructions+=1;goto B4fd558;
case 0x4fd55b:goto L4fd55b;
case 0x4fd561:c.instructions+=1;goto B4fd561;
case 0x4fd566:goto L4fd566;
case 0x4fd567:c.instructions+=3;goto B4fd567;
case 0x4fd568:c.instructions+=2;goto B4fd568;
case 0x4fd569:c.instructions+=1;goto B4fd569;
case 0x4fd570:goto L4fd570;
case 0x4fd574:c.instructions+=12;goto B4fd574;
case 0x4fd578:c.instructions+=11;goto B4fd578;
case 0x4fd579:c.instructions+=10;goto B4fd579;
case 0x4fd57a:c.instructions+=9;goto B4fd57a;
case 0x4fd57e:c.instructions+=8;goto B4fd57e;
case 0x4fd580:c.instructions+=7;goto B4fd580;
case 0x4fd584:c.instructions+=6;goto B4fd584;
case 0x4fd585:c.instructions+=5;goto B4fd585;
case 0x4fd586:c.instructions+=4;goto B4fd586;
case 0x4fd587:c.instructions+=3;goto B4fd587;
case 0x4fd588:c.instructions+=2;goto B4fd588;
case 0x4fd58a:c.instructions+=1;goto B4fd58a;
case 0x4fd58f:goto L4fd58f;
case 0x4fd595:c.instructions+=1;goto B4fd595;
case 0x4fd59b:goto L4fd59b;
case 0x4fd59d:goto L4fd59d;
case 0x4fd5a3:c.instructions+=1;goto B4fd5a3;
case 0x4fd5a5:goto L4fd5a5;
case 0x4fd5ab:c.instructions+=1;goto B4fd5ab;
case 0x4fd5ad:goto L4fd5ad;
case 0x4fd5b3:c.instructions+=1;goto B4fd5b3;
case 0x4fd5b9:goto L4fd5b9;
case 0x4fd5bb:c.instructions+=1;goto B4fd5bb;
case 0x4fd5c0:goto L4fd5c0;
case 0x4fd5c1:c.instructions+=2;goto B4fd5c1;
case 0x4fd5c2:c.instructions+=1;goto B4fd5c2;
case 0x4fd5c5:goto L4fd5c5;
case 0x4fd5ca:c.instructions+=1;goto B4fd5ca;
case 0x4fd5cf:goto L4fd5cf;
case 0x4fd5d4:c.instructions+=2;goto B4fd5d4;
case 0x4fd5d5:c.instructions+=1;goto B4fd5d5;
case 0x4fd5da:goto L4fd5da;
case 0x4fd5dd:c.instructions+=3;goto B4fd5dd;
case 0x4fd5de:c.instructions+=2;goto B4fd5de;
case 0x4fd5df:c.instructions+=1;goto B4fd5df;
case 0x4fd5e2:goto L4fd5e2;
case 0x4fd5e4:c.instructions+=1;goto B4fd5e4;
case 0x4fd5e9:goto L4fd5e9;
case 0x4fd5ea:c.instructions+=2;goto B4fd5ea;
case 0x4fd5eb:c.instructions+=1;goto B4fd5eb;
case 0x4fd5ee:goto L4fd5ee;
case 0x4fd5f0:c.instructions+=1;goto B4fd5f0;
case 0x4fd5f5:goto L4fd5f5;
case 0x4fd5fa:c.instructions+=2;goto B4fd5fa;
case 0x4fd5fd:c.instructions+=1;goto B4fd5fd;
case 0x4fd5ff:goto L4fd5ff;
case 0x4fd604:c.instructions+=1;goto B4fd604;
case 0x4fd609:goto L4fd609;
case 0x4fd60b:c.instructions+=1;goto B4fd60b;
case 0x4fd60d:goto L4fd60d;
case 0x4fd610:c.instructions+=3;goto B4fd610;
case 0x4fd611:c.instructions+=2;goto B4fd611;
case 0x4fd616:c.instructions+=1;goto B4fd616;
case 0x4fd61b:goto L4fd61b;
case 0x4fd61e:c.instructions+=3;goto B4fd61e;
case 0x4fd61f:c.instructions+=2;goto B4fd61f;
case 0x4fd620:c.instructions+=1;goto B4fd620;
case 0x4fd623:goto L4fd623;
case 0x4fd628:c.instructions+=1;goto B4fd628;
case 0x4fd62d:goto L4fd62d;
case 0x4fd632:c.instructions+=2;goto B4fd632;
case 0x4fd633:c.instructions+=1;goto B4fd633;
case 0x4fd638:goto L4fd638;
case 0x4fd63b:c.instructions+=3;goto B4fd63b;
case 0x4fd63c:c.instructions+=2;goto B4fd63c;
case 0x4fd63d:c.instructions+=1;goto B4fd63d;
case 0x4fd640:goto L4fd640;
case 0x4fd646:c.instructions+=1;goto B4fd646;
case 0x4fd648:goto L4fd648;
case 0x4fd64e:c.instructions+=1;goto B4fd64e;
case 0x4fd650:goto L4fd650;
case 0x4fd656:c.instructions+=1;goto B4fd656;
case 0x4fd658:goto L4fd658;
case 0x4fd65a:c.instructions+=2;goto B4fd65a;
case 0x4fd65c:c.instructions+=1;goto B4fd65c;
case 0x4fd661:goto L4fd661;
case 0x4fd662:c.instructions+=2;goto B4fd662;
case 0x4fd663:c.instructions+=1;goto B4fd663;
case 0x4fd666:goto L4fd666;
case 0x4fd669:c.instructions+=9;goto B4fd669;
case 0x4fd66c:c.instructions+=8;goto B4fd66c;
case 0x4fd66d:c.instructions+=7;goto B4fd66d;
case 0x4fd672:c.instructions+=6;goto B4fd672;
case 0x4fd677:c.instructions+=5;goto B4fd677;
case 0x4fd67c:c.instructions+=4;goto B4fd67c;
case 0x4fd681:c.instructions+=3;goto B4fd681;
case 0x4fd686:c.instructions+=2;goto B4fd686;
case 0x4fd687:c.instructions+=1;goto B4fd687;
case 0x4fd68c:goto L4fd68c;
case 0x4fd68f:c.instructions+=3;goto B4fd68f;
case 0x4fd690:c.instructions+=2;goto B4fd690;
case 0x4fd691:c.instructions+=1;goto B4fd691;
case 0x4fd694:goto L4fd694;
case 0x4fd699:c.instructions+=1;goto B4fd699;
case 0x4fd69e:goto L4fd69e;
case 0x4fd69f:c.instructions+=3;goto B4fd69f;
case 0x4fd6a2:c.instructions+=2;goto B4fd6a2;
case 0x4fd6a3:c.instructions+=1;goto B4fd6a3;
case 0x4fd6a8:goto L4fd6a8;
case 0x4fd6ab:c.instructions+=3;goto B4fd6ab;
case 0x4fd6ad:c.instructions+=2;goto B4fd6ad;
case 0x4fd6af:c.instructions+=1;goto B4fd6af;
case 0x4fd6b4:goto L4fd6b4;
case 0x4fd6b5:c.instructions+=2;goto B4fd6b5;
case 0x4fd6b6:c.instructions+=1;goto B4fd6b6;
case 0x4fd6c0:goto L4fd6c0;
case 0x4fd6c2:c.instructions+=7;goto B4fd6c2;
case 0x4fd6c7:c.instructions+=6;goto B4fd6c7;
case 0x4fd6cd:c.instructions+=5;goto B4fd6cd;
case 0x4fd6ce:c.instructions+=4;goto B4fd6ce;
case 0x4fd6d5:c.instructions+=3;goto B4fd6d5;
case 0x4fd6d6:c.instructions+=2;goto B4fd6d6;
case 0x4fd6db:c.instructions+=1;goto B4fd6db;
case 0x4fd6e0:goto L4fd6e0;
case 0x4fd6e3:c.instructions+=4;goto B4fd6e3;
case 0x4fd6e7:c.instructions+=3;goto B4fd6e7;
case 0x4fd6e9:c.instructions+=2;goto B4fd6e9;
case 0x4fd6f1:c.instructions+=1;goto B4fd6f1;
case 0x4fd6f3:goto L4fd6f3;
case 0x4fd6f7:c.instructions+=3;goto B4fd6f7;
case 0x4fd6f8:c.instructions+=2;goto B4fd6f8;
case 0x4fd6fa:c.instructions+=1;goto B4fd6fa;
case 0x4fd6ff:goto L4fd6ff;
case 0x4fd703:c.instructions+=3;goto B4fd703;
case 0x4fd70a:c.instructions+=2;goto B4fd70a;
case 0x4fd70d:c.instructions+=1;goto B4fd70d;
case 0x4fd70e:goto L4fd70e;
case 0x4fd712:c.instructions+=4;goto B4fd712;
case 0x4fd714:c.instructions+=3;goto B4fd714;
case 0x4fd71b:c.instructions+=2;goto B4fd71b;
case 0x4fd71e:c.instructions+=1;goto B4fd71e;
case 0x4fd720:goto L4fd720;
case 0x4fd721:c.instructions+=6;goto B4fd721;
case 0x4fd723:c.instructions+=5;goto B4fd723;
case 0x4fd724:c.instructions+=4;goto B4fd724;
case 0x4fd727:c.instructions+=3;goto B4fd727;
case 0x4fd729:c.instructions+=2;goto B4fd729;
case 0x4fd72f:c.instructions+=1;goto B4fd72f;
case 0x4fd731:goto L4fd731;
case 0x4fd733:c.instructions+=1;goto B4fd733;
case 0x4fd738:goto L4fd738;
case 0x4fd739:c.instructions+=1;goto B4fd739;
case 0x4fd73e:goto L4fd73e;
case 0x4fd741:goto L4fd741;
case 0x4fd744:c.instructions+=2;goto B4fd744;
case 0x4fd746:c.instructions+=1;goto B4fd746;
case 0x4fd748:goto L4fd748;
case 0x4fd74a:c.instructions+=1;goto B4fd74a;
case 0x4fd74f:goto L4fd74f;
case 0x4fd750:c.instructions+=1;goto B4fd750;
case 0x4fd755:goto L4fd755;
case 0x4fd758:goto L4fd758;
case 0x4fd75b:c.instructions+=2;goto B4fd75b;
case 0x4fd75d:c.instructions+=1;goto B4fd75d;
case 0x4fd75f:goto L4fd75f;
case 0x4fd761:c.instructions+=1;goto B4fd761;
case 0x4fd766:goto L4fd766;
case 0x4fd767:c.instructions+=1;goto B4fd767;
case 0x4fd76c:goto L4fd76c;
case 0x4fd76f:goto L4fd76f;
case 0x4fd772:c.instructions+=2;goto B4fd772;
case 0x4fd774:c.instructions+=1;goto B4fd774;
case 0x4fd776:goto L4fd776;
case 0x4fd778:c.instructions+=1;goto B4fd778;
case 0x4fd77d:goto L4fd77d;
case 0x4fd77e:c.instructions+=1;goto B4fd77e;
case 0x4fd783:goto L4fd783;
case 0x4fd786:goto L4fd786;
case 0x4fd789:c.instructions+=2;goto B4fd789;
case 0x4fd78b:c.instructions+=1;goto B4fd78b;
case 0x4fd78d:goto L4fd78d;
case 0x4fd78f:c.instructions+=1;goto B4fd78f;
case 0x4fd794:goto L4fd794;
case 0x4fd795:c.instructions+=1;goto B4fd795;
case 0x4fd79a:goto L4fd79a;
case 0x4fd79d:goto L4fd79d;
case 0x4fd7a0:c.instructions+=2;goto B4fd7a0;
case 0x4fd7a2:c.instructions+=1;goto B4fd7a2;
case 0x4fd7a4:goto L4fd7a4;
case 0x4fd7a6:c.instructions+=1;goto B4fd7a6;
case 0x4fd7ab:goto L4fd7ab;
case 0x4fd7ac:c.instructions+=1;goto B4fd7ac;
case 0x4fd7b1:goto L4fd7b1;
case 0x4fd7b4:goto L4fd7b4;
case 0x4fd7b7:c.instructions+=2;goto B4fd7b7;
case 0x4fd7b9:c.instructions+=1;goto B4fd7b9;
case 0x4fd7bb:goto L4fd7bb;
case 0x4fd7bd:c.instructions+=1;goto B4fd7bd;
case 0x4fd7c2:goto L4fd7c2;
case 0x4fd7c3:c.instructions+=1;goto B4fd7c3;
case 0x4fd7c8:goto L4fd7c8;
case 0x4fd7cb:goto L4fd7cb;
case 0x4fd7ce:c.instructions+=2;goto B4fd7ce;
case 0x4fd7d0:c.instructions+=1;goto B4fd7d0;
case 0x4fd7d2:goto L4fd7d2;
case 0x4fd7d4:c.instructions+=1;goto B4fd7d4;
case 0x4fd7d9:goto L4fd7d9;
case 0x4fd7da:c.instructions+=1;goto B4fd7da;
case 0x4fd7df:goto L4fd7df;
case 0x4fd7e2:goto L4fd7e2;
case 0x4fd7e5:c.instructions+=2;goto B4fd7e5;
case 0x4fd7e7:c.instructions+=1;goto B4fd7e7;
case 0x4fd7e9:goto L4fd7e9;
case 0x4fd7eb:c.instructions+=1;goto B4fd7eb;
case 0x4fd7f0:goto L4fd7f0;
case 0x4fd7f1:c.instructions+=1;goto B4fd7f1;
case 0x4fd7f6:goto L4fd7f6;
case 0x4fd7f9:goto L4fd7f9;
case 0x4fd7fc:c.instructions+=2;goto B4fd7fc;
case 0x4fd7fe:c.instructions+=1;goto B4fd7fe;
case 0x4fd800:goto L4fd800;
case 0x4fd802:c.instructions+=1;goto B4fd802;
case 0x4fd807:goto L4fd807;
case 0x4fd808:c.instructions+=1;goto B4fd808;
case 0x4fd80d:goto L4fd80d;
case 0x4fd810:goto L4fd810;
case 0x4fd813:c.instructions+=2;goto B4fd813;
case 0x4fd815:c.instructions+=1;goto B4fd815;
case 0x4fd817:goto L4fd817;
case 0x4fd819:c.instructions+=1;goto B4fd819;
case 0x4fd81e:goto L4fd81e;
case 0x4fd81f:c.instructions+=1;goto B4fd81f;
case 0x4fd824:goto L4fd824;
case 0x4fd827:goto L4fd827;
case 0x4fd82a:c.instructions+=2;goto B4fd82a;
case 0x4fd82c:c.instructions+=1;goto B4fd82c;
case 0x4fd82e:goto L4fd82e;
case 0x4fd830:c.instructions+=1;goto B4fd830;
case 0x4fd835:goto L4fd835;
case 0x4fd836:c.instructions+=1;goto B4fd836;
case 0x4fd83b:goto L4fd83b;
case 0x4fd83e:goto L4fd83e;
case 0x4fd841:c.instructions+=2;goto B4fd841;
case 0x4fd843:c.instructions+=1;goto B4fd843;
case 0x4fd845:goto L4fd845;
case 0x4fd847:c.instructions+=1;goto B4fd847;
case 0x4fd84c:goto L4fd84c;
case 0x4fd84d:c.instructions+=1;goto B4fd84d;
case 0x4fd852:goto L4fd852;
case 0x4fd855:goto L4fd855;
case 0x4fd858:c.instructions+=2;goto B4fd858;
case 0x4fd85a:c.instructions+=1;goto B4fd85a;
case 0x4fd85c:goto L4fd85c;
case 0x4fd85e:c.instructions+=1;goto B4fd85e;
case 0x4fd863:goto L4fd863;
case 0x4fd864:c.instructions+=1;goto B4fd864;
case 0x4fd869:goto L4fd869;
case 0x4fd86c:goto L4fd86c;
case 0x4fd86f:c.instructions+=2;goto B4fd86f;
case 0x4fd871:c.instructions+=1;goto B4fd871;
case 0x4fd873:goto L4fd873;
case 0x4fd875:c.instructions+=1;goto B4fd875;
case 0x4fd87a:goto L4fd87a;
case 0x4fd87b:c.instructions+=1;goto B4fd87b;
case 0x4fd880:goto L4fd880;
case 0x4fd883:goto L4fd883;
case 0x4fd886:c.instructions+=2;goto B4fd886;
case 0x4fd888:c.instructions+=1;goto B4fd888;
case 0x4fd88a:goto L4fd88a;
case 0x4fd88c:c.instructions+=1;goto B4fd88c;
case 0x4fd891:goto L4fd891;
case 0x4fd892:c.instructions+=1;goto B4fd892;
case 0x4fd897:goto L4fd897;
case 0x4fd89a:goto L4fd89a;
case 0x4fd89d:c.instructions+=2;goto B4fd89d;
case 0x4fd89f:c.instructions+=1;goto B4fd89f;
case 0x4fd8a1:goto L4fd8a1;
case 0x4fd8a3:c.instructions+=1;goto B4fd8a3;
case 0x4fd8a8:goto L4fd8a8;
case 0x4fd8a9:c.instructions+=1;goto B4fd8a9;
case 0x4fd8ae:goto L4fd8ae;
case 0x4fd8b1:goto L4fd8b1;
case 0x4fd8b4:c.instructions+=2;goto B4fd8b4;
case 0x4fd8b6:c.instructions+=1;goto B4fd8b6;
case 0x4fd8b8:goto L4fd8b8;
case 0x4fd8b9:c.instructions+=1;goto B4fd8b9;
case 0x4fd8be:goto L4fd8be;
case 0x4fd8c1:goto L4fd8c1;
case 0x4fd8c4:c.instructions+=2;goto B4fd8c4;
case 0x4fd8c6:c.instructions+=1;goto B4fd8c6;
case 0x4fd8c8:goto L4fd8c8;
case 0x4fd8ca:c.instructions+=1;goto B4fd8ca;
case 0x4fd8cf:goto L4fd8cf;
case 0x4fd8d0:c.instructions+=1;goto B4fd8d0;
case 0x4fd8d5:goto L4fd8d5;
case 0x4fd8d8:goto L4fd8d8;
case 0x4fd8db:c.instructions+=2;goto B4fd8db;
case 0x4fd8dd:c.instructions+=1;goto B4fd8dd;
case 0x4fd8df:goto L4fd8df;
case 0x4fd8e1:c.instructions+=1;goto B4fd8e1;
case 0x4fd8e6:goto L4fd8e6;
case 0x4fd8e7:c.instructions+=1;goto B4fd8e7;
case 0x4fd8ec:goto L4fd8ec;
case 0x4fd8ef:goto L4fd8ef;
case 0x4fd8f2:c.instructions+=2;goto B4fd8f2;
case 0x4fd8f4:c.instructions+=1;goto B4fd8f4;
case 0x4fd8f6:goto L4fd8f6;
case 0x4fd8f8:c.instructions+=2;goto B4fd8f8;
case 0x4fd8fa:c.instructions+=1;goto B4fd8fa;
case 0x4fd8fc:goto L4fd8fc;
case 0x4fd8ff:c.instructions+=2;goto B4fd8ff;
case 0x4fd901:c.instructions+=1;goto B4fd901;
case 0x4fd903:goto L4fd903;
case 0x4fd905:c.instructions+=1;goto B4fd905;
case 0x4fd90a:goto L4fd90a;
case 0x4fd90b:c.instructions+=1;goto B4fd90b;
case 0x4fd910:goto L4fd910;
case 0x4fd913:goto L4fd913;
case 0x4fd916:c.instructions+=2;goto B4fd916;
case 0x4fd918:c.instructions+=1;goto B4fd918;
case 0x4fd91a:goto L4fd91a;
case 0x4fd91c:c.instructions+=1;goto B4fd91c;
case 0x4fd921:goto L4fd921;
case 0x4fd922:c.instructions+=1;goto B4fd922;
case 0x4fd927:goto L4fd927;
case 0x4fd92a:goto L4fd92a;
case 0x4fd92d:c.instructions+=2;goto B4fd92d;
case 0x4fd92e:c.instructions+=1;goto B4fd92e;
case 0x4fd933:goto L4fd933;
case 0x4fd939:c.instructions+=3;goto B4fd939;
case 0x4fd93c:c.instructions+=2;goto B4fd93c;
case 0x4fd93e:c.instructions+=1;goto B4fd93e;
case 0x4fd940:goto L4fd940;
case 0x4fd942:c.instructions+=1;goto B4fd942;
case 0x4fd947:goto L4fd947;
case 0x4fd948:c.instructions+=1;goto B4fd948;
case 0x4fd94d:goto L4fd94d;
case 0x4fd950:goto L4fd950;
case 0x4fd953:c.instructions+=2;goto B4fd953;
case 0x4fd954:c.instructions+=1;goto B4fd954;
case 0x4fd959:goto L4fd959;
case 0x4fd95c:c.instructions+=3;goto B4fd95c;
case 0x4fd95d:c.instructions+=2;goto B4fd95d;
case 0x4fd95e:c.instructions+=1;goto B4fd95e;
case 0x4fd960:goto L4fd960;
case 0x4fd961:c.instructions+=2;goto B4fd961;
case 0x4fd963:c.instructions+=1;goto B4fd963;
case 0x4fd968:goto L4fd968;
case 0x4fd96d:c.instructions+=1;goto B4fd96d;
case 0x4fd96f:goto L4fd96f;
case 0x4fd970:c.instructions+=1;goto B4fd970;
case 0x4fd975:goto L4fd975;
case 0x4fd978:goto L4fd978;
case 0x4fd97a:c.instructions+=2;goto B4fd97a;
case 0x4fd97b:c.instructions+=1;goto B4fd97b;
case 0x4fd980:goto L4fd980;
case 0x4fd983:c.instructions+=71;goto B4fd983;
case 0x4fd985:c.instructions+=70;goto B4fd985;
case 0x4fd989:c.instructions+=69;goto B4fd989;
case 0x4fd98b:c.instructions+=68;goto B4fd98b;
case 0x4fd98e:c.instructions+=67;goto B4fd98e;
case 0x4fd990:c.instructions+=66;goto B4fd990;
case 0x4fd993:c.instructions+=65;goto B4fd993;
case 0x4fd995:c.instructions+=64;goto B4fd995;
case 0x4fd999:c.instructions+=63;goto B4fd999;
case 0x4fd99b:c.instructions+=62;goto B4fd99b;
case 0x4fd99d:c.instructions+=61;goto B4fd99d;
case 0x4fd9a1:c.instructions+=60;goto B4fd9a1;
case 0x4fd9a3:c.instructions+=59;goto B4fd9a3;
case 0x4fd9a5:c.instructions+=58;goto B4fd9a5;
case 0x4fd9a9:c.instructions+=57;goto B4fd9a9;
case 0x4fd9ad:c.instructions+=56;goto B4fd9ad;
case 0x4fd9af:c.instructions+=55;goto B4fd9af;
case 0x4fd9b3:c.instructions+=54;goto B4fd9b3;
case 0x4fd9b5:c.instructions+=53;goto B4fd9b5;
case 0x4fd9b8:c.instructions+=52;goto B4fd9b8;
case 0x4fd9bc:c.instructions+=51;goto B4fd9bc;
case 0x4fd9c0:c.instructions+=50;goto B4fd9c0;
case 0x4fd9c3:c.instructions+=49;goto B4fd9c3;
case 0x4fd9c7:c.instructions+=48;goto B4fd9c7;
case 0x4fd9cb:c.instructions+=47;goto B4fd9cb;
case 0x4fd9ce:c.instructions+=46;goto B4fd9ce;
case 0x4fd9d2:c.instructions+=45;goto B4fd9d2;
case 0x4fd9d4:c.instructions+=44;goto B4fd9d4;
case 0x4fd9d7:c.instructions+=43;goto B4fd9d7;
case 0x4fd9db:c.instructions+=42;goto B4fd9db;
case 0x4fd9de:c.instructions+=41;goto B4fd9de;
case 0x4fd9e2:c.instructions+=40;goto B4fd9e2;
case 0x4fd9e5:c.instructions+=39;goto B4fd9e5;
case 0x4fd9e7:c.instructions+=38;goto B4fd9e7;
case 0x4fd9ed:c.instructions+=37;goto B4fd9ed;
case 0x4fd9f0:c.instructions+=36;goto B4fd9f0;
case 0x4fd9f4:c.instructions+=35;goto B4fd9f4;
case 0x4fd9f7:c.instructions+=34;goto B4fd9f7;
case 0x4fd9fa:c.instructions+=33;goto B4fd9fa;
case 0x4fd9fd:c.instructions+=32;goto B4fd9fd;
case 0x4fda01:c.instructions+=31;goto B4fda01;
case 0x4fda04:c.instructions+=30;goto B4fda04;
case 0x4fda07:c.instructions+=29;goto B4fda07;
case 0x4fda0e:c.instructions+=28;goto B4fda0e;
case 0x4fda10:c.instructions+=27;goto B4fda10;
case 0x4fda14:c.instructions+=26;goto B4fda14;
case 0x4fda16:c.instructions+=25;goto B4fda16;
case 0x4fda19:c.instructions+=24;goto B4fda19;
case 0x4fda1b:c.instructions+=23;goto B4fda1b;
case 0x4fda1f:c.instructions+=22;goto B4fda1f;
case 0x4fda22:c.instructions+=21;goto B4fda22;
case 0x4fda26:c.instructions+=20;goto B4fda26;
case 0x4fda29:c.instructions+=19;goto B4fda29;
case 0x4fda2f:c.instructions+=18;goto B4fda2f;
case 0x4fda33:c.instructions+=17;goto B4fda33;
case 0x4fda37:c.instructions+=16;goto B4fda37;
case 0x4fda39:c.instructions+=15;goto B4fda39;
case 0x4fda3c:c.instructions+=14;goto B4fda3c;
case 0x4fda40:c.instructions+=13;goto B4fda40;
case 0x4fda44:c.instructions+=12;goto B4fda44;
case 0x4fda47:c.instructions+=11;goto B4fda47;
case 0x4fda4b:c.instructions+=10;goto B4fda4b;
case 0x4fda4d:c.instructions+=9;goto B4fda4d;
case 0x4fda50:c.instructions+=8;goto B4fda50;
case 0x4fda54:c.instructions+=7;goto B4fda54;
case 0x4fda58:c.instructions+=6;goto B4fda58;
case 0x4fda5b:c.instructions+=5;goto B4fda5b;
case 0x4fda5f:c.instructions+=4;goto B4fda5f;
case 0x4fda62:c.instructions+=3;goto B4fda62;
case 0x4fda64:c.instructions+=2;goto B4fda64;
case 0x4fda67:c.instructions+=1;goto B4fda67;
case 0x4fda70:goto L4fda70;
case 0x4fda73:c.instructions+=15;goto B4fda73;
case 0x4fda74:c.instructions+=14;goto B4fda74;
case 0x4fda77:c.instructions+=13;goto B4fda77;
case 0x4fda7d:c.instructions+=12;goto B4fda7d;
case 0x4fda7f:c.instructions+=11;goto B4fda7f;
case 0x4fda83:c.instructions+=10;goto B4fda83;
case 0x4fda85:c.instructions+=9;goto B4fda85;
case 0x4fda86:c.instructions+=8;goto B4fda86;
case 0x4fda8a:c.instructions+=7;goto B4fda8a;
case 0x4fda8c:c.instructions+=6;goto B4fda8c;
case 0x4fda8f:c.instructions+=5;goto B4fda8f;
case 0x4fda92:c.instructions+=4;goto B4fda92;
case 0x4fda95:c.instructions+=3;goto B4fda95;
case 0x4fda98:c.instructions+=2;goto B4fda98;
case 0x4fda9a:c.instructions+=1;goto B4fda9a;
case 0x4fda9c:goto L4fda9c;
case 0x4fda9f:c.instructions+=3;goto B4fda9f;
case 0x4fdaa1:c.instructions+=2;goto B4fdaa1;
case 0x4fdaa4:c.instructions+=1;goto B4fdaa4;
case 0x4fdaa6:goto L4fdaa6;
case 0x4fdaa7:c.instructions+=4;goto B4fdaa7;
case 0x4fdaa8:c.instructions+=3;goto B4fdaa8;
case 0x4fdaa9:c.instructions+=2;goto B4fdaa9;
case 0x4fdaaa:c.instructions+=1;goto B4fdaaa;
case 0x4fdaaf:goto L4fdaaf;
case 0x4fdab2:goto L4fdab2;
case 0x4fdab3:c.instructions+=2;goto B4fdab3;
case 0x4fdab4:c.instructions+=1;goto B4fdab4;
case 0x4fdac0:goto L4fdac0;
case 0x4fdad0:goto L4fdad0;
case 0x4fdad2:c.instructions+=14;goto B4fdad2;
case 0x4fdad6:c.instructions+=13;goto B4fdad6;
case 0x4fdad8:c.instructions+=12;goto B4fdad8;
case 0x4fdada:c.instructions+=11;goto B4fdada;
case 0x4fdadc:c.instructions+=10;goto B4fdadc;
case 0x4fdadf:c.instructions+=9;goto B4fdadf;
case 0x4fdae2:c.instructions+=8;goto B4fdae2;
case 0x4fdae5:c.instructions+=7;goto B4fdae5;
case 0x4fdae7:c.instructions+=6;goto B4fdae7;
case 0x4fdaea:c.instructions+=5;goto B4fdaea;
case 0x4fdaed:c.instructions+=4;goto B4fdaed;
case 0x4fdaf0:c.instructions+=3;goto B4fdaf0;
case 0x4fdaf3:c.instructions+=2;goto B4fdaf3;
case 0x4fdaf6:c.instructions+=1;goto B4fdaf6;
case 0x4fdb00:goto L4fdb00;
case 0x4fdb05:c.instructions+=4;goto B4fdb05;
case 0x4fdb06:c.instructions+=3;goto B4fdb06;
case 0x4fdb08:c.instructions+=2;goto B4fdb08;
case 0x4fdb0e:c.instructions+=1;goto B4fdb0e;
case 0x4fdb10:goto L4fdb10;
case 0x4fdb11:c.instructions+=1;goto B4fdb11;
case 0x4fdb16:goto L4fdb16;
case 0x4fdb19:goto L4fdb19;
case 0x4fdb1b:c.instructions+=2;goto B4fdb1b;
case 0x4fdb1c:c.instructions+=1;goto B4fdb1c;
case 0x4fdb20:goto L4fdb20;
case 0x4fdb22:c.instructions+=2;goto B4fdb22;
case 0x4fdb23:c.instructions+=1;goto B4fdb23;
case 0x4fdb28:goto L4fdb28;
case 0x4fdb29:c.instructions+=1;goto B4fdb29;
case 0x4fdb30:goto L4fdb30;
case 0x4fdb32:c.instructions+=5;goto B4fdb32;
case 0x4fdb36:c.instructions+=4;goto B4fdb36;
case 0x4fdb38:c.instructions+=3;goto B4fdb38;
case 0x4fdb3a:c.instructions+=2;goto B4fdb3a;
case 0x4fdb3d:c.instructions+=1;goto B4fdb3d;
case 0x4fdb3f:goto L4fdb3f;
case 0x4fdb42:c.instructions+=4;goto B4fdb42;
case 0x4fdb45:c.instructions+=3;goto B4fdb45;
case 0x4fdb47:c.instructions+=2;goto B4fdb47;
case 0x4fdb4a:c.instructions+=1;goto B4fdb4a;
case 0x4fdb4c:goto L4fdb4c;
case 0x4fdb4f:c.instructions+=4;goto B4fdb4f;
case 0x4fdb52:c.instructions+=3;goto B4fdb52;
case 0x4fdb54:c.instructions+=2;goto B4fdb54;
case 0x4fdb57:c.instructions+=1;goto B4fdb57;
case 0x4fdb59:goto L4fdb59;
case 0x4fdb5c:c.instructions+=4;goto B4fdb5c;
case 0x4fdb5f:c.instructions+=3;goto B4fdb5f;
case 0x4fdb61:c.instructions+=2;goto B4fdb61;
case 0x4fdb64:c.instructions+=1;goto B4fdb64;
case 0x4fdb66:goto L4fdb66;
case 0x4fdb69:c.instructions+=4;goto B4fdb69;
case 0x4fdb6c:c.instructions+=3;goto B4fdb6c;
case 0x4fdb6e:c.instructions+=2;goto B4fdb6e;
case 0x4fdb71:c.instructions+=1;goto B4fdb71;
case 0x4fdb73:goto L4fdb73;
case 0x4fdb76:c.instructions+=4;goto B4fdb76;
case 0x4fdb79:c.instructions+=3;goto B4fdb79;
case 0x4fdb7b:c.instructions+=2;goto B4fdb7b;
case 0x4fdb7e:c.instructions+=1;goto B4fdb7e;
case 0x4fdb80:goto L4fdb80;
case 0x4fdb83:c.instructions+=4;goto B4fdb83;
case 0x4fdb86:c.instructions+=3;goto B4fdb86;
case 0x4fdb88:c.instructions+=2;goto B4fdb88;
case 0x4fdb8b:c.instructions+=1;goto B4fdb8b;
case 0x4fdb8d:goto L4fdb8d;
case 0x4fdb90:c.instructions+=4;goto B4fdb90;
case 0x4fdb93:c.instructions+=3;goto B4fdb93;
case 0x4fdb95:c.instructions+=2;goto B4fdb95;
case 0x4fdb98:c.instructions+=1;goto B4fdb98;
case 0x4fdb9a:goto L4fdb9a;
case 0x4fdb9f:c.instructions+=1;goto B4fdb9f;
case 0x4fdba2:goto L4fdba2;
case 0x4fdba4:c.instructions+=1;goto B4fdba4;
case 0x4fdbb0:goto L4fdbb0;
case 0x4fdbb1:c.instructions+=7;goto B4fdbb1;
case 0x4fdbb2:c.instructions+=6;goto B4fdbb2;
case 0x4fdbb3:c.instructions+=5;goto B4fdbb3;
case 0x4fdbb7:c.instructions+=4;goto B4fdbb7;
case 0x4fdbb9:c.instructions+=3;goto B4fdbb9;
case 0x4fdbbb:c.instructions+=2;goto B4fdbbb;
case 0x4fdbbe:c.instructions+=1;goto B4fdbbe;
case 0x4fdbc0:goto L4fdbc0;
case 0x4fdbc3:c.instructions+=4;goto B4fdbc3;
case 0x4fdbc5:c.instructions+=3;goto B4fdbc5;
case 0x4fdbc7:c.instructions+=2;goto B4fdbc7;
case 0x4fdbca:c.instructions+=1;goto B4fdbca;
case 0x4fdbcc:goto L4fdbcc;
case 0x4fdbcd:c.instructions+=3;goto B4fdbcd;
case 0x4fdbd0:c.instructions+=2;goto B4fdbd0;
case 0x4fdbd3:c.instructions+=1;goto B4fdbd3;
case 0x4fdbd5:goto L4fdbd5;
case 0x4fdbd7:c.instructions+=4;goto B4fdbd7;
case 0x4fdbd9:c.instructions+=3;goto B4fdbd9;
case 0x4fdbdb:c.instructions+=2;goto B4fdbdb;
case 0x4fdbde:c.instructions+=1;goto B4fdbde;
case 0x4fdbe0:goto L4fdbe0;
case 0x4fdbe3:c.instructions+=4;goto B4fdbe3;
case 0x4fdbe6:c.instructions+=3;goto B4fdbe6;
case 0x4fdbe8:c.instructions+=2;goto B4fdbe8;
case 0x4fdbeb:c.instructions+=1;goto B4fdbeb;
case 0x4fdbed:goto L4fdbed;
case 0x4fdbf0:c.instructions+=4;goto B4fdbf0;
case 0x4fdbf3:c.instructions+=3;goto B4fdbf3;
case 0x4fdbf5:c.instructions+=2;goto B4fdbf5;
case 0x4fdbf8:c.instructions+=1;goto B4fdbf8;
case 0x4fdbfa:goto L4fdbfa;
case 0x4fdbfd:c.instructions+=4;goto B4fdbfd;
case 0x4fdc00:c.instructions+=3;goto B4fdc00;
case 0x4fdc02:c.instructions+=2;goto B4fdc02;
case 0x4fdc05:c.instructions+=1;goto B4fdc05;
case 0x4fdc07:goto L4fdc07;
case 0x4fdc0a:c.instructions+=4;goto B4fdc0a;
case 0x4fdc0d:c.instructions+=3;goto B4fdc0d;
case 0x4fdc0f:c.instructions+=2;goto B4fdc0f;
case 0x4fdc12:c.instructions+=1;goto B4fdc12;
case 0x4fdc14:goto L4fdc14;
case 0x4fdc17:c.instructions+=2;goto B4fdc17;
case 0x4fdc1a:c.instructions+=1;goto B4fdc1a;
case 0x4fdc1c:goto L4fdc1c;
case 0x4fdc1f:c.instructions+=4;goto B4fdc1f;
case 0x4fdc22:c.instructions+=3;goto B4fdc22;
case 0x4fdc24:c.instructions+=2;goto B4fdc24;
case 0x4fdc27:c.instructions+=1;goto B4fdc27;
case 0x4fdc29:goto L4fdc29;
case 0x4fdc2a:c.instructions+=4;goto B4fdc2a;
case 0x4fdc2b:c.instructions+=3;goto B4fdc2b;
case 0x4fdc30:c.instructions+=2;goto B4fdc30;
case 0x4fdc31:c.instructions+=1;goto B4fdc31;
case 0x4fdc34:goto L4fdc34;
case 0x4fdc35:c.instructions+=4;goto B4fdc35;
case 0x4fdc36:c.instructions+=3;goto B4fdc36;
case 0x4fdc38:c.instructions+=2;goto B4fdc38;
case 0x4fdc39:c.instructions+=1;goto B4fdc39;
case 0x4fdc3c:goto L4fdc3c;
case 0x4fdc3d:c.instructions+=4;goto B4fdc3d;
case 0x4fdc3e:c.instructions+=3;goto B4fdc3e;
case 0x4fdc40:c.instructions+=2;goto B4fdc40;
case 0x4fdc41:c.instructions+=1;goto B4fdc41;
case 0x4fdc50:goto L4fdc50;
case 0x4fdc51:c.instructions+=9;goto B4fdc51;
case 0x4fdc55:c.instructions+=8;goto B4fdc55;
case 0x4fdc56:c.instructions+=7;goto B4fdc56;
case 0x4fdc57:c.instructions+=6;goto B4fdc57;
case 0x4fdc59:c.instructions+=5;goto B4fdc59;
case 0x4fdc5a:c.instructions+=4;goto B4fdc5a;
case 0x4fdc5c:c.instructions+=3;goto B4fdc5c;
case 0x4fdc5f:c.instructions+=2;goto B4fdc5f;
case 0x4fdc62:c.instructions+=1;goto B4fdc62;
case 0x4fdc64:goto L4fdc64;
case 0x4fdc67:c.instructions+=4;goto B4fdc67;
case 0x4fdc69:c.instructions+=3;goto B4fdc69;
case 0x4fdc6b:c.instructions+=2;goto B4fdc6b;
case 0x4fdc6e:c.instructions+=1;goto B4fdc6e;
case 0x4fdc70:goto L4fdc70;
case 0x4fdc72:c.instructions+=4;goto B4fdc72;
case 0x4fdc75:c.instructions+=3;goto B4fdc75;
case 0x4fdc77:c.instructions+=2;goto B4fdc77;
case 0x4fdc7a:c.instructions+=1;goto B4fdc7a;
case 0x4fdc7c:goto L4fdc7c;
case 0x4fdc7d:c.instructions+=4;goto B4fdc7d;
case 0x4fdc80:c.instructions+=3;goto B4fdc80;
case 0x4fdc83:c.instructions+=2;goto B4fdc83;
case 0x4fdc86:c.instructions+=1;goto B4fdc86;
case 0x4fdc88:goto L4fdc88;
case 0x4fdc8a:c.instructions+=2;goto B4fdc8a;
case 0x4fdc8d:c.instructions+=1;goto B4fdc8d;
case 0x4fdc90:goto L4fdc90;
case 0x4fdc93:c.instructions+=4;goto B4fdc93;
case 0x4fdc95:c.instructions+=3;goto B4fdc95;
case 0x4fdc97:c.instructions+=2;goto B4fdc97;
case 0x4fdc9a:c.instructions+=1;goto B4fdc9a;
case 0x4fdc9c:goto L4fdc9c;
case 0x4fdc9d:c.instructions+=3;goto B4fdc9d;
case 0x4fdca0:c.instructions+=2;goto B4fdca0;
case 0x4fdca3:c.instructions+=1;goto B4fdca3;
case 0x4fdca5:goto L4fdca5;
case 0x4fdca7:c.instructions+=4;goto B4fdca7;
case 0x4fdca9:c.instructions+=3;goto B4fdca9;
case 0x4fdcab:c.instructions+=2;goto B4fdcab;
case 0x4fdcae:c.instructions+=1;goto B4fdcae;
case 0x4fdcb0:goto L4fdcb0;
case 0x4fdcb3:c.instructions+=4;goto B4fdcb3;
case 0x4fdcb6:c.instructions+=3;goto B4fdcb6;
case 0x4fdcb8:c.instructions+=2;goto B4fdcb8;
case 0x4fdcbb:c.instructions+=1;goto B4fdcbb;
case 0x4fdcbd:goto L4fdcbd;
case 0x4fdcc0:c.instructions+=4;goto B4fdcc0;
case 0x4fdcc3:c.instructions+=3;goto B4fdcc3;
case 0x4fdcc5:c.instructions+=2;goto B4fdcc5;
case 0x4fdcc8:c.instructions+=1;goto B4fdcc8;
case 0x4fdcca:goto L4fdcca;
case 0x4fdccd:c.instructions+=4;goto B4fdccd;
case 0x4fdcd0:c.instructions+=3;goto B4fdcd0;
case 0x4fdcd2:c.instructions+=2;goto B4fdcd2;
case 0x4fdcd5:c.instructions+=1;goto B4fdcd5;
case 0x4fdcd7:goto L4fdcd7;
case 0x4fdcd8:c.instructions+=5;goto B4fdcd8;
case 0x4fdcd9:c.instructions+=4;goto B4fdcd9;
case 0x4fdcda:c.instructions+=3;goto B4fdcda;
case 0x4fdcdf:c.instructions+=2;goto B4fdcdf;
case 0x4fdce0:c.instructions+=1;goto B4fdce0;
case 0x4fdce3:goto L4fdce3;
case 0x4fdce4:c.instructions+=5;goto B4fdce4;
case 0x4fdce5:c.instructions+=4;goto B4fdce5;
case 0x4fdce6:c.instructions+=3;goto B4fdce6;
case 0x4fdce8:c.instructions+=2;goto B4fdce8;
case 0x4fdce9:c.instructions+=1;goto B4fdce9;
case 0x4fdcec:goto L4fdcec;
case 0x4fdced:c.instructions+=5;goto B4fdced;
case 0x4fdcee:c.instructions+=4;goto B4fdcee;
case 0x4fdcef:c.instructions+=3;goto B4fdcef;
case 0x4fdcf1:c.instructions+=2;goto B4fdcf1;
case 0x4fdcf2:c.instructions+=1;goto B4fdcf2;
case 0x4fdd00:goto L4fdd00;
case 0x4fdd02:c.instructions+=5;goto B4fdd02;
case 0x4fdd06:c.instructions+=4;goto B4fdd06;
case 0x4fdd08:c.instructions+=3;goto B4fdd08;
case 0x4fdd0a:c.instructions+=2;goto B4fdd0a;
case 0x4fdd0d:c.instructions+=1;goto B4fdd0d;
case 0x4fdd0f:goto L4fdd0f;
case 0x4fdd12:c.instructions+=4;goto B4fdd12;
case 0x4fdd15:c.instructions+=3;goto B4fdd15;
case 0x4fdd17:c.instructions+=2;goto B4fdd17;
case 0x4fdd1a:c.instructions+=1;goto B4fdd1a;
case 0x4fdd1c:goto L4fdd1c;
case 0x4fdd1f:c.instructions+=4;goto B4fdd1f;
case 0x4fdd22:c.instructions+=3;goto B4fdd22;
case 0x4fdd24:c.instructions+=2;goto B4fdd24;
case 0x4fdd27:c.instructions+=1;goto B4fdd27;
case 0x4fdd29:goto L4fdd29;
case 0x4fdd2c:c.instructions+=4;goto B4fdd2c;
case 0x4fdd2f:c.instructions+=3;goto B4fdd2f;
case 0x4fdd31:c.instructions+=2;goto B4fdd31;
case 0x4fdd34:c.instructions+=1;goto B4fdd34;
case 0x4fdd36:goto L4fdd36;
case 0x4fdd39:c.instructions+=4;goto B4fdd39;
case 0x4fdd3c:c.instructions+=3;goto B4fdd3c;
case 0x4fdd3e:c.instructions+=2;goto B4fdd3e;
case 0x4fdd41:c.instructions+=1;goto B4fdd41;
case 0x4fdd43:goto L4fdd43;
case 0x4fdd46:c.instructions+=4;goto B4fdd46;
case 0x4fdd49:c.instructions+=3;goto B4fdd49;
case 0x4fdd4b:c.instructions+=2;goto B4fdd4b;
case 0x4fdd4e:c.instructions+=1;goto B4fdd4e;
case 0x4fdd50:goto L4fdd50;
case 0x4fdd53:c.instructions+=4;goto B4fdd53;
case 0x4fdd56:c.instructions+=3;goto B4fdd56;
case 0x4fdd58:c.instructions+=2;goto B4fdd58;
case 0x4fdd5b:c.instructions+=1;goto B4fdd5b;
case 0x4fdd5d:goto L4fdd5d;
case 0x4fdd60:c.instructions+=4;goto B4fdd60;
case 0x4fdd63:c.instructions+=3;goto B4fdd63;
case 0x4fdd65:c.instructions+=2;goto B4fdd65;
case 0x4fdd68:c.instructions+=1;goto B4fdd68;
case 0x4fdd6a:goto L4fdd6a;
case 0x4fdd6d:c.instructions+=4;goto B4fdd6d;
case 0x4fdd70:c.instructions+=3;goto B4fdd70;
case 0x4fdd72:c.instructions+=2;goto B4fdd72;
case 0x4fdd75:c.instructions+=1;goto B4fdd75;
case 0x4fdd77:goto L4fdd77;
case 0x4fdd7c:c.instructions+=1;goto B4fdd7c;
case 0x4fdd7f:goto L4fdd7f;
case 0x4fdd81:c.instructions+=1;goto B4fdd81;
case 0x4fdd90:goto L4fdd90;
case 0x4fdd91:c.instructions+=12;goto B4fdd91;
case 0x4fdd92:c.instructions+=11;goto B4fdd92;
case 0x4fdd93:c.instructions+=10;goto B4fdd93;
case 0x4fdd97:c.instructions+=9;goto B4fdd97;
case 0x4fdd99:c.instructions+=8;goto B4fdd99;
case 0x4fdd9a:c.instructions+=7;goto B4fdd9a;
case 0x4fdd9c:c.instructions+=6;goto B4fdd9c;
case 0x4fdd9e:c.instructions+=5;goto B4fdd9e;
case 0x4fdd9f:c.instructions+=4;goto B4fdd9f;
case 0x4fdda7:c.instructions+=3;goto B4fdda7;
case 0x4fddaa:c.instructions+=2;goto B4fddaa;
case 0x4fddad:c.instructions+=1;goto B4fddad;
case 0x4fddb1:goto L4fddb1;
case 0x4fddb6:c.instructions+=5;goto B4fddb6;
case 0x4fddb9:c.instructions+=4;goto B4fddb9;
case 0x4fddba:c.instructions+=3;goto B4fddba;
case 0x4fddbd:c.instructions+=2;goto B4fddbd;
case 0x4fddbe:c.instructions+=1;goto B4fddbe;
case 0x4fddc3:goto L4fddc3;
case 0x4fddc6:c.instructions+=2;goto B4fddc6;
case 0x4fddc8:c.instructions+=1;goto B4fddc8;
case 0x4fddce:goto L4fddce;
case 0x4fddd2:c.instructions+=5;goto B4fddd2;
case 0x4fddd5:c.instructions+=4;goto B4fddd5;
case 0x4fddd7:c.instructions+=3;goto B4fddd7;
case 0x4fddd9:c.instructions+=2;goto B4fddd9;
case 0x4fdddc:c.instructions+=1;goto B4fdddc;
case 0x4fdde2:goto L4fdde2;
case 0x4fdde5:c.instructions+=4;goto B4fdde5;
case 0x4fdde8:c.instructions+=3;goto B4fdde8;
case 0x4fddea:c.instructions+=2;goto B4fddea;
case 0x4fdded:c.instructions+=1;goto B4fdded;
case 0x4fddf3:goto L4fddf3;
case 0x4fddf5:c.instructions+=4;goto B4fddf5;
case 0x4fddf8:c.instructions+=3;goto B4fddf8;
case 0x4fddfa:c.instructions+=2;goto B4fddfa;
case 0x4fddfd:c.instructions+=1;goto B4fddfd;
case 0x4fde03:goto L4fde03;
case 0x4fde06:c.instructions+=4;goto B4fde06;
case 0x4fde09:c.instructions+=3;goto B4fde09;
case 0x4fde0b:c.instructions+=2;goto B4fde0b;
case 0x4fde0e:c.instructions+=1;goto B4fde0e;
case 0x4fde14:goto L4fde14;
case 0x4fde18:c.instructions+=6;goto B4fde18;
case 0x4fde19:c.instructions+=5;goto B4fde19;
case 0x4fde1c:c.instructions+=4;goto B4fde1c;
case 0x4fde1f:c.instructions+=3;goto B4fde1f;
case 0x4fde22:c.instructions+=2;goto B4fde22;
case 0x4fde26:c.instructions+=1;goto B4fde26;
case 0x4fde28:goto L4fde28;
case 0x4fde30:c.instructions+=3;goto B4fde30;
case 0x4fde36:c.instructions+=2;goto B4fde36;
case 0x4fde3c:c.instructions+=1;goto B4fde3c;
case 0x4fde40:goto L4fde40;
case 0x4fde46:c.instructions+=3;goto B4fde46;
case 0x4fde47:c.instructions+=2;goto B4fde47;
case 0x4fde4d:c.instructions+=1;goto B4fde4d;
case 0x4fde52:goto L4fde52;
case 0x4fde54:c.instructions+=1;goto B4fde54;
case 0x4fde5a:goto L4fde5a;
case 0x4fde5d:c.instructions+=4;goto B4fde5d;
case 0x4fde60:c.instructions+=3;goto B4fde60;
case 0x4fde62:c.instructions+=2;goto B4fde62;
case 0x4fde65:c.instructions+=1;goto B4fde65;
case 0x4fde6b:goto L4fde6b;
case 0x4fde6f:c.instructions+=5;goto B4fde6f;
case 0x4fde72:c.instructions+=4;goto B4fde72;
case 0x4fde74:c.instructions+=3;goto B4fde74;
case 0x4fde76:c.instructions+=2;goto B4fde76;
case 0x4fde79:c.instructions+=1;goto B4fde79;
case 0x4fde7f:goto L4fde7f;
case 0x4fde82:c.instructions+=4;goto B4fde82;
case 0x4fde85:c.instructions+=3;goto B4fde85;
case 0x4fde87:c.instructions+=2;goto B4fde87;
case 0x4fde8a:c.instructions+=1;goto B4fde8a;
case 0x4fde90:goto L4fde90;
case 0x4fde92:c.instructions+=4;goto B4fde92;
case 0x4fde95:c.instructions+=3;goto B4fde95;
case 0x4fde97:c.instructions+=2;goto B4fde97;
case 0x4fde9a:c.instructions+=1;goto B4fde9a;
case 0x4fdea0:goto L4fdea0;
case 0x4fdea3:c.instructions+=4;goto B4fdea3;
case 0x4fdea6:c.instructions+=3;goto B4fdea6;
case 0x4fdea8:c.instructions+=2;goto B4fdea8;
case 0x4fdeab:c.instructions+=1;goto B4fdeab;
case 0x4fdeb1:goto L4fdeb1;
case 0x4fdeb5:c.instructions+=6;goto B4fdeb5;
case 0x4fdeb6:c.instructions+=5;goto B4fdeb6;
case 0x4fdeb9:c.instructions+=4;goto B4fdeb9;
case 0x4fdebc:c.instructions+=3;goto B4fdebc;
case 0x4fdebf:c.instructions+=2;goto B4fdebf;
case 0x4fdec3:c.instructions+=1;goto B4fdec3;
case 0x4fdec9:goto L4fdec9;
case 0x4fdece:c.instructions+=3;goto B4fdece;
case 0x4fdecf:c.instructions+=2;goto B4fdecf;
case 0x4fded0:c.instructions+=1;goto B4fded0;
case 0x4fded5:goto L4fded5;
case 0x4fded8:c.instructions+=2;goto B4fded8;
case 0x4fdeda:c.instructions+=1;goto B4fdeda;
case 0x4fdee0:goto L4fdee0;
case 0x4fdee6:c.instructions+=4;goto B4fdee6;
case 0x4fdeec:c.instructions+=3;goto B4fdeec;
case 0x4fdeee:c.instructions+=2;goto B4fdeee;
case 0x4fdef1:c.instructions+=1;goto B4fdef1;
case 0x4fdef7:goto L4fdef7;
case 0x4fdefd:c.instructions+=4;goto B4fdefd;
case 0x4fdf03:c.instructions+=3;goto B4fdf03;
case 0x4fdf05:c.instructions+=2;goto B4fdf05;
case 0x4fdf08:c.instructions+=1;goto B4fdf08;
case 0x4fdf0e:goto L4fdf0e;
case 0x4fdf14:c.instructions+=4;goto B4fdf14;
case 0x4fdf1a:c.instructions+=3;goto B4fdf1a;
case 0x4fdf1c:c.instructions+=2;goto B4fdf1c;
case 0x4fdf1f:c.instructions+=1;goto B4fdf1f;
case 0x4fdf25:goto L4fdf25;
case 0x4fdf2b:c.instructions+=4;goto B4fdf2b;
case 0x4fdf31:c.instructions+=3;goto B4fdf31;
case 0x4fdf33:c.instructions+=2;goto B4fdf33;
case 0x4fdf36:c.instructions+=1;goto B4fdf36;
case 0x4fdf3c:goto L4fdf3c;
case 0x4fdf42:c.instructions+=4;goto B4fdf42;
case 0x4fdf48:c.instructions+=3;goto B4fdf48;
case 0x4fdf4a:c.instructions+=2;goto B4fdf4a;
case 0x4fdf4d:c.instructions+=1;goto B4fdf4d;
case 0x4fdf53:goto L4fdf53;
case 0x4fdf59:c.instructions+=3;goto B4fdf59;
case 0x4fdf5a:c.instructions+=2;goto B4fdf5a;
case 0x4fdf60:c.instructions+=1;goto B4fdf60;
case 0x4fdf65:goto L4fdf65;
case 0x4fdf67:c.instructions+=1;goto B4fdf67;
case 0x4fdf6d:goto L4fdf6d;
case 0x4fdf73:c.instructions+=3;goto B4fdf73;
case 0x4fdf74:c.instructions+=2;goto B4fdf74;
case 0x4fdf7a:c.instructions+=1;goto B4fdf7a;
case 0x4fdf7f:goto L4fdf7f;
case 0x4fdf81:c.instructions+=1;goto B4fdf81;
case 0x4fdf87:goto L4fdf87;
case 0x4fdf8d:c.instructions+=4;goto B4fdf8d;
case 0x4fdf93:c.instructions+=3;goto B4fdf93;
case 0x4fdf95:c.instructions+=2;goto B4fdf95;
case 0x4fdf98:c.instructions+=1;goto B4fdf98;
case 0x4fdf9e:goto L4fdf9e;
case 0x4fdfa4:c.instructions+=4;goto B4fdfa4;
case 0x4fdfaa:c.instructions+=3;goto B4fdfaa;
case 0x4fdfac:c.instructions+=2;goto B4fdfac;
case 0x4fdfaf:c.instructions+=1;goto B4fdfaf;
case 0x4fdfb5:goto L4fdfb5;
case 0x4fdfbb:c.instructions+=4;goto B4fdfbb;
case 0x4fdfc1:c.instructions+=3;goto B4fdfc1;
case 0x4fdfc3:c.instructions+=2;goto B4fdfc3;
case 0x4fdfc6:c.instructions+=1;goto B4fdfc6;
case 0x4fdfc8:goto L4fdfc8;
case 0x4fdfce:c.instructions+=4;goto B4fdfce;
case 0x4fdfd4:c.instructions+=3;goto B4fdfd4;
case 0x4fdfd6:c.instructions+=2;goto B4fdfd6;
case 0x4fdfd9:c.instructions+=1;goto B4fdfd9;
case 0x4fdfdb:goto L4fdfdb;
case 0x4fdfe1:c.instructions+=3;goto B4fdfe1;
case 0x4fdfe2:c.instructions+=2;goto B4fdfe2;
case 0x4fdfe8:c.instructions+=1;goto B4fdfe8;
case 0x4fdfed:goto L4fdfed;
case 0x4fdfef:c.instructions+=1;goto B4fdfef;
case 0x4fdff1:goto L4fdff1;
case 0x4fdff7:c.instructions+=3;goto B4fdff7;
case 0x4fdffd:c.instructions+=2;goto B4fdffd;
case 0x4fdfff:c.instructions+=1;goto B4fdfff;
default:missing_instruction(c.pc);}
B4fd003:L4fd003:{c.instructions+=3;NFSU2_TR(0x4fd003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd006:{NFSU2_TR(0x4fd006);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd007:{NFSU2_TR(0x4fd007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd00cull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4fd00c:L4fd00c:{c.instructions+=2;NFSU2_TR(0x4fd00c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd00f:{NFSU2_TR(0x4fd00f);
{goto L4fd3f2;}
}
B4fd014:L4fd014:{c.instructions+=2;NFSU2_TR(0x4fd014);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd01a:{NFSU2_TR(0x4fd01a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd020:L4fd020:{c.instructions+=2;NFSU2_TR(0x4fd020);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd022:{NFSU2_TR(0x4fd022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd027ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fd027:L4fd027:{c.instructions+=2;NFSU2_TR(0x4fd027);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd02a:{NFSU2_TR(0x4fd02a);
{goto L4fd28e;}
}
B4fd02f:L4fd02f:{c.instructions+=3;NFSU2_TR(0x4fd02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd032:{NFSU2_TR(0x4fd032);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd034:{NFSU2_TR(0x4fd034);
if(r1(R+518)){{goto L4fd039;}}
}
B4fd036:L4fd036:{c.instructions+=1;NFSU2_TR(0x4fd036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fd039:L4fd039:{c.instructions+=3;NFSU2_TR(0x4fd039);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd03c:{NFSU2_TR(0x4fd03c);
__builtin_memmove((R+4),(R+28),4);
}
B4fd03e:{NFSU2_TR(0x4fd03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd043ull));
TAIL_STATIC(0x51f530u,51f);
}
B4fd043:L4fd043:{c.instructions+=3;NFSU2_TR(0x4fd043);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd044:{NFSU2_TR(0x4fd044);
__builtin_memmove((R+4),(R+28),4);
}
B4fd046:{NFSU2_TR(0x4fd046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd04bull));
TAIL_STATIC(0x51f350u,51f);
}
B4fd04b:L4fd04b:{c.instructions+=2;NFSU2_TR(0x4fd04b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd04d:{NFSU2_TR(0x4fd04d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd06b;}}
}
B4fd04f:L4fd04f:{c.instructions+=7;NFSU2_TR(0x4fd04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd055:{NFSU2_TR(0x4fd055);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4fd056:{NFSU2_TR(0x4fd056);
__builtin_memmove((R+0),(R+8),4);
}
B4fd058:{NFSU2_TR(0x4fd058);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd059:{NFSU2_TR(0x4fd059);
__builtin_memmove((R+4),(R+24),4);
}
B4fd05b:{NFSU2_TR(0x4fd05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd061:{NFSU2_TR(0x4fd061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd066ull));
TAIL_STATIC(0x4bb0f0u,4bb);
}
B4fd066:L4fd066:{c.instructions+=1;NFSU2_TR(0x4fd066);
{goto L4fd3f2;}
}
B4fd06b:L4fd06b:{c.instructions+=6;NFSU2_TR(0x4fd06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd06e:{NFSU2_TR(0x4fd06e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd070:{NFSU2_TR(0x4fd070);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd075:{NFSU2_TR(0x4fd075);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd07a:{NFSU2_TR(0x4fd07a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd07b:{NFSU2_TR(0x4fd07b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd080ull));
TAIL_STATIC(0x537c00u,537);
}
B4fd080:L4fd080:{c.instructions+=3;NFSU2_TR(0x4fd080);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fd083:{NFSU2_TR(0x4fd083);
__builtin_memmove((R+4),(R+28),4);
}
B4fd085:{NFSU2_TR(0x4fd085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd08aull));
TAIL_STATIC(0x54eb40u,54e);
}
B4fd08a:L4fd08a:{c.instructions+=3;NFSU2_TR(0x4fd08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fd08d:{NFSU2_TR(0x4fd08d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd08f:{NFSU2_TR(0x4fd08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd094ull));
TAIL_STATIC(0x58f740u,58f);
}
B4fd094:L4fd094:{c.instructions+=4;NFSU2_TR(0x4fd094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd097:{NFSU2_TR(0x4fd097);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd09a:{NFSU2_TR(0x4fd09a);
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
B4fd09c:{NFSU2_TR(0x4fd09c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd0a2;}}
}
B4fd09e:L4fd09e:{c.instructions+=2;NFSU2_TR(0x4fd09e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4fd0a0:{NFSU2_TR(0x4fd0a0);
{goto L4fd0ad;}
}
B4fd0a2:L4fd0a2:{c.instructions+=2;NFSU2_TR(0x4fd0a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd0a3:{NFSU2_TR(0x4fd0a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd0a8ull));
TAIL_STATIC(0x73d8d0u,73d);
}
B4fd0a8:L4fd0a8:{c.instructions+=2;NFSU2_TR(0x4fd0a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd0ab:{NFSU2_TR(0x4fd0ab);
__builtin_memmove((R+12),(R+0),4);
}
B4fd0ad:L4fd0ad:{c.instructions+=3;NFSU2_TR(0x4fd0ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd0ae:{NFSU2_TR(0x4fd0ae);
__builtin_memmove((R+4),(R+28),4);
}
B4fd0b0:{NFSU2_TR(0x4fd0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd0b5ull));
TAIL_STATIC(0x51f440u,51f);
}
B4fd0b5:L4fd0b5:{c.instructions+=5;NFSU2_TR(0x4fd0b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd0b6:{NFSU2_TR(0x4fd0b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd0b7:{NFSU2_TR(0x4fd0b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd0b9:{NFSU2_TR(0x4fd0b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fd0bf:{NFSU2_TR(0x4fd0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd0c4ull));
TAIL_STATIC(0x538080u,538);
}
B4fd0c4:L4fd0c4:{c.instructions+=2;NFSU2_TR(0x4fd0c4);
__builtin_memmove((R+4),(R+24),4);
}
B4fd0c6:{NFSU2_TR(0x4fd0c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd0cbull));
TAIL_STATIC(0x4bafd0u,4ba);
}
B4fd0cb:L4fd0cb:{c.instructions+=2;NFSU2_TR(0x4fd0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fd0cf:{NFSU2_TR(0x4fd0cf);
{goto L4fd3f2;}
}
B4fd0d4:L4fd0d4:{c.instructions+=2;NFSU2_TR(0x4fd0d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd0da:{NFSU2_TR(0x4fd0da);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fd268;}}
}
B4fd0e0:L4fd0e0:{c.instructions+=1;NFSU2_TR(0x4fd0e0);
if(r1(R+518)){{goto L4fd187;}}
}
B4fd0e6:L4fd0e6:{c.instructions+=2;NFSU2_TR(0x4fd0e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5971bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd0ec:{NFSU2_TR(0x4fd0ec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fd161;}}
}
B4fd0ee:L4fd0ee:{c.instructions+=1;NFSU2_TR(0x4fd0ee);
if(r1(R+518)){{goto L4fd13f;}}
}
B4fd0f0:L4fd0f0:{c.instructions+=2;NFSU2_TR(0x4fd0f0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd0f6:{NFSU2_TR(0x4fd0f6);
if(r1(R+518)){{goto L4fd11e;}}
}
B4fd0f8:L4fd0f8:{c.instructions+=2;NFSU2_TR(0x4fd0f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd0fe:{NFSU2_TR(0x4fd0fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd104:L4fd104:{c.instructions+=3;NFSU2_TR(0x4fd104);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fd10a:{NFSU2_TR(0x4fd10a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fd10c:{NFSU2_TR(0x4fd10c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd112:L4fd112:{c.instructions+=2;NFSU2_TR(0x4fd112);
__builtin_memmove((R+4),(R+24),4);
}
B4fd114:{NFSU2_TR(0x4fd114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd119ull));
TAIL_STATIC(0x4faa60u,4fa);
}
B4fd119:L4fd119:{c.instructions+=1;NFSU2_TR(0x4fd119);
{goto L4fd3f2;}
}
B4fd11e:L4fd11e:{c.instructions+=3;NFSU2_TR(0x4fd11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd124:{NFSU2_TR(0x4fd124);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd126:{NFSU2_TR(0x4fd126);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fd3f2;}}
}
B4fd12c:L4fd12c:{c.instructions+=4;NFSU2_TR(0x4fd12c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4fd12d:{NFSU2_TR(0x4fd12d);
__builtin_memmove((R+4),(R+24),4);
}
B4fd12f:{NFSU2_TR(0x4fd12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd135:{NFSU2_TR(0x4fd135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd13aull));
TAIL_STATIC(0x49ed30u,49e);
}
B4fd13a:L4fd13a:{c.instructions+=1;NFSU2_TR(0x4fd13a);
{goto L4fd3f2;}
}
B4fd13f:L4fd13f:{c.instructions+=3;NFSU2_TR(0x4fd13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd145:{NFSU2_TR(0x4fd145);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fd148:{NFSU2_TR(0x4fd148);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd14e:L4fd14e:{c.instructions+=4;NFSU2_TR(0x4fd14e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fd14f:{NFSU2_TR(0x4fd14f);
__builtin_memmove((R+4),(R+24),4);
}
B4fd151:{NFSU2_TR(0x4fd151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd157:{NFSU2_TR(0x4fd157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd15cull));
TAIL_STATIC(0x49ed30u,49e);
}
B4fd15c:L4fd15c:{c.instructions+=1;NFSU2_TR(0x4fd15c);
{goto L4fd3f2;}
}
B4fd161:L4fd161:{c.instructions+=2;NFSU2_TR(0x4fd161);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbd6234afull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd167:{NFSU2_TR(0x4fd167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd16d:L4fd16d:{c.instructions+=4;NFSU2_TR(0x4fd16d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fd174:{NFSU2_TR(0x4fd174);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fd17b:{NFSU2_TR(0x4fd17b);
__builtin_memmove((R+4),(R+24),4);
}
B4fd17d:{NFSU2_TR(0x4fd17d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd182ull));
TAIL_STATIC(0x4f1620u,4f1);
}
B4fd182:L4fd182:{c.instructions+=1;NFSU2_TR(0x4fd182);
{goto L4fd3f2;}
}
B4fd187:L4fd187:{c.instructions+=2;NFSU2_TR(0x4fd187);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd18e:{NFSU2_TR(0x4fd18e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd1d9;}}
}
B4fd190:L4fd190:{c.instructions+=3;NFSU2_TR(0x4fd190);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fd196:{NFSU2_TR(0x4fd196);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fd198:{NFSU2_TR(0x4fd198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd1d9;}}
}
B4fd19a:L4fd19a:{c.instructions+=3;NFSU2_TR(0x4fd19a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd19b:{NFSU2_TR(0x4fd19b);
__builtin_memmove((R+4),(R+24),4);
}
B4fd19d:{NFSU2_TR(0x4fd19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd1a2ull));
TAIL_STATIC(0x4bb0f0u,4bb);
}
B4fd1a2:L4fd1a2:{c.instructions+=2;NFSU2_TR(0x4fd1a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4fd1a4:{NFSU2_TR(0x4fd1a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4fd1d9;}}
}
B4fd1a6:L4fd1a6:{c.instructions+=4;NFSU2_TR(0x4fd1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd1a9:{NFSU2_TR(0x4fd1a9);
u8 U[4];
w4(U+0,u32(0x8173fc6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1ae:{NFSU2_TR(0x4fd1ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fd1b5:{NFSU2_TR(0x4fd1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd1baull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4fd1ba:L4fd1ba:{c.instructions+=6;NFSU2_TR(0x4fd1ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1bb:{NFSU2_TR(0x4fd1bb);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1c0:{NFSU2_TR(0x4fd1c0);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1c5:{NFSU2_TR(0x4fd1c5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1ca:{NFSU2_TR(0x4fd1ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd1cb:{NFSU2_TR(0x4fd1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd1d0ull));
TAIL_STATIC(0x5585e0u,558);
}
B4fd1d0:L4fd1d0:{c.instructions+=2;NFSU2_TR(0x4fd1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fd1d3:{NFSU2_TR(0x4fd1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd1d9:L4fd1d9:{c.instructions+=4;NFSU2_TR(0x4fd1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd1df:{NFSU2_TR(0x4fd1df);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fd1e5:{NFSU2_TR(0x4fd1e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fd1eb:{NFSU2_TR(0x4fd1eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd1f1:L4fd1f1:{c.instructions+=1;NFSU2_TR(0x4fd1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd1f6ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4fd1f6:L4fd1f6:{c.instructions+=2;NFSU2_TR(0x4fd1f6);
__builtin_memmove((R+4),(R+0),4);
}
B4fd1f8:{NFSU2_TR(0x4fd1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd1fdull));
TAIL_STATIC(0x582340u,582);
}
B4fd1fd:L4fd1fd:{c.instructions+=3;NFSU2_TR(0x4fd1fd);
__builtin_memmove((R+28),(R+0),4);
}
B4fd1ff:{NFSU2_TR(0x4fd1ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd201:{NFSU2_TR(0x4fd201);
if(r1(R+518)){{goto L4fd3f2;}}
}
B4fd207:L4fd207:{c.instructions+=9;NFSU2_TR(0x4fd207);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd20a:{NFSU2_TR(0x4fd20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd20d:{NFSU2_TR(0x4fd20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd210:{NFSU2_TR(0x4fd210);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4fd212:{NFSU2_TR(0x4fd212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd213:{NFSU2_TR(0x4fd213);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd218:{NFSU2_TR(0x4fd218);
u8 U[4];
w4(U+0,u32(0x4059a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd21d:{NFSU2_TR(0x4fd21d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd21e:{NFSU2_TR(0x4fd21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd223ull));
TAIL_STATIC(0x537b80u,537);
}
B4fd223:L4fd223:{c.instructions+=11;NFSU2_TR(0x4fd223);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd226:{NFSU2_TR(0x4fd226);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd229:{NFSU2_TR(0x4fd229);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd22c:{NFSU2_TR(0x4fd22c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4fd22e:{NFSU2_TR(0x4fd22e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4fd230:{NFSU2_TR(0x4fd230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd233:{NFSU2_TR(0x4fd233);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd234:{NFSU2_TR(0x4fd234);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd239:{NFSU2_TR(0x4fd239);
u8 U[4];
w4(U+0,u32(0x154d771cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd23e:{NFSU2_TR(0x4fd23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd23f:{NFSU2_TR(0x4fd23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd244ull));
TAIL_STATIC(0x537b80u,537);
}
B4fd244:L4fd244:{c.instructions+=7;NFSU2_TR(0x4fd244);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fd24a:{NFSU2_TR(0x4fd24a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4fd24d:{NFSU2_TR(0x4fd24d);
__builtin_memmove((R+4),(R+20),4);
}
B4fd24f:{NFSU2_TR(0x4fd24f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd255:{NFSU2_TR(0x4fd255);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fd25b:{NFSU2_TR(0x4fd25b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd25e:{NFSU2_TR(0x4fd25e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd263ull));
TAIL_STATIC(0x401840u,401);
}
B4fd263:L4fd263:{c.instructions+=1;NFSU2_TR(0x4fd263);
{goto L4fd3f2;}
}
B4fd268:L4fd268:{c.instructions+=2;NFSU2_TR(0x4fd268);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd26e:{NFSU2_TR(0x4fd26e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fd3e3;}}
}
B4fd274:L4fd274:{c.instructions+=1;NFSU2_TR(0x4fd274);
if(r1(R+518)){{goto L4fd2ff;}}
}
B4fd27a:L4fd27a:{c.instructions+=2;NFSU2_TR(0x4fd27a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd280:{NFSU2_TR(0x4fd280);
if(r1(R+518)){{goto L4fd2a5;}}
}
B4fd282:L4fd282:{c.instructions+=2;NFSU2_TR(0x4fd282);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd288:{NFSU2_TR(0x4fd288);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd28e:L4fd28e:{c.instructions+=5;NFSU2_TR(0x4fd28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd291:{NFSU2_TR(0x4fd291);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd292:{NFSU2_TR(0x4fd292);
u8 U[4];
w4(U+0,u32(0x78f330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd297:{NFSU2_TR(0x4fd297);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd298:{NFSU2_TR(0x4fd298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd29dull));
TAIL_STATIC(0x537980u,537);
}
B4fd29d:L4fd29d:{c.instructions+=2;NFSU2_TR(0x4fd29d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fd2a0:{NFSU2_TR(0x4fd2a0);
{goto L4fd3f2;}
}
B4fd2a5:L4fd2a5:{c.instructions+=3;NFSU2_TR(0x4fd2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd2a8:{NFSU2_TR(0x4fd2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x28c0ab0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd2ad:{NFSU2_TR(0x4fd2ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd2bb;}}
}
B4fd2af:L4fd2af:{c.instructions+=5;NFSU2_TR(0x4fd2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd2b2:{NFSU2_TR(0x4fd2b2);
u8 U[4];
w4(U+0,u32(0xfd820bf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2b7:{NFSU2_TR(0x4fd2b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2b8:{NFSU2_TR(0x4fd2b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2b9:{NFSU2_TR(0x4fd2b9);
{goto L4fd2df;}
}
B4fd2bb:L4fd2bb:{c.instructions+=2;NFSU2_TR(0x4fd2bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xcb3b8831ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd2c0:{NFSU2_TR(0x4fd2c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd2ce;}}
}
B4fd2c2:L4fd2c2:{c.instructions+=5;NFSU2_TR(0x4fd2c2);
u8 U[4];
w4(U+0,u32(0xfd85bcb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2c7:{NFSU2_TR(0x4fd2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2c8:{NFSU2_TR(0x4fd2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd2cb:{NFSU2_TR(0x4fd2cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2cc:{NFSU2_TR(0x4fd2cc);
{goto L4fd2df;}
}
B4fd2ce:L4fd2ce:{c.instructions+=2;NFSU2_TR(0x4fd2ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3a0d5aa0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd2d3:{NFSU2_TR(0x4fd2d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd2e7;}}
}
B4fd2d5:L4fd2d5:{c.instructions+=4;NFSU2_TR(0x4fd2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd2d8:{NFSU2_TR(0x4fd2d8);
u8 U[4];
w4(U+0,u32(0x4d8e1223ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2dd:{NFSU2_TR(0x4fd2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2de:{NFSU2_TR(0x4fd2de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd2df:L4fd2df:{c.instructions+=1;NFSU2_TR(0x4fd2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd2e4ull));
TAIL_STATIC(0x495460u,495);
}
B4fd2e4:L4fd2e4:{c.instructions+=1;NFSU2_TR(0x4fd2e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fd2e7:L4fd2e7:{c.instructions+=4;NFSU2_TR(0x4fd2e7);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd2f1:{NFSU2_TR(0x4fd2f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4fd2f4:{NFSU2_TR(0x4fd2f4);
__builtin_memmove(gp(0x838528),(R+8),1);
}
B4fd2fa:{NFSU2_TR(0x4fd2fa);
{goto L4fd3f2;}
}
B4fd2ff:L4fd2ff:{c.instructions+=4;NFSU2_TR(0x4fd2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd302:{NFSU2_TR(0x4fd302);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x28c0ab0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd307:{NFSU2_TR(0x4fd307);
__builtin_memmove((R+4),(R+24),4);
}
B4fd309:{NFSU2_TR(0x4fd309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd346;}}
}
B4fd30b:L4fd30b:{c.instructions+=1;NFSU2_TR(0x4fd30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd310ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd310:L4fd310:{c.instructions+=2;NFSU2_TR(0x4fd310);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4fd313:{NFSU2_TR(0x4fd313);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd330;}}
}
B4fd315:L4fd315:{c.instructions+=5;NFSU2_TR(0x4fd315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd318:{NFSU2_TR(0x4fd318);
u8 U[4];
w4(U+0,u32(0xfd820bf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd31d:{NFSU2_TR(0x4fd31d);
u8 U[4];
w4(U+0,u32(0x28c0ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd322:{NFSU2_TR(0x4fd322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd323:{NFSU2_TR(0x4fd323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd328ull));
TAIL_STATIC(0x495460u,495);
}
B4fd328:L4fd328:{c.instructions+=2;NFSU2_TR(0x4fd328);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fd32b:{NFSU2_TR(0x4fd32b);
{goto L4fd3cf;}
}
B4fd330:L4fd330:{c.instructions+=2;NFSU2_TR(0x4fd330);
__builtin_memmove((R+4),(R+24),4);
}
B4fd332:{NFSU2_TR(0x4fd332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd337ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd337:L4fd337:{c.instructions+=4;NFSU2_TR(0x4fd337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd338:{NFSU2_TR(0x4fd338);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd33a:{NFSU2_TR(0x4fd33a);
__builtin_memmove((R+4),(R+24),4);
}
B4fd33c:{NFSU2_TR(0x4fd33c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd341ull));
TAIL_STATIC(0x4bb2e0u,4bb);
}
B4fd341:L4fd341:{c.instructions+=1;NFSU2_TR(0x4fd341);
{goto L4fd3cf;}
}
B4fd346:L4fd346:{c.instructions+=2;NFSU2_TR(0x4fd346);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xcb3b8831ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd34b:{NFSU2_TR(0x4fd34b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd382;}}
}
B4fd34d:L4fd34d:{c.instructions+=1;NFSU2_TR(0x4fd34d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd352ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd352:L4fd352:{c.instructions+=2;NFSU2_TR(0x4fd352);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4fd355:{NFSU2_TR(0x4fd355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd36f;}}
}
B4fd357:L4fd357:{c.instructions+=5;NFSU2_TR(0x4fd357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd35a:{NFSU2_TR(0x4fd35a);
u8 U[4];
w4(U+0,u32(0xfd85bcb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd35f:{NFSU2_TR(0x4fd35f);
u8 U[4];
w4(U+0,u32(0xcb3b8831ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd364:{NFSU2_TR(0x4fd364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd365:{NFSU2_TR(0x4fd365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd36aull));
TAIL_STATIC(0x495460u,495);
}
B4fd36a:L4fd36a:{c.instructions+=2;NFSU2_TR(0x4fd36a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fd36d:{NFSU2_TR(0x4fd36d);
{goto L4fd3cf;}
}
B4fd36f:L4fd36f:{c.instructions+=2;NFSU2_TR(0x4fd36f);
__builtin_memmove((R+4),(R+24),4);
}
B4fd371:{NFSU2_TR(0x4fd371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd376ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd376:L4fd376:{c.instructions+=4;NFSU2_TR(0x4fd376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd377:{NFSU2_TR(0x4fd377);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd379:{NFSU2_TR(0x4fd379);
__builtin_memmove((R+4),(R+24),4);
}
B4fd37b:{NFSU2_TR(0x4fd37b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd380ull));
TAIL_STATIC(0x4bb2e0u,4bb);
}
B4fd380:L4fd380:{c.instructions+=1;NFSU2_TR(0x4fd380);
{goto L4fd3cf;}
}
B4fd382:L4fd382:{c.instructions+=2;NFSU2_TR(0x4fd382);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3a0d5aa0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd387:{NFSU2_TR(0x4fd387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3be;}}
}
B4fd389:L4fd389:{c.instructions+=1;NFSU2_TR(0x4fd389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd38eull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd38e:L4fd38e:{c.instructions+=2;NFSU2_TR(0x4fd38e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4fd391:{NFSU2_TR(0x4fd391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3ab;}}
}
B4fd393:L4fd393:{c.instructions+=5;NFSU2_TR(0x4fd393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd396:{NFSU2_TR(0x4fd396);
u8 U[4];
w4(U+0,u32(0x4d8e1223ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd39b:{NFSU2_TR(0x4fd39b);
u8 U[4];
w4(U+0,u32(0x3a0d5aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd3a0:{NFSU2_TR(0x4fd3a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd3a1:{NFSU2_TR(0x4fd3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd3a6ull));
TAIL_STATIC(0x495460u,495);
}
B4fd3a6:L4fd3a6:{c.instructions+=2;NFSU2_TR(0x4fd3a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fd3a9:{NFSU2_TR(0x4fd3a9);
{goto L4fd3cf;}
}
B4fd3ab:L4fd3ab:{c.instructions+=2;NFSU2_TR(0x4fd3ab);
__builtin_memmove((R+4),(R+24),4);
}
B4fd3ad:{NFSU2_TR(0x4fd3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd3b2ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd3b2:L4fd3b2:{c.instructions+=4;NFSU2_TR(0x4fd3b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd3b3:{NFSU2_TR(0x4fd3b3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd3b5:{NFSU2_TR(0x4fd3b5);
__builtin_memmove((R+4),(R+24),4);
}
B4fd3b7:{NFSU2_TR(0x4fd3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd3bcull));
TAIL_STATIC(0x4bb2e0u,4bb);
}
B4fd3bc:L4fd3bc:{c.instructions+=1;NFSU2_TR(0x4fd3bc);
{goto L4fd3cf;}
}
B4fd3be:L4fd3be:{c.instructions+=1;NFSU2_TR(0x4fd3be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd3c3ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4fd3c3:L4fd3c3:{c.instructions+=3;NFSU2_TR(0x4fd3c3);
__builtin_memmove((R+4),(R+24),4);
}
B4fd3c5:{NFSU2_TR(0x4fd3c5);
__builtin_memmove(gp(0x836388),(R+0),4);
}
B4fd3ca:{NFSU2_TR(0x4fd3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd3cfull));
TAIL_STATIC(0x4f1620u,4f1);
}
B4fd3cf:L4fd3cf:{c.instructions+=4;NFSU2_TR(0x4fd3cf);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd3d9:{NFSU2_TR(0x4fd3d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4fd3dc:{NFSU2_TR(0x4fd3dc);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B4fd3e1:{NFSU2_TR(0x4fd3e1);
{goto L4fd3f2;}
}
B4fd3e3:L4fd3e3:{c.instructions+=2;NFSU2_TR(0x4fd3e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf7f19667ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd3e9:{NFSU2_TR(0x4fd3e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd3f2;}}
}
B4fd3eb:L4fd3eb:{c.instructions+=1;NFSU2_TR(0x4fd3eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fd3f2:L4fd3f2:{c.instructions+=3;NFSU2_TR(0x4fd3f2);
__builtin_memmove((R+0),gp(0x8362e0),1);
}
B4fd3f7:{NFSU2_TR(0x4fd3f7);
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
B4fd3f9:{NFSU2_TR(0x4fd3f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd432;}}
}
B4fd3fb:L4fd3fb:{c.instructions+=11;NFSU2_TR(0x4fd3fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd3ff:{NFSU2_TR(0x4fd3ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd403:{NFSU2_TR(0x4fd403);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd407:{NFSU2_TR(0x4fd407);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd409:{NFSU2_TR(0x4fd409);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd40a:{NFSU2_TR(0x4fd40a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd40b:{NFSU2_TR(0x4fd40b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd40c:{NFSU2_TR(0x4fd40c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x120ull))));
}
B4fd412:{NFSU2_TR(0x4fd412);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd413:{NFSU2_TR(0x4fd413);
__builtin_memmove((R+4),(R+24),4);
}
B4fd415:{NFSU2_TR(0x4fd415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd41aull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4fd41a:L4fd41a:{c.instructions+=2;NFSU2_TR(0x4fd41a);
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
B4fd41d:{NFSU2_TR(0x4fd41d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd432;}}
}
B4fd41f:L4fd41f:{c.instructions+=5;NFSU2_TR(0x4fd41f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd421:{NFSU2_TR(0x4fd421);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd426:{NFSU2_TR(0x4fd426);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd42b:{NFSU2_TR(0x4fd42b);
__builtin_memmove((R+4),(R+24),4);
}
B4fd42d:{NFSU2_TR(0x4fd42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd432ull));
TAIL_STATIC(0x4b8fa0u,4b8);
}
B4fd432:L4fd432:{c.instructions+=5;NFSU2_TR(0x4fd432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd433:{NFSU2_TR(0x4fd433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd434:{NFSU2_TR(0x4fd434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fd435:{NFSU2_TR(0x4fd435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fd436:{NFSU2_TR(0x4fd436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd450:L4fd450:{c.instructions+=8;NFSU2_TR(0x4fd450);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd452:{NFSU2_TR(0x4fd452);
u8 U[4];
w4(U+0,u32(0x776ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd457:{NFSU2_TR(0x4fd457);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd45d:{NFSU2_TR(0x4fd45d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd45e:{NFSU2_TR(0x4fd45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd465:{NFSU2_TR(0x4fd465);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd466:{NFSU2_TR(0x4fd466);
u8 U[4];
w4(U+0,u32(0x1bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd46b:{NFSU2_TR(0x4fd46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd470ull));
TAIL_STATIC(0x575620u,575);
}
B4fd470:L4fd470:{c.instructions+=5;NFSU2_TR(0x4fd470);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd473:{NFSU2_TR(0x4fd473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fd477:{NFSU2_TR(0x4fd477);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd479:{NFSU2_TR(0x4fd479);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fd481:{NFSU2_TR(0x4fd481);
if(r1(R+518)){{goto L4fd49e;}}
}
B4fd483:L4fd483:{c.instructions+=4;NFSU2_TR(0x4fd483);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd487:{NFSU2_TR(0x4fd487);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd488:{NFSU2_TR(0x4fd488);
__builtin_memmove((R+4),(R+0),4);
}
B4fd48a:{NFSU2_TR(0x4fd48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd48full));
TAIL_STATIC(0x4fb320u,4fb);
}
B4fd48f:L4fd48f:{c.instructions+=4;NFSU2_TR(0x4fd48f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd493:{NFSU2_TR(0x4fd493);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd49a:{NFSU2_TR(0x4fd49a);
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
B4fd49d:{NFSU2_TR(0x4fd49d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd49e:L4fd49e:{c.instructions+=5;NFSU2_TR(0x4fd49e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd4a2:{NFSU2_TR(0x4fd4a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fd4a4:{NFSU2_TR(0x4fd4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd4ab:{NFSU2_TR(0x4fd4ab);
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
B4fd4ae:{NFSU2_TR(0x4fd4ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd4b0:L4fd4b0:{c.instructions+=8;NFSU2_TR(0x4fd4b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4b2:{NFSU2_TR(0x4fd4b2);
u8 U[4];
w4(U+0,u32(0x776f14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4b7:{NFSU2_TR(0x4fd4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd4bd:{NFSU2_TR(0x4fd4bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4be:{NFSU2_TR(0x4fd4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd4c5:{NFSU2_TR(0x4fd4c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4c6:{NFSU2_TR(0x4fd4c6);
u8 U[4];
w4(U+0,u32(0x928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4cb:{NFSU2_TR(0x4fd4cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd4d0ull));
TAIL_STATIC(0x575620u,575);
}
B4fd4d0:L4fd4d0:{c.instructions+=5;NFSU2_TR(0x4fd4d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd4d3:{NFSU2_TR(0x4fd4d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4d7:{NFSU2_TR(0x4fd4d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd4d9:{NFSU2_TR(0x4fd4d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fd4e1:{NFSU2_TR(0x4fd4e1);
if(r1(R+518)){{goto L4fd4fe;}}
}
B4fd4e3:L4fd4e3:{c.instructions+=4;NFSU2_TR(0x4fd4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd4e7:{NFSU2_TR(0x4fd4e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd4e8:{NFSU2_TR(0x4fd4e8);
__builtin_memmove((R+4),(R+0),4);
}
B4fd4ea:{NFSU2_TR(0x4fd4ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd4efull));
TAIL_STATIC(0x4fb4c0u,4fb);
}
B4fd4ef:L4fd4ef:{c.instructions+=4;NFSU2_TR(0x4fd4ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd4f3:{NFSU2_TR(0x4fd4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd4fa:{NFSU2_TR(0x4fd4fa);
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
B4fd4fd:{NFSU2_TR(0x4fd4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd4fe:L4fd4fe:{c.instructions+=5;NFSU2_TR(0x4fd4fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd502:{NFSU2_TR(0x4fd502);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fd504:{NFSU2_TR(0x4fd504);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd50b:{NFSU2_TR(0x4fd50b);
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
B4fd50e:{NFSU2_TR(0x4fd50e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd510:L4fd510:{c.instructions+=14;NFSU2_TR(0x4fd510);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd514:{NFSU2_TR(0x4fd514);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd515:{NFSU2_TR(0x4fd515);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fd519:{NFSU2_TR(0x4fd519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd51a:{NFSU2_TR(0x4fd51a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fd51e:{NFSU2_TR(0x4fd51e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd51f:{NFSU2_TR(0x4fd51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd520:{NFSU2_TR(0x4fd520);
__builtin_memmove((R+28),(R+4),4);
}
B4fd522:{NFSU2_TR(0x4fd522);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd526:{NFSU2_TR(0x4fd526);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd527:{NFSU2_TR(0x4fd527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd528:{NFSU2_TR(0x4fd528);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd529:{NFSU2_TR(0x4fd529);
__builtin_memmove((R+4),(R+28),4);
}
B4fd52b:{NFSU2_TR(0x4fd52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd530ull));
TAIL_STATIC(0x4fb8f0u,4fb);
}
B4fd530:L4fd530:{c.instructions+=2;NFSU2_TR(0x4fd530);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd536:{NFSU2_TR(0x4fd536);
if(r1(R+518)){{goto L4fd55b;}}
}
B4fd538:L4fd538:{c.instructions+=2;NFSU2_TR(0x4fd538);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd53e:{NFSU2_TR(0x4fd53e);
if(r1(R+518)){{goto L4fd548;}}
}
B4fd540:L4fd540:{c.instructions+=2;NFSU2_TR(0x4fd540);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8867412dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8867412dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8867412dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fd546:{NFSU2_TR(0x4fd546);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd566;}}
}
B4fd548:L4fd548:{c.instructions+=4;NFSU2_TR(0x4fd548);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd54b:{NFSU2_TR(0x4fd54b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd54c:{NFSU2_TR(0x4fd54c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd54d:{NFSU2_TR(0x4fd54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd552ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4fd552:L4fd552:{c.instructions+=5;NFSU2_TR(0x4fd552);
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
B4fd555:{NFSU2_TR(0x4fd555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd556:{NFSU2_TR(0x4fd556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd557:{NFSU2_TR(0x4fd557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fd558:{NFSU2_TR(0x4fd558);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd55b:L4fd55b:{c.instructions+=2;NFSU2_TR(0x4fd55b);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4fd561:{NFSU2_TR(0x4fd561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd566ull));
TAIL_STATIC(0x4d9a20u,4d9);
}
B4fd566:L4fd566:{c.instructions+=4;NFSU2_TR(0x4fd566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd567:{NFSU2_TR(0x4fd567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd568:{NFSU2_TR(0x4fd568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fd569:{NFSU2_TR(0x4fd569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd570:L4fd570:{c.instructions+=13;NFSU2_TR(0x4fd570);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd574:{NFSU2_TR(0x4fd574);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd578:{NFSU2_TR(0x4fd578);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd579:{NFSU2_TR(0x4fd579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd57a:{NFSU2_TR(0x4fd57a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd57e:{NFSU2_TR(0x4fd57e);
__builtin_memmove((R+24),(R+4),4);
}
B4fd580:{NFSU2_TR(0x4fd580);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd584:{NFSU2_TR(0x4fd584);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd585:{NFSU2_TR(0x4fd585);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd586:{NFSU2_TR(0x4fd586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd587:{NFSU2_TR(0x4fd587);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd588:{NFSU2_TR(0x4fd588);
__builtin_memmove((R+4),(R+24),4);
}
B4fd58a:{NFSU2_TR(0x4fd58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd58full));
TAIL_STATIC(0x4fb8f0u,4fb);
}
B4fd58f:L4fd58f:{c.instructions+=2;NFSU2_TR(0x4fd58f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8867412dull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8867412dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd595:{NFSU2_TR(0x4fd595);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fd640;}}
}
B4fd59b:L4fd59b:{c.instructions+=1;NFSU2_TR(0x4fd59b);
if(r1(R+518)){{goto L4fd5ee;}}
}
B4fd59d:L4fd59d:{c.instructions+=2;NFSU2_TR(0x4fd59d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15457de1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd5a3:{NFSU2_TR(0x4fd5a3);
if(r1(R+518)){{goto L4fd5e2;}}
}
B4fd5a5:L4fd5a5:{c.instructions+=2;NFSU2_TR(0x4fd5a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd5ab:{NFSU2_TR(0x4fd5ab);
if(r1(R+518)){{goto L4fd5c5;}}
}
B4fd5ad:L4fd5ad:{c.instructions+=2;NFSU2_TR(0x4fd5ad);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5a051729ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5a051729ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5a051729ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fd5b3:{NFSU2_TR(0x4fd5b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd6b4;}}
}
B4fd5b9:L4fd5b9:{c.instructions+=2;NFSU2_TR(0x4fd5b9);
__builtin_memmove((R+4),(R+24),4);
}
B4fd5bb:{NFSU2_TR(0x4fd5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd5c0ull));
TAIL_STATIC(0x4f33a0u,4f3);
}
B4fd5c0:L4fd5c0:{c.instructions+=3;NFSU2_TR(0x4fd5c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd5c1:{NFSU2_TR(0x4fd5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd5c2:{NFSU2_TR(0x4fd5c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd5c5:L4fd5c5:{c.instructions+=2;NFSU2_TR(0x4fd5c5);
w4(R+4,u32(0x83a9d0ull));
}
B4fd5ca:{NFSU2_TR(0x4fd5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd5cfull));
TAIL_STATIC(0x5032c0u,503);
}
B4fd5cf:L4fd5cf:{c.instructions+=3;NFSU2_TR(0x4fd5cf);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd5d4:{NFSU2_TR(0x4fd5d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd5d5:{NFSU2_TR(0x4fd5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd5daull));
TAIL_STATIC(0x4a31d0u,4a3);
}
B4fd5da:L4fd5da:{c.instructions+=4;NFSU2_TR(0x4fd5da);
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
B4fd5dd:{NFSU2_TR(0x4fd5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd5de:{NFSU2_TR(0x4fd5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd5df:{NFSU2_TR(0x4fd5df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd5e2:L4fd5e2:{c.instructions+=2;NFSU2_TR(0x4fd5e2);
__builtin_memmove((R+4),(R+24),4);
}
B4fd5e4:{NFSU2_TR(0x4fd5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd5e9ull));
TAIL_STATIC(0x4a3330u,4a3);
}
B4fd5e9:L4fd5e9:{c.instructions+=3;NFSU2_TR(0x4fd5e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd5ea:{NFSU2_TR(0x4fd5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd5eb:{NFSU2_TR(0x4fd5eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd5ee:L4fd5ee:{c.instructions+=2;NFSU2_TR(0x4fd5ee);
__builtin_memmove((R+4),(R+24),4);
}
B4fd5f0:{NFSU2_TR(0x4fd5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd5f5ull));
TAIL_STATIC(0x4a3330u,4a3);
}
B4fd5f5:L4fd5f5:{c.instructions+=3;NFSU2_TR(0x4fd5f5);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4fd5fa:{NFSU2_TR(0x4fd5fa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fd5fd:{NFSU2_TR(0x4fd5fd);
if(r1(R+518)){{goto L4fd623;}}
}
B4fd5ff:L4fd5ff:{c.instructions+=2;NFSU2_TR(0x4fd5ff);
w4(R+4,u32(0x83a9e0ull));
}
B4fd604:{NFSU2_TR(0x4fd604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd609ull));
TAIL_STATIC(0x502fe0u,502);
}
B4fd609:L4fd609:{c.instructions+=2;NFSU2_TR(0x4fd609);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fd60b:{NFSU2_TR(0x4fd60b);
if(r1(R+518)){{goto L4fd623;}}
}
B4fd60d:L4fd60d:{c.instructions+=4;NFSU2_TR(0x4fd60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd610:{NFSU2_TR(0x4fd610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd611:{NFSU2_TR(0x4fd611);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd616:{NFSU2_TR(0x4fd616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd61bull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fd61b:L4fd61b:{c.instructions+=4;NFSU2_TR(0x4fd61b);
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
B4fd61e:{NFSU2_TR(0x4fd61e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd61f:{NFSU2_TR(0x4fd61f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd620:{NFSU2_TR(0x4fd620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd623:L4fd623:{c.instructions+=2;NFSU2_TR(0x4fd623);
w4(R+4,u32(0x83a9d0ull));
}
B4fd628:{NFSU2_TR(0x4fd628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd62dull));
TAIL_STATIC(0x5347c0u,534);
}
B4fd62d:L4fd62d:{c.instructions+=3;NFSU2_TR(0x4fd62d);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd632:{NFSU2_TR(0x4fd632);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd633:{NFSU2_TR(0x4fd633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd638ull));
TAIL_STATIC(0x4a31d0u,4a3);
}
B4fd638:L4fd638:{c.instructions+=4;NFSU2_TR(0x4fd638);
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
B4fd63b:{NFSU2_TR(0x4fd63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd63c:{NFSU2_TR(0x4fd63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd63d:{NFSU2_TR(0x4fd63d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd640:L4fd640:{c.instructions+=2;NFSU2_TR(0x4fd640);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9854ed75ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9854ed75ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9854ed75ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fd646:{NFSU2_TR(0x4fd646);
if(r1(R+518)){{goto L4fd694;}}
}
B4fd648:L4fd648:{c.instructions+=2;NFSU2_TR(0x4fd648);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa4bb7ae1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fd64e:{NFSU2_TR(0x4fd64e);
if(r1(R+518)){{goto L4fd666;}}
}
B4fd650:L4fd650:{c.instructions+=2;NFSU2_TR(0x4fd650);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xdc12af2eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdc12af2eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdc12af2eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fd656:{NFSU2_TR(0x4fd656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fd6b4;}}
}
B4fd658:L4fd658:{c.instructions+=3;NFSU2_TR(0x4fd658);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd65a:{NFSU2_TR(0x4fd65a);
__builtin_memmove((R+4),(R+24),4);
}
B4fd65c:{NFSU2_TR(0x4fd65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd661ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4fd661:L4fd661:{c.instructions+=3;NFSU2_TR(0x4fd661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd662:{NFSU2_TR(0x4fd662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd663:{NFSU2_TR(0x4fd663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd666:L4fd666:{c.instructions+=10;NFSU2_TR(0x4fd666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd669:{NFSU2_TR(0x4fd669);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fd66c:{NFSU2_TR(0x4fd66c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd66d:{NFSU2_TR(0x4fd66d);
u8 U[4];
w4(U+0,u32(0xf5ad01b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd672:{NFSU2_TR(0x4fd672);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd677:{NFSU2_TR(0x4fd677);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd67c:{NFSU2_TR(0x4fd67c);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd681:{NFSU2_TR(0x4fd681);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd686:{NFSU2_TR(0x4fd686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd687:{NFSU2_TR(0x4fd687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd68cull));
TAIL_STATIC(0x558570u,558);
}
B4fd68c:L4fd68c:{c.instructions+=4;NFSU2_TR(0x4fd68c);
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
B4fd68f:{NFSU2_TR(0x4fd68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd690:{NFSU2_TR(0x4fd690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd691:{NFSU2_TR(0x4fd691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd694:L4fd694:{c.instructions+=2;NFSU2_TR(0x4fd694);
w4(R+4,u32(0x83a9e0ull));
}
B4fd699:{NFSU2_TR(0x4fd699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd69eull));
TAIL_STATIC(0x502fd0u,502);
}
B4fd69e:L4fd69e:{c.instructions+=4;NFSU2_TR(0x4fd69e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd69f:{NFSU2_TR(0x4fd69f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fd6a2:{NFSU2_TR(0x4fd6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6a3:{NFSU2_TR(0x4fd6a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd6a8ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4fd6a8:L4fd6a8:{c.instructions+=4;NFSU2_TR(0x4fd6a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fd6ab:{NFSU2_TR(0x4fd6ab);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6ad:{NFSU2_TR(0x4fd6ad);
__builtin_memmove((R+4),(R+24),4);
}
B4fd6af:{NFSU2_TR(0x4fd6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd6b4ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4fd6b4:L4fd6b4:{c.instructions+=3;NFSU2_TR(0x4fd6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd6b5:{NFSU2_TR(0x4fd6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd6b6:{NFSU2_TR(0x4fd6b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd6c0:L4fd6c0:{c.instructions+=8;NFSU2_TR(0x4fd6c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6c2:{NFSU2_TR(0x4fd6c2);
u8 U[4];
w4(U+0,u32(0x776f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6c7:{NFSU2_TR(0x4fd6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd6cd:{NFSU2_TR(0x4fd6cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6ce:{NFSU2_TR(0x4fd6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd6d5:{NFSU2_TR(0x4fd6d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6d6:{NFSU2_TR(0x4fd6d6);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6db:{NFSU2_TR(0x4fd6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd6e0ull));
TAIL_STATIC(0x575620u,575);
}
B4fd6e0:L4fd6e0:{c.instructions+=5;NFSU2_TR(0x4fd6e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd6e3:{NFSU2_TR(0x4fd6e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6e7:{NFSU2_TR(0x4fd6e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd6e9:{NFSU2_TR(0x4fd6e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fd6f1:{NFSU2_TR(0x4fd6f1);
if(r1(R+518)){{goto L4fd70e;}}
}
B4fd6f3:L4fd6f3:{c.instructions+=4;NFSU2_TR(0x4fd6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd6f7:{NFSU2_TR(0x4fd6f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd6f8:{NFSU2_TR(0x4fd6f8);
__builtin_memmove((R+4),(R+0),4);
}
B4fd6fa:{NFSU2_TR(0x4fd6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd6ffull));
TAIL_STATIC(0x4fbbc0u,4fb);
}
B4fd6ff:L4fd6ff:{c.instructions+=4;NFSU2_TR(0x4fd6ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd703:{NFSU2_TR(0x4fd703);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd70a:{NFSU2_TR(0x4fd70a);
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
B4fd70d:{NFSU2_TR(0x4fd70d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd70e:L4fd70e:{c.instructions+=5;NFSU2_TR(0x4fd70e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd712:{NFSU2_TR(0x4fd712);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fd714:{NFSU2_TR(0x4fd714);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd71b:{NFSU2_TR(0x4fd71b);
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
B4fd71e:{NFSU2_TR(0x4fd71e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd720:L4fd720:{c.instructions+=7;NFSU2_TR(0x4fd720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd721:{NFSU2_TR(0x4fd721);
__builtin_memmove((R+24),(R+4),4);
}
B4fd723:{NFSU2_TR(0x4fd723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd724:{NFSU2_TR(0x4fd724);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd727:{NFSU2_TR(0x4fd727);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd729:{NFSU2_TR(0x4fd729);
u8 U[4];
w4(U+0,u32(0x798f10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fd72f:{NFSU2_TR(0x4fd72f);
if(r1(R+518)){{goto L4fd741;}}
}
B4fd731:L4fd731:{c.instructions+=2;NFSU2_TR(0x4fd731);
__builtin_memmove((R+4),(R+28),4);
}
B4fd733:{NFSU2_TR(0x4fd733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd738ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd738:L4fd738:{c.instructions+=2;NFSU2_TR(0x4fd738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd739:{NFSU2_TR(0x4fd739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd73eull));
TAIL_STATIC(0x575630u,575);
}
B4fd73e:L4fd73e:{c.instructions+=1;NFSU2_TR(0x4fd73e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd741:L4fd741:{c.instructions+=3;NFSU2_TR(0x4fd741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd744:{NFSU2_TR(0x4fd744);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd746:{NFSU2_TR(0x4fd746);
if(r1(R+518)){{goto L4fd758;}}
}
B4fd748:L4fd748:{c.instructions+=2;NFSU2_TR(0x4fd748);
__builtin_memmove((R+4),(R+28),4);
}
B4fd74a:{NFSU2_TR(0x4fd74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd74full));
TAIL_STATIC(0x4835c0u,483);
}
B4fd74f:L4fd74f:{c.instructions+=2;NFSU2_TR(0x4fd74f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd750:{NFSU2_TR(0x4fd750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd755ull));
TAIL_STATIC(0x575630u,575);
}
B4fd755:L4fd755:{c.instructions+=1;NFSU2_TR(0x4fd755);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd758:L4fd758:{c.instructions+=3;NFSU2_TR(0x4fd758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd75b:{NFSU2_TR(0x4fd75b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd75d:{NFSU2_TR(0x4fd75d);
if(r1(R+518)){{goto L4fd76f;}}
}
B4fd75f:L4fd75f:{c.instructions+=2;NFSU2_TR(0x4fd75f);
__builtin_memmove((R+4),(R+28),4);
}
B4fd761:{NFSU2_TR(0x4fd761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd766ull));
TAIL_STATIC(0x4f4df0u,4f4);
}
B4fd766:L4fd766:{c.instructions+=2;NFSU2_TR(0x4fd766);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd767:{NFSU2_TR(0x4fd767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd76cull));
TAIL_STATIC(0x575630u,575);
}
B4fd76c:L4fd76c:{c.instructions+=1;NFSU2_TR(0x4fd76c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd76f:L4fd76f:{c.instructions+=3;NFSU2_TR(0x4fd76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd772:{NFSU2_TR(0x4fd772);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd774:{NFSU2_TR(0x4fd774);
if(r1(R+518)){{goto L4fd786;}}
}
B4fd776:L4fd776:{c.instructions+=2;NFSU2_TR(0x4fd776);
__builtin_memmove((R+4),(R+28),4);
}
B4fd778:{NFSU2_TR(0x4fd778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd77dull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd77d:L4fd77d:{c.instructions+=2;NFSU2_TR(0x4fd77d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd77e:{NFSU2_TR(0x4fd77e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd783ull));
TAIL_STATIC(0x575630u,575);
}
B4fd783:L4fd783:{c.instructions+=1;NFSU2_TR(0x4fd783);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd786:L4fd786:{c.instructions+=3;NFSU2_TR(0x4fd786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd789:{NFSU2_TR(0x4fd789);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd78b:{NFSU2_TR(0x4fd78b);
if(r1(R+518)){{goto L4fd79d;}}
}
B4fd78d:L4fd78d:{c.instructions+=2;NFSU2_TR(0x4fd78d);
__builtin_memmove((R+4),(R+28),4);
}
B4fd78f:{NFSU2_TR(0x4fd78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd794ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd794:L4fd794:{c.instructions+=2;NFSU2_TR(0x4fd794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd795:{NFSU2_TR(0x4fd795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd79aull));
TAIL_STATIC(0x575630u,575);
}
B4fd79a:L4fd79a:{c.instructions+=1;NFSU2_TR(0x4fd79a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd79d:L4fd79d:{c.instructions+=3;NFSU2_TR(0x4fd79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd7a0:{NFSU2_TR(0x4fd7a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd7a2:{NFSU2_TR(0x4fd7a2);
if(r1(R+518)){{goto L4fd7b4;}}
}
B4fd7a4:L4fd7a4:{c.instructions+=2;NFSU2_TR(0x4fd7a4);
__builtin_memmove((R+4),(R+28),4);
}
B4fd7a6:{NFSU2_TR(0x4fd7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7abull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd7ab:L4fd7ab:{c.instructions+=2;NFSU2_TR(0x4fd7ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd7ac:{NFSU2_TR(0x4fd7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7b1ull));
TAIL_STATIC(0x575630u,575);
}
B4fd7b1:L4fd7b1:{c.instructions+=1;NFSU2_TR(0x4fd7b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd7b4:L4fd7b4:{c.instructions+=3;NFSU2_TR(0x4fd7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd7b7:{NFSU2_TR(0x4fd7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd7b9:{NFSU2_TR(0x4fd7b9);
if(r1(R+518)){{goto L4fd7cb;}}
}
B4fd7bb:L4fd7bb:{c.instructions+=2;NFSU2_TR(0x4fd7bb);
__builtin_memmove((R+4),(R+28),4);
}
B4fd7bd:{NFSU2_TR(0x4fd7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7c2ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd7c2:L4fd7c2:{c.instructions+=2;NFSU2_TR(0x4fd7c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd7c3:{NFSU2_TR(0x4fd7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7c8ull));
TAIL_STATIC(0x575630u,575);
}
B4fd7c8:L4fd7c8:{c.instructions+=1;NFSU2_TR(0x4fd7c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd7cb:L4fd7cb:{c.instructions+=3;NFSU2_TR(0x4fd7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd7ce:{NFSU2_TR(0x4fd7ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd7d0:{NFSU2_TR(0x4fd7d0);
if(r1(R+518)){{goto L4fd7e2;}}
}
B4fd7d2:L4fd7d2:{c.instructions+=2;NFSU2_TR(0x4fd7d2);
__builtin_memmove((R+4),(R+28),4);
}
B4fd7d4:{NFSU2_TR(0x4fd7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7d9ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd7d9:L4fd7d9:{c.instructions+=2;NFSU2_TR(0x4fd7d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd7da:{NFSU2_TR(0x4fd7da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7dfull));
TAIL_STATIC(0x575630u,575);
}
B4fd7df:L4fd7df:{c.instructions+=1;NFSU2_TR(0x4fd7df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd7e2:L4fd7e2:{c.instructions+=3;NFSU2_TR(0x4fd7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd7e5:{NFSU2_TR(0x4fd7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd7e7:{NFSU2_TR(0x4fd7e7);
if(r1(R+518)){{goto L4fd7f9;}}
}
B4fd7e9:L4fd7e9:{c.instructions+=2;NFSU2_TR(0x4fd7e9);
__builtin_memmove((R+4),(R+28),4);
}
B4fd7eb:{NFSU2_TR(0x4fd7eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7f0ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd7f0:L4fd7f0:{c.instructions+=2;NFSU2_TR(0x4fd7f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd7f1:{NFSU2_TR(0x4fd7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd7f6ull));
TAIL_STATIC(0x575630u,575);
}
B4fd7f6:L4fd7f6:{c.instructions+=1;NFSU2_TR(0x4fd7f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd7f9:L4fd7f9:{c.instructions+=3;NFSU2_TR(0x4fd7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd7fc:{NFSU2_TR(0x4fd7fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd7fe:{NFSU2_TR(0x4fd7fe);
if(r1(R+518)){{goto L4fd810;}}
}
B4fd800:L4fd800:{c.instructions+=2;NFSU2_TR(0x4fd800);
__builtin_memmove((R+4),(R+28),4);
}
B4fd802:{NFSU2_TR(0x4fd802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd807ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd807:L4fd807:{c.instructions+=2;NFSU2_TR(0x4fd807);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd808:{NFSU2_TR(0x4fd808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd80dull));
TAIL_STATIC(0x575630u,575);
}
B4fd80d:L4fd80d:{c.instructions+=1;NFSU2_TR(0x4fd80d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd810:L4fd810:{c.instructions+=3;NFSU2_TR(0x4fd810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd813:{NFSU2_TR(0x4fd813);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd815:{NFSU2_TR(0x4fd815);
if(r1(R+518)){{goto L4fd827;}}
}
B4fd817:L4fd817:{c.instructions+=2;NFSU2_TR(0x4fd817);
__builtin_memmove((R+4),(R+28),4);
}
B4fd819:{NFSU2_TR(0x4fd819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd81eull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd81e:L4fd81e:{c.instructions+=2;NFSU2_TR(0x4fd81e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd81f:{NFSU2_TR(0x4fd81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd824ull));
TAIL_STATIC(0x575630u,575);
}
B4fd824:L4fd824:{c.instructions+=1;NFSU2_TR(0x4fd824);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd827:L4fd827:{c.instructions+=3;NFSU2_TR(0x4fd827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd82a:{NFSU2_TR(0x4fd82a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd82c:{NFSU2_TR(0x4fd82c);
if(r1(R+518)){{goto L4fd83e;}}
}
B4fd82e:L4fd82e:{c.instructions+=2;NFSU2_TR(0x4fd82e);
__builtin_memmove((R+4),(R+28),4);
}
B4fd830:{NFSU2_TR(0x4fd830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd835ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd835:L4fd835:{c.instructions+=2;NFSU2_TR(0x4fd835);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd836:{NFSU2_TR(0x4fd836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd83bull));
TAIL_STATIC(0x575630u,575);
}
B4fd83b:L4fd83b:{c.instructions+=1;NFSU2_TR(0x4fd83b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd83e:L4fd83e:{c.instructions+=3;NFSU2_TR(0x4fd83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd841:{NFSU2_TR(0x4fd841);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd843:{NFSU2_TR(0x4fd843);
if(r1(R+518)){{goto L4fd855;}}
}
B4fd845:L4fd845:{c.instructions+=2;NFSU2_TR(0x4fd845);
__builtin_memmove((R+4),(R+28),4);
}
B4fd847:{NFSU2_TR(0x4fd847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd84cull));
TAIL_STATIC(0x4ebdb0u,4eb);
}
B4fd84c:L4fd84c:{c.instructions+=2;NFSU2_TR(0x4fd84c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd84d:{NFSU2_TR(0x4fd84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd852ull));
TAIL_STATIC(0x575630u,575);
}
B4fd852:L4fd852:{c.instructions+=1;NFSU2_TR(0x4fd852);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd855:L4fd855:{c.instructions+=3;NFSU2_TR(0x4fd855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd858:{NFSU2_TR(0x4fd858);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd85a:{NFSU2_TR(0x4fd85a);
if(r1(R+518)){{goto L4fd86c;}}
}
B4fd85c:L4fd85c:{c.instructions+=2;NFSU2_TR(0x4fd85c);
__builtin_memmove((R+4),(R+28),4);
}
B4fd85e:{NFSU2_TR(0x4fd85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd863ull));
TAIL_STATIC(0x4ebe40u,4eb);
}
B4fd863:L4fd863:{c.instructions+=2;NFSU2_TR(0x4fd863);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd864:{NFSU2_TR(0x4fd864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd869ull));
TAIL_STATIC(0x575630u,575);
}
B4fd869:L4fd869:{c.instructions+=1;NFSU2_TR(0x4fd869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd86c:L4fd86c:{c.instructions+=3;NFSU2_TR(0x4fd86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd86f:{NFSU2_TR(0x4fd86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd871:{NFSU2_TR(0x4fd871);
if(r1(R+518)){{goto L4fd883;}}
}
B4fd873:L4fd873:{c.instructions+=2;NFSU2_TR(0x4fd873);
__builtin_memmove((R+4),(R+28),4);
}
B4fd875:{NFSU2_TR(0x4fd875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd87aull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd87a:L4fd87a:{c.instructions+=2;NFSU2_TR(0x4fd87a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd87b:{NFSU2_TR(0x4fd87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd880ull));
TAIL_STATIC(0x575630u,575);
}
B4fd880:L4fd880:{c.instructions+=1;NFSU2_TR(0x4fd880);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd883:L4fd883:{c.instructions+=3;NFSU2_TR(0x4fd883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd886:{NFSU2_TR(0x4fd886);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd888:{NFSU2_TR(0x4fd888);
if(r1(R+518)){{goto L4fd89a;}}
}
B4fd88a:L4fd88a:{c.instructions+=2;NFSU2_TR(0x4fd88a);
__builtin_memmove((R+4),(R+28),4);
}
B4fd88c:{NFSU2_TR(0x4fd88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd891ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd891:L4fd891:{c.instructions+=2;NFSU2_TR(0x4fd891);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd892:{NFSU2_TR(0x4fd892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd897ull));
TAIL_STATIC(0x575630u,575);
}
B4fd897:L4fd897:{c.instructions+=1;NFSU2_TR(0x4fd897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd89a:L4fd89a:{c.instructions+=3;NFSU2_TR(0x4fd89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd89d:{NFSU2_TR(0x4fd89d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd89f:{NFSU2_TR(0x4fd89f);
if(r1(R+518)){{goto L4fd8b1;}}
}
B4fd8a1:L4fd8a1:{c.instructions+=2;NFSU2_TR(0x4fd8a1);
__builtin_memmove((R+4),(R+28),4);
}
B4fd8a3:{NFSU2_TR(0x4fd8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8a8ull));
TAIL_STATIC(0x4fbfc0u,4fb);
}
B4fd8a8:L4fd8a8:{c.instructions+=2;NFSU2_TR(0x4fd8a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd8a9:{NFSU2_TR(0x4fd8a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8aeull));
TAIL_STATIC(0x575630u,575);
}
B4fd8ae:L4fd8ae:{c.instructions+=1;NFSU2_TR(0x4fd8ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd8b1:L4fd8b1:{c.instructions+=3;NFSU2_TR(0x4fd8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd8b4:{NFSU2_TR(0x4fd8b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd8b6:{NFSU2_TR(0x4fd8b6);
if(r1(R+518)){{goto L4fd8c1;}}
}
B4fd8b8:L4fd8b8:{c.instructions+=2;NFSU2_TR(0x4fd8b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd8b9:{NFSU2_TR(0x4fd8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8beull));
TAIL_STATIC(0x575630u,575);
}
B4fd8be:L4fd8be:{c.instructions+=1;NFSU2_TR(0x4fd8be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd8c1:L4fd8c1:{c.instructions+=3;NFSU2_TR(0x4fd8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd8c4:{NFSU2_TR(0x4fd8c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd8c6:{NFSU2_TR(0x4fd8c6);
if(r1(R+518)){{goto L4fd8d8;}}
}
B4fd8c8:L4fd8c8:{c.instructions+=2;NFSU2_TR(0x4fd8c8);
__builtin_memmove((R+4),(R+28),4);
}
B4fd8ca:{NFSU2_TR(0x4fd8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8cfull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd8cf:L4fd8cf:{c.instructions+=2;NFSU2_TR(0x4fd8cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd8d0:{NFSU2_TR(0x4fd8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8d5ull));
TAIL_STATIC(0x575630u,575);
}
B4fd8d5:L4fd8d5:{c.instructions+=1;NFSU2_TR(0x4fd8d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd8d8:L4fd8d8:{c.instructions+=3;NFSU2_TR(0x4fd8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd8db:{NFSU2_TR(0x4fd8db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd8dd:{NFSU2_TR(0x4fd8dd);
if(r1(R+518)){{goto L4fd8ef;}}
}
B4fd8df:L4fd8df:{c.instructions+=2;NFSU2_TR(0x4fd8df);
__builtin_memmove((R+4),(R+28),4);
}
B4fd8e1:{NFSU2_TR(0x4fd8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8e6ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd8e6:L4fd8e6:{c.instructions+=2;NFSU2_TR(0x4fd8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd8e7:{NFSU2_TR(0x4fd8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8ecull));
TAIL_STATIC(0x575630u,575);
}
B4fd8ec:L4fd8ec:{c.instructions+=1;NFSU2_TR(0x4fd8ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd8ef:L4fd8ef:{c.instructions+=3;NFSU2_TR(0x4fd8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd8f2:{NFSU2_TR(0x4fd8f2);
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
B4fd8f4:{NFSU2_TR(0x4fd8f4);
if(r1(R+518)){{goto L4fd8fc;}}
}
B4fd8f6:L4fd8f6:{c.instructions+=3;NFSU2_TR(0x4fd8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4fd8f8:{NFSU2_TR(0x4fd8f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd8fa:{NFSU2_TR(0x4fd8fa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd8fcull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4fd8fc:L4fd8fc:{c.instructions+=3;NFSU2_TR(0x4fd8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd8ff:{NFSU2_TR(0x4fd8ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd901:{NFSU2_TR(0x4fd901);
if(r1(R+518)){{goto L4fd913;}}
}
B4fd903:L4fd903:{c.instructions+=2;NFSU2_TR(0x4fd903);
__builtin_memmove((R+4),(R+28),4);
}
B4fd905:{NFSU2_TR(0x4fd905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd90aull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd90a:L4fd90a:{c.instructions+=2;NFSU2_TR(0x4fd90a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd90b:{NFSU2_TR(0x4fd90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd910ull));
TAIL_STATIC(0x575630u,575);
}
B4fd910:L4fd910:{c.instructions+=1;NFSU2_TR(0x4fd910);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd913:L4fd913:{c.instructions+=3;NFSU2_TR(0x4fd913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd916:{NFSU2_TR(0x4fd916);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd918:{NFSU2_TR(0x4fd918);
if(r1(R+518)){{goto L4fd92a;}}
}
B4fd91a:L4fd91a:{c.instructions+=2;NFSU2_TR(0x4fd91a);
__builtin_memmove((R+4),(R+28),4);
}
B4fd91c:{NFSU2_TR(0x4fd91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd921ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd921:L4fd921:{c.instructions+=2;NFSU2_TR(0x4fd921);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd922:{NFSU2_TR(0x4fd922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd927ull));
TAIL_STATIC(0x575630u,575);
}
B4fd927:L4fd927:{c.instructions+=1;NFSU2_TR(0x4fd927);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd92a:L4fd92a:{c.instructions+=3;NFSU2_TR(0x4fd92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fd92d:{NFSU2_TR(0x4fd92d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd92e:{NFSU2_TR(0x4fd92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd933ull));
TAIL_STATIC(0x575630u,575);
}
B4fd933:L4fd933:{c.instructions+=4;NFSU2_TR(0x4fd933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fd939:{NFSU2_TR(0x4fd939);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd93c:{NFSU2_TR(0x4fd93c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fd93e:{NFSU2_TR(0x4fd93e);
if(r1(R+518)){{goto L4fd950;}}
}
B4fd940:L4fd940:{c.instructions+=2;NFSU2_TR(0x4fd940);
__builtin_memmove((R+4),(R+28),4);
}
B4fd942:{NFSU2_TR(0x4fd942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd947ull));
TAIL_STATIC(0x4835c0u,483);
}
B4fd947:L4fd947:{c.instructions+=2;NFSU2_TR(0x4fd947);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd948:{NFSU2_TR(0x4fd948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd94dull));
TAIL_STATIC(0x575630u,575);
}
B4fd94d:L4fd94d:{c.instructions+=1;NFSU2_TR(0x4fd94d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fd950:L4fd950:{c.instructions+=3;NFSU2_TR(0x4fd950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fd953:{NFSU2_TR(0x4fd953);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd954:{NFSU2_TR(0x4fd954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd959ull));
TAIL_STATIC(0x5379a0u,537);
}
B4fd959:L4fd959:{c.instructions+=4;NFSU2_TR(0x4fd959);
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
B4fd95c:{NFSU2_TR(0x4fd95c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fd95d:{NFSU2_TR(0x4fd95d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd95e:{NFSU2_TR(0x4fd95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd960:L4fd960:{c.instructions+=3;NFSU2_TR(0x4fd960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd961:{NFSU2_TR(0x4fd961);
__builtin_memmove((R+24),(R+4),4);
}
B4fd963:{NFSU2_TR(0x4fd963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd968ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fd720u);}goto L4fd720;}
}
B4fd968:L4fd968:{c.instructions+=2;NFSU2_TR(0x4fd968);
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
B4fd96d:{NFSU2_TR(0x4fd96d);
if(r1(R+518)){{goto L4fd978;}}
}
B4fd96f:L4fd96f:{c.instructions+=2;NFSU2_TR(0x4fd96f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fd970:{NFSU2_TR(0x4fd970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fd975ull));
TAIL_STATIC(0x575630u,575);
}
B4fd975:L4fd975:{c.instructions+=1;NFSU2_TR(0x4fd975);
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
B4fd978:L4fd978:{c.instructions+=3;NFSU2_TR(0x4fd978);
__builtin_memmove((R+0),(R+24),4);
}
B4fd97a:{NFSU2_TR(0x4fd97a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fd97b:{NFSU2_TR(0x4fd97b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fd980:L4fd980:{c.instructions+=72;NFSU2_TR(0x4fd980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4fd983:{NFSU2_TR(0x4fd983);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd985:{NFSU2_TR(0x4fd985);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fd989:{NFSU2_TR(0x4fd989);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4fd98b:{NFSU2_TR(0x4fd98b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd98e:{NFSU2_TR(0x4fd98e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4fd990:{NFSU2_TR(0x4fd990);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd993:{NFSU2_TR(0x4fd993);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4fd995:{NFSU2_TR(0x4fd995);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd999:{NFSU2_TR(0x4fd999);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4fd99b:{NFSU2_TR(0x4fd99b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd99d:{NFSU2_TR(0x4fd99d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9a1:{NFSU2_TR(0x4fd9a1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4fd9a3:{NFSU2_TR(0x4fd9a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9a5:{NFSU2_TR(0x4fd9a5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9a9:{NFSU2_TR(0x4fd9a9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd9ad:{NFSU2_TR(0x4fd9ad);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9af:{NFSU2_TR(0x4fd9af);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9b3:{NFSU2_TR(0x4fd9b3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4fd9b5:{NFSU2_TR(0x4fd9b5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9b8:{NFSU2_TR(0x4fd9b8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9bc:{NFSU2_TR(0x4fd9bc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd9c0:{NFSU2_TR(0x4fd9c0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9c3:{NFSU2_TR(0x4fd9c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9c7:{NFSU2_TR(0x4fd9c7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd9cb:{NFSU2_TR(0x4fd9cb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9ce:{NFSU2_TR(0x4fd9ce);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9d2:{NFSU2_TR(0x4fd9d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4fd9d4:{NFSU2_TR(0x4fd9d4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9d7:{NFSU2_TR(0x4fd9d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fd9db:{NFSU2_TR(0x4fd9db);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9de:{NFSU2_TR(0x4fd9de);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd9e2:{NFSU2_TR(0x4fd9e2);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fd9e5:{NFSU2_TR(0x4fd9e5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4fd9e7:{NFSU2_TR(0x4fd9e7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fd9ed:{NFSU2_TR(0x4fd9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd9f0:{NFSU2_TR(0x4fd9f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fd9f4:{NFSU2_TR(0x4fd9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd9f7:{NFSU2_TR(0x4fd9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd9fa:{NFSU2_TR(0x4fd9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fd9fd:{NFSU2_TR(0x4fd9fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fda01:{NFSU2_TR(0x4fda01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fda04:{NFSU2_TR(0x4fda04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fda07:{NFSU2_TR(0x4fda07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fda0e:{NFSU2_TR(0x4fda0e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda10:{NFSU2_TR(0x4fda10);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda14:{NFSU2_TR(0x4fda14);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4fda16:{NFSU2_TR(0x4fda16);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda19:{NFSU2_TR(0x4fda19);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4fda1b:{NFSU2_TR(0x4fda1b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fda1f:{NFSU2_TR(0x4fda1f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda22:{NFSU2_TR(0x4fda22);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fda26:{NFSU2_TR(0x4fda26);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda29:{NFSU2_TR(0x4fda29);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda2f:{NFSU2_TR(0x4fda2f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fda33:{NFSU2_TR(0x4fda33);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda37:{NFSU2_TR(0x4fda37);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4fda39:{NFSU2_TR(0x4fda39);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda3c:{NFSU2_TR(0x4fda3c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda40:{NFSU2_TR(0x4fda40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fda44:{NFSU2_TR(0x4fda44);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda47:{NFSU2_TR(0x4fda47);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda4b:{NFSU2_TR(0x4fda4b);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B4fda4d:{NFSU2_TR(0x4fda4d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda50:{NFSU2_TR(0x4fda50);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fda54:{NFSU2_TR(0x4fda54);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fda58:{NFSU2_TR(0x4fda58);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda5b:{NFSU2_TR(0x4fda5b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fda5f:{NFSU2_TR(0x4fda5f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fda62:{NFSU2_TR(0x4fda62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fda64:{NFSU2_TR(0x4fda64);
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
B4fda67:{NFSU2_TR(0x4fda67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fda70:L4fda70:{c.instructions+=16;NFSU2_TR(0x4fda70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fda73:{NFSU2_TR(0x4fda73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fda74:{NFSU2_TR(0x4fda74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fda77:{NFSU2_TR(0x4fda77);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40000ull))));
}
B4fda7d:{NFSU2_TR(0x4fda7d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B4fda7f:{NFSU2_TR(0x4fda7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4fda83:{NFSU2_TR(0x4fda83);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B4fda85:{NFSU2_TR(0x4fda85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fda86:{NFSU2_TR(0x4fda86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fda8a:{NFSU2_TR(0x4fda8a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4fda8c:{NFSU2_TR(0x4fda8c);
w4(R+0,u32(r2(R+28)));
}
B4fda8f:{NFSU2_TR(0x4fda8f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4ull))));
}
B4fda92:{NFSU2_TR(0x4fda92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
}
B4fda95:{NFSU2_TR(0x4fda95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B4fda98:{NFSU2_TR(0x4fda98);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fda9a:{NFSU2_TR(0x4fda9a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4fdaa6;}}
}
B4fda9c:L4fda9c:{c.instructions+=4;NFSU2_TR(0x4fda9c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4fda9f:{NFSU2_TR(0x4fda9f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4fdaa1:{NFSU2_TR(0x4fdaa1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w1(R+523,sborrow<u16>(r2(U+6),r2(R+28)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fdaa4:{NFSU2_TR(0x4fdaa4);
if(r1(R+518)){{goto L4fdab2;}}
}
B4fdaa6:L4fdaa6:{c.instructions+=5;NFSU2_TR(0x4fdaa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdaa7:{NFSU2_TR(0x4fdaa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdaa8:{NFSU2_TR(0x4fdaa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdaa9:{NFSU2_TR(0x4fdaa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdaaa:{NFSU2_TR(0x4fdaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdaafull));
TAIL_STATIC(0x6f45b0u,6f4);
}
B4fdaaf:L4fdaaf:{c.instructions+=1;NFSU2_TR(0x4fdaaf);
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
B4fdab2:L4fdab2:{c.instructions+=3;NFSU2_TR(0x4fdab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdab3:{NFSU2_TR(0x4fdab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdab4:{NFSU2_TR(0x4fdab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdac0:L4fdac0:{c.instructions+=1;NFSU2_TR(0x4fdac0);
{u32 t_=u32(m4(0x8161f0));TAIL_DYNAMIC(t_);}
}
B4fdad0:L4fdad0:{c.instructions+=15;NFSU2_TR(0x4fdad0);
__builtin_memmove((R+0),(R+4),4);
}
B4fdad2:{NFSU2_TR(0x4fdad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fdad6:{NFSU2_TR(0x4fdad6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdad8:{NFSU2_TR(0x4fdad8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fdada:{NFSU2_TR(0x4fdada);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fdadc:{NFSU2_TR(0x4fdadc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdadf:{NFSU2_TR(0x4fdadf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fdae2:{NFSU2_TR(0x4fdae2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fdae5:{NFSU2_TR(0x4fdae5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdae7:{NFSU2_TR(0x4fdae7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fdaea:{NFSU2_TR(0x4fdaea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fdaed:{NFSU2_TR(0x4fdaed);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdaf0:{NFSU2_TR(0x4fdaf0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fdaf3:{NFSU2_TR(0x4fdaf3);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fdaf6:{NFSU2_TR(0x4fdaf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdb00:L4fdb00:{c.instructions+=5;NFSU2_TR(0x4fdb00);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B4fdb05:{NFSU2_TR(0x4fdb05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdb06:{NFSU2_TR(0x4fdb06);
__builtin_memmove((R+24),(R+4),4);
}
B4fdb08:{NFSU2_TR(0x4fdb08);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fdb0e:{NFSU2_TR(0x4fdb0e);
if(r1(R+518)){{goto L4fdb19;}}
}
B4fdb10:L4fdb10:{c.instructions+=2;NFSU2_TR(0x4fdb10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdb11:{NFSU2_TR(0x4fdb11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdb16ull));
TAIL_STATIC(0x575630u,575);
}
B4fdb16:L4fdb16:{c.instructions+=1;NFSU2_TR(0x4fdb16);
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
B4fdb19:L4fdb19:{c.instructions+=3;NFSU2_TR(0x4fdb19);
__builtin_memmove((R+0),(R+24),4);
}
B4fdb1b:{NFSU2_TR(0x4fdb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdb1c:{NFSU2_TR(0x4fdb1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdb20:L4fdb20:{c.instructions+=3;NFSU2_TR(0x4fdb20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4fdb22:{NFSU2_TR(0x4fdb22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdb23:{NFSU2_TR(0x4fdb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdb28ull));
TAIL_STATIC(0x575630u,575);
}
B4fdb28:L4fdb28:{c.instructions+=2;NFSU2_TR(0x4fdb28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fdb29:{NFSU2_TR(0x4fdb29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdb30:L4fdb30:{c.instructions+=6;NFSU2_TR(0x4fdb30);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb32:{NFSU2_TR(0x4fdb32);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fdb36:{NFSU2_TR(0x4fdb36);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb38:{NFSU2_TR(0x4fdb38);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb3a:{NFSU2_TR(0x4fdb3a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb3d:{NFSU2_TR(0x4fdb3d);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb3f:L4fdb3f:{c.instructions+=5;NFSU2_TR(0x4fdb3f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb42:{NFSU2_TR(0x4fdb42);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb45:{NFSU2_TR(0x4fdb45);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb47:{NFSU2_TR(0x4fdb47);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb4a:{NFSU2_TR(0x4fdb4a);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb4c:L4fdb4c:{c.instructions+=5;NFSU2_TR(0x4fdb4c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb4f:{NFSU2_TR(0x4fdb4f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb52:{NFSU2_TR(0x4fdb52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb54:{NFSU2_TR(0x4fdb54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb57:{NFSU2_TR(0x4fdb57);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb59:L4fdb59:{c.instructions+=5;NFSU2_TR(0x4fdb59);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb5c:{NFSU2_TR(0x4fdb5c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb5f:{NFSU2_TR(0x4fdb5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb61:{NFSU2_TR(0x4fdb61);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb64:{NFSU2_TR(0x4fdb64);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb66:L4fdb66:{c.instructions+=5;NFSU2_TR(0x4fdb66);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb69:{NFSU2_TR(0x4fdb69);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb6c:{NFSU2_TR(0x4fdb6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb6e:{NFSU2_TR(0x4fdb6e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb71:{NFSU2_TR(0x4fdb71);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb73:L4fdb73:{c.instructions+=5;NFSU2_TR(0x4fdb73);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb76:{NFSU2_TR(0x4fdb76);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb79:{NFSU2_TR(0x4fdb79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb7b:{NFSU2_TR(0x4fdb7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb7e:{NFSU2_TR(0x4fdb7e);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb80:L4fdb80:{c.instructions+=5;NFSU2_TR(0x4fdb80);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb83:{NFSU2_TR(0x4fdb83);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb86:{NFSU2_TR(0x4fdb86);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb88:{NFSU2_TR(0x4fdb88);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdb8b:{NFSU2_TR(0x4fdb8b);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb8d:L4fdb8d:{c.instructions+=5;NFSU2_TR(0x4fdb8d);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdb90:{NFSU2_TR(0x4fdb90);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdb93:{NFSU2_TR(0x4fdb93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdb95:{NFSU2_TR(0x4fdb95);
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
B4fdb98:{NFSU2_TR(0x4fdb98);
if(r1(R+514)){{goto L4fdba2;}}
}
B4fdb9a:L4fdb9a:{c.instructions+=2;NFSU2_TR(0x4fdb9a);
w4(R+0,u32(0x1ull));
}
B4fdb9f:{NFSU2_TR(0x4fdb9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdba2:L4fdba2:{c.instructions+=2;NFSU2_TR(0x4fdba2);
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
B4fdba4:{NFSU2_TR(0x4fdba4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdbb0:L4fdbb0:{c.instructions+=8;NFSU2_TR(0x4fdbb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdbb1:{NFSU2_TR(0x4fdbb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdbb2:{NFSU2_TR(0x4fdbb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdbb3:{NFSU2_TR(0x4fdbb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fdbb7:{NFSU2_TR(0x4fdbb7);
__builtin_memmove((R+12),(R+4),4);
}
B4fdbb9:{NFSU2_TR(0x4fdbb9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fdbbb:{NFSU2_TR(0x4fdbbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fdbbe:{NFSU2_TR(0x4fdbbe);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B4fdbc0:L4fdbc0:{c.instructions+=5;NFSU2_TR(0x4fdbc0);
{u32 ea_=u32(r4(R+8)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdbc3:{NFSU2_TR(0x4fdbc3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdbc5:{NFSU2_TR(0x4fdbc5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdbc7:{NFSU2_TR(0x4fdbc7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdbca:{NFSU2_TR(0x4fdbca);
if(r1(R+514)){{goto L4fdc34;}}
}
B4fdbcc:L4fdbcc:{c.instructions+=4;NFSU2_TR(0x4fdbcc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4fdbcd:{NFSU2_TR(0x4fdbcd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4fdbd0:{NFSU2_TR(0x4fdbd0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fdbd3:{NFSU2_TR(0x4fdbd3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdbc0u);}goto L4fdbc0;}}
}
B4fdbd5:L4fdbd5:{c.instructions+=5;NFSU2_TR(0x4fdbd5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdbd7:{NFSU2_TR(0x4fdbd7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdbd9:{NFSU2_TR(0x4fdbd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdbdb:{NFSU2_TR(0x4fdbdb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdbde:{NFSU2_TR(0x4fdbde);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdbe0:L4fdbe0:{c.instructions+=5;NFSU2_TR(0x4fdbe0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdbe3:{NFSU2_TR(0x4fdbe3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdbe6:{NFSU2_TR(0x4fdbe6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdbe8:{NFSU2_TR(0x4fdbe8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdbeb:{NFSU2_TR(0x4fdbeb);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdbed:L4fdbed:{c.instructions+=5;NFSU2_TR(0x4fdbed);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdbf0:{NFSU2_TR(0x4fdbf0);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdbf3:{NFSU2_TR(0x4fdbf3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdbf5:{NFSU2_TR(0x4fdbf5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdbf8:{NFSU2_TR(0x4fdbf8);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdbfa:L4fdbfa:{c.instructions+=5;NFSU2_TR(0x4fdbfa);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdbfd:{NFSU2_TR(0x4fdbfd);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc00:{NFSU2_TR(0x4fdc00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc02:{NFSU2_TR(0x4fdc02);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdc05:{NFSU2_TR(0x4fdc05);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdc07:L4fdc07:{c.instructions+=5;NFSU2_TR(0x4fdc07);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdc0a:{NFSU2_TR(0x4fdc0a);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc0d:{NFSU2_TR(0x4fdc0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc0f:{NFSU2_TR(0x4fdc0f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdc12:{NFSU2_TR(0x4fdc12);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdc14:L4fdc14:{c.instructions+=3;NFSU2_TR(0x4fdc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fdc17:{NFSU2_TR(0x4fdc17);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fdc1a:{NFSU2_TR(0x4fdc1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fdc3c;}}
}
B4fdc1c:L4fdc1c:{c.instructions+=5;NFSU2_TR(0x4fdc1c);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdc1f:{NFSU2_TR(0x4fdc1f);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc22:{NFSU2_TR(0x4fdc22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc24:{NFSU2_TR(0x4fdc24);
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
B4fdc27:{NFSU2_TR(0x4fdc27);
if(r1(R+514)){{goto L4fdc3c;}}
}
B4fdc29:L4fdc29:{c.instructions+=5;NFSU2_TR(0x4fdc29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdc2a:{NFSU2_TR(0x4fdc2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdc2b:{NFSU2_TR(0x4fdc2b);
w4(R+0,u32(0x1ull));
}
B4fdc30:{NFSU2_TR(0x4fdc30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdc31:{NFSU2_TR(0x4fdc31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdc34:L4fdc34:{c.instructions+=5;NFSU2_TR(0x4fdc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdc35:{NFSU2_TR(0x4fdc35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdc36:{NFSU2_TR(0x4fdc36);
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
B4fdc38:{NFSU2_TR(0x4fdc38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdc39:{NFSU2_TR(0x4fdc39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdc3c:L4fdc3c:{c.instructions+=5;NFSU2_TR(0x4fdc3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdc3d:{NFSU2_TR(0x4fdc3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdc3e:{NFSU2_TR(0x4fdc3e);
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
B4fdc40:{NFSU2_TR(0x4fdc40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdc41:{NFSU2_TR(0x4fdc41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdc50:L4fdc50:{c.instructions+=10;NFSU2_TR(0x4fdc50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdc51:{NFSU2_TR(0x4fdc51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fdc55:{NFSU2_TR(0x4fdc55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdc56:{NFSU2_TR(0x4fdc56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdc57:{NFSU2_TR(0x4fdc57);
__builtin_memmove((R+20),(R+4),4);
}
B4fdc59:{NFSU2_TR(0x4fdc59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdc5a:{NFSU2_TR(0x4fdc5a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fdc5c:{NFSU2_TR(0x4fdc5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdc5f:{NFSU2_TR(0x4fdc5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fdc62:{NFSU2_TR(0x4fdc62);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B4fdc64:L4fdc64:{c.instructions+=5;NFSU2_TR(0x4fdc64);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdc67:{NFSU2_TR(0x4fdc67);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc69:{NFSU2_TR(0x4fdc69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc6b:{NFSU2_TR(0x4fdc6b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdc6e:{NFSU2_TR(0x4fdc6e);
if(r1(R+514)){{goto L4fdce3;}}
}
B4fdc70:L4fdc70:{c.instructions+=5;NFSU2_TR(0x4fdc70);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdc72:{NFSU2_TR(0x4fdc72);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc75:{NFSU2_TR(0x4fdc75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc77:{NFSU2_TR(0x4fdc77);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdc7a:{NFSU2_TR(0x4fdc7a);
if(r1(R+514)){{goto L4fdce3;}}
}
B4fdc7c:L4fdc7c:{c.instructions+=5;NFSU2_TR(0x4fdc7c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4fdc7d:{NFSU2_TR(0x4fdc7d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4fdc80:{NFSU2_TR(0x4fdc80);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4fdc83:{NFSU2_TR(0x4fdc83);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fdc86:{NFSU2_TR(0x4fdc86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdc64u);}goto L4fdc64;}}
}
B4fdc88:L4fdc88:{c.instructions+=3;NFSU2_TR(0x4fdc88);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fdc8a:{NFSU2_TR(0x4fdc8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fdc8d:{NFSU2_TR(0x4fdc8d);
__builtin_memmove((R+4),(R+4),4);
}
B4fdc90:L4fdc90:{c.instructions+=5;NFSU2_TR(0x4fdc90);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdc93:{NFSU2_TR(0x4fdc93);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdc95:{NFSU2_TR(0x4fdc95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdc97:{NFSU2_TR(0x4fdc97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdc9a:{NFSU2_TR(0x4fdc9a);
if(r1(R+514)){{goto L4fdce3;}}
}
B4fdc9c:L4fdc9c:{c.instructions+=4;NFSU2_TR(0x4fdc9c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4fdc9d:{NFSU2_TR(0x4fdc9d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4fdca0:{NFSU2_TR(0x4fdca0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fdca3:{NFSU2_TR(0x4fdca3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdc90u);}goto L4fdc90;}}
}
B4fdca5:L4fdca5:{c.instructions+=5;NFSU2_TR(0x4fdca5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdca7:{NFSU2_TR(0x4fdca7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdca9:{NFSU2_TR(0x4fdca9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdcab:{NFSU2_TR(0x4fdcab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdcae:{NFSU2_TR(0x4fdcae);
if(r1(R+514)){{goto L4fdcec;}}
}
B4fdcb0:L4fdcb0:{c.instructions+=5;NFSU2_TR(0x4fdcb0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdcb3:{NFSU2_TR(0x4fdcb3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdcb6:{NFSU2_TR(0x4fdcb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdcb8:{NFSU2_TR(0x4fdcb8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdcbb:{NFSU2_TR(0x4fdcbb);
if(r1(R+514)){{goto L4fdcec;}}
}
B4fdcbd:L4fdcbd:{c.instructions+=5;NFSU2_TR(0x4fdcbd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdcc0:{NFSU2_TR(0x4fdcc0);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdcc3:{NFSU2_TR(0x4fdcc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdcc5:{NFSU2_TR(0x4fdcc5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdcc8:{NFSU2_TR(0x4fdcc8);
if(r1(R+514)){{goto L4fdcec;}}
}
B4fdcca:L4fdcca:{c.instructions+=5;NFSU2_TR(0x4fdcca);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdccd:{NFSU2_TR(0x4fdccd);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdcd0:{NFSU2_TR(0x4fdcd0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdcd2:{NFSU2_TR(0x4fdcd2);
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
B4fdcd5:{NFSU2_TR(0x4fdcd5);
if(r1(R+514)){{goto L4fdcec;}}
}
B4fdcd7:L4fdcd7:{c.instructions+=6;NFSU2_TR(0x4fdcd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdcd8:{NFSU2_TR(0x4fdcd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdcd9:{NFSU2_TR(0x4fdcd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fdcda:{NFSU2_TR(0x4fdcda);
w4(R+0,u32(0x1ull));
}
B4fdcdf:{NFSU2_TR(0x4fdcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdce0:{NFSU2_TR(0x4fdce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdce3:L4fdce3:{c.instructions+=6;NFSU2_TR(0x4fdce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdce4:{NFSU2_TR(0x4fdce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdce5:{NFSU2_TR(0x4fdce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fdce6:{NFSU2_TR(0x4fdce6);
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
B4fdce8:{NFSU2_TR(0x4fdce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdce9:{NFSU2_TR(0x4fdce9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdcec:L4fdcec:{c.instructions+=6;NFSU2_TR(0x4fdcec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fdced:{NFSU2_TR(0x4fdced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fdcee:{NFSU2_TR(0x4fdcee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fdcef:{NFSU2_TR(0x4fdcef);
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
B4fdcf1:{NFSU2_TR(0x4fdcf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fdcf2:{NFSU2_TR(0x4fdcf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdd00:L4fdd00:{c.instructions+=6;NFSU2_TR(0x4fdd00);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd02:{NFSU2_TR(0x4fdd02);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fdd06:{NFSU2_TR(0x4fdd06);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd08:{NFSU2_TR(0x4fdd08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd0a:{NFSU2_TR(0x4fdd0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd0d:{NFSU2_TR(0x4fdd0d);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd0f:L4fdd0f:{c.instructions+=5;NFSU2_TR(0x4fdd0f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd12:{NFSU2_TR(0x4fdd12);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd15:{NFSU2_TR(0x4fdd15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd17:{NFSU2_TR(0x4fdd17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd1a:{NFSU2_TR(0x4fdd1a);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd1c:L4fdd1c:{c.instructions+=5;NFSU2_TR(0x4fdd1c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd1f:{NFSU2_TR(0x4fdd1f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd22:{NFSU2_TR(0x4fdd22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd24:{NFSU2_TR(0x4fdd24);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd27:{NFSU2_TR(0x4fdd27);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd29:L4fdd29:{c.instructions+=5;NFSU2_TR(0x4fdd29);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd2c:{NFSU2_TR(0x4fdd2c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd2f:{NFSU2_TR(0x4fdd2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd31:{NFSU2_TR(0x4fdd31);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd34:{NFSU2_TR(0x4fdd34);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd36:L4fdd36:{c.instructions+=5;NFSU2_TR(0x4fdd36);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd39:{NFSU2_TR(0x4fdd39);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd3c:{NFSU2_TR(0x4fdd3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd3e:{NFSU2_TR(0x4fdd3e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd41:{NFSU2_TR(0x4fdd41);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd43:L4fdd43:{c.instructions+=5;NFSU2_TR(0x4fdd43);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd46:{NFSU2_TR(0x4fdd46);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd49:{NFSU2_TR(0x4fdd49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd4b:{NFSU2_TR(0x4fdd4b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd4e:{NFSU2_TR(0x4fdd4e);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd50:L4fdd50:{c.instructions+=5;NFSU2_TR(0x4fdd50);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd53:{NFSU2_TR(0x4fdd53);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd56:{NFSU2_TR(0x4fdd56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd58:{NFSU2_TR(0x4fdd58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd5b:{NFSU2_TR(0x4fdd5b);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd5d:L4fdd5d:{c.instructions+=5;NFSU2_TR(0x4fdd5d);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd60:{NFSU2_TR(0x4fdd60);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd63:{NFSU2_TR(0x4fdd63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd65:{NFSU2_TR(0x4fdd65);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdd68:{NFSU2_TR(0x4fdd68);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd6a:L4fdd6a:{c.instructions+=5;NFSU2_TR(0x4fdd6a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdd6d:{NFSU2_TR(0x4fdd6d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdd70:{NFSU2_TR(0x4fdd70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdd72:{NFSU2_TR(0x4fdd72);
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
B4fdd75:{NFSU2_TR(0x4fdd75);
if(r1(R+514)){{goto L4fdd7f;}}
}
B4fdd77:L4fdd77:{c.instructions+=2;NFSU2_TR(0x4fdd77);
w4(R+0,u32(0x1ull));
}
B4fdd7c:{NFSU2_TR(0x4fdd7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdd7f:L4fdd7f:{c.instructions+=2;NFSU2_TR(0x4fdd7f);
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
B4fdd81:{NFSU2_TR(0x4fdd81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fdd90:L4fdd90:{c.instructions+=13;NFSU2_TR(0x4fdd90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdd91:{NFSU2_TR(0x4fdd91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdd92:{NFSU2_TR(0x4fdd92);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdd93:{NFSU2_TR(0x4fdd93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fdd97:{NFSU2_TR(0x4fdd97);
__builtin_memmove((R+12),(R+4),4);
}
B4fdd99:{NFSU2_TR(0x4fdd99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdd9a:{NFSU2_TR(0x4fdd9a);
__builtin_memmove((R+0),(R+12),4);
}
B4fdd9c:{NFSU2_TR(0x4fdd9c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4fdd9e:{NFSU2_TR(0x4fdd9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdd9f:{NFSU2_TR(0x4fdd9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fdda7:{NFSU2_TR(0x4fdda7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fddaa:{NFSU2_TR(0x4fddaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fddad:{NFSU2_TR(0x4fddad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fddb1:L4fddb1:{c.instructions+=6;NFSU2_TR(0x4fddb1);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fddb6:{NFSU2_TR(0x4fddb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fddb9:{NFSU2_TR(0x4fddb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fddba:{NFSU2_TR(0x4fddba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fddbd:{NFSU2_TR(0x4fddbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fddbe:{NFSU2_TR(0x4fddbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fddc3ull));
TAIL_STATIC(0x43d190u,43d);
}
B4fddc3:L4fddc3:{c.instructions+=3;NFSU2_TR(0x4fddc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fddc6:{NFSU2_TR(0x4fddc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fddc8:{NFSU2_TR(0x4fddc8);
if(r1(R+518)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fddce:L4fddce:{c.instructions+=6;NFSU2_TR(0x4fddce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fddd2:{NFSU2_TR(0x4fddd2);
{u32 ea_=u32(r4(R+24)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fddd5:{NFSU2_TR(0x4fddd5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fddd7:{NFSU2_TR(0x4fddd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fddd9:{NFSU2_TR(0x4fddd9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdddc:{NFSU2_TR(0x4fdddc);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fdde2:L4fdde2:{c.instructions+=5;NFSU2_TR(0x4fdde2);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdde5:{NFSU2_TR(0x4fdde5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdde8:{NFSU2_TR(0x4fdde8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fddea:{NFSU2_TR(0x4fddea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdded:{NFSU2_TR(0x4fdded);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fddf3:L4fddf3:{c.instructions+=5;NFSU2_TR(0x4fddf3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fddf5:{NFSU2_TR(0x4fddf5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fddf8:{NFSU2_TR(0x4fddf8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fddfa:{NFSU2_TR(0x4fddfa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fddfd:{NFSU2_TR(0x4fddfd);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde03:L4fde03:{c.instructions+=5;NFSU2_TR(0x4fde03);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fde06:{NFSU2_TR(0x4fde06);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fde09:{NFSU2_TR(0x4fde09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fde0b:{NFSU2_TR(0x4fde0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fde0e:{NFSU2_TR(0x4fde0e);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde14:L4fde14:{c.instructions+=7;NFSU2_TR(0x4fde14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fde18:{NFSU2_TR(0x4fde18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fde19:{NFSU2_TR(0x4fde19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B4fde1c:{NFSU2_TR(0x4fde1c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B4fde1f:{NFSU2_TR(0x4fde1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fde22:{NFSU2_TR(0x4fde22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fde26:{NFSU2_TR(0x4fde26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fddb1u);}goto L4fddb1;}}
}
B4fde28:L4fde28:{c.instructions+=4;NFSU2_TR(0x4fde28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fde30:{NFSU2_TR(0x4fde30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fde36:{NFSU2_TR(0x4fde36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fde3c:{NFSU2_TR(0x4fde3c);
__builtin_memmove((R+16),(R+16),4);
}
B4fde40:L4fde40:{c.instructions+=4;NFSU2_TR(0x4fde40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fde46:{NFSU2_TR(0x4fde46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fde47:{NFSU2_TR(0x4fde47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fde4d:{NFSU2_TR(0x4fde4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fde52ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdb30u);}goto L4fdb30;}
}
B4fde52:L4fde52:{c.instructions+=2;NFSU2_TR(0x4fde52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fde54:{NFSU2_TR(0x4fde54);
if(r1(R+518)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde5a:L4fde5a:{c.instructions+=5;NFSU2_TR(0x4fde5a);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fde5d:{NFSU2_TR(0x4fde5d);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fde60:{NFSU2_TR(0x4fde60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fde62:{NFSU2_TR(0x4fde62);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fde65:{NFSU2_TR(0x4fde65);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde6b:L4fde6b:{c.instructions+=6;NFSU2_TR(0x4fde6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fde6f:{NFSU2_TR(0x4fde6f);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fde72:{NFSU2_TR(0x4fde72);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fde74:{NFSU2_TR(0x4fde74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fde76:{NFSU2_TR(0x4fde76);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fde79:{NFSU2_TR(0x4fde79);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde7f:L4fde7f:{c.instructions+=5;NFSU2_TR(0x4fde7f);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fde82:{NFSU2_TR(0x4fde82);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fde85:{NFSU2_TR(0x4fde85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fde87:{NFSU2_TR(0x4fde87);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fde8a:{NFSU2_TR(0x4fde8a);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fde90:L4fde90:{c.instructions+=5;NFSU2_TR(0x4fde90);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fde92:{NFSU2_TR(0x4fde92);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fde95:{NFSU2_TR(0x4fde95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fde97:{NFSU2_TR(0x4fde97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fde9a:{NFSU2_TR(0x4fde9a);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fdea0:L4fdea0:{c.instructions+=5;NFSU2_TR(0x4fdea0);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdea3:{NFSU2_TR(0x4fdea3);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdea6:{NFSU2_TR(0x4fdea6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdea8:{NFSU2_TR(0x4fdea8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdeab:{NFSU2_TR(0x4fdeab);
if(r1(R+514)){TAIL_STATIC(0x4fe032u,4fe);}
}
B4fdeb1:L4fdeb1:{c.instructions+=7;NFSU2_TR(0x4fdeb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fdeb5:{NFSU2_TR(0x4fdeb5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fdeb6:{NFSU2_TR(0x4fdeb6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B4fdeb9:{NFSU2_TR(0x4fdeb9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B4fdebc:{NFSU2_TR(0x4fdebc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fdebf:{NFSU2_TR(0x4fdebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fdec3:{NFSU2_TR(0x4fdec3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fde40u);}goto L4fde40;}}
}
B4fdec9:L4fdec9:{c.instructions+=4;NFSU2_TR(0x4fdec9);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdece:{NFSU2_TR(0x4fdece);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdecf:{NFSU2_TR(0x4fdecf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fded0:{NFSU2_TR(0x4fded0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fded5ull));
TAIL_STATIC(0x43d190u,43d);
}
B4fded5:L4fded5:{c.instructions+=3;NFSU2_TR(0x4fded5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fded8:{NFSU2_TR(0x4fded8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fdeda:{NFSU2_TR(0x4fdeda);
if(r1(R+518)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdee0:L4fdee0:{c.instructions+=5;NFSU2_TR(0x4fdee0);
{u32 ea_=u32(r4(R+12)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdee6:{NFSU2_TR(0x4fdee6);
{u32 ea_=u32(r4(R+20)+u32(272u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdeec:{NFSU2_TR(0x4fdeec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdeee:{NFSU2_TR(0x4fdeee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdef1:{NFSU2_TR(0x4fdef1);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdef7:L4fdef7:{c.instructions+=5;NFSU2_TR(0x4fdef7);
{u32 ea_=u32(r4(R+12)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdefd:{NFSU2_TR(0x4fdefd);
{u32 ea_=u32(r4(R+20)+u32(276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdf03:{NFSU2_TR(0x4fdf03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdf05:{NFSU2_TR(0x4fdf05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdf08:{NFSU2_TR(0x4fdf08);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf0e:L4fdf0e:{c.instructions+=5;NFSU2_TR(0x4fdf0e);
{u32 ea_=u32(r4(R+12)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdf14:{NFSU2_TR(0x4fdf14);
{u32 ea_=u32(r4(R+20)+u32(280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdf1a:{NFSU2_TR(0x4fdf1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdf1c:{NFSU2_TR(0x4fdf1c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdf1f:{NFSU2_TR(0x4fdf1f);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf25:L4fdf25:{c.instructions+=5;NFSU2_TR(0x4fdf25);
{u32 ea_=u32(r4(R+12)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdf2b:{NFSU2_TR(0x4fdf2b);
{u32 ea_=u32(r4(R+20)+u32(284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdf31:{NFSU2_TR(0x4fdf31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdf33:{NFSU2_TR(0x4fdf33);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdf36:{NFSU2_TR(0x4fdf36);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf3c:L4fdf3c:{c.instructions+=5;NFSU2_TR(0x4fdf3c);
{u32 ea_=u32(r4(R+12)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdf42:{NFSU2_TR(0x4fdf42);
{u32 ea_=u32(r4(R+20)+u32(352u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdf48:{NFSU2_TR(0x4fdf48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdf4a:{NFSU2_TR(0x4fdf4a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdf4d:{NFSU2_TR(0x4fdf4d);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf53:L4fdf53:{c.instructions+=4;NFSU2_TR(0x4fdf53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fdf59:{NFSU2_TR(0x4fdf59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdf5a:{NFSU2_TR(0x4fdf5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fdf60:{NFSU2_TR(0x4fdf60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdf65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdbb0u);}goto L4fdbb0;}
}
B4fdf65:L4fdf65:{c.instructions+=2;NFSU2_TR(0x4fdf65);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fdf67:{NFSU2_TR(0x4fdf67);
if(r1(R+518)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf6d:L4fdf6d:{c.instructions+=4;NFSU2_TR(0x4fdf6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fdf73:{NFSU2_TR(0x4fdf73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdf74:{NFSU2_TR(0x4fdf74);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fdf7a:{NFSU2_TR(0x4fdf7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdf7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdc50u);}goto L4fdc50;}
}
B4fdf7f:L4fdf7f:{c.instructions+=2;NFSU2_TR(0x4fdf7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fdf81:{NFSU2_TR(0x4fdf81);
if(r1(R+518)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf87:L4fdf87:{c.instructions+=5;NFSU2_TR(0x4fdf87);
{u32 ea_=u32(r4(R+12)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdf8d:{NFSU2_TR(0x4fdf8d);
{u32 ea_=u32(r4(R+20)+u32(608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdf93:{NFSU2_TR(0x4fdf93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdf95:{NFSU2_TR(0x4fdf95);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdf98:{NFSU2_TR(0x4fdf98);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdf9e:L4fdf9e:{c.instructions+=5;NFSU2_TR(0x4fdf9e);
{u32 ea_=u32(r4(R+12)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdfa4:{NFSU2_TR(0x4fdfa4);
{u32 ea_=u32(r4(R+20)+u32(612u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdfaa:{NFSU2_TR(0x4fdfaa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdfac:{NFSU2_TR(0x4fdfac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdfaf:{NFSU2_TR(0x4fdfaf);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdfb5:L4fdfb5:{c.instructions+=5;NFSU2_TR(0x4fdfb5);
{u32 ea_=u32(r4(R+12)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdfbb:{NFSU2_TR(0x4fdfbb);
{u32 ea_=u32(r4(R+20)+u32(616u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdfc1:{NFSU2_TR(0x4fdfc1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdfc3:{NFSU2_TR(0x4fdfc3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdfc6:{NFSU2_TR(0x4fdfc6);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdfc8:L4fdfc8:{c.instructions+=5;NFSU2_TR(0x4fdfc8);
{u32 ea_=u32(r4(R+12)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdfce:{NFSU2_TR(0x4fdfce);
{u32 ea_=u32(r4(R+20)+u32(620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdfd4:{NFSU2_TR(0x4fdfd4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdfd6:{NFSU2_TR(0x4fdfd6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fdfd9:{NFSU2_TR(0x4fdfd9);
if(r1(R+514)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdfdb:L4fdfdb:{c.instructions+=4;NFSU2_TR(0x4fdfdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x270ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fdfe1:{NFSU2_TR(0x4fdfe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fdfe2:{NFSU2_TR(0x4fdfe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x270ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fdfe8:{NFSU2_TR(0x4fdfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fdfedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fdd00u);}goto L4fdd00;}
}
B4fdfed:L4fdfed:{c.instructions+=2;NFSU2_TR(0x4fdfed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fdfef:{NFSU2_TR(0x4fdfef);
if(r1(R+518)){TAIL_STATIC(0x4fe03cu,4fe);}
}
B4fdff1:L4fdff1:{c.instructions+=4;NFSU2_TR(0x4fdff1);
{u32 ea_=u32(r4(R+12)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fdff7:{NFSU2_TR(0x4fdff7);
{u32 ea_=u32(r4(R+20)+u32(672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fdffd:{NFSU2_TR(0x4fdffd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fdfff:{NFSU2_TR(0x4fdfff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
TAIL_STATIC(0x4fe002u,4fe);
}
XIT:NFSU2_TR_EXIT(0x4fd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
