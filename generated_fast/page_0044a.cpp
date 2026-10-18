#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44b(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44a(u8* __restrict R,Cpu& c);
u32 page_44a(Cpu& c){return body_44a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44a001:goto L44a001;
case 0x44a005:c.instructions+=15;goto B44a005;
case 0x44a007:c.instructions+=14;goto B44a007;
case 0x44a00b:c.instructions+=13;goto B44a00b;
case 0x44a00f:c.instructions+=12;goto B44a00f;
case 0x44a013:c.instructions+=11;goto B44a013;
case 0x44a017:c.instructions+=10;goto B44a017;
case 0x44a019:c.instructions+=9;goto B44a019;
case 0x44a01b:c.instructions+=8;goto B44a01b;
case 0x44a01f:c.instructions+=7;goto B44a01f;
case 0x44a021:c.instructions+=6;goto B44a021;
case 0x44a024:c.instructions+=5;goto B44a024;
case 0x44a028:c.instructions+=4;goto B44a028;
case 0x44a029:c.instructions+=3;goto B44a029;
case 0x44a02b:c.instructions+=2;goto B44a02b;
case 0x44a02d:c.instructions+=1;goto B44a02d;
case 0x44a02f:goto L44a02f;
case 0x44a031:c.instructions+=1;goto B44a031;
case 0x44a033:goto L44a033;
case 0x44a035:goto L44a035;
case 0x44a03b:c.instructions+=3;goto B44a03b;
case 0x44a042:c.instructions+=2;goto B44a042;
case 0x44a046:c.instructions+=1;goto B44a046;
case 0x44a048:goto L44a048;
case 0x44a050:goto L44a050;
case 0x44a054:c.instructions+=3;goto B44a054;
case 0x44a055:c.instructions+=2;goto B44a055;
case 0x44a057:c.instructions+=1;goto B44a057;
case 0x44a05c:goto L44a05c;
case 0x44a062:c.instructions+=7;goto B44a062;
case 0x44a065:c.instructions+=6;goto B44a065;
case 0x44a066:c.instructions+=5;goto B44a066;
case 0x44a06c:c.instructions+=4;goto B44a06c;
case 0x44a073:c.instructions+=3;goto B44a073;
case 0x44a074:c.instructions+=2;goto B44a074;
case 0x44a075:c.instructions+=1;goto B44a075;
case 0x44a07a:goto L44a07a;
case 0x44a081:c.instructions+=4;goto B44a081;
case 0x44a082:c.instructions+=3;goto B44a082;
case 0x44a086:c.instructions+=2;goto B44a086;
case 0x44a087:c.instructions+=1;goto B44a087;
case 0x44a08c:goto L44a08c;
case 0x44a090:c.instructions+=33;goto B44a090;
case 0x44a094:c.instructions+=32;goto B44a094;
case 0x44a097:c.instructions+=31;goto B44a097;
case 0x44a09b:c.instructions+=30;goto B44a09b;
case 0x44a09f:c.instructions+=29;goto B44a09f;
case 0x44a0a1:c.instructions+=28;goto B44a0a1;
case 0x44a0a5:c.instructions+=27;goto B44a0a5;
case 0x44a0a9:c.instructions+=26;goto B44a0a9;
case 0x44a0ab:c.instructions+=25;goto B44a0ab;
case 0x44a0af:c.instructions+=24;goto B44a0af;
case 0x44a0b3:c.instructions+=23;goto B44a0b3;
case 0x44a0b7:c.instructions+=22;goto B44a0b7;
case 0x44a0bb:c.instructions+=21;goto B44a0bb;
case 0x44a0bf:c.instructions+=20;goto B44a0bf;
case 0x44a0c1:c.instructions+=19;goto B44a0c1;
case 0x44a0c5:c.instructions+=18;goto B44a0c5;
case 0x44a0c9:c.instructions+=17;goto B44a0c9;
case 0x44a0cb:c.instructions+=16;goto B44a0cb;
case 0x44a0cf:c.instructions+=15;goto B44a0cf;
case 0x44a0d3:c.instructions+=14;goto B44a0d3;
case 0x44a0d7:c.instructions+=13;goto B44a0d7;
case 0x44a0db:c.instructions+=12;goto B44a0db;
case 0x44a0df:c.instructions+=11;goto B44a0df;
case 0x44a0e3:c.instructions+=10;goto B44a0e3;
case 0x44a0e5:c.instructions+=9;goto B44a0e5;
case 0x44a0e9:c.instructions+=8;goto B44a0e9;
case 0x44a0ed:c.instructions+=7;goto B44a0ed;
case 0x44a0ef:c.instructions+=6;goto B44a0ef;
case 0x44a0f3:c.instructions+=5;goto B44a0f3;
case 0x44a0f7:c.instructions+=4;goto B44a0f7;
case 0x44a0fb:c.instructions+=3;goto B44a0fb;
case 0x44a0ff:c.instructions+=2;goto B44a0ff;
case 0x44a103:c.instructions+=1;goto B44a103;
case 0x44a105:goto L44a105;
case 0x44a109:c.instructions+=1;goto B44a109;
case 0x44a10d:goto L44a10d;
case 0x44a110:c.instructions+=18;goto B44a110;
case 0x44a112:c.instructions+=17;goto B44a112;
case 0x44a116:c.instructions+=16;goto B44a116;
case 0x44a11c:c.instructions+=15;goto B44a11c;
case 0x44a120:c.instructions+=14;goto B44a120;
case 0x44a126:c.instructions+=13;goto B44a126;
case 0x44a12c:c.instructions+=12;goto B44a12c;
case 0x44a130:c.instructions+=11;goto B44a130;
case 0x44a136:c.instructions+=10;goto B44a136;
case 0x44a13a:c.instructions+=9;goto B44a13a;
case 0x44a140:c.instructions+=8;goto B44a140;
case 0x44a146:c.instructions+=7;goto B44a146;
case 0x44a14c:c.instructions+=6;goto B44a14c;
case 0x44a14d:c.instructions+=5;goto B44a14d;
case 0x44a14e:c.instructions+=4;goto B44a14e;
case 0x44a14f:c.instructions+=3;goto B44a14f;
case 0x44a151:c.instructions+=2;goto B44a151;
case 0x44a152:c.instructions+=1;goto B44a152;
case 0x44a160:goto L44a160;
case 0x44a164:c.instructions+=11;goto B44a164;
case 0x44a165:c.instructions+=10;goto B44a165;
case 0x44a169:c.instructions+=9;goto B44a169;
case 0x44a16a:c.instructions+=8;goto B44a16a;
case 0x44a16e:c.instructions+=7;goto B44a16e;
case 0x44a172:c.instructions+=6;goto B44a172;
case 0x44a173:c.instructions+=5;goto B44a173;
case 0x44a177:c.instructions+=4;goto B44a177;
case 0x44a17b:c.instructions+=3;goto B44a17b;
case 0x44a17d:c.instructions+=2;goto B44a17d;
case 0x44a180:c.instructions+=1;goto B44a180;
case 0x44a182:goto L44a182;
case 0x44a186:c.instructions+=4;goto B44a186;
case 0x44a18a:c.instructions+=3;goto B44a18a;
case 0x44a18c:c.instructions+=2;goto B44a18c;
case 0x44a18f:c.instructions+=1;goto B44a18f;
case 0x44a191:goto L44a191;
case 0x44a192:c.instructions+=4;goto B44a192;
case 0x44a193:c.instructions+=3;goto B44a193;
case 0x44a195:c.instructions+=2;goto B44a195;
case 0x44a196:c.instructions+=1;goto B44a196;
case 0x44a199:goto L44a199;
case 0x44a19a:c.instructions+=4;goto B44a19a;
case 0x44a19b:c.instructions+=3;goto B44a19b;
case 0x44a19c:c.instructions+=2;goto B44a19c;
case 0x44a19d:c.instructions+=1;goto B44a19d;
case 0x44a1a2:goto L44a1a2;
case 0x44a1a3:c.instructions+=3;goto B44a1a3;
case 0x44a1a4:c.instructions+=2;goto B44a1a4;
case 0x44a1a5:c.instructions+=1;goto B44a1a5;
case 0x44a1b0:goto L44a1b0;
case 0x44a1b3:c.instructions+=7;goto B44a1b3;
case 0x44a1b4:c.instructions+=6;goto B44a1b4;
case 0x44a1b5:c.instructions+=5;goto B44a1b5;
case 0x44a1b6:c.instructions+=4;goto B44a1b6;
case 0x44a1b8:c.instructions+=3;goto B44a1b8;
case 0x44a1ba:c.instructions+=2;goto B44a1ba;
case 0x44a1c0:c.instructions+=1;goto B44a1c0;
case 0x44a1c5:goto L44a1c5;
case 0x44a1cb:c.instructions+=5;goto B44a1cb;
case 0x44a1ce:c.instructions+=4;goto B44a1ce;
case 0x44a1d0:c.instructions+=3;goto B44a1d0;
case 0x44a1d2:c.instructions+=2;goto B44a1d2;
case 0x44a1d5:c.instructions+=1;goto B44a1d5;
case 0x44a1db:goto L44a1db;
case 0x44a1e1:c.instructions+=9;goto B44a1e1;
case 0x44a1e7:c.instructions+=8;goto B44a1e7;
case 0x44a1e9:c.instructions+=7;goto B44a1e9;
case 0x44a1ec:c.instructions+=6;goto B44a1ec;
case 0x44a1f2:c.instructions+=5;goto B44a1f2;
case 0x44a1f7:c.instructions+=4;goto B44a1f7;
case 0x44a1fb:c.instructions+=3;goto B44a1fb;
case 0x44a202:c.instructions+=2;goto B44a202;
case 0x44a206:c.instructions+=1;goto B44a206;
case 0x44a208:goto L44a208;
case 0x44a20e:goto L44a20e;
case 0x44a214:c.instructions+=20;goto B44a214;
case 0x44a21a:c.instructions+=19;goto B44a21a;
case 0x44a21c:c.instructions+=18;goto B44a21c;
case 0x44a220:c.instructions+=17;goto B44a220;
case 0x44a222:c.instructions+=16;goto B44a222;
case 0x44a228:c.instructions+=15;goto B44a228;
case 0x44a22b:c.instructions+=14;goto B44a22b;
case 0x44a231:c.instructions+=13;goto B44a231;
case 0x44a233:c.instructions+=12;goto B44a233;
case 0x44a239:c.instructions+=11;goto B44a239;
case 0x44a23d:c.instructions+=10;goto B44a23d;
case 0x44a243:c.instructions+=9;goto B44a243;
case 0x44a245:c.instructions+=8;goto B44a245;
case 0x44a249:c.instructions+=7;goto B44a249;
case 0x44a24d:c.instructions+=6;goto B44a24d;
case 0x44a250:c.instructions+=5;goto B44a250;
case 0x44a256:c.instructions+=4;goto B44a256;
case 0x44a25b:c.instructions+=3;goto B44a25b;
case 0x44a25d:c.instructions+=2;goto B44a25d;
case 0x44a263:c.instructions+=1;goto B44a263;
case 0x44a264:goto L44a264;
case 0x44a265:c.instructions+=3;goto B44a265;
case 0x44a26b:c.instructions+=2;goto B44a26b;
case 0x44a26e:c.instructions+=1;goto B44a26e;
case 0x44a274:goto L44a274;
case 0x44a27a:c.instructions+=4;goto B44a27a;
case 0x44a280:c.instructions+=3;goto B44a280;
case 0x44a282:c.instructions+=2;goto B44a282;
case 0x44a285:c.instructions+=1;goto B44a285;
case 0x44a287:goto L44a287;
case 0x44a28d:c.instructions+=9;goto B44a28d;
case 0x44a293:c.instructions+=8;goto B44a293;
case 0x44a295:c.instructions+=7;goto B44a295;
case 0x44a298:c.instructions+=6;goto B44a298;
case 0x44a29e:c.instructions+=5;goto B44a29e;
case 0x44a2a3:c.instructions+=4;goto B44a2a3;
case 0x44a2a8:c.instructions+=3;goto B44a2a8;
case 0x44a2af:c.instructions+=2;goto B44a2af;
case 0x44a2b3:c.instructions+=1;goto B44a2b3;
case 0x44a2b5:goto L44a2b5;
case 0x44a2bb:goto L44a2bb;
case 0x44a2c1:c.instructions+=15;goto B44a2c1;
case 0x44a2c7:c.instructions+=14;goto B44a2c7;
case 0x44a2c9:c.instructions+=13;goto B44a2c9;
case 0x44a2cd:c.instructions+=12;goto B44a2cd;
case 0x44a2cf:c.instructions+=11;goto B44a2cf;
case 0x44a2d5:c.instructions+=10;goto B44a2d5;
case 0x44a2db:c.instructions+=9;goto B44a2db;
case 0x44a2df:c.instructions+=8;goto B44a2df;
case 0x44a2e5:c.instructions+=7;goto B44a2e5;
case 0x44a2e7:c.instructions+=6;goto B44a2e7;
case 0x44a2e9:c.instructions+=5;goto B44a2e9;
case 0x44a2ef:c.instructions+=4;goto B44a2ef;
case 0x44a2f3:c.instructions+=3;goto B44a2f3;
case 0x44a2f5:c.instructions+=2;goto B44a2f5;
case 0x44a2fb:c.instructions+=1;goto B44a2fb;
case 0x44a2fc:goto L44a2fc;
case 0x44a2fe:c.instructions+=7;goto B44a2fe;
case 0x44a300:c.instructions+=6;goto B44a300;
case 0x44a301:c.instructions+=5;goto B44a301;
case 0x44a302:c.instructions+=4;goto B44a302;
case 0x44a305:c.instructions+=3;goto B44a305;
case 0x44a306:c.instructions+=2;goto B44a306;
case 0x44a309:c.instructions+=1;goto B44a309;
case 0x44a310:goto L44a310;
case 0x44a311:c.instructions+=13;goto B44a311;
case 0x44a312:c.instructions+=12;goto B44a312;
case 0x44a314:c.instructions+=11;goto B44a314;
case 0x44a31a:c.instructions+=10;goto B44a31a;
case 0x44a31c:c.instructions+=9;goto B44a31c;
case 0x44a322:c.instructions+=8;goto B44a322;
case 0x44a323:c.instructions+=7;goto B44a323;
case 0x44a324:c.instructions+=6;goto B44a324;
case 0x44a327:c.instructions+=5;goto B44a327;
case 0x44a32e:c.instructions+=4;goto B44a32e;
case 0x44a32f:c.instructions+=3;goto B44a32f;
case 0x44a331:c.instructions+=2;goto B44a331;
case 0x44a333:c.instructions+=1;goto B44a333;
case 0x44a335:goto L44a335;
case 0x44a337:c.instructions+=2;goto B44a337;
case 0x44a33a:c.instructions+=1;goto B44a33a;
case 0x44a33c:goto L44a33c;
case 0x44a33d:c.instructions+=3;goto B44a33d;
case 0x44a33e:c.instructions+=2;goto B44a33e;
case 0x44a344:c.instructions+=1;goto B44a344;
case 0x44a346:goto L44a346;
case 0x44a347:c.instructions+=6;goto B44a347;
case 0x44a348:c.instructions+=5;goto B44a348;
case 0x44a349:c.instructions+=4;goto B44a349;
case 0x44a34b:c.instructions+=3;goto B44a34b;
case 0x44a34c:c.instructions+=2;goto B44a34c;
case 0x44a34d:c.instructions+=1;goto B44a34d;
case 0x44a34e:goto L44a34e;
case 0x44a352:c.instructions+=6;goto B44a352;
case 0x44a356:c.instructions+=5;goto B44a356;
case 0x44a357:c.instructions+=4;goto B44a357;
case 0x44a359:c.instructions+=3;goto B44a359;
case 0x44a35e:c.instructions+=2;goto B44a35e;
case 0x44a365:c.instructions+=1;goto B44a365;
case 0x44a36a:goto L44a36a;
case 0x44a370:c.instructions+=3;goto B44a370;
case 0x44a376:c.instructions+=2;goto B44a376;
case 0x44a378:c.instructions+=1;goto B44a378;
case 0x44a37d:goto L44a37d;
case 0x44a37f:goto L44a37f;
case 0x44a385:c.instructions+=9;goto B44a385;
case 0x44a386:c.instructions+=8;goto B44a386;
case 0x44a387:c.instructions+=7;goto B44a387;
case 0x44a38c:c.instructions+=6;goto B44a38c;
case 0x44a392:c.instructions+=5;goto B44a392;
case 0x44a393:c.instructions+=4;goto B44a393;
case 0x44a395:c.instructions+=3;goto B44a395;
case 0x44a396:c.instructions+=2;goto B44a396;
case 0x44a397:c.instructions+=1;goto B44a397;
case 0x44a3a0:goto L44a3a0;
case 0x44a3a1:c.instructions+=11;goto B44a3a1;
case 0x44a3a2:c.instructions+=10;goto B44a3a2;
case 0x44a3a4:c.instructions+=9;goto B44a3a4;
case 0x44a3aa:c.instructions+=8;goto B44a3aa;
case 0x44a3b0:c.instructions+=7;goto B44a3b0;
case 0x44a3b2:c.instructions+=6;goto B44a3b2;
case 0x44a3b8:c.instructions+=5;goto B44a3b8;
case 0x44a3bf:c.instructions+=4;goto B44a3bf;
case 0x44a3c2:c.instructions+=3;goto B44a3c2;
case 0x44a3c4:c.instructions+=2;goto B44a3c4;
case 0x44a3c7:c.instructions+=1;goto B44a3c7;
case 0x44a3c9:goto L44a3c9;
case 0x44a3cf:c.instructions+=4;goto B44a3cf;
case 0x44a3d5:c.instructions+=3;goto B44a3d5;
case 0x44a3d7:c.instructions+=2;goto B44a3d7;
case 0x44a3da:c.instructions+=1;goto B44a3da;
case 0x44a3dc:goto L44a3dc;
case 0x44a3de:c.instructions+=3;goto B44a3de;
case 0x44a3df:c.instructions+=2;goto B44a3df;
case 0x44a3e0:c.instructions+=1;goto B44a3e0;
case 0x44a3e1:goto L44a3e1;
case 0x44a3e5:c.instructions+=6;goto B44a3e5;
case 0x44a3e9:c.instructions+=5;goto B44a3e9;
case 0x44a3ea:c.instructions+=4;goto B44a3ea;
case 0x44a3ec:c.instructions+=3;goto B44a3ec;
case 0x44a3f1:c.instructions+=2;goto B44a3f1;
case 0x44a3f8:c.instructions+=1;goto B44a3f8;
case 0x44a3fd:goto L44a3fd;
case 0x44a403:c.instructions+=18;goto B44a403;
case 0x44a409:c.instructions+=17;goto B44a409;
case 0x44a40f:c.instructions+=16;goto B44a40f;
case 0x44a411:c.instructions+=15;goto B44a411;
case 0x44a413:c.instructions+=14;goto B44a413;
case 0x44a419:c.instructions+=13;goto B44a419;
case 0x44a41f:c.instructions+=12;goto B44a41f;
case 0x44a422:c.instructions+=11;goto B44a422;
case 0x44a428:c.instructions+=10;goto B44a428;
case 0x44a42a:c.instructions+=9;goto B44a42a;
case 0x44a42e:c.instructions+=8;goto B44a42e;
case 0x44a434:c.instructions+=7;goto B44a434;
case 0x44a436:c.instructions+=6;goto B44a436;
case 0x44a43d:c.instructions+=5;goto B44a43d;
case 0x44a441:c.instructions+=4;goto B44a441;
case 0x44a443:c.instructions+=3;goto B44a443;
case 0x44a444:c.instructions+=2;goto B44a444;
case 0x44a445:c.instructions+=1;goto B44a445;
case 0x44a450:goto L44a450;
case 0x44a451:c.instructions+=3;goto B44a451;
case 0x44a453:c.instructions+=2;goto B44a453;
case 0x44a459:c.instructions+=1;goto B44a459;
case 0x44a45e:goto L44a45e;
case 0x44a460:c.instructions+=1;goto B44a460;
case 0x44a462:goto L44a462;
case 0x44a465:c.instructions+=9;goto B44a465;
case 0x44a469:c.instructions+=8;goto B44a469;
case 0x44a46b:c.instructions+=7;goto B44a46b;
case 0x44a46e:c.instructions+=6;goto B44a46e;
case 0x44a472:c.instructions+=5;goto B44a472;
case 0x44a473:c.instructions+=4;goto B44a473;
case 0x44a475:c.instructions+=3;goto B44a475;
case 0x44a476:c.instructions+=2;goto B44a476;
case 0x44a477:c.instructions+=1;goto B44a477;
case 0x44a47c:goto L44a47c;
case 0x44a47e:c.instructions+=2;goto B44a47e;
case 0x44a480:c.instructions+=1;goto B44a480;
case 0x44a482:goto L44a482;
case 0x44a485:c.instructions+=11;goto B44a485;
case 0x44a487:c.instructions+=10;goto B44a487;
case 0x44a489:c.instructions+=9;goto B44a489;
case 0x44a48e:c.instructions+=8;goto B44a48e;
case 0x44a490:c.instructions+=7;goto B44a490;
case 0x44a496:c.instructions+=6;goto B44a496;
case 0x44a499:c.instructions+=5;goto B44a499;
case 0x44a49b:c.instructions+=4;goto B44a49b;
case 0x44a49e:c.instructions+=3;goto B44a49e;
case 0x44a4a0:c.instructions+=2;goto B44a4a0;
case 0x44a4a2:c.instructions+=1;goto B44a4a2;
case 0x44a4a4:goto L44a4a4;
case 0x44a4aa:c.instructions+=1;goto B44a4aa;
case 0x44a4b4:goto L44a4b4;
case 0x44a4ba:c.instructions+=2;goto B44a4ba;
case 0x44a4bd:c.instructions+=1;goto B44a4bd;
case 0x44a4bf:goto L44a4bf;
case 0x44a4c9:goto L44a4c9;
case 0x44a4ca:goto L44a4ca;
case 0x44a4cb:c.instructions+=1;goto B44a4cb;
case 0x44a4d0:goto L44a4d0;
case 0x44a4d1:c.instructions+=3;goto B44a4d1;
case 0x44a4d2:c.instructions+=2;goto B44a4d2;
case 0x44a4d4:c.instructions+=1;goto B44a4d4;
case 0x44a4d9:goto L44a4d9;
case 0x44a4db:c.instructions+=1;goto B44a4db;
case 0x44a4dd:goto L44a4dd;
case 0x44a4e3:c.instructions+=4;goto B44a4e3;
case 0x44a4e6:c.instructions+=3;goto B44a4e6;
case 0x44a4e7:c.instructions+=2;goto B44a4e7;
case 0x44a4e9:c.instructions+=1;goto B44a4e9;
case 0x44a4ee:goto L44a4ee;
case 0x44a4f0:c.instructions+=1;goto B44a4f0;
case 0x44a4f2:goto L44a4f2;
case 0x44a4f4:c.instructions+=1;goto B44a4f4;
case 0x44a4f6:goto L44a4f6;
case 0x44a4f7:c.instructions+=2;goto B44a4f7;
case 0x44a4f9:c.instructions+=1;goto B44a4f9;
case 0x44a4fe:goto L44a4fe;
case 0x44a4ff:c.instructions+=2;goto B44a4ff;
case 0x44a500:c.instructions+=1;goto B44a500;
case 0x44a501:goto L44a501;
case 0x44a50b:c.instructions+=3;goto B44a50b;
case 0x44a511:c.instructions+=2;goto B44a511;
case 0x44a516:c.instructions+=1;goto B44a516;
case 0x44a51b:goto L44a51b;
case 0x44a51d:goto L44a51d;
case 0x44a51e:c.instructions+=3;goto B44a51e;
case 0x44a525:c.instructions+=2;goto B44a525;
case 0x44a526:c.instructions+=1;goto B44a526;
case 0x44a530:goto L44a530;
case 0x44a531:c.instructions+=5;goto B44a531;
case 0x44a533:c.instructions+=4;goto B44a533;
case 0x44a539:c.instructions+=3;goto B44a539;
case 0x44a53b:c.instructions+=2;goto B44a53b;
case 0x44a53e:c.instructions+=1;goto B44a53e;
case 0x44a544:goto L44a544;
case 0x44a545:c.instructions+=1;goto B44a545;
case 0x44a547:goto L44a547;
case 0x44a548:c.instructions+=1;goto B44a548;
case 0x44a54e:goto L44a54e;
case 0x44a554:c.instructions+=2;goto B44a554;
case 0x44a555:c.instructions+=1;goto B44a555;
case 0x44a558:goto L44a558;
case 0x44a55e:c.instructions+=7;goto B44a55e;
case 0x44a561:c.instructions+=6;goto B44a561;
case 0x44a562:c.instructions+=5;goto B44a562;
case 0x44a566:c.instructions+=4;goto B44a566;
case 0x44a567:c.instructions+=3;goto B44a567;
case 0x44a569:c.instructions+=2;goto B44a569;
case 0x44a56a:c.instructions+=1;goto B44a56a;
case 0x44a56f:goto L44a56f;
case 0x44a575:c.instructions+=3;goto B44a575;
case 0x44a578:c.instructions+=2;goto B44a578;
case 0x44a57a:c.instructions+=1;goto B44a57a;
case 0x44a57c:goto L44a57c;
case 0x44a57d:c.instructions+=1;goto B44a57d;
case 0x44a580:goto L44a580;
case 0x44a583:c.instructions+=5;goto B44a583;
case 0x44a586:c.instructions+=4;goto B44a586;
case 0x44a589:c.instructions+=3;goto B44a589;
case 0x44a58c:c.instructions+=2;goto B44a58c;
case 0x44a58e:c.instructions+=1;goto B44a58e;
case 0x44a590:goto L44a590;
case 0x44a597:c.instructions+=2;goto B44a597;
case 0x44a599:c.instructions+=1;goto B44a599;
case 0x44a59b:goto L44a59b;
case 0x44a59e:c.instructions+=4;goto B44a59e;
case 0x44a5a0:c.instructions+=3;goto B44a5a0;
case 0x44a5a3:c.instructions+=2;goto B44a5a3;
case 0x44a5a6:c.instructions+=1;goto B44a5a6;
case 0x44a5a8:goto L44a5a8;
case 0x44a5aa:c.instructions+=5;goto B44a5aa;
case 0x44a5ac:c.instructions+=4;goto B44a5ac;
case 0x44a5af:c.instructions+=3;goto B44a5af;
case 0x44a5b3:c.instructions+=2;goto B44a5b3;
case 0x44a5b7:c.instructions+=1;goto B44a5b7;
case 0x44a5b9:goto L44a5b9;
case 0x44a5bc:c.instructions+=4;goto B44a5bc;
case 0x44a5bd:c.instructions+=3;goto B44a5bd;
case 0x44a5bf:c.instructions+=2;goto B44a5bf;
case 0x44a5c0:c.instructions+=1;goto B44a5c0;
case 0x44a5c5:goto L44a5c5;
case 0x44a5cb:c.instructions+=3;goto B44a5cb;
case 0x44a5ce:c.instructions+=2;goto B44a5ce;
case 0x44a5d0:c.instructions+=1;goto B44a5d0;
case 0x44a5d2:goto L44a5d2;
case 0x44a5d3:goto L44a5d3;
case 0x44a5d4:c.instructions+=2;goto B44a5d4;
case 0x44a5d5:c.instructions+=1;goto B44a5d5;
case 0x44a5d8:goto L44a5d8;
case 0x44a5db:c.instructions+=1;goto B44a5db;
case 0x44a5dd:goto L44a5dd;
case 0x44a5de:c.instructions+=1;goto B44a5de;
case 0x44a5e0:goto L44a5e0;
case 0x44a5e1:c.instructions+=1;goto B44a5e1;
case 0x44a5e7:goto L44a5e7;
case 0x44a5ea:c.instructions+=1;goto B44a5ea;
case 0x44a5ec:goto L44a5ec;
case 0x44a5ef:c.instructions+=1;goto B44a5ef;
case 0x44a5f1:goto L44a5f1;
case 0x44a5f4:goto L44a5f4;
case 0x44a5f6:c.instructions+=1;goto B44a5f6;
case 0x44a5fc:goto L44a5fc;
case 0x44a5fd:c.instructions+=4;goto B44a5fd;
case 0x44a603:c.instructions+=3;goto B44a603;
case 0x44a607:c.instructions+=2;goto B44a607;
case 0x44a608:c.instructions+=1;goto B44a608;
case 0x44a60d:goto L44a60d;
case 0x44a610:c.instructions+=2;goto B44a610;
case 0x44a611:c.instructions+=1;goto B44a611;
case 0x44a620:goto L44a620;
case 0x44a621:c.instructions+=8;goto B44a621;
case 0x44a625:c.instructions+=7;goto B44a625;
case 0x44a626:c.instructions+=6;goto B44a626;
case 0x44a627:c.instructions+=5;goto B44a627;
case 0x44a62b:c.instructions+=4;goto B44a62b;
case 0x44a62c:c.instructions+=3;goto B44a62c;
case 0x44a62d:c.instructions+=2;goto B44a62d;
case 0x44a62f:c.instructions+=1;goto B44a62f;
case 0x44a634:goto L44a634;
case 0x44a636:c.instructions+=1;goto B44a636;
case 0x44a638:goto L44a638;
case 0x44a63a:c.instructions+=2;goto B44a63a;
case 0x44a63c:c.instructions+=1;goto B44a63c;
case 0x44a63e:goto L44a63e;
case 0x44a63f:c.instructions+=1;goto B44a63f;
case 0x44a641:goto L44a641;
case 0x44a642:c.instructions+=1;goto B44a642;
case 0x44a644:goto L44a644;
case 0x44a647:c.instructions+=2;goto B44a647;
case 0x44a64a:c.instructions+=1;goto B44a64a;
case 0x44a64c:goto L44a64c;
case 0x44a64f:c.instructions+=10;goto B44a64f;
case 0x44a652:c.instructions+=9;goto B44a652;
case 0x44a655:c.instructions+=8;goto B44a655;
case 0x44a656:c.instructions+=7;goto B44a656;
case 0x44a659:c.instructions+=6;goto B44a659;
case 0x44a660:c.instructions+=5;goto B44a660;
case 0x44a662:c.instructions+=4;goto B44a662;
case 0x44a663:c.instructions+=3;goto B44a663;
case 0x44a664:c.instructions+=2;goto B44a664;
case 0x44a665:c.instructions+=1;goto B44a665;
case 0x44a668:goto L44a668;
case 0x44a66b:c.instructions+=2;goto B44a66b;
case 0x44a671:c.instructions+=1;goto B44a671;
case 0x44a673:goto L44a673;
case 0x44a676:c.instructions+=10;goto B44a676;
case 0x44a679:c.instructions+=9;goto B44a679;
case 0x44a67c:c.instructions+=8;goto B44a67c;
case 0x44a67d:c.instructions+=7;goto B44a67d;
case 0x44a680:c.instructions+=6;goto B44a680;
case 0x44a687:c.instructions+=5;goto B44a687;
case 0x44a689:c.instructions+=4;goto B44a689;
case 0x44a68a:c.instructions+=3;goto B44a68a;
case 0x44a68b:c.instructions+=2;goto B44a68b;
case 0x44a68c:c.instructions+=1;goto B44a68c;
case 0x44a68f:goto L44a68f;
case 0x44a692:c.instructions+=2;goto B44a692;
case 0x44a698:c.instructions+=1;goto B44a698;
case 0x44a69a:goto L44a69a;
case 0x44a69d:c.instructions+=6;goto B44a69d;
case 0x44a6a0:c.instructions+=5;goto B44a6a0;
case 0x44a6a3:c.instructions+=4;goto B44a6a3;
case 0x44a6a4:c.instructions+=3;goto B44a6a4;
case 0x44a6a7:c.instructions+=2;goto B44a6a7;
case 0x44a6ae:c.instructions+=1;goto B44a6ae;
case 0x44a6b0:goto L44a6b0;
case 0x44a6b1:c.instructions+=3;goto B44a6b1;
case 0x44a6b2:c.instructions+=2;goto B44a6b2;
case 0x44a6b3:c.instructions+=1;goto B44a6b3;
case 0x44a6c0:goto L44a6c0;
case 0x44a6c3:c.instructions+=8;goto B44a6c3;
case 0x44a6c4:c.instructions+=7;goto B44a6c4;
case 0x44a6c8:c.instructions+=6;goto B44a6c8;
case 0x44a6ca:c.instructions+=5;goto B44a6ca;
case 0x44a6cf:c.instructions+=4;goto B44a6cf;
case 0x44a6d0:c.instructions+=3;goto B44a6d0;
case 0x44a6d4:c.instructions+=2;goto B44a6d4;
case 0x44a6dc:c.instructions+=1;goto B44a6dc;
case 0x44a6de:goto L44a6de;
case 0x44a6e3:c.instructions+=1;goto B44a6e3;
case 0x44a6e5:goto L44a6e5;
case 0x44a6ea:c.instructions+=1;goto B44a6ea;
case 0x44a6ec:goto L44a6ec;
case 0x44a6f4:c.instructions+=1;goto B44a6f4;
case 0x44a6f6:goto L44a6f6;
case 0x44a6fe:c.instructions+=1;goto B44a6fe;
case 0x44a700:goto L44a700;
case 0x44a708:goto L44a708;
case 0x44a70b:c.instructions+=5;goto B44a70b;
case 0x44a70e:c.instructions+=4;goto B44a70e;
case 0x44a712:c.instructions+=3;goto B44a712;
case 0x44a714:c.instructions+=2;goto B44a714;
case 0x44a719:c.instructions+=1;goto B44a719;
case 0x44a71b:goto L44a71b;
case 0x44a71c:c.instructions+=2;goto B44a71c;
case 0x44a71d:c.instructions+=1;goto B44a71d;
case 0x44a720:goto L44a720;
case 0x44a723:c.instructions+=5;goto B44a723;
case 0x44a727:c.instructions+=4;goto B44a727;
case 0x44a72b:c.instructions+=3;goto B44a72b;
case 0x44a72c:c.instructions+=2;goto B44a72c;
case 0x44a72d:c.instructions+=1;goto B44a72d;
case 0x44a732:goto L44a732;
case 0x44a734:c.instructions+=1;goto B44a734;
case 0x44a736:goto L44a736;
case 0x44a739:c.instructions+=3;goto B44a739;
case 0x44a73b:c.instructions+=2;goto B44a73b;
case 0x44a73e:c.instructions+=1;goto B44a73e;
case 0x44a740:goto L44a740;
case 0x44a743:goto L44a743;
case 0x44a746:c.instructions+=11;goto B44a746;
case 0x44a749:c.instructions+=10;goto B44a749;
case 0x44a74b:c.instructions+=9;goto B44a74b;
case 0x44a74e:c.instructions+=8;goto B44a74e;
case 0x44a751:c.instructions+=7;goto B44a751;
case 0x44a753:c.instructions+=6;goto B44a753;
case 0x44a756:c.instructions+=5;goto B44a756;
case 0x44a75a:c.instructions+=4;goto B44a75a;
case 0x44a760:c.instructions+=3;goto B44a760;
case 0x44a761:c.instructions+=2;goto B44a761;
case 0x44a765:c.instructions+=1;goto B44a765;
case 0x44a767:goto L44a767;
case 0x44a769:goto L44a769;
case 0x44a76d:c.instructions+=2;goto B44a76d;
case 0x44a76f:c.instructions+=1;goto B44a76f;
case 0x44a771:goto L44a771;
case 0x44a776:goto L44a776;
case 0x44a779:c.instructions+=5;goto B44a779;
case 0x44a77c:c.instructions+=4;goto B44a77c;
case 0x44a780:c.instructions+=3;goto B44a780;
case 0x44a784:c.instructions+=2;goto B44a784;
case 0x44a786:c.instructions+=1;goto B44a786;
case 0x44a788:goto L44a788;
case 0x44a789:c.instructions+=1;goto B44a789;
case 0x44a78a:goto L44a78a;
case 0x44a78b:c.instructions+=3;goto B44a78b;
case 0x44a78c:c.instructions+=2;goto B44a78c;
case 0x44a78f:c.instructions+=1;goto B44a78f;
case 0x44a7a0:goto L44a7a0;
case 0x44a7a3:c.instructions+=14;goto B44a7a3;
case 0x44a7a4:c.instructions+=13;goto B44a7a4;
case 0x44a7a5:c.instructions+=12;goto B44a7a5;
case 0x44a7a6:c.instructions+=11;goto B44a7a6;
case 0x44a7a8:c.instructions+=10;goto B44a7a8;
case 0x44a7ab:c.instructions+=9;goto B44a7ab;
case 0x44a7ae:c.instructions+=8;goto B44a7ae;
case 0x44a7b0:c.instructions+=7;goto B44a7b0;
case 0x44a7b2:c.instructions+=6;goto B44a7b2;
case 0x44a7b4:c.instructions+=5;goto B44a7b4;
case 0x44a7b5:c.instructions+=4;goto B44a7b5;
case 0x44a7bf:c.instructions+=3;goto B44a7bf;
case 0x44a7c9:c.instructions+=2;goto B44a7c9;
case 0x44a7cd:c.instructions+=1;goto B44a7cd;
case 0x44a7d3:goto L44a7d3;
case 0x44a7d6:goto L44a7d6;
case 0x44a7d8:c.instructions+=1;goto B44a7d8;
case 0x44a7da:goto L44a7da;
case 0x44a7db:goto L44a7db;
case 0x44a7de:c.instructions+=2;goto B44a7de;
case 0x44a7df:c.instructions+=1;goto B44a7df;
case 0x44a7e1:goto L44a7e1;
case 0x44a7e3:c.instructions+=2;goto B44a7e3;
case 0x44a7e7:c.instructions+=1;goto B44a7e7;
case 0x44a7ed:goto L44a7ed;
case 0x44a7f0:c.instructions+=2;goto B44a7f0;
case 0x44a7f2:c.instructions+=1;goto B44a7f2;
case 0x44a7f8:goto L44a7f8;
case 0x44a7fd:c.instructions+=5;goto B44a7fd;
case 0x44a800:c.instructions+=4;goto B44a800;
case 0x44a801:c.instructions+=3;goto B44a801;
case 0x44a806:c.instructions+=2;goto B44a806;
case 0x44a80b:c.instructions+=1;goto B44a80b;
case 0x44a810:goto L44a810;
case 0x44a812:c.instructions+=3;goto B44a812;
case 0x44a814:c.instructions+=2;goto B44a814;
case 0x44a819:c.instructions+=1;goto B44a819;
case 0x44a81e:goto L44a81e;
case 0x44a820:c.instructions+=3;goto B44a820;
case 0x44a823:c.instructions+=2;goto B44a823;
case 0x44a825:c.instructions+=1;goto B44a825;
case 0x44a827:goto L44a827;
case 0x44a831:c.instructions+=1;goto B44a831;
case 0x44a836:goto L44a836;
case 0x44a83b:c.instructions+=2;goto B44a83b;
case 0x44a83c:c.instructions+=1;goto B44a83c;
case 0x44a841:goto L44a841;
case 0x44a844:c.instructions+=3;goto B44a844;
case 0x44a847:c.instructions+=2;goto B44a847;
case 0x44a849:c.instructions+=1;goto B44a849;
case 0x44a84b:goto L44a84b;
case 0x44a84f:c.instructions+=1;goto B44a84f;
case 0x44a850:goto L44a850;
case 0x44a853:c.instructions+=5;goto B44a853;
case 0x44a857:c.instructions+=4;goto B44a857;
case 0x44a85b:c.instructions+=3;goto B44a85b;
case 0x44a85d:c.instructions+=2;goto B44a85d;
case 0x44a85f:c.instructions+=1;goto B44a85f;
case 0x44a861:goto L44a861;
case 0x44a866:c.instructions+=2;goto B44a866;
case 0x44a86b:c.instructions+=1;goto B44a86b;
case 0x44a86d:goto L44a86d;
case 0x44a872:goto L44a872;
case 0x44a876:c.instructions+=9;goto B44a876;
case 0x44a877:c.instructions+=8;goto B44a877;
case 0x44a87a:c.instructions+=7;goto B44a87a;
case 0x44a87b:c.instructions+=6;goto B44a87b;
case 0x44a87c:c.instructions+=5;goto B44a87c;
case 0x44a87f:c.instructions+=4;goto B44a87f;
case 0x44a880:c.instructions+=3;goto B44a880;
case 0x44a885:c.instructions+=2;goto B44a885;
case 0x44a886:c.instructions+=1;goto B44a886;
case 0x44a88b:goto L44a88b;
case 0x44a88e:c.instructions+=3;goto B44a88e;
case 0x44a88f:c.instructions+=2;goto B44a88f;
case 0x44a891:c.instructions+=1;goto B44a891;
case 0x44a896:goto L44a896;
case 0x44a89b:c.instructions+=2;goto B44a89b;
case 0x44a89c:c.instructions+=1;goto B44a89c;
case 0x44a8a1:goto L44a8a1;
case 0x44a8a4:goto L44a8a4;
case 0x44a8a8:c.instructions+=6;goto B44a8a8;
case 0x44a8ab:c.instructions+=5;goto B44a8ab;
case 0x44a8ac:c.instructions+=4;goto B44a8ac;
case 0x44a8af:c.instructions+=3;goto B44a8af;
case 0x44a8b1:c.instructions+=2;goto B44a8b1;
case 0x44a8b5:c.instructions+=1;goto B44a8b5;
case 0x44a8b7:goto L44a8b7;
case 0x44a8b9:goto L44a8b9;
case 0x44a8be:c.instructions+=2;goto B44a8be;
case 0x44a8bf:c.instructions+=1;goto B44a8bf;
case 0x44a8c4:goto L44a8c4;
case 0x44a8c5:c.instructions+=1;goto B44a8c5;
case 0x44a8ca:goto L44a8ca;
case 0x44a8d0:c.instructions+=3;goto B44a8d0;
case 0x44a8d3:c.instructions+=2;goto B44a8d3;
case 0x44a8d6:c.instructions+=1;goto B44a8d6;
case 0x44a8d8:goto L44a8d8;
case 0x44a8de:goto L44a8de;
case 0x44a8e2:goto L44a8e2;
case 0x44a8e5:c.instructions+=5;goto B44a8e5;
case 0x44a8e8:c.instructions+=4;goto B44a8e8;
case 0x44a8ea:c.instructions+=3;goto B44a8ea;
case 0x44a8ec:c.instructions+=2;goto B44a8ec;
case 0x44a8f0:c.instructions+=1;goto B44a8f0;
case 0x44a8f6:goto L44a8f6;
case 0x44a8f9:c.instructions+=1;goto B44a8f9;
case 0x44a900:goto L44a900;
case 0x44a902:c.instructions+=1;goto B44a902;
case 0x44a904:goto L44a904;
case 0x44a905:goto L44a905;
case 0x44a908:c.instructions+=2;goto B44a908;
case 0x44a909:c.instructions+=1;goto B44a909;
case 0x44a90b:goto L44a90b;
case 0x44a90d:c.instructions+=2;goto B44a90d;
case 0x44a911:c.instructions+=1;goto B44a911;
case 0x44a917:goto L44a917;
case 0x44a91a:c.instructions+=2;goto B44a91a;
case 0x44a91c:c.instructions+=1;goto B44a91c;
case 0x44a922:goto L44a922;
case 0x44a927:c.instructions+=2;goto B44a927;
case 0x44a92c:c.instructions+=1;goto B44a92c;
case 0x44a931:goto L44a931;
case 0x44a933:c.instructions+=3;goto B44a933;
case 0x44a935:c.instructions+=2;goto B44a935;
case 0x44a93a:c.instructions+=1;goto B44a93a;
case 0x44a93f:goto L44a93f;
case 0x44a941:c.instructions+=3;goto B44a941;
case 0x44a944:c.instructions+=2;goto B44a944;
case 0x44a946:c.instructions+=1;goto B44a946;
case 0x44a948:goto L44a948;
case 0x44a952:c.instructions+=1;goto B44a952;
case 0x44a957:goto L44a957;
case 0x44a95c:c.instructions+=2;goto B44a95c;
case 0x44a95d:c.instructions+=1;goto B44a95d;
case 0x44a962:goto L44a962;
case 0x44a965:c.instructions+=3;goto B44a965;
case 0x44a968:c.instructions+=2;goto B44a968;
case 0x44a96a:c.instructions+=1;goto B44a96a;
case 0x44a96c:goto L44a96c;
case 0x44a970:goto L44a970;
case 0x44a973:c.instructions+=5;goto B44a973;
case 0x44a977:c.instructions+=4;goto B44a977;
case 0x44a97b:c.instructions+=3;goto B44a97b;
case 0x44a97d:c.instructions+=2;goto B44a97d;
case 0x44a97f:c.instructions+=1;goto B44a97f;
case 0x44a981:goto L44a981;
case 0x44a983:c.instructions+=5;goto B44a983;
case 0x44a987:c.instructions+=4;goto B44a987;
case 0x44a988:c.instructions+=3;goto B44a988;
case 0x44a98e:c.instructions+=2;goto B44a98e;
case 0x44a98f:c.instructions+=1;goto B44a98f;
case 0x44a994:goto L44a994;
case 0x44a998:c.instructions+=10;goto B44a998;
case 0x44a99c:c.instructions+=9;goto B44a99c;
case 0x44a99d:c.instructions+=8;goto B44a99d;
case 0x44a99f:c.instructions+=7;goto B44a99f;
case 0x44a9a0:c.instructions+=6;goto B44a9a0;
case 0x44a9a3:c.instructions+=5;goto B44a9a3;
case 0x44a9a4:c.instructions+=4;goto B44a9a4;
case 0x44a9a5:c.instructions+=3;goto B44a9a5;
case 0x44a9aa:c.instructions+=2;goto B44a9aa;
case 0x44a9ab:c.instructions+=1;goto B44a9ab;
case 0x44a9b0:goto L44a9b0;
case 0x44a9b3:c.instructions+=3;goto B44a9b3;
case 0x44a9b4:c.instructions+=2;goto B44a9b4;
case 0x44a9b6:c.instructions+=1;goto B44a9b6;
case 0x44a9bb:goto L44a9bb;
case 0x44a9c0:c.instructions+=2;goto B44a9c0;
case 0x44a9c1:c.instructions+=1;goto B44a9c1;
case 0x44a9c6:goto L44a9c6;
case 0x44a9c9:goto L44a9c9;
case 0x44a9cd:c.instructions+=6;goto B44a9cd;
case 0x44a9d0:c.instructions+=5;goto B44a9d0;
case 0x44a9d1:c.instructions+=4;goto B44a9d1;
case 0x44a9d4:c.instructions+=3;goto B44a9d4;
case 0x44a9d6:c.instructions+=2;goto B44a9d6;
case 0x44a9da:c.instructions+=1;goto B44a9da;
case 0x44a9dc:goto L44a9dc;
case 0x44a9de:goto L44a9de;
case 0x44a9e3:c.instructions+=2;goto B44a9e3;
case 0x44a9e4:c.instructions+=1;goto B44a9e4;
case 0x44a9e9:goto L44a9e9;
case 0x44a9ea:c.instructions+=1;goto B44a9ea;
case 0x44a9ef:goto L44a9ef;
case 0x44a9f5:c.instructions+=3;goto B44a9f5;
case 0x44a9f8:c.instructions+=2;goto B44a9f8;
case 0x44a9fb:c.instructions+=1;goto B44a9fb;
case 0x44a9fd:goto L44a9fd;
case 0x44aa03:goto L44aa03;
case 0x44aa07:goto L44aa07;
case 0x44aa0a:c.instructions+=5;goto B44aa0a;
case 0x44aa0d:c.instructions+=4;goto B44aa0d;
case 0x44aa0f:c.instructions+=3;goto B44aa0f;
case 0x44aa11:c.instructions+=2;goto B44aa11;
case 0x44aa15:c.instructions+=1;goto B44aa15;
case 0x44aa1b:goto L44aa1b;
case 0x44aa1e:c.instructions+=1;goto B44aa1e;
case 0x44aa20:goto L44aa20;
case 0x44aa22:c.instructions+=1;goto B44aa22;
case 0x44aa24:goto L44aa24;
case 0x44aa25:goto L44aa25;
case 0x44aa28:c.instructions+=2;goto B44aa28;
case 0x44aa29:c.instructions+=1;goto B44aa29;
case 0x44aa2b:goto L44aa2b;
case 0x44aa2d:c.instructions+=2;goto B44aa2d;
case 0x44aa31:c.instructions+=1;goto B44aa31;
case 0x44aa37:goto L44aa37;
case 0x44aa3a:c.instructions+=2;goto B44aa3a;
case 0x44aa3c:c.instructions+=1;goto B44aa3c;
case 0x44aa42:goto L44aa42;
case 0x44aa47:c.instructions+=2;goto B44aa47;
case 0x44aa4c:c.instructions+=1;goto B44aa4c;
case 0x44aa51:goto L44aa51;
case 0x44aa53:c.instructions+=3;goto B44aa53;
case 0x44aa55:c.instructions+=2;goto B44aa55;
case 0x44aa5a:c.instructions+=1;goto B44aa5a;
case 0x44aa5f:goto L44aa5f;
case 0x44aa61:c.instructions+=3;goto B44aa61;
case 0x44aa64:c.instructions+=2;goto B44aa64;
case 0x44aa66:c.instructions+=1;goto B44aa66;
case 0x44aa68:goto L44aa68;
case 0x44aa69:c.instructions+=6;goto B44aa69;
case 0x44aa73:c.instructions+=5;goto B44aa73;
case 0x44aa74:c.instructions+=4;goto B44aa74;
case 0x44aa75:c.instructions+=3;goto B44aa75;
case 0x44aa76:c.instructions+=2;goto B44aa76;
case 0x44aa79:c.instructions+=1;goto B44aa79;
case 0x44aa7a:goto L44aa7a;
case 0x44aa7f:c.instructions+=2;goto B44aa7f;
case 0x44aa80:c.instructions+=1;goto B44aa80;
case 0x44aa85:goto L44aa85;
case 0x44aa88:c.instructions+=3;goto B44aa88;
case 0x44aa8b:c.instructions+=2;goto B44aa8b;
case 0x44aa8d:c.instructions+=1;goto B44aa8d;
case 0x44aa93:goto L44aa93;
case 0x44aa97:c.instructions+=1;goto B44aa97;
case 0x44aaa0:goto L44aaa0;
case 0x44aaa3:c.instructions+=5;goto B44aaa3;
case 0x44aaa7:c.instructions+=4;goto B44aaa7;
case 0x44aaab:c.instructions+=3;goto B44aaab;
case 0x44aaad:c.instructions+=2;goto B44aaad;
case 0x44aaaf:c.instructions+=1;goto B44aaaf;
case 0x44aab1:goto L44aab1;
case 0x44aab3:c.instructions+=3;goto B44aab3;
case 0x44aab5:c.instructions+=2;goto B44aab5;
case 0x44aaba:c.instructions+=1;goto B44aaba;
case 0x44aac0:goto L44aac0;
case 0x44aac2:c.instructions+=1;goto B44aac2;
case 0x44aac8:goto L44aac8;
case 0x44aacb:c.instructions+=3;goto B44aacb;
case 0x44aacc:c.instructions+=2;goto B44aacc;
case 0x44aad1:c.instructions+=1;goto B44aad1;
case 0x44aad3:goto L44aad3;
case 0x44aad8:goto L44aad8;
case 0x44aad9:c.instructions+=8;goto B44aad9;
case 0x44aadd:c.instructions+=7;goto B44aadd;
case 0x44aade:c.instructions+=6;goto B44aade;
case 0x44aae1:c.instructions+=5;goto B44aae1;
case 0x44aae2:c.instructions+=4;goto B44aae2;
case 0x44aae3:c.instructions+=3;goto B44aae3;
case 0x44aae8:c.instructions+=2;goto B44aae8;
case 0x44aae9:c.instructions+=1;goto B44aae9;
case 0x44aaee:goto L44aaee;
case 0x44aaf1:c.instructions+=3;goto B44aaf1;
case 0x44aaf2:c.instructions+=2;goto B44aaf2;
case 0x44aaf4:c.instructions+=1;goto B44aaf4;
case 0x44aaf9:goto L44aaf9;
case 0x44aafe:c.instructions+=2;goto B44aafe;
case 0x44aaff:c.instructions+=1;goto B44aaff;
case 0x44ab04:goto L44ab04;
case 0x44ab07:goto L44ab07;
case 0x44ab0b:c.instructions+=6;goto B44ab0b;
case 0x44ab0e:c.instructions+=5;goto B44ab0e;
case 0x44ab0f:c.instructions+=4;goto B44ab0f;
case 0x44ab12:c.instructions+=3;goto B44ab12;
case 0x44ab14:c.instructions+=2;goto B44ab14;
case 0x44ab18:c.instructions+=1;goto B44ab18;
case 0x44ab1a:goto L44ab1a;
case 0x44ab1c:goto L44ab1c;
case 0x44ab21:c.instructions+=2;goto B44ab21;
case 0x44ab22:c.instructions+=1;goto B44ab22;
case 0x44ab27:goto L44ab27;
case 0x44ab28:c.instructions+=1;goto B44ab28;
case 0x44ab2d:goto L44ab2d;
case 0x44ab33:c.instructions+=3;goto B44ab33;
case 0x44ab36:c.instructions+=2;goto B44ab36;
case 0x44ab39:c.instructions+=1;goto B44ab39;
case 0x44ab3b:goto L44ab3b;
case 0x44ab41:goto L44ab41;
case 0x44ab45:goto L44ab45;
case 0x44ab46:c.instructions+=5;goto B44ab46;
case 0x44ab47:c.instructions+=4;goto B44ab47;
case 0x44ab48:c.instructions+=3;goto B44ab48;
case 0x44ab49:c.instructions+=2;goto B44ab49;
case 0x44ab4c:c.instructions+=1;goto B44ab4c;
case 0x44ab4d:goto L44ab4d;
case 0x44ab50:c.instructions+=2;goto B44ab50;
case 0x44ab57:c.instructions+=1;goto B44ab57;
case 0x44ab60:goto L44ab60;
case 0x44ab64:c.instructions+=3;goto B44ab64;
case 0x44ab66:c.instructions+=2;goto B44ab66;
case 0x44ab6b:c.instructions+=1;goto B44ab6b;
case 0x44ab6d:goto L44ab6d;
case 0x44ab72:c.instructions+=1;goto B44ab72;
case 0x44ab74:goto L44ab74;
case 0x44ab75:c.instructions+=2;goto B44ab75;
case 0x44ab7a:c.instructions+=1;goto B44ab7a;
case 0x44ab7f:goto L44ab7f;
case 0x44ab84:c.instructions+=1;goto B44ab84;
case 0x44ab85:goto L44ab85;
case 0x44ab87:c.instructions+=1;goto B44ab87;
case 0x44ab90:goto L44ab90;
case 0x44ab94:c.instructions+=11;goto B44ab94;
case 0x44ab98:c.instructions+=10;goto B44ab98;
case 0x44ab99:c.instructions+=9;goto B44ab99;
case 0x44ab9b:c.instructions+=8;goto B44ab9b;
case 0x44ab9d:c.instructions+=7;goto B44ab9d;
case 0x44aba0:c.instructions+=6;goto B44aba0;
case 0x44aba6:c.instructions+=5;goto B44aba6;
case 0x44aba9:c.instructions+=4;goto B44aba9;
case 0x44abac:c.instructions+=3;goto B44abac;
case 0x44abaf:c.instructions+=2;goto B44abaf;
case 0x44abb2:c.instructions+=1;goto B44abb2;
case 0x44abb4:goto L44abb4;
case 0x44abb7:c.instructions+=4;goto B44abb7;
case 0x44abba:c.instructions+=3;goto B44abba;
case 0x44abbd:c.instructions+=2;goto B44abbd;
case 0x44abc0:c.instructions+=1;goto B44abc0;
case 0x44abc2:goto L44abc2;
case 0x44abc3:c.instructions+=1;goto B44abc3;
case 0x44abc8:goto L44abc8;
case 0x44abcb:c.instructions+=12;goto B44abcb;
case 0x44abce:c.instructions+=11;goto B44abce;
case 0x44abd1:c.instructions+=10;goto B44abd1;
case 0x44abdb:c.instructions+=9;goto B44abdb;
case 0x44abde:c.instructions+=8;goto B44abde;
case 0x44abe4:c.instructions+=7;goto B44abe4;
case 0x44abe7:c.instructions+=6;goto B44abe7;
case 0x44abe9:c.instructions+=5;goto B44abe9;
case 0x44abef:c.instructions+=4;goto B44abef;
case 0x44abf2:c.instructions+=3;goto B44abf2;
case 0x44abf4:c.instructions+=2;goto B44abf4;
case 0x44abf7:c.instructions+=1;goto B44abf7;
case 0x44abfc:goto L44abfc;
case 0x44ac00:c.instructions+=1;goto B44ac00;
case 0x44ac02:goto L44ac02;
case 0x44ac08:goto L44ac08;
case 0x44ac0a:c.instructions+=2;goto B44ac0a;
case 0x44ac0b:c.instructions+=1;goto B44ac0b;
case 0x44ac10:goto L44ac10;
case 0x44ac11:c.instructions+=10;goto B44ac11;
case 0x44ac13:c.instructions+=9;goto B44ac13;
case 0x44ac16:c.instructions+=8;goto B44ac16;
case 0x44ac1c:c.instructions+=7;goto B44ac1c;
case 0x44ac23:c.instructions+=6;goto B44ac23;
case 0x44ac24:c.instructions+=5;goto B44ac24;
case 0x44ac25:c.instructions+=4;goto B44ac25;
case 0x44ac26:c.instructions+=3;goto B44ac26;
case 0x44ac28:c.instructions+=2;goto B44ac28;
case 0x44ac2c:c.instructions+=1;goto B44ac2c;
case 0x44ac2e:goto L44ac2e;
case 0x44ac35:goto L44ac35;
case 0x44ac37:c.instructions+=2;goto B44ac37;
case 0x44ac39:c.instructions+=1;goto B44ac39;
case 0x44ac3c:goto L44ac3c;
case 0x44ac42:c.instructions+=6;goto B44ac42;
case 0x44ac44:c.instructions+=5;goto B44ac44;
case 0x44ac47:c.instructions+=4;goto B44ac47;
case 0x44ac49:c.instructions+=3;goto B44ac49;
case 0x44ac4d:c.instructions+=2;goto B44ac4d;
case 0x44ac55:c.instructions+=1;goto B44ac55;
case 0x44ac5b:goto L44ac5b;
case 0x44ac63:c.instructions+=1;goto B44ac63;
case 0x44ac65:goto L44ac65;
case 0x44ac69:c.instructions+=1;goto B44ac69;
case 0x44ac70:goto L44ac70;
case 0x44ac74:c.instructions+=3;goto B44ac74;
case 0x44ac77:c.instructions+=2;goto B44ac77;
case 0x44ac79:c.instructions+=1;goto B44ac79;
case 0x44ac7f:goto L44ac7f;
case 0x44ac82:c.instructions+=2;goto B44ac82;
case 0x44ac84:c.instructions+=1;goto B44ac84;
case 0x44ac86:goto L44ac86;
case 0x44ac89:c.instructions+=2;goto B44ac89;
case 0x44ac8d:c.instructions+=1;goto B44ac8d;
case 0x44ac93:goto L44ac93;
case 0x44ac99:c.instructions+=2;goto B44ac99;
case 0x44ac9b:c.instructions+=1;goto B44ac9b;
case 0x44aca1:goto L44aca1;
case 0x44aca4:c.instructions+=4;goto B44aca4;
case 0x44aca9:c.instructions+=3;goto B44aca9;
case 0x44acab:c.instructions+=2;goto B44acab;
case 0x44acb1:c.instructions+=1;goto B44acb1;
case 0x44acb7:goto L44acb7;
case 0x44acba:c.instructions+=25;goto B44acba;
case 0x44acbd:c.instructions+=24;goto B44acbd;
case 0x44acbf:c.instructions+=23;goto B44acbf;
case 0x44acc2:c.instructions+=22;goto B44acc2;
case 0x44acc6:c.instructions+=21;goto B44acc6;
case 0x44acc9:c.instructions+=20;goto B44acc9;
case 0x44accc:c.instructions+=19;goto B44accc;
case 0x44acd0:c.instructions+=18;goto B44acd0;
case 0x44acd3:c.instructions+=17;goto B44acd3;
case 0x44acd6:c.instructions+=16;goto B44acd6;
case 0x44acda:c.instructions+=15;goto B44acda;
case 0x44acde:c.instructions+=14;goto B44acde;
case 0x44ace2:c.instructions+=13;goto B44ace2;
case 0x44ace6:c.instructions+=12;goto B44ace6;
case 0x44ace8:c.instructions+=11;goto B44ace8;
case 0x44acec:c.instructions+=10;goto B44acec;
case 0x44acf0:c.instructions+=9;goto B44acf0;
case 0x44acf2:c.instructions+=8;goto B44acf2;
case 0x44acf6:c.instructions+=7;goto B44acf6;
case 0x44acfc:c.instructions+=6;goto B44acfc;
case 0x44ad02:c.instructions+=5;goto B44ad02;
case 0x44ad04:c.instructions+=4;goto B44ad04;
case 0x44ad06:c.instructions+=3;goto B44ad06;
case 0x44ad08:c.instructions+=2;goto B44ad08;
case 0x44ad0b:c.instructions+=1;goto B44ad0b;
case 0x44ad11:goto L44ad11;
case 0x44ad13:c.instructions+=1;goto B44ad13;
case 0x44ad19:goto L44ad19;
case 0x44ad1e:c.instructions+=1;goto B44ad1e;
case 0x44ad23:goto L44ad23;
case 0x44ad25:c.instructions+=1;goto B44ad25;
case 0x44ad2b:goto L44ad2b;
case 0x44ad2d:c.instructions+=1;goto B44ad2d;
case 0x44ad32:goto L44ad32;
case 0x44ad35:c.instructions+=25;goto B44ad35;
case 0x44ad38:c.instructions+=24;goto B44ad38;
case 0x44ad3b:c.instructions+=23;goto B44ad3b;
case 0x44ad3e:c.instructions+=22;goto B44ad3e;
case 0x44ad40:c.instructions+=21;goto B44ad40;
case 0x44ad43:c.instructions+=20;goto B44ad43;
case 0x44ad47:c.instructions+=19;goto B44ad47;
case 0x44ad49:c.instructions+=18;goto B44ad49;
case 0x44ad4d:c.instructions+=17;goto B44ad4d;
case 0x44ad51:c.instructions+=16;goto B44ad51;
case 0x44ad55:c.instructions+=15;goto B44ad55;
case 0x44ad59:c.instructions+=14;goto B44ad59;
case 0x44ad5b:c.instructions+=13;goto B44ad5b;
case 0x44ad5d:c.instructions+=12;goto B44ad5d;
case 0x44ad5f:c.instructions+=11;goto B44ad5f;
case 0x44ad61:c.instructions+=10;goto B44ad61;
case 0x44ad63:c.instructions+=9;goto B44ad63;
case 0x44ad65:c.instructions+=8;goto B44ad65;
case 0x44ad6b:c.instructions+=7;goto B44ad6b;
case 0x44ad71:c.instructions+=6;goto B44ad71;
case 0x44ad73:c.instructions+=5;goto B44ad73;
case 0x44ad75:c.instructions+=4;goto B44ad75;
case 0x44ad77:c.instructions+=3;goto B44ad77;
case 0x44ad7a:c.instructions+=2;goto B44ad7a;
case 0x44ad7c:c.instructions+=1;goto B44ad7c;
case 0x44ad82:goto L44ad82;
case 0x44ad86:c.instructions+=4;goto B44ad86;
case 0x44ad87:c.instructions+=3;goto B44ad87;
case 0x44ad8b:c.instructions+=2;goto B44ad8b;
case 0x44ad8c:c.instructions+=1;goto B44ad8c;
case 0x44ad91:goto L44ad91;
case 0x44ad95:c.instructions+=4;goto B44ad95;
case 0x44ad96:c.instructions+=3;goto B44ad96;
case 0x44ad9a:c.instructions+=2;goto B44ad9a;
case 0x44ad9b:c.instructions+=1;goto B44ad9b;
case 0x44ada0:goto L44ada0;
case 0x44ada4:c.instructions+=12;goto B44ada4;
case 0x44ada8:c.instructions+=11;goto B44ada8;
case 0x44adab:c.instructions+=10;goto B44adab;
case 0x44adaf:c.instructions+=9;goto B44adaf;
case 0x44adb3:c.instructions+=8;goto B44adb3;
case 0x44adb5:c.instructions+=7;goto B44adb5;
case 0x44adb9:c.instructions+=6;goto B44adb9;
case 0x44adbd:c.instructions+=5;goto B44adbd;
case 0x44adbf:c.instructions+=4;goto B44adbf;
case 0x44adc5:c.instructions+=3;goto B44adc5;
case 0x44adc7:c.instructions+=2;goto B44adc7;
case 0x44adca:c.instructions+=1;goto B44adca;
case 0x44adcc:goto L44adcc;
case 0x44adce:c.instructions+=1;goto B44adce;
case 0x44add3:goto L44add3;
case 0x44add4:c.instructions+=4;goto B44add4;
case 0x44addb:c.instructions+=3;goto B44addb;
case 0x44addc:c.instructions+=2;goto B44addc;
case 0x44adde:c.instructions+=1;goto B44adde;
case 0x44ade3:goto L44ade3;
case 0x44adea:c.instructions+=4;goto B44adea;
case 0x44adeb:c.instructions+=3;goto B44adeb;
case 0x44adf2:c.instructions+=2;goto B44adf2;
case 0x44adf3:c.instructions+=1;goto B44adf3;
case 0x44adf8:goto L44adf8;
case 0x44adff:c.instructions+=12;goto B44adff;
case 0x44ae03:c.instructions+=11;goto B44ae03;
case 0x44ae06:c.instructions+=10;goto B44ae06;
case 0x44ae0d:c.instructions+=9;goto B44ae0d;
case 0x44ae11:c.instructions+=8;goto B44ae11;
case 0x44ae13:c.instructions+=7;goto B44ae13;
case 0x44ae17:c.instructions+=6;goto B44ae17;
case 0x44ae1e:c.instructions+=5;goto B44ae1e;
case 0x44ae20:c.instructions+=4;goto B44ae20;
case 0x44ae26:c.instructions+=3;goto B44ae26;
case 0x44ae28:c.instructions+=2;goto B44ae28;
case 0x44ae2b:c.instructions+=1;goto B44ae2b;
case 0x44ae31:goto L44ae31;
case 0x44ae35:c.instructions+=5;goto B44ae35;
case 0x44ae36:c.instructions+=4;goto B44ae36;
case 0x44ae3d:c.instructions+=3;goto B44ae3d;
case 0x44ae3e:c.instructions+=2;goto B44ae3e;
case 0x44ae40:c.instructions+=1;goto B44ae40;
case 0x44ae45:goto L44ae45;
case 0x44ae47:c.instructions+=1;goto B44ae47;
case 0x44ae4c:goto L44ae4c;
case 0x44ae50:c.instructions+=27;goto B44ae50;
case 0x44ae52:c.instructions+=26;goto B44ae52;
case 0x44ae55:c.instructions+=25;goto B44ae55;
case 0x44ae59:c.instructions+=24;goto B44ae59;
case 0x44ae5c:c.instructions+=23;goto B44ae5c;
case 0x44ae60:c.instructions+=22;goto B44ae60;
case 0x44ae62:c.instructions+=21;goto B44ae62;
case 0x44ae64:c.instructions+=20;goto B44ae64;
case 0x44ae66:c.instructions+=19;goto B44ae66;
case 0x44ae68:c.instructions+=18;goto B44ae68;
case 0x44ae6a:c.instructions+=17;goto B44ae6a;
case 0x44ae6c:c.instructions+=16;goto B44ae6c;
case 0x44ae6e:c.instructions+=15;goto B44ae6e;
case 0x44ae70:c.instructions+=14;goto B44ae70;
case 0x44ae72:c.instructions+=13;goto B44ae72;
case 0x44ae74:c.instructions+=12;goto B44ae74;
case 0x44ae76:c.instructions+=11;goto B44ae76;
case 0x44ae78:c.instructions+=10;goto B44ae78;
case 0x44ae7e:c.instructions+=9;goto B44ae7e;
case 0x44ae80:c.instructions+=8;goto B44ae80;
case 0x44ae82:c.instructions+=7;goto B44ae82;
case 0x44ae86:c.instructions+=6;goto B44ae86;
case 0x44ae88:c.instructions+=5;goto B44ae88;
case 0x44ae8c:c.instructions+=4;goto B44ae8c;
case 0x44ae90:c.instructions+=3;goto B44ae90;
case 0x44ae92:c.instructions+=2;goto B44ae92;
case 0x44ae95:c.instructions+=1;goto B44ae95;
case 0x44ae9b:goto L44ae9b;
case 0x44ae9c:c.instructions+=7;goto B44ae9c;
case 0x44aea2:c.instructions+=6;goto B44aea2;
case 0x44aea3:c.instructions+=5;goto B44aea3;
case 0x44aeaa:c.instructions+=4;goto B44aeaa;
case 0x44aeab:c.instructions+=3;goto B44aeab;
case 0x44aeb3:c.instructions+=2;goto B44aeb3;
case 0x44aebb:c.instructions+=1;goto B44aebb;
case 0x44aec0:goto L44aec0;
case 0x44aec3:c.instructions+=1;goto B44aec3;
case 0x44aec5:goto L44aec5;
case 0x44aec8:c.instructions+=1;goto B44aec8;
case 0x44aeca:goto L44aeca;
case 0x44aed1:c.instructions+=1;goto B44aed1;
case 0x44aed3:goto L44aed3;
case 0x44aed7:goto L44aed7;
case 0x44aeda:c.instructions+=1;goto B44aeda;
case 0x44aedc:goto L44aedc;
case 0x44aee3:c.instructions+=1;goto B44aee3;
case 0x44aee5:goto L44aee5;
case 0x44aee9:goto L44aee9;
case 0x44aeec:c.instructions+=1;goto B44aeec;
case 0x44aeee:goto L44aeee;
case 0x44aef5:c.instructions+=1;goto B44aef5;
case 0x44aef7:goto L44aef7;
case 0x44aefb:goto L44aefb;
case 0x44aeff:c.instructions+=9;goto B44aeff;
case 0x44af03:c.instructions+=8;goto B44af03;
case 0x44af04:c.instructions+=7;goto B44af04;
case 0x44af0b:c.instructions+=6;goto B44af0b;
case 0x44af0f:c.instructions+=5;goto B44af0f;
case 0x44af10:c.instructions+=4;goto B44af10;
case 0x44af14:c.instructions+=3;goto B44af14;
case 0x44af18:c.instructions+=2;goto B44af18;
case 0x44af19:c.instructions+=1;goto B44af19;
case 0x44af1e:goto L44af1e;
case 0x44af21:c.instructions+=2;goto B44af21;
case 0x44af23:c.instructions+=1;goto B44af23;
case 0x44af25:goto L44af25;
case 0x44af29:c.instructions+=4;goto B44af29;
case 0x44af2d:c.instructions+=3;goto B44af2d;
case 0x44af2f:c.instructions+=2;goto B44af2f;
case 0x44af32:c.instructions+=1;goto B44af32;
case 0x44af34:goto L44af34;
case 0x44af38:c.instructions+=1;goto B44af38;
case 0x44af3a:goto L44af3a;
case 0x44af3e:goto L44af3e;
case 0x44af40:c.instructions+=2;goto B44af40;
case 0x44af44:c.instructions+=1;goto B44af44;
case 0x44af46:goto L44af46;
case 0x44af4a:c.instructions+=4;goto B44af4a;
case 0x44af4e:c.instructions+=3;goto B44af4e;
case 0x44af50:c.instructions+=2;goto B44af50;
case 0x44af53:c.instructions+=1;goto B44af53;
case 0x44af55:goto L44af55;
case 0x44af59:c.instructions+=1;goto B44af59;
case 0x44af5b:goto L44af5b;
case 0x44af5f:goto L44af5f;
case 0x44af60:c.instructions+=3;goto B44af60;
case 0x44af64:c.instructions+=2;goto B44af64;
case 0x44af67:c.instructions+=1;goto B44af67;
case 0x44af6d:goto L44af6d;
case 0x44af73:c.instructions+=11;goto B44af73;
case 0x44af76:c.instructions+=10;goto B44af76;
case 0x44af7a:c.instructions+=9;goto B44af7a;
case 0x44af7e:c.instructions+=8;goto B44af7e;
case 0x44af82:c.instructions+=7;goto B44af82;
case 0x44af88:c.instructions+=6;goto B44af88;
case 0x44af8b:c.instructions+=5;goto B44af8b;
case 0x44af8f:c.instructions+=4;goto B44af8f;
case 0x44af91:c.instructions+=3;goto B44af91;
case 0x44af93:c.instructions+=2;goto B44af93;
case 0x44af96:c.instructions+=1;goto B44af96;
case 0x44af98:goto L44af98;
case 0x44af9a:c.instructions+=1;goto B44af9a;
case 0x44af9e:goto L44af9e;
case 0x44afa2:c.instructions+=4;goto B44afa2;
case 0x44afa4:c.instructions+=3;goto B44afa4;
case 0x44afa6:c.instructions+=2;goto B44afa6;
case 0x44afa9:c.instructions+=1;goto B44afa9;
case 0x44afab:goto L44afab;
case 0x44afad:c.instructions+=1;goto B44afad;
case 0x44afb1:goto L44afb1;
case 0x44afb4:c.instructions+=3;goto B44afb4;
case 0x44afb6:c.instructions+=2;goto B44afb6;
case 0x44afb9:c.instructions+=1;goto B44afb9;
case 0x44afbb:goto L44afbb;
case 0x44afbf:goto L44afbf;
case 0x44afc5:goto L44afc5;
case 0x44afc9:c.instructions+=8;goto B44afc9;
case 0x44afcd:c.instructions+=7;goto B44afcd;
case 0x44afd0:c.instructions+=6;goto B44afd0;
case 0x44afd1:c.instructions+=5;goto B44afd1;
case 0x44afd4:c.instructions+=4;goto B44afd4;
case 0x44afd6:c.instructions+=3;goto B44afd6;
case 0x44afda:c.instructions+=2;goto B44afda;
case 0x44afde:c.instructions+=1;goto B44afde;
case 0x44afe4:goto L44afe4;
case 0x44afe6:c.instructions+=6;goto B44afe6;
case 0x44afe7:c.instructions+=5;goto B44afe7;
case 0x44afe8:c.instructions+=4;goto B44afe8;
case 0x44afe9:c.instructions+=3;goto B44afe9;
case 0x44afeb:c.instructions+=2;goto B44afeb;
case 0x44afec:c.instructions+=1;goto B44afec;
case 0x44afef:goto L44afef;
case 0x44aff3:c.instructions+=2;goto B44aff3;
case 0x44aff9:c.instructions+=1;goto B44aff9;
case 0x44affb:goto L44affb;
default:missing_instruction(c.pc);}
B44a001:L44a001:{c.instructions+=16;NFSU2_TR(0x44a001);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a005:{NFSU2_TR(0x44a005);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a007:{NFSU2_TR(0x44a007);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44a00b:{NFSU2_TR(0x44a00b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a00f:{NFSU2_TR(0x44a00f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a013:{NFSU2_TR(0x44a013);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a017:{NFSU2_TR(0x44a017);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44a019:{NFSU2_TR(0x44a019);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44a01b:{NFSU2_TR(0x44a01b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a01f:{NFSU2_TR(0x44a01f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a021:{NFSU2_TR(0x44a021);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B44a024:{NFSU2_TR(0x44a024);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a028:{NFSU2_TR(0x44a028);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B44a029:{NFSU2_TR(0x44a029);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B44a02b:{NFSU2_TR(0x44a02b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a02d:{NFSU2_TR(0x44a02d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a033;}}
}
B44a02f:L44a02f:{c.instructions+=2;NFSU2_TR(0x44a02f);
__builtin_memmove((R+0),(R+4),4);
}
B44a031:{NFSU2_TR(0x44a031);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44a033:L44a033:{c.instructions+=1;NFSU2_TR(0x44a033);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44a048;}}
}
B44a035:L44a035:{c.instructions+=4;NFSU2_TR(0x44a035);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44a03b:{NFSU2_TR(0x44a03b);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a042:{NFSU2_TR(0x44a042);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a046:{NFSU2_TR(0x44a046);
{goto L44a050;}
}
B44a048:L44a048:{c.instructions+=1;NFSU2_TR(0x44a048);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a050:L44a050:{c.instructions+=4;NFSU2_TR(0x44a050);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a054:{NFSU2_TR(0x44a054);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a055:{NFSU2_TR(0x44a055);
__builtin_memmove((R+4),(R+24),4);
}
B44a057:{NFSU2_TR(0x44a057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a05cull));
TAIL_STATIC(0x443270u,443);
}
B44a05c:L44a05c:{c.instructions+=8;NFSU2_TR(0x44a05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44a062:{NFSU2_TR(0x44a062);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a065:{NFSU2_TR(0x44a065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a066:{NFSU2_TR(0x44a066);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x90ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a06c:{NFSU2_TR(0x44a06c);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44a073:{NFSU2_TR(0x44a073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a074:{NFSU2_TR(0x44a074);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a075:{NFSU2_TR(0x44a075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a07aull));
TAIL_STATIC(0x401340u,401);
}
B44a07a:L44a07a:{c.instructions+=5;NFSU2_TR(0x44a07a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44a081:{NFSU2_TR(0x44a081);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a082:{NFSU2_TR(0x44a082);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44a086:{NFSU2_TR(0x44a086);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a087:{NFSU2_TR(0x44a087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a08cull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44a08c:L44a08c:{c.instructions+=34;NFSU2_TR(0x44a08c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a090:{NFSU2_TR(0x44a090);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a094:{NFSU2_TR(0x44a094);
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
B44a097:{NFSU2_TR(0x44a097);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a09b:{NFSU2_TR(0x44a09b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a09f:{NFSU2_TR(0x44a09f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0a1:{NFSU2_TR(0x44a0a1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0a5:{NFSU2_TR(0x44a0a5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0a9:{NFSU2_TR(0x44a0a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0ab:{NFSU2_TR(0x44a0ab);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44a0af:{NFSU2_TR(0x44a0af);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0b3:{NFSU2_TR(0x44a0b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0b7:{NFSU2_TR(0x44a0b7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0bb:{NFSU2_TR(0x44a0bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0bf:{NFSU2_TR(0x44a0bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0c1:{NFSU2_TR(0x44a0c1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0c5:{NFSU2_TR(0x44a0c5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0c9:{NFSU2_TR(0x44a0c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0cb:{NFSU2_TR(0x44a0cb);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44a0cf:{NFSU2_TR(0x44a0cf);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a0d3:{NFSU2_TR(0x44a0d3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0d7:{NFSU2_TR(0x44a0d7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0db:{NFSU2_TR(0x44a0db);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0df:{NFSU2_TR(0x44a0df);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0e3:{NFSU2_TR(0x44a0e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0e5:{NFSU2_TR(0x44a0e5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0e9:{NFSU2_TR(0x44a0e9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44a0ed:{NFSU2_TR(0x44a0ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44a0ef:{NFSU2_TR(0x44a0ef);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44a0f3:{NFSU2_TR(0x44a0f3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a0f7:{NFSU2_TR(0x44a0f7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a0fb:{NFSU2_TR(0x44a0fb);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a0ff:{NFSU2_TR(0x44a0ff);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a103:{NFSU2_TR(0x44a103);
{goto L44a10d;}
}
B44a105:L44a105:{c.instructions+=2;NFSU2_TR(0x44a105);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a109:{NFSU2_TR(0x44a109);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a10d:L44a10d:{c.instructions+=19;NFSU2_TR(0x44a10d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44a110:{NFSU2_TR(0x44a110);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44a112:{NFSU2_TR(0x44a112);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a116:{NFSU2_TR(0x44a116);
{u32 ea_=u32(r4(R+12)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a11c:{NFSU2_TR(0x44a11c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a120:{NFSU2_TR(0x44a120);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44a126:{NFSU2_TR(0x44a126);
{u32 ea_=u32(r4(R+12)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a12c:{NFSU2_TR(0x44a12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a130:{NFSU2_TR(0x44a130);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a136:{NFSU2_TR(0x44a136);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a13a:{NFSU2_TR(0x44a13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a140:{NFSU2_TR(0x44a140);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a146:{NFSU2_TR(0x44a146);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a14c:{NFSU2_TR(0x44a14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a14d:{NFSU2_TR(0x44a14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a14e:{NFSU2_TR(0x44a14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a14f:{NFSU2_TR(0x44a14f);
__builtin_memmove((R+16),(R+20),4);
}
B44a151:{NFSU2_TR(0x44a151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a152:{NFSU2_TR(0x44a152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a160:L44a160:{c.instructions+=12;NFSU2_TR(0x44a160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a164:{NFSU2_TR(0x44a164);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a165:{NFSU2_TR(0x44a165);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44a169:{NFSU2_TR(0x44a169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a16a:{NFSU2_TR(0x44a16a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44a16e:{NFSU2_TR(0x44a16e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a172:{NFSU2_TR(0x44a172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a173:{NFSU2_TR(0x44a173);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a177:{NFSU2_TR(0x44a177);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a17b:{NFSU2_TR(0x44a17b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a17d:{NFSU2_TR(0x44a17d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a180:{NFSU2_TR(0x44a180);
if(r1(R+514)){{goto L44a191;}}
}
B44a182:L44a182:{c.instructions+=5;NFSU2_TR(0x44a182);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a186:{NFSU2_TR(0x44a186);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a18a:{NFSU2_TR(0x44a18a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a18c:{NFSU2_TR(0x44a18c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a18f:{NFSU2_TR(0x44a18f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44a199;}}
}
B44a191:L44a191:{c.instructions+=5;NFSU2_TR(0x44a191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a192:{NFSU2_TR(0x44a192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a193:{NFSU2_TR(0x44a193);
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
B44a195:{NFSU2_TR(0x44a195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a196:{NFSU2_TR(0x44a196);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a199:L44a199:{c.instructions+=5;NFSU2_TR(0x44a199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a19a:{NFSU2_TR(0x44a19a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a19b:{NFSU2_TR(0x44a19b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a19c:{NFSU2_TR(0x44a19c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a19d:{NFSU2_TR(0x44a19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a1a2ull));
TAIL_STATIC(0x4434f0u,443);
}
B44a1a2:L44a1a2:{c.instructions+=4;NFSU2_TR(0x44a1a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a1a3:{NFSU2_TR(0x44a1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a1a4:{NFSU2_TR(0x44a1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a1a5:{NFSU2_TR(0x44a1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a1b0:L44a1b0:{c.instructions+=8;NFSU2_TR(0x44a1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B44a1b3:{NFSU2_TR(0x44a1b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a1b4:{NFSU2_TR(0x44a1b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a1b5:{NFSU2_TR(0x44a1b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a1b6:{NFSU2_TR(0x44a1b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44a1b8:{NFSU2_TR(0x44a1b8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44a1ba:{NFSU2_TR(0x44a1ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a1c0:{NFSU2_TR(0x44a1c0);
w4(R+20,u32(0x4ull));
}
B44a1c5:L44a1c5:{c.instructions+=6;NFSU2_TR(0x44a1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a1cb:{NFSU2_TR(0x44a1cb);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a1ce:{NFSU2_TR(0x44a1ce);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a1d0:{NFSU2_TR(0x44a1d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a1d2:{NFSU2_TR(0x44a1d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a1d5:{NFSU2_TR(0x44a1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44a264;}}
}
B44a1db:L44a1db:{c.instructions+=10;NFSU2_TR(0x44a1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a1e1:{NFSU2_TR(0x44a1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a1e7:{NFSU2_TR(0x44a1e7);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B44a1e9:{NFSU2_TR(0x44a1e9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B44a1ec:{NFSU2_TR(0x44a1ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a1f2:{NFSU2_TR(0x44a1f2);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a1f7:{NFSU2_TR(0x44a1f7);
u8 U[5];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44a1fb:{NFSU2_TR(0x44a1fb);
u8 U[6];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44a202:{NFSU2_TR(0x44a202);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a206:{NFSU2_TR(0x44a206);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a20e;}}
}
B44a208:L44a208:{c.instructions+=1;NFSU2_TR(0x44a208);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a20e:L44a20e:{c.instructions+=21;NFSU2_TR(0x44a20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a214:{NFSU2_TR(0x44a214);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a21a:{NFSU2_TR(0x44a21a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B44a21c:{NFSU2_TR(0x44a21c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a220:{NFSU2_TR(0x44a220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a222:{NFSU2_TR(0x44a222);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a228:{NFSU2_TR(0x44a228);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B44a22b:{NFSU2_TR(0x44a22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a231:{NFSU2_TR(0x44a231);
__builtin_memmove((R+0),(R+20),4);
}
B44a233:{NFSU2_TR(0x44a233);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a239:{NFSU2_TR(0x44a239);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a23d:{NFSU2_TR(0x44a23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a243:{NFSU2_TR(0x44a243);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B44a245:{NFSU2_TR(0x44a245);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44a249:{NFSU2_TR(0x44a249);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a24d:{NFSU2_TR(0x44a24d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B44a250:{NFSU2_TR(0x44a250);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a256:{NFSU2_TR(0x44a256);
w4(R+20,u32(0x4ull));
}
B44a25b:{NFSU2_TR(0x44a25b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B44a25d:{NFSU2_TR(0x44a25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a263:{NFSU2_TR(0x44a263);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B44a264:L44a264:{c.instructions+=4;NFSU2_TR(0x44a264);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44a265:{NFSU2_TR(0x44a265);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x88ull))));
}
B44a26b:{NFSU2_TR(0x44a26b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44a26e:{NFSU2_TR(0x44a26e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a1c5u);}goto L44a1c5;}}
}
B44a274:L44a274:{c.instructions+=5;NFSU2_TR(0x44a274);
{u32 ea_=u32(r4(R+4)+u32(7284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a27a:{NFSU2_TR(0x44a27a);
{u32 ea_=u32(r4(R+4)+u32(7280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a280:{NFSU2_TR(0x44a280);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a282:{NFSU2_TR(0x44a282);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a285:{NFSU2_TR(0x44a285);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44a2fc;}}
}
B44a287:L44a287:{c.instructions+=10;NFSU2_TR(0x44a287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a28d:{NFSU2_TR(0x44a28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a293:{NFSU2_TR(0x44a293);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B44a295:{NFSU2_TR(0x44a295);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B44a298:{NFSU2_TR(0x44a298);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a29e:{NFSU2_TR(0x44a29e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x11ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a2a3:{NFSU2_TR(0x44a2a3);
u8 U[5];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a2a8:{NFSU2_TR(0x44a2a8);
u8 U[6];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44a2af:{NFSU2_TR(0x44a2af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a2b3:{NFSU2_TR(0x44a2b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a2bb;}}
}
B44a2b5:L44a2b5:{c.instructions+=1;NFSU2_TR(0x44a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a2bb:L44a2bb:{c.instructions+=16;NFSU2_TR(0x44a2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a2c1:{NFSU2_TR(0x44a2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a2c7:{NFSU2_TR(0x44a2c7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B44a2c9:{NFSU2_TR(0x44a2c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a2cd:{NFSU2_TR(0x44a2cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a2cf:{NFSU2_TR(0x44a2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a2d5:{NFSU2_TR(0x44a2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a2db:{NFSU2_TR(0x44a2db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a2df:{NFSU2_TR(0x44a2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a2e5:{NFSU2_TR(0x44a2e5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B44a2e7:{NFSU2_TR(0x44a2e7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44a2e9:{NFSU2_TR(0x44a2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a2ef:{NFSU2_TR(0x44a2ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a2f3:{NFSU2_TR(0x44a2f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B44a2f5:{NFSU2_TR(0x44a2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B44a2fb:{NFSU2_TR(0x44a2fb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B44a2fc:L44a2fc:{c.instructions+=8;NFSU2_TR(0x44a2fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44a2fe:{NFSU2_TR(0x44a2fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a300:{NFSU2_TR(0x44a300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a301:{NFSU2_TR(0x44a301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a302:{NFSU2_TR(0x44a302);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B44a305:{NFSU2_TR(0x44a305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a306:{NFSU2_TR(0x44a306);
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
B44a309:{NFSU2_TR(0x44a309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a310:L44a310:{c.instructions+=14;NFSU2_TR(0x44a310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a311:{NFSU2_TR(0x44a311);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a312:{NFSU2_TR(0x44a312);
__builtin_memmove((R+12),(R+4),4);
}
B44a314:{NFSU2_TR(0x44a314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a31a:{NFSU2_TR(0x44a31a);
__builtin_memmove((R+0),(R+4),4);
}
B44a31c:{NFSU2_TR(0x44a31c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44a322:{NFSU2_TR(0x44a322);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a323:{NFSU2_TR(0x44a323);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a324:{NFSU2_TR(0x44a324);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a327:{NFSU2_TR(0x44a327);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B44a32e:{NFSU2_TR(0x44a32e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a32f:{NFSU2_TR(0x44a32f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44a331:{NFSU2_TR(0x44a331);
__builtin_memmove((R+0),(R+24),4);
}
B44a333:{NFSU2_TR(0x44a333);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B44a335:L44a335:{c.instructions+=3;NFSU2_TR(0x44a335);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B44a337:{NFSU2_TR(0x44a337);
u8 U[11];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(R+8))-u32(r1(U+9))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B44a33a:{NFSU2_TR(0x44a33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a34e;}}
}
B44a33c:L44a33c:{c.instructions+=4;NFSU2_TR(0x44a33c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B44a33d:{NFSU2_TR(0x44a33d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44a33e:{NFSU2_TR(0x44a33e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x88ull))));
}
B44a344:{NFSU2_TR(0x44a344);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a335u);}goto L44a335;}}
}
B44a346:L44a346:{c.instructions+=7;NFSU2_TR(0x44a346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a347:{NFSU2_TR(0x44a347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a348:{NFSU2_TR(0x44a348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a349:{NFSU2_TR(0x44a349);
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
B44a34b:{NFSU2_TR(0x44a34b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a34c:{NFSU2_TR(0x44a34c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a34d:{NFSU2_TR(0x44a34d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a34e:L44a34e:{c.instructions+=7;NFSU2_TR(0x44a34e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44a352:{NFSU2_TR(0x44a352);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44a356:{NFSU2_TR(0x44a356);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a357:{NFSU2_TR(0x44a357);
__builtin_memmove((R+4),(R+12),4);
}
B44a359:{NFSU2_TR(0x44a359);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a35e:{NFSU2_TR(0x44a35e);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w2(U+4,u16(0x8cull));
s2(u32(r4(U+0)),r2(U+4));
}
B44a365:{NFSU2_TR(0x44a365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a36aull));
TAIL_STATIC(0x447970u,447);
}
B44a36a:L44a36a:{c.instructions+=4;NFSU2_TR(0x44a36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a370:{NFSU2_TR(0x44a370);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a376:{NFSU2_TR(0x44a376);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B44a378:{NFSU2_TR(0x44a378);
w4(R+4,u32(0x22ull));
}
B44a37d:L44a37d:{c.instructions+=1;NFSU2_TR(0x44a37d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44a37f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a37du);}goto L44a37d;}
}
B44a37f:L44a37f:{c.instructions+=10;NFSU2_TR(0x44a37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a385:{NFSU2_TR(0x44a385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a386:{NFSU2_TR(0x44a386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a387:{NFSU2_TR(0x44a387);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x88ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x88ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a38c:{NFSU2_TR(0x44a38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a392:{NFSU2_TR(0x44a392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a393:{NFSU2_TR(0x44a393);
w1(R+0,u8(0x1ull));
}
B44a395:{NFSU2_TR(0x44a395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a396:{NFSU2_TR(0x44a396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a397:{NFSU2_TR(0x44a397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a3a0:L44a3a0:{c.instructions+=12;NFSU2_TR(0x44a3a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a3a1:{NFSU2_TR(0x44a3a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a3a2:{NFSU2_TR(0x44a3a2);
__builtin_memmove((R+24),(R+4),4);
}
B44a3a4:{NFSU2_TR(0x44a3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a3aa:{NFSU2_TR(0x44a3aa);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a3b0:{NFSU2_TR(0x44a3b0);
__builtin_memmove((R+0),(R+4),4);
}
B44a3b2:{NFSU2_TR(0x44a3b2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44a3b8:{NFSU2_TR(0x44a3b8);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a3bf:{NFSU2_TR(0x44a3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44a3c2:{NFSU2_TR(0x44a3c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a3c4:{NFSU2_TR(0x44a3c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a3c7:{NFSU2_TR(0x44a3c7);
if(r1(R+514)){{goto L44a3e1;}}
}
B44a3c9:L44a3c9:{c.instructions+=5;NFSU2_TR(0x44a3c9);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44a3cf:{NFSU2_TR(0x44a3cf);
{u32 ea_=u32(r4(R+8)+u32(432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44a3d5:{NFSU2_TR(0x44a3d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44a3d7:{NFSU2_TR(0x44a3d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44a3da:{NFSU2_TR(0x44a3da);
if(r1(R+514)){{goto L44a3e1;}}
}
B44a3dc:L44a3dc:{c.instructions+=4;NFSU2_TR(0x44a3dc);
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
B44a3de:{NFSU2_TR(0x44a3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a3df:{NFSU2_TR(0x44a3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a3e0:{NFSU2_TR(0x44a3e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a3e1:L44a3e1:{c.instructions+=7;NFSU2_TR(0x44a3e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44a3e5:{NFSU2_TR(0x44a3e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44a3e9:{NFSU2_TR(0x44a3e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a3ea:{NFSU2_TR(0x44a3ea);
__builtin_memmove((R+4),(R+24),4);
}
B44a3ec:{NFSU2_TR(0x44a3ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a3f1:{NFSU2_TR(0x44a3f1);
u8 U[6];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
w2(U+4,u16(0xcull));
s2(u32(r4(U+0)),r2(U+4));
}
B44a3f8:{NFSU2_TR(0x44a3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a3fdull));
TAIL_STATIC(0x447970u,447);
}
B44a3fd:L44a3fd:{c.instructions+=19;NFSU2_TR(0x44a3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a403:{NFSU2_TR(0x44a403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a409:{NFSU2_TR(0x44a409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B44a40f:{NFSU2_TR(0x44a40f);
__builtin_memmove((R+4),(R+8),4);
}
B44a411:{NFSU2_TR(0x44a411);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a413:{NFSU2_TR(0x44a413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a419:{NFSU2_TR(0x44a419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a41f:{NFSU2_TR(0x44a41f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B44a422:{NFSU2_TR(0x44a422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a428:{NFSU2_TR(0x44a428);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B44a42a:{NFSU2_TR(0x44a42a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a42e:{NFSU2_TR(0x44a42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a434:{NFSU2_TR(0x44a434);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B44a436:{NFSU2_TR(0x44a436);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
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
B44a43d:{NFSU2_TR(0x44a43d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a441:{NFSU2_TR(0x44a441);
w1(R+0,u8(0x1ull));
}
B44a443:{NFSU2_TR(0x44a443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a444:{NFSU2_TR(0x44a444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a445:{NFSU2_TR(0x44a445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a450:L44a450:{c.instructions+=4;NFSU2_TR(0x44a450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a451:{NFSU2_TR(0x44a451);
__builtin_memmove((R+24),(R+4),4);
}
B44a453:{NFSU2_TR(0x44a453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a459:{NFSU2_TR(0x44a459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a45eull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B44a45e:L44a45e:{c.instructions+=2;NFSU2_TR(0x44a45e);
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
B44a460:{NFSU2_TR(0x44a460);
if(r1(R+518)){{goto L44a4ca;}}
}
B44a462:L44a462:{c.instructions+=10;NFSU2_TR(0x44a462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a465:{NFSU2_TR(0x44a465);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B44a469:{NFSU2_TR(0x44a469);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B44a46b:{NFSU2_TR(0x44a46b);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B44a46e:{NFSU2_TR(0x44a46e);
w2(R+8,u16(r1(R+4)));
}
B44a472:{NFSU2_TR(0x44a472);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a473:{NFSU2_TR(0x44a473);
__builtin_memmove((R+4),(R+24),4);
}
B44a475:{NFSU2_TR(0x44a475);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a476:{NFSU2_TR(0x44a476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a477:{NFSU2_TR(0x44a477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a47cull));
TAIL_STATIC(0x4429c0u,442);
}
B44a47c:L44a47c:{c.instructions+=3;NFSU2_TR(0x44a47c);
__builtin_memmove((R+28),(R+0),4);
}
B44a47e:{NFSU2_TR(0x44a47e);
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
B44a480:{NFSU2_TR(0x44a480);
if(r1(R+518)){{goto L44a4c9;}}
}
B44a482:L44a482:{c.instructions+=12;NFSU2_TR(0x44a482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a485:{NFSU2_TR(0x44a485);
__builtin_memmove((R+4),(R+28),4);
}
B44a487:{NFSU2_TR(0x44a487);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B44a489:{NFSU2_TR(0x44a489);
w4(R+0,u32(0x66666667ull));
}
B44a48e:{NFSU2_TR(0x44a48e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44a490:{NFSU2_TR(0x44a490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a496:{NFSU2_TR(0x44a496);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B44a499:{NFSU2_TR(0x44a499);
__builtin_memmove((R+4),(R+8),4);
}
B44a49b:{NFSU2_TR(0x44a49b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B44a49e:{NFSU2_TR(0x44a49e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44a4a0:{NFSU2_TR(0x44a4a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a4a2:{NFSU2_TR(0x44a4a2);
if(r1(R+518)){{goto L44a4b4;}}
}
B44a4a4:L44a4a4:{c.instructions+=2;NFSU2_TR(0x44a4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a4aa:{NFSU2_TR(0x44a4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a4b4:L44a4b4:{c.instructions+=3;NFSU2_TR(0x44a4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a4ba:{NFSU2_TR(0x44a4ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B44a4bd:{NFSU2_TR(0x44a4bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a4c9;}}
}
B44a4bf:L44a4bf:{c.instructions+=1;NFSU2_TR(0x44a4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a4c9:L44a4c9:{c.instructions+=1;NFSU2_TR(0x44a4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a4ca:L44a4ca:{c.instructions+=2;NFSU2_TR(0x44a4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a4cb:{NFSU2_TR(0x44a4cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a4d0:L44a4d0:{c.instructions+=4;NFSU2_TR(0x44a4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a4d1:{NFSU2_TR(0x44a4d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a4d2:{NFSU2_TR(0x44a4d2);
__builtin_memmove((R+24),(R+4),4);
}
B44a4d4:{NFSU2_TR(0x44a4d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a4d9ull));
TAIL_STATIC(0x442a10u,442);
}
B44a4d9:L44a4d9:{c.instructions+=2;NFSU2_TR(0x44a4d9);
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
B44a4db:{NFSU2_TR(0x44a4db);
if(r1(R+518)){{goto L44a501;}}
}
B44a4dd:L44a4dd:{c.instructions+=5;NFSU2_TR(0x44a4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a4e3:{NFSU2_TR(0x44a4e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a4e6:{NFSU2_TR(0x44a4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a4e7:{NFSU2_TR(0x44a4e7);
__builtin_memmove((R+4),(R+28),4);
}
B44a4e9:{NFSU2_TR(0x44a4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a4eeull));
TAIL_STATIC(0x43be60u,43b);
}
B44a4ee:L44a4ee:{c.instructions+=2;NFSU2_TR(0x44a4ee);
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
B44a4f0:{NFSU2_TR(0x44a4f0);
if(r1(R+518)){{goto L44a501;}}
}
B44a4f2:L44a4f2:{c.instructions+=2;NFSU2_TR(0x44a4f2);
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
B44a4f4:{NFSU2_TR(0x44a4f4);
if(r1(R+518)){{goto L44a501;}}
}
B44a4f6:L44a4f6:{c.instructions+=3;NFSU2_TR(0x44a4f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a4f7:{NFSU2_TR(0x44a4f7);
__builtin_memmove((R+4),(R+24),4);
}
B44a4f9:{NFSU2_TR(0x44a4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a4feull));
TAIL_STATIC(0x4437d0u,443);
}
B44a4fe:L44a4fe:{c.instructions+=3;NFSU2_TR(0x44a4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a4ff:{NFSU2_TR(0x44a4ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a500:{NFSU2_TR(0x44a500);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a501:L44a501:{c.instructions+=4;NFSU2_TR(0x44a501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a50b:{NFSU2_TR(0x44a50b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a511:{NFSU2_TR(0x44a511);
w4(R+4,u32(0x22ull));
}
B44a516:{NFSU2_TR(0x44a516);
w4(R+24,u32(0x7ec7b0ull));
}
B44a51b:L44a51b:{c.instructions+=1;NFSU2_TR(0x44a51b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44a51d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a51bu);}goto L44a51b;}
}
B44a51d:L44a51d:{c.instructions+=4;NFSU2_TR(0x44a51d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a51e:{NFSU2_TR(0x44a51e);
s1(0x828649,u8(0x0ull));
}
B44a525:{NFSU2_TR(0x44a525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a526:{NFSU2_TR(0x44a526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a530:L44a530:{c.instructions+=6;NFSU2_TR(0x44a530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a531:{NFSU2_TR(0x44a531);
__builtin_memmove((R+24),(R+4),4);
}
B44a533:{NFSU2_TR(0x44a533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a539:{NFSU2_TR(0x44a539);
__builtin_memmove((R+0),(R+4),4);
}
B44a53b:{NFSU2_TR(0x44a53b);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44a53e:{NFSU2_TR(0x44a53e);
if(r1(R+518)){{goto L44a5d8;}}
}
B44a544:L44a544:{c.instructions+=2;NFSU2_TR(0x44a544);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44a545:{NFSU2_TR(0x44a545);
if(r1(R+518)){{goto L44a558;}}
}
B44a547:L44a547:{c.instructions+=2;NFSU2_TR(0x44a547);
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
B44a548:{NFSU2_TR(0x44a548);
if(r1(R+518)){{goto L44a5d8;}}
}
B44a54e:L44a54e:{c.instructions+=3;NFSU2_TR(0x44a54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a554:{NFSU2_TR(0x44a554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a555:{NFSU2_TR(0x44a555);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a558:L44a558:{c.instructions+=8;NFSU2_TR(0x44a558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a55e:{NFSU2_TR(0x44a55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a561:{NFSU2_TR(0x44a561);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a562:{NFSU2_TR(0x44a562);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a566:{NFSU2_TR(0x44a566);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a567:{NFSU2_TR(0x44a567);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B44a569:{NFSU2_TR(0x44a569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a56a:{NFSU2_TR(0x44a56a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a56full));
TAIL_STATIC(0x43c280u,43c);
}
B44a56f:L44a56f:{c.instructions+=4;NFSU2_TR(0x44a56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a575:{NFSU2_TR(0x44a575);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a578:{NFSU2_TR(0x44a578);
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
B44a57a:{NFSU2_TR(0x44a57a);
if(r1(R+518)){{goto L44a5d3;}}
}
B44a57c:L44a57c:{c.instructions+=2;NFSU2_TR(0x44a57c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a57d:{NFSU2_TR(0x44a57d);
__builtin_memmove((R+4),(R+4),4);
}
B44a580:L44a580:{c.instructions+=6;NFSU2_TR(0x44a580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a583:{NFSU2_TR(0x44a583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44a586:{NFSU2_TR(0x44a586);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44a589:{NFSU2_TR(0x44a589);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B44a58c:{NFSU2_TR(0x44a58c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44a58e:{NFSU2_TR(0x44a58e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L44a5b9;}}
}
B44a590:L44a590:{c.instructions+=3;NFSU2_TR(0x44a590);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B44a597:{NFSU2_TR(0x44a597);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a599:{NFSU2_TR(0x44a599);
if(r1(R+518)){{goto L44a5b9;}}
}
B44a59b:L44a59b:{c.instructions+=5;NFSU2_TR(0x44a59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a59e:{NFSU2_TR(0x44a59e);
__builtin_memmove((R+4),(R+28),4);
}
B44a5a0:{NFSU2_TR(0x44a5a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B44a5a3:{NFSU2_TR(0x44a5a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44a5a6:{NFSU2_TR(0x44a5a6);
if(r1(R+518)){{goto L44a5b9;}}
}
B44a5a8:L44a5a8:{c.instructions+=6;NFSU2_TR(0x44a5a8);
__builtin_memmove((R+4),(R+28),4);
}
B44a5aa:{NFSU2_TR(0x44a5aa);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B44a5ac:{NFSU2_TR(0x44a5ac);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B44a5af:{NFSU2_TR(0x44a5af);
w2(R+4,u16(r1(R+4)));
}
B44a5b3:{NFSU2_TR(0x44a5b3);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+4))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+4)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B44a5b7:{NFSU2_TR(0x44a5b7);
if(r1(R+518)){{goto L44a5d2;}}
}
B44a5b9:L44a5b9:{c.instructions+=5;NFSU2_TR(0x44a5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a5bc:{NFSU2_TR(0x44a5bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a5bd:{NFSU2_TR(0x44a5bd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B44a5bf:{NFSU2_TR(0x44a5bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a5c0:{NFSU2_TR(0x44a5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a5c5ull));
TAIL_STATIC(0x43c280u,43c);
}
B44a5c5:L44a5c5:{c.instructions+=4;NFSU2_TR(0x44a5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a5cb:{NFSU2_TR(0x44a5cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a5ce:{NFSU2_TR(0x44a5ce);
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
B44a5d0:{NFSU2_TR(0x44a5d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a580u);}goto L44a580;}}
}
B44a5d2:L44a5d2:{c.instructions+=1;NFSU2_TR(0x44a5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a5d3:L44a5d3:{c.instructions+=3;NFSU2_TR(0x44a5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a5d4:{NFSU2_TR(0x44a5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a5d5:{NFSU2_TR(0x44a5d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a5d8:L44a5d8:{c.instructions+=2;NFSU2_TR(0x44a5d8);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44a5db:{NFSU2_TR(0x44a5db);
if(r1(R+518)){{goto L44a5f1;}}
}
B44a5dd:L44a5dd:{c.instructions+=2;NFSU2_TR(0x44a5dd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44a5de:{NFSU2_TR(0x44a5de);
if(r1(R+518)){{goto L44a5ec;}}
}
B44a5e0:L44a5e0:{c.instructions+=2;NFSU2_TR(0x44a5e0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a5e1:{NFSU2_TR(0x44a5e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a54eu);}goto L44a54e;}}
}
B44a5e7:L44a5e7:{c.instructions+=2;NFSU2_TR(0x44a5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a5ea:{NFSU2_TR(0x44a5ea);
{goto L44a5f4;}
}
B44a5ec:L44a5ec:{c.instructions+=2;NFSU2_TR(0x44a5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a5ef:{NFSU2_TR(0x44a5ef);
{goto L44a5f4;}
}
B44a5f1:L44a5f1:{c.instructions+=1;NFSU2_TR(0x44a5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a5f4:L44a5f4:{c.instructions+=2;NFSU2_TR(0x44a5f4);
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
B44a5f6:{NFSU2_TR(0x44a5f6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a54eu);}goto L44a54e;}}
}
B44a5fc:L44a5fc:{c.instructions+=5;NFSU2_TR(0x44a5fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a5fd:{NFSU2_TR(0x44a5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a603:{NFSU2_TR(0x44a603);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B44a607:{NFSU2_TR(0x44a607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a608:{NFSU2_TR(0x44a608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a60dull));
TAIL_STATIC(0x43c280u,43c);
}
B44a60d:L44a60d:{c.instructions+=3;NFSU2_TR(0x44a60d);
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
B44a610:{NFSU2_TR(0x44a610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a611:{NFSU2_TR(0x44a611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a620:L44a620:{c.instructions+=9;NFSU2_TR(0x44a620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a621:{NFSU2_TR(0x44a621);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44a625:{NFSU2_TR(0x44a625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a626:{NFSU2_TR(0x44a626);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a627:{NFSU2_TR(0x44a627);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a62b:{NFSU2_TR(0x44a62b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a62c:{NFSU2_TR(0x44a62c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a62d:{NFSU2_TR(0x44a62d);
__builtin_memmove((R+24),(R+4),4);
}
B44a62f:{NFSU2_TR(0x44a62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a634ull));
TAIL_STATIC(0x443cc0u,443);
}
B44a634:L44a634:{c.instructions+=2;NFSU2_TR(0x44a634);
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
B44a636:{NFSU2_TR(0x44a636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a6b0;}}
}
B44a638:L44a638:{c.instructions+=3;NFSU2_TR(0x44a638);
__builtin_memmove((R+4),(R+12),4);
}
B44a63a:{NFSU2_TR(0x44a63a);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44a63c:{NFSU2_TR(0x44a63c);
if(r1(R+518)){{goto L44a68f;}}
}
B44a63e:L44a63e:{c.instructions+=2;NFSU2_TR(0x44a63e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44a63f:{NFSU2_TR(0x44a63f);
if(r1(R+518)){{goto L44a668;}}
}
B44a641:L44a641:{c.instructions+=2;NFSU2_TR(0x44a641);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a642:{NFSU2_TR(0x44a642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a6b0;}}
}
B44a644:L44a644:{c.instructions+=3;NFSU2_TR(0x44a644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a647:{NFSU2_TR(0x44a647);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x64ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x64ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a64a:{NFSU2_TR(0x44a64a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44a6b0;}}
}
B44a64c:L44a64c:{c.instructions+=11;NFSU2_TR(0x44a64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a64f:{NFSU2_TR(0x44a64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a652:{NFSU2_TR(0x44a652);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a655:{NFSU2_TR(0x44a655);
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
B44a656:{NFSU2_TR(0x44a656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a659:{NFSU2_TR(0x44a659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a660:{NFSU2_TR(0x44a660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a662:{NFSU2_TR(0x44a662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a663:{NFSU2_TR(0x44a663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a664:{NFSU2_TR(0x44a664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a665:{NFSU2_TR(0x44a665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a668:L44a668:{c.instructions+=3;NFSU2_TR(0x44a668);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a66b:{NFSU2_TR(0x44a66b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xbb8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbb8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbb8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a671:{NFSU2_TR(0x44a671);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44a6b0;}}
}
B44a673:L44a673:{c.instructions+=11;NFSU2_TR(0x44a673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a676:{NFSU2_TR(0x44a676);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a679:{NFSU2_TR(0x44a679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a67c:{NFSU2_TR(0x44a67c);
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
B44a67d:{NFSU2_TR(0x44a67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a680:{NFSU2_TR(0x44a680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a687:{NFSU2_TR(0x44a687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a689:{NFSU2_TR(0x44a689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a68a:{NFSU2_TR(0x44a68a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a68b:{NFSU2_TR(0x44a68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a68c:{NFSU2_TR(0x44a68c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a68f:L44a68f:{c.instructions+=3;NFSU2_TR(0x44a68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a692:{NFSU2_TR(0x44a692);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44a698:{NFSU2_TR(0x44a698);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44a6b0;}}
}
B44a69a:L44a69a:{c.instructions+=7;NFSU2_TR(0x44a69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a69d:{NFSU2_TR(0x44a69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a6a0:{NFSU2_TR(0x44a6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44a6a3:{NFSU2_TR(0x44a6a3);
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
B44a6a4:{NFSU2_TR(0x44a6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a6a7:{NFSU2_TR(0x44a6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a6ae:{NFSU2_TR(0x44a6ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44a6b0:L44a6b0:{c.instructions+=4;NFSU2_TR(0x44a6b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a6b1:{NFSU2_TR(0x44a6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a6b2:{NFSU2_TR(0x44a6b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a6b3:{NFSU2_TR(0x44a6b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a6c0:L44a6c0:{c.instructions+=9;NFSU2_TR(0x44a6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B44a6c3:{NFSU2_TR(0x44a6c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a6c4:{NFSU2_TR(0x44a6c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44a6c8:{NFSU2_TR(0x44a6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44a6ca:{NFSU2_TR(0x44a6ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a6cf:{NFSU2_TR(0x44a6cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a6d0:{NFSU2_TR(0x44a6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a6d4:{NFSU2_TR(0x44a6d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a6dc:{NFSU2_TR(0x44a6dc);
if(r1(R+518)){{goto L44a700;}}
}
B44a6de:L44a6de:{c.instructions+=2;NFSU2_TR(0x44a6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b201ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a6e3:{NFSU2_TR(0x44a6e3);
if(r1(R+518)){{goto L44a6f6;}}
}
B44a6e5:L44a6e5:{c.instructions+=2;NFSU2_TR(0x44a6e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a6ea:{NFSU2_TR(0x44a6ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a708;}}
}
B44a6ec:L44a6ec:{c.instructions+=2;NFSU2_TR(0x44a6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a6f4:{NFSU2_TR(0x44a6f4);
{goto L44a708;}
}
B44a6f6:L44a6f6:{c.instructions+=2;NFSU2_TR(0x44a6f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a6fe:{NFSU2_TR(0x44a6fe);
{goto L44a708;}
}
B44a700:L44a700:{c.instructions+=1;NFSU2_TR(0x44a700);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a708:L44a708:{c.instructions+=6;NFSU2_TR(0x44a708);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a70b:{NFSU2_TR(0x44a70b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a70e:{NFSU2_TR(0x44a70e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B44a712:{NFSU2_TR(0x44a712);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a714:{NFSU2_TR(0x44a714);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a719:{NFSU2_TR(0x44a719);
if(r1(R+518)){{goto L44a78a;}}
}
B44a71b:L44a71b:{c.instructions+=3;NFSU2_TR(0x44a71b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a71c:{NFSU2_TR(0x44a71c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a71d:{NFSU2_TR(0x44a71d);
__builtin_memmove((R+4),(R+4),4);
}
B44a720:L44a720:{c.instructions+=6;NFSU2_TR(0x44a720);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a723:{NFSU2_TR(0x44a723);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a727:{NFSU2_TR(0x44a727);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a72b:{NFSU2_TR(0x44a72b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a72c:{NFSU2_TR(0x44a72c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a72d:{NFSU2_TR(0x44a72d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a732ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a620u);}goto L44a620;}
}
B44a732:L44a732:{c.instructions+=2;NFSU2_TR(0x44a732);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a734:{NFSU2_TR(0x44a734);
if(r1(R+518)){{goto L44a769;}}
}
B44a736:L44a736:{c.instructions+=4;NFSU2_TR(0x44a736);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44a739:{NFSU2_TR(0x44a739);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a73b:{NFSU2_TR(0x44a73b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44a73e:{NFSU2_TR(0x44a73e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a776;}}
}
B44a740:L44a740:{c.instructions+=1;NFSU2_TR(0x44a740);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B44a743:L44a743:{c.instructions+=12;NFSU2_TR(0x44a743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a746:{NFSU2_TR(0x44a746);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44a749:{NFSU2_TR(0x44a749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B44a74b:{NFSU2_TR(0x44a74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a74e:{NFSU2_TR(0x44a74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a751:{NFSU2_TR(0x44a751);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B44a753:{NFSU2_TR(0x44a753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B44a756:{NFSU2_TR(0x44a756);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B44a75a:{NFSU2_TR(0x44a75a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B44a760:{NFSU2_TR(0x44a760);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B44a761:{NFSU2_TR(0x44a761);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B44a765:{NFSU2_TR(0x44a765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a743u);}goto L44a743;}}
}
B44a767:L44a767:{c.instructions+=1;NFSU2_TR(0x44a767);
{goto L44a776;}
}
B44a769:L44a769:{c.instructions+=3;NFSU2_TR(0x44a769);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44a76d:{NFSU2_TR(0x44a76d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44a76f:{NFSU2_TR(0x44a76f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a776;}}
}
B44a771:L44a771:{c.instructions+=1;NFSU2_TR(0x44a771);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a776:L44a776:{c.instructions+=6;NFSU2_TR(0x44a776);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a779:{NFSU2_TR(0x44a779);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44a77c:{NFSU2_TR(0x44a77c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B44a780:{NFSU2_TR(0x44a780);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44a784:{NFSU2_TR(0x44a784);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a786:{NFSU2_TR(0x44a786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a720u);}goto L44a720;}}
}
B44a788:L44a788:{c.instructions+=2;NFSU2_TR(0x44a788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44a789:{NFSU2_TR(0x44a789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44a78a:L44a78a:{c.instructions+=4;NFSU2_TR(0x44a78a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44a78b:{NFSU2_TR(0x44a78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44a78c:{NFSU2_TR(0x44a78c);
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
B44a78f:{NFSU2_TR(0x44a78f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44a7a0:L44a7a0:{c.instructions+=15;NFSU2_TR(0x44a7a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B44a7a3:{NFSU2_TR(0x44a7a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a7a4:{NFSU2_TR(0x44a7a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a7a5:{NFSU2_TR(0x44a7a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a7a6:{NFSU2_TR(0x44a7a6);
__builtin_memmove((R+24),(R+4),4);
}
B44a7a8:{NFSU2_TR(0x44a7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a7ab:{NFSU2_TR(0x44a7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a7ae:{NFSU2_TR(0x44a7ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44a7b0:{NFSU2_TR(0x44a7b0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44a7b2:{NFSU2_TR(0x44a7b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a7b4:{NFSU2_TR(0x44a7b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a7b5:{NFSU2_TR(0x44a7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cccull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a7bf:{NFSU2_TR(0x44a7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a7c9:{NFSU2_TR(0x44a7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a7cd:{NFSU2_TR(0x44a7cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a8e2;}}
}
B44a7d3:L44a7d3:{c.instructions+=1;NFSU2_TR(0x44a7d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B44a7d6:L44a7d6:{c.instructions+=2;NFSU2_TR(0x44a7d6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44a7d8:{NFSU2_TR(0x44a7d8);
if(r1(R+518)){{goto L44a7db;}}
}
B44a7da:L44a7da:{c.instructions+=1;NFSU2_TR(0x44a7da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44a7db:L44a7db:{c.instructions+=3;NFSU2_TR(0x44a7db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44a7de:{NFSU2_TR(0x44a7de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44a7df:{NFSU2_TR(0x44a7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a7d6u);}goto L44a7d6;}}
}
B44a7e1:L44a7e1:{c.instructions+=3;NFSU2_TR(0x44a7e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a7e3:{NFSU2_TR(0x44a7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a7e7:{NFSU2_TR(0x44a7e7);
if(r1(R+518)){{goto L44a8e2;}}
}
B44a7ed:L44a7ed:{c.instructions+=3;NFSU2_TR(0x44a7ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44a7f0:{NFSU2_TR(0x44a7f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44a7f2:{NFSU2_TR(0x44a7f2);
if(r1(R+518)){{goto L44a8e2;}}
}
B44a7f8:L44a7f8:{c.instructions+=6;NFSU2_TR(0x44a7f8);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B44a7fd:{NFSU2_TR(0x44a7fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
}
B44a800:{NFSU2_TR(0x44a800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a801:{NFSU2_TR(0x44a801);
u8 U[4];
w4(U+0,u32(0x787cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a806:{NFSU2_TR(0x44a806);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a80b:{NFSU2_TR(0x44a80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a810ull));
TAIL_STATIC(0x4400d0u,440);
}
B44a810:L44a810:{c.instructions+=4;NFSU2_TR(0x44a810);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a812:{NFSU2_TR(0x44a812);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a814:{NFSU2_TR(0x44a814);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a819:{NFSU2_TR(0x44a819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a81eull));
TAIL_STATIC(0x57ca10u,57c);
}
B44a81e:L44a81e:{c.instructions+=4;NFSU2_TR(0x44a81e);
__builtin_memmove((R+20),(R+0),4);
}
B44a820:{NFSU2_TR(0x44a820);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44a823:{NFSU2_TR(0x44a823);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a825:{NFSU2_TR(0x44a825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a836;}}
}
B44a827:L44a827:{c.instructions+=2;NFSU2_TR(0x44a827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a831:{NFSU2_TR(0x44a831);
{goto L44a8e2;}
}
B44a836:L44a836:{c.instructions+=3;NFSU2_TR(0x44a836);
u8 U[4];
w4(U+0,u32(0x787cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a83b:{NFSU2_TR(0x44a83b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a83c:{NFSU2_TR(0x44a83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a841ull));
TAIL_STATIC(0x579c10u,579);
}
B44a841:L44a841:{c.instructions+=4;NFSU2_TR(0x44a841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a844:{NFSU2_TR(0x44a844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a847:{NFSU2_TR(0x44a847);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a849:{NFSU2_TR(0x44a849);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a8b9;}}
}
B44a84b:L44a84b:{c.instructions+=2;NFSU2_TR(0x44a84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a84f:{NFSU2_TR(0x44a84f);
}
B44a850:L44a850:{c.instructions+=6;NFSU2_TR(0x44a850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a853:{NFSU2_TR(0x44a853);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a857:{NFSU2_TR(0x44a857);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B44a85b:{NFSU2_TR(0x44a85b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B44a85d:{NFSU2_TR(0x44a85d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a85f:{NFSU2_TR(0x44a85f);
if(r1(R+518)){{goto L44a8a4;}}
}
B44a861:L44a861:{c.instructions+=3;NFSU2_TR(0x44a861);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B44a866:{NFSU2_TR(0x44a866);
w4(R+0,u32(0x787cacull));
}
B44a86b:{NFSU2_TR(0x44a86b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a872;}}
}
B44a86d:L44a86d:{c.instructions+=1;NFSU2_TR(0x44a86d);
w4(R+0,u32(0x787ca0ull));
}
B44a872:L44a872:{c.instructions+=10;NFSU2_TR(0x44a872);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a876:{NFSU2_TR(0x44a876);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a877:{NFSU2_TR(0x44a877);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44a87a:{NFSU2_TR(0x44a87a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a87b:{NFSU2_TR(0x44a87b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a87c:{NFSU2_TR(0x44a87c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B44a87f:{NFSU2_TR(0x44a87f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a880:{NFSU2_TR(0x44a880);
u8 U[4];
w4(U+0,u32(0x787c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a885:{NFSU2_TR(0x44a885);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a886:{NFSU2_TR(0x44a886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a88bull));
TAIL_STATIC(0x579c10u,579);
}
B44a88b:L44a88b:{c.instructions+=4;NFSU2_TR(0x44a88b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44a88e:{NFSU2_TR(0x44a88e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a88f:{NFSU2_TR(0x44a88f);
__builtin_memmove((R+4),(R+28),4);
}
B44a891:{NFSU2_TR(0x44a891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a896ull));
TAIL_STATIC(0x447ad0u,447);
}
B44a896:L44a896:{c.instructions+=3;NFSU2_TR(0x44a896);
u8 U[4];
w4(U+0,u32(0x787c6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a89b:{NFSU2_TR(0x44a89b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a89c:{NFSU2_TR(0x44a89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a8a1ull));
TAIL_STATIC(0x579c10u,579);
}
B44a8a1:L44a8a1:{c.instructions+=1;NFSU2_TR(0x44a8a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a8a4:L44a8a4:{c.instructions+=7;NFSU2_TR(0x44a8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a8a8:{NFSU2_TR(0x44a8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a8ab:{NFSU2_TR(0x44a8ab);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44a8ac:{NFSU2_TR(0x44a8ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44a8af:{NFSU2_TR(0x44a8af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44a8b1:{NFSU2_TR(0x44a8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a8b5:{NFSU2_TR(0x44a8b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a850u);}goto L44a850;}}
}
B44a8b7:L44a8b7:{c.instructions+=1;NFSU2_TR(0x44a8b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44a8b9:L44a8b9:{c.instructions+=3;NFSU2_TR(0x44a8b9);
u8 U[4];
w4(U+0,u32(0x787c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a8be:{NFSU2_TR(0x44a8be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a8bf:{NFSU2_TR(0x44a8bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a8c4ull));
TAIL_STATIC(0x579c10u,579);
}
B44a8c4:L44a8c4:{c.instructions+=2;NFSU2_TR(0x44a8c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a8c5:{NFSU2_TR(0x44a8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a8caull));
TAIL_STATIC(0x579bf0u,579);
}
B44a8ca:L44a8ca:{c.instructions+=4;NFSU2_TR(0x44a8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a8d0:{NFSU2_TR(0x44a8d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44a8d3:{NFSU2_TR(0x44a8d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a8d6:{NFSU2_TR(0x44a8d6);
if(r1(R+518)){{goto L44a8de;}}
}
B44a8d8:L44a8d8:{c.instructions+=1;NFSU2_TR(0x44a8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a8de:L44a8de:{c.instructions+=1;NFSU2_TR(0x44a8de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44a8e2:L44a8e2:{c.instructions+=6;NFSU2_TR(0x44a8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a8e5:{NFSU2_TR(0x44a8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a8e8:{NFSU2_TR(0x44a8e8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44a8ea:{NFSU2_TR(0x44a8ea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a8ec:{NFSU2_TR(0x44a8ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a8f0:{NFSU2_TR(0x44a8f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44aa07;}}
}
B44a8f6:L44a8f6:{c.instructions+=2;NFSU2_TR(0x44a8f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B44a8f9:{NFSU2_TR(0x44a8f9);
__builtin_memmove((R+16),(R+16),4);
}
B44a900:L44a900:{c.instructions+=2;NFSU2_TR(0x44a900);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44a902:{NFSU2_TR(0x44a902);
if(r1(R+518)){{goto L44a905;}}
}
B44a904:L44a904:{c.instructions+=1;NFSU2_TR(0x44a904);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44a905:L44a905:{c.instructions+=3;NFSU2_TR(0x44a905);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44a908:{NFSU2_TR(0x44a908);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44a909:{NFSU2_TR(0x44a909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a900u);}goto L44a900;}}
}
B44a90b:L44a90b:{c.instructions+=3;NFSU2_TR(0x44a90b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a90d:{NFSU2_TR(0x44a90d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a911:{NFSU2_TR(0x44a911);
if(r1(R+518)){{goto L44aa07;}}
}
B44a917:L44a917:{c.instructions+=3;NFSU2_TR(0x44a917);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44a91a:{NFSU2_TR(0x44a91a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44a91c:{NFSU2_TR(0x44a91c);
if(r1(R+518)){{goto L44aa07;}}
}
B44a922:L44a922:{c.instructions+=3;NFSU2_TR(0x44a922);
u8 U[4];
w4(U+0,u32(0x787c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a927:{NFSU2_TR(0x44a927);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a92c:{NFSU2_TR(0x44a92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a931ull));
TAIL_STATIC(0x4400d0u,440);
}
B44a931:L44a931:{c.instructions+=4;NFSU2_TR(0x44a931);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a933:{NFSU2_TR(0x44a933);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a935:{NFSU2_TR(0x44a935);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a93a:{NFSU2_TR(0x44a93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a93full));
TAIL_STATIC(0x57ca10u,57c);
}
B44a93f:L44a93f:{c.instructions+=4;NFSU2_TR(0x44a93f);
__builtin_memmove((R+20),(R+0),4);
}
B44a941:{NFSU2_TR(0x44a941);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44a944:{NFSU2_TR(0x44a944);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a946:{NFSU2_TR(0x44a946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44a957;}}
}
B44a948:L44a948:{c.instructions+=2;NFSU2_TR(0x44a948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44a952:{NFSU2_TR(0x44a952);
{goto L44aa07;}
}
B44a957:L44a957:{c.instructions+=3;NFSU2_TR(0x44a957);
u8 U[4];
w4(U+0,u32(0x787c1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a95c:{NFSU2_TR(0x44a95c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a95d:{NFSU2_TR(0x44a95d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a962ull));
TAIL_STATIC(0x579c10u,579);
}
B44a962:L44a962:{c.instructions+=4;NFSU2_TR(0x44a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a965:{NFSU2_TR(0x44a965);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a968:{NFSU2_TR(0x44a968);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a96a:{NFSU2_TR(0x44a96a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44a9de;}}
}
B44a96c:L44a96c:{c.instructions+=1;NFSU2_TR(0x44a96c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a970:L44a970:{c.instructions+=6;NFSU2_TR(0x44a970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44a973:{NFSU2_TR(0x44a973);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a977:{NFSU2_TR(0x44a977);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B44a97b:{NFSU2_TR(0x44a97b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B44a97d:{NFSU2_TR(0x44a97d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44a97f:{NFSU2_TR(0x44a97f);
if(r1(R+518)){{goto L44a9c9;}}
}
B44a981:L44a981:{c.instructions+=6;NFSU2_TR(0x44a981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44a983:{NFSU2_TR(0x44a983);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44a987:{NFSU2_TR(0x44a987);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a988:{NFSU2_TR(0x44a988);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B44a98e:{NFSU2_TR(0x44a98e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a98f:{NFSU2_TR(0x44a98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a994ull));
TAIL_STATIC(0x42fbf0u,42f);
}
B44a994:L44a994:{c.instructions+=11;NFSU2_TR(0x44a994);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a998:{NFSU2_TR(0x44a998);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44a99c:{NFSU2_TR(0x44a99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a99d:{NFSU2_TR(0x44a99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44a99f:{NFSU2_TR(0x44a99f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9a0:{NFSU2_TR(0x44a9a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44a9a3:{NFSU2_TR(0x44a9a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9a4:{NFSU2_TR(0x44a9a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9a5:{NFSU2_TR(0x44a9a5);
u8 U[4];
w4(U+0,u32(0x787be8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9aa:{NFSU2_TR(0x44a9aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9ab:{NFSU2_TR(0x44a9ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a9b0ull));
TAIL_STATIC(0x579c10u,579);
}
B44a9b0:L44a9b0:{c.instructions+=4;NFSU2_TR(0x44a9b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44a9b3:{NFSU2_TR(0x44a9b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9b4:{NFSU2_TR(0x44a9b4);
__builtin_memmove((R+4),(R+28),4);
}
B44a9b6:{NFSU2_TR(0x44a9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a9bbull));
TAIL_STATIC(0x447ad0u,447);
}
B44a9bb:L44a9bb:{c.instructions+=3;NFSU2_TR(0x44a9bb);
u8 U[4];
w4(U+0,u32(0x787c6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9c0:{NFSU2_TR(0x44a9c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9c1:{NFSU2_TR(0x44a9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a9c6ull));
TAIL_STATIC(0x579c10u,579);
}
B44a9c6:L44a9c6:{c.instructions+=1;NFSU2_TR(0x44a9c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44a9c9:L44a9c9:{c.instructions+=7;NFSU2_TR(0x44a9c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44a9cd:{NFSU2_TR(0x44a9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a9d0:{NFSU2_TR(0x44a9d0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44a9d1:{NFSU2_TR(0x44a9d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44a9d4:{NFSU2_TR(0x44a9d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44a9d6:{NFSU2_TR(0x44a9d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44a9da:{NFSU2_TR(0x44a9da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a970u);}goto L44a970;}}
}
B44a9dc:L44a9dc:{c.instructions+=1;NFSU2_TR(0x44a9dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44a9de:L44a9de:{c.instructions+=3;NFSU2_TR(0x44a9de);
u8 U[4];
w4(U+0,u32(0x787c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9e3:{NFSU2_TR(0x44a9e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9e4:{NFSU2_TR(0x44a9e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a9e9ull));
TAIL_STATIC(0x579c10u,579);
}
B44a9e9:L44a9e9:{c.instructions+=2;NFSU2_TR(0x44a9e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44a9ea:{NFSU2_TR(0x44a9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44a9efull));
TAIL_STATIC(0x579bf0u,579);
}
B44a9ef:L44a9ef:{c.instructions+=4;NFSU2_TR(0x44a9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44a9f5:{NFSU2_TR(0x44a9f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44a9f8:{NFSU2_TR(0x44a9f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44a9fb:{NFSU2_TR(0x44a9fb);
if(r1(R+518)){{goto L44aa03;}}
}
B44a9fd:L44a9fd:{c.instructions+=1;NFSU2_TR(0x44a9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44aa03:L44aa03:{c.instructions+=1;NFSU2_TR(0x44aa03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44aa07:L44aa07:{c.instructions+=6;NFSU2_TR(0x44aa07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44aa0a:{NFSU2_TR(0x44aa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44aa0d:{NFSU2_TR(0x44aa0d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44aa0f:{NFSU2_TR(0x44aa0f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44aa11:{NFSU2_TR(0x44aa11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44aa15:{NFSU2_TR(0x44aa15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44ab45;}}
}
B44aa1b:L44aa1b:{c.instructions+=2;NFSU2_TR(0x44aa1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B44aa1e:{NFSU2_TR(0x44aa1e);
__builtin_memmove((R+28),(R+28),4);
}
B44aa20:L44aa20:{c.instructions+=2;NFSU2_TR(0x44aa20);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44aa22:{NFSU2_TR(0x44aa22);
if(r1(R+518)){{goto L44aa25;}}
}
B44aa24:L44aa24:{c.instructions+=1;NFSU2_TR(0x44aa24);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44aa25:L44aa25:{c.instructions+=3;NFSU2_TR(0x44aa25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44aa28:{NFSU2_TR(0x44aa28);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44aa29:{NFSU2_TR(0x44aa29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44aa20u);}goto L44aa20;}}
}
B44aa2b:L44aa2b:{c.instructions+=3;NFSU2_TR(0x44aa2b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44aa2d:{NFSU2_TR(0x44aa2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44aa31:{NFSU2_TR(0x44aa31);
if(r1(R+518)){{goto L44ab45;}}
}
B44aa37:L44aa37:{c.instructions+=3;NFSU2_TR(0x44aa37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44aa3a:{NFSU2_TR(0x44aa3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44aa3c:{NFSU2_TR(0x44aa3c);
if(r1(R+518)){{goto L44ab45;}}
}
B44aa42:L44aa42:{c.instructions+=3;NFSU2_TR(0x44aa42);
u8 U[4];
w4(U+0,u32(0x787bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa47:{NFSU2_TR(0x44aa47);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa4c:{NFSU2_TR(0x44aa4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aa51ull));
TAIL_STATIC(0x4400d0u,440);
}
B44aa51:L44aa51:{c.instructions+=4;NFSU2_TR(0x44aa51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa53:{NFSU2_TR(0x44aa53);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa55:{NFSU2_TR(0x44aa55);
u8 U[4];
w4(U+0,u32(0x82a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa5a:{NFSU2_TR(0x44aa5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aa5full));
TAIL_STATIC(0x57ca10u,57c);
}
B44aa5f:L44aa5f:{c.instructions+=4;NFSU2_TR(0x44aa5f);
__builtin_memmove((R+20),(R+0),4);
}
B44aa61:{NFSU2_TR(0x44aa61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44aa64:{NFSU2_TR(0x44aa64);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44aa66:{NFSU2_TR(0x44aa66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44aa7a;}}
}
B44aa68:L44aa68:{c.instructions+=7;NFSU2_TR(0x44aa68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44aa69:{NFSU2_TR(0x44aa69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44aa73:{NFSU2_TR(0x44aa73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44aa74:{NFSU2_TR(0x44aa74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44aa75:{NFSU2_TR(0x44aa75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44aa76:{NFSU2_TR(0x44aa76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44aa79:{NFSU2_TR(0x44aa79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44aa7a:L44aa7a:{c.instructions+=3;NFSU2_TR(0x44aa7a);
u8 U[4];
w4(U+0,u32(0x787b9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa7f:{NFSU2_TR(0x44aa7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aa80:{NFSU2_TR(0x44aa80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aa85ull));
TAIL_STATIC(0x579c10u,579);
}
B44aa85:L44aa85:{c.instructions+=4;NFSU2_TR(0x44aa85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44aa88:{NFSU2_TR(0x44aa88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44aa8b:{NFSU2_TR(0x44aa8b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44aa8d:{NFSU2_TR(0x44aa8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44ab1c;}}
}
B44aa93:L44aa93:{c.instructions+=2;NFSU2_TR(0x44aa93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44aa97:{NFSU2_TR(0x44aa97);
{goto L44aaa0;}
}
B44aaa0:L44aaa0:{c.instructions+=6;NFSU2_TR(0x44aaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44aaa3:{NFSU2_TR(0x44aaa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44aaa7:{NFSU2_TR(0x44aaa7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B44aaab:{NFSU2_TR(0x44aaab);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B44aaad:{NFSU2_TR(0x44aaad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44aaaf:{NFSU2_TR(0x44aaaf);
if(r1(R+518)){{goto L44ab07;}}
}
B44aab1:L44aab1:{c.instructions+=4;NFSU2_TR(0x44aab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44aab3:{NFSU2_TR(0x44aab3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44aab5:{NFSU2_TR(0x44aab5);
w4(R+0,u32(0x7ec1fcull));
}
B44aaba:{NFSU2_TR(0x44aaba);
__builtin_memmove((R+12),(R+12),4);
}
B44aac0:L44aac0:{c.instructions+=2;NFSU2_TR(0x44aac0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44aac2:{NFSU2_TR(0x44aac2);
if(r1(R+518)){{goto L44ab4d;}}
}
B44aac8:L44aac8:{c.instructions+=4;NFSU2_TR(0x44aac8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B44aacb:{NFSU2_TR(0x44aacb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B44aacc:{NFSU2_TR(0x44aacc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ec274ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44aad1:{NFSU2_TR(0x44aad1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44aac0u);}goto L44aac0;}}
}
B44aad3:L44aad3:{c.instructions+=1;NFSU2_TR(0x44aad3);
w4(R+0,u32(0x7875a8ull));
}
B44aad8:L44aad8:{c.instructions+=9;NFSU2_TR(0x44aad8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aad9:{NFSU2_TR(0x44aad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44aadd:{NFSU2_TR(0x44aadd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aade:{NFSU2_TR(0x44aade);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44aae1:{NFSU2_TR(0x44aae1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aae2:{NFSU2_TR(0x44aae2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aae3:{NFSU2_TR(0x44aae3);
u8 U[4];
w4(U+0,u32(0x787b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aae8:{NFSU2_TR(0x44aae8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aae9:{NFSU2_TR(0x44aae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aaeeull));
TAIL_STATIC(0x579c10u,579);
}
B44aaee:L44aaee:{c.instructions+=4;NFSU2_TR(0x44aaee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B44aaf1:{NFSU2_TR(0x44aaf1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aaf2:{NFSU2_TR(0x44aaf2);
__builtin_memmove((R+4),(R+28),4);
}
B44aaf4:{NFSU2_TR(0x44aaf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aaf9ull));
TAIL_STATIC(0x447ad0u,447);
}
B44aaf9:L44aaf9:{c.instructions+=3;NFSU2_TR(0x44aaf9);
u8 U[4];
w4(U+0,u32(0x787c6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aafe:{NFSU2_TR(0x44aafe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aaff:{NFSU2_TR(0x44aaff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ab04ull));
TAIL_STATIC(0x579c10u,579);
}
B44ab04:L44ab04:{c.instructions+=1;NFSU2_TR(0x44ab04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44ab07:L44ab07:{c.instructions+=7;NFSU2_TR(0x44ab07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ab0b:{NFSU2_TR(0x44ab0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ab0e:{NFSU2_TR(0x44ab0e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44ab0f:{NFSU2_TR(0x44ab0f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B44ab12:{NFSU2_TR(0x44ab12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44ab14:{NFSU2_TR(0x44ab14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ab18:{NFSU2_TR(0x44ab18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44aaa0u);}goto L44aaa0;}}
}
B44ab1a:L44ab1a:{c.instructions+=1;NFSU2_TR(0x44ab1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44ab1c:L44ab1c:{c.instructions+=3;NFSU2_TR(0x44ab1c);
u8 U[4];
w4(U+0,u32(0x787c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ab21:{NFSU2_TR(0x44ab21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ab22:{NFSU2_TR(0x44ab22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ab27ull));
TAIL_STATIC(0x579c10u,579);
}
B44ab27:L44ab27:{c.instructions+=2;NFSU2_TR(0x44ab27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ab28:{NFSU2_TR(0x44ab28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ab2dull));
TAIL_STATIC(0x579bf0u,579);
}
B44ab2d:L44ab2d:{c.instructions+=4;NFSU2_TR(0x44ab2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ab33:{NFSU2_TR(0x44ab33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44ab36:{NFSU2_TR(0x44ab36);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ab39:{NFSU2_TR(0x44ab39);
if(r1(R+518)){{goto L44ab41;}}
}
B44ab3b:L44ab3b:{c.instructions+=1;NFSU2_TR(0x44ab3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ab41:L44ab41:{c.instructions+=1;NFSU2_TR(0x44ab41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44ab45:L44ab45:{c.instructions+=6;NFSU2_TR(0x44ab45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44ab46:{NFSU2_TR(0x44ab46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ab47:{NFSU2_TR(0x44ab47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44ab48:{NFSU2_TR(0x44ab48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44ab49:{NFSU2_TR(0x44ab49);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44ab4c:{NFSU2_TR(0x44ab4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ab4d:L44ab4d:{c.instructions+=3;NFSU2_TR(0x44ab4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B44ab50:{NFSU2_TR(0x44ab50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec200ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B44ab57:{NFSU2_TR(0x44ab57);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44aad8u);}goto L44aad8;}
}
B44ab60:L44ab60:{c.instructions+=4;NFSU2_TR(0x44ab60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ab64:{NFSU2_TR(0x44ab64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44ab66:{NFSU2_TR(0x44ab66);
w1(R+512,u8((r4(R+0))<(u32(0x8003b200ull))));
}
B44ab6b:{NFSU2_TR(0x44ab6b);
if(r1(R+512)){{goto L44ab85;}}
}
B44ab6d:L44ab6d:{c.instructions+=2;NFSU2_TR(0x44ab6d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x8003b202ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ab72:{NFSU2_TR(0x44ab72);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L44ab85;}}
}
B44ab74:L44ab74:{c.instructions+=3;NFSU2_TR(0x44ab74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ab75:{NFSU2_TR(0x44ab75);
w4(R+4,u32(0x828770ull));
}
B44ab7a:{NFSU2_TR(0x44ab7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ab7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44a6c0u);}goto L44a6c0;}
}
B44ab7f:L44ab7f:{c.instructions+=2;NFSU2_TR(0x44ab7f);
w4(R+0,u32(0x1ull));
}
B44ab84:{NFSU2_TR(0x44ab84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ab85:L44ab85:{c.instructions+=2;NFSU2_TR(0x44ab85);
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
B44ab87:{NFSU2_TR(0x44ab87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ab90:L44ab90:{c.instructions+=12;NFSU2_TR(0x44ab90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ab94:{NFSU2_TR(0x44ab94);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44ab98:{NFSU2_TR(0x44ab98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ab99:{NFSU2_TR(0x44ab99);
__builtin_memmove((R+24),(R+4),4);
}
B44ab9b:{NFSU2_TR(0x44ab9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44ab9d:{NFSU2_TR(0x44ab9d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44aba0:{NFSU2_TR(0x44aba0);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44aba6:{NFSU2_TR(0x44aba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44aba9:{NFSU2_TR(0x44aba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abac:{NFSU2_TR(0x44abac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abaf:{NFSU2_TR(0x44abaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abb2:{NFSU2_TR(0x44abb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44abc2;}}
}
B44abb4:L44abb4:{c.instructions+=5;NFSU2_TR(0x44abb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abb7:{NFSU2_TR(0x44abb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abba:{NFSU2_TR(0x44abba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abbd:{NFSU2_TR(0x44abbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abc0:{NFSU2_TR(0x44abc0);
{goto L44abfc;}
}
B44abc2:L44abc2:{c.instructions+=2;NFSU2_TR(0x44abc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44abc3:{NFSU2_TR(0x44abc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44abc8ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44abc8:L44abc8:{c.instructions+=13;NFSU2_TR(0x44abc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abcb:{NFSU2_TR(0x44abcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44abce:{NFSU2_TR(0x44abce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abd1:{NFSU2_TR(0x44abd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44abdb:{NFSU2_TR(0x44abdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44abde:{NFSU2_TR(0x44abde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44abe4:{NFSU2_TR(0x44abe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abe7:{NFSU2_TR(0x44abe7);
__builtin_memmove((R+8),(R+0),4);
}
B44abe9:{NFSU2_TR(0x44abe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44abef:{NFSU2_TR(0x44abef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44abf2:{NFSU2_TR(0x44abf2);
__builtin_memmove((R+4),(R+24),4);
}
B44abf4:{NFSU2_TR(0x44abf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44abf7:{NFSU2_TR(0x44abf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44abfcull));
TAIL_STATIC(0x444040u,444);
}
B44abfc:L44abfc:{c.instructions+=2;NFSU2_TR(0x44abfc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B44ac00:{NFSU2_TR(0x44ac00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ac08;}}
}
B44ac02:L44ac02:{c.instructions+=1;NFSU2_TR(0x44ac02);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x883dfc),u32(0x1ull)));
s4(0x883dfc,u32(u32(m4(0x883dfc))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x883dfc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x883dfc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x883dfc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44ac08:L44ac08:{c.instructions+=3;NFSU2_TR(0x44ac08);
__builtin_memmove((R+0),(R+24),4);
}
B44ac0a:{NFSU2_TR(0x44ac0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44ac0b:{NFSU2_TR(0x44ac0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44ac10:L44ac10:{c.instructions+=11;NFSU2_TR(0x44ac10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ac11:{NFSU2_TR(0x44ac11);
__builtin_memmove((R+20),(R+16),4);
}
B44ac13:{NFSU2_TR(0x44ac13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44ac16:{NFSU2_TR(0x44ac16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B44ac1c:{NFSU2_TR(0x44ac1c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x82a590))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ac23:{NFSU2_TR(0x44ac23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ac24:{NFSU2_TR(0x44ac24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ac25:{NFSU2_TR(0x44ac25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ac26:{NFSU2_TR(0x44ac26);
__builtin_memmove((R+28),(R+4),4);
}
B44ac28:{NFSU2_TR(0x44ac28);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ac2c:{NFSU2_TR(0x44ac2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ac35;}}
}
B44ac2e:L44ac2e:{c.instructions+=1;NFSU2_TR(0x44ac2e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x82a590,u32(u32(m4(0x82a590))|u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82a590))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82a590))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82a590))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44ac35:L44ac35:{c.instructions+=3;NFSU2_TR(0x44ac35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44ac37:{NFSU2_TR(0x44ac37);
__builtin_memmove((R+4),(R+28),4);
}
B44ac39:{NFSU2_TR(0x44ac39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ac3cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44ac3c:L44ac3c:{c.instructions+=7;NFSU2_TR(0x44ac3c);
__builtin_memmove((R+8),gp(0x890080),4);
}
B44ac42:{NFSU2_TR(0x44ac42);
__builtin_memmove((R+12),(R+0),4);
}
B44ac44:{NFSU2_TR(0x44ac44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ac47:{NFSU2_TR(0x44ac47);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ac49:{NFSU2_TR(0x44ac49);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ac4d:{NFSU2_TR(0x44ac4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ac55:{NFSU2_TR(0x44ac55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44afe4;}}
}
B44ac5b:L44ac5b:{c.instructions+=2;NFSU2_TR(0x44ac5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ac63:{NFSU2_TR(0x44ac63);
{goto L44ac70;}
}
B44ac65:L44ac65:{c.instructions+=2;NFSU2_TR(0x44ac65);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44ac69:{NFSU2_TR(0x44ac69);
__builtin_memmove((R+16),(R+16),4);
}
B44ac70:L44ac70:{c.instructions+=4;NFSU2_TR(0x44ac70);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ac74:{NFSU2_TR(0x44ac74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B44ac77:{NFSU2_TR(0x44ac77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44ac79:{NFSU2_TR(0x44ac79);
if(r1(R+518)){{goto L44afc5;}}
}
B44ac7f:L44ac7f:{c.instructions+=3;NFSU2_TR(0x44ac7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44ac82:{NFSU2_TR(0x44ac82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ac84:{NFSU2_TR(0x44ac84);
if(r1(R+518)){{goto L44ac93;}}
}
B44ac86:L44ac86:{c.instructions+=3;NFSU2_TR(0x44ac86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ac89:{NFSU2_TR(0x44ac89);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44ac8d:{NFSU2_TR(0x44ac8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44afc5;}}
}
B44ac93:L44ac93:{c.instructions+=3;NFSU2_TR(0x44ac93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44ac99:{NFSU2_TR(0x44ac99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ac9b:{NFSU2_TR(0x44ac9b);
if(r1(R+518)){{goto L44afc5;}}
}
B44aca1:L44aca1:{c.instructions+=5;NFSU2_TR(0x44aca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44aca4:{NFSU2_TR(0x44aca4);
w4(R+0,u32(0x1ull));
}
B44aca9:{NFSU2_TR(0x44aca9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B44acab:{NFSU2_TR(0x44acab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44acb1:{NFSU2_TR(0x44acb1);
if(r1(R+518)){{goto L44afc5;}}
}
B44acb7:L44acb7:{c.instructions+=26;NFSU2_TR(0x44acb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44acba:{NFSU2_TR(0x44acba);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44acbd:{NFSU2_TR(0x44acbd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44acbf:{NFSU2_TR(0x44acbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44acc2:{NFSU2_TR(0x44acc2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44acc6:{NFSU2_TR(0x44acc6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44acc9:{NFSU2_TR(0x44acc9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44accc:{NFSU2_TR(0x44accc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44acd0:{NFSU2_TR(0x44acd0);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44acd3:{NFSU2_TR(0x44acd3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44acd6:{NFSU2_TR(0x44acd6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44acda:{NFSU2_TR(0x44acda);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44acde:{NFSU2_TR(0x44acde);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ace2:{NFSU2_TR(0x44ace2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ace6:{NFSU2_TR(0x44ace6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ace8:{NFSU2_TR(0x44ace8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44acec:{NFSU2_TR(0x44acec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44acf0:{NFSU2_TR(0x44acf0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44acf2:{NFSU2_TR(0x44acf2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44acf6:{NFSU2_TR(0x44acf6);
{u32 ea_=u32(u32(7893192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44acfc:{NFSU2_TR(0x44acfc);
{u32 ea_=u32(u32(7893192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ad02:{NFSU2_TR(0x44ad02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44ad04:{NFSU2_TR(0x44ad04);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B44ad06:{NFSU2_TR(0x44ad06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ad08:{NFSU2_TR(0x44ad08);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ad0b:{NFSU2_TR(0x44ad0b);
if(r1(R+514)){{goto L44afc5;}}
}
B44ad11:L44ad11:{c.instructions+=2;NFSU2_TR(0x44ad11);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44ad13:{NFSU2_TR(0x44ad13);
if(r1(R+518)){{goto L44ae31;}}
}
B44ad19:L44ad19:{c.instructions+=2;NFSU2_TR(0x44ad19);
w4(R+4,u32(0x865480ull));
}
B44ad1e:{NFSU2_TR(0x44ad1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ad23ull));
TAIL_STATIC(0x571250u,571);
}
B44ad23:L44ad23:{c.instructions+=2;NFSU2_TR(0x44ad23);
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
B44ad25:{NFSU2_TR(0x44ad25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44ae31;}}
}
B44ad2b:L44ad2b:{c.instructions+=2;NFSU2_TR(0x44ad2b);
__builtin_memmove((R+4),(R+12),4);
}
B44ad2d:{NFSU2_TR(0x44ad2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ad32ull));
TAIL_STATIC(0x4018a0u,401);
}
B44ad32:L44ad32:{c.instructions+=26;NFSU2_TR(0x44ad32);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ad35:{NFSU2_TR(0x44ad35);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ad38:{NFSU2_TR(0x44ad38);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ad3b:{NFSU2_TR(0x44ad3b);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ad3e:{NFSU2_TR(0x44ad3e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ad40:{NFSU2_TR(0x44ad40);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ad43:{NFSU2_TR(0x44ad43);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ad47:{NFSU2_TR(0x44ad47);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44ad49:{NFSU2_TR(0x44ad49);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ad4d:{NFSU2_TR(0x44ad4d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44ad51:{NFSU2_TR(0x44ad51);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ad55:{NFSU2_TR(0x44ad55);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ad59:{NFSU2_TR(0x44ad59);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44ad5b:{NFSU2_TR(0x44ad5b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44ad5d:{NFSU2_TR(0x44ad5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ad5f:{NFSU2_TR(0x44ad5f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44ad61:{NFSU2_TR(0x44ad61);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44ad63:{NFSU2_TR(0x44ad63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ad65:{NFSU2_TR(0x44ad65);
{u32 ea_=u32(u32(7893188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ad6b:{NFSU2_TR(0x44ad6b);
{u32 ea_=u32(u32(7893188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ad71:{NFSU2_TR(0x44ad71);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B44ad73:{NFSU2_TR(0x44ad73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ad75:{NFSU2_TR(0x44ad75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ad77:{NFSU2_TR(0x44ad77);
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
B44ad7a:{NFSU2_TR(0x44ad7a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ad7c:{NFSU2_TR(0x44ad7c);
if(r1(R+514)){{goto L44ae31;}}
}
B44ad82:L44ad82:{c.instructions+=5;NFSU2_TR(0x44ad82);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ad86:{NFSU2_TR(0x44ad86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ad87:{NFSU2_TR(0x44ad87);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ad8b:{NFSU2_TR(0x44ad8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ad8c:{NFSU2_TR(0x44ad8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ad91ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44ad91:L44ad91:{c.instructions+=5;NFSU2_TR(0x44ad91);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ad95:{NFSU2_TR(0x44ad95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ad96:{NFSU2_TR(0x44ad96);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ad9a:{NFSU2_TR(0x44ad9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ad9b:{NFSU2_TR(0x44ad9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ada0ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44ada0:L44ada0:{c.instructions+=13;NFSU2_TR(0x44ada0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ada4:{NFSU2_TR(0x44ada4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ada8:{NFSU2_TR(0x44ada8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B44adab:{NFSU2_TR(0x44adab);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44adaf:{NFSU2_TR(0x44adaf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44adb3:{NFSU2_TR(0x44adb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44adb5:{NFSU2_TR(0x44adb5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44adb9:{NFSU2_TR(0x44adb9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44adbd:{NFSU2_TR(0x44adbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44adbf:{NFSU2_TR(0x44adbf);
{u32 ea_=u32(u32(7893184u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44adc5:{NFSU2_TR(0x44adc5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44adc7:{NFSU2_TR(0x44adc7);
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
B44adca:{NFSU2_TR(0x44adca);
if(r1(R+514)){{goto L44ae31;}}
}
B44adcc:L44adcc:{c.instructions+=2;NFSU2_TR(0x44adcc);
__builtin_memmove((R+4),(R+12),4);
}
B44adce:{NFSU2_TR(0x44adce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44add3ull));
TAIL_STATIC(0x441890u,441);
}
B44add3:L44add3:{c.instructions+=5;NFSU2_TR(0x44add3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44add4:{NFSU2_TR(0x44add4);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44addb:{NFSU2_TR(0x44addb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44addc:{NFSU2_TR(0x44addc);
__builtin_memmove((R+4),(R+28),4);
}
B44adde:{NFSU2_TR(0x44adde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ade3ull));
TAIL_STATIC(0x401250u,401);
}
B44ade3:L44ade3:{c.instructions+=5;NFSU2_TR(0x44ade3);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44adea:{NFSU2_TR(0x44adea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44adeb:{NFSU2_TR(0x44adeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44adf2:{NFSU2_TR(0x44adf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44adf3:{NFSU2_TR(0x44adf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44adf8ull));
TAIL_STATIC(0x43cf10u,43c);
}
B44adf8:L44adf8:{c.instructions+=13;NFSU2_TR(0x44adf8);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44adff:{NFSU2_TR(0x44adff);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ae03:{NFSU2_TR(0x44ae03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44ae06:{NFSU2_TR(0x44ae06);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae0d:{NFSU2_TR(0x44ae0d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ae11:{NFSU2_TR(0x44ae11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ae13:{NFSU2_TR(0x44ae13);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae17:{NFSU2_TR(0x44ae17);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44ae1e:{NFSU2_TR(0x44ae1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ae20:{NFSU2_TR(0x44ae20);
{u32 ea_=u32(u32(7893184u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ae26:{NFSU2_TR(0x44ae26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ae28:{NFSU2_TR(0x44ae28);
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
B44ae2b:{NFSU2_TR(0x44ae2b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44afbf;}}
}
B44ae31:L44ae31:{c.instructions+=6;NFSU2_TR(0x44ae31);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ae35:{NFSU2_TR(0x44ae35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ae36:{NFSU2_TR(0x44ae36);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ae3d:{NFSU2_TR(0x44ae3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ae3e:{NFSU2_TR(0x44ae3e);
__builtin_memmove((R+4),(R+24),4);
}
B44ae40:{NFSU2_TR(0x44ae40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ae45ull));
TAIL_STATIC(0x5ec250u,5ec);
}
B44ae45:L44ae45:{c.instructions+=2;NFSU2_TR(0x44ae45);
__builtin_memmove((R+4),(R+24),4);
}
B44ae47:{NFSU2_TR(0x44ae47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ae4cull));
TAIL_STATIC(0x5ec240u,5ec);
}
B44ae4c:L44ae4c:{c.instructions+=28;NFSU2_TR(0x44ae4c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae50:{NFSU2_TR(0x44ae50);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44ae52:{NFSU2_TR(0x44ae52);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae55:{NFSU2_TR(0x44ae55);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44ae59:{NFSU2_TR(0x44ae59);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae5c:{NFSU2_TR(0x44ae5c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44ae60:{NFSU2_TR(0x44ae60);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44ae62:{NFSU2_TR(0x44ae62);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44ae64:{NFSU2_TR(0x44ae64);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44ae66:{NFSU2_TR(0x44ae66);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44ae68:{NFSU2_TR(0x44ae68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ae6a:{NFSU2_TR(0x44ae6a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B44ae6c:{NFSU2_TR(0x44ae6c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B44ae6e:{NFSU2_TR(0x44ae6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44ae70:{NFSU2_TR(0x44ae70);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44ae72:{NFSU2_TR(0x44ae72);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B44ae74:{NFSU2_TR(0x44ae74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ae76:{NFSU2_TR(0x44ae76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ae78:{NFSU2_TR(0x44ae78);
{u32 ea_=u32(u32(7893132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44ae7e:{NFSU2_TR(0x44ae7e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44ae80:{NFSU2_TR(0x44ae80);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44ae82:{NFSU2_TR(0x44ae82);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ae86:{NFSU2_TR(0x44ae86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ae88:{NFSU2_TR(0x44ae88);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ae8c:{NFSU2_TR(0x44ae8c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ae90:{NFSU2_TR(0x44ae90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ae92:{NFSU2_TR(0x44ae92);
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
B44ae95:{NFSU2_TR(0x44ae95);
if(r1(R+514)){{goto L44afbf;}}
}
B44ae9b:L44ae9b:{c.instructions+=8;NFSU2_TR(0x44ae9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ae9c:{NFSU2_TR(0x44ae9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44aea2:{NFSU2_TR(0x44aea2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aea3:{NFSU2_TR(0x44aea3);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44aeaa:{NFSU2_TR(0x44aeaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44aeab:{NFSU2_TR(0x44aeab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44aeb3:{NFSU2_TR(0x44aeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44aebb:{NFSU2_TR(0x44aebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44aec0ull));
TAIL_STATIC(0x401340u,401);
}
B44aec0:L44aec0:{c.instructions+=2;NFSU2_TR(0x44aec0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44aec3:{NFSU2_TR(0x44aec3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44aec5:L44aec5:{c.instructions+=2;NFSU2_TR(0x44aec5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44aec8:{NFSU2_TR(0x44aec8);
if(r1(R+518)){{goto L44aed3;}}
}
B44aeca:L44aeca:{c.instructions+=2;NFSU2_TR(0x44aeca);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aed1:{NFSU2_TR(0x44aed1);
{goto L44aed7;}
}
B44aed3:L44aed3:{c.instructions+=1;NFSU2_TR(0x44aed3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aed7:L44aed7:{c.instructions+=2;NFSU2_TR(0x44aed7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44aeda:{NFSU2_TR(0x44aeda);
if(r1(R+518)){{goto L44aee5;}}
}
B44aedc:L44aedc:{c.instructions+=2;NFSU2_TR(0x44aedc);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aee3:{NFSU2_TR(0x44aee3);
{goto L44aee9;}
}
B44aee5:L44aee5:{c.instructions+=1;NFSU2_TR(0x44aee5);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aee9:L44aee9:{c.instructions+=2;NFSU2_TR(0x44aee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44aeec:{NFSU2_TR(0x44aeec);
if(r1(R+518)){{goto L44aef7;}}
}
B44aeee:L44aeee:{c.instructions+=2;NFSU2_TR(0x44aeee);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aef5:{NFSU2_TR(0x44aef5);
{goto L44aefb;}
}
B44aef7:L44aef7:{c.instructions+=1;NFSU2_TR(0x44aef7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44aefb:L44aefb:{c.instructions+=10;NFSU2_TR(0x44aefb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44aeff:{NFSU2_TR(0x44aeff);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44af03:{NFSU2_TR(0x44af03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44af04:{NFSU2_TR(0x44af04);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44af0b:{NFSU2_TR(0x44af0b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44af0f:{NFSU2_TR(0x44af0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44af10:{NFSU2_TR(0x44af10);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44af14:{NFSU2_TR(0x44af14);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44af18:{NFSU2_TR(0x44af18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44af19:{NFSU2_TR(0x44af19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44af1eull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44af1e:L44af1e:{c.instructions+=3;NFSU2_TR(0x44af1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44af21:{NFSU2_TR(0x44af21);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44af23:{NFSU2_TR(0x44af23);
if(r1(R+518)){{goto L44af3a;}}
}
B44af25:L44af25:{c.instructions+=5;NFSU2_TR(0x44af25);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af29:{NFSU2_TR(0x44af29);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44af2d:{NFSU2_TR(0x44af2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44af2f:{NFSU2_TR(0x44af2f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44af32:{NFSU2_TR(0x44af32);
if(r1(R+514)){{goto L44af3a;}}
}
B44af34:L44af34:{c.instructions+=2;NFSU2_TR(0x44af34);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af38:{NFSU2_TR(0x44af38);
{goto L44af3e;}
}
B44af3a:L44af3a:{c.instructions+=1;NFSU2_TR(0x44af3a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af3e:L44af3e:{c.instructions+=3;NFSU2_TR(0x44af3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44af40:{NFSU2_TR(0x44af40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44af44:{NFSU2_TR(0x44af44);
if(r1(R+518)){{goto L44af5b;}}
}
B44af46:L44af46:{c.instructions+=5;NFSU2_TR(0x44af46);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af4a:{NFSU2_TR(0x44af4a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44af4e:{NFSU2_TR(0x44af4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44af50:{NFSU2_TR(0x44af50);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44af53:{NFSU2_TR(0x44af53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44af5b;}}
}
B44af55:L44af55:{c.instructions+=2;NFSU2_TR(0x44af55);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af59:{NFSU2_TR(0x44af59);
{goto L44af5f;}
}
B44af5b:L44af5b:{c.instructions+=1;NFSU2_TR(0x44af5b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af5f:L44af5f:{c.instructions+=4;NFSU2_TR(0x44af5f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44af60:{NFSU2_TR(0x44af60);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44af64:{NFSU2_TR(0x44af64);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44af67:{NFSU2_TR(0x44af67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44aec5u);}goto L44aec5;}}
}
B44af6d:L44af6d:{c.instructions+=12;NFSU2_TR(0x44af6d);
{u32 ea_=u32(u32(7893128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af73:{NFSU2_TR(0x44af73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44af76:{NFSU2_TR(0x44af76);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44af7a:{NFSU2_TR(0x44af7a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44af7e:{NFSU2_TR(0x44af7e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af82:{NFSU2_TR(0x44af82);
{u32 ea_=u32(u32(7893128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44af88:{NFSU2_TR(0x44af88);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af8b:{NFSU2_TR(0x44af8b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44af8f:{NFSU2_TR(0x44af8f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44af91:{NFSU2_TR(0x44af91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44af93:{NFSU2_TR(0x44af93);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44af96:{NFSU2_TR(0x44af96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44af9e;}}
}
B44af98:L44af98:{c.instructions+=2;NFSU2_TR(0x44af98);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44af9a:{NFSU2_TR(0x44af9a);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44af9e:L44af9e:{c.instructions+=5;NFSU2_TR(0x44af9e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44afa2:{NFSU2_TR(0x44afa2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44afa4:{NFSU2_TR(0x44afa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44afa6:{NFSU2_TR(0x44afa6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44afa9:{NFSU2_TR(0x44afa9);
if(r1(R+514)){{goto L44afb1;}}
}
B44afab:L44afab:{c.instructions+=2;NFSU2_TR(0x44afab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44afad:{NFSU2_TR(0x44afad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44afb1:L44afb1:{c.instructions+=4;NFSU2_TR(0x44afb1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44afb4:{NFSU2_TR(0x44afb4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44afb6:{NFSU2_TR(0x44afb6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44afb9:{NFSU2_TR(0x44afb9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44afef;}}
}
B44afbb:L44afbb:{c.instructions+=1;NFSU2_TR(0x44afbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44afbf:L44afbf:{c.instructions+=1;NFSU2_TR(0x44afbf);
__builtin_memmove((R+8),gp(0x890080),4);
}
B44afc5:L44afc5:{c.instructions+=9;NFSU2_TR(0x44afc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44afc9:{NFSU2_TR(0x44afc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44afcd:{NFSU2_TR(0x44afcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44afd0:{NFSU2_TR(0x44afd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44afd1:{NFSU2_TR(0x44afd1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B44afd4:{NFSU2_TR(0x44afd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44afd6:{NFSU2_TR(0x44afd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44afda:{NFSU2_TR(0x44afda);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44afde:{NFSU2_TR(0x44afde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44ac65u);}goto L44ac65;}}
}
B44afe4:L44afe4:{c.instructions+=7;NFSU2_TR(0x44afe4);
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
B44afe6:{NFSU2_TR(0x44afe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44afe7:{NFSU2_TR(0x44afe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44afe8:{NFSU2_TR(0x44afe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44afe9:{NFSU2_TR(0x44afe9);
__builtin_memmove((R+16),(R+20),4);
}
B44afeb:{NFSU2_TR(0x44afeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44afec:{NFSU2_TR(0x44afec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44afef:L44afef:{c.instructions+=3;NFSU2_TR(0x44afef);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B44aff3:{NFSU2_TR(0x44aff3);
u8 U[14];
__builtin_memmove((U+6),gp(0x7eb5c0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44aff9:{NFSU2_TR(0x44aff9);
if(r1(R+518)){TAIL_STATIC(0x44b000u,44b);}
}
B44affb:L44affb:{c.instructions+=1;NFSU2_TR(0x44affb);
__builtin_memmove(gp(0x7eb5c0),(R+0),4);
TAIL_STATIC(0x44b000u,44b);
}
XIT:NFSU2_TR_EXIT(0x44a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
