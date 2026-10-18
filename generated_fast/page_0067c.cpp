#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_67b(u8* __restrict R,Cpu& c);
u32 body_67d(u8* __restrict R,Cpu& c);
u32 body_67f(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x67c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x67c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_67c(u8* __restrict R,Cpu& c);
u32 page_67c(Cpu& c){return body_67c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_67c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x67c000:goto L67c000;
case 0x67c006:c.instructions+=29;goto B67c006;
case 0x67c009:c.instructions+=28;goto B67c009;
case 0x67c00f:c.instructions+=27;goto B67c00f;
case 0x67c012:c.instructions+=26;goto B67c012;
case 0x67c018:c.instructions+=25;goto B67c018;
case 0x67c01b:c.instructions+=24;goto B67c01b;
case 0x67c021:c.instructions+=23;goto B67c021;
case 0x67c024:c.instructions+=22;goto B67c024;
case 0x67c02a:c.instructions+=21;goto B67c02a;
case 0x67c02d:c.instructions+=20;goto B67c02d;
case 0x67c033:c.instructions+=19;goto B67c033;
case 0x67c036:c.instructions+=18;goto B67c036;
case 0x67c03c:c.instructions+=17;goto B67c03c;
case 0x67c03f:c.instructions+=16;goto B67c03f;
case 0x67c045:c.instructions+=15;goto B67c045;
case 0x67c048:c.instructions+=14;goto B67c048;
case 0x67c04e:c.instructions+=13;goto B67c04e;
case 0x67c051:c.instructions+=12;goto B67c051;
case 0x67c052:c.instructions+=11;goto B67c052;
case 0x67c058:c.instructions+=10;goto B67c058;
case 0x67c05e:c.instructions+=9;goto B67c05e;
case 0x67c05f:c.instructions+=8;goto B67c05f;
case 0x67c065:c.instructions+=7;goto B67c065;
case 0x67c066:c.instructions+=6;goto B67c066;
case 0x67c06c:c.instructions+=5;goto B67c06c;
case 0x67c06d:c.instructions+=4;goto B67c06d;
case 0x67c072:c.instructions+=3;goto B67c072;
case 0x67c075:c.instructions+=2;goto B67c075;
case 0x67c077:c.instructions+=1;goto B67c077;
case 0x67c07c:goto L67c07c;
case 0x67c07e:c.instructions+=2;goto B67c07e;
case 0x67c080:c.instructions+=1;goto B67c080;
case 0x67c086:goto L67c086;
case 0x67c087:c.instructions+=10;goto B67c087;
case 0x67c08d:c.instructions+=9;goto B67c08d;
case 0x67c08e:c.instructions+=8;goto B67c08e;
case 0x67c094:c.instructions+=7;goto B67c094;
case 0x67c095:c.instructions+=6;goto B67c095;
case 0x67c09b:c.instructions+=5;goto B67c09b;
case 0x67c09c:c.instructions+=4;goto B67c09c;
case 0x67c0a1:c.instructions+=3;goto B67c0a1;
case 0x67c0a4:c.instructions+=2;goto B67c0a4;
case 0x67c0a6:c.instructions+=1;goto B67c0a6;
case 0x67c0ab:goto L67c0ab;
case 0x67c0ad:c.instructions+=2;goto B67c0ad;
case 0x67c0af:c.instructions+=1;goto B67c0af;
case 0x67c0b5:goto L67c0b5;
case 0x67c0b6:c.instructions+=10;goto B67c0b6;
case 0x67c0bc:c.instructions+=9;goto B67c0bc;
case 0x67c0bd:c.instructions+=8;goto B67c0bd;
case 0x67c0c3:c.instructions+=7;goto B67c0c3;
case 0x67c0c4:c.instructions+=6;goto B67c0c4;
case 0x67c0ca:c.instructions+=5;goto B67c0ca;
case 0x67c0cb:c.instructions+=4;goto B67c0cb;
case 0x67c0d0:c.instructions+=3;goto B67c0d0;
case 0x67c0d3:c.instructions+=2;goto B67c0d3;
case 0x67c0d5:c.instructions+=1;goto B67c0d5;
case 0x67c0da:goto L67c0da;
case 0x67c0dc:c.instructions+=2;goto B67c0dc;
case 0x67c0de:c.instructions+=1;goto B67c0de;
case 0x67c0e4:goto L67c0e4;
case 0x67c0e5:c.instructions+=10;goto B67c0e5;
case 0x67c0eb:c.instructions+=9;goto B67c0eb;
case 0x67c0ec:c.instructions+=8;goto B67c0ec;
case 0x67c0f2:c.instructions+=7;goto B67c0f2;
case 0x67c0f3:c.instructions+=6;goto B67c0f3;
case 0x67c0f9:c.instructions+=5;goto B67c0f9;
case 0x67c0fa:c.instructions+=4;goto B67c0fa;
case 0x67c0ff:c.instructions+=3;goto B67c0ff;
case 0x67c102:c.instructions+=2;goto B67c102;
case 0x67c104:c.instructions+=1;goto B67c104;
case 0x67c109:goto L67c109;
case 0x67c10b:c.instructions+=2;goto B67c10b;
case 0x67c10d:c.instructions+=1;goto B67c10d;
case 0x67c113:goto L67c113;
case 0x67c114:c.instructions+=9;goto B67c114;
case 0x67c115:c.instructions+=8;goto B67c115;
case 0x67c11b:c.instructions+=7;goto B67c11b;
case 0x67c11c:c.instructions+=6;goto B67c11c;
case 0x67c122:c.instructions+=5;goto B67c122;
case 0x67c123:c.instructions+=4;goto B67c123;
case 0x67c128:c.instructions+=3;goto B67c128;
case 0x67c12b:c.instructions+=2;goto B67c12b;
case 0x67c12d:c.instructions+=1;goto B67c12d;
case 0x67c132:goto L67c132;
case 0x67c134:c.instructions+=2;goto B67c134;
case 0x67c136:c.instructions+=1;goto B67c136;
case 0x67c13c:goto L67c13c;
case 0x67c13d:c.instructions+=9;goto B67c13d;
case 0x67c13e:c.instructions+=8;goto B67c13e;
case 0x67c144:c.instructions+=7;goto B67c144;
case 0x67c145:c.instructions+=6;goto B67c145;
case 0x67c14b:c.instructions+=5;goto B67c14b;
case 0x67c14c:c.instructions+=4;goto B67c14c;
case 0x67c151:c.instructions+=3;goto B67c151;
case 0x67c154:c.instructions+=2;goto B67c154;
case 0x67c156:c.instructions+=1;goto B67c156;
case 0x67c15b:goto L67c15b;
case 0x67c15d:c.instructions+=2;goto B67c15d;
case 0x67c15f:c.instructions+=1;goto B67c15f;
case 0x67c165:goto L67c165;
case 0x67c166:c.instructions+=9;goto B67c166;
case 0x67c167:c.instructions+=8;goto B67c167;
case 0x67c16d:c.instructions+=7;goto B67c16d;
case 0x67c16e:c.instructions+=6;goto B67c16e;
case 0x67c174:c.instructions+=5;goto B67c174;
case 0x67c175:c.instructions+=4;goto B67c175;
case 0x67c17a:c.instructions+=3;goto B67c17a;
case 0x67c17d:c.instructions+=2;goto B67c17d;
case 0x67c17f:c.instructions+=1;goto B67c17f;
case 0x67c184:goto L67c184;
case 0x67c186:c.instructions+=2;goto B67c186;
case 0x67c188:c.instructions+=1;goto B67c188;
case 0x67c18e:goto L67c18e;
case 0x67c18f:c.instructions+=9;goto B67c18f;
case 0x67c190:c.instructions+=8;goto B67c190;
case 0x67c196:c.instructions+=7;goto B67c196;
case 0x67c197:c.instructions+=6;goto B67c197;
case 0x67c19d:c.instructions+=5;goto B67c19d;
case 0x67c19e:c.instructions+=4;goto B67c19e;
case 0x67c1a3:c.instructions+=3;goto B67c1a3;
case 0x67c1a6:c.instructions+=2;goto B67c1a6;
case 0x67c1a8:c.instructions+=1;goto B67c1a8;
case 0x67c1ad:goto L67c1ad;
case 0x67c1af:c.instructions+=2;goto B67c1af;
case 0x67c1b1:c.instructions+=1;goto B67c1b1;
case 0x67c1b7:goto L67c1b7;
case 0x67c1b8:c.instructions+=10;goto B67c1b8;
case 0x67c1be:c.instructions+=9;goto B67c1be;
case 0x67c1bf:c.instructions+=8;goto B67c1bf;
case 0x67c1c5:c.instructions+=7;goto B67c1c5;
case 0x67c1c6:c.instructions+=6;goto B67c1c6;
case 0x67c1cc:c.instructions+=5;goto B67c1cc;
case 0x67c1cd:c.instructions+=4;goto B67c1cd;
case 0x67c1d2:c.instructions+=3;goto B67c1d2;
case 0x67c1d5:c.instructions+=2;goto B67c1d5;
case 0x67c1d7:c.instructions+=1;goto B67c1d7;
case 0x67c1dc:goto L67c1dc;
case 0x67c1de:c.instructions+=2;goto B67c1de;
case 0x67c1e0:c.instructions+=1;goto B67c1e0;
case 0x67c1e6:goto L67c1e6;
case 0x67c1e7:c.instructions+=10;goto B67c1e7;
case 0x67c1ed:c.instructions+=9;goto B67c1ed;
case 0x67c1ee:c.instructions+=8;goto B67c1ee;
case 0x67c1f4:c.instructions+=7;goto B67c1f4;
case 0x67c1f5:c.instructions+=6;goto B67c1f5;
case 0x67c1fb:c.instructions+=5;goto B67c1fb;
case 0x67c1fc:c.instructions+=4;goto B67c1fc;
case 0x67c201:c.instructions+=3;goto B67c201;
case 0x67c204:c.instructions+=2;goto B67c204;
case 0x67c206:c.instructions+=1;goto B67c206;
case 0x67c20b:goto L67c20b;
case 0x67c20d:c.instructions+=2;goto B67c20d;
case 0x67c20f:c.instructions+=1;goto B67c20f;
case 0x67c215:goto L67c215;
case 0x67c216:c.instructions+=10;goto B67c216;
case 0x67c21c:c.instructions+=9;goto B67c21c;
case 0x67c21d:c.instructions+=8;goto B67c21d;
case 0x67c223:c.instructions+=7;goto B67c223;
case 0x67c224:c.instructions+=6;goto B67c224;
case 0x67c22a:c.instructions+=5;goto B67c22a;
case 0x67c22b:c.instructions+=4;goto B67c22b;
case 0x67c230:c.instructions+=3;goto B67c230;
case 0x67c233:c.instructions+=2;goto B67c233;
case 0x67c235:c.instructions+=1;goto B67c235;
case 0x67c23a:goto L67c23a;
case 0x67c23c:c.instructions+=2;goto B67c23c;
case 0x67c23e:c.instructions+=1;goto B67c23e;
case 0x67c244:goto L67c244;
case 0x67c245:c.instructions+=10;goto B67c245;
case 0x67c24b:c.instructions+=9;goto B67c24b;
case 0x67c24c:c.instructions+=8;goto B67c24c;
case 0x67c252:c.instructions+=7;goto B67c252;
case 0x67c253:c.instructions+=6;goto B67c253;
case 0x67c259:c.instructions+=5;goto B67c259;
case 0x67c25a:c.instructions+=4;goto B67c25a;
case 0x67c25f:c.instructions+=3;goto B67c25f;
case 0x67c262:c.instructions+=2;goto B67c262;
case 0x67c264:c.instructions+=1;goto B67c264;
case 0x67c269:goto L67c269;
case 0x67c26b:c.instructions+=2;goto B67c26b;
case 0x67c26d:c.instructions+=1;goto B67c26d;
case 0x67c273:goto L67c273;
case 0x67c276:c.instructions+=35;goto B67c276;
case 0x67c279:c.instructions+=34;goto B67c279;
case 0x67c27f:c.instructions+=33;goto B67c27f;
case 0x67c282:c.instructions+=32;goto B67c282;
case 0x67c288:c.instructions+=31;goto B67c288;
case 0x67c28b:c.instructions+=30;goto B67c28b;
case 0x67c291:c.instructions+=29;goto B67c291;
case 0x67c294:c.instructions+=28;goto B67c294;
case 0x67c29a:c.instructions+=27;goto B67c29a;
case 0x67c29d:c.instructions+=26;goto B67c29d;
case 0x67c2a3:c.instructions+=25;goto B67c2a3;
case 0x67c2a6:c.instructions+=24;goto B67c2a6;
case 0x67c2ac:c.instructions+=23;goto B67c2ac;
case 0x67c2af:c.instructions+=22;goto B67c2af;
case 0x67c2b5:c.instructions+=21;goto B67c2b5;
case 0x67c2b8:c.instructions+=20;goto B67c2b8;
case 0x67c2be:c.instructions+=19;goto B67c2be;
case 0x67c2c1:c.instructions+=18;goto B67c2c1;
case 0x67c2c7:c.instructions+=17;goto B67c2c7;
case 0x67c2ca:c.instructions+=16;goto B67c2ca;
case 0x67c2d0:c.instructions+=15;goto B67c2d0;
case 0x67c2d3:c.instructions+=14;goto B67c2d3;
case 0x67c2d9:c.instructions+=13;goto B67c2d9;
case 0x67c2dc:c.instructions+=12;goto B67c2dc;
case 0x67c2dd:c.instructions+=11;goto B67c2dd;
case 0x67c2e0:c.instructions+=10;goto B67c2e0;
case 0x67c2e6:c.instructions+=9;goto B67c2e6;
case 0x67c2e7:c.instructions+=8;goto B67c2e7;
case 0x67c2ed:c.instructions+=7;goto B67c2ed;
case 0x67c2ee:c.instructions+=6;goto B67c2ee;
case 0x67c2f1:c.instructions+=5;goto B67c2f1;
case 0x67c2f2:c.instructions+=4;goto B67c2f2;
case 0x67c2f7:c.instructions+=3;goto B67c2f7;
case 0x67c2fa:c.instructions+=2;goto B67c2fa;
case 0x67c2fc:c.instructions+=1;goto B67c2fc;
case 0x67c301:goto L67c301;
case 0x67c303:c.instructions+=2;goto B67c303;
case 0x67c305:c.instructions+=1;goto B67c305;
case 0x67c30b:goto L67c30b;
case 0x67c30c:c.instructions+=10;goto B67c30c;
case 0x67c312:c.instructions+=9;goto B67c312;
case 0x67c313:c.instructions+=8;goto B67c313;
case 0x67c319:c.instructions+=7;goto B67c319;
case 0x67c31a:c.instructions+=6;goto B67c31a;
case 0x67c31d:c.instructions+=5;goto B67c31d;
case 0x67c31e:c.instructions+=4;goto B67c31e;
case 0x67c323:c.instructions+=3;goto B67c323;
case 0x67c326:c.instructions+=2;goto B67c326;
case 0x67c328:c.instructions+=1;goto B67c328;
case 0x67c32d:goto L67c32d;
case 0x67c32f:c.instructions+=2;goto B67c32f;
case 0x67c331:c.instructions+=1;goto B67c331;
case 0x67c337:goto L67c337;
case 0x67c338:c.instructions+=10;goto B67c338;
case 0x67c33e:c.instructions+=9;goto B67c33e;
case 0x67c33f:c.instructions+=8;goto B67c33f;
case 0x67c345:c.instructions+=7;goto B67c345;
case 0x67c346:c.instructions+=6;goto B67c346;
case 0x67c349:c.instructions+=5;goto B67c349;
case 0x67c34a:c.instructions+=4;goto B67c34a;
case 0x67c34f:c.instructions+=3;goto B67c34f;
case 0x67c352:c.instructions+=2;goto B67c352;
case 0x67c354:c.instructions+=1;goto B67c354;
case 0x67c359:goto L67c359;
case 0x67c35b:c.instructions+=2;goto B67c35b;
case 0x67c35d:c.instructions+=1;goto B67c35d;
case 0x67c363:goto L67c363;
case 0x67c364:c.instructions+=10;goto B67c364;
case 0x67c36a:c.instructions+=9;goto B67c36a;
case 0x67c36b:c.instructions+=8;goto B67c36b;
case 0x67c371:c.instructions+=7;goto B67c371;
case 0x67c372:c.instructions+=6;goto B67c372;
case 0x67c375:c.instructions+=5;goto B67c375;
case 0x67c376:c.instructions+=4;goto B67c376;
case 0x67c37b:c.instructions+=3;goto B67c37b;
case 0x67c37e:c.instructions+=2;goto B67c37e;
case 0x67c380:c.instructions+=1;goto B67c380;
case 0x67c385:goto L67c385;
case 0x67c387:c.instructions+=2;goto B67c387;
case 0x67c389:c.instructions+=1;goto B67c389;
case 0x67c38f:goto L67c38f;
case 0x67c392:c.instructions+=16;goto B67c392;
case 0x67c394:c.instructions+=15;goto B67c394;
case 0x67c39a:c.instructions+=14;goto B67c39a;
case 0x67c39d:c.instructions+=13;goto B67c39d;
case 0x67c3a3:c.instructions+=12;goto B67c3a3;
case 0x67c3a6:c.instructions+=11;goto B67c3a6;
case 0x67c3ac:c.instructions+=10;goto B67c3ac;
case 0x67c3af:c.instructions+=9;goto B67c3af;
case 0x67c3b0:c.instructions+=8;goto B67c3b0;
case 0x67c3b6:c.instructions+=7;goto B67c3b6;
case 0x67c3bc:c.instructions+=6;goto B67c3bc;
case 0x67c3bd:c.instructions+=5;goto B67c3bd;
case 0x67c3c0:c.instructions+=4;goto B67c3c0;
case 0x67c3c1:c.instructions+=3;goto B67c3c1;
case 0x67c3c4:c.instructions+=2;goto B67c3c4;
case 0x67c3c9:c.instructions+=1;goto B67c3c9;
case 0x67c3ce:goto L67c3ce;
case 0x67c3d0:c.instructions+=2;goto B67c3d0;
case 0x67c3d3:c.instructions+=1;goto B67c3d3;
case 0x67c3d9:goto L67c3d9;
case 0x67c3dc:c.instructions+=1;goto B67c3dc;
case 0x67c3e2:goto L67c3e2;
case 0x67c3e5:c.instructions+=1;goto B67c3e5;
case 0x67c3eb:goto L67c3eb;
case 0x67c3f1:c.instructions+=4;goto B67c3f1;
case 0x67c3f4:c.instructions+=3;goto B67c3f4;
case 0x67c3f5:c.instructions+=2;goto B67c3f5;
case 0x67c3f7:c.instructions+=1;goto B67c3f7;
case 0x67c3fc:goto L67c3fc;
case 0x67c3fe:c.instructions+=1;goto B67c3fe;
case 0x67c404:goto L67c404;
case 0x67c406:c.instructions+=2;goto B67c406;
case 0x67c408:c.instructions+=1;goto B67c408;
case 0x67c40b:goto L67c40b;
case 0x67c40f:c.instructions+=4;goto B67c40f;
case 0x67c410:c.instructions+=3;goto B67c410;
case 0x67c412:c.instructions+=2;goto B67c412;
case 0x67c415:c.instructions+=1;goto B67c415;
case 0x67c417:goto L67c417;
case 0x67c41d:c.instructions+=3;goto B67c41d;
case 0x67c41f:c.instructions+=2;goto B67c41f;
case 0x67c422:c.instructions+=1;goto B67c422;
case 0x67c427:goto L67c427;
case 0x67c429:c.instructions+=2;goto B67c429;
case 0x67c42b:c.instructions+=1;goto B67c42b;
case 0x67c431:goto L67c431;
case 0x67c437:c.instructions+=3;goto B67c437;
case 0x67c439:c.instructions+=2;goto B67c439;
case 0x67c43c:c.instructions+=1;goto B67c43c;
case 0x67c441:goto L67c441;
case 0x67c443:c.instructions+=2;goto B67c443;
case 0x67c445:c.instructions+=1;goto B67c445;
case 0x67c44b:goto L67c44b;
case 0x67c44d:c.instructions+=4;goto B67c44d;
case 0x67c450:c.instructions+=3;goto B67c450;
case 0x67c451:c.instructions+=2;goto B67c451;
case 0x67c453:c.instructions+=1;goto B67c453;
case 0x67c458:goto L67c458;
case 0x67c45a:c.instructions+=2;goto B67c45a;
case 0x67c45c:c.instructions+=1;goto B67c45c;
case 0x67c462:goto L67c462;
case 0x67c464:c.instructions+=4;goto B67c464;
case 0x67c467:c.instructions+=3;goto B67c467;
case 0x67c468:c.instructions+=2;goto B67c468;
case 0x67c46a:c.instructions+=1;goto B67c46a;
case 0x67c46f:goto L67c46f;
case 0x67c471:c.instructions+=2;goto B67c471;
case 0x67c473:c.instructions+=1;goto B67c473;
case 0x67c479:goto L67c479;
case 0x67c47b:c.instructions+=3;goto B67c47b;
case 0x67c47e:c.instructions+=2;goto B67c47e;
case 0x67c480:c.instructions+=1;goto B67c480;
case 0x67c485:goto L67c485;
case 0x67c487:c.instructions+=2;goto B67c487;
case 0x67c489:c.instructions+=1;goto B67c489;
case 0x67c48f:goto L67c48f;
case 0x67c495:c.instructions+=11;goto B67c495;
case 0x67c496:c.instructions+=10;goto B67c496;
case 0x67c497:c.instructions+=9;goto B67c497;
case 0x67c49a:c.instructions+=8;goto B67c49a;
case 0x67c49f:c.instructions+=7;goto B67c49f;
case 0x67c4a2:c.instructions+=6;goto B67c4a2;
case 0x67c4a5:c.instructions+=5;goto B67c4a5;
case 0x67c4aa:c.instructions+=4;goto B67c4aa;
case 0x67c4ab:c.instructions+=3;goto B67c4ab;
case 0x67c4ae:c.instructions+=2;goto B67c4ae;
case 0x67c4b0:c.instructions+=1;goto B67c4b0;
case 0x67c4b5:goto L67c4b5;
case 0x67c4b7:c.instructions+=2;goto B67c4b7;
case 0x67c4b9:c.instructions+=1;goto B67c4b9;
case 0x67c4bf:goto L67c4bf;
case 0x67c4c2:c.instructions+=9;goto B67c4c2;
case 0x67c4c3:c.instructions+=8;goto B67c4c3;
case 0x67c4c6:c.instructions+=7;goto B67c4c6;
case 0x67c4cb:c.instructions+=6;goto B67c4cb;
case 0x67c4ce:c.instructions+=5;goto B67c4ce;
case 0x67c4d0:c.instructions+=4;goto B67c4d0;
case 0x67c4d3:c.instructions+=3;goto B67c4d3;
case 0x67c4d4:c.instructions+=2;goto B67c4d4;
case 0x67c4d7:c.instructions+=1;goto B67c4d7;
case 0x67c4dc:goto L67c4dc;
case 0x67c4de:c.instructions+=2;goto B67c4de;
case 0x67c4e0:c.instructions+=1;goto B67c4e0;
case 0x67c4e6:goto L67c4e6;
case 0x67c4e8:c.instructions+=10;goto B67c4e8;
case 0x67c4eb:c.instructions+=9;goto B67c4eb;
case 0x67c4ee:c.instructions+=8;goto B67c4ee;
case 0x67c4f1:c.instructions+=7;goto B67c4f1;
case 0x67c4f2:c.instructions+=6;goto B67c4f2;
case 0x67c4f5:c.instructions+=5;goto B67c4f5;
case 0x67c4fa:c.instructions+=4;goto B67c4fa;
case 0x67c4fb:c.instructions+=3;goto B67c4fb;
case 0x67c4fe:c.instructions+=2;goto B67c4fe;
case 0x67c500:c.instructions+=1;goto B67c500;
case 0x67c505:goto L67c505;
case 0x67c507:c.instructions+=2;goto B67c507;
case 0x67c509:c.instructions+=1;goto B67c509;
case 0x67c50f:goto L67c50f;
case 0x67c511:c.instructions+=9;goto B67c511;
case 0x67c512:c.instructions+=8;goto B67c512;
case 0x67c515:c.instructions+=7;goto B67c515;
case 0x67c516:c.instructions+=6;goto B67c516;
case 0x67c519:c.instructions+=5;goto B67c519;
case 0x67c51a:c.instructions+=4;goto B67c51a;
case 0x67c51f:c.instructions+=3;goto B67c51f;
case 0x67c522:c.instructions+=2;goto B67c522;
case 0x67c524:c.instructions+=1;goto B67c524;
case 0x67c529:goto L67c529;
case 0x67c52b:c.instructions+=2;goto B67c52b;
case 0x67c52d:c.instructions+=1;goto B67c52d;
case 0x67c533:goto L67c533;
case 0x67c535:c.instructions+=6;goto B67c535;
case 0x67c536:c.instructions+=5;goto B67c536;
case 0x67c539:c.instructions+=4;goto B67c539;
case 0x67c53a:c.instructions+=3;goto B67c53a;
case 0x67c53d:c.instructions+=2;goto B67c53d;
case 0x67c542:c.instructions+=1;goto B67c542;
case 0x67c547:goto L67c547;
case 0x67c549:c.instructions+=2;goto B67c549;
case 0x67c54c:c.instructions+=1;goto B67c54c;
case 0x67c552:goto L67c552;
case 0x67c555:c.instructions+=1;goto B67c555;
case 0x67c55b:goto L67c55b;
case 0x67c55e:c.instructions+=1;goto B67c55e;
case 0x67c564:goto L67c564;
case 0x67c567:c.instructions+=3;goto B67c567;
case 0x67c569:c.instructions+=2;goto B67c569;
case 0x67c56c:c.instructions+=1;goto B67c56c;
case 0x67c571:goto L67c571;
case 0x67c573:c.instructions+=2;goto B67c573;
case 0x67c575:c.instructions+=1;goto B67c575;
case 0x67c57b:goto L67c57b;
case 0x67c581:c.instructions+=5;goto B67c581;
case 0x67c582:c.instructions+=4;goto B67c582;
case 0x67c585:c.instructions+=3;goto B67c585;
case 0x67c58a:c.instructions+=2;goto B67c58a;
case 0x67c58f:c.instructions+=1;goto B67c58f;
case 0x67c594:goto L67c594;
case 0x67c596:c.instructions+=2;goto B67c596;
case 0x67c599:c.instructions+=1;goto B67c599;
case 0x67c59f:goto L67c59f;
case 0x67c5a2:c.instructions+=1;goto B67c5a2;
case 0x67c5a8:goto L67c5a8;
case 0x67c5ab:c.instructions+=1;goto B67c5ab;
case 0x67c5b1:goto L67c5b1;
case 0x67c5b4:c.instructions+=19;goto B67c5b4;
case 0x67c5b7:c.instructions+=18;goto B67c5b7;
case 0x67c5ba:c.instructions+=17;goto B67c5ba;
case 0x67c5bd:c.instructions+=16;goto B67c5bd;
case 0x67c5c0:c.instructions+=15;goto B67c5c0;
case 0x67c5c3:c.instructions+=14;goto B67c5c3;
case 0x67c5c6:c.instructions+=13;goto B67c5c6;
case 0x67c5c9:c.instructions+=12;goto B67c5c9;
case 0x67c5cc:c.instructions+=11;goto B67c5cc;
case 0x67c5cf:c.instructions+=10;goto B67c5cf;
case 0x67c5d2:c.instructions+=9;goto B67c5d2;
case 0x67c5d5:c.instructions+=8;goto B67c5d5;
case 0x67c5d8:c.instructions+=7;goto B67c5d8;
case 0x67c5d9:c.instructions+=6;goto B67c5d9;
case 0x67c5dc:c.instructions+=5;goto B67c5dc;
case 0x67c5df:c.instructions+=4;goto B67c5df;
case 0x67c5e2:c.instructions+=3;goto B67c5e2;
case 0x67c5e4:c.instructions+=2;goto B67c5e4;
case 0x67c5e7:c.instructions+=1;goto B67c5e7;
case 0x67c5ec:goto L67c5ec;
case 0x67c5ee:c.instructions+=2;goto B67c5ee;
case 0x67c5f0:c.instructions+=1;goto B67c5f0;
case 0x67c5f6:goto L67c5f6;
case 0x67c5f7:c.instructions+=7;goto B67c5f7;
case 0x67c5fa:c.instructions+=6;goto B67c5fa;
case 0x67c5fb:c.instructions+=5;goto B67c5fb;
case 0x67c5fe:c.instructions+=4;goto B67c5fe;
case 0x67c604:c.instructions+=3;goto B67c604;
case 0x67c605:c.instructions+=2;goto B67c605;
case 0x67c60b:c.instructions+=1;goto B67c60b;
case 0x67c610:goto L67c610;
case 0x67c612:c.instructions+=2;goto B67c612;
case 0x67c615:c.instructions+=1;goto B67c615;
case 0x67c61b:goto L67c61b;
case 0x67c61e:c.instructions+=1;goto B67c61e;
case 0x67c624:goto L67c624;
case 0x67c62a:c.instructions+=12;goto B67c62a;
case 0x67c62d:c.instructions+=11;goto B67c62d;
case 0x67c62f:c.instructions+=10;goto B67c62f;
case 0x67c630:c.instructions+=9;goto B67c630;
case 0x67c632:c.instructions+=8;goto B67c632;
case 0x67c633:c.instructions+=7;goto B67c633;
case 0x67c635:c.instructions+=6;goto B67c635;
case 0x67c63b:c.instructions+=5;goto B67c63b;
case 0x67c63e:c.instructions+=4;goto B67c63e;
case 0x67c63f:c.instructions+=3;goto B67c63f;
case 0x67c640:c.instructions+=2;goto B67c640;
case 0x67c643:c.instructions+=1;goto B67c643;
case 0x67c648:goto L67c648;
case 0x67c64b:c.instructions+=5;goto B67c64b;
case 0x67c64e:c.instructions+=4;goto B67c64e;
case 0x67c651:c.instructions+=3;goto B67c651;
case 0x67c652:c.instructions+=2;goto B67c652;
case 0x67c654:c.instructions+=1;goto B67c654;
case 0x67c659:goto L67c659;
case 0x67c65b:c.instructions+=1;goto B67c65b;
case 0x67c661:goto L67c661;
case 0x67c663:c.instructions+=2;goto B67c663;
case 0x67c665:c.instructions+=1;goto B67c665;
case 0x67c668:goto L67c668;
case 0x67c66f:c.instructions+=4;goto B67c66f;
case 0x67c670:c.instructions+=3;goto B67c670;
case 0x67c672:c.instructions+=2;goto B67c672;
case 0x67c675:c.instructions+=1;goto B67c675;
case 0x67c677:goto L67c677;
case 0x67c679:c.instructions+=1;goto B67c679;
case 0x67c67b:goto L67c67b;
case 0x67c67e:c.instructions+=2;goto B67c67e;
case 0x67c681:c.instructions+=1;goto B67c681;
case 0x67c687:goto L67c687;
case 0x67c689:goto L67c689;
case 0x67c68b:goto L67c68b;
case 0x67c68e:c.instructions+=3;goto B67c68e;
case 0x67c690:c.instructions+=2;goto B67c690;
case 0x67c696:c.instructions+=1;goto B67c696;
case 0x67c69b:goto L67c69b;
case 0x67c69d:c.instructions+=2;goto B67c69d;
case 0x67c69f:c.instructions+=1;goto B67c69f;
case 0x67c6a5:goto L67c6a5;
case 0x67c6a8:c.instructions+=3;goto B67c6a8;
case 0x67c6aa:c.instructions+=2;goto B67c6aa;
case 0x67c6ad:c.instructions+=1;goto B67c6ad;
case 0x67c6b2:goto L67c6b2;
case 0x67c6b4:c.instructions+=2;goto B67c6b4;
case 0x67c6b6:c.instructions+=1;goto B67c6b6;
case 0x67c6bc:goto L67c6bc;
case 0x67c6bf:c.instructions+=11;goto B67c6bf;
case 0x67c6c0:c.instructions+=10;goto B67c6c0;
case 0x67c6c6:c.instructions+=9;goto B67c6c6;
case 0x67c6cb:c.instructions+=8;goto B67c6cb;
case 0x67c6ce:c.instructions+=7;goto B67c6ce;
case 0x67c6d1:c.instructions+=6;goto B67c6d1;
case 0x67c6d7:c.instructions+=5;goto B67c6d7;
case 0x67c6dc:c.instructions+=4;goto B67c6dc;
case 0x67c6dd:c.instructions+=3;goto B67c6dd;
case 0x67c6e0:c.instructions+=2;goto B67c6e0;
case 0x67c6e2:c.instructions+=1;goto B67c6e2;
case 0x67c6e7:goto L67c6e7;
case 0x67c6e9:c.instructions+=2;goto B67c6e9;
case 0x67c6eb:c.instructions+=1;goto B67c6eb;
case 0x67c6f1:goto L67c6f1;
case 0x67c6f4:c.instructions+=5;goto B67c6f4;
case 0x67c6f6:c.instructions+=4;goto B67c6f6;
case 0x67c6f7:c.instructions+=3;goto B67c6f7;
case 0x67c6fd:c.instructions+=2;goto B67c6fd;
case 0x67c702:c.instructions+=1;goto B67c702;
case 0x67c707:goto L67c707;
case 0x67c709:c.instructions+=2;goto B67c709;
case 0x67c70c:c.instructions+=1;goto B67c70c;
case 0x67c712:goto L67c712;
case 0x67c715:c.instructions+=1;goto B67c715;
case 0x67c71b:goto L67c71b;
case 0x67c71e:c.instructions+=4;goto B67c71e;
case 0x67c71f:c.instructions+=3;goto B67c71f;
case 0x67c722:c.instructions+=2;goto B67c722;
case 0x67c724:c.instructions+=1;goto B67c724;
case 0x67c729:goto L67c729;
case 0x67c72b:c.instructions+=2;goto B67c72b;
case 0x67c72d:c.instructions+=1;goto B67c72d;
case 0x67c733:goto L67c733;
case 0x67c735:c.instructions+=5;goto B67c735;
case 0x67c736:c.instructions+=4;goto B67c736;
case 0x67c739:c.instructions+=3;goto B67c739;
case 0x67c73f:c.instructions+=2;goto B67c73f;
case 0x67c745:c.instructions+=1;goto B67c745;
case 0x67c74a:goto L67c74a;
case 0x67c74c:c.instructions+=2;goto B67c74c;
case 0x67c74f:c.instructions+=1;goto B67c74f;
case 0x67c755:goto L67c755;
case 0x67c758:c.instructions+=1;goto B67c758;
case 0x67c75e:goto L67c75e;
case 0x67c761:c.instructions+=1;goto B67c761;
case 0x67c767:goto L67c767;
case 0x67c76a:c.instructions+=1;goto B67c76a;
case 0x67c770:goto L67c770;
case 0x67c772:c.instructions+=4;goto B67c772;
case 0x67c775:c.instructions+=3;goto B67c775;
case 0x67c776:c.instructions+=2;goto B67c776;
case 0x67c778:c.instructions+=1;goto B67c778;
case 0x67c77d:goto L67c77d;
case 0x67c77f:c.instructions+=2;goto B67c77f;
case 0x67c781:c.instructions+=1;goto B67c781;
case 0x67c787:goto L67c787;
case 0x67c789:c.instructions+=4;goto B67c789;
case 0x67c78c:c.instructions+=3;goto B67c78c;
case 0x67c78d:c.instructions+=2;goto B67c78d;
case 0x67c78f:c.instructions+=1;goto B67c78f;
case 0x67c794:goto L67c794;
case 0x67c796:c.instructions+=2;goto B67c796;
case 0x67c798:c.instructions+=1;goto B67c798;
case 0x67c79e:goto L67c79e;
case 0x67c7a1:c.instructions+=12;goto B67c7a1;
case 0x67c7a2:c.instructions+=11;goto B67c7a2;
case 0x67c7a5:c.instructions+=10;goto B67c7a5;
case 0x67c7aa:c.instructions+=9;goto B67c7aa;
case 0x67c7ad:c.instructions+=8;goto B67c7ad;
case 0x67c7b0:c.instructions+=7;goto B67c7b0;
case 0x67c7b1:c.instructions+=6;goto B67c7b1;
case 0x67c7b4:c.instructions+=5;goto B67c7b4;
case 0x67c7b9:c.instructions+=4;goto B67c7b9;
case 0x67c7ba:c.instructions+=3;goto B67c7ba;
case 0x67c7bd:c.instructions+=2;goto B67c7bd;
case 0x67c7bf:c.instructions+=1;goto B67c7bf;
case 0x67c7c4:goto L67c7c4;
case 0x67c7c6:c.instructions+=2;goto B67c7c6;
case 0x67c7c8:c.instructions+=1;goto B67c7c8;
case 0x67c7ce:goto L67c7ce;
case 0x67c7d0:c.instructions+=10;goto B67c7d0;
case 0x67c7d3:c.instructions+=9;goto B67c7d3;
case 0x67c7d4:c.instructions+=8;goto B67c7d4;
case 0x67c7d7:c.instructions+=7;goto B67c7d7;
case 0x67c7d8:c.instructions+=6;goto B67c7d8;
case 0x67c7db:c.instructions+=5;goto B67c7db;
case 0x67c7dc:c.instructions+=4;goto B67c7dc;
case 0x67c7e1:c.instructions+=3;goto B67c7e1;
case 0x67c7e4:c.instructions+=2;goto B67c7e4;
case 0x67c7e6:c.instructions+=1;goto B67c7e6;
case 0x67c7eb:goto L67c7eb;
case 0x67c7ed:c.instructions+=2;goto B67c7ed;
case 0x67c7ef:c.instructions+=1;goto B67c7ef;
case 0x67c7f5:goto L67c7f5;
case 0x67c7f8:c.instructions+=4;goto B67c7f8;
case 0x67c7fb:c.instructions+=3;goto B67c7fb;
case 0x67c7fc:c.instructions+=2;goto B67c7fc;
case 0x67c7fe:c.instructions+=1;goto B67c7fe;
case 0x67c803:goto L67c803;
case 0x67c805:c.instructions+=1;goto B67c805;
case 0x67c80b:goto L67c80b;
case 0x67c80d:goto L67c80d;
case 0x67c811:c.instructions+=4;goto B67c811;
case 0x67c812:c.instructions+=3;goto B67c812;
case 0x67c814:c.instructions+=2;goto B67c814;
case 0x67c817:c.instructions+=1;goto B67c817;
case 0x67c819:goto L67c819;
case 0x67c81b:c.instructions+=2;goto B67c81b;
case 0x67c81e:c.instructions+=1;goto B67c81e;
case 0x67c820:goto L67c820;
case 0x67c823:c.instructions+=5;goto B67c823;
case 0x67c826:c.instructions+=4;goto B67c826;
case 0x67c829:c.instructions+=3;goto B67c829;
case 0x67c82a:c.instructions+=2;goto B67c82a;
case 0x67c82d:c.instructions+=1;goto B67c82d;
case 0x67c82f:goto L67c82f;
case 0x67c832:c.instructions+=3;goto B67c832;
case 0x67c834:c.instructions+=2;goto B67c834;
case 0x67c837:c.instructions+=1;goto B67c837;
case 0x67c83c:goto L67c83c;
case 0x67c83e:c.instructions+=2;goto B67c83e;
case 0x67c840:c.instructions+=1;goto B67c840;
case 0x67c846:goto L67c846;
case 0x67c849:c.instructions+=3;goto B67c849;
case 0x67c84b:c.instructions+=2;goto B67c84b;
case 0x67c84e:c.instructions+=1;goto B67c84e;
case 0x67c853:goto L67c853;
case 0x67c855:c.instructions+=2;goto B67c855;
case 0x67c857:c.instructions+=1;goto B67c857;
case 0x67c85d:goto L67c85d;
case 0x67c860:c.instructions+=3;goto B67c860;
case 0x67c862:c.instructions+=2;goto B67c862;
case 0x67c865:c.instructions+=1;goto B67c865;
case 0x67c86a:goto L67c86a;
case 0x67c86c:c.instructions+=2;goto B67c86c;
case 0x67c86e:c.instructions+=1;goto B67c86e;
case 0x67c874:goto L67c874;
case 0x67c877:c.instructions+=3;goto B67c877;
case 0x67c879:c.instructions+=2;goto B67c879;
case 0x67c87c:c.instructions+=1;goto B67c87c;
case 0x67c881:goto L67c881;
case 0x67c883:c.instructions+=2;goto B67c883;
case 0x67c885:c.instructions+=1;goto B67c885;
case 0x67c88b:goto L67c88b;
case 0x67c88e:c.instructions+=9;goto B67c88e;
case 0x67c88f:c.instructions+=8;goto B67c88f;
case 0x67c890:c.instructions+=7;goto B67c890;
case 0x67c893:c.instructions+=6;goto B67c893;
case 0x67c898:c.instructions+=5;goto B67c898;
case 0x67c89b:c.instructions+=4;goto B67c89b;
case 0x67c89d:c.instructions+=3;goto B67c89d;
case 0x67c89e:c.instructions+=2;goto B67c89e;
case 0x67c8a1:c.instructions+=1;goto B67c8a1;
case 0x67c8a6:goto L67c8a6;
case 0x67c8a8:c.instructions+=2;goto B67c8a8;
case 0x67c8aa:c.instructions+=1;goto B67c8aa;
case 0x67c8b0:goto L67c8b0;
case 0x67c8b3:c.instructions+=10;goto B67c8b3;
case 0x67c8b4:c.instructions+=9;goto B67c8b4;
case 0x67c8b7:c.instructions+=8;goto B67c8b7;
case 0x67c8bc:c.instructions+=7;goto B67c8bc;
case 0x67c8bf:c.instructions+=6;goto B67c8bf;
case 0x67c8c1:c.instructions+=5;goto B67c8c1;
case 0x67c8c4:c.instructions+=4;goto B67c8c4;
case 0x67c8c7:c.instructions+=3;goto B67c8c7;
case 0x67c8c8:c.instructions+=2;goto B67c8c8;
case 0x67c8cb:c.instructions+=1;goto B67c8cb;
case 0x67c8d0:goto L67c8d0;
case 0x67c8d2:c.instructions+=2;goto B67c8d2;
case 0x67c8d4:c.instructions+=1;goto B67c8d4;
case 0x67c8da:goto L67c8da;
case 0x67c8dd:c.instructions+=9;goto B67c8dd;
case 0x67c8de:c.instructions+=8;goto B67c8de;
case 0x67c8e1:c.instructions+=7;goto B67c8e1;
case 0x67c8e6:c.instructions+=6;goto B67c8e6;
case 0x67c8e9:c.instructions+=5;goto B67c8e9;
case 0x67c8eb:c.instructions+=4;goto B67c8eb;
case 0x67c8ee:c.instructions+=3;goto B67c8ee;
case 0x67c8ef:c.instructions+=2;goto B67c8ef;
case 0x67c8f2:c.instructions+=1;goto B67c8f2;
case 0x67c8f7:goto L67c8f7;
case 0x67c8f9:c.instructions+=2;goto B67c8f9;
case 0x67c8fb:c.instructions+=1;goto B67c8fb;
case 0x67c901:goto L67c901;
case 0x67c902:c.instructions+=5;goto B67c902;
case 0x67c905:c.instructions+=4;goto B67c905;
case 0x67c908:c.instructions+=3;goto B67c908;
case 0x67c90b:c.instructions+=2;goto B67c90b;
case 0x67c90e:c.instructions+=1;goto B67c90e;
case 0x67c913:goto L67c913;
case 0x67c915:c.instructions+=2;goto B67c915;
case 0x67c918:c.instructions+=1;goto B67c918;
case 0x67c91e:goto L67c91e;
case 0x67c921:c.instructions+=1;goto B67c921;
case 0x67c927:goto L67c927;
case 0x67c92a:c.instructions+=4;goto B67c92a;
case 0x67c92c:c.instructions+=3;goto B67c92c;
case 0x67c92d:c.instructions+=2;goto B67c92d;
case 0x67c92f:c.instructions+=1;goto B67c92f;
case 0x67c934:goto L67c934;
case 0x67c936:c.instructions+=2;goto B67c936;
case 0x67c939:c.instructions+=1;goto B67c939;
case 0x67c93f:goto L67c93f;
case 0x67c942:c.instructions+=6;goto B67c942;
case 0x67c943:c.instructions+=5;goto B67c943;
case 0x67c946:c.instructions+=4;goto B67c946;
case 0x67c947:c.instructions+=3;goto B67c947;
case 0x67c949:c.instructions+=2;goto B67c949;
case 0x67c94c:c.instructions+=1;goto B67c94c;
case 0x67c951:goto L67c951;
case 0x67c953:c.instructions+=2;goto B67c953;
case 0x67c955:c.instructions+=1;goto B67c955;
case 0x67c95b:goto L67c95b;
case 0x67c95e:c.instructions+=3;goto B67c95e;
case 0x67c960:c.instructions+=2;goto B67c960;
case 0x67c961:c.instructions+=1;goto B67c961;
case 0x67c966:goto L67c966;
case 0x67c968:c.instructions+=2;goto B67c968;
case 0x67c96a:c.instructions+=1;goto B67c96a;
case 0x67c970:goto L67c970;
case 0x67c973:c.instructions+=3;goto B67c973;
case 0x67c975:c.instructions+=2;goto B67c975;
case 0x67c978:c.instructions+=1;goto B67c978;
case 0x67c97d:goto L67c97d;
case 0x67c97f:c.instructions+=2;goto B67c97f;
case 0x67c981:c.instructions+=1;goto B67c981;
case 0x67c987:goto L67c987;
case 0x67c98a:c.instructions+=11;goto B67c98a;
case 0x67c98c:c.instructions+=10;goto B67c98c;
case 0x67c98d:c.instructions+=9;goto B67c98d;
case 0x67c990:c.instructions+=8;goto B67c990;
case 0x67c995:c.instructions+=7;goto B67c995;
case 0x67c998:c.instructions+=6;goto B67c998;
case 0x67c99b:c.instructions+=5;goto B67c99b;
case 0x67c9a0:c.instructions+=4;goto B67c9a0;
case 0x67c9a1:c.instructions+=3;goto B67c9a1;
case 0x67c9a4:c.instructions+=2;goto B67c9a4;
case 0x67c9a6:c.instructions+=1;goto B67c9a6;
case 0x67c9ab:goto L67c9ab;
case 0x67c9ad:c.instructions+=2;goto B67c9ad;
case 0x67c9af:c.instructions+=1;goto B67c9af;
case 0x67c9b5:goto L67c9b5;
case 0x67c9b8:c.instructions+=3;goto B67c9b8;
case 0x67c9ba:c.instructions+=2;goto B67c9ba;
case 0x67c9bf:c.instructions+=1;goto B67c9bf;
case 0x67c9c4:goto L67c9c4;
case 0x67c9c6:c.instructions+=2;goto B67c9c6;
case 0x67c9c9:c.instructions+=1;goto B67c9c9;
case 0x67c9cf:goto L67c9cf;
case 0x67c9d2:c.instructions+=1;goto B67c9d2;
case 0x67c9d8:goto L67c9d8;
case 0x67c9db:c.instructions+=1;goto B67c9db;
case 0x67c9e1:goto L67c9e1;
case 0x67c9e4:c.instructions+=5;goto B67c9e4;
case 0x67c9e6:c.instructions+=4;goto B67c9e6;
case 0x67c9e9:c.instructions+=3;goto B67c9e9;
case 0x67c9ea:c.instructions+=2;goto B67c9ea;
case 0x67c9ec:c.instructions+=1;goto B67c9ec;
case 0x67c9f1:goto L67c9f1;
case 0x67c9f3:c.instructions+=1;goto B67c9f3;
case 0x67c9f9:goto L67c9f9;
case 0x67c9fb:c.instructions+=2;goto B67c9fb;
case 0x67c9fd:c.instructions+=1;goto B67c9fd;
case 0x67ca00:goto L67ca00;
case 0x67ca04:c.instructions+=4;goto B67ca04;
case 0x67ca05:c.instructions+=3;goto B67ca05;
case 0x67ca07:c.instructions+=2;goto B67ca07;
case 0x67ca0a:c.instructions+=1;goto B67ca0a;
case 0x67ca0c:goto L67ca0c;
case 0x67ca0e:goto L67ca0e;
case 0x67ca11:c.instructions+=3;goto B67ca11;
case 0x67ca13:c.instructions+=2;goto B67ca13;
case 0x67ca17:c.instructions+=1;goto B67ca17;
case 0x67ca1c:goto L67ca1c;
case 0x67ca1e:c.instructions+=2;goto B67ca1e;
case 0x67ca20:c.instructions+=1;goto B67ca20;
case 0x67ca26:goto L67ca26;
case 0x67ca27:c.instructions+=2;goto B67ca27;
case 0x67ca2a:c.instructions+=1;goto B67ca2a;
case 0x67ca2c:goto L67ca2c;
case 0x67ca2f:c.instructions+=3;goto B67ca2f;
case 0x67ca31:c.instructions+=2;goto B67ca31;
case 0x67ca34:c.instructions+=1;goto B67ca34;
case 0x67ca39:goto L67ca39;
case 0x67ca3b:c.instructions+=2;goto B67ca3b;
case 0x67ca3d:c.instructions+=1;goto B67ca3d;
case 0x67ca43:goto L67ca43;
case 0x67ca46:c.instructions+=11;goto B67ca46;
case 0x67ca47:c.instructions+=10;goto B67ca47;
case 0x67ca48:c.instructions+=9;goto B67ca48;
case 0x67ca4b:c.instructions+=8;goto B67ca4b;
case 0x67ca50:c.instructions+=7;goto B67ca50;
case 0x67ca53:c.instructions+=6;goto B67ca53;
case 0x67ca56:c.instructions+=5;goto B67ca56;
case 0x67ca5b:c.instructions+=4;goto B67ca5b;
case 0x67ca5c:c.instructions+=3;goto B67ca5c;
case 0x67ca5f:c.instructions+=2;goto B67ca5f;
case 0x67ca61:c.instructions+=1;goto B67ca61;
case 0x67ca66:goto L67ca66;
case 0x67ca68:c.instructions+=2;goto B67ca68;
case 0x67ca6a:c.instructions+=1;goto B67ca6a;
case 0x67ca70:goto L67ca70;
case 0x67ca73:c.instructions+=10;goto B67ca73;
case 0x67ca74:c.instructions+=9;goto B67ca74;
case 0x67ca77:c.instructions+=8;goto B67ca77;
case 0x67ca7c:c.instructions+=7;goto B67ca7c;
case 0x67ca7f:c.instructions+=6;goto B67ca7f;
case 0x67ca81:c.instructions+=5;goto B67ca81;
case 0x67ca84:c.instructions+=4;goto B67ca84;
case 0x67ca87:c.instructions+=3;goto B67ca87;
case 0x67ca88:c.instructions+=2;goto B67ca88;
case 0x67ca8b:c.instructions+=1;goto B67ca8b;
case 0x67ca90:goto L67ca90;
case 0x67ca92:c.instructions+=2;goto B67ca92;
case 0x67ca94:c.instructions+=1;goto B67ca94;
case 0x67ca9a:goto L67ca9a;
case 0x67ca9d:c.instructions+=10;goto B67ca9d;
case 0x67ca9e:c.instructions+=9;goto B67ca9e;
case 0x67ca9f:c.instructions+=8;goto B67ca9f;
case 0x67caa2:c.instructions+=7;goto B67caa2;
case 0x67caa7:c.instructions+=6;goto B67caa7;
case 0x67caaa:c.instructions+=5;goto B67caaa;
case 0x67caac:c.instructions+=4;goto B67caac;
case 0x67caad:c.instructions+=3;goto B67caad;
case 0x67cab0:c.instructions+=2;goto B67cab0;
case 0x67cab3:c.instructions+=1;goto B67cab3;
case 0x67cab8:goto L67cab8;
case 0x67caba:c.instructions+=2;goto B67caba;
case 0x67cabc:c.instructions+=1;goto B67cabc;
case 0x67cac2:goto L67cac2;
case 0x67cac5:c.instructions+=9;goto B67cac5;
case 0x67cac7:c.instructions+=8;goto B67cac7;
case 0x67caca:c.instructions+=7;goto B67caca;
case 0x67cacf:c.instructions+=6;goto B67cacf;
case 0x67cad2:c.instructions+=5;goto B67cad2;
case 0x67cad4:c.instructions+=4;goto B67cad4;
case 0x67cad7:c.instructions+=3;goto B67cad7;
case 0x67cad8:c.instructions+=2;goto B67cad8;
case 0x67cadb:c.instructions+=1;goto B67cadb;
case 0x67cae0:goto L67cae0;
case 0x67cae2:c.instructions+=2;goto B67cae2;
case 0x67cae4:c.instructions+=1;goto B67cae4;
case 0x67caea:goto L67caea;
case 0x67caed:c.instructions+=9;goto B67caed;
case 0x67caef:c.instructions+=8;goto B67caef;
case 0x67caf0:c.instructions+=7;goto B67caf0;
case 0x67caf3:c.instructions+=6;goto B67caf3;
case 0x67caf8:c.instructions+=5;goto B67caf8;
case 0x67cafb:c.instructions+=4;goto B67cafb;
case 0x67cafd:c.instructions+=3;goto B67cafd;
case 0x67cafe:c.instructions+=2;goto B67cafe;
case 0x67cb01:c.instructions+=1;goto B67cb01;
case 0x67cb06:goto L67cb06;
case 0x67cb08:c.instructions+=2;goto B67cb08;
case 0x67cb0a:c.instructions+=1;goto B67cb0a;
case 0x67cb10:goto L67cb10;
case 0x67cb13:c.instructions+=9;goto B67cb13;
case 0x67cb15:c.instructions+=8;goto B67cb15;
case 0x67cb18:c.instructions+=7;goto B67cb18;
case 0x67cb1d:c.instructions+=6;goto B67cb1d;
case 0x67cb20:c.instructions+=5;goto B67cb20;
case 0x67cb22:c.instructions+=4;goto B67cb22;
case 0x67cb25:c.instructions+=3;goto B67cb25;
case 0x67cb26:c.instructions+=2;goto B67cb26;
case 0x67cb29:c.instructions+=1;goto B67cb29;
case 0x67cb2e:goto L67cb2e;
case 0x67cb30:c.instructions+=2;goto B67cb30;
case 0x67cb32:c.instructions+=1;goto B67cb32;
case 0x67cb38:goto L67cb38;
case 0x67cb39:c.instructions+=7;goto B67cb39;
case 0x67cb3a:c.instructions+=6;goto B67cb3a;
case 0x67cb3d:c.instructions+=5;goto B67cb3d;
case 0x67cb3f:c.instructions+=4;goto B67cb3f;
case 0x67cb42:c.instructions+=3;goto B67cb42;
case 0x67cb45:c.instructions+=2;goto B67cb45;
case 0x67cb48:c.instructions+=1;goto B67cb48;
case 0x67cb4d:goto L67cb4d;
case 0x67cb4f:c.instructions+=2;goto B67cb4f;
case 0x67cb51:c.instructions+=1;goto B67cb51;
case 0x67cb57:goto L67cb57;
case 0x67cb5a:c.instructions+=7;goto B67cb5a;
case 0x67cb5c:c.instructions+=6;goto B67cb5c;
case 0x67cb5f:c.instructions+=5;goto B67cb5f;
case 0x67cb62:c.instructions+=4;goto B67cb62;
case 0x67cb65:c.instructions+=3;goto B67cb65;
case 0x67cb68:c.instructions+=2;goto B67cb68;
case 0x67cb6b:c.instructions+=1;goto B67cb6b;
case 0x67cb70:goto L67cb70;
case 0x67cb72:c.instructions+=2;goto B67cb72;
case 0x67cb74:c.instructions+=1;goto B67cb74;
case 0x67cb7a:goto L67cb7a;
case 0x67cb7b:c.instructions+=3;goto B67cb7b;
case 0x67cb7e:c.instructions+=2;goto B67cb7e;
case 0x67cb81:c.instructions+=1;goto B67cb81;
case 0x67cb86:goto L67cb86;
case 0x67cb88:c.instructions+=2;goto B67cb88;
case 0x67cb8b:c.instructions+=1;goto B67cb8b;
case 0x67cb91:goto L67cb91;
case 0x67cb94:c.instructions+=1;goto B67cb94;
case 0x67cb9a:goto L67cb9a;
case 0x67cb9d:c.instructions+=4;goto B67cb9d;
case 0x67cb9e:c.instructions+=3;goto B67cb9e;
case 0x67cba1:c.instructions+=2;goto B67cba1;
case 0x67cba3:c.instructions+=1;goto B67cba3;
case 0x67cba8:goto L67cba8;
case 0x67cbaa:c.instructions+=2;goto B67cbaa;
case 0x67cbac:c.instructions+=1;goto B67cbac;
case 0x67cbb2:goto L67cbb2;
case 0x67cbb3:c.instructions+=5;goto B67cbb3;
case 0x67cbb4:c.instructions+=4;goto B67cbb4;
case 0x67cbb7:c.instructions+=3;goto B67cbb7;
case 0x67cbbd:c.instructions+=2;goto B67cbbd;
case 0x67cbc3:c.instructions+=1;goto B67cbc3;
case 0x67cbc8:goto L67cbc8;
case 0x67cbca:c.instructions+=2;goto B67cbca;
case 0x67cbcd:c.instructions+=1;goto B67cbcd;
case 0x67cbd3:goto L67cbd3;
case 0x67cbd6:c.instructions+=5;goto B67cbd6;
case 0x67cbd8:c.instructions+=4;goto B67cbd8;
case 0x67cbdb:c.instructions+=3;goto B67cbdb;
case 0x67cbdc:c.instructions+=2;goto B67cbdc;
case 0x67cbdf:c.instructions+=1;goto B67cbdf;
case 0x67cbe4:goto L67cbe4;
case 0x67cbe6:c.instructions+=3;goto B67cbe6;
case 0x67cbe7:c.instructions+=2;goto B67cbe7;
case 0x67cbea:c.instructions+=1;goto B67cbea;
case 0x67cbf0:goto L67cbf0;
case 0x67cbf3:c.instructions+=4;goto B67cbf3;
case 0x67cbf5:c.instructions+=3;goto B67cbf5;
case 0x67cbf6:c.instructions+=2;goto B67cbf6;
case 0x67cbf8:c.instructions+=1;goto B67cbf8;
case 0x67cbfd:goto L67cbfd;
case 0x67cbff:c.instructions+=1;goto B67cbff;
case 0x67cc05:goto L67cc05;
case 0x67cc07:goto L67cc07;
case 0x67cc0e:c.instructions+=4;goto B67cc0e;
case 0x67cc11:c.instructions+=3;goto B67cc11;
case 0x67cc12:c.instructions+=2;goto B67cc12;
case 0x67cc15:c.instructions+=1;goto B67cc15;
case 0x67cc17:goto L67cc17;
case 0x67cc1a:c.instructions+=3;goto B67cc1a;
case 0x67cc1c:c.instructions+=2;goto B67cc1c;
case 0x67cc22:c.instructions+=1;goto B67cc22;
case 0x67cc27:goto L67cc27;
case 0x67cc29:c.instructions+=2;goto B67cc29;
case 0x67cc2b:c.instructions+=1;goto B67cc2b;
case 0x67cc31:goto L67cc31;
case 0x67cc34:c.instructions+=3;goto B67cc34;
case 0x67cc36:c.instructions+=2;goto B67cc36;
case 0x67cc3c:c.instructions+=1;goto B67cc3c;
case 0x67cc41:goto L67cc41;
case 0x67cc43:c.instructions+=2;goto B67cc43;
case 0x67cc45:c.instructions+=1;goto B67cc45;
case 0x67cc4b:goto L67cc4b;
case 0x67cc4e:c.instructions+=3;goto B67cc4e;
case 0x67cc50:c.instructions+=2;goto B67cc50;
case 0x67cc56:c.instructions+=1;goto B67cc56;
case 0x67cc5b:goto L67cc5b;
case 0x67cc5d:c.instructions+=2;goto B67cc5d;
case 0x67cc5f:c.instructions+=1;goto B67cc5f;
case 0x67cc65:goto L67cc65;
case 0x67cc68:c.instructions+=3;goto B67cc68;
case 0x67cc6a:c.instructions+=2;goto B67cc6a;
case 0x67cc70:c.instructions+=1;goto B67cc70;
case 0x67cc75:goto L67cc75;
case 0x67cc77:c.instructions+=2;goto B67cc77;
case 0x67cc79:c.instructions+=1;goto B67cc79;
case 0x67cc7f:goto L67cc7f;
case 0x67cc82:c.instructions+=3;goto B67cc82;
case 0x67cc84:c.instructions+=2;goto B67cc84;
case 0x67cc8a:c.instructions+=1;goto B67cc8a;
case 0x67cc8f:goto L67cc8f;
case 0x67cc91:c.instructions+=2;goto B67cc91;
case 0x67cc93:c.instructions+=1;goto B67cc93;
case 0x67cc99:goto L67cc99;
case 0x67cc9c:c.instructions+=3;goto B67cc9c;
case 0x67cc9e:c.instructions+=2;goto B67cc9e;
case 0x67cca4:c.instructions+=1;goto B67cca4;
case 0x67cca9:goto L67cca9;
case 0x67ccab:c.instructions+=2;goto B67ccab;
case 0x67ccad:c.instructions+=1;goto B67ccad;
case 0x67ccb3:goto L67ccb3;
case 0x67ccb6:c.instructions+=3;goto B67ccb6;
case 0x67ccb8:c.instructions+=2;goto B67ccb8;
case 0x67ccbe:c.instructions+=1;goto B67ccbe;
case 0x67ccc3:goto L67ccc3;
case 0x67ccc5:c.instructions+=2;goto B67ccc5;
case 0x67ccc7:c.instructions+=1;goto B67ccc7;
case 0x67cccd:goto L67cccd;
case 0x67ccd0:c.instructions+=3;goto B67ccd0;
case 0x67ccd2:c.instructions+=2;goto B67ccd2;
case 0x67ccd8:c.instructions+=1;goto B67ccd8;
case 0x67ccdd:goto L67ccdd;
case 0x67ccdf:c.instructions+=2;goto B67ccdf;
case 0x67cce1:c.instructions+=1;goto B67cce1;
case 0x67cce7:goto L67cce7;
case 0x67ccea:c.instructions+=3;goto B67ccea;
case 0x67ccec:c.instructions+=2;goto B67ccec;
case 0x67ccef:c.instructions+=1;goto B67ccef;
case 0x67ccf4:goto L67ccf4;
case 0x67ccf6:c.instructions+=2;goto B67ccf6;
case 0x67ccf8:c.instructions+=1;goto B67ccf8;
case 0x67ccfe:goto L67ccfe;
case 0x67cd01:c.instructions+=12;goto B67cd01;
case 0x67cd02:c.instructions+=11;goto B67cd02;
case 0x67cd03:c.instructions+=10;goto B67cd03;
case 0x67cd06:c.instructions+=9;goto B67cd06;
case 0x67cd0b:c.instructions+=8;goto B67cd0b;
case 0x67cd11:c.instructions+=7;goto B67cd11;
case 0x67cd14:c.instructions+=6;goto B67cd14;
case 0x67cd19:c.instructions+=5;goto B67cd19;
case 0x67cd1a:c.instructions+=4;goto B67cd1a;
case 0x67cd1d:c.instructions+=3;goto B67cd1d;
case 0x67cd1f:c.instructions+=2;goto B67cd1f;
case 0x67cd22:c.instructions+=1;goto B67cd22;
case 0x67cd27:goto L67cd27;
case 0x67cd29:c.instructions+=2;goto B67cd29;
case 0x67cd2b:c.instructions+=1;goto B67cd2b;
case 0x67cd31:goto L67cd31;
case 0x67cd34:c.instructions+=9;goto B67cd34;
case 0x67cd36:c.instructions+=8;goto B67cd36;
case 0x67cd39:c.instructions+=7;goto B67cd39;
case 0x67cd3e:c.instructions+=6;goto B67cd3e;
case 0x67cd44:c.instructions+=5;goto B67cd44;
case 0x67cd46:c.instructions+=4;goto B67cd46;
case 0x67cd4c:c.instructions+=3;goto B67cd4c;
case 0x67cd4d:c.instructions+=2;goto B67cd4d;
case 0x67cd50:c.instructions+=1;goto B67cd50;
case 0x67cd55:goto L67cd55;
case 0x67cd57:c.instructions+=2;goto B67cd57;
case 0x67cd59:c.instructions+=1;goto B67cd59;
case 0x67cd5f:goto L67cd5f;
case 0x67cd61:c.instructions+=7;goto B67cd61;
case 0x67cd62:c.instructions+=6;goto B67cd62;
case 0x67cd68:c.instructions+=5;goto B67cd68;
case 0x67cd6a:c.instructions+=4;goto B67cd6a;
case 0x67cd70:c.instructions+=3;goto B67cd70;
case 0x67cd73:c.instructions+=2;goto B67cd73;
case 0x67cd76:c.instructions+=1;goto B67cd76;
case 0x67cd7b:goto L67cd7b;
case 0x67cd7d:c.instructions+=2;goto B67cd7d;
case 0x67cd7f:c.instructions+=1;goto B67cd7f;
case 0x67cd85:goto L67cd85;
case 0x67cd88:c.instructions+=9;goto B67cd88;
case 0x67cd8a:c.instructions+=8;goto B67cd8a;
case 0x67cd90:c.instructions+=7;goto B67cd90;
case 0x67cd95:c.instructions+=6;goto B67cd95;
case 0x67cd9b:c.instructions+=5;goto B67cd9b;
case 0x67cd9d:c.instructions+=4;goto B67cd9d;
case 0x67cda3:c.instructions+=3;goto B67cda3;
case 0x67cda4:c.instructions+=2;goto B67cda4;
case 0x67cda7:c.instructions+=1;goto B67cda7;
case 0x67cdac:goto L67cdac;
case 0x67cdae:c.instructions+=2;goto B67cdae;
case 0x67cdb0:c.instructions+=1;goto B67cdb0;
case 0x67cdb6:goto L67cdb6;
case 0x67cdb9:c.instructions+=10;goto B67cdb9;
case 0x67cdbb:c.instructions+=9;goto B67cdbb;
case 0x67cdc1:c.instructions+=8;goto B67cdc1;
case 0x67cdc6:c.instructions+=7;goto B67cdc6;
case 0x67cdcc:c.instructions+=6;goto B67cdcc;
case 0x67cdce:c.instructions+=5;goto B67cdce;
case 0x67cdd4:c.instructions+=4;goto B67cdd4;
case 0x67cdd7:c.instructions+=3;goto B67cdd7;
case 0x67cdd8:c.instructions+=2;goto B67cdd8;
case 0x67cddb:c.instructions+=1;goto B67cddb;
case 0x67cde0:goto L67cde0;
case 0x67cde2:c.instructions+=2;goto B67cde2;
case 0x67cde4:c.instructions+=1;goto B67cde4;
case 0x67cdea:goto L67cdea;
case 0x67cded:c.instructions+=9;goto B67cded;
case 0x67cdee:c.instructions+=8;goto B67cdee;
case 0x67cdef:c.instructions+=7;goto B67cdef;
case 0x67cdf5:c.instructions+=6;goto B67cdf5;
case 0x67cdfa:c.instructions+=5;goto B67cdfa;
case 0x67ce00:c.instructions+=4;goto B67ce00;
case 0x67ce02:c.instructions+=3;goto B67ce02;
case 0x67ce03:c.instructions+=2;goto B67ce03;
case 0x67ce06:c.instructions+=1;goto B67ce06;
case 0x67ce0b:goto L67ce0b;
case 0x67ce0d:c.instructions+=2;goto B67ce0d;
case 0x67ce0f:c.instructions+=1;goto B67ce0f;
case 0x67ce15:goto L67ce15;
case 0x67ce16:c.instructions+=7;goto B67ce16;
case 0x67ce17:c.instructions+=6;goto B67ce17;
case 0x67ce1d:c.instructions+=5;goto B67ce1d;
case 0x67ce1f:c.instructions+=4;goto B67ce1f;
case 0x67ce25:c.instructions+=3;goto B67ce25;
case 0x67ce28:c.instructions+=2;goto B67ce28;
case 0x67ce2b:c.instructions+=1;goto B67ce2b;
case 0x67ce30:goto L67ce30;
case 0x67ce32:c.instructions+=2;goto B67ce32;
case 0x67ce34:c.instructions+=1;goto B67ce34;
case 0x67ce3a:goto L67ce3a;
case 0x67ce3d:c.instructions+=9;goto B67ce3d;
case 0x67ce3f:c.instructions+=8;goto B67ce3f;
case 0x67ce40:c.instructions+=7;goto B67ce40;
case 0x67ce46:c.instructions+=6;goto B67ce46;
case 0x67ce4b:c.instructions+=5;goto B67ce4b;
case 0x67ce51:c.instructions+=4;goto B67ce51;
case 0x67ce53:c.instructions+=3;goto B67ce53;
case 0x67ce54:c.instructions+=2;goto B67ce54;
case 0x67ce57:c.instructions+=1;goto B67ce57;
case 0x67ce5c:goto L67ce5c;
case 0x67ce5e:c.instructions+=2;goto B67ce5e;
case 0x67ce60:c.instructions+=1;goto B67ce60;
case 0x67ce66:goto L67ce66;
case 0x67ce68:c.instructions+=7;goto B67ce68;
case 0x67ce6e:c.instructions+=6;goto B67ce6e;
case 0x67ce70:c.instructions+=5;goto B67ce70;
case 0x67ce76:c.instructions+=4;goto B67ce76;
case 0x67ce79:c.instructions+=3;goto B67ce79;
case 0x67ce7c:c.instructions+=2;goto B67ce7c;
case 0x67ce7f:c.instructions+=1;goto B67ce7f;
case 0x67ce84:goto L67ce84;
case 0x67ce86:c.instructions+=2;goto B67ce86;
case 0x67ce88:c.instructions+=1;goto B67ce88;
case 0x67ce8e:goto L67ce8e;
case 0x67ce91:c.instructions+=1;goto B67ce91;
case 0x67ce97:goto L67ce97;
case 0x67ce9a:c.instructions+=3;goto B67ce9a;
case 0x67ce9c:c.instructions+=2;goto B67ce9c;
case 0x67cea2:c.instructions+=1;goto B67cea2;
case 0x67cea7:goto L67cea7;
case 0x67cea9:c.instructions+=2;goto B67cea9;
case 0x67ceab:c.instructions+=1;goto B67ceab;
case 0x67ceb1:goto L67ceb1;
case 0x67ceb4:c.instructions+=3;goto B67ceb4;
case 0x67ceb6:c.instructions+=2;goto B67ceb6;
case 0x67ceb9:c.instructions+=1;goto B67ceb9;
case 0x67cebe:goto L67cebe;
case 0x67cec0:c.instructions+=2;goto B67cec0;
case 0x67cec2:c.instructions+=1;goto B67cec2;
case 0x67cec8:goto L67cec8;
case 0x67cecb:c.instructions+=3;goto B67cecb;
case 0x67cecd:c.instructions+=2;goto B67cecd;
case 0x67ced0:c.instructions+=1;goto B67ced0;
case 0x67ced5:goto L67ced5;
case 0x67ced7:c.instructions+=2;goto B67ced7;
case 0x67ced9:c.instructions+=1;goto B67ced9;
case 0x67cedf:goto L67cedf;
case 0x67cee2:c.instructions+=9;goto B67cee2;
case 0x67cee4:c.instructions+=8;goto B67cee4;
case 0x67cee5:c.instructions+=7;goto B67cee5;
case 0x67cee8:c.instructions+=6;goto B67cee8;
case 0x67ceed:c.instructions+=5;goto B67ceed;
case 0x67cef3:c.instructions+=4;goto B67cef3;
case 0x67cef5:c.instructions+=3;goto B67cef5;
case 0x67cef6:c.instructions+=2;goto B67cef6;
case 0x67cef9:c.instructions+=1;goto B67cef9;
case 0x67cefe:goto L67cefe;
case 0x67cf00:c.instructions+=2;goto B67cf00;
case 0x67cf02:c.instructions+=1;goto B67cf02;
case 0x67cf08:goto L67cf08;
case 0x67cf0b:c.instructions+=9;goto B67cf0b;
case 0x67cf0d:c.instructions+=8;goto B67cf0d;
case 0x67cf0e:c.instructions+=7;goto B67cf0e;
case 0x67cf14:c.instructions+=6;goto B67cf14;
case 0x67cf19:c.instructions+=5;goto B67cf19;
case 0x67cf1c:c.instructions+=4;goto B67cf1c;
case 0x67cf1e:c.instructions+=3;goto B67cf1e;
case 0x67cf1f:c.instructions+=2;goto B67cf1f;
case 0x67cf22:c.instructions+=1;goto B67cf22;
case 0x67cf27:goto L67cf27;
case 0x67cf29:c.instructions+=2;goto B67cf29;
case 0x67cf2b:c.instructions+=1;goto B67cf2b;
case 0x67cf31:goto L67cf31;
case 0x67cf32:c.instructions+=3;goto B67cf32;
case 0x67cf35:c.instructions+=2;goto B67cf35;
case 0x67cf38:c.instructions+=1;goto B67cf38;
case 0x67cf3d:goto L67cf3d;
case 0x67cf3f:c.instructions+=2;goto B67cf3f;
case 0x67cf42:c.instructions+=1;goto B67cf42;
case 0x67cf48:goto L67cf48;
case 0x67cf4b:c.instructions+=1;goto B67cf4b;
case 0x67cf51:goto L67cf51;
case 0x67cf54:c.instructions+=5;goto B67cf54;
case 0x67cf57:c.instructions+=4;goto B67cf57;
case 0x67cf59:c.instructions+=3;goto B67cf59;
case 0x67cf5a:c.instructions+=2;goto B67cf5a;
case 0x67cf5c:c.instructions+=1;goto B67cf5c;
case 0x67cf61:goto L67cf61;
case 0x67cf63:c.instructions+=1;goto B67cf63;
case 0x67cf69:goto L67cf69;
case 0x67cf6b:c.instructions+=2;goto B67cf6b;
case 0x67cf6d:c.instructions+=1;goto B67cf6d;
case 0x67cf70:goto L67cf70;
case 0x67cf74:c.instructions+=4;goto B67cf74;
case 0x67cf75:c.instructions+=3;goto B67cf75;
case 0x67cf77:c.instructions+=2;goto B67cf77;
case 0x67cf7a:c.instructions+=1;goto B67cf7a;
case 0x67cf7c:goto L67cf7c;
case 0x67cf7f:c.instructions+=3;goto B67cf7f;
case 0x67cf81:c.instructions+=2;goto B67cf81;
case 0x67cf84:c.instructions+=1;goto B67cf84;
case 0x67cf89:goto L67cf89;
case 0x67cf8b:c.instructions+=2;goto B67cf8b;
case 0x67cf8d:c.instructions+=1;goto B67cf8d;
case 0x67cf93:goto L67cf93;
case 0x67cf96:c.instructions+=3;goto B67cf96;
case 0x67cf98:c.instructions+=2;goto B67cf98;
case 0x67cf9b:c.instructions+=1;goto B67cf9b;
case 0x67cfa0:goto L67cfa0;
case 0x67cfa2:c.instructions+=2;goto B67cfa2;
case 0x67cfa4:c.instructions+=1;goto B67cfa4;
case 0x67cfaa:goto L67cfaa;
case 0x67cfad:c.instructions+=3;goto B67cfad;
case 0x67cfaf:c.instructions+=2;goto B67cfaf;
case 0x67cfb2:c.instructions+=1;goto B67cfb2;
case 0x67cfb7:goto L67cfb7;
case 0x67cfb9:c.instructions+=2;goto B67cfb9;
case 0x67cfbb:c.instructions+=1;goto B67cfbb;
case 0x67cfc1:goto L67cfc1;
case 0x67cfc4:c.instructions+=3;goto B67cfc4;
case 0x67cfc6:c.instructions+=2;goto B67cfc6;
case 0x67cfc9:c.instructions+=1;goto B67cfc9;
case 0x67cfce:goto L67cfce;
case 0x67cfd0:c.instructions+=2;goto B67cfd0;
case 0x67cfd2:c.instructions+=1;goto B67cfd2;
case 0x67cfd8:goto L67cfd8;
case 0x67cfdb:c.instructions+=3;goto B67cfdb;
case 0x67cfdd:c.instructions+=2;goto B67cfdd;
case 0x67cfe0:c.instructions+=1;goto B67cfe0;
case 0x67cfe5:goto L67cfe5;
case 0x67cfe7:c.instructions+=2;goto B67cfe7;
case 0x67cfe9:c.instructions+=1;goto B67cfe9;
case 0x67cfef:goto L67cfef;
case 0x67cff2:c.instructions+=3;goto B67cff2;
case 0x67cff4:c.instructions+=2;goto B67cff4;
case 0x67cff7:c.instructions+=1;goto B67cff7;
case 0x67cffc:goto L67cffc;
case 0x67cffe:c.instructions+=1;goto B67cffe;
default:missing_instruction(c.pc);}
B67c000:L67c000:{c.instructions+=30;NFSU2_TR(0x67c000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c006:{NFSU2_TR(0x67c006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c009:{NFSU2_TR(0x67c009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c00f:{NFSU2_TR(0x67c00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c012:{NFSU2_TR(0x67c012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c018:{NFSU2_TR(0x67c018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c01b:{NFSU2_TR(0x67c01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c021:{NFSU2_TR(0x67c021);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c024:{NFSU2_TR(0x67c024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c02a:{NFSU2_TR(0x67c02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c02d:{NFSU2_TR(0x67c02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c033:{NFSU2_TR(0x67c033);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c036:{NFSU2_TR(0x67c036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c03c:{NFSU2_TR(0x67c03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c03f:{NFSU2_TR(0x67c03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c045:{NFSU2_TR(0x67c045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c048:{NFSU2_TR(0x67c048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c04e:{NFSU2_TR(0x67c04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c051:{NFSU2_TR(0x67c051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c052:{NFSU2_TR(0x67c052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c058:{NFSU2_TR(0x67c058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c05e:{NFSU2_TR(0x67c05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c05f:{NFSU2_TR(0x67c05f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c065:{NFSU2_TR(0x67c065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c066:{NFSU2_TR(0x67c066);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c06c:{NFSU2_TR(0x67c06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c06d:{NFSU2_TR(0x67c06d);
u8 U[4];
w4(U+0,u32(0x20500003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c072:{NFSU2_TR(0x67c072);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c075:{NFSU2_TR(0x67c075);
__builtin_memmove((R+4),(R+12),4);
}
B67c077:{NFSU2_TR(0x67c077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c07cull));
TAIL_STATIC(0x6758ceu,675);
}
B67c07c:L67c07c:{c.instructions+=3;NFSU2_TR(0x67c07c);
__builtin_memmove((R+24),(R+0),4);
}
B67c07e:{NFSU2_TR(0x67c07e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c080:{NFSU2_TR(0x67c080);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c086:L67c086:{c.instructions+=11;NFSU2_TR(0x67c086);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c087:{NFSU2_TR(0x67c087);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c08d:{NFSU2_TR(0x67c08d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c08e:{NFSU2_TR(0x67c08e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c094:{NFSU2_TR(0x67c094);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c095:{NFSU2_TR(0x67c095);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c09b:{NFSU2_TR(0x67c09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c09c:{NFSU2_TR(0x67c09c);
u8 U[4];
w4(U+0,u32(0x20500003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0a1:{NFSU2_TR(0x67c0a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c0a4:{NFSU2_TR(0x67c0a4);
__builtin_memmove((R+4),(R+12),4);
}
B67c0a6:{NFSU2_TR(0x67c0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c0abull));
TAIL_STATIC(0x6758ceu,675);
}
B67c0ab:L67c0ab:{c.instructions+=3;NFSU2_TR(0x67c0ab);
__builtin_memmove((R+24),(R+0),4);
}
B67c0ad:{NFSU2_TR(0x67c0ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c0af:{NFSU2_TR(0x67c0af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c0b5:L67c0b5:{c.instructions+=11;NFSU2_TR(0x67c0b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0b6:{NFSU2_TR(0x67c0b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0bc:{NFSU2_TR(0x67c0bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0bd:{NFSU2_TR(0x67c0bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0c3:{NFSU2_TR(0x67c0c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0c4:{NFSU2_TR(0x67c0c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0ca:{NFSU2_TR(0x67c0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0cb:{NFSU2_TR(0x67c0cb);
u8 U[4];
w4(U+0,u32(0x20500003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0d0:{NFSU2_TR(0x67c0d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c0d3:{NFSU2_TR(0x67c0d3);
__builtin_memmove((R+4),(R+12),4);
}
B67c0d5:{NFSU2_TR(0x67c0d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c0daull));
TAIL_STATIC(0x6758ceu,675);
}
B67c0da:L67c0da:{c.instructions+=3;NFSU2_TR(0x67c0da);
__builtin_memmove((R+24),(R+0),4);
}
B67c0dc:{NFSU2_TR(0x67c0dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c0de:{NFSU2_TR(0x67c0de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c0e4:L67c0e4:{c.instructions+=11;NFSU2_TR(0x67c0e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0e5:{NFSU2_TR(0x67c0e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0eb:{NFSU2_TR(0x67c0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0ec:{NFSU2_TR(0x67c0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0f2:{NFSU2_TR(0x67c0f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0f3:{NFSU2_TR(0x67c0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c0f9:{NFSU2_TR(0x67c0f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0fa:{NFSU2_TR(0x67c0fa);
u8 U[4];
w4(U+0,u32(0x20500003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c0ff:{NFSU2_TR(0x67c0ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c102:{NFSU2_TR(0x67c102);
__builtin_memmove((R+4),(R+12),4);
}
B67c104:{NFSU2_TR(0x67c104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c109ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c109:L67c109:{c.instructions+=3;NFSU2_TR(0x67c109);
__builtin_memmove((R+24),(R+0),4);
}
B67c10b:{NFSU2_TR(0x67c10b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c10d:{NFSU2_TR(0x67c10d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c113:L67c113:{c.instructions+=10;NFSU2_TR(0x67c113);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c114:{NFSU2_TR(0x67c114);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c115:{NFSU2_TR(0x67c115);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c11b:{NFSU2_TR(0x67c11b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c11c:{NFSU2_TR(0x67c11c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c122:{NFSU2_TR(0x67c122);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c123:{NFSU2_TR(0x67c123);
u8 U[4];
w4(U+0,u32(0x10100003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c128:{NFSU2_TR(0x67c128);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c12b:{NFSU2_TR(0x67c12b);
__builtin_memmove((R+4),(R+12),4);
}
B67c12d:{NFSU2_TR(0x67c12d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c132ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c132:L67c132:{c.instructions+=3;NFSU2_TR(0x67c132);
__builtin_memmove((R+24),(R+0),4);
}
B67c134:{NFSU2_TR(0x67c134);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c136:{NFSU2_TR(0x67c136);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c13c:L67c13c:{c.instructions+=10;NFSU2_TR(0x67c13c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c13d:{NFSU2_TR(0x67c13d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c13e:{NFSU2_TR(0x67c13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c144:{NFSU2_TR(0x67c144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c145:{NFSU2_TR(0x67c145);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c14b:{NFSU2_TR(0x67c14b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c14c:{NFSU2_TR(0x67c14c);
u8 U[4];
w4(U+0,u32(0x10100003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c151:{NFSU2_TR(0x67c151);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c154:{NFSU2_TR(0x67c154);
__builtin_memmove((R+4),(R+12),4);
}
B67c156:{NFSU2_TR(0x67c156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c15bull));
TAIL_STATIC(0x6758ceu,675);
}
B67c15b:L67c15b:{c.instructions+=3;NFSU2_TR(0x67c15b);
__builtin_memmove((R+24),(R+0),4);
}
B67c15d:{NFSU2_TR(0x67c15d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c15f:{NFSU2_TR(0x67c15f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c165:L67c165:{c.instructions+=10;NFSU2_TR(0x67c165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c166:{NFSU2_TR(0x67c166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c167:{NFSU2_TR(0x67c167);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c16d:{NFSU2_TR(0x67c16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c16e:{NFSU2_TR(0x67c16e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c174:{NFSU2_TR(0x67c174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c175:{NFSU2_TR(0x67c175);
u8 U[4];
w4(U+0,u32(0x10100003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c17a:{NFSU2_TR(0x67c17a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c17d:{NFSU2_TR(0x67c17d);
__builtin_memmove((R+4),(R+12),4);
}
B67c17f:{NFSU2_TR(0x67c17f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c184ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c184:L67c184:{c.instructions+=3;NFSU2_TR(0x67c184);
__builtin_memmove((R+24),(R+0),4);
}
B67c186:{NFSU2_TR(0x67c186);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c188:{NFSU2_TR(0x67c188);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c18e:L67c18e:{c.instructions+=10;NFSU2_TR(0x67c18e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c18f:{NFSU2_TR(0x67c18f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c190:{NFSU2_TR(0x67c190);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c196:{NFSU2_TR(0x67c196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c197:{NFSU2_TR(0x67c197);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c19d:{NFSU2_TR(0x67c19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c19e:{NFSU2_TR(0x67c19e);
u8 U[4];
w4(U+0,u32(0x10100003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1a3:{NFSU2_TR(0x67c1a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c1a6:{NFSU2_TR(0x67c1a6);
__builtin_memmove((R+4),(R+12),4);
}
B67c1a8:{NFSU2_TR(0x67c1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c1adull));
TAIL_STATIC(0x6758ceu,675);
}
B67c1ad:L67c1ad:{c.instructions+=3;NFSU2_TR(0x67c1ad);
__builtin_memmove((R+24),(R+0),4);
}
B67c1af:{NFSU2_TR(0x67c1af);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c1b1:{NFSU2_TR(0x67c1b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c1b7:L67c1b7:{c.instructions+=11;NFSU2_TR(0x67c1b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1b8:{NFSU2_TR(0x67c1b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1be:{NFSU2_TR(0x67c1be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1bf:{NFSU2_TR(0x67c1bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1c5:{NFSU2_TR(0x67c1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1c6:{NFSU2_TR(0x67c1c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1cc:{NFSU2_TR(0x67c1cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1cd:{NFSU2_TR(0x67c1cd);
u8 U[4];
w4(U+0,u32(0x20400003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1d2:{NFSU2_TR(0x67c1d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c1d5:{NFSU2_TR(0x67c1d5);
__builtin_memmove((R+4),(R+12),4);
}
B67c1d7:{NFSU2_TR(0x67c1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c1dcull));
TAIL_STATIC(0x6758ceu,675);
}
B67c1dc:L67c1dc:{c.instructions+=3;NFSU2_TR(0x67c1dc);
__builtin_memmove((R+24),(R+0),4);
}
B67c1de:{NFSU2_TR(0x67c1de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c1e0:{NFSU2_TR(0x67c1e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c1e6:L67c1e6:{c.instructions+=11;NFSU2_TR(0x67c1e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1e7:{NFSU2_TR(0x67c1e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1ed:{NFSU2_TR(0x67c1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1ee:{NFSU2_TR(0x67c1ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1f4:{NFSU2_TR(0x67c1f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1f5:{NFSU2_TR(0x67c1f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c1fb:{NFSU2_TR(0x67c1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c1fc:{NFSU2_TR(0x67c1fc);
u8 U[4];
w4(U+0,u32(0x20400003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c201:{NFSU2_TR(0x67c201);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c204:{NFSU2_TR(0x67c204);
__builtin_memmove((R+4),(R+12),4);
}
B67c206:{NFSU2_TR(0x67c206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c20bull));
TAIL_STATIC(0x6758ceu,675);
}
B67c20b:L67c20b:{c.instructions+=3;NFSU2_TR(0x67c20b);
__builtin_memmove((R+24),(R+0),4);
}
B67c20d:{NFSU2_TR(0x67c20d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c20f:{NFSU2_TR(0x67c20f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c215:L67c215:{c.instructions+=11;NFSU2_TR(0x67c215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c216:{NFSU2_TR(0x67c216);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c21c:{NFSU2_TR(0x67c21c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c21d:{NFSU2_TR(0x67c21d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c223:{NFSU2_TR(0x67c223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c224:{NFSU2_TR(0x67c224);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c22a:{NFSU2_TR(0x67c22a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c22b:{NFSU2_TR(0x67c22b);
u8 U[4];
w4(U+0,u32(0x20400003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c230:{NFSU2_TR(0x67c230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c233:{NFSU2_TR(0x67c233);
__builtin_memmove((R+4),(R+12),4);
}
B67c235:{NFSU2_TR(0x67c235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c23aull));
TAIL_STATIC(0x6758ceu,675);
}
B67c23a:L67c23a:{c.instructions+=3;NFSU2_TR(0x67c23a);
__builtin_memmove((R+24),(R+0),4);
}
B67c23c:{NFSU2_TR(0x67c23c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c23e:{NFSU2_TR(0x67c23e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c244:L67c244:{c.instructions+=11;NFSU2_TR(0x67c244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c245:{NFSU2_TR(0x67c245);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c24b:{NFSU2_TR(0x67c24b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c24c:{NFSU2_TR(0x67c24c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c252:{NFSU2_TR(0x67c252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c253:{NFSU2_TR(0x67c253);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c259:{NFSU2_TR(0x67c259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c25a:{NFSU2_TR(0x67c25a);
u8 U[4];
w4(U+0,u32(0x20400003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c25f:{NFSU2_TR(0x67c25f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c262:{NFSU2_TR(0x67c262);
__builtin_memmove((R+4),(R+12),4);
}
B67c264:{NFSU2_TR(0x67c264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c269ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c269:L67c269:{c.instructions+=3;NFSU2_TR(0x67c269);
__builtin_memmove((R+24),(R+0),4);
}
B67c26b:{NFSU2_TR(0x67c26b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c26d:{NFSU2_TR(0x67c26d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c273:L67c273:{c.instructions+=36;NFSU2_TR(0x67c273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c276:{NFSU2_TR(0x67c276);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c279:{NFSU2_TR(0x67c279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c27f:{NFSU2_TR(0x67c27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c282:{NFSU2_TR(0x67c282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c288:{NFSU2_TR(0x67c288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c28b:{NFSU2_TR(0x67c28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c291:{NFSU2_TR(0x67c291);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c294:{NFSU2_TR(0x67c294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c29a:{NFSU2_TR(0x67c29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c29d:{NFSU2_TR(0x67c29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2a3:{NFSU2_TR(0x67c2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2a6:{NFSU2_TR(0x67c2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2ac:{NFSU2_TR(0x67c2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2af:{NFSU2_TR(0x67c2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2b5:{NFSU2_TR(0x67c2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2b8:{NFSU2_TR(0x67c2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2be:{NFSU2_TR(0x67c2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2c1:{NFSU2_TR(0x67c2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2c7:{NFSU2_TR(0x67c2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2ca:{NFSU2_TR(0x67c2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2d0:{NFSU2_TR(0x67c2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c2d3:{NFSU2_TR(0x67c2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2d9:{NFSU2_TR(0x67c2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c2dc:{NFSU2_TR(0x67c2dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c2dd:{NFSU2_TR(0x67c2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c2e0:{NFSU2_TR(0x67c2e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c2e6:{NFSU2_TR(0x67c2e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c2e7:{NFSU2_TR(0x67c2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c2ed:{NFSU2_TR(0x67c2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c2ee:{NFSU2_TR(0x67c2ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c2f1:{NFSU2_TR(0x67c2f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c2f2:{NFSU2_TR(0x67c2f2);
u8 U[4];
w4(U+0,u32(0x50000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c2f7:{NFSU2_TR(0x67c2f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c2fa:{NFSU2_TR(0x67c2fa);
__builtin_memmove((R+4),(R+12),4);
}
B67c2fc:{NFSU2_TR(0x67c2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c301ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c301:L67c301:{c.instructions+=3;NFSU2_TR(0x67c301);
__builtin_memmove((R+24),(R+0),4);
}
B67c303:{NFSU2_TR(0x67c303);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c305:{NFSU2_TR(0x67c305);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c30b:L67c30b:{c.instructions+=11;NFSU2_TR(0x67c30b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c30c:{NFSU2_TR(0x67c30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c312:{NFSU2_TR(0x67c312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c313:{NFSU2_TR(0x67c313);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c319:{NFSU2_TR(0x67c319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c31a:{NFSU2_TR(0x67c31a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c31d:{NFSU2_TR(0x67c31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c31e:{NFSU2_TR(0x67c31e);
u8 U[4];
w4(U+0,u32(0x50000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c323:{NFSU2_TR(0x67c323);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c326:{NFSU2_TR(0x67c326);
__builtin_memmove((R+4),(R+12),4);
}
B67c328:{NFSU2_TR(0x67c328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c32dull));
TAIL_STATIC(0x6758ceu,675);
}
B67c32d:L67c32d:{c.instructions+=3;NFSU2_TR(0x67c32d);
__builtin_memmove((R+24),(R+0),4);
}
B67c32f:{NFSU2_TR(0x67c32f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c331:{NFSU2_TR(0x67c331);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c337:L67c337:{c.instructions+=11;NFSU2_TR(0x67c337);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c338:{NFSU2_TR(0x67c338);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c33e:{NFSU2_TR(0x67c33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c33f:{NFSU2_TR(0x67c33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c345:{NFSU2_TR(0x67c345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c346:{NFSU2_TR(0x67c346);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c349:{NFSU2_TR(0x67c349);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c34a:{NFSU2_TR(0x67c34a);
u8 U[4];
w4(U+0,u32(0x50000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c34f:{NFSU2_TR(0x67c34f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c352:{NFSU2_TR(0x67c352);
__builtin_memmove((R+4),(R+12),4);
}
B67c354:{NFSU2_TR(0x67c354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c359ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c359:L67c359:{c.instructions+=3;NFSU2_TR(0x67c359);
__builtin_memmove((R+24),(R+0),4);
}
B67c35b:{NFSU2_TR(0x67c35b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c35d:{NFSU2_TR(0x67c35d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c363:L67c363:{c.instructions+=11;NFSU2_TR(0x67c363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c364:{NFSU2_TR(0x67c364);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c36a:{NFSU2_TR(0x67c36a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c36b:{NFSU2_TR(0x67c36b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c371:{NFSU2_TR(0x67c371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c372:{NFSU2_TR(0x67c372);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c375:{NFSU2_TR(0x67c375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c376:{NFSU2_TR(0x67c376);
u8 U[4];
w4(U+0,u32(0x50000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c37b:{NFSU2_TR(0x67c37b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c37e:{NFSU2_TR(0x67c37e);
__builtin_memmove((R+4),(R+12),4);
}
B67c380:{NFSU2_TR(0x67c380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c385ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c385:L67c385:{c.instructions+=3;NFSU2_TR(0x67c385);
__builtin_memmove((R+24),(R+0),4);
}
B67c387:{NFSU2_TR(0x67c387);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c389:{NFSU2_TR(0x67c389);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c38f:L67c38f:{c.instructions+=17;NFSU2_TR(0x67c38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c392:{NFSU2_TR(0x67c392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67c394:{NFSU2_TR(0x67c394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c39a:{NFSU2_TR(0x67c39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c39d:{NFSU2_TR(0x67c39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c3a3:{NFSU2_TR(0x67c3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c3a6:{NFSU2_TR(0x67c3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c3ac:{NFSU2_TR(0x67c3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c3af:{NFSU2_TR(0x67c3af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c3b0:{NFSU2_TR(0x67c3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c3b6:{NFSU2_TR(0x67c3b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c3bc:{NFSU2_TR(0x67c3bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c3bd:{NFSU2_TR(0x67c3bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c3c0:{NFSU2_TR(0x67c3c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c3c1:{NFSU2_TR(0x67c3c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c3c4:{NFSU2_TR(0x67c3c4);
u8 U[4];
w4(U+0,u32(0x50000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c3c9:{NFSU2_TR(0x67c3c9);
TAIL_STATIC(0x67af04u,67a);
}
B67c3ce:L67c3ce:{c.instructions+=3;NFSU2_TR(0x67c3ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c3d0:{NFSU2_TR(0x67c3d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c3d3:{NFSU2_TR(0x67c3d3);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c3d9:L67c3d9:{c.instructions+=2;NFSU2_TR(0x67c3d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c3dc:{NFSU2_TR(0x67c3dc);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c3e2:L67c3e2:{c.instructions+=2;NFSU2_TR(0x67c3e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c3e5:{NFSU2_TR(0x67c3e5);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c3eb:L67c3eb:{c.instructions+=5;NFSU2_TR(0x67c3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67c3f1:{NFSU2_TR(0x67c3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67c3f4:{NFSU2_TR(0x67c3f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c3f5:{NFSU2_TR(0x67c3f5);
__builtin_memmove((R+4),(R+12),4);
}
B67c3f7:{NFSU2_TR(0x67c3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c3fcull));
TAIL_STATIC(0x673a0fu,673);
}
B67c3fc:L67c3fc:{c.instructions+=2;NFSU2_TR(0x67c3fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c3fe:{NFSU2_TR(0x67c3fe);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67c404:L67c404:{c.instructions+=3;NFSU2_TR(0x67c404);
__builtin_memmove((R+8),(R+24),4);
}
B67c406:{NFSU2_TR(0x67c406);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67c408:{NFSU2_TR(0x67c408);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67c40b:L67c40b:{c.instructions+=5;NFSU2_TR(0x67c40b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67c40f:{NFSU2_TR(0x67c40f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67c410:{NFSU2_TR(0x67c410);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67c412:{NFSU2_TR(0x67c412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67c415:{NFSU2_TR(0x67c415);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67c40bu);}goto L67c40b;}}
}
B67c417:L67c417:{c.instructions+=4;NFSU2_TR(0x67c417);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c41d:{NFSU2_TR(0x67c41d);
__builtin_memmove((R+4),(R+12),4);
}
B67c41f:{NFSU2_TR(0x67c41f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c422:{NFSU2_TR(0x67c422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c427ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c427:L67c427:{c.instructions+=3;NFSU2_TR(0x67c427);
__builtin_memmove((R+24),(R+0),4);
}
B67c429:{NFSU2_TR(0x67c429);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c42b:{NFSU2_TR(0x67c42b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c431:L67c431:{c.instructions+=4;NFSU2_TR(0x67c431);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c437:{NFSU2_TR(0x67c437);
__builtin_memmove((R+4),(R+12),4);
}
B67c439:{NFSU2_TR(0x67c439);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c43c:{NFSU2_TR(0x67c43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c441ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c441:L67c441:{c.instructions+=3;NFSU2_TR(0x67c441);
__builtin_memmove((R+24),(R+0),4);
}
B67c443:{NFSU2_TR(0x67c443);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c445:{NFSU2_TR(0x67c445);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c44b:L67c44b:{c.instructions+=5;NFSU2_TR(0x67c44b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c44d:{NFSU2_TR(0x67c44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c450:{NFSU2_TR(0x67c450);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c451:{NFSU2_TR(0x67c451);
__builtin_memmove((R+4),(R+12),4);
}
B67c453:{NFSU2_TR(0x67c453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c458ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c458:L67c458:{c.instructions+=3;NFSU2_TR(0x67c458);
__builtin_memmove((R+24),(R+0),4);
}
B67c45a:{NFSU2_TR(0x67c45a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c45c:{NFSU2_TR(0x67c45c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c462:L67c462:{c.instructions+=5;NFSU2_TR(0x67c462);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c464:{NFSU2_TR(0x67c464);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c467:{NFSU2_TR(0x67c467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c468:{NFSU2_TR(0x67c468);
__builtin_memmove((R+4),(R+12),4);
}
B67c46a:{NFSU2_TR(0x67c46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c46full));
TAIL_STATIC(0x673b2cu,673);
}
B67c46f:L67c46f:{c.instructions+=3;NFSU2_TR(0x67c46f);
__builtin_memmove((R+24),(R+0),4);
}
B67c471:{NFSU2_TR(0x67c471);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c473:{NFSU2_TR(0x67c473);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c479:L67c479:{c.instructions+=4;NFSU2_TR(0x67c479);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c47b:{NFSU2_TR(0x67c47b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c47e:{NFSU2_TR(0x67c47e);
__builtin_memmove((R+4),(R+12),4);
}
B67c480:{NFSU2_TR(0x67c480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c485ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c485:L67c485:{c.instructions+=3;NFSU2_TR(0x67c485);
__builtin_memmove((R+24),(R+0),4);
}
B67c487:{NFSU2_TR(0x67c487);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c489:{NFSU2_TR(0x67c489);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c48f:L67c48f:{c.instructions+=12;NFSU2_TR(0x67c48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c495:{NFSU2_TR(0x67c495);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c496:{NFSU2_TR(0x67c496);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c497:{NFSU2_TR(0x67c497);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c49a:{NFSU2_TR(0x67c49a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67c49f:{NFSU2_TR(0x67c49f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4a2:{NFSU2_TR(0x67c4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c4a5:{NFSU2_TR(0x67c4a5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67c4aa:{NFSU2_TR(0x67c4aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4ab:{NFSU2_TR(0x67c4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4ae:{NFSU2_TR(0x67c4ae);
__builtin_memmove((R+4),(R+12),4);
}
B67c4b0:{NFSU2_TR(0x67c4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c4b5ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c4b5:L67c4b5:{c.instructions+=3;NFSU2_TR(0x67c4b5);
__builtin_memmove((R+24),(R+0),4);
}
B67c4b7:{NFSU2_TR(0x67c4b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c4b9:{NFSU2_TR(0x67c4b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c4bf:L67c4bf:{c.instructions+=10;NFSU2_TR(0x67c4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c4c2:{NFSU2_TR(0x67c4c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4c3:{NFSU2_TR(0x67c4c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4c6:{NFSU2_TR(0x67c4c6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67c4cb:{NFSU2_TR(0x67c4cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4ce:{NFSU2_TR(0x67c4ce);
__builtin_memmove((R+4),(R+12),4);
}
B67c4d0:{NFSU2_TR(0x67c4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4d3:{NFSU2_TR(0x67c4d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4d4:{NFSU2_TR(0x67c4d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4d7:{NFSU2_TR(0x67c4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c4dcull));
TAIL_STATIC(0x6758ceu,675);
}
B67c4dc:L67c4dc:{c.instructions+=3;NFSU2_TR(0x67c4dc);
__builtin_memmove((R+24),(R+0),4);
}
B67c4de:{NFSU2_TR(0x67c4de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c4e0:{NFSU2_TR(0x67c4e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c4e6:L67c4e6:{c.instructions+=11;NFSU2_TR(0x67c4e6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4e8:{NFSU2_TR(0x67c4e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4eb:{NFSU2_TR(0x67c4eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c4ee:{NFSU2_TR(0x67c4ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4f1:{NFSU2_TR(0x67c4f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4f2:{NFSU2_TR(0x67c4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c4f5:{NFSU2_TR(0x67c4f5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67c4fa:{NFSU2_TR(0x67c4fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c4fb:{NFSU2_TR(0x67c4fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c4fe:{NFSU2_TR(0x67c4fe);
__builtin_memmove((R+4),(R+12),4);
}
B67c500:{NFSU2_TR(0x67c500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c505ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c505:L67c505:{c.instructions+=3;NFSU2_TR(0x67c505);
__builtin_memmove((R+24),(R+0),4);
}
B67c507:{NFSU2_TR(0x67c507);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c509:{NFSU2_TR(0x67c509);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c50f:L67c50f:{c.instructions+=10;NFSU2_TR(0x67c50f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c511:{NFSU2_TR(0x67c511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c512:{NFSU2_TR(0x67c512);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c515:{NFSU2_TR(0x67c515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c516:{NFSU2_TR(0x67c516);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c519:{NFSU2_TR(0x67c519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c51a:{NFSU2_TR(0x67c51a);
u8 U[4];
w4(U+0,u32(0x10700001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c51f:{NFSU2_TR(0x67c51f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c522:{NFSU2_TR(0x67c522);
__builtin_memmove((R+4),(R+12),4);
}
B67c524:{NFSU2_TR(0x67c524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c529ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c529:L67c529:{c.instructions+=3;NFSU2_TR(0x67c529);
__builtin_memmove((R+24),(R+0),4);
}
B67c52b:{NFSU2_TR(0x67c52b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c52d:{NFSU2_TR(0x67c52d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c533:L67c533:{c.instructions+=7;NFSU2_TR(0x67c533);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c535:{NFSU2_TR(0x67c535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c536:{NFSU2_TR(0x67c536);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c539:{NFSU2_TR(0x67c539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c53a:{NFSU2_TR(0x67c53a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c53d:{NFSU2_TR(0x67c53d);
u8 U[4];
w4(U+0,u32(0x10300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c542:{NFSU2_TR(0x67c542);
TAIL_STATIC(0x67af04u,67a);
}
B67c547:L67c547:{c.instructions+=3;NFSU2_TR(0x67c547);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c549:{NFSU2_TR(0x67c549);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c54c:{NFSU2_TR(0x67c54c);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c552:L67c552:{c.instructions+=2;NFSU2_TR(0x67c552);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c555:{NFSU2_TR(0x67c555);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c55b:L67c55b:{c.instructions+=2;NFSU2_TR(0x67c55b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c55e:{NFSU2_TR(0x67c55e);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c564:L67c564:{c.instructions+=4;NFSU2_TR(0x67c564);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c567:{NFSU2_TR(0x67c567);
__builtin_memmove((R+4),(R+12),4);
}
B67c569:{NFSU2_TR(0x67c569);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c56c:{NFSU2_TR(0x67c56c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c571ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c571:L67c571:{c.instructions+=3;NFSU2_TR(0x67c571);
__builtin_memmove((R+24),(R+0),4);
}
B67c573:{NFSU2_TR(0x67c573);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c575:{NFSU2_TR(0x67c575);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c57b:L67c57b:{c.instructions+=6;NFSU2_TR(0x67c57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c581:{NFSU2_TR(0x67c581);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c582:{NFSU2_TR(0x67c582);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c585:{NFSU2_TR(0x67c585);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67c58a:{NFSU2_TR(0x67c58a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67c58f:{NFSU2_TR(0x67c58f);
TAIL_STATIC(0x67aefdu,67a);
}
B67c594:L67c594:{c.instructions+=3;NFSU2_TR(0x67c594);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c596:{NFSU2_TR(0x67c596);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c599:{NFSU2_TR(0x67c599);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c59f:L67c59f:{c.instructions+=2;NFSU2_TR(0x67c59f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c5a2:{NFSU2_TR(0x67c5a2);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c5a8:L67c5a8:{c.instructions+=2;NFSU2_TR(0x67c5a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c5ab:{NFSU2_TR(0x67c5ab);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c5b1:L67c5b1:{c.instructions+=20;NFSU2_TR(0x67c5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c5b4:{NFSU2_TR(0x67c5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c5b7:{NFSU2_TR(0x67c5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5ba:{NFSU2_TR(0x67c5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67c5bd:{NFSU2_TR(0x67c5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5c0:{NFSU2_TR(0x67c5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c5c3:{NFSU2_TR(0x67c5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5c6:{NFSU2_TR(0x67c5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c5c9:{NFSU2_TR(0x67c5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5cc:{NFSU2_TR(0x67c5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5cf:{NFSU2_TR(0x67c5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67c5d2:{NFSU2_TR(0x67c5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5d5:{NFSU2_TR(0x67c5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67c5d8:{NFSU2_TR(0x67c5d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c5d9:{NFSU2_TR(0x67c5d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c5dc:{NFSU2_TR(0x67c5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5df:{NFSU2_TR(0x67c5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c5e2:{NFSU2_TR(0x67c5e2);
__builtin_memmove((R+4),(R+12),4);
}
B67c5e4:{NFSU2_TR(0x67c5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c5e7:{NFSU2_TR(0x67c5e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c5ecull));
TAIL_STATIC(0x673b2cu,673);
}
B67c5ec:L67c5ec:{c.instructions+=3;NFSU2_TR(0x67c5ec);
__builtin_memmove((R+24),(R+0),4);
}
B67c5ee:{NFSU2_TR(0x67c5ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c5f0:{NFSU2_TR(0x67c5f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c5f6:L67c5f6:{c.instructions+=8;NFSU2_TR(0x67c5f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c5f7:{NFSU2_TR(0x67c5f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c5fa:{NFSU2_TR(0x67c5fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c5fb:{NFSU2_TR(0x67c5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c5fe:{NFSU2_TR(0x67c5fe);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67c604:{NFSU2_TR(0x67c604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c605:{NFSU2_TR(0x67c605);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20500000ull))));
}
B67c60b:{NFSU2_TR(0x67c60b);
TAIL_STATIC(0x67fb35u,67f);
}
B67c610:L67c610:{c.instructions+=3;NFSU2_TR(0x67c610);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c612:{NFSU2_TR(0x67c612);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c615:{NFSU2_TR(0x67c615);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c61b:L67c61b:{c.instructions+=2;NFSU2_TR(0x67c61b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c61e:{NFSU2_TR(0x67c61e);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c624:L67c624:{c.instructions+=13;NFSU2_TR(0x67c624);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67c62a:{NFSU2_TR(0x67c62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c62d:{NFSU2_TR(0x67c62d);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67c62f:{NFSU2_TR(0x67c62f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c630:{NFSU2_TR(0x67c630);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67c632:{NFSU2_TR(0x67c632);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c633:{NFSU2_TR(0x67c633);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67c635:{NFSU2_TR(0x67c635);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B67c63b:{NFSU2_TR(0x67c63b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67c63e:{NFSU2_TR(0x67c63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c63f:{NFSU2_TR(0x67c63f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c640:{NFSU2_TR(0x67c640);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c643:{NFSU2_TR(0x67c643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c648ull));
TAIL_STATIC(0x699c39u,699);
}
B67c648:L67c648:{c.instructions+=6;NFSU2_TR(0x67c648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67c64b:{NFSU2_TR(0x67c64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c64e:{NFSU2_TR(0x67c64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67c651:{NFSU2_TR(0x67c651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c652:{NFSU2_TR(0x67c652);
__builtin_memmove((R+4),(R+12),4);
}
B67c654:{NFSU2_TR(0x67c654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c659ull));
TAIL_STATIC(0x673a0fu,673);
}
B67c659:L67c659:{c.instructions+=2;NFSU2_TR(0x67c659);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c65b:{NFSU2_TR(0x67c65b);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67c661:L67c661:{c.instructions+=3;NFSU2_TR(0x67c661);
__builtin_memmove((R+8),(R+24),4);
}
B67c663:{NFSU2_TR(0x67c663);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67c665:{NFSU2_TR(0x67c665);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67c668:L67c668:{c.instructions+=5;NFSU2_TR(0x67c668);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67c66f:{NFSU2_TR(0x67c66f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67c670:{NFSU2_TR(0x67c670);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67c672:{NFSU2_TR(0x67c672);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B67c675:{NFSU2_TR(0x67c675);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67c668u);}goto L67c668;}}
}
B67c677:L67c677:{c.instructions+=2;NFSU2_TR(0x67c677);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c679:{NFSU2_TR(0x67c679);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67c68b;}}
}
B67c67b:L67c67b:{c.instructions+=3;NFSU2_TR(0x67c67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c67e:{NFSU2_TR(0x67c67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c681:{NFSU2_TR(0x67c681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67c687:L67c687:{c.instructions+=1;NFSU2_TR(0x67c687);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67c689;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67c687u);}goto L67c687;}
}
B67c689:L67c689:{c.instructions+=1;NFSU2_TR(0x67c689);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c68b:L67c68b:{c.instructions+=4;NFSU2_TR(0x67c68b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c68e:{NFSU2_TR(0x67c68e);
__builtin_memmove((R+4),(R+12),4);
}
B67c690:{NFSU2_TR(0x67c690);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c696:{NFSU2_TR(0x67c696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c69bull));
TAIL_STATIC(0x673b2cu,673);
}
B67c69b:L67c69b:{c.instructions+=3;NFSU2_TR(0x67c69b);
__builtin_memmove((R+24),(R+0),4);
}
B67c69d:{NFSU2_TR(0x67c69d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c69f:{NFSU2_TR(0x67c69f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c6a5:L67c6a5:{c.instructions+=4;NFSU2_TR(0x67c6a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6a8:{NFSU2_TR(0x67c6a8);
__builtin_memmove((R+4),(R+12),4);
}
B67c6aa:{NFSU2_TR(0x67c6aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6ad:{NFSU2_TR(0x67c6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c6b2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c6b2:L67c6b2:{c.instructions+=3;NFSU2_TR(0x67c6b2);
__builtin_memmove((R+24),(R+0),4);
}
B67c6b4:{NFSU2_TR(0x67c6b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c6b6:{NFSU2_TR(0x67c6b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c6bc:L67c6bc:{c.instructions+=12;NFSU2_TR(0x67c6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c6bf:{NFSU2_TR(0x67c6bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c6c0:{NFSU2_TR(0x67c6c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6c6:{NFSU2_TR(0x67c6c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67c6cb:{NFSU2_TR(0x67c6cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6ce:{NFSU2_TR(0x67c6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c6d1:{NFSU2_TR(0x67c6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6d7:{NFSU2_TR(0x67c6d7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67c6dc:{NFSU2_TR(0x67c6dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c6dd:{NFSU2_TR(0x67c6dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6e0:{NFSU2_TR(0x67c6e0);
__builtin_memmove((R+4),(R+12),4);
}
B67c6e2:{NFSU2_TR(0x67c6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c6e7ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c6e7:L67c6e7:{c.instructions+=3;NFSU2_TR(0x67c6e7);
__builtin_memmove((R+24),(R+0),4);
}
B67c6e9:{NFSU2_TR(0x67c6e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c6eb:{NFSU2_TR(0x67c6eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c6f1:L67c6f1:{c.instructions+=6;NFSU2_TR(0x67c6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c6f4:{NFSU2_TR(0x67c6f4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c6f6:{NFSU2_TR(0x67c6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c6f7:{NFSU2_TR(0x67c6f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c6fd:{NFSU2_TR(0x67c6fd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10500000ull))));
}
B67c702:{NFSU2_TR(0x67c702);
TAIL_STATIC(0x67af00u,67a);
}
B67c707:L67c707:{c.instructions+=3;NFSU2_TR(0x67c707);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c709:{NFSU2_TR(0x67c709);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c70c:{NFSU2_TR(0x67c70c);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c712:L67c712:{c.instructions+=2;NFSU2_TR(0x67c712);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c715:{NFSU2_TR(0x67c715);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c71b:L67c71b:{c.instructions+=5;NFSU2_TR(0x67c71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67c71e:{NFSU2_TR(0x67c71e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c71f:{NFSU2_TR(0x67c71f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c722:{NFSU2_TR(0x67c722);
__builtin_memmove((R+4),(R+12),4);
}
B67c724:{NFSU2_TR(0x67c724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c729ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c729:L67c729:{c.instructions+=3;NFSU2_TR(0x67c729);
__builtin_memmove((R+24),(R+0),4);
}
B67c72b:{NFSU2_TR(0x67c72b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c72d:{NFSU2_TR(0x67c72d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c733:L67c733:{c.instructions+=6;NFSU2_TR(0x67c733);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c735:{NFSU2_TR(0x67c735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c736:{NFSU2_TR(0x67c736);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c739:{NFSU2_TR(0x67c739);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67c73f:{NFSU2_TR(0x67c73f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10500000ull))));
}
B67c745:{NFSU2_TR(0x67c745);
TAIL_STATIC(0x67fb35u,67f);
}
B67c74a:L67c74a:{c.instructions+=3;NFSU2_TR(0x67c74a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c74c:{NFSU2_TR(0x67c74c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c74f:{NFSU2_TR(0x67c74f);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c755:L67c755:{c.instructions+=2;NFSU2_TR(0x67c755);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c758:{NFSU2_TR(0x67c758);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c75e:L67c75e:{c.instructions+=2;NFSU2_TR(0x67c75e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c761:{NFSU2_TR(0x67c761);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c767:L67c767:{c.instructions+=2;NFSU2_TR(0x67c767);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c76a:{NFSU2_TR(0x67c76a);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c770:L67c770:{c.instructions+=5;NFSU2_TR(0x67c770);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c772:{NFSU2_TR(0x67c772);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c775:{NFSU2_TR(0x67c775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c776:{NFSU2_TR(0x67c776);
__builtin_memmove((R+4),(R+12),4);
}
B67c778:{NFSU2_TR(0x67c778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c77dull));
TAIL_STATIC(0x673b2cu,673);
}
B67c77d:L67c77d:{c.instructions+=3;NFSU2_TR(0x67c77d);
__builtin_memmove((R+24),(R+0),4);
}
B67c77f:{NFSU2_TR(0x67c77f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c781:{NFSU2_TR(0x67c781);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c787:L67c787:{c.instructions+=5;NFSU2_TR(0x67c787);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c789:{NFSU2_TR(0x67c789);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c78c:{NFSU2_TR(0x67c78c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c78d:{NFSU2_TR(0x67c78d);
__builtin_memmove((R+4),(R+12),4);
}
B67c78f:{NFSU2_TR(0x67c78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c794ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c794:L67c794:{c.instructions+=3;NFSU2_TR(0x67c794);
__builtin_memmove((R+24),(R+0),4);
}
B67c796:{NFSU2_TR(0x67c796);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c798:{NFSU2_TR(0x67c798);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c79e:L67c79e:{c.instructions+=13;NFSU2_TR(0x67c79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c7a1:{NFSU2_TR(0x67c7a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7a2:{NFSU2_TR(0x67c7a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c7a5:{NFSU2_TR(0x67c7a5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67c7aa:{NFSU2_TR(0x67c7aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c7ad:{NFSU2_TR(0x67c7ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B67c7b0:{NFSU2_TR(0x67c7b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7b1:{NFSU2_TR(0x67c7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c7b4:{NFSU2_TR(0x67c7b4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67c7b9:{NFSU2_TR(0x67c7b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7ba:{NFSU2_TR(0x67c7ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c7bd:{NFSU2_TR(0x67c7bd);
__builtin_memmove((R+4),(R+12),4);
}
B67c7bf:{NFSU2_TR(0x67c7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c7c4ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c7c4:L67c7c4:{c.instructions+=3;NFSU2_TR(0x67c7c4);
__builtin_memmove((R+24),(R+0),4);
}
B67c7c6:{NFSU2_TR(0x67c7c6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c7c8:{NFSU2_TR(0x67c7c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c7ce:L67c7ce:{c.instructions+=11;NFSU2_TR(0x67c7ce);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7d0:{NFSU2_TR(0x67c7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c7d3:{NFSU2_TR(0x67c7d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7d4:{NFSU2_TR(0x67c7d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c7d7:{NFSU2_TR(0x67c7d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7d8:{NFSU2_TR(0x67c7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67c7db:{NFSU2_TR(0x67c7db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7dc:{NFSU2_TR(0x67c7dc);
u8 U[4];
w4(U+0,u32(0x20300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7e1:{NFSU2_TR(0x67c7e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c7e4:{NFSU2_TR(0x67c7e4);
__builtin_memmove((R+4),(R+12),4);
}
B67c7e6:{NFSU2_TR(0x67c7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c7ebull));
TAIL_STATIC(0x6758ceu,675);
}
B67c7eb:L67c7eb:{c.instructions+=3;NFSU2_TR(0x67c7eb);
__builtin_memmove((R+24),(R+0),4);
}
B67c7ed:{NFSU2_TR(0x67c7ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c7ef:{NFSU2_TR(0x67c7ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c7f5:L67c7f5:{c.instructions+=5;NFSU2_TR(0x67c7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67c7f8:{NFSU2_TR(0x67c7f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67c7fb:{NFSU2_TR(0x67c7fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c7fc:{NFSU2_TR(0x67c7fc);
__builtin_memmove((R+4),(R+12),4);
}
B67c7fe:{NFSU2_TR(0x67c7fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c803ull));
TAIL_STATIC(0x673a0fu,673);
}
B67c803:L67c803:{c.instructions+=2;NFSU2_TR(0x67c803);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c805:{NFSU2_TR(0x67c805);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67c80b:L67c80b:{c.instructions+=1;NFSU2_TR(0x67c80b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67c80d:L67c80d:{c.instructions+=5;NFSU2_TR(0x67c80d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67c811:{NFSU2_TR(0x67c811);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67c812:{NFSU2_TR(0x67c812);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67c814:{NFSU2_TR(0x67c814);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67c817:{NFSU2_TR(0x67c817);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67c80du);}goto L67c80d;}}
}
B67c819:L67c819:{c.instructions+=3;NFSU2_TR(0x67c819);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67c81b:{NFSU2_TR(0x67c81b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c81e:{NFSU2_TR(0x67c81e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67c82f;}}
}
B67c820:L67c820:{c.instructions+=6;NFSU2_TR(0x67c820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c823:{NFSU2_TR(0x67c823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67c826:{NFSU2_TR(0x67c826);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67c829:{NFSU2_TR(0x67c829);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67c82a:{NFSU2_TR(0x67c82a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67c82d:{NFSU2_TR(0x67c82d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67c820u);}goto L67c820;}}
}
B67c82f:L67c82f:{c.instructions+=4;NFSU2_TR(0x67c82f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c832:{NFSU2_TR(0x67c832);
__builtin_memmove((R+4),(R+12),4);
}
B67c834:{NFSU2_TR(0x67c834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c837:{NFSU2_TR(0x67c837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c83cull));
TAIL_STATIC(0x673b2cu,673);
}
B67c83c:L67c83c:{c.instructions+=3;NFSU2_TR(0x67c83c);
__builtin_memmove((R+24),(R+0),4);
}
B67c83e:{NFSU2_TR(0x67c83e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c840:{NFSU2_TR(0x67c840);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c846:L67c846:{c.instructions+=4;NFSU2_TR(0x67c846);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c849:{NFSU2_TR(0x67c849);
__builtin_memmove((R+4),(R+12),4);
}
B67c84b:{NFSU2_TR(0x67c84b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c84e:{NFSU2_TR(0x67c84e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c853ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c853:L67c853:{c.instructions+=3;NFSU2_TR(0x67c853);
__builtin_memmove((R+24),(R+0),4);
}
B67c855:{NFSU2_TR(0x67c855);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c857:{NFSU2_TR(0x67c857);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c85d:L67c85d:{c.instructions+=4;NFSU2_TR(0x67c85d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c860:{NFSU2_TR(0x67c860);
__builtin_memmove((R+4),(R+12),4);
}
B67c862:{NFSU2_TR(0x67c862);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c865:{NFSU2_TR(0x67c865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c86aull));
TAIL_STATIC(0x673b2cu,673);
}
B67c86a:L67c86a:{c.instructions+=3;NFSU2_TR(0x67c86a);
__builtin_memmove((R+24),(R+0),4);
}
B67c86c:{NFSU2_TR(0x67c86c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c86e:{NFSU2_TR(0x67c86e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c874:L67c874:{c.instructions+=4;NFSU2_TR(0x67c874);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c877:{NFSU2_TR(0x67c877);
__builtin_memmove((R+4),(R+12),4);
}
B67c879:{NFSU2_TR(0x67c879);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c87c:{NFSU2_TR(0x67c87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c881ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c881:L67c881:{c.instructions+=3;NFSU2_TR(0x67c881);
__builtin_memmove((R+24),(R+0),4);
}
B67c883:{NFSU2_TR(0x67c883);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c885:{NFSU2_TR(0x67c885);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c88b:L67c88b:{c.instructions+=10;NFSU2_TR(0x67c88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c88e:{NFSU2_TR(0x67c88e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c88f:{NFSU2_TR(0x67c88f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c890:{NFSU2_TR(0x67c890);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c893:{NFSU2_TR(0x67c893);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67c898:{NFSU2_TR(0x67c898);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c89b:{NFSU2_TR(0x67c89b);
__builtin_memmove((R+4),(R+12),4);
}
B67c89d:{NFSU2_TR(0x67c89d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c89e:{NFSU2_TR(0x67c89e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8a1:{NFSU2_TR(0x67c8a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c8a6ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c8a6:L67c8a6:{c.instructions+=3;NFSU2_TR(0x67c8a6);
__builtin_memmove((R+24),(R+0),4);
}
B67c8a8:{NFSU2_TR(0x67c8a8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c8aa:{NFSU2_TR(0x67c8aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c8b0:L67c8b0:{c.instructions+=11;NFSU2_TR(0x67c8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c8b3:{NFSU2_TR(0x67c8b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c8b4:{NFSU2_TR(0x67c8b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8b7:{NFSU2_TR(0x67c8b7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67c8bc:{NFSU2_TR(0x67c8bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8bf:{NFSU2_TR(0x67c8bf);
__builtin_memmove((R+4),(R+12),4);
}
B67c8c1:{NFSU2_TR(0x67c8c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8c4:{NFSU2_TR(0x67c8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c8c7:{NFSU2_TR(0x67c8c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c8c8:{NFSU2_TR(0x67c8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8cb:{NFSU2_TR(0x67c8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c8d0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c8d0:L67c8d0:{c.instructions+=3;NFSU2_TR(0x67c8d0);
__builtin_memmove((R+24),(R+0),4);
}
B67c8d2:{NFSU2_TR(0x67c8d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c8d4:{NFSU2_TR(0x67c8d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c8da:L67c8da:{c.instructions+=10;NFSU2_TR(0x67c8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c8dd:{NFSU2_TR(0x67c8dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c8de:{NFSU2_TR(0x67c8de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8e1:{NFSU2_TR(0x67c8e1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67c8e6:{NFSU2_TR(0x67c8e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8e9:{NFSU2_TR(0x67c8e9);
__builtin_memmove((R+4),(R+12),4);
}
B67c8eb:{NFSU2_TR(0x67c8eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8ee:{NFSU2_TR(0x67c8ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c8ef:{NFSU2_TR(0x67c8ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c8f2:{NFSU2_TR(0x67c8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c8f7ull));
TAIL_STATIC(0x6758ceu,675);
}
B67c8f7:L67c8f7:{c.instructions+=3;NFSU2_TR(0x67c8f7);
__builtin_memmove((R+24),(R+0),4);
}
B67c8f9:{NFSU2_TR(0x67c8f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c8fb:{NFSU2_TR(0x67c8fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c901:L67c901:{c.instructions+=6;NFSU2_TR(0x67c901);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c902:{NFSU2_TR(0x67c902);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c905:{NFSU2_TR(0x67c905);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c908:{NFSU2_TR(0x67c908);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c90b:{NFSU2_TR(0x67c90b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c90e:{NFSU2_TR(0x67c90e);
TAIL_STATIC(0x67af04u,67a);
}
B67c913:L67c913:{c.instructions+=3;NFSU2_TR(0x67c913);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c915:{NFSU2_TR(0x67c915);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c918:{NFSU2_TR(0x67c918);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c91e:L67c91e:{c.instructions+=2;NFSU2_TR(0x67c91e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c921:{NFSU2_TR(0x67c921);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c927:L67c927:{c.instructions+=5;NFSU2_TR(0x67c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c92a:{NFSU2_TR(0x67c92a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B67c92c:{NFSU2_TR(0x67c92c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c92d:{NFSU2_TR(0x67c92d);
__builtin_memmove((R+4),(R+12),4);
}
B67c92f:{NFSU2_TR(0x67c92f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c934ull));
TAIL_STATIC(0x673a0fu,673);
}
B67c934:L67c934:{c.instructions+=3;NFSU2_TR(0x67c934);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c936:{NFSU2_TR(0x67c936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c939:{NFSU2_TR(0x67c939);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67c93f:L67c93f:{c.instructions+=7;NFSU2_TR(0x67c93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67c942:{NFSU2_TR(0x67c942);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c943:{NFSU2_TR(0x67c943);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B67c946:{NFSU2_TR(0x67c946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c947:{NFSU2_TR(0x67c947);
__builtin_memmove((R+4),(R+12),4);
}
B67c949:{NFSU2_TR(0x67c949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c94c:{NFSU2_TR(0x67c94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c951ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c951:L67c951:{c.instructions+=3;NFSU2_TR(0x67c951);
__builtin_memmove((R+24),(R+0),4);
}
B67c953:{NFSU2_TR(0x67c953);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c955:{NFSU2_TR(0x67c955);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c95b:L67c95b:{c.instructions+=4;NFSU2_TR(0x67c95b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c95e:{NFSU2_TR(0x67c95e);
__builtin_memmove((R+4),(R+12),4);
}
B67c960:{NFSU2_TR(0x67c960);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c961:{NFSU2_TR(0x67c961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c966ull));
TAIL_STATIC(0x673b2cu,673);
}
B67c966:L67c966:{c.instructions+=3;NFSU2_TR(0x67c966);
__builtin_memmove((R+24),(R+0),4);
}
B67c968:{NFSU2_TR(0x67c968);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c96a:{NFSU2_TR(0x67c96a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c970:L67c970:{c.instructions+=4;NFSU2_TR(0x67c970);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c973:{NFSU2_TR(0x67c973);
__builtin_memmove((R+4),(R+12),4);
}
B67c975:{NFSU2_TR(0x67c975);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c978:{NFSU2_TR(0x67c978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c97dull));
TAIL_STATIC(0x673b2cu,673);
}
B67c97d:L67c97d:{c.instructions+=3;NFSU2_TR(0x67c97d);
__builtin_memmove((R+24),(R+0),4);
}
B67c97f:{NFSU2_TR(0x67c97f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c981:{NFSU2_TR(0x67c981);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c987:L67c987:{c.instructions+=12;NFSU2_TR(0x67c987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c98a:{NFSU2_TR(0x67c98a);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c98c:{NFSU2_TR(0x67c98c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c98d:{NFSU2_TR(0x67c98d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c990:{NFSU2_TR(0x67c990);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67c995:{NFSU2_TR(0x67c995);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c998:{NFSU2_TR(0x67c998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67c99b:{NFSU2_TR(0x67c99b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B67c9a0:{NFSU2_TR(0x67c9a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c9a1:{NFSU2_TR(0x67c9a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67c9a4:{NFSU2_TR(0x67c9a4);
__builtin_memmove((R+4),(R+12),4);
}
B67c9a6:{NFSU2_TR(0x67c9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c9abull));
TAIL_STATIC(0x6758ceu,675);
}
B67c9ab:L67c9ab:{c.instructions+=3;NFSU2_TR(0x67c9ab);
__builtin_memmove((R+24),(R+0),4);
}
B67c9ad:{NFSU2_TR(0x67c9ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67c9af:{NFSU2_TR(0x67c9af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67c9b5:L67c9b5:{c.instructions+=4;NFSU2_TR(0x67c9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67c9b8:{NFSU2_TR(0x67c9b8);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c9ba:{NFSU2_TR(0x67c9ba);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67c9bf:{NFSU2_TR(0x67c9bf);
TAIL_STATIC(0x67b575u,67b);
}
B67c9c4:L67c9c4:{c.instructions+=3;NFSU2_TR(0x67c9c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67c9c6:{NFSU2_TR(0x67c9c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c9c9:{NFSU2_TR(0x67c9c9);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c9cf:L67c9cf:{c.instructions+=2;NFSU2_TR(0x67c9cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c9d2:{NFSU2_TR(0x67c9d2);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67c9d8:L67c9d8:{c.instructions+=2;NFSU2_TR(0x67c9d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67c9db:{NFSU2_TR(0x67c9db);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67c9e1:L67c9e1:{c.instructions+=6;NFSU2_TR(0x67c9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67c9e4:{NFSU2_TR(0x67c9e4);
__builtin_memmove((R+0),(R+24),4);
}
B67c9e6:{NFSU2_TR(0x67c9e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67c9e9:{NFSU2_TR(0x67c9e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67c9ea:{NFSU2_TR(0x67c9ea);
__builtin_memmove((R+4),(R+12),4);
}
B67c9ec:{NFSU2_TR(0x67c9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67c9f1ull));
TAIL_STATIC(0x673a0fu,673);
}
B67c9f1:L67c9f1:{c.instructions+=2;NFSU2_TR(0x67c9f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67c9f3:{NFSU2_TR(0x67c9f3);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67c9f9:L67c9f9:{c.instructions+=3;NFSU2_TR(0x67c9f9);
__builtin_memmove((R+8),(R+24),4);
}
B67c9fb:{NFSU2_TR(0x67c9fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67c9fd:{NFSU2_TR(0x67c9fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67ca00:L67ca00:{c.instructions+=5;NFSU2_TR(0x67ca00);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67ca04:{NFSU2_TR(0x67ca04);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67ca05:{NFSU2_TR(0x67ca05);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67ca07:{NFSU2_TR(0x67ca07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B67ca0a:{NFSU2_TR(0x67ca0a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ca00u);}goto L67ca00;}}
}
B67ca0c:L67ca0c:{c.instructions+=1;NFSU2_TR(0x67ca0c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B67ca0e:L67ca0e:{c.instructions+=4;NFSU2_TR(0x67ca0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca11:{NFSU2_TR(0x67ca11);
__builtin_memmove((R+4),(R+12),4);
}
B67ca13:{NFSU2_TR(0x67ca13);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B67ca17:{NFSU2_TR(0x67ca17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ca1cull));
TAIL_STATIC(0x673b2cu,673);
}
B67ca1c:L67ca1c:{c.instructions+=3;NFSU2_TR(0x67ca1c);
__builtin_memmove((R+24),(R+0),4);
}
B67ca1e:{NFSU2_TR(0x67ca1e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ca20:{NFSU2_TR(0x67ca20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ca26:L67ca26:{c.instructions+=3;NFSU2_TR(0x67ca26);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B67ca27:{NFSU2_TR(0x67ca27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B67ca2a:{NFSU2_TR(0x67ca2a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ca0eu);}goto L67ca0e;}}
}
B67ca2c:L67ca2c:{c.instructions+=4;NFSU2_TR(0x67ca2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca2f:{NFSU2_TR(0x67ca2f);
__builtin_memmove((R+4),(R+12),4);
}
B67ca31:{NFSU2_TR(0x67ca31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca34:{NFSU2_TR(0x67ca34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ca39ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ca39:L67ca39:{c.instructions+=3;NFSU2_TR(0x67ca39);
__builtin_memmove((R+24),(R+0),4);
}
B67ca3b:{NFSU2_TR(0x67ca3b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ca3d:{NFSU2_TR(0x67ca3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ca43:L67ca43:{c.instructions+=12;NFSU2_TR(0x67ca43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ca46:{NFSU2_TR(0x67ca46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca47:{NFSU2_TR(0x67ca47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca48:{NFSU2_TR(0x67ca48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca4b:{NFSU2_TR(0x67ca4b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67ca50:{NFSU2_TR(0x67ca50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca53:{NFSU2_TR(0x67ca53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ca56:{NFSU2_TR(0x67ca56);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67ca5b:{NFSU2_TR(0x67ca5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca5c:{NFSU2_TR(0x67ca5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca5f:{NFSU2_TR(0x67ca5f);
__builtin_memmove((R+4),(R+12),4);
}
B67ca61:{NFSU2_TR(0x67ca61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ca66ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ca66:L67ca66:{c.instructions+=3;NFSU2_TR(0x67ca66);
__builtin_memmove((R+24),(R+0),4);
}
B67ca68:{NFSU2_TR(0x67ca68);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ca6a:{NFSU2_TR(0x67ca6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ca70:L67ca70:{c.instructions+=11;NFSU2_TR(0x67ca70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ca73:{NFSU2_TR(0x67ca73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca74:{NFSU2_TR(0x67ca74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca77:{NFSU2_TR(0x67ca77);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67ca7c:{NFSU2_TR(0x67ca7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca7f:{NFSU2_TR(0x67ca7f);
__builtin_memmove((R+4),(R+12),4);
}
B67ca81:{NFSU2_TR(0x67ca81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca84:{NFSU2_TR(0x67ca84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ca87:{NFSU2_TR(0x67ca87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca88:{NFSU2_TR(0x67ca88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ca8b:{NFSU2_TR(0x67ca8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ca90ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ca90:L67ca90:{c.instructions+=3;NFSU2_TR(0x67ca90);
__builtin_memmove((R+24),(R+0),4);
}
B67ca92:{NFSU2_TR(0x67ca92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ca94:{NFSU2_TR(0x67ca94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ca9a:L67ca9a:{c.instructions+=11;NFSU2_TR(0x67ca9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ca9d:{NFSU2_TR(0x67ca9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca9e:{NFSU2_TR(0x67ca9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ca9f:{NFSU2_TR(0x67ca9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67caa2:{NFSU2_TR(0x67caa2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67caa7:{NFSU2_TR(0x67caa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67caaa:{NFSU2_TR(0x67caaa);
__builtin_memmove((R+4),(R+12),4);
}
B67caac:{NFSU2_TR(0x67caac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67caad:{NFSU2_TR(0x67caad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cab0:{NFSU2_TR(0x67cab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cab3:{NFSU2_TR(0x67cab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cab8ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cab8:L67cab8:{c.instructions+=3;NFSU2_TR(0x67cab8);
__builtin_memmove((R+24),(R+0),4);
}
B67caba:{NFSU2_TR(0x67caba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cabc:{NFSU2_TR(0x67cabc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cac2:L67cac2:{c.instructions+=10;NFSU2_TR(0x67cac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cac5:{NFSU2_TR(0x67cac5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cac7:{NFSU2_TR(0x67cac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67caca:{NFSU2_TR(0x67caca);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67cacf:{NFSU2_TR(0x67cacf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cad2:{NFSU2_TR(0x67cad2);
__builtin_memmove((R+4),(R+12),4);
}
B67cad4:{NFSU2_TR(0x67cad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cad7:{NFSU2_TR(0x67cad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cad8:{NFSU2_TR(0x67cad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cadb:{NFSU2_TR(0x67cadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cae0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cae0:L67cae0:{c.instructions+=3;NFSU2_TR(0x67cae0);
__builtin_memmove((R+24),(R+0),4);
}
B67cae2:{NFSU2_TR(0x67cae2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cae4:{NFSU2_TR(0x67cae4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67caea:L67caea:{c.instructions+=10;NFSU2_TR(0x67caea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67caed:{NFSU2_TR(0x67caed);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67caef:{NFSU2_TR(0x67caef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67caf0:{NFSU2_TR(0x67caf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67caf3:{NFSU2_TR(0x67caf3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B67caf8:{NFSU2_TR(0x67caf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cafb:{NFSU2_TR(0x67cafb);
__builtin_memmove((R+4),(R+12),4);
}
B67cafd:{NFSU2_TR(0x67cafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cafe:{NFSU2_TR(0x67cafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb01:{NFSU2_TR(0x67cb01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cb06ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cb06:L67cb06:{c.instructions+=3;NFSU2_TR(0x67cb06);
__builtin_memmove((R+24),(R+0),4);
}
B67cb08:{NFSU2_TR(0x67cb08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cb0a:{NFSU2_TR(0x67cb0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cb10:L67cb10:{c.instructions+=10;NFSU2_TR(0x67cb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cb13:{NFSU2_TR(0x67cb13);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb15:{NFSU2_TR(0x67cb15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb18:{NFSU2_TR(0x67cb18);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B67cb1d:{NFSU2_TR(0x67cb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb20:{NFSU2_TR(0x67cb20);
__builtin_memmove((R+4),(R+12),4);
}
B67cb22:{NFSU2_TR(0x67cb22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb25:{NFSU2_TR(0x67cb25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb26:{NFSU2_TR(0x67cb26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb29:{NFSU2_TR(0x67cb29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cb2eull));
TAIL_STATIC(0x6758ceu,675);
}
B67cb2e:L67cb2e:{c.instructions+=3;NFSU2_TR(0x67cb2e);
__builtin_memmove((R+24),(R+0),4);
}
B67cb30:{NFSU2_TR(0x67cb30);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cb32:{NFSU2_TR(0x67cb32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cb38:L67cb38:{c.instructions+=8;NFSU2_TR(0x67cb38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb39:{NFSU2_TR(0x67cb39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb3a:{NFSU2_TR(0x67cb3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb3d:{NFSU2_TR(0x67cb3d);
__builtin_memmove((R+4),(R+12),4);
}
B67cb3f:{NFSU2_TR(0x67cb3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb42:{NFSU2_TR(0x67cb42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb45:{NFSU2_TR(0x67cb45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb48:{NFSU2_TR(0x67cb48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cb4dull));
TAIL_STATIC(0x6758ceu,675);
}
B67cb4d:L67cb4d:{c.instructions+=3;NFSU2_TR(0x67cb4d);
__builtin_memmove((R+24),(R+0),4);
}
B67cb4f:{NFSU2_TR(0x67cb4f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cb51:{NFSU2_TR(0x67cb51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cb57:L67cb57:{c.instructions+=8;NFSU2_TR(0x67cb57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb5a:{NFSU2_TR(0x67cb5a);
__builtin_memmove((R+4),(R+12),4);
}
B67cb5c:{NFSU2_TR(0x67cb5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb5f:{NFSU2_TR(0x67cb5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb62:{NFSU2_TR(0x67cb62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb65:{NFSU2_TR(0x67cb65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb68:{NFSU2_TR(0x67cb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb6b:{NFSU2_TR(0x67cb6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cb70ull));
TAIL_STATIC(0x6779e0u,677);
}
B67cb70:L67cb70:{c.instructions+=3;NFSU2_TR(0x67cb70);
__builtin_memmove((R+24),(R+0),4);
}
B67cb72:{NFSU2_TR(0x67cb72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cb74:{NFSU2_TR(0x67cb74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cb7a:L67cb7a:{c.instructions+=4;NFSU2_TR(0x67cb7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb7b:{NFSU2_TR(0x67cb7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb7e:{NFSU2_TR(0x67cb7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cb81:{NFSU2_TR(0x67cb81);
TAIL_STATIC(0x67fea5u,67f);
}
B67cb86:L67cb86:{c.instructions+=3;NFSU2_TR(0x67cb86);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67cb88:{NFSU2_TR(0x67cb88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67cb8b:{NFSU2_TR(0x67cb8b);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67cb91:L67cb91:{c.instructions+=2;NFSU2_TR(0x67cb91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67cb94:{NFSU2_TR(0x67cb94);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67cb9a:L67cb9a:{c.instructions+=5;NFSU2_TR(0x67cb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67cb9d:{NFSU2_TR(0x67cb9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cb9e:{NFSU2_TR(0x67cb9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cba1:{NFSU2_TR(0x67cba1);
__builtin_memmove((R+4),(R+12),4);
}
B67cba3:{NFSU2_TR(0x67cba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cba8ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cba8:L67cba8:{c.instructions+=3;NFSU2_TR(0x67cba8);
__builtin_memmove((R+24),(R+0),4);
}
B67cbaa:{NFSU2_TR(0x67cbaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cbac:{NFSU2_TR(0x67cbac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cbb2:L67cbb2:{c.instructions+=6;NFSU2_TR(0x67cbb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cbb3:{NFSU2_TR(0x67cbb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cbb4:{NFSU2_TR(0x67cbb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cbb7:{NFSU2_TR(0x67cbb7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67cbbd:{NFSU2_TR(0x67cbbd);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10400000ull))));
}
B67cbc3:{NFSU2_TR(0x67cbc3);
TAIL_STATIC(0x67fb35u,67f);
}
B67cbc8:L67cbc8:{c.instructions+=3;NFSU2_TR(0x67cbc8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67cbca:{NFSU2_TR(0x67cbca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67cbcd:{NFSU2_TR(0x67cbcd);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67cbd3:L67cbd3:{c.instructions+=6;NFSU2_TR(0x67cbd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67cbd6:{NFSU2_TR(0x67cbd6);
__builtin_memmove((R+0),(R+24),4);
}
B67cbd8:{NFSU2_TR(0x67cbd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67cbdb:{NFSU2_TR(0x67cbdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cbdc:{NFSU2_TR(0x67cbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cbdf:{NFSU2_TR(0x67cbdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cbe4ull));
TAIL_STATIC(0x575620u,575);
}
B67cbe4:L67cbe4:{c.instructions+=4;NFSU2_TR(0x67cbe4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67cbe6:{NFSU2_TR(0x67cbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67cbe7:{NFSU2_TR(0x67cbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cbea:{NFSU2_TR(0x67cbea);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67cbf0:L67cbf0:{c.instructions+=5;NFSU2_TR(0x67cbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67cbf3:{NFSU2_TR(0x67cbf3);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B67cbf5:{NFSU2_TR(0x67cbf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cbf6:{NFSU2_TR(0x67cbf6);
__builtin_memmove((R+4),(R+12),4);
}
B67cbf8:{NFSU2_TR(0x67cbf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cbfdull));
TAIL_STATIC(0x673a0fu,673);
}
B67cbfd:L67cbfd:{c.instructions+=2;NFSU2_TR(0x67cbfd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67cbff:{NFSU2_TR(0x67cbff);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67cc05:L67cc05:{c.instructions+=1;NFSU2_TR(0x67cc05);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67cc07:L67cc07:{c.instructions+=5;NFSU2_TR(0x67cc07);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67cc0e:{NFSU2_TR(0x67cc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B67cc11:{NFSU2_TR(0x67cc11);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67cc12:{NFSU2_TR(0x67cc12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B67cc15:{NFSU2_TR(0x67cc15);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67cc07u);}goto L67cc07;}}
}
B67cc17:L67cc17:{c.instructions+=4;NFSU2_TR(0x67cc17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc1a:{NFSU2_TR(0x67cc1a);
__builtin_memmove((R+4),(R+12),4);
}
B67cc1c:{NFSU2_TR(0x67cc1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc22:{NFSU2_TR(0x67cc22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cc27ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cc27:L67cc27:{c.instructions+=3;NFSU2_TR(0x67cc27);
__builtin_memmove((R+24),(R+0),4);
}
B67cc29:{NFSU2_TR(0x67cc29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cc2b:{NFSU2_TR(0x67cc2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cc31:L67cc31:{c.instructions+=4;NFSU2_TR(0x67cc31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc34:{NFSU2_TR(0x67cc34);
__builtin_memmove((R+4),(R+12),4);
}
B67cc36:{NFSU2_TR(0x67cc36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc3c:{NFSU2_TR(0x67cc3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cc41ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cc41:L67cc41:{c.instructions+=3;NFSU2_TR(0x67cc41);
__builtin_memmove((R+24),(R+0),4);
}
B67cc43:{NFSU2_TR(0x67cc43);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cc45:{NFSU2_TR(0x67cc45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cc4b:L67cc4b:{c.instructions+=4;NFSU2_TR(0x67cc4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc4e:{NFSU2_TR(0x67cc4e);
__builtin_memmove((R+4),(R+12),4);
}
B67cc50:{NFSU2_TR(0x67cc50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc56:{NFSU2_TR(0x67cc56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cc5bull));
TAIL_STATIC(0x673b2cu,673);
}
B67cc5b:L67cc5b:{c.instructions+=3;NFSU2_TR(0x67cc5b);
__builtin_memmove((R+24),(R+0),4);
}
B67cc5d:{NFSU2_TR(0x67cc5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cc5f:{NFSU2_TR(0x67cc5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cc65:L67cc65:{c.instructions+=4;NFSU2_TR(0x67cc65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc68:{NFSU2_TR(0x67cc68);
__builtin_memmove((R+4),(R+12),4);
}
B67cc6a:{NFSU2_TR(0x67cc6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc70:{NFSU2_TR(0x67cc70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cc75ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cc75:L67cc75:{c.instructions+=3;NFSU2_TR(0x67cc75);
__builtin_memmove((R+24),(R+0),4);
}
B67cc77:{NFSU2_TR(0x67cc77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cc79:{NFSU2_TR(0x67cc79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cc7f:L67cc7f:{c.instructions+=4;NFSU2_TR(0x67cc7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc82:{NFSU2_TR(0x67cc82);
__builtin_memmove((R+4),(R+12),4);
}
B67cc84:{NFSU2_TR(0x67cc84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc8a:{NFSU2_TR(0x67cc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cc8full));
TAIL_STATIC(0x673b2cu,673);
}
B67cc8f:L67cc8f:{c.instructions+=3;NFSU2_TR(0x67cc8f);
__builtin_memmove((R+24),(R+0),4);
}
B67cc91:{NFSU2_TR(0x67cc91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cc93:{NFSU2_TR(0x67cc93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cc99:L67cc99:{c.instructions+=4;NFSU2_TR(0x67cc99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cc9c:{NFSU2_TR(0x67cc9c);
__builtin_memmove((R+4),(R+12),4);
}
B67cc9e:{NFSU2_TR(0x67cc9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cca4:{NFSU2_TR(0x67cca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cca9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cca9:L67cca9:{c.instructions+=3;NFSU2_TR(0x67cca9);
__builtin_memmove((R+24),(R+0),4);
}
B67ccab:{NFSU2_TR(0x67ccab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ccad:{NFSU2_TR(0x67ccad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ccb3:L67ccb3:{c.instructions+=4;NFSU2_TR(0x67ccb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccb6:{NFSU2_TR(0x67ccb6);
__builtin_memmove((R+4),(R+12),4);
}
B67ccb8:{NFSU2_TR(0x67ccb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccbe:{NFSU2_TR(0x67ccbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ccc3ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ccc3:L67ccc3:{c.instructions+=3;NFSU2_TR(0x67ccc3);
__builtin_memmove((R+24),(R+0),4);
}
B67ccc5:{NFSU2_TR(0x67ccc5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ccc7:{NFSU2_TR(0x67ccc7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cccd:L67cccd:{c.instructions+=4;NFSU2_TR(0x67cccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccd0:{NFSU2_TR(0x67ccd0);
__builtin_memmove((R+4),(R+12),4);
}
B67ccd2:{NFSU2_TR(0x67ccd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccd8:{NFSU2_TR(0x67ccd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ccddull));
TAIL_STATIC(0x673b2cu,673);
}
B67ccdd:L67ccdd:{c.instructions+=3;NFSU2_TR(0x67ccdd);
__builtin_memmove((R+24),(R+0),4);
}
B67ccdf:{NFSU2_TR(0x67ccdf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cce1:{NFSU2_TR(0x67cce1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cce7:L67cce7:{c.instructions+=4;NFSU2_TR(0x67cce7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccea:{NFSU2_TR(0x67ccea);
__builtin_memmove((R+4),(R+12),4);
}
B67ccec:{NFSU2_TR(0x67ccec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ccef:{NFSU2_TR(0x67ccef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ccf4ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ccf4:L67ccf4:{c.instructions+=3;NFSU2_TR(0x67ccf4);
__builtin_memmove((R+24),(R+0),4);
}
B67ccf6:{NFSU2_TR(0x67ccf6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ccf8:{NFSU2_TR(0x67ccf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ccfe:L67ccfe:{c.instructions+=13;NFSU2_TR(0x67ccfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cd01:{NFSU2_TR(0x67cd01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd02:{NFSU2_TR(0x67cd02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd03:{NFSU2_TR(0x67cd03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd06:{NFSU2_TR(0x67cd06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67cd0b:{NFSU2_TR(0x67cd0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd11:{NFSU2_TR(0x67cd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cd14:{NFSU2_TR(0x67cd14);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67cd19:{NFSU2_TR(0x67cd19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd1a:{NFSU2_TR(0x67cd1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd1d:{NFSU2_TR(0x67cd1d);
__builtin_memmove((R+4),(R+12),4);
}
B67cd1f:{NFSU2_TR(0x67cd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cd22:{NFSU2_TR(0x67cd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cd27ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cd27:L67cd27:{c.instructions+=3;NFSU2_TR(0x67cd27);
__builtin_memmove((R+24),(R+0),4);
}
B67cd29:{NFSU2_TR(0x67cd29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cd2b:{NFSU2_TR(0x67cd2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cd31:L67cd31:{c.instructions+=10;NFSU2_TR(0x67cd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cd34:{NFSU2_TR(0x67cd34);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd36:{NFSU2_TR(0x67cd36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd39:{NFSU2_TR(0x67cd39);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67cd3e:{NFSU2_TR(0x67cd3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd44:{NFSU2_TR(0x67cd44);
__builtin_memmove((R+4),(R+12),4);
}
B67cd46:{NFSU2_TR(0x67cd46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd4c:{NFSU2_TR(0x67cd4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd4d:{NFSU2_TR(0x67cd4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd50:{NFSU2_TR(0x67cd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cd55ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cd55:L67cd55:{c.instructions+=3;NFSU2_TR(0x67cd55);
__builtin_memmove((R+24),(R+0),4);
}
B67cd57:{NFSU2_TR(0x67cd57);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cd59:{NFSU2_TR(0x67cd59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cd5f:L67cd5f:{c.instructions+=8;NFSU2_TR(0x67cd5f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd61:{NFSU2_TR(0x67cd61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd62:{NFSU2_TR(0x67cd62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd68:{NFSU2_TR(0x67cd68);
__builtin_memmove((R+4),(R+12),4);
}
B67cd6a:{NFSU2_TR(0x67cd6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd70:{NFSU2_TR(0x67cd70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd73:{NFSU2_TR(0x67cd73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd76:{NFSU2_TR(0x67cd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cd7bull));
TAIL_STATIC(0x6758ceu,675);
}
B67cd7b:L67cd7b:{c.instructions+=3;NFSU2_TR(0x67cd7b);
__builtin_memmove((R+24),(R+0),4);
}
B67cd7d:{NFSU2_TR(0x67cd7d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cd7f:{NFSU2_TR(0x67cd7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cd85:L67cd85:{c.instructions+=10;NFSU2_TR(0x67cd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cd88:{NFSU2_TR(0x67cd88);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cd8a:{NFSU2_TR(0x67cd8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd90:{NFSU2_TR(0x67cd90);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B67cd95:{NFSU2_TR(0x67cd95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cd9b:{NFSU2_TR(0x67cd9b);
__builtin_memmove((R+4),(R+12),4);
}
B67cd9d:{NFSU2_TR(0x67cd9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cda3:{NFSU2_TR(0x67cda3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cda4:{NFSU2_TR(0x67cda4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cda7:{NFSU2_TR(0x67cda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cdacull));
TAIL_STATIC(0x6758ceu,675);
}
B67cdac:L67cdac:{c.instructions+=3;NFSU2_TR(0x67cdac);
__builtin_memmove((R+24),(R+0),4);
}
B67cdae:{NFSU2_TR(0x67cdae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cdb0:{NFSU2_TR(0x67cdb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cdb6:L67cdb6:{c.instructions+=11;NFSU2_TR(0x67cdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cdb9:{NFSU2_TR(0x67cdb9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cdbb:{NFSU2_TR(0x67cdbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cdc1:{NFSU2_TR(0x67cdc1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67cdc6:{NFSU2_TR(0x67cdc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cdcc:{NFSU2_TR(0x67cdcc);
__builtin_memmove((R+4),(R+12),4);
}
B67cdce:{NFSU2_TR(0x67cdce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cdd4:{NFSU2_TR(0x67cdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67cdd7:{NFSU2_TR(0x67cdd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cdd8:{NFSU2_TR(0x67cdd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cddb:{NFSU2_TR(0x67cddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cde0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cde0:L67cde0:{c.instructions+=3;NFSU2_TR(0x67cde0);
__builtin_memmove((R+24),(R+0),4);
}
B67cde2:{NFSU2_TR(0x67cde2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cde4:{NFSU2_TR(0x67cde4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cdea:L67cdea:{c.instructions+=10;NFSU2_TR(0x67cdea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cded:{NFSU2_TR(0x67cded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cdee:{NFSU2_TR(0x67cdee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cdef:{NFSU2_TR(0x67cdef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cdf5:{NFSU2_TR(0x67cdf5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10600000ull))));
}
B67cdfa:{NFSU2_TR(0x67cdfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce00:{NFSU2_TR(0x67ce00);
__builtin_memmove((R+4),(R+12),4);
}
B67ce02:{NFSU2_TR(0x67ce02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce03:{NFSU2_TR(0x67ce03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce06:{NFSU2_TR(0x67ce06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ce0bull));
TAIL_STATIC(0x6758ceu,675);
}
B67ce0b:L67ce0b:{c.instructions+=3;NFSU2_TR(0x67ce0b);
__builtin_memmove((R+24),(R+0),4);
}
B67ce0d:{NFSU2_TR(0x67ce0d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ce0f:{NFSU2_TR(0x67ce0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ce15:L67ce15:{c.instructions+=8;NFSU2_TR(0x67ce15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce16:{NFSU2_TR(0x67ce16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce17:{NFSU2_TR(0x67ce17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce1d:{NFSU2_TR(0x67ce1d);
__builtin_memmove((R+4),(R+12),4);
}
B67ce1f:{NFSU2_TR(0x67ce1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce25:{NFSU2_TR(0x67ce25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce28:{NFSU2_TR(0x67ce28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce2b:{NFSU2_TR(0x67ce2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ce30ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ce30:L67ce30:{c.instructions+=3;NFSU2_TR(0x67ce30);
__builtin_memmove((R+24),(R+0),4);
}
B67ce32:{NFSU2_TR(0x67ce32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ce34:{NFSU2_TR(0x67ce34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ce3a:L67ce3a:{c.instructions+=10;NFSU2_TR(0x67ce3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ce3d:{NFSU2_TR(0x67ce3d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce3f:{NFSU2_TR(0x67ce3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce40:{NFSU2_TR(0x67ce40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce46:{NFSU2_TR(0x67ce46);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B67ce4b:{NFSU2_TR(0x67ce4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce51:{NFSU2_TR(0x67ce51);
__builtin_memmove((R+4),(R+12),4);
}
B67ce53:{NFSU2_TR(0x67ce53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce54:{NFSU2_TR(0x67ce54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce57:{NFSU2_TR(0x67ce57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ce5cull));
TAIL_STATIC(0x6758ceu,675);
}
B67ce5c:L67ce5c:{c.instructions+=3;NFSU2_TR(0x67ce5c);
__builtin_memmove((R+24),(R+0),4);
}
B67ce5e:{NFSU2_TR(0x67ce5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ce60:{NFSU2_TR(0x67ce60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ce66:L67ce66:{c.instructions+=8;NFSU2_TR(0x67ce66);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ce68:{NFSU2_TR(0x67ce68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce6e:{NFSU2_TR(0x67ce6e);
__builtin_memmove((R+4),(R+12),4);
}
B67ce70:{NFSU2_TR(0x67ce70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce76:{NFSU2_TR(0x67ce76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce79:{NFSU2_TR(0x67ce79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce7c:{NFSU2_TR(0x67ce7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce7f:{NFSU2_TR(0x67ce7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ce84ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ce84:L67ce84:{c.instructions+=3;NFSU2_TR(0x67ce84);
__builtin_memmove((R+24),(R+0),4);
}
B67ce86:{NFSU2_TR(0x67ce86);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ce88:{NFSU2_TR(0x67ce88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ce8e:L67ce8e:{c.instructions+=2;NFSU2_TR(0x67ce8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ce91:{NFSU2_TR(0x67ce91);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67ce97:L67ce97:{c.instructions+=4;NFSU2_TR(0x67ce97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ce9a:{NFSU2_TR(0x67ce9a);
__builtin_memmove((R+4),(R+12),4);
}
B67ce9c:{NFSU2_TR(0x67ce9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cea2:{NFSU2_TR(0x67cea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cea7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cea7:L67cea7:{c.instructions+=3;NFSU2_TR(0x67cea7);
__builtin_memmove((R+24),(R+0),4);
}
B67cea9:{NFSU2_TR(0x67cea9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ceab:{NFSU2_TR(0x67ceab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ceb1:L67ceb1:{c.instructions+=4;NFSU2_TR(0x67ceb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ceb4:{NFSU2_TR(0x67ceb4);
__builtin_memmove((R+4),(R+12),4);
}
B67ceb6:{NFSU2_TR(0x67ceb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ceb9:{NFSU2_TR(0x67ceb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cebeull));
TAIL_STATIC(0x673b2cu,673);
}
B67cebe:L67cebe:{c.instructions+=3;NFSU2_TR(0x67cebe);
__builtin_memmove((R+24),(R+0),4);
}
B67cec0:{NFSU2_TR(0x67cec0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cec2:{NFSU2_TR(0x67cec2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cec8:L67cec8:{c.instructions+=4;NFSU2_TR(0x67cec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cecb:{NFSU2_TR(0x67cecb);
__builtin_memmove((R+4),(R+12),4);
}
B67cecd:{NFSU2_TR(0x67cecd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ced0:{NFSU2_TR(0x67ced0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ced5ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ced5:L67ced5:{c.instructions+=3;NFSU2_TR(0x67ced5);
__builtin_memmove((R+24),(R+0),4);
}
B67ced7:{NFSU2_TR(0x67ced7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ced9:{NFSU2_TR(0x67ced9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cedf:L67cedf:{c.instructions+=10;NFSU2_TR(0x67cedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cee2:{NFSU2_TR(0x67cee2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cee4:{NFSU2_TR(0x67cee4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cee5:{NFSU2_TR(0x67cee5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cee8:{NFSU2_TR(0x67cee8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10500000ull))));
}
B67ceed:{NFSU2_TR(0x67ceed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cef3:{NFSU2_TR(0x67cef3);
__builtin_memmove((R+4),(R+12),4);
}
B67cef5:{NFSU2_TR(0x67cef5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cef6:{NFSU2_TR(0x67cef6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cef9:{NFSU2_TR(0x67cef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cefeull));
TAIL_STATIC(0x6758ceu,675);
}
B67cefe:L67cefe:{c.instructions+=3;NFSU2_TR(0x67cefe);
__builtin_memmove((R+24),(R+0),4);
}
B67cf00:{NFSU2_TR(0x67cf00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cf02:{NFSU2_TR(0x67cf02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cf08:L67cf08:{c.instructions+=10;NFSU2_TR(0x67cf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67cf0b:{NFSU2_TR(0x67cf0b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cf0d:{NFSU2_TR(0x67cf0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cf0e:{NFSU2_TR(0x67cf0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf14:{NFSU2_TR(0x67cf14);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67cf19:{NFSU2_TR(0x67cf19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf1c:{NFSU2_TR(0x67cf1c);
__builtin_memmove((R+4),(R+12),4);
}
B67cf1e:{NFSU2_TR(0x67cf1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cf1f:{NFSU2_TR(0x67cf1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf22:{NFSU2_TR(0x67cf22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cf27ull));
TAIL_STATIC(0x6758ceu,675);
}
B67cf27:L67cf27:{c.instructions+=3;NFSU2_TR(0x67cf27);
__builtin_memmove((R+24),(R+0),4);
}
B67cf29:{NFSU2_TR(0x67cf29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cf2b:{NFSU2_TR(0x67cf2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cf31:L67cf31:{c.instructions+=4;NFSU2_TR(0x67cf31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cf32:{NFSU2_TR(0x67cf32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf35:{NFSU2_TR(0x67cf35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf38:{NFSU2_TR(0x67cf38);
TAIL_STATIC(0x67fc22u,67f);
}
B67cf3d:L67cf3d:{c.instructions+=3;NFSU2_TR(0x67cf3d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67cf3f:{NFSU2_TR(0x67cf3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67cf42:{NFSU2_TR(0x67cf42);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67cf48:L67cf48:{c.instructions+=2;NFSU2_TR(0x67cf48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67cf4b:{NFSU2_TR(0x67cf4b);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67cf51:L67cf51:{c.instructions+=6;NFSU2_TR(0x67cf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67cf54:{NFSU2_TR(0x67cf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67cf57:{NFSU2_TR(0x67cf57);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B67cf59:{NFSU2_TR(0x67cf59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67cf5a:{NFSU2_TR(0x67cf5a);
__builtin_memmove((R+4),(R+12),4);
}
B67cf5c:{NFSU2_TR(0x67cf5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cf61ull));
TAIL_STATIC(0x673a0fu,673);
}
B67cf61:L67cf61:{c.instructions+=2;NFSU2_TR(0x67cf61);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67cf63:{NFSU2_TR(0x67cf63);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67cf69:L67cf69:{c.instructions+=3;NFSU2_TR(0x67cf69);
__builtin_memmove((R+8),(R+24),4);
}
B67cf6b:{NFSU2_TR(0x67cf6b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67cf6d:{NFSU2_TR(0x67cf6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67cf70:L67cf70:{c.instructions+=5;NFSU2_TR(0x67cf70);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67cf74:{NFSU2_TR(0x67cf74);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67cf75:{NFSU2_TR(0x67cf75);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67cf77:{NFSU2_TR(0x67cf77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B67cf7a:{NFSU2_TR(0x67cf7a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67cf70u);}goto L67cf70;}}
}
B67cf7c:L67cf7c:{c.instructions+=4;NFSU2_TR(0x67cf7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf7f:{NFSU2_TR(0x67cf7f);
__builtin_memmove((R+4),(R+12),4);
}
B67cf81:{NFSU2_TR(0x67cf81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf84:{NFSU2_TR(0x67cf84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cf89ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cf89:L67cf89:{c.instructions+=3;NFSU2_TR(0x67cf89);
__builtin_memmove((R+24),(R+0),4);
}
B67cf8b:{NFSU2_TR(0x67cf8b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cf8d:{NFSU2_TR(0x67cf8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cf93:L67cf93:{c.instructions+=4;NFSU2_TR(0x67cf93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf96:{NFSU2_TR(0x67cf96);
__builtin_memmove((R+4),(R+12),4);
}
B67cf98:{NFSU2_TR(0x67cf98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cf9b:{NFSU2_TR(0x67cf9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cfa0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cfa0:L67cfa0:{c.instructions+=3;NFSU2_TR(0x67cfa0);
__builtin_memmove((R+24),(R+0),4);
}
B67cfa2:{NFSU2_TR(0x67cfa2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cfa4:{NFSU2_TR(0x67cfa4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cfaa:L67cfaa:{c.instructions+=4;NFSU2_TR(0x67cfaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfad:{NFSU2_TR(0x67cfad);
__builtin_memmove((R+4),(R+12),4);
}
B67cfaf:{NFSU2_TR(0x67cfaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfb2:{NFSU2_TR(0x67cfb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cfb7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cfb7:L67cfb7:{c.instructions+=3;NFSU2_TR(0x67cfb7);
__builtin_memmove((R+24),(R+0),4);
}
B67cfb9:{NFSU2_TR(0x67cfb9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cfbb:{NFSU2_TR(0x67cfbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cfc1:L67cfc1:{c.instructions+=4;NFSU2_TR(0x67cfc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfc4:{NFSU2_TR(0x67cfc4);
__builtin_memmove((R+4),(R+12),4);
}
B67cfc6:{NFSU2_TR(0x67cfc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfc9:{NFSU2_TR(0x67cfc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cfceull));
TAIL_STATIC(0x673b2cu,673);
}
B67cfce:L67cfce:{c.instructions+=3;NFSU2_TR(0x67cfce);
__builtin_memmove((R+24),(R+0),4);
}
B67cfd0:{NFSU2_TR(0x67cfd0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cfd2:{NFSU2_TR(0x67cfd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cfd8:L67cfd8:{c.instructions+=4;NFSU2_TR(0x67cfd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfdb:{NFSU2_TR(0x67cfdb);
__builtin_memmove((R+4),(R+12),4);
}
B67cfdd:{NFSU2_TR(0x67cfdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cfe0:{NFSU2_TR(0x67cfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cfe5ull));
TAIL_STATIC(0x673b2cu,673);
}
B67cfe5:L67cfe5:{c.instructions+=3;NFSU2_TR(0x67cfe5);
__builtin_memmove((R+24),(R+0),4);
}
B67cfe7:{NFSU2_TR(0x67cfe7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67cfe9:{NFSU2_TR(0x67cfe9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67cfef:L67cfef:{c.instructions+=4;NFSU2_TR(0x67cfef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cff2:{NFSU2_TR(0x67cff2);
__builtin_memmove((R+4),(R+12),4);
}
B67cff4:{NFSU2_TR(0x67cff4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67cff7:{NFSU2_TR(0x67cff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67cffcull));
TAIL_STATIC(0x673b2cu,673);
}
B67cffc:L67cffc:{c.instructions+=2;NFSU2_TR(0x67cffc);
__builtin_memmove((R+24),(R+0),4);
}
B67cffe:{NFSU2_TR(0x67cffe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
TAIL_STATIC(0x67d000u,67d);
}
XIT:NFSU2_TR_EXIT(0x67c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
