#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56d(u8* __restrict R,Cpu& c);
u32 page_56d(Cpu& c){return body_56d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56d002:goto L56d002;
case 0x56d004:c.instructions+=7;goto B56d004;
case 0x56d007:c.instructions+=6;goto B56d007;
case 0x56d00b:c.instructions+=5;goto B56d00b;
case 0x56d00f:c.instructions+=4;goto B56d00f;
case 0x56d015:c.instructions+=3;goto B56d015;
case 0x56d016:c.instructions+=2;goto B56d016;
case 0x56d017:c.instructions+=1;goto B56d017;
case 0x56d020:goto L56d020;
case 0x56d024:c.instructions+=9;goto B56d024;
case 0x56d028:c.instructions+=8;goto B56d028;
case 0x56d02a:c.instructions+=7;goto B56d02a;
case 0x56d030:c.instructions+=6;goto B56d030;
case 0x56d032:c.instructions+=5;goto B56d032;
case 0x56d036:c.instructions+=4;goto B56d036;
case 0x56d03a:c.instructions+=3;goto B56d03a;
case 0x56d03c:c.instructions+=2;goto B56d03c;
case 0x56d03f:c.instructions+=1;goto B56d03f;
case 0x56d041:goto L56d041;
case 0x56d043:c.instructions+=1;goto B56d043;
case 0x56d047:goto L56d047;
case 0x56d050:goto L56d050;
case 0x56d051:c.instructions+=5;goto B56d051;
case 0x56d053:c.instructions+=4;goto B56d053;
case 0x56d055:c.instructions+=3;goto B56d055;
case 0x56d05a:c.instructions+=2;goto B56d05a;
case 0x56d05c:c.instructions+=1;goto B56d05c;
case 0x56d061:goto L56d061;
case 0x56d064:c.instructions+=3;goto B56d064;
case 0x56d065:c.instructions+=2;goto B56d065;
case 0x56d067:c.instructions+=1;goto B56d067;
case 0x56d06c:goto L56d06c;
case 0x56d076:c.instructions+=3;goto B56d076;
case 0x56d078:c.instructions+=2;goto B56d078;
case 0x56d079:c.instructions+=1;goto B56d079;
case 0x56d080:goto L56d080;
case 0x56d081:c.instructions+=12;goto B56d081;
case 0x56d083:c.instructions+=11;goto B56d083;
case 0x56d086:c.instructions+=10;goto B56d086;
case 0x56d089:c.instructions+=9;goto B56d089;
case 0x56d08a:c.instructions+=8;goto B56d08a;
case 0x56d08c:c.instructions+=7;goto B56d08c;
case 0x56d090:c.instructions+=6;goto B56d090;
case 0x56d091:c.instructions+=5;goto B56d091;
case 0x56d095:c.instructions+=4;goto B56d095;
case 0x56d096:c.instructions+=3;goto B56d096;
case 0x56d098:c.instructions+=2;goto B56d098;
case 0x56d0a0:c.instructions+=1;goto B56d0a0;
case 0x56d0a5:goto L56d0a5;
case 0x56d0a8:c.instructions+=19;goto B56d0a8;
case 0x56d0aa:c.instructions+=18;goto B56d0aa;
case 0x56d0ad:c.instructions+=17;goto B56d0ad;
case 0x56d0b0:c.instructions+=16;goto B56d0b0;
case 0x56d0b3:c.instructions+=15;goto B56d0b3;
case 0x56d0b6:c.instructions+=14;goto B56d0b6;
case 0x56d0b9:c.instructions+=13;goto B56d0b9;
case 0x56d0bf:c.instructions+=12;goto B56d0bf;
case 0x56d0c1:c.instructions+=11;goto B56d0c1;
case 0x56d0c7:c.instructions+=10;goto B56d0c7;
case 0x56d0c9:c.instructions+=9;goto B56d0c9;
case 0x56d0cb:c.instructions+=8;goto B56d0cb;
case 0x56d0d1:c.instructions+=7;goto B56d0d1;
case 0x56d0d3:c.instructions+=6;goto B56d0d3;
case 0x56d0d5:c.instructions+=5;goto B56d0d5;
case 0x56d0d7:c.instructions+=4;goto B56d0d7;
case 0x56d0db:c.instructions+=3;goto B56d0db;
case 0x56d0dd:c.instructions+=2;goto B56d0dd;
case 0x56d0e0:c.instructions+=1;goto B56d0e0;
case 0x56d0e2:goto L56d0e2;
case 0x56d0e6:c.instructions+=12;goto B56d0e6;
case 0x56d0ea:c.instructions+=11;goto B56d0ea;
case 0x56d0ec:c.instructions+=10;goto B56d0ec;
case 0x56d0ee:c.instructions+=9;goto B56d0ee;
case 0x56d0f0:c.instructions+=8;goto B56d0f0;
case 0x56d0f2:c.instructions+=7;goto B56d0f2;
case 0x56d0f4:c.instructions+=6;goto B56d0f4;
case 0x56d0fa:c.instructions+=5;goto B56d0fa;
case 0x56d100:c.instructions+=4;goto B56d100;
case 0x56d102:c.instructions+=3;goto B56d102;
case 0x56d104:c.instructions+=2;goto B56d104;
case 0x56d107:c.instructions+=1;goto B56d107;
case 0x56d109:goto L56d109;
case 0x56d10b:c.instructions+=5;goto B56d10b;
case 0x56d111:c.instructions+=4;goto B56d111;
case 0x56d112:c.instructions+=3;goto B56d112;
case 0x56d114:c.instructions+=2;goto B56d114;
case 0x56d115:c.instructions+=1;goto B56d115;
case 0x56d118:goto L56d118;
case 0x56d11a:c.instructions+=1;goto B56d11a;
case 0x56d11e:goto L56d11e;
case 0x56d11f:c.instructions+=3;goto B56d11f;
case 0x56d121:c.instructions+=2;goto B56d121;
case 0x56d122:c.instructions+=1;goto B56d122;
case 0x56d130:goto L56d130;
case 0x56d140:goto L56d140;
case 0x56d142:c.instructions+=15;goto B56d142;
case 0x56d147:c.instructions+=14;goto B56d147;
case 0x56d14d:c.instructions+=13;goto B56d14d;
case 0x56d14e:c.instructions+=12;goto B56d14e;
case 0x56d155:c.instructions+=11;goto B56d155;
case 0x56d156:c.instructions+=10;goto B56d156;
case 0x56d157:c.instructions+=9;goto B56d157;
case 0x56d159:c.instructions+=8;goto B56d159;
case 0x56d15d:c.instructions+=7;goto B56d15d;
case 0x56d162:c.instructions+=6;goto B56d162;
case 0x56d164:c.instructions+=5;goto B56d164;
case 0x56d169:c.instructions+=4;goto B56d169;
case 0x56d16c:c.instructions+=3;goto B56d16c;
case 0x56d16d:c.instructions+=2;goto B56d16d;
case 0x56d175:c.instructions+=1;goto B56d175;
case 0x56d17a:goto L56d17a;
case 0x56d17d:c.instructions+=2;goto B56d17d;
case 0x56d185:c.instructions+=1;goto B56d185;
case 0x56d18a:goto L56d18a;
case 0x56d18e:c.instructions+=4;goto B56d18e;
case 0x56d18f:c.instructions+=3;goto B56d18f;
case 0x56d196:c.instructions+=2;goto B56d196;
case 0x56d199:c.instructions+=1;goto B56d199;
case 0x56d1a0:goto L56d1a0;
case 0x56d1a1:c.instructions+=15;goto B56d1a1;
case 0x56d1a3:c.instructions+=14;goto B56d1a3;
case 0x56d1a6:c.instructions+=13;goto B56d1a6;
case 0x56d1a9:c.instructions+=12;goto B56d1a9;
case 0x56d1ac:c.instructions+=11;goto B56d1ac;
case 0x56d1b1:c.instructions+=10;goto B56d1b1;
case 0x56d1b2:c.instructions+=9;goto B56d1b2;
case 0x56d1b3:c.instructions+=8;goto B56d1b3;
case 0x56d1b5:c.instructions+=7;goto B56d1b5;
case 0x56d1b6:c.instructions+=6;goto B56d1b6;
case 0x56d1b8:c.instructions+=5;goto B56d1b8;
case 0x56d1ba:c.instructions+=4;goto B56d1ba;
case 0x56d1bd:c.instructions+=3;goto B56d1bd;
case 0x56d1c1:c.instructions+=2;goto B56d1c1;
case 0x56d1c7:c.instructions+=1;goto B56d1c7;
case 0x56d1c9:goto L56d1c9;
case 0x56d1cc:c.instructions+=1;goto B56d1cc;
case 0x56d1d0:goto L56d1d0;
case 0x56d1d2:c.instructions+=55;goto B56d1d2;
case 0x56d1d6:c.instructions+=54;goto B56d1d6;
case 0x56d1d9:c.instructions+=53;goto B56d1d9;
case 0x56d1dd:c.instructions+=52;goto B56d1dd;
case 0x56d1df:c.instructions+=51;goto B56d1df;
case 0x56d1e7:c.instructions+=50;goto B56d1e7;
case 0x56d1eb:c.instructions+=49;goto B56d1eb;
case 0x56d1f1:c.instructions+=48;goto B56d1f1;
case 0x56d1f5:c.instructions+=47;goto B56d1f5;
case 0x56d1f8:c.instructions+=46;goto B56d1f8;
case 0x56d1fc:c.instructions+=45;goto B56d1fc;
case 0x56d202:c.instructions+=44;goto B56d202;
case 0x56d206:c.instructions+=43;goto B56d206;
case 0x56d20c:c.instructions+=42;goto B56d20c;
case 0x56d20e:c.instructions+=41;goto B56d20e;
case 0x56d214:c.instructions+=40;goto B56d214;
case 0x56d21a:c.instructions+=39;goto B56d21a;
case 0x56d21c:c.instructions+=38;goto B56d21c;
case 0x56d222:c.instructions+=37;goto B56d222;
case 0x56d226:c.instructions+=36;goto B56d226;
case 0x56d22c:c.instructions+=35;goto B56d22c;
case 0x56d230:c.instructions+=34;goto B56d230;
case 0x56d236:c.instructions+=33;goto B56d236;
case 0x56d238:c.instructions+=32;goto B56d238;
case 0x56d23e:c.instructions+=31;goto B56d23e;
case 0x56d244:c.instructions+=30;goto B56d244;
case 0x56d246:c.instructions+=29;goto B56d246;
case 0x56d24c:c.instructions+=28;goto B56d24c;
case 0x56d250:c.instructions+=27;goto B56d250;
case 0x56d256:c.instructions+=26;goto B56d256;
case 0x56d25a:c.instructions+=25;goto B56d25a;
case 0x56d260:c.instructions+=24;goto B56d260;
case 0x56d262:c.instructions+=23;goto B56d262;
case 0x56d268:c.instructions+=22;goto B56d268;
case 0x56d26e:c.instructions+=21;goto B56d26e;
case 0x56d270:c.instructions+=20;goto B56d270;
case 0x56d276:c.instructions+=19;goto B56d276;
case 0x56d27a:c.instructions+=18;goto B56d27a;
case 0x56d27e:c.instructions+=17;goto B56d27e;
case 0x56d280:c.instructions+=16;goto B56d280;
case 0x56d284:c.instructions+=15;goto B56d284;
case 0x56d288:c.instructions+=14;goto B56d288;
case 0x56d28e:c.instructions+=13;goto B56d28e;
case 0x56d290:c.instructions+=12;goto B56d290;
case 0x56d294:c.instructions+=11;goto B56d294;
case 0x56d297:c.instructions+=10;goto B56d297;
case 0x56d29a:c.instructions+=9;goto B56d29a;
case 0x56d29e:c.instructions+=8;goto B56d29e;
case 0x56d2a1:c.instructions+=7;goto B56d2a1;
case 0x56d2a5:c.instructions+=6;goto B56d2a5;
case 0x56d2a7:c.instructions+=5;goto B56d2a7;
case 0x56d2ab:c.instructions+=4;goto B56d2ab;
case 0x56d2af:c.instructions+=3;goto B56d2af;
case 0x56d2b3:c.instructions+=2;goto B56d2b3;
case 0x56d2b7:c.instructions+=1;goto B56d2b7;
case 0x56d2b9:goto L56d2b9;
case 0x56d2bb:c.instructions+=6;goto B56d2bb;
case 0x56d2bd:c.instructions+=5;goto B56d2bd;
case 0x56d2bf:c.instructions+=4;goto B56d2bf;
case 0x56d2c3:c.instructions+=3;goto B56d2c3;
case 0x56d2c4:c.instructions+=2;goto B56d2c4;
case 0x56d2ca:c.instructions+=1;goto B56d2ca;
case 0x56d2cf:goto L56d2cf;
case 0x56d2d5:c.instructions+=4;goto B56d2d5;
case 0x56d2d7:c.instructions+=3;goto B56d2d7;
case 0x56d2db:c.instructions+=2;goto B56d2db;
case 0x56d2dd:c.instructions+=1;goto B56d2dd;
case 0x56d2df:goto L56d2df;
case 0x56d2e5:c.instructions+=2;goto B56d2e5;
case 0x56d2e8:c.instructions+=1;goto B56d2e8;
case 0x56d2ec:goto L56d2ec;
case 0x56d2ee:c.instructions+=5;goto B56d2ee;
case 0x56d2f4:c.instructions+=4;goto B56d2f4;
case 0x56d2f5:c.instructions+=3;goto B56d2f5;
case 0x56d2f8:c.instructions+=2;goto B56d2f8;
case 0x56d2f9:c.instructions+=1;goto B56d2f9;
case 0x56d2fe:goto L56d2fe;
case 0x56d302:c.instructions+=13;goto B56d302;
case 0x56d306:c.instructions+=12;goto B56d306;
case 0x56d308:c.instructions+=11;goto B56d308;
case 0x56d30c:c.instructions+=10;goto B56d30c;
case 0x56d310:c.instructions+=9;goto B56d310;
case 0x56d314:c.instructions+=8;goto B56d314;
case 0x56d317:c.instructions+=7;goto B56d317;
case 0x56d31a:c.instructions+=6;goto B56d31a;
case 0x56d31c:c.instructions+=5;goto B56d31c;
case 0x56d31f:c.instructions+=4;goto B56d31f;
case 0x56d322:c.instructions+=3;goto B56d322;
case 0x56d328:c.instructions+=2;goto B56d328;
case 0x56d32e:c.instructions+=1;goto B56d32e;
case 0x56d334:goto L56d334;
case 0x56d335:c.instructions+=5;goto B56d335;
case 0x56d336:c.instructions+=4;goto B56d336;
case 0x56d337:c.instructions+=3;goto B56d337;
case 0x56d339:c.instructions+=2;goto B56d339;
case 0x56d33a:c.instructions+=1;goto B56d33a;
case 0x56d340:goto L56d340;
case 0x56d341:c.instructions+=5;goto B56d341;
case 0x56d342:c.instructions+=4;goto B56d342;
case 0x56d344:c.instructions+=3;goto B56d344;
case 0x56d346:c.instructions+=2;goto B56d346;
case 0x56d348:c.instructions+=1;goto B56d348;
case 0x56d34d:goto L56d34d;
case 0x56d34f:c.instructions+=2;goto B56d34f;
case 0x56d351:c.instructions+=1;goto B56d351;
case 0x56d356:goto L56d356;
case 0x56d358:c.instructions+=3;goto B56d358;
case 0x56d35b:c.instructions+=2;goto B56d35b;
case 0x56d361:c.instructions+=1;goto B56d361;
case 0x56d366:goto L56d366;
case 0x56d36c:c.instructions+=9;goto B56d36c;
case 0x56d373:c.instructions+=8;goto B56d373;
case 0x56d379:c.instructions+=7;goto B56d379;
case 0x56d37e:c.instructions+=6;goto B56d37e;
case 0x56d381:c.instructions+=5;goto B56d381;
case 0x56d383:c.instructions+=4;goto B56d383;
case 0x56d386:c.instructions+=3;goto B56d386;
case 0x56d38b:c.instructions+=2;goto B56d38b;
case 0x56d38d:c.instructions+=1;goto B56d38d;
case 0x56d392:goto L56d392;
case 0x56d398:c.instructions+=19;goto B56d398;
case 0x56d39e:c.instructions+=18;goto B56d39e;
case 0x56d3a4:c.instructions+=17;goto B56d3a4;
case 0x56d3aa:c.instructions+=16;goto B56d3aa;
case 0x56d3ac:c.instructions+=15;goto B56d3ac;
case 0x56d3b2:c.instructions+=14;goto B56d3b2;
case 0x56d3b4:c.instructions+=13;goto B56d3b4;
case 0x56d3b6:c.instructions+=12;goto B56d3b6;
case 0x56d3bc:c.instructions+=11;goto B56d3bc;
case 0x56d3c2:c.instructions+=10;goto B56d3c2;
case 0x56d3c8:c.instructions+=9;goto B56d3c8;
case 0x56d3d2:c.instructions+=8;goto B56d3d2;
case 0x56d3d8:c.instructions+=7;goto B56d3d8;
case 0x56d3da:c.instructions+=6;goto B56d3da;
case 0x56d3dd:c.instructions+=5;goto B56d3dd;
case 0x56d3e0:c.instructions+=4;goto B56d3e0;
case 0x56d3e3:c.instructions+=3;goto B56d3e3;
case 0x56d3e5:c.instructions+=2;goto B56d3e5;
case 0x56d3e7:c.instructions+=1;goto B56d3e7;
case 0x56d3ec:goto L56d3ec;
case 0x56d3ee:c.instructions+=4;goto B56d3ee;
case 0x56d3f1:c.instructions+=3;goto B56d3f1;
case 0x56d3f3:c.instructions+=2;goto B56d3f3;
case 0x56d3f5:c.instructions+=1;goto B56d3f5;
case 0x56d3f8:goto L56d3f8;
case 0x56d3fa:c.instructions+=2;goto B56d3fa;
case 0x56d3fe:c.instructions+=1;goto B56d3fe;
case 0x56d400:goto L56d400;
case 0x56d403:c.instructions+=2;goto B56d403;
case 0x56d405:c.instructions+=1;goto B56d405;
case 0x56d40a:goto L56d40a;
case 0x56d40d:c.instructions+=3;goto B56d40d;
case 0x56d40f:c.instructions+=2;goto B56d40f;
case 0x56d411:c.instructions+=1;goto B56d411;
case 0x56d416:goto L56d416;
case 0x56d418:c.instructions+=2;goto B56d418;
case 0x56d41a:c.instructions+=1;goto B56d41a;
case 0x56d41d:goto L56d41d;
case 0x56d41f:c.instructions+=5;goto B56d41f;
case 0x56d426:c.instructions+=4;goto B56d426;
case 0x56d429:c.instructions+=3;goto B56d429;
case 0x56d42b:c.instructions+=2;goto B56d42b;
case 0x56d42d:c.instructions+=1;goto B56d42d;
case 0x56d430:goto L56d430;
case 0x56d431:c.instructions+=3;goto B56d431;
case 0x56d438:c.instructions+=2;goto B56d438;
case 0x56d439:c.instructions+=1;goto B56d439;
case 0x56d440:goto L56d440;
case 0x56d441:c.instructions+=2;goto B56d441;
case 0x56d445:c.instructions+=1;goto B56d445;
case 0x56d447:goto L56d447;
case 0x56d449:c.instructions+=2;goto B56d449;
case 0x56d450:c.instructions+=1;goto B56d450;
case 0x56d452:goto L56d452;
case 0x56d455:c.instructions+=10;goto B56d455;
case 0x56d457:c.instructions+=9;goto B56d457;
case 0x56d45a:c.instructions+=8;goto B56d45a;
case 0x56d460:c.instructions+=7;goto B56d460;
case 0x56d466:c.instructions+=6;goto B56d466;
case 0x56d468:c.instructions+=5;goto B56d468;
case 0x56d46c:c.instructions+=4;goto B56d46c;
case 0x56d472:c.instructions+=3;goto B56d472;
case 0x56d474:c.instructions+=2;goto B56d474;
case 0x56d477:c.instructions+=1;goto B56d477;
case 0x56d479:goto L56d479;
case 0x56d47d:c.instructions+=5;goto B56d47d;
case 0x56d483:c.instructions+=4;goto B56d483;
case 0x56d487:c.instructions+=3;goto B56d487;
case 0x56d489:c.instructions+=2;goto B56d489;
case 0x56d48c:c.instructions+=1;goto B56d48c;
case 0x56d48e:goto L56d48e;
case 0x56d490:c.instructions+=1;goto B56d490;
case 0x56d496:goto L56d496;
case 0x56d497:c.instructions+=1;goto B56d497;
case 0x56d498:goto L56d498;
case 0x56d49e:c.instructions+=2;goto B56d49e;
case 0x56d49f:c.instructions+=1;goto B56d49f;
case 0x56d4a0:goto L56d4a0;
case 0x56d4a1:c.instructions+=7;goto B56d4a1;
case 0x56d4a2:c.instructions+=6;goto B56d4a2;
case 0x56d4a6:c.instructions+=5;goto B56d4a6;
case 0x56d4a7:c.instructions+=4;goto B56d4a7;
case 0x56d4a8:c.instructions+=3;goto B56d4a8;
case 0x56d4b0:c.instructions+=2;goto B56d4b0;
case 0x56d4b3:c.instructions+=1;goto B56d4b3;
case 0x56d4b8:goto L56d4b8;
case 0x56d4b9:c.instructions+=2;goto B56d4b9;
case 0x56d4bb:c.instructions+=1;goto B56d4bb;
case 0x56d4c0:goto L56d4c0;
case 0x56d4c4:c.instructions+=4;goto B56d4c4;
case 0x56d4c6:c.instructions+=3;goto B56d4c6;
case 0x56d4c8:c.instructions+=2;goto B56d4c8;
case 0x56d4cb:c.instructions+=1;goto B56d4cb;
case 0x56d4cd:goto L56d4cd;
case 0x56d4d1:c.instructions+=1;goto B56d4d1;
case 0x56d4d3:goto L56d4d3;
case 0x56d4d5:goto L56d4d5;
case 0x56d4db:c.instructions+=2;goto B56d4db;
case 0x56d4dc:c.instructions+=1;goto B56d4dc;
case 0x56d4de:goto L56d4de;
case 0x56d4e2:c.instructions+=5;goto B56d4e2;
case 0x56d4e3:c.instructions+=4;goto B56d4e3;
case 0x56d4e4:c.instructions+=3;goto B56d4e4;
case 0x56d4e5:c.instructions+=2;goto B56d4e5;
case 0x56d4e6:c.instructions+=1;goto B56d4e6;
case 0x56d4f0:goto L56d4f0;
case 0x56d4f2:c.instructions+=1;goto B56d4f2;
case 0x56d4f4:goto L56d4f4;
case 0x56d4fa:c.instructions+=1;goto B56d4fa;
case 0x56d4fb:goto L56d4fb;
case 0x56d4fd:c.instructions+=1;goto B56d4fd;
case 0x56d500:goto L56d500;
case 0x56d501:c.instructions+=7;goto B56d501;
case 0x56d502:c.instructions+=6;goto B56d502;
case 0x56d504:c.instructions+=5;goto B56d504;
case 0x56d507:c.instructions+=4;goto B56d507;
case 0x56d508:c.instructions+=3;goto B56d508;
case 0x56d50c:c.instructions+=2;goto B56d50c;
case 0x56d50e:c.instructions+=1;goto B56d50e;
case 0x56d514:goto L56d514;
case 0x56d517:c.instructions+=1;goto B56d517;
case 0x56d519:goto L56d519;
case 0x56d51c:c.instructions+=8;goto B56d51c;
case 0x56d51f:c.instructions+=7;goto B56d51f;
case 0x56d522:c.instructions+=6;goto B56d522;
case 0x56d523:c.instructions+=5;goto B56d523;
case 0x56d526:c.instructions+=4;goto B56d526;
case 0x56d529:c.instructions+=3;goto B56d529;
case 0x56d52b:c.instructions+=2;goto B56d52b;
case 0x56d52e:c.instructions+=1;goto B56d52e;
case 0x56d530:goto L56d530;
case 0x56d533:c.instructions+=2;goto B56d533;
case 0x56d536:c.instructions+=1;goto B56d536;
case 0x56d539:goto L56d539;
case 0x56d53c:c.instructions+=1;goto B56d53c;
case 0x56d53e:goto L56d53e;
case 0x56d541:c.instructions+=4;goto B56d541;
case 0x56d546:c.instructions+=3;goto B56d546;
case 0x56d549:c.instructions+=2;goto B56d549;
case 0x56d54d:c.instructions+=1;goto B56d54d;
case 0x56d552:goto L56d552;
case 0x56d554:c.instructions+=2;goto B56d554;
case 0x56d559:c.instructions+=1;goto B56d559;
case 0x56d55b:goto L56d55b;
case 0x56d560:goto L56d560;
case 0x56d562:c.instructions+=8;goto B56d562;
case 0x56d565:c.instructions+=7;goto B56d565;
case 0x56d569:c.instructions+=6;goto B56d569;
case 0x56d56d:c.instructions+=5;goto B56d56d;
case 0x56d573:c.instructions+=4;goto B56d573;
case 0x56d576:c.instructions+=3;goto B56d576;
case 0x56d578:c.instructions+=2;goto B56d578;
case 0x56d57b:c.instructions+=1;goto B56d57b;
case 0x56d57d:goto L56d57d;
case 0x56d580:c.instructions+=1;goto B56d580;
case 0x56d582:goto L56d582;
case 0x56d584:goto L56d584;
case 0x56d587:c.instructions+=4;goto B56d587;
case 0x56d58a:c.instructions+=3;goto B56d58a;
case 0x56d58c:c.instructions+=2;goto B56d58c;
case 0x56d58f:c.instructions+=1;goto B56d58f;
case 0x56d591:goto L56d591;
case 0x56d594:c.instructions+=1;goto B56d594;
case 0x56d597:goto L56d597;
case 0x56d59b:c.instructions+=4;goto B56d59b;
case 0x56d59e:c.instructions+=3;goto B56d59e;
case 0x56d5a0:c.instructions+=2;goto B56d5a0;
case 0x56d5a3:c.instructions+=1;goto B56d5a3;
case 0x56d5a5:goto L56d5a5;
case 0x56d5a9:c.instructions+=1;goto B56d5a9;
case 0x56d5ac:goto L56d5ac;
case 0x56d5af:goto L56d5af;
case 0x56d5b0:c.instructions+=3;goto B56d5b0;
case 0x56d5b1:c.instructions+=2;goto B56d5b1;
case 0x56d5b2:c.instructions+=1;goto B56d5b2;
case 0x56d5c0:goto L56d5c0;
case 0x56d5c3:c.instructions+=2;goto B56d5c3;
case 0x56d5c6:c.instructions+=1;goto B56d5c6;
case 0x56d5c8:goto L56d5c8;
case 0x56d5ca:c.instructions+=5;goto B56d5ca;
case 0x56d5cd:c.instructions+=4;goto B56d5cd;
case 0x56d5d0:c.instructions+=3;goto B56d5d0;
case 0x56d5d3:c.instructions+=2;goto B56d5d3;
case 0x56d5da:c.instructions+=1;goto B56d5da;
case 0x56d5dd:goto L56d5dd;
case 0x56d5e0:c.instructions+=3;goto B56d5e0;
case 0x56d5e4:c.instructions+=2;goto B56d5e4;
case 0x56d5e7:c.instructions+=1;goto B56d5e7;
case 0x56d5e9:goto L56d5e9;
case 0x56d5ec:c.instructions+=1;goto B56d5ec;
case 0x56d5ee:goto L56d5ee;
case 0x56d5f1:c.instructions+=8;goto B56d5f1;
case 0x56d5f4:c.instructions+=7;goto B56d5f4;
case 0x56d5f7:c.instructions+=6;goto B56d5f7;
case 0x56d5f8:c.instructions+=5;goto B56d5f8;
case 0x56d5fb:c.instructions+=4;goto B56d5fb;
case 0x56d5fe:c.instructions+=3;goto B56d5fe;
case 0x56d600:c.instructions+=2;goto B56d600;
case 0x56d603:c.instructions+=1;goto B56d603;
case 0x56d605:goto L56d605;
case 0x56d608:c.instructions+=2;goto B56d608;
case 0x56d60b:c.instructions+=1;goto B56d60b;
case 0x56d60e:goto L56d60e;
case 0x56d615:goto L56d615;
case 0x56d620:goto L56d620;
case 0x56d621:c.instructions+=4;goto B56d621;
case 0x56d622:c.instructions+=3;goto B56d622;
case 0x56d624:c.instructions+=2;goto B56d624;
case 0x56d627:c.instructions+=1;goto B56d627;
case 0x56d62c:goto L56d62c;
case 0x56d630:c.instructions+=8;goto B56d630;
case 0x56d634:c.instructions+=7;goto B56d634;
case 0x56d638:c.instructions+=6;goto B56d638;
case 0x56d63a:c.instructions+=5;goto B56d63a;
case 0x56d63c:c.instructions+=4;goto B56d63c;
case 0x56d63f:c.instructions+=3;goto B56d63f;
case 0x56d642:c.instructions+=2;goto B56d642;
case 0x56d645:c.instructions+=1;goto B56d645;
case 0x56d64a:goto L56d64a;
case 0x56d64b:c.instructions+=2;goto B56d64b;
case 0x56d64c:c.instructions+=1;goto B56d64c;
case 0x56d650:goto L56d650;
case 0x56d652:c.instructions+=19;goto B56d652;
case 0x56d655:c.instructions+=18;goto B56d655;
case 0x56d658:c.instructions+=17;goto B56d658;
case 0x56d65b:c.instructions+=16;goto B56d65b;
case 0x56d65e:c.instructions+=15;goto B56d65e;
case 0x56d661:c.instructions+=14;goto B56d661;
case 0x56d664:c.instructions+=13;goto B56d664;
case 0x56d667:c.instructions+=12;goto B56d667;
case 0x56d66a:c.instructions+=11;goto B56d66a;
case 0x56d66d:c.instructions+=10;goto B56d66d;
case 0x56d670:c.instructions+=9;goto B56d670;
case 0x56d673:c.instructions+=8;goto B56d673;
case 0x56d676:c.instructions+=7;goto B56d676;
case 0x56d679:c.instructions+=6;goto B56d679;
case 0x56d67c:c.instructions+=5;goto B56d67c;
case 0x56d67f:c.instructions+=4;goto B56d67f;
case 0x56d684:c.instructions+=3;goto B56d684;
case 0x56d687:c.instructions+=2;goto B56d687;
case 0x56d68a:c.instructions+=1;goto B56d68a;
case 0x56d68c:goto L56d68c;
case 0x56d68f:c.instructions+=1;goto B56d68f;
case 0x56d691:goto L56d691;
case 0x56d694:c.instructions+=6;goto B56d694;
case 0x56d69a:c.instructions+=5;goto B56d69a;
case 0x56d6a1:c.instructions+=4;goto B56d6a1;
case 0x56d6a4:c.instructions+=3;goto B56d6a4;
case 0x56d6a6:c.instructions+=2;goto B56d6a6;
case 0x56d6a9:c.instructions+=1;goto B56d6a9;
case 0x56d6ab:goto L56d6ab;
case 0x56d6ae:c.instructions+=2;goto B56d6ae;
case 0x56d6b4:c.instructions+=1;goto B56d6b4;
case 0x56d6b7:goto L56d6b7;
case 0x56d6be:goto L56d6be;
case 0x56d6c0:goto L56d6c0;
case 0x56d6c3:c.instructions+=3;goto B56d6c3;
case 0x56d6c5:c.instructions+=2;goto B56d6c5;
case 0x56d6c7:c.instructions+=1;goto B56d6c7;
case 0x56d6c9:goto L56d6c9;
case 0x56d6cc:c.instructions+=1;goto B56d6cc;
case 0x56d6cd:goto L56d6cd;
case 0x56d6d0:c.instructions+=5;goto B56d6d0;
case 0x56d6d3:c.instructions+=4;goto B56d6d3;
case 0x56d6d6:c.instructions+=3;goto B56d6d6;
case 0x56d6d9:c.instructions+=2;goto B56d6d9;
case 0x56d6dc:c.instructions+=1;goto B56d6dc;
case 0x56d6de:goto L56d6de;
case 0x56d6e1:c.instructions+=1;goto B56d6e1;
case 0x56d6e3:goto L56d6e3;
case 0x56d6e6:c.instructions+=8;goto B56d6e6;
case 0x56d6e9:c.instructions+=7;goto B56d6e9;
case 0x56d6ec:c.instructions+=6;goto B56d6ec;
case 0x56d6ed:c.instructions+=5;goto B56d6ed;
case 0x56d6f0:c.instructions+=4;goto B56d6f0;
case 0x56d6f3:c.instructions+=3;goto B56d6f3;
case 0x56d6f5:c.instructions+=2;goto B56d6f5;
case 0x56d6f8:c.instructions+=1;goto B56d6f8;
case 0x56d6fa:goto L56d6fa;
case 0x56d6fd:c.instructions+=2;goto B56d6fd;
case 0x56d700:c.instructions+=1;goto B56d700;
case 0x56d703:goto L56d703;
case 0x56d70a:goto L56d70a;
case 0x56d710:goto L56d710;
case 0x56d711:c.instructions+=5;goto B56d711;
case 0x56d712:c.instructions+=4;goto B56d712;
case 0x56d713:c.instructions+=3;goto B56d713;
case 0x56d714:c.instructions+=2;goto B56d714;
case 0x56d716:c.instructions+=1;goto B56d716;
case 0x56d718:goto L56d718;
case 0x56d71c:c.instructions+=2;goto B56d71c;
case 0x56d71e:c.instructions+=1;goto B56d71e;
case 0x56d720:goto L56d720;
case 0x56d723:c.instructions+=2;goto B56d723;
case 0x56d725:c.instructions+=1;goto B56d725;
case 0x56d727:goto L56d727;
case 0x56d72a:c.instructions+=2;goto B56d72a;
case 0x56d72c:c.instructions+=1;goto B56d72c;
case 0x56d72e:goto L56d72e;
case 0x56d731:c.instructions+=1;goto B56d731;
case 0x56d736:goto L56d736;
case 0x56d73a:c.instructions+=7;goto B56d73a;
case 0x56d73e:c.instructions+=6;goto B56d73e;
case 0x56d740:c.instructions+=5;goto B56d740;
case 0x56d742:c.instructions+=4;goto B56d742;
case 0x56d746:c.instructions+=3;goto B56d746;
case 0x56d749:c.instructions+=2;goto B56d749;
case 0x56d74c:c.instructions+=1;goto B56d74c;
case 0x56d751:goto L56d751;
case 0x56d753:goto L56d753;
case 0x56d756:c.instructions+=1;goto B56d756;
case 0x56d758:goto L56d758;
case 0x56d759:c.instructions+=2;goto B56d759;
case 0x56d75b:c.instructions+=1;goto B56d75b;
case 0x56d760:goto L56d760;
case 0x56d761:c.instructions+=2;goto B56d761;
case 0x56d764:c.instructions+=1;goto B56d764;
case 0x56d766:goto L56d766;
case 0x56d767:c.instructions+=4;goto B56d767;
case 0x56d768:c.instructions+=3;goto B56d768;
case 0x56d769:c.instructions+=2;goto B56d769;
case 0x56d76a:c.instructions+=1;goto B56d76a;
case 0x56d770:goto L56d770;
case 0x56d772:c.instructions+=9;goto B56d772;
case 0x56d775:c.instructions+=8;goto B56d775;
case 0x56d777:c.instructions+=7;goto B56d777;
case 0x56d77a:c.instructions+=6;goto B56d77a;
case 0x56d77d:c.instructions+=5;goto B56d77d;
case 0x56d780:c.instructions+=4;goto B56d780;
case 0x56d787:c.instructions+=3;goto B56d787;
case 0x56d78a:c.instructions+=2;goto B56d78a;
case 0x56d791:c.instructions+=1;goto B56d791;
case 0x56d7a0:goto L56d7a0;
case 0x56d7a5:c.instructions+=2;goto B56d7a5;
case 0x56d7aa:c.instructions+=1;goto B56d7aa;
case 0x56d7ac:goto L56d7ac;
case 0x56d7b0:goto L56d7b0;
case 0x56d7b2:c.instructions+=6;goto B56d7b2;
case 0x56d7b5:c.instructions+=5;goto B56d7b5;
case 0x56d7b7:c.instructions+=4;goto B56d7b7;
case 0x56d7ba:c.instructions+=3;goto B56d7ba;
case 0x56d7bf:c.instructions+=2;goto B56d7bf;
case 0x56d7c4:c.instructions+=1;goto B56d7c4;
case 0x56d7c6:goto L56d7c6;
case 0x56d7d0:goto L56d7d0;
case 0x56d7d1:c.instructions+=11;goto B56d7d1;
case 0x56d7d3:c.instructions+=10;goto B56d7d3;
case 0x56d7d4:c.instructions+=9;goto B56d7d4;
case 0x56d7d8:c.instructions+=8;goto B56d7d8;
case 0x56d7db:c.instructions+=7;goto B56d7db;
case 0x56d7e1:c.instructions+=6;goto B56d7e1;
case 0x56d7e3:c.instructions+=5;goto B56d7e3;
case 0x56d7e5:c.instructions+=4;goto B56d7e5;
case 0x56d7e8:c.instructions+=3;goto B56d7e8;
case 0x56d7eb:c.instructions+=2;goto B56d7eb;
case 0x56d7ee:c.instructions+=1;goto B56d7ee;
case 0x56d7f3:goto L56d7f3;
case 0x56d7f6:c.instructions+=7;goto B56d7f6;
case 0x56d7f9:c.instructions+=6;goto B56d7f9;
case 0x56d7fc:c.instructions+=5;goto B56d7fc;
case 0x56d803:c.instructions+=4;goto B56d803;
case 0x56d809:c.instructions+=3;goto B56d809;
case 0x56d80f:c.instructions+=2;goto B56d80f;
case 0x56d815:c.instructions+=1;goto B56d815;
case 0x56d81a:goto L56d81a;
case 0x56d81d:c.instructions+=4;goto B56d81d;
case 0x56d81f:c.instructions+=3;goto B56d81f;
case 0x56d822:c.instructions+=2;goto B56d822;
case 0x56d826:c.instructions+=1;goto B56d826;
case 0x56d828:goto L56d828;
case 0x56d82d:c.instructions+=5;goto B56d82d;
case 0x56d834:c.instructions+=4;goto B56d834;
case 0x56d835:c.instructions+=3;goto B56d835;
case 0x56d838:c.instructions+=2;goto B56d838;
case 0x56d839:c.instructions+=1;goto B56d839;
case 0x56d83c:goto L56d83c;
case 0x56d83d:c.instructions+=3;goto B56d83d;
case 0x56d844:c.instructions+=2;goto B56d844;
case 0x56d845:c.instructions+=1;goto B56d845;
case 0x56d850:goto L56d850;
case 0x56d851:c.instructions+=14;goto B56d851;
case 0x56d853:c.instructions+=13;goto B56d853;
case 0x56d856:c.instructions+=12;goto B56d856;
case 0x56d858:c.instructions+=11;goto B56d858;
case 0x56d85d:c.instructions+=10;goto B56d85d;
case 0x56d863:c.instructions+=9;goto B56d863;
case 0x56d864:c.instructions+=8;goto B56d864;
case 0x56d86b:c.instructions+=7;goto B56d86b;
case 0x56d871:c.instructions+=6;goto B56d871;
case 0x56d876:c.instructions+=5;goto B56d876;
case 0x56d87b:c.instructions+=4;goto B56d87b;
case 0x56d87c:c.instructions+=3;goto B56d87c;
case 0x56d87d:c.instructions+=2;goto B56d87d;
case 0x56d87e:c.instructions+=1;goto B56d87e;
case 0x56d880:goto L56d880;
case 0x56d882:c.instructions+=6;goto B56d882;
case 0x56d885:c.instructions+=5;goto B56d885;
case 0x56d887:c.instructions+=4;goto B56d887;
case 0x56d88a:c.instructions+=3;goto B56d88a;
case 0x56d88f:c.instructions+=2;goto B56d88f;
case 0x56d894:c.instructions+=1;goto B56d894;
case 0x56d896:goto L56d896;
case 0x56d89b:c.instructions+=9;goto B56d89b;
case 0x56d8a1:c.instructions+=8;goto B56d8a1;
case 0x56d8a3:c.instructions+=7;goto B56d8a3;
case 0x56d8a5:c.instructions+=6;goto B56d8a5;
case 0x56d8a7:c.instructions+=5;goto B56d8a7;
case 0x56d8ab:c.instructions+=4;goto B56d8ab;
case 0x56d8b3:c.instructions+=3;goto B56d8b3;
case 0x56d8b7:c.instructions+=2;goto B56d8b7;
case 0x56d8bb:c.instructions+=1;goto B56d8bb;
case 0x56d8c1:goto L56d8c1;
case 0x56d8c9:c.instructions+=1;goto B56d8c9;
case 0x56d8d0:goto L56d8d0;
case 0x56d8d4:c.instructions+=3;goto B56d8d4;
case 0x56d8d5:c.instructions+=2;goto B56d8d5;
case 0x56d8da:c.instructions+=1;goto B56d8da;
case 0x56d8df:goto L56d8df;
case 0x56d8e1:c.instructions+=6;goto B56d8e1;
case 0x56d8e4:c.instructions+=5;goto B56d8e4;
case 0x56d8ea:c.instructions+=4;goto B56d8ea;
case 0x56d8ec:c.instructions+=3;goto B56d8ec;
case 0x56d8ef:c.instructions+=2;goto B56d8ef;
case 0x56d8f4:c.instructions+=1;goto B56d8f4;
case 0x56d8f6:goto L56d8f6;
case 0x56d8f8:c.instructions+=1;goto B56d8f8;
case 0x56d8fa:goto L56d8fa;
case 0x56d8fd:c.instructions+=4;goto B56d8fd;
case 0x56d902:c.instructions+=3;goto B56d902;
case 0x56d906:c.instructions+=2;goto B56d906;
case 0x56d90b:c.instructions+=1;goto B56d90b;
case 0x56d910:goto L56d910;
case 0x56d912:c.instructions+=1;goto B56d912;
case 0x56d914:goto L56d914;
case 0x56d91a:c.instructions+=2;goto B56d91a;
case 0x56d91d:c.instructions+=1;goto B56d91d;
case 0x56d91f:goto L56d91f;
case 0x56d925:c.instructions+=1;goto B56d925;
case 0x56d927:goto L56d927;
case 0x56d929:c.instructions+=1;goto B56d929;
case 0x56d92b:goto L56d92b;
case 0x56d92e:c.instructions+=1;goto B56d92e;
case 0x56d930:goto L56d930;
case 0x56d934:c.instructions+=3;goto B56d934;
case 0x56d935:c.instructions+=2;goto B56d935;
case 0x56d93a:c.instructions+=1;goto B56d93a;
case 0x56d93f:goto L56d93f;
case 0x56d942:goto L56d942;
case 0x56d945:c.instructions+=2;goto B56d945;
case 0x56d947:c.instructions+=1;goto B56d947;
case 0x56d94c:goto L56d94c;
case 0x56d950:c.instructions+=13;goto B56d950;
case 0x56d953:c.instructions+=12;goto B56d953;
case 0x56d957:c.instructions+=11;goto B56d957;
case 0x56d95b:c.instructions+=10;goto B56d95b;
case 0x56d95e:c.instructions+=9;goto B56d95e;
case 0x56d962:c.instructions+=8;goto B56d962;
case 0x56d966:c.instructions+=7;goto B56d966;
case 0x56d96a:c.instructions+=6;goto B56d96a;
case 0x56d96e:c.instructions+=5;goto B56d96e;
case 0x56d972:c.instructions+=4;goto B56d972;
case 0x56d976:c.instructions+=3;goto B56d976;
case 0x56d97b:c.instructions+=2;goto B56d97b;
case 0x56d97f:c.instructions+=1;goto B56d97f;
case 0x56d987:goto L56d987;
case 0x56d989:goto L56d989;
case 0x56d98a:c.instructions+=3;goto B56d98a;
case 0x56d98c:c.instructions+=2;goto B56d98c;
case 0x56d990:c.instructions+=1;goto B56d990;
case 0x56d995:goto L56d995;
case 0x56d999:c.instructions+=3;goto B56d999;
case 0x56d99c:c.instructions+=2;goto B56d99c;
case 0x56d99e:c.instructions+=1;goto B56d99e;
case 0x56d9a0:goto L56d9a0;
case 0x56d9a2:c.instructions+=1;goto B56d9a2;
case 0x56d9a7:goto L56d9a7;
case 0x56d9aa:c.instructions+=1;goto B56d9aa;
case 0x56d9ae:goto L56d9ae;
case 0x56d9b2:c.instructions+=15;goto B56d9b2;
case 0x56d9b8:c.instructions+=14;goto B56d9b8;
case 0x56d9ba:c.instructions+=13;goto B56d9ba;
case 0x56d9c0:c.instructions+=12;goto B56d9c0;
case 0x56d9c3:c.instructions+=11;goto B56d9c3;
case 0x56d9c7:c.instructions+=10;goto B56d9c7;
case 0x56d9cc:c.instructions+=9;goto B56d9cc;
case 0x56d9d2:c.instructions+=8;goto B56d9d2;
case 0x56d9d5:c.instructions+=7;goto B56d9d5;
case 0x56d9d9:c.instructions+=6;goto B56d9d9;
case 0x56d9de:c.instructions+=5;goto B56d9de;
case 0x56d9df:c.instructions+=4;goto B56d9df;
case 0x56d9e1:c.instructions+=3;goto B56d9e1;
case 0x56d9e3:c.instructions+=2;goto B56d9e3;
case 0x56d9e7:c.instructions+=1;goto B56d9e7;
case 0x56d9ed:goto L56d9ed;
case 0x56d9f1:goto L56d9f1;
case 0x56d9f6:c.instructions+=2;goto B56d9f6;
case 0x56d9fb:c.instructions+=1;goto B56d9fb;
case 0x56da01:goto L56da01;
case 0x56da06:c.instructions+=1;goto B56da06;
case 0x56da0c:goto L56da0c;
case 0x56da11:c.instructions+=1;goto B56da11;
case 0x56da16:goto L56da16;
case 0x56da18:c.instructions+=1;goto B56da18;
case 0x56da1e:goto L56da1e;
case 0x56da23:c.instructions+=3;goto B56da23;
case 0x56da25:c.instructions+=2;goto B56da25;
case 0x56da28:c.instructions+=1;goto B56da28;
case 0x56da2a:goto L56da2a;
case 0x56da2f:goto L56da2f;
case 0x56da33:c.instructions+=4;goto B56da33;
case 0x56da35:c.instructions+=3;goto B56da35;
case 0x56da36:c.instructions+=2;goto B56da36;
case 0x56da3b:c.instructions+=1;goto B56da3b;
case 0x56da40:goto L56da40;
case 0x56da43:c.instructions+=2;goto B56da43;
case 0x56da45:c.instructions+=1;goto B56da45;
case 0x56da4b:goto L56da4b;
case 0x56da50:c.instructions+=7;goto B56da50;
case 0x56da54:c.instructions+=6;goto B56da54;
case 0x56da57:c.instructions+=5;goto B56da57;
case 0x56da5b:c.instructions+=4;goto B56da5b;
case 0x56da5f:c.instructions+=3;goto B56da5f;
case 0x56da65:c.instructions+=2;goto B56da65;
case 0x56da69:c.instructions+=1;goto B56da69;
case 0x56da6b:goto L56da6b;
case 0x56da6f:c.instructions+=1;goto B56da6f;
case 0x56da70:goto L56da70;
case 0x56da77:c.instructions+=1;goto B56da77;
case 0x56da7c:goto L56da7c;
case 0x56da7e:c.instructions+=6;goto B56da7e;
case 0x56da80:c.instructions+=5;goto B56da80;
case 0x56da82:c.instructions+=4;goto B56da82;
case 0x56da84:c.instructions+=3;goto B56da84;
case 0x56da8b:c.instructions+=2;goto B56da8b;
case 0x56da96:c.instructions+=1;goto B56da96;
case 0x56da9b:goto L56da9b;
case 0x56da9f:c.instructions+=13;goto B56da9f;
case 0x56daa3:c.instructions+=12;goto B56daa3;
case 0x56daa5:c.instructions+=11;goto B56daa5;
case 0x56daaa:c.instructions+=10;goto B56daaa;
case 0x56daac:c.instructions+=9;goto B56daac;
case 0x56daad:c.instructions+=8;goto B56daad;
case 0x56daaf:c.instructions+=7;goto B56daaf;
case 0x56dab1:c.instructions+=6;goto B56dab1;
case 0x56dab8:c.instructions+=5;goto B56dab8;
case 0x56dab9:c.instructions+=4;goto B56dab9;
case 0x56daba:c.instructions+=3;goto B56daba;
case 0x56dac5:c.instructions+=2;goto B56dac5;
case 0x56dac9:c.instructions+=1;goto B56dac9;
case 0x56dace:goto L56dace;
case 0x56dad2:c.instructions+=3;goto B56dad2;
case 0x56dad5:c.instructions+=2;goto B56dad5;
case 0x56dad7:c.instructions+=1;goto B56dad7;
case 0x56dad9:goto L56dad9;
case 0x56dadd:c.instructions+=3;goto B56dadd;
case 0x56dadf:c.instructions+=2;goto B56dadf;
case 0x56dae4:c.instructions+=1;goto B56dae4;
case 0x56dae6:goto L56dae6;
case 0x56daeb:goto L56daeb;
case 0x56daf1:c.instructions+=4;goto B56daf1;
case 0x56daf7:c.instructions+=3;goto B56daf7;
case 0x56daf9:c.instructions+=2;goto B56daf9;
case 0x56dafe:c.instructions+=1;goto B56dafe;
case 0x56db00:goto L56db00;
case 0x56db02:c.instructions+=1;goto B56db02;
case 0x56db04:goto L56db04;
case 0x56db07:c.instructions+=3;goto B56db07;
case 0x56db08:c.instructions+=2;goto B56db08;
case 0x56db0d:c.instructions+=1;goto B56db0d;
case 0x56db0f:goto L56db0f;
case 0x56db13:c.instructions+=1;goto B56db13;
case 0x56db15:goto L56db15;
case 0x56db19:c.instructions+=7;goto B56db19;
case 0x56db1c:c.instructions+=6;goto B56db1c;
case 0x56db1e:c.instructions+=5;goto B56db1e;
case 0x56db24:c.instructions+=4;goto B56db24;
case 0x56db27:c.instructions+=3;goto B56db27;
case 0x56db29:c.instructions+=2;goto B56db29;
case 0x56db2b:c.instructions+=1;goto B56db2b;
case 0x56db32:goto L56db32;
case 0x56db35:c.instructions+=2;goto B56db35;
case 0x56db38:c.instructions+=1;goto B56db38;
case 0x56db3a:goto L56db3a;
case 0x56db40:c.instructions+=1;goto B56db40;
case 0x56db42:goto L56db42;
case 0x56db45:c.instructions+=1;goto B56db45;
case 0x56db47:goto L56db47;
case 0x56db4d:goto L56db4d;
case 0x56db51:c.instructions+=11;goto B56db51;
case 0x56db55:c.instructions+=10;goto B56db55;
case 0x56db59:c.instructions+=9;goto B56db59;
case 0x56db5d:c.instructions+=8;goto B56db5d;
case 0x56db61:c.instructions+=7;goto B56db61;
case 0x56db65:c.instructions+=6;goto B56db65;
case 0x56db6a:c.instructions+=5;goto B56db6a;
case 0x56db6e:c.instructions+=4;goto B56db6e;
case 0x56db73:c.instructions+=3;goto B56db73;
case 0x56db77:c.instructions+=2;goto B56db77;
case 0x56db79:c.instructions+=1;goto B56db79;
case 0x56db7e:goto L56db7e;
case 0x56db80:goto L56db80;
case 0x56db82:c.instructions+=6;goto B56db82;
case 0x56db89:c.instructions+=5;goto B56db89;
case 0x56db8f:c.instructions+=4;goto B56db8f;
case 0x56db92:c.instructions+=3;goto B56db92;
case 0x56db98:c.instructions+=2;goto B56db98;
case 0x56dba3:c.instructions+=1;goto B56dba3;
case 0x56dba8:goto L56dba8;
case 0x56dbac:c.instructions+=10;goto B56dbac;
case 0x56dbb0:c.instructions+=9;goto B56dbb0;
case 0x56dbb4:c.instructions+=8;goto B56dbb4;
case 0x56dbb7:c.instructions+=7;goto B56dbb7;
case 0x56dbb8:c.instructions+=6;goto B56dbb8;
case 0x56dbbb:c.instructions+=5;goto B56dbbb;
case 0x56dbbc:c.instructions+=4;goto B56dbbc;
case 0x56dbc0:c.instructions+=3;goto B56dbc0;
case 0x56dbc4:c.instructions+=2;goto B56dbc4;
case 0x56dbc8:c.instructions+=1;goto B56dbc8;
case 0x56dbce:goto L56dbce;
case 0x56dbd5:c.instructions+=7;goto B56dbd5;
case 0x56dbdc:c.instructions+=6;goto B56dbdc;
case 0x56dbdd:c.instructions+=5;goto B56dbdd;
case 0x56dbde:c.instructions+=4;goto B56dbde;
case 0x56dbdf:c.instructions+=3;goto B56dbdf;
case 0x56dbe1:c.instructions+=2;goto B56dbe1;
case 0x56dbe2:c.instructions+=1;goto B56dbe2;
case 0x56dbe3:goto L56dbe3;
case 0x56dbe8:c.instructions+=3;goto B56dbe8;
case 0x56dbea:c.instructions+=2;goto B56dbea;
case 0x56dbec:c.instructions+=1;goto B56dbec;
case 0x56dbf2:goto L56dbf2;
case 0x56dbf8:c.instructions+=6;goto B56dbf8;
case 0x56dbfd:c.instructions+=5;goto B56dbfd;
case 0x56dc00:c.instructions+=4;goto B56dc00;
case 0x56dc02:c.instructions+=3;goto B56dc02;
case 0x56dc03:c.instructions+=2;goto B56dc03;
case 0x56dc08:c.instructions+=1;goto B56dc08;
case 0x56dc0d:goto L56dc0d;
case 0x56dc0f:c.instructions+=2;goto B56dc0f;
case 0x56dc12:c.instructions+=1;goto B56dc12;
case 0x56dc17:goto L56dc17;
case 0x56dc1b:c.instructions+=14;goto B56dc1b;
case 0x56dc1e:c.instructions+=13;goto B56dc1e;
case 0x56dc21:c.instructions+=12;goto B56dc21;
case 0x56dc27:c.instructions+=11;goto B56dc27;
case 0x56dc2b:c.instructions+=10;goto B56dc2b;
case 0x56dc31:c.instructions+=9;goto B56dc31;
case 0x56dc35:c.instructions+=8;goto B56dc35;
case 0x56dc38:c.instructions+=7;goto B56dc38;
case 0x56dc3c:c.instructions+=6;goto B56dc3c;
case 0x56dc3e:c.instructions+=5;goto B56dc3e;
case 0x56dc43:c.instructions+=4;goto B56dc43;
case 0x56dc47:c.instructions+=3;goto B56dc47;
case 0x56dc4f:c.instructions+=2;goto B56dc4f;
case 0x56dc54:c.instructions+=1;goto B56dc54;
case 0x56dc58:goto L56dc58;
case 0x56dc5a:goto L56dc5a;
case 0x56dc60:c.instructions+=8;goto B56dc60;
case 0x56dc62:c.instructions+=7;goto B56dc62;
case 0x56dc67:c.instructions+=6;goto B56dc67;
case 0x56dc6a:c.instructions+=5;goto B56dc6a;
case 0x56dc70:c.instructions+=4;goto B56dc70;
case 0x56dc75:c.instructions+=3;goto B56dc75;
case 0x56dc76:c.instructions+=2;goto B56dc76;
case 0x56dc78:c.instructions+=1;goto B56dc78;
case 0x56dc7e:goto L56dc7e;
case 0x56dc85:c.instructions+=7;goto B56dc85;
case 0x56dc86:c.instructions+=6;goto B56dc86;
case 0x56dc87:c.instructions+=5;goto B56dc87;
case 0x56dc8e:c.instructions+=4;goto B56dc8e;
case 0x56dc8f:c.instructions+=3;goto B56dc8f;
case 0x56dc91:c.instructions+=2;goto B56dc91;
case 0x56dc92:c.instructions+=1;goto B56dc92;
case 0x56dca0:goto L56dca0;
case 0x56dca3:c.instructions+=10;goto B56dca3;
case 0x56dca9:c.instructions+=9;goto B56dca9;
case 0x56dcaa:c.instructions+=8;goto B56dcaa;
case 0x56dcac:c.instructions+=7;goto B56dcac;
case 0x56dcaf:c.instructions+=6;goto B56dcaf;
case 0x56dcb0:c.instructions+=5;goto B56dcb0;
case 0x56dcb6:c.instructions+=4;goto B56dcb6;
case 0x56dcb9:c.instructions+=3;goto B56dcb9;
case 0x56dcbb:c.instructions+=2;goto B56dcbb;
case 0x56dcc3:c.instructions+=1;goto B56dcc3;
case 0x56dcc5:goto L56dcc5;
case 0x56dcca:c.instructions+=1;goto B56dcca;
case 0x56dccc:goto L56dccc;
case 0x56dcd1:c.instructions+=2;goto B56dcd1;
case 0x56dcd3:c.instructions+=1;goto B56dcd3;
case 0x56dcd8:goto L56dcd8;
case 0x56dcda:c.instructions+=2;goto B56dcda;
case 0x56dcdf:c.instructions+=1;goto B56dcdf;
case 0x56dce1:goto L56dce1;
case 0x56dce6:goto L56dce6;
case 0x56dce8:c.instructions+=4;goto B56dce8;
case 0x56dceb:c.instructions+=3;goto B56dceb;
case 0x56dcef:c.instructions+=2;goto B56dcef;
case 0x56dcf3:c.instructions+=1;goto B56dcf3;
case 0x56dcf9:goto L56dcf9;
case 0x56dcff:c.instructions+=3;goto B56dcff;
case 0x56dd01:c.instructions+=2;goto B56dd01;
case 0x56dd04:c.instructions+=1;goto B56dd04;
case 0x56dd06:goto L56dd06;
case 0x56dd09:c.instructions+=2;goto B56dd09;
case 0x56dd0b:c.instructions+=1;goto B56dd0b;
case 0x56dd0d:goto L56dd0d;
case 0x56dd10:c.instructions+=5;goto B56dd10;
case 0x56dd16:c.instructions+=4;goto B56dd16;
case 0x56dd19:c.instructions+=3;goto B56dd19;
case 0x56dd1c:c.instructions+=2;goto B56dd1c;
case 0x56dd1f:c.instructions+=1;goto B56dd1f;
case 0x56dd21:goto L56dd21;
case 0x56dd24:c.instructions+=2;goto B56dd24;
case 0x56dd26:c.instructions+=1;goto B56dd26;
case 0x56dd28:goto L56dd28;
case 0x56dd2a:c.instructions+=5;goto B56dd2a;
case 0x56dd2b:c.instructions+=4;goto B56dd2b;
case 0x56dd2e:c.instructions+=3;goto B56dd2e;
case 0x56dd2f:c.instructions+=2;goto B56dd2f;
case 0x56dd32:c.instructions+=1;goto B56dd32;
case 0x56dd33:goto L56dd33;
case 0x56dd38:c.instructions+=5;goto B56dd38;
case 0x56dd39:c.instructions+=4;goto B56dd39;
case 0x56dd3c:c.instructions+=3;goto B56dd3c;
case 0x56dd3d:c.instructions+=2;goto B56dd3d;
case 0x56dd40:c.instructions+=1;goto B56dd40;
case 0x56dd41:goto L56dd41;
case 0x56dd45:goto L56dd45;
case 0x56dd49:c.instructions+=4;goto B56dd49;
case 0x56dd4a:c.instructions+=3;goto B56dd4a;
case 0x56dd4b:c.instructions+=2;goto B56dd4b;
case 0x56dd4e:c.instructions+=1;goto B56dd4e;
case 0x56dd50:goto L56dd50;
case 0x56dd51:c.instructions+=3;goto B56dd51;
case 0x56dd57:c.instructions+=2;goto B56dd57;
case 0x56dd5c:c.instructions+=1;goto B56dd5c;
case 0x56dd61:goto L56dd61;
case 0x56dd63:c.instructions+=1;goto B56dd63;
case 0x56dd65:goto L56dd65;
case 0x56dd69:c.instructions+=1;goto B56dd69;
case 0x56dd70:goto L56dd70;
case 0x56dd73:c.instructions+=1;goto B56dd73;
case 0x56dd75:goto L56dd75;
case 0x56dd77:c.instructions+=2;goto B56dd77;
case 0x56dd79:c.instructions+=1;goto B56dd79;
case 0x56dd7b:goto L56dd7b;
case 0x56dd7d:c.instructions+=2;goto B56dd7d;
case 0x56dd7e:c.instructions+=1;goto B56dd7e;
case 0x56dd7f:goto L56dd7f;
case 0x56dd81:c.instructions+=2;goto B56dd81;
case 0x56dd82:c.instructions+=1;goto B56dd82;
case 0x56dd90:goto L56dd90;
case 0x56dd91:c.instructions+=5;goto B56dd91;
case 0x56dd97:c.instructions+=4;goto B56dd97;
case 0x56dd98:c.instructions+=3;goto B56dd98;
case 0x56dd9d:c.instructions+=2;goto B56dd9d;
case 0x56dda2:c.instructions+=1;goto B56dda2;
case 0x56dda7:goto L56dda7;
case 0x56dda9:c.instructions+=1;goto B56dda9;
case 0x56ddab:goto L56ddab;
case 0x56ddaf:c.instructions+=1;goto B56ddaf;
case 0x56ddb0:goto L56ddb0;
case 0x56ddb3:c.instructions+=1;goto B56ddb3;
case 0x56ddb5:goto L56ddb5;
case 0x56ddb7:c.instructions+=3;goto B56ddb7;
case 0x56ddb8:c.instructions+=2;goto B56ddb8;
case 0x56ddba:c.instructions+=1;goto B56ddba;
case 0x56ddbc:goto L56ddbc;
case 0x56ddbd:c.instructions+=3;goto B56ddbd;
case 0x56ddbf:c.instructions+=2;goto B56ddbf;
case 0x56ddc0:c.instructions+=1;goto B56ddc0;
case 0x56ddc1:goto L56ddc1;
case 0x56ddc3:c.instructions+=3;goto B56ddc3;
case 0x56ddc4:c.instructions+=2;goto B56ddc4;
case 0x56ddc5:c.instructions+=1;goto B56ddc5;
case 0x56ddd0:goto L56ddd0;
case 0x56ddd1:c.instructions+=7;goto B56ddd1;
case 0x56ddd2:c.instructions+=6;goto B56ddd2;
case 0x56ddd3:c.instructions+=5;goto B56ddd3;
case 0x56ddd9:c.instructions+=4;goto B56ddd9;
case 0x56dddc:c.instructions+=3;goto B56dddc;
case 0x56ddde:c.instructions+=2;goto B56ddde;
case 0x56dde0:c.instructions+=1;goto B56dde0;
case 0x56dde6:goto L56dde6;
case 0x56dde7:c.instructions+=3;goto B56dde7;
case 0x56dde8:c.instructions+=2;goto B56dde8;
case 0x56dded:c.instructions+=1;goto B56dded;
case 0x56ddf2:goto L56ddf2;
case 0x56ddf4:c.instructions+=2;goto B56ddf4;
case 0x56ddf9:c.instructions+=1;goto B56ddf9;
case 0x56de00:goto L56de00;
case 0x56de03:c.instructions+=4;goto B56de03;
case 0x56de06:c.instructions+=3;goto B56de06;
case 0x56de0c:c.instructions+=2;goto B56de0c;
case 0x56de0e:c.instructions+=1;goto B56de0e;
case 0x56de10:goto L56de10;
case 0x56de14:c.instructions+=3;goto B56de14;
case 0x56de15:c.instructions+=2;goto B56de15;
case 0x56de1a:c.instructions+=1;goto B56de1a;
case 0x56de1f:goto L56de1f;
case 0x56de22:c.instructions+=4;goto B56de22;
case 0x56de27:c.instructions+=3;goto B56de27;
case 0x56de29:c.instructions+=2;goto B56de29;
case 0x56de2d:c.instructions+=1;goto B56de2d;
case 0x56de2f:goto L56de2f;
case 0x56de33:goto L56de33;
case 0x56de36:c.instructions+=1;goto B56de36;
case 0x56de38:goto L56de38;
case 0x56de3a:c.instructions+=2;goto B56de3a;
case 0x56de3c:c.instructions+=1;goto B56de3c;
case 0x56de3e:goto L56de3e;
case 0x56de40:goto L56de40;
case 0x56de44:c.instructions+=1;goto B56de44;
case 0x56de46:goto L56de46;
case 0x56de49:c.instructions+=6;goto B56de49;
case 0x56de4f:c.instructions+=5;goto B56de4f;
case 0x56de54:c.instructions+=4;goto B56de54;
case 0x56de56:c.instructions+=3;goto B56de56;
case 0x56de58:c.instructions+=2;goto B56de58;
case 0x56de5b:c.instructions+=1;goto B56de5b;
case 0x56de5d:goto L56de5d;
case 0x56de61:goto L56de61;
case 0x56de64:c.instructions+=1;goto B56de64;
case 0x56de66:goto L56de66;
case 0x56de68:c.instructions+=2;goto B56de68;
case 0x56de6a:c.instructions+=1;goto B56de6a;
case 0x56de6c:goto L56de6c;
case 0x56de6e:goto L56de6e;
case 0x56de71:c.instructions+=6;goto B56de71;
case 0x56de77:c.instructions+=5;goto B56de77;
case 0x56de7a:c.instructions+=4;goto B56de7a;
case 0x56de7b:c.instructions+=3;goto B56de7b;
case 0x56de7e:c.instructions+=2;goto B56de7e;
case 0x56de80:c.instructions+=1;goto B56de80;
case 0x56de86:goto L56de86;
case 0x56de87:c.instructions+=1;goto B56de87;
case 0x56de88:goto L56de88;
case 0x56de8d:c.instructions+=1;goto B56de8d;
case 0x56de92:goto L56de92;
case 0x56de94:c.instructions+=1;goto B56de94;
case 0x56de96:goto L56de96;
case 0x56de9c:c.instructions+=1;goto B56de9c;
case 0x56dea1:goto L56dea1;
case 0x56dea3:c.instructions+=1;goto B56dea3;
case 0x56dea5:goto L56dea5;
case 0x56deaa:c.instructions+=1;goto B56deaa;
case 0x56dead:goto L56dead;
case 0x56deb2:c.instructions+=3;goto B56deb2;
case 0x56deb7:c.instructions+=2;goto B56deb7;
case 0x56deb9:c.instructions+=1;goto B56deb9;
case 0x56debb:goto L56debb;
case 0x56dec0:c.instructions+=1;goto B56dec0;
case 0x56dec5:goto L56dec5;
case 0x56dec8:c.instructions+=4;goto B56dec8;
case 0x56dece:c.instructions+=3;goto B56dece;
case 0x56ded3:c.instructions+=2;goto B56ded3;
case 0x56ded4:c.instructions+=1;goto B56ded4;
case 0x56ded9:goto L56ded9;
case 0x56dedc:goto L56dedc;
case 0x56dedd:c.instructions+=3;goto B56dedd;
case 0x56dede:c.instructions+=2;goto B56dede;
case 0x56dedf:c.instructions+=1;goto B56dedf;
case 0x56dee0:goto L56dee0;
case 0x56dee1:c.instructions+=8;goto B56dee1;
case 0x56dee4:c.instructions+=7;goto B56dee4;
case 0x56dee5:c.instructions+=6;goto B56dee5;
case 0x56dee8:c.instructions+=5;goto B56dee8;
case 0x56dee9:c.instructions+=4;goto B56dee9;
case 0x56deec:c.instructions+=3;goto B56deec;
case 0x56deee:c.instructions+=2;goto B56deee;
case 0x56def1:c.instructions+=1;goto B56def1;
case 0x56def3:goto L56def3;
case 0x56def6:c.instructions+=2;goto B56def6;
case 0x56defc:c.instructions+=1;goto B56defc;
case 0x56defe:goto L56defe;
case 0x56df04:c.instructions+=4;goto B56df04;
case 0x56df0a:c.instructions+=3;goto B56df0a;
case 0x56df0c:c.instructions+=2;goto B56df0c;
case 0x56df0f:c.instructions+=1;goto B56df0f;
case 0x56df11:goto L56df11;
case 0x56df13:c.instructions+=1;goto B56df13;
case 0x56df15:goto L56df15;
case 0x56df17:goto L56df17;
case 0x56df19:c.instructions+=2;goto B56df19;
case 0x56df20:c.instructions+=1;goto B56df20;
case 0x56df22:goto L56df22;
case 0x56df25:c.instructions+=2;goto B56df25;
case 0x56df27:c.instructions+=1;goto B56df27;
case 0x56df29:goto L56df29;
case 0x56df2e:c.instructions+=1;goto B56df2e;
case 0x56df30:goto L56df30;
case 0x56df35:c.instructions+=1;goto B56df35;
case 0x56df38:goto L56df38;
case 0x56df3d:c.instructions+=11;goto B56df3d;
case 0x56df43:c.instructions+=10;goto B56df43;
case 0x56df46:c.instructions+=9;goto B56df46;
case 0x56df4c:c.instructions+=8;goto B56df4c;
case 0x56df4e:c.instructions+=7;goto B56df4e;
case 0x56df52:c.instructions+=6;goto B56df52;
case 0x56df56:c.instructions+=5;goto B56df56;
case 0x56df5c:c.instructions+=4;goto B56df5c;
case 0x56df5e:c.instructions+=3;goto B56df5e;
case 0x56df60:c.instructions+=2;goto B56df60;
case 0x56df63:c.instructions+=1;goto B56df63;
case 0x56df65:goto L56df65;
case 0x56df68:goto L56df68;
case 0x56df6e:c.instructions+=3;goto B56df6e;
case 0x56df70:c.instructions+=2;goto B56df70;
case 0x56df73:c.instructions+=1;goto B56df73;
case 0x56df75:goto L56df75;
case 0x56df77:c.instructions+=7;goto B56df77;
case 0x56df78:c.instructions+=6;goto B56df78;
case 0x56df7a:c.instructions+=5;goto B56df7a;
case 0x56df7b:c.instructions+=4;goto B56df7b;
case 0x56df7e:c.instructions+=3;goto B56df7e;
case 0x56df80:c.instructions+=2;goto B56df80;
case 0x56df81:c.instructions+=1;goto B56df81;
case 0x56df82:goto L56df82;
case 0x56df83:c.instructions+=4;goto B56df83;
case 0x56df86:c.instructions+=3;goto B56df86;
case 0x56df87:c.instructions+=2;goto B56df87;
case 0x56df88:c.instructions+=1;goto B56df88;
case 0x56df89:goto L56df89;
case 0x56df8b:c.instructions+=5;goto B56df8b;
case 0x56df8c:c.instructions+=4;goto B56df8c;
case 0x56df8e:c.instructions+=3;goto B56df8e;
case 0x56df8f:c.instructions+=2;goto B56df8f;
case 0x56df90:c.instructions+=1;goto B56df90;
case 0x56dfa0:goto L56dfa0;
case 0x56dfa1:c.instructions+=6;goto B56dfa1;
case 0x56dfa3:c.instructions+=5;goto B56dfa3;
case 0x56dfa5:c.instructions+=4;goto B56dfa5;
case 0x56dfac:c.instructions+=3;goto B56dfac;
case 0x56dfae:c.instructions+=2;goto B56dfae;
case 0x56dfb0:c.instructions+=1;goto B56dfb0;
case 0x56dfb2:goto L56dfb2;
case 0x56dfb5:c.instructions+=2;goto B56dfb5;
case 0x56dfb7:c.instructions+=1;goto B56dfb7;
case 0x56dfb9:goto L56dfb9;
case 0x56dfbc:c.instructions+=2;goto B56dfbc;
case 0x56dfbe:c.instructions+=1;goto B56dfbe;
case 0x56dfc0:goto L56dfc0;
case 0x56dfc3:c.instructions+=1;goto B56dfc3;
case 0x56dfc5:goto L56dfc5;
case 0x56dfc7:c.instructions+=1;goto B56dfc7;
case 0x56dfcc:goto L56dfcc;
case 0x56dfce:c.instructions+=4;goto B56dfce;
case 0x56dfd0:c.instructions+=3;goto B56dfd0;
case 0x56dfd2:c.instructions+=2;goto B56dfd2;
case 0x56dfd3:c.instructions+=1;goto B56dfd3;
case 0x56dfd5:goto L56dfd5;
case 0x56dfd8:c.instructions+=2;goto B56dfd8;
case 0x56dfda:c.instructions+=1;goto B56dfda;
case 0x56dfdc:goto L56dfdc;
case 0x56dfe3:goto L56dfe3;
case 0x56dff0:goto L56dff0;
case 0x56dff4:c.instructions+=4;goto B56dff4;
case 0x56dff7:c.instructions+=3;goto B56dff7;
case 0x56dffd:c.instructions+=2;goto B56dffd;
case 0x56dfff:c.instructions+=1;goto B56dfff;
default:missing_instruction(c.pc);}
B56d002:L56d002:{c.instructions+=8;NFSU2_TR(0x56d002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d004:{NFSU2_TR(0x56d004);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56d007:{NFSU2_TR(0x56d007);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d00b:{NFSU2_TR(0x56d00b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56d00f:{NFSU2_TR(0x56d00f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d015:{NFSU2_TR(0x56d015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d016:{NFSU2_TR(0x56d016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d017:{NFSU2_TR(0x56d017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d020:L56d020:{c.instructions+=10;NFSU2_TR(0x56d020);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d024:{NFSU2_TR(0x56d024);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d028:{NFSU2_TR(0x56d028);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56d02a:{NFSU2_TR(0x56d02a);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d030:{NFSU2_TR(0x56d030);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B56d032:{NFSU2_TR(0x56d032);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d036:{NFSU2_TR(0x56d036);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56d03a:{NFSU2_TR(0x56d03a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d03c:{NFSU2_TR(0x56d03c);
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
B56d03f:{NFSU2_TR(0x56d03f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56d047;}}
}
B56d041:L56d041:{c.instructions+=2;NFSU2_TR(0x56d041);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d043:{NFSU2_TR(0x56d043);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d047:L56d047:{c.instructions+=1;NFSU2_TR(0x56d047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d050:L56d050:{c.instructions+=6;NFSU2_TR(0x56d050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d051:{NFSU2_TR(0x56d051);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d053:{NFSU2_TR(0x56d053);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d055:{NFSU2_TR(0x56d055);
u8 U[4];
w4(U+0,u32(0x79dc1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d05a:{NFSU2_TR(0x56d05a);
__builtin_memmove((R+24),(R+4),4);
}
B56d05c:{NFSU2_TR(0x56d05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d061ull));
TAIL_STATIC(0x43db50u,43d);
}
B56d061:L56d061:{c.instructions+=4;NFSU2_TR(0x56d061);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56d064:{NFSU2_TR(0x56d064);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d065:{NFSU2_TR(0x56d065);
__builtin_memmove((R+4),(R+24),4);
}
B56d067:{NFSU2_TR(0x56d067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d06cull));
TAIL_STATIC(0x637db0u,637);
}
B56d06c:L56d06c:{c.instructions+=4;NFSU2_TR(0x56d06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d076:{NFSU2_TR(0x56d076);
__builtin_memmove((R+0),(R+24),4);
}
B56d078:{NFSU2_TR(0x56d078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d079:{NFSU2_TR(0x56d079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d080:L56d080:{c.instructions+=13;NFSU2_TR(0x56d080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d081:{NFSU2_TR(0x56d081);
__builtin_memmove((R+20),(R+16),4);
}
B56d083:{NFSU2_TR(0x56d083);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B56d086:{NFSU2_TR(0x56d086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B56d089:{NFSU2_TR(0x56d089);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d08a:{NFSU2_TR(0x56d08a);
__builtin_memmove((R+24),(R+4),4);
}
B56d08c:{NFSU2_TR(0x56d08c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56d090:{NFSU2_TR(0x56d090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d091:{NFSU2_TR(0x56d091);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56d095:{NFSU2_TR(0x56d095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d096:{NFSU2_TR(0x56d096);
__builtin_memmove((R+4),(R+24),4);
}
B56d098:{NFSU2_TR(0x56d098);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d0a0:{NFSU2_TR(0x56d0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d0a5ull));
TAIL_STATIC(0x611030u,611);
}
B56d0a5:L56d0a5:{c.instructions+=20;NFSU2_TR(0x56d0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d0a8:{NFSU2_TR(0x56d0a8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d0aa:{NFSU2_TR(0x56d0aa);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d0ad:{NFSU2_TR(0x56d0ad);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d0b0:{NFSU2_TR(0x56d0b0);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d0b3:{NFSU2_TR(0x56d0b3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d0b6:{NFSU2_TR(0x56d0b6);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d0b9:{NFSU2_TR(0x56d0b9);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d0bf:{NFSU2_TR(0x56d0bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56d0c1:{NFSU2_TR(0x56d0c1);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d0c7:{NFSU2_TR(0x56d0c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d0c9:{NFSU2_TR(0x56d0c9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56d0cb:{NFSU2_TR(0x56d0cb);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d0d1:{NFSU2_TR(0x56d0d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d0d3:{NFSU2_TR(0x56d0d3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56d0d5:{NFSU2_TR(0x56d0d5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56d0d7:{NFSU2_TR(0x56d0d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d0db:{NFSU2_TR(0x56d0db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d0dd:{NFSU2_TR(0x56d0dd);
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
B56d0e0:{NFSU2_TR(0x56d0e0);
if(r1(R+514)){{goto L56d118;}}
}
B56d0e2:L56d0e2:{c.instructions+=13;NFSU2_TR(0x56d0e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d0e6:{NFSU2_TR(0x56d0e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d0ea:{NFSU2_TR(0x56d0ea);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B56d0ec:{NFSU2_TR(0x56d0ec);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B56d0ee:{NFSU2_TR(0x56d0ee);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B56d0f0:{NFSU2_TR(0x56d0f0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B56d0f2:{NFSU2_TR(0x56d0f2);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B56d0f4:{NFSU2_TR(0x56d0f4);
{u32 ea_=u32(u32(7986064u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d0fa:{NFSU2_TR(0x56d0fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d100:{NFSU2_TR(0x56d100);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56d102:{NFSU2_TR(0x56d102);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d104:{NFSU2_TR(0x56d104);
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
B56d107:{NFSU2_TR(0x56d107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d11e;}}
}
B56d109:L56d109:{c.instructions+=6;NFSU2_TR(0x56d109);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d10b:{NFSU2_TR(0x56d10b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d111:{NFSU2_TR(0x56d111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d112:{NFSU2_TR(0x56d112);
__builtin_memmove((R+16),(R+20),4);
}
B56d114:{NFSU2_TR(0x56d114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56d115:{NFSU2_TR(0x56d115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d118:L56d118:{c.instructions+=2;NFSU2_TR(0x56d118);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d11a:{NFSU2_TR(0x56d11a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d11e:L56d11e:{c.instructions+=4;NFSU2_TR(0x56d11e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d11f:{NFSU2_TR(0x56d11f);
__builtin_memmove((R+16),(R+20),4);
}
B56d121:{NFSU2_TR(0x56d121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56d122:{NFSU2_TR(0x56d122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d130:L56d130:{c.instructions+=1;NFSU2_TR(0x56d130);
TAIL_STATIC(0x633fd0u,633);
}
B56d140:L56d140:{c.instructions+=16;NFSU2_TR(0x56d140);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d142:{NFSU2_TR(0x56d142);
u8 U[4];
w4(U+0,u32(0x77872bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d147:{NFSU2_TR(0x56d147);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d14d:{NFSU2_TR(0x56d14d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d14e:{NFSU2_TR(0x56d14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d155:{NFSU2_TR(0x56d155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d156:{NFSU2_TR(0x56d156);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d157:{NFSU2_TR(0x56d157);
__builtin_memmove((R+24),(R+4),4);
}
B56d159:{NFSU2_TR(0x56d159);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d15d:{NFSU2_TR(0x56d15d);
u8 U[4];
w4(U+0,u32(0x56d130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d162:{NFSU2_TR(0x56d162);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d164:{NFSU2_TR(0x56d164);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d169:{NFSU2_TR(0x56d169);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56d16c:{NFSU2_TR(0x56d16c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d16d:{NFSU2_TR(0x56d16d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d175:{NFSU2_TR(0x56d175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d17aull));
TAIL_STATIC(0x75c401u,75c);
}
B56d17a:L56d17a:{c.instructions+=3;NFSU2_TR(0x56d17a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d17d:{NFSU2_TR(0x56d17d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d185:{NFSU2_TR(0x56d185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d18aull));
TAIL_STATIC(0x5768e0u,576);
}
B56d18a:L56d18a:{c.instructions+=5;NFSU2_TR(0x56d18a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d18e:{NFSU2_TR(0x56d18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d18f:{NFSU2_TR(0x56d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d196:{NFSU2_TR(0x56d196);
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
B56d199:{NFSU2_TR(0x56d199);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d1a0:L56d1a0:{c.instructions+=16;NFSU2_TR(0x56d1a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d1a1:{NFSU2_TR(0x56d1a1);
__builtin_memmove((R+20),(R+16),4);
}
B56d1a3:{NFSU2_TR(0x56d1a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B56d1a6:{NFSU2_TR(0x56d1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B56d1a9:{NFSU2_TR(0x56d1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d1ac:{NFSU2_TR(0x56d1ac);
__builtin_memmove((R+0),gp(0x79db88),4);
}
B56d1b1:{NFSU2_TR(0x56d1b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d1b2:{NFSU2_TR(0x56d1b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d1b3:{NFSU2_TR(0x56d1b3);
__builtin_memmove((R+12),(R+4),4);
}
B56d1b5:{NFSU2_TR(0x56d1b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d1b6:{NFSU2_TR(0x56d1b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56d1b8:{NFSU2_TR(0x56d1b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B56d1ba:{NFSU2_TR(0x56d1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d1bd:{NFSU2_TR(0x56d1bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d1c1:{NFSU2_TR(0x56d1c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d1c7:{NFSU2_TR(0x56d1c7);
{goto L56d1d0;}
}
B56d1c9:L56d1c9:{c.instructions+=2;NFSU2_TR(0x56d1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d1cc:{NFSU2_TR(0x56d1cc);
__builtin_memmove((R+16),(R+16),4);
}
B56d1d0:L56d1d0:{c.instructions+=56;NFSU2_TR(0x56d1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d1d2:{NFSU2_TR(0x56d1d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d1d6:{NFSU2_TR(0x56d1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d1d9:{NFSU2_TR(0x56d1d9);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d1dd:{NFSU2_TR(0x56d1dd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d1df:{NFSU2_TR(0x56d1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d1e7:{NFSU2_TR(0x56d1e7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d1eb:{NFSU2_TR(0x56d1eb);
{u32 ea_=u32(u32(7986060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d1f1:{NFSU2_TR(0x56d1f1);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d1f5:{NFSU2_TR(0x56d1f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d1f8:{NFSU2_TR(0x56d1f8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56d1fc:{NFSU2_TR(0x56d1fc);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d202:{NFSU2_TR(0x56d202);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d206:{NFSU2_TR(0x56d206);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d20c:{NFSU2_TR(0x56d20c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d20e:{NFSU2_TR(0x56d20e);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d214:{NFSU2_TR(0x56d214);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d21a:{NFSU2_TR(0x56d21a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d21c:{NFSU2_TR(0x56d21c);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d222:{NFSU2_TR(0x56d222);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d226:{NFSU2_TR(0x56d226);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d22c:{NFSU2_TR(0x56d22c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d230:{NFSU2_TR(0x56d230);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d236:{NFSU2_TR(0x56d236);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d238:{NFSU2_TR(0x56d238);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d23e:{NFSU2_TR(0x56d23e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d244:{NFSU2_TR(0x56d244);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d246:{NFSU2_TR(0x56d246);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d24c:{NFSU2_TR(0x56d24c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d250:{NFSU2_TR(0x56d250);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d256:{NFSU2_TR(0x56d256);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d25a:{NFSU2_TR(0x56d25a);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d260:{NFSU2_TR(0x56d260);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d262:{NFSU2_TR(0x56d262);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d268:{NFSU2_TR(0x56d268);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d26e:{NFSU2_TR(0x56d26e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56d270:{NFSU2_TR(0x56d270);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d276:{NFSU2_TR(0x56d276);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d27a:{NFSU2_TR(0x56d27a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d27e:{NFSU2_TR(0x56d27e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56d280:{NFSU2_TR(0x56d280);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d284:{NFSU2_TR(0x56d284);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d288:{NFSU2_TR(0x56d288);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d28e:{NFSU2_TR(0x56d28e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d290:{NFSU2_TR(0x56d290);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d294:{NFSU2_TR(0x56d294);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d297:{NFSU2_TR(0x56d297);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d29a:{NFSU2_TR(0x56d29a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d29e:{NFSU2_TR(0x56d29e);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d2a1:{NFSU2_TR(0x56d2a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d2a5:{NFSU2_TR(0x56d2a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56d2a7:{NFSU2_TR(0x56d2a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d2ab:{NFSU2_TR(0x56d2ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d2af:{NFSU2_TR(0x56d2af);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d2b3:{NFSU2_TR(0x56d2b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d2b7:{NFSU2_TR(0x56d2b7);
if(r1(R+518)){{goto L56d2df;}}
}
B56d2b9:L56d2b9:{c.instructions+=7;NFSU2_TR(0x56d2b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2bb:{NFSU2_TR(0x56d2bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2bd:{NFSU2_TR(0x56d2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2bf:{NFSU2_TR(0x56d2bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56d2c3:{NFSU2_TR(0x56d2c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2c4:{NFSU2_TR(0x56d2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d2ca:{NFSU2_TR(0x56d2ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d2cfull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B56d2cf:L56d2cf:{c.instructions+=5;NFSU2_TR(0x56d2cf);
{u32 ea_=u32(u32(7986060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d2d5:{NFSU2_TR(0x56d2d5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B56d2d7:{NFSU2_TR(0x56d2d7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d2db:{NFSU2_TR(0x56d2db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d2dd:{NFSU2_TR(0x56d2dd);
{goto L56d2ec;}
}
B56d2df:L56d2df:{c.instructions+=3;NFSU2_TR(0x56d2df);
{u32 ea_=u32(u32(7986060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d2e5:{NFSU2_TR(0x56d2e5);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d2e8:{NFSU2_TR(0x56d2e8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d2ec:L56d2ec:{c.instructions+=6;NFSU2_TR(0x56d2ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d2ee:{NFSU2_TR(0x56d2ee);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d2f4:{NFSU2_TR(0x56d2f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2f5:{NFSU2_TR(0x56d2f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56d2f8:{NFSU2_TR(0x56d2f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d2f9:{NFSU2_TR(0x56d2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d2feull));
TAIL_STATIC(0x4012b0u,401);
}
B56d2fe:L56d2fe:{c.instructions+=14;NFSU2_TR(0x56d2fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d302:{NFSU2_TR(0x56d302);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d306:{NFSU2_TR(0x56d306);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B56d308:{NFSU2_TR(0x56d308);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d30c:{NFSU2_TR(0x56d30c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d310:{NFSU2_TR(0x56d310);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d314:{NFSU2_TR(0x56d314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d317:{NFSU2_TR(0x56d317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d31a:{NFSU2_TR(0x56d31a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B56d31c:{NFSU2_TR(0x56d31c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B56d31f:{NFSU2_TR(0x56d31f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56d322:{NFSU2_TR(0x56d322);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B56d328:{NFSU2_TR(0x56d328);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d32e:{NFSU2_TR(0x56d32e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d1c9u);}goto L56d1c9;}}
}
B56d334:L56d334:{c.instructions+=6;NFSU2_TR(0x56d334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d335:{NFSU2_TR(0x56d335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d336:{NFSU2_TR(0x56d336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56d337:{NFSU2_TR(0x56d337);
__builtin_memmove((R+16),(R+20),4);
}
B56d339:{NFSU2_TR(0x56d339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56d33a:{NFSU2_TR(0x56d33a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d340:L56d340:{c.instructions+=6;NFSU2_TR(0x56d340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d341:{NFSU2_TR(0x56d341);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d342:{NFSU2_TR(0x56d342);
__builtin_memmove((R+24),(R+4),4);
}
B56d344:{NFSU2_TR(0x56d344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d346:{NFSU2_TR(0x56d346);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d348:{NFSU2_TR(0x56d348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d34dull));
TAIL_STATIC(0x5eba30u,5eb);
}
B56d34d:L56d34d:{c.instructions+=3;NFSU2_TR(0x56d34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d34f:{NFSU2_TR(0x56d34f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d351:{NFSU2_TR(0x56d351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d356ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B56d356:L56d356:{c.instructions+=4;NFSU2_TR(0x56d356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d358:{NFSU2_TR(0x56d358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d35b:{NFSU2_TR(0x56d35b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
}
B56d361:{NFSU2_TR(0x56d361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d366ull));
TAIL_STATIC(0x5ede10u,5ed);
}
B56d366:L56d366:{c.instructions+=10;NFSU2_TR(0x56d366);
__builtin_memmove((R+4),gp(0x890118),4);
}
B56d36c:{NFSU2_TR(0x56d36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d373:{NFSU2_TR(0x56d373);
__builtin_memmove((R+8),gp(0x890118),4);
}
B56d379:{NFSU2_TR(0x56d379);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B56d37e:{NFSU2_TR(0x56d37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d381:{NFSU2_TR(0x56d381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B56d383:{NFSU2_TR(0x56d383);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d386:{NFSU2_TR(0x56d386);
u8 U[4];
w4(U+0,u32(0x86b390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d38b:{NFSU2_TR(0x56d38b);
__builtin_memmove((R+4),(R+28),4);
}
B56d38d:{NFSU2_TR(0x56d38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d392ull));
TAIL_STATIC(0x592160u,592);
}
B56d392:L56d392:{c.instructions+=20;NFSU2_TR(0x56d392);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d398:{NFSU2_TR(0x56d398);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d39e:{NFSU2_TR(0x56d39e);
__builtin_memmove((R+4),gp(0x86b390),4);
}
B56d3a4:{NFSU2_TR(0x56d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3aa:{NFSU2_TR(0x56d3aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56d3ac:{NFSU2_TR(0x56d3ac);
{u32 ea_=u32(r4(R+28)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d3b2:{NFSU2_TR(0x56d3b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56d3b4:{NFSU2_TR(0x56d3b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B56d3b6:{NFSU2_TR(0x56d3b6);
{u32 ea_=u32(r4(R+28)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d3bc:{NFSU2_TR(0x56d3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3c2:{NFSU2_TR(0x56d3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3c8:{NFSU2_TR(0x56d3c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d3d2:{NFSU2_TR(0x56d3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56d3d8:{NFSU2_TR(0x56d3d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56d3da:{NFSU2_TR(0x56d3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3dd:{NFSU2_TR(0x56d3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3e0:{NFSU2_TR(0x56d3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d3e3:{NFSU2_TR(0x56d3e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d3e5:{NFSU2_TR(0x56d3e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d3e7:{NFSU2_TR(0x56d3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d3ecull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B56d3ec:L56d3ec:{c.instructions+=5;NFSU2_TR(0x56d3ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d3ee:{NFSU2_TR(0x56d3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d3f1:{NFSU2_TR(0x56d3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56d3f3:{NFSU2_TR(0x56d3f3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d3f5:{NFSU2_TR(0x56d3f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d3f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56d3f8:L56d3f8:{c.instructions+=3;NFSU2_TR(0x56d3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d3fa:{NFSU2_TR(0x56d3fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56d3fe:{NFSU2_TR(0x56d3fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d40a;}}
}
B56d400:L56d400:{c.instructions+=3;NFSU2_TR(0x56d400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d403:{NFSU2_TR(0x56d403);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d405:{NFSU2_TR(0x56d405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d40aull));
TAIL_STATIC(0x599200u,599);
}
B56d40a:L56d40a:{c.instructions+=4;NFSU2_TR(0x56d40a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d40d:{NFSU2_TR(0x56d40d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d40f:{NFSU2_TR(0x56d40f);
__builtin_memmove((R+4),(R+28),4);
}
B56d411:{NFSU2_TR(0x56d411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d416ull));
TAIL_STATIC(0x5769d0u,576);
}
B56d416:L56d416:{c.instructions+=3;NFSU2_TR(0x56d416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d418:{NFSU2_TR(0x56d418);
__builtin_memmove((R+4),(R+28),4);
}
B56d41a:{NFSU2_TR(0x56d41a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d41dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56d41d:L56d41d:{c.instructions+=6;NFSU2_TR(0x56d41d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d41f:{NFSU2_TR(0x56d41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d426:{NFSU2_TR(0x56d426);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d429:{NFSU2_TR(0x56d429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56d42b:{NFSU2_TR(0x56d42b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d42d:{NFSU2_TR(0x56d42d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d430ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56d430:L56d430:{c.instructions+=4;NFSU2_TR(0x56d430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d431:{NFSU2_TR(0x56d431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d438:{NFSU2_TR(0x56d438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d439:{NFSU2_TR(0x56d439);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d440:L56d440:{c.instructions+=3;NFSU2_TR(0x56d440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d441:{NFSU2_TR(0x56d441);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56d445:{NFSU2_TR(0x56d445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d452;}}
}
B56d447:L56d447:{c.instructions+=3;NFSU2_TR(0x56d447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d449:{NFSU2_TR(0x56d449);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56d450:{NFSU2_TR(0x56d450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d498;}}
}
B56d452:L56d452:{c.instructions+=11;NFSU2_TR(0x56d452);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d455:{NFSU2_TR(0x56d455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d457:{NFSU2_TR(0x56d457);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d45a:{NFSU2_TR(0x56d45a);
{u32 ea_=u32(r4(R+8)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d460:{NFSU2_TR(0x56d460);
{u32 ea_=u32(u32(7908012u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d466:{NFSU2_TR(0x56d466);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B56d468:{NFSU2_TR(0x56d468);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56d46c:{NFSU2_TR(0x56d46c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d472:{NFSU2_TR(0x56d472);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d474:{NFSU2_TR(0x56d474);
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
B56d477:{NFSU2_TR(0x56d477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d498;}}
}
B56d479:L56d479:{c.instructions+=6;NFSU2_TR(0x56d479);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d47d:{NFSU2_TR(0x56d47d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d483:{NFSU2_TR(0x56d483);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d487:{NFSU2_TR(0x56d487);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d489:{NFSU2_TR(0x56d489);
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
B56d48c:{NFSU2_TR(0x56d48c);
if(r1(R+514)){{goto L56d496;}}
}
B56d48e:L56d48e:{c.instructions+=2;NFSU2_TR(0x56d48e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d490:{NFSU2_TR(0x56d490);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d496:L56d496:{c.instructions+=2;NFSU2_TR(0x56d496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d497:{NFSU2_TR(0x56d497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d498:L56d498:{c.instructions+=3;NFSU2_TR(0x56d498);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d49e:{NFSU2_TR(0x56d49e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d49f:{NFSU2_TR(0x56d49f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d4a0:L56d4a0:{c.instructions+=8;NFSU2_TR(0x56d4a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d4a1:{NFSU2_TR(0x56d4a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d4a2:{NFSU2_TR(0x56d4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56d4a6:{NFSU2_TR(0x56d4a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d4a7:{NFSU2_TR(0x56d4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d4a8:{NFSU2_TR(0x56d4a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d4b0:{NFSU2_TR(0x56d4b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d4b3:{NFSU2_TR(0x56d4b3);
w4(R+28,u32(0x4ull));
}
B56d4b8:L56d4b8:{c.instructions+=3;NFSU2_TR(0x56d4b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d4b9:{NFSU2_TR(0x56d4b9);
__builtin_memmove((R+4),(R+24),4);
}
B56d4bb:{NFSU2_TR(0x56d4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d4c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d080u);}goto L56d080;}
}
B56d4c0:L56d4c0:{c.instructions+=5;NFSU2_TR(0x56d4c0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d4c4:{NFSU2_TR(0x56d4c4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56d4c6:{NFSU2_TR(0x56d4c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d4c8:{NFSU2_TR(0x56d4c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d4cb:{NFSU2_TR(0x56d4cb);
if(r1(R+518)){{goto L56d4d3;}}
}
B56d4cd:L56d4cd:{c.instructions+=2;NFSU2_TR(0x56d4cd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d4d1:{NFSU2_TR(0x56d4d1);
{goto L56d4d5;}
}
B56d4d3:L56d4d3:{c.instructions+=1;NFSU2_TR(0x56d4d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d4d5:L56d4d5:{c.instructions+=3;NFSU2_TR(0x56d4d5);
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B56d4db:{NFSU2_TR(0x56d4db);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d4dc:{NFSU2_TR(0x56d4dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d4b8u);}goto L56d4b8;}}
}
B56d4de:L56d4de:{c.instructions+=6;NFSU2_TR(0x56d4de);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d4e2:{NFSU2_TR(0x56d4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d4e3:{NFSU2_TR(0x56d4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d4e4:{NFSU2_TR(0x56d4e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56d4e5:{NFSU2_TR(0x56d4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d4e6:{NFSU2_TR(0x56d4e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d4f0:L56d4f0:{c.instructions+=2;NFSU2_TR(0x56d4f0);
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
B56d4f2:{NFSU2_TR(0x56d4f2);
if(r1(R+518)){{goto L56d4fb;}}
}
B56d4f4:L56d4f4:{c.instructions+=2;NFSU2_TR(0x56d4f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56d4fa:{NFSU2_TR(0x56d4fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d4fb:L56d4fb:{c.instructions+=2;NFSU2_TR(0x56d4fb);
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
B56d4fd:{NFSU2_TR(0x56d4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d500:L56d500:{c.instructions+=8;NFSU2_TR(0x56d500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d501:{NFSU2_TR(0x56d501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d502:{NFSU2_TR(0x56d502);
__builtin_memmove((R+24),(R+4),4);
}
B56d504:{NFSU2_TR(0x56d504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d507:{NFSU2_TR(0x56d507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d508:{NFSU2_TR(0x56d508);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56d50c:{NFSU2_TR(0x56d50c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B56d50e:{NFSU2_TR(0x56d50e);
if(r1(R+518)){{goto L56d5af;}}
}
B56d514:L56d514:{c.instructions+=2;NFSU2_TR(0x56d514);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56d517:{NFSU2_TR(0x56d517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d539;}}
}
B56d519:L56d519:{c.instructions+=9;NFSU2_TR(0x56d519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d51c:{NFSU2_TR(0x56d51c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d51f:{NFSU2_TR(0x56d51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d522:{NFSU2_TR(0x56d522);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B56d523:{NFSU2_TR(0x56d523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d526:{NFSU2_TR(0x56d526);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d529:{NFSU2_TR(0x56d529);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d52b:{NFSU2_TR(0x56d52b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56d52e:{NFSU2_TR(0x56d52e);
if(r1(R+514)){{goto L56d539;}}
}
B56d530:L56d530:{c.instructions+=3;NFSU2_TR(0x56d530);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d533:{NFSU2_TR(0x56d533);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d536:{NFSU2_TR(0x56d536);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d539:L56d539:{c.instructions+=2;NFSU2_TR(0x56d539);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B56d53c:{NFSU2_TR(0x56d53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d5ac;}}
}
B56d53e:L56d53e:{c.instructions+=5;NFSU2_TR(0x56d53e);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d541:{NFSU2_TR(0x56d541);
w4(R+4,u32(0x89cf48ull));
}
B56d546:{NFSU2_TR(0x56d546);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56d549:{NFSU2_TR(0x56d549);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d54d:{NFSU2_TR(0x56d54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d552ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56d552:L56d552:{c.instructions+=3;NFSU2_TR(0x56d552);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d554:{NFSU2_TR(0x56d554);
w4(R+0,u32(0x8651acull));
}
B56d559:{NFSU2_TR(0x56d559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d560;}}
}
B56d55b:L56d55b:{c.instructions+=1;NFSU2_TR(0x56d55b);
w4(R+0,u32(0x86518cull));
}
B56d560:L56d560:{c.instructions+=9;NFSU2_TR(0x56d560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d562:{NFSU2_TR(0x56d562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B56d565:{NFSU2_TR(0x56d565);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d569:{NFSU2_TR(0x56d569);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56d56d:{NFSU2_TR(0x56d56d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d573:{NFSU2_TR(0x56d573);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56d576:{NFSU2_TR(0x56d576);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d578:{NFSU2_TR(0x56d578);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d57b:{NFSU2_TR(0x56d57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d582;}}
}
B56d57d:L56d57d:{c.instructions+=2;NFSU2_TR(0x56d57d);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d580:{NFSU2_TR(0x56d580);
{goto L56d584;}
}
B56d582:L56d582:{c.instructions+=1;NFSU2_TR(0x56d582);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56d584:L56d584:{c.instructions+=5;NFSU2_TR(0x56d584);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d587:{NFSU2_TR(0x56d587);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d58a:{NFSU2_TR(0x56d58a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d58c:{NFSU2_TR(0x56d58c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d58f:{NFSU2_TR(0x56d58f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d597;}}
}
B56d591:L56d591:{c.instructions+=2;NFSU2_TR(0x56d591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d594:{NFSU2_TR(0x56d594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d597:L56d597:{c.instructions+=5;NFSU2_TR(0x56d597);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d59b:{NFSU2_TR(0x56d59b);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d59e:{NFSU2_TR(0x56d59e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d5a0:{NFSU2_TR(0x56d5a0);
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
B56d5a3:{NFSU2_TR(0x56d5a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d5ac;}}
}
B56d5a5:L56d5a5:{c.instructions+=2;NFSU2_TR(0x56d5a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d5a9:{NFSU2_TR(0x56d5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d5ac:L56d5ac:{c.instructions+=1;NFSU2_TR(0x56d5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d5af:L56d5af:{c.instructions+=4;NFSU2_TR(0x56d5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d5b0:{NFSU2_TR(0x56d5b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d5b1:{NFSU2_TR(0x56d5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d5b2:{NFSU2_TR(0x56d5b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d5c0:L56d5c0:{c.instructions+=3;NFSU2_TR(0x56d5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d5c3:{NFSU2_TR(0x56d5c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56d5c6:{NFSU2_TR(0x56d5c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d5dd;}}
}
B56d5c8:L56d5c8:{c.instructions+=6;NFSU2_TR(0x56d5c8);
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
B56d5ca:{NFSU2_TR(0x56d5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d5cd:{NFSU2_TR(0x56d5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d5d0:{NFSU2_TR(0x56d5d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d5d3:{NFSU2_TR(0x56d5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d5da:{NFSU2_TR(0x56d5da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d5dd:L56d5dd:{c.instructions+=4;NFSU2_TR(0x56d5dd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B56d5e0:{NFSU2_TR(0x56d5e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56d5e4:{NFSU2_TR(0x56d5e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d5e7:{NFSU2_TR(0x56d5e7);
if(r1(R+518)){{goto L56d615;}}
}
B56d5e9:L56d5e9:{c.instructions+=2;NFSU2_TR(0x56d5e9);
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
B56d5ec:{NFSU2_TR(0x56d5ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d60e;}}
}
B56d5ee:L56d5ee:{c.instructions+=9;NFSU2_TR(0x56d5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d5f1:{NFSU2_TR(0x56d5f1);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d5f4:{NFSU2_TR(0x56d5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d5f7:{NFSU2_TR(0x56d5f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B56d5f8:{NFSU2_TR(0x56d5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d5fb:{NFSU2_TR(0x56d5fb);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d5fe:{NFSU2_TR(0x56d5fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d600:{NFSU2_TR(0x56d600);
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
B56d603:{NFSU2_TR(0x56d603);
if(r1(R+514)){{goto L56d60e;}}
}
B56d605:L56d605:{c.instructions+=3;NFSU2_TR(0x56d605);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d608:{NFSU2_TR(0x56d608);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d60b:{NFSU2_TR(0x56d60b);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d60e:L56d60e:{c.instructions+=1;NFSU2_TR(0x56d60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d615:L56d615:{c.instructions+=1;NFSU2_TR(0x56d615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d620:L56d620:{c.instructions+=5;NFSU2_TR(0x56d620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d621:{NFSU2_TR(0x56d621);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d622:{NFSU2_TR(0x56d622);
__builtin_memmove((R+24),(R+4),4);
}
B56d624:{NFSU2_TR(0x56d624);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d627:{NFSU2_TR(0x56d627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d62cull));
TAIL_STATIC(0x75bed4u,75b);
}
B56d62c:L56d62c:{c.instructions+=9;NFSU2_TR(0x56d62c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d630:{NFSU2_TR(0x56d630);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56d634:{NFSU2_TR(0x56d634);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56d638:{NFSU2_TR(0x56d638);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d63a:{NFSU2_TR(0x56d63a);
__builtin_memmove((R+4),(R+24),4);
}
B56d63c:{NFSU2_TR(0x56d63c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d63f:{NFSU2_TR(0x56d63f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d642:{NFSU2_TR(0x56d642);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d645:{NFSU2_TR(0x56d645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d64aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d500u);}goto L56d500;}
}
B56d64a:L56d64a:{c.instructions+=3;NFSU2_TR(0x56d64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d64b:{NFSU2_TR(0x56d64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d64c:{NFSU2_TR(0x56d64c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d650:L56d650:{c.instructions+=20;NFSU2_TR(0x56d650);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56d652:{NFSU2_TR(0x56d652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d655:{NFSU2_TR(0x56d655);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d658:{NFSU2_TR(0x56d658);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d65b:{NFSU2_TR(0x56d65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d65e:{NFSU2_TR(0x56d65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d661:{NFSU2_TR(0x56d661);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d664:{NFSU2_TR(0x56d664);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d667:{NFSU2_TR(0x56d667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d66a:{NFSU2_TR(0x56d66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d66d:{NFSU2_TR(0x56d66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d670:{NFSU2_TR(0x56d670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d673:{NFSU2_TR(0x56d673);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d676:{NFSU2_TR(0x56d676);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d679:{NFSU2_TR(0x56d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d67c:{NFSU2_TR(0x56d67c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d67f:{NFSU2_TR(0x56d67f);
w4(R+8,u32(0x3f800000ull));
}
B56d684:{NFSU2_TR(0x56d684);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d687:{NFSU2_TR(0x56d687);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d68a:{NFSU2_TR(0x56d68a);
if(r1(R+518)){{goto L56d6be;}}
}
B56d68c:L56d68c:{c.instructions+=2;NFSU2_TR(0x56d68c);
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
B56d68f:{NFSU2_TR(0x56d68f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d6b7;}}
}
B56d691:L56d691:{c.instructions+=7;NFSU2_TR(0x56d691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d694:{NFSU2_TR(0x56d694);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d69a:{NFSU2_TR(0x56d69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d6a1:{NFSU2_TR(0x56d6a1);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d6a4:{NFSU2_TR(0x56d6a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d6a6:{NFSU2_TR(0x56d6a6);
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
B56d6a9:{NFSU2_TR(0x56d6a9);
if(r1(R+514)){{goto L56d6b7;}}
}
B56d6ab:L56d6ab:{c.instructions+=3;NFSU2_TR(0x56d6ab);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d6ae:{NFSU2_TR(0x56d6ae);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d6b4:{NFSU2_TR(0x56d6b4);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d6b7:L56d6b7:{c.instructions+=1;NFSU2_TR(0x56d6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d6be:L56d6be:{c.instructions+=1;NFSU2_TR(0x56d6be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d6c0:L56d6c0:{c.instructions+=4;NFSU2_TR(0x56d6c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56d6c3:{NFSU2_TR(0x56d6c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56d6c5:{NFSU2_TR(0x56d6c5);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56d6c7:{NFSU2_TR(0x56d6c7);
if(r1(R+518)){{goto L56d6cd;}}
}
B56d6c9:L56d6c9:{c.instructions+=2;NFSU2_TR(0x56d6c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d6cc:{NFSU2_TR(0x56d6cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d6cd:L56d6cd:{c.instructions+=6;NFSU2_TR(0x56d6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d6d0:{NFSU2_TR(0x56d6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d6d3:{NFSU2_TR(0x56d6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d6d6:{NFSU2_TR(0x56d6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d6d9:{NFSU2_TR(0x56d6d9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d6dc:{NFSU2_TR(0x56d6dc);
if(r1(R+518)){{goto L56d70a;}}
}
B56d6de:L56d6de:{c.instructions+=2;NFSU2_TR(0x56d6de);
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
B56d6e1:{NFSU2_TR(0x56d6e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d703;}}
}
B56d6e3:L56d6e3:{c.instructions+=9;NFSU2_TR(0x56d6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d6e6:{NFSU2_TR(0x56d6e6);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d6e9:{NFSU2_TR(0x56d6e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d6ec:{NFSU2_TR(0x56d6ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B56d6ed:{NFSU2_TR(0x56d6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d6f0:{NFSU2_TR(0x56d6f0);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56d6f3:{NFSU2_TR(0x56d6f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56d6f5:{NFSU2_TR(0x56d6f5);
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
B56d6f8:{NFSU2_TR(0x56d6f8);
if(r1(R+514)){{goto L56d703;}}
}
B56d6fa:L56d6fa:{c.instructions+=3;NFSU2_TR(0x56d6fa);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d6fd:{NFSU2_TR(0x56d6fd);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d700:{NFSU2_TR(0x56d700);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d703:L56d703:{c.instructions+=1;NFSU2_TR(0x56d703);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d70a:L56d70a:{c.instructions+=1;NFSU2_TR(0x56d70a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d710:L56d710:{c.instructions+=6;NFSU2_TR(0x56d710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d711:{NFSU2_TR(0x56d711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d712:{NFSU2_TR(0x56d712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d713:{NFSU2_TR(0x56d713);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d714:{NFSU2_TR(0x56d714);
__builtin_memmove((R+20),(R+4),4);
}
B56d716:{NFSU2_TR(0x56d716);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56d718:L56d718:{c.instructions+=3;NFSU2_TR(0x56d718);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B56d71c:{NFSU2_TR(0x56d71c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d71e:{NFSU2_TR(0x56d71e);
if(r1(R+518)){{goto L56d760;}}
}
B56d720:L56d720:{c.instructions+=3;NFSU2_TR(0x56d720);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56d723:{NFSU2_TR(0x56d723);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d725:{NFSU2_TR(0x56d725);
if(r1(R+518)){{goto L56d760;}}
}
B56d727:L56d727:{c.instructions+=3;NFSU2_TR(0x56d727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d72a:{NFSU2_TR(0x56d72a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d72c:{NFSU2_TR(0x56d72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d753;}}
}
B56d72e:L56d72e:{c.instructions+=2;NFSU2_TR(0x56d72e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56d731:{NFSU2_TR(0x56d731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d736ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56d736:L56d736:{c.instructions+=8;NFSU2_TR(0x56d736);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d73a:{NFSU2_TR(0x56d73a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56d73e:{NFSU2_TR(0x56d73e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d740:{NFSU2_TR(0x56d740);
__builtin_memmove((R+4),(R+24),4);
}
B56d742:{NFSU2_TR(0x56d742);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56d746:{NFSU2_TR(0x56d746);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d749:{NFSU2_TR(0x56d749);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56d74c:{NFSU2_TR(0x56d74c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d751ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d500u);}goto L56d500;}
}
B56d751:L56d751:{c.instructions+=1;NFSU2_TR(0x56d751);
{goto L56d760;}
}
B56d753:L56d753:{c.instructions+=2;NFSU2_TR(0x56d753);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56d756:{NFSU2_TR(0x56d756);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d760;}}
}
B56d758:L56d758:{c.instructions+=3;NFSU2_TR(0x56d758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d759:{NFSU2_TR(0x56d759);
__builtin_memmove((R+4),(R+24),4);
}
B56d75b:{NFSU2_TR(0x56d75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d760ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d5c0u);}goto L56d5c0;}
}
B56d760:L56d760:{c.instructions+=3;NFSU2_TR(0x56d760);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56d761:{NFSU2_TR(0x56d761);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x27ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x27ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x27ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d764:{NFSU2_TR(0x56d764);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d718u);}goto L56d718;}}
}
B56d766:L56d766:{c.instructions+=5;NFSU2_TR(0x56d766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d767:{NFSU2_TR(0x56d767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d768:{NFSU2_TR(0x56d768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56d769:{NFSU2_TR(0x56d769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d76a:{NFSU2_TR(0x56d76a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d770:L56d770:{c.instructions+=10;NFSU2_TR(0x56d770);
__builtin_memmove((R+0),(R+4),4);
}
B56d772:{NFSU2_TR(0x56d772);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B56d775:{NFSU2_TR(0x56d775);
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
B56d777:{NFSU2_TR(0x56d777);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d77a:{NFSU2_TR(0x56d77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d77d:{NFSU2_TR(0x56d77d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d780:{NFSU2_TR(0x56d780);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d787:{NFSU2_TR(0x56d787);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d78a:{NFSU2_TR(0x56d78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d791:{NFSU2_TR(0x56d791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d7a0:L56d7a0:{c.instructions+=3;NFSU2_TR(0x56d7a0);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56d7a5:{NFSU2_TR(0x56d7a5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x864630ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x864630ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x864630ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d7aa:{NFSU2_TR(0x56d7aa);
if(r1(R+518)){{goto L56d7c6;}}
}
B56d7ac:L56d7ac:{c.instructions+=1;NFSU2_TR(0x56d7ac);
__builtin_memmove((R+16),(R+16),4);
}
B56d7b0:L56d7b0:{c.instructions+=7;NFSU2_TR(0x56d7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d7b2:{NFSU2_TR(0x56d7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d7b5:{NFSU2_TR(0x56d7b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56d7b7:{NFSU2_TR(0x56d7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d7ba:{NFSU2_TR(0x56d7ba);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56d7bf:{NFSU2_TR(0x56d7bf);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x864630ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x864630ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x864630ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d7c4:{NFSU2_TR(0x56d7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d7b0u);}goto L56d7b0;}}
}
B56d7c6:L56d7c6:{c.instructions+=1;NFSU2_TR(0x56d7c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d7d0:L56d7d0:{c.instructions+=12;NFSU2_TR(0x56d7d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d7d1:{NFSU2_TR(0x56d7d1);
__builtin_memmove((R+24),(R+4),4);
}
B56d7d3:{NFSU2_TR(0x56d7d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d7d4:{NFSU2_TR(0x56d7d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56d7d8:{NFSU2_TR(0x56d7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d7db:{NFSU2_TR(0x56d7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d7e1:{NFSU2_TR(0x56d7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B56d7e3:{NFSU2_TR(0x56d7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56d7e5:{NFSU2_TR(0x56d7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d7e8:{NFSU2_TR(0x56d7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d7eb:{NFSU2_TR(0x56d7eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56d7ee:{NFSU2_TR(0x56d7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d7f3ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56d7f3:L56d7f3:{c.instructions+=8;NFSU2_TR(0x56d7f3);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B56d7f6:{NFSU2_TR(0x56d7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d7f9:{NFSU2_TR(0x56d7f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B56d7fc:{NFSU2_TR(0x56d7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d803:{NFSU2_TR(0x56d803);
{u32 ea_=u32(r4(R+0)+u32(7985800u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56d809:{NFSU2_TR(0x56d809);
{u32 ea_=u32(u32(7985892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56d80f:{NFSU2_TR(0x56d80f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56d815:{NFSU2_TR(0x56d815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d81aull));
TAIL_STATIC(0x75bed4u,75b);
}
B56d81a:L56d81a:{c.instructions+=5;NFSU2_TR(0x56d81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d81d:{NFSU2_TR(0x56d81d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d81f:{NFSU2_TR(0x56d81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d822:{NFSU2_TR(0x56d822);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
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
B56d826:{NFSU2_TR(0x56d826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d83c;}}
}
B56d828:L56d828:{c.instructions+=6;NFSU2_TR(0x56d828);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B56d82d:{NFSU2_TR(0x56d82d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dae8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56d834:{NFSU2_TR(0x56d834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d835:{NFSU2_TR(0x56d835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d838:{NFSU2_TR(0x56d838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d839:{NFSU2_TR(0x56d839);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d83c:L56d83c:{c.instructions+=4;NFSU2_TR(0x56d83c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d83d:{NFSU2_TR(0x56d83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d844:{NFSU2_TR(0x56d844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56d845:{NFSU2_TR(0x56d845);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56d850:L56d850:{c.instructions+=15;NFSU2_TR(0x56d850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d851:{NFSU2_TR(0x56d851);
__builtin_memmove((R+20),(R+16),4);
}
B56d853:{NFSU2_TR(0x56d853);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B56d856:{NFSU2_TR(0x56d856);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d858:{NFSU2_TR(0x56d858);
u8 U[4];
w4(U+0,u32(0x778756ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d85d:{NFSU2_TR(0x56d85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d863:{NFSU2_TR(0x56d863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d864:{NFSU2_TR(0x56d864);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d86b:{NFSU2_TR(0x56d86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x958ull))));
}
B56d871:{NFSU2_TR(0x56d871);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56d876:{NFSU2_TR(0x56d876);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x864630ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d87b:{NFSU2_TR(0x56d87b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d87c:{NFSU2_TR(0x56d87c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d87d:{NFSU2_TR(0x56d87d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d87e:{NFSU2_TR(0x56d87e);
if(r1(R+518)){{goto L56d896;}}
}
B56d880:L56d880:{c.instructions+=7;NFSU2_TR(0x56d880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56d882:{NFSU2_TR(0x56d882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d885:{NFSU2_TR(0x56d885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56d887:{NFSU2_TR(0x56d887);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d88a:{NFSU2_TR(0x56d88a);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56d88f:{NFSU2_TR(0x56d88f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x864630ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d894:{NFSU2_TR(0x56d894);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d880u);}goto L56d880;}}
}
B56d896:L56d896:{c.instructions+=10;NFSU2_TR(0x56d896);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B56d89b:{NFSU2_TR(0x56d89b);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B56d8a1:{NFSU2_TR(0x56d8a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56d8a3:{NFSU2_TR(0x56d8a3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B56d8a5:{NFSU2_TR(0x56d8a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56d8a7:{NFSU2_TR(0x56d8a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d8ab:{NFSU2_TR(0x56d8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d8b3:{NFSU2_TR(0x56d8b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d8b7:{NFSU2_TR(0x56d8b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d8bb:{NFSU2_TR(0x56d8bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56d9f1;}}
}
B56d8c1:L56d8c1:{c.instructions+=2;NFSU2_TR(0x56d8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x864640ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d8c9:{NFSU2_TR(0x56d8c9);
__builtin_memmove((R+16),(R+16),4);
}
B56d8d0:L56d8d0:{c.instructions+=4;NFSU2_TR(0x56d8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d8d4:{NFSU2_TR(0x56d8d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d8d5:{NFSU2_TR(0x56d8d5);
w4(R+4,u32(0x89e7a0ull));
}
B56d8da:{NFSU2_TR(0x56d8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d8dfull));
TAIL_STATIC(0x5ed900u,5ed);
}
B56d8df:L56d8df:{c.instructions+=7;NFSU2_TR(0x56d8df);
__builtin_memmove((R+24),(R+0),4);
}
B56d8e1:{NFSU2_TR(0x56d8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d8e4:{NFSU2_TR(0x56d8e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56d8ea:{NFSU2_TR(0x56d8ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56d8ec:{NFSU2_TR(0x56d8ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56d8ef:{NFSU2_TR(0x56d8ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56d8f4:{NFSU2_TR(0x56d8f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d927;}}
}
B56d8f6:L56d8f6:{c.instructions+=2;NFSU2_TR(0x56d8f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d8f8:{NFSU2_TR(0x56d8f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56d92b;}}
}
B56d8fa:L56d8fa:{c.instructions+=5;NFSU2_TR(0x56d8fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56d8fd:{NFSU2_TR(0x56d8fd);
w4(R+4,u32(0x89cf48ull));
}
B56d902:{NFSU2_TR(0x56d902);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d906:{NFSU2_TR(0x56d906);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56d90b:{NFSU2_TR(0x56d90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d910ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56d910:L56d910:{c.instructions+=2;NFSU2_TR(0x56d910);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d912:{NFSU2_TR(0x56d912);
if(r1(R+518)){{goto L56d91f;}}
}
B56d914:L56d914:{c.instructions+=3;NFSU2_TR(0x56d914);
__builtin_memmove((R+28),gp(0x89cf4c),4);
}
B56d91a:{NFSU2_TR(0x56d91a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x12ull))));
}
B56d91d:{NFSU2_TR(0x56d91d);
{goto L56d942;}
}
B56d91f:L56d91f:{c.instructions+=2;NFSU2_TR(0x56d91f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d925:{NFSU2_TR(0x56d925);
{goto L56d942;}
}
B56d927:L56d927:{c.instructions+=2;NFSU2_TR(0x56d927);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56d929:{NFSU2_TR(0x56d929);
if(r1(R+518)){{goto L56d942;}}
}
B56d92b:L56d92b:{c.instructions+=2;NFSU2_TR(0x56d92b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56d92e:{NFSU2_TR(0x56d92e);
if(r1(R+518)){{goto L56d942;}}
}
B56d930:L56d930:{c.instructions+=4;NFSU2_TR(0x56d930);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B56d934:{NFSU2_TR(0x56d934);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56d935:{NFSU2_TR(0x56d935);
w4(R+4,u32(0x89cf48ull));
}
B56d93a:{NFSU2_TR(0x56d93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d93full));
TAIL_STATIC(0x5f0220u,5f0);
}
B56d93f:L56d93f:{c.instructions+=1;NFSU2_TR(0x56d93f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56d942:L56d942:{c.instructions+=3;NFSU2_TR(0x56d942);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56d945:{NFSU2_TR(0x56d945);
__builtin_memmove((R+4),(R+12),4);
}
B56d947:{NFSU2_TR(0x56d947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d94cull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56d94c:L56d94c:{c.instructions+=14;NFSU2_TR(0x56d94c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B56d950:{NFSU2_TR(0x56d950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d953:{NFSU2_TR(0x56d953);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d957:{NFSU2_TR(0x56d957);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56d95b:{NFSU2_TR(0x56d95b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B56d95e:{NFSU2_TR(0x56d95e);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56d962:{NFSU2_TR(0x56d962);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56d966:{NFSU2_TR(0x56d966);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d96a:{NFSU2_TR(0x56d96a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d96e:{NFSU2_TR(0x56d96e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56d972:{NFSU2_TR(0x56d972);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d976:{NFSU2_TR(0x56d976);
w4(R+4,u32(0x8ull));
}
B56d97b:{NFSU2_TR(0x56d97b);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B56d97f:{NFSU2_TR(0x56d97f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56d987:L56d987:{c.instructions+=1;NFSU2_TR(0x56d987);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L56d989;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d987u);}goto L56d987;}
}
B56d989:L56d989:{c.instructions+=4;NFSU2_TR(0x56d989);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B56d98a:{NFSU2_TR(0x56d98a);
__builtin_memmove((R+4),(R+12),4);
}
B56d98c:{NFSU2_TR(0x56d98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d990:{NFSU2_TR(0x56d990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d995ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56d995:L56d995:{c.instructions+=4;NFSU2_TR(0x56d995);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d999:{NFSU2_TR(0x56d999);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B56d99c:{NFSU2_TR(0x56d99c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56d99e:{NFSU2_TR(0x56d99e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56d9ae;}}
}
B56d9a0:L56d9a0:{c.instructions+=2;NFSU2_TR(0x56d9a0);
__builtin_memmove((R+4),(R+12),4);
}
B56d9a2:{NFSU2_TR(0x56d9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56d9a7ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56d9a7:L56d9a7:{c.instructions+=2;NFSU2_TR(0x56d9a7);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B56d9aa:{NFSU2_TR(0x56d9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d9ae:L56d9ae:{c.instructions+=16;NFSU2_TR(0x56d9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56d9b2:{NFSU2_TR(0x56d9b2);
__builtin_memmove((R+4),gp(0x864634),4);
}
B56d9b8:{NFSU2_TR(0x56d9b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B56d9ba:{NFSU2_TR(0x56d9ba);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B56d9c0:{NFSU2_TR(0x56d9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d9c3:{NFSU2_TR(0x56d9c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56d9c7:{NFSU2_TR(0x56d9c7);
__builtin_memmove(gp(0x864634),(R+0),4);
}
B56d9cc:{NFSU2_TR(0x56d9cc);
u8 U[4];
w4(U+0,u32(0x864630ull));
s4(u32(r4(R+0)),r4(U+0));
}
B56d9d2:{NFSU2_TR(0x56d9d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B56d9d5:{NFSU2_TR(0x56d9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d9d9:{NFSU2_TR(0x56d9d9);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B56d9de:{NFSU2_TR(0x56d9de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56d9df:{NFSU2_TR(0x56d9df);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B56d9e1:{NFSU2_TR(0x56d9e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56d9e3:{NFSU2_TR(0x56d9e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56d9e7:{NFSU2_TR(0x56d9e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d8d0u);}goto L56d8d0;}}
}
B56d9ed:L56d9ed:{c.instructions+=1;NFSU2_TR(0x56d9ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56d9f1:L56d9f1:{c.instructions+=3;NFSU2_TR(0x56d9f1);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B56d9f6:{NFSU2_TR(0x56d9f6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B56d9fb:{NFSU2_TR(0x56d9fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56dbe3;}}
}
B56da01:L56da01:{c.instructions+=2;NFSU2_TR(0x56da01);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56da06:{NFSU2_TR(0x56da06);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L56dbe3;}}
}
B56da0c:L56da0c:{c.instructions+=2;NFSU2_TR(0x56da0c);
w4(R+4,u32(0x89cf48ull));
}
B56da11:{NFSU2_TR(0x56da11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56da16ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56da16:L56da16:{c.instructions+=2;NFSU2_TR(0x56da16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56da18:{NFSU2_TR(0x56da18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dbe3;}}
}
B56da1e:L56da1e:{c.instructions+=4;NFSU2_TR(0x56da1e);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B56da23:{NFSU2_TR(0x56da23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56da25:{NFSU2_TR(0x56da25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56da28:{NFSU2_TR(0x56da28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56da2f;}}
}
B56da2a:L56da2a:{c.instructions+=1;NFSU2_TR(0x56da2a);
w4(R+28,u32(0x3ull));
}
B56da2f:L56da2f:{c.instructions+=5;NFSU2_TR(0x56da2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56da33:{NFSU2_TR(0x56da33);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da35:{NFSU2_TR(0x56da35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da36:{NFSU2_TR(0x56da36);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56da3b:{NFSU2_TR(0x56da3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56da40ull));
TAIL_STATIC(0x4fe970u,4fe);
}
B56da40:L56da40:{c.instructions+=3;NFSU2_TR(0x56da40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56da43:{NFSU2_TR(0x56da43);
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
B56da45:{NFSU2_TR(0x56da45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56dc7e;}}
}
B56da4b:L56da4b:{c.instructions+=8;NFSU2_TR(0x56da4b);
w4(R+24,u32(0x64ull));
}
B56da50:{NFSU2_TR(0x56da50);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56da54:{NFSU2_TR(0x56da54);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B56da57:{NFSU2_TR(0x56da57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56da5b:{NFSU2_TR(0x56da5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56da5f:{NFSU2_TR(0x56da5f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x864640ull))));
}
B56da65:{NFSU2_TR(0x56da65);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56da69:{NFSU2_TR(0x56da69);
{goto L56da70;}
}
B56da6b:L56da6b:{c.instructions+=2;NFSU2_TR(0x56da6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56da6f:{NFSU2_TR(0x56da6f);
}
B56da70:L56da70:{c.instructions+=2;NFSU2_TR(0x56da70);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56da77:{NFSU2_TR(0x56da77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56da7cull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B56da7c:L56da7c:{c.instructions+=7;NFSU2_TR(0x56da7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da7e:{NFSU2_TR(0x56da7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da80:{NFSU2_TR(0x56da80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da82:{NFSU2_TR(0x56da82);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56da84:{NFSU2_TR(0x56da84);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56da8b:{NFSU2_TR(0x56da8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x97cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56da96:{NFSU2_TR(0x56da96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56da9bull));
TAIL_STATIC(0x610270u,610);
}
B56da9b:L56da9b:{c.instructions+=14;NFSU2_TR(0x56da9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56da9f:{NFSU2_TR(0x56da9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56daa3:{NFSU2_TR(0x56daa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56daa5:{NFSU2_TR(0x56daa5);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56daaa:{NFSU2_TR(0x56daaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56daac:{NFSU2_TR(0x56daac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56daad:{NFSU2_TR(0x56daad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56daaf:{NFSU2_TR(0x56daaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dab1:{NFSU2_TR(0x56dab1);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B56dab8:{NFSU2_TR(0x56dab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dab9:{NFSU2_TR(0x56dab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56daba:{NFSU2_TR(0x56daba);
u8 U[8];
w4(U+0,u32(u32(u32(0x988ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dac5:{NFSU2_TR(0x56dac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dac9:{NFSU2_TR(0x56dac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56daceull));
TAIL_STATIC(0x4feaf0u,4fe);
}
B56dace:L56dace:{c.instructions+=4;NFSU2_TR(0x56dace);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56dad2:{NFSU2_TR(0x56dad2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B56dad5:{NFSU2_TR(0x56dad5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dad7:{NFSU2_TR(0x56dad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dae6;}}
}
B56dad9:L56dad9:{c.instructions+=4;NFSU2_TR(0x56dad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dadd:{NFSU2_TR(0x56dadd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B56dadf:{NFSU2_TR(0x56dadf);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56dae4:{NFSU2_TR(0x56dae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56daeb;}}
}
B56dae6:L56dae6:{c.instructions+=1;NFSU2_TR(0x56dae6);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56daeb:L56daeb:{c.instructions+=5;NFSU2_TR(0x56daeb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56daf1:{NFSU2_TR(0x56daf1);
__builtin_memmove((R+8),gp(0x89e7a0),4);
}
B56daf7:{NFSU2_TR(0x56daf7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B56daf9:{NFSU2_TR(0x56daf9);
w4(R+0,u32(0x7fa5c0ull));
}
B56dafe:{NFSU2_TR(0x56dafe);
__builtin_memmove((R+28),(R+28),4);
}
B56db00:L56db00:{c.instructions+=2;NFSU2_TR(0x56db00);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B56db02:{NFSU2_TR(0x56db02);
if(r1(R+518)){{goto L56db15;}}
}
B56db04:L56db04:{c.instructions+=4;NFSU2_TR(0x56db04);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
}
B56db07:{NFSU2_TR(0x56db07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56db08:{NFSU2_TR(0x56db08);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fa6f8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fa6f8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B56db0d:{NFSU2_TR(0x56db0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56db00u);}goto L56db00;}}
}
B56db0f:L56db0f:{c.instructions+=2;NFSU2_TR(0x56db0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56db13:{NFSU2_TR(0x56db13);
{goto L56db32;}
}
B56db15:L56db15:{c.instructions+=8;NFSU2_TR(0x56db15);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56db19:{NFSU2_TR(0x56db19);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B56db1c:{NFSU2_TR(0x56db1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56db1e:{NFSU2_TR(0x56db1e);
__builtin_memmove((R+28),gp(0x89e7f4),4);
}
B56db24:{NFSU2_TR(0x56db24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B56db27:{NFSU2_TR(0x56db27);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B56db29:{NFSU2_TR(0x56db29);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B56db2b:{NFSU2_TR(0x56db2b);
{u32 ea_=u32((r4(R+8)*4u)+u32(8365508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56db32:L56db32:{c.instructions+=3;NFSU2_TR(0x56db32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff9dull))));
__builtin_memmove((R+4),(U+0),4);
}
B56db35:{NFSU2_TR(0x56db35);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56db38:{NFSU2_TR(0x56db38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56db42;}}
}
B56db3a:L56db3a:{c.instructions+=2;NFSU2_TR(0x56db3a);
{u32 ea_=u32(u32(7985736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56db40:{NFSU2_TR(0x56db40);
{goto L56db4d;}
}
B56db42:L56db42:{c.instructions+=2;NFSU2_TR(0x56db42);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B56db45:{NFSU2_TR(0x56db45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56db4d;}}
}
B56db47:L56db47:{c.instructions+=1;NFSU2_TR(0x56db47);
{u32 ea_=u32(u32(7985740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56db4d:L56db4d:{c.instructions+=12;NFSU2_TR(0x56db4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56db51:{NFSU2_TR(0x56db51);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56db55:{NFSU2_TR(0x56db55);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56db59:{NFSU2_TR(0x56db59);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56db5d:{NFSU2_TR(0x56db5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56db61:{NFSU2_TR(0x56db61);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56db65:{NFSU2_TR(0x56db65);
__builtin_memmove((R+0),gp(0x864634),4);
}
B56db6a:{NFSU2_TR(0x56db6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56db6e:{NFSU2_TR(0x56db6e);
w4(R+4,u32(0x8ull));
}
B56db73:{NFSU2_TR(0x56db73);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B56db77:{NFSU2_TR(0x56db77);
__builtin_memmove((R+28),(R+12),4);
}
B56db79:{NFSU2_TR(0x56db79);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56db7e:L56db7e:{c.instructions+=1;NFSU2_TR(0x56db7e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L56db80;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56db7eu);}goto L56db7e;}
}
B56db80:L56db80:{c.instructions+=7;NFSU2_TR(0x56db80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56db82:{NFSU2_TR(0x56db82);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56db89:{NFSU2_TR(0x56db89);
__builtin_memmove(gp(0x864634),(R+12),4);
}
B56db8f:{NFSU2_TR(0x56db8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56db92:{NFSU2_TR(0x56db92);
u8 U[4];
w4(U+0,u32(0x864630ull));
s4(u32(r4(R+12)),r4(U+0));
}
B56db98:{NFSU2_TR(0x56db98);
u8 U[8];
w4(U+0,u32(u32(u32(0x96cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dba3:{NFSU2_TR(0x56dba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dba8ull));
TAIL_STATIC(0x4022c0u,402);
}
B56dba8:L56dba8:{c.instructions+=11;NFSU2_TR(0x56dba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56dbac:{NFSU2_TR(0x56dbac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dbb0:{NFSU2_TR(0x56dbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dbb4:{NFSU2_TR(0x56dbb4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B56dbb7:{NFSU2_TR(0x56dbb7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B56dbb8:{NFSU2_TR(0x56dbb8);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B56dbbb:{NFSU2_TR(0x56dbbb);
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
B56dbbc:{NFSU2_TR(0x56dbbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dbc0:{NFSU2_TR(0x56dbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dbc4:{NFSU2_TR(0x56dbc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dbc8:{NFSU2_TR(0x56dbc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56da6bu);}goto L56da6b;}}
}
B56dbce:L56dbce:{c.instructions+=8;NFSU2_TR(0x56dbce);
u8 U[8];
w4(U+0,u32(u32(u32(0x964ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dbd5:{NFSU2_TR(0x56dbd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dbdc:{NFSU2_TR(0x56dbdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56dbdd:{NFSU2_TR(0x56dbdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dbde:{NFSU2_TR(0x56dbde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56dbdf:{NFSU2_TR(0x56dbdf);
__builtin_memmove((R+16),(R+20),4);
}
B56dbe1:{NFSU2_TR(0x56dbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56dbe2:{NFSU2_TR(0x56dbe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dbe3:L56dbe3:{c.instructions+=4;NFSU2_TR(0x56dbe3);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B56dbe8:{NFSU2_TR(0x56dbe8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56dbea:{NFSU2_TR(0x56dbea);
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
B56dbec:{NFSU2_TR(0x56dbec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56dc7e;}}
}
B56dbf2:L56dbf2:{c.instructions+=7;NFSU2_TR(0x56dbf2);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B56dbf8:{NFSU2_TR(0x56dbf8);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B56dbfd:{NFSU2_TR(0x56dbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B56dc00:{NFSU2_TR(0x56dc00);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B56dc02:{NFSU2_TR(0x56dc02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dc03:{NFSU2_TR(0x56dc03);
w4(R+4,u32(0x89e7a0ull));
}
B56dc08:{NFSU2_TR(0x56dc08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dc0dull));
TAIL_STATIC(0x5ed900u,5ed);
}
B56dc0d:L56dc0d:{c.instructions+=3;NFSU2_TR(0x56dc0d);
__builtin_memmove((R+28),(R+0),4);
}
B56dc0f:{NFSU2_TR(0x56dc0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56dc12:{NFSU2_TR(0x56dc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dc17ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56dc17:L56dc17:{c.instructions+=15;NFSU2_TR(0x56dc17);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B56dc1b:{NFSU2_TR(0x56dc1b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B56dc1e:{NFSU2_TR(0x56dc1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B56dc21:{NFSU2_TR(0x56dc21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56dc27:{NFSU2_TR(0x56dc27);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc2b:{NFSU2_TR(0x56dc2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864640ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56dc31:{NFSU2_TR(0x56dc31);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc35:{NFSU2_TR(0x56dc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56dc38:{NFSU2_TR(0x56dc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc3c:{NFSU2_TR(0x56dc3c);
__builtin_memmove((R+28),(R+0),4);
}
B56dc3e:{NFSU2_TR(0x56dc3e);
w4(R+4,u32(0x8ull));
}
B56dc43:{NFSU2_TR(0x56dc43);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B56dc47:{NFSU2_TR(0x56dc47);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dc4f:{NFSU2_TR(0x56dc4f);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56dc54:{NFSU2_TR(0x56dc54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc58:L56dc58:{c.instructions+=1;NFSU2_TR(0x56dc58);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L56dc5a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56dc58u);}goto L56dc58;}
}
B56dc5a:L56dc5a:{c.instructions+=9;NFSU2_TR(0x56dc5a);
__builtin_memmove((R+4),gp(0x864634),4);
}
B56dc60:{NFSU2_TR(0x56dc60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B56dc62:{NFSU2_TR(0x56dc62);
__builtin_memmove(gp(0x864634),(R+0),4);
}
B56dc67:{NFSU2_TR(0x56dc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc6a:{NFSU2_TR(0x56dc6a);
u8 U[4];
w4(U+0,u32(0x864630ull));
s4(u32(r4(R+0)),r4(U+0));
}
B56dc70:{NFSU2_TR(0x56dc70);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B56dc75:{NFSU2_TR(0x56dc75);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B56dc76:{NFSU2_TR(0x56dc76);
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
B56dc78:{NFSU2_TR(0x56dc78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56dbf2u);}goto L56dbf2;}}
}
B56dc7e:L56dc7e:{c.instructions+=8;NFSU2_TR(0x56dc7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x964ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dc85:{NFSU2_TR(0x56dc85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56dc86:{NFSU2_TR(0x56dc86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dc87:{NFSU2_TR(0x56dc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dc8e:{NFSU2_TR(0x56dc8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56dc8f:{NFSU2_TR(0x56dc8f);
__builtin_memmove((R+16),(R+20),4);
}
B56dc91:{NFSU2_TR(0x56dc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56dc92:{NFSU2_TR(0x56dc92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dca0:L56dca0:{c.instructions+=11;NFSU2_TR(0x56dca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56dca3:{NFSU2_TR(0x56dca3);
{u32 ea_=u32(u32(7986200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56dca9:{NFSU2_TR(0x56dca9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dcaa:{NFSU2_TR(0x56dcaa);
__builtin_memmove((R+24),(R+4),4);
}
B56dcac:{NFSU2_TR(0x56dcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dcaf:{NFSU2_TR(0x56dcaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dcb0:{NFSU2_TR(0x56dcb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56dcb6:{NFSU2_TR(0x56dcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dcb9:{NFSU2_TR(0x56dcb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56dcbb:{NFSU2_TR(0x56dcbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dcc3:{NFSU2_TR(0x56dcc3);
if(r1(R+518)){{goto L56dcf9;}}
}
B56dcc5:L56dcc5:{c.instructions+=2;NFSU2_TR(0x56dcc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56dcca:{NFSU2_TR(0x56dcca);
if(r1(R+518)){{goto L56dcf9;}}
}
B56dccc:L56dccc:{c.instructions+=3;NFSU2_TR(0x56dccc);
w4(R+4,u32(0x89cf48ull));
}
B56dcd1:{NFSU2_TR(0x56dcd1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56dcd3:{NFSU2_TR(0x56dcd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dcd8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56dcd8:L56dcd8:{c.instructions+=3;NFSU2_TR(0x56dcd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dcda:{NFSU2_TR(0x56dcda);
w4(R+0,u32(0x8651acull));
}
B56dcdf:{NFSU2_TR(0x56dcdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dce6;}}
}
B56dce1:L56dce1:{c.instructions+=1;NFSU2_TR(0x56dce1);
w4(R+0,u32(0x86518cull));
}
B56dce6:L56dce6:{c.instructions+=5;NFSU2_TR(0x56dce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56dce8:{NFSU2_TR(0x56dce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B56dceb:{NFSU2_TR(0x56dceb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56dcef:{NFSU2_TR(0x56dcef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56dcf3:{NFSU2_TR(0x56dcf3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56dcf9:L56dcf9:{c.instructions+=4;NFSU2_TR(0x56dcf9);
{u32 ea_=u32(u32(7985924u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56dcff:{NFSU2_TR(0x56dcff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56dd01:{NFSU2_TR(0x56dd01);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56dd04:{NFSU2_TR(0x56dd04);
if(r1(R+514)){{goto L56dd41;}}
}
B56dd06:L56dd06:{c.instructions+=3;NFSU2_TR(0x56dd06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56dd09:{NFSU2_TR(0x56dd09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dd0b:{NFSU2_TR(0x56dd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dd45;}}
}
B56dd0d:L56dd0d:{c.instructions+=6;NFSU2_TR(0x56dd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56dd10:{NFSU2_TR(0x56dd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dd16:{NFSU2_TR(0x56dd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dd19:{NFSU2_TR(0x56dd19);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56dd1c:{NFSU2_TR(0x56dd1c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56dd1f:{NFSU2_TR(0x56dd1f);
if(r1(R+518)){{goto L56dd33;}}
}
B56dd21:L56dd21:{c.instructions+=3;NFSU2_TR(0x56dd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56dd24:{NFSU2_TR(0x56dd24);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dd26:{NFSU2_TR(0x56dd26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dd33;}}
}
B56dd28:L56dd28:{c.instructions+=6;NFSU2_TR(0x56dd28);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56dd2a:{NFSU2_TR(0x56dd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56dd2b:{NFSU2_TR(0x56dd2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56dd2e:{NFSU2_TR(0x56dd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dd2f:{NFSU2_TR(0x56dd2f);
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
B56dd32:{NFSU2_TR(0x56dd32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dd33:L56dd33:{c.instructions+=6;NFSU2_TR(0x56dd33);
w4(R+0,u32(0x1ull));
}
B56dd38:{NFSU2_TR(0x56dd38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56dd39:{NFSU2_TR(0x56dd39);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56dd3c:{NFSU2_TR(0x56dd3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dd3d:{NFSU2_TR(0x56dd3d);
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
B56dd40:{NFSU2_TR(0x56dd40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dd41:L56dd41:{c.instructions+=1;NFSU2_TR(0x56dd41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56dd45:L56dd45:{c.instructions+=5;NFSU2_TR(0x56dd45);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56dd49:{NFSU2_TR(0x56dd49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56dd4a:{NFSU2_TR(0x56dd4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dd4b:{NFSU2_TR(0x56dd4b);
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
B56dd4e:{NFSU2_TR(0x56dd4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dd50:L56dd50:{c.instructions+=4;NFSU2_TR(0x56dd50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dd51:{NFSU2_TR(0x56dd51);
__builtin_memmove((R+24),gp(0x864630),4);
}
B56dd57:{NFSU2_TR(0x56dd57);
w4(R+4,u32(0x864630ull));
}
B56dd5c:{NFSU2_TR(0x56dd5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dd61ull));
TAIL_STATIC(0x502fd0u,502);
}
B56dd61:L56dd61:{c.instructions+=2;NFSU2_TR(0x56dd61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56dd63:{NFSU2_TR(0x56dd63);
if(r1(R+518)){{goto L56dd7b;}}
}
B56dd65:L56dd65:{c.instructions+=2;NFSU2_TR(0x56dd65);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dd69:{NFSU2_TR(0x56dd69);
__builtin_memmove((R+16),(R+16),4);
}
B56dd70:L56dd70:{c.instructions+=2;NFSU2_TR(0x56dd70);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B56dd73:{NFSU2_TR(0x56dd73);
if(r1(R+518)){{goto L56dd7f;}}
}
B56dd75:L56dd75:{c.instructions+=3;NFSU2_TR(0x56dd75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B56dd77:{NFSU2_TR(0x56dd77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56dd79:{NFSU2_TR(0x56dd79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56dd70u);}goto L56dd70;}}
}
B56dd7b:L56dd7b:{c.instructions+=3;NFSU2_TR(0x56dd7b);
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
B56dd7d:{NFSU2_TR(0x56dd7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dd7e:{NFSU2_TR(0x56dd7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dd7f:L56dd7f:{c.instructions+=3;NFSU2_TR(0x56dd7f);
__builtin_memmove((R+0),(R+24),4);
}
B56dd81:{NFSU2_TR(0x56dd81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dd82:{NFSU2_TR(0x56dd82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dd90:L56dd90:{c.instructions+=6;NFSU2_TR(0x56dd90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dd91:{NFSU2_TR(0x56dd91);
__builtin_memmove((R+24),gp(0x864630),4);
}
B56dd97:{NFSU2_TR(0x56dd97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dd98:{NFSU2_TR(0x56dd98);
w4(R+4,u32(0x864630ull));
}
B56dd9d:{NFSU2_TR(0x56dd9d);
w4(R+28,u32(0x1ull));
}
B56dda2:{NFSU2_TR(0x56dda2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dda7ull));
TAIL_STATIC(0x502fd0u,502);
}
B56dda7:L56dda7:{c.instructions+=2;NFSU2_TR(0x56dda7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56dda9:{NFSU2_TR(0x56dda9);
if(r1(R+518)){{goto L56ddbc;}}
}
B56ddab:L56ddab:{c.instructions+=2;NFSU2_TR(0x56ddab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ddaf:{NFSU2_TR(0x56ddaf);
}
B56ddb0:L56ddb0:{c.instructions+=2;NFSU2_TR(0x56ddb0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B56ddb3:{NFSU2_TR(0x56ddb3);
if(r1(R+518)){{goto L56ddc1;}}
}
B56ddb5:L56ddb5:{c.instructions+=4;NFSU2_TR(0x56ddb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B56ddb7:{NFSU2_TR(0x56ddb7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56ddb8:{NFSU2_TR(0x56ddb8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ddba:{NFSU2_TR(0x56ddba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56ddb0u);}goto L56ddb0;}}
}
B56ddbc:L56ddbc:{c.instructions+=4;NFSU2_TR(0x56ddbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ddbd:{NFSU2_TR(0x56ddbd);
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
B56ddbf:{NFSU2_TR(0x56ddbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ddc0:{NFSU2_TR(0x56ddc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ddc1:L56ddc1:{c.instructions+=4;NFSU2_TR(0x56ddc1);
__builtin_memmove((R+0),(R+28),4);
}
B56ddc3:{NFSU2_TR(0x56ddc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ddc4:{NFSU2_TR(0x56ddc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ddc5:{NFSU2_TR(0x56ddc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ddd0:L56ddd0:{c.instructions+=8;NFSU2_TR(0x56ddd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ddd1:{NFSU2_TR(0x56ddd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ddd2:{NFSU2_TR(0x56ddd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ddd3:{NFSU2_TR(0x56ddd3);
__builtin_memmove((R+24),gp(0x890080),4);
}
B56ddd9:{NFSU2_TR(0x56ddd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dddc:{NFSU2_TR(0x56dddc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B56ddde:{NFSU2_TR(0x56ddde);
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
B56dde0:{NFSU2_TR(0x56dde0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56de88;}}
}
B56dde6:L56dde6:{c.instructions+=4;NFSU2_TR(0x56dde6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dde7:{NFSU2_TR(0x56dde7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dde8:{NFSU2_TR(0x56dde8);
w4(R+4,u32(0x864630ull));
}
B56dded:{NFSU2_TR(0x56dded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ddf2ull));
TAIL_STATIC(0x502fd0u,502);
}
B56ddf2:L56ddf2:{c.instructions+=3;NFSU2_TR(0x56ddf2);
__builtin_memmove((R+28),(R+0),4);
}
B56ddf4:{NFSU2_TR(0x56ddf4);
w4(R+12,u32(0x1cull));
}
B56ddf9:{NFSU2_TR(0x56ddf9);
__builtin_memmove((R+16),(R+16),4);
}
B56de00:L56de00:{c.instructions+=5;NFSU2_TR(0x56de00);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B56de03:{NFSU2_TR(0x56de03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56de06:{NFSU2_TR(0x56de06);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56de0c:{NFSU2_TR(0x56de0c);
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
B56de0e:{NFSU2_TR(0x56de0e);
if(r1(R+518)){{goto L56de46;}}
}
B56de10:L56de10:{c.instructions+=4;NFSU2_TR(0x56de10);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B56de14:{NFSU2_TR(0x56de14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56de15:{NFSU2_TR(0x56de15);
w4(R+4,u32(0x89cf48ull));
}
B56de1a:{NFSU2_TR(0x56de1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56de1full));
TAIL_STATIC(0x5f0220u,5f0);
}
B56de1f:L56de1f:{c.instructions+=5;NFSU2_TR(0x56de1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56de22:{NFSU2_TR(0x56de22);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56de27:{NFSU2_TR(0x56de27);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56de29:{NFSU2_TR(0x56de29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56de2d:{NFSU2_TR(0x56de2d);
if(r1(R+518)){{goto L56de3e;}}
}
B56de2f:L56de2f:{c.instructions+=1;NFSU2_TR(0x56de2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B56de33:L56de33:{c.instructions+=2;NFSU2_TR(0x56de33);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56de36:{NFSU2_TR(0x56de36);
if(r1(R+518)){{goto L56de40;}}
}
B56de38:L56de38:{c.instructions+=3;NFSU2_TR(0x56de38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56de3a:{NFSU2_TR(0x56de3a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56de3c:{NFSU2_TR(0x56de3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56de33u);}goto L56de33;}}
}
B56de3e:L56de3e:{c.instructions+=1;NFSU2_TR(0x56de3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56de40:L56de40:{c.instructions+=2;NFSU2_TR(0x56de40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56de44:{NFSU2_TR(0x56de44);
{goto L56de6e;}
}
B56de46:L56de46:{c.instructions+=7;NFSU2_TR(0x56de46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56de49:{NFSU2_TR(0x56de49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56de4f:{NFSU2_TR(0x56de4f);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56de54:{NFSU2_TR(0x56de54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56de56:{NFSU2_TR(0x56de56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56de58:{NFSU2_TR(0x56de58);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56de5b:{NFSU2_TR(0x56de5b);
if(r1(R+518)){{goto L56de6c;}}
}
B56de5d:L56de5d:{c.instructions+=1;NFSU2_TR(0x56de5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B56de61:L56de61:{c.instructions+=2;NFSU2_TR(0x56de61);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56de64:{NFSU2_TR(0x56de64);
if(r1(R+518)){{goto L56de6e;}}
}
B56de66:L56de66:{c.instructions+=3;NFSU2_TR(0x56de66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56de68:{NFSU2_TR(0x56de68);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56de6a:{NFSU2_TR(0x56de6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56de61u);}goto L56de61;}}
}
B56de6c:L56de6c:{c.instructions+=1;NFSU2_TR(0x56de6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56de6e:L56de6e:{c.instructions+=7;NFSU2_TR(0x56de6e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56de71:{NFSU2_TR(0x56de71);
__builtin_memmove((R+24),gp(0x890080),4);
}
B56de77:{NFSU2_TR(0x56de77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56de7a:{NFSU2_TR(0x56de7a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B56de7b:{NFSU2_TR(0x56de7b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B56de7e:{NFSU2_TR(0x56de7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56de80:{NFSU2_TR(0x56de80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56de00u);}goto L56de00;}}
}
B56de86:L56de86:{c.instructions+=2;NFSU2_TR(0x56de86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56de87:{NFSU2_TR(0x56de87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56de88:L56de88:{c.instructions+=2;NFSU2_TR(0x56de88);
w4(R+4,u32(0x89cf48ull));
}
B56de8d:{NFSU2_TR(0x56de8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56de92ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56de92:L56de92:{c.instructions+=2;NFSU2_TR(0x56de92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56de94:{NFSU2_TR(0x56de94);
if(r1(R+518)){{goto L56dea5;}}
}
B56de96:L56de96:{c.instructions+=2;NFSU2_TR(0x56de96);
__builtin_memmove((R+4),gp(0x89cf4c),4);
}
B56de9c:{NFSU2_TR(0x56de9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dea1ull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B56dea1:L56dea1:{c.instructions+=2;NFSU2_TR(0x56dea1);
__builtin_memmove((R+24),(R+0),4);
}
B56dea3:{NFSU2_TR(0x56dea3);
{goto L56dead;}
}
B56dea5:L56dea5:{c.instructions+=2;NFSU2_TR(0x56dea5);
__builtin_memmove((R+0),gp(0x890080),4);
}
B56deaa:{NFSU2_TR(0x56deaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56dead:L56dead:{c.instructions+=4;NFSU2_TR(0x56dead);
__builtin_memmove((R+0),gp(0x864630),4);
}
B56deb2:{NFSU2_TR(0x56deb2);
w4(R+4,u32(0x864630ull));
}
B56deb7:{NFSU2_TR(0x56deb7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B56deb9:{NFSU2_TR(0x56deb9);
if(r1(R+518)){{goto L56dedc;}}
}
B56debb:L56debb:{c.instructions+=2;NFSU2_TR(0x56debb);
u8 U[4];
w4(U+0,u32(0x56cdd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dec0:{NFSU2_TR(0x56dec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dec5ull));
TAIL_STATIC(0x43e650u,43e);
}
B56dec5:L56dec5:{c.instructions+=5;NFSU2_TR(0x56dec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dec8:{NFSU2_TR(0x56dec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56dece:{NFSU2_TR(0x56dece);
u8 U[4];
w4(U+0,u32(0x864630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ded3:{NFSU2_TR(0x56ded3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ded4:{NFSU2_TR(0x56ded4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ded9ull));
TAIL_STATIC(0x4da570u,4da);
}
B56ded9:L56ded9:{c.instructions+=1;NFSU2_TR(0x56ded9);
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
B56dedc:L56dedc:{c.instructions+=4;NFSU2_TR(0x56dedc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dedd:{NFSU2_TR(0x56dedd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56dede:{NFSU2_TR(0x56dede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56dedf:{NFSU2_TR(0x56dedf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dee0:L56dee0:{c.instructions+=9;NFSU2_TR(0x56dee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dee1:{NFSU2_TR(0x56dee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dee4:{NFSU2_TR(0x56dee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dee5:{NFSU2_TR(0x56dee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56dee8:{NFSU2_TR(0x56dee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dee9:{NFSU2_TR(0x56dee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56deec:{NFSU2_TR(0x56deec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B56deee:{NFSU2_TR(0x56deee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56def1:{NFSU2_TR(0x56def1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56defe;}}
}
B56def3:L56def3:{c.instructions+=3;NFSU2_TR(0x56def3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56def6:{NFSU2_TR(0x56def6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B56defc:{NFSU2_TR(0x56defc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56df15;}}
}
B56defe:L56defe:{c.instructions+=5;NFSU2_TR(0x56defe);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56df04:{NFSU2_TR(0x56df04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56df0a:{NFSU2_TR(0x56df0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56df0c:{NFSU2_TR(0x56df0c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56df0f:{NFSU2_TR(0x56df0f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56df15;}}
}
B56df11:L56df11:{c.instructions+=2;NFSU2_TR(0x56df11);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B56df13:{NFSU2_TR(0x56df13);
{goto L56df17;}
}
B56df15:L56df15:{c.instructions+=1;NFSU2_TR(0x56df15);
w1(R+0,u8(0x1ull));
}
B56df17:L56df17:{c.instructions+=3;NFSU2_TR(0x56df17);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56df19:{NFSU2_TR(0x56df19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56df20:{NFSU2_TR(0x56df20);
if(r1(R+518)){{goto L56df82;}}
}
B56df22:L56df22:{c.instructions+=3;NFSU2_TR(0x56df22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56df25:{NFSU2_TR(0x56df25);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56df27:{NFSU2_TR(0x56df27);
if(r1(R+518)){{goto L56df30;}}
}
B56df29:L56df29:{c.instructions+=2;NFSU2_TR(0x56df29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56df2e:{NFSU2_TR(0x56df2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56df38;}}
}
B56df30:L56df30:{c.instructions+=2;NFSU2_TR(0x56df30);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B56df35:{NFSU2_TR(0x56df35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56df38:L56df38:{c.instructions+=12;NFSU2_TR(0x56df38);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B56df3d:{NFSU2_TR(0x56df3d);
{u32 ea_=u32(u32(7985940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56df43:{NFSU2_TR(0x56df43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56df46:{NFSU2_TR(0x56df46);
{u32 ea_=u32(u32(7985936u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56df4c:{NFSU2_TR(0x56df4c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B56df4e:{NFSU2_TR(0x56df4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56df52:{NFSU2_TR(0x56df52);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56df56:{NFSU2_TR(0x56df56);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56df5c:{NFSU2_TR(0x56df5c);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B56df5e:{NFSU2_TR(0x56df5e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56df60:{NFSU2_TR(0x56df60);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56df63:{NFSU2_TR(0x56df63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56df68;}}
}
B56df65:L56df65:{c.instructions+=1;NFSU2_TR(0x56df65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56df68:L56df68:{c.instructions+=4;NFSU2_TR(0x56df68);
{u32 ea_=u32(u32(7985936u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56df6e:{NFSU2_TR(0x56df6e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56df70:{NFSU2_TR(0x56df70);
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
B56df73:{NFSU2_TR(0x56df73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56df89;}}
}
B56df75:L56df75:{c.instructions+=8;NFSU2_TR(0x56df75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56df77:{NFSU2_TR(0x56df77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56df78:{NFSU2_TR(0x56df78);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B56df7a:{NFSU2_TR(0x56df7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56df7b:{NFSU2_TR(0x56df7b);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56df7e:{NFSU2_TR(0x56df7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56df80:{NFSU2_TR(0x56df80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56df81:{NFSU2_TR(0x56df81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56df82:L56df82:{c.instructions+=5;NFSU2_TR(0x56df82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56df83:{NFSU2_TR(0x56df83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56df86:{NFSU2_TR(0x56df86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56df87:{NFSU2_TR(0x56df87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56df88:{NFSU2_TR(0x56df88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56df89:L56df89:{c.instructions+=6;NFSU2_TR(0x56df89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56df8b:{NFSU2_TR(0x56df8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56df8c:{NFSU2_TR(0x56df8c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56df8e:{NFSU2_TR(0x56df8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56df8f:{NFSU2_TR(0x56df8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56df90:{NFSU2_TR(0x56df90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dfa0:L56dfa0:{c.instructions+=7;NFSU2_TR(0x56dfa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dfa1:{NFSU2_TR(0x56dfa1);
__builtin_memmove((R+24),(R+4),4);
}
B56dfa3:{NFSU2_TR(0x56dfa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56dfa5:{NFSU2_TR(0x56dfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dfac:{NFSU2_TR(0x56dfac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56dfae:{NFSU2_TR(0x56dfae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56dfb0:{NFSU2_TR(0x56dfb0);
if(r1(R+518)){{goto L56dfcc;}}
}
B56dfb2:L56dfb2:{c.instructions+=3;NFSU2_TR(0x56dfb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56dfb5:{NFSU2_TR(0x56dfb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dfb7:{NFSU2_TR(0x56dfb7);
if(r1(R+518)){{goto L56dfcc;}}
}
B56dfb9:L56dfb9:{c.instructions+=3;NFSU2_TR(0x56dfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dfbc:{NFSU2_TR(0x56dfbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56dfbe:{NFSU2_TR(0x56dfbe);
if(r1(R+518)){{goto L56dfc5;}}
}
B56dfc0:L56dfc0:{c.instructions+=2;NFSU2_TR(0x56dfc0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56dfc3:{NFSU2_TR(0x56dfc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56dfcc;}}
}
B56dfc5:L56dfc5:{c.instructions+=2;NFSU2_TR(0x56dfc5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56dfc7:{NFSU2_TR(0x56dfc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56dfccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56d5c0u);}goto L56d5c0;}
}
B56dfcc:L56dfcc:{c.instructions+=5;NFSU2_TR(0x56dfcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56dfce:{NFSU2_TR(0x56dfce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56dfd0:{NFSU2_TR(0x56dfd0);
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
B56dfd2:{NFSU2_TR(0x56dfd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56dfd3:{NFSU2_TR(0x56dfd3);
if(r1(R+518)){{goto L56dfe3;}}
}
B56dfd5:L56dfd5:{c.instructions+=3;NFSU2_TR(0x56dfd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56dfd8:{NFSU2_TR(0x56dfd8);
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
B56dfda:{NFSU2_TR(0x56dfda);
if(r1(R+518)){{goto L56dfe3;}}
}
B56dfdc:L56dfdc:{c.instructions+=1;NFSU2_TR(0x56dfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56dfe3:L56dfe3:{c.instructions+=1;NFSU2_TR(0x56dfe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56dff0:L56dff0:{c.instructions+=5;NFSU2_TR(0x56dff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56dff4:{NFSU2_TR(0x56dff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56dff7:{NFSU2_TR(0x56dff7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56dffd:{NFSU2_TR(0x56dffd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56dfff:{NFSU2_TR(0x56dfff);
if(r1(R+518)){TAIL_STATIC(0x56e006u,56e);}
TAIL_STATIC(0x56e001u,56e);
}
XIT:NFSU2_TR_EXIT(0x56d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
