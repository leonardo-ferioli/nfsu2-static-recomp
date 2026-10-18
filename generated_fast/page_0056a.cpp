#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_562(u8* __restrict R,Cpu& c);
u32 body_563(u8* __restrict R,Cpu& c);
u32 body_56b(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56a(u8* __restrict R,Cpu& c);
u32 page_56a(Cpu& c){return body_56a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56a001:goto L56a001;
case 0x56a003:goto L56a003;
case 0x56a005:c.instructions+=1;goto B56a005;
case 0x56a00a:goto L56a00a;
case 0x56a00d:c.instructions+=5;goto B56a00d;
case 0x56a00f:c.instructions+=4;goto B56a00f;
case 0x56a014:c.instructions+=3;goto B56a014;
case 0x56a019:c.instructions+=2;goto B56a019;
case 0x56a01a:c.instructions+=1;goto B56a01a;
case 0x56a01f:goto L56a01f;
case 0x56a024:c.instructions+=5;goto B56a024;
case 0x56a026:c.instructions+=4;goto B56a026;
case 0x56a02b:c.instructions+=3;goto B56a02b;
case 0x56a030:c.instructions+=2;goto B56a030;
case 0x56a031:c.instructions+=1;goto B56a031;
case 0x56a036:goto L56a036;
case 0x56a039:c.instructions+=2;goto B56a039;
case 0x56a03b:c.instructions+=1;goto B56a03b;
case 0x56a040:goto L56a040;
case 0x56a041:c.instructions+=4;goto B56a041;
case 0x56a042:c.instructions+=3;goto B56a042;
case 0x56a043:c.instructions+=2;goto B56a043;
case 0x56a044:c.instructions+=1;goto B56a044;
case 0x56a047:goto L56a047;
case 0x56a04d:c.instructions+=1;goto B56a04d;
case 0x56a053:goto L56a053;
case 0x56a059:c.instructions+=1;goto B56a059;
case 0x56a05f:goto L56a05f;
case 0x56a065:c.instructions+=2;goto B56a065;
case 0x56a066:c.instructions+=1;goto B56a066;
case 0x56a06b:goto L56a06b;
case 0x56a06e:c.instructions+=2;goto B56a06e;
case 0x56a070:c.instructions+=1;goto B56a070;
case 0x56a072:goto L56a072;
case 0x56a074:c.instructions+=1;goto B56a074;
case 0x56a079:goto L56a079;
case 0x56a07e:goto L56a07e;
case 0x56a083:goto L56a083;
case 0x56a085:c.instructions+=2;goto B56a085;
case 0x56a087:c.instructions+=1;goto B56a087;
case 0x56a08c:goto L56a08c;
case 0x56a08d:c.instructions+=2;goto B56a08d;
case 0x56a092:c.instructions+=1;goto B56a092;
case 0x56a097:goto L56a097;
case 0x56a099:c.instructions+=1;goto B56a099;
case 0x56a09e:goto L56a09e;
case 0x56a09f:c.instructions+=2;goto B56a09f;
case 0x56a0a4:c.instructions+=1;goto B56a0a4;
case 0x56a0a9:goto L56a0a9;
case 0x56a0ac:c.instructions+=5;goto B56a0ac;
case 0x56a0ae:c.instructions+=4;goto B56a0ae;
case 0x56a0b3:c.instructions+=3;goto B56a0b3;
case 0x56a0b8:c.instructions+=2;goto B56a0b8;
case 0x56a0b9:c.instructions+=1;goto B56a0b9;
case 0x56a0be:goto L56a0be;
case 0x56a0c3:c.instructions+=5;goto B56a0c3;
case 0x56a0c5:c.instructions+=4;goto B56a0c5;
case 0x56a0ca:c.instructions+=3;goto B56a0ca;
case 0x56a0cf:c.instructions+=2;goto B56a0cf;
case 0x56a0d0:c.instructions+=1;goto B56a0d0;
case 0x56a0d5:goto L56a0d5;
case 0x56a0d8:c.instructions+=2;goto B56a0d8;
case 0x56a0da:c.instructions+=1;goto B56a0da;
case 0x56a0df:goto L56a0df;
case 0x56a0e1:c.instructions+=1;goto B56a0e1;
case 0x56a0e6:goto L56a0e6;
case 0x56a0e7:c.instructions+=4;goto B56a0e7;
case 0x56a0e8:c.instructions+=3;goto B56a0e8;
case 0x56a0e9:c.instructions+=2;goto B56a0e9;
case 0x56a0ea:c.instructions+=1;goto B56a0ea;
case 0x56a0ed:goto L56a0ed;
case 0x56a0f2:goto L56a0f2;
case 0x56a0f9:c.instructions+=2;goto B56a0f9;
case 0x56a0fb:c.instructions+=1;goto B56a0fb;
case 0x56a100:goto L56a100;
case 0x56a103:c.instructions+=4;goto B56a103;
case 0x56a106:c.instructions+=3;goto B56a106;
case 0x56a108:c.instructions+=2;goto B56a108;
case 0x56a109:c.instructions+=1;goto B56a109;
case 0x56a10c:goto L56a10c;
case 0x56a10d:c.instructions+=4;goto B56a10d;
case 0x56a10e:c.instructions+=3;goto B56a10e;
case 0x56a10f:c.instructions+=2;goto B56a10f;
case 0x56a110:c.instructions+=1;goto B56a110;
case 0x56a113:goto L56a113;
case 0x56a119:c.instructions+=2;goto B56a119;
case 0x56a11b:c.instructions+=1;goto B56a11b;
case 0x56a121:goto L56a121;
case 0x56a123:c.instructions+=1;goto B56a123;
case 0x56a128:goto L56a128;
case 0x56a12f:c.instructions+=2;goto B56a12f;
case 0x56a132:c.instructions+=1;goto B56a132;
case 0x56a138:goto L56a138;
case 0x56a13e:c.instructions+=2;goto B56a13e;
case 0x56a13f:c.instructions+=1;goto B56a13f;
case 0x56a144:goto L56a144;
case 0x56a145:c.instructions+=4;goto B56a145;
case 0x56a146:c.instructions+=3;goto B56a146;
case 0x56a147:c.instructions+=2;goto B56a147;
case 0x56a148:c.instructions+=1;goto B56a148;
case 0x56a14b:goto L56a14b;
case 0x56a151:c.instructions+=1;goto B56a151;
case 0x56a157:goto L56a157;
case 0x56a15d:goto L56a15d;
case 0x56a163:c.instructions+=1;goto B56a163;
case 0x56a165:goto L56a165;
case 0x56a16b:c.instructions+=1;goto B56a16b;
case 0x56a16d:goto L56a16d;
case 0x56a173:c.instructions+=1;goto B56a173;
case 0x56a179:goto L56a179;
case 0x56a17f:c.instructions+=3;goto B56a17f;
case 0x56a180:c.instructions+=2;goto B56a180;
case 0x56a185:c.instructions+=1;goto B56a185;
case 0x56a18a:goto L56a18a;
case 0x56a18c:c.instructions+=1;goto B56a18c;
case 0x56a18e:goto L56a18e;
case 0x56a191:c.instructions+=2;goto B56a191;
case 0x56a193:c.instructions+=1;goto B56a193;
case 0x56a195:goto L56a195;
case 0x56a198:c.instructions+=1;goto B56a198;
case 0x56a19d:goto L56a19d;
case 0x56a1a1:goto L56a1a1;
case 0x56a1a4:c.instructions+=5;goto B56a1a4;
case 0x56a1a6:c.instructions+=4;goto B56a1a6;
case 0x56a1ab:c.instructions+=3;goto B56a1ab;
case 0x56a1b0:c.instructions+=2;goto B56a1b0;
case 0x56a1b1:c.instructions+=1;goto B56a1b1;
case 0x56a1b6:goto L56a1b6;
case 0x56a1bb:c.instructions+=5;goto B56a1bb;
case 0x56a1bd:c.instructions+=4;goto B56a1bd;
case 0x56a1c2:c.instructions+=3;goto B56a1c2;
case 0x56a1c7:c.instructions+=2;goto B56a1c7;
case 0x56a1c8:c.instructions+=1;goto B56a1c8;
case 0x56a1cd:goto L56a1cd;
case 0x56a1d0:c.instructions+=1;goto B56a1d0;
case 0x56a1d5:goto L56a1d5;
case 0x56a1da:goto L56a1da;
case 0x56a1db:c.instructions+=4;goto B56a1db;
case 0x56a1dc:c.instructions+=3;goto B56a1dc;
case 0x56a1dd:c.instructions+=2;goto B56a1dd;
case 0x56a1de:c.instructions+=1;goto B56a1de;
case 0x56a1e1:goto L56a1e1;
case 0x56a1e7:c.instructions+=2;goto B56a1e7;
case 0x56a1e9:c.instructions+=1;goto B56a1e9;
case 0x56a1ef:goto L56a1ef;
case 0x56a1f1:c.instructions+=1;goto B56a1f1;
case 0x56a1f6:goto L56a1f6;
case 0x56a1f9:c.instructions+=3;goto B56a1f9;
case 0x56a1fb:c.instructions+=2;goto B56a1fb;
case 0x56a1fc:c.instructions+=1;goto B56a1fc;
case 0x56a201:goto L56a201;
case 0x56a204:c.instructions+=5;goto B56a204;
case 0x56a205:c.instructions+=4;goto B56a205;
case 0x56a206:c.instructions+=3;goto B56a206;
case 0x56a207:c.instructions+=2;goto B56a207;
case 0x56a208:c.instructions+=1;goto B56a208;
case 0x56a20b:goto L56a20b;
case 0x56a211:c.instructions+=2;goto B56a211;
case 0x56a213:c.instructions+=1;goto B56a213;
case 0x56a219:goto L56a219;
case 0x56a21f:c.instructions+=3;goto B56a21f;
case 0x56a220:c.instructions+=2;goto B56a220;
case 0x56a225:c.instructions+=1;goto B56a225;
case 0x56a22a:goto L56a22a;
case 0x56a22c:c.instructions+=1;goto B56a22c;
case 0x56a22e:goto L56a22e;
case 0x56a231:c.instructions+=2;goto B56a231;
case 0x56a233:c.instructions+=1;goto B56a233;
case 0x56a235:goto L56a235;
case 0x56a23a:goto L56a23a;
case 0x56a23f:goto L56a23f;
case 0x56a246:goto L56a246;
case 0x56a249:c.instructions+=10;goto B56a249;
case 0x56a24c:c.instructions+=9;goto B56a24c;
case 0x56a24d:c.instructions+=8;goto B56a24d;
case 0x56a253:c.instructions+=7;goto B56a253;
case 0x56a25d:c.instructions+=6;goto B56a25d;
case 0x56a260:c.instructions+=5;goto B56a260;
case 0x56a266:c.instructions+=4;goto B56a266;
case 0x56a267:c.instructions+=3;goto B56a267;
case 0x56a268:c.instructions+=2;goto B56a268;
case 0x56a269:c.instructions+=1;goto B56a269;
case 0x56a26c:goto L56a26c;
case 0x56a272:c.instructions+=1;goto B56a272;
case 0x56a274:goto L56a274;
case 0x56a27a:c.instructions+=1;goto B56a27a;
case 0x56a27c:goto L56a27c;
case 0x56a282:c.instructions+=2;goto B56a282;
case 0x56a284:c.instructions+=1;goto B56a284;
case 0x56a286:goto L56a286;
case 0x56a28c:c.instructions+=2;goto B56a28c;
case 0x56a291:c.instructions+=1;goto B56a291;
case 0x56a293:goto L56a293;
case 0x56a298:c.instructions+=1;goto B56a298;
case 0x56a29a:goto L56a29a;
case 0x56a2a0:c.instructions+=3;goto B56a2a0;
case 0x56a2a1:c.instructions+=2;goto B56a2a1;
case 0x56a2a6:c.instructions+=1;goto B56a2a6;
case 0x56a2ab:goto L56a2ab;
case 0x56a2ae:c.instructions+=6;goto B56a2ae;
case 0x56a2af:c.instructions+=5;goto B56a2af;
case 0x56a2b6:c.instructions+=4;goto B56a2b6;
case 0x56a2b7:c.instructions+=3;goto B56a2b7;
case 0x56a2b8:c.instructions+=2;goto B56a2b8;
case 0x56a2b9:c.instructions+=1;goto B56a2b9;
case 0x56a2bc:goto L56a2bc;
case 0x56a2bd:c.instructions+=6;goto B56a2bd;
case 0x56a2c4:c.instructions+=5;goto B56a2c4;
case 0x56a2c5:c.instructions+=4;goto B56a2c5;
case 0x56a2cc:c.instructions+=3;goto B56a2cc;
case 0x56a2cd:c.instructions+=2;goto B56a2cd;
case 0x56a2ce:c.instructions+=1;goto B56a2ce;
case 0x56a2d1:goto L56a2d1;
case 0x56a2d7:c.instructions+=2;goto B56a2d7;
case 0x56a2d9:c.instructions+=1;goto B56a2d9;
case 0x56a2db:goto L56a2db;
case 0x56a2e0:c.instructions+=2;goto B56a2e0;
case 0x56a2e2:c.instructions+=1;goto B56a2e2;
case 0x56a2e4:goto L56a2e4;
case 0x56a2ea:c.instructions+=2;goto B56a2ea;
case 0x56a2ec:c.instructions+=1;goto B56a2ec;
case 0x56a2ee:goto L56a2ee;
case 0x56a2f1:c.instructions+=2;goto B56a2f1;
case 0x56a2f2:c.instructions+=1;goto B56a2f2;
case 0x56a2f7:goto L56a2f7;
case 0x56a2f8:c.instructions+=4;goto B56a2f8;
case 0x56a2f9:c.instructions+=3;goto B56a2f9;
case 0x56a2fa:c.instructions+=2;goto B56a2fa;
case 0x56a2fb:c.instructions+=1;goto B56a2fb;
case 0x56a300:goto L56a300;
case 0x56a301:c.instructions+=8;goto B56a301;
case 0x56a303:c.instructions+=7;goto B56a303;
case 0x56a304:c.instructions+=6;goto B56a304;
case 0x56a305:c.instructions+=5;goto B56a305;
case 0x56a306:c.instructions+=4;goto B56a306;
case 0x56a309:c.instructions+=3;goto B56a309;
case 0x56a30f:c.instructions+=2;goto B56a30f;
case 0x56a311:c.instructions+=1;goto B56a311;
case 0x56a317:goto L56a317;
case 0x56a31d:goto L56a31d;
case 0x56a323:c.instructions+=1;goto B56a323;
case 0x56a329:goto L56a329;
case 0x56a32f:goto L56a32f;
case 0x56a335:c.instructions+=1;goto B56a335;
case 0x56a337:goto L56a337;
case 0x56a33d:goto L56a33d;
case 0x56a343:c.instructions+=1;goto B56a343;
case 0x56a345:goto L56a345;
case 0x56a34b:c.instructions+=1;goto B56a34b;
case 0x56a34d:goto L56a34d;
case 0x56a34e:c.instructions+=4;goto B56a34e;
case 0x56a34f:c.instructions+=3;goto B56a34f;
case 0x56a350:c.instructions+=2;goto B56a350;
case 0x56a351:c.instructions+=1;goto B56a351;
case 0x56a354:goto L56a354;
case 0x56a357:c.instructions+=7;goto B56a357;
case 0x56a35a:c.instructions+=6;goto B56a35a;
case 0x56a360:c.instructions+=5;goto B56a360;
case 0x56a363:c.instructions+=4;goto B56a363;
case 0x56a364:c.instructions+=3;goto B56a364;
case 0x56a365:c.instructions+=2;goto B56a365;
case 0x56a36a:c.instructions+=1;goto B56a36a;
case 0x56a36f:goto L56a36f;
case 0x56a370:c.instructions+=3;goto B56a370;
case 0x56a371:c.instructions+=2;goto B56a371;
case 0x56a376:c.instructions+=1;goto B56a376;
case 0x56a37b:goto L56a37b;
case 0x56a37c:c.instructions+=2;goto B56a37c;
case 0x56a381:c.instructions+=1;goto B56a381;
case 0x56a386:goto L56a386;
case 0x56a38c:c.instructions+=3;goto B56a38c;
case 0x56a38d:c.instructions+=2;goto B56a38d;
case 0x56a392:c.instructions+=1;goto B56a392;
case 0x56a397:goto L56a397;
case 0x56a39a:c.instructions+=7;goto B56a39a;
case 0x56a39b:c.instructions+=6;goto B56a39b;
case 0x56a3a2:c.instructions+=5;goto B56a3a2;
case 0x56a3a9:c.instructions+=4;goto B56a3a9;
case 0x56a3aa:c.instructions+=3;goto B56a3aa;
case 0x56a3ab:c.instructions+=2;goto B56a3ab;
case 0x56a3ac:c.instructions+=1;goto B56a3ac;
case 0x56a3af:goto L56a3af;
case 0x56a3b5:c.instructions+=1;goto B56a3b5;
case 0x56a3bb:goto L56a3bb;
case 0x56a3be:c.instructions+=3;goto B56a3be;
case 0x56a3c1:c.instructions+=2;goto B56a3c1;
case 0x56a3c3:c.instructions+=1;goto B56a3c3;
case 0x56a3c9:goto L56a3c9;
case 0x56a3cf:c.instructions+=5;goto B56a3cf;
case 0x56a3d2:c.instructions+=4;goto B56a3d2;
case 0x56a3d4:c.instructions+=3;goto B56a3d4;
case 0x56a3d7:c.instructions+=2;goto B56a3d7;
case 0x56a3da:c.instructions+=1;goto B56a3da;
case 0x56a3e0:goto L56a3e0;
case 0x56a3e6:c.instructions+=1;goto B56a3e6;
case 0x56a3ec:goto L56a3ec;
case 0x56a3ed:c.instructions+=3;goto B56a3ed;
case 0x56a3ee:c.instructions+=2;goto B56a3ee;
case 0x56a3f3:c.instructions+=1;goto B56a3f3;
case 0x56a3f8:goto L56a3f8;
case 0x56a3fa:c.instructions+=1;goto B56a3fa;
case 0x56a3fc:goto L56a3fc;
case 0x56a3ff:c.instructions+=4;goto B56a3ff;
case 0x56a404:c.instructions+=3;goto B56a404;
case 0x56a409:c.instructions+=2;goto B56a409;
case 0x56a40a:c.instructions+=1;goto B56a40a;
case 0x56a40c:goto L56a40c;
case 0x56a413:c.instructions+=1;goto B56a413;
case 0x56a419:goto L56a419;
case 0x56a41a:c.instructions+=3;goto B56a41a;
case 0x56a41b:c.instructions+=2;goto B56a41b;
case 0x56a420:c.instructions+=1;goto B56a420;
case 0x56a425:goto L56a425;
case 0x56a427:c.instructions+=1;goto B56a427;
case 0x56a42d:goto L56a42d;
case 0x56a431:c.instructions+=1;goto B56a431;
case 0x56a437:goto L56a437;
case 0x56a43c:c.instructions+=5;goto B56a43c;
case 0x56a43d:c.instructions+=4;goto B56a43d;
case 0x56a43e:c.instructions+=3;goto B56a43e;
case 0x56a443:c.instructions+=2;goto B56a443;
case 0x56a446:c.instructions+=1;goto B56a446;
case 0x56a44b:goto L56a44b;
case 0x56a44e:c.instructions+=1;goto B56a44e;
case 0x56a450:goto L56a450;
case 0x56a453:c.instructions+=3;goto B56a453;
case 0x56a458:c.instructions+=2;goto B56a458;
case 0x56a45d:c.instructions+=1;goto B56a45d;
case 0x56a45e:goto L56a45e;
case 0x56a463:goto L56a463;
case 0x56a466:c.instructions+=3;goto B56a466;
case 0x56a468:c.instructions+=2;goto B56a468;
case 0x56a472:c.instructions+=1;goto B56a472;
case 0x56a477:goto L56a477;
case 0x56a478:c.instructions+=4;goto B56a478;
case 0x56a479:c.instructions+=3;goto B56a479;
case 0x56a47a:c.instructions+=2;goto B56a47a;
case 0x56a47b:c.instructions+=1;goto B56a47b;
case 0x56a47e:goto L56a47e;
case 0x56a481:c.instructions+=2;goto B56a481;
case 0x56a486:c.instructions+=1;goto B56a486;
case 0x56a488:goto L56a488;
case 0x56a489:c.instructions+=2;goto B56a489;
case 0x56a48e:c.instructions+=1;goto B56a48e;
case 0x56a493:goto L56a493;
case 0x56a495:c.instructions+=1;goto B56a495;
case 0x56a497:goto L56a497;
case 0x56a49c:c.instructions+=1;goto B56a49c;
case 0x56a49e:goto L56a49e;
case 0x56a4a1:c.instructions+=5;goto B56a4a1;
case 0x56a4a3:c.instructions+=4;goto B56a4a3;
case 0x56a4a5:c.instructions+=3;goto B56a4a5;
case 0x56a4a7:c.instructions+=2;goto B56a4a7;
case 0x56a4ac:c.instructions+=1;goto B56a4ac;
case 0x56a4b1:goto L56a4b1;
case 0x56a4b4:c.instructions+=10;goto B56a4b4;
case 0x56a4b5:c.instructions+=9;goto B56a4b5;
case 0x56a4b7:c.instructions+=8;goto B56a4b7;
case 0x56a4bc:c.instructions+=7;goto B56a4bc;
case 0x56a4c1:c.instructions+=6;goto B56a4c1;
case 0x56a4c6:c.instructions+=5;goto B56a4c6;
case 0x56a4cb:c.instructions+=4;goto B56a4cb;
case 0x56a4d0:c.instructions+=3;goto B56a4d0;
case 0x56a4d5:c.instructions+=2;goto B56a4d5;
case 0x56a4d6:c.instructions+=1;goto B56a4d6;
case 0x56a4d8:goto L56a4d8;
case 0x56a4db:c.instructions+=2;goto B56a4db;
case 0x56a4e0:c.instructions+=1;goto B56a4e0;
case 0x56a4e2:goto L56a4e2;
case 0x56a4e3:c.instructions+=2;goto B56a4e3;
case 0x56a4e8:c.instructions+=1;goto B56a4e8;
case 0x56a4ed:goto L56a4ed;
case 0x56a4ef:c.instructions+=1;goto B56a4ef;
case 0x56a4f1:goto L56a4f1;
case 0x56a4f6:c.instructions+=1;goto B56a4f6;
case 0x56a4f8:goto L56a4f8;
case 0x56a4fa:c.instructions+=1;goto B56a4fa;
case 0x56a4fc:goto L56a4fc;
case 0x56a500:c.instructions+=2;goto B56a500;
case 0x56a505:c.instructions+=1;goto B56a505;
case 0x56a507:goto L56a507;
case 0x56a50c:goto L56a50c;
case 0x56a50d:c.instructions+=9;goto B56a50d;
case 0x56a510:c.instructions+=8;goto B56a510;
case 0x56a512:c.instructions+=7;goto B56a512;
case 0x56a517:c.instructions+=6;goto B56a517;
case 0x56a51c:c.instructions+=5;goto B56a51c;
case 0x56a521:c.instructions+=4;goto B56a521;
case 0x56a526:c.instructions+=3;goto B56a526;
case 0x56a52b:c.instructions+=2;goto B56a52b;
case 0x56a530:c.instructions+=1;goto B56a530;
case 0x56a531:goto L56a531;
case 0x56a536:goto L56a536;
case 0x56a539:c.instructions+=3;goto B56a539;
case 0x56a53b:c.instructions+=2;goto B56a53b;
case 0x56a545:c.instructions+=1;goto B56a545;
case 0x56a54a:goto L56a54a;
case 0x56a54b:c.instructions+=4;goto B56a54b;
case 0x56a54c:c.instructions+=3;goto B56a54c;
case 0x56a54d:c.instructions+=2;goto B56a54d;
case 0x56a54e:c.instructions+=1;goto B56a54e;
case 0x56a551:goto L56a551;
case 0x56a554:c.instructions+=7;goto B56a554;
case 0x56a557:c.instructions+=6;goto B56a557;
case 0x56a55d:c.instructions+=5;goto B56a55d;
case 0x56a560:c.instructions+=4;goto B56a560;
case 0x56a561:c.instructions+=3;goto B56a561;
case 0x56a562:c.instructions+=2;goto B56a562;
case 0x56a567:c.instructions+=1;goto B56a567;
case 0x56a56c:goto L56a56c;
case 0x56a56d:c.instructions+=2;goto B56a56d;
case 0x56a572:c.instructions+=1;goto B56a572;
case 0x56a577:goto L56a577;
case 0x56a578:c.instructions+=6;goto B56a578;
case 0x56a57f:c.instructions+=5;goto B56a57f;
case 0x56a586:c.instructions+=4;goto B56a586;
case 0x56a587:c.instructions+=3;goto B56a587;
case 0x56a588:c.instructions+=2;goto B56a588;
case 0x56a589:c.instructions+=1;goto B56a589;
case 0x56a58c:goto L56a58c;
case 0x56a592:c.instructions+=1;goto B56a592;
case 0x56a598:goto L56a598;
case 0x56a59e:c.instructions+=1;goto B56a59e;
case 0x56a5a0:goto L56a5a0;
case 0x56a5a6:c.instructions+=1;goto B56a5a6;
case 0x56a5ac:goto L56a5ac;
case 0x56a5b1:c.instructions+=2;goto B56a5b1;
case 0x56a5b2:c.instructions+=1;goto B56a5b2;
case 0x56a5b7:goto L56a5b7;
case 0x56a5ba:c.instructions+=5;goto B56a5ba;
case 0x56a5bb:c.instructions+=4;goto B56a5bb;
case 0x56a5bc:c.instructions+=3;goto B56a5bc;
case 0x56a5bd:c.instructions+=2;goto B56a5bd;
case 0x56a5be:c.instructions+=1;goto B56a5be;
case 0x56a5c1:goto L56a5c1;
case 0x56a5c6:c.instructions+=3;goto B56a5c6;
case 0x56a5c8:c.instructions+=2;goto B56a5c8;
case 0x56a5ca:c.instructions+=1;goto B56a5ca;
case 0x56a5cf:goto L56a5cf;
case 0x56a5d4:c.instructions+=3;goto B56a5d4;
case 0x56a5d6:c.instructions+=2;goto B56a5d6;
case 0x56a5d8:c.instructions+=1;goto B56a5d8;
case 0x56a5dd:goto L56a5dd;
case 0x56a5e0:c.instructions+=4;goto B56a5e0;
case 0x56a5e5:c.instructions+=3;goto B56a5e5;
case 0x56a5ea:c.instructions+=2;goto B56a5ea;
case 0x56a5eb:c.instructions+=1;goto B56a5eb;
case 0x56a5f0:goto L56a5f0;
case 0x56a5f3:c.instructions+=2;goto B56a5f3;
case 0x56a5f5:c.instructions+=1;goto B56a5f5;
case 0x56a5fb:goto L56a5fb;
case 0x56a5fe:c.instructions+=5;goto B56a5fe;
case 0x56a600:c.instructions+=4;goto B56a600;
case 0x56a605:c.instructions+=3;goto B56a605;
case 0x56a60a:c.instructions+=2;goto B56a60a;
case 0x56a60b:c.instructions+=1;goto B56a60b;
case 0x56a610:goto L56a610;
case 0x56a613:c.instructions+=5;goto B56a613;
case 0x56a614:c.instructions+=4;goto B56a614;
case 0x56a615:c.instructions+=3;goto B56a615;
case 0x56a616:c.instructions+=2;goto B56a616;
case 0x56a617:c.instructions+=1;goto B56a617;
case 0x56a61a:goto L56a61a;
case 0x56a61c:c.instructions+=2;goto B56a61c;
case 0x56a61e:c.instructions+=1;goto B56a61e;
case 0x56a623:goto L56a623;
case 0x56a624:c.instructions+=4;goto B56a624;
case 0x56a625:c.instructions+=3;goto B56a625;
case 0x56a626:c.instructions+=2;goto B56a626;
case 0x56a627:c.instructions+=1;goto B56a627;
case 0x56a62a:goto L56a62a;
case 0x56a62c:c.instructions+=2;goto B56a62c;
case 0x56a62e:c.instructions+=1;goto B56a62e;
case 0x56a633:goto L56a633;
case 0x56a634:c.instructions+=4;goto B56a634;
case 0x56a635:c.instructions+=3;goto B56a635;
case 0x56a636:c.instructions+=2;goto B56a636;
case 0x56a637:c.instructions+=1;goto B56a637;
case 0x56a63a:goto L56a63a;
case 0x56a640:c.instructions+=1;goto B56a640;
case 0x56a646:goto L56a646;
case 0x56a64c:goto L56a64c;
case 0x56a652:c.instructions+=1;goto B56a652;
case 0x56a658:goto L56a658;
case 0x56a65e:c.instructions+=1;goto B56a65e;
case 0x56a660:goto L56a660;
case 0x56a666:c.instructions+=1;goto B56a666;
case 0x56a66c:goto L56a66c;
case 0x56a66e:c.instructions+=1;goto B56a66e;
case 0x56a673:goto L56a673;
case 0x56a674:c.instructions+=4;goto B56a674;
case 0x56a675:c.instructions+=3;goto B56a675;
case 0x56a676:c.instructions+=2;goto B56a676;
case 0x56a677:c.instructions+=1;goto B56a677;
case 0x56a67a:goto L56a67a;
case 0x56a680:c.instructions+=1;goto B56a680;
case 0x56a685:goto L56a685;
case 0x56a68b:c.instructions+=5;goto B56a68b;
case 0x56a691:c.instructions+=4;goto B56a691;
case 0x56a697:c.instructions+=3;goto B56a697;
case 0x56a699:c.instructions+=2;goto B56a699;
case 0x56a69c:c.instructions+=1;goto B56a69c;
case 0x56a69e:goto L56a69e;
case 0x56a6a0:c.instructions+=2;goto B56a6a0;
case 0x56a6a5:c.instructions+=1;goto B56a6a5;
case 0x56a6a7:goto L56a6a7;
case 0x56a6ad:c.instructions+=3;goto B56a6ad;
case 0x56a6af:c.instructions+=2;goto B56a6af;
case 0x56a6b2:c.instructions+=1;goto B56a6b2;
case 0x56a6b4:goto L56a6b4;
case 0x56a6b7:goto L56a6b7;
case 0x56a6ba:c.instructions+=2;goto B56a6ba;
case 0x56a6bd:c.instructions+=1;goto B56a6bd;
case 0x56a6bf:goto L56a6bf;
case 0x56a6c6:c.instructions+=1;goto B56a6c6;
case 0x56a6cd:goto L56a6cd;
case 0x56a6ce:c.instructions+=2;goto B56a6ce;
case 0x56a6d0:c.instructions+=1;goto B56a6d0;
case 0x56a6d5:goto L56a6d5;
case 0x56a6d7:goto L56a6d7;
case 0x56a6dc:c.instructions+=3;goto B56a6dc;
case 0x56a6de:c.instructions+=2;goto B56a6de;
case 0x56a6e0:c.instructions+=1;goto B56a6e0;
case 0x56a6e2:goto L56a6e2;
case 0x56a6e4:c.instructions+=2;goto B56a6e4;
case 0x56a6e6:c.instructions+=1;goto B56a6e6;
case 0x56a6eb:goto L56a6eb;
case 0x56a6f0:c.instructions+=3;goto B56a6f0;
case 0x56a6f1:c.instructions+=2;goto B56a6f1;
case 0x56a6f3:c.instructions+=1;goto B56a6f3;
case 0x56a6f5:goto L56a6f5;
case 0x56a6f7:goto L56a6f7;
case 0x56a6fc:c.instructions+=3;goto B56a6fc;
case 0x56a6fe:c.instructions+=2;goto B56a6fe;
case 0x56a700:c.instructions+=1;goto B56a700;
case 0x56a702:goto L56a702;
case 0x56a704:c.instructions+=2;goto B56a704;
case 0x56a706:c.instructions+=1;goto B56a706;
case 0x56a70b:goto L56a70b;
case 0x56a710:c.instructions+=3;goto B56a710;
case 0x56a711:c.instructions+=2;goto B56a711;
case 0x56a713:c.instructions+=1;goto B56a713;
case 0x56a715:goto L56a715;
case 0x56a71b:c.instructions+=2;goto B56a71b;
case 0x56a71c:c.instructions+=1;goto B56a71c;
case 0x56a721:goto L56a721;
case 0x56a724:c.instructions+=2;goto B56a724;
case 0x56a726:c.instructions+=1;goto B56a726;
case 0x56a72c:goto L56a72c;
case 0x56a72f:c.instructions+=3;goto B56a72f;
case 0x56a730:c.instructions+=2;goto B56a730;
case 0x56a735:c.instructions+=1;goto B56a735;
case 0x56a73a:goto L56a73a;
case 0x56a73d:c.instructions+=5;goto B56a73d;
case 0x56a73e:c.instructions+=4;goto B56a73e;
case 0x56a73f:c.instructions+=3;goto B56a73f;
case 0x56a740:c.instructions+=2;goto B56a740;
case 0x56a741:c.instructions+=1;goto B56a741;
case 0x56a744:goto L56a744;
case 0x56a746:c.instructions+=1;goto B56a746;
case 0x56a74b:goto L56a74b;
case 0x56a751:c.instructions+=4;goto B56a751;
case 0x56a753:c.instructions+=3;goto B56a753;
case 0x56a754:c.instructions+=2;goto B56a754;
case 0x56a755:c.instructions+=1;goto B56a755;
case 0x56a75a:goto L56a75a;
case 0x56a75d:c.instructions+=5;goto B56a75d;
case 0x56a75e:c.instructions+=4;goto B56a75e;
case 0x56a75f:c.instructions+=3;goto B56a75f;
case 0x56a760:c.instructions+=2;goto B56a760;
case 0x56a761:c.instructions+=1;goto B56a761;
case 0x56a764:goto L56a764;
case 0x56a76a:c.instructions+=1;goto B56a76a;
case 0x56a770:goto L56a770;
case 0x56a776:c.instructions+=1;goto B56a776;
case 0x56a778:goto L56a778;
case 0x56a77e:c.instructions+=1;goto B56a77e;
case 0x56a784:goto L56a784;
case 0x56a789:c.instructions+=2;goto B56a789;
case 0x56a790:c.instructions+=1;goto B56a790;
case 0x56a795:goto L56a795;
case 0x56a796:c.instructions+=4;goto B56a796;
case 0x56a797:c.instructions+=3;goto B56a797;
case 0x56a798:c.instructions+=2;goto B56a798;
case 0x56a799:c.instructions+=1;goto B56a799;
case 0x56a79c:goto L56a79c;
case 0x56a7a2:c.instructions+=2;goto B56a7a2;
case 0x56a7a4:c.instructions+=1;goto B56a7a4;
case 0x56a7a6:goto L56a7a6;
case 0x56a7ab:c.instructions+=3;goto B56a7ab;
case 0x56a7ad:c.instructions+=2;goto B56a7ad;
case 0x56a7af:c.instructions+=1;goto B56a7af;
case 0x56a7b4:goto L56a7b4;
case 0x56a7b9:c.instructions+=3;goto B56a7b9;
case 0x56a7bb:c.instructions+=2;goto B56a7bb;
case 0x56a7bd:c.instructions+=1;goto B56a7bd;
case 0x56a7c2:goto L56a7c2;
case 0x56a7c8:c.instructions+=3;goto B56a7c8;
case 0x56a7cb:c.instructions+=2;goto B56a7cb;
case 0x56a7cd:c.instructions+=1;goto B56a7cd;
case 0x56a7cf:goto L56a7cf;
case 0x56a7d4:c.instructions+=3;goto B56a7d4;
case 0x56a7d5:c.instructions+=2;goto B56a7d5;
case 0x56a7da:c.instructions+=1;goto B56a7da;
case 0x56a7dc:goto L56a7dc;
case 0x56a7e2:c.instructions+=2;goto B56a7e2;
case 0x56a7e3:c.instructions+=1;goto B56a7e3;
case 0x56a7e8:goto L56a7e8;
case 0x56a7ed:goto L56a7ed;
case 0x56a7f0:c.instructions+=4;goto B56a7f0;
case 0x56a7f3:c.instructions+=3;goto B56a7f3;
case 0x56a7f4:c.instructions+=2;goto B56a7f4;
case 0x56a7fb:c.instructions+=1;goto B56a7fb;
case 0x56a800:goto L56a800;
case 0x56a802:c.instructions+=2;goto B56a802;
case 0x56a804:c.instructions+=1;goto B56a804;
case 0x56a809:goto L56a809;
case 0x56a80c:c.instructions+=5;goto B56a80c;
case 0x56a80d:c.instructions+=4;goto B56a80d;
case 0x56a80e:c.instructions+=3;goto B56a80e;
case 0x56a80f:c.instructions+=2;goto B56a80f;
case 0x56a810:c.instructions+=1;goto B56a810;
case 0x56a813:goto L56a813;
case 0x56a816:c.instructions+=1;goto B56a816;
case 0x56a81b:goto L56a81b;
case 0x56a81c:c.instructions+=4;goto B56a81c;
case 0x56a81d:c.instructions+=3;goto B56a81d;
case 0x56a81e:c.instructions+=2;goto B56a81e;
case 0x56a81f:c.instructions+=1;goto B56a81f;
case 0x56a822:goto L56a822;
case 0x56a827:c.instructions+=2;goto B56a827;
case 0x56a82c:c.instructions+=1;goto B56a82c;
case 0x56a831:goto L56a831;
case 0x56a833:c.instructions+=3;goto B56a833;
case 0x56a835:c.instructions+=2;goto B56a835;
case 0x56a83a:c.instructions+=1;goto B56a83a;
case 0x56a83f:goto L56a83f;
case 0x56a842:goto L56a842;
case 0x56a843:c.instructions+=4;goto B56a843;
case 0x56a844:c.instructions+=3;goto B56a844;
case 0x56a845:c.instructions+=2;goto B56a845;
case 0x56a846:c.instructions+=1;goto B56a846;
case 0x56a880:goto L56a880;
case 0x56a881:c.instructions+=8;goto B56a881;
case 0x56a883:c.instructions+=7;goto B56a883;
case 0x56a884:c.instructions+=6;goto B56a884;
case 0x56a886:c.instructions+=5;goto B56a886;
case 0x56a88c:c.instructions+=4;goto B56a88c;
case 0x56a88e:c.instructions+=3;goto B56a88e;
case 0x56a88f:c.instructions+=2;goto B56a88f;
case 0x56a892:c.instructions+=1;goto B56a892;
case 0x56a894:goto L56a894;
case 0x56a897:c.instructions+=8;goto B56a897;
case 0x56a89a:c.instructions+=7;goto B56a89a;
case 0x56a89d:c.instructions+=6;goto B56a89d;
case 0x56a89e:c.instructions+=5;goto B56a89e;
case 0x56a89f:c.instructions+=4;goto B56a89f;
case 0x56a8a0:c.instructions+=3;goto B56a8a0;
case 0x56a8a1:c.instructions+=2;goto B56a8a1;
case 0x56a8a3:c.instructions+=1;goto B56a8a3;
case 0x56a8a8:goto L56a8a8;
case 0x56a8ae:c.instructions+=1;goto B56a8ae;
case 0x56a8b4:goto L56a8b4;
case 0x56a8ba:goto L56a8ba;
case 0x56a8c0:c.instructions+=1;goto B56a8c0;
case 0x56a8c2:goto L56a8c2;
case 0x56a8c8:c.instructions+=1;goto B56a8c8;
case 0x56a8ca:goto L56a8ca;
case 0x56a8d0:c.instructions+=1;goto B56a8d0;
case 0x56a8d6:goto L56a8d6;
case 0x56a8d9:c.instructions+=3;goto B56a8d9;
case 0x56a8de:c.instructions+=2;goto B56a8de;
case 0x56a8df:c.instructions+=1;goto B56a8df;
case 0x56a8e4:goto L56a8e4;
case 0x56a8e6:c.instructions+=4;goto B56a8e6;
case 0x56a8e8:c.instructions+=3;goto B56a8e8;
case 0x56a8ef:c.instructions+=2;goto B56a8ef;
case 0x56a8f3:c.instructions+=1;goto B56a8f3;
case 0x56a8f8:goto L56a8f8;
case 0x56a8fb:c.instructions+=2;goto B56a8fb;
case 0x56a8fd:c.instructions+=1;goto B56a8fd;
case 0x56a902:goto L56a902;
case 0x56a905:c.instructions+=3;goto B56a905;
case 0x56a90a:c.instructions+=2;goto B56a90a;
case 0x56a90b:c.instructions+=1;goto B56a90b;
case 0x56a910:goto L56a910;
case 0x56a913:c.instructions+=4;goto B56a913;
case 0x56a914:c.instructions+=3;goto B56a914;
case 0x56a915:c.instructions+=2;goto B56a915;
case 0x56a916:c.instructions+=1;goto B56a916;
case 0x56a919:goto L56a919;
case 0x56a91f:c.instructions+=2;goto B56a91f;
case 0x56a921:c.instructions+=1;goto B56a921;
case 0x56a927:goto L56a927;
case 0x56a928:c.instructions+=4;goto B56a928;
case 0x56a92c:c.instructions+=3;goto B56a92c;
case 0x56a92d:c.instructions+=2;goto B56a92d;
case 0x56a92e:c.instructions+=1;goto B56a92e;
case 0x56a931:goto L56a931;
case 0x56a934:c.instructions+=3;goto B56a934;
case 0x56a937:c.instructions+=2;goto B56a937;
case 0x56a939:c.instructions+=1;goto B56a939;
case 0x56a93f:goto L56a93f;
case 0x56a941:c.instructions+=2;goto B56a941;
case 0x56a946:c.instructions+=1;goto B56a946;
case 0x56a94b:goto L56a94b;
case 0x56a94e:c.instructions+=2;goto B56a94e;
case 0x56a955:c.instructions+=1;goto B56a955;
case 0x56a957:goto L56a957;
case 0x56a959:c.instructions+=1;goto B56a959;
case 0x56a95b:goto L56a95b;
case 0x56a95e:c.instructions+=3;goto B56a95e;
case 0x56a961:c.instructions+=2;goto B56a961;
case 0x56a964:c.instructions+=1;goto B56a964;
case 0x56a966:goto L56a966;
case 0x56a96b:c.instructions+=1;goto B56a96b;
case 0x56a96d:goto L56a96d;
case 0x56a96f:c.instructions+=2;goto B56a96f;
case 0x56a974:c.instructions+=1;goto B56a974;
case 0x56a979:goto L56a979;
case 0x56a97c:c.instructions+=2;goto B56a97c;
case 0x56a983:c.instructions+=1;goto B56a983;
case 0x56a985:goto L56a985;
case 0x56a987:c.instructions+=1;goto B56a987;
case 0x56a989:goto L56a989;
case 0x56a98c:c.instructions+=3;goto B56a98c;
case 0x56a98f:c.instructions+=2;goto B56a98f;
case 0x56a992:c.instructions+=1;goto B56a992;
case 0x56a994:goto L56a994;
case 0x56a999:goto L56a999;
case 0x56a99c:c.instructions+=3;goto B56a99c;
case 0x56a9a1:c.instructions+=2;goto B56a9a1;
case 0x56a9a2:c.instructions+=1;goto B56a9a2;
case 0x56a9a7:goto L56a9a7;
case 0x56a9aa:c.instructions+=5;goto B56a9aa;
case 0x56a9ab:c.instructions+=4;goto B56a9ab;
case 0x56a9b5:c.instructions+=3;goto B56a9b5;
case 0x56a9b6:c.instructions+=2;goto B56a9b6;
case 0x56a9b7:c.instructions+=1;goto B56a9b7;
case 0x56a9ba:goto L56a9ba;
case 0x56a9bd:c.instructions+=2;goto B56a9bd;
case 0x56a9bf:c.instructions+=1;goto B56a9bf;
case 0x56a9c5:goto L56a9c5;
case 0x56a9cb:c.instructions+=2;goto B56a9cb;
case 0x56a9cd:c.instructions+=1;goto B56a9cd;
case 0x56a9cf:goto L56a9cf;
case 0x56a9d1:c.instructions+=1;goto B56a9d1;
case 0x56a9d6:goto L56a9d6;
case 0x56a9d7:c.instructions+=3;goto B56a9d7;
case 0x56a9d8:c.instructions+=2;goto B56a9d8;
case 0x56a9d9:c.instructions+=1;goto B56a9d9;
case 0x56a9dc:goto L56a9dc;
case 0x56a9e2:c.instructions+=2;goto B56a9e2;
case 0x56a9e4:c.instructions+=1;goto B56a9e4;
case 0x56a9ea:goto L56a9ea;
case 0x56a9eb:c.instructions+=2;goto B56a9eb;
case 0x56a9f0:c.instructions+=1;goto B56a9f0;
case 0x56a9f5:goto L56a9f5;
case 0x56a9f8:c.instructions+=4;goto B56a9f8;
case 0x56a9f9:c.instructions+=3;goto B56a9f9;
case 0x56a9fa:c.instructions+=2;goto B56a9fa;
case 0x56a9fb:c.instructions+=1;goto B56a9fb;
case 0x56a9fe:goto L56a9fe;
case 0x56aa04:c.instructions+=2;goto B56aa04;
case 0x56aa06:c.instructions+=1;goto B56aa06;
case 0x56aa08:goto L56aa08;
case 0x56aa0a:c.instructions+=1;goto B56aa0a;
case 0x56aa0f:goto L56aa0f;
case 0x56aa10:c.instructions+=3;goto B56aa10;
case 0x56aa11:c.instructions+=2;goto B56aa11;
case 0x56aa12:c.instructions+=1;goto B56aa12;
case 0x56aa15:goto L56aa15;
case 0x56aa18:c.instructions+=4;goto B56aa18;
case 0x56aa1d:c.instructions+=3;goto B56aa1d;
case 0x56aa22:c.instructions+=2;goto B56aa22;
case 0x56aa23:c.instructions+=1;goto B56aa23;
case 0x56aa28:goto L56aa28;
case 0x56aa2b:c.instructions+=2;goto B56aa2b;
case 0x56aa2d:c.instructions+=1;goto B56aa2d;
case 0x56aa33:goto L56aa33;
case 0x56aa36:c.instructions+=5;goto B56aa36;
case 0x56aa38:c.instructions+=4;goto B56aa38;
case 0x56aa39:c.instructions+=3;goto B56aa39;
case 0x56aa3b:c.instructions+=2;goto B56aa3b;
case 0x56aa42:c.instructions+=1;goto B56aa42;
case 0x56aa47:goto L56aa47;
case 0x56aa4d:c.instructions+=3;goto B56aa4d;
case 0x56aa4e:c.instructions+=2;goto B56aa4e;
case 0x56aa53:c.instructions+=1;goto B56aa53;
case 0x56aa58:goto L56aa58;
case 0x56aa5b:c.instructions+=5;goto B56aa5b;
case 0x56aa5d:c.instructions+=4;goto B56aa5d;
case 0x56aa62:c.instructions+=3;goto B56aa62;
case 0x56aa67:c.instructions+=2;goto B56aa67;
case 0x56aa68:c.instructions+=1;goto B56aa68;
case 0x56aa6d:goto L56aa6d;
case 0x56aa70:c.instructions+=4;goto B56aa70;
case 0x56aa71:c.instructions+=3;goto B56aa71;
case 0x56aa72:c.instructions+=2;goto B56aa72;
case 0x56aa73:c.instructions+=1;goto B56aa73;
case 0x56aa76:goto L56aa76;
case 0x56aa7c:c.instructions+=1;goto B56aa7c;
case 0x56aa7e:goto L56aa7e;
case 0x56aa84:c.instructions+=1;goto B56aa84;
case 0x56aa86:goto L56aa86;
case 0x56aa8c:c.instructions+=1;goto B56aa8c;
case 0x56aa8e:goto L56aa8e;
case 0x56aa8f:c.instructions+=4;goto B56aa8f;
case 0x56aa96:c.instructions+=3;goto B56aa96;
case 0x56aa97:c.instructions+=2;goto B56aa97;
case 0x56aa98:c.instructions+=1;goto B56aa98;
case 0x56aa9b:goto L56aa9b;
case 0x56aaa1:c.instructions+=2;goto B56aaa1;
case 0x56aaa3:c.instructions+=1;goto B56aaa3;
case 0x56aaa5:goto L56aaa5;
case 0x56aaab:c.instructions+=3;goto B56aaab;
case 0x56aaad:c.instructions+=2;goto B56aaad;
case 0x56aab4:c.instructions+=1;goto B56aab4;
case 0x56aab6:goto L56aab6;
case 0x56aab9:c.instructions+=3;goto B56aab9;
case 0x56aabb:c.instructions+=2;goto B56aabb;
case 0x56aabc:c.instructions+=1;goto B56aabc;
case 0x56aac1:goto L56aac1;
case 0x56aac3:c.instructions+=2;goto B56aac3;
case 0x56aac5:c.instructions+=1;goto B56aac5;
case 0x56aaca:goto L56aaca;
case 0x56aacd:c.instructions+=1;goto B56aacd;
case 0x56aad2:goto L56aad2;
case 0x56aad4:c.instructions+=1;goto B56aad4;
case 0x56aad9:goto L56aad9;
case 0x56aada:c.instructions+=3;goto B56aada;
case 0x56aadb:c.instructions+=2;goto B56aadb;
case 0x56aadc:c.instructions+=1;goto B56aadc;
case 0x56aadf:goto L56aadf;
case 0x56aae4:goto L56aae4;
case 0x56aae6:c.instructions+=1;goto B56aae6;
case 0x56aaeb:goto L56aaeb;
case 0x56aaec:c.instructions+=3;goto B56aaec;
case 0x56aaed:c.instructions+=2;goto B56aaed;
case 0x56aaee:c.instructions+=1;goto B56aaee;
case 0x56aaf1:goto L56aaf1;
case 0x56aaf5:goto L56aaf5;
case 0x56aaf6:c.instructions+=3;goto B56aaf6;
case 0x56aaf7:c.instructions+=2;goto B56aaf7;
case 0x56aaf8:c.instructions+=1;goto B56aaf8;
case 0x56ab00:goto L56ab00;
case 0x56ab01:c.instructions+=15;goto B56ab01;
case 0x56ab03:c.instructions+=14;goto B56ab03;
case 0x56ab06:c.instructions+=13;goto B56ab06;
case 0x56ab09:c.instructions+=12;goto B56ab09;
case 0x56ab0a:c.instructions+=11;goto B56ab0a;
case 0x56ab0b:c.instructions+=10;goto B56ab0b;
case 0x56ab0e:c.instructions+=9;goto B56ab0e;
case 0x56ab0f:c.instructions+=8;goto B56ab0f;
case 0x56ab11:c.instructions+=7;goto B56ab11;
case 0x56ab14:c.instructions+=6;goto B56ab14;
case 0x56ab15:c.instructions+=5;goto B56ab15;
case 0x56ab16:c.instructions+=4;goto B56ab16;
case 0x56ab17:c.instructions+=3;goto B56ab17;
case 0x56ab18:c.instructions+=2;goto B56ab18;
case 0x56ab1a:c.instructions+=1;goto B56ab1a;
case 0x56ab1f:goto L56ab1f;
case 0x56ab25:c.instructions+=1;goto B56ab25;
case 0x56ab2b:goto L56ab2b;
case 0x56ab31:goto L56ab31;
case 0x56ab37:c.instructions+=1;goto B56ab37;
case 0x56ab39:goto L56ab39;
case 0x56ab3f:goto L56ab3f;
case 0x56ab45:c.instructions+=1;goto B56ab45;
case 0x56ab47:goto L56ab47;
case 0x56ab4d:c.instructions+=1;goto B56ab4d;
case 0x56ab53:goto L56ab53;
case 0x56ab55:c.instructions+=2;goto B56ab55;
case 0x56ab5a:c.instructions+=1;goto B56ab5a;
case 0x56ab5f:goto L56ab5f;
case 0x56ab60:c.instructions+=4;goto B56ab60;
case 0x56ab61:c.instructions+=3;goto B56ab61;
case 0x56ab62:c.instructions+=2;goto B56ab62;
case 0x56ab63:c.instructions+=1;goto B56ab63;
case 0x56ab66:goto L56ab66;
case 0x56ab68:c.instructions+=1;goto B56ab68;
case 0x56ab6d:goto L56ab6d;
case 0x56ab6e:c.instructions+=4;goto B56ab6e;
case 0x56ab6f:c.instructions+=3;goto B56ab6f;
case 0x56ab70:c.instructions+=2;goto B56ab70;
case 0x56ab71:c.instructions+=1;goto B56ab71;
case 0x56ab74:goto L56ab74;
case 0x56ab7a:c.instructions+=1;goto B56ab7a;
case 0x56ab80:goto L56ab80;
case 0x56ab86:c.instructions+=1;goto B56ab86;
case 0x56ab8c:goto L56ab8c;
case 0x56ab8f:c.instructions+=4;goto B56ab8f;
case 0x56ab94:c.instructions+=3;goto B56ab94;
case 0x56ab99:c.instructions+=2;goto B56ab99;
case 0x56ab9a:c.instructions+=1;goto B56ab9a;
case 0x56ab9f:goto L56ab9f;
case 0x56aba2:c.instructions+=2;goto B56aba2;
case 0x56aba4:c.instructions+=1;goto B56aba4;
case 0x56abaa:goto L56abaa;
case 0x56abad:c.instructions+=6;goto B56abad;
case 0x56abaf:c.instructions+=5;goto B56abaf;
case 0x56abb4:c.instructions+=4;goto B56abb4;
case 0x56abb9:c.instructions+=3;goto B56abb9;
case 0x56abba:c.instructions+=2;goto B56abba;
case 0x56abc0:c.instructions+=1;goto B56abc0;
case 0x56abc5:goto L56abc5;
case 0x56abc8:c.instructions+=5;goto B56abc8;
case 0x56abc9:c.instructions+=4;goto B56abc9;
case 0x56abca:c.instructions+=3;goto B56abca;
case 0x56abcb:c.instructions+=2;goto B56abcb;
case 0x56abcc:c.instructions+=1;goto B56abcc;
case 0x56abcf:goto L56abcf;
case 0x56abd2:c.instructions+=3;goto B56abd2;
case 0x56abd7:c.instructions+=2;goto B56abd7;
case 0x56abd8:c.instructions+=1;goto B56abd8;
case 0x56abdd:goto L56abdd;
case 0x56abdf:c.instructions+=4;goto B56abdf;
case 0x56abe2:c.instructions+=3;goto B56abe2;
case 0x56abe7:c.instructions+=2;goto B56abe7;
case 0x56abe8:c.instructions+=1;goto B56abe8;
case 0x56abed:goto L56abed;
case 0x56abee:c.instructions+=2;goto B56abee;
case 0x56abf0:c.instructions+=1;goto B56abf0;
case 0x56abf5:goto L56abf5;
case 0x56abf8:c.instructions+=2;goto B56abf8;
case 0x56abfa:c.instructions+=1;goto B56abfa;
case 0x56abfc:goto L56abfc;
case 0x56ac01:c.instructions+=2;goto B56ac01;
case 0x56ac03:c.instructions+=1;goto B56ac03;
case 0x56ac08:goto L56ac08;
case 0x56ac09:c.instructions+=4;goto B56ac09;
case 0x56ac0a:c.instructions+=3;goto B56ac0a;
case 0x56ac0b:c.instructions+=2;goto B56ac0b;
case 0x56ac0c:c.instructions+=1;goto B56ac0c;
case 0x56ac0f:goto L56ac0f;
case 0x56ac10:c.instructions+=1;goto B56ac10;
case 0x56ac15:goto L56ac15;
case 0x56ac18:c.instructions+=2;goto B56ac18;
case 0x56ac1a:c.instructions+=1;goto B56ac1a;
case 0x56ac20:goto L56ac20;
case 0x56ac25:c.instructions+=2;goto B56ac25;
case 0x56ac27:c.instructions+=1;goto B56ac27;
case 0x56ac2c:goto L56ac2c;
case 0x56ac2d:c.instructions+=4;goto B56ac2d;
case 0x56ac2e:c.instructions+=3;goto B56ac2e;
case 0x56ac2f:c.instructions+=2;goto B56ac2f;
case 0x56ac30:c.instructions+=1;goto B56ac30;
case 0x56ac33:goto L56ac33;
case 0x56ac39:c.instructions+=1;goto B56ac39;
case 0x56ac3f:goto L56ac3f;
case 0x56ac45:goto L56ac45;
case 0x56ac4b:c.instructions+=1;goto B56ac4b;
case 0x56ac51:goto L56ac51;
case 0x56ac57:c.instructions+=1;goto B56ac57;
case 0x56ac5d:goto L56ac5d;
case 0x56ac60:c.instructions+=3;goto B56ac60;
case 0x56ac63:c.instructions+=2;goto B56ac63;
case 0x56ac68:c.instructions+=1;goto B56ac68;
case 0x56ac6d:goto L56ac6d;
case 0x56ac6f:c.instructions+=1;goto B56ac6f;
case 0x56ac71:goto L56ac71;
case 0x56ac76:c.instructions+=2;goto B56ac76;
case 0x56ac7b:c.instructions+=1;goto B56ac7b;
case 0x56ac80:goto L56ac80;
case 0x56ac82:c.instructions+=2;goto B56ac82;
case 0x56ac86:c.instructions+=1;goto B56ac86;
case 0x56ac88:goto L56ac88;
case 0x56ac8c:goto L56ac8c;
case 0x56ac8d:c.instructions+=2;goto B56ac8d;
case 0x56ac92:c.instructions+=1;goto B56ac92;
case 0x56ac97:goto L56ac97;
case 0x56ac99:c.instructions+=2;goto B56ac99;
case 0x56ac9b:c.instructions+=1;goto B56ac9b;
case 0x56ac9d:goto L56ac9d;
case 0x56ac9e:c.instructions+=2;goto B56ac9e;
case 0x56aca3:c.instructions+=1;goto B56aca3;
case 0x56aca8:goto L56aca8;
case 0x56acaa:c.instructions+=2;goto B56acaa;
case 0x56acac:c.instructions+=1;goto B56acac;
case 0x56acb2:goto L56acb2;
case 0x56acb4:c.instructions+=3;goto B56acb4;
case 0x56acb9:c.instructions+=2;goto B56acb9;
case 0x56acbb:c.instructions+=1;goto B56acbb;
case 0x56acc0:goto L56acc0;
case 0x56acc3:c.instructions+=4;goto B56acc3;
case 0x56acc5:c.instructions+=3;goto B56acc5;
case 0x56acc8:c.instructions+=2;goto B56acc8;
case 0x56acca:c.instructions+=1;goto B56acca;
case 0x56acd0:goto L56acd0;
case 0x56acd2:c.instructions+=1;goto B56acd2;
case 0x56acd8:goto L56acd8;
case 0x56acdb:c.instructions+=8;goto B56acdb;
case 0x56acde:c.instructions+=7;goto B56acde;
case 0x56ace1:c.instructions+=6;goto B56ace1;
case 0x56ace2:c.instructions+=5;goto B56ace2;
case 0x56ace3:c.instructions+=4;goto B56ace3;
case 0x56ace4:c.instructions+=3;goto B56ace4;
case 0x56ace9:c.instructions+=2;goto B56ace9;
case 0x56aceb:c.instructions+=1;goto B56aceb;
case 0x56acf0:goto L56acf0;
case 0x56acf3:c.instructions+=5;goto B56acf3;
case 0x56acf5:c.instructions+=4;goto B56acf5;
case 0x56acfa:c.instructions+=3;goto B56acfa;
case 0x56acff:c.instructions+=2;goto B56acff;
case 0x56ad00:c.instructions+=1;goto B56ad00;
case 0x56ad05:goto L56ad05;
case 0x56ad08:c.instructions+=9;goto B56ad08;
case 0x56ad09:c.instructions+=8;goto B56ad09;
case 0x56ad0f:c.instructions+=7;goto B56ad0f;
case 0x56ad10:c.instructions+=6;goto B56ad10;
case 0x56ad16:c.instructions+=5;goto B56ad16;
case 0x56ad1d:c.instructions+=4;goto B56ad1d;
case 0x56ad27:c.instructions+=3;goto B56ad27;
case 0x56ad28:c.instructions+=2;goto B56ad28;
case 0x56ad29:c.instructions+=1;goto B56ad29;
case 0x56ad2c:goto L56ad2c;
case 0x56ad2d:c.instructions+=2;goto B56ad2d;
case 0x56ad2f:c.instructions+=1;goto B56ad2f;
case 0x56ad34:goto L56ad34;
case 0x56ad35:c.instructions+=4;goto B56ad35;
case 0x56ad36:c.instructions+=3;goto B56ad36;
case 0x56ad37:c.instructions+=2;goto B56ad37;
case 0x56ad38:c.instructions+=1;goto B56ad38;
case 0x56ad3b:goto L56ad3b;
case 0x56ad41:c.instructions+=1;goto B56ad41;
case 0x56ad47:goto L56ad47;
case 0x56ad4d:c.instructions+=1;goto B56ad4d;
case 0x56ad53:goto L56ad53;
case 0x56ad58:c.instructions+=1;goto B56ad58;
case 0x56ad5d:goto L56ad5d;
case 0x56ad5f:c.instructions+=1;goto B56ad5f;
case 0x56ad61:goto L56ad61;
case 0x56ad66:c.instructions+=2;goto B56ad66;
case 0x56ad6b:c.instructions+=1;goto B56ad6b;
case 0x56ad70:goto L56ad70;
case 0x56ad72:c.instructions+=1;goto B56ad72;
case 0x56ad74:goto L56ad74;
case 0x56ad76:c.instructions+=1;goto B56ad76;
case 0x56ad78:goto L56ad78;
case 0x56ad7a:goto L56ad7a;
case 0x56ad7f:c.instructions+=3;goto B56ad7f;
case 0x56ad80:c.instructions+=2;goto B56ad80;
case 0x56ad85:c.instructions+=1;goto B56ad85;
case 0x56ad8a:goto L56ad8a;
case 0x56ad8c:c.instructions+=1;goto B56ad8c;
case 0x56ad8e:goto L56ad8e;
case 0x56ad93:goto L56ad93;
case 0x56ad96:c.instructions+=3;goto B56ad96;
case 0x56ad99:c.instructions+=2;goto B56ad99;
case 0x56ad9b:c.instructions+=1;goto B56ad9b;
case 0x56ad9d:goto L56ad9d;
case 0x56ada0:c.instructions+=2;goto B56ada0;
case 0x56ada1:c.instructions+=1;goto B56ada1;
case 0x56ada6:goto L56ada6;
case 0x56ada8:c.instructions+=1;goto B56ada8;
case 0x56adaa:goto L56adaa;
case 0x56adad:c.instructions+=1;goto B56adad;
case 0x56adaf:goto L56adaf;
case 0x56adb1:goto L56adb1;
case 0x56adb2:c.instructions+=2;goto B56adb2;
case 0x56adb7:c.instructions+=1;goto B56adb7;
case 0x56adbc:goto L56adbc;
case 0x56adbf:c.instructions+=3;goto B56adbf;
case 0x56adc2:c.instructions+=2;goto B56adc2;
case 0x56adc4:c.instructions+=1;goto B56adc4;
case 0x56adc6:goto L56adc6;
case 0x56adc9:c.instructions+=1;goto B56adc9;
case 0x56adcb:goto L56adcb;
case 0x56adce:c.instructions+=1;goto B56adce;
case 0x56add5:goto L56add5;
case 0x56add6:c.instructions+=2;goto B56add6;
case 0x56add9:c.instructions+=1;goto B56add9;
case 0x56addb:goto L56addb;
case 0x56addd:c.instructions+=1;goto B56addd;
case 0x56ade2:goto L56ade2;
case 0x56ade4:c.instructions+=2;goto B56ade4;
case 0x56ade6:c.instructions+=1;goto B56ade6;
case 0x56ade9:goto L56ade9;
case 0x56adea:c.instructions+=4;goto B56adea;
case 0x56adeb:c.instructions+=3;goto B56adeb;
case 0x56adec:c.instructions+=2;goto B56adec;
case 0x56aded:c.instructions+=1;goto B56aded;
case 0x56adf0:goto L56adf0;
case 0x56adf3:c.instructions+=2;goto B56adf3;
case 0x56adf5:c.instructions+=1;goto B56adf5;
case 0x56adfa:goto L56adfa;
case 0x56adfb:c.instructions+=2;goto B56adfb;
case 0x56adfe:c.instructions+=1;goto B56adfe;
case 0x56ae00:goto L56ae00;
case 0x56ae07:goto L56ae07;
case 0x56ae0c:c.instructions+=1;goto B56ae0c;
case 0x56ae0e:goto L56ae0e;
case 0x56ae13:c.instructions+=1;goto B56ae13;
case 0x56ae15:goto L56ae15;
case 0x56ae1a:c.instructions+=1;goto B56ae1a;
case 0x56ae1c:goto L56ae1c;
case 0x56ae21:goto L56ae21;
case 0x56ae24:c.instructions+=3;goto B56ae24;
case 0x56ae27:c.instructions+=2;goto B56ae27;
case 0x56ae29:c.instructions+=1;goto B56ae29;
case 0x56ae2b:goto L56ae2b;
case 0x56ae2e:c.instructions+=4;goto B56ae2e;
case 0x56ae31:c.instructions+=3;goto B56ae31;
case 0x56ae32:c.instructions+=2;goto B56ae32;
case 0x56ae33:c.instructions+=1;goto B56ae33;
case 0x56ae38:goto L56ae38;
case 0x56ae3b:goto L56ae3b;
case 0x56ae3d:c.instructions+=1;goto B56ae3d;
case 0x56ae42:goto L56ae42;
case 0x56ae44:c.instructions+=2;goto B56ae44;
case 0x56ae46:c.instructions+=1;goto B56ae46;
case 0x56ae49:goto L56ae49;
case 0x56ae4a:c.instructions+=4;goto B56ae4a;
case 0x56ae4b:c.instructions+=3;goto B56ae4b;
case 0x56ae4c:c.instructions+=2;goto B56ae4c;
case 0x56ae4d:c.instructions+=1;goto B56ae4d;
case 0x56ae50:goto L56ae50;
case 0x56ae56:c.instructions+=2;goto B56ae56;
case 0x56ae5b:c.instructions+=1;goto B56ae5b;
case 0x56ae5d:goto L56ae5d;
case 0x56ae62:c.instructions+=1;goto B56ae62;
case 0x56ae64:goto L56ae64;
case 0x56ae69:c.instructions+=1;goto B56ae69;
case 0x56ae6b:goto L56ae6b;
case 0x56ae70:goto L56ae70;
case 0x56ae72:c.instructions+=1;goto B56ae72;
case 0x56ae77:goto L56ae77;
case 0x56ae78:c.instructions+=4;goto B56ae78;
case 0x56ae79:c.instructions+=3;goto B56ae79;
case 0x56ae7a:c.instructions+=2;goto B56ae7a;
case 0x56ae7b:c.instructions+=1;goto B56ae7b;
case 0x56ae7e:goto L56ae7e;
case 0x56ae81:c.instructions+=3;goto B56ae81;
case 0x56ae83:c.instructions+=2;goto B56ae83;
case 0x56ae84:c.instructions+=1;goto B56ae84;
case 0x56ae89:goto L56ae89;
case 0x56ae8c:c.instructions+=1;goto B56ae8c;
case 0x56ae91:goto L56ae91;
case 0x56ae93:c.instructions+=1;goto B56ae93;
case 0x56ae98:goto L56ae98;
case 0x56ae99:c.instructions+=4;goto B56ae99;
case 0x56ae9a:c.instructions+=3;goto B56ae9a;
case 0x56ae9b:c.instructions+=2;goto B56ae9b;
case 0x56ae9c:c.instructions+=1;goto B56ae9c;
case 0x56aeb0:goto L56aeb0;
case 0x56aeb2:c.instructions+=13;goto B56aeb2;
case 0x56aeb7:c.instructions+=12;goto B56aeb7;
case 0x56aebd:c.instructions+=11;goto B56aebd;
case 0x56aebe:c.instructions+=10;goto B56aebe;
case 0x56aec5:c.instructions+=9;goto B56aec5;
case 0x56aec6:c.instructions+=8;goto B56aec6;
case 0x56aeca:c.instructions+=7;goto B56aeca;
case 0x56aecb:c.instructions+=6;goto B56aecb;
case 0x56aecc:c.instructions+=5;goto B56aecc;
case 0x56aecd:c.instructions+=4;goto B56aecd;
case 0x56aecf:c.instructions+=3;goto B56aecf;
case 0x56aed0:c.instructions+=2;goto B56aed0;
case 0x56aed4:c.instructions+=1;goto B56aed4;
case 0x56aed9:goto L56aed9;
case 0x56aedf:c.instructions+=27;goto B56aedf;
case 0x56aee1:c.instructions+=26;goto B56aee1;
case 0x56aee7:c.instructions+=25;goto B56aee7;
case 0x56aeeb:c.instructions+=24;goto B56aeeb;
case 0x56aeed:c.instructions+=23;goto B56aeed;
case 0x56aef0:c.instructions+=22;goto B56aef0;
case 0x56aef6:c.instructions+=21;goto B56aef6;
case 0x56aef8:c.instructions+=20;goto B56aef8;
case 0x56aefb:c.instructions+=19;goto B56aefb;
case 0x56af01:c.instructions+=18;goto B56af01;
case 0x56af07:c.instructions+=17;goto B56af07;
case 0x56af0d:c.instructions+=16;goto B56af0d;
case 0x56af17:c.instructions+=15;goto B56af17;
case 0x56af21:c.instructions+=14;goto B56af21;
case 0x56af27:c.instructions+=13;goto B56af27;
case 0x56af31:c.instructions+=12;goto B56af31;
case 0x56af3b:c.instructions+=11;goto B56af3b;
case 0x56af41:c.instructions+=10;goto B56af41;
case 0x56af47:c.instructions+=9;goto B56af47;
case 0x56af4d:c.instructions+=8;goto B56af4d;
case 0x56af53:c.instructions+=7;goto B56af53;
case 0x56af59:c.instructions+=6;goto B56af59;
case 0x56af5f:c.instructions+=5;goto B56af5f;
case 0x56af62:c.instructions+=4;goto B56af62;
case 0x56af67:c.instructions+=3;goto B56af67;
case 0x56af68:c.instructions+=2;goto B56af68;
case 0x56af6d:c.instructions+=1;goto B56af6d;
case 0x56af72:goto L56af72;
case 0x56af78:c.instructions+=4;goto B56af78;
case 0x56af7b:c.instructions+=3;goto B56af7b;
case 0x56af80:c.instructions+=2;goto B56af80;
case 0x56af81:c.instructions+=1;goto B56af81;
case 0x56af86:goto L56af86;
case 0x56af87:c.instructions+=2;goto B56af87;
case 0x56af8d:c.instructions+=1;goto B56af8d;
case 0x56af92:goto L56af92;
case 0x56af95:c.instructions+=3;goto B56af95;
case 0x56af97:c.instructions+=2;goto B56af97;
case 0x56af9e:c.instructions+=1;goto B56af9e;
case 0x56afa3:goto L56afa3;
case 0x56afa6:c.instructions+=4;goto B56afa6;
case 0x56afa8:c.instructions+=3;goto B56afa8;
case 0x56afaf:c.instructions+=2;goto B56afaf;
case 0x56afb2:c.instructions+=1;goto B56afb2;
case 0x56afb4:goto L56afb4;
case 0x56afb5:c.instructions+=1;goto B56afb5;
case 0x56afba:goto L56afba;
case 0x56afbd:c.instructions+=2;goto B56afbd;
case 0x56afbf:c.instructions+=1;goto B56afbf;
case 0x56afc1:goto L56afc1;
case 0x56afc6:c.instructions+=2;goto B56afc6;
case 0x56afc8:c.instructions+=1;goto B56afc8;
case 0x56afcd:goto L56afcd;
case 0x56afcf:c.instructions+=1;goto B56afcf;
case 0x56afd1:goto L56afd1;
case 0x56afd6:c.instructions+=2;goto B56afd6;
case 0x56afd8:c.instructions+=1;goto B56afd8;
case 0x56afda:goto L56afda;
case 0x56afdd:c.instructions+=3;goto B56afdd;
case 0x56afde:c.instructions+=2;goto B56afde;
case 0x56afe3:c.instructions+=1;goto B56afe3;
case 0x56afe8:goto L56afe8;
case 0x56afea:goto L56afea;
case 0x56afec:goto L56afec;
case 0x56afef:c.instructions+=3;goto B56afef;
case 0x56aff1:c.instructions+=2;goto B56aff1;
case 0x56aff7:c.instructions+=1;goto B56aff7;
case 0x56aff9:goto L56aff9;
case 0x56affa:c.instructions+=1;goto B56affa;
case 0x56afff:goto L56afff;
default:missing_instruction(c.pc);}
B56a001:L56a001:{c.instructions+=1;NFSU2_TR(0x56a001);
if(r1(R+518)){{goto L56a00a;}}
}
B56a003:L56a003:{c.instructions+=2;NFSU2_TR(0x56a003);
__builtin_memmove((R+4),(R+0),4);
}
B56a005:{NFSU2_TR(0x56a005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a00aull));
TAIL_STATIC(0x53b6f0u,53b);
}
B56a00a:L56a00a:{c.instructions+=6;NFSU2_TR(0x56a00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a00d:{NFSU2_TR(0x56a00d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a00f:{NFSU2_TR(0x56a00f);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a014:{NFSU2_TR(0x56a014);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a019:{NFSU2_TR(0x56a019);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a01a:{NFSU2_TR(0x56a01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a01full));
TAIL_STATIC(0x537c00u,537);
}
B56a01f:L56a01f:{c.instructions+=6;NFSU2_TR(0x56a01f);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B56a024:{NFSU2_TR(0x56a024);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a026:{NFSU2_TR(0x56a026);
u8 U[4];
w4(U+0,u32(0x79d7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a02b:{NFSU2_TR(0x56a02b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a030:{NFSU2_TR(0x56a030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a031:{NFSU2_TR(0x56a031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a036ull));
TAIL_STATIC(0x537c00u,537);
}
B56a036:L56a036:{c.instructions+=3;NFSU2_TR(0x56a036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B56a039:{NFSU2_TR(0x56a039);
__builtin_memmove((R+4),(R+24),4);
}
B56a03b:{NFSU2_TR(0x56a03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a040ull));
TAIL_STATIC(0x562530u,562);
}
B56a040:L56a040:{c.instructions+=5;NFSU2_TR(0x56a040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a041:{NFSU2_TR(0x56a041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a042:{NFSU2_TR(0x56a042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a043:{NFSU2_TR(0x56a043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a044:{NFSU2_TR(0x56a044);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a047:L56a047:{c.instructions+=2;NFSU2_TR(0x56a047);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a04d:{NFSU2_TR(0x56a04d);
if(r1(R+518)){{goto L56a0ed;}}
}
B56a053:L56a053:{c.instructions+=2;NFSU2_TR(0x56a053);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x51123592ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x51123592ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x51123592ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a059:{NFSU2_TR(0x56a059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a05f:L56a05f:{c.instructions+=3;NFSU2_TR(0x56a05f);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B56a065:{NFSU2_TR(0x56a065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a066:{NFSU2_TR(0x56a066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a06bull));
TAIL_STATIC(0x51bd10u,51b);
}
B56a06b:L56a06b:{c.instructions+=3;NFSU2_TR(0x56a06b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56a06e:{NFSU2_TR(0x56a06e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a070:{NFSU2_TR(0x56a070);
if(r1(R+518)){{goto L56a079;}}
}
B56a072:L56a072:{c.instructions+=2;NFSU2_TR(0x56a072);
__builtin_memmove((R+4),(R+0),4);
}
B56a074:{NFSU2_TR(0x56a074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a079ull));
TAIL_STATIC(0x53b6f0u,53b);
}
B56a079:L56a079:{c.instructions+=1;NFSU2_TR(0x56a079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a07eull));
TAIL_STATIC(0x53b740u,53b);
}
B56a07e:L56a07e:{c.instructions+=1;NFSU2_TR(0x56a07e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a083ull));
TAIL_STATIC(0x53b6c0u,53b);
}
B56a083:L56a083:{c.instructions+=3;NFSU2_TR(0x56a083);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a085:{NFSU2_TR(0x56a085);
__builtin_memmove((R+4),(R+24),4);
}
B56a087:{NFSU2_TR(0x56a087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a08cull));
TAIL_STATIC(0x50f270u,50f);
}
B56a08c:L56a08c:{c.instructions+=3;NFSU2_TR(0x56a08c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a08d:{NFSU2_TR(0x56a08d);
w4(R+4,u32(0x838980ull));
}
B56a092:{NFSU2_TR(0x56a092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a097ull));
TAIL_STATIC(0x5213d0u,521);
}
B56a097:L56a097:{c.instructions+=2;NFSU2_TR(0x56a097);
__builtin_memmove((R+4),(R+24),4);
}
B56a099:{NFSU2_TR(0x56a099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a09eull));
TAIL_STATIC(0x50f270u,50f);
}
B56a09e:L56a09e:{c.instructions+=3;NFSU2_TR(0x56a09e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a09f:{NFSU2_TR(0x56a09f);
w4(R+4,u32(0x838980ull));
}
B56a0a4:{NFSU2_TR(0x56a0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0a9ull));
TAIL_STATIC(0x521510u,521);
}
B56a0a9:L56a0a9:{c.instructions+=6;NFSU2_TR(0x56a0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a0ac:{NFSU2_TR(0x56a0ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0ae:{NFSU2_TR(0x56a0ae);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0b3:{NFSU2_TR(0x56a0b3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0b8:{NFSU2_TR(0x56a0b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0b9:{NFSU2_TR(0x56a0b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0beull));
TAIL_STATIC(0x537c00u,537);
}
B56a0be:L56a0be:{c.instructions+=6;NFSU2_TR(0x56a0be);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B56a0c3:{NFSU2_TR(0x56a0c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0c5:{NFSU2_TR(0x56a0c5);
u8 U[4];
w4(U+0,u32(0x79d7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0ca:{NFSU2_TR(0x56a0ca);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0cf:{NFSU2_TR(0x56a0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a0d0:{NFSU2_TR(0x56a0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0d5ull));
TAIL_STATIC(0x537c00u,537);
}
B56a0d5:L56a0d5:{c.instructions+=3;NFSU2_TR(0x56a0d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B56a0d8:{NFSU2_TR(0x56a0d8);
__builtin_memmove((R+4),(R+24),4);
}
B56a0da:{NFSU2_TR(0x56a0da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0dfull));
TAIL_STATIC(0x51ff40u,51f);
}
B56a0df:L56a0df:{c.instructions+=2;NFSU2_TR(0x56a0df);
__builtin_memmove((R+4),(R+24),4);
}
B56a0e1:{NFSU2_TR(0x56a0e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0e6ull));
TAIL_STATIC(0x562530u,562);
}
B56a0e6:L56a0e6:{c.instructions+=5;NFSU2_TR(0x56a0e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a0e7:{NFSU2_TR(0x56a0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a0e8:{NFSU2_TR(0x56a0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a0e9:{NFSU2_TR(0x56a0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a0ea:{NFSU2_TR(0x56a0ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a0ed:L56a0ed:{c.instructions+=1;NFSU2_TR(0x56a0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a0f2ull));
TAIL_STATIC(0x53b740u,53b);
}
B56a0f2:L56a0f2:{c.instructions+=3;NFSU2_TR(0x56a0f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a0f9:{NFSU2_TR(0x56a0f9);
__builtin_memmove((R+4),(R+24),4);
}
B56a0fb:{NFSU2_TR(0x56a0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a100ull));
TAIL_STATIC(0x51ff40u,51f);
}
B56a100:L56a100:{c.instructions+=5;NFSU2_TR(0x56a100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a103:{NFSU2_TR(0x56a103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a106:{NFSU2_TR(0x56a106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56a108:{NFSU2_TR(0x56a108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a109:{NFSU2_TR(0x56a109);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a10cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56a10c:L56a10c:{c.instructions+=5;NFSU2_TR(0x56a10c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a10d:{NFSU2_TR(0x56a10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a10e:{NFSU2_TR(0x56a10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a10f:{NFSU2_TR(0x56a10f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a110:{NFSU2_TR(0x56a110);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a113:L56a113:{c.instructions+=3;NFSU2_TR(0x56a113);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a119:{NFSU2_TR(0x56a119);
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
B56a11b:{NFSU2_TR(0x56a11b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a121:L56a121:{c.instructions+=2;NFSU2_TR(0x56a121);
__builtin_memmove((R+4),(R+24),4);
}
B56a123:{NFSU2_TR(0x56a123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a128ull));
TAIL_STATIC(0x562530u,562);
}
B56a128:L56a128:{c.instructions+=3;NFSU2_TR(0x56a128);
w4(R+0,u32(s32(s8(m1(0x838082)))));
}
B56a12f:{NFSU2_TR(0x56a12f);
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
B56a132:{NFSU2_TR(0x56a132);
if(r1(R+518)){{goto L56a2f7;}}
}
B56a138:L56a138:{c.instructions+=3;NFSU2_TR(0x56a138);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56a13e:{NFSU2_TR(0x56a13e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a13f:{NFSU2_TR(0x56a13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a144ull));
TAIL_STATIC(0x458520u,458);
}
B56a144:L56a144:{c.instructions+=5;NFSU2_TR(0x56a144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a145:{NFSU2_TR(0x56a145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a146:{NFSU2_TR(0x56a146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a147:{NFSU2_TR(0x56a147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a148:{NFSU2_TR(0x56a148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a14b:L56a14b:{c.instructions+=2;NFSU2_TR(0x56a14b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5971bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a151:{NFSU2_TR(0x56a151);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a26c;}}
}
B56a157:L56a157:{c.instructions+=1;NFSU2_TR(0x56a157);
if(r1(R+518)){{goto L56a20b;}}
}
B56a15d:L56a15d:{c.instructions+=2;NFSU2_TR(0x56a15d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a163:{NFSU2_TR(0x56a163);
if(r1(R+518)){{goto L56a1e1;}}
}
B56a165:L56a165:{c.instructions+=2;NFSU2_TR(0x56a165);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a16b:{NFSU2_TR(0x56a16b);
if(r1(R+518)){{goto L56a179;}}
}
B56a16d:L56a16d:{c.instructions+=2;NFSU2_TR(0x56a16d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb4edeb6dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb4edeb6dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb4edeb6dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a173:{NFSU2_TR(0x56a173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a179:L56a179:{c.instructions+=4;NFSU2_TR(0x56a179);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B56a17f:{NFSU2_TR(0x56a17f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a180:{NFSU2_TR(0x56a180);
w4(R+4,u32(0x8637b0ull));
}
B56a185:{NFSU2_TR(0x56a185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a18aull));
TAIL_STATIC(0x51bb70u,51b);
}
B56a18a:L56a18a:{c.instructions+=2;NFSU2_TR(0x56a18a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a18c:{NFSU2_TR(0x56a18c);
if(r1(R+518)){{goto L56a1a1;}}
}
B56a18e:L56a18e:{c.instructions+=3;NFSU2_TR(0x56a18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a191:{NFSU2_TR(0x56a191);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a193:{NFSU2_TR(0x56a193);
if(r1(R+518)){{goto L56a1a1;}}
}
B56a195:L56a195:{c.instructions+=2;NFSU2_TR(0x56a195);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56a198:{NFSU2_TR(0x56a198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a19dull));
TAIL_STATIC(0x538b30u,538);
}
B56a19d:L56a19d:{c.instructions+=1;NFSU2_TR(0x56a19d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a1a1:L56a1a1:{c.instructions+=6;NFSU2_TR(0x56a1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a1a4:{NFSU2_TR(0x56a1a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1a6:{NFSU2_TR(0x56a1a6);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1ab:{NFSU2_TR(0x56a1ab);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1b0:{NFSU2_TR(0x56a1b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1b1:{NFSU2_TR(0x56a1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a1b6ull));
TAIL_STATIC(0x537c00u,537);
}
B56a1b6:L56a1b6:{c.instructions+=6;NFSU2_TR(0x56a1b6);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B56a1bb:{NFSU2_TR(0x56a1bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1bd:{NFSU2_TR(0x56a1bd);
u8 U[4];
w4(U+0,u32(0x79d7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1c2:{NFSU2_TR(0x56a1c2);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1c7:{NFSU2_TR(0x56a1c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1c8:{NFSU2_TR(0x56a1c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a1cdull));
TAIL_STATIC(0x537c00u,537);
}
B56a1cd:L56a1cd:{c.instructions+=2;NFSU2_TR(0x56a1cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B56a1d0:{NFSU2_TR(0x56a1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a1d5ull));
TAIL_STATIC(0x53b740u,53b);
}
B56a1d5:L56a1d5:{c.instructions+=1;NFSU2_TR(0x56a1d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a1daull));
TAIL_STATIC(0x53b6c0u,53b);
}
B56a1da:L56a1da:{c.instructions+=5;NFSU2_TR(0x56a1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a1db:{NFSU2_TR(0x56a1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a1dc:{NFSU2_TR(0x56a1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a1dd:{NFSU2_TR(0x56a1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a1de:{NFSU2_TR(0x56a1de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a1e1:L56a1e1:{c.instructions+=3;NFSU2_TR(0x56a1e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a1e7:{NFSU2_TR(0x56a1e7);
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
B56a1e9:{NFSU2_TR(0x56a1e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a1ef:L56a1ef:{c.instructions+=2;NFSU2_TR(0x56a1ef);
__builtin_memmove((R+4),(R+24),4);
}
B56a1f1:{NFSU2_TR(0x56a1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a1f6ull));
TAIL_STATIC(0x562530u,562);
}
B56a1f6:L56a1f6:{c.instructions+=4;NFSU2_TR(0x56a1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a1f9:{NFSU2_TR(0x56a1f9);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1fb:{NFSU2_TR(0x56a1fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a1fc:{NFSU2_TR(0x56a1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a201ull));
TAIL_STATIC(0x51de60u,51d);
}
B56a201:L56a201:{c.instructions+=6;NFSU2_TR(0x56a201);
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
B56a204:{NFSU2_TR(0x56a204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a205:{NFSU2_TR(0x56a205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a206:{NFSU2_TR(0x56a206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a207:{NFSU2_TR(0x56a207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a208:{NFSU2_TR(0x56a208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a20b:L56a20b:{c.instructions+=3;NFSU2_TR(0x56a20b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a211:{NFSU2_TR(0x56a211);
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
B56a213:{NFSU2_TR(0x56a213);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a219:L56a219:{c.instructions+=4;NFSU2_TR(0x56a219);
__builtin_memmove((R+8),gp(0x7fa1c8),4);
}
B56a21f:{NFSU2_TR(0x56a21f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a220:{NFSU2_TR(0x56a220);
w4(R+4,u32(0x8637b0ull));
}
B56a225:{NFSU2_TR(0x56a225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a22aull));
TAIL_STATIC(0x51bb70u,51b);
}
B56a22a:L56a22a:{c.instructions+=2;NFSU2_TR(0x56a22a);
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
B56a22c:{NFSU2_TR(0x56a22c);
if(r1(R+518)){{goto L56a246;}}
}
B56a22e:L56a22e:{c.instructions+=3;NFSU2_TR(0x56a22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a231:{NFSU2_TR(0x56a231);
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
B56a233:{NFSU2_TR(0x56a233);
if(r1(R+518)){{goto L56a246;}}
}
B56a235:L56a235:{c.instructions+=1;NFSU2_TR(0x56a235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a23aull));
TAIL_STATIC(0x53b710u,53b);
}
B56a23a:L56a23a:{c.instructions+=1;NFSU2_TR(0x56a23a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a23full));
TAIL_STATIC(0x53b690u,53b);
}
B56a23f:L56a23f:{c.instructions+=1;NFSU2_TR(0x56a23f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x163ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a246:L56a246:{c.instructions+=11;NFSU2_TR(0x56a246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a249:{NFSU2_TR(0x56a249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a24c:{NFSU2_TR(0x56a24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a24d:{NFSU2_TR(0x56a24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56a253:{NFSU2_TR(0x56a253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0xb5971bf1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56a25d:{NFSU2_TR(0x56a25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56a260:{NFSU2_TR(0x56a260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56a266:{NFSU2_TR(0x56a266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a267:{NFSU2_TR(0x56a267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a268:{NFSU2_TR(0x56a268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a269:{NFSU2_TR(0x56a269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a26c:L56a26c:{c.instructions+=2;NFSU2_TR(0x56a26c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a272:{NFSU2_TR(0x56a272);
if(r1(R+518)){{goto L56a2d1;}}
}
B56a274:L56a274:{c.instructions+=2;NFSU2_TR(0x56a274);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a27a:{NFSU2_TR(0x56a27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a27c:L56a27c:{c.instructions+=3;NFSU2_TR(0x56a27c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a282:{NFSU2_TR(0x56a282);
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
B56a284:{NFSU2_TR(0x56a284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a286:L56a286:{c.instructions+=3;NFSU2_TR(0x56a286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a28c:{NFSU2_TR(0x56a28c);
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
B56a291:{NFSU2_TR(0x56a291);
if(r1(R+518)){{goto L56a2bc;}}
}
B56a293:L56a293:{c.instructions+=2;NFSU2_TR(0x56a293);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a298:{NFSU2_TR(0x56a298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2f7;}}
}
B56a29a:L56a29a:{c.instructions+=4;NFSU2_TR(0x56a29a);
__builtin_memmove((R+8),gp(0x7fa1c8),4);
}
B56a2a0:{NFSU2_TR(0x56a2a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a2a1:{NFSU2_TR(0x56a2a1);
u8 U[4];
w4(U+0,u32(0x8577e0a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a2a6:{NFSU2_TR(0x56a2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a2abull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a2ab:L56a2ab:{c.instructions+=7;NFSU2_TR(0x56a2ab);
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
B56a2ae:{NFSU2_TR(0x56a2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a2af:{NFSU2_TR(0x56a2af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a2b6:{NFSU2_TR(0x56a2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a2b7:{NFSU2_TR(0x56a2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a2b8:{NFSU2_TR(0x56a2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a2b9:{NFSU2_TR(0x56a2b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a2bc:L56a2bc:{c.instructions+=7;NFSU2_TR(0x56a2bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a2bd:{NFSU2_TR(0x56a2bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a2c4:{NFSU2_TR(0x56a2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a2c5:{NFSU2_TR(0x56a2c5);
s1(0x83855b,u8(0x1ull));
}
B56a2cc:{NFSU2_TR(0x56a2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a2cd:{NFSU2_TR(0x56a2cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a2ce:{NFSU2_TR(0x56a2ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a2d1:L56a2d1:{c.instructions+=3;NFSU2_TR(0x56a2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a2d7:{NFSU2_TR(0x56a2d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a2d9:{NFSU2_TR(0x56a2d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a2e4;}}
}
B56a2db:L56a2db:{c.instructions+=3;NFSU2_TR(0x56a2db);
__builtin_memmove((R+0),gp(0x83855c),1);
}
B56a2e0:{NFSU2_TR(0x56a2e0);
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
B56a2e2:{NFSU2_TR(0x56a2e2);
if(r1(R+518)){{goto L56a2f7;}}
}
B56a2e4:L56a2e4:{c.instructions+=3;NFSU2_TR(0x56a2e4);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B56a2ea:{NFSU2_TR(0x56a2ea);
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
B56a2ec:{NFSU2_TR(0x56a2ec);
if(r1(R+518)){{goto L56a2f7;}}
}
B56a2ee:L56a2ee:{c.instructions+=3;NFSU2_TR(0x56a2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a2f1:{NFSU2_TR(0x56a2f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a2f2:{NFSU2_TR(0x56a2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a2f7ull));
TAIL_STATIC(0x5376f0u,537);
}
B56a2f7:L56a2f7:{c.instructions+=5;NFSU2_TR(0x56a2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a2f8:{NFSU2_TR(0x56a2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a2f9:{NFSU2_TR(0x56a2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a2fa:{NFSU2_TR(0x56a2fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a2fb:{NFSU2_TR(0x56a2fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a300:L56a300:{c.instructions+=9;NFSU2_TR(0x56a300);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a301:{NFSU2_TR(0x56a301);
__builtin_memmove((R+20),(R+16),4);
}
B56a303:{NFSU2_TR(0x56a303);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a304:{NFSU2_TR(0x56a304);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a305:{NFSU2_TR(0x56a305);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a306:{NFSU2_TR(0x56a306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a309:{NFSU2_TR(0x56a309);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911c0a4bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a30f:{NFSU2_TR(0x56a30f);
__builtin_memmove((R+24),(R+4),4);
}
B56a311:{NFSU2_TR(0x56a311);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a63a;}}
}
B56a317:L56a317:{c.instructions+=1;NFSU2_TR(0x56a317);
if(r1(R+518)){{goto L56a62a;}}
}
B56a31d:L56a31d:{c.instructions+=2;NFSU2_TR(0x56a31d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x51123592ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a323:{NFSU2_TR(0x56a323);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a58c;}}
}
B56a329:L56a329:{c.instructions+=1;NFSU2_TR(0x56a329);
if(r1(R+518)){{goto L56a551;}}
}
B56a32f:L56a32f:{c.instructions+=2;NFSU2_TR(0x56a32f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1becull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a335:{NFSU2_TR(0x56a335);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a3af;}}
}
B56a337:L56a337:{c.instructions+=1;NFSU2_TR(0x56a337);
if(r1(R+518)){{goto L56a744;}}
}
B56a33d:L56a33d:{c.instructions+=2;NFSU2_TR(0x56a33d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a343:{NFSU2_TR(0x56a343);
if(r1(R+518)){{goto L56a354;}}
}
B56a345:L56a345:{c.instructions+=2;NFSU2_TR(0x56a345);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a34b:{NFSU2_TR(0x56a34b);
if(r1(R+518)){{goto L56a3bb;}}
}
B56a34d:L56a34d:{c.instructions+=5;NFSU2_TR(0x56a34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a34e:{NFSU2_TR(0x56a34e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a34f:{NFSU2_TR(0x56a34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a350:{NFSU2_TR(0x56a350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a351:{NFSU2_TR(0x56a351);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a354:L56a354:{c.instructions+=8;NFSU2_TR(0x56a354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a357:{NFSU2_TR(0x56a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a35a:{NFSU2_TR(0x56a35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a360:{NFSU2_TR(0x56a360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56a363:{NFSU2_TR(0x56a363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a364:{NFSU2_TR(0x56a364);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a365:{NFSU2_TR(0x56a365);
w4(R+4,u32(0x85ad40ull));
}
B56a36a:{NFSU2_TR(0x56a36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a36full));
TAIL_STATIC(0x5289f0u,528);
}
B56a36f:L56a36f:{c.instructions+=4;NFSU2_TR(0x56a36f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a370:{NFSU2_TR(0x56a370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a371:{NFSU2_TR(0x56a371);
w4(R+4,u32(0x838980ull));
}
B56a376:{NFSU2_TR(0x56a376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a37bull));
TAIL_STATIC(0x55c230u,55c);
}
B56a37b:L56a37b:{c.instructions+=3;NFSU2_TR(0x56a37b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a37c:{NFSU2_TR(0x56a37c);
w4(R+4,u32(0x838980ull));
}
B56a381:{NFSU2_TR(0x56a381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a386ull));
TAIL_STATIC(0x521280u,521);
}
B56a386:L56a386:{c.instructions+=4;NFSU2_TR(0x56a386);
__builtin_memmove((R+8),gp(0x7fa1c4),4);
}
B56a38c:{NFSU2_TR(0x56a38c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a38d:{NFSU2_TR(0x56a38d);
u8 U[4];
w4(U+0,u32(0x6691c08eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a392:{NFSU2_TR(0x56a392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a397ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a397:L56a397:{c.instructions+=8;NFSU2_TR(0x56a397);
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
B56a39a:{NFSU2_TR(0x56a39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a39b:{NFSU2_TR(0x56a39b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a3a2:{NFSU2_TR(0x56a3a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a3a9:{NFSU2_TR(0x56a3a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a3aa:{NFSU2_TR(0x56a3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a3ab:{NFSU2_TR(0x56a3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a3ac:{NFSU2_TR(0x56a3ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a3af:L56a3af:{c.instructions+=2;NFSU2_TR(0x56a3af);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x406415e3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a3b5:{NFSU2_TR(0x56a3b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a842;}}
}
B56a3bb:L56a3bb:{c.instructions+=4;NFSU2_TR(0x56a3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a3be:{NFSU2_TR(0x56a3be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56a3c1:{NFSU2_TR(0x56a3c1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B56a3c3:{NFSU2_TR(0x56a3c3);
if(r1(R+518)){{goto L56a842;}}
}
B56a3c9:L56a3c9:{c.instructions+=6;NFSU2_TR(0x56a3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a3cf:{NFSU2_TR(0x56a3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a3d2:{NFSU2_TR(0x56a3d2);
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
B56a3d4:{NFSU2_TR(0x56a3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a3d7:{NFSU2_TR(0x56a3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56a3da:{NFSU2_TR(0x56a3da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56a842;}}
}
B56a3e0:L56a3e0:{c.instructions+=2;NFSU2_TR(0x56a3e0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a3e6:{NFSU2_TR(0x56a3e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56a842;}}
}
B56a3ec:L56a3ec:{c.instructions+=4;NFSU2_TR(0x56a3ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a3ed:{NFSU2_TR(0x56a3ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a3ee:{NFSU2_TR(0x56a3ee);
w4(R+4,u32(0x838980ull));
}
B56a3f3:{NFSU2_TR(0x56a3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a3f8ull));
TAIL_STATIC(0x50f1b0u,50f);
}
B56a3f8:L56a3f8:{c.instructions+=2;NFSU2_TR(0x56a3f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a3fa:{NFSU2_TR(0x56a3fa);
if(r1(R+518)){{goto L56a40c;}}
}
B56a3fc:L56a3fc:{c.instructions+=5;NFSU2_TR(0x56a3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a3ff:{NFSU2_TR(0x56a3ff);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a404:{NFSU2_TR(0x56a404);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a409:{NFSU2_TR(0x56a409);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a40a:{NFSU2_TR(0x56a40a);
{goto L56a45e;}
}
B56a40c:L56a40c:{c.instructions+=2;NFSU2_TR(0x56a40c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a413:{NFSU2_TR(0x56a413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a4d8;}}
}
B56a419:L56a419:{c.instructions+=4;NFSU2_TR(0x56a419);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a41a:{NFSU2_TR(0x56a41a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a41b:{NFSU2_TR(0x56a41b);
w4(R+4,u32(0x838980ull));
}
B56a420:{NFSU2_TR(0x56a420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a425ull));
TAIL_STATIC(0x521be0u,521);
}
B56a425:L56a425:{c.instructions+=2;NFSU2_TR(0x56a425);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a427:{NFSU2_TR(0x56a427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a4d8;}}
}
B56a42d:L56a42d:{c.instructions+=2;NFSU2_TR(0x56a42d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B56a431:{NFSU2_TR(0x56a431);
if(r1(R+518)){{goto L56a4d8;}}
}
B56a437:L56a437:{c.instructions+=6;NFSU2_TR(0x56a437);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B56a43c:{NFSU2_TR(0x56a43c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a43d:{NFSU2_TR(0x56a43d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a43e:{NFSU2_TR(0x56a43e);
w4(R+4,u32(0x85ad40ull));
}
B56a443:{NFSU2_TR(0x56a443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56a446:{NFSU2_TR(0x56a446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a44bull));
TAIL_STATIC(0x514280u,514);
}
B56a44b:L56a44b:{c.instructions+=2;NFSU2_TR(0x56a44b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B56a44e:{NFSU2_TR(0x56a44e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56a47e;}}
}
B56a450:L56a450:{c.instructions+=4;NFSU2_TR(0x56a450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a453:{NFSU2_TR(0x56a453);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a458:{NFSU2_TR(0x56a458);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a45d:{NFSU2_TR(0x56a45d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a45e:L56a45e:{c.instructions+=1;NFSU2_TR(0x56a45e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a463ull));
TAIL_STATIC(0x558430u,558);
}
B56a463:L56a463:{c.instructions+=4;NFSU2_TR(0x56a463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56a466:{NFSU2_TR(0x56a466);
__builtin_memmove((R+4),(R+24),4);
}
B56a468:{NFSU2_TR(0x56a468);
s4(0x838970,u32(0x34dc1becull));
}
B56a472:{NFSU2_TR(0x56a472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a477ull));
TAIL_STATIC(0x562940u,562);
}
B56a477:L56a477:{c.instructions+=5;NFSU2_TR(0x56a477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a478:{NFSU2_TR(0x56a478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a479:{NFSU2_TR(0x56a479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a47a:{NFSU2_TR(0x56a47a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a47b:{NFSU2_TR(0x56a47b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a47e:L56a47e:{c.instructions+=3;NFSU2_TR(0x56a47e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a481:{NFSU2_TR(0x56a481);
w4(R+0,u32(0x44b7167full));
}
B56a486:{NFSU2_TR(0x56a486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a4b1;}}
}
B56a488:L56a488:{c.instructions+=3;NFSU2_TR(0x56a488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a489:{NFSU2_TR(0x56a489);
w4(R+4,u32(0x838980ull));
}
B56a48e:{NFSU2_TR(0x56a48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a493ull));
TAIL_STATIC(0x50f150u,50f);
}
B56a493:L56a493:{c.instructions+=2;NFSU2_TR(0x56a493);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a495:{NFSU2_TR(0x56a495);
if(r1(R+518)){{goto L56a49e;}}
}
B56a497:L56a497:{c.instructions+=2;NFSU2_TR(0x56a497);
w4(R+0,u32(0xf58c0cd9ull));
}
B56a49c:{NFSU2_TR(0x56a49c);
{goto L56a4b1;}
}
B56a49e:L56a49e:{c.instructions+=6;NFSU2_TR(0x56a49e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a4a1:{NFSU2_TR(0x56a4a1);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B56a4a3:{NFSU2_TR(0x56a4a3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B56a4a5:{NFSU2_TR(0x56a4a5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B56a4a7:{NFSU2_TR(0x56a4a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x294e7f46ull))));
}
B56a4ac:{NFSU2_TR(0x56a4ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x266131ceull))));
}
B56a4b1:L56a4b1:{c.instructions+=11;NFSU2_TR(0x56a4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a4b4:{NFSU2_TR(0x56a4b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4b5:{NFSU2_TR(0x56a4b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4b7:{NFSU2_TR(0x56a4b7);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4bc:{NFSU2_TR(0x56a4bc);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4c1:{NFSU2_TR(0x56a4c1);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4c6:{NFSU2_TR(0x56a4c6);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4cb:{NFSU2_TR(0x56a4cb);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4d0:{NFSU2_TR(0x56a4d0);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4d5:{NFSU2_TR(0x56a4d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4d6:{NFSU2_TR(0x56a4d6);
{goto L56a531;}
}
B56a4d8:L56a4d8:{c.instructions+=3;NFSU2_TR(0x56a4d8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a4db:{NFSU2_TR(0x56a4db);
w4(R+0,u32(0xf5ac2b2aull));
}
B56a4e0:{NFSU2_TR(0x56a4e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a50c;}}
}
B56a4e2:L56a4e2:{c.instructions+=3;NFSU2_TR(0x56a4e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a4e3:{NFSU2_TR(0x56a4e3);
w4(R+4,u32(0x838980ull));
}
B56a4e8:{NFSU2_TR(0x56a4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a4edull));
TAIL_STATIC(0x50f150u,50f);
}
B56a4ed:L56a4ed:{c.instructions+=2;NFSU2_TR(0x56a4ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a4ef:{NFSU2_TR(0x56a4ef);
if(r1(R+518)){{goto L56a4f8;}}
}
B56a4f1:L56a4f1:{c.instructions+=2;NFSU2_TR(0x56a4f1);
w4(R+0,u32(0x113eab80ull));
}
B56a4f6:{NFSU2_TR(0x56a4f6);
{goto L56a50c;}
}
B56a4f8:L56a4f8:{c.instructions+=2;NFSU2_TR(0x56a4f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a4fa:{NFSU2_TR(0x56a4fa);
if(r1(R+518)){{goto L56a507;}}
}
B56a4fc:L56a4fc:{c.instructions+=3;NFSU2_TR(0x56a4fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B56a500:{NFSU2_TR(0x56a500);
w4(R+0,u32(0x266131ceull));
}
B56a505:{NFSU2_TR(0x56a505);
if(r1(R+518)){{goto L56a50c;}}
}
B56a507:L56a507:{c.instructions+=1;NFSU2_TR(0x56a507);
w4(R+0,u32(0x8e4312b0ull));
}
B56a50c:L56a50c:{c.instructions+=10;NFSU2_TR(0x56a50c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a50d:{NFSU2_TR(0x56a50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a510:{NFSU2_TR(0x56a510);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a512:{NFSU2_TR(0x56a512);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a517:{NFSU2_TR(0x56a517);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a51c:{NFSU2_TR(0x56a51c);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a521:{NFSU2_TR(0x56a521);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a526:{NFSU2_TR(0x56a526);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a52b:{NFSU2_TR(0x56a52b);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a530:{NFSU2_TR(0x56a530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a531:L56a531:{c.instructions+=1;NFSU2_TR(0x56a531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a536ull));
TAIL_STATIC(0x558790u,558);
}
B56a536:L56a536:{c.instructions+=4;NFSU2_TR(0x56a536);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56a539:{NFSU2_TR(0x56a539);
__builtin_memmove((R+4),(R+24),4);
}
B56a53b:{NFSU2_TR(0x56a53b);
s4(0x838970,u32(0xb4623f67ull));
}
B56a545:{NFSU2_TR(0x56a545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a54aull));
TAIL_STATIC(0x562940u,562);
}
B56a54a:L56a54a:{c.instructions+=5;NFSU2_TR(0x56a54a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a54b:{NFSU2_TR(0x56a54b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a54c:{NFSU2_TR(0x56a54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a54d:{NFSU2_TR(0x56a54d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a54e:{NFSU2_TR(0x56a54e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a551:L56a551:{c.instructions+=8;NFSU2_TR(0x56a551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a554:{NFSU2_TR(0x56a554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a557:{NFSU2_TR(0x56a557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a55d:{NFSU2_TR(0x56a55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a560:{NFSU2_TR(0x56a560);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a561:{NFSU2_TR(0x56a561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a562:{NFSU2_TR(0x56a562);
w4(R+4,u32(0x838980ull));
}
B56a567:{NFSU2_TR(0x56a567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a56cull));
TAIL_STATIC(0x55c230u,55c);
}
B56a56c:L56a56c:{c.instructions+=3;NFSU2_TR(0x56a56c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a56d:{NFSU2_TR(0x56a56d);
w4(R+4,u32(0x838980ull));
}
B56a572:{NFSU2_TR(0x56a572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a577ull));
TAIL_STATIC(0x521280u,521);
}
B56a577:L56a577:{c.instructions+=7;NFSU2_TR(0x56a577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a578:{NFSU2_TR(0x56a578);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a57f:{NFSU2_TR(0x56a57f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a586:{NFSU2_TR(0x56a586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a587:{NFSU2_TR(0x56a587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a588:{NFSU2_TR(0x56a588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a589:{NFSU2_TR(0x56a589);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a58c:L56a58c:{c.instructions+=2;NFSU2_TR(0x56a58c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a592:{NFSU2_TR(0x56a592);
if(r1(R+518)){{goto L56a61a;}}
}
B56a598:L56a598:{c.instructions+=2;NFSU2_TR(0x56a598);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81f0b71aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a59e:{NFSU2_TR(0x56a59e);
if(r1(R+518)){{goto L56a5c1;}}
}
B56a5a0:L56a5a0:{c.instructions+=2;NFSU2_TR(0x56a5a0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a5a6:{NFSU2_TR(0x56a5a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a842;}}
}
B56a5ac:L56a5ac:{c.instructions+=3;NFSU2_TR(0x56a5ac);
u8 U[4];
w4(U+0,u32(0x799a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5b1:{NFSU2_TR(0x56a5b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5b2:{NFSU2_TR(0x56a5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a5b7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a5b7:L56a5b7:{c.instructions+=6;NFSU2_TR(0x56a5b7);
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
B56a5ba:{NFSU2_TR(0x56a5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a5bb:{NFSU2_TR(0x56a5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a5bc:{NFSU2_TR(0x56a5bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a5bd:{NFSU2_TR(0x56a5bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a5be:{NFSU2_TR(0x56a5be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a5c1:L56a5c1:{c.instructions+=4;NFSU2_TR(0x56a5c1);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5c6:{NFSU2_TR(0x56a5c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5c8:{NFSU2_TR(0x56a5c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5ca:{NFSU2_TR(0x56a5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a5cfull));
TAIL_STATIC(0x4c1860u,4c1);
}
B56a5cf:L56a5cf:{c.instructions+=4;NFSU2_TR(0x56a5cf);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5d4:{NFSU2_TR(0x56a5d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5d6:{NFSU2_TR(0x56a5d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5d8:{NFSU2_TR(0x56a5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a5ddull));
TAIL_STATIC(0x4c1860u,4c1);
}
B56a5dd:L56a5dd:{c.instructions+=5;NFSU2_TR(0x56a5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a5e0:{NFSU2_TR(0x56a5e0);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5e5:{NFSU2_TR(0x56a5e5);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5ea:{NFSU2_TR(0x56a5ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a5eb:{NFSU2_TR(0x56a5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a5f0ull));
TAIL_STATIC(0x537d40u,537);
}
B56a5f0:L56a5f0:{c.instructions+=3;NFSU2_TR(0x56a5f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56a5f3:{NFSU2_TR(0x56a5f3);
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
B56a5f5:{NFSU2_TR(0x56a5f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a842;}}
}
B56a5fb:L56a5fb:{c.instructions+=6;NFSU2_TR(0x56a5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a5fe:{NFSU2_TR(0x56a5fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a600:{NFSU2_TR(0x56a600);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a605:{NFSU2_TR(0x56a605);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a60a:{NFSU2_TR(0x56a60a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a60b:{NFSU2_TR(0x56a60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a610ull));
TAIL_STATIC(0x537c60u,537);
}
B56a610:L56a610:{c.instructions+=6;NFSU2_TR(0x56a610);
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
B56a613:{NFSU2_TR(0x56a613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a614:{NFSU2_TR(0x56a614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a615:{NFSU2_TR(0x56a615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a616:{NFSU2_TR(0x56a616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a617:{NFSU2_TR(0x56a617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a61a:L56a61a:{c.instructions+=3;NFSU2_TR(0x56a61a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a61c:{NFSU2_TR(0x56a61c);
__builtin_memmove((R+4),(R+24),4);
}
B56a61e:{NFSU2_TR(0x56a61e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a623ull));
TAIL_STATIC(0x55cac0u,55c);
}
B56a623:L56a623:{c.instructions+=5;NFSU2_TR(0x56a623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a624:{NFSU2_TR(0x56a624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a625:{NFSU2_TR(0x56a625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a626:{NFSU2_TR(0x56a626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a627:{NFSU2_TR(0x56a627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a62a:L56a62a:{c.instructions+=3;NFSU2_TR(0x56a62a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a62c:{NFSU2_TR(0x56a62c);
__builtin_memmove((R+4),(R+24),4);
}
B56a62e:{NFSU2_TR(0x56a62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a633ull));
TAIL_STATIC(0x55cac0u,55c);
}
B56a633:L56a633:{c.instructions+=5;NFSU2_TR(0x56a633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a634:{NFSU2_TR(0x56a634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a635:{NFSU2_TR(0x56a635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a636:{NFSU2_TR(0x56a636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a637:{NFSU2_TR(0x56a637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a63a:L56a63a:{c.instructions+=2;NFSU2_TR(0x56a63a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb4edeb6dull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a640:{NFSU2_TR(0x56a640);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a764;}}
}
B56a646:L56a646:{c.instructions+=1;NFSU2_TR(0x56a646);
if(r1(R+518)){{goto L56a744;}}
}
B56a64c:L56a64c:{c.instructions+=2;NFSU2_TR(0x56a64c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a652:{NFSU2_TR(0x56a652);
if(r1(R+518)){{goto L56a822;}}
}
B56a658:L56a658:{c.instructions+=2;NFSU2_TR(0x56a658);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a65e:{NFSU2_TR(0x56a65e);
if(r1(R+518)){{goto L56a67a;}}
}
B56a660:L56a660:{c.instructions+=2;NFSU2_TR(0x56a660);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb4623f67ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a666:{NFSU2_TR(0x56a666);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a842;}}
}
B56a66c:L56a66c:{c.instructions+=2;NFSU2_TR(0x56a66c);
__builtin_memmove((R+4),(R+24),4);
}
B56a66e:{NFSU2_TR(0x56a66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a673ull));
TAIL_STATIC(0x562a20u,562);
}
B56a673:L56a673:{c.instructions+=5;NFSU2_TR(0x56a673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a674:{NFSU2_TR(0x56a674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a675:{NFSU2_TR(0x56a675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a676:{NFSU2_TR(0x56a676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a677:{NFSU2_TR(0x56a677);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a67a:L56a67a:{c.instructions+=2;NFSU2_TR(0x56a67a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56a680:{NFSU2_TR(0x56a680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a685ull));
TAIL_STATIC(0x538130u,538);
}
B56a685:L56a685:{c.instructions+=6;NFSU2_TR(0x56a685);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56a68b:{NFSU2_TR(0x56a68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a691:{NFSU2_TR(0x56a691);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56a697:{NFSU2_TR(0x56a697);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56a699:{NFSU2_TR(0x56a699);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56a69c:{NFSU2_TR(0x56a69c);
if(r1(R+514)){{goto L56a6a7;}}
}
B56a69e:L56a69e:{c.instructions+=3;NFSU2_TR(0x56a69e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56a6a0:{NFSU2_TR(0x56a6a0);
w4(R+4,u32(0x1ull));
}
B56a6a5:{NFSU2_TR(0x56a6a5);
{goto L56a6b7;}
}
B56a6a7:L56a6a7:{c.instructions+=4;NFSU2_TR(0x56a6a7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56a6ad:{NFSU2_TR(0x56a6ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56a6af:{NFSU2_TR(0x56a6af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a6b2:{NFSU2_TR(0x56a6b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a6b7;}}
}
B56a6b4:L56a6b4:{c.instructions+=1;NFSU2_TR(0x56a6b4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B56a6b7:L56a6b7:{c.instructions+=3;NFSU2_TR(0x56a6b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((R+0),(U+0),4);
}
B56a6ba:{NFSU2_TR(0x56a6ba);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a6bd:{NFSU2_TR(0x56a6bd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56a715;}}
}
B56a6bf:L56a6bf:{c.instructions+=2;NFSU2_TR(0x56a6bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56a85cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B56a6c6:{NFSU2_TR(0x56a6c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x56a84cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56a6cd:L56a6cd:{c.instructions+=3;NFSU2_TR(0x56a6cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a6ce:{NFSU2_TR(0x56a6ce);
__builtin_memmove((R+4),(R+24),4);
}
B56a6d0:{NFSU2_TR(0x56a6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a6d5ull));
TAIL_STATIC(0x55cac0u,55c);
}
B56a6d5:L56a6d5:{c.instructions+=1;NFSU2_TR(0x56a6d5);
{goto L56a715;}
}
B56a6d7:L56a6d7:{c.instructions+=4;NFSU2_TR(0x56a6d7);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56a6dc:{NFSU2_TR(0x56a6dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56a6de:{NFSU2_TR(0x56a6de);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a6e0:{NFSU2_TR(0x56a6e0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56a715;}}
}
B56a6e2:L56a6e2:{c.instructions+=3;NFSU2_TR(0x56a6e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a6e4:{NFSU2_TR(0x56a6e4);
__builtin_memmove((R+4),(R+24),4);
}
B56a6e6:{NFSU2_TR(0x56a6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a6ebull));
TAIL_STATIC(0x55cac0u,55c);
}
B56a6eb:L56a6eb:{c.instructions+=4;NFSU2_TR(0x56a6eb);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56a6f0:{NFSU2_TR(0x56a6f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56a6f1:{NFSU2_TR(0x56a6f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56a6f3:{NFSU2_TR(0x56a6f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56a6e2u);}goto L56a6e2;}}
}
B56a6f5:L56a6f5:{c.instructions+=1;NFSU2_TR(0x56a6f5);
{goto L56a715;}
}
B56a6f7:L56a6f7:{c.instructions+=4;NFSU2_TR(0x56a6f7);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56a6fc:{NFSU2_TR(0x56a6fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56a6fe:{NFSU2_TR(0x56a6fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a700:{NFSU2_TR(0x56a700);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56a715;}}
}
B56a702:L56a702:{c.instructions+=3;NFSU2_TR(0x56a702);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a704:{NFSU2_TR(0x56a704);
__builtin_memmove((R+4),(R+24),4);
}
B56a706:{NFSU2_TR(0x56a706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a70bull));
TAIL_STATIC(0x55cac0u,55c);
}
B56a70b:L56a70b:{c.instructions+=4;NFSU2_TR(0x56a70b);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56a710:{NFSU2_TR(0x56a710);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56a711:{NFSU2_TR(0x56a711);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56a713:{NFSU2_TR(0x56a713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56a702u);}goto L56a702;}}
}
B56a715:L56a715:{c.instructions+=3;NFSU2_TR(0x56a715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a71b:{NFSU2_TR(0x56a71b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a71c:{NFSU2_TR(0x56a71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a721ull));
TAIL_STATIC(0x52d090u,52d);
}
B56a721:L56a721:{c.instructions+=3;NFSU2_TR(0x56a721);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56a724:{NFSU2_TR(0x56a724);
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
B56a726:{NFSU2_TR(0x56a726);
if(r1(R+518)){{goto L56a842;}}
}
B56a72c:L56a72c:{c.instructions+=4;NFSU2_TR(0x56a72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a72f:{NFSU2_TR(0x56a72f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a730:{NFSU2_TR(0x56a730);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a735:{NFSU2_TR(0x56a735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a73aull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a73a:L56a73a:{c.instructions+=6;NFSU2_TR(0x56a73a);
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
B56a73d:{NFSU2_TR(0x56a73d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a73e:{NFSU2_TR(0x56a73e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a73f:{NFSU2_TR(0x56a73f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a740:{NFSU2_TR(0x56a740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a741:{NFSU2_TR(0x56a741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a744:L56a744:{c.instructions+=2;NFSU2_TR(0x56a744);
__builtin_memmove((R+4),(R+24),4);
}
B56a746:{NFSU2_TR(0x56a746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a74bull));
TAIL_STATIC(0x562a20u,562);
}
B56a74b:L56a74b:{c.instructions+=5;NFSU2_TR(0x56a74b);
__builtin_memmove((R+8),gp(0x7fa1c4),4);
}
B56a751:{NFSU2_TR(0x56a751);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a753:{NFSU2_TR(0x56a753);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a754:{NFSU2_TR(0x56a754);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a755:{NFSU2_TR(0x56a755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a75aull));
TAIL_STATIC(0x51cdf0u,51c);
}
B56a75a:L56a75a:{c.instructions+=6;NFSU2_TR(0x56a75a);
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
B56a75d:{NFSU2_TR(0x56a75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a75e:{NFSU2_TR(0x56a75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a75f:{NFSU2_TR(0x56a75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a760:{NFSU2_TR(0x56a760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a761:{NFSU2_TR(0x56a761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a764:L56a764:{c.instructions+=2;NFSU2_TR(0x56a764);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a76a:{NFSU2_TR(0x56a76a);
if(r1(R+518)){{goto L56a822;}}
}
B56a770:L56a770:{c.instructions+=2;NFSU2_TR(0x56a770);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a776:{NFSU2_TR(0x56a776);
if(r1(R+518)){{goto L56a79c;}}
}
B56a778:L56a778:{c.instructions+=2;NFSU2_TR(0x56a778);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a77e:{NFSU2_TR(0x56a77e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a842;}}
}
B56a784:L56a784:{c.instructions+=3;NFSU2_TR(0x56a784);
w4(R+4,u32(0x838980ull));
}
B56a789:{NFSU2_TR(0x56a789);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a790:{NFSU2_TR(0x56a790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a795ull));
TAIL_STATIC(0x530140u,530);
}
B56a795:L56a795:{c.instructions+=5;NFSU2_TR(0x56a795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a796:{NFSU2_TR(0x56a796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a797:{NFSU2_TR(0x56a797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a798:{NFSU2_TR(0x56a798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a799:{NFSU2_TR(0x56a799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a79c:L56a79c:{c.instructions+=3;NFSU2_TR(0x56a79c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a7a2:{NFSU2_TR(0x56a7a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a7a4:{NFSU2_TR(0x56a7a4);
if(r1(R+518)){{goto L56a813;}}
}
B56a7a6:L56a7a6:{c.instructions+=4;NFSU2_TR(0x56a7a6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7ab:{NFSU2_TR(0x56a7ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7ad:{NFSU2_TR(0x56a7ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7af:{NFSU2_TR(0x56a7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a7b4ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B56a7b4:L56a7b4:{c.instructions+=4;NFSU2_TR(0x56a7b4);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7b9:{NFSU2_TR(0x56a7b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7bb:{NFSU2_TR(0x56a7bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7bd:{NFSU2_TR(0x56a7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a7c2ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B56a7c2:L56a7c2:{c.instructions+=4;NFSU2_TR(0x56a7c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a7c8:{NFSU2_TR(0x56a7c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B56a7cb:{NFSU2_TR(0x56a7cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a7cd:{NFSU2_TR(0x56a7cd);
if(r1(R+518)){{goto L56a7dc;}}
}
B56a7cf:L56a7cf:{c.instructions+=4;NFSU2_TR(0x56a7cf);
__builtin_memmove((R+0),gp(0x7fa1c4),4);
}
B56a7d4:{NFSU2_TR(0x56a7d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7d5:{NFSU2_TR(0x56a7d5);
u8 U[4];
w4(U+0,u32(0x8acaa8dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7da:{NFSU2_TR(0x56a7da);
{goto L56a7e8;}
}
B56a7dc:L56a7dc:{c.instructions+=3;NFSU2_TR(0x56a7dc);
__builtin_memmove((R+4),gp(0x7fa1c4),4);
}
B56a7e2:{NFSU2_TR(0x56a7e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7e3:{NFSU2_TR(0x56a7e3);
u8 U[4];
w4(U+0,u32(0x9fbbd1d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7e8:L56a7e8:{c.instructions+=1;NFSU2_TR(0x56a7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a7edull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a7ed:L56a7ed:{c.instructions+=5;NFSU2_TR(0x56a7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a7f0:{NFSU2_TR(0x56a7f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56a7f3:{NFSU2_TR(0x56a7f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a7f4:{NFSU2_TR(0x56a7f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a7fb:{NFSU2_TR(0x56a7fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a800ull));
TAIL_STATIC(0x5379a0u,537);
}
B56a800:L56a800:{c.instructions+=3;NFSU2_TR(0x56a800);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a802:{NFSU2_TR(0x56a802);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a804:{NFSU2_TR(0x56a804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a809ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B56a809:L56a809:{c.instructions+=6;NFSU2_TR(0x56a809);
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
B56a80c:{NFSU2_TR(0x56a80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a80d:{NFSU2_TR(0x56a80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a80e:{NFSU2_TR(0x56a80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a80f:{NFSU2_TR(0x56a80f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a810:{NFSU2_TR(0x56a810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a813:L56a813:{c.instructions+=2;NFSU2_TR(0x56a813);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56a816:{NFSU2_TR(0x56a816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a81bull));
TAIL_STATIC(0x538760u,538);
}
B56a81b:L56a81b:{c.instructions+=5;NFSU2_TR(0x56a81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a81c:{NFSU2_TR(0x56a81c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a81d:{NFSU2_TR(0x56a81d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a81e:{NFSU2_TR(0x56a81e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a81f:{NFSU2_TR(0x56a81f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a822:L56a822:{c.instructions+=3;NFSU2_TR(0x56a822);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a827:{NFSU2_TR(0x56a827);
w4(R+4,u32(0x8389d0ull));
}
B56a82c:{NFSU2_TR(0x56a82c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a831ull));
TAIL_STATIC(0x413440u,413);
}
B56a831:L56a831:{c.instructions+=4;NFSU2_TR(0x56a831);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a833:{NFSU2_TR(0x56a833);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a835:{NFSU2_TR(0x56a835);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a83a:{NFSU2_TR(0x56a83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a83full));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B56a83f:L56a83f:{c.instructions+=1;NFSU2_TR(0x56a83f);
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
B56a842:L56a842:{c.instructions+=5;NFSU2_TR(0x56a842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a843:{NFSU2_TR(0x56a843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a844:{NFSU2_TR(0x56a844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56a845:{NFSU2_TR(0x56a845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a846:{NFSU2_TR(0x56a846);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a880:L56a880:{c.instructions+=9;NFSU2_TR(0x56a880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a881:{NFSU2_TR(0x56a881);
__builtin_memmove((R+20),(R+16),4);
}
B56a883:{NFSU2_TR(0x56a883);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a884:{NFSU2_TR(0x56a884);
__builtin_memmove((R+24),(R+4),4);
}
B56a886:{NFSU2_TR(0x56a886);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a88c:{NFSU2_TR(0x56a88c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a88e:{NFSU2_TR(0x56a88e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a88f:{NFSU2_TR(0x56a88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56a892:{NFSU2_TR(0x56a892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a8a8;}}
}
B56a894:L56a894:{c.instructions+=9;NFSU2_TR(0x56a894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a897:{NFSU2_TR(0x56a897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a89a:{NFSU2_TR(0x56a89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a89d:{NFSU2_TR(0x56a89d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a89e:{NFSU2_TR(0x56a89e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a89f:{NFSU2_TR(0x56a89f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8a0:{NFSU2_TR(0x56a8a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8a1:{NFSU2_TR(0x56a8a1);
__builtin_memmove((R+4),(R+24),4);
}
B56a8a3:{NFSU2_TR(0x56a8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a8a8ull));
TAIL_STATIC(0x543d40u,543);
}
B56a8a8:L56a8a8:{c.instructions+=2;NFSU2_TR(0x56a8a8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a8ae:{NFSU2_TR(0x56a8ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56aa76;}}
}
B56a8b4:L56a8b4:{c.instructions+=1;NFSU2_TR(0x56a8b4);
if(r1(R+518)){{goto L56a9fe;}}
}
B56a8ba:L56a8ba:{c.instructions+=2;NFSU2_TR(0x56a8ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a8c0:{NFSU2_TR(0x56a8c0);
if(r1(R+518)){{goto L56a931;}}
}
B56a8c2:L56a8c2:{c.instructions+=2;NFSU2_TR(0x56a8c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56a8c8:{NFSU2_TR(0x56a8c8);
if(r1(R+518)){{goto L56a919;}}
}
B56a8ca:L56a8ca:{c.instructions+=2;NFSU2_TR(0x56a8ca);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8acaa8dfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8acaa8dfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8acaa8dfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56a8d0:{NFSU2_TR(0x56a8d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56aaf5;}}
}
B56a8d6:L56a8d6:{c.instructions+=4;NFSU2_TR(0x56a8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a8d9:{NFSU2_TR(0x56a8d9);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8de:{NFSU2_TR(0x56a8de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8df:{NFSU2_TR(0x56a8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a8e4ull));
TAIL_STATIC(0x495520u,495);
}
B56a8e4:L56a8e4:{c.instructions+=5;NFSU2_TR(0x56a8e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8e6:{NFSU2_TR(0x56a8e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a8e8:{NFSU2_TR(0x56a8e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a8ef:{NFSU2_TR(0x56a8ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a8f3:{NFSU2_TR(0x56a8f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a8f8ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B56a8f8:L56a8f8:{c.instructions+=3;NFSU2_TR(0x56a8f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56a8fb:{NFSU2_TR(0x56a8fb);
__builtin_memmove((R+4),(R+24),4);
}
B56a8fd:{NFSU2_TR(0x56a8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a902ull));
TAIL_STATIC(0x538ca0u,538);
}
B56a902:L56a902:{c.instructions+=4;NFSU2_TR(0x56a902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a905:{NFSU2_TR(0x56a905);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a90a:{NFSU2_TR(0x56a90a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a90b:{NFSU2_TR(0x56a90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a910ull));
TAIL_STATIC(0x537950u,537);
}
B56a910:L56a910:{c.instructions+=5;NFSU2_TR(0x56a910);
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
B56a913:{NFSU2_TR(0x56a913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a914:{NFSU2_TR(0x56a914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a915:{NFSU2_TR(0x56a915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a916:{NFSU2_TR(0x56a916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a919:L56a919:{c.instructions+=3;NFSU2_TR(0x56a919);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a91f:{NFSU2_TR(0x56a91f);
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
B56a921:{NFSU2_TR(0x56a921);
if(r1(R+518)){{goto L56aaf5;}}
}
B56a927:L56a927:{c.instructions+=5;NFSU2_TR(0x56a927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a928:{NFSU2_TR(0x56a928);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56a92c:{NFSU2_TR(0x56a92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a92d:{NFSU2_TR(0x56a92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a92e:{NFSU2_TR(0x56a92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a931:L56a931:{c.instructions+=4;NFSU2_TR(0x56a931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56a934:{NFSU2_TR(0x56a934);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a937:{NFSU2_TR(0x56a937);
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
B56a939:{NFSU2_TR(0x56a939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56aaf5;}}
}
B56a93f:L56a93f:{c.instructions+=3;NFSU2_TR(0x56a93f);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a941:{NFSU2_TR(0x56a941);
w4(R+4,u32(0x8392c0ull));
}
B56a946:{NFSU2_TR(0x56a946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a94bull));
TAIL_STATIC(0x6102f0u,610);
}
B56a94b:L56a94b:{c.instructions+=3;NFSU2_TR(0x56a94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a94e:{NFSU2_TR(0x56a94e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B56a955:{NFSU2_TR(0x56a955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a96d;}}
}
B56a957:L56a957:{c.instructions+=2;NFSU2_TR(0x56a957);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a959:{NFSU2_TR(0x56a959);
if(r1(R+518)){{goto L56a966;}}
}
B56a95b:L56a95b:{c.instructions+=4;NFSU2_TR(0x56a95b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56a95e:{NFSU2_TR(0x56a95e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B56a961:{NFSU2_TR(0x56a961);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x3ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56a964:{NFSU2_TR(0x56a964);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56a96d;}}
}
B56a966:L56a966:{c.instructions+=2;NFSU2_TR(0x56a966);
u8 U[4];
w4(U+0,u32(0xd649be08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a96b:{NFSU2_TR(0x56a96b);
{goto L56a999;}
}
B56a96d:L56a96d:{c.instructions+=3;NFSU2_TR(0x56a96d);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a96f:{NFSU2_TR(0x56a96f);
w4(R+4,u32(0x8392c0ull));
}
B56a974:{NFSU2_TR(0x56a974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a979ull));
TAIL_STATIC(0x6102f0u,610);
}
B56a979:L56a979:{c.instructions+=3;NFSU2_TR(0x56a979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56a97c:{NFSU2_TR(0x56a97c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56a983:{NFSU2_TR(0x56a983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a9ba;}}
}
B56a985:L56a985:{c.instructions+=2;NFSU2_TR(0x56a985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56a987:{NFSU2_TR(0x56a987);
if(r1(R+518)){{goto L56a994;}}
}
B56a989:L56a989:{c.instructions+=4;NFSU2_TR(0x56a989);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B56a98c:{NFSU2_TR(0x56a98c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B56a98f:{NFSU2_TR(0x56a98f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x3ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B56a992:{NFSU2_TR(0x56a992);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56a9ba;}}
}
B56a994:L56a994:{c.instructions+=1;NFSU2_TR(0x56a994);
u8 U[4];
w4(U+0,u32(0xa9e966d7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a999:L56a999:{c.instructions+=4;NFSU2_TR(0x56a999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56a99c:{NFSU2_TR(0x56a99c);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a9a1:{NFSU2_TR(0x56a9a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a9a2:{NFSU2_TR(0x56a9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a9a7ull));
TAIL_STATIC(0x558430u,558);
}
B56a9a7:L56a9a7:{c.instructions+=6;NFSU2_TR(0x56a9a7);
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
B56a9aa:{NFSU2_TR(0x56a9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a9ab:{NFSU2_TR(0x56a9ab);
s4(0x838970,u32(0x34dc1becull));
}
B56a9b5:{NFSU2_TR(0x56a9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a9b6:{NFSU2_TR(0x56a9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a9b7:{NFSU2_TR(0x56a9b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a9ba:L56a9ba:{c.instructions+=3;NFSU2_TR(0x56a9ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a9bd:{NFSU2_TR(0x56a9bd);
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
B56a9bf:{NFSU2_TR(0x56a9bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56aaf5;}}
}
B56a9c5:L56a9c5:{c.instructions+=3;NFSU2_TR(0x56a9c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56a9cb:{NFSU2_TR(0x56a9cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56a9cd:{NFSU2_TR(0x56a9cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56a9dc;}}
}
B56a9cf:L56a9cf:{c.instructions+=2;NFSU2_TR(0x56a9cf);
__builtin_memmove((R+4),(R+24),4);
}
B56a9d1:{NFSU2_TR(0x56a9d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a9d6ull));
TAIL_STATIC(0x557130u,557);
}
B56a9d6:L56a9d6:{c.instructions+=4;NFSU2_TR(0x56a9d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a9d7:{NFSU2_TR(0x56a9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a9d8:{NFSU2_TR(0x56a9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a9d9:{NFSU2_TR(0x56a9d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a9dc:L56a9dc:{c.instructions+=3;NFSU2_TR(0x56a9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56a9e2:{NFSU2_TR(0x56a9e2);
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
B56a9e4:{NFSU2_TR(0x56a9e4);
if(r1(R+518)){{goto L56aaf5;}}
}
B56a9ea:L56a9ea:{c.instructions+=3;NFSU2_TR(0x56a9ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a9eb:{NFSU2_TR(0x56a9eb);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56a9f0:{NFSU2_TR(0x56a9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56a9f5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56a9f5:L56a9f5:{c.instructions+=5;NFSU2_TR(0x56a9f5);
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
B56a9f8:{NFSU2_TR(0x56a9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56a9f9:{NFSU2_TR(0x56a9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56a9fa:{NFSU2_TR(0x56a9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56a9fb:{NFSU2_TR(0x56a9fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56a9fe:L56a9fe:{c.instructions+=3;NFSU2_TR(0x56a9fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56aa04:{NFSU2_TR(0x56aa04);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56aa06:{NFSU2_TR(0x56aa06);
if(r1(R+518)){{goto L56aa15;}}
}
B56aa08:L56aa08:{c.instructions+=2;NFSU2_TR(0x56aa08);
__builtin_memmove((R+4),(R+24),4);
}
B56aa0a:{NFSU2_TR(0x56aa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aa0full));
TAIL_STATIC(0x562b10u,562);
}
B56aa0f:L56aa0f:{c.instructions+=4;NFSU2_TR(0x56aa0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aa10:{NFSU2_TR(0x56aa10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aa11:{NFSU2_TR(0x56aa11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aa12:{NFSU2_TR(0x56aa12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aa15:L56aa15:{c.instructions+=5;NFSU2_TR(0x56aa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56aa18:{NFSU2_TR(0x56aa18);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa1d:{NFSU2_TR(0x56aa1d);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa22:{NFSU2_TR(0x56aa22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa23:{NFSU2_TR(0x56aa23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aa28ull));
TAIL_STATIC(0x537d40u,537);
}
B56aa28:L56aa28:{c.instructions+=3;NFSU2_TR(0x56aa28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56aa2b:{NFSU2_TR(0x56aa2b);
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
B56aa2d:{NFSU2_TR(0x56aa2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56aaf5;}}
}
B56aa33:L56aa33:{c.instructions+=6;NFSU2_TR(0x56aa33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56aa36:{NFSU2_TR(0x56aa36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa38:{NFSU2_TR(0x56aa38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa39:{NFSU2_TR(0x56aa39);
__builtin_memmove((R+4),(R+24),4);
}
B56aa3b:{NFSU2_TR(0x56aa3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56aa42:{NFSU2_TR(0x56aa42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aa47ull));
TAIL_STATIC(0x50f290u,50f);
}
B56aa47:L56aa47:{c.instructions+=4;NFSU2_TR(0x56aa47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56aa4d:{NFSU2_TR(0x56aa4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa4e:{NFSU2_TR(0x56aa4e);
u8 U[4];
w4(U+0,u32(0x81f0b71aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa53:{NFSU2_TR(0x56aa53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aa58ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56aa58:L56aa58:{c.instructions+=6;NFSU2_TR(0x56aa58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56aa5b:{NFSU2_TR(0x56aa5b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa5d:{NFSU2_TR(0x56aa5d);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa62:{NFSU2_TR(0x56aa62);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa67:{NFSU2_TR(0x56aa67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aa68:{NFSU2_TR(0x56aa68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aa6dull));
TAIL_STATIC(0x537c60u,537);
}
B56aa6d:L56aa6d:{c.instructions+=5;NFSU2_TR(0x56aa6d);
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
B56aa70:{NFSU2_TR(0x56aa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aa71:{NFSU2_TR(0x56aa71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aa72:{NFSU2_TR(0x56aa72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aa73:{NFSU2_TR(0x56aa73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aa76:L56aa76:{c.instructions+=2;NFSU2_TR(0x56aa76);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9fbbd1d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9fbbd1d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9fbbd1d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56aa7c:{NFSU2_TR(0x56aa7c);
if(r1(R+518)){{goto L56aaf1;}}
}
B56aa7e:L56aa7e:{c.instructions+=2;NFSU2_TR(0x56aa7e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56aa84:{NFSU2_TR(0x56aa84);
if(r1(R+518)){{goto L56aa9b;}}
}
B56aa86:L56aa86:{c.instructions+=2;NFSU2_TR(0x56aa86);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56aa8c:{NFSU2_TR(0x56aa8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56aaf5;}}
}
B56aa8e:L56aa8e:{c.instructions+=5;NFSU2_TR(0x56aa8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aa8f:{NFSU2_TR(0x56aa8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56aa96:{NFSU2_TR(0x56aa96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aa97:{NFSU2_TR(0x56aa97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aa98:{NFSU2_TR(0x56aa98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aa9b:L56aa9b:{c.instructions+=3;NFSU2_TR(0x56aa9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56aaa1:{NFSU2_TR(0x56aaa1);
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
B56aaa3:{NFSU2_TR(0x56aaa3);
if(r1(R+518)){{goto L56aaf5;}}
}
B56aaa5:L56aaa5:{c.instructions+=4;NFSU2_TR(0x56aaa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56aaab:{NFSU2_TR(0x56aaab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56aaad:{NFSU2_TR(0x56aaad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56aab4:{NFSU2_TR(0x56aab4);
if(r1(R+518)){{goto L56aadf;}}
}
B56aab6:L56aab6:{c.instructions+=4;NFSU2_TR(0x56aab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56aab9:{NFSU2_TR(0x56aab9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aabb:{NFSU2_TR(0x56aabb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aabc:{NFSU2_TR(0x56aabc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aac1ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B56aac1:L56aac1:{c.instructions+=3;NFSU2_TR(0x56aac1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aac3:{NFSU2_TR(0x56aac3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aac5:{NFSU2_TR(0x56aac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aacaull));
TAIL_STATIC(0x4c2140u,4c2);
}
B56aaca:L56aaca:{c.instructions+=2;NFSU2_TR(0x56aaca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56aacd:{NFSU2_TR(0x56aacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aad2ull));
TAIL_STATIC(0x54f980u,54f);
}
B56aad2:L56aad2:{c.instructions+=2;NFSU2_TR(0x56aad2);
__builtin_memmove((R+4),(R+0),4);
}
B56aad4:{NFSU2_TR(0x56aad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aad9ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B56aad9:L56aad9:{c.instructions+=4;NFSU2_TR(0x56aad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aada:{NFSU2_TR(0x56aada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aadb:{NFSU2_TR(0x56aadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aadc:{NFSU2_TR(0x56aadc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aadf:L56aadf:{c.instructions+=1;NFSU2_TR(0x56aadf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aae4ull));
TAIL_STATIC(0x54f980u,54f);
}
B56aae4:L56aae4:{c.instructions+=2;NFSU2_TR(0x56aae4);
__builtin_memmove((R+4),(R+0),4);
}
B56aae6:{NFSU2_TR(0x56aae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aaebull));
TAIL_STATIC(0x55bd60u,55b);
}
B56aaeb:L56aaeb:{c.instructions+=4;NFSU2_TR(0x56aaeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aaec:{NFSU2_TR(0x56aaec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aaed:{NFSU2_TR(0x56aaed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aaee:{NFSU2_TR(0x56aaee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aaf1:L56aaf1:{c.instructions+=1;NFSU2_TR(0x56aaf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56aaf5:L56aaf5:{c.instructions+=4;NFSU2_TR(0x56aaf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56aaf6:{NFSU2_TR(0x56aaf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56aaf7:{NFSU2_TR(0x56aaf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aaf8:{NFSU2_TR(0x56aaf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ab00:L56ab00:{c.instructions+=16;NFSU2_TR(0x56ab00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab01:{NFSU2_TR(0x56ab01);
__builtin_memmove((R+20),(R+16),4);
}
B56ab03:{NFSU2_TR(0x56ab03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ab06:{NFSU2_TR(0x56ab06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ab09:{NFSU2_TR(0x56ab09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab0a:{NFSU2_TR(0x56ab0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab0b:{NFSU2_TR(0x56ab0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56ab0e:{NFSU2_TR(0x56ab0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab0f:{NFSU2_TR(0x56ab0f);
__builtin_memmove((R+28),(R+4),4);
}
B56ab11:{NFSU2_TR(0x56ab11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ab14:{NFSU2_TR(0x56ab14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab15:{NFSU2_TR(0x56ab15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab16:{NFSU2_TR(0x56ab16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab17:{NFSU2_TR(0x56ab17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab18:{NFSU2_TR(0x56ab18);
__builtin_memmove((R+4),(R+28),4);
}
B56ab1a:{NFSU2_TR(0x56ab1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ab1full));
TAIL_STATIC(0x543d40u,543);
}
B56ab1f:L56ab1f:{c.instructions+=2;NFSU2_TR(0x56ab1f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x9803f6e2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ab25:{NFSU2_TR(0x56ab25);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56ac33;}}
}
B56ab2b:L56ab2b:{c.instructions+=1;NFSU2_TR(0x56ab2b);
if(r1(R+518)){{goto L56abcf;}}
}
B56ab31:L56ab31:{c.instructions+=2;NFSU2_TR(0x56ab31);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5073ef13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ab37:{NFSU2_TR(0x56ab37);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56ab74;}}
}
B56ab39:L56ab39:{c.instructions+=1;NFSU2_TR(0x56ab39);
if(r1(R+518)){{goto L56ad2c;}}
}
B56ab3f:L56ab3f:{c.instructions+=2;NFSU2_TR(0x56ab3f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ab45:{NFSU2_TR(0x56ab45);
if(r1(R+518)){{goto L56ab66;}}
}
B56ab47:L56ab47:{c.instructions+=2;NFSU2_TR(0x56ab47);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ab4d:{NFSU2_TR(0x56ab4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56ab53:L56ab53:{c.instructions+=3;NFSU2_TR(0x56ab53);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab55:{NFSU2_TR(0x56ab55);
w4(R+4,u32(0x8635bcull));
}
B56ab5a:{NFSU2_TR(0x56ab5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ab5full));
TAIL_STATIC(0x5243d0u,524);
}
B56ab5f:L56ab5f:{c.instructions+=5;NFSU2_TR(0x56ab5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ab60:{NFSU2_TR(0x56ab60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ab61:{NFSU2_TR(0x56ab61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ab62:{NFSU2_TR(0x56ab62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ab63:{NFSU2_TR(0x56ab63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ab66:L56ab66:{c.instructions+=2;NFSU2_TR(0x56ab66);
__builtin_memmove((R+4),(R+28),4);
}
B56ab68:{NFSU2_TR(0x56ab68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ab6dull));
TAIL_STATIC(0x538ca0u,538);
}
B56ab6d:L56ab6d:{c.instructions+=5;NFSU2_TR(0x56ab6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ab6e:{NFSU2_TR(0x56ab6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ab6f:{NFSU2_TR(0x56ab6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ab70:{NFSU2_TR(0x56ab70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ab71:{NFSU2_TR(0x56ab71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ab74:L56ab74:{c.instructions+=2;NFSU2_TR(0x56ab74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ab7a:{NFSU2_TR(0x56ab7a);
if(r1(R+518)){{goto L56ae6b;}}
}
B56ab80:L56ab80:{c.instructions+=2;NFSU2_TR(0x56ab80);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ab86:{NFSU2_TR(0x56ab86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56ab8c:L56ab8c:{c.instructions+=5;NFSU2_TR(0x56ab8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ab8f:{NFSU2_TR(0x56ab8f);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab94:{NFSU2_TR(0x56ab94);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab99:{NFSU2_TR(0x56ab99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ab9a:{NFSU2_TR(0x56ab9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ab9full));
TAIL_STATIC(0x537d40u,537);
}
B56ab9f:L56ab9f:{c.instructions+=3;NFSU2_TR(0x56ab9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56aba2:{NFSU2_TR(0x56aba2);
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
B56aba4:{NFSU2_TR(0x56aba4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56abaa:L56abaa:{c.instructions+=7;NFSU2_TR(0x56abaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56abad:{NFSU2_TR(0x56abad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abaf:{NFSU2_TR(0x56abaf);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abb4:{NFSU2_TR(0x56abb4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abb9:{NFSU2_TR(0x56abb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abba:{NFSU2_TR(0x56abba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56abc0:{NFSU2_TR(0x56abc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56abc5ull));
TAIL_STATIC(0x537c60u,537);
}
B56abc5:L56abc5:{c.instructions+=6;NFSU2_TR(0x56abc5);
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
B56abc8:{NFSU2_TR(0x56abc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56abc9:{NFSU2_TR(0x56abc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56abca:{NFSU2_TR(0x56abca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56abcb:{NFSU2_TR(0x56abcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56abcc:{NFSU2_TR(0x56abcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56abcf:L56abcf:{c.instructions+=4;NFSU2_TR(0x56abcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56abd2:{NFSU2_TR(0x56abd2);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abd7:{NFSU2_TR(0x56abd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abd8:{NFSU2_TR(0x56abd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56abddull));
TAIL_STATIC(0x537a60u,537);
}
B56abdd:L56abdd:{c.instructions+=5;NFSU2_TR(0x56abdd);
__builtin_memmove((R+24),(R+0),4);
}
B56abdf:{NFSU2_TR(0x56abdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56abe2:{NFSU2_TR(0x56abe2);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abe7:{NFSU2_TR(0x56abe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abe8:{NFSU2_TR(0x56abe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56abedull));
TAIL_STATIC(0x537a60u,537);
}
B56abed:L56abed:{c.instructions+=3;NFSU2_TR(0x56abed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56abee:{NFSU2_TR(0x56abee);
__builtin_memmove((R+12),(R+0),4);
}
B56abf0:{NFSU2_TR(0x56abf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56abf5ull));
TAIL_STATIC(0x52d100u,52d);
}
B56abf5:L56abf5:{c.instructions+=3;NFSU2_TR(0x56abf5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B56abf8:{NFSU2_TR(0x56abf8);
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
B56abfa:{NFSU2_TR(0x56abfa);
if(r1(R+518)){{goto L56ac0f;}}
}
B56abfc:L56abfc:{c.instructions+=3;NFSU2_TR(0x56abfc);
u8 U[4];
w4(U+0,u32(0x5073ef13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac01:{NFSU2_TR(0x56ac01);
__builtin_memmove((R+4),(R+28),4);
}
B56ac03:{NFSU2_TR(0x56ac03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac08ull));
TAIL_STATIC(0x563290u,563);
}
B56ac08:L56ac08:{c.instructions+=5;NFSU2_TR(0x56ac08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ac09:{NFSU2_TR(0x56ac09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ac0a:{NFSU2_TR(0x56ac0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ac0b:{NFSU2_TR(0x56ac0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ac0c:{NFSU2_TR(0x56ac0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ac0f:L56ac0f:{c.instructions+=2;NFSU2_TR(0x56ac0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac10:{NFSU2_TR(0x56ac10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac15ull));
TAIL_STATIC(0x52d100u,52d);
}
B56ac15:L56ac15:{c.instructions+=3;NFSU2_TR(0x56ac15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56ac18:{NFSU2_TR(0x56ac18);
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
B56ac1a:{NFSU2_TR(0x56ac1a);
if(r1(R+518)){{goto L56ae77;}}
}
B56ac20:L56ac20:{c.instructions+=3;NFSU2_TR(0x56ac20);
u8 U[4];
w4(U+0,u32(0xd9feec59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac25:{NFSU2_TR(0x56ac25);
__builtin_memmove((R+4),(R+28),4);
}
B56ac27:{NFSU2_TR(0x56ac27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac2cull));
TAIL_STATIC(0x563290u,563);
}
B56ac2c:L56ac2c:{c.instructions+=5;NFSU2_TR(0x56ac2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ac2d:{NFSU2_TR(0x56ac2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ac2e:{NFSU2_TR(0x56ac2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ac2f:{NFSU2_TR(0x56ac2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ac30:{NFSU2_TR(0x56ac30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ac33:L56ac33:{c.instructions+=2;NFSU2_TR(0x56ac33);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd9feec59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ac39:{NFSU2_TR(0x56ac39);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56ad3b;}}
}
B56ac3f:L56ac3f:{c.instructions+=1;NFSU2_TR(0x56ac3f);
if(r1(R+518)){{goto L56ad2c;}}
}
B56ac45:L56ac45:{c.instructions+=2;NFSU2_TR(0x56ac45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9a3b571dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ac4b:{NFSU2_TR(0x56ac4b);
if(r1(R+518)){{goto L56ae6b;}}
}
B56ac51:L56ac51:{c.instructions+=2;NFSU2_TR(0x56ac51);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ac57:{NFSU2_TR(0x56ac57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56ac5d:L56ac5d:{c.instructions+=4;NFSU2_TR(0x56ac5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ac60:{NFSU2_TR(0x56ac60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56ac63:{NFSU2_TR(0x56ac63);
w4(R+4,u32(0x838980ull));
}
B56ac68:{NFSU2_TR(0x56ac68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac6dull));
TAIL_STATIC(0x521580u,521);
}
B56ac6d:L56ac6d:{c.instructions+=2;NFSU2_TR(0x56ac6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ac6f:{NFSU2_TR(0x56ac6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ac88;}}
}
B56ac71:L56ac71:{c.instructions+=3;NFSU2_TR(0x56ac71);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac76:{NFSU2_TR(0x56ac76);
w4(R+4,u32(0x838980ull));
}
B56ac7b:{NFSU2_TR(0x56ac7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac80ull));
TAIL_STATIC(0x50ee90u,50e);
}
B56ac80:L56ac80:{c.instructions+=3;NFSU2_TR(0x56ac80);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ac82:{NFSU2_TR(0x56ac82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ac86:{NFSU2_TR(0x56ac86);
if(r1(R+518)){{goto L56ac8c;}}
}
B56ac88:L56ac88:{c.instructions+=1;NFSU2_TR(0x56ac88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56ac8c:L56ac8c:{c.instructions+=3;NFSU2_TR(0x56ac8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac8d:{NFSU2_TR(0x56ac8d);
w4(R+4,u32(0x838980ull));
}
B56ac92:{NFSU2_TR(0x56ac92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ac97ull));
TAIL_STATIC(0x521850u,521);
}
B56ac97:L56ac97:{c.instructions+=3;NFSU2_TR(0x56ac97);
__builtin_memmove((R+24),(R+0),4);
}
B56ac99:{NFSU2_TR(0x56ac99);
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
B56ac9b:{NFSU2_TR(0x56ac9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56acb2;}}
}
B56ac9d:L56ac9d:{c.instructions+=3;NFSU2_TR(0x56ac9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ac9e:{NFSU2_TR(0x56ac9e);
w4(R+4,u32(0x8392c0ull));
}
B56aca3:{NFSU2_TR(0x56aca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aca8ull));
TAIL_STATIC(0x6102f0u,610);
}
B56aca8:L56aca8:{c.instructions+=3;NFSU2_TR(0x56aca8);
__builtin_memmove((R+24),(R+0),4);
}
B56acaa:{NFSU2_TR(0x56acaa);
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
B56acac:{NFSU2_TR(0x56acac);
if(r1(R+518)){{goto L56ae77;}}
}
B56acb2:L56acb2:{c.instructions+=4;NFSU2_TR(0x56acb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56acb4:{NFSU2_TR(0x56acb4);
u8 U[4];
w4(U+0,u32(0x39dd714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56acb9:{NFSU2_TR(0x56acb9);
__builtin_memmove((R+4),(R+24),4);
}
B56acbb:{NFSU2_TR(0x56acbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56acc0ull));
TAIL_STATIC(0x61b500u,61b);
}
B56acc0:L56acc0:{c.instructions+=5;NFSU2_TR(0x56acc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56acc3:{NFSU2_TR(0x56acc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56acc5:{NFSU2_TR(0x56acc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B56acc8:{NFSU2_TR(0x56acc8);
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
B56acca:{NFSU2_TR(0x56acca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56acd0:L56acd0:{c.instructions+=2;NFSU2_TR(0x56acd0);
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
B56acd2:{NFSU2_TR(0x56acd2);
if(r1(R+518)){{goto L56ae77;}}
}
B56acd8:L56acd8:{c.instructions+=9;NFSU2_TR(0x56acd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56acdb:{NFSU2_TR(0x56acdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56acde:{NFSU2_TR(0x56acde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ace1:{NFSU2_TR(0x56ace1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ace2:{NFSU2_TR(0x56ace2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ace3:{NFSU2_TR(0x56ace3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ace4:{NFSU2_TR(0x56ace4);
u8 U[4];
w4(U+0,u32(0xc519bfc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ace9:{NFSU2_TR(0x56ace9);
__builtin_memmove((R+4),(R+28),4);
}
B56aceb:{NFSU2_TR(0x56aceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56acf0ull));
TAIL_STATIC(0x50da20u,50d);
}
B56acf0:L56acf0:{c.instructions+=6;NFSU2_TR(0x56acf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56acf3:{NFSU2_TR(0x56acf3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56acf5:{NFSU2_TR(0x56acf5);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56acfa:{NFSU2_TR(0x56acfa);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56acff:{NFSU2_TR(0x56acff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ad00:{NFSU2_TR(0x56ad00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ad05ull));
TAIL_STATIC(0x537c60u,537);
}
B56ad05:L56ad05:{c.instructions+=10;NFSU2_TR(0x56ad05);
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
B56ad08:{NFSU2_TR(0x56ad08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ad09:{NFSU2_TR(0x56ad09);
__builtin_memmove(gp(0x839bb8),(R+24),4);
}
B56ad0f:{NFSU2_TR(0x56ad0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ad10:{NFSU2_TR(0x56ad10);
__builtin_memmove(gp(0x8389a8),(R+12),4);
}
B56ad16:{NFSU2_TR(0x56ad16);
s1(0x838983,u8(0x1ull));
}
B56ad1d:{NFSU2_TR(0x56ad1d);
s4(0x8389a0,u32(0x1ull));
}
B56ad27:{NFSU2_TR(0x56ad27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ad28:{NFSU2_TR(0x56ad28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ad29:{NFSU2_TR(0x56ad29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ad2c:L56ad2c:{c.instructions+=3;NFSU2_TR(0x56ad2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ad2d:{NFSU2_TR(0x56ad2d);
__builtin_memmove((R+4),(R+28),4);
}
B56ad2f:{NFSU2_TR(0x56ad2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ad34ull));
TAIL_STATIC(0x563290u,563);
}
B56ad34:L56ad34:{c.instructions+=5;NFSU2_TR(0x56ad34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ad35:{NFSU2_TR(0x56ad35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ad36:{NFSU2_TR(0x56ad36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ad37:{NFSU2_TR(0x56ad37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ad38:{NFSU2_TR(0x56ad38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ad3b:L56ad3b:{c.instructions+=2;NFSU2_TR(0x56ad3b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ad41:{NFSU2_TR(0x56ad41);
if(r1(R+518)){{goto L56ae50;}}
}
B56ad47:L56ad47:{c.instructions+=2;NFSU2_TR(0x56ad47);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xe75749d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe75749d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe75749d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ad4d:{NFSU2_TR(0x56ad4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56ad53:L56ad53:{c.instructions+=2;NFSU2_TR(0x56ad53);
w4(R+4,u32(0x838980ull));
}
B56ad58:{NFSU2_TR(0x56ad58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ad5dull));
TAIL_STATIC(0x521580u,521);
}
B56ad5d:L56ad5d:{c.instructions+=2;NFSU2_TR(0x56ad5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ad5f:{NFSU2_TR(0x56ad5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ad78;}}
}
B56ad61:L56ad61:{c.instructions+=3;NFSU2_TR(0x56ad61);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ad66:{NFSU2_TR(0x56ad66);
w4(R+4,u32(0x838980ull));
}
B56ad6b:{NFSU2_TR(0x56ad6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ad70ull));
TAIL_STATIC(0x50ee90u,50e);
}
B56ad70:L56ad70:{c.instructions+=2;NFSU2_TR(0x56ad70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ad72:{NFSU2_TR(0x56ad72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ad78;}}
}
B56ad74:L56ad74:{c.instructions+=2;NFSU2_TR(0x56ad74);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B56ad76:{NFSU2_TR(0x56ad76);
{goto L56ad7a;}
}
B56ad78:L56ad78:{c.instructions+=1;NFSU2_TR(0x56ad78);
w1(R+12,u8(0x1ull));
}
B56ad7a:L56ad7a:{c.instructions+=4;NFSU2_TR(0x56ad7a);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B56ad7f:{NFSU2_TR(0x56ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ad80:{NFSU2_TR(0x56ad80);
w4(R+4,u32(0x838980ull));
}
B56ad85:{NFSU2_TR(0x56ad85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ad8aull));
TAIL_STATIC(0x5477f0u,547);
}
B56ad8a:L56ad8a:{c.instructions+=2;NFSU2_TR(0x56ad8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ad8c:{NFSU2_TR(0x56ad8c);
if(r1(R+518)){{goto L56adf0;}}
}
B56ad8e:L56ad8e:{c.instructions+=1;NFSU2_TR(0x56ad8e);
w4(R+24,u32(0x1ull));
}
B56ad93:L56ad93:{c.instructions+=4;NFSU2_TR(0x56ad93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ad96:{NFSU2_TR(0x56ad96);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ad99:{NFSU2_TR(0x56ad99);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ad9b:{NFSU2_TR(0x56ad9b);
if(r1(R+518)){{goto L56add5;}}
}
B56ad9d:L56ad9d:{c.instructions+=3;NFSU2_TR(0x56ad9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B56ada0:{NFSU2_TR(0x56ada0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ada1:{NFSU2_TR(0x56ada1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ada6ull));
TAIL_STATIC(0x43be60u,43b);
}
B56ada6:L56ada6:{c.instructions+=2;NFSU2_TR(0x56ada6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ada8:{NFSU2_TR(0x56ada8);
if(r1(R+518)){{goto L56adaf;}}
}
B56adaa:L56adaa:{c.instructions+=2;NFSU2_TR(0x56adaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B56adad:{NFSU2_TR(0x56adad);
{goto L56adb1;}
}
B56adaf:L56adaf:{c.instructions+=1;NFSU2_TR(0x56adaf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56adb1:L56adb1:{c.instructions+=3;NFSU2_TR(0x56adb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56adb2:{NFSU2_TR(0x56adb2);
u8 U[4];
w4(U+0,u32(0x79d8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56adb7:{NFSU2_TR(0x56adb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56adbcull));
TAIL_STATIC(0x50b990u,50b);
}
B56adbc:L56adbc:{c.instructions+=4;NFSU2_TR(0x56adbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56adbf:{NFSU2_TR(0x56adbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56adc2:{NFSU2_TR(0x56adc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56adc4:{NFSU2_TR(0x56adc4);
if(r1(R+518)){{goto L56add5;}}
}
B56adc6:L56adc6:{c.instructions+=2;NFSU2_TR(0x56adc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56adc9:{NFSU2_TR(0x56adc9);
if(r1(R+518)){{goto L56add5;}}
}
B56adcb:L56adcb:{c.instructions+=2;NFSU2_TR(0x56adcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56adce:{NFSU2_TR(0x56adce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B56add5:L56add5:{c.instructions+=3;NFSU2_TR(0x56add5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56add6:{NFSU2_TR(0x56add6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56add9:{NFSU2_TR(0x56add9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56ad93u);}goto L56ad93;}}
}
B56addb:L56addb:{c.instructions+=2;NFSU2_TR(0x56addb);
__builtin_memmove((R+4),(R+28),4);
}
B56addd:{NFSU2_TR(0x56addd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ade2ull));
TAIL_STATIC(0x538ca0u,538);
}
B56ade2:L56ade2:{c.instructions+=3;NFSU2_TR(0x56ade2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56ade4:{NFSU2_TR(0x56ade4);
__builtin_memmove((R+4),(R+28),4);
}
B56ade6:{NFSU2_TR(0x56ade6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ade9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56ade9:L56ade9:{c.instructions+=5;NFSU2_TR(0x56ade9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56adea:{NFSU2_TR(0x56adea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56adeb:{NFSU2_TR(0x56adeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56adec:{NFSU2_TR(0x56adec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56aded:{NFSU2_TR(0x56aded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56adf0:L56adf0:{c.instructions+=3;NFSU2_TR(0x56adf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56adf3:{NFSU2_TR(0x56adf3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56adf5:{NFSU2_TR(0x56adf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56adfaull));
TAIL_STATIC(0x495910u,495);
}
B56adfa:L56adfa:{c.instructions+=3;NFSU2_TR(0x56adfa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B56adfb:{NFSU2_TR(0x56adfb);
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
B56adfe:{NFSU2_TR(0x56adfe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56ae21;}}
}
B56ae00:L56ae00:{c.instructions+=1;NFSU2_TR(0x56ae00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x56aea0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56ae07:L56ae07:{c.instructions+=2;NFSU2_TR(0x56ae07);
w4(R+24,u32(0x27b8f0ddull));
}
B56ae0c:{NFSU2_TR(0x56ae0c);
{goto L56ae21;}
}
B56ae0e:L56ae0e:{c.instructions+=2;NFSU2_TR(0x56ae0e);
w4(R+24,u32(0x27b8f0deull));
}
B56ae13:{NFSU2_TR(0x56ae13);
{goto L56ae21;}
}
B56ae15:L56ae15:{c.instructions+=2;NFSU2_TR(0x56ae15);
w4(R+24,u32(0x27b8f0dfull));
}
B56ae1a:{NFSU2_TR(0x56ae1a);
{goto L56ae21;}
}
B56ae1c:L56ae1c:{c.instructions+=1;NFSU2_TR(0x56ae1c);
w4(R+24,u32(0x27b8f0e0ull));
}
B56ae21:L56ae21:{c.instructions+=4;NFSU2_TR(0x56ae21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ae24:{NFSU2_TR(0x56ae24);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56ae27:{NFSU2_TR(0x56ae27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ae29:{NFSU2_TR(0x56ae29);
if(r1(R+518)){{goto L56ae3b;}}
}
B56ae2b:L56ae2b:{c.instructions+=5;NFSU2_TR(0x56ae2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ae2e:{NFSU2_TR(0x56ae2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ae31:{NFSU2_TR(0x56ae31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ae32:{NFSU2_TR(0x56ae32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ae33:{NFSU2_TR(0x56ae33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae38ull));
TAIL_STATIC(0x50c990u,50c);
}
B56ae38:L56ae38:{c.instructions+=1;NFSU2_TR(0x56ae38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56ae3b:L56ae3b:{c.instructions+=2;NFSU2_TR(0x56ae3b);
__builtin_memmove((R+4),(R+28),4);
}
B56ae3d:{NFSU2_TR(0x56ae3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae42ull));
TAIL_STATIC(0x538ca0u,538);
}
B56ae42:L56ae42:{c.instructions+=3;NFSU2_TR(0x56ae42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56ae44:{NFSU2_TR(0x56ae44);
__builtin_memmove((R+4),(R+28),4);
}
B56ae46:{NFSU2_TR(0x56ae46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae49ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56ae49:L56ae49:{c.instructions+=5;NFSU2_TR(0x56ae49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ae4a:{NFSU2_TR(0x56ae4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ae4b:{NFSU2_TR(0x56ae4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ae4c:{NFSU2_TR(0x56ae4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ae4d:{NFSU2_TR(0x56ae4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ae50:L56ae50:{c.instructions+=3;NFSU2_TR(0x56ae50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ae56:{NFSU2_TR(0x56ae56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ae5b:{NFSU2_TR(0x56ae5b);
if(r1(R+518)){{goto L56ae6b;}}
}
B56ae5d:L56ae5d:{c.instructions+=2;NFSU2_TR(0x56ae5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ae62:{NFSU2_TR(0x56ae62);
if(r1(R+518)){{goto L56ae7e;}}
}
B56ae64:L56ae64:{c.instructions+=2;NFSU2_TR(0x56ae64);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56ae69:{NFSU2_TR(0x56ae69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ae77;}}
}
B56ae6b:L56ae6b:{c.instructions+=1;NFSU2_TR(0x56ae6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae70ull));
TAIL_STATIC(0x54f980u,54f);
}
B56ae70:L56ae70:{c.instructions+=2;NFSU2_TR(0x56ae70);
__builtin_memmove((R+4),(R+0),4);
}
B56ae72:{NFSU2_TR(0x56ae72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae77ull));
TAIL_STATIC(0x55bd60u,55b);
}
B56ae77:L56ae77:{c.instructions+=5;NFSU2_TR(0x56ae77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ae78:{NFSU2_TR(0x56ae78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ae79:{NFSU2_TR(0x56ae79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ae7a:{NFSU2_TR(0x56ae7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ae7b:{NFSU2_TR(0x56ae7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ae7e:L56ae7e:{c.instructions+=4;NFSU2_TR(0x56ae7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ae81:{NFSU2_TR(0x56ae81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ae83:{NFSU2_TR(0x56ae83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ae84:{NFSU2_TR(0x56ae84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae89ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B56ae89:L56ae89:{c.instructions+=2;NFSU2_TR(0x56ae89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56ae8c:{NFSU2_TR(0x56ae8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae91ull));
TAIL_STATIC(0x54f980u,54f);
}
B56ae91:L56ae91:{c.instructions+=2;NFSU2_TR(0x56ae91);
__builtin_memmove((R+4),(R+0),4);
}
B56ae93:{NFSU2_TR(0x56ae93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ae98ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B56ae98:L56ae98:{c.instructions+=5;NFSU2_TR(0x56ae98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ae99:{NFSU2_TR(0x56ae99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ae9a:{NFSU2_TR(0x56ae9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ae9b:{NFSU2_TR(0x56ae9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56ae9c:{NFSU2_TR(0x56ae9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56aeb0:L56aeb0:{c.instructions+=14;NFSU2_TR(0x56aeb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aeb2:{NFSU2_TR(0x56aeb2);
u8 U[4];
w4(U+0,u32(0x7785d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aeb7:{NFSU2_TR(0x56aeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56aebd:{NFSU2_TR(0x56aebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aebe:{NFSU2_TR(0x56aebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aec5:{NFSU2_TR(0x56aec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aec6:{NFSU2_TR(0x56aec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56aeca:{NFSU2_TR(0x56aeca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aecb:{NFSU2_TR(0x56aecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aecc:{NFSU2_TR(0x56aecc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aecd:{NFSU2_TR(0x56aecd);
__builtin_memmove((R+24),(R+4),4);
}
B56aecf:{NFSU2_TR(0x56aecf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56aed0:{NFSU2_TR(0x56aed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aed4:{NFSU2_TR(0x56aed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56aed9ull));
TAIL_STATIC(0x552330u,552);
}
B56aed9:L56aed9:{c.instructions+=28;NFSU2_TR(0x56aed9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56aedf:{NFSU2_TR(0x56aedf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56aee1:{NFSU2_TR(0x56aee1);
u8 U[4];
w4(U+0,u32(0x79d8ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B56aee7:{NFSU2_TR(0x56aee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aeeb:{NFSU2_TR(0x56aeeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56aeed:{NFSU2_TR(0x56aeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aef0:{NFSU2_TR(0x56aef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56aef6:{NFSU2_TR(0x56aef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56aef8:{NFSU2_TR(0x56aef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aefb:{NFSU2_TR(0x56aefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af01:{NFSU2_TR(0x56af01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af07:{NFSU2_TR(0x56af07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af0d:{NFSU2_TR(0x56af0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x2daab07ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56af17:{NFSU2_TR(0x56af17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56af21:{NFSU2_TR(0x56af21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af27:{NFSU2_TR(0x56af27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x43180000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56af31:{NFSU2_TR(0x56af31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x43250000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56af3b:{NFSU2_TR(0x56af3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56af41:{NFSU2_TR(0x56af41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56af47:{NFSU2_TR(0x56af47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56af4d:{NFSU2_TR(0x56af4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56af53:{NFSU2_TR(0x56af53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56af59:{NFSU2_TR(0x56af59);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B56af5f:{NFSU2_TR(0x56af5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56af62:{NFSU2_TR(0x56af62);
u8 U[4];
w4(U+0,u32(0x79d8e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56af67:{NFSU2_TR(0x56af67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56af68:{NFSU2_TR(0x56af68);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56af6d:{NFSU2_TR(0x56af6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56af72ull));
TAIL_STATIC(0x4953c0u,495);
}
B56af72:L56af72:{c.instructions+=5;NFSU2_TR(0x56af72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af78:{NFSU2_TR(0x56af78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56af7b:{NFSU2_TR(0x56af7b);
u8 U[4];
w4(U+0,u32(0x79cb30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56af80:{NFSU2_TR(0x56af80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56af81:{NFSU2_TR(0x56af81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56af86ull));
TAIL_STATIC(0x4953e0u,495);
}
B56af86:L56af86:{c.instructions+=3;NFSU2_TR(0x56af86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56af87:{NFSU2_TR(0x56af87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56af8d:{NFSU2_TR(0x56af8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56af92ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56af92:L56af92:{c.instructions+=4;NFSU2_TR(0x56af92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B56af95:{NFSU2_TR(0x56af95);
__builtin_memmove((R+4),(R+24),4);
}
B56af97:{NFSU2_TR(0x56af97);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56af9e:{NFSU2_TR(0x56af9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56afa3ull));
TAIL_STATIC(0x563c60u,563);
}
B56afa3:L56afa3:{c.instructions+=5;NFSU2_TR(0x56afa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56afa6:{NFSU2_TR(0x56afa6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56afa8:{NFSU2_TR(0x56afa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B56afaf:{NFSU2_TR(0x56afaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56afb2:{NFSU2_TR(0x56afb2);
if(r1(R+518)){{goto L56afd1;}}
}
B56afb4:L56afb4:{c.instructions+=2;NFSU2_TR(0x56afb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56afb5:{NFSU2_TR(0x56afb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56afbaull));
TAIL_STATIC(0x52cef0u,52c);
}
B56afba:L56afba:{c.instructions+=3;NFSU2_TR(0x56afba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56afbd:{NFSU2_TR(0x56afbd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56afbf:{NFSU2_TR(0x56afbf);
if(r1(R+518)){{goto L56afd1;}}
}
B56afc1:L56afc1:{c.instructions+=3;NFSU2_TR(0x56afc1);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56afc6:{NFSU2_TR(0x56afc6);
__builtin_memmove((R+4),(R+0),4);
}
B56afc8:{NFSU2_TR(0x56afc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56afcdull));
TAIL_STATIC(0x517f80u,517);
}
B56afcd:L56afcd:{c.instructions+=2;NFSU2_TR(0x56afcd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56afcf:{NFSU2_TR(0x56afcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56afec;}}
}
B56afd1:L56afd1:{c.instructions+=3;NFSU2_TR(0x56afd1);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B56afd6:{NFSU2_TR(0x56afd6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56afd8:{NFSU2_TR(0x56afd8);
if(r1(R+518)){{goto L56afea;}}
}
B56afda:L56afda:{c.instructions+=4;NFSU2_TR(0x56afda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56afdd:{NFSU2_TR(0x56afdd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56afde:{NFSU2_TR(0x56afde);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56afe3:{NFSU2_TR(0x56afe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56afe8ull));
TAIL_STATIC(0x52c570u,52c);
}
B56afe8:L56afe8:{c.instructions+=1;NFSU2_TR(0x56afe8);
{goto L56afec;}
}
B56afea:L56afea:{c.instructions+=1;NFSU2_TR(0x56afea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56afec:L56afec:{c.instructions+=4;NFSU2_TR(0x56afec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56afef:{NFSU2_TR(0x56afef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56aff1:{NFSU2_TR(0x56aff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56aff7:{NFSU2_TR(0x56aff7);
if(r1(R+518)){TAIL_STATIC(0x56b016u,56b);}
}
B56aff9:L56aff9:{c.instructions+=2;NFSU2_TR(0x56aff9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56affa:{NFSU2_TR(0x56affa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56afffull));
TAIL_STATIC(0x52cef0u,52c);
}
B56afff:L56afff:{c.instructions+=1;NFSU2_TR(0x56afff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x56b002u,56b);
}
XIT:NFSU2_TR_EXIT(0x56a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
