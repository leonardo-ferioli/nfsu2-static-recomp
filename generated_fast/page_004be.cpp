#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4be,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4be,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4be(u8* __restrict R,Cpu& c);
u32 page_4be(Cpu& c){return body_4be(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4be(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4be003:goto L4be003;
case 0x4be005:c.instructions+=1;goto B4be005;
case 0x4be007:goto L4be007;
case 0x4be00d:c.instructions+=2;goto B4be00d;
case 0x4be010:c.instructions+=1;goto B4be010;
case 0x4be015:goto L4be015;
case 0x4be018:c.instructions+=5;goto B4be018;
case 0x4be01a:c.instructions+=4;goto B4be01a;
case 0x4be01f:c.instructions+=3;goto B4be01f;
case 0x4be024:c.instructions+=2;goto B4be024;
case 0x4be025:c.instructions+=1;goto B4be025;
case 0x4be02a:goto L4be02a;
case 0x4be02d:c.instructions+=2;goto B4be02d;
case 0x4be02e:c.instructions+=1;goto B4be02e;
case 0x4be031:goto L4be031;
case 0x4be036:c.instructions+=1;goto B4be036;
case 0x4be03c:goto L4be03c;
case 0x4be03e:c.instructions+=2;goto B4be03e;
case 0x4be040:c.instructions+=1;goto B4be040;
case 0x4be045:goto L4be045;
case 0x4be046:c.instructions+=1;goto B4be046;
case 0x4be049:goto L4be049;
case 0x4be04c:c.instructions+=5;goto B4be04c;
case 0x4be04e:c.instructions+=4;goto B4be04e;
case 0x4be053:c.instructions+=3;goto B4be053;
case 0x4be058:c.instructions+=2;goto B4be058;
case 0x4be059:c.instructions+=1;goto B4be059;
case 0x4be05e:goto L4be05e;
case 0x4be061:c.instructions+=2;goto B4be061;
case 0x4be062:c.instructions+=1;goto B4be062;
case 0x4be065:goto L4be065;
case 0x4be06a:c.instructions+=1;goto B4be06a;
case 0x4be070:goto L4be070;
case 0x4be076:goto L4be076;
case 0x4be07b:c.instructions+=1;goto B4be07b;
case 0x4be081:goto L4be081;
case 0x4be086:c.instructions+=1;goto B4be086;
case 0x4be08c:goto L4be08c;
case 0x4be08f:c.instructions+=1;goto B4be08f;
case 0x4be094:goto L4be094;
case 0x4be09a:c.instructions+=1;goto B4be09a;
case 0x4be09f:goto L4be09f;
case 0x4be0a5:c.instructions+=2;goto B4be0a5;
case 0x4be0a6:c.instructions+=1;goto B4be0a6;
case 0x4be0ab:goto L4be0ab;
case 0x4be0ae:c.instructions+=2;goto B4be0ae;
case 0x4be0b0:c.instructions+=1;goto B4be0b0;
case 0x4be0b2:goto L4be0b2;
case 0x4be0b5:c.instructions+=3;goto B4be0b5;
case 0x4be0b6:c.instructions+=2;goto B4be0b6;
case 0x4be0bb:c.instructions+=1;goto B4be0bb;
case 0x4be0c0:goto L4be0c0;
case 0x4be0c3:c.instructions+=2;goto B4be0c3;
case 0x4be0c4:c.instructions+=1;goto B4be0c4;
case 0x4be0c7:goto L4be0c7;
case 0x4be0cd:c.instructions+=2;goto B4be0cd;
case 0x4be0ce:c.instructions+=1;goto B4be0ce;
case 0x4be0d3:goto L4be0d3;
case 0x4be0d6:c.instructions+=2;goto B4be0d6;
case 0x4be0d8:c.instructions+=1;goto B4be0d8;
case 0x4be0da:goto L4be0da;
case 0x4be0dd:c.instructions+=3;goto B4be0dd;
case 0x4be0de:c.instructions+=2;goto B4be0de;
case 0x4be0e3:c.instructions+=1;goto B4be0e3;
case 0x4be0e8:goto L4be0e8;
case 0x4be0eb:c.instructions+=2;goto B4be0eb;
case 0x4be0ec:c.instructions+=1;goto B4be0ec;
case 0x4be0ef:goto L4be0ef;
case 0x4be0f5:c.instructions+=2;goto B4be0f5;
case 0x4be0f8:c.instructions+=1;goto B4be0f8;
case 0x4be0fa:goto L4be0fa;
case 0x4be0fd:c.instructions+=1;goto B4be0fd;
case 0x4be103:goto L4be103;
case 0x4be106:c.instructions+=3;goto B4be106;
case 0x4be107:c.instructions+=2;goto B4be107;
case 0x4be10c:c.instructions+=1;goto B4be10c;
case 0x4be111:goto L4be111;
case 0x4be114:c.instructions+=2;goto B4be114;
case 0x4be115:c.instructions+=1;goto B4be115;
case 0x4be118:goto L4be118;
case 0x4be11b:c.instructions+=3;goto B4be11b;
case 0x4be11c:c.instructions+=2;goto B4be11c;
case 0x4be121:c.instructions+=1;goto B4be121;
case 0x4be126:goto L4be126;
case 0x4be129:c.instructions+=2;goto B4be129;
case 0x4be12a:c.instructions+=1;goto B4be12a;
case 0x4be12d:goto L4be12d;
case 0x4be12f:c.instructions+=2;goto B4be12f;
case 0x4be131:c.instructions+=1;goto B4be131;
case 0x4be136:goto L4be136;
case 0x4be137:c.instructions+=1;goto B4be137;
case 0x4be13a:goto L4be13a;
case 0x4be13f:goto L4be13f;
case 0x4be141:c.instructions+=1;goto B4be141;
case 0x4be146:goto L4be146;
case 0x4be149:c.instructions+=2;goto B4be149;
case 0x4be14b:c.instructions+=1;goto B4be14b;
case 0x4be14d:goto L4be14d;
case 0x4be150:c.instructions+=2;goto B4be150;
case 0x4be151:c.instructions+=1;goto B4be151;
case 0x4be156:goto L4be156;
case 0x4be15b:c.instructions+=3;goto B4be15b;
case 0x4be160:c.instructions+=2;goto B4be160;
case 0x4be164:c.instructions+=1;goto B4be164;
case 0x4be169:goto L4be169;
case 0x4be16e:c.instructions+=3;goto B4be16e;
case 0x4be171:c.instructions+=2;goto B4be171;
case 0x4be173:c.instructions+=1;goto B4be173;
case 0x4be175:goto L4be175;
case 0x4be17a:c.instructions+=2;goto B4be17a;
case 0x4be17c:c.instructions+=1;goto B4be17c;
case 0x4be181:goto L4be181;
case 0x4be184:c.instructions+=2;goto B4be184;
case 0x4be185:c.instructions+=1;goto B4be185;
case 0x4be188:goto L4be188;
case 0x4be18d:c.instructions+=1;goto B4be18d;
case 0x4be18f:goto L4be18f;
case 0x4be191:c.instructions+=4;goto B4be191;
case 0x4be196:c.instructions+=3;goto B4be196;
case 0x4be19b:c.instructions+=2;goto B4be19b;
case 0x4be1a0:c.instructions+=1;goto B4be1a0;
case 0x4be1a5:goto L4be1a5;
case 0x4be1a9:c.instructions+=1;goto B4be1a9;
case 0x4be1ac:goto L4be1ac;
case 0x4be1ad:c.instructions+=1;goto B4be1ad;
case 0x4be1b0:goto L4be1b0;
case 0x4be1b1:c.instructions+=2;goto B4be1b1;
case 0x4be1b3:c.instructions+=1;goto B4be1b3;
case 0x4be1b8:goto L4be1b8;
case 0x4be1bd:c.instructions+=1;goto B4be1bd;
case 0x4be1bf:goto L4be1bf;
case 0x4be1c0:c.instructions+=1;goto B4be1c0;
case 0x4be1c5:goto L4be1c5;
case 0x4be1c8:goto L4be1c8;
case 0x4be1ca:c.instructions+=2;goto B4be1ca;
case 0x4be1cb:c.instructions+=1;goto B4be1cb;
case 0x4be1d0:goto L4be1d0;
case 0x4be1d1:c.instructions+=4;goto B4be1d1;
case 0x4be1d4:c.instructions+=3;goto B4be1d4;
case 0x4be1d7:c.instructions+=2;goto B4be1d7;
case 0x4be1d9:c.instructions+=1;goto B4be1d9;
case 0x4be1db:goto L4be1db;
case 0x4be1de:c.instructions+=1;goto B4be1de;
case 0x4be1e0:goto L4be1e0;
case 0x4be1e2:goto L4be1e2;
case 0x4be1e5:c.instructions+=2;goto B4be1e5;
case 0x4be1e6:c.instructions+=1;goto B4be1e6;
case 0x4be1eb:goto L4be1eb;
case 0x4be1ee:c.instructions+=4;goto B4be1ee;
case 0x4be1f1:c.instructions+=3;goto B4be1f1;
case 0x4be1f3:c.instructions+=2;goto B4be1f3;
case 0x4be1f4:c.instructions+=1;goto B4be1f4;
case 0x4be1f6:goto L4be1f6;
case 0x4be1f9:c.instructions+=3;goto B4be1f9;
case 0x4be1fc:c.instructions+=2;goto B4be1fc;
case 0x4be1fd:c.instructions+=1;goto B4be1fd;
case 0x4be202:goto L4be202;
case 0x4be203:c.instructions+=1;goto B4be203;
case 0x4be204:goto L4be204;
case 0x4be206:c.instructions+=3;goto B4be206;
case 0x4be209:c.instructions+=2;goto B4be209;
case 0x4be20a:c.instructions+=1;goto B4be20a;
case 0x4be20f:goto L4be20f;
case 0x4be210:c.instructions+=1;goto B4be210;
case 0x4be220:goto L4be220;
case 0x4be221:c.instructions+=10;goto B4be221;
case 0x4be223:c.instructions+=9;goto B4be223;
case 0x4be226:c.instructions+=8;goto B4be226;
case 0x4be22c:c.instructions+=7;goto B4be22c;
case 0x4be22d:c.instructions+=6;goto B4be22d;
case 0x4be22f:c.instructions+=5;goto B4be22f;
case 0x4be232:c.instructions+=4;goto B4be232;
case 0x4be235:c.instructions+=3;goto B4be235;
case 0x4be236:c.instructions+=2;goto B4be236;
case 0x4be237:c.instructions+=1;goto B4be237;
case 0x4be23c:goto L4be23c;
case 0x4be243:c.instructions+=4;goto B4be243;
case 0x4be244:c.instructions+=3;goto B4be244;
case 0x4be249:c.instructions+=2;goto B4be249;
case 0x4be24a:c.instructions+=1;goto B4be24a;
case 0x4be24f:goto L4be24f;
case 0x4be252:c.instructions+=3;goto B4be252;
case 0x4be253:c.instructions+=2;goto B4be253;
case 0x4be258:c.instructions+=1;goto B4be258;
case 0x4be25d:goto L4be25d;
case 0x4be25f:c.instructions+=1;goto B4be25f;
case 0x4be264:goto L4be264;
case 0x4be269:c.instructions+=3;goto B4be269;
case 0x4be26b:c.instructions+=2;goto B4be26b;
case 0x4be270:c.instructions+=1;goto B4be270;
case 0x4be274:goto L4be274;
case 0x4be276:goto L4be276;
case 0x4be278:c.instructions+=4;goto B4be278;
case 0x4be27d:c.instructions+=3;goto B4be27d;
case 0x4be282:c.instructions+=2;goto B4be282;
case 0x4be283:c.instructions+=1;goto B4be283;
case 0x4be288:goto L4be288;
case 0x4be28b:c.instructions+=5;goto B4be28b;
case 0x4be28c:c.instructions+=4;goto B4be28c;
case 0x4be290:c.instructions+=3;goto B4be290;
case 0x4be295:c.instructions+=2;goto B4be295;
case 0x4be296:c.instructions+=1;goto B4be296;
case 0x4be29b:goto L4be29b;
case 0x4be29e:c.instructions+=5;goto B4be29e;
case 0x4be2a2:c.instructions+=4;goto B4be2a2;
case 0x4be2a3:c.instructions+=3;goto B4be2a3;
case 0x4be2a8:c.instructions+=2;goto B4be2a8;
case 0x4be2a9:c.instructions+=1;goto B4be2a9;
case 0x4be2ae:goto L4be2ae;
case 0x4be2b1:c.instructions+=6;goto B4be2b1;
case 0x4be2b2:c.instructions+=5;goto B4be2b2;
case 0x4be2b5:c.instructions+=4;goto B4be2b5;
case 0x4be2b6:c.instructions+=3;goto B4be2b6;
case 0x4be2b8:c.instructions+=2;goto B4be2b8;
case 0x4be2b9:c.instructions+=1;goto B4be2b9;
case 0x4be2c0:goto L4be2c0;
case 0x4be2c2:c.instructions+=11;goto B4be2c2;
case 0x4be2c7:c.instructions+=10;goto B4be2c7;
case 0x4be2cd:c.instructions+=9;goto B4be2cd;
case 0x4be2ce:c.instructions+=8;goto B4be2ce;
case 0x4be2d5:c.instructions+=7;goto B4be2d5;
case 0x4be2d6:c.instructions+=6;goto B4be2d6;
case 0x4be2da:c.instructions+=5;goto B4be2da;
case 0x4be2db:c.instructions+=4;goto B4be2db;
case 0x4be2dd:c.instructions+=3;goto B4be2dd;
case 0x4be2de:c.instructions+=2;goto B4be2de;
case 0x4be2e2:c.instructions+=1;goto B4be2e2;
case 0x4be2e7:goto L4be2e7;
case 0x4be2e9:c.instructions+=12;goto B4be2e9;
case 0x4be2ef:c.instructions+=11;goto B4be2ef;
case 0x4be2f2:c.instructions+=10;goto B4be2f2;
case 0x4be2f5:c.instructions+=9;goto B4be2f5;
case 0x4be2f8:c.instructions+=8;goto B4be2f8;
case 0x4be2fa:c.instructions+=7;goto B4be2fa;
case 0x4be300:c.instructions+=6;goto B4be300;
case 0x4be306:c.instructions+=5;goto B4be306;
case 0x4be30c:c.instructions+=4;goto B4be30c;
case 0x4be30d:c.instructions+=3;goto B4be30d;
case 0x4be312:c.instructions+=2;goto B4be312;
case 0x4be316:c.instructions+=1;goto B4be316;
case 0x4be31b:goto L4be31b;
case 0x4be31d:c.instructions+=1;goto B4be31d;
case 0x4be322:goto L4be322;
case 0x4be327:c.instructions+=5;goto B4be327;
case 0x4be32d:c.instructions+=4;goto B4be32d;
case 0x4be330:c.instructions+=3;goto B4be330;
case 0x4be335:c.instructions+=2;goto B4be335;
case 0x4be336:c.instructions+=1;goto B4be336;
case 0x4be33b:goto L4be33b;
case 0x4be33e:c.instructions+=2;goto B4be33e;
case 0x4be33f:c.instructions+=1;goto B4be33f;
case 0x4be344:goto L4be344;
case 0x4be347:c.instructions+=5;goto B4be347;
case 0x4be34a:c.instructions+=4;goto B4be34a;
case 0x4be34f:c.instructions+=3;goto B4be34f;
case 0x4be354:c.instructions+=2;goto B4be354;
case 0x4be355:c.instructions+=1;goto B4be355;
case 0x4be35a:goto L4be35a;
case 0x4be35d:c.instructions+=2;goto B4be35d;
case 0x4be35e:c.instructions+=1;goto B4be35e;
case 0x4be363:goto L4be363;
case 0x4be366:c.instructions+=5;goto B4be366;
case 0x4be369:c.instructions+=4;goto B4be369;
case 0x4be36e:c.instructions+=3;goto B4be36e;
case 0x4be373:c.instructions+=2;goto B4be373;
case 0x4be374:c.instructions+=1;goto B4be374;
case 0x4be379:goto L4be379;
case 0x4be37c:c.instructions+=2;goto B4be37c;
case 0x4be37d:c.instructions+=1;goto B4be37d;
case 0x4be382:goto L4be382;
case 0x4be385:c.instructions+=2;goto B4be385;
case 0x4be387:c.instructions+=1;goto B4be387;
case 0x4be38c:goto L4be38c;
case 0x4be390:c.instructions+=5;goto B4be390;
case 0x4be392:c.instructions+=4;goto B4be392;
case 0x4be393:c.instructions+=3;goto B4be393;
case 0x4be39a:c.instructions+=2;goto B4be39a;
case 0x4be39d:c.instructions+=1;goto B4be39d;
case 0x4be3a0:goto L4be3a0;
case 0x4be3a2:c.instructions+=14;goto B4be3a2;
case 0x4be3a7:c.instructions+=13;goto B4be3a7;
case 0x4be3ad:c.instructions+=12;goto B4be3ad;
case 0x4be3ae:c.instructions+=11;goto B4be3ae;
case 0x4be3b5:c.instructions+=10;goto B4be3b5;
case 0x4be3b6:c.instructions+=9;goto B4be3b6;
case 0x4be3b7:c.instructions+=8;goto B4be3b7;
case 0x4be3b9:c.instructions+=7;goto B4be3b9;
case 0x4be3bd:c.instructions+=6;goto B4be3bd;
case 0x4be3c3:c.instructions+=5;goto B4be3c3;
case 0x4be3c6:c.instructions+=4;goto B4be3c6;
case 0x4be3c8:c.instructions+=3;goto B4be3c8;
case 0x4be3d0:c.instructions+=2;goto B4be3d0;
case 0x4be3d7:c.instructions+=1;goto B4be3d7;
case 0x4be3d9:goto L4be3d9;
case 0x4be3da:c.instructions+=1;goto B4be3da;
case 0x4be3df:goto L4be3df;
case 0x4be3e2:c.instructions+=1;goto B4be3e2;
case 0x4be3e9:goto L4be3e9;
case 0x4be3ee:goto L4be3ee;
case 0x4be3f5:c.instructions+=1;goto B4be3f5;
case 0x4be3f7:goto L4be3f7;
case 0x4be3fc:goto L4be3fc;
case 0x4be402:c.instructions+=2;goto B4be402;
case 0x4be404:c.instructions+=1;goto B4be404;
case 0x4be406:goto L4be406;
case 0x4be40b:goto L4be40b;
case 0x4be411:c.instructions+=2;goto B4be411;
case 0x4be412:c.instructions+=1;goto B4be412;
case 0x4be417:goto L4be417;
case 0x4be41a:goto L4be41a;
case 0x4be41c:c.instructions+=2;goto B4be41c;
case 0x4be424:c.instructions+=1;goto B4be424;
case 0x4be429:goto L4be429;
case 0x4be42d:c.instructions+=4;goto B4be42d;
case 0x4be42e:c.instructions+=3;goto B4be42e;
case 0x4be435:c.instructions+=2;goto B4be435;
case 0x4be438:c.instructions+=1;goto B4be438;
case 0x4be440:goto L4be440;
case 0x4be441:c.instructions+=9;goto B4be441;
case 0x4be442:c.instructions+=8;goto B4be442;
case 0x4be444:c.instructions+=7;goto B4be444;
case 0x4be447:c.instructions+=6;goto B4be447;
case 0x4be44d:c.instructions+=5;goto B4be44d;
case 0x4be453:c.instructions+=4;goto B4be453;
case 0x4be454:c.instructions+=3;goto B4be454;
case 0x4be456:c.instructions+=2;goto B4be456;
case 0x4be457:c.instructions+=1;goto B4be457;
case 0x4be45c:goto L4be45c;
case 0x4be45e:c.instructions+=4;goto B4be45e;
case 0x4be460:c.instructions+=3;goto B4be460;
case 0x4be462:c.instructions+=2;goto B4be462;
case 0x4be463:c.instructions+=1;goto B4be463;
case 0x4be468:goto L4be468;
case 0x4be46b:c.instructions+=2;goto B4be46b;
case 0x4be46d:c.instructions+=1;goto B4be46d;
case 0x4be46f:goto L4be46f;
case 0x4be475:c.instructions+=3;goto B4be475;
case 0x4be476:c.instructions+=2;goto B4be476;
case 0x4be477:c.instructions+=1;goto B4be477;
case 0x4be47c:goto L4be47c;
case 0x4be47f:c.instructions+=1;goto B4be47f;
case 0x4be481:goto L4be481;
case 0x4be486:c.instructions+=1;goto B4be486;
case 0x4be48b:goto L4be48b;
case 0x4be48c:c.instructions+=3;goto B4be48c;
case 0x4be492:c.instructions+=2;goto B4be492;
case 0x4be493:c.instructions+=1;goto B4be493;
case 0x4be498:goto L4be498;
case 0x4be49b:goto L4be49b;
case 0x4be49e:c.instructions+=5;goto B4be49e;
case 0x4be4a4:c.instructions+=4;goto B4be4a4;
case 0x4be4aa:c.instructions+=3;goto B4be4aa;
case 0x4be4ac:c.instructions+=2;goto B4be4ac;
case 0x4be4ad:c.instructions+=1;goto B4be4ad;
case 0x4be4b2:goto L4be4b2;
case 0x4be4b4:c.instructions+=4;goto B4be4b4;
case 0x4be4b6:c.instructions+=3;goto B4be4b6;
case 0x4be4b8:c.instructions+=2;goto B4be4b8;
case 0x4be4b9:c.instructions+=1;goto B4be4b9;
case 0x4be4be:goto L4be4be;
case 0x4be4c1:c.instructions+=2;goto B4be4c1;
case 0x4be4c3:c.instructions+=1;goto B4be4c3;
case 0x4be4c5:goto L4be4c5;
case 0x4be4cb:c.instructions+=3;goto B4be4cb;
case 0x4be4cc:c.instructions+=2;goto B4be4cc;
case 0x4be4cd:c.instructions+=1;goto B4be4cd;
case 0x4be4d2:goto L4be4d2;
case 0x4be4d5:c.instructions+=1;goto B4be4d5;
case 0x4be4d7:goto L4be4d7;
case 0x4be4dc:c.instructions+=1;goto B4be4dc;
case 0x4be4e1:goto L4be4e1;
case 0x4be4e7:c.instructions+=3;goto B4be4e7;
case 0x4be4e8:c.instructions+=2;goto B4be4e8;
case 0x4be4e9:c.instructions+=1;goto B4be4e9;
case 0x4be4ee:goto L4be4ee;
case 0x4be4f1:goto L4be4f1;
case 0x4be4f4:c.instructions+=6;goto B4be4f4;
case 0x4be4f7:c.instructions+=5;goto B4be4f7;
case 0x4be4f8:c.instructions+=4;goto B4be4f8;
case 0x4be4f9:c.instructions+=3;goto B4be4f9;
case 0x4be4fb:c.instructions+=2;goto B4be4fb;
case 0x4be4fe:c.instructions+=1;goto B4be4fe;
case 0x4be503:goto L4be503;
case 0x4be506:c.instructions+=2;goto B4be506;
case 0x4be50b:c.instructions+=1;goto B4be50b;
case 0x4be510:goto L4be510;
case 0x4be511:c.instructions+=2;goto B4be511;
case 0x4be512:c.instructions+=1;goto B4be512;
case 0x4be517:goto L4be517;
case 0x4be51a:c.instructions+=3;goto B4be51a;
case 0x4be51f:c.instructions+=2;goto B4be51f;
case 0x4be521:c.instructions+=1;goto B4be521;
case 0x4be526:goto L4be526;
case 0x4be527:c.instructions+=2;goto B4be527;
case 0x4be528:c.instructions+=1;goto B4be528;
case 0x4be52d:goto L4be52d;
case 0x4be52f:c.instructions+=4;goto B4be52f;
case 0x4be532:c.instructions+=3;goto B4be532;
case 0x4be535:c.instructions+=2;goto B4be535;
case 0x4be537:c.instructions+=1;goto B4be537;
case 0x4be539:goto L4be539;
case 0x4be53c:c.instructions+=1;goto B4be53c;
case 0x4be53e:goto L4be53e;
case 0x4be540:goto L4be540;
case 0x4be543:c.instructions+=2;goto B4be543;
case 0x4be545:c.instructions+=1;goto B4be545;
case 0x4be547:goto L4be547;
case 0x4be54d:c.instructions+=2;goto B4be54d;
case 0x4be54f:c.instructions+=1;goto B4be54f;
case 0x4be555:goto L4be555;
case 0x4be558:c.instructions+=3;goto B4be558;
case 0x4be55d:c.instructions+=2;goto B4be55d;
case 0x4be55e:c.instructions+=1;goto B4be55e;
case 0x4be563:goto L4be563;
case 0x4be564:c.instructions+=1;goto B4be564;
case 0x4be569:goto L4be569;
case 0x4be56c:c.instructions+=6;goto B4be56c;
case 0x4be56d:c.instructions+=5;goto B4be56d;
case 0x4be574:c.instructions+=4;goto B4be574;
case 0x4be576:c.instructions+=3;goto B4be576;
case 0x4be577:c.instructions+=2;goto B4be577;
case 0x4be578:c.instructions+=1;goto B4be578;
case 0x4be57d:goto L4be57d;
case 0x4be580:c.instructions+=2;goto B4be580;
case 0x4be582:c.instructions+=1;goto B4be582;
case 0x4be584:goto L4be584;
case 0x4be587:c.instructions+=1;goto B4be587;
case 0x4be589:goto L4be589;
case 0x4be58b:goto L4be58b;
case 0x4be58d:c.instructions+=1;goto B4be58d;
case 0x4be58f:goto L4be58f;
case 0x4be595:c.instructions+=2;goto B4be595;
case 0x4be597:c.instructions+=1;goto B4be597;
case 0x4be59d:goto L4be59d;
case 0x4be5a0:c.instructions+=3;goto B4be5a0;
case 0x4be5a5:c.instructions+=2;goto B4be5a5;
case 0x4be5a6:c.instructions+=1;goto B4be5a6;
case 0x4be5ab:goto L4be5ab;
case 0x4be5ac:c.instructions+=1;goto B4be5ac;
case 0x4be5b1:goto L4be5b1;
case 0x4be5b4:c.instructions+=6;goto B4be5b4;
case 0x4be5b5:c.instructions+=5;goto B4be5b5;
case 0x4be5bc:c.instructions+=4;goto B4be5bc;
case 0x4be5be:c.instructions+=3;goto B4be5be;
case 0x4be5bf:c.instructions+=2;goto B4be5bf;
case 0x4be5c0:c.instructions+=1;goto B4be5c0;
case 0x4be5c5:goto L4be5c5;
case 0x4be5cb:c.instructions+=2;goto B4be5cb;
case 0x4be5cd:c.instructions+=1;goto B4be5cd;
case 0x4be5cf:goto L4be5cf;
case 0x4be5d2:c.instructions+=3;goto B4be5d2;
case 0x4be5d7:c.instructions+=2;goto B4be5d7;
case 0x4be5d8:c.instructions+=1;goto B4be5d8;
case 0x4be5dd:goto L4be5dd;
case 0x4be5de:c.instructions+=1;goto B4be5de;
case 0x4be5e3:goto L4be5e3;
case 0x4be5ea:c.instructions+=1;goto B4be5ea;
case 0x4be5ec:goto L4be5ec;
case 0x4be5f2:c.instructions+=2;goto B4be5f2;
case 0x4be5f4:c.instructions+=1;goto B4be5f4;
case 0x4be5f6:goto L4be5f6;
case 0x4be5f9:c.instructions+=3;goto B4be5f9;
case 0x4be5fe:c.instructions+=2;goto B4be5fe;
case 0x4be5ff:c.instructions+=1;goto B4be5ff;
case 0x4be604:goto L4be604;
case 0x4be605:c.instructions+=1;goto B4be605;
case 0x4be60a:goto L4be60a;
case 0x4be611:goto L4be611;
case 0x4be614:goto L4be614;
case 0x4be619:c.instructions+=2;goto B4be619;
case 0x4be61a:c.instructions+=1;goto B4be61a;
case 0x4be61f:goto L4be61f;
case 0x4be622:c.instructions+=2;goto B4be622;
case 0x4be624:c.instructions+=1;goto B4be624;
case 0x4be626:goto L4be626;
case 0x4be628:c.instructions+=3;goto B4be628;
case 0x4be62d:c.instructions+=2;goto B4be62d;
case 0x4be62e:c.instructions+=1;goto B4be62e;
case 0x4be633:goto L4be633;
case 0x4be636:goto L4be636;
case 0x4be63b:c.instructions+=2;goto B4be63b;
case 0x4be63c:c.instructions+=1;goto B4be63c;
case 0x4be641:goto L4be641;
case 0x4be644:c.instructions+=2;goto B4be644;
case 0x4be646:c.instructions+=1;goto B4be646;
case 0x4be648:goto L4be648;
case 0x4be64a:c.instructions+=3;goto B4be64a;
case 0x4be64f:c.instructions+=2;goto B4be64f;
case 0x4be650:c.instructions+=1;goto B4be650;
case 0x4be655:goto L4be655;
case 0x4be658:goto L4be658;
case 0x4be659:c.instructions+=4;goto B4be659;
case 0x4be65b:c.instructions+=3;goto B4be65b;
case 0x4be65c:c.instructions+=2;goto B4be65c;
case 0x4be65d:c.instructions+=1;goto B4be65d;
case 0x4be670:goto L4be670;
case 0x4be671:c.instructions+=4;goto B4be671;
case 0x4be673:c.instructions+=3;goto B4be673;
case 0x4be679:c.instructions+=2;goto B4be679;
case 0x4be67b:c.instructions+=1;goto B4be67b;
case 0x4be67d:goto L4be67d;
case 0x4be67f:c.instructions+=2;goto B4be67f;
case 0x4be680:c.instructions+=1;goto B4be680;
case 0x4be681:goto L4be681;
case 0x4be682:c.instructions+=6;goto B4be682;
case 0x4be683:c.instructions+=5;goto B4be683;
case 0x4be688:c.instructions+=4;goto B4be688;
case 0x4be68e:c.instructions+=3;goto B4be68e;
case 0x4be693:c.instructions+=2;goto B4be693;
case 0x4be694:c.instructions+=1;goto B4be694;
case 0x4be699:goto L4be699;
case 0x4be69b:c.instructions+=1;goto B4be69b;
case 0x4be6a0:goto L4be6a0;
case 0x4be6a2:c.instructions+=2;goto B4be6a2;
case 0x4be6a8:c.instructions+=1;goto B4be6a8;
case 0x4be6aa:goto L4be6aa;
case 0x4be6ad:c.instructions+=2;goto B4be6ad;
case 0x4be6b2:c.instructions+=1;goto B4be6b2;
case 0x4be6b7:goto L4be6b7;
case 0x4be6b8:c.instructions+=6;goto B4be6b8;
case 0x4be6bd:c.instructions+=5;goto B4be6bd;
case 0x4be6c2:c.instructions+=4;goto B4be6c2;
case 0x4be6c7:c.instructions+=3;goto B4be6c7;
case 0x4be6cc:c.instructions+=2;goto B4be6cc;
case 0x4be6cd:c.instructions+=1;goto B4be6cd;
case 0x4be6d2:goto L4be6d2;
case 0x4be6d8:c.instructions+=4;goto B4be6d8;
case 0x4be6db:c.instructions+=3;goto B4be6db;
case 0x4be6dc:c.instructions+=2;goto B4be6dc;
case 0x4be6dd:c.instructions+=1;goto B4be6dd;
case 0x4be6de:goto L4be6de;
case 0x4be6df:c.instructions+=3;goto B4be6df;
case 0x4be6e2:c.instructions+=2;goto B4be6e2;
case 0x4be6e4:c.instructions+=1;goto B4be6e4;
case 0x4be6e9:goto L4be6e9;
case 0x4be6ea:c.instructions+=4;goto B4be6ea;
case 0x4be6ef:c.instructions+=3;goto B4be6ef;
case 0x4be6f4:c.instructions+=2;goto B4be6f4;
case 0x4be6f5:c.instructions+=1;goto B4be6f5;
case 0x4be6fa:goto L4be6fa;
case 0x4be6fd:c.instructions+=3;goto B4be6fd;
case 0x4be700:c.instructions+=2;goto B4be700;
case 0x4be702:c.instructions+=1;goto B4be702;
case 0x4be707:goto L4be707;
case 0x4be708:c.instructions+=4;goto B4be708;
case 0x4be70d:c.instructions+=3;goto B4be70d;
case 0x4be712:c.instructions+=2;goto B4be712;
case 0x4be713:c.instructions+=1;goto B4be713;
case 0x4be718:goto L4be718;
case 0x4be71b:c.instructions+=3;goto B4be71b;
case 0x4be71e:c.instructions+=2;goto B4be71e;
case 0x4be720:c.instructions+=1;goto B4be720;
case 0x4be725:goto L4be725;
case 0x4be726:c.instructions+=4;goto B4be726;
case 0x4be72b:c.instructions+=3;goto B4be72b;
case 0x4be730:c.instructions+=2;goto B4be730;
case 0x4be731:c.instructions+=1;goto B4be731;
case 0x4be736:goto L4be736;
case 0x4be739:c.instructions+=3;goto B4be739;
case 0x4be73c:c.instructions+=2;goto B4be73c;
case 0x4be73e:c.instructions+=1;goto B4be73e;
case 0x4be743:goto L4be743;
case 0x4be746:c.instructions+=5;goto B4be746;
case 0x4be749:c.instructions+=4;goto B4be749;
case 0x4be74e:c.instructions+=3;goto B4be74e;
case 0x4be753:c.instructions+=2;goto B4be753;
case 0x4be754:c.instructions+=1;goto B4be754;
case 0x4be759:goto L4be759;
case 0x4be75c:c.instructions+=3;goto B4be75c;
case 0x4be75f:c.instructions+=2;goto B4be75f;
case 0x4be761:c.instructions+=1;goto B4be761;
case 0x4be766:goto L4be766;
case 0x4be769:c.instructions+=5;goto B4be769;
case 0x4be76c:c.instructions+=4;goto B4be76c;
case 0x4be771:c.instructions+=3;goto B4be771;
case 0x4be776:c.instructions+=2;goto B4be776;
case 0x4be777:c.instructions+=1;goto B4be777;
case 0x4be77c:goto L4be77c;
case 0x4be77f:c.instructions+=3;goto B4be77f;
case 0x4be782:c.instructions+=2;goto B4be782;
case 0x4be784:c.instructions+=1;goto B4be784;
case 0x4be789:goto L4be789;
case 0x4be78c:c.instructions+=5;goto B4be78c;
case 0x4be78f:c.instructions+=4;goto B4be78f;
case 0x4be794:c.instructions+=3;goto B4be794;
case 0x4be799:c.instructions+=2;goto B4be799;
case 0x4be79a:c.instructions+=1;goto B4be79a;
case 0x4be79f:goto L4be79f;
case 0x4be7a2:c.instructions+=2;goto B4be7a2;
case 0x4be7a7:c.instructions+=1;goto B4be7a7;
case 0x4be7ac:goto L4be7ac;
case 0x4be7af:c.instructions+=3;goto B4be7af;
case 0x4be7b0:c.instructions+=2;goto B4be7b0;
case 0x4be7b2:c.instructions+=1;goto B4be7b2;
case 0x4be7b7:goto L4be7b7;
case 0x4be7b8:c.instructions+=4;goto B4be7b8;
case 0x4be7bd:c.instructions+=3;goto B4be7bd;
case 0x4be7c2:c.instructions+=2;goto B4be7c2;
case 0x4be7c3:c.instructions+=1;goto B4be7c3;
case 0x4be7c8:goto L4be7c8;
case 0x4be7cb:c.instructions+=2;goto B4be7cb;
case 0x4be7d0:c.instructions+=1;goto B4be7d0;
case 0x4be7d5:goto L4be7d5;
case 0x4be7d8:c.instructions+=3;goto B4be7d8;
case 0x4be7d9:c.instructions+=2;goto B4be7d9;
case 0x4be7db:c.instructions+=1;goto B4be7db;
case 0x4be7e0:goto L4be7e0;
case 0x4be7e1:c.instructions+=4;goto B4be7e1;
case 0x4be7e6:c.instructions+=3;goto B4be7e6;
case 0x4be7eb:c.instructions+=2;goto B4be7eb;
case 0x4be7ec:c.instructions+=1;goto B4be7ec;
case 0x4be7f1:goto L4be7f1;
case 0x4be7f7:c.instructions+=6;goto B4be7f7;
case 0x4be7fa:c.instructions+=5;goto B4be7fa;
case 0x4be7fb:c.instructions+=4;goto B4be7fb;
case 0x4be800:c.instructions+=3;goto B4be800;
case 0x4be805:c.instructions+=2;goto B4be805;
case 0x4be806:c.instructions+=1;goto B4be806;
case 0x4be80b:goto L4be80b;
case 0x4be810:c.instructions+=4;goto B4be810;
case 0x4be813:c.instructions+=3;goto B4be813;
case 0x4be816:c.instructions+=2;goto B4be816;
case 0x4be818:c.instructions+=1;goto B4be818;
case 0x4be81a:goto L4be81a;
case 0x4be81f:c.instructions+=1;goto B4be81f;
case 0x4be824:goto L4be824;
case 0x4be827:c.instructions+=3;goto B4be827;
case 0x4be828:c.instructions+=2;goto B4be828;
case 0x4be82a:c.instructions+=1;goto B4be82a;
case 0x4be82f:goto L4be82f;
case 0x4be835:c.instructions+=6;goto B4be835;
case 0x4be838:c.instructions+=5;goto B4be838;
case 0x4be83b:c.instructions+=4;goto B4be83b;
case 0x4be840:c.instructions+=3;goto B4be840;
case 0x4be845:c.instructions+=2;goto B4be845;
case 0x4be846:c.instructions+=1;goto B4be846;
case 0x4be84b:goto L4be84b;
case 0x4be84e:c.instructions+=3;goto B4be84e;
case 0x4be851:c.instructions+=2;goto B4be851;
case 0x4be853:c.instructions+=1;goto B4be853;
case 0x4be858:goto L4be858;
case 0x4be85b:c.instructions+=3;goto B4be85b;
case 0x4be85e:c.instructions+=2;goto B4be85e;
case 0x4be863:c.instructions+=1;goto B4be863;
case 0x4be865:goto L4be865;
case 0x4be867:c.instructions+=1;goto B4be867;
case 0x4be86c:goto L4be86c;
case 0x4be872:c.instructions+=6;goto B4be872;
case 0x4be875:c.instructions+=5;goto B4be875;
case 0x4be878:c.instructions+=4;goto B4be878;
case 0x4be87d:c.instructions+=3;goto B4be87d;
case 0x4be882:c.instructions+=2;goto B4be882;
case 0x4be883:c.instructions+=1;goto B4be883;
case 0x4be888:goto L4be888;
case 0x4be88b:c.instructions+=3;goto B4be88b;
case 0x4be88e:c.instructions+=2;goto B4be88e;
case 0x4be890:c.instructions+=1;goto B4be890;
case 0x4be895:goto L4be895;
case 0x4be89b:c.instructions+=3;goto B4be89b;
case 0x4be89e:c.instructions+=2;goto B4be89e;
case 0x4be8a1:c.instructions+=1;goto B4be8a1;
case 0x4be8a6:goto L4be8a6;
case 0x4be8ab:c.instructions+=2;goto B4be8ab;
case 0x4be8ac:c.instructions+=1;goto B4be8ac;
case 0x4be8b1:goto L4be8b1;
case 0x4be8b4:c.instructions+=4;goto B4be8b4;
case 0x4be8b7:c.instructions+=3;goto B4be8b7;
case 0x4be8bc:c.instructions+=2;goto B4be8bc;
case 0x4be8be:c.instructions+=1;goto B4be8be;
case 0x4be8c3:goto L4be8c3;
case 0x4be8c5:c.instructions+=2;goto B4be8c5;
case 0x4be8c7:c.instructions+=1;goto B4be8c7;
case 0x4be8ca:goto L4be8ca;
case 0x4be8d0:c.instructions+=4;goto B4be8d0;
case 0x4be8d1:c.instructions+=3;goto B4be8d1;
case 0x4be8d2:c.instructions+=2;goto B4be8d2;
case 0x4be8d3:c.instructions+=1;goto B4be8d3;
case 0x4be8e0:goto L4be8e0;
case 0x4be8e1:c.instructions+=4;goto B4be8e1;
case 0x4be8e5:c.instructions+=3;goto B4be8e5;
case 0x4be8e8:c.instructions+=2;goto B4be8e8;
case 0x4be8ea:c.instructions+=1;goto B4be8ea;
case 0x4be8ec:goto L4be8ec;
case 0x4be8ed:c.instructions+=1;goto B4be8ed;
case 0x4be8f2:goto L4be8f2;
case 0x4be8f5:c.instructions+=1;goto B4be8f5;
case 0x4be8fc:goto L4be8fc;
case 0x4be900:c.instructions+=4;goto B4be900;
case 0x4be90a:c.instructions+=3;goto B4be90a;
case 0x4be90d:c.instructions+=2;goto B4be90d;
case 0x4be90f:c.instructions+=1;goto B4be90f;
case 0x4be911:goto L4be911;
case 0x4be914:c.instructions+=3;goto B4be914;
case 0x4be915:c.instructions+=2;goto B4be915;
case 0x4be91b:c.instructions+=1;goto B4be91b;
case 0x4be920:goto L4be920;
case 0x4be922:c.instructions+=1;goto B4be922;
case 0x4be927:goto L4be927;
case 0x4be92e:c.instructions+=2;goto B4be92e;
case 0x4be92f:c.instructions+=1;goto B4be92f;
case 0x4be930:goto L4be930;
case 0x4be933:c.instructions+=2;goto B4be933;
case 0x4be938:c.instructions+=1;goto B4be938;
case 0x4be93d:goto L4be93d;
case 0x4be93e:c.instructions+=6;goto B4be93e;
case 0x4be943:c.instructions+=5;goto B4be943;
case 0x4be948:c.instructions+=4;goto B4be948;
case 0x4be94d:c.instructions+=3;goto B4be94d;
case 0x4be952:c.instructions+=2;goto B4be952;
case 0x4be953:c.instructions+=1;goto B4be953;
case 0x4be958:goto L4be958;
case 0x4be95b:c.instructions+=2;goto B4be95b;
case 0x4be95c:c.instructions+=1;goto B4be95c;
case 0x4be960:goto L4be960;
case 0x4be962:c.instructions+=11;goto B4be962;
case 0x4be967:c.instructions+=10;goto B4be967;
case 0x4be96d:c.instructions+=9;goto B4be96d;
case 0x4be96e:c.instructions+=8;goto B4be96e;
case 0x4be975:c.instructions+=7;goto B4be975;
case 0x4be976:c.instructions+=6;goto B4be976;
case 0x4be97a:c.instructions+=5;goto B4be97a;
case 0x4be97b:c.instructions+=4;goto B4be97b;
case 0x4be97d:c.instructions+=3;goto B4be97d;
case 0x4be97e:c.instructions+=2;goto B4be97e;
case 0x4be982:c.instructions+=1;goto B4be982;
case 0x4be987:goto L4be987;
case 0x4be989:c.instructions+=6;goto B4be989;
case 0x4be98f:c.instructions+=5;goto B4be98f;
case 0x4be992:c.instructions+=4;goto B4be992;
case 0x4be994:c.instructions+=3;goto B4be994;
case 0x4be998:c.instructions+=2;goto B4be998;
case 0x4be99b:c.instructions+=1;goto B4be99b;
case 0x4be9a0:goto L4be9a0;
case 0x4be9a4:c.instructions+=5;goto B4be9a4;
case 0x4be9a6:c.instructions+=4;goto B4be9a6;
case 0x4be9a7:c.instructions+=3;goto B4be9a7;
case 0x4be9ae:c.instructions+=2;goto B4be9ae;
case 0x4be9b1:c.instructions+=1;goto B4be9b1;
case 0x4be9c0:goto L4be9c0;
case 0x4be9c1:c.instructions+=2;goto B4be9c1;
case 0x4be9c3:c.instructions+=1;goto B4be9c3;
case 0x4be9c8:goto L4be9c8;
case 0x4be9cd:c.instructions+=1;goto B4be9cd;
case 0x4be9cf:goto L4be9cf;
case 0x4be9d0:c.instructions+=1;goto B4be9d0;
case 0x4be9d5:goto L4be9d5;
case 0x4be9d8:goto L4be9d8;
case 0x4be9da:c.instructions+=2;goto B4be9da;
case 0x4be9db:c.instructions+=1;goto B4be9db;
case 0x4be9e0:goto L4be9e0;
case 0x4be9e6:c.instructions+=1;goto B4be9e6;
case 0x4be9f0:goto L4be9f0;
case 0x4be9f5:c.instructions+=5;goto B4be9f5;
case 0x4be9f6:c.instructions+=4;goto B4be9f6;
case 0x4be9f9:c.instructions+=3;goto B4be9f9;
case 0x4be9fb:c.instructions+=2;goto B4be9fb;
case 0x4be9fe:c.instructions+=1;goto B4be9fe;
case 0x4bea03:goto L4bea03;
case 0x4bea05:c.instructions+=1;goto B4bea05;
case 0x4bea07:goto L4bea07;
case 0x4bea09:c.instructions+=5;goto B4bea09;
case 0x4bea0c:c.instructions+=4;goto B4bea0c;
case 0x4bea0f:c.instructions+=3;goto B4bea0f;
case 0x4bea10:c.instructions+=2;goto B4bea10;
case 0x4bea12:c.instructions+=1;goto B4bea12;
case 0x4bea15:goto L4bea15;
case 0x4bea16:c.instructions+=1;goto B4bea16;
case 0x4bea19:goto L4bea19;
case 0x4bea1b:c.instructions+=5;goto B4bea1b;
case 0x4bea1d:c.instructions+=4;goto B4bea1d;
case 0x4bea22:c.instructions+=3;goto B4bea22;
case 0x4bea23:c.instructions+=2;goto B4bea23;
case 0x4bea25:c.instructions+=1;goto B4bea25;
case 0x4bea28:goto L4bea28;
case 0x4bea29:c.instructions+=1;goto B4bea29;
case 0x4bea30:goto L4bea30;
case 0x4bea34:c.instructions+=7;goto B4bea34;
case 0x4bea35:c.instructions+=6;goto B4bea35;
case 0x4bea36:c.instructions+=5;goto B4bea36;
case 0x4bea38:c.instructions+=4;goto B4bea38;
case 0x4bea39:c.instructions+=3;goto B4bea39;
case 0x4bea3c:c.instructions+=2;goto B4bea3c;
case 0x4bea3d:c.instructions+=1;goto B4bea3d;
case 0x4bea42:goto L4bea42;
case 0x4bea48:c.instructions+=4;goto B4bea48;
case 0x4bea4e:c.instructions+=3;goto B4bea4e;
case 0x4bea51:c.instructions+=2;goto B4bea51;
case 0x4bea54:c.instructions+=1;goto B4bea54;
case 0x4bea56:goto L4bea56;
case 0x4bea57:c.instructions+=1;goto B4bea57;
case 0x4bea59:goto L4bea59;
case 0x4bea5e:c.instructions+=4;goto B4bea5e;
case 0x4bea65:c.instructions+=3;goto B4bea65;
case 0x4bea67:c.instructions+=2;goto B4bea67;
case 0x4bea6a:c.instructions+=1;goto B4bea6a;
case 0x4bea6f:goto L4bea6f;
case 0x4bea70:c.instructions+=2;goto B4bea70;
case 0x4bea71:c.instructions+=1;goto B4bea71;
case 0x4bea74:goto L4bea74;
case 0x4bea79:c.instructions+=1;goto B4bea79;
case 0x4bea7e:goto L4bea7e;
case 0x4bea80:c.instructions+=1;goto B4bea80;
case 0x4bea82:goto L4bea82;
case 0x4bea87:c.instructions+=5;goto B4bea87;
case 0x4bea8c:c.instructions+=4;goto B4bea8c;
case 0x4bea91:c.instructions+=3;goto B4bea91;
case 0x4bea96:c.instructions+=2;goto B4bea96;
case 0x4bea98:c.instructions+=1;goto B4bea98;
case 0x4bea9d:goto L4bea9d;
case 0x4bea9f:c.instructions+=1;goto B4bea9f;
case 0x4beaa4:goto L4beaa4;
case 0x4beaa5:c.instructions+=2;goto B4beaa5;
case 0x4beaa6:c.instructions+=1;goto B4beaa6;
case 0x4beaa9:goto L4beaa9;
case 0x4beaae:c.instructions+=2;goto B4beaae;
case 0x4beab5:c.instructions+=1;goto B4beab5;
case 0x4beab8:goto L4beab8;
case 0x4beaba:c.instructions+=1;goto B4beaba;
case 0x4beabf:goto L4beabf;
case 0x4beac0:c.instructions+=2;goto B4beac0;
case 0x4beac1:c.instructions+=1;goto B4beac1;
case 0x4bead0:goto L4bead0;
case 0x4bead3:c.instructions+=12;goto B4bead3;
case 0x4bead7:c.instructions+=11;goto B4bead7;
case 0x4bead8:c.instructions+=10;goto B4bead8;
case 0x4bead9:c.instructions+=9;goto B4bead9;
case 0x4beada:c.instructions+=8;goto B4beada;
case 0x4beadb:c.instructions+=7;goto B4beadb;
case 0x4beadd:c.instructions+=6;goto B4beadd;
case 0x4beade:c.instructions+=5;goto B4beade;
case 0x4beae2:c.instructions+=4;goto B4beae2;
case 0x4beae4:c.instructions+=3;goto B4beae4;
case 0x4beae5:c.instructions+=2;goto B4beae5;
case 0x4beae9:c.instructions+=1;goto B4beae9;
case 0x4beaee:goto L4beaee;
case 0x4beaf2:c.instructions+=2;goto B4beaf2;
case 0x4beaf3:c.instructions+=1;goto B4beaf3;
case 0x4beaf8:goto L4beaf8;
case 0x4beafe:c.instructions+=8;goto B4beafe;
case 0x4beb00:c.instructions+=7;goto B4beb00;
case 0x4beb06:c.instructions+=6;goto B4beb06;
case 0x4beb09:c.instructions+=5;goto B4beb09;
case 0x4beb0e:c.instructions+=4;goto B4beb0e;
case 0x4beb0f:c.instructions+=3;goto B4beb0f;
case 0x4beb11:c.instructions+=2;goto B4beb11;
case 0x4beb15:c.instructions+=1;goto B4beb15;
case 0x4beb17:goto L4beb17;
case 0x4beb18:c.instructions+=5;goto B4beb18;
case 0x4beb1c:c.instructions+=4;goto B4beb1c;
case 0x4beb1d:c.instructions+=3;goto B4beb1d;
case 0x4beb20:c.instructions+=2;goto B4beb20;
case 0x4beb21:c.instructions+=1;goto B4beb21;
case 0x4beb26:goto L4beb26;
case 0x4beb29:c.instructions+=2;goto B4beb29;
case 0x4beb2b:c.instructions+=1;goto B4beb2b;
case 0x4beb2d:goto L4beb2d;
case 0x4beb31:c.instructions+=4;goto B4beb31;
case 0x4beb33:c.instructions+=3;goto B4beb33;
case 0x4beb36:c.instructions+=2;goto B4beb36;
case 0x4beb3a:c.instructions+=1;goto B4beb3a;
case 0x4beb3e:goto L4beb3e;
case 0x4beb40:c.instructions+=2;goto B4beb40;
case 0x4beb42:c.instructions+=1;goto B4beb42;
case 0x4beb44:goto L4beb44;
case 0x4beb48:c.instructions+=6;goto B4beb48;
case 0x4beb49:c.instructions+=5;goto B4beb49;
case 0x4beb4a:c.instructions+=4;goto B4beb4a;
case 0x4beb4b:c.instructions+=3;goto B4beb4b;
case 0x4beb4c:c.instructions+=2;goto B4beb4c;
case 0x4beb4f:c.instructions+=1;goto B4beb4f;
case 0x4beb52:goto L4beb52;
case 0x4beb53:c.instructions+=6;goto B4beb53;
case 0x4beb54:c.instructions+=5;goto B4beb54;
case 0x4beb55:c.instructions+=4;goto B4beb55;
case 0x4beb57:c.instructions+=3;goto B4beb57;
case 0x4beb58:c.instructions+=2;goto B4beb58;
case 0x4beb5b:c.instructions+=1;goto B4beb5b;
case 0x4beb60:goto L4beb60;
case 0x4beb64:c.instructions+=4;goto B4beb64;
case 0x4beb69:c.instructions+=3;goto B4beb69;
case 0x4beb6a:c.instructions+=2;goto B4beb6a;
case 0x4beb6c:c.instructions+=1;goto B4beb6c;
case 0x4beb6e:goto L4beb6e;
case 0x4beb72:c.instructions+=1;goto B4beb72;
case 0x4beb74:goto L4beb74;
case 0x4beb7b:goto L4beb7b;
case 0x4beb7e:c.instructions+=5;goto B4beb7e;
case 0x4beb7f:c.instructions+=4;goto B4beb7f;
case 0x4beb84:c.instructions+=3;goto B4beb84;
case 0x4beb86:c.instructions+=2;goto B4beb86;
case 0x4beb87:c.instructions+=1;goto B4beb87;
case 0x4beb8c:goto L4beb8c;
case 0x4beb8f:c.instructions+=3;goto B4beb8f;
case 0x4beb90:c.instructions+=2;goto B4beb90;
case 0x4beb92:c.instructions+=1;goto B4beb92;
case 0x4beb97:goto L4beb97;
case 0x4beb99:c.instructions+=4;goto B4beb99;
case 0x4beb9b:c.instructions+=3;goto B4beb9b;
case 0x4beb9d:c.instructions+=2;goto B4beb9d;
case 0x4beb9f:c.instructions+=1;goto B4beb9f;
case 0x4beba4:goto L4beba4;
case 0x4beba7:c.instructions+=6;goto B4beba7;
case 0x4bebab:c.instructions+=5;goto B4bebab;
case 0x4bebac:c.instructions+=4;goto B4bebac;
case 0x4bebaf:c.instructions+=3;goto B4bebaf;
case 0x4bebb5:c.instructions+=2;goto B4bebb5;
case 0x4bebb6:c.instructions+=1;goto B4bebb6;
case 0x4bebb9:goto L4bebb9;
case 0x4bebbe:c.instructions+=1;goto B4bebbe;
case 0x4bebc0:goto L4bebc0;
case 0x4bebc3:c.instructions+=3;goto B4bebc3;
case 0x4bebc4:c.instructions+=2;goto B4bebc4;
case 0x4bebc9:c.instructions+=1;goto B4bebc9;
case 0x4bebce:goto L4bebce;
case 0x4bebd2:c.instructions+=2;goto B4bebd2;
case 0x4bebd5:c.instructions+=1;goto B4bebd5;
case 0x4bebdb:goto L4bebdb;
case 0x4bebdc:c.instructions+=1;goto B4bebdc;
case 0x4bebe0:goto L4bebe0;
case 0x4bebe1:c.instructions+=6;goto B4bebe1;
case 0x4bebe3:c.instructions+=5;goto B4bebe3;
case 0x4bebe6:c.instructions+=4;goto B4bebe6;
case 0x4bebeb:c.instructions+=3;goto B4bebeb;
case 0x4bebf0:c.instructions+=2;goto B4bebf0;
case 0x4bebf1:c.instructions+=1;goto B4bebf1;
case 0x4bebf6:goto L4bebf6;
case 0x4bebf9:c.instructions+=2;goto B4bebf9;
case 0x4bebfa:c.instructions+=1;goto B4bebfa;
case 0x4bebff:goto L4bebff;
case 0x4bec04:c.instructions+=5;goto B4bec04;
case 0x4bec07:c.instructions+=4;goto B4bec07;
case 0x4bec0a:c.instructions+=3;goto B4bec0a;
case 0x4bec0c:c.instructions+=2;goto B4bec0c;
case 0x4bec0d:c.instructions+=1;goto B4bec0d;
case 0x4bec20:goto L4bec20;
case 0x4bec28:c.instructions+=1;goto B4bec28;
case 0x4bec2a:goto L4bec2a;
case 0x4bec2f:c.instructions+=1;goto B4bec2f;
case 0x4bec34:goto L4bec34;
case 0x4bec36:c.instructions+=1;goto B4bec36;
case 0x4bec38:goto L4bec38;
case 0x4bec39:c.instructions+=11;goto B4bec39;
case 0x4bec3d:c.instructions+=10;goto B4bec3d;
case 0x4bec42:c.instructions+=9;goto B4bec42;
case 0x4bec44:c.instructions+=8;goto B4bec44;
case 0x4bec49:c.instructions+=7;goto B4bec49;
case 0x4bec4e:c.instructions+=6;goto B4bec4e;
case 0x4bec53:c.instructions+=5;goto B4bec53;
case 0x4bec58:c.instructions+=4;goto B4bec58;
case 0x4bec5d:c.instructions+=3;goto B4bec5d;
case 0x4bec62:c.instructions+=2;goto B4bec62;
case 0x4bec63:c.instructions+=1;goto B4bec63;
case 0x4bec68:goto L4bec68;
case 0x4bec69:c.instructions+=2;goto B4bec69;
case 0x4bec6e:c.instructions+=1;goto B4bec6e;
case 0x4bec73:goto L4bec73;
case 0x4bec76:c.instructions+=2;goto B4bec76;
case 0x4bec77:c.instructions+=1;goto B4bec77;
case 0x4bec7a:goto L4bec7a;
case 0x4bec7e:c.instructions+=3;goto B4bec7e;
case 0x4bec7f:c.instructions+=2;goto B4bec7f;
case 0x4bec84:c.instructions+=1;goto B4bec84;
case 0x4bec89:goto L4bec89;
case 0x4bec8c:goto L4bec8c;
case 0x4bec90:goto L4bec90;
case 0x4bec91:c.instructions+=3;goto B4bec91;
case 0x4bec93:c.instructions+=2;goto B4bec93;
case 0x4bec9a:c.instructions+=1;goto B4bec9a;
case 0x4bec9c:goto L4bec9c;
case 0x4beca1:c.instructions+=1;goto B4beca1;
case 0x4beca6:goto L4beca6;
case 0x4becac:c.instructions+=3;goto B4becac;
case 0x4becae:c.instructions+=2;goto B4becae;
case 0x4becb0:c.instructions+=1;goto B4becb0;
case 0x4becb5:goto L4becb5;
case 0x4becb6:c.instructions+=1;goto B4becb6;
case 0x4becc0:goto L4becc0;
case 0x4becc8:c.instructions+=1;goto B4becc8;
case 0x4becca:goto L4becca;
case 0x4beccb:c.instructions+=11;goto B4beccb;
case 0x4beccf:c.instructions+=10;goto B4beccf;
case 0x4becd4:c.instructions+=9;goto B4becd4;
case 0x4becd6:c.instructions+=8;goto B4becd6;
case 0x4becdb:c.instructions+=7;goto B4becdb;
case 0x4bece0:c.instructions+=6;goto B4bece0;
case 0x4bece5:c.instructions+=5;goto B4bece5;
case 0x4becea:c.instructions+=4;goto B4becea;
case 0x4becef:c.instructions+=3;goto B4becef;
case 0x4becf4:c.instructions+=2;goto B4becf4;
case 0x4becf5:c.instructions+=1;goto B4becf5;
case 0x4becfa:goto L4becfa;
case 0x4becfb:c.instructions+=2;goto B4becfb;
case 0x4bed00:c.instructions+=1;goto B4bed00;
case 0x4bed05:goto L4bed05;
case 0x4bed08:c.instructions+=1;goto B4bed08;
case 0x4bed09:goto L4bed09;
case 0x4bed10:goto L4bed10;
case 0x4bed18:c.instructions+=1;goto B4bed18;
case 0x4bed1a:goto L4bed1a;
case 0x4bed1e:c.instructions+=5;goto B4bed1e;
case 0x4bed20:c.instructions+=4;goto B4bed20;
case 0x4bed25:c.instructions+=3;goto B4bed25;
case 0x4bed26:c.instructions+=2;goto B4bed26;
case 0x4bed2d:c.instructions+=1;goto B4bed2d;
case 0x4bed32:goto L4bed32;
case 0x4bed35:goto L4bed35;
case 0x4bed40:goto L4bed40;
case 0x4bed48:c.instructions+=1;goto B4bed48;
case 0x4bed4a:goto L4bed4a;
case 0x4bed4b:c.instructions+=11;goto B4bed4b;
case 0x4bed4f:c.instructions+=10;goto B4bed4f;
case 0x4bed54:c.instructions+=9;goto B4bed54;
case 0x4bed56:c.instructions+=8;goto B4bed56;
case 0x4bed5b:c.instructions+=7;goto B4bed5b;
case 0x4bed60:c.instructions+=6;goto B4bed60;
case 0x4bed65:c.instructions+=5;goto B4bed65;
case 0x4bed6a:c.instructions+=4;goto B4bed6a;
case 0x4bed6f:c.instructions+=3;goto B4bed6f;
case 0x4bed74:c.instructions+=2;goto B4bed74;
case 0x4bed75:c.instructions+=1;goto B4bed75;
case 0x4bed7a:goto L4bed7a;
case 0x4bed7b:c.instructions+=2;goto B4bed7b;
case 0x4bed80:c.instructions+=1;goto B4bed80;
case 0x4bed85:goto L4bed85;
case 0x4bed88:c.instructions+=1;goto B4bed88;
case 0x4bed89:goto L4bed89;
case 0x4bed90:goto L4bed90;
case 0x4bed98:c.instructions+=1;goto B4bed98;
case 0x4bed9a:goto L4bed9a;
case 0x4bed9b:c.instructions+=5;goto B4bed9b;
case 0x4bed9f:c.instructions+=4;goto B4bed9f;
case 0x4beda1:c.instructions+=3;goto B4beda1;
case 0x4beda6:c.instructions+=2;goto B4beda6;
case 0x4beda7:c.instructions+=1;goto B4beda7;
case 0x4bedac:goto L4bedac;
case 0x4bedad:c.instructions+=1;goto B4bedad;
case 0x4bedb2:goto L4bedb2;
case 0x4bedb5:c.instructions+=1;goto B4bedb5;
case 0x4bedb6:goto L4bedb6;
case 0x4bedc0:goto L4bedc0;
case 0x4bedc8:c.instructions+=1;goto B4bedc8;
case 0x4bedca:goto L4bedca;
case 0x4bedcb:c.instructions+=11;goto B4bedcb;
case 0x4bedcf:c.instructions+=10;goto B4bedcf;
case 0x4bedd4:c.instructions+=9;goto B4bedd4;
case 0x4bedd6:c.instructions+=8;goto B4bedd6;
case 0x4beddb:c.instructions+=7;goto B4beddb;
case 0x4bede0:c.instructions+=6;goto B4bede0;
case 0x4bede5:c.instructions+=5;goto B4bede5;
case 0x4bedea:c.instructions+=4;goto B4bedea;
case 0x4bedef:c.instructions+=3;goto B4bedef;
case 0x4bedf4:c.instructions+=2;goto B4bedf4;
case 0x4bedf5:c.instructions+=1;goto B4bedf5;
case 0x4bedfa:goto L4bedfa;
case 0x4bedfb:c.instructions+=2;goto B4bedfb;
case 0x4bee00:c.instructions+=1;goto B4bee00;
case 0x4bee05:goto L4bee05;
case 0x4bee08:c.instructions+=1;goto B4bee08;
case 0x4bee09:goto L4bee09;
case 0x4bee10:goto L4bee10;
case 0x4bee12:c.instructions+=10;goto B4bee12;
case 0x4bee17:c.instructions+=9;goto B4bee17;
case 0x4bee1d:c.instructions+=8;goto B4bee1d;
case 0x4bee1e:c.instructions+=7;goto B4bee1e;
case 0x4bee25:c.instructions+=6;goto B4bee25;
case 0x4bee26:c.instructions+=5;goto B4bee26;
case 0x4bee2d:c.instructions+=4;goto B4bee2d;
case 0x4bee2e:c.instructions+=3;goto B4bee2e;
case 0x4bee2f:c.instructions+=2;goto B4bee2f;
case 0x4bee31:c.instructions+=1;goto B4bee31;
case 0x4bee37:goto L4bee37;
case 0x4bee3c:c.instructions+=1;goto B4bee3c;
case 0x4bee41:goto L4bee41;
case 0x4bee43:c.instructions+=1;goto B4bee43;
case 0x4bee45:goto L4bee45;
case 0x4bee47:c.instructions+=1;goto B4bee47;
case 0x4bee4c:goto L4bee4c;
case 0x4bee4e:c.instructions+=5;goto B4bee4e;
case 0x4bee51:c.instructions+=4;goto B4bee51;
case 0x4bee55:c.instructions+=3;goto B4bee55;
case 0x4bee57:c.instructions+=2;goto B4bee57;
case 0x4bee5f:c.instructions+=1;goto B4bee5f;
case 0x4bee61:goto L4bee61;
case 0x4bee63:c.instructions+=4;goto B4bee63;
case 0x4bee68:c.instructions+=3;goto B4bee68;
case 0x4bee6d:c.instructions+=2;goto B4bee6d;
case 0x4bee6f:c.instructions+=1;goto B4bee6f;
case 0x4bee74:goto L4bee74;
case 0x4bee7a:c.instructions+=1;goto B4bee7a;
case 0x4bee7c:goto L4bee7c;
case 0x4bee7e:goto L4bee7e;
case 0x4bee80:c.instructions+=4;goto B4bee80;
case 0x4bee81:c.instructions+=3;goto B4bee81;
case 0x4bee83:c.instructions+=2;goto B4bee83;
case 0x4bee8b:c.instructions+=1;goto B4bee8b;
case 0x4bee8e:goto L4bee8e;
case 0x4bee90:c.instructions+=1;goto B4bee90;
case 0x4bee95:goto L4bee95;
case 0x4bee97:c.instructions+=5;goto B4bee97;
case 0x4bee9a:c.instructions+=4;goto B4bee9a;
case 0x4bee9e:c.instructions+=3;goto B4bee9e;
case 0x4beea0:c.instructions+=2;goto B4beea0;
case 0x4beea8:c.instructions+=1;goto B4beea8;
case 0x4beeaa:goto L4beeaa;
case 0x4beeac:c.instructions+=4;goto B4beeac;
case 0x4beeb1:c.instructions+=3;goto B4beeb1;
case 0x4beeb6:c.instructions+=2;goto B4beeb6;
case 0x4beeb8:c.instructions+=1;goto B4beeb8;
case 0x4beebd:goto L4beebd;
case 0x4beec3:c.instructions+=2;goto B4beec3;
case 0x4beec7:c.instructions+=1;goto B4beec7;
case 0x4beec9:goto L4beec9;
case 0x4beecb:goto L4beecb;
case 0x4beecd:c.instructions+=4;goto B4beecd;
case 0x4beece:c.instructions+=3;goto B4beece;
case 0x4beed0:c.instructions+=2;goto B4beed0;
case 0x4beed8:c.instructions+=1;goto B4beed8;
case 0x4beedb:goto L4beedb;
case 0x4beee2:c.instructions+=1;goto B4beee2;
case 0x4beee4:goto L4beee4;
case 0x4beee9:c.instructions+=2;goto B4beee9;
case 0x4beeeb:c.instructions+=1;goto B4beeeb;
case 0x4beeed:goto L4beeed;
case 0x4beeef:c.instructions+=1;goto B4beeef;
case 0x4beef4:goto L4beef4;
case 0x4beef6:c.instructions+=5;goto B4beef6;
case 0x4beef9:c.instructions+=4;goto B4beef9;
case 0x4beefd:c.instructions+=3;goto B4beefd;
case 0x4beeff:c.instructions+=2;goto B4beeff;
case 0x4bef07:c.instructions+=1;goto B4bef07;
case 0x4bef09:goto L4bef09;
case 0x4bef0b:c.instructions+=4;goto B4bef0b;
case 0x4bef10:c.instructions+=3;goto B4bef10;
case 0x4bef15:c.instructions+=2;goto B4bef15;
case 0x4bef17:c.instructions+=1;goto B4bef17;
case 0x4bef1c:goto L4bef1c;
case 0x4bef22:c.instructions+=2;goto B4bef22;
case 0x4bef26:c.instructions+=1;goto B4bef26;
case 0x4bef28:goto L4bef28;
case 0x4bef2a:goto L4bef2a;
case 0x4bef2c:c.instructions+=4;goto B4bef2c;
case 0x4bef2d:c.instructions+=3;goto B4bef2d;
case 0x4bef2f:c.instructions+=2;goto B4bef2f;
case 0x4bef37:c.instructions+=1;goto B4bef37;
case 0x4bef3a:goto L4bef3a;
case 0x4bef3c:c.instructions+=1;goto B4bef3c;
case 0x4bef41:goto L4bef41;
case 0x4bef43:c.instructions+=5;goto B4bef43;
case 0x4bef46:c.instructions+=4;goto B4bef46;
case 0x4bef4a:c.instructions+=3;goto B4bef4a;
case 0x4bef4c:c.instructions+=2;goto B4bef4c;
case 0x4bef54:c.instructions+=1;goto B4bef54;
case 0x4bef56:goto L4bef56;
case 0x4bef58:c.instructions+=4;goto B4bef58;
case 0x4bef5d:c.instructions+=3;goto B4bef5d;
case 0x4bef62:c.instructions+=2;goto B4bef62;
case 0x4bef64:c.instructions+=1;goto B4bef64;
case 0x4bef69:goto L4bef69;
case 0x4bef6f:c.instructions+=2;goto B4bef6f;
case 0x4bef73:c.instructions+=1;goto B4bef73;
case 0x4bef75:goto L4bef75;
case 0x4bef77:goto L4bef77;
case 0x4bef79:c.instructions+=4;goto B4bef79;
case 0x4bef7a:c.instructions+=3;goto B4bef7a;
case 0x4bef7c:c.instructions+=2;goto B4bef7c;
case 0x4bef84:c.instructions+=1;goto B4bef84;
case 0x4bef87:goto L4bef87;
case 0x4bef89:c.instructions+=1;goto B4bef89;
case 0x4bef8e:goto L4bef8e;
case 0x4bef90:c.instructions+=5;goto B4bef90;
case 0x4bef93:c.instructions+=4;goto B4bef93;
case 0x4bef97:c.instructions+=3;goto B4bef97;
case 0x4bef99:c.instructions+=2;goto B4bef99;
case 0x4befa1:c.instructions+=1;goto B4befa1;
case 0x4befa3:goto L4befa3;
case 0x4befa5:c.instructions+=4;goto B4befa5;
case 0x4befaa:c.instructions+=3;goto B4befaa;
case 0x4befaf:c.instructions+=2;goto B4befaf;
case 0x4befb1:c.instructions+=1;goto B4befb1;
case 0x4befb6:goto L4befb6;
case 0x4befbc:c.instructions+=1;goto B4befbc;
case 0x4befbe:goto L4befbe;
case 0x4befc0:goto L4befc0;
case 0x4befc2:c.instructions+=4;goto B4befc2;
case 0x4befc3:c.instructions+=3;goto B4befc3;
case 0x4befc5:c.instructions+=2;goto B4befc5;
case 0x4befcd:c.instructions+=1;goto B4befcd;
case 0x4befd0:goto L4befd0;
case 0x4befd7:c.instructions+=1;goto B4befd7;
case 0x4befd9:goto L4befd9;
case 0x4befde:c.instructions+=3;goto B4befde;
case 0x4befe4:c.instructions+=2;goto B4befe4;
case 0x4befe6:c.instructions+=1;goto B4befe6;
case 0x4befe8:goto L4befe8;
case 0x4befee:c.instructions+=2;goto B4befee;
case 0x4beff0:c.instructions+=1;goto B4beff0;
case 0x4beff2:goto L4beff2;
case 0x4beff4:c.instructions+=1;goto B4beff4;
case 0x4beff9:goto L4beff9;
case 0x4beffb:c.instructions+=2;goto B4beffb;
case 0x4beffe:c.instructions+=1;goto B4beffe;
default:missing_instruction(c.pc);}
B4be003:L4be003:{c.instructions+=2;NFSU2_TR(0x4be003);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be005:{NFSU2_TR(0x4be005);
if(r1(R+518)){{goto L4be015;}}
}
B4be007:L4be007:{c.instructions+=3;NFSU2_TR(0x4be007);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be00d:{NFSU2_TR(0x4be00d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B4be010:{NFSU2_TR(0x4be010);
__builtin_memmove(gp(0x835bf8),(R+0),4);
}
B4be015:L4be015:{c.instructions+=6;NFSU2_TR(0x4be015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be018:{NFSU2_TR(0x4be018);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be01a:{NFSU2_TR(0x4be01a);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be01f:{NFSU2_TR(0x4be01f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be024:{NFSU2_TR(0x4be024);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be025:{NFSU2_TR(0x4be025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be02aull));
TAIL_STATIC(0x537c00u,537);
}
B4be02a:L4be02a:{c.instructions+=3;NFSU2_TR(0x4be02a);
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
B4be02d:{NFSU2_TR(0x4be02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be02e:{NFSU2_TR(0x4be02e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be031:L4be031:{c.instructions+=2;NFSU2_TR(0x4be031);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4be036:{NFSU2_TR(0x4be036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be1ac;}}
}
B4be03c:L4be03c:{c.instructions+=3;NFSU2_TR(0x4be03c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be03e:{NFSU2_TR(0x4be03e);
__builtin_memmove((R+4),(R+24),4);
}
B4be040:{NFSU2_TR(0x4be040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be045ull));
TAIL_STATIC(0x4a20d0u,4a2);
}
B4be045:L4be045:{c.instructions+=2;NFSU2_TR(0x4be045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be046:{NFSU2_TR(0x4be046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be049:L4be049:{c.instructions+=6;NFSU2_TR(0x4be049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be04c:{NFSU2_TR(0x4be04c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be04e:{NFSU2_TR(0x4be04e);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be053:{NFSU2_TR(0x4be053);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be058:{NFSU2_TR(0x4be058);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be059:{NFSU2_TR(0x4be059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be05eull));
TAIL_STATIC(0x537c00u,537);
}
B4be05e:L4be05e:{c.instructions+=3;NFSU2_TR(0x4be05e);
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
B4be061:{NFSU2_TR(0x4be061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be062:{NFSU2_TR(0x4be062);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be065:L4be065:{c.instructions+=2;NFSU2_TR(0x4be065);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be06a:{NFSU2_TR(0x4be06a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4be188;}}
}
B4be070:L4be070:{c.instructions+=1;NFSU2_TR(0x4be070);
if(r1(R+518)){{goto L4be13a;}}
}
B4be076:L4be076:{c.instructions+=2;NFSU2_TR(0x4be076);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be07b:{NFSU2_TR(0x4be07b);
if(r1(R+518)){{goto L4be12d;}}
}
B4be081:L4be081:{c.instructions+=2;NFSU2_TR(0x4be081);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4be086:{NFSU2_TR(0x4be086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be1ac;}}
}
B4be08c:L4be08c:{c.instructions+=2;NFSU2_TR(0x4be08c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be08f:{NFSU2_TR(0x4be08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be094ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4be094:L4be094:{c.instructions+=2;NFSU2_TR(0x4be094);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be09a:{NFSU2_TR(0x4be09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be09full));
TAIL_STATIC(0x538130u,538);
}
B4be09f:L4be09f:{c.instructions+=3;NFSU2_TR(0x4be09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be0a5:{NFSU2_TR(0x4be0a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0a6:{NFSU2_TR(0x4be0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be0abull));
TAIL_STATIC(0x52d100u,52d);
}
B4be0ab:L4be0ab:{c.instructions+=3;NFSU2_TR(0x4be0ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be0ae:{NFSU2_TR(0x4be0ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be0b0:{NFSU2_TR(0x4be0b0);
if(r1(R+518)){{goto L4be0c7;}}
}
B4be0b2:L4be0b2:{c.instructions+=4;NFSU2_TR(0x4be0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be0b5:{NFSU2_TR(0x4be0b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0b6:{NFSU2_TR(0x4be0b6);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0bb:{NFSU2_TR(0x4be0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be0c0ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4be0c0:L4be0c0:{c.instructions+=3;NFSU2_TR(0x4be0c0);
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
B4be0c3:{NFSU2_TR(0x4be0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be0c4:{NFSU2_TR(0x4be0c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be0c7:L4be0c7:{c.instructions+=3;NFSU2_TR(0x4be0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be0cd:{NFSU2_TR(0x4be0cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0ce:{NFSU2_TR(0x4be0ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be0d3ull));
TAIL_STATIC(0x52d100u,52d);
}
B4be0d3:L4be0d3:{c.instructions+=3;NFSU2_TR(0x4be0d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be0d6:{NFSU2_TR(0x4be0d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be0d8:{NFSU2_TR(0x4be0d8);
if(r1(R+518)){{goto L4be0ef;}}
}
B4be0da:L4be0da:{c.instructions+=4;NFSU2_TR(0x4be0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be0dd:{NFSU2_TR(0x4be0dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0de:{NFSU2_TR(0x4be0de);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be0e3:{NFSU2_TR(0x4be0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be0e8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4be0e8:L4be0e8:{c.instructions+=3;NFSU2_TR(0x4be0e8);
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
B4be0eb:{NFSU2_TR(0x4be0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be0ec:{NFSU2_TR(0x4be0ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be0ef:L4be0ef:{c.instructions+=3;NFSU2_TR(0x4be0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be0f5:{NFSU2_TR(0x4be0f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4be0f8:{NFSU2_TR(0x4be0f8);
if(r1(R+518)){{goto L4be118;}}
}
B4be0fa:L4be0fa:{c.instructions+=2;NFSU2_TR(0x4be0fa);
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
B4be0fd:{NFSU2_TR(0x4be0fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be1ac;}}
}
B4be103:L4be103:{c.instructions+=4;NFSU2_TR(0x4be103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be106:{NFSU2_TR(0x4be106);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be107:{NFSU2_TR(0x4be107);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be10c:{NFSU2_TR(0x4be10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be111ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4be111:L4be111:{c.instructions+=3;NFSU2_TR(0x4be111);
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
B4be114:{NFSU2_TR(0x4be114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be115:{NFSU2_TR(0x4be115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be118:L4be118:{c.instructions+=4;NFSU2_TR(0x4be118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be11b:{NFSU2_TR(0x4be11b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be11c:{NFSU2_TR(0x4be11c);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be121:{NFSU2_TR(0x4be121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be126ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4be126:L4be126:{c.instructions+=3;NFSU2_TR(0x4be126);
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
B4be129:{NFSU2_TR(0x4be129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be12a:{NFSU2_TR(0x4be12a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be12d:L4be12d:{c.instructions+=3;NFSU2_TR(0x4be12d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be12f:{NFSU2_TR(0x4be12f);
__builtin_memmove((R+4),(R+24),4);
}
B4be131:{NFSU2_TR(0x4be131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be136ull));
TAIL_STATIC(0x4a20d0u,4a2);
}
B4be136:L4be136:{c.instructions+=2;NFSU2_TR(0x4be136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be137:{NFSU2_TR(0x4be137);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be13a:L4be13a:{c.instructions+=1;NFSU2_TR(0x4be13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be13full));
TAIL_STATIC(0x582b60u,582);
}
B4be13f:L4be13f:{c.instructions+=2;NFSU2_TR(0x4be13f);
__builtin_memmove((R+4),(R+0),4);
}
B4be141:{NFSU2_TR(0x4be141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be146ull));
TAIL_STATIC(0x584f10u,584);
}
B4be146:L4be146:{c.instructions+=3;NFSU2_TR(0x4be146);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be149:{NFSU2_TR(0x4be149);
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
B4be14b:{NFSU2_TR(0x4be14b);
if(r1(R+518)){{goto L4be1ac;}}
}
B4be14d:L4be14d:{c.instructions+=3;NFSU2_TR(0x4be14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be150:{NFSU2_TR(0x4be150);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be151:{NFSU2_TR(0x4be151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be156ull));
TAIL_STATIC(0x5379a0u,537);
}
B4be156:L4be156:{c.instructions+=4;NFSU2_TR(0x4be156);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be15b:{NFSU2_TR(0x4be15b);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be160:{NFSU2_TR(0x4be160);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be164:{NFSU2_TR(0x4be164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be169ull));
TAIL_STATIC(0x537950u,537);
}
B4be169:L4be169:{c.instructions+=4;NFSU2_TR(0x4be169);
__builtin_memmove((R+0),gp(0x835bf8),4);
}
B4be16e:{NFSU2_TR(0x4be16e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be171:{NFSU2_TR(0x4be171);
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
B4be173:{NFSU2_TR(0x4be173);
if(r1(R+518)){{goto L4be1ac;}}
}
B4be175:L4be175:{c.instructions+=3;NFSU2_TR(0x4be175);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be17a:{NFSU2_TR(0x4be17a);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be17c:{NFSU2_TR(0x4be17c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be181ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4be181:L4be181:{c.instructions+=3;NFSU2_TR(0x4be181);
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
B4be184:{NFSU2_TR(0x4be184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be185:{NFSU2_TR(0x4be185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be188:L4be188:{c.instructions+=2;NFSU2_TR(0x4be188);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4be18d:{NFSU2_TR(0x4be18d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be1ac;}}
}
B4be18f:L4be18f:{c.instructions+=5;NFSU2_TR(0x4be18f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be191:{NFSU2_TR(0x4be191);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be196:{NFSU2_TR(0x4be196);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be19b:{NFSU2_TR(0x4be19b);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1a0:{NFSU2_TR(0x4be1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be1a5ull));
TAIL_STATIC(0x537c00u,537);
}
B4be1a5:L4be1a5:{c.instructions+=2;NFSU2_TR(0x4be1a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be1a9:{NFSU2_TR(0x4be1a9);
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
B4be1ac:L4be1ac:{c.instructions+=2;NFSU2_TR(0x4be1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be1ad:{NFSU2_TR(0x4be1ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be1b0:L4be1b0:{c.instructions+=3;NFSU2_TR(0x4be1b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1b1:{NFSU2_TR(0x4be1b1);
__builtin_memmove((R+24),(R+4),4);
}
B4be1b3:{NFSU2_TR(0x4be1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be1b8ull));
TAIL_STATIC(0x4a2170u,4a2);
}
B4be1b8:L4be1b8:{c.instructions+=2;NFSU2_TR(0x4be1b8);
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
B4be1bd:{NFSU2_TR(0x4be1bd);
if(r1(R+518)){{goto L4be1c8;}}
}
B4be1bf:L4be1bf:{c.instructions+=2;NFSU2_TR(0x4be1bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1c0:{NFSU2_TR(0x4be1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be1c5ull));
TAIL_STATIC(0x575630u,575);
}
B4be1c5:L4be1c5:{c.instructions+=1;NFSU2_TR(0x4be1c5);
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
B4be1c8:L4be1c8:{c.instructions+=3;NFSU2_TR(0x4be1c8);
__builtin_memmove((R+0),(R+24),4);
}
B4be1ca:{NFSU2_TR(0x4be1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be1cb:{NFSU2_TR(0x4be1cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be1d0:L4be1d0:{c.instructions+=5;NFSU2_TR(0x4be1d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1d1:{NFSU2_TR(0x4be1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4be1d4:{NFSU2_TR(0x4be1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be1d7:{NFSU2_TR(0x4be1d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be1d9:{NFSU2_TR(0x4be1d9);
if(r1(R+518)){{goto L4be1e0;}}
}
B4be1db:L4be1db:{c.instructions+=2;NFSU2_TR(0x4be1db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4be1de:{NFSU2_TR(0x4be1de);
{goto L4be1e2;}
}
B4be1e0:L4be1e0:{c.instructions+=1;NFSU2_TR(0x4be1e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be1e2:L4be1e2:{c.instructions+=3;NFSU2_TR(0x4be1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be1e5:{NFSU2_TR(0x4be1e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1e6:{NFSU2_TR(0x4be1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be1ebull));
TAIL_STATIC(0x50ca00u,50c);
}
B4be1eb:L4be1eb:{c.instructions+=5;NFSU2_TR(0x4be1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be1ee:{NFSU2_TR(0x4be1ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be1f1:{NFSU2_TR(0x4be1f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be1f3:{NFSU2_TR(0x4be1f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be1f4:{NFSU2_TR(0x4be1f4);
if(r1(R+518)){{goto L4be204;}}
}
B4be1f6:L4be1f6:{c.instructions+=4;NFSU2_TR(0x4be1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be1f9:{NFSU2_TR(0x4be1f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4be1fc:{NFSU2_TR(0x4be1fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be1fd:{NFSU2_TR(0x4be1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be202ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4be202:L4be202:{c.instructions+=2;NFSU2_TR(0x4be202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be203:{NFSU2_TR(0x4be203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be204:L4be204:{c.instructions+=4;NFSU2_TR(0x4be204);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be206:{NFSU2_TR(0x4be206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be209:{NFSU2_TR(0x4be209);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be20a:{NFSU2_TR(0x4be20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be20full));
TAIL_STATIC(0x50ca00u,50c);
}
B4be20f:L4be20f:{c.instructions+=2;NFSU2_TR(0x4be20f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be210:{NFSU2_TR(0x4be210);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be220:L4be220:{c.instructions+=11;NFSU2_TR(0x4be220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be221:{NFSU2_TR(0x4be221);
__builtin_memmove((R+20),(R+16),4);
}
B4be223:{NFSU2_TR(0x4be223);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4be226:{NFSU2_TR(0x4be226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4be22c:{NFSU2_TR(0x4be22c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be22d:{NFSU2_TR(0x4be22d);
__builtin_memmove((R+24),(R+4),4);
}
B4be22f:{NFSU2_TR(0x4be22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be232:{NFSU2_TR(0x4be232);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be235:{NFSU2_TR(0x4be235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be236:{NFSU2_TR(0x4be236);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be237:{NFSU2_TR(0x4be237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be23cull));
TAIL_STATIC(0x51f440u,51f);
}
B4be23c:L4be23c:{c.instructions+=5;NFSU2_TR(0x4be23c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4544ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4be243:{NFSU2_TR(0x4be243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be244:{NFSU2_TR(0x4be244);
u8 U[4];
w4(U+0,u32(0x4ae750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be249:{NFSU2_TR(0x4be249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be24a:{NFSU2_TR(0x4be24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be24full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be24f:L4be24f:{c.instructions+=4;NFSU2_TR(0x4be24f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be252:{NFSU2_TR(0x4be252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be253:{NFSU2_TR(0x4be253);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be258:{NFSU2_TR(0x4be258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be25dull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4be25d:L4be25d:{c.instructions+=2;NFSU2_TR(0x4be25d);
__builtin_memmove((R+4),(R+0),4);
}
B4be25f:{NFSU2_TR(0x4be25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be264ull));
TAIL_STATIC(0x58bc60u,58b);
}
B4be264:L4be264:{c.instructions+=4;NFSU2_TR(0x4be264);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be269:{NFSU2_TR(0x4be269);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be26b:{NFSU2_TR(0x4be26b);
w4(R+4,u32(0x1full));
}
B4be270:{NFSU2_TR(0x4be270);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4be274:L4be274:{c.instructions+=1;NFSU2_TR(0x4be274);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4be276;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4be274u);}goto L4be274;}
}
B4be276:L4be276:{c.instructions+=5;NFSU2_TR(0x4be276);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4be278:{NFSU2_TR(0x4be278);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be27d:{NFSU2_TR(0x4be27d);
u8 U[4];
w4(U+0,u32(0x5566d903ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be282:{NFSU2_TR(0x4be282);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4be283:{NFSU2_TR(0x4be283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be288ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be288:L4be288:{c.instructions+=6;NFSU2_TR(0x4be288);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be28b:{NFSU2_TR(0x4be28b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be28c:{NFSU2_TR(0x4be28c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4be290:{NFSU2_TR(0x4be290);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be295:{NFSU2_TR(0x4be295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be296:{NFSU2_TR(0x4be296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be29bull));
TAIL_STATIC(0x50c960u,50c);
}
B4be29b:L4be29b:{c.instructions+=6;NFSU2_TR(0x4be29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be29e:{NFSU2_TR(0x4be29e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4be2a2:{NFSU2_TR(0x4be2a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2a3:{NFSU2_TR(0x4be2a3);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2a8:{NFSU2_TR(0x4be2a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2a9:{NFSU2_TR(0x4be2a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be2aeull));
TAIL_STATIC(0x558310u,558);
}
B4be2ae:L4be2ae:{c.instructions+=7;NFSU2_TR(0x4be2ae);
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
B4be2b1:{NFSU2_TR(0x4be2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be2b2:{NFSU2_TR(0x4be2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be2b5:{NFSU2_TR(0x4be2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be2b6:{NFSU2_TR(0x4be2b6);
__builtin_memmove((R+16),(R+20),4);
}
B4be2b8:{NFSU2_TR(0x4be2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4be2b9:{NFSU2_TR(0x4be2b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be2c0:L4be2c0:{c.instructions+=12;NFSU2_TR(0x4be2c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2c2:{NFSU2_TR(0x4be2c2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2c7:{NFSU2_TR(0x4be2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be2cd:{NFSU2_TR(0x4be2cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2ce:{NFSU2_TR(0x4be2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be2d5:{NFSU2_TR(0x4be2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2d6:{NFSU2_TR(0x4be2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be2da:{NFSU2_TR(0x4be2da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2db:{NFSU2_TR(0x4be2db);
__builtin_memmove((R+24),(R+4),4);
}
B4be2dd:{NFSU2_TR(0x4be2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be2de:{NFSU2_TR(0x4be2de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be2e2:{NFSU2_TR(0x4be2e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be2e7ull));
TAIL_STATIC(0x551de0u,551);
}
B4be2e7:L4be2e7:{c.instructions+=13;NFSU2_TR(0x4be2e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be2e9:{NFSU2_TR(0x4be2e9);
u8 U[4];
w4(U+0,u32(0x794f9cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4be2ef:{NFSU2_TR(0x4be2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be2f2:{NFSU2_TR(0x4be2f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4be2f5:{NFSU2_TR(0x4be2f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be2f8:{NFSU2_TR(0x4be2f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4be2fa:{NFSU2_TR(0x4be2fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4be300:{NFSU2_TR(0x4be300);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x165ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4be306:{NFSU2_TR(0x4be306);
__builtin_memmove((R+8),gp(0x835fb8),4);
}
B4be30c:{NFSU2_TR(0x4be30c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be30d:{NFSU2_TR(0x4be30d);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be312:{NFSU2_TR(0x4be312);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be316:{NFSU2_TR(0x4be316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be31bull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4be31b:L4be31b:{c.instructions+=2;NFSU2_TR(0x4be31b);
__builtin_memmove((R+4),(R+0),4);
}
B4be31d:{NFSU2_TR(0x4be31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be322ull));
TAIL_STATIC(0x5847a0u,584);
}
B4be322:L4be322:{c.instructions+=6;NFSU2_TR(0x4be322);
u8 U[4];
w4(U+0,u32(0x4f876b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be327:{NFSU2_TR(0x4be327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be32d:{NFSU2_TR(0x4be32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be330:{NFSU2_TR(0x4be330);
u8 U[4];
w4(U+0,u32(0xda473d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be335:{NFSU2_TR(0x4be335);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be336:{NFSU2_TR(0x4be336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be33bull));
TAIL_STATIC(0x537a10u,537);
}
B4be33b:L4be33b:{c.instructions+=3;NFSU2_TR(0x4be33b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be33e:{NFSU2_TR(0x4be33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be33f:{NFSU2_TR(0x4be33f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be344ull));
TAIL_STATIC(0x50c900u,50c);
}
B4be344:L4be344:{c.instructions+=6;NFSU2_TR(0x4be344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be347:{NFSU2_TR(0x4be347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be34a:{NFSU2_TR(0x4be34a);
u8 U[4];
w4(U+0,u32(0x308db484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be34f:{NFSU2_TR(0x4be34f);
u8 U[4];
w4(U+0,u32(0xda473d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be354:{NFSU2_TR(0x4be354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be355:{NFSU2_TR(0x4be355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be35aull));
TAIL_STATIC(0x537a10u,537);
}
B4be35a:L4be35a:{c.instructions+=3;NFSU2_TR(0x4be35a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be35d:{NFSU2_TR(0x4be35d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be35e:{NFSU2_TR(0x4be35e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be363ull));
TAIL_STATIC(0x50c900u,50c);
}
B4be363:L4be363:{c.instructions+=6;NFSU2_TR(0x4be363);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be366:{NFSU2_TR(0x4be366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be369:{NFSU2_TR(0x4be369);
u8 U[4];
w4(U+0,u32(0x2c119933ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be36e:{NFSU2_TR(0x4be36e);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be373:{NFSU2_TR(0x4be373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be374:{NFSU2_TR(0x4be374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be379ull));
TAIL_STATIC(0x537a10u,537);
}
B4be379:L4be379:{c.instructions+=3;NFSU2_TR(0x4be379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be37c:{NFSU2_TR(0x4be37c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be37d:{NFSU2_TR(0x4be37d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be382ull));
TAIL_STATIC(0x50c900u,50c);
}
B4be382:L4be382:{c.instructions+=3;NFSU2_TR(0x4be382);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be385:{NFSU2_TR(0x4be385);
__builtin_memmove((R+4),(R+24),4);
}
B4be387:{NFSU2_TR(0x4be387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be38cull));
TAIL_STATIC(0x4a2680u,4a2);
}
B4be38c:L4be38c:{c.instructions+=6;NFSU2_TR(0x4be38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be390:{NFSU2_TR(0x4be390);
__builtin_memmove((R+0),(R+24),4);
}
B4be392:{NFSU2_TR(0x4be392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be393:{NFSU2_TR(0x4be393);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be39a:{NFSU2_TR(0x4be39a);
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
B4be39d:{NFSU2_TR(0x4be39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be3a0:L4be3a0:{c.instructions+=15;NFSU2_TR(0x4be3a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3a2:{NFSU2_TR(0x4be3a2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3a7:{NFSU2_TR(0x4be3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be3ad:{NFSU2_TR(0x4be3ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3ae:{NFSU2_TR(0x4be3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be3b5:{NFSU2_TR(0x4be3b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3b6:{NFSU2_TR(0x4be3b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3b7:{NFSU2_TR(0x4be3b7);
__builtin_memmove((R+24),(R+4),4);
}
B4be3b9:{NFSU2_TR(0x4be3b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be3bd:{NFSU2_TR(0x4be3bd);
u8 U[4];
w4(U+0,u32(0x794f9cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4be3c3:{NFSU2_TR(0x4be3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be3c6:{NFSU2_TR(0x4be3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be3c8:{NFSU2_TR(0x4be3c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4be3d0:{NFSU2_TR(0x4be3d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x165ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be3d7:{NFSU2_TR(0x4be3d7);
if(r1(R+518)){{goto L4be3e9;}}
}
B4be3d9:L4be3d9:{c.instructions+=2;NFSU2_TR(0x4be3d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be3da:{NFSU2_TR(0x4be3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be3dfull));
TAIL_STATIC(0x540a60u,540);
}
B4be3df:L4be3df:{c.instructions+=2;NFSU2_TR(0x4be3df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be3e2:{NFSU2_TR(0x4be3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4be3e9:L4be3e9:{c.instructions+=1;NFSU2_TR(0x4be3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be3eeull));
TAIL_STATIC(0x582b60u,582);
}
B4be3ee:L4be3ee:{c.instructions+=2;NFSU2_TR(0x4be3ee);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
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
B4be3f5:{NFSU2_TR(0x4be3f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be41a;}}
}
B4be3f7:L4be3f7:{c.instructions+=1;NFSU2_TR(0x4be3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be3fcull));
TAIL_STATIC(0x582b60u,582);
}
B4be3fc:L4be3fc:{c.instructions+=3;NFSU2_TR(0x4be3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be402:{NFSU2_TR(0x4be402);
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
B4be404:{NFSU2_TR(0x4be404);
if(r1(R+518)){{goto L4be41a;}}
}
B4be406:L4be406:{c.instructions+=1;NFSU2_TR(0x4be406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be40bull));
TAIL_STATIC(0x582b60u,582);
}
B4be40b:L4be40b:{c.instructions+=3;NFSU2_TR(0x4be40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be411:{NFSU2_TR(0x4be411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be412:{NFSU2_TR(0x4be412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be417ull));
TAIL_STATIC(0x73ea00u,73e);
}
B4be417:L4be417:{c.instructions+=1;NFSU2_TR(0x4be417);
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
B4be41a:L4be41a:{c.instructions+=3;NFSU2_TR(0x4be41a);
__builtin_memmove((R+4),(R+24),4);
}
B4be41c:{NFSU2_TR(0x4be41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4be424:{NFSU2_TR(0x4be424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be429ull));
TAIL_STATIC(0x510d40u,510);
}
B4be429:L4be429:{c.instructions+=5;NFSU2_TR(0x4be429);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be42d:{NFSU2_TR(0x4be42d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be42e:{NFSU2_TR(0x4be42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be435:{NFSU2_TR(0x4be435);
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
B4be438:{NFSU2_TR(0x4be438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be440:L4be440:{c.instructions+=10;NFSU2_TR(0x4be440);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be441:{NFSU2_TR(0x4be441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be442:{NFSU2_TR(0x4be442);
__builtin_memmove((R+24),(R+4),4);
}
B4be444:{NFSU2_TR(0x4be444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be447:{NFSU2_TR(0x4be447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be44d:{NFSU2_TR(0x4be44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be453:{NFSU2_TR(0x4be453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be454:{NFSU2_TR(0x4be454);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be456:{NFSU2_TR(0x4be456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be457:{NFSU2_TR(0x4be457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be45cull));
TAIL_STATIC(0x511e60u,511);
}
B4be45c:L4be45c:{c.instructions+=5;NFSU2_TR(0x4be45c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be45e:{NFSU2_TR(0x4be45e);
__builtin_memmove((R+28),(R+0),4);
}
B4be460:{NFSU2_TR(0x4be460);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be462:{NFSU2_TR(0x4be462);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be463:{NFSU2_TR(0x4be463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be468ull));
TAIL_STATIC(0x4901d0u,490);
}
B4be468:L4be468:{c.instructions+=3;NFSU2_TR(0x4be468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be46b:{NFSU2_TR(0x4be46b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be46d:{NFSU2_TR(0x4be46d);
if(r1(R+518)){{goto L4be481;}}
}
B4be46f:L4be46f:{c.instructions+=4;NFSU2_TR(0x4be46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be475:{NFSU2_TR(0x4be475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be476:{NFSU2_TR(0x4be476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be477:{NFSU2_TR(0x4be477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be47cull));
TAIL_STATIC(0x50c990u,50c);
}
B4be47c:L4be47c:{c.instructions+=2;NFSU2_TR(0x4be47c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be47f:{NFSU2_TR(0x4be47f);
{goto L4be49b;}
}
B4be481:L4be481:{c.instructions+=2;NFSU2_TR(0x4be481);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be486:{NFSU2_TR(0x4be486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be48bull));
TAIL_STATIC(0x505450u,505);
}
B4be48b:L4be48b:{c.instructions+=4;NFSU2_TR(0x4be48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be48c:{NFSU2_TR(0x4be48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be492:{NFSU2_TR(0x4be492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be493:{NFSU2_TR(0x4be493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be498ull));
TAIL_STATIC(0x50c990u,50c);
}
B4be498:L4be498:{c.instructions+=1;NFSU2_TR(0x4be498);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be49b:L4be49b:{c.instructions+=6;NFSU2_TR(0x4be49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be49e:{NFSU2_TR(0x4be49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be4a4:{NFSU2_TR(0x4be4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be4aa:{NFSU2_TR(0x4be4aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4ac:{NFSU2_TR(0x4be4ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4ad:{NFSU2_TR(0x4be4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be4b2ull));
TAIL_STATIC(0x511e60u,511);
}
B4be4b2:L4be4b2:{c.instructions+=5;NFSU2_TR(0x4be4b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4b4:{NFSU2_TR(0x4be4b4);
__builtin_memmove((R+28),(R+0),4);
}
B4be4b6:{NFSU2_TR(0x4be4b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4b8:{NFSU2_TR(0x4be4b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4b9:{NFSU2_TR(0x4be4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be4beull));
TAIL_STATIC(0x4901d0u,490);
}
B4be4be:L4be4be:{c.instructions+=3;NFSU2_TR(0x4be4be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be4c1:{NFSU2_TR(0x4be4c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be4c3:{NFSU2_TR(0x4be4c3);
if(r1(R+518)){{goto L4be4d7;}}
}
B4be4c5:L4be4c5:{c.instructions+=4;NFSU2_TR(0x4be4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be4cb:{NFSU2_TR(0x4be4cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4cc:{NFSU2_TR(0x4be4cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4cd:{NFSU2_TR(0x4be4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be4d2ull));
TAIL_STATIC(0x50c990u,50c);
}
B4be4d2:L4be4d2:{c.instructions+=2;NFSU2_TR(0x4be4d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be4d5:{NFSU2_TR(0x4be4d5);
{goto L4be4f1;}
}
B4be4d7:L4be4d7:{c.instructions+=2;NFSU2_TR(0x4be4d7);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4dc:{NFSU2_TR(0x4be4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be4e1ull));
TAIL_STATIC(0x505450u,505);
}
B4be4e1:L4be4e1:{c.instructions+=4;NFSU2_TR(0x4be4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be4e7:{NFSU2_TR(0x4be4e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4e8:{NFSU2_TR(0x4be4e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4e9:{NFSU2_TR(0x4be4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be4eeull));
TAIL_STATIC(0x50c990u,50c);
}
B4be4ee:L4be4ee:{c.instructions+=1;NFSU2_TR(0x4be4ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be4f1:L4be4f1:{c.instructions+=7;NFSU2_TR(0x4be4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4be4f4:{NFSU2_TR(0x4be4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be4f7:{NFSU2_TR(0x4be4f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4f8:{NFSU2_TR(0x4be4f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4f9:{NFSU2_TR(0x4be4f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be4fb:{NFSU2_TR(0x4be4fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be4fe:{NFSU2_TR(0x4be4fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be503ull));
TAIL_STATIC(0x538080u,538);
}
B4be503:L4be503:{c.instructions+=3;NFSU2_TR(0x4be503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4be506:{NFSU2_TR(0x4be506);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be50b:{NFSU2_TR(0x4be50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be510ull));
TAIL_STATIC(0x505450u,505);
}
B4be510:L4be510:{c.instructions+=3;NFSU2_TR(0x4be510);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be511:{NFSU2_TR(0x4be511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be512:{NFSU2_TR(0x4be512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be517ull));
TAIL_STATIC(0x5379c0u,537);
}
B4be517:L4be517:{c.instructions+=4;NFSU2_TR(0x4be517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4be51a:{NFSU2_TR(0x4be51a);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be51f:{NFSU2_TR(0x4be51f);
__builtin_memmove((R+20),(R+0),4);
}
B4be521:{NFSU2_TR(0x4be521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be526ull));
TAIL_STATIC(0x505450u,505);
}
B4be526:L4be526:{c.instructions+=3;NFSU2_TR(0x4be526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be527:{NFSU2_TR(0x4be527);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be528:{NFSU2_TR(0x4be528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be52dull));
TAIL_STATIC(0x5379c0u,537);
}
B4be52d:L4be52d:{c.instructions+=5;NFSU2_TR(0x4be52d);
__builtin_memmove((R+28),(R+0),4);
}
B4be52f:{NFSU2_TR(0x4be52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be532:{NFSU2_TR(0x4be532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4be535:{NFSU2_TR(0x4be535);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be537:{NFSU2_TR(0x4be537);
if(r1(R+518)){{goto L4be53e;}}
}
B4be539:L4be539:{c.instructions+=2;NFSU2_TR(0x4be539);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4be53c:{NFSU2_TR(0x4be53c);
{goto L4be540;}
}
B4be53e:L4be53e:{c.instructions+=1;NFSU2_TR(0x4be53e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be540:L4be540:{c.instructions+=3;NFSU2_TR(0x4be540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be543:{NFSU2_TR(0x4be543);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4be545:{NFSU2_TR(0x4be545);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be57d;}}
}
B4be547:L4be547:{c.instructions+=3;NFSU2_TR(0x4be547);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be54d:{NFSU2_TR(0x4be54d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be54f:{NFSU2_TR(0x4be54f);
if(r1(R+518)){{goto L4be658;}}
}
B4be555:L4be555:{c.instructions+=4;NFSU2_TR(0x4be555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be558:{NFSU2_TR(0x4be558);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be55d:{NFSU2_TR(0x4be55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be55e:{NFSU2_TR(0x4be55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be563ull));
TAIL_STATIC(0x5379c0u,537);
}
B4be563:L4be563:{c.instructions+=2;NFSU2_TR(0x4be563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be564:{NFSU2_TR(0x4be564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be569ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4be569:L4be569:{c.instructions+=7;NFSU2_TR(0x4be569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be56c:{NFSU2_TR(0x4be56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be56d:{NFSU2_TR(0x4be56d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be574:{NFSU2_TR(0x4be574);
__builtin_memmove((R+4),(R+24),4);
}
B4be576:{NFSU2_TR(0x4be576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be577:{NFSU2_TR(0x4be577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4be578:{NFSU2_TR(0x4be578);
TAIL_STATIC(0x497cd0u,497);
}
B4be57d:L4be57d:{c.instructions+=3;NFSU2_TR(0x4be57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be580:{NFSU2_TR(0x4be580);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be582:{NFSU2_TR(0x4be582);
if(r1(R+518)){{goto L4be589;}}
}
B4be584:L4be584:{c.instructions+=2;NFSU2_TR(0x4be584);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4be587:{NFSU2_TR(0x4be587);
{goto L4be58b;}
}
B4be589:L4be589:{c.instructions+=1;NFSU2_TR(0x4be589);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be58b:L4be58b:{c.instructions+=2;NFSU2_TR(0x4be58b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4be58d:{NFSU2_TR(0x4be58d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be5c5;}}
}
B4be58f:L4be58f:{c.instructions+=3;NFSU2_TR(0x4be58f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be595:{NFSU2_TR(0x4be595);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be597:{NFSU2_TR(0x4be597);
if(r1(R+518)){{goto L4be658;}}
}
B4be59d:L4be59d:{c.instructions+=4;NFSU2_TR(0x4be59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be5a0:{NFSU2_TR(0x4be5a0);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5a5:{NFSU2_TR(0x4be5a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5a6:{NFSU2_TR(0x4be5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be5abull));
TAIL_STATIC(0x5379c0u,537);
}
B4be5ab:L4be5ab:{c.instructions+=2;NFSU2_TR(0x4be5ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5ac:{NFSU2_TR(0x4be5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be5b1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4be5b1:L4be5b1:{c.instructions+=7;NFSU2_TR(0x4be5b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be5b4:{NFSU2_TR(0x4be5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be5b5:{NFSU2_TR(0x4be5b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be5bc:{NFSU2_TR(0x4be5bc);
__builtin_memmove((R+4),(R+24),4);
}
B4be5be:{NFSU2_TR(0x4be5be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be5bf:{NFSU2_TR(0x4be5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4be5c0:{NFSU2_TR(0x4be5c0);
TAIL_STATIC(0x497cd0u,497);
}
B4be5c5:L4be5c5:{c.instructions+=3;NFSU2_TR(0x4be5c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be5cb:{NFSU2_TR(0x4be5cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be5cd:{NFSU2_TR(0x4be5cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be5ec;}}
}
B4be5cf:L4be5cf:{c.instructions+=4;NFSU2_TR(0x4be5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be5d2:{NFSU2_TR(0x4be5d2);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5d7:{NFSU2_TR(0x4be5d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5d8:{NFSU2_TR(0x4be5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be5ddull));
TAIL_STATIC(0x5379c0u,537);
}
B4be5dd:L4be5dd:{c.instructions+=2;NFSU2_TR(0x4be5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5de:{NFSU2_TR(0x4be5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be5e3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4be5e3:L4be5e3:{c.instructions+=2;NFSU2_TR(0x4be5e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be5ea:{NFSU2_TR(0x4be5ea);
{goto L4be611;}
}
B4be5ec:L4be5ec:{c.instructions+=3;NFSU2_TR(0x4be5ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be5f2:{NFSU2_TR(0x4be5f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be5f4:{NFSU2_TR(0x4be5f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be614;}}
}
B4be5f6:L4be5f6:{c.instructions+=4;NFSU2_TR(0x4be5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be5f9:{NFSU2_TR(0x4be5f9);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5fe:{NFSU2_TR(0x4be5fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be5ff:{NFSU2_TR(0x4be5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be604ull));
TAIL_STATIC(0x5379c0u,537);
}
B4be604:L4be604:{c.instructions+=2;NFSU2_TR(0x4be604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be605:{NFSU2_TR(0x4be605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be60aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4be60a:L4be60a:{c.instructions+=1;NFSU2_TR(0x4be60a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be611:L4be611:{c.instructions+=1;NFSU2_TR(0x4be611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be614:L4be614:{c.instructions+=3;NFSU2_TR(0x4be614);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be619:{NFSU2_TR(0x4be619);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be61a:{NFSU2_TR(0x4be61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be61full));
TAIL_STATIC(0x51d040u,51d);
}
B4be61f:L4be61f:{c.instructions+=3;NFSU2_TR(0x4be61f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be622:{NFSU2_TR(0x4be622);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be624:{NFSU2_TR(0x4be624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be636;}}
}
B4be626:L4be626:{c.instructions+=4;NFSU2_TR(0x4be626);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be628:{NFSU2_TR(0x4be628);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be62d:{NFSU2_TR(0x4be62d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be62e:{NFSU2_TR(0x4be62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be633ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4be633:L4be633:{c.instructions+=1;NFSU2_TR(0x4be633);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be636:L4be636:{c.instructions+=3;NFSU2_TR(0x4be636);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be63b:{NFSU2_TR(0x4be63b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be63c:{NFSU2_TR(0x4be63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be641ull));
TAIL_STATIC(0x51d040u,51d);
}
B4be641:L4be641:{c.instructions+=3;NFSU2_TR(0x4be641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4be644:{NFSU2_TR(0x4be644);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be646:{NFSU2_TR(0x4be646);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be658;}}
}
B4be648:L4be648:{c.instructions+=4;NFSU2_TR(0x4be648);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be64a:{NFSU2_TR(0x4be64a);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be64f:{NFSU2_TR(0x4be64f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be650:{NFSU2_TR(0x4be650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be655ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4be655:L4be655:{c.instructions+=1;NFSU2_TR(0x4be655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4be658:L4be658:{c.instructions+=5;NFSU2_TR(0x4be658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be659:{NFSU2_TR(0x4be659);
__builtin_memmove((R+4),(R+24),4);
}
B4be65b:{NFSU2_TR(0x4be65b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be65c:{NFSU2_TR(0x4be65c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4be65d:{NFSU2_TR(0x4be65d);
TAIL_STATIC(0x497cd0u,497);
}
B4be670:L4be670:{c.instructions+=5;NFSU2_TR(0x4be670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be671:{NFSU2_TR(0x4be671);
__builtin_memmove((R+24),(R+4),4);
}
B4be673:{NFSU2_TR(0x4be673);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4be679:{NFSU2_TR(0x4be679);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be67b:{NFSU2_TR(0x4be67b);
if(r1(R+518)){{goto L4be681;}}
}
B4be67d:L4be67d:{c.instructions+=3;NFSU2_TR(0x4be67d);
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
B4be67f:{NFSU2_TR(0x4be67f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be680:{NFSU2_TR(0x4be680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be681:L4be681:{c.instructions+=7;NFSU2_TR(0x4be681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be682:{NFSU2_TR(0x4be682);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be683:{NFSU2_TR(0x4be683);
u8 U[4];
w4(U+0,u32(0x4be8e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be688:{NFSU2_TR(0x4be688);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be68e:{NFSU2_TR(0x4be68e);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be693:{NFSU2_TR(0x4be693);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be694:{NFSU2_TR(0x4be694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be699ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4be699:L4be699:{c.instructions+=2;NFSU2_TR(0x4be699);
__builtin_memmove((R+4),(R+0),4);
}
B4be69b:{NFSU2_TR(0x4be69b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be6a0ull));
TAIL_STATIC(0x58bbb0u,58b);
}
B4be6a0:L4be6a0:{c.instructions+=3;NFSU2_TR(0x4be6a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4be6a2:{NFSU2_TR(0x4be6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be6a8:{NFSU2_TR(0x4be6a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4be6de;}}
}
B4be6aa:L4be6aa:{c.instructions+=3;NFSU2_TR(0x4be6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4be6ad:{NFSU2_TR(0x4be6ad);
u8 U[4];
w4(U+0,u32(0xb6aae6a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6b2:{NFSU2_TR(0x4be6b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be6b7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be6b7:L4be6b7:{c.instructions+=7;NFSU2_TR(0x4be6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6b8:{NFSU2_TR(0x4be6b8);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6bd:{NFSU2_TR(0x4be6bd);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6c2:{NFSU2_TR(0x4be6c2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6c7:{NFSU2_TR(0x4be6c7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6cc:{NFSU2_TR(0x4be6cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6cd:{NFSU2_TR(0x4be6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be6d2ull));
TAIL_STATIC(0x558540u,558);
}
B4be6d2:L4be6d2:{c.instructions+=5;NFSU2_TR(0x4be6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be6d8:{NFSU2_TR(0x4be6d8);
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
B4be6db:{NFSU2_TR(0x4be6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be6dc:{NFSU2_TR(0x4be6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be6dd:{NFSU2_TR(0x4be6dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be6de:L4be6de:{c.instructions+=4;NFSU2_TR(0x4be6de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6df:{NFSU2_TR(0x4be6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be6e2:{NFSU2_TR(0x4be6e2);
__builtin_memmove((R+4),(R+28),4);
}
B4be6e4:{NFSU2_TR(0x4be6e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be6e9ull));
TAIL_STATIC(0x5851b0u,585);
}
B4be6e9:L4be6e9:{c.instructions+=5;NFSU2_TR(0x4be6e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6ea:{NFSU2_TR(0x4be6ea);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6ef:{NFSU2_TR(0x4be6ef);
u8 U[4];
w4(U+0,u32(0xbc790617ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6f4:{NFSU2_TR(0x4be6f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be6f5:{NFSU2_TR(0x4be6f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be6faull));
TAIL_STATIC(0x537b80u,537);
}
B4be6fa:L4be6fa:{c.instructions+=4;NFSU2_TR(0x4be6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be6fd:{NFSU2_TR(0x4be6fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4be700:{NFSU2_TR(0x4be700);
__builtin_memmove((R+4),(R+28),4);
}
B4be702:{NFSU2_TR(0x4be702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be707ull));
TAIL_STATIC(0x583160u,583);
}
B4be707:L4be707:{c.instructions+=5;NFSU2_TR(0x4be707);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be708:{NFSU2_TR(0x4be708);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be70d:{NFSU2_TR(0x4be70d);
u8 U[4];
w4(U+0,u32(0xbc790618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be712:{NFSU2_TR(0x4be712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be713:{NFSU2_TR(0x4be713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be718ull));
TAIL_STATIC(0x537b80u,537);
}
B4be718:L4be718:{c.instructions+=4;NFSU2_TR(0x4be718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be71b:{NFSU2_TR(0x4be71b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4be71e:{NFSU2_TR(0x4be71e);
__builtin_memmove((R+4),(R+28),4);
}
B4be720:{NFSU2_TR(0x4be720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be725ull));
TAIL_STATIC(0x5831a0u,583);
}
B4be725:L4be725:{c.instructions+=5;NFSU2_TR(0x4be725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be726:{NFSU2_TR(0x4be726);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be72b:{NFSU2_TR(0x4be72b);
u8 U[4];
w4(U+0,u32(0xbc790619ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be730:{NFSU2_TR(0x4be730);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be731:{NFSU2_TR(0x4be731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be736ull));
TAIL_STATIC(0x537b80u,537);
}
B4be736:L4be736:{c.instructions+=4;NFSU2_TR(0x4be736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be739:{NFSU2_TR(0x4be739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4be73c:{NFSU2_TR(0x4be73c);
__builtin_memmove((R+4),(R+28),4);
}
B4be73e:{NFSU2_TR(0x4be73e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be743ull));
TAIL_STATIC(0x585230u,585);
}
B4be743:L4be743:{c.instructions+=6;NFSU2_TR(0x4be743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be746:{NFSU2_TR(0x4be746);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be749:{NFSU2_TR(0x4be749);
u8 U[4];
w4(U+0,u32(0x794fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be74e:{NFSU2_TR(0x4be74e);
u8 U[4];
w4(U+0,u32(0xbc79061aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be753:{NFSU2_TR(0x4be753);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be754:{NFSU2_TR(0x4be754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be759ull));
TAIL_STATIC(0x537b80u,537);
}
B4be759:L4be759:{c.instructions+=4;NFSU2_TR(0x4be759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be75c:{NFSU2_TR(0x4be75c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be75f:{NFSU2_TR(0x4be75f);
__builtin_memmove((R+4),(R+28),4);
}
B4be761:{NFSU2_TR(0x4be761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be766ull));
TAIL_STATIC(0x5852a0u,585);
}
B4be766:L4be766:{c.instructions+=6;NFSU2_TR(0x4be766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be769:{NFSU2_TR(0x4be769);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be76c:{NFSU2_TR(0x4be76c);
u8 U[4];
w4(U+0,u32(0x794fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be771:{NFSU2_TR(0x4be771);
u8 U[4];
w4(U+0,u32(0xbc79061bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be776:{NFSU2_TR(0x4be776);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be777:{NFSU2_TR(0x4be777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be77cull));
TAIL_STATIC(0x537b80u,537);
}
B4be77c:L4be77c:{c.instructions+=4;NFSU2_TR(0x4be77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be77f:{NFSU2_TR(0x4be77f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be782:{NFSU2_TR(0x4be782);
__builtin_memmove((R+4),(R+28),4);
}
B4be784:{NFSU2_TR(0x4be784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be789ull));
TAIL_STATIC(0x585320u,585);
}
B4be789:L4be789:{c.instructions+=6;NFSU2_TR(0x4be789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be78c:{NFSU2_TR(0x4be78c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be78f:{NFSU2_TR(0x4be78f);
u8 U[4];
w4(U+0,u32(0x794fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be794:{NFSU2_TR(0x4be794);
u8 U[4];
w4(U+0,u32(0xbc79061cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be799:{NFSU2_TR(0x4be799);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be79a:{NFSU2_TR(0x4be79a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be79full));
TAIL_STATIC(0x537b80u,537);
}
B4be79f:L4be79f:{c.instructions+=3;NFSU2_TR(0x4be79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be7a2:{NFSU2_TR(0x4be7a2);
u8 U[4];
w4(U+0,u32(0x5eb0abe1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7a7:{NFSU2_TR(0x4be7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7acull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be7ac:L4be7ac:{c.instructions+=4;NFSU2_TR(0x4be7ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4be7af:{NFSU2_TR(0x4be7af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7b0:{NFSU2_TR(0x4be7b0);
__builtin_memmove((R+4),(R+28),4);
}
B4be7b2:{NFSU2_TR(0x4be7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7b7ull));
TAIL_STATIC(0x5853a0u,585);
}
B4be7b7:L4be7b7:{c.instructions+=5;NFSU2_TR(0x4be7b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7b8:{NFSU2_TR(0x4be7b8);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7bd:{NFSU2_TR(0x4be7bd);
u8 U[4];
w4(U+0,u32(0xbc79061eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7c2:{NFSU2_TR(0x4be7c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7c3:{NFSU2_TR(0x4be7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7c8ull));
TAIL_STATIC(0x537b80u,537);
}
B4be7c8:L4be7c8:{c.instructions+=3;NFSU2_TR(0x4be7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be7cb:{NFSU2_TR(0x4be7cb);
u8 U[4];
w4(U+0,u32(0x5eb0abe1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7d0:{NFSU2_TR(0x4be7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7d5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be7d5:L4be7d5:{c.instructions+=4;NFSU2_TR(0x4be7d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4be7d8:{NFSU2_TR(0x4be7d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7d9:{NFSU2_TR(0x4be7d9);
__builtin_memmove((R+4),(R+28),4);
}
B4be7db:{NFSU2_TR(0x4be7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7e0ull));
TAIL_STATIC(0x5853f0u,585);
}
B4be7e0:L4be7e0:{c.instructions+=5;NFSU2_TR(0x4be7e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7e1:{NFSU2_TR(0x4be7e1);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7e6:{NFSU2_TR(0x4be7e6);
u8 U[4];
w4(U+0,u32(0xbc79061full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7eb:{NFSU2_TR(0x4be7eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7ec:{NFSU2_TR(0x4be7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be7f1ull));
TAIL_STATIC(0x537b80u,537);
}
B4be7f1:L4be7f1:{c.instructions+=7;NFSU2_TR(0x4be7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be7f7:{NFSU2_TR(0x4be7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be7fa:{NFSU2_TR(0x4be7fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be7fb:{NFSU2_TR(0x4be7fb);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be800:{NFSU2_TR(0x4be800);
u8 U[4];
w4(U+0,u32(0x4b99c928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be805:{NFSU2_TR(0x4be805);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be806:{NFSU2_TR(0x4be806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be80bull));
TAIL_STATIC(0x537b80u,537);
}
B4be80b:L4be80b:{c.instructions+=5;NFSU2_TR(0x4be80b);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4be810:{NFSU2_TR(0x4be810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be813:{NFSU2_TR(0x4be813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4be816:{NFSU2_TR(0x4be816);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4be818:{NFSU2_TR(0x4be818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be865;}}
}
B4be81a:L4be81a:{c.instructions+=2;NFSU2_TR(0x4be81a);
u8 U[4];
w4(U+0,u32(0xe74b7e13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be81f:{NFSU2_TR(0x4be81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be824ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be824:L4be824:{c.instructions+=4;NFSU2_TR(0x4be824);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be827:{NFSU2_TR(0x4be827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be828:{NFSU2_TR(0x4be828);
__builtin_memmove((R+4),(R+28),4);
}
B4be82a:{NFSU2_TR(0x4be82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be82full));
TAIL_STATIC(0x5831e0u,583);
}
B4be82f:L4be82f:{c.instructions+=7;NFSU2_TR(0x4be82f);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4be835:{NFSU2_TR(0x4be835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be838:{NFSU2_TR(0x4be838);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be83b:{NFSU2_TR(0x4be83b);
u8 U[4];
w4(U+0,u32(0x794fccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be840:{NFSU2_TR(0x4be840);
u8 U[4];
w4(U+0,u32(0xbc79061dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be845:{NFSU2_TR(0x4be845);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be846:{NFSU2_TR(0x4be846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be84bull));
TAIL_STATIC(0x537b80u,537);
}
B4be84b:L4be84b:{c.instructions+=4;NFSU2_TR(0x4be84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be84e:{NFSU2_TR(0x4be84e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4be851:{NFSU2_TR(0x4be851);
__builtin_memmove((R+4),(R+28),4);
}
B4be853:{NFSU2_TR(0x4be853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be858ull));
TAIL_STATIC(0x583200u,583);
}
B4be858:L4be858:{c.instructions+=4;NFSU2_TR(0x4be858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be85b:{NFSU2_TR(0x4be85b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be85e:{NFSU2_TR(0x4be85e);
u8 U[4];
w4(U+0,u32(0x794fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be863:{NFSU2_TR(0x4be863);
{goto L4be8a6;}
}
B4be865:L4be865:{c.instructions+=2;NFSU2_TR(0x4be865);
__builtin_memmove((R+4),(R+28),4);
}
B4be867:{NFSU2_TR(0x4be867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be86cull));
TAIL_STATIC(0x5831e0u,583);
}
B4be86c:L4be86c:{c.instructions+=7;NFSU2_TR(0x4be86c);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4be872:{NFSU2_TR(0x4be872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be875:{NFSU2_TR(0x4be875);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be878:{NFSU2_TR(0x4be878);
u8 U[4];
w4(U+0,u32(0x794fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be87d:{NFSU2_TR(0x4be87d);
u8 U[4];
w4(U+0,u32(0xbc79061dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be882:{NFSU2_TR(0x4be882);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be883:{NFSU2_TR(0x4be883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be888ull));
TAIL_STATIC(0x537b80u,537);
}
B4be888:L4be888:{c.instructions+=4;NFSU2_TR(0x4be888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4be88b:{NFSU2_TR(0x4be88b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be88e:{NFSU2_TR(0x4be88e);
__builtin_memmove((R+4),(R+28),4);
}
B4be890:{NFSU2_TR(0x4be890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be895ull));
TAIL_STATIC(0x583200u,583);
}
B4be895:L4be895:{c.instructions+=4;NFSU2_TR(0x4be895);
{u32 ea_=u32(u32(7932644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4be89b:{NFSU2_TR(0x4be89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4be89e:{NFSU2_TR(0x4be89e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4be8a1:{NFSU2_TR(0x4be8a1);
u8 U[4];
w4(U+0,u32(0x794facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8a6:L4be8a6:{c.instructions+=3;NFSU2_TR(0x4be8a6);
u8 U[4];
w4(U+0,u32(0x4b99c927ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8ab:{NFSU2_TR(0x4be8ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8ac:{NFSU2_TR(0x4be8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be8b1ull));
TAIL_STATIC(0x537b80u,537);
}
B4be8b1:L4be8b1:{c.instructions+=5;NFSU2_TR(0x4be8b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4be8b4:{NFSU2_TR(0x4be8b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be8b7:{NFSU2_TR(0x4be8b7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8bc:{NFSU2_TR(0x4be8bc);
__builtin_memmove((R+4),(R+28),4);
}
B4be8be:{NFSU2_TR(0x4be8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be8c3ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4be8c3:L4be8c3:{c.instructions+=3;NFSU2_TR(0x4be8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4be8c5:{NFSU2_TR(0x4be8c5);
__builtin_memmove((R+4),(R+28),4);
}
B4be8c7:{NFSU2_TR(0x4be8c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be8caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4be8ca:L4be8ca:{c.instructions+=5;NFSU2_TR(0x4be8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be8d0:{NFSU2_TR(0x4be8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4be8d1:{NFSU2_TR(0x4be8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4be8d2:{NFSU2_TR(0x4be8d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be8d3:{NFSU2_TR(0x4be8d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be8e0:L4be8e0:{c.instructions+=5;NFSU2_TR(0x4be8e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8e1:{NFSU2_TR(0x4be8e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4be8e5:{NFSU2_TR(0x4be8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be8e8:{NFSU2_TR(0x4be8e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be8ea:{NFSU2_TR(0x4be8ea);
if(r1(R+518)){{goto L4be8fc;}}
}
B4be8ec:L4be8ec:{c.instructions+=2;NFSU2_TR(0x4be8ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be8ed:{NFSU2_TR(0x4be8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be8f2ull));
TAIL_STATIC(0x540a60u,540);
}
B4be8f2:L4be8f2:{c.instructions+=2;NFSU2_TR(0x4be8f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4be8f5:{NFSU2_TR(0x4be8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4be8fc:L4be8fc:{c.instructions+=5;NFSU2_TR(0x4be8fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be900:{NFSU2_TR(0x4be900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4be90a:{NFSU2_TR(0x4be90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be90d:{NFSU2_TR(0x4be90d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4be90f:{NFSU2_TR(0x4be90f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4be930;}}
}
B4be911:L4be911:{c.instructions+=4;NFSU2_TR(0x4be911);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be914:{NFSU2_TR(0x4be914);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be915:{NFSU2_TR(0x4be915);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4be91b:{NFSU2_TR(0x4be91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be920ull));
TAIL_STATIC(0x5874e0u,587);
}
B4be920:L4be920:{c.instructions+=2;NFSU2_TR(0x4be920);
__builtin_memmove((R+4),(R+24),4);
}
B4be922:{NFSU2_TR(0x4be922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be927ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4be670u);}goto L4be670;}
}
B4be927:L4be927:{c.instructions+=3;NFSU2_TR(0x4be927);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4be92e:{NFSU2_TR(0x4be92e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be92f:{NFSU2_TR(0x4be92f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be930:L4be930:{c.instructions+=3;NFSU2_TR(0x4be930);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4be933:{NFSU2_TR(0x4be933);
u8 U[4];
w4(U+0,u32(0x4f8406c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be938:{NFSU2_TR(0x4be938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be93dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4be93d:L4be93d:{c.instructions+=7;NFSU2_TR(0x4be93d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be93e:{NFSU2_TR(0x4be93e);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be943:{NFSU2_TR(0x4be943);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be948:{NFSU2_TR(0x4be948);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be94d:{NFSU2_TR(0x4be94d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be952:{NFSU2_TR(0x4be952);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be953:{NFSU2_TR(0x4be953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be958ull));
TAIL_STATIC(0x558540u,558);
}
B4be958:L4be958:{c.instructions+=3;NFSU2_TR(0x4be958);
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
B4be95b:{NFSU2_TR(0x4be95b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be95c:{NFSU2_TR(0x4be95c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be960:L4be960:{c.instructions+=12;NFSU2_TR(0x4be960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be962:{NFSU2_TR(0x4be962);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be967:{NFSU2_TR(0x4be967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be96d:{NFSU2_TR(0x4be96d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be96e:{NFSU2_TR(0x4be96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be975:{NFSU2_TR(0x4be975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be976:{NFSU2_TR(0x4be976);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4be97a:{NFSU2_TR(0x4be97a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be97b:{NFSU2_TR(0x4be97b);
__builtin_memmove((R+24),(R+4),4);
}
B4be97d:{NFSU2_TR(0x4be97d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be97e:{NFSU2_TR(0x4be97e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be982:{NFSU2_TR(0x4be982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be987ull));
TAIL_STATIC(0x551de0u,551);
}
B4be987:L4be987:{c.instructions+=7;NFSU2_TR(0x4be987);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4be989:{NFSU2_TR(0x4be989);
u8 U[4];
w4(U+0,u32(0x794fe8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4be98f:{NFSU2_TR(0x4be98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be992:{NFSU2_TR(0x4be992);
__builtin_memmove((R+4),(R+24),4);
}
B4be994:{NFSU2_TR(0x4be994);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be998:{NFSU2_TR(0x4be998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be99b:{NFSU2_TR(0x4be99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be9a0ull));
TAIL_STATIC(0x4a2ff0u,4a2);
}
B4be9a0:L4be9a0:{c.instructions+=6;NFSU2_TR(0x4be9a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4be9a4:{NFSU2_TR(0x4be9a4);
__builtin_memmove((R+0),(R+24),4);
}
B4be9a6:{NFSU2_TR(0x4be9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be9a7:{NFSU2_TR(0x4be9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4be9ae:{NFSU2_TR(0x4be9ae);
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
B4be9b1:{NFSU2_TR(0x4be9b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be9c0:L4be9c0:{c.instructions+=3;NFSU2_TR(0x4be9c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be9c1:{NFSU2_TR(0x4be9c1);
__builtin_memmove((R+24),(R+4),4);
}
B4be9c3:{NFSU2_TR(0x4be9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be9c8ull));
{goto L4be9e0;}
}
B4be9c8:L4be9c8:{c.instructions+=2;NFSU2_TR(0x4be9c8);
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
B4be9cd:{NFSU2_TR(0x4be9cd);
if(r1(R+518)){{goto L4be9d8;}}
}
B4be9cf:L4be9cf:{c.instructions+=2;NFSU2_TR(0x4be9cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be9d0:{NFSU2_TR(0x4be9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4be9d5ull));
TAIL_STATIC(0x575630u,575);
}
B4be9d5:L4be9d5:{c.instructions+=1;NFSU2_TR(0x4be9d5);
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
B4be9d8:L4be9d8:{c.instructions+=3;NFSU2_TR(0x4be9d8);
__builtin_memmove((R+0),(R+24),4);
}
B4be9da:{NFSU2_TR(0x4be9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4be9db:{NFSU2_TR(0x4be9db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4be9e0:L4be9e0:{c.instructions+=2;NFSU2_TR(0x4be9e0);
u8 U[4];
w4(U+0,u32(0x794fe8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4be9e6:{NFSU2_TR(0x4be9e6);
TAIL_STATIC(0x510d40u,510);
}
B4be9f0:L4be9f0:{c.instructions+=6;NFSU2_TR(0x4be9f0);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4be9f5:{NFSU2_TR(0x4be9f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be9f6:{NFSU2_TR(0x4be9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4be9f9:{NFSU2_TR(0x4be9f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4be9fb:{NFSU2_TR(0x4be9fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4be9fe:{NFSU2_TR(0x4be9fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea03ull));
TAIL_STATIC(0x43be60u,43b);
}
B4bea03:L4bea03:{c.instructions+=2;NFSU2_TR(0x4bea03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bea05:{NFSU2_TR(0x4bea05);
if(r1(R+518)){{goto L4bea19;}}
}
B4bea07:L4bea07:{c.instructions+=6;NFSU2_TR(0x4bea07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bea09:{NFSU2_TR(0x4bea09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4bea0c:{NFSU2_TR(0x4bea0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bea0f:{NFSU2_TR(0x4bea0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea10:{NFSU2_TR(0x4bea10);
__builtin_memmove((R+4),(R+24),4);
}
B4bea12:{NFSU2_TR(0x4bea12);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bea15:L4bea15:{c.instructions+=2;NFSU2_TR(0x4bea15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bea16:{NFSU2_TR(0x4bea16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bea19:L4bea19:{c.instructions+=6;NFSU2_TR(0x4bea19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bea1b:{NFSU2_TR(0x4bea1b);
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
B4bea1d:{NFSU2_TR(0x4bea1d);
w4(R+0,u32(0xcull));
}
B4bea22:{NFSU2_TR(0x4bea22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea23:{NFSU2_TR(0x4bea23);
__builtin_memmove((R+4),(R+24),4);
}
B4bea25:{NFSU2_TR(0x4bea25);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bea28:L4bea28:{c.instructions+=2;NFSU2_TR(0x4bea28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bea29:{NFSU2_TR(0x4bea29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bea30:L4bea30:{c.instructions+=8;NFSU2_TR(0x4bea30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bea34:{NFSU2_TR(0x4bea34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea35:{NFSU2_TR(0x4bea35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea36:{NFSU2_TR(0x4bea36);
__builtin_memmove((R+28),(R+4),4);
}
B4bea38:{NFSU2_TR(0x4bea38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea39:{NFSU2_TR(0x4bea39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bea3c:{NFSU2_TR(0x4bea3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea3d:{NFSU2_TR(0x4bea3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea42ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4bea42:L4bea42:{c.instructions+=5;NFSU2_TR(0x4bea42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bea48:{NFSU2_TR(0x4bea48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bea4e:{NFSU2_TR(0x4bea4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bea51:{NFSU2_TR(0x4bea51);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bea54:{NFSU2_TR(0x4bea54);
if(r1(R+518)){{goto L4bea74;}}
}
B4bea56:L4bea56:{c.instructions+=2;NFSU2_TR(0x4bea56);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4bea57:{NFSU2_TR(0x4bea57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4beab8;}}
}
B4bea59:L4bea59:{c.instructions+=5;NFSU2_TR(0x4bea59);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4bea5e:{NFSU2_TR(0x4bea5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bea65:{NFSU2_TR(0x4bea65);
__builtin_memmove((R+4),(R+28),4);
}
B4bea67:{NFSU2_TR(0x4bea67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bea6a:{NFSU2_TR(0x4bea6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea6full));
TAIL_STATIC(0x4a3330u,4a3);
}
B4bea6f:L4bea6f:{c.instructions+=3;NFSU2_TR(0x4bea6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bea70:{NFSU2_TR(0x4bea70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bea71:{NFSU2_TR(0x4bea71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bea74:L4bea74:{c.instructions+=2;NFSU2_TR(0x4bea74);
w4(R+4,u32(0x83a9e0ull));
}
B4bea79:{NFSU2_TR(0x4bea79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea7eull));
TAIL_STATIC(0x502fe0u,502);
}
B4bea7e:L4bea7e:{c.instructions+=2;NFSU2_TR(0x4bea7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bea80:{NFSU2_TR(0x4bea80);
if(r1(R+518)){{goto L4beaa9;}}
}
B4bea82:L4bea82:{c.instructions+=6;NFSU2_TR(0x4bea82);
u8 U[4];
w4(U+0,u32(0x6000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea87:{NFSU2_TR(0x4bea87);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea8c:{NFSU2_TR(0x4bea8c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea91:{NFSU2_TR(0x4bea91);
u8 U[4];
w4(U+0,u32(0x81b1d73dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bea96:{NFSU2_TR(0x4bea96);
__builtin_memmove((R+4),(R+28),4);
}
B4bea98:{NFSU2_TR(0x4bea98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bea9dull));
TAIL_STATIC(0x4a3890u,4a3);
}
B4bea9d:L4bea9d:{c.instructions+=2;NFSU2_TR(0x4bea9d);
__builtin_memmove((R+4),(R+28),4);
}
B4bea9f:{NFSU2_TR(0x4bea9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beaa4ull));
TAIL_STATIC(0x4a3330u,4a3);
}
B4beaa4:L4beaa4:{c.instructions+=3;NFSU2_TR(0x4beaa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4beaa5:{NFSU2_TR(0x4beaa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4beaa6:{NFSU2_TR(0x4beaa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4beaa9:L4beaa9:{c.instructions+=3;NFSU2_TR(0x4beaa9);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4beaae:{NFSU2_TR(0x4beaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4beab5:{NFSU2_TR(0x4beab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4beab8:L4beab8:{c.instructions+=2;NFSU2_TR(0x4beab8);
__builtin_memmove((R+4),(R+28),4);
}
B4beaba:{NFSU2_TR(0x4beaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beabfull));
TAIL_STATIC(0x4a3330u,4a3);
}
B4beabf:L4beabf:{c.instructions+=3;NFSU2_TR(0x4beabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4beac0:{NFSU2_TR(0x4beac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4beac1:{NFSU2_TR(0x4beac1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bead0:L4bead0:{c.instructions+=13;NFSU2_TR(0x4bead0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4bead3:{NFSU2_TR(0x4bead3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bead7:{NFSU2_TR(0x4bead7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bead8:{NFSU2_TR(0x4bead8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bead9:{NFSU2_TR(0x4bead9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beada:{NFSU2_TR(0x4beada);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beadb:{NFSU2_TR(0x4beadb);
__builtin_memmove((R+20),(R+4),4);
}
B4beadd:{NFSU2_TR(0x4beadd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beade:{NFSU2_TR(0x4beade);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4beae2:{NFSU2_TR(0x4beae2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4beae4:{NFSU2_TR(0x4beae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beae5:{NFSU2_TR(0x4beae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4beae9:{NFSU2_TR(0x4beae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beaeeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4beaee:L4beaee:{c.instructions+=3;NFSU2_TR(0x4beaee);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4beaf2:{NFSU2_TR(0x4beaf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beaf3:{NFSU2_TR(0x4beaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beaf8ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4beaf8:L4beaf8:{c.instructions+=9;NFSU2_TR(0x4beaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4beafe:{NFSU2_TR(0x4beafe);
__builtin_memmove((R+28),(R+0),4);
}
B4beb00:{NFSU2_TR(0x4beb00);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x90ull))));
}
B4beb06:{NFSU2_TR(0x4beb06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4beb09:{NFSU2_TR(0x4beb09);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x20ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4beb0e:{NFSU2_TR(0x4beb0e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4beb0f:{NFSU2_TR(0x4beb0f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4beb11:{NFSU2_TR(0x4beb11);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4beb15:{NFSU2_TR(0x4beb15);
if(r1(R+518)){{goto L4beb52;}}
}
B4beb17:L4beb17:{c.instructions+=6;NFSU2_TR(0x4beb17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb18:{NFSU2_TR(0x4beb18);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4beb1c:{NFSU2_TR(0x4beb1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb1d:{NFSU2_TR(0x4beb1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4beb20:{NFSU2_TR(0x4beb20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb21:{NFSU2_TR(0x4beb21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beb26ull));
TAIL_STATIC(0x43dc60u,43d);
}
B4beb26:L4beb26:{c.instructions+=3;NFSU2_TR(0x4beb26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4beb29:{NFSU2_TR(0x4beb29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4beb2b:{NFSU2_TR(0x4beb2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4beb3e;}}
}
B4beb2d:L4beb2d:{c.instructions+=5;NFSU2_TR(0x4beb2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4beb31:{NFSU2_TR(0x4beb31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4beb33:{NFSU2_TR(0x4beb33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4beb36:{NFSU2_TR(0x4beb36);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4beb3a:{NFSU2_TR(0x4beb3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4beb3e:L4beb3e:{c.instructions+=3;NFSU2_TR(0x4beb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4beb40:{NFSU2_TR(0x4beb40);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4beb42:{NFSU2_TR(0x4beb42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4beb17u);}goto L4beb17;}}
}
B4beb44:L4beb44:{c.instructions+=7;NFSU2_TR(0x4beb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4beb48:{NFSU2_TR(0x4beb48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4beb49:{NFSU2_TR(0x4beb49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4beb4a:{NFSU2_TR(0x4beb4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4beb4b:{NFSU2_TR(0x4beb4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4beb4c:{NFSU2_TR(0x4beb4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4beb4f:{NFSU2_TR(0x4beb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4beb52:L4beb52:{c.instructions+=7;NFSU2_TR(0x4beb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4beb53:{NFSU2_TR(0x4beb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4beb54:{NFSU2_TR(0x4beb54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4beb55:{NFSU2_TR(0x4beb55);
__builtin_memmove((R+0),(R+12),4);
}
B4beb57:{NFSU2_TR(0x4beb57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4beb58:{NFSU2_TR(0x4beb58);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4beb5b:{NFSU2_TR(0x4beb5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4beb60:L4beb60:{c.instructions+=5;NFSU2_TR(0x4beb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4beb64:{NFSU2_TR(0x4beb64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4beb69:{NFSU2_TR(0x4beb69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb6a:{NFSU2_TR(0x4beb6a);
__builtin_memmove((R+24),(R+4),4);
}
B4beb6c:{NFSU2_TR(0x4beb6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bebb9;}}
}
B4beb6e:L4beb6e:{c.instructions+=2;NFSU2_TR(0x4beb6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4beb72:{NFSU2_TR(0x4beb72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4beb7b;}}
}
B4beb74:L4beb74:{c.instructions+=1;NFSU2_TR(0x4beb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4beb7b:L4beb7b:{c.instructions+=6;NFSU2_TR(0x4beb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4beb7e:{NFSU2_TR(0x4beb7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb7f:{NFSU2_TR(0x4beb7f);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4beb84:{NFSU2_TR(0x4beb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4beb86:{NFSU2_TR(0x4beb86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb87:{NFSU2_TR(0x4beb87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beb8cull));
TAIL_STATIC(0x6fb09fu,6fb);
}
B4beb8c:L4beb8c:{c.instructions+=4;NFSU2_TR(0x4beb8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4beb8f:{NFSU2_TR(0x4beb8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb90:{NFSU2_TR(0x4beb90);
__builtin_memmove((R+4),(R+24),4);
}
B4beb92:{NFSU2_TR(0x4beb92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beb97ull));
TAIL_STATIC(0x4a37c0u,4a3);
}
B4beb97:L4beb97:{c.instructions+=5;NFSU2_TR(0x4beb97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb99:{NFSU2_TR(0x4beb99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb9b:{NFSU2_TR(0x4beb9b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beb9d:{NFSU2_TR(0x4beb9d);
__builtin_memmove((R+4),(R+24),4);
}
B4beb9f:{NFSU2_TR(0x4beb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beba4ull));
TAIL_STATIC(0x4a3460u,4a3);
}
B4beba4:L4beba4:{c.instructions+=7;NFSU2_TR(0x4beba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4beba7:{NFSU2_TR(0x4beba7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bebab:{NFSU2_TR(0x4bebab);
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
B4bebac:{NFSU2_TR(0x4bebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bebaf:{NFSU2_TR(0x4bebaf);
__builtin_memmove(gp(0x836538),(R+8),4);
}
B4bebb5:{NFSU2_TR(0x4bebb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bebb6:{NFSU2_TR(0x4bebb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bebb9:L4bebb9:{c.instructions+=2;NFSU2_TR(0x4bebb9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bebbe:{NFSU2_TR(0x4bebbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bebdb;}}
}
B4bebc0:L4bebc0:{c.instructions+=4;NFSU2_TR(0x4bebc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bebc3:{NFSU2_TR(0x4bebc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebc4:{NFSU2_TR(0x4bebc4);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebc9:{NFSU2_TR(0x4bebc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bebceull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bebce:L4bebce:{c.instructions+=3;NFSU2_TR(0x4bebce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bebd2:{NFSU2_TR(0x4bebd2);
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
B4bebd5:{NFSU2_TR(0x4bebd5);
__builtin_memmove(gp(0x836538),(R+4),4);
}
B4bebdb:L4bebdb:{c.instructions+=2;NFSU2_TR(0x4bebdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bebdc:{NFSU2_TR(0x4bebdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bebe0:L4bebe0:{c.instructions+=7;NFSU2_TR(0x4bebe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebe1:{NFSU2_TR(0x4bebe1);
__builtin_memmove((R+24),(R+4),4);
}
B4bebe3:{NFSU2_TR(0x4bebe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bebe6:{NFSU2_TR(0x4bebe6);
u8 U[4];
w4(U+0,u32(0xb19f8b41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebeb:{NFSU2_TR(0x4bebeb);
u8 U[4];
w4(U+0,u32(0x426c7b4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebf0:{NFSU2_TR(0x4bebf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebf1:{NFSU2_TR(0x4bebf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bebf6ull));
TAIL_STATIC(0x537a10u,537);
}
B4bebf6:L4bebf6:{c.instructions+=3;NFSU2_TR(0x4bebf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bebf9:{NFSU2_TR(0x4bebf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bebfa:{NFSU2_TR(0x4bebfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bebffull));
TAIL_STATIC(0x50c900u,50c);
}
B4bebff:L4bebff:{c.instructions+=6;NFSU2_TR(0x4bebff);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4bec04:{NFSU2_TR(0x4bec04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bec07:{NFSU2_TR(0x4bec07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bec0a:{NFSU2_TR(0x4bec0a);
__builtin_memmove((R+4),(R+24),4);
}
B4bec0c:{NFSU2_TR(0x4bec0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bec0d:{NFSU2_TR(0x4bec0d);
TAIL_STATIC(0x4a3c80u,4a3);
}
B4bec20:L4bec20:{c.instructions+=2;NFSU2_TR(0x4bec20);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bec28:{NFSU2_TR(0x4bec28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bec8c;}}
}
B4bec2a:L4bec2a:{c.instructions+=2;NFSU2_TR(0x4bec2a);
w4(R+4,u32(0x83a9d0ull));
}
B4bec2f:{NFSU2_TR(0x4bec2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bec34ull));
TAIL_STATIC(0x503080u,503);
}
B4bec34:L4bec34:{c.instructions+=2;NFSU2_TR(0x4bec34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bec36:{NFSU2_TR(0x4bec36);
if(r1(R+518)){{goto L4bec7a;}}
}
B4bec38:L4bec38:{c.instructions+=12;NFSU2_TR(0x4bec38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec39:{NFSU2_TR(0x4bec39);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bec3d:{NFSU2_TR(0x4bec3d);
u8 U[4];
w4(U+0,u32(0x6c328734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec42:{NFSU2_TR(0x4bec42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec44:{NFSU2_TR(0x4bec44);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec49:{NFSU2_TR(0x4bec49);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec4e:{NFSU2_TR(0x4bec4e);
u8 U[4];
w4(U+0,u32(0x451e768eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec53:{NFSU2_TR(0x4bec53);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec58:{NFSU2_TR(0x4bec58);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec5d:{NFSU2_TR(0x4bec5d);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec62:{NFSU2_TR(0x4bec62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec63:{NFSU2_TR(0x4bec63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bec68ull));
TAIL_STATIC(0x558790u,558);
}
B4bec68:L4bec68:{c.instructions+=3;NFSU2_TR(0x4bec68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec69:{NFSU2_TR(0x4bec69);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec6e:{NFSU2_TR(0x4bec6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bec73ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bec73:L4bec73:{c.instructions+=3;NFSU2_TR(0x4bec73);
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
B4bec76:{NFSU2_TR(0x4bec76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bec77:{NFSU2_TR(0x4bec77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bec7a:L4bec7a:{c.instructions+=4;NFSU2_TR(0x4bec7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bec7e:{NFSU2_TR(0x4bec7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec7f:{NFSU2_TR(0x4bec7f);
u8 U[4];
w4(U+0,u32(0x3411395cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec84:{NFSU2_TR(0x4bec84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bec89ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bec89:L4bec89:{c.instructions+=1;NFSU2_TR(0x4bec89);
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
B4bec8c:L4bec8c:{c.instructions+=1;NFSU2_TR(0x4bec8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bec90:L4bec90:{c.instructions+=4;NFSU2_TR(0x4bec90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bec91:{NFSU2_TR(0x4bec91);
__builtin_memmove((R+20),(R+16),4);
}
B4bec93:{NFSU2_TR(0x4bec93);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bec9a:{NFSU2_TR(0x4bec9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4becb5;}}
}
B4bec9c:L4bec9c:{c.instructions+=2;NFSU2_TR(0x4bec9c);
w4(R+4,u32(0x85ad40ull));
}
B4beca1:{NFSU2_TR(0x4beca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beca6ull));
TAIL_STATIC(0x54cae0u,54c);
}
B4beca6:L4beca6:{c.instructions+=4;NFSU2_TR(0x4beca6);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4becac:{NFSU2_TR(0x4becac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becae:{NFSU2_TR(0x4becae);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becb0:{NFSU2_TR(0x4becb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4becb5ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4becb5:L4becb5:{c.instructions+=2;NFSU2_TR(0x4becb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4becb6:{NFSU2_TR(0x4becb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4becc0:L4becc0:{c.instructions+=2;NFSU2_TR(0x4becc0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4becc8:{NFSU2_TR(0x4becc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bed09;}}
}
B4becca:L4becca:{c.instructions+=12;NFSU2_TR(0x4becca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beccb:{NFSU2_TR(0x4beccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4beccf:{NFSU2_TR(0x4beccf);
u8 U[4];
w4(U+0,u32(0xaa50aa02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becd4:{NFSU2_TR(0x4becd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becd6:{NFSU2_TR(0x4becd6);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becdb:{NFSU2_TR(0x4becdb);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bece0:{NFSU2_TR(0x4bece0);
u8 U[4];
w4(U+0,u32(0xe1a57d51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bece5:{NFSU2_TR(0x4bece5);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becea:{NFSU2_TR(0x4becea);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becef:{NFSU2_TR(0x4becef);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becf4:{NFSU2_TR(0x4becf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becf5:{NFSU2_TR(0x4becf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4becfaull));
TAIL_STATIC(0x558790u,558);
}
B4becfa:L4becfa:{c.instructions+=3;NFSU2_TR(0x4becfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4becfb:{NFSU2_TR(0x4becfb);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed00:{NFSU2_TR(0x4bed00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bed05ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bed05:L4bed05:{c.instructions+=2;NFSU2_TR(0x4bed05);
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
B4bed08:{NFSU2_TR(0x4bed08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bed09:L4bed09:{c.instructions+=1;NFSU2_TR(0x4bed09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bed10:L4bed10:{c.instructions+=2;NFSU2_TR(0x4bed10);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bed18:{NFSU2_TR(0x4bed18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bed35;}}
}
B4bed1a:L4bed1a:{c.instructions+=6;NFSU2_TR(0x4bed1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bed1e:{NFSU2_TR(0x4bed1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed20:{NFSU2_TR(0x4bed20);
u8 U[4];
w4(U+0,u32(0x78f0e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed25:{NFSU2_TR(0x4bed25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed26:{NFSU2_TR(0x4bed26);
s1(0x7f45a1,u8(0x1ull));
}
B4bed2d:{NFSU2_TR(0x4bed2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bed32ull));
TAIL_STATIC(0x537980u,537);
}
B4bed32:L4bed32:{c.instructions+=1;NFSU2_TR(0x4bed32);
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
B4bed35:L4bed35:{c.instructions+=1;NFSU2_TR(0x4bed35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bed40:L4bed40:{c.instructions+=2;NFSU2_TR(0x4bed40);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bed48:{NFSU2_TR(0x4bed48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bed89;}}
}
B4bed4a:L4bed4a:{c.instructions+=12;NFSU2_TR(0x4bed4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed4b:{NFSU2_TR(0x4bed4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bed4f:{NFSU2_TR(0x4bed4f);
u8 U[4];
w4(U+0,u32(0xe15b558aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed54:{NFSU2_TR(0x4bed54);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed56:{NFSU2_TR(0x4bed56);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed5b:{NFSU2_TR(0x4bed5b);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed60:{NFSU2_TR(0x4bed60);
u8 U[4];
w4(U+0,u32(0x30ed2368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed65:{NFSU2_TR(0x4bed65);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed6a:{NFSU2_TR(0x4bed6a);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed6f:{NFSU2_TR(0x4bed6f);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed74:{NFSU2_TR(0x4bed74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed75:{NFSU2_TR(0x4bed75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bed7aull));
TAIL_STATIC(0x558790u,558);
}
B4bed7a:L4bed7a:{c.instructions+=3;NFSU2_TR(0x4bed7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed7b:{NFSU2_TR(0x4bed7b);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed80:{NFSU2_TR(0x4bed80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bed85ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bed85:L4bed85:{c.instructions+=2;NFSU2_TR(0x4bed85);
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
B4bed88:{NFSU2_TR(0x4bed88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bed89:L4bed89:{c.instructions+=1;NFSU2_TR(0x4bed89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bed90:L4bed90:{c.instructions+=2;NFSU2_TR(0x4bed90);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bed98:{NFSU2_TR(0x4bed98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bedb6;}}
}
B4bed9a:L4bed9a:{c.instructions+=6;NFSU2_TR(0x4bed9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bed9b:{NFSU2_TR(0x4bed9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bed9f:{NFSU2_TR(0x4bed9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beda1:{NFSU2_TR(0x4beda1);
u8 U[4];
w4(U+0,u32(0x79056cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beda6:{NFSU2_TR(0x4beda6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beda7:{NFSU2_TR(0x4beda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bedacull));
TAIL_STATIC(0x537980u,537);
}
B4bedac:L4bedac:{c.instructions+=2;NFSU2_TR(0x4bedac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedad:{NFSU2_TR(0x4bedad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bedb2ull));
TAIL_STATIC(0x4a4b50u,4a4);
}
B4bedb2:L4bedb2:{c.instructions+=2;NFSU2_TR(0x4bedb2);
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
B4bedb5:{NFSU2_TR(0x4bedb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bedb6:L4bedb6:{c.instructions+=1;NFSU2_TR(0x4bedb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bedc0:L4bedc0:{c.instructions+=2;NFSU2_TR(0x4bedc0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bedc8:{NFSU2_TR(0x4bedc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bee09;}}
}
B4bedca:L4bedca:{c.instructions+=12;NFSU2_TR(0x4bedca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedcb:{NFSU2_TR(0x4bedcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bedcf:{NFSU2_TR(0x4bedcf);
u8 U[4];
w4(U+0,u32(0x33c42e03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedd4:{NFSU2_TR(0x4bedd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedd6:{NFSU2_TR(0x4bedd6);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beddb:{NFSU2_TR(0x4beddb);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bede0:{NFSU2_TR(0x4bede0);
u8 U[4];
w4(U+0,u32(0x33c42e03ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bede5:{NFSU2_TR(0x4bede5);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedea:{NFSU2_TR(0x4bedea);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedef:{NFSU2_TR(0x4bedef);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedf4:{NFSU2_TR(0x4bedf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedf5:{NFSU2_TR(0x4bedf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bedfaull));
TAIL_STATIC(0x558790u,558);
}
B4bedfa:L4bedfa:{c.instructions+=3;NFSU2_TR(0x4bedfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bedfb:{NFSU2_TR(0x4bedfb);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee00:{NFSU2_TR(0x4bee00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee05ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bee05:L4bee05:{c.instructions+=2;NFSU2_TR(0x4bee05);
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
B4bee08:{NFSU2_TR(0x4bee08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bee09:L4bee09:{c.instructions+=1;NFSU2_TR(0x4bee09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bee10:L4bee10:{c.instructions+=11;NFSU2_TR(0x4bee10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee12:{NFSU2_TR(0x4bee12);
u8 U[4];
w4(U+0,u32(0x7739fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee17:{NFSU2_TR(0x4bee17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bee1d:{NFSU2_TR(0x4bee1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee1e:{NFSU2_TR(0x4bee1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bee25:{NFSU2_TR(0x4bee25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee26:{NFSU2_TR(0x4bee26);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bee2d:{NFSU2_TR(0x4bee2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee2e:{NFSU2_TR(0x4bee2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee2f:{NFSU2_TR(0x4bee2f);
__builtin_memmove((R+24),(R+4),4);
}
B4bee31:{NFSU2_TR(0x4bee31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bef3a;}}
}
B4bee37:L4bee37:{c.instructions+=2;NFSU2_TR(0x4bee37);
w4(R+4,u32(0x85ba64ull));
}
B4bee3c:{NFSU2_TR(0x4bee3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee41ull));
TAIL_STATIC(0x513fa0u,513);
}
B4bee41:L4bee41:{c.instructions+=2;NFSU2_TR(0x4bee41);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bee43:{NFSU2_TR(0x4bee43);
if(r1(R+518)){{goto L4bee8e;}}
}
B4bee45:L4bee45:{c.instructions+=2;NFSU2_TR(0x4bee45);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee47:{NFSU2_TR(0x4bee47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee4cull));
TAIL_STATIC(0x575620u,575);
}
B4bee4c:L4bee4c:{c.instructions+=6;NFSU2_TR(0x4bee4c);
__builtin_memmove((R+28),(R+0),4);
}
B4bee4e:{NFSU2_TR(0x4bee4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bee51:{NFSU2_TR(0x4bee51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bee55:{NFSU2_TR(0x4bee55);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bee57:{NFSU2_TR(0x4bee57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bee5f:{NFSU2_TR(0x4bee5f);
if(r1(R+518)){{goto L4bee7c;}}
}
B4bee61:L4bee61:{c.instructions+=5;NFSU2_TR(0x4bee61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee63:{NFSU2_TR(0x4bee63);
u8 U[4];
w4(U+0,u32(0x23f359b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee68:{NFSU2_TR(0x4bee68);
u8 U[4];
w4(U+0,u32(0x12bb5ea2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee6d:{NFSU2_TR(0x4bee6d);
__builtin_memmove((R+4),(R+28),4);
}
B4bee6f:{NFSU2_TR(0x4bee6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee74ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bee74:L4bee74:{c.instructions+=2;NFSU2_TR(0x4bee74);
u8 U[4];
w4(U+0,u32(0x795014ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bee7a:{NFSU2_TR(0x4bee7a);
{goto L4bee7e;}
}
B4bee7c:L4bee7c:{c.instructions+=1;NFSU2_TR(0x4bee7c);
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
B4bee7e:L4bee7e:{c.instructions+=5;NFSU2_TR(0x4bee7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bee80:{NFSU2_TR(0x4bee80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee81:{NFSU2_TR(0x4bee81);
__builtin_memmove((R+4),(R+24),4);
}
B4bee83:{NFSU2_TR(0x4bee83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bee8b:{NFSU2_TR(0x4bee8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bee8e:L4bee8e:{c.instructions+=2;NFSU2_TR(0x4bee8e);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bee90:{NFSU2_TR(0x4bee90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bee95ull));
TAIL_STATIC(0x575620u,575);
}
B4bee95:L4bee95:{c.instructions+=6;NFSU2_TR(0x4bee95);
__builtin_memmove((R+28),(R+0),4);
}
B4bee97:{NFSU2_TR(0x4bee97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bee9a:{NFSU2_TR(0x4bee9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bee9e:{NFSU2_TR(0x4bee9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4beea0:{NFSU2_TR(0x4beea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4beea8:{NFSU2_TR(0x4beea8);
if(r1(R+518)){{goto L4beec9;}}
}
B4beeaa:L4beeaa:{c.instructions+=5;NFSU2_TR(0x4beeaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beeac:{NFSU2_TR(0x4beeac);
u8 U[4];
w4(U+0,u32(0xc3e5bcdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beeb1:{NFSU2_TR(0x4beeb1);
u8 U[4];
w4(U+0,u32(0x62aa0df6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beeb6:{NFSU2_TR(0x4beeb6);
__builtin_memmove((R+4),(R+28),4);
}
B4beeb8:{NFSU2_TR(0x4beeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beebdull));
TAIL_STATIC(0x51f670u,51f);
}
B4beebd:L4beebd:{c.instructions+=3;NFSU2_TR(0x4beebd);
u8 U[4];
w4(U+0,u32(0x794ff8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4beec3:{NFSU2_TR(0x4beec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4beec7:{NFSU2_TR(0x4beec7);
{goto L4beecb;}
}
B4beec9:L4beec9:{c.instructions+=1;NFSU2_TR(0x4beec9);
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
B4beecb:L4beecb:{c.instructions+=5;NFSU2_TR(0x4beecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4beecd:{NFSU2_TR(0x4beecd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beece:{NFSU2_TR(0x4beece);
__builtin_memmove((R+4),(R+24),4);
}
B4beed0:{NFSU2_TR(0x4beed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4beed8:{NFSU2_TR(0x4beed8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beedbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4beedb:L4beedb:{c.instructions+=2;NFSU2_TR(0x4beedb);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4beee2:{NFSU2_TR(0x4beee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bef3a;}}
}
B4beee4:L4beee4:{c.instructions+=3;NFSU2_TR(0x4beee4);
__builtin_memmove((R+0),gp(0x85ba67),1);
}
B4beee9:{NFSU2_TR(0x4beee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4beeeb:{NFSU2_TR(0x4beeeb);
if(r1(R+518)){{goto L4bef3a;}}
}
B4beeed:L4beeed:{c.instructions+=2;NFSU2_TR(0x4beeed);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beeef:{NFSU2_TR(0x4beeef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beef4ull));
TAIL_STATIC(0x575620u,575);
}
B4beef4:L4beef4:{c.instructions+=6;NFSU2_TR(0x4beef4);
__builtin_memmove((R+28),(R+0),4);
}
B4beef6:{NFSU2_TR(0x4beef6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4beef9:{NFSU2_TR(0x4beef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4beefd:{NFSU2_TR(0x4beefd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4beeff:{NFSU2_TR(0x4beeff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bef07:{NFSU2_TR(0x4bef07);
if(r1(R+518)){{goto L4bef28;}}
}
B4bef09:L4bef09:{c.instructions+=5;NFSU2_TR(0x4bef09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef0b:{NFSU2_TR(0x4bef0b);
u8 U[4];
w4(U+0,u32(0x5e670a9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef10:{NFSU2_TR(0x4bef10);
u8 U[4];
w4(U+0,u32(0x3109913cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef15:{NFSU2_TR(0x4bef15);
__builtin_memmove((R+4),(R+28),4);
}
B4bef17:{NFSU2_TR(0x4bef17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef1cull));
TAIL_STATIC(0x51f670u,51f);
}
B4bef1c:L4bef1c:{c.instructions+=3;NFSU2_TR(0x4bef1c);
u8 U[4];
w4(U+0,u32(0x79503cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bef22:{NFSU2_TR(0x4bef22);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bef26:{NFSU2_TR(0x4bef26);
{goto L4bef2a;}
}
B4bef28:L4bef28:{c.instructions+=1;NFSU2_TR(0x4bef28);
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
B4bef2a:L4bef2a:{c.instructions+=5;NFSU2_TR(0x4bef2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bef2c:{NFSU2_TR(0x4bef2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef2d:{NFSU2_TR(0x4bef2d);
__builtin_memmove((R+4),(R+24),4);
}
B4bef2f:{NFSU2_TR(0x4bef2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bef37:{NFSU2_TR(0x4bef37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef3aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bef3a:L4bef3a:{c.instructions+=2;NFSU2_TR(0x4bef3a);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef3c:{NFSU2_TR(0x4bef3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef41ull));
TAIL_STATIC(0x575620u,575);
}
B4bef41:L4bef41:{c.instructions+=6;NFSU2_TR(0x4bef41);
__builtin_memmove((R+28),(R+0),4);
}
B4bef43:{NFSU2_TR(0x4bef43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bef46:{NFSU2_TR(0x4bef46);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bef4a:{NFSU2_TR(0x4bef4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bef4c:{NFSU2_TR(0x4bef4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bef54:{NFSU2_TR(0x4bef54);
if(r1(R+518)){{goto L4bef75;}}
}
B4bef56:L4bef56:{c.instructions+=5;NFSU2_TR(0x4bef56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef58:{NFSU2_TR(0x4bef58);
u8 U[4];
w4(U+0,u32(0x80833fc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef5d:{NFSU2_TR(0x4bef5d);
u8 U[4];
w4(U+0,u32(0xb295a6b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef62:{NFSU2_TR(0x4bef62);
__builtin_memmove((R+4),(R+28),4);
}
B4bef64:{NFSU2_TR(0x4bef64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef69ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bef69:L4bef69:{c.instructions+=3;NFSU2_TR(0x4bef69);
u8 U[4];
w4(U+0,u32(0x79501cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bef6f:{NFSU2_TR(0x4bef6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bef73:{NFSU2_TR(0x4bef73);
{goto L4bef77;}
}
B4bef75:L4bef75:{c.instructions+=1;NFSU2_TR(0x4bef75);
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
B4bef77:L4bef77:{c.instructions+=5;NFSU2_TR(0x4bef77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bef79:{NFSU2_TR(0x4bef79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef7a:{NFSU2_TR(0x4bef7a);
__builtin_memmove((R+4),(R+24),4);
}
B4bef7c:{NFSU2_TR(0x4bef7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bef84:{NFSU2_TR(0x4bef84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef87ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bef87:L4bef87:{c.instructions+=2;NFSU2_TR(0x4bef87);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bef89:{NFSU2_TR(0x4bef89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bef8eull));
TAIL_STATIC(0x575620u,575);
}
B4bef8e:L4bef8e:{c.instructions+=6;NFSU2_TR(0x4bef8e);
__builtin_memmove((R+28),(R+0),4);
}
B4bef90:{NFSU2_TR(0x4bef90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bef93:{NFSU2_TR(0x4bef93);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bef97:{NFSU2_TR(0x4bef97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bef99:{NFSU2_TR(0x4bef99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4befa1:{NFSU2_TR(0x4befa1);
if(r1(R+518)){{goto L4befbe;}}
}
B4befa3:L4befa3:{c.instructions+=5;NFSU2_TR(0x4befa3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4befa5:{NFSU2_TR(0x4befa5);
u8 U[4];
w4(U+0,u32(0xf82df37eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4befaa:{NFSU2_TR(0x4befaa);
u8 U[4];
w4(U+0,u32(0x70bb9626ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4befaf:{NFSU2_TR(0x4befaf);
__builtin_memmove((R+4),(R+28),4);
}
B4befb1:{NFSU2_TR(0x4befb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4befb6ull));
TAIL_STATIC(0x51f670u,51f);
}
B4befb6:L4befb6:{c.instructions+=2;NFSU2_TR(0x4befb6);
u8 U[4];
w4(U+0,u32(0x795024ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4befbc:{NFSU2_TR(0x4befbc);
{goto L4befc0;}
}
B4befbe:L4befbe:{c.instructions+=1;NFSU2_TR(0x4befbe);
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
B4befc0:L4befc0:{c.instructions+=5;NFSU2_TR(0x4befc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4befc2:{NFSU2_TR(0x4befc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4befc3:{NFSU2_TR(0x4befc3);
__builtin_memmove((R+4),(R+24),4);
}
B4befc5:{NFSU2_TR(0x4befc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4befcd:{NFSU2_TR(0x4befcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4befd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4befd0:L4befd0:{c.instructions+=2;NFSU2_TR(0x4befd0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4befd7:{NFSU2_TR(0x4befd7);
if(r1(R+518)){TAIL_STATIC(0x4bf03bu,4bf);}
}
B4befd9:L4befd9:{c.instructions+=4;NFSU2_TR(0x4befd9);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4befde:{NFSU2_TR(0x4befde);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4befe4:{NFSU2_TR(0x4befe4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4befe6:{NFSU2_TR(0x4befe6);
if(r1(R+518)){TAIL_STATIC(0x4bf03bu,4bf);}
}
B4befe8:L4befe8:{c.instructions+=3;NFSU2_TR(0x4befe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4befee:{NFSU2_TR(0x4befee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4beff0:{NFSU2_TR(0x4beff0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4bf03bu,4bf);}
}
B4beff2:L4beff2:{c.instructions+=2;NFSU2_TR(0x4beff2);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4beff4:{NFSU2_TR(0x4beff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4beff9ull));
TAIL_STATIC(0x575620u,575);
}
B4beff9:L4beff9:{c.instructions+=3;NFSU2_TR(0x4beff9);
__builtin_memmove((R+28),(R+0),4);
}
B4beffb:{NFSU2_TR(0x4beffb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4beffe:{NFSU2_TR(0x4beffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4bf002u,4bf);
}
XIT:NFSU2_TR_EXIT(0x4be,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
