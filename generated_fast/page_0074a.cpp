#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74a(u8* __restrict R,Cpu& c);
u32 page_74a(Cpu& c){return body_74a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74a001:goto L74a001;
case 0x74a007:c.instructions+=2;goto B74a007;
case 0x74a00d:c.instructions+=1;goto B74a00d;
case 0x74a00f:goto L74a00f;
case 0x74a014:goto L74a014;
case 0x74a01a:c.instructions+=2;goto B74a01a;
case 0x74a01f:c.instructions+=1;goto B74a01f;
case 0x74a021:goto L74a021;
case 0x74a023:goto L74a023;
case 0x74a024:c.instructions+=2;goto B74a024;
case 0x74a025:c.instructions+=1;goto B74a025;
case 0x74a030:goto L74a030;
case 0x74a031:c.instructions+=4;goto B74a031;
case 0x74a037:c.instructions+=3;goto B74a037;
case 0x74a039:c.instructions+=2;goto B74a039;
case 0x74a03b:c.instructions+=1;goto B74a03b;
case 0x74a03d:goto L74a03d;
case 0x74a03f:c.instructions+=12;goto B74a03f;
case 0x74a042:c.instructions+=11;goto B74a042;
case 0x74a043:c.instructions+=10;goto B74a043;
case 0x74a047:c.instructions+=9;goto B74a047;
case 0x74a04a:c.instructions+=8;goto B74a04a;
case 0x74a04d:c.instructions+=7;goto B74a04d;
case 0x74a04f:c.instructions+=6;goto B74a04f;
case 0x74a053:c.instructions+=5;goto B74a053;
case 0x74a056:c.instructions+=4;goto B74a056;
case 0x74a058:c.instructions+=3;goto B74a058;
case 0x74a05b:c.instructions+=2;goto B74a05b;
case 0x74a05d:c.instructions+=1;goto B74a05d;
case 0x74a05f:goto L74a05f;
case 0x74a060:goto L74a060;
case 0x74a063:c.instructions+=4;goto B74a063;
case 0x74a065:c.instructions+=3;goto B74a065;
case 0x74a067:c.instructions+=2;goto B74a067;
case 0x74a069:c.instructions+=1;goto B74a069;
case 0x74a06b:goto L74a06b;
case 0x74a06e:c.instructions+=3;goto B74a06e;
case 0x74a071:c.instructions+=2;goto B74a071;
case 0x74a073:c.instructions+=1;goto B74a073;
case 0x74a075:goto L74a075;
case 0x74a076:c.instructions+=2;goto B74a076;
case 0x74a077:c.instructions+=1;goto B74a077;
case 0x74a078:goto L74a078;
case 0x74a07a:c.instructions+=17;goto B74a07a;
case 0x74a07c:c.instructions+=16;goto B74a07c;
case 0x74a07e:c.instructions+=15;goto B74a07e;
case 0x74a081:c.instructions+=14;goto B74a081;
case 0x74a084:c.instructions+=13;goto B74a084;
case 0x74a087:c.instructions+=12;goto B74a087;
case 0x74a08a:c.instructions+=11;goto B74a08a;
case 0x74a08d:c.instructions+=10;goto B74a08d;
case 0x74a090:c.instructions+=9;goto B74a090;
case 0x74a093:c.instructions+=8;goto B74a093;
case 0x74a096:c.instructions+=7;goto B74a096;
case 0x74a099:c.instructions+=6;goto B74a099;
case 0x74a09c:c.instructions+=5;goto B74a09c;
case 0x74a09f:c.instructions+=4;goto B74a09f;
case 0x74a0a2:c.instructions+=3;goto B74a0a2;
case 0x74a0a5:c.instructions+=2;goto B74a0a5;
case 0x74a0a8:c.instructions+=1;goto B74a0a8;
case 0x74a0aa:goto L74a0aa;
case 0x74a0ab:goto L74a0ab;
case 0x74a0ac:c.instructions+=1;goto B74a0ac;
case 0x74a0b0:goto L74a0b0;
case 0x74a0b2:c.instructions+=1;goto B74a0b2;
case 0x74a0b4:goto L74a0b4;
case 0x74a0b9:goto L74a0b9;
case 0x74a0be:c.instructions+=1;goto B74a0be;
case 0x74a0c0:goto L74a0c0;
case 0x74a0c5:c.instructions+=1;goto B74a0c5;
case 0x74a0c7:goto L74a0c7;
case 0x74a0cc:c.instructions+=1;goto B74a0cc;
case 0x74a0ce:goto L74a0ce;
case 0x74a0d3:c.instructions+=1;goto B74a0d3;
case 0x74a0d5:goto L74a0d5;
case 0x74a0da:c.instructions+=1;goto B74a0da;
case 0x74a0dc:goto L74a0dc;
case 0x74a0e1:c.instructions+=1;goto B74a0e1;
case 0x74a0e2:goto L74a0e2;
case 0x74a0e4:c.instructions+=5;goto B74a0e4;
case 0x74a0e9:c.instructions+=4;goto B74a0e9;
case 0x74a0ec:c.instructions+=3;goto B74a0ec;
case 0x74a0ef:c.instructions+=2;goto B74a0ef;
case 0x74a0f1:c.instructions+=1;goto B74a0f1;
case 0x74a0f2:goto L74a0f2;
case 0x74a0f7:c.instructions+=1;goto B74a0f7;
case 0x74a0f8:goto L74a0f8;
case 0x74a0fa:goto L74a0fa;
case 0x74a100:goto L74a100;
case 0x74a101:c.instructions+=2;goto B74a101;
case 0x74a102:c.instructions+=1;goto B74a102;
case 0x74a107:goto L74a107;
case 0x74a109:c.instructions+=2;goto B74a109;
case 0x74a10b:c.instructions+=1;goto B74a10b;
case 0x74a110:goto L74a110;
case 0x74a114:c.instructions+=4;goto B74a114;
case 0x74a116:c.instructions+=3;goto B74a116;
case 0x74a119:c.instructions+=2;goto B74a119;
case 0x74a11b:c.instructions+=1;goto B74a11b;
case 0x74a11d:goto L74a11d;
case 0x74a11e:c.instructions+=1;goto B74a11e;
case 0x74a120:goto L74a120;
case 0x74a123:c.instructions+=2;goto B74a123;
case 0x74a125:c.instructions+=1;goto B74a125;
case 0x74a127:goto L74a127;
case 0x74a12a:c.instructions+=2;goto B74a12a;
case 0x74a12c:c.instructions+=1;goto B74a12c;
case 0x74a12e:goto L74a12e;
case 0x74a131:c.instructions+=2;goto B74a131;
case 0x74a134:c.instructions+=1;goto B74a134;
case 0x74a136:goto L74a136;
case 0x74a138:c.instructions+=3;goto B74a138;
case 0x74a13a:c.instructions+=2;goto B74a13a;
case 0x74a13c:c.instructions+=1;goto B74a13c;
case 0x74a13e:goto L74a13e;
case 0x74a141:c.instructions+=5;goto B74a141;
case 0x74a142:c.instructions+=4;goto B74a142;
case 0x74a144:c.instructions+=3;goto B74a144;
case 0x74a145:c.instructions+=2;goto B74a145;
case 0x74a14c:c.instructions+=1;goto B74a14c;
case 0x74a14e:goto L74a14e;
case 0x74a151:c.instructions+=1;goto B74a151;
case 0x74a156:goto L74a156;
case 0x74a158:c.instructions+=1;goto B74a158;
case 0x74a15b:goto L74a15b;
case 0x74a15d:c.instructions+=2;goto B74a15d;
case 0x74a15f:c.instructions+=1;goto B74a15f;
case 0x74a161:goto L74a161;
case 0x74a162:goto L74a162;
case 0x74a167:c.instructions+=4;goto B74a167;
case 0x74a169:c.instructions+=3;goto B74a169;
case 0x74a16a:c.instructions+=2;goto B74a16a;
case 0x74a16b:c.instructions+=1;goto B74a16b;
case 0x74a16d:goto L74a16d;
case 0x74a170:goto L74a170;
case 0x74a173:c.instructions+=3;goto B74a173;
case 0x74a174:c.instructions+=2;goto B74a174;
case 0x74a17a:c.instructions+=1;goto B74a17a;
case 0x74a17f:goto L74a17f;
case 0x74a184:c.instructions+=3;goto B74a184;
case 0x74a187:c.instructions+=2;goto B74a187;
case 0x74a189:c.instructions+=1;goto B74a189;
case 0x74a18b:goto L74a18b;
case 0x74a193:c.instructions+=1;goto B74a193;
case 0x74a1a0:goto L74a1a0;
case 0x74a1a1:c.instructions+=9;goto B74a1a1;
case 0x74a1a3:c.instructions+=8;goto B74a1a3;
case 0x74a1a6:c.instructions+=7;goto B74a1a6;
case 0x74a1ac:c.instructions+=6;goto B74a1ac;
case 0x74a1b1:c.instructions+=5;goto B74a1b1;
case 0x74a1b8:c.instructions+=4;goto B74a1b8;
case 0x74a1bb:c.instructions+=3;goto B74a1bb;
case 0x74a1bc:c.instructions+=2;goto B74a1bc;
case 0x74a1bd:c.instructions+=1;goto B74a1bd;
case 0x74a1c2:goto L74a1c2;
case 0x74a1c7:c.instructions+=2;goto B74a1c7;
case 0x74a1cc:c.instructions+=1;goto B74a1cc;
case 0x74a1d1:goto L74a1d1;
case 0x74a1d3:c.instructions+=3;goto B74a1d3;
case 0x74a1d8:c.instructions+=2;goto B74a1d8;
case 0x74a1dc:c.instructions+=1;goto B74a1dc;
case 0x74a1df:goto L74a1df;
case 0x74a1e1:goto L74a1e1;
case 0x74a1e5:c.instructions+=4;goto B74a1e5;
case 0x74a1e6:c.instructions+=3;goto B74a1e6;
case 0x74a1e8:c.instructions+=2;goto B74a1e8;
case 0x74a1f2:c.instructions+=1;goto B74a1f2;
case 0x74a1f7:goto L74a1f7;
case 0x74a1fc:c.instructions+=5;goto B74a1fc;
case 0x74a203:c.instructions+=4;goto B74a203;
case 0x74a206:c.instructions+=3;goto B74a206;
case 0x74a208:c.instructions+=2;goto B74a208;
case 0x74a20e:c.instructions+=1;goto B74a20e;
case 0x74a213:goto L74a213;
case 0x74a214:c.instructions+=3;goto B74a214;
case 0x74a216:c.instructions+=2;goto B74a216;
case 0x74a217:c.instructions+=1;goto B74a217;
case 0x74a220:goto L74a220;
case 0x74a221:c.instructions+=10;goto B74a221;
case 0x74a225:c.instructions+=9;goto B74a225;
case 0x74a229:c.instructions+=8;goto B74a229;
case 0x74a22a:c.instructions+=7;goto B74a22a;
case 0x74a22b:c.instructions+=6;goto B74a22b;
case 0x74a22f:c.instructions+=5;goto B74a22f;
case 0x74a230:c.instructions+=4;goto B74a230;
case 0x74a231:c.instructions+=3;goto B74a231;
case 0x74a232:c.instructions+=2;goto B74a232;
case 0x74a23a:c.instructions+=1;goto B74a23a;
case 0x74a23f:goto L74a23f;
case 0x74a241:c.instructions+=2;goto B74a241;
case 0x74a244:c.instructions+=1;goto B74a244;
case 0x74a246:goto L74a246;
case 0x74a247:c.instructions+=4;goto B74a247;
case 0x74a249:c.instructions+=3;goto B74a249;
case 0x74a24a:c.instructions+=2;goto B74a24a;
case 0x74a24b:c.instructions+=1;goto B74a24b;
case 0x74a24c:goto L74a24c;
case 0x74a24d:c.instructions+=3;goto B74a24d;
case 0x74a24e:c.instructions+=2;goto B74a24e;
case 0x74a250:c.instructions+=1;goto B74a250;
case 0x74a255:goto L74a255;
case 0x74a258:c.instructions+=7;goto B74a258;
case 0x74a25a:c.instructions+=6;goto B74a25a;
case 0x74a25e:c.instructions+=5;goto B74a25e;
case 0x74a25f:c.instructions+=4;goto B74a25f;
case 0x74a261:c.instructions+=3;goto B74a261;
case 0x74a266:c.instructions+=2;goto B74a266;
case 0x74a26b:c.instructions+=1;goto B74a26b;
case 0x74a26d:goto L74a26d;
case 0x74a26f:goto L74a26f;
case 0x74a270:c.instructions+=2;goto B74a270;
case 0x74a273:c.instructions+=1;goto B74a273;
case 0x74a278:goto L74a278;
case 0x74a27b:c.instructions+=1;goto B74a27b;
case 0x74a27d:goto L74a27d;
case 0x74a27f:c.instructions+=6;goto B74a27f;
case 0x74a283:c.instructions+=5;goto B74a283;
case 0x74a284:c.instructions+=4;goto B74a284;
case 0x74a286:c.instructions+=3;goto B74a286;
case 0x74a28b:c.instructions+=2;goto B74a28b;
case 0x74a28c:c.instructions+=1;goto B74a28c;
case 0x74a291:goto L74a291;
case 0x74a295:c.instructions+=6;goto B74a295;
case 0x74a299:c.instructions+=5;goto B74a299;
case 0x74a29b:c.instructions+=4;goto B74a29b;
case 0x74a29e:c.instructions+=3;goto B74a29e;
case 0x74a2a1:c.instructions+=2;goto B74a2a1;
case 0x74a2a4:c.instructions+=1;goto B74a2a4;
case 0x74a2a9:goto L74a2a9;
case 0x74a2ae:c.instructions+=4;goto B74a2ae;
case 0x74a2b0:c.instructions+=3;goto B74a2b0;
case 0x74a2b2:c.instructions+=2;goto B74a2b2;
case 0x74a2b8:c.instructions+=1;goto B74a2b8;
case 0x74a2bd:goto L74a2bd;
case 0x74a2c0:c.instructions+=7;goto B74a2c0;
case 0x74a2c1:c.instructions+=6;goto B74a2c1;
case 0x74a2c3:c.instructions+=5;goto B74a2c3;
case 0x74a2c4:c.instructions+=4;goto B74a2c4;
case 0x74a2c5:c.instructions+=3;goto B74a2c5;
case 0x74a2c6:c.instructions+=2;goto B74a2c6;
case 0x74a2c7:c.instructions+=1;goto B74a2c7;
case 0x74a2d0:goto L74a2d0;
case 0x74a2d1:c.instructions+=2;goto B74a2d1;
case 0x74a2d3:c.instructions+=1;goto B74a2d3;
case 0x74a2d8:goto L74a2d8;
case 0x74a2de:c.instructions+=5;goto B74a2de;
case 0x74a2e2:c.instructions+=4;goto B74a2e2;
case 0x74a2e5:c.instructions+=3;goto B74a2e5;
case 0x74a2e7:c.instructions+=2;goto B74a2e7;
case 0x74a2ec:c.instructions+=1;goto B74a2ec;
case 0x74a2ee:goto L74a2ee;
case 0x74a2f0:goto L74a2f0;
case 0x74a2f2:c.instructions+=2;goto B74a2f2;
case 0x74a2f4:c.instructions+=1;goto B74a2f4;
case 0x74a2f6:goto L74a2f6;
case 0x74a2f8:c.instructions+=2;goto B74a2f8;
case 0x74a2fb:c.instructions+=1;goto B74a2fb;
case 0x74a2fd:goto L74a2fd;
case 0x74a2ff:goto L74a2ff;
case 0x74a301:c.instructions+=1;goto B74a301;
case 0x74a303:goto L74a303;
case 0x74a305:c.instructions+=1;goto B74a305;
case 0x74a30a:goto L74a30a;
case 0x74a30d:c.instructions+=1;goto B74a30d;
case 0x74a312:goto L74a312;
case 0x74a315:c.instructions+=3;goto B74a315;
case 0x74a317:c.instructions+=2;goto B74a317;
case 0x74a318:c.instructions+=1;goto B74a318;
case 0x74a31d:goto L74a31d;
case 0x74a320:c.instructions+=2;goto B74a320;
case 0x74a321:c.instructions+=1;goto B74a321;
case 0x74a326:goto L74a326;
case 0x74a328:c.instructions+=3;goto B74a328;
case 0x74a32f:c.instructions+=2;goto B74a32f;
case 0x74a333:c.instructions+=1;goto B74a333;
case 0x74a338:goto L74a338;
case 0x74a33e:c.instructions+=4;goto B74a33e;
case 0x74a340:c.instructions+=3;goto B74a340;
case 0x74a343:c.instructions+=2;goto B74a343;
case 0x74a349:c.instructions+=1;goto B74a349;
case 0x74a34e:goto L74a34e;
case 0x74a351:c.instructions+=3;goto B74a351;
case 0x74a353:c.instructions+=2;goto B74a353;
case 0x74a354:c.instructions+=1;goto B74a354;
case 0x74a360:goto L74a360;
case 0x74a364:c.instructions+=6;goto B74a364;
case 0x74a368:c.instructions+=5;goto B74a368;
case 0x74a36c:c.instructions+=4;goto B74a36c;
case 0x74a36f:c.instructions+=3;goto B74a36f;
case 0x74a370:c.instructions+=2;goto B74a370;
case 0x74a371:c.instructions+=1;goto B74a371;
case 0x74a376:goto L74a376;
case 0x74a378:c.instructions+=1;goto B74a378;
case 0x74a380:goto L74a380;
case 0x74a384:c.instructions+=7;goto B74a384;
case 0x74a388:c.instructions+=6;goto B74a388;
case 0x74a38c:c.instructions+=5;goto B74a38c;
case 0x74a38d:c.instructions+=4;goto B74a38d;
case 0x74a390:c.instructions+=3;goto B74a390;
case 0x74a391:c.instructions+=2;goto B74a391;
case 0x74a392:c.instructions+=1;goto B74a392;
case 0x74a397:goto L74a397;
case 0x74a399:c.instructions+=1;goto B74a399;
case 0x74a39b:goto L74a39b;
case 0x74a3a0:goto L74a3a0;
case 0x74a3a5:c.instructions+=1;goto B74a3a5;
case 0x74a3a7:goto L74a3a7;
case 0x74a3ac:c.instructions+=1;goto B74a3ac;
case 0x74a3ae:goto L74a3ae;
case 0x74a3b3:c.instructions+=1;goto B74a3b3;
case 0x74a3b5:goto L74a3b5;
case 0x74a3ba:c.instructions+=1;goto B74a3ba;
case 0x74a3bc:goto L74a3bc;
case 0x74a3c1:c.instructions+=1;goto B74a3c1;
case 0x74a3c3:goto L74a3c3;
case 0x74a3c8:c.instructions+=1;goto B74a3c8;
case 0x74a3c9:goto L74a3c9;
case 0x74a3cb:c.instructions+=5;goto B74a3cb;
case 0x74a3d0:c.instructions+=4;goto B74a3d0;
case 0x74a3d3:c.instructions+=3;goto B74a3d3;
case 0x74a3d6:c.instructions+=2;goto B74a3d6;
case 0x74a3d8:c.instructions+=1;goto B74a3d8;
case 0x74a3d9:goto L74a3d9;
case 0x74a3de:c.instructions+=1;goto B74a3de;
case 0x74a3df:goto L74a3df;
case 0x74a3e1:goto L74a3e1;
case 0x74a3f0:goto L74a3f0;
case 0x74a3f3:c.instructions+=11;goto B74a3f3;
case 0x74a3f8:c.instructions+=10;goto B74a3f8;
case 0x74a3f9:c.instructions+=9;goto B74a3f9;
case 0x74a3fd:c.instructions+=8;goto B74a3fd;
case 0x74a401:c.instructions+=7;goto B74a401;
case 0x74a402:c.instructions+=6;goto B74a402;
case 0x74a406:c.instructions+=5;goto B74a406;
case 0x74a407:c.instructions+=4;goto B74a407;
case 0x74a40b:c.instructions+=3;goto B74a40b;
case 0x74a40f:c.instructions+=2;goto B74a40f;
case 0x74a413:c.instructions+=1;goto B74a413;
case 0x74a418:goto L74a418;
case 0x74a41b:c.instructions+=3;goto B74a41b;
case 0x74a41c:c.instructions+=2;goto B74a41c;
case 0x74a41d:c.instructions+=1;goto B74a41d;
case 0x74a422:goto L74a422;
case 0x74a424:c.instructions+=3;goto B74a424;
case 0x74a425:c.instructions+=2;goto B74a425;
case 0x74a426:c.instructions+=1;goto B74a426;
case 0x74a428:goto L74a428;
case 0x74a42d:goto L74a42d;
case 0x74a432:c.instructions+=1;goto B74a432;
case 0x74a434:goto L74a434;
case 0x74a439:c.instructions+=1;goto B74a439;
case 0x74a43b:goto L74a43b;
case 0x74a440:c.instructions+=1;goto B74a440;
case 0x74a442:goto L74a442;
case 0x74a447:c.instructions+=1;goto B74a447;
case 0x74a449:goto L74a449;
case 0x74a44e:c.instructions+=1;goto B74a44e;
case 0x74a450:goto L74a450;
case 0x74a455:c.instructions+=2;goto B74a455;
case 0x74a459:c.instructions+=1;goto B74a459;
case 0x74a45e:goto L74a45e;
case 0x74a461:c.instructions+=1;goto B74a461;
case 0x74a462:goto L74a462;
case 0x74a464:c.instructions+=6;goto B74a464;
case 0x74a469:c.instructions+=5;goto B74a469;
case 0x74a46c:c.instructions+=4;goto B74a46c;
case 0x74a46f:c.instructions+=3;goto B74a46f;
case 0x74a471:c.instructions+=2;goto B74a471;
case 0x74a475:c.instructions+=1;goto B74a475;
case 0x74a47a:goto L74a47a;
case 0x74a47d:c.instructions+=1;goto B74a47d;
case 0x74a47e:goto L74a47e;
case 0x74a483:c.instructions+=2;goto B74a483;
case 0x74a487:c.instructions+=1;goto B74a487;
case 0x74a48c:goto L74a48c;
case 0x74a48f:c.instructions+=1;goto B74a48f;
case 0x74a490:goto L74a490;
case 0x74a492:goto L74a492;
case 0x74a496:c.instructions+=1;goto B74a496;
case 0x74a49b:goto L74a49b;
case 0x74a49e:c.instructions+=1;goto B74a49e;
case 0x74a4a0:goto L74a4a0;
case 0x74a4a4:c.instructions+=5;goto B74a4a4;
case 0x74a4a8:c.instructions+=4;goto B74a4a8;
case 0x74a4ab:c.instructions+=3;goto B74a4ab;
case 0x74a4ac:c.instructions+=2;goto B74a4ac;
case 0x74a4ad:c.instructions+=1;goto B74a4ad;
case 0x74a4b2:goto L74a4b2;
case 0x74a4b4:c.instructions+=1;goto B74a4b4;
case 0x74a4b6:goto L74a4b6;
case 0x74a4bb:goto L74a4bb;
case 0x74a4c0:c.instructions+=1;goto B74a4c0;
case 0x74a4c2:goto L74a4c2;
case 0x74a4c7:c.instructions+=1;goto B74a4c7;
case 0x74a4c9:goto L74a4c9;
case 0x74a4ce:c.instructions+=1;goto B74a4ce;
case 0x74a4d0:goto L74a4d0;
case 0x74a4d5:c.instructions+=1;goto B74a4d5;
case 0x74a4d7:goto L74a4d7;
case 0x74a4dc:c.instructions+=1;goto B74a4dc;
case 0x74a4de:goto L74a4de;
case 0x74a4e3:c.instructions+=1;goto B74a4e3;
case 0x74a4e4:goto L74a4e4;
case 0x74a4e6:c.instructions+=5;goto B74a4e6;
case 0x74a4eb:c.instructions+=4;goto B74a4eb;
case 0x74a4ee:c.instructions+=3;goto B74a4ee;
case 0x74a4f1:c.instructions+=2;goto B74a4f1;
case 0x74a4f3:c.instructions+=1;goto B74a4f3;
case 0x74a4f4:goto L74a4f4;
case 0x74a4f9:c.instructions+=1;goto B74a4f9;
case 0x74a4fa:goto L74a4fa;
case 0x74a4fc:goto L74a4fc;
case 0x74a500:goto L74a500;
case 0x74a501:c.instructions+=8;goto B74a501;
case 0x74a502:c.instructions+=7;goto B74a502;
case 0x74a506:c.instructions+=6;goto B74a506;
case 0x74a509:c.instructions+=5;goto B74a509;
case 0x74a50a:c.instructions+=4;goto B74a50a;
case 0x74a50c:c.instructions+=3;goto B74a50c;
case 0x74a50f:c.instructions+=2;goto B74a50f;
case 0x74a517:c.instructions+=1;goto B74a517;
case 0x74a519:goto L74a519;
case 0x74a51a:c.instructions+=4;goto B74a51a;
case 0x74a51c:c.instructions+=3;goto B74a51c;
case 0x74a51d:c.instructions+=2;goto B74a51d;
case 0x74a51e:c.instructions+=1;goto B74a51e;
case 0x74a51f:goto L74a51f;
case 0x74a523:c.instructions+=4;goto B74a523;
case 0x74a525:c.instructions+=3;goto B74a525;
case 0x74a529:c.instructions+=2;goto B74a529;
case 0x74a52a:c.instructions+=1;goto B74a52a;
case 0x74a52c:goto L74a52c;
case 0x74a52f:c.instructions+=1;goto B74a52f;
case 0x74a531:goto L74a531;
case 0x74a532:c.instructions+=5;goto B74a532;
case 0x74a533:c.instructions+=4;goto B74a533;
case 0x74a535:c.instructions+=3;goto B74a535;
case 0x74a536:c.instructions+=2;goto B74a536;
case 0x74a537:c.instructions+=1;goto B74a537;
case 0x74a538:goto L74a538;
case 0x74a53c:c.instructions+=1;goto B74a53c;
case 0x74a53e:goto L74a53e;
case 0x74a53f:c.instructions+=4;goto B74a53f;
case 0x74a540:c.instructions+=3;goto B74a540;
case 0x74a541:c.instructions+=2;goto B74a541;
case 0x74a542:c.instructions+=1;goto B74a542;
case 0x74a547:goto L74a547;
case 0x74a549:c.instructions+=2;goto B74a549;
case 0x74a54c:c.instructions+=1;goto B74a54c;
case 0x74a54e:goto L74a54e;
case 0x74a552:c.instructions+=4;goto B74a552;
case 0x74a553:c.instructions+=3;goto B74a553;
case 0x74a558:c.instructions+=2;goto B74a558;
case 0x74a559:c.instructions+=1;goto B74a559;
case 0x74a55e:goto L74a55e;
case 0x74a560:c.instructions+=1;goto B74a560;
case 0x74a565:goto L74a565;
case 0x74a567:c.instructions+=3;goto B74a567;
case 0x74a569:c.instructions+=2;goto B74a569;
case 0x74a56e:c.instructions+=1;goto B74a56e;
case 0x74a570:goto L74a570;
case 0x74a572:goto L74a572;
case 0x74a575:c.instructions+=9;goto B74a575;
case 0x74a578:c.instructions+=8;goto B74a578;
case 0x74a57b:c.instructions+=7;goto B74a57b;
case 0x74a57e:c.instructions+=6;goto B74a57e;
case 0x74a581:c.instructions+=5;goto B74a581;
case 0x74a584:c.instructions+=4;goto B74a584;
case 0x74a586:c.instructions+=3;goto B74a586;
case 0x74a589:c.instructions+=2;goto B74a589;
case 0x74a58d:c.instructions+=1;goto B74a58d;
case 0x74a592:goto L74a592;
case 0x74a598:c.instructions+=4;goto B74a598;
case 0x74a59a:c.instructions+=3;goto B74a59a;
case 0x74a59c:c.instructions+=2;goto B74a59c;
case 0x74a5a2:c.instructions+=1;goto B74a5a2;
case 0x74a5a7:goto L74a5a7;
case 0x74a5aa:goto L74a5aa;
case 0x74a5ab:goto L74a5ab;
case 0x74a5ac:c.instructions+=5;goto B74a5ac;
case 0x74a5ae:c.instructions+=4;goto B74a5ae;
case 0x74a5af:c.instructions+=3;goto B74a5af;
case 0x74a5b0:c.instructions+=2;goto B74a5b0;
case 0x74a5b1:c.instructions+=1;goto B74a5b1;
case 0x74a5c0:goto L74a5c0;
case 0x74a5c3:c.instructions+=9;goto B74a5c3;
case 0x74a5c8:c.instructions+=8;goto B74a5c8;
case 0x74a5c9:c.instructions+=7;goto B74a5c9;
case 0x74a5ca:c.instructions+=6;goto B74a5ca;
case 0x74a5ce:c.instructions+=5;goto B74a5ce;
case 0x74a5d2:c.instructions+=4;goto B74a5d2;
case 0x74a5d6:c.instructions+=3;goto B74a5d6;
case 0x74a5d7:c.instructions+=2;goto B74a5d7;
case 0x74a5db:c.instructions+=1;goto B74a5db;
case 0x74a5dd:goto L74a5dd;
case 0x74a5e1:c.instructions+=9;goto B74a5e1;
case 0x74a5e4:c.instructions+=8;goto B74a5e4;
case 0x74a5e6:c.instructions+=7;goto B74a5e6;
case 0x74a5ea:c.instructions+=6;goto B74a5ea;
case 0x74a5eb:c.instructions+=5;goto B74a5eb;
case 0x74a5ed:c.instructions+=4;goto B74a5ed;
case 0x74a5ef:c.instructions+=3;goto B74a5ef;
case 0x74a5f0:c.instructions+=2;goto B74a5f0;
case 0x74a5f4:c.instructions+=1;goto B74a5f4;
case 0x74a5f9:goto L74a5f9;
case 0x74a5fd:c.instructions+=8;goto B74a5fd;
case 0x74a5ff:c.instructions+=7;goto B74a5ff;
case 0x74a601:c.instructions+=6;goto B74a601;
case 0x74a604:c.instructions+=5;goto B74a604;
case 0x74a607:c.instructions+=4;goto B74a607;
case 0x74a609:c.instructions+=3;goto B74a609;
case 0x74a60b:c.instructions+=2;goto B74a60b;
case 0x74a60d:c.instructions+=1;goto B74a60d;
case 0x74a60f:goto L74a60f;
case 0x74a611:c.instructions+=1;goto B74a611;
case 0x74a613:goto L74a613;
case 0x74a617:goto L74a617;
case 0x74a61b:c.instructions+=2;goto B74a61b;
case 0x74a61d:c.instructions+=1;goto B74a61d;
case 0x74a61f:goto L74a61f;
case 0x74a620:c.instructions+=5;goto B74a620;
case 0x74a623:c.instructions+=4;goto B74a623;
case 0x74a624:c.instructions+=3;goto B74a624;
case 0x74a625:c.instructions+=2;goto B74a625;
case 0x74a626:c.instructions+=1;goto B74a626;
case 0x74a62b:goto L74a62b;
case 0x74a62d:goto L74a62d;
case 0x74a631:c.instructions+=4;goto B74a631;
case 0x74a632:c.instructions+=3;goto B74a632;
case 0x74a633:c.instructions+=2;goto B74a633;
case 0x74a637:c.instructions+=1;goto B74a637;
case 0x74a63c:goto L74a63c;
case 0x74a63f:c.instructions+=6;goto B74a63f;
case 0x74a640:c.instructions+=5;goto B74a640;
case 0x74a642:c.instructions+=4;goto B74a642;
case 0x74a643:c.instructions+=3;goto B74a643;
case 0x74a644:c.instructions+=2;goto B74a644;
case 0x74a645:c.instructions+=1;goto B74a645;
case 0x74a64a:goto L74a64a;
case 0x74a64b:goto L74a64b;
case 0x74a64d:c.instructions+=4;goto B74a64d;
case 0x74a64e:c.instructions+=3;goto B74a64e;
case 0x74a64f:c.instructions+=2;goto B74a64f;
case 0x74a650:c.instructions+=1;goto B74a650;
case 0x74a652:goto L74a652;
case 0x74a657:goto L74a657;
case 0x74a65c:c.instructions+=1;goto B74a65c;
case 0x74a65e:goto L74a65e;
case 0x74a663:c.instructions+=1;goto B74a663;
case 0x74a665:goto L74a665;
case 0x74a66a:c.instructions+=1;goto B74a66a;
case 0x74a66c:goto L74a66c;
case 0x74a671:c.instructions+=1;goto B74a671;
case 0x74a673:goto L74a673;
case 0x74a678:c.instructions+=1;goto B74a678;
case 0x74a67a:goto L74a67a;
case 0x74a67f:c.instructions+=2;goto B74a67f;
case 0x74a683:c.instructions+=1;goto B74a683;
case 0x74a688:goto L74a688;
case 0x74a68b:c.instructions+=1;goto B74a68b;
case 0x74a68c:goto L74a68c;
case 0x74a68e:c.instructions+=6;goto B74a68e;
case 0x74a693:c.instructions+=5;goto B74a693;
case 0x74a696:c.instructions+=4;goto B74a696;
case 0x74a699:c.instructions+=3;goto B74a699;
case 0x74a69b:c.instructions+=2;goto B74a69b;
case 0x74a69f:c.instructions+=1;goto B74a69f;
case 0x74a6a4:goto L74a6a4;
case 0x74a6a7:c.instructions+=1;goto B74a6a7;
case 0x74a6a8:goto L74a6a8;
case 0x74a6ad:c.instructions+=2;goto B74a6ad;
case 0x74a6b1:c.instructions+=1;goto B74a6b1;
case 0x74a6b6:goto L74a6b6;
case 0x74a6b9:c.instructions+=1;goto B74a6b9;
case 0x74a6ba:goto L74a6ba;
case 0x74a6bc:goto L74a6bc;
case 0x74a6c0:c.instructions+=1;goto B74a6c0;
case 0x74a6c5:goto L74a6c5;
case 0x74a6c8:c.instructions+=1;goto B74a6c8;
case 0x74a6d0:goto L74a6d0;
case 0x74a6d1:c.instructions+=4;goto B74a6d1;
case 0x74a6d5:c.instructions+=3;goto B74a6d5;
case 0x74a6d7:c.instructions+=2;goto B74a6d7;
case 0x74a6d8:c.instructions+=1;goto B74a6d8;
case 0x74a6da:goto L74a6da;
case 0x74a6de:c.instructions+=8;goto B74a6de;
case 0x74a6e2:c.instructions+=7;goto B74a6e2;
case 0x74a6e6:c.instructions+=6;goto B74a6e6;
case 0x74a6e7:c.instructions+=5;goto B74a6e7;
case 0x74a6e8:c.instructions+=4;goto B74a6e8;
case 0x74a6eb:c.instructions+=3;goto B74a6eb;
case 0x74a6ec:c.instructions+=2;goto B74a6ec;
case 0x74a6ed:c.instructions+=1;goto B74a6ed;
case 0x74a6f2:goto L74a6f2;
case 0x74a6f4:c.instructions+=1;goto B74a6f4;
case 0x74a6f6:goto L74a6f6;
case 0x74a6fa:c.instructions+=11;goto B74a6fa;
case 0x74a6fe:c.instructions+=10;goto B74a6fe;
case 0x74a702:c.instructions+=9;goto B74a702;
case 0x74a703:c.instructions+=8;goto B74a703;
case 0x74a707:c.instructions+=7;goto B74a707;
case 0x74a708:c.instructions+=6;goto B74a708;
case 0x74a70a:c.instructions+=5;goto B74a70a;
case 0x74a70b:c.instructions+=4;goto B74a70b;
case 0x74a70e:c.instructions+=3;goto B74a70e;
case 0x74a70f:c.instructions+=2;goto B74a70f;
case 0x74a710:c.instructions+=1;goto B74a710;
case 0x74a715:goto L74a715;
case 0x74a717:c.instructions+=2;goto B74a717;
case 0x74a719:c.instructions+=1;goto B74a719;
case 0x74a71b:goto L74a71b;
case 0x74a720:goto L74a720;
case 0x74a723:c.instructions+=6;goto B74a723;
case 0x74a726:c.instructions+=5;goto B74a726;
case 0x74a729:c.instructions+=4;goto B74a729;
case 0x74a72c:c.instructions+=3;goto B74a72c;
case 0x74a72f:c.instructions+=2;goto B74a72f;
case 0x74a732:c.instructions+=1;goto B74a732;
case 0x74a735:goto L74a735;
case 0x74a737:goto L74a737;
case 0x74a739:goto L74a739;
case 0x74a73c:c.instructions+=1;goto B74a73c;
case 0x74a73e:goto L74a73e;
case 0x74a740:c.instructions+=1;goto B74a740;
case 0x74a745:goto L74a745;
case 0x74a74a:c.instructions+=3;goto B74a74a;
case 0x74a74b:c.instructions+=2;goto B74a74b;
case 0x74a74c:c.instructions+=1;goto B74a74c;
case 0x74a74e:goto L74a74e;
case 0x74a751:c.instructions+=1;goto B74a751;
case 0x74a753:goto L74a753;
case 0x74a755:c.instructions+=1;goto B74a755;
case 0x74a756:goto L74a756;
case 0x74a758:c.instructions+=1;goto B74a758;
case 0x74a75a:goto L74a75a;
case 0x74a75d:goto L74a75d;
case 0x74a760:goto L74a760;
case 0x74a766:c.instructions+=6;goto B74a766;
case 0x74a76d:c.instructions+=5;goto B74a76d;
case 0x74a76f:c.instructions+=4;goto B74a76f;
case 0x74a774:c.instructions+=3;goto B74a774;
case 0x74a77b:c.instructions+=2;goto B74a77b;
case 0x74a77c:c.instructions+=1;goto B74a77c;
case 0x74a77e:goto L74a77e;
case 0x74a785:c.instructions+=5;goto B74a785;
case 0x74a787:c.instructions+=4;goto B74a787;
case 0x74a788:c.instructions+=3;goto B74a788;
case 0x74a78b:c.instructions+=2;goto B74a78b;
case 0x74a78d:c.instructions+=1;goto B74a78d;
case 0x74a78f:goto L74a78f;
case 0x74a791:goto L74a791;
case 0x74a793:c.instructions+=1;goto B74a793;
case 0x74a796:goto L74a796;
case 0x74a798:goto L74a798;
case 0x74a799:goto L74a799;
case 0x74a7a0:c.instructions+=3;goto B74a7a0;
case 0x74a7a3:c.instructions+=2;goto B74a7a3;
case 0x74a7a6:c.instructions+=1;goto B74a7a6;
case 0x74a7a8:goto L74a7a8;
case 0x74a7ad:c.instructions+=3;goto B74a7ad;
case 0x74a7ae:c.instructions+=2;goto B74a7ae;
case 0x74a7b5:c.instructions+=1;goto B74a7b5;
case 0x74a7ba:goto L74a7ba;
case 0x74a7c0:c.instructions+=1;goto B74a7c0;
case 0x74a7c1:goto L74a7c1;
case 0x74a7c8:c.instructions+=2;goto B74a7c8;
case 0x74a7ce:c.instructions+=1;goto B74a7ce;
case 0x74a7d0:goto L74a7d0;
case 0x74a7d6:c.instructions+=1;goto B74a7d6;
case 0x74a7d8:goto L74a7d8;
case 0x74a7df:c.instructions+=4;goto B74a7df;
case 0x74a7e0:c.instructions+=3;goto B74a7e0;
case 0x74a7e1:c.instructions+=2;goto B74a7e1;
case 0x74a7e2:c.instructions+=1;goto B74a7e2;
case 0x74a7e7:goto L74a7e7;
case 0x74a7e9:c.instructions+=3;goto B74a7e9;
case 0x74a7ea:c.instructions+=2;goto B74a7ea;
case 0x74a7f1:c.instructions+=1;goto B74a7f1;
case 0x74a7f6:goto L74a7f6;
case 0x74a7fc:c.instructions+=1;goto B74a7fc;
case 0x74a7fd:goto L74a7fd;
case 0x74a803:c.instructions+=1;goto B74a803;
case 0x74a805:goto L74a805;
case 0x74a80c:c.instructions+=4;goto B74a80c;
case 0x74a80d:c.instructions+=3;goto B74a80d;
case 0x74a80e:c.instructions+=2;goto B74a80e;
case 0x74a80f:c.instructions+=1;goto B74a80f;
case 0x74a814:goto L74a814;
case 0x74a816:c.instructions+=3;goto B74a816;
case 0x74a817:c.instructions+=2;goto B74a817;
case 0x74a81e:c.instructions+=1;goto B74a81e;
case 0x74a823:goto L74a823;
case 0x74a829:c.instructions+=1;goto B74a829;
case 0x74a82a:goto L74a82a;
case 0x74a830:c.instructions+=1;goto B74a830;
case 0x74a836:goto L74a836;
case 0x74a839:c.instructions+=2;goto B74a839;
case 0x74a83b:c.instructions+=1;goto B74a83b;
case 0x74a83d:goto L74a83d;
case 0x74a841:c.instructions+=14;goto B74a841;
case 0x74a842:c.instructions+=13;goto B74a842;
case 0x74a846:c.instructions+=12;goto B74a846;
case 0x74a84d:c.instructions+=11;goto B74a84d;
case 0x74a854:c.instructions+=10;goto B74a854;
case 0x74a855:c.instructions+=9;goto B74a855;
case 0x74a859:c.instructions+=8;goto B74a859;
case 0x74a85a:c.instructions+=7;goto B74a85a;
case 0x74a85c:c.instructions+=6;goto B74a85c;
case 0x74a85e:c.instructions+=5;goto B74a85e;
case 0x74a866:c.instructions+=4;goto B74a866;
case 0x74a871:c.instructions+=3;goto B74a871;
case 0x74a879:c.instructions+=2;goto B74a879;
case 0x74a881:c.instructions+=1;goto B74a881;
case 0x74a886:goto L74a886;
case 0x74a888:c.instructions+=1;goto B74a888;
case 0x74a88a:goto L74a88a;
case 0x74a891:c.instructions+=2;goto B74a891;
case 0x74a893:c.instructions+=1;goto B74a893;
case 0x74a895:goto L74a895;
case 0x74a899:goto L74a899;
case 0x74a89d:c.instructions+=2;goto B74a89d;
case 0x74a89f:c.instructions+=1;goto B74a89f;
case 0x74a8a1:goto L74a8a1;
case 0x74a8a5:goto L74a8a5;
case 0x74a8a8:c.instructions+=2;goto B74a8a8;
case 0x74a8aa:c.instructions+=1;goto B74a8aa;
case 0x74a8ac:goto L74a8ac;
case 0x74a8af:c.instructions+=7;goto B74a8af;
case 0x74a8b6:c.instructions+=6;goto B74a8b6;
case 0x74a8b7:c.instructions+=5;goto B74a8b7;
case 0x74a8be:c.instructions+=4;goto B74a8be;
case 0x74a8bf:c.instructions+=3;goto B74a8bf;
case 0x74a8c0:c.instructions+=2;goto B74a8c0;
case 0x74a8cb:c.instructions+=1;goto B74a8cb;
case 0x74a8d0:goto L74a8d0;
case 0x74a8d2:c.instructions+=1;goto B74a8d2;
case 0x74a8d4:goto L74a8d4;
case 0x74a8d9:goto L74a8d9;
case 0x74a8de:c.instructions+=1;goto B74a8de;
case 0x74a8e0:goto L74a8e0;
case 0x74a8e5:c.instructions+=1;goto B74a8e5;
case 0x74a8e7:goto L74a8e7;
case 0x74a8ec:c.instructions+=1;goto B74a8ec;
case 0x74a8ee:goto L74a8ee;
case 0x74a8f3:c.instructions+=1;goto B74a8f3;
case 0x74a8f5:goto L74a8f5;
case 0x74a8fa:c.instructions+=1;goto B74a8fa;
case 0x74a8fc:goto L74a8fc;
case 0x74a8ff:c.instructions+=6;goto B74a8ff;
case 0x74a901:c.instructions+=5;goto B74a901;
case 0x74a903:c.instructions+=4;goto B74a903;
case 0x74a906:c.instructions+=3;goto B74a906;
case 0x74a907:c.instructions+=2;goto B74a907;
case 0x74a90e:c.instructions+=1;goto B74a90e;
case 0x74a913:goto L74a913;
case 0x74a919:c.instructions+=1;goto B74a919;
case 0x74a91a:goto L74a91a;
case 0x74a91d:c.instructions+=1;goto B74a91d;
case 0x74a91f:goto L74a91f;
case 0x74a923:goto L74a923;
case 0x74a926:c.instructions+=6;goto B74a926;
case 0x74a928:c.instructions+=5;goto B74a928;
case 0x74a92a:c.instructions+=4;goto B74a92a;
case 0x74a92d:c.instructions+=3;goto B74a92d;
case 0x74a92e:c.instructions+=2;goto B74a92e;
case 0x74a935:c.instructions+=1;goto B74a935;
case 0x74a93a:goto L74a93a;
case 0x74a940:c.instructions+=1;goto B74a940;
case 0x74a941:goto L74a941;
case 0x74a948:c.instructions+=3;goto B74a948;
case 0x74a94b:c.instructions+=2;goto B74a94b;
case 0x74a94c:c.instructions+=1;goto B74a94c;
case 0x74a951:goto L74a951;
case 0x74a957:c.instructions+=1;goto B74a957;
case 0x74a960:goto L74a960;
case 0x74a961:c.instructions+=16;goto B74a961;
case 0x74a963:c.instructions+=15;goto B74a963;
case 0x74a966:c.instructions+=14;goto B74a966;
case 0x74a969:c.instructions+=13;goto B74a969;
case 0x74a96c:c.instructions+=12;goto B74a96c;
case 0x74a96f:c.instructions+=11;goto B74a96f;
case 0x74a972:c.instructions+=10;goto B74a972;
case 0x74a975:c.instructions+=9;goto B74a975;
case 0x74a978:c.instructions+=8;goto B74a978;
case 0x74a97b:c.instructions+=7;goto B74a97b;
case 0x74a97e:c.instructions+=6;goto B74a97e;
case 0x74a981:c.instructions+=5;goto B74a981;
case 0x74a984:c.instructions+=4;goto B74a984;
case 0x74a987:c.instructions+=3;goto B74a987;
case 0x74a989:c.instructions+=2;goto B74a989;
case 0x74a98a:c.instructions+=1;goto B74a98a;
case 0x74a990:goto L74a990;
case 0x74a991:c.instructions+=5;goto B74a991;
case 0x74a995:c.instructions+=4;goto B74a995;
case 0x74a997:c.instructions+=3;goto B74a997;
case 0x74a99a:c.instructions+=2;goto B74a99a;
case 0x74a99b:c.instructions+=1;goto B74a99b;
case 0x74a9a1:goto L74a9a1;
case 0x74a9a3:c.instructions+=1;goto B74a9a3;
case 0x74a9a5:goto L74a9a5;
case 0x74a9a6:c.instructions+=1;goto B74a9a6;
case 0x74a9ab:goto L74a9ab;
case 0x74a9ae:goto L74a9ae;
case 0x74a9af:c.instructions+=1;goto B74a9af;
case 0x74a9b0:goto L74a9b0;
case 0x74a9b1:c.instructions+=4;goto B74a9b1;
case 0x74a9b5:c.instructions+=3;goto B74a9b5;
case 0x74a9b8:c.instructions+=2;goto B74a9b8;
case 0x74a9b9:c.instructions+=1;goto B74a9b9;
case 0x74a9be:goto L74a9be;
case 0x74a9c0:c.instructions+=1;goto B74a9c0;
case 0x74a9c2:goto L74a9c2;
case 0x74a9c5:c.instructions+=13;goto B74a9c5;
case 0x74a9c7:c.instructions+=12;goto B74a9c7;
case 0x74a9cb:c.instructions+=11;goto B74a9cb;
case 0x74a9cd:c.instructions+=10;goto B74a9cd;
case 0x74a9cf:c.instructions+=9;goto B74a9cf;
case 0x74a9d2:c.instructions+=8;goto B74a9d2;
case 0x74a9d6:c.instructions+=7;goto B74a9d6;
case 0x74a9dc:c.instructions+=6;goto B74a9dc;
case 0x74a9df:c.instructions+=5;goto B74a9df;
case 0x74a9e1:c.instructions+=4;goto B74a9e1;
case 0x74a9e4:c.instructions+=3;goto B74a9e4;
case 0x74a9e6:c.instructions+=2;goto B74a9e6;
case 0x74a9e9:c.instructions+=1;goto B74a9e9;
case 0x74a9eb:goto L74a9eb;
case 0x74a9f1:goto L74a9f1;
case 0x74a9f3:c.instructions+=3;goto B74a9f3;
case 0x74a9f6:c.instructions+=2;goto B74a9f6;
case 0x74a9f7:c.instructions+=1;goto B74a9f7;
case 0x74a9fd:goto L74a9fd;
case 0x74a9ff:c.instructions+=1;goto B74a9ff;
case 0x74aa01:goto L74aa01;
case 0x74aa02:c.instructions+=1;goto B74aa02;
case 0x74aa07:goto L74aa07;
case 0x74aa0a:goto L74aa0a;
case 0x74aa0c:c.instructions+=2;goto B74aa0c;
case 0x74aa0d:c.instructions+=1;goto B74aa0d;
case 0x74aa10:goto L74aa10;
case 0x74aa14:c.instructions+=2;goto B74aa14;
case 0x74aa16:c.instructions+=1;goto B74aa16;
case 0x74aa18:goto L74aa18;
case 0x74aa1a:c.instructions+=1;goto B74aa1a;
case 0x74aa1b:goto L74aa1b;
case 0x74aa1c:c.instructions+=4;goto B74aa1c;
case 0x74aa1d:c.instructions+=3;goto B74aa1d;
case 0x74aa1e:c.instructions+=2;goto B74aa1e;
case 0x74aa20:c.instructions+=1;goto B74aa20;
case 0x74aa25:goto L74aa25;
case 0x74aa29:c.instructions+=4;goto B74aa29;
case 0x74aa2b:c.instructions+=3;goto B74aa2b;
case 0x74aa2d:c.instructions+=2;goto B74aa2d;
case 0x74aa32:c.instructions+=1;goto B74aa32;
case 0x74aa34:goto L74aa34;
case 0x74aa36:goto L74aa36;
case 0x74aa3d:c.instructions+=6;goto B74aa3d;
case 0x74aa44:c.instructions+=5;goto B74aa44;
case 0x74aa46:c.instructions+=4;goto B74aa46;
case 0x74aa49:c.instructions+=3;goto B74aa49;
case 0x74aa4b:c.instructions+=2;goto B74aa4b;
case 0x74aa4d:c.instructions+=1;goto B74aa4d;
case 0x74aa4f:goto L74aa4f;
case 0x74aa50:goto L74aa50;
case 0x74aa52:c.instructions+=1;goto B74aa52;
case 0x74aa54:goto L74aa54;
case 0x74aa56:c.instructions+=1;goto B74aa56;
case 0x74aa58:goto L74aa58;
case 0x74aa5a:c.instructions+=1;goto B74aa5a;
case 0x74aa5c:goto L74aa5c;
case 0x74aa5f:c.instructions+=3;goto B74aa5f;
case 0x74aa60:c.instructions+=2;goto B74aa60;
case 0x74aa62:c.instructions+=1;goto B74aa62;
case 0x74aa64:goto L74aa64;
case 0x74aa66:goto L74aa66;
case 0x74aa69:c.instructions+=1;goto B74aa69;
case 0x74aa6b:goto L74aa6b;
case 0x74aa6d:c.instructions+=1;goto B74aa6d;
case 0x74aa70:goto L74aa70;
case 0x74aa72:c.instructions+=4;goto B74aa72;
case 0x74aa74:c.instructions+=3;goto B74aa74;
case 0x74aa76:c.instructions+=2;goto B74aa76;
case 0x74aa78:c.instructions+=1;goto B74aa78;
case 0x74aa7a:goto L74aa7a;
case 0x74aa80:goto L74aa80;
case 0x74aa82:c.instructions+=1;goto B74aa82;
case 0x74aa84:goto L74aa84;
case 0x74aa87:c.instructions+=6;goto B74aa87;
case 0x74aa8a:c.instructions+=5;goto B74aa8a;
case 0x74aa8b:c.instructions+=4;goto B74aa8b;
case 0x74aa8e:c.instructions+=3;goto B74aa8e;
case 0x74aa90:c.instructions+=2;goto B74aa90;
case 0x74aa92:c.instructions+=1;goto B74aa92;
case 0x74aa94:goto L74aa94;
case 0x74aa97:c.instructions+=7;goto B74aa97;
case 0x74aa99:c.instructions+=6;goto B74aa99;
case 0x74aa9c:c.instructions+=5;goto B74aa9c;
case 0x74aa9f:c.instructions+=4;goto B74aa9f;
case 0x74aaa0:c.instructions+=3;goto B74aaa0;
case 0x74aaa3:c.instructions+=2;goto B74aaa3;
case 0x74aaa5:c.instructions+=1;goto B74aaa5;
case 0x74aaa7:goto L74aaa7;
case 0x74aaad:c.instructions+=1;goto B74aaad;
case 0x74aaaf:goto L74aaaf;
case 0x74aab2:c.instructions+=8;goto B74aab2;
case 0x74aab5:c.instructions+=7;goto B74aab5;
case 0x74aab7:c.instructions+=6;goto B74aab7;
case 0x74aab8:c.instructions+=5;goto B74aab8;
case 0x74aab9:c.instructions+=4;goto B74aab9;
case 0x74aabc:c.instructions+=3;goto B74aabc;
case 0x74aabf:c.instructions+=2;goto B74aabf;
case 0x74aac6:c.instructions+=1;goto B74aac6;
case 0x74aac8:goto L74aac8;
case 0x74aac9:c.instructions+=4;goto B74aac9;
case 0x74aaca:c.instructions+=3;goto B74aaca;
case 0x74aacc:c.instructions+=2;goto B74aacc;
case 0x74aacd:c.instructions+=1;goto B74aacd;
case 0x74aace:goto L74aace;
case 0x74aacf:c.instructions+=6;goto B74aacf;
case 0x74aad0:c.instructions+=5;goto B74aad0;
case 0x74aad7:c.instructions+=4;goto B74aad7;
case 0x74aade:c.instructions+=3;goto B74aade;
case 0x74aae0:c.instructions+=2;goto B74aae0;
case 0x74aae1:c.instructions+=1;goto B74aae1;
case 0x74aae2:goto L74aae2;
case 0x74aae4:c.instructions+=2;goto B74aae4;
case 0x74aae7:c.instructions+=1;goto B74aae7;
case 0x74aaec:goto L74aaec;
case 0x74aaee:goto L74aaee;
case 0x74aaf2:c.instructions+=8;goto B74aaf2;
case 0x74aaf3:c.instructions+=7;goto B74aaf3;
case 0x74aaf5:c.instructions+=6;goto B74aaf5;
case 0x74aaf6:c.instructions+=5;goto B74aaf6;
case 0x74aafb:c.instructions+=4;goto B74aafb;
case 0x74aafd:c.instructions+=3;goto B74aafd;
case 0x74aaff:c.instructions+=2;goto B74aaff;
case 0x74ab03:c.instructions+=1;goto B74ab03;
case 0x74ab09:goto L74ab09;
case 0x74ab0b:c.instructions+=1;goto B74ab0b;
case 0x74ab0d:goto L74ab0d;
case 0x74ab0e:c.instructions+=1;goto B74ab0e;
case 0x74ab14:goto L74ab14;
case 0x74ab15:c.instructions+=4;goto B74ab15;
case 0x74ab16:c.instructions+=3;goto B74ab16;
case 0x74ab18:c.instructions+=2;goto B74ab18;
case 0x74ab19:c.instructions+=1;goto B74ab19;
case 0x74ab20:goto L74ab20;
case 0x74ab26:c.instructions+=5;goto B74ab26;
case 0x74ab2b:c.instructions+=4;goto B74ab2b;
case 0x74ab32:c.instructions+=3;goto B74ab32;
case 0x74ab39:c.instructions+=2;goto B74ab39;
case 0x74ab40:c.instructions+=1;goto B74ab40;
case 0x74ab42:goto L74ab42;
case 0x74ab45:c.instructions+=2;goto B74ab45;
case 0x74ab4c:c.instructions+=1;goto B74ab4c;
case 0x74ab51:goto L74ab51;
case 0x74ab57:c.instructions+=1;goto B74ab57;
case 0x74ab58:goto L74ab58;
case 0x74ab59:c.instructions+=4;goto B74ab59;
case 0x74ab60:c.instructions+=3;goto B74ab60;
case 0x74ab64:c.instructions+=2;goto B74ab64;
case 0x74ab65:c.instructions+=1;goto B74ab65;
case 0x74ab6b:goto L74ab6b;
case 0x74ab6c:c.instructions+=6;goto B74ab6c;
case 0x74ab73:c.instructions+=5;goto B74ab73;
case 0x74ab74:c.instructions+=4;goto B74ab74;
case 0x74ab76:c.instructions+=3;goto B74ab76;
case 0x74ab79:c.instructions+=2;goto B74ab79;
case 0x74ab7b:c.instructions+=1;goto B74ab7b;
case 0x74ab7d:goto L74ab7d;
case 0x74ab7f:goto L74ab7f;
case 0x74ab81:c.instructions+=2;goto B74ab81;
case 0x74ab83:c.instructions+=1;goto B74ab83;
case 0x74ab86:goto L74ab86;
case 0x74ab88:goto L74ab88;
case 0x74ab8a:c.instructions+=6;goto B74ab8a;
case 0x74ab8c:c.instructions+=5;goto B74ab8c;
case 0x74ab90:c.instructions+=4;goto B74ab90;
case 0x74ab94:c.instructions+=3;goto B74ab94;
case 0x74ab98:c.instructions+=2;goto B74ab98;
case 0x74ab9c:c.instructions+=1;goto B74ab9c;
case 0x74aba1:goto L74aba1;
case 0x74aba3:c.instructions+=2;goto B74aba3;
case 0x74aba6:c.instructions+=1;goto B74aba6;
case 0x74abac:goto L74abac;
case 0x74abb6:c.instructions+=1;goto B74abb6;
case 0x74abb8:goto L74abb8;
case 0x74abba:c.instructions+=17;goto B74abba;
case 0x74abbe:c.instructions+=16;goto B74abbe;
case 0x74abc2:c.instructions+=15;goto B74abc2;
case 0x74abc6:c.instructions+=14;goto B74abc6;
case 0x74abc7:c.instructions+=13;goto B74abc7;
case 0x74abc8:c.instructions+=12;goto B74abc8;
case 0x74abcf:c.instructions+=11;goto B74abcf;
case 0x74abd0:c.instructions+=10;goto B74abd0;
case 0x74abd2:c.instructions+=9;goto B74abd2;
case 0x74abd6:c.instructions+=8;goto B74abd6;
case 0x74abd7:c.instructions+=7;goto B74abd7;
case 0x74abdb:c.instructions+=6;goto B74abdb;
case 0x74abe2:c.instructions+=5;goto B74abe2;
case 0x74abe3:c.instructions+=4;goto B74abe3;
case 0x74abe4:c.instructions+=3;goto B74abe4;
case 0x74abe9:c.instructions+=2;goto B74abe9;
case 0x74abea:c.instructions+=1;goto B74abea;
case 0x74abef:goto L74abef;
case 0x74abf1:c.instructions+=1;goto B74abf1;
case 0x74abf3:goto L74abf3;
case 0x74abf8:goto L74abf8;
case 0x74abfa:goto L74abfa;
case 0x74abfe:c.instructions+=1;goto B74abfe;
case 0x74ac01:goto L74ac01;
case 0x74ac05:c.instructions+=10;goto B74ac05;
case 0x74ac09:c.instructions+=9;goto B74ac09;
case 0x74ac0b:c.instructions+=8;goto B74ac0b;
case 0x74ac0e:c.instructions+=7;goto B74ac0e;
case 0x74ac11:c.instructions+=6;goto B74ac11;
case 0x74ac14:c.instructions+=5;goto B74ac14;
case 0x74ac16:c.instructions+=4;goto B74ac16;
case 0x74ac19:c.instructions+=3;goto B74ac19;
case 0x74ac1b:c.instructions+=2;goto B74ac1b;
case 0x74ac20:c.instructions+=1;goto B74ac20;
case 0x74ac22:goto L74ac22;
case 0x74ac25:c.instructions+=1;goto B74ac25;
case 0x74ac28:goto L74ac28;
case 0x74ac2c:c.instructions+=9;goto B74ac2c;
case 0x74ac30:c.instructions+=8;goto B74ac30;
case 0x74ac32:c.instructions+=7;goto B74ac32;
case 0x74ac35:c.instructions+=6;goto B74ac35;
case 0x74ac38:c.instructions+=5;goto B74ac38;
case 0x74ac3b:c.instructions+=4;goto B74ac3b;
case 0x74ac3d:c.instructions+=3;goto B74ac3d;
case 0x74ac40:c.instructions+=2;goto B74ac40;
case 0x74ac42:c.instructions+=1;goto B74ac42;
case 0x74ac44:goto L74ac44;
case 0x74ac4b:c.instructions+=4;goto B74ac4b;
case 0x74ac4c:c.instructions+=3;goto B74ac4c;
case 0x74ac4d:c.instructions+=2;goto B74ac4d;
case 0x74ac4e:c.instructions+=1;goto B74ac4e;
case 0x74ac53:goto L74ac53;
case 0x74ac55:c.instructions+=1;goto B74ac55;
case 0x74ac57:goto L74ac57;
case 0x74ac5e:c.instructions+=5;goto B74ac5e;
case 0x74ac5f:c.instructions+=4;goto B74ac5f;
case 0x74ac63:c.instructions+=3;goto B74ac63;
case 0x74ac64:c.instructions+=2;goto B74ac64;
case 0x74ac65:c.instructions+=1;goto B74ac65;
case 0x74ac6a:goto L74ac6a;
case 0x74ac6c:c.instructions+=1;goto B74ac6c;
case 0x74ac6e:goto L74ac6e;
case 0x74ac72:c.instructions+=1;goto B74ac72;
case 0x74ac75:goto L74ac75;
case 0x74ac79:c.instructions+=9;goto B74ac79;
case 0x74ac7d:c.instructions+=8;goto B74ac7d;
case 0x74ac7f:c.instructions+=7;goto B74ac7f;
case 0x74ac82:c.instructions+=6;goto B74ac82;
case 0x74ac85:c.instructions+=5;goto B74ac85;
case 0x74ac88:c.instructions+=4;goto B74ac88;
case 0x74ac8a:c.instructions+=3;goto B74ac8a;
case 0x74ac8d:c.instructions+=2;goto B74ac8d;
case 0x74ac8f:c.instructions+=1;goto B74ac8f;
case 0x74ac91:goto L74ac91;
case 0x74ac96:c.instructions+=3;goto B74ac96;
case 0x74ac9a:c.instructions+=2;goto B74ac9a;
case 0x74ac9b:c.instructions+=1;goto B74ac9b;
case 0x74aca0:goto L74aca0;
case 0x74aca4:c.instructions+=2;goto B74aca4;
case 0x74aca5:c.instructions+=1;goto B74aca5;
case 0x74acaa:goto L74acaa;
case 0x74acac:c.instructions+=1;goto B74acac;
case 0x74acae:goto L74acae;
case 0x74acb1:c.instructions+=3;goto B74acb1;
case 0x74acb3:c.instructions+=2;goto B74acb3;
case 0x74acb5:c.instructions+=1;goto B74acb5;
case 0x74acb8:goto L74acb8;
case 0x74acb9:c.instructions+=1;goto B74acb9;
case 0x74acbe:goto L74acbe;
case 0x74acbf:c.instructions+=6;goto B74acbf;
case 0x74acc0:c.instructions+=5;goto B74acc0;
case 0x74acc1:c.instructions+=4;goto B74acc1;
case 0x74acc3:c.instructions+=3;goto B74acc3;
case 0x74acc4:c.instructions+=2;goto B74acc4;
case 0x74accb:c.instructions+=1;goto B74accb;
case 0x74acd0:goto L74acd0;
case 0x74acd6:c.instructions+=1;goto B74acd6;
case 0x74acd7:goto L74acd7;
case 0x74acde:c.instructions+=3;goto B74acde;
case 0x74ace0:c.instructions+=2;goto B74ace0;
case 0x74ace3:c.instructions+=1;goto B74ace3;
case 0x74ace5:goto L74ace5;
case 0x74ace7:goto L74ace7;
case 0x74ace9:c.instructions+=1;goto B74ace9;
case 0x74acec:goto L74acec;
case 0x74acee:goto L74acee;
case 0x74acf5:c.instructions+=4;goto B74acf5;
case 0x74acf6:c.instructions+=3;goto B74acf6;
case 0x74acfb:c.instructions+=2;goto B74acfb;
case 0x74acfc:c.instructions+=1;goto B74acfc;
case 0x74ad01:goto L74ad01;
case 0x74ad07:c.instructions+=1;goto B74ad07;
case 0x74ad10:goto L74ad10;
case 0x74ad15:c.instructions+=2;goto B74ad15;
case 0x74ad1a:c.instructions+=1;goto B74ad1a;
case 0x74ad1f:goto L74ad1f;
case 0x74ad22:c.instructions+=1;goto B74ad22;
case 0x74ad27:goto L74ad27;
case 0x74ad2c:c.instructions+=2;goto B74ad2c;
case 0x74ad2e:c.instructions+=1;goto B74ad2e;
case 0x74ad30:goto L74ad30;
case 0x74ad31:c.instructions+=1;goto B74ad31;
case 0x74ad36:goto L74ad36;
case 0x74ad3b:c.instructions+=3;goto B74ad3b;
case 0x74ad3e:c.instructions+=2;goto B74ad3e;
case 0x74ad40:c.instructions+=1;goto B74ad40;
case 0x74ad42:goto L74ad42;
case 0x74ad47:c.instructions+=1;goto B74ad47;
case 0x74ad4c:goto L74ad4c;
case 0x74ad4f:c.instructions+=1;goto B74ad4f;
case 0x74ad54:goto L74ad54;
case 0x74ad60:goto L74ad60;
case 0x74ad63:c.instructions+=27;goto B74ad63;
case 0x74ad68:c.instructions+=26;goto B74ad68;
case 0x74ad6c:c.instructions+=25;goto B74ad6c;
case 0x74ad6e:c.instructions+=24;goto B74ad6e;
case 0x74ad71:c.instructions+=23;goto B74ad71;
case 0x74ad75:c.instructions+=22;goto B74ad75;
case 0x74ad79:c.instructions+=21;goto B74ad79;
case 0x74ad7b:c.instructions+=20;goto B74ad7b;
case 0x74ad7f:c.instructions+=19;goto B74ad7f;
case 0x74ad83:c.instructions+=18;goto B74ad83;
case 0x74ad85:c.instructions+=17;goto B74ad85;
case 0x74ad87:c.instructions+=16;goto B74ad87;
case 0x74ad8b:c.instructions+=15;goto B74ad8b;
case 0x74ad8f:c.instructions+=14;goto B74ad8f;
case 0x74ad90:c.instructions+=13;goto B74ad90;
case 0x74ad94:c.instructions+=12;goto B74ad94;
case 0x74ad98:c.instructions+=11;goto B74ad98;
case 0x74ad9c:c.instructions+=10;goto B74ad9c;
case 0x74ada0:c.instructions+=9;goto B74ada0;
case 0x74ada4:c.instructions+=8;goto B74ada4;
case 0x74ada6:c.instructions+=7;goto B74ada6;
case 0x74ada7:c.instructions+=6;goto B74ada7;
case 0x74adae:c.instructions+=5;goto B74adae;
case 0x74adb3:c.instructions+=4;goto B74adb3;
case 0x74adb8:c.instructions+=3;goto B74adb8;
case 0x74adbd:c.instructions+=2;goto B74adbd;
case 0x74adc1:c.instructions+=1;goto B74adc1;
case 0x74adc6:goto L74adc6;
case 0x74adca:c.instructions+=12;goto B74adca;
case 0x74adcf:c.instructions+=11;goto B74adcf;
case 0x74add2:c.instructions+=10;goto B74add2;
case 0x74add5:c.instructions+=9;goto B74add5;
case 0x74add8:c.instructions+=8;goto B74add8;
case 0x74adda:c.instructions+=7;goto B74adda;
case 0x74addf:c.instructions+=6;goto B74addf;
case 0x74ade2:c.instructions+=5;goto B74ade2;
case 0x74ade4:c.instructions+=4;goto B74ade4;
case 0x74ade7:c.instructions+=3;goto B74ade7;
case 0x74ade9:c.instructions+=2;goto B74ade9;
case 0x74aded:c.instructions+=1;goto B74aded;
case 0x74adf2:goto L74adf2;
case 0x74adf5:c.instructions+=1;goto B74adf5;
case 0x74ae00:goto L74ae00;
case 0x74ae01:c.instructions+=8;goto B74ae01;
case 0x74ae02:c.instructions+=7;goto B74ae02;
case 0x74ae05:c.instructions+=6;goto B74ae05;
case 0x74ae06:c.instructions+=5;goto B74ae06;
case 0x74ae08:c.instructions+=4;goto B74ae08;
case 0x74ae0a:c.instructions+=3;goto B74ae0a;
case 0x74ae0c:c.instructions+=2;goto B74ae0c;
case 0x74ae0e:c.instructions+=1;goto B74ae0e;
case 0x74ae10:goto L74ae10;
case 0x74ae11:c.instructions+=5;goto B74ae11;
case 0x74ae12:c.instructions+=4;goto B74ae12;
case 0x74ae16:c.instructions+=3;goto B74ae16;
case 0x74ae1a:c.instructions+=2;goto B74ae1a;
case 0x74ae1d:c.instructions+=1;goto B74ae1d;
case 0x74ae20:goto L74ae20;
case 0x74ae24:c.instructions+=6;goto B74ae24;
case 0x74ae26:c.instructions+=5;goto B74ae26;
case 0x74ae28:c.instructions+=4;goto B74ae28;
case 0x74ae2a:c.instructions+=3;goto B74ae2a;
case 0x74ae30:c.instructions+=2;goto B74ae30;
case 0x74ae32:c.instructions+=1;goto B74ae32;
case 0x74ae34:goto L74ae34;
case 0x74ae36:c.instructions+=1;goto B74ae36;
case 0x74ae38:goto L74ae38;
case 0x74ae39:c.instructions+=3;goto B74ae39;
case 0x74ae3c:c.instructions+=2;goto B74ae3c;
case 0x74ae3e:c.instructions+=1;goto B74ae3e;
case 0x74ae40:goto L74ae40;
case 0x74ae41:c.instructions+=1;goto B74ae41;
case 0x74ae42:goto L74ae42;
case 0x74ae43:c.instructions+=3;goto B74ae43;
case 0x74ae44:c.instructions+=2;goto B74ae44;
case 0x74ae45:c.instructions+=1;goto B74ae45;
case 0x74ae50:goto L74ae50;
case 0x74ae55:c.instructions+=2;goto B74ae55;
case 0x74ae57:c.instructions+=1;goto B74ae57;
case 0x74ae59:goto L74ae59;
case 0x74ae5f:c.instructions+=1;goto B74ae5f;
case 0x74ae60:goto L74ae60;
case 0x74ae61:c.instructions+=7;goto B74ae61;
case 0x74ae65:c.instructions+=6;goto B74ae65;
case 0x74ae66:c.instructions+=5;goto B74ae66;
case 0x74ae67:c.instructions+=4;goto B74ae67;
case 0x74ae6a:c.instructions+=3;goto B74ae6a;
case 0x74ae6d:c.instructions+=2;goto B74ae6d;
case 0x74ae6e:c.instructions+=1;goto B74ae6e;
case 0x74ae73:goto L74ae73;
case 0x74ae75:c.instructions+=4;goto B74ae75;
case 0x74ae78:c.instructions+=3;goto B74ae78;
case 0x74ae7a:c.instructions+=2;goto B74ae7a;
case 0x74ae7c:c.instructions+=1;goto B74ae7c;
case 0x74ae7e:goto L74ae7e;
case 0x74ae80:c.instructions+=3;goto B74ae80;
case 0x74ae82:c.instructions+=2;goto B74ae82;
case 0x74ae85:c.instructions+=1;goto B74ae85;
case 0x74ae87:goto L74ae87;
case 0x74ae89:goto L74ae89;
case 0x74ae8b:c.instructions+=1;goto B74ae8b;
case 0x74ae8e:goto L74ae8e;
case 0x74ae90:goto L74ae90;
case 0x74ae92:c.instructions+=1;goto B74ae92;
case 0x74ae97:goto L74ae97;
case 0x74ae9a:c.instructions+=2;goto B74ae9a;
case 0x74ae9d:c.instructions+=1;goto B74ae9d;
case 0x74aea2:goto L74aea2;
case 0x74aea4:c.instructions+=2;goto B74aea4;
case 0x74aea7:c.instructions+=1;goto B74aea7;
case 0x74aea9:goto L74aea9;
case 0x74aeaa:c.instructions+=1;goto B74aeaa;
case 0x74aeaf:goto L74aeaf;
case 0x74aeb2:c.instructions+=5;goto B74aeb2;
case 0x74aeb3:c.instructions+=4;goto B74aeb3;
case 0x74aeb4:c.instructions+=3;goto B74aeb4;
case 0x74aeb6:c.instructions+=2;goto B74aeb6;
case 0x74aeb7:c.instructions+=1;goto B74aeb7;
case 0x74aeb8:goto L74aeb8;
case 0x74aebe:c.instructions+=2;goto B74aebe;
case 0x74aec8:c.instructions+=1;goto B74aec8;
case 0x74aeca:goto L74aeca;
case 0x74aecb:c.instructions+=3;goto B74aecb;
case 0x74aecc:c.instructions+=2;goto B74aecc;
case 0x74aecd:c.instructions+=1;goto B74aecd;
case 0x74aed0:goto L74aed0;
case 0x74aed5:c.instructions+=4;goto B74aed5;
case 0x74aed6:c.instructions+=3;goto B74aed6;
case 0x74aed8:c.instructions+=2;goto B74aed8;
case 0x74aedd:c.instructions+=1;goto B74aedd;
case 0x74aedf:goto L74aedf;
case 0x74aee0:c.instructions+=4;goto B74aee0;
case 0x74aee4:c.instructions+=3;goto B74aee4;
case 0x74aee7:c.instructions+=2;goto B74aee7;
case 0x74aee8:c.instructions+=1;goto B74aee8;
case 0x74aeed:goto L74aeed;
case 0x74aeee:c.instructions+=1;goto B74aeee;
case 0x74aef3:goto L74aef3;
case 0x74aef6:c.instructions+=3;goto B74aef6;
case 0x74af00:c.instructions+=2;goto B74af00;
case 0x74af0a:c.instructions+=1;goto B74af0a;
case 0x74af0b:goto L74af0b;
case 0x74af10:goto L74af10;
case 0x74af16:c.instructions+=8;goto B74af16;
case 0x74af1b:c.instructions+=7;goto B74af1b;
case 0x74af1c:c.instructions+=6;goto B74af1c;
case 0x74af23:c.instructions+=5;goto B74af23;
case 0x74af24:c.instructions+=4;goto B74af24;
case 0x74af25:c.instructions+=3;goto B74af25;
case 0x74af26:c.instructions+=2;goto B74af26;
case 0x74af2d:c.instructions+=1;goto B74af2d;
case 0x74af32:goto L74af32;
case 0x74af35:c.instructions+=9;goto B74af35;
case 0x74af37:c.instructions+=8;goto B74af37;
case 0x74af39:c.instructions+=7;goto B74af39;
case 0x74af3b:c.instructions+=6;goto B74af3b;
case 0x74af40:c.instructions+=5;goto B74af40;
case 0x74af42:c.instructions+=4;goto B74af42;
case 0x74af45:c.instructions+=3;goto B74af45;
case 0x74af47:c.instructions+=2;goto B74af47;
case 0x74af4b:c.instructions+=1;goto B74af4b;
case 0x74af4d:goto L74af4d;
case 0x74af50:c.instructions+=5;goto B74af50;
case 0x74af52:c.instructions+=4;goto B74af52;
case 0x74af58:c.instructions+=3;goto B74af58;
case 0x74af5a:c.instructions+=2;goto B74af5a;
case 0x74af5d:c.instructions+=1;goto B74af5d;
case 0x74af60:goto L74af60;
case 0x74af63:c.instructions+=12;goto B74af63;
case 0x74af65:c.instructions+=11;goto B74af65;
case 0x74af67:c.instructions+=10;goto B74af67;
case 0x74af6c:c.instructions+=9;goto B74af6c;
case 0x74af6e:c.instructions+=8;goto B74af6e;
case 0x74af71:c.instructions+=7;goto B74af71;
case 0x74af74:c.instructions+=6;goto B74af74;
case 0x74af78:c.instructions+=5;goto B74af78;
case 0x74af7a:c.instructions+=4;goto B74af7a;
case 0x74af7c:c.instructions+=3;goto B74af7c;
case 0x74af80:c.instructions+=2;goto B74af80;
case 0x74af84:c.instructions+=1;goto B74af84;
case 0x74af8a:goto L74af8a;
case 0x74af8d:c.instructions+=6;goto B74af8d;
case 0x74af90:c.instructions+=5;goto B74af90;
case 0x74af93:c.instructions+=4;goto B74af93;
case 0x74af95:c.instructions+=3;goto B74af95;
case 0x74af98:c.instructions+=2;goto B74af98;
case 0x74af9a:c.instructions+=1;goto B74af9a;
case 0x74af9c:goto L74af9c;
case 0x74af9e:c.instructions+=5;goto B74af9e;
case 0x74afa1:c.instructions+=4;goto B74afa1;
case 0x74afa3:c.instructions+=3;goto B74afa3;
case 0x74afa8:c.instructions+=2;goto B74afa8;
case 0x74afab:c.instructions+=1;goto B74afab;
case 0x74afad:goto L74afad;
case 0x74afb0:c.instructions+=4;goto B74afb0;
case 0x74afb3:c.instructions+=3;goto B74afb3;
case 0x74afb6:c.instructions+=2;goto B74afb6;
case 0x74afb9:c.instructions+=1;goto B74afb9;
case 0x74afbe:goto L74afbe;
case 0x74afc0:goto L74afc0;
case 0x74afc3:c.instructions+=4;goto B74afc3;
case 0x74afc7:c.instructions+=3;goto B74afc7;
case 0x74afc8:c.instructions+=2;goto B74afc8;
case 0x74afcb:c.instructions+=1;goto B74afcb;
case 0x74afcd:goto L74afcd;
case 0x74afd3:c.instructions+=4;goto B74afd3;
case 0x74afd6:c.instructions+=3;goto B74afd6;
case 0x74afd8:c.instructions+=2;goto B74afd8;
case 0x74afdb:c.instructions+=1;goto B74afdb;
case 0x74afde:goto L74afde;
case 0x74afe2:c.instructions+=1;goto B74afe2;
case 0x74afe4:goto L74afe4;
case 0x74afe8:c.instructions+=2;goto B74afe8;
case 0x74afec:c.instructions+=1;goto B74afec;
case 0x74afee:goto L74afee;
case 0x74afef:c.instructions+=5;goto B74afef;
case 0x74aff4:c.instructions+=4;goto B74aff4;
case 0x74aff8:c.instructions+=3;goto B74aff8;
case 0x74affd:c.instructions+=2;goto B74affd;
case 0x74affe:c.instructions+=1;goto B74affe;
default:missing_instruction(c.pc);}
B74a001:L74a001:{c.instructions+=3;NFSU2_TR(0x74a001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a007:{NFSU2_TR(0x74a007);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74a00d:{NFSU2_TR(0x74a00d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a021;}}
}
B74a00f:L74a00f:{c.instructions+=1;NFSU2_TR(0x74a00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a014ull));
TAIL_STATIC(0x74b730u,74b);
}
B74a014:L74a014:{c.instructions+=3;NFSU2_TR(0x74a014);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x534ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74a01a:{NFSU2_TR(0x74a01a);
w4(R+0,u32(0x1ull));
}
B74a01f:{NFSU2_TR(0x74a01f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74a023;}}
}
B74a021:L74a021:{c.instructions+=1;NFSU2_TR(0x74a021);
__builtin_memmove((R+0),(R+12),4);
}
B74a023:L74a023:{c.instructions+=3;NFSU2_TR(0x74a023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a024:{NFSU2_TR(0x74a024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a025:{NFSU2_TR(0x74a025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a030:L74a030:{c.instructions+=5;NFSU2_TR(0x74a030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a031:{NFSU2_TR(0x74a031);
__builtin_memmove((R+28),gp(0x8b7ca4),4);
}
B74a037:{NFSU2_TR(0x74a037);
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
B74a039:{NFSU2_TR(0x74a039);
__builtin_memmove((R+4),(R+28),4);
}
B74a03b:{NFSU2_TR(0x74a03b);
if(r1(R+518)){{goto L74a0ab;}}
}
B74a03d:L74a03d:{c.instructions+=13;NFSU2_TR(0x74a03d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74a03f:{NFSU2_TR(0x74a03f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B74a042:{NFSU2_TR(0x74a042);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a043:{NFSU2_TR(0x74a043);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B74a047:{NFSU2_TR(0x74a047);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74a04a:{NFSU2_TR(0x74a04a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74a04d:{NFSU2_TR(0x74a04d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B74a04f:{NFSU2_TR(0x74a04f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B74a053:{NFSU2_TR(0x74a053);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74a056:{NFSU2_TR(0x74a056);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B74a058:{NFSU2_TR(0x74a058);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74a05b:{NFSU2_TR(0x74a05b);
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
B74a05d:{NFSU2_TR(0x74a05d);
if(r1(R+518)){{goto L74a0aa;}}
}
B74a05f:L74a05f:{c.instructions+=1;NFSU2_TR(0x74a05f);
}
B74a060:L74a060:{c.instructions+=5;NFSU2_TR(0x74a060);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a063:{NFSU2_TR(0x74a063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B74a065:{NFSU2_TR(0x74a065);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B74a067:{NFSU2_TR(0x74a067);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a069:{NFSU2_TR(0x74a069);
if(r1(R+518)){{goto L74a078;}}
}
B74a06b:L74a06b:{c.instructions+=4;NFSU2_TR(0x74a06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a06e:{NFSU2_TR(0x74a06e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B74a071:{NFSU2_TR(0x74a071);
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
B74a073:{NFSU2_TR(0x74a073);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a060u);}goto L74a060;}}
}
B74a075:L74a075:{c.instructions+=3;NFSU2_TR(0x74a075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a076:{NFSU2_TR(0x74a076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a077:{NFSU2_TR(0x74a077);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a078:L74a078:{c.instructions+=18;NFSU2_TR(0x74a078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B74a07a:{NFSU2_TR(0x74a07a);
__builtin_memmove((R+8),(R+24),4);
}
B74a07c:{NFSU2_TR(0x74a07c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74a07e:{NFSU2_TR(0x74a07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a081:{NFSU2_TR(0x74a081);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a084:{NFSU2_TR(0x74a084);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a087:{NFSU2_TR(0x74a087);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a08a:{NFSU2_TR(0x74a08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a08d:{NFSU2_TR(0x74a08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a090:{NFSU2_TR(0x74a090);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a093:{NFSU2_TR(0x74a093);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a096:{NFSU2_TR(0x74a096);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B74a099:{NFSU2_TR(0x74a099);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a09c:{NFSU2_TR(0x74a09c);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B74a09f:{NFSU2_TR(0x74a09f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a0a2:{NFSU2_TR(0x74a0a2);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B74a0a5:{NFSU2_TR(0x74a0a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a0a8:{NFSU2_TR(0x74a0a8);
__builtin_memmove((R+0),(R+24),4);
}
B74a0aa:L74a0aa:{c.instructions+=1;NFSU2_TR(0x74a0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a0ab:L74a0ab:{c.instructions+=2;NFSU2_TR(0x74a0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a0ac:{NFSU2_TR(0x74a0ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a0b0:L74a0b0:{c.instructions+=2;NFSU2_TR(0x74a0b0);
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
B74a0b2:{NFSU2_TR(0x74a0b2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a0fa;}}
}
B74a0b4:L74a0b4:{c.instructions+=1;NFSU2_TR(0x74a0b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a0b9ull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a0b9:L74a0b9:{c.instructions+=2;NFSU2_TR(0x74a0b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a0be:{NFSU2_TR(0x74a0be);
if(r1(R+518)){{goto L74a0f8;}}
}
B74a0c0:L74a0c0:{c.instructions+=2;NFSU2_TR(0x74a0c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a0c5:{NFSU2_TR(0x74a0c5);
if(r1(R+518)){{goto L74a0f8;}}
}
B74a0c7:L74a0c7:{c.instructions+=2;NFSU2_TR(0x74a0c7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2743ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2743ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a0cc:{NFSU2_TR(0x74a0cc);
if(r1(R+518)){{goto L74a0f2;}}
}
B74a0ce:L74a0ce:{c.instructions+=2;NFSU2_TR(0x74a0ce);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2751ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2751ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a0d3:{NFSU2_TR(0x74a0d3);
if(r1(R+518)){{goto L74a0f2;}}
}
B74a0d5:L74a0d5:{c.instructions+=2;NFSU2_TR(0x74a0d5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2749ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2749ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a0da:{NFSU2_TR(0x74a0da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a0e2;}}
}
B74a0dc:L74a0dc:{c.instructions+=2;NFSU2_TR(0x74a0dc);
w4(R+0,u32(0xfffffffeull));
}
B74a0e1:{NFSU2_TR(0x74a0e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a0e2:L74a0e2:{c.instructions+=6;NFSU2_TR(0x74a0e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74a0e4:{NFSU2_TR(0x74a0e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x274dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a0e9:{NFSU2_TR(0x74a0e9);
__builtin_memmove((R+4),(R+518),1);
}
B74a0ec:{NFSU2_TR(0x74a0ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xfffffff9ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xfffffff9ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a0ef:{NFSU2_TR(0x74a0ef);
__builtin_memmove((R+0),(R+4),4);
}
B74a0f1:{NFSU2_TR(0x74a0f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a0f2:L74a0f2:{c.instructions+=2;NFSU2_TR(0x74a0f2);
w4(R+0,u32(0xfffffffbull));
}
B74a0f7:{NFSU2_TR(0x74a0f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a0f8:L74a0f8:{c.instructions+=1;NFSU2_TR(0x74a0f8);
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
B74a0fa:L74a0fa:{c.instructions+=1;NFSU2_TR(0x74a0fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a100:L74a100:{c.instructions+=3;NFSU2_TR(0x74a100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a101:{NFSU2_TR(0x74a101);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a102:{NFSU2_TR(0x74a102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a107ull));
TAIL_STATIC(0x74b730u,74b);
}
B74a107:L74a107:{c.instructions+=3;NFSU2_TR(0x74a107);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a109:{NFSU2_TR(0x74a109);
__builtin_memmove((R+28),(R+0),4);
}
B74a10b:{NFSU2_TR(0x74a10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a110ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74a110:L74a110:{c.instructions+=5;NFSU2_TR(0x74a110);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a114:{NFSU2_TR(0x74a114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B74a116:{NFSU2_TR(0x74a116);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74a119:{NFSU2_TR(0x74a119);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a11b:{NFSU2_TR(0x74a11b);
if(r1(R+518)){{goto L74a162;}}
}
B74a11d:L74a11d:{c.instructions+=2;NFSU2_TR(0x74a11d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a11e:{NFSU2_TR(0x74a11e);
__builtin_memmove((R+28),(R+28),4);
}
B74a120:L74a120:{c.instructions+=3;NFSU2_TR(0x74a120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a123:{NFSU2_TR(0x74a123);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a125:{NFSU2_TR(0x74a125);
if(r1(R+518)){{goto L74a15b;}}
}
B74a127:L74a127:{c.instructions+=3;NFSU2_TR(0x74a127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a12a:{NFSU2_TR(0x74a12a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a12c:{NFSU2_TR(0x74a12c);
if(r1(R+518)){{goto L74a15b;}}
}
B74a12e:L74a12e:{c.instructions+=3;NFSU2_TR(0x74a12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a131:{NFSU2_TR(0x74a131);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a134:{NFSU2_TR(0x74a134);
if(r1(R+518)){{goto L74a15b;}}
}
B74a136:L74a136:{c.instructions+=4;NFSU2_TR(0x74a136);
__builtin_memmove((R+20),(R+28),4);
}
B74a138:{NFSU2_TR(0x74a138);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B74a13a:{NFSU2_TR(0x74a13a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a13c:{NFSU2_TR(0x74a13c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74a15b;}}
}
B74a13e:L74a13e:{c.instructions+=6;NFSU2_TR(0x74a13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a141:{NFSU2_TR(0x74a141);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a142:{NFSU2_TR(0x74a142);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a144:{NFSU2_TR(0x74a144);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a145:{NFSU2_TR(0x74a145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a14c:{NFSU2_TR(0x74a14c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a14eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74a14e:L74a14e:{c.instructions+=2;NFSU2_TR(0x74a14e);
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
B74a151:{NFSU2_TR(0x74a151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a156ull));
TAIL_STATIC(0x74b730u,74b);
}
B74a156:L74a156:{c.instructions+=2;NFSU2_TR(0x74a156);
__builtin_memmove((R+28),(R+0),4);
}
B74a158:{NFSU2_TR(0x74a158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a15b:L74a15b:{c.instructions+=3;NFSU2_TR(0x74a15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B74a15d:{NFSU2_TR(0x74a15d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a15f:{NFSU2_TR(0x74a15f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a120u);}goto L74a120;}}
}
B74a161:L74a161:{c.instructions+=1;NFSU2_TR(0x74a161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a162:L74a162:{c.instructions+=5;NFSU2_TR(0x74a162);
__builtin_memmove((R+0),gp(0x8b7ca0),4);
}
B74a167:{NFSU2_TR(0x74a167);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a169:{NFSU2_TR(0x74a169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a16a:{NFSU2_TR(0x74a16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a16b:{NFSU2_TR(0x74a16b);
if(r1(R+518)){{goto L74a18b;}}
}
B74a16d:L74a16d:{c.instructions+=1;NFSU2_TR(0x74a16d);
__builtin_memmove((R+4),(R+4),4);
}
B74a170:L74a170:{c.instructions+=4;NFSU2_TR(0x74a170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a173:{NFSU2_TR(0x74a173);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a174:{NFSU2_TR(0x74a174);
__builtin_memmove(gp(0x8b7ca0),(R+4),4);
}
B74a17a:{NFSU2_TR(0x74a17a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a17full));
TAIL_STATIC(0x598ec0u,598);
}
B74a17f:L74a17f:{c.instructions+=4;NFSU2_TR(0x74a17f);
__builtin_memmove((R+0),gp(0x8b7ca0),4);
}
B74a184:{NFSU2_TR(0x74a184);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74a187:{NFSU2_TR(0x74a187);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a189:{NFSU2_TR(0x74a189);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a170u);}goto L74a170;}}
}
B74a18b:L74a18b:{c.instructions+=2;NFSU2_TR(0x74a18b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a193:{NFSU2_TR(0x74a193);
TAIL_STATIC(0x74b870u,74b);
}
B74a1a0:L74a1a0:{c.instructions+=10;NFSU2_TR(0x74a1a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1a1:{NFSU2_TR(0x74a1a1);
__builtin_memmove((R+20),(R+16),4);
}
B74a1a3:{NFSU2_TR(0x74a1a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B74a1a6:{NFSU2_TR(0x74a1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x19cull))));
}
B74a1ac:{NFSU2_TR(0x74a1ac);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74a1b1:{NFSU2_TR(0x74a1b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a1b8:{NFSU2_TR(0x74a1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a1bb:{NFSU2_TR(0x74a1bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1bc:{NFSU2_TR(0x74a1bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1bd:{NFSU2_TR(0x74a1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a1c2ull));
TAIL_STATIC(0x74ba90u,74b);
}
B74a1c2:L74a1c2:{c.instructions+=3;NFSU2_TR(0x74a1c2);
u8 U[4];
w4(U+0,u32(0x8b7c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1c7:{NFSU2_TR(0x74a1c7);
u8 U[4];
w4(U+0,u32(0x74a100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1cc:{NFSU2_TR(0x74a1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a1d1ull));
TAIL_STATIC(0x74b8a0u,74b);
}
B74a1d1:L74a1d1:{c.instructions+=4;NFSU2_TR(0x74a1d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a1d3:{NFSU2_TR(0x74a1d3);
w4(R+4,u32(0x64ull));
}
B74a1d8:{NFSU2_TR(0x74a1d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74a1dc:{NFSU2_TR(0x74a1dc);
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
B74a1df:L74a1df:{c.instructions+=1;NFSU2_TR(0x74a1df);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74a1e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a1dfu);}goto L74a1df;}
}
B74a1e1:L74a1e1:{c.instructions+=5;NFSU2_TR(0x74a1e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74a1e5:{NFSU2_TR(0x74a1e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1e6:{NFSU2_TR(0x74a1e6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a1e8:{NFSU2_TR(0x74a1e8);
s4(0x8b7ca4,u32(0x0ull));
}
B74a1f2:{NFSU2_TR(0x74a1f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a1f7ull));
TAIL_STATIC(0x75bc00u,75b);
}
B74a1f7:L74a1f7:{c.instructions+=6;NFSU2_TR(0x74a1f7);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74a1fc:{NFSU2_TR(0x74a1fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a203:{NFSU2_TR(0x74a203);
w4(R+8,u32(r1(R+1)));
}
B74a206:{NFSU2_TR(0x74a206);
__builtin_memmove((R+9),(R+0),1);
}
B74a208:{NFSU2_TR(0x74a208);
__builtin_memmove(gp(0x8b7c98),(R+8),4);
}
B74a20e:{NFSU2_TR(0x74a20e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a213ull));
TAIL_STATIC(0x76115eu,761);
}
B74a213:L74a213:{c.instructions+=4;NFSU2_TR(0x74a213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a214:{NFSU2_TR(0x74a214);
__builtin_memmove((R+16),(R+20),4);
}
B74a216:{NFSU2_TR(0x74a216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a217:{NFSU2_TR(0x74a217);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a220:L74a220:{c.instructions+=11;NFSU2_TR(0x74a220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a221:{NFSU2_TR(0x74a221);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a225:{NFSU2_TR(0x74a225);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a229:{NFSU2_TR(0x74a229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a22a:{NFSU2_TR(0x74a22a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a22b:{NFSU2_TR(0x74a22b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74a22f:{NFSU2_TR(0x74a22f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a230:{NFSU2_TR(0x74a230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a231:{NFSU2_TR(0x74a231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a232:{NFSU2_TR(0x74a232);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a23a:{NFSU2_TR(0x74a23a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a23full));
TAIL_STATIC(0x75bc12u,75b);
}
B74a23f:L74a23f:{c.instructions+=3;NFSU2_TR(0x74a23f);
__builtin_memmove((R+12),(R+0),4);
}
B74a241:{NFSU2_TR(0x74a241);
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
B74a244:{NFSU2_TR(0x74a244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a24c;}}
}
B74a246:L74a246:{c.instructions+=5;NFSU2_TR(0x74a246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a247:{NFSU2_TR(0x74a247);
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
B74a249:{NFSU2_TR(0x74a249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a24a:{NFSU2_TR(0x74a24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a24b:{NFSU2_TR(0x74a24b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a24c:L74a24c:{c.instructions+=4;NFSU2_TR(0x74a24c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a24d:{NFSU2_TR(0x74a24d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a24e:{NFSU2_TR(0x74a24e);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a250:{NFSU2_TR(0x74a250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a255ull));
TAIL_STATIC(0x5832f0u,583);
}
B74a255:L74a255:{c.instructions+=8;NFSU2_TR(0x74a255);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74a258:{NFSU2_TR(0x74a258);
__builtin_memmove((R+24),(R+0),4);
}
B74a25a:{NFSU2_TR(0x74a25a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74a25e:{NFSU2_TR(0x74a25e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a25f:{NFSU2_TR(0x74a25f);
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
B74a261:{NFSU2_TR(0x74a261);
u8 U[4];
w4(U+0,u32(0x8004667eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a266:{NFSU2_TR(0x74a266);
w4(R+4,u32(0x14ull));
}
B74a26b:{NFSU2_TR(0x74a26b);
__builtin_memmove((R+28),(R+24),4);
}
B74a26d:L74a26d:{c.instructions+=1;NFSU2_TR(0x74a26d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74a26f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a26du);}goto L74a26d;}
}
B74a26f:L74a26f:{c.instructions+=3;NFSU2_TR(0x74a26f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a270:{NFSU2_TR(0x74a270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a273:{NFSU2_TR(0x74a273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a278ull));
TAIL_STATIC(0x75bc0cu,75b);
}
B74a278:L74a278:{c.instructions+=2;NFSU2_TR(0x74a278);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B74a27b:{NFSU2_TR(0x74a27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a291;}}
}
B74a27d:L74a27d:{c.instructions+=7;NFSU2_TR(0x74a27d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a27f:{NFSU2_TR(0x74a27f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74a283:{NFSU2_TR(0x74a283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a284:{NFSU2_TR(0x74a284);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a286:{NFSU2_TR(0x74a286);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a28b:{NFSU2_TR(0x74a28b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a28c:{NFSU2_TR(0x74a28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a291ull));
TAIL_STATIC(0x75bc06u,75b);
}
B74a291:L74a291:{c.instructions+=7;NFSU2_TR(0x74a291);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a295:{NFSU2_TR(0x74a295);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a299:{NFSU2_TR(0x74a299);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a29b:{NFSU2_TR(0x74a29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a29e:{NFSU2_TR(0x74a29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a2a1:{NFSU2_TR(0x74a2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a2a4:{NFSU2_TR(0x74a2a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a2a9ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74a2a9:L74a2a9:{c.instructions+=5;NFSU2_TR(0x74a2a9);
__builtin_memmove((R+0),gp(0x8b7c9c),4);
}
B74a2ae:{NFSU2_TR(0x74a2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74a2b0:{NFSU2_TR(0x74a2b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a2b2:{NFSU2_TR(0x74a2b2);
__builtin_memmove(gp(0x8b7c9c),(R+24),4);
}
B74a2b8:{NFSU2_TR(0x74a2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a2bdull));
TAIL_STATIC(0x74b870u,74b);
}
B74a2bd:L74a2bd:{c.instructions+=8;NFSU2_TR(0x74a2bd);
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
B74a2c0:{NFSU2_TR(0x74a2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a2c1:{NFSU2_TR(0x74a2c1);
__builtin_memmove((R+0),(R+24),4);
}
B74a2c3:{NFSU2_TR(0x74a2c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a2c4:{NFSU2_TR(0x74a2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a2c5:{NFSU2_TR(0x74a2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a2c6:{NFSU2_TR(0x74a2c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a2c7:{NFSU2_TR(0x74a2c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a2d0:L74a2d0:{c.instructions+=3;NFSU2_TR(0x74a2d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a2d1:{NFSU2_TR(0x74a2d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a2d3:{NFSU2_TR(0x74a2d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a2d8ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74a2d8:L74a2d8:{c.instructions+=6;NFSU2_TR(0x74a2d8);
__builtin_memmove((R+4),gp(0x8b7c9c),4);
}
B74a2de:{NFSU2_TR(0x74a2de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74a2e2:{NFSU2_TR(0x74a2e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74a2e5:{NFSU2_TR(0x74a2e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a2e7:{NFSU2_TR(0x74a2e7);
w4(R+0,u32(0x8b7c9cull));
}
B74a2ec:{NFSU2_TR(0x74a2ec);
if(r1(R+518)){{goto L74a303;}}
}
B74a2ee:L74a2ee:{c.instructions+=1;NFSU2_TR(0x74a2ee);
__builtin_memmove((R+28),(R+28),4);
}
B74a2f0:L74a2f0:{c.instructions+=3;NFSU2_TR(0x74a2f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74a2f2:{NFSU2_TR(0x74a2f2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a2f4:{NFSU2_TR(0x74a2f4);
if(r1(R+518)){{goto L74a2ff;}}
}
B74a2f6:L74a2f6:{c.instructions+=3;NFSU2_TR(0x74a2f6);
__builtin_memmove((R+0),(R+4),4);
}
B74a2f8:{NFSU2_TR(0x74a2f8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B74a2fb:{NFSU2_TR(0x74a2fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a2f0u);}goto L74a2f0;}}
}
B74a2fd:L74a2fd:{c.instructions+=1;NFSU2_TR(0x74a2fd);
{goto L74a303;}
}
B74a2ff:L74a2ff:{c.instructions+=2;NFSU2_TR(0x74a2ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74a301:{NFSU2_TR(0x74a301);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B74a303:L74a303:{c.instructions+=2;NFSU2_TR(0x74a303);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a305:{NFSU2_TR(0x74a305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a30aull));
TAIL_STATIC(0x74b870u,74b);
}
B74a30a:L74a30a:{c.instructions+=2;NFSU2_TR(0x74a30a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74a30d:{NFSU2_TR(0x74a30d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a312ull));
TAIL_STATIC(0x74b930u,74b);
}
B74a312:L74a312:{c.instructions+=4;NFSU2_TR(0x74a312);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a315:{NFSU2_TR(0x74a315);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a317:{NFSU2_TR(0x74a317);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a318:{NFSU2_TR(0x74a318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a31dull));
TAIL_STATIC(0x75bc1eu,75b);
}
B74a31d:L74a31d:{c.instructions+=3;NFSU2_TR(0x74a31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a320:{NFSU2_TR(0x74a320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a321:{NFSU2_TR(0x74a321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a326ull));
TAIL_STATIC(0x75bc18u,75b);
}
B74a326:L74a326:{c.instructions+=4;NFSU2_TR(0x74a326);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a328:{NFSU2_TR(0x74a328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a32f:{NFSU2_TR(0x74a32f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a333:{NFSU2_TR(0x74a333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a338ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74a338:L74a338:{c.instructions+=5;NFSU2_TR(0x74a338);
__builtin_memmove((R+4),gp(0x8b7ca0),4);
}
B74a33e:{NFSU2_TR(0x74a33e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a340:{NFSU2_TR(0x74a340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a343:{NFSU2_TR(0x74a343);
__builtin_memmove(gp(0x8b7ca0),(R+24),4);
}
B74a349:{NFSU2_TR(0x74a349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a34eull));
TAIL_STATIC(0x74b870u,74b);
}
B74a34e:L74a34e:{c.instructions+=4;NFSU2_TR(0x74a34e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74a351:{NFSU2_TR(0x74a351);
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
B74a353:{NFSU2_TR(0x74a353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a354:{NFSU2_TR(0x74a354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a360:L74a360:{c.instructions+=7;NFSU2_TR(0x74a360);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a364:{NFSU2_TR(0x74a364);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a368:{NFSU2_TR(0x74a368);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B74a36c:{NFSU2_TR(0x74a36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a36f:{NFSU2_TR(0x74a36f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a370:{NFSU2_TR(0x74a370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a371:{NFSU2_TR(0x74a371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a376ull));
TAIL_STATIC(0x75bc1eu,75b);
}
B74a376:L74a376:{c.instructions+=2;NFSU2_TR(0x74a376);
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
B74a378:{NFSU2_TR(0x74a378);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a380:L74a380:{c.instructions+=8;NFSU2_TR(0x74a380);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a384:{NFSU2_TR(0x74a384);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a388:{NFSU2_TR(0x74a388);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a38c:{NFSU2_TR(0x74a38c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a38d:{NFSU2_TR(0x74a38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a390:{NFSU2_TR(0x74a390);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a391:{NFSU2_TR(0x74a391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a392:{NFSU2_TR(0x74a392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a397ull));
TAIL_STATIC(0x75bc24u,75b);
}
B74a397:L74a397:{c.instructions+=2;NFSU2_TR(0x74a397);
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
B74a399:{NFSU2_TR(0x74a399);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a3e1;}}
}
B74a39b:L74a39b:{c.instructions+=1;NFSU2_TR(0x74a39b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a3a0ull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a3a0:L74a3a0:{c.instructions+=2;NFSU2_TR(0x74a3a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a3a5:{NFSU2_TR(0x74a3a5);
if(r1(R+518)){{goto L74a3df;}}
}
B74a3a7:L74a3a7:{c.instructions+=2;NFSU2_TR(0x74a3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a3ac:{NFSU2_TR(0x74a3ac);
if(r1(R+518)){{goto L74a3df;}}
}
B74a3ae:L74a3ae:{c.instructions+=2;NFSU2_TR(0x74a3ae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2743ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2743ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a3b3:{NFSU2_TR(0x74a3b3);
if(r1(R+518)){{goto L74a3d9;}}
}
B74a3b5:L74a3b5:{c.instructions+=2;NFSU2_TR(0x74a3b5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2751ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2751ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a3ba:{NFSU2_TR(0x74a3ba);
if(r1(R+518)){{goto L74a3d9;}}
}
B74a3bc:L74a3bc:{c.instructions+=2;NFSU2_TR(0x74a3bc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2749ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2749ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a3c1:{NFSU2_TR(0x74a3c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a3c9;}}
}
B74a3c3:L74a3c3:{c.instructions+=2;NFSU2_TR(0x74a3c3);
w4(R+0,u32(0xfffffffeull));
}
B74a3c8:{NFSU2_TR(0x74a3c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a3c9:L74a3c9:{c.instructions+=6;NFSU2_TR(0x74a3c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74a3cb:{NFSU2_TR(0x74a3cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x274dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a3d0:{NFSU2_TR(0x74a3d0);
__builtin_memmove((R+4),(R+518),1);
}
B74a3d3:{NFSU2_TR(0x74a3d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xfffffff9ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xfffffff9ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a3d6:{NFSU2_TR(0x74a3d6);
__builtin_memmove((R+0),(R+4),4);
}
B74a3d8:{NFSU2_TR(0x74a3d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a3d9:L74a3d9:{c.instructions+=2;NFSU2_TR(0x74a3d9);
w4(R+0,u32(0xfffffffbull));
}
B74a3de:{NFSU2_TR(0x74a3de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a3df:L74a3df:{c.instructions+=1;NFSU2_TR(0x74a3df);
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
B74a3e1:L74a3e1:{c.instructions+=1;NFSU2_TR(0x74a3e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a3f0:L74a3f0:{c.instructions+=12;NFSU2_TR(0x74a3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B74a3f3:{NFSU2_TR(0x74a3f3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74a3f8:{NFSU2_TR(0x74a3f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a3f9:{NFSU2_TR(0x74a3f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a3fd:{NFSU2_TR(0x74a3fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a401:{NFSU2_TR(0x74a401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a402:{NFSU2_TR(0x74a402);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a406:{NFSU2_TR(0x74a406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a407:{NFSU2_TR(0x74a407);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a40b:{NFSU2_TR(0x74a40b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74a40f:{NFSU2_TR(0x74a40f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a413:{NFSU2_TR(0x74a413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a418ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a030u);}goto L74a030;}
}
B74a418:L74a418:{c.instructions+=4;NFSU2_TR(0x74a418);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a41b:{NFSU2_TR(0x74a41b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a41c:{NFSU2_TR(0x74a41c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a41d:{NFSU2_TR(0x74a41d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a422ull));
TAIL_STATIC(0x75bc2au,75b);
}
B74a422:L74a422:{c.instructions+=4;NFSU2_TR(0x74a422);
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
B74a424:{NFSU2_TR(0x74a424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a425:{NFSU2_TR(0x74a425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a426:{NFSU2_TR(0x74a426);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a492;}}
}
B74a428:L74a428:{c.instructions+=1;NFSU2_TR(0x74a428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a42dull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a42d:L74a42d:{c.instructions+=2;NFSU2_TR(0x74a42d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a432:{NFSU2_TR(0x74a432);
if(r1(R+518)){{goto L74a490;}}
}
B74a434:L74a434:{c.instructions+=2;NFSU2_TR(0x74a434);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a439:{NFSU2_TR(0x74a439);
if(r1(R+518)){{goto L74a490;}}
}
B74a43b:L74a43b:{c.instructions+=2;NFSU2_TR(0x74a43b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a440:{NFSU2_TR(0x74a440);
if(r1(R+518)){{goto L74a47e;}}
}
B74a442:L74a442:{c.instructions+=2;NFSU2_TR(0x74a442);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a447:{NFSU2_TR(0x74a447);
if(r1(R+518)){{goto L74a47e;}}
}
B74a449:L74a449:{c.instructions+=2;NFSU2_TR(0x74a449);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a44e:{NFSU2_TR(0x74a44e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a462;}}
}
B74a450:L74a450:{c.instructions+=3;NFSU2_TR(0x74a450);
w4(R+0,u32(0xfffffffeull));
}
B74a455:{NFSU2_TR(0x74a455);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a459:{NFSU2_TR(0x74a459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a45eull));
TAIL_STATIC(0x76115eu,761);
}
B74a45e:L74a45e:{c.instructions+=2;NFSU2_TR(0x74a45e);
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
B74a461:{NFSU2_TR(0x74a461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a462:L74a462:{c.instructions+=7;NFSU2_TR(0x74a462);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74a464:{NFSU2_TR(0x74a464);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x274dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a469:{NFSU2_TR(0x74a469);
__builtin_memmove((R+8),(R+518),1);
}
B74a46c:{NFSU2_TR(0x74a46c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffff9ull))));
}
B74a46f:{NFSU2_TR(0x74a46f);
__builtin_memmove((R+0),(R+8),4);
}
B74a471:{NFSU2_TR(0x74a471);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a475:{NFSU2_TR(0x74a475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a47aull));
TAIL_STATIC(0x76115eu,761);
}
B74a47a:L74a47a:{c.instructions+=2;NFSU2_TR(0x74a47a);
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
B74a47d:{NFSU2_TR(0x74a47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a47e:L74a47e:{c.instructions+=3;NFSU2_TR(0x74a47e);
w4(R+0,u32(0xfffffffbull));
}
B74a483:{NFSU2_TR(0x74a483);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a487:{NFSU2_TR(0x74a487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a48cull));
TAIL_STATIC(0x76115eu,761);
}
B74a48c:L74a48c:{c.instructions+=2;NFSU2_TR(0x74a48c);
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
B74a48f:{NFSU2_TR(0x74a48f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a490:L74a490:{c.instructions+=1;NFSU2_TR(0x74a490);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a492:L74a492:{c.instructions+=2;NFSU2_TR(0x74a492);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a496:{NFSU2_TR(0x74a496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a49bull));
TAIL_STATIC(0x76115eu,761);
}
B74a49b:L74a49b:{c.instructions+=2;NFSU2_TR(0x74a49b);
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
B74a49e:{NFSU2_TR(0x74a49e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a4a0:L74a4a0:{c.instructions+=6;NFSU2_TR(0x74a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a4a4:{NFSU2_TR(0x74a4a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a4a8:{NFSU2_TR(0x74a4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a4ab:{NFSU2_TR(0x74a4ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a4ac:{NFSU2_TR(0x74a4ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a4ad:{NFSU2_TR(0x74a4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a4b2ull));
TAIL_STATIC(0x75bc30u,75b);
}
B74a4b2:L74a4b2:{c.instructions+=2;NFSU2_TR(0x74a4b2);
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
B74a4b4:{NFSU2_TR(0x74a4b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a4fc;}}
}
B74a4b6:L74a4b6:{c.instructions+=1;NFSU2_TR(0x74a4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a4bbull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a4bb:L74a4bb:{c.instructions+=2;NFSU2_TR(0x74a4bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a4c0:{NFSU2_TR(0x74a4c0);
if(r1(R+518)){{goto L74a4fa;}}
}
B74a4c2:L74a4c2:{c.instructions+=2;NFSU2_TR(0x74a4c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a4c7:{NFSU2_TR(0x74a4c7);
if(r1(R+518)){{goto L74a4fa;}}
}
B74a4c9:L74a4c9:{c.instructions+=2;NFSU2_TR(0x74a4c9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2743ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2743ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a4ce:{NFSU2_TR(0x74a4ce);
if(r1(R+518)){{goto L74a4f4;}}
}
B74a4d0:L74a4d0:{c.instructions+=2;NFSU2_TR(0x74a4d0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2751ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2751ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a4d5:{NFSU2_TR(0x74a4d5);
if(r1(R+518)){{goto L74a4f4;}}
}
B74a4d7:L74a4d7:{c.instructions+=2;NFSU2_TR(0x74a4d7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2749ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2749ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a4dc:{NFSU2_TR(0x74a4dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a4e4;}}
}
B74a4de:L74a4de:{c.instructions+=2;NFSU2_TR(0x74a4de);
w4(R+0,u32(0xfffffffeull));
}
B74a4e3:{NFSU2_TR(0x74a4e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a4e4:L74a4e4:{c.instructions+=6;NFSU2_TR(0x74a4e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74a4e6:{NFSU2_TR(0x74a4e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x274dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a4eb:{NFSU2_TR(0x74a4eb);
__builtin_memmove((R+4),(R+518),1);
}
B74a4ee:{NFSU2_TR(0x74a4ee);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xfffffff9ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xfffffff9ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff9ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a4f1:{NFSU2_TR(0x74a4f1);
__builtin_memmove((R+0),(R+4),4);
}
B74a4f3:{NFSU2_TR(0x74a4f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a4f4:L74a4f4:{c.instructions+=2;NFSU2_TR(0x74a4f4);
w4(R+0,u32(0xfffffffbull));
}
B74a4f9:{NFSU2_TR(0x74a4f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a4fa:L74a4fa:{c.instructions+=1;NFSU2_TR(0x74a4fa);
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
B74a4fc:L74a4fc:{c.instructions+=1;NFSU2_TR(0x74a4fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a500:L74a500:{c.instructions+=9;NFSU2_TR(0x74a500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a501:{NFSU2_TR(0x74a501);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a502:{NFSU2_TR(0x74a502);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74a506:{NFSU2_TR(0x74a506);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a509:{NFSU2_TR(0x74a509);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a50a:{NFSU2_TR(0x74a50a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74a50c:{NFSU2_TR(0x74a50c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a50f:{NFSU2_TR(0x74a50f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a517:{NFSU2_TR(0x74a517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a51f;}}
}
B74a519:L74a519:{c.instructions+=5;NFSU2_TR(0x74a519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a51a:{NFSU2_TR(0x74a51a);
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
B74a51c:{NFSU2_TR(0x74a51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a51d:{NFSU2_TR(0x74a51d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a51e:{NFSU2_TR(0x74a51e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a51f:L74a51f:{c.instructions+=5;NFSU2_TR(0x74a51f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a523:{NFSU2_TR(0x74a523);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a525:{NFSU2_TR(0x74a525);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a529:{NFSU2_TR(0x74a529);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a52a:{NFSU2_TR(0x74a52a);
if(r1(R+518)){{goto L74a538;}}
}
B74a52c:L74a52c:{c.instructions+=2;NFSU2_TR(0x74a52c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x10ull))));
}
B74a52f:{NFSU2_TR(0x74a52f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74a538;}}
}
B74a531:L74a531:{c.instructions+=6;NFSU2_TR(0x74a531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a532:{NFSU2_TR(0x74a532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a533:{NFSU2_TR(0x74a533);
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
B74a535:{NFSU2_TR(0x74a535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a536:{NFSU2_TR(0x74a536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a537:{NFSU2_TR(0x74a537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a538:L74a538:{c.instructions+=2;NFSU2_TR(0x74a538);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
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
B74a53c:{NFSU2_TR(0x74a53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a5ab;}}
}
B74a53e:L74a53e:{c.instructions+=5;NFSU2_TR(0x74a53e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a53f:{NFSU2_TR(0x74a53f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a540:{NFSU2_TR(0x74a540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a541:{NFSU2_TR(0x74a541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a542:{NFSU2_TR(0x74a542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a547ull));
TAIL_STATIC(0x75bc36u,75b);
}
B74a547:L74a547:{c.instructions+=3;NFSU2_TR(0x74a547);
__builtin_memmove((R+20),(R+0),4);
}
B74a549:{NFSU2_TR(0x74a549);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B74a54c:{NFSU2_TR(0x74a54c);
if(r1(R+518)){{goto L74a5aa;}}
}
B74a54e:L74a54e:{c.instructions+=5;NFSU2_TR(0x74a54e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74a552:{NFSU2_TR(0x74a552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a553:{NFSU2_TR(0x74a553);
u8 U[4];
w4(U+0,u32(0x8004667eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a558:{NFSU2_TR(0x74a558);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a559:{NFSU2_TR(0x74a559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a55eull));
TAIL_STATIC(0x75bc0cu,75b);
}
B74a55e:L74a55e:{c.instructions+=2;NFSU2_TR(0x74a55e);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a560:{NFSU2_TR(0x74a560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a565ull));
TAIL_STATIC(0x5832f0u,583);
}
B74a565:L74a565:{c.instructions+=4;NFSU2_TR(0x74a565);
__builtin_memmove((R+24),(R+0),4);
}
B74a567:{NFSU2_TR(0x74a567);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a569:{NFSU2_TR(0x74a569);
w4(R+4,u32(0x14ull));
}
B74a56e:{NFSU2_TR(0x74a56e);
__builtin_memmove((R+28),(R+24),4);
}
B74a570:L74a570:{c.instructions+=1;NFSU2_TR(0x74a570);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74a572;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a570u);}goto L74a570;}
}
B74a572:L74a572:{c.instructions+=10;NFSU2_TR(0x74a572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a575:{NFSU2_TR(0x74a575);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a578:{NFSU2_TR(0x74a578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a57b:{NFSU2_TR(0x74a57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a57e:{NFSU2_TR(0x74a57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a581:{NFSU2_TR(0x74a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a584:{NFSU2_TR(0x74a584);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a586:{NFSU2_TR(0x74a586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a589:{NFSU2_TR(0x74a589);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a58d:{NFSU2_TR(0x74a58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a592ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74a592:L74a592:{c.instructions+=5;NFSU2_TR(0x74a592);
__builtin_memmove((R+4),gp(0x8b7c9c),4);
}
B74a598:{NFSU2_TR(0x74a598);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74a59a:{NFSU2_TR(0x74a59a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a59c:{NFSU2_TR(0x74a59c);
__builtin_memmove(gp(0x8b7c9c),(R+24),4);
}
B74a5a2:{NFSU2_TR(0x74a5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a5a7ull));
TAIL_STATIC(0x74b870u,74b);
}
B74a5a7:L74a5a7:{c.instructions+=1;NFSU2_TR(0x74a5a7);
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
B74a5aa:L74a5aa:{c.instructions+=1;NFSU2_TR(0x74a5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a5ab:L74a5ab:{c.instructions+=6;NFSU2_TR(0x74a5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a5ac:{NFSU2_TR(0x74a5ac);
__builtin_memmove((R+0),(R+24),4);
}
B74a5ae:{NFSU2_TR(0x74a5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a5af:{NFSU2_TR(0x74a5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a5b0:{NFSU2_TR(0x74a5b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a5b1:{NFSU2_TR(0x74a5b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a5c0:L74a5c0:{c.instructions+=10;NFSU2_TR(0x74a5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B74a5c3:{NFSU2_TR(0x74a5c3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74a5c8:{NFSU2_TR(0x74a5c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5c9:{NFSU2_TR(0x74a5c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5ca:{NFSU2_TR(0x74a5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74a5ce:{NFSU2_TR(0x74a5ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a5d2:{NFSU2_TR(0x74a5d2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74a5d6:{NFSU2_TR(0x74a5d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5d7:{NFSU2_TR(0x74a5d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74a5db:{NFSU2_TR(0x74a5db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a613;}}
}
B74a5dd:L74a5dd:{c.instructions+=10;NFSU2_TR(0x74a5dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74a5e1:{NFSU2_TR(0x74a5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a5e4:{NFSU2_TR(0x74a5e4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5e6:{NFSU2_TR(0x74a5e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74a5ea:{NFSU2_TR(0x74a5ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5eb:{NFSU2_TR(0x74a5eb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5ed:{NFSU2_TR(0x74a5ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5ef:{NFSU2_TR(0x74a5ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a5f0:{NFSU2_TR(0x74a5f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a5f4:{NFSU2_TR(0x74a5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a5f9ull));
TAIL_STATIC(0x75bc06u,75b);
}
B74a5f9:L74a5f9:{c.instructions+=9;NFSU2_TR(0x74a5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74a5fd:{NFSU2_TR(0x74a5fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a5ff:{NFSU2_TR(0x74a5ff);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74a601:{NFSU2_TR(0x74a601);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B74a604:{NFSU2_TR(0x74a604);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74a607:{NFSU2_TR(0x74a607);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B74a609:{NFSU2_TR(0x74a609);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B74a60b:{NFSU2_TR(0x74a60b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74a60d:{NFSU2_TR(0x74a60d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a617;}}
}
B74a60f:L74a60f:{c.instructions+=2;NFSU2_TR(0x74a60f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74a611:{NFSU2_TR(0x74a611);
{goto L74a617;}
}
B74a613:L74a613:{c.instructions+=1;NFSU2_TR(0x74a613);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74a617:L74a617:{c.instructions+=3;NFSU2_TR(0x74a617);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a61b:{NFSU2_TR(0x74a61b);
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
B74a61d:{NFSU2_TR(0x74a61d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a62d;}}
}
B74a61f:L74a61f:{c.instructions+=6;NFSU2_TR(0x74a61f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a620:{NFSU2_TR(0x74a620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a623:{NFSU2_TR(0x74a623);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a624:{NFSU2_TR(0x74a624);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a625:{NFSU2_TR(0x74a625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a626:{NFSU2_TR(0x74a626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a62bull));
TAIL_STATIC(0x75bc42u,75b);
}
B74a62b:L74a62b:{c.instructions+=1;NFSU2_TR(0x74a62b);
{goto L74a64b;}
}
B74a62d:L74a62d:{c.instructions+=5;NFSU2_TR(0x74a62d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a631:{NFSU2_TR(0x74a631);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a632:{NFSU2_TR(0x74a632);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a633:{NFSU2_TR(0x74a633);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74a637:{NFSU2_TR(0x74a637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a63cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a030u);}goto L74a030;}
}
B74a63c:L74a63c:{c.instructions+=7;NFSU2_TR(0x74a63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a63f:{NFSU2_TR(0x74a63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a640:{NFSU2_TR(0x74a640);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a642:{NFSU2_TR(0x74a642);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a643:{NFSU2_TR(0x74a643);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a644:{NFSU2_TR(0x74a644);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a645:{NFSU2_TR(0x74a645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a64aull));
TAIL_STATIC(0x75bc3cu,75b);
}
B74a64a:L74a64a:{c.instructions+=1;NFSU2_TR(0x74a64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a64b:L74a64b:{c.instructions+=5;NFSU2_TR(0x74a64b);
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
B74a64d:{NFSU2_TR(0x74a64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a64e:{NFSU2_TR(0x74a64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a64f:{NFSU2_TR(0x74a64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74a650:{NFSU2_TR(0x74a650);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a6bc;}}
}
B74a652:L74a652:{c.instructions+=1;NFSU2_TR(0x74a652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a657ull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a657:L74a657:{c.instructions+=2;NFSU2_TR(0x74a657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a65c:{NFSU2_TR(0x74a65c);
if(r1(R+518)){{goto L74a6ba;}}
}
B74a65e:L74a65e:{c.instructions+=2;NFSU2_TR(0x74a65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a663:{NFSU2_TR(0x74a663);
if(r1(R+518)){{goto L74a6ba;}}
}
B74a665:L74a665:{c.instructions+=2;NFSU2_TR(0x74a665);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a66a:{NFSU2_TR(0x74a66a);
if(r1(R+518)){{goto L74a6a8;}}
}
B74a66c:L74a66c:{c.instructions+=2;NFSU2_TR(0x74a66c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a671:{NFSU2_TR(0x74a671);
if(r1(R+518)){{goto L74a6a8;}}
}
B74a673:L74a673:{c.instructions+=2;NFSU2_TR(0x74a673);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a678:{NFSU2_TR(0x74a678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a68c;}}
}
B74a67a:L74a67a:{c.instructions+=3;NFSU2_TR(0x74a67a);
w4(R+0,u32(0xfffffffeull));
}
B74a67f:{NFSU2_TR(0x74a67f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a683:{NFSU2_TR(0x74a683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a688ull));
TAIL_STATIC(0x76115eu,761);
}
B74a688:L74a688:{c.instructions+=2;NFSU2_TR(0x74a688);
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
B74a68b:{NFSU2_TR(0x74a68b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a68c:L74a68c:{c.instructions+=7;NFSU2_TR(0x74a68c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74a68e:{NFSU2_TR(0x74a68e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x274dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a693:{NFSU2_TR(0x74a693);
__builtin_memmove((R+4),(R+518),1);
}
B74a696:{NFSU2_TR(0x74a696);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff9ull))));
}
B74a699:{NFSU2_TR(0x74a699);
__builtin_memmove((R+0),(R+4),4);
}
B74a69b:{NFSU2_TR(0x74a69b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a69f:{NFSU2_TR(0x74a69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a6a4ull));
TAIL_STATIC(0x76115eu,761);
}
B74a6a4:L74a6a4:{c.instructions+=2;NFSU2_TR(0x74a6a4);
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
B74a6a7:{NFSU2_TR(0x74a6a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a6a8:L74a6a8:{c.instructions+=3;NFSU2_TR(0x74a6a8);
w4(R+0,u32(0xfffffffbull));
}
B74a6ad:{NFSU2_TR(0x74a6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a6b1:{NFSU2_TR(0x74a6b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a6b6ull));
TAIL_STATIC(0x76115eu,761);
}
B74a6b6:L74a6b6:{c.instructions+=2;NFSU2_TR(0x74a6b6);
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
B74a6b9:{NFSU2_TR(0x74a6b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a6ba:L74a6ba:{c.instructions+=1;NFSU2_TR(0x74a6ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a6bc:L74a6bc:{c.instructions+=2;NFSU2_TR(0x74a6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a6c0:{NFSU2_TR(0x74a6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a6c5ull));
TAIL_STATIC(0x76115eu,761);
}
B74a6c5:L74a6c5:{c.instructions+=2;NFSU2_TR(0x74a6c5);
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
B74a6c8:{NFSU2_TR(0x74a6c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a6d0:L74a6d0:{c.instructions+=5;NFSU2_TR(0x74a6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6d1:{NFSU2_TR(0x74a6d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74a6d5:{NFSU2_TR(0x74a6d5);
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
B74a6d7:{NFSU2_TR(0x74a6d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6d8:{NFSU2_TR(0x74a6d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a6f6;}}
}
B74a6da:L74a6da:{c.instructions+=9;NFSU2_TR(0x74a6da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a6de:{NFSU2_TR(0x74a6de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a6e2:{NFSU2_TR(0x74a6e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a6e6:{NFSU2_TR(0x74a6e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6e7:{NFSU2_TR(0x74a6e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6e8:{NFSU2_TR(0x74a6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a6eb:{NFSU2_TR(0x74a6eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6ec:{NFSU2_TR(0x74a6ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a6ed:{NFSU2_TR(0x74a6ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a6f2ull));
TAIL_STATIC(0x75bc4eu,75b);
}
B74a6f2:L74a6f2:{c.instructions+=2;NFSU2_TR(0x74a6f2);
__builtin_memmove((R+28),(R+0),4);
}
B74a6f4:{NFSU2_TR(0x74a6f4);
{goto L74a735;}
}
B74a6f6:L74a6f6:{c.instructions+=12;NFSU2_TR(0x74a6f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a6fa:{NFSU2_TR(0x74a6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a6fe:{NFSU2_TR(0x74a6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a702:{NFSU2_TR(0x74a702);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a703:{NFSU2_TR(0x74a703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a707:{NFSU2_TR(0x74a707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a708:{NFSU2_TR(0x74a708);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a70a:{NFSU2_TR(0x74a70a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a70b:{NFSU2_TR(0x74a70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a70e:{NFSU2_TR(0x74a70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a70f:{NFSU2_TR(0x74a70f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a710:{NFSU2_TR(0x74a710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a715ull));
TAIL_STATIC(0x75bc48u,75b);
}
B74a715:L74a715:{c.instructions+=3;NFSU2_TR(0x74a715);
__builtin_memmove((R+28),(R+0),4);
}
B74a717:{NFSU2_TR(0x74a717);
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
B74a719:{NFSU2_TR(0x74a719);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74a737;}}
}
B74a71b:L74a71b:{c.instructions+=1;NFSU2_TR(0x74a71b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a720ull));
TAIL_STATIC(0x74b730u,74b);
}
B74a720:L74a720:{c.instructions+=7;NFSU2_TR(0x74a720);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a723:{NFSU2_TR(0x74a723);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74a726:{NFSU2_TR(0x74a726);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a729:{NFSU2_TR(0x74a729);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74a72c:{NFSU2_TR(0x74a72c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a72f:{NFSU2_TR(0x74a72f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74a732:{NFSU2_TR(0x74a732);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74a735:L74a735:{c.instructions+=1;NFSU2_TR(0x74a735);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a737:L74a737:{c.instructions+=1;NFSU2_TR(0x74a737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a73e;}}
}
B74a739:L74a739:{c.instructions+=2;NFSU2_TR(0x74a739);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B74a73c:{NFSU2_TR(0x74a73c);
{goto L74a745;}
}
B74a73e:L74a73e:{c.instructions+=2;NFSU2_TR(0x74a73e);
__builtin_memmove((R+0),(R+28),4);
}
B74a740:{NFSU2_TR(0x74a740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a745ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a0b0u);}goto L74a0b0;}
}
B74a745:L74a745:{c.instructions+=4;NFSU2_TR(0x74a745);
u8 U[9];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B74a74a:{NFSU2_TR(0x74a74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a74b:{NFSU2_TR(0x74a74b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a74c:{NFSU2_TR(0x74a74c);
if(r1(R+518)){{goto L74a75d;}}
}
B74a74e:L74a74e:{c.instructions+=2;NFSU2_TR(0x74a74e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a751:{NFSU2_TR(0x74a751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a756;}}
}
B74a753:L74a753:{c.instructions+=2;NFSU2_TR(0x74a753);
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
B74a755:{NFSU2_TR(0x74a755);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a756:L74a756:{c.instructions+=2;NFSU2_TR(0x74a756);
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
B74a758:{NFSU2_TR(0x74a758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a75d;}}
}
B74a75a:L74a75a:{c.instructions+=1;NFSU2_TR(0x74a75a);
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
B74a75d:L74a75d:{c.instructions+=1;NFSU2_TR(0x74a75d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a760:L74a760:{c.instructions+=7;NFSU2_TR(0x74a760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x224ull))));
}
B74a766:{NFSU2_TR(0x74a766);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a76d:{NFSU2_TR(0x74a76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a76f:{NFSU2_TR(0x74a76f);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74a774:{NFSU2_TR(0x74a774);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a77b:{NFSU2_TR(0x74a77b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a77c:{NFSU2_TR(0x74a77c);
if(r1(R+518)){{goto L74a799;}}
}
B74a77e:L74a77e:{c.instructions+=6;NFSU2_TR(0x74a77e);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a785:{NFSU2_TR(0x74a785);
__builtin_memmove((R+24),(R+4),4);
}
B74a787:{NFSU2_TR(0x74a787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a788:{NFSU2_TR(0x74a788);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74a78b:{NFSU2_TR(0x74a78b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a78d:{NFSU2_TR(0x74a78d);
__builtin_memmove((R+28),(R+8),4);
}
B74a78f:L74a78f:{c.instructions+=1;NFSU2_TR(0x74a78f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74a791;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a78fu);}goto L74a78f;}
}
B74a791:L74a791:{c.instructions+=2;NFSU2_TR(0x74a791);
__builtin_memmove((R+4),(R+24),4);
}
B74a793:{NFSU2_TR(0x74a793);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74a796:L74a796:{c.instructions+=1;NFSU2_TR(0x74a796);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L74a798;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a796u);}goto L74a796;}
}
B74a798:L74a798:{c.instructions+=1;NFSU2_TR(0x74a798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74a799:L74a799:{c.instructions+=4;NFSU2_TR(0x74a799);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74a7a0:{NFSU2_TR(0x74a7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a7a3:{NFSU2_TR(0x74a7a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a7a6:{NFSU2_TR(0x74a7a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a7c1;}}
}
B74a7a8:L74a7a8:{c.instructions+=4;NFSU2_TR(0x74a7a8);
w4(R+0,u32(0xfffffff9ull));
}
B74a7ad:{NFSU2_TR(0x74a7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a7ae:{NFSU2_TR(0x74a7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a7b5:{NFSU2_TR(0x74a7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a7baull));
TAIL_STATIC(0x76115eu,761);
}
B74a7ba:L74a7ba:{c.instructions+=2;NFSU2_TR(0x74a7ba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a7c0:{NFSU2_TR(0x74a7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a7c1:L74a7c1:{c.instructions+=3;NFSU2_TR(0x74a7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a7c8:{NFSU2_TR(0x74a7c8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x636f6e6eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x636f6e6eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x636f6e6eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a7ce:{NFSU2_TR(0x74a7ce);
if(r1(R+518)){{goto L74a805;}}
}
B74a7d0:L74a7d0:{c.instructions+=2;NFSU2_TR(0x74a7d0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x62696e64ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x62696e64ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x62696e64ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a7d6:{NFSU2_TR(0x74a7d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a7fd;}}
}
B74a7d8:L74a7d8:{c.instructions+=5;NFSU2_TR(0x74a7d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74a7df:{NFSU2_TR(0x74a7df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a7e0:{NFSU2_TR(0x74a7e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a7e1:{NFSU2_TR(0x74a7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a7e2:{NFSU2_TR(0x74a7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a7e7ull));
TAIL_STATIC(0x75bc60u,75b);
}
B74a7e7:L74a7e7:{c.instructions+=4;NFSU2_TR(0x74a7e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a7e9:{NFSU2_TR(0x74a7e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a7ea:{NFSU2_TR(0x74a7ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a7f1:{NFSU2_TR(0x74a7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a7f6ull));
TAIL_STATIC(0x76115eu,761);
}
B74a7f6:L74a7f6:{c.instructions+=2;NFSU2_TR(0x74a7f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a7fc:{NFSU2_TR(0x74a7fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a7fd:L74a7fd:{c.instructions+=2;NFSU2_TR(0x74a7fd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x70656572ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x70656572ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x70656572ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a803:{NFSU2_TR(0x74a803);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a82a;}}
}
B74a805:L74a805:{c.instructions+=5;NFSU2_TR(0x74a805);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74a80c:{NFSU2_TR(0x74a80c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a80d:{NFSU2_TR(0x74a80d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a80e:{NFSU2_TR(0x74a80e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a80f:{NFSU2_TR(0x74a80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a814ull));
TAIL_STATIC(0x75bc5au,75b);
}
B74a814:L74a814:{c.instructions+=4;NFSU2_TR(0x74a814);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a816:{NFSU2_TR(0x74a816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a817:{NFSU2_TR(0x74a817);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a81e:{NFSU2_TR(0x74a81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a823ull));
TAIL_STATIC(0x76115eu,761);
}
B74a823:L74a823:{c.instructions+=2;NFSU2_TR(0x74a823);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a829:{NFSU2_TR(0x74a829);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a82a:L74a82a:{c.instructions+=2;NFSU2_TR(0x74a82a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73746174ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a830:{NFSU2_TR(0x74a830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a941;}}
}
B74a836:L74a836:{c.instructions+=3;NFSU2_TR(0x74a836);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74a839:{NFSU2_TR(0x74a839);
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
B74a83b:{NFSU2_TR(0x74a83b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a8a5;}}
}
B74a83d:L74a83d:{c.instructions+=15;NFSU2_TR(0x74a83d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74a841:{NFSU2_TR(0x74a841);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a842:{NFSU2_TR(0x74a842);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a846:{NFSU2_TR(0x74a846);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a84d:{NFSU2_TR(0x74a84d);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74a854:{NFSU2_TR(0x74a854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a855:{NFSU2_TR(0x74a855);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74a859:{NFSU2_TR(0x74a859);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a85a:{NFSU2_TR(0x74a85a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a85c:{NFSU2_TR(0x74a85c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a85e:{NFSU2_TR(0x74a85e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a866:{NFSU2_TR(0x74a866);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a871:{NFSU2_TR(0x74a871);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a879:{NFSU2_TR(0x74a879);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a881:{NFSU2_TR(0x74a881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a886ull));
TAIL_STATIC(0x75bc54u,75b);
}
B74a886:L74a886:{c.instructions+=2;NFSU2_TR(0x74a886);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a888:{NFSU2_TR(0x74a888);
if(r1(R+518)){{goto L74a8a5;}}
}
B74a88a:L74a88a:{c.instructions+=3;NFSU2_TR(0x74a88a);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a891:{NFSU2_TR(0x74a891);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a893:{NFSU2_TR(0x74a893);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74a899;}}
}
B74a895:L74a895:{c.instructions+=1;NFSU2_TR(0x74a895);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a899:L74a899:{c.instructions+=3;NFSU2_TR(0x74a899);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a89d:{NFSU2_TR(0x74a89d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a89f:{NFSU2_TR(0x74a89f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74a8a5;}}
}
B74a8a1:L74a8a1:{c.instructions+=1;NFSU2_TR(0x74a8a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a8a5:L74a8a5:{c.instructions+=3;NFSU2_TR(0x74a8a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74a8a8:{NFSU2_TR(0x74a8a8);
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
B74a8aa:{NFSU2_TR(0x74a8aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74a923;}}
}
B74a8ac:L74a8ac:{c.instructions+=8;NFSU2_TR(0x74a8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a8af:{NFSU2_TR(0x74a8af);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74a8b6:{NFSU2_TR(0x74a8b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a8b7:{NFSU2_TR(0x74a8b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74a8be:{NFSU2_TR(0x74a8be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a8bf:{NFSU2_TR(0x74a8bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a8c0:{NFSU2_TR(0x74a8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74a8cb:{NFSU2_TR(0x74a8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a8d0ull));
TAIL_STATIC(0x75bc5au,75b);
}
B74a8d0:L74a8d0:{c.instructions+=2;NFSU2_TR(0x74a8d0);
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
B74a8d2:{NFSU2_TR(0x74a8d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74a91a;}}
}
B74a8d4:L74a8d4:{c.instructions+=1;NFSU2_TR(0x74a8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a8d9ull));
TAIL_STATIC(0x75bbfau,75b);
}
B74a8d9:L74a8d9:{c.instructions+=2;NFSU2_TR(0x74a8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2733ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a8de:{NFSU2_TR(0x74a8de);
if(r1(R+518)){{goto L74a923;}}
}
B74a8e0:L74a8e0:{c.instructions+=2;NFSU2_TR(0x74a8e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2746ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a8e5:{NFSU2_TR(0x74a8e5);
if(r1(R+518)){{goto L74a923;}}
}
B74a8e7:L74a8e7:{c.instructions+=2;NFSU2_TR(0x74a8e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2743ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a8ec:{NFSU2_TR(0x74a8ec);
if(r1(R+518)){{goto L74a923;}}
}
B74a8ee:L74a8ee:{c.instructions+=2;NFSU2_TR(0x74a8ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2751ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a8f3:{NFSU2_TR(0x74a8f3);
if(r1(R+518)){{goto L74a923;}}
}
B74a8f5:L74a8f5:{c.instructions+=2;NFSU2_TR(0x74a8f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2749ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a8fa:{NFSU2_TR(0x74a8fa);
if(r1(R+518)){{goto L74a91f;}}
}
B74a8fc:L74a8fc:{c.instructions+=7;NFSU2_TR(0x74a8fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74a8ff:{NFSU2_TR(0x74a8ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a901:{NFSU2_TR(0x74a901);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74a903:{NFSU2_TR(0x74a903);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B74a906:{NFSU2_TR(0x74a906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a907:{NFSU2_TR(0x74a907);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a90e:{NFSU2_TR(0x74a90e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a913ull));
TAIL_STATIC(0x76115eu,761);
}
B74a913:L74a913:{c.instructions+=2;NFSU2_TR(0x74a913);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a919:{NFSU2_TR(0x74a919);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a91a:L74a91a:{c.instructions+=2;NFSU2_TR(0x74a91a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74a91d:{NFSU2_TR(0x74a91d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74a923;}}
}
B74a91f:L74a91f:{c.instructions+=1;NFSU2_TR(0x74a91f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B74a923:L74a923:{c.instructions+=7;NFSU2_TR(0x74a923);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74a926:{NFSU2_TR(0x74a926);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74a928:{NFSU2_TR(0x74a928);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74a92a:{NFSU2_TR(0x74a92a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B74a92d:{NFSU2_TR(0x74a92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a92e:{NFSU2_TR(0x74a92e);
u8 U[8];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a935:{NFSU2_TR(0x74a935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a93aull));
TAIL_STATIC(0x76115eu,761);
}
B74a93a:L74a93a:{c.instructions+=2;NFSU2_TR(0x74a93a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a940:{NFSU2_TR(0x74a940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a941:L74a941:{c.instructions+=4;NFSU2_TR(0x74a941);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a948:{NFSU2_TR(0x74a948);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B74a94b:{NFSU2_TR(0x74a94b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a94c:{NFSU2_TR(0x74a94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a951ull));
TAIL_STATIC(0x76115eu,761);
}
B74a951:L74a951:{c.instructions+=2;NFSU2_TR(0x74a951);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a957:{NFSU2_TR(0x74a957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a960:L74a960:{c.instructions+=17;NFSU2_TR(0x74a960);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a961:{NFSU2_TR(0x74a961);
__builtin_memmove((R+20),(R+16),4);
}
B74a963:{NFSU2_TR(0x74a963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a966:{NFSU2_TR(0x74a966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a969:{NFSU2_TR(0x74a969);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a96c:{NFSU2_TR(0x74a96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a96f:{NFSU2_TR(0x74a96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a972:{NFSU2_TR(0x74a972);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a975:{NFSU2_TR(0x74a975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a978:{NFSU2_TR(0x74a978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74a97b:{NFSU2_TR(0x74a97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a97e:{NFSU2_TR(0x74a97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74a981:{NFSU2_TR(0x74a981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a984:{NFSU2_TR(0x74a984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a987:{NFSU2_TR(0x74a987);
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
B74a989:{NFSU2_TR(0x74a989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74a98a:{NFSU2_TR(0x74a98a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a990:L74a990:{c.instructions+=6;NFSU2_TR(0x74a990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a991:{NFSU2_TR(0x74a991);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74a995:{NFSU2_TR(0x74a995);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a997:{NFSU2_TR(0x74a997);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74a99a:{NFSU2_TR(0x74a99a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a99b:{NFSU2_TR(0x74a99b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a9a1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74a9a1:L74a9a1:{c.instructions+=2;NFSU2_TR(0x74a9a1);
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
B74a9a3:{NFSU2_TR(0x74a9a3);
if(r1(R+518)){{goto L74a9ae;}}
}
B74a9a5:L74a9a5:{c.instructions+=2;NFSU2_TR(0x74a9a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a9a6:{NFSU2_TR(0x74a9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a9abull));
TAIL_STATIC(0x598ec0u,598);
}
B74a9ab:L74a9ab:{c.instructions+=1;NFSU2_TR(0x74a9ab);
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
B74a9ae:L74a9ae:{c.instructions+=2;NFSU2_TR(0x74a9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74a9af:{NFSU2_TR(0x74a9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74a9b0:L74a9b0:{c.instructions+=5;NFSU2_TR(0x74a9b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a9b1:{NFSU2_TR(0x74a9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74a9b5:{NFSU2_TR(0x74a9b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74a9b8:{NFSU2_TR(0x74a9b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a9b9:{NFSU2_TR(0x74a9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a9beull));
TAIL_STATIC(0x75bc66u,75b);
}
B74a9be:L74a9be:{c.instructions+=2;NFSU2_TR(0x74a9be);
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
B74a9c0:{NFSU2_TR(0x74a9c0);
if(r1(R+518)){{goto L74a9eb;}}
}
B74a9c2:L74a9c2:{c.instructions+=14;NFSU2_TR(0x74a9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74a9c5:{NFSU2_TR(0x74a9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74a9c7:{NFSU2_TR(0x74a9c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74a9cb:{NFSU2_TR(0x74a9cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74a9cd:{NFSU2_TR(0x74a9cd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+9),(U+0),1);
}
B74a9cf:{NFSU2_TR(0x74a9cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74a9d2:{NFSU2_TR(0x74a9d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74a9d6:{NFSU2_TR(0x74a9d6);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B74a9dc:{NFSU2_TR(0x74a9dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74a9df:{NFSU2_TR(0x74a9df);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B74a9e1:{NFSU2_TR(0x74a9e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74a9e4:{NFSU2_TR(0x74a9e4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74a9e6:{NFSU2_TR(0x74a9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74a9e9:{NFSU2_TR(0x74a9e9);
{goto L74a9f1;}
}
B74a9eb:L74a9eb:{c.instructions+=1;NFSU2_TR(0x74a9eb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+24)),r4(U+0));
}
B74a9f1:L74a9f1:{c.instructions+=4;NFSU2_TR(0x74a9f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a9f3:{NFSU2_TR(0x74a9f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74a9f6:{NFSU2_TR(0x74a9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74a9f7:{NFSU2_TR(0x74a9f7);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74a9fdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74a9fd:L74a9fd:{c.instructions+=2;NFSU2_TR(0x74a9fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74a9ff:{NFSU2_TR(0x74a9ff);
if(r1(R+518)){{goto L74aa0a;}}
}
B74aa01:L74aa01:{c.instructions+=2;NFSU2_TR(0x74aa01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aa02:{NFSU2_TR(0x74aa02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aa07ull));
TAIL_STATIC(0x598ec0u,598);
}
B74aa07:L74aa07:{c.instructions+=1;NFSU2_TR(0x74aa07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74aa0a:L74aa0a:{c.instructions+=3;NFSU2_TR(0x74aa0a);
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
B74aa0c:{NFSU2_TR(0x74aa0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74aa0d:{NFSU2_TR(0x74aa0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aa10:L74aa10:{c.instructions+=3;NFSU2_TR(0x74aa10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74aa14:{NFSU2_TR(0x74aa14);
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
B74aa16:{NFSU2_TR(0x74aa16);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74aa1b;}}
}
B74aa18:L74aa18:{c.instructions+=2;NFSU2_TR(0x74aa18);
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
B74aa1a:{NFSU2_TR(0x74aa1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aa1b:L74aa1b:{c.instructions+=5;NFSU2_TR(0x74aa1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aa1c:{NFSU2_TR(0x74aa1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aa1d:{NFSU2_TR(0x74aa1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aa1e:{NFSU2_TR(0x74aa1e);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aa20:{NFSU2_TR(0x74aa20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aa25ull));
TAIL_STATIC(0x5832f0u,583);
}
B74aa25:L74aa25:{c.instructions+=5;NFSU2_TR(0x74aa25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74aa29:{NFSU2_TR(0x74aa29);
__builtin_memmove((R+20),(R+0),4);
}
B74aa2b:{NFSU2_TR(0x74aa2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74aa2d:{NFSU2_TR(0x74aa2d);
w4(R+4,u32(0x17ull));
}
B74aa32:{NFSU2_TR(0x74aa32);
__builtin_memmove((R+28),(R+20),4);
}
B74aa34:L74aa34:{c.instructions+=1;NFSU2_TR(0x74aa34);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74aa36;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74aa34u);}goto L74aa34;}
}
B74aa36:L74aa36:{c.instructions+=7;NFSU2_TR(0x74aa36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x73ead0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74aa3d:{NFSU2_TR(0x74aa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x74a990ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74aa44:{NFSU2_TR(0x74aa44);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74aa46:{NFSU2_TR(0x74aa46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74aa49:{NFSU2_TR(0x74aa49);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74aa4b:{NFSU2_TR(0x74aa4b);
__builtin_memmove((R+4),(R+8),4);
}
B74aa4d:{NFSU2_TR(0x74aa4d);
if(r1(R+518)){{goto L74aa66;}}
}
B74aa4f:L74aa4f:{c.instructions+=1;NFSU2_TR(0x74aa4f);
}
B74aa50:L74aa50:{c.instructions+=2;NFSU2_TR(0x74aa50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74aa52:{NFSU2_TR(0x74aa52);
if(r1(R+518)){{goto L74aa5c;}}
}
B74aa54:L74aa54:{c.instructions+=2;NFSU2_TR(0x74aa54);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B74aa56:{NFSU2_TR(0x74aa56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74aa66;}}
}
B74aa58:L74aa58:{c.instructions+=2;NFSU2_TR(0x74aa58);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74aa5a:{NFSU2_TR(0x74aa5a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74aa66;}}
}
B74aa5c:L74aa5c:{c.instructions+=4;NFSU2_TR(0x74aa5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74aa5f:{NFSU2_TR(0x74aa5f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74aa60:{NFSU2_TR(0x74aa60);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74aa62:{NFSU2_TR(0x74aa62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74aa50u);}goto L74aa50;}}
}
B74aa64:L74aa64:{c.instructions+=1;NFSU2_TR(0x74aa64);
{goto L74aa6b;}
}
B74aa66:L74aa66:{c.instructions+=2;NFSU2_TR(0x74aa66);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
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
B74aa69:{NFSU2_TR(0x74aa69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74aae2;}}
}
B74aa6b:L74aa6b:{c.instructions+=2;NFSU2_TR(0x74aa6b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74aa6d:{NFSU2_TR(0x74aa6d);
__builtin_memmove((R+4),(R+4),4);
}
B74aa70:L74aa70:{c.instructions+=5;NFSU2_TR(0x74aa70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74aa72:{NFSU2_TR(0x74aa72);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74aa74:{NFSU2_TR(0x74aa74);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74aa76:{NFSU2_TR(0x74aa76);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B74aa78:{NFSU2_TR(0x74aa78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74aa94;}}
}
B74aa7a:L74aa7a:{c.instructions+=1;NFSU2_TR(0x74aa7a);
__builtin_memmove((R+12),(R+12),4);
}
B74aa80:L74aa80:{c.instructions+=2;NFSU2_TR(0x74aa80);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74aa82:{NFSU2_TR(0x74aa82);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74aa94;}}
}
B74aa84:L74aa84:{c.instructions+=7;NFSU2_TR(0x74aa84);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B74aa87:{NFSU2_TR(0x74aa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74aa8a:{NFSU2_TR(0x74aa8a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74aa8b:{NFSU2_TR(0x74aa8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74aa8e:{NFSU2_TR(0x74aa8e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74aa90:{NFSU2_TR(0x74aa90);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B74aa92:{NFSU2_TR(0x74aa92);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74aa80u);}goto L74aa80;}}
}
B74aa94:L74aa94:{c.instructions+=8;NFSU2_TR(0x74aa94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(s32(s8(r1(U+0)))));
}
B74aa97:{NFSU2_TR(0x74aa97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74aa99:{NFSU2_TR(0x74aa99);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74aa9c:{NFSU2_TR(0x74aa9c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B74aa9f:{NFSU2_TR(0x74aa9f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B74aaa0:{NFSU2_TR(0x74aaa0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2eull))));
}
B74aaa3:{NFSU2_TR(0x74aaa3);
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
B74aaa5:{NFSU2_TR(0x74aaa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74aace;}}
}
B74aaa7:L74aaa7:{c.instructions+=2;NFSU2_TR(0x74aaa7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74aaad:{NFSU2_TR(0x74aaad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74aace;}}
}
B74aaaf:L74aaaf:{c.instructions+=9;NFSU2_TR(0x74aaaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74aab2:{NFSU2_TR(0x74aab2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74aab5:{NFSU2_TR(0x74aab5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B74aab7:{NFSU2_TR(0x74aab7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74aab8:{NFSU2_TR(0x74aab8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74aab9:{NFSU2_TR(0x74aab9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B74aabc:{NFSU2_TR(0x74aabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74aabf:{NFSU2_TR(0x74aabf);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+20)),r4(U+0));
}
B74aac6:{NFSU2_TR(0x74aac6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74aa70u);}goto L74aa70;}}
}
B74aac8:L74aac8:{c.instructions+=5;NFSU2_TR(0x74aac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74aac9:{NFSU2_TR(0x74aac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74aaca:{NFSU2_TR(0x74aaca);
__builtin_memmove((R+0),(R+20),4);
}
B74aacc:{NFSU2_TR(0x74aacc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74aacd:{NFSU2_TR(0x74aacd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aace:L74aace:{c.instructions+=7;NFSU2_TR(0x74aace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74aacf:{NFSU2_TR(0x74aacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74aad0:{NFSU2_TR(0x74aad0);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
s4(u32(r4(R+20)),r4(U+0));
}
B74aad7:{NFSU2_TR(0x74aad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74aade:{NFSU2_TR(0x74aade);
__builtin_memmove((R+0),(R+20),4);
}
B74aae0:{NFSU2_TR(0x74aae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74aae1:{NFSU2_TR(0x74aae1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aae2:L74aae2:{c.instructions+=3;NFSU2_TR(0x74aae2);
__builtin_memmove((R+24),(R+8),4);
}
B74aae4:{NFSU2_TR(0x74aae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74aae7:{NFSU2_TR(0x74aae7);
w4(R+4,u32(0x10ull));
}
B74aaec:L74aaec:{c.instructions+=1;NFSU2_TR(0x74aaec);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74aaee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74aaecu);}goto L74aaec;}
}
B74aaee:L74aaee:{c.instructions+=9;NFSU2_TR(0x74aaee);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74aaf2:{NFSU2_TR(0x74aaf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aaf3:{NFSU2_TR(0x74aaf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aaf5:{NFSU2_TR(0x74aaf5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aaf6:{NFSU2_TR(0x74aaf6);
u8 U[4];
w4(U+0,u32(0x74a9b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aafb:{NFSU2_TR(0x74aafb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aafd:{NFSU2_TR(0x74aafd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aaff:{NFSU2_TR(0x74aaff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74ab03:{NFSU2_TR(0x74ab03);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ab09ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ab09:L74ab09:{c.instructions+=2;NFSU2_TR(0x74ab09);
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
B74ab0b:{NFSU2_TR(0x74ab0b);
if(r1(R+518)){{goto L74ab14;}}
}
B74ab0d:L74ab0d:{c.instructions+=2;NFSU2_TR(0x74ab0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab0e:{NFSU2_TR(0x74ab0e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ab14ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74ab14:L74ab14:{c.instructions+=5;NFSU2_TR(0x74ab14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ab15:{NFSU2_TR(0x74ab15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ab16:{NFSU2_TR(0x74ab16);
__builtin_memmove((R+0),(R+20),4);
}
B74ab18:{NFSU2_TR(0x74ab18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74ab19:{NFSU2_TR(0x74ab19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ab20:L74ab20:{c.instructions+=6;NFSU2_TR(0x74ab20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B74ab26:{NFSU2_TR(0x74ab26);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74ab2b:{NFSU2_TR(0x74ab2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ab32:{NFSU2_TR(0x74ab32);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ab39:{NFSU2_TR(0x74ab39);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74ab40:{NFSU2_TR(0x74ab40);
if(r1(R+518)){{goto L74ab58;}}
}
B74ab42:L74ab42:{c.instructions+=3;NFSU2_TR(0x74ab42);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B74ab45:{NFSU2_TR(0x74ab45);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ab4c:{NFSU2_TR(0x74ab4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ab51ull));
TAIL_STATIC(0x76115eu,761);
}
B74ab51:L74ab51:{c.instructions+=2;NFSU2_TR(0x74ab51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ab57:{NFSU2_TR(0x74ab57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ab58:L74ab58:{c.instructions+=5;NFSU2_TR(0x74ab58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab59:{NFSU2_TR(0x74ab59);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74ab60:{NFSU2_TR(0x74ab60);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B74ab64:{NFSU2_TR(0x74ab64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab65:{NFSU2_TR(0x74ab65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74acd7;}}
}
B74ab6b:L74ab6b:{c.instructions+=7;NFSU2_TR(0x74ab6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab6c:{NFSU2_TR(0x74ab6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74ab73:{NFSU2_TR(0x74ab73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab74:{NFSU2_TR(0x74ab74);
__builtin_memmove((R+0),(R+4),4);
}
B74ab76:{NFSU2_TR(0x74ab76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74ab79:{NFSU2_TR(0x74ab79);
__builtin_memmove((R+24),(R+12),4);
}
B74ab7b:{NFSU2_TR(0x74ab7b);
__builtin_memmove((R+28),(R+20),4);
}
B74ab7d:L74ab7d:{c.instructions+=1;NFSU2_TR(0x74ab7d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74ab7f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ab7du);}goto L74ab7d;}
}
B74ab7f:L74ab7f:{c.instructions+=3;NFSU2_TR(0x74ab7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab81:{NFSU2_TR(0x74ab81);
__builtin_memmove((R+4),(R+0),4);
}
B74ab83:{NFSU2_TR(0x74ab83);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ab86:L74ab86:{c.instructions+=1;NFSU2_TR(0x74ab86);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L74ab88;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ab86u);}goto L74ab86;}
}
B74ab88:L74ab88:{c.instructions+=7;NFSU2_TR(0x74ab88);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab8a:{NFSU2_TR(0x74ab8a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ab8c:{NFSU2_TR(0x74ab8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74ab90:{NFSU2_TR(0x74ab90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74ab94:{NFSU2_TR(0x74ab94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74ab98:{NFSU2_TR(0x74ab98);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74ab9c:{NFSU2_TR(0x74ab9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aba1ull));
TAIL_STATIC(0x75bc12u,75b);
}
B74aba1:L74aba1:{c.instructions+=3;NFSU2_TR(0x74aba1);
__builtin_memmove((R+24),(R+0),4);
}
B74aba3:{NFSU2_TR(0x74aba3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74aba6:{NFSU2_TR(0x74aba6);
if(r1(R+518)){{goto L74acbe;}}
}
B74abac:L74abac:{c.instructions+=2;NFSU2_TR(0x74abac);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b7c98),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x200ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74abb6:{NFSU2_TR(0x74abb6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74ac28;}}
}
B74abb8:L74abb8:{c.instructions+=18;NFSU2_TR(0x74abb8);
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
B74abba:{NFSU2_TR(0x74abba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74abbe:{NFSU2_TR(0x74abbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74abc2:{NFSU2_TR(0x74abc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74abc6:{NFSU2_TR(0x74abc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abc7:{NFSU2_TR(0x74abc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abc8:{NFSU2_TR(0x74abc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74abcf:{NFSU2_TR(0x74abcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abd0:{NFSU2_TR(0x74abd0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abd2:{NFSU2_TR(0x74abd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74abd6:{NFSU2_TR(0x74abd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abd7:{NFSU2_TR(0x74abd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74abdb:{NFSU2_TR(0x74abdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74abe2:{NFSU2_TR(0x74abe2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abe3:{NFSU2_TR(0x74abe3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abe4:{NFSU2_TR(0x74abe4);
u8 U[4];
w4(U+0,u32(0xc8000014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abe9:{NFSU2_TR(0x74abe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74abea:{NFSU2_TR(0x74abea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74abefull));
TAIL_STATIC(0x75bc72u,75b);
}
B74abef:L74abef:{c.instructions+=2;NFSU2_TR(0x74abef);
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
B74abf1:{NFSU2_TR(0x74abf1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74abfa;}}
}
B74abf3:L74abf3:{c.instructions+=1;NFSU2_TR(0x74abf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74abf8ull));
TAIL_STATIC(0x75bbfau,75b);
}
B74abf8:L74abf8:{c.instructions+=1;NFSU2_TR(0x74abf8);
{goto L74ac01;}
}
B74abfa:L74abfa:{c.instructions+=2;NFSU2_TR(0x74abfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74abfe:{NFSU2_TR(0x74abfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ac01:L74ac01:{c.instructions+=11;NFSU2_TR(0x74ac01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74ac05:{NFSU2_TR(0x74ac05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74ac09:{NFSU2_TR(0x74ac09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ac0b:{NFSU2_TR(0x74ac0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B74ac0e:{NFSU2_TR(0x74ac0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74ac11:{NFSU2_TR(0x74ac11);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74ac14:{NFSU2_TR(0x74ac14);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B74ac16:{NFSU2_TR(0x74ac16);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74ac19:{NFSU2_TR(0x74ac19);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B74ac1b:{NFSU2_TR(0x74ac1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ac20:{NFSU2_TR(0x74ac20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ac28;}}
}
B74ac22:L74ac22:{c.instructions+=2;NFSU2_TR(0x74ac22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ac25:{NFSU2_TR(0x74ac25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ac28:L74ac28:{c.instructions+=10;NFSU2_TR(0x74ac28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74ac2c:{NFSU2_TR(0x74ac2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74ac30:{NFSU2_TR(0x74ac30);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74ac32:{NFSU2_TR(0x74ac32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B74ac35:{NFSU2_TR(0x74ac35);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ac38:{NFSU2_TR(0x74ac38);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74ac3b:{NFSU2_TR(0x74ac3b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B74ac3d:{NFSU2_TR(0x74ac3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74ac40:{NFSU2_TR(0x74ac40);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ac42:{NFSU2_TR(0x74ac42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ac75;}}
}
B74ac44:L74ac44:{c.instructions+=5;NFSU2_TR(0x74ac44);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ac4b:{NFSU2_TR(0x74ac4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac4c:{NFSU2_TR(0x74ac4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac4d:{NFSU2_TR(0x74ac4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac4e:{NFSU2_TR(0x74ac4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ac53ull));
TAIL_STATIC(0x75bc2au,75b);
}
B74ac53:L74ac53:{c.instructions+=2;NFSU2_TR(0x74ac53);
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
B74ac55:{NFSU2_TR(0x74ac55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ac75;}}
}
B74ac57:L74ac57:{c.instructions+=6;NFSU2_TR(0x74ac57);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ac5e:{NFSU2_TR(0x74ac5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac5f:{NFSU2_TR(0x74ac5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ac63:{NFSU2_TR(0x74ac63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac64:{NFSU2_TR(0x74ac64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac65:{NFSU2_TR(0x74ac65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ac6aull));
TAIL_STATIC(0x75bc60u,75b);
}
B74ac6a:L74ac6a:{c.instructions+=2;NFSU2_TR(0x74ac6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ac6c:{NFSU2_TR(0x74ac6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ac75;}}
}
B74ac6e:L74ac6e:{c.instructions+=2;NFSU2_TR(0x74ac6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ac72:{NFSU2_TR(0x74ac72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ac75:L74ac75:{c.instructions+=10;NFSU2_TR(0x74ac75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74ac79:{NFSU2_TR(0x74ac79);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74ac7d:{NFSU2_TR(0x74ac7d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74ac7f:{NFSU2_TR(0x74ac7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B74ac82:{NFSU2_TR(0x74ac82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74ac85:{NFSU2_TR(0x74ac85);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74ac88:{NFSU2_TR(0x74ac88);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74ac8a:{NFSU2_TR(0x74ac8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74ac8d:{NFSU2_TR(0x74ac8d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ac8f:{NFSU2_TR(0x74ac8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74acb8;}}
}
B74ac91:L74ac91:{c.instructions+=4;NFSU2_TR(0x74ac91);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac96:{NFSU2_TR(0x74ac96);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ac9a:{NFSU2_TR(0x74ac9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ac9b:{NFSU2_TR(0x74ac9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aca0ull));
TAIL_STATIC(0x75bc6cu,75b);
}
B74aca0:L74aca0:{c.instructions+=3;NFSU2_TR(0x74aca0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74aca4:{NFSU2_TR(0x74aca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aca5:{NFSU2_TR(0x74aca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74acaaull));
TAIL_STATIC(0x75bc66u,75b);
}
B74acaa:L74acaa:{c.instructions+=2;NFSU2_TR(0x74acaa);
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
B74acac:{NFSU2_TR(0x74acac);
if(r1(R+518)){{goto L74acb8;}}
}
B74acae:L74acae:{c.instructions+=4;NFSU2_TR(0x74acae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74acb1:{NFSU2_TR(0x74acb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74acb3:{NFSU2_TR(0x74acb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74acb5:{NFSU2_TR(0x74acb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74acb8:L74acb8:{c.instructions+=2;NFSU2_TR(0x74acb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74acb9:{NFSU2_TR(0x74acb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74acbeull));
TAIL_STATIC(0x75bc18u,75b);
}
B74acbe:L74acbe:{c.instructions+=7;NFSU2_TR(0x74acbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74acbf:{NFSU2_TR(0x74acbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74acc0:{NFSU2_TR(0x74acc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74acc1:{NFSU2_TR(0x74acc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74acc3:{NFSU2_TR(0x74acc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74acc4:{NFSU2_TR(0x74acc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74accb:{NFSU2_TR(0x74accb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74acd0ull));
TAIL_STATIC(0x76115eu,761);
}
B74acd0:L74acd0:{c.instructions+=2;NFSU2_TR(0x74acd0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74acd6:{NFSU2_TR(0x74acd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74acd7:L74acd7:{c.instructions+=4;NFSU2_TR(0x74acd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74acde:{NFSU2_TR(0x74acde);
__builtin_memmove((R+8),(R+4),4);
}
B74ace0:{NFSU2_TR(0x74ace0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74ace3:{NFSU2_TR(0x74ace3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ace5:L74ace5:{c.instructions+=1;NFSU2_TR(0x74ace5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74ace7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ace5u);}goto L74ace5;}
}
B74ace7:L74ace7:{c.instructions+=2;NFSU2_TR(0x74ace7);
__builtin_memmove((R+4),(R+8),4);
}
B74ace9:{NFSU2_TR(0x74ace9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B74acec:L74acec:{c.instructions+=1;NFSU2_TR(0x74acec);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L74acee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74acecu);}goto L74acec;}
}
B74acee:L74acee:{c.instructions+=5;NFSU2_TR(0x74acee);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74acf5:{NFSU2_TR(0x74acf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74acf6:{NFSU2_TR(0x74acf6);
w4(R+0,u32(0xfffffffdull));
}
B74acfb:{NFSU2_TR(0x74acfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74acfc:{NFSU2_TR(0x74acfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad01ull));
TAIL_STATIC(0x76115eu,761);
}
B74ad01:L74ad01:{c.instructions+=2;NFSU2_TR(0x74ad01);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ad07:{NFSU2_TR(0x74ad07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ad10:L74ad10:{c.instructions+=3;NFSU2_TR(0x74ad10);
u8 U[4];
w4(U+0,u32(0x8b7c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad15:{NFSU2_TR(0x74ad15);
u8 U[4];
w4(U+0,u32(0x74a100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad1a:{NFSU2_TR(0x74ad1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad1full));
TAIL_STATIC(0x74b8d0u,74b);
}
B74ad1f:L74ad1f:{c.instructions+=2;NFSU2_TR(0x74ad1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74ad22:{NFSU2_TR(0x74ad22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad27ull));
TAIL_STATIC(0x74b930u,74b);
}
B74ad27:L74ad27:{c.instructions+=3;NFSU2_TR(0x74ad27);
__builtin_memmove((R+0),gp(0x8b7c9c),4);
}
B74ad2c:{NFSU2_TR(0x74ad2c);
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
B74ad2e:{NFSU2_TR(0x74ad2e);
if(r1(R+518)){{goto L74ad42;}}
}
B74ad30:L74ad30:{c.instructions+=2;NFSU2_TR(0x74ad30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad31:{NFSU2_TR(0x74ad31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a2d0u);}goto L74a2d0;}
}
B74ad36:L74ad36:{c.instructions+=4;NFSU2_TR(0x74ad36);
__builtin_memmove((R+0),gp(0x8b7c9c),4);
}
B74ad3b:{NFSU2_TR(0x74ad3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74ad3e:{NFSU2_TR(0x74ad3e);
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
B74ad40:{NFSU2_TR(0x74ad40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ad30u);}goto L74ad30;}}
}
B74ad42:L74ad42:{c.instructions+=2;NFSU2_TR(0x74ad42);
u8 U[4];
w4(U+0,u32(0x8b7c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad47:{NFSU2_TR(0x74ad47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74a100u);}goto L74a100;}
}
B74ad4c:L74ad4c:{c.instructions+=2;NFSU2_TR(0x74ad4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74ad4f:{NFSU2_TR(0x74ad4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ad54ull));
TAIL_STATIC(0x74bb30u,74b);
}
B74ad54:L74ad54:{c.instructions+=1;NFSU2_TR(0x74ad54);
TAIL_STATIC(0x75bc78u,75b);
}
B74ad60:L74ad60:{c.instructions+=28;NFSU2_TR(0x74ad60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B74ad63:{NFSU2_TR(0x74ad63);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74ad68:{NFSU2_TR(0x74ad68);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad6c:{NFSU2_TR(0x74ad6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ad6e:{NFSU2_TR(0x74ad6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B74ad71:{NFSU2_TR(0x74ad71);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad75:{NFSU2_TR(0x74ad75);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad79:{NFSU2_TR(0x74ad79);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74ad7b:{NFSU2_TR(0x74ad7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad7f:{NFSU2_TR(0x74ad7f);
u8 U[5];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74ad83:{NFSU2_TR(0x74ad83);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad85:{NFSU2_TR(0x74ad85);
w1(R+0,u8(0x1ull));
}
B74ad87:{NFSU2_TR(0x74ad87);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad8b:{NFSU2_TR(0x74ad8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74ad8f:{NFSU2_TR(0x74ad8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ad90:{NFSU2_TR(0x74ad90);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74ad94:{NFSU2_TR(0x74ad94);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74ad98:{NFSU2_TR(0x74ad98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ad9c:{NFSU2_TR(0x74ad9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ada0:{NFSU2_TR(0x74ada0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ada4:{NFSU2_TR(0x74ada4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ada6:{NFSU2_TR(0x74ada6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ada7:{NFSU2_TR(0x74ada7);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B74adae:{NFSU2_TR(0x74adae);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x4full));
s1(u32(r4(U+0)),r1(U+4));
}
B74adb3:{NFSU2_TR(0x74adb3);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
w1(U+4,u8(0xa8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74adb8:{NFSU2_TR(0x74adb8);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0xc0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74adbd:{NFSU2_TR(0x74adbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74adc1:{NFSU2_TR(0x74adc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74adc6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ab20u);}goto L74ab20;}
}
B74adc6:L74adc6:{c.instructions+=13;NFSU2_TR(0x74adc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74adca:{NFSU2_TR(0x74adca);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74adcf:{NFSU2_TR(0x74adcf);
w4(R+0,u32(r1(R+4)));
}
B74add2:{NFSU2_TR(0x74add2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74add5:{NFSU2_TR(0x74add5);
w4(R+4,u32(r1(R+5)));
}
B74add8:{NFSU2_TR(0x74add8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B74adda:{NFSU2_TR(0x74adda);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74addf:{NFSU2_TR(0x74addf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74ade2:{NFSU2_TR(0x74ade2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B74ade4:{NFSU2_TR(0x74ade4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74ade7:{NFSU2_TR(0x74ade7);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B74ade9:{NFSU2_TR(0x74ade9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74aded:{NFSU2_TR(0x74aded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74adf2ull));
TAIL_STATIC(0x76115eu,761);
}
B74adf2:L74adf2:{c.instructions+=2;NFSU2_TR(0x74adf2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74adf5:{NFSU2_TR(0x74adf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ae00:L74ae00:{c.instructions+=9;NFSU2_TR(0x74ae00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae01:{NFSU2_TR(0x74ae01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae02:{NFSU2_TR(0x74ae02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74ae05:{NFSU2_TR(0x74ae05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae06:{NFSU2_TR(0x74ae06);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74ae08:{NFSU2_TR(0x74ae08);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ae0a:{NFSU2_TR(0x74ae0a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74ae0c:{NFSU2_TR(0x74ae0c);
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
B74ae0e:{NFSU2_TR(0x74ae0e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74ae42;}}
}
B74ae10:L74ae10:{c.instructions+=6;NFSU2_TR(0x74ae10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae11:{NFSU2_TR(0x74ae11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae12:{NFSU2_TR(0x74ae12);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B74ae16:{NFSU2_TR(0x74ae16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ae1a:{NFSU2_TR(0x74ae1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x37ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ae1d:{NFSU2_TR(0x74ae1d);
__builtin_memmove((R+4),(R+4),4);
}
B74ae20:L74ae20:{c.instructions+=7;NFSU2_TR(0x74ae20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ae24:{NFSU2_TR(0x74ae24);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74ae26:{NFSU2_TR(0x74ae26);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B74ae28:{NFSU2_TR(0x74ae28);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B74ae2a:{NFSU2_TR(0x74ae2a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B74ae30:{NFSU2_TR(0x74ae30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B74ae32:{NFSU2_TR(0x74ae32);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74ae38;}}
}
B74ae34:L74ae34:{c.instructions+=2;NFSU2_TR(0x74ae34);
__builtin_memmove((R+24),(R+4),4);
}
B74ae36:{NFSU2_TR(0x74ae36);
__builtin_memmove((R+0),(R+8),4);
}
B74ae38:L74ae38:{c.instructions+=4;NFSU2_TR(0x74ae38);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74ae39:{NFSU2_TR(0x74ae39);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B74ae3c:{NFSU2_TR(0x74ae3c);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B74ae3e:{NFSU2_TR(0x74ae3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ae20u);}goto L74ae20;}}
}
B74ae40:L74ae40:{c.instructions+=2;NFSU2_TR(0x74ae40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ae41:{NFSU2_TR(0x74ae41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74ae42:L74ae42:{c.instructions+=4;NFSU2_TR(0x74ae42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ae43:{NFSU2_TR(0x74ae43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74ae44:{NFSU2_TR(0x74ae44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74ae45:{NFSU2_TR(0x74ae45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ae50:L74ae50:{c.instructions+=3;NFSU2_TR(0x74ae50);
__builtin_memmove((R+0),gp(0x8b7cac),4);
}
B74ae55:{NFSU2_TR(0x74ae55);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74ae57:{NFSU2_TR(0x74ae57);
if(r1(R+518)){{goto L74ae60;}}
}
B74ae59:L74ae59:{c.instructions+=2;NFSU2_TR(0x74ae59);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8b7cb0),u32(0x1ull)));
s4(0x8b7cb0,u32(u32(m4(0x8b7cb0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8b7cb0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b7cb0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b7cb0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ae5f:{NFSU2_TR(0x74ae5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ae60:L74ae60:{c.instructions+=8;NFSU2_TR(0x74ae60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae61:{NFSU2_TR(0x74ae61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74ae65:{NFSU2_TR(0x74ae65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae66:{NFSU2_TR(0x74ae66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae67:{NFSU2_TR(0x74ae67);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ae6a:{NFSU2_TR(0x74ae6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B74ae6d:{NFSU2_TR(0x74ae6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ae6e:{NFSU2_TR(0x74ae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ae73ull));
TAIL_STATIC(0x5836d0u,583);
}
B74ae73:L74ae73:{c.instructions+=5;NFSU2_TR(0x74ae73);
__builtin_memmove((R+24),(R+0),4);
}
B74ae75:{NFSU2_TR(0x74ae75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74ae78:{NFSU2_TR(0x74ae78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74ae7a:{NFSU2_TR(0x74ae7a);
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
B74ae7c:{NFSU2_TR(0x74ae7c);
if(r1(R+518)){{goto L74aeca;}}
}
B74ae7e:L74ae7e:{c.instructions+=4;NFSU2_TR(0x74ae7e);
__builtin_memmove((R+4),(R+28),4);
}
B74ae80:{NFSU2_TR(0x74ae80);
__builtin_memmove((R+8),(R+4),4);
}
B74ae82:{NFSU2_TR(0x74ae82);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74ae85:{NFSU2_TR(0x74ae85);
__builtin_memmove((R+28),(R+24),4);
}
B74ae87:L74ae87:{c.instructions+=1;NFSU2_TR(0x74ae87);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74ae89;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ae87u);}goto L74ae87;}
}
B74ae89:L74ae89:{c.instructions+=2;NFSU2_TR(0x74ae89);
__builtin_memmove((R+4),(R+8),4);
}
B74ae8b:{NFSU2_TR(0x74ae8b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ae8e:L74ae8e:{c.instructions+=1;NFSU2_TR(0x74ae8e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L74ae90;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ae8eu);}goto L74ae8e;}
}
B74ae90:L74ae90:{c.instructions+=2;NFSU2_TR(0x74ae90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74ae92:{NFSU2_TR(0x74ae92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ae97ull));
TAIL_STATIC(0x74b730u,74b);
}
B74ae97:L74ae97:{c.instructions+=3;NFSU2_TR(0x74ae97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ae9a:{NFSU2_TR(0x74ae9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ae9d:{NFSU2_TR(0x74ae9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aea2ull));
TAIL_STATIC(0x7568f0u,756);
}
B74aea2:L74aea2:{c.instructions+=3;NFSU2_TR(0x74aea2);
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
B74aea4:{NFSU2_TR(0x74aea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74aea7:{NFSU2_TR(0x74aea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74aeb8;}}
}
B74aea9:L74aea9:{c.instructions+=2;NFSU2_TR(0x74aea9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aeaa:{NFSU2_TR(0x74aeaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aeafull));
TAIL_STATIC(0x598ec0u,598);
}
B74aeaf:L74aeaf:{c.instructions+=6;NFSU2_TR(0x74aeaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74aeb2:{NFSU2_TR(0x74aeb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74aeb3:{NFSU2_TR(0x74aeb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74aeb4:{NFSU2_TR(0x74aeb4);
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
B74aeb6:{NFSU2_TR(0x74aeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74aeb7:{NFSU2_TR(0x74aeb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aeb8:L74aeb8:{c.instructions+=3;NFSU2_TR(0x74aeb8);
__builtin_memmove(gp(0x8b7cac),(R+24),4);
}
B74aebe:{NFSU2_TR(0x74aebe);
s4(0x8b7cb0,u32(0x1ull));
}
B74aec8:{NFSU2_TR(0x74aec8);
__builtin_memmove((R+0),(R+24),4);
}
B74aeca:L74aeca:{c.instructions+=4;NFSU2_TR(0x74aeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74aecb:{NFSU2_TR(0x74aecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74aecc:{NFSU2_TR(0x74aecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74aecd:{NFSU2_TR(0x74aecd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74aed0:L74aed0:{c.instructions+=5;NFSU2_TR(0x74aed0);
__builtin_memmove((R+0),gp(0x8b7cb0),4);
}
B74aed5:{NFSU2_TR(0x74aed5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B74aed6:{NFSU2_TR(0x74aed6);
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
B74aed8:{NFSU2_TR(0x74aed8);
__builtin_memmove(gp(0x8b7cb0),(R+0),4);
}
B74aedd:{NFSU2_TR(0x74aedd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74af0b;}}
}
B74aedf:L74aedf:{c.instructions+=5;NFSU2_TR(0x74aedf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aee0:{NFSU2_TR(0x74aee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74aee4:{NFSU2_TR(0x74aee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74aee7:{NFSU2_TR(0x74aee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aee8:{NFSU2_TR(0x74aee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aeedull));
TAIL_STATIC(0x7569e0u,756);
}
B74aeed:L74aeed:{c.instructions+=2;NFSU2_TR(0x74aeed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aeee:{NFSU2_TR(0x74aeee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74aef3ull));
TAIL_STATIC(0x598ec0u,598);
}
B74aef3:L74aef3:{c.instructions+=4;NFSU2_TR(0x74aef3);
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
B74aef6:{NFSU2_TR(0x74aef6);
s4(0x8b7cac,u32(0x0ull));
}
B74af00:{NFSU2_TR(0x74af00);
s4(0x8b7cb0,u32(0x0ull));
}
B74af0a:{NFSU2_TR(0x74af0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74af0b:L74af0b:{c.instructions+=1;NFSU2_TR(0x74af0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74af10:L74af10:{c.instructions+=9;NFSU2_TR(0x74af10);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xc0ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74af16:{NFSU2_TR(0x74af16);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74af1b:{NFSU2_TR(0x74af1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74af1c:{NFSU2_TR(0x74af1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74af23:{NFSU2_TR(0x74af23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74af24:{NFSU2_TR(0x74af24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74af25:{NFSU2_TR(0x74af25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74af26:{NFSU2_TR(0x74af26);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af2d:{NFSU2_TR(0x74af2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74af32ull));
TAIL_STATIC(0x74b730u,74b);
}
B74af32:L74af32:{c.instructions+=10;NFSU2_TR(0x74af32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74af35:{NFSU2_TR(0x74af35);
__builtin_memmove((R+28),(R+0),4);
}
B74af37:{NFSU2_TR(0x74af37);
__builtin_memmove((R+8),(R+28),4);
}
B74af39:{NFSU2_TR(0x74af39);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B74af3b:{NFSU2_TR(0x74af3b);
w4(R+0,u32(0x10624dd3ull));
}
B74af40:{NFSU2_TR(0x74af40);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B74af42:{NFSU2_TR(0x74af42);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B74af45:{NFSU2_TR(0x74af45);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74af47:{NFSU2_TR(0x74af47);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af4b:{NFSU2_TR(0x74af4b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74af60;}}
}
B74af4d:L74af4d:{c.instructions+=6;NFSU2_TR(0x74af4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74af50:{NFSU2_TR(0x74af50);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+8))));
}
B74af52:{NFSU2_TR(0x74af52);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B74af58:{NFSU2_TR(0x74af58);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B74af5a:{NFSU2_TR(0x74af5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74af5d:{NFSU2_TR(0x74af5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af60:L74af60:{c.instructions+=13;NFSU2_TR(0x74af60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74af63:{NFSU2_TR(0x74af63);
__builtin_memmove((R+4),(R+28),4);
}
B74af65:{NFSU2_TR(0x74af65);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74af67:{NFSU2_TR(0x74af67);
w4(R+0,u32(0x51eb851full));
}
B74af6c:{NFSU2_TR(0x74af6c);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B74af6e:{NFSU2_TR(0x74af6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74af71:{NFSU2_TR(0x74af71);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B74af74:{NFSU2_TR(0x74af74);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af78:{NFSU2_TR(0x74af78);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74af7a:{NFSU2_TR(0x74af7a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74af7c:{NFSU2_TR(0x74af7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af80:{NFSU2_TR(0x74af80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74af84:{NFSU2_TR(0x74af84);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74b0adu,74b);}
}
B74af8a:L74af8a:{c.instructions+=7;NFSU2_TR(0x74af8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74af8d:{NFSU2_TR(0x74af8d);
__builtin_memmove((R+4),(R+4),4);
}
B74af90:{NFSU2_TR(0x74af90);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74af93:{NFSU2_TR(0x74af93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74af95:{NFSU2_TR(0x74af95);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74af98:{NFSU2_TR(0x74af98);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74af9a:{NFSU2_TR(0x74af9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74afde;}}
}
B74af9c:L74af9c:{c.instructions+=6;NFSU2_TR(0x74af9c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B74af9e:{NFSU2_TR(0x74af9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74afa1:{NFSU2_TR(0x74afa1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B74afa3:{NFSU2_TR(0x74afa3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B74afa8:{NFSU2_TR(0x74afa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3cull))));
}
B74afab:{NFSU2_TR(0x74afab);
if(r1(R+512)){{goto L74afcd;}}
}
B74afad:L74afad:{c.instructions+=5;NFSU2_TR(0x74afad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74afb0:{NFSU2_TR(0x74afb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B74afb3:{NFSU2_TR(0x74afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B74afb6:{NFSU2_TR(0x74afb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((R+28),(U+0),4);
}
B74afb9:{NFSU2_TR(0x74afb9);
w4(R+4,u32(0x8ull));
}
B74afbe:L74afbe:{c.instructions+=1;NFSU2_TR(0x74afbe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L74afc0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74afbeu);}goto L74afbe;}
}
B74afc0:L74afc0:{c.instructions+=5;NFSU2_TR(0x74afc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74afc3:{NFSU2_TR(0x74afc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74afc7:{NFSU2_TR(0x74afc7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B74afc8:{NFSU2_TR(0x74afc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74afcb:{NFSU2_TR(0x74afcb);
{goto L74afde;}
}
B74afcd:L74afcd:{c.instructions+=5;NFSU2_TR(0x74afcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
w2(U+4,u16(0x8000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B74afd3:{NFSU2_TR(0x74afd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74afd6:{NFSU2_TR(0x74afd6);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B74afd8:{NFSU2_TR(0x74afd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74afdb:{NFSU2_TR(0x74afdb);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+20)),r1(U+0));
}
B74afde:L74afde:{c.instructions+=2;NFSU2_TR(0x74afde);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B74afe2:{NFSU2_TR(0x74afe2);
if(r1(R+518)){TAIL_STATIC(0x74b05fu,74b);}
}
B74afe4:L74afe4:{c.instructions+=3;NFSU2_TR(0x74afe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74afe8:{NFSU2_TR(0x74afe8);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B74afec:{NFSU2_TR(0x74afec);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x74b05fu,74b);}
}
B74afee:L74afee:{c.instructions+=6;NFSU2_TR(0x74afee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74afef:{NFSU2_TR(0x74afef);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74aff4:{NFSU2_TR(0x74aff4);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74aff8:{NFSU2_TR(0x74aff8);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74affd:{NFSU2_TR(0x74affd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74affe:{NFSU2_TR(0x74affe);
u8 U[5];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x74b003u,74b);
}
XIT:NFSU2_TR_EXIT(0x74a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
