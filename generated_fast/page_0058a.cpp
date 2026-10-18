#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58a(u8* __restrict R,Cpu& c);
u32 page_58a(Cpu& c){return body_58a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58a000:goto L58a000;
case 0x58a004:c.instructions+=10;goto B58a004;
case 0x58a008:c.instructions+=9;goto B58a008;
case 0x58a00c:c.instructions+=8;goto B58a00c;
case 0x58a010:c.instructions+=7;goto B58a010;
case 0x58a014:c.instructions+=6;goto B58a014;
case 0x58a015:c.instructions+=5;goto B58a015;
case 0x58a019:c.instructions+=4;goto B58a019;
case 0x58a01a:c.instructions+=3;goto B58a01a;
case 0x58a01c:c.instructions+=2;goto B58a01c;
case 0x58a023:c.instructions+=1;goto B58a023;
case 0x58a028:goto L58a028;
case 0x58a02c:c.instructions+=3;goto B58a02c;
case 0x58a02f:c.instructions+=2;goto B58a02f;
case 0x58a033:c.instructions+=1;goto B58a033;
case 0x58a038:goto L58a038;
case 0x58a03a:c.instructions+=2;goto B58a03a;
case 0x58a03c:c.instructions+=1;goto B58a03c;
case 0x58a03e:goto L58a03e;
case 0x58a041:goto L58a041;
case 0x58a043:c.instructions+=5;goto B58a043;
case 0x58a046:c.instructions+=4;goto B58a046;
case 0x58a047:c.instructions+=3;goto B58a047;
case 0x58a049:c.instructions+=2;goto B58a049;
case 0x58a04a:c.instructions+=1;goto B58a04a;
case 0x58a04f:goto L58a04f;
case 0x58a053:c.instructions+=7;goto B58a053;
case 0x58a055:c.instructions+=6;goto B58a055;
case 0x58a058:c.instructions+=5;goto B58a058;
case 0x58a05b:c.instructions+=4;goto B58a05b;
case 0x58a05d:c.instructions+=3;goto B58a05d;
case 0x58a05f:c.instructions+=2;goto B58a05f;
case 0x58a062:c.instructions+=1;goto B58a062;
case 0x58a064:goto L58a064;
case 0x58a065:c.instructions+=1;goto B58a065;
case 0x58a06a:goto L58a06a;
case 0x58a06d:goto L58a06d;
case 0x58a071:c.instructions+=2;goto B58a071;
case 0x58a073:c.instructions+=1;goto B58a073;
case 0x58a075:goto L58a075;
case 0x58a079:c.instructions+=3;goto B58a079;
case 0x58a07b:c.instructions+=2;goto B58a07b;
case 0x58a086:c.instructions+=1;goto B58a086;
case 0x58a088:goto L58a088;
case 0x58a08a:c.instructions+=6;goto B58a08a;
case 0x58a08c:c.instructions+=5;goto B58a08c;
case 0x58a08f:c.instructions+=4;goto B58a08f;
case 0x58a091:c.instructions+=3;goto B58a091;
case 0x58a092:c.instructions+=2;goto B58a092;
case 0x58a095:c.instructions+=1;goto B58a095;
case 0x58a09a:goto L58a09a;
case 0x58a09e:c.instructions+=4;goto B58a09e;
case 0x58a0a2:c.instructions+=3;goto B58a0a2;
case 0x58a0a5:c.instructions+=2;goto B58a0a5;
case 0x58a0a7:c.instructions+=1;goto B58a0a7;
case 0x58a0a9:goto L58a0a9;
case 0x58a0b0:c.instructions+=7;goto B58a0b0;
case 0x58a0b1:c.instructions+=6;goto B58a0b1;
case 0x58a0b2:c.instructions+=5;goto B58a0b2;
case 0x58a0b9:c.instructions+=4;goto B58a0b9;
case 0x58a0ba:c.instructions+=3;goto B58a0ba;
case 0x58a0bc:c.instructions+=2;goto B58a0bc;
case 0x58a0bd:c.instructions+=1;goto B58a0bd;
case 0x58a0c0:goto L58a0c0;
case 0x58a0c1:c.instructions+=2;goto B58a0c1;
case 0x58a0c3:c.instructions+=1;goto B58a0c3;
case 0x58a0c8:goto L58a0c8;
case 0x58a0cd:c.instructions+=1;goto B58a0cd;
case 0x58a0cf:goto L58a0cf;
case 0x58a0d0:c.instructions+=1;goto B58a0d0;
case 0x58a0d5:goto L58a0d5;
case 0x58a0d8:goto L58a0d8;
case 0x58a0da:c.instructions+=2;goto B58a0da;
case 0x58a0db:c.instructions+=1;goto B58a0db;
case 0x58a0e0:goto L58a0e0;
case 0x58a0e6:c.instructions+=8;goto B58a0e6;
case 0x58a0ec:c.instructions+=7;goto B58a0ec;
case 0x58a0ee:c.instructions+=6;goto B58a0ee;
case 0x58a0f3:c.instructions+=5;goto B58a0f3;
case 0x58a0f4:c.instructions+=4;goto B58a0f4;
case 0x58a0f9:c.instructions+=3;goto B58a0f9;
case 0x58a0fb:c.instructions+=2;goto B58a0fb;
case 0x58a102:c.instructions+=1;goto B58a102;
case 0x58a104:goto L58a104;
case 0x58a10a:c.instructions+=3;goto B58a10a;
case 0x58a10f:c.instructions+=2;goto B58a10f;
case 0x58a117:c.instructions+=1;goto B58a117;
case 0x58a11c:goto L58a11c;
case 0x58a121:c.instructions+=1;goto B58a121;
case 0x58a126:goto L58a126;
case 0x58a129:goto L58a129;
case 0x58a12d:c.instructions+=4;goto B58a12d;
case 0x58a132:c.instructions+=3;goto B58a132;
case 0x58a139:c.instructions+=2;goto B58a139;
case 0x58a13c:c.instructions+=1;goto B58a13c;
case 0x58a140:goto L58a140;
case 0x58a146:c.instructions+=5;goto B58a146;
case 0x58a147:c.instructions+=4;goto B58a147;
case 0x58a14c:c.instructions+=3;goto B58a14c;
case 0x58a14e:c.instructions+=2;goto B58a14e;
case 0x58a150:c.instructions+=1;goto B58a150;
case 0x58a152:goto L58a152;
case 0x58a158:c.instructions+=12;goto B58a158;
case 0x58a15a:c.instructions+=11;goto B58a15a;
case 0x58a15f:c.instructions+=10;goto B58a15f;
case 0x58a165:c.instructions+=9;goto B58a165;
case 0x58a16b:c.instructions+=8;goto B58a16b;
case 0x58a171:c.instructions+=7;goto B58a171;
case 0x58a177:c.instructions+=6;goto B58a177;
case 0x58a181:c.instructions+=5;goto B58a181;
case 0x58a187:c.instructions+=4;goto B58a187;
case 0x58a18d:c.instructions+=3;goto B58a18d;
case 0x58a193:c.instructions+=2;goto B58a193;
case 0x58a199:c.instructions+=1;goto B58a199;
case 0x58a19e:goto L58a19e;
case 0x58a1a1:goto L58a1a1;
case 0x58a1a5:c.instructions+=2;goto B58a1a5;
case 0x58a1a7:c.instructions+=1;goto B58a1a7;
case 0x58a1a9:goto L58a1a9;
case 0x58a1ae:goto L58a1ae;
case 0x58a1b0:c.instructions+=1;goto B58a1b0;
case 0x58a1b2:goto L58a1b2;
case 0x58a1b4:c.instructions+=2;goto B58a1b4;
case 0x58a1b5:c.instructions+=1;goto B58a1b5;
case 0x58a1b6:goto L58a1b6;
case 0x58a1bb:c.instructions+=3;goto B58a1bb;
case 0x58a1c0:c.instructions+=2;goto B58a1c0;
case 0x58a1c1:c.instructions+=1;goto B58a1c1;
case 0x58a1d0:goto L58a1d0;
case 0x58a1d1:c.instructions+=3;goto B58a1d1;
case 0x58a1d2:c.instructions+=2;goto B58a1d2;
case 0x58a1d4:c.instructions+=1;goto B58a1d4;
case 0x58a1d9:goto L58a1d9;
case 0x58a1dc:c.instructions+=2;goto B58a1dc;
case 0x58a1de:c.instructions+=1;goto B58a1de;
case 0x58a1e0:goto L58a1e0;
case 0x58a1e1:c.instructions+=1;goto B58a1e1;
case 0x58a1e3:goto L58a1e3;
case 0x58a1e6:c.instructions+=2;goto B58a1e6;
case 0x58a1e8:c.instructions+=1;goto B58a1e8;
case 0x58a1ea:goto L58a1ea;
case 0x58a1eb:c.instructions+=3;goto B58a1eb;
case 0x58a1ee:c.instructions+=2;goto B58a1ee;
case 0x58a1ef:c.instructions+=1;goto B58a1ef;
case 0x58a1f4:goto L58a1f4;
case 0x58a1f7:c.instructions+=2;goto B58a1f7;
case 0x58a1f8:c.instructions+=1;goto B58a1f8;
case 0x58a1fd:goto L58a1fd;
case 0x58a200:goto L58a200;
case 0x58a201:c.instructions+=2;goto B58a201;
case 0x58a204:c.instructions+=1;goto B58a204;
case 0x58a206:goto L58a206;
case 0x58a207:goto L58a207;
case 0x58a209:c.instructions+=2;goto B58a209;
case 0x58a20b:c.instructions+=1;goto B58a20b;
case 0x58a210:goto L58a210;
case 0x58a212:goto L58a212;
case 0x58a215:c.instructions+=1;goto B58a215;
case 0x58a21a:goto L58a21a;
case 0x58a21c:goto L58a21c;
case 0x58a21f:c.instructions+=1;goto B58a21f;
case 0x58a224:goto L58a224;
case 0x58a226:goto L58a226;
case 0x58a22b:c.instructions+=1;goto B58a22b;
case 0x58a230:goto L58a230;
case 0x58a232:goto L58a232;
case 0x58a233:c.instructions+=2;goto B58a233;
case 0x58a234:c.instructions+=1;goto B58a234;
case 0x58a240:goto L58a240;
case 0x58a241:c.instructions+=9;goto B58a241;
case 0x58a245:c.instructions+=8;goto B58a245;
case 0x58a246:c.instructions+=7;goto B58a246;
case 0x58a249:c.instructions+=6;goto B58a249;
case 0x58a24a:c.instructions+=5;goto B58a24a;
case 0x58a24e:c.instructions+=4;goto B58a24e;
case 0x58a252:c.instructions+=3;goto B58a252;
case 0x58a255:c.instructions+=2;goto B58a255;
case 0x58a256:c.instructions+=1;goto B58a256;
case 0x58a25b:goto L58a25b;
case 0x58a25f:c.instructions+=3;goto B58a25f;
case 0x58a262:c.instructions+=2;goto B58a262;
case 0x58a264:c.instructions+=1;goto B58a264;
case 0x58a266:goto L58a266;
case 0x58a26b:c.instructions+=1;goto B58a26b;
case 0x58a270:goto L58a270;
case 0x58a273:c.instructions+=2;goto B58a273;
case 0x58a275:c.instructions+=1;goto B58a275;
case 0x58a277:goto L58a277;
case 0x58a27e:c.instructions+=1;goto B58a27e;
case 0x58a280:goto L58a280;
case 0x58a281:c.instructions+=1;goto B58a281;
case 0x58a286:goto L58a286;
case 0x58a288:c.instructions+=1;goto B58a288;
case 0x58a28d:goto L58a28d;
case 0x58a28e:c.instructions+=3;goto B58a28e;
case 0x58a28f:c.instructions+=2;goto B58a28f;
case 0x58a290:c.instructions+=1;goto B58a290;
case 0x58a2a0:goto L58a2a0;
case 0x58a2a1:c.instructions+=5;goto B58a2a1;
case 0x58a2a5:c.instructions+=4;goto B58a2a5;
case 0x58a2a8:c.instructions+=3;goto B58a2a8;
case 0x58a2aa:c.instructions+=2;goto B58a2aa;
case 0x58a2ab:c.instructions+=1;goto B58a2ab;
case 0x58a2ad:goto L58a2ad;
case 0x58a2b0:c.instructions+=6;goto B58a2b0;
case 0x58a2b1:c.instructions+=5;goto B58a2b1;
case 0x58a2b2:c.instructions+=4;goto B58a2b2;
case 0x58a2b4:c.instructions+=3;goto B58a2b4;
case 0x58a2b9:c.instructions+=2;goto B58a2b9;
case 0x58a2ba:c.instructions+=1;goto B58a2ba;
case 0x58a2bf:goto L58a2bf;
case 0x58a2c2:c.instructions+=2;goto B58a2c2;
case 0x58a2c3:c.instructions+=1;goto B58a2c3;
case 0x58a2c8:goto L58a2c8;
case 0x58a2cb:c.instructions+=6;goto B58a2cb;
case 0x58a2ce:c.instructions+=5;goto B58a2ce;
case 0x58a2d0:c.instructions+=4;goto B58a2d0;
case 0x58a2d5:c.instructions+=3;goto B58a2d5;
case 0x58a2d6:c.instructions+=2;goto B58a2d6;
case 0x58a2d8:c.instructions+=1;goto B58a2d8;
case 0x58a2dd:goto L58a2dd;
case 0x58a2e0:c.instructions+=2;goto B58a2e0;
case 0x58a2e1:c.instructions+=1;goto B58a2e1;
case 0x58a2e6:goto L58a2e6;
case 0x58a2e9:c.instructions+=5;goto B58a2e9;
case 0x58a2ec:c.instructions+=4;goto B58a2ec;
case 0x58a2ee:c.instructions+=3;goto B58a2ee;
case 0x58a2f3:c.instructions+=2;goto B58a2f3;
case 0x58a2f4:c.instructions+=1;goto B58a2f4;
case 0x58a2f9:goto L58a2f9;
case 0x58a2fc:c.instructions+=2;goto B58a2fc;
case 0x58a2fd:c.instructions+=1;goto B58a2fd;
case 0x58a302:goto L58a302;
case 0x58a306:c.instructions+=4;goto B58a306;
case 0x58a308:c.instructions+=3;goto B58a308;
case 0x58a30b:c.instructions+=2;goto B58a30b;
case 0x58a30d:c.instructions+=1;goto B58a30d;
case 0x58a30f:goto L58a30f;
case 0x58a310:c.instructions+=2;goto B58a310;
case 0x58a315:c.instructions+=1;goto B58a315;
case 0x58a31a:goto L58a31a;
case 0x58a31c:c.instructions+=1;goto B58a31c;
case 0x58a321:goto L58a321;
case 0x58a325:c.instructions+=5;goto B58a325;
case 0x58a326:c.instructions+=4;goto B58a326;
case 0x58a327:c.instructions+=3;goto B58a327;
case 0x58a328:c.instructions+=2;goto B58a328;
case 0x58a329:c.instructions+=1;goto B58a329;
case 0x58a32a:goto L58a32a;
case 0x58a32f:goto L58a32f;
case 0x58a331:c.instructions+=3;goto B58a331;
case 0x58a334:c.instructions+=2;goto B58a334;
case 0x58a336:c.instructions+=1;goto B58a336;
case 0x58a338:goto L58a338;
case 0x58a33b:c.instructions+=2;goto B58a33b;
case 0x58a33d:c.instructions+=1;goto B58a33d;
case 0x58a33f:goto L58a33f;
case 0x58a342:c.instructions+=3;goto B58a342;
case 0x58a343:c.instructions+=2;goto B58a343;
case 0x58a344:c.instructions+=1;goto B58a344;
case 0x58a346:goto L58a346;
case 0x58a349:goto L58a349;
case 0x58a34c:c.instructions+=2;goto B58a34c;
case 0x58a34e:c.instructions+=1;goto B58a34e;
case 0x58a350:goto L58a350;
case 0x58a352:c.instructions+=1;goto B58a352;
case 0x58a357:goto L58a357;
case 0x58a358:c.instructions+=1;goto B58a358;
case 0x58a35d:goto L58a35d;
case 0x58a360:goto L58a360;
case 0x58a367:goto L58a367;
case 0x58a368:c.instructions+=2;goto B58a368;
case 0x58a369:c.instructions+=1;goto B58a369;
case 0x58a370:goto L58a370;
case 0x58a371:c.instructions+=8;goto B58a371;
case 0x58a373:c.instructions+=7;goto B58a373;
case 0x58a376:c.instructions+=6;goto B58a376;
case 0x58a37c:c.instructions+=5;goto B58a37c;
case 0x58a37d:c.instructions+=4;goto B58a37d;
case 0x58a37e:c.instructions+=3;goto B58a37e;
case 0x58a37f:c.instructions+=2;goto B58a37f;
case 0x58a380:c.instructions+=1;goto B58a380;
case 0x58a385:goto L58a385;
case 0x58a388:c.instructions+=2;goto B58a388;
case 0x58a38a:c.instructions+=1;goto B58a38a;
case 0x58a38c:goto L58a38c;
case 0x58a391:c.instructions+=2;goto B58a391;
case 0x58a392:c.instructions+=1;goto B58a392;
case 0x58a397:goto L58a397;
case 0x58a399:c.instructions+=4;goto B58a399;
case 0x58a39c:c.instructions+=3;goto B58a39c;
case 0x58a39e:c.instructions+=2;goto B58a39e;
case 0x58a3a2:c.instructions+=1;goto B58a3a2;
case 0x58a3a4:goto L58a3a4;
case 0x58a3a7:c.instructions+=7;goto B58a3a7;
case 0x58a3a8:c.instructions+=6;goto B58a3a8;
case 0x58a3a9:c.instructions+=5;goto B58a3a9;
case 0x58a3aa:c.instructions+=4;goto B58a3aa;
case 0x58a3ab:c.instructions+=3;goto B58a3ab;
case 0x58a3ad:c.instructions+=2;goto B58a3ad;
case 0x58a3ae:c.instructions+=1;goto B58a3ae;
case 0x58a3af:goto L58a3af;
case 0x58a3b1:goto L58a3b1;
case 0x58a3b3:c.instructions+=4;goto B58a3b3;
case 0x58a3b5:c.instructions+=3;goto B58a3b5;
case 0x58a3ba:c.instructions+=2;goto B58a3ba;
case 0x58a3bf:c.instructions+=1;goto B58a3bf;
case 0x58a3c3:goto L58a3c3;
case 0x58a3c5:goto L58a3c5;
case 0x58a3c7:c.instructions+=2;goto B58a3c7;
case 0x58a3c8:c.instructions+=1;goto B58a3c8;
case 0x58a3ca:goto L58a3ca;
case 0x58a3cf:c.instructions+=3;goto B58a3cf;
case 0x58a3d3:c.instructions+=2;goto B58a3d3;
case 0x58a3d4:c.instructions+=1;goto B58a3d4;
case 0x58a3d6:goto L58a3d6;
case 0x58a3d9:c.instructions+=1;goto B58a3d9;
case 0x58a3db:goto L58a3db;
case 0x58a3e0:c.instructions+=3;goto B58a3e0;
case 0x58a3e4:c.instructions+=2;goto B58a3e4;
case 0x58a3e5:c.instructions+=1;goto B58a3e5;
case 0x58a3e7:goto L58a3e7;
case 0x58a3ea:c.instructions+=1;goto B58a3ea;
case 0x58a3ec:goto L58a3ec;
case 0x58a3f1:c.instructions+=1;goto B58a3f1;
case 0x58a3f3:goto L58a3f3;
case 0x58a3f6:c.instructions+=1;goto B58a3f6;
case 0x58a3f8:goto L58a3f8;
case 0x58a3fd:c.instructions+=3;goto B58a3fd;
case 0x58a401:c.instructions+=2;goto B58a401;
case 0x58a402:c.instructions+=1;goto B58a402;
case 0x58a404:goto L58a404;
case 0x58a407:c.instructions+=1;goto B58a407;
case 0x58a409:goto L58a409;
case 0x58a40e:c.instructions+=3;goto B58a40e;
case 0x58a412:c.instructions+=2;goto B58a412;
case 0x58a413:c.instructions+=1;goto B58a413;
case 0x58a415:goto L58a415;
case 0x58a418:c.instructions+=1;goto B58a418;
case 0x58a41a:goto L58a41a;
case 0x58a41f:goto L58a41f;
case 0x58a423:c.instructions+=1;goto B58a423;
case 0x58a424:goto L58a424;
case 0x58a429:goto L58a429;
case 0x58a42c:goto L58a42c;
case 0x58a42e:c.instructions+=2;goto B58a42e;
case 0x58a433:c.instructions+=1;goto B58a433;
case 0x58a437:goto L58a437;
case 0x58a439:goto L58a439;
case 0x58a43b:c.instructions+=10;goto B58a43b;
case 0x58a440:c.instructions+=9;goto B58a440;
case 0x58a441:c.instructions+=8;goto B58a441;
case 0x58a443:c.instructions+=7;goto B58a443;
case 0x58a447:c.instructions+=6;goto B58a447;
case 0x58a448:c.instructions+=5;goto B58a448;
case 0x58a44c:c.instructions+=4;goto B58a44c;
case 0x58a44d:c.instructions+=3;goto B58a44d;
case 0x58a44e:c.instructions+=2;goto B58a44e;
case 0x58a453:c.instructions+=1;goto B58a453;
case 0x58a458:goto L58a458;
case 0x58a45b:c.instructions+=2;goto B58a45b;
case 0x58a45c:c.instructions+=1;goto B58a45c;
case 0x58a461:goto L58a461;
case 0x58a465:c.instructions+=2;goto B58a465;
case 0x58a466:c.instructions+=1;goto B58a466;
case 0x58a46b:goto L58a46b;
case 0x58a46e:c.instructions+=2;goto B58a46e;
case 0x58a470:c.instructions+=1;goto B58a470;
case 0x58a472:goto L58a472;
case 0x58a475:c.instructions+=5;goto B58a475;
case 0x58a479:c.instructions+=4;goto B58a479;
case 0x58a47d:c.instructions+=3;goto B58a47d;
case 0x58a484:c.instructions+=2;goto B58a484;
case 0x58a489:c.instructions+=1;goto B58a489;
case 0x58a490:goto L58a490;
case 0x58a493:c.instructions+=1;goto B58a493;
case 0x58a495:goto L58a495;
case 0x58a498:c.instructions+=1;goto B58a498;
case 0x58a49a:goto L58a49a;
case 0x58a49d:c.instructions+=3;goto B58a49d;
case 0x58a49e:c.instructions+=2;goto B58a49e;
case 0x58a4a1:c.instructions+=1;goto B58a4a1;
case 0x58a4a3:goto L58a4a3;
case 0x58a4a4:c.instructions+=2;goto B58a4a4;
case 0x58a4a7:c.instructions+=1;goto B58a4a7;
case 0x58a4ac:goto L58a4ac;
case 0x58a4ae:c.instructions+=6;goto B58a4ae;
case 0x58a4b1:c.instructions+=5;goto B58a4b1;
case 0x58a4b4:c.instructions+=4;goto B58a4b4;
case 0x58a4b7:c.instructions+=3;goto B58a4b7;
case 0x58a4b8:c.instructions+=2;goto B58a4b8;
case 0x58a4ba:c.instructions+=1;goto B58a4ba;
case 0x58a4bc:goto L58a4bc;
case 0x58a4c0:goto L58a4c0;
case 0x58a4c1:c.instructions+=2;goto B58a4c1;
case 0x58a4c4:c.instructions+=1;goto B58a4c4;
case 0x58a4ca:goto L58a4ca;
case 0x58a4cb:c.instructions+=7;goto B58a4cb;
case 0x58a4cd:c.instructions+=6;goto B58a4cd;
case 0x58a4ce:c.instructions+=5;goto B58a4ce;
case 0x58a4cf:c.instructions+=4;goto B58a4cf;
case 0x58a4d0:c.instructions+=3;goto B58a4d0;
case 0x58a4d2:c.instructions+=2;goto B58a4d2;
case 0x58a4d3:c.instructions+=1;goto B58a4d3;
case 0x58a4e0:goto L58a4e0;
case 0x58a4e1:c.instructions+=8;goto B58a4e1;
case 0x58a4e3:c.instructions+=7;goto B58a4e3;
case 0x58a4e6:c.instructions+=6;goto B58a4e6;
case 0x58a4ec:c.instructions+=5;goto B58a4ec;
case 0x58a4ed:c.instructions+=4;goto B58a4ed;
case 0x58a4f0:c.instructions+=3;goto B58a4f0;
case 0x58a4f1:c.instructions+=2;goto B58a4f1;
case 0x58a4f2:c.instructions+=1;goto B58a4f2;
case 0x58a4f7:goto L58a4f7;
case 0x58a4fa:c.instructions+=2;goto B58a4fa;
case 0x58a4fc:c.instructions+=1;goto B58a4fc;
case 0x58a4fe:goto L58a4fe;
case 0x58a501:c.instructions+=5;goto B58a501;
case 0x58a502:c.instructions+=4;goto B58a502;
case 0x58a503:c.instructions+=3;goto B58a503;
case 0x58a505:c.instructions+=2;goto B58a505;
case 0x58a506:c.instructions+=1;goto B58a506;
case 0x58a509:goto L58a509;
case 0x58a50b:c.instructions+=3;goto B58a50b;
case 0x58a510:c.instructions+=2;goto B58a510;
case 0x58a515:c.instructions+=1;goto B58a515;
case 0x58a519:goto L58a519;
case 0x58a51b:goto L58a51b;
case 0x58a51d:c.instructions+=7;goto B58a51d;
case 0x58a51e:c.instructions+=6;goto B58a51e;
case 0x58a523:c.instructions+=5;goto B58a523;
case 0x58a524:c.instructions+=4;goto B58a524;
case 0x58a528:c.instructions+=3;goto B58a528;
case 0x58a52d:c.instructions+=2;goto B58a52d;
case 0x58a52e:c.instructions+=1;goto B58a52e;
case 0x58a533:goto L58a533;
case 0x58a536:c.instructions+=3;goto B58a536;
case 0x58a539:c.instructions+=2;goto B58a539;
case 0x58a53b:c.instructions+=1;goto B58a53b;
case 0x58a53d:goto L58a53d;
case 0x58a53e:c.instructions+=5;goto B58a53e;
case 0x58a543:c.instructions+=4;goto B58a543;
case 0x58a547:c.instructions+=3;goto B58a547;
case 0x58a54c:c.instructions+=2;goto B58a54c;
case 0x58a54d:c.instructions+=1;goto B58a54d;
case 0x58a552:goto L58a552;
case 0x58a554:goto L58a554;
case 0x58a559:c.instructions+=5;goto B58a559;
case 0x58a55e:c.instructions+=4;goto B58a55e;
case 0x58a562:c.instructions+=3;goto B58a562;
case 0x58a567:c.instructions+=2;goto B58a567;
case 0x58a568:c.instructions+=1;goto B58a568;
case 0x58a56d:goto L58a56d;
case 0x58a570:c.instructions+=6;goto B58a570;
case 0x58a573:c.instructions+=5;goto B58a573;
case 0x58a576:c.instructions+=4;goto B58a576;
case 0x58a578:c.instructions+=3;goto B58a578;
case 0x58a579:c.instructions+=2;goto B58a579;
case 0x58a57a:c.instructions+=1;goto B58a57a;
case 0x58a57f:goto L58a57f;
case 0x58a580:c.instructions+=5;goto B58a580;
case 0x58a585:c.instructions+=4;goto B58a585;
case 0x58a589:c.instructions+=3;goto B58a589;
case 0x58a58a:c.instructions+=2;goto B58a58a;
case 0x58a58f:c.instructions+=1;goto B58a58f;
case 0x58a594:goto L58a594;
case 0x58a596:c.instructions+=1;goto B58a596;
case 0x58a59b:goto L58a59b;
case 0x58a59c:c.instructions+=4;goto B58a59c;
case 0x58a59d:c.instructions+=3;goto B58a59d;
case 0x58a59f:c.instructions+=2;goto B58a59f;
case 0x58a5a0:c.instructions+=1;goto B58a5a0;
case 0x58a5b0:goto L58a5b0;
case 0x58a5b1:c.instructions+=10;goto B58a5b1;
case 0x58a5b3:c.instructions+=9;goto B58a5b3;
case 0x58a5b6:c.instructions+=8;goto B58a5b6;
case 0x58a5bc:c.instructions+=7;goto B58a5bc;
case 0x58a5bd:c.instructions+=6;goto B58a5bd;
case 0x58a5c0:c.instructions+=5;goto B58a5c0;
case 0x58a5c1:c.instructions+=4;goto B58a5c1;
case 0x58a5c3:c.instructions+=3;goto B58a5c3;
case 0x58a5c8:c.instructions+=2;goto B58a5c8;
case 0x58a5cd:c.instructions+=1;goto B58a5cd;
case 0x58a5d1:goto L58a5d1;
case 0x58a5d3:goto L58a5d3;
case 0x58a5d5:c.instructions+=8;goto B58a5d5;
case 0x58a5d6:c.instructions+=7;goto B58a5d6;
case 0x58a5d9:c.instructions+=6;goto B58a5d9;
case 0x58a5da:c.instructions+=5;goto B58a5da;
case 0x58a5df:c.instructions+=4;goto B58a5df;
case 0x58a5e3:c.instructions+=3;goto B58a5e3;
case 0x58a5e8:c.instructions+=2;goto B58a5e8;
case 0x58a5e9:c.instructions+=1;goto B58a5e9;
case 0x58a5ee:goto L58a5ee;
case 0x58a5f1:c.instructions+=6;goto B58a5f1;
case 0x58a5f2:c.instructions+=5;goto B58a5f2;
case 0x58a5f7:c.instructions+=4;goto B58a5f7;
case 0x58a5fb:c.instructions+=3;goto B58a5fb;
case 0x58a600:c.instructions+=2;goto B58a600;
case 0x58a601:c.instructions+=1;goto B58a601;
case 0x58a606:goto L58a606;
case 0x58a60b:c.instructions+=5;goto B58a60b;
case 0x58a610:c.instructions+=4;goto B58a610;
case 0x58a614:c.instructions+=3;goto B58a614;
case 0x58a619:c.instructions+=2;goto B58a619;
case 0x58a61a:c.instructions+=1;goto B58a61a;
case 0x58a61f:goto L58a61f;
case 0x58a622:c.instructions+=4;goto B58a622;
case 0x58a624:c.instructions+=3;goto B58a624;
case 0x58a626:c.instructions+=2;goto B58a626;
case 0x58a628:c.instructions+=1;goto B58a628;
case 0x58a62d:goto L58a62d;
case 0x58a62e:c.instructions+=5;goto B58a62e;
case 0x58a633:c.instructions+=4;goto B58a633;
case 0x58a637:c.instructions+=3;goto B58a637;
case 0x58a638:c.instructions+=2;goto B58a638;
case 0x58a63d:c.instructions+=1;goto B58a63d;
case 0x58a642:goto L58a642;
case 0x58a644:c.instructions+=1;goto B58a644;
case 0x58a649:goto L58a649;
case 0x58a64a:c.instructions+=4;goto B58a64a;
case 0x58a64b:c.instructions+=3;goto B58a64b;
case 0x58a64d:c.instructions+=2;goto B58a64d;
case 0x58a64e:c.instructions+=1;goto B58a64e;
case 0x58a660:goto L58a660;
case 0x58a661:c.instructions+=7;goto B58a661;
case 0x58a663:c.instructions+=6;goto B58a663;
case 0x58a666:c.instructions+=5;goto B58a666;
case 0x58a66c:c.instructions+=4;goto B58a66c;
case 0x58a66d:c.instructions+=3;goto B58a66d;
case 0x58a66e:c.instructions+=2;goto B58a66e;
case 0x58a66f:c.instructions+=1;goto B58a66f;
case 0x58a674:goto L58a674;
case 0x58a677:c.instructions+=2;goto B58a677;
case 0x58a679:c.instructions+=1;goto B58a679;
case 0x58a67b:goto L58a67b;
case 0x58a67e:c.instructions+=6;goto B58a67e;
case 0x58a67f:c.instructions+=5;goto B58a67f;
case 0x58a680:c.instructions+=4;goto B58a680;
case 0x58a681:c.instructions+=3;goto B58a681;
case 0x58a683:c.instructions+=2;goto B58a683;
case 0x58a684:c.instructions+=1;goto B58a684;
case 0x58a687:goto L58a687;
case 0x58a68a:c.instructions+=2;goto B58a68a;
case 0x58a68c:c.instructions+=1;goto B58a68c;
case 0x58a692:goto L58a692;
case 0x58a695:c.instructions+=1;goto B58a695;
case 0x58a69b:goto L58a69b;
case 0x58a69e:c.instructions+=2;goto B58a69e;
case 0x58a6a0:c.instructions+=1;goto B58a6a0;
case 0x58a6a6:goto L58a6a6;
case 0x58a6a9:c.instructions+=1;goto B58a6a9;
case 0x58a6af:goto L58a6af;
case 0x58a6b1:c.instructions+=2;goto B58a6b1;
case 0x58a6b6:c.instructions+=1;goto B58a6b6;
case 0x58a6b8:goto L58a6b8;
case 0x58a6bd:c.instructions+=1;goto B58a6bd;
case 0x58a6bf:goto L58a6bf;
case 0x58a6c2:c.instructions+=1;goto B58a6c2;
case 0x58a6c4:goto L58a6c4;
case 0x58a6c9:c.instructions+=1;goto B58a6c9;
case 0x58a6cb:goto L58a6cb;
case 0x58a6ce:c.instructions+=1;goto B58a6ce;
case 0x58a6d0:goto L58a6d0;
case 0x58a6d5:c.instructions+=1;goto B58a6d5;
case 0x58a6d7:goto L58a6d7;
case 0x58a6da:c.instructions+=1;goto B58a6da;
case 0x58a6dc:goto L58a6dc;
case 0x58a6e1:c.instructions+=1;goto B58a6e1;
case 0x58a6e3:goto L58a6e3;
case 0x58a6e6:c.instructions+=1;goto B58a6e6;
case 0x58a6e8:goto L58a6e8;
case 0x58a6ed:goto L58a6ed;
case 0x58a6ef:c.instructions+=3;goto B58a6ef;
case 0x58a6f4:c.instructions+=2;goto B58a6f4;
case 0x58a6f9:c.instructions+=1;goto B58a6f9;
case 0x58a6fd:goto L58a6fd;
case 0x58a6ff:goto L58a6ff;
case 0x58a701:c.instructions+=8;goto B58a701;
case 0x58a702:c.instructions+=7;goto B58a702;
case 0x58a705:c.instructions+=6;goto B58a705;
case 0x58a706:c.instructions+=5;goto B58a706;
case 0x58a70b:c.instructions+=4;goto B58a70b;
case 0x58a70f:c.instructions+=3;goto B58a70f;
case 0x58a714:c.instructions+=2;goto B58a714;
case 0x58a715:c.instructions+=1;goto B58a715;
case 0x58a71a:goto L58a71a;
case 0x58a71b:c.instructions+=5;goto B58a71b;
case 0x58a720:c.instructions+=4;goto B58a720;
case 0x58a724:c.instructions+=3;goto B58a724;
case 0x58a729:c.instructions+=2;goto B58a729;
case 0x58a72a:c.instructions+=1;goto B58a72a;
case 0x58a72f:goto L58a72f;
case 0x58a730:c.instructions+=5;goto B58a730;
case 0x58a735:c.instructions+=4;goto B58a735;
case 0x58a739:c.instructions+=3;goto B58a739;
case 0x58a73e:c.instructions+=2;goto B58a73e;
case 0x58a73f:c.instructions+=1;goto B58a73f;
case 0x58a744:goto L58a744;
case 0x58a747:c.instructions+=4;goto B58a747;
case 0x58a749:c.instructions+=3;goto B58a749;
case 0x58a74b:c.instructions+=2;goto B58a74b;
case 0x58a74d:c.instructions+=1;goto B58a74d;
case 0x58a752:goto L58a752;
case 0x58a753:c.instructions+=5;goto B58a753;
case 0x58a758:c.instructions+=4;goto B58a758;
case 0x58a75c:c.instructions+=3;goto B58a75c;
case 0x58a75d:c.instructions+=2;goto B58a75d;
case 0x58a762:c.instructions+=1;goto B58a762;
case 0x58a767:goto L58a767;
case 0x58a769:c.instructions+=1;goto B58a769;
case 0x58a76e:goto L58a76e;
case 0x58a76f:c.instructions+=5;goto B58a76f;
case 0x58a770:c.instructions+=4;goto B58a770;
case 0x58a771:c.instructions+=3;goto B58a771;
case 0x58a773:c.instructions+=2;goto B58a773;
case 0x58a774:c.instructions+=1;goto B58a774;
case 0x58a777:goto L58a777;
case 0x58a778:c.instructions+=6;goto B58a778;
case 0x58a779:c.instructions+=5;goto B58a779;
case 0x58a77e:c.instructions+=4;goto B58a77e;
case 0x58a77f:c.instructions+=3;goto B58a77f;
case 0x58a781:c.instructions+=2;goto B58a781;
case 0x58a782:c.instructions+=1;goto B58a782;
case 0x58a790:goto L58a790;
case 0x58a794:c.instructions+=8;goto B58a794;
case 0x58a796:c.instructions+=7;goto B58a796;
case 0x58a797:c.instructions+=6;goto B58a797;
case 0x58a798:c.instructions+=5;goto B58a798;
case 0x58a79c:c.instructions+=4;goto B58a79c;
case 0x58a79e:c.instructions+=3;goto B58a79e;
case 0x58a7a1:c.instructions+=2;goto B58a7a1;
case 0x58a7a4:c.instructions+=1;goto B58a7a4;
case 0x58a7a6:goto L58a7a6;
case 0x58a7ab:goto L58a7ab;
case 0x58a7ae:c.instructions+=2;goto B58a7ae;
case 0x58a7b0:c.instructions+=1;goto B58a7b0;
case 0x58a7b2:goto L58a7b2;
case 0x58a7b5:c.instructions+=3;goto B58a7b5;
case 0x58a7b8:c.instructions+=2;goto B58a7b8;
case 0x58a7bb:c.instructions+=1;goto B58a7bb;
case 0x58a7bd:goto L58a7bd;
case 0x58a7be:c.instructions+=3;goto B58a7be;
case 0x58a7bf:c.instructions+=2;goto B58a7bf;
case 0x58a7c1:c.instructions+=1;goto B58a7c1;
case 0x58a7c4:goto L58a7c4;
case 0x58a7c7:goto L58a7c7;
case 0x58a7ca:c.instructions+=2;goto B58a7ca;
case 0x58a7cc:c.instructions+=1;goto B58a7cc;
case 0x58a7ce:goto L58a7ce;
case 0x58a7cf:c.instructions+=3;goto B58a7cf;
case 0x58a7d1:c.instructions+=2;goto B58a7d1;
case 0x58a7d3:c.instructions+=1;goto B58a7d3;
case 0x58a7d6:goto L58a7d6;
case 0x58a7d9:goto L58a7d9;
case 0x58a7da:c.instructions+=2;goto B58a7da;
case 0x58a7db:c.instructions+=1;goto B58a7db;
case 0x58a7e0:goto L58a7e0;
case 0x58a7e1:c.instructions+=8;goto B58a7e1;
case 0x58a7e3:c.instructions+=7;goto B58a7e3;
case 0x58a7e6:c.instructions+=6;goto B58a7e6;
case 0x58a7ec:c.instructions+=5;goto B58a7ec;
case 0x58a7ed:c.instructions+=4;goto B58a7ed;
case 0x58a7ee:c.instructions+=3;goto B58a7ee;
case 0x58a7ef:c.instructions+=2;goto B58a7ef;
case 0x58a7f1:c.instructions+=1;goto B58a7f1;
case 0x58a7f6:goto L58a7f6;
case 0x58a7f9:c.instructions+=2;goto B58a7f9;
case 0x58a7fb:c.instructions+=1;goto B58a7fb;
case 0x58a801:goto L58a801;
case 0x58a805:c.instructions+=1;goto B58a805;
case 0x58a80b:goto L58a80b;
case 0x58a810:c.instructions+=1;goto B58a810;
case 0x58a815:goto L58a815;
case 0x58a816:c.instructions+=3;goto B58a816;
case 0x58a819:c.instructions+=2;goto B58a819;
case 0x58a81a:c.instructions+=1;goto B58a81a;
case 0x58a81f:goto L58a81f;
case 0x58a822:c.instructions+=2;goto B58a822;
case 0x58a824:c.instructions+=1;goto B58a824;
case 0x58a82a:goto L58a82a;
case 0x58a82f:goto L58a82f;
case 0x58a832:c.instructions+=2;goto B58a832;
case 0x58a834:c.instructions+=1;goto B58a834;
case 0x58a836:goto L58a836;
case 0x58a83d:c.instructions+=1;goto B58a83d;
case 0x58a83f:goto L58a83f;
case 0x58a842:c.instructions+=1;goto B58a842;
case 0x58a844:goto L58a844;
case 0x58a847:c.instructions+=3;goto B58a847;
case 0x58a849:c.instructions+=2;goto B58a849;
case 0x58a84b:c.instructions+=1;goto B58a84b;
case 0x58a84d:goto L58a84d;
case 0x58a850:goto L58a850;
case 0x58a857:c.instructions+=1;goto B58a857;
case 0x58a859:goto L58a859;
case 0x58a85b:c.instructions+=2;goto B58a85b;
case 0x58a85d:c.instructions+=1;goto B58a85d;
case 0x58a85f:goto L58a85f;
case 0x58a861:goto L58a861;
case 0x58a864:goto L58a864;
case 0x58a867:c.instructions+=1;goto B58a867;
case 0x58a86d:goto L58a86d;
case 0x58a873:c.instructions+=2;goto B58a873;
case 0x58a879:c.instructions+=1;goto B58a879;
case 0x58a87f:goto L58a87f;
case 0x58a881:c.instructions+=3;goto B58a881;
case 0x58a889:c.instructions+=2;goto B58a889;
case 0x58a88e:c.instructions+=1;goto B58a88e;
case 0x58a895:goto L58a895;
case 0x58a897:goto L58a897;
case 0x58a899:c.instructions+=4;goto B58a899;
case 0x58a89a:c.instructions+=3;goto B58a89a;
case 0x58a89e:c.instructions+=2;goto B58a89e;
case 0x58a8a2:c.instructions+=1;goto B58a8a2;
case 0x58a8a8:goto L58a8a8;
case 0x58a8aa:c.instructions+=3;goto B58a8aa;
case 0x58a8af:c.instructions+=2;goto B58a8af;
case 0x58a8b4:c.instructions+=1;goto B58a8b4;
case 0x58a8b8:goto L58a8b8;
case 0x58a8ba:goto L58a8ba;
case 0x58a8bc:c.instructions+=4;goto B58a8bc;
case 0x58a8bd:c.instructions+=3;goto B58a8bd;
case 0x58a8c2:c.instructions+=2;goto B58a8c2;
case 0x58a8c4:c.instructions+=1;goto B58a8c4;
case 0x58a8c6:goto L58a8c6;
case 0x58a8cc:c.instructions+=1;goto B58a8cc;
case 0x58a8d0:goto L58a8d0;
case 0x58a8d7:c.instructions+=1;goto B58a8d7;
case 0x58a8d9:goto L58a8d9;
case 0x58a8dd:c.instructions+=2;goto B58a8dd;
case 0x58a8de:c.instructions+=1;goto B58a8de;
case 0x58a8e3:goto L58a8e3;
case 0x58a8e6:c.instructions+=2;goto B58a8e6;
case 0x58a8e8:c.instructions+=1;goto B58a8e8;
case 0x58a8ea:goto L58a8ea;
case 0x58a8ef:c.instructions+=5;goto B58a8ef;
case 0x58a8f3:c.instructions+=4;goto B58a8f3;
case 0x58a8f4:c.instructions+=3;goto B58a8f4;
case 0x58a8f8:c.instructions+=2;goto B58a8f8;
case 0x58a8f9:c.instructions+=1;goto B58a8f9;
case 0x58a8fe:goto L58a8fe;
case 0x58a901:goto L58a901;
case 0x58a902:c.instructions+=5;goto B58a902;
case 0x58a906:c.instructions+=4;goto B58a906;
case 0x58a907:c.instructions+=3;goto B58a907;
case 0x58a90b:c.instructions+=2;goto B58a90b;
case 0x58a90c:c.instructions+=1;goto B58a90c;
case 0x58a911:goto L58a911;
case 0x58a915:c.instructions+=3;goto B58a915;
case 0x58a918:c.instructions+=2;goto B58a918;
case 0x58a919:c.instructions+=1;goto B58a919;
case 0x58a91d:goto L58a91d;
case 0x58a923:c.instructions+=4;goto B58a923;
case 0x58a924:c.instructions+=3;goto B58a924;
case 0x58a927:c.instructions+=2;goto B58a927;
case 0x58a929:c.instructions+=1;goto B58a929;
case 0x58a92b:goto L58a92b;
case 0x58a92f:c.instructions+=2;goto B58a92f;
case 0x58a930:c.instructions+=1;goto B58a930;
case 0x58a935:goto L58a935;
case 0x58a938:c.instructions+=2;goto B58a938;
case 0x58a93a:c.instructions+=1;goto B58a93a;
case 0x58a93c:goto L58a93c;
case 0x58a93f:c.instructions+=6;goto B58a93f;
case 0x58a940:c.instructions+=5;goto B58a940;
case 0x58a945:c.instructions+=4;goto B58a945;
case 0x58a94c:c.instructions+=3;goto B58a94c;
case 0x58a951:c.instructions+=2;goto B58a951;
case 0x58a952:c.instructions+=1;goto B58a952;
case 0x58a957:goto L58a957;
case 0x58a95b:c.instructions+=6;goto B58a95b;
case 0x58a95c:c.instructions+=5;goto B58a95c;
case 0x58a961:c.instructions+=4;goto B58a961;
case 0x58a968:c.instructions+=3;goto B58a968;
case 0x58a96d:c.instructions+=2;goto B58a96d;
case 0x58a96e:c.instructions+=1;goto B58a96e;
case 0x58a973:goto L58a973;
case 0x58a976:c.instructions+=9;goto B58a976;
case 0x58a978:c.instructions+=8;goto B58a978;
case 0x58a97a:c.instructions+=7;goto B58a97a;
case 0x58a97c:c.instructions+=6;goto B58a97c;
case 0x58a97e:c.instructions+=5;goto B58a97e;
case 0x58a980:c.instructions+=4;goto B58a980;
case 0x58a987:c.instructions+=3;goto B58a987;
case 0x58a988:c.instructions+=2;goto B58a988;
case 0x58a98d:c.instructions+=1;goto B58a98d;
case 0x58a992:goto L58a992;
case 0x58a994:c.instructions+=1;goto B58a994;
case 0x58a999:goto L58a999;
case 0x58a99b:goto L58a99b;
case 0x58a99d:c.instructions+=1;goto B58a99d;
case 0x58a9a2:goto L58a9a2;
case 0x58a9a4:c.instructions+=1;goto B58a9a4;
case 0x58a9a6:goto L58a9a6;
case 0x58a9aa:c.instructions+=2;goto B58a9aa;
case 0x58a9b0:c.instructions+=1;goto B58a9b0;
case 0x58a9b2:goto L58a9b2;
case 0x58a9b5:c.instructions+=6;goto B58a9b5;
case 0x58a9b6:c.instructions+=5;goto B58a9b6;
case 0x58a9bb:c.instructions+=4;goto B58a9bb;
case 0x58a9c2:c.instructions+=3;goto B58a9c2;
case 0x58a9c7:c.instructions+=2;goto B58a9c7;
case 0x58a9c8:c.instructions+=1;goto B58a9c8;
case 0x58a9cd:goto L58a9cd;
case 0x58a9d0:c.instructions+=6;goto B58a9d0;
case 0x58a9d3:c.instructions+=5;goto B58a9d3;
case 0x58a9d6:c.instructions+=4;goto B58a9d6;
case 0x58a9d8:c.instructions+=3;goto B58a9d8;
case 0x58a9d9:c.instructions+=2;goto B58a9d9;
case 0x58a9da:c.instructions+=1;goto B58a9da;
case 0x58a9df:goto L58a9df;
case 0x58a9e0:c.instructions+=5;goto B58a9e0;
case 0x58a9e5:c.instructions+=4;goto B58a9e5;
case 0x58a9ec:c.instructions+=3;goto B58a9ec;
case 0x58a9ed:c.instructions+=2;goto B58a9ed;
case 0x58a9f2:c.instructions+=1;goto B58a9f2;
case 0x58a9f7:goto L58a9f7;
case 0x58a9f9:c.instructions+=1;goto B58a9f9;
case 0x58a9fe:goto L58a9fe;
case 0x58a9ff:c.instructions+=5;goto B58a9ff;
case 0x58aa00:c.instructions+=4;goto B58aa00;
case 0x58aa01:c.instructions+=3;goto B58aa01;
case 0x58aa03:c.instructions+=2;goto B58aa03;
case 0x58aa04:c.instructions+=1;goto B58aa04;
case 0x58aa07:goto L58aa07;
case 0x58aa09:c.instructions+=6;goto B58aa09;
case 0x58aa0a:c.instructions+=5;goto B58aa0a;
case 0x58aa0b:c.instructions+=4;goto B58aa0b;
case 0x58aa0c:c.instructions+=3;goto B58aa0c;
case 0x58aa0e:c.instructions+=2;goto B58aa0e;
case 0x58aa0f:c.instructions+=1;goto B58aa0f;
case 0x58aa12:goto L58aa12;
case 0x58aa13:c.instructions+=6;goto B58aa13;
case 0x58aa14:c.instructions+=5;goto B58aa14;
case 0x58aa17:c.instructions+=4;goto B58aa17;
case 0x58aa18:c.instructions+=3;goto B58aa18;
case 0x58aa1a:c.instructions+=2;goto B58aa1a;
case 0x58aa1b:c.instructions+=1;goto B58aa1b;
case 0x58aa20:goto L58aa20;
case 0x58aa21:c.instructions+=7;goto B58aa21;
case 0x58aa23:c.instructions+=6;goto B58aa23;
case 0x58aa26:c.instructions+=5;goto B58aa26;
case 0x58aa2c:c.instructions+=4;goto B58aa2c;
case 0x58aa2d:c.instructions+=3;goto B58aa2d;
case 0x58aa2e:c.instructions+=2;goto B58aa2e;
case 0x58aa30:c.instructions+=1;goto B58aa30;
case 0x58aa35:goto L58aa35;
case 0x58aa38:c.instructions+=2;goto B58aa38;
case 0x58aa3a:c.instructions+=1;goto B58aa3a;
case 0x58aa3c:goto L58aa3c;
case 0x58aa40:c.instructions+=1;goto B58aa40;
case 0x58aa42:goto L58aa42;
case 0x58aa47:c.instructions+=1;goto B58aa47;
case 0x58aa4c:goto L58aa4c;
case 0x58aa4d:c.instructions+=3;goto B58aa4d;
case 0x58aa50:c.instructions+=2;goto B58aa50;
case 0x58aa51:c.instructions+=1;goto B58aa51;
case 0x58aa56:goto L58aa56;
case 0x58aa59:c.instructions+=2;goto B58aa59;
case 0x58aa5b:c.instructions+=1;goto B58aa5b;
case 0x58aa5d:goto L58aa5d;
case 0x58aa63:c.instructions+=2;goto B58aa63;
case 0x58aa66:c.instructions+=1;goto B58aa66;
case 0x58aa68:goto L58aa68;
case 0x58aa6e:c.instructions+=3;goto B58aa6e;
case 0x58aa73:c.instructions+=2;goto B58aa73;
case 0x58aa75:c.instructions+=1;goto B58aa75;
case 0x58aa77:goto L58aa77;
case 0x58aa7d:c.instructions+=1;goto B58aa7d;
case 0x58aa80:goto L58aa80;
case 0x58aa86:c.instructions+=1;goto B58aa86;
case 0x58aa88:goto L58aa88;
case 0x58aa89:c.instructions+=3;goto B58aa89;
case 0x58aa8c:c.instructions+=2;goto B58aa8c;
case 0x58aa8e:c.instructions+=1;goto B58aa8e;
case 0x58aa90:goto L58aa90;
case 0x58aa93:c.instructions+=5;goto B58aa93;
case 0x58aa94:c.instructions+=4;goto B58aa94;
case 0x58aa95:c.instructions+=3;goto B58aa95;
case 0x58aa97:c.instructions+=2;goto B58aa97;
case 0x58aa98:c.instructions+=1;goto B58aa98;
case 0x58aa9b:goto L58aa9b;
case 0x58aaa0:c.instructions+=3;goto B58aaa0;
case 0x58aaa2:c.instructions+=2;goto B58aaa2;
case 0x58aaa7:c.instructions+=1;goto B58aaa7;
case 0x58aaab:goto L58aaab;
case 0x58aaad:goto L58aaad;
case 0x58aab0:c.instructions+=8;goto B58aab0;
case 0x58aab1:c.instructions+=7;goto B58aab1;
case 0x58aab6:c.instructions+=6;goto B58aab6;
case 0x58aab8:c.instructions+=5;goto B58aab8;
case 0x58aabc:c.instructions+=4;goto B58aabc;
case 0x58aac1:c.instructions+=3;goto B58aac1;
case 0x58aac2:c.instructions+=2;goto B58aac2;
case 0x58aac3:c.instructions+=1;goto B58aac3;
case 0x58aac8:goto L58aac8;
case 0x58aace:c.instructions+=7;goto B58aace;
case 0x58aad3:c.instructions+=6;goto B58aad3;
case 0x58aad4:c.instructions+=5;goto B58aad4;
case 0x58aad9:c.instructions+=4;goto B58aad9;
case 0x58aadd:c.instructions+=3;goto B58aadd;
case 0x58aae2:c.instructions+=2;goto B58aae2;
case 0x58aae3:c.instructions+=1;goto B58aae3;
case 0x58aae8:goto L58aae8;
case 0x58aaee:c.instructions+=7;goto B58aaee;
case 0x58aaf4:c.instructions+=6;goto B58aaf4;
case 0x58aaf5:c.instructions+=5;goto B58aaf5;
case 0x58aafa:c.instructions+=4;goto B58aafa;
case 0x58aafe:c.instructions+=3;goto B58aafe;
case 0x58ab03:c.instructions+=2;goto B58ab03;
case 0x58ab04:c.instructions+=1;goto B58ab04;
case 0x58ab09:goto L58ab09;
case 0x58ab0c:c.instructions+=6;goto B58ab0c;
case 0x58ab0f:c.instructions+=5;goto B58ab0f;
case 0x58ab12:c.instructions+=4;goto B58ab12;
case 0x58ab14:c.instructions+=3;goto B58ab14;
case 0x58ab15:c.instructions+=2;goto B58ab15;
case 0x58ab16:c.instructions+=1;goto B58ab16;
case 0x58ab1b:goto L58ab1b;
case 0x58ab1c:c.instructions+=5;goto B58ab1c;
case 0x58ab21:c.instructions+=4;goto B58ab21;
case 0x58ab25:c.instructions+=3;goto B58ab25;
case 0x58ab26:c.instructions+=2;goto B58ab26;
case 0x58ab2b:c.instructions+=1;goto B58ab2b;
case 0x58ab30:goto L58ab30;
case 0x58ab32:c.instructions+=1;goto B58ab32;
case 0x58ab37:goto L58ab37;
case 0x58ab38:c.instructions+=4;goto B58ab38;
case 0x58ab39:c.instructions+=3;goto B58ab39;
case 0x58ab3b:c.instructions+=2;goto B58ab3b;
case 0x58ab3c:c.instructions+=1;goto B58ab3c;
case 0x58ab40:goto L58ab40;
case 0x58ab41:c.instructions+=7;goto B58ab41;
case 0x58ab43:c.instructions+=6;goto B58ab43;
case 0x58ab46:c.instructions+=5;goto B58ab46;
case 0x58ab4c:c.instructions+=4;goto B58ab4c;
case 0x58ab4d:c.instructions+=3;goto B58ab4d;
case 0x58ab4e:c.instructions+=2;goto B58ab4e;
case 0x58ab50:c.instructions+=1;goto B58ab50;
case 0x58ab55:goto L58ab55;
case 0x58ab58:c.instructions+=2;goto B58ab58;
case 0x58ab5a:c.instructions+=1;goto B58ab5a;
case 0x58ab60:goto L58ab60;
case 0x58ab64:c.instructions+=1;goto B58ab64;
case 0x58ab6a:goto L58ab6a;
case 0x58ab6f:c.instructions+=1;goto B58ab6f;
case 0x58ab74:goto L58ab74;
case 0x58ab75:c.instructions+=3;goto B58ab75;
case 0x58ab78:c.instructions+=2;goto B58ab78;
case 0x58ab79:c.instructions+=1;goto B58ab79;
case 0x58ab7e:goto L58ab7e;
case 0x58ab81:c.instructions+=2;goto B58ab81;
case 0x58ab83:c.instructions+=1;goto B58ab83;
case 0x58ab89:goto L58ab89;
case 0x58ab8f:c.instructions+=2;goto B58ab8f;
case 0x58ab92:c.instructions+=1;goto B58ab92;
case 0x58ab98:goto L58ab98;
case 0x58ab9d:c.instructions+=3;goto B58ab9d;
case 0x58ab9f:c.instructions+=2;goto B58ab9f;
case 0x58aba4:c.instructions+=1;goto B58aba4;
case 0x58aba8:goto L58aba8;
case 0x58abaa:goto L58abaa;
case 0x58abad:c.instructions+=8;goto B58abad;
case 0x58abae:c.instructions+=7;goto B58abae;
case 0x58abb3:c.instructions+=6;goto B58abb3;
case 0x58abb5:c.instructions+=5;goto B58abb5;
case 0x58abb9:c.instructions+=4;goto B58abb9;
case 0x58abbe:c.instructions+=3;goto B58abbe;
case 0x58abbf:c.instructions+=2;goto B58abbf;
case 0x58abc0:c.instructions+=1;goto B58abc0;
case 0x58abc5:goto L58abc5;
case 0x58abcb:c.instructions+=7;goto B58abcb;
case 0x58abd0:c.instructions+=6;goto B58abd0;
case 0x58abd1:c.instructions+=5;goto B58abd1;
case 0x58abd6:c.instructions+=4;goto B58abd6;
case 0x58abda:c.instructions+=3;goto B58abda;
case 0x58abdf:c.instructions+=2;goto B58abdf;
case 0x58abe0:c.instructions+=1;goto B58abe0;
case 0x58abe5:goto L58abe5;
case 0x58abeb:c.instructions+=7;goto B58abeb;
case 0x58abf1:c.instructions+=6;goto B58abf1;
case 0x58abf2:c.instructions+=5;goto B58abf2;
case 0x58abf7:c.instructions+=4;goto B58abf7;
case 0x58abfb:c.instructions+=3;goto B58abfb;
case 0x58ac00:c.instructions+=2;goto B58ac00;
case 0x58ac01:c.instructions+=1;goto B58ac01;
case 0x58ac06:goto L58ac06;
case 0x58ac09:c.instructions+=6;goto B58ac09;
case 0x58ac0c:c.instructions+=5;goto B58ac0c;
case 0x58ac0f:c.instructions+=4;goto B58ac0f;
case 0x58ac11:c.instructions+=3;goto B58ac11;
case 0x58ac12:c.instructions+=2;goto B58ac12;
case 0x58ac13:c.instructions+=1;goto B58ac13;
case 0x58ac18:goto L58ac18;
case 0x58ac19:c.instructions+=5;goto B58ac19;
case 0x58ac1e:c.instructions+=4;goto B58ac1e;
case 0x58ac22:c.instructions+=3;goto B58ac22;
case 0x58ac23:c.instructions+=2;goto B58ac23;
case 0x58ac28:c.instructions+=1;goto B58ac28;
case 0x58ac2d:goto L58ac2d;
case 0x58ac2f:c.instructions+=1;goto B58ac2f;
case 0x58ac34:goto L58ac34;
case 0x58ac35:c.instructions+=4;goto B58ac35;
case 0x58ac36:c.instructions+=3;goto B58ac36;
case 0x58ac38:c.instructions+=2;goto B58ac38;
case 0x58ac39:c.instructions+=1;goto B58ac39;
case 0x58ac3c:goto L58ac3c;
case 0x58ac3d:c.instructions+=5;goto B58ac3d;
case 0x58ac40:c.instructions+=4;goto B58ac40;
case 0x58ac41:c.instructions+=3;goto B58ac41;
case 0x58ac43:c.instructions+=2;goto B58ac43;
case 0x58ac44:c.instructions+=1;goto B58ac44;
case 0x58ac50:goto L58ac50;
case 0x58ac51:c.instructions+=8;goto B58ac51;
case 0x58ac53:c.instructions+=7;goto B58ac53;
case 0x58ac56:c.instructions+=6;goto B58ac56;
case 0x58ac5c:c.instructions+=5;goto B58ac5c;
case 0x58ac5d:c.instructions+=4;goto B58ac5d;
case 0x58ac5e:c.instructions+=3;goto B58ac5e;
case 0x58ac5f:c.instructions+=2;goto B58ac5f;
case 0x58ac61:c.instructions+=1;goto B58ac61;
case 0x58ac66:goto L58ac66;
case 0x58ac69:c.instructions+=2;goto B58ac69;
case 0x58ac6b:c.instructions+=1;goto B58ac6b;
case 0x58ac71:goto L58ac71;
case 0x58ac74:c.instructions+=2;goto B58ac74;
case 0x58ac76:c.instructions+=1;goto B58ac76;
case 0x58ac7c:goto L58ac7c;
case 0x58ac7f:c.instructions+=1;goto B58ac7f;
case 0x58ac85:goto L58ac85;
case 0x58ac88:c.instructions+=2;goto B58ac88;
case 0x58ac8a:c.instructions+=1;goto B58ac8a;
case 0x58ac8c:goto L58ac8c;
case 0x58ac8e:c.instructions+=3;goto B58ac8e;
case 0x58ac93:c.instructions+=2;goto B58ac93;
case 0x58ac98:c.instructions+=1;goto B58ac98;
case 0x58ac9c:goto L58ac9c;
case 0x58ac9e:goto L58ac9e;
case 0x58aca0:c.instructions+=8;goto B58aca0;
case 0x58aca3:c.instructions+=7;goto B58aca3;
case 0x58aca4:c.instructions+=6;goto B58aca4;
case 0x58aca9:c.instructions+=5;goto B58aca9;
case 0x58acaa:c.instructions+=4;goto B58acaa;
case 0x58acae:c.instructions+=3;goto B58acae;
case 0x58acb3:c.instructions+=2;goto B58acb3;
case 0x58acb4:c.instructions+=1;goto B58acb4;
case 0x58acb9:goto L58acb9;
case 0x58acba:c.instructions+=5;goto B58acba;
case 0x58acbf:c.instructions+=4;goto B58acbf;
case 0x58acc3:c.instructions+=3;goto B58acc3;
case 0x58acc8:c.instructions+=2;goto B58acc8;
case 0x58acc9:c.instructions+=1;goto B58acc9;
case 0x58acce:goto L58acce;
case 0x58acd1:c.instructions+=6;goto B58acd1;
case 0x58acd4:c.instructions+=5;goto B58acd4;
case 0x58acd7:c.instructions+=4;goto B58acd7;
case 0x58acd9:c.instructions+=3;goto B58acd9;
case 0x58acda:c.instructions+=2;goto B58acda;
case 0x58acdb:c.instructions+=1;goto B58acdb;
case 0x58ace0:goto L58ace0;
case 0x58ace1:c.instructions+=5;goto B58ace1;
case 0x58ace6:c.instructions+=4;goto B58ace6;
case 0x58acea:c.instructions+=3;goto B58acea;
case 0x58aceb:c.instructions+=2;goto B58aceb;
case 0x58acf0:c.instructions+=1;goto B58acf0;
case 0x58acf5:goto L58acf5;
case 0x58acf7:c.instructions+=1;goto B58acf7;
case 0x58acfc:goto L58acfc;
case 0x58acfd:c.instructions+=5;goto B58acfd;
case 0x58acfe:c.instructions+=4;goto B58acfe;
case 0x58acff:c.instructions+=3;goto B58acff;
case 0x58ad01:c.instructions+=2;goto B58ad01;
case 0x58ad02:c.instructions+=1;goto B58ad02;
case 0x58ad05:goto L58ad05;
case 0x58ad06:c.instructions+=6;goto B58ad06;
case 0x58ad07:c.instructions+=5;goto B58ad07;
case 0x58ad0a:c.instructions+=4;goto B58ad0a;
case 0x58ad0b:c.instructions+=3;goto B58ad0b;
case 0x58ad0d:c.instructions+=2;goto B58ad0d;
case 0x58ad0e:c.instructions+=1;goto B58ad0e;
case 0x58ad20:goto L58ad20;
case 0x58ad21:c.instructions+=8;goto B58ad21;
case 0x58ad23:c.instructions+=7;goto B58ad23;
case 0x58ad26:c.instructions+=6;goto B58ad26;
case 0x58ad2c:c.instructions+=5;goto B58ad2c;
case 0x58ad2d:c.instructions+=4;goto B58ad2d;
case 0x58ad2e:c.instructions+=3;goto B58ad2e;
case 0x58ad2f:c.instructions+=2;goto B58ad2f;
case 0x58ad31:c.instructions+=1;goto B58ad31;
case 0x58ad36:goto L58ad36;
case 0x58ad39:c.instructions+=2;goto B58ad39;
case 0x58ad3b:c.instructions+=1;goto B58ad3b;
case 0x58ad41:goto L58ad41;
case 0x58ad44:c.instructions+=3;goto B58ad44;
case 0x58ad46:c.instructions+=2;goto B58ad46;
case 0x58ad48:c.instructions+=1;goto B58ad48;
case 0x58ad4e:goto L58ad4e;
case 0x58ad54:c.instructions+=2;goto B58ad54;
case 0x58ad58:c.instructions+=1;goto B58ad58;
case 0x58ad5a:goto L58ad5a;
case 0x58ad60:goto L58ad60;
case 0x58ad65:c.instructions+=1;goto B58ad65;
case 0x58ad6a:goto L58ad6a;
case 0x58ad6b:c.instructions+=2;goto B58ad6b;
case 0x58ad6c:c.instructions+=1;goto B58ad6c;
case 0x58ad71:goto L58ad71;
case 0x58ad74:c.instructions+=2;goto B58ad74;
case 0x58ad76:c.instructions+=1;goto B58ad76;
case 0x58ad78:goto L58ad78;
case 0x58ad7e:c.instructions+=4;goto B58ad7e;
case 0x58ad7f:c.instructions+=3;goto B58ad7f;
case 0x58ad82:c.instructions+=2;goto B58ad82;
case 0x58ad84:c.instructions+=1;goto B58ad84;
case 0x58ad86:goto L58ad86;
case 0x58ad88:goto L58ad88;
case 0x58ad8b:c.instructions+=2;goto B58ad8b;
case 0x58ad92:c.instructions+=1;goto B58ad92;
case 0x58ad96:goto L58ad96;
case 0x58ad9a:c.instructions+=2;goto B58ad9a;
case 0x58ad9e:c.instructions+=1;goto B58ad9e;
case 0x58ada0:goto L58ada0;
case 0x58ada5:c.instructions+=1;goto B58ada5;
case 0x58ada7:goto L58ada7;
case 0x58adac:goto L58adac;
case 0x58adb0:c.instructions+=4;goto B58adb0;
case 0x58adb5:c.instructions+=3;goto B58adb5;
case 0x58adb7:c.instructions+=2;goto B58adb7;
case 0x58adbc:c.instructions+=1;goto B58adbc;
case 0x58adc0:goto L58adc0;
case 0x58adc2:goto L58adc2;
case 0x58adc5:c.instructions+=8;goto B58adc5;
case 0x58adc6:c.instructions+=7;goto B58adc6;
case 0x58adcb:c.instructions+=6;goto B58adcb;
case 0x58adcd:c.instructions+=5;goto B58adcd;
case 0x58add1:c.instructions+=4;goto B58add1;
case 0x58add6:c.instructions+=3;goto B58add6;
case 0x58add7:c.instructions+=2;goto B58add7;
case 0x58add8:c.instructions+=1;goto B58add8;
case 0x58addd:goto L58addd;
case 0x58ade1:c.instructions+=6;goto B58ade1;
case 0x58ade2:c.instructions+=5;goto B58ade2;
case 0x58ade7:c.instructions+=4;goto B58ade7;
case 0x58adeb:c.instructions+=3;goto B58adeb;
case 0x58adf0:c.instructions+=2;goto B58adf0;
case 0x58adf1:c.instructions+=1;goto B58adf1;
case 0x58adf6:goto L58adf6;
case 0x58adf9:c.instructions+=9;goto B58adf9;
case 0x58adfb:c.instructions+=8;goto B58adfb;
case 0x58adfd:c.instructions+=7;goto B58adfd;
case 0x58adff:c.instructions+=6;goto B58adff;
case 0x58ae01:c.instructions+=5;goto B58ae01;
case 0x58ae03:c.instructions+=4;goto B58ae03;
case 0x58ae07:c.instructions+=3;goto B58ae07;
case 0x58ae08:c.instructions+=2;goto B58ae08;
case 0x58ae0d:c.instructions+=1;goto B58ae0d;
case 0x58ae12:goto L58ae12;
case 0x58ae14:c.instructions+=1;goto B58ae14;
case 0x58ae19:goto L58ae19;
case 0x58ae1a:c.instructions+=5;goto B58ae1a;
case 0x58ae1b:c.instructions+=4;goto B58ae1b;
case 0x58ae1c:c.instructions+=3;goto B58ae1c;
case 0x58ae1e:c.instructions+=2;goto B58ae1e;
case 0x58ae1f:c.instructions+=1;goto B58ae1f;
case 0x58ae22:goto L58ae22;
case 0x58ae23:c.instructions+=6;goto B58ae23;
case 0x58ae24:c.instructions+=5;goto B58ae24;
case 0x58ae27:c.instructions+=4;goto B58ae27;
case 0x58ae28:c.instructions+=3;goto B58ae28;
case 0x58ae2a:c.instructions+=2;goto B58ae2a;
case 0x58ae2b:c.instructions+=1;goto B58ae2b;
case 0x58ae30:goto L58ae30;
case 0x58ae31:c.instructions+=2;goto B58ae31;
case 0x58ae33:c.instructions+=1;goto B58ae33;
case 0x58ae38:goto L58ae38;
case 0x58ae3b:c.instructions+=2;goto B58ae3b;
case 0x58ae3d:c.instructions+=1;goto B58ae3d;
case 0x58ae3f:goto L58ae3f;
case 0x58ae41:c.instructions+=2;goto B58ae41;
case 0x58ae42:c.instructions+=1;goto B58ae42;
case 0x58ae45:goto L58ae45;
case 0x58ae49:c.instructions+=2;goto B58ae49;
case 0x58ae4c:c.instructions+=1;goto B58ae4c;
case 0x58ae4e:goto L58ae4e;
case 0x58ae51:c.instructions+=8;goto B58ae51;
case 0x58ae54:c.instructions+=7;goto B58ae54;
case 0x58ae56:c.instructions+=6;goto B58ae56;
case 0x58ae59:c.instructions+=5;goto B58ae59;
case 0x58ae5c:c.instructions+=4;goto B58ae5c;
case 0x58ae5d:c.instructions+=3;goto B58ae5d;
case 0x58ae5e:c.instructions+=2;goto B58ae5e;
case 0x58ae60:c.instructions+=1;goto B58ae60;
case 0x58ae63:goto L58ae63;
case 0x58ae64:c.instructions+=2;goto B58ae64;
case 0x58ae66:c.instructions+=1;goto B58ae66;
case 0x58ae6b:goto L58ae6b;
case 0x58ae6e:c.instructions+=2;goto B58ae6e;
case 0x58ae6f:c.instructions+=1;goto B58ae6f;
case 0x58ae74:goto L58ae74;
case 0x58ae75:c.instructions+=3;goto B58ae75;
case 0x58ae78:c.instructions+=2;goto B58ae78;
case 0x58ae79:c.instructions+=1;goto B58ae79;
case 0x58ae7e:goto L58ae7e;
case 0x58ae81:c.instructions+=2;goto B58ae81;
case 0x58ae82:c.instructions+=1;goto B58ae82;
case 0x58ae90:goto L58ae90;
case 0x58ae91:c.instructions+=3;goto B58ae91;
case 0x58ae95:c.instructions+=2;goto B58ae95;
case 0x58ae97:c.instructions+=1;goto B58ae97;
case 0x58ae99:goto L58ae99;
case 0x58ae9c:goto L58ae9c;
case 0x58ae9f:c.instructions+=1;goto B58ae9f;
case 0x58aea1:goto L58aea1;
case 0x58aea3:c.instructions+=2;goto B58aea3;
case 0x58aea4:c.instructions+=1;goto B58aea4;
case 0x58aea7:goto L58aea7;
case 0x58aea8:c.instructions+=3;goto B58aea8;
case 0x58aeac:c.instructions+=2;goto B58aeac;
case 0x58aeae:c.instructions+=1;goto B58aeae;
case 0x58aeb0:goto L58aeb0;
case 0x58aeb6:c.instructions+=1;goto B58aeb6;
case 0x58aeb8:goto L58aeb8;
case 0x58aebd:c.instructions+=1;goto B58aebd;
case 0x58aec2:goto L58aec2;
case 0x58aec5:c.instructions+=2;goto B58aec5;
case 0x58aec6:c.instructions+=1;goto B58aec6;
case 0x58aecb:goto L58aecb;
case 0x58aece:c.instructions+=2;goto B58aece;
case 0x58aed0:c.instructions+=1;goto B58aed0;
case 0x58aed2:goto L58aed2;
case 0x58aed7:c.instructions+=5;goto B58aed7;
case 0x58aed8:c.instructions+=4;goto B58aed8;
case 0x58aedc:c.instructions+=3;goto B58aedc;
case 0x58aede:c.instructions+=2;goto B58aede;
case 0x58aedf:c.instructions+=1;goto B58aedf;
case 0x58aee4:goto L58aee4;
case 0x58aee7:c.instructions+=9;goto B58aee7;
case 0x58aeee:c.instructions+=8;goto B58aeee;
case 0x58aef2:c.instructions+=7;goto B58aef2;
case 0x58aef5:c.instructions+=6;goto B58aef5;
case 0x58aef7:c.instructions+=5;goto B58aef7;
case 0x58aef9:c.instructions+=4;goto B58aef9;
case 0x58aefa:c.instructions+=3;goto B58aefa;
case 0x58aefd:c.instructions+=2;goto B58aefd;
case 0x58aefe:c.instructions+=1;goto B58aefe;
case 0x58af01:goto L58af01;
case 0x58af02:c.instructions+=3;goto B58af02;
case 0x58af04:c.instructions+=2;goto B58af04;
case 0x58af05:c.instructions+=1;goto B58af05;
case 0x58af10:goto L58af10;
case 0x58af13:c.instructions+=7;goto B58af13;
case 0x58af14:c.instructions+=6;goto B58af14;
case 0x58af15:c.instructions+=5;goto B58af15;
case 0x58af17:c.instructions+=4;goto B58af17;
case 0x58af1a:c.instructions+=3;goto B58af1a;
case 0x58af1c:c.instructions+=2;goto B58af1c;
case 0x58af1d:c.instructions+=1;goto B58af1d;
case 0x58af23:goto L58af23;
case 0x58af27:c.instructions+=2;goto B58af27;
case 0x58af29:c.instructions+=1;goto B58af29;
case 0x58af2f:goto L58af2f;
case 0x58af35:c.instructions+=1;goto B58af35;
case 0x58af3b:goto L58af3b;
case 0x58af3d:c.instructions+=4;goto B58af3d;
case 0x58af40:c.instructions+=3;goto B58af40;
case 0x58af45:c.instructions+=2;goto B58af45;
case 0x58af48:c.instructions+=1;goto B58af48;
case 0x58af4d:goto L58af4d;
case 0x58af4e:c.instructions+=3;goto B58af4e;
case 0x58af54:c.instructions+=2;goto B58af54;
case 0x58af55:c.instructions+=1;goto B58af55;
case 0x58af5a:goto L58af5a;
case 0x58af5d:c.instructions+=2;goto B58af5d;
case 0x58af5f:c.instructions+=1;goto B58af5f;
case 0x58af61:goto L58af61;
case 0x58af62:c.instructions+=4;goto B58af62;
case 0x58af63:c.instructions+=3;goto B58af63;
case 0x58af64:c.instructions+=2;goto B58af64;
case 0x58af67:c.instructions+=1;goto B58af67;
case 0x58af6a:goto L58af6a;
case 0x58af6c:c.instructions+=9;goto B58af6c;
case 0x58af70:c.instructions+=8;goto B58af70;
case 0x58af74:c.instructions+=7;goto B58af74;
case 0x58af78:c.instructions+=6;goto B58af78;
case 0x58af7c:c.instructions+=5;goto B58af7c;
case 0x58af7d:c.instructions+=4;goto B58af7d;
case 0x58af7e:c.instructions+=3;goto B58af7e;
case 0x58af80:c.instructions+=2;goto B58af80;
case 0x58af84:c.instructions+=1;goto B58af84;
case 0x58af89:goto L58af89;
case 0x58af8b:c.instructions+=1;goto B58af8b;
case 0x58af8d:goto L58af8d;
case 0x58af90:c.instructions+=3;goto B58af90;
case 0x58af93:c.instructions+=2;goto B58af93;
case 0x58af95:c.instructions+=1;goto B58af95;
case 0x58af97:goto L58af97;
case 0x58af9d:goto L58af9d;
case 0x58af9e:c.instructions+=3;goto B58af9e;
case 0x58afa2:c.instructions+=2;goto B58afa2;
case 0x58afa3:c.instructions+=1;goto B58afa3;
case 0x58afa8:goto L58afa8;
case 0x58afac:c.instructions+=7;goto B58afac;
case 0x58afb0:c.instructions+=6;goto B58afb0;
case 0x58afb3:c.instructions+=5;goto B58afb3;
case 0x58afb4:c.instructions+=4;goto B58afb4;
case 0x58afb5:c.instructions+=3;goto B58afb5;
case 0x58afb9:c.instructions+=2;goto B58afb9;
case 0x58afba:c.instructions+=1;goto B58afba;
case 0x58afbf:goto L58afbf;
case 0x58afc5:c.instructions+=2;goto B58afc5;
case 0x58afc6:c.instructions+=1;goto B58afc6;
case 0x58afcb:goto L58afcb;
case 0x58afce:c.instructions+=5;goto B58afce;
case 0x58afcf:c.instructions+=4;goto B58afcf;
case 0x58afd0:c.instructions+=3;goto B58afd0;
case 0x58afd1:c.instructions+=2;goto B58afd1;
case 0x58afd4:c.instructions+=1;goto B58afd4;
case 0x58afd7:goto L58afd7;
case 0x58afd8:c.instructions+=5;goto B58afd8;
case 0x58afd9:c.instructions+=4;goto B58afd9;
case 0x58afdc:c.instructions+=3;goto B58afdc;
case 0x58afdd:c.instructions+=2;goto B58afdd;
case 0x58afe0:c.instructions+=1;goto B58afe0;
case 0x58aff0:goto L58aff0;
case 0x58aff1:c.instructions+=4;goto B58aff1;
case 0x58aff5:c.instructions+=3;goto B58aff5;
case 0x58aff8:c.instructions+=2;goto B58aff8;
case 0x58aff9:c.instructions+=1;goto B58aff9;
case 0x58affe:goto L58affe;
default:missing_instruction(c.pc);}
B58a000:L58a000:{c.instructions+=11;NFSU2_TR(0x58a000);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a004:{NFSU2_TR(0x58a004);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a008:{NFSU2_TR(0x58a008);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a00c:{NFSU2_TR(0x58a00c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a010:{NFSU2_TR(0x58a010);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a014:{NFSU2_TR(0x58a014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a015:{NFSU2_TR(0x58a015);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a019:{NFSU2_TR(0x58a019);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a01a:{NFSU2_TR(0x58a01a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a01c:{NFSU2_TR(0x58a01c);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a023:{NFSU2_TR(0x58a023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a028ull));
TAIL_STATIC(0x587db0u,587);
}
B58a028:L58a028:{c.instructions+=4;NFSU2_TR(0x58a028);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a02c:{NFSU2_TR(0x58a02c);
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
B58a02f:{NFSU2_TR(0x58a02f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a033:{NFSU2_TR(0x58a033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a038ull));
TAIL_STATIC(0x502fd0u,502);
}
B58a038:L58a038:{c.instructions+=3;NFSU2_TR(0x58a038);
__builtin_memmove((R+12),(R+0),4);
}
B58a03a:{NFSU2_TR(0x58a03a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a03c:{NFSU2_TR(0x58a03c);
if(r1(R+518)){{goto L58a075;}}
}
B58a03e:L58a03e:{c.instructions+=1;NFSU2_TR(0x58a03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58a041:L58a041:{c.instructions+=6;NFSU2_TR(0x58a041);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a043:{NFSU2_TR(0x58a043);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B58a046:{NFSU2_TR(0x58a046);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a047:{NFSU2_TR(0x58a047);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a049:{NFSU2_TR(0x58a049);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a04a:{NFSU2_TR(0x58a04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a04full));
TAIL_STATIC(0x586120u,586);
}
B58a04f:L58a04f:{c.instructions+=8;NFSU2_TR(0x58a04f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a053:{NFSU2_TR(0x58a053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58a055:{NFSU2_TR(0x58a055);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a058:{NFSU2_TR(0x58a058);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58a05b:{NFSU2_TR(0x58a05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a05d:{NFSU2_TR(0x58a05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58a05f:{NFSU2_TR(0x58a05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a062:{NFSU2_TR(0x58a062);
if(r1(R+518)){{goto L58a06d;}}
}
B58a064:L58a064:{c.instructions+=2;NFSU2_TR(0x58a064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a065:{NFSU2_TR(0x58a065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a06aull));
TAIL_STATIC(0x575630u,575);
}
B58a06a:L58a06a:{c.instructions+=1;NFSU2_TR(0x58a06a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a06d:L58a06d:{c.instructions+=3;NFSU2_TR(0x58a06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a071:{NFSU2_TR(0x58a071);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a073:{NFSU2_TR(0x58a073);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a041u);}goto L58a041;}}
}
B58a075:L58a075:{c.instructions+=4;NFSU2_TR(0x58a075);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a079:{NFSU2_TR(0x58a079);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B58a07b:{NFSU2_TR(0x58a07b);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58a086:{NFSU2_TR(0x58a086);
if(r1(R+518)){{goto L58a0a9;}}
}
B58a088:L58a088:{c.instructions+=7;NFSU2_TR(0x58a088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58a08a:{NFSU2_TR(0x58a08a);
__builtin_memmove((R+4),(R+24),4);
}
B58a08c:{NFSU2_TR(0x58a08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a08f:{NFSU2_TR(0x58a08f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58a091:{NFSU2_TR(0x58a091);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a092:{NFSU2_TR(0x58a092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a095:{NFSU2_TR(0x58a095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a09aull));
TAIL_STATIC(0x575630u,575);
}
B58a09a:L58a09a:{c.instructions+=5;NFSU2_TR(0x58a09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a09e:{NFSU2_TR(0x58a09e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a0a2:{NFSU2_TR(0x58a0a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a0a5:{NFSU2_TR(0x58a0a5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B58a0a7:{NFSU2_TR(0x58a0a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a088u);}goto L58a088;}}
}
B58a0a9:L58a0a9:{c.instructions+=8;NFSU2_TR(0x58a0a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a0b0:{NFSU2_TR(0x58a0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a0b1:{NFSU2_TR(0x58a0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a0b2:{NFSU2_TR(0x58a0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a0b9:{NFSU2_TR(0x58a0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a0ba:{NFSU2_TR(0x58a0ba);
__builtin_memmove((R+16),(R+20),4);
}
B58a0bc:{NFSU2_TR(0x58a0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a0bd:{NFSU2_TR(0x58a0bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a0c0:L58a0c0:{c.instructions+=3;NFSU2_TR(0x58a0c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a0c1:{NFSU2_TR(0x58a0c1);
__builtin_memmove((R+24),(R+4),4);
}
B58a0c3:{NFSU2_TR(0x58a0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a0c8ull));
TAIL_STATIC(0x5884e0u,588);
}
B58a0c8:L58a0c8:{c.instructions+=2;NFSU2_TR(0x58a0c8);
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
B58a0cd:{NFSU2_TR(0x58a0cd);
if(r1(R+518)){{goto L58a0d8;}}
}
B58a0cf:L58a0cf:{c.instructions+=2;NFSU2_TR(0x58a0cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a0d0:{NFSU2_TR(0x58a0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a0d5ull));
TAIL_STATIC(0x575630u,575);
}
B58a0d5:L58a0d5:{c.instructions+=1;NFSU2_TR(0x58a0d5);
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
B58a0d8:L58a0d8:{c.instructions+=3;NFSU2_TR(0x58a0d8);
__builtin_memmove((R+0),(R+24),4);
}
B58a0da:{NFSU2_TR(0x58a0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a0db:{NFSU2_TR(0x58a0db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a0e0:L58a0e0:{c.instructions+=9;NFSU2_TR(0x58a0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a0e6:{NFSU2_TR(0x58a0e6);
__builtin_memmove((R+4),gp(0x86a450),1);
}
B58a0ec:{NFSU2_TR(0x58a0ec);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a0ee:{NFSU2_TR(0x58a0ee);
u8 U[4];
w4(U+0,u32(0x778a5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a0f3:{NFSU2_TR(0x58a0f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a0f4:{NFSU2_TR(0x58a0f4);
w4(R+0,u32(0x1ull));
}
B58a0f9:{NFSU2_TR(0x58a0f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58a0fb:{NFSU2_TR(0x58a0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a102:{NFSU2_TR(0x58a102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a129;}}
}
B58a104:L58a104:{c.instructions+=4;NFSU2_TR(0x58a104);
s4(0x86a450,u32(u32(m4(0x86a450))|u32(r4(R+0))));
}
B58a10a:{NFSU2_TR(0x58a10a);
w4(R+4,u32(0x86a388ull));
}
B58a10f:{NFSU2_TR(0x58a10f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58a117:{NFSU2_TR(0x58a117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a11cull));
TAIL_STATIC(0x586680u,586);
}
B58a11c:L58a11c:{c.instructions+=2;NFSU2_TR(0x58a11c);
u8 U[4];
w4(U+0,u32(0x782370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a121:{NFSU2_TR(0x58a121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a126ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58a126:L58a126:{c.instructions+=1;NFSU2_TR(0x58a126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a129:L58a129:{c.instructions+=5;NFSU2_TR(0x58a129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58a12d:{NFSU2_TR(0x58a12d);
w4(R+0,u32(0x86a388ull));
}
B58a132:{NFSU2_TR(0x58a132);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a139:{NFSU2_TR(0x58a139);
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
B58a13c:{NFSU2_TR(0x58a13c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a140:L58a140:{c.instructions+=6;NFSU2_TR(0x58a140);
__builtin_memmove((R+4),gp(0x86a474),1);
}
B58a146:{NFSU2_TR(0x58a146);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a147:{NFSU2_TR(0x58a147);
w4(R+0,u32(0x1ull));
}
B58a14c:{NFSU2_TR(0x58a14c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58a14e:{NFSU2_TR(0x58a14e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58a150:{NFSU2_TR(0x58a150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a1a1;}}
}
B58a152:L58a152:{c.instructions+=13;NFSU2_TR(0x58a152);
__builtin_memmove((R+8),gp(0x86a474),4);
}
B58a158:{NFSU2_TR(0x58a158);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B58a15a:{NFSU2_TR(0x58a15a);
u8 U[4];
w4(U+0,u32(0x782360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a15f:{NFSU2_TR(0x58a15f);
__builtin_memmove(gp(0x86a474),(R+8),4);
}
B58a165:{NFSU2_TR(0x58a165);
__builtin_memmove(gp(0x86a454),(R+24),4);
}
B58a16b:{NFSU2_TR(0x58a16b);
__builtin_memmove(gp(0x86a458),(R+24),4);
}
B58a171:{NFSU2_TR(0x58a171);
__builtin_memmove(gp(0x86a45c),(R+24),4);
}
B58a177:{NFSU2_TR(0x58a177);
s4(0x86a460,u32(0xffffffffull));
}
B58a181:{NFSU2_TR(0x58a181);
__builtin_memmove(gp(0x86a464),(R+24),4);
}
B58a187:{NFSU2_TR(0x58a187);
__builtin_memmove(gp(0x86a468),(R+24),4);
}
B58a18d:{NFSU2_TR(0x58a18d);
__builtin_memmove(gp(0x86a46c),(R+24),4);
}
B58a193:{NFSU2_TR(0x58a193);
__builtin_memmove(gp(0x86a470),(R+24),4);
}
B58a199:{NFSU2_TR(0x58a199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a19eull));
TAIL_STATIC(0x75c5edu,75c);
}
B58a19e:L58a19e:{c.instructions+=1;NFSU2_TR(0x58a19e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a1a1:L58a1a1:{c.instructions+=3;NFSU2_TR(0x58a1a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a1a5:{NFSU2_TR(0x58a1a5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B58a1a7:{NFSU2_TR(0x58a1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a1b6;}}
}
B58a1a9:L58a1a9:{c.instructions+=1;NFSU2_TR(0x58a1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a1aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a1ae:L58a1ae:{c.instructions+=2;NFSU2_TR(0x58a1ae);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B58a1b0:{NFSU2_TR(0x58a1b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a1b6;}}
}
B58a1b2:L58a1b2:{c.instructions+=3;NFSU2_TR(0x58a1b2);
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
B58a1b4:{NFSU2_TR(0x58a1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a1b5:{NFSU2_TR(0x58a1b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a1b6:L58a1b6:{c.instructions+=4;NFSU2_TR(0x58a1b6);
__builtin_memmove(gp(0x86a454),(R+0),4);
}
B58a1bb:{NFSU2_TR(0x58a1bb);
w4(R+0,u32(0x86a454ull));
}
B58a1c0:{NFSU2_TR(0x58a1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a1c1:{NFSU2_TR(0x58a1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a1d0:L58a1d0:{c.instructions+=4;NFSU2_TR(0x58a1d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1d1:{NFSU2_TR(0x58a1d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1d2:{NFSU2_TR(0x58a1d2);
__builtin_memmove((R+12),(R+4),4);
}
B58a1d4:{NFSU2_TR(0x58a1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a1d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a1d9:L58a1d9:{c.instructions+=3;NFSU2_TR(0x58a1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a1dc:{NFSU2_TR(0x58a1dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a1de:{NFSU2_TR(0x58a1de);
if(r1(R+518)){{goto L58a207;}}
}
B58a1e0:L58a1e0:{c.instructions+=2;NFSU2_TR(0x58a1e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1e1:{NFSU2_TR(0x58a1e1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58a1e3:L58a1e3:{c.instructions+=3;NFSU2_TR(0x58a1e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B58a1e6:{NFSU2_TR(0x58a1e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a1e8:{NFSU2_TR(0x58a1e8);
if(r1(R+518)){{goto L58a200;}}
}
B58a1ea:L58a1ea:{c.instructions+=4;NFSU2_TR(0x58a1ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1eb:{NFSU2_TR(0x58a1eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58a1ee:{NFSU2_TR(0x58a1ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1ef:{NFSU2_TR(0x58a1ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a1f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a1f4:L58a1f4:{c.instructions+=3;NFSU2_TR(0x58a1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a1f7:{NFSU2_TR(0x58a1f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a1f8:{NFSU2_TR(0x58a1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a1fdull));
TAIL_STATIC(0x744530u,744);
}
B58a1fd:L58a1fd:{c.instructions+=1;NFSU2_TR(0x58a1fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58a200:L58a200:{c.instructions+=3;NFSU2_TR(0x58a200);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58a201:{NFSU2_TR(0x58a201);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58a204:{NFSU2_TR(0x58a204);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a1e3u);}goto L58a1e3;}}
}
B58a206:L58a206:{c.instructions+=1;NFSU2_TR(0x58a206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a207:L58a207:{c.instructions+=3;NFSU2_TR(0x58a207);
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
B58a209:{NFSU2_TR(0x58a209);
__builtin_memmove((R+28),(R+12),4);
}
B58a20b:{NFSU2_TR(0x58a20b);
w4(R+4,u32(0x18ull));
}
B58a210:L58a210:{c.instructions+=1;NFSU2_TR(0x58a210);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a212;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a210u);}goto L58a210;}
}
B58a212:L58a212:{c.instructions+=2;NFSU2_TR(0x58a212);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a215:{NFSU2_TR(0x58a215);
w4(R+4,u32(0x6ull));
}
B58a21a:L58a21a:{c.instructions+=1;NFSU2_TR(0x58a21a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a21c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a21au);}goto L58a21a;}
}
B58a21c:L58a21c:{c.instructions+=2;NFSU2_TR(0x58a21c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a21f:{NFSU2_TR(0x58a21f);
w4(R+4,u32(0x18ull));
}
B58a224:L58a224:{c.instructions+=1;NFSU2_TR(0x58a224);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a226;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a224u);}goto L58a224;}
}
B58a226:L58a226:{c.instructions+=2;NFSU2_TR(0x58a226);
w4(R+4,u32(0x3cull));
}
B58a22b:{NFSU2_TR(0x58a22b);
w4(R+28,u32(0x866650ull));
}
B58a230:L58a230:{c.instructions+=1;NFSU2_TR(0x58a230);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a232;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a230u);}goto L58a230;}
}
B58a232:L58a232:{c.instructions+=3;NFSU2_TR(0x58a232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a233:{NFSU2_TR(0x58a233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a234:{NFSU2_TR(0x58a234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a240:L58a240:{c.instructions+=10;NFSU2_TR(0x58a240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a241:{NFSU2_TR(0x58a241);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58a245:{NFSU2_TR(0x58a245);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a246:{NFSU2_TR(0x58a246);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a249:{NFSU2_TR(0x58a249);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a24a:{NFSU2_TR(0x58a24a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58a24e:{NFSU2_TR(0x58a24e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58a252:{NFSU2_TR(0x58a252);
u8 U[6];
w1(R+512,u8((r4(R+24))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(R+24),u32(0x6ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58a255:{NFSU2_TR(0x58a255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a256:{NFSU2_TR(0x58a256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a25bull));
TAIL_STATIC(0x73d8c0u,73d);
}
B58a25b:L58a25b:{c.instructions+=4;NFSU2_TR(0x58a25b);
u8 U[16];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B58a25f:{NFSU2_TR(0x58a25f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a262:{NFSU2_TR(0x58a262);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58a264:{NFSU2_TR(0x58a264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a28d;}}
}
B58a266:L58a266:{c.instructions+=2;NFSU2_TR(0x58a266);
u8 U[13];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B58a26b:{NFSU2_TR(0x58a26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a270ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a270:L58a270:{c.instructions+=3;NFSU2_TR(0x58a270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a273:{NFSU2_TR(0x58a273);
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
B58a275:{NFSU2_TR(0x58a275);
if(r1(R+518)){{goto L58a28d;}}
}
B58a277:L58a277:{c.instructions+=2;NFSU2_TR(0x58a277);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x736e6170ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x736e6170ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x736e6170ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B58a27e:{NFSU2_TR(0x58a27e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a28d;}}
}
B58a280:L58a280:{c.instructions+=2;NFSU2_TR(0x58a280);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a281:{NFSU2_TR(0x58a281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a286ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a286:L58a286:{c.instructions+=2;NFSU2_TR(0x58a286);
__builtin_memmove((R+4),(R+0),4);
}
B58a288:{NFSU2_TR(0x58a288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a28dull));
TAIL_STATIC(0x584350u,584);
}
B58a28d:L58a28d:{c.instructions+=4;NFSU2_TR(0x58a28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a28e:{NFSU2_TR(0x58a28e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a28f:{NFSU2_TR(0x58a28f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a290:{NFSU2_TR(0x58a290);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a2a0:L58a2a0:{c.instructions+=6;NFSU2_TR(0x58a2a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2a1:{NFSU2_TR(0x58a2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a2a5:{NFSU2_TR(0x58a2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a2a8:{NFSU2_TR(0x58a2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a2aa:{NFSU2_TR(0x58a2aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2ab:{NFSU2_TR(0x58a2ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a32a;}}
}
B58a2ad:L58a2ad:{c.instructions+=7;NFSU2_TR(0x58a2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a2b0:{NFSU2_TR(0x58a2b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2b1:{NFSU2_TR(0x58a2b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2b2:{NFSU2_TR(0x58a2b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2b4:{NFSU2_TR(0x58a2b4);
u8 U[4];
w4(U+0,u32(0x7a14f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2b9:{NFSU2_TR(0x58a2b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2ba:{NFSU2_TR(0x58a2ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a2bfull));
TAIL_STATIC(0x7414a0u,741);
}
B58a2bf:L58a2bf:{c.instructions+=3;NFSU2_TR(0x58a2bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a2c2:{NFSU2_TR(0x58a2c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2c3:{NFSU2_TR(0x58a2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a2c8ull));
TAIL_STATIC(0x7420b0u,742);
}
B58a2c8:L58a2c8:{c.instructions+=7;NFSU2_TR(0x58a2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a2cb:{NFSU2_TR(0x58a2cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a2ce:{NFSU2_TR(0x58a2ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2d0:{NFSU2_TR(0x58a2d0);
u8 U[4];
w4(U+0,u32(0x7a14ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2d5:{NFSU2_TR(0x58a2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2d6:{NFSU2_TR(0x58a2d6);
__builtin_memmove((R+12),(R+0),4);
}
B58a2d8:{NFSU2_TR(0x58a2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a2ddull));
TAIL_STATIC(0x7414a0u,741);
}
B58a2dd:L58a2dd:{c.instructions+=3;NFSU2_TR(0x58a2dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a2e0:{NFSU2_TR(0x58a2e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2e1:{NFSU2_TR(0x58a2e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a2e6ull));
TAIL_STATIC(0x7420b0u,742);
}
B58a2e6:L58a2e6:{c.instructions+=6;NFSU2_TR(0x58a2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58a2e9:{NFSU2_TR(0x58a2e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a2ec:{NFSU2_TR(0x58a2ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2ee:{NFSU2_TR(0x58a2ee);
u8 U[4];
w4(U+0,u32(0x7a14e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2f3:{NFSU2_TR(0x58a2f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2f4:{NFSU2_TR(0x58a2f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a2f9ull));
TAIL_STATIC(0x7414a0u,741);
}
B58a2f9:L58a2f9:{c.instructions+=3;NFSU2_TR(0x58a2f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a2fc:{NFSU2_TR(0x58a2fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a2fd:{NFSU2_TR(0x58a2fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a302ull));
TAIL_STATIC(0x7420b0u,742);
}
B58a302:L58a302:{c.instructions+=5;NFSU2_TR(0x58a302);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58a306:{NFSU2_TR(0x58a306);
__builtin_memmove((R+28),(R+0),4);
}
B58a308:{NFSU2_TR(0x58a308);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a30b:{NFSU2_TR(0x58a30b);
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
B58a30d:{NFSU2_TR(0x58a30d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a321;}}
}
B58a30f:L58a30f:{c.instructions+=3;NFSU2_TR(0x58a30f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a310:{NFSU2_TR(0x58a310);
u8 U[13];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B58a315:{NFSU2_TR(0x58a315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a31aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a31a:L58a31a:{c.instructions+=2;NFSU2_TR(0x58a31a);
__builtin_memmove((R+4),(R+0),4);
}
B58a31c:{NFSU2_TR(0x58a31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a321ull));
TAIL_STATIC(0x584350u,584);
}
B58a321:L58a321:{c.instructions+=6;NFSU2_TR(0x58a321);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B58a325:{NFSU2_TR(0x58a325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a326:{NFSU2_TR(0x58a326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a327:{NFSU2_TR(0x58a327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a328:{NFSU2_TR(0x58a328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a329:{NFSU2_TR(0x58a329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a32a:L58a32a:{c.instructions+=1;NFSU2_TR(0x58a32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a32full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a32f:L58a32f:{c.instructions+=4;NFSU2_TR(0x58a32f);
__builtin_memmove((R+28),(R+0),4);
}
B58a331:{NFSU2_TR(0x58a331);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a334:{NFSU2_TR(0x58a334);
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
B58a336:{NFSU2_TR(0x58a336);
if(r1(R+518)){{goto L58a367;}}
}
B58a338:L58a338:{c.instructions+=3;NFSU2_TR(0x58a338);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a33b:{NFSU2_TR(0x58a33b);
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
B58a33d:{NFSU2_TR(0x58a33d);
if(r1(R+518)){{goto L58a349;}}
}
B58a33f:L58a33f:{c.instructions+=4;NFSU2_TR(0x58a33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a342:{NFSU2_TR(0x58a342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a343:{NFSU2_TR(0x58a343);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a344:{NFSU2_TR(0x58a344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a346ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58a346:L58a346:{c.instructions+=1;NFSU2_TR(0x58a346);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a349:L58a349:{c.instructions+=3;NFSU2_TR(0x58a349);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a34c:{NFSU2_TR(0x58a34c);
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
B58a34e:{NFSU2_TR(0x58a34e);
if(r1(R+518)){{goto L58a360;}}
}
B58a350:L58a350:{c.instructions+=2;NFSU2_TR(0x58a350);
__builtin_memmove((R+4),(R+24),4);
}
B58a352:{NFSU2_TR(0x58a352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a357ull));
TAIL_STATIC(0x584140u,584);
}
B58a357:L58a357:{c.instructions+=2;NFSU2_TR(0x58a357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a358:{NFSU2_TR(0x58a358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a35dull));
TAIL_STATIC(0x575630u,575);
}
B58a35d:L58a35d:{c.instructions+=1;NFSU2_TR(0x58a35d);
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
B58a360:L58a360:{c.instructions+=1;NFSU2_TR(0x58a360);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58a367:L58a367:{c.instructions+=3;NFSU2_TR(0x58a367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a368:{NFSU2_TR(0x58a368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a369:{NFSU2_TR(0x58a369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a370:L58a370:{c.instructions+=9;NFSU2_TR(0x58a370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a371:{NFSU2_TR(0x58a371);
__builtin_memmove((R+20),(R+16),4);
}
B58a373:{NFSU2_TR(0x58a373);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58a376:{NFSU2_TR(0x58a376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B58a37c:{NFSU2_TR(0x58a37c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a37d:{NFSU2_TR(0x58a37d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a37e:{NFSU2_TR(0x58a37e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a37f:{NFSU2_TR(0x58a37f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a380:{NFSU2_TR(0x58a380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a385ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a385:L58a385:{c.instructions+=3;NFSU2_TR(0x58a385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a388:{NFSU2_TR(0x58a388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a38a:{NFSU2_TR(0x58a38a);
if(r1(R+518)){{goto L58a3a4;}}
}
B58a38c:L58a38c:{c.instructions+=3;NFSU2_TR(0x58a38c);
u8 U[4];
w4(U+0,u32(0x636f6e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a391:{NFSU2_TR(0x58a391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a392:{NFSU2_TR(0x58a392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a397ull));
TAIL_STATIC(0x744620u,744);
}
B58a397:L58a397:{c.instructions+=5;NFSU2_TR(0x58a397);
__builtin_memmove((R+24),(R+0),4);
}
B58a399:{NFSU2_TR(0x58a399);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a39c:{NFSU2_TR(0x58a39c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a39e:{NFSU2_TR(0x58a39e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a3a2:{NFSU2_TR(0x58a3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a3af;}}
}
B58a3a4:L58a3a4:{c.instructions+=8;NFSU2_TR(0x58a3a4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58a3a7:{NFSU2_TR(0x58a3a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a3a8:{NFSU2_TR(0x58a3a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a3a9:{NFSU2_TR(0x58a3a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a3aa:{NFSU2_TR(0x58a3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a3ab:{NFSU2_TR(0x58a3ab);
__builtin_memmove((R+16),(R+20),4);
}
B58a3ad:{NFSU2_TR(0x58a3ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a3ae:{NFSU2_TR(0x58a3ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a3af:L58a3af:{c.instructions+=1;NFSU2_TR(0x58a3af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58a3b1:L58a3b1:{c.instructions+=5;NFSU2_TR(0x58a3b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a3b3:{NFSU2_TR(0x58a3b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a3b5:{NFSU2_TR(0x58a3b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a3ba:{NFSU2_TR(0x58a3ba);
w4(R+4,u32(0x7ull));
}
B58a3bf:{NFSU2_TR(0x58a3bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a3c3:L58a3c3:{c.instructions+=1;NFSU2_TR(0x58a3c3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a3c5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a3c3u);}goto L58a3c3;}
}
B58a3c5:L58a3c5:{c.instructions+=3;NFSU2_TR(0x58a3c5);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a3c7:{NFSU2_TR(0x58a3c7);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a3c8:{NFSU2_TR(0x58a3c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a3d6;}}
}
B58a3ca:L58a3ca:{c.instructions+=4;NFSU2_TR(0x58a3ca);
u8 U[4];
w4(U+0,u32(0x7a1564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3cf:{NFSU2_TR(0x58a3cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a3d3:{NFSU2_TR(0x58a3d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3d4:{NFSU2_TR(0x58a3d4);
{goto L58a424;}
}
B58a3d6:L58a3d6:{c.instructions+=2;NFSU2_TR(0x58a3d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a3d9:{NFSU2_TR(0x58a3d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a3e7;}}
}
B58a3db:L58a3db:{c.instructions+=4;NFSU2_TR(0x58a3db);
u8 U[4];
w4(U+0,u32(0x7a1550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3e0:{NFSU2_TR(0x58a3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a3e4:{NFSU2_TR(0x58a3e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3e5:{NFSU2_TR(0x58a3e5);
{goto L58a424;}
}
B58a3e7:L58a3e7:{c.instructions+=2;NFSU2_TR(0x58a3e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a3ea:{NFSU2_TR(0x58a3ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a3f3;}}
}
B58a3ec:L58a3ec:{c.instructions+=2;NFSU2_TR(0x58a3ec);
u8 U[4];
w4(U+0,u32(0x7a153cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3f1:{NFSU2_TR(0x58a3f1);
{goto L58a41f;}
}
B58a3f3:L58a3f3:{c.instructions+=2;NFSU2_TR(0x58a3f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a3f6:{NFSU2_TR(0x58a3f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a404;}}
}
B58a3f8:L58a3f8:{c.instructions+=4;NFSU2_TR(0x58a3f8);
u8 U[4];
w4(U+0,u32(0x7a1528ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a3fd:{NFSU2_TR(0x58a3fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a401:{NFSU2_TR(0x58a401);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a402:{NFSU2_TR(0x58a402);
{goto L58a424;}
}
B58a404:L58a404:{c.instructions+=2;NFSU2_TR(0x58a404);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a407:{NFSU2_TR(0x58a407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a415;}}
}
B58a409:L58a409:{c.instructions+=4;NFSU2_TR(0x58a409);
u8 U[4];
w4(U+0,u32(0x7a150cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a40e:{NFSU2_TR(0x58a40e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a412:{NFSU2_TR(0x58a412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a413:{NFSU2_TR(0x58a413);
{goto L58a424;}
}
B58a415:L58a415:{c.instructions+=2;NFSU2_TR(0x58a415);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a418:{NFSU2_TR(0x58a418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a42c;}}
}
B58a41a:L58a41a:{c.instructions+=1;NFSU2_TR(0x58a41a);
u8 U[4];
w4(U+0,u32(0x7a14fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a41f:L58a41f:{c.instructions+=2;NFSU2_TR(0x58a41f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a423:{NFSU2_TR(0x58a423);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a424:L58a424:{c.instructions+=1;NFSU2_TR(0x58a424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a429ull));
TAIL_STATIC(0x4400d0u,440);
}
B58a429:L58a429:{c.instructions+=1;NFSU2_TR(0x58a429);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a42c:L58a42c:{c.instructions+=3;NFSU2_TR(0x58a42c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a42e:{NFSU2_TR(0x58a42e);
w4(R+4,u32(0x17ull));
}
B58a433:{NFSU2_TR(0x58a433);
u8 U[4];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a437:L58a437:{c.instructions+=1;NFSU2_TR(0x58a437);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a439;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a437u);}goto L58a437;}
}
B58a439:L58a439:{c.instructions+=11;NFSU2_TR(0x58a439);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a43b:{NFSU2_TR(0x58a43b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a440:{NFSU2_TR(0x58a440);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a441:{NFSU2_TR(0x58a441);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a443:{NFSU2_TR(0x58a443);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a447:{NFSU2_TR(0x58a447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a448:{NFSU2_TR(0x58a448);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a44c:{NFSU2_TR(0x58a44c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a44d:{NFSU2_TR(0x58a44d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a44e:{NFSU2_TR(0x58a44e);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a453:{NFSU2_TR(0x58a453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a458ull));
TAIL_STATIC(0x7414a0u,741);
}
B58a458:L58a458:{c.instructions+=3;NFSU2_TR(0x58a458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a45b:{NFSU2_TR(0x58a45b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a45c:{NFSU2_TR(0x58a45c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a461ull));
TAIL_STATIC(0x742360u,742);
}
B58a461:L58a461:{c.instructions+=3;NFSU2_TR(0x58a461);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a465:{NFSU2_TR(0x58a465);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a466:{NFSU2_TR(0x58a466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a46bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58a46b:L58a46b:{c.instructions+=3;NFSU2_TR(0x58a46b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58a46e:{NFSU2_TR(0x58a46e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a470:{NFSU2_TR(0x58a470);
if(r1(R+518)){{goto L58a4c0;}}
}
B58a472:L58a472:{c.instructions+=6;NFSU2_TR(0x58a472);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B58a475:{NFSU2_TR(0x58a475);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a479:{NFSU2_TR(0x58a479);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B58a47d:{NFSU2_TR(0x58a47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x866650ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B58a484:{NFSU2_TR(0x58a484);
w4(R+20,u32(0xaull));
}
B58a489:{NFSU2_TR(0x58a489);
__builtin_memmove((R+16),(R+16),4);
}
B58a490:L58a490:{c.instructions+=2;NFSU2_TR(0x58a490);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58a493:{NFSU2_TR(0x58a493);
if(r1(R+518)){{goto L58a4a3;}}
}
B58a495:L58a495:{c.instructions+=2;NFSU2_TR(0x58a495);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58a498:{NFSU2_TR(0x58a498);
if(r1(R+518)){{goto L58a4a3;}}
}
B58a49a:L58a49a:{c.instructions+=4;NFSU2_TR(0x58a49a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58a49d:{NFSU2_TR(0x58a49d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58a49e:{NFSU2_TR(0x58a49e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58a4a1:{NFSU2_TR(0x58a4a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a495u);}goto L58a495;}}
}
B58a4a3:L58a4a3:{c.instructions+=3;NFSU2_TR(0x58a4a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a4a4:{NFSU2_TR(0x58a4a4);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B58a4a7:{NFSU2_TR(0x58a4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a4acull));
TAIL_STATIC(0x43de50u,43d);
}
B58a4ac:L58a4ac:{c.instructions+=7;NFSU2_TR(0x58a4ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B58a4ae:{NFSU2_TR(0x58a4ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a4b1:{NFSU2_TR(0x58a4b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58a4b4:{NFSU2_TR(0x58a4b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B58a4b7:{NFSU2_TR(0x58a4b7);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B58a4b8:{NFSU2_TR(0x58a4b8);
__builtin_memmove((R+24),(R+0),4);
}
B58a4ba:{NFSU2_TR(0x58a4ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a490u);}goto L58a490;}}
}
B58a4bc:L58a4bc:{c.instructions+=1;NFSU2_TR(0x58a4bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a4c0:L58a4c0:{c.instructions+=3;NFSU2_TR(0x58a4c0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B58a4c1:{NFSU2_TR(0x58a4c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58a4c4:{NFSU2_TR(0x58a4c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a3b1u);}goto L58a3b1;}}
}
B58a4ca:L58a4ca:{c.instructions+=8;NFSU2_TR(0x58a4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a4cb:{NFSU2_TR(0x58a4cb);
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
B58a4cd:{NFSU2_TR(0x58a4cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a4ce:{NFSU2_TR(0x58a4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a4cf:{NFSU2_TR(0x58a4cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a4d0:{NFSU2_TR(0x58a4d0);
__builtin_memmove((R+16),(R+20),4);
}
B58a4d2:{NFSU2_TR(0x58a4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a4d3:{NFSU2_TR(0x58a4d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a4e0:L58a4e0:{c.instructions+=9;NFSU2_TR(0x58a4e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a4e1:{NFSU2_TR(0x58a4e1);
__builtin_memmove((R+20),(R+16),4);
}
B58a4e3:{NFSU2_TR(0x58a4e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58a4e6:{NFSU2_TR(0x58a4e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B58a4ec:{NFSU2_TR(0x58a4ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a4ed:{NFSU2_TR(0x58a4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a4f0:{NFSU2_TR(0x58a4f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a4f1:{NFSU2_TR(0x58a4f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a4f2:{NFSU2_TR(0x58a4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a4f7ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58a4f7:L58a4f7:{c.instructions+=3;NFSU2_TR(0x58a4f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a4fa:{NFSU2_TR(0x58a4fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a4fc:{NFSU2_TR(0x58a4fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a509;}}
}
B58a4fe:L58a4fe:{c.instructions+=6;NFSU2_TR(0x58a4fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58a501:{NFSU2_TR(0x58a501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a502:{NFSU2_TR(0x58a502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a503:{NFSU2_TR(0x58a503);
__builtin_memmove((R+16),(R+20),4);
}
B58a505:{NFSU2_TR(0x58a505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a506:{NFSU2_TR(0x58a506);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a509:L58a509:{c.instructions+=4;NFSU2_TR(0x58a509);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a50b:{NFSU2_TR(0x58a50b);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a510:{NFSU2_TR(0x58a510);
w4(R+4,u32(0x7full));
}
B58a515:{NFSU2_TR(0x58a515);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a519:L58a519:{c.instructions+=1;NFSU2_TR(0x58a519);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a51b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a519u);}goto L58a519;}
}
B58a51b:L58a51b:{c.instructions+=8;NFSU2_TR(0x58a51b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a51d:{NFSU2_TR(0x58a51d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a51e:{NFSU2_TR(0x58a51e);
u8 U[4];
w4(U+0,u32(0x7a1588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a523:{NFSU2_TR(0x58a523);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a524:{NFSU2_TR(0x58a524);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a528:{NFSU2_TR(0x58a528);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a52d:{NFSU2_TR(0x58a52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a52e:{NFSU2_TR(0x58a52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a533ull));
TAIL_STATIC(0x741a50u,741);
}
B58a533:L58a533:{c.instructions+=4;NFSU2_TR(0x58a533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a536:{NFSU2_TR(0x58a536);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58a539:{NFSU2_TR(0x58a539);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a53b:{NFSU2_TR(0x58a53b);
if(r1(R+518)){{goto L58a554;}}
}
B58a53d:L58a53d:{c.instructions+=6;NFSU2_TR(0x58a53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a53e:{NFSU2_TR(0x58a53e);
u8 U[4];
w4(U+0,u32(0x7a1580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a543:{NFSU2_TR(0x58a543);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a547:{NFSU2_TR(0x58a547);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a54c:{NFSU2_TR(0x58a54c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a54d:{NFSU2_TR(0x58a54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a552ull));
TAIL_STATIC(0x741a50u,741);
}
B58a552:L58a552:{c.instructions+=1;NFSU2_TR(0x58a552);
{goto L58a56d;}
}
B58a554:L58a554:{c.instructions+=6;NFSU2_TR(0x58a554);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a559:{NFSU2_TR(0x58a559);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a55e:{NFSU2_TR(0x58a55e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a562:{NFSU2_TR(0x58a562);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a567:{NFSU2_TR(0x58a567);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a568:{NFSU2_TR(0x58a568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a56dull));
TAIL_STATIC(0x741760u,741);
}
B58a56d:L58a56d:{c.instructions+=7;NFSU2_TR(0x58a56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a570:{NFSU2_TR(0x58a570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a573:{NFSU2_TR(0x58a573);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58a576:{NFSU2_TR(0x58a576);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a578:{NFSU2_TR(0x58a578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a579:{NFSU2_TR(0x58a579);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a57a:{NFSU2_TR(0x58a57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a57full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a57f:L58a57f:{c.instructions+=6;NFSU2_TR(0x58a57f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a580:{NFSU2_TR(0x58a580);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a585:{NFSU2_TR(0x58a585);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a589:{NFSU2_TR(0x58a589);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a58a:{NFSU2_TR(0x58a58a);
u8 U[4];
w4(U+0,u32(0x6d657367ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a58f:{NFSU2_TR(0x58a58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a594ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a594:L58a594:{c.instructions+=2;NFSU2_TR(0x58a594);
__builtin_memmove((R+4),(R+0),4);
}
B58a596:{NFSU2_TR(0x58a596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a59bull));
TAIL_STATIC(0x5869a0u,586);
}
B58a59b:L58a59b:{c.instructions+=5;NFSU2_TR(0x58a59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a59c:{NFSU2_TR(0x58a59c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a59d:{NFSU2_TR(0x58a59d);
__builtin_memmove((R+16),(R+20),4);
}
B58a59f:{NFSU2_TR(0x58a59f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a5a0:{NFSU2_TR(0x58a5a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a5b0:L58a5b0:{c.instructions+=11;NFSU2_TR(0x58a5b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5b1:{NFSU2_TR(0x58a5b1);
__builtin_memmove((R+20),(R+16),4);
}
B58a5b3:{NFSU2_TR(0x58a5b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58a5b6:{NFSU2_TR(0x58a5b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B58a5bc:{NFSU2_TR(0x58a5bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5bd:{NFSU2_TR(0x58a5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58a5c0:{NFSU2_TR(0x58a5c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5c1:{NFSU2_TR(0x58a5c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a5c3:{NFSU2_TR(0x58a5c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a5c8:{NFSU2_TR(0x58a5c8);
w4(R+4,u32(0x1full));
}
B58a5cd:{NFSU2_TR(0x58a5cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a5d1:L58a5d1:{c.instructions+=1;NFSU2_TR(0x58a5d1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a5d3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a5d1u);}goto L58a5d1;}
}
B58a5d3:L58a5d3:{c.instructions+=9;NFSU2_TR(0x58a5d3);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a5d5:{NFSU2_TR(0x58a5d5);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a5d6:{NFSU2_TR(0x58a5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a5d9:{NFSU2_TR(0x58a5d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5da:{NFSU2_TR(0x58a5da);
u8 U[4];
w4(U+0,u32(0x7a1588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5df:{NFSU2_TR(0x58a5df);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a5e3:{NFSU2_TR(0x58a5e3);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5e8:{NFSU2_TR(0x58a5e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5e9:{NFSU2_TR(0x58a5e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a5eeull));
TAIL_STATIC(0x741690u,741);
}
B58a5ee:L58a5ee:{c.instructions+=7;NFSU2_TR(0x58a5ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B58a5f1:{NFSU2_TR(0x58a5f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5f2:{NFSU2_TR(0x58a5f2);
u8 U[4];
w4(U+0,u32(0x7a1580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a5f7:{NFSU2_TR(0x58a5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a5fb:{NFSU2_TR(0x58a5fb);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a600:{NFSU2_TR(0x58a600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a601:{NFSU2_TR(0x58a601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a606ull));
TAIL_STATIC(0x741a50u,741);
}
B58a606:L58a606:{c.instructions+=6;NFSU2_TR(0x58a606);
u8 U[4];
w4(U+0,u32(0x8010020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a60b:{NFSU2_TR(0x58a60b);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a610:{NFSU2_TR(0x58a610);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a614:{NFSU2_TR(0x58a614);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a619:{NFSU2_TR(0x58a619);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a61a:{NFSU2_TR(0x58a61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a61full));
TAIL_STATIC(0x741760u,741);
}
B58a61f:L58a61f:{c.instructions+=5;NFSU2_TR(0x58a61f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B58a622:{NFSU2_TR(0x58a622);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a624:{NFSU2_TR(0x58a624);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a626:{NFSU2_TR(0x58a626);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a628:{NFSU2_TR(0x58a628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a62dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a62d:L58a62d:{c.instructions+=6;NFSU2_TR(0x58a62d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a62e:{NFSU2_TR(0x58a62e);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a633:{NFSU2_TR(0x58a633);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a637:{NFSU2_TR(0x58a637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a638:{NFSU2_TR(0x58a638);
u8 U[4];
w4(U+0,u32(0x6d657367ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a63d:{NFSU2_TR(0x58a63d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a642ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a642:L58a642:{c.instructions+=2;NFSU2_TR(0x58a642);
__builtin_memmove((R+4),(R+0),4);
}
B58a644:{NFSU2_TR(0x58a644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a649ull));
TAIL_STATIC(0x5869a0u,586);
}
B58a649:L58a649:{c.instructions+=5;NFSU2_TR(0x58a649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a64a:{NFSU2_TR(0x58a64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a64b:{NFSU2_TR(0x58a64b);
__builtin_memmove((R+16),(R+20),4);
}
B58a64d:{NFSU2_TR(0x58a64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a64e:{NFSU2_TR(0x58a64e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a660:L58a660:{c.instructions+=8;NFSU2_TR(0x58a660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a661:{NFSU2_TR(0x58a661);
__builtin_memmove((R+20),(R+16),4);
}
B58a663:{NFSU2_TR(0x58a663);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58a666:{NFSU2_TR(0x58a666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B58a66c:{NFSU2_TR(0x58a66c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a66d:{NFSU2_TR(0x58a66d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a66e:{NFSU2_TR(0x58a66e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a66f:{NFSU2_TR(0x58a66f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a674ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a674:L58a674:{c.instructions+=3;NFSU2_TR(0x58a674);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58a677:{NFSU2_TR(0x58a677);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58a679:{NFSU2_TR(0x58a679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a687;}}
}
B58a67b:L58a67b:{c.instructions+=7;NFSU2_TR(0x58a67b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58a67e:{NFSU2_TR(0x58a67e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a67f:{NFSU2_TR(0x58a67f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a680:{NFSU2_TR(0x58a680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a681:{NFSU2_TR(0x58a681);
__builtin_memmove((R+16),(R+20),4);
}
B58a683:{NFSU2_TR(0x58a683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a684:{NFSU2_TR(0x58a684);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a687:L58a687:{c.instructions+=3;NFSU2_TR(0x58a687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58a68a:{NFSU2_TR(0x58a68a);
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
B58a68c:{NFSU2_TR(0x58a68c);
if(r1(R+518)){{goto L58a777;}}
}
B58a692:L58a692:{c.instructions+=2;NFSU2_TR(0x58a692);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B58a695:{NFSU2_TR(0x58a695);
if(r1(R+518)){{goto L58a777;}}
}
B58a69b:L58a69b:{c.instructions+=3;NFSU2_TR(0x58a69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a69e:{NFSU2_TR(0x58a69e);
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
B58a6a0:{NFSU2_TR(0x58a6a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58a777;}}
}
B58a6a6:L58a6a6:{c.instructions+=2;NFSU2_TR(0x58a6a6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B58a6a9:{NFSU2_TR(0x58a6a9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58a777;}}
}
B58a6af:L58a6af:{c.instructions+=3;NFSU2_TR(0x58a6af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a6b1:{NFSU2_TR(0x58a6b1);
w4(R+24,u32(0x10020ull));
}
B58a6b6:{NFSU2_TR(0x58a6b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a6bf;}}
}
B58a6b8:L58a6b8:{c.instructions+=2;NFSU2_TR(0x58a6b8);
w4(R+24,u32(0x10010020ull));
}
B58a6bd:{NFSU2_TR(0x58a6bd);
{goto L58a6ed;}
}
B58a6bf:L58a6bf:{c.instructions+=2;NFSU2_TR(0x58a6bf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a6c2:{NFSU2_TR(0x58a6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a6cb;}}
}
B58a6c4:L58a6c4:{c.instructions+=2;NFSU2_TR(0x58a6c4);
w4(R+24,u32(0x20010020ull));
}
B58a6c9:{NFSU2_TR(0x58a6c9);
{goto L58a6ed;}
}
B58a6cb:L58a6cb:{c.instructions+=2;NFSU2_TR(0x58a6cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a6ce:{NFSU2_TR(0x58a6ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a6d7;}}
}
B58a6d0:L58a6d0:{c.instructions+=2;NFSU2_TR(0x58a6d0);
w4(R+24,u32(0x40010020ull));
}
B58a6d5:{NFSU2_TR(0x58a6d5);
{goto L58a6ed;}
}
B58a6d7:L58a6d7:{c.instructions+=2;NFSU2_TR(0x58a6d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a6da:{NFSU2_TR(0x58a6da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a6e3;}}
}
B58a6dc:L58a6dc:{c.instructions+=2;NFSU2_TR(0x58a6dc);
w4(R+24,u32(0x10060ull));
}
B58a6e1:{NFSU2_TR(0x58a6e1);
{goto L58a6ed;}
}
B58a6e3:L58a6e3:{c.instructions+=2;NFSU2_TR(0x58a6e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a6e6:{NFSU2_TR(0x58a6e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a6ed;}}
}
B58a6e8:L58a6e8:{c.instructions+=1;NFSU2_TR(0x58a6e8);
w4(R+24,u32(0x4010020ull));
}
B58a6ed:L58a6ed:{c.instructions+=4;NFSU2_TR(0x58a6ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a6ef:{NFSU2_TR(0x58a6ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a6f4:{NFSU2_TR(0x58a6f4);
w4(R+4,u32(0x1full));
}
B58a6f9:{NFSU2_TR(0x58a6f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a6fd:L58a6fd:{c.instructions+=1;NFSU2_TR(0x58a6fd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a6ff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a6fdu);}goto L58a6fd;}
}
B58a6ff:L58a6ff:{c.instructions+=9;NFSU2_TR(0x58a6ff);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a701:{NFSU2_TR(0x58a701);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a702:{NFSU2_TR(0x58a702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a705:{NFSU2_TR(0x58a705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a706:{NFSU2_TR(0x58a706);
u8 U[4];
w4(U+0,u32(0x7a1588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a70b:{NFSU2_TR(0x58a70b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a70f:{NFSU2_TR(0x58a70f);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a714:{NFSU2_TR(0x58a714);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a715:{NFSU2_TR(0x58a715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a71aull));
TAIL_STATIC(0x741690u,741);
}
B58a71a:L58a71a:{c.instructions+=6;NFSU2_TR(0x58a71a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a71b:{NFSU2_TR(0x58a71b);
u8 U[4];
w4(U+0,u32(0x7a1580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a720:{NFSU2_TR(0x58a720);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a724:{NFSU2_TR(0x58a724);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a729:{NFSU2_TR(0x58a729);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a72a:{NFSU2_TR(0x58a72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a72full));
TAIL_STATIC(0x741a50u,741);
}
B58a72f:L58a72f:{c.instructions+=6;NFSU2_TR(0x58a72f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a730:{NFSU2_TR(0x58a730);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a735:{NFSU2_TR(0x58a735);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a739:{NFSU2_TR(0x58a739);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a73e:{NFSU2_TR(0x58a73e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a73f:{NFSU2_TR(0x58a73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a744ull));
TAIL_STATIC(0x741760u,741);
}
B58a744:L58a744:{c.instructions+=5;NFSU2_TR(0x58a744);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B58a747:{NFSU2_TR(0x58a747);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a749:{NFSU2_TR(0x58a749);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a74b:{NFSU2_TR(0x58a74b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a74d:{NFSU2_TR(0x58a74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a752ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a752:L58a752:{c.instructions+=6;NFSU2_TR(0x58a752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a753:{NFSU2_TR(0x58a753);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a758:{NFSU2_TR(0x58a758);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a75c:{NFSU2_TR(0x58a75c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a75d:{NFSU2_TR(0x58a75d);
u8 U[4];
w4(U+0,u32(0x6d657367ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a762:{NFSU2_TR(0x58a762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a767ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a767:L58a767:{c.instructions+=2;NFSU2_TR(0x58a767);
__builtin_memmove((R+4),(R+0),4);
}
B58a769:{NFSU2_TR(0x58a769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a76eull));
TAIL_STATIC(0x5869a0u,586);
}
B58a76e:L58a76e:{c.instructions+=6;NFSU2_TR(0x58a76e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a76f:{NFSU2_TR(0x58a76f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a770:{NFSU2_TR(0x58a770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a771:{NFSU2_TR(0x58a771);
__builtin_memmove((R+16),(R+20),4);
}
B58a773:{NFSU2_TR(0x58a773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a774:{NFSU2_TR(0x58a774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a777:L58a777:{c.instructions+=7;NFSU2_TR(0x58a777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a778:{NFSU2_TR(0x58a778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a779:{NFSU2_TR(0x58a779);
w4(R+0,u32(0xffffffecull));
}
B58a77e:{NFSU2_TR(0x58a77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58a77f:{NFSU2_TR(0x58a77f);
__builtin_memmove((R+16),(R+20),4);
}
B58a781:{NFSU2_TR(0x58a781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58a782:{NFSU2_TR(0x58a782);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a790:L58a790:{c.instructions+=9;NFSU2_TR(0x58a790);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a794:{NFSU2_TR(0x58a794);
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
B58a796:{NFSU2_TR(0x58a796);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a797:{NFSU2_TR(0x58a797);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a798:{NFSU2_TR(0x58a798);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58a79c:{NFSU2_TR(0x58a79c);
__builtin_memmove((R+24),(R+4),4);
}
B58a79e:{NFSU2_TR(0x58a79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a7a1:{NFSU2_TR(0x58a7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a7a4:{NFSU2_TR(0x58a7a4);
if(r1(R+518)){{goto L58a7d9;}}
}
B58a7a6:L58a7a6:{c.instructions+=1;NFSU2_TR(0x58a7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a7abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a7ab:L58a7ab:{c.instructions+=3;NFSU2_TR(0x58a7ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58a7ae:{NFSU2_TR(0x58a7ae);
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
B58a7b0:{NFSU2_TR(0x58a7b0);
if(r1(R+518)){{goto L58a7d9;}}
}
B58a7b2:L58a7b2:{c.instructions+=4;NFSU2_TR(0x58a7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a7b5:{NFSU2_TR(0x58a7b5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B58a7b8:{NFSU2_TR(0x58a7b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B58a7bb:{NFSU2_TR(0x58a7bb);
if(r1(R+518)){{goto L58a7c7;}}
}
B58a7bd:L58a7bd:{c.instructions+=4;NFSU2_TR(0x58a7bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7be:{NFSU2_TR(0x58a7be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7bf:{NFSU2_TR(0x58a7bf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7c1:{NFSU2_TR(0x58a7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a7c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58a7c4:L58a7c4:{c.instructions+=1;NFSU2_TR(0x58a7c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58a7c7:L58a7c7:{c.instructions+=3;NFSU2_TR(0x58a7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a7ca:{NFSU2_TR(0x58a7ca);
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
B58a7cc:{NFSU2_TR(0x58a7cc);
if(r1(R+518)){{goto L58a7d9;}}
}
B58a7ce:L58a7ce:{c.instructions+=4;NFSU2_TR(0x58a7ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7cf:{NFSU2_TR(0x58a7cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7d1:{NFSU2_TR(0x58a7d1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7d3:{NFSU2_TR(0x58a7d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a7d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58a7d6:L58a7d6:{c.instructions+=1;NFSU2_TR(0x58a7d6);
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
B58a7d9:L58a7d9:{c.instructions+=3;NFSU2_TR(0x58a7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a7da:{NFSU2_TR(0x58a7da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a7db:{NFSU2_TR(0x58a7db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58a7e0:L58a7e0:{c.instructions+=9;NFSU2_TR(0x58a7e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7e1:{NFSU2_TR(0x58a7e1);
__builtin_memmove((R+20),(R+16),4);
}
B58a7e3:{NFSU2_TR(0x58a7e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58a7e6:{NFSU2_TR(0x58a7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x304ull))));
}
B58a7ec:{NFSU2_TR(0x58a7ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7ed:{NFSU2_TR(0x58a7ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7ee:{NFSU2_TR(0x58a7ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a7ef:{NFSU2_TR(0x58a7ef);
__builtin_memmove((R+12),(R+4),4);
}
B58a7f1:{NFSU2_TR(0x58a7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a7f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a7f6:L58a7f6:{c.instructions+=3;NFSU2_TR(0x58a7f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58a7f9:{NFSU2_TR(0x58a7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58a7fb:{NFSU2_TR(0x58a7fb);
if(r1(R+518)){{goto L58aa12;}}
}
B58a801:L58a801:{c.instructions+=2;NFSU2_TR(0x58a801);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58a805:{NFSU2_TR(0x58a805);
if(r1(R+518)){{goto L58aa12;}}
}
B58a80b:L58a80b:{c.instructions+=2;NFSU2_TR(0x58a80b);
w4(R+4,u32(0x850080ull));
}
B58a810:{NFSU2_TR(0x58a810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a815ull));
TAIL_STATIC(0x5031f0u,503);
}
B58a815:L58a815:{c.instructions+=4;NFSU2_TR(0x58a815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a816:{NFSU2_TR(0x58a816);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58a819:{NFSU2_TR(0x58a819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a81a:{NFSU2_TR(0x58a81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a81full));
TAIL_STATIC(0x43dc30u,43d);
}
B58a81f:L58a81f:{c.instructions+=3;NFSU2_TR(0x58a81f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58a822:{NFSU2_TR(0x58a822);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a824:{NFSU2_TR(0x58a824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58aa12;}}
}
B58a82a:L58a82a:{c.instructions+=1;NFSU2_TR(0x58a82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a82full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a82f:L58a82f:{c.instructions+=3;NFSU2_TR(0x58a82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58a832:{NFSU2_TR(0x58a832);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a834:{NFSU2_TR(0x58a834);
if(r1(R+518)){{goto L58a844;}}
}
B58a836:L58a836:{c.instructions+=2;NFSU2_TR(0x58a836);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x67737461ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58a83d:{NFSU2_TR(0x58a83d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a844;}}
}
B58a83f:L58a83f:{c.instructions+=2;NFSU2_TR(0x58a83f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a842:{NFSU2_TR(0x58a842);
{goto L58a864;}
}
B58a844:L58a844:{c.instructions+=4;NFSU2_TR(0x58a844);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58a847:{NFSU2_TR(0x58a847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58a849:{NFSU2_TR(0x58a849);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a84b:{NFSU2_TR(0x58a84b);
if(r1(R+518)){{goto L58a86d;}}
}
B58a84d:L58a84d:{c.instructions+=1;NFSU2_TR(0x58a84d);
__builtin_memmove((R+4),(R+4),4);
}
B58a850:L58a850:{c.instructions+=2;NFSU2_TR(0x58a850);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x67737461ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58a857:{NFSU2_TR(0x58a857);
if(r1(R+518)){{goto L58a861;}}
}
B58a859:L58a859:{c.instructions+=3;NFSU2_TR(0x58a859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58a85b:{NFSU2_TR(0x58a85b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a85d:{NFSU2_TR(0x58a85d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a850u);}goto L58a850;}}
}
B58a85f:L58a85f:{c.instructions+=1;NFSU2_TR(0x58a85f);
{goto L58a86d;}
}
B58a861:L58a861:{c.instructions+=1;NFSU2_TR(0x58a861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a864:L58a864:{c.instructions+=2;NFSU2_TR(0x58a864);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a867:{NFSU2_TR(0x58a867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58aa12;}}
}
B58a86d:L58a86d:{c.instructions+=3;NFSU2_TR(0x58a86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58a873:{NFSU2_TR(0x58a873);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58a879:{NFSU2_TR(0x58a879);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58aa12;}}
}
B58a87f:L58a87f:{c.instructions+=4;NFSU2_TR(0x58a87f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a881:{NFSU2_TR(0x58a881);
u8 U[5];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a889:{NFSU2_TR(0x58a889);
w4(R+4,u32(0x7full));
}
B58a88e:{NFSU2_TR(0x58a88e);
u8 U[4];
w4(U+0,u32(u32(u32(0x111ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a895:L58a895:{c.instructions+=1;NFSU2_TR(0x58a895);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a897;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a895u);}goto L58a895;}
}
B58a897:L58a897:{c.instructions+=5;NFSU2_TR(0x58a897);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a899:{NFSU2_TR(0x58a899);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a89a:{NFSU2_TR(0x58a89a);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58a89e:{NFSU2_TR(0x58a89e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a8a2:{NFSU2_TR(0x58a8a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a99b;}}
}
B58a8a8:L58a8a8:{c.instructions+=4;NFSU2_TR(0x58a8a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58a8aa:{NFSU2_TR(0x58a8aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58a8af:{NFSU2_TR(0x58a8af);
w4(R+4,u32(0x3full));
}
B58a8b4:{NFSU2_TR(0x58a8b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58a8b8:L58a8b8:{c.instructions+=1;NFSU2_TR(0x58a8b8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58a8ba;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a8b8u);}goto L58a8b8;}
}
B58a8ba:L58a8ba:{c.instructions+=5;NFSU2_TR(0x58a8ba);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58a8bc:{NFSU2_TR(0x58a8bc);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58a8bd:{NFSU2_TR(0x58a8bd);
w4(R+28,u32(0x1ull));
}
B58a8c2:{NFSU2_TR(0x58a8c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58a8c4:{NFSU2_TR(0x58a8c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58a92b;}}
}
B58a8c6:L58a8c6:{c.instructions+=2;NFSU2_TR(0x58a8c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x244ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58a8cc:{NFSU2_TR(0x58a8cc);
__builtin_memmove((R+16),(R+16),4);
}
B58a8d0:L58a8d0:{c.instructions+=2;NFSU2_TR(0x58a8d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B58a8d7:{NFSU2_TR(0x58a8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58a91d;}}
}
B58a8d9:L58a8d9:{c.instructions+=3;NFSU2_TR(0x58a8d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a8dd:{NFSU2_TR(0x58a8dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a8de:{NFSU2_TR(0x58a8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a8e3ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58a8e3:L58a8e3:{c.instructions+=3;NFSU2_TR(0x58a8e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a8e6:{NFSU2_TR(0x58a8e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a8e8:{NFSU2_TR(0x58a8e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58a901;}}
}
B58a8ea:L58a8ea:{c.instructions+=6;NFSU2_TR(0x58a8ea);
u8 U[4];
w4(U+0,u32(0x7a1598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a8ef:{NFSU2_TR(0x58a8ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a8f3:{NFSU2_TR(0x58a8f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a8f4:{NFSU2_TR(0x58a8f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a8f8:{NFSU2_TR(0x58a8f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a8f9:{NFSU2_TR(0x58a8f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a8feull));
TAIL_STATIC(0x43dda0u,43d);
}
B58a8fe:L58a8fe:{c.instructions+=1;NFSU2_TR(0x58a8fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58a901:L58a901:{c.instructions+=6;NFSU2_TR(0x58a901);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a902:{NFSU2_TR(0x58a902);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a906:{NFSU2_TR(0x58a906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a907:{NFSU2_TR(0x58a907);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a90b:{NFSU2_TR(0x58a90b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a90c:{NFSU2_TR(0x58a90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a911ull));
TAIL_STATIC(0x43dda0u,43d);
}
B58a911:L58a911:{c.instructions+=4;NFSU2_TR(0x58a911);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a915:{NFSU2_TR(0x58a915);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58a918:{NFSU2_TR(0x58a918);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B58a919:{NFSU2_TR(0x58a919);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58a91d:L58a91d:{c.instructions+=5;NFSU2_TR(0x58a91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a923:{NFSU2_TR(0x58a923);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B58a924:{NFSU2_TR(0x58a924);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B58a927:{NFSU2_TR(0x58a927);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58a929:{NFSU2_TR(0x58a929);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a8d0u);}goto L58a8d0;}}
}
B58a92b:L58a92b:{c.instructions+=3;NFSU2_TR(0x58a92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a92f:{NFSU2_TR(0x58a92f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a930:{NFSU2_TR(0x58a930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a935ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58a935:L58a935:{c.instructions+=3;NFSU2_TR(0x58a935);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58a938:{NFSU2_TR(0x58a938);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a93a:{NFSU2_TR(0x58a93a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58a9a6;}}
}
B58a93c:L58a93c:{c.instructions+=7;NFSU2_TR(0x58a93c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58a93f:{NFSU2_TR(0x58a93f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a940:{NFSU2_TR(0x58a940);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a945:{NFSU2_TR(0x58a945);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a94c:{NFSU2_TR(0x58a94c);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a951:{NFSU2_TR(0x58a951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a952:{NFSU2_TR(0x58a952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a957ull));
TAIL_STATIC(0x741a50u,741);
}
B58a957:L58a957:{c.instructions+=7;NFSU2_TR(0x58a957);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58a95b:{NFSU2_TR(0x58a95b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a95c:{NFSU2_TR(0x58a95c);
u8 U[4];
w4(U+0,u32(0x7a1590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a961:{NFSU2_TR(0x58a961);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a968:{NFSU2_TR(0x58a968);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a96d:{NFSU2_TR(0x58a96d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a96e:{NFSU2_TR(0x58a96e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a973ull));
TAIL_STATIC(0x741a50u,741);
}
B58a973:L58a973:{c.instructions+=10;NFSU2_TR(0x58a973);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58a976:{NFSU2_TR(0x58a976);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a978:{NFSU2_TR(0x58a978);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a97a:{NFSU2_TR(0x58a97a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a97c:{NFSU2_TR(0x58a97c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a97e:{NFSU2_TR(0x58a97e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a980:{NFSU2_TR(0x58a980);
u8 U[4];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58a987:{NFSU2_TR(0x58a987);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a988:{NFSU2_TR(0x58a988);
u8 U[4];
w4(U+0,u32(0x67736574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a98d:{NFSU2_TR(0x58a98d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a992ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a992:L58a992:{c.instructions+=2;NFSU2_TR(0x58a992);
__builtin_memmove((R+4),(R+0),4);
}
B58a994:{NFSU2_TR(0x58a994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a999ull));
TAIL_STATIC(0x5869a0u,586);
}
B58a999:L58a999:{c.instructions+=1;NFSU2_TR(0x58a999);
{goto L58a9a6;}
}
B58a99b:L58a99b:{c.instructions+=2;NFSU2_TR(0x58a99b);
__builtin_memmove((R+4),(R+12),4);
}
B58a99d:{NFSU2_TR(0x58a99d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a9a2ull));
TAIL_STATIC(0x582980u,582);
}
B58a9a2:L58a9a2:{c.instructions+=2;NFSU2_TR(0x58a9a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58a9a4:{NFSU2_TR(0x58a9a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58aa12;}}
}
B58a9a6:L58a9a6:{c.instructions+=3;NFSU2_TR(0x58a9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a9aa:{NFSU2_TR(0x58a9aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58a9b0:{NFSU2_TR(0x58a9b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58aa07;}}
}
B58a9b2:L58a9b2:{c.instructions+=7;NFSU2_TR(0x58a9b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B58a9b5:{NFSU2_TR(0x58a9b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9b6:{NFSU2_TR(0x58a9b6);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9bb:{NFSU2_TR(0x58a9bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a9c2:{NFSU2_TR(0x58a9c2);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9c7:{NFSU2_TR(0x58a9c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9c8:{NFSU2_TR(0x58a9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a9cdull));
TAIL_STATIC(0x741a50u,741);
}
B58a9cd:L58a9cd:{c.instructions+=7;NFSU2_TR(0x58a9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58a9d0:{NFSU2_TR(0x58a9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58a9d3:{NFSU2_TR(0x58a9d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58a9d6:{NFSU2_TR(0x58a9d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9d8:{NFSU2_TR(0x58a9d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9d9:{NFSU2_TR(0x58a9d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9da:{NFSU2_TR(0x58a9da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a9dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a9df:L58a9df:{c.instructions+=6;NFSU2_TR(0x58a9df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9e0:{NFSU2_TR(0x58a9e0);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9e5:{NFSU2_TR(0x58a9e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58a9ec:{NFSU2_TR(0x58a9ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9ed:{NFSU2_TR(0x58a9ed);
u8 U[4];
w4(U+0,u32(0x67737461ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58a9f2:{NFSU2_TR(0x58a9f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a9f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58a9f7:L58a9f7:{c.instructions+=2;NFSU2_TR(0x58a9f7);
__builtin_memmove((R+4),(R+0),4);
}
B58a9f9:{NFSU2_TR(0x58a9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58a9feull));
TAIL_STATIC(0x5869a0u,586);
}
B58a9fe:L58a9fe:{c.instructions+=6;NFSU2_TR(0x58a9fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58a9ff:{NFSU2_TR(0x58a9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58aa00:{NFSU2_TR(0x58aa00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58aa01:{NFSU2_TR(0x58aa01);
__builtin_memmove((R+16),(R+20),4);
}
B58aa03:{NFSU2_TR(0x58aa03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58aa04:{NFSU2_TR(0x58aa04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aa07:L58aa07:{c.instructions+=7;NFSU2_TR(0x58aa07);
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
B58aa09:{NFSU2_TR(0x58aa09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58aa0a:{NFSU2_TR(0x58aa0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58aa0b:{NFSU2_TR(0x58aa0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58aa0c:{NFSU2_TR(0x58aa0c);
__builtin_memmove((R+16),(R+20),4);
}
B58aa0e:{NFSU2_TR(0x58aa0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58aa0f:{NFSU2_TR(0x58aa0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aa12:L58aa12:{c.instructions+=7;NFSU2_TR(0x58aa12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58aa13:{NFSU2_TR(0x58aa13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58aa14:{NFSU2_TR(0x58aa14);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58aa17:{NFSU2_TR(0x58aa17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58aa18:{NFSU2_TR(0x58aa18);
__builtin_memmove((R+16),(R+20),4);
}
B58aa1a:{NFSU2_TR(0x58aa1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58aa1b:{NFSU2_TR(0x58aa1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aa20:L58aa20:{c.instructions+=8;NFSU2_TR(0x58aa20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aa21:{NFSU2_TR(0x58aa21);
__builtin_memmove((R+20),(R+16),4);
}
B58aa23:{NFSU2_TR(0x58aa23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58aa26:{NFSU2_TR(0x58aa26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B58aa2c:{NFSU2_TR(0x58aa2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aa2d:{NFSU2_TR(0x58aa2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aa2e:{NFSU2_TR(0x58aa2e);
__builtin_memmove((R+24),(R+4),4);
}
B58aa30:{NFSU2_TR(0x58aa30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aa35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58aa35:L58aa35:{c.instructions+=3;NFSU2_TR(0x58aa35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58aa38:{NFSU2_TR(0x58aa38);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58aa3a:{NFSU2_TR(0x58aa3a);
if(r1(R+518)){{goto L58aa90;}}
}
B58aa3c:L58aa3c:{c.instructions+=2;NFSU2_TR(0x58aa3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58aa40:{NFSU2_TR(0x58aa40);
if(r1(R+518)){{goto L58aa90;}}
}
B58aa42:L58aa42:{c.instructions+=2;NFSU2_TR(0x58aa42);
w4(R+4,u32(0x850080ull));
}
B58aa47:{NFSU2_TR(0x58aa47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aa4cull));
TAIL_STATIC(0x5031f0u,503);
}
B58aa4c:L58aa4c:{c.instructions+=4;NFSU2_TR(0x58aa4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aa4d:{NFSU2_TR(0x58aa4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58aa50:{NFSU2_TR(0x58aa50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aa51:{NFSU2_TR(0x58aa51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aa56ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58aa56:L58aa56:{c.instructions+=3;NFSU2_TR(0x58aa56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58aa59:{NFSU2_TR(0x58aa59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58aa5b:{NFSU2_TR(0x58aa5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58aa90;}}
}
B58aa5d:L58aa5d:{c.instructions+=3;NFSU2_TR(0x58aa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58aa63:{NFSU2_TR(0x58aa63);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58aa66:{NFSU2_TR(0x58aa66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58aa90;}}
}
B58aa68:L58aa68:{c.instructions+=4;NFSU2_TR(0x58aa68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58aa6e:{NFSU2_TR(0x58aa6e);
w4(R+0,u32(0x1ull));
}
B58aa73:{NFSU2_TR(0x58aa73);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58aa75:{NFSU2_TR(0x58aa75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58aa90;}}
}
B58aa77:L58aa77:{c.instructions+=2;NFSU2_TR(0x58aa77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58aa7d:{NFSU2_TR(0x58aa7d);
__builtin_memmove((R+4),(R+4),4);
}
B58aa80:L58aa80:{c.instructions+=2;NFSU2_TR(0x58aa80);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58aa86:{NFSU2_TR(0x58aa86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58aa9b;}}
}
B58aa88:L58aa88:{c.instructions+=4;NFSU2_TR(0x58aa88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58aa89:{NFSU2_TR(0x58aa89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B58aa8c:{NFSU2_TR(0x58aa8c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58aa8e:{NFSU2_TR(0x58aa8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58aa80u);}goto L58aa80;}}
}
B58aa90:L58aa90:{c.instructions+=6;NFSU2_TR(0x58aa90);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58aa93:{NFSU2_TR(0x58aa93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58aa94:{NFSU2_TR(0x58aa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58aa95:{NFSU2_TR(0x58aa95);
__builtin_memmove((R+16),(R+20),4);
}
B58aa97:{NFSU2_TR(0x58aa97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58aa98:{NFSU2_TR(0x58aa98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aa9b:L58aa9b:{c.instructions+=4;NFSU2_TR(0x58aa9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58aaa0:{NFSU2_TR(0x58aaa0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58aaa2:{NFSU2_TR(0x58aaa2);
w4(R+4,u32(0x1full));
}
B58aaa7:{NFSU2_TR(0x58aaa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58aaab:L58aaab:{c.instructions+=1;NFSU2_TR(0x58aaab);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58aaad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58aaabu);}goto L58aaab;}
}
B58aaad:L58aaad:{c.instructions+=9;NFSU2_TR(0x58aaad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58aab0:{NFSU2_TR(0x58aab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aab1:{NFSU2_TR(0x58aab1);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aab6:{NFSU2_TR(0x58aab6);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58aab8:{NFSU2_TR(0x58aab8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58aabc:{NFSU2_TR(0x58aabc);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aac1:{NFSU2_TR(0x58aac1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aac2:{NFSU2_TR(0x58aac2);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58aac3:{NFSU2_TR(0x58aac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aac8ull));
TAIL_STATIC(0x741a50u,741);
}
B58aac8:L58aac8:{c.instructions+=8;NFSU2_TR(0x58aac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58aace:{NFSU2_TR(0x58aace);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B58aad3:{NFSU2_TR(0x58aad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aad4:{NFSU2_TR(0x58aad4);
u8 U[4];
w4(U+0,u32(0x7a15a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aad9:{NFSU2_TR(0x58aad9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58aadd:{NFSU2_TR(0x58aadd);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aae2:{NFSU2_TR(0x58aae2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aae3:{NFSU2_TR(0x58aae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aae8ull));
TAIL_STATIC(0x741690u,741);
}
B58aae8:L58aae8:{c.instructions+=8;NFSU2_TR(0x58aae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58aaee:{NFSU2_TR(0x58aaee);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000000ull))));
}
B58aaf4:{NFSU2_TR(0x58aaf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aaf5:{NFSU2_TR(0x58aaf5);
u8 U[4];
w4(U+0,u32(0x7a159cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aafa:{NFSU2_TR(0x58aafa);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58aafe:{NFSU2_TR(0x58aafe);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab03:{NFSU2_TR(0x58ab03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab04:{NFSU2_TR(0x58ab04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab09ull));
TAIL_STATIC(0x741690u,741);
}
B58ab09:L58ab09:{c.instructions+=7;NFSU2_TR(0x58ab09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ab0c:{NFSU2_TR(0x58ab0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ab0f:{NFSU2_TR(0x58ab0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B58ab12:{NFSU2_TR(0x58ab12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab14:{NFSU2_TR(0x58ab14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab15:{NFSU2_TR(0x58ab15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab16:{NFSU2_TR(0x58ab16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ab1b:L58ab1b:{c.instructions+=6;NFSU2_TR(0x58ab1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab1c:{NFSU2_TR(0x58ab1c);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab21:{NFSU2_TR(0x58ab21);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58ab25:{NFSU2_TR(0x58ab25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab26:{NFSU2_TR(0x58ab26);
u8 U[4];
w4(U+0,u32(0x67736574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab2b:{NFSU2_TR(0x58ab2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ab30:L58ab30:{c.instructions+=2;NFSU2_TR(0x58ab30);
__builtin_memmove((R+4),(R+0),4);
}
B58ab32:{NFSU2_TR(0x58ab32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab37ull));
TAIL_STATIC(0x5869a0u,586);
}
B58ab37:L58ab37:{c.instructions+=5;NFSU2_TR(0x58ab37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ab38:{NFSU2_TR(0x58ab38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ab39:{NFSU2_TR(0x58ab39);
__builtin_memmove((R+16),(R+20),4);
}
B58ab3b:{NFSU2_TR(0x58ab3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ab3c:{NFSU2_TR(0x58ab3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ab40:L58ab40:{c.instructions+=8;NFSU2_TR(0x58ab40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab41:{NFSU2_TR(0x58ab41);
__builtin_memmove((R+20),(R+16),4);
}
B58ab43:{NFSU2_TR(0x58ab43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58ab46:{NFSU2_TR(0x58ab46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B58ab4c:{NFSU2_TR(0x58ab4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab4d:{NFSU2_TR(0x58ab4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab4e:{NFSU2_TR(0x58ab4e);
__builtin_memmove((R+24),(R+4),4);
}
B58ab50:{NFSU2_TR(0x58ab50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab55ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ab55:L58ab55:{c.instructions+=3;NFSU2_TR(0x58ab55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58ab58:{NFSU2_TR(0x58ab58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ab5a:{NFSU2_TR(0x58ab5a);
if(r1(R+518)){{goto L58ac3c;}}
}
B58ab60:L58ab60:{c.instructions+=2;NFSU2_TR(0x58ab60);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58ab64:{NFSU2_TR(0x58ab64);
if(r1(R+518)){{goto L58ac3c;}}
}
B58ab6a:L58ab6a:{c.instructions+=2;NFSU2_TR(0x58ab6a);
w4(R+4,u32(0x850080ull));
}
B58ab6f:{NFSU2_TR(0x58ab6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab74ull));
TAIL_STATIC(0x5031f0u,503);
}
B58ab74:L58ab74:{c.instructions+=4;NFSU2_TR(0x58ab74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab75:{NFSU2_TR(0x58ab75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58ab78:{NFSU2_TR(0x58ab78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ab79:{NFSU2_TR(0x58ab79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ab7eull));
TAIL_STATIC(0x43dc30u,43d);
}
B58ab7e:L58ab7e:{c.instructions+=3;NFSU2_TR(0x58ab7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58ab81:{NFSU2_TR(0x58ab81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ab83:{NFSU2_TR(0x58ab83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ac3c;}}
}
B58ab89:L58ab89:{c.instructions+=3;NFSU2_TR(0x58ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ab8f:{NFSU2_TR(0x58ab8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ab92:{NFSU2_TR(0x58ab92);
if(r1(R+518)){{goto L58ac3c;}}
}
B58ab98:L58ab98:{c.instructions+=4;NFSU2_TR(0x58ab98);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ab9d:{NFSU2_TR(0x58ab9d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58ab9f:{NFSU2_TR(0x58ab9f);
w4(R+4,u32(0x1full));
}
B58aba4:{NFSU2_TR(0x58aba4);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58aba8:L58aba8:{c.instructions+=1;NFSU2_TR(0x58aba8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58abaa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58aba8u);}goto L58aba8;}
}
B58abaa:L58abaa:{c.instructions+=9;NFSU2_TR(0x58abaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58abad:{NFSU2_TR(0x58abad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abae:{NFSU2_TR(0x58abae);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abb3:{NFSU2_TR(0x58abb3);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58abb5:{NFSU2_TR(0x58abb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58abb9:{NFSU2_TR(0x58abb9);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abbe:{NFSU2_TR(0x58abbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abbf:{NFSU2_TR(0x58abbf);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58abc0:{NFSU2_TR(0x58abc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58abc5ull));
TAIL_STATIC(0x741a50u,741);
}
B58abc5:L58abc5:{c.instructions+=8;NFSU2_TR(0x58abc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58abcb:{NFSU2_TR(0x58abcb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffefffull))));
}
B58abd0:{NFSU2_TR(0x58abd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abd1:{NFSU2_TR(0x58abd1);
u8 U[4];
w4(U+0,u32(0x7a15a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abd6:{NFSU2_TR(0x58abd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58abda:{NFSU2_TR(0x58abda);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abdf:{NFSU2_TR(0x58abdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abe0:{NFSU2_TR(0x58abe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58abe5ull));
TAIL_STATIC(0x741690u,741);
}
B58abe5:L58abe5:{c.instructions+=8;NFSU2_TR(0x58abe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58abeb:{NFSU2_TR(0x58abeb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf7ffffffull))));
}
B58abf1:{NFSU2_TR(0x58abf1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abf2:{NFSU2_TR(0x58abf2);
u8 U[4];
w4(U+0,u32(0x7a159cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58abf7:{NFSU2_TR(0x58abf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58abfb:{NFSU2_TR(0x58abfb);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac00:{NFSU2_TR(0x58ac00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac01:{NFSU2_TR(0x58ac01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ac06ull));
TAIL_STATIC(0x741690u,741);
}
B58ac06:L58ac06:{c.instructions+=7;NFSU2_TR(0x58ac06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ac09:{NFSU2_TR(0x58ac09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ac0c:{NFSU2_TR(0x58ac0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B58ac0f:{NFSU2_TR(0x58ac0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac11:{NFSU2_TR(0x58ac11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac12:{NFSU2_TR(0x58ac12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac13:{NFSU2_TR(0x58ac13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ac18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ac18:L58ac18:{c.instructions+=6;NFSU2_TR(0x58ac18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac19:{NFSU2_TR(0x58ac19);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac1e:{NFSU2_TR(0x58ac1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58ac22:{NFSU2_TR(0x58ac22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac23:{NFSU2_TR(0x58ac23);
u8 U[4];
w4(U+0,u32(0x67736574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac28:{NFSU2_TR(0x58ac28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ac2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ac2d:L58ac2d:{c.instructions+=2;NFSU2_TR(0x58ac2d);
__builtin_memmove((R+4),(R+0),4);
}
B58ac2f:{NFSU2_TR(0x58ac2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ac34ull));
TAIL_STATIC(0x5869a0u,586);
}
B58ac34:L58ac34:{c.instructions+=5;NFSU2_TR(0x58ac34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ac35:{NFSU2_TR(0x58ac35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ac36:{NFSU2_TR(0x58ac36);
__builtin_memmove((R+16),(R+20),4);
}
B58ac38:{NFSU2_TR(0x58ac38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ac39:{NFSU2_TR(0x58ac39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ac3c:L58ac3c:{c.instructions+=6;NFSU2_TR(0x58ac3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ac3d:{NFSU2_TR(0x58ac3d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ac40:{NFSU2_TR(0x58ac40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ac41:{NFSU2_TR(0x58ac41);
__builtin_memmove((R+16),(R+20),4);
}
B58ac43:{NFSU2_TR(0x58ac43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ac44:{NFSU2_TR(0x58ac44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ac50:L58ac50:{c.instructions+=9;NFSU2_TR(0x58ac50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac51:{NFSU2_TR(0x58ac51);
__builtin_memmove((R+20),(R+16),4);
}
B58ac53:{NFSU2_TR(0x58ac53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58ac56:{NFSU2_TR(0x58ac56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B58ac5c:{NFSU2_TR(0x58ac5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac5d:{NFSU2_TR(0x58ac5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac5e:{NFSU2_TR(0x58ac5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ac5f:{NFSU2_TR(0x58ac5f);
__builtin_memmove((R+12),(R+4),4);
}
B58ac61:{NFSU2_TR(0x58ac61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ac66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ac66:L58ac66:{c.instructions+=3;NFSU2_TR(0x58ac66);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58ac69:{NFSU2_TR(0x58ac69);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ac6b:{NFSU2_TR(0x58ac6b);
if(r1(R+518)){{goto L58ad05;}}
}
B58ac71:L58ac71:{c.instructions+=3;NFSU2_TR(0x58ac71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58ac74:{NFSU2_TR(0x58ac74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ac76:{NFSU2_TR(0x58ac76);
if(r1(R+518)){{goto L58ad05;}}
}
B58ac7c:L58ac7c:{c.instructions+=2;NFSU2_TR(0x58ac7c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58ac7f:{NFSU2_TR(0x58ac7f);
if(r1(R+518)){{goto L58ad05;}}
}
B58ac85:L58ac85:{c.instructions+=3;NFSU2_TR(0x58ac85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ac88:{NFSU2_TR(0x58ac88);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58ac8a:{NFSU2_TR(0x58ac8a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ad05;}}
}
B58ac8c:L58ac8c:{c.instructions+=4;NFSU2_TR(0x58ac8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58ac8e:{NFSU2_TR(0x58ac8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ac93:{NFSU2_TR(0x58ac93);
w4(R+4,u32(0x1full));
}
B58ac98:{NFSU2_TR(0x58ac98);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58ac9c:L58ac9c:{c.instructions+=1;NFSU2_TR(0x58ac9c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58ac9e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ac9cu);}goto L58ac9c;}
}
B58ac9e:L58ac9e:{c.instructions+=9;NFSU2_TR(0x58ac9e);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58aca0:{NFSU2_TR(0x58aca0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B58aca3:{NFSU2_TR(0x58aca3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aca4:{NFSU2_TR(0x58aca4);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aca9:{NFSU2_TR(0x58aca9);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58acaa:{NFSU2_TR(0x58acaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58acae:{NFSU2_TR(0x58acae);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acb3:{NFSU2_TR(0x58acb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acb4:{NFSU2_TR(0x58acb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58acb9ull));
TAIL_STATIC(0x741a50u,741);
}
B58acb9:L58acb9:{c.instructions+=6;NFSU2_TR(0x58acb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acba:{NFSU2_TR(0x58acba);
u8 U[4];
w4(U+0,u32(0x7a1590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acbf:{NFSU2_TR(0x58acbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58acc3:{NFSU2_TR(0x58acc3);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acc8:{NFSU2_TR(0x58acc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acc9:{NFSU2_TR(0x58acc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58acceull));
TAIL_STATIC(0x741a50u,741);
}
B58acce:L58acce:{c.instructions+=7;NFSU2_TR(0x58acce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58acd1:{NFSU2_TR(0x58acd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58acd4:{NFSU2_TR(0x58acd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58acd7:{NFSU2_TR(0x58acd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acd9:{NFSU2_TR(0x58acd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acda:{NFSU2_TR(0x58acda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acdb:{NFSU2_TR(0x58acdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ace0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ace0:L58ace0:{c.instructions+=6;NFSU2_TR(0x58ace0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ace1:{NFSU2_TR(0x58ace1);
u8 U[4];
w4(U+0,u32(0x584630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ace6:{NFSU2_TR(0x58ace6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58acea:{NFSU2_TR(0x58acea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aceb:{NFSU2_TR(0x58aceb);
u8 U[4];
w4(U+0,u32(0x67736574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58acf0:{NFSU2_TR(0x58acf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58acf5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58acf5:L58acf5:{c.instructions+=2;NFSU2_TR(0x58acf5);
__builtin_memmove((R+4),(R+0),4);
}
B58acf7:{NFSU2_TR(0x58acf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58acfcull));
TAIL_STATIC(0x5869a0u,586);
}
B58acfc:L58acfc:{c.instructions+=6;NFSU2_TR(0x58acfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58acfd:{NFSU2_TR(0x58acfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58acfe:{NFSU2_TR(0x58acfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58acff:{NFSU2_TR(0x58acff);
__builtin_memmove((R+16),(R+20),4);
}
B58ad01:{NFSU2_TR(0x58ad01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ad02:{NFSU2_TR(0x58ad02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ad05:L58ad05:{c.instructions+=7;NFSU2_TR(0x58ad05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ad06:{NFSU2_TR(0x58ad06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ad07:{NFSU2_TR(0x58ad07);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ad0a:{NFSU2_TR(0x58ad0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ad0b:{NFSU2_TR(0x58ad0b);
__builtin_memmove((R+16),(R+20),4);
}
B58ad0d:{NFSU2_TR(0x58ad0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ad0e:{NFSU2_TR(0x58ad0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ad20:L58ad20:{c.instructions+=9;NFSU2_TR(0x58ad20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad21:{NFSU2_TR(0x58ad21);
__builtin_memmove((R+20),(R+16),4);
}
B58ad23:{NFSU2_TR(0x58ad23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58ad26:{NFSU2_TR(0x58ad26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B58ad2c:{NFSU2_TR(0x58ad2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad2d:{NFSU2_TR(0x58ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad2e:{NFSU2_TR(0x58ad2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad2f:{NFSU2_TR(0x58ad2f);
__builtin_memmove((R+12),(R+4),4);
}
B58ad31:{NFSU2_TR(0x58ad31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ad36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ad36:L58ad36:{c.instructions+=3;NFSU2_TR(0x58ad36);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58ad39:{NFSU2_TR(0x58ad39);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ad3b:{NFSU2_TR(0x58ad3b);
if(r1(R+518)){{goto L58ae22;}}
}
B58ad41:L58ad41:{c.instructions+=4;NFSU2_TR(0x58ad41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ad44:{NFSU2_TR(0x58ad44);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58ad46:{NFSU2_TR(0x58ad46);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ad48:{NFSU2_TR(0x58ad48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ae22;}}
}
B58ad4e:L58ad4e:{c.instructions+=3;NFSU2_TR(0x58ad4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58ad54:{NFSU2_TR(0x58ad54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ad58:{NFSU2_TR(0x58ad58);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58ad96;}}
}
B58ad5a:L58ad5a:{c.instructions+=1;NFSU2_TR(0x58ad5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ad60:L58ad60:{c.instructions+=2;NFSU2_TR(0x58ad60);
w4(R+4,u32(0x850080ull));
}
B58ad65:{NFSU2_TR(0x58ad65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ad6aull));
TAIL_STATIC(0x5031f0u,503);
}
B58ad6a:L58ad6a:{c.instructions+=3;NFSU2_TR(0x58ad6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad6b:{NFSU2_TR(0x58ad6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ad6c:{NFSU2_TR(0x58ad6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ad71ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58ad71:L58ad71:{c.instructions+=3;NFSU2_TR(0x58ad71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58ad74:{NFSU2_TR(0x58ad74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ad76:{NFSU2_TR(0x58ad76);
if(r1(R+518)){{goto L58ad88;}}
}
B58ad78:L58ad78:{c.instructions+=5;NFSU2_TR(0x58ad78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ad7e:{NFSU2_TR(0x58ad7e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58ad7f:{NFSU2_TR(0x58ad7f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x64ull))));
}
B58ad82:{NFSU2_TR(0x58ad82);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ad84:{NFSU2_TR(0x58ad84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ad60u);}goto L58ad60;}}
}
B58ad86:L58ad86:{c.instructions+=1;NFSU2_TR(0x58ad86);
{goto L58ad96;}
}
B58ad88:L58ad88:{c.instructions+=3;NFSU2_TR(0x58ad88);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B58ad8b:{NFSU2_TR(0x58ad8b);
u8 U[16];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58ad92:{NFSU2_TR(0x58ad92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ad96:L58ad96:{c.instructions+=3;NFSU2_TR(0x58ad96);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58ad9a:{NFSU2_TR(0x58ad9a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ad9e:{NFSU2_TR(0x58ad9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ada7;}}
}
B58ada0:L58ada0:{c.instructions+=2;NFSU2_TR(0x58ada0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8000000ull))));
}
B58ada5:{NFSU2_TR(0x58ada5);
{goto L58adac;}
}
B58ada7:L58ada7:{c.instructions+=1;NFSU2_TR(0x58ada7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf7ffffffull))));
}
B58adac:L58adac:{c.instructions+=5;NFSU2_TR(0x58adac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58adb0:{NFSU2_TR(0x58adb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58adb5:{NFSU2_TR(0x58adb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58adb7:{NFSU2_TR(0x58adb7);
w4(R+4,u32(0x1full));
}
B58adbc:{NFSU2_TR(0x58adbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58adc0:L58adc0:{c.instructions+=1;NFSU2_TR(0x58adc0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58adc2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58adc0u);}goto L58adc0;}
}
B58adc2:L58adc2:{c.instructions+=9;NFSU2_TR(0x58adc2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B58adc5:{NFSU2_TR(0x58adc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adc6:{NFSU2_TR(0x58adc6);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adcb:{NFSU2_TR(0x58adcb);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58adcd:{NFSU2_TR(0x58adcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58add1:{NFSU2_TR(0x58add1);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58add6:{NFSU2_TR(0x58add6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58add7:{NFSU2_TR(0x58add7);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58add8:{NFSU2_TR(0x58add8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58adddull));
TAIL_STATIC(0x741a50u,741);
}
B58addd:L58addd:{c.instructions+=7;NFSU2_TR(0x58addd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ade1:{NFSU2_TR(0x58ade1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ade2:{NFSU2_TR(0x58ade2);
u8 U[4];
w4(U+0,u32(0x7a159cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ade7:{NFSU2_TR(0x58ade7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58adeb:{NFSU2_TR(0x58adeb);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adf0:{NFSU2_TR(0x58adf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adf1:{NFSU2_TR(0x58adf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58adf6ull));
TAIL_STATIC(0x741690u,741);
}
B58adf6:L58adf6:{c.instructions+=10;NFSU2_TR(0x58adf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58adf9:{NFSU2_TR(0x58adf9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adfb:{NFSU2_TR(0x58adfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adfd:{NFSU2_TR(0x58adfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58adff:{NFSU2_TR(0x58adff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae01:{NFSU2_TR(0x58ae01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae03:{NFSU2_TR(0x58ae03);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ae07:{NFSU2_TR(0x58ae07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae08:{NFSU2_TR(0x58ae08);
u8 U[4];
w4(U+0,u32(0x67736574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae0d:{NFSU2_TR(0x58ae0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ae12:L58ae12:{c.instructions+=2;NFSU2_TR(0x58ae12);
__builtin_memmove((R+4),(R+0),4);
}
B58ae14:{NFSU2_TR(0x58ae14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae19ull));
TAIL_STATIC(0x5869a0u,586);
}
B58ae19:L58ae19:{c.instructions+=6;NFSU2_TR(0x58ae19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ae1a:{NFSU2_TR(0x58ae1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ae1b:{NFSU2_TR(0x58ae1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ae1c:{NFSU2_TR(0x58ae1c);
__builtin_memmove((R+16),(R+20),4);
}
B58ae1e:{NFSU2_TR(0x58ae1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ae1f:{NFSU2_TR(0x58ae1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ae22:L58ae22:{c.instructions+=7;NFSU2_TR(0x58ae22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ae23:{NFSU2_TR(0x58ae23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ae24:{NFSU2_TR(0x58ae24);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ae27:{NFSU2_TR(0x58ae27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ae28:{NFSU2_TR(0x58ae28);
__builtin_memmove((R+16),(R+20),4);
}
B58ae2a:{NFSU2_TR(0x58ae2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ae2b:{NFSU2_TR(0x58ae2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ae30:L58ae30:{c.instructions+=3;NFSU2_TR(0x58ae30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae31:{NFSU2_TR(0x58ae31);
__builtin_memmove((R+24),(R+4),4);
}
B58ae33:{NFSU2_TR(0x58ae33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ae38:L58ae38:{c.instructions+=3;NFSU2_TR(0x58ae38);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58ae3b:{NFSU2_TR(0x58ae3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ae3d:{NFSU2_TR(0x58ae3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ae45;}}
}
B58ae3f:L58ae3f:{c.instructions+=3;NFSU2_TR(0x58ae3f);
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
B58ae41:{NFSU2_TR(0x58ae41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ae42:{NFSU2_TR(0x58ae42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ae45:L58ae45:{c.instructions+=3;NFSU2_TR(0x58ae45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ae49:{NFSU2_TR(0x58ae49);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ae4c:{NFSU2_TR(0x58ae4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ae63;}}
}
B58ae4e:L58ae4e:{c.instructions+=9;NFSU2_TR(0x58ae4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ae51:{NFSU2_TR(0x58ae51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B58ae54:{NFSU2_TR(0x58ae54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58ae56:{NFSU2_TR(0x58ae56);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ae59:{NFSU2_TR(0x58ae59);
__builtin_memmove((R+4),(R+518),1);
}
B58ae5c:{NFSU2_TR(0x58ae5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ae5d:{NFSU2_TR(0x58ae5d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58ae5e:{NFSU2_TR(0x58ae5e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ae60:{NFSU2_TR(0x58ae60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ae63:L58ae63:{c.instructions+=3;NFSU2_TR(0x58ae63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae64:{NFSU2_TR(0x58ae64);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae66:{NFSU2_TR(0x58ae66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58ae6b:L58ae6b:{c.instructions+=3;NFSU2_TR(0x58ae6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58ae6e:{NFSU2_TR(0x58ae6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae6f:{NFSU2_TR(0x58ae6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae74ull));
TAIL_STATIC(0x7445e0u,744);
}
B58ae74:L58ae74:{c.instructions+=4;NFSU2_TR(0x58ae74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae75:{NFSU2_TR(0x58ae75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ae78:{NFSU2_TR(0x58ae78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae79:{NFSU2_TR(0x58ae79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ae7eull));
TAIL_STATIC(0x73d810u,73d);
}
B58ae7e:L58ae7e:{c.instructions+=3;NFSU2_TR(0x58ae7e);
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
B58ae81:{NFSU2_TR(0x58ae81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ae82:{NFSU2_TR(0x58ae82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ae90:L58ae90:{c.instructions+=4;NFSU2_TR(0x58ae90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ae91:{NFSU2_TR(0x58ae91);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58ae95:{NFSU2_TR(0x58ae95);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ae97:{NFSU2_TR(0x58ae97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ae9c;}}
}
B58ae99:L58ae99:{c.instructions+=1;NFSU2_TR(0x58ae99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ae9c:L58ae9c:{c.instructions+=2;NFSU2_TR(0x58ae9c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B58ae9f:{NFSU2_TR(0x58ae9f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58aea7;}}
}
B58aea1:L58aea1:{c.instructions+=3;NFSU2_TR(0x58aea1);
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
B58aea3:{NFSU2_TR(0x58aea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58aea4:{NFSU2_TR(0x58aea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aea7:L58aea7:{c.instructions+=4;NFSU2_TR(0x58aea7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aea8:{NFSU2_TR(0x58aea8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58aeac:{NFSU2_TR(0x58aeac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58aeae:{NFSU2_TR(0x58aeae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58af01;}}
}
B58aeb0:L58aeb0:{c.instructions+=2;NFSU2_TR(0x58aeb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58aeb6:{NFSU2_TR(0x58aeb6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58af01;}}
}
B58aeb8:L58aeb8:{c.instructions+=2;NFSU2_TR(0x58aeb8);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aebd:{NFSU2_TR(0x58aebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aec2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58aec2:L58aec2:{c.instructions+=3;NFSU2_TR(0x58aec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58aec5:{NFSU2_TR(0x58aec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aec6:{NFSU2_TR(0x58aec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aecbull));
TAIL_STATIC(0x744620u,744);
}
B58aecb:L58aecb:{c.instructions+=3;NFSU2_TR(0x58aecb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58aece:{NFSU2_TR(0x58aece);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58aed0:{NFSU2_TR(0x58aed0);
if(r1(R+518)){{goto L58af01;}}
}
B58aed2:L58aed2:{c.instructions+=6;NFSU2_TR(0x58aed2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
}
B58aed7:{NFSU2_TR(0x58aed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aed8:{NFSU2_TR(0x58aed8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58aedc:{NFSU2_TR(0x58aedc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aede:{NFSU2_TR(0x58aede);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aedf:{NFSU2_TR(0x58aedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58aee4ull));
TAIL_STATIC(0x742e30u,742);
}
B58aee4:L58aee4:{c.instructions+=10;NFSU2_TR(0x58aee4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B58aee7:{NFSU2_TR(0x58aee7);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B58aeee:{NFSU2_TR(0x58aeee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58aef2:{NFSU2_TR(0x58aef2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58aef5:{NFSU2_TR(0x58aef5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58aef7:{NFSU2_TR(0x58aef7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58aef9:{NFSU2_TR(0x58aef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58aefa:{NFSU2_TR(0x58aefa);
__builtin_memmove((R+0),(R+518),1);
}
B58aefd:{NFSU2_TR(0x58aefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58aefe:{NFSU2_TR(0x58aefe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58af01:L58af01:{c.instructions+=4;NFSU2_TR(0x58af01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58af02:{NFSU2_TR(0x58af02);
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
B58af04:{NFSU2_TR(0x58af04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58af05:{NFSU2_TR(0x58af05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58af10:L58af10:{c.instructions+=8;NFSU2_TR(0x58af10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B58af13:{NFSU2_TR(0x58af13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af14:{NFSU2_TR(0x58af14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af15:{NFSU2_TR(0x58af15);
__builtin_memmove((R+24),(R+4),4);
}
B58af17:{NFSU2_TR(0x58af17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58af1a:{NFSU2_TR(0x58af1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58af1c:{NFSU2_TR(0x58af1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af1d:{NFSU2_TR(0x58af1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58afd7;}}
}
B58af23:L58af23:{c.instructions+=3;NFSU2_TR(0x58af23);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58af27:{NFSU2_TR(0x58af27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58af29:{NFSU2_TR(0x58af29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58afd7;}}
}
B58af2f:L58af2f:{c.instructions+=2;NFSU2_TR(0x58af2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58af35:{NFSU2_TR(0x58af35);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58afd7;}}
}
B58af3b:L58af3b:{c.instructions+=5;NFSU2_TR(0x58af3b);
__builtin_memmove((R+0),(R+28),4);
}
B58af3d:{NFSU2_TR(0x58af3d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B58af40:{NFSU2_TR(0x58af40);
w4(R+4,u32(0x850080ull));
}
B58af45:{NFSU2_TR(0x58af45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B58af48:{NFSU2_TR(0x58af48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58af4dull));
TAIL_STATIC(0x5031f0u,503);
}
B58af4d:L58af4d:{c.instructions+=4;NFSU2_TR(0x58af4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af4e:{NFSU2_TR(0x58af4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58af54:{NFSU2_TR(0x58af54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af55:{NFSU2_TR(0x58af55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58af5aull));
TAIL_STATIC(0x43dc30u,43d);
}
B58af5a:L58af5a:{c.instructions+=3;NFSU2_TR(0x58af5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58af5d:{NFSU2_TR(0x58af5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58af5f:{NFSU2_TR(0x58af5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58af6a;}}
}
B58af61:L58af61:{c.instructions+=5;NFSU2_TR(0x58af61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58af62:{NFSU2_TR(0x58af62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58af63:{NFSU2_TR(0x58af63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58af64:{NFSU2_TR(0x58af64);
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
B58af67:{NFSU2_TR(0x58af67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58af6a:L58af6a:{c.instructions+=10;NFSU2_TR(0x58af6a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58af6c:{NFSU2_TR(0x58af6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58af70:{NFSU2_TR(0x58af70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58af74:{NFSU2_TR(0x58af74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58af78:{NFSU2_TR(0x58af78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58af7c:{NFSU2_TR(0x58af7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af7d:{NFSU2_TR(0x58af7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af7e:{NFSU2_TR(0x58af7e);
__builtin_memmove((R+4),(R+24),4);
}
B58af80:{NFSU2_TR(0x58af80);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58af84:{NFSU2_TR(0x58af84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58af89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ae90u);}goto L58ae90;}
}
B58af89:L58af89:{c.instructions+=2;NFSU2_TR(0x58af89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58af8b:{NFSU2_TR(0x58af8b);
if(r1(R+518)){{goto L58af97;}}
}
B58af8d:L58af8d:{c.instructions+=4;NFSU2_TR(0x58af8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58af90:{NFSU2_TR(0x58af90);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B58af93:{NFSU2_TR(0x58af93);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B58af95:{NFSU2_TR(0x58af95);
{goto L58af9d;}
}
B58af97:L58af97:{c.instructions+=1;NFSU2_TR(0x58af97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58af9d:L58af9d:{c.instructions+=4;NFSU2_TR(0x58af9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58af9e:{NFSU2_TR(0x58af9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58afa2:{NFSU2_TR(0x58afa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58afa3:{NFSU2_TR(0x58afa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58afa8ull));
TAIL_STATIC(0x742e60u,742);
}
B58afa8:L58afa8:{c.instructions+=8;NFSU2_TR(0x58afa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58afac:{NFSU2_TR(0x58afac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58afb0:{NFSU2_TR(0x58afb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58afb3:{NFSU2_TR(0x58afb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58afb4:{NFSU2_TR(0x58afb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58afb5:{NFSU2_TR(0x58afb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58afb9:{NFSU2_TR(0x58afb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58afba:{NFSU2_TR(0x58afba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58afbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58a0e0u);}goto L58a0e0;}
}
B58afbf:L58afbf:{c.instructions+=3;NFSU2_TR(0x58afbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58afc5:{NFSU2_TR(0x58afc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58afc6:{NFSU2_TR(0x58afc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58afcbull));
TAIL_STATIC(0x74b1f0u,74b);
}
B58afcb:L58afcb:{c.instructions+=6;NFSU2_TR(0x58afcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58afce:{NFSU2_TR(0x58afce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58afcf:{NFSU2_TR(0x58afcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58afd0:{NFSU2_TR(0x58afd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58afd1:{NFSU2_TR(0x58afd1);
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
B58afd4:{NFSU2_TR(0x58afd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58afd7:L58afd7:{c.instructions+=6;NFSU2_TR(0x58afd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58afd8:{NFSU2_TR(0x58afd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58afd9:{NFSU2_TR(0x58afd9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58afdc:{NFSU2_TR(0x58afdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58afdd:{NFSU2_TR(0x58afdd);
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
B58afe0:{NFSU2_TR(0x58afe0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58aff0:L58aff0:{c.instructions+=5;NFSU2_TR(0x58aff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aff1:{NFSU2_TR(0x58aff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58aff5:{NFSU2_TR(0x58aff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58aff8:{NFSU2_TR(0x58aff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58aff9:{NFSU2_TR(0x58aff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58affeull));
TAIL_STATIC(0x73d8d0u,73d);
}
B58affe:L58affe:{c.instructions+=1;NFSU2_TR(0x58affe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x500ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x58b004u,58b);
}
XIT:NFSU2_TR_EXIT(0x58a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
