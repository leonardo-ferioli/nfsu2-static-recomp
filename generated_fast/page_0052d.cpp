#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52d(u8* __restrict R,Cpu& c);
u32 page_52d(Cpu& c){return body_52d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52d000:goto L52d000;
case 0x52d008:c.instructions+=1;goto B52d008;
case 0x52d00d:goto L52d00d;
case 0x52d011:c.instructions+=3;goto B52d011;
case 0x52d018:c.instructions+=2;goto B52d018;
case 0x52d01b:c.instructions+=1;goto B52d01b;
case 0x52d020:goto L52d020;
case 0x52d024:c.instructions+=3;goto B52d024;
case 0x52d027:c.instructions+=2;goto B52d027;
case 0x52d029:c.instructions+=1;goto B52d029;
case 0x52d02b:goto L52d02b;
case 0x52d02f:c.instructions+=3;goto B52d02f;
case 0x52d030:c.instructions+=2;goto B52d030;
case 0x52d031:c.instructions+=1;goto B52d031;
case 0x52d036:goto L52d036;
case 0x52d039:c.instructions+=2;goto B52d039;
case 0x52d03b:c.instructions+=1;goto B52d03b;
case 0x52d03d:goto L52d03d;
case 0x52d041:c.instructions+=4;goto B52d041;
case 0x52d045:c.instructions+=3;goto B52d045;
case 0x52d047:c.instructions+=2;goto B52d047;
case 0x52d04a:c.instructions+=1;goto B52d04a;
case 0x52d04c:goto L52d04c;
case 0x52d050:c.instructions+=4;goto B52d050;
case 0x52d054:c.instructions+=3;goto B52d054;
case 0x52d056:c.instructions+=2;goto B52d056;
case 0x52d059:c.instructions+=1;goto B52d059;
case 0x52d05b:goto L52d05b;
case 0x52d05f:c.instructions+=4;goto B52d05f;
case 0x52d063:c.instructions+=3;goto B52d063;
case 0x52d065:c.instructions+=2;goto B52d065;
case 0x52d068:c.instructions+=1;goto B52d068;
case 0x52d06a:goto L52d06a;
case 0x52d06e:c.instructions+=4;goto B52d06e;
case 0x52d072:c.instructions+=3;goto B52d072;
case 0x52d074:c.instructions+=2;goto B52d074;
case 0x52d077:c.instructions+=1;goto B52d077;
case 0x52d079:goto L52d079;
case 0x52d07b:c.instructions+=2;goto B52d07b;
case 0x52d07e:c.instructions+=1;goto B52d07e;
case 0x52d07f:goto L52d07f;
case 0x52d081:c.instructions+=2;goto B52d081;
case 0x52d084:c.instructions+=1;goto B52d084;
case 0x52d090:goto L52d090;
case 0x52d093:c.instructions+=10;goto B52d093;
case 0x52d099:c.instructions+=9;goto B52d099;
case 0x52d09e:c.instructions+=8;goto B52d09e;
case 0x52d0a0:c.instructions+=7;goto B52d0a0;
case 0x52d0a7:c.instructions+=6;goto B52d0a7;
case 0x52d0ad:c.instructions+=5;goto B52d0ad;
case 0x52d0b1:c.instructions+=4;goto B52d0b1;
case 0x52d0b7:c.instructions+=3;goto B52d0b7;
case 0x52d0bd:c.instructions+=2;goto B52d0bd;
case 0x52d0c1:c.instructions+=1;goto B52d0c1;
case 0x52d0c3:goto L52d0c3;
case 0x52d0ca:goto L52d0ca;
case 0x52d0cc:c.instructions+=1;goto B52d0cc;
case 0x52d0ce:goto L52d0ce;
case 0x52d0d2:c.instructions+=6;goto B52d0d2;
case 0x52d0d6:c.instructions+=5;goto B52d0d6;
case 0x52d0da:c.instructions+=4;goto B52d0da;
case 0x52d0db:c.instructions+=3;goto B52d0db;
case 0x52d0dc:c.instructions+=2;goto B52d0dc;
case 0x52d0dd:c.instructions+=1;goto B52d0dd;
case 0x52d0e2:goto L52d0e2;
case 0x52d0e5:c.instructions+=2;goto B52d0e5;
case 0x52d0e7:c.instructions+=1;goto B52d0e7;
case 0x52d0e9:goto L52d0e9;
case 0x52d0eb:c.instructions+=2;goto B52d0eb;
case 0x52d0ee:c.instructions+=1;goto B52d0ee;
case 0x52d0ef:goto L52d0ef;
case 0x52d0f1:c.instructions+=2;goto B52d0f1;
case 0x52d0f4:c.instructions+=1;goto B52d0f4;
case 0x52d100:goto L52d100;
case 0x52d103:c.instructions+=10;goto B52d103;
case 0x52d109:c.instructions+=9;goto B52d109;
case 0x52d10e:c.instructions+=8;goto B52d10e;
case 0x52d110:c.instructions+=7;goto B52d110;
case 0x52d117:c.instructions+=6;goto B52d117;
case 0x52d11d:c.instructions+=5;goto B52d11d;
case 0x52d121:c.instructions+=4;goto B52d121;
case 0x52d127:c.instructions+=3;goto B52d127;
case 0x52d12d:c.instructions+=2;goto B52d12d;
case 0x52d131:c.instructions+=1;goto B52d131;
case 0x52d133:goto L52d133;
case 0x52d13a:goto L52d13a;
case 0x52d13c:c.instructions+=1;goto B52d13c;
case 0x52d13e:goto L52d13e;
case 0x52d142:c.instructions+=6;goto B52d142;
case 0x52d146:c.instructions+=5;goto B52d146;
case 0x52d14a:c.instructions+=4;goto B52d14a;
case 0x52d14b:c.instructions+=3;goto B52d14b;
case 0x52d14c:c.instructions+=2;goto B52d14c;
case 0x52d14d:c.instructions+=1;goto B52d14d;
case 0x52d152:goto L52d152;
case 0x52d155:c.instructions+=2;goto B52d155;
case 0x52d157:c.instructions+=1;goto B52d157;
case 0x52d159:goto L52d159;
case 0x52d15b:c.instructions+=2;goto B52d15b;
case 0x52d15e:c.instructions+=1;goto B52d15e;
case 0x52d15f:goto L52d15f;
case 0x52d161:c.instructions+=2;goto B52d161;
case 0x52d164:c.instructions+=1;goto B52d164;
case 0x52d170:goto L52d170;
case 0x52d174:c.instructions+=2;goto B52d174;
case 0x52d179:c.instructions+=1;goto B52d179;
case 0x52d17f:goto L52d17f;
case 0x52d185:goto L52d185;
case 0x52d18a:c.instructions+=1;goto B52d18a;
case 0x52d18c:goto L52d18c;
case 0x52d18e:goto L52d18e;
case 0x52d191:c.instructions+=2;goto B52d191;
case 0x52d194:c.instructions+=1;goto B52d194;
case 0x52d19a:goto L52d19a;
case 0x52d1a1:c.instructions+=1;goto B52d1a1;
case 0x52d1a8:goto L52d1a8;
case 0x52d1ad:c.instructions+=1;goto B52d1ad;
case 0x52d1b0:goto L52d1b0;
case 0x52d1b5:c.instructions+=1;goto B52d1b5;
case 0x52d1b7:goto L52d1b7;
case 0x52d1bd:goto L52d1bd;
case 0x52d1c2:c.instructions+=1;goto B52d1c2;
case 0x52d1c4:goto L52d1c4;
case 0x52d1c9:c.instructions+=1;goto B52d1c9;
case 0x52d1cb:goto L52d1cb;
case 0x52d1d0:c.instructions+=1;goto B52d1d0;
case 0x52d1d6:goto L52d1d6;
case 0x52d1db:c.instructions+=1;goto B52d1db;
case 0x52d1e0:goto L52d1e0;
case 0x52d1e3:c.instructions+=5;goto B52d1e3;
case 0x52d1e5:c.instructions+=4;goto B52d1e5;
case 0x52d1e7:c.instructions+=3;goto B52d1e7;
case 0x52d1e9:c.instructions+=2;goto B52d1e9;
case 0x52d1ee:c.instructions+=1;goto B52d1ee;
case 0x52d1f1:goto L52d1f1;
case 0x52d1f6:c.instructions+=1;goto B52d1f6;
case 0x52d1f9:goto L52d1f9;
case 0x52d1fe:c.instructions+=1;goto B52d1fe;
case 0x52d203:goto L52d203;
case 0x52d206:c.instructions+=5;goto B52d206;
case 0x52d208:c.instructions+=4;goto B52d208;
case 0x52d20a:c.instructions+=3;goto B52d20a;
case 0x52d20f:c.instructions+=2;goto B52d20f;
case 0x52d214:c.instructions+=1;goto B52d214;
case 0x52d217:goto L52d217;
case 0x52d21c:c.instructions+=1;goto B52d21c;
case 0x52d21e:goto L52d21e;
case 0x52d223:c.instructions+=1;goto B52d223;
case 0x52d225:goto L52d225;
case 0x52d22a:c.instructions+=1;goto B52d22a;
case 0x52d22c:goto L52d22c;
case 0x52d22e:goto L52d22e;
case 0x52d233:c.instructions+=1;goto B52d233;
case 0x52d235:goto L52d235;
case 0x52d237:goto L52d237;
case 0x52d23c:c.instructions+=1;goto B52d23c;
case 0x52d23e:goto L52d23e;
case 0x52d243:c.instructions+=1;goto B52d243;
case 0x52d245:goto L52d245;
case 0x52d24a:c.instructions+=1;goto B52d24a;
case 0x52d24c:goto L52d24c;
case 0x52d251:c.instructions+=1;goto B52d251;
case 0x52d254:goto L52d254;
case 0x52d259:c.instructions+=1;goto B52d259;
case 0x52d25c:goto L52d25c;
case 0x52d261:c.instructions+=1;goto B52d261;
case 0x52d263:goto L52d263;
case 0x52d268:c.instructions+=1;goto B52d268;
case 0x52d26a:goto L52d26a;
case 0x52d26f:c.instructions+=1;goto B52d26f;
case 0x52d271:goto L52d271;
case 0x52d273:goto L52d273;
case 0x52d278:c.instructions+=1;goto B52d278;
case 0x52d27a:goto L52d27a;
case 0x52d27f:c.instructions+=1;goto B52d27f;
case 0x52d281:goto L52d281;
case 0x52d286:c.instructions+=1;goto B52d286;
case 0x52d289:goto L52d289;
case 0x52d28e:c.instructions+=1;goto B52d28e;
case 0x52d290:goto L52d290;
case 0x52d295:goto L52d295;
case 0x52d297:goto L52d297;
case 0x52d299:c.instructions+=1;goto B52d299;
case 0x52d29c:goto L52d29c;
case 0x52d2a1:c.instructions+=1;goto B52d2a1;
case 0x52d330:goto L52d330;
case 0x52d334:c.instructions+=3;goto B52d334;
case 0x52d337:c.instructions+=2;goto B52d337;
case 0x52d33c:c.instructions+=1;goto B52d33c;
case 0x52d33e:goto L52d33e;
case 0x52d343:c.instructions+=1;goto B52d343;
case 0x52d346:goto L52d346;
case 0x52d349:c.instructions+=1;goto B52d349;
case 0x52d34b:goto L52d34b;
case 0x52d350:c.instructions+=1;goto B52d350;
case 0x52d353:goto L52d353;
case 0x52d356:c.instructions+=1;goto B52d356;
case 0x52d358:goto L52d358;
case 0x52d35d:c.instructions+=1;goto B52d35d;
case 0x52d360:goto L52d360;
case 0x52d363:c.instructions+=1;goto B52d363;
case 0x52d365:goto L52d365;
case 0x52d36a:c.instructions+=1;goto B52d36a;
case 0x52d36d:goto L52d36d;
case 0x52d370:c.instructions+=1;goto B52d370;
case 0x52d372:goto L52d372;
case 0x52d377:c.instructions+=1;goto B52d377;
case 0x52d37a:goto L52d37a;
case 0x52d37d:c.instructions+=1;goto B52d37d;
case 0x52d37f:goto L52d37f;
case 0x52d384:c.instructions+=1;goto B52d384;
case 0x52d387:goto L52d387;
case 0x52d389:c.instructions+=1;goto B52d389;
case 0x52d38b:goto L52d38b;
case 0x52d390:c.instructions+=1;goto B52d390;
case 0x52d393:goto L52d393;
case 0x52d396:c.instructions+=1;goto B52d396;
case 0x52d398:goto L52d398;
case 0x52d39d:c.instructions+=1;goto B52d39d;
case 0x52d3a0:goto L52d3a0;
case 0x52d3a6:c.instructions+=1;goto B52d3a6;
case 0x52d3a8:goto L52d3a8;
case 0x52d3ad:c.instructions+=1;goto B52d3ad;
case 0x52d3b0:goto L52d3b0;
case 0x52d3b6:c.instructions+=1;goto B52d3b6;
case 0x52d3b8:goto L52d3b8;
case 0x52d3bd:c.instructions+=1;goto B52d3bd;
case 0x52d3c0:goto L52d3c0;
case 0x52d3c6:c.instructions+=1;goto B52d3c6;
case 0x52d3c8:goto L52d3c8;
case 0x52d3cd:c.instructions+=1;goto B52d3cd;
case 0x52d3d0:goto L52d3d0;
case 0x52d3d6:c.instructions+=1;goto B52d3d6;
case 0x52d3d8:goto L52d3d8;
case 0x52d3dd:c.instructions+=1;goto B52d3dd;
case 0x52d3e0:goto L52d3e0;
case 0x52d3e6:c.instructions+=1;goto B52d3e6;
case 0x52d3e8:goto L52d3e8;
case 0x52d3ed:c.instructions+=1;goto B52d3ed;
case 0x52d3f0:goto L52d3f0;
case 0x52d3f6:c.instructions+=1;goto B52d3f6;
case 0x52d3f8:goto L52d3f8;
case 0x52d3fd:c.instructions+=1;goto B52d3fd;
case 0x52d400:goto L52d400;
case 0x52d403:c.instructions+=1;goto B52d403;
case 0x52d405:goto L52d405;
case 0x52d40a:c.instructions+=1;goto B52d40a;
case 0x52d40d:goto L52d40d;
case 0x52d410:c.instructions+=1;goto B52d410;
case 0x52d412:goto L52d412;
case 0x52d417:c.instructions+=1;goto B52d417;
case 0x52d41a:goto L52d41a;
case 0x52d420:c.instructions+=1;goto B52d420;
case 0x52d422:goto L52d422;
case 0x52d427:c.instructions+=1;goto B52d427;
case 0x52d42a:goto L52d42a;
case 0x52d42d:c.instructions+=1;goto B52d42d;
case 0x52d42f:goto L52d42f;
case 0x52d434:c.instructions+=5;goto B52d434;
case 0x52d436:c.instructions+=4;goto B52d436;
case 0x52d438:c.instructions+=3;goto B52d438;
case 0x52d43d:c.instructions+=2;goto B52d43d;
case 0x52d442:c.instructions+=1;goto B52d442;
case 0x52d445:goto L52d445;
case 0x52d448:c.instructions+=1;goto B52d448;
case 0x52d44a:goto L52d44a;
case 0x52d44f:c.instructions+=1;goto B52d44f;
case 0x52d452:goto L52d452;
case 0x52d455:c.instructions+=1;goto B52d455;
case 0x52d457:goto L52d457;
case 0x52d45c:c.instructions+=1;goto B52d45c;
case 0x52d45f:goto L52d45f;
case 0x52d462:c.instructions+=1;goto B52d462;
case 0x52d464:goto L52d464;
case 0x52d469:c.instructions+=1;goto B52d469;
case 0x52d46c:goto L52d46c;
case 0x52d472:c.instructions+=1;goto B52d472;
case 0x52d474:goto L52d474;
case 0x52d479:c.instructions+=1;goto B52d479;
case 0x52d47c:goto L52d47c;
case 0x52d482:c.instructions+=1;goto B52d482;
case 0x52d484:goto L52d484;
case 0x52d489:c.instructions+=1;goto B52d489;
case 0x52d48c:goto L52d48c;
case 0x52d492:c.instructions+=1;goto B52d492;
case 0x52d494:goto L52d494;
case 0x52d499:c.instructions+=1;goto B52d499;
case 0x52d49c:goto L52d49c;
case 0x52d4a2:c.instructions+=1;goto B52d4a2;
case 0x52d4a4:goto L52d4a4;
case 0x52d4a9:c.instructions+=1;goto B52d4a9;
case 0x52d4ac:goto L52d4ac;
case 0x52d4b2:c.instructions+=1;goto B52d4b2;
case 0x52d4b4:goto L52d4b4;
case 0x52d4b9:c.instructions+=1;goto B52d4b9;
case 0x52d4bc:goto L52d4bc;
case 0x52d4c2:c.instructions+=1;goto B52d4c2;
case 0x52d4c4:goto L52d4c4;
case 0x52d4c9:c.instructions+=1;goto B52d4c9;
case 0x52d4ce:goto L52d4ce;
case 0x52d4d1:c.instructions+=4;goto B52d4d1;
case 0x52d4d3:c.instructions+=3;goto B52d4d3;
case 0x52d4d5:c.instructions+=2;goto B52d4d5;
case 0x52d4da:c.instructions+=1;goto B52d4da;
case 0x52d4df:goto L52d4df;
case 0x52d4f0:goto L52d4f0;
case 0x52d4f3:c.instructions+=14;goto B52d4f3;
case 0x52d4f9:c.instructions+=13;goto B52d4f9;
case 0x52d4fa:c.instructions+=12;goto B52d4fa;
case 0x52d4fc:c.instructions+=11;goto B52d4fc;
case 0x52d4ff:c.instructions+=10;goto B52d4ff;
case 0x52d501:c.instructions+=9;goto B52d501;
case 0x52d507:c.instructions+=8;goto B52d507;
case 0x52d508:c.instructions+=7;goto B52d508;
case 0x52d509:c.instructions+=6;goto B52d509;
case 0x52d50d:c.instructions+=5;goto B52d50d;
case 0x52d513:c.instructions+=4;goto B52d513;
case 0x52d517:c.instructions+=3;goto B52d517;
case 0x52d51d:c.instructions+=2;goto B52d51d;
case 0x52d521:c.instructions+=1;goto B52d521;
case 0x52d523:goto L52d523;
case 0x52d526:c.instructions+=1;goto B52d526;
case 0x52d528:goto L52d528;
case 0x52d52a:c.instructions+=1;goto B52d52a;
case 0x52d530:goto L52d530;
case 0x52d533:c.instructions+=2;goto B52d533;
case 0x52d535:c.instructions+=1;goto B52d535;
case 0x52d537:goto L52d537;
case 0x52d53a:c.instructions+=1;goto B52d53a;
case 0x52d53c:goto L52d53c;
case 0x52d53e:goto L52d53e;
case 0x52d540:c.instructions+=1;goto B52d540;
case 0x52d546:goto L52d546;
case 0x52d549:c.instructions+=2;goto B52d549;
case 0x52d54b:c.instructions+=1;goto B52d54b;
case 0x52d551:goto L52d551;
case 0x52d554:c.instructions+=6;goto B52d554;
case 0x52d558:c.instructions+=5;goto B52d558;
case 0x52d559:c.instructions+=4;goto B52d559;
case 0x52d55d:c.instructions+=3;goto B52d55d;
case 0x52d55e:c.instructions+=2;goto B52d55e;
case 0x52d55f:c.instructions+=1;goto B52d55f;
case 0x52d564:goto L52d564;
case 0x52d567:c.instructions+=2;goto B52d567;
case 0x52d569:c.instructions+=1;goto B52d569;
case 0x52d56b:goto L52d56b;
case 0x52d56e:c.instructions+=2;goto B52d56e;
case 0x52d570:c.instructions+=1;goto B52d570;
case 0x52d572:goto L52d572;
case 0x52d575:c.instructions+=2;goto B52d575;
case 0x52d577:c.instructions+=1;goto B52d577;
case 0x52d579:goto L52d579;
case 0x52d57c:c.instructions+=2;goto B52d57c;
case 0x52d57e:c.instructions+=1;goto B52d57e;
case 0x52d580:goto L52d580;
case 0x52d583:c.instructions+=2;goto B52d583;
case 0x52d585:c.instructions+=1;goto B52d585;
case 0x52d587:goto L52d587;
case 0x52d58a:c.instructions+=1;goto B52d58a;
case 0x52d58c:goto L52d58c;
case 0x52d58f:c.instructions+=2;goto B52d58f;
case 0x52d592:c.instructions+=1;goto B52d592;
case 0x52d594:goto L52d594;
case 0x52d596:c.instructions+=4;goto B52d596;
case 0x52d597:c.instructions+=3;goto B52d597;
case 0x52d598:c.instructions+=2;goto B52d598;
case 0x52d59c:c.instructions+=1;goto B52d59c;
case 0x52d5a1:goto L52d5a1;
case 0x52d5a4:c.instructions+=1;goto B52d5a4;
case 0x52d5a6:goto L52d5a6;
case 0x52d5a9:c.instructions+=2;goto B52d5a9;
case 0x52d5ab:c.instructions+=1;goto B52d5ab;
case 0x52d5ad:goto L52d5ad;
case 0x52d5b0:c.instructions+=2;goto B52d5b0;
case 0x52d5b2:c.instructions+=1;goto B52d5b2;
case 0x52d5b4:goto L52d5b4;
case 0x52d5b7:c.instructions+=2;goto B52d5b7;
case 0x52d5b8:c.instructions+=1;goto B52d5b8;
case 0x52d5bd:goto L52d5bd;
case 0x52d5c0:c.instructions+=2;goto B52d5c0;
case 0x52d5c2:c.instructions+=1;goto B52d5c2;
case 0x52d5c4:goto L52d5c4;
case 0x52d5c7:c.instructions+=2;goto B52d5c7;
case 0x52d5c9:c.instructions+=1;goto B52d5c9;
case 0x52d5cb:goto L52d5cb;
case 0x52d5ce:c.instructions+=1;goto B52d5ce;
case 0x52d5d0:goto L52d5d0;
case 0x52d5d3:c.instructions+=2;goto B52d5d3;
case 0x52d5d6:c.instructions+=1;goto B52d5d6;
case 0x52d5d8:goto L52d5d8;
case 0x52d5db:c.instructions+=5;goto B52d5db;
case 0x52d5dd:c.instructions+=4;goto B52d5dd;
case 0x52d5de:c.instructions+=3;goto B52d5de;
case 0x52d5df:c.instructions+=2;goto B52d5df;
case 0x52d5e3:c.instructions+=1;goto B52d5e3;
case 0x52d5e8:goto L52d5e8;
case 0x52d5eb:goto L52d5eb;
case 0x52d5ef:goto L52d5ef;
case 0x52d5f2:c.instructions+=2;goto B52d5f2;
case 0x52d5f4:c.instructions+=1;goto B52d5f4;
case 0x52d5fa:goto L52d5fa;
case 0x52d5fd:c.instructions+=1;goto B52d5fd;
case 0x52d602:goto L52d602;
case 0x52d603:c.instructions+=4;goto B52d603;
case 0x52d604:c.instructions+=3;goto B52d604;
case 0x52d605:c.instructions+=2;goto B52d605;
case 0x52d608:c.instructions+=1;goto B52d608;
case 0x52d610:goto L52d610;
case 0x52d611:c.instructions+=5;goto B52d611;
case 0x52d615:c.instructions+=4;goto B52d615;
case 0x52d617:c.instructions+=3;goto B52d617;
case 0x52d618:c.instructions+=2;goto B52d618;
case 0x52d61a:c.instructions+=1;goto B52d61a;
case 0x52d61c:goto L52d61c;
case 0x52d61e:c.instructions+=2;goto B52d61e;
case 0x52d621:c.instructions+=1;goto B52d621;
case 0x52d623:goto L52d623;
case 0x52d624:c.instructions+=2;goto B52d624;
case 0x52d629:c.instructions+=1;goto B52d629;
case 0x52d62b:goto L52d62b;
case 0x52d62e:c.instructions+=3;goto B52d62e;
case 0x52d62f:c.instructions+=2;goto B52d62f;
case 0x52d631:c.instructions+=1;goto B52d631;
case 0x52d633:goto L52d633;
case 0x52d634:c.instructions+=2;goto B52d634;
case 0x52d636:c.instructions+=1;goto B52d636;
case 0x52d63b:goto L52d63b;
case 0x52d63d:c.instructions+=3;goto B52d63d;
case 0x52d63e:c.instructions+=2;goto B52d63e;
case 0x52d63f:c.instructions+=1;goto B52d63f;
case 0x52d644:goto L52d644;
case 0x52d647:goto L52d647;
case 0x52d649:c.instructions+=3;goto B52d649;
case 0x52d64a:c.instructions+=2;goto B52d64a;
case 0x52d64b:c.instructions+=1;goto B52d64b;
case 0x52d650:goto L52d650;
case 0x52d651:c.instructions+=8;goto B52d651;
case 0x52d653:c.instructions+=7;goto B52d653;
case 0x52d656:c.instructions+=6;goto B52d656;
case 0x52d65a:c.instructions+=5;goto B52d65a;
case 0x52d65b:c.instructions+=4;goto B52d65b;
case 0x52d65f:c.instructions+=3;goto B52d65f;
case 0x52d660:c.instructions+=2;goto B52d660;
case 0x52d661:c.instructions+=1;goto B52d661;
case 0x52d666:goto L52d666;
case 0x52d669:c.instructions+=2;goto B52d669;
case 0x52d66b:c.instructions+=1;goto B52d66b;
case 0x52d66d:goto L52d66d;
case 0x52d66f:c.instructions+=2;goto B52d66f;
case 0x52d671:c.instructions+=1;goto B52d671;
case 0x52d674:goto L52d674;
case 0x52d67b:c.instructions+=2;goto B52d67b;
case 0x52d67e:c.instructions+=1;goto B52d67e;
case 0x52d680:goto L52d680;
case 0x52d686:c.instructions+=2;goto B52d686;
case 0x52d687:c.instructions+=1;goto B52d687;
case 0x52d68c:goto L52d68c;
case 0x52d690:c.instructions+=5;goto B52d690;
case 0x52d692:c.instructions+=4;goto B52d692;
case 0x52d697:c.instructions+=3;goto B52d697;
case 0x52d698:c.instructions+=2;goto B52d698;
case 0x52d69a:c.instructions+=1;goto B52d69a;
case 0x52d69d:goto L52d69d;
case 0x52d69e:c.instructions+=1;goto B52d69e;
case 0x52d6b0:goto L52d6b0;
case 0x52d6b3:c.instructions+=6;goto B52d6b3;
case 0x52d6b4:c.instructions+=5;goto B52d6b4;
case 0x52d6b6:c.instructions+=4;goto B52d6b6;
case 0x52d6b7:c.instructions+=3;goto B52d6b7;
case 0x52d6ba:c.instructions+=2;goto B52d6ba;
case 0x52d6bc:c.instructions+=1;goto B52d6bc;
case 0x52d6be:goto L52d6be;
case 0x52d6c2:c.instructions+=1;goto B52d6c2;
case 0x52d6c4:goto L52d6c4;
case 0x52d6c7:c.instructions+=9;goto B52d6c7;
case 0x52d6ca:c.instructions+=8;goto B52d6ca;
case 0x52d6ce:c.instructions+=7;goto B52d6ce;
case 0x52d6d2:c.instructions+=6;goto B52d6d2;
case 0x52d6d3:c.instructions+=5;goto B52d6d3;
case 0x52d6d7:c.instructions+=4;goto B52d6d7;
case 0x52d6d8:c.instructions+=3;goto B52d6d8;
case 0x52d6d9:c.instructions+=2;goto B52d6d9;
case 0x52d6dd:c.instructions+=1;goto B52d6dd;
case 0x52d6e2:goto L52d6e2;
case 0x52d6e6:c.instructions+=9;goto B52d6e6;
case 0x52d6ec:c.instructions+=8;goto B52d6ec;
case 0x52d6f0:c.instructions+=7;goto B52d6f0;
case 0x52d6f3:c.instructions+=6;goto B52d6f3;
case 0x52d6f4:c.instructions+=5;goto B52d6f4;
case 0x52d6f8:c.instructions+=4;goto B52d6f8;
case 0x52d6f9:c.instructions+=3;goto B52d6f9;
case 0x52d6fc:c.instructions+=2;goto B52d6fc;
case 0x52d6fd:c.instructions+=1;goto B52d6fd;
case 0x52d702:goto L52d702;
case 0x52d705:c.instructions+=8;goto B52d705;
case 0x52d708:c.instructions+=7;goto B52d708;
case 0x52d70c:c.instructions+=6;goto B52d70c;
case 0x52d70d:c.instructions+=5;goto B52d70d;
case 0x52d711:c.instructions+=4;goto B52d711;
case 0x52d712:c.instructions+=3;goto B52d712;
case 0x52d713:c.instructions+=2;goto B52d713;
case 0x52d717:c.instructions+=1;goto B52d717;
case 0x52d71c:goto L52d71c;
case 0x52d720:c.instructions+=5;goto B52d720;
case 0x52d724:c.instructions+=4;goto B52d724;
case 0x52d725:c.instructions+=3;goto B52d725;
case 0x52d726:c.instructions+=2;goto B52d726;
case 0x52d727:c.instructions+=1;goto B52d727;
case 0x52d72c:goto L52d72c;
case 0x52d72f:c.instructions+=1;goto B52d72f;
case 0x52d731:goto L52d731;
case 0x52d734:c.instructions+=5;goto B52d734;
case 0x52d737:c.instructions+=4;goto B52d737;
case 0x52d738:c.instructions+=3;goto B52d738;
case 0x52d739:c.instructions+=2;goto B52d739;
case 0x52d73a:c.instructions+=1;goto B52d73a;
case 0x52d73f:goto L52d73f;
case 0x52d742:goto L52d742;
case 0x52d745:c.instructions+=2;goto B52d745;
case 0x52d747:c.instructions+=1;goto B52d747;
case 0x52d749:goto L52d749;
case 0x52d74c:c.instructions+=8;goto B52d74c;
case 0x52d74f:c.instructions+=7;goto B52d74f;
case 0x52d752:c.instructions+=6;goto B52d752;
case 0x52d756:c.instructions+=5;goto B52d756;
case 0x52d759:c.instructions+=4;goto B52d759;
case 0x52d75c:c.instructions+=3;goto B52d75c;
case 0x52d75f:c.instructions+=2;goto B52d75f;
case 0x52d760:c.instructions+=1;goto B52d760;
case 0x52d765:goto L52d765;
case 0x52d768:goto L52d768;
case 0x52d769:c.instructions+=3;goto B52d769;
case 0x52d76a:c.instructions+=2;goto B52d76a;
case 0x52d76d:c.instructions+=1;goto B52d76d;
case 0x52d770:goto L52d770;
case 0x52d771:c.instructions+=6;goto B52d771;
case 0x52d773:c.instructions+=5;goto B52d773;
case 0x52d779:c.instructions+=4;goto B52d779;
case 0x52d77b:c.instructions+=3;goto B52d77b;
case 0x52d77e:c.instructions+=2;goto B52d77e;
case 0x52d77f:c.instructions+=1;goto B52d77f;
case 0x52d781:goto L52d781;
case 0x52d783:c.instructions+=1;goto B52d783;
case 0x52d785:goto L52d785;
case 0x52d788:c.instructions+=4;goto B52d788;
case 0x52d78c:c.instructions+=3;goto B52d78c;
case 0x52d78d:c.instructions+=2;goto B52d78d;
case 0x52d78e:c.instructions+=1;goto B52d78e;
case 0x52d793:goto L52d793;
case 0x52d796:c.instructions+=2;goto B52d796;
case 0x52d798:c.instructions+=1;goto B52d798;
case 0x52d79a:goto L52d79a;
case 0x52d79b:c.instructions+=3;goto B52d79b;
case 0x52d79e:c.instructions+=2;goto B52d79e;
case 0x52d7a0:c.instructions+=1;goto B52d7a0;
case 0x52d7a2:goto L52d7a2;
case 0x52d7a7:c.instructions+=1;goto B52d7a7;
case 0x52d7ac:goto L52d7ac;
case 0x52d7af:c.instructions+=3;goto B52d7af;
case 0x52d7b2:c.instructions+=2;goto B52d7b2;
case 0x52d7b4:c.instructions+=1;goto B52d7b4;
case 0x52d7b6:goto L52d7b6;
case 0x52d7b9:c.instructions+=2;goto B52d7b9;
case 0x52d7bb:c.instructions+=1;goto B52d7bb;
case 0x52d7bd:goto L52d7bd;
case 0x52d7bf:goto L52d7bf;
case 0x52d7c1:c.instructions+=1;goto B52d7c1;
case 0x52d7c3:goto L52d7c3;
case 0x52d7c6:c.instructions+=1;goto B52d7c6;
case 0x52d7c8:goto L52d7c8;
case 0x52d7ca:c.instructions+=2;goto B52d7ca;
case 0x52d7cd:c.instructions+=1;goto B52d7cd;
case 0x52d7d2:goto L52d7d2;
case 0x52d7d5:c.instructions+=1;goto B52d7d5;
case 0x52d7dc:goto L52d7dc;
case 0x52d7e3:goto L52d7e3;
case 0x52d7e4:goto L52d7e4;
case 0x52d7e7:c.instructions+=4;goto B52d7e7;
case 0x52d7e9:c.instructions+=3;goto B52d7e9;
case 0x52d7ea:c.instructions+=2;goto B52d7ea;
case 0x52d7eb:c.instructions+=1;goto B52d7eb;
case 0x52d7ed:goto L52d7ed;
case 0x52d7ef:c.instructions+=3;goto B52d7ef;
case 0x52d7f4:c.instructions+=2;goto B52d7f4;
case 0x52d7f5:c.instructions+=1;goto B52d7f5;
case 0x52d7fa:goto L52d7fa;
case 0x52d7fd:goto L52d7fd;
case 0x52d800:goto L52d800;
case 0x52d803:c.instructions+=6;goto B52d803;
case 0x52d804:c.instructions+=5;goto B52d804;
case 0x52d806:c.instructions+=4;goto B52d806;
case 0x52d807:c.instructions+=3;goto B52d807;
case 0x52d80a:c.instructions+=2;goto B52d80a;
case 0x52d80c:c.instructions+=1;goto B52d80c;
case 0x52d80e:goto L52d80e;
case 0x52d812:c.instructions+=1;goto B52d812;
case 0x52d814:goto L52d814;
case 0x52d817:c.instructions+=9;goto B52d817;
case 0x52d81a:c.instructions+=8;goto B52d81a;
case 0x52d81e:c.instructions+=7;goto B52d81e;
case 0x52d822:c.instructions+=6;goto B52d822;
case 0x52d823:c.instructions+=5;goto B52d823;
case 0x52d827:c.instructions+=4;goto B52d827;
case 0x52d828:c.instructions+=3;goto B52d828;
case 0x52d829:c.instructions+=2;goto B52d829;
case 0x52d82d:c.instructions+=1;goto B52d82d;
case 0x52d832:goto L52d832;
case 0x52d836:c.instructions+=9;goto B52d836;
case 0x52d83c:c.instructions+=8;goto B52d83c;
case 0x52d840:c.instructions+=7;goto B52d840;
case 0x52d843:c.instructions+=6;goto B52d843;
case 0x52d844:c.instructions+=5;goto B52d844;
case 0x52d848:c.instructions+=4;goto B52d848;
case 0x52d849:c.instructions+=3;goto B52d849;
case 0x52d84c:c.instructions+=2;goto B52d84c;
case 0x52d84d:c.instructions+=1;goto B52d84d;
case 0x52d852:goto L52d852;
case 0x52d855:c.instructions+=8;goto B52d855;
case 0x52d858:c.instructions+=7;goto B52d858;
case 0x52d85c:c.instructions+=6;goto B52d85c;
case 0x52d85d:c.instructions+=5;goto B52d85d;
case 0x52d861:c.instructions+=4;goto B52d861;
case 0x52d862:c.instructions+=3;goto B52d862;
case 0x52d863:c.instructions+=2;goto B52d863;
case 0x52d867:c.instructions+=1;goto B52d867;
case 0x52d86c:goto L52d86c;
case 0x52d870:c.instructions+=5;goto B52d870;
case 0x52d874:c.instructions+=4;goto B52d874;
case 0x52d875:c.instructions+=3;goto B52d875;
case 0x52d876:c.instructions+=2;goto B52d876;
case 0x52d877:c.instructions+=1;goto B52d877;
case 0x52d87c:goto L52d87c;
case 0x52d87f:c.instructions+=1;goto B52d87f;
case 0x52d881:goto L52d881;
case 0x52d884:c.instructions+=5;goto B52d884;
case 0x52d887:c.instructions+=4;goto B52d887;
case 0x52d888:c.instructions+=3;goto B52d888;
case 0x52d889:c.instructions+=2;goto B52d889;
case 0x52d88a:c.instructions+=1;goto B52d88a;
case 0x52d88f:goto L52d88f;
case 0x52d892:goto L52d892;
case 0x52d895:c.instructions+=10;goto B52d895;
case 0x52d898:c.instructions+=9;goto B52d898;
case 0x52d89b:c.instructions+=8;goto B52d89b;
case 0x52d89f:c.instructions+=7;goto B52d89f;
case 0x52d8a3:c.instructions+=6;goto B52d8a3;
case 0x52d8a4:c.instructions+=5;goto B52d8a4;
case 0x52d8a8:c.instructions+=4;goto B52d8a8;
case 0x52d8a9:c.instructions+=3;goto B52d8a9;
case 0x52d8aa:c.instructions+=2;goto B52d8aa;
case 0x52d8ae:c.instructions+=1;goto B52d8ae;
case 0x52d8b3:goto L52d8b3;
case 0x52d8b7:c.instructions+=9;goto B52d8b7;
case 0x52d8bd:c.instructions+=8;goto B52d8bd;
case 0x52d8c1:c.instructions+=7;goto B52d8c1;
case 0x52d8c4:c.instructions+=6;goto B52d8c4;
case 0x52d8c5:c.instructions+=5;goto B52d8c5;
case 0x52d8c9:c.instructions+=4;goto B52d8c9;
case 0x52d8ca:c.instructions+=3;goto B52d8ca;
case 0x52d8cd:c.instructions+=2;goto B52d8cd;
case 0x52d8ce:c.instructions+=1;goto B52d8ce;
case 0x52d8d3:goto L52d8d3;
case 0x52d8d6:c.instructions+=8;goto B52d8d6;
case 0x52d8d9:c.instructions+=7;goto B52d8d9;
case 0x52d8dd:c.instructions+=6;goto B52d8dd;
case 0x52d8de:c.instructions+=5;goto B52d8de;
case 0x52d8e2:c.instructions+=4;goto B52d8e2;
case 0x52d8e3:c.instructions+=3;goto B52d8e3;
case 0x52d8e4:c.instructions+=2;goto B52d8e4;
case 0x52d8e8:c.instructions+=1;goto B52d8e8;
case 0x52d8ed:goto L52d8ed;
case 0x52d8f1:c.instructions+=5;goto B52d8f1;
case 0x52d8f5:c.instructions+=4;goto B52d8f5;
case 0x52d8f6:c.instructions+=3;goto B52d8f6;
case 0x52d8f7:c.instructions+=2;goto B52d8f7;
case 0x52d8f8:c.instructions+=1;goto B52d8f8;
case 0x52d8fd:goto L52d8fd;
case 0x52d900:c.instructions+=3;goto B52d900;
case 0x52d903:c.instructions+=2;goto B52d903;
case 0x52d905:c.instructions+=1;goto B52d905;
case 0x52d907:goto L52d907;
case 0x52d90a:c.instructions+=8;goto B52d90a;
case 0x52d90d:c.instructions+=7;goto B52d90d;
case 0x52d910:c.instructions+=6;goto B52d910;
case 0x52d914:c.instructions+=5;goto B52d914;
case 0x52d917:c.instructions+=4;goto B52d917;
case 0x52d91a:c.instructions+=3;goto B52d91a;
case 0x52d91d:c.instructions+=2;goto B52d91d;
case 0x52d91e:c.instructions+=1;goto B52d91e;
case 0x52d923:goto L52d923;
case 0x52d926:goto L52d926;
case 0x52d927:c.instructions+=3;goto B52d927;
case 0x52d928:c.instructions+=2;goto B52d928;
case 0x52d92b:c.instructions+=1;goto B52d92b;
case 0x52d930:goto L52d930;
case 0x52d933:c.instructions+=12;goto B52d933;
case 0x52d937:c.instructions+=11;goto B52d937;
case 0x52d93a:c.instructions+=10;goto B52d93a;
case 0x52d93d:c.instructions+=9;goto B52d93d;
case 0x52d93f:c.instructions+=8;goto B52d93f;
case 0x52d940:c.instructions+=7;goto B52d940;
case 0x52d943:c.instructions+=6;goto B52d943;
case 0x52d945:c.instructions+=5;goto B52d945;
case 0x52d949:c.instructions+=4;goto B52d949;
case 0x52d94c:c.instructions+=3;goto B52d94c;
case 0x52d94f:c.instructions+=2;goto B52d94f;
case 0x52d951:c.instructions+=1;goto B52d951;
case 0x52d953:goto L52d953;
case 0x52d956:c.instructions+=7;goto B52d956;
case 0x52d95a:c.instructions+=6;goto B52d95a;
case 0x52d95b:c.instructions+=5;goto B52d95b;
case 0x52d95f:c.instructions+=4;goto B52d95f;
case 0x52d960:c.instructions+=3;goto B52d960;
case 0x52d961:c.instructions+=2;goto B52d961;
case 0x52d965:c.instructions+=1;goto B52d965;
case 0x52d96a:goto L52d96a;
case 0x52d96e:c.instructions+=8;goto B52d96e;
case 0x52d972:c.instructions+=7;goto B52d972;
case 0x52d976:c.instructions+=6;goto B52d976;
case 0x52d979:c.instructions+=5;goto B52d979;
case 0x52d97a:c.instructions+=4;goto B52d97a;
case 0x52d97b:c.instructions+=3;goto B52d97b;
case 0x52d97e:c.instructions+=2;goto B52d97e;
case 0x52d97f:c.instructions+=1;goto B52d97f;
case 0x52d984:goto L52d984;
case 0x52d987:goto L52d987;
case 0x52d988:c.instructions+=2;goto B52d988;
case 0x52d98b:c.instructions+=1;goto B52d98b;
case 0x52d990:goto L52d990;
case 0x52d993:c.instructions+=12;goto B52d993;
case 0x52d997:c.instructions+=11;goto B52d997;
case 0x52d99a:c.instructions+=10;goto B52d99a;
case 0x52d99d:c.instructions+=9;goto B52d99d;
case 0x52d99f:c.instructions+=8;goto B52d99f;
case 0x52d9a0:c.instructions+=7;goto B52d9a0;
case 0x52d9a3:c.instructions+=6;goto B52d9a3;
case 0x52d9a5:c.instructions+=5;goto B52d9a5;
case 0x52d9a9:c.instructions+=4;goto B52d9a9;
case 0x52d9ac:c.instructions+=3;goto B52d9ac;
case 0x52d9af:c.instructions+=2;goto B52d9af;
case 0x52d9b1:c.instructions+=1;goto B52d9b1;
case 0x52d9b3:goto L52d9b3;
case 0x52d9b6:c.instructions+=7;goto B52d9b6;
case 0x52d9ba:c.instructions+=6;goto B52d9ba;
case 0x52d9bb:c.instructions+=5;goto B52d9bb;
case 0x52d9bf:c.instructions+=4;goto B52d9bf;
case 0x52d9c0:c.instructions+=3;goto B52d9c0;
case 0x52d9c1:c.instructions+=2;goto B52d9c1;
case 0x52d9c5:c.instructions+=1;goto B52d9c5;
case 0x52d9ca:goto L52d9ca;
case 0x52d9ce:c.instructions+=7;goto B52d9ce;
case 0x52d9d2:c.instructions+=6;goto B52d9d2;
case 0x52d9d6:c.instructions+=5;goto B52d9d6;
case 0x52d9d9:c.instructions+=4;goto B52d9d9;
case 0x52d9dc:c.instructions+=3;goto B52d9dc;
case 0x52d9dd:c.instructions+=2;goto B52d9dd;
case 0x52d9de:c.instructions+=1;goto B52d9de;
case 0x52d9e3:goto L52d9e3;
case 0x52d9e6:goto L52d9e6;
case 0x52d9e7:c.instructions+=2;goto B52d9e7;
case 0x52d9ea:c.instructions+=1;goto B52d9ea;
case 0x52d9f0:goto L52d9f0;
case 0x52d9f1:c.instructions+=10;goto B52d9f1;
case 0x52d9f5:c.instructions+=9;goto B52d9f5;
case 0x52d9f6:c.instructions+=8;goto B52d9f6;
case 0x52d9f7:c.instructions+=7;goto B52d9f7;
case 0x52d9fb:c.instructions+=6;goto B52d9fb;
case 0x52d9fd:c.instructions+=5;goto B52d9fd;
case 0x52da00:c.instructions+=4;goto B52da00;
case 0x52da01:c.instructions+=3;goto B52da01;
case 0x52da02:c.instructions+=2;goto B52da02;
case 0x52da03:c.instructions+=1;goto B52da03;
case 0x52da08:goto L52da08;
case 0x52da0b:c.instructions+=2;goto B52da0b;
case 0x52da0d:c.instructions+=1;goto B52da0d;
case 0x52da0f:goto L52da0f;
case 0x52da13:c.instructions+=5;goto B52da13;
case 0x52da15:c.instructions+=4;goto B52da15;
case 0x52da1a:c.instructions+=3;goto B52da1a;
case 0x52da1b:c.instructions+=2;goto B52da1b;
case 0x52da1d:c.instructions+=1;goto B52da1d;
case 0x52da20:goto L52da20;
case 0x52da22:c.instructions+=3;goto B52da22;
case 0x52da27:c.instructions+=2;goto B52da27;
case 0x52da29:c.instructions+=1;goto B52da29;
case 0x52da2c:goto L52da2c;
case 0x52da2e:c.instructions+=2;goto B52da2e;
case 0x52da30:c.instructions+=1;goto B52da30;
case 0x52da33:goto L52da33;
case 0x52da35:c.instructions+=2;goto B52da35;
case 0x52da3a:c.instructions+=1;goto B52da3a;
case 0x52da3c:goto L52da3c;
case 0x52da3f:c.instructions+=4;goto B52da3f;
case 0x52da40:c.instructions+=3;goto B52da40;
case 0x52da41:c.instructions+=2;goto B52da41;
case 0x52da42:c.instructions+=1;goto B52da42;
case 0x52da47:goto L52da47;
case 0x52da4a:c.instructions+=2;goto B52da4a;
case 0x52da4c:c.instructions+=1;goto B52da4c;
case 0x52da4e:goto L52da4e;
case 0x52da51:c.instructions+=4;goto B52da51;
case 0x52da52:c.instructions+=3;goto B52da52;
case 0x52da53:c.instructions+=2;goto B52da53;
case 0x52da54:c.instructions+=1;goto B52da54;
case 0x52da59:goto L52da59;
case 0x52da5c:c.instructions+=2;goto B52da5c;
case 0x52da5e:c.instructions+=1;goto B52da5e;
case 0x52da60:goto L52da60;
case 0x52da64:c.instructions+=5;goto B52da64;
case 0x52da66:c.instructions+=4;goto B52da66;
case 0x52da6b:c.instructions+=3;goto B52da6b;
case 0x52da6c:c.instructions+=2;goto B52da6c;
case 0x52da6e:c.instructions+=1;goto B52da6e;
case 0x52da71:goto L52da71;
case 0x52da73:c.instructions+=3;goto B52da73;
case 0x52da75:c.instructions+=2;goto B52da75;
case 0x52da7a:c.instructions+=1;goto B52da7a;
case 0x52da7d:goto L52da7d;
case 0x52da7f:c.instructions+=2;goto B52da7f;
case 0x52da81:c.instructions+=1;goto B52da81;
case 0x52da84:goto L52da84;
case 0x52da86:c.instructions+=1;goto B52da86;
case 0x52da8b:goto L52da8b;
case 0x52da8d:c.instructions+=3;goto B52da8d;
case 0x52da8f:c.instructions+=2;goto B52da8f;
case 0x52da91:c.instructions+=1;goto B52da91;
case 0x52da94:goto L52da94;
case 0x52da97:c.instructions+=3;goto B52da97;
case 0x52da9f:c.instructions+=2;goto B52da9f;
case 0x52daa2:c.instructions+=1;goto B52daa2;
case 0x52daa4:goto L52daa4;
case 0x52daaa:c.instructions+=2;goto B52daaa;
case 0x52daab:c.instructions+=1;goto B52daab;
case 0x52dab0:goto L52dab0;
case 0x52dab1:c.instructions+=3;goto B52dab1;
case 0x52dab2:c.instructions+=2;goto B52dab2;
case 0x52dab3:c.instructions+=1;goto B52dab3;
case 0x52dac0:goto L52dac0;
case 0x52dac3:c.instructions+=3;goto B52dac3;
case 0x52dac4:c.instructions+=2;goto B52dac4;
case 0x52dac6:c.instructions+=1;goto B52dac6;
case 0x52dacb:goto L52dacb;
case 0x52dace:c.instructions+=11;goto B52dace;
case 0x52dad1:c.instructions+=10;goto B52dad1;
case 0x52dad4:c.instructions+=9;goto B52dad4;
case 0x52dada:c.instructions+=8;goto B52dada;
case 0x52dade:c.instructions+=7;goto B52dade;
case 0x52dadf:c.instructions+=6;goto B52dadf;
case 0x52dae1:c.instructions+=5;goto B52dae1;
case 0x52dae5:c.instructions+=4;goto B52dae5;
case 0x52dae6:c.instructions+=3;goto B52dae6;
case 0x52dae7:c.instructions+=2;goto B52dae7;
case 0x52daeb:c.instructions+=1;goto B52daeb;
case 0x52daf0:goto L52daf0;
case 0x52daf3:c.instructions+=11;goto B52daf3;
case 0x52daf9:c.instructions+=10;goto B52daf9;
case 0x52dafc:c.instructions+=9;goto B52dafc;
case 0x52daff:c.instructions+=8;goto B52daff;
case 0x52db00:c.instructions+=7;goto B52db00;
case 0x52db04:c.instructions+=6;goto B52db04;
case 0x52db05:c.instructions+=5;goto B52db05;
case 0x52db08:c.instructions+=4;goto B52db08;
case 0x52db0c:c.instructions+=3;goto B52db0c;
case 0x52db0f:c.instructions+=2;goto B52db0f;
case 0x52db10:c.instructions+=1;goto B52db10;
case 0x52db15:goto L52db15;
case 0x52db18:c.instructions+=10;goto B52db18;
case 0x52db1e:c.instructions+=9;goto B52db1e;
case 0x52db21:c.instructions+=8;goto B52db21;
case 0x52db24:c.instructions+=7;goto B52db24;
case 0x52db27:c.instructions+=6;goto B52db27;
case 0x52db28:c.instructions+=5;goto B52db28;
case 0x52db2c:c.instructions+=4;goto B52db2c;
case 0x52db2d:c.instructions+=3;goto B52db2d;
case 0x52db30:c.instructions+=2;goto B52db30;
case 0x52db31:c.instructions+=1;goto B52db31;
case 0x52db36:goto L52db36;
case 0x52db39:c.instructions+=3;goto B52db39;
case 0x52db3a:c.instructions+=2;goto B52db3a;
case 0x52db3d:c.instructions+=1;goto B52db3d;
case 0x52db40:goto L52db40;
case 0x52db41:c.instructions+=9;goto B52db41;
case 0x52db42:c.instructions+=8;goto B52db42;
case 0x52db44:c.instructions+=7;goto B52db44;
case 0x52db4a:c.instructions+=6;goto B52db4a;
case 0x52db4d:c.instructions+=5;goto B52db4d;
case 0x52db4f:c.instructions+=4;goto B52db4f;
case 0x52db51:c.instructions+=3;goto B52db51;
case 0x52db52:c.instructions+=2;goto B52db52;
case 0x52db53:c.instructions+=1;goto B52db53;
case 0x52db55:goto L52db55;
case 0x52db57:c.instructions+=1;goto B52db57;
case 0x52db59:goto L52db59;
case 0x52db5c:c.instructions+=4;goto B52db5c;
case 0x52db60:c.instructions+=3;goto B52db60;
case 0x52db61:c.instructions+=2;goto B52db61;
case 0x52db62:c.instructions+=1;goto B52db62;
case 0x52db67:goto L52db67;
case 0x52db6a:c.instructions+=2;goto B52db6a;
case 0x52db6c:c.instructions+=1;goto B52db6c;
case 0x52db6e:goto L52db6e;
case 0x52db71:c.instructions+=2;goto B52db71;
case 0x52db73:c.instructions+=1;goto B52db73;
case 0x52db75:goto L52db75;
case 0x52db7a:c.instructions+=1;goto B52db7a;
case 0x52db7f:goto L52db7f;
case 0x52db82:c.instructions+=3;goto B52db82;
case 0x52db85:c.instructions+=2;goto B52db85;
case 0x52db87:c.instructions+=1;goto B52db87;
case 0x52db89:goto L52db89;
case 0x52db8c:c.instructions+=2;goto B52db8c;
case 0x52db8e:c.instructions+=1;goto B52db8e;
case 0x52db90:goto L52db90;
case 0x52db92:goto L52db92;
case 0x52db94:c.instructions+=1;goto B52db94;
case 0x52db96:goto L52db96;
case 0x52db99:c.instructions+=1;goto B52db99;
case 0x52db9b:goto L52db9b;
case 0x52db9d:c.instructions+=2;goto B52db9d;
case 0x52dba0:c.instructions+=1;goto B52dba0;
case 0x52dba5:goto L52dba5;
case 0x52dba8:c.instructions+=1;goto B52dba8;
case 0x52dbab:goto L52dbab;
case 0x52dbae:goto L52dbae;
case 0x52dbb1:c.instructions+=2;goto B52dbb1;
case 0x52dbb3:c.instructions+=1;goto B52dbb3;
case 0x52dbb5:goto L52dbb5;
case 0x52dbb8:c.instructions+=2;goto B52dbb8;
case 0x52dbba:c.instructions+=1;goto B52dbba;
case 0x52dbbc:goto L52dbbc;
case 0x52dbc0:goto L52dbc0;
case 0x52dbc5:c.instructions+=1;goto B52dbc5;
case 0x52dbca:goto L52dbca;
case 0x52dbcd:c.instructions+=3;goto B52dbcd;
case 0x52dbd0:c.instructions+=2;goto B52dbd0;
case 0x52dbd2:c.instructions+=1;goto B52dbd2;
case 0x52dbd4:goto L52dbd4;
case 0x52dbd7:c.instructions+=2;goto B52dbd7;
case 0x52dbd9:c.instructions+=1;goto B52dbd9;
case 0x52dbdb:goto L52dbdb;
case 0x52dbdd:goto L52dbdd;
case 0x52dbdf:c.instructions+=1;goto B52dbdf;
case 0x52dbe1:goto L52dbe1;
case 0x52dbe4:c.instructions+=1;goto B52dbe4;
case 0x52dbe6:goto L52dbe6;
case 0x52dbe8:c.instructions+=2;goto B52dbe8;
case 0x52dbeb:c.instructions+=1;goto B52dbeb;
case 0x52dbf0:goto L52dbf0;
case 0x52dbf3:c.instructions+=1;goto B52dbf3;
case 0x52dbf6:goto L52dbf6;
case 0x52dbf9:goto L52dbf9;
case 0x52dbfc:c.instructions+=2;goto B52dbfc;
case 0x52dbfe:c.instructions+=1;goto B52dbfe;
case 0x52dc00:goto L52dc00;
case 0x52dc03:c.instructions+=2;goto B52dc03;
case 0x52dc05:c.instructions+=1;goto B52dc05;
case 0x52dc07:goto L52dc07;
case 0x52dc10:goto L52dc10;
case 0x52dc15:c.instructions+=1;goto B52dc15;
case 0x52dc1a:goto L52dc1a;
case 0x52dc1d:c.instructions+=3;goto B52dc1d;
case 0x52dc20:c.instructions+=2;goto B52dc20;
case 0x52dc22:c.instructions+=1;goto B52dc22;
case 0x52dc24:goto L52dc24;
case 0x52dc27:c.instructions+=2;goto B52dc27;
case 0x52dc29:c.instructions+=1;goto B52dc29;
case 0x52dc2b:goto L52dc2b;
case 0x52dc2d:goto L52dc2d;
case 0x52dc2f:c.instructions+=1;goto B52dc2f;
case 0x52dc31:goto L52dc31;
case 0x52dc34:c.instructions+=1;goto B52dc34;
case 0x52dc36:goto L52dc36;
case 0x52dc38:c.instructions+=2;goto B52dc38;
case 0x52dc3b:c.instructions+=1;goto B52dc3b;
case 0x52dc40:goto L52dc40;
case 0x52dc43:c.instructions+=1;goto B52dc43;
case 0x52dc46:goto L52dc46;
case 0x52dc49:goto L52dc49;
case 0x52dc4c:c.instructions+=2;goto B52dc4c;
case 0x52dc4e:c.instructions+=1;goto B52dc4e;
case 0x52dc50:goto L52dc50;
case 0x52dc53:c.instructions+=2;goto B52dc53;
case 0x52dc55:c.instructions+=1;goto B52dc55;
case 0x52dc57:goto L52dc57;
case 0x52dc60:goto L52dc60;
case 0x52dc65:c.instructions+=1;goto B52dc65;
case 0x52dc6a:goto L52dc6a;
case 0x52dc6d:c.instructions+=3;goto B52dc6d;
case 0x52dc70:c.instructions+=2;goto B52dc70;
case 0x52dc72:c.instructions+=1;goto B52dc72;
case 0x52dc74:goto L52dc74;
case 0x52dc77:c.instructions+=2;goto B52dc77;
case 0x52dc79:c.instructions+=1;goto B52dc79;
case 0x52dc7b:goto L52dc7b;
case 0x52dc7d:goto L52dc7d;
case 0x52dc7f:c.instructions+=1;goto B52dc7f;
case 0x52dc81:goto L52dc81;
case 0x52dc84:c.instructions+=1;goto B52dc84;
case 0x52dc86:goto L52dc86;
case 0x52dc88:c.instructions+=2;goto B52dc88;
case 0x52dc8b:c.instructions+=1;goto B52dc8b;
case 0x52dc90:goto L52dc90;
case 0x52dc93:c.instructions+=1;goto B52dc93;
case 0x52dc96:goto L52dc96;
case 0x52dc99:goto L52dc99;
case 0x52dc9c:c.instructions+=6;goto B52dc9c;
case 0x52dc9d:c.instructions+=5;goto B52dc9d;
case 0x52dc9e:c.instructions+=4;goto B52dc9e;
case 0x52dc9f:c.instructions+=3;goto B52dc9f;
case 0x52dca1:c.instructions+=2;goto B52dca1;
case 0x52dca2:c.instructions+=1;goto B52dca2;
case 0x52dca4:goto L52dca4;
case 0x52dca6:c.instructions+=3;goto B52dca6;
case 0x52dcab:c.instructions+=2;goto B52dcab;
case 0x52dcac:c.instructions+=1;goto B52dcac;
case 0x52dcb1:goto L52dcb1;
case 0x52dcb4:goto L52dcb4;
case 0x52dcc0:goto L52dcc0;
case 0x52dcc3:c.instructions+=11;goto B52dcc3;
case 0x52dcc4:c.instructions+=10;goto B52dcc4;
case 0x52dcc5:c.instructions+=9;goto B52dcc5;
case 0x52dcc6:c.instructions+=8;goto B52dcc6;
case 0x52dcc8:c.instructions+=7;goto B52dcc8;
case 0x52dccb:c.instructions+=6;goto B52dccb;
case 0x52dccf:c.instructions+=5;goto B52dccf;
case 0x52dcd0:c.instructions+=4;goto B52dcd0;
case 0x52dcd4:c.instructions+=3;goto B52dcd4;
case 0x52dcd5:c.instructions+=2;goto B52dcd5;
case 0x52dcd6:c.instructions+=1;goto B52dcd6;
case 0x52dcdb:goto L52dcdb;
case 0x52dcdf:c.instructions+=10;goto B52dcdf;
case 0x52dce5:c.instructions+=9;goto B52dce5;
case 0x52dce8:c.instructions+=8;goto B52dce8;
case 0x52dceb:c.instructions+=7;goto B52dceb;
case 0x52dcee:c.instructions+=6;goto B52dcee;
case 0x52dcf2:c.instructions+=5;goto B52dcf2;
case 0x52dcf6:c.instructions+=4;goto B52dcf6;
case 0x52dcf7:c.instructions+=3;goto B52dcf7;
case 0x52dcf8:c.instructions+=2;goto B52dcf8;
case 0x52dcf9:c.instructions+=1;goto B52dcf9;
case 0x52dcfe:goto L52dcfe;
case 0x52dd01:c.instructions+=10;goto B52dd01;
case 0x52dd04:c.instructions+=9;goto B52dd04;
case 0x52dd07:c.instructions+=8;goto B52dd07;
case 0x52dd0b:c.instructions+=7;goto B52dd0b;
case 0x52dd0f:c.instructions+=6;goto B52dd0f;
case 0x52dd10:c.instructions+=5;goto B52dd10;
case 0x52dd14:c.instructions+=4;goto B52dd14;
case 0x52dd15:c.instructions+=3;goto B52dd15;
case 0x52dd16:c.instructions+=2;goto B52dd16;
case 0x52dd1a:c.instructions+=1;goto B52dd1a;
case 0x52dd1f:goto L52dd1f;
case 0x52dd23:c.instructions+=9;goto B52dd23;
case 0x52dd29:c.instructions+=8;goto B52dd29;
case 0x52dd2d:c.instructions+=7;goto B52dd2d;
case 0x52dd30:c.instructions+=6;goto B52dd30;
case 0x52dd31:c.instructions+=5;goto B52dd31;
case 0x52dd35:c.instructions+=4;goto B52dd35;
case 0x52dd36:c.instructions+=3;goto B52dd36;
case 0x52dd39:c.instructions+=2;goto B52dd39;
case 0x52dd3a:c.instructions+=1;goto B52dd3a;
case 0x52dd3f:goto L52dd3f;
case 0x52dd42:c.instructions+=8;goto B52dd42;
case 0x52dd45:c.instructions+=7;goto B52dd45;
case 0x52dd49:c.instructions+=6;goto B52dd49;
case 0x52dd4a:c.instructions+=5;goto B52dd4a;
case 0x52dd4e:c.instructions+=4;goto B52dd4e;
case 0x52dd4f:c.instructions+=3;goto B52dd4f;
case 0x52dd50:c.instructions+=2;goto B52dd50;
case 0x52dd54:c.instructions+=1;goto B52dd54;
case 0x52dd59:goto L52dd59;
case 0x52dd5d:c.instructions+=5;goto B52dd5d;
case 0x52dd61:c.instructions+=4;goto B52dd61;
case 0x52dd62:c.instructions+=3;goto B52dd62;
case 0x52dd63:c.instructions+=2;goto B52dd63;
case 0x52dd64:c.instructions+=1;goto B52dd64;
case 0x52dd69:goto L52dd69;
case 0x52dd6c:c.instructions+=10;goto B52dd6c;
case 0x52dd6f:c.instructions+=9;goto B52dd6f;
case 0x52dd72:c.instructions+=8;goto B52dd72;
case 0x52dd76:c.instructions+=7;goto B52dd76;
case 0x52dd7a:c.instructions+=6;goto B52dd7a;
case 0x52dd7b:c.instructions+=5;goto B52dd7b;
case 0x52dd7f:c.instructions+=4;goto B52dd7f;
case 0x52dd80:c.instructions+=3;goto B52dd80;
case 0x52dd81:c.instructions+=2;goto B52dd81;
case 0x52dd85:c.instructions+=1;goto B52dd85;
case 0x52dd8a:goto L52dd8a;
case 0x52dd8e:c.instructions+=9;goto B52dd8e;
case 0x52dd94:c.instructions+=8;goto B52dd94;
case 0x52dd98:c.instructions+=7;goto B52dd98;
case 0x52dd9b:c.instructions+=6;goto B52dd9b;
case 0x52dd9c:c.instructions+=5;goto B52dd9c;
case 0x52dda0:c.instructions+=4;goto B52dda0;
case 0x52dda1:c.instructions+=3;goto B52dda1;
case 0x52dda4:c.instructions+=2;goto B52dda4;
case 0x52dda5:c.instructions+=1;goto B52dda5;
case 0x52ddaa:goto L52ddaa;
case 0x52ddad:c.instructions+=8;goto B52ddad;
case 0x52ddb1:c.instructions+=7;goto B52ddb1;
case 0x52ddb4:c.instructions+=6;goto B52ddb4;
case 0x52ddb8:c.instructions+=5;goto B52ddb8;
case 0x52ddb9:c.instructions+=4;goto B52ddb9;
case 0x52ddbd:c.instructions+=3;goto B52ddbd;
case 0x52ddbe:c.instructions+=2;goto B52ddbe;
case 0x52ddbf:c.instructions+=1;goto B52ddbf;
case 0x52ddc4:goto L52ddc4;
case 0x52ddc8:c.instructions+=8;goto B52ddc8;
case 0x52ddcc:c.instructions+=7;goto B52ddcc;
case 0x52ddd0:c.instructions+=6;goto B52ddd0;
case 0x52ddd3:c.instructions+=5;goto B52ddd3;
case 0x52ddd9:c.instructions+=4;goto B52ddd9;
case 0x52dddc:c.instructions+=3;goto B52dddc;
case 0x52dddd:c.instructions+=2;goto B52dddd;
case 0x52ddde:c.instructions+=1;goto B52ddde;
case 0x52dde3:goto L52dde3;
case 0x52dde6:c.instructions+=10;goto B52dde6;
case 0x52ddec:c.instructions+=9;goto B52ddec;
case 0x52ddef:c.instructions+=8;goto B52ddef;
case 0x52ddf3:c.instructions+=7;goto B52ddf3;
case 0x52ddf4:c.instructions+=6;goto B52ddf4;
case 0x52ddf7:c.instructions+=5;goto B52ddf7;
case 0x52ddfb:c.instructions+=4;goto B52ddfb;
case 0x52ddfc:c.instructions+=3;goto B52ddfc;
case 0x52ddfd:c.instructions+=2;goto B52ddfd;
case 0x52de01:c.instructions+=1;goto B52de01;
case 0x52de06:goto L52de06;
case 0x52de09:c.instructions+=10;goto B52de09;
case 0x52de0f:c.instructions+=9;goto B52de0f;
case 0x52de12:c.instructions+=8;goto B52de12;
case 0x52de15:c.instructions+=7;goto B52de15;
case 0x52de16:c.instructions+=6;goto B52de16;
case 0x52de1a:c.instructions+=5;goto B52de1a;
case 0x52de1b:c.instructions+=4;goto B52de1b;
case 0x52de1f:c.instructions+=3;goto B52de1f;
case 0x52de22:c.instructions+=2;goto B52de22;
case 0x52de23:c.instructions+=1;goto B52de23;
case 0x52de28:goto L52de28;
case 0x52de2b:c.instructions+=9;goto B52de2b;
case 0x52de31:c.instructions+=8;goto B52de31;
case 0x52de34:c.instructions+=7;goto B52de34;
case 0x52de35:c.instructions+=6;goto B52de35;
case 0x52de36:c.instructions+=5;goto B52de36;
case 0x52de39:c.instructions+=4;goto B52de39;
case 0x52de3d:c.instructions+=3;goto B52de3d;
case 0x52de40:c.instructions+=2;goto B52de40;
case 0x52de41:c.instructions+=1;goto B52de41;
case 0x52de46:goto L52de46;
case 0x52de49:c.instructions+=3;goto B52de49;
case 0x52de4c:c.instructions+=2;goto B52de4c;
case 0x52de4e:c.instructions+=1;goto B52de4e;
case 0x52de50:goto L52de50;
case 0x52de53:c.instructions+=8;goto B52de53;
case 0x52de56:c.instructions+=7;goto B52de56;
case 0x52de59:c.instructions+=6;goto B52de59;
case 0x52de5d:c.instructions+=5;goto B52de5d;
case 0x52de60:c.instructions+=4;goto B52de60;
case 0x52de63:c.instructions+=3;goto B52de63;
case 0x52de66:c.instructions+=2;goto B52de66;
case 0x52de67:c.instructions+=1;goto B52de67;
case 0x52de6c:goto L52de6c;
case 0x52de6f:goto L52de6f;
case 0x52de70:c.instructions+=4;goto B52de70;
case 0x52de71:c.instructions+=3;goto B52de71;
case 0x52de72:c.instructions+=2;goto B52de72;
case 0x52de75:c.instructions+=1;goto B52de75;
case 0x52de80:goto L52de80;
case 0x52de84:c.instructions+=5;goto B52de84;
case 0x52de85:c.instructions+=4;goto B52de85;
case 0x52de86:c.instructions+=3;goto B52de86;
case 0x52de87:c.instructions+=2;goto B52de87;
case 0x52de89:c.instructions+=1;goto B52de89;
case 0x52de8e:goto L52de8e;
case 0x52de91:c.instructions+=2;goto B52de91;
case 0x52de93:c.instructions+=1;goto B52de93;
case 0x52de95:goto L52de95;
case 0x52de98:c.instructions+=2;goto B52de98;
case 0x52de9a:c.instructions+=1;goto B52de9a;
case 0x52de9c:goto L52de9c;
case 0x52dea0:goto L52dea0;
case 0x52dea5:c.instructions+=1;goto B52dea5;
case 0x52deaa:goto L52deaa;
case 0x52dead:c.instructions+=3;goto B52dead;
case 0x52deb0:c.instructions+=2;goto B52deb0;
case 0x52deb2:c.instructions+=1;goto B52deb2;
case 0x52deb4:goto L52deb4;
case 0x52deb7:c.instructions+=2;goto B52deb7;
case 0x52deb9:c.instructions+=1;goto B52deb9;
case 0x52debb:goto L52debb;
case 0x52debc:c.instructions+=2;goto B52debc;
case 0x52debd:c.instructions+=1;goto B52debd;
case 0x52dec0:goto L52dec0;
case 0x52dec2:c.instructions+=1;goto B52dec2;
case 0x52dec4:goto L52dec4;
case 0x52dec7:c.instructions+=1;goto B52dec7;
case 0x52dec9:goto L52dec9;
case 0x52decb:c.instructions+=2;goto B52decb;
case 0x52dece:c.instructions+=1;goto B52dece;
case 0x52ded3:goto L52ded3;
case 0x52ded6:c.instructions+=1;goto B52ded6;
case 0x52dedd:goto L52dedd;
case 0x52dee4:goto L52dee4;
case 0x52dee5:c.instructions+=2;goto B52dee5;
case 0x52dee6:c.instructions+=1;goto B52dee6;
case 0x52def0:goto L52def0;
case 0x52def3:c.instructions+=9;goto B52def3;
case 0x52def4:c.instructions+=8;goto B52def4;
case 0x52def6:c.instructions+=7;goto B52def6;
case 0x52def9:c.instructions+=6;goto B52def9;
case 0x52defc:c.instructions+=5;goto B52defc;
case 0x52deff:c.instructions+=4;goto B52deff;
case 0x52df00:c.instructions+=3;goto B52df00;
case 0x52df01:c.instructions+=2;goto B52df01;
case 0x52df02:c.instructions+=1;goto B52df02;
case 0x52df07:goto L52df07;
case 0x52df0a:c.instructions+=13;goto B52df0a;
case 0x52df0d:c.instructions+=12;goto B52df0d;
case 0x52df10:c.instructions+=11;goto B52df10;
case 0x52df16:c.instructions+=10;goto B52df16;
case 0x52df1a:c.instructions+=9;goto B52df1a;
case 0x52df1b:c.instructions+=8;goto B52df1b;
case 0x52df1d:c.instructions+=7;goto B52df1d;
case 0x52df21:c.instructions+=6;goto B52df21;
case 0x52df25:c.instructions+=5;goto B52df25;
case 0x52df28:c.instructions+=4;goto B52df28;
case 0x52df29:c.instructions+=3;goto B52df29;
case 0x52df2d:c.instructions+=2;goto B52df2d;
case 0x52df2e:c.instructions+=1;goto B52df2e;
case 0x52df33:goto L52df33;
case 0x52df37:c.instructions+=10;goto B52df37;
case 0x52df3d:c.instructions+=9;goto B52df3d;
case 0x52df41:c.instructions+=8;goto B52df41;
case 0x52df44:c.instructions+=7;goto B52df44;
case 0x52df47:c.instructions+=6;goto B52df47;
case 0x52df4b:c.instructions+=5;goto B52df4b;
case 0x52df4c:c.instructions+=4;goto B52df4c;
case 0x52df4d:c.instructions+=3;goto B52df4d;
case 0x52df50:c.instructions+=2;goto B52df50;
case 0x52df51:c.instructions+=1;goto B52df51;
case 0x52df56:goto L52df56;
case 0x52df59:c.instructions+=3;goto B52df59;
case 0x52df5c:c.instructions+=2;goto B52df5c;
case 0x52df5f:c.instructions+=1;goto B52df5f;
case 0x52df62:goto L52df62;
case 0x52df65:c.instructions+=6;goto B52df65;
case 0x52df69:c.instructions+=5;goto B52df69;
case 0x52df6a:c.instructions+=4;goto B52df6a;
case 0x52df6e:c.instructions+=3;goto B52df6e;
case 0x52df6f:c.instructions+=2;goto B52df6f;
case 0x52df70:c.instructions+=1;goto B52df70;
case 0x52df75:goto L52df75;
case 0x52df78:c.instructions+=11;goto B52df78;
case 0x52df7e:c.instructions+=10;goto B52df7e;
case 0x52df81:c.instructions+=9;goto B52df81;
case 0x52df84:c.instructions+=8;goto B52df84;
case 0x52df87:c.instructions+=7;goto B52df87;
case 0x52df8b:c.instructions+=6;goto B52df8b;
case 0x52df8c:c.instructions+=5;goto B52df8c;
case 0x52df8d:c.instructions+=4;goto B52df8d;
case 0x52df91:c.instructions+=3;goto B52df91;
case 0x52df94:c.instructions+=2;goto B52df94;
case 0x52df95:c.instructions+=1;goto B52df95;
case 0x52df9a:goto L52df9a;
case 0x52df9d:c.instructions+=10;goto B52df9d;
case 0x52dfa3:c.instructions+=9;goto B52dfa3;
case 0x52dfa6:c.instructions+=8;goto B52dfa6;
case 0x52dfa9:c.instructions+=7;goto B52dfa9;
case 0x52dfaa:c.instructions+=6;goto B52dfaa;
case 0x52dfae:c.instructions+=5;goto B52dfae;
case 0x52dfaf:c.instructions+=4;goto B52dfaf;
case 0x52dfb2:c.instructions+=3;goto B52dfb2;
case 0x52dfb5:c.instructions+=2;goto B52dfb5;
case 0x52dfb6:c.instructions+=1;goto B52dfb6;
case 0x52dfbb:goto L52dfbb;
case 0x52dfbe:c.instructions+=3;goto B52dfbe;
case 0x52dfc1:c.instructions+=2;goto B52dfc1;
case 0x52dfc3:c.instructions+=1;goto B52dfc3;
case 0x52dfc5:goto L52dfc5;
case 0x52dfc8:c.instructions+=8;goto B52dfc8;
case 0x52dfcb:c.instructions+=7;goto B52dfcb;
case 0x52dfce:c.instructions+=6;goto B52dfce;
case 0x52dfd2:c.instructions+=5;goto B52dfd2;
case 0x52dfd5:c.instructions+=4;goto B52dfd5;
case 0x52dfd8:c.instructions+=3;goto B52dfd8;
case 0x52dfdb:c.instructions+=2;goto B52dfdb;
case 0x52dfdc:c.instructions+=1;goto B52dfdc;
case 0x52dfe1:goto L52dfe1;
case 0x52dfe4:goto L52dfe4;
case 0x52dfe5:c.instructions+=2;goto B52dfe5;
case 0x52dfe8:c.instructions+=1;goto B52dfe8;
case 0x52dff0:goto L52dff0;
case 0x52dff1:c.instructions+=6;goto B52dff1;
case 0x52dff2:c.instructions+=5;goto B52dff2;
case 0x52dff4:c.instructions+=4;goto B52dff4;
case 0x52dffa:c.instructions+=3;goto B52dffa;
case 0x52dffd:c.instructions+=2;goto B52dffd;
case 0x52dfff:c.instructions+=1;goto B52dfff;
default:missing_instruction(c.pc);}
B52d000:L52d000:{c.instructions+=2;NFSU2_TR(0x52d000);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52d008:{NFSU2_TR(0x52d008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d00dull));
TAIL_STATIC(0x504880u,504);
}
B52d00d:L52d00d:{c.instructions+=4;NFSU2_TR(0x52d00d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d011:{NFSU2_TR(0x52d011);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d018:{NFSU2_TR(0x52d018);
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
B52d01b:{NFSU2_TR(0x52d01b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d020:L52d020:{c.instructions+=4;NFSU2_TR(0x52d020);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d024:{NFSU2_TR(0x52d024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52d027:{NFSU2_TR(0x52d027);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d029:{NFSU2_TR(0x52d029);
if(r1(R+518)){{goto L52d07f;}}
}
B52d02b:L52d02b:{c.instructions+=4;NFSU2_TR(0x52d02b);
__builtin_memmove((R+4),(R+16),4);
}
B52d02f:{NFSU2_TR(0x52d02f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d030:{NFSU2_TR(0x52d030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d031:{NFSU2_TR(0x52d031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d036ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B52d036:L52d036:{c.instructions+=3;NFSU2_TR(0x52d036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52d039:{NFSU2_TR(0x52d039);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d03b:{NFSU2_TR(0x52d03b);
if(r1(R+518)){{goto L52d07f;}}
}
B52d03d:L52d03d:{c.instructions+=5;NFSU2_TR(0x52d03d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d041:{NFSU2_TR(0x52d041);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52d045:{NFSU2_TR(0x52d045);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52d047:{NFSU2_TR(0x52d047);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d04a:{NFSU2_TR(0x52d04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d07f;}}
}
B52d04c:L52d04c:{c.instructions+=5;NFSU2_TR(0x52d04c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d050:{NFSU2_TR(0x52d050);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52d054:{NFSU2_TR(0x52d054);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52d056:{NFSU2_TR(0x52d056);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d059:{NFSU2_TR(0x52d059);
if(r1(R+514)){{goto L52d07f;}}
}
B52d05b:L52d05b:{c.instructions+=5;NFSU2_TR(0x52d05b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d05f:{NFSU2_TR(0x52d05f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52d063:{NFSU2_TR(0x52d063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52d065:{NFSU2_TR(0x52d065);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d068:{NFSU2_TR(0x52d068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d07f;}}
}
B52d06a:L52d06a:{c.instructions+=5;NFSU2_TR(0x52d06a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d06e:{NFSU2_TR(0x52d06e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52d072:{NFSU2_TR(0x52d072);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52d074:{NFSU2_TR(0x52d074);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d077:{NFSU2_TR(0x52d077);
if(r1(R+514)){{goto L52d07f;}}
}
B52d079:L52d079:{c.instructions+=3;NFSU2_TR(0x52d079);
w1(R+0,u8(0x1ull));
}
B52d07b:{NFSU2_TR(0x52d07b);
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
B52d07e:{NFSU2_TR(0x52d07e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d07f:L52d07f:{c.instructions+=3;NFSU2_TR(0x52d07f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52d081:{NFSU2_TR(0x52d081);
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
B52d084:{NFSU2_TR(0x52d084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d090:L52d090:{c.instructions+=11;NFSU2_TR(0x52d090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52d093:{NFSU2_TR(0x52d093);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d099:{NFSU2_TR(0x52d099);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B52d09e:{NFSU2_TR(0x52d09e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d0a0:{NFSU2_TR(0x52d0a0);
w4(R+0,u32(m1(0x8763f1)));
}
B52d0a7:{NFSU2_TR(0x52d0a7);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d0ad:{NFSU2_TR(0x52d0ad);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d0b1:{NFSU2_TR(0x52d0b1);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d0b7:{NFSU2_TR(0x52d0b7);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d0bd:{NFSU2_TR(0x52d0bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d0c1:{NFSU2_TR(0x52d0c1);
if(r1(R+518)){{goto L52d0ca;}}
}
B52d0c3:L52d0c3:{c.instructions+=1;NFSU2_TR(0x52d0c3);
w4(R+0,u32(m1(0x8763f4)));
}
B52d0ca:L52d0ca:{c.instructions+=2;NFSU2_TR(0x52d0ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d0cc:{NFSU2_TR(0x52d0cc);
if(r1(R+518)){{goto L52d0ef;}}
}
B52d0ce:L52d0ce:{c.instructions+=7;NFSU2_TR(0x52d0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d0d2:{NFSU2_TR(0x52d0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52d0d6:{NFSU2_TR(0x52d0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d0da:{NFSU2_TR(0x52d0da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d0db:{NFSU2_TR(0x52d0db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d0dc:{NFSU2_TR(0x52d0dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d0dd:{NFSU2_TR(0x52d0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d0e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52d0e2:L52d0e2:{c.instructions+=3;NFSU2_TR(0x52d0e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d0e5:{NFSU2_TR(0x52d0e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d0e7:{NFSU2_TR(0x52d0e7);
if(r1(R+518)){{goto L52d0ef;}}
}
B52d0e9:L52d0e9:{c.instructions+=3;NFSU2_TR(0x52d0e9);
w1(R+0,u8(0x1ull));
}
B52d0eb:{NFSU2_TR(0x52d0eb);
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
B52d0ee:{NFSU2_TR(0x52d0ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d0ef:L52d0ef:{c.instructions+=3;NFSU2_TR(0x52d0ef);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52d0f1:{NFSU2_TR(0x52d0f1);
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
B52d0f4:{NFSU2_TR(0x52d0f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d100:L52d100:{c.instructions+=11;NFSU2_TR(0x52d100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52d103:{NFSU2_TR(0x52d103);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d109:{NFSU2_TR(0x52d109);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B52d10e:{NFSU2_TR(0x52d10e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d110:{NFSU2_TR(0x52d110);
w4(R+0,u32(m1(0x8763f2)));
}
B52d117:{NFSU2_TR(0x52d117);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d11d:{NFSU2_TR(0x52d11d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d121:{NFSU2_TR(0x52d121);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d127:{NFSU2_TR(0x52d127);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d12d:{NFSU2_TR(0x52d12d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d131:{NFSU2_TR(0x52d131);
if(r1(R+518)){{goto L52d13a;}}
}
B52d133:L52d133:{c.instructions+=1;NFSU2_TR(0x52d133);
w4(R+0,u32(m1(0x8763f5)));
}
B52d13a:L52d13a:{c.instructions+=2;NFSU2_TR(0x52d13a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d13c:{NFSU2_TR(0x52d13c);
if(r1(R+518)){{goto L52d15f;}}
}
B52d13e:L52d13e:{c.instructions+=7;NFSU2_TR(0x52d13e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d142:{NFSU2_TR(0x52d142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52d146:{NFSU2_TR(0x52d146);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d14a:{NFSU2_TR(0x52d14a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d14b:{NFSU2_TR(0x52d14b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d14c:{NFSU2_TR(0x52d14c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d14d:{NFSU2_TR(0x52d14d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d152ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52d152:L52d152:{c.instructions+=3;NFSU2_TR(0x52d152);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d155:{NFSU2_TR(0x52d155);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d157:{NFSU2_TR(0x52d157);
if(r1(R+518)){{goto L52d15f;}}
}
B52d159:L52d159:{c.instructions+=3;NFSU2_TR(0x52d159);
w1(R+0,u8(0x1ull));
}
B52d15b:{NFSU2_TR(0x52d15b);
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
B52d15e:{NFSU2_TR(0x52d15e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d15f:L52d15f:{c.instructions+=3;NFSU2_TR(0x52d15f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52d161:{NFSU2_TR(0x52d161);
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
B52d164:{NFSU2_TR(0x52d164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d170:L52d170:{c.instructions+=3;NFSU2_TR(0x52d170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d174:{NFSU2_TR(0x52d174);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x40000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x40000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d179:{NFSU2_TR(0x52d179);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d225;}}
}
B52d17f:L52d17f:{c.instructions+=1;NFSU2_TR(0x52d17f);
if(r1(R+518)){{goto L52d29c;}}
}
B52d185:L52d185:{c.instructions+=2;NFSU2_TR(0x52d185);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d18a:{NFSU2_TR(0x52d18a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d1b0;}}
}
B52d18c:L52d18c:{c.instructions+=1;NFSU2_TR(0x52d18c);
if(r1(R+518)){{goto L52d1a8;}}
}
B52d18e:L52d18e:{c.instructions+=3;NFSU2_TR(0x52d18e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52d191:{NFSU2_TR(0x52d191);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d194:{NFSU2_TR(0x52d194);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d297;}}
}
B52d19a:L52d19a:{c.instructions+=2;NFSU2_TR(0x52d19a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52d2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B52d1a1:{NFSU2_TR(0x52d1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52d2a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52d1a8:L52d1a8:{c.instructions+=2;NFSU2_TR(0x52d1a8);
w4(R+0,u32(0xc407210ull));
}
B52d1ad:{NFSU2_TR(0x52d1ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d1b0:L52d1b0:{c.instructions+=2;NFSU2_TR(0x52d1b0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d1b5:{NFSU2_TR(0x52d1b5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d217;}}
}
B52d1b7:L52d1b7:{c.instructions+=1;NFSU2_TR(0x52d1b7);
if(r1(R+518)){{goto L52d29c;}}
}
B52d1bd:L52d1bd:{c.instructions+=2;NFSU2_TR(0x52d1bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d1c2:{NFSU2_TR(0x52d1c2);
if(r1(R+518)){{goto L52d1f9;}}
}
B52d1c4:L52d1c4:{c.instructions+=2;NFSU2_TR(0x52d1c4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d1c9:{NFSU2_TR(0x52d1c9);
if(r1(R+518)){{goto L52d1f1;}}
}
B52d1cb:L52d1cb:{c.instructions+=2;NFSU2_TR(0x52d1cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d1d0:{NFSU2_TR(0x52d1d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d297;}}
}
B52d1d6:L52d1d6:{c.instructions+=2;NFSU2_TR(0x52d1d6);
u8 U[4];
w4(U+0,u32(0x799bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d1db:{NFSU2_TR(0x52d1db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d1e0ull));
TAIL_STATIC(0x52cf60u,52c);
}
B52d1e0:L52d1e0:{c.instructions+=6;NFSU2_TR(0x52d1e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52d1e3:{NFSU2_TR(0x52d1e3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B52d1e5:{NFSU2_TR(0x52d1e5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B52d1e7:{NFSU2_TR(0x52d1e7);
w4(R+0,u32(0-u32(r4(R+0))));
}
B52d1e9:{NFSU2_TR(0x52d1e9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xc519bfbfull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xc519bfbfull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc519bfbfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d1ee:{NFSU2_TR(0x52d1ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d1f1:L52d1f1:{c.instructions+=2;NFSU2_TR(0x52d1f1);
w4(R+0,u32(0x911ab364ull));
}
B52d1f6:{NFSU2_TR(0x52d1f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d1f9:L52d1f9:{c.instructions+=2;NFSU2_TR(0x52d1f9);
u8 U[4];
w4(U+0,u32(0x79b92cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d1fe:{NFSU2_TR(0x52d1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d203ull));
TAIL_STATIC(0x52cf60u,52c);
}
B52d203:L52d203:{c.instructions+=6;NFSU2_TR(0x52d203);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52d206:{NFSU2_TR(0x52d206);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B52d208:{NFSU2_TR(0x52d208);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B52d20a:{NFSU2_TR(0x52d20a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x33ff0c5cull))));
}
B52d20f:{NFSU2_TR(0x52d20f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x911ab364ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x911ab364ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d214:{NFSU2_TR(0x52d214);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d217:L52d217:{c.instructions+=2;NFSU2_TR(0x52d217);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d21c:{NFSU2_TR(0x52d21c);
if(r1(R+518)){{goto L52d29c;}}
}
B52d21e:L52d21e:{c.instructions+=2;NFSU2_TR(0x52d21e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d223:{NFSU2_TR(0x52d223);
{goto L52d295;}
}
B52d225:L52d225:{c.instructions+=2;NFSU2_TR(0x52d225);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d22a:{NFSU2_TR(0x52d22a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d26a;}}
}
B52d22c:L52d22c:{c.instructions+=1;NFSU2_TR(0x52d22c);
if(r1(R+518)){{goto L52d281;}}
}
B52d22e:L52d22e:{c.instructions+=2;NFSU2_TR(0x52d22e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d233:{NFSU2_TR(0x52d233);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d25c;}}
}
B52d235:L52d235:{c.instructions+=1;NFSU2_TR(0x52d235);
if(r1(R+518)){{goto L52d254;}}
}
B52d237:L52d237:{c.instructions+=2;NFSU2_TR(0x52d237);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d23c:{NFSU2_TR(0x52d23c);
if(r1(R+518)){{goto L52d24c;}}
}
B52d23e:L52d23e:{c.instructions+=2;NFSU2_TR(0x52d23e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x100000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d243:{NFSU2_TR(0x52d243);
if(r1(R+518)){{goto L52d24c;}}
}
B52d245:L52d245:{c.instructions+=2;NFSU2_TR(0x52d245);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d24a:{NFSU2_TR(0x52d24a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d297;}}
}
B52d24c:L52d24c:{c.instructions+=2;NFSU2_TR(0x52d24c);
w4(R+0,u32(0xc539a4b0ull));
}
B52d251:{NFSU2_TR(0x52d251);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d254:L52d254:{c.instructions+=2;NFSU2_TR(0x52d254);
w4(R+0,u32(0xc519bfc3ull));
}
B52d259:{NFSU2_TR(0x52d259);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d25c:L52d25c:{c.instructions+=2;NFSU2_TR(0x52d25c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x800000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x800000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x800000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d261:{NFSU2_TR(0x52d261);
if(r1(R+518)){{goto L52d29c;}}
}
B52d263:L52d263:{c.instructions+=2;NFSU2_TR(0x52d263);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d268:{NFSU2_TR(0x52d268);
{goto L52d295;}
}
B52d26a:L52d26a:{c.instructions+=2;NFSU2_TR(0x52d26a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d26f:{NFSU2_TR(0x52d26f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52d289;}}
}
B52d271:L52d271:{c.instructions+=1;NFSU2_TR(0x52d271);
if(r1(R+518)){{goto L52d29c;}}
}
B52d273:L52d273:{c.instructions+=2;NFSU2_TR(0x52d273);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d278:{NFSU2_TR(0x52d278);
if(r1(R+518)){{goto L52d281;}}
}
B52d27a:L52d27a:{c.instructions+=2;NFSU2_TR(0x52d27a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d27f:{NFSU2_TR(0x52d27f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d297;}}
}
B52d281:L52d281:{c.instructions+=2;NFSU2_TR(0x52d281);
w4(R+0,u32(0x406415e3ull));
}
B52d286:{NFSU2_TR(0x52d286);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d289:L52d289:{c.instructions+=2;NFSU2_TR(0x52d289);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x20000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x20000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d28e:{NFSU2_TR(0x52d28e);
if(r1(R+518)){{goto L52d29c;}}
}
B52d290:L52d290:{c.instructions+=1;NFSU2_TR(0x52d290);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x40000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d295:L52d295:{c.instructions+=1;NFSU2_TR(0x52d295);
if(r1(R+518)){{goto L52d29c;}}
}
B52d297:L52d297:{c.instructions+=2;NFSU2_TR(0x52d297);
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
B52d299:{NFSU2_TR(0x52d299);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d29c:L52d29c:{c.instructions+=2;NFSU2_TR(0x52d29c);
w4(R+0,u32(0xc519bfc0ull));
}
B52d2a1:{NFSU2_TR(0x52d2a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d330:L52d330:{c.instructions+=4;NFSU2_TR(0x52d330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d334:{NFSU2_TR(0x52d334);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d337:{NFSU2_TR(0x52d337);
w4(R+0,u32(0x9f1b2c7aull));
}
B52d33c:{NFSU2_TR(0x52d33c);
if(r1(R+518)){{goto L52d346;}}
}
B52d33e:L52d33e:{c.instructions+=2;NFSU2_TR(0x52d33e);
w4(R+0,u32(0x5e0ab884ull));
}
B52d343:{NFSU2_TR(0x52d343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d346:L52d346:{c.instructions+=2;NFSU2_TR(0x52d346);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d349:{NFSU2_TR(0x52d349);
if(r1(R+518)){{goto L52d353;}}
}
B52d34b:L52d34b:{c.instructions+=2;NFSU2_TR(0x52d34b);
w4(R+0,u32(0x545c5292ull));
}
B52d350:{NFSU2_TR(0x52d350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d353:L52d353:{c.instructions+=2;NFSU2_TR(0x52d353);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d356:{NFSU2_TR(0x52d356);
if(r1(R+518)){{goto L52d360;}}
}
B52d358:L52d358:{c.instructions+=2;NFSU2_TR(0x52d358);
w4(R+0,u32(0x1c101778ull));
}
B52d35d:{NFSU2_TR(0x52d35d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d360:L52d360:{c.instructions+=2;NFSU2_TR(0x52d360);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d363:{NFSU2_TR(0x52d363);
if(r1(R+518)){{goto L52d36d;}}
}
B52d365:L52d365:{c.instructions+=2;NFSU2_TR(0x52d365);
w4(R+0,u32(0x5f52d4fdull));
}
B52d36a:{NFSU2_TR(0x52d36a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d36d:L52d36d:{c.instructions+=2;NFSU2_TR(0x52d36d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d370:{NFSU2_TR(0x52d370);
if(r1(R+518)){{goto L52d37a;}}
}
B52d372:L52d372:{c.instructions+=2;NFSU2_TR(0x52d372);
w4(R+0,u32(0x7eff16c2ull));
}
B52d377:{NFSU2_TR(0x52d377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d37a:L52d37a:{c.instructions+=2;NFSU2_TR(0x52d37a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d37d:{NFSU2_TR(0x52d37d);
if(r1(R+518)){{goto L52d387;}}
}
B52d37f:L52d37f:{c.instructions+=2;NFSU2_TR(0x52d37f);
w4(R+0,u32(0x9e067677ull));
}
B52d384:{NFSU2_TR(0x52d384);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d387:L52d387:{c.instructions+=2;NFSU2_TR(0x52d387);
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
B52d389:{NFSU2_TR(0x52d389);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L52d393;}}
}
B52d38b:L52d38b:{c.instructions+=2;NFSU2_TR(0x52d38b);
w4(R+0,u32(0x5ee1c847ull));
}
B52d390:{NFSU2_TR(0x52d390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d393:L52d393:{c.instructions+=2;NFSU2_TR(0x52d393);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d396:{NFSU2_TR(0x52d396);
if(r1(R+518)){{goto L52d3a0;}}
}
B52d398:L52d398:{c.instructions+=2;NFSU2_TR(0x52d398);
w4(R+0,u32(0xe24b4bd5ull));
}
B52d39d:{NFSU2_TR(0x52d39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3a0:L52d3a0:{c.instructions+=2;NFSU2_TR(0x52d3a0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3a6:{NFSU2_TR(0x52d3a6);
if(r1(R+518)){{goto L52d3b0;}}
}
B52d3a8:L52d3a8:{c.instructions+=2;NFSU2_TR(0x52d3a8);
w4(R+0,u32(0xdaac95f9ull));
}
B52d3ad:{NFSU2_TR(0x52d3ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3b0:L52d3b0:{c.instructions+=2;NFSU2_TR(0x52d3b0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3b6:{NFSU2_TR(0x52d3b6);
if(r1(R+518)){{goto L52d3c0;}}
}
B52d3b8:L52d3b8:{c.instructions+=2;NFSU2_TR(0x52d3b8);
w4(R+0,u32(0x9db54a80ull));
}
B52d3bd:{NFSU2_TR(0x52d3bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3c0:L52d3c0:{c.instructions+=2;NFSU2_TR(0x52d3c0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3c6:{NFSU2_TR(0x52d3c6);
if(r1(R+518)){{goto L52d3d0;}}
}
B52d3c8:L52d3c8:{c.instructions+=2;NFSU2_TR(0x52d3c8);
w4(R+0,u32(0xc6b7eb02ull));
}
B52d3cd:{NFSU2_TR(0x52d3cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3d0:L52d3d0:{c.instructions+=2;NFSU2_TR(0x52d3d0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x10000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3d6:{NFSU2_TR(0x52d3d6);
if(r1(R+518)){{goto L52d3e0;}}
}
B52d3d8:L52d3d8:{c.instructions+=2;NFSU2_TR(0x52d3d8);
w4(R+0,u32(0x43512519ull));
}
B52d3dd:{NFSU2_TR(0x52d3dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3e0:L52d3e0:{c.instructions+=2;NFSU2_TR(0x52d3e0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x20000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3e6:{NFSU2_TR(0x52d3e6);
if(r1(R+518)){{goto L52d3f0;}}
}
B52d3e8:L52d3e8:{c.instructions+=2;NFSU2_TR(0x52d3e8);
w4(R+0,u32(0x11159f62ull));
}
B52d3ed:{NFSU2_TR(0x52d3ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d3f0:L52d3f0:{c.instructions+=2;NFSU2_TR(0x52d3f0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x40000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d3f6:{NFSU2_TR(0x52d3f6);
if(r1(R+518)){{goto L52d400;}}
}
B52d3f8:L52d3f8:{c.instructions+=2;NFSU2_TR(0x52d3f8);
w4(R+0,u32(0x80af4fc7ull));
}
B52d3fd:{NFSU2_TR(0x52d3fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d400:L52d400:{c.instructions+=2;NFSU2_TR(0x52d400);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d403:{NFSU2_TR(0x52d403);
if(r1(R+518)){{goto L52d40d;}}
}
B52d405:L52d405:{c.instructions+=2;NFSU2_TR(0x52d405);
w4(R+0,u32(0x18127bdull));
}
B52d40a:{NFSU2_TR(0x52d40a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d40d:L52d40d:{c.instructions+=2;NFSU2_TR(0x52d40d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d410:{NFSU2_TR(0x52d410);
if(r1(R+518)){{goto L52d41a;}}
}
B52d412:L52d412:{c.instructions+=2;NFSU2_TR(0x52d412);
w4(R+0,u32(0x1c0787e6ull));
}
B52d417:{NFSU2_TR(0x52d417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d41a:L52d41a:{c.instructions+=2;NFSU2_TR(0x52d41a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d420:{NFSU2_TR(0x52d420);
if(r1(R+518)){{goto L52d42a;}}
}
B52d422:L52d422:{c.instructions+=2;NFSU2_TR(0x52d422);
w4(R+0,u32(0xefddc126ull));
}
B52d427:{NFSU2_TR(0x52d427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d42a:L52d42a:{c.instructions+=2;NFSU2_TR(0x52d42a);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d42d:{NFSU2_TR(0x52d42d);
if(r1(R+518)){{goto L52d445;}}
}
B52d42f:L52d42f:{c.instructions+=6;NFSU2_TR(0x52d42f);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B52d434:{NFSU2_TR(0x52d434);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B52d436:{NFSU2_TR(0x52d436);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B52d438:{NFSU2_TR(0x52d438);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf5b91808ull))));
}
B52d43d:{NFSU2_TR(0x52d43d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xb7d0d273ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xb7d0d273ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb7d0d273ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d442:{NFSU2_TR(0x52d442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d445:L52d445:{c.instructions+=2;NFSU2_TR(0x52d445);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d448:{NFSU2_TR(0x52d448);
if(r1(R+518)){{goto L52d452;}}
}
B52d44a:L52d44a:{c.instructions+=2;NFSU2_TR(0x52d44a);
w4(R+0,u32(0x8d5abf58ull));
}
B52d44f:{NFSU2_TR(0x52d44f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d452:L52d452:{c.instructions+=2;NFSU2_TR(0x52d452);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d455:{NFSU2_TR(0x52d455);
if(r1(R+518)){{goto L52d45f;}}
}
B52d457:L52d457:{c.instructions+=2;NFSU2_TR(0x52d457);
w4(R+0,u32(0x4100ada8ull));
}
B52d45c:{NFSU2_TR(0x52d45c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d45f:L52d45f:{c.instructions+=2;NFSU2_TR(0x52d45f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52d462:{NFSU2_TR(0x52d462);
if(r1(R+518)){{goto L52d46c;}}
}
B52d464:L52d464:{c.instructions+=2;NFSU2_TR(0x52d464);
w4(R+0,u32(0xd0efbea3ull));
}
B52d469:{NFSU2_TR(0x52d469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d46c:L52d46c:{c.instructions+=2;NFSU2_TR(0x52d46c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d472:{NFSU2_TR(0x52d472);
if(r1(R+518)){{goto L52d47c;}}
}
B52d474:L52d474:{c.instructions+=2;NFSU2_TR(0x52d474);
w4(R+0,u32(0xba0e1020ull));
}
B52d479:{NFSU2_TR(0x52d479);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d47c:L52d47c:{c.instructions+=2;NFSU2_TR(0x52d47c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d482:{NFSU2_TR(0x52d482);
if(r1(R+518)){{goto L52d48c;}}
}
B52d484:L52d484:{c.instructions+=2;NFSU2_TR(0x52d484);
w4(R+0,u32(0xeaa1d5dfull));
}
B52d489:{NFSU2_TR(0x52d489);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d48c:L52d48c:{c.instructions+=2;NFSU2_TR(0x52d48c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x200000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d492:{NFSU2_TR(0x52d492);
if(r1(R+518)){{goto L52d49c;}}
}
B52d494:L52d494:{c.instructions+=2;NFSU2_TR(0x52d494);
w4(R+0,u32(0x3e9431dcull));
}
B52d499:{NFSU2_TR(0x52d499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d49c:L52d49c:{c.instructions+=2;NFSU2_TR(0x52d49c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d4a2:{NFSU2_TR(0x52d4a2);
if(r1(R+518)){{goto L52d4ac;}}
}
B52d4a4:L52d4a4:{c.instructions+=2;NFSU2_TR(0x52d4a4);
w4(R+0,u32(0x80833fc2ull));
}
B52d4a9:{NFSU2_TR(0x52d4a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d4ac:L52d4ac:{c.instructions+=2;NFSU2_TR(0x52d4ac);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d4b2:{NFSU2_TR(0x52d4b2);
if(r1(R+518)){{goto L52d4bc;}}
}
B52d4b4:L52d4b4:{c.instructions+=2;NFSU2_TR(0x52d4b4);
w4(R+0,u32(0xcbbcb1c5ull));
}
B52d4b9:{NFSU2_TR(0x52d4b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d4bc:L52d4bc:{c.instructions+=2;NFSU2_TR(0x52d4bc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x800000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d4c2:{NFSU2_TR(0x52d4c2);
if(r1(R+518)){{goto L52d4df;}}
}
B52d4c4:L52d4c4:{c.instructions+=2;NFSU2_TR(0x52d4c4);
u8 U[4];
w4(U+0,u32(0x799c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d4c9:{NFSU2_TR(0x52d4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d4ceull));
TAIL_STATIC(0x52cf60u,52c);
}
B52d4ce:L52d4ce:{c.instructions+=5;NFSU2_TR(0x52d4ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52d4d1:{NFSU2_TR(0x52d4d1);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B52d4d3:{NFSU2_TR(0x52d4d3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B52d4d5:{NFSU2_TR(0x52d4d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x6dcbb8e6ull))));
}
B52d4da:{NFSU2_TR(0x52d4da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x889bacb6ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x889bacb6ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x889bacb6ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52d4df:L52d4df:{c.instructions+=1;NFSU2_TR(0x52d4df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d4f0:L52d4f0:{c.instructions+=15;NFSU2_TR(0x52d4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52d4f3:{NFSU2_TR(0x52d4f3);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d4f9:{NFSU2_TR(0x52d4f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d4fa:{NFSU2_TR(0x52d4fa);
__builtin_memmove((R+20),(R+4),4);
}
B52d4fc:{NFSU2_TR(0x52d4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d4ff:{NFSU2_TR(0x52d4ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d501:{NFSU2_TR(0x52d501);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d507:{NFSU2_TR(0x52d507);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d508:{NFSU2_TR(0x52d508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d509:{NFSU2_TR(0x52d509);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d50d:{NFSU2_TR(0x52d50d);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52d513:{NFSU2_TR(0x52d513);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d517:{NFSU2_TR(0x52d517);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d51d:{NFSU2_TR(0x52d51d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d521:{NFSU2_TR(0x52d521);
if(r1(R+518)){{goto L52d528;}}
}
B52d523:L52d523:{c.instructions+=2;NFSU2_TR(0x52d523);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d526:{NFSU2_TR(0x52d526);
{goto L52d530;}
}
B52d528:L52d528:{c.instructions+=2;NFSU2_TR(0x52d528);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52d52a:{NFSU2_TR(0x52d52a);
__builtin_memmove((R+12),(R+12),4);
}
B52d530:L52d530:{c.instructions+=3;NFSU2_TR(0x52d530);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52d533:{NFSU2_TR(0x52d533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d535:{NFSU2_TR(0x52d535);
if(r1(R+518)){{goto L52d53c;}}
}
B52d537:L52d537:{c.instructions+=2;NFSU2_TR(0x52d537);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52d53a:{NFSU2_TR(0x52d53a);
{goto L52d53e;}
}
B52d53c:L52d53c:{c.instructions+=1;NFSU2_TR(0x52d53c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52d53e:L52d53e:{c.instructions+=2;NFSU2_TR(0x52d53e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52d540:{NFSU2_TR(0x52d540);
if(r1(R+518)){{goto L52d602;}}
}
B52d546:L52d546:{c.instructions+=3;NFSU2_TR(0x52d546);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52d549:{NFSU2_TR(0x52d549);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d54b:{NFSU2_TR(0x52d54b);
if(r1(R+518)){{goto L52d5ef;}}
}
B52d551:L52d551:{c.instructions+=7;NFSU2_TR(0x52d551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d554:{NFSU2_TR(0x52d554);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d558:{NFSU2_TR(0x52d558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d559:{NFSU2_TR(0x52d559);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d55d:{NFSU2_TR(0x52d55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d55e:{NFSU2_TR(0x52d55e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d55f:{NFSU2_TR(0x52d55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d564ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52d564:L52d564:{c.instructions+=3;NFSU2_TR(0x52d564);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d567:{NFSU2_TR(0x52d567);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d569:{NFSU2_TR(0x52d569);
if(r1(R+518)){{goto L52d5a6;}}
}
B52d56b:L52d56b:{c.instructions+=3;NFSU2_TR(0x52d56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d56e:{NFSU2_TR(0x52d56e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d570:{NFSU2_TR(0x52d570);
if(r1(R+518)){{goto L52d5ef;}}
}
B52d572:L52d572:{c.instructions+=3;NFSU2_TR(0x52d572);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52d575:{NFSU2_TR(0x52d575);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d577:{NFSU2_TR(0x52d577);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d5ef;}}
}
B52d579:L52d579:{c.instructions+=3;NFSU2_TR(0x52d579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d57c:{NFSU2_TR(0x52d57c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d57e:{NFSU2_TR(0x52d57e);
if(r1(R+518)){{goto L52d5ef;}}
}
B52d580:L52d580:{c.instructions+=3;NFSU2_TR(0x52d580);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d583:{NFSU2_TR(0x52d583);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d585:{NFSU2_TR(0x52d585);
if(r1(R+518)){{goto L52d594;}}
}
B52d587:L52d587:{c.instructions+=2;NFSU2_TR(0x52d587);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52d58a:{NFSU2_TR(0x52d58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d594;}}
}
B52d58c:L52d58c:{c.instructions+=3;NFSU2_TR(0x52d58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d58f:{NFSU2_TR(0x52d58f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52d592:{NFSU2_TR(0x52d592);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52d5ef;}}
}
B52d594:L52d594:{c.instructions+=5;NFSU2_TR(0x52d594);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d596:{NFSU2_TR(0x52d596);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d597:{NFSU2_TR(0x52d597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d598:{NFSU2_TR(0x52d598);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52d59c:{NFSU2_TR(0x52d59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d5a1ull));
TAIL_STATIC(0x51cfe0u,51c);
}
B52d5a1:L52d5a1:{c.instructions+=2;NFSU2_TR(0x52d5a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d5a4:{NFSU2_TR(0x52d5a4);
{goto L52d5ef;}
}
B52d5a6:L52d5a6:{c.instructions+=3;NFSU2_TR(0x52d5a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52d5a9:{NFSU2_TR(0x52d5a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52d5ab:{NFSU2_TR(0x52d5ab);
if(r1(R+518)){{goto L52d5ef;}}
}
B52d5ad:L52d5ad:{c.instructions+=3;NFSU2_TR(0x52d5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d5b0:{NFSU2_TR(0x52d5b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d5b2:{NFSU2_TR(0x52d5b2);
if(r1(R+518)){{goto L52d5ef;}}
}
B52d5b4:L52d5b4:{c.instructions+=3;NFSU2_TR(0x52d5b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52d5b7:{NFSU2_TR(0x52d5b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d5b8:{NFSU2_TR(0x52d5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d5bdull));
TAIL_STATIC(0x50b9c0u,50b);
}
B52d5bd:L52d5bd:{c.instructions+=3;NFSU2_TR(0x52d5bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52d5c0:{NFSU2_TR(0x52d5c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d5c2:{NFSU2_TR(0x52d5c2);
if(r1(R+518)){{goto L52d5d8;}}
}
B52d5c4:L52d5c4:{c.instructions+=3;NFSU2_TR(0x52d5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d5c7:{NFSU2_TR(0x52d5c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d5c9:{NFSU2_TR(0x52d5c9);
if(r1(R+518)){{goto L52d5d8;}}
}
B52d5cb:L52d5cb:{c.instructions+=2;NFSU2_TR(0x52d5cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52d5ce:{NFSU2_TR(0x52d5ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52d5d8;}}
}
B52d5d0:L52d5d0:{c.instructions+=3;NFSU2_TR(0x52d5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d5d3:{NFSU2_TR(0x52d5d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52d5d6:{NFSU2_TR(0x52d5d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52d5eb;}}
}
B52d5d8:L52d5d8:{c.instructions+=6;NFSU2_TR(0x52d5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d5db:{NFSU2_TR(0x52d5db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d5dd:{NFSU2_TR(0x52d5dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d5de:{NFSU2_TR(0x52d5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d5df:{NFSU2_TR(0x52d5df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52d5e3:{NFSU2_TR(0x52d5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d5e8ull));
TAIL_STATIC(0x51cf70u,51c);
}
B52d5e8:L52d5e8:{c.instructions+=1;NFSU2_TR(0x52d5e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d5eb:L52d5eb:{c.instructions+=1;NFSU2_TR(0x52d5eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52d5ef:L52d5ef:{c.instructions+=3;NFSU2_TR(0x52d5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d5f2:{NFSU2_TR(0x52d5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d5f4:{NFSU2_TR(0x52d5f4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d528u);}goto L52d528;}}
}
B52d5fa:L52d5fa:{c.instructions+=2;NFSU2_TR(0x52d5fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52d5fd:{NFSU2_TR(0x52d5fd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d530u);}goto L52d530;}
}
B52d602:L52d602:{c.instructions+=5;NFSU2_TR(0x52d602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52d603:{NFSU2_TR(0x52d603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d604:{NFSU2_TR(0x52d604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52d605:{NFSU2_TR(0x52d605);
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
B52d608:{NFSU2_TR(0x52d608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d610:L52d610:{c.instructions+=6;NFSU2_TR(0x52d610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d611:{NFSU2_TR(0x52d611);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d615:{NFSU2_TR(0x52d615);
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
B52d617:{NFSU2_TR(0x52d617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d618:{NFSU2_TR(0x52d618);
__builtin_memmove((R+28),(R+4),4);
}
B52d61a:{NFSU2_TR(0x52d61a);
if(r1(R+518)){{goto L52d647;}}
}
B52d61c:L52d61c:{c.instructions+=3;NFSU2_TR(0x52d61c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52d61e:{NFSU2_TR(0x52d61e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B52d621:{NFSU2_TR(0x52d621);
if(r1(R+518)){{goto L52d62b;}}
}
B52d623:L52d623:{c.instructions+=3;NFSU2_TR(0x52d623);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52d624:{NFSU2_TR(0x52d624);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B52d629:{NFSU2_TR(0x52d629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d623u);}goto L52d623;}}
}
B52d62b:L52d62b:{c.instructions+=4;NFSU2_TR(0x52d62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d62e:{NFSU2_TR(0x52d62e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52d62f:{NFSU2_TR(0x52d62f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52d631:{NFSU2_TR(0x52d631);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52d63b;}}
}
B52d633:L52d633:{c.instructions+=3;NFSU2_TR(0x52d633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d634:{NFSU2_TR(0x52d634);
__builtin_memmove((R+4),(R+28),4);
}
B52d636:{NFSU2_TR(0x52d636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d63bull));
TAIL_STATIC(0x51de90u,51d);
}
B52d63b:L52d63b:{c.instructions+=4;NFSU2_TR(0x52d63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52d63d:{NFSU2_TR(0x52d63d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d63e:{NFSU2_TR(0x52d63e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d63f:{NFSU2_TR(0x52d63f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d644ull));
TAIL_STATIC(0x511630u,511);
}
B52d644:L52d644:{c.instructions+=1;NFSU2_TR(0x52d644);
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
B52d647:L52d647:{c.instructions+=4;NFSU2_TR(0x52d647);
__builtin_memmove((R+0),(R+28),4);
}
B52d649:{NFSU2_TR(0x52d649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52d64a:{NFSU2_TR(0x52d64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d64b:{NFSU2_TR(0x52d64b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d650:L52d650:{c.instructions+=9;NFSU2_TR(0x52d650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d651:{NFSU2_TR(0x52d651);
__builtin_memmove((R+24),(R+4),4);
}
B52d653:{NFSU2_TR(0x52d653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d656:{NFSU2_TR(0x52d656);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d65a:{NFSU2_TR(0x52d65a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d65b:{NFSU2_TR(0x52d65b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d65f:{NFSU2_TR(0x52d65f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d660:{NFSU2_TR(0x52d660);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d661:{NFSU2_TR(0x52d661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d666ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52d666:L52d666:{c.instructions+=3;NFSU2_TR(0x52d666);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d669:{NFSU2_TR(0x52d669);
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
B52d66b:{NFSU2_TR(0x52d66b);
if(r1(R+518)){{goto L52d69d;}}
}
B52d66d:L52d66d:{c.instructions+=3;NFSU2_TR(0x52d66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52d66f:{NFSU2_TR(0x52d66f);
__builtin_memmove((R+4),(R+24),4);
}
B52d671:{NFSU2_TR(0x52d671);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d674ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52d674:L52d674:{c.instructions+=3;NFSU2_TR(0x52d674);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8380b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B52d67b:{NFSU2_TR(0x52d67b);
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
B52d67e:{NFSU2_TR(0x52d67e);
if(r1(R+518)){{goto L52d68c;}}
}
B52d680:L52d680:{c.instructions+=3;NFSU2_TR(0x52d680);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B52d686:{NFSU2_TR(0x52d686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d687:{NFSU2_TR(0x52d687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d68cull));
TAIL_STATIC(0x458520u,458);
}
B52d68c:L52d68c:{c.instructions+=6;NFSU2_TR(0x52d68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d690:{NFSU2_TR(0x52d690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52d692:{NFSU2_TR(0x52d692);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d697:{NFSU2_TR(0x52d697);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d698:{NFSU2_TR(0x52d698);
__builtin_memmove((R+4),(R+24),4);
}
B52d69a:{NFSU2_TR(0x52d69a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d69dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52d69d:L52d69d:{c.instructions+=2;NFSU2_TR(0x52d69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d69e:{NFSU2_TR(0x52d69e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d6b0:L52d6b0:{c.instructions+=7;NFSU2_TR(0x52d6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52d6b3:{NFSU2_TR(0x52d6b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6b4:{NFSU2_TR(0x52d6b4);
__builtin_memmove((R+24),(R+4),4);
}
B52d6b6:{NFSU2_TR(0x52d6b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6b7:{NFSU2_TR(0x52d6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d6ba:{NFSU2_TR(0x52d6ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d6bc:{NFSU2_TR(0x52d6bc);
if(r1(R+518)){{goto L52d731;}}
}
B52d6be:L52d6be:{c.instructions+=2;NFSU2_TR(0x52d6be);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52d6c2:{NFSU2_TR(0x52d6c2);
if(r1(R+518)){{goto L52d731;}}
}
B52d6c4:L52d6c4:{c.instructions+=10;NFSU2_TR(0x52d6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d6c7:{NFSU2_TR(0x52d6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d6ca:{NFSU2_TR(0x52d6ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52d6ce:{NFSU2_TR(0x52d6ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d6d2:{NFSU2_TR(0x52d6d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6d3:{NFSU2_TR(0x52d6d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d6d7:{NFSU2_TR(0x52d6d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6d8:{NFSU2_TR(0x52d6d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6d9:{NFSU2_TR(0x52d6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d6dd:{NFSU2_TR(0x52d6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d6e2ull));
TAIL_STATIC(0x51d620u,51d);
}
B52d6e2:L52d6e2:{c.instructions+=10;NFSU2_TR(0x52d6e2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d6e6:{NFSU2_TR(0x52d6e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52d6ec:{NFSU2_TR(0x52d6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d6f0:{NFSU2_TR(0x52d6f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d6f3:{NFSU2_TR(0x52d6f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6f4:{NFSU2_TR(0x52d6f4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52d6f8:{NFSU2_TR(0x52d6f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6f9:{NFSU2_TR(0x52d6f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d6fc:{NFSU2_TR(0x52d6fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d6fd:{NFSU2_TR(0x52d6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d702ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52d702:L52d702:{c.instructions+=9;NFSU2_TR(0x52d702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d705:{NFSU2_TR(0x52d705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d708:{NFSU2_TR(0x52d708);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d70c:{NFSU2_TR(0x52d70c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d70d:{NFSU2_TR(0x52d70d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52d711:{NFSU2_TR(0x52d711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d712:{NFSU2_TR(0x52d712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d713:{NFSU2_TR(0x52d713);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d717:{NFSU2_TR(0x52d717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d71cull));
TAIL_STATIC(0x51d070u,51d);
}
B52d71c:L52d71c:{c.instructions+=6;NFSU2_TR(0x52d71c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d720:{NFSU2_TR(0x52d720);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d724:{NFSU2_TR(0x52d724);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d725:{NFSU2_TR(0x52d725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d726:{NFSU2_TR(0x52d726);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d727:{NFSU2_TR(0x52d727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d72cull));
TAIL_STATIC(0x51d380u,51d);
}
B52d72c:L52d72c:{c.instructions+=2;NFSU2_TR(0x52d72c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52d72f:{NFSU2_TR(0x52d72f);
{goto L52d742;}
}
B52d731:L52d731:{c.instructions+=6;NFSU2_TR(0x52d731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d734:{NFSU2_TR(0x52d734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d737:{NFSU2_TR(0x52d737);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d738:{NFSU2_TR(0x52d738);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d739:{NFSU2_TR(0x52d739);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d73a:{NFSU2_TR(0x52d73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d73full));
TAIL_STATIC(0x51d380u,51d);
}
B52d73f:L52d73f:{c.instructions+=1;NFSU2_TR(0x52d73f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d742:L52d742:{c.instructions+=3;NFSU2_TR(0x52d742);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d745:{NFSU2_TR(0x52d745);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d747:{NFSU2_TR(0x52d747);
if(r1(R+518)){{goto L52d768;}}
}
B52d749:L52d749:{c.instructions+=9;NFSU2_TR(0x52d749);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d74c:{NFSU2_TR(0x52d74c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52d74f:{NFSU2_TR(0x52d74f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52d752:{NFSU2_TR(0x52d752);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d756:{NFSU2_TR(0x52d756);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d759:{NFSU2_TR(0x52d759);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52d75c:{NFSU2_TR(0x52d75c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d75f:{NFSU2_TR(0x52d75f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d760:{NFSU2_TR(0x52d760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d765ull));
TAIL_STATIC(0x51d380u,51d);
}
B52d765:L52d765:{c.instructions+=1;NFSU2_TR(0x52d765);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d768:L52d768:{c.instructions+=4;NFSU2_TR(0x52d768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52d769:{NFSU2_TR(0x52d769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d76a:{NFSU2_TR(0x52d76a);
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
B52d76d:{NFSU2_TR(0x52d76d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d770:L52d770:{c.instructions+=7;NFSU2_TR(0x52d770);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d771:{NFSU2_TR(0x52d771);
__builtin_memmove((R+12),(R+4),4);
}
B52d773:{NFSU2_TR(0x52d773);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52d779:{NFSU2_TR(0x52d779);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d77b:{NFSU2_TR(0x52d77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d77e:{NFSU2_TR(0x52d77e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d77f:{NFSU2_TR(0x52d77f);
if(r1(R+518)){{goto L52d793;}}
}
B52d781:L52d781:{c.instructions+=2;NFSU2_TR(0x52d781);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d783:{NFSU2_TR(0x52d783);
if(r1(R+518)){{goto L52d793;}}
}
B52d785:L52d785:{c.instructions+=5;NFSU2_TR(0x52d785);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d788:{NFSU2_TR(0x52d788);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d78c:{NFSU2_TR(0x52d78c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d78d:{NFSU2_TR(0x52d78d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d78e:{NFSU2_TR(0x52d78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d793ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52d793:L52d793:{c.instructions+=3;NFSU2_TR(0x52d793);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d796:{NFSU2_TR(0x52d796);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d798:{NFSU2_TR(0x52d798);
if(r1(R+518)){{goto L52d7e4;}}
}
B52d79a:L52d79a:{c.instructions+=4;NFSU2_TR(0x52d79a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d79b:{NFSU2_TR(0x52d79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d79e:{NFSU2_TR(0x52d79e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d7a0:{NFSU2_TR(0x52d7a0);
if(r1(R+518)){{goto L52d7e3;}}
}
B52d7a2:L52d7a2:{c.instructions+=2;NFSU2_TR(0x52d7a2);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d7a7:{NFSU2_TR(0x52d7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d7acull));
TAIL_STATIC(0x505450u,505);
}
B52d7ac:L52d7ac:{c.instructions+=4;NFSU2_TR(0x52d7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d7af:{NFSU2_TR(0x52d7af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52d7b2:{NFSU2_TR(0x52d7b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52d7b4:{NFSU2_TR(0x52d7b4);
if(r1(R+518)){{goto L52d7bf;}}
}
B52d7b6:L52d7b6:{c.instructions+=3;NFSU2_TR(0x52d7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d7b9:{NFSU2_TR(0x52d7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d7bb:{NFSU2_TR(0x52d7bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d7a2u);}goto L52d7a2;}}
}
B52d7bd:L52d7bd:{c.instructions+=1;NFSU2_TR(0x52d7bd);
{goto L52d7e3;}
}
B52d7bf:L52d7bf:{c.instructions+=2;NFSU2_TR(0x52d7bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d7c1:{NFSU2_TR(0x52d7c1);
if(r1(R+518)){{goto L52d7e3;}}
}
B52d7c3:L52d7c3:{c.instructions+=2;NFSU2_TR(0x52d7c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52d7c6:{NFSU2_TR(0x52d7c6);
if(r1(R+518)){{goto L52d7dc;}}
}
B52d7c8:L52d7c8:{c.instructions+=3;NFSU2_TR(0x52d7c8);
__builtin_memmove((R+4),(R+28),4);
}
B52d7ca:{NFSU2_TR(0x52d7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d7cd:{NFSU2_TR(0x52d7cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d7d2ull));
TAIL_STATIC(0x517720u,517);
}
B52d7d2:L52d7d2:{c.instructions+=2;NFSU2_TR(0x52d7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d7d5:{NFSU2_TR(0x52d7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52d7dc:L52d7dc:{c.instructions+=1;NFSU2_TR(0x52d7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52d7e3:L52d7e3:{c.instructions+=1;NFSU2_TR(0x52d7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d7e4:L52d7e4:{c.instructions+=5;NFSU2_TR(0x52d7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d7e7:{NFSU2_TR(0x52d7e7);
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
B52d7e9:{NFSU2_TR(0x52d7e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52d7ea:{NFSU2_TR(0x52d7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52d7eb:{NFSU2_TR(0x52d7eb);
if(r1(R+518)){{goto L52d7fd;}}
}
B52d7ed:L52d7ed:{c.instructions+=4;NFSU2_TR(0x52d7ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d7ef:{NFSU2_TR(0x52d7ef);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d7f4:{NFSU2_TR(0x52d7f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d7f5:{NFSU2_TR(0x52d7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d7faull));
TAIL_STATIC(0x51cf70u,51c);
}
B52d7fa:L52d7fa:{c.instructions+=1;NFSU2_TR(0x52d7fa);
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
B52d7fd:L52d7fd:{c.instructions+=1;NFSU2_TR(0x52d7fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d800:L52d800:{c.instructions+=7;NFSU2_TR(0x52d800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52d803:{NFSU2_TR(0x52d803);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d804:{NFSU2_TR(0x52d804);
__builtin_memmove((R+24),(R+4),4);
}
B52d806:{NFSU2_TR(0x52d806);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d807:{NFSU2_TR(0x52d807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d80a:{NFSU2_TR(0x52d80a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d80c:{NFSU2_TR(0x52d80c);
if(r1(R+518)){{goto L52d881;}}
}
B52d80e:L52d80e:{c.instructions+=2;NFSU2_TR(0x52d80e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52d812:{NFSU2_TR(0x52d812);
if(r1(R+518)){{goto L52d881;}}
}
B52d814:L52d814:{c.instructions+=10;NFSU2_TR(0x52d814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d817:{NFSU2_TR(0x52d817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d81a:{NFSU2_TR(0x52d81a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52d81e:{NFSU2_TR(0x52d81e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d822:{NFSU2_TR(0x52d822);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d823:{NFSU2_TR(0x52d823);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d827:{NFSU2_TR(0x52d827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d828:{NFSU2_TR(0x52d828);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d829:{NFSU2_TR(0x52d829);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d82d:{NFSU2_TR(0x52d82d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d832ull));
TAIL_STATIC(0x51d620u,51d);
}
B52d832:L52d832:{c.instructions+=10;NFSU2_TR(0x52d832);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d836:{NFSU2_TR(0x52d836);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52d83c:{NFSU2_TR(0x52d83c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d840:{NFSU2_TR(0x52d840);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d843:{NFSU2_TR(0x52d843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d844:{NFSU2_TR(0x52d844);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52d848:{NFSU2_TR(0x52d848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d849:{NFSU2_TR(0x52d849);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d84c:{NFSU2_TR(0x52d84c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d84d:{NFSU2_TR(0x52d84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d852ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52d852:L52d852:{c.instructions+=9;NFSU2_TR(0x52d852);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d855:{NFSU2_TR(0x52d855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d858:{NFSU2_TR(0x52d858);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d85c:{NFSU2_TR(0x52d85c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d85d:{NFSU2_TR(0x52d85d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52d861:{NFSU2_TR(0x52d861);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d862:{NFSU2_TR(0x52d862);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d863:{NFSU2_TR(0x52d863);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d867:{NFSU2_TR(0x52d867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d86cull));
TAIL_STATIC(0x51d070u,51d);
}
B52d86c:L52d86c:{c.instructions+=6;NFSU2_TR(0x52d86c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d870:{NFSU2_TR(0x52d870);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d874:{NFSU2_TR(0x52d874);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d875:{NFSU2_TR(0x52d875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d876:{NFSU2_TR(0x52d876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d877:{NFSU2_TR(0x52d877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d87cull));
TAIL_STATIC(0x51d380u,51d);
}
B52d87c:L52d87c:{c.instructions+=2;NFSU2_TR(0x52d87c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52d87f:{NFSU2_TR(0x52d87f);
{goto L52d892;}
}
B52d881:L52d881:{c.instructions+=6;NFSU2_TR(0x52d881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d884:{NFSU2_TR(0x52d884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d887:{NFSU2_TR(0x52d887);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d888:{NFSU2_TR(0x52d888);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d889:{NFSU2_TR(0x52d889);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d88a:{NFSU2_TR(0x52d88a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d88full));
TAIL_STATIC(0x51d380u,51d);
}
B52d88f:L52d88f:{c.instructions+=1;NFSU2_TR(0x52d88f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d892:L52d892:{c.instructions+=11;NFSU2_TR(0x52d892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d895:{NFSU2_TR(0x52d895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d898:{NFSU2_TR(0x52d898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d89b:{NFSU2_TR(0x52d89b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52d89f:{NFSU2_TR(0x52d89f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d8a3:{NFSU2_TR(0x52d8a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8a4:{NFSU2_TR(0x52d8a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d8a8:{NFSU2_TR(0x52d8a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8a9:{NFSU2_TR(0x52d8a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8aa:{NFSU2_TR(0x52d8aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d8ae:{NFSU2_TR(0x52d8ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d8b3ull));
TAIL_STATIC(0x51d620u,51d);
}
B52d8b3:L52d8b3:{c.instructions+=10;NFSU2_TR(0x52d8b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d8b7:{NFSU2_TR(0x52d8b7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52d8bd:{NFSU2_TR(0x52d8bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d8c1:{NFSU2_TR(0x52d8c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d8c4:{NFSU2_TR(0x52d8c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8c5:{NFSU2_TR(0x52d8c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52d8c9:{NFSU2_TR(0x52d8c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8ca:{NFSU2_TR(0x52d8ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d8cd:{NFSU2_TR(0x52d8cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8ce:{NFSU2_TR(0x52d8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d8d3ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52d8d3:L52d8d3:{c.instructions+=9;NFSU2_TR(0x52d8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d8d6:{NFSU2_TR(0x52d8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d8d9:{NFSU2_TR(0x52d8d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d8dd:{NFSU2_TR(0x52d8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8de:{NFSU2_TR(0x52d8de);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52d8e2:{NFSU2_TR(0x52d8e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8e3:{NFSU2_TR(0x52d8e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8e4:{NFSU2_TR(0x52d8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d8e8:{NFSU2_TR(0x52d8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d8edull));
TAIL_STATIC(0x51d070u,51d);
}
B52d8ed:L52d8ed:{c.instructions+=6;NFSU2_TR(0x52d8ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52d8f1:{NFSU2_TR(0x52d8f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d8f5:{NFSU2_TR(0x52d8f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8f6:{NFSU2_TR(0x52d8f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8f7:{NFSU2_TR(0x52d8f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d8f8:{NFSU2_TR(0x52d8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d8fdull));
TAIL_STATIC(0x51d380u,51d);
}
B52d8fd:L52d8fd:{c.instructions+=4;NFSU2_TR(0x52d8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d900:{NFSU2_TR(0x52d900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52d903:{NFSU2_TR(0x52d903);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d905:{NFSU2_TR(0x52d905);
if(r1(R+518)){{goto L52d926;}}
}
B52d907:L52d907:{c.instructions+=9;NFSU2_TR(0x52d907);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d90a:{NFSU2_TR(0x52d90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52d90d:{NFSU2_TR(0x52d90d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52d910:{NFSU2_TR(0x52d910);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d914:{NFSU2_TR(0x52d914);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d917:{NFSU2_TR(0x52d917);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52d91a:{NFSU2_TR(0x52d91a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d91d:{NFSU2_TR(0x52d91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d91e:{NFSU2_TR(0x52d91e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d923ull));
TAIL_STATIC(0x51d380u,51d);
}
B52d923:L52d923:{c.instructions+=1;NFSU2_TR(0x52d923);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d926:L52d926:{c.instructions+=4;NFSU2_TR(0x52d926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52d927:{NFSU2_TR(0x52d927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d928:{NFSU2_TR(0x52d928);
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
B52d92b:{NFSU2_TR(0x52d92b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d930:L52d930:{c.instructions+=13;NFSU2_TR(0x52d930);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d933:{NFSU2_TR(0x52d933);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d937:{NFSU2_TR(0x52d937);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d93a:{NFSU2_TR(0x52d93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52d93d:{NFSU2_TR(0x52d93d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B52d93f:{NFSU2_TR(0x52d93f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d940:{NFSU2_TR(0x52d940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d943:{NFSU2_TR(0x52d943);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d945:{NFSU2_TR(0x52d945);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52d949:{NFSU2_TR(0x52d949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d94c:{NFSU2_TR(0x52d94c);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d94f:{NFSU2_TR(0x52d94f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52d951:{NFSU2_TR(0x52d951);
if(r1(R+518)){{goto L52d987;}}
}
B52d953:L52d953:{c.instructions+=8;NFSU2_TR(0x52d953);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d956:{NFSU2_TR(0x52d956);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52d95a:{NFSU2_TR(0x52d95a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d95b:{NFSU2_TR(0x52d95b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d95f:{NFSU2_TR(0x52d95f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d960:{NFSU2_TR(0x52d960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d961:{NFSU2_TR(0x52d961);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d965:{NFSU2_TR(0x52d965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d96aull));
TAIL_STATIC(0x51d070u,51d);
}
B52d96a:L52d96a:{c.instructions+=9;NFSU2_TR(0x52d96a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d96e:{NFSU2_TR(0x52d96e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d972:{NFSU2_TR(0x52d972);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d976:{NFSU2_TR(0x52d976);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d979:{NFSU2_TR(0x52d979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d97a:{NFSU2_TR(0x52d97a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d97b:{NFSU2_TR(0x52d97b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d97e:{NFSU2_TR(0x52d97e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d97f:{NFSU2_TR(0x52d97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d984ull));
TAIL_STATIC(0x51d380u,51d);
}
B52d984:L52d984:{c.instructions+=1;NFSU2_TR(0x52d984);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d987:L52d987:{c.instructions+=3;NFSU2_TR(0x52d987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d988:{NFSU2_TR(0x52d988);
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
B52d98b:{NFSU2_TR(0x52d98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d990:L52d990:{c.instructions+=13;NFSU2_TR(0x52d990);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d993:{NFSU2_TR(0x52d993);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52d997:{NFSU2_TR(0x52d997);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d99a:{NFSU2_TR(0x52d99a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52d99d:{NFSU2_TR(0x52d99d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B52d99f:{NFSU2_TR(0x52d99f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9a0:{NFSU2_TR(0x52d9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52d9a3:{NFSU2_TR(0x52d9a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52d9a5:{NFSU2_TR(0x52d9a5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52d9a9:{NFSU2_TR(0x52d9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d9ac:{NFSU2_TR(0x52d9ac);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d9af:{NFSU2_TR(0x52d9af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52d9b1:{NFSU2_TR(0x52d9b1);
if(r1(R+518)){{goto L52d9e6;}}
}
B52d9b3:L52d9b3:{c.instructions+=8;NFSU2_TR(0x52d9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d9b6:{NFSU2_TR(0x52d9b6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52d9ba:{NFSU2_TR(0x52d9ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9bb:{NFSU2_TR(0x52d9bb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52d9bf:{NFSU2_TR(0x52d9bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9c0:{NFSU2_TR(0x52d9c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9c1:{NFSU2_TR(0x52d9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52d9c5:{NFSU2_TR(0x52d9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d9caull));
TAIL_STATIC(0x51d070u,51d);
}
B52d9ca:L52d9ca:{c.instructions+=8;NFSU2_TR(0x52d9ca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52d9ce:{NFSU2_TR(0x52d9ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52d9d2:{NFSU2_TR(0x52d9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52d9d6:{NFSU2_TR(0x52d9d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52d9d9:{NFSU2_TR(0x52d9d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52d9dc:{NFSU2_TR(0x52d9dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9dd:{NFSU2_TR(0x52d9dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9de:{NFSU2_TR(0x52d9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52d9e3ull));
TAIL_STATIC(0x51d380u,51d);
}
B52d9e3:L52d9e3:{c.instructions+=1;NFSU2_TR(0x52d9e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52d9e6:L52d9e6:{c.instructions+=3;NFSU2_TR(0x52d9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52d9e7:{NFSU2_TR(0x52d9e7);
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
B52d9ea:{NFSU2_TR(0x52d9ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52d9f0:L52d9f0:{c.instructions+=11;NFSU2_TR(0x52d9f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9f1:{NFSU2_TR(0x52d9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52d9f5:{NFSU2_TR(0x52d9f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9f6:{NFSU2_TR(0x52d9f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52d9f7:{NFSU2_TR(0x52d9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52d9fb:{NFSU2_TR(0x52d9fb);
__builtin_memmove((R+24),(R+4),4);
}
B52d9fd:{NFSU2_TR(0x52d9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52da00:{NFSU2_TR(0x52da00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da01:{NFSU2_TR(0x52da01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da02:{NFSU2_TR(0x52da02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da03:{NFSU2_TR(0x52da03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52da08:L52da08:{c.instructions+=3;NFSU2_TR(0x52da08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52da0b:{NFSU2_TR(0x52da0b);
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
B52da0d:{NFSU2_TR(0x52da0d);
if(r1(R+518)){{goto L52da3c;}}
}
B52da0f:L52da0f:{c.instructions+=6;NFSU2_TR(0x52da0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52da13:{NFSU2_TR(0x52da13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52da15:{NFSU2_TR(0x52da15);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da1a:{NFSU2_TR(0x52da1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da1b:{NFSU2_TR(0x52da1b);
__builtin_memmove((R+4),(R+24),4);
}
B52da1d:{NFSU2_TR(0x52da1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da20:L52da20:{c.instructions+=4;NFSU2_TR(0x52da20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52da22:{NFSU2_TR(0x52da22);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da27:{NFSU2_TR(0x52da27);
__builtin_memmove((R+4),(R+24),4);
}
B52da29:{NFSU2_TR(0x52da29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da2cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da2c:L52da2c:{c.instructions+=3;NFSU2_TR(0x52da2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52da2e:{NFSU2_TR(0x52da2e);
__builtin_memmove((R+4),(R+24),4);
}
B52da30:{NFSU2_TR(0x52da30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da33ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da33:L52da33:{c.instructions+=3;NFSU2_TR(0x52da33);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da35:{NFSU2_TR(0x52da35);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da3a:{NFSU2_TR(0x52da3a);
{goto L52da8b;}
}
B52da3c:L52da3c:{c.instructions+=5;NFSU2_TR(0x52da3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52da3f:{NFSU2_TR(0x52da3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da40:{NFSU2_TR(0x52da40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da41:{NFSU2_TR(0x52da41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da42:{NFSU2_TR(0x52da42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52da47:L52da47:{c.instructions+=3;NFSU2_TR(0x52da47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52da4a:{NFSU2_TR(0x52da4a);
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
B52da4c:{NFSU2_TR(0x52da4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52da60;}}
}
B52da4e:L52da4e:{c.instructions+=5;NFSU2_TR(0x52da4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52da51:{NFSU2_TR(0x52da51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da52:{NFSU2_TR(0x52da52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da53:{NFSU2_TR(0x52da53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da54:{NFSU2_TR(0x52da54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d020u);}goto L52d020;}
}
B52da59:L52da59:{c.instructions+=3;NFSU2_TR(0x52da59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52da5c:{NFSU2_TR(0x52da5c);
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
B52da5e:{NFSU2_TR(0x52da5e);
if(r1(R+518)){{goto L52dab0;}}
}
B52da60:L52da60:{c.instructions+=6;NFSU2_TR(0x52da60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52da64:{NFSU2_TR(0x52da64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52da66:{NFSU2_TR(0x52da66);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da6b:{NFSU2_TR(0x52da6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da6c:{NFSU2_TR(0x52da6c);
__builtin_memmove((R+4),(R+24),4);
}
B52da6e:{NFSU2_TR(0x52da6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da71:L52da71:{c.instructions+=4;NFSU2_TR(0x52da71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52da73:{NFSU2_TR(0x52da73);
__builtin_memmove((R+4),(R+24),4);
}
B52da75:{NFSU2_TR(0x52da75);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da7a:{NFSU2_TR(0x52da7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da7d:L52da7d:{c.instructions+=3;NFSU2_TR(0x52da7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52da7f:{NFSU2_TR(0x52da7f);
__builtin_memmove((R+4),(R+24),4);
}
B52da81:{NFSU2_TR(0x52da81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da84ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da84:L52da84:{c.instructions+=2;NFSU2_TR(0x52da84);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da86:{NFSU2_TR(0x52da86);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52da8b:L52da8b:{c.instructions+=4;NFSU2_TR(0x52da8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52da8d:{NFSU2_TR(0x52da8d);
__builtin_memmove((R+4),(R+24),4);
}
B52da8f:{NFSU2_TR(0x52da8f);
__builtin_memmove((R+28),(R+0),4);
}
B52da91:{NFSU2_TR(0x52da91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52da94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52da94:L52da94:{c.instructions+=4;NFSU2_TR(0x52da94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52da97:{NFSU2_TR(0x52da97);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B52da9f:{NFSU2_TR(0x52da9f);
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
B52daa2:{NFSU2_TR(0x52daa2);
if(r1(R+518)){{goto L52dab0;}}
}
B52daa4:L52daa4:{c.instructions+=3;NFSU2_TR(0x52daa4);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B52daaa:{NFSU2_TR(0x52daaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52daab:{NFSU2_TR(0x52daab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dab0ull));
TAIL_STATIC(0x458520u,458);
}
B52dab0:L52dab0:{c.instructions+=4;NFSU2_TR(0x52dab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52dab1:{NFSU2_TR(0x52dab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52dab2:{NFSU2_TR(0x52dab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52dab3:{NFSU2_TR(0x52dab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52dac0:L52dac0:{c.instructions+=4;NFSU2_TR(0x52dac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52dac3:{NFSU2_TR(0x52dac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dac4:{NFSU2_TR(0x52dac4);
__builtin_memmove((R+24),(R+4),4);
}
B52dac6:{NFSU2_TR(0x52dac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dacbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52d800u);}goto L52d800;}
}
B52dacb:L52dacb:{c.instructions+=12;NFSU2_TR(0x52dacb);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dace:{NFSU2_TR(0x52dace);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dad1:{NFSU2_TR(0x52dad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52dad4:{NFSU2_TR(0x52dad4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52dada:{NFSU2_TR(0x52dada);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52dade:{NFSU2_TR(0x52dade);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dadf:{NFSU2_TR(0x52dadf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B52dae1:{NFSU2_TR(0x52dae1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52dae5:{NFSU2_TR(0x52dae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dae6:{NFSU2_TR(0x52dae6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dae7:{NFSU2_TR(0x52dae7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52daeb:{NFSU2_TR(0x52daeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52daf0ull));
TAIL_STATIC(0x51d730u,51d);
}
B52daf0:L52daf0:{c.instructions+=12;NFSU2_TR(0x52daf0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52daf3:{NFSU2_TR(0x52daf3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52daf9:{NFSU2_TR(0x52daf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dafc:{NFSU2_TR(0x52dafc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52daff:{NFSU2_TR(0x52daff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db00:{NFSU2_TR(0x52db00);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52db04:{NFSU2_TR(0x52db04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db05:{NFSU2_TR(0x52db05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52db08:{NFSU2_TR(0x52db08);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52db0c:{NFSU2_TR(0x52db0c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52db0f:{NFSU2_TR(0x52db0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db10:{NFSU2_TR(0x52db10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52db15ull));
TAIL_STATIC(0x51d380u,51d);
}
B52db15:L52db15:{c.instructions+=11;NFSU2_TR(0x52db15);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52db18:{NFSU2_TR(0x52db18);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52db1e:{NFSU2_TR(0x52db1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52db21:{NFSU2_TR(0x52db21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52db24:{NFSU2_TR(0x52db24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52db27:{NFSU2_TR(0x52db27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db28:{NFSU2_TR(0x52db28);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52db2c:{NFSU2_TR(0x52db2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db2d:{NFSU2_TR(0x52db2d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52db30:{NFSU2_TR(0x52db30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db31:{NFSU2_TR(0x52db31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52db36ull));
TAIL_STATIC(0x51d380u,51d);
}
B52db36:L52db36:{c.instructions+=4;NFSU2_TR(0x52db36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52db39:{NFSU2_TR(0x52db39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52db3a:{NFSU2_TR(0x52db3a);
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
B52db3d:{NFSU2_TR(0x52db3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52db40:L52db40:{c.instructions+=10;NFSU2_TR(0x52db40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db41:{NFSU2_TR(0x52db41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db42:{NFSU2_TR(0x52db42);
__builtin_memmove((R+20),(R+4),4);
}
B52db44:{NFSU2_TR(0x52db44);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52db4a:{NFSU2_TR(0x52db4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52db4d:{NFSU2_TR(0x52db4d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52db4f:{NFSU2_TR(0x52db4f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db51:{NFSU2_TR(0x52db51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db52:{NFSU2_TR(0x52db52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db53:{NFSU2_TR(0x52db53);
if(r1(R+518)){{goto L52db67;}}
}
B52db55:L52db55:{c.instructions+=2;NFSU2_TR(0x52db55);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db57:{NFSU2_TR(0x52db57);
if(r1(R+518)){{goto L52db67;}}
}
B52db59:L52db59:{c.instructions+=5;NFSU2_TR(0x52db59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52db5c:{NFSU2_TR(0x52db5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52db60:{NFSU2_TR(0x52db60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db61:{NFSU2_TR(0x52db61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db62:{NFSU2_TR(0x52db62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52db67ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52db67:L52db67:{c.instructions+=3;NFSU2_TR(0x52db67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52db6a:{NFSU2_TR(0x52db6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db6c:{NFSU2_TR(0x52db6c);
if(r1(R+518)){{goto L52dbae;}}
}
B52db6e:L52db6e:{c.instructions+=3;NFSU2_TR(0x52db6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52db71:{NFSU2_TR(0x52db71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db73:{NFSU2_TR(0x52db73);
if(r1(R+518)){{goto L52dbae;}}
}
B52db75:L52db75:{c.instructions+=2;NFSU2_TR(0x52db75);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52db7a:{NFSU2_TR(0x52db7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52db7full));
TAIL_STATIC(0x505450u,505);
}
B52db7f:L52db7f:{c.instructions+=4;NFSU2_TR(0x52db7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52db82:{NFSU2_TR(0x52db82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52db85:{NFSU2_TR(0x52db85);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db87:{NFSU2_TR(0x52db87);
if(r1(R+518)){{goto L52db92;}}
}
B52db89:L52db89:{c.instructions+=3;NFSU2_TR(0x52db89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52db8c:{NFSU2_TR(0x52db8c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db8e:{NFSU2_TR(0x52db8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52db75u);}goto L52db75;}}
}
B52db90:L52db90:{c.instructions+=1;NFSU2_TR(0x52db90);
{goto L52dbae;}
}
B52db92:L52db92:{c.instructions+=2;NFSU2_TR(0x52db92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52db94:{NFSU2_TR(0x52db94);
if(r1(R+518)){{goto L52dbae;}}
}
B52db96:L52db96:{c.instructions+=2;NFSU2_TR(0x52db96);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52db99:{NFSU2_TR(0x52db99);
if(r1(R+518)){{goto L52dbab;}}
}
B52db9b:L52db9b:{c.instructions+=3;NFSU2_TR(0x52db9b);
__builtin_memmove((R+4),(R+28),4);
}
B52db9d:{NFSU2_TR(0x52db9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dba0:{NFSU2_TR(0x52dba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dba5ull));
TAIL_STATIC(0x517720u,517);
}
B52dba5:L52dba5:{c.instructions+=2;NFSU2_TR(0x52dba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dba8:{NFSU2_TR(0x52dba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dbab:L52dbab:{c.instructions+=1;NFSU2_TR(0x52dbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dbae:L52dbae:{c.instructions+=3;NFSU2_TR(0x52dbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52dbb1:{NFSU2_TR(0x52dbb1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbb3:{NFSU2_TR(0x52dbb3);
if(r1(R+518)){{goto L52dbf9;}}
}
B52dbb5:L52dbb5:{c.instructions+=3;NFSU2_TR(0x52dbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dbb8:{NFSU2_TR(0x52dbb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbba:{NFSU2_TR(0x52dbba);
if(r1(R+518)){{goto L52dbf9;}}
}
B52dbbc:L52dbbc:{c.instructions+=1;NFSU2_TR(0x52dbbc);
__builtin_memmove((R+16),(R+16),4);
}
B52dbc0:L52dbc0:{c.instructions+=2;NFSU2_TR(0x52dbc0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dbc5:{NFSU2_TR(0x52dbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dbcaull));
TAIL_STATIC(0x505450u,505);
}
B52dbca:L52dbca:{c.instructions+=4;NFSU2_TR(0x52dbca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dbcd:{NFSU2_TR(0x52dbcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52dbd0:{NFSU2_TR(0x52dbd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbd2:{NFSU2_TR(0x52dbd2);
if(r1(R+518)){{goto L52dbdd;}}
}
B52dbd4:L52dbd4:{c.instructions+=3;NFSU2_TR(0x52dbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dbd7:{NFSU2_TR(0x52dbd7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbd9:{NFSU2_TR(0x52dbd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52dbc0u);}goto L52dbc0;}}
}
B52dbdb:L52dbdb:{c.instructions+=1;NFSU2_TR(0x52dbdb);
{goto L52dbf9;}
}
B52dbdd:L52dbdd:{c.instructions+=2;NFSU2_TR(0x52dbdd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbdf:{NFSU2_TR(0x52dbdf);
if(r1(R+518)){{goto L52dbf9;}}
}
B52dbe1:L52dbe1:{c.instructions+=2;NFSU2_TR(0x52dbe1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52dbe4:{NFSU2_TR(0x52dbe4);
if(r1(R+518)){{goto L52dbf6;}}
}
B52dbe6:L52dbe6:{c.instructions+=3;NFSU2_TR(0x52dbe6);
__builtin_memmove((R+4),(R+28),4);
}
B52dbe8:{NFSU2_TR(0x52dbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dbeb:{NFSU2_TR(0x52dbeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dbf0ull));
TAIL_STATIC(0x517720u,517);
}
B52dbf0:L52dbf0:{c.instructions+=2;NFSU2_TR(0x52dbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dbf3:{NFSU2_TR(0x52dbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dbf6:L52dbf6:{c.instructions+=1;NFSU2_TR(0x52dbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dbf9:L52dbf9:{c.instructions+=3;NFSU2_TR(0x52dbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52dbfc:{NFSU2_TR(0x52dbfc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dbfe:{NFSU2_TR(0x52dbfe);
if(r1(R+518)){{goto L52dc49;}}
}
B52dc00:L52dc00:{c.instructions+=3;NFSU2_TR(0x52dc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dc03:{NFSU2_TR(0x52dc03);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc05:{NFSU2_TR(0x52dc05);
if(r1(R+518)){{goto L52dc49;}}
}
B52dc07:L52dc07:{c.instructions+=1;NFSU2_TR(0x52dc07);
{goto L52dc10;}
}
B52dc10:L52dc10:{c.instructions+=2;NFSU2_TR(0x52dc10);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dc15:{NFSU2_TR(0x52dc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dc1aull));
TAIL_STATIC(0x505450u,505);
}
B52dc1a:L52dc1a:{c.instructions+=4;NFSU2_TR(0x52dc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dc1d:{NFSU2_TR(0x52dc1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52dc20:{NFSU2_TR(0x52dc20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc22:{NFSU2_TR(0x52dc22);
if(r1(R+518)){{goto L52dc2d;}}
}
B52dc24:L52dc24:{c.instructions+=3;NFSU2_TR(0x52dc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dc27:{NFSU2_TR(0x52dc27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc29:{NFSU2_TR(0x52dc29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52dc10u);}goto L52dc10;}}
}
B52dc2b:L52dc2b:{c.instructions+=1;NFSU2_TR(0x52dc2b);
{goto L52dc49;}
}
B52dc2d:L52dc2d:{c.instructions+=2;NFSU2_TR(0x52dc2d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc2f:{NFSU2_TR(0x52dc2f);
if(r1(R+518)){{goto L52dc49;}}
}
B52dc31:L52dc31:{c.instructions+=2;NFSU2_TR(0x52dc31);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52dc34:{NFSU2_TR(0x52dc34);
if(r1(R+518)){{goto L52dc46;}}
}
B52dc36:L52dc36:{c.instructions+=3;NFSU2_TR(0x52dc36);
__builtin_memmove((R+4),(R+28),4);
}
B52dc38:{NFSU2_TR(0x52dc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc3b:{NFSU2_TR(0x52dc3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dc40ull));
TAIL_STATIC(0x517720u,517);
}
B52dc40:L52dc40:{c.instructions+=2;NFSU2_TR(0x52dc40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52dc43:{NFSU2_TR(0x52dc43);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc46:L52dc46:{c.instructions+=1;NFSU2_TR(0x52dc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc49:L52dc49:{c.instructions+=3;NFSU2_TR(0x52dc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52dc4c:{NFSU2_TR(0x52dc4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc4e:{NFSU2_TR(0x52dc4e);
if(r1(R+518)){{goto L52dc99;}}
}
B52dc50:L52dc50:{c.instructions+=3;NFSU2_TR(0x52dc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dc53:{NFSU2_TR(0x52dc53);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc55:{NFSU2_TR(0x52dc55);
if(r1(R+518)){{goto L52dc99;}}
}
B52dc57:L52dc57:{c.instructions+=1;NFSU2_TR(0x52dc57);
{goto L52dc60;}
}
B52dc60:L52dc60:{c.instructions+=2;NFSU2_TR(0x52dc60);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dc65:{NFSU2_TR(0x52dc65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dc6aull));
TAIL_STATIC(0x505450u,505);
}
B52dc6a:L52dc6a:{c.instructions+=4;NFSU2_TR(0x52dc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dc6d:{NFSU2_TR(0x52dc6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52dc70:{NFSU2_TR(0x52dc70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc72:{NFSU2_TR(0x52dc72);
if(r1(R+518)){{goto L52dc7d;}}
}
B52dc74:L52dc74:{c.instructions+=3;NFSU2_TR(0x52dc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52dc77:{NFSU2_TR(0x52dc77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc79:{NFSU2_TR(0x52dc79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52dc60u);}goto L52dc60;}}
}
B52dc7b:L52dc7b:{c.instructions+=1;NFSU2_TR(0x52dc7b);
{goto L52dc99;}
}
B52dc7d:L52dc7d:{c.instructions+=2;NFSU2_TR(0x52dc7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52dc7f:{NFSU2_TR(0x52dc7f);
if(r1(R+518)){{goto L52dc99;}}
}
B52dc81:L52dc81:{c.instructions+=2;NFSU2_TR(0x52dc81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52dc84:{NFSU2_TR(0x52dc84);
if(r1(R+518)){{goto L52dc96;}}
}
B52dc86:L52dc86:{c.instructions+=3;NFSU2_TR(0x52dc86);
__builtin_memmove((R+4),(R+28),4);
}
B52dc88:{NFSU2_TR(0x52dc88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc8b:{NFSU2_TR(0x52dc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dc90ull));
TAIL_STATIC(0x517720u,517);
}
B52dc90:L52dc90:{c.instructions+=2;NFSU2_TR(0x52dc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dc93:{NFSU2_TR(0x52dc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc96:L52dc96:{c.instructions+=1;NFSU2_TR(0x52dc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dc99:L52dc99:{c.instructions+=7;NFSU2_TR(0x52dc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dc9c:{NFSU2_TR(0x52dc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52dc9d:{NFSU2_TR(0x52dc9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52dc9e:{NFSU2_TR(0x52dc9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52dc9f:{NFSU2_TR(0x52dc9f);
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
B52dca1:{NFSU2_TR(0x52dca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52dca2:{NFSU2_TR(0x52dca2);
if(r1(R+518)){{goto L52dcb4;}}
}
B52dca4:L52dca4:{c.instructions+=4;NFSU2_TR(0x52dca4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dca6:{NFSU2_TR(0x52dca6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcab:{NFSU2_TR(0x52dcab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcac:{NFSU2_TR(0x52dcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dcb1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B52dcb1:L52dcb1:{c.instructions+=1;NFSU2_TR(0x52dcb1);
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
B52dcb4:L52dcb4:{c.instructions+=1;NFSU2_TR(0x52dcb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52dcc0:L52dcc0:{c.instructions+=12;NFSU2_TR(0x52dcc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B52dcc3:{NFSU2_TR(0x52dcc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcc4:{NFSU2_TR(0x52dcc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcc5:{NFSU2_TR(0x52dcc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcc6:{NFSU2_TR(0x52dcc6);
__builtin_memmove((R+24),(R+4),4);
}
B52dcc8:{NFSU2_TR(0x52dcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52dccb:{NFSU2_TR(0x52dccb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52dccf:{NFSU2_TR(0x52dccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcd0:{NFSU2_TR(0x52dcd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52dcd4:{NFSU2_TR(0x52dcd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcd5:{NFSU2_TR(0x52dcd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcd6:{NFSU2_TR(0x52dcd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dcdbull));
TAIL_STATIC(0x51d730u,51d);
}
B52dcdb:L52dcdb:{c.instructions+=11;NFSU2_TR(0x52dcdb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dcdf:{NFSU2_TR(0x52dcdf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52dce5:{NFSU2_TR(0x52dce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dce8:{NFSU2_TR(0x52dce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dceb:{NFSU2_TR(0x52dceb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52dcee:{NFSU2_TR(0x52dcee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dcf2:{NFSU2_TR(0x52dcf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52dcf6:{NFSU2_TR(0x52dcf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcf7:{NFSU2_TR(0x52dcf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcf8:{NFSU2_TR(0x52dcf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dcf9:{NFSU2_TR(0x52dcf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dcfeull));
TAIL_STATIC(0x51d380u,51d);
}
B52dcfe:L52dcfe:{c.instructions+=11;NFSU2_TR(0x52dcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52dd01:{NFSU2_TR(0x52dd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52dd04:{NFSU2_TR(0x52dd04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dd07:{NFSU2_TR(0x52dd07);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52dd0b:{NFSU2_TR(0x52dd0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dd0f:{NFSU2_TR(0x52dd0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd10:{NFSU2_TR(0x52dd10);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52dd14:{NFSU2_TR(0x52dd14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd15:{NFSU2_TR(0x52dd15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd16:{NFSU2_TR(0x52dd16);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dd1a:{NFSU2_TR(0x52dd1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dd1full));
TAIL_STATIC(0x51d620u,51d);
}
B52dd1f:L52dd1f:{c.instructions+=10;NFSU2_TR(0x52dd1f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dd23:{NFSU2_TR(0x52dd23);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52dd29:{NFSU2_TR(0x52dd29);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dd2d:{NFSU2_TR(0x52dd2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52dd30:{NFSU2_TR(0x52dd30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd31:{NFSU2_TR(0x52dd31);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52dd35:{NFSU2_TR(0x52dd35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd36:{NFSU2_TR(0x52dd36);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dd39:{NFSU2_TR(0x52dd39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd3a:{NFSU2_TR(0x52dd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dd3full));
TAIL_STATIC(0x51d4d0u,51d);
}
B52dd3f:L52dd3f:{c.instructions+=9;NFSU2_TR(0x52dd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52dd42:{NFSU2_TR(0x52dd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dd45:{NFSU2_TR(0x52dd45);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52dd49:{NFSU2_TR(0x52dd49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd4a:{NFSU2_TR(0x52dd4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52dd4e:{NFSU2_TR(0x52dd4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd4f:{NFSU2_TR(0x52dd4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd50:{NFSU2_TR(0x52dd50);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dd54:{NFSU2_TR(0x52dd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dd59ull));
TAIL_STATIC(0x51d070u,51d);
}
B52dd59:L52dd59:{c.instructions+=6;NFSU2_TR(0x52dd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dd5d:{NFSU2_TR(0x52dd5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52dd61:{NFSU2_TR(0x52dd61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd62:{NFSU2_TR(0x52dd62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd63:{NFSU2_TR(0x52dd63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd64:{NFSU2_TR(0x52dd64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dd69ull));
TAIL_STATIC(0x51d380u,51d);
}
B52dd69:L52dd69:{c.instructions+=11;NFSU2_TR(0x52dd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dd6c:{NFSU2_TR(0x52dd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52dd6f:{NFSU2_TR(0x52dd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dd72:{NFSU2_TR(0x52dd72);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52dd76:{NFSU2_TR(0x52dd76);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dd7a:{NFSU2_TR(0x52dd7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd7b:{NFSU2_TR(0x52dd7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52dd7f:{NFSU2_TR(0x52dd7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd80:{NFSU2_TR(0x52dd80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd81:{NFSU2_TR(0x52dd81);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dd85:{NFSU2_TR(0x52dd85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dd8aull));
TAIL_STATIC(0x51d620u,51d);
}
B52dd8a:L52dd8a:{c.instructions+=10;NFSU2_TR(0x52dd8a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dd8e:{NFSU2_TR(0x52dd8e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52dd94:{NFSU2_TR(0x52dd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dd98:{NFSU2_TR(0x52dd98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B52dd9b:{NFSU2_TR(0x52dd9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dd9c:{NFSU2_TR(0x52dd9c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52dda0:{NFSU2_TR(0x52dda0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dda1:{NFSU2_TR(0x52dda1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dda4:{NFSU2_TR(0x52dda4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dda5:{NFSU2_TR(0x52dda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ddaaull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52ddaa:L52ddaa:{c.instructions+=9;NFSU2_TR(0x52ddaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ddad:{NFSU2_TR(0x52ddad);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ddb1:{NFSU2_TR(0x52ddb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52ddb4:{NFSU2_TR(0x52ddb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52ddb8:{NFSU2_TR(0x52ddb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddb9:{NFSU2_TR(0x52ddb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52ddbd:{NFSU2_TR(0x52ddbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddbe:{NFSU2_TR(0x52ddbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddbf:{NFSU2_TR(0x52ddbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ddc4ull));
TAIL_STATIC(0x51d070u,51d);
}
B52ddc4:L52ddc4:{c.instructions+=9;NFSU2_TR(0x52ddc4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52ddc8:{NFSU2_TR(0x52ddc8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ddcc:{NFSU2_TR(0x52ddcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ddd0:{NFSU2_TR(0x52ddd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52ddd3:{NFSU2_TR(0x52ddd3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ddd9:{NFSU2_TR(0x52ddd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dddc:{NFSU2_TR(0x52dddc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dddd:{NFSU2_TR(0x52dddd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddde:{NFSU2_TR(0x52ddde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dde3ull));
TAIL_STATIC(0x51d380u,51d);
}
B52dde3:L52dde3:{c.instructions+=11;NFSU2_TR(0x52dde3);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dde6:{NFSU2_TR(0x52dde6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52ddec:{NFSU2_TR(0x52ddec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ddef:{NFSU2_TR(0x52ddef);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52ddf3:{NFSU2_TR(0x52ddf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddf4:{NFSU2_TR(0x52ddf4);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52ddf7:{NFSU2_TR(0x52ddf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52ddfb:{NFSU2_TR(0x52ddfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddfc:{NFSU2_TR(0x52ddfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ddfd:{NFSU2_TR(0x52ddfd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52de01:{NFSU2_TR(0x52de01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52de06ull));
TAIL_STATIC(0x51d730u,51d);
}
B52de06:L52de06:{c.instructions+=11;NFSU2_TR(0x52de06);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52de09:{NFSU2_TR(0x52de09);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52de0f:{NFSU2_TR(0x52de0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52de12:{NFSU2_TR(0x52de12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B52de15:{NFSU2_TR(0x52de15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de16:{NFSU2_TR(0x52de16);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52de1a:{NFSU2_TR(0x52de1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de1b:{NFSU2_TR(0x52de1b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52de1f:{NFSU2_TR(0x52de1f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52de22:{NFSU2_TR(0x52de22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de23:{NFSU2_TR(0x52de23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52de28ull));
TAIL_STATIC(0x51d380u,51d);
}
B52de28:L52de28:{c.instructions+=10;NFSU2_TR(0x52de28);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52de2b:{NFSU2_TR(0x52de2b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52de31:{NFSU2_TR(0x52de31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52de34:{NFSU2_TR(0x52de34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de35:{NFSU2_TR(0x52de35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de36:{NFSU2_TR(0x52de36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52de39:{NFSU2_TR(0x52de39);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52de3d:{NFSU2_TR(0x52de3d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52de40:{NFSU2_TR(0x52de40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de41:{NFSU2_TR(0x52de41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52de46ull));
TAIL_STATIC(0x51d380u,51d);
}
B52de46:L52de46:{c.instructions+=4;NFSU2_TR(0x52de46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52de49:{NFSU2_TR(0x52de49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52de4c:{NFSU2_TR(0x52de4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52de4e:{NFSU2_TR(0x52de4e);
if(r1(R+518)){{goto L52de6f;}}
}
B52de50:L52de50:{c.instructions+=9;NFSU2_TR(0x52de50);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52de53:{NFSU2_TR(0x52de53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52de56:{NFSU2_TR(0x52de56);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52de59:{NFSU2_TR(0x52de59);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52de5d:{NFSU2_TR(0x52de5d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52de60:{NFSU2_TR(0x52de60);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52de63:{NFSU2_TR(0x52de63);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52de66:{NFSU2_TR(0x52de66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de67:{NFSU2_TR(0x52de67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52de6cull));
TAIL_STATIC(0x51d380u,51d);
}
B52de6c:L52de6c:{c.instructions+=1;NFSU2_TR(0x52de6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52de6f:L52de6f:{c.instructions+=5;NFSU2_TR(0x52de6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52de70:{NFSU2_TR(0x52de70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52de71:{NFSU2_TR(0x52de71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52de72:{NFSU2_TR(0x52de72);
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
B52de75:{NFSU2_TR(0x52de75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52de80:L52de80:{c.instructions+=6;NFSU2_TR(0x52de80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52de84:{NFSU2_TR(0x52de84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de85:{NFSU2_TR(0x52de85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de86:{NFSU2_TR(0x52de86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52de87:{NFSU2_TR(0x52de87);
__builtin_memmove((R+24),(R+4),4);
}
B52de89:{NFSU2_TR(0x52de89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52de8eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52db40u);}goto L52db40;}
}
B52de8e:L52de8e:{c.instructions+=3;NFSU2_TR(0x52de8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52de91:{NFSU2_TR(0x52de91);
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
B52de93:{NFSU2_TR(0x52de93);
if(r1(R+518)){{goto L52dee4;}}
}
B52de95:L52de95:{c.instructions+=3;NFSU2_TR(0x52de95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52de98:{NFSU2_TR(0x52de98);
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
B52de9a:{NFSU2_TR(0x52de9a);
if(r1(R+518)){{goto L52dee4;}}
}
B52de9c:L52de9c:{c.instructions+=1;NFSU2_TR(0x52de9c);
__builtin_memmove((R+16),(R+16),4);
}
B52dea0:L52dea0:{c.instructions+=2;NFSU2_TR(0x52dea0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dea5:{NFSU2_TR(0x52dea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52deaaull));
TAIL_STATIC(0x505450u,505);
}
B52deaa:L52deaa:{c.instructions+=4;NFSU2_TR(0x52deaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dead:{NFSU2_TR(0x52dead);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52deb0:{NFSU2_TR(0x52deb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52deb2:{NFSU2_TR(0x52deb2);
if(r1(R+518)){{goto L52dec0;}}
}
B52deb4:L52deb4:{c.instructions+=3;NFSU2_TR(0x52deb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52deb7:{NFSU2_TR(0x52deb7);
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
B52deb9:{NFSU2_TR(0x52deb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52dea0u);}goto L52dea0;}}
}
B52debb:L52debb:{c.instructions+=3;NFSU2_TR(0x52debb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52debc:{NFSU2_TR(0x52debc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52debd:{NFSU2_TR(0x52debd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52dec0:L52dec0:{c.instructions+=2;NFSU2_TR(0x52dec0);
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
B52dec2:{NFSU2_TR(0x52dec2);
if(r1(R+518)){{goto L52dee4;}}
}
B52dec4:L52dec4:{c.instructions+=2;NFSU2_TR(0x52dec4);
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
B52dec7:{NFSU2_TR(0x52dec7);
if(r1(R+518)){{goto L52dedd;}}
}
B52dec9:L52dec9:{c.instructions+=3;NFSU2_TR(0x52dec9);
__builtin_memmove((R+4),(R+28),4);
}
B52decb:{NFSU2_TR(0x52decb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52dece:{NFSU2_TR(0x52dece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ded3ull));
TAIL_STATIC(0x517720u,517);
}
B52ded3:L52ded3:{c.instructions+=2;NFSU2_TR(0x52ded3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ded6:{NFSU2_TR(0x52ded6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52dedd:L52dedd:{c.instructions+=1;NFSU2_TR(0x52dedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52dee4:L52dee4:{c.instructions+=3;NFSU2_TR(0x52dee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52dee5:{NFSU2_TR(0x52dee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52dee6:{NFSU2_TR(0x52dee6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52def0:L52def0:{c.instructions+=10;NFSU2_TR(0x52def0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52def3:{NFSU2_TR(0x52def3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52def4:{NFSU2_TR(0x52def4);
__builtin_memmove((R+24),(R+4),4);
}
B52def6:{NFSU2_TR(0x52def6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52def9:{NFSU2_TR(0x52def9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52defc:{NFSU2_TR(0x52defc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52deff:{NFSU2_TR(0x52deff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df00:{NFSU2_TR(0x52df00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df01:{NFSU2_TR(0x52df01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df02:{NFSU2_TR(0x52df02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df07ull));
TAIL_STATIC(0x51d380u,51d);
}
B52df07:L52df07:{c.instructions+=14;NFSU2_TR(0x52df07);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52df0a:{NFSU2_TR(0x52df0a);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52df0d:{NFSU2_TR(0x52df0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52df10:{NFSU2_TR(0x52df10);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52df16:{NFSU2_TR(0x52df16);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52df1a:{NFSU2_TR(0x52df1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df1b:{NFSU2_TR(0x52df1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B52df1d:{NFSU2_TR(0x52df1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52df21:{NFSU2_TR(0x52df21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52df25:{NFSU2_TR(0x52df25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52df28:{NFSU2_TR(0x52df28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df29:{NFSU2_TR(0x52df29);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52df2d:{NFSU2_TR(0x52df2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df2e:{NFSU2_TR(0x52df2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df33ull));
TAIL_STATIC(0x51d730u,51d);
}
B52df33:L52df33:{c.instructions+=11;NFSU2_TR(0x52df33);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52df37:{NFSU2_TR(0x52df37);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52df3d:{NFSU2_TR(0x52df3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52df41:{NFSU2_TR(0x52df41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52df44:{NFSU2_TR(0x52df44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B52df47:{NFSU2_TR(0x52df47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52df4b:{NFSU2_TR(0x52df4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df4c:{NFSU2_TR(0x52df4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df4d:{NFSU2_TR(0x52df4d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52df50:{NFSU2_TR(0x52df50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df51:{NFSU2_TR(0x52df51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df56ull));
TAIL_STATIC(0x51d380u,51d);
}
B52df56:L52df56:{c.instructions+=4;NFSU2_TR(0x52df56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52df59:{NFSU2_TR(0x52df59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52df5c:{NFSU2_TR(0x52df5c);
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
B52df5f:{NFSU2_TR(0x52df5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52df62:L52df62:{c.instructions+=7;NFSU2_TR(0x52df62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52df65:{NFSU2_TR(0x52df65);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52df69:{NFSU2_TR(0x52df69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df6a:{NFSU2_TR(0x52df6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52df6e:{NFSU2_TR(0x52df6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df6f:{NFSU2_TR(0x52df6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df70:{NFSU2_TR(0x52df70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df75ull));
TAIL_STATIC(0x51d730u,51d);
}
B52df75:L52df75:{c.instructions+=12;NFSU2_TR(0x52df75);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52df78:{NFSU2_TR(0x52df78);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52df7e:{NFSU2_TR(0x52df7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52df81:{NFSU2_TR(0x52df81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52df84:{NFSU2_TR(0x52df84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52df87:{NFSU2_TR(0x52df87);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52df8b:{NFSU2_TR(0x52df8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df8c:{NFSU2_TR(0x52df8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df8d:{NFSU2_TR(0x52df8d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52df91:{NFSU2_TR(0x52df91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52df94:{NFSU2_TR(0x52df94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52df95:{NFSU2_TR(0x52df95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52df9aull));
TAIL_STATIC(0x51d380u,51d);
}
B52df9a:L52df9a:{c.instructions+=11;NFSU2_TR(0x52df9a);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52df9d:{NFSU2_TR(0x52df9d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52dfa3:{NFSU2_TR(0x52dfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dfa6:{NFSU2_TR(0x52dfa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52dfa9:{NFSU2_TR(0x52dfa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dfaa:{NFSU2_TR(0x52dfaa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52dfae:{NFSU2_TR(0x52dfae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dfaf:{NFSU2_TR(0x52dfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52dfb2:{NFSU2_TR(0x52dfb2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dfb5:{NFSU2_TR(0x52dfb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dfb6:{NFSU2_TR(0x52dfb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dfbbull));
TAIL_STATIC(0x51d380u,51d);
}
B52dfbb:L52dfbb:{c.instructions+=4;NFSU2_TR(0x52dfbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dfbe:{NFSU2_TR(0x52dfbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52dfc1:{NFSU2_TR(0x52dfc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52dfc3:{NFSU2_TR(0x52dfc3);
if(r1(R+518)){{goto L52dfe4;}}
}
B52dfc5:L52dfc5:{c.instructions+=9;NFSU2_TR(0x52dfc5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dfc8:{NFSU2_TR(0x52dfc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52dfcb:{NFSU2_TR(0x52dfcb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52dfce:{NFSU2_TR(0x52dfce);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dfd2:{NFSU2_TR(0x52dfd2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52dfd5:{NFSU2_TR(0x52dfd5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52dfd8:{NFSU2_TR(0x52dfd8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52dfdb:{NFSU2_TR(0x52dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dfdc:{NFSU2_TR(0x52dfdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52dfe1ull));
TAIL_STATIC(0x51d380u,51d);
}
B52dfe1:L52dfe1:{c.instructions+=1;NFSU2_TR(0x52dfe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52dfe4:L52dfe4:{c.instructions+=3;NFSU2_TR(0x52dfe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52dfe5:{NFSU2_TR(0x52dfe5);
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
B52dfe8:{NFSU2_TR(0x52dfe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52dff0:L52dff0:{c.instructions+=7;NFSU2_TR(0x52dff0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dff1:{NFSU2_TR(0x52dff1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52dff2:{NFSU2_TR(0x52dff2);
__builtin_memmove((R+20),(R+4),4);
}
B52dff4:{NFSU2_TR(0x52dff4);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52dffa:{NFSU2_TR(0x52dffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52dffd:{NFSU2_TR(0x52dffd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52dfff:{NFSU2_TR(0x52dfff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x52e001u,52e);
}
XIT:NFSU2_TR_EXIT(0x52d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
