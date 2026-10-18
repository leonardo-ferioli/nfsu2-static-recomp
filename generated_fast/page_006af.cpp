#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6ae(u8* __restrict R,Cpu& c);
u32 body_6b0(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6af,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6af,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6af(u8* __restrict R,Cpu& c);
u32 page_6af(Cpu& c){return body_6af(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6af(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6af004:goto L6af004;
case 0x6af006:c.instructions+=1;goto B6af006;
case 0x6af00b:goto L6af00b;
case 0x6af00d:goto L6af00d;
case 0x6af00f:c.instructions+=1;goto B6af00f;
case 0x6af014:goto L6af014;
case 0x6af016:goto L6af016;
case 0x6af01b:c.instructions+=1;goto B6af01b;
case 0x6af01d:goto L6af01d;
case 0x6af022:c.instructions+=1;goto B6af022;
case 0x6af024:goto L6af024;
case 0x6af029:c.instructions+=1;goto B6af029;
case 0x6af02f:goto L6af02f;
case 0x6af034:c.instructions+=1;goto B6af034;
case 0x6af039:goto L6af039;
case 0x6af03e:c.instructions+=2;goto B6af03e;
case 0x6af040:c.instructions+=1;goto B6af040;
case 0x6af042:goto L6af042;
case 0x6af044:goto L6af044;
case 0x6af049:c.instructions+=1;goto B6af049;
case 0x6af04f:goto L6af04f;
case 0x6af054:c.instructions+=1;goto B6af054;
case 0x6af056:goto L6af056;
case 0x6af05b:c.instructions+=1;goto B6af05b;
case 0x6af05d:goto L6af05d;
case 0x6af062:c.instructions+=1;goto B6af062;
case 0x6af064:goto L6af064;
case 0x6af066:c.instructions+=1;goto B6af066;
case 0x6af06b:goto L6af06b;
case 0x6af06d:c.instructions+=1;goto B6af06d;
case 0x6af06f:goto L6af06f;
case 0x6af070:c.instructions+=2;goto B6af070;
case 0x6af073:c.instructions+=1;goto B6af073;
case 0x6af079:goto L6af079;
case 0x6af07b:goto L6af07b;
case 0x6af07c:c.instructions+=3;goto B6af07c;
case 0x6af07d:c.instructions+=2;goto B6af07d;
case 0x6af07e:c.instructions+=1;goto B6af07e;
case 0x6af07f:goto L6af07f;
case 0x6af081:c.instructions+=1;goto B6af081;
case 0x6af086:goto L6af086;
case 0x6af088:goto L6af088;
case 0x6af08a:c.instructions+=1;goto B6af08a;
case 0x6af08f:goto L6af08f;
case 0x6af091:goto L6af091;
case 0x6af096:c.instructions+=1;goto B6af096;
case 0x6af098:goto L6af098;
case 0x6af09d:c.instructions+=1;goto B6af09d;
case 0x6af09f:goto L6af09f;
case 0x6af0a4:c.instructions+=1;goto B6af0a4;
case 0x6af0a6:goto L6af0a6;
case 0x6af0ab:c.instructions+=1;goto B6af0ab;
case 0x6af0ad:goto L6af0ad;
case 0x6af0af:c.instructions+=1;goto B6af0af;
case 0x6af0b4:goto L6af0b4;
case 0x6af0b6:goto L6af0b6;
case 0x6af0b8:c.instructions+=1;goto B6af0b8;
case 0x6af0bd:goto L6af0bd;
case 0x6af0bf:goto L6af0bf;
case 0x6af0c3:c.instructions+=1;goto B6af0c3;
case 0x6af0c5:goto L6af0c5;
case 0x6af0ca:c.instructions+=1;goto B6af0ca;
case 0x6af0cc:goto L6af0cc;
case 0x6af0d1:goto L6af0d1;
case 0x6af0d7:c.instructions+=4;goto B6af0d7;
case 0x6af0dc:c.instructions+=3;goto B6af0dc;
case 0x6af0df:c.instructions+=2;goto B6af0df;
case 0x6af0e0:c.instructions+=1;goto B6af0e0;
case 0x6af0e5:goto L6af0e5;
case 0x6af0e8:c.instructions+=2;goto B6af0e8;
case 0x6af0ea:c.instructions+=1;goto B6af0ea;
case 0x6af0ec:goto L6af0ec;
case 0x6af0ee:c.instructions+=5;goto B6af0ee;
case 0x6af0ef:c.instructions+=4;goto B6af0ef;
case 0x6af0f1:c.instructions+=3;goto B6af0f1;
case 0x6af0f4:c.instructions+=2;goto B6af0f4;
case 0x6af0f9:c.instructions+=1;goto B6af0f9;
case 0x6af0fb:goto L6af0fb;
case 0x6af100:c.instructions+=1;goto B6af100;
case 0x6af102:goto L6af102;
case 0x6af107:c.instructions+=1;goto B6af107;
case 0x6af109:goto L6af109;
case 0x6af10e:c.instructions+=1;goto B6af10e;
case 0x6af110:goto L6af110;
case 0x6af115:c.instructions+=1;goto B6af115;
case 0x6af117:goto L6af117;
case 0x6af11c:c.instructions+=1;goto B6af11c;
case 0x6af11e:goto L6af11e;
case 0x6af120:c.instructions+=1;goto B6af120;
case 0x6af122:goto L6af122;
case 0x6af124:c.instructions+=1;goto B6af124;
case 0x6af125:goto L6af125;
case 0x6af126:c.instructions+=1;goto B6af126;
case 0x6af129:goto L6af129;
case 0x6af12b:c.instructions+=4;goto B6af12b;
case 0x6af12c:c.instructions+=3;goto B6af12c;
case 0x6af12d:c.instructions+=2;goto B6af12d;
case 0x6af12f:c.instructions+=1;goto B6af12f;
case 0x6af134:goto L6af134;
case 0x6af13b:c.instructions+=13;goto B6af13b;
case 0x6af13d:c.instructions+=12;goto B6af13d;
case 0x6af13f:c.instructions+=11;goto B6af13f;
case 0x6af140:c.instructions+=10;goto B6af140;
case 0x6af142:c.instructions+=9;goto B6af142;
case 0x6af148:c.instructions+=8;goto B6af148;
case 0x6af14e:c.instructions+=7;goto B6af14e;
case 0x6af154:c.instructions+=6;goto B6af154;
case 0x6af15a:c.instructions+=5;goto B6af15a;
case 0x6af160:c.instructions+=4;goto B6af160;
case 0x6af166:c.instructions+=3;goto B6af166;
case 0x6af16c:c.instructions+=2;goto B6af16c;
case 0x6af172:c.instructions+=1;goto B6af172;
case 0x6af178:goto L6af178;
case 0x6af17a:goto L6af17a;
case 0x6af17b:c.instructions+=4;goto B6af17b;
case 0x6af181:c.instructions+=3;goto B6af181;
case 0x6af183:c.instructions+=2;goto B6af183;
case 0x6af184:c.instructions+=1;goto B6af184;
case 0x6af185:goto L6af185;
case 0x6af187:c.instructions+=10;goto B6af187;
case 0x6af188:c.instructions+=9;goto B6af188;
case 0x6af18a:c.instructions+=8;goto B6af18a;
case 0x6af18b:c.instructions+=7;goto B6af18b;
case 0x6af18c:c.instructions+=6;goto B6af18c;
case 0x6af18d:c.instructions+=5;goto B6af18d;
case 0x6af18f:c.instructions+=4;goto B6af18f;
case 0x6af191:c.instructions+=3;goto B6af191;
case 0x6af193:c.instructions+=2;goto B6af193;
case 0x6af194:c.instructions+=1;goto B6af194;
case 0x6af19a:goto L6af19a;
case 0x6af19c:goto L6af19c;
case 0x6af1a2:c.instructions+=7;goto B6af1a2;
case 0x6af1a3:c.instructions+=6;goto B6af1a3;
case 0x6af1a4:c.instructions+=5;goto B6af1a4;
case 0x6af1ab:c.instructions+=4;goto B6af1ab;
case 0x6af1b2:c.instructions+=3;goto B6af1b2;
case 0x6af1b8:c.instructions+=2;goto B6af1b8;
case 0x6af1ba:c.instructions+=1;goto B6af1ba;
case 0x6af1bf:goto L6af1bf;
case 0x6af1c5:c.instructions+=2;goto B6af1c5;
case 0x6af1c7:c.instructions+=1;goto B6af1c7;
case 0x6af1cc:goto L6af1cc;
case 0x6af1cf:c.instructions+=6;goto B6af1cf;
case 0x6af1d2:c.instructions+=5;goto B6af1d2;
case 0x6af1d3:c.instructions+=4;goto B6af1d3;
case 0x6af1d4:c.instructions+=3;goto B6af1d4;
case 0x6af1d7:c.instructions+=2;goto B6af1d7;
case 0x6af1d9:c.instructions+=1;goto B6af1d9;
case 0x6af1de:goto L6af1de;
case 0x6af1df:c.instructions+=4;goto B6af1df;
case 0x6af1e0:c.instructions+=3;goto B6af1e0;
case 0x6af1e1:c.instructions+=2;goto B6af1e1;
case 0x6af1e2:c.instructions+=1;goto B6af1e2;
case 0x6af1e5:goto L6af1e5;
case 0x6af1eb:c.instructions+=22;goto B6af1eb;
case 0x6af1ee:c.instructions+=21;goto B6af1ee;
case 0x6af1f2:c.instructions+=20;goto B6af1f2;
case 0x6af1f9:c.instructions+=19;goto B6af1f9;
case 0x6af1fa:c.instructions+=18;goto B6af1fa;
case 0x6af1fb:c.instructions+=17;goto B6af1fb;
case 0x6af1fd:c.instructions+=16;goto B6af1fd;
case 0x6af1fe:c.instructions+=15;goto B6af1fe;
case 0x6af200:c.instructions+=14;goto B6af200;
case 0x6af201:c.instructions+=13;goto B6af201;
case 0x6af204:c.instructions+=12;goto B6af204;
case 0x6af207:c.instructions+=11;goto B6af207;
case 0x6af20d:c.instructions+=10;goto B6af20d;
case 0x6af212:c.instructions+=9;goto B6af212;
case 0x6af218:c.instructions+=8;goto B6af218;
case 0x6af21e:c.instructions+=7;goto B6af21e;
case 0x6af221:c.instructions+=6;goto B6af221;
case 0x6af228:c.instructions+=5;goto B6af228;
case 0x6af22b:c.instructions+=4;goto B6af22b;
case 0x6af232:c.instructions+=3;goto B6af232;
case 0x6af239:c.instructions+=2;goto B6af239;
case 0x6af23c:c.instructions+=1;goto B6af23c;
case 0x6af23e:goto L6af23e;
case 0x6af242:c.instructions+=9;goto B6af242;
case 0x6af244:c.instructions+=8;goto B6af244;
case 0x6af249:c.instructions+=7;goto B6af249;
case 0x6af24a:c.instructions+=6;goto B6af24a;
case 0x6af24f:c.instructions+=5;goto B6af24f;
case 0x6af252:c.instructions+=4;goto B6af252;
case 0x6af255:c.instructions+=3;goto B6af255;
case 0x6af258:c.instructions+=2;goto B6af258;
case 0x6af25b:c.instructions+=1;goto B6af25b;
case 0x6af25d:goto L6af25d;
case 0x6af25e:c.instructions+=16;goto B6af25e;
case 0x6af260:c.instructions+=15;goto B6af260;
case 0x6af266:c.instructions+=14;goto B6af266;
case 0x6af269:c.instructions+=13;goto B6af269;
case 0x6af26e:c.instructions+=12;goto B6af26e;
case 0x6af270:c.instructions+=11;goto B6af270;
case 0x6af271:c.instructions+=10;goto B6af271;
case 0x6af274:c.instructions+=9;goto B6af274;
case 0x6af27b:c.instructions+=8;goto B6af27b;
case 0x6af27e:c.instructions+=7;goto B6af27e;
case 0x6af281:c.instructions+=6;goto B6af281;
case 0x6af284:c.instructions+=5;goto B6af284;
case 0x6af286:c.instructions+=4;goto B6af286;
case 0x6af28c:c.instructions+=3;goto B6af28c;
case 0x6af28f:c.instructions+=2;goto B6af28f;
case 0x6af292:c.instructions+=1;goto B6af292;
case 0x6af293:goto L6af293;
case 0x6af294:c.instructions+=3;goto B6af294;
case 0x6af296:c.instructions+=2;goto B6af296;
case 0x6af297:c.instructions+=1;goto B6af297;
case 0x6af298:goto L6af298;
case 0x6af29a:c.instructions+=10;goto B6af29a;
case 0x6af29b:c.instructions+=9;goto B6af29b;
case 0x6af29d:c.instructions+=8;goto B6af29d;
case 0x6af2a0:c.instructions+=7;goto B6af2a0;
case 0x6af2a3:c.instructions+=6;goto B6af2a3;
case 0x6af2a9:c.instructions+=5;goto B6af2a9;
case 0x6af2aa:c.instructions+=4;goto B6af2aa;
case 0x6af2ab:c.instructions+=3;goto B6af2ab;
case 0x6af2ac:c.instructions+=2;goto B6af2ac;
case 0x6af2af:c.instructions+=1;goto B6af2af;
case 0x6af2b5:goto L6af2b5;
case 0x6af2bb:c.instructions+=2;goto B6af2bb;
case 0x6af2be:c.instructions+=1;goto B6af2be;
case 0x6af2c1:goto L6af2c1;
case 0x6af2c4:c.instructions+=3;goto B6af2c4;
case 0x6af2c6:c.instructions+=2;goto B6af2c6;
case 0x6af2c8:c.instructions+=1;goto B6af2c8;
case 0x6af2ca:goto L6af2ca;
case 0x6af2cc:c.instructions+=2;goto B6af2cc;
case 0x6af2ce:c.instructions+=1;goto B6af2ce;
case 0x6af2d0:goto L6af2d0;
case 0x6af2d3:c.instructions+=6;goto B6af2d3;
case 0x6af2d5:c.instructions+=5;goto B6af2d5;
case 0x6af2d8:c.instructions+=4;goto B6af2d8;
case 0x6af2db:c.instructions+=3;goto B6af2db;
case 0x6af2de:c.instructions+=2;goto B6af2de;
case 0x6af2e4:c.instructions+=1;goto B6af2e4;
case 0x6af2e6:goto L6af2e6;
case 0x6af2eb:c.instructions+=2;goto B6af2eb;
case 0x6af2f0:c.instructions+=1;goto B6af2f0;
case 0x6af2f2:goto L6af2f2;
case 0x6af2f6:c.instructions+=2;goto B6af2f6;
case 0x6af2fa:c.instructions+=1;goto B6af2fa;
case 0x6af2fc:goto L6af2fc;
case 0x6af2ff:goto L6af2ff;
case 0x6af301:c.instructions+=4;goto B6af301;
case 0x6af304:c.instructions+=3;goto B6af304;
case 0x6af307:c.instructions+=2;goto B6af307;
case 0x6af30a:c.instructions+=1;goto B6af30a;
case 0x6af30c:goto L6af30c;
case 0x6af30f:goto L6af30f;
case 0x6af312:c.instructions+=2;goto B6af312;
case 0x6af315:c.instructions+=1;goto B6af315;
case 0x6af317:goto L6af317;
case 0x6af31b:c.instructions+=1;goto B6af31b;
case 0x6af31d:goto L6af31d;
case 0x6af320:c.instructions+=3;goto B6af320;
case 0x6af323:c.instructions+=2;goto B6af323;
case 0x6af326:c.instructions+=1;goto B6af326;
case 0x6af328:goto L6af328;
case 0x6af32b:c.instructions+=4;goto B6af32b;
case 0x6af32e:c.instructions+=3;goto B6af32e;
case 0x6af331:c.instructions+=2;goto B6af331;
case 0x6af334:c.instructions+=1;goto B6af334;
case 0x6af336:goto L6af336;
case 0x6af339:c.instructions+=4;goto B6af339;
case 0x6af33c:c.instructions+=3;goto B6af33c;
case 0x6af340:c.instructions+=2;goto B6af340;
case 0x6af346:c.instructions+=1;goto B6af346;
case 0x6af34c:goto L6af34c;
case 0x6af34e:goto L6af34e;
case 0x6af354:c.instructions+=7;goto B6af354;
case 0x6af359:c.instructions+=6;goto B6af359;
case 0x6af35a:c.instructions+=5;goto B6af35a;
case 0x6af35f:c.instructions+=4;goto B6af35f;
case 0x6af364:c.instructions+=3;goto B6af364;
case 0x6af367:c.instructions+=2;goto B6af367;
case 0x6af368:c.instructions+=1;goto B6af368;
case 0x6af36d:goto L6af36d;
case 0x6af370:goto L6af370;
case 0x6af371:c.instructions+=5;goto B6af371;
case 0x6af372:c.instructions+=4;goto B6af372;
case 0x6af374:c.instructions+=3;goto B6af374;
case 0x6af375:c.instructions+=2;goto B6af375;
case 0x6af376:c.instructions+=1;goto B6af376;
case 0x6af377:goto L6af377;
case 0x6af379:c.instructions+=11;goto B6af379;
case 0x6af37a:c.instructions+=10;goto B6af37a;
case 0x6af37c:c.instructions+=9;goto B6af37c;
case 0x6af37f:c.instructions+=8;goto B6af37f;
case 0x6af385:c.instructions+=7;goto B6af385;
case 0x6af388:c.instructions+=6;goto B6af388;
case 0x6af38b:c.instructions+=5;goto B6af38b;
case 0x6af38e:c.instructions+=4;goto B6af38e;
case 0x6af391:c.instructions+=3;goto B6af391;
case 0x6af394:c.instructions+=2;goto B6af394;
case 0x6af397:c.instructions+=1;goto B6af397;
case 0x6af399:goto L6af399;
case 0x6af39b:c.instructions+=3;goto B6af39b;
case 0x6af39c:c.instructions+=2;goto B6af39c;
case 0x6af39d:c.instructions+=1;goto B6af39d;
case 0x6af39e:goto L6af39e;
case 0x6af39f:c.instructions+=7;goto B6af39f;
case 0x6af3a2:c.instructions+=6;goto B6af3a2;
case 0x6af3a3:c.instructions+=5;goto B6af3a3;
case 0x6af3a6:c.instructions+=4;goto B6af3a6;
case 0x6af3a8:c.instructions+=3;goto B6af3a8;
case 0x6af3ae:c.instructions+=2;goto B6af3ae;
case 0x6af3b4:c.instructions+=1;goto B6af3b4;
case 0x6af3b6:goto L6af3b6;
case 0x6af3b8:c.instructions+=2;goto B6af3b8;
case 0x6af3b9:c.instructions+=1;goto B6af3b9;
case 0x6af3be:goto L6af3be;
case 0x6af3c4:c.instructions+=10;goto B6af3c4;
case 0x6af3c8:c.instructions+=9;goto B6af3c8;
case 0x6af3c9:c.instructions+=8;goto B6af3c9;
case 0x6af3cc:c.instructions+=7;goto B6af3cc;
case 0x6af3cf:c.instructions+=6;goto B6af3cf;
case 0x6af3d2:c.instructions+=5;goto B6af3d2;
case 0x6af3d5:c.instructions+=4;goto B6af3d5;
case 0x6af3d8:c.instructions+=3;goto B6af3d8;
case 0x6af3db:c.instructions+=2;goto B6af3db;
case 0x6af3de:c.instructions+=1;goto B6af3de;
case 0x6af3e0:goto L6af3e0;
case 0x6af3e4:c.instructions+=1;goto B6af3e4;
case 0x6af3e6:goto L6af3e6;
case 0x6af3e9:c.instructions+=4;goto B6af3e9;
case 0x6af3eb:c.instructions+=3;goto B6af3eb;
case 0x6af3f1:c.instructions+=2;goto B6af3f1;
case 0x6af3f7:c.instructions+=1;goto B6af3f7;
case 0x6af3f9:goto L6af3f9;
case 0x6af3fd:c.instructions+=2;goto B6af3fd;
case 0x6af401:c.instructions+=1;goto B6af401;
case 0x6af403:goto L6af403;
case 0x6af406:goto L6af406;
case 0x6af409:c.instructions+=4;goto B6af409;
case 0x6af40c:c.instructions+=3;goto B6af40c;
case 0x6af40f:c.instructions+=2;goto B6af40f;
case 0x6af412:c.instructions+=1;goto B6af412;
case 0x6af414:goto L6af414;
case 0x6af417:c.instructions+=2;goto B6af417;
case 0x6af41a:c.instructions+=1;goto B6af41a;
case 0x6af41d:goto L6af41d;
case 0x6af420:c.instructions+=3;goto B6af420;
case 0x6af423:c.instructions+=2;goto B6af423;
case 0x6af426:c.instructions+=1;goto B6af426;
case 0x6af428:goto L6af428;
case 0x6af42b:goto L6af42b;
case 0x6af42e:c.instructions+=4;goto B6af42e;
case 0x6af432:c.instructions+=3;goto B6af432;
case 0x6af436:c.instructions+=2;goto B6af436;
case 0x6af438:c.instructions+=1;goto B6af438;
case 0x6af43a:goto L6af43a;
case 0x6af43d:c.instructions+=5;goto B6af43d;
case 0x6af440:c.instructions+=4;goto B6af440;
case 0x6af443:c.instructions+=3;goto B6af443;
case 0x6af446:c.instructions+=2;goto B6af446;
case 0x6af449:c.instructions+=1;goto B6af449;
case 0x6af44b:goto L6af44b;
case 0x6af44e:c.instructions+=3;goto B6af44e;
case 0x6af451:c.instructions+=2;goto B6af451;
case 0x6af454:c.instructions+=1;goto B6af454;
case 0x6af456:goto L6af456;
case 0x6af45d:goto L6af45d;
case 0x6af460:c.instructions+=1;goto B6af460;
case 0x6af462:goto L6af462;
case 0x6af465:c.instructions+=3;goto B6af465;
case 0x6af468:c.instructions+=2;goto B6af468;
case 0x6af46b:c.instructions+=1;goto B6af46b;
case 0x6af46d:goto L6af46d;
case 0x6af474:goto L6af474;
case 0x6af477:c.instructions+=3;goto B6af477;
case 0x6af47a:c.instructions+=2;goto B6af47a;
case 0x6af47d:c.instructions+=1;goto B6af47d;
case 0x6af47f:goto L6af47f;
case 0x6af483:c.instructions+=1;goto B6af483;
case 0x6af485:goto L6af485;
case 0x6af487:c.instructions+=2;goto B6af487;
case 0x6af488:c.instructions+=1;goto B6af488;
case 0x6af48a:goto L6af48a;
case 0x6af490:c.instructions+=16;goto B6af490;
case 0x6af496:c.instructions+=15;goto B6af496;
case 0x6af49c:c.instructions+=14;goto B6af49c;
case 0x6af4a3:c.instructions+=13;goto B6af4a3;
case 0x6af4a9:c.instructions+=12;goto B6af4a9;
case 0x6af4ac:c.instructions+=11;goto B6af4ac;
case 0x6af4af:c.instructions+=10;goto B6af4af;
case 0x6af4b2:c.instructions+=9;goto B6af4b2;
case 0x6af4b8:c.instructions+=8;goto B6af4b8;
case 0x6af4bb:c.instructions+=7;goto B6af4bb;
case 0x6af4be:c.instructions+=6;goto B6af4be;
case 0x6af4c1:c.instructions+=5;goto B6af4c1;
case 0x6af4c7:c.instructions+=4;goto B6af4c7;
case 0x6af4ca:c.instructions+=3;goto B6af4ca;
case 0x6af4cd:c.instructions+=2;goto B6af4cd;
case 0x6af4d0:c.instructions+=1;goto B6af4d0;
case 0x6af4d2:goto L6af4d2;
case 0x6af4d3:goto L6af4d3;
case 0x6af4d4:c.instructions+=3;goto B6af4d4;
case 0x6af4d5:c.instructions+=2;goto B6af4d5;
case 0x6af4d6:c.instructions+=1;goto B6af4d6;
case 0x6af4d7:goto L6af4d7;
case 0x6af4d9:c.instructions+=14;goto B6af4d9;
case 0x6af4da:c.instructions+=13;goto B6af4da;
case 0x6af4dc:c.instructions+=12;goto B6af4dc;
case 0x6af4df:c.instructions+=11;goto B6af4df;
case 0x6af4e0:c.instructions+=10;goto B6af4e0;
case 0x6af4e2:c.instructions+=9;goto B6af4e2;
case 0x6af4e8:c.instructions+=8;goto B6af4e8;
case 0x6af4ea:c.instructions+=7;goto B6af4ea;
case 0x6af4f0:c.instructions+=6;goto B6af4f0;
case 0x6af4f3:c.instructions+=5;goto B6af4f3;
case 0x6af4f4:c.instructions+=4;goto B6af4f4;
case 0x6af4f5:c.instructions+=3;goto B6af4f5;
case 0x6af4f8:c.instructions+=2;goto B6af4f8;
case 0x6af4fb:c.instructions+=1;goto B6af4fb;
case 0x6af501:goto L6af501;
case 0x6af504:c.instructions+=1;goto B6af504;
case 0x6af50a:goto L6af50a;
case 0x6af50d:c.instructions+=9;goto B6af50d;
case 0x6af510:c.instructions+=8;goto B6af510;
case 0x6af513:c.instructions+=7;goto B6af513;
case 0x6af516:c.instructions+=6;goto B6af516;
case 0x6af51c:c.instructions+=5;goto B6af51c;
case 0x6af51f:c.instructions+=4;goto B6af51f;
case 0x6af523:c.instructions+=3;goto B6af523;
case 0x6af526:c.instructions+=2;goto B6af526;
case 0x6af529:c.instructions+=1;goto B6af529;
case 0x6af52c:goto L6af52c;
case 0x6af52f:c.instructions+=2;goto B6af52f;
case 0x6af531:c.instructions+=1;goto B6af531;
case 0x6af537:goto L6af537;
case 0x6af53a:c.instructions+=3;goto B6af53a;
case 0x6af53e:c.instructions+=2;goto B6af53e;
case 0x6af542:c.instructions+=1;goto B6af542;
case 0x6af544:goto L6af544;
case 0x6af547:c.instructions+=4;goto B6af547;
case 0x6af54b:c.instructions+=3;goto B6af54b;
case 0x6af54e:c.instructions+=2;goto B6af54e;
case 0x6af551:c.instructions+=1;goto B6af551;
case 0x6af553:goto L6af553;
case 0x6af556:c.instructions+=5;goto B6af556;
case 0x6af559:c.instructions+=4;goto B6af559;
case 0x6af55b:c.instructions+=3;goto B6af55b;
case 0x6af561:c.instructions+=2;goto B6af561;
case 0x6af567:c.instructions+=1;goto B6af567;
case 0x6af569:goto L6af569;
case 0x6af56d:c.instructions+=2;goto B6af56d;
case 0x6af571:c.instructions+=1;goto B6af571;
case 0x6af573:goto L6af573;
case 0x6af576:c.instructions+=4;goto B6af576;
case 0x6af579:c.instructions+=3;goto B6af579;
case 0x6af57c:c.instructions+=2;goto B6af57c;
case 0x6af57f:c.instructions+=1;goto B6af57f;
case 0x6af581:goto L6af581;
case 0x6af584:c.instructions+=2;goto B6af584;
case 0x6af587:c.instructions+=1;goto B6af587;
case 0x6af58a:goto L6af58a;
case 0x6af58d:c.instructions+=3;goto B6af58d;
case 0x6af590:c.instructions+=2;goto B6af590;
case 0x6af593:c.instructions+=1;goto B6af593;
case 0x6af595:goto L6af595;
case 0x6af597:c.instructions+=1;goto B6af597;
case 0x6af599:goto L6af599;
case 0x6af59b:c.instructions+=2;goto B6af59b;
case 0x6af59e:c.instructions+=1;goto B6af59e;
case 0x6af5a4:goto L6af5a4;
case 0x6af5a5:c.instructions+=3;goto B6af5a5;
case 0x6af5a8:c.instructions+=2;goto B6af5a8;
case 0x6af5ab:c.instructions+=1;goto B6af5ab;
case 0x6af5ad:goto L6af5ad;
case 0x6af5b1:c.instructions+=1;goto B6af5b1;
case 0x6af5b4:goto L6af5b4;
case 0x6af5b7:c.instructions+=6;goto B6af5b7;
case 0x6af5b9:c.instructions+=5;goto B6af5b9;
case 0x6af5bc:c.instructions+=4;goto B6af5bc;
case 0x6af5bf:c.instructions+=3;goto B6af5bf;
case 0x6af5c2:c.instructions+=2;goto B6af5c2;
case 0x6af5c5:c.instructions+=1;goto B6af5c5;
case 0x6af5cb:goto L6af5cb;
case 0x6af5ce:c.instructions+=9;goto B6af5ce;
case 0x6af5d1:c.instructions+=8;goto B6af5d1;
case 0x6af5d4:c.instructions+=7;goto B6af5d4;
case 0x6af5d7:c.instructions+=6;goto B6af5d7;
case 0x6af5d9:c.instructions+=5;goto B6af5d9;
case 0x6af5db:c.instructions+=4;goto B6af5db;
case 0x6af5dd:c.instructions+=3;goto B6af5dd;
case 0x6af5df:c.instructions+=2;goto B6af5df;
case 0x6af5e5:c.instructions+=1;goto B6af5e5;
case 0x6af5eb:goto L6af5eb;
case 0x6af5f0:c.instructions+=6;goto B6af5f0;
case 0x6af5f2:c.instructions+=5;goto B6af5f2;
case 0x6af5f4:c.instructions+=4;goto B6af5f4;
case 0x6af5f6:c.instructions+=3;goto B6af5f6;
case 0x6af5f9:c.instructions+=2;goto B6af5f9;
case 0x6af5fc:c.instructions+=1;goto B6af5fc;
case 0x6af602:goto L6af602;
case 0x6af604:c.instructions+=1;goto B6af604;
case 0x6af60a:goto L6af60a;
case 0x6af60d:c.instructions+=8;goto B6af60d;
case 0x6af60f:c.instructions+=7;goto B6af60f;
case 0x6af612:c.instructions+=6;goto B6af612;
case 0x6af614:c.instructions+=5;goto B6af614;
case 0x6af617:c.instructions+=4;goto B6af617;
case 0x6af61a:c.instructions+=3;goto B6af61a;
case 0x6af61d:c.instructions+=2;goto B6af61d;
case 0x6af620:c.instructions+=1;goto B6af620;
case 0x6af626:goto L6af626;
case 0x6af629:c.instructions+=2;goto B6af629;
case 0x6af62c:c.instructions+=1;goto B6af62c;
case 0x6af632:goto L6af632;
case 0x6af635:c.instructions+=2;goto B6af635;
case 0x6af638:c.instructions+=1;goto B6af638;
case 0x6af63e:goto L6af63e;
case 0x6af642:c.instructions+=3;goto B6af642;
case 0x6af646:c.instructions+=2;goto B6af646;
case 0x6af648:c.instructions+=1;goto B6af648;
case 0x6af64a:goto L6af64a;
case 0x6af64d:goto L6af64d;
case 0x6af650:c.instructions+=3;goto B6af650;
case 0x6af652:c.instructions+=2;goto B6af652;
case 0x6af654:c.instructions+=1;goto B6af654;
case 0x6af656:goto L6af656;
case 0x6af659:c.instructions+=3;goto B6af659;
case 0x6af65c:c.instructions+=2;goto B6af65c;
case 0x6af65f:c.instructions+=1;goto B6af65f;
case 0x6af661:goto L6af661;
case 0x6af663:goto L6af663;
case 0x6af666:c.instructions+=2;goto B6af666;
case 0x6af66c:c.instructions+=1;goto B6af66c;
case 0x6af671:goto L6af671;
case 0x6af674:c.instructions+=1;goto B6af674;
case 0x6af677:goto L6af677;
case 0x6af679:c.instructions+=2;goto B6af679;
case 0x6af67b:c.instructions+=1;goto B6af67b;
case 0x6af67d:goto L6af67d;
case 0x6af680:goto L6af680;
case 0x6af682:c.instructions+=2;goto B6af682;
case 0x6af685:c.instructions+=1;goto B6af685;
case 0x6af687:goto L6af687;
case 0x6af688:c.instructions+=3;goto B6af688;
case 0x6af68b:c.instructions+=2;goto B6af68b;
case 0x6af68e:c.instructions+=1;goto B6af68e;
case 0x6af690:goto L6af690;
case 0x6af692:goto L6af692;
case 0x6af695:c.instructions+=1;goto B6af695;
case 0x6af697:goto L6af697;
case 0x6af69b:c.instructions+=1;goto B6af69b;
case 0x6af69d:goto L6af69d;
case 0x6af6a1:c.instructions+=2;goto B6af6a1;
case 0x6af6a8:c.instructions+=1;goto B6af6a8;
case 0x6af6aa:goto L6af6aa;
case 0x6af6ad:c.instructions+=9;goto B6af6ad;
case 0x6af6b0:c.instructions+=8;goto B6af6b0;
case 0x6af6b3:c.instructions+=7;goto B6af6b3;
case 0x6af6b6:c.instructions+=6;goto B6af6b6;
case 0x6af6b9:c.instructions+=5;goto B6af6b9;
case 0x6af6bc:c.instructions+=4;goto B6af6bc;
case 0x6af6bf:c.instructions+=3;goto B6af6bf;
case 0x6af6c2:c.instructions+=2;goto B6af6c2;
case 0x6af6c5:c.instructions+=1;goto B6af6c5;
case 0x6af6c8:goto L6af6c8;
case 0x6af6ca:c.instructions+=2;goto B6af6ca;
case 0x6af6cc:c.instructions+=1;goto B6af6cc;
case 0x6af6ce:goto L6af6ce;
case 0x6af6d2:goto L6af6d2;
case 0x6af6d4:c.instructions+=3;goto B6af6d4;
case 0x6af6d6:c.instructions+=2;goto B6af6d6;
case 0x6af6d7:c.instructions+=1;goto B6af6d7;
case 0x6af6d9:goto L6af6d9;
case 0x6af6dd:c.instructions+=2;goto B6af6dd;
case 0x6af6e0:c.instructions+=1;goto B6af6e0;
case 0x6af6e2:goto L6af6e2;
case 0x6af6e5:c.instructions+=3;goto B6af6e5;
case 0x6af6e9:c.instructions+=2;goto B6af6e9;
case 0x6af6ed:c.instructions+=1;goto B6af6ed;
case 0x6af6f3:goto L6af6f3;
case 0x6af6f9:c.instructions+=8;goto B6af6f9;
case 0x6af6fe:c.instructions+=7;goto B6af6fe;
case 0x6af6ff:c.instructions+=6;goto B6af6ff;
case 0x6af702:c.instructions+=5;goto B6af702;
case 0x6af707:c.instructions+=4;goto B6af707;
case 0x6af70c:c.instructions+=3;goto B6af70c;
case 0x6af70f:c.instructions+=2;goto B6af70f;
case 0x6af710:c.instructions+=1;goto B6af710;
case 0x6af715:goto L6af715;
case 0x6af718:c.instructions+=1;goto B6af718;
case 0x6af71a:goto L6af71a;
case 0x6af720:c.instructions+=7;goto B6af720;
case 0x6af726:c.instructions+=6;goto B6af726;
case 0x6af72c:c.instructions+=5;goto B6af72c;
case 0x6af72e:c.instructions+=4;goto B6af72e;
case 0x6af72f:c.instructions+=3;goto B6af72f;
case 0x6af732:c.instructions+=2;goto B6af732;
case 0x6af738:c.instructions+=1;goto B6af738;
case 0x6af73b:goto L6af73b;
case 0x6af73d:c.instructions+=1;goto B6af73d;
case 0x6af73f:goto L6af73f;
case 0x6af744:c.instructions+=4;goto B6af744;
case 0x6af749:c.instructions+=3;goto B6af749;
case 0x6af74c:c.instructions+=2;goto B6af74c;
case 0x6af74d:c.instructions+=1;goto B6af74d;
case 0x6af752:goto L6af752;
case 0x6af755:goto L6af755;
case 0x6af75a:goto L6af75a;
case 0x6af75b:c.instructions+=4;goto B6af75b;
case 0x6af75c:c.instructions+=3;goto B6af75c;
case 0x6af75d:c.instructions+=2;goto B6af75d;
case 0x6af75e:c.instructions+=1;goto B6af75e;
case 0x6af75f:goto L6af75f;
case 0x6af761:c.instructions+=20;goto B6af761;
case 0x6af762:c.instructions+=19;goto B6af762;
case 0x6af764:c.instructions+=18;goto B6af764;
case 0x6af76a:c.instructions+=17;goto B6af76a;
case 0x6af76e:c.instructions+=16;goto B6af76e;
case 0x6af772:c.instructions+=15;goto B6af772;
case 0x6af773:c.instructions+=14;goto B6af773;
case 0x6af774:c.instructions+=13;goto B6af774;
case 0x6af776:c.instructions+=12;goto B6af776;
case 0x6af77c:c.instructions+=11;goto B6af77c;
case 0x6af77e:c.instructions+=10;goto B6af77e;
case 0x6af780:c.instructions+=9;goto B6af780;
case 0x6af781:c.instructions+=8;goto B6af781;
case 0x6af782:c.instructions+=7;goto B6af782;
case 0x6af785:c.instructions+=6;goto B6af785;
case 0x6af78c:c.instructions+=5;goto B6af78c;
case 0x6af78f:c.instructions+=4;goto B6af78f;
case 0x6af791:c.instructions+=3;goto B6af791;
case 0x6af797:c.instructions+=2;goto B6af797;
case 0x6af799:c.instructions+=1;goto B6af799;
case 0x6af79b:goto L6af79b;
case 0x6af79c:c.instructions+=13;goto B6af79c;
case 0x6af79d:c.instructions+=12;goto B6af79d;
case 0x6af7a0:c.instructions+=11;goto B6af7a0;
case 0x6af7a1:c.instructions+=10;goto B6af7a1;
case 0x6af7a7:c.instructions+=9;goto B6af7a7;
case 0x6af7a8:c.instructions+=8;goto B6af7a8;
case 0x6af7ab:c.instructions+=7;goto B6af7ab;
case 0x6af7ac:c.instructions+=6;goto B6af7ac;
case 0x6af7af:c.instructions+=5;goto B6af7af;
case 0x6af7b0:c.instructions+=4;goto B6af7b0;
case 0x6af7b5:c.instructions+=3;goto B6af7b5;
case 0x6af7b6:c.instructions+=2;goto B6af7b6;
case 0x6af7b8:c.instructions+=1;goto B6af7b8;
case 0x6af7bd:goto L6af7bd;
case 0x6af7bf:c.instructions+=1;goto B6af7bf;
case 0x6af7c1:goto L6af7c1;
case 0x6af7c7:c.instructions+=6;goto B6af7c7;
case 0x6af7ca:c.instructions+=5;goto B6af7ca;
case 0x6af7d0:c.instructions+=4;goto B6af7d0;
case 0x6af7d1:c.instructions+=3;goto B6af7d1;
case 0x6af7d2:c.instructions+=2;goto B6af7d2;
case 0x6af7d3:c.instructions+=1;goto B6af7d3;
case 0x6af7d5:goto L6af7d5;
case 0x6af7d6:c.instructions+=3;goto B6af7d6;
case 0x6af7d7:c.instructions+=2;goto B6af7d7;
case 0x6af7d8:c.instructions+=1;goto B6af7d8;
case 0x6af7d9:goto L6af7d9;
case 0x6af7db:c.instructions+=8;goto B6af7db;
case 0x6af7dc:c.instructions+=7;goto B6af7dc;
case 0x6af7de:c.instructions+=6;goto B6af7de;
case 0x6af7e1:c.instructions+=5;goto B6af7e1;
case 0x6af7e7:c.instructions+=4;goto B6af7e7;
case 0x6af7e9:c.instructions+=3;goto B6af7e9;
case 0x6af7ee:c.instructions+=2;goto B6af7ee;
case 0x6af7f3:c.instructions+=1;goto B6af7f3;
case 0x6af7f9:goto L6af7f9;
case 0x6af7ff:c.instructions+=3;goto B6af7ff;
case 0x6af804:c.instructions+=2;goto B6af804;
case 0x6af809:c.instructions+=1;goto B6af809;
case 0x6af80f:goto L6af80f;
case 0x6af815:c.instructions+=16;goto B6af815;
case 0x6af818:c.instructions+=15;goto B6af818;
case 0x6af819:c.instructions+=14;goto B6af819;
case 0x6af81a:c.instructions+=13;goto B6af81a;
case 0x6af81c:c.instructions+=12;goto B6af81c;
case 0x6af81d:c.instructions+=11;goto B6af81d;
case 0x6af820:c.instructions+=10;goto B6af820;
case 0x6af822:c.instructions+=9;goto B6af822;
case 0x6af825:c.instructions+=8;goto B6af825;
case 0x6af828:c.instructions+=7;goto B6af828;
case 0x6af82a:c.instructions+=6;goto B6af82a;
case 0x6af82d:c.instructions+=5;goto B6af82d;
case 0x6af833:c.instructions+=4;goto B6af833;
case 0x6af835:c.instructions+=3;goto B6af835;
case 0x6af838:c.instructions+=2;goto B6af838;
case 0x6af83b:c.instructions+=1;goto B6af83b;
case 0x6af841:goto L6af841;
case 0x6af845:c.instructions+=1;goto B6af845;
case 0x6af84b:goto L6af84b;
case 0x6af84f:c.instructions+=1;goto B6af84f;
case 0x6af855:goto L6af855;
case 0x6af858:c.instructions+=2;goto B6af858;
case 0x6af85e:c.instructions+=1;goto B6af85e;
case 0x6af864:goto L6af864;
case 0x6af866:c.instructions+=2;goto B6af866;
case 0x6af869:c.instructions+=1;goto B6af869;
case 0x6af86f:goto L6af86f;
case 0x6af872:c.instructions+=10;goto B6af872;
case 0x6af878:c.instructions+=9;goto B6af878;
case 0x6af87b:c.instructions+=8;goto B6af87b;
case 0x6af87e:c.instructions+=7;goto B6af87e;
case 0x6af881:c.instructions+=6;goto B6af881;
case 0x6af884:c.instructions+=5;goto B6af884;
case 0x6af887:c.instructions+=4;goto B6af887;
case 0x6af88a:c.instructions+=3;goto B6af88a;
case 0x6af88e:c.instructions+=2;goto B6af88e;
case 0x6af894:c.instructions+=1;goto B6af894;
case 0x6af896:goto L6af896;
case 0x6af899:c.instructions+=4;goto B6af899;
case 0x6af89c:c.instructions+=3;goto B6af89c;
case 0x6af89f:c.instructions+=2;goto B6af89f;
case 0x6af8a2:c.instructions+=1;goto B6af8a2;
case 0x6af8a4:goto L6af8a4;
case 0x6af8a7:c.instructions+=9;goto B6af8a7;
case 0x6af8aa:c.instructions+=8;goto B6af8aa;
case 0x6af8b0:c.instructions+=7;goto B6af8b0;
case 0x6af8b3:c.instructions+=6;goto B6af8b3;
case 0x6af8b6:c.instructions+=5;goto B6af8b6;
case 0x6af8b9:c.instructions+=4;goto B6af8b9;
case 0x6af8bc:c.instructions+=3;goto B6af8bc;
case 0x6af8be:c.instructions+=2;goto B6af8be;
case 0x6af8c1:c.instructions+=1;goto B6af8c1;
case 0x6af8c3:goto L6af8c3;
case 0x6af8c9:c.instructions+=4;goto B6af8c9;
case 0x6af8cc:c.instructions+=3;goto B6af8cc;
case 0x6af8cf:c.instructions+=2;goto B6af8cf;
case 0x6af8d2:c.instructions+=1;goto B6af8d2;
case 0x6af8d4:goto L6af8d4;
case 0x6af8d7:c.instructions+=3;goto B6af8d7;
case 0x6af8da:c.instructions+=2;goto B6af8da;
case 0x6af8dd:c.instructions+=1;goto B6af8dd;
case 0x6af8df:goto L6af8df;
case 0x6af8e2:c.instructions+=1;goto B6af8e2;
case 0x6af8e4:goto L6af8e4;
case 0x6af8e5:goto L6af8e5;
case 0x6af8e8:c.instructions+=1;goto B6af8e8;
case 0x6af8ea:goto L6af8ea;
case 0x6af8ed:c.instructions+=2;goto B6af8ed;
case 0x6af8f0:c.instructions+=1;goto B6af8f0;
case 0x6af8f6:goto L6af8f6;
case 0x6af8fc:c.instructions+=1;goto B6af8fc;
case 0x6af8fe:goto L6af8fe;
case 0x6af8ff:c.instructions+=2;goto B6af8ff;
case 0x6af900:c.instructions+=1;goto B6af900;
case 0x6af901:goto L6af901;
case 0x6af903:c.instructions+=2;goto B6af903;
case 0x6af904:c.instructions+=1;goto B6af904;
case 0x6af905:goto L6af905;
case 0x6af907:c.instructions+=11;goto B6af907;
case 0x6af908:c.instructions+=10;goto B6af908;
case 0x6af90a:c.instructions+=9;goto B6af90a;
case 0x6af90d:c.instructions+=8;goto B6af90d;
case 0x6af90e:c.instructions+=7;goto B6af90e;
case 0x6af910:c.instructions+=6;goto B6af910;
case 0x6af911:c.instructions+=5;goto B6af911;
case 0x6af917:c.instructions+=4;goto B6af917;
case 0x6af919:c.instructions+=3;goto B6af919;
case 0x6af91e:c.instructions+=2;goto B6af91e;
case 0x6af923:c.instructions+=1;goto B6af923;
case 0x6af925:goto L6af925;
case 0x6af927:c.instructions+=1;goto B6af927;
case 0x6af92c:goto L6af92c;
case 0x6af932:c.instructions+=15;goto B6af932;
case 0x6af935:c.instructions+=14;goto B6af935;
case 0x6af938:c.instructions+=13;goto B6af938;
case 0x6af93c:c.instructions+=12;goto B6af93c;
case 0x6af93d:c.instructions+=11;goto B6af93d;
case 0x6af93f:c.instructions+=10;goto B6af93f;
case 0x6af942:c.instructions+=9;goto B6af942;
case 0x6af944:c.instructions+=8;goto B6af944;
case 0x6af947:c.instructions+=7;goto B6af947;
case 0x6af94a:c.instructions+=6;goto B6af94a;
case 0x6af94d:c.instructions+=5;goto B6af94d;
case 0x6af953:c.instructions+=4;goto B6af953;
case 0x6af958:c.instructions+=3;goto B6af958;
case 0x6af95b:c.instructions+=2;goto B6af95b;
case 0x6af95e:c.instructions+=1;goto B6af95e;
case 0x6af960:goto L6af960;
case 0x6af967:goto L6af967;
case 0x6af96b:c.instructions+=1;goto B6af96b;
case 0x6af96d:goto L6af96d;
case 0x6af96f:c.instructions+=1;goto B6af96f;
case 0x6af971:goto L6af971;
case 0x6af974:c.instructions+=2;goto B6af974;
case 0x6af977:c.instructions+=1;goto B6af977;
case 0x6af97a:goto L6af97a;
case 0x6af97d:c.instructions+=4;goto B6af97d;
case 0x6af97f:c.instructions+=3;goto B6af97f;
case 0x6af982:c.instructions+=2;goto B6af982;
case 0x6af985:c.instructions+=1;goto B6af985;
case 0x6af987:goto L6af987;
case 0x6af98e:goto L6af98e;
case 0x6af991:c.instructions+=2;goto B6af991;
case 0x6af994:c.instructions+=1;goto B6af994;
case 0x6af996:goto L6af996;
case 0x6af999:goto L6af999;
case 0x6af99c:c.instructions+=1;goto B6af99c;
case 0x6af99e:goto L6af99e;
case 0x6af9a5:goto L6af9a5;
case 0x6af9a9:c.instructions+=2;goto B6af9a9;
case 0x6af9ac:c.instructions+=1;goto B6af9ac;
case 0x6af9ae:goto L6af9ae;
case 0x6af9b2:c.instructions+=1;goto B6af9b2;
case 0x6af9b4:goto L6af9b4;
case 0x6af9b6:c.instructions+=1;goto B6af9b6;
case 0x6af9bb:goto L6af9bb;
case 0x6af9bd:c.instructions+=1;goto B6af9bd;
case 0x6af9c2:goto L6af9c2;
case 0x6af9c4:c.instructions+=1;goto B6af9c4;
case 0x6af9c6:goto L6af9c6;
case 0x6af9c8:c.instructions+=1;goto B6af9c8;
case 0x6af9cd:goto L6af9cd;
case 0x6af9d0:c.instructions+=1;goto B6af9d0;
case 0x6af9d2:goto L6af9d2;
case 0x6af9d6:goto L6af9d6;
case 0x6af9d9:c.instructions+=2;goto B6af9d9;
case 0x6af9db:c.instructions+=1;goto B6af9db;
case 0x6af9dd:goto L6af9dd;
case 0x6af9e2:c.instructions+=1;goto B6af9e2;
case 0x6af9e7:goto L6af9e7;
case 0x6af9e9:c.instructions+=8;goto B6af9e9;
case 0x6af9ea:c.instructions+=7;goto B6af9ea;
case 0x6af9ed:c.instructions+=6;goto B6af9ed;
case 0x6af9ee:c.instructions+=5;goto B6af9ee;
case 0x6af9f0:c.instructions+=4;goto B6af9f0;
case 0x6af9f5:c.instructions+=3;goto B6af9f5;
case 0x6af9fa:c.instructions+=2;goto B6af9fa;
case 0x6af9fb:c.instructions+=1;goto B6af9fb;
case 0x6afa00:goto L6afa00;
case 0x6afa02:c.instructions+=2;goto B6afa02;
case 0x6afa04:c.instructions+=1;goto B6afa04;
case 0x6afa0a:goto L6afa0a;
case 0x6afa10:c.instructions+=2;goto B6afa10;
case 0x6afa13:c.instructions+=1;goto B6afa13;
case 0x6afa18:goto L6afa18;
case 0x6afa1a:c.instructions+=2;goto B6afa1a;
case 0x6afa1c:c.instructions+=1;goto B6afa1c;
case 0x6afa22:goto L6afa22;
case 0x6afa24:c.instructions+=5;goto B6afa24;
case 0x6afa26:c.instructions+=4;goto B6afa26;
case 0x6afa2b:c.instructions+=3;goto B6afa2b;
case 0x6afa30:c.instructions+=2;goto B6afa30;
case 0x6afa32:c.instructions+=1;goto B6afa32;
case 0x6afa37:goto L6afa37;
case 0x6afa3a:c.instructions+=1;goto B6afa3a;
case 0x6afa3c:goto L6afa3c;
case 0x6afa41:c.instructions+=1;goto B6afa41;
case 0x6afa46:goto L6afa46;
case 0x6afa4c:c.instructions+=8;goto B6afa4c;
case 0x6afa4d:c.instructions+=7;goto B6afa4d;
case 0x6afa4e:c.instructions+=6;goto B6afa4e;
case 0x6afa51:c.instructions+=5;goto B6afa51;
case 0x6afa53:c.instructions+=4;goto B6afa53;
case 0x6afa55:c.instructions+=3;goto B6afa55;
case 0x6afa56:c.instructions+=2;goto B6afa56;
case 0x6afa58:c.instructions+=1;goto B6afa58;
case 0x6afa5d:goto L6afa5d;
case 0x6afa60:c.instructions+=2;goto B6afa60;
case 0x6afa63:c.instructions+=1;goto B6afa63;
case 0x6afa65:goto L6afa65;
case 0x6afa6b:c.instructions+=8;goto B6afa6b;
case 0x6afa6d:c.instructions+=7;goto B6afa6d;
case 0x6afa70:c.instructions+=6;goto B6afa70;
case 0x6afa73:c.instructions+=5;goto B6afa73;
case 0x6afa76:c.instructions+=4;goto B6afa76;
case 0x6afa79:c.instructions+=3;goto B6afa79;
case 0x6afa7b:c.instructions+=2;goto B6afa7b;
case 0x6afa7d:c.instructions+=1;goto B6afa7d;
case 0x6afa80:goto L6afa80;
case 0x6afa82:goto L6afa82;
case 0x6afa84:c.instructions+=2;goto B6afa84;
case 0x6afa87:c.instructions+=1;goto B6afa87;
case 0x6afa8a:goto L6afa8a;
case 0x6afa8c:goto L6afa8c;
case 0x6afa8f:c.instructions+=6;goto B6afa8f;
case 0x6afa92:c.instructions+=5;goto B6afa92;
case 0x6afa94:c.instructions+=4;goto B6afa94;
case 0x6afa9a:c.instructions+=3;goto B6afa9a;
case 0x6afa9d:c.instructions+=2;goto B6afa9d;
case 0x6afa9f:c.instructions+=1;goto B6afa9f;
case 0x6afaa2:goto L6afaa2;
case 0x6afaa4:goto L6afaa4;
case 0x6afaa6:c.instructions+=1;goto B6afaa6;
case 0x6afaa9:goto L6afaa9;
case 0x6afaab:goto L6afaab;
case 0x6afaae:c.instructions+=2;goto B6afaae;
case 0x6afab0:c.instructions+=1;goto B6afab0;
case 0x6afab2:goto L6afab2;
case 0x6afab5:c.instructions+=5;goto B6afab5;
case 0x6afab8:c.instructions+=4;goto B6afab8;
case 0x6afabb:c.instructions+=3;goto B6afabb;
case 0x6afabe:c.instructions+=2;goto B6afabe;
case 0x6afabf:c.instructions+=1;goto B6afabf;
case 0x6afac1:goto L6afac1;
case 0x6afac4:c.instructions+=6;goto B6afac4;
case 0x6afaca:c.instructions+=5;goto B6afaca;
case 0x6afacc:c.instructions+=4;goto B6afacc;
case 0x6afacf:c.instructions+=3;goto B6afacf;
case 0x6afad1:c.instructions+=2;goto B6afad1;
case 0x6afad3:c.instructions+=1;goto B6afad3;
case 0x6afad5:goto L6afad5;
case 0x6afad7:c.instructions+=1;goto B6afad7;
case 0x6afadc:goto L6afadc;
case 0x6afadf:goto L6afadf;
case 0x6afae1:c.instructions+=3;goto B6afae1;
case 0x6afae4:c.instructions+=2;goto B6afae4;
case 0x6afae7:c.instructions+=1;goto B6afae7;
case 0x6afaea:goto L6afaea;
case 0x6afaed:c.instructions+=2;goto B6afaed;
case 0x6afaef:c.instructions+=1;goto B6afaef;
case 0x6afaf1:goto L6afaf1;
case 0x6afaf3:c.instructions+=1;goto B6afaf3;
case 0x6afaf8:goto L6afaf8;
case 0x6afafa:goto L6afafa;
case 0x6afafb:goto L6afafb;
case 0x6afafc:c.instructions+=3;goto B6afafc;
case 0x6afafd:c.instructions+=2;goto B6afafd;
case 0x6afafe:c.instructions+=1;goto B6afafe;
case 0x6afaff:goto L6afaff;
case 0x6afb01:c.instructions+=12;goto B6afb01;
case 0x6afb02:c.instructions+=11;goto B6afb02;
case 0x6afb04:c.instructions+=10;goto B6afb04;
case 0x6afb07:c.instructions+=9;goto B6afb07;
case 0x6afb0d:c.instructions+=8;goto B6afb0d;
case 0x6afb13:c.instructions+=7;goto B6afb13;
case 0x6afb14:c.instructions+=6;goto B6afb14;
case 0x6afb15:c.instructions+=5;goto B6afb15;
case 0x6afb19:c.instructions+=4;goto B6afb19;
case 0x6afb1b:c.instructions+=3;goto B6afb1b;
case 0x6afb1c:c.instructions+=2;goto B6afb1c;
case 0x6afb1f:c.instructions+=1;goto B6afb1f;
case 0x6afb25:goto L6afb25;
case 0x6afb2b:c.instructions+=1;goto B6afb2b;
case 0x6afb31:goto L6afb31;
case 0x6afb37:c.instructions+=3;goto B6afb37;
case 0x6afb3a:c.instructions+=2;goto B6afb3a;
case 0x6afb3c:c.instructions+=1;goto B6afb3c;
case 0x6afb3e:goto L6afb3e;
case 0x6afb41:goto L6afb41;
case 0x6afb44:c.instructions+=4;goto B6afb44;
case 0x6afb47:c.instructions+=3;goto B6afb47;
case 0x6afb4a:c.instructions+=2;goto B6afb4a;
case 0x6afb4d:c.instructions+=1;goto B6afb4d;
case 0x6afb53:goto L6afb53;
case 0x6afb57:c.instructions+=1;goto B6afb57;
case 0x6afb5d:goto L6afb5d;
case 0x6afb60:c.instructions+=5;goto B6afb60;
case 0x6afb63:c.instructions+=4;goto B6afb63;
case 0x6afb66:c.instructions+=3;goto B6afb66;
case 0x6afb69:c.instructions+=2;goto B6afb69;
case 0x6afb6d:c.instructions+=1;goto B6afb6d;
case 0x6afb73:goto L6afb73;
case 0x6afb76:c.instructions+=2;goto B6afb76;
case 0x6afb79:c.instructions+=1;goto B6afb79;
case 0x6afb7b:goto L6afb7b;
case 0x6afb81:c.instructions+=9;goto B6afb81;
case 0x6afb85:c.instructions+=8;goto B6afb85;
case 0x6afb8a:c.instructions+=7;goto B6afb8a;
case 0x6afb8d:c.instructions+=6;goto B6afb8d;
case 0x6afb90:c.instructions+=5;goto B6afb90;
case 0x6afb93:c.instructions+=4;goto B6afb93;
case 0x6afb94:c.instructions+=3;goto B6afb94;
case 0x6afb9b:c.instructions+=2;goto B6afb9b;
case 0x6afb9e:c.instructions+=1;goto B6afb9e;
case 0x6afba1:goto L6afba1;
case 0x6afba3:c.instructions+=3;goto B6afba3;
case 0x6afba5:c.instructions+=2;goto B6afba5;
case 0x6afba8:c.instructions+=1;goto B6afba8;
case 0x6afbaa:goto L6afbaa;
case 0x6afbb0:c.instructions+=1;goto B6afbb0;
case 0x6afbb3:goto L6afbb3;
case 0x6afbb6:c.instructions+=3;goto B6afbb6;
case 0x6afbb8:c.instructions+=2;goto B6afbb8;
case 0x6afbba:c.instructions+=1;goto B6afbba;
case 0x6afbbc:goto L6afbbc;
case 0x6afbbf:c.instructions+=1;goto B6afbbf;
case 0x6afbc1:goto L6afbc1;
case 0x6afbc4:c.instructions+=2;goto B6afbc4;
case 0x6afbc6:c.instructions+=1;goto B6afbc6;
case 0x6afbc8:goto L6afbc8;
case 0x6afbcb:c.instructions+=2;goto B6afbcb;
case 0x6afbcd:c.instructions+=1;goto B6afbcd;
case 0x6afbd0:goto L6afbd0;
case 0x6afbd2:c.instructions+=1;goto B6afbd2;
case 0x6afbd4:goto L6afbd4;
case 0x6afbd6:c.instructions+=1;goto B6afbd6;
case 0x6afbd7:goto L6afbd7;
case 0x6afbda:c.instructions+=2;goto B6afbda;
case 0x6afbdb:c.instructions+=1;goto B6afbdb;
case 0x6afbdd:goto L6afbdd;
case 0x6afbdf:c.instructions+=1;goto B6afbdf;
case 0x6afbe1:goto L6afbe1;
case 0x6afbe5:c.instructions+=3;goto B6afbe5;
case 0x6afbe6:c.instructions+=2;goto B6afbe6;
case 0x6afbe9:c.instructions+=1;goto B6afbe9;
case 0x6afbeb:goto L6afbeb;
case 0x6afbf2:c.instructions+=1;goto B6afbf2;
case 0x6afbf4:goto L6afbf4;
case 0x6afbf7:c.instructions+=1;goto B6afbf7;
case 0x6afbf9:goto L6afbf9;
case 0x6afbfb:c.instructions+=1;goto B6afbfb;
case 0x6afbfd:goto L6afbfd;
case 0x6afbff:goto L6afbff;
case 0x6afc02:c.instructions+=1;goto B6afc02;
case 0x6afc04:goto L6afc04;
case 0x6afc08:goto L6afc08;
case 0x6afc0a:c.instructions+=1;goto B6afc0a;
case 0x6afc10:goto L6afc10;
case 0x6afc11:c.instructions+=2;goto B6afc11;
case 0x6afc14:c.instructions+=1;goto B6afc14;
case 0x6afc1a:goto L6afc1a;
case 0x6afc20:c.instructions+=5;goto B6afc20;
case 0x6afc23:c.instructions+=4;goto B6afc23;
case 0x6afc26:c.instructions+=3;goto B6afc26;
case 0x6afc29:c.instructions+=2;goto B6afc29;
case 0x6afc2b:c.instructions+=1;goto B6afc2b;
case 0x6afc2e:goto L6afc2e;
case 0x6afc31:c.instructions+=3;goto B6afc31;
case 0x6afc33:c.instructions+=2;goto B6afc33;
case 0x6afc35:c.instructions+=1;goto B6afc35;
case 0x6afc37:goto L6afc37;
case 0x6afc3a:c.instructions+=1;goto B6afc3a;
case 0x6afc3c:goto L6afc3c;
case 0x6afc3f:c.instructions+=2;goto B6afc3f;
case 0x6afc41:c.instructions+=1;goto B6afc41;
case 0x6afc43:goto L6afc43;
case 0x6afc46:c.instructions+=2;goto B6afc46;
case 0x6afc49:c.instructions+=1;goto B6afc49;
case 0x6afc4c:goto L6afc4c;
case 0x6afc4e:c.instructions+=4;goto B6afc4e;
case 0x6afc51:c.instructions+=3;goto B6afc51;
case 0x6afc57:c.instructions+=2;goto B6afc57;
case 0x6afc5a:c.instructions+=1;goto B6afc5a;
case 0x6afc5c:goto L6afc5c;
case 0x6afc5f:c.instructions+=2;goto B6afc5f;
case 0x6afc62:c.instructions+=1;goto B6afc62;
case 0x6afc64:goto L6afc64;
case 0x6afc68:c.instructions+=1;goto B6afc68;
case 0x6afc6a:goto L6afc6a;
case 0x6afc6e:goto L6afc6e;
case 0x6afc71:c.instructions+=2;goto B6afc71;
case 0x6afc74:c.instructions+=1;goto B6afc74;
case 0x6afc76:goto L6afc76;
case 0x6afc79:c.instructions+=2;goto B6afc79;
case 0x6afc7b:c.instructions+=1;goto B6afc7b;
case 0x6afc7d:goto L6afc7d;
case 0x6afc80:c.instructions+=3;goto B6afc80;
case 0x6afc86:c.instructions+=2;goto B6afc86;
case 0x6afc89:c.instructions+=1;goto B6afc89;
case 0x6afc8c:goto L6afc8c;
case 0x6afc8e:c.instructions+=3;goto B6afc8e;
case 0x6afc91:c.instructions+=2;goto B6afc91;
case 0x6afc94:c.instructions+=1;goto B6afc94;
case 0x6afc96:goto L6afc96;
case 0x6afc99:c.instructions+=2;goto B6afc99;
case 0x6afc9c:c.instructions+=1;goto B6afc9c;
case 0x6afc9e:goto L6afc9e;
case 0x6afca2:c.instructions+=1;goto B6afca2;
case 0x6afca4:goto L6afca4;
case 0x6afca8:goto L6afca8;
case 0x6afcab:c.instructions+=2;goto B6afcab;
case 0x6afcae:c.instructions+=1;goto B6afcae;
case 0x6afcb0:goto L6afcb0;
case 0x6afcb4:c.instructions+=2;goto B6afcb4;
case 0x6afcb7:c.instructions+=1;goto B6afcb7;
case 0x6afcbd:goto L6afcbd;
case 0x6afcc0:c.instructions+=3;goto B6afcc0;
case 0x6afcc4:c.instructions+=2;goto B6afcc4;
case 0x6afcc8:c.instructions+=1;goto B6afcc8;
case 0x6afcce:goto L6afcce;
case 0x6afcd0:c.instructions+=2;goto B6afcd0;
case 0x6afcd3:c.instructions+=1;goto B6afcd3;
case 0x6afcd5:goto L6afcd5;
case 0x6afcd7:c.instructions+=3;goto B6afcd7;
case 0x6afcda:c.instructions+=2;goto B6afcda;
case 0x6afcdd:c.instructions+=1;goto B6afcdd;
case 0x6afcdf:goto L6afcdf;
case 0x6afce5:c.instructions+=4;goto B6afce5;
case 0x6afce8:c.instructions+=3;goto B6afce8;
case 0x6afceb:c.instructions+=2;goto B6afceb;
case 0x6afced:c.instructions+=1;goto B6afced;
case 0x6afcef:goto L6afcef;
case 0x6afcf1:c.instructions+=1;goto B6afcf1;
case 0x6afcf3:goto L6afcf3;
case 0x6afcf6:c.instructions+=1;goto B6afcf6;
case 0x6afcf8:goto L6afcf8;
case 0x6afcfb:c.instructions+=5;goto B6afcfb;
case 0x6afcfe:c.instructions+=4;goto B6afcfe;
case 0x6afd01:c.instructions+=3;goto B6afd01;
case 0x6afd04:c.instructions+=2;goto B6afd04;
case 0x6afd07:c.instructions+=1;goto B6afd07;
case 0x6afd09:goto L6afd09;
case 0x6afd0c:c.instructions+=2;goto B6afd0c;
case 0x6afd0f:c.instructions+=1;goto B6afd0f;
case 0x6afd13:goto L6afd13;
case 0x6afd14:c.instructions+=2;goto B6afd14;
case 0x6afd17:c.instructions+=1;goto B6afd17;
case 0x6afd19:goto L6afd19;
case 0x6afd1b:goto L6afd1b;
case 0x6afd1e:c.instructions+=5;goto B6afd1e;
case 0x6afd24:c.instructions+=4;goto B6afd24;
case 0x6afd25:c.instructions+=3;goto B6afd25;
case 0x6afd28:c.instructions+=2;goto B6afd28;
case 0x6afd2b:c.instructions+=1;goto B6afd2b;
case 0x6afd2d:goto L6afd2d;
case 0x6afd30:c.instructions+=2;goto B6afd30;
case 0x6afd33:c.instructions+=1;goto B6afd33;
case 0x6afd35:goto L6afd35;
case 0x6afd38:c.instructions+=1;goto B6afd38;
case 0x6afd3a:goto L6afd3a;
case 0x6afd3b:c.instructions+=5;goto B6afd3b;
case 0x6afd3c:c.instructions+=4;goto B6afd3c;
case 0x6afd3e:c.instructions+=3;goto B6afd3e;
case 0x6afd3f:c.instructions+=2;goto B6afd3f;
case 0x6afd40:c.instructions+=1;goto B6afd40;
case 0x6afd41:goto L6afd41;
case 0x6afd43:c.instructions+=10;goto B6afd43;
case 0x6afd44:c.instructions+=9;goto B6afd44;
case 0x6afd46:c.instructions+=8;goto B6afd46;
case 0x6afd49:c.instructions+=7;goto B6afd49;
case 0x6afd4d:c.instructions+=6;goto B6afd4d;
case 0x6afd4e:c.instructions+=5;goto B6afd4e;
case 0x6afd4f:c.instructions+=4;goto B6afd4f;
case 0x6afd51:c.instructions+=3;goto B6afd51;
case 0x6afd55:c.instructions+=2;goto B6afd55;
case 0x6afd56:c.instructions+=1;goto B6afd56;
case 0x6afd5c:goto L6afd5c;
case 0x6afd62:c.instructions+=4;goto B6afd62;
case 0x6afd65:c.instructions+=3;goto B6afd65;
case 0x6afd68:c.instructions+=2;goto B6afd68;
case 0x6afd6a:c.instructions+=1;goto B6afd6a;
case 0x6afd70:goto L6afd70;
case 0x6afd72:c.instructions+=4;goto B6afd72;
case 0x6afd74:c.instructions+=3;goto B6afd74;
case 0x6afd79:c.instructions+=2;goto B6afd79;
case 0x6afd7e:c.instructions+=1;goto B6afd7e;
case 0x6afd84:goto L6afd84;
case 0x6afd86:c.instructions+=1;goto B6afd86;
case 0x6afd8c:goto L6afd8c;
case 0x6afd91:c.instructions+=17;goto B6afd91;
case 0x6afd96:c.instructions+=16;goto B6afd96;
case 0x6afd98:c.instructions+=15;goto B6afd98;
case 0x6afd9a:c.instructions+=14;goto B6afd9a;
case 0x6afd9c:c.instructions+=13;goto B6afd9c;
case 0x6afd9e:c.instructions+=12;goto B6afd9e;
case 0x6afda1:c.instructions+=11;goto B6afda1;
case 0x6afda4:c.instructions+=10;goto B6afda4;
case 0x6afda7:c.instructions+=9;goto B6afda7;
case 0x6afdaa:c.instructions+=8;goto B6afdaa;
case 0x6afdad:c.instructions+=7;goto B6afdad;
case 0x6afdb0:c.instructions+=6;goto B6afdb0;
case 0x6afdb3:c.instructions+=5;goto B6afdb3;
case 0x6afdb6:c.instructions+=4;goto B6afdb6;
case 0x6afdb9:c.instructions+=3;goto B6afdb9;
case 0x6afdbc:c.instructions+=2;goto B6afdbc;
case 0x6afdc0:c.instructions+=1;goto B6afdc0;
case 0x6afdc6:goto L6afdc6;
case 0x6afdc8:c.instructions+=1;goto B6afdc8;
case 0x6afdcd:goto L6afdcd;
case 0x6afdcf:c.instructions+=1;goto B6afdcf;
case 0x6afdd1:goto L6afdd1;
case 0x6afdd3:c.instructions+=1;goto B6afdd3;
case 0x6afdd8:goto L6afdd8;
case 0x6afdda:c.instructions+=1;goto B6afdda;
case 0x6afddc:goto L6afddc;
case 0x6afdde:goto L6afdde;
case 0x6afde0:c.instructions+=1;goto B6afde0;
case 0x6afde6:goto L6afde6;
case 0x6afde9:c.instructions+=8;goto B6afde9;
case 0x6afdeb:c.instructions+=7;goto B6afdeb;
case 0x6afdee:c.instructions+=6;goto B6afdee;
case 0x6afdf0:c.instructions+=5;goto B6afdf0;
case 0x6afdf3:c.instructions+=4;goto B6afdf3;
case 0x6afdf8:c.instructions+=3;goto B6afdf8;
case 0x6afdf9:c.instructions+=2;goto B6afdf9;
case 0x6afdfb:c.instructions+=1;goto B6afdfb;
case 0x6afe00:goto L6afe00;
case 0x6afe02:c.instructions+=1;goto B6afe02;
case 0x6afe08:goto L6afe08;
case 0x6afe0e:c.instructions+=4;goto B6afe0e;
case 0x6afe11:c.instructions+=3;goto B6afe11;
case 0x6afe14:c.instructions+=2;goto B6afe14;
case 0x6afe16:c.instructions+=1;goto B6afe16;
case 0x6afe1b:goto L6afe1b;
case 0x6afe1d:c.instructions+=1;goto B6afe1d;
case 0x6afe23:goto L6afe23;
case 0x6afe25:c.instructions+=3;goto B6afe25;
case 0x6afe28:c.instructions+=2;goto B6afe28;
case 0x6afe2b:c.instructions+=1;goto B6afe2b;
case 0x6afe2d:goto L6afe2d;
case 0x6afe30:c.instructions+=1;goto B6afe30;
case 0x6afe33:goto L6afe33;
case 0x6afe34:c.instructions+=8;goto B6afe34;
case 0x6afe36:c.instructions+=7;goto B6afe36;
case 0x6afe37:c.instructions+=6;goto B6afe37;
case 0x6afe3a:c.instructions+=5;goto B6afe3a;
case 0x6afe3b:c.instructions+=4;goto B6afe3b;
case 0x6afe3d:c.instructions+=3;goto B6afe3d;
case 0x6afe43:c.instructions+=2;goto B6afe43;
case 0x6afe45:c.instructions+=1;goto B6afe45;
case 0x6afe4a:goto L6afe4a;
case 0x6afe4d:c.instructions+=24;goto B6afe4d;
case 0x6afe50:c.instructions+=23;goto B6afe50;
case 0x6afe54:c.instructions+=22;goto B6afe54;
case 0x6afe57:c.instructions+=21;goto B6afe57;
case 0x6afe5a:c.instructions+=20;goto B6afe5a;
case 0x6afe5d:c.instructions+=19;goto B6afe5d;
case 0x6afe63:c.instructions+=18;goto B6afe63;
case 0x6afe66:c.instructions+=17;goto B6afe66;
case 0x6afe69:c.instructions+=16;goto B6afe69;
case 0x6afe6c:c.instructions+=15;goto B6afe6c;
case 0x6afe6f:c.instructions+=14;goto B6afe6f;
case 0x6afe72:c.instructions+=13;goto B6afe72;
case 0x6afe75:c.instructions+=12;goto B6afe75;
case 0x6afe78:c.instructions+=11;goto B6afe78;
case 0x6afe7e:c.instructions+=10;goto B6afe7e;
case 0x6afe81:c.instructions+=9;goto B6afe81;
case 0x6afe84:c.instructions+=8;goto B6afe84;
case 0x6afe87:c.instructions+=7;goto B6afe87;
case 0x6afe8a:c.instructions+=6;goto B6afe8a;
case 0x6afe8e:c.instructions+=5;goto B6afe8e;
case 0x6afe8f:c.instructions+=4;goto B6afe8f;
case 0x6afe92:c.instructions+=3;goto B6afe92;
case 0x6afe95:c.instructions+=2;goto B6afe95;
case 0x6afe98:c.instructions+=1;goto B6afe98;
case 0x6afe9a:goto L6afe9a;
case 0x6afea0:c.instructions+=3;goto B6afea0;
case 0x6afea2:c.instructions+=2;goto B6afea2;
case 0x6afea8:c.instructions+=1;goto B6afea8;
case 0x6afeaa:goto L6afeaa;
case 0x6afeb0:c.instructions+=5;goto B6afeb0;
case 0x6afeb3:c.instructions+=4;goto B6afeb3;
case 0x6afeb5:c.instructions+=3;goto B6afeb5;
case 0x6afeb6:c.instructions+=2;goto B6afeb6;
case 0x6afeb8:c.instructions+=1;goto B6afeb8;
case 0x6afebd:goto L6afebd;
case 0x6afebf:c.instructions+=1;goto B6afebf;
case 0x6afec1:goto L6afec1;
case 0x6afec4:c.instructions+=3;goto B6afec4;
case 0x6afec7:c.instructions+=2;goto B6afec7;
case 0x6afeca:c.instructions+=1;goto B6afeca;
case 0x6afed0:goto L6afed0;
case 0x6afed2:goto L6afed2;
case 0x6afed3:c.instructions+=4;goto B6afed3;
case 0x6afed4:c.instructions+=3;goto B6afed4;
case 0x6afed5:c.instructions+=2;goto B6afed5;
case 0x6afed6:c.instructions+=1;goto B6afed6;
case 0x6afed7:goto L6afed7;
case 0x6afedc:c.instructions+=1;goto B6afedc;
case 0x6afede:goto L6afede;
case 0x6afee3:c.instructions+=1;goto B6afee3;
case 0x6afee5:goto L6afee5;
case 0x6afee7:goto L6afee7;
case 0x6afee9:c.instructions+=2;goto B6afee9;
case 0x6afeeb:c.instructions+=1;goto B6afeeb;
case 0x6afef0:goto L6afef0;
case 0x6afef2:c.instructions+=1;goto B6afef2;
case 0x6afef4:goto L6afef4;
case 0x6afef6:c.instructions+=10;goto B6afef6;
case 0x6afef7:c.instructions+=9;goto B6afef7;
case 0x6afef9:c.instructions+=8;goto B6afef9;
case 0x6afefc:c.instructions+=7;goto B6afefc;
case 0x6afefd:c.instructions+=6;goto B6afefd;
case 0x6afeff:c.instructions+=5;goto B6afeff;
case 0x6aff02:c.instructions+=4;goto B6aff02;
case 0x6aff03:c.instructions+=3;goto B6aff03;
case 0x6aff05:c.instructions+=2;goto B6aff05;
case 0x6aff08:c.instructions+=1;goto B6aff08;
case 0x6aff0d:goto L6aff0d;
case 0x6aff0f:c.instructions+=1;goto B6aff0f;
case 0x6aff11:goto L6aff11;
case 0x6aff13:c.instructions+=1;goto B6aff13;
case 0x6aff18:goto L6aff18;
case 0x6aff1a:c.instructions+=1;goto B6aff1a;
case 0x6aff1c:goto L6aff1c;
case 0x6aff1e:goto L6aff1e;
case 0x6aff20:c.instructions+=1;goto B6aff20;
case 0x6aff22:goto L6aff22;
case 0x6aff27:c.instructions+=1;goto B6aff27;
case 0x6aff2c:goto L6aff2c;
case 0x6aff2d:c.instructions+=6;goto B6aff2d;
case 0x6aff2f:c.instructions+=5;goto B6aff2f;
case 0x6aff31:c.instructions+=4;goto B6aff31;
case 0x6aff33:c.instructions+=3;goto B6aff33;
case 0x6aff38:c.instructions+=2;goto B6aff38;
case 0x6aff3a:c.instructions+=1;goto B6aff3a;
case 0x6aff3f:goto L6aff3f;
case 0x6aff41:c.instructions+=1;goto B6aff41;
case 0x6aff47:goto L6aff47;
case 0x6aff4b:c.instructions+=3;goto B6aff4b;
case 0x6aff4d:c.instructions+=2;goto B6aff4d;
case 0x6aff50:c.instructions+=1;goto B6aff50;
case 0x6aff52:goto L6aff52;
case 0x6aff55:c.instructions+=6;goto B6aff55;
case 0x6aff57:c.instructions+=5;goto B6aff57;
case 0x6aff5a:c.instructions+=4;goto B6aff5a;
case 0x6aff5d:c.instructions+=3;goto B6aff5d;
case 0x6aff60:c.instructions+=2;goto B6aff60;
case 0x6aff66:c.instructions+=1;goto B6aff66;
case 0x6aff68:goto L6aff68;
case 0x6aff6b:c.instructions+=15;goto B6aff6b;
case 0x6aff6e:c.instructions+=14;goto B6aff6e;
case 0x6aff71:c.instructions+=13;goto B6aff71;
case 0x6aff74:c.instructions+=12;goto B6aff74;
case 0x6aff77:c.instructions+=11;goto B6aff77;
case 0x6aff7a:c.instructions+=10;goto B6aff7a;
case 0x6aff7d:c.instructions+=9;goto B6aff7d;
case 0x6aff83:c.instructions+=8;goto B6aff83;
case 0x6aff86:c.instructions+=7;goto B6aff86;
case 0x6aff89:c.instructions+=6;goto B6aff89;
case 0x6aff8c:c.instructions+=5;goto B6aff8c;
case 0x6aff90:c.instructions+=4;goto B6aff90;
case 0x6aff93:c.instructions+=3;goto B6aff93;
case 0x6aff96:c.instructions+=2;goto B6aff96;
case 0x6aff99:c.instructions+=1;goto B6aff99;
case 0x6aff9c:goto L6aff9c;
case 0x6aff9d:c.instructions+=2;goto B6aff9d;
case 0x6affa0:c.instructions+=1;goto B6affa0;
case 0x6affa2:goto L6affa2;
case 0x6affa4:goto L6affa4;
case 0x6affa5:c.instructions+=8;goto B6affa5;
case 0x6affa7:c.instructions+=7;goto B6affa7;
case 0x6affa8:c.instructions+=6;goto B6affa8;
case 0x6affab:c.instructions+=5;goto B6affab;
case 0x6affac:c.instructions+=4;goto B6affac;
case 0x6affae:c.instructions+=3;goto B6affae;
case 0x6affb4:c.instructions+=2;goto B6affb4;
case 0x6affb6:c.instructions+=1;goto B6affb6;
case 0x6affbb:goto L6affbb;
case 0x6affbe:c.instructions+=4;goto B6affbe;
case 0x6affc1:c.instructions+=3;goto B6affc1;
case 0x6affc4:c.instructions+=2;goto B6affc4;
case 0x6affc8:c.instructions+=1;goto B6affc8;
case 0x6affca:goto L6affca;
case 0x6affcd:c.instructions+=8;goto B6affcd;
case 0x6affd0:c.instructions+=7;goto B6affd0;
case 0x6affd3:c.instructions+=6;goto B6affd3;
case 0x6affd7:c.instructions+=5;goto B6affd7;
case 0x6affda:c.instructions+=4;goto B6affda;
case 0x6affdb:c.instructions+=3;goto B6affdb;
case 0x6affde:c.instructions+=2;goto B6affde;
case 0x6affe1:c.instructions+=1;goto B6affe1;
case 0x6affe3:goto L6affe3;
case 0x6affe4:c.instructions+=2;goto B6affe4;
case 0x6affe6:c.instructions+=1;goto B6affe6;
case 0x6affeb:goto L6affeb;
case 0x6affed:c.instructions+=1;goto B6affed;
case 0x6affef:goto L6affef;
case 0x6afff1:c.instructions+=3;goto B6afff1;
case 0x6afff3:c.instructions+=2;goto B6afff3;
case 0x6afff5:c.instructions+=1;goto B6afff5;
case 0x6afffa:goto L6afffa;
case 0x6afffc:c.instructions+=1;goto B6afffc;
default:missing_instruction(c.pc);}
B6af004:L6af004:{c.instructions+=2;NFSU2_TR(0x6af004);
__builtin_memmove((R+4),(R+24),4);
}
B6af006:{NFSU2_TR(0x6af006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af00bull));
TAIL_STATIC(0x6d2a50u,6d2);
}
B6af00b:L6af00b:{c.instructions+=1;NFSU2_TR(0x6af00b);
{goto L6af06b;}
}
B6af00d:L6af00d:{c.instructions+=2;NFSU2_TR(0x6af00d);
__builtin_memmove((R+4),(R+24),4);
}
B6af00f:{NFSU2_TR(0x6af00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af014ull));
TAIL_STATIC(0x6d2678u,6d2);
}
B6af014:L6af014:{c.instructions+=1;NFSU2_TR(0x6af014);
{goto L6af06b;}
}
B6af016:L6af016:{c.instructions+=2;NFSU2_TR(0x6af016);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af01b:{NFSU2_TR(0x6af01b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af004u);}goto L6af004;}}
}
B6af01d:L6af01d:{c.instructions+=2;NFSU2_TR(0x6af01d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af022:{NFSU2_TR(0x6af022);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af004u);}goto L6af004;}}
}
B6af024:L6af024:{c.instructions+=2;NFSU2_TR(0x6af024);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af029:{NFSU2_TR(0x6af029);
if(r1(R+518)){TAIL_STATIC(0x6aef9du,6ae);}
}
B6af02f:L6af02f:{c.instructions+=2;NFSU2_TR(0x6af02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af034:{NFSU2_TR(0x6af034);
TAIL_STATIC(0x6aef97u,6ae);
}
B6af039:L6af039:{c.instructions+=3;NFSU2_TR(0x6af039);
w4(R+4,u32(0x74500000ull));
}
B6af03e:{NFSU2_TR(0x6af03e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af040:{NFSU2_TR(0x6af040);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6af091;}}
}
B6af042:L6af042:{c.instructions+=1;NFSU2_TR(0x6af042);
if(r1(R+518)){{goto L6af064;}}
}
B6af044:L6af044:{c.instructions+=2;NFSU2_TR(0x6af044);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af049:{NFSU2_TR(0x6af049);
if(r1(R+518)){TAIL_STATIC(0x6aef9du,6ae);}
}
B6af04f:L6af04f:{c.instructions+=2;NFSU2_TR(0x6af04f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af054:{NFSU2_TR(0x6af054);
if(r1(R+518)){{goto L6af088;}}
}
B6af056:L6af056:{c.instructions+=2;NFSU2_TR(0x6af056);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af05b:{NFSU2_TR(0x6af05b);
if(r1(R+518)){{goto L6af07f;}}
}
B6af05d:L6af05d:{c.instructions+=2;NFSU2_TR(0x6af05d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af062:{NFSU2_TR(0x6af062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af0bf;}}
}
B6af064:L6af064:{c.instructions+=2;NFSU2_TR(0x6af064);
__builtin_memmove((R+4),(R+24),4);
}
B6af066:{NFSU2_TR(0x6af066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af06bull));
TAIL_STATIC(0x6d1f44u,6d1);
}
B6af06b:L6af06b:{c.instructions+=2;NFSU2_TR(0x6af06b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af06d:{NFSU2_TR(0x6af06d);
if(r1(R+518)){{goto L6af0bf;}}
}
B6af06f:L6af06f:{c.instructions+=3;NFSU2_TR(0x6af06f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6af070:{NFSU2_TR(0x6af070);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6af073:{NFSU2_TR(0x6af073);
if(r1(R+512)){TAIL_STATIC(0x6aead7u,6ae);}
}
B6af079:L6af079:{c.instructions+=1;NFSU2_TR(0x6af079);
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
B6af07b:L6af07b:{c.instructions+=4;NFSU2_TR(0x6af07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af07c:{NFSU2_TR(0x6af07c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af07d:{NFSU2_TR(0x6af07d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af07e:{NFSU2_TR(0x6af07e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af07f:L6af07f:{c.instructions+=2;NFSU2_TR(0x6af07f);
__builtin_memmove((R+4),(R+24),4);
}
B6af081:{NFSU2_TR(0x6af081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af086ull));
TAIL_STATIC(0x6d3581u,6d3);
}
B6af086:L6af086:{c.instructions+=1;NFSU2_TR(0x6af086);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af06bu);}goto L6af06b;}
}
B6af088:L6af088:{c.instructions+=2;NFSU2_TR(0x6af088);
__builtin_memmove((R+4),(R+24),4);
}
B6af08a:{NFSU2_TR(0x6af08a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af08full));
TAIL_STATIC(0x6d35ebu,6d3);
}
B6af08f:L6af08f:{c.instructions+=1;NFSU2_TR(0x6af08f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af06bu);}goto L6af06b;}
}
B6af091:L6af091:{c.instructions+=2;NFSU2_TR(0x6af091);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af096:{NFSU2_TR(0x6af096);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af064u);}goto L6af064;}}
}
B6af098:L6af098:{c.instructions+=2;NFSU2_TR(0x6af098);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af09d:{NFSU2_TR(0x6af09d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af064u);}goto L6af064;}}
}
B6af09f:L6af09f:{c.instructions+=2;NFSU2_TR(0x6af09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af0a4:{NFSU2_TR(0x6af0a4);
if(r1(R+518)){{goto L6af0b6;}}
}
B6af0a6:L6af0a6:{c.instructions+=2;NFSU2_TR(0x6af0a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af0ab:{NFSU2_TR(0x6af0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af0bf;}}
}
B6af0ad:L6af0ad:{c.instructions+=2;NFSU2_TR(0x6af0ad);
__builtin_memmove((R+4),(R+24),4);
}
B6af0af:{NFSU2_TR(0x6af0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af0b4ull));
TAIL_STATIC(0x6d1ef0u,6d1);
}
B6af0b4:L6af0b4:{c.instructions+=1;NFSU2_TR(0x6af0b4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af06bu);}goto L6af06b;}
}
B6af0b6:L6af0b6:{c.instructions+=2;NFSU2_TR(0x6af0b6);
__builtin_memmove((R+4),(R+24),4);
}
B6af0b8:{NFSU2_TR(0x6af0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af0bdull));
TAIL_STATIC(0x6d1f1au,6d1);
}
B6af0bd:L6af0bd:{c.instructions+=1;NFSU2_TR(0x6af0bd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af06bu);}goto L6af06b;}
}
B6af0bf:L6af0bf:{c.instructions+=2;NFSU2_TR(0x6af0bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6af0c3:{NFSU2_TR(0x6af0c3);
if(r1(R+518)){{goto L6af0cc;}}
}
B6af0c5:L6af0c5:{c.instructions+=2;NFSU2_TR(0x6af0c5);
u8 U[4];
w4(U+0,u32(0x7bb290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af0ca:{NFSU2_TR(0x6af0ca);
{goto L6af0d1;}
}
B6af0cc:L6af0cc:{c.instructions+=1;NFSU2_TR(0x6af0cc);
u8 U[4];
w4(U+0,u32(0x7bb258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af0d1:L6af0d1:{c.instructions+=5;NFSU2_TR(0x6af0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af0d7:{NFSU2_TR(0x6af0d7);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af0dc:{NFSU2_TR(0x6af0dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6af0df:{NFSU2_TR(0x6af0df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af0e0:{NFSU2_TR(0x6af0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af0e5ull));
TAIL_STATIC(0x69e936u,69e);
}
B6af0e5:L6af0e5:{c.instructions+=3;NFSU2_TR(0x6af0e5);
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
B6af0e8:{NFSU2_TR(0x6af0e8);
__builtin_memmove((R+0),(R+12),4);
}
B6af0ea:{NFSU2_TR(0x6af0ea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af07bu);}goto L6af07b;}
}
B6af0ec:L6af0ec:{c.instructions+=6;NFSU2_TR(0x6af0ec);
__builtin_memmove((R+28),(R+28),4);
}
B6af0ee:{NFSU2_TR(0x6af0ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af0ef:{NFSU2_TR(0x6af0ef);
__builtin_memmove((R+20),(R+16),4);
}
B6af0f1:{NFSU2_TR(0x6af0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af0f4:{NFSU2_TR(0x6af0f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af0f9:{NFSU2_TR(0x6af0f9);
if(r1(R+518)){{goto L6af122;}}
}
B6af0fb:L6af0fb:{c.instructions+=2;NFSU2_TR(0x6af0fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af100:{NFSU2_TR(0x6af100);
if(r1(R+518)){{goto L6af122;}}
}
B6af102:L6af102:{c.instructions+=2;NFSU2_TR(0x6af102);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af107:{NFSU2_TR(0x6af107);
if(r1(R+518)){{goto L6af122;}}
}
B6af109:L6af109:{c.instructions+=2;NFSU2_TR(0x6af109);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af10e:{NFSU2_TR(0x6af10e);
if(r1(R+518)){{goto L6af122;}}
}
B6af110:L6af110:{c.instructions+=2;NFSU2_TR(0x6af110);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af115:{NFSU2_TR(0x6af115);
if(r1(R+518)){{goto L6af122;}}
}
B6af117:L6af117:{c.instructions+=2;NFSU2_TR(0x6af117);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af11c:{NFSU2_TR(0x6af11c);
if(r1(R+518)){{goto L6af122;}}
}
B6af11e:L6af11e:{c.instructions+=2;NFSU2_TR(0x6af11e);
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
B6af120:{NFSU2_TR(0x6af120);
{goto L6af125;}
}
B6af122:L6af122:{c.instructions+=2;NFSU2_TR(0x6af122);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af124:{NFSU2_TR(0x6af124);
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
B6af125:L6af125:{c.instructions+=2;NFSU2_TR(0x6af125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6af126:{NFSU2_TR(0x6af126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af129:L6af129:{c.instructions+=5;NFSU2_TR(0x6af129);
__builtin_memmove((R+28),(R+28),4);
}
B6af12b:{NFSU2_TR(0x6af12b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af12c:{NFSU2_TR(0x6af12c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af12d:{NFSU2_TR(0x6af12d);
__builtin_memmove((R+24),(R+4),4);
}
B6af12f:{NFSU2_TR(0x6af12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af134ull));
TAIL_STATIC(0x6cd15fu,6cd);
}
B6af134:L6af134:{c.instructions+=14;NFSU2_TR(0x6af134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af13b:{NFSU2_TR(0x6af13b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6af13d:{NFSU2_TR(0x6af13d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af13f:{NFSU2_TR(0x6af13f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6af140:{NFSU2_TR(0x6af140);
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
B6af142:{NFSU2_TR(0x6af142);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af148:{NFSU2_TR(0x6af148);
u8 U[4];
w4(U+0,u32(0x7bbfe0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6af14e:{NFSU2_TR(0x6af14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af154:{NFSU2_TR(0x6af154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af15a:{NFSU2_TR(0x6af15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af160:{NFSU2_TR(0x6af160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af166:{NFSU2_TR(0x6af166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af16c:{NFSU2_TR(0x6af16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af172:{NFSU2_TR(0x6af172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af178:L6af178:{c.instructions+=1;NFSU2_TR(0x6af178);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6af17a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af178u);}goto L6af178;}
}
B6af17a:L6af17a:{c.instructions+=5;NFSU2_TR(0x6af17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af17b:{NFSU2_TR(0x6af17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af181:{NFSU2_TR(0x6af181);
__builtin_memmove((R+0),(R+24),4);
}
B6af183:{NFSU2_TR(0x6af183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af184:{NFSU2_TR(0x6af184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af185:L6af185:{c.instructions+=11;NFSU2_TR(0x6af185);
__builtin_memmove((R+28),(R+28),4);
}
B6af187:{NFSU2_TR(0x6af187);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af188:{NFSU2_TR(0x6af188);
__builtin_memmove((R+20),(R+16),4);
}
B6af18a:{NFSU2_TR(0x6af18a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af18b:{NFSU2_TR(0x6af18b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af18c:{NFSU2_TR(0x6af18c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af18d:{NFSU2_TR(0x6af18d);
__builtin_memmove((R+24),(R+4),4);
}
B6af18f:{NFSU2_TR(0x6af18f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af191:{NFSU2_TR(0x6af191);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af193:{NFSU2_TR(0x6af193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6af194:{NFSU2_TR(0x6af194);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af19a:L6af19a:{c.instructions+=1;NFSU2_TR(0x6af19a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6af19c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af19au);}goto L6af19a;}
}
B6af19c:L6af19c:{c.instructions+=8;NFSU2_TR(0x6af19c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af1a2:{NFSU2_TR(0x6af1a2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6af1a3:{NFSU2_TR(0x6af1a3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6af1a4:{NFSU2_TR(0x6af1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af1ab:{NFSU2_TR(0x6af1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af1b2:{NFSU2_TR(0x6af1b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af1b8:{NFSU2_TR(0x6af1b8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6af1ba:{NFSU2_TR(0x6af1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af1bfull));
TAIL_STATIC(0x575630u,575);
}
B6af1bf:L6af1bf:{c.instructions+=3;NFSU2_TR(0x6af1bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af1c5:{NFSU2_TR(0x6af1c5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6af1c7:{NFSU2_TR(0x6af1c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af1ccull));
TAIL_STATIC(0x575630u,575);
}
B6af1cc:L6af1cc:{c.instructions+=7;NFSU2_TR(0x6af1cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6af1cf:{NFSU2_TR(0x6af1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6af1d2:{NFSU2_TR(0x6af1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6af1d3:{NFSU2_TR(0x6af1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6af1d4:{NFSU2_TR(0x6af1d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6af1d7:{NFSU2_TR(0x6af1d7);
__builtin_memmove((R+4),(R+24),4);
}
B6af1d9:{NFSU2_TR(0x6af1d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af1deull));
TAIL_STATIC(0x6d0d29u,6d0);
}
B6af1de:L6af1de:{c.instructions+=5;NFSU2_TR(0x6af1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af1df:{NFSU2_TR(0x6af1df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af1e0:{NFSU2_TR(0x6af1e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af1e1:{NFSU2_TR(0x6af1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6af1e2:{NFSU2_TR(0x6af1e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af1e5:L6af1e5:{c.instructions+=23;NFSU2_TR(0x6af1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af1eb:{NFSU2_TR(0x6af1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af1ee:{NFSU2_TR(0x6af1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af1f2:{NFSU2_TR(0x6af1f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6af1f9:{NFSU2_TR(0x6af1f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af1fa:{NFSU2_TR(0x6af1fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af1fb:{NFSU2_TR(0x6af1fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af1fd:{NFSU2_TR(0x6af1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af1fe:{NFSU2_TR(0x6af1fe);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af200:{NFSU2_TR(0x6af200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af201:{NFSU2_TR(0x6af201);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af204:{NFSU2_TR(0x6af204);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffdeull))));
}
B6af207:{NFSU2_TR(0x6af207);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af20d:{NFSU2_TR(0x6af20d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x16712c8aull))));
}
B6af212:{NFSU2_TR(0x6af212);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6af218:{NFSU2_TR(0x6af218);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af21e:{NFSU2_TR(0x6af21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af221:{NFSU2_TR(0x6af221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af228:{NFSU2_TR(0x6af228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af22b:{NFSU2_TR(0x6af22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af232:{NFSU2_TR(0x6af232);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af239:{NFSU2_TR(0x6af239);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af23c:{NFSU2_TR(0x6af23c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af25d;}}
}
B6af23e:L6af23e:{c.instructions+=10;NFSU2_TR(0x6af23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af242:{NFSU2_TR(0x6af242);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af244:{NFSU2_TR(0x6af244);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff71ffdbull))));
}
B6af249:{NFSU2_TR(0x6af249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6af24a:{NFSU2_TR(0x6af24a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xd010ull))));
}
B6af24f:{NFSU2_TR(0x6af24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af252:{NFSU2_TR(0x6af252);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af255:{NFSU2_TR(0x6af255);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af258:{NFSU2_TR(0x6af258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af25b:{NFSU2_TR(0x6af25b);
{goto L6af293;}
}
B6af25d:L6af25d:{c.instructions+=17;NFSU2_TR(0x6af25d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af25e:{NFSU2_TR(0x6af25e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6af260:{NFSU2_TR(0x6af260);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af266:{NFSU2_TR(0x6af266);
__builtin_memmove((R+12),(R+518),1);
}
B6af269:{NFSU2_TR(0x6af269);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffd2fffull))));
}
B6af26e:{NFSU2_TR(0x6af26e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af270:{NFSU2_TR(0x6af270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af271:{NFSU2_TR(0x6af271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af274:{NFSU2_TR(0x6af274);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af27b:{NFSU2_TR(0x6af27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af27e:{NFSU2_TR(0x6af27e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B6af281:{NFSU2_TR(0x6af281);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6af284:{NFSU2_TR(0x6af284);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6af286:{NFSU2_TR(0x6af286);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x208c0014ull))));
}
B6af28c:{NFSU2_TR(0x6af28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af28f:{NFSU2_TR(0x6af28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af292:{NFSU2_TR(0x6af292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af293:L6af293:{c.instructions+=4;NFSU2_TR(0x6af293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af294:{NFSU2_TR(0x6af294);
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
B6af296:{NFSU2_TR(0x6af296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af297:{NFSU2_TR(0x6af297);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af298:L6af298:{c.instructions+=11;NFSU2_TR(0x6af298);
__builtin_memmove((R+28),(R+28),4);
}
B6af29a:{NFSU2_TR(0x6af29a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af29b:{NFSU2_TR(0x6af29b);
__builtin_memmove((R+20),(R+16),4);
}
B6af29d:{NFSU2_TR(0x6af29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6af2a0:{NFSU2_TR(0x6af2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af2a3:{NFSU2_TR(0x6af2a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6af2a9:{NFSU2_TR(0x6af2a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af2aa:{NFSU2_TR(0x6af2aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af2ab:{NFSU2_TR(0x6af2ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af2ac:{NFSU2_TR(0x6af2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af2af:{NFSU2_TR(0x6af2af);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6af370;}}
}
B6af2b5:L6af2b5:{c.instructions+=3;NFSU2_TR(0x6af2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af2bb:{NFSU2_TR(0x6af2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6af2be:{NFSU2_TR(0x6af2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af2c1:L6af2c1:{c.instructions+=4;NFSU2_TR(0x6af2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af2c4:{NFSU2_TR(0x6af2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6af2c6:{NFSU2_TR(0x6af2c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af2c8:{NFSU2_TR(0x6af2c8);
if(r1(R+518)){{goto L6af336;}}
}
B6af2ca:L6af2ca:{c.instructions+=3;NFSU2_TR(0x6af2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af2cc:{NFSU2_TR(0x6af2cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af2ce:{NFSU2_TR(0x6af2ce);
if(r1(R+518)){{goto L6af336;}}
}
B6af2d0:L6af2d0:{c.instructions+=7;NFSU2_TR(0x6af2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af2d3:{NFSU2_TR(0x6af2d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af2d5:{NFSU2_TR(0x6af2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af2d8:{NFSU2_TR(0x6af2d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af2db:{NFSU2_TR(0x6af2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af2de:{NFSU2_TR(0x6af2de);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af2e4:{NFSU2_TR(0x6af2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af2f2;}}
}
B6af2e6:L6af2e6:{c.instructions+=3;NFSU2_TR(0x6af2e6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6af2eb:{NFSU2_TR(0x6af2eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af2f0:{NFSU2_TR(0x6af2f0);
if(r1(R+518)){{goto L6af336;}}
}
B6af2f2:L6af2f2:{c.instructions+=3;NFSU2_TR(0x6af2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af2f6:{NFSU2_TR(0x6af2f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af2fa:{NFSU2_TR(0x6af2fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af336;}}
}
B6af2fc:L6af2fc:{c.instructions+=1;NFSU2_TR(0x6af2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af2ff:L6af2ff:{c.instructions+=5;NFSU2_TR(0x6af2ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af301:{NFSU2_TR(0x6af301);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af304:{NFSU2_TR(0x6af304);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af307:{NFSU2_TR(0x6af307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af30a:{NFSU2_TR(0x6af30a);
{goto L6af30f;}
}
B6af30c:L6af30c:{c.instructions+=1;NFSU2_TR(0x6af30c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af30f:L6af30f:{c.instructions+=3;NFSU2_TR(0x6af30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af312:{NFSU2_TR(0x6af312);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af315:{NFSU2_TR(0x6af315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af30cu);}goto L6af30c;}}
}
B6af317:L6af317:{c.instructions+=2;NFSU2_TR(0x6af317);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6af31b:{NFSU2_TR(0x6af31b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af328;}}
}
B6af31d:L6af31d:{c.instructions+=4;NFSU2_TR(0x6af31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af320:{NFSU2_TR(0x6af320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B6af323:{NFSU2_TR(0x6af323);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6af326:{NFSU2_TR(0x6af326);
if(r1(R+518)){{goto L6af34e;}}
}
B6af328:L6af328:{c.instructions+=5;NFSU2_TR(0x6af328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af32b:{NFSU2_TR(0x6af32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af32e:{NFSU2_TR(0x6af32e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6af331:{NFSU2_TR(0x6af331);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6af334:{NFSU2_TR(0x6af334);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af2ffu);}goto L6af2ff;}}
}
B6af336:L6af336:{c.instructions+=5;NFSU2_TR(0x6af336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af339:{NFSU2_TR(0x6af339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af33c:{NFSU2_TR(0x6af33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af340:{NFSU2_TR(0x6af340);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6af346:{NFSU2_TR(0x6af346);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af2c1u);}goto L6af2c1;}}
}
B6af34c:L6af34c:{c.instructions+=1;NFSU2_TR(0x6af34c);
{goto L6af370;}
}
B6af34e:L6af34e:{c.instructions+=8;NFSU2_TR(0x6af34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af354:{NFSU2_TR(0x6af354);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6af359:{NFSU2_TR(0x6af359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af35a:{NFSU2_TR(0x6af35a);
u8 U[4];
w4(U+0,u32(0x7bc088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af35f:{NFSU2_TR(0x6af35f);
u8 U[4];
w4(U+0,u32(0x1263ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af364:{NFSU2_TR(0x6af364);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6af367:{NFSU2_TR(0x6af367);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af368:{NFSU2_TR(0x6af368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af36dull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6af36d:L6af36d:{c.instructions+=1;NFSU2_TR(0x6af36d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6af370:L6af370:{c.instructions+=6;NFSU2_TR(0x6af370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af371:{NFSU2_TR(0x6af371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af372:{NFSU2_TR(0x6af372);
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
B6af374:{NFSU2_TR(0x6af374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af375:{NFSU2_TR(0x6af375);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af376:{NFSU2_TR(0x6af376);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af377:L6af377:{c.instructions+=12;NFSU2_TR(0x6af377);
__builtin_memmove((R+28),(R+28),4);
}
B6af379:{NFSU2_TR(0x6af379);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af37a:{NFSU2_TR(0x6af37a);
__builtin_memmove((R+20),(R+16),4);
}
B6af37c:{NFSU2_TR(0x6af37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6af37f:{NFSU2_TR(0x6af37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af385:{NFSU2_TR(0x6af385);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af388:{NFSU2_TR(0x6af388);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af38b:{NFSU2_TR(0x6af38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af38e:{NFSU2_TR(0x6af38e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af391:{NFSU2_TR(0x6af391);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af394:{NFSU2_TR(0x6af394);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af397:{NFSU2_TR(0x6af397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af39e;}}
}
B6af399:L6af399:{c.instructions+=4;NFSU2_TR(0x6af399);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af39b:{NFSU2_TR(0x6af39b);
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
B6af39c:{NFSU2_TR(0x6af39c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af39d:{NFSU2_TR(0x6af39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af39e:L6af39e:{c.instructions+=8;NFSU2_TR(0x6af39e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af39f:{NFSU2_TR(0x6af39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af3a2:{NFSU2_TR(0x6af3a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af3a3:{NFSU2_TR(0x6af3a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6af3a6:{NFSU2_TR(0x6af3a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af3a8:{NFSU2_TR(0x6af3a8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6af3ae:{NFSU2_TR(0x6af3ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af3b4:{NFSU2_TR(0x6af3b4);
if(r1(R+518)){{goto L6af3be;}}
}
B6af3b6:L6af3b6:{c.instructions+=3;NFSU2_TR(0x6af3b6);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af3b8:{NFSU2_TR(0x6af3b8);
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
B6af3b9:{NFSU2_TR(0x6af3b9);
{goto L6af4d3;}
}
B6af3be:L6af3be:{c.instructions+=11;NFSU2_TR(0x6af3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af3c4:{NFSU2_TR(0x6af3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af3c8:{NFSU2_TR(0x6af3c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af3c9:{NFSU2_TR(0x6af3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af3cc:{NFSU2_TR(0x6af3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af3cf:{NFSU2_TR(0x6af3cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af3d2:{NFSU2_TR(0x6af3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af3d5:{NFSU2_TR(0x6af3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af3d8:{NFSU2_TR(0x6af3d8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af3db:{NFSU2_TR(0x6af3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af3de:{NFSU2_TR(0x6af3de);
if(r1(R+518)){{goto L6af42b;}}
}
B6af3e0:L6af3e0:{c.instructions+=2;NFSU2_TR(0x6af3e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af3e4:{NFSU2_TR(0x6af3e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af42b;}}
}
B6af3e6:L6af3e6:{c.instructions+=5;NFSU2_TR(0x6af3e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af3e9:{NFSU2_TR(0x6af3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af3eb:{NFSU2_TR(0x6af3eb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6af3f1:{NFSU2_TR(0x6af3f1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af3f7:{NFSU2_TR(0x6af3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af42b;}}
}
B6af3f9:L6af3f9:{c.instructions+=3;NFSU2_TR(0x6af3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af3fd:{NFSU2_TR(0x6af3fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af401:{NFSU2_TR(0x6af401);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af42b;}}
}
B6af403:L6af403:{c.instructions+=1;NFSU2_TR(0x6af403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af406:L6af406:{c.instructions+=5;NFSU2_TR(0x6af406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af409:{NFSU2_TR(0x6af409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af40c:{NFSU2_TR(0x6af40c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6af40f:{NFSU2_TR(0x6af40f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6af412:{NFSU2_TR(0x6af412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af41d;}}
}
B6af414:L6af414:{c.instructions+=3;NFSU2_TR(0x6af414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af417:{NFSU2_TR(0x6af417);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af41a:{NFSU2_TR(0x6af41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af41d:L6af41d:{c.instructions+=4;NFSU2_TR(0x6af41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af420:{NFSU2_TR(0x6af420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af423:{NFSU2_TR(0x6af423);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6af426:{NFSU2_TR(0x6af426);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af406u);}goto L6af406;}}
}
B6af428:L6af428:{c.instructions+=1;NFSU2_TR(0x6af428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af42b:L6af42b:{c.instructions+=5;NFSU2_TR(0x6af42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af42e:{NFSU2_TR(0x6af42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af432:{NFSU2_TR(0x6af432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af436:{NFSU2_TR(0x6af436);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af438:{NFSU2_TR(0x6af438);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af485;}}
}
B6af43a:L6af43a:{c.instructions+=6;NFSU2_TR(0x6af43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af43d:{NFSU2_TR(0x6af43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af440:{NFSU2_TR(0x6af440);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6af443:{NFSU2_TR(0x6af443);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af446:{NFSU2_TR(0x6af446);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af449:{NFSU2_TR(0x6af449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af45d;}}
}
B6af44b:L6af44b:{c.instructions+=4;NFSU2_TR(0x6af44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af44e:{NFSU2_TR(0x6af44e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6af451:{NFSU2_TR(0x6af451);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af454:{NFSU2_TR(0x6af454);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af45d;}}
}
B6af456:L6af456:{c.instructions+=1;NFSU2_TR(0x6af456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af45d:L6af45d:{c.instructions+=2;NFSU2_TR(0x6af45d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af460:{NFSU2_TR(0x6af460);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af474;}}
}
B6af462:L6af462:{c.instructions+=4;NFSU2_TR(0x6af462);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af465:{NFSU2_TR(0x6af465);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af468:{NFSU2_TR(0x6af468);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af46b:{NFSU2_TR(0x6af46b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af474;}}
}
B6af46d:L6af46d:{c.instructions+=1;NFSU2_TR(0x6af46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af474:L6af474:{c.instructions+=4;NFSU2_TR(0x6af474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af477:{NFSU2_TR(0x6af477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af47a:{NFSU2_TR(0x6af47a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6af47d:{NFSU2_TR(0x6af47d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af43au);}goto L6af43a;}}
}
B6af47f:L6af47f:{c.instructions+=2;NFSU2_TR(0x6af47f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af483:{NFSU2_TR(0x6af483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af48a;}}
}
B6af485:L6af485:{c.instructions+=3;NFSU2_TR(0x6af485);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af487:{NFSU2_TR(0x6af487);
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
B6af488:{NFSU2_TR(0x6af488);
{goto L6af4d2;}
}
B6af48a:L6af48a:{c.instructions+=17;NFSU2_TR(0x6af48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af490:{NFSU2_TR(0x6af490);
u8 U[4];
w4(U+0,u32(0x72e00003ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6af496:{NFSU2_TR(0x6af496);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af49c:{NFSU2_TR(0x6af49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af4a3:{NFSU2_TR(0x6af4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4a9:{NFSU2_TR(0x6af4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4ac:{NFSU2_TR(0x6af4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af4af:{NFSU2_TR(0x6af4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af4b2:{NFSU2_TR(0x6af4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4b8:{NFSU2_TR(0x6af4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4bb:{NFSU2_TR(0x6af4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af4be:{NFSU2_TR(0x6af4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af4c1:{NFSU2_TR(0x6af4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4c7:{NFSU2_TR(0x6af4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4ca:{NFSU2_TR(0x6af4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af4cd:{NFSU2_TR(0x6af4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af4d0:{NFSU2_TR(0x6af4d0);
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
B6af4d2:L6af4d2:{c.instructions+=1;NFSU2_TR(0x6af4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af4d3:L6af4d3:{c.instructions+=4;NFSU2_TR(0x6af4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af4d4:{NFSU2_TR(0x6af4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af4d5:{NFSU2_TR(0x6af4d5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af4d6:{NFSU2_TR(0x6af4d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af4d7:L6af4d7:{c.instructions+=15;NFSU2_TR(0x6af4d7);
__builtin_memmove((R+28),(R+28),4);
}
B6af4d9:{NFSU2_TR(0x6af4d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af4da:{NFSU2_TR(0x6af4da);
__builtin_memmove((R+20),(R+16),4);
}
B6af4dc:{NFSU2_TR(0x6af4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6af4df:{NFSU2_TR(0x6af4df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af4e0:{NFSU2_TR(0x6af4e0);
__builtin_memmove((R+12),(R+4),4);
}
B6af4e2:{NFSU2_TR(0x6af4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af4e8:{NFSU2_TR(0x6af4e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6af4ea:{NFSU2_TR(0x6af4ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6af4f0:{NFSU2_TR(0x6af4f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af4f3:{NFSU2_TR(0x6af4f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af4f4:{NFSU2_TR(0x6af4f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af4f5:{NFSU2_TR(0x6af4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af4f8:{NFSU2_TR(0x6af4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af4fb:{NFSU2_TR(0x6af4fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af73f;}}
}
B6af501:L6af501:{c.instructions+=2;NFSU2_TR(0x6af501);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af504:{NFSU2_TR(0x6af504);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af73f;}}
}
B6af50a:L6af50a:{c.instructions+=10;NFSU2_TR(0x6af50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af50d:{NFSU2_TR(0x6af50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af510:{NFSU2_TR(0x6af510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af513:{NFSU2_TR(0x6af513);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af516:{NFSU2_TR(0x6af516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af51c:{NFSU2_TR(0x6af51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af51f:{NFSU2_TR(0x6af51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af523:{NFSU2_TR(0x6af523);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af526:{NFSU2_TR(0x6af526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af529:{NFSU2_TR(0x6af529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af52c:L6af52c:{c.instructions+=3;NFSU2_TR(0x6af52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af52f:{NFSU2_TR(0x6af52f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af531:{NFSU2_TR(0x6af531);
if(r1(R+518)){{goto L6af663;}}
}
B6af537:L6af537:{c.instructions+=4;NFSU2_TR(0x6af537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af53a:{NFSU2_TR(0x6af53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af53e:{NFSU2_TR(0x6af53e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6af542:{NFSU2_TR(0x6af542);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af52cu);}goto L6af52c;}}
}
B6af544:L6af544:{c.instructions+=5;NFSU2_TR(0x6af544);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af547:{NFSU2_TR(0x6af547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af54b:{NFSU2_TR(0x6af54b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af54e:{NFSU2_TR(0x6af54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af551:{NFSU2_TR(0x6af551);
if(r1(R+518)){{goto L6af595;}}
}
B6af553:L6af553:{c.instructions+=6;NFSU2_TR(0x6af553);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af556:{NFSU2_TR(0x6af556);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af559:{NFSU2_TR(0x6af559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af55b:{NFSU2_TR(0x6af55b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6af561:{NFSU2_TR(0x6af561);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af567:{NFSU2_TR(0x6af567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af595;}}
}
B6af569:L6af569:{c.instructions+=3;NFSU2_TR(0x6af569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af56d:{NFSU2_TR(0x6af56d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af571:{NFSU2_TR(0x6af571);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af595;}}
}
B6af573:L6af573:{c.instructions+=5;NFSU2_TR(0x6af573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af576:{NFSU2_TR(0x6af576);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af579:{NFSU2_TR(0x6af579);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6af57c:{NFSU2_TR(0x6af57c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6af57f:{NFSU2_TR(0x6af57f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af58a;}}
}
B6af581:L6af581:{c.instructions+=3;NFSU2_TR(0x6af581);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af584:{NFSU2_TR(0x6af584);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af587:{NFSU2_TR(0x6af587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af58a:L6af58a:{c.instructions+=4;NFSU2_TR(0x6af58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af58d:{NFSU2_TR(0x6af58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af590:{NFSU2_TR(0x6af590);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6af593:{NFSU2_TR(0x6af593);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af573u);}goto L6af573;}}
}
B6af595:L6af595:{c.instructions+=2;NFSU2_TR(0x6af595);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6af597:{NFSU2_TR(0x6af597);
__builtin_memmove((R+0),(R+24),4);
}
B6af599:L6af599:{c.instructions+=3;NFSU2_TR(0x6af599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af59b:{NFSU2_TR(0x6af59b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af59e:{NFSU2_TR(0x6af59e);
if(r1(R+518)){{goto L6af663;}}
}
B6af5a4:L6af5a4:{c.instructions+=4;NFSU2_TR(0x6af5a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6af5a5:{NFSU2_TR(0x6af5a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6af5a8:{NFSU2_TR(0x6af5a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6af5ab:{NFSU2_TR(0x6af5ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af599u);}goto L6af599;}}
}
B6af5ad:L6af5ad:{c.instructions+=2;NFSU2_TR(0x6af5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af5b1:{NFSU2_TR(0x6af5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af5b4:L6af5b4:{c.instructions+=7;NFSU2_TR(0x6af5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af5b7:{NFSU2_TR(0x6af5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af5b9:{NFSU2_TR(0x6af5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af5bc:{NFSU2_TR(0x6af5bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af5bf:{NFSU2_TR(0x6af5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af5c2:{NFSU2_TR(0x6af5c2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af5c5:{NFSU2_TR(0x6af5c5);
if(r1(R+518)){{goto L6af6e2;}}
}
B6af5cb:L6af5cb:{c.instructions+=10;NFSU2_TR(0x6af5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af5ce:{NFSU2_TR(0x6af5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af5d1:{NFSU2_TR(0x6af5d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6af5d4:{NFSU2_TR(0x6af5d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6af5d7:{NFSU2_TR(0x6af5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af5d9:{NFSU2_TR(0x6af5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af5db:{NFSU2_TR(0x6af5db);
__builtin_memmove((R+4),(R+8),4);
}
B6af5dd:{NFSU2_TR(0x6af5dd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B6af5df:{NFSU2_TR(0x6af5df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af5e5:{NFSU2_TR(0x6af5e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af6e2;}}
}
B6af5eb:L6af5eb:{c.instructions+=7;NFSU2_TR(0x6af5eb);
w4(R+4,u32(0xfffffull));
}
B6af5f0:{NFSU2_TR(0x6af5f0);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B6af5f2:{NFSU2_TR(0x6af5f2);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6af5f4:{NFSU2_TR(0x6af5f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af5f6:{NFSU2_TR(0x6af5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af5f9:{NFSU2_TR(0x6af5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af5fc:{NFSU2_TR(0x6af5fc);
if(r1(R+518)){{goto L6af6e2;}}
}
B6af602:L6af602:{c.instructions+=2;NFSU2_TR(0x6af602);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af604:{NFSU2_TR(0x6af604);
if(r1(R+518)){{goto L6af6e2;}}
}
B6af60a:L6af60a:{c.instructions+=9;NFSU2_TR(0x6af60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af60d:{NFSU2_TR(0x6af60d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6af60f:{NFSU2_TR(0x6af60f);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6af60f);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6af60f);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6af612:{NFSU2_TR(0x6af612);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6af614:{NFSU2_TR(0x6af614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af617:{NFSU2_TR(0x6af617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af61a:{NFSU2_TR(0x6af61a);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6af61a);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6af61a);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6af61d:{NFSU2_TR(0x6af61d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af620:{NFSU2_TR(0x6af620);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af6e2;}}
}
B6af626:L6af626:{c.instructions+=3;NFSU2_TR(0x6af626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af629:{NFSU2_TR(0x6af629);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af62c:{NFSU2_TR(0x6af62c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af6e2;}}
}
B6af632:L6af632:{c.instructions+=3;NFSU2_TR(0x6af632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af635:{NFSU2_TR(0x6af635);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af638:{NFSU2_TR(0x6af638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af6e2;}}
}
B6af63e:L6af63e:{c.instructions+=4;NFSU2_TR(0x6af63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af642:{NFSU2_TR(0x6af642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af646:{NFSU2_TR(0x6af646);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af648:{NFSU2_TR(0x6af648);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af677;}}
}
B6af64a:L6af64a:{c.instructions+=1;NFSU2_TR(0x6af64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af64d:L6af64d:{c.instructions+=4;NFSU2_TR(0x6af64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af650:{NFSU2_TR(0x6af650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af652:{NFSU2_TR(0x6af652);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af654:{NFSU2_TR(0x6af654);
if(r1(R+518)){{goto L6af671;}}
}
B6af656:L6af656:{c.instructions+=4;NFSU2_TR(0x6af656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af659:{NFSU2_TR(0x6af659);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6af65c:{NFSU2_TR(0x6af65c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6af65f:{NFSU2_TR(0x6af65f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af64du);}goto L6af64d;}}
}
B6af661:L6af661:{c.instructions+=1;NFSU2_TR(0x6af661);
{goto L6af677;}
}
B6af663:L6af663:{c.instructions+=3;NFSU2_TR(0x6af663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af666:{NFSU2_TR(0x6af666);
u8 U[4];
w4(U+0,u32(0x11000003ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6af66c:{NFSU2_TR(0x6af66c);
{goto L6af73b;}
}
B6af671:L6af671:{c.instructions+=2;NFSU2_TR(0x6af671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af674:{NFSU2_TR(0x6af674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af677:L6af677:{c.instructions+=3;NFSU2_TR(0x6af677);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af679:{NFSU2_TR(0x6af679);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af67b:{NFSU2_TR(0x6af67b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af6e2;}}
}
B6af67d:L6af67d:{c.instructions+=1;NFSU2_TR(0x6af67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af680:L6af680:{c.instructions+=3;NFSU2_TR(0x6af680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6af682:{NFSU2_TR(0x6af682);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af685:{NFSU2_TR(0x6af685);
if(r1(R+518)){{goto L6af692;}}
}
B6af687:L6af687:{c.instructions+=4;NFSU2_TR(0x6af687);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6af688:{NFSU2_TR(0x6af688);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6af68b:{NFSU2_TR(0x6af68b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6af68e:{NFSU2_TR(0x6af68e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af680u);}goto L6af680;}}
}
B6af690:L6af690:{c.instructions+=1;NFSU2_TR(0x6af690);
{goto L6af6e2;}
}
B6af692:L6af692:{c.instructions+=2;NFSU2_TR(0x6af692);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af695:{NFSU2_TR(0x6af695);
if(r1(R+518)){{goto L6af6e2;}}
}
B6af697:L6af697:{c.instructions+=2;NFSU2_TR(0x6af697);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af69b:{NFSU2_TR(0x6af69b);
if(r1(R+518)){{goto L6af6e2;}}
}
B6af69d:L6af69d:{c.instructions+=3;NFSU2_TR(0x6af69d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af6a1:{NFSU2_TR(0x6af6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af6a8:{NFSU2_TR(0x6af6a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af71a;}}
}
B6af6aa:L6af6aa:{c.instructions+=10;NFSU2_TR(0x6af6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af6ad:{NFSU2_TR(0x6af6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af6b0:{NFSU2_TR(0x6af6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af6b3:{NFSU2_TR(0x6af6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6af6b6:{NFSU2_TR(0x6af6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af6b9:{NFSU2_TR(0x6af6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af6bc:{NFSU2_TR(0x6af6bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6af6bf:{NFSU2_TR(0x6af6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6af6c2:{NFSU2_TR(0x6af6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af6c5:{NFSU2_TR(0x6af6c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6af6c8:L6af6c8:{c.instructions+=3;NFSU2_TR(0x6af6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6af6ca:{NFSU2_TR(0x6af6ca);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af6cc:{NFSU2_TR(0x6af6cc);
if(r1(R+518)){{goto L6af6d2;}}
}
B6af6ce:L6af6ce:{c.instructions+=1;NFSU2_TR(0x6af6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af6d2:L6af6d2:{c.instructions+=4;NFSU2_TR(0x6af6d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6af6d4:{NFSU2_TR(0x6af6d4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6af6d6:{NFSU2_TR(0x6af6d6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6af6d7:{NFSU2_TR(0x6af6d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af6c8u);}goto L6af6c8;}}
}
B6af6d9:L6af6d9:{c.instructions+=3;NFSU2_TR(0x6af6d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af6dd:{NFSU2_TR(0x6af6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af6e0:{NFSU2_TR(0x6af6e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af71a;}}
}
B6af6e2:L6af6e2:{c.instructions+=4;NFSU2_TR(0x6af6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af6e5:{NFSU2_TR(0x6af6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af6e9:{NFSU2_TR(0x6af6e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6af6ed:{NFSU2_TR(0x6af6ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af5b4u);}goto L6af5b4;}}
}
B6af6f3:L6af6f3:{c.instructions+=9;NFSU2_TR(0x6af6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af6f9:{NFSU2_TR(0x6af6f9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6af6fe:{NFSU2_TR(0x6af6fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af6ff:{NFSU2_TR(0x6af6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af702:{NFSU2_TR(0x6af702);
u8 U[4];
w4(U+0,u32(0x7bc134ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af707:{NFSU2_TR(0x6af707);
u8 U[4];
w4(U+0,u32(0x11c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af70c:{NFSU2_TR(0x6af70c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6af70f:{NFSU2_TR(0x6af70f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af710:{NFSU2_TR(0x6af710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af715ull));
TAIL_STATIC(0x69e936u,69e);
}
B6af715:L6af715:{c.instructions+=2;NFSU2_TR(0x6af715);
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
B6af718:{NFSU2_TR(0x6af718);
{goto L6af755;}
}
B6af71a:L6af71a:{c.instructions+=8;NFSU2_TR(0x6af71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af720:{NFSU2_TR(0x6af720);
u8 U[4];
w4(U+0,u32(0x11000003ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6af726:{NFSU2_TR(0x6af726);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af72c:{NFSU2_TR(0x6af72c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af72e:{NFSU2_TR(0x6af72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6af72f:{NFSU2_TR(0x6af72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af732:{NFSU2_TR(0x6af732);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af738:{NFSU2_TR(0x6af738);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af73b:L6af73b:{c.instructions+=2;NFSU2_TR(0x6af73b);
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
B6af73d:{NFSU2_TR(0x6af73d);
{goto L6af75a;}
}
B6af73f:L6af73f:{c.instructions+=5;NFSU2_TR(0x6af73f);
u8 U[4];
w4(U+0,u32(0x7bc10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af744:{NFSU2_TR(0x6af744);
u8 U[4];
w4(U+0,u32(0x12d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af749:{NFSU2_TR(0x6af749);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6af74c:{NFSU2_TR(0x6af74c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af74d:{NFSU2_TR(0x6af74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af752ull));
TAIL_STATIC(0x69e936u,69e);
}
B6af752:L6af752:{c.instructions+=1;NFSU2_TR(0x6af752);
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
B6af755:L6af755:{c.instructions+=1;NFSU2_TR(0x6af755);
w4(R+0,u32(0x80004005ull));
}
B6af75a:L6af75a:{c.instructions+=5;NFSU2_TR(0x6af75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af75b:{NFSU2_TR(0x6af75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af75c:{NFSU2_TR(0x6af75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af75d:{NFSU2_TR(0x6af75d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af75e:{NFSU2_TR(0x6af75e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af75f:L6af75f:{c.instructions+=21;NFSU2_TR(0x6af75f);
__builtin_memmove((R+28),(R+28),4);
}
B6af761:{NFSU2_TR(0x6af761);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af762:{NFSU2_TR(0x6af762);
__builtin_memmove((R+20),(R+16),4);
}
B6af764:{NFSU2_TR(0x6af764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B6af76a:{NFSU2_TR(0x6af76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af76e:{NFSU2_TR(0x6af76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af772:{NFSU2_TR(0x6af772);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af773:{NFSU2_TR(0x6af773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af774:{NFSU2_TR(0x6af774);
__builtin_memmove((R+24),(R+4),4);
}
B6af776:{NFSU2_TR(0x6af776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af77c:{NFSU2_TR(0x6af77c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6af77e:{NFSU2_TR(0x6af77e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af780:{NFSU2_TR(0x6af780);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6af781:{NFSU2_TR(0x6af781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af782:{NFSU2_TR(0x6af782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af785:{NFSU2_TR(0x6af785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af78c:{NFSU2_TR(0x6af78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af78f:{NFSU2_TR(0x6af78f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6af791:{NFSU2_TR(0x6af791);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6af797:{NFSU2_TR(0x6af797);
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
B6af799:{NFSU2_TR(0x6af799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af7d5;}}
}
B6af79b:L6af79b:{c.instructions+=14;NFSU2_TR(0x6af79b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af79c:{NFSU2_TR(0x6af79c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af79d:{NFSU2_TR(0x6af79d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6af7a0:{NFSU2_TR(0x6af7a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7a1:{NFSU2_TR(0x6af7a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6af7a7:{NFSU2_TR(0x6af7a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7a8:{NFSU2_TR(0x6af7a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6af7ab:{NFSU2_TR(0x6af7ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7ac:{NFSU2_TR(0x6af7ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6af7af:{NFSU2_TR(0x6af7af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7b0:{NFSU2_TR(0x6af7b0);
u8 U[4];
w4(U+0,u32(0x7bbf90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7b5:{NFSU2_TR(0x6af7b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7b6:{NFSU2_TR(0x6af7b6);
__builtin_memmove((R+4),(R+24),4);
}
B6af7b8:{NFSU2_TR(0x6af7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af7bdull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6af7bd:L6af7bd:{c.instructions+=2;NFSU2_TR(0x6af7bd);
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
B6af7bf:{NFSU2_TR(0x6af7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af7d5;}}
}
B6af7c1:L6af7c1:{c.instructions+=7;NFSU2_TR(0x6af7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af7c7:{NFSU2_TR(0x6af7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af7ca:{NFSU2_TR(0x6af7ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af7d0:{NFSU2_TR(0x6af7d0);
u8 U[40];
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
}
B6af7d1:{NFSU2_TR(0x6af7d1);
u8 U[40];
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
}
B6af7d2:{NFSU2_TR(0x6af7d2);
u8 U[40];
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
}
B6af7d3:{NFSU2_TR(0x6af7d3);
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
B6af7d5:L6af7d5:{c.instructions+=4;NFSU2_TR(0x6af7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af7d6:{NFSU2_TR(0x6af7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af7d7:{NFSU2_TR(0x6af7d7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af7d8:{NFSU2_TR(0x6af7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af7d9:L6af7d9:{c.instructions+=9;NFSU2_TR(0x6af7d9);
__builtin_memmove((R+28),(R+28),4);
}
B6af7db:{NFSU2_TR(0x6af7db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af7dc:{NFSU2_TR(0x6af7dc);
__builtin_memmove((R+20),(R+16),4);
}
B6af7de:{NFSU2_TR(0x6af7de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6af7e1:{NFSU2_TR(0x6af7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af7e7:{NFSU2_TR(0x6af7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af7e9:{NFSU2_TR(0x6af7e9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6af7ee:{NFSU2_TR(0x6af7ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af7f3:{NFSU2_TR(0x6af7f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af901;}}
}
B6af7f9:L6af7f9:{c.instructions+=4;NFSU2_TR(0x6af7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af7ff:{NFSU2_TR(0x6af7ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6af804:{NFSU2_TR(0x6af804);
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
}
B6af809:{NFSU2_TR(0x6af809);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6af901;}}
}
B6af80f:L6af80f:{c.instructions+=17;NFSU2_TR(0x6af80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af815:{NFSU2_TR(0x6af815);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af818:{NFSU2_TR(0x6af818);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af819:{NFSU2_TR(0x6af819);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af81a:{NFSU2_TR(0x6af81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6af81c:{NFSU2_TR(0x6af81c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af81d:{NFSU2_TR(0x6af81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af820:{NFSU2_TR(0x6af820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6af822:{NFSU2_TR(0x6af822);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6af825:{NFSU2_TR(0x6af825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af828:{NFSU2_TR(0x6af828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af82a:{NFSU2_TR(0x6af82a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6af82d:{NFSU2_TR(0x6af82d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6af833:{NFSU2_TR(0x6af833);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6af835:{NFSU2_TR(0x6af835);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af838:{NFSU2_TR(0x6af838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af83b:{NFSU2_TR(0x6af83b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af8fe;}}
}
B6af841:L6af841:{c.instructions+=2;NFSU2_TR(0x6af841);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6af845:{NFSU2_TR(0x6af845);
if(r1(R+518)){{goto L6af8fe;}}
}
B6af84b:L6af84b:{c.instructions+=2;NFSU2_TR(0x6af84b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6af84f:{NFSU2_TR(0x6af84f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af8fe;}}
}
B6af855:L6af855:{c.instructions+=3;NFSU2_TR(0x6af855);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af858:{NFSU2_TR(0x6af858);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af85e:{NFSU2_TR(0x6af85e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af8fe;}}
}
B6af864:L6af864:{c.instructions+=3;NFSU2_TR(0x6af864);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af866:{NFSU2_TR(0x6af866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af869:{NFSU2_TR(0x6af869);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af8f6;}}
}
B6af86f:L6af86f:{c.instructions+=11;NFSU2_TR(0x6af86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af872:{NFSU2_TR(0x6af872);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af878:{NFSU2_TR(0x6af878);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af87b:{NFSU2_TR(0x6af87b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6af87e:{NFSU2_TR(0x6af87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af881:{NFSU2_TR(0x6af881);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af884:{NFSU2_TR(0x6af884);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af887:{NFSU2_TR(0x6af887);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af88a:{NFSU2_TR(0x6af88a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6af88e:{NFSU2_TR(0x6af88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af894:{NFSU2_TR(0x6af894);
{goto L6af8e5;}
}
B6af896:L6af896:{c.instructions+=5;NFSU2_TR(0x6af896);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af899:{NFSU2_TR(0x6af899);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af89c:{NFSU2_TR(0x6af89c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af89f:{NFSU2_TR(0x6af89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af8a2:{NFSU2_TR(0x6af8a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af8e4;}}
}
B6af8a4:L6af8a4:{c.instructions+=10;NFSU2_TR(0x6af8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af8a7:{NFSU2_TR(0x6af8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af8aa:{NFSU2_TR(0x6af8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af8b0:{NFSU2_TR(0x6af8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6af8b3:{NFSU2_TR(0x6af8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6af8b6:{NFSU2_TR(0x6af8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af8b9:{NFSU2_TR(0x6af8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af8bc:{NFSU2_TR(0x6af8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6af8be:{NFSU2_TR(0x6af8be);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6af8c1:{NFSU2_TR(0x6af8c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af8d4;}}
}
B6af8c3:L6af8c3:{c.instructions+=5;NFSU2_TR(0x6af8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af8c9:{NFSU2_TR(0x6af8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af8cc:{NFSU2_TR(0x6af8cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6af8cf:{NFSU2_TR(0x6af8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af8d2:{NFSU2_TR(0x6af8d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6af8d4:L6af8d4:{c.instructions+=4;NFSU2_TR(0x6af8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af8d7:{NFSU2_TR(0x6af8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af8da:{NFSU2_TR(0x6af8da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6af8dd:{NFSU2_TR(0x6af8dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af8a4u);}goto L6af8a4;}}
}
B6af8df:L6af8df:{c.instructions+=2;NFSU2_TR(0x6af8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6af8e2:{NFSU2_TR(0x6af8e2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6af8e4:L6af8e4:{c.instructions+=1;NFSU2_TR(0x6af8e4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6af8e5:L6af8e5:{c.instructions+=2;NFSU2_TR(0x6af8e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6af8e8:{NFSU2_TR(0x6af8e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af896u);}goto L6af896;}}
}
B6af8ea:L6af8ea:{c.instructions+=3;NFSU2_TR(0x6af8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af8ed:{NFSU2_TR(0x6af8ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6af8f0:{NFSU2_TR(0x6af8f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af86fu);}goto L6af86f;}}
}
B6af8f6:L6af8f6:{c.instructions+=2;NFSU2_TR(0x6af8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af8fc:{NFSU2_TR(0x6af8fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6af8fe:L6af8fe:{c.instructions+=3;NFSU2_TR(0x6af8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6af8ff:{NFSU2_TR(0x6af8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6af900:{NFSU2_TR(0x6af900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6af901:L6af901:{c.instructions+=3;NFSU2_TR(0x6af901);
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
B6af903:{NFSU2_TR(0x6af903);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6af904:{NFSU2_TR(0x6af904);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6af905:L6af905:{c.instructions+=12;NFSU2_TR(0x6af905);
__builtin_memmove((R+28),(R+28),4);
}
B6af907:{NFSU2_TR(0x6af907);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af908:{NFSU2_TR(0x6af908);
__builtin_memmove((R+20),(R+16),4);
}
B6af90a:{NFSU2_TR(0x6af90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6af90d:{NFSU2_TR(0x6af90d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af90e:{NFSU2_TR(0x6af90e);
__builtin_memmove((R+12),(R+4),4);
}
B6af910:{NFSU2_TR(0x6af910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af911:{NFSU2_TR(0x6af911);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af917:{NFSU2_TR(0x6af917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af919:{NFSU2_TR(0x6af919);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6af91e:{NFSU2_TR(0x6af91e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af923:{NFSU2_TR(0x6af923);
if(r1(R+518)){{goto L6af92c;}}
}
B6af925:L6af925:{c.instructions+=2;NFSU2_TR(0x6af925);
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
B6af927:{NFSU2_TR(0x6af927);
{goto L6afafb;}
}
B6af92c:L6af92c:{c.instructions+=16;NFSU2_TR(0x6af92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af932:{NFSU2_TR(0x6af932);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af935:{NFSU2_TR(0x6af935);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6af938:{NFSU2_TR(0x6af938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af93c:{NFSU2_TR(0x6af93c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af93d:{NFSU2_TR(0x6af93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6af93f:{NFSU2_TR(0x6af93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af942:{NFSU2_TR(0x6af942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af944:{NFSU2_TR(0x6af944);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af947:{NFSU2_TR(0x6af947);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af94a:{NFSU2_TR(0x6af94a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af94d:{NFSU2_TR(0x6af94d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6af953:{NFSU2_TR(0x6af953);
w4(R+8,u32(0x200ull));
}
B6af958:{NFSU2_TR(0x6af958);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af95b:{NFSU2_TR(0x6af95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af95e:{NFSU2_TR(0x6af95e);
if(r1(R+518)){{goto L6af967;}}
}
B6af960:L6af960:{c.instructions+=1;NFSU2_TR(0x6af960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af967:L6af967:{c.instructions+=2;NFSU2_TR(0x6af967);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6af96b:{NFSU2_TR(0x6af96b);
if(r1(R+518)){{goto L6af9ae;}}
}
B6af96d:L6af96d:{c.instructions+=2;NFSU2_TR(0x6af96d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af96f:{NFSU2_TR(0x6af96f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6af9ae;}}
}
B6af971:L6af971:{c.instructions+=3;NFSU2_TR(0x6af971);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af974:{NFSU2_TR(0x6af974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af977:{NFSU2_TR(0x6af977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af97a:L6af97a:{c.instructions+=5;NFSU2_TR(0x6af97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6af97d:{NFSU2_TR(0x6af97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6af97f:{NFSU2_TR(0x6af97f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af982:{NFSU2_TR(0x6af982);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af985:{NFSU2_TR(0x6af985);
if(r1(R+518)){{goto L6af98e;}}
}
B6af987:L6af987:{c.instructions+=1;NFSU2_TR(0x6af987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af98e:L6af98e:{c.instructions+=3;NFSU2_TR(0x6af98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6af991:{NFSU2_TR(0x6af991);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af994:{NFSU2_TR(0x6af994);
if(r1(R+518)){{goto L6af999;}}
}
B6af996:L6af996:{c.instructions+=1;NFSU2_TR(0x6af996);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6af999:L6af999:{c.instructions+=2;NFSU2_TR(0x6af999);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6af99c:{NFSU2_TR(0x6af99c);
if(r1(R+518)){{goto L6af9a5;}}
}
B6af99e:L6af99e:{c.instructions+=1;NFSU2_TR(0x6af99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6af9a5:L6af9a5:{c.instructions+=3;NFSU2_TR(0x6af9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af9a9:{NFSU2_TR(0x6af9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6af9ac:{NFSU2_TR(0x6af9ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6af97au);}goto L6af97a;}}
}
B6af9ae:L6af9ae:{c.instructions+=2;NFSU2_TR(0x6af9ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6af9b2:{NFSU2_TR(0x6af9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af9bb;}}
}
B6af9b4:L6af9b4:{c.instructions+=2;NFSU2_TR(0x6af9b4);
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
B6af9b6:{NFSU2_TR(0x6af9b6);
{goto L6afafa;}
}
B6af9bb:L6af9bb:{c.instructions+=2;NFSU2_TR(0x6af9bb);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af9bd:{NFSU2_TR(0x6af9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af9c2ull));
TAIL_STATIC(0x699317u,699);
}
B6af9c2:L6af9c2:{c.instructions+=2;NFSU2_TR(0x6af9c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6af9c4:{NFSU2_TR(0x6af9c4);
if(r1(R+518)){{goto L6af9d2;}}
}
B6af9c6:L6af9c6:{c.instructions+=2;NFSU2_TR(0x6af9c6);
__builtin_memmove((R+4),(R+0),4);
}
B6af9c8:{NFSU2_TR(0x6af9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6af9cdull));
TAIL_STATIC(0x698e7du,698);
}
B6af9cd:L6af9cd:{c.instructions+=2;NFSU2_TR(0x6af9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6af9d0:{NFSU2_TR(0x6af9d0);
{goto L6af9d6;}
}
B6af9d2:L6af9d2:{c.instructions+=1;NFSU2_TR(0x6af9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6af9d6:L6af9d6:{c.instructions+=3;NFSU2_TR(0x6af9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6af9d9:{NFSU2_TR(0x6af9d9);
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
B6af9db:{NFSU2_TR(0x6af9db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6af9e7;}}
}
B6af9dd:L6af9dd:{c.instructions+=2;NFSU2_TR(0x6af9dd);
w4(R+28,u32(0x8007000eull));
}
B6af9e2:{NFSU2_TR(0x6af9e2);
{goto L6afaf8;}
}
B6af9e7:L6af9e7:{c.instructions+=9;NFSU2_TR(0x6af9e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af9e9:{NFSU2_TR(0x6af9e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af9ea:{NFSU2_TR(0x6af9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6af9ed:{NFSU2_TR(0x6af9ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af9ee:{NFSU2_TR(0x6af9ee);
__builtin_memmove((R+0),(R+24),4);
}
B6af9f0:{NFSU2_TR(0x6af9f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6af9f5:{NFSU2_TR(0x6af9f5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6af9fa:{NFSU2_TR(0x6af9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6af9fb:{NFSU2_TR(0x6af9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afa00ull));
TAIL_STATIC(0x699362u,699);
}
B6afa00:L6afa00:{c.instructions+=3;NFSU2_TR(0x6afa00);
__builtin_memmove((R+28),(R+0),4);
}
B6afa02:{NFSU2_TR(0x6afa02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6afa04:{NFSU2_TR(0x6afa04);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6afaea;}}
}
B6afa0a:L6afa0a:{c.instructions+=3;NFSU2_TR(0x6afa0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6afa10:{NFSU2_TR(0x6afa10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afa13:{NFSU2_TR(0x6afa13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afa18ull));
TAIL_STATIC(0x698eb3u,698);
}
B6afa18:L6afa18:{c.instructions+=3;NFSU2_TR(0x6afa18);
__builtin_memmove((R+28),(R+0),4);
}
B6afa1a:{NFSU2_TR(0x6afa1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6afa1c:{NFSU2_TR(0x6afa1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6afaea;}}
}
B6afa22:L6afa22:{c.instructions+=6;NFSU2_TR(0x6afa22);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa24:{NFSU2_TR(0x6afa24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa26:{NFSU2_TR(0x6afa26);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa2b:{NFSU2_TR(0x6afa2b);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa30:{NFSU2_TR(0x6afa30);
__builtin_memmove((R+4),(R+12),4);
}
B6afa32:{NFSU2_TR(0x6afa32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afa37ull));
TAIL_STATIC(0x699be0u,699);
}
B6afa37:L6afa37:{c.instructions+=2;NFSU2_TR(0x6afa37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afa3a:{NFSU2_TR(0x6afa3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afa46;}}
}
B6afa3c:L6afa3c:{c.instructions+=2;NFSU2_TR(0x6afa3c);
w4(R+28,u32(0x8007000eull));
}
B6afa41:{NFSU2_TR(0x6afa41);
{goto L6afaea;}
}
B6afa46:L6afa46:{c.instructions+=9;NFSU2_TR(0x6afa46);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6afa4c:{NFSU2_TR(0x6afa4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa4d:{NFSU2_TR(0x6afa4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa4e:{NFSU2_TR(0x6afa4e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6afa51:{NFSU2_TR(0x6afa51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa53:{NFSU2_TR(0x6afa53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa55:{NFSU2_TR(0x6afa55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afa56:{NFSU2_TR(0x6afa56);
__builtin_memmove((R+4),(R+12),4);
}
B6afa58:{NFSU2_TR(0x6afa58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afa5dull));
TAIL_STATIC(0x699c39u,699);
}
B6afa5d:L6afa5d:{c.instructions+=3;NFSU2_TR(0x6afa5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afa60:{NFSU2_TR(0x6afa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afa63:{NFSU2_TR(0x6afa63);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afa3cu);}goto L6afa3c;}}
}
B6afa65:L6afa65:{c.instructions+=9;NFSU2_TR(0x6afa65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afa6b:{NFSU2_TR(0x6afa6b);
__builtin_memmove((R+0),(R+24),4);
}
B6afa6d:{NFSU2_TR(0x6afa6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afa70:{NFSU2_TR(0x6afa70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afa73:{NFSU2_TR(0x6afa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afa76:{NFSU2_TR(0x6afa76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6afa79:{NFSU2_TR(0x6afa79);
__builtin_memmove((R+4),(R+0),4);
}
B6afa7b:{NFSU2_TR(0x6afa7b);
__builtin_memmove((R+8),(R+4),4);
}
B6afa7d:{NFSU2_TR(0x6afa7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6afa80:L6afa80:{c.instructions+=1;NFSU2_TR(0x6afa80);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6afa82;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afa80u);}goto L6afa80;}
}
B6afa82:L6afa82:{c.instructions+=3;NFSU2_TR(0x6afa82);
__builtin_memmove((R+4),(R+8),4);
}
B6afa84:{NFSU2_TR(0x6afa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afa87:{NFSU2_TR(0x6afa87);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6afa8a:L6afa8a:{c.instructions+=1;NFSU2_TR(0x6afa8a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6afa8c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afa8au);}goto L6afa8a;}
}
B6afa8c:L6afa8c:{c.instructions+=7;NFSU2_TR(0x6afa8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afa8f:{NFSU2_TR(0x6afa8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afa92:{NFSU2_TR(0x6afa92);
__builtin_memmove((R+4),(R+0),4);
}
B6afa94:{NFSU2_TR(0x6afa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afa9a:{NFSU2_TR(0x6afa9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afa9d:{NFSU2_TR(0x6afa9d);
__builtin_memmove((R+0),(R+4),4);
}
B6afa9f:{NFSU2_TR(0x6afa9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6afaa2:L6afaa2:{c.instructions+=1;NFSU2_TR(0x6afaa2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6afaa4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afaa2u);}goto L6afaa2;}
}
B6afaa4:L6afaa4:{c.instructions+=2;NFSU2_TR(0x6afaa4);
__builtin_memmove((R+4),(R+0),4);
}
B6afaa6:{NFSU2_TR(0x6afaa6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6afaa9:L6afaa9:{c.instructions+=1;NFSU2_TR(0x6afaa9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6afaab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afaa9u);}goto L6afaa9;}
}
B6afaab:L6afaab:{c.instructions+=3;NFSU2_TR(0x6afaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afaae:{NFSU2_TR(0x6afaae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afab0:{NFSU2_TR(0x6afab0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afac1;}}
}
B6afab2:L6afab2:{c.instructions+=6;NFSU2_TR(0x6afab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afab5:{NFSU2_TR(0x6afab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afab8:{NFSU2_TR(0x6afab8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afabb:{NFSU2_TR(0x6afabb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6afabe:{NFSU2_TR(0x6afabe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6afabf:{NFSU2_TR(0x6afabf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afab2u);}goto L6afab2;}}
}
B6afac1:L6afac1:{c.instructions+=7;NFSU2_TR(0x6afac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afac4:{NFSU2_TR(0x6afac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6afaca:{NFSU2_TR(0x6afaca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6afacc:{NFSU2_TR(0x6afacc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6afacf:{NFSU2_TR(0x6afacf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6afad1:{NFSU2_TR(0x6afad1);
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
B6afad3:{NFSU2_TR(0x6afad3);
if(r1(R+518)){{goto L6afadf;}}
}
B6afad5:L6afad5:{c.instructions+=2;NFSU2_TR(0x6afad5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afad7:{NFSU2_TR(0x6afad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afadcull));
TAIL_STATIC(0x6739efu,673);
}
B6afadc:L6afadc:{c.instructions+=1;NFSU2_TR(0x6afadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afadf:L6afadf:{c.instructions+=4;NFSU2_TR(0x6afadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6afae1:{NFSU2_TR(0x6afae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afae4:{NFSU2_TR(0x6afae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afae7:{NFSU2_TR(0x6afae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afaea:L6afaea:{c.instructions+=3;NFSU2_TR(0x6afaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afaed:{NFSU2_TR(0x6afaed);
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
B6afaef:{NFSU2_TR(0x6afaef);
if(r1(R+518)){{goto L6afaf8;}}
}
B6afaf1:L6afaf1:{c.instructions+=2;NFSU2_TR(0x6afaf1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afaf3:{NFSU2_TR(0x6afaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afaf8ull));
TAIL_STATIC(0x6739efu,673);
}
B6afaf8:L6afaf8:{c.instructions+=1;NFSU2_TR(0x6afaf8);
__builtin_memmove((R+0),(R+28),4);
}
B6afafa:L6afafa:{c.instructions+=1;NFSU2_TR(0x6afafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6afafb:L6afafb:{c.instructions+=4;NFSU2_TR(0x6afafb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6afafc:{NFSU2_TR(0x6afafc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6afafd:{NFSU2_TR(0x6afafd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6afafe:{NFSU2_TR(0x6afafe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6afaff:L6afaff:{c.instructions+=13;NFSU2_TR(0x6afaff);
__builtin_memmove((R+28),(R+28),4);
}
B6afb01:{NFSU2_TR(0x6afb01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afb02:{NFSU2_TR(0x6afb02);
__builtin_memmove((R+20),(R+16),4);
}
B6afb04:{NFSU2_TR(0x6afb04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6afb07:{NFSU2_TR(0x6afb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afb0d:{NFSU2_TR(0x6afb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afb13:{NFSU2_TR(0x6afb13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afb14:{NFSU2_TR(0x6afb14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afb15:{NFSU2_TR(0x6afb15);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6afb19:{NFSU2_TR(0x6afb19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afb1b:{NFSU2_TR(0x6afb1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afb1c:{NFSU2_TR(0x6afb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afb1f:{NFSU2_TR(0x6afb1f);
if(r1(R+518)){{goto L6afd3a;}}
}
B6afb25:L6afb25:{c.instructions+=2;NFSU2_TR(0x6afb25);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10000004ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6afb2b:{NFSU2_TR(0x6afb2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afd3a;}}
}
B6afb31:L6afb31:{c.instructions+=4;NFSU2_TR(0x6afb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afb37:{NFSU2_TR(0x6afb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afb3a:{NFSU2_TR(0x6afb3a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6afb3c:{NFSU2_TR(0x6afb3c);
{goto L6afb41;}
}
B6afb3e:L6afb3e:{c.instructions+=1;NFSU2_TR(0x6afb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afb41:L6afb41:{c.instructions+=5;NFSU2_TR(0x6afb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afb44:{NFSU2_TR(0x6afb44);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6afb47:{NFSU2_TR(0x6afb47);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6afb4a:{NFSU2_TR(0x6afb4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afb4d:{NFSU2_TR(0x6afb4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afd3a;}}
}
B6afb53:L6afb53:{c.instructions+=2;NFSU2_TR(0x6afb53);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afb57:{NFSU2_TR(0x6afb57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afd3a;}}
}
B6afb5d:L6afb5d:{c.instructions+=6;NFSU2_TR(0x6afb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afb60:{NFSU2_TR(0x6afb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afb63:{NFSU2_TR(0x6afb63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6afb66:{NFSU2_TR(0x6afb66);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6afb69:{NFSU2_TR(0x6afb69);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6afb6d:{NFSU2_TR(0x6afb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afd3a;}}
}
B6afb73:L6afb73:{c.instructions+=3;NFSU2_TR(0x6afb73);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6afb76:{NFSU2_TR(0x6afb76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6afb79:{NFSU2_TR(0x6afb79);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afb3eu);}goto L6afb3e;}}
}
B6afb7b:L6afb7b:{c.instructions+=10;NFSU2_TR(0x6afb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afb81:{NFSU2_TR(0x6afb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afb85:{NFSU2_TR(0x6afb85);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6afb8a:{NFSU2_TR(0x6afb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afb8d:{NFSU2_TR(0x6afb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afb90:{NFSU2_TR(0x6afb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afb93:{NFSU2_TR(0x6afb93);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6afb94:{NFSU2_TR(0x6afb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6afb9b:{NFSU2_TR(0x6afb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afb9e:{NFSU2_TR(0x6afb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afba1:L6afba1:{c.instructions+=4;NFSU2_TR(0x6afba1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6afba3:{NFSU2_TR(0x6afba3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6afba5:{NFSU2_TR(0x6afba5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afba8:{NFSU2_TR(0x6afba8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afbeb;}}
}
B6afbaa:L6afbaa:{c.instructions+=2;NFSU2_TR(0x6afbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afbb0:{NFSU2_TR(0x6afbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afbb3:L6afbb3:{c.instructions+=4;NFSU2_TR(0x6afbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afbb6:{NFSU2_TR(0x6afbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6afbb8:{NFSU2_TR(0x6afbb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afbba:{NFSU2_TR(0x6afbba);
if(r1(R+518)){{goto L6afbe1;}}
}
B6afbbc:L6afbbc:{c.instructions+=2;NFSU2_TR(0x6afbbc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6afbbf:{NFSU2_TR(0x6afbbf);
if(r1(R+518)){{goto L6afbe1;}}
}
B6afbc1:L6afbc1:{c.instructions+=3;NFSU2_TR(0x6afbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afbc4:{NFSU2_TR(0x6afbc4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afbc6:{NFSU2_TR(0x6afbc6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afbdd;}}
}
B6afbc8:L6afbc8:{c.instructions+=3;NFSU2_TR(0x6afbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afbcb:{NFSU2_TR(0x6afbcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6afbcd:{NFSU2_TR(0x6afbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afbd0:L6afbd0:{c.instructions+=2;NFSU2_TR(0x6afbd0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6afbd2:{NFSU2_TR(0x6afbd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afbd7;}}
}
B6afbd4:L6afbd4:{c.instructions+=2;NFSU2_TR(0x6afbd4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6afbd6:{NFSU2_TR(0x6afbd6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6afbd7:L6afbd7:{c.instructions+=3;NFSU2_TR(0x6afbd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6afbda:{NFSU2_TR(0x6afbda);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6afbdb:{NFSU2_TR(0x6afbdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afbd0u);}goto L6afbd0;}}
}
B6afbdd:L6afbdd:{c.instructions+=2;NFSU2_TR(0x6afbdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afbdf:{NFSU2_TR(0x6afbdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afbeb;}}
}
B6afbe1:L6afbe1:{c.instructions+=4;NFSU2_TR(0x6afbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afbe5:{NFSU2_TR(0x6afbe5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6afbe6:{NFSU2_TR(0x6afbe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6afbe9:{NFSU2_TR(0x6afbe9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afbb3u);}goto L6afbb3;}}
}
B6afbeb:L6afbeb:{c.instructions+=2;NFSU2_TR(0x6afbeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afbf2:{NFSU2_TR(0x6afbf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afbff;}}
}
B6afbf4:L6afbf4:{c.instructions+=2;NFSU2_TR(0x6afbf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6afbf7:{NFSU2_TR(0x6afbf7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6afc08;}}
}
B6afbf9:L6afbf9:{c.instructions+=2;NFSU2_TR(0x6afbf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afbfb:{NFSU2_TR(0x6afbfb);
if(r1(R+518)){{goto L6afc08;}}
}
B6afbfd:L6afbfd:{c.instructions+=1;NFSU2_TR(0x6afbfd);
{goto L6afc04;}
}
B6afbff:L6afbff:{c.instructions+=2;NFSU2_TR(0x6afbff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6afc02:{NFSU2_TR(0x6afc02);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6afc08;}}
}
B6afc04:L6afc04:{c.instructions+=1;NFSU2_TR(0x6afc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afc08:L6afc08:{c.instructions+=2;NFSU2_TR(0x6afc08);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afc0a:{NFSU2_TR(0x6afc0a);
if(r1(R+518)){{goto L6afd3a;}}
}
B6afc10:L6afc10:{c.instructions+=3;NFSU2_TR(0x6afc10);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6afc11:{NFSU2_TR(0x6afc11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6afc14:{NFSU2_TR(0x6afc14);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6afcbd;}}
}
B6afc1a:L6afc1a:{c.instructions+=6;NFSU2_TR(0x6afc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afc20:{NFSU2_TR(0x6afc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6afc23:{NFSU2_TR(0x6afc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afc26:{NFSU2_TR(0x6afc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afc29:{NFSU2_TR(0x6afc29);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6afc2b:{NFSU2_TR(0x6afc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afc2e:L6afc2e:{c.instructions+=4;NFSU2_TR(0x6afc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afc31:{NFSU2_TR(0x6afc31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6afc33:{NFSU2_TR(0x6afc33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afc35:{NFSU2_TR(0x6afc35);
if(r1(R+518)){{goto L6afcb0;}}
}
B6afc37:L6afc37:{c.instructions+=2;NFSU2_TR(0x6afc37);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6afc3a:{NFSU2_TR(0x6afc3a);
if(r1(R+518)){{goto L6afcb0;}}
}
B6afc3c:L6afc3c:{c.instructions+=3;NFSU2_TR(0x6afc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afc3f:{NFSU2_TR(0x6afc3f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afc41:{NFSU2_TR(0x6afc41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afc76;}}
}
B6afc43:L6afc43:{c.instructions+=3;NFSU2_TR(0x6afc43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afc46:{NFSU2_TR(0x6afc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afc49:{NFSU2_TR(0x6afc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afc4c:L6afc4c:{c.instructions+=5;NFSU2_TR(0x6afc4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6afc4e:{NFSU2_TR(0x6afc4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6afc51:{NFSU2_TR(0x6afc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afc57:{NFSU2_TR(0x6afc57);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afc5a:{NFSU2_TR(0x6afc5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afc6e;}}
}
B6afc5c:L6afc5c:{c.instructions+=3;NFSU2_TR(0x6afc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afc5f:{NFSU2_TR(0x6afc5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afc62:{NFSU2_TR(0x6afc62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afc6e;}}
}
B6afc64:L6afc64:{c.instructions+=2;NFSU2_TR(0x6afc64);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afc68:{NFSU2_TR(0x6afc68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afc6e;}}
}
B6afc6a:L6afc6a:{c.instructions+=1;NFSU2_TR(0x6afc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afc6e:L6afc6e:{c.instructions+=3;NFSU2_TR(0x6afc6e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6afc71:{NFSU2_TR(0x6afc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afc74:{NFSU2_TR(0x6afc74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afc4cu);}goto L6afc4c;}}
}
B6afc76:L6afc76:{c.instructions+=3;NFSU2_TR(0x6afc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afc79:{NFSU2_TR(0x6afc79);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afc7b:{NFSU2_TR(0x6afc7b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afcb0;}}
}
B6afc7d:L6afc7d:{c.instructions+=4;NFSU2_TR(0x6afc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6afc80:{NFSU2_TR(0x6afc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6afc86:{NFSU2_TR(0x6afc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afc89:{NFSU2_TR(0x6afc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afc8c:L6afc8c:{c.instructions+=4;NFSU2_TR(0x6afc8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6afc8e:{NFSU2_TR(0x6afc8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6afc91:{NFSU2_TR(0x6afc91);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afc94:{NFSU2_TR(0x6afc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afca8;}}
}
B6afc96:L6afc96:{c.instructions+=3;NFSU2_TR(0x6afc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afc99:{NFSU2_TR(0x6afc99);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afc9c:{NFSU2_TR(0x6afc9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afca8;}}
}
B6afc9e:L6afc9e:{c.instructions+=2;NFSU2_TR(0x6afc9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afca2:{NFSU2_TR(0x6afca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afca8;}}
}
B6afca4:L6afca4:{c.instructions+=1;NFSU2_TR(0x6afca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afca8:L6afca8:{c.instructions+=3;NFSU2_TR(0x6afca8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6afcab:{NFSU2_TR(0x6afcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afcae:{NFSU2_TR(0x6afcae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afc8cu);}goto L6afc8c;}}
}
B6afcb0:L6afcb0:{c.instructions+=3;NFSU2_TR(0x6afcb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afcb4:{NFSU2_TR(0x6afcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afcb7:{NFSU2_TR(0x6afcb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afc2eu);}goto L6afc2e;}}
}
B6afcbd:L6afcbd:{c.instructions+=4;NFSU2_TR(0x6afcbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afcc0:{NFSU2_TR(0x6afcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afcc4:{NFSU2_TR(0x6afcc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6afcc8:{NFSU2_TR(0x6afcc8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afba1u);}goto L6afba1;}}
}
B6afcce:L6afcce:{c.instructions+=3;NFSU2_TR(0x6afcce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6afcd0:{NFSU2_TR(0x6afcd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afcd3:{NFSU2_TR(0x6afcd3);
if(r1(R+518)){{goto L6afd3a;}}
}
B6afcd5:L6afcd5:{c.instructions+=4;NFSU2_TR(0x6afcd5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6afcd7:{NFSU2_TR(0x6afcd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afcda:{NFSU2_TR(0x6afcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afcdd:{NFSU2_TR(0x6afcdd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afd2d;}}
}
B6afcdf:L6afcdf:{c.instructions+=5;NFSU2_TR(0x6afcdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afce5:{NFSU2_TR(0x6afce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afce8:{NFSU2_TR(0x6afce8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6afceb:{NFSU2_TR(0x6afceb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6afced:{NFSU2_TR(0x6afced);
if(r1(R+518)){{goto L6afd1b;}}
}
B6afcef:L6afcef:{c.instructions+=2;NFSU2_TR(0x6afcef);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6afcf1:{NFSU2_TR(0x6afcf1);
if(r1(R+518)){{goto L6afd1b;}}
}
B6afcf3:L6afcf3:{c.instructions+=2;NFSU2_TR(0x6afcf3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afcf6:{NFSU2_TR(0x6afcf6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afd1b;}}
}
B6afcf8:L6afcf8:{c.instructions+=6;NFSU2_TR(0x6afcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afcfb:{NFSU2_TR(0x6afcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afcfe:{NFSU2_TR(0x6afcfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6afd01:{NFSU2_TR(0x6afd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afd04:{NFSU2_TR(0x6afd04);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6afd07:{NFSU2_TR(0x6afd07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6afd13;}}
}
B6afd09:L6afd09:{c.instructions+=3;NFSU2_TR(0x6afd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afd0c:{NFSU2_TR(0x6afd0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6afd0f:{NFSU2_TR(0x6afd0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afd13:L6afd13:{c.instructions+=3;NFSU2_TR(0x6afd13);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6afd14:{NFSU2_TR(0x6afd14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6afd17:{NFSU2_TR(0x6afd17);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afcf8u);}goto L6afcf8;}}
}
B6afd19:L6afd19:{c.instructions+=1;NFSU2_TR(0x6afd19);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6afd1b:L6afd1b:{c.instructions+=6;NFSU2_TR(0x6afd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afd1e:{NFSU2_TR(0x6afd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afd24:{NFSU2_TR(0x6afd24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6afd25:{NFSU2_TR(0x6afd25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6afd28:{NFSU2_TR(0x6afd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afd2b:{NFSU2_TR(0x6afd2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afcdfu);}goto L6afcdf;}}
}
B6afd2d:L6afd2d:{c.instructions+=3;NFSU2_TR(0x6afd2d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6afd30:{NFSU2_TR(0x6afd30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6afd33:{NFSU2_TR(0x6afd33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afcd5u);}goto L6afcd5;}}
}
B6afd35:L6afd35:{c.instructions+=2;NFSU2_TR(0x6afd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afd38:{NFSU2_TR(0x6afd38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6afd3a:L6afd3a:{c.instructions+=6;NFSU2_TR(0x6afd3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6afd3b:{NFSU2_TR(0x6afd3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6afd3c:{NFSU2_TR(0x6afd3c);
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
B6afd3e:{NFSU2_TR(0x6afd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6afd3f:{NFSU2_TR(0x6afd3f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6afd40:{NFSU2_TR(0x6afd40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6afd41:L6afd41:{c.instructions+=11;NFSU2_TR(0x6afd41);
__builtin_memmove((R+28),(R+28),4);
}
B6afd43:{NFSU2_TR(0x6afd43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afd44:{NFSU2_TR(0x6afd44);
__builtin_memmove((R+20),(R+16),4);
}
B6afd46:{NFSU2_TR(0x6afd46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6afd49:{NFSU2_TR(0x6afd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afd4d:{NFSU2_TR(0x6afd4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afd4e:{NFSU2_TR(0x6afd4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afd4f:{NFSU2_TR(0x6afd4f);
__builtin_memmove((R+24),(R+4),4);
}
B6afd51:{NFSU2_TR(0x6afd51);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afd55:{NFSU2_TR(0x6afd55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afd56:{NFSU2_TR(0x6afd56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afed0;}}
}
B6afd5c:L6afd5c:{c.instructions+=5;NFSU2_TR(0x6afd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afd62:{NFSU2_TR(0x6afd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afd65:{NFSU2_TR(0x6afd65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6afd68:{NFSU2_TR(0x6afd68);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afd6a:{NFSU2_TR(0x6afd6a);
if(r1(R+518)){{goto L6afec1;}}
}
B6afd70:L6afd70:{c.instructions+=5;NFSU2_TR(0x6afd70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6afd72:{NFSU2_TR(0x6afd72);
__builtin_memmove((R+0),(R+4),4);
}
B6afd74:{NFSU2_TR(0x6afd74);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6afd79:{NFSU2_TR(0x6afd79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afd7e:{NFSU2_TR(0x6afd7e);
if(r1(R+518)){{goto L6afec1;}}
}
B6afd84:L6afd84:{c.instructions+=2;NFSU2_TR(0x6afd84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afd86:{NFSU2_TR(0x6afd86);
if(r1(R+518)){{goto L6afec1;}}
}
B6afd8c:L6afd8c:{c.instructions+=18;NFSU2_TR(0x6afd8c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
}
B6afd91:{NFSU2_TR(0x6afd91);
w4(R+12,u32(0xfffffull));
}
B6afd96:{NFSU2_TR(0x6afd96);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B6afd98:{NFSU2_TR(0x6afd98);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6afd9a:{NFSU2_TR(0x6afd9a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6afd9c:{NFSU2_TR(0x6afd9c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6afd9e:{NFSU2_TR(0x6afd9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6afda1:{NFSU2_TR(0x6afda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afda4:{NFSU2_TR(0x6afda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afda7:{NFSU2_TR(0x6afda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afdaa:{NFSU2_TR(0x6afdaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6afdad:{NFSU2_TR(0x6afdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afdb0:{NFSU2_TR(0x6afdb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6afdb3:{NFSU2_TR(0x6afdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afdb6:{NFSU2_TR(0x6afdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afdb9:{NFSU2_TR(0x6afdb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6afdbc:{NFSU2_TR(0x6afdbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6afdc0:{NFSU2_TR(0x6afdc0);
if(r1(R+518)){{goto L6afec1;}}
}
B6afdc6:L6afdc6:{c.instructions+=2;NFSU2_TR(0x6afdc6);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afdc8:{NFSU2_TR(0x6afdc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afdcdull));
TAIL_STATIC(0x699317u,699);
}
B6afdcd:L6afdcd:{c.instructions+=2;NFSU2_TR(0x6afdcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6afdcf:{NFSU2_TR(0x6afdcf);
if(r1(R+518)){{goto L6afddc;}}
}
B6afdd1:L6afdd1:{c.instructions+=2;NFSU2_TR(0x6afdd1);
__builtin_memmove((R+4),(R+0),4);
}
B6afdd3:{NFSU2_TR(0x6afdd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afdd8ull));
TAIL_STATIC(0x698e7du,698);
}
B6afdd8:L6afdd8:{c.instructions+=2;NFSU2_TR(0x6afdd8);
__builtin_memmove((R+28),(R+0),4);
}
B6afdda:{NFSU2_TR(0x6afdda);
{goto L6afdde;}
}
B6afddc:L6afddc:{c.instructions+=1;NFSU2_TR(0x6afddc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6afdde:L6afdde:{c.instructions+=2;NFSU2_TR(0x6afdde);
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
B6afde0:{NFSU2_TR(0x6afde0);
if(r1(R+518)){{goto L6afed7;}}
}
B6afde6:L6afde6:{c.instructions+=9;NFSU2_TR(0x6afde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afde9:{NFSU2_TR(0x6afde9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afdeb:{NFSU2_TR(0x6afdeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6afdee:{NFSU2_TR(0x6afdee);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6afdf0:{NFSU2_TR(0x6afdf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6afdf3:{NFSU2_TR(0x6afdf3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6afdf8:{NFSU2_TR(0x6afdf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afdf9:{NFSU2_TR(0x6afdf9);
__builtin_memmove((R+4),(R+28),4);
}
B6afdfb:{NFSU2_TR(0x6afdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afe00ull));
TAIL_STATIC(0x699362u,699);
}
B6afe00:L6afe00:{c.instructions+=2;NFSU2_TR(0x6afe00);
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
B6afe02:{NFSU2_TR(0x6afe02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6afee5;}}
}
B6afe08:L6afe08:{c.instructions+=5;NFSU2_TR(0x6afe08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afe0e:{NFSU2_TR(0x6afe0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe11:{NFSU2_TR(0x6afe11);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6afe14:{NFSU2_TR(0x6afe14);
__builtin_memmove((R+4),(R+28),4);
}
B6afe16:{NFSU2_TR(0x6afe16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afe1bull));
TAIL_STATIC(0x698eb3u,698);
}
B6afe1b:L6afe1b:{c.instructions+=2;NFSU2_TR(0x6afe1b);
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
B6afe1d:{NFSU2_TR(0x6afe1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6afee5;}}
}
B6afe23:L6afe23:{c.instructions+=4;NFSU2_TR(0x6afe23);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6afe25:{NFSU2_TR(0x6afe25);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6afe28:{NFSU2_TR(0x6afe28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afe2b:{NFSU2_TR(0x6afe2b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6afe9a;}}
}
B6afe2d:L6afe2d:{c.instructions+=2;NFSU2_TR(0x6afe2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afe30:{NFSU2_TR(0x6afe30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afe33:L6afe33:{c.instructions+=9;NFSU2_TR(0x6afe33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afe34:{NFSU2_TR(0x6afe34);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6afe36:{NFSU2_TR(0x6afe36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afe37:{NFSU2_TR(0x6afe37);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6afe3a:{NFSU2_TR(0x6afe3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afe3b:{NFSU2_TR(0x6afe3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afe3d:{NFSU2_TR(0x6afe3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6afe43:{NFSU2_TR(0x6afe43);
__builtin_memmove((R+4),(R+24),4);
}
B6afe45:{NFSU2_TR(0x6afe45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afe4aull));
TAIL_STATIC(0x699c39u,699);
}
B6afe4a:L6afe4a:{c.instructions+=25;NFSU2_TR(0x6afe4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe4d:{NFSU2_TR(0x6afe4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6afe50:{NFSU2_TR(0x6afe50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afe54:{NFSU2_TR(0x6afe54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe57:{NFSU2_TR(0x6afe57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afe5a:{NFSU2_TR(0x6afe5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afe5d:{NFSU2_TR(0x6afe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe63:{NFSU2_TR(0x6afe63);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6afe66:{NFSU2_TR(0x6afe66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe69:{NFSU2_TR(0x6afe69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afe6c:{NFSU2_TR(0x6afe6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6afe6f:{NFSU2_TR(0x6afe6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afe72:{NFSU2_TR(0x6afe72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6afe75:{NFSU2_TR(0x6afe75);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afe78:{NFSU2_TR(0x6afe78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe7e:{NFSU2_TR(0x6afe7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afe81:{NFSU2_TR(0x6afe81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6afe84:{NFSU2_TR(0x6afe84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afe87:{NFSU2_TR(0x6afe87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6afe8a:{NFSU2_TR(0x6afe8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afe8e:{NFSU2_TR(0x6afe8e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6afe8f:{NFSU2_TR(0x6afe8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6afe92:{NFSU2_TR(0x6afe92);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afe95:{NFSU2_TR(0x6afe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6afe98:{NFSU2_TR(0x6afe98);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afe33u);}goto L6afe33;}}
}
B6afe9a:L6afe9a:{c.instructions+=4;NFSU2_TR(0x6afe9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6afea0:{NFSU2_TR(0x6afea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6afea2:{NFSU2_TR(0x6afea2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6afea8:{NFSU2_TR(0x6afea8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6afede;}}
}
B6afeaa:L6afeaa:{c.instructions+=6;NFSU2_TR(0x6afeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6afeb0:{NFSU2_TR(0x6afeb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6afeb3:{NFSU2_TR(0x6afeb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6afeb5:{NFSU2_TR(0x6afeb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afeb6:{NFSU2_TR(0x6afeb6);
__builtin_memmove((R+4),(R+24),4);
}
B6afeb8:{NFSU2_TR(0x6afeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afebdull));
TAIL_STATIC(0x699b26u,699);
}
B6afebd:L6afebd:{c.instructions+=2;NFSU2_TR(0x6afebd);
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
B6afebf:{NFSU2_TR(0x6afebf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6afee5;}}
}
B6afec1:L6afec1:{c.instructions+=4;NFSU2_TR(0x6afec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6afec4:{NFSU2_TR(0x6afec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6afec7:{NFSU2_TR(0x6afec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6afeca:{NFSU2_TR(0x6afeca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afd5cu);}goto L6afd5c;}}
}
B6afed0:L6afed0:{c.instructions+=1;NFSU2_TR(0x6afed0);
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
B6afed2:L6afed2:{c.instructions+=5;NFSU2_TR(0x6afed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6afed3:{NFSU2_TR(0x6afed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6afed4:{NFSU2_TR(0x6afed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6afed5:{NFSU2_TR(0x6afed5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6afed6:{NFSU2_TR(0x6afed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6afed7:L6afed7:{c.instructions+=2;NFSU2_TR(0x6afed7);
w4(R+0,u32(0x8007000eull));
}
B6afedc:{NFSU2_TR(0x6afedc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afed2u);}goto L6afed2;}
}
B6afede:L6afede:{c.instructions+=2;NFSU2_TR(0x6afede);
w4(R+24,u32(0x8007000eull));
}
B6afee3:{NFSU2_TR(0x6afee3);
{goto L6afee7;}
}
B6afee5:L6afee5:{c.instructions+=1;NFSU2_TR(0x6afee5);
__builtin_memmove((R+24),(R+0),4);
}
B6afee7:L6afee7:{c.instructions+=3;NFSU2_TR(0x6afee7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afee9:{NFSU2_TR(0x6afee9);
__builtin_memmove((R+4),(R+28),4);
}
B6afeeb:{NFSU2_TR(0x6afeeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afef0ull));
TAIL_STATIC(0x6739efu,673);
}
B6afef0:L6afef0:{c.instructions+=2;NFSU2_TR(0x6afef0);
__builtin_memmove((R+0),(R+24),4);
}
B6afef2:{NFSU2_TR(0x6afef2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6afed2u);}goto L6afed2;}
}
B6afef4:L6afef4:{c.instructions+=11;NFSU2_TR(0x6afef4);
__builtin_memmove((R+28),(R+28),4);
}
B6afef6:{NFSU2_TR(0x6afef6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afef7:{NFSU2_TR(0x6afef7);
__builtin_memmove((R+20),(R+16),4);
}
B6afef9:{NFSU2_TR(0x6afef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6afefc:{NFSU2_TR(0x6afefc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afefd:{NFSU2_TR(0x6afefd);
__builtin_memmove((R+24),(R+4),4);
}
B6afeff:{NFSU2_TR(0x6afeff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aff02:{NFSU2_TR(0x6aff02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff03:{NFSU2_TR(0x6aff03);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff05:{NFSU2_TR(0x6aff05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aff08:{NFSU2_TR(0x6aff08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aff0dull));
TAIL_STATIC(0x699317u,699);
}
B6aff0d:L6aff0d:{c.instructions+=2;NFSU2_TR(0x6aff0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aff0f:{NFSU2_TR(0x6aff0f);
if(r1(R+518)){{goto L6aff1c;}}
}
B6aff11:L6aff11:{c.instructions+=2;NFSU2_TR(0x6aff11);
__builtin_memmove((R+4),(R+0),4);
}
B6aff13:{NFSU2_TR(0x6aff13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aff18ull));
TAIL_STATIC(0x698e7du,698);
}
B6aff18:L6aff18:{c.instructions+=2;NFSU2_TR(0x6aff18);
__builtin_memmove((R+28),(R+0),4);
}
B6aff1a:{NFSU2_TR(0x6aff1a);
{goto L6aff1e;}
}
B6aff1c:L6aff1c:{c.instructions+=1;NFSU2_TR(0x6aff1c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6aff1e:L6aff1e:{c.instructions+=2;NFSU2_TR(0x6aff1e);
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
B6aff20:{NFSU2_TR(0x6aff20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aff2c;}}
}
B6aff22:L6aff22:{c.instructions+=2;NFSU2_TR(0x6aff22);
w4(R+0,u32(0x8007000eull));
}
B6aff27:{NFSU2_TR(0x6aff27);
TAIL_STATIC(0x6b0090u,6b0);
}
B6aff2c:L6aff2c:{c.instructions+=7;NFSU2_TR(0x6aff2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff2d:{NFSU2_TR(0x6aff2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff2f:{NFSU2_TR(0x6aff2f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff31:{NFSU2_TR(0x6aff31);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff33:{NFSU2_TR(0x6aff33);
u8 U[4];
w4(U+0,u32(0x10000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aff38:{NFSU2_TR(0x6aff38);
__builtin_memmove((R+4),(R+28),4);
}
B6aff3a:{NFSU2_TR(0x6aff3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aff3full));
TAIL_STATIC(0x699362u,699);
}
B6aff3f:L6aff3f:{c.instructions+=2;NFSU2_TR(0x6aff3f);
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
B6aff41:{NFSU2_TR(0x6aff41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6affef;}}
}
B6aff47:L6aff47:{c.instructions+=4;NFSU2_TR(0x6aff47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aff4b:{NFSU2_TR(0x6aff4b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6aff4d:{NFSU2_TR(0x6aff4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aff50:{NFSU2_TR(0x6aff50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6affa2;}}
}
B6aff52:L6aff52:{c.instructions+=7;NFSU2_TR(0x6aff52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff55:{NFSU2_TR(0x6aff55);
__builtin_memmove((R+0),(R+4),4);
}
B6aff57:{NFSU2_TR(0x6aff57);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6aff5a:{NFSU2_TR(0x6aff5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aff5d:{NFSU2_TR(0x6aff5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff60:{NFSU2_TR(0x6aff60);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aff66:{NFSU2_TR(0x6aff66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aff9c;}}
}
B6aff68:L6aff68:{c.instructions+=16;NFSU2_TR(0x6aff68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff6b:{NFSU2_TR(0x6aff6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aff6e:{NFSU2_TR(0x6aff6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff71:{NFSU2_TR(0x6aff71);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aff74:{NFSU2_TR(0x6aff74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6aff77:{NFSU2_TR(0x6aff77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff7a:{NFSU2_TR(0x6aff7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aff7d:{NFSU2_TR(0x6aff7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6aff83:{NFSU2_TR(0x6aff83);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aff86:{NFSU2_TR(0x6aff86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff89:{NFSU2_TR(0x6aff89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6aff8c:{NFSU2_TR(0x6aff8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aff90:{NFSU2_TR(0x6aff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aff93:{NFSU2_TR(0x6aff93);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aff96:{NFSU2_TR(0x6aff96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aff99:{NFSU2_TR(0x6aff99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aff9c:L6aff9c:{c.instructions+=3;NFSU2_TR(0x6aff9c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6aff9d:{NFSU2_TR(0x6aff9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6affa0:{NFSU2_TR(0x6affa0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aff52u);}goto L6aff52;}}
}
B6affa2:L6affa2:{c.instructions+=1;NFSU2_TR(0x6affa2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6affa4:L6affa4:{c.instructions+=9;NFSU2_TR(0x6affa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6affa5:{NFSU2_TR(0x6affa5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6affa7:{NFSU2_TR(0x6affa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6affa8:{NFSU2_TR(0x6affa8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6affab:{NFSU2_TR(0x6affab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6affac:{NFSU2_TR(0x6affac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6affae:{NFSU2_TR(0x6affae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6affb4:{NFSU2_TR(0x6affb4);
__builtin_memmove((R+4),(R+24),4);
}
B6affb6:{NFSU2_TR(0x6affb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6affbbull));
TAIL_STATIC(0x699c39u,699);
}
B6affbb:L6affbb:{c.instructions+=5;NFSU2_TR(0x6affbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6affbe:{NFSU2_TR(0x6affbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6affc1:{NFSU2_TR(0x6affc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6affc4:{NFSU2_TR(0x6affc4);
u8 U[26];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6affc8:{NFSU2_TR(0x6affc8);
if(r1(R+518)){TAIL_STATIC(0x6b0001u,6b0);}
}
B6affca:L6affca:{c.instructions+=9;NFSU2_TR(0x6affca);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6affcd:{NFSU2_TR(0x6affcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6affd0:{NFSU2_TR(0x6affd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6affd3:{NFSU2_TR(0x6affd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6affd7:{NFSU2_TR(0x6affd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6affda:{NFSU2_TR(0x6affda);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6affdb:{NFSU2_TR(0x6affdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6affde:{NFSU2_TR(0x6affde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6affe1:{NFSU2_TR(0x6affe1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6affa4u);}goto L6affa4;}}
}
B6affe3:L6affe3:{c.instructions+=3;NFSU2_TR(0x6affe3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6affe4:{NFSU2_TR(0x6affe4);
__builtin_memmove((R+4),(R+24),4);
}
B6affe6:{NFSU2_TR(0x6affe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6affebull));
TAIL_STATIC(0x699b26u,699);
}
B6affeb:L6affeb:{c.instructions+=2;NFSU2_TR(0x6affeb);
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
B6affed:{NFSU2_TR(0x6affed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b0008u,6b0);}
}
B6affef:L6affef:{c.instructions+=4;NFSU2_TR(0x6affef);
__builtin_memmove((R+24),(R+0),4);
}
B6afff1:{NFSU2_TR(0x6afff1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6afff3:{NFSU2_TR(0x6afff3);
__builtin_memmove((R+4),(R+28),4);
}
B6afff5:{NFSU2_TR(0x6afff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6afffaull));
TAIL_STATIC(0x6739efu,673);
}
B6afffa:L6afffa:{c.instructions+=2;NFSU2_TR(0x6afffa);
__builtin_memmove((R+0),(R+24),4);
}
B6afffc:{NFSU2_TR(0x6afffc);
TAIL_STATIC(0x6b008fu,6b0);
}
XIT:NFSU2_TR_EXIT(0x6af,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
